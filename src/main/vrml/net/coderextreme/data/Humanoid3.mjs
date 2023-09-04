let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "4.0";
let head1 = browser.currentScene.createNode("head");
let meta2 = browser.currentScene.createNode("meta");
meta2.name = "title";
meta2.content = "Humanoid3.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

let meta3 = browser.currentScene.createNode("meta");
meta3.name = "identifier";
meta3.content = "http://www.web3d.org/x3d/content/examples/HumanoidAnimation/Humanoid3.x3d";
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
Coordinate268.point = new MFVec3f(new float[0.0028,1.0568,-0.0776,0.0035,1.0925,-0.0787]);
LineSet266.coord = Coordinate268;

Shape265.geometry = LineSet266;

HAnimSegment261.children[1] = Shape265;

HAnimJoint260.children = new MFNode();

HAnimJoint260.children[0] = HAnimSegment261;

let HAnimJoint269 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint269.DEF = "hanim_vl4";
HAnimJoint269.name = "vl4";
HAnimJoint269.center = new SFVec3f(new float[0.0035,1.0925,-0.0787]);
let HAnimSegment270 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment270.DEF = "hanim_l4";
HAnimSegment270.name = "l4";
let Transform271 = browser.currentScene.createNode("Transform");
Transform271.translation = new SFVec3f(new float[0.0035,1.0925,-0.0787]);
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
Coordinate277.point = new MFVec3f(new float[0.0035,1.0925,-0.0787,0.0041,1.1276,-0.0796]);
LineSet275.coord = Coordinate277;

Shape274.geometry = LineSet275;

HAnimSegment270.children[1] = Shape274;

HAnimJoint269.children = new MFNode();

HAnimJoint269.children[0] = HAnimSegment270;

let HAnimJoint278 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint278.DEF = "hanim_vl3";
HAnimJoint278.name = "vl3";
HAnimJoint278.center = new SFVec3f(new float[0.0041,1.1276,-0.0796]);
let HAnimSegment279 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment279.DEF = "hanim_l3";
HAnimSegment279.name = "l3";
let Transform280 = browser.currentScene.createNode("Transform");
Transform280.translation = new SFVec3f(new float[0.0041,1.1276,-0.0796]);
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
Coordinate286.point = new MFVec3f(new float[0.0041,1.1276,-0.0796,0.0045,1.1546,-0.08]);
LineSet284.coord = Coordinate286;

Shape283.geometry = LineSet284;

HAnimSegment279.children[1] = Shape283;

let HAnimSite287 = browser.currentScene.createNode("HAnimSite");
HAnimSite287.DEF = "hanim_l_rib10_pt";
HAnimSite287.name = "l_rib10_pt";
HAnimSite287.translation = new SFVec3f(new float[0.0871,1.1925,0.0992]);
let TouchSensor288 = browser.currentScene.createNode("TouchSensor");
TouchSensor288.description = "HAnimSite l_rib10_pt";
HAnimSite287.children = new MFNode();

HAnimSite287.children[0] = TouchSensor288;

let Shape289 = browser.currentScene.createNode("Shape");
Shape289.USE = "HAnimSiteShape";
HAnimSite287.children[1] = Shape289;

HAnimSegment279.children[2] = HAnimSite287;

let HAnimSite290 = browser.currentScene.createNode("HAnimSite");
HAnimSite290.DEF = "hanim_r_rib10_pt";
HAnimSite290.name = "r_rib10_pt";
HAnimSite290.translation = new SFVec3f(new float[-0.0711,1.1941,0.1016]);
let TouchSensor291 = browser.currentScene.createNode("TouchSensor");
TouchSensor291.description = "HAnimSite r_rib10_pt";
HAnimSite290.children = new MFNode();

HAnimSite290.children[0] = TouchSensor291;

let Shape292 = browser.currentScene.createNode("Shape");
Shape292.USE = "HAnimSiteShape";
HAnimSite290.children[1] = Shape292;

HAnimSegment279.children[3] = HAnimSite290;

let HAnimSite293 = browser.currentScene.createNode("HAnimSite");
HAnimSite293.DEF = "hanim_spine_2_middle_back_pt";
HAnimSite293.name = "spine_2_middle_back_pt";
let TouchSensor294 = browser.currentScene.createNode("TouchSensor");
TouchSensor294.description = "HAnimSite spine_2_middle_back_pt";
HAnimSite293.children = new MFNode();

HAnimSite293.children[0] = TouchSensor294;

let Shape295 = browser.currentScene.createNode("Shape");
Shape295.USE = "HAnimSiteShape";
HAnimSite293.children[1] = Shape295;

HAnimSegment279.children[4] = HAnimSite293;

HAnimJoint278.children = new MFNode();

HAnimJoint278.children[0] = HAnimSegment279;

let HAnimJoint296 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint296.DEF = "hanim_vl2";
HAnimJoint296.name = "vl2";
HAnimJoint296.center = new SFVec3f(new float[0.0045,1.1546,-0.08]);
let HAnimSegment297 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment297.DEF = "hanim_l2";
HAnimSegment297.name = "l2";
let Transform298 = browser.currentScene.createNode("Transform");
Transform298.translation = new SFVec3f(new float[0.0045,1.1546,-0.08]);
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
Coordinate304.point = new MFVec3f(new float[0.0045,1.1546,-0.08,0.0048,1.1912,-0.0805]);
LineSet302.coord = Coordinate304;

Shape301.geometry = LineSet302;

HAnimSegment297.children[1] = Shape301;

HAnimJoint296.children = new MFNode();

HAnimJoint296.children[0] = HAnimSegment297;

let HAnimJoint305 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint305.DEF = "hanim_vl1";
HAnimJoint305.name = "vl1";
HAnimJoint305.center = new SFVec3f(new float[0.0048,1.1912,-0.0805]);
let HAnimSegment306 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment306.DEF = "hanim_l1";
HAnimSegment306.name = "l1";
let Transform307 = browser.currentScene.createNode("Transform");
Transform307.translation = new SFVec3f(new float[0.0048,1.1912,-0.0805]);
let Transform308 = browser.currentScene.createNode("Transform");
let Shape309 = browser.currentScene.createNode("Shape");
Shape309.USE = "HAnimJointShape";
Transform308.child = new undefined();

Transform308.child[0] = Shape309;

Transform307.children = new MFNode();

Transform307.children[0] = Transform308;

HAnimSegment306.children = new MFNode();

HAnimSegment306.children[0] = Transform307;

let Shape310 = browser.currentScene.createNode("Shape");
let LineSet311 = browser.currentScene.createNode("LineSet");
LineSet311.vertexCount = new MFInt32(new int[2]);
let ColorRGBA312 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA312.USE = "HAnimSegmentLineColorRGBA";
LineSet311.color = ColorRGBA312;

let Coordinate313 = browser.currentScene.createNode("Coordinate");
Coordinate313.point = new MFVec3f(new float[0.0048,1.1912,-0.0805,0.0051,1.2278,-0.0808]);
LineSet311.coord = Coordinate313;

Shape310.geometry = LineSet311;

HAnimSegment306.children[1] = Shape310;

HAnimJoint305.children = new MFNode();

HAnimJoint305.children[0] = HAnimSegment306;

let HAnimJoint314 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint314.DEF = "hanim_vt12";
HAnimJoint314.name = "vt12";
HAnimJoint314.center = new SFVec3f(new float[0.0051,1.2278,-0.0808]);
let HAnimSegment315 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment315.DEF = "hanim_t12";
HAnimSegment315.name = "t12";
let Transform316 = browser.currentScene.createNode("Transform");
Transform316.translation = new SFVec3f(new float[0.0051,1.2278,-0.0808]);
let Transform317 = browser.currentScene.createNode("Transform");
let Shape318 = browser.currentScene.createNode("Shape");
Shape318.USE = "HAnimJointShape";
Transform317.child = new undefined();

Transform317.child[0] = Shape318;

Transform316.children = new MFNode();

Transform316.children[0] = Transform317;

HAnimSegment315.children = new MFNode();

HAnimSegment315.children[0] = Transform316;

let Shape319 = browser.currentScene.createNode("Shape");
let LineSet320 = browser.currentScene.createNode("LineSet");
LineSet320.vertexCount = new MFInt32(new int[2]);
let ColorRGBA321 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA321.USE = "HAnimSegmentLineColorRGBA";
LineSet320.color = ColorRGBA321;

let Coordinate322 = browser.currentScene.createNode("Coordinate");
Coordinate322.point = new MFVec3f(new float[0.0051,1.2278,-0.0808,0.0053,1.2679,-0.081]);
LineSet320.coord = Coordinate322;

Shape319.geometry = LineSet320;

HAnimSegment315.children[1] = Shape319;

HAnimJoint314.children = new MFNode();

HAnimJoint314.children[0] = HAnimSegment315;

let HAnimJoint323 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint323.DEF = "hanim_vt11";
HAnimJoint323.name = "vt11";
HAnimJoint323.center = new SFVec3f(new float[0.0053,1.2679,-0.081]);
let HAnimSegment324 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment324.DEF = "hanim_t11";
HAnimSegment324.name = "t11";
let Transform325 = browser.currentScene.createNode("Transform");
Transform325.translation = new SFVec3f(new float[0.0053,1.2679,-0.081]);
let Transform326 = browser.currentScene.createNode("Transform");
let Shape327 = browser.currentScene.createNode("Shape");
Shape327.USE = "HAnimJointShape";
Transform326.child = new undefined();

Transform326.child[0] = Shape327;

Transform325.children = new MFNode();

Transform325.children[0] = Transform326;

HAnimSegment324.children = new MFNode();

HAnimSegment324.children[0] = Transform325;

let Shape328 = browser.currentScene.createNode("Shape");
let LineSet329 = browser.currentScene.createNode("LineSet");
LineSet329.vertexCount = new MFInt32(new int[2]);
let ColorRGBA330 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA330.USE = "HAnimSegmentLineColorRGBA";
LineSet329.color = ColorRGBA330;

let Coordinate331 = browser.currentScene.createNode("Coordinate");
Coordinate331.point = new MFVec3f(new float[0.0053,1.2679,-0.081,0.0056,1.2848,-0.0822]);
LineSet329.coord = Coordinate331;

Shape328.geometry = LineSet329;

HAnimSegment324.children[1] = Shape328;

let HAnimSite332 = browser.currentScene.createNode("HAnimSite");
HAnimSite332.DEF = "hanim_substernale_pt";
HAnimSite332.name = "substernale_pt";
HAnimSite332.translation = new SFVec3f(new float[0.0085,1.2995,0.1147]);
let TouchSensor333 = browser.currentScene.createNode("TouchSensor");
TouchSensor333.description = "HAnimSite substernale_pt";
HAnimSite332.children = new MFNode();

HAnimSite332.children[0] = TouchSensor333;

let Shape334 = browser.currentScene.createNode("Shape");
Shape334.USE = "HAnimSiteShape";
HAnimSite332.children[1] = Shape334;

HAnimSegment324.children[2] = HAnimSite332;

HAnimJoint323.children = new MFNode();

HAnimJoint323.children[0] = HAnimSegment324;

let HAnimJoint335 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint335.DEF = "hanim_vt10";
HAnimJoint335.name = "vt10";
HAnimJoint335.center = new SFVec3f(new float[0.0056,1.2848,-0.0822]);
let HAnimSegment336 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment336.DEF = "hanim_t10";
HAnimSegment336.name = "t10";
let Transform337 = browser.currentScene.createNode("Transform");
Transform337.translation = new SFVec3f(new float[0.0056,1.2848,-0.0822]);
let Transform338 = browser.currentScene.createNode("Transform");
let Shape339 = browser.currentScene.createNode("Shape");
Shape339.USE = "HAnimJointShape";
Transform338.child = new undefined();

Transform338.child[0] = Shape339;

Transform337.children = new MFNode();

Transform337.children[0] = Transform338;

HAnimSegment336.children = new MFNode();

HAnimSegment336.children[0] = Transform337;

let Shape340 = browser.currentScene.createNode("Shape");
let LineSet341 = browser.currentScene.createNode("LineSet");
LineSet341.vertexCount = new MFInt32(new int[2]);
let ColorRGBA342 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA342.USE = "HAnimSegmentLineColorRGBA";
LineSet341.color = ColorRGBA342;

let Coordinate343 = browser.currentScene.createNode("Coordinate");
Coordinate343.point = new MFVec3f(new float[0.0056,1.2848,-0.0822,0.0057,1.3126,-0.0838]);
LineSet341.coord = Coordinate343;

Shape340.geometry = LineSet341;

HAnimSegment336.children[1] = Shape340;

let HAnimSite344 = browser.currentScene.createNode("HAnimSite");
HAnimSite344.DEF = "hanim_l_thelion_pt";
HAnimSite344.name = "l_thelion_pt";
HAnimSite344.translation = new SFVec3f(new float[0.0918,1.3382,0.1192]);
let TouchSensor345 = browser.currentScene.createNode("TouchSensor");
TouchSensor345.description = "HAnimSite l_thelion_pt";
HAnimSite344.children = new MFNode();

HAnimSite344.children[0] = TouchSensor345;

let Shape346 = browser.currentScene.createNode("Shape");
Shape346.USE = "HAnimSiteShape";
HAnimSite344.children[1] = Shape346;

HAnimSegment336.children[2] = HAnimSite344;

let HAnimSite347 = browser.currentScene.createNode("HAnimSite");
HAnimSite347.DEF = "hanim_r_thelion_pt";
HAnimSite347.name = "r_thelion_pt";
HAnimSite347.translation = new SFVec3f(new float[-0.0736,1.3385,0.1217]);
let TouchSensor348 = browser.currentScene.createNode("TouchSensor");
TouchSensor348.description = "HAnimSite r_thelion_pt";
HAnimSite347.children = new MFNode();

HAnimSite347.children[0] = TouchSensor348;

let Shape349 = browser.currentScene.createNode("Shape");
Shape349.USE = "HAnimSiteShape";
HAnimSite347.children[1] = Shape349;

HAnimSegment336.children[3] = HAnimSite347;

HAnimJoint335.children = new MFNode();

HAnimJoint335.children[0] = HAnimSegment336;

let HAnimJoint350 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint350.DEF = "hanim_vt9";
HAnimJoint350.name = "vt9";
HAnimJoint350.center = new SFVec3f(new float[0.0057,1.3126,-0.0838]);
let HAnimSegment351 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment351.DEF = "hanim_t9";
HAnimSegment351.name = "t9";
let Transform352 = browser.currentScene.createNode("Transform");
Transform352.translation = new SFVec3f(new float[0.0057,1.3126,-0.0838]);
let Transform353 = browser.currentScene.createNode("Transform");
let Shape354 = browser.currentScene.createNode("Shape");
Shape354.USE = "HAnimJointShape";
Transform353.child = new undefined();

Transform353.child[0] = Shape354;

Transform352.children = new MFNode();

Transform352.children[0] = Transform353;

HAnimSegment351.children = new MFNode();

HAnimSegment351.children[0] = Transform352;

let Shape355 = browser.currentScene.createNode("Shape");
let LineSet356 = browser.currentScene.createNode("LineSet");
LineSet356.vertexCount = new MFInt32(new int[2]);
let ColorRGBA357 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA357.USE = "HAnimSegmentLineColorRGBA";
LineSet356.color = ColorRGBA357;

let Coordinate358 = browser.currentScene.createNode("Coordinate");
Coordinate358.point = new MFVec3f(new float[0.0057,1.3126,-0.0838,0.0057,1.3382,-0.0845]);
LineSet356.coord = Coordinate358;

Shape355.geometry = LineSet356;

HAnimSegment351.children[1] = Shape355;

HAnimJoint350.children = new MFNode();

HAnimJoint350.children[0] = HAnimSegment351;

let HAnimJoint359 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint359.DEF = "hanim_vt8";
HAnimJoint359.name = "vt8";
HAnimJoint359.center = new SFVec3f(new float[0.0057,1.3382,-0.0845]);
let HAnimSegment360 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment360.DEF = "hanim_t8";
HAnimSegment360.name = "t8";
let Transform361 = browser.currentScene.createNode("Transform");
Transform361.translation = new SFVec3f(new float[0.0057,1.3382,-0.0845]);
let Transform362 = browser.currentScene.createNode("Transform");
let Shape363 = browser.currentScene.createNode("Shape");
Shape363.USE = "HAnimJointShape";
Transform362.child = new undefined();

Transform362.child[0] = Shape363;

Transform361.children = new MFNode();

Transform361.children[0] = Transform362;

HAnimSegment360.children = new MFNode();

HAnimSegment360.children[0] = Transform361;

let Shape364 = browser.currentScene.createNode("Shape");
let LineSet365 = browser.currentScene.createNode("LineSet");
LineSet365.vertexCount = new MFInt32(new int[2]);
let ColorRGBA366 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA366.USE = "HAnimSegmentLineColorRGBA";
LineSet365.color = ColorRGBA366;

let Coordinate367 = browser.currentScene.createNode("Coordinate");
Coordinate367.point = new MFVec3f(new float[0.0057,1.3382,-0.0845,0.0058,1.3625,-0.0833]);
LineSet365.coord = Coordinate367;

Shape364.geometry = LineSet365;

HAnimSegment360.children[1] = Shape364;

HAnimJoint359.children = new MFNode();

HAnimJoint359.children[0] = HAnimSegment360;

let HAnimJoint368 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint368.DEF = "hanim_vt7";
HAnimJoint368.name = "vt7";
HAnimJoint368.center = new SFVec3f(new float[0.0058,1.3625,-0.0833]);
let HAnimSegment369 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment369.DEF = "hanim_t7";
HAnimSegment369.name = "t7";
let Transform370 = browser.currentScene.createNode("Transform");
Transform370.translation = new SFVec3f(new float[0.0058,1.3625,-0.0833]);
let Transform371 = browser.currentScene.createNode("Transform");
let Shape372 = browser.currentScene.createNode("Shape");
Shape372.USE = "HAnimJointShape";
Transform371.child = new undefined();

Transform371.child[0] = Shape372;

Transform370.children = new MFNode();

Transform370.children[0] = Transform371;

HAnimSegment369.children = new MFNode();

HAnimSegment369.children[0] = Transform370;

let Shape373 = browser.currentScene.createNode("Shape");
let LineSet374 = browser.currentScene.createNode("LineSet");
LineSet374.vertexCount = new MFInt32(new int[2]);
let ColorRGBA375 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA375.USE = "HAnimSegmentLineColorRGBA";
LineSet374.color = ColorRGBA375;

let Coordinate376 = browser.currentScene.createNode("Coordinate");
Coordinate376.point = new MFVec3f(new float[0.0058,1.3625,-0.0833,0.0059,1.3866,-0.08]);
LineSet374.coord = Coordinate376;

Shape373.geometry = LineSet374;

HAnimSegment369.children[1] = Shape373;

let HAnimSite377 = browser.currentScene.createNode("HAnimSite");
HAnimSite377.DEF = "hanim_l_chest_midsagittal_plane_pt";
HAnimSite377.name = "l_chest_midsagittal_plane_pt";
let TouchSensor378 = browser.currentScene.createNode("TouchSensor");
TouchSensor378.description = "HAnimSite l_chest_midsagittal_plane_pt";
HAnimSite377.children = new MFNode();

HAnimSite377.children[0] = TouchSensor378;

let Shape379 = browser.currentScene.createNode("Shape");
Shape379.USE = "HAnimSiteShape";
HAnimSite377.children[1] = Shape379;

HAnimSegment369.children[2] = HAnimSite377;

let HAnimSite380 = browser.currentScene.createNode("HAnimSite");
HAnimSite380.DEF = "hanim_mesosternale_pt";
HAnimSite380.name = "mesosternale_pt";
let TouchSensor381 = browser.currentScene.createNode("TouchSensor");
TouchSensor381.description = "HAnimSite mesosternale_pt";
HAnimSite380.children = new MFNode();

HAnimSite380.children[0] = TouchSensor381;

let Shape382 = browser.currentScene.createNode("Shape");
Shape382.USE = "HAnimSiteShape";
HAnimSite380.children[1] = Shape382;

HAnimSegment369.children[3] = HAnimSite380;

let HAnimSite383 = browser.currentScene.createNode("HAnimSite");
HAnimSite383.DEF = "hanim_r_chest_midsagittal_plane_pt";
HAnimSite383.name = "r_chest_midsagittal_plane_pt";
let TouchSensor384 = browser.currentScene.createNode("TouchSensor");
TouchSensor384.description = "HAnimSite r_chest_midsagittal_plane_pt";
HAnimSite383.children = new MFNode();

HAnimSite383.children[0] = TouchSensor384;

let Shape385 = browser.currentScene.createNode("Shape");
Shape385.USE = "HAnimSiteShape";
HAnimSite383.children[1] = Shape385;

HAnimSegment369.children[4] = HAnimSite383;

let HAnimSite386 = browser.currentScene.createNode("HAnimSite");
HAnimSite386.DEF = "hanim_rear_center_midsagittal_plane_pt";
HAnimSite386.name = "rear_center_midsagittal_plane_pt";
let TouchSensor387 = browser.currentScene.createNode("TouchSensor");
TouchSensor387.description = "HAnimSite rear_center_midsagittal_plane_pt";
HAnimSite386.children = new MFNode();

HAnimSite386.children[0] = TouchSensor387;

let Shape388 = browser.currentScene.createNode("Shape");
Shape388.USE = "HAnimSiteShape";
HAnimSite386.children[1] = Shape388;

HAnimSegment369.children[5] = HAnimSite386;

HAnimJoint368.children = new MFNode();

HAnimJoint368.children[0] = HAnimSegment369;

let HAnimJoint389 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint389.DEF = "hanim_vt6";
HAnimJoint389.name = "vt6";
HAnimJoint389.center = new SFVec3f(new float[0.0059,1.3866,-0.08]);
let HAnimSegment390 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment390.DEF = "hanim_t6";
HAnimSegment390.name = "t6";
let Transform391 = browser.currentScene.createNode("Transform");
Transform391.translation = new SFVec3f(new float[0.0059,1.3866,-0.08]);
let Transform392 = browser.currentScene.createNode("Transform");
let Shape393 = browser.currentScene.createNode("Shape");
Shape393.USE = "HAnimJointShape";
Transform392.child = new undefined();

Transform392.child[0] = Shape393;

Transform391.children = new MFNode();

Transform391.children[0] = Transform392;

HAnimSegment390.children = new MFNode();

HAnimSegment390.children[0] = Transform391;

let Shape394 = browser.currentScene.createNode("Shape");
let LineSet395 = browser.currentScene.createNode("LineSet");
LineSet395.vertexCount = new MFInt32(new int[2]);
let ColorRGBA396 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA396.USE = "HAnimSegmentLineColorRGBA";
LineSet395.color = ColorRGBA396;

let Coordinate397 = browser.currentScene.createNode("Coordinate");
Coordinate397.point = new MFVec3f(new float[0.0059,1.3866,-0.08,0.006,1.4102,-0.0745]);
LineSet395.coord = Coordinate397;

Shape394.geometry = LineSet395;

HAnimSegment390.children[1] = Shape394;

let HAnimSite398 = browser.currentScene.createNode("HAnimSite");
HAnimSite398.DEF = "hanim_spine_1_middle_back_pt";
HAnimSite398.name = "spine_1_middle_back_pt";
let TouchSensor399 = browser.currentScene.createNode("TouchSensor");
TouchSensor399.description = "HAnimSite spine_1_middle_back_pt";
HAnimSite398.children = new MFNode();

HAnimSite398.children[0] = TouchSensor399;

let Shape400 = browser.currentScene.createNode("Shape");
Shape400.USE = "HAnimSiteShape";
HAnimSite398.children[1] = Shape400;

HAnimSegment390.children[2] = HAnimSite398;

HAnimJoint389.children = new MFNode();

HAnimJoint389.children[0] = HAnimSegment390;

let HAnimJoint401 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint401.DEF = "hanim_vt5";
HAnimJoint401.name = "vt5";
HAnimJoint401.center = new SFVec3f(new float[0.006,1.4102,-0.0745]);
let HAnimSegment402 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment402.DEF = "hanim_t5";
HAnimSegment402.name = "t5";
let Transform403 = browser.currentScene.createNode("Transform");
Transform403.translation = new SFVec3f(new float[0.006,1.4102,-0.0745]);
let Transform404 = browser.currentScene.createNode("Transform");
let Shape405 = browser.currentScene.createNode("Shape");
Shape405.USE = "HAnimJointShape";
Transform404.child = new undefined();

Transform404.child[0] = Shape405;

Transform403.children = new MFNode();

Transform403.children[0] = Transform404;

HAnimSegment402.children = new MFNode();

HAnimSegment402.children[0] = Transform403;

let Shape406 = browser.currentScene.createNode("Shape");
let LineSet407 = browser.currentScene.createNode("LineSet");
LineSet407.vertexCount = new MFInt32(new int[2]);
let ColorRGBA408 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA408.USE = "HAnimSegmentLineColorRGBA";
LineSet407.color = ColorRGBA408;

let Coordinate409 = browser.currentScene.createNode("Coordinate");
Coordinate409.point = new MFVec3f(new float[0.006,1.4102,-0.0745,0.0061,1.432,-0.0675]);
LineSet407.coord = Coordinate409;

Shape406.geometry = LineSet407;

HAnimSegment402.children[1] = Shape406;

HAnimJoint401.children = new MFNode();

HAnimJoint401.children[0] = HAnimSegment402;

let HAnimJoint410 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint410.DEF = "hanim_vt4";
HAnimJoint410.name = "vt4";
HAnimJoint410.center = new SFVec3f(new float[0.0061,1.432,-0.0675]);
let HAnimSegment411 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment411.DEF = "hanim_t4";
HAnimSegment411.name = "t4";
let Transform412 = browser.currentScene.createNode("Transform");
Transform412.translation = new SFVec3f(new float[0.0061,1.432,-0.0675]);
let Transform413 = browser.currentScene.createNode("Transform");
let Shape414 = browser.currentScene.createNode("Shape");
Shape414.USE = "HAnimJointShape";
Transform413.child = new undefined();

Transform413.child[0] = Shape414;

Transform412.children = new MFNode();

Transform412.children[0] = Transform413;

HAnimSegment411.children = new MFNode();

HAnimSegment411.children[0] = Transform412;

let Shape415 = browser.currentScene.createNode("Shape");
let LineSet416 = browser.currentScene.createNode("LineSet");
LineSet416.vertexCount = new MFInt32(new int[2]);
let ColorRGBA417 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA417.USE = "HAnimSegmentLineColorRGBA";
LineSet416.color = ColorRGBA417;

let Coordinate418 = browser.currentScene.createNode("Coordinate");
Coordinate418.point = new MFVec3f(new float[0.0061,1.432,-0.0675,0.0062,1.4583,-0.057]);
LineSet416.coord = Coordinate418;

Shape415.geometry = LineSet416;

HAnimSegment411.children[1] = Shape415;

HAnimJoint410.children = new MFNode();

HAnimJoint410.children[0] = HAnimSegment411;

let HAnimJoint419 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint419.DEF = "hanim_vt3";
HAnimJoint419.name = "vt3";
HAnimJoint419.center = new SFVec3f(new float[0.0062,1.4583,-0.057]);
let HAnimSegment420 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment420.DEF = "hanim_t3";
HAnimSegment420.name = "t3";
let Transform421 = browser.currentScene.createNode("Transform");
Transform421.translation = new SFVec3f(new float[0.0062,1.4583,-0.057]);
let Transform422 = browser.currentScene.createNode("Transform");
let Shape423 = browser.currentScene.createNode("Shape");
Shape423.USE = "HAnimJointShape";
Transform422.child = new undefined();

Transform422.child[0] = Shape423;

Transform421.children = new MFNode();

Transform421.children[0] = Transform422;

HAnimSegment420.children = new MFNode();

HAnimSegment420.children[0] = Transform421;

let Shape424 = browser.currentScene.createNode("Shape");
let LineSet425 = browser.currentScene.createNode("LineSet");
LineSet425.vertexCount = new MFInt32(new int[2]);
let ColorRGBA426 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA426.USE = "HAnimSegmentLineColorRGBA";
LineSet425.color = ColorRGBA426;

let Coordinate427 = browser.currentScene.createNode("Coordinate");
Coordinate427.point = new MFVec3f(new float[0.0062,1.4583,-0.057,0.0063,1.4761,-0.0484]);
LineSet425.coord = Coordinate427;

Shape424.geometry = LineSet425;

HAnimSegment420.children[1] = Shape424;

HAnimJoint419.children = new MFNode();

HAnimJoint419.children[0] = HAnimSegment420;

let HAnimJoint428 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint428.DEF = "hanim_vt2";
HAnimJoint428.name = "vt2";
HAnimJoint428.center = new SFVec3f(new float[0.0063,1.4761,-0.0484]);
let HAnimSegment429 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment429.DEF = "hanim_t2";
HAnimSegment429.name = "t2";
let Transform430 = browser.currentScene.createNode("Transform");
Transform430.translation = new SFVec3f(new float[0.0063,1.4761,-0.0484]);
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
Coordinate436.point = new MFVec3f(new float[0.0063,1.4761,-0.0484,0.0065,1.4951,-0.0387]);
LineSet434.coord = Coordinate436;

Shape433.geometry = LineSet434;

HAnimSegment429.children[1] = Shape433;

let HAnimSite437 = browser.currentScene.createNode("HAnimSite");
HAnimSite437.DEF = "hanim_cervicale_pt";
HAnimSite437.name = "cervicale_pt";
HAnimSite437.translation = new SFVec3f(new float[0.0064,1.52,-0.0815]);
let TouchSensor438 = browser.currentScene.createNode("TouchSensor");
TouchSensor438.description = "HAnimSite cervicale_pt";
HAnimSite437.children = new MFNode();

HAnimSite437.children[0] = TouchSensor438;

let Shape439 = browser.currentScene.createNode("Shape");
Shape439.USE = "HAnimSiteShape";
HAnimSite437.children[1] = Shape439;

HAnimSegment429.children[2] = HAnimSite437;

let HAnimSite440 = browser.currentScene.createNode("HAnimSite");
HAnimSite440.DEF = "hanim_suprasternale_pt";
HAnimSite440.name = "suprasternale_pt";
HAnimSite440.translation = new SFVec3f(new float[0.0084,1.4714,0.0551]);
let TouchSensor441 = browser.currentScene.createNode("TouchSensor");
TouchSensor441.description = "HAnimSite suprasternale_pt";
HAnimSite440.children = new MFNode();

HAnimSite440.children[0] = TouchSensor441;

