let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "4.0";
let head1 = browser.currentScene.createNode("head");
let component2 = browser.currentScene.createNode("component");
component2.name = "HAnim";
component2.level = 1;
head1.component = new MFNode();

head1.component[0] = component2;

let meta3 = browser.currentScene.createNode("meta");
meta3.name = "title";
meta3.content = "JohnBoy.x3d";
head1.meta[1] = meta3;

let meta4 = browser.currentScene.createNode("meta");
meta4.name = "identifier";
meta4.content = "http://www.web3d.org/x3d/content/examples/HumanoidAnimation/JohnBoy.x3d";
head1.meta[2] = meta4;

let meta5 = browser.currentScene.createNode("meta");
meta5.name = "description";
meta5.content = "An attempt at a standard LOA-4 skeleton";
head1.meta[3] = meta5;

let meta6 = browser.currentScene.createNode("meta");
meta6.name = "generator";
meta6.content = "h2.pl";
head1.meta[4] = meta6;

let meta7 = browser.currentScene.createNode("meta");
meta7.name = "modified";
meta7.content = "14 Jan 2023";
head1.meta[5] = meta7;

let meta8 = browser.currentScene.createNode("meta");
meta8.name = "creator";
meta8.content = "John Carlson";
head1.meta[6] = meta8;

let meta9 = browser.currentScene.createNode("meta");
meta9.name = "created";
meta9.content = "9 November 2020";
head1.meta[7] = meta9;

let meta10 = browser.currentScene.createNode("meta");
meta10.name = "license";
meta10.content = "../license.html";
head1.meta[8] = meta10;

head = head1;

let Transform12 = browser.currentScene.createNode("Transform");
//DEF for markerfor XYZ axes
let Shape13 = browser.currentScene.createNode("Shape");
Shape13.DEF = "AxisLinesShape";
//RGB lines showing XYZ axes
let IndexedLineSet14 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet14.colorIndex = new MFInt32(new int[0,1,2]);
IndexedLineSet14.colorPerVertex = False;
IndexedLineSet14.coordIndex = new MFInt32(new int[0,1,-1,0,2,-1,0,3,-1]);
let Coordinate15 = browser.currentScene.createNode("Coordinate");
Coordinate15.point = new MFVec3f(new float[0,0,0,0.1,0,0,0,0.1,0,0,0,0.1]);
IndexedLineSet14.coord = Coordinate15;

let Color16 = browser.currentScene.createNode("Color");
Color16.color = new MFColor(new float[1,0,0,0,0.6,0,0,0,1]);
IndexedLineSet14.color = Color16;

Shape13.geometry = IndexedLineSet14;

Transform12.children = new MFNode();

Transform12.children[0] = Shape13;

browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = Transform12;

let Group17 = browser.currentScene.createNode("Group");
//DEFS for markers of skeleton joints, segments, and sites
let Transform18 = browser.currentScene.createNode("Transform");
let Transform19 = browser.currentScene.createNode("Transform");
Transform19.translation = new SFVec3f(new float[0,2,0]);
let Shape20 = browser.currentScene.createNode("Shape");
Shape20.DEF = "HAnimRootShape";
let Sphere21 = browser.currentScene.createNode("Sphere");
Sphere21.radius = 0.02;
Shape20.geometry = Sphere21;

let Appearance22 = browser.currentScene.createNode("Appearance");
let Material23 = browser.currentScene.createNode("Material");
Material23.DEF = "HAnimRootMaterial";
Material23.diffuseColor = new SFColor(new float[0.8,0,0]);
Material23.transparency = 0.3;
Appearance22.material = Material23;

Shape20.appearance = Appearance22;

Transform19.children = new MFNode();

Transform19.children[0] = Shape20;

Transform18.children = new MFNode();

Transform18.children[0] = Transform19;

let Transform24 = browser.currentScene.createNode("Transform");
Transform24.translation = new SFVec3f(new float[0,2.1,0]);
let Shape25 = browser.currentScene.createNode("Shape");
Shape25.DEF = "HAnimJointShape";
let Sphere26 = browser.currentScene.createNode("Sphere");
Sphere26.radius = 0.02;
Shape25.geometry = Sphere26;

let Appearance27 = browser.currentScene.createNode("Appearance");
let Material28 = browser.currentScene.createNode("Material");
Material28.DEF = "HAnimJointMaterial";
Material28.diffuseColor = new SFColor(new float[0,0,0.8]);
Material28.transparency = 0.3;
Appearance27.material = Material28;

Shape25.appearance = Appearance27;

Transform24.children = new MFNode();

Transform24.children[0] = Shape25;

Transform18.children[1] = Transform24;

let Transform29 = browser.currentScene.createNode("Transform");
Transform29.translation = new SFVec3f(new float[0,2.05,0]);
let Shape30 = browser.currentScene.createNode("Shape");
Shape30.DEF = "HAnimSegmentLine";
let LineSet31 = browser.currentScene.createNode("LineSet");
LineSet31.vertexCount = new MFInt32(new int[2]);
let ColorRGBA32 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA32.DEF = "HAnimSegmentLineColorRGBA";
ColorRGBA32.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1]);
LineSet31.color = ColorRGBA32;

let Coordinate33 = browser.currentScene.createNode("Coordinate");
Coordinate33.point = new MFVec3f(new float[-0.05,0,0,0.05,0,0]);
LineSet31.coord = Coordinate33;

Shape30.geometry = LineSet31;

Transform29.children = new MFNode();

Transform29.children[0] = Shape30;

Transform18.children[2] = Transform29;

let Transform34 = browser.currentScene.createNode("Transform");
Transform34.translation = new SFVec3f(new float[0,2.1,0]);
let Shape35 = browser.currentScene.createNode("Shape");
Shape35.DEF = "HAnimSiteShape";
let IndexedFaceSet36 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet36.DEF = "DiamondIFS";
IndexedFaceSet36.creaseAngle = 0.5;
IndexedFaceSet36.solid = False;
IndexedFaceSet36.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
let ColorRGBA37 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA37.DEF = "HAnimSiteColorRGBA";
ColorRGBA37.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
IndexedFaceSet36.color = ColorRGBA37;

let Coordinate38 = browser.currentScene.createNode("Coordinate");
Coordinate38.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet36.coord = Coordinate38;

Shape35.geometry = IndexedFaceSet36;

let Appearance39 = browser.currentScene.createNode("Appearance");
let Material40 = browser.currentScene.createNode("Material");
Material40.diffuseColor = new SFColor(new float[1,1,0]);
Material40.transparency = 0.3;
Appearance39.material = Material40;

Shape35.appearance = Appearance39;

Transform34.children = new MFNode();

Transform34.children[0] = Shape35;

Transform18.children[3] = Transform34;

Group17.children = new MFNode();

Group17.children[0] = Transform18;

browser.currentScene.children[1] = Group17;

let NavigationInfo41 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo41.speed = 1.5;
browser.currentScene.children[2] = NavigationInfo41;

let Viewpoint42 = browser.currentScene.createNode("Viewpoint");
Viewpoint42.description = "default";
browser.currentScene.children[3] = Viewpoint42;

let HAnimHumanoid43 = browser.currentScene.createNode("HAnimHumanoid");
HAnimHumanoid43.name = "HAnim";
HAnimHumanoid43.DEF = "hanim_HAnim";
HAnimHumanoid43.info = new MFString(new java.lang.String["humanoidVersion=2.0"]);
HAnimHumanoid43.version = "2.0";
let HAnimJoint44 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint44.name = "humanoid_root";
HAnimJoint44.DEF = "hanim_humanoid_root";
HAnimJoint44.center = new SFVec3f(new float[0,0.824,0.0277]);
HAnimJoint44.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint44.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment45 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment45.name = "sacrum";
HAnimSegment45.DEF = "hanim_sacrum";
let Transform46 = browser.currentScene.createNode("Transform");
Transform46.translation = new SFVec3f(new float[0,0.824,0.0277]);
let Transform47 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape48 = browser.currentScene.createNode("Shape");
Shape48.USE = "HAnimJointShape";
Transform47.children = new MFNode();

Transform47.children[0] = Shape48;

Transform46.children = new MFNode();

Transform46.children[0] = Transform47;

HAnimSegment45.children = new MFNode();

HAnimSegment45.children[0] = Transform46;

let Shape49 = browser.currentScene.createNode("Shape");
let LineSet50 = browser.currentScene.createNode("LineSet");
LineSet50.vertexCount = new MFInt32(new int[2]);
let Coordinate51 = browser.currentScene.createNode("Coordinate");
Coordinate51.point = new MFVec3f(new float[0,0.824,0.0277,0,0.9149,0.0016]);
LineSet50.coord = Coordinate51;

//from humanoid_root to sacroiliac vertices 2
let ColorRGBA52 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA52.USE = "HAnimSegmentLineColorRGBA";
LineSet50.color = ColorRGBA52;

Shape49.geometry = LineSet50;

HAnimSegment45.children[1] = Shape49;

let HAnimSite53 = browser.currentScene.createNode("HAnimSite");
HAnimSite53.name = "buttocks_standing_wall_contact_point_pt";
HAnimSite53.DEF = "hanim_buttocks_standing_wall_contact_point_pt";
let TouchSensor54 = browser.currentScene.createNode("TouchSensor");
TouchSensor54.description = "HAnimSite buttocks_standing_wall_contact_point_pt";
HAnimSite53.children = new MFNode();

HAnimSite53.children[0] = TouchSensor54;

let Shape55 = browser.currentScene.createNode("Shape");
Shape55.USE = "HAnimSiteShape";
HAnimSite53.children[1] = Shape55;

HAnimSegment45.children[2] = HAnimSite53;

let HAnimSite56 = browser.currentScene.createNode("HAnimSite");
HAnimSite56.name = "crotch_pt";
HAnimSite56.DEF = "hanim_crotch_pt";
HAnimSite56.translation = new SFVec3f(new float[0.0034,0.8266,0.0257]);
let TouchSensor57 = browser.currentScene.createNode("TouchSensor");
TouchSensor57.description = "HAnimSite crotch_pt";
HAnimSite56.children = new MFNode();

HAnimSite56.children[0] = TouchSensor57;

let Shape58 = browser.currentScene.createNode("Shape");
Shape58.USE = "HAnimSiteShape";
HAnimSite56.children[1] = Shape58;

HAnimSegment45.children[3] = HAnimSite56;

let HAnimSite59 = browser.currentScene.createNode("HAnimSite");
HAnimSite59.name = "l_asis_pt";
HAnimSite59.DEF = "hanim_l_asis_pt";
HAnimSite59.translation = new SFVec3f(new float[0.0925,0.9983,0.1052]);
let TouchSensor60 = browser.currentScene.createNode("TouchSensor");
TouchSensor60.description = "HAnimSite l_asis_pt";
HAnimSite59.children = new MFNode();

HAnimSite59.children[0] = TouchSensor60;

let Shape61 = browser.currentScene.createNode("Shape");
Shape61.USE = "HAnimSiteShape";
HAnimSite59.children[1] = Shape61;

HAnimSegment45.children[4] = HAnimSite59;

let HAnimSite62 = browser.currentScene.createNode("HAnimSite");
HAnimSite62.name = "l_iliocristale_pt";
HAnimSite62.DEF = "hanim_l_iliocristale_pt";
HAnimSite62.translation = new SFVec3f(new float[0.1612,1.0537,0.0008]);
let TouchSensor63 = browser.currentScene.createNode("TouchSensor");
TouchSensor63.description = "HAnimSite l_iliocristale_pt";
HAnimSite62.children = new MFNode();

HAnimSite62.children[0] = TouchSensor63;

let Shape64 = browser.currentScene.createNode("Shape");
Shape64.USE = "HAnimSiteShape";
HAnimSite62.children[1] = Shape64;

HAnimSegment45.children[5] = HAnimSite62;

let HAnimSite65 = browser.currentScene.createNode("HAnimSite");
HAnimSite65.name = "l_psis_pt";
HAnimSite65.DEF = "hanim_l_psis_pt";
HAnimSite65.translation = new SFVec3f(new float[0.0774,1.019,-0.1151]);
let TouchSensor66 = browser.currentScene.createNode("TouchSensor");
TouchSensor66.description = "HAnimSite l_psis_pt";
HAnimSite65.children = new MFNode();

HAnimSite65.children[0] = TouchSensor66;

let Shape67 = browser.currentScene.createNode("Shape");
Shape67.USE = "HAnimSiteShape";
HAnimSite65.children[1] = Shape67;

HAnimSegment45.children[6] = HAnimSite65;

let HAnimSite68 = browser.currentScene.createNode("HAnimSite");
HAnimSite68.name = "l_trochanterion_pt";
HAnimSite68.DEF = "hanim_l_trochanterion_pt";
HAnimSite68.translation = new SFVec3f(new float[0.1677,0.8336,0.0303]);
let TouchSensor69 = browser.currentScene.createNode("TouchSensor");
TouchSensor69.description = "HAnimSite l_trochanterion_pt";
HAnimSite68.children = new MFNode();

HAnimSite68.children[0] = TouchSensor69;

let Shape70 = browser.currentScene.createNode("Shape");
Shape70.USE = "HAnimSiteShape";
HAnimSite68.children[1] = Shape70;

HAnimSegment45.children[7] = HAnimSite68;

let HAnimSite71 = browser.currentScene.createNode("HAnimSite");
HAnimSite71.name = "r_asis_pt";
HAnimSite71.DEF = "hanim_r_asis_pt";
HAnimSite71.translation = new SFVec3f(new float[-0.0887,1.0021,0.1112]);
let TouchSensor72 = browser.currentScene.createNode("TouchSensor");
TouchSensor72.description = "HAnimSite r_asis_pt";
HAnimSite71.children = new MFNode();

HAnimSite71.children[0] = TouchSensor72;

let Shape73 = browser.currentScene.createNode("Shape");
Shape73.USE = "HAnimSiteShape";
HAnimSite71.children[1] = Shape73;

HAnimSegment45.children[8] = HAnimSite71;

let HAnimSite74 = browser.currentScene.createNode("HAnimSite");
HAnimSite74.name = "r_iliocristale_pt";
HAnimSite74.DEF = "hanim_r_iliocristale_pt";
HAnimSite74.translation = new SFVec3f(new float[-0.1525,1.0628,0.0035]);
let TouchSensor75 = browser.currentScene.createNode("TouchSensor");
TouchSensor75.description = "HAnimSite r_iliocristale_pt";
HAnimSite74.children = new MFNode();

HAnimSite74.children[0] = TouchSensor75;

let Shape76 = browser.currentScene.createNode("Shape");
Shape76.USE = "HAnimSiteShape";
HAnimSite74.children[1] = Shape76;

HAnimSegment45.children[9] = HAnimSite74;

let HAnimSite77 = browser.currentScene.createNode("HAnimSite");
HAnimSite77.name = "r_psis_pt";
HAnimSite77.DEF = "hanim_r_psis_pt";
HAnimSite77.translation = new SFVec3f(new float[-0.0716,1.019,-0.1138]);
let TouchSensor78 = browser.currentScene.createNode("TouchSensor");
TouchSensor78.description = "HAnimSite r_psis_pt";
HAnimSite77.children = new MFNode();

HAnimSite77.children[0] = TouchSensor78;

let Shape79 = browser.currentScene.createNode("Shape");
Shape79.USE = "HAnimSiteShape";
HAnimSite77.children[1] = Shape79;

HAnimSegment45.children[10] = HAnimSite77;

let HAnimSite80 = browser.currentScene.createNode("HAnimSite");
HAnimSite80.name = "r_trochanterion_pt";
HAnimSite80.DEF = "hanim_r_trochanterion_pt";
HAnimSite80.translation = new SFVec3f(new float[-0.1689,0.8419,0.0352]);
let TouchSensor81 = browser.currentScene.createNode("TouchSensor");
TouchSensor81.description = "HAnimSite r_trochanterion_pt";
HAnimSite80.children = new MFNode();

HAnimSite80.children[0] = TouchSensor81;

let Shape82 = browser.currentScene.createNode("Shape");
Shape82.USE = "HAnimSiteShape";
HAnimSite80.children[1] = Shape82;

HAnimSegment45.children[11] = HAnimSite80;

let Shape83 = browser.currentScene.createNode("Shape");
let LineSet84 = browser.currentScene.createNode("LineSet");
LineSet84.vertexCount = new MFInt32(new int[2]);
let Coordinate85 = browser.currentScene.createNode("Coordinate");
Coordinate85.point = new MFVec3f(new float[0,0.824,0.0277,0.0028,1.0568,-0.0776]);
LineSet84.coord = Coordinate85;

//from humanoid_root to vl5 vertices 2
let ColorRGBA86 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA86.USE = "HAnimSegmentLineColorRGBA";
LineSet84.color = ColorRGBA86;

Shape83.geometry = LineSet84;

HAnimSegment45.children[12] = Shape83;

let HAnimSite87 = browser.currentScene.createNode("HAnimSite");
HAnimSite87.name = "navel_pt";
HAnimSite87.DEF = "hanim_navel_pt";
HAnimSite87.translation = new SFVec3f(new float[0.0069,1.0966,0.1017]);
let TouchSensor88 = browser.currentScene.createNode("TouchSensor");
TouchSensor88.description = "HAnimSite navel_pt";
HAnimSite87.children = new MFNode();

HAnimSite87.children[0] = TouchSensor88;

let Shape89 = browser.currentScene.createNode("Shape");
Shape89.USE = "HAnimSiteShape";
HAnimSite87.children[1] = Shape89;

HAnimSegment45.children[13] = HAnimSite87;

let HAnimSite90 = browser.currentScene.createNode("HAnimSite");
HAnimSite90.name = "waist_preferred_anterior_pt";
HAnimSite90.DEF = "hanim_waist_preferred_anterior_pt";
let TouchSensor91 = browser.currentScene.createNode("TouchSensor");
TouchSensor91.description = "HAnimSite waist_preferred_anterior_pt";
HAnimSite90.children = new MFNode();

HAnimSite90.children[0] = TouchSensor91;

let Shape92 = browser.currentScene.createNode("Shape");
Shape92.USE = "HAnimSiteShape";
HAnimSite90.children[1] = Shape92;

HAnimSegment45.children[14] = HAnimSite90;

let HAnimSite93 = browser.currentScene.createNode("HAnimSite");
HAnimSite93.name = "waist_preferred_posterior_pt";
HAnimSite93.DEF = "hanim_waist_preferred_posterior_pt";
HAnimSite93.translation = new SFVec3f(new float[0.29,1.0915,-0.1091]);
let TouchSensor94 = browser.currentScene.createNode("TouchSensor");
TouchSensor94.description = "HAnimSite waist_preferred_posterior_pt";
HAnimSite93.children = new MFNode();

HAnimSite93.children[0] = TouchSensor94;

let Shape95 = browser.currentScene.createNode("Shape");
Shape95.USE = "HAnimSiteShape";
HAnimSite93.children[1] = Shape95;

HAnimSegment45.children[15] = HAnimSite93;

HAnimJoint44.children = new MFNode();

HAnimJoint44.children[0] = HAnimSegment45;

let HAnimJoint96 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint96.name = "sacroiliac";
HAnimJoint96.DEF = "hanim_sacroiliac";
HAnimJoint96.center = new SFVec3f(new float[0,0.9149,0.0016]);
HAnimJoint96.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint96.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment97 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment97.name = "pelvis";
HAnimSegment97.DEF = "hanim_pelvis";
let Transform98 = browser.currentScene.createNode("Transform");
Transform98.translation = new SFVec3f(new float[0,0.9149,0.0016]);
let Transform99 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape100 = browser.currentScene.createNode("Shape");
Shape100.USE = "HAnimJointShape";
Transform99.children = new MFNode();

Transform99.children[0] = Shape100;

Transform98.children = new MFNode();

Transform98.children[0] = Transform99;

HAnimSegment97.children = new MFNode();

HAnimSegment97.children[0] = Transform98;

let Shape101 = browser.currentScene.createNode("Shape");
let LineSet102 = browser.currentScene.createNode("LineSet");
LineSet102.vertexCount = new MFInt32(new int[2]);
let Coordinate103 = browser.currentScene.createNode("Coordinate");
Coordinate103.point = new MFVec3f(new float[0,0.9149,0.0016,0.0961,0.9124,-0.0001]);
LineSet102.coord = Coordinate103;

//from sacroiliac to l_hip vertices 2
let ColorRGBA104 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA104.USE = "HAnimSegmentLineColorRGBA";
LineSet102.color = ColorRGBA104;

Shape101.geometry = LineSet102;

HAnimSegment97.children[1] = Shape101;

let HAnimSite105 = browser.currentScene.createNode("HAnimSite");
HAnimSite105.name = "l_femoral_lateral_epicondyles_pt";
HAnimSite105.DEF = "hanim_l_femoral_lateral_epicondyles_pt";
HAnimSite105.translation = new SFVec3f(new float[0.1598,0.4967,0.0297]);
let TouchSensor106 = browser.currentScene.createNode("TouchSensor");
TouchSensor106.description = "HAnimSite l_femoral_lateral_epicondyles_pt";
HAnimSite105.children = new MFNode();

HAnimSite105.children[0] = TouchSensor106;

let Shape107 = browser.currentScene.createNode("Shape");
Shape107.USE = "HAnimSiteShape";
HAnimSite105.children[1] = Shape107;

HAnimSegment97.children[2] = HAnimSite105;

let HAnimSite108 = browser.currentScene.createNode("HAnimSite");
HAnimSite108.name = "l_femoral_medial_epicondyles_pt";
HAnimSite108.DEF = "hanim_l_femoral_medial_epicondyles_pt";
HAnimSite108.translation = new SFVec3f(new float[0.0398,0.4946,0.0303]);
let TouchSensor109 = browser.currentScene.createNode("TouchSensor");
TouchSensor109.description = "HAnimSite l_femoral_medial_epicondyles_pt";
HAnimSite108.children = new MFNode();

HAnimSite108.children[0] = TouchSensor109;

let Shape110 = browser.currentScene.createNode("Shape");
Shape110.USE = "HAnimSiteShape";
HAnimSite108.children[1] = Shape110;

HAnimSegment97.children[3] = HAnimSite108;

let HAnimSite111 = browser.currentScene.createNode("HAnimSite");
HAnimSite111.name = "l_knee_crease_pt";
HAnimSite111.DEF = "hanim_l_knee_crease_pt";
HAnimSite111.translation = new SFVec3f(new float[0.0993,0.4881,-0.0309]);
let TouchSensor112 = browser.currentScene.createNode("TouchSensor");
TouchSensor112.description = "HAnimSite l_knee_crease_pt";
HAnimSite111.children = new MFNode();

HAnimSite111.children[0] = TouchSensor112;

let Shape113 = browser.currentScene.createNode("Shape");
Shape113.USE = "HAnimSiteShape";
HAnimSite111.children[1] = Shape113;

HAnimSegment97.children[4] = HAnimSite111;

let HAnimSite114 = browser.currentScene.createNode("HAnimSite");
HAnimSite114.name = "l_suprapatella_pt";
HAnimSite114.DEF = "hanim_l_suprapatella_pt";
let TouchSensor115 = browser.currentScene.createNode("TouchSensor");
TouchSensor115.description = "HAnimSite l_suprapatella_pt";
HAnimSite114.children = new MFNode();

HAnimSite114.children[0] = TouchSensor115;

let Shape116 = browser.currentScene.createNode("Shape");
Shape116.USE = "HAnimSiteShape";
HAnimSite114.children[1] = Shape116;

HAnimSegment97.children[5] = HAnimSite114;

let Shape117 = browser.currentScene.createNode("Shape");
let LineSet118 = browser.currentScene.createNode("LineSet");
LineSet118.vertexCount = new MFInt32(new int[2]);
let Coordinate119 = browser.currentScene.createNode("Coordinate");
Coordinate119.point = new MFVec3f(new float[0,0.9149,0.0016,-0.095,0.9171,0.0029]);
LineSet118.coord = Coordinate119;

//from sacroiliac to r_hip vertices 2
let ColorRGBA120 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA120.USE = "HAnimSegmentLineColorRGBA";
LineSet118.color = ColorRGBA120;

Shape117.geometry = LineSet118;

HAnimSegment97.children[6] = Shape117;

let HAnimSite121 = browser.currentScene.createNode("HAnimSite");
HAnimSite121.name = "r_femoral_lateral_epicondyles_pt";
HAnimSite121.DEF = "hanim_r_femoral_lateral_epicondyles_pt";
HAnimSite121.translation = new SFVec3f(new float[-0.1421,0.4992,0.031]);
let TouchSensor122 = browser.currentScene.createNode("TouchSensor");
TouchSensor122.description = "HAnimSite r_femoral_lateral_epicondyles_pt";
HAnimSite121.children = new MFNode();

HAnimSite121.children[0] = TouchSensor122;

let Shape123 = browser.currentScene.createNode("Shape");
Shape123.USE = "HAnimSiteShape";
HAnimSite121.children[1] = Shape123;

HAnimSegment97.children[7] = HAnimSite121;

let HAnimSite124 = browser.currentScene.createNode("HAnimSite");
HAnimSite124.name = "r_femoral_medial_epicondyles_pt";
HAnimSite124.DEF = "hanim_r_femoral_medial_epicondyles_pt";
HAnimSite124.translation = new SFVec3f(new float[-0.0221,0.5014,0.0289]);
let TouchSensor125 = browser.currentScene.createNode("TouchSensor");
TouchSensor125.description = "HAnimSite r_femoral_medial_epicondyles_pt";
HAnimSite124.children = new MFNode();

HAnimSite124.children[0] = TouchSensor125;

let Shape126 = browser.currentScene.createNode("Shape");
Shape126.USE = "HAnimSiteShape";
HAnimSite124.children[1] = Shape126;

HAnimSegment97.children[8] = HAnimSite124;

let HAnimSite127 = browser.currentScene.createNode("HAnimSite");
HAnimSite127.name = "r_knee_crease_pt";
HAnimSite127.DEF = "hanim_r_knee_crease_pt";
HAnimSite127.translation = new SFVec3f(new float[-0.0825,0.4932,-0.0326]);
let TouchSensor128 = browser.currentScene.createNode("TouchSensor");
TouchSensor128.description = "HAnimSite r_knee_crease_pt";
HAnimSite127.children = new MFNode();

HAnimSite127.children[0] = TouchSensor128;

let Shape129 = browser.currentScene.createNode("Shape");
Shape129.USE = "HAnimSiteShape";
HAnimSite127.children[1] = Shape129;

HAnimSegment97.children[9] = HAnimSite127;

let HAnimSite130 = browser.currentScene.createNode("HAnimSite");
HAnimSite130.name = "r_suprapatella_pt";
HAnimSite130.DEF = "hanim_r_suprapatella_pt";
let TouchSensor131 = browser.currentScene.createNode("TouchSensor");
TouchSensor131.description = "HAnimSite r_suprapatella_pt";
HAnimSite130.children = new MFNode();

HAnimSite130.children[0] = TouchSensor131;

let Shape132 = browser.currentScene.createNode("Shape");
Shape132.USE = "HAnimSiteShape";
HAnimSite130.children[1] = Shape132;

HAnimSegment97.children[10] = HAnimSite130;

HAnimJoint96.children = new MFNode();

HAnimJoint96.children[0] = HAnimSegment97;

let HAnimJoint133 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint133.name = "l_hip";
HAnimJoint133.DEF = "hanim_l_hip";
HAnimJoint133.center = new SFVec3f(new float[0.0961,0.9124,-0.0001]);
HAnimJoint133.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint133.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment134 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment134.name = "l_thigh";
HAnimSegment134.DEF = "hanim_l_thigh";
let Transform135 = browser.currentScene.createNode("Transform");
Transform135.translation = new SFVec3f(new float[0.0961,0.9124,-0.0001]);
let Transform136 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape137 = browser.currentScene.createNode("Shape");
Shape137.USE = "HAnimJointShape";
Transform136.children = new MFNode();

Transform136.children[0] = Shape137;

Transform135.children = new MFNode();

Transform135.children[0] = Transform136;

HAnimSegment134.children = new MFNode();

HAnimSegment134.children[0] = Transform135;

let Shape138 = browser.currentScene.createNode("Shape");
let LineSet139 = browser.currentScene.createNode("LineSet");
LineSet139.vertexCount = new MFInt32(new int[2]);
let Coordinate140 = browser.currentScene.createNode("Coordinate");
Coordinate140.point = new MFVec3f(new float[0.0961,0.9124,-0.0001,0.104,0.4867,0.0308]);
LineSet139.coord = Coordinate140;

//from l_hip to l_knee vertices 2
let ColorRGBA141 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA141.USE = "HAnimSegmentLineColorRGBA";
LineSet139.color = ColorRGBA141;

Shape138.geometry = LineSet139;

HAnimSegment134.children[1] = Shape138;

let HAnimSite142 = browser.currentScene.createNode("HAnimSite");
HAnimSite142.name = "l_lateral_malleolus_pt";
HAnimSite142.DEF = "hanim_l_lateral_malleolus_pt";
HAnimSite142.translation = new SFVec3f(new float[0.1308,0.0597,-0.1032]);
let TouchSensor143 = browser.currentScene.createNode("TouchSensor");
TouchSensor143.description = "HAnimSite l_lateral_malleolus_pt";
HAnimSite142.children = new MFNode();

HAnimSite142.children[0] = TouchSensor143;

let Shape144 = browser.currentScene.createNode("Shape");
Shape144.USE = "HAnimSiteShape";
HAnimSite142.children[1] = Shape144;

HAnimSegment134.children[2] = HAnimSite142;

let HAnimSite145 = browser.currentScene.createNode("HAnimSite");
HAnimSite145.name = "l_medial_malleolus_pt";
HAnimSite145.DEF = "hanim_l_medial_malleolus_pt";
HAnimSite145.translation = new SFVec3f(new float[0.089,0.0716,-0.0881]);
let TouchSensor146 = browser.currentScene.createNode("TouchSensor");
TouchSensor146.description = "HAnimSite l_medial_malleolus_pt";
HAnimSite145.children = new MFNode();

HAnimSite145.children[0] = TouchSensor146;

let Shape147 = browser.currentScene.createNode("Shape");
Shape147.USE = "HAnimSiteShape";
HAnimSite145.children[1] = Shape147;

HAnimSegment134.children[3] = HAnimSite145;

let HAnimSite148 = browser.currentScene.createNode("HAnimSite");
HAnimSite148.name = "l_tibiale_pt";
HAnimSite148.DEF = "hanim_l_tibiale_pt";
let TouchSensor149 = browser.currentScene.createNode("TouchSensor");
TouchSensor149.description = "HAnimSite l_tibiale_pt";
HAnimSite148.children = new MFNode();

HAnimSite148.children[0] = TouchSensor149;

let Shape150 = browser.currentScene.createNode("Shape");
Shape150.USE = "HAnimSiteShape";
HAnimSite148.children[1] = Shape150;

HAnimSegment134.children[4] = HAnimSite148;

HAnimJoint133.children = new MFNode();

HAnimJoint133.children[0] = HAnimSegment134;

let HAnimJoint151 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint151.name = "l_knee";
HAnimJoint151.DEF = "hanim_l_knee";
HAnimJoint151.center = new SFVec3f(new float[0.104,0.4867,0.0308]);
HAnimJoint151.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint151.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment152 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment152.name = "l_calf";
HAnimSegment152.DEF = "hanim_l_calf";
let Transform153 = browser.currentScene.createNode("Transform");
Transform153.translation = new SFVec3f(new float[0.104,0.4867,0.0308]);
let Transform154 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape155 = browser.currentScene.createNode("Shape");
Shape155.USE = "HAnimJointShape";
Transform154.children = new MFNode();

Transform154.children[0] = Shape155;

Transform153.children = new MFNode();

Transform153.children[0] = Transform154;

HAnimSegment152.children = new MFNode();

HAnimSegment152.children[0] = Transform153;

let Shape156 = browser.currentScene.createNode("Shape");
let LineSet157 = browser.currentScene.createNode("LineSet");
LineSet157.vertexCount = new MFInt32(new int[2]);
let Coordinate158 = browser.currentScene.createNode("Coordinate");
Coordinate158.point = new MFVec3f(new float[0.104,0.4867,0.0308,0.1101,0.0656,-0.0736]);
LineSet157.coord = Coordinate158;

//from l_knee to l_talocrural vertices 2
let ColorRGBA159 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA159.USE = "HAnimSegmentLineColorRGBA";
LineSet157.color = ColorRGBA159;

Shape156.geometry = LineSet157;

HAnimSegment152.children[1] = Shape156;

let HAnimSite160 = browser.currentScene.createNode("HAnimSite");
HAnimSite160.name = "l_calcaneus_posterior_pt";
HAnimSite160.DEF = "hanim_l_calcaneus_posterior_pt";
HAnimSite160.translation = new SFVec3f(new float[0.0974,0.0259,-0.1171]);
let TouchSensor161 = browser.currentScene.createNode("TouchSensor");
TouchSensor161.description = "HAnimSite l_calcaneus_posterior_pt";
HAnimSite160.children = new MFNode();

HAnimSite160.children[0] = TouchSensor161;

let Shape162 = browser.currentScene.createNode("Shape");
Shape162.USE = "HAnimSiteShape";
HAnimSite160.children[1] = Shape162;

HAnimSegment152.children[2] = HAnimSite160;

let HAnimSite163 = browser.currentScene.createNode("HAnimSite");
HAnimSite163.name = "l_sphyrion_pt";
HAnimSite163.DEF = "hanim_l_sphyrion_pt";
HAnimSite163.translation = new SFVec3f(new float[0.089,0.0575,-0.0943]);
let TouchSensor164 = browser.currentScene.createNode("TouchSensor");
TouchSensor164.description = "HAnimSite l_sphyrion_pt";
HAnimSite163.children = new MFNode();

HAnimSite163.children[0] = TouchSensor164;

let Shape165 = browser.currentScene.createNode("Shape");
Shape165.USE = "HAnimSiteShape";
HAnimSite163.children[1] = Shape165;

HAnimSegment152.children[3] = HAnimSite163;

HAnimJoint151.children = new MFNode();

HAnimJoint151.children[0] = HAnimSegment152;

let HAnimJoint166 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint166.name = "l_talocrural";
HAnimJoint166.DEF = "hanim_l_talocrural";
HAnimJoint166.center = new SFVec3f(new float[0.1101,0.0656,-0.0736]);
HAnimJoint166.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint166.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment167 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment167.name = "l_talus";
HAnimSegment167.DEF = "hanim_l_talus";
let Transform168 = browser.currentScene.createNode("Transform");
Transform168.scale = new SFVec3f(new float[0.15,0.15,0.15]);
Transform168.translation = new SFVec3f(new float[0.08,0.06,-0.025]);
Transform168.rotation = new SFRotation(new float[1,0,0,-1.57]);
//Transform left foot
let Transform169 = browser.currentScene.createNode("Transform");
//Empty Transform left foot
let Shape170 = browser.currentScene.createNode("Shape");
Shape170.USE = "HAnimJointShape";
Transform169.children = new MFNode();

Transform169.children[0] = Shape170;

Transform168.children = new MFNode();

Transform168.children[0] = Transform169;

HAnimSegment167.children = new MFNode();

HAnimSegment167.children[0] = Transform168;

let Shape171 = browser.currentScene.createNode("Shape");
let LineSet172 = browser.currentScene.createNode("LineSet");
LineSet172.vertexCount = new MFInt32(new int[2]);
let Coordinate173 = browser.currentScene.createNode("Coordinate");
Coordinate173.point = new MFVec3f(new float[0.1101,0.0656,-0.0736,0.1101,0.0656,-0.0736]);
LineSet172.coord = Coordinate173;

//from l_talocrural to l_talocalcaneonavicular vertices 2
let ColorRGBA174 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA174.USE = "HAnimSegmentLineColorRGBA";
LineSet172.color = ColorRGBA174;

Shape171.geometry = LineSet172;

HAnimSegment167.children[1] = Shape171;

let Shape175 = browser.currentScene.createNode("Shape");
let LineSet176 = browser.currentScene.createNode("LineSet");
LineSet176.vertexCount = new MFInt32(new int[2]);
let Coordinate177 = browser.currentScene.createNode("Coordinate");
Coordinate177.point = new MFVec3f(new float[0.1101,0.0656,-0.0736,0.1101,0.0656,-0.0736]);
LineSet176.coord = Coordinate177;

//from l_talocrural to l_calcaneocuboid vertices 2
let ColorRGBA178 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA178.USE = "HAnimSegmentLineColorRGBA";
LineSet176.color = ColorRGBA178;

Shape175.geometry = LineSet176;

HAnimSegment167.children[2] = Shape175;

HAnimJoint166.children = new MFNode();

HAnimJoint166.children[0] = HAnimSegment167;

let HAnimJoint179 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint179.name = "l_talocalcaneonavicular";
HAnimJoint179.DEF = "hanim_l_talocalcaneonavicular";
HAnimJoint179.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint179.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment180 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment180.name = "l_navicular";
HAnimSegment180.DEF = "hanim_l_navicular";
let Transform181 = browser.currentScene.createNode("Transform");
Transform181.translation = new SFVec3f(new float[0.1101,0.0656,-0.0736]);
let Transform182 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape183 = browser.currentScene.createNode("Shape");
Shape183.USE = "HAnimJointShape";
Transform182.children = new MFNode();

Transform182.children[0] = Shape183;

Transform181.children = new MFNode();

Transform181.children[0] = Transform182;

HAnimSegment180.children = new MFNode();

HAnimSegment180.children[0] = Transform181;

let Shape184 = browser.currentScene.createNode("Shape");
let LineSet185 = browser.currentScene.createNode("LineSet");
LineSet185.vertexCount = new MFInt32(new int[2]);
let Coordinate186 = browser.currentScene.createNode("Coordinate");
Coordinate186.point = new MFVec3f(new float[0.1101,0.0656,-0.0736]);
LineSet185.coord = Coordinate186;

//from l_talocalcaneonavicular to l_cuneonavicular_1 vertices 1
let ColorRGBA187 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA187.USE = "HAnimSegmentLineColorRGBA";
LineSet185.color = ColorRGBA187;

Shape184.geometry = LineSet185;

HAnimSegment180.children[1] = Shape184;

let Shape188 = browser.currentScene.createNode("Shape");
let LineSet189 = browser.currentScene.createNode("LineSet");
LineSet189.vertexCount = new MFInt32(new int[2]);
let Coordinate190 = browser.currentScene.createNode("Coordinate");
Coordinate190.point = new MFVec3f(new float[0.1101,0.0656,-0.0736]);
LineSet189.coord = Coordinate190;

//from l_talocalcaneonavicular to l_cuneonavicular_2 vertices 1
let ColorRGBA191 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA191.USE = "HAnimSegmentLineColorRGBA";
LineSet189.color = ColorRGBA191;

Shape188.geometry = LineSet189;

HAnimSegment180.children[2] = Shape188;

let Shape192 = browser.currentScene.createNode("Shape");
let LineSet193 = browser.currentScene.createNode("LineSet");
LineSet193.vertexCount = new MFInt32(new int[2]);
let Coordinate194 = browser.currentScene.createNode("Coordinate");
Coordinate194.point = new MFVec3f(new float[0.1101,0.0656,-0.0736]);
LineSet193.coord = Coordinate194;

//from l_talocalcaneonavicular to l_cuneonavicular_3 vertices 1
let ColorRGBA195 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA195.USE = "HAnimSegmentLineColorRGBA";
LineSet193.color = ColorRGBA195;

Shape192.geometry = LineSet193;

HAnimSegment180.children[3] = Shape192;

HAnimJoint179.children = new MFNode();

HAnimJoint179.children[0] = HAnimSegment180;

let HAnimJoint196 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint196.name = "l_cuneonavicular_1";
HAnimJoint196.DEF = "hanim_l_cuneonavicular_1";
HAnimJoint196.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint196.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment197 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment197.name = "l_cuneiform_1";
HAnimSegment197.DEF = "hanim_l_cuneiform_1";
let Transform198 = browser.currentScene.createNode("Transform");
Transform198.translation = new SFVec3f(new float[0.1101,0.0656,-0.0736]);
let Transform199 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape200 = browser.currentScene.createNode("Shape");
Shape200.USE = "HAnimJointShape";
Transform199.children = new MFNode();

Transform199.children[0] = Shape200;

Transform198.children = new MFNode();

Transform198.children[0] = Transform199;

HAnimSegment197.children = new MFNode();

HAnimSegment197.children[0] = Transform198;

let Shape201 = browser.currentScene.createNode("Shape");
let LineSet202 = browser.currentScene.createNode("LineSet");
LineSet202.vertexCount = new MFInt32(new int[2]);
let Coordinate203 = browser.currentScene.createNode("Coordinate");
Coordinate203.point = new MFVec3f(new float[0.1101,0.0656,-0.0736]);
LineSet202.coord = Coordinate203;

//from l_cuneonavicular_1 to l_tarsometatarsal_1 vertices 1
let ColorRGBA204 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA204.USE = "HAnimSegmentLineColorRGBA";
LineSet202.color = ColorRGBA204;

Shape201.geometry = LineSet202;

HAnimSegment197.children[1] = Shape201;

HAnimJoint196.children = new MFNode();

HAnimJoint196.children[0] = HAnimSegment197;

let HAnimJoint205 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint205.name = "l_tarsometatarsal_1";
HAnimJoint205.DEF = "hanim_l_tarsometatarsal_1";
HAnimJoint205.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint205.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment206 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment206.name = "l_metatarsal_1";
HAnimSegment206.DEF = "hanim_l_metatarsal_1";
let Transform207 = browser.currentScene.createNode("Transform");
Transform207.translation = new SFVec3f(new float[0.1101,0.0656,-0.0736]);
let Transform208 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape209 = browser.currentScene.createNode("Shape");
Shape209.USE = "HAnimJointShape";
Transform208.children = new MFNode();

Transform208.children[0] = Shape209;

Transform207.children = new MFNode();

Transform207.children[0] = Transform208;

HAnimSegment206.children = new MFNode();

HAnimSegment206.children[0] = Transform207;

let Shape210 = browser.currentScene.createNode("Shape");
let LineSet211 = browser.currentScene.createNode("LineSet");
LineSet211.vertexCount = new MFInt32(new int[2]);
let Coordinate212 = browser.currentScene.createNode("Coordinate");
Coordinate212.point = new MFVec3f(new float[0.1101,0.0656,-0.0736]);
LineSet211.coord = Coordinate212;

//from l_tarsometatarsal_1 to l_metatarsophalangeal_1 vertices 1
let ColorRGBA213 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA213.USE = "HAnimSegmentLineColorRGBA";
LineSet211.color = ColorRGBA213;

Shape210.geometry = LineSet211;

HAnimSegment206.children[1] = Shape210;

let HAnimSite214 = browser.currentScene.createNode("HAnimSite");
HAnimSite214.name = "l_metatarsal_phalanx_1_pt";
HAnimSite214.DEF = "hanim_l_metatarsal_phalanx_1_pt";
let TouchSensor215 = browser.currentScene.createNode("TouchSensor");
TouchSensor215.description = "HAnimSite l_metatarsal_phalanx_1_pt";
HAnimSite214.children = new MFNode();

HAnimSite214.children[0] = TouchSensor215;

let Shape216 = browser.currentScene.createNode("Shape");
Shape216.USE = "HAnimSiteShape";
HAnimSite214.children[1] = Shape216;

HAnimSegment206.children[2] = HAnimSite214;

HAnimJoint205.children = new MFNode();

HAnimJoint205.children[0] = HAnimSegment206;

let HAnimJoint217 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint217.name = "l_metatarsophalangeal_1";
HAnimJoint217.DEF = "hanim_l_metatarsophalangeal_1";
HAnimJoint217.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint217.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment218 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment218.name = "l_tarsal_proximal_phalanx_1";
HAnimSegment218.DEF = "hanim_l_tarsal_proximal_phalanx_1";
let Transform219 = browser.currentScene.createNode("Transform");
Transform219.translation = new SFVec3f(new float[0.1101,0.0656,-0.0736]);
let Transform220 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape221 = browser.currentScene.createNode("Shape");
Shape221.USE = "HAnimJointShape";
Transform220.children = new MFNode();

Transform220.children[0] = Shape221;

Transform219.children = new MFNode();

Transform219.children[0] = Transform220;

HAnimSegment218.children = new MFNode();

HAnimSegment218.children[0] = Transform219;

let Shape222 = browser.currentScene.createNode("Shape");
let LineSet223 = browser.currentScene.createNode("LineSet");
LineSet223.vertexCount = new MFInt32(new int[2]);
let Coordinate224 = browser.currentScene.createNode("Coordinate");
Coordinate224.point = new MFVec3f(new float[0.1101,0.0656,-0.0736]);
LineSet223.coord = Coordinate224;

//from l_metatarsophalangeal_1 to l_tarsal_interphalangeal_1 vertices 1
let ColorRGBA225 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA225.USE = "HAnimSegmentLineColorRGBA";
LineSet223.color = ColorRGBA225;

Shape222.geometry = LineSet223;

HAnimSegment218.children[1] = Shape222;

let HAnimSite226 = browser.currentScene.createNode("HAnimSite");
HAnimSite226.name = "l_tarsal_distal_phalanx_1_tip";
HAnimSite226.DEF = "hanim_l_tarsal_distal_phalanx_1_tip";
let TouchSensor227 = browser.currentScene.createNode("TouchSensor");
TouchSensor227.description = "HAnimSite l_tarsal_distal_phalanx_1_tip";
HAnimSite226.children = new MFNode();

HAnimSite226.children[0] = TouchSensor227;

let Shape228 = browser.currentScene.createNode("Shape");
Shape228.USE = "HAnimSiteShape";
HAnimSite226.children[1] = Shape228;

HAnimSegment218.children[2] = HAnimSite226;

HAnimJoint217.children = new MFNode();

HAnimJoint217.children[0] = HAnimSegment218;

let HAnimJoint229 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint229.name = "l_tarsal_interphalangeal_1";
HAnimJoint229.DEF = "hanim_l_tarsal_interphalangeal_1";
HAnimJoint229.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint229.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint217.children[1] = HAnimJoint229;

HAnimJoint205.children[1] = HAnimJoint217;

HAnimJoint196.children[1] = HAnimJoint205;

HAnimJoint179.children[1] = HAnimJoint196;

let HAnimJoint230 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint230.name = "l_cuneonavicular_2";
HAnimJoint230.DEF = "hanim_l_cuneonavicular_2";
HAnimJoint230.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint230.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment231 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment231.name = "l_cuneiform_2";
HAnimSegment231.DEF = "hanim_l_cuneiform_2";
let Transform232 = browser.currentScene.createNode("Transform");
Transform232.translation = new SFVec3f(new float[0.1101,0.0656,-0.0736]);
let Transform233 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape234 = browser.currentScene.createNode("Shape");
Shape234.USE = "HAnimJointShape";
Transform233.children = new MFNode();

Transform233.children[0] = Shape234;

Transform232.children = new MFNode();

Transform232.children[0] = Transform233;

HAnimSegment231.children = new MFNode();

HAnimSegment231.children[0] = Transform232;

let Shape235 = browser.currentScene.createNode("Shape");
let LineSet236 = browser.currentScene.createNode("LineSet");
LineSet236.vertexCount = new MFInt32(new int[2]);
let Coordinate237 = browser.currentScene.createNode("Coordinate");
Coordinate237.point = new MFVec3f(new float[0.1101,0.0656,-0.0736]);
LineSet236.coord = Coordinate237;

//from l_cuneonavicular_2 to l_tarsometatarsal_2 vertices 1
let ColorRGBA238 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA238.USE = "HAnimSegmentLineColorRGBA";
LineSet236.color = ColorRGBA238;

Shape235.geometry = LineSet236;

HAnimSegment231.children[1] = Shape235;

HAnimJoint230.children = new MFNode();

HAnimJoint230.children[0] = HAnimSegment231;

let HAnimJoint239 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint239.name = "l_tarsometatarsal_2";
HAnimJoint239.DEF = "hanim_l_tarsometatarsal_2";
HAnimJoint239.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint239.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment240 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment240.name = "l_metatarsal_2";
HAnimSegment240.DEF = "hanim_l_metatarsal_2";
let Transform241 = browser.currentScene.createNode("Transform");
Transform241.translation = new SFVec3f(new float[0.1101,0.0656,-0.0736]);
let Transform242 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape243 = browser.currentScene.createNode("Shape");
Shape243.USE = "HAnimJointShape";
Transform242.children = new MFNode();

Transform242.children[0] = Shape243;

Transform241.children = new MFNode();

Transform241.children[0] = Transform242;

HAnimSegment240.children = new MFNode();

HAnimSegment240.children[0] = Transform241;

let Shape244 = browser.currentScene.createNode("Shape");
let LineSet245 = browser.currentScene.createNode("LineSet");
LineSet245.vertexCount = new MFInt32(new int[2]);
let Coordinate246 = browser.currentScene.createNode("Coordinate");
Coordinate246.point = new MFVec3f(new float[0.1101,0.0656,-0.0736]);
LineSet245.coord = Coordinate246;

//from l_tarsometatarsal_2 to l_metatarsophalangeal_2 vertices 1
let ColorRGBA247 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA247.USE = "HAnimSegmentLineColorRGBA";
LineSet245.color = ColorRGBA247;

Shape244.geometry = LineSet245;

HAnimSegment240.children[1] = Shape244;

HAnimJoint239.children = new MFNode();

HAnimJoint239.children[0] = HAnimSegment240;

let HAnimJoint248 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint248.name = "l_metatarsophalangeal_2";
HAnimJoint248.DEF = "hanim_l_metatarsophalangeal_2";
HAnimJoint248.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint248.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment249 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment249.name = "l_tarsal_proximal_phalanx_2";
HAnimSegment249.DEF = "hanim_l_tarsal_proximal_phalanx_2";
let Transform250 = browser.currentScene.createNode("Transform");
Transform250.translation = new SFVec3f(new float[0.1101,0.0656,-0.0736]);
let Transform251 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape252 = browser.currentScene.createNode("Shape");
Shape252.USE = "HAnimJointShape";
Transform251.children = new MFNode();

Transform251.children[0] = Shape252;

Transform250.children = new MFNode();

Transform250.children[0] = Transform251;

HAnimSegment249.children = new MFNode();

HAnimSegment249.children[0] = Transform250;

let Shape253 = browser.currentScene.createNode("Shape");
let LineSet254 = browser.currentScene.createNode("LineSet");
LineSet254.vertexCount = new MFInt32(new int[2]);
let Coordinate255 = browser.currentScene.createNode("Coordinate");
Coordinate255.point = new MFVec3f(new float[0.1101,0.0656,-0.0736]);
LineSet254.coord = Coordinate255;

//from l_metatarsophalangeal_2 to l_tarsal_proximal_interphalangeal_2 vertices 1
let ColorRGBA256 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA256.USE = "HAnimSegmentLineColorRGBA";
LineSet254.color = ColorRGBA256;

Shape253.geometry = LineSet254;

HAnimSegment249.children[1] = Shape253;

HAnimJoint248.children = new MFNode();

HAnimJoint248.children[0] = HAnimSegment249;

let HAnimJoint257 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint257.name = "l_tarsal_proximal_interphalangeal_2";
HAnimJoint257.DEF = "hanim_l_tarsal_proximal_interphalangeal_2";
HAnimJoint257.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint257.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment258 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment258.name = "l_tarsal_middle_phalanx_2";
HAnimSegment258.DEF = "hanim_l_tarsal_middle_phalanx_2";
let Transform259 = browser.currentScene.createNode("Transform");
Transform259.translation = new SFVec3f(new float[0.1101,0.0656,-0.0736]);
let Transform260 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape261 = browser.currentScene.createNode("Shape");
Shape261.USE = "HAnimJointShape";
Transform260.children = new MFNode();

Transform260.children[0] = Shape261;

Transform259.children = new MFNode();

Transform259.children[0] = Transform260;

HAnimSegment258.children = new MFNode();

HAnimSegment258.children[0] = Transform259;

let Shape262 = browser.currentScene.createNode("Shape");
let LineSet263 = browser.currentScene.createNode("LineSet");
LineSet263.vertexCount = new MFInt32(new int[2]);
let Coordinate264 = browser.currentScene.createNode("Coordinate");
Coordinate264.point = new MFVec3f(new float[0.1101,0.0656,-0.0736]);
LineSet263.coord = Coordinate264;

//from l_tarsal_proximal_interphalangeal_2 to l_tarsal_distal_interphalangeal_2 vertices 1
let ColorRGBA265 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA265.USE = "HAnimSegmentLineColorRGBA";
LineSet263.color = ColorRGBA265;

Shape262.geometry = LineSet263;

HAnimSegment258.children[1] = Shape262;

let HAnimSite266 = browser.currentScene.createNode("HAnimSite");
HAnimSite266.name = "l_tarsal_distal_phalanx_2_tip";
HAnimSite266.DEF = "hanim_l_tarsal_distal_phalanx_2_tip";
HAnimSite266.translation = new SFVec3f(new float[0.1195,0.0079,0.1433]);
let TouchSensor267 = browser.currentScene.createNode("TouchSensor");
TouchSensor267.description = "HAnimSite l_tarsal_distal_phalanx_2_tip";
HAnimSite266.children = new MFNode();

HAnimSite266.children[0] = TouchSensor267;

let Shape268 = browser.currentScene.createNode("Shape");
Shape268.USE = "HAnimSiteShape";
HAnimSite266.children[1] = Shape268;

HAnimSegment258.children[2] = HAnimSite266;

HAnimJoint257.children = new MFNode();

HAnimJoint257.children[0] = HAnimSegment258;

let HAnimJoint269 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint269.name = "l_tarsal_distal_interphalangeal_2";
HAnimJoint269.DEF = "hanim_l_tarsal_distal_interphalangeal_2";
HAnimJoint269.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint269.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint257.children[1] = HAnimJoint269;

HAnimJoint248.children[1] = HAnimJoint257;

HAnimJoint239.children[1] = HAnimJoint248;

HAnimJoint230.children[1] = HAnimJoint239;

HAnimJoint179.children[2] = HAnimJoint230;

let HAnimJoint270 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint270.name = "l_cuneonavicular_3";
HAnimJoint270.DEF = "hanim_l_cuneonavicular_3";
HAnimJoint270.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint270.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment271 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment271.name = "l_cuneiform_3";
HAnimSegment271.DEF = "hanim_l_cuneiform_3";
let Transform272 = browser.currentScene.createNode("Transform");
Transform272.translation = new SFVec3f(new float[0.1101,0.0656,-0.0736]);
let Transform273 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape274 = browser.currentScene.createNode("Shape");
Shape274.USE = "HAnimJointShape";
Transform273.children = new MFNode();

Transform273.children[0] = Shape274;

Transform272.children = new MFNode();

Transform272.children[0] = Transform273;

HAnimSegment271.children = new MFNode();

HAnimSegment271.children[0] = Transform272;

let Shape275 = browser.currentScene.createNode("Shape");
let LineSet276 = browser.currentScene.createNode("LineSet");
LineSet276.vertexCount = new MFInt32(new int[2]);
let Coordinate277 = browser.currentScene.createNode("Coordinate");
Coordinate277.point = new MFVec3f(new float[0.1101,0.0656,-0.0736]);
LineSet276.coord = Coordinate277;

//from l_cuneonavicular_3 to l_tarsometatarsal_3 vertices 1
let ColorRGBA278 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA278.USE = "HAnimSegmentLineColorRGBA";
LineSet276.color = ColorRGBA278;

Shape275.geometry = LineSet276;

HAnimSegment271.children[1] = Shape275;

HAnimJoint270.children = new MFNode();

HAnimJoint270.children[0] = HAnimSegment271;

let HAnimJoint279 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint279.name = "l_tarsometatarsal_3";
HAnimJoint279.DEF = "hanim_l_tarsometatarsal_3";
HAnimJoint279.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint279.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment280 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment280.name = "l_metatarsal_3";
HAnimSegment280.DEF = "hanim_l_metatarsal_3";
let Transform281 = browser.currentScene.createNode("Transform");
Transform281.translation = new SFVec3f(new float[0.1101,0.0656,-0.0736]);
let Transform282 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape283 = browser.currentScene.createNode("Shape");
Shape283.USE = "HAnimJointShape";
Transform282.children = new MFNode();

Transform282.children[0] = Shape283;

Transform281.children = new MFNode();

Transform281.children[0] = Transform282;

HAnimSegment280.children = new MFNode();

HAnimSegment280.children[0] = Transform281;

let Shape284 = browser.currentScene.createNode("Shape");
let LineSet285 = browser.currentScene.createNode("LineSet");
LineSet285.vertexCount = new MFInt32(new int[2]);
let Coordinate286 = browser.currentScene.createNode("Coordinate");
Coordinate286.point = new MFVec3f(new float[0.1101,0.0656,-0.0736]);
LineSet285.coord = Coordinate286;

//from l_tarsometatarsal_3 to l_metatarsophalangeal_3 vertices 1
let ColorRGBA287 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA287.USE = "HAnimSegmentLineColorRGBA";
LineSet285.color = ColorRGBA287;

Shape284.geometry = LineSet285;

HAnimSegment280.children[1] = Shape284;

HAnimJoint279.children = new MFNode();

HAnimJoint279.children[0] = HAnimSegment280;

let HAnimJoint288 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint288.name = "l_metatarsophalangeal_3";
HAnimJoint288.DEF = "hanim_l_metatarsophalangeal_3";
HAnimJoint288.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint288.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment289 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment289.name = "l_tarsal_proximal_phalanx_3";
HAnimSegment289.DEF = "hanim_l_tarsal_proximal_phalanx_3";
let Transform290 = browser.currentScene.createNode("Transform");
Transform290.translation = new SFVec3f(new float[0.1101,0.0656,-0.0736]);
let Transform291 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape292 = browser.currentScene.createNode("Shape");
Shape292.USE = "HAnimJointShape";
Transform291.children = new MFNode();

Transform291.children[0] = Shape292;

Transform290.children = new MFNode();

Transform290.children[0] = Transform291;

HAnimSegment289.children = new MFNode();

HAnimSegment289.children[0] = Transform290;

let Shape293 = browser.currentScene.createNode("Shape");
let LineSet294 = browser.currentScene.createNode("LineSet");
LineSet294.vertexCount = new MFInt32(new int[2]);
let Coordinate295 = browser.currentScene.createNode("Coordinate");
Coordinate295.point = new MFVec3f(new float[0.1101,0.0656,-0.0736]);
LineSet294.coord = Coordinate295;

//from l_metatarsophalangeal_3 to l_tarsal_proximal_interphalangeal_3 vertices 1
let ColorRGBA296 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA296.USE = "HAnimSegmentLineColorRGBA";
LineSet294.color = ColorRGBA296;

Shape293.geometry = LineSet294;

HAnimSegment289.children[1] = Shape293;

HAnimJoint288.children = new MFNode();

HAnimJoint288.children[0] = HAnimSegment289;

let HAnimJoint297 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint297.name = "l_tarsal_proximal_interphalangeal_3";
HAnimJoint297.DEF = "hanim_l_tarsal_proximal_interphalangeal_3";
HAnimJoint297.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint297.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment298 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment298.name = "l_tarsal_middle_phalanx_3";
HAnimSegment298.DEF = "hanim_l_tarsal_middle_phalanx_3";
let Transform299 = browser.currentScene.createNode("Transform");
Transform299.translation = new SFVec3f(new float[0.1101,0.0656,-0.0736]);
let Transform300 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape301 = browser.currentScene.createNode("Shape");
Shape301.USE = "HAnimJointShape";
Transform300.children = new MFNode();

Transform300.children[0] = Shape301;

Transform299.children = new MFNode();

Transform299.children[0] = Transform300;

HAnimSegment298.children = new MFNode();

HAnimSegment298.children[0] = Transform299;

let Shape302 = browser.currentScene.createNode("Shape");
let LineSet303 = browser.currentScene.createNode("LineSet");
LineSet303.vertexCount = new MFInt32(new int[2]);
let Coordinate304 = browser.currentScene.createNode("Coordinate");
Coordinate304.point = new MFVec3f(new float[0.1101,0.0656,-0.0736]);
LineSet303.coord = Coordinate304;

//from l_tarsal_proximal_interphalangeal_3 to l_tarsal_distal_interphalangeal_3 vertices 1
let ColorRGBA305 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA305.USE = "HAnimSegmentLineColorRGBA";
LineSet303.color = ColorRGBA305;

Shape302.geometry = LineSet303;

HAnimSegment298.children[1] = Shape302;

let HAnimSite306 = browser.currentScene.createNode("HAnimSite");
HAnimSite306.name = "l_tarsal_distal_phalanx_3_tip";
HAnimSite306.DEF = "hanim_l_tarsal_distal_phalanx_3_tip";
let TouchSensor307 = browser.currentScene.createNode("TouchSensor");
TouchSensor307.description = "HAnimSite l_tarsal_distal_phalanx_3_tip";
HAnimSite306.children = new MFNode();

HAnimSite306.children[0] = TouchSensor307;

let Shape308 = browser.currentScene.createNode("Shape");
Shape308.USE = "HAnimSiteShape";
HAnimSite306.children[1] = Shape308;

HAnimSegment298.children[2] = HAnimSite306;

HAnimJoint297.children = new MFNode();

HAnimJoint297.children[0] = HAnimSegment298;

let HAnimJoint309 = browser.currentScene.createNode("HAnimJoint");
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

let HAnimJoint310 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint310.name = "l_calcaneocuboid";
HAnimJoint310.DEF = "hanim_l_calcaneocuboid";
HAnimJoint310.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint310.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment311 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment311.name = "l_calcaneus";
HAnimSegment311.DEF = "hanim_l_calcaneus";
let Transform312 = browser.currentScene.createNode("Transform");
Transform312.translation = new SFVec3f(new float[0.1101,0.0656,-0.0736]);
let Transform313 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape314 = browser.currentScene.createNode("Shape");
Shape314.USE = "HAnimJointShape";
Transform313.children = new MFNode();

Transform313.children[0] = Shape314;

Transform312.children = new MFNode();

Transform312.children[0] = Transform313;

HAnimSegment311.children = new MFNode();

HAnimSegment311.children[0] = Transform312;

let Shape315 = browser.currentScene.createNode("Shape");
let LineSet316 = browser.currentScene.createNode("LineSet");
LineSet316.vertexCount = new MFInt32(new int[2]);
let Coordinate317 = browser.currentScene.createNode("Coordinate");
Coordinate317.point = new MFVec3f(new float[0.1101,0.0656,-0.0736]);
LineSet316.coord = Coordinate317;

//from l_calcaneocuboid to l_transversetarsal vertices 1
let ColorRGBA318 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA318.USE = "HAnimSegmentLineColorRGBA";
LineSet316.color = ColorRGBA318;

Shape315.geometry = LineSet316;

HAnimSegment311.children[1] = Shape315;

HAnimJoint310.children = new MFNode();

HAnimJoint310.children[0] = HAnimSegment311;

let HAnimJoint319 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint319.name = "l_transversetarsal";
HAnimJoint319.DEF = "hanim_l_transversetarsal";
HAnimJoint319.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint319.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment320 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment320.name = "l_cuboid";
HAnimSegment320.DEF = "hanim_l_cuboid";
let Transform321 = browser.currentScene.createNode("Transform");
Transform321.translation = new SFVec3f(new float[0.1101,0.0656,-0.0736]);
let Transform322 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape323 = browser.currentScene.createNode("Shape");
Shape323.USE = "HAnimJointShape";
Transform322.children = new MFNode();

Transform322.children[0] = Shape323;

Transform321.children = new MFNode();

Transform321.children[0] = Transform322;

HAnimSegment320.children = new MFNode();

HAnimSegment320.children[0] = Transform321;

let Shape324 = browser.currentScene.createNode("Shape");
let LineSet325 = browser.currentScene.createNode("LineSet");
LineSet325.vertexCount = new MFInt32(new int[2]);
let Coordinate326 = browser.currentScene.createNode("Coordinate");
Coordinate326.point = new MFVec3f(new float[0.1101,0.0656,-0.0736]);
LineSet325.coord = Coordinate326;

//from l_transversetarsal to l_tarsometatarsal_4 vertices 1
let ColorRGBA327 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA327.USE = "HAnimSegmentLineColorRGBA";
LineSet325.color = ColorRGBA327;

Shape324.geometry = LineSet325;

HAnimSegment320.children[1] = Shape324;

let Shape328 = browser.currentScene.createNode("Shape");
let LineSet329 = browser.currentScene.createNode("LineSet");
LineSet329.vertexCount = new MFInt32(new int[2]);
let Coordinate330 = browser.currentScene.createNode("Coordinate");
Coordinate330.point = new MFVec3f(new float[0.1101,0.0656,-0.0736]);
LineSet329.coord = Coordinate330;

//from l_transversetarsal to l_tarsometatarsal_5 vertices 1
let ColorRGBA331 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA331.USE = "HAnimSegmentLineColorRGBA";
LineSet329.color = ColorRGBA331;

Shape328.geometry = LineSet329;

HAnimSegment320.children[2] = Shape328;

HAnimJoint319.children = new MFNode();

HAnimJoint319.children[0] = HAnimSegment320;

let HAnimJoint332 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint332.name = "l_tarsometatarsal_4";
HAnimJoint332.DEF = "hanim_l_tarsometatarsal_4";
HAnimJoint332.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint332.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment333 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment333.name = "l_metatarsal_4";
HAnimSegment333.DEF = "hanim_l_metatarsal_4";
let Transform334 = browser.currentScene.createNode("Transform");
Transform334.translation = new SFVec3f(new float[0.1101,0.0656,-0.0736]);
let Transform335 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape336 = browser.currentScene.createNode("Shape");
Shape336.USE = "HAnimJointShape";
Transform335.children = new MFNode();

Transform335.children[0] = Shape336;

Transform334.children = new MFNode();

Transform334.children[0] = Transform335;

HAnimSegment333.children = new MFNode();

HAnimSegment333.children[0] = Transform334;

let Shape337 = browser.currentScene.createNode("Shape");
let LineSet338 = browser.currentScene.createNode("LineSet");
LineSet338.vertexCount = new MFInt32(new int[2]);
let Coordinate339 = browser.currentScene.createNode("Coordinate");
Coordinate339.point = new MFVec3f(new float[0.1101,0.0656,-0.0736]);
LineSet338.coord = Coordinate339;

//from l_tarsometatarsal_4 to l_metatarsophalangeal_4 vertices 1
let ColorRGBA340 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA340.USE = "HAnimSegmentLineColorRGBA";
LineSet338.color = ColorRGBA340;

Shape337.geometry = LineSet338;

HAnimSegment333.children[1] = Shape337;

HAnimJoint332.children = new MFNode();

HAnimJoint332.children[0] = HAnimSegment333;

let HAnimJoint341 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint341.name = "l_metatarsophalangeal_4";
HAnimJoint341.DEF = "hanim_l_metatarsophalangeal_4";
HAnimJoint341.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint341.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment342 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment342.name = "l_tarsal_proximal_phalanx_4";
HAnimSegment342.DEF = "hanim_l_tarsal_proximal_phalanx_4";
let Transform343 = browser.currentScene.createNode("Transform");
Transform343.translation = new SFVec3f(new float[0.1101,0.0656,-0.0736]);
let Transform344 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape345 = browser.currentScene.createNode("Shape");
Shape345.USE = "HAnimJointShape";
Transform344.children = new MFNode();

Transform344.children[0] = Shape345;

Transform343.children = new MFNode();

Transform343.children[0] = Transform344;

HAnimSegment342.children = new MFNode();

HAnimSegment342.children[0] = Transform343;

let Shape346 = browser.currentScene.createNode("Shape");
let LineSet347 = browser.currentScene.createNode("LineSet");
LineSet347.vertexCount = new MFInt32(new int[2]);
let Coordinate348 = browser.currentScene.createNode("Coordinate");
Coordinate348.point = new MFVec3f(new float[0.1101,0.0656,-0.0736]);
LineSet347.coord = Coordinate348;

//from l_metatarsophalangeal_4 to l_tarsal_proximal_interphalangeal_4 vertices 1
let ColorRGBA349 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA349.USE = "HAnimSegmentLineColorRGBA";
LineSet347.color = ColorRGBA349;

Shape346.geometry = LineSet347;

HAnimSegment342.children[1] = Shape346;

HAnimJoint341.children = new MFNode();

HAnimJoint341.children[0] = HAnimSegment342;

let HAnimJoint350 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint350.name = "l_tarsal_proximal_interphalangeal_4";
HAnimJoint350.DEF = "hanim_l_tarsal_proximal_interphalangeal_4";
HAnimJoint350.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint350.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment351 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment351.name = "l_tarsal_middle_phalanx_4";
HAnimSegment351.DEF = "hanim_l_tarsal_middle_phalanx_4";
let Transform352 = browser.currentScene.createNode("Transform");
Transform352.translation = new SFVec3f(new float[0.1101,0.0656,-0.0736]);
let Transform353 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape354 = browser.currentScene.createNode("Shape");
Shape354.USE = "HAnimJointShape";
Transform353.children = new MFNode();

Transform353.children[0] = Shape354;

Transform352.children = new MFNode();

Transform352.children[0] = Transform353;

HAnimSegment351.children = new MFNode();

HAnimSegment351.children[0] = Transform352;

let Shape355 = browser.currentScene.createNode("Shape");
let LineSet356 = browser.currentScene.createNode("LineSet");
LineSet356.vertexCount = new MFInt32(new int[2]);
let Coordinate357 = browser.currentScene.createNode("Coordinate");
Coordinate357.point = new MFVec3f(new float[0.1101,0.0656,-0.0736]);
LineSet356.coord = Coordinate357;

//from l_tarsal_proximal_interphalangeal_4 to l_tarsal_distal_interphalangeal_4 vertices 1
let ColorRGBA358 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA358.USE = "HAnimSegmentLineColorRGBA";
LineSet356.color = ColorRGBA358;

Shape355.geometry = LineSet356;

HAnimSegment351.children[1] = Shape355;

let HAnimSite359 = browser.currentScene.createNode("HAnimSite");
HAnimSite359.name = "l_tarsal_distal_phalanx_4_tip";
HAnimSite359.DEF = "hanim_l_tarsal_distal_phalanx_4_tip";
let TouchSensor360 = browser.currentScene.createNode("TouchSensor");
TouchSensor360.description = "HAnimSite l_tarsal_distal_phalanx_4_tip";
HAnimSite359.children = new MFNode();

HAnimSite359.children[0] = TouchSensor360;

let Shape361 = browser.currentScene.createNode("Shape");
Shape361.USE = "HAnimSiteShape";
HAnimSite359.children[1] = Shape361;

HAnimSegment351.children[2] = HAnimSite359;

HAnimJoint350.children = new MFNode();

HAnimJoint350.children[0] = HAnimSegment351;

let HAnimJoint362 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint362.name = "l_tarsal_distal_interphalangeal_4";
HAnimJoint362.DEF = "hanim_l_tarsal_distal_interphalangeal_4";
HAnimJoint362.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint362.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint350.children[1] = HAnimJoint362;

HAnimJoint341.children[1] = HAnimJoint350;

HAnimJoint332.children[1] = HAnimJoint341;

HAnimJoint319.children[1] = HAnimJoint332;

let HAnimJoint363 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint363.name = "l_tarsometatarsal_5";
HAnimJoint363.DEF = "hanim_l_tarsometatarsal_5";
HAnimJoint363.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint363.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment364 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment364.name = "l_metatarsal_5";
HAnimSegment364.DEF = "hanim_l_metatarsal_5";
let Transform365 = browser.currentScene.createNode("Transform");
Transform365.translation = new SFVec3f(new float[0.1101,0.0656,-0.0736]);
let Transform366 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape367 = browser.currentScene.createNode("Shape");
Shape367.USE = "HAnimJointShape";
Transform366.children = new MFNode();

Transform366.children[0] = Shape367;

Transform365.children = new MFNode();

Transform365.children[0] = Transform366;

HAnimSegment364.children = new MFNode();

HAnimSegment364.children[0] = Transform365;

let Shape368 = browser.currentScene.createNode("Shape");
let LineSet369 = browser.currentScene.createNode("LineSet");
LineSet369.vertexCount = new MFInt32(new int[2]);
let Coordinate370 = browser.currentScene.createNode("Coordinate");
Coordinate370.point = new MFVec3f(new float[0.1101,0.0656,-0.0736]);
LineSet369.coord = Coordinate370;

//from l_tarsometatarsal_5 to l_metatarsophalangeal_5 vertices 1
let ColorRGBA371 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA371.USE = "HAnimSegmentLineColorRGBA";
LineSet369.color = ColorRGBA371;

Shape368.geometry = LineSet369;

HAnimSegment364.children[1] = Shape368;

let HAnimSite372 = browser.currentScene.createNode("HAnimSite");
HAnimSite372.name = "l_metatarsal_phalanx_5_pt";
HAnimSite372.DEF = "hanim_l_metatarsal_phalanx_5_pt";
let TouchSensor373 = browser.currentScene.createNode("TouchSensor");
TouchSensor373.description = "HAnimSite l_metatarsal_phalanx_5_pt";
HAnimSite372.children = new MFNode();

HAnimSite372.children[0] = TouchSensor373;

let Shape374 = browser.currentScene.createNode("Shape");
Shape374.USE = "HAnimSiteShape";
HAnimSite372.children[1] = Shape374;

HAnimSegment364.children[2] = HAnimSite372;

HAnimJoint363.children = new MFNode();

HAnimJoint363.children[0] = HAnimSegment364;

let HAnimJoint375 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint375.name = "l_metatarsophalangeal_5";
HAnimJoint375.DEF = "hanim_l_metatarsophalangeal_5";
HAnimJoint375.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint375.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment376 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment376.name = "l_tarsal_proximal_phalanx_5";
HAnimSegment376.DEF = "hanim_l_tarsal_proximal_phalanx_5";
let Transform377 = browser.currentScene.createNode("Transform");
Transform377.translation = new SFVec3f(new float[0.1101,0.0656,-0.0736]);
let Transform378 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape379 = browser.currentScene.createNode("Shape");
Shape379.USE = "HAnimJointShape";
Transform378.children = new MFNode();

Transform378.children[0] = Shape379;

Transform377.children = new MFNode();

Transform377.children[0] = Transform378;

HAnimSegment376.children = new MFNode();

HAnimSegment376.children[0] = Transform377;

let Shape380 = browser.currentScene.createNode("Shape");
let LineSet381 = browser.currentScene.createNode("LineSet");
LineSet381.vertexCount = new MFInt32(new int[2]);
let Coordinate382 = browser.currentScene.createNode("Coordinate");
Coordinate382.point = new MFVec3f(new float[0.1101,0.0656,-0.0736]);
LineSet381.coord = Coordinate382;

//from l_metatarsophalangeal_5 to l_tarsal_proximal_interphalangeal_5 vertices 1
let ColorRGBA383 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA383.USE = "HAnimSegmentLineColorRGBA";
LineSet381.color = ColorRGBA383;

Shape380.geometry = LineSet381;

HAnimSegment376.children[1] = Shape380;

HAnimJoint375.children = new MFNode();

HAnimJoint375.children[0] = HAnimSegment376;

let HAnimJoint384 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint384.name = "l_tarsal_proximal_interphalangeal_5";
HAnimJoint384.DEF = "hanim_l_tarsal_proximal_interphalangeal_5";
HAnimJoint384.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint384.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment385 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment385.name = "l_tarsal_middle_phalanx_5";
HAnimSegment385.DEF = "hanim_l_tarsal_middle_phalanx_5";
let Transform386 = browser.currentScene.createNode("Transform");
Transform386.translation = new SFVec3f(new float[0.1101,0.0656,-0.0736]);
let Transform387 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape388 = browser.currentScene.createNode("Shape");
Shape388.USE = "HAnimJointShape";
Transform387.children = new MFNode();

Transform387.children[0] = Shape388;

Transform386.children = new MFNode();

Transform386.children[0] = Transform387;

HAnimSegment385.children = new MFNode();

HAnimSegment385.children[0] = Transform386;

let Shape389 = browser.currentScene.createNode("Shape");
let LineSet390 = browser.currentScene.createNode("LineSet");
LineSet390.vertexCount = new MFInt32(new int[2]);
let Coordinate391 = browser.currentScene.createNode("Coordinate");
Coordinate391.point = new MFVec3f(new float[0.1101,0.0656,-0.0736]);
LineSet390.coord = Coordinate391;

//from l_tarsal_proximal_interphalangeal_5 to l_tarsal_distal_interphalangeal_5 vertices 1
let ColorRGBA392 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA392.USE = "HAnimSegmentLineColorRGBA";
LineSet390.color = ColorRGBA392;

Shape389.geometry = LineSet390;

HAnimSegment385.children[1] = Shape389;

let HAnimSite393 = browser.currentScene.createNode("HAnimSite");
HAnimSite393.name = "l_tarsal_distal_phalanx_5_tip";
HAnimSite393.DEF = "hanim_l_tarsal_distal_phalanx_5_tip";
let TouchSensor394 = browser.currentScene.createNode("TouchSensor");
TouchSensor394.description = "HAnimSite l_tarsal_distal_phalanx_5_tip";
HAnimSite393.children = new MFNode();

HAnimSite393.children[0] = TouchSensor394;

let Shape395 = browser.currentScene.createNode("Shape");
Shape395.USE = "HAnimSiteShape";
HAnimSite393.children[1] = Shape395;

HAnimSegment385.children[2] = HAnimSite393;

HAnimJoint384.children = new MFNode();

HAnimJoint384.children[0] = HAnimSegment385;

let HAnimJoint396 = browser.currentScene.createNode("HAnimJoint");
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

let HAnimJoint397 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint397.name = "r_hip";
HAnimJoint397.DEF = "hanim_r_hip";
HAnimJoint397.center = new SFVec3f(new float[-0.095,0.9171,0.0029]);
HAnimJoint397.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint397.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment398 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment398.name = "r_thigh";
HAnimSegment398.DEF = "hanim_r_thigh";
let Transform399 = browser.currentScene.createNode("Transform");
Transform399.translation = new SFVec3f(new float[-0.095,0.9171,0.0029]);
let Transform400 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape401 = browser.currentScene.createNode("Shape");
Shape401.USE = "HAnimJointShape";
Transform400.children = new MFNode();

Transform400.children[0] = Shape401;

Transform399.children = new MFNode();

Transform399.children[0] = Transform400;

HAnimSegment398.children = new MFNode();

HAnimSegment398.children[0] = Transform399;

let Shape402 = browser.currentScene.createNode("Shape");
let LineSet403 = browser.currentScene.createNode("LineSet");
LineSet403.vertexCount = new MFInt32(new int[2]);
let Coordinate404 = browser.currentScene.createNode("Coordinate");
Coordinate404.point = new MFVec3f(new float[-0.095,0.9171,0.0029,-0.0867,0.4913,0.0318]);
LineSet403.coord = Coordinate404;

//from r_hip to r_knee vertices 2
let ColorRGBA405 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA405.USE = "HAnimSegmentLineColorRGBA";
LineSet403.color = ColorRGBA405;

Shape402.geometry = LineSet403;

HAnimSegment398.children[1] = Shape402;

let HAnimSite406 = browser.currentScene.createNode("HAnimSite");
HAnimSite406.name = "r_lateral_malleolus_pt";
HAnimSite406.DEF = "hanim_r_lateral_malleolus_pt";
HAnimSite406.translation = new SFVec3f(new float[-0.1006,0.0658,-0.1075]);
let TouchSensor407 = browser.currentScene.createNode("TouchSensor");
TouchSensor407.description = "HAnimSite r_lateral_malleolus_pt";
HAnimSite406.children = new MFNode();

HAnimSite406.children[0] = TouchSensor407;

let Shape408 = browser.currentScene.createNode("Shape");
Shape408.USE = "HAnimSiteShape";
HAnimSite406.children[1] = Shape408;

HAnimSegment398.children[2] = HAnimSite406;

let HAnimSite409 = browser.currentScene.createNode("HAnimSite");
HAnimSite409.name = "r_medial_malleolus_pt";
HAnimSite409.DEF = "hanim_r_medial_malleolus_pt";
HAnimSite409.translation = new SFVec3f(new float[-0.0591,0.076,-0.0928]);
let TouchSensor410 = browser.currentScene.createNode("TouchSensor");
TouchSensor410.description = "HAnimSite r_medial_malleolus_pt";
HAnimSite409.children = new MFNode();

HAnimSite409.children[0] = TouchSensor410;

let Shape411 = browser.currentScene.createNode("Shape");
Shape411.USE = "HAnimSiteShape";
HAnimSite409.children[1] = Shape411;

HAnimSegment398.children[3] = HAnimSite409;

let HAnimSite412 = browser.currentScene.createNode("HAnimSite");
HAnimSite412.name = "r_tibiale_pt";
HAnimSite412.DEF = "hanim_r_tibiale_pt";
let TouchSensor413 = browser.currentScene.createNode("TouchSensor");
TouchSensor413.description = "HAnimSite r_tibiale_pt";
HAnimSite412.children = new MFNode();

HAnimSite412.children[0] = TouchSensor413;

let Shape414 = browser.currentScene.createNode("Shape");
Shape414.USE = "HAnimSiteShape";
HAnimSite412.children[1] = Shape414;

HAnimSegment398.children[4] = HAnimSite412;

HAnimJoint397.children = new MFNode();

HAnimJoint397.children[0] = HAnimSegment398;

let HAnimJoint415 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint415.name = "r_knee";
HAnimJoint415.DEF = "hanim_r_knee";
HAnimJoint415.center = new SFVec3f(new float[-0.0867,0.4913,0.0318]);
HAnimJoint415.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint415.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment416 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment416.name = "r_calf";
HAnimSegment416.DEF = "hanim_r_calf";
let Transform417 = browser.currentScene.createNode("Transform");
Transform417.translation = new SFVec3f(new float[-0.0867,0.4913,0.0318]);
let Transform418 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape419 = browser.currentScene.createNode("Shape");
Shape419.USE = "HAnimJointShape";
Transform418.children = new MFNode();

Transform418.children[0] = Shape419;

Transform417.children = new MFNode();

Transform417.children[0] = Transform418;

HAnimSegment416.children = new MFNode();

HAnimSegment416.children[0] = Transform417;

let Shape420 = browser.currentScene.createNode("Shape");
let LineSet421 = browser.currentScene.createNode("LineSet");
LineSet421.vertexCount = new MFInt32(new int[2]);
let Coordinate422 = browser.currentScene.createNode("Coordinate");
Coordinate422.point = new MFVec3f(new float[-0.0867,0.4913,0.0318,-0.0801,0.0712,-0.0766]);
LineSet421.coord = Coordinate422;

//from r_knee to r_talocrural vertices 2
let ColorRGBA423 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA423.USE = "HAnimSegmentLineColorRGBA";
LineSet421.color = ColorRGBA423;

Shape420.geometry = LineSet421;

HAnimSegment416.children[1] = Shape420;

let HAnimSite424 = browser.currentScene.createNode("HAnimSite");
HAnimSite424.name = "r_calcaneus_posterior_pt";
HAnimSite424.DEF = "hanim_r_calcaneus_posterior_pt";
HAnimSite424.translation = new SFVec3f(new float[-0.0692,0.0297,-0.1221]);
let TouchSensor425 = browser.currentScene.createNode("TouchSensor");
TouchSensor425.description = "HAnimSite r_calcaneus_posterior_pt";
HAnimSite424.children = new MFNode();

HAnimSite424.children[0] = TouchSensor425;

let Shape426 = browser.currentScene.createNode("Shape");
Shape426.USE = "HAnimSiteShape";
HAnimSite424.children[1] = Shape426;

HAnimSegment416.children[2] = HAnimSite424;

let HAnimSite427 = browser.currentScene.createNode("HAnimSite");
HAnimSite427.name = "r_sphyrion_pt";
HAnimSite427.DEF = "hanim_r_sphyrion_pt";
HAnimSite427.translation = new SFVec3f(new float[-0.0603,0.061,-0.1002]);
let TouchSensor428 = browser.currentScene.createNode("TouchSensor");
TouchSensor428.description = "HAnimSite r_sphyrion_pt";
HAnimSite427.children = new MFNode();

HAnimSite427.children[0] = TouchSensor428;

let Shape429 = browser.currentScene.createNode("Shape");
Shape429.USE = "HAnimSiteShape";
HAnimSite427.children[1] = Shape429;

HAnimSegment416.children[3] = HAnimSite427;

HAnimJoint415.children = new MFNode();

HAnimJoint415.children[0] = HAnimSegment416;

let HAnimJoint430 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint430.name = "r_talocrural";
HAnimJoint430.DEF = "hanim_r_talocrural";
HAnimJoint430.center = new SFVec3f(new float[-0.0801,0.0712,-0.0766]);
HAnimJoint430.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint430.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment431 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment431.name = "r_talus";
HAnimSegment431.DEF = "hanim_r_talus";
let Transform432 = browser.currentScene.createNode("Transform");
Transform432.scale = new SFVec3f(new float[0.15,0.15,0.15]);
Transform432.translation = new SFVec3f(new float[-0.05,0.06,-0.025]);
Transform432.rotation = new SFRotation(new float[1,0,0,-1.57]);
//Transform right foot
let Transform433 = browser.currentScene.createNode("Transform");
//Empty Transform right foot
let Shape434 = browser.currentScene.createNode("Shape");
Shape434.USE = "HAnimJointShape";
Transform433.children = new MFNode();

Transform433.children[0] = Shape434;

Transform432.children = new MFNode();

Transform432.children[0] = Transform433;

HAnimSegment431.children = new MFNode();

HAnimSegment431.children[0] = Transform432;

let Shape435 = browser.currentScene.createNode("Shape");
let LineSet436 = browser.currentScene.createNode("LineSet");
LineSet436.vertexCount = new MFInt32(new int[2]);
let Coordinate437 = browser.currentScene.createNode("Coordinate");
Coordinate437.point = new MFVec3f(new float[-0.0801,0.0712,-0.0766,-0.0801,0.0712,-0.0766]);
LineSet436.coord = Coordinate437;

//from r_talocrural to r_talocalcaneonavicular vertices 2
let ColorRGBA438 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA438.USE = "HAnimSegmentLineColorRGBA";
LineSet436.color = ColorRGBA438;

Shape435.geometry = LineSet436;

HAnimSegment431.children[1] = Shape435;

let Shape439 = browser.currentScene.createNode("Shape");
let LineSet440 = browser.currentScene.createNode("LineSet");
LineSet440.vertexCount = new MFInt32(new int[2]);
let Coordinate441 = browser.currentScene.createNode("Coordinate");
Coordinate441.point = new MFVec3f(new float[-0.0801,0.0712,-0.0766,-0.0801,0.0712,-0.0766]);
LineSet440.coord = Coordinate441;

//from r_talocrural to r_calcaneocuboid vertices 2
let ColorRGBA442 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA442.USE = "HAnimSegmentLineColorRGBA";
LineSet440.color = ColorRGBA442;

Shape439.geometry = LineSet440;

HAnimSegment431.children[2] = Shape439;

HAnimJoint430.children = new MFNode();

HAnimJoint430.children[0] = HAnimSegment431;

let HAnimJoint443 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint443.name = "r_talocalcaneonavicular";
HAnimJoint443.DEF = "hanim_r_talocalcaneonavicular";
HAnimJoint443.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint443.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment444 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment444.name = "r_navicular";
HAnimSegment444.DEF = "hanim_r_navicular";
let Transform445 = browser.currentScene.createNode("Transform");
Transform445.translation = new SFVec3f(new float[-0.0801,0.0712,-0.0766]);
let Transform446 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape447 = browser.currentScene.createNode("Shape");
Shape447.USE = "HAnimJointShape";
Transform446.children = new MFNode();

Transform446.children[0] = Shape447;

Transform445.children = new MFNode();

Transform445.children[0] = Transform446;

HAnimSegment444.children = new MFNode();

HAnimSegment444.children[0] = Transform445;

let Shape448 = browser.currentScene.createNode("Shape");
let LineSet449 = browser.currentScene.createNode("LineSet");
LineSet449.vertexCount = new MFInt32(new int[2]);
let Coordinate450 = browser.currentScene.createNode("Coordinate");
Coordinate450.point = new MFVec3f(new float[-0.0801,0.0712,-0.0766]);
LineSet449.coord = Coordinate450;

//from r_talocalcaneonavicular to r_cuneonavicular_1 vertices 1
let ColorRGBA451 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA451.USE = "HAnimSegmentLineColorRGBA";
LineSet449.color = ColorRGBA451;

Shape448.geometry = LineSet449;

HAnimSegment444.children[1] = Shape448;

let Shape452 = browser.currentScene.createNode("Shape");
let LineSet453 = browser.currentScene.createNode("LineSet");
LineSet453.vertexCount = new MFInt32(new int[2]);
let Coordinate454 = browser.currentScene.createNode("Coordinate");
Coordinate454.point = new MFVec3f(new float[-0.0801,0.0712,-0.0766]);
LineSet453.coord = Coordinate454;

//from r_talocalcaneonavicular to r_cuneonavicular_2 vertices 1
let ColorRGBA455 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA455.USE = "HAnimSegmentLineColorRGBA";
LineSet453.color = ColorRGBA455;

Shape452.geometry = LineSet453;

HAnimSegment444.children[2] = Shape452;

let Shape456 = browser.currentScene.createNode("Shape");
let LineSet457 = browser.currentScene.createNode("LineSet");
LineSet457.vertexCount = new MFInt32(new int[2]);
let Coordinate458 = browser.currentScene.createNode("Coordinate");
Coordinate458.point = new MFVec3f(new float[-0.0801,0.0712,-0.0766]);
LineSet457.coord = Coordinate458;

//from r_talocalcaneonavicular to r_cuneonavicular_3 vertices 1
let ColorRGBA459 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA459.USE = "HAnimSegmentLineColorRGBA";
LineSet457.color = ColorRGBA459;

Shape456.geometry = LineSet457;

HAnimSegment444.children[3] = Shape456;

HAnimJoint443.children = new MFNode();

HAnimJoint443.children[0] = HAnimSegment444;

let HAnimJoint460 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint460.name = "r_cuneonavicular_1";
HAnimJoint460.DEF = "hanim_r_cuneonavicular_1";
HAnimJoint460.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint460.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment461 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment461.name = "r_cuneiform_1";
HAnimSegment461.DEF = "hanim_r_cuneiform_1";
let Transform462 = browser.currentScene.createNode("Transform");
Transform462.translation = new SFVec3f(new float[-0.0801,0.0712,-0.0766]);
let Transform463 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape464 = browser.currentScene.createNode("Shape");
Shape464.USE = "HAnimJointShape";
Transform463.children = new MFNode();

Transform463.children[0] = Shape464;

Transform462.children = new MFNode();

Transform462.children[0] = Transform463;

HAnimSegment461.children = new MFNode();

HAnimSegment461.children[0] = Transform462;

let Shape465 = browser.currentScene.createNode("Shape");
let LineSet466 = browser.currentScene.createNode("LineSet");
LineSet466.vertexCount = new MFInt32(new int[2]);
let Coordinate467 = browser.currentScene.createNode("Coordinate");
Coordinate467.point = new MFVec3f(new float[-0.0801,0.0712,-0.0766]);
LineSet466.coord = Coordinate467;

//from r_cuneonavicular_1 to r_tarsometatarsal_1 vertices 1
let ColorRGBA468 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA468.USE = "HAnimSegmentLineColorRGBA";
LineSet466.color = ColorRGBA468;

Shape465.geometry = LineSet466;

HAnimSegment461.children[1] = Shape465;

HAnimJoint460.children = new MFNode();

HAnimJoint460.children[0] = HAnimSegment461;

let HAnimJoint469 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint469.name = "r_tarsometatarsal_1";
HAnimJoint469.DEF = "hanim_r_tarsometatarsal_1";
HAnimJoint469.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint469.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment470 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment470.name = "r_metatarsal_1";
HAnimSegment470.DEF = "hanim_r_metatarsal_1";
let Transform471 = browser.currentScene.createNode("Transform");
Transform471.translation = new SFVec3f(new float[-0.0801,0.0712,-0.0766]);
let Transform472 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape473 = browser.currentScene.createNode("Shape");
Shape473.USE = "HAnimJointShape";
Transform472.children = new MFNode();

Transform472.children[0] = Shape473;

Transform471.children = new MFNode();

Transform471.children[0] = Transform472;

HAnimSegment470.children = new MFNode();

HAnimSegment470.children[0] = Transform471;

let Shape474 = browser.currentScene.createNode("Shape");
let LineSet475 = browser.currentScene.createNode("LineSet");
LineSet475.vertexCount = new MFInt32(new int[2]);
let Coordinate476 = browser.currentScene.createNode("Coordinate");
Coordinate476.point = new MFVec3f(new float[-0.0801,0.0712,-0.0766]);
LineSet475.coord = Coordinate476;

//from r_tarsometatarsal_1 to r_metatarsophalangeal_1 vertices 1
let ColorRGBA477 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA477.USE = "HAnimSegmentLineColorRGBA";
LineSet475.color = ColorRGBA477;

Shape474.geometry = LineSet475;

HAnimSegment470.children[1] = Shape474;

let HAnimSite478 = browser.currentScene.createNode("HAnimSite");
HAnimSite478.name = "r_metatarsal_phalanx_1_pt";
HAnimSite478.DEF = "hanim_r_metatarsal_phalanx_1_pt";
let TouchSensor479 = browser.currentScene.createNode("TouchSensor");
TouchSensor479.description = "HAnimSite r_metatarsal_phalanx_1_pt";
HAnimSite478.children = new MFNode();

HAnimSite478.children[0] = TouchSensor479;

let Shape480 = browser.currentScene.createNode("Shape");
Shape480.USE = "HAnimSiteShape";
HAnimSite478.children[1] = Shape480;

HAnimSegment470.children[2] = HAnimSite478;

HAnimJoint469.children = new MFNode();

HAnimJoint469.children[0] = HAnimSegment470;

let HAnimJoint481 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint481.name = "r_metatarsophalangeal_1";
HAnimJoint481.DEF = "hanim_r_metatarsophalangeal_1";
HAnimJoint481.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint481.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment482 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment482.name = "r_tarsal_proximal_phalanx_1";
HAnimSegment482.DEF = "hanim_r_tarsal_proximal_phalanx_1";
let Transform483 = browser.currentScene.createNode("Transform");
Transform483.translation = new SFVec3f(new float[-0.0801,0.0712,-0.0766]);
let Transform484 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape485 = browser.currentScene.createNode("Shape");
Shape485.USE = "HAnimJointShape";
Transform484.children = new MFNode();

Transform484.children[0] = Shape485;

Transform483.children = new MFNode();

Transform483.children[0] = Transform484;

HAnimSegment482.children = new MFNode();

HAnimSegment482.children[0] = Transform483;

let Shape486 = browser.currentScene.createNode("Shape");
let LineSet487 = browser.currentScene.createNode("LineSet");
LineSet487.vertexCount = new MFInt32(new int[2]);
let Coordinate488 = browser.currentScene.createNode("Coordinate");
Coordinate488.point = new MFVec3f(new float[-0.0801,0.0712,-0.0766]);
LineSet487.coord = Coordinate488;

//from r_metatarsophalangeal_1 to r_tarsal_interphalangeal_1 vertices 1
let ColorRGBA489 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA489.USE = "HAnimSegmentLineColorRGBA";
LineSet487.color = ColorRGBA489;

Shape486.geometry = LineSet487;

HAnimSegment482.children[1] = Shape486;

let HAnimSite490 = browser.currentScene.createNode("HAnimSite");
HAnimSite490.name = "r_tarsal_distal_phalanx_1_tip";
HAnimSite490.DEF = "hanim_r_tarsal_distal_phalanx_1_tip";
let TouchSensor491 = browser.currentScene.createNode("TouchSensor");
TouchSensor491.description = "HAnimSite r_tarsal_distal_phalanx_1_tip";
HAnimSite490.children = new MFNode();

HAnimSite490.children[0] = TouchSensor491;

let Shape492 = browser.currentScene.createNode("Shape");
Shape492.USE = "HAnimSiteShape";
HAnimSite490.children[1] = Shape492;

HAnimSegment482.children[2] = HAnimSite490;

HAnimJoint481.children = new MFNode();

HAnimJoint481.children[0] = HAnimSegment482;

let HAnimJoint493 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint493.name = "r_tarsal_interphalangeal_1";
HAnimJoint493.DEF = "hanim_r_tarsal_interphalangeal_1";
HAnimJoint493.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint493.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint481.children[1] = HAnimJoint493;

HAnimJoint469.children[1] = HAnimJoint481;

HAnimJoint460.children[1] = HAnimJoint469;

HAnimJoint443.children[1] = HAnimJoint460;

let HAnimJoint494 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint494.name = "r_cuneonavicular_2";
HAnimJoint494.DEF = "hanim_r_cuneonavicular_2";
HAnimJoint494.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint494.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment495 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment495.name = "r_cuneiform_2";
HAnimSegment495.DEF = "hanim_r_cuneiform_2";
let Transform496 = browser.currentScene.createNode("Transform");
Transform496.translation = new SFVec3f(new float[-0.0801,0.0712,-0.0766]);
let Transform497 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape498 = browser.currentScene.createNode("Shape");
Shape498.USE = "HAnimJointShape";
Transform497.children = new MFNode();

Transform497.children[0] = Shape498;

Transform496.children = new MFNode();

Transform496.children[0] = Transform497;

HAnimSegment495.children = new MFNode();

HAnimSegment495.children[0] = Transform496;

let Shape499 = browser.currentScene.createNode("Shape");
let LineSet500 = browser.currentScene.createNode("LineSet");
LineSet500.vertexCount = new MFInt32(new int[2]);
let Coordinate501 = browser.currentScene.createNode("Coordinate");
Coordinate501.point = new MFVec3f(new float[-0.0801,0.0712,-0.0766]);
LineSet500.coord = Coordinate501;

//from r_cuneonavicular_2 to r_tarsometatarsal_2 vertices 1
let ColorRGBA502 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA502.USE = "HAnimSegmentLineColorRGBA";
LineSet500.color = ColorRGBA502;

Shape499.geometry = LineSet500;

HAnimSegment495.children[1] = Shape499;

HAnimJoint494.children = new MFNode();

HAnimJoint494.children[0] = HAnimSegment495;

let HAnimJoint503 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint503.name = "r_tarsometatarsal_2";
HAnimJoint503.DEF = "hanim_r_tarsometatarsal_2";
HAnimJoint503.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint503.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment504 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment504.name = "r_metatarsal_2";
HAnimSegment504.DEF = "hanim_r_metatarsal_2";
let Transform505 = browser.currentScene.createNode("Transform");
Transform505.translation = new SFVec3f(new float[-0.0801,0.0712,-0.0766]);
let Transform506 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape507 = browser.currentScene.createNode("Shape");
Shape507.USE = "HAnimJointShape";
Transform506.children = new MFNode();

Transform506.children[0] = Shape507;

Transform505.children = new MFNode();

Transform505.children[0] = Transform506;

HAnimSegment504.children = new MFNode();

HAnimSegment504.children[0] = Transform505;

let Shape508 = browser.currentScene.createNode("Shape");
let LineSet509 = browser.currentScene.createNode("LineSet");
LineSet509.vertexCount = new MFInt32(new int[2]);
let Coordinate510 = browser.currentScene.createNode("Coordinate");
Coordinate510.point = new MFVec3f(new float[-0.0801,0.0712,-0.0766]);
LineSet509.coord = Coordinate510;

//from r_tarsometatarsal_2 to r_metatarsophalangeal_2 vertices 1
let ColorRGBA511 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA511.USE = "HAnimSegmentLineColorRGBA";
LineSet509.color = ColorRGBA511;

Shape508.geometry = LineSet509;

HAnimSegment504.children[1] = Shape508;

HAnimJoint503.children = new MFNode();

HAnimJoint503.children[0] = HAnimSegment504;

let HAnimJoint512 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint512.name = "r_metatarsophalangeal_2";
HAnimJoint512.DEF = "hanim_r_metatarsophalangeal_2";
HAnimJoint512.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint512.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment513 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment513.name = "r_tarsal_proximal_phalanx_2";
HAnimSegment513.DEF = "hanim_r_tarsal_proximal_phalanx_2";
let Transform514 = browser.currentScene.createNode("Transform");
Transform514.translation = new SFVec3f(new float[-0.0801,0.0712,-0.0766]);
let Transform515 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape516 = browser.currentScene.createNode("Shape");
Shape516.USE = "HAnimJointShape";
Transform515.children = new MFNode();

Transform515.children[0] = Shape516;

Transform514.children = new MFNode();

Transform514.children[0] = Transform515;

HAnimSegment513.children = new MFNode();

HAnimSegment513.children[0] = Transform514;

let Shape517 = browser.currentScene.createNode("Shape");
let LineSet518 = browser.currentScene.createNode("LineSet");
LineSet518.vertexCount = new MFInt32(new int[2]);
let Coordinate519 = browser.currentScene.createNode("Coordinate");
Coordinate519.point = new MFVec3f(new float[-0.0801,0.0712,-0.0766]);
LineSet518.coord = Coordinate519;

//from r_metatarsophalangeal_2 to r_tarsal_proximal_interphalangeal_2 vertices 1
let ColorRGBA520 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA520.USE = "HAnimSegmentLineColorRGBA";
LineSet518.color = ColorRGBA520;

Shape517.geometry = LineSet518;

HAnimSegment513.children[1] = Shape517;

HAnimJoint512.children = new MFNode();

HAnimJoint512.children[0] = HAnimSegment513;

let HAnimJoint521 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint521.name = "r_tarsal_proximal_interphalangeal_2";
HAnimJoint521.DEF = "hanim_r_tarsal_proximal_interphalangeal_2";
HAnimJoint521.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint521.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment522 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment522.name = "r_tarsal_middle_phalanx_2";
HAnimSegment522.DEF = "hanim_r_tarsal_middle_phalanx_2";
let Transform523 = browser.currentScene.createNode("Transform");
Transform523.translation = new SFVec3f(new float[-0.0801,0.0712,-0.0766]);
let Transform524 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape525 = browser.currentScene.createNode("Shape");
Shape525.USE = "HAnimJointShape";
Transform524.children = new MFNode();

Transform524.children[0] = Shape525;

Transform523.children = new MFNode();

Transform523.children[0] = Transform524;

HAnimSegment522.children = new MFNode();

HAnimSegment522.children[0] = Transform523;

let Shape526 = browser.currentScene.createNode("Shape");
let LineSet527 = browser.currentScene.createNode("LineSet");
LineSet527.vertexCount = new MFInt32(new int[2]);
let Coordinate528 = browser.currentScene.createNode("Coordinate");
Coordinate528.point = new MFVec3f(new float[-0.0801,0.0712,-0.0766]);
LineSet527.coord = Coordinate528;

//from r_tarsal_proximal_interphalangeal_2 to r_tarsal_distal_interphalangeal_2 vertices 1
let ColorRGBA529 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA529.USE = "HAnimSegmentLineColorRGBA";
LineSet527.color = ColorRGBA529;

Shape526.geometry = LineSet527;

HAnimSegment522.children[1] = Shape526;

let HAnimSite530 = browser.currentScene.createNode("HAnimSite");
HAnimSite530.name = "r_tarsal_distal_phalanx_2_tip";
HAnimSite530.DEF = "hanim_r_tarsal_distal_phalanx_2_tip";
HAnimSite530.translation = new SFVec3f(new float[-0.0883,0.0134,0.1383]);
let TouchSensor531 = browser.currentScene.createNode("TouchSensor");
TouchSensor531.description = "HAnimSite r_tarsal_distal_phalanx_2_tip";
HAnimSite530.children = new MFNode();

HAnimSite530.children[0] = TouchSensor531;

let Shape532 = browser.currentScene.createNode("Shape");
Shape532.USE = "HAnimSiteShape";
HAnimSite530.children[1] = Shape532;

HAnimSegment522.children[2] = HAnimSite530;

HAnimJoint521.children = new MFNode();

HAnimJoint521.children[0] = HAnimSegment522;

let HAnimJoint533 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint533.name = "r_tarsal_distal_interphalangeal_2";
HAnimJoint533.DEF = "hanim_r_tarsal_distal_interphalangeal_2";
HAnimJoint533.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint533.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint521.children[1] = HAnimJoint533;

HAnimJoint512.children[1] = HAnimJoint521;

HAnimJoint503.children[1] = HAnimJoint512;

HAnimJoint494.children[1] = HAnimJoint503;

HAnimJoint443.children[2] = HAnimJoint494;

let HAnimJoint534 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint534.name = "r_cuneonavicular_3";
HAnimJoint534.DEF = "hanim_r_cuneonavicular_3";
HAnimJoint534.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint534.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment535 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment535.name = "r_cuneiform_3";
HAnimSegment535.DEF = "hanim_r_cuneiform_3";
let Transform536 = browser.currentScene.createNode("Transform");
Transform536.translation = new SFVec3f(new float[-0.0801,0.0712,-0.0766]);
let Transform537 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape538 = browser.currentScene.createNode("Shape");
Shape538.USE = "HAnimJointShape";
Transform537.children = new MFNode();

Transform537.children[0] = Shape538;

Transform536.children = new MFNode();

Transform536.children[0] = Transform537;

HAnimSegment535.children = new MFNode();

HAnimSegment535.children[0] = Transform536;

let Shape539 = browser.currentScene.createNode("Shape");
let LineSet540 = browser.currentScene.createNode("LineSet");
LineSet540.vertexCount = new MFInt32(new int[2]);
let Coordinate541 = browser.currentScene.createNode("Coordinate");
Coordinate541.point = new MFVec3f(new float[-0.0801,0.0712,-0.0766]);
LineSet540.coord = Coordinate541;

//from r_cuneonavicular_3 to r_tarsometatarsal_3 vertices 1
let ColorRGBA542 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA542.USE = "HAnimSegmentLineColorRGBA";
LineSet540.color = ColorRGBA542;

Shape539.geometry = LineSet540;

HAnimSegment535.children[1] = Shape539;

HAnimJoint534.children = new MFNode();

HAnimJoint534.children[0] = HAnimSegment535;

let HAnimJoint543 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint543.name = "r_tarsometatarsal_3";
HAnimJoint543.DEF = "hanim_r_tarsometatarsal_3";
HAnimJoint543.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint543.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment544 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment544.name = "r_metatarsal_3";
HAnimSegment544.DEF = "hanim_r_metatarsal_3";
let Transform545 = browser.currentScene.createNode("Transform");
Transform545.translation = new SFVec3f(new float[-0.0801,0.0712,-0.0766]);
let Transform546 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape547 = browser.currentScene.createNode("Shape");
Shape547.USE = "HAnimJointShape";
Transform546.children = new MFNode();

Transform546.children[0] = Shape547;

Transform545.children = new MFNode();

Transform545.children[0] = Transform546;

HAnimSegment544.children = new MFNode();

HAnimSegment544.children[0] = Transform545;

let Shape548 = browser.currentScene.createNode("Shape");
let LineSet549 = browser.currentScene.createNode("LineSet");
LineSet549.vertexCount = new MFInt32(new int[2]);
let Coordinate550 = browser.currentScene.createNode("Coordinate");
Coordinate550.point = new MFVec3f(new float[-0.0801,0.0712,-0.0766]);
LineSet549.coord = Coordinate550;

//from r_tarsometatarsal_3 to r_metatarsophalangeal_3 vertices 1
let ColorRGBA551 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA551.USE = "HAnimSegmentLineColorRGBA";
LineSet549.color = ColorRGBA551;

Shape548.geometry = LineSet549;

HAnimSegment544.children[1] = Shape548;

HAnimJoint543.children = new MFNode();

HAnimJoint543.children[0] = HAnimSegment544;

let HAnimJoint552 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint552.name = "r_metatarsophalangeal_3";
HAnimJoint552.DEF = "hanim_r_metatarsophalangeal_3";
HAnimJoint552.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint552.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment553 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment553.name = "r_tarsal_proximal_phalanx_3";
HAnimSegment553.DEF = "hanim_r_tarsal_proximal_phalanx_3";
let Transform554 = browser.currentScene.createNode("Transform");
Transform554.translation = new SFVec3f(new float[-0.0801,0.0712,-0.0766]);
let Transform555 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape556 = browser.currentScene.createNode("Shape");
Shape556.USE = "HAnimJointShape";
Transform555.children = new MFNode();

Transform555.children[0] = Shape556;

Transform554.children = new MFNode();

Transform554.children[0] = Transform555;

HAnimSegment553.children = new MFNode();

HAnimSegment553.children[0] = Transform554;

let Shape557 = browser.currentScene.createNode("Shape");
let LineSet558 = browser.currentScene.createNode("LineSet");
LineSet558.vertexCount = new MFInt32(new int[2]);
let Coordinate559 = browser.currentScene.createNode("Coordinate");
Coordinate559.point = new MFVec3f(new float[-0.0801,0.0712,-0.0766]);
LineSet558.coord = Coordinate559;

//from r_metatarsophalangeal_3 to r_tarsal_proximal_interphalangeal_3 vertices 1
let ColorRGBA560 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA560.USE = "HAnimSegmentLineColorRGBA";
LineSet558.color = ColorRGBA560;

Shape557.geometry = LineSet558;

HAnimSegment553.children[1] = Shape557;

HAnimJoint552.children = new MFNode();

HAnimJoint552.children[0] = HAnimSegment553;

let HAnimJoint561 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint561.name = "r_tarsal_proximal_interphalangeal_3";
HAnimJoint561.DEF = "hanim_r_tarsal_proximal_interphalangeal_3";
HAnimJoint561.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint561.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment562 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment562.name = "r_tarsal_middle_phalanx_3";
HAnimSegment562.DEF = "hanim_r_tarsal_middle_phalanx_3";
let Transform563 = browser.currentScene.createNode("Transform");
Transform563.translation = new SFVec3f(new float[-0.0801,0.0712,-0.0766]);
let Transform564 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape565 = browser.currentScene.createNode("Shape");
Shape565.USE = "HAnimJointShape";
Transform564.children = new MFNode();

Transform564.children[0] = Shape565;

Transform563.children = new MFNode();

Transform563.children[0] = Transform564;

HAnimSegment562.children = new MFNode();

HAnimSegment562.children[0] = Transform563;

let Shape566 = browser.currentScene.createNode("Shape");
let LineSet567 = browser.currentScene.createNode("LineSet");
LineSet567.vertexCount = new MFInt32(new int[2]);
let Coordinate568 = browser.currentScene.createNode("Coordinate");
Coordinate568.point = new MFVec3f(new float[-0.0801,0.0712,-0.0766]);
LineSet567.coord = Coordinate568;

//from r_tarsal_proximal_interphalangeal_3 to r_tarsal_distal_interphalangeal_3 vertices 1
let ColorRGBA569 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA569.USE = "HAnimSegmentLineColorRGBA";
LineSet567.color = ColorRGBA569;

Shape566.geometry = LineSet567;

HAnimSegment562.children[1] = Shape566;

let HAnimSite570 = browser.currentScene.createNode("HAnimSite");
HAnimSite570.name = "r_tarsal_distal_phalanx_3_tip";
HAnimSite570.DEF = "hanim_r_tarsal_distal_phalanx_3_tip";
let TouchSensor571 = browser.currentScene.createNode("TouchSensor");
TouchSensor571.description = "HAnimSite r_tarsal_distal_phalanx_3_tip";
HAnimSite570.children = new MFNode();

HAnimSite570.children[0] = TouchSensor571;

let Shape572 = browser.currentScene.createNode("Shape");
Shape572.USE = "HAnimSiteShape";
HAnimSite570.children[1] = Shape572;

HAnimSegment562.children[2] = HAnimSite570;

HAnimJoint561.children = new MFNode();

HAnimJoint561.children[0] = HAnimSegment562;

let HAnimJoint573 = browser.currentScene.createNode("HAnimJoint");
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

let HAnimJoint574 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint574.name = "r_calcaneocuboid";
HAnimJoint574.DEF = "hanim_r_calcaneocuboid";
HAnimJoint574.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint574.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment575 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment575.name = "r_calcaneus";
HAnimSegment575.DEF = "hanim_r_calcaneus";
let Transform576 = browser.currentScene.createNode("Transform");
Transform576.translation = new SFVec3f(new float[-0.0801,0.0712,-0.0766]);
let Transform577 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape578 = browser.currentScene.createNode("Shape");
Shape578.USE = "HAnimJointShape";
Transform577.children = new MFNode();

Transform577.children[0] = Shape578;

Transform576.children = new MFNode();

Transform576.children[0] = Transform577;

HAnimSegment575.children = new MFNode();

HAnimSegment575.children[0] = Transform576;

let Shape579 = browser.currentScene.createNode("Shape");
let LineSet580 = browser.currentScene.createNode("LineSet");
LineSet580.vertexCount = new MFInt32(new int[2]);
let Coordinate581 = browser.currentScene.createNode("Coordinate");
Coordinate581.point = new MFVec3f(new float[-0.0801,0.0712,-0.0766]);
LineSet580.coord = Coordinate581;

//from r_calcaneocuboid to r_transversetarsal vertices 1
let ColorRGBA582 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA582.USE = "HAnimSegmentLineColorRGBA";
LineSet580.color = ColorRGBA582;

Shape579.geometry = LineSet580;

HAnimSegment575.children[1] = Shape579;

HAnimJoint574.children = new MFNode();

HAnimJoint574.children[0] = HAnimSegment575;

let HAnimJoint583 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint583.name = "r_transversetarsal";
HAnimJoint583.DEF = "hanim_r_transversetarsal";
HAnimJoint583.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint583.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment584 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment584.name = "r_cuboid";
HAnimSegment584.DEF = "hanim_r_cuboid";
let Transform585 = browser.currentScene.createNode("Transform");
Transform585.translation = new SFVec3f(new float[-0.0801,0.0712,-0.0766]);
let Transform586 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape587 = browser.currentScene.createNode("Shape");
Shape587.USE = "HAnimJointShape";
Transform586.children = new MFNode();

Transform586.children[0] = Shape587;

Transform585.children = new MFNode();

Transform585.children[0] = Transform586;

HAnimSegment584.children = new MFNode();

HAnimSegment584.children[0] = Transform585;

let Shape588 = browser.currentScene.createNode("Shape");
let LineSet589 = browser.currentScene.createNode("LineSet");
LineSet589.vertexCount = new MFInt32(new int[2]);
let Coordinate590 = browser.currentScene.createNode("Coordinate");
Coordinate590.point = new MFVec3f(new float[-0.0801,0.0712,-0.0766]);
LineSet589.coord = Coordinate590;

//from r_transversetarsal to r_tarsometatarsal_4 vertices 1
let ColorRGBA591 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA591.USE = "HAnimSegmentLineColorRGBA";
LineSet589.color = ColorRGBA591;

Shape588.geometry = LineSet589;

HAnimSegment584.children[1] = Shape588;

let Shape592 = browser.currentScene.createNode("Shape");
let LineSet593 = browser.currentScene.createNode("LineSet");
LineSet593.vertexCount = new MFInt32(new int[2]);
let Coordinate594 = browser.currentScene.createNode("Coordinate");
Coordinate594.point = new MFVec3f(new float[-0.0801,0.0712,-0.0766]);
LineSet593.coord = Coordinate594;

//from r_transversetarsal to r_tarsometatarsal_5 vertices 1
let ColorRGBA595 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA595.USE = "HAnimSegmentLineColorRGBA";
LineSet593.color = ColorRGBA595;

Shape592.geometry = LineSet593;

HAnimSegment584.children[2] = Shape592;

HAnimJoint583.children = new MFNode();

HAnimJoint583.children[0] = HAnimSegment584;

let HAnimJoint596 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint596.name = "r_tarsometatarsal_4";
HAnimJoint596.DEF = "hanim_r_tarsometatarsal_4";
HAnimJoint596.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint596.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment597 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment597.name = "r_metatarsal_4";
HAnimSegment597.DEF = "hanim_r_metatarsal_4";
let Transform598 = browser.currentScene.createNode("Transform");
Transform598.translation = new SFVec3f(new float[-0.0801,0.0712,-0.0766]);
let Transform599 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape600 = browser.currentScene.createNode("Shape");
Shape600.USE = "HAnimJointShape";
Transform599.children = new MFNode();

Transform599.children[0] = Shape600;

Transform598.children = new MFNode();

Transform598.children[0] = Transform599;

HAnimSegment597.children = new MFNode();

HAnimSegment597.children[0] = Transform598;

let Shape601 = browser.currentScene.createNode("Shape");
let LineSet602 = browser.currentScene.createNode("LineSet");
LineSet602.vertexCount = new MFInt32(new int[2]);
let Coordinate603 = browser.currentScene.createNode("Coordinate");
Coordinate603.point = new MFVec3f(new float[-0.0801,0.0712,-0.0766]);
LineSet602.coord = Coordinate603;

//from r_tarsometatarsal_4 to r_metatarsophalangeal_4 vertices 1
let ColorRGBA604 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA604.USE = "HAnimSegmentLineColorRGBA";
LineSet602.color = ColorRGBA604;

Shape601.geometry = LineSet602;

HAnimSegment597.children[1] = Shape601;

HAnimJoint596.children = new MFNode();

HAnimJoint596.children[0] = HAnimSegment597;

let HAnimJoint605 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint605.name = "r_metatarsophalangeal_4";
HAnimJoint605.DEF = "hanim_r_metatarsophalangeal_4";
HAnimJoint605.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint605.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment606 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment606.name = "r_tarsal_proximal_phalanx_4";
HAnimSegment606.DEF = "hanim_r_tarsal_proximal_phalanx_4";
let Transform607 = browser.currentScene.createNode("Transform");
Transform607.translation = new SFVec3f(new float[-0.0801,0.0712,-0.0766]);
let Transform608 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape609 = browser.currentScene.createNode("Shape");
Shape609.USE = "HAnimJointShape";
Transform608.children = new MFNode();

Transform608.children[0] = Shape609;

Transform607.children = new MFNode();

Transform607.children[0] = Transform608;

HAnimSegment606.children = new MFNode();

HAnimSegment606.children[0] = Transform607;

let Shape610 = browser.currentScene.createNode("Shape");
let LineSet611 = browser.currentScene.createNode("LineSet");
LineSet611.vertexCount = new MFInt32(new int[2]);
let Coordinate612 = browser.currentScene.createNode("Coordinate");
Coordinate612.point = new MFVec3f(new float[-0.0801,0.0712,-0.0766]);
LineSet611.coord = Coordinate612;

//from r_metatarsophalangeal_4 to r_tarsal_proximal_interphalangeal_4 vertices 1
let ColorRGBA613 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA613.USE = "HAnimSegmentLineColorRGBA";
LineSet611.color = ColorRGBA613;

Shape610.geometry = LineSet611;

HAnimSegment606.children[1] = Shape610;

HAnimJoint605.children = new MFNode();

HAnimJoint605.children[0] = HAnimSegment606;

let HAnimJoint614 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint614.name = "r_tarsal_proximal_interphalangeal_4";
HAnimJoint614.DEF = "hanim_r_tarsal_proximal_interphalangeal_4";
HAnimJoint614.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint614.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment615 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment615.name = "r_tarsal_middle_phalanx_4";
HAnimSegment615.DEF = "hanim_r_tarsal_middle_phalanx_4";
let Transform616 = browser.currentScene.createNode("Transform");
Transform616.translation = new SFVec3f(new float[-0.0801,0.0712,-0.0766]);
let Transform617 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape618 = browser.currentScene.createNode("Shape");
Shape618.USE = "HAnimJointShape";
Transform617.children = new MFNode();

Transform617.children[0] = Shape618;

Transform616.children = new MFNode();

Transform616.children[0] = Transform617;

HAnimSegment615.children = new MFNode();

HAnimSegment615.children[0] = Transform616;

let Shape619 = browser.currentScene.createNode("Shape");
let LineSet620 = browser.currentScene.createNode("LineSet");
LineSet620.vertexCount = new MFInt32(new int[2]);
let Coordinate621 = browser.currentScene.createNode("Coordinate");
Coordinate621.point = new MFVec3f(new float[-0.0801,0.0712,-0.0766]);
LineSet620.coord = Coordinate621;

//from r_tarsal_proximal_interphalangeal_4 to r_tarsal_distal_interphalangeal_4 vertices 1
let ColorRGBA622 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA622.USE = "HAnimSegmentLineColorRGBA";
LineSet620.color = ColorRGBA622;

Shape619.geometry = LineSet620;

HAnimSegment615.children[1] = Shape619;

let HAnimSite623 = browser.currentScene.createNode("HAnimSite");
HAnimSite623.name = "r_tarsal_distal_phalanx_4_tip";
HAnimSite623.DEF = "hanim_r_tarsal_distal_phalanx_4_tip";
let TouchSensor624 = browser.currentScene.createNode("TouchSensor");
TouchSensor624.description = "HAnimSite r_tarsal_distal_phalanx_4_tip";
HAnimSite623.children = new MFNode();

HAnimSite623.children[0] = TouchSensor624;

let Shape625 = browser.currentScene.createNode("Shape");
Shape625.USE = "HAnimSiteShape";
HAnimSite623.children[1] = Shape625;

HAnimSegment615.children[2] = HAnimSite623;

HAnimJoint614.children = new MFNode();

HAnimJoint614.children[0] = HAnimSegment615;

let HAnimJoint626 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint626.name = "r_tarsal_distal_interphalangeal_4";
HAnimJoint626.DEF = "hanim_r_tarsal_distal_interphalangeal_4";
HAnimJoint626.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint626.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint614.children[1] = HAnimJoint626;

HAnimJoint605.children[1] = HAnimJoint614;

HAnimJoint596.children[1] = HAnimJoint605;

HAnimJoint583.children[1] = HAnimJoint596;

let HAnimJoint627 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint627.name = "r_tarsometatarsal_5";
HAnimJoint627.DEF = "hanim_r_tarsometatarsal_5";
HAnimJoint627.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint627.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment628 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment628.name = "r_metatarsal_5";
HAnimSegment628.DEF = "hanim_r_metatarsal_5";
let Transform629 = browser.currentScene.createNode("Transform");
Transform629.translation = new SFVec3f(new float[-0.0801,0.0712,-0.0766]);
let Transform630 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape631 = browser.currentScene.createNode("Shape");
Shape631.USE = "HAnimJointShape";
Transform630.children = new MFNode();

Transform630.children[0] = Shape631;

Transform629.children = new MFNode();

Transform629.children[0] = Transform630;

HAnimSegment628.children = new MFNode();

HAnimSegment628.children[0] = Transform629;

let Shape632 = browser.currentScene.createNode("Shape");
let LineSet633 = browser.currentScene.createNode("LineSet");
LineSet633.vertexCount = new MFInt32(new int[2]);
let Coordinate634 = browser.currentScene.createNode("Coordinate");
Coordinate634.point = new MFVec3f(new float[-0.0801,0.0712,-0.0766]);
LineSet633.coord = Coordinate634;

//from r_tarsometatarsal_5 to r_metatarsophalangeal_5 vertices 1
let ColorRGBA635 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA635.USE = "HAnimSegmentLineColorRGBA";
LineSet633.color = ColorRGBA635;

Shape632.geometry = LineSet633;

HAnimSegment628.children[1] = Shape632;

let HAnimSite636 = browser.currentScene.createNode("HAnimSite");
HAnimSite636.name = "r_metatarsal_phalanx_5_pt";
HAnimSite636.DEF = "hanim_r_metatarsal_phalanx_5_pt";
let TouchSensor637 = browser.currentScene.createNode("TouchSensor");
TouchSensor637.description = "HAnimSite r_metatarsal_phalanx_5_pt";
HAnimSite636.children = new MFNode();

HAnimSite636.children[0] = TouchSensor637;

let Shape638 = browser.currentScene.createNode("Shape");
Shape638.USE = "HAnimSiteShape";
HAnimSite636.children[1] = Shape638;

HAnimSegment628.children[2] = HAnimSite636;

HAnimJoint627.children = new MFNode();

HAnimJoint627.children[0] = HAnimSegment628;

let HAnimJoint639 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint639.name = "r_metatarsophalangeal_5";
HAnimJoint639.DEF = "hanim_r_metatarsophalangeal_5";
HAnimJoint639.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint639.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment640 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment640.name = "r_tarsal_proximal_phalanx_5";
HAnimSegment640.DEF = "hanim_r_tarsal_proximal_phalanx_5";
let Transform641 = browser.currentScene.createNode("Transform");
Transform641.translation = new SFVec3f(new float[-0.0801,0.0712,-0.0766]);
let Transform642 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape643 = browser.currentScene.createNode("Shape");
Shape643.USE = "HAnimJointShape";
Transform642.children = new MFNode();

Transform642.children[0] = Shape643;

Transform641.children = new MFNode();

Transform641.children[0] = Transform642;

HAnimSegment640.children = new MFNode();

HAnimSegment640.children[0] = Transform641;

let Shape644 = browser.currentScene.createNode("Shape");
let LineSet645 = browser.currentScene.createNode("LineSet");
LineSet645.vertexCount = new MFInt32(new int[2]);
let Coordinate646 = browser.currentScene.createNode("Coordinate");
Coordinate646.point = new MFVec3f(new float[-0.0801,0.0712,-0.0766]);
LineSet645.coord = Coordinate646;

//from r_metatarsophalangeal_5 to r_tarsal_proximal_interphalangeal_5 vertices 1
let ColorRGBA647 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA647.USE = "HAnimSegmentLineColorRGBA";
LineSet645.color = ColorRGBA647;

Shape644.geometry = LineSet645;

HAnimSegment640.children[1] = Shape644;

HAnimJoint639.children = new MFNode();

HAnimJoint639.children[0] = HAnimSegment640;

let HAnimJoint648 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint648.name = "r_tarsal_proximal_interphalangeal_5";
HAnimJoint648.DEF = "hanim_r_tarsal_proximal_interphalangeal_5";
HAnimJoint648.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint648.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment649 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment649.name = "r_tarsal_middle_phalanx_5";
HAnimSegment649.DEF = "hanim_r_tarsal_middle_phalanx_5";
let Transform650 = browser.currentScene.createNode("Transform");
Transform650.translation = new SFVec3f(new float[-0.0801,0.0712,-0.0766]);
let Transform651 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape652 = browser.currentScene.createNode("Shape");
Shape652.USE = "HAnimJointShape";
Transform651.children = new MFNode();

Transform651.children[0] = Shape652;

Transform650.children = new MFNode();

Transform650.children[0] = Transform651;

HAnimSegment649.children = new MFNode();

HAnimSegment649.children[0] = Transform650;

let Shape653 = browser.currentScene.createNode("Shape");
let LineSet654 = browser.currentScene.createNode("LineSet");
LineSet654.vertexCount = new MFInt32(new int[2]);
let Coordinate655 = browser.currentScene.createNode("Coordinate");
Coordinate655.point = new MFVec3f(new float[-0.0801,0.0712,-0.0766]);
LineSet654.coord = Coordinate655;

//from r_tarsal_proximal_interphalangeal_5 to r_tarsal_distal_interphalangeal_5 vertices 1
let ColorRGBA656 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA656.USE = "HAnimSegmentLineColorRGBA";
LineSet654.color = ColorRGBA656;

Shape653.geometry = LineSet654;

HAnimSegment649.children[1] = Shape653;

let HAnimSite657 = browser.currentScene.createNode("HAnimSite");
HAnimSite657.name = "r_tarsal_distal_phalanx_5_tip";
HAnimSite657.DEF = "hanim_r_tarsal_distal_phalanx_5_tip";
let TouchSensor658 = browser.currentScene.createNode("TouchSensor");
TouchSensor658.description = "HAnimSite r_tarsal_distal_phalanx_5_tip";
HAnimSite657.children = new MFNode();

HAnimSite657.children[0] = TouchSensor658;

let Shape659 = browser.currentScene.createNode("Shape");
Shape659.USE = "HAnimSiteShape";
HAnimSite657.children[1] = Shape659;

HAnimSegment649.children[2] = HAnimSite657;

HAnimJoint648.children = new MFNode();

HAnimJoint648.children[0] = HAnimSegment649;

let HAnimJoint660 = browser.currentScene.createNode("HAnimJoint");
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

let HAnimJoint661 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint661.name = "vl5";
HAnimJoint661.DEF = "hanim_vl5";
HAnimJoint661.center = new SFVec3f(new float[0.0028,1.0568,-0.0776]);
HAnimJoint661.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint661.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment662 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment662.name = "l5";
HAnimSegment662.DEF = "hanim_l5";
let Transform663 = browser.currentScene.createNode("Transform");
Transform663.translation = new SFVec3f(new float[0.0028,1.0568,-0.0776]);
let Transform664 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape665 = browser.currentScene.createNode("Shape");
Shape665.USE = "HAnimJointShape";
Transform664.children = new MFNode();

Transform664.children[0] = Shape665;

Transform663.children = new MFNode();

Transform663.children[0] = Transform664;

HAnimSegment662.children = new MFNode();

HAnimSegment662.children[0] = Transform663;

let Shape666 = browser.currentScene.createNode("Shape");
let LineSet667 = browser.currentScene.createNode("LineSet");
LineSet667.vertexCount = new MFInt32(new int[2]);
let Coordinate668 = browser.currentScene.createNode("Coordinate");
Coordinate668.point = new MFVec3f(new float[0.0028,1.0568,-0.0776,0.0035,1.0925,-0.0787]);
LineSet667.coord = Coordinate668;

//from vl5 to vl4 vertices 2
let ColorRGBA669 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA669.USE = "HAnimSegmentLineColorRGBA";
LineSet667.color = ColorRGBA669;

Shape666.geometry = LineSet667;

HAnimSegment662.children[1] = Shape666;

HAnimJoint661.children = new MFNode();

HAnimJoint661.children[0] = HAnimSegment662;

let HAnimJoint670 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint670.name = "vl4";
HAnimJoint670.DEF = "hanim_vl4";
HAnimJoint670.center = new SFVec3f(new float[0.0035,1.0925,-0.0787]);
HAnimJoint670.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint670.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment671 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment671.name = "l4";
HAnimSegment671.DEF = "hanim_l4";
let Transform672 = browser.currentScene.createNode("Transform");
Transform672.translation = new SFVec3f(new float[0.0035,1.0925,-0.0787]);
let Transform673 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape674 = browser.currentScene.createNode("Shape");
Shape674.USE = "HAnimJointShape";
Transform673.children = new MFNode();

Transform673.children[0] = Shape674;

Transform672.children = new MFNode();

Transform672.children[0] = Transform673;

HAnimSegment671.children = new MFNode();

HAnimSegment671.children[0] = Transform672;

let Shape675 = browser.currentScene.createNode("Shape");
let LineSet676 = browser.currentScene.createNode("LineSet");
LineSet676.vertexCount = new MFInt32(new int[2]);
let Coordinate677 = browser.currentScene.createNode("Coordinate");
Coordinate677.point = new MFVec3f(new float[0.0035,1.0925,-0.0787,0.0041,1.1276,-0.0796]);
LineSet676.coord = Coordinate677;

//from vl4 to vl3 vertices 2
let ColorRGBA678 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA678.USE = "HAnimSegmentLineColorRGBA";
LineSet676.color = ColorRGBA678;

Shape675.geometry = LineSet676;

HAnimSegment671.children[1] = Shape675;

HAnimJoint670.children = new MFNode();

HAnimJoint670.children[0] = HAnimSegment671;

let HAnimJoint679 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint679.name = "vl3";
HAnimJoint679.DEF = "hanim_vl3";
HAnimJoint679.center = new SFVec3f(new float[0.0041,1.1276,-0.0796]);
HAnimJoint679.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint679.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment680 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment680.name = "l3";
HAnimSegment680.DEF = "hanim_l3";
let Transform681 = browser.currentScene.createNode("Transform");
Transform681.translation = new SFVec3f(new float[0.0041,1.1276,-0.0796]);
let Transform682 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape683 = browser.currentScene.createNode("Shape");
Shape683.USE = "HAnimJointShape";
Transform682.children = new MFNode();

Transform682.children[0] = Shape683;

Transform681.children = new MFNode();

Transform681.children[0] = Transform682;

HAnimSegment680.children = new MFNode();

HAnimSegment680.children[0] = Transform681;

let Shape684 = browser.currentScene.createNode("Shape");
let LineSet685 = browser.currentScene.createNode("LineSet");
LineSet685.vertexCount = new MFInt32(new int[2]);
let Coordinate686 = browser.currentScene.createNode("Coordinate");
Coordinate686.point = new MFVec3f(new float[0.0041,1.1276,-0.0796,0.0045,1.1546,-0.08]);
LineSet685.coord = Coordinate686;

//from vl3 to vl2 vertices 2
let ColorRGBA687 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA687.USE = "HAnimSegmentLineColorRGBA";
LineSet685.color = ColorRGBA687;

Shape684.geometry = LineSet685;

HAnimSegment680.children[1] = Shape684;

let HAnimSite688 = browser.currentScene.createNode("HAnimSite");
HAnimSite688.name = "l_rib10_pt";
HAnimSite688.DEF = "hanim_l_rib10_pt";
HAnimSite688.translation = new SFVec3f(new float[0.0871,1.1925,0.0992]);
let TouchSensor689 = browser.currentScene.createNode("TouchSensor");
TouchSensor689.description = "HAnimSite l_rib10_pt";
HAnimSite688.children = new MFNode();

HAnimSite688.children[0] = TouchSensor689;

let Shape690 = browser.currentScene.createNode("Shape");
Shape690.USE = "HAnimSiteShape";
HAnimSite688.children[1] = Shape690;

HAnimSegment680.children[2] = HAnimSite688;

let HAnimSite691 = browser.currentScene.createNode("HAnimSite");
HAnimSite691.name = "r_rib10_pt";
HAnimSite691.DEF = "hanim_r_rib10_pt";
HAnimSite691.translation = new SFVec3f(new float[-0.0711,1.1941,0.1016]);
let TouchSensor692 = browser.currentScene.createNode("TouchSensor");
TouchSensor692.description = "HAnimSite r_rib10_pt";
HAnimSite691.children = new MFNode();

HAnimSite691.children[0] = TouchSensor692;

let Shape693 = browser.currentScene.createNode("Shape");
Shape693.USE = "HAnimSiteShape";
HAnimSite691.children[1] = Shape693;

HAnimSegment680.children[3] = HAnimSite691;

let HAnimSite694 = browser.currentScene.createNode("HAnimSite");
HAnimSite694.name = "spine_2_middle_back_pt";
HAnimSite694.DEF = "hanim_spine_2_middle_back_pt";
let TouchSensor695 = browser.currentScene.createNode("TouchSensor");
TouchSensor695.description = "HAnimSite spine_2_middle_back_pt";
HAnimSite694.children = new MFNode();

HAnimSite694.children[0] = TouchSensor695;

let Shape696 = browser.currentScene.createNode("Shape");
Shape696.USE = "HAnimSiteShape";
HAnimSite694.children[1] = Shape696;

HAnimSegment680.children[4] = HAnimSite694;

HAnimJoint679.children = new MFNode();

HAnimJoint679.children[0] = HAnimSegment680;

let HAnimJoint697 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint697.name = "vl2";
HAnimJoint697.DEF = "hanim_vl2";
HAnimJoint697.center = new SFVec3f(new float[0.0045,1.1546,-0.08]);
HAnimJoint697.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint697.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment698 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment698.name = "l2";
HAnimSegment698.DEF = "hanim_l2";
let Transform699 = browser.currentScene.createNode("Transform");
Transform699.translation = new SFVec3f(new float[0.0045,1.1546,-0.08]);
let Transform700 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape701 = browser.currentScene.createNode("Shape");
Shape701.USE = "HAnimJointShape";
Transform700.children = new MFNode();

Transform700.children[0] = Shape701;

Transform699.children = new MFNode();

Transform699.children[0] = Transform700;

HAnimSegment698.children = new MFNode();

HAnimSegment698.children[0] = Transform699;

let Shape702 = browser.currentScene.createNode("Shape");
let LineSet703 = browser.currentScene.createNode("LineSet");
LineSet703.vertexCount = new MFInt32(new int[2]);
let Coordinate704 = browser.currentScene.createNode("Coordinate");
Coordinate704.point = new MFVec3f(new float[0.0045,1.1546,-0.08,0.0048,1.1912,-0.0805]);
LineSet703.coord = Coordinate704;

//from vl2 to vl1 vertices 2
let ColorRGBA705 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA705.USE = "HAnimSegmentLineColorRGBA";
LineSet703.color = ColorRGBA705;

Shape702.geometry = LineSet703;

HAnimSegment698.children[1] = Shape702;

HAnimJoint697.children = new MFNode();

HAnimJoint697.children[0] = HAnimSegment698;

let HAnimJoint706 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint706.name = "vl1";
HAnimJoint706.DEF = "hanim_vl1";
HAnimJoint706.center = new SFVec3f(new float[0.0048,1.1912,-0.0805]);
HAnimJoint706.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint706.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment707 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment707.name = "l1";
HAnimSegment707.DEF = "hanim_l1";
let Transform708 = browser.currentScene.createNode("Transform");
Transform708.translation = new SFVec3f(new float[0.0048,1.1912,-0.0805]);
let Transform709 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape710 = browser.currentScene.createNode("Shape");
Shape710.USE = "HAnimJointShape";
Transform709.children = new MFNode();

Transform709.children[0] = Shape710;

Transform708.children = new MFNode();

Transform708.children[0] = Transform709;

HAnimSegment707.children = new MFNode();

HAnimSegment707.children[0] = Transform708;

let Shape711 = browser.currentScene.createNode("Shape");
let LineSet712 = browser.currentScene.createNode("LineSet");
LineSet712.vertexCount = new MFInt32(new int[2]);
let Coordinate713 = browser.currentScene.createNode("Coordinate");
Coordinate713.point = new MFVec3f(new float[0.0048,1.1912,-0.0805,0.0051,1.2278,-0.0808]);
LineSet712.coord = Coordinate713;

//from vl1 to vt12 vertices 2
let ColorRGBA714 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA714.USE = "HAnimSegmentLineColorRGBA";
LineSet712.color = ColorRGBA714;

Shape711.geometry = LineSet712;

HAnimSegment707.children[1] = Shape711;

HAnimJoint706.children = new MFNode();

HAnimJoint706.children[0] = HAnimSegment707;

let HAnimJoint715 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint715.name = "vt12";
HAnimJoint715.DEF = "hanim_vt12";
HAnimJoint715.center = new SFVec3f(new float[0.0051,1.2278,-0.0808]);
HAnimJoint715.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint715.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment716 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment716.name = "t12";
HAnimSegment716.DEF = "hanim_t12";
let Transform717 = browser.currentScene.createNode("Transform");
Transform717.translation = new SFVec3f(new float[0.0051,1.2278,-0.0808]);
let Transform718 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape719 = browser.currentScene.createNode("Shape");
Shape719.USE = "HAnimJointShape";
Transform718.children = new MFNode();

Transform718.children[0] = Shape719;

Transform717.children = new MFNode();

Transform717.children[0] = Transform718;

HAnimSegment716.children = new MFNode();

HAnimSegment716.children[0] = Transform717;

let Shape720 = browser.currentScene.createNode("Shape");
let LineSet721 = browser.currentScene.createNode("LineSet");
LineSet721.vertexCount = new MFInt32(new int[2]);
let Coordinate722 = browser.currentScene.createNode("Coordinate");
Coordinate722.point = new MFVec3f(new float[0.0051,1.2278,-0.0808,0.0053,1.2679,-0.081]);
LineSet721.coord = Coordinate722;

//from vt12 to vt11 vertices 2
let ColorRGBA723 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA723.USE = "HAnimSegmentLineColorRGBA";
LineSet721.color = ColorRGBA723;

Shape720.geometry = LineSet721;

HAnimSegment716.children[1] = Shape720;

HAnimJoint715.children = new MFNode();

HAnimJoint715.children[0] = HAnimSegment716;

let HAnimJoint724 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint724.name = "vt11";
HAnimJoint724.DEF = "hanim_vt11";
HAnimJoint724.center = new SFVec3f(new float[0.0053,1.2679,-0.081]);
HAnimJoint724.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint724.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment725 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment725.name = "t11";
HAnimSegment725.DEF = "hanim_t11";
let Transform726 = browser.currentScene.createNode("Transform");
Transform726.translation = new SFVec3f(new float[0.0053,1.2679,-0.081]);
let Transform727 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape728 = browser.currentScene.createNode("Shape");
Shape728.USE = "HAnimJointShape";
Transform727.children = new MFNode();

Transform727.children[0] = Shape728;

Transform726.children = new MFNode();

Transform726.children[0] = Transform727;

HAnimSegment725.children = new MFNode();

HAnimSegment725.children[0] = Transform726;

let Shape729 = browser.currentScene.createNode("Shape");
let LineSet730 = browser.currentScene.createNode("LineSet");
LineSet730.vertexCount = new MFInt32(new int[2]);
let Coordinate731 = browser.currentScene.createNode("Coordinate");
Coordinate731.point = new MFVec3f(new float[0.0053,1.2679,-0.081,0.0056,1.2848,-0.0822]);
LineSet730.coord = Coordinate731;

//from vt11 to vt10 vertices 2
let ColorRGBA732 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA732.USE = "HAnimSegmentLineColorRGBA";
LineSet730.color = ColorRGBA732;

Shape729.geometry = LineSet730;

HAnimSegment725.children[1] = Shape729;

let HAnimSite733 = browser.currentScene.createNode("HAnimSite");
HAnimSite733.name = "substernale_pt";
HAnimSite733.DEF = "hanim_substernale_pt";
HAnimSite733.translation = new SFVec3f(new float[0.0085,1.2995,0.1147]);
let TouchSensor734 = browser.currentScene.createNode("TouchSensor");
TouchSensor734.description = "HAnimSite substernale_pt";
HAnimSite733.children = new MFNode();

HAnimSite733.children[0] = TouchSensor734;

let Shape735 = browser.currentScene.createNode("Shape");
Shape735.USE = "HAnimSiteShape";
HAnimSite733.children[1] = Shape735;

HAnimSegment725.children[2] = HAnimSite733;

HAnimJoint724.children = new MFNode();

HAnimJoint724.children[0] = HAnimSegment725;

let HAnimJoint736 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint736.name = "vt10";
HAnimJoint736.DEF = "hanim_vt10";
HAnimJoint736.center = new SFVec3f(new float[0.0056,1.2848,-0.0822]);
HAnimJoint736.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint736.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment737 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment737.name = "t10";
HAnimSegment737.DEF = "hanim_t10";
let Transform738 = browser.currentScene.createNode("Transform");
Transform738.translation = new SFVec3f(new float[0.0056,1.2848,-0.0822]);
let Transform739 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape740 = browser.currentScene.createNode("Shape");
Shape740.USE = "HAnimJointShape";
Transform739.children = new MFNode();

Transform739.children[0] = Shape740;

Transform738.children = new MFNode();

Transform738.children[0] = Transform739;

HAnimSegment737.children = new MFNode();

HAnimSegment737.children[0] = Transform738;

let Shape741 = browser.currentScene.createNode("Shape");
let LineSet742 = browser.currentScene.createNode("LineSet");
LineSet742.vertexCount = new MFInt32(new int[2]);
let Coordinate743 = browser.currentScene.createNode("Coordinate");
Coordinate743.point = new MFVec3f(new float[0.0056,1.2848,-0.0822,0.0057,1.3126,-0.0838]);
LineSet742.coord = Coordinate743;

//from vt10 to vt9 vertices 2
let ColorRGBA744 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA744.USE = "HAnimSegmentLineColorRGBA";
LineSet742.color = ColorRGBA744;

Shape741.geometry = LineSet742;

HAnimSegment737.children[1] = Shape741;

let HAnimSite745 = browser.currentScene.createNode("HAnimSite");
HAnimSite745.name = "l_thelion_pt";
HAnimSite745.DEF = "hanim_l_thelion_pt";
HAnimSite745.translation = new SFVec3f(new float[0.0918,1.3382,0.1192]);
let TouchSensor746 = browser.currentScene.createNode("TouchSensor");
TouchSensor746.description = "HAnimSite l_thelion_pt";
HAnimSite745.children = new MFNode();

HAnimSite745.children[0] = TouchSensor746;

let Shape747 = browser.currentScene.createNode("Shape");
Shape747.USE = "HAnimSiteShape";
HAnimSite745.children[1] = Shape747;

HAnimSegment737.children[2] = HAnimSite745;

let HAnimSite748 = browser.currentScene.createNode("HAnimSite");
HAnimSite748.name = "r_thelion_pt";
HAnimSite748.DEF = "hanim_r_thelion_pt";
HAnimSite748.translation = new SFVec3f(new float[-0.0736,1.3385,0.1217]);
let TouchSensor749 = browser.currentScene.createNode("TouchSensor");
TouchSensor749.description = "HAnimSite r_thelion_pt";
HAnimSite748.children = new MFNode();

HAnimSite748.children[0] = TouchSensor749;

let Shape750 = browser.currentScene.createNode("Shape");
Shape750.USE = "HAnimSiteShape";
HAnimSite748.children[1] = Shape750;

HAnimSegment737.children[3] = HAnimSite748;

HAnimJoint736.children = new MFNode();

HAnimJoint736.children[0] = HAnimSegment737;

let HAnimJoint751 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint751.name = "vt9";
HAnimJoint751.DEF = "hanim_vt9";
HAnimJoint751.center = new SFVec3f(new float[0.0057,1.3126,-0.0838]);
HAnimJoint751.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint751.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment752 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment752.name = "t9";
HAnimSegment752.DEF = "hanim_t9";
let Transform753 = browser.currentScene.createNode("Transform");
Transform753.translation = new SFVec3f(new float[0.0057,1.3126,-0.0838]);
let Transform754 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape755 = browser.currentScene.createNode("Shape");
Shape755.USE = "HAnimJointShape";
Transform754.children = new MFNode();

Transform754.children[0] = Shape755;

Transform753.children = new MFNode();

Transform753.children[0] = Transform754;

HAnimSegment752.children = new MFNode();

HAnimSegment752.children[0] = Transform753;

let Shape756 = browser.currentScene.createNode("Shape");
let LineSet757 = browser.currentScene.createNode("LineSet");
LineSet757.vertexCount = new MFInt32(new int[2]);
let Coordinate758 = browser.currentScene.createNode("Coordinate");
Coordinate758.point = new MFVec3f(new float[0.0057,1.3126,-0.0838,0.0057,1.3382,-0.0845]);
LineSet757.coord = Coordinate758;

//from vt9 to vt8 vertices 2
let ColorRGBA759 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA759.USE = "HAnimSegmentLineColorRGBA";
LineSet757.color = ColorRGBA759;

Shape756.geometry = LineSet757;

HAnimSegment752.children[1] = Shape756;

HAnimJoint751.children = new MFNode();

HAnimJoint751.children[0] = HAnimSegment752;

let HAnimJoint760 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint760.name = "vt8";
HAnimJoint760.DEF = "hanim_vt8";
HAnimJoint760.center = new SFVec3f(new float[0.0057,1.3382,-0.0845]);
HAnimJoint760.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint760.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment761 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment761.name = "t8";
HAnimSegment761.DEF = "hanim_t8";
let Transform762 = browser.currentScene.createNode("Transform");
Transform762.translation = new SFVec3f(new float[0.0057,1.3382,-0.0845]);
let Transform763 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape764 = browser.currentScene.createNode("Shape");
Shape764.USE = "HAnimJointShape";
Transform763.children = new MFNode();

Transform763.children[0] = Shape764;

Transform762.children = new MFNode();

Transform762.children[0] = Transform763;

HAnimSegment761.children = new MFNode();

HAnimSegment761.children[0] = Transform762;

let Shape765 = browser.currentScene.createNode("Shape");
let LineSet766 = browser.currentScene.createNode("LineSet");
LineSet766.vertexCount = new MFInt32(new int[2]);
let Coordinate767 = browser.currentScene.createNode("Coordinate");
Coordinate767.point = new MFVec3f(new float[0.0057,1.3382,-0.0845,0.0058,1.3625,-0.0833]);
LineSet766.coord = Coordinate767;

//from vt8 to vt7 vertices 2
let ColorRGBA768 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA768.USE = "HAnimSegmentLineColorRGBA";
LineSet766.color = ColorRGBA768;

Shape765.geometry = LineSet766;

HAnimSegment761.children[1] = Shape765;

HAnimJoint760.children = new MFNode();

HAnimJoint760.children[0] = HAnimSegment761;

let HAnimJoint769 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint769.name = "vt7";
HAnimJoint769.DEF = "hanim_vt7";
HAnimJoint769.center = new SFVec3f(new float[0.0058,1.3625,-0.0833]);
HAnimJoint769.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint769.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment770 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment770.name = "t7";
HAnimSegment770.DEF = "hanim_t7";
let Transform771 = browser.currentScene.createNode("Transform");
Transform771.translation = new SFVec3f(new float[0.0058,1.3625,-0.0833]);
let Transform772 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape773 = browser.currentScene.createNode("Shape");
Shape773.USE = "HAnimJointShape";
Transform772.children = new MFNode();

Transform772.children[0] = Shape773;

Transform771.children = new MFNode();

Transform771.children[0] = Transform772;

HAnimSegment770.children = new MFNode();

HAnimSegment770.children[0] = Transform771;

let Shape774 = browser.currentScene.createNode("Shape");
let LineSet775 = browser.currentScene.createNode("LineSet");
LineSet775.vertexCount = new MFInt32(new int[2]);
let Coordinate776 = browser.currentScene.createNode("Coordinate");
Coordinate776.point = new MFVec3f(new float[0.0058,1.3625,-0.0833,0.0059,1.3866,-0.08]);
LineSet775.coord = Coordinate776;

//from vt7 to vt6 vertices 2
let ColorRGBA777 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA777.USE = "HAnimSegmentLineColorRGBA";
LineSet775.color = ColorRGBA777;

Shape774.geometry = LineSet775;

HAnimSegment770.children[1] = Shape774;

let HAnimSite778 = browser.currentScene.createNode("HAnimSite");
HAnimSite778.name = "l_chest_midsagittal_plane_pt";
HAnimSite778.DEF = "hanim_l_chest_midsagittal_plane_pt";
let TouchSensor779 = browser.currentScene.createNode("TouchSensor");
TouchSensor779.description = "HAnimSite l_chest_midsagittal_plane_pt";
HAnimSite778.children = new MFNode();

HAnimSite778.children[0] = TouchSensor779;

let Shape780 = browser.currentScene.createNode("Shape");
Shape780.USE = "HAnimSiteShape";
HAnimSite778.children[1] = Shape780;

HAnimSegment770.children[2] = HAnimSite778;

let HAnimSite781 = browser.currentScene.createNode("HAnimSite");
HAnimSite781.name = "mesosternale_pt";
HAnimSite781.DEF = "hanim_mesosternale_pt";
let TouchSensor782 = browser.currentScene.createNode("TouchSensor");
TouchSensor782.description = "HAnimSite mesosternale_pt";
HAnimSite781.children = new MFNode();

HAnimSite781.children[0] = TouchSensor782;

let Shape783 = browser.currentScene.createNode("Shape");
Shape783.USE = "HAnimSiteShape";
HAnimSite781.children[1] = Shape783;

HAnimSegment770.children[3] = HAnimSite781;

let HAnimSite784 = browser.currentScene.createNode("HAnimSite");
HAnimSite784.name = "r_chest_midsagittal_plane_pt";
HAnimSite784.DEF = "hanim_r_chest_midsagittal_plane_pt";
let TouchSensor785 = browser.currentScene.createNode("TouchSensor");
TouchSensor785.description = "HAnimSite r_chest_midsagittal_plane_pt";
HAnimSite784.children = new MFNode();

HAnimSite784.children[0] = TouchSensor785;

let Shape786 = browser.currentScene.createNode("Shape");
Shape786.USE = "HAnimSiteShape";
HAnimSite784.children[1] = Shape786;

HAnimSegment770.children[4] = HAnimSite784;

let HAnimSite787 = browser.currentScene.createNode("HAnimSite");
HAnimSite787.name = "rear_center_midsagittal_plane_pt";
HAnimSite787.DEF = "hanim_rear_center_midsagittal_plane_pt";
let TouchSensor788 = browser.currentScene.createNode("TouchSensor");
TouchSensor788.description = "HAnimSite rear_center_midsagittal_plane_pt";
HAnimSite787.children = new MFNode();

HAnimSite787.children[0] = TouchSensor788;

let Shape789 = browser.currentScene.createNode("Shape");
Shape789.USE = "HAnimSiteShape";
HAnimSite787.children[1] = Shape789;

HAnimSegment770.children[5] = HAnimSite787;

HAnimJoint769.children = new MFNode();

HAnimJoint769.children[0] = HAnimSegment770;

let HAnimJoint790 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint790.name = "vt6";
HAnimJoint790.DEF = "hanim_vt6";
HAnimJoint790.center = new SFVec3f(new float[0.0059,1.3866,-0.08]);
HAnimJoint790.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint790.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment791 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment791.name = "t6";
HAnimSegment791.DEF = "hanim_t6";
let Transform792 = browser.currentScene.createNode("Transform");
Transform792.translation = new SFVec3f(new float[0.0059,1.3866,-0.08]);
let Transform793 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape794 = browser.currentScene.createNode("Shape");
Shape794.USE = "HAnimJointShape";
Transform793.children = new MFNode();

Transform793.children[0] = Shape794;

Transform792.children = new MFNode();

Transform792.children[0] = Transform793;

HAnimSegment791.children = new MFNode();

HAnimSegment791.children[0] = Transform792;

let Shape795 = browser.currentScene.createNode("Shape");
let LineSet796 = browser.currentScene.createNode("LineSet");
LineSet796.vertexCount = new MFInt32(new int[2]);
let Coordinate797 = browser.currentScene.createNode("Coordinate");
Coordinate797.point = new MFVec3f(new float[0.0059,1.3866,-0.08,0.006,1.4102,-0.0745]);
LineSet796.coord = Coordinate797;

//from vt6 to vt5 vertices 2
let ColorRGBA798 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA798.USE = "HAnimSegmentLineColorRGBA";
LineSet796.color = ColorRGBA798;

Shape795.geometry = LineSet796;

HAnimSegment791.children[1] = Shape795;

let HAnimSite799 = browser.currentScene.createNode("HAnimSite");
HAnimSite799.name = "spine_1_middle_back_pt";
HAnimSite799.DEF = "hanim_spine_1_middle_back_pt";
let TouchSensor800 = browser.currentScene.createNode("TouchSensor");
TouchSensor800.description = "HAnimSite spine_1_middle_back_pt";
HAnimSite799.children = new MFNode();

HAnimSite799.children[0] = TouchSensor800;

let Shape801 = browser.currentScene.createNode("Shape");
Shape801.USE = "HAnimSiteShape";
HAnimSite799.children[1] = Shape801;

HAnimSegment791.children[2] = HAnimSite799;

HAnimJoint790.children = new MFNode();

HAnimJoint790.children[0] = HAnimSegment791;

let HAnimJoint802 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint802.name = "vt5";
HAnimJoint802.DEF = "hanim_vt5";
HAnimJoint802.center = new SFVec3f(new float[0.006,1.4102,-0.0745]);
HAnimJoint802.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint802.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment803 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment803.name = "t5";
HAnimSegment803.DEF = "hanim_t5";
let Transform804 = browser.currentScene.createNode("Transform");
Transform804.translation = new SFVec3f(new float[0.006,1.4102,-0.0745]);
let Transform805 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape806 = browser.currentScene.createNode("Shape");
Shape806.USE = "HAnimJointShape";
Transform805.children = new MFNode();

Transform805.children[0] = Shape806;

Transform804.children = new MFNode();

Transform804.children[0] = Transform805;

HAnimSegment803.children = new MFNode();

HAnimSegment803.children[0] = Transform804;

let Shape807 = browser.currentScene.createNode("Shape");
let LineSet808 = browser.currentScene.createNode("LineSet");
LineSet808.vertexCount = new MFInt32(new int[2]);
let Coordinate809 = browser.currentScene.createNode("Coordinate");
Coordinate809.point = new MFVec3f(new float[0.006,1.4102,-0.0745,0.0061,1.432,-0.0675]);
LineSet808.coord = Coordinate809;

//from vt5 to vt4 vertices 2
let ColorRGBA810 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA810.USE = "HAnimSegmentLineColorRGBA";
LineSet808.color = ColorRGBA810;

Shape807.geometry = LineSet808;

HAnimSegment803.children[1] = Shape807;

HAnimJoint802.children = new MFNode();

HAnimJoint802.children[0] = HAnimSegment803;

let HAnimJoint811 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint811.name = "vt4";
HAnimJoint811.DEF = "hanim_vt4";
HAnimJoint811.center = new SFVec3f(new float[0.0061,1.432,-0.0675]);
HAnimJoint811.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint811.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment812 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment812.name = "t4";
HAnimSegment812.DEF = "hanim_t4";
let Transform813 = browser.currentScene.createNode("Transform");
Transform813.translation = new SFVec3f(new float[0.0061,1.432,-0.0675]);
let Transform814 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape815 = browser.currentScene.createNode("Shape");
Shape815.USE = "HAnimJointShape";
Transform814.children = new MFNode();

Transform814.children[0] = Shape815;

Transform813.children = new MFNode();

Transform813.children[0] = Transform814;

HAnimSegment812.children = new MFNode();

HAnimSegment812.children[0] = Transform813;

let Shape816 = browser.currentScene.createNode("Shape");
let LineSet817 = browser.currentScene.createNode("LineSet");
LineSet817.vertexCount = new MFInt32(new int[2]);
let Coordinate818 = browser.currentScene.createNode("Coordinate");
Coordinate818.point = new MFVec3f(new float[0.0061,1.432,-0.0675,0.0062,1.4583,-0.057]);
LineSet817.coord = Coordinate818;

//from vt4 to vt3 vertices 2
let ColorRGBA819 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA819.USE = "HAnimSegmentLineColorRGBA";
LineSet817.color = ColorRGBA819;

Shape816.geometry = LineSet817;

HAnimSegment812.children[1] = Shape816;

HAnimJoint811.children = new MFNode();

HAnimJoint811.children[0] = HAnimSegment812;

let HAnimJoint820 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint820.name = "vt3";
HAnimJoint820.DEF = "hanim_vt3";
HAnimJoint820.center = new SFVec3f(new float[0.0062,1.4583,-0.057]);
HAnimJoint820.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint820.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment821 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment821.name = "t3";
HAnimSegment821.DEF = "hanim_t3";
let Transform822 = browser.currentScene.createNode("Transform");
Transform822.translation = new SFVec3f(new float[0.0062,1.4583,-0.057]);
let Transform823 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape824 = browser.currentScene.createNode("Shape");
Shape824.USE = "HAnimJointShape";
Transform823.children = new MFNode();

Transform823.children[0] = Shape824;

Transform822.children = new MFNode();

Transform822.children[0] = Transform823;

HAnimSegment821.children = new MFNode();

HAnimSegment821.children[0] = Transform822;

let Shape825 = browser.currentScene.createNode("Shape");
let LineSet826 = browser.currentScene.createNode("LineSet");
LineSet826.vertexCount = new MFInt32(new int[2]);
let Coordinate827 = browser.currentScene.createNode("Coordinate");
Coordinate827.point = new MFVec3f(new float[0.0062,1.4583,-0.057,0.0063,1.4761,-0.0484]);
LineSet826.coord = Coordinate827;

//from vt3 to vt2 vertices 2
let ColorRGBA828 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA828.USE = "HAnimSegmentLineColorRGBA";
LineSet826.color = ColorRGBA828;

Shape825.geometry = LineSet826;

HAnimSegment821.children[1] = Shape825;

HAnimJoint820.children = new MFNode();

HAnimJoint820.children[0] = HAnimSegment821;

let HAnimJoint829 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint829.name = "vt2";
HAnimJoint829.DEF = "hanim_vt2";
HAnimJoint829.center = new SFVec3f(new float[0.0063,1.4761,-0.0484]);
HAnimJoint829.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint829.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment830 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment830.name = "t2";
HAnimSegment830.DEF = "hanim_t2";
let Transform831 = browser.currentScene.createNode("Transform");
Transform831.translation = new SFVec3f(new float[0.0063,1.4761,-0.0484]);
let Transform832 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape833 = browser.currentScene.createNode("Shape");
Shape833.USE = "HAnimJointShape";
Transform832.children = new MFNode();

Transform832.children[0] = Shape833;

Transform831.children = new MFNode();

Transform831.children[0] = Transform832;

HAnimSegment830.children = new MFNode();

HAnimSegment830.children[0] = Transform831;

let Shape834 = browser.currentScene.createNode("Shape");
let LineSet835 = browser.currentScene.createNode("LineSet");
LineSet835.vertexCount = new MFInt32(new int[2]);
let Coordinate836 = browser.currentScene.createNode("Coordinate");
Coordinate836.point = new MFVec3f(new float[0.0063,1.4761,-0.0484,0.0065,1.4951,-0.0387]);
LineSet835.coord = Coordinate836;

//from vt2 to vt1 vertices 2
let ColorRGBA837 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA837.USE = "HAnimSegmentLineColorRGBA";
LineSet835.color = ColorRGBA837;

Shape834.geometry = LineSet835;

HAnimSegment830.children[1] = Shape834;

let HAnimSite838 = browser.currentScene.createNode("HAnimSite");
HAnimSite838.name = "cervicale_pt";
HAnimSite838.DEF = "hanim_cervicale_pt";
HAnimSite838.translation = new SFVec3f(new float[0.0064,1.52,-0.0815]);
let TouchSensor839 = browser.currentScene.createNode("TouchSensor");
TouchSensor839.description = "HAnimSite cervicale_pt";
HAnimSite838.children = new MFNode();

HAnimSite838.children[0] = TouchSensor839;

let Shape840 = browser.currentScene.createNode("Shape");
Shape840.USE = "HAnimSiteShape";
HAnimSite838.children[1] = Shape840;

HAnimSegment830.children[2] = HAnimSite838;

let HAnimSite841 = browser.currentScene.createNode("HAnimSite");
HAnimSite841.name = "suprasternale_pt";
HAnimSite841.DEF = "hanim_suprasternale_pt";
HAnimSite841.translation = new SFVec3f(new float[0.0084,1.4714,0.0551]);
let TouchSensor842 = browser.currentScene.createNode("TouchSensor");
TouchSensor842.description = "HAnimSite suprasternale_pt";
HAnimSite841.children = new MFNode();

HAnimSite841.children[0] = TouchSensor842;

let Shape843 = browser.currentScene.createNode("Shape");
Shape843.USE = "HAnimSiteShape";
HAnimSite841.children[1] = Shape843;

HAnimSegment830.children[3] = HAnimSite841;

HAnimJoint829.children = new MFNode();

HAnimJoint829.children[0] = HAnimSegment830;

let HAnimJoint844 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint844.name = "vt1";
HAnimJoint844.DEF = "hanim_vt1";
HAnimJoint844.center = new SFVec3f(new float[0.0065,1.4951,-0.0387]);
HAnimJoint844.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint844.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment845 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment845.name = "t1";
HAnimSegment845.DEF = "hanim_t1";
let Transform846 = browser.currentScene.createNode("Transform");
Transform846.translation = new SFVec3f(new float[0.0065,1.4951,-0.0387]);
let Transform847 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape848 = browser.currentScene.createNode("Shape");
Shape848.USE = "HAnimJointShape";
Transform847.children = new MFNode();

Transform847.children[0] = Shape848;

Transform846.children = new MFNode();

Transform846.children[0] = Transform847;

HAnimSegment845.children = new MFNode();

HAnimSegment845.children[0] = Transform846;

let Shape849 = browser.currentScene.createNode("Shape");
let LineSet850 = browser.currentScene.createNode("LineSet");
LineSet850.vertexCount = new MFInt32(new int[2]);
let Coordinate851 = browser.currentScene.createNode("Coordinate");
Coordinate851.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,0.0066,1.5132,-0.0301]);
LineSet850.coord = Coordinate851;

//from vt1 to vc7 vertices 2
let ColorRGBA852 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA852.USE = "HAnimSegmentLineColorRGBA";
LineSet850.color = ColorRGBA852;

Shape849.geometry = LineSet850;

HAnimSegment845.children[1] = Shape849;

let HAnimSite853 = browser.currentScene.createNode("HAnimSite");
HAnimSite853.name = "l_neck_base_pt";
HAnimSite853.DEF = "hanim_l_neck_base_pt";
HAnimSite853.translation = new SFVec3f(new float[0.0646,1.5141,-0.038]);
let TouchSensor854 = browser.currentScene.createNode("TouchSensor");
TouchSensor854.description = "HAnimSite l_neck_base_pt";
HAnimSite853.children = new MFNode();

HAnimSite853.children[0] = TouchSensor854;

let Shape855 = browser.currentScene.createNode("Shape");
Shape855.USE = "HAnimSiteShape";
HAnimSite853.children[1] = Shape855;

HAnimSegment845.children[2] = HAnimSite853;

let HAnimSite856 = browser.currentScene.createNode("HAnimSite");
HAnimSite856.name = "r_neck_base_pt";
HAnimSite856.DEF = "hanim_r_neck_base_pt";
HAnimSite856.translation = new SFVec3f(new float[-0.0419,1.5149,-0.022]);
let TouchSensor857 = browser.currentScene.createNode("TouchSensor");
TouchSensor857.description = "HAnimSite r_neck_base_pt";
HAnimSite856.children = new MFNode();

HAnimSite856.children[0] = TouchSensor857;

let Shape858 = browser.currentScene.createNode("Shape");
Shape858.USE = "HAnimSiteShape";
HAnimSite856.children[1] = Shape858;

HAnimSegment845.children[3] = HAnimSite856;

let Shape859 = browser.currentScene.createNode("Shape");
let LineSet860 = browser.currentScene.createNode("LineSet");
LineSet860.vertexCount = new MFInt32(new int[2]);
let Coordinate861 = browser.currentScene.createNode("Coordinate");
Coordinate861.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,0.082,1.4488,-0.0353]);
LineSet860.coord = Coordinate861;

//from vt1 to l_sternoclavicular vertices 2
let ColorRGBA862 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA862.USE = "HAnimSegmentLineColorRGBA";
LineSet860.color = ColorRGBA862;

Shape859.geometry = LineSet860;

HAnimSegment845.children[4] = Shape859;

let HAnimSite863 = browser.currentScene.createNode("HAnimSite");
HAnimSite863.name = "l_acromion_pt";
HAnimSite863.DEF = "hanim_l_acromion_pt";
HAnimSite863.translation = new SFVec3f(new float[0.2032,1.476,-0.049]);
let TouchSensor864 = browser.currentScene.createNode("TouchSensor");
TouchSensor864.description = "HAnimSite l_acromion_pt";
HAnimSite863.children = new MFNode();

HAnimSite863.children[0] = TouchSensor864;

let Shape865 = browser.currentScene.createNode("Shape");
Shape865.USE = "HAnimSiteShape";
HAnimSite863.children[1] = Shape865;

HAnimSegment845.children[5] = HAnimSite863;

let HAnimSite866 = browser.currentScene.createNode("HAnimSite");
HAnimSite866.name = "l_axilla_distal_pt";
HAnimSite866.DEF = "hanim_l_axilla_distal_pt";
HAnimSite866.translation = new SFVec3f(new float[0.1706,1.4072,-0.0875]);
let TouchSensor867 = browser.currentScene.createNode("TouchSensor");
TouchSensor867.description = "HAnimSite l_axilla_distal_pt";
HAnimSite866.children = new MFNode();

HAnimSite866.children[0] = TouchSensor867;

let Shape868 = browser.currentScene.createNode("Shape");
Shape868.USE = "HAnimSiteShape";
HAnimSite866.children[1] = Shape868;

HAnimSegment845.children[6] = HAnimSite866;

let HAnimSite869 = browser.currentScene.createNode("HAnimSite");
HAnimSite869.name = "l_axilla_posterior_folds_pt";
HAnimSite869.DEF = "hanim_l_axilla_posterior_folds_pt";
let TouchSensor870 = browser.currentScene.createNode("TouchSensor");
TouchSensor870.description = "HAnimSite l_axilla_posterior_folds_pt";
HAnimSite869.children = new MFNode();

HAnimSite869.children[0] = TouchSensor870;

let Shape871 = browser.currentScene.createNode("Shape");
Shape871.USE = "HAnimSiteShape";
HAnimSite869.children[1] = Shape871;

HAnimSegment845.children[7] = HAnimSite869;

let HAnimSite872 = browser.currentScene.createNode("HAnimSite");
HAnimSite872.name = "l_axilla_proximal_pt";
HAnimSite872.DEF = "hanim_l_axilla_proximal_pt";
HAnimSite872.translation = new SFVec3f(new float[0.1777,1.4065,-0.0075]);
let TouchSensor873 = browser.currentScene.createNode("TouchSensor");
TouchSensor873.description = "HAnimSite l_axilla_proximal_pt";
HAnimSite872.children = new MFNode();

HAnimSite872.children[0] = TouchSensor873;

let Shape874 = browser.currentScene.createNode("Shape");
Shape874.USE = "HAnimSiteShape";
HAnimSite872.children[1] = Shape874;

HAnimSegment845.children[8] = HAnimSite872;

let HAnimSite875 = browser.currentScene.createNode("HAnimSite");
HAnimSite875.name = "l_clavicale_pt";
HAnimSite875.DEF = "hanim_l_clavicale_pt";
HAnimSite875.translation = new SFVec3f(new float[0.0271,1.4943,0.0394]);
let TouchSensor876 = browser.currentScene.createNode("TouchSensor");
TouchSensor876.description = "HAnimSite l_clavicale_pt";
HAnimSite875.children = new MFNode();

HAnimSite875.children[0] = TouchSensor876;

let Shape877 = browser.currentScene.createNode("Shape");
Shape877.USE = "HAnimSiteShape";
HAnimSite875.children[1] = Shape877;

HAnimSegment845.children[9] = HAnimSite875;

let Shape878 = browser.currentScene.createNode("Shape");
let LineSet879 = browser.currentScene.createNode("LineSet");
LineSet879.vertexCount = new MFInt32(new int[2]);
let Coordinate880 = browser.currentScene.createNode("Coordinate");
Coordinate880.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,-0.0694,1.46,-0.033]);
LineSet879.coord = Coordinate880;

//from vt1 to r_sternoclavicular vertices 2
let ColorRGBA881 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA881.USE = "HAnimSegmentLineColorRGBA";
LineSet879.color = ColorRGBA881;

Shape878.geometry = LineSet879;

HAnimSegment845.children[10] = Shape878;

let HAnimSite882 = browser.currentScene.createNode("HAnimSite");
HAnimSite882.name = "r_acromion_pt";
HAnimSite882.DEF = "hanim_r_acromion_pt";
HAnimSite882.translation = new SFVec3f(new float[-0.1905,1.4791,-0.0431]);
let TouchSensor883 = browser.currentScene.createNode("TouchSensor");
TouchSensor883.description = "HAnimSite r_acromion_pt";
HAnimSite882.children = new MFNode();

HAnimSite882.children[0] = TouchSensor883;

let Shape884 = browser.currentScene.createNode("Shape");
Shape884.USE = "HAnimSiteShape";
HAnimSite882.children[1] = Shape884;

HAnimSegment845.children[11] = HAnimSite882;

let HAnimSite885 = browser.currentScene.createNode("HAnimSite");
HAnimSite885.name = "r_axilla_distal_pt";
HAnimSite885.DEF = "hanim_r_axilla_distal_pt";
HAnimSite885.translation = new SFVec3f(new float[-0.1603,1.4098,-0.0826]);
let TouchSensor886 = browser.currentScene.createNode("TouchSensor");
TouchSensor886.description = "HAnimSite r_axilla_distal_pt";
HAnimSite885.children = new MFNode();

HAnimSite885.children[0] = TouchSensor886;

let Shape887 = browser.currentScene.createNode("Shape");
Shape887.USE = "HAnimSiteShape";
HAnimSite885.children[1] = Shape887;

HAnimSegment845.children[12] = HAnimSite885;

let HAnimSite888 = browser.currentScene.createNode("HAnimSite");
HAnimSite888.name = "r_axilla_posterior_folds_pt";
HAnimSite888.DEF = "hanim_r_axilla_posterior_folds_pt";
let TouchSensor889 = browser.currentScene.createNode("TouchSensor");
TouchSensor889.description = "HAnimSite r_axilla_posterior_folds_pt";
HAnimSite888.children = new MFNode();

HAnimSite888.children[0] = TouchSensor889;

let Shape890 = browser.currentScene.createNode("Shape");
Shape890.USE = "HAnimSiteShape";
HAnimSite888.children[1] = Shape890;

HAnimSegment845.children[13] = HAnimSite888;

let HAnimSite891 = browser.currentScene.createNode("HAnimSite");
HAnimSite891.name = "r_axilla_proximal_pt";
HAnimSite891.DEF = "hanim_r_axilla_proximal_pt";
HAnimSite891.translation = new SFVec3f(new float[-0.1626,1.4072,-0.0031]);
let TouchSensor892 = browser.currentScene.createNode("TouchSensor");
TouchSensor892.description = "HAnimSite r_axilla_proximal_pt";
HAnimSite891.children = new MFNode();

HAnimSite891.children[0] = TouchSensor892;

let Shape893 = browser.currentScene.createNode("Shape");
Shape893.USE = "HAnimSiteShape";
HAnimSite891.children[1] = Shape893;

HAnimSegment845.children[14] = HAnimSite891;

let HAnimSite894 = browser.currentScene.createNode("HAnimSite");
HAnimSite894.name = "r_clavicale_pt";
HAnimSite894.DEF = "hanim_r_clavicale_pt";
HAnimSite894.translation = new SFVec3f(new float[-0.0115,1.4943,0.04]);
let TouchSensor895 = browser.currentScene.createNode("TouchSensor");
TouchSensor895.description = "HAnimSite r_clavicale_pt";
HAnimSite894.children = new MFNode();

HAnimSite894.children[0] = TouchSensor895;

let Shape896 = browser.currentScene.createNode("Shape");
Shape896.USE = "HAnimSiteShape";
HAnimSite894.children[1] = Shape896;

HAnimSegment845.children[15] = HAnimSite894;

HAnimJoint844.children = new MFNode();

HAnimJoint844.children[0] = HAnimSegment845;

let HAnimJoint897 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint897.name = "vc7";
HAnimJoint897.DEF = "hanim_vc7";
HAnimJoint897.center = new SFVec3f(new float[0.0066,1.5132,-0.0301]);
HAnimJoint897.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint897.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment898 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment898.name = "c7";
HAnimSegment898.DEF = "hanim_c7";
let Transform899 = browser.currentScene.createNode("Transform");
Transform899.translation = new SFVec3f(new float[0.0066,1.5132,-0.0301]);
let Transform900 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape901 = browser.currentScene.createNode("Shape");
Shape901.USE = "HAnimJointShape";
Transform900.children = new MFNode();

Transform900.children[0] = Shape901;

Transform899.children = new MFNode();

Transform899.children[0] = Transform900;

HAnimSegment898.children = new MFNode();

HAnimSegment898.children[0] = Transform899;

let Shape902 = browser.currentScene.createNode("Shape");
let LineSet903 = browser.currentScene.createNode("LineSet");
LineSet903.vertexCount = new MFInt32(new int[2]);
let Coordinate904 = browser.currentScene.createNode("Coordinate");
Coordinate904.point = new MFVec3f(new float[0.0066,1.5132,-0.0301,0.0066,1.5357,-0.0143]);
LineSet903.coord = Coordinate904;

//from vc7 to vc6 vertices 2
let ColorRGBA905 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA905.USE = "HAnimSegmentLineColorRGBA";
LineSet903.color = ColorRGBA905;

Shape902.geometry = LineSet903;

HAnimSegment898.children[1] = Shape902;

HAnimJoint897.children = new MFNode();

HAnimJoint897.children[0] = HAnimSegment898;

let HAnimJoint906 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint906.name = "vc6";
HAnimJoint906.DEF = "hanim_vc6";
HAnimJoint906.center = new SFVec3f(new float[0.0066,1.5357,-0.0143]);
HAnimJoint906.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint906.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment907 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment907.name = "c6";
HAnimSegment907.DEF = "hanim_c6";
let Transform908 = browser.currentScene.createNode("Transform");
Transform908.translation = new SFVec3f(new float[0.0066,1.5357,-0.0143]);
let Transform909 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape910 = browser.currentScene.createNode("Shape");
Shape910.USE = "HAnimJointShape";
Transform909.children = new MFNode();

Transform909.children[0] = Shape910;

Transform908.children = new MFNode();

Transform908.children[0] = Transform909;

HAnimSegment907.children = new MFNode();

HAnimSegment907.children[0] = Transform908;

let Shape911 = browser.currentScene.createNode("Shape");
let LineSet912 = browser.currentScene.createNode("LineSet");
LineSet912.vertexCount = new MFInt32(new int[2]);
let Coordinate913 = browser.currentScene.createNode("Coordinate");
Coordinate913.point = new MFVec3f(new float[0.0066,1.5357,-0.0143,0.0066,1.552,-0.0082]);
LineSet912.coord = Coordinate913;

//from vc6 to vc5 vertices 2
let ColorRGBA914 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA914.USE = "HAnimSegmentLineColorRGBA";
LineSet912.color = ColorRGBA914;

Shape911.geometry = LineSet912;

HAnimSegment907.children[1] = Shape911;

HAnimJoint906.children = new MFNode();

HAnimJoint906.children[0] = HAnimSegment907;

let HAnimJoint915 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint915.name = "vc5";
HAnimJoint915.DEF = "hanim_vc5";
HAnimJoint915.center = new SFVec3f(new float[0.0066,1.552,-0.0082]);
HAnimJoint915.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint915.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment916 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment916.name = "c5";
HAnimSegment916.DEF = "hanim_c5";
let Transform917 = browser.currentScene.createNode("Transform");
Transform917.translation = new SFVec3f(new float[0.0066,1.552,-0.0082]);
let Transform918 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape919 = browser.currentScene.createNode("Shape");
Shape919.USE = "HAnimJointShape";
Transform918.children = new MFNode();

Transform918.children[0] = Shape919;

Transform917.children = new MFNode();

Transform917.children[0] = Transform918;

HAnimSegment916.children = new MFNode();

HAnimSegment916.children[0] = Transform917;

let Shape920 = browser.currentScene.createNode("Shape");
let LineSet921 = browser.currentScene.createNode("LineSet");
LineSet921.vertexCount = new MFInt32(new int[2]);
let Coordinate922 = browser.currentScene.createNode("Coordinate");
Coordinate922.point = new MFVec3f(new float[0.0066,1.552,-0.0082,0.0066,1.5662,-0.0084]);
LineSet921.coord = Coordinate922;

//from vc5 to vc4 vertices 2
let ColorRGBA923 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA923.USE = "HAnimSegmentLineColorRGBA";
LineSet921.color = ColorRGBA923;

Shape920.geometry = LineSet921;

HAnimSegment916.children[1] = Shape920;

HAnimJoint915.children = new MFNode();

HAnimJoint915.children[0] = HAnimSegment916;

let HAnimJoint924 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint924.name = "vc4";
HAnimJoint924.DEF = "hanim_vc4";
HAnimJoint924.center = new SFVec3f(new float[0.0066,1.5662,-0.0084]);
HAnimJoint924.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint924.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment925 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment925.name = "c4";
HAnimSegment925.DEF = "hanim_c4";
let Transform926 = browser.currentScene.createNode("Transform");
Transform926.translation = new SFVec3f(new float[0.0066,1.5662,-0.0084]);
let Transform927 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape928 = browser.currentScene.createNode("Shape");
Shape928.USE = "HAnimJointShape";
Transform927.children = new MFNode();

Transform927.children[0] = Shape928;

Transform926.children = new MFNode();

Transform926.children[0] = Transform927;

HAnimSegment925.children = new MFNode();

HAnimSegment925.children[0] = Transform926;

let Shape929 = browser.currentScene.createNode("Shape");
let LineSet930 = browser.currentScene.createNode("LineSet");
LineSet930.vertexCount = new MFInt32(new int[2]);
let Coordinate931 = browser.currentScene.createNode("Coordinate");
Coordinate931.point = new MFVec3f(new float[0.0066,1.5662,-0.0084,0.0066,1.58,-0.0103]);
LineSet930.coord = Coordinate931;

//from vc4 to vc3 vertices 2
let ColorRGBA932 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA932.USE = "HAnimSegmentLineColorRGBA";
LineSet930.color = ColorRGBA932;

Shape929.geometry = LineSet930;

HAnimSegment925.children[1] = Shape929;

HAnimJoint924.children = new MFNode();

HAnimJoint924.children[0] = HAnimSegment925;

let HAnimJoint933 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint933.name = "vc3";
HAnimJoint933.DEF = "hanim_vc3";
HAnimJoint933.center = new SFVec3f(new float[0.0066,1.58,-0.0103]);
HAnimJoint933.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint933.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment934 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment934.name = "c3";
HAnimSegment934.DEF = "hanim_c3";
let Transform935 = browser.currentScene.createNode("Transform");
Transform935.translation = new SFVec3f(new float[0.0066,1.58,-0.0103]);
let Transform936 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape937 = browser.currentScene.createNode("Shape");
Shape937.USE = "HAnimJointShape";
Transform936.children = new MFNode();

Transform936.children[0] = Shape937;

Transform935.children = new MFNode();

Transform935.children[0] = Transform936;

HAnimSegment934.children = new MFNode();

HAnimSegment934.children[0] = Transform935;

let Shape938 = browser.currentScene.createNode("Shape");
let LineSet939 = browser.currentScene.createNode("LineSet");
LineSet939.vertexCount = new MFInt32(new int[2]);
let Coordinate940 = browser.currentScene.createNode("Coordinate");
Coordinate940.point = new MFVec3f(new float[0.0066,1.58,-0.0103,0.0066,1.5928,-0.0103]);
LineSet939.coord = Coordinate940;

//from vc3 to vc2 vertices 2
let ColorRGBA941 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA941.USE = "HAnimSegmentLineColorRGBA";
LineSet939.color = ColorRGBA941;

Shape938.geometry = LineSet939;

HAnimSegment934.children[1] = Shape938;

let HAnimSite942 = browser.currentScene.createNode("HAnimSite");
HAnimSite942.name = "adams_apple_pt";
HAnimSite942.DEF = "hanim_adams_apple_pt";
let TouchSensor943 = browser.currentScene.createNode("TouchSensor");
TouchSensor943.description = "HAnimSite adams_apple_pt";
HAnimSite942.children = new MFNode();

HAnimSite942.children[0] = TouchSensor943;

let Shape944 = browser.currentScene.createNode("Shape");
Shape944.USE = "HAnimSiteShape";
HAnimSite942.children[1] = Shape944;

HAnimSegment934.children[2] = HAnimSite942;

HAnimJoint933.children = new MFNode();

HAnimJoint933.children[0] = HAnimSegment934;

let HAnimJoint945 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint945.name = "vc2";
HAnimJoint945.DEF = "hanim_vc2";
HAnimJoint945.center = new SFVec3f(new float[0.0066,1.5928,-0.0103]);
HAnimJoint945.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint945.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment946 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment946.name = "c2";
HAnimSegment946.DEF = "hanim_c2";
let Transform947 = browser.currentScene.createNode("Transform");
Transform947.translation = new SFVec3f(new float[0.0066,1.5928,-0.0103]);
let Transform948 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape949 = browser.currentScene.createNode("Shape");
Shape949.USE = "HAnimJointShape";
Transform948.children = new MFNode();

Transform948.children[0] = Shape949;

Transform947.children = new MFNode();

Transform947.children[0] = Transform948;

HAnimSegment946.children = new MFNode();

HAnimSegment946.children[0] = Transform947;

let Shape950 = browser.currentScene.createNode("Shape");
let LineSet951 = browser.currentScene.createNode("LineSet");
LineSet951.vertexCount = new MFInt32(new int[2]);
let Coordinate952 = browser.currentScene.createNode("Coordinate");
Coordinate952.point = new MFVec3f(new float[0.0066,1.5928,-0.0103,0.0066,1.6144,-0.0034]);
LineSet951.coord = Coordinate952;

//from vc2 to vc1 vertices 2
let ColorRGBA953 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA953.USE = "HAnimSegmentLineColorRGBA";
LineSet951.color = ColorRGBA953;

Shape950.geometry = LineSet951;

HAnimSegment946.children[1] = Shape950;

HAnimJoint945.children = new MFNode();

HAnimJoint945.children[0] = HAnimSegment946;

let HAnimJoint954 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint954.name = "vc1";
HAnimJoint954.DEF = "hanim_vc1";
HAnimJoint954.center = new SFVec3f(new float[0.0066,1.6144,-0.0034]);
HAnimJoint954.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint954.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment955 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment955.name = "c1";
HAnimSegment955.DEF = "hanim_c1";
let Transform956 = browser.currentScene.createNode("Transform");
Transform956.translation = new SFVec3f(new float[0.0066,1.6144,-0.0034]);
let Transform957 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape958 = browser.currentScene.createNode("Shape");
Shape958.USE = "HAnimJointShape";
Transform957.children = new MFNode();

Transform957.children[0] = Shape958;

Transform956.children = new MFNode();

Transform956.children[0] = Transform957;

HAnimSegment955.children = new MFNode();

HAnimSegment955.children[0] = Transform956;

let Shape959 = browser.currentScene.createNode("Shape");
let LineSet960 = browser.currentScene.createNode("LineSet");
LineSet960.vertexCount = new MFInt32(new int[2]);
let Coordinate961 = browser.currentScene.createNode("Coordinate");
Coordinate961.point = new MFVec3f(new float[0.0066,1.6144,-0.0034,0.0044,1.6209,0.0236]);
LineSet960.coord = Coordinate961;

//from vc1 to skullbase vertices 2
let ColorRGBA962 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA962.USE = "HAnimSegmentLineColorRGBA";
LineSet960.color = ColorRGBA962;

Shape959.geometry = LineSet960;

HAnimSegment955.children[1] = Shape959;

let HAnimSite963 = browser.currentScene.createNode("HAnimSite");
HAnimSite963.name = "glabella_pt";
HAnimSite963.DEF = "hanim_glabella_pt";
let TouchSensor964 = browser.currentScene.createNode("TouchSensor");
TouchSensor964.description = "HAnimSite glabella_pt";
HAnimSite963.children = new MFNode();

HAnimSite963.children[0] = TouchSensor964;

let Shape965 = browser.currentScene.createNode("Shape");
Shape965.USE = "HAnimSiteShape";
HAnimSite963.children[1] = Shape965;

HAnimSegment955.children[2] = HAnimSite963;

let HAnimSite966 = browser.currentScene.createNode("HAnimSite");
HAnimSite966.name = "l_ectocanthus_pt";
HAnimSite966.DEF = "hanim_l_ectocanthus_pt";
let TouchSensor967 = browser.currentScene.createNode("TouchSensor");
TouchSensor967.description = "HAnimSite l_ectocanthus_pt";
HAnimSite966.children = new MFNode();

HAnimSite966.children[0] = TouchSensor967;

let Shape968 = browser.currentScene.createNode("Shape");
Shape968.USE = "HAnimSiteShape";
HAnimSite966.children[1] = Shape968;

HAnimSegment955.children[3] = HAnimSite966;

let HAnimSite969 = browser.currentScene.createNode("HAnimSite");
HAnimSite969.name = "l_infraorbitale_pt";
HAnimSite969.DEF = "hanim_l_infraorbitale_pt";
HAnimSite969.translation = new SFVec3f(new float[0.0341,1.6171,0.0752]);
let TouchSensor970 = browser.currentScene.createNode("TouchSensor");
TouchSensor970.description = "HAnimSite l_infraorbitale_pt";
HAnimSite969.children = new MFNode();

HAnimSite969.children[0] = TouchSensor970;

let Shape971 = browser.currentScene.createNode("Shape");
Shape971.USE = "HAnimSiteShape";
HAnimSite969.children[1] = Shape971;

HAnimSegment955.children[4] = HAnimSite969;

let HAnimSite972 = browser.currentScene.createNode("HAnimSite");
HAnimSite972.name = "l_tragion_pt";
HAnimSite972.DEF = "hanim_l_tragion_pt";
HAnimSite972.translation = new SFVec3f(new float[0.0739,1.6348,0.0282]);
let TouchSensor973 = browser.currentScene.createNode("TouchSensor");
TouchSensor973.description = "HAnimSite l_tragion_pt";
HAnimSite972.children = new MFNode();

HAnimSite972.children[0] = TouchSensor973;

let Shape974 = browser.currentScene.createNode("Shape");
Shape974.USE = "HAnimSiteShape";
HAnimSite972.children[1] = Shape974;

HAnimSegment955.children[5] = HAnimSite972;

let HAnimSite975 = browser.currentScene.createNode("HAnimSite");
HAnimSite975.name = "nuchale_pt";
HAnimSite975.DEF = "hanim_nuchale_pt";
HAnimSite975.translation = new SFVec3f(new float[0.0039,1.5972,-0.0796]);
let TouchSensor976 = browser.currentScene.createNode("TouchSensor");
TouchSensor976.description = "HAnimSite nuchale_pt";
HAnimSite975.children = new MFNode();

HAnimSite975.children[0] = TouchSensor976;

let Shape977 = browser.currentScene.createNode("Shape");
Shape977.USE = "HAnimSiteShape";
HAnimSite975.children[1] = Shape977;

HAnimSegment955.children[6] = HAnimSite975;

let HAnimSite978 = browser.currentScene.createNode("HAnimSite");
HAnimSite978.name = "opisthocranion_pt";
HAnimSite978.DEF = "hanim_opisthocranion_pt";
let TouchSensor979 = browser.currentScene.createNode("TouchSensor");
TouchSensor979.description = "HAnimSite opisthocranion_pt";
HAnimSite978.children = new MFNode();

HAnimSite978.children[0] = TouchSensor979;

let Shape980 = browser.currentScene.createNode("Shape");
Shape980.USE = "HAnimSiteShape";
HAnimSite978.children[1] = Shape980;

HAnimSegment955.children[7] = HAnimSite978;

let HAnimSite981 = browser.currentScene.createNode("HAnimSite");
HAnimSite981.name = "r_ectocanthus_pt";
HAnimSite981.DEF = "hanim_r_ectocanthus_pt";
let TouchSensor982 = browser.currentScene.createNode("TouchSensor");
TouchSensor982.description = "HAnimSite r_ectocanthus_pt";
HAnimSite981.children = new MFNode();

HAnimSite981.children[0] = TouchSensor982;

let Shape983 = browser.currentScene.createNode("Shape");
Shape983.USE = "HAnimSiteShape";
HAnimSite981.children[1] = Shape983;

HAnimSegment955.children[8] = HAnimSite981;

let HAnimSite984 = browser.currentScene.createNode("HAnimSite");
HAnimSite984.name = "r_infraorbitale_pt";
HAnimSite984.DEF = "hanim_r_infraorbitale_pt";
HAnimSite984.translation = new SFVec3f(new float[-0.0237,1.6171,0.0752]);
let TouchSensor985 = browser.currentScene.createNode("TouchSensor");
TouchSensor985.description = "HAnimSite r_infraorbitale_pt";
HAnimSite984.children = new MFNode();

HAnimSite984.children[0] = TouchSensor985;

let Shape986 = browser.currentScene.createNode("Shape");
Shape986.USE = "HAnimSiteShape";
HAnimSite984.children[1] = Shape986;

HAnimSegment955.children[9] = HAnimSite984;

let HAnimSite987 = browser.currentScene.createNode("HAnimSite");
HAnimSite987.name = "r_tragion_pt";
HAnimSite987.DEF = "hanim_r_tragion_pt";
HAnimSite987.translation = new SFVec3f(new float[-0.0646,1.6347,0.0302]);
let TouchSensor988 = browser.currentScene.createNode("TouchSensor");
TouchSensor988.description = "HAnimSite r_tragion_pt";
HAnimSite987.children = new MFNode();

HAnimSite987.children[0] = TouchSensor988;

let Shape989 = browser.currentScene.createNode("Shape");
Shape989.USE = "HAnimSiteShape";
HAnimSite987.children[1] = Shape989;

HAnimSegment955.children[10] = HAnimSite987;

let HAnimSite990 = browser.currentScene.createNode("HAnimSite");
HAnimSite990.name = "sellion_pt";
HAnimSite990.DEF = "hanim_sellion_pt";
HAnimSite990.translation = new SFVec3f(new float[0.0058,1.6316,0.0852]);
let TouchSensor991 = browser.currentScene.createNode("TouchSensor");
TouchSensor991.description = "HAnimSite sellion_pt";
HAnimSite990.children = new MFNode();

HAnimSite990.children[0] = TouchSensor991;

let Shape992 = browser.currentScene.createNode("Shape");
Shape992.USE = "HAnimSiteShape";
HAnimSite990.children[1] = Shape992;

HAnimSegment955.children[11] = HAnimSite990;

let HAnimSite993 = browser.currentScene.createNode("HAnimSite");
HAnimSite993.name = "skull_vertex_pt";
HAnimSite993.DEF = "hanim_skull_vertex_pt";
HAnimSite993.translation = new SFVec3f(new float[0.005,1.7504,0.0055]);
let TouchSensor994 = browser.currentScene.createNode("TouchSensor");
TouchSensor994.description = "HAnimSite skull_vertex_pt";
HAnimSite993.children = new MFNode();

HAnimSite993.children[0] = TouchSensor994;

let Shape995 = browser.currentScene.createNode("Shape");
Shape995.USE = "HAnimSiteShape";
HAnimSite993.children[1] = Shape995;

HAnimSegment955.children[12] = HAnimSite993;

HAnimJoint954.children = new MFNode();

HAnimJoint954.children[0] = HAnimSegment955;

let HAnimJoint996 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint996.name = "skullbase";
HAnimJoint996.DEF = "hanim_skullbase";
HAnimJoint996.center = new SFVec3f(new float[0.0044,1.6209,0.0236]);
HAnimJoint996.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint996.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment997 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment997.name = "skull";
HAnimSegment997.DEF = "hanim_skull";
let Transform998 = browser.currentScene.createNode("Transform");
Transform998.translation = new SFVec3f(new float[0.0044,1.6209,0.0236]);
let Transform999 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1000 = browser.currentScene.createNode("Shape");
Shape1000.USE = "HAnimJointShape";
Transform999.children = new MFNode();

Transform999.children[0] = Shape1000;

Transform998.children = new MFNode();

Transform998.children[0] = Transform999;

HAnimSegment997.children = new MFNode();

HAnimSegment997.children[0] = Transform998;

let Shape1001 = browser.currentScene.createNode("Shape");
let LineSet1002 = browser.currentScene.createNode("LineSet");
LineSet1002.vertexCount = new MFInt32(new int[2]);
let Coordinate1003 = browser.currentScene.createNode("Coordinate");
Coordinate1003.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0044,1.6209,0.0236]);
LineSet1002.coord = Coordinate1003;

//from skullbase to l_eyelid_joint vertices 2
let ColorRGBA1004 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1004.USE = "HAnimSegmentLineColorRGBA";
LineSet1002.color = ColorRGBA1004;

Shape1001.geometry = LineSet1002;

HAnimSegment997.children[1] = Shape1001;

let Shape1005 = browser.currentScene.createNode("Shape");
let LineSet1006 = browser.currentScene.createNode("LineSet");
LineSet1006.vertexCount = new MFInt32(new int[2]);
let Coordinate1007 = browser.currentScene.createNode("Coordinate");
Coordinate1007.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0044,1.6209,0.0236]);
LineSet1006.coord = Coordinate1007;

//from skullbase to r_eyelid_joint vertices 2
let ColorRGBA1008 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1008.USE = "HAnimSegmentLineColorRGBA";
LineSet1006.color = ColorRGBA1008;

Shape1005.geometry = LineSet1006;

HAnimSegment997.children[2] = Shape1005;

let Shape1009 = browser.currentScene.createNode("Shape");
let LineSet1010 = browser.currentScene.createNode("LineSet");
LineSet1010.vertexCount = new MFInt32(new int[2]);
let Coordinate1011 = browser.currentScene.createNode("Coordinate");
Coordinate1011.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0044,1.6209,0.0236]);
LineSet1010.coord = Coordinate1011;

//from skullbase to l_eyeball_joint vertices 2
let ColorRGBA1012 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1012.USE = "HAnimSegmentLineColorRGBA";
LineSet1010.color = ColorRGBA1012;

Shape1009.geometry = LineSet1010;

HAnimSegment997.children[3] = Shape1009;

let Shape1013 = browser.currentScene.createNode("Shape");
let LineSet1014 = browser.currentScene.createNode("LineSet");
LineSet1014.vertexCount = new MFInt32(new int[2]);
let Coordinate1015 = browser.currentScene.createNode("Coordinate");
Coordinate1015.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0044,1.6209,0.0236]);
LineSet1014.coord = Coordinate1015;

//from skullbase to r_eyeball_joint vertices 2
let ColorRGBA1016 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1016.USE = "HAnimSegmentLineColorRGBA";
LineSet1014.color = ColorRGBA1016;

Shape1013.geometry = LineSet1014;

HAnimSegment997.children[4] = Shape1013;

let Shape1017 = browser.currentScene.createNode("Shape");
let LineSet1018 = browser.currentScene.createNode("LineSet");
LineSet1018.vertexCount = new MFInt32(new int[2]);
let Coordinate1019 = browser.currentScene.createNode("Coordinate");
Coordinate1019.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0044,1.6209,0.0236]);
LineSet1018.coord = Coordinate1019;

//from skullbase to l_eyebrow_joint vertices 2
let ColorRGBA1020 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1020.USE = "HAnimSegmentLineColorRGBA";
LineSet1018.color = ColorRGBA1020;

Shape1017.geometry = LineSet1018;

HAnimSegment997.children[5] = Shape1017;

let Shape1021 = browser.currentScene.createNode("Shape");
let LineSet1022 = browser.currentScene.createNode("LineSet");
LineSet1022.vertexCount = new MFInt32(new int[2]);
let Coordinate1023 = browser.currentScene.createNode("Coordinate");
Coordinate1023.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0044,1.6209,0.0236]);
LineSet1022.coord = Coordinate1023;

//from skullbase to r_eyebrow_joint vertices 2
let ColorRGBA1024 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1024.USE = "HAnimSegmentLineColorRGBA";
LineSet1022.color = ColorRGBA1024;

Shape1021.geometry = LineSet1022;

HAnimSegment997.children[6] = Shape1021;

let Shape1025 = browser.currentScene.createNode("Shape");
let LineSet1026 = browser.currentScene.createNode("LineSet");
LineSet1026.vertexCount = new MFInt32(new int[2]);
let Coordinate1027 = browser.currentScene.createNode("Coordinate");
Coordinate1027.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0044,1.6209,0.0236]);
LineSet1026.coord = Coordinate1027;

//from skullbase to temporomandibular vertices 2
let ColorRGBA1028 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1028.USE = "HAnimSegmentLineColorRGBA";
LineSet1026.color = ColorRGBA1028;

Shape1025.geometry = LineSet1026;

HAnimSegment997.children[7] = Shape1025;

let HAnimSite1029 = browser.currentScene.createNode("HAnimSite");
HAnimSite1029.name = "l_gonion_pt";
HAnimSite1029.DEF = "hanim_l_gonion_pt";
HAnimSite1029.translation = new SFVec3f(new float[0.0631,1.553,0.033]);
let TouchSensor1030 = browser.currentScene.createNode("TouchSensor");
TouchSensor1030.description = "HAnimSite l_gonion_pt";
HAnimSite1029.children = new MFNode();

HAnimSite1029.children[0] = TouchSensor1030;

let Shape1031 = browser.currentScene.createNode("Shape");
Shape1031.USE = "HAnimSiteShape";
HAnimSite1029.children[1] = Shape1031;

HAnimSegment997.children[8] = HAnimSite1029;

let HAnimSite1032 = browser.currentScene.createNode("HAnimSite");
HAnimSite1032.name = "menton_pt";
HAnimSite1032.DEF = "hanim_menton_pt";
let TouchSensor1033 = browser.currentScene.createNode("TouchSensor");
TouchSensor1033.description = "HAnimSite menton_pt";
HAnimSite1032.children = new MFNode();

HAnimSite1032.children[0] = TouchSensor1033;

let Shape1034 = browser.currentScene.createNode("Shape");
Shape1034.USE = "HAnimSiteShape";
HAnimSite1032.children[1] = Shape1034;

HAnimSegment997.children[9] = HAnimSite1032;

let HAnimSite1035 = browser.currentScene.createNode("HAnimSite");
HAnimSite1035.name = "r_gonion_pt";
HAnimSite1035.DEF = "hanim_r_gonion_pt";
HAnimSite1035.translation = new SFVec3f(new float[-0.052,1.5529,0.0347]);
let TouchSensor1036 = browser.currentScene.createNode("TouchSensor");
TouchSensor1036.description = "HAnimSite r_gonion_pt";
HAnimSite1035.children = new MFNode();

HAnimSite1035.children[0] = TouchSensor1036;

let Shape1037 = browser.currentScene.createNode("Shape");
Shape1037.USE = "HAnimSiteShape";
HAnimSite1035.children[1] = Shape1037;

HAnimSegment997.children[10] = HAnimSite1035;

let HAnimSite1038 = browser.currentScene.createNode("HAnimSite");
HAnimSite1038.name = "supramenton_pt";
HAnimSite1038.DEF = "hanim_supramenton_pt";
HAnimSite1038.translation = new SFVec3f(new float[0.0061,1.541,0.0805]);
let TouchSensor1039 = browser.currentScene.createNode("TouchSensor");
TouchSensor1039.description = "HAnimSite supramenton_pt";
HAnimSite1038.children = new MFNode();

HAnimSite1038.children[0] = TouchSensor1039;

let Shape1040 = browser.currentScene.createNode("Shape");
Shape1040.USE = "HAnimSiteShape";
HAnimSite1038.children[1] = Shape1040;

HAnimSegment997.children[11] = HAnimSite1038;

HAnimJoint996.children = new MFNode();

HAnimJoint996.children[0] = HAnimSegment997;

let HAnimJoint1041 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1041.name = "l_eyelid_joint";
HAnimJoint1041.DEF = "hanim_l_eyelid_joint";
HAnimJoint1041.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1041.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint996.children[1] = HAnimJoint1041;

let HAnimJoint1042 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1042.name = "r_eyelid_joint";
HAnimJoint1042.DEF = "hanim_r_eyelid_joint";
HAnimJoint1042.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1042.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint996.children[2] = HAnimJoint1042;

let HAnimJoint1043 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1043.name = "l_eyeball_joint";
HAnimJoint1043.DEF = "hanim_l_eyeball_joint";
HAnimJoint1043.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1043.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint996.children[3] = HAnimJoint1043;

let HAnimJoint1044 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1044.name = "r_eyeball_joint";
HAnimJoint1044.DEF = "hanim_r_eyeball_joint";
HAnimJoint1044.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1044.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint996.children[4] = HAnimJoint1044;

let HAnimJoint1045 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1045.name = "l_eyebrow_joint";
HAnimJoint1045.DEF = "hanim_l_eyebrow_joint";
HAnimJoint1045.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1045.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint996.children[5] = HAnimJoint1045;

let HAnimJoint1046 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1046.name = "r_eyebrow_joint";
HAnimJoint1046.DEF = "hanim_r_eyebrow_joint";
HAnimJoint1046.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1046.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint996.children[6] = HAnimJoint1046;

let HAnimJoint1047 = browser.currentScene.createNode("HAnimJoint");
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

let HAnimJoint1048 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1048.name = "l_sternoclavicular";
HAnimJoint1048.DEF = "hanim_l_sternoclavicular";
HAnimJoint1048.center = new SFVec3f(new float[0.082,1.4488,-0.0353]);
HAnimJoint1048.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1048.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1049 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1049.name = "l_clavicle";
HAnimSegment1049.DEF = "hanim_l_clavicle";
let Transform1050 = browser.currentScene.createNode("Transform");
Transform1050.translation = new SFVec3f(new float[0.082,1.4488,-0.0353]);
let Transform1051 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1052 = browser.currentScene.createNode("Shape");
Shape1052.USE = "HAnimJointShape";
Transform1051.children = new MFNode();

Transform1051.children[0] = Shape1052;

Transform1050.children = new MFNode();

Transform1050.children[0] = Transform1051;

HAnimSegment1049.children = new MFNode();

HAnimSegment1049.children[0] = Transform1050;

let Shape1053 = browser.currentScene.createNode("Shape");
let LineSet1054 = browser.currentScene.createNode("LineSet");
LineSet1054.vertexCount = new MFInt32(new int[2]);
let Coordinate1055 = browser.currentScene.createNode("Coordinate");
Coordinate1055.point = new MFVec3f(new float[0.082,1.4488,-0.0353,0.0962,1.4269,-0.0424]);
LineSet1054.coord = Coordinate1055;

//from l_sternoclavicular to l_acromioclavicular vertices 2
let ColorRGBA1056 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1056.USE = "HAnimSegmentLineColorRGBA";
LineSet1054.color = ColorRGBA1056;

Shape1053.geometry = LineSet1054;

HAnimSegment1049.children[1] = Shape1053;

HAnimJoint1048.children = new MFNode();

HAnimJoint1048.children[0] = HAnimSegment1049;

let HAnimJoint1057 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1057.name = "l_acromioclavicular";
HAnimJoint1057.DEF = "hanim_l_acromioclavicular";
HAnimJoint1057.center = new SFVec3f(new float[0.0962,1.4269,-0.0424]);
HAnimJoint1057.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1057.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1058 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1058.name = "l_scapula";
HAnimSegment1058.DEF = "hanim_l_scapula";
let Transform1059 = browser.currentScene.createNode("Transform");
Transform1059.translation = new SFVec3f(new float[0.0962,1.4269,-0.0424]);
let Transform1060 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1061 = browser.currentScene.createNode("Shape");
Shape1061.USE = "HAnimJointShape";
Transform1060.children = new MFNode();

Transform1060.children[0] = Shape1061;

Transform1059.children = new MFNode();

Transform1059.children[0] = Transform1060;

HAnimSegment1058.children = new MFNode();

HAnimSegment1058.children[0] = Transform1059;

let Shape1062 = browser.currentScene.createNode("Shape");
let LineSet1063 = browser.currentScene.createNode("LineSet");
LineSet1063.vertexCount = new MFInt32(new int[2]);
let Coordinate1064 = browser.currentScene.createNode("Coordinate");
Coordinate1064.point = new MFVec3f(new float[0.0962,1.4269,-0.0424,0.2029,1.4376,-0.0387]);
LineSet1063.coord = Coordinate1064;

//from l_acromioclavicular to l_shoulder vertices 2
let ColorRGBA1065 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1065.USE = "HAnimSegmentLineColorRGBA";
LineSet1063.color = ColorRGBA1065;

Shape1062.geometry = LineSet1063;

HAnimSegment1058.children[1] = Shape1062;

let HAnimSite1066 = browser.currentScene.createNode("HAnimSite");
HAnimSite1066.name = "l_bideltoid_pt";
HAnimSite1066.DEF = "hanim_l_bideltoid_pt";
let TouchSensor1067 = browser.currentScene.createNode("TouchSensor");
TouchSensor1067.description = "HAnimSite l_bideltoid_pt";
HAnimSite1066.children = new MFNode();

HAnimSite1066.children[0] = TouchSensor1067;

let Shape1068 = browser.currentScene.createNode("Shape");
Shape1068.USE = "HAnimSiteShape";
HAnimSite1066.children[1] = Shape1068;

HAnimSegment1058.children[2] = HAnimSite1066;

let HAnimSite1069 = browser.currentScene.createNode("HAnimSite");
HAnimSite1069.name = "l_humeral_lateral_epicondyles_pt";
HAnimSite1069.DEF = "hanim_l_humeral_lateral_epicondyles_pt";
HAnimSite1069.translation = new SFVec3f(new float[0.228,1.1482,-0.11]);
let TouchSensor1070 = browser.currentScene.createNode("TouchSensor");
TouchSensor1070.description = "HAnimSite l_humeral_lateral_epicondyles_pt";
HAnimSite1069.children = new MFNode();

HAnimSite1069.children[0] = TouchSensor1070;

let Shape1071 = browser.currentScene.createNode("Shape");
Shape1071.USE = "HAnimSiteShape";
HAnimSite1069.children[1] = Shape1071;

HAnimSegment1058.children[3] = HAnimSite1069;

HAnimJoint1057.children = new MFNode();

HAnimJoint1057.children[0] = HAnimSegment1058;

let HAnimJoint1072 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1072.name = "l_shoulder";
HAnimJoint1072.DEF = "hanim_l_shoulder";
HAnimJoint1072.center = new SFVec3f(new float[0.2029,1.4376,-0.0387]);
HAnimJoint1072.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1072.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1073 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1073.name = "l_upperarm";
HAnimSegment1073.DEF = "hanim_l_upperarm";
let Transform1074 = browser.currentScene.createNode("Transform");
Transform1074.translation = new SFVec3f(new float[0.2029,1.4376,-0.0387]);
let Transform1075 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1076 = browser.currentScene.createNode("Shape");
Shape1076.USE = "HAnimJointShape";
Transform1075.children = new MFNode();

Transform1075.children[0] = Shape1076;

Transform1074.children = new MFNode();

Transform1074.children[0] = Transform1075;

HAnimSegment1073.children = new MFNode();

HAnimSegment1073.children[0] = Transform1074;

let Shape1077 = browser.currentScene.createNode("Shape");
let LineSet1078 = browser.currentScene.createNode("LineSet");
LineSet1078.vertexCount = new MFInt32(new int[2]);
let Coordinate1079 = browser.currentScene.createNode("Coordinate");
Coordinate1079.point = new MFVec3f(new float[0.2029,1.4376,-0.0387,0.2014,1.1357,-0.0682]);
LineSet1078.coord = Coordinate1079;

//from l_shoulder to l_elbow vertices 2
let ColorRGBA1080 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1080.USE = "HAnimSegmentLineColorRGBA";
LineSet1078.color = ColorRGBA1080;

Shape1077.geometry = LineSet1078;

HAnimSegment1073.children[1] = Shape1077;

let HAnimSite1081 = browser.currentScene.createNode("HAnimSite");
HAnimSite1081.name = "l_humeral_medial_epicondyles_pt";
HAnimSite1081.DEF = "hanim_l_humeral_medial_epicondyles_pt";
HAnimSite1081.translation = new SFVec3f(new float[0.1735,1.1272,-0.1113]);
let TouchSensor1082 = browser.currentScene.createNode("TouchSensor");
TouchSensor1082.description = "HAnimSite l_humeral_medial_epicondyles_pt";
HAnimSite1081.children = new MFNode();

HAnimSite1081.children[0] = TouchSensor1082;

let Shape1083 = browser.currentScene.createNode("Shape");
Shape1083.USE = "HAnimSiteShape";
HAnimSite1081.children[1] = Shape1083;

HAnimSegment1073.children[2] = HAnimSite1081;

let HAnimSite1084 = browser.currentScene.createNode("HAnimSite");
HAnimSite1084.name = "l_olecranon_pt";
HAnimSite1084.DEF = "hanim_l_olecranon_pt";
HAnimSite1084.translation = new SFVec3f(new float[-0.1962,1.1375,-0.1123]);
let TouchSensor1085 = browser.currentScene.createNode("TouchSensor");
TouchSensor1085.description = "HAnimSite l_olecranon_pt";
HAnimSite1084.children = new MFNode();

HAnimSite1084.children[0] = TouchSensor1085;

let Shape1086 = browser.currentScene.createNode("Shape");
Shape1086.USE = "HAnimSiteShape";
HAnimSite1084.children[1] = Shape1086;

HAnimSegment1073.children[3] = HAnimSite1084;

let HAnimSite1087 = browser.currentScene.createNode("HAnimSite");
HAnimSite1087.name = "l_radial_styloid_pt";
HAnimSite1087.DEF = "hanim_l_radial_styloid_pt";
HAnimSite1087.translation = new SFVec3f(new float[0.1901,0.8645,-0.0415]);
let TouchSensor1088 = browser.currentScene.createNode("TouchSensor");
TouchSensor1088.description = "HAnimSite l_radial_styloid_pt";
HAnimSite1087.children = new MFNode();

HAnimSite1087.children[0] = TouchSensor1088;

let Shape1089 = browser.currentScene.createNode("Shape");
Shape1089.USE = "HAnimSiteShape";
HAnimSite1087.children[1] = Shape1089;

HAnimSegment1073.children[4] = HAnimSite1087;

let HAnimSite1090 = browser.currentScene.createNode("HAnimSite");
HAnimSite1090.name = "l_radiale_pt";
HAnimSite1090.DEF = "hanim_l_radiale_pt";
HAnimSite1090.translation = new SFVec3f(new float[0.2182,1.1212,-0.1167]);
let TouchSensor1091 = browser.currentScene.createNode("TouchSensor");
TouchSensor1091.description = "HAnimSite l_radiale_pt";
HAnimSite1090.children = new MFNode();

HAnimSite1090.children[0] = TouchSensor1091;

let Shape1092 = browser.currentScene.createNode("Shape");
Shape1092.USE = "HAnimSiteShape";
HAnimSite1090.children[1] = Shape1092;

HAnimSegment1073.children[5] = HAnimSite1090;

HAnimJoint1072.children = new MFNode();

HAnimJoint1072.children[0] = HAnimSegment1073;

let HAnimJoint1093 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1093.name = "l_elbow";
HAnimJoint1093.DEF = "hanim_l_elbow";
HAnimJoint1093.center = new SFVec3f(new float[0.2014,1.1357,-0.0682]);
HAnimJoint1093.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1093.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1094 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1094.name = "l_forearm";
HAnimSegment1094.DEF = "hanim_l_forearm";
let Transform1095 = browser.currentScene.createNode("Transform");
Transform1095.translation = new SFVec3f(new float[0.2014,1.1357,-0.0682]);
let Transform1096 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1097 = browser.currentScene.createNode("Shape");
Shape1097.USE = "HAnimJointShape";
Transform1096.children = new MFNode();

Transform1096.children[0] = Shape1097;

Transform1095.children = new MFNode();

Transform1095.children[0] = Transform1096;

HAnimSegment1094.children = new MFNode();

HAnimSegment1094.children[0] = Transform1095;

let Shape1098 = browser.currentScene.createNode("Shape");
let LineSet1099 = browser.currentScene.createNode("LineSet");
LineSet1099.vertexCount = new MFInt32(new int[2]);
let Coordinate1100 = browser.currentScene.createNode("Coordinate");
Coordinate1100.point = new MFVec3f(new float[0.2014,1.1357,-0.0682,0.1984,0.8663,-0.0583]);
LineSet1099.coord = Coordinate1100;

//from l_elbow to l_radiocarpal vertices 2
let ColorRGBA1101 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1101.USE = "HAnimSegmentLineColorRGBA";
LineSet1099.color = ColorRGBA1101;

Shape1098.geometry = LineSet1099;

HAnimSegment1094.children[1] = Shape1098;

let HAnimSite1102 = browser.currentScene.createNode("HAnimSite");
HAnimSite1102.name = "l_ulnar_styloid_pt";
HAnimSite1102.DEF = "hanim_l_ulnar_styloid_pt";
HAnimSite1102.translation = new SFVec3f(new float[-0.2142,0.8529,-0.0648]);
let TouchSensor1103 = browser.currentScene.createNode("TouchSensor");
TouchSensor1103.description = "HAnimSite l_ulnar_styloid_pt";
HAnimSite1102.children = new MFNode();

HAnimSite1102.children[0] = TouchSensor1103;

let Shape1104 = browser.currentScene.createNode("Shape");
Shape1104.USE = "HAnimSiteShape";
HAnimSite1102.children[1] = Shape1104;

HAnimSegment1094.children[2] = HAnimSite1102;

HAnimJoint1093.children = new MFNode();

HAnimJoint1093.children[0] = HAnimSegment1094;

let HAnimJoint1105 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1105.name = "l_radiocarpal";
HAnimJoint1105.DEF = "hanim_l_radiocarpal";
HAnimJoint1105.center = new SFVec3f(new float[0.1984,0.8663,-0.0583]);
HAnimJoint1105.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1105.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1106 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1106.name = "l_carpal";
HAnimSegment1106.DEF = "hanim_l_carpal";
let Transform1107 = browser.currentScene.createNode("Transform");
Transform1107.scale = new SFVec3f(new float[0.2,0.2,0.2]);
Transform1107.translation = new SFVec3f(new float[0.2,0.85,-0.05]);
Transform1107.rotation = new SFRotation(new float[0,0,1,-3.14]);
//Transform left hand
let Transform1108 = browser.currentScene.createNode("Transform");
Transform1108.rotation = new SFRotation(new float[0,1,0,-1.57]);
//Transform left hand
let Shape1109 = browser.currentScene.createNode("Shape");
Shape1109.USE = "HAnimJointShape";
Transform1108.children = new MFNode();

Transform1108.children[0] = Shape1109;

Transform1107.children = new MFNode();

Transform1107.children[0] = Transform1108;

HAnimSegment1106.children = new MFNode();

HAnimSegment1106.children[0] = Transform1107;

let Shape1110 = browser.currentScene.createNode("Shape");
let LineSet1111 = browser.currentScene.createNode("LineSet");
LineSet1111.vertexCount = new MFInt32(new int[2]);
let Coordinate1112 = browser.currentScene.createNode("Coordinate");
Coordinate1112.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1984,0.8663,-0.0583]);
LineSet1111.coord = Coordinate1112;

//from l_radiocarpal to l_midcarpal_1 vertices 2
let ColorRGBA1113 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1113.USE = "HAnimSegmentLineColorRGBA";
LineSet1111.color = ColorRGBA1113;

Shape1110.geometry = LineSet1111;

HAnimSegment1106.children[1] = Shape1110;

let Shape1114 = browser.currentScene.createNode("Shape");
let LineSet1115 = browser.currentScene.createNode("LineSet");
LineSet1115.vertexCount = new MFInt32(new int[2]);
let Coordinate1116 = browser.currentScene.createNode("Coordinate");
Coordinate1116.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1984,0.8663,-0.0583]);
LineSet1115.coord = Coordinate1116;

//from l_radiocarpal to l_midcarpal_2 vertices 2
let ColorRGBA1117 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1117.USE = "HAnimSegmentLineColorRGBA";
LineSet1115.color = ColorRGBA1117;

Shape1114.geometry = LineSet1115;

HAnimSegment1106.children[2] = Shape1114;

let Shape1118 = browser.currentScene.createNode("Shape");
let LineSet1119 = browser.currentScene.createNode("LineSet");
LineSet1119.vertexCount = new MFInt32(new int[2]);
let Coordinate1120 = browser.currentScene.createNode("Coordinate");
Coordinate1120.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1984,0.8663,-0.0583]);
LineSet1119.coord = Coordinate1120;

//from l_radiocarpal to l_midcarpal_3 vertices 2
let ColorRGBA1121 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1121.USE = "HAnimSegmentLineColorRGBA";
LineSet1119.color = ColorRGBA1121;

Shape1118.geometry = LineSet1119;

HAnimSegment1106.children[3] = Shape1118;

let Shape1122 = browser.currentScene.createNode("Shape");
let LineSet1123 = browser.currentScene.createNode("LineSet");
LineSet1123.vertexCount = new MFInt32(new int[2]);
let Coordinate1124 = browser.currentScene.createNode("Coordinate");
Coordinate1124.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1984,0.8663,-0.0583]);
LineSet1123.coord = Coordinate1124;

//from l_radiocarpal to l_midcarpal_4_5 vertices 2
let ColorRGBA1125 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1125.USE = "HAnimSegmentLineColorRGBA";
LineSet1123.color = ColorRGBA1125;

Shape1122.geometry = LineSet1123;

HAnimSegment1106.children[4] = Shape1122;

HAnimJoint1105.children = new MFNode();

HAnimJoint1105.children[0] = HAnimSegment1106;

let HAnimJoint1126 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1126.name = "l_midcarpal_1";
HAnimJoint1126.DEF = "hanim_l_midcarpal_1";
HAnimJoint1126.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1126.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1127 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1127.name = "l_trapezium";
HAnimSegment1127.DEF = "hanim_l_trapezium";
let Transform1128 = browser.currentScene.createNode("Transform");
Transform1128.translation = new SFVec3f(new float[0.1984,0.8663,-0.0583]);
let Transform1129 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1130 = browser.currentScene.createNode("Shape");
Shape1130.USE = "HAnimJointShape";
Transform1129.children = new MFNode();

Transform1129.children[0] = Shape1130;

Transform1128.children = new MFNode();

Transform1128.children[0] = Transform1129;

HAnimSegment1127.children = new MFNode();

HAnimSegment1127.children[0] = Transform1128;

let Shape1131 = browser.currentScene.createNode("Shape");
let LineSet1132 = browser.currentScene.createNode("LineSet");
LineSet1132.vertexCount = new MFInt32(new int[2]);
let Coordinate1133 = browser.currentScene.createNode("Coordinate");
Coordinate1133.point = new MFVec3f(new float[0.1924,0.8472,-0.0534]);
LineSet1132.coord = Coordinate1133;

//from l_midcarpal_1 to l_carpometacarpal_1 vertices 1
let ColorRGBA1134 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1134.USE = "HAnimSegmentLineColorRGBA";
LineSet1132.color = ColorRGBA1134;

Shape1131.geometry = LineSet1132;

HAnimSegment1127.children[1] = Shape1131;

HAnimJoint1126.children = new MFNode();

HAnimJoint1126.children[0] = HAnimSegment1127;

let HAnimJoint1135 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1135.name = "l_carpometacarpal_1";
HAnimJoint1135.DEF = "hanim_l_carpometacarpal_1";
HAnimJoint1135.center = new SFVec3f(new float[0.1924,0.8472,-0.0534]);
HAnimJoint1135.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1135.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1136 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1136.name = "l_metacarpal_1";
HAnimSegment1136.DEF = "hanim_l_metacarpal_1";
let Transform1137 = browser.currentScene.createNode("Transform");
Transform1137.translation = new SFVec3f(new float[0.1924,0.8472,-0.0534]);
let Transform1138 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1139 = browser.currentScene.createNode("Shape");
Shape1139.USE = "HAnimJointShape";
Transform1138.children = new MFNode();

Transform1138.children[0] = Shape1139;

Transform1137.children = new MFNode();

Transform1137.children[0] = Transform1138;

HAnimSegment1136.children = new MFNode();

HAnimSegment1136.children[0] = Transform1137;

let Shape1140 = browser.currentScene.createNode("Shape");
let LineSet1141 = browser.currentScene.createNode("LineSet");
LineSet1141.vertexCount = new MFInt32(new int[2]);
let Coordinate1142 = browser.currentScene.createNode("Coordinate");
Coordinate1142.point = new MFVec3f(new float[0.1924,0.8472,-0.0534,0.1951,0.8226,0.0246]);
LineSet1141.coord = Coordinate1142;

//from l_carpometacarpal_1 to l_metacarpophalangeal_1 vertices 2
let ColorRGBA1143 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1143.USE = "HAnimSegmentLineColorRGBA";
LineSet1141.color = ColorRGBA1143;

Shape1140.geometry = LineSet1141;

HAnimSegment1136.children[1] = Shape1140;

HAnimJoint1135.children = new MFNode();

HAnimJoint1135.children[0] = HAnimSegment1136;

let HAnimJoint1144 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1144.name = "l_metacarpophalangeal_1";
HAnimJoint1144.DEF = "hanim_l_metacarpophalangeal_1";
HAnimJoint1144.center = new SFVec3f(new float[0.1951,0.8226,0.0246]);
HAnimJoint1144.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1144.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1145 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1145.name = "l_carpal_proximal_phalanx_1";
HAnimSegment1145.DEF = "hanim_l_carpal_proximal_phalanx_1";
let Transform1146 = browser.currentScene.createNode("Transform");
Transform1146.translation = new SFVec3f(new float[0.1951,0.8226,0.0246]);
let Transform1147 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1148 = browser.currentScene.createNode("Shape");
Shape1148.USE = "HAnimJointShape";
Transform1147.children = new MFNode();

Transform1147.children[0] = Shape1148;

Transform1146.children = new MFNode();

Transform1146.children[0] = Transform1147;

HAnimSegment1145.children = new MFNode();

HAnimSegment1145.children[0] = Transform1146;

let Shape1149 = browser.currentScene.createNode("Shape");
let LineSet1150 = browser.currentScene.createNode("LineSet");
LineSet1150.vertexCount = new MFInt32(new int[2]);
let Coordinate1151 = browser.currentScene.createNode("Coordinate");
Coordinate1151.point = new MFVec3f(new float[0.1951,0.8226,0.0246,0.1955,0.8159,0.0464]);
LineSet1150.coord = Coordinate1151;

//from l_metacarpophalangeal_1 to l_carpal_interphalangeal_1 vertices 2
let ColorRGBA1152 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1152.USE = "HAnimSegmentLineColorRGBA";
LineSet1150.color = ColorRGBA1152;

Shape1149.geometry = LineSet1150;

HAnimSegment1145.children[1] = Shape1149;

let HAnimSite1153 = browser.currentScene.createNode("HAnimSite");
HAnimSite1153.name = "l_carpal_distal_phalanx_1_tip";
HAnimSite1153.DEF = "hanim_l_carpal_distal_phalanx_1_tip";
let TouchSensor1154 = browser.currentScene.createNode("TouchSensor");
TouchSensor1154.description = "HAnimSite l_carpal_distal_phalanx_1_tip";
HAnimSite1153.children = new MFNode();

HAnimSite1153.children[0] = TouchSensor1154;

let Shape1155 = browser.currentScene.createNode("Shape");
Shape1155.USE = "HAnimSiteShape";
HAnimSite1153.children[1] = Shape1155;

HAnimSegment1145.children[2] = HAnimSite1153;

HAnimJoint1144.children = new MFNode();

HAnimJoint1144.children[0] = HAnimSegment1145;

let HAnimJoint1156 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1156.name = "l_carpal_interphalangeal_1";
HAnimJoint1156.DEF = "hanim_l_carpal_interphalangeal_1";
HAnimJoint1156.center = new SFVec3f(new float[0.1955,0.8159,0.0464]);
HAnimJoint1156.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1156.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1144.children[1] = HAnimJoint1156;

HAnimJoint1135.children[1] = HAnimJoint1144;

HAnimJoint1126.children[1] = HAnimJoint1135;

HAnimJoint1105.children[1] = HAnimJoint1126;

let HAnimJoint1157 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1157.name = "l_midcarpal_2";
HAnimJoint1157.DEF = "hanim_l_midcarpal_2";
HAnimJoint1157.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1157.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1158 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1158.name = "l_trapezoid";
HAnimSegment1158.DEF = "hanim_l_trapezoid";
let Transform1159 = browser.currentScene.createNode("Transform");
Transform1159.translation = new SFVec3f(new float[0.1955,0.8159,0.0464]);
let Transform1160 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1161 = browser.currentScene.createNode("Shape");
Shape1161.USE = "HAnimJointShape";
Transform1160.children = new MFNode();

Transform1160.children[0] = Shape1161;

Transform1159.children = new MFNode();

Transform1159.children[0] = Transform1160;

HAnimSegment1158.children = new MFNode();

HAnimSegment1158.children[0] = Transform1159;

let Shape1162 = browser.currentScene.createNode("Shape");
let LineSet1163 = browser.currentScene.createNode("LineSet");
LineSet1163.vertexCount = new MFInt32(new int[2]);
let Coordinate1164 = browser.currentScene.createNode("Coordinate");
Coordinate1164.point = new MFVec3f(new float[0.1983,0.8024,-0.028]);
LineSet1163.coord = Coordinate1164;

//from l_midcarpal_2 to l_carpometacarpal_2 vertices 1
let ColorRGBA1165 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1165.USE = "HAnimSegmentLineColorRGBA";
LineSet1163.color = ColorRGBA1165;

Shape1162.geometry = LineSet1163;

HAnimSegment1158.children[1] = Shape1162;

let HAnimSite1166 = browser.currentScene.createNode("HAnimSite");
HAnimSite1166.name = "l_metacarpal_phalanx_2_pt";
HAnimSite1166.DEF = "hanim_l_metacarpal_phalanx_2_pt";
HAnimSite1166.translation = new SFVec3f(new float[0.2009,0.8139,-0.0237]);
let TouchSensor1167 = browser.currentScene.createNode("TouchSensor");
TouchSensor1167.description = "HAnimSite l_metacarpal_phalanx_2_pt";
HAnimSite1166.children = new MFNode();

HAnimSite1166.children[0] = TouchSensor1167;

let Shape1168 = browser.currentScene.createNode("Shape");
Shape1168.USE = "HAnimSiteShape";
HAnimSite1166.children[1] = Shape1168;

HAnimSegment1158.children[2] = HAnimSite1166;

HAnimJoint1157.children = new MFNode();

HAnimJoint1157.children[0] = HAnimSegment1158;

let HAnimJoint1169 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1169.name = "l_carpometacarpal_2";
HAnimJoint1169.DEF = "hanim_l_carpometacarpal_2";
HAnimJoint1169.center = new SFVec3f(new float[0.1983,0.8024,-0.028]);
HAnimJoint1169.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1169.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1170 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1170.name = "l_metacarpal_2";
HAnimSegment1170.DEF = "hanim_l_metacarpal_2";
let Transform1171 = browser.currentScene.createNode("Transform");
Transform1171.translation = new SFVec3f(new float[0.1983,0.8024,-0.028]);
let Transform1172 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1173 = browser.currentScene.createNode("Shape");
Shape1173.USE = "HAnimJointShape";
Transform1172.children = new MFNode();

Transform1172.children[0] = Shape1173;

Transform1171.children = new MFNode();

Transform1171.children[0] = Transform1172;

HAnimSegment1170.children = new MFNode();

HAnimSegment1170.children[0] = Transform1171;

let Shape1174 = browser.currentScene.createNode("Shape");
let LineSet1175 = browser.currentScene.createNode("LineSet");
LineSet1175.vertexCount = new MFInt32(new int[2]);
let Coordinate1176 = browser.currentScene.createNode("Coordinate");
Coordinate1176.point = new MFVec3f(new float[0.1983,0.8024,-0.028,0.1983,0.7815,-0.028]);
LineSet1175.coord = Coordinate1176;

//from l_carpometacarpal_2 to l_metacarpophalangeal_2 vertices 2
let ColorRGBA1177 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1177.USE = "HAnimSegmentLineColorRGBA";
LineSet1175.color = ColorRGBA1177;

Shape1174.geometry = LineSet1175;

HAnimSegment1170.children[1] = Shape1174;

HAnimJoint1169.children = new MFNode();

HAnimJoint1169.children[0] = HAnimSegment1170;

let HAnimJoint1178 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1178.name = "l_metacarpophalangeal_2";
HAnimJoint1178.DEF = "hanim_l_metacarpophalangeal_2";
HAnimJoint1178.center = new SFVec3f(new float[0.1983,0.7815,-0.028]);
HAnimJoint1178.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1178.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1179 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1179.name = "l_carpal_proximal_phalanx_2";
HAnimSegment1179.DEF = "hanim_l_carpal_proximal_phalanx_2";
let Transform1180 = browser.currentScene.createNode("Transform");
Transform1180.translation = new SFVec3f(new float[0.1983,0.7815,-0.028]);
let Transform1181 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1182 = browser.currentScene.createNode("Shape");
Shape1182.USE = "HAnimJointShape";
Transform1181.children = new MFNode();

Transform1181.children[0] = Shape1182;

Transform1180.children = new MFNode();

Transform1180.children[0] = Transform1181;

HAnimSegment1179.children = new MFNode();

HAnimSegment1179.children[0] = Transform1180;

let Shape1183 = browser.currentScene.createNode("Shape");
let LineSet1184 = browser.currentScene.createNode("LineSet");
LineSet1184.vertexCount = new MFInt32(new int[2]);
let Coordinate1185 = browser.currentScene.createNode("Coordinate");
Coordinate1185.point = new MFVec3f(new float[0.1983,0.7815,-0.028,0.2017,0.7363,-0.0248]);
LineSet1184.coord = Coordinate1185;

//from l_metacarpophalangeal_2 to l_carpal_proximal_interphalangeal_2 vertices 2
let ColorRGBA1186 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1186.USE = "HAnimSegmentLineColorRGBA";
LineSet1184.color = ColorRGBA1186;

Shape1183.geometry = LineSet1184;

HAnimSegment1179.children[1] = Shape1183;

HAnimJoint1178.children = new MFNode();

HAnimJoint1178.children[0] = HAnimSegment1179;

let HAnimJoint1187 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1187.name = "l_carpal_proximal_interphalangeal_2";
HAnimJoint1187.DEF = "hanim_l_carpal_proximal_interphalangeal_2";
HAnimJoint1187.center = new SFVec3f(new float[0.2017,0.7363,-0.0248]);
HAnimJoint1187.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1187.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1188 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1188.name = "l_carpal_middle_phalanx_2";
HAnimSegment1188.DEF = "hanim_l_carpal_middle_phalanx_2";
let Transform1189 = browser.currentScene.createNode("Transform");
Transform1189.translation = new SFVec3f(new float[0.2017,0.7363,-0.0248]);
let Transform1190 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1191 = browser.currentScene.createNode("Shape");
Shape1191.USE = "HAnimJointShape";
Transform1190.children = new MFNode();

Transform1190.children[0] = Shape1191;

Transform1189.children = new MFNode();

Transform1189.children[0] = Transform1190;

HAnimSegment1188.children = new MFNode();

HAnimSegment1188.children[0] = Transform1189;

let Shape1192 = browser.currentScene.createNode("Shape");
let LineSet1193 = browser.currentScene.createNode("LineSet");
LineSet1193.vertexCount = new MFInt32(new int[2]);
let Coordinate1194 = browser.currentScene.createNode("Coordinate");
Coordinate1194.point = new MFVec3f(new float[0.2017,0.7363,-0.0248,0.2028,0.7139,-0.0236]);
LineSet1193.coord = Coordinate1194;

//from l_carpal_proximal_interphalangeal_2 to l_carpal_distal_interphalangeal_2 vertices 2
let ColorRGBA1195 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1195.USE = "HAnimSegmentLineColorRGBA";
LineSet1193.color = ColorRGBA1195;

Shape1192.geometry = LineSet1193;

HAnimSegment1188.children[1] = Shape1192;

let HAnimSite1196 = browser.currentScene.createNode("HAnimSite");
HAnimSite1196.name = "l_carpal_distal_phalanx_2_tip";
HAnimSite1196.DEF = "hanim_l_carpal_distal_phalanx_2_tip";
let TouchSensor1197 = browser.currentScene.createNode("TouchSensor");
TouchSensor1197.description = "HAnimSite l_carpal_distal_phalanx_2_tip";
HAnimSite1196.children = new MFNode();

HAnimSite1196.children[0] = TouchSensor1197;

let Shape1198 = browser.currentScene.createNode("Shape");
Shape1198.USE = "HAnimSiteShape";
HAnimSite1196.children[1] = Shape1198;

HAnimSegment1188.children[2] = HAnimSite1196;

let HAnimSite1199 = browser.currentScene.createNode("HAnimSite");
HAnimSite1199.name = "l_dactylion_pt";
HAnimSite1199.DEF = "hanim_l_dactylion_pt";
HAnimSite1199.translation = new SFVec3f(new float[0.2056,0.6743,-0.0482]);
let TouchSensor1200 = browser.currentScene.createNode("TouchSensor");
TouchSensor1200.description = "HAnimSite l_dactylion_pt";
HAnimSite1199.children = new MFNode();

HAnimSite1199.children[0] = TouchSensor1200;

let Shape1201 = browser.currentScene.createNode("Shape");
Shape1201.USE = "HAnimSiteShape";
HAnimSite1199.children[1] = Shape1201;

HAnimSegment1188.children[3] = HAnimSite1199;

HAnimJoint1187.children = new MFNode();

HAnimJoint1187.children[0] = HAnimSegment1188;

let HAnimJoint1202 = browser.currentScene.createNode("HAnimJoint");
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

let HAnimJoint1203 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1203.name = "l_midcarpal_3";
HAnimJoint1203.DEF = "hanim_l_midcarpal_3";
HAnimJoint1203.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1203.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1204 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1204.name = "l_capitate";
HAnimSegment1204.DEF = "hanim_l_capitate";
let Transform1205 = browser.currentScene.createNode("Transform");
Transform1205.translation = new SFVec3f(new float[0.2028,0.7139,-0.0236]);
let Transform1206 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1207 = browser.currentScene.createNode("Shape");
Shape1207.USE = "HAnimJointShape";
Transform1206.children = new MFNode();

Transform1206.children[0] = Shape1207;

Transform1205.children = new MFNode();

Transform1205.children[0] = Transform1206;

HAnimSegment1204.children = new MFNode();

HAnimSegment1204.children[0] = Transform1205;

let Shape1208 = browser.currentScene.createNode("Shape");
let LineSet1209 = browser.currentScene.createNode("LineSet");
LineSet1209.vertexCount = new MFInt32(new int[2]);
let Coordinate1210 = browser.currentScene.createNode("Coordinate");
Coordinate1210.point = new MFVec3f(new float[0.1987,0.8029,-0.053]);
LineSet1209.coord = Coordinate1210;

//from l_midcarpal_3 to l_carpometacarpal_3 vertices 1
let ColorRGBA1211 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1211.USE = "HAnimSegmentLineColorRGBA";
LineSet1209.color = ColorRGBA1211;

Shape1208.geometry = LineSet1209;

HAnimSegment1204.children[1] = Shape1208;

let HAnimSite1212 = browser.currentScene.createNode("HAnimSite");
HAnimSite1212.name = "l_metacarpal_phalanx_3_pt";
HAnimSite1212.DEF = "hanim_l_metacarpal_phalanx_3_pt";
let TouchSensor1213 = browser.currentScene.createNode("TouchSensor");
TouchSensor1213.description = "HAnimSite l_metacarpal_phalanx_3_pt";
HAnimSite1212.children = new MFNode();

HAnimSite1212.children[0] = TouchSensor1213;

let Shape1214 = browser.currentScene.createNode("Shape");
Shape1214.USE = "HAnimSiteShape";
HAnimSite1212.children[1] = Shape1214;

HAnimSegment1204.children[2] = HAnimSite1212;

HAnimJoint1203.children = new MFNode();

HAnimJoint1203.children[0] = HAnimSegment1204;

let HAnimJoint1215 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1215.name = "l_carpometacarpal_3";
HAnimJoint1215.DEF = "hanim_l_carpometacarpal_3";
HAnimJoint1215.center = new SFVec3f(new float[0.1987,0.8029,-0.053]);
HAnimJoint1215.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1215.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1216 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1216.name = "l_metacarpal_3";
HAnimSegment1216.DEF = "hanim_l_metacarpal_3";
let Transform1217 = browser.currentScene.createNode("Transform");
Transform1217.translation = new SFVec3f(new float[0.1987,0.8029,-0.053]);
let Transform1218 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1219 = browser.currentScene.createNode("Shape");
Shape1219.USE = "HAnimJointShape";
Transform1218.children = new MFNode();

Transform1218.children[0] = Shape1219;

Transform1217.children = new MFNode();

Transform1217.children[0] = Transform1218;

HAnimSegment1216.children = new MFNode();

HAnimSegment1216.children[0] = Transform1217;

let Shape1220 = browser.currentScene.createNode("Shape");
let LineSet1221 = browser.currentScene.createNode("LineSet");
LineSet1221.vertexCount = new MFInt32(new int[2]);
let Coordinate1222 = browser.currentScene.createNode("Coordinate");
Coordinate1222.point = new MFVec3f(new float[0.1987,0.8029,-0.053,0.1987,0.7818,-0.053]);
LineSet1221.coord = Coordinate1222;

//from l_carpometacarpal_3 to l_metacarpophalangeal_3 vertices 2
let ColorRGBA1223 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1223.USE = "HAnimSegmentLineColorRGBA";
LineSet1221.color = ColorRGBA1223;

Shape1220.geometry = LineSet1221;

HAnimSegment1216.children[1] = Shape1220;

HAnimJoint1215.children = new MFNode();

HAnimJoint1215.children[0] = HAnimSegment1216;

let HAnimJoint1224 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1224.name = "l_metacarpophalangeal_3";
HAnimJoint1224.DEF = "hanim_l_metacarpophalangeal_3";
HAnimJoint1224.center = new SFVec3f(new float[0.1987,0.7818,-0.053]);
HAnimJoint1224.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1224.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1225 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1225.name = "l_carpal_proximal_phalanx_3";
HAnimSegment1225.DEF = "hanim_l_carpal_proximal_phalanx_3";
let Transform1226 = browser.currentScene.createNode("Transform");
Transform1226.translation = new SFVec3f(new float[0.1987,0.7818,-0.053]);
let Transform1227 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1228 = browser.currentScene.createNode("Shape");
Shape1228.USE = "HAnimJointShape";
Transform1227.children = new MFNode();

Transform1227.children[0] = Shape1228;

Transform1226.children = new MFNode();

Transform1226.children[0] = Transform1227;

HAnimSegment1225.children = new MFNode();

HAnimSegment1225.children[0] = Transform1226;

let Shape1229 = browser.currentScene.createNode("Shape");
let LineSet1230 = browser.currentScene.createNode("LineSet");
LineSet1230.vertexCount = new MFInt32(new int[2]);
let Coordinate1231 = browser.currentScene.createNode("Coordinate");
Coordinate1231.point = new MFVec3f(new float[0.1987,0.7818,-0.053,0.2013,0.7273,-0.0503]);
LineSet1230.coord = Coordinate1231;

//from l_metacarpophalangeal_3 to l_carpal_proximal_interphalangeal_3 vertices 2
let ColorRGBA1232 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1232.USE = "HAnimSegmentLineColorRGBA";
LineSet1230.color = ColorRGBA1232;

Shape1229.geometry = LineSet1230;

HAnimSegment1225.children[1] = Shape1229;

HAnimJoint1224.children = new MFNode();

HAnimJoint1224.children[0] = HAnimSegment1225;

let HAnimJoint1233 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1233.name = "l_carpal_proximal_interphalangeal_3";
HAnimJoint1233.DEF = "hanim_l_carpal_proximal_interphalangeal_3";
HAnimJoint1233.center = new SFVec3f(new float[0.2013,0.7273,-0.0503]);
HAnimJoint1233.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1233.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1234 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1234.name = "l_carpal_middle_phalanx_3";
HAnimSegment1234.DEF = "hanim_l_carpal_middle_phalanx_3";
let Transform1235 = browser.currentScene.createNode("Transform");
Transform1235.translation = new SFVec3f(new float[0.2013,0.7273,-0.0503]);
let Transform1236 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1237 = browser.currentScene.createNode("Shape");
Shape1237.USE = "HAnimJointShape";
Transform1236.children = new MFNode();

Transform1236.children[0] = Shape1237;

Transform1235.children = new MFNode();

Transform1235.children[0] = Transform1236;

HAnimSegment1234.children = new MFNode();

HAnimSegment1234.children[0] = Transform1235;

let Shape1238 = browser.currentScene.createNode("Shape");
let LineSet1239 = browser.currentScene.createNode("LineSet");
LineSet1239.vertexCount = new MFInt32(new int[2]);
let Coordinate1240 = browser.currentScene.createNode("Coordinate");
Coordinate1240.point = new MFVec3f(new float[0.2013,0.7273,-0.0503,0.2026,0.7011,-0.0494]);
LineSet1239.coord = Coordinate1240;

//from l_carpal_proximal_interphalangeal_3 to l_carpal_distal_interphalangeal_3 vertices 2
let ColorRGBA1241 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1241.USE = "HAnimSegmentLineColorRGBA";
LineSet1239.color = ColorRGBA1241;

Shape1238.geometry = LineSet1239;

HAnimSegment1234.children[1] = Shape1238;

let HAnimSite1242 = browser.currentScene.createNode("HAnimSite");
HAnimSite1242.name = "l_carpal_distal_phalanx_3_tip";
HAnimSite1242.DEF = "hanim_l_carpal_distal_phalanx_3_tip";
let TouchSensor1243 = browser.currentScene.createNode("TouchSensor");
TouchSensor1243.description = "HAnimSite l_carpal_distal_phalanx_3_tip";
HAnimSite1242.children = new MFNode();

HAnimSite1242.children[0] = TouchSensor1243;

let Shape1244 = browser.currentScene.createNode("Shape");
Shape1244.USE = "HAnimSiteShape";
HAnimSite1242.children[1] = Shape1244;

HAnimSegment1234.children[2] = HAnimSite1242;

HAnimJoint1233.children = new MFNode();

HAnimJoint1233.children[0] = HAnimSegment1234;

let HAnimJoint1245 = browser.currentScene.createNode("HAnimJoint");
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

let HAnimJoint1246 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1246.name = "l_midcarpal_4_5";
HAnimJoint1246.DEF = "hanim_l_midcarpal_4_5";
HAnimJoint1246.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1246.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1247 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1247.name = "l_hamate";
HAnimSegment1247.DEF = "hanim_l_hamate";
let Transform1248 = browser.currentScene.createNode("Transform");
Transform1248.translation = new SFVec3f(new float[0.2026,0.7011,-0.0494]);
let Transform1249 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1250 = browser.currentScene.createNode("Shape");
Shape1250.USE = "HAnimJointShape";
Transform1249.children = new MFNode();

Transform1249.children[0] = Shape1250;

Transform1248.children = new MFNode();

Transform1248.children[0] = Transform1249;

HAnimSegment1247.children = new MFNode();

HAnimSegment1247.children[0] = Transform1248;

let Shape1251 = browser.currentScene.createNode("Shape");
let LineSet1252 = browser.currentScene.createNode("LineSet");
LineSet1252.vertexCount = new MFInt32(new int[2]);
let Coordinate1253 = browser.currentScene.createNode("Coordinate");
Coordinate1253.point = new MFVec3f(new float[0.1956,0.8019,-0.0794]);
LineSet1252.coord = Coordinate1253;

//from l_midcarpal_4_5 to l_carpometacarpal_4 vertices 1
let ColorRGBA1254 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1254.USE = "HAnimSegmentLineColorRGBA";
LineSet1252.color = ColorRGBA1254;

Shape1251.geometry = LineSet1252;

HAnimSegment1247.children[1] = Shape1251;

let Shape1255 = browser.currentScene.createNode("Shape");
let LineSet1256 = browser.currentScene.createNode("LineSet");
LineSet1256.vertexCount = new MFInt32(new int[2]);
let Coordinate1257 = browser.currentScene.createNode("Coordinate");
Coordinate1257.point = new MFVec3f(new float[0.1925,0.8066,-0.1036]);
LineSet1256.coord = Coordinate1257;

//from l_midcarpal_4_5 to l_carpometacarpal_5 vertices 1
let ColorRGBA1258 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1258.USE = "HAnimSegmentLineColorRGBA";
LineSet1256.color = ColorRGBA1258;

Shape1255.geometry = LineSet1256;

HAnimSegment1247.children[2] = Shape1255;

let HAnimSite1259 = browser.currentScene.createNode("HAnimSite");
HAnimSite1259.name = "l_metacarpal_phalanx_5_pt";
HAnimSite1259.DEF = "hanim_l_metacarpal_phalanx_5_pt";
HAnimSite1259.translation = new SFVec3f(new float[0.1929,0.786,-0.1122]);
let TouchSensor1260 = browser.currentScene.createNode("TouchSensor");
TouchSensor1260.description = "HAnimSite l_metacarpal_phalanx_5_pt";
HAnimSite1259.children = new MFNode();

HAnimSite1259.children[0] = TouchSensor1260;

let Shape1261 = browser.currentScene.createNode("Shape");
Shape1261.USE = "HAnimSiteShape";
HAnimSite1259.children[1] = Shape1261;

HAnimSegment1247.children[3] = HAnimSite1259;

HAnimJoint1246.children = new MFNode();

HAnimJoint1246.children[0] = HAnimSegment1247;

let HAnimJoint1262 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1262.name = "l_carpometacarpal_4";
HAnimJoint1262.DEF = "hanim_l_carpometacarpal_4";
HAnimJoint1262.center = new SFVec3f(new float[0.1956,0.8019,-0.0794]);
HAnimJoint1262.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1262.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1263 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1263.name = "l_metacarpal_4";
HAnimSegment1263.DEF = "hanim_l_metacarpal_4";
let Transform1264 = browser.currentScene.createNode("Transform");
Transform1264.translation = new SFVec3f(new float[0.1956,0.8019,-0.0794]);
let Transform1265 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1266 = browser.currentScene.createNode("Shape");
Shape1266.USE = "HAnimJointShape";
Transform1265.children = new MFNode();

Transform1265.children[0] = Shape1266;

Transform1264.children = new MFNode();

Transform1264.children[0] = Transform1265;

HAnimSegment1263.children = new MFNode();

HAnimSegment1263.children[0] = Transform1264;

let Shape1267 = browser.currentScene.createNode("Shape");
let LineSet1268 = browser.currentScene.createNode("LineSet");
LineSet1268.vertexCount = new MFInt32(new int[2]);
let Coordinate1269 = browser.currentScene.createNode("Coordinate");
Coordinate1269.point = new MFVec3f(new float[0.1956,0.8019,-0.0794,0.1956,0.7815,-0.0794]);
LineSet1268.coord = Coordinate1269;

//from l_carpometacarpal_4 to l_metacarpophalangeal_4 vertices 2
let ColorRGBA1270 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1270.USE = "HAnimSegmentLineColorRGBA";
LineSet1268.color = ColorRGBA1270;

Shape1267.geometry = LineSet1268;

HAnimSegment1263.children[1] = Shape1267;

HAnimJoint1262.children = new MFNode();

HAnimJoint1262.children[0] = HAnimSegment1263;

let HAnimJoint1271 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1271.name = "l_metacarpophalangeal_4";
HAnimJoint1271.DEF = "hanim_l_metacarpophalangeal_4";
HAnimJoint1271.center = new SFVec3f(new float[0.1956,0.7815,-0.0794]);
HAnimJoint1271.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1271.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1272 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1272.name = "l_carpal_proximal_phalanx_4";
HAnimSegment1272.DEF = "hanim_l_carpal_proximal_phalanx_4";
let Transform1273 = browser.currentScene.createNode("Transform");
Transform1273.translation = new SFVec3f(new float[0.1956,0.7815,-0.0794]);
let Transform1274 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1275 = browser.currentScene.createNode("Shape");
Shape1275.USE = "HAnimJointShape";
Transform1274.children = new MFNode();

Transform1274.children[0] = Shape1275;

Transform1273.children = new MFNode();

Transform1273.children[0] = Transform1274;

HAnimSegment1272.children = new MFNode();

HAnimSegment1272.children[0] = Transform1273;

let Shape1276 = browser.currentScene.createNode("Shape");
let LineSet1277 = browser.currentScene.createNode("LineSet");
LineSet1277.vertexCount = new MFInt32(new int[2]);
let Coordinate1278 = browser.currentScene.createNode("Coordinate");
Coordinate1278.point = new MFVec3f(new float[0.1956,0.7815,-0.0794,0.1973,0.7287,-0.0777]);
LineSet1277.coord = Coordinate1278;

//from l_metacarpophalangeal_4 to l_carpal_proximal_interphalangeal_4 vertices 2
let ColorRGBA1279 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1279.USE = "HAnimSegmentLineColorRGBA";
LineSet1277.color = ColorRGBA1279;

Shape1276.geometry = LineSet1277;

HAnimSegment1272.children[1] = Shape1276;

HAnimJoint1271.children = new MFNode();

HAnimJoint1271.children[0] = HAnimSegment1272;

let HAnimJoint1280 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1280.name = "l_carpal_proximal_interphalangeal_4";
HAnimJoint1280.DEF = "hanim_l_carpal_proximal_interphalangeal_4";
HAnimJoint1280.center = new SFVec3f(new float[0.1973,0.7287,-0.0777]);
HAnimJoint1280.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1280.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1281 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1281.name = "l_carpal_middle_phalanx_4";
HAnimSegment1281.DEF = "hanim_l_carpal_middle_phalanx_4";
let Transform1282 = browser.currentScene.createNode("Transform");
Transform1282.translation = new SFVec3f(new float[0.1973,0.7287,-0.0777]);
let Transform1283 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1284 = browser.currentScene.createNode("Shape");
Shape1284.USE = "HAnimJointShape";
Transform1283.children = new MFNode();

Transform1283.children[0] = Shape1284;

Transform1282.children = new MFNode();

Transform1282.children[0] = Transform1283;

HAnimSegment1281.children = new MFNode();

HAnimSegment1281.children[0] = Transform1282;

let Shape1285 = browser.currentScene.createNode("Shape");
let LineSet1286 = browser.currentScene.createNode("LineSet");
LineSet1286.vertexCount = new MFInt32(new int[2]);
let Coordinate1287 = browser.currentScene.createNode("Coordinate");
Coordinate1287.point = new MFVec3f(new float[0.1973,0.7287,-0.0777,0.1983,0.7045,-0.0767]);
LineSet1286.coord = Coordinate1287;

//from l_carpal_proximal_interphalangeal_4 to l_carpal_distal_interphalangeal_4 vertices 2
let ColorRGBA1288 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1288.USE = "HAnimSegmentLineColorRGBA";
LineSet1286.color = ColorRGBA1288;

Shape1285.geometry = LineSet1286;

HAnimSegment1281.children[1] = Shape1285;

let HAnimSite1289 = browser.currentScene.createNode("HAnimSite");
HAnimSite1289.name = "l_carpal_distal_phalanx_4_tip";
HAnimSite1289.DEF = "hanim_l_carpal_distal_phalanx_4_tip";
let TouchSensor1290 = browser.currentScene.createNode("TouchSensor");
TouchSensor1290.description = "HAnimSite l_carpal_distal_phalanx_4_tip";
HAnimSite1289.children = new MFNode();

HAnimSite1289.children[0] = TouchSensor1290;

let Shape1291 = browser.currentScene.createNode("Shape");
Shape1291.USE = "HAnimSiteShape";
HAnimSite1289.children[1] = Shape1291;

HAnimSegment1281.children[2] = HAnimSite1289;

HAnimJoint1280.children = new MFNode();

HAnimJoint1280.children[0] = HAnimSegment1281;

let HAnimJoint1292 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1292.name = "l_carpal_distal_interphalangeal_4";
HAnimJoint1292.DEF = "hanim_l_carpal_distal_interphalangeal_4";
HAnimJoint1292.center = new SFVec3f(new float[0.1983,0.7045,-0.0767]);
HAnimJoint1292.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1292.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1280.children[1] = HAnimJoint1292;

HAnimJoint1271.children[1] = HAnimJoint1280;

HAnimJoint1262.children[1] = HAnimJoint1271;

HAnimJoint1246.children[1] = HAnimJoint1262;

let HAnimJoint1293 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1293.name = "l_carpometacarpal_5";
HAnimJoint1293.DEF = "hanim_l_carpometacarpal_5";
HAnimJoint1293.center = new SFVec3f(new float[0.1925,0.8066,-0.1036]);
HAnimJoint1293.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1293.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1294 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1294.name = "l_metacarpal_5";
HAnimSegment1294.DEF = "hanim_l_metacarpal_5";
let Transform1295 = browser.currentScene.createNode("Transform");
Transform1295.translation = new SFVec3f(new float[0.1925,0.8066,-0.1036]);
let Transform1296 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1297 = browser.currentScene.createNode("Shape");
Shape1297.USE = "HAnimJointShape";
Transform1296.children = new MFNode();

Transform1296.children[0] = Shape1297;

Transform1295.children = new MFNode();

Transform1295.children[0] = Transform1296;

HAnimSegment1294.children = new MFNode();

HAnimSegment1294.children[0] = Transform1295;

let Shape1298 = browser.currentScene.createNode("Shape");
let LineSet1299 = browser.currentScene.createNode("LineSet");
LineSet1299.vertexCount = new MFInt32(new int[2]);
let Coordinate1300 = browser.currentScene.createNode("Coordinate");
Coordinate1300.point = new MFVec3f(new float[0.1925,0.8066,-0.1036,0.1925,0.7866,-0.1036]);
LineSet1299.coord = Coordinate1300;

//from l_carpometacarpal_5 to l_metacarpophalangeal_5 vertices 2
let ColorRGBA1301 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1301.USE = "HAnimSegmentLineColorRGBA";
LineSet1299.color = ColorRGBA1301;

Shape1298.geometry = LineSet1299;

HAnimSegment1294.children[1] = Shape1298;

HAnimJoint1293.children = new MFNode();

HAnimJoint1293.children[0] = HAnimSegment1294;

let HAnimJoint1302 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1302.name = "l_metacarpophalangeal_5";
HAnimJoint1302.DEF = "hanim_l_metacarpophalangeal_5";
HAnimJoint1302.center = new SFVec3f(new float[0.1925,0.7866,-0.1036]);
HAnimJoint1302.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1302.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1303 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1303.name = "l_carpal_proximal_phalanx_5";
HAnimSegment1303.DEF = "hanim_l_carpal_proximal_phalanx_5";
let Transform1304 = browser.currentScene.createNode("Transform");
Transform1304.translation = new SFVec3f(new float[0.1925,0.7866,-0.1036]);
let Transform1305 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1306 = browser.currentScene.createNode("Shape");
Shape1306.USE = "HAnimJointShape";
Transform1305.children = new MFNode();

Transform1305.children[0] = Shape1306;

Transform1304.children = new MFNode();

Transform1304.children[0] = Transform1305;

HAnimSegment1303.children = new MFNode();

HAnimSegment1303.children[0] = Transform1304;

let Shape1307 = browser.currentScene.createNode("Shape");
let LineSet1308 = browser.currentScene.createNode("LineSet");
LineSet1308.vertexCount = new MFInt32(new int[2]);
let Coordinate1309 = browser.currentScene.createNode("Coordinate");
Coordinate1309.point = new MFVec3f(new float[0.1925,0.7866,-0.1036,0.1938,0.7452,-0.1024]);
LineSet1308.coord = Coordinate1309;

//from l_metacarpophalangeal_5 to l_carpal_proximal_interphalangeal_5 vertices 2
let ColorRGBA1310 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1310.USE = "HAnimSegmentLineColorRGBA";
LineSet1308.color = ColorRGBA1310;

Shape1307.geometry = LineSet1308;

HAnimSegment1303.children[1] = Shape1307;

HAnimJoint1302.children = new MFNode();

HAnimJoint1302.children[0] = HAnimSegment1303;

let HAnimJoint1311 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1311.name = "l_carpal_proximal_interphalangeal_5";
HAnimJoint1311.DEF = "hanim_l_carpal_proximal_interphalangeal_5";
HAnimJoint1311.center = new SFVec3f(new float[0.1938,0.7452,-0.1024]);
HAnimJoint1311.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1311.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1312 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1312.name = "l_carpal_middle_phalanx_5";
HAnimSegment1312.DEF = "hanim_l_carpal_middle_phalanx_5";
let Transform1313 = browser.currentScene.createNode("Transform");
Transform1313.translation = new SFVec3f(new float[0.1938,0.7452,-0.1024]);
let Transform1314 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1315 = browser.currentScene.createNode("Shape");
Shape1315.USE = "HAnimJointShape";
Transform1314.children = new MFNode();

Transform1314.children[0] = Shape1315;

Transform1313.children = new MFNode();

Transform1313.children[0] = Transform1314;

HAnimSegment1312.children = new MFNode();

HAnimSegment1312.children[0] = Transform1313;

let Shape1316 = browser.currentScene.createNode("Shape");
let LineSet1317 = browser.currentScene.createNode("LineSet");
LineSet1317.vertexCount = new MFInt32(new int[2]);
let Coordinate1318 = browser.currentScene.createNode("Coordinate");
Coordinate1318.point = new MFVec3f(new float[0.1938,0.7452,-0.1024,0.1948,0.7277,-0.1017]);
LineSet1317.coord = Coordinate1318;

//from l_carpal_proximal_interphalangeal_5 to l_carpal_distal_interphalangeal_5 vertices 2
let ColorRGBA1319 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1319.USE = "HAnimSegmentLineColorRGBA";
LineSet1317.color = ColorRGBA1319;

Shape1316.geometry = LineSet1317;

HAnimSegment1312.children[1] = Shape1316;

let HAnimSite1320 = browser.currentScene.createNode("HAnimSite");
HAnimSite1320.name = "l_carpal_distal_phalanx_5_tip";
HAnimSite1320.DEF = "hanim_l_carpal_distal_phalanx_5_tip";
let TouchSensor1321 = browser.currentScene.createNode("TouchSensor");
TouchSensor1321.description = "HAnimSite l_carpal_distal_phalanx_5_tip";
HAnimSite1320.children = new MFNode();

HAnimSite1320.children[0] = TouchSensor1321;

let Shape1322 = browser.currentScene.createNode("Shape");
Shape1322.USE = "HAnimSiteShape";
HAnimSite1320.children[1] = Shape1322;

HAnimSegment1312.children[2] = HAnimSite1320;

HAnimJoint1311.children = new MFNode();

HAnimJoint1311.children[0] = HAnimSegment1312;

let HAnimJoint1323 = browser.currentScene.createNode("HAnimJoint");
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

let HAnimJoint1324 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1324.name = "r_sternoclavicular";
HAnimJoint1324.DEF = "hanim_r_sternoclavicular";
HAnimJoint1324.center = new SFVec3f(new float[-0.0694,1.46,-0.033]);
HAnimJoint1324.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1324.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1325 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1325.name = "r_clavicle";
HAnimSegment1325.DEF = "hanim_r_clavicle";
let Transform1326 = browser.currentScene.createNode("Transform");
Transform1326.translation = new SFVec3f(new float[-0.0694,1.46,-0.033]);
let Transform1327 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1328 = browser.currentScene.createNode("Shape");
Shape1328.USE = "HAnimJointShape";
Transform1327.children = new MFNode();

Transform1327.children[0] = Shape1328;

Transform1326.children = new MFNode();

Transform1326.children[0] = Transform1327;

HAnimSegment1325.children = new MFNode();

HAnimSegment1325.children[0] = Transform1326;

let Shape1329 = browser.currentScene.createNode("Shape");
let LineSet1330 = browser.currentScene.createNode("LineSet");
LineSet1330.vertexCount = new MFInt32(new int[2]);
let Coordinate1331 = browser.currentScene.createNode("Coordinate");
Coordinate1331.point = new MFVec3f(new float[-0.0694,1.46,-0.033,-0.0836,1.4281,-0.0401]);
LineSet1330.coord = Coordinate1331;

//from r_sternoclavicular to r_acromioclavicular vertices 2
let ColorRGBA1332 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1332.USE = "HAnimSegmentLineColorRGBA";
LineSet1330.color = ColorRGBA1332;

Shape1329.geometry = LineSet1330;

HAnimSegment1325.children[1] = Shape1329;

HAnimJoint1324.children = new MFNode();

HAnimJoint1324.children[0] = HAnimSegment1325;

let HAnimJoint1333 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1333.name = "r_acromioclavicular";
HAnimJoint1333.DEF = "hanim_r_acromioclavicular";
HAnimJoint1333.center = new SFVec3f(new float[-0.0836,1.4281,-0.0401]);
HAnimJoint1333.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1333.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1334 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1334.name = "r_scapula";
HAnimSegment1334.DEF = "hanim_r_scapula";
let Transform1335 = browser.currentScene.createNode("Transform");
Transform1335.translation = new SFVec3f(new float[-0.0836,1.4281,-0.0401]);
let Transform1336 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1337 = browser.currentScene.createNode("Shape");
Shape1337.USE = "HAnimJointShape";
Transform1336.children = new MFNode();

Transform1336.children[0] = Shape1337;

Transform1335.children = new MFNode();

Transform1335.children[0] = Transform1336;

HAnimSegment1334.children = new MFNode();

HAnimSegment1334.children[0] = Transform1335;

let Shape1338 = browser.currentScene.createNode("Shape");
let LineSet1339 = browser.currentScene.createNode("LineSet");
LineSet1339.vertexCount = new MFInt32(new int[2]);
let Coordinate1340 = browser.currentScene.createNode("Coordinate");
Coordinate1340.point = new MFVec3f(new float[-0.0836,1.4281,-0.0401,-0.1907,1.4407,-0.0325]);
LineSet1339.coord = Coordinate1340;

//from r_acromioclavicular to r_shoulder vertices 2
let ColorRGBA1341 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1341.USE = "HAnimSegmentLineColorRGBA";
LineSet1339.color = ColorRGBA1341;

Shape1338.geometry = LineSet1339;

HAnimSegment1334.children[1] = Shape1338;

let HAnimSite1342 = browser.currentScene.createNode("HAnimSite");
HAnimSite1342.name = "r_bideltoid_pt";
HAnimSite1342.DEF = "hanim_r_bideltoid_pt";
let TouchSensor1343 = browser.currentScene.createNode("TouchSensor");
TouchSensor1343.description = "HAnimSite r_bideltoid_pt";
HAnimSite1342.children = new MFNode();

HAnimSite1342.children[0] = TouchSensor1343;

let Shape1344 = browser.currentScene.createNode("Shape");
Shape1344.USE = "HAnimSiteShape";
HAnimSite1342.children[1] = Shape1344;

HAnimSegment1334.children[2] = HAnimSite1342;

let HAnimSite1345 = browser.currentScene.createNode("HAnimSite");
HAnimSite1345.name = "r_humeral_lateral_epicondyles_pt";
HAnimSite1345.DEF = "hanim_r_humeral_lateral_epicondyles_pt";
HAnimSite1345.translation = new SFVec3f(new float[-0.2224,1.1517,-0.1033]);
let TouchSensor1346 = browser.currentScene.createNode("TouchSensor");
TouchSensor1346.description = "HAnimSite r_humeral_lateral_epicondyles_pt";
HAnimSite1345.children = new MFNode();

HAnimSite1345.children[0] = TouchSensor1346;

let Shape1347 = browser.currentScene.createNode("Shape");
Shape1347.USE = "HAnimSiteShape";
HAnimSite1345.children[1] = Shape1347;

HAnimSegment1334.children[3] = HAnimSite1345;

HAnimJoint1333.children = new MFNode();

HAnimJoint1333.children[0] = HAnimSegment1334;

let HAnimJoint1348 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1348.name = "r_shoulder";
HAnimJoint1348.DEF = "hanim_r_shoulder";
HAnimJoint1348.center = new SFVec3f(new float[-0.1907,1.4407,-0.0325]);
HAnimJoint1348.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1348.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1349 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1349.name = "r_upperarm";
HAnimSegment1349.DEF = "hanim_r_upperarm";
let Transform1350 = browser.currentScene.createNode("Transform");
Transform1350.translation = new SFVec3f(new float[-0.1907,1.4407,-0.0325]);
let Transform1351 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1352 = browser.currentScene.createNode("Shape");
Shape1352.USE = "HAnimJointShape";
Transform1351.children = new MFNode();

Transform1351.children[0] = Shape1352;

Transform1350.children = new MFNode();

Transform1350.children[0] = Transform1351;

HAnimSegment1349.children = new MFNode();

HAnimSegment1349.children[0] = Transform1350;

let Shape1353 = browser.currentScene.createNode("Shape");
let LineSet1354 = browser.currentScene.createNode("LineSet");
LineSet1354.vertexCount = new MFInt32(new int[2]);
let Coordinate1355 = browser.currentScene.createNode("Coordinate");
Coordinate1355.point = new MFVec3f(new float[-0.1907,1.4407,-0.0325,-0.1949,1.1388,-0.062]);
LineSet1354.coord = Coordinate1355;

//from r_shoulder to r_elbow vertices 2
let ColorRGBA1356 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1356.USE = "HAnimSegmentLineColorRGBA";
LineSet1354.color = ColorRGBA1356;

Shape1353.geometry = LineSet1354;

HAnimSegment1349.children[1] = Shape1353;

let HAnimSite1357 = browser.currentScene.createNode("HAnimSite");
HAnimSite1357.name = "r_humeral_medial_epicondyles_pt";
HAnimSite1357.DEF = "hanim_r_humeral_medial_epicondyles_pt";
HAnimSite1357.translation = new SFVec3f(new float[-0.168,1.1298,-0.1062]);
let TouchSensor1358 = browser.currentScene.createNode("TouchSensor");
TouchSensor1358.description = "HAnimSite r_humeral_medial_epicondyles_pt";
HAnimSite1357.children = new MFNode();

HAnimSite1357.children[0] = TouchSensor1358;

let Shape1359 = browser.currentScene.createNode("Shape");
Shape1359.USE = "HAnimSiteShape";
HAnimSite1357.children[1] = Shape1359;

HAnimSegment1349.children[2] = HAnimSite1357;

let HAnimSite1360 = browser.currentScene.createNode("HAnimSite");
HAnimSite1360.name = "r_olecranon_pt";
HAnimSite1360.DEF = "hanim_r_olecranon_pt";
HAnimSite1360.translation = new SFVec3f(new float[-0.1907,1.1405,-0.1065]);
let TouchSensor1361 = browser.currentScene.createNode("TouchSensor");
TouchSensor1361.description = "HAnimSite r_olecranon_pt";
HAnimSite1360.children = new MFNode();

HAnimSite1360.children[0] = TouchSensor1361;

let Shape1362 = browser.currentScene.createNode("Shape");
Shape1362.USE = "HAnimSiteShape";
HAnimSite1360.children[1] = Shape1362;

HAnimSegment1349.children[3] = HAnimSite1360;

let HAnimSite1363 = browser.currentScene.createNode("HAnimSite");
HAnimSite1363.name = "r_radial_styloid_pt";
HAnimSite1363.DEF = "hanim_r_radial_styloid_pt";
HAnimSite1363.translation = new SFVec3f(new float[-0.1884,0.8676,-0.036]);
let TouchSensor1364 = browser.currentScene.createNode("TouchSensor");
TouchSensor1364.description = "HAnimSite r_radial_styloid_pt";
HAnimSite1363.children = new MFNode();

HAnimSite1363.children[0] = TouchSensor1364;

let Shape1365 = browser.currentScene.createNode("Shape");
Shape1365.USE = "HAnimSiteShape";
HAnimSite1363.children[1] = Shape1365;

HAnimSegment1349.children[4] = HAnimSite1363;

let HAnimSite1366 = browser.currentScene.createNode("HAnimSite");
HAnimSite1366.name = "r_radiale_pt";
HAnimSite1366.DEF = "hanim_r_radiale_pt";
HAnimSite1366.translation = new SFVec3f(new float[-0.213,1.1305,-0.1091]);
let TouchSensor1367 = browser.currentScene.createNode("TouchSensor");
TouchSensor1367.description = "HAnimSite r_radiale_pt";
HAnimSite1366.children = new MFNode();

HAnimSite1366.children[0] = TouchSensor1367;

let Shape1368 = browser.currentScene.createNode("Shape");
Shape1368.USE = "HAnimSiteShape";
HAnimSite1366.children[1] = Shape1368;

HAnimSegment1349.children[5] = HAnimSite1366;

HAnimJoint1348.children = new MFNode();

HAnimJoint1348.children[0] = HAnimSegment1349;

let HAnimJoint1369 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1369.name = "r_elbow";
HAnimJoint1369.DEF = "hanim_r_elbow";
HAnimJoint1369.center = new SFVec3f(new float[-0.1949,1.1388,-0.062]);
HAnimJoint1369.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1369.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1370 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1370.name = "r_forearm";
HAnimSegment1370.DEF = "hanim_r_forearm";
let Transform1371 = browser.currentScene.createNode("Transform");
Transform1371.translation = new SFVec3f(new float[-0.1949,1.1388,-0.062]);
let Transform1372 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1373 = browser.currentScene.createNode("Shape");
Shape1373.USE = "HAnimJointShape";
Transform1372.children = new MFNode();

Transform1372.children[0] = Shape1373;

Transform1371.children = new MFNode();

Transform1371.children[0] = Transform1372;

HAnimSegment1370.children = new MFNode();

HAnimSegment1370.children[0] = Transform1371;

let Shape1374 = browser.currentScene.createNode("Shape");
let LineSet1375 = browser.currentScene.createNode("LineSet");
LineSet1375.vertexCount = new MFInt32(new int[2]);
let Coordinate1376 = browser.currentScene.createNode("Coordinate");
Coordinate1376.point = new MFVec3f(new float[-0.1949,1.1388,-0.062,-0.1959,0.8694,-0.0521]);
LineSet1375.coord = Coordinate1376;

//from r_elbow to r_radiocarpal vertices 2
let ColorRGBA1377 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1377.USE = "HAnimSegmentLineColorRGBA";
LineSet1375.color = ColorRGBA1377;

Shape1374.geometry = LineSet1375;

HAnimSegment1370.children[1] = Shape1374;

let HAnimSite1378 = browser.currentScene.createNode("HAnimSite");
HAnimSite1378.name = "r_ulnar_styloid_pt";
HAnimSite1378.DEF = "hanim_r_ulnar_styloid_pt";
HAnimSite1378.translation = new SFVec3f(new float[-0.2117,0.8562,-0.0584]);
let TouchSensor1379 = browser.currentScene.createNode("TouchSensor");
TouchSensor1379.description = "HAnimSite r_ulnar_styloid_pt";
HAnimSite1378.children = new MFNode();

HAnimSite1378.children[0] = TouchSensor1379;

let Shape1380 = browser.currentScene.createNode("Shape");
Shape1380.USE = "HAnimSiteShape";
HAnimSite1378.children[1] = Shape1380;

HAnimSegment1370.children[2] = HAnimSite1378;

HAnimJoint1369.children = new MFNode();

HAnimJoint1369.children[0] = HAnimSegment1370;

let HAnimJoint1381 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1381.name = "r_radiocarpal";
HAnimJoint1381.DEF = "hanim_r_radiocarpal";
HAnimJoint1381.center = new SFVec3f(new float[-0.1959,0.8694,-0.0521]);
HAnimJoint1381.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1381.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1382 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1382.name = "r_carpal";
HAnimSegment1382.DEF = "hanim_r_carpal";
let Transform1383 = browser.currentScene.createNode("Transform");
Transform1383.scale = new SFVec3f(new float[0.2,0.2,0.2]);
Transform1383.translation = new SFVec3f(new float[-0.2,0.85,-0.05]);
Transform1383.rotation = new SFRotation(new float[0,0,1,-3.14]);
//Transform right hand
let Transform1384 = browser.currentScene.createNode("Transform");
Transform1384.rotation = new SFRotation(new float[0,1,0,1.57]);
//Transform right hand
let Shape1385 = browser.currentScene.createNode("Shape");
Shape1385.USE = "HAnimJointShape";
Transform1384.children = new MFNode();

Transform1384.children[0] = Shape1385;

Transform1383.children = new MFNode();

Transform1383.children[0] = Transform1384;

HAnimSegment1382.children = new MFNode();

HAnimSegment1382.children[0] = Transform1383;

let Shape1386 = browser.currentScene.createNode("Shape");
let LineSet1387 = browser.currentScene.createNode("LineSet");
LineSet1387.vertexCount = new MFInt32(new int[2]);
let Coordinate1388 = browser.currentScene.createNode("Coordinate");
Coordinate1388.point = new MFVec3f(new float[-0.1959,0.8694,-0.0521,-0.1959,0.8694,-0.0521]);
LineSet1387.coord = Coordinate1388;

//from r_radiocarpal to r_midcarpal_1 vertices 2
let ColorRGBA1389 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1389.USE = "HAnimSegmentLineColorRGBA";
LineSet1387.color = ColorRGBA1389;

Shape1386.geometry = LineSet1387;

HAnimSegment1382.children[1] = Shape1386;

let Shape1390 = browser.currentScene.createNode("Shape");
let LineSet1391 = browser.currentScene.createNode("LineSet");
LineSet1391.vertexCount = new MFInt32(new int[2]);
let Coordinate1392 = browser.currentScene.createNode("Coordinate");
Coordinate1392.point = new MFVec3f(new float[-0.1959,0.8694,-0.0521,-0.1959,0.8694,-0.0521]);
LineSet1391.coord = Coordinate1392;

//from r_radiocarpal to r_midcarpal_2 vertices 2
let ColorRGBA1393 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1393.USE = "HAnimSegmentLineColorRGBA";
LineSet1391.color = ColorRGBA1393;

Shape1390.geometry = LineSet1391;

HAnimSegment1382.children[2] = Shape1390;

let Shape1394 = browser.currentScene.createNode("Shape");
let LineSet1395 = browser.currentScene.createNode("LineSet");
LineSet1395.vertexCount = new MFInt32(new int[2]);
let Coordinate1396 = browser.currentScene.createNode("Coordinate");
Coordinate1396.point = new MFVec3f(new float[-0.1959,0.8694,-0.0521,-0.1959,0.8694,-0.0521]);
LineSet1395.coord = Coordinate1396;

//from r_radiocarpal to r_midcarpal_3 vertices 2
let ColorRGBA1397 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1397.USE = "HAnimSegmentLineColorRGBA";
LineSet1395.color = ColorRGBA1397;

Shape1394.geometry = LineSet1395;

HAnimSegment1382.children[3] = Shape1394;

let Shape1398 = browser.currentScene.createNode("Shape");
let LineSet1399 = browser.currentScene.createNode("LineSet");
LineSet1399.vertexCount = new MFInt32(new int[2]);
let Coordinate1400 = browser.currentScene.createNode("Coordinate");
Coordinate1400.point = new MFVec3f(new float[-0.1959,0.8694,-0.0521,-0.1959,0.8694,-0.0521]);
LineSet1399.coord = Coordinate1400;

//from r_radiocarpal to r_midcarpal_4_5 vertices 2
let ColorRGBA1401 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1401.USE = "HAnimSegmentLineColorRGBA";
LineSet1399.color = ColorRGBA1401;

Shape1398.geometry = LineSet1399;

HAnimSegment1382.children[4] = Shape1398;

HAnimJoint1381.children = new MFNode();

HAnimJoint1381.children[0] = HAnimSegment1382;

let HAnimJoint1402 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1402.name = "r_midcarpal_1";
HAnimJoint1402.DEF = "hanim_r_midcarpal_1";
HAnimJoint1402.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1402.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1403 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1403.name = "r_trapezium";
HAnimSegment1403.DEF = "hanim_r_trapezium";
let Transform1404 = browser.currentScene.createNode("Transform");
Transform1404.translation = new SFVec3f(new float[-0.1959,0.8694,-0.0521]);
let Transform1405 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1406 = browser.currentScene.createNode("Shape");
Shape1406.USE = "HAnimJointShape";
Transform1405.children = new MFNode();

Transform1405.children[0] = Shape1406;

Transform1404.children = new MFNode();

Transform1404.children[0] = Transform1405;

HAnimSegment1403.children = new MFNode();

HAnimSegment1403.children[0] = Transform1404;

let Shape1407 = browser.currentScene.createNode("Shape");
let LineSet1408 = browser.currentScene.createNode("LineSet");
LineSet1408.vertexCount = new MFInt32(new int[2]);
let Coordinate1409 = browser.currentScene.createNode("Coordinate");
Coordinate1409.point = new MFVec3f(new float[-0.1899,0.8502,-0.0473]);
LineSet1408.coord = Coordinate1409;

//from r_midcarpal_1 to r_carpometacarpal_1 vertices 1
let ColorRGBA1410 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1410.USE = "HAnimSegmentLineColorRGBA";
LineSet1408.color = ColorRGBA1410;

Shape1407.geometry = LineSet1408;

HAnimSegment1403.children[1] = Shape1407;

HAnimJoint1402.children = new MFNode();

HAnimJoint1402.children[0] = HAnimSegment1403;

let HAnimJoint1411 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1411.name = "r_carpometacarpal_1";
HAnimJoint1411.DEF = "hanim_r_carpometacarpal_1";
HAnimJoint1411.center = new SFVec3f(new float[-0.1899,0.8502,-0.0473]);
HAnimJoint1411.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1411.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1412 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1412.name = "r_metacarpal_1";
HAnimSegment1412.DEF = "hanim_r_metacarpal_1";
let Transform1413 = browser.currentScene.createNode("Transform");
Transform1413.translation = new SFVec3f(new float[-0.1899,0.8502,-0.0473]);
let Transform1414 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1415 = browser.currentScene.createNode("Shape");
Shape1415.USE = "HAnimJointShape";
Transform1414.children = new MFNode();

Transform1414.children[0] = Shape1415;

Transform1413.children = new MFNode();

Transform1413.children[0] = Transform1414;

HAnimSegment1412.children = new MFNode();

HAnimSegment1412.children[0] = Transform1413;

let Shape1416 = browser.currentScene.createNode("Shape");
let LineSet1417 = browser.currentScene.createNode("LineSet");
LineSet1417.vertexCount = new MFInt32(new int[2]);
let Coordinate1418 = browser.currentScene.createNode("Coordinate");
Coordinate1418.point = new MFVec3f(new float[-0.1899,0.8502,-0.0473,-0.1874,0.8256,0.0306]);
LineSet1417.coord = Coordinate1418;

//from r_carpometacarpal_1 to r_metacarpophalangeal_1 vertices 2
let ColorRGBA1419 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1419.USE = "HAnimSegmentLineColorRGBA";
LineSet1417.color = ColorRGBA1419;

Shape1416.geometry = LineSet1417;

HAnimSegment1412.children[1] = Shape1416;

HAnimJoint1411.children = new MFNode();

HAnimJoint1411.children[0] = HAnimSegment1412;

let HAnimJoint1420 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1420.name = "r_metacarpophalangeal_1";
HAnimJoint1420.DEF = "hanim_r_metacarpophalangeal_1";
HAnimJoint1420.center = new SFVec3f(new float[-0.1874,0.8256,0.0306]);
HAnimJoint1420.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1420.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1421 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1421.name = "r_carpal_proximal_phalanx_1";
HAnimSegment1421.DEF = "hanim_r_carpal_proximal_phalanx_1";
let Transform1422 = browser.currentScene.createNode("Transform");
Transform1422.translation = new SFVec3f(new float[-0.1874,0.8256,0.0306]);
let Transform1423 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1424 = browser.currentScene.createNode("Shape");
Shape1424.USE = "HAnimJointShape";
Transform1423.children = new MFNode();

Transform1423.children[0] = Shape1424;

Transform1422.children = new MFNode();

Transform1422.children[0] = Transform1423;

HAnimSegment1421.children = new MFNode();

HAnimSegment1421.children[0] = Transform1422;

let Shape1425 = browser.currentScene.createNode("Shape");
let LineSet1426 = browser.currentScene.createNode("LineSet");
LineSet1426.vertexCount = new MFInt32(new int[2]);
let Coordinate1427 = browser.currentScene.createNode("Coordinate");
Coordinate1427.point = new MFVec3f(new float[-0.1874,0.8256,0.0306,-0.1864,0.819,0.0506]);
LineSet1426.coord = Coordinate1427;

//from r_metacarpophalangeal_1 to r_carpal_interphalangeal_1 vertices 2
let ColorRGBA1428 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1428.USE = "HAnimSegmentLineColorRGBA";
LineSet1426.color = ColorRGBA1428;

Shape1425.geometry = LineSet1426;

HAnimSegment1421.children[1] = Shape1425;

let HAnimSite1429 = browser.currentScene.createNode("HAnimSite");
HAnimSite1429.name = "r_carpal_distal_phalanx_1_tip";
HAnimSite1429.DEF = "hanim_r_carpal_distal_phalanx_1_tip";
let TouchSensor1430 = browser.currentScene.createNode("TouchSensor");
TouchSensor1430.description = "HAnimSite r_carpal_distal_phalanx_1_tip";
HAnimSite1429.children = new MFNode();

HAnimSite1429.children[0] = TouchSensor1430;

let Shape1431 = browser.currentScene.createNode("Shape");
Shape1431.USE = "HAnimSiteShape";
HAnimSite1429.children[1] = Shape1431;

HAnimSegment1421.children[2] = HAnimSite1429;

HAnimJoint1420.children = new MFNode();

HAnimJoint1420.children[0] = HAnimSegment1421;

let HAnimJoint1432 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1432.name = "r_carpal_interphalangeal_1";
HAnimJoint1432.DEF = "hanim_r_carpal_interphalangeal_1";
HAnimJoint1432.center = new SFVec3f(new float[-0.1864,0.819,0.0506]);
HAnimJoint1432.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1432.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1420.children[1] = HAnimJoint1432;

HAnimJoint1411.children[1] = HAnimJoint1420;

HAnimJoint1402.children[1] = HAnimJoint1411;

HAnimJoint1381.children[1] = HAnimJoint1402;

let HAnimJoint1433 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1433.name = "r_midcarpal_2";
HAnimJoint1433.DEF = "hanim_r_midcarpal_2";
HAnimJoint1433.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1433.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1434 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1434.name = "r_trapezoid";
HAnimSegment1434.DEF = "hanim_r_trapezoid";
let Transform1435 = browser.currentScene.createNode("Transform");
Transform1435.translation = new SFVec3f(new float[-0.1864,0.819,0.0506]);
let Transform1436 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1437 = browser.currentScene.createNode("Shape");
Shape1437.USE = "HAnimJointShape";
Transform1436.children = new MFNode();

Transform1436.children[0] = Shape1437;

Transform1435.children = new MFNode();

Transform1435.children[0] = Transform1436;

HAnimSegment1434.children = new MFNode();

HAnimSegment1434.children[0] = Transform1435;

let Shape1438 = browser.currentScene.createNode("Shape");
let LineSet1439 = browser.currentScene.createNode("LineSet");
LineSet1439.vertexCount = new MFInt32(new int[2]);
let Coordinate1440 = browser.currentScene.createNode("Coordinate");
Coordinate1440.point = new MFVec3f(new float[-0.1961,0.8055,-0.0218]);
LineSet1439.coord = Coordinate1440;

//from r_midcarpal_2 to r_carpometacarpal_2 vertices 1
let ColorRGBA1441 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1441.USE = "HAnimSegmentLineColorRGBA";
LineSet1439.color = ColorRGBA1441;

Shape1438.geometry = LineSet1439;

HAnimSegment1434.children[1] = Shape1438;

let HAnimSite1442 = browser.currentScene.createNode("HAnimSite");
HAnimSite1442.name = "r_metacarpal_phalanx_2_pt";
HAnimSite1442.DEF = "hanim_r_metacarpal_phalanx_2_pt";
HAnimSite1442.translation = new SFVec3f(new float[-0.1977,0.8169,-0.0177]);
let TouchSensor1443 = browser.currentScene.createNode("TouchSensor");
TouchSensor1443.description = "HAnimSite r_metacarpal_phalanx_2_pt";
HAnimSite1442.children = new MFNode();

HAnimSite1442.children[0] = TouchSensor1443;

let Shape1444 = browser.currentScene.createNode("Shape");
Shape1444.USE = "HAnimSiteShape";
HAnimSite1442.children[1] = Shape1444;

HAnimSegment1434.children[2] = HAnimSite1442;

HAnimJoint1433.children = new MFNode();

HAnimJoint1433.children[0] = HAnimSegment1434;

let HAnimJoint1445 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1445.name = "r_carpometacarpal_2";
HAnimJoint1445.DEF = "hanim_r_carpometacarpal_2";
HAnimJoint1445.center = new SFVec3f(new float[-0.1961,0.8055,-0.0218]);
HAnimJoint1445.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1445.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1446 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1446.name = "r_metacarpal_2";
HAnimSegment1446.DEF = "hanim_r_metacarpal_2";
let Transform1447 = browser.currentScene.createNode("Transform");
Transform1447.translation = new SFVec3f(new float[-0.1961,0.8055,-0.0218]);
let Transform1448 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1449 = browser.currentScene.createNode("Shape");
Shape1449.USE = "HAnimJointShape";
Transform1448.children = new MFNode();

Transform1448.children[0] = Shape1449;

Transform1447.children = new MFNode();

Transform1447.children[0] = Transform1448;

HAnimSegment1446.children = new MFNode();

HAnimSegment1446.children[0] = Transform1447;

let Shape1450 = browser.currentScene.createNode("Shape");
let LineSet1451 = browser.currentScene.createNode("LineSet");
LineSet1451.vertexCount = new MFInt32(new int[2]);
let Coordinate1452 = browser.currentScene.createNode("Coordinate");
Coordinate1452.point = new MFVec3f(new float[-0.1961,0.8055,-0.0218,-0.1961,0.7846,-0.0218]);
LineSet1451.coord = Coordinate1452;

//from r_carpometacarpal_2 to r_metacarpophalangeal_2 vertices 2
let ColorRGBA1453 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1453.USE = "HAnimSegmentLineColorRGBA";
LineSet1451.color = ColorRGBA1453;

Shape1450.geometry = LineSet1451;

HAnimSegment1446.children[1] = Shape1450;

HAnimJoint1445.children = new MFNode();

HAnimJoint1445.children[0] = HAnimSegment1446;

let HAnimJoint1454 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1454.name = "r_metacarpophalangeal_2";
HAnimJoint1454.DEF = "hanim_r_metacarpophalangeal_2";
HAnimJoint1454.center = new SFVec3f(new float[-0.1961,0.7846,-0.0218]);
HAnimJoint1454.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1454.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1455 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1455.name = "r_carpal_proximal_phalanx_2";
HAnimSegment1455.DEF = "hanim_r_carpal_proximal_phalanx_2";
let Transform1456 = browser.currentScene.createNode("Transform");
Transform1456.translation = new SFVec3f(new float[-0.1961,0.7846,-0.0218]);
let Transform1457 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1458 = browser.currentScene.createNode("Shape");
Shape1458.USE = "HAnimJointShape";
Transform1457.children = new MFNode();

Transform1457.children[0] = Shape1458;

Transform1456.children = new MFNode();

Transform1456.children[0] = Transform1457;

HAnimSegment1455.children = new MFNode();

HAnimSegment1455.children[0] = Transform1456;

let Shape1459 = browser.currentScene.createNode("Shape");
let LineSet1460 = browser.currentScene.createNode("LineSet");
LineSet1460.vertexCount = new MFInt32(new int[2]);
let Coordinate1461 = browser.currentScene.createNode("Coordinate");
Coordinate1461.point = new MFVec3f(new float[-0.1961,0.7846,-0.0218,-0.1954,0.7393,-0.0185]);
LineSet1460.coord = Coordinate1461;

//from r_metacarpophalangeal_2 to r_carpal_proximal_interphalangeal_2 vertices 2
let ColorRGBA1462 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1462.USE = "HAnimSegmentLineColorRGBA";
LineSet1460.color = ColorRGBA1462;

Shape1459.geometry = LineSet1460;

HAnimSegment1455.children[1] = Shape1459;

HAnimJoint1454.children = new MFNode();

HAnimJoint1454.children[0] = HAnimSegment1455;

let HAnimJoint1463 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1463.name = "r_carpal_proximal_interphalangeal_2";
HAnimJoint1463.DEF = "hanim_r_carpal_proximal_interphalangeal_2";
HAnimJoint1463.center = new SFVec3f(new float[-0.1954,0.7393,-0.0185]);
HAnimJoint1463.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1463.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1464 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1464.name = "r_carpal_middle_phalanx_2";
HAnimSegment1464.DEF = "hanim_r_carpal_middle_phalanx_2";
let Transform1465 = browser.currentScene.createNode("Transform");
Transform1465.translation = new SFVec3f(new float[-0.1954,0.7393,-0.0185]);
let Transform1466 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1467 = browser.currentScene.createNode("Shape");
Shape1467.USE = "HAnimJointShape";
Transform1466.children = new MFNode();

Transform1466.children[0] = Shape1467;

Transform1465.children = new MFNode();

Transform1465.children[0] = Transform1466;

HAnimSegment1464.children = new MFNode();

HAnimSegment1464.children[0] = Transform1465;

let Shape1468 = browser.currentScene.createNode("Shape");
let LineSet1469 = browser.currentScene.createNode("LineSet");
LineSet1469.vertexCount = new MFInt32(new int[2]);
let Coordinate1470 = browser.currentScene.createNode("Coordinate");
Coordinate1470.point = new MFVec3f(new float[-0.1954,0.7393,-0.0185,-0.1945,0.7169,-0.0173]);
LineSet1469.coord = Coordinate1470;

//from r_carpal_proximal_interphalangeal_2 to r_carpal_distal_interphalangeal_2 vertices 2
let ColorRGBA1471 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1471.USE = "HAnimSegmentLineColorRGBA";
LineSet1469.color = ColorRGBA1471;

Shape1468.geometry = LineSet1469;

HAnimSegment1464.children[1] = Shape1468;

let HAnimSite1472 = browser.currentScene.createNode("HAnimSite");
HAnimSite1472.name = "r_carpal_distal_phalanx_2_tip";
HAnimSite1472.DEF = "hanim_r_carpal_distal_phalanx_2_tip";
let TouchSensor1473 = browser.currentScene.createNode("TouchSensor");
TouchSensor1473.description = "HAnimSite r_carpal_distal_phalanx_2_tip";
HAnimSite1472.children = new MFNode();

HAnimSite1472.children[0] = TouchSensor1473;

let Shape1474 = browser.currentScene.createNode("Shape");
Shape1474.USE = "HAnimSiteShape";
HAnimSite1472.children[1] = Shape1474;

HAnimSegment1464.children[2] = HAnimSite1472;

let HAnimSite1475 = browser.currentScene.createNode("HAnimSite");
HAnimSite1475.name = "r_dactylion_pt";
HAnimSite1475.DEF = "hanim_r_dactylion_pt";
HAnimSite1475.translation = new SFVec3f(new float[-0.1941,0.6772,-0.0423]);
let TouchSensor1476 = browser.currentScene.createNode("TouchSensor");
TouchSensor1476.description = "HAnimSite r_dactylion_pt";
HAnimSite1475.children = new MFNode();

HAnimSite1475.children[0] = TouchSensor1476;

let Shape1477 = browser.currentScene.createNode("Shape");
Shape1477.USE = "HAnimSiteShape";
HAnimSite1475.children[1] = Shape1477;

HAnimSegment1464.children[3] = HAnimSite1475;

HAnimJoint1463.children = new MFNode();

HAnimJoint1463.children[0] = HAnimSegment1464;

let HAnimJoint1478 = browser.currentScene.createNode("HAnimJoint");
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

let HAnimJoint1479 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1479.name = "r_midcarpal_3";
HAnimJoint1479.DEF = "hanim_r_midcarpal_3";
HAnimJoint1479.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1479.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1480 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1480.name = "r_capitate";
HAnimSegment1480.DEF = "hanim_r_capitate";
let Transform1481 = browser.currentScene.createNode("Transform");
Transform1481.translation = new SFVec3f(new float[-0.1945,0.7169,-0.0173]);
let Transform1482 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1483 = browser.currentScene.createNode("Shape");
Shape1483.USE = "HAnimJointShape";
Transform1482.children = new MFNode();

Transform1482.children[0] = Shape1483;

Transform1481.children = new MFNode();

Transform1481.children[0] = Transform1482;

HAnimSegment1480.children = new MFNode();

HAnimSegment1480.children[0] = Transform1481;

let Shape1484 = browser.currentScene.createNode("Shape");
let LineSet1485 = browser.currentScene.createNode("LineSet");
LineSet1485.vertexCount = new MFInt32(new int[2]);
let Coordinate1486 = browser.currentScene.createNode("Coordinate");
Coordinate1486.point = new MFVec3f(new float[-0.1972,0.806,-0.0468]);
LineSet1485.coord = Coordinate1486;

//from r_midcarpal_3 to r_carpometacarpal_3 vertices 1
let ColorRGBA1487 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1487.USE = "HAnimSegmentLineColorRGBA";
LineSet1485.color = ColorRGBA1487;

Shape1484.geometry = LineSet1485;

HAnimSegment1480.children[1] = Shape1484;

let HAnimSite1488 = browser.currentScene.createNode("HAnimSite");
HAnimSite1488.name = "r_metacarpal_phalanx_3_pt";
HAnimSite1488.DEF = "hanim_r_metacarpal_phalanx_3_pt";
let TouchSensor1489 = browser.currentScene.createNode("TouchSensor");
TouchSensor1489.description = "HAnimSite r_metacarpal_phalanx_3_pt";
HAnimSite1488.children = new MFNode();

HAnimSite1488.children[0] = TouchSensor1489;

let Shape1490 = browser.currentScene.createNode("Shape");
Shape1490.USE = "HAnimSiteShape";
HAnimSite1488.children[1] = Shape1490;

HAnimSegment1480.children[2] = HAnimSite1488;

HAnimJoint1479.children = new MFNode();

HAnimJoint1479.children[0] = HAnimSegment1480;

let HAnimJoint1491 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1491.name = "r_carpometacarpal_3";
HAnimJoint1491.DEF = "hanim_r_carpometacarpal_3";
HAnimJoint1491.center = new SFVec3f(new float[-0.1972,0.806,-0.0468]);
HAnimJoint1491.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1491.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1492 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1492.name = "r_metacarpal_3";
HAnimSegment1492.DEF = "hanim_r_metacarpal_3";
let Transform1493 = browser.currentScene.createNode("Transform");
Transform1493.translation = new SFVec3f(new float[-0.1972,0.806,-0.0468]);
let Transform1494 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1495 = browser.currentScene.createNode("Shape");
Shape1495.USE = "HAnimJointShape";
Transform1494.children = new MFNode();

Transform1494.children[0] = Shape1495;

Transform1493.children = new MFNode();

Transform1493.children[0] = Transform1494;

HAnimSegment1492.children = new MFNode();

HAnimSegment1492.children[0] = Transform1493;

let Shape1496 = browser.currentScene.createNode("Shape");
let LineSet1497 = browser.currentScene.createNode("LineSet");
LineSet1497.vertexCount = new MFInt32(new int[2]);
let Coordinate1498 = browser.currentScene.createNode("Coordinate");
Coordinate1498.point = new MFVec3f(new float[-0.1972,0.806,-0.0468,-0.1972,0.7849,-0.0468]);
LineSet1497.coord = Coordinate1498;

//from r_carpometacarpal_3 to r_metacarpophalangeal_3 vertices 2
let ColorRGBA1499 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1499.USE = "HAnimSegmentLineColorRGBA";
LineSet1497.color = ColorRGBA1499;

Shape1496.geometry = LineSet1497;

HAnimSegment1492.children[1] = Shape1496;

HAnimJoint1491.children = new MFNode();

HAnimJoint1491.children[0] = HAnimSegment1492;

let HAnimJoint1500 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1500.name = "r_metacarpophalangeal_3";
HAnimJoint1500.DEF = "hanim_r_metacarpophalangeal_3";
HAnimJoint1500.center = new SFVec3f(new float[-0.1972,0.7849,-0.0468]);
HAnimJoint1500.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1500.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1501 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1501.name = "r_carpal_proximal_phalanx_3";
HAnimSegment1501.DEF = "hanim_r_carpal_proximal_phalanx_3";
let Transform1502 = browser.currentScene.createNode("Transform");
Transform1502.translation = new SFVec3f(new float[-0.1972,0.7849,-0.0468]);
let Transform1503 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1504 = browser.currentScene.createNode("Shape");
Shape1504.USE = "HAnimJointShape";
Transform1503.children = new MFNode();

Transform1503.children[0] = Shape1504;

Transform1502.children = new MFNode();

Transform1502.children[0] = Transform1503;

HAnimSegment1501.children = new MFNode();

HAnimSegment1501.children[0] = Transform1502;

let Shape1505 = browser.currentScene.createNode("Shape");
let LineSet1506 = browser.currentScene.createNode("LineSet");
LineSet1506.vertexCount = new MFInt32(new int[2]);
let Coordinate1507 = browser.currentScene.createNode("Coordinate");
Coordinate1507.point = new MFVec3f(new float[-0.1972,0.7849,-0.0468,-0.195,0.7304,-0.0441]);
LineSet1506.coord = Coordinate1507;

//from r_metacarpophalangeal_3 to r_carpal_proximal_interphalangeal_3 vertices 2
let ColorRGBA1508 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1508.USE = "HAnimSegmentLineColorRGBA";
LineSet1506.color = ColorRGBA1508;

Shape1505.geometry = LineSet1506;

HAnimSegment1501.children[1] = Shape1505;

HAnimJoint1500.children = new MFNode();

HAnimJoint1500.children[0] = HAnimSegment1501;

let HAnimJoint1509 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1509.name = "r_carpal_proximal_interphalangeal_3";
HAnimJoint1509.DEF = "hanim_r_carpal_proximal_interphalangeal_3";
HAnimJoint1509.center = new SFVec3f(new float[-0.195,0.7304,-0.0441]);
HAnimJoint1509.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1509.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1510 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1510.name = "r_carpal_middle_phalanx_3";
HAnimSegment1510.DEF = "hanim_r_carpal_middle_phalanx_3";
let Transform1511 = browser.currentScene.createNode("Transform");
Transform1511.translation = new SFVec3f(new float[-0.195,0.7304,-0.0441]);
let Transform1512 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1513 = browser.currentScene.createNode("Shape");
Shape1513.USE = "HAnimJointShape";
Transform1512.children = new MFNode();

Transform1512.children[0] = Shape1513;

Transform1511.children = new MFNode();

Transform1511.children[0] = Transform1512;

HAnimSegment1510.children = new MFNode();

HAnimSegment1510.children[0] = Transform1511;

let Shape1514 = browser.currentScene.createNode("Shape");
let LineSet1515 = browser.currentScene.createNode("LineSet");
LineSet1515.vertexCount = new MFInt32(new int[2]);
let Coordinate1516 = browser.currentScene.createNode("Coordinate");
Coordinate1516.point = new MFVec3f(new float[-0.195,0.7304,-0.0441,-0.1939,0.7042,-0.0432]);
LineSet1515.coord = Coordinate1516;

//from r_carpal_proximal_interphalangeal_3 to r_carpal_distal_interphalangeal_3 vertices 2
let ColorRGBA1517 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1517.USE = "HAnimSegmentLineColorRGBA";
LineSet1515.color = ColorRGBA1517;

Shape1514.geometry = LineSet1515;

HAnimSegment1510.children[1] = Shape1514;

let HAnimSite1518 = browser.currentScene.createNode("HAnimSite");
HAnimSite1518.name = "r_carpal_distal_phalanx_3_tip";
HAnimSite1518.DEF = "hanim_r_carpal_distal_phalanx_3_tip";
let TouchSensor1519 = browser.currentScene.createNode("TouchSensor");
TouchSensor1519.description = "HAnimSite r_carpal_distal_phalanx_3_tip";
HAnimSite1518.children = new MFNode();

HAnimSite1518.children[0] = TouchSensor1519;

let Shape1520 = browser.currentScene.createNode("Shape");
Shape1520.USE = "HAnimSiteShape";
HAnimSite1518.children[1] = Shape1520;

HAnimSegment1510.children[2] = HAnimSite1518;

HAnimJoint1509.children = new MFNode();

HAnimJoint1509.children[0] = HAnimSegment1510;

let HAnimJoint1521 = browser.currentScene.createNode("HAnimJoint");
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

let HAnimJoint1522 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1522.name = "r_midcarpal_4_5";
HAnimJoint1522.DEF = "hanim_r_midcarpal_4_5";
HAnimJoint1522.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1522.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1523 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1523.name = "r_hamate";
HAnimSegment1523.DEF = "hanim_r_hamate";
let Transform1524 = browser.currentScene.createNode("Transform");
Transform1524.translation = new SFVec3f(new float[-0.1939,0.7042,-0.0432]);
let Transform1525 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1526 = browser.currentScene.createNode("Shape");
Shape1526.USE = "HAnimJointShape";
Transform1525.children = new MFNode();

Transform1525.children[0] = Shape1526;

Transform1524.children = new MFNode();

Transform1524.children[0] = Transform1525;

HAnimSegment1523.children = new MFNode();

HAnimSegment1523.children[0] = Transform1524;

let Shape1527 = browser.currentScene.createNode("Shape");
let LineSet1528 = browser.currentScene.createNode("LineSet");
LineSet1528.vertexCount = new MFInt32(new int[2]);
let Coordinate1529 = browser.currentScene.createNode("Coordinate");
Coordinate1529.point = new MFVec3f(new float[-0.1951,0.8049,-0.0732]);
LineSet1528.coord = Coordinate1529;

//from r_midcarpal_4_5 to r_carpometacarpal_4 vertices 1
let ColorRGBA1530 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1530.USE = "HAnimSegmentLineColorRGBA";
LineSet1528.color = ColorRGBA1530;

Shape1527.geometry = LineSet1528;

HAnimSegment1523.children[1] = Shape1527;

let Shape1531 = browser.currentScene.createNode("Shape");
let LineSet1532 = browser.currentScene.createNode("LineSet");
LineSet1532.vertexCount = new MFInt32(new int[2]);
let Coordinate1533 = browser.currentScene.createNode("Coordinate");
Coordinate1533.point = new MFVec3f(new float[-0.1926,0.8096,-0.0975]);
LineSet1532.coord = Coordinate1533;

//from r_midcarpal_4_5 to r_carpometacarpal_5 vertices 1
let ColorRGBA1534 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1534.USE = "HAnimSegmentLineColorRGBA";
LineSet1532.color = ColorRGBA1534;

Shape1531.geometry = LineSet1532;

HAnimSegment1523.children[2] = Shape1531;

let HAnimSite1535 = browser.currentScene.createNode("HAnimSite");
HAnimSite1535.name = "r_metacarpal_phalanx_5_pt";
HAnimSite1535.DEF = "hanim_r_metacarpal_phalanx_5_pt";
HAnimSite1535.translation = new SFVec3f(new float[-0.1929,0.789,-0.1064]);
let TouchSensor1536 = browser.currentScene.createNode("TouchSensor");
TouchSensor1536.description = "HAnimSite r_metacarpal_phalanx_5_pt";
HAnimSite1535.children = new MFNode();

HAnimSite1535.children[0] = TouchSensor1536;

let Shape1537 = browser.currentScene.createNode("Shape");
Shape1537.USE = "HAnimSiteShape";
HAnimSite1535.children[1] = Shape1537;

HAnimSegment1523.children[3] = HAnimSite1535;

HAnimJoint1522.children = new MFNode();

HAnimJoint1522.children[0] = HAnimSegment1523;

let HAnimJoint1538 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1538.name = "r_carpometacarpal_4";
HAnimJoint1538.DEF = "hanim_r_carpometacarpal_4";
HAnimJoint1538.center = new SFVec3f(new float[-0.1951,0.8049,-0.0732]);
HAnimJoint1538.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1538.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1539 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1539.name = "r_metacarpal_4";
HAnimSegment1539.DEF = "hanim_r_metacarpal_4";
let Transform1540 = browser.currentScene.createNode("Transform");
Transform1540.translation = new SFVec3f(new float[-0.1951,0.8049,-0.0732]);
let Transform1541 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1542 = browser.currentScene.createNode("Shape");
Shape1542.USE = "HAnimJointShape";
Transform1541.children = new MFNode();

Transform1541.children[0] = Shape1542;

Transform1540.children = new MFNode();

Transform1540.children[0] = Transform1541;

HAnimSegment1539.children = new MFNode();

HAnimSegment1539.children[0] = Transform1540;

let Shape1543 = browser.currentScene.createNode("Shape");
let LineSet1544 = browser.currentScene.createNode("LineSet");
LineSet1544.vertexCount = new MFInt32(new int[2]);
let Coordinate1545 = browser.currentScene.createNode("Coordinate");
Coordinate1545.point = new MFVec3f(new float[-0.1951,0.8049,-0.0732,-0.1951,0.7845,-0.0732]);
LineSet1544.coord = Coordinate1545;

//from r_carpometacarpal_4 to r_metacarpophalangeal_4 vertices 2
let ColorRGBA1546 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1546.USE = "HAnimSegmentLineColorRGBA";
LineSet1544.color = ColorRGBA1546;

Shape1543.geometry = LineSet1544;

HAnimSegment1539.children[1] = Shape1543;

HAnimJoint1538.children = new MFNode();

HAnimJoint1538.children[0] = HAnimSegment1539;

let HAnimJoint1547 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1547.name = "r_metacarpophalangeal_4";
HAnimJoint1547.DEF = "hanim_r_metacarpophalangeal_4";
HAnimJoint1547.center = new SFVec3f(new float[-0.1951,0.7845,-0.0732]);
HAnimJoint1547.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1547.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1548 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1548.name = "r_carpal_proximal_phalanx_4";
HAnimSegment1548.DEF = "hanim_r_carpal_proximal_phalanx_4";
let Transform1549 = browser.currentScene.createNode("Transform");
Transform1549.translation = new SFVec3f(new float[-0.1951,0.7845,-0.0732]);
let Transform1550 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1551 = browser.currentScene.createNode("Shape");
Shape1551.USE = "HAnimJointShape";
Transform1550.children = new MFNode();

Transform1550.children[0] = Shape1551;

Transform1549.children = new MFNode();

Transform1549.children[0] = Transform1550;

HAnimSegment1548.children = new MFNode();

HAnimSegment1548.children[0] = Transform1549;

let Shape1552 = browser.currentScene.createNode("Shape");
let LineSet1553 = browser.currentScene.createNode("LineSet");
LineSet1553.vertexCount = new MFInt32(new int[2]);
let Coordinate1554 = browser.currentScene.createNode("Coordinate");
Coordinate1554.point = new MFVec3f(new float[-0.1951,0.7845,-0.0732,-0.192,0.7318,-0.0716]);
LineSet1553.coord = Coordinate1554;

//from r_metacarpophalangeal_4 to r_carpal_proximal_interphalangeal_4 vertices 2
let ColorRGBA1555 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1555.USE = "HAnimSegmentLineColorRGBA";
LineSet1553.color = ColorRGBA1555;

Shape1552.geometry = LineSet1553;

HAnimSegment1548.children[1] = Shape1552;

HAnimJoint1547.children = new MFNode();

HAnimJoint1547.children[0] = HAnimSegment1548;

let HAnimJoint1556 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1556.name = "r_carpal_proximal_interphalangeal_4";
HAnimJoint1556.DEF = "hanim_r_carpal_proximal_interphalangeal_4";
HAnimJoint1556.center = new SFVec3f(new float[-0.192,0.7318,-0.0716]);
HAnimJoint1556.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1556.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1557 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1557.name = "r_carpal_middle_phalanx_4";
HAnimSegment1557.DEF = "hanim_r_carpal_middle_phalanx_4";
let Transform1558 = browser.currentScene.createNode("Transform");
Transform1558.translation = new SFVec3f(new float[-0.192,0.7318,-0.0716]);
let Transform1559 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1560 = browser.currentScene.createNode("Shape");
Shape1560.USE = "HAnimJointShape";
Transform1559.children = new MFNode();

Transform1559.children[0] = Shape1560;

Transform1558.children = new MFNode();

Transform1558.children[0] = Transform1559;

HAnimSegment1557.children = new MFNode();

HAnimSegment1557.children[0] = Transform1558;

let Shape1561 = browser.currentScene.createNode("Shape");
let LineSet1562 = browser.currentScene.createNode("LineSet");
LineSet1562.vertexCount = new MFInt32(new int[2]);
let Coordinate1563 = browser.currentScene.createNode("Coordinate");
Coordinate1563.point = new MFVec3f(new float[-0.192,0.7318,-0.0716,-0.1908,0.7077,-0.0706]);
LineSet1562.coord = Coordinate1563;

//from r_carpal_proximal_interphalangeal_4 to r_carpal_distal_interphalangeal_4 vertices 2
let ColorRGBA1564 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1564.USE = "HAnimSegmentLineColorRGBA";
LineSet1562.color = ColorRGBA1564;

Shape1561.geometry = LineSet1562;

HAnimSegment1557.children[1] = Shape1561;

let HAnimSite1565 = browser.currentScene.createNode("HAnimSite");
HAnimSite1565.name = "r_carpal_distal_phalanx_4_tip";
HAnimSite1565.DEF = "hanim_r_carpal_distal_phalanx_4_tip";
let TouchSensor1566 = browser.currentScene.createNode("TouchSensor");
TouchSensor1566.description = "HAnimSite r_carpal_distal_phalanx_4_tip";
HAnimSite1565.children = new MFNode();

HAnimSite1565.children[0] = TouchSensor1566;

let Shape1567 = browser.currentScene.createNode("Shape");
Shape1567.USE = "HAnimSiteShape";
HAnimSite1565.children[1] = Shape1567;

HAnimSegment1557.children[2] = HAnimSite1565;

HAnimJoint1556.children = new MFNode();

HAnimJoint1556.children[0] = HAnimSegment1557;

let HAnimJoint1568 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1568.name = "r_carpal_distal_interphalangeal_4";
HAnimJoint1568.DEF = "hanim_r_carpal_distal_interphalangeal_4";
HAnimJoint1568.center = new SFVec3f(new float[-0.1908,0.7077,-0.0706]);
HAnimJoint1568.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1568.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1556.children[1] = HAnimJoint1568;

HAnimJoint1547.children[1] = HAnimJoint1556;

HAnimJoint1538.children[1] = HAnimJoint1547;

HAnimJoint1522.children[1] = HAnimJoint1538;

let HAnimJoint1569 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1569.name = "r_carpometacarpal_5";
HAnimJoint1569.DEF = "hanim_r_carpometacarpal_5";
HAnimJoint1569.center = new SFVec3f(new float[-0.1926,0.8096,-0.0975]);
HAnimJoint1569.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1569.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1570 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1570.name = "r_metacarpal_5";
HAnimSegment1570.DEF = "hanim_r_metacarpal_5";
let Transform1571 = browser.currentScene.createNode("Transform");
Transform1571.translation = new SFVec3f(new float[-0.1926,0.8096,-0.0975]);
let Transform1572 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1573 = browser.currentScene.createNode("Shape");
Shape1573.USE = "HAnimJointShape";
Transform1572.children = new MFNode();

Transform1572.children[0] = Shape1573;

Transform1571.children = new MFNode();

Transform1571.children[0] = Transform1572;

HAnimSegment1570.children = new MFNode();

HAnimSegment1570.children[0] = Transform1571;

let Shape1574 = browser.currentScene.createNode("Shape");
let LineSet1575 = browser.currentScene.createNode("LineSet");
LineSet1575.vertexCount = new MFInt32(new int[2]);
let Coordinate1576 = browser.currentScene.createNode("Coordinate");
Coordinate1576.point = new MFVec3f(new float[-0.1926,0.8096,-0.0975,-0.1926,0.7896,-0.0975]);
LineSet1575.coord = Coordinate1576;

//from r_carpometacarpal_5 to r_metacarpophalangeal_5 vertices 2
let ColorRGBA1577 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1577.USE = "HAnimSegmentLineColorRGBA";
LineSet1575.color = ColorRGBA1577;

Shape1574.geometry = LineSet1575;

HAnimSegment1570.children[1] = Shape1574;

HAnimJoint1569.children = new MFNode();

HAnimJoint1569.children[0] = HAnimSegment1570;

let HAnimJoint1578 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1578.name = "r_metacarpophalangeal_5";
HAnimJoint1578.DEF = "hanim_r_metacarpophalangeal_5";
HAnimJoint1578.center = new SFVec3f(new float[-0.1926,0.7896,-0.0975]);
HAnimJoint1578.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1578.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1579 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1579.name = "r_carpal_proximal_phalanx_5";
HAnimSegment1579.DEF = "hanim_r_carpal_proximal_phalanx_5";
let Transform1580 = browser.currentScene.createNode("Transform");
Transform1580.translation = new SFVec3f(new float[-0.1926,0.7896,-0.0975]);
let Transform1581 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1582 = browser.currentScene.createNode("Shape");
Shape1582.USE = "HAnimJointShape";
Transform1581.children = new MFNode();

Transform1581.children[0] = Shape1582;

Transform1580.children = new MFNode();

Transform1580.children[0] = Transform1581;

HAnimSegment1579.children = new MFNode();

HAnimSegment1579.children[0] = Transform1580;

let Shape1583 = browser.currentScene.createNode("Shape");
let LineSet1584 = browser.currentScene.createNode("LineSet");
LineSet1584.vertexCount = new MFInt32(new int[2]);
let Coordinate1585 = browser.currentScene.createNode("Coordinate");
Coordinate1585.point = new MFVec3f(new float[-0.1926,0.7896,-0.0975,-0.1902,0.7483,-0.0963]);
LineSet1584.coord = Coordinate1585;

//from r_metacarpophalangeal_5 to r_carpal_proximal_interphalangeal_5 vertices 2
let ColorRGBA1586 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1586.USE = "HAnimSegmentLineColorRGBA";
LineSet1584.color = ColorRGBA1586;

Shape1583.geometry = LineSet1584;

HAnimSegment1579.children[1] = Shape1583;

HAnimJoint1578.children = new MFNode();

HAnimJoint1578.children[0] = HAnimSegment1579;

let HAnimJoint1587 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1587.name = "r_carpal_proximal_interphalangeal_5";
HAnimJoint1587.DEF = "hanim_r_carpal_proximal_interphalangeal_5";
HAnimJoint1587.center = new SFVec3f(new float[-0.1902,0.7483,-0.0963]);
HAnimJoint1587.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1587.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1588 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1588.name = "r_carpal_middle_phalanx_5";
HAnimSegment1588.DEF = "hanim_r_carpal_middle_phalanx_5";
let Transform1589 = browser.currentScene.createNode("Transform");
Transform1589.translation = new SFVec3f(new float[-0.1902,0.7483,-0.0963]);
let Transform1590 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1591 = browser.currentScene.createNode("Shape");
Shape1591.USE = "HAnimJointShape";
Transform1590.children = new MFNode();

Transform1590.children[0] = Shape1591;

Transform1589.children = new MFNode();

Transform1589.children[0] = Transform1590;

HAnimSegment1588.children = new MFNode();

HAnimSegment1588.children[0] = Transform1589;

let Shape1592 = browser.currentScene.createNode("Shape");
let LineSet1593 = browser.currentScene.createNode("LineSet");
LineSet1593.vertexCount = new MFInt32(new int[2]);
let Coordinate1594 = browser.currentScene.createNode("Coordinate");
Coordinate1594.point = new MFVec3f(new float[-0.1902,0.7483,-0.0963,-0.1908,0.754,-0.096]);
LineSet1593.coord = Coordinate1594;

//from r_carpal_proximal_interphalangeal_5 to r_carpal_distal_interphalangeal_5 vertices 2
let ColorRGBA1595 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1595.USE = "HAnimSegmentLineColorRGBA";
LineSet1593.color = ColorRGBA1595;

Shape1592.geometry = LineSet1593;

HAnimSegment1588.children[1] = Shape1592;

let HAnimSite1596 = browser.currentScene.createNode("HAnimSite");
HAnimSite1596.name = "r_carpal_distal_phalanx_5_tip";
HAnimSite1596.DEF = "hanim_r_carpal_distal_phalanx_5_tip";
let TouchSensor1597 = browser.currentScene.createNode("TouchSensor");
TouchSensor1597.description = "HAnimSite r_carpal_distal_phalanx_5_tip";
HAnimSite1596.children = new MFNode();

HAnimSite1596.children[0] = TouchSensor1597;

let Shape1598 = browser.currentScene.createNode("Shape");
Shape1598.USE = "HAnimSiteShape";
HAnimSite1596.children[1] = Shape1598;

HAnimSegment1588.children[2] = HAnimSite1596;

HAnimJoint1587.children = new MFNode();

HAnimJoint1587.children[0] = HAnimSegment1588;

let HAnimJoint1599 = browser.currentScene.createNode("HAnimJoint");
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

let HAnimJoint1600 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1600.USE = "hanim_humanoid_root";
HAnimHumanoid43.joints[1] = HAnimJoint1600;

let HAnimJoint1601 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1601.USE = "hanim_sacroiliac";
HAnimHumanoid43.joints[2] = HAnimJoint1601;

let HAnimJoint1602 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1602.USE = "hanim_l_hip";
HAnimHumanoid43.joints[3] = HAnimJoint1602;

let HAnimJoint1603 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1603.USE = "hanim_l_knee";
HAnimHumanoid43.joints[4] = HAnimJoint1603;

let HAnimJoint1604 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1604.USE = "hanim_l_talocrural";
HAnimHumanoid43.joints[5] = HAnimJoint1604;

let HAnimJoint1605 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1605.USE = "hanim_l_talocalcaneonavicular";
HAnimHumanoid43.joints[6] = HAnimJoint1605;

let HAnimJoint1606 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1606.USE = "hanim_l_cuneonavicular_1";
HAnimHumanoid43.joints[7] = HAnimJoint1606;

let HAnimJoint1607 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1607.USE = "hanim_l_tarsometatarsal_1";
HAnimHumanoid43.joints[8] = HAnimJoint1607;

let HAnimJoint1608 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1608.USE = "hanim_l_metatarsophalangeal_1";
HAnimHumanoid43.joints[9] = HAnimJoint1608;

let HAnimJoint1609 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1609.USE = "hanim_l_tarsal_interphalangeal_1";
HAnimHumanoid43.joints[10] = HAnimJoint1609;

let HAnimJoint1610 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1610.USE = "hanim_l_cuneonavicular_2";
HAnimHumanoid43.joints[11] = HAnimJoint1610;

let HAnimJoint1611 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1611.USE = "hanim_l_tarsometatarsal_2";
HAnimHumanoid43.joints[12] = HAnimJoint1611;

let HAnimJoint1612 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1612.USE = "hanim_l_metatarsophalangeal_2";
HAnimHumanoid43.joints[13] = HAnimJoint1612;

let HAnimJoint1613 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1613.USE = "hanim_l_tarsal_proximal_interphalangeal_2";
HAnimHumanoid43.joints[14] = HAnimJoint1613;

let HAnimJoint1614 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1614.USE = "hanim_l_tarsal_distal_interphalangeal_2";
HAnimHumanoid43.joints[15] = HAnimJoint1614;

let HAnimJoint1615 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1615.USE = "hanim_l_cuneonavicular_3";
HAnimHumanoid43.joints[16] = HAnimJoint1615;

let HAnimJoint1616 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1616.USE = "hanim_l_tarsometatarsal_3";
HAnimHumanoid43.joints[17] = HAnimJoint1616;

let HAnimJoint1617 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1617.USE = "hanim_l_metatarsophalangeal_3";
HAnimHumanoid43.joints[18] = HAnimJoint1617;

let HAnimJoint1618 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1618.USE = "hanim_l_tarsal_proximal_interphalangeal_3";
HAnimHumanoid43.joints[19] = HAnimJoint1618;

let HAnimJoint1619 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1619.USE = "hanim_l_tarsal_distal_interphalangeal_3";
HAnimHumanoid43.joints[20] = HAnimJoint1619;

let HAnimJoint1620 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1620.USE = "hanim_l_calcaneocuboid";
HAnimHumanoid43.joints[21] = HAnimJoint1620;

let HAnimJoint1621 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1621.USE = "hanim_l_transversetarsal";
HAnimHumanoid43.joints[22] = HAnimJoint1621;

let HAnimJoint1622 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1622.USE = "hanim_l_tarsometatarsal_4";
HAnimHumanoid43.joints[23] = HAnimJoint1622;

let HAnimJoint1623 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1623.USE = "hanim_l_metatarsophalangeal_4";
HAnimHumanoid43.joints[24] = HAnimJoint1623;

let HAnimJoint1624 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1624.USE = "hanim_l_tarsal_proximal_interphalangeal_4";
HAnimHumanoid43.joints[25] = HAnimJoint1624;

let HAnimJoint1625 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1625.USE = "hanim_l_tarsal_distal_interphalangeal_4";
HAnimHumanoid43.joints[26] = HAnimJoint1625;

let HAnimJoint1626 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1626.USE = "hanim_l_tarsometatarsal_5";
HAnimHumanoid43.joints[27] = HAnimJoint1626;

let HAnimJoint1627 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1627.USE = "hanim_l_metatarsophalangeal_5";
HAnimHumanoid43.joints[28] = HAnimJoint1627;

let HAnimJoint1628 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1628.USE = "hanim_l_tarsal_proximal_interphalangeal_5";
HAnimHumanoid43.joints[29] = HAnimJoint1628;

let HAnimJoint1629 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1629.USE = "hanim_l_tarsal_distal_interphalangeal_5";
HAnimHumanoid43.joints[30] = HAnimJoint1629;

let HAnimJoint1630 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1630.USE = "hanim_r_hip";
HAnimHumanoid43.joints[31] = HAnimJoint1630;

let HAnimJoint1631 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1631.USE = "hanim_r_knee";
HAnimHumanoid43.joints[32] = HAnimJoint1631;

let HAnimJoint1632 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1632.USE = "hanim_r_talocrural";
HAnimHumanoid43.joints[33] = HAnimJoint1632;

let HAnimJoint1633 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1633.USE = "hanim_r_talocalcaneonavicular";
HAnimHumanoid43.joints[34] = HAnimJoint1633;

let HAnimJoint1634 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1634.USE = "hanim_r_cuneonavicular_1";
HAnimHumanoid43.joints[35] = HAnimJoint1634;

let HAnimJoint1635 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1635.USE = "hanim_r_tarsometatarsal_1";
HAnimHumanoid43.joints[36] = HAnimJoint1635;

let HAnimJoint1636 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1636.USE = "hanim_r_metatarsophalangeal_1";
HAnimHumanoid43.joints[37] = HAnimJoint1636;

let HAnimJoint1637 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1637.USE = "hanim_r_tarsal_interphalangeal_1";
HAnimHumanoid43.joints[38] = HAnimJoint1637;

let HAnimJoint1638 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1638.USE = "hanim_r_cuneonavicular_2";
HAnimHumanoid43.joints[39] = HAnimJoint1638;

let HAnimJoint1639 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1639.USE = "hanim_r_tarsometatarsal_2";
HAnimHumanoid43.joints[40] = HAnimJoint1639;

let HAnimJoint1640 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1640.USE = "hanim_r_metatarsophalangeal_2";
HAnimHumanoid43.joints[41] = HAnimJoint1640;

let HAnimJoint1641 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1641.USE = "hanim_r_tarsal_proximal_interphalangeal_2";
HAnimHumanoid43.joints[42] = HAnimJoint1641;

let HAnimJoint1642 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1642.USE = "hanim_r_tarsal_distal_interphalangeal_2";
HAnimHumanoid43.joints[43] = HAnimJoint1642;

let HAnimJoint1643 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1643.USE = "hanim_r_cuneonavicular_3";
HAnimHumanoid43.joints[44] = HAnimJoint1643;

let HAnimJoint1644 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1644.USE = "hanim_r_tarsometatarsal_3";
HAnimHumanoid43.joints[45] = HAnimJoint1644;

let HAnimJoint1645 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1645.USE = "hanim_r_metatarsophalangeal_3";
HAnimHumanoid43.joints[46] = HAnimJoint1645;

let HAnimJoint1646 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1646.USE = "hanim_r_tarsal_proximal_interphalangeal_3";
HAnimHumanoid43.joints[47] = HAnimJoint1646;

let HAnimJoint1647 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1647.USE = "hanim_r_tarsal_distal_interphalangeal_3";
HAnimHumanoid43.joints[48] = HAnimJoint1647;

let HAnimJoint1648 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1648.USE = "hanim_r_calcaneocuboid";
HAnimHumanoid43.joints[49] = HAnimJoint1648;

let HAnimJoint1649 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1649.USE = "hanim_r_transversetarsal";
HAnimHumanoid43.joints[50] = HAnimJoint1649;

let HAnimJoint1650 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1650.USE = "hanim_r_tarsometatarsal_4";
HAnimHumanoid43.joints[51] = HAnimJoint1650;

let HAnimJoint1651 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1651.USE = "hanim_r_metatarsophalangeal_4";
HAnimHumanoid43.joints[52] = HAnimJoint1651;

let HAnimJoint1652 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1652.USE = "hanim_r_tarsal_proximal_interphalangeal_4";
HAnimHumanoid43.joints[53] = HAnimJoint1652;

let HAnimJoint1653 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1653.USE = "hanim_r_tarsal_distal_interphalangeal_4";
HAnimHumanoid43.joints[54] = HAnimJoint1653;

let HAnimJoint1654 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1654.USE = "hanim_r_tarsometatarsal_5";
HAnimHumanoid43.joints[55] = HAnimJoint1654;

let HAnimJoint1655 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1655.USE = "hanim_r_metatarsophalangeal_5";
HAnimHumanoid43.joints[56] = HAnimJoint1655;

let HAnimJoint1656 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1656.USE = "hanim_r_tarsal_proximal_interphalangeal_5";
HAnimHumanoid43.joints[57] = HAnimJoint1656;

let HAnimJoint1657 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1657.USE = "hanim_r_tarsal_distal_interphalangeal_5";
HAnimHumanoid43.joints[58] = HAnimJoint1657;

let HAnimJoint1658 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1658.USE = "hanim_vl5";
HAnimHumanoid43.joints[59] = HAnimJoint1658;

let HAnimJoint1659 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1659.USE = "hanim_vl4";
HAnimHumanoid43.joints[60] = HAnimJoint1659;

let HAnimJoint1660 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1660.USE = "hanim_vl3";
HAnimHumanoid43.joints[61] = HAnimJoint1660;

let HAnimJoint1661 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1661.USE = "hanim_vl2";
HAnimHumanoid43.joints[62] = HAnimJoint1661;

let HAnimJoint1662 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1662.USE = "hanim_vl1";
HAnimHumanoid43.joints[63] = HAnimJoint1662;

let HAnimJoint1663 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1663.USE = "hanim_vt12";
HAnimHumanoid43.joints[64] = HAnimJoint1663;

let HAnimJoint1664 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1664.USE = "hanim_vt11";
HAnimHumanoid43.joints[65] = HAnimJoint1664;

let HAnimJoint1665 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1665.USE = "hanim_vt10";
HAnimHumanoid43.joints[66] = HAnimJoint1665;

let HAnimJoint1666 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1666.USE = "hanim_vt9";
HAnimHumanoid43.joints[67] = HAnimJoint1666;

let HAnimJoint1667 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1667.USE = "hanim_vt8";
HAnimHumanoid43.joints[68] = HAnimJoint1667;

let HAnimJoint1668 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1668.USE = "hanim_vt7";
HAnimHumanoid43.joints[69] = HAnimJoint1668;

let HAnimJoint1669 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1669.USE = "hanim_vt6";
HAnimHumanoid43.joints[70] = HAnimJoint1669;

let HAnimJoint1670 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1670.USE = "hanim_vt5";
HAnimHumanoid43.joints[71] = HAnimJoint1670;

let HAnimJoint1671 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1671.USE = "hanim_vt4";
HAnimHumanoid43.joints[72] = HAnimJoint1671;

let HAnimJoint1672 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1672.USE = "hanim_vt3";
HAnimHumanoid43.joints[73] = HAnimJoint1672;

let HAnimJoint1673 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1673.USE = "hanim_vt2";
HAnimHumanoid43.joints[74] = HAnimJoint1673;

let HAnimJoint1674 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1674.USE = "hanim_vt1";
HAnimHumanoid43.joints[75] = HAnimJoint1674;

let HAnimJoint1675 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1675.USE = "hanim_vc7";
HAnimHumanoid43.joints[76] = HAnimJoint1675;

let HAnimJoint1676 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1676.USE = "hanim_vc6";
HAnimHumanoid43.joints[77] = HAnimJoint1676;

let HAnimJoint1677 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1677.USE = "hanim_vc5";
HAnimHumanoid43.joints[78] = HAnimJoint1677;

let HAnimJoint1678 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1678.USE = "hanim_vc4";
HAnimHumanoid43.joints[79] = HAnimJoint1678;

let HAnimJoint1679 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1679.USE = "hanim_vc3";
HAnimHumanoid43.joints[80] = HAnimJoint1679;

let HAnimJoint1680 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1680.USE = "hanim_vc2";
HAnimHumanoid43.joints[81] = HAnimJoint1680;

let HAnimJoint1681 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1681.USE = "hanim_vc1";
HAnimHumanoid43.joints[82] = HAnimJoint1681;

let HAnimJoint1682 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1682.USE = "hanim_skullbase";
HAnimHumanoid43.joints[83] = HAnimJoint1682;

let HAnimJoint1683 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1683.USE = "hanim_l_eyelid_joint";
HAnimHumanoid43.joints[84] = HAnimJoint1683;

let HAnimJoint1684 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1684.USE = "hanim_r_eyelid_joint";
HAnimHumanoid43.joints[85] = HAnimJoint1684;

let HAnimJoint1685 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1685.USE = "hanim_l_eyeball_joint";
HAnimHumanoid43.joints[86] = HAnimJoint1685;

let HAnimJoint1686 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1686.USE = "hanim_r_eyeball_joint";
HAnimHumanoid43.joints[87] = HAnimJoint1686;

let HAnimJoint1687 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1687.USE = "hanim_l_eyebrow_joint";
HAnimHumanoid43.joints[88] = HAnimJoint1687;

let HAnimJoint1688 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1688.USE = "hanim_r_eyebrow_joint";
HAnimHumanoid43.joints[89] = HAnimJoint1688;

let HAnimJoint1689 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1689.USE = "hanim_temporomandibular";
HAnimHumanoid43.joints[90] = HAnimJoint1689;

let HAnimJoint1690 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1690.USE = "hanim_l_sternoclavicular";
HAnimHumanoid43.joints[91] = HAnimJoint1690;

let HAnimJoint1691 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1691.USE = "hanim_l_acromioclavicular";
HAnimHumanoid43.joints[92] = HAnimJoint1691;

let HAnimJoint1692 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1692.USE = "hanim_l_shoulder";
HAnimHumanoid43.joints[93] = HAnimJoint1692;

let HAnimJoint1693 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1693.USE = "hanim_l_elbow";
HAnimHumanoid43.joints[94] = HAnimJoint1693;

let HAnimJoint1694 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1694.USE = "hanim_l_radiocarpal";
HAnimHumanoid43.joints[95] = HAnimJoint1694;

let HAnimJoint1695 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1695.USE = "hanim_l_midcarpal_1";
HAnimHumanoid43.joints[96] = HAnimJoint1695;

let HAnimJoint1696 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1696.USE = "hanim_l_carpometacarpal_1";
HAnimHumanoid43.joints[97] = HAnimJoint1696;

let HAnimJoint1697 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1697.USE = "hanim_l_metacarpophalangeal_1";
HAnimHumanoid43.joints[98] = HAnimJoint1697;

let HAnimJoint1698 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1698.USE = "hanim_l_carpal_interphalangeal_1";
HAnimHumanoid43.joints[99] = HAnimJoint1698;

let HAnimJoint1699 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1699.USE = "hanim_l_midcarpal_2";
HAnimHumanoid43.joints[100] = HAnimJoint1699;

let HAnimJoint1700 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1700.USE = "hanim_l_carpometacarpal_2";
HAnimHumanoid43.joints[101] = HAnimJoint1700;

let HAnimJoint1701 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1701.USE = "hanim_l_metacarpophalangeal_2";
HAnimHumanoid43.joints[102] = HAnimJoint1701;

let HAnimJoint1702 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1702.USE = "hanim_l_carpal_proximal_interphalangeal_2";
HAnimHumanoid43.joints[103] = HAnimJoint1702;

let HAnimJoint1703 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1703.USE = "hanim_l_carpal_distal_interphalangeal_2";
HAnimHumanoid43.joints[104] = HAnimJoint1703;

let HAnimJoint1704 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1704.USE = "hanim_l_midcarpal_3";
HAnimHumanoid43.joints[105] = HAnimJoint1704;

let HAnimJoint1705 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1705.USE = "hanim_l_carpometacarpal_3";
HAnimHumanoid43.joints[106] = HAnimJoint1705;

let HAnimJoint1706 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1706.USE = "hanim_l_metacarpophalangeal_3";
HAnimHumanoid43.joints[107] = HAnimJoint1706;

let HAnimJoint1707 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1707.USE = "hanim_l_carpal_proximal_interphalangeal_3";
HAnimHumanoid43.joints[108] = HAnimJoint1707;

let HAnimJoint1708 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1708.USE = "hanim_l_carpal_distal_interphalangeal_3";
HAnimHumanoid43.joints[109] = HAnimJoint1708;

let HAnimJoint1709 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1709.USE = "hanim_l_midcarpal_4_5";
HAnimHumanoid43.joints[110] = HAnimJoint1709;

let HAnimJoint1710 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1710.USE = "hanim_l_carpometacarpal_4";
HAnimHumanoid43.joints[111] = HAnimJoint1710;

let HAnimJoint1711 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1711.USE = "hanim_l_metacarpophalangeal_4";
HAnimHumanoid43.joints[112] = HAnimJoint1711;

let HAnimJoint1712 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1712.USE = "hanim_l_carpal_proximal_interphalangeal_4";
HAnimHumanoid43.joints[113] = HAnimJoint1712;

let HAnimJoint1713 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1713.USE = "hanim_l_carpal_distal_interphalangeal_4";
HAnimHumanoid43.joints[114] = HAnimJoint1713;

let HAnimJoint1714 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1714.USE = "hanim_l_carpometacarpal_5";
HAnimHumanoid43.joints[115] = HAnimJoint1714;

let HAnimJoint1715 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1715.USE = "hanim_l_metacarpophalangeal_5";
HAnimHumanoid43.joints[116] = HAnimJoint1715;

let HAnimJoint1716 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1716.USE = "hanim_l_carpal_proximal_interphalangeal_5";
HAnimHumanoid43.joints[117] = HAnimJoint1716;

let HAnimJoint1717 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1717.USE = "hanim_l_carpal_distal_interphalangeal_5";
HAnimHumanoid43.joints[118] = HAnimJoint1717;

let HAnimJoint1718 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1718.USE = "hanim_r_sternoclavicular";
HAnimHumanoid43.joints[119] = HAnimJoint1718;

let HAnimJoint1719 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1719.USE = "hanim_r_acromioclavicular";
HAnimHumanoid43.joints[120] = HAnimJoint1719;

let HAnimJoint1720 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1720.USE = "hanim_r_shoulder";
HAnimHumanoid43.joints[121] = HAnimJoint1720;

let HAnimJoint1721 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1721.USE = "hanim_r_elbow";
HAnimHumanoid43.joints[122] = HAnimJoint1721;

let HAnimJoint1722 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1722.USE = "hanim_r_radiocarpal";
HAnimHumanoid43.joints[123] = HAnimJoint1722;

let HAnimJoint1723 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1723.USE = "hanim_r_midcarpal_1";
HAnimHumanoid43.joints[124] = HAnimJoint1723;

let HAnimJoint1724 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1724.USE = "hanim_r_carpometacarpal_1";
HAnimHumanoid43.joints[125] = HAnimJoint1724;

let HAnimJoint1725 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1725.USE = "hanim_r_metacarpophalangeal_1";
HAnimHumanoid43.joints[126] = HAnimJoint1725;

let HAnimJoint1726 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1726.USE = "hanim_r_carpal_interphalangeal_1";
HAnimHumanoid43.joints[127] = HAnimJoint1726;

let HAnimJoint1727 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1727.USE = "hanim_r_midcarpal_2";
HAnimHumanoid43.joints[128] = HAnimJoint1727;

let HAnimJoint1728 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1728.USE = "hanim_r_carpometacarpal_2";
HAnimHumanoid43.joints[129] = HAnimJoint1728;

let HAnimJoint1729 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1729.USE = "hanim_r_metacarpophalangeal_2";
HAnimHumanoid43.joints[130] = HAnimJoint1729;

let HAnimJoint1730 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1730.USE = "hanim_r_carpal_proximal_interphalangeal_2";
HAnimHumanoid43.joints[131] = HAnimJoint1730;

let HAnimJoint1731 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1731.USE = "hanim_r_carpal_distal_interphalangeal_2";
HAnimHumanoid43.joints[132] = HAnimJoint1731;

let HAnimJoint1732 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1732.USE = "hanim_r_midcarpal_3";
HAnimHumanoid43.joints[133] = HAnimJoint1732;

let HAnimJoint1733 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1733.USE = "hanim_r_carpometacarpal_3";
HAnimHumanoid43.joints[134] = HAnimJoint1733;

let HAnimJoint1734 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1734.USE = "hanim_r_metacarpophalangeal_3";
HAnimHumanoid43.joints[135] = HAnimJoint1734;

let HAnimJoint1735 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1735.USE = "hanim_r_carpal_proximal_interphalangeal_3";
HAnimHumanoid43.joints[136] = HAnimJoint1735;

let HAnimJoint1736 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1736.USE = "hanim_r_carpal_distal_interphalangeal_3";
HAnimHumanoid43.joints[137] = HAnimJoint1736;

let HAnimJoint1737 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1737.USE = "hanim_r_midcarpal_4_5";
HAnimHumanoid43.joints[138] = HAnimJoint1737;

let HAnimJoint1738 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1738.USE = "hanim_r_carpometacarpal_4";
HAnimHumanoid43.joints[139] = HAnimJoint1738;

let HAnimJoint1739 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1739.USE = "hanim_r_metacarpophalangeal_4";
HAnimHumanoid43.joints[140] = HAnimJoint1739;

let HAnimJoint1740 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1740.USE = "hanim_r_carpal_proximal_interphalangeal_4";
HAnimHumanoid43.joints[141] = HAnimJoint1740;

let HAnimJoint1741 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1741.USE = "hanim_r_carpal_distal_interphalangeal_4";
HAnimHumanoid43.joints[142] = HAnimJoint1741;

let HAnimJoint1742 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1742.USE = "hanim_r_carpometacarpal_5";
HAnimHumanoid43.joints[143] = HAnimJoint1742;

let HAnimJoint1743 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1743.USE = "hanim_r_metacarpophalangeal_5";
HAnimHumanoid43.joints[144] = HAnimJoint1743;

let HAnimJoint1744 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1744.USE = "hanim_r_carpal_proximal_interphalangeal_5";
HAnimHumanoid43.joints[145] = HAnimJoint1744;

let HAnimJoint1745 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1745.USE = "hanim_r_carpal_distal_interphalangeal_5";
HAnimHumanoid43.joints[146] = HAnimJoint1745;

let HAnimSegment1746 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1746.USE = "hanim_sacrum";
HAnimHumanoid43.segments[147] = HAnimSegment1746;

let HAnimSegment1747 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1747.USE = "hanim_pelvis";
HAnimHumanoid43.segments[148] = HAnimSegment1747;

let HAnimSegment1748 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1748.USE = "hanim_l_thigh";
HAnimHumanoid43.segments[149] = HAnimSegment1748;

let HAnimSegment1749 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1749.USE = "hanim_l_calf";
HAnimHumanoid43.segments[150] = HAnimSegment1749;

let HAnimSegment1750 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1750.USE = "hanim_l_talus";
HAnimHumanoid43.segments[151] = HAnimSegment1750;

let HAnimSegment1751 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1751.USE = "hanim_l_navicular";
HAnimHumanoid43.segments[152] = HAnimSegment1751;

let HAnimSegment1752 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1752.USE = "hanim_l_cuneiform_1";
HAnimHumanoid43.segments[153] = HAnimSegment1752;

let HAnimSegment1753 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1753.USE = "hanim_l_metatarsal_1";
HAnimHumanoid43.segments[154] = HAnimSegment1753;

let HAnimSegment1754 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1754.USE = "hanim_l_tarsal_proximal_phalanx_1";
HAnimHumanoid43.segments[155] = HAnimSegment1754;

let HAnimSegment1755 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1755.USE = "hanim_l_cuneiform_2";
HAnimHumanoid43.segments[156] = HAnimSegment1755;

let HAnimSegment1756 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1756.USE = "hanim_l_metatarsal_2";
HAnimHumanoid43.segments[157] = HAnimSegment1756;

let HAnimSegment1757 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1757.USE = "hanim_l_tarsal_proximal_phalanx_2";
HAnimHumanoid43.segments[158] = HAnimSegment1757;

let HAnimSegment1758 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1758.USE = "hanim_l_tarsal_middle_phalanx_2";
HAnimHumanoid43.segments[159] = HAnimSegment1758;

let HAnimSegment1759 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1759.USE = "hanim_l_cuneiform_3";
HAnimHumanoid43.segments[160] = HAnimSegment1759;

let HAnimSegment1760 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1760.USE = "hanim_l_metatarsal_3";
HAnimHumanoid43.segments[161] = HAnimSegment1760;

let HAnimSegment1761 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1761.USE = "hanim_l_tarsal_proximal_phalanx_3";
HAnimHumanoid43.segments[162] = HAnimSegment1761;

let HAnimSegment1762 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1762.USE = "hanim_l_tarsal_middle_phalanx_3";
HAnimHumanoid43.segments[163] = HAnimSegment1762;

let HAnimSegment1763 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1763.USE = "hanim_l_calcaneus";
HAnimHumanoid43.segments[164] = HAnimSegment1763;

let HAnimSegment1764 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1764.USE = "hanim_l_cuboid";
HAnimHumanoid43.segments[165] = HAnimSegment1764;

let HAnimSegment1765 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1765.USE = "hanim_l_metatarsal_4";
HAnimHumanoid43.segments[166] = HAnimSegment1765;

let HAnimSegment1766 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1766.USE = "hanim_l_tarsal_proximal_phalanx_4";
HAnimHumanoid43.segments[167] = HAnimSegment1766;

let HAnimSegment1767 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1767.USE = "hanim_l_tarsal_middle_phalanx_4";
HAnimHumanoid43.segments[168] = HAnimSegment1767;

let HAnimSegment1768 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1768.USE = "hanim_l_metatarsal_5";
HAnimHumanoid43.segments[169] = HAnimSegment1768;

let HAnimSegment1769 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1769.USE = "hanim_l_tarsal_proximal_phalanx_5";
HAnimHumanoid43.segments[170] = HAnimSegment1769;

let HAnimSegment1770 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1770.USE = "hanim_l_tarsal_middle_phalanx_5";
HAnimHumanoid43.segments[171] = HAnimSegment1770;

let HAnimSegment1771 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1771.USE = "hanim_r_thigh";
HAnimHumanoid43.segments[172] = HAnimSegment1771;

let HAnimSegment1772 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1772.USE = "hanim_r_calf";
HAnimHumanoid43.segments[173] = HAnimSegment1772;

let HAnimSegment1773 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1773.USE = "hanim_r_talus";
HAnimHumanoid43.segments[174] = HAnimSegment1773;

let HAnimSegment1774 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1774.USE = "hanim_r_navicular";
HAnimHumanoid43.segments[175] = HAnimSegment1774;

let HAnimSegment1775 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1775.USE = "hanim_r_cuneiform_1";
HAnimHumanoid43.segments[176] = HAnimSegment1775;

let HAnimSegment1776 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1776.USE = "hanim_r_metatarsal_1";
HAnimHumanoid43.segments[177] = HAnimSegment1776;

let HAnimSegment1777 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1777.USE = "hanim_r_tarsal_proximal_phalanx_1";
HAnimHumanoid43.segments[178] = HAnimSegment1777;

let HAnimSegment1778 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1778.USE = "hanim_r_cuneiform_2";
HAnimHumanoid43.segments[179] = HAnimSegment1778;

let HAnimSegment1779 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1779.USE = "hanim_r_metatarsal_2";
HAnimHumanoid43.segments[180] = HAnimSegment1779;

let HAnimSegment1780 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1780.USE = "hanim_r_tarsal_proximal_phalanx_2";
HAnimHumanoid43.segments[181] = HAnimSegment1780;

let HAnimSegment1781 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1781.USE = "hanim_r_tarsal_middle_phalanx_2";
HAnimHumanoid43.segments[182] = HAnimSegment1781;

let HAnimSegment1782 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1782.USE = "hanim_r_cuneiform_3";
HAnimHumanoid43.segments[183] = HAnimSegment1782;

let HAnimSegment1783 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1783.USE = "hanim_r_metatarsal_3";
HAnimHumanoid43.segments[184] = HAnimSegment1783;

let HAnimSegment1784 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1784.USE = "hanim_r_tarsal_proximal_phalanx_3";
HAnimHumanoid43.segments[185] = HAnimSegment1784;

let HAnimSegment1785 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1785.USE = "hanim_r_tarsal_middle_phalanx_3";
HAnimHumanoid43.segments[186] = HAnimSegment1785;

let HAnimSegment1786 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1786.USE = "hanim_r_calcaneus";
HAnimHumanoid43.segments[187] = HAnimSegment1786;

let HAnimSegment1787 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1787.USE = "hanim_r_cuboid";
HAnimHumanoid43.segments[188] = HAnimSegment1787;

let HAnimSegment1788 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1788.USE = "hanim_r_metatarsal_4";
HAnimHumanoid43.segments[189] = HAnimSegment1788;

let HAnimSegment1789 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1789.USE = "hanim_r_tarsal_proximal_phalanx_4";
HAnimHumanoid43.segments[190] = HAnimSegment1789;

let HAnimSegment1790 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1790.USE = "hanim_r_tarsal_middle_phalanx_4";
HAnimHumanoid43.segments[191] = HAnimSegment1790;

let HAnimSegment1791 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1791.USE = "hanim_r_metatarsal_5";
HAnimHumanoid43.segments[192] = HAnimSegment1791;

let HAnimSegment1792 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1792.USE = "hanim_r_tarsal_proximal_phalanx_5";
HAnimHumanoid43.segments[193] = HAnimSegment1792;

let HAnimSegment1793 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1793.USE = "hanim_r_tarsal_middle_phalanx_5";
HAnimHumanoid43.segments[194] = HAnimSegment1793;

let HAnimSegment1794 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1794.USE = "hanim_l5";
HAnimHumanoid43.segments[195] = HAnimSegment1794;

let HAnimSegment1795 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1795.USE = "hanim_l4";
HAnimHumanoid43.segments[196] = HAnimSegment1795;

let HAnimSegment1796 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1796.USE = "hanim_l3";
HAnimHumanoid43.segments[197] = HAnimSegment1796;

let HAnimSegment1797 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1797.USE = "hanim_l2";
HAnimHumanoid43.segments[198] = HAnimSegment1797;

let HAnimSegment1798 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1798.USE = "hanim_l1";
HAnimHumanoid43.segments[199] = HAnimSegment1798;

let HAnimSegment1799 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1799.USE = "hanim_t12";
HAnimHumanoid43.segments[200] = HAnimSegment1799;

let HAnimSegment1800 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1800.USE = "hanim_t11";
HAnimHumanoid43.segments[201] = HAnimSegment1800;

let HAnimSegment1801 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1801.USE = "hanim_t10";
HAnimHumanoid43.segments[202] = HAnimSegment1801;

let HAnimSegment1802 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1802.USE = "hanim_t9";
HAnimHumanoid43.segments[203] = HAnimSegment1802;

let HAnimSegment1803 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1803.USE = "hanim_t8";
HAnimHumanoid43.segments[204] = HAnimSegment1803;

let HAnimSegment1804 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1804.USE = "hanim_t7";
HAnimHumanoid43.segments[205] = HAnimSegment1804;

let HAnimSegment1805 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1805.USE = "hanim_t6";
HAnimHumanoid43.segments[206] = HAnimSegment1805;

let HAnimSegment1806 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1806.USE = "hanim_t5";
HAnimHumanoid43.segments[207] = HAnimSegment1806;

let HAnimSegment1807 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1807.USE = "hanim_t4";
HAnimHumanoid43.segments[208] = HAnimSegment1807;

let HAnimSegment1808 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1808.USE = "hanim_t3";
HAnimHumanoid43.segments[209] = HAnimSegment1808;

let HAnimSegment1809 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1809.USE = "hanim_t2";
HAnimHumanoid43.segments[210] = HAnimSegment1809;

let HAnimSegment1810 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1810.USE = "hanim_t1";
HAnimHumanoid43.segments[211] = HAnimSegment1810;

let HAnimSegment1811 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1811.USE = "hanim_c7";
HAnimHumanoid43.segments[212] = HAnimSegment1811;

let HAnimSegment1812 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1812.USE = "hanim_c6";
HAnimHumanoid43.segments[213] = HAnimSegment1812;

let HAnimSegment1813 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1813.USE = "hanim_c5";
HAnimHumanoid43.segments[214] = HAnimSegment1813;

let HAnimSegment1814 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1814.USE = "hanim_c4";
HAnimHumanoid43.segments[215] = HAnimSegment1814;

let HAnimSegment1815 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1815.USE = "hanim_c3";
HAnimHumanoid43.segments[216] = HAnimSegment1815;

let HAnimSegment1816 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1816.USE = "hanim_c2";
HAnimHumanoid43.segments[217] = HAnimSegment1816;

let HAnimSegment1817 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1817.USE = "hanim_c1";
HAnimHumanoid43.segments[218] = HAnimSegment1817;

let HAnimSegment1818 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1818.USE = "hanim_skull";
HAnimHumanoid43.segments[219] = HAnimSegment1818;

let HAnimSegment1819 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1819.USE = "hanim_l_clavicle";
HAnimHumanoid43.segments[220] = HAnimSegment1819;

let HAnimSegment1820 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1820.USE = "hanim_l_scapula";
HAnimHumanoid43.segments[221] = HAnimSegment1820;

let HAnimSegment1821 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1821.USE = "hanim_l_upperarm";
HAnimHumanoid43.segments[222] = HAnimSegment1821;

let HAnimSegment1822 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1822.USE = "hanim_l_forearm";
HAnimHumanoid43.segments[223] = HAnimSegment1822;

let HAnimSegment1823 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1823.USE = "hanim_l_carpal";
HAnimHumanoid43.segments[224] = HAnimSegment1823;

let HAnimSegment1824 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1824.USE = "hanim_l_trapezium";
HAnimHumanoid43.segments[225] = HAnimSegment1824;

let HAnimSegment1825 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1825.USE = "hanim_l_metacarpal_1";
HAnimHumanoid43.segments[226] = HAnimSegment1825;

let HAnimSegment1826 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1826.USE = "hanim_l_carpal_proximal_phalanx_1";
HAnimHumanoid43.segments[227] = HAnimSegment1826;

let HAnimSegment1827 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1827.USE = "hanim_l_trapezoid";
HAnimHumanoid43.segments[228] = HAnimSegment1827;

let HAnimSegment1828 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1828.USE = "hanim_l_metacarpal_2";
HAnimHumanoid43.segments[229] = HAnimSegment1828;

let HAnimSegment1829 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1829.USE = "hanim_l_carpal_proximal_phalanx_2";
HAnimHumanoid43.segments[230] = HAnimSegment1829;

let HAnimSegment1830 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1830.USE = "hanim_l_carpal_middle_phalanx_2";
HAnimHumanoid43.segments[231] = HAnimSegment1830;

let HAnimSegment1831 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1831.USE = "hanim_l_capitate";
HAnimHumanoid43.segments[232] = HAnimSegment1831;

let HAnimSegment1832 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1832.USE = "hanim_l_metacarpal_3";
HAnimHumanoid43.segments[233] = HAnimSegment1832;

let HAnimSegment1833 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1833.USE = "hanim_l_carpal_proximal_phalanx_3";
HAnimHumanoid43.segments[234] = HAnimSegment1833;

let HAnimSegment1834 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1834.USE = "hanim_l_carpal_middle_phalanx_3";
HAnimHumanoid43.segments[235] = HAnimSegment1834;

let HAnimSegment1835 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1835.USE = "hanim_l_hamate";
HAnimHumanoid43.segments[236] = HAnimSegment1835;

let HAnimSegment1836 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1836.USE = "hanim_l_metacarpal_4";
HAnimHumanoid43.segments[237] = HAnimSegment1836;

let HAnimSegment1837 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1837.USE = "hanim_l_carpal_proximal_phalanx_4";
HAnimHumanoid43.segments[238] = HAnimSegment1837;

let HAnimSegment1838 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1838.USE = "hanim_l_carpal_middle_phalanx_4";
HAnimHumanoid43.segments[239] = HAnimSegment1838;

let HAnimSegment1839 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1839.USE = "hanim_l_metacarpal_5";
HAnimHumanoid43.segments[240] = HAnimSegment1839;

let HAnimSegment1840 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1840.USE = "hanim_l_carpal_proximal_phalanx_5";
HAnimHumanoid43.segments[241] = HAnimSegment1840;

let HAnimSegment1841 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1841.USE = "hanim_l_carpal_middle_phalanx_5";
HAnimHumanoid43.segments[242] = HAnimSegment1841;

let HAnimSegment1842 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1842.USE = "hanim_r_clavicle";
HAnimHumanoid43.segments[243] = HAnimSegment1842;

let HAnimSegment1843 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1843.USE = "hanim_r_scapula";
HAnimHumanoid43.segments[244] = HAnimSegment1843;

let HAnimSegment1844 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1844.USE = "hanim_r_upperarm";
HAnimHumanoid43.segments[245] = HAnimSegment1844;

let HAnimSegment1845 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1845.USE = "hanim_r_forearm";
HAnimHumanoid43.segments[246] = HAnimSegment1845;

let HAnimSegment1846 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1846.USE = "hanim_r_carpal";
HAnimHumanoid43.segments[247] = HAnimSegment1846;

let HAnimSegment1847 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1847.USE = "hanim_r_trapezium";
HAnimHumanoid43.segments[248] = HAnimSegment1847;

let HAnimSegment1848 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1848.USE = "hanim_r_metacarpal_1";
HAnimHumanoid43.segments[249] = HAnimSegment1848;

let HAnimSegment1849 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1849.USE = "hanim_r_carpal_proximal_phalanx_1";
HAnimHumanoid43.segments[250] = HAnimSegment1849;

let HAnimSegment1850 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1850.USE = "hanim_r_trapezoid";
HAnimHumanoid43.segments[251] = HAnimSegment1850;

let HAnimSegment1851 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1851.USE = "hanim_r_metacarpal_2";
HAnimHumanoid43.segments[252] = HAnimSegment1851;

let HAnimSegment1852 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1852.USE = "hanim_r_carpal_proximal_phalanx_2";
HAnimHumanoid43.segments[253] = HAnimSegment1852;

let HAnimSegment1853 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1853.USE = "hanim_r_carpal_middle_phalanx_2";
HAnimHumanoid43.segments[254] = HAnimSegment1853;

let HAnimSegment1854 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1854.USE = "hanim_r_capitate";
HAnimHumanoid43.segments[255] = HAnimSegment1854;

let HAnimSegment1855 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1855.USE = "hanim_r_metacarpal_3";
HAnimHumanoid43.segments[256] = HAnimSegment1855;

let HAnimSegment1856 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1856.USE = "hanim_r_carpal_proximal_phalanx_3";
HAnimHumanoid43.segments[257] = HAnimSegment1856;

let HAnimSegment1857 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1857.USE = "hanim_r_carpal_middle_phalanx_3";
HAnimHumanoid43.segments[258] = HAnimSegment1857;

let HAnimSegment1858 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1858.USE = "hanim_r_hamate";
HAnimHumanoid43.segments[259] = HAnimSegment1858;

let HAnimSegment1859 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1859.USE = "hanim_r_metacarpal_4";
HAnimHumanoid43.segments[260] = HAnimSegment1859;

let HAnimSegment1860 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1860.USE = "hanim_r_carpal_proximal_phalanx_4";
HAnimHumanoid43.segments[261] = HAnimSegment1860;

let HAnimSegment1861 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1861.USE = "hanim_r_carpal_middle_phalanx_4";
HAnimHumanoid43.segments[262] = HAnimSegment1861;

let HAnimSegment1862 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1862.USE = "hanim_r_metacarpal_5";
HAnimHumanoid43.segments[263] = HAnimSegment1862;

let HAnimSegment1863 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1863.USE = "hanim_r_carpal_proximal_phalanx_5";
HAnimHumanoid43.segments[264] = HAnimSegment1863;

let HAnimSegment1864 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1864.USE = "hanim_r_carpal_middle_phalanx_5";
HAnimHumanoid43.segments[265] = HAnimSegment1864;

let HAnimSite1865 = browser.currentScene.createNode("HAnimSite");
HAnimSite1865.USE = "hanim_buttocks_standing_wall_contact_point_pt";
HAnimHumanoid43.viewpoints[266] = HAnimSite1865;

let HAnimSite1866 = browser.currentScene.createNode("HAnimSite");
HAnimSite1866.USE = "hanim_crotch_pt";
HAnimHumanoid43.viewpoints[267] = HAnimSite1866;

let HAnimSite1867 = browser.currentScene.createNode("HAnimSite");
HAnimSite1867.USE = "hanim_l_asis_pt";
HAnimHumanoid43.viewpoints[268] = HAnimSite1867;

let HAnimSite1868 = browser.currentScene.createNode("HAnimSite");
HAnimSite1868.USE = "hanim_l_iliocristale_pt";
HAnimHumanoid43.viewpoints[269] = HAnimSite1868;

let HAnimSite1869 = browser.currentScene.createNode("HAnimSite");
HAnimSite1869.USE = "hanim_l_psis_pt";
HAnimHumanoid43.viewpoints[270] = HAnimSite1869;

let HAnimSite1870 = browser.currentScene.createNode("HAnimSite");
HAnimSite1870.USE = "hanim_l_trochanterion_pt";
HAnimHumanoid43.viewpoints[271] = HAnimSite1870;

let HAnimSite1871 = browser.currentScene.createNode("HAnimSite");
HAnimSite1871.USE = "hanim_r_asis_pt";
HAnimHumanoid43.viewpoints[272] = HAnimSite1871;

let HAnimSite1872 = browser.currentScene.createNode("HAnimSite");
HAnimSite1872.USE = "hanim_r_iliocristale_pt";
HAnimHumanoid43.viewpoints[273] = HAnimSite1872;

let HAnimSite1873 = browser.currentScene.createNode("HAnimSite");
HAnimSite1873.USE = "hanim_r_psis_pt";
HAnimHumanoid43.viewpoints[274] = HAnimSite1873;

let HAnimSite1874 = browser.currentScene.createNode("HAnimSite");
HAnimSite1874.USE = "hanim_r_trochanterion_pt";
HAnimHumanoid43.viewpoints[275] = HAnimSite1874;

let HAnimSite1875 = browser.currentScene.createNode("HAnimSite");
HAnimSite1875.USE = "hanim_navel_pt";
HAnimHumanoid43.viewpoints[276] = HAnimSite1875;

let HAnimSite1876 = browser.currentScene.createNode("HAnimSite");
HAnimSite1876.USE = "hanim_waist_preferred_anterior_pt";
HAnimHumanoid43.viewpoints[277] = HAnimSite1876;

let HAnimSite1877 = browser.currentScene.createNode("HAnimSite");
HAnimSite1877.USE = "hanim_waist_preferred_posterior_pt";
HAnimHumanoid43.viewpoints[278] = HAnimSite1877;

let HAnimSite1878 = browser.currentScene.createNode("HAnimSite");
HAnimSite1878.USE = "hanim_l_femoral_lateral_epicondyles_pt";
HAnimHumanoid43.viewpoints[279] = HAnimSite1878;

let HAnimSite1879 = browser.currentScene.createNode("HAnimSite");
HAnimSite1879.USE = "hanim_l_femoral_medial_epicondyles_pt";
HAnimHumanoid43.viewpoints[280] = HAnimSite1879;

let HAnimSite1880 = browser.currentScene.createNode("HAnimSite");
HAnimSite1880.USE = "hanim_l_knee_crease_pt";
HAnimHumanoid43.viewpoints[281] = HAnimSite1880;

let HAnimSite1881 = browser.currentScene.createNode("HAnimSite");
HAnimSite1881.USE = "hanim_l_suprapatella_pt";
HAnimHumanoid43.viewpoints[282] = HAnimSite1881;

let HAnimSite1882 = browser.currentScene.createNode("HAnimSite");
HAnimSite1882.USE = "hanim_r_femoral_lateral_epicondyles_pt";
HAnimHumanoid43.viewpoints[283] = HAnimSite1882;

let HAnimSite1883 = browser.currentScene.createNode("HAnimSite");
HAnimSite1883.USE = "hanim_r_femoral_medial_epicondyles_pt";
HAnimHumanoid43.viewpoints[284] = HAnimSite1883;

let HAnimSite1884 = browser.currentScene.createNode("HAnimSite");
HAnimSite1884.USE = "hanim_r_knee_crease_pt";
HAnimHumanoid43.viewpoints[285] = HAnimSite1884;

let HAnimSite1885 = browser.currentScene.createNode("HAnimSite");
HAnimSite1885.USE = "hanim_r_suprapatella_pt";
HAnimHumanoid43.viewpoints[286] = HAnimSite1885;

let HAnimSite1886 = browser.currentScene.createNode("HAnimSite");
HAnimSite1886.USE = "hanim_l_lateral_malleolus_pt";
HAnimHumanoid43.viewpoints[287] = HAnimSite1886;

let HAnimSite1887 = browser.currentScene.createNode("HAnimSite");
HAnimSite1887.USE = "hanim_l_medial_malleolus_pt";
HAnimHumanoid43.viewpoints[288] = HAnimSite1887;

let HAnimSite1888 = browser.currentScene.createNode("HAnimSite");
HAnimSite1888.USE = "hanim_l_tibiale_pt";
HAnimHumanoid43.viewpoints[289] = HAnimSite1888;

let HAnimSite1889 = browser.currentScene.createNode("HAnimSite");
HAnimSite1889.USE = "hanim_l_calcaneus_posterior_pt";
HAnimHumanoid43.viewpoints[290] = HAnimSite1889;

let HAnimSite1890 = browser.currentScene.createNode("HAnimSite");
HAnimSite1890.USE = "hanim_l_sphyrion_pt";
HAnimHumanoid43.viewpoints[291] = HAnimSite1890;

let HAnimSite1891 = browser.currentScene.createNode("HAnimSite");
HAnimSite1891.USE = "hanim_l_metatarsal_phalanx_1_pt";
HAnimHumanoid43.viewpoints[292] = HAnimSite1891;

let HAnimSite1892 = browser.currentScene.createNode("HAnimSite");
HAnimSite1892.USE = "hanim_l_tarsal_distal_phalanx_1_tip";
HAnimHumanoid43.viewpoints[293] = HAnimSite1892;

let HAnimSite1893 = browser.currentScene.createNode("HAnimSite");
HAnimSite1893.USE = "hanim_l_tarsal_distal_phalanx_2_tip";
HAnimHumanoid43.viewpoints[294] = HAnimSite1893;

let HAnimSite1894 = browser.currentScene.createNode("HAnimSite");
HAnimSite1894.USE = "hanim_l_tarsal_distal_phalanx_3_tip";
HAnimHumanoid43.viewpoints[295] = HAnimSite1894;

let HAnimSite1895 = browser.currentScene.createNode("HAnimSite");
HAnimSite1895.USE = "hanim_l_tarsal_distal_phalanx_4_tip";
HAnimHumanoid43.viewpoints[296] = HAnimSite1895;

let HAnimSite1896 = browser.currentScene.createNode("HAnimSite");
HAnimSite1896.USE = "hanim_l_metatarsal_phalanx_5_pt";
HAnimHumanoid43.viewpoints[297] = HAnimSite1896;

let HAnimSite1897 = browser.currentScene.createNode("HAnimSite");
HAnimSite1897.USE = "hanim_l_tarsal_distal_phalanx_5_tip";
HAnimHumanoid43.viewpoints[298] = HAnimSite1897;

let HAnimSite1898 = browser.currentScene.createNode("HAnimSite");
HAnimSite1898.USE = "hanim_r_lateral_malleolus_pt";
HAnimHumanoid43.viewpoints[299] = HAnimSite1898;

let HAnimSite1899 = browser.currentScene.createNode("HAnimSite");
HAnimSite1899.USE = "hanim_r_medial_malleolus_pt";
HAnimHumanoid43.viewpoints[300] = HAnimSite1899;

let HAnimSite1900 = browser.currentScene.createNode("HAnimSite");
HAnimSite1900.USE = "hanim_r_tibiale_pt";
HAnimHumanoid43.viewpoints[301] = HAnimSite1900;

let HAnimSite1901 = browser.currentScene.createNode("HAnimSite");
HAnimSite1901.USE = "hanim_r_calcaneus_posterior_pt";
HAnimHumanoid43.viewpoints[302] = HAnimSite1901;

let HAnimSite1902 = browser.currentScene.createNode("HAnimSite");
HAnimSite1902.USE = "hanim_r_sphyrion_pt";
HAnimHumanoid43.viewpoints[303] = HAnimSite1902;

let HAnimSite1903 = browser.currentScene.createNode("HAnimSite");
HAnimSite1903.USE = "hanim_r_metatarsal_phalanx_1_pt";
HAnimHumanoid43.viewpoints[304] = HAnimSite1903;

let HAnimSite1904 = browser.currentScene.createNode("HAnimSite");
HAnimSite1904.USE = "hanim_r_tarsal_distal_phalanx_1_tip";
HAnimHumanoid43.viewpoints[305] = HAnimSite1904;

let HAnimSite1905 = browser.currentScene.createNode("HAnimSite");
HAnimSite1905.USE = "hanim_r_tarsal_distal_phalanx_2_tip";
HAnimHumanoid43.viewpoints[306] = HAnimSite1905;

let HAnimSite1906 = browser.currentScene.createNode("HAnimSite");
HAnimSite1906.USE = "hanim_r_tarsal_distal_phalanx_3_tip";
HAnimHumanoid43.viewpoints[307] = HAnimSite1906;

let HAnimSite1907 = browser.currentScene.createNode("HAnimSite");
HAnimSite1907.USE = "hanim_r_tarsal_distal_phalanx_4_tip";
HAnimHumanoid43.viewpoints[308] = HAnimSite1907;

let HAnimSite1908 = browser.currentScene.createNode("HAnimSite");
HAnimSite1908.USE = "hanim_r_metatarsal_phalanx_5_pt";
HAnimHumanoid43.viewpoints[309] = HAnimSite1908;

let HAnimSite1909 = browser.currentScene.createNode("HAnimSite");
HAnimSite1909.USE = "hanim_r_tarsal_distal_phalanx_5_tip";
HAnimHumanoid43.viewpoints[310] = HAnimSite1909;

let HAnimSite1910 = browser.currentScene.createNode("HAnimSite");
HAnimSite1910.USE = "hanim_l_rib10_pt";
HAnimHumanoid43.viewpoints[311] = HAnimSite1910;

let HAnimSite1911 = browser.currentScene.createNode("HAnimSite");
HAnimSite1911.USE = "hanim_r_rib10_pt";
HAnimHumanoid43.viewpoints[312] = HAnimSite1911;

let HAnimSite1912 = browser.currentScene.createNode("HAnimSite");
HAnimSite1912.USE = "hanim_spine_2_middle_back_pt";
HAnimHumanoid43.viewpoints[313] = HAnimSite1912;

let HAnimSite1913 = browser.currentScene.createNode("HAnimSite");
HAnimSite1913.USE = "hanim_substernale_pt";
HAnimHumanoid43.viewpoints[314] = HAnimSite1913;

let HAnimSite1914 = browser.currentScene.createNode("HAnimSite");
HAnimSite1914.USE = "hanim_l_thelion_pt";
HAnimHumanoid43.viewpoints[315] = HAnimSite1914;

let HAnimSite1915 = browser.currentScene.createNode("HAnimSite");
HAnimSite1915.USE = "hanim_r_thelion_pt";
HAnimHumanoid43.viewpoints[316] = HAnimSite1915;

let HAnimSite1916 = browser.currentScene.createNode("HAnimSite");
HAnimSite1916.USE = "hanim_l_chest_midsagittal_plane_pt";
HAnimHumanoid43.viewpoints[317] = HAnimSite1916;

let HAnimSite1917 = browser.currentScene.createNode("HAnimSite");
HAnimSite1917.USE = "hanim_mesosternale_pt";
HAnimHumanoid43.viewpoints[318] = HAnimSite1917;

let HAnimSite1918 = browser.currentScene.createNode("HAnimSite");
HAnimSite1918.USE = "hanim_r_chest_midsagittal_plane_pt";
HAnimHumanoid43.viewpoints[319] = HAnimSite1918;

let HAnimSite1919 = browser.currentScene.createNode("HAnimSite");
HAnimSite1919.USE = "hanim_rear_center_midsagittal_plane_pt";
HAnimHumanoid43.viewpoints[320] = HAnimSite1919;

let HAnimSite1920 = browser.currentScene.createNode("HAnimSite");
HAnimSite1920.USE = "hanim_spine_1_middle_back_pt";
HAnimHumanoid43.viewpoints[321] = HAnimSite1920;

let HAnimSite1921 = browser.currentScene.createNode("HAnimSite");
HAnimSite1921.USE = "hanim_cervicale_pt";
HAnimHumanoid43.viewpoints[322] = HAnimSite1921;

let HAnimSite1922 = browser.currentScene.createNode("HAnimSite");
HAnimSite1922.USE = "hanim_suprasternale_pt";
HAnimHumanoid43.viewpoints[323] = HAnimSite1922;

let HAnimSite1923 = browser.currentScene.createNode("HAnimSite");
HAnimSite1923.USE = "hanim_l_neck_base_pt";
HAnimHumanoid43.viewpoints[324] = HAnimSite1923;

let HAnimSite1924 = browser.currentScene.createNode("HAnimSite");
HAnimSite1924.USE = "hanim_r_neck_base_pt";
HAnimHumanoid43.viewpoints[325] = HAnimSite1924;

let HAnimSite1925 = browser.currentScene.createNode("HAnimSite");
HAnimSite1925.USE = "hanim_l_acromion_pt";
HAnimHumanoid43.viewpoints[326] = HAnimSite1925;

let HAnimSite1926 = browser.currentScene.createNode("HAnimSite");
HAnimSite1926.USE = "hanim_l_axilla_distal_pt";
HAnimHumanoid43.viewpoints[327] = HAnimSite1926;

let HAnimSite1927 = browser.currentScene.createNode("HAnimSite");
HAnimSite1927.USE = "hanim_l_axilla_posterior_folds_pt";
HAnimHumanoid43.viewpoints[328] = HAnimSite1927;

let HAnimSite1928 = browser.currentScene.createNode("HAnimSite");
HAnimSite1928.USE = "hanim_l_axilla_proximal_pt";
HAnimHumanoid43.viewpoints[329] = HAnimSite1928;

let HAnimSite1929 = browser.currentScene.createNode("HAnimSite");
HAnimSite1929.USE = "hanim_l_clavicale_pt";
HAnimHumanoid43.viewpoints[330] = HAnimSite1929;

let HAnimSite1930 = browser.currentScene.createNode("HAnimSite");
HAnimSite1930.USE = "hanim_r_acromion_pt";
HAnimHumanoid43.viewpoints[331] = HAnimSite1930;

let HAnimSite1931 = browser.currentScene.createNode("HAnimSite");
HAnimSite1931.USE = "hanim_r_axilla_distal_pt";
HAnimHumanoid43.viewpoints[332] = HAnimSite1931;

let HAnimSite1932 = browser.currentScene.createNode("HAnimSite");
HAnimSite1932.USE = "hanim_r_axilla_posterior_folds_pt";
HAnimHumanoid43.viewpoints[333] = HAnimSite1932;

let HAnimSite1933 = browser.currentScene.createNode("HAnimSite");
HAnimSite1933.USE = "hanim_r_axilla_proximal_pt";
HAnimHumanoid43.viewpoints[334] = HAnimSite1933;

let HAnimSite1934 = browser.currentScene.createNode("HAnimSite");
HAnimSite1934.USE = "hanim_r_clavicale_pt";
HAnimHumanoid43.viewpoints[335] = HAnimSite1934;

let HAnimSite1935 = browser.currentScene.createNode("HAnimSite");
HAnimSite1935.USE = "hanim_adams_apple_pt";
HAnimHumanoid43.viewpoints[336] = HAnimSite1935;

let HAnimSite1936 = browser.currentScene.createNode("HAnimSite");
HAnimSite1936.USE = "hanim_glabella_pt";
HAnimHumanoid43.viewpoints[337] = HAnimSite1936;

let HAnimSite1937 = browser.currentScene.createNode("HAnimSite");
HAnimSite1937.USE = "hanim_l_ectocanthus_pt";
HAnimHumanoid43.viewpoints[338] = HAnimSite1937;

let HAnimSite1938 = browser.currentScene.createNode("HAnimSite");
HAnimSite1938.USE = "hanim_l_infraorbitale_pt";
HAnimHumanoid43.viewpoints[339] = HAnimSite1938;

let HAnimSite1939 = browser.currentScene.createNode("HAnimSite");
HAnimSite1939.USE = "hanim_l_tragion_pt";
HAnimHumanoid43.viewpoints[340] = HAnimSite1939;

let HAnimSite1940 = browser.currentScene.createNode("HAnimSite");
HAnimSite1940.USE = "hanim_nuchale_pt";
HAnimHumanoid43.viewpoints[341] = HAnimSite1940;

let HAnimSite1941 = browser.currentScene.createNode("HAnimSite");
HAnimSite1941.USE = "hanim_opisthocranion_pt";
HAnimHumanoid43.viewpoints[342] = HAnimSite1941;

let HAnimSite1942 = browser.currentScene.createNode("HAnimSite");
HAnimSite1942.USE = "hanim_r_ectocanthus_pt";
HAnimHumanoid43.viewpoints[343] = HAnimSite1942;

let HAnimSite1943 = browser.currentScene.createNode("HAnimSite");
HAnimSite1943.USE = "hanim_r_infraorbitale_pt";
HAnimHumanoid43.viewpoints[344] = HAnimSite1943;

let HAnimSite1944 = browser.currentScene.createNode("HAnimSite");
HAnimSite1944.USE = "hanim_r_tragion_pt";
HAnimHumanoid43.viewpoints[345] = HAnimSite1944;

let HAnimSite1945 = browser.currentScene.createNode("HAnimSite");
HAnimSite1945.USE = "hanim_sellion_pt";
HAnimHumanoid43.viewpoints[346] = HAnimSite1945;

let HAnimSite1946 = browser.currentScene.createNode("HAnimSite");
HAnimSite1946.USE = "hanim_skull_vertex_pt";
HAnimHumanoid43.viewpoints[347] = HAnimSite1946;

let HAnimSite1947 = browser.currentScene.createNode("HAnimSite");
HAnimSite1947.USE = "hanim_l_gonion_pt";
HAnimHumanoid43.viewpoints[348] = HAnimSite1947;

let HAnimSite1948 = browser.currentScene.createNode("HAnimSite");
HAnimSite1948.USE = "hanim_menton_pt";
HAnimHumanoid43.viewpoints[349] = HAnimSite1948;

let HAnimSite1949 = browser.currentScene.createNode("HAnimSite");
HAnimSite1949.USE = "hanim_r_gonion_pt";
HAnimHumanoid43.viewpoints[350] = HAnimSite1949;

let HAnimSite1950 = browser.currentScene.createNode("HAnimSite");
HAnimSite1950.USE = "hanim_supramenton_pt";
HAnimHumanoid43.viewpoints[351] = HAnimSite1950;

let HAnimSite1951 = browser.currentScene.createNode("HAnimSite");
HAnimSite1951.USE = "hanim_l_bideltoid_pt";
HAnimHumanoid43.viewpoints[352] = HAnimSite1951;

let HAnimSite1952 = browser.currentScene.createNode("HAnimSite");
HAnimSite1952.USE = "hanim_l_humeral_lateral_epicondyles_pt";
HAnimHumanoid43.viewpoints[353] = HAnimSite1952;

let HAnimSite1953 = browser.currentScene.createNode("HAnimSite");
HAnimSite1953.USE = "hanim_l_humeral_medial_epicondyles_pt";
HAnimHumanoid43.viewpoints[354] = HAnimSite1953;

let HAnimSite1954 = browser.currentScene.createNode("HAnimSite");
HAnimSite1954.USE = "hanim_l_olecranon_pt";
HAnimHumanoid43.viewpoints[355] = HAnimSite1954;

let HAnimSite1955 = browser.currentScene.createNode("HAnimSite");
HAnimSite1955.USE = "hanim_l_radial_styloid_pt";
HAnimHumanoid43.viewpoints[356] = HAnimSite1955;

let HAnimSite1956 = browser.currentScene.createNode("HAnimSite");
HAnimSite1956.USE = "hanim_l_radiale_pt";
HAnimHumanoid43.viewpoints[357] = HAnimSite1956;

let HAnimSite1957 = browser.currentScene.createNode("HAnimSite");
HAnimSite1957.USE = "hanim_l_ulnar_styloid_pt";
HAnimHumanoid43.viewpoints[358] = HAnimSite1957;

let HAnimSite1958 = browser.currentScene.createNode("HAnimSite");
HAnimSite1958.USE = "hanim_l_carpal_distal_phalanx_1_tip";
HAnimHumanoid43.viewpoints[359] = HAnimSite1958;

let HAnimSite1959 = browser.currentScene.createNode("HAnimSite");
HAnimSite1959.USE = "hanim_l_metacarpal_phalanx_2_pt";
HAnimHumanoid43.viewpoints[360] = HAnimSite1959;

let HAnimSite1960 = browser.currentScene.createNode("HAnimSite");
HAnimSite1960.USE = "hanim_l_carpal_distal_phalanx_2_tip";
HAnimHumanoid43.viewpoints[361] = HAnimSite1960;

let HAnimSite1961 = browser.currentScene.createNode("HAnimSite");
HAnimSite1961.USE = "hanim_l_dactylion_pt";
HAnimHumanoid43.viewpoints[362] = HAnimSite1961;

let HAnimSite1962 = browser.currentScene.createNode("HAnimSite");
HAnimSite1962.USE = "hanim_l_metacarpal_phalanx_3_pt";
HAnimHumanoid43.viewpoints[363] = HAnimSite1962;

let HAnimSite1963 = browser.currentScene.createNode("HAnimSite");
HAnimSite1963.USE = "hanim_l_carpal_distal_phalanx_3_tip";
HAnimHumanoid43.viewpoints[364] = HAnimSite1963;

let HAnimSite1964 = browser.currentScene.createNode("HAnimSite");
HAnimSite1964.USE = "hanim_l_metacarpal_phalanx_5_pt";
HAnimHumanoid43.viewpoints[365] = HAnimSite1964;

let HAnimSite1965 = browser.currentScene.createNode("HAnimSite");
HAnimSite1965.USE = "hanim_l_carpal_distal_phalanx_4_tip";
HAnimHumanoid43.viewpoints[366] = HAnimSite1965;

let HAnimSite1966 = browser.currentScene.createNode("HAnimSite");
HAnimSite1966.USE = "hanim_l_carpal_distal_phalanx_5_tip";
HAnimHumanoid43.viewpoints[367] = HAnimSite1966;

let HAnimSite1967 = browser.currentScene.createNode("HAnimSite");
HAnimSite1967.USE = "hanim_r_bideltoid_pt";
HAnimHumanoid43.viewpoints[368] = HAnimSite1967;

let HAnimSite1968 = browser.currentScene.createNode("HAnimSite");
HAnimSite1968.USE = "hanim_r_humeral_lateral_epicondyles_pt";
HAnimHumanoid43.viewpoints[369] = HAnimSite1968;

let HAnimSite1969 = browser.currentScene.createNode("HAnimSite");
HAnimSite1969.USE = "hanim_r_humeral_medial_epicondyles_pt";
HAnimHumanoid43.viewpoints[370] = HAnimSite1969;

let HAnimSite1970 = browser.currentScene.createNode("HAnimSite");
HAnimSite1970.USE = "hanim_r_olecranon_pt";
HAnimHumanoid43.viewpoints[371] = HAnimSite1970;

let HAnimSite1971 = browser.currentScene.createNode("HAnimSite");
HAnimSite1971.USE = "hanim_r_radial_styloid_pt";
HAnimHumanoid43.viewpoints[372] = HAnimSite1971;

let HAnimSite1972 = browser.currentScene.createNode("HAnimSite");
HAnimSite1972.USE = "hanim_r_radiale_pt";
HAnimHumanoid43.viewpoints[373] = HAnimSite1972;

let HAnimSite1973 = browser.currentScene.createNode("HAnimSite");
HAnimSite1973.USE = "hanim_r_ulnar_styloid_pt";
HAnimHumanoid43.viewpoints[374] = HAnimSite1973;

let HAnimSite1974 = browser.currentScene.createNode("HAnimSite");
HAnimSite1974.USE = "hanim_r_carpal_distal_phalanx_1_tip";
HAnimHumanoid43.viewpoints[375] = HAnimSite1974;

let HAnimSite1975 = browser.currentScene.createNode("HAnimSite");
HAnimSite1975.USE = "hanim_r_metacarpal_phalanx_2_pt";
HAnimHumanoid43.viewpoints[376] = HAnimSite1975;

let HAnimSite1976 = browser.currentScene.createNode("HAnimSite");
HAnimSite1976.USE = "hanim_r_carpal_distal_phalanx_2_tip";
HAnimHumanoid43.viewpoints[377] = HAnimSite1976;

let HAnimSite1977 = browser.currentScene.createNode("HAnimSite");
HAnimSite1977.USE = "hanim_r_dactylion_pt";
HAnimHumanoid43.viewpoints[378] = HAnimSite1977;

let HAnimSite1978 = browser.currentScene.createNode("HAnimSite");
HAnimSite1978.USE = "hanim_r_metacarpal_phalanx_3_pt";
HAnimHumanoid43.viewpoints[379] = HAnimSite1978;

let HAnimSite1979 = browser.currentScene.createNode("HAnimSite");
HAnimSite1979.USE = "hanim_r_carpal_distal_phalanx_3_tip";
HAnimHumanoid43.viewpoints[380] = HAnimSite1979;

let HAnimSite1980 = browser.currentScene.createNode("HAnimSite");
HAnimSite1980.USE = "hanim_r_metacarpal_phalanx_5_pt";
HAnimHumanoid43.viewpoints[381] = HAnimSite1980;

let HAnimSite1981 = browser.currentScene.createNode("HAnimSite");
HAnimSite1981.USE = "hanim_r_carpal_distal_phalanx_4_tip";
HAnimHumanoid43.viewpoints[382] = HAnimSite1981;

let HAnimSite1982 = browser.currentScene.createNode("HAnimSite");
HAnimSite1982.USE = "hanim_r_carpal_distal_phalanx_5_tip";
HAnimHumanoid43.viewpoints[383] = HAnimSite1982;

browser.currentScene.children[4] = HAnimHumanoid43;