let Shape442 = browser.currentScene.createNode("Shape");
Shape442.USE = "HAnimSiteShape";
HAnimSite440.children[1] = Shape442;

HAnimSegment429.children[3] = HAnimSite440;

HAnimJoint428.children = new MFNode();

HAnimJoint428.children[0] = HAnimSegment429;

let HAnimJoint443 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint443.DEF = "hanim_vt1";
HAnimJoint443.name = "vt1";
HAnimJoint443.center = new SFVec3f(new float[0.0065,1.4951,-0.0387]);
let HAnimSegment444 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment444.DEF = "hanim_t1";
HAnimSegment444.name = "t1";
let Transform445 = browser.currentScene.createNode("Transform");
Transform445.translation = new SFVec3f(new float[0.0065,1.4951,-0.0387]);
let Transform446 = browser.currentScene.createNode("Transform");
let Shape447 = browser.currentScene.createNode("Shape");
Shape447.USE = "HAnimJointShape";
Transform446.child = new undefined();

Transform446.child[0] = Shape447;

Transform445.children = new MFNode();

Transform445.children[0] = Transform446;

HAnimSegment444.children = new MFNode();

HAnimSegment444.children[0] = Transform445;

let Shape448 = browser.currentScene.createNode("Shape");
let LineSet449 = browser.currentScene.createNode("LineSet");
LineSet449.vertexCount = new MFInt32(new int[2]);
let ColorRGBA450 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA450.USE = "HAnimSegmentLineColorRGBA";
LineSet449.color = ColorRGBA450;

let Coordinate451 = browser.currentScene.createNode("Coordinate");
Coordinate451.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,0.0066,1.5132,-0.0301]);
LineSet449.coord = Coordinate451;

Shape448.geometry = LineSet449;

HAnimSegment444.children[1] = Shape448;

let HAnimSite452 = browser.currentScene.createNode("HAnimSite");
HAnimSite452.DEF = "hanim_l_neck_base_pt";
HAnimSite452.name = "l_neck_base_pt";
HAnimSite452.translation = new SFVec3f(new float[0.0646,1.5141,-0.038]);
let TouchSensor453 = browser.currentScene.createNode("TouchSensor");
TouchSensor453.description = "HAnimSite l_neck_base_pt";
HAnimSite452.children = new MFNode();

HAnimSite452.children[0] = TouchSensor453;

let Shape454 = browser.currentScene.createNode("Shape");
Shape454.USE = "HAnimSiteShape";
HAnimSite452.children[1] = Shape454;

HAnimSegment444.children[2] = HAnimSite452;

let HAnimSite455 = browser.currentScene.createNode("HAnimSite");
HAnimSite455.DEF = "hanim_r_neck_base_pt";
HAnimSite455.name = "r_neck_base_pt";
HAnimSite455.translation = new SFVec3f(new float[-0.0419,1.5149,-0.022]);
let TouchSensor456 = browser.currentScene.createNode("TouchSensor");
TouchSensor456.description = "HAnimSite r_neck_base_pt";
HAnimSite455.children = new MFNode();

HAnimSite455.children[0] = TouchSensor456;

let Shape457 = browser.currentScene.createNode("Shape");
Shape457.USE = "HAnimSiteShape";
HAnimSite455.children[1] = Shape457;

HAnimSegment444.children[3] = HAnimSite455;

let Shape458 = browser.currentScene.createNode("Shape");
let LineSet459 = browser.currentScene.createNode("LineSet");
LineSet459.vertexCount = new MFInt32(new int[2]);
let ColorRGBA460 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA460.USE = "HAnimSegmentLineColorRGBA";
LineSet459.color = ColorRGBA460;

let Coordinate461 = browser.currentScene.createNode("Coordinate");
Coordinate461.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,0.082,1.4488,-0.0353]);
LineSet459.coord = Coordinate461;

Shape458.geometry = LineSet459;

HAnimSegment444.children[4] = Shape458;

let HAnimSite462 = browser.currentScene.createNode("HAnimSite");
HAnimSite462.DEF = "hanim_l_acromion_pt";
HAnimSite462.name = "l_acromion_pt";
HAnimSite462.translation = new SFVec3f(new float[0.2032,1.476,-0.049]);
let TouchSensor463 = browser.currentScene.createNode("TouchSensor");
TouchSensor463.description = "HAnimSite l_acromion_pt";
HAnimSite462.children = new MFNode();

HAnimSite462.children[0] = TouchSensor463;

let Shape464 = browser.currentScene.createNode("Shape");
Shape464.USE = "HAnimSiteShape";
HAnimSite462.children[1] = Shape464;

HAnimSegment444.children[5] = HAnimSite462;

let HAnimSite465 = browser.currentScene.createNode("HAnimSite");
HAnimSite465.DEF = "hanim_l_axilla_distal_pt";
HAnimSite465.name = "l_axilla_distal_pt";
HAnimSite465.translation = new SFVec3f(new float[0.1706,1.4072,-0.0875]);
let TouchSensor466 = browser.currentScene.createNode("TouchSensor");
TouchSensor466.description = "HAnimSite l_axilla_distal_pt";
HAnimSite465.children = new MFNode();

HAnimSite465.children[0] = TouchSensor466;

let Shape467 = browser.currentScene.createNode("Shape");
Shape467.USE = "HAnimSiteShape";
HAnimSite465.children[1] = Shape467;

HAnimSegment444.children[6] = HAnimSite465;

let HAnimSite468 = browser.currentScene.createNode("HAnimSite");
HAnimSite468.DEF = "hanim_l_axilla_posterior_folds_pt";
HAnimSite468.name = "l_axilla_posterior_folds_pt";
let TouchSensor469 = browser.currentScene.createNode("TouchSensor");
TouchSensor469.description = "HAnimSite l_axilla_posterior_folds_pt";
HAnimSite468.children = new MFNode();

HAnimSite468.children[0] = TouchSensor469;

let Shape470 = browser.currentScene.createNode("Shape");
Shape470.USE = "HAnimSiteShape";
HAnimSite468.children[1] = Shape470;

HAnimSegment444.children[7] = HAnimSite468;

let HAnimSite471 = browser.currentScene.createNode("HAnimSite");
HAnimSite471.DEF = "hanim_l_axilla_proximal_pt";
HAnimSite471.name = "l_axilla_proximal_pt";
HAnimSite471.translation = new SFVec3f(new float[0.1777,1.4065,-0.0075]);
let TouchSensor472 = browser.currentScene.createNode("TouchSensor");
TouchSensor472.description = "HAnimSite l_axilla_proximal_pt";
HAnimSite471.children = new MFNode();

HAnimSite471.children[0] = TouchSensor472;

let Shape473 = browser.currentScene.createNode("Shape");
Shape473.USE = "HAnimSiteShape";
HAnimSite471.children[1] = Shape473;

HAnimSegment444.children[8] = HAnimSite471;

let HAnimSite474 = browser.currentScene.createNode("HAnimSite");
HAnimSite474.DEF = "hanim_l_clavicale_pt";
HAnimSite474.name = "l_clavicale_pt";
HAnimSite474.translation = new SFVec3f(new float[0.0271,1.4943,0.0394]);
let TouchSensor475 = browser.currentScene.createNode("TouchSensor");
TouchSensor475.description = "HAnimSite l_clavicale_pt";
HAnimSite474.children = new MFNode();

HAnimSite474.children[0] = TouchSensor475;

let Shape476 = browser.currentScene.createNode("Shape");
Shape476.USE = "HAnimSiteShape";
HAnimSite474.children[1] = Shape476;

HAnimSegment444.children[9] = HAnimSite474;

let Shape477 = browser.currentScene.createNode("Shape");
let LineSet478 = browser.currentScene.createNode("LineSet");
LineSet478.vertexCount = new MFInt32(new int[2]);
let ColorRGBA479 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA479.USE = "HAnimSegmentLineColorRGBA";
LineSet478.color = ColorRGBA479;

let Coordinate480 = browser.currentScene.createNode("Coordinate");
Coordinate480.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,-0.0694,1.46,-0.033]);
LineSet478.coord = Coordinate480;

Shape477.geometry = LineSet478;

HAnimSegment444.children[10] = Shape477;

let HAnimSite481 = browser.currentScene.createNode("HAnimSite");
HAnimSite481.DEF = "hanim_r_acromion_pt";
HAnimSite481.name = "r_acromion_pt";
HAnimSite481.translation = new SFVec3f(new float[-0.1905,1.4791,-0.0431]);
let TouchSensor482 = browser.currentScene.createNode("TouchSensor");
TouchSensor482.description = "HAnimSite r_acromion_pt";
HAnimSite481.children = new MFNode();

HAnimSite481.children[0] = TouchSensor482;

let Shape483 = browser.currentScene.createNode("Shape");
Shape483.USE = "HAnimSiteShape";
HAnimSite481.children[1] = Shape483;

HAnimSegment444.children[11] = HAnimSite481;

let HAnimSite484 = browser.currentScene.createNode("HAnimSite");
HAnimSite484.DEF = "hanim_r_axilla_distal_pt";
HAnimSite484.name = "r_axilla_distal_pt";
HAnimSite484.translation = new SFVec3f(new float[-0.1603,1.4098,-0.0826]);
let TouchSensor485 = browser.currentScene.createNode("TouchSensor");
TouchSensor485.description = "HAnimSite r_axilla_distal_pt";
HAnimSite484.children = new MFNode();

HAnimSite484.children[0] = TouchSensor485;

let Shape486 = browser.currentScene.createNode("Shape");
Shape486.USE = "HAnimSiteShape";
HAnimSite484.children[1] = Shape486;

HAnimSegment444.children[12] = HAnimSite484;

let HAnimSite487 = browser.currentScene.createNode("HAnimSite");
HAnimSite487.DEF = "hanim_r_axilla_posterior_folds_pt";
HAnimSite487.name = "r_axilla_posterior_folds_pt";
let TouchSensor488 = browser.currentScene.createNode("TouchSensor");
TouchSensor488.description = "HAnimSite r_axilla_posterior_folds_pt";
HAnimSite487.children = new MFNode();

HAnimSite487.children[0] = TouchSensor488;

let Shape489 = browser.currentScene.createNode("Shape");
Shape489.USE = "HAnimSiteShape";
HAnimSite487.children[1] = Shape489;

HAnimSegment444.children[13] = HAnimSite487;

let HAnimSite490 = browser.currentScene.createNode("HAnimSite");
HAnimSite490.DEF = "hanim_r_axilla_proximal_pt";
HAnimSite490.name = "r_axilla_proximal_pt";
HAnimSite490.translation = new SFVec3f(new float[-0.1626,1.4072,-0.0031]);
let TouchSensor491 = browser.currentScene.createNode("TouchSensor");
TouchSensor491.description = "HAnimSite r_axilla_proximal_pt";
HAnimSite490.children = new MFNode();

HAnimSite490.children[0] = TouchSensor491;

let Shape492 = browser.currentScene.createNode("Shape");
Shape492.USE = "HAnimSiteShape";
HAnimSite490.children[1] = Shape492;

HAnimSegment444.children[14] = HAnimSite490;

let HAnimSite493 = browser.currentScene.createNode("HAnimSite");
HAnimSite493.DEF = "hanim_r_clavicale_pt";
HAnimSite493.name = "r_clavicale_pt";
HAnimSite493.translation = new SFVec3f(new float[-0.0115,1.4943,0.04]);
let TouchSensor494 = browser.currentScene.createNode("TouchSensor");
TouchSensor494.description = "HAnimSite r_clavicale_pt";
HAnimSite493.children = new MFNode();

HAnimSite493.children[0] = TouchSensor494;

let Shape495 = browser.currentScene.createNode("Shape");
Shape495.USE = "HAnimSiteShape";
HAnimSite493.children[1] = Shape495;

HAnimSegment444.children[15] = HAnimSite493;

HAnimJoint443.children = new MFNode();

HAnimJoint443.children[0] = HAnimSegment444;

let HAnimJoint496 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint496.DEF = "hanim_vc7";
HAnimJoint496.name = "vc7";
HAnimJoint496.center = new SFVec3f(new float[0.0066,1.5132,-0.0301]);
let HAnimSegment497 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment497.DEF = "hanim_c7";
HAnimSegment497.name = "c7";
let Transform498 = browser.currentScene.createNode("Transform");
Transform498.translation = new SFVec3f(new float[0.0066,1.5132,-0.0301]);
let Transform499 = browser.currentScene.createNode("Transform");
let Shape500 = browser.currentScene.createNode("Shape");
Shape500.USE = "HAnimJointShape";
Transform499.child = new undefined();

Transform499.child[0] = Shape500;

Transform498.children = new MFNode();

Transform498.children[0] = Transform499;

HAnimSegment497.children = new MFNode();

HAnimSegment497.children[0] = Transform498;

let Shape501 = browser.currentScene.createNode("Shape");
let LineSet502 = browser.currentScene.createNode("LineSet");
LineSet502.vertexCount = new MFInt32(new int[2]);
let ColorRGBA503 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA503.USE = "HAnimSegmentLineColorRGBA";
LineSet502.color = ColorRGBA503;

let Coordinate504 = browser.currentScene.createNode("Coordinate");
Coordinate504.point = new MFVec3f(new float[0.0066,1.5132,-0.0301,0.0066,1.5357,-0.0143]);
LineSet502.coord = Coordinate504;

Shape501.geometry = LineSet502;

HAnimSegment497.children[1] = Shape501;

HAnimJoint496.children = new MFNode();

HAnimJoint496.children[0] = HAnimSegment497;

let HAnimJoint505 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint505.DEF = "hanim_vc6";
HAnimJoint505.name = "vc6";
HAnimJoint505.center = new SFVec3f(new float[0.0066,1.5357,-0.0143]);
let HAnimSegment506 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment506.DEF = "hanim_c6";
HAnimSegment506.name = "c6";
let Transform507 = browser.currentScene.createNode("Transform");
Transform507.translation = new SFVec3f(new float[0.0066,1.5357,-0.0143]);
let Transform508 = browser.currentScene.createNode("Transform");
let Shape509 = browser.currentScene.createNode("Shape");
Shape509.USE = "HAnimJointShape";
Transform508.child = new undefined();

Transform508.child[0] = Shape509;

Transform507.children = new MFNode();

Transform507.children[0] = Transform508;

HAnimSegment506.children = new MFNode();

HAnimSegment506.children[0] = Transform507;

let Shape510 = browser.currentScene.createNode("Shape");
let LineSet511 = browser.currentScene.createNode("LineSet");
LineSet511.vertexCount = new MFInt32(new int[2]);
let ColorRGBA512 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA512.USE = "HAnimSegmentLineColorRGBA";
LineSet511.color = ColorRGBA512;

let Coordinate513 = browser.currentScene.createNode("Coordinate");
Coordinate513.point = new MFVec3f(new float[0.0066,1.5357,-0.0143,0.0066,1.552,-0.0082]);
LineSet511.coord = Coordinate513;

Shape510.geometry = LineSet511;

HAnimSegment506.children[1] = Shape510;

HAnimJoint505.children = new MFNode();

HAnimJoint505.children[0] = HAnimSegment506;

let HAnimJoint514 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint514.DEF = "hanim_vc5";
HAnimJoint514.name = "vc5";
HAnimJoint514.center = new SFVec3f(new float[0.0066,1.552,-0.0082]);
let HAnimSegment515 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment515.DEF = "hanim_c5";
HAnimSegment515.name = "c5";
let Transform516 = browser.currentScene.createNode("Transform");
Transform516.translation = new SFVec3f(new float[0.0066,1.552,-0.0082]);
let Transform517 = browser.currentScene.createNode("Transform");
let Shape518 = browser.currentScene.createNode("Shape");
Shape518.USE = "HAnimJointShape";
Transform517.child = new undefined();

Transform517.child[0] = Shape518;

Transform516.children = new MFNode();

Transform516.children[0] = Transform517;

HAnimSegment515.children = new MFNode();

HAnimSegment515.children[0] = Transform516;

let Shape519 = browser.currentScene.createNode("Shape");
let LineSet520 = browser.currentScene.createNode("LineSet");
LineSet520.vertexCount = new MFInt32(new int[2]);
let ColorRGBA521 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA521.USE = "HAnimSegmentLineColorRGBA";
LineSet520.color = ColorRGBA521;

let Coordinate522 = browser.currentScene.createNode("Coordinate");
Coordinate522.point = new MFVec3f(new float[0.0066,1.552,-0.0082,0.0066,1.5662,-0.0084]);
LineSet520.coord = Coordinate522;

Shape519.geometry = LineSet520;

HAnimSegment515.children[1] = Shape519;

HAnimJoint514.children = new MFNode();

HAnimJoint514.children[0] = HAnimSegment515;

let HAnimJoint523 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint523.DEF = "hanim_vc4";
HAnimJoint523.name = "vc4";
HAnimJoint523.center = new SFVec3f(new float[0.0066,1.5662,-0.0084]);
let HAnimSegment524 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment524.DEF = "hanim_c4";
HAnimSegment524.name = "c4";
let Transform525 = browser.currentScene.createNode("Transform");
Transform525.translation = new SFVec3f(new float[0.0066,1.5662,-0.0084]);
let Transform526 = browser.currentScene.createNode("Transform");
let Shape527 = browser.currentScene.createNode("Shape");
Shape527.USE = "HAnimJointShape";
Transform526.child = new undefined();

Transform526.child[0] = Shape527;

Transform525.children = new MFNode();

Transform525.children[0] = Transform526;

HAnimSegment524.children = new MFNode();

HAnimSegment524.children[0] = Transform525;

let Shape528 = browser.currentScene.createNode("Shape");
let LineSet529 = browser.currentScene.createNode("LineSet");
LineSet529.vertexCount = new MFInt32(new int[2]);
let ColorRGBA530 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA530.USE = "HAnimSegmentLineColorRGBA";
LineSet529.color = ColorRGBA530;

let Coordinate531 = browser.currentScene.createNode("Coordinate");
Coordinate531.point = new MFVec3f(new float[0.0066,1.5662,-0.0084,0.0066,1.58,-0.0103]);
LineSet529.coord = Coordinate531;

Shape528.geometry = LineSet529;

HAnimSegment524.children[1] = Shape528;

HAnimJoint523.children = new MFNode();

HAnimJoint523.children[0] = HAnimSegment524;

let HAnimJoint532 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint532.DEF = "hanim_vc3";
HAnimJoint532.name = "vc3";
HAnimJoint532.center = new SFVec3f(new float[0.0066,1.58,-0.0103]);
let HAnimSegment533 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment533.DEF = "hanim_c3";
HAnimSegment533.name = "c3";
let Transform534 = browser.currentScene.createNode("Transform");
Transform534.translation = new SFVec3f(new float[0.0066,1.58,-0.0103]);
let Transform535 = browser.currentScene.createNode("Transform");
let Shape536 = browser.currentScene.createNode("Shape");
Shape536.USE = "HAnimJointShape";
Transform535.child = new undefined();

Transform535.child[0] = Shape536;

Transform534.children = new MFNode();

Transform534.children[0] = Transform535;

HAnimSegment533.children = new MFNode();

HAnimSegment533.children[0] = Transform534;

let Shape537 = browser.currentScene.createNode("Shape");
let LineSet538 = browser.currentScene.createNode("LineSet");
LineSet538.vertexCount = new MFInt32(new int[2]);
let ColorRGBA539 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA539.USE = "HAnimSegmentLineColorRGBA";
LineSet538.color = ColorRGBA539;

let Coordinate540 = browser.currentScene.createNode("Coordinate");
Coordinate540.point = new MFVec3f(new float[0.0066,1.58,-0.0103,0.0066,1.5928,-0.0103]);
LineSet538.coord = Coordinate540;

Shape537.geometry = LineSet538;

HAnimSegment533.children[1] = Shape537;

let HAnimSite541 = browser.currentScene.createNode("HAnimSite");
HAnimSite541.DEF = "hanim_adams_apple_pt";
HAnimSite541.name = "adams_apple_pt";
let TouchSensor542 = browser.currentScene.createNode("TouchSensor");
TouchSensor542.description = "HAnimSite adams_apple_pt";
HAnimSite541.children = new MFNode();

HAnimSite541.children[0] = TouchSensor542;

let Shape543 = browser.currentScene.createNode("Shape");
Shape543.USE = "HAnimSiteShape";
HAnimSite541.children[1] = Shape543;

HAnimSegment533.children[2] = HAnimSite541;

HAnimJoint532.children = new MFNode();

HAnimJoint532.children[0] = HAnimSegment533;

let HAnimJoint544 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint544.DEF = "hanim_vc2";
HAnimJoint544.name = "vc2";
HAnimJoint544.center = new SFVec3f(new float[0.0066,1.5928,-0.0103]);
let HAnimSegment545 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment545.DEF = "hanim_c2";
HAnimSegment545.name = "c2";
let Transform546 = browser.currentScene.createNode("Transform");
Transform546.translation = new SFVec3f(new float[0.0066,1.5928,-0.0103]);
let Transform547 = browser.currentScene.createNode("Transform");
let Shape548 = browser.currentScene.createNode("Shape");
Shape548.USE = "HAnimJointShape";
Transform547.child = new undefined();

Transform547.child[0] = Shape548;

Transform546.children = new MFNode();

Transform546.children[0] = Transform547;

HAnimSegment545.children = new MFNode();

HAnimSegment545.children[0] = Transform546;

let Shape549 = browser.currentScene.createNode("Shape");
let LineSet550 = browser.currentScene.createNode("LineSet");
LineSet550.vertexCount = new MFInt32(new int[2]);
let ColorRGBA551 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA551.USE = "HAnimSegmentLineColorRGBA";
LineSet550.color = ColorRGBA551;

let Coordinate552 = browser.currentScene.createNode("Coordinate");
Coordinate552.point = new MFVec3f(new float[0.0066,1.5928,-0.0103,0.0066,1.6144,-0.0034]);
LineSet550.coord = Coordinate552;

Shape549.geometry = LineSet550;

HAnimSegment545.children[1] = Shape549;

HAnimJoint544.children = new MFNode();

HAnimJoint544.children[0] = HAnimSegment545;

let HAnimJoint553 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint553.DEF = "hanim_vc1";
HAnimJoint553.name = "vc1";
HAnimJoint553.center = new SFVec3f(new float[0.0066,1.6144,-0.0034]);
let HAnimSegment554 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment554.DEF = "hanim_c1";
HAnimSegment554.name = "c1";
let Transform555 = browser.currentScene.createNode("Transform");
Transform555.translation = new SFVec3f(new float[0.0066,1.6144,-0.0034]);
let Transform556 = browser.currentScene.createNode("Transform");
let Shape557 = browser.currentScene.createNode("Shape");
Shape557.USE = "HAnimJointShape";
Transform556.child = new undefined();

Transform556.child[0] = Shape557;

Transform555.children = new MFNode();

Transform555.children[0] = Transform556;

HAnimSegment554.children = new MFNode();

HAnimSegment554.children[0] = Transform555;

let Shape558 = browser.currentScene.createNode("Shape");
let LineSet559 = browser.currentScene.createNode("LineSet");
LineSet559.vertexCount = new MFInt32(new int[2]);
let ColorRGBA560 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA560.USE = "HAnimSegmentLineColorRGBA";
LineSet559.color = ColorRGBA560;

let Coordinate561 = browser.currentScene.createNode("Coordinate");
Coordinate561.point = new MFVec3f(new float[0.0066,1.6144,-0.0034,0.0044,1.6209,0.0236]);
LineSet559.coord = Coordinate561;

Shape558.geometry = LineSet559;

HAnimSegment554.children[1] = Shape558;

let HAnimSite562 = browser.currentScene.createNode("HAnimSite");
HAnimSite562.DEF = "hanim_glabella_pt";
HAnimSite562.name = "glabella_pt";
let TouchSensor563 = browser.currentScene.createNode("TouchSensor");
TouchSensor563.description = "HAnimSite glabella_pt";
HAnimSite562.children = new MFNode();

HAnimSite562.children[0] = TouchSensor563;

let Shape564 = browser.currentScene.createNode("Shape");
Shape564.USE = "HAnimSiteShape";
HAnimSite562.children[1] = Shape564;

HAnimSegment554.children[2] = HAnimSite562;

let HAnimSite565 = browser.currentScene.createNode("HAnimSite");
HAnimSite565.DEF = "hanim_l_ectocanthus_pt";
HAnimSite565.name = "l_ectocanthus_pt";
let TouchSensor566 = browser.currentScene.createNode("TouchSensor");
TouchSensor566.description = "HAnimSite l_ectocanthus_pt";
HAnimSite565.children = new MFNode();

HAnimSite565.children[0] = TouchSensor566;

let Shape567 = browser.currentScene.createNode("Shape");
Shape567.USE = "HAnimSiteShape";
HAnimSite565.children[1] = Shape567;

HAnimSegment554.children[3] = HAnimSite565;

let HAnimSite568 = browser.currentScene.createNode("HAnimSite");
HAnimSite568.DEF = "hanim_l_infraorbitale_pt";
HAnimSite568.name = "l_infraorbitale_pt";
HAnimSite568.translation = new SFVec3f(new float[0.0341,1.6171,0.0752]);
let TouchSensor569 = browser.currentScene.createNode("TouchSensor");
TouchSensor569.description = "HAnimSite l_infraorbitale_pt";
HAnimSite568.children = new MFNode();

HAnimSite568.children[0] = TouchSensor569;

let Shape570 = browser.currentScene.createNode("Shape");
Shape570.USE = "HAnimSiteShape";
HAnimSite568.children[1] = Shape570;

HAnimSegment554.children[4] = HAnimSite568;

let HAnimSite571 = browser.currentScene.createNode("HAnimSite");
HAnimSite571.DEF = "hanim_l_tragion_pt";
HAnimSite571.name = "l_tragion_pt";
HAnimSite571.translation = new SFVec3f(new float[0.0739,1.6348,0.0282]);
let TouchSensor572 = browser.currentScene.createNode("TouchSensor");
TouchSensor572.description = "HAnimSite l_tragion_pt";
HAnimSite571.children = new MFNode();

HAnimSite571.children[0] = TouchSensor572;

let Shape573 = browser.currentScene.createNode("Shape");
Shape573.USE = "HAnimSiteShape";
HAnimSite571.children[1] = Shape573;

HAnimSegment554.children[5] = HAnimSite571;

let HAnimSite574 = browser.currentScene.createNode("HAnimSite");
HAnimSite574.DEF = "hanim_nuchale_pt";
HAnimSite574.name = "nuchale_pt";
HAnimSite574.translation = new SFVec3f(new float[0.0039,1.5972,-0.0796]);
let TouchSensor575 = browser.currentScene.createNode("TouchSensor");
TouchSensor575.description = "HAnimSite nuchale_pt";
HAnimSite574.children = new MFNode();

HAnimSite574.children[0] = TouchSensor575;

let Shape576 = browser.currentScene.createNode("Shape");
Shape576.USE = "HAnimSiteShape";
HAnimSite574.children[1] = Shape576;

HAnimSegment554.children[6] = HAnimSite574;

let HAnimSite577 = browser.currentScene.createNode("HAnimSite");
HAnimSite577.DEF = "hanim_opisthocranion_pt";
HAnimSite577.name = "opisthocranion_pt";
let TouchSensor578 = browser.currentScene.createNode("TouchSensor");
TouchSensor578.description = "HAnimSite opisthocranion_pt";
HAnimSite577.children = new MFNode();

HAnimSite577.children[0] = TouchSensor578;

let Shape579 = browser.currentScene.createNode("Shape");
Shape579.USE = "HAnimSiteShape";
HAnimSite577.children[1] = Shape579;

HAnimSegment554.children[7] = HAnimSite577;

let HAnimSite580 = browser.currentScene.createNode("HAnimSite");
HAnimSite580.DEF = "hanim_r_ectocanthus_pt";
HAnimSite580.name = "r_ectocanthus_pt";
let TouchSensor581 = browser.currentScene.createNode("TouchSensor");
TouchSensor581.description = "HAnimSite r_ectocanthus_pt";
HAnimSite580.children = new MFNode();

HAnimSite580.children[0] = TouchSensor581;

let Shape582 = browser.currentScene.createNode("Shape");
Shape582.USE = "HAnimSiteShape";
HAnimSite580.children[1] = Shape582;

HAnimSegment554.children[8] = HAnimSite580;

let HAnimSite583 = browser.currentScene.createNode("HAnimSite");
HAnimSite583.DEF = "hanim_r_infraorbitale_pt";
HAnimSite583.name = "r_infraorbitale_pt";
HAnimSite583.translation = new SFVec3f(new float[-0.0237,1.6171,0.0752]);
let TouchSensor584 = browser.currentScene.createNode("TouchSensor");
TouchSensor584.description = "HAnimSite r_infraorbitale_pt";
HAnimSite583.children = new MFNode();

HAnimSite583.children[0] = TouchSensor584;

let Shape585 = browser.currentScene.createNode("Shape");
Shape585.USE = "HAnimSiteShape";
HAnimSite583.children[1] = Shape585;

HAnimSegment554.children[9] = HAnimSite583;

let HAnimSite586 = browser.currentScene.createNode("HAnimSite");
HAnimSite586.DEF = "hanim_r_tragion_pt";
HAnimSite586.name = "r_tragion_pt";
HAnimSite586.translation = new SFVec3f(new float[-0.0646,1.6347,0.0302]);
let TouchSensor587 = browser.currentScene.createNode("TouchSensor");
TouchSensor587.description = "HAnimSite r_tragion_pt";
HAnimSite586.children = new MFNode();

HAnimSite586.children[0] = TouchSensor587;

let Shape588 = browser.currentScene.createNode("Shape");
Shape588.USE = "HAnimSiteShape";
HAnimSite586.children[1] = Shape588;

HAnimSegment554.children[10] = HAnimSite586;

let HAnimSite589 = browser.currentScene.createNode("HAnimSite");
HAnimSite589.DEF = "hanim_sellion_pt";
HAnimSite589.name = "sellion_pt";
HAnimSite589.translation = new SFVec3f(new float[0.0058,1.6316,0.0852]);
let TouchSensor590 = browser.currentScene.createNode("TouchSensor");
TouchSensor590.description = "HAnimSite sellion_pt";
HAnimSite589.children = new MFNode();

HAnimSite589.children[0] = TouchSensor590;

let Shape591 = browser.currentScene.createNode("Shape");
Shape591.USE = "HAnimSiteShape";
HAnimSite589.children[1] = Shape591;

HAnimSegment554.children[11] = HAnimSite589;

let HAnimSite592 = browser.currentScene.createNode("HAnimSite");
HAnimSite592.DEF = "hanim_skull_vertex_pt";
HAnimSite592.name = "skull_vertex_pt";
HAnimSite592.translation = new SFVec3f(new float[0.005,1.7504,0.0055]);
let TouchSensor593 = browser.currentScene.createNode("TouchSensor");
TouchSensor593.description = "HAnimSite skull_vertex_pt";
HAnimSite592.children = new MFNode();

HAnimSite592.children[0] = TouchSensor593;

let Shape594 = browser.currentScene.createNode("Shape");
Shape594.USE = "HAnimSiteShape";
HAnimSite592.children[1] = Shape594;

HAnimSegment554.children[12] = HAnimSite592;

HAnimJoint553.children = new MFNode();

HAnimJoint553.children[0] = HAnimSegment554;

let HAnimJoint595 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint595.DEF = "hanim_skullbase";
HAnimJoint595.name = "skullbase";
HAnimJoint595.center = new SFVec3f(new float[0.0044,1.6209,0.0236]);
let HAnimSegment596 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment596.DEF = "hanim_skull";
HAnimSegment596.name = "skull";
let Transform597 = browser.currentScene.createNode("Transform");
Transform597.translation = new SFVec3f(new float[0.0044,1.6209,0.0236]);
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
Coordinate603.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0503,1.4157,-0.0689]);
LineSet601.coord = Coordinate603;

Shape600.geometry = LineSet601;

HAnimSegment596.children[1] = Shape600;

let Shape604 = browser.currentScene.createNode("Shape");
let LineSet605 = browser.currentScene.createNode("LineSet");
LineSet605.vertexCount = new MFInt32(new int[2]);
let ColorRGBA606 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA606.USE = "HAnimSegmentLineColorRGBA";
LineSet605.color = ColorRGBA606;

let Coordinate607 = browser.currentScene.createNode("Coordinate");
Coordinate607.point = new MFVec3f(new float[0.0044,1.6209,0.0236,-0.0507,1.4157,-0.0689]);
LineSet605.coord = Coordinate607;

Shape604.geometry = LineSet605;

HAnimSegment596.children[2] = Shape604;

let Shape608 = browser.currentScene.createNode("Shape");
let LineSet609 = browser.currentScene.createNode("LineSet");
LineSet609.vertexCount = new MFInt32(new int[2]);
let ColorRGBA610 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA610.USE = "HAnimSegmentLineColorRGBA";
LineSet609.color = ColorRGBA610;

let Coordinate611 = browser.currentScene.createNode("Coordinate");
Coordinate611.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0479,1.3963,-0.0188]);
LineSet609.coord = Coordinate611;

Shape608.geometry = LineSet609;

HAnimSegment596.children[3] = Shape608;

let Shape612 = browser.currentScene.createNode("Shape");
let LineSet613 = browser.currentScene.createNode("LineSet");
LineSet613.vertexCount = new MFInt32(new int[2]);
let ColorRGBA614 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA614.USE = "HAnimSegmentLineColorRGBA";
LineSet613.color = ColorRGBA614;

let Coordinate615 = browser.currentScene.createNode("Coordinate");
Coordinate615.point = new MFVec3f(new float[0.0044,1.6209,0.0236,-0.0483,1.3963,-0.0188]);
LineSet613.coord = Coordinate615;

Shape612.geometry = LineSet613;

HAnimSegment596.children[4] = Shape612;

let Shape616 = browser.currentScene.createNode("Shape");
let LineSet617 = browser.currentScene.createNode("LineSet");
LineSet617.vertexCount = new MFInt32(new int[2]);
let ColorRGBA618 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA618.USE = "HAnimSegmentLineColorRGBA";
LineSet617.color = ColorRGBA618;

let Coordinate619 = browser.currentScene.createNode("Coordinate");
Coordinate619.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0216,1.4053,0.0051]);
LineSet617.coord = Coordinate619;

Shape616.geometry = LineSet617;

HAnimSegment596.children[5] = Shape616;

let Shape620 = browser.currentScene.createNode("Shape");
let LineSet621 = browser.currentScene.createNode("LineSet");
LineSet621.vertexCount = new MFInt32(new int[2]);
let ColorRGBA622 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA622.USE = "HAnimSegmentLineColorRGBA";
LineSet621.color = ColorRGBA622;

let Coordinate623 = browser.currentScene.createNode("Coordinate");
Coordinate623.point = new MFVec3f(new float[0.0044,1.6209,0.0236,-0.0219,1.4053,0.0051]);
LineSet621.coord = Coordinate623;

Shape620.geometry = LineSet621;

HAnimSegment596.children[6] = Shape620;

let Shape624 = browser.currentScene.createNode("Shape");
let LineSet625 = browser.currentScene.createNode("LineSet");
LineSet625.vertexCount = new MFInt32(new int[2]);
let ColorRGBA626 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA626.USE = "HAnimSegmentLineColorRGBA";
LineSet625.color = ColorRGBA626;

let Coordinate627 = browser.currentScene.createNode("Coordinate");
Coordinate627.point = new MFVec3f(new float[0.0044,1.6209,0.0236,-0.0002,1.3043,-0.0865]);
LineSet625.coord = Coordinate627;

Shape624.geometry = LineSet625;

HAnimSegment596.children[7] = Shape624;

let HAnimSite628 = browser.currentScene.createNode("HAnimSite");
HAnimSite628.DEF = "hanim_l_gonion_pt";
HAnimSite628.name = "l_gonion_pt";
HAnimSite628.translation = new SFVec3f(new float[0.0631,1.553,0.033]);
let TouchSensor629 = browser.currentScene.createNode("TouchSensor");
TouchSensor629.description = "HAnimSite l_gonion_pt";
HAnimSite628.children = new MFNode();

HAnimSite628.children[0] = TouchSensor629;

let Shape630 = browser.currentScene.createNode("Shape");
Shape630.USE = "HAnimSiteShape";
HAnimSite628.children[1] = Shape630;

HAnimSegment596.children[8] = HAnimSite628;

let HAnimSite631 = browser.currentScene.createNode("HAnimSite");
HAnimSite631.DEF = "hanim_menton_pt";
HAnimSite631.name = "menton_pt";
let TouchSensor632 = browser.currentScene.createNode("TouchSensor");
TouchSensor632.description = "HAnimSite menton_pt";
HAnimSite631.children = new MFNode();

HAnimSite631.children[0] = TouchSensor632;

let Shape633 = browser.currentScene.createNode("Shape");
Shape633.USE = "HAnimSiteShape";
HAnimSite631.children[1] = Shape633;

HAnimSegment596.children[9] = HAnimSite631;

let HAnimSite634 = browser.currentScene.createNode("HAnimSite");
HAnimSite634.DEF = "hanim_r_gonion_pt";
HAnimSite634.name = "r_gonion_pt";
HAnimSite634.translation = new SFVec3f(new float[-0.052,1.5529,0.0347]);
let TouchSensor635 = browser.currentScene.createNode("TouchSensor");
TouchSensor635.description = "HAnimSite r_gonion_pt";
HAnimSite634.children = new MFNode();

HAnimSite634.children[0] = TouchSensor635;

let Shape636 = browser.currentScene.createNode("Shape");
Shape636.USE = "HAnimSiteShape";
HAnimSite634.children[1] = Shape636;

HAnimSegment596.children[10] = HAnimSite634;

let HAnimSite637 = browser.currentScene.createNode("HAnimSite");
HAnimSite637.DEF = "hanim_supramenton_pt";
HAnimSite637.name = "supramenton_pt";
HAnimSite637.translation = new SFVec3f(new float[0.0061,1.541,0.0805]);
let TouchSensor638 = browser.currentScene.createNode("TouchSensor");
TouchSensor638.description = "HAnimSite supramenton_pt";
HAnimSite637.children = new MFNode();

HAnimSite637.children[0] = TouchSensor638;

let Shape639 = browser.currentScene.createNode("Shape");
Shape639.USE = "HAnimSiteShape";
HAnimSite637.children[1] = Shape639;

HAnimSegment596.children[11] = HAnimSite637;

HAnimJoint595.children = new MFNode();

HAnimJoint595.children[0] = HAnimSegment596;

let HAnimJoint640 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint640.DEF = "hanim_l_eyelid_joint";
HAnimJoint640.name = "l_eyelid_joint";
HAnimJoint640.center = new SFVec3f(new float[0.0503,1.4157,-0.0689]);
HAnimJoint595.children[1] = HAnimJoint640;

let HAnimJoint641 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint641.DEF = "hanim_r_eyelid_joint";
HAnimJoint641.name = "r_eyelid_joint";
HAnimJoint641.center = new SFVec3f(new float[-0.0507,1.4157,-0.0689]);
HAnimJoint595.children[2] = HAnimJoint641;

let HAnimJoint642 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint642.DEF = "hanim_l_eyeball_joint";
HAnimJoint642.name = "l_eyeball_joint";
HAnimJoint642.center = new SFVec3f(new float[0.0479,1.3963,-0.0188]);
HAnimJoint595.children[3] = HAnimJoint642;

let HAnimJoint643 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint643.DEF = "hanim_r_eyeball_joint";
HAnimJoint643.name = "r_eyeball_joint";
HAnimJoint643.center = new SFVec3f(new float[-0.0483,1.3963,-0.0188]);
HAnimJoint595.children[4] = HAnimJoint643;

let HAnimJoint644 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint644.DEF = "hanim_l_eyebrow_joint";
HAnimJoint644.name = "l_eyebrow_joint";
HAnimJoint644.center = new SFVec3f(new float[0.0216,1.4053,0.0051]);
HAnimJoint595.children[5] = HAnimJoint644;

let HAnimJoint645 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint645.DEF = "hanim_r_eyebrow_joint";
HAnimJoint645.name = "r_eyebrow_joint";
HAnimJoint645.center = new SFVec3f(new float[-0.0219,1.4053,0.0051]);
HAnimJoint595.children[6] = HAnimJoint645;

let HAnimJoint646 = browser.currentScene.createNode("HAnimJoint");
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

let HAnimJoint647 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint647.DEF = "hanim_l_sternoclavicular";
HAnimJoint647.name = "l_sternoclavicular";
HAnimJoint647.center = new SFVec3f(new float[0.082,1.4488,-0.0353]);
let HAnimSegment648 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment648.DEF = "hanim_l_clavicle";
HAnimSegment648.name = "l_clavicle";
let Transform649 = browser.currentScene.createNode("Transform");
Transform649.translation = new SFVec3f(new float[0.082,1.4488,-0.0353]);
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
Coordinate655.point = new MFVec3f(new float[0.082,1.4488,-0.0353,0.0962,1.4269,-0.0424]);
LineSet653.coord = Coordinate655;

Shape652.geometry = LineSet653;

HAnimSegment648.children[1] = Shape652;

HAnimJoint647.children = new MFNode();

HAnimJoint647.children[0] = HAnimSegment648;

let HAnimJoint656 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint656.DEF = "hanim_l_acromioclavicular";
HAnimJoint656.name = "l_acromioclavicular";
HAnimJoint656.center = new SFVec3f(new float[0.0962,1.4269,-0.0424]);
let HAnimSegment657 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment657.DEF = "hanim_l_scapula";
HAnimSegment657.name = "l_scapula";
let Transform658 = browser.currentScene.createNode("Transform");
Transform658.translation = new SFVec3f(new float[0.0962,1.4269,-0.0424]);
let Transform659 = browser.currentScene.createNode("Transform");
let Shape660 = browser.currentScene.createNode("Shape");
Shape660.USE = "HAnimJointShape";
Transform659.child = new undefined();

Transform659.child[0] = Shape660;

Transform658.children = new MFNode();

Transform658.children[0] = Transform659;

HAnimSegment657.children = new MFNode();

HAnimSegment657.children[0] = Transform658;

let Shape661 = browser.currentScene.createNode("Shape");
let LineSet662 = browser.currentScene.createNode("LineSet");
LineSet662.vertexCount = new MFInt32(new int[2]);
let ColorRGBA663 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA663.USE = "HAnimSegmentLineColorRGBA";
LineSet662.color = ColorRGBA663;

let Coordinate664 = browser.currentScene.createNode("Coordinate");
Coordinate664.point = new MFVec3f(new float[0.0962,1.4269,-0.0424,0.2029,1.4376,-0.0387]);
LineSet662.coord = Coordinate664;

Shape661.geometry = LineSet662;

HAnimSegment657.children[1] = Shape661;

let HAnimSite665 = browser.currentScene.createNode("HAnimSite");
HAnimSite665.DEF = "hanim_l_bideltoid_pt";
HAnimSite665.name = "l_bideltoid_pt";
let TouchSensor666 = browser.currentScene.createNode("TouchSensor");
TouchSensor666.description = "HAnimSite l_bideltoid_pt";
HAnimSite665.children = new MFNode();

HAnimSite665.children[0] = TouchSensor666;

let Shape667 = browser.currentScene.createNode("Shape");
Shape667.USE = "HAnimSiteShape";
HAnimSite665.children[1] = Shape667;

HAnimSegment657.children[2] = HAnimSite665;

let HAnimSite668 = browser.currentScene.createNode("HAnimSite");
HAnimSite668.DEF = "hanim_l_humeral_lateral_epicondyles_pt";
HAnimSite668.name = "l_humeral_lateral_epicondyles_pt";
HAnimSite668.translation = new SFVec3f(new float[0.228,1.1482,-0.11]);
let TouchSensor669 = browser.currentScene.createNode("TouchSensor");
TouchSensor669.description = "HAnimSite l_humeral_lateral_epicondyles_pt";
HAnimSite668.children = new MFNode();

HAnimSite668.children[0] = TouchSensor669;

let Shape670 = browser.currentScene.createNode("Shape");
Shape670.USE = "HAnimSiteShape";
HAnimSite668.children[1] = Shape670;

HAnimSegment657.children[3] = HAnimSite668;

HAnimJoint656.children = new MFNode();

HAnimJoint656.children[0] = HAnimSegment657;

let HAnimJoint671 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint671.DEF = "hanim_l_shoulder";
HAnimJoint671.name = "l_shoulder";
HAnimJoint671.center = new SFVec3f(new float[0.2029,1.4376,-0.0387]);
let HAnimSegment672 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment672.DEF = "hanim_l_upperarm";
HAnimSegment672.name = "l_upperarm";
let Transform673 = browser.currentScene.createNode("Transform");
Transform673.translation = new SFVec3f(new float[0.2029,1.4376,-0.0387]);
let Transform674 = browser.currentScene.createNode("Transform");
let Shape675 = browser.currentScene.createNode("Shape");
Shape675.USE = "HAnimJointShape";
Transform674.child = new undefined();

Transform674.child[0] = Shape675;

Transform673.children = new MFNode();

Transform673.children[0] = Transform674;

HAnimSegment672.children = new MFNode();

HAnimSegment672.children[0] = Transform673;

let Shape676 = browser.currentScene.createNode("Shape");
let LineSet677 = browser.currentScene.createNode("LineSet");
LineSet677.vertexCount = new MFInt32(new int[2]);
let ColorRGBA678 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA678.USE = "HAnimSegmentLineColorRGBA";
LineSet677.color = ColorRGBA678;

let Coordinate679 = browser.currentScene.createNode("Coordinate");
Coordinate679.point = new MFVec3f(new float[0.2029,1.4376,-0.0387,0.2014,1.1357,-0.0682]);
LineSet677.coord = Coordinate679;

Shape676.geometry = LineSet677;

HAnimSegment672.children[1] = Shape676;

let HAnimSite680 = browser.currentScene.createNode("HAnimSite");
HAnimSite680.DEF = "hanim_l_humeral_medial_epicondyles_pt";
HAnimSite680.name = "l_humeral_medial_epicondyles_pt";
HAnimSite680.translation = new SFVec3f(new float[0.1735,1.1272,-0.1113]);
let TouchSensor681 = browser.currentScene.createNode("TouchSensor");
TouchSensor681.description = "HAnimSite l_humeral_medial_epicondyles_pt";
HAnimSite680.children = new MFNode();

HAnimSite680.children[0] = TouchSensor681;

let Shape682 = browser.currentScene.createNode("Shape");
Shape682.USE = "HAnimSiteShape";
HAnimSite680.children[1] = Shape682;

HAnimSegment672.children[2] = HAnimSite680;

let HAnimSite683 = browser.currentScene.createNode("HAnimSite");
HAnimSite683.DEF = "hanim_l_olecranon_pt";
HAnimSite683.name = "l_olecranon_pt";
HAnimSite683.translation = new SFVec3f(new float[-0.1962,1.1375,-0.1123]);
let TouchSensor684 = browser.currentScene.createNode("TouchSensor");
TouchSensor684.description = "HAnimSite l_olecranon_pt";
HAnimSite683.children = new MFNode();

HAnimSite683.children[0] = TouchSensor684;

let Shape685 = browser.currentScene.createNode("Shape");
Shape685.USE = "HAnimSiteShape";
HAnimSite683.children[1] = Shape685;

HAnimSegment672.children[3] = HAnimSite683;

let HAnimSite686 = browser.currentScene.createNode("HAnimSite");
HAnimSite686.DEF = "hanim_l_radial_styloid_pt";
HAnimSite686.name = "l_radial_styloid_pt";
HAnimSite686.translation = new SFVec3f(new float[0.1901,0.8645,-0.0415]);
let TouchSensor687 = browser.currentScene.createNode("TouchSensor");
TouchSensor687.description = "HAnimSite l_radial_styloid_pt";
HAnimSite686.children = new MFNode();

HAnimSite686.children[0] = TouchSensor687;

let Shape688 = browser.currentScene.createNode("Shape");
Shape688.USE = "HAnimSiteShape";
HAnimSite686.children[1] = Shape688;

HAnimSegment672.children[4] = HAnimSite686;

let HAnimSite689 = browser.currentScene.createNode("HAnimSite");
HAnimSite689.DEF = "hanim_l_radiale_pt";
HAnimSite689.name = "l_radiale_pt";
HAnimSite689.translation = new SFVec3f(new float[0.2182,1.1212,-0.1167]);
let TouchSensor690 = browser.currentScene.createNode("TouchSensor");
TouchSensor690.description = "HAnimSite l_radiale_pt";
HAnimSite689.children = new MFNode();

HAnimSite689.children[0] = TouchSensor690;

let Shape691 = browser.currentScene.createNode("Shape");
Shape691.USE = "HAnimSiteShape";
HAnimSite689.children[1] = Shape691;

HAnimSegment672.children[5] = HAnimSite689;

HAnimJoint671.children = new MFNode();

HAnimJoint671.children[0] = HAnimSegment672;

let HAnimJoint692 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint692.DEF = "hanim_l_elbow";
HAnimJoint692.name = "l_elbow";
HAnimJoint692.center = new SFVec3f(new float[0.2014,1.1357,-0.0682]);
let HAnimSegment693 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment693.DEF = "hanim_l_forearm";
HAnimSegment693.name = "l_forearm";
let Transform694 = browser.currentScene.createNode("Transform");
Transform694.translation = new SFVec3f(new float[0.2014,1.1357,-0.0682]);
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
Coordinate700.point = new MFVec3f(new float[0.2014,1.1357,-0.0682,0.1984,0.8663,-0.0583]);
LineSet698.coord = Coordinate700;

Shape697.geometry = LineSet698;

HAnimSegment693.children[1] = Shape697;

let HAnimSite701 = browser.currentScene.createNode("HAnimSite");
HAnimSite701.DEF = "hanim_l_ulnar_styloid_pt";
HAnimSite701.name = "l_ulnar_styloid_pt";
HAnimSite701.translation = new SFVec3f(new float[-0.2142,0.8529,-0.0648]);
let TouchSensor702 = browser.currentScene.createNode("TouchSensor");
TouchSensor702.description = "HAnimSite l_ulnar_styloid_pt";
HAnimSite701.children = new MFNode();

HAnimSite701.children[0] = TouchSensor702;

let Shape703 = browser.currentScene.createNode("Shape");
Shape703.USE = "HAnimSiteShape";
HAnimSite701.children[1] = Shape703;

HAnimSegment693.children[2] = HAnimSite701;

HAnimJoint692.children = new MFNode();

HAnimJoint692.children[0] = HAnimSegment693;

let HAnimJoint704 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint704.DEF = "hanim_l_radiocarpal";
HAnimJoint704.name = "l_radiocarpal";
HAnimJoint704.center = new SFVec3f(new float[0.1984,0.8663,-0.0583]);
let HAnimSegment705 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment705.DEF = "hanim_l_carpal";
HAnimSegment705.name = "l_carpal";
let Transform706 = browser.currentScene.createNode("Transform");
Transform706.translation = new SFVec3f(new float[0.2,0.85,-0.05]);
Transform706.rotation = new SFRotation(new float[0,0,1,-3.14]);
Transform706.scale = new SFVec3f(new float[0.2,0.2,0.2]);
let Transform707 = browser.currentScene.createNode("Transform");
Transform707.rotation = new SFRotation(new float[0,1,0,-1.57]);
let Shape708 = browser.currentScene.createNode("Shape");
Shape708.USE = "HAnimJointShape";
Transform707.child = new undefined();

Transform707.child[0] = Shape708;

Transform706.children = new MFNode();

Transform706.children[0] = Transform707;

HAnimSegment705.children = new MFNode();

HAnimSegment705.children[0] = Transform706;

let Shape709 = browser.currentScene.createNode("Shape");
let LineSet710 = browser.currentScene.createNode("LineSet");
LineSet710.vertexCount = new MFInt32(new int[2]);
let ColorRGBA711 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA711.USE = "HAnimSegmentLineColorRGBA";
LineSet710.color = ColorRGBA711;

let Coordinate712 = browser.currentScene.createNode("Coordinate");
Coordinate712.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1924,0.8472,-0.0534]);
LineSet710.coord = Coordinate712;

Shape709.geometry = LineSet710;

HAnimSegment705.children[1] = Shape709;

let Shape713 = browser.currentScene.createNode("Shape");
let LineSet714 = browser.currentScene.createNode("LineSet");
LineSet714.vertexCount = new MFInt32(new int[2]);
let ColorRGBA715 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA715.USE = "HAnimSegmentLineColorRGBA";
LineSet714.color = ColorRGBA715;

let Coordinate716 = browser.currentScene.createNode("Coordinate");
Coordinate716.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1983,0.8024,-0.028]);
LineSet714.coord = Coordinate716;

Shape713.geometry = LineSet714;

HAnimSegment705.children[2] = Shape713;

let HAnimSite717 = browser.currentScene.createNode("HAnimSite");
HAnimSite717.DEF = "hanim_l_metacarpal_phalanx_2_pt";
HAnimSite717.name = "l_metacarpal_phalanx_2_pt";
HAnimSite717.translation = new SFVec3f(new float[0.2009,0.8139,-0.0237]);
let TouchSensor718 = browser.currentScene.createNode("TouchSensor");
TouchSensor718.description = "HAnimSite l_metacarpal_phalanx_2_pt";
HAnimSite717.children = new MFNode();

HAnimSite717.children[0] = TouchSensor718;

let Shape719 = browser.currentScene.createNode("Shape");
Shape719.USE = "HAnimSiteShape";
HAnimSite717.children[1] = Shape719;

HAnimSegment705.children[3] = HAnimSite717;

let Shape720 = browser.currentScene.createNode("Shape");
let LineSet721 = browser.currentScene.createNode("LineSet");
LineSet721.vertexCount = new MFInt32(new int[2]);
let ColorRGBA722 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA722.USE = "HAnimSegmentLineColorRGBA";
LineSet721.color = ColorRGBA722;

let Coordinate723 = browser.currentScene.createNode("Coordinate");
Coordinate723.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1987,0.8029,-0.053]);
LineSet721.coord = Coordinate723;

Shape720.geometry = LineSet721;

HAnimSegment705.children[4] = Shape720;

let HAnimSite724 = browser.currentScene.createNode("HAnimSite");
HAnimSite724.DEF = "hanim_l_metacarpal_phalanx_3_pt";
HAnimSite724.name = "l_metacarpal_phalanx_3_pt";
let TouchSensor725 = browser.currentScene.createNode("TouchSensor");
TouchSensor725.description = "HAnimSite l_metacarpal_phalanx_3_pt";
HAnimSite724.children = new MFNode();

HAnimSite724.children[0] = TouchSensor725;

let Shape726 = browser.currentScene.createNode("Shape");
Shape726.USE = "HAnimSiteShape";
HAnimSite724.children[1] = Shape726;

HAnimSegment705.children[5] = HAnimSite724;

let Shape727 = browser.currentScene.createNode("Shape");
let LineSet728 = browser.currentScene.createNode("LineSet");
LineSet728.vertexCount = new MFInt32(new int[2]);
let ColorRGBA729 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA729.USE = "HAnimSegmentLineColorRGBA";
LineSet728.color = ColorRGBA729;

let Coordinate730 = browser.currentScene.createNode("Coordinate");
Coordinate730.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1956,0.8019,-0.0794]);
LineSet728.coord = Coordinate730;

Shape727.geometry = LineSet728;

HAnimSegment705.children[6] = Shape727;

let Shape731 = browser.currentScene.createNode("Shape");
let LineSet732 = browser.currentScene.createNode("LineSet");
LineSet732.vertexCount = new MFInt32(new int[2]);
let ColorRGBA733 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA733.USE = "HAnimSegmentLineColorRGBA";
LineSet732.color = ColorRGBA733;

let Coordinate734 = browser.currentScene.createNode("Coordinate");
Coordinate734.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1925,0.8066,-0.1036]);
LineSet732.coord = Coordinate734;

Shape731.geometry = LineSet732;

HAnimSegment705.children[7] = Shape731;

let HAnimSite735 = browser.currentScene.createNode("HAnimSite");
HAnimSite735.DEF = "hanim_l_metacarpal_phalanx_5_pt";
HAnimSite735.name = "l_metacarpal_phalanx_5_pt";
HAnimSite735.translation = new SFVec3f(new float[0.1929,0.786,-0.1122]);
let TouchSensor736 = browser.currentScene.createNode("TouchSensor");
TouchSensor736.description = "HAnimSite l_metacarpal_phalanx_5_pt";
HAnimSite735.children = new MFNode();

HAnimSite735.children[0] = TouchSensor736;

let Shape737 = browser.currentScene.createNode("Shape");
Shape737.USE = "HAnimSiteShape";
HAnimSite735.children[1] = Shape737;

HAnimSegment705.children[8] = HAnimSite735;

HAnimJoint704.children = new MFNode();

HAnimJoint704.children[0] = HAnimSegment705;

let HAnimJoint738 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint738.DEF = "hanim_l_carpometacarpal_1";
HAnimJoint738.name = "l_carpometacarpal_1";
HAnimJoint738.center = new SFVec3f(new float[0.1924,0.8472,-0.0534]);
let HAnimSegment739 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment739.DEF = "hanim_l_metacarpal_1";
HAnimSegment739.name = "l_metacarpal_1";
let Transform740 = browser.currentScene.createNode("Transform");
Transform740.translation = new SFVec3f(new float[0.1924,0.8472,-0.0534]);
let Transform741 = browser.currentScene.createNode("Transform");
let Shape742 = browser.currentScene.createNode("Shape");
Shape742.USE = "HAnimJointShape";
Transform741.child = new undefined();

Transform741.child[0] = Shape742;

Transform740.children = new MFNode();

Transform740.children[0] = Transform741;

HAnimSegment739.children = new MFNode();

HAnimSegment739.children[0] = Transform740;

let Shape743 = browser.currentScene.createNode("Shape");
let LineSet744 = browser.currentScene.createNode("LineSet");
LineSet744.vertexCount = new MFInt32(new int[2]);
let ColorRGBA745 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA745.USE = "HAnimSegmentLineColorRGBA";
LineSet744.color = ColorRGBA745;

let Coordinate746 = browser.currentScene.createNode("Coordinate");
Coordinate746.point = new MFVec3f(new float[0.1924,0.8472,-0.0534,0.1951,0.8226,0.0246]);
LineSet744.coord = Coordinate746;

Shape743.geometry = LineSet744;

HAnimSegment739.children[1] = Shape743;

HAnimJoint738.children = new MFNode();

HAnimJoint738.children[0] = HAnimSegment739;

let HAnimJoint747 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint747.DEF = "hanim_l_metacarpophalangeal_1";
HAnimJoint747.name = "l_metacarpophalangeal_1";
HAnimJoint747.center = new SFVec3f(new float[0.1951,0.8226,0.0246]);
let HAnimSegment748 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment748.DEF = "hanim_l_carpal_proximal_phalanx_1";
HAnimSegment748.name = "l_carpal_proximal_phalanx_1";
let Transform749 = browser.currentScene.createNode("Transform");
Transform749.translation = new SFVec3f(new float[0.1951,0.8226,0.0246]);
let Transform750 = browser.currentScene.createNode("Transform");
let Shape751 = browser.currentScene.createNode("Shape");
Shape751.USE = "HAnimJointShape";
Transform750.child = new undefined();

Transform750.child[0] = Shape751;

Transform749.children = new MFNode();

Transform749.children[0] = Transform750;

HAnimSegment748.children = new MFNode();

HAnimSegment748.children[0] = Transform749;

let Shape752 = browser.currentScene.createNode("Shape");
let LineSet753 = browser.currentScene.createNode("LineSet");
LineSet753.vertexCount = new MFInt32(new int[2]);
let ColorRGBA754 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA754.USE = "HAnimSegmentLineColorRGBA";
LineSet753.color = ColorRGBA754;

let Coordinate755 = browser.currentScene.createNode("Coordinate");
Coordinate755.point = new MFVec3f(new float[0.1951,0.8226,0.0246,0.1955,0.8159,0.0464]);
LineSet753.coord = Coordinate755;

Shape752.geometry = LineSet753;

HAnimSegment748.children[1] = Shape752;

let HAnimSite756 = browser.currentScene.createNode("HAnimSite");
HAnimSite756.DEF = "hanim_l_carpal_distal_phalanx_1_tip";
HAnimSite756.name = "l_carpal_distal_phalanx_1_tip";
let TouchSensor757 = browser.currentScene.createNode("TouchSensor");
TouchSensor757.description = "HAnimSite l_carpal_distal_phalanx_1_tip";
HAnimSite756.children = new MFNode();

HAnimSite756.children[0] = TouchSensor757;

let Shape758 = browser.currentScene.createNode("Shape");
Shape758.USE = "HAnimSiteShape";
HAnimSite756.children[1] = Shape758;

HAnimSegment748.children[2] = HAnimSite756;

HAnimJoint747.children = new MFNode();

HAnimJoint747.children[0] = HAnimSegment748;

let HAnimJoint759 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint759.DEF = "hanim_l_carpal_interphalangeal_1";
HAnimJoint759.name = "l_carpal_interphalangeal_1";
HAnimJoint759.center = new SFVec3f(new float[0.1955,0.8159,0.0464]);
HAnimJoint747.children[1] = HAnimJoint759;

HAnimJoint738.children[1] = HAnimJoint747;

HAnimJoint704.children[1] = HAnimJoint738;

let HAnimJoint760 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint760.DEF = "hanim_l_carpometacarpal_2";
HAnimJoint760.name = "l_carpometacarpal_2";
HAnimJoint760.center = new SFVec3f(new float[0.1983,0.8024,-0.028]);
let HAnimSegment761 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment761.DEF = "hanim_l_metacarpal_2";
HAnimSegment761.name = "l_metacarpal_2";
let Transform762 = browser.currentScene.createNode("Transform");
Transform762.translation = new SFVec3f(new float[0.1983,0.8024,-0.028]);
let Transform763 = browser.currentScene.createNode("Transform");
let Shape764 = browser.currentScene.createNode("Shape");
Shape764.USE = "HAnimJointShape";
Transform763.child = new undefined();

Transform763.child[0] = Shape764;

Transform762.children = new MFNode();

Transform762.children[0] = Transform763;

HAnimSegment761.children = new MFNode();

HAnimSegment761.children[0] = Transform762;

let Shape765 = browser.currentScene.createNode("Shape");
let LineSet766 = browser.currentScene.createNode("LineSet");
LineSet766.vertexCount = new MFInt32(new int[2]);
let ColorRGBA767 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA767.USE = "HAnimSegmentLineColorRGBA";
LineSet766.color = ColorRGBA767;

let Coordinate768 = browser.currentScene.createNode("Coordinate");
Coordinate768.point = new MFVec3f(new float[0.1983,0.8024,-0.028,0.1983,0.7815,-0.028]);
LineSet766.coord = Coordinate768;

Shape765.geometry = LineSet766;

HAnimSegment761.children[1] = Shape765;

HAnimJoint760.children = new MFNode();

HAnimJoint760.children[0] = HAnimSegment761;

let HAnimJoint769 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint769.DEF = "hanim_l_metacarpophalangeal_2";
HAnimJoint769.name = "l_metacarpophalangeal_2";
HAnimJoint769.center = new SFVec3f(new float[0.1983,0.7815,-0.028]);
let HAnimSegment770 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment770.DEF = "hanim_l_carpal_proximal_phalanx_2";
HAnimSegment770.name = "l_carpal_proximal_phalanx_2";
let Transform771 = browser.currentScene.createNode("Transform");
Transform771.translation = new SFVec3f(new float[0.1983,0.7815,-0.028]);
let Transform772 = browser.currentScene.createNode("Transform");
let Shape773 = browser.currentScene.createNode("Shape");
Shape773.USE = "HAnimJointShape";
Transform772.child = new undefined();

Transform772.child[0] = Shape773;

Transform771.children = new MFNode();

Transform771.children[0] = Transform772;

HAnimSegment770.children = new MFNode();

HAnimSegment770.children[0] = Transform771;

let Shape774 = browser.currentScene.createNode("Shape");
let LineSet775 = browser.currentScene.createNode("LineSet");
LineSet775.vertexCount = new MFInt32(new int[2]);
let ColorRGBA776 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA776.USE = "HAnimSegmentLineColorRGBA";
LineSet775.color = ColorRGBA776;

let Coordinate777 = browser.currentScene.createNode("Coordinate");
Coordinate777.point = new MFVec3f(new float[0.1983,0.7815,-0.028,0.2017,0.7363,-0.0248]);
LineSet775.coord = Coordinate777;

Shape774.geometry = LineSet775;

HAnimSegment770.children[1] = Shape774;

HAnimJoint769.children = new MFNode();

HAnimJoint769.children[0] = HAnimSegment770;

let HAnimJoint778 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint778.DEF = "hanim_l_carpal_proximal_interphalangeal_1";
HAnimJoint778.name = "l_carpal_proximal_interphalangeal_2";
HAnimJoint778.center = new SFVec3f(new float[0.2017,0.7363,-0.0248]);
let HAnimSegment779 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment779.DEF = "hanim_l_carpal_middle_phalanx_1";
HAnimSegment779.name = "l_carpal_middle_phalanx_2";
let Transform780 = browser.currentScene.createNode("Transform");
Transform780.translation = new SFVec3f(new float[0.2017,0.7363,-0.0248]);
let Transform781 = browser.currentScene.createNode("Transform");
let Shape782 = browser.currentScene.createNode("Shape");
Shape782.USE = "HAnimJointShape";
Transform781.child = new undefined();

Transform781.child[0] = Shape782;

Transform780.children = new MFNode();

Transform780.children[0] = Transform781;

HAnimSegment779.children = new MFNode();

HAnimSegment779.children[0] = Transform780;

let Shape783 = browser.currentScene.createNode("Shape");
let LineSet784 = browser.currentScene.createNode("LineSet");
LineSet784.vertexCount = new MFInt32(new int[2]);
let ColorRGBA785 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA785.USE = "HAnimSegmentLineColorRGBA";
LineSet784.color = ColorRGBA785;

let Coordinate786 = browser.currentScene.createNode("Coordinate");
Coordinate786.point = new MFVec3f(new float[0.2017,0.7363,-0.0248,0.2028,0.7139,-0.0236]);
LineSet784.coord = Coordinate786;

Shape783.geometry = LineSet784;

HAnimSegment779.children[1] = Shape783;

let HAnimSite787 = browser.currentScene.createNode("HAnimSite");
HAnimSite787.DEF = "hanim_l_carpal_distal_phalanx_2_tip";
HAnimSite787.name = "l_carpal_distal_phalanx_2_tip";
let TouchSensor788 = browser.currentScene.createNode("TouchSensor");
TouchSensor788.description = "HAnimSite l_carpal_distal_phalanx_2_tip";
HAnimSite787.children = new MFNode();

HAnimSite787.children[0] = TouchSensor788;

let Shape789 = browser.currentScene.createNode("Shape");
Shape789.USE = "HAnimSiteShape";
HAnimSite787.children[1] = Shape789;

HAnimSegment779.children[2] = HAnimSite787;

let HAnimSite790 = browser.currentScene.createNode("HAnimSite");
HAnimSite790.DEF = "hanim_l_dactylion_pt";
HAnimSite790.name = "l_dactylion_pt";
HAnimSite790.translation = new SFVec3f(new float[0.2056,0.6743,-0.0482]);
let TouchSensor791 = browser.currentScene.createNode("TouchSensor");
TouchSensor791.description = "HAnimSite l_dactylion_pt";
HAnimSite790.children = new MFNode();

HAnimSite790.children[0] = TouchSensor791;

let Shape792 = browser.currentScene.createNode("Shape");
Shape792.USE = "HAnimSiteShape";
HAnimSite790.children[1] = Shape792;

HAnimSegment779.children[3] = HAnimSite790;

HAnimJoint778.children = new MFNode();

HAnimJoint778.children[0] = HAnimSegment779;

let HAnimJoint793 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint793.DEF = "hanim_l_carpal_distal_interphalangeal_1";
HAnimJoint793.name = "l_carpal_distal_interphalangeal_2";
HAnimJoint793.center = new SFVec3f(new float[0.2028,0.7139,-0.0236]);
HAnimJoint778.children[1] = HAnimJoint793;

HAnimJoint769.children[1] = HAnimJoint778;

HAnimJoint760.children[1] = HAnimJoint769;

HAnimJoint704.children[2] = HAnimJoint760;

let HAnimJoint794 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint794.DEF = "hanim_l_carpometacarpal_3";
HAnimJoint794.name = "l_carpometacarpal_3";
HAnimJoint794.center = new SFVec3f(new float[0.1987,0.8029,-0.053]);
let HAnimSegment795 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment795.DEF = "hanim_l_metacarpal_3";
HAnimSegment795.name = "l_metacarpal_3";
let Transform796 = browser.currentScene.createNode("Transform");
Transform796.translation = new SFVec3f(new float[0.1987,0.8029,-0.053]);
let Transform797 = browser.currentScene.createNode("Transform");
let Shape798 = browser.currentScene.createNode("Shape");
Shape798.USE = "HAnimJointShape";
Transform797.child = new undefined();

Transform797.child[0] = Shape798;

Transform796.children = new MFNode();

Transform796.children[0] = Transform797;

HAnimSegment795.children = new MFNode();

HAnimSegment795.children[0] = Transform796;

let Shape799 = browser.currentScene.createNode("Shape");
let LineSet800 = browser.currentScene.createNode("LineSet");
LineSet800.vertexCount = new MFInt32(new int[2]);
let ColorRGBA801 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA801.USE = "HAnimSegmentLineColorRGBA";
LineSet800.color = ColorRGBA801;

let Coordinate802 = browser.currentScene.createNode("Coordinate");
Coordinate802.point = new MFVec3f(new float[0.1987,0.8029,-0.053,0.1987,0.7818,-0.053]);
LineSet800.coord = Coordinate802;

Shape799.geometry = LineSet800;

HAnimSegment795.children[1] = Shape799;

HAnimJoint794.children = new MFNode();

HAnimJoint794.children[0] = HAnimSegment795;

let HAnimJoint803 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint803.DEF = "hanim_l_metacarpophalangeal_3";
HAnimJoint803.name = "l_metacarpophalangeal_3";
HAnimJoint803.center = new SFVec3f(new float[0.1987,0.7818,-0.053]);
let HAnimSegment804 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment804.DEF = "hanim_l_carpal_proximal_phalanx_3";
HAnimSegment804.name = "l_carpal_proximal_phalanx_3";
let Transform805 = browser.currentScene.createNode("Transform");
Transform805.translation = new SFVec3f(new float[0.1987,0.7818,-0.053]);
let Transform806 = browser.currentScene.createNode("Transform");
let Shape807 = browser.currentScene.createNode("Shape");
Shape807.USE = "HAnimJointShape";
Transform806.child = new undefined();

Transform806.child[0] = Shape807;

Transform805.children = new MFNode();

Transform805.children[0] = Transform806;

HAnimSegment804.children = new MFNode();

HAnimSegment804.children[0] = Transform805;

let Shape808 = browser.currentScene.createNode("Shape");
let LineSet809 = browser.currentScene.createNode("LineSet");
LineSet809.vertexCount = new MFInt32(new int[2]);
let ColorRGBA810 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA810.USE = "HAnimSegmentLineColorRGBA";
LineSet809.color = ColorRGBA810;

let Coordinate811 = browser.currentScene.createNode("Coordinate");
Coordinate811.point = new MFVec3f(new float[0.1987,0.7818,-0.053,0.2013,0.7273,-0.0503]);
LineSet809.coord = Coordinate811;

Shape808.geometry = LineSet809;

HAnimSegment804.children[1] = Shape808;

HAnimJoint803.children = new MFNode();

HAnimJoint803.children[0] = HAnimSegment804;

let HAnimJoint812 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint812.DEF = "hanim_l_carpal_proximal_interphalangeal_2";
HAnimJoint812.name = "l_carpal_proximal_interphalangeal_3";
HAnimJoint812.center = new SFVec3f(new float[0.2013,0.7273,-0.0503]);
let HAnimSegment813 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment813.DEF = "hanim_l_carpal_middle_phalanx_2";
HAnimSegment813.name = "l_carpal_middle_phalanx_3";
let Transform814 = browser.currentScene.createNode("Transform");
Transform814.translation = new SFVec3f(new float[0.2013,0.7273,-0.0503]);
let Transform815 = browser.currentScene.createNode("Transform");
let Shape816 = browser.currentScene.createNode("Shape");
Shape816.USE = "HAnimJointShape";
Transform815.child = new undefined();

Transform815.child[0] = Shape816;

Transform814.children = new MFNode();

Transform814.children[0] = Transform815;

HAnimSegment813.children = new MFNode();

HAnimSegment813.children[0] = Transform814;

let Shape817 = browser.currentScene.createNode("Shape");
let LineSet818 = browser.currentScene.createNode("LineSet");
LineSet818.vertexCount = new MFInt32(new int[2]);
let ColorRGBA819 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA819.USE = "HAnimSegmentLineColorRGBA";
LineSet818.color = ColorRGBA819;

let Coordinate820 = browser.currentScene.createNode("Coordinate");
Coordinate820.point = new MFVec3f(new float[0.2013,0.7273,-0.0503,0.2026,0.7011,-0.0494]);
LineSet818.coord = Coordinate820;

Shape817.geometry = LineSet818;

HAnimSegment813.children[1] = Shape817;

let HAnimSite821 = browser.currentScene.createNode("HAnimSite");
HAnimSite821.DEF = "hanim_l_carpal_distal_phalanx_3_tip";
HAnimSite821.name = "l_carpal_distal_phalanx_3_tip";
let TouchSensor822 = browser.currentScene.createNode("TouchSensor");
TouchSensor822.description = "HAnimSite l_carpal_distal_phalanx_3_tip";
HAnimSite821.children = new MFNode();

HAnimSite821.children[0] = TouchSensor822;

let Shape823 = browser.currentScene.createNode("Shape");
Shape823.USE = "HAnimSiteShape";
HAnimSite821.children[1] = Shape823;

HAnimSegment813.children[2] = HAnimSite821;

HAnimJoint812.children = new MFNode();

HAnimJoint812.children[0] = HAnimSegment813;

let HAnimJoint824 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint824.DEF = "hanim_l_carpal_distal_interphalangeal_2";
HAnimJoint824.name = "l_carpal_distal_interphalangeal_3";
HAnimJoint824.center = new SFVec3f(new float[0.2026,0.7011,-0.0494]);
HAnimJoint812.children[1] = HAnimJoint824;

HAnimJoint803.children[1] = HAnimJoint812;

HAnimJoint794.children[1] = HAnimJoint803;

HAnimJoint704.children[3] = HAnimJoint794;

let HAnimJoint825 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint825.DEF = "hanim_l_carpometacarpal_4";
HAnimJoint825.name = "l_carpometacarpal_4";
HAnimJoint825.center = new SFVec3f(new float[0.1956,0.8019,-0.0794]);
let HAnimSegment826 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment826.DEF = "hanim_l_metacarpal_4";
HAnimSegment826.name = "l_metacarpal_4";
let Transform827 = browser.currentScene.createNode("Transform");
Transform827.translation = new SFVec3f(new float[0.1956,0.8019,-0.0794]);
let Transform828 = browser.currentScene.createNode("Transform");
let Shape829 = browser.currentScene.createNode("Shape");
Shape829.USE = "HAnimJointShape";
Transform828.child = new undefined();

Transform828.child[0] = Shape829;

Transform827.children = new MFNode();

Transform827.children[0] = Transform828;

HAnimSegment826.children = new MFNode();

HAnimSegment826.children[0] = Transform827;

let Shape830 = browser.currentScene.createNode("Shape");
let LineSet831 = browser.currentScene.createNode("LineSet");
LineSet831.vertexCount = new MFInt32(new int[2]);
let ColorRGBA832 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA832.USE = "HAnimSegmentLineColorRGBA";
LineSet831.color = ColorRGBA832;

let Coordinate833 = browser.currentScene.createNode("Coordinate");
Coordinate833.point = new MFVec3f(new float[0.1956,0.8019,-0.0794,0.1956,0.7815,-0.0794]);
LineSet831.coord = Coordinate833;

Shape830.geometry = LineSet831;

HAnimSegment826.children[1] = Shape830;

HAnimJoint825.children = new MFNode();

HAnimJoint825.children[0] = HAnimSegment826;

let HAnimJoint834 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint834.DEF = "hanim_l_metacarpophalangeal_4";
HAnimJoint834.name = "l_metacarpophalangeal_4";
HAnimJoint834.center = new SFVec3f(new float[0.1956,0.7815,-0.0794]);
let HAnimSegment835 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment835.DEF = "hanim_l_carpal_proximal_phalanx_4";
HAnimSegment835.name = "l_carpal_proximal_phalanx_4";
let Transform836 = browser.currentScene.createNode("Transform");
Transform836.translation = new SFVec3f(new float[0.1956,0.7815,-0.0794]);
let Transform837 = browser.currentScene.createNode("Transform");
let Shape838 = browser.currentScene.createNode("Shape");
Shape838.USE = "HAnimJointShape";
Transform837.child = new undefined();

Transform837.child[0] = Shape838;

Transform836.children = new MFNode();

Transform836.children[0] = Transform837;

HAnimSegment835.children = new MFNode();

HAnimSegment835.children[0] = Transform836;

let Shape839 = browser.currentScene.createNode("Shape");
let LineSet840 = browser.currentScene.createNode("LineSet");
LineSet840.vertexCount = new MFInt32(new int[2]);
let ColorRGBA841 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA841.USE = "HAnimSegmentLineColorRGBA";
LineSet840.color = ColorRGBA841;

let Coordinate842 = browser.currentScene.createNode("Coordinate");
Coordinate842.point = new MFVec3f(new float[0.1956,0.7815,-0.0794,0.1973,0.7287,-0.0777]);
LineSet840.coord = Coordinate842;

Shape839.geometry = LineSet840;

HAnimSegment835.children[1] = Shape839;

HAnimJoint834.children = new MFNode();

HAnimJoint834.children[0] = HAnimSegment835;

let HAnimJoint843 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint843.DEF = "hanim_l_carpal_proximal_interphalangeal_3";
HAnimJoint843.name = "l_carpal_proximal_interphalangeal_4";
HAnimJoint843.center = new SFVec3f(new float[0.1973,0.7287,-0.0777]);
let HAnimSegment844 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment844.DEF = "hanim_l_carpal_middle_phalanx_3";
HAnimSegment844.name = "l_carpal_middle_phalanx_4";
let Transform845 = browser.currentScene.createNode("Transform");
Transform845.translation = new SFVec3f(new float[0.1973,0.7287,-0.0777]);
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
Coordinate851.point = new MFVec3f(new float[0.1973,0.7287,-0.0777,0.1983,0.7045,-0.0767]);
LineSet849.coord = Coordinate851;

Shape848.geometry = LineSet849;

HAnimSegment844.children[1] = Shape848;

let HAnimSite852 = browser.currentScene.createNode("HAnimSite");
HAnimSite852.DEF = "hanim_l_carpal_distal_phalanx_4_tip";
HAnimSite852.name = "l_carpal_distal_phalanx_4_tip";
let TouchSensor853 = browser.currentScene.createNode("TouchSensor");
TouchSensor853.description = "HAnimSite l_carpal_distal_phalanx_4_tip";
HAnimSite852.children = new MFNode();

HAnimSite852.children[0] = TouchSensor853;

let Shape854 = browser.currentScene.createNode("Shape");
Shape854.USE = "HAnimSiteShape";
HAnimSite852.children[1] = Shape854;

HAnimSegment844.children[2] = HAnimSite852;

HAnimJoint843.children = new MFNode();

HAnimJoint843.children[0] = HAnimSegment844;

let HAnimJoint855 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint855.DEF = "hanim_l_carpal_distal_interphalangeal_3";
HAnimJoint855.name = "l_carpal_distal_interphalangeal_4";
HAnimJoint855.center = new SFVec3f(new float[0.1983,0.7045,-0.0767]);
HAnimJoint843.children[1] = HAnimJoint855;

HAnimJoint834.children[1] = HAnimJoint843;

HAnimJoint825.children[1] = HAnimJoint834;

HAnimJoint704.children[4] = HAnimJoint825;

let HAnimJoint856 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint856.DEF = "hanim_l_carpometacarpal_5";
HAnimJoint856.name = "l_carpometacarpal_5";
HAnimJoint856.center = new SFVec3f(new float[0.1925,0.8066,-0.1036]);
let HAnimSegment857 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment857.DEF = "hanim_l_metacarpal_5";
HAnimSegment857.name = "l_metacarpal_5";
let Transform858 = browser.currentScene.createNode("Transform");
Transform858.translation = new SFVec3f(new float[0.1925,0.8066,-0.1036]);
let Transform859 = browser.currentScene.createNode("Transform");
let Shape860 = browser.currentScene.createNode("Shape");
Shape860.USE = "HAnimJointShape";
Transform859.child = new undefined();

Transform859.child[0] = Shape860;

Transform858.children = new MFNode();

Transform858.children[0] = Transform859;

HAnimSegment857.children = new MFNode();

HAnimSegment857.children[0] = Transform858;

let Shape861 = browser.currentScene.createNode("Shape");
let LineSet862 = browser.currentScene.createNode("LineSet");
LineSet862.vertexCount = new MFInt32(new int[2]);
let ColorRGBA863 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA863.USE = "HAnimSegmentLineColorRGBA";
LineSet862.color = ColorRGBA863;

let Coordinate864 = browser.currentScene.createNode("Coordinate");
Coordinate864.point = new MFVec3f(new float[0.1925,0.8066,-0.1036,0.1925,0.7866,-0.1036]);
LineSet862.coord = Coordinate864;

Shape861.geometry = LineSet862;

HAnimSegment857.children[1] = Shape861;

HAnimJoint856.children = new MFNode();

HAnimJoint856.children[0] = HAnimSegment857;

let HAnimJoint865 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint865.DEF = "hanim_l_metacarpophalangeal_5";
HAnimJoint865.name = "l_metacarpophalangeal_5";
HAnimJoint865.center = new SFVec3f(new float[0.1925,0.7866,-0.1036]);
let HAnimSegment866 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment866.DEF = "hanim_l_carpal_proximal_phalanx_5";
HAnimSegment866.name = "l_carpal_proximal_phalanx_5";
let Transform867 = browser.currentScene.createNode("Transform");
Transform867.translation = new SFVec3f(new float[0.1925,0.7866,-0.1036]);
let Transform868 = browser.currentScene.createNode("Transform");
let Shape869 = browser.currentScene.createNode("Shape");
Shape869.USE = "HAnimJointShape";
Transform868.child = new undefined();

Transform868.child[0] = Shape869;

Transform867.children = new MFNode();

Transform867.children[0] = Transform868;

HAnimSegment866.children = new MFNode();

HAnimSegment866.children[0] = Transform867;

let Shape870 = browser.currentScene.createNode("Shape");
let LineSet871 = browser.currentScene.createNode("LineSet");
LineSet871.vertexCount = new MFInt32(new int[2]);
let ColorRGBA872 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA872.USE = "HAnimSegmentLineColorRGBA";
LineSet871.color = ColorRGBA872;

let Coordinate873 = browser.currentScene.createNode("Coordinate");
Coordinate873.point = new MFVec3f(new float[0.1925,0.7866,-0.1036,0.1938,0.7452,-0.1024]);
LineSet871.coord = Coordinate873;

Shape870.geometry = LineSet871;

HAnimSegment866.children[1] = Shape870;

HAnimJoint865.children = new MFNode();

HAnimJoint865.children[0] = HAnimSegment866;

let HAnimJoint874 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint874.DEF = "hanim_l_carpal_proximal_interphalangeal_4";
HAnimJoint874.name = "l_carpal_proximal_interphalangeal_5";
HAnimJoint874.center = new SFVec3f(new float[0.1938,0.7452,-0.1024]);
let HAnimSegment875 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment875.DEF = "hanim_l_carpal_middle_phalanx_4";
HAnimSegment875.name = "l_carpal_middle_phalanx_5";
let Transform876 = browser.currentScene.createNode("Transform");
Transform876.translation = new SFVec3f(new float[0.1938,0.7452,-0.1024]);
let Transform877 = browser.currentScene.createNode("Transform");
let Shape878 = browser.currentScene.createNode("Shape");
Shape878.USE = "HAnimJointShape";
Transform877.child = new undefined();

Transform877.child[0] = Shape878;

Transform876.children = new MFNode();

Transform876.children[0] = Transform877;

HAnimSegment875.children = new MFNode();

HAnimSegment875.children[0] = Transform876;

let Shape879 = browser.currentScene.createNode("Shape");
let LineSet880 = browser.currentScene.createNode("LineSet");
LineSet880.vertexCount = new MFInt32(new int[2]);
let ColorRGBA881 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA881.USE = "HAnimSegmentLineColorRGBA";
LineSet880.color = ColorRGBA881;

let Coordinate882 = browser.currentScene.createNode("Coordinate");
Coordinate882.point = new MFVec3f(new float[0.1938,0.7452,-0.1024,0.1948,0.7277,-0.1017]);
LineSet880.coord = Coordinate882;

Shape879.geometry = LineSet880;

HAnimSegment875.children[1] = Shape879;

let HAnimSite883 = browser.currentScene.createNode("HAnimSite");
HAnimSite883.DEF = "hanim_l_carpal_distal_phalanx_5_tip";
HAnimSite883.name = "l_carpal_distal_phalanx_5_tip";
let TouchSensor884 = browser.currentScene.createNode("TouchSensor");
TouchSensor884.description = "HAnimSite l_carpal_distal_phalanx_5_tip";
HAnimSite883.children = new MFNode();

HAnimSite883.children[0] = TouchSensor884;

let Shape885 = browser.currentScene.createNode("Shape");
Shape885.USE = "HAnimSiteShape";
HAnimSite883.children[1] = Shape885;

HAnimSegment875.children[2] = HAnimSite883;

HAnimJoint874.children = new MFNode();

HAnimJoint874.children[0] = HAnimSegment875;

let HAnimJoint886 = browser.currentScene.createNode("HAnimJoint");
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

let HAnimJoint887 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint887.DEF = "hanim_r_sternoclavicular";
HAnimJoint887.name = "r_sternoclavicular";
HAnimJoint887.center = new SFVec3f(new float[-0.0694,1.46,-0.033]);
let HAnimSegment888 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment888.DEF = "hanim_r_clavicle";
HAnimSegment888.name = "r_clavicle";
let Transform889 = browser.currentScene.createNode("Transform");
Transform889.translation = new SFVec3f(new float[-0.0694,1.46,-0.033]);
let Transform890 = browser.currentScene.createNode("Transform");
let Shape891 = browser.currentScene.createNode("Shape");
Shape891.USE = "HAnimJointShape";
Transform890.child = new undefined();

Transform890.child[0] = Shape891;

Transform889.children = new MFNode();

Transform889.children[0] = Transform890;

HAnimSegment888.children = new MFNode();

HAnimSegment888.children[0] = Transform889;

let Shape892 = browser.currentScene.createNode("Shape");
let LineSet893 = browser.currentScene.createNode("LineSet");
LineSet893.vertexCount = new MFInt32(new int[2]);
let ColorRGBA894 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA894.USE = "HAnimSegmentLineColorRGBA";
LineSet893.color = ColorRGBA894;

let Coordinate895 = browser.currentScene.createNode("Coordinate");
Coordinate895.point = new MFVec3f(new float[-0.0694,1.46,-0.033,-0.0836,1.4281,-0.0401]);
LineSet893.coord = Coordinate895;

Shape892.geometry = LineSet893;

HAnimSegment888.children[1] = Shape892;

HAnimJoint887.children = new MFNode();

HAnimJoint887.children[0] = HAnimSegment888;

let HAnimJoint896 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint896.DEF = "hanim_r_acromioclavicular";
HAnimJoint896.name = "r_acromioclavicular";
HAnimJoint896.center = new SFVec3f(new float[-0.0836,1.4281,-0.0401]);
let HAnimSegment897 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment897.DEF = "hanim_r_scapula";
HAnimSegment897.name = "r_scapula";
let Transform898 = browser.currentScene.createNode("Transform");
Transform898.translation = new SFVec3f(new float[-0.0836,1.4281,-0.0401]);
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
Coordinate904.point = new MFVec3f(new float[-0.0836,1.4281,-0.0401,-0.1907,1.4407,-0.0325]);
LineSet902.coord = Coordinate904;

Shape901.geometry = LineSet902;

HAnimSegment897.children[1] = Shape901;

let HAnimSite905 = browser.currentScene.createNode("HAnimSite");
HAnimSite905.DEF = "hanim_r_bideltoid_pt";
HAnimSite905.name = "r_bideltoid_pt";
let TouchSensor906 = browser.currentScene.createNode("TouchSensor");
TouchSensor906.description = "HAnimSite r_bideltoid_pt";
HAnimSite905.children = new MFNode();

HAnimSite905.children[0] = TouchSensor906;

let Shape907 = browser.currentScene.createNode("Shape");
Shape907.USE = "HAnimSiteShape";
HAnimSite905.children[1] = Shape907;

HAnimSegment897.children[2] = HAnimSite905;

let HAnimSite908 = browser.currentScene.createNode("HAnimSite");
HAnimSite908.DEF = "hanim_r_humeral_lateral_epicondyles_pt";
HAnimSite908.name = "r_humeral_lateral_epicondyles_pt";
HAnimSite908.translation = new SFVec3f(new float[-0.2224,1.1517,-0.1033]);
let TouchSensor909 = browser.currentScene.createNode("TouchSensor");
TouchSensor909.description = "HAnimSite r_humeral_lateral_epicondyles_pt";
HAnimSite908.children = new MFNode();

HAnimSite908.children[0] = TouchSensor909;

let Shape910 = browser.currentScene.createNode("Shape");
Shape910.USE = "HAnimSiteShape";
HAnimSite908.children[1] = Shape910;

HAnimSegment897.children[3] = HAnimSite908;

HAnimJoint896.children = new MFNode();

HAnimJoint896.children[0] = HAnimSegment897;

let HAnimJoint911 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint911.DEF = "hanim_r_shoulder";
HAnimJoint911.name = "r_shoulder";
HAnimJoint911.center = new SFVec3f(new float[-0.1907,1.4407,-0.0325]);
let HAnimSegment912 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment912.DEF = "hanim_r_upperarm";
HAnimSegment912.name = "r_upperarm";
let Transform913 = browser.currentScene.createNode("Transform");
Transform913.translation = new SFVec3f(new float[-0.1907,1.4407,-0.0325]);
let Transform914 = browser.currentScene.createNode("Transform");
let Shape915 = browser.currentScene.createNode("Shape");
Shape915.USE = "HAnimJointShape";
Transform914.child = new undefined();

Transform914.child[0] = Shape915;

Transform913.children = new MFNode();

Transform913.children[0] = Transform914;

HAnimSegment912.children = new MFNode();

HAnimSegment912.children[0] = Transform913;

let Shape916 = browser.currentScene.createNode("Shape");
let LineSet917 = browser.currentScene.createNode("LineSet");
LineSet917.vertexCount = new MFInt32(new int[2]);
let ColorRGBA918 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA918.USE = "HAnimSegmentLineColorRGBA";
LineSet917.color = ColorRGBA918;

let Coordinate919 = browser.currentScene.createNode("Coordinate");
Coordinate919.point = new MFVec3f(new float[-0.1907,1.4407,-0.0325,-0.1949,1.1388,-0.062]);
LineSet917.coord = Coordinate919;

Shape916.geometry = LineSet917;

HAnimSegment912.children[1] = Shape916;

let HAnimSite920 = browser.currentScene.createNode("HAnimSite");
HAnimSite920.DEF = "hanim_r_humeral_medial_epicondyles_pt";
HAnimSite920.name = "r_humeral_medial_epicondyles_pt";
HAnimSite920.translation = new SFVec3f(new float[-0.168,1.1298,-0.1062]);
let TouchSensor921 = browser.currentScene.createNode("TouchSensor");
TouchSensor921.description = "HAnimSite r_humeral_medial_epicondyles_pt";
HAnimSite920.children = new MFNode();

HAnimSite920.children[0] = TouchSensor921;

let Shape922 = browser.currentScene.createNode("Shape");
Shape922.USE = "HAnimSiteShape";
HAnimSite920.children[1] = Shape922;

HAnimSegment912.children[2] = HAnimSite920;

let HAnimSite923 = browser.currentScene.createNode("HAnimSite");
HAnimSite923.DEF = "hanim_r_olecranon_pt";
HAnimSite923.name = "r_olecranon_pt";
HAnimSite923.translation = new SFVec3f(new float[-0.1907,1.1405,-0.1065]);
let TouchSensor924 = browser.currentScene.createNode("TouchSensor");
TouchSensor924.description = "HAnimSite r_olecranon_pt";
HAnimSite923.children = new MFNode();

HAnimSite923.children[0] = TouchSensor924;

let Shape925 = browser.currentScene.createNode("Shape");
Shape925.USE = "HAnimSiteShape";
HAnimSite923.children[1] = Shape925;

HAnimSegment912.children[3] = HAnimSite923;

let HAnimSite926 = browser.currentScene.createNode("HAnimSite");
HAnimSite926.DEF = "hanim_r_radial_styloid_pt";
HAnimSite926.name = "r_radial_styloid_pt";
HAnimSite926.translation = new SFVec3f(new float[-0.1884,0.8676,-0.036]);
let TouchSensor927 = browser.currentScene.createNode("TouchSensor");
TouchSensor927.description = "HAnimSite r_radial_styloid_pt";
HAnimSite926.children = new MFNode();

HAnimSite926.children[0] = TouchSensor927;

let Shape928 = browser.currentScene.createNode("Shape");
Shape928.USE = "HAnimSiteShape";
HAnimSite926.children[1] = Shape928;

HAnimSegment912.children[4] = HAnimSite926;

let HAnimSite929 = browser.currentScene.createNode("HAnimSite");
HAnimSite929.DEF = "hanim_r_radiale_pt";
HAnimSite929.name = "r_radiale_pt";
HAnimSite929.translation = new SFVec3f(new float[-0.213,1.1305,-0.1091]);
let TouchSensor930 = browser.currentScene.createNode("TouchSensor");
TouchSensor930.description = "HAnimSite r_radiale_pt";
HAnimSite929.children = new MFNode();

HAnimSite929.children[0] = TouchSensor930;

let Shape931 = browser.currentScene.createNode("Shape");
Shape931.USE = "HAnimSiteShape";
HAnimSite929.children[1] = Shape931;

HAnimSegment912.children[5] = HAnimSite929;

HAnimJoint911.children = new MFNode();

HAnimJoint911.children[0] = HAnimSegment912;

let HAnimJoint932 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint932.DEF = "hanim_r_elbow";
HAnimJoint932.name = "r_elbow";
HAnimJoint932.center = new SFVec3f(new float[-0.1949,1.1388,-0.062]);
let HAnimSegment933 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment933.DEF = "hanim_r_forearm";
HAnimSegment933.name = "r_forearm";
let Transform934 = browser.currentScene.createNode("Transform");
Transform934.translation = new SFVec3f(new float[-0.1949,1.1388,-0.062]);
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
Coordinate940.point = new MFVec3f(new float[-0.1949,1.1388,-0.062,-0.1959,0.8694,-0.0521]);
LineSet938.coord = Coordinate940;

Shape937.geometry = LineSet938;

HAnimSegment933.children[1] = Shape937;

let HAnimSite941 = browser.currentScene.createNode("HAnimSite");
HAnimSite941.DEF = "hanim_r_ulnar_styloid_pt";
HAnimSite941.name = "r_ulnar_styloid_pt";
HAnimSite941.translation = new SFVec3f(new float[-0.2117,0.8562,-0.0584]);
let TouchSensor942 = browser.currentScene.createNode("TouchSensor");
TouchSensor942.description = "HAnimSite r_ulnar_styloid_pt";
HAnimSite941.children = new MFNode();

HAnimSite941.children[0] = TouchSensor942;

let Shape943 = browser.currentScene.createNode("Shape");
Shape943.USE = "HAnimSiteShape";
HAnimSite941.children[1] = Shape943;

HAnimSegment933.children[2] = HAnimSite941;

HAnimJoint932.children = new MFNode();

HAnimJoint932.children[0] = HAnimSegment933;

let HAnimJoint944 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint944.DEF = "hanim_r_radiocarpal";
HAnimJoint944.name = "r_radiocarpal";
HAnimJoint944.center = new SFVec3f(new float[-0.1959,0.8694,-0.0521]);
let HAnimSegment945 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment945.DEF = "hanim_r_carpal";
HAnimSegment945.name = "r_carpal";
let Transform946 = browser.currentScene.createNode("Transform");
Transform946.translation = new SFVec3f(new float[-0.2,0.85,-0.05]);
Transform946.rotation = new SFRotation(new float[0,0,1,-3.14]);
Transform946.scale = new SFVec3f(new float[0.2,0.2,0.2]);
let Transform947 = browser.currentScene.createNode("Transform");
Transform947.rotation = new SFRotation(new float[0,1,0,1.57]);
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
Coordinate952.point = new MFVec3f(new float[-0.1959,0.8694,-0.0521,-0.1899,0.8502,-0.0473]);
LineSet950.coord = Coordinate952;

Shape949.geometry = LineSet950;

HAnimSegment945.children[1] = Shape949;

let Shape953 = browser.currentScene.createNode("Shape");
let LineSet954 = browser.currentScene.createNode("LineSet");
LineSet954.vertexCount = new MFInt32(new int[2]);
let ColorRGBA955 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA955.USE = "HAnimSegmentLineColorRGBA";
LineSet954.color = ColorRGBA955;

let Coordinate956 = browser.currentScene.createNode("Coordinate");
Coordinate956.point = new MFVec3f(new float[-0.1959,0.8694,-0.0521,-0.1961,0.8055,-0.0218]);
LineSet954.coord = Coordinate956;

Shape953.geometry = LineSet954;

HAnimSegment945.children[2] = Shape953;

let HAnimSite957 = browser.currentScene.createNode("HAnimSite");
HAnimSite957.DEF = "hanim_r_metacarpal_phalanx_2_pt";
HAnimSite957.name = "r_metacarpal_phalanx_2_pt";
HAnimSite957.translation = new SFVec3f(new float[-0.1977,0.8169,-0.0177]);
let TouchSensor958 = browser.currentScene.createNode("TouchSensor");
TouchSensor958.description = "HAnimSite r_metacarpal_phalanx_2_pt";
HAnimSite957.children = new MFNode();

HAnimSite957.children[0] = TouchSensor958;

let Shape959 = browser.currentScene.createNode("Shape");
Shape959.USE = "HAnimSiteShape";
HAnimSite957.children[1] = Shape959;

HAnimSegment945.children[3] = HAnimSite957;

let Shape960 = browser.currentScene.createNode("Shape");
let LineSet961 = browser.currentScene.createNode("LineSet");
LineSet961.vertexCount = new MFInt32(new int[2]);
let ColorRGBA962 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA962.USE = "HAnimSegmentLineColorRGBA";
LineSet961.color = ColorRGBA962;

let Coordinate963 = browser.currentScene.createNode("Coordinate");
Coordinate963.point = new MFVec3f(new float[-0.1959,0.8694,-0.0521,-0.1972,0.806,-0.0468]);
LineSet961.coord = Coordinate963;

Shape960.geometry = LineSet961;

HAnimSegment945.children[4] = Shape960;

let HAnimSite964 = browser.currentScene.createNode("HAnimSite");
HAnimSite964.DEF = "hanim_r_metacarpal_phalanx_3_pt";
HAnimSite964.name = "r_metacarpal_phalanx_3_pt";
let TouchSensor965 = browser.currentScene.createNode("TouchSensor");
TouchSensor965.description = "HAnimSite r_metacarpal_phalanx_3_pt";
HAnimSite964.children = new MFNode();

HAnimSite964.children[0] = TouchSensor965;

let Shape966 = browser.currentScene.createNode("Shape");
Shape966.USE = "HAnimSiteShape";
HAnimSite964.children[1] = Shape966;

HAnimSegment945.children[5] = HAnimSite964;

let Shape967 = browser.currentScene.createNode("Shape");
let LineSet968 = browser.currentScene.createNode("LineSet");
LineSet968.vertexCount = new MFInt32(new int[2]);
let ColorRGBA969 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA969.USE = "HAnimSegmentLineColorRGBA";
LineSet968.color = ColorRGBA969;

let Coordinate970 = browser.currentScene.createNode("Coordinate");
Coordinate970.point = new MFVec3f(new float[-0.1959,0.8694,-0.0521,-0.1951,0.8049,-0.0732]);
LineSet968.coord = Coordinate970;

Shape967.geometry = LineSet968;

HAnimSegment945.children[6] = Shape967;

let Shape971 = browser.currentScene.createNode("Shape");
let LineSet972 = browser.currentScene.createNode("LineSet");
LineSet972.vertexCount = new MFInt32(new int[2]);
let ColorRGBA973 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA973.USE = "HAnimSegmentLineColorRGBA";
LineSet972.color = ColorRGBA973;

let Coordinate974 = browser.currentScene.createNode("Coordinate");
Coordinate974.point = new MFVec3f(new float[-0.1959,0.8694,-0.0521,-0.1926,0.8096,-0.0975]);
LineSet972.coord = Coordinate974;

Shape971.geometry = LineSet972;

HAnimSegment945.children[7] = Shape971;

let HAnimSite975 = browser.currentScene.createNode("HAnimSite");
HAnimSite975.DEF = "hanim_r_metacarpal_phalanx_5_pt";
HAnimSite975.name = "r_metacarpal_phalanx_5_pt";
HAnimSite975.translation = new SFVec3f(new float[-0.1929,0.789,-0.1064]);
let TouchSensor976 = browser.currentScene.createNode("TouchSensor");
TouchSensor976.description = "HAnimSite r_metacarpal_phalanx_5_pt";
HAnimSite975.children = new MFNode();

HAnimSite975.children[0] = TouchSensor976;

let Shape977 = browser.currentScene.createNode("Shape");
Shape977.USE = "HAnimSiteShape";
HAnimSite975.children[1] = Shape977;

HAnimSegment945.children[8] = HAnimSite975;

HAnimJoint944.children = new MFNode();

HAnimJoint944.children[0] = HAnimSegment945;

let HAnimJoint978 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint978.DEF = "hanim_r_carpometacarpal_1";
HAnimJoint978.name = "r_carpometacarpal_1";
HAnimJoint978.center = new SFVec3f(new float[-0.1899,0.8502,-0.0473]);
let HAnimSegment979 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment979.DEF = "hanim_r_metacarpal_1";
HAnimSegment979.name = "r_metacarpal_1";
let Transform980 = browser.currentScene.createNode("Transform");
Transform980.translation = new SFVec3f(new float[-0.1899,0.8502,-0.0473]);
let Transform981 = browser.currentScene.createNode("Transform");
let Shape982 = browser.currentScene.createNode("Shape");
Shape982.USE = "HAnimJointShape";
Transform981.child = new undefined();

Transform981.child[0] = Shape982;

Transform980.children = new MFNode();

Transform980.children[0] = Transform981;

HAnimSegment979.children = new MFNode();

HAnimSegment979.children[0] = Transform980;

let Shape983 = browser.currentScene.createNode("Shape");
let LineSet984 = browser.currentScene.createNode("LineSet");
LineSet984.vertexCount = new MFInt32(new int[2]);
let ColorRGBA985 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA985.USE = "HAnimSegmentLineColorRGBA";
LineSet984.color = ColorRGBA985;

let Coordinate986 = browser.currentScene.createNode("Coordinate");
Coordinate986.point = new MFVec3f(new float[-0.1899,0.8502,-0.0473,-0.1874,0.8256,0.0306]);
LineSet984.coord = Coordinate986;

Shape983.geometry = LineSet984;

HAnimSegment979.children[1] = Shape983;

HAnimJoint978.children = new MFNode();

HAnimJoint978.children[0] = HAnimSegment979;

let HAnimJoint987 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint987.DEF = "hanim_r_metacarpophalangeal_1";
HAnimJoint987.name = "r_metacarpophalangeal_1";
HAnimJoint987.center = new SFVec3f(new float[-0.1874,0.8256,0.0306]);
let HAnimSegment988 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment988.DEF = "hanim_r_carpal_proximal_phalanx_1";
HAnimSegment988.name = "r_carpal_proximal_phalanx_1";
let Transform989 = browser.currentScene.createNode("Transform");
Transform989.translation = new SFVec3f(new float[-0.1874,0.8256,0.0306]);
let Transform990 = browser.currentScene.createNode("Transform");
let Shape991 = browser.currentScene.createNode("Shape");
Shape991.USE = "HAnimJointShape";
Transform990.child = new undefined();

Transform990.child[0] = Shape991;

Transform989.children = new MFNode();

Transform989.children[0] = Transform990;

HAnimSegment988.children = new MFNode();

HAnimSegment988.children[0] = Transform989;

let Shape992 = browser.currentScene.createNode("Shape");
let LineSet993 = browser.currentScene.createNode("LineSet");
LineSet993.vertexCount = new MFInt32(new int[2]);
let ColorRGBA994 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA994.USE = "HAnimSegmentLineColorRGBA";
LineSet993.color = ColorRGBA994;

let Coordinate995 = browser.currentScene.createNode("Coordinate");
Coordinate995.point = new MFVec3f(new float[-0.1874,0.8256,0.0306,-0.1864,0.819,0.0506]);
LineSet993.coord = Coordinate995;

Shape992.geometry = LineSet993;

HAnimSegment988.children[1] = Shape992;

let HAnimSite996 = browser.currentScene.createNode("HAnimSite");
HAnimSite996.DEF = "hanim_r_carpal_distal_phalanx_1_tip";
HAnimSite996.name = "r_carpal_distal_phalanx_1_tip";
let TouchSensor997 = browser.currentScene.createNode("TouchSensor");
TouchSensor997.description = "HAnimSite r_carpal_distal_phalanx_1_tip";
HAnimSite996.children = new MFNode();

HAnimSite996.children[0] = TouchSensor997;

let Shape998 = browser.currentScene.createNode("Shape");
Shape998.USE = "HAnimSiteShape";
HAnimSite996.children[1] = Shape998;

HAnimSegment988.children[2] = HAnimSite996;

HAnimJoint987.children = new MFNode();

HAnimJoint987.children[0] = HAnimSegment988;

let HAnimJoint999 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint999.DEF = "hanim_r_carpal_interphalangeal_1";
HAnimJoint999.name = "r_carpal_interphalangeal_1";
HAnimJoint999.center = new SFVec3f(new float[-0.1864,0.819,0.0506]);
HAnimJoint987.children[1] = HAnimJoint999;

HAnimJoint978.children[1] = HAnimJoint987;

HAnimJoint944.children[1] = HAnimJoint978;

let HAnimJoint1000 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1000.DEF = "hanim_r_carpometacarpal_2";
HAnimJoint1000.name = "r_carpometacarpal_2";
HAnimJoint1000.center = new SFVec3f(new float[-0.1961,0.8055,-0.0218]);
let HAnimSegment1001 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1001.DEF = "hanim_r_metacarpal_2";
HAnimSegment1001.name = "r_metacarpal_2";
let Transform1002 = browser.currentScene.createNode("Transform");
Transform1002.translation = new SFVec3f(new float[-0.1961,0.8055,-0.0218]);
let Transform1003 = browser.currentScene.createNode("Transform");
let Shape1004 = browser.currentScene.createNode("Shape");
Shape1004.USE = "HAnimJointShape";
Transform1003.child = new undefined();

Transform1003.child[0] = Shape1004;

Transform1002.children = new MFNode();

Transform1002.children[0] = Transform1003;

HAnimSegment1001.children = new MFNode();

HAnimSegment1001.children[0] = Transform1002;

let Shape1005 = browser.currentScene.createNode("Shape");
let LineSet1006 = browser.currentScene.createNode("LineSet");
LineSet1006.vertexCount = new MFInt32(new int[2]);
let ColorRGBA1007 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1007.USE = "HAnimSegmentLineColorRGBA";
LineSet1006.color = ColorRGBA1007;

let Coordinate1008 = browser.currentScene.createNode("Coordinate");
Coordinate1008.point = new MFVec3f(new float[-0.1961,0.8055,-0.0218,-0.1961,0.7846,-0.0218]);
LineSet1006.coord = Coordinate1008;

Shape1005.geometry = LineSet1006;

HAnimSegment1001.children[1] = Shape1005;

HAnimJoint1000.children = new MFNode();

HAnimJoint1000.children[0] = HAnimSegment1001;

let HAnimJoint1009 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1009.DEF = "hanim_r_metacarpophalangeal_2";
HAnimJoint1009.name = "r_metacarpophalangeal_2";
HAnimJoint1009.center = new SFVec3f(new float[-0.1961,0.7846,-0.0218]);
let HAnimSegment1010 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1010.DEF = "hanim_r_carpal_proximal_phalanx_2";
HAnimSegment1010.name = "r_carpal_proximal_phalanx_2";
let Transform1011 = browser.currentScene.createNode("Transform");
Transform1011.translation = new SFVec3f(new float[-0.1961,0.7846,-0.0218]);
let Transform1012 = browser.currentScene.createNode("Transform");
let Shape1013 = browser.currentScene.createNode("Shape");
Shape1013.USE = "HAnimJointShape";
Transform1012.child = new undefined();

Transform1012.child[0] = Shape1013;

Transform1011.children = new MFNode();

Transform1011.children[0] = Transform1012;

HAnimSegment1010.children = new MFNode();

HAnimSegment1010.children[0] = Transform1011;

let Shape1014 = browser.currentScene.createNode("Shape");
let LineSet1015 = browser.currentScene.createNode("LineSet");
LineSet1015.vertexCount = new MFInt32(new int[2]);
let ColorRGBA1016 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1016.USE = "HAnimSegmentLineColorRGBA";
LineSet1015.color = ColorRGBA1016;

let Coordinate1017 = browser.currentScene.createNode("Coordinate");
Coordinate1017.point = new MFVec3f(new float[-0.1961,0.7846,-0.0218,-0.1954,0.7393,-0.0185]);
LineSet1015.coord = Coordinate1017;

Shape1014.geometry = LineSet1015;

HAnimSegment1010.children[1] = Shape1014;

HAnimJoint1009.children = new MFNode();

HAnimJoint1009.children[0] = HAnimSegment1010;

let HAnimJoint1018 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1018.DEF = "hanim_r_carpal_proximal_interphalangeal_1";
HAnimJoint1018.name = "r_carpal_proximal_interphalangeal_2";
HAnimJoint1018.center = new SFVec3f(new float[-0.1954,0.7393,-0.0185]);
let HAnimSegment1019 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1019.DEF = "hanim_r_carpal_middle_phalanx_1";
HAnimSegment1019.name = "r_carpal_middle_phalanx_2";
let Transform1020 = browser.currentScene.createNode("Transform");
Transform1020.translation = new SFVec3f(new float[-0.1954,0.7393,-0.0185]);
let Transform1021 = browser.currentScene.createNode("Transform");
let Shape1022 = browser.currentScene.createNode("Shape");
Shape1022.USE = "HAnimJointShape";
Transform1021.child = new undefined();

Transform1021.child[0] = Shape1022;

Transform1020.children = new MFNode();

Transform1020.children[0] = Transform1021;

HAnimSegment1019.children = new MFNode();

HAnimSegment1019.children[0] = Transform1020;

let Shape1023 = browser.currentScene.createNode("Shape");
let LineSet1024 = browser.currentScene.createNode("LineSet");
LineSet1024.vertexCount = new MFInt32(new int[2]);
let ColorRGBA1025 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1025.USE = "HAnimSegmentLineColorRGBA";
LineSet1024.color = ColorRGBA1025;

let Coordinate1026 = browser.currentScene.createNode("Coordinate");
Coordinate1026.point = new MFVec3f(new float[-0.1954,0.7393,-0.0185,-0.1945,0.7169,-0.0173]);
LineSet1024.coord = Coordinate1026;

Shape1023.geometry = LineSet1024;

HAnimSegment1019.children[1] = Shape1023;

let HAnimSite1027 = browser.currentScene.createNode("HAnimSite");
HAnimSite1027.DEF = "hanim_r_carpal_distal_phalanx_2_tip";
HAnimSite1027.name = "r_carpal_distal_phalanx_2_tip";
let TouchSensor1028 = browser.currentScene.createNode("TouchSensor");
TouchSensor1028.description = "HAnimSite r_carpal_distal_phalanx_2_tip";
HAnimSite1027.children = new MFNode();

HAnimSite1027.children[0] = TouchSensor1028;

let Shape1029 = browser.currentScene.createNode("Shape");
Shape1029.USE = "HAnimSiteShape";
HAnimSite1027.children[1] = Shape1029;

HAnimSegment1019.children[2] = HAnimSite1027;

let HAnimSite1030 = browser.currentScene.createNode("HAnimSite");
HAnimSite1030.DEF = "hanim_r_dactylion_pt";
HAnimSite1030.name = "r_dactylion_pt";
HAnimSite1030.translation = new SFVec3f(new float[-0.1941,0.6772,-0.0423]);
let TouchSensor1031 = browser.currentScene.createNode("TouchSensor");
TouchSensor1031.description = "HAnimSite r_dactylion_pt";
HAnimSite1030.children = new MFNode();

HAnimSite1030.children[0] = TouchSensor1031;

let Shape1032 = browser.currentScene.createNode("Shape");
Shape1032.USE = "HAnimSiteShape";
HAnimSite1030.children[1] = Shape1032;

HAnimSegment1019.children[3] = HAnimSite1030;

HAnimJoint1018.children = new MFNode();

HAnimJoint1018.children[0] = HAnimSegment1019;

let HAnimJoint1033 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1033.DEF = "hanim_r_carpal_distal_interphalangeal_1";
HAnimJoint1033.name = "r_carpal_distal_interphalangeal_2";
HAnimJoint1033.center = new SFVec3f(new float[-0.1945,0.7169,-0.0173]);
HAnimJoint1018.children[1] = HAnimJoint1033;

HAnimJoint1009.children[1] = HAnimJoint1018;

HAnimJoint1000.children[1] = HAnimJoint1009;

HAnimJoint944.children[2] = HAnimJoint1000;

let HAnimJoint1034 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1034.DEF = "hanim_r_carpometacarpal_3";
HAnimJoint1034.name = "r_carpometacarpal_3";
HAnimJoint1034.center = new SFVec3f(new float[-0.1972,0.806,-0.0468]);
let HAnimSegment1035 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1035.DEF = "hanim_r_metacarpal_3";
HAnimSegment1035.name = "r_metacarpal_3";
let Transform1036 = browser.currentScene.createNode("Transform");
Transform1036.translation = new SFVec3f(new float[-0.1972,0.806,-0.0468]);
let Transform1037 = browser.currentScene.createNode("Transform");
let Shape1038 = browser.currentScene.createNode("Shape");
Shape1038.USE = "HAnimJointShape";
Transform1037.child = new undefined();

Transform1037.child[0] = Shape1038;

Transform1036.children = new MFNode();

Transform1036.children[0] = Transform1037;

HAnimSegment1035.children = new MFNode();

HAnimSegment1035.children[0] = Transform1036;

let Shape1039 = browser.currentScene.createNode("Shape");
let LineSet1040 = browser.currentScene.createNode("LineSet");
LineSet1040.vertexCount = new MFInt32(new int[2]);
let ColorRGBA1041 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1041.USE = "HAnimSegmentLineColorRGBA";
LineSet1040.color = ColorRGBA1041;

let Coordinate1042 = browser.currentScene.createNode("Coordinate");
Coordinate1042.point = new MFVec3f(new float[-0.1972,0.806,-0.0468,-0.1972,0.7849,-0.0468]);
LineSet1040.coord = Coordinate1042;

Shape1039.geometry = LineSet1040;

HAnimSegment1035.children[1] = Shape1039;

HAnimJoint1034.children = new MFNode();

HAnimJoint1034.children[0] = HAnimSegment1035;

let HAnimJoint1043 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1043.DEF = "hanim_r_metacarpophalangeal_3";
HAnimJoint1043.name = "r_metacarpophalangeal_3";
HAnimJoint1043.center = new SFVec3f(new float[-0.1972,0.7849,-0.0468]);
let HAnimSegment1044 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1044.DEF = "hanim_r_carpal_proximal_phalanx_3";
HAnimSegment1044.name = "r_carpal_proximal_phalanx_3";
let Transform1045 = browser.currentScene.createNode("Transform");
Transform1045.translation = new SFVec3f(new float[-0.1972,0.7849,-0.0468]);
let Transform1046 = browser.currentScene.createNode("Transform");
let Shape1047 = browser.currentScene.createNode("Shape");
Shape1047.USE = "HAnimJointShape";
Transform1046.child = new undefined();

Transform1046.child[0] = Shape1047;

Transform1045.children = new MFNode();

Transform1045.children[0] = Transform1046;

HAnimSegment1044.children = new MFNode();

HAnimSegment1044.children[0] = Transform1045;

let Shape1048 = browser.currentScene.createNode("Shape");
let LineSet1049 = browser.currentScene.createNode("LineSet");
LineSet1049.vertexCount = new MFInt32(new int[2]);
let ColorRGBA1050 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1050.USE = "HAnimSegmentLineColorRGBA";
LineSet1049.color = ColorRGBA1050;

let Coordinate1051 = browser.currentScene.createNode("Coordinate");
Coordinate1051.point = new MFVec3f(new float[-0.1972,0.7849,-0.0468,-0.195,0.7304,-0.0441]);
LineSet1049.coord = Coordinate1051;

Shape1048.geometry = LineSet1049;

HAnimSegment1044.children[1] = Shape1048;

HAnimJoint1043.children = new MFNode();

HAnimJoint1043.children[0] = HAnimSegment1044;

let HAnimJoint1052 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1052.DEF = "hanim_r_carpal_proximal_interphalangeal_2";
HAnimJoint1052.name = "r_carpal_proximal_interphalangeal_3";
HAnimJoint1052.center = new SFVec3f(new float[-0.195,0.7304,-0.0441]);
let HAnimSegment1053 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1053.DEF = "hanim_r_carpal_middle_phalanx_2";
HAnimSegment1053.name = "r_carpal_middle_phalanx_3";
let Transform1054 = browser.currentScene.createNode("Transform");
Transform1054.translation = new SFVec3f(new float[-0.195,0.7304,-0.0441]);
let Transform1055 = browser.currentScene.createNode("Transform");
let Shape1056 = browser.currentScene.createNode("Shape");
Shape1056.USE = "HAnimJointShape";
Transform1055.child = new undefined();

Transform1055.child[0] = Shape1056;

Transform1054.children = new MFNode();

Transform1054.children[0] = Transform1055;

HAnimSegment1053.children = new MFNode();

HAnimSegment1053.children[0] = Transform1054;

let Shape1057 = browser.currentScene.createNode("Shape");
let LineSet1058 = browser.currentScene.createNode("LineSet");
LineSet1058.vertexCount = new MFInt32(new int[2]);
let ColorRGBA1059 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1059.USE = "HAnimSegmentLineColorRGBA";
LineSet1058.color = ColorRGBA1059;

let Coordinate1060 = browser.currentScene.createNode("Coordinate");
Coordinate1060.point = new MFVec3f(new float[-0.195,0.7304,-0.0441,-0.1939,0.7042,-0.0432]);
LineSet1058.coord = Coordinate1060;

Shape1057.geometry = LineSet1058;

HAnimSegment1053.children[1] = Shape1057;

let HAnimSite1061 = browser.currentScene.createNode("HAnimSite");
HAnimSite1061.DEF = "hanim_r_carpal_distal_phalanx_3_tip";
HAnimSite1061.name = "r_carpal_distal_phalanx_3_tip";
let TouchSensor1062 = browser.currentScene.createNode("TouchSensor");
TouchSensor1062.description = "HAnimSite r_carpal_distal_phalanx_3_tip";
HAnimSite1061.children = new MFNode();

HAnimSite1061.children[0] = TouchSensor1062;

let Shape1063 = browser.currentScene.createNode("Shape");
Shape1063.USE = "HAnimSiteShape";
HAnimSite1061.children[1] = Shape1063;

HAnimSegment1053.children[2] = HAnimSite1061;

HAnimJoint1052.children = new MFNode();

HAnimJoint1052.children[0] = HAnimSegment1053;

let HAnimJoint1064 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1064.DEF = "hanim_r_carpal_distal_interphalangeal_2";
HAnimJoint1064.name = "r_carpal_distal_interphalangeal_3";
HAnimJoint1064.center = new SFVec3f(new float[-0.1939,0.7042,-0.0432]);
HAnimJoint1052.children[1] = HAnimJoint1064;

HAnimJoint1043.children[1] = HAnimJoint1052;

HAnimJoint1034.children[1] = HAnimJoint1043;

HAnimJoint944.children[3] = HAnimJoint1034;

let HAnimJoint1065 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1065.DEF = "hanim_r_carpometacarpal_4";
HAnimJoint1065.name = "r_carpometacarpal_4";
HAnimJoint1065.center = new SFVec3f(new float[-0.1951,0.8049,-0.0732]);
let HAnimSegment1066 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1066.DEF = "hanim_r_metacarpal_4";
HAnimSegment1066.name = "r_metacarpal_4";
let Transform1067 = browser.currentScene.createNode("Transform");
Transform1067.translation = new SFVec3f(new float[-0.1951,0.8049,-0.0732]);
let Transform1068 = browser.currentScene.createNode("Transform");
let Shape1069 = browser.currentScene.createNode("Shape");
Shape1069.USE = "HAnimJointShape";
Transform1068.child = new undefined();

Transform1068.child[0] = Shape1069;

Transform1067.children = new MFNode();

Transform1067.children[0] = Transform1068;

HAnimSegment1066.children = new MFNode();

HAnimSegment1066.children[0] = Transform1067;

let Shape1070 = browser.currentScene.createNode("Shape");
let LineSet1071 = browser.currentScene.createNode("LineSet");
LineSet1071.vertexCount = new MFInt32(new int[2]);
let ColorRGBA1072 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1072.USE = "HAnimSegmentLineColorRGBA";
LineSet1071.color = ColorRGBA1072;

let Coordinate1073 = browser.currentScene.createNode("Coordinate");
Coordinate1073.point = new MFVec3f(new float[-0.1951,0.8049,-0.0732,-0.1951,0.7845,-0.0732]);
LineSet1071.coord = Coordinate1073;

Shape1070.geometry = LineSet1071;

HAnimSegment1066.children[1] = Shape1070;

HAnimJoint1065.children = new MFNode();

HAnimJoint1065.children[0] = HAnimSegment1066;

let HAnimJoint1074 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1074.DEF = "hanim_r_metacarpophalangeal_4";
HAnimJoint1074.name = "r_metacarpophalangeal_4";
HAnimJoint1074.center = new SFVec3f(new float[-0.1951,0.7845,-0.0732]);
let HAnimSegment1075 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1075.DEF = "hanim_r_carpal_proximal_phalanx_4";
HAnimSegment1075.name = "r_carpal_proximal_phalanx_4";
let Transform1076 = browser.currentScene.createNode("Transform");
Transform1076.translation = new SFVec3f(new float[-0.1951,0.7845,-0.0732]);
let Transform1077 = browser.currentScene.createNode("Transform");
let Shape1078 = browser.currentScene.createNode("Shape");
Shape1078.USE = "HAnimJointShape";
Transform1077.child = new undefined();

Transform1077.child[0] = Shape1078;

Transform1076.children = new MFNode();

Transform1076.children[0] = Transform1077;

HAnimSegment1075.children = new MFNode();

HAnimSegment1075.children[0] = Transform1076;

let Shape1079 = browser.currentScene.createNode("Shape");
let LineSet1080 = browser.currentScene.createNode("LineSet");
LineSet1080.vertexCount = new MFInt32(new int[2]);
let ColorRGBA1081 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1081.USE = "HAnimSegmentLineColorRGBA";
LineSet1080.color = ColorRGBA1081;

let Coordinate1082 = browser.currentScene.createNode("Coordinate");
Coordinate1082.point = new MFVec3f(new float[-0.1951,0.7845,-0.0732,-0.192,0.7318,-0.0716]);
LineSet1080.coord = Coordinate1082;

Shape1079.geometry = LineSet1080;

HAnimSegment1075.children[1] = Shape1079;

HAnimJoint1074.children = new MFNode();

HAnimJoint1074.children[0] = HAnimSegment1075;

let HAnimJoint1083 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1083.DEF = "hanim_r_carpal_proximal_interphalangeal_3";
HAnimJoint1083.name = "r_carpal_proximal_interphalangeal_4";
HAnimJoint1083.center = new SFVec3f(new float[-0.192,0.7318,-0.0716]);
let HAnimSegment1084 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1084.DEF = "hanim_r_carpal_middle_phalanx_3";
HAnimSegment1084.name = "r_carpal_middle_phalanx_4";
let Transform1085 = browser.currentScene.createNode("Transform");
Transform1085.translation = new SFVec3f(new float[-0.192,0.7318,-0.0716]);
let Transform1086 = browser.currentScene.createNode("Transform");
let Shape1087 = browser.currentScene.createNode("Shape");
Shape1087.USE = "HAnimJointShape";
Transform1086.child = new undefined();

Transform1086.child[0] = Shape1087;

Transform1085.children = new MFNode();

Transform1085.children[0] = Transform1086;

HAnimSegment1084.children = new MFNode();

HAnimSegment1084.children[0] = Transform1085;

let Shape1088 = browser.currentScene.createNode("Shape");
let LineSet1089 = browser.currentScene.createNode("LineSet");
LineSet1089.vertexCount = new MFInt32(new int[2]);
let ColorRGBA1090 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1090.USE = "HAnimSegmentLineColorRGBA";
LineSet1089.color = ColorRGBA1090;

let Coordinate1091 = browser.currentScene.createNode("Coordinate");
Coordinate1091.point = new MFVec3f(new float[-0.192,0.7318,-0.0716,-0.1908,0.7077,-0.0706]);
LineSet1089.coord = Coordinate1091;

Shape1088.geometry = LineSet1089;

HAnimSegment1084.children[1] = Shape1088;

let HAnimSite1092 = browser.currentScene.createNode("HAnimSite");
HAnimSite1092.DEF = "hanim_r_carpal_distal_phalanx_4_tip";
HAnimSite1092.name = "r_carpal_distal_phalanx_4_tip";
let TouchSensor1093 = browser.currentScene.createNode("TouchSensor");
TouchSensor1093.description = "HAnimSite r_carpal_distal_phalanx_4_tip";
HAnimSite1092.children = new MFNode();

HAnimSite1092.children[0] = TouchSensor1093;

let Shape1094 = browser.currentScene.createNode("Shape");
Shape1094.USE = "HAnimSiteShape";
HAnimSite1092.children[1] = Shape1094;

HAnimSegment1084.children[2] = HAnimSite1092;

HAnimJoint1083.children = new MFNode();

HAnimJoint1083.children[0] = HAnimSegment1084;

let HAnimJoint1095 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1095.DEF = "hanim_r_carpal_distal_interphalangeal_3";
HAnimJoint1095.name = "r_carpal_distal_interphalangeal_4";
HAnimJoint1095.center = new SFVec3f(new float[-0.1908,0.7077,-0.0706]);
HAnimJoint1083.children[1] = HAnimJoint1095;

HAnimJoint1074.children[1] = HAnimJoint1083;

HAnimJoint1065.children[1] = HAnimJoint1074;

HAnimJoint944.children[4] = HAnimJoint1065;

let HAnimJoint1096 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1096.DEF = "hanim_r_carpometacarpal_5";
HAnimJoint1096.name = "r_carpometacarpal_5";
HAnimJoint1096.center = new SFVec3f(new float[-0.1926,0.8096,-0.0975]);
let HAnimSegment1097 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1097.DEF = "hanim_r_metacarpal_5";
HAnimSegment1097.name = "r_metacarpal_5";
let Transform1098 = browser.currentScene.createNode("Transform");
Transform1098.translation = new SFVec3f(new float[-0.1926,0.8096,-0.0975]);
let Transform1099 = browser.currentScene.createNode("Transform");
let Shape1100 = browser.currentScene.createNode("Shape");
Shape1100.USE = "HAnimJointShape";
Transform1099.child = new undefined();

Transform1099.child[0] = Shape1100;

Transform1098.children = new MFNode();

Transform1098.children[0] = Transform1099;

HAnimSegment1097.children = new MFNode();

HAnimSegment1097.children[0] = Transform1098;

let Shape1101 = browser.currentScene.createNode("Shape");
let LineSet1102 = browser.currentScene.createNode("LineSet");
LineSet1102.vertexCount = new MFInt32(new int[2]);
let ColorRGBA1103 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1103.USE = "HAnimSegmentLineColorRGBA";
LineSet1102.color = ColorRGBA1103;

let Coordinate1104 = browser.currentScene.createNode("Coordinate");
Coordinate1104.point = new MFVec3f(new float[-0.1926,0.8096,-0.0975,-0.1926,0.7896,-0.0975]);
LineSet1102.coord = Coordinate1104;

Shape1101.geometry = LineSet1102;

HAnimSegment1097.children[1] = Shape1101;

HAnimJoint1096.children = new MFNode();

HAnimJoint1096.children[0] = HAnimSegment1097;

let HAnimJoint1105 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1105.DEF = "hanim_r_metacarpophalangeal_5";
HAnimJoint1105.name = "r_metacarpophalangeal_5";
HAnimJoint1105.center = new SFVec3f(new float[-0.1926,0.7896,-0.0975]);
let HAnimSegment1106 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1106.DEF = "hanim_r_carpal_proximal_phalanx_5";
HAnimSegment1106.name = "r_carpal_proximal_phalanx_5";
let Transform1107 = browser.currentScene.createNode("Transform");
Transform1107.translation = new SFVec3f(new float[-0.1926,0.7896,-0.0975]);
let Transform1108 = browser.currentScene.createNode("Transform");
let Shape1109 = browser.currentScene.createNode("Shape");
Shape1109.USE = "HAnimJointShape";
Transform1108.child = new undefined();

Transform1108.child[0] = Shape1109;

Transform1107.children = new MFNode();

Transform1107.children[0] = Transform1108;

HAnimSegment1106.children = new MFNode();

HAnimSegment1106.children[0] = Transform1107;

let Shape1110 = browser.currentScene.createNode("Shape");
let LineSet1111 = browser.currentScene.createNode("LineSet");
LineSet1111.vertexCount = new MFInt32(new int[2]);
let ColorRGBA1112 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1112.USE = "HAnimSegmentLineColorRGBA";
LineSet1111.color = ColorRGBA1112;

let Coordinate1113 = browser.currentScene.createNode("Coordinate");
Coordinate1113.point = new MFVec3f(new float[-0.1926,0.7896,-0.0975,-0.1902,0.7483,-0.0963]);
LineSet1111.coord = Coordinate1113;

Shape1110.geometry = LineSet1111;

HAnimSegment1106.children[1] = Shape1110;

HAnimJoint1105.children = new MFNode();

HAnimJoint1105.children[0] = HAnimSegment1106;

let HAnimJoint1114 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1114.DEF = "hanim_r_carpal_proximal_interphalangeal_4";
HAnimJoint1114.name = "r_carpal_proximal_interphalangeal_5";
HAnimJoint1114.center = new SFVec3f(new float[-0.1902,0.7483,-0.0963]);
let HAnimSegment1115 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1115.DEF = "hanim_r_carpal_middle_phalanx_4";
HAnimSegment1115.name = "r_carpal_middle_phalanx_5";
let Transform1116 = browser.currentScene.createNode("Transform");
Transform1116.translation = new SFVec3f(new float[-0.1902,0.7483,-0.0963]);
let Transform1117 = browser.currentScene.createNode("Transform");
let Shape1118 = browser.currentScene.createNode("Shape");
Shape1118.USE = "HAnimJointShape";
Transform1117.child = new undefined();

Transform1117.child[0] = Shape1118;

Transform1116.children = new MFNode();

Transform1116.children[0] = Transform1117;

HAnimSegment1115.children = new MFNode();

HAnimSegment1115.children[0] = Transform1116;

let Shape1119 = browser.currentScene.createNode("Shape");
let LineSet1120 = browser.currentScene.createNode("LineSet");
LineSet1120.vertexCount = new MFInt32(new int[2]);
let ColorRGBA1121 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1121.USE = "HAnimSegmentLineColorRGBA";
LineSet1120.color = ColorRGBA1121;

let Coordinate1122 = browser.currentScene.createNode("Coordinate");
Coordinate1122.point = new MFVec3f(new float[-0.1902,0.7483,-0.0963,-0.1908,0.754,-0.096]);
LineSet1120.coord = Coordinate1122;

Shape1119.geometry = LineSet1120;

HAnimSegment1115.children[1] = Shape1119;

let HAnimSite1123 = browser.currentScene.createNode("HAnimSite");
HAnimSite1123.DEF = "hanim_r_carpal_distal_phalanx_5_tip";
HAnimSite1123.name = "r_carpal_distal_phalanx_5_tip";
let TouchSensor1124 = browser.currentScene.createNode("TouchSensor");
TouchSensor1124.description = "HAnimSite r_carpal_distal_phalanx_5_tip";
HAnimSite1123.children = new MFNode();

HAnimSite1123.children[0] = TouchSensor1124;

let Shape1125 = browser.currentScene.createNode("Shape");
Shape1125.USE = "HAnimSiteShape";
HAnimSite1123.children[1] = Shape1125;

HAnimSegment1115.children[2] = HAnimSite1123;

HAnimJoint1114.children = new MFNode();

HAnimJoint1114.children[0] = HAnimSegment1115;

let HAnimJoint1126 = browser.currentScene.createNode("HAnimJoint");
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

let HAnimSite1127 = browser.currentScene.createNode("HAnimSite");
HAnimSite1127.USE = "hanim_buttocks_standing_wall_contact_point_pt";
HAnimHumanoid42.viewpoints[1] = HAnimSite1127;

let HAnimSite1128 = browser.currentScene.createNode("HAnimSite");
HAnimSite1128.USE = "hanim_crotch_pt";
HAnimHumanoid42.viewpoints[2] = HAnimSite1128;

let HAnimSite1129 = browser.currentScene.createNode("HAnimSite");
HAnimSite1129.USE = "hanim_l_asis_pt";
HAnimHumanoid42.viewpoints[3] = HAnimSite1129;

let HAnimSite1130 = browser.currentScene.createNode("HAnimSite");
HAnimSite1130.USE = "hanim_l_iliocristale_pt";
HAnimHumanoid42.viewpoints[4] = HAnimSite1130;

let HAnimSite1131 = browser.currentScene.createNode("HAnimSite");
HAnimSite1131.USE = "hanim_l_psis_pt";
HAnimHumanoid42.viewpoints[5] = HAnimSite1131;

let HAnimSite1132 = browser.currentScene.createNode("HAnimSite");
HAnimSite1132.USE = "hanim_l_trochanterion_pt";
HAnimHumanoid42.viewpoints[6] = HAnimSite1132;

let HAnimSite1133 = browser.currentScene.createNode("HAnimSite");
HAnimSite1133.USE = "hanim_r_asis_pt";
HAnimHumanoid42.viewpoints[7] = HAnimSite1133;

let HAnimSite1134 = browser.currentScene.createNode("HAnimSite");
HAnimSite1134.USE = "hanim_r_iliocristale_pt";
HAnimHumanoid42.viewpoints[8] = HAnimSite1134;

let HAnimSite1135 = browser.currentScene.createNode("HAnimSite");
HAnimSite1135.USE = "hanim_r_psis_pt";
HAnimHumanoid42.viewpoints[9] = HAnimSite1135;

let HAnimSite1136 = browser.currentScene.createNode("HAnimSite");
HAnimSite1136.USE = "hanim_r_trochanterion_pt";
HAnimHumanoid42.viewpoints[10] = HAnimSite1136;

let HAnimSite1137 = browser.currentScene.createNode("HAnimSite");
HAnimSite1137.USE = "hanim_navel_pt";
HAnimHumanoid42.viewpoints[11] = HAnimSite1137;

let HAnimSite1138 = browser.currentScene.createNode("HAnimSite");
HAnimSite1138.USE = "hanim_waist_preferred_anterior_pt";
HAnimHumanoid42.viewpoints[12] = HAnimSite1138;

let HAnimSite1139 = browser.currentScene.createNode("HAnimSite");
HAnimSite1139.USE = "hanim_waist_preferred_posterior_pt";
HAnimHumanoid42.viewpoints[13] = HAnimSite1139;

let HAnimSite1140 = browser.currentScene.createNode("HAnimSite");
HAnimSite1140.USE = "hanim_l_femoral_lateral_epicondyles_pt";
HAnimHumanoid42.viewpoints[14] = HAnimSite1140;

let HAnimSite1141 = browser.currentScene.createNode("HAnimSite");
HAnimSite1141.USE = "hanim_l_femoral_medial_epicondyles_pt";
HAnimHumanoid42.viewpoints[15] = HAnimSite1141;

let HAnimSite1142 = browser.currentScene.createNode("HAnimSite");
HAnimSite1142.USE = "hanim_l_knee_crease_pt";
HAnimHumanoid42.viewpoints[16] = HAnimSite1142;

let HAnimSite1143 = browser.currentScene.createNode("HAnimSite");
HAnimSite1143.USE = "hanim_l_suprapatella_pt";
HAnimHumanoid42.viewpoints[17] = HAnimSite1143;

let HAnimSite1144 = browser.currentScene.createNode("HAnimSite");
HAnimSite1144.USE = "hanim_r_femoral_lateral_epicondyles_pt";
HAnimHumanoid42.viewpoints[18] = HAnimSite1144;

let HAnimSite1145 = browser.currentScene.createNode("HAnimSite");
HAnimSite1145.USE = "hanim_r_femoral_medial_epicondyles_pt";
HAnimHumanoid42.viewpoints[19] = HAnimSite1145;

let HAnimSite1146 = browser.currentScene.createNode("HAnimSite");
HAnimSite1146.USE = "hanim_r_knee_crease_pt";
HAnimHumanoid42.viewpoints[20] = HAnimSite1146;

let HAnimSite1147 = browser.currentScene.createNode("HAnimSite");
HAnimSite1147.USE = "hanim_r_suprapatella_pt";
HAnimHumanoid42.viewpoints[21] = HAnimSite1147;

let HAnimSite1148 = browser.currentScene.createNode("HAnimSite");
HAnimSite1148.USE = "hanim_l_lateral_malleolus_pt";
HAnimHumanoid42.viewpoints[22] = HAnimSite1148;

let HAnimSite1149 = browser.currentScene.createNode("HAnimSite");
HAnimSite1149.USE = "hanim_l_medial_malleolus_pt";
HAnimHumanoid42.viewpoints[23] = HAnimSite1149;

let HAnimSite1150 = browser.currentScene.createNode("HAnimSite");
HAnimSite1150.USE = "hanim_l_tibiale_pt";
HAnimHumanoid42.viewpoints[24] = HAnimSite1150;

let HAnimSite1151 = browser.currentScene.createNode("HAnimSite");
HAnimSite1151.USE = "hanim_l_calcaneus_posterior_pt";
HAnimHumanoid42.viewpoints[25] = HAnimSite1151;

let HAnimSite1152 = browser.currentScene.createNode("HAnimSite");
HAnimSite1152.USE = "hanim_l_sphyrion_pt";
HAnimHumanoid42.viewpoints[26] = HAnimSite1152;

let HAnimSite1153 = browser.currentScene.createNode("HAnimSite");
HAnimSite1153.USE = "hanim_l_tarsal_distal_phalanx_2_tip";
HAnimHumanoid42.viewpoints[27] = HAnimSite1153;

let HAnimSite1154 = browser.currentScene.createNode("HAnimSite");
HAnimSite1154.USE = "hanim_r_lateral_malleolus_pt";
HAnimHumanoid42.viewpoints[28] = HAnimSite1154;

let HAnimSite1155 = browser.currentScene.createNode("HAnimSite");
HAnimSite1155.USE = "hanim_r_medial_malleolus_pt";
HAnimHumanoid42.viewpoints[29] = HAnimSite1155;

let HAnimSite1156 = browser.currentScene.createNode("HAnimSite");
HAnimSite1156.USE = "hanim_r_tibiale_pt";
HAnimHumanoid42.viewpoints[30] = HAnimSite1156;

let HAnimSite1157 = browser.currentScene.createNode("HAnimSite");
HAnimSite1157.USE = "hanim_r_calcaneus_posterior_pt";
HAnimHumanoid42.viewpoints[31] = HAnimSite1157;

let HAnimSite1158 = browser.currentScene.createNode("HAnimSite");
HAnimSite1158.USE = "hanim_r_sphyrion_pt";
HAnimHumanoid42.viewpoints[32] = HAnimSite1158;

let HAnimSite1159 = browser.currentScene.createNode("HAnimSite");
HAnimSite1159.USE = "hanim_r_tarsal_distal_phalanx_2_tip";
HAnimHumanoid42.viewpoints[33] = HAnimSite1159;

let HAnimSite1160 = browser.currentScene.createNode("HAnimSite");
HAnimSite1160.USE = "hanim_l_rib10_pt";
HAnimHumanoid42.viewpoints[34] = HAnimSite1160;

let HAnimSite1161 = browser.currentScene.createNode("HAnimSite");
HAnimSite1161.USE = "hanim_r_rib10_pt";
HAnimHumanoid42.viewpoints[35] = HAnimSite1161;

let HAnimSite1162 = browser.currentScene.createNode("HAnimSite");
HAnimSite1162.USE = "hanim_spine_2_middle_back_pt";
HAnimHumanoid42.viewpoints[36] = HAnimSite1162;

let HAnimSite1163 = browser.currentScene.createNode("HAnimSite");
HAnimSite1163.USE = "hanim_substernale_pt";
HAnimHumanoid42.viewpoints[37] = HAnimSite1163;

let HAnimSite1164 = browser.currentScene.createNode("HAnimSite");
HAnimSite1164.USE = "hanim_l_thelion_pt";
HAnimHumanoid42.viewpoints[38] = HAnimSite1164;

let HAnimSite1165 = browser.currentScene.createNode("HAnimSite");
HAnimSite1165.USE = "hanim_r_thelion_pt";
HAnimHumanoid42.viewpoints[39] = HAnimSite1165;

let HAnimSite1166 = browser.currentScene.createNode("HAnimSite");
HAnimSite1166.USE = "hanim_l_chest_midsagittal_plane_pt";
HAnimHumanoid42.viewpoints[40] = HAnimSite1166;

let HAnimSite1167 = browser.currentScene.createNode("HAnimSite");
HAnimSite1167.USE = "hanim_mesosternale_pt";
HAnimHumanoid42.viewpoints[41] = HAnimSite1167;

let HAnimSite1168 = browser.currentScene.createNode("HAnimSite");
HAnimSite1168.USE = "hanim_r_chest_midsagittal_plane_pt";
HAnimHumanoid42.viewpoints[42] = HAnimSite1168;

let HAnimSite1169 = browser.currentScene.createNode("HAnimSite");
HAnimSite1169.USE = "hanim_rear_center_midsagittal_plane_pt";
HAnimHumanoid42.viewpoints[43] = HAnimSite1169;

let HAnimSite1170 = browser.currentScene.createNode("HAnimSite");
HAnimSite1170.USE = "hanim_spine_1_middle_back_pt";
HAnimHumanoid42.viewpoints[44] = HAnimSite1170;

let HAnimSite1171 = browser.currentScene.createNode("HAnimSite");
HAnimSite1171.USE = "hanim_cervicale_pt";
HAnimHumanoid42.viewpoints[45] = HAnimSite1171;

let HAnimSite1172 = browser.currentScene.createNode("HAnimSite");
HAnimSite1172.USE = "hanim_suprasternale_pt";
HAnimHumanoid42.viewpoints[46] = HAnimSite1172;

let HAnimSite1173 = browser.currentScene.createNode("HAnimSite");
HAnimSite1173.USE = "hanim_l_neck_base_pt";
HAnimHumanoid42.viewpoints[47] = HAnimSite1173;

let HAnimSite1174 = browser.currentScene.createNode("HAnimSite");
HAnimSite1174.USE = "hanim_r_neck_base_pt";
HAnimHumanoid42.viewpoints[48] = HAnimSite1174;

let HAnimSite1175 = browser.currentScene.createNode("HAnimSite");
HAnimSite1175.USE = "hanim_l_acromion_pt";
HAnimHumanoid42.viewpoints[49] = HAnimSite1175;

let HAnimSite1176 = browser.currentScene.createNode("HAnimSite");
HAnimSite1176.USE = "hanim_l_axilla_distal_pt";
HAnimHumanoid42.viewpoints[50] = HAnimSite1176;

let HAnimSite1177 = browser.currentScene.createNode("HAnimSite");
HAnimSite1177.USE = "hanim_l_axilla_posterior_folds_pt";
HAnimHumanoid42.viewpoints[51] = HAnimSite1177;

let HAnimSite1178 = browser.currentScene.createNode("HAnimSite");
HAnimSite1178.USE = "hanim_l_axilla_proximal_pt";
HAnimHumanoid42.viewpoints[52] = HAnimSite1178;

let HAnimSite1179 = browser.currentScene.createNode("HAnimSite");
HAnimSite1179.USE = "hanim_l_clavicale_pt";
HAnimHumanoid42.viewpoints[53] = HAnimSite1179;

let HAnimSite1180 = browser.currentScene.createNode("HAnimSite");
HAnimSite1180.USE = "hanim_r_acromion_pt";
HAnimHumanoid42.viewpoints[54] = HAnimSite1180;

let HAnimSite1181 = browser.currentScene.createNode("HAnimSite");
HAnimSite1181.USE = "hanim_r_axilla_distal_pt";
HAnimHumanoid42.viewpoints[55] = HAnimSite1181;

let HAnimSite1182 = browser.currentScene.createNode("HAnimSite");
HAnimSite1182.USE = "hanim_r_axilla_posterior_folds_pt";
HAnimHumanoid42.viewpoints[56] = HAnimSite1182;

let HAnimSite1183 = browser.currentScene.createNode("HAnimSite");
HAnimSite1183.USE = "hanim_r_axilla_proximal_pt";
HAnimHumanoid42.viewpoints[57] = HAnimSite1183;

let HAnimSite1184 = browser.currentScene.createNode("HAnimSite");
HAnimSite1184.USE = "hanim_r_clavicale_pt";
HAnimHumanoid42.viewpoints[58] = HAnimSite1184;

let HAnimSite1185 = browser.currentScene.createNode("HAnimSite");
HAnimSite1185.USE = "hanim_adams_apple_pt";
HAnimHumanoid42.viewpoints[59] = HAnimSite1185;

let HAnimSite1186 = browser.currentScene.createNode("HAnimSite");
HAnimSite1186.USE = "hanim_glabella_pt";
HAnimHumanoid42.viewpoints[60] = HAnimSite1186;

let HAnimSite1187 = browser.currentScene.createNode("HAnimSite");
HAnimSite1187.USE = "hanim_l_ectocanthus_pt";
HAnimHumanoid42.viewpoints[61] = HAnimSite1187;

let HAnimSite1188 = browser.currentScene.createNode("HAnimSite");
HAnimSite1188.USE = "hanim_l_infraorbitale_pt";
HAnimHumanoid42.viewpoints[62] = HAnimSite1188;

let HAnimSite1189 = browser.currentScene.createNode("HAnimSite");
HAnimSite1189.USE = "hanim_l_tragion_pt";
HAnimHumanoid42.viewpoints[63] = HAnimSite1189;

let HAnimSite1190 = browser.currentScene.createNode("HAnimSite");
HAnimSite1190.USE = "hanim_nuchale_pt";
HAnimHumanoid42.viewpoints[64] = HAnimSite1190;

let HAnimSite1191 = browser.currentScene.createNode("HAnimSite");
HAnimSite1191.USE = "hanim_opisthocranion_pt";
HAnimHumanoid42.viewpoints[65] = HAnimSite1191;

let HAnimSite1192 = browser.currentScene.createNode("HAnimSite");
HAnimSite1192.USE = "hanim_r_ectocanthus_pt";
HAnimHumanoid42.viewpoints[66] = HAnimSite1192;

let HAnimSite1193 = browser.currentScene.createNode("HAnimSite");
HAnimSite1193.USE = "hanim_r_infraorbitale_pt";
HAnimHumanoid42.viewpoints[67] = HAnimSite1193;

let HAnimSite1194 = browser.currentScene.createNode("HAnimSite");
HAnimSite1194.USE = "hanim_r_tragion_pt";
HAnimHumanoid42.viewpoints[68] = HAnimSite1194;

let HAnimSite1195 = browser.currentScene.createNode("HAnimSite");
HAnimSite1195.USE = "hanim_sellion_pt";
HAnimHumanoid42.viewpoints[69] = HAnimSite1195;

let HAnimSite1196 = browser.currentScene.createNode("HAnimSite");
HAnimSite1196.USE = "hanim_skull_vertex_pt";
HAnimHumanoid42.viewpoints[70] = HAnimSite1196;

let HAnimSite1197 = browser.currentScene.createNode("HAnimSite");
HAnimSite1197.USE = "hanim_l_gonion_pt";
HAnimHumanoid42.viewpoints[71] = HAnimSite1197;

let HAnimSite1198 = browser.currentScene.createNode("HAnimSite");
HAnimSite1198.USE = "hanim_menton_pt";
HAnimHumanoid42.viewpoints[72] = HAnimSite1198;

let HAnimSite1199 = browser.currentScene.createNode("HAnimSite");
HAnimSite1199.USE = "hanim_r_gonion_pt";
HAnimHumanoid42.viewpoints[73] = HAnimSite1199;

let HAnimSite1200 = browser.currentScene.createNode("HAnimSite");
HAnimSite1200.USE = "hanim_supramenton_pt";
HAnimHumanoid42.viewpoints[74] = HAnimSite1200;

let HAnimSite1201 = browser.currentScene.createNode("HAnimSite");
HAnimSite1201.USE = "hanim_l_bideltoid_pt";
HAnimHumanoid42.viewpoints[75] = HAnimSite1201;

let HAnimSite1202 = browser.currentScene.createNode("HAnimSite");
HAnimSite1202.USE = "hanim_l_humeral_lateral_epicondyles_pt";
HAnimHumanoid42.viewpoints[76] = HAnimSite1202;

let HAnimSite1203 = browser.currentScene.createNode("HAnimSite");
HAnimSite1203.USE = "hanim_l_humeral_medial_epicondyles_pt";
HAnimHumanoid42.viewpoints[77] = HAnimSite1203;

let HAnimSite1204 = browser.currentScene.createNode("HAnimSite");
HAnimSite1204.USE = "hanim_l_olecranon_pt";
HAnimHumanoid42.viewpoints[78] = HAnimSite1204;

let HAnimSite1205 = browser.currentScene.createNode("HAnimSite");
HAnimSite1205.USE = "hanim_l_radial_styloid_pt";
HAnimHumanoid42.viewpoints[79] = HAnimSite1205;

let HAnimSite1206 = browser.currentScene.createNode("HAnimSite");
HAnimSite1206.USE = "hanim_l_radiale_pt";
HAnimHumanoid42.viewpoints[80] = HAnimSite1206;

let HAnimSite1207 = browser.currentScene.createNode("HAnimSite");
HAnimSite1207.USE = "hanim_l_ulnar_styloid_pt";
HAnimHumanoid42.viewpoints[81] = HAnimSite1207;

let HAnimSite1208 = browser.currentScene.createNode("HAnimSite");
HAnimSite1208.USE = "hanim_l_metacarpal_phalanx_2_pt";
HAnimHumanoid42.viewpoints[82] = HAnimSite1208;

let HAnimSite1209 = browser.currentScene.createNode("HAnimSite");
HAnimSite1209.USE = "hanim_l_metacarpal_phalanx_3_pt";
HAnimHumanoid42.viewpoints[83] = HAnimSite1209;

let HAnimSite1210 = browser.currentScene.createNode("HAnimSite");
HAnimSite1210.USE = "hanim_l_metacarpal_phalanx_5_pt";
HAnimHumanoid42.viewpoints[84] = HAnimSite1210;

let HAnimSite1211 = browser.currentScene.createNode("HAnimSite");
HAnimSite1211.USE = "hanim_l_carpal_distal_phalanx_1_tip";
HAnimHumanoid42.viewpoints[85] = HAnimSite1211;

let HAnimSite1212 = browser.currentScene.createNode("HAnimSite");
HAnimSite1212.USE = "hanim_l_carpal_distal_phalanx_2_tip";
HAnimHumanoid42.viewpoints[86] = HAnimSite1212;

let HAnimSite1213 = browser.currentScene.createNode("HAnimSite");
HAnimSite1213.USE = "hanim_l_dactylion_pt";
HAnimHumanoid42.viewpoints[87] = HAnimSite1213;

let HAnimSite1214 = browser.currentScene.createNode("HAnimSite");
HAnimSite1214.USE = "hanim_l_carpal_distal_phalanx_3_tip";
HAnimHumanoid42.viewpoints[88] = HAnimSite1214;

let HAnimSite1215 = browser.currentScene.createNode("HAnimSite");
HAnimSite1215.USE = "hanim_l_carpal_distal_phalanx_4_tip";
HAnimHumanoid42.viewpoints[89] = HAnimSite1215;

let HAnimSite1216 = browser.currentScene.createNode("HAnimSite");
HAnimSite1216.USE = "hanim_l_carpal_distal_phalanx_5_tip";
HAnimHumanoid42.viewpoints[90] = HAnimSite1216;

let HAnimSite1217 = browser.currentScene.createNode("HAnimSite");
HAnimSite1217.USE = "hanim_r_bideltoid_pt";
HAnimHumanoid42.viewpoints[91] = HAnimSite1217;

let HAnimSite1218 = browser.currentScene.createNode("HAnimSite");
HAnimSite1218.USE = "hanim_r_humeral_lateral_epicondyles_pt";
HAnimHumanoid42.viewpoints[92] = HAnimSite1218;

let HAnimSite1219 = browser.currentScene.createNode("HAnimSite");
HAnimSite1219.USE = "hanim_r_humeral_medial_epicondyles_pt";
HAnimHumanoid42.viewpoints[93] = HAnimSite1219;

let HAnimSite1220 = browser.currentScene.createNode("HAnimSite");
HAnimSite1220.USE = "hanim_r_olecranon_pt";
HAnimHumanoid42.viewpoints[94] = HAnimSite1220;

let HAnimSite1221 = browser.currentScene.createNode("HAnimSite");
HAnimSite1221.USE = "hanim_r_radial_styloid_pt";
HAnimHumanoid42.viewpoints[95] = HAnimSite1221;

let HAnimSite1222 = browser.currentScene.createNode("HAnimSite");
HAnimSite1222.USE = "hanim_r_radiale_pt";
HAnimHumanoid42.viewpoints[96] = HAnimSite1222;

let HAnimSite1223 = browser.currentScene.createNode("HAnimSite");
HAnimSite1223.USE = "hanim_r_ulnar_styloid_pt";
HAnimHumanoid42.viewpoints[97] = HAnimSite1223;

let HAnimSite1224 = browser.currentScene.createNode("HAnimSite");
HAnimSite1224.USE = "hanim_r_metacarpal_phalanx_2_pt";
HAnimHumanoid42.viewpoints[98] = HAnimSite1224;

let HAnimSite1225 = browser.currentScene.createNode("HAnimSite");
HAnimSite1225.USE = "hanim_r_metacarpal_phalanx_3_pt";
HAnimHumanoid42.viewpoints[99] = HAnimSite1225;

let HAnimSite1226 = browser.currentScene.createNode("HAnimSite");
HAnimSite1226.USE = "hanim_r_metacarpal_phalanx_5_pt";
HAnimHumanoid42.viewpoints[100] = HAnimSite1226;

let HAnimSite1227 = browser.currentScene.createNode("HAnimSite");
HAnimSite1227.USE = "hanim_r_carpal_distal_phalanx_1_tip";
HAnimHumanoid42.viewpoints[101] = HAnimSite1227;

let HAnimSite1228 = browser.currentScene.createNode("HAnimSite");
HAnimSite1228.USE = "hanim_r_carpal_distal_phalanx_2_tip";
HAnimHumanoid42.viewpoints[102] = HAnimSite1228;

let HAnimSite1229 = browser.currentScene.createNode("HAnimSite");
HAnimSite1229.USE = "hanim_r_dactylion_pt";
HAnimHumanoid42.viewpoints[103] = HAnimSite1229;

let HAnimSite1230 = browser.currentScene.createNode("HAnimSite");
HAnimSite1230.USE = "hanim_r_carpal_distal_phalanx_3_tip";
HAnimHumanoid42.viewpoints[104] = HAnimSite1230;

let HAnimSite1231 = browser.currentScene.createNode("HAnimSite");
HAnimSite1231.USE = "hanim_r_carpal_distal_phalanx_4_tip";
HAnimHumanoid42.viewpoints[105] = HAnimSite1231;

let HAnimSite1232 = browser.currentScene.createNode("HAnimSite");
HAnimSite1232.USE = "hanim_r_carpal_distal_phalanx_5_tip";
HAnimHumanoid42.viewpoints[106] = HAnimSite1232;

let HAnimSegment1233 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1233.USE = "hanim_sacrum";
HAnimHumanoid42.segments[107] = HAnimSegment1233;

let HAnimSegment1234 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1234.USE = "hanim_pelvis";
HAnimHumanoid42.segments[108] = HAnimSegment1234;

let HAnimSegment1235 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1235.USE = "hanim_l_thigh";
HAnimHumanoid42.segments[109] = HAnimSegment1235;

let HAnimSegment1236 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1236.USE = "hanim_l_calf";
HAnimHumanoid42.segments[110] = HAnimSegment1236;

let HAnimSegment1237 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1237.USE = "hanim_l_talus";
HAnimHumanoid42.segments[111] = HAnimSegment1237;

let HAnimSegment1238 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1238.USE = "hanim_l_metatarsal_1";
HAnimHumanoid42.segments[112] = HAnimSegment1238;

let HAnimSegment1239 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1239.USE = "hanim_l_tarsal_proximal_phalanx_1";
HAnimHumanoid42.segments[113] = HAnimSegment1239;

let HAnimSegment1240 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1240.USE = "hanim_r_thigh";
HAnimHumanoid42.segments[114] = HAnimSegment1240;

let HAnimSegment1241 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1241.USE = "hanim_r_calf";
HAnimHumanoid42.segments[115] = HAnimSegment1241;

let HAnimSegment1242 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1242.USE = "hanim_r_talus";
HAnimHumanoid42.segments[116] = HAnimSegment1242;

let HAnimSegment1243 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1243.USE = "hanim_r_metatarsal_1";
HAnimHumanoid42.segments[117] = HAnimSegment1243;

let HAnimSegment1244 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1244.USE = "hanim_r_tarsal_proximal_phalanx_1";
HAnimHumanoid42.segments[118] = HAnimSegment1244;

let HAnimSegment1245 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1245.USE = "hanim_l5";
HAnimHumanoid42.segments[119] = HAnimSegment1245;

let HAnimSegment1246 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1246.USE = "hanim_l4";
HAnimHumanoid42.segments[120] = HAnimSegment1246;

let HAnimSegment1247 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1247.USE = "hanim_l3";
HAnimHumanoid42.segments[121] = HAnimSegment1247;

let HAnimSegment1248 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1248.USE = "hanim_l2";
HAnimHumanoid42.segments[122] = HAnimSegment1248;

let HAnimSegment1249 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1249.USE = "hanim_l1";
HAnimHumanoid42.segments[123] = HAnimSegment1249;

let HAnimSegment1250 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1250.USE = "hanim_t12";
HAnimHumanoid42.segments[124] = HAnimSegment1250;

let HAnimSegment1251 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1251.USE = "hanim_t11";
HAnimHumanoid42.segments[125] = HAnimSegment1251;

let HAnimSegment1252 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1252.USE = "hanim_t10";
HAnimHumanoid42.segments[126] = HAnimSegment1252;

let HAnimSegment1253 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1253.USE = "hanim_t9";
HAnimHumanoid42.segments[127] = HAnimSegment1253;

let HAnimSegment1254 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1254.USE = "hanim_t8";
HAnimHumanoid42.segments[128] = HAnimSegment1254;

let HAnimSegment1255 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1255.USE = "hanim_t7";
HAnimHumanoid42.segments[129] = HAnimSegment1255;

let HAnimSegment1256 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1256.USE = "hanim_t6";
HAnimHumanoid42.segments[130] = HAnimSegment1256;

let HAnimSegment1257 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1257.USE = "hanim_t5";
HAnimHumanoid42.segments[131] = HAnimSegment1257;

let HAnimSegment1258 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1258.USE = "hanim_t4";
HAnimHumanoid42.segments[132] = HAnimSegment1258;

let HAnimSegment1259 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1259.USE = "hanim_t3";
HAnimHumanoid42.segments[133] = HAnimSegment1259;

let HAnimSegment1260 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1260.USE = "hanim_t2";
HAnimHumanoid42.segments[134] = HAnimSegment1260;

let HAnimSegment1261 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1261.USE = "hanim_t1";
HAnimHumanoid42.segments[135] = HAnimSegment1261;

let HAnimSegment1262 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1262.USE = "hanim_c7";
HAnimHumanoid42.segments[136] = HAnimSegment1262;

let HAnimSegment1263 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1263.USE = "hanim_c6";
HAnimHumanoid42.segments[137] = HAnimSegment1263;

let HAnimSegment1264 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1264.USE = "hanim_c5";
HAnimHumanoid42.segments[138] = HAnimSegment1264;

let HAnimSegment1265 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1265.USE = "hanim_c4";
HAnimHumanoid42.segments[139] = HAnimSegment1265;

let HAnimSegment1266 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1266.USE = "hanim_c3";
HAnimHumanoid42.segments[140] = HAnimSegment1266;

let HAnimSegment1267 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1267.USE = "hanim_c2";
HAnimHumanoid42.segments[141] = HAnimSegment1267;

let HAnimSegment1268 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1268.USE = "hanim_c1";
HAnimHumanoid42.segments[142] = HAnimSegment1268;

let HAnimSegment1269 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1269.USE = "hanim_skull";
HAnimHumanoid42.segments[143] = HAnimSegment1269;

let HAnimSegment1270 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1270.USE = "hanim_l_clavicle";
HAnimHumanoid42.segments[144] = HAnimSegment1270;

let HAnimSegment1271 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1271.USE = "hanim_l_scapula";
HAnimHumanoid42.segments[145] = HAnimSegment1271;

let HAnimSegment1272 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1272.USE = "hanim_l_upperarm";
HAnimHumanoid42.segments[146] = HAnimSegment1272;

let HAnimSegment1273 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1273.USE = "hanim_l_forearm";
HAnimHumanoid42.segments[147] = HAnimSegment1273;

let HAnimSegment1274 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1274.USE = "hanim_l_carpal";
HAnimHumanoid42.segments[148] = HAnimSegment1274;

let HAnimSegment1275 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1275.USE = "hanim_l_metacarpal_1";
HAnimHumanoid42.segments[149] = HAnimSegment1275;

let HAnimSegment1276 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1276.USE = "hanim_l_carpal_proximal_phalanx_1";
HAnimHumanoid42.segments[150] = HAnimSegment1276;

let HAnimSegment1277 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1277.USE = "hanim_l_metacarpal_2";
HAnimHumanoid42.segments[151] = HAnimSegment1277;

let HAnimSegment1278 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1278.USE = "hanim_l_carpal_proximal_phalanx_2";
HAnimHumanoid42.segments[152] = HAnimSegment1278;

let HAnimSegment1279 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1279.USE = "hanim_l_carpal_middle_phalanx_1";
HAnimHumanoid42.segments[153] = HAnimSegment1279;

let HAnimSegment1280 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1280.USE = "hanim_l_metacarpal_3";
HAnimHumanoid42.segments[154] = HAnimSegment1280;

let HAnimSegment1281 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1281.USE = "hanim_l_carpal_proximal_phalanx_3";
HAnimHumanoid42.segments[155] = HAnimSegment1281;

let HAnimSegment1282 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1282.USE = "hanim_l_carpal_middle_phalanx_2";
HAnimHumanoid42.segments[156] = HAnimSegment1282;

let HAnimSegment1283 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1283.USE = "hanim_l_metacarpal_4";
HAnimHumanoid42.segments[157] = HAnimSegment1283;

let HAnimSegment1284 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1284.USE = "hanim_l_carpal_proximal_phalanx_4";
HAnimHumanoid42.segments[158] = HAnimSegment1284;

let HAnimSegment1285 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1285.USE = "hanim_l_carpal_middle_phalanx_3";
HAnimHumanoid42.segments[159] = HAnimSegment1285;

let HAnimSegment1286 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1286.USE = "hanim_l_metacarpal_5";
HAnimHumanoid42.segments[160] = HAnimSegment1286;

let HAnimSegment1287 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1287.USE = "hanim_l_carpal_proximal_phalanx_5";
HAnimHumanoid42.segments[161] = HAnimSegment1287;

let HAnimSegment1288 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1288.USE = "hanim_l_carpal_middle_phalanx_4";
HAnimHumanoid42.segments[162] = HAnimSegment1288;

let HAnimSegment1289 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1289.USE = "hanim_r_clavicle";
HAnimHumanoid42.segments[163] = HAnimSegment1289;

let HAnimSegment1290 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1290.USE = "hanim_r_scapula";
HAnimHumanoid42.segments[164] = HAnimSegment1290;

let HAnimSegment1291 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1291.USE = "hanim_r_upperarm";
HAnimHumanoid42.segments[165] = HAnimSegment1291;

let HAnimSegment1292 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1292.USE = "hanim_r_forearm";
HAnimHumanoid42.segments[166] = HAnimSegment1292;

let HAnimSegment1293 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1293.USE = "hanim_r_carpal";
HAnimHumanoid42.segments[167] = HAnimSegment1293;

let HAnimSegment1294 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1294.USE = "hanim_r_metacarpal_1";
HAnimHumanoid42.segments[168] = HAnimSegment1294;

let HAnimSegment1295 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1295.USE = "hanim_r_carpal_proximal_phalanx_1";
HAnimHumanoid42.segments[169] = HAnimSegment1295;

let HAnimSegment1296 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1296.USE = "hanim_r_metacarpal_2";
HAnimHumanoid42.segments[170] = HAnimSegment1296;

let HAnimSegment1297 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1297.USE = "hanim_r_carpal_proximal_phalanx_2";
HAnimHumanoid42.segments[171] = HAnimSegment1297;

let HAnimSegment1298 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1298.USE = "hanim_r_carpal_middle_phalanx_1";
HAnimHumanoid42.segments[172] = HAnimSegment1298;

let HAnimSegment1299 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1299.USE = "hanim_r_metacarpal_3";
HAnimHumanoid42.segments[173] = HAnimSegment1299;

let HAnimSegment1300 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1300.USE = "hanim_r_carpal_proximal_phalanx_3";
HAnimHumanoid42.segments[174] = HAnimSegment1300;

let HAnimSegment1301 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1301.USE = "hanim_r_carpal_middle_phalanx_2";
HAnimHumanoid42.segments[175] = HAnimSegment1301;

let HAnimSegment1302 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1302.USE = "hanim_r_metacarpal_4";
HAnimHumanoid42.segments[176] = HAnimSegment1302;

let HAnimSegment1303 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1303.USE = "hanim_r_carpal_proximal_phalanx_4";
HAnimHumanoid42.segments[177] = HAnimSegment1303;

let HAnimSegment1304 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1304.USE = "hanim_r_carpal_middle_phalanx_3";
HAnimHumanoid42.segments[178] = HAnimSegment1304;

let HAnimSegment1305 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1305.USE = "hanim_r_metacarpal_5";
HAnimHumanoid42.segments[179] = HAnimSegment1305;

let HAnimSegment1306 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1306.USE = "hanim_r_carpal_proximal_phalanx_5";
HAnimHumanoid42.segments[180] = HAnimSegment1306;

let HAnimSegment1307 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1307.USE = "hanim_r_carpal_middle_phalanx_4";
HAnimHumanoid42.segments[181] = HAnimSegment1307;

let HAnimJoint1308 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1308.USE = "hanim_humanoid_root";
HAnimHumanoid42.joints[182] = HAnimJoint1308;

let HAnimJoint1309 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1309.USE = "hanim_sacroiliac";
HAnimHumanoid42.joints[183] = HAnimJoint1309;

let HAnimJoint1310 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1310.USE = "hanim_l_hip";
HAnimHumanoid42.joints[184] = HAnimJoint1310;

let HAnimJoint1311 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1311.USE = "hanim_l_knee";
HAnimHumanoid42.joints[185] = HAnimJoint1311;

let HAnimJoint1312 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1312.USE = "hanim_l_talocrural";
HAnimHumanoid42.joints[186] = HAnimJoint1312;

let HAnimJoint1313 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1313.USE = "hanim_l_tarsometatarsal_1";
HAnimHumanoid42.joints[187] = HAnimJoint1313;

let HAnimJoint1314 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1314.USE = "hanim_l_metatarsophalangeal_1";
HAnimHumanoid42.joints[188] = HAnimJoint1314;

let HAnimJoint1315 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1315.USE = "hanim_l_tarsal_distal_interphalangeal_1";
HAnimHumanoid42.joints[189] = HAnimJoint1315;

let HAnimJoint1316 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1316.USE = "hanim_r_hip";
HAnimHumanoid42.joints[190] = HAnimJoint1316;

let HAnimJoint1317 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1317.USE = "hanim_r_knee";
HAnimHumanoid42.joints[191] = HAnimJoint1317;

let HAnimJoint1318 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1318.USE = "hanim_r_talocrural";
HAnimHumanoid42.joints[192] = HAnimJoint1318;

let HAnimJoint1319 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1319.USE = "hanim_r_tarsometatarsal_1";
HAnimHumanoid42.joints[193] = HAnimJoint1319;

let HAnimJoint1320 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1320.USE = "hanim_r_metatarsophalangeal_1";
HAnimHumanoid42.joints[194] = HAnimJoint1320;

let HAnimJoint1321 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1321.USE = "hanim_r_tarsal_distal_interphalangeal_1";
HAnimHumanoid42.joints[195] = HAnimJoint1321;

let HAnimJoint1322 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1322.USE = "hanim_vl5";
HAnimHumanoid42.joints[196] = HAnimJoint1322;

let HAnimJoint1323 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1323.USE = "hanim_vl4";
HAnimHumanoid42.joints[197] = HAnimJoint1323;

let HAnimJoint1324 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1324.USE = "hanim_vl3";
HAnimHumanoid42.joints[198] = HAnimJoint1324;

let HAnimJoint1325 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1325.USE = "hanim_vl2";
HAnimHumanoid42.joints[199] = HAnimJoint1325;

let HAnimJoint1326 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1326.USE = "hanim_vl1";
HAnimHumanoid42.joints[200] = HAnimJoint1326;

let HAnimJoint1327 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1327.USE = "hanim_vt12";
HAnimHumanoid42.joints[201] = HAnimJoint1327;

let HAnimJoint1328 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1328.USE = "hanim_vt11";
HAnimHumanoid42.joints[202] = HAnimJoint1328;

let HAnimJoint1329 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1329.USE = "hanim_vt10";
HAnimHumanoid42.joints[203] = HAnimJoint1329;

let HAnimJoint1330 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1330.USE = "hanim_vt9";
HAnimHumanoid42.joints[204] = HAnimJoint1330;

let HAnimJoint1331 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1331.USE = "hanim_vt8";
HAnimHumanoid42.joints[205] = HAnimJoint1331;

let HAnimJoint1332 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1332.USE = "hanim_vt7";
HAnimHumanoid42.joints[206] = HAnimJoint1332;

let HAnimJoint1333 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1333.USE = "hanim_vt6";
HAnimHumanoid42.joints[207] = HAnimJoint1333;

let HAnimJoint1334 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1334.USE = "hanim_vt5";
HAnimHumanoid42.joints[208] = HAnimJoint1334;

let HAnimJoint1335 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1335.USE = "hanim_vt4";
HAnimHumanoid42.joints[209] = HAnimJoint1335;

let HAnimJoint1336 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1336.USE = "hanim_vt3";
HAnimHumanoid42.joints[210] = HAnimJoint1336;

let HAnimJoint1337 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1337.USE = "hanim_vt2";
HAnimHumanoid42.joints[211] = HAnimJoint1337;

let HAnimJoint1338 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1338.USE = "hanim_vt1";
HAnimHumanoid42.joints[212] = HAnimJoint1338;

let HAnimJoint1339 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1339.USE = "hanim_vc7";
HAnimHumanoid42.joints[213] = HAnimJoint1339;

let HAnimJoint1340 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1340.USE = "hanim_vc6";
HAnimHumanoid42.joints[214] = HAnimJoint1340;

let HAnimJoint1341 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1341.USE = "hanim_vc5";
HAnimHumanoid42.joints[215] = HAnimJoint1341;

let HAnimJoint1342 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1342.USE = "hanim_vc4";
HAnimHumanoid42.joints[216] = HAnimJoint1342;

let HAnimJoint1343 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1343.USE = "hanim_vc3";
HAnimHumanoid42.joints[217] = HAnimJoint1343;

let HAnimJoint1344 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1344.USE = "hanim_vc2";
HAnimHumanoid42.joints[218] = HAnimJoint1344;

let HAnimJoint1345 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1345.USE = "hanim_vc1";
HAnimHumanoid42.joints[219] = HAnimJoint1345;

let HAnimJoint1346 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1346.USE = "hanim_skullbase";
HAnimHumanoid42.joints[220] = HAnimJoint1346;

let HAnimJoint1347 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1347.USE = "hanim_l_eyelid_joint";
HAnimHumanoid42.joints[221] = HAnimJoint1347;

let HAnimJoint1348 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1348.USE = "hanim_r_eyelid_joint";
HAnimHumanoid42.joints[222] = HAnimJoint1348;

let HAnimJoint1349 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1349.USE = "hanim_l_eyeball_joint";
HAnimHumanoid42.joints[223] = HAnimJoint1349;

let HAnimJoint1350 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1350.USE = "hanim_r_eyeball_joint";
HAnimHumanoid42.joints[224] = HAnimJoint1350;

let HAnimJoint1351 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1351.USE = "hanim_l_eyebrow_joint";
HAnimHumanoid42.joints[225] = HAnimJoint1351;

let HAnimJoint1352 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1352.USE = "hanim_r_eyebrow_joint";
HAnimHumanoid42.joints[226] = HAnimJoint1352;

let HAnimJoint1353 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1353.USE = "hanim_temporomandibular";
HAnimHumanoid42.joints[227] = HAnimJoint1353;

let HAnimJoint1354 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1354.USE = "hanim_l_sternoclavicular";
HAnimHumanoid42.joints[228] = HAnimJoint1354;

let HAnimJoint1355 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1355.USE = "hanim_l_acromioclavicular";
HAnimHumanoid42.joints[229] = HAnimJoint1355;

let HAnimJoint1356 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1356.USE = "hanim_l_shoulder";
HAnimHumanoid42.joints[230] = HAnimJoint1356;

let HAnimJoint1357 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1357.USE = "hanim_l_elbow";
HAnimHumanoid42.joints[231] = HAnimJoint1357;

let HAnimJoint1358 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1358.USE = "hanim_l_radiocarpal";
HAnimHumanoid42.joints[232] = HAnimJoint1358;

let HAnimJoint1359 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1359.USE = "hanim_l_carpometacarpal_1";
HAnimHumanoid42.joints[233] = HAnimJoint1359;

let HAnimJoint1360 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1360.USE = "hanim_l_metacarpophalangeal_1";
HAnimHumanoid42.joints[234] = HAnimJoint1360;

let HAnimJoint1361 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1361.USE = "hanim_l_carpal_interphalangeal_1";
HAnimHumanoid42.joints[235] = HAnimJoint1361;

let HAnimJoint1362 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1362.USE = "hanim_l_carpometacarpal_2";
HAnimHumanoid42.joints[236] = HAnimJoint1362;

let HAnimJoint1363 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1363.USE = "hanim_l_metacarpophalangeal_2";
HAnimHumanoid42.joints[237] = HAnimJoint1363;

let HAnimJoint1364 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1364.USE = "hanim_l_carpal_proximal_interphalangeal_1";
HAnimHumanoid42.joints[238] = HAnimJoint1364;

let HAnimJoint1365 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1365.USE = "hanim_l_carpal_distal_interphalangeal_1";
HAnimHumanoid42.joints[239] = HAnimJoint1365;

let HAnimJoint1366 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1366.USE = "hanim_l_carpometacarpal_3";
HAnimHumanoid42.joints[240] = HAnimJoint1366;

let HAnimJoint1367 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1367.USE = "hanim_l_metacarpophalangeal_3";
HAnimHumanoid42.joints[241] = HAnimJoint1367;

let HAnimJoint1368 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1368.USE = "hanim_l_carpal_proximal_interphalangeal_2";
HAnimHumanoid42.joints[242] = HAnimJoint1368;

let HAnimJoint1369 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1369.USE = "hanim_l_carpal_distal_interphalangeal_2";
HAnimHumanoid42.joints[243] = HAnimJoint1369;

let HAnimJoint1370 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1370.USE = "hanim_l_carpometacarpal_4";
HAnimHumanoid42.joints[244] = HAnimJoint1370;

let HAnimJoint1371 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1371.USE = "hanim_l_metacarpophalangeal_4";
HAnimHumanoid42.joints[245] = HAnimJoint1371;

let HAnimJoint1372 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1372.USE = "hanim_l_carpal_proximal_interphalangeal_3";
HAnimHumanoid42.joints[246] = HAnimJoint1372;

let HAnimJoint1373 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1373.USE = "hanim_l_carpal_distal_interphalangeal_3";
HAnimHumanoid42.joints[247] = HAnimJoint1373;

let HAnimJoint1374 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1374.USE = "hanim_l_carpometacarpal_5";
HAnimHumanoid42.joints[248] = HAnimJoint1374;

let HAnimJoint1375 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1375.USE = "hanim_l_metacarpophalangeal_5";
HAnimHumanoid42.joints[249] = HAnimJoint1375;

let HAnimJoint1376 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1376.USE = "hanim_l_carpal_proximal_interphalangeal_4";
HAnimHumanoid42.joints[250] = HAnimJoint1376;

let HAnimJoint1377 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1377.USE = "hanim_l_carpal_distal_interphalangeal_4";
HAnimHumanoid42.joints[251] = HAnimJoint1377;

let HAnimJoint1378 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1378.USE = "hanim_r_sternoclavicular";
HAnimHumanoid42.joints[252] = HAnimJoint1378;

let HAnimJoint1379 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1379.USE = "hanim_r_acromioclavicular";
HAnimHumanoid42.joints[253] = HAnimJoint1379;

let HAnimJoint1380 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1380.USE = "hanim_r_shoulder";
HAnimHumanoid42.joints[254] = HAnimJoint1380;

let HAnimJoint1381 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1381.USE = "hanim_r_elbow";
HAnimHumanoid42.joints[255] = HAnimJoint1381;

let HAnimJoint1382 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1382.USE = "hanim_r_radiocarpal";
HAnimHumanoid42.joints[256] = HAnimJoint1382;

let HAnimJoint1383 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1383.USE = "hanim_r_carpometacarpal_1";
HAnimHumanoid42.joints[257] = HAnimJoint1383;

let HAnimJoint1384 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1384.USE = "hanim_r_metacarpophalangeal_1";
HAnimHumanoid42.joints[258] = HAnimJoint1384;

let HAnimJoint1385 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1385.USE = "hanim_r_carpal_interphalangeal_1";
HAnimHumanoid42.joints[259] = HAnimJoint1385;

let HAnimJoint1386 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1386.USE = "hanim_r_carpometacarpal_2";
HAnimHumanoid42.joints[260] = HAnimJoint1386;

let HAnimJoint1387 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1387.USE = "hanim_r_metacarpophalangeal_2";
HAnimHumanoid42.joints[261] = HAnimJoint1387;

let HAnimJoint1388 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1388.USE = "hanim_r_carpal_proximal_interphalangeal_1";
HAnimHumanoid42.joints[262] = HAnimJoint1388;

let HAnimJoint1389 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1389.USE = "hanim_r_carpal_distal_interphalangeal_1";
HAnimHumanoid42.joints[263] = HAnimJoint1389;

let HAnimJoint1390 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1390.USE = "hanim_r_carpometacarpal_3";
HAnimHumanoid42.joints[264] = HAnimJoint1390;

let HAnimJoint1391 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1391.USE = "hanim_r_metacarpophalangeal_3";
HAnimHumanoid42.joints[265] = HAnimJoint1391;

let HAnimJoint1392 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1392.USE = "hanim_r_carpal_proximal_interphalangeal_2";
HAnimHumanoid42.joints[266] = HAnimJoint1392;

let HAnimJoint1393 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1393.USE = "hanim_r_carpal_distal_interphalangeal_2";
HAnimHumanoid42.joints[267] = HAnimJoint1393;

let HAnimJoint1394 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1394.USE = "hanim_r_carpometacarpal_4";
HAnimHumanoid42.joints[268] = HAnimJoint1394;

let HAnimJoint1395 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1395.USE = "hanim_r_metacarpophalangeal_4";
HAnimHumanoid42.joints[269] = HAnimJoint1395;

let HAnimJoint1396 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1396.USE = "hanim_r_carpal_proximal_interphalangeal_3";
HAnimHumanoid42.joints[270] = HAnimJoint1396;

let HAnimJoint1397 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1397.USE = "hanim_r_carpal_distal_interphalangeal_3";
HAnimHumanoid42.joints[271] = HAnimJoint1397;

let HAnimJoint1398 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1398.USE = "hanim_r_carpometacarpal_5";
HAnimHumanoid42.joints[272] = HAnimJoint1398;

let HAnimJoint1399 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1399.USE = "hanim_r_metacarpophalangeal_5";
HAnimHumanoid42.joints[273] = HAnimJoint1399;

let HAnimJoint1400 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1400.USE = "hanim_r_carpal_proximal_interphalangeal_4";
HAnimHumanoid42.joints[274] = HAnimJoint1400;

let HAnimJoint1401 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1401.USE = "hanim_r_carpal_distal_interphalangeal_4";
HAnimHumanoid42.joints[275] = HAnimJoint1401;

let Coordinate1402 = browser.currentScene.createNode("Coordinate");
Coordinate1402.DEF = "TheSkinCoord";
Coordinate1402.point = new MFVec3f(new float[0,1.77,0,0,1.665,0.09,-0.033,1.62,0.087,0.033,1.62,0.087,0,1.55,0.097,-0.077,1.64,-0.01,-0.0527,1.58,0.015,0.077,1.64,-0.01,0.0527,1.58,0.015,0,1.625,-0.0925,-0.03,1.46,0.035,0,1.44,0.03,0.03,1.46,0.035,-0.1135,1.318,0.095,0.1135,1.318,0.095,0,1.25,0.113,-0.087,1.19,0.09,-0.0935,1.03,0.075,0.087,1.19,0.09,0.0935,1.03,0.075,-0.1425,1.065,0.0033,-0.15,0.9,-0.01,0.1425,1.065,0.0033,0.15,0.9,-0.01,0,1.53,-0.084,0.0049,1.1908,-0.1113,-0.0773,1.019,-0.12,0.0773,1.019,-0.12,0.005,1.0915,-0.1091,-0.178,1.4825,-0.0625,-0.17,1.38,0.007,-0.1884,0.8676,-0.036,-0.16,1.38,-0.127,-0.2,1.1388,-0.08,-0.244,1.1388,-0.04,-0.165,1.1388,-0.04,-0.23,1.133,-0.055,-0.1977,0.8169,-0.0177,-0.1941,0.6772,-0.0423,-0.2117,0.8562,-0.0584,-0.1929,0.789,-0.1064,0.175,1.4825,-0.06,0.17,1.38,0.007,0.1901,0.8645,-0.0415,0.16,1.38,-0.125,0.2,1.1388,-0.08,0.165,1.1388,-0.04,0.244,1.1388,-0.04,0.23,1.133,-0.055,0.2009,0.8139,-0.0237,0.2056,0.6743,-0.0482,0.2142,0.8529,-0.0648,0.1929,0.786,-0.1122,-0.1,0.4913,-0.03,-0.17,0.466,0,-0.05,0.466,0,-0.165,0.01,0.12,-0.15,0.07,0,-0.085,0.086,0.0125,-0.09,0.056,0.0125,-0.115,0.02,0.122,-0.115,0.04,-0.055,-0.11,0.011,0.19,0.0993,0.4881,-0.0309,0.17,0.466,0,0.05,0.4867,0,0.165,0.01,0.12,0.15,0.07,0,0.085,0.086,0.0125,0.09,0.056,0.0125,0.115,0.02,0.122,0.115,0.04,-0.055,0.11,0.011,0.19,0,0.875,0,-0.0646,1.5149,-0.038,0.0646,1.5149,-0.038,0,1.07225,0.09,-0.11,1.427,-0.1375,-0.235,1.42,-0.0625,0.11,1.427,-0.1375,0.235,1.42,-0.0625,0,1.41,-0.145,0,0.925,0.08,-0.087,1.19,-0.09,0.087,1.19,-0.09,0.172,1.32,-0.03,-0.172,1.32,-0.03,0.15,1.23,-0.015,-0.15,1.23,-0.015,0.079,0.92,-0.14,0.1,0.9,0.077,-0.079,0.92,-0.14,-0.1,0.9,0.075,0,0.87,0,0.171,0.65,0,0.02,0.65,0,0.1,0.65,-0.08,0.1,0.65,0.07,-0.171,0.65,0,-0.02,0.65,0,-0.1,0.65,-0.08,-0.1,0.65,0.07,0.25,1.27,-0.04,0.17,1.27,-0.04,0.2,1.27,-0.09,0.2,1.27,0.02,0.244,1.1388,-0.04,0.165,1.1388,-0.04,0.2,1.1388,-0.08,0.2,1.1388,-0.013,0.225,1,-0.01,0.225,1,-0.07,0.185,1,-0.01,0.185,1,-0.07,0.2,1.1388,-0.04,0.225,0.92,-0.04,0.175,0.92,-0.04,0.2,0.92,-0.065,0.2,0.92,-0.015,0.225,0.89,-0.04,0.175,0.89,-0.04,0.2,0.89,-0.065,0.2,0.89,-0.015,0.218,0.86,-0.04,0.184,0.86,-0.04,0.2,0.87,-0.07,0.2,0.87,0,0.21,0.85,0,0.1854,0.85,0,0.212,0.84,-0.015,0.183,0.84,-0.015,0.213,0.835,-0.04,0.19,0.835,-0.04,0.211,0.835,-0.065,0.192,0.835,-0.065,0.208,0.84,-0.085,0.19,0.84,-0.085,0.2,0.84,-0.095,0.215,0.82,0,0.193,0.815,0.005,0.198,0.8,0.012,0.21,0.82,0.03,0.19,0.82,0.03,0.2,0.835,0.039,0.212,0.8,0.05,0.188,0.8,0.05,0.2,0.807,0.057,0.2,0.793,0.035,0.2,0.774,0.076,0.212,0.78,0.07,0.188,0.78,0.07,0.2,0.785,0.075,0.2,0.77,0.062,0.215,0.793,-0.015,0.187,0.793,-0.015,0.2,0.793,-0.005,0.215,0.788,-0.04,0.187,0.788,-0.04,0.215,0.793,-0.065,0.187,0.793,-0.065,0.21,0.79,-0.085,0.19,0.79,-0.085,0.2,0.79,-0.095,0.19,0.77,-0.0275,0.19,0.77,-0.0525,0.19,0.78,-0.0775,0.212,0.745,-0.015,0.188,0.745,-0.02,0.2,0.745,-0.0255,0.2,0.745,-0.0045,0.211,0.72,-0.015,0.189,0.72,-0.015,0.2,0.72,-0.0252,0.2,0.72,-0.0048,0.21,0.695,-0.015,0.19,0.695,-0.015,0.2,0.695,-0.025,0.2,0.695,-0.005,0.2,0.685,-0.015,0.215,0.74,-0.04,0.185,0.74,-0.04,0.2,0.74,-0.055,0.2,0.74,-0.025,0.21,0.7142,-0.04,0.19,0.7142,-0.04,0.2,0.7142,-0.053,0.2,0.7142,-0.027,0.21,0.68,-0.04,0.19,0.68,-0.04,0.2,0.68,-0.05,0.2,0.68,-0.03,0.2,0.67,-0.04,0.212,0.74,-0.065,0.188,0.74,-0.065,0.2,0.74,-0.0756,0.2,0.74,-0.0542,0.21,0.7177,-0.065,0.19,0.7177,-0.065,0.2,0.7177,-0.0751,0.2,0.7177,-0.0549,0.21,0.695,-0.065,0.19,0.695,-0.065,0.2,0.695,-0.075,0.2,0.695,-0.055,0.2,0.685,-0.065,0.211,0.755,-0.085,0.189,0.755,-0.085,0.2,0.755,-0.0952,0.2,0.755,-0.0748,0.21,0.735,-0.085,0.19,0.735,-0.085,0.2,0.735,-0.0951,0.2,0.735,-0.0749,0.21,0.72,-0.085,0.19,0.72,-0.085,0.2,0.72,-0.095,0.2,0.72,-0.075,0.2,0.71,-0.085,-0.23,1.23,-0.04,-0.16,1.23,-0.04,-0.2,1.235,-0.105,-0.2,1.235,0.02,-0.244,1.1388,-0.04,-0.165,1.1388,-0.04,-0.2,1.1388,-0.08,-0.2,1.1388,0.013,-0.225,1,-0.01,-0.225,1,-0.07,-0.185,1,-0.01,-0.185,1,-0.07,-0.2,1.1388,-0.04,-0.225,0.92,-0.04,-0.175,0.92,-0.04,-0.2,0.92,-0.065,-0.2,0.92,-0.015,-0.225,0.89,-0.04,-0.175,0.89,-0.04,-0.2,0.89,-0.065,-0.2,0.89,-0.015,-0.218,0.86,-0.04,-0.184,0.86,-0.04,-0.2,0.87,-0.07,-0.2,0.87,0,-0.21,0.85,0,-0.1854,0.85,0,-0.212,0.84,-0.015,-0.183,0.84,-0.015,-0.213,0.835,-0.04,-0.19,0.835,-0.04,-0.211,0.835,-0.065,-0.192,0.835,-0.065,-0.208,0.84,-0.085,-0.19,0.84,-0.085,-0.2,0.84,-0.095,-0.215,0.82,0,-0.193,0.815,0.005,-0.198,0.8,0.012,-0.21,0.82,0.03,-0.19,0.82,0.03,-0.2,0.835,0.039,-0.212,0.8,0.05,-0.188,0.8,0.05,-0.2,0.807,0.057,-0.2,0.793,0.035,-0.2,0.774,0.076,-0.212,0.78,0.07,-0.188,0.78,0.07,-0.2,0.785,0.075,-0.2,0.77,0.062,-0.215,0.793,-0.015,-0.187,0.793,-0.015,-0.2,0.793,-0.005,-0.215,0.788,-0.04,-0.187,0.788,-0.04,-0.215,0.793,-0.065,-0.187,0.793,-0.065,-0.21,0.79,-0.085,-0.19,0.79,-0.085,-0.2,0.79,-0.095,-0.19,0.77,-0.0275,-0.19,0.77,-0.0525,-0.19,0.78,-0.0775,-0.212,0.745,-0.015,-0.188,0.745,-0.02,-0.2,0.745,-0.0255,-0.2,0.745,-0.0045,-0.211,0.72,-0.015,-0.189,0.72,-0.015,-0.2,0.72,-0.0252,-0.2,0.72,-0.0048,-0.21,0.695,-0.015,-0.19,0.695,-0.015,-0.2,0.695,-0.025,-0.2,0.695,-0.005,-0.2,0.685,-0.015,-0.215,0.74,-0.04,-0.185,0.74,-0.04,-0.2,0.74,-0.055,-0.2,0.74,-0.025,-0.21,0.7142,-0.04,-0.19,0.7142,-0.04,-0.2,0.7142,-0.053,-0.2,0.7142,-0.027,-0.21,0.68,-0.04,-0.19,0.68,-0.04,-0.2,0.68,-0.05,-0.2,0.68,-0.03,-0.2,0.67,-0.04,-0.212,0.74,-0.065,-0.188,0.74,-0.065,-0.2,0.74,-0.0756,-0.2,0.74,-0.0542,-0.21,0.7177,-0.065,-0.19,0.7177,-0.065,-0.2,0.7177,-0.0751,-0.2,0.7177,-0.0549,-0.21,0.695,-0.065,-0.19,0.695,-0.065,-0.2,0.695,-0.075,-0.2,0.695,-0.055,-0.2,0.685,-0.065,-0.211,0.755,-0.085,-0.189,0.755,-0.085,-0.2,0.755,-0.0952,-0.2,0.755,-0.0748,-0.21,0.735,-0.085,-0.19,0.735,-0.085,-0.2,0.735,-0.0951,-0.2,0.735,-0.0749,-0.21,0.72,-0.085,-0.19,0.72,-0.085,-0.2,0.72,-0.095,-0.2,0.72,-0.075,-0.2,0.71,-0.085,0.115,0.466,0.06,0.115,0.466,-0.055,0.15,0.466,0,0.05,0.466,0,0.17,0.3,0,0.06,0.3,0,0.1,0.3,-0.05,0.1,0.3,0.05,0.15,0.07,0,0.085,0.086,0.0125,0.115,0.069,-0.045,0.117,0.0975,0.0615,0.1375,0.006,-0.03,0.095,0.006,-0.03,0.115,0.015,-0.045,0.115,0.06,0.1,0.115,0,0.07,0.165,0,0.07,0.095,0,0.07,0.115,0.04,0.13,0.125,0,0.12,0.165,0,0.12,0.087,0,0.122,0.09,0.012,0.188,0.11,0.011,0.19,0.128,0.011,0.185,0.142,0.011,0.178,0.154,0.01,0.168,-0.115,0.466,0.06,-0.115,0.466,-0.055,-0.17,0.466,0,-0.05,0.466,0,-0.17,0.3,0,-0.06,0.3,0,-0.1,0.3,-0.05,-0.1,0.3,0.05,-0.15,0.07,0,-0.085,0.086,0.0125,-0.115,0.069,-0.045,-0.117,0.0975,0.0615,-0.1375,0.006,-0.03,-0.095,0.006,-0.03,-0.095,0.006,-0.03,-0.115,0.06,0.1,-0.115,0,0.07,-0.165,0,0.07,-0.095,0,0.07,-0.115,0.04,0.13,-0.125,0,0.12,-0.165,0,0.12,-0.087,0,0.122,-0.09,0.012,0.188,-0.11,0.011,0.19,-0.128,0.011,0.185,-0.142,0.011,0.178,-0.154,0.01,0.168]);
HAnimHumanoid42.skinCoord = Coordinate1402;

let Shape1403 = browser.currentScene.createNode("Shape");
Shape1403.DEF = "SkinShape";
let Appearance1404 = browser.currentScene.createNode("Appearance");
Appearance1404.DEF = "SkinAppearance";
let Material1405 = browser.currentScene.createNode("Material");
Material1405.DEF = "SkinMaterial";
Material1405.ambientIntensity = 0.6;
Material1405.diffuseColor = new SFColor(new float[1,1,1]);
Material1405.shininess = 0.6;
Material1405.transparency = 0.2;
Appearance1404.material = Material1405;

let ImageTexture1406 = browser.currentScene.createNode("ImageTexture");
ImageTexture1406.DEF = "zBlueSpiralBkg2";
ImageTexture1406.description = "Blue Spiral Pattern";
ImageTexture1406.url = new MFString(new java.lang.String["./data/zBlueSpiralBkg2.gif","zBlueSpiralBkg2.gif","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/zBlueSpiralBkg2.gif"]);
Appearance1404.texture = ImageTexture1406;

Shape1403.appearance = Appearance1404;

let IndexedFaceSet1407 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1407.creaseAngle = 3.1;
IndexedFaceSet1407.coordIndex = new MFInt32(new int[0,9,5,-1,0,7,9,-1,0,5,1,-1,1,5,2,-1,1,3,7,-1,2,4,3,-1,0,1,7,-1,1,2,3,-1,5,6,2,-1,7,3,8,-1,6,4,2,-1,3,4,8,-1,9,6,5,-1,9,7,8,-1,4,6,10,-1,4,10,12,-1,4,12,8,-1,10,11,12,-1,9,75,24,-1,9,24,74,-1,9,8,75,-1,9,74,6,-1,10,6,74,-1,12,75,8,-1,74,24,29,-1,24,77,29,-1,10,74,29,-1,77,32,29,-1,32,78,29,-1,78,30,29,-1,30,10,29,-1,41,24,75,-1,41,75,12,-1,41,12,42,-1,41,42,80,-1,41,80,44,-1,41,44,79,-1,41,79,24,-1,81,24,79,-1,81,77,24,-1,81,25,77,-1,81,79,25,-1,25,79,44,-1,25,32,77,-1,25,83,32,-1,25,26,83,-1,25,27,26,-1,25,84,27,-1,25,44,84,-1,11,10,30,-1,11,30,13,-1,11,13,15,-1,11,15,14,-1,11,14,42,-1,11,42,12,-1,15,13,16,-1,15,18,14,-1,15,16,76,-1,15,76,18,-1,76,16,17,-1,76,17,82,-1,76,82,19,-1,76,19,18,-1,22,18,19,-1,22,87,18,-1,22,27,84,-1,22,84,87,-1,87,84,85,-1,85,84,44,-1,85,42,14,-1,87,14,18,-1,87,85,14,-1,20,83,26,-1,20,17,16,-1,20,16,88,-1,20,88,83,-1,88,16,13,-1,88,13,86,-1,88,86,83,-1,86,13,30,-1,86,32,83,-1,23,89,22,-1,89,27,22,-1,89,91,27,-1,91,26,27,-1,91,20,26,-1,21,20,91,-1,21,17,20,-1,21,92,17,-1,82,17,92,-1,82,90,19,-1,23,22,19,-1,23,19,90,-1,82,92,101,-1,82,101,99,-1,82,99,93,-1,82,93,95,-1,82,95,97,-1,82,97,90,-1,23,90,97,-1,23,97,94,-1,23,94,89,-1,89,94,96,-1,89,96,95,-1,89,95,93,-1,89,93,91,-1,91,93,99,-1,91,99,100,-1,91,100,98,-1,21,91,98,-1,21,98,101,-1,21,101,92,-1,85,105,42,-1,85,103,105,-1,85,44,103,-1,103,44,104,-1,80,42,105,-1,80,105,102,-1,80,102,104,-1,80,104,44,-1,105,109,102,-1,102,109,47,-1,47,104,102,-1,104,47,45,-1,104,45,103,-1,103,45,46,-1,103,46,109,-1,103,109,105,-1,109,112,110,-1,109,110,47,-1,47,110,111,-1,47,111,45,-1,45,111,113,-1,113,46,45,-1,46,113,112,-1,112,109,46,-1,112,118,110,-1,110,118,115,-1,110,115,111,-1,111,115,117,-1,111,117,113,-1,113,117,116,-1,113,116,112,-1,112,116,118,-1,115,118,119,-1,119,118,122,-1,118,116,122,-1,122,116,120,-1,116,117,120,-1,120,117,121,-1,117,115,121,-1,115,119,121,-1,119,127,123,-1,119,122,127,-1,122,126,127,-1,122,128,126,-1,122,120,128,-1,120,124,128,-1,120,121,124,-1,121,125,124,-1,121,119,125,-1,119,123,125,-1,127,129,123,-1,127,126,129,-1,129,126,141,-1,141,126,143,-1,126,142,143,-1,126,128,142,-1,128,124,130,-1,142,128,130,-1,124,132,130,-1,124,134,132,-1,125,134,124,-1,125,136,134,-1,125,137,136,-1,125,135,137,-1,125,133,135,-1,125,123,133,-1,123,131,133,-1,123,129,131,-1,131,129,138,-1,129,141,138,-1,138,141,144,-1,141,143,144,-1,143,146,144,-1,142,146,143,-1,142,145,146,-1,139,145,142,-1,130,139,142,-1,139,130,132,-1,139,132,154,-1,132,157,154,-1,132,159,157,-1,132,134,159,-1,134,136,159,-1,136,161,159,-1,136,137,161,-1,137,162,161,-1,160,162,137,-1,135,160,137,-1,133,160,135,-1,133,158,160,-1,131,158,133,-1,156,158,131,-1,153,156,131,-1,131,138,153,-1,138,155,153,-1,140,155,138,-1,138,144,140,-1,144,147,140,-1,140,147,145,-1,140,145,139,-1,139,155,140,-1,154,155,139,-1,146,149,144,-1,146,151,149,-1,145,151,146,-1,150,151,145,-1,145,152,150,-1,147,152,145,-1,147,149,152,-1,147,144,149,-1,148,149,151,-1,148,152,149,-1,148,150,152,-1,148,151,150,-1,160,207,162,-1,160,205,207,-1,165,208,205,-1,160,165,205,-1,158,165,160,-1,161,162,207,-1,161,207,206,-1,165,206,208,-1,206,165,161,-1,161,165,159,-1,207,209,211,-1,205,209,207,-1,205,212,209,-1,205,208,212,-1,206,212,208,-1,206,210,212,-1,206,207,210,-1,207,211,210,-1,209,212,213,-1,212,216,213,-1,212,214,216,-1,210,214,212,-1,210,215,214,-1,210,211,215,-1,209,215,211,-1,209,213,215,-1,217,213,216,-1,217,215,213,-1,217,214,215,-1,217,216,214,-1,158,194,165,-1,192,194,158,-1,164,195,192,-1,158,164,192,-1,156,164,158,-1,159,194,165,-1,159,194,193,-1,159,193,195,-1,159,195,164,-1,159,164,157,-1,157,164,180,-1,192,198,194,-1,192,196,198,-1,192,195,196,-1,195,199,196,-1,196,199,200,-1,199,203,200,-1,193,199,195,-1,193,197,199,-1,193,198,197,-1,193,194,198,-1,199,201,203,-1,197,201,199,-1,197,198,201,-1,198,202,201,-1,196,202,198,-1,200,202,196,-1,204,202,200,-1,204,201,202,-1,204,203,201,-1,204,200,203,-1,156,181,164,-1,156,179,181,-1,156,182,179,-1,156,163,182,-1,163,180,182,-1,157,180,163,-1,164,181,180,-1,179,182,183,-1,182,186,183,-1,182,184,186,-1,180,184,182,-1,180,181,184,-1,181,185,184,-1,179,185,181,-1,183,185,179,-1,183,186,187,-1,186,190,187,-1,184,190,186,-1,184,188,190,-1,184,185,188,-1,185,189,188,-1,185,183,189,-1,183,187,189,-1,191,189,187,-1,191,188,189,-1,191,190,188,-1,191,187,190,-1,153,163,156,-1,153,168,163,-1,153,166,168,-1,153,169,166,-1,155,169,153,-1,155,167,169,-1,154,167,155,-1,154,163,167,-1,154,157,163,-1,163,168,167,-1,166,169,170,-1,169,173,170,-1,169,171,173,-1,169,167,171,-1,167,168,171,-1,168,172,171,-1,168,170,172,-1,170,168,166,-1,170,173,174,-1,173,177,174,-1,173,175,177,-1,173,171,175,-1,171,172,175,-1,172,176,175,-1,172,174,176,-1,170,174,172,-1,178,176,174,-1,178,175,176,-1,178,177,175,-1,178,174,177,-1,86,30,221,-1,86,221,219,-1,86,219,32,-1,32,219,220,-1,78,32,220,-1,78,220,218,-1,78,218,221,-1,78,221,30,-1,221,225,219,-1,219,225,35,-1,35,33,219,-1,33,220,219,-1,33,34,220,-1,220,34,218,-1,221,218,34,-1,34,225,221,-1,225,226,228,-1,225,228,35,-1,35,228,229,-1,35,229,33,-1,33,229,227,-1,33,227,34,-1,34,227,226,-1,34,226,225,-1,226,234,228,-1,228,234,232,-1,232,229,228,-1,232,233,229,-1,229,233,227,-1,227,233,231,-1,227,231,226,-1,226,231,234,-1,231,235,234,-1,235,238,234,-1,234,238,232,-1,238,236,232,-1,232,236,233,-1,236,237,233,-1,233,237,231,-1,231,237,235,-1,235,239,243,-1,235,243,238,-1,238,243,242,-1,238,242,244,-1,238,244,236,-1,236,244,240,-1,236,240,237,-1,237,240,241,-1,237,241,235,-1,235,241,239,-1,243,239,245,-1,243,245,242,-1,245,257,242,-1,257,259,242,-1,242,259,258,-1,242,258,244,-1,244,246,240,-1,258,246,244,-1,240,246,248,-1,240,248,250,-1,241,240,250,-1,241,250,252,-1,241,252,253,-1,241,253,251,-1,241,251,249,-1,241,249,239,-1,239,249,247,-1,239,247,245,-1,247,254,245,-1,245,254,257,-1,254,260,257,-1,257,260,259,-1,259,260,262,-1,258,259,262,-1,258,262,261,-1,255,258,261,-1,246,258,255,-1,255,248,246,-1,255,270,248,-1,248,270,273,-1,248,273,275,-1,248,275,250,-1,250,275,252,-1,252,275,277,-1,252,277,253,-1,253,277,278,-1,276,253,278,-1,251,253,276,-1,249,251,276,-1,249,276,274,-1,247,249,274,-1,272,247,274,-1,269,247,272,-1,247,269,254,-1,254,269,271,-1,256,254,271,-1,254,256,260,-1,260,256,263,-1,256,261,263,-1,256,255,261,-1,255,256,271,-1,270,255,271,-1,262,260,265,-1,262,265,267,-1,261,262,267,-1,266,261,267,-1,261,266,268,-1,263,261,268,-1,263,268,265,-1,263,265,260,-1,264,267,265,-1,264,265,268,-1,264,268,266,-1,264,266,267,-1,276,278,323,-1,276,323,321,-1,281,321,324,-1,276,321,281,-1,274,276,281,-1,277,323,278,-1,277,322,323,-1,281,324,322,-1,322,277,281,-1,277,275,281,-1,323,327,325,-1,321,323,325,-1,321,325,328,-1,321,328,324,-1,322,324,328,-1,322,328,326,-1,322,326,323,-1,323,326,327,-1,325,329,328,-1,328,329,332,-1,328,332,330,-1,326,328,330,-1,326,330,331,-1,326,331,327,-1,325,327,331,-1,325,331,329,-1,333,332,329,-1,333,329,331,-1,333,331,330,-1,333,330,332,-1,274,281,310,-1,308,274,310,-1,280,308,311,-1,274,308,280,-1,272,274,280,-1,275,310,281,-1,275,309,310,-1,275,311,309,-1,275,280,311,-1,275,273,280,-1,273,296,280,-1,308,310,314,-1,308,314,312,-1,308,312,311,-1,311,312,315,-1,312,316,315,-1,315,316,319,-1,309,311,315,-1,309,315,313,-1,309,313,314,-1,309,314,310,-1,315,319,317,-1,313,315,317,-1,313,317,314,-1,314,317,318,-1,312,314,318,-1,316,312,318,-1,320,316,318,-1,320,318,317,-1,320,317,319,-1,320,319,316,-1,272,280,297,-1,272,297,295,-1,272,295,298,-1,272,298,279,-1,279,298,296,-1,273,279,296,-1,280,296,297,-1,295,299,298,-1,298,299,302,-1,298,302,300,-1,296,298,300,-1,296,300,297,-1,297,300,301,-1,295,297,301,-1,299,295,301,-1,299,303,302,-1,302,303,306,-1,300,302,306,-1,300,306,304,-1,300,304,301,-1,301,304,305,-1,301,305,299,-1,299,305,303,-1,307,303,305,-1,307,305,304,-1,307,304,306,-1,307,306,303,-1,269,272,279,-1,269,279,284,-1,269,284,282,-1,269,282,285,-1,271,269,285,-1,271,285,283,-1,270,271,283,-1,270,283,279,-1,270,279,273,-1,279,283,284,-1,282,286,285,-1,285,286,289,-1,285,289,287,-1,285,287,283,-1,283,287,284,-1,284,287,288,-1,284,288,286,-1,286,282,284,-1,286,290,289,-1,289,290,293,-1,289,293,291,-1,289,291,287,-1,287,291,288,-1,288,291,292,-1,288,292,290,-1,286,288,290,-1,294,290,292,-1,294,292,291,-1,294,291,293,-1,294,293,290,-1,97,334,336,-1,97,336,94,-1,94,336,96,-1,336,335,96,-1,96,335,95,-1,95,335,337,-1,95,337,334,-1,95,334,97,-1,334,341,336,-1,336,341,338,-1,336,338,335,-1,335,338,340,-1,335,340,337,-1,337,340,339,-1,337,339,334,-1,334,339,341,-1,341,345,342,-1,341,342,338,-1,338,342,340,-1,340,342,344,-1,340,344,339,-1,339,344,343,-1,339,343,345,-1,339,345,341,-1,345,349,342,-1,342,349,351,-1,342,351,346,-1,342,346,344,-1,71,346,348,-1,71,344,346,-1,71,348,347,-1,71,347,344,-1,344,347,343,-1,343,347,352,-1,343,352,349,-1,343,349,345,-1,349,352,356,-1,349,356,353,-1,349,353,355,-1,349,355,351,-1,354,356,352,-1,354,352,350,-1,354,350,351,-1,354,351,355,-1,353,356,357,-1,353,357,358,-1,353,358,359,-1,353,359,360,-1,353,360,361,-1,353,361,355,-1,354,357,356,-1,350,346,351,-1,348,346,347,-1,350,347,346,-1,350,352,347,-1,354,358,357,-1,354,359,358,-1,354,360,359,-1,354,361,360,-1,354,355,361,-1,101,362,365,-1,101,365,99,-1,99,365,100,-1,100,365,363,-1,100,363,98,-1,98,363,364,-1,98,364,101,-1,101,364,362,-1,362,369,367,-1,362,367,365,-1,365,367,363,-1,363,367,368,-1,363,367,368,-1,363,368,366,-1,363,366,364,-1,364,366,362,-1,362,366,369,-1,369,373,371,-1,369,371,367,-1,367,371,368,-1,368,371,372,-1,368,372,366,-1,366,372,370,-1,366,370,369,-1,369,370,373,-1,373,377,380,-1,373,380,375,-1,373,375,371,-1,371,375,372,-1,372,375,376,-1,372,376,374,-1,372,374,370,-1,370,374,379,-1,373,370,379,-1,373,379,377,-1,377,379,383,-1,377,383,381,-1,377,381,384,-1,377,384,380,-1,381,383,389,-1,381,389,388,-1,381,388,387,-1,381,387,386,-1,381,386,385,-1,381,385,384,-1,376,375,374,-1,378,379,374,-1,378,374,375,-1,378,375,380,-1,382,386,387,-1,382,387,388,-1,382,388,389,-1,382,389,383,-1,382,383,379,-1,382,379,378,-1,382,378,380,-1,382,380,384,-1,382,384,385,-1,382,385,386,-1]);
let Color1408 = browser.currentScene.createNode("Color");
Color1408.color = new MFColor(new float[1,0,0,0,1,1,0,1,0,1,1,0,1,1,0,1,0,0,0,1,0,0,0,1,0,1,1,0,1,1,1,1,0,1,1,0,1,1,0,1,1,0,0,1,0,0,0,1,0,1,0,1,0,0,0,1,0,1,0,1,1,0,0,1,0,0,1,1,0,1,1,0,1,1,1,1,0,0,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,1,1,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,0,0,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,0,0,1,1,1,0,0,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,0,1,0,0,1,0,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,0,1,0,0,1,0,0,1,1,1,0,0,1,0,0,0,1,1,1,0,1,1,0,0,0,1,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,1,0,1,1,1,0,0,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,0,1,1,0,1,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,0,0,1,1,0,0,0,1,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,1,1,0,1,0,0,0,0,1,0,1,1,1,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,0,1,0,0,0,1,0,1,0,1,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,1,0,1,0,1,0,0,0,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,0,0,1,1,1,0,1,0,1,1,0,1,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,0,0,1,1,0,0,0,1,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,1,1,0,1,0,0,0,0,1,0,1,1,1,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,0,1,0,0,0,1,0,1,0,1,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,1,0,1,0,1,0,0,0,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0,1,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0,1,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,1]);
IndexedFaceSet1407.color = Color1408;

let Coordinate1409 = browser.currentScene.createNode("Coordinate");
Coordinate1409.USE = "TheSkinCoord";
IndexedFaceSet1407.coord = Coordinate1409;

Shape1403.geometry = IndexedFaceSet1407;

HAnimHumanoid42.skin[276] = Shape1403;

browser.currentScene.children[4] = HAnimHumanoid42;

