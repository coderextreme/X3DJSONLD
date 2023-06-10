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
//<Transform translation='0 2 0' scale='1 1 1'> <Shape DEF='HAnimRootShape'> <Sphere radius='0.02' /> <Appearance> <Material DEF='HAnimRootMaterial' diffuseColor='0.8 0 0' transparency='0.3'/> </Appearance> </Shape> </Transform>
let Transform19 = browser.currentScene.createNode("Transform");
Transform19.translation = new SFVec3f(new float[0,2.1,0]);
let Shape20 = browser.currentScene.createNode("Shape");
Shape20.DEF = "HAnimJointShape";
let Sphere21 = browser.currentScene.createNode("Sphere");
Sphere21.radius = 0.02;
Shape20.geometry = Sphere21;

let Appearance22 = browser.currentScene.createNode("Appearance");
let Material23 = browser.currentScene.createNode("Material");
Material23.DEF = "HAnimJointMaterial";
Material23.diffuseColor = new SFColor(new float[0,0,0.8]);
Material23.transparency = 0.3;
Appearance22.material = Material23;

Shape20.appearance = Appearance22;

Transform19.children = new MFNode();

Transform19.children[0] = Shape20;

Transform18.children = new MFNode();

Transform18.children[0] = Transform19;

let Transform24 = browser.currentScene.createNode("Transform");
Transform24.translation = new SFVec3f(new float[0,2.05,0]);
let Shape25 = browser.currentScene.createNode("Shape");
Shape25.DEF = "HAnimSegmentLine";
let LineSet26 = browser.currentScene.createNode("LineSet");
LineSet26.vertexCount = new MFInt32(new int[2]);
let ColorRGBA27 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA27.DEF = "HAnimSegmentLineColorRGBA";
ColorRGBA27.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1]);
LineSet26.color = ColorRGBA27;

let Coordinate28 = browser.currentScene.createNode("Coordinate");
Coordinate28.point = new MFVec3f(new float[-0.05,0,0,0.05,0,0]);
LineSet26.coord = Coordinate28;

Shape25.geometry = LineSet26;

Transform24.children = new MFNode();

Transform24.children[0] = Shape25;

Transform18.children[1] = Transform24;

//<Transform translation='0 2.1 0' scale='1 1 1'> <Shape DEF='HAnimSiteShape'> <IndexedFaceSet DEF='DiamondIFS' creaseAngle='0.5' solid='false' coordIndex='0 1 2 -1 0 2 3 -1 0 3 4 -1 0 4 1 -1 5 2 1 -1 5 3 2 -1 5 4 3 -1 5 1 4 -1'> <ColorRGBA DEF='HAnimSiteColorRGBA' color='1 1 0 1 1 1 0 0.1'/> <Coordinate point='0 0.01 0 -0.01 0 0 0 0 0.01 0.01 0 0 0 0 -0.01 0 -0.01 0'/> </IndexedFaceSet> <Appearance> <Material diffuseColor='1 1 0' transparency='0.3'/> </Appearance> </Shape> </Transform>
Group17.children = new MFNode();

Group17.children[0] = Transform18;

browser.currentScene.children[1] = Group17;

let NavigationInfo29 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo29.speed = 1.5;
browser.currentScene.children[2] = NavigationInfo29;

let Viewpoint30 = browser.currentScene.createNode("Viewpoint");
Viewpoint30.description = "default";
browser.currentScene.children[3] = Viewpoint30;

let HAnimHumanoid31 = browser.currentScene.createNode("HAnimHumanoid");
HAnimHumanoid31.name = "HAnim";
HAnimHumanoid31.DEF = "hanim_HAnim";
HAnimHumanoid31.info = new MFString(new java.lang.String["humanoidVersion=2.0"]);
HAnimHumanoid31.version = "2.0";
let HAnimJoint32 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint32.name = "humanoid_root";
HAnimJoint32.DEF = "hanim_humanoid_root";
HAnimJoint32.center = new SFVec3f(new float[0,0.824,0.0277]);
HAnimJoint32.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint32.llimit = new MFFloat(new float[0,0,0]);
let Shape33 = browser.currentScene.createNode("Shape");
let LineSet34 = browser.currentScene.createNode("LineSet");
LineSet34.vertexCount = new MFInt32(new int[2]);
let Coordinate35 = browser.currentScene.createNode("Coordinate");
Coordinate35.point = new MFVec3f(new float[0,0.824,0.0277,0,0.9149,0.0016]);
LineSet34.coord = Coordinate35;

//from humanoid_root to sacroiliac
let ColorRGBA36 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA36.USE = "HAnimSegmentLineColorRGBA";
LineSet34.color = ColorRGBA36;

Shape33.geometry = LineSet34;

HAnimJoint32.shape = Shape33;

let HAnimSite37 = browser.currentScene.createNode("HAnimSite");
HAnimSite37.name = "buttocks_standing_wall_contact_point_pt";
HAnimSite37.DEF = "hanim_buttocks_standing_wall_contact_point_pt";
HAnimSite37.translation = new SFVec3f(new float[0,1,0]);
let TouchSensor38 = browser.currentScene.createNode("TouchSensor");
TouchSensor38.description = "HAnimSite buttocks_standing_wall_contact_point_pt";
HAnimSite37.children = new MFNode();

HAnimSite37.children[0] = TouchSensor38;

let Shape39 = browser.currentScene.createNode("Shape");
Shape39.USE = "HAnimSiteShape";
HAnimSite37.children[1] = Shape39;

HAnimJoint32.hAnimSite = new undefined();

HAnimJoint32.hAnimSite[0] = HAnimSite37;

let HAnimSite40 = browser.currentScene.createNode("HAnimSite");
HAnimSite40.name = "crotch_pt";
HAnimSite40.DEF = "hanim_crotch_pt";
HAnimSite40.translation = new SFVec3f(new float[0.0034,0.8266,0.0257]);
let TouchSensor41 = browser.currentScene.createNode("TouchSensor");
TouchSensor41.description = "HAnimSite crotch_pt";
HAnimSite40.children = new MFNode();

HAnimSite40.children[0] = TouchSensor41;

let Shape42 = browser.currentScene.createNode("Shape");
Shape42.USE = "HAnimSiteShape";
HAnimSite40.children[1] = Shape42;

HAnimJoint32.hAnimSite[1] = HAnimSite40;

let HAnimSite43 = browser.currentScene.createNode("HAnimSite");
HAnimSite43.name = "l_asis_pt";
HAnimSite43.DEF = "hanim_l_asis_pt";
HAnimSite43.translation = new SFVec3f(new float[0.0925,0.9983,0.1052]);
let TouchSensor44 = browser.currentScene.createNode("TouchSensor");
TouchSensor44.description = "HAnimSite l_asis_pt";
HAnimSite43.children = new MFNode();

HAnimSite43.children[0] = TouchSensor44;

let Shape45 = browser.currentScene.createNode("Shape");
Shape45.USE = "HAnimSiteShape";
HAnimSite43.children[1] = Shape45;

HAnimJoint32.hAnimSite[2] = HAnimSite43;

let HAnimSite46 = browser.currentScene.createNode("HAnimSite");
HAnimSite46.name = "l_iliocristale_pt";
HAnimSite46.DEF = "hanim_l_iliocristale_pt";
HAnimSite46.translation = new SFVec3f(new float[0.1612,1.0537,0.0008]);
let TouchSensor47 = browser.currentScene.createNode("TouchSensor");
TouchSensor47.description = "HAnimSite l_iliocristale_pt";
HAnimSite46.children = new MFNode();

HAnimSite46.children[0] = TouchSensor47;

let Shape48 = browser.currentScene.createNode("Shape");
Shape48.USE = "HAnimSiteShape";
HAnimSite46.children[1] = Shape48;

HAnimJoint32.hAnimSite[3] = HAnimSite46;

let HAnimSite49 = browser.currentScene.createNode("HAnimSite");
HAnimSite49.name = "l_psis_pt";
HAnimSite49.DEF = "hanim_l_psis_pt";
HAnimSite49.translation = new SFVec3f(new float[0.0774,1.019,-0.1151]);
let TouchSensor50 = browser.currentScene.createNode("TouchSensor");
TouchSensor50.description = "HAnimSite l_psis_pt";
HAnimSite49.children = new MFNode();

HAnimSite49.children[0] = TouchSensor50;

let Shape51 = browser.currentScene.createNode("Shape");
Shape51.USE = "HAnimSiteShape";
HAnimSite49.children[1] = Shape51;

HAnimJoint32.hAnimSite[4] = HAnimSite49;

let HAnimSite52 = browser.currentScene.createNode("HAnimSite");
HAnimSite52.name = "l_trochanterion_pt";
HAnimSite52.DEF = "hanim_l_trochanterion_pt";
HAnimSite52.translation = new SFVec3f(new float[0.1677,0.8336,0.0303]);
let TouchSensor53 = browser.currentScene.createNode("TouchSensor");
TouchSensor53.description = "HAnimSite l_trochanterion_pt";
HAnimSite52.children = new MFNode();

HAnimSite52.children[0] = TouchSensor53;

let Shape54 = browser.currentScene.createNode("Shape");
Shape54.USE = "HAnimSiteShape";
HAnimSite52.children[1] = Shape54;

HAnimJoint32.hAnimSite[5] = HAnimSite52;

let HAnimSite55 = browser.currentScene.createNode("HAnimSite");
HAnimSite55.name = "r_asis_pt";
HAnimSite55.DEF = "hanim_r_asis_pt";
HAnimSite55.translation = new SFVec3f(new float[-0.0887,1.0021,0.1112]);
let TouchSensor56 = browser.currentScene.createNode("TouchSensor");
TouchSensor56.description = "HAnimSite r_asis_pt";
HAnimSite55.children = new MFNode();

HAnimSite55.children[0] = TouchSensor56;

let Shape57 = browser.currentScene.createNode("Shape");
Shape57.USE = "HAnimSiteShape";
HAnimSite55.children[1] = Shape57;

HAnimJoint32.hAnimSite[6] = HAnimSite55;

let HAnimSite58 = browser.currentScene.createNode("HAnimSite");
HAnimSite58.name = "r_iliocristale_pt";
HAnimSite58.DEF = "hanim_r_iliocristale_pt";
HAnimSite58.translation = new SFVec3f(new float[-0.1525,1.0628,0.0035]);
let TouchSensor59 = browser.currentScene.createNode("TouchSensor");
TouchSensor59.description = "HAnimSite r_iliocristale_pt";
HAnimSite58.children = new MFNode();

HAnimSite58.children[0] = TouchSensor59;

let Shape60 = browser.currentScene.createNode("Shape");
Shape60.USE = "HAnimSiteShape";
HAnimSite58.children[1] = Shape60;

HAnimJoint32.hAnimSite[7] = HAnimSite58;

let HAnimSite61 = browser.currentScene.createNode("HAnimSite");
HAnimSite61.name = "r_psis_pt";
HAnimSite61.DEF = "hanim_r_psis_pt";
HAnimSite61.translation = new SFVec3f(new float[-0.0716,1.019,-0.1138]);
let TouchSensor62 = browser.currentScene.createNode("TouchSensor");
TouchSensor62.description = "HAnimSite r_psis_pt";
HAnimSite61.children = new MFNode();

HAnimSite61.children[0] = TouchSensor62;

let Shape63 = browser.currentScene.createNode("Shape");
Shape63.USE = "HAnimSiteShape";
HAnimSite61.children[1] = Shape63;

HAnimJoint32.hAnimSite[8] = HAnimSite61;

let HAnimSite64 = browser.currentScene.createNode("HAnimSite");
HAnimSite64.name = "r_trochanterion_pt";
HAnimSite64.DEF = "hanim_r_trochanterion_pt";
HAnimSite64.translation = new SFVec3f(new float[-0.1689,0.8419,0.0352]);
let TouchSensor65 = browser.currentScene.createNode("TouchSensor");
TouchSensor65.description = "HAnimSite r_trochanterion_pt";
HAnimSite64.children = new MFNode();

HAnimSite64.children[0] = TouchSensor65;

let Shape66 = browser.currentScene.createNode("Shape");
Shape66.USE = "HAnimSiteShape";
HAnimSite64.children[1] = Shape66;

HAnimJoint32.hAnimSite[9] = HAnimSite64;

let Shape67 = browser.currentScene.createNode("Shape");
let LineSet68 = browser.currentScene.createNode("LineSet");
LineSet68.vertexCount = new MFInt32(new int[2]);
let Coordinate69 = browser.currentScene.createNode("Coordinate");
Coordinate69.point = new MFVec3f(new float[0,0.824,0.0277,0.0028,1.0568,-0.0776]);
LineSet68.coord = Coordinate69;

//from humanoid_root to vl5
let ColorRGBA70 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA70.USE = "HAnimSegmentLineColorRGBA";
LineSet68.color = ColorRGBA70;

Shape67.geometry = LineSet68;

HAnimJoint32.shape[10] = Shape67;

let HAnimSite71 = browser.currentScene.createNode("HAnimSite");
HAnimSite71.name = "navel_pt";
HAnimSite71.DEF = "hanim_navel_pt";
HAnimSite71.translation = new SFVec3f(new float[0.0069,1.0966,0.1017]);
let TouchSensor72 = browser.currentScene.createNode("TouchSensor");
TouchSensor72.description = "HAnimSite navel_pt";
HAnimSite71.children = new MFNode();

HAnimSite71.children[0] = TouchSensor72;

let Shape73 = browser.currentScene.createNode("Shape");
Shape73.USE = "HAnimSiteShape";
HAnimSite71.children[1] = Shape73;

HAnimJoint32.hAnimSite[11] = HAnimSite71;

let HAnimSite74 = browser.currentScene.createNode("HAnimSite");
HAnimSite74.name = "waist_preferred_anterior_pt";
HAnimSite74.DEF = "hanim_waist_preferred_anterior_pt";
HAnimSite74.translation = new SFVec3f(new float[0,1,0]);
let TouchSensor75 = browser.currentScene.createNode("TouchSensor");
TouchSensor75.description = "HAnimSite waist_preferred_anterior_pt";
HAnimSite74.children = new MFNode();

HAnimSite74.children[0] = TouchSensor75;

let Shape76 = browser.currentScene.createNode("Shape");
Shape76.USE = "HAnimSiteShape";
HAnimSite74.children[1] = Shape76;

HAnimJoint32.hAnimSite[12] = HAnimSite74;

let HAnimSite77 = browser.currentScene.createNode("HAnimSite");
HAnimSite77.name = "waist_preferred_posterior_pt";
HAnimSite77.DEF = "hanim_waist_preferred_posterior_pt";
HAnimSite77.translation = new SFVec3f(new float[0.29,1.0915,-0.1091]);
let TouchSensor78 = browser.currentScene.createNode("TouchSensor");
TouchSensor78.description = "HAnimSite waist_preferred_posterior_pt";
HAnimSite77.children = new MFNode();

HAnimSite77.children[0] = TouchSensor78;

let Shape79 = browser.currentScene.createNode("Shape");
Shape79.USE = "HAnimSiteShape";
HAnimSite77.children[1] = Shape79;

HAnimJoint32.hAnimSite[13] = HAnimSite77;

let HAnimJoint80 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint80.name = "sacroiliac";
HAnimJoint80.DEF = "hanim_sacroiliac";
HAnimJoint80.center = new SFVec3f(new float[0,0.9149,0.0016]);
HAnimJoint80.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint80.llimit = new MFFloat(new float[0,0,0]);
let Shape81 = browser.currentScene.createNode("Shape");
let LineSet82 = browser.currentScene.createNode("LineSet");
LineSet82.vertexCount = new MFInt32(new int[2]);
let Coordinate83 = browser.currentScene.createNode("Coordinate");
Coordinate83.point = new MFVec3f(new float[0,0.9149,0.0016,0.0961,0.9124,-0.0001]);
LineSet82.coord = Coordinate83;

//from sacroiliac to l_hip
let ColorRGBA84 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA84.USE = "HAnimSegmentLineColorRGBA";
LineSet82.color = ColorRGBA84;

Shape81.geometry = LineSet82;

HAnimJoint80.shape = Shape81;

let HAnimSite85 = browser.currentScene.createNode("HAnimSite");
HAnimSite85.name = "l_femoral_lateral_epicondyles_pt";
HAnimSite85.DEF = "hanim_l_femoral_lateral_epicondyles_pt";
HAnimSite85.translation = new SFVec3f(new float[0.1598,0.4967,0.0297]);
let TouchSensor86 = browser.currentScene.createNode("TouchSensor");
TouchSensor86.description = "HAnimSite l_femoral_lateral_epicondyles_pt";
HAnimSite85.children = new MFNode();

HAnimSite85.children[0] = TouchSensor86;

let Shape87 = browser.currentScene.createNode("Shape");
Shape87.USE = "HAnimSiteShape";
HAnimSite85.children[1] = Shape87;

HAnimJoint80.hAnimSite = new undefined();

HAnimJoint80.hAnimSite[0] = HAnimSite85;

let HAnimSite88 = browser.currentScene.createNode("HAnimSite");
HAnimSite88.name = "l_femoral_medial_epicondyles_pt";
HAnimSite88.DEF = "hanim_l_femoral_medial_epicondyles_pt";
HAnimSite88.translation = new SFVec3f(new float[0.0398,0.4946,0.0303]);
let TouchSensor89 = browser.currentScene.createNode("TouchSensor");
TouchSensor89.description = "HAnimSite l_femoral_medial_epicondyles_pt";
HAnimSite88.children = new MFNode();

HAnimSite88.children[0] = TouchSensor89;

let Shape90 = browser.currentScene.createNode("Shape");
Shape90.USE = "HAnimSiteShape";
HAnimSite88.children[1] = Shape90;

HAnimJoint80.hAnimSite[1] = HAnimSite88;

let HAnimSite91 = browser.currentScene.createNode("HAnimSite");
HAnimSite91.name = "l_knee_crease_pt";
HAnimSite91.DEF = "hanim_l_knee_crease_pt";
HAnimSite91.translation = new SFVec3f(new float[0.0993,0.4881,-0.0309]);
let TouchSensor92 = browser.currentScene.createNode("TouchSensor");
TouchSensor92.description = "HAnimSite l_knee_crease_pt";
HAnimSite91.children = new MFNode();

HAnimSite91.children[0] = TouchSensor92;

let Shape93 = browser.currentScene.createNode("Shape");
Shape93.USE = "HAnimSiteShape";
HAnimSite91.children[1] = Shape93;

HAnimJoint80.hAnimSite[2] = HAnimSite91;

let HAnimSite94 = browser.currentScene.createNode("HAnimSite");
HAnimSite94.name = "l_suprapatella_pt";
HAnimSite94.DEF = "hanim_l_suprapatella_pt";
HAnimSite94.translation = new SFVec3f(new float[0,1,0]);
let TouchSensor95 = browser.currentScene.createNode("TouchSensor");
TouchSensor95.description = "HAnimSite l_suprapatella_pt";
HAnimSite94.children = new MFNode();

HAnimSite94.children[0] = TouchSensor95;

let Shape96 = browser.currentScene.createNode("Shape");
Shape96.USE = "HAnimSiteShape";
HAnimSite94.children[1] = Shape96;

HAnimJoint80.hAnimSite[3] = HAnimSite94;

let Shape97 = browser.currentScene.createNode("Shape");
let LineSet98 = browser.currentScene.createNode("LineSet");
LineSet98.vertexCount = new MFInt32(new int[2]);
let Coordinate99 = browser.currentScene.createNode("Coordinate");
Coordinate99.point = new MFVec3f(new float[0,0.9149,0.0016,-0.095,0.9171,0.0029]);
LineSet98.coord = Coordinate99;

//from sacroiliac to r_hip
let ColorRGBA100 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA100.USE = "HAnimSegmentLineColorRGBA";
LineSet98.color = ColorRGBA100;

Shape97.geometry = LineSet98;

HAnimJoint80.shape[4] = Shape97;

let HAnimSite101 = browser.currentScene.createNode("HAnimSite");
HAnimSite101.name = "r_femoral_lateral_epicondyles_pt";
HAnimSite101.DEF = "hanim_r_femoral_lateral_epicondyles_pt";
HAnimSite101.translation = new SFVec3f(new float[-0.1421,0.4992,0.031]);
let TouchSensor102 = browser.currentScene.createNode("TouchSensor");
TouchSensor102.description = "HAnimSite r_femoral_lateral_epicondyles_pt";
HAnimSite101.children = new MFNode();

HAnimSite101.children[0] = TouchSensor102;

let Shape103 = browser.currentScene.createNode("Shape");
Shape103.USE = "HAnimSiteShape";
HAnimSite101.children[1] = Shape103;

HAnimJoint80.hAnimSite[5] = HAnimSite101;

let HAnimSite104 = browser.currentScene.createNode("HAnimSite");
HAnimSite104.name = "r_femoral_medial_epicondyles_pt";
HAnimSite104.DEF = "hanim_r_femoral_medial_epicondyles_pt";
HAnimSite104.translation = new SFVec3f(new float[-0.0221,0.5014,0.0289]);
let TouchSensor105 = browser.currentScene.createNode("TouchSensor");
TouchSensor105.description = "HAnimSite r_femoral_medial_epicondyles_pt";
HAnimSite104.children = new MFNode();

HAnimSite104.children[0] = TouchSensor105;

let Shape106 = browser.currentScene.createNode("Shape");
Shape106.USE = "HAnimSiteShape";
HAnimSite104.children[1] = Shape106;

HAnimJoint80.hAnimSite[6] = HAnimSite104;

let HAnimSite107 = browser.currentScene.createNode("HAnimSite");
HAnimSite107.name = "r_knee_crease_pt";
HAnimSite107.DEF = "hanim_r_knee_crease_pt";
HAnimSite107.translation = new SFVec3f(new float[-0.0825,0.4932,-0.0326]);
let TouchSensor108 = browser.currentScene.createNode("TouchSensor");
TouchSensor108.description = "HAnimSite r_knee_crease_pt";
HAnimSite107.children = new MFNode();

HAnimSite107.children[0] = TouchSensor108;

let Shape109 = browser.currentScene.createNode("Shape");
Shape109.USE = "HAnimSiteShape";
HAnimSite107.children[1] = Shape109;

HAnimJoint80.hAnimSite[7] = HAnimSite107;

let HAnimSite110 = browser.currentScene.createNode("HAnimSite");
HAnimSite110.name = "r_suprapatella_pt";
HAnimSite110.DEF = "hanim_r_suprapatella_pt";
HAnimSite110.translation = new SFVec3f(new float[0,1,0]);
let TouchSensor111 = browser.currentScene.createNode("TouchSensor");
TouchSensor111.description = "HAnimSite r_suprapatella_pt";
HAnimSite110.children = new MFNode();

HAnimSite110.children[0] = TouchSensor111;

let Shape112 = browser.currentScene.createNode("Shape");
Shape112.USE = "HAnimSiteShape";
HAnimSite110.children[1] = Shape112;

HAnimJoint80.hAnimSite[8] = HAnimSite110;

let HAnimJoint113 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint113.name = "l_hip";
HAnimJoint113.DEF = "hanim_l_hip";
HAnimJoint113.center = new SFVec3f(new float[0.0961,0.9124,-0.0001]);
HAnimJoint113.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint113.llimit = new MFFloat(new float[0,0,0]);
let Shape114 = browser.currentScene.createNode("Shape");
let LineSet115 = browser.currentScene.createNode("LineSet");
LineSet115.vertexCount = new MFInt32(new int[2]);
let Coordinate116 = browser.currentScene.createNode("Coordinate");
Coordinate116.point = new MFVec3f(new float[0.0961,0.9124,-0.0001,0.104,0.4867,0.0308]);
LineSet115.coord = Coordinate116;

//from l_hip to l_knee
let ColorRGBA117 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA117.USE = "HAnimSegmentLineColorRGBA";
LineSet115.color = ColorRGBA117;

Shape114.geometry = LineSet115;

HAnimJoint113.shape = Shape114;

let HAnimSite118 = browser.currentScene.createNode("HAnimSite");
HAnimSite118.name = "l_lateral_malleolus_pt";
HAnimSite118.DEF = "hanim_l_lateral_malleolus_pt";
HAnimSite118.translation = new SFVec3f(new float[0.1308,0.0597,-0.1032]);
let TouchSensor119 = browser.currentScene.createNode("TouchSensor");
TouchSensor119.description = "HAnimSite l_lateral_malleolus_pt";
HAnimSite118.children = new MFNode();

HAnimSite118.children[0] = TouchSensor119;

let Shape120 = browser.currentScene.createNode("Shape");
Shape120.USE = "HAnimSiteShape";
HAnimSite118.children[1] = Shape120;

HAnimJoint113.hAnimSite = new undefined();

HAnimJoint113.hAnimSite[0] = HAnimSite118;

let HAnimSite121 = browser.currentScene.createNode("HAnimSite");
HAnimSite121.name = "l_medial_malleolus_pt";
HAnimSite121.DEF = "hanim_l_medial_malleolus_pt";
HAnimSite121.translation = new SFVec3f(new float[0.089,0.0716,-0.0881]);
let TouchSensor122 = browser.currentScene.createNode("TouchSensor");
TouchSensor122.description = "HAnimSite l_medial_malleolus_pt";
HAnimSite121.children = new MFNode();

HAnimSite121.children[0] = TouchSensor122;

let Shape123 = browser.currentScene.createNode("Shape");
Shape123.USE = "HAnimSiteShape";
HAnimSite121.children[1] = Shape123;

HAnimJoint113.hAnimSite[1] = HAnimSite121;

let HAnimSite124 = browser.currentScene.createNode("HAnimSite");
HAnimSite124.name = "l_tibiale_pt";
HAnimSite124.DEF = "hanim_l_tibiale_pt";
HAnimSite124.translation = new SFVec3f(new float[0,1,0]);
let TouchSensor125 = browser.currentScene.createNode("TouchSensor");
TouchSensor125.description = "HAnimSite l_tibiale_pt";
HAnimSite124.children = new MFNode();

HAnimSite124.children[0] = TouchSensor125;

let Shape126 = browser.currentScene.createNode("Shape");
Shape126.USE = "HAnimSiteShape";
HAnimSite124.children[1] = Shape126;

HAnimJoint113.hAnimSite[2] = HAnimSite124;

let HAnimJoint127 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint127.name = "l_knee";
HAnimJoint127.DEF = "hanim_l_knee";
HAnimJoint127.center = new SFVec3f(new float[0.104,0.4867,0.0308]);
HAnimJoint127.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint127.llimit = new MFFloat(new float[0,0,0]);
let Shape128 = browser.currentScene.createNode("Shape");
let LineSet129 = browser.currentScene.createNode("LineSet");
LineSet129.vertexCount = new MFInt32(new int[2]);
let Coordinate130 = browser.currentScene.createNode("Coordinate");
Coordinate130.point = new MFVec3f(new float[0.104,0.4867,0.0308,0.1101,0.0656,-0.0736]);
LineSet129.coord = Coordinate130;

//from l_knee to l_talocrural
let ColorRGBA131 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA131.USE = "HAnimSegmentLineColorRGBA";
LineSet129.color = ColorRGBA131;

Shape128.geometry = LineSet129;

HAnimJoint127.shape = Shape128;

let HAnimSite132 = browser.currentScene.createNode("HAnimSite");
HAnimSite132.name = "l_calcaneus_posterior_pt";
HAnimSite132.DEF = "hanim_l_calcaneus_posterior_pt";
HAnimSite132.translation = new SFVec3f(new float[0.0974,0.0259,-0.1171]);
let TouchSensor133 = browser.currentScene.createNode("TouchSensor");
TouchSensor133.description = "HAnimSite l_calcaneus_posterior_pt";
HAnimSite132.children = new MFNode();

HAnimSite132.children[0] = TouchSensor133;

let Shape134 = browser.currentScene.createNode("Shape");
Shape134.USE = "HAnimSiteShape";
HAnimSite132.children[1] = Shape134;

HAnimJoint127.hAnimSite = new undefined();

HAnimJoint127.hAnimSite[0] = HAnimSite132;

let HAnimSite135 = browser.currentScene.createNode("HAnimSite");
HAnimSite135.name = "l_sphyrion_pt";
HAnimSite135.DEF = "hanim_l_sphyrion_pt";
HAnimSite135.translation = new SFVec3f(new float[0.089,0.0575,-0.0943]);
let TouchSensor136 = browser.currentScene.createNode("TouchSensor");
TouchSensor136.description = "HAnimSite l_sphyrion_pt";
HAnimSite135.children = new MFNode();

HAnimSite135.children[0] = TouchSensor136;

let Shape137 = browser.currentScene.createNode("Shape");
Shape137.USE = "HAnimSiteShape";
HAnimSite135.children[1] = Shape137;

HAnimJoint127.hAnimSite[1] = HAnimSite135;

let HAnimJoint138 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint138.name = "l_talocrural";
HAnimJoint138.DEF = "hanim_l_talocrural";
HAnimJoint138.center = new SFVec3f(new float[0.1101,0.0656,-0.0736]);
HAnimJoint138.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint138.llimit = new MFFloat(new float[0,0,0]);
let Shape139 = browser.currentScene.createNode("Shape");
let LineSet140 = browser.currentScene.createNode("LineSet");
LineSet140.vertexCount = new MFInt32(new int[2]);
let Coordinate141 = browser.currentScene.createNode("Coordinate");
Coordinate141.point = new MFVec3f(new float[0.1101,0.0656,-0.0736,0,1,0]);
LineSet140.coord = Coordinate141;

//from l_talocrural to l_talocalcaneonavicular
let ColorRGBA142 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA142.USE = "HAnimSegmentLineColorRGBA";
LineSet140.color = ColorRGBA142;

Shape139.geometry = LineSet140;

HAnimJoint138.shape = Shape139;

let Shape143 = browser.currentScene.createNode("Shape");
let LineSet144 = browser.currentScene.createNode("LineSet");
LineSet144.vertexCount = new MFInt32(new int[2]);
let Coordinate145 = browser.currentScene.createNode("Coordinate");
Coordinate145.point = new MFVec3f(new float[0.1101,0.0656,-0.0736,0,1,0]);
LineSet144.coord = Coordinate145;

//from l_talocrural to l_calcaneocuboid
let ColorRGBA146 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA146.USE = "HAnimSegmentLineColorRGBA";
LineSet144.color = ColorRGBA146;

Shape143.geometry = LineSet144;

HAnimJoint138.shape = new undefined();

HAnimJoint138.shape[0] = Shape143;

let HAnimJoint147 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint147.name = "l_talocalcaneonavicular";
HAnimJoint147.DEF = "hanim_l_talocalcaneonavicular";
HAnimJoint147.center = new SFVec3f(new float[0,1,0]);
HAnimJoint147.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint147.llimit = new MFFloat(new float[0,0,0]);
let Shape148 = browser.currentScene.createNode("Shape");
let LineSet149 = browser.currentScene.createNode("LineSet");
LineSet149.vertexCount = new MFInt32(new int[1]);
let Coordinate150 = browser.currentScene.createNode("Coordinate");
Coordinate150.point = new MFVec3f(new float[0,1,0]);
LineSet149.coord = Coordinate150;

//from l_talocalcaneonavicular to l_cuneonavicular_1
let ColorRGBA151 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA151.USE = "HAnimSegmentLineColorRGBA";
LineSet149.color = ColorRGBA151;

Shape148.geometry = LineSet149;

HAnimJoint147.shape = Shape148;

let Shape152 = browser.currentScene.createNode("Shape");
let LineSet153 = browser.currentScene.createNode("LineSet");
LineSet153.vertexCount = new MFInt32(new int[1]);
let Coordinate154 = browser.currentScene.createNode("Coordinate");
Coordinate154.point = new MFVec3f(new float[0,1,0]);
LineSet153.coord = Coordinate154;

//from l_talocalcaneonavicular to l_cuneonavicular_2
let ColorRGBA155 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA155.USE = "HAnimSegmentLineColorRGBA";
LineSet153.color = ColorRGBA155;

Shape152.geometry = LineSet153;

HAnimJoint147.shape = new undefined();

HAnimJoint147.shape[0] = Shape152;

let Shape156 = browser.currentScene.createNode("Shape");
let LineSet157 = browser.currentScene.createNode("LineSet");
LineSet157.vertexCount = new MFInt32(new int[1]);
let Coordinate158 = browser.currentScene.createNode("Coordinate");
Coordinate158.point = new MFVec3f(new float[0,1,0]);
LineSet157.coord = Coordinate158;

//from l_talocalcaneonavicular to l_cuneonavicular_3
let ColorRGBA159 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA159.USE = "HAnimSegmentLineColorRGBA";
LineSet157.color = ColorRGBA159;

Shape156.geometry = LineSet157;

HAnimJoint147.shape[1] = Shape156;

let HAnimJoint160 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint160.name = "l_cuneonavicular_1";
HAnimJoint160.DEF = "hanim_l_cuneonavicular_1";
HAnimJoint160.center = new SFVec3f(new float[0,1,0]);
HAnimJoint160.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint160.llimit = new MFFloat(new float[0,0,0]);
let Shape161 = browser.currentScene.createNode("Shape");
let LineSet162 = browser.currentScene.createNode("LineSet");
LineSet162.vertexCount = new MFInt32(new int[1]);
let Coordinate163 = browser.currentScene.createNode("Coordinate");
Coordinate163.point = new MFVec3f(new float[0,1,0]);
LineSet162.coord = Coordinate163;

//from l_cuneonavicular_1 to l_tarsometatarsal_1
let ColorRGBA164 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA164.USE = "HAnimSegmentLineColorRGBA";
LineSet162.color = ColorRGBA164;

Shape161.geometry = LineSet162;

HAnimJoint160.shape = Shape161;

let HAnimJoint165 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint165.name = "l_tarsometatarsal_1";
HAnimJoint165.DEF = "hanim_l_tarsometatarsal_1";
HAnimJoint165.center = new SFVec3f(new float[0,1,0]);
HAnimJoint165.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint165.llimit = new MFFloat(new float[0,0,0]);
let Shape166 = browser.currentScene.createNode("Shape");
let LineSet167 = browser.currentScene.createNode("LineSet");
LineSet167.vertexCount = new MFInt32(new int[1]);
let Coordinate168 = browser.currentScene.createNode("Coordinate");
Coordinate168.point = new MFVec3f(new float[0,1,0]);
LineSet167.coord = Coordinate168;

//from l_tarsometatarsal_1 to l_metatarsophalangeal_1
let ColorRGBA169 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA169.USE = "HAnimSegmentLineColorRGBA";
LineSet167.color = ColorRGBA169;

Shape166.geometry = LineSet167;

HAnimJoint165.shape = Shape166;

let HAnimSite170 = browser.currentScene.createNode("HAnimSite");
HAnimSite170.name = "l_metatarsal_phalanx_1_pt";
HAnimSite170.DEF = "hanim_l_metatarsal_phalanx_1_pt";
HAnimSite170.translation = new SFVec3f(new float[0,1,0]);
let TouchSensor171 = browser.currentScene.createNode("TouchSensor");
TouchSensor171.description = "HAnimSite l_metatarsal_phalanx_1_pt";
HAnimSite170.children = new MFNode();

HAnimSite170.children[0] = TouchSensor171;

let Shape172 = browser.currentScene.createNode("Shape");
Shape172.USE = "HAnimSiteShape";
HAnimSite170.children[1] = Shape172;

HAnimJoint165.hAnimSite = new undefined();

HAnimJoint165.hAnimSite[0] = HAnimSite170;

let HAnimJoint173 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint173.name = "l_metatarsophalangeal_1";
HAnimJoint173.DEF = "hanim_l_metatarsophalangeal_1";
HAnimJoint173.center = new SFVec3f(new float[0,1,0]);
HAnimJoint173.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint173.llimit = new MFFloat(new float[0,0,0]);
let Shape174 = browser.currentScene.createNode("Shape");
let LineSet175 = browser.currentScene.createNode("LineSet");
LineSet175.vertexCount = new MFInt32(new int[1]);
let Coordinate176 = browser.currentScene.createNode("Coordinate");
Coordinate176.point = new MFVec3f(new float[0,1,0]);
LineSet175.coord = Coordinate176;

//from l_metatarsophalangeal_1 to l_tarsal_interphalangeal_1
let ColorRGBA177 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA177.USE = "HAnimSegmentLineColorRGBA";
LineSet175.color = ColorRGBA177;

Shape174.geometry = LineSet175;

HAnimJoint173.shape = Shape174;

let HAnimSite178 = browser.currentScene.createNode("HAnimSite");
HAnimSite178.name = "l_tarsal_distal_phalanx_1_tip";
HAnimSite178.DEF = "hanim_l_tarsal_distal_phalanx_1_tip";
HAnimSite178.translation = new SFVec3f(new float[0,1,0]);
let TouchSensor179 = browser.currentScene.createNode("TouchSensor");
TouchSensor179.description = "HAnimSite l_tarsal_distal_phalanx_1_tip";
HAnimSite178.children = new MFNode();

HAnimSite178.children[0] = TouchSensor179;

let Shape180 = browser.currentScene.createNode("Shape");
Shape180.USE = "HAnimSiteShape";
HAnimSite178.children[1] = Shape180;

HAnimJoint173.hAnimSite = new undefined();

HAnimJoint173.hAnimSite[0] = HAnimSite178;

let HAnimJoint181 = browser.currentScene.createNode("HAnimJoint");
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

let HAnimJoint182 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint182.name = "l_cuneonavicular_2";
HAnimJoint182.DEF = "hanim_l_cuneonavicular_2";
HAnimJoint182.center = new SFVec3f(new float[0,1,0]);
HAnimJoint182.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint182.llimit = new MFFloat(new float[0,0,0]);
let Shape183 = browser.currentScene.createNode("Shape");
let LineSet184 = browser.currentScene.createNode("LineSet");
LineSet184.vertexCount = new MFInt32(new int[1]);
let Coordinate185 = browser.currentScene.createNode("Coordinate");
Coordinate185.point = new MFVec3f(new float[0,1,0]);
LineSet184.coord = Coordinate185;

//from l_cuneonavicular_2 to l_tarsometatarsal_2
let ColorRGBA186 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA186.USE = "HAnimSegmentLineColorRGBA";
LineSet184.color = ColorRGBA186;

Shape183.geometry = LineSet184;

HAnimJoint182.shape = Shape183;

let HAnimJoint187 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint187.name = "l_tarsometatarsal_2";
HAnimJoint187.DEF = "hanim_l_tarsometatarsal_2";
HAnimJoint187.center = new SFVec3f(new float[0,1,0]);
HAnimJoint187.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint187.llimit = new MFFloat(new float[0,0,0]);
let Shape188 = browser.currentScene.createNode("Shape");
let LineSet189 = browser.currentScene.createNode("LineSet");
LineSet189.vertexCount = new MFInt32(new int[1]);
let Coordinate190 = browser.currentScene.createNode("Coordinate");
Coordinate190.point = new MFVec3f(new float[0,1,0]);
LineSet189.coord = Coordinate190;

//from l_tarsometatarsal_2 to l_metatarsophalangeal_2
let ColorRGBA191 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA191.USE = "HAnimSegmentLineColorRGBA";
LineSet189.color = ColorRGBA191;

Shape188.geometry = LineSet189;

HAnimJoint187.shape = Shape188;

let HAnimJoint192 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint192.name = "l_metatarsophalangeal_2";
HAnimJoint192.DEF = "hanim_l_metatarsophalangeal_2";
HAnimJoint192.center = new SFVec3f(new float[0,1,0]);
HAnimJoint192.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint192.llimit = new MFFloat(new float[0,0,0]);
let Shape193 = browser.currentScene.createNode("Shape");
let LineSet194 = browser.currentScene.createNode("LineSet");
LineSet194.vertexCount = new MFInt32(new int[1]);
let Coordinate195 = browser.currentScene.createNode("Coordinate");
Coordinate195.point = new MFVec3f(new float[0,1,0]);
LineSet194.coord = Coordinate195;

//from l_metatarsophalangeal_2 to l_tarsal_proximal_interphalangeal_2
let ColorRGBA196 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA196.USE = "HAnimSegmentLineColorRGBA";
LineSet194.color = ColorRGBA196;

Shape193.geometry = LineSet194;

HAnimJoint192.shape = Shape193;

let HAnimJoint197 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint197.name = "l_tarsal_proximal_interphalangeal_2";
HAnimJoint197.DEF = "hanim_l_tarsal_proximal_interphalangeal_2";
HAnimJoint197.center = new SFVec3f(new float[0,1,0]);
HAnimJoint197.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint197.llimit = new MFFloat(new float[0,0,0]);
let Shape198 = browser.currentScene.createNode("Shape");
let LineSet199 = browser.currentScene.createNode("LineSet");
LineSet199.vertexCount = new MFInt32(new int[1]);
let Coordinate200 = browser.currentScene.createNode("Coordinate");
Coordinate200.point = new MFVec3f(new float[0,1,0]);
LineSet199.coord = Coordinate200;

//from l_tarsal_proximal_interphalangeal_2 to l_tarsal_distal_interphalangeal_2
let ColorRGBA201 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA201.USE = "HAnimSegmentLineColorRGBA";
LineSet199.color = ColorRGBA201;

Shape198.geometry = LineSet199;

HAnimJoint197.shape = Shape198;

let HAnimSite202 = browser.currentScene.createNode("HAnimSite");
HAnimSite202.name = "l_tarsal_distal_phalanx_2_tip";
HAnimSite202.DEF = "hanim_l_tarsal_distal_phalanx_2_tip";
HAnimSite202.translation = new SFVec3f(new float[0.1195,0.0079,0.1433]);
let TouchSensor203 = browser.currentScene.createNode("TouchSensor");
TouchSensor203.description = "HAnimSite l_tarsal_distal_phalanx_2_tip";
HAnimSite202.children = new MFNode();

HAnimSite202.children[0] = TouchSensor203;

let Shape204 = browser.currentScene.createNode("Shape");
Shape204.USE = "HAnimSiteShape";
HAnimSite202.children[1] = Shape204;

HAnimJoint197.hAnimSite = new undefined();

HAnimJoint197.hAnimSite[0] = HAnimSite202;

let HAnimJoint205 = browser.currentScene.createNode("HAnimJoint");
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

let HAnimJoint206 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint206.name = "l_cuneonavicular_3";
HAnimJoint206.DEF = "hanim_l_cuneonavicular_3";
HAnimJoint206.center = new SFVec3f(new float[0,1,0]);
HAnimJoint206.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint206.llimit = new MFFloat(new float[0,0,0]);
let Shape207 = browser.currentScene.createNode("Shape");
let LineSet208 = browser.currentScene.createNode("LineSet");
LineSet208.vertexCount = new MFInt32(new int[1]);
let Coordinate209 = browser.currentScene.createNode("Coordinate");
Coordinate209.point = new MFVec3f(new float[0,1,0]);
LineSet208.coord = Coordinate209;

//from l_cuneonavicular_3 to l_tarsometatarsal_3
let ColorRGBA210 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA210.USE = "HAnimSegmentLineColorRGBA";
LineSet208.color = ColorRGBA210;

Shape207.geometry = LineSet208;

HAnimJoint206.shape = Shape207;

let HAnimJoint211 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint211.name = "l_tarsometatarsal_3";
HAnimJoint211.DEF = "hanim_l_tarsometatarsal_3";
HAnimJoint211.center = new SFVec3f(new float[0,1,0]);
HAnimJoint211.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint211.llimit = new MFFloat(new float[0,0,0]);
let Shape212 = browser.currentScene.createNode("Shape");
let LineSet213 = browser.currentScene.createNode("LineSet");
LineSet213.vertexCount = new MFInt32(new int[1]);
let Coordinate214 = browser.currentScene.createNode("Coordinate");
Coordinate214.point = new MFVec3f(new float[0,1,0]);
LineSet213.coord = Coordinate214;

//from l_tarsometatarsal_3 to l_metatarsophalangeal_3
let ColorRGBA215 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA215.USE = "HAnimSegmentLineColorRGBA";
LineSet213.color = ColorRGBA215;

Shape212.geometry = LineSet213;

HAnimJoint211.shape = Shape212;

let HAnimJoint216 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint216.name = "l_metatarsophalangeal_3";
HAnimJoint216.DEF = "hanim_l_metatarsophalangeal_3";
HAnimJoint216.center = new SFVec3f(new float[0,1,0]);
HAnimJoint216.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint216.llimit = new MFFloat(new float[0,0,0]);
let Shape217 = browser.currentScene.createNode("Shape");
let LineSet218 = browser.currentScene.createNode("LineSet");
LineSet218.vertexCount = new MFInt32(new int[1]);
let Coordinate219 = browser.currentScene.createNode("Coordinate");
Coordinate219.point = new MFVec3f(new float[0,1,0]);
LineSet218.coord = Coordinate219;

//from l_metatarsophalangeal_3 to l_tarsal_proximal_interphalangeal_3
let ColorRGBA220 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA220.USE = "HAnimSegmentLineColorRGBA";
LineSet218.color = ColorRGBA220;

Shape217.geometry = LineSet218;

HAnimJoint216.shape = Shape217;

let HAnimJoint221 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint221.name = "l_tarsal_proximal_interphalangeal_3";
HAnimJoint221.DEF = "hanim_l_tarsal_proximal_interphalangeal_3";
HAnimJoint221.center = new SFVec3f(new float[0,1,0]);
HAnimJoint221.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint221.llimit = new MFFloat(new float[0,0,0]);
let Shape222 = browser.currentScene.createNode("Shape");
let LineSet223 = browser.currentScene.createNode("LineSet");
LineSet223.vertexCount = new MFInt32(new int[1]);
let Coordinate224 = browser.currentScene.createNode("Coordinate");
Coordinate224.point = new MFVec3f(new float[0,1,0]);
LineSet223.coord = Coordinate224;

//from l_tarsal_proximal_interphalangeal_3 to l_tarsal_distal_interphalangeal_3
let ColorRGBA225 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA225.USE = "HAnimSegmentLineColorRGBA";
LineSet223.color = ColorRGBA225;

Shape222.geometry = LineSet223;

HAnimJoint221.shape = Shape222;

let HAnimSite226 = browser.currentScene.createNode("HAnimSite");
HAnimSite226.name = "l_tarsal_distal_phalanx_3_tip";
HAnimSite226.DEF = "hanim_l_tarsal_distal_phalanx_3_tip";
HAnimSite226.translation = new SFVec3f(new float[0,1,0]);
let TouchSensor227 = browser.currentScene.createNode("TouchSensor");
TouchSensor227.description = "HAnimSite l_tarsal_distal_phalanx_3_tip";
HAnimSite226.children = new MFNode();

HAnimSite226.children[0] = TouchSensor227;

let Shape228 = browser.currentScene.createNode("Shape");
Shape228.USE = "HAnimSiteShape";
HAnimSite226.children[1] = Shape228;

HAnimJoint221.hAnimSite = new undefined();

HAnimJoint221.hAnimSite[0] = HAnimSite226;

let HAnimJoint229 = browser.currentScene.createNode("HAnimJoint");
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

let HAnimJoint230 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint230.name = "l_calcaneocuboid";
HAnimJoint230.DEF = "hanim_l_calcaneocuboid";
HAnimJoint230.center = new SFVec3f(new float[0,1,0]);
HAnimJoint230.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint230.llimit = new MFFloat(new float[0,0,0]);
let Shape231 = browser.currentScene.createNode("Shape");
let LineSet232 = browser.currentScene.createNode("LineSet");
LineSet232.vertexCount = new MFInt32(new int[1]);
let Coordinate233 = browser.currentScene.createNode("Coordinate");
Coordinate233.point = new MFVec3f(new float[0,1,0]);
LineSet232.coord = Coordinate233;

//from l_calcaneocuboid to l_transversetarsal
let ColorRGBA234 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA234.USE = "HAnimSegmentLineColorRGBA";
LineSet232.color = ColorRGBA234;

Shape231.geometry = LineSet232;

HAnimJoint230.shape = Shape231;

let HAnimJoint235 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint235.name = "l_transversetarsal";
HAnimJoint235.DEF = "hanim_l_transversetarsal";
HAnimJoint235.center = new SFVec3f(new float[0,1,0]);
HAnimJoint235.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint235.llimit = new MFFloat(new float[0,0,0]);
let Shape236 = browser.currentScene.createNode("Shape");
let LineSet237 = browser.currentScene.createNode("LineSet");
LineSet237.vertexCount = new MFInt32(new int[1]);
let Coordinate238 = browser.currentScene.createNode("Coordinate");
Coordinate238.point = new MFVec3f(new float[0,1,0]);
LineSet237.coord = Coordinate238;

//from l_transversetarsal to l_tarsometatarsal_4
let ColorRGBA239 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA239.USE = "HAnimSegmentLineColorRGBA";
LineSet237.color = ColorRGBA239;

Shape236.geometry = LineSet237;

HAnimJoint235.shape = Shape236;

let Shape240 = browser.currentScene.createNode("Shape");
let LineSet241 = browser.currentScene.createNode("LineSet");
LineSet241.vertexCount = new MFInt32(new int[1]);
let Coordinate242 = browser.currentScene.createNode("Coordinate");
Coordinate242.point = new MFVec3f(new float[0,1,0]);
LineSet241.coord = Coordinate242;

//from l_transversetarsal to l_tarsometatarsal_5
let ColorRGBA243 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA243.USE = "HAnimSegmentLineColorRGBA";
LineSet241.color = ColorRGBA243;

Shape240.geometry = LineSet241;

HAnimJoint235.shape = new undefined();

HAnimJoint235.shape[0] = Shape240;

let HAnimJoint244 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint244.name = "l_tarsometatarsal_4";
HAnimJoint244.DEF = "hanim_l_tarsometatarsal_4";
HAnimJoint244.center = new SFVec3f(new float[0,1,0]);
HAnimJoint244.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint244.llimit = new MFFloat(new float[0,0,0]);
let Shape245 = browser.currentScene.createNode("Shape");
let LineSet246 = browser.currentScene.createNode("LineSet");
LineSet246.vertexCount = new MFInt32(new int[1]);
let Coordinate247 = browser.currentScene.createNode("Coordinate");
Coordinate247.point = new MFVec3f(new float[0,1,0]);
LineSet246.coord = Coordinate247;

//from l_tarsometatarsal_4 to l_metatarsophalangeal_4
let ColorRGBA248 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA248.USE = "HAnimSegmentLineColorRGBA";
LineSet246.color = ColorRGBA248;

Shape245.geometry = LineSet246;

HAnimJoint244.shape = Shape245;

let HAnimJoint249 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint249.name = "l_metatarsophalangeal_4";
HAnimJoint249.DEF = "hanim_l_metatarsophalangeal_4";
HAnimJoint249.center = new SFVec3f(new float[0,1,0]);
HAnimJoint249.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint249.llimit = new MFFloat(new float[0,0,0]);
let Shape250 = browser.currentScene.createNode("Shape");
let LineSet251 = browser.currentScene.createNode("LineSet");
LineSet251.vertexCount = new MFInt32(new int[1]);
let Coordinate252 = browser.currentScene.createNode("Coordinate");
Coordinate252.point = new MFVec3f(new float[0,1,0]);
LineSet251.coord = Coordinate252;

//from l_metatarsophalangeal_4 to l_tarsal_proximal_interphalangeal_4
let ColorRGBA253 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA253.USE = "HAnimSegmentLineColorRGBA";
LineSet251.color = ColorRGBA253;

Shape250.geometry = LineSet251;

HAnimJoint249.shape = Shape250;

let HAnimJoint254 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint254.name = "l_tarsal_proximal_interphalangeal_4";
HAnimJoint254.DEF = "hanim_l_tarsal_proximal_interphalangeal_4";
HAnimJoint254.center = new SFVec3f(new float[0,1,0]);
HAnimJoint254.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint254.llimit = new MFFloat(new float[0,0,0]);
let Shape255 = browser.currentScene.createNode("Shape");
let LineSet256 = browser.currentScene.createNode("LineSet");
LineSet256.vertexCount = new MFInt32(new int[1]);
let Coordinate257 = browser.currentScene.createNode("Coordinate");
Coordinate257.point = new MFVec3f(new float[0,1,0]);
LineSet256.coord = Coordinate257;

//from l_tarsal_proximal_interphalangeal_4 to l_tarsal_distal_interphalangeal_4
let ColorRGBA258 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA258.USE = "HAnimSegmentLineColorRGBA";
LineSet256.color = ColorRGBA258;

Shape255.geometry = LineSet256;

HAnimJoint254.shape = Shape255;

let HAnimSite259 = browser.currentScene.createNode("HAnimSite");
HAnimSite259.name = "l_tarsal_distal_phalanx_4_tip";
HAnimSite259.DEF = "hanim_l_tarsal_distal_phalanx_4_tip";
HAnimSite259.translation = new SFVec3f(new float[0,1,0]);
let TouchSensor260 = browser.currentScene.createNode("TouchSensor");
TouchSensor260.description = "HAnimSite l_tarsal_distal_phalanx_4_tip";
HAnimSite259.children = new MFNode();

HAnimSite259.children[0] = TouchSensor260;

let Shape261 = browser.currentScene.createNode("Shape");
Shape261.USE = "HAnimSiteShape";
HAnimSite259.children[1] = Shape261;

HAnimJoint254.hAnimSite = new undefined();

HAnimJoint254.hAnimSite[0] = HAnimSite259;

let HAnimJoint262 = browser.currentScene.createNode("HAnimJoint");
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

let HAnimJoint263 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint263.name = "l_tarsometatarsal_5";
HAnimJoint263.DEF = "hanim_l_tarsometatarsal_5";
HAnimJoint263.center = new SFVec3f(new float[0,1,0]);
HAnimJoint263.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint263.llimit = new MFFloat(new float[0,0,0]);
let Shape264 = browser.currentScene.createNode("Shape");
let LineSet265 = browser.currentScene.createNode("LineSet");
LineSet265.vertexCount = new MFInt32(new int[1]);
let Coordinate266 = browser.currentScene.createNode("Coordinate");
Coordinate266.point = new MFVec3f(new float[0,1,0]);
LineSet265.coord = Coordinate266;

//from l_tarsometatarsal_5 to l_metatarsophalangeal_5
let ColorRGBA267 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA267.USE = "HAnimSegmentLineColorRGBA";
LineSet265.color = ColorRGBA267;

Shape264.geometry = LineSet265;

HAnimJoint263.shape = Shape264;

let HAnimSite268 = browser.currentScene.createNode("HAnimSite");
HAnimSite268.name = "l_metatarsal_phalanx_5_pt";
HAnimSite268.DEF = "hanim_l_metatarsal_phalanx_5_pt";
HAnimSite268.translation = new SFVec3f(new float[0,1,0]);
let TouchSensor269 = browser.currentScene.createNode("TouchSensor");
TouchSensor269.description = "HAnimSite l_metatarsal_phalanx_5_pt";
HAnimSite268.children = new MFNode();

HAnimSite268.children[0] = TouchSensor269;

let Shape270 = browser.currentScene.createNode("Shape");
Shape270.USE = "HAnimSiteShape";
HAnimSite268.children[1] = Shape270;

HAnimJoint263.hAnimSite = new undefined();

HAnimJoint263.hAnimSite[0] = HAnimSite268;

let HAnimJoint271 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint271.name = "l_metatarsophalangeal_5";
HAnimJoint271.DEF = "hanim_l_metatarsophalangeal_5";
HAnimJoint271.center = new SFVec3f(new float[0,1,0]);
HAnimJoint271.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint271.llimit = new MFFloat(new float[0,0,0]);
let Shape272 = browser.currentScene.createNode("Shape");
let LineSet273 = browser.currentScene.createNode("LineSet");
LineSet273.vertexCount = new MFInt32(new int[1]);
let Coordinate274 = browser.currentScene.createNode("Coordinate");
Coordinate274.point = new MFVec3f(new float[0,1,0]);
LineSet273.coord = Coordinate274;

//from l_metatarsophalangeal_5 to l_tarsal_proximal_interphalangeal_5
let ColorRGBA275 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA275.USE = "HAnimSegmentLineColorRGBA";
LineSet273.color = ColorRGBA275;

Shape272.geometry = LineSet273;

HAnimJoint271.shape = Shape272;

let HAnimJoint276 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint276.name = "l_tarsal_proximal_interphalangeal_5";
HAnimJoint276.DEF = "hanim_l_tarsal_proximal_interphalangeal_5";
HAnimJoint276.center = new SFVec3f(new float[0,1,0]);
HAnimJoint276.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint276.llimit = new MFFloat(new float[0,0,0]);
let Shape277 = browser.currentScene.createNode("Shape");
let LineSet278 = browser.currentScene.createNode("LineSet");
LineSet278.vertexCount = new MFInt32(new int[1]);
let Coordinate279 = browser.currentScene.createNode("Coordinate");
Coordinate279.point = new MFVec3f(new float[0,1,0]);
LineSet278.coord = Coordinate279;

//from l_tarsal_proximal_interphalangeal_5 to l_tarsal_distal_interphalangeal_5
let ColorRGBA280 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA280.USE = "HAnimSegmentLineColorRGBA";
LineSet278.color = ColorRGBA280;

Shape277.geometry = LineSet278;

HAnimJoint276.shape = Shape277;

let HAnimSite281 = browser.currentScene.createNode("HAnimSite");
HAnimSite281.name = "l_tarsal_distal_phalanx_5_tip";
HAnimSite281.DEF = "hanim_l_tarsal_distal_phalanx_5_tip";
HAnimSite281.translation = new SFVec3f(new float[0,1,0]);
let TouchSensor282 = browser.currentScene.createNode("TouchSensor");
TouchSensor282.description = "HAnimSite l_tarsal_distal_phalanx_5_tip";
HAnimSite281.children = new MFNode();

HAnimSite281.children[0] = TouchSensor282;

let Shape283 = browser.currentScene.createNode("Shape");
Shape283.USE = "HAnimSiteShape";
HAnimSite281.children[1] = Shape283;

HAnimJoint276.hAnimSite = new undefined();

HAnimJoint276.hAnimSite[0] = HAnimSite281;

let HAnimJoint284 = browser.currentScene.createNode("HAnimJoint");
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

let HAnimJoint285 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint285.name = "r_hip";
HAnimJoint285.DEF = "hanim_r_hip";
HAnimJoint285.center = new SFVec3f(new float[-0.095,0.9171,0.0029]);
HAnimJoint285.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint285.llimit = new MFFloat(new float[0,0,0]);
let Shape286 = browser.currentScene.createNode("Shape");
let LineSet287 = browser.currentScene.createNode("LineSet");
LineSet287.vertexCount = new MFInt32(new int[2]);
let Coordinate288 = browser.currentScene.createNode("Coordinate");
Coordinate288.point = new MFVec3f(new float[-0.095,0.9171,0.0029,-0.0867,0.4913,0.0318]);
LineSet287.coord = Coordinate288;

//from r_hip to r_knee
let ColorRGBA289 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA289.USE = "HAnimSegmentLineColorRGBA";
LineSet287.color = ColorRGBA289;

Shape286.geometry = LineSet287;

HAnimJoint285.shape = Shape286;

let HAnimSite290 = browser.currentScene.createNode("HAnimSite");
HAnimSite290.name = "r_lateral_malleolus_pt";
HAnimSite290.DEF = "hanim_r_lateral_malleolus_pt";
HAnimSite290.translation = new SFVec3f(new float[-0.1006,0.0658,-0.1075]);
let TouchSensor291 = browser.currentScene.createNode("TouchSensor");
TouchSensor291.description = "HAnimSite r_lateral_malleolus_pt";
HAnimSite290.children = new MFNode();

HAnimSite290.children[0] = TouchSensor291;

let Shape292 = browser.currentScene.createNode("Shape");
Shape292.USE = "HAnimSiteShape";
HAnimSite290.children[1] = Shape292;

HAnimJoint285.hAnimSite = new undefined();

HAnimJoint285.hAnimSite[0] = HAnimSite290;

let HAnimSite293 = browser.currentScene.createNode("HAnimSite");
HAnimSite293.name = "r_medial_malleolus_pt";
HAnimSite293.DEF = "hanim_r_medial_malleolus_pt";
HAnimSite293.translation = new SFVec3f(new float[-0.0591,0.076,-0.0928]);
let TouchSensor294 = browser.currentScene.createNode("TouchSensor");
TouchSensor294.description = "HAnimSite r_medial_malleolus_pt";
HAnimSite293.children = new MFNode();

HAnimSite293.children[0] = TouchSensor294;

let Shape295 = browser.currentScene.createNode("Shape");
Shape295.USE = "HAnimSiteShape";
HAnimSite293.children[1] = Shape295;

HAnimJoint285.hAnimSite[1] = HAnimSite293;

let HAnimSite296 = browser.currentScene.createNode("HAnimSite");
HAnimSite296.name = "r_tibiale_pt";
HAnimSite296.DEF = "hanim_r_tibiale_pt";
HAnimSite296.translation = new SFVec3f(new float[0,1,0]);
let TouchSensor297 = browser.currentScene.createNode("TouchSensor");
TouchSensor297.description = "HAnimSite r_tibiale_pt";
HAnimSite296.children = new MFNode();

HAnimSite296.children[0] = TouchSensor297;

let Shape298 = browser.currentScene.createNode("Shape");
Shape298.USE = "HAnimSiteShape";
HAnimSite296.children[1] = Shape298;

HAnimJoint285.hAnimSite[2] = HAnimSite296;

let HAnimJoint299 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint299.name = "r_knee";
HAnimJoint299.DEF = "hanim_r_knee";
HAnimJoint299.center = new SFVec3f(new float[-0.0867,0.4913,0.0318]);
HAnimJoint299.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint299.llimit = new MFFloat(new float[0,0,0]);
let Shape300 = browser.currentScene.createNode("Shape");
let LineSet301 = browser.currentScene.createNode("LineSet");
LineSet301.vertexCount = new MFInt32(new int[2]);
let Coordinate302 = browser.currentScene.createNode("Coordinate");
Coordinate302.point = new MFVec3f(new float[-0.0867,0.4913,0.0318,-0.0801,0.0712,-0.0766]);
LineSet301.coord = Coordinate302;

//from r_knee to r_talocrural
let ColorRGBA303 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA303.USE = "HAnimSegmentLineColorRGBA";
LineSet301.color = ColorRGBA303;

Shape300.geometry = LineSet301;

HAnimJoint299.shape = Shape300;

let HAnimSite304 = browser.currentScene.createNode("HAnimSite");
HAnimSite304.name = "r_calcaneus_posterior_pt";
HAnimSite304.DEF = "hanim_r_calcaneus_posterior_pt";
HAnimSite304.translation = new SFVec3f(new float[-0.0692,0.0297,-0.1221]);
let TouchSensor305 = browser.currentScene.createNode("TouchSensor");
TouchSensor305.description = "HAnimSite r_calcaneus_posterior_pt";
HAnimSite304.children = new MFNode();

HAnimSite304.children[0] = TouchSensor305;

let Shape306 = browser.currentScene.createNode("Shape");
Shape306.USE = "HAnimSiteShape";
HAnimSite304.children[1] = Shape306;

HAnimJoint299.hAnimSite = new undefined();

HAnimJoint299.hAnimSite[0] = HAnimSite304;

let HAnimSite307 = browser.currentScene.createNode("HAnimSite");
HAnimSite307.name = "r_sphyrion_pt";
HAnimSite307.DEF = "hanim_r_sphyrion_pt";
HAnimSite307.translation = new SFVec3f(new float[-0.0603,0.061,-0.1002]);
let TouchSensor308 = browser.currentScene.createNode("TouchSensor");
TouchSensor308.description = "HAnimSite r_sphyrion_pt";
HAnimSite307.children = new MFNode();

HAnimSite307.children[0] = TouchSensor308;

let Shape309 = browser.currentScene.createNode("Shape");
Shape309.USE = "HAnimSiteShape";
HAnimSite307.children[1] = Shape309;

HAnimJoint299.hAnimSite[1] = HAnimSite307;

let HAnimJoint310 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint310.name = "r_talocrural";
HAnimJoint310.DEF = "hanim_r_talocrural";
HAnimJoint310.center = new SFVec3f(new float[-0.0801,0.0712,-0.0766]);
HAnimJoint310.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint310.llimit = new MFFloat(new float[0,0,0]);
let Shape311 = browser.currentScene.createNode("Shape");
let LineSet312 = browser.currentScene.createNode("LineSet");
LineSet312.vertexCount = new MFInt32(new int[2]);
let Coordinate313 = browser.currentScene.createNode("Coordinate");
Coordinate313.point = new MFVec3f(new float[-0.0801,0.0712,-0.0766,0,1,0]);
LineSet312.coord = Coordinate313;

//from r_talocrural to r_talocalcaneonavicular
let ColorRGBA314 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA314.USE = "HAnimSegmentLineColorRGBA";
LineSet312.color = ColorRGBA314;

Shape311.geometry = LineSet312;

HAnimJoint310.shape = Shape311;

let Shape315 = browser.currentScene.createNode("Shape");
let LineSet316 = browser.currentScene.createNode("LineSet");
LineSet316.vertexCount = new MFInt32(new int[2]);
let Coordinate317 = browser.currentScene.createNode("Coordinate");
Coordinate317.point = new MFVec3f(new float[-0.0801,0.0712,-0.0766,0,1,0]);
LineSet316.coord = Coordinate317;

//from r_talocrural to r_calcaneocuboid
let ColorRGBA318 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA318.USE = "HAnimSegmentLineColorRGBA";
LineSet316.color = ColorRGBA318;

Shape315.geometry = LineSet316;

HAnimJoint310.shape = new undefined();

HAnimJoint310.shape[0] = Shape315;

let HAnimJoint319 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint319.name = "r_talocalcaneonavicular";
HAnimJoint319.DEF = "hanim_r_talocalcaneonavicular";
HAnimJoint319.center = new SFVec3f(new float[0,1,0]);
HAnimJoint319.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint319.llimit = new MFFloat(new float[0,0,0]);
let Shape320 = browser.currentScene.createNode("Shape");
let LineSet321 = browser.currentScene.createNode("LineSet");
LineSet321.vertexCount = new MFInt32(new int[1]);
let Coordinate322 = browser.currentScene.createNode("Coordinate");
Coordinate322.point = new MFVec3f(new float[0,1,0]);
LineSet321.coord = Coordinate322;

//from r_talocalcaneonavicular to r_cuneonavicular_1
let ColorRGBA323 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA323.USE = "HAnimSegmentLineColorRGBA";
LineSet321.color = ColorRGBA323;

Shape320.geometry = LineSet321;

HAnimJoint319.shape = Shape320;

let Shape324 = browser.currentScene.createNode("Shape");
let LineSet325 = browser.currentScene.createNode("LineSet");
LineSet325.vertexCount = new MFInt32(new int[1]);
let Coordinate326 = browser.currentScene.createNode("Coordinate");
Coordinate326.point = new MFVec3f(new float[0,1,0]);
LineSet325.coord = Coordinate326;

//from r_talocalcaneonavicular to r_cuneonavicular_2
let ColorRGBA327 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA327.USE = "HAnimSegmentLineColorRGBA";
LineSet325.color = ColorRGBA327;

Shape324.geometry = LineSet325;

HAnimJoint319.shape = new undefined();

HAnimJoint319.shape[0] = Shape324;

let Shape328 = browser.currentScene.createNode("Shape");
let LineSet329 = browser.currentScene.createNode("LineSet");
LineSet329.vertexCount = new MFInt32(new int[1]);
let Coordinate330 = browser.currentScene.createNode("Coordinate");
Coordinate330.point = new MFVec3f(new float[0,1,0]);
LineSet329.coord = Coordinate330;

//from r_talocalcaneonavicular to r_cuneonavicular_3
let ColorRGBA331 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA331.USE = "HAnimSegmentLineColorRGBA";
LineSet329.color = ColorRGBA331;

Shape328.geometry = LineSet329;

HAnimJoint319.shape[1] = Shape328;

let HAnimJoint332 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint332.name = "r_cuneonavicular_1";
HAnimJoint332.DEF = "hanim_r_cuneonavicular_1";
HAnimJoint332.center = new SFVec3f(new float[0,1,0]);
HAnimJoint332.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint332.llimit = new MFFloat(new float[0,0,0]);
let Shape333 = browser.currentScene.createNode("Shape");
let LineSet334 = browser.currentScene.createNode("LineSet");
LineSet334.vertexCount = new MFInt32(new int[1]);
let Coordinate335 = browser.currentScene.createNode("Coordinate");
Coordinate335.point = new MFVec3f(new float[0,1,0]);
LineSet334.coord = Coordinate335;

//from r_cuneonavicular_1 to r_tarsometatarsal_1
let ColorRGBA336 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA336.USE = "HAnimSegmentLineColorRGBA";
LineSet334.color = ColorRGBA336;

Shape333.geometry = LineSet334;

HAnimJoint332.shape = Shape333;

let HAnimJoint337 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint337.name = "r_tarsometatarsal_1";
HAnimJoint337.DEF = "hanim_r_tarsometatarsal_1";
HAnimJoint337.center = new SFVec3f(new float[0,1,0]);
HAnimJoint337.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint337.llimit = new MFFloat(new float[0,0,0]);
let Shape338 = browser.currentScene.createNode("Shape");
let LineSet339 = browser.currentScene.createNode("LineSet");
LineSet339.vertexCount = new MFInt32(new int[1]);
let Coordinate340 = browser.currentScene.createNode("Coordinate");
Coordinate340.point = new MFVec3f(new float[0,1,0]);
LineSet339.coord = Coordinate340;

//from r_tarsometatarsal_1 to r_metatarsophalangeal_1
let ColorRGBA341 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA341.USE = "HAnimSegmentLineColorRGBA";
LineSet339.color = ColorRGBA341;

Shape338.geometry = LineSet339;

HAnimJoint337.shape = Shape338;

let HAnimSite342 = browser.currentScene.createNode("HAnimSite");
HAnimSite342.name = "r_metatarsal_phalanx_1_pt";
HAnimSite342.DEF = "hanim_r_metatarsal_phalanx_1_pt";
HAnimSite342.translation = new SFVec3f(new float[0,1,0]);
let TouchSensor343 = browser.currentScene.createNode("TouchSensor");
TouchSensor343.description = "HAnimSite r_metatarsal_phalanx_1_pt";
HAnimSite342.children = new MFNode();

HAnimSite342.children[0] = TouchSensor343;

let Shape344 = browser.currentScene.createNode("Shape");
Shape344.USE = "HAnimSiteShape";
HAnimSite342.children[1] = Shape344;

HAnimJoint337.hAnimSite = new undefined();

HAnimJoint337.hAnimSite[0] = HAnimSite342;

let HAnimJoint345 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint345.name = "r_metatarsophalangeal_1";
HAnimJoint345.DEF = "hanim_r_metatarsophalangeal_1";
HAnimJoint345.center = new SFVec3f(new float[0,1,0]);
HAnimJoint345.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint345.llimit = new MFFloat(new float[0,0,0]);
let Shape346 = browser.currentScene.createNode("Shape");
let LineSet347 = browser.currentScene.createNode("LineSet");
LineSet347.vertexCount = new MFInt32(new int[1]);
let Coordinate348 = browser.currentScene.createNode("Coordinate");
Coordinate348.point = new MFVec3f(new float[0,1,0]);
LineSet347.coord = Coordinate348;

//from r_metatarsophalangeal_1 to r_tarsal_interphalangeal_1
let ColorRGBA349 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA349.USE = "HAnimSegmentLineColorRGBA";
LineSet347.color = ColorRGBA349;

Shape346.geometry = LineSet347;

HAnimJoint345.shape = Shape346;

let HAnimSite350 = browser.currentScene.createNode("HAnimSite");
HAnimSite350.name = "r_tarsal_distal_phalanx_1_tip";
HAnimSite350.DEF = "hanim_r_tarsal_distal_phalanx_1_tip";
HAnimSite350.translation = new SFVec3f(new float[0,1,0]);
let TouchSensor351 = browser.currentScene.createNode("TouchSensor");
TouchSensor351.description = "HAnimSite r_tarsal_distal_phalanx_1_tip";
HAnimSite350.children = new MFNode();

HAnimSite350.children[0] = TouchSensor351;

let Shape352 = browser.currentScene.createNode("Shape");
Shape352.USE = "HAnimSiteShape";
HAnimSite350.children[1] = Shape352;

HAnimJoint345.hAnimSite = new undefined();

HAnimJoint345.hAnimSite[0] = HAnimSite350;

let HAnimJoint353 = browser.currentScene.createNode("HAnimJoint");
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

let HAnimJoint354 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint354.name = "r_cuneonavicular_2";
HAnimJoint354.DEF = "hanim_r_cuneonavicular_2";
HAnimJoint354.center = new SFVec3f(new float[0,1,0]);
HAnimJoint354.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint354.llimit = new MFFloat(new float[0,0,0]);
let Shape355 = browser.currentScene.createNode("Shape");
let LineSet356 = browser.currentScene.createNode("LineSet");
LineSet356.vertexCount = new MFInt32(new int[1]);
let Coordinate357 = browser.currentScene.createNode("Coordinate");
Coordinate357.point = new MFVec3f(new float[0,1,0]);
LineSet356.coord = Coordinate357;

//from r_cuneonavicular_2 to r_tarsometatarsal_2
let ColorRGBA358 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA358.USE = "HAnimSegmentLineColorRGBA";
LineSet356.color = ColorRGBA358;

Shape355.geometry = LineSet356;

HAnimJoint354.shape = Shape355;

let HAnimJoint359 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint359.name = "r_tarsometatarsal_2";
HAnimJoint359.DEF = "hanim_r_tarsometatarsal_2";
HAnimJoint359.center = new SFVec3f(new float[0,1,0]);
HAnimJoint359.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint359.llimit = new MFFloat(new float[0,0,0]);
let Shape360 = browser.currentScene.createNode("Shape");
let LineSet361 = browser.currentScene.createNode("LineSet");
LineSet361.vertexCount = new MFInt32(new int[1]);
let Coordinate362 = browser.currentScene.createNode("Coordinate");
Coordinate362.point = new MFVec3f(new float[0,1,0]);
LineSet361.coord = Coordinate362;

//from r_tarsometatarsal_2 to r_metatarsophalangeal_2
let ColorRGBA363 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA363.USE = "HAnimSegmentLineColorRGBA";
LineSet361.color = ColorRGBA363;

Shape360.geometry = LineSet361;

HAnimJoint359.shape = Shape360;

let HAnimJoint364 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint364.name = "r_metatarsophalangeal_2";
HAnimJoint364.DEF = "hanim_r_metatarsophalangeal_2";
HAnimJoint364.center = new SFVec3f(new float[0,1,0]);
HAnimJoint364.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint364.llimit = new MFFloat(new float[0,0,0]);
let Shape365 = browser.currentScene.createNode("Shape");
let LineSet366 = browser.currentScene.createNode("LineSet");
LineSet366.vertexCount = new MFInt32(new int[1]);
let Coordinate367 = browser.currentScene.createNode("Coordinate");
Coordinate367.point = new MFVec3f(new float[0,1,0]);
LineSet366.coord = Coordinate367;

//from r_metatarsophalangeal_2 to r_tarsal_proximal_interphalangeal_2
let ColorRGBA368 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA368.USE = "HAnimSegmentLineColorRGBA";
LineSet366.color = ColorRGBA368;

Shape365.geometry = LineSet366;

HAnimJoint364.shape = Shape365;

let HAnimJoint369 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint369.name = "r_tarsal_proximal_interphalangeal_2";
HAnimJoint369.DEF = "hanim_r_tarsal_proximal_interphalangeal_2";
HAnimJoint369.center = new SFVec3f(new float[0,1,0]);
HAnimJoint369.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint369.llimit = new MFFloat(new float[0,0,0]);
let Shape370 = browser.currentScene.createNode("Shape");
let LineSet371 = browser.currentScene.createNode("LineSet");
LineSet371.vertexCount = new MFInt32(new int[1]);
let Coordinate372 = browser.currentScene.createNode("Coordinate");
Coordinate372.point = new MFVec3f(new float[0,1,0]);
LineSet371.coord = Coordinate372;

//from r_tarsal_proximal_interphalangeal_2 to r_tarsal_distal_interphalangeal_2
let ColorRGBA373 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA373.USE = "HAnimSegmentLineColorRGBA";
LineSet371.color = ColorRGBA373;

Shape370.geometry = LineSet371;

HAnimJoint369.shape = Shape370;

let HAnimSite374 = browser.currentScene.createNode("HAnimSite");
HAnimSite374.name = "r_tarsal_distal_phalanx_2_tip";
HAnimSite374.DEF = "hanim_r_tarsal_distal_phalanx_2_tip";
HAnimSite374.translation = new SFVec3f(new float[-0.0883,0.0134,0.1383]);
let TouchSensor375 = browser.currentScene.createNode("TouchSensor");
TouchSensor375.description = "HAnimSite r_tarsal_distal_phalanx_2_tip";
HAnimSite374.children = new MFNode();

HAnimSite374.children[0] = TouchSensor375;

let Shape376 = browser.currentScene.createNode("Shape");
Shape376.USE = "HAnimSiteShape";
HAnimSite374.children[1] = Shape376;

HAnimJoint369.hAnimSite = new undefined();

HAnimJoint369.hAnimSite[0] = HAnimSite374;

let HAnimJoint377 = browser.currentScene.createNode("HAnimJoint");
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

let HAnimJoint378 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint378.name = "r_cuneonavicular_3";
HAnimJoint378.DEF = "hanim_r_cuneonavicular_3";
HAnimJoint378.center = new SFVec3f(new float[0,1,0]);
HAnimJoint378.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint378.llimit = new MFFloat(new float[0,0,0]);
let Shape379 = browser.currentScene.createNode("Shape");
let LineSet380 = browser.currentScene.createNode("LineSet");
LineSet380.vertexCount = new MFInt32(new int[1]);
let Coordinate381 = browser.currentScene.createNode("Coordinate");
Coordinate381.point = new MFVec3f(new float[0,1,0]);
LineSet380.coord = Coordinate381;

//from r_cuneonavicular_3 to r_tarsometatarsal_3
let ColorRGBA382 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA382.USE = "HAnimSegmentLineColorRGBA";
LineSet380.color = ColorRGBA382;

Shape379.geometry = LineSet380;

HAnimJoint378.shape = Shape379;

let HAnimJoint383 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint383.name = "r_tarsometatarsal_3";
HAnimJoint383.DEF = "hanim_r_tarsometatarsal_3";
HAnimJoint383.center = new SFVec3f(new float[0,1,0]);
HAnimJoint383.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint383.llimit = new MFFloat(new float[0,0,0]);
let Shape384 = browser.currentScene.createNode("Shape");
let LineSet385 = browser.currentScene.createNode("LineSet");
LineSet385.vertexCount = new MFInt32(new int[1]);
let Coordinate386 = browser.currentScene.createNode("Coordinate");
Coordinate386.point = new MFVec3f(new float[0,1,0]);
LineSet385.coord = Coordinate386;

//from r_tarsometatarsal_3 to r_metatarsophalangeal_3
let ColorRGBA387 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA387.USE = "HAnimSegmentLineColorRGBA";
LineSet385.color = ColorRGBA387;

Shape384.geometry = LineSet385;

HAnimJoint383.shape = Shape384;

let HAnimJoint388 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint388.name = "r_metatarsophalangeal_3";
HAnimJoint388.DEF = "hanim_r_metatarsophalangeal_3";
HAnimJoint388.center = new SFVec3f(new float[0,1,0]);
HAnimJoint388.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint388.llimit = new MFFloat(new float[0,0,0]);
let Shape389 = browser.currentScene.createNode("Shape");
let LineSet390 = browser.currentScene.createNode("LineSet");
LineSet390.vertexCount = new MFInt32(new int[1]);
let Coordinate391 = browser.currentScene.createNode("Coordinate");
Coordinate391.point = new MFVec3f(new float[0,1,0]);
LineSet390.coord = Coordinate391;

//from r_metatarsophalangeal_3 to r_tarsal_proximal_interphalangeal_3
let ColorRGBA392 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA392.USE = "HAnimSegmentLineColorRGBA";
LineSet390.color = ColorRGBA392;

Shape389.geometry = LineSet390;

HAnimJoint388.shape = Shape389;

let HAnimJoint393 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint393.name = "r_tarsal_proximal_interphalangeal_3";
HAnimJoint393.DEF = "hanim_r_tarsal_proximal_interphalangeal_3";
HAnimJoint393.center = new SFVec3f(new float[0,1,0]);
HAnimJoint393.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint393.llimit = new MFFloat(new float[0,0,0]);
let Shape394 = browser.currentScene.createNode("Shape");
let LineSet395 = browser.currentScene.createNode("LineSet");
LineSet395.vertexCount = new MFInt32(new int[1]);
let Coordinate396 = browser.currentScene.createNode("Coordinate");
Coordinate396.point = new MFVec3f(new float[0,1,0]);
LineSet395.coord = Coordinate396;

//from r_tarsal_proximal_interphalangeal_3 to r_tarsal_distal_interphalangeal_3
let ColorRGBA397 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA397.USE = "HAnimSegmentLineColorRGBA";
LineSet395.color = ColorRGBA397;

Shape394.geometry = LineSet395;

HAnimJoint393.shape = Shape394;

let HAnimSite398 = browser.currentScene.createNode("HAnimSite");
HAnimSite398.name = "r_tarsal_distal_phalanx_3_tip";
HAnimSite398.DEF = "hanim_r_tarsal_distal_phalanx_3_tip";
HAnimSite398.translation = new SFVec3f(new float[0,1,0]);
let TouchSensor399 = browser.currentScene.createNode("TouchSensor");
TouchSensor399.description = "HAnimSite r_tarsal_distal_phalanx_3_tip";
HAnimSite398.children = new MFNode();

HAnimSite398.children[0] = TouchSensor399;

let Shape400 = browser.currentScene.createNode("Shape");
Shape400.USE = "HAnimSiteShape";
HAnimSite398.children[1] = Shape400;

HAnimJoint393.hAnimSite = new undefined();

HAnimJoint393.hAnimSite[0] = HAnimSite398;

let HAnimJoint401 = browser.currentScene.createNode("HAnimJoint");
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

let HAnimJoint402 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint402.name = "r_calcaneocuboid";
HAnimJoint402.DEF = "hanim_r_calcaneocuboid";
HAnimJoint402.center = new SFVec3f(new float[0,1,0]);
HAnimJoint402.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint402.llimit = new MFFloat(new float[0,0,0]);
let Shape403 = browser.currentScene.createNode("Shape");
let LineSet404 = browser.currentScene.createNode("LineSet");
LineSet404.vertexCount = new MFInt32(new int[1]);
let Coordinate405 = browser.currentScene.createNode("Coordinate");
Coordinate405.point = new MFVec3f(new float[0,1,0]);
LineSet404.coord = Coordinate405;

//from r_calcaneocuboid to r_transversetarsal
let ColorRGBA406 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA406.USE = "HAnimSegmentLineColorRGBA";
LineSet404.color = ColorRGBA406;

Shape403.geometry = LineSet404;

HAnimJoint402.shape = Shape403;

let HAnimJoint407 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint407.name = "r_transversetarsal";
HAnimJoint407.DEF = "hanim_r_transversetarsal";
HAnimJoint407.center = new SFVec3f(new float[0,1,0]);
HAnimJoint407.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint407.llimit = new MFFloat(new float[0,0,0]);
let Shape408 = browser.currentScene.createNode("Shape");
let LineSet409 = browser.currentScene.createNode("LineSet");
LineSet409.vertexCount = new MFInt32(new int[1]);
let Coordinate410 = browser.currentScene.createNode("Coordinate");
Coordinate410.point = new MFVec3f(new float[0,1,0]);
LineSet409.coord = Coordinate410;

//from r_transversetarsal to r_tarsometatarsal_4
let ColorRGBA411 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA411.USE = "HAnimSegmentLineColorRGBA";
LineSet409.color = ColorRGBA411;

Shape408.geometry = LineSet409;

HAnimJoint407.shape = Shape408;

let Shape412 = browser.currentScene.createNode("Shape");
let LineSet413 = browser.currentScene.createNode("LineSet");
LineSet413.vertexCount = new MFInt32(new int[1]);
let Coordinate414 = browser.currentScene.createNode("Coordinate");
Coordinate414.point = new MFVec3f(new float[0,1,0]);
LineSet413.coord = Coordinate414;

//from r_transversetarsal to r_tarsometatarsal_5
let ColorRGBA415 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA415.USE = "HAnimSegmentLineColorRGBA";
LineSet413.color = ColorRGBA415;

Shape412.geometry = LineSet413;

HAnimJoint407.shape = new undefined();

HAnimJoint407.shape[0] = Shape412;

let HAnimJoint416 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint416.name = "r_tarsometatarsal_4";
HAnimJoint416.DEF = "hanim_r_tarsometatarsal_4";
HAnimJoint416.center = new SFVec3f(new float[0,1,0]);
HAnimJoint416.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint416.llimit = new MFFloat(new float[0,0,0]);
let Shape417 = browser.currentScene.createNode("Shape");
let LineSet418 = browser.currentScene.createNode("LineSet");
LineSet418.vertexCount = new MFInt32(new int[1]);
let Coordinate419 = browser.currentScene.createNode("Coordinate");
Coordinate419.point = new MFVec3f(new float[0,1,0]);
LineSet418.coord = Coordinate419;

//from r_tarsometatarsal_4 to r_metatarsophalangeal_4
let ColorRGBA420 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA420.USE = "HAnimSegmentLineColorRGBA";
LineSet418.color = ColorRGBA420;

Shape417.geometry = LineSet418;

HAnimJoint416.shape = Shape417;

let HAnimJoint421 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint421.name = "r_metatarsophalangeal_4";
HAnimJoint421.DEF = "hanim_r_metatarsophalangeal_4";
HAnimJoint421.center = new SFVec3f(new float[0,1,0]);
HAnimJoint421.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint421.llimit = new MFFloat(new float[0,0,0]);
let Shape422 = browser.currentScene.createNode("Shape");
let LineSet423 = browser.currentScene.createNode("LineSet");
LineSet423.vertexCount = new MFInt32(new int[1]);
let Coordinate424 = browser.currentScene.createNode("Coordinate");
Coordinate424.point = new MFVec3f(new float[0,1,0]);
LineSet423.coord = Coordinate424;

//from r_metatarsophalangeal_4 to r_tarsal_proximal_interphalangeal_4
let ColorRGBA425 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA425.USE = "HAnimSegmentLineColorRGBA";
LineSet423.color = ColorRGBA425;

Shape422.geometry = LineSet423;

HAnimJoint421.shape = Shape422;

let HAnimJoint426 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint426.name = "r_tarsal_proximal_interphalangeal_4";
HAnimJoint426.DEF = "hanim_r_tarsal_proximal_interphalangeal_4";
HAnimJoint426.center = new SFVec3f(new float[0,1,0]);
HAnimJoint426.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint426.llimit = new MFFloat(new float[0,0,0]);
let Shape427 = browser.currentScene.createNode("Shape");
let LineSet428 = browser.currentScene.createNode("LineSet");
LineSet428.vertexCount = new MFInt32(new int[1]);
let Coordinate429 = browser.currentScene.createNode("Coordinate");
Coordinate429.point = new MFVec3f(new float[0,1,0]);
LineSet428.coord = Coordinate429;

//from r_tarsal_proximal_interphalangeal_4 to r_tarsal_distal_interphalangeal_4
let ColorRGBA430 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA430.USE = "HAnimSegmentLineColorRGBA";
LineSet428.color = ColorRGBA430;

Shape427.geometry = LineSet428;

HAnimJoint426.shape = Shape427;

let HAnimSite431 = browser.currentScene.createNode("HAnimSite");
HAnimSite431.name = "r_tarsal_distal_phalanx_4_tip";
HAnimSite431.DEF = "hanim_r_tarsal_distal_phalanx_4_tip";
HAnimSite431.translation = new SFVec3f(new float[0,1,0]);
let TouchSensor432 = browser.currentScene.createNode("TouchSensor");
TouchSensor432.description = "HAnimSite r_tarsal_distal_phalanx_4_tip";
HAnimSite431.children = new MFNode();

HAnimSite431.children[0] = TouchSensor432;

let Shape433 = browser.currentScene.createNode("Shape");
Shape433.USE = "HAnimSiteShape";
HAnimSite431.children[1] = Shape433;

HAnimJoint426.hAnimSite = new undefined();

HAnimJoint426.hAnimSite[0] = HAnimSite431;

let HAnimJoint434 = browser.currentScene.createNode("HAnimJoint");
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

let HAnimJoint435 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint435.name = "r_tarsometatarsal_5";
HAnimJoint435.DEF = "hanim_r_tarsometatarsal_5";
HAnimJoint435.center = new SFVec3f(new float[0,1,0]);
HAnimJoint435.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint435.llimit = new MFFloat(new float[0,0,0]);
let Shape436 = browser.currentScene.createNode("Shape");
let LineSet437 = browser.currentScene.createNode("LineSet");
LineSet437.vertexCount = new MFInt32(new int[1]);
let Coordinate438 = browser.currentScene.createNode("Coordinate");
Coordinate438.point = new MFVec3f(new float[0,1,0]);
LineSet437.coord = Coordinate438;

//from r_tarsometatarsal_5 to r_metatarsophalangeal_5
let ColorRGBA439 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA439.USE = "HAnimSegmentLineColorRGBA";
LineSet437.color = ColorRGBA439;

Shape436.geometry = LineSet437;

HAnimJoint435.shape = Shape436;

let HAnimSite440 = browser.currentScene.createNode("HAnimSite");
HAnimSite440.name = "r_metatarsal_phalanx_5_pt";
HAnimSite440.DEF = "hanim_r_metatarsal_phalanx_5_pt";
HAnimSite440.translation = new SFVec3f(new float[0,1,0]);
let TouchSensor441 = browser.currentScene.createNode("TouchSensor");
TouchSensor441.description = "HAnimSite r_metatarsal_phalanx_5_pt";
HAnimSite440.children = new MFNode();

HAnimSite440.children[0] = TouchSensor441;

let Shape442 = browser.currentScene.createNode("Shape");
Shape442.USE = "HAnimSiteShape";
HAnimSite440.children[1] = Shape442;

HAnimJoint435.hAnimSite = new undefined();

HAnimJoint435.hAnimSite[0] = HAnimSite440;

let HAnimJoint443 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint443.name = "r_metatarsophalangeal_5";
HAnimJoint443.DEF = "hanim_r_metatarsophalangeal_5";
HAnimJoint443.center = new SFVec3f(new float[0,1,0]);
HAnimJoint443.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint443.llimit = new MFFloat(new float[0,0,0]);
let Shape444 = browser.currentScene.createNode("Shape");
let LineSet445 = browser.currentScene.createNode("LineSet");
LineSet445.vertexCount = new MFInt32(new int[1]);
let Coordinate446 = browser.currentScene.createNode("Coordinate");
Coordinate446.point = new MFVec3f(new float[0,1,0]);
LineSet445.coord = Coordinate446;

//from r_metatarsophalangeal_5 to r_tarsal_proximal_interphalangeal_5
let ColorRGBA447 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA447.USE = "HAnimSegmentLineColorRGBA";
LineSet445.color = ColorRGBA447;

Shape444.geometry = LineSet445;

HAnimJoint443.shape = Shape444;

let HAnimJoint448 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint448.name = "r_tarsal_proximal_interphalangeal_5";
HAnimJoint448.DEF = "hanim_r_tarsal_proximal_interphalangeal_5";
HAnimJoint448.center = new SFVec3f(new float[0,1,0]);
HAnimJoint448.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint448.llimit = new MFFloat(new float[0,0,0]);
let Shape449 = browser.currentScene.createNode("Shape");
let LineSet450 = browser.currentScene.createNode("LineSet");
LineSet450.vertexCount = new MFInt32(new int[1]);
let Coordinate451 = browser.currentScene.createNode("Coordinate");
Coordinate451.point = new MFVec3f(new float[0,1,0]);
LineSet450.coord = Coordinate451;

//from r_tarsal_proximal_interphalangeal_5 to r_tarsal_distal_interphalangeal_5
let ColorRGBA452 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA452.USE = "HAnimSegmentLineColorRGBA";
LineSet450.color = ColorRGBA452;

Shape449.geometry = LineSet450;

HAnimJoint448.shape = Shape449;

let HAnimSite453 = browser.currentScene.createNode("HAnimSite");
HAnimSite453.name = "r_tarsal_distal_phalanx_5_tip";
HAnimSite453.DEF = "hanim_r_tarsal_distal_phalanx_5_tip";
HAnimSite453.translation = new SFVec3f(new float[0,1,0]);
let TouchSensor454 = browser.currentScene.createNode("TouchSensor");
TouchSensor454.description = "HAnimSite r_tarsal_distal_phalanx_5_tip";
HAnimSite453.children = new MFNode();

HAnimSite453.children[0] = TouchSensor454;

let Shape455 = browser.currentScene.createNode("Shape");
Shape455.USE = "HAnimSiteShape";
HAnimSite453.children[1] = Shape455;

HAnimJoint448.hAnimSite = new undefined();

HAnimJoint448.hAnimSite[0] = HAnimSite453;

let HAnimJoint456 = browser.currentScene.createNode("HAnimJoint");
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

let HAnimJoint457 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint457.name = "vl5";
HAnimJoint457.DEF = "hanim_vl5";
HAnimJoint457.center = new SFVec3f(new float[0.0028,1.0568,-0.0776]);
HAnimJoint457.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint457.llimit = new MFFloat(new float[0,0,0]);
let Shape458 = browser.currentScene.createNode("Shape");
let LineSet459 = browser.currentScene.createNode("LineSet");
LineSet459.vertexCount = new MFInt32(new int[2]);
let Coordinate460 = browser.currentScene.createNode("Coordinate");
Coordinate460.point = new MFVec3f(new float[0.0028,1.0568,-0.0776,0.0035,1.0925,-0.0787]);
LineSet459.coord = Coordinate460;

//from vl5 to vl4
let ColorRGBA461 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA461.USE = "HAnimSegmentLineColorRGBA";
LineSet459.color = ColorRGBA461;

Shape458.geometry = LineSet459;

HAnimJoint457.shape = Shape458;

let HAnimJoint462 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint462.name = "vl4";
HAnimJoint462.DEF = "hanim_vl4";
HAnimJoint462.center = new SFVec3f(new float[0.0035,1.0925,-0.0787]);
HAnimJoint462.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint462.llimit = new MFFloat(new float[0,0,0]);
let Shape463 = browser.currentScene.createNode("Shape");
let LineSet464 = browser.currentScene.createNode("LineSet");
LineSet464.vertexCount = new MFInt32(new int[2]);
let Coordinate465 = browser.currentScene.createNode("Coordinate");
Coordinate465.point = new MFVec3f(new float[0.0035,1.0925,-0.0787,0.0041,1.1276,-0.0796]);
LineSet464.coord = Coordinate465;

//from vl4 to vl3
let ColorRGBA466 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA466.USE = "HAnimSegmentLineColorRGBA";
LineSet464.color = ColorRGBA466;

Shape463.geometry = LineSet464;

HAnimJoint462.shape = Shape463;

let HAnimJoint467 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint467.name = "vl3";
HAnimJoint467.DEF = "hanim_vl3";
HAnimJoint467.center = new SFVec3f(new float[0.0041,1.1276,-0.0796]);
HAnimJoint467.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint467.llimit = new MFFloat(new float[0,0,0]);
let Shape468 = browser.currentScene.createNode("Shape");
let LineSet469 = browser.currentScene.createNode("LineSet");
LineSet469.vertexCount = new MFInt32(new int[2]);
let Coordinate470 = browser.currentScene.createNode("Coordinate");
Coordinate470.point = new MFVec3f(new float[0.0041,1.1276,-0.0796,0.0045,1.1546,-0.08]);
LineSet469.coord = Coordinate470;

//from vl3 to vl2
let ColorRGBA471 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA471.USE = "HAnimSegmentLineColorRGBA";
LineSet469.color = ColorRGBA471;

Shape468.geometry = LineSet469;

HAnimJoint467.shape = Shape468;

let HAnimSite472 = browser.currentScene.createNode("HAnimSite");
HAnimSite472.name = "l_rib10_pt";
HAnimSite472.DEF = "hanim_l_rib10_pt";
HAnimSite472.translation = new SFVec3f(new float[0.0871,1.1925,0.0992]);
let TouchSensor473 = browser.currentScene.createNode("TouchSensor");
TouchSensor473.description = "HAnimSite l_rib10_pt";
HAnimSite472.children = new MFNode();

HAnimSite472.children[0] = TouchSensor473;

let Shape474 = browser.currentScene.createNode("Shape");
Shape474.USE = "HAnimSiteShape";
HAnimSite472.children[1] = Shape474;

HAnimJoint467.hAnimSite = new undefined();

HAnimJoint467.hAnimSite[0] = HAnimSite472;

let HAnimSite475 = browser.currentScene.createNode("HAnimSite");
HAnimSite475.name = "r_rib10_pt";
HAnimSite475.DEF = "hanim_r_rib10_pt";
HAnimSite475.translation = new SFVec3f(new float[-0.0711,1.1941,0.1016]);
let TouchSensor476 = browser.currentScene.createNode("TouchSensor");
TouchSensor476.description = "HAnimSite r_rib10_pt";
HAnimSite475.children = new MFNode();

HAnimSite475.children[0] = TouchSensor476;

let Shape477 = browser.currentScene.createNode("Shape");
Shape477.USE = "HAnimSiteShape";
HAnimSite475.children[1] = Shape477;

HAnimJoint467.hAnimSite[1] = HAnimSite475;

let HAnimSite478 = browser.currentScene.createNode("HAnimSite");
HAnimSite478.name = "spine_2_middle_back_pt";
HAnimSite478.DEF = "hanim_spine_2_middle_back_pt";
HAnimSite478.translation = new SFVec3f(new float[0,1,0]);
let TouchSensor479 = browser.currentScene.createNode("TouchSensor");
TouchSensor479.description = "HAnimSite spine_2_middle_back_pt";
HAnimSite478.children = new MFNode();

HAnimSite478.children[0] = TouchSensor479;

let Shape480 = browser.currentScene.createNode("Shape");
Shape480.USE = "HAnimSiteShape";
HAnimSite478.children[1] = Shape480;

HAnimJoint467.hAnimSite[2] = HAnimSite478;

let HAnimJoint481 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint481.name = "vl2";
HAnimJoint481.DEF = "hanim_vl2";
HAnimJoint481.center = new SFVec3f(new float[0.0045,1.1546,-0.08]);
HAnimJoint481.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint481.llimit = new MFFloat(new float[0,0,0]);
let Shape482 = browser.currentScene.createNode("Shape");
let LineSet483 = browser.currentScene.createNode("LineSet");
LineSet483.vertexCount = new MFInt32(new int[2]);
let Coordinate484 = browser.currentScene.createNode("Coordinate");
Coordinate484.point = new MFVec3f(new float[0.0045,1.1546,-0.08,0.0048,1.1912,-0.0805]);
LineSet483.coord = Coordinate484;

//from vl2 to vl1
let ColorRGBA485 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA485.USE = "HAnimSegmentLineColorRGBA";
LineSet483.color = ColorRGBA485;

Shape482.geometry = LineSet483;

HAnimJoint481.shape = Shape482;

let HAnimJoint486 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint486.name = "vl1";
HAnimJoint486.DEF = "hanim_vl1";
HAnimJoint486.center = new SFVec3f(new float[0.0048,1.1912,-0.0805]);
HAnimJoint486.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint486.llimit = new MFFloat(new float[0,0,0]);
let Shape487 = browser.currentScene.createNode("Shape");
let LineSet488 = browser.currentScene.createNode("LineSet");
LineSet488.vertexCount = new MFInt32(new int[2]);
let Coordinate489 = browser.currentScene.createNode("Coordinate");
Coordinate489.point = new MFVec3f(new float[0.0048,1.1912,-0.0805,0.0051,1.2278,-0.0808]);
LineSet488.coord = Coordinate489;

//from vl1 to vt12
let ColorRGBA490 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA490.USE = "HAnimSegmentLineColorRGBA";
LineSet488.color = ColorRGBA490;

Shape487.geometry = LineSet488;

HAnimJoint486.shape = Shape487;

let HAnimJoint491 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint491.name = "vt12";
HAnimJoint491.DEF = "hanim_vt12";
HAnimJoint491.center = new SFVec3f(new float[0.0051,1.2278,-0.0808]);
HAnimJoint491.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint491.llimit = new MFFloat(new float[0,0,0]);
let Shape492 = browser.currentScene.createNode("Shape");
let LineSet493 = browser.currentScene.createNode("LineSet");
LineSet493.vertexCount = new MFInt32(new int[2]);
let Coordinate494 = browser.currentScene.createNode("Coordinate");
Coordinate494.point = new MFVec3f(new float[0.0051,1.2278,-0.0808,0.0053,1.2679,-0.081]);
LineSet493.coord = Coordinate494;

//from vt12 to vt11
let ColorRGBA495 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA495.USE = "HAnimSegmentLineColorRGBA";
LineSet493.color = ColorRGBA495;

Shape492.geometry = LineSet493;

HAnimJoint491.shape = Shape492;

let HAnimJoint496 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint496.name = "vt11";
HAnimJoint496.DEF = "hanim_vt11";
HAnimJoint496.center = new SFVec3f(new float[0.0053,1.2679,-0.081]);
HAnimJoint496.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint496.llimit = new MFFloat(new float[0,0,0]);
let Shape497 = browser.currentScene.createNode("Shape");
let LineSet498 = browser.currentScene.createNode("LineSet");
LineSet498.vertexCount = new MFInt32(new int[2]);
let Coordinate499 = browser.currentScene.createNode("Coordinate");
Coordinate499.point = new MFVec3f(new float[0.0053,1.2679,-0.081,0.0056,1.2848,-0.0822]);
LineSet498.coord = Coordinate499;

//from vt11 to vt10
let ColorRGBA500 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA500.USE = "HAnimSegmentLineColorRGBA";
LineSet498.color = ColorRGBA500;

Shape497.geometry = LineSet498;

HAnimJoint496.shape = Shape497;

let HAnimSite501 = browser.currentScene.createNode("HAnimSite");
HAnimSite501.name = "substernale_pt";
HAnimSite501.DEF = "hanim_substernale_pt";
HAnimSite501.translation = new SFVec3f(new float[0.0085,1.2995,0.1147]);
let TouchSensor502 = browser.currentScene.createNode("TouchSensor");
TouchSensor502.description = "HAnimSite substernale_pt";
HAnimSite501.children = new MFNode();

HAnimSite501.children[0] = TouchSensor502;

let Shape503 = browser.currentScene.createNode("Shape");
Shape503.USE = "HAnimSiteShape";
HAnimSite501.children[1] = Shape503;

HAnimJoint496.hAnimSite = new undefined();

HAnimJoint496.hAnimSite[0] = HAnimSite501;

let HAnimJoint504 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint504.name = "vt10";
HAnimJoint504.DEF = "hanim_vt10";
HAnimJoint504.center = new SFVec3f(new float[0.0056,1.2848,-0.0822]);
HAnimJoint504.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint504.llimit = new MFFloat(new float[0,0,0]);
let Shape505 = browser.currentScene.createNode("Shape");
let LineSet506 = browser.currentScene.createNode("LineSet");
LineSet506.vertexCount = new MFInt32(new int[2]);
let Coordinate507 = browser.currentScene.createNode("Coordinate");
Coordinate507.point = new MFVec3f(new float[0.0056,1.2848,-0.0822,0.0057,1.3126,-0.0838]);
LineSet506.coord = Coordinate507;

//from vt10 to vt9
let ColorRGBA508 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA508.USE = "HAnimSegmentLineColorRGBA";
LineSet506.color = ColorRGBA508;

Shape505.geometry = LineSet506;

HAnimJoint504.shape = Shape505;

let HAnimSite509 = browser.currentScene.createNode("HAnimSite");
HAnimSite509.name = "l_thelion_pt";
HAnimSite509.DEF = "hanim_l_thelion_pt";
HAnimSite509.translation = new SFVec3f(new float[0.0918,1.3382,0.1192]);
let TouchSensor510 = browser.currentScene.createNode("TouchSensor");
TouchSensor510.description = "HAnimSite l_thelion_pt";
HAnimSite509.children = new MFNode();

HAnimSite509.children[0] = TouchSensor510;

let Shape511 = browser.currentScene.createNode("Shape");
Shape511.USE = "HAnimSiteShape";
HAnimSite509.children[1] = Shape511;

HAnimJoint504.hAnimSite = new undefined();

HAnimJoint504.hAnimSite[0] = HAnimSite509;

let HAnimSite512 = browser.currentScene.createNode("HAnimSite");
HAnimSite512.name = "r_thelion_pt";
HAnimSite512.DEF = "hanim_r_thelion_pt";
HAnimSite512.translation = new SFVec3f(new float[-0.0736,1.3385,0.1217]);
let TouchSensor513 = browser.currentScene.createNode("TouchSensor");
TouchSensor513.description = "HAnimSite r_thelion_pt";
HAnimSite512.children = new MFNode();

HAnimSite512.children[0] = TouchSensor513;

let Shape514 = browser.currentScene.createNode("Shape");
Shape514.USE = "HAnimSiteShape";
HAnimSite512.children[1] = Shape514;

HAnimJoint504.hAnimSite[1] = HAnimSite512;

let HAnimJoint515 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint515.name = "vt9";
HAnimJoint515.DEF = "hanim_vt9";
HAnimJoint515.center = new SFVec3f(new float[0.0057,1.3126,-0.0838]);
HAnimJoint515.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint515.llimit = new MFFloat(new float[0,0,0]);
let Shape516 = browser.currentScene.createNode("Shape");
let LineSet517 = browser.currentScene.createNode("LineSet");
LineSet517.vertexCount = new MFInt32(new int[2]);
let Coordinate518 = browser.currentScene.createNode("Coordinate");
Coordinate518.point = new MFVec3f(new float[0.0057,1.3126,-0.0838,0.0057,1.3382,-0.0845]);
LineSet517.coord = Coordinate518;

//from vt9 to vt8
let ColorRGBA519 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA519.USE = "HAnimSegmentLineColorRGBA";
LineSet517.color = ColorRGBA519;

Shape516.geometry = LineSet517;

HAnimJoint515.shape = Shape516;

let HAnimJoint520 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint520.name = "vt8";
HAnimJoint520.DEF = "hanim_vt8";
HAnimJoint520.center = new SFVec3f(new float[0.0057,1.3382,-0.0845]);
HAnimJoint520.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint520.llimit = new MFFloat(new float[0,0,0]);
let Shape521 = browser.currentScene.createNode("Shape");
let LineSet522 = browser.currentScene.createNode("LineSet");
LineSet522.vertexCount = new MFInt32(new int[2]);
let Coordinate523 = browser.currentScene.createNode("Coordinate");
Coordinate523.point = new MFVec3f(new float[0.0057,1.3382,-0.0845,0.0058,1.3625,-0.0833]);
LineSet522.coord = Coordinate523;

//from vt8 to vt7
let ColorRGBA524 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA524.USE = "HAnimSegmentLineColorRGBA";
LineSet522.color = ColorRGBA524;

Shape521.geometry = LineSet522;

HAnimJoint520.shape = Shape521;

let HAnimJoint525 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint525.name = "vt7";
HAnimJoint525.DEF = "hanim_vt7";
HAnimJoint525.center = new SFVec3f(new float[0.0058,1.3625,-0.0833]);
HAnimJoint525.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint525.llimit = new MFFloat(new float[0,0,0]);
let Shape526 = browser.currentScene.createNode("Shape");
let LineSet527 = browser.currentScene.createNode("LineSet");
LineSet527.vertexCount = new MFInt32(new int[2]);
let Coordinate528 = browser.currentScene.createNode("Coordinate");
Coordinate528.point = new MFVec3f(new float[0.0058,1.3625,-0.0833,0.0059,1.3866,-0.08]);
LineSet527.coord = Coordinate528;

//from vt7 to vt6
let ColorRGBA529 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA529.USE = "HAnimSegmentLineColorRGBA";
LineSet527.color = ColorRGBA529;

Shape526.geometry = LineSet527;

HAnimJoint525.shape = Shape526;

let HAnimSite530 = browser.currentScene.createNode("HAnimSite");
HAnimSite530.name = "l_chest_midsagittal_plane_pt";
HAnimSite530.DEF = "hanim_l_chest_midsagittal_plane_pt";
HAnimSite530.translation = new SFVec3f(new float[0,1,0]);
let TouchSensor531 = browser.currentScene.createNode("TouchSensor");
TouchSensor531.description = "HAnimSite l_chest_midsagittal_plane_pt";
HAnimSite530.children = new MFNode();

HAnimSite530.children[0] = TouchSensor531;

let Shape532 = browser.currentScene.createNode("Shape");
Shape532.USE = "HAnimSiteShape";
HAnimSite530.children[1] = Shape532;

HAnimJoint525.hAnimSite = new undefined();

HAnimJoint525.hAnimSite[0] = HAnimSite530;

let HAnimSite533 = browser.currentScene.createNode("HAnimSite");
HAnimSite533.name = "mesosternale_pt";
HAnimSite533.DEF = "hanim_mesosternale_pt";
HAnimSite533.translation = new SFVec3f(new float[0,1,0]);
let TouchSensor534 = browser.currentScene.createNode("TouchSensor");
TouchSensor534.description = "HAnimSite mesosternale_pt";
HAnimSite533.children = new MFNode();

HAnimSite533.children[0] = TouchSensor534;

let Shape535 = browser.currentScene.createNode("Shape");
Shape535.USE = "HAnimSiteShape";
HAnimSite533.children[1] = Shape535;

HAnimJoint525.hAnimSite[1] = HAnimSite533;

let HAnimSite536 = browser.currentScene.createNode("HAnimSite");
HAnimSite536.name = "r_chest_midsagittal_plane_pt";
HAnimSite536.DEF = "hanim_r_chest_midsagittal_plane_pt";
HAnimSite536.translation = new SFVec3f(new float[0,1,0]);
let TouchSensor537 = browser.currentScene.createNode("TouchSensor");
TouchSensor537.description = "HAnimSite r_chest_midsagittal_plane_pt";
HAnimSite536.children = new MFNode();

HAnimSite536.children[0] = TouchSensor537;

let Shape538 = browser.currentScene.createNode("Shape");
Shape538.USE = "HAnimSiteShape";
HAnimSite536.children[1] = Shape538;

HAnimJoint525.hAnimSite[2] = HAnimSite536;

let HAnimSite539 = browser.currentScene.createNode("HAnimSite");
HAnimSite539.name = "rear_center_midsagittal_plane_pt";
HAnimSite539.DEF = "hanim_rear_center_midsagittal_plane_pt";
HAnimSite539.translation = new SFVec3f(new float[0,1,0]);
let TouchSensor540 = browser.currentScene.createNode("TouchSensor");
TouchSensor540.description = "HAnimSite rear_center_midsagittal_plane_pt";
HAnimSite539.children = new MFNode();

HAnimSite539.children[0] = TouchSensor540;

let Shape541 = browser.currentScene.createNode("Shape");
Shape541.USE = "HAnimSiteShape";
HAnimSite539.children[1] = Shape541;

HAnimJoint525.hAnimSite[3] = HAnimSite539;

let HAnimJoint542 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint542.name = "vt6";
HAnimJoint542.DEF = "hanim_vt6";
HAnimJoint542.center = new SFVec3f(new float[0.0059,1.3866,-0.08]);
HAnimJoint542.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint542.llimit = new MFFloat(new float[0,0,0]);
let Shape543 = browser.currentScene.createNode("Shape");
let LineSet544 = browser.currentScene.createNode("LineSet");
LineSet544.vertexCount = new MFInt32(new int[2]);
let Coordinate545 = browser.currentScene.createNode("Coordinate");
Coordinate545.point = new MFVec3f(new float[0.0059,1.3866,-0.08,0.006,1.4102,-0.0745]);
LineSet544.coord = Coordinate545;

//from vt6 to vt5
let ColorRGBA546 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA546.USE = "HAnimSegmentLineColorRGBA";
LineSet544.color = ColorRGBA546;

Shape543.geometry = LineSet544;

HAnimJoint542.shape = Shape543;

let HAnimSite547 = browser.currentScene.createNode("HAnimSite");
HAnimSite547.name = "spine_1_middle_back_pt";
HAnimSite547.DEF = "hanim_spine_1_middle_back_pt";
HAnimSite547.translation = new SFVec3f(new float[0,1,0]);
let TouchSensor548 = browser.currentScene.createNode("TouchSensor");
TouchSensor548.description = "HAnimSite spine_1_middle_back_pt";
HAnimSite547.children = new MFNode();

HAnimSite547.children[0] = TouchSensor548;

let Shape549 = browser.currentScene.createNode("Shape");
Shape549.USE = "HAnimSiteShape";
HAnimSite547.children[1] = Shape549;

HAnimJoint542.hAnimSite = new undefined();

HAnimJoint542.hAnimSite[0] = HAnimSite547;

let HAnimJoint550 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint550.name = "vt5";
HAnimJoint550.DEF = "hanim_vt5";
HAnimJoint550.center = new SFVec3f(new float[0.006,1.4102,-0.0745]);
HAnimJoint550.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint550.llimit = new MFFloat(new float[0,0,0]);
let Shape551 = browser.currentScene.createNode("Shape");
let LineSet552 = browser.currentScene.createNode("LineSet");
LineSet552.vertexCount = new MFInt32(new int[2]);
let Coordinate553 = browser.currentScene.createNode("Coordinate");
Coordinate553.point = new MFVec3f(new float[0.006,1.4102,-0.0745,0.0061,1.432,-0.0675]);
LineSet552.coord = Coordinate553;

//from vt5 to vt4
let ColorRGBA554 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA554.USE = "HAnimSegmentLineColorRGBA";
LineSet552.color = ColorRGBA554;

Shape551.geometry = LineSet552;

HAnimJoint550.shape = Shape551;

let HAnimJoint555 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint555.name = "vt4";
HAnimJoint555.DEF = "hanim_vt4";
HAnimJoint555.center = new SFVec3f(new float[0.0061,1.432,-0.0675]);
HAnimJoint555.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint555.llimit = new MFFloat(new float[0,0,0]);
let Shape556 = browser.currentScene.createNode("Shape");
let LineSet557 = browser.currentScene.createNode("LineSet");
LineSet557.vertexCount = new MFInt32(new int[2]);
let Coordinate558 = browser.currentScene.createNode("Coordinate");
Coordinate558.point = new MFVec3f(new float[0.0061,1.432,-0.0675,0.0062,1.4583,-0.057]);
LineSet557.coord = Coordinate558;

//from vt4 to vt3
let ColorRGBA559 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA559.USE = "HAnimSegmentLineColorRGBA";
LineSet557.color = ColorRGBA559;

Shape556.geometry = LineSet557;

HAnimJoint555.shape = Shape556;

let HAnimJoint560 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint560.name = "vt3";
HAnimJoint560.DEF = "hanim_vt3";
HAnimJoint560.center = new SFVec3f(new float[0.0062,1.4583,-0.057]);
HAnimJoint560.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint560.llimit = new MFFloat(new float[0,0,0]);
let Shape561 = browser.currentScene.createNode("Shape");
let LineSet562 = browser.currentScene.createNode("LineSet");
LineSet562.vertexCount = new MFInt32(new int[2]);
let Coordinate563 = browser.currentScene.createNode("Coordinate");
Coordinate563.point = new MFVec3f(new float[0.0062,1.4583,-0.057,0.0063,1.4761,-0.0484]);
LineSet562.coord = Coordinate563;

//from vt3 to vt2
let ColorRGBA564 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA564.USE = "HAnimSegmentLineColorRGBA";
LineSet562.color = ColorRGBA564;

Shape561.geometry = LineSet562;

HAnimJoint560.shape = Shape561;

let HAnimJoint565 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint565.name = "vt2";
HAnimJoint565.DEF = "hanim_vt2";
HAnimJoint565.center = new SFVec3f(new float[0.0063,1.4761,-0.0484]);
HAnimJoint565.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint565.llimit = new MFFloat(new float[0,0,0]);
let Shape566 = browser.currentScene.createNode("Shape");
let LineSet567 = browser.currentScene.createNode("LineSet");
LineSet567.vertexCount = new MFInt32(new int[2]);
let Coordinate568 = browser.currentScene.createNode("Coordinate");
Coordinate568.point = new MFVec3f(new float[0.0063,1.4761,-0.0484,0.0065,1.4951,-0.0387]);
LineSet567.coord = Coordinate568;

//from vt2 to vt1
let ColorRGBA569 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA569.USE = "HAnimSegmentLineColorRGBA";
LineSet567.color = ColorRGBA569;

Shape566.geometry = LineSet567;

HAnimJoint565.shape = Shape566;

let HAnimSite570 = browser.currentScene.createNode("HAnimSite");
HAnimSite570.name = "cervicale_pt";
HAnimSite570.DEF = "hanim_cervicale_pt";
HAnimSite570.translation = new SFVec3f(new float[0.0064,1.52,-0.0815]);
let TouchSensor571 = browser.currentScene.createNode("TouchSensor");
TouchSensor571.description = "HAnimSite cervicale_pt";
HAnimSite570.children = new MFNode();

HAnimSite570.children[0] = TouchSensor571;

let Shape572 = browser.currentScene.createNode("Shape");
Shape572.USE = "HAnimSiteShape";
HAnimSite570.children[1] = Shape572;

HAnimJoint565.hAnimSite = new undefined();

HAnimJoint565.hAnimSite[0] = HAnimSite570;

let HAnimSite573 = browser.currentScene.createNode("HAnimSite");
HAnimSite573.name = "suprasternale_pt";
HAnimSite573.DEF = "hanim_suprasternale_pt";
HAnimSite573.translation = new SFVec3f(new float[0.0084,1.4714,0.0551]);
let TouchSensor574 = browser.currentScene.createNode("TouchSensor");
TouchSensor574.description = "HAnimSite suprasternale_pt";
HAnimSite573.children = new MFNode();

HAnimSite573.children[0] = TouchSensor574;

let Shape575 = browser.currentScene.createNode("Shape");
Shape575.USE = "HAnimSiteShape";
HAnimSite573.children[1] = Shape575;

HAnimJoint565.hAnimSite[1] = HAnimSite573;

let HAnimJoint576 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint576.name = "vt1";
HAnimJoint576.DEF = "hanim_vt1";
HAnimJoint576.center = new SFVec3f(new float[0.0065,1.4951,-0.0387]);
HAnimJoint576.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint576.llimit = new MFFloat(new float[0,0,0]);
let Shape577 = browser.currentScene.createNode("Shape");
let LineSet578 = browser.currentScene.createNode("LineSet");
LineSet578.vertexCount = new MFInt32(new int[2]);
let Coordinate579 = browser.currentScene.createNode("Coordinate");
Coordinate579.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,0.0066,1.5132,-0.0301]);
LineSet578.coord = Coordinate579;

//from vt1 to vc7
let ColorRGBA580 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA580.USE = "HAnimSegmentLineColorRGBA";
LineSet578.color = ColorRGBA580;

Shape577.geometry = LineSet578;

HAnimJoint576.shape = Shape577;

let HAnimSite581 = browser.currentScene.createNode("HAnimSite");
HAnimSite581.name = "l_neck_base_pt";
HAnimSite581.DEF = "hanim_l_neck_base_pt";
HAnimSite581.translation = new SFVec3f(new float[0.0646,1.5141,-0.038]);
let TouchSensor582 = browser.currentScene.createNode("TouchSensor");
TouchSensor582.description = "HAnimSite l_neck_base_pt";
HAnimSite581.children = new MFNode();

HAnimSite581.children[0] = TouchSensor582;

let Shape583 = browser.currentScene.createNode("Shape");
Shape583.USE = "HAnimSiteShape";
HAnimSite581.children[1] = Shape583;

HAnimJoint576.hAnimSite = new undefined();

HAnimJoint576.hAnimSite[0] = HAnimSite581;

let HAnimSite584 = browser.currentScene.createNode("HAnimSite");
HAnimSite584.name = "r_neck_base_pt";
HAnimSite584.DEF = "hanim_r_neck_base_pt";
HAnimSite584.translation = new SFVec3f(new float[-0.0419,1.5149,-0.022]);
let TouchSensor585 = browser.currentScene.createNode("TouchSensor");
TouchSensor585.description = "HAnimSite r_neck_base_pt";
HAnimSite584.children = new MFNode();

HAnimSite584.children[0] = TouchSensor585;

let Shape586 = browser.currentScene.createNode("Shape");
Shape586.USE = "HAnimSiteShape";
HAnimSite584.children[1] = Shape586;

HAnimJoint576.hAnimSite[1] = HAnimSite584;

let Shape587 = browser.currentScene.createNode("Shape");
let LineSet588 = browser.currentScene.createNode("LineSet");
LineSet588.vertexCount = new MFInt32(new int[2]);
let Coordinate589 = browser.currentScene.createNode("Coordinate");
Coordinate589.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,0.082,1.4488,-0.0353]);
LineSet588.coord = Coordinate589;

//from vt1 to l_sternoclavicular
let ColorRGBA590 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA590.USE = "HAnimSegmentLineColorRGBA";
LineSet588.color = ColorRGBA590;

Shape587.geometry = LineSet588;

HAnimJoint576.shape[2] = Shape587;

let HAnimSite591 = browser.currentScene.createNode("HAnimSite");
HAnimSite591.name = "l_acromion_pt";
HAnimSite591.DEF = "hanim_l_acromion_pt";
HAnimSite591.translation = new SFVec3f(new float[0.2032,1.476,-0.049]);
let TouchSensor592 = browser.currentScene.createNode("TouchSensor");
TouchSensor592.description = "HAnimSite l_acromion_pt";
HAnimSite591.children = new MFNode();

HAnimSite591.children[0] = TouchSensor592;

let Shape593 = browser.currentScene.createNode("Shape");
Shape593.USE = "HAnimSiteShape";
HAnimSite591.children[1] = Shape593;

HAnimJoint576.hAnimSite[3] = HAnimSite591;

let HAnimSite594 = browser.currentScene.createNode("HAnimSite");
HAnimSite594.name = "l_axilla_distal_pt";
HAnimSite594.DEF = "hanim_l_axilla_distal_pt";
HAnimSite594.translation = new SFVec3f(new float[0.1706,1.4072,-0.0875]);
let TouchSensor595 = browser.currentScene.createNode("TouchSensor");
TouchSensor595.description = "HAnimSite l_axilla_distal_pt";
HAnimSite594.children = new MFNode();

HAnimSite594.children[0] = TouchSensor595;

let Shape596 = browser.currentScene.createNode("Shape");
Shape596.USE = "HAnimSiteShape";
HAnimSite594.children[1] = Shape596;

HAnimJoint576.hAnimSite[4] = HAnimSite594;

let HAnimSite597 = browser.currentScene.createNode("HAnimSite");
HAnimSite597.name = "l_axilla_posterior_folds_pt";
HAnimSite597.DEF = "hanim_l_axilla_posterior_folds_pt";
HAnimSite597.translation = new SFVec3f(new float[0,1,0]);
let TouchSensor598 = browser.currentScene.createNode("TouchSensor");
TouchSensor598.description = "HAnimSite l_axilla_posterior_folds_pt";
HAnimSite597.children = new MFNode();

HAnimSite597.children[0] = TouchSensor598;

let Shape599 = browser.currentScene.createNode("Shape");
Shape599.USE = "HAnimSiteShape";
HAnimSite597.children[1] = Shape599;

HAnimJoint576.hAnimSite[5] = HAnimSite597;

let HAnimSite600 = browser.currentScene.createNode("HAnimSite");
HAnimSite600.name = "l_axilla_proximal_pt";
HAnimSite600.DEF = "hanim_l_axilla_proximal_pt";
HAnimSite600.translation = new SFVec3f(new float[0.1777,1.4065,-0.0075]);
let TouchSensor601 = browser.currentScene.createNode("TouchSensor");
TouchSensor601.description = "HAnimSite l_axilla_proximal_pt";
HAnimSite600.children = new MFNode();

HAnimSite600.children[0] = TouchSensor601;

let Shape602 = browser.currentScene.createNode("Shape");
Shape602.USE = "HAnimSiteShape";
HAnimSite600.children[1] = Shape602;

HAnimJoint576.hAnimSite[6] = HAnimSite600;

let HAnimSite603 = browser.currentScene.createNode("HAnimSite");
HAnimSite603.name = "l_clavicale_pt";
HAnimSite603.DEF = "hanim_l_clavicale_pt";
HAnimSite603.translation = new SFVec3f(new float[0.0271,1.4943,0.0394]);
let TouchSensor604 = browser.currentScene.createNode("TouchSensor");
TouchSensor604.description = "HAnimSite l_clavicale_pt";
HAnimSite603.children = new MFNode();

HAnimSite603.children[0] = TouchSensor604;

let Shape605 = browser.currentScene.createNode("Shape");
Shape605.USE = "HAnimSiteShape";
HAnimSite603.children[1] = Shape605;

HAnimJoint576.hAnimSite[7] = HAnimSite603;

let Shape606 = browser.currentScene.createNode("Shape");
let LineSet607 = browser.currentScene.createNode("LineSet");
LineSet607.vertexCount = new MFInt32(new int[2]);
let Coordinate608 = browser.currentScene.createNode("Coordinate");
Coordinate608.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,-0.0694,1.46,-0.033]);
LineSet607.coord = Coordinate608;

//from vt1 to r_sternoclavicular
let ColorRGBA609 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA609.USE = "HAnimSegmentLineColorRGBA";
LineSet607.color = ColorRGBA609;

Shape606.geometry = LineSet607;

HAnimJoint576.shape[8] = Shape606;

let HAnimSite610 = browser.currentScene.createNode("HAnimSite");
HAnimSite610.name = "r_acromion_pt";
HAnimSite610.DEF = "hanim_r_acromion_pt";
HAnimSite610.translation = new SFVec3f(new float[-0.1905,1.4791,-0.0431]);
let TouchSensor611 = browser.currentScene.createNode("TouchSensor");
TouchSensor611.description = "HAnimSite r_acromion_pt";
HAnimSite610.children = new MFNode();

HAnimSite610.children[0] = TouchSensor611;

let Shape612 = browser.currentScene.createNode("Shape");
Shape612.USE = "HAnimSiteShape";
HAnimSite610.children[1] = Shape612;

HAnimJoint576.hAnimSite[9] = HAnimSite610;

let HAnimSite613 = browser.currentScene.createNode("HAnimSite");
HAnimSite613.name = "r_axilla_distal_pt";
HAnimSite613.DEF = "hanim_r_axilla_distal_pt";
HAnimSite613.translation = new SFVec3f(new float[-0.1603,1.4098,-0.0826]);
let TouchSensor614 = browser.currentScene.createNode("TouchSensor");
TouchSensor614.description = "HAnimSite r_axilla_distal_pt";
HAnimSite613.children = new MFNode();

HAnimSite613.children[0] = TouchSensor614;

let Shape615 = browser.currentScene.createNode("Shape");
Shape615.USE = "HAnimSiteShape";
HAnimSite613.children[1] = Shape615;

HAnimJoint576.hAnimSite[10] = HAnimSite613;

let HAnimSite616 = browser.currentScene.createNode("HAnimSite");
HAnimSite616.name = "r_axilla_posterior_folds_pt";
HAnimSite616.DEF = "hanim_r_axilla_posterior_folds_pt";
HAnimSite616.translation = new SFVec3f(new float[0,1,0]);
let TouchSensor617 = browser.currentScene.createNode("TouchSensor");
TouchSensor617.description = "HAnimSite r_axilla_posterior_folds_pt";
HAnimSite616.children = new MFNode();

HAnimSite616.children[0] = TouchSensor617;

let Shape618 = browser.currentScene.createNode("Shape");
Shape618.USE = "HAnimSiteShape";
HAnimSite616.children[1] = Shape618;

HAnimJoint576.hAnimSite[11] = HAnimSite616;

let HAnimSite619 = browser.currentScene.createNode("HAnimSite");
HAnimSite619.name = "r_axilla_proximal_pt";
HAnimSite619.DEF = "hanim_r_axilla_proximal_pt";
HAnimSite619.translation = new SFVec3f(new float[-0.1626,1.4072,-0.0031]);
let TouchSensor620 = browser.currentScene.createNode("TouchSensor");
TouchSensor620.description = "HAnimSite r_axilla_proximal_pt";
HAnimSite619.children = new MFNode();

HAnimSite619.children[0] = TouchSensor620;

let Shape621 = browser.currentScene.createNode("Shape");
Shape621.USE = "HAnimSiteShape";
HAnimSite619.children[1] = Shape621;

HAnimJoint576.hAnimSite[12] = HAnimSite619;

let HAnimSite622 = browser.currentScene.createNode("HAnimSite");
HAnimSite622.name = "r_clavicale_pt";
HAnimSite622.DEF = "hanim_r_clavicale_pt";
HAnimSite622.translation = new SFVec3f(new float[-0.0115,1.4943,0.04]);
let TouchSensor623 = browser.currentScene.createNode("TouchSensor");
TouchSensor623.description = "HAnimSite r_clavicale_pt";
HAnimSite622.children = new MFNode();

HAnimSite622.children[0] = TouchSensor623;

let Shape624 = browser.currentScene.createNode("Shape");
Shape624.USE = "HAnimSiteShape";
HAnimSite622.children[1] = Shape624;

HAnimJoint576.hAnimSite[13] = HAnimSite622;

let HAnimJoint625 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint625.name = "vc7";
HAnimJoint625.DEF = "hanim_vc7";
HAnimJoint625.center = new SFVec3f(new float[0.0066,1.5132,-0.0301]);
HAnimJoint625.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint625.llimit = new MFFloat(new float[0,0,0]);
let Shape626 = browser.currentScene.createNode("Shape");
let LineSet627 = browser.currentScene.createNode("LineSet");
LineSet627.vertexCount = new MFInt32(new int[2]);
let Coordinate628 = browser.currentScene.createNode("Coordinate");
Coordinate628.point = new MFVec3f(new float[0.0066,1.5132,-0.0301,0.0066,1.5357,-0.0143]);
LineSet627.coord = Coordinate628;

//from vc7 to vc6
let ColorRGBA629 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA629.USE = "HAnimSegmentLineColorRGBA";
LineSet627.color = ColorRGBA629;

Shape626.geometry = LineSet627;

HAnimJoint625.shape = Shape626;

let HAnimJoint630 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint630.name = "vc6";
HAnimJoint630.DEF = "hanim_vc6";
HAnimJoint630.center = new SFVec3f(new float[0.0066,1.5357,-0.0143]);
HAnimJoint630.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint630.llimit = new MFFloat(new float[0,0,0]);
let Shape631 = browser.currentScene.createNode("Shape");
let LineSet632 = browser.currentScene.createNode("LineSet");
LineSet632.vertexCount = new MFInt32(new int[2]);
let Coordinate633 = browser.currentScene.createNode("Coordinate");
Coordinate633.point = new MFVec3f(new float[0.0066,1.5357,-0.0143,0.0066,1.552,-0.0082]);
LineSet632.coord = Coordinate633;

//from vc6 to vc5
let ColorRGBA634 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA634.USE = "HAnimSegmentLineColorRGBA";
LineSet632.color = ColorRGBA634;

Shape631.geometry = LineSet632;

HAnimJoint630.shape = Shape631;

let HAnimJoint635 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint635.name = "vc5";
HAnimJoint635.DEF = "hanim_vc5";
HAnimJoint635.center = new SFVec3f(new float[0.0066,1.552,-0.0082]);
HAnimJoint635.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint635.llimit = new MFFloat(new float[0,0,0]);
let Shape636 = browser.currentScene.createNode("Shape");
let LineSet637 = browser.currentScene.createNode("LineSet");
LineSet637.vertexCount = new MFInt32(new int[2]);
let Coordinate638 = browser.currentScene.createNode("Coordinate");
Coordinate638.point = new MFVec3f(new float[0.0066,1.552,-0.0082,0.0066,1.5662,-0.0084]);
LineSet637.coord = Coordinate638;

//from vc5 to vc4
let ColorRGBA639 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA639.USE = "HAnimSegmentLineColorRGBA";
LineSet637.color = ColorRGBA639;

Shape636.geometry = LineSet637;

HAnimJoint635.shape = Shape636;

let HAnimJoint640 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint640.name = "vc4";
HAnimJoint640.DEF = "hanim_vc4";
HAnimJoint640.center = new SFVec3f(new float[0.0066,1.5662,-0.0084]);
HAnimJoint640.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint640.llimit = new MFFloat(new float[0,0,0]);
let Shape641 = browser.currentScene.createNode("Shape");
let LineSet642 = browser.currentScene.createNode("LineSet");
LineSet642.vertexCount = new MFInt32(new int[2]);
let Coordinate643 = browser.currentScene.createNode("Coordinate");
Coordinate643.point = new MFVec3f(new float[0.0066,1.5662,-0.0084,0.0066,1.58,-0.0103]);
LineSet642.coord = Coordinate643;

//from vc4 to vc3
let ColorRGBA644 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA644.USE = "HAnimSegmentLineColorRGBA";
LineSet642.color = ColorRGBA644;

Shape641.geometry = LineSet642;

HAnimJoint640.shape = Shape641;

let HAnimJoint645 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint645.name = "vc3";
HAnimJoint645.DEF = "hanim_vc3";
HAnimJoint645.center = new SFVec3f(new float[0.0066,1.58,-0.0103]);
HAnimJoint645.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint645.llimit = new MFFloat(new float[0,0,0]);
let Shape646 = browser.currentScene.createNode("Shape");
let LineSet647 = browser.currentScene.createNode("LineSet");
LineSet647.vertexCount = new MFInt32(new int[2]);
let Coordinate648 = browser.currentScene.createNode("Coordinate");
Coordinate648.point = new MFVec3f(new float[0.0066,1.58,-0.0103,0.0066,1.5928,-0.0103]);
LineSet647.coord = Coordinate648;

//from vc3 to vc2
let ColorRGBA649 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA649.USE = "HAnimSegmentLineColorRGBA";
LineSet647.color = ColorRGBA649;

Shape646.geometry = LineSet647;

HAnimJoint645.shape = Shape646;

let HAnimSite650 = browser.currentScene.createNode("HAnimSite");
HAnimSite650.name = "adams_apple_pt";
HAnimSite650.DEF = "hanim_adams_apple_pt";
HAnimSite650.translation = new SFVec3f(new float[0,1,0]);
let TouchSensor651 = browser.currentScene.createNode("TouchSensor");
TouchSensor651.description = "HAnimSite adams_apple_pt";
HAnimSite650.children = new MFNode();

HAnimSite650.children[0] = TouchSensor651;

let Shape652 = browser.currentScene.createNode("Shape");
Shape652.USE = "HAnimSiteShape";
HAnimSite650.children[1] = Shape652;

HAnimJoint645.hAnimSite = new undefined();

HAnimJoint645.hAnimSite[0] = HAnimSite650;

let HAnimJoint653 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint653.name = "vc2";
HAnimJoint653.DEF = "hanim_vc2";
HAnimJoint653.center = new SFVec3f(new float[0.0066,1.5928,-0.0103]);
HAnimJoint653.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint653.llimit = new MFFloat(new float[0,0,0]);
let Shape654 = browser.currentScene.createNode("Shape");
let LineSet655 = browser.currentScene.createNode("LineSet");
LineSet655.vertexCount = new MFInt32(new int[2]);
let Coordinate656 = browser.currentScene.createNode("Coordinate");
Coordinate656.point = new MFVec3f(new float[0.0066,1.5928,-0.0103,0.0066,1.6144,-0.0034]);
LineSet655.coord = Coordinate656;

//from vc2 to vc1
let ColorRGBA657 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA657.USE = "HAnimSegmentLineColorRGBA";
LineSet655.color = ColorRGBA657;

Shape654.geometry = LineSet655;

HAnimJoint653.shape = Shape654;

let HAnimJoint658 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint658.name = "vc1";
HAnimJoint658.DEF = "hanim_vc1";
HAnimJoint658.center = new SFVec3f(new float[0.0066,1.6144,-0.0034]);
HAnimJoint658.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint658.llimit = new MFFloat(new float[0,0,0]);
let Shape659 = browser.currentScene.createNode("Shape");
let LineSet660 = browser.currentScene.createNode("LineSet");
LineSet660.vertexCount = new MFInt32(new int[2]);
let Coordinate661 = browser.currentScene.createNode("Coordinate");
Coordinate661.point = new MFVec3f(new float[0.0066,1.6144,-0.0034,0.0044,1.6209,0.0236]);
LineSet660.coord = Coordinate661;

//from vc1 to skullbase
let ColorRGBA662 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA662.USE = "HAnimSegmentLineColorRGBA";
LineSet660.color = ColorRGBA662;

Shape659.geometry = LineSet660;

HAnimJoint658.shape = Shape659;

let HAnimSite663 = browser.currentScene.createNode("HAnimSite");
HAnimSite663.name = "glabella_pt";
HAnimSite663.DEF = "hanim_glabella_pt";
HAnimSite663.translation = new SFVec3f(new float[0,1,0]);
let TouchSensor664 = browser.currentScene.createNode("TouchSensor");
TouchSensor664.description = "HAnimSite glabella_pt";
HAnimSite663.children = new MFNode();

HAnimSite663.children[0] = TouchSensor664;

let Shape665 = browser.currentScene.createNode("Shape");
Shape665.USE = "HAnimSiteShape";
HAnimSite663.children[1] = Shape665;

HAnimJoint658.hAnimSite = new undefined();

HAnimJoint658.hAnimSite[0] = HAnimSite663;

let HAnimSite666 = browser.currentScene.createNode("HAnimSite");
HAnimSite666.name = "l_ectocanthus_pt";
HAnimSite666.DEF = "hanim_l_ectocanthus_pt";
HAnimSite666.translation = new SFVec3f(new float[0,1,0]);
let TouchSensor667 = browser.currentScene.createNode("TouchSensor");
TouchSensor667.description = "HAnimSite l_ectocanthus_pt";
HAnimSite666.children = new MFNode();

HAnimSite666.children[0] = TouchSensor667;

let Shape668 = browser.currentScene.createNode("Shape");
Shape668.USE = "HAnimSiteShape";
HAnimSite666.children[1] = Shape668;

HAnimJoint658.hAnimSite[1] = HAnimSite666;

let HAnimSite669 = browser.currentScene.createNode("HAnimSite");
HAnimSite669.name = "l_infraorbitale_pt";
HAnimSite669.DEF = "hanim_l_infraorbitale_pt";
HAnimSite669.translation = new SFVec3f(new float[0.0341,1.6171,0.0752]);
let TouchSensor670 = browser.currentScene.createNode("TouchSensor");
TouchSensor670.description = "HAnimSite l_infraorbitale_pt";
HAnimSite669.children = new MFNode();

HAnimSite669.children[0] = TouchSensor670;

let Shape671 = browser.currentScene.createNode("Shape");
Shape671.USE = "HAnimSiteShape";
HAnimSite669.children[1] = Shape671;

HAnimJoint658.hAnimSite[2] = HAnimSite669;

let HAnimSite672 = browser.currentScene.createNode("HAnimSite");
HAnimSite672.name = "l_tragion_pt";
HAnimSite672.DEF = "hanim_l_tragion_pt";
HAnimSite672.translation = new SFVec3f(new float[0.0739,1.6348,0.0282]);
let TouchSensor673 = browser.currentScene.createNode("TouchSensor");
TouchSensor673.description = "HAnimSite l_tragion_pt";
HAnimSite672.children = new MFNode();

HAnimSite672.children[0] = TouchSensor673;

let Shape674 = browser.currentScene.createNode("Shape");
Shape674.USE = "HAnimSiteShape";
HAnimSite672.children[1] = Shape674;

HAnimJoint658.hAnimSite[3] = HAnimSite672;

let HAnimSite675 = browser.currentScene.createNode("HAnimSite");
HAnimSite675.name = "nuchale_pt";
HAnimSite675.DEF = "hanim_nuchale_pt";
HAnimSite675.translation = new SFVec3f(new float[0.0039,1.5972,-0.0796]);
let TouchSensor676 = browser.currentScene.createNode("TouchSensor");
TouchSensor676.description = "HAnimSite nuchale_pt";
HAnimSite675.children = new MFNode();

HAnimSite675.children[0] = TouchSensor676;

let Shape677 = browser.currentScene.createNode("Shape");
Shape677.USE = "HAnimSiteShape";
HAnimSite675.children[1] = Shape677;

HAnimJoint658.hAnimSite[4] = HAnimSite675;

let HAnimSite678 = browser.currentScene.createNode("HAnimSite");
HAnimSite678.name = "opisthocranion_pt";
HAnimSite678.DEF = "hanim_opisthocranion_pt";
HAnimSite678.translation = new SFVec3f(new float[0,1,0]);
let TouchSensor679 = browser.currentScene.createNode("TouchSensor");
TouchSensor679.description = "HAnimSite opisthocranion_pt";
HAnimSite678.children = new MFNode();

HAnimSite678.children[0] = TouchSensor679;

let Shape680 = browser.currentScene.createNode("Shape");
Shape680.USE = "HAnimSiteShape";
HAnimSite678.children[1] = Shape680;

HAnimJoint658.hAnimSite[5] = HAnimSite678;

let HAnimSite681 = browser.currentScene.createNode("HAnimSite");
HAnimSite681.name = "r_ectocanthus_pt";
HAnimSite681.DEF = "hanim_r_ectocanthus_pt";
HAnimSite681.translation = new SFVec3f(new float[0,1,0]);
let TouchSensor682 = browser.currentScene.createNode("TouchSensor");
TouchSensor682.description = "HAnimSite r_ectocanthus_pt";
HAnimSite681.children = new MFNode();

HAnimSite681.children[0] = TouchSensor682;

let Shape683 = browser.currentScene.createNode("Shape");
Shape683.USE = "HAnimSiteShape";
HAnimSite681.children[1] = Shape683;

HAnimJoint658.hAnimSite[6] = HAnimSite681;

let HAnimSite684 = browser.currentScene.createNode("HAnimSite");
HAnimSite684.name = "r_infraorbitale_pt";
HAnimSite684.DEF = "hanim_r_infraorbitale_pt";
HAnimSite684.translation = new SFVec3f(new float[-0.0237,1.6171,0.0752]);
let TouchSensor685 = browser.currentScene.createNode("TouchSensor");
TouchSensor685.description = "HAnimSite r_infraorbitale_pt";
HAnimSite684.children = new MFNode();

HAnimSite684.children[0] = TouchSensor685;

let Shape686 = browser.currentScene.createNode("Shape");
Shape686.USE = "HAnimSiteShape";
HAnimSite684.children[1] = Shape686;

HAnimJoint658.hAnimSite[7] = HAnimSite684;

let HAnimSite687 = browser.currentScene.createNode("HAnimSite");
HAnimSite687.name = "r_tragion_pt";
HAnimSite687.DEF = "hanim_r_tragion_pt";
HAnimSite687.translation = new SFVec3f(new float[-0.0646,1.6347,0.0302]);
let TouchSensor688 = browser.currentScene.createNode("TouchSensor");
TouchSensor688.description = "HAnimSite r_tragion_pt";
HAnimSite687.children = new MFNode();

HAnimSite687.children[0] = TouchSensor688;

let Shape689 = browser.currentScene.createNode("Shape");
Shape689.USE = "HAnimSiteShape";
HAnimSite687.children[1] = Shape689;

HAnimJoint658.hAnimSite[8] = HAnimSite687;

let HAnimSite690 = browser.currentScene.createNode("HAnimSite");
HAnimSite690.name = "sellion_pt";
HAnimSite690.DEF = "hanim_sellion_pt";
HAnimSite690.translation = new SFVec3f(new float[0.0058,1.6316,0.0852]);
let TouchSensor691 = browser.currentScene.createNode("TouchSensor");
TouchSensor691.description = "HAnimSite sellion_pt";
HAnimSite690.children = new MFNode();

HAnimSite690.children[0] = TouchSensor691;

let Shape692 = browser.currentScene.createNode("Shape");
Shape692.USE = "HAnimSiteShape";
HAnimSite690.children[1] = Shape692;

HAnimJoint658.hAnimSite[9] = HAnimSite690;

let HAnimSite693 = browser.currentScene.createNode("HAnimSite");
HAnimSite693.name = "skull_vertex_pt";
HAnimSite693.DEF = "hanim_skull_vertex_pt";
HAnimSite693.translation = new SFVec3f(new float[0.005,1.7504,0.0055]);
let TouchSensor694 = browser.currentScene.createNode("TouchSensor");
TouchSensor694.description = "HAnimSite skull_vertex_pt";
HAnimSite693.children = new MFNode();

HAnimSite693.children[0] = TouchSensor694;

let Shape695 = browser.currentScene.createNode("Shape");
Shape695.USE = "HAnimSiteShape";
HAnimSite693.children[1] = Shape695;

HAnimJoint658.hAnimSite[10] = HAnimSite693;

let HAnimJoint696 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint696.name = "skullbase";
HAnimJoint696.DEF = "hanim_skullbase";
HAnimJoint696.center = new SFVec3f(new float[0.0044,1.6209,0.0236]);
HAnimJoint696.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint696.llimit = new MFFloat(new float[0,0,0]);
let Shape697 = browser.currentScene.createNode("Shape");
let LineSet698 = browser.currentScene.createNode("LineSet");
LineSet698.vertexCount = new MFInt32(new int[2]);
let Coordinate699 = browser.currentScene.createNode("Coordinate");
Coordinate699.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0,1,0]);
LineSet698.coord = Coordinate699;

//from skullbase to l_eyelid_joint
let ColorRGBA700 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA700.USE = "HAnimSegmentLineColorRGBA";
LineSet698.color = ColorRGBA700;

Shape697.geometry = LineSet698;

HAnimJoint696.shape = Shape697;

let Shape701 = browser.currentScene.createNode("Shape");
let LineSet702 = browser.currentScene.createNode("LineSet");
LineSet702.vertexCount = new MFInt32(new int[2]);
let Coordinate703 = browser.currentScene.createNode("Coordinate");
Coordinate703.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0,1,0]);
LineSet702.coord = Coordinate703;

//from skullbase to r_eyelid_joint
let ColorRGBA704 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA704.USE = "HAnimSegmentLineColorRGBA";
LineSet702.color = ColorRGBA704;

Shape701.geometry = LineSet702;

HAnimJoint696.shape = new undefined();

HAnimJoint696.shape[0] = Shape701;

let Shape705 = browser.currentScene.createNode("Shape");
let LineSet706 = browser.currentScene.createNode("LineSet");
LineSet706.vertexCount = new MFInt32(new int[2]);
let Coordinate707 = browser.currentScene.createNode("Coordinate");
Coordinate707.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0,1,0]);
LineSet706.coord = Coordinate707;

//from skullbase to l_eyeball_joint
let ColorRGBA708 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA708.USE = "HAnimSegmentLineColorRGBA";
LineSet706.color = ColorRGBA708;

Shape705.geometry = LineSet706;

HAnimJoint696.shape[1] = Shape705;

let Shape709 = browser.currentScene.createNode("Shape");
let LineSet710 = browser.currentScene.createNode("LineSet");
LineSet710.vertexCount = new MFInt32(new int[2]);
let Coordinate711 = browser.currentScene.createNode("Coordinate");
Coordinate711.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0,1,0]);
LineSet710.coord = Coordinate711;

//from skullbase to r_eyeball_joint
let ColorRGBA712 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA712.USE = "HAnimSegmentLineColorRGBA";
LineSet710.color = ColorRGBA712;

Shape709.geometry = LineSet710;

HAnimJoint696.shape[2] = Shape709;

let Shape713 = browser.currentScene.createNode("Shape");
let LineSet714 = browser.currentScene.createNode("LineSet");
LineSet714.vertexCount = new MFInt32(new int[2]);
let Coordinate715 = browser.currentScene.createNode("Coordinate");
Coordinate715.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0,1,0]);
LineSet714.coord = Coordinate715;

//from skullbase to l_eyebrow_joint
let ColorRGBA716 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA716.USE = "HAnimSegmentLineColorRGBA";
LineSet714.color = ColorRGBA716;

Shape713.geometry = LineSet714;

HAnimJoint696.shape[3] = Shape713;

let Shape717 = browser.currentScene.createNode("Shape");
let LineSet718 = browser.currentScene.createNode("LineSet");
LineSet718.vertexCount = new MFInt32(new int[2]);
let Coordinate719 = browser.currentScene.createNode("Coordinate");
Coordinate719.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0,1,0]);
LineSet718.coord = Coordinate719;

//from skullbase to r_eyebrow_joint
let ColorRGBA720 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA720.USE = "HAnimSegmentLineColorRGBA";
LineSet718.color = ColorRGBA720;

Shape717.geometry = LineSet718;

HAnimJoint696.shape[4] = Shape717;

let Shape721 = browser.currentScene.createNode("Shape");
let LineSet722 = browser.currentScene.createNode("LineSet");
LineSet722.vertexCount = new MFInt32(new int[2]);
let Coordinate723 = browser.currentScene.createNode("Coordinate");
Coordinate723.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0,1,0]);
LineSet722.coord = Coordinate723;

//from skullbase to temporomandibular
let ColorRGBA724 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA724.USE = "HAnimSegmentLineColorRGBA";
LineSet722.color = ColorRGBA724;

Shape721.geometry = LineSet722;

HAnimJoint696.shape[5] = Shape721;

let HAnimSite725 = browser.currentScene.createNode("HAnimSite");
HAnimSite725.name = "l_gonion_pt";
HAnimSite725.DEF = "hanim_l_gonion_pt";
HAnimSite725.translation = new SFVec3f(new float[0.0631,1.553,0.033]);
let TouchSensor726 = browser.currentScene.createNode("TouchSensor");
TouchSensor726.description = "HAnimSite l_gonion_pt";
HAnimSite725.children = new MFNode();

HAnimSite725.children[0] = TouchSensor726;

let Shape727 = browser.currentScene.createNode("Shape");
Shape727.USE = "HAnimSiteShape";
HAnimSite725.children[1] = Shape727;

HAnimJoint696.hAnimSite[6] = HAnimSite725;

let HAnimSite728 = browser.currentScene.createNode("HAnimSite");
HAnimSite728.name = "menton_pt";
HAnimSite728.DEF = "hanim_menton_pt";
HAnimSite728.translation = new SFVec3f(new float[0,1,0]);
let TouchSensor729 = browser.currentScene.createNode("TouchSensor");
TouchSensor729.description = "HAnimSite menton_pt";
HAnimSite728.children = new MFNode();

HAnimSite728.children[0] = TouchSensor729;

let Shape730 = browser.currentScene.createNode("Shape");
Shape730.USE = "HAnimSiteShape";
HAnimSite728.children[1] = Shape730;

HAnimJoint696.hAnimSite[7] = HAnimSite728;

let HAnimSite731 = browser.currentScene.createNode("HAnimSite");
HAnimSite731.name = "r_gonion_pt";
HAnimSite731.DEF = "hanim_r_gonion_pt";
HAnimSite731.translation = new SFVec3f(new float[-0.052,1.5529,0.0347]);
let TouchSensor732 = browser.currentScene.createNode("TouchSensor");
TouchSensor732.description = "HAnimSite r_gonion_pt";
HAnimSite731.children = new MFNode();

HAnimSite731.children[0] = TouchSensor732;

let Shape733 = browser.currentScene.createNode("Shape");
Shape733.USE = "HAnimSiteShape";
HAnimSite731.children[1] = Shape733;

HAnimJoint696.hAnimSite[8] = HAnimSite731;

let HAnimSite734 = browser.currentScene.createNode("HAnimSite");
HAnimSite734.name = "supramenton_pt";
HAnimSite734.DEF = "hanim_supramenton_pt";
HAnimSite734.translation = new SFVec3f(new float[0.0061,1.541,0.0805]);
let TouchSensor735 = browser.currentScene.createNode("TouchSensor");
TouchSensor735.description = "HAnimSite supramenton_pt";
HAnimSite734.children = new MFNode();

HAnimSite734.children[0] = TouchSensor735;

let Shape736 = browser.currentScene.createNode("Shape");
Shape736.USE = "HAnimSiteShape";
HAnimSite734.children[1] = Shape736;

HAnimJoint696.hAnimSite[9] = HAnimSite734;

let HAnimJoint737 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint737.name = "l_eyelid_joint";
HAnimJoint737.DEF = "hanim_l_eyelid_joint";
HAnimJoint737.center = new SFVec3f(new float[0,1,0]);
HAnimJoint737.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint737.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint696.children[10] = HAnimJoint737;

let HAnimJoint738 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint738.name = "r_eyelid_joint";
HAnimJoint738.DEF = "hanim_r_eyelid_joint";
HAnimJoint738.center = new SFVec3f(new float[0,1,0]);
HAnimJoint738.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint738.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint696.children[11] = HAnimJoint738;

let HAnimJoint739 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint739.name = "l_eyeball_joint";
HAnimJoint739.DEF = "hanim_l_eyeball_joint";
HAnimJoint739.center = new SFVec3f(new float[0,1,0]);
HAnimJoint739.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint739.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint696.children[12] = HAnimJoint739;

let HAnimJoint740 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint740.name = "r_eyeball_joint";
HAnimJoint740.DEF = "hanim_r_eyeball_joint";
HAnimJoint740.center = new SFVec3f(new float[0,1,0]);
HAnimJoint740.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint740.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint696.children[13] = HAnimJoint740;

let HAnimJoint741 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint741.name = "l_eyebrow_joint";
HAnimJoint741.DEF = "hanim_l_eyebrow_joint";
HAnimJoint741.center = new SFVec3f(new float[0,1,0]);
HAnimJoint741.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint741.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint696.children[14] = HAnimJoint741;

let HAnimJoint742 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint742.name = "r_eyebrow_joint";
HAnimJoint742.DEF = "hanim_r_eyebrow_joint";
HAnimJoint742.center = new SFVec3f(new float[0,1,0]);
HAnimJoint742.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint742.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint696.children[15] = HAnimJoint742;

let HAnimJoint743 = browser.currentScene.createNode("HAnimJoint");
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

let HAnimJoint744 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint744.name = "l_sternoclavicular";
HAnimJoint744.DEF = "hanim_l_sternoclavicular";
HAnimJoint744.center = new SFVec3f(new float[0.082,1.4488,-0.0353]);
HAnimJoint744.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint744.llimit = new MFFloat(new float[0,0,0]);
let Shape745 = browser.currentScene.createNode("Shape");
let LineSet746 = browser.currentScene.createNode("LineSet");
LineSet746.vertexCount = new MFInt32(new int[2]);
let Coordinate747 = browser.currentScene.createNode("Coordinate");
Coordinate747.point = new MFVec3f(new float[0.082,1.4488,-0.0353,0.0962,1.4269,-0.0424]);
LineSet746.coord = Coordinate747;

//from l_sternoclavicular to l_acromioclavicular
let ColorRGBA748 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA748.USE = "HAnimSegmentLineColorRGBA";
LineSet746.color = ColorRGBA748;

Shape745.geometry = LineSet746;

HAnimJoint744.shape = Shape745;

let HAnimJoint749 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint749.name = "l_acromioclavicular";
HAnimJoint749.DEF = "hanim_l_acromioclavicular";
HAnimJoint749.center = new SFVec3f(new float[0.0962,1.4269,-0.0424]);
HAnimJoint749.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint749.llimit = new MFFloat(new float[0,0,0]);
let Shape750 = browser.currentScene.createNode("Shape");
let LineSet751 = browser.currentScene.createNode("LineSet");
LineSet751.vertexCount = new MFInt32(new int[2]);
let Coordinate752 = browser.currentScene.createNode("Coordinate");
Coordinate752.point = new MFVec3f(new float[0.0962,1.4269,-0.0424,0.2029,1.4376,-0.0387]);
LineSet751.coord = Coordinate752;

//from l_acromioclavicular to l_shoulder
let ColorRGBA753 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA753.USE = "HAnimSegmentLineColorRGBA";
LineSet751.color = ColorRGBA753;

Shape750.geometry = LineSet751;

HAnimJoint749.shape = Shape750;

let HAnimSite754 = browser.currentScene.createNode("HAnimSite");
HAnimSite754.name = "l_bideltoid_pt";
HAnimSite754.DEF = "hanim_l_bideltoid_pt";
HAnimSite754.translation = new SFVec3f(new float[0,1,0]);
let TouchSensor755 = browser.currentScene.createNode("TouchSensor");
TouchSensor755.description = "HAnimSite l_bideltoid_pt";
HAnimSite754.children = new MFNode();

HAnimSite754.children[0] = TouchSensor755;

let Shape756 = browser.currentScene.createNode("Shape");
Shape756.USE = "HAnimSiteShape";
HAnimSite754.children[1] = Shape756;

HAnimJoint749.hAnimSite = new undefined();

HAnimJoint749.hAnimSite[0] = HAnimSite754;

let HAnimSite757 = browser.currentScene.createNode("HAnimSite");
HAnimSite757.name = "l_humeral_lateral_epicondyles_pt";
HAnimSite757.DEF = "hanim_l_humeral_lateral_epicondyles_pt";
HAnimSite757.translation = new SFVec3f(new float[0.228,1.1482,-0.11]);
let TouchSensor758 = browser.currentScene.createNode("TouchSensor");
TouchSensor758.description = "HAnimSite l_humeral_lateral_epicondyles_pt";
HAnimSite757.children = new MFNode();

HAnimSite757.children[0] = TouchSensor758;

let Shape759 = browser.currentScene.createNode("Shape");
Shape759.USE = "HAnimSiteShape";
HAnimSite757.children[1] = Shape759;

HAnimJoint749.hAnimSite[1] = HAnimSite757;

let HAnimJoint760 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint760.name = "l_shoulder";
HAnimJoint760.DEF = "hanim_l_shoulder";
HAnimJoint760.center = new SFVec3f(new float[0.2029,1.4376,-0.0387]);
HAnimJoint760.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint760.llimit = new MFFloat(new float[0,0,0]);
let Shape761 = browser.currentScene.createNode("Shape");
let LineSet762 = browser.currentScene.createNode("LineSet");
LineSet762.vertexCount = new MFInt32(new int[2]);
let Coordinate763 = browser.currentScene.createNode("Coordinate");
Coordinate763.point = new MFVec3f(new float[0.2029,1.4376,-0.0387,0.2014,1.1357,-0.0682]);
LineSet762.coord = Coordinate763;

//from l_shoulder to l_elbow
let ColorRGBA764 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA764.USE = "HAnimSegmentLineColorRGBA";
LineSet762.color = ColorRGBA764;

Shape761.geometry = LineSet762;

HAnimJoint760.shape = Shape761;

let HAnimSite765 = browser.currentScene.createNode("HAnimSite");
HAnimSite765.name = "l_humeral_medial_epicondyles_pt";
HAnimSite765.DEF = "hanim_l_humeral_medial_epicondyles_pt";
HAnimSite765.translation = new SFVec3f(new float[0.1735,1.1272,-0.1113]);
let TouchSensor766 = browser.currentScene.createNode("TouchSensor");
TouchSensor766.description = "HAnimSite l_humeral_medial_epicondyles_pt";
HAnimSite765.children = new MFNode();

HAnimSite765.children[0] = TouchSensor766;

let Shape767 = browser.currentScene.createNode("Shape");
Shape767.USE = "HAnimSiteShape";
HAnimSite765.children[1] = Shape767;

HAnimJoint760.hAnimSite = new undefined();

HAnimJoint760.hAnimSite[0] = HAnimSite765;

let HAnimSite768 = browser.currentScene.createNode("HAnimSite");
HAnimSite768.name = "l_olecranon_pt";
HAnimSite768.DEF = "hanim_l_olecranon_pt";
HAnimSite768.translation = new SFVec3f(new float[-0.1962,1.1375,-0.1123]);
let TouchSensor769 = browser.currentScene.createNode("TouchSensor");
TouchSensor769.description = "HAnimSite l_olecranon_pt";
HAnimSite768.children = new MFNode();

HAnimSite768.children[0] = TouchSensor769;

let Shape770 = browser.currentScene.createNode("Shape");
Shape770.USE = "HAnimSiteShape";
HAnimSite768.children[1] = Shape770;

HAnimJoint760.hAnimSite[1] = HAnimSite768;

let HAnimSite771 = browser.currentScene.createNode("HAnimSite");
HAnimSite771.name = "l_radial_styloid_pt";
HAnimSite771.DEF = "hanim_l_radial_styloid_pt";
HAnimSite771.translation = new SFVec3f(new float[0.1901,0.8645,-0.0415]);
let TouchSensor772 = browser.currentScene.createNode("TouchSensor");
TouchSensor772.description = "HAnimSite l_radial_styloid_pt";
HAnimSite771.children = new MFNode();

HAnimSite771.children[0] = TouchSensor772;

let Shape773 = browser.currentScene.createNode("Shape");
Shape773.USE = "HAnimSiteShape";
HAnimSite771.children[1] = Shape773;

HAnimJoint760.hAnimSite[2] = HAnimSite771;

let HAnimSite774 = browser.currentScene.createNode("HAnimSite");
HAnimSite774.name = "l_radiale_pt";
HAnimSite774.DEF = "hanim_l_radiale_pt";
HAnimSite774.translation = new SFVec3f(new float[0.2182,1.1212,-0.1167]);
let TouchSensor775 = browser.currentScene.createNode("TouchSensor");
TouchSensor775.description = "HAnimSite l_radiale_pt";
HAnimSite774.children = new MFNode();

HAnimSite774.children[0] = TouchSensor775;

let Shape776 = browser.currentScene.createNode("Shape");
Shape776.USE = "HAnimSiteShape";
HAnimSite774.children[1] = Shape776;

HAnimJoint760.hAnimSite[3] = HAnimSite774;

let HAnimJoint777 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint777.name = "l_elbow";
HAnimJoint777.DEF = "hanim_l_elbow";
HAnimJoint777.center = new SFVec3f(new float[0.2014,1.1357,-0.0682]);
HAnimJoint777.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint777.llimit = new MFFloat(new float[0,0,0]);
let Shape778 = browser.currentScene.createNode("Shape");
let LineSet779 = browser.currentScene.createNode("LineSet");
LineSet779.vertexCount = new MFInt32(new int[2]);
let Coordinate780 = browser.currentScene.createNode("Coordinate");
Coordinate780.point = new MFVec3f(new float[0.2014,1.1357,-0.0682,0.1984,0.8663,-0.0583]);
LineSet779.coord = Coordinate780;

//from l_elbow to l_radiocarpal
let ColorRGBA781 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA781.USE = "HAnimSegmentLineColorRGBA";
LineSet779.color = ColorRGBA781;

Shape778.geometry = LineSet779;

HAnimJoint777.shape = Shape778;

let HAnimSite782 = browser.currentScene.createNode("HAnimSite");
HAnimSite782.name = "l_ulnar_styloid_pt";
HAnimSite782.DEF = "hanim_l_ulnar_styloid_pt";
HAnimSite782.translation = new SFVec3f(new float[-0.2142,0.8529,-0.0648]);
let TouchSensor783 = browser.currentScene.createNode("TouchSensor");
TouchSensor783.description = "HAnimSite l_ulnar_styloid_pt";
HAnimSite782.children = new MFNode();

HAnimSite782.children[0] = TouchSensor783;

let Shape784 = browser.currentScene.createNode("Shape");
Shape784.USE = "HAnimSiteShape";
HAnimSite782.children[1] = Shape784;

HAnimJoint777.hAnimSite = new undefined();

HAnimJoint777.hAnimSite[0] = HAnimSite782;

let HAnimJoint785 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint785.name = "l_radiocarpal";
HAnimJoint785.DEF = "hanim_l_radiocarpal";
HAnimJoint785.center = new SFVec3f(new float[0.1984,0.8663,-0.0583]);
HAnimJoint785.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint785.llimit = new MFFloat(new float[0,0,0]);
let Shape786 = browser.currentScene.createNode("Shape");
let LineSet787 = browser.currentScene.createNode("LineSet");
LineSet787.vertexCount = new MFInt32(new int[2]);
let Coordinate788 = browser.currentScene.createNode("Coordinate");
Coordinate788.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0,1,0]);
LineSet787.coord = Coordinate788;

//from l_radiocarpal to l_midcarpal_1
let ColorRGBA789 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA789.USE = "HAnimSegmentLineColorRGBA";
LineSet787.color = ColorRGBA789;

Shape786.geometry = LineSet787;

HAnimJoint785.shape = Shape786;

let Shape790 = browser.currentScene.createNode("Shape");
let LineSet791 = browser.currentScene.createNode("LineSet");
LineSet791.vertexCount = new MFInt32(new int[2]);
let Coordinate792 = browser.currentScene.createNode("Coordinate");
Coordinate792.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0,1,0]);
LineSet791.coord = Coordinate792;

//from l_radiocarpal to l_midcarpal_2
let ColorRGBA793 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA793.USE = "HAnimSegmentLineColorRGBA";
LineSet791.color = ColorRGBA793;

Shape790.geometry = LineSet791;

HAnimJoint785.shape = new undefined();

HAnimJoint785.shape[0] = Shape790;

let Shape794 = browser.currentScene.createNode("Shape");
let LineSet795 = browser.currentScene.createNode("LineSet");
LineSet795.vertexCount = new MFInt32(new int[2]);
let Coordinate796 = browser.currentScene.createNode("Coordinate");
Coordinate796.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0,1,0]);
LineSet795.coord = Coordinate796;

//from l_radiocarpal to l_midcarpal_3
let ColorRGBA797 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA797.USE = "HAnimSegmentLineColorRGBA";
LineSet795.color = ColorRGBA797;

Shape794.geometry = LineSet795;

HAnimJoint785.shape[1] = Shape794;

let Shape798 = browser.currentScene.createNode("Shape");
let LineSet799 = browser.currentScene.createNode("LineSet");
LineSet799.vertexCount = new MFInt32(new int[2]);
let Coordinate800 = browser.currentScene.createNode("Coordinate");
Coordinate800.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0,1,0]);
LineSet799.coord = Coordinate800;

//from l_radiocarpal to l_midcarpal_4_5
let ColorRGBA801 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA801.USE = "HAnimSegmentLineColorRGBA";
LineSet799.color = ColorRGBA801;

Shape798.geometry = LineSet799;

HAnimJoint785.shape[2] = Shape798;

let HAnimJoint802 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint802.name = "l_midcarpal_1";
HAnimJoint802.DEF = "hanim_l_midcarpal_1";
HAnimJoint802.center = new SFVec3f(new float[0,1,0]);
HAnimJoint802.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint802.llimit = new MFFloat(new float[0,0,0]);
let Shape803 = browser.currentScene.createNode("Shape");
let LineSet804 = browser.currentScene.createNode("LineSet");
LineSet804.vertexCount = new MFInt32(new int[1]);
let Coordinate805 = browser.currentScene.createNode("Coordinate");
Coordinate805.point = new MFVec3f(new float[0.1924,0.8472,-0.0534]);
LineSet804.coord = Coordinate805;

//from l_midcarpal_1 to l_carpometacarpal_1
let ColorRGBA806 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA806.USE = "HAnimSegmentLineColorRGBA";
LineSet804.color = ColorRGBA806;

Shape803.geometry = LineSet804;

HAnimJoint802.shape = Shape803;

let HAnimJoint807 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint807.name = "l_carpometacarpal_1";
HAnimJoint807.DEF = "hanim_l_carpometacarpal_1";
HAnimJoint807.center = new SFVec3f(new float[0.1924,0.8472,-0.0534]);
HAnimJoint807.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint807.llimit = new MFFloat(new float[0,0,0]);
let Shape808 = browser.currentScene.createNode("Shape");
let LineSet809 = browser.currentScene.createNode("LineSet");
LineSet809.vertexCount = new MFInt32(new int[2]);
let Coordinate810 = browser.currentScene.createNode("Coordinate");
Coordinate810.point = new MFVec3f(new float[0.1924,0.8472,-0.0534,0.1951,0.8226,0.0246]);
LineSet809.coord = Coordinate810;

//from l_carpometacarpal_1 to l_metacarpophalangeal_1
let ColorRGBA811 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA811.USE = "HAnimSegmentLineColorRGBA";
LineSet809.color = ColorRGBA811;

Shape808.geometry = LineSet809;

HAnimJoint807.shape = Shape808;

let HAnimJoint812 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint812.name = "l_metacarpophalangeal_1";
HAnimJoint812.DEF = "hanim_l_metacarpophalangeal_1";
HAnimJoint812.center = new SFVec3f(new float[0.1951,0.8226,0.0246]);
HAnimJoint812.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint812.llimit = new MFFloat(new float[0,0,0]);
let Shape813 = browser.currentScene.createNode("Shape");
let LineSet814 = browser.currentScene.createNode("LineSet");
LineSet814.vertexCount = new MFInt32(new int[2]);
let Coordinate815 = browser.currentScene.createNode("Coordinate");
Coordinate815.point = new MFVec3f(new float[0.1951,0.8226,0.0246,0.1955,0.8159,0.0464]);
LineSet814.coord = Coordinate815;

//from l_metacarpophalangeal_1 to l_carpal_interphalangeal_1
let ColorRGBA816 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA816.USE = "HAnimSegmentLineColorRGBA";
LineSet814.color = ColorRGBA816;

Shape813.geometry = LineSet814;

HAnimJoint812.shape = Shape813;

let HAnimSite817 = browser.currentScene.createNode("HAnimSite");
HAnimSite817.name = "l_carpal_distal_phalanx_1_tip";
HAnimSite817.DEF = "hanim_l_carpal_distal_phalanx_1_tip";
HAnimSite817.translation = new SFVec3f(new float[0,1,0]);
let TouchSensor818 = browser.currentScene.createNode("TouchSensor");
TouchSensor818.description = "HAnimSite l_carpal_distal_phalanx_1_tip";
HAnimSite817.children = new MFNode();

HAnimSite817.children[0] = TouchSensor818;

let Shape819 = browser.currentScene.createNode("Shape");
Shape819.USE = "HAnimSiteShape";
HAnimSite817.children[1] = Shape819;

HAnimJoint812.hAnimSite = new undefined();

HAnimJoint812.hAnimSite[0] = HAnimSite817;

let HAnimJoint820 = browser.currentScene.createNode("HAnimJoint");
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

let HAnimJoint821 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint821.name = "l_midcarpal_2";
HAnimJoint821.DEF = "hanim_l_midcarpal_2";
HAnimJoint821.center = new SFVec3f(new float[0,1,0]);
HAnimJoint821.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint821.llimit = new MFFloat(new float[0,0,0]);
let Shape822 = browser.currentScene.createNode("Shape");
let LineSet823 = browser.currentScene.createNode("LineSet");
LineSet823.vertexCount = new MFInt32(new int[1]);
let Coordinate824 = browser.currentScene.createNode("Coordinate");
Coordinate824.point = new MFVec3f(new float[0.1983,0.8024,-0.028]);
LineSet823.coord = Coordinate824;

//from l_midcarpal_2 to l_carpometacarpal_2
let ColorRGBA825 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA825.USE = "HAnimSegmentLineColorRGBA";
LineSet823.color = ColorRGBA825;

Shape822.geometry = LineSet823;

HAnimJoint821.shape = Shape822;

let HAnimSite826 = browser.currentScene.createNode("HAnimSite");
HAnimSite826.name = "l_metacarpal_phalanx_2_pt";
HAnimSite826.DEF = "hanim_l_metacarpal_phalanx_2_pt";
HAnimSite826.translation = new SFVec3f(new float[0.2009,0.8139,-0.0237]);
let TouchSensor827 = browser.currentScene.createNode("TouchSensor");
TouchSensor827.description = "HAnimSite l_metacarpal_phalanx_2_pt";
HAnimSite826.children = new MFNode();

HAnimSite826.children[0] = TouchSensor827;

let Shape828 = browser.currentScene.createNode("Shape");
Shape828.USE = "HAnimSiteShape";
HAnimSite826.children[1] = Shape828;

HAnimJoint821.hAnimSite = new undefined();

HAnimJoint821.hAnimSite[0] = HAnimSite826;

let HAnimJoint829 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint829.name = "l_carpometacarpal_2";
HAnimJoint829.DEF = "hanim_l_carpometacarpal_2";
HAnimJoint829.center = new SFVec3f(new float[0.1983,0.8024,-0.028]);
HAnimJoint829.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint829.llimit = new MFFloat(new float[0,0,0]);
let Shape830 = browser.currentScene.createNode("Shape");
let LineSet831 = browser.currentScene.createNode("LineSet");
LineSet831.vertexCount = new MFInt32(new int[2]);
let Coordinate832 = browser.currentScene.createNode("Coordinate");
Coordinate832.point = new MFVec3f(new float[0.1983,0.8024,-0.028,0.1983,0.7815,-0.028]);
LineSet831.coord = Coordinate832;

//from l_carpometacarpal_2 to l_metacarpophalangeal_2
let ColorRGBA833 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA833.USE = "HAnimSegmentLineColorRGBA";
LineSet831.color = ColorRGBA833;

Shape830.geometry = LineSet831;

HAnimJoint829.shape = Shape830;

let HAnimJoint834 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint834.name = "l_metacarpophalangeal_2";
HAnimJoint834.DEF = "hanim_l_metacarpophalangeal_2";
HAnimJoint834.center = new SFVec3f(new float[0.1983,0.7815,-0.028]);
HAnimJoint834.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint834.llimit = new MFFloat(new float[0,0,0]);
let Shape835 = browser.currentScene.createNode("Shape");
let LineSet836 = browser.currentScene.createNode("LineSet");
LineSet836.vertexCount = new MFInt32(new int[2]);
let Coordinate837 = browser.currentScene.createNode("Coordinate");
Coordinate837.point = new MFVec3f(new float[0.1983,0.7815,-0.028,0.2017,0.7363,-0.0248]);
LineSet836.coord = Coordinate837;

//from l_metacarpophalangeal_2 to l_carpal_proximal_interphalangeal_2
let ColorRGBA838 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA838.USE = "HAnimSegmentLineColorRGBA";
LineSet836.color = ColorRGBA838;

Shape835.geometry = LineSet836;

HAnimJoint834.shape = Shape835;

let HAnimJoint839 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint839.name = "l_carpal_proximal_interphalangeal_2";
HAnimJoint839.DEF = "hanim_l_carpal_proximal_interphalangeal_2";
HAnimJoint839.center = new SFVec3f(new float[0.2017,0.7363,-0.0248]);
HAnimJoint839.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint839.llimit = new MFFloat(new float[0,0,0]);
let Shape840 = browser.currentScene.createNode("Shape");
let LineSet841 = browser.currentScene.createNode("LineSet");
LineSet841.vertexCount = new MFInt32(new int[2]);
let Coordinate842 = browser.currentScene.createNode("Coordinate");
Coordinate842.point = new MFVec3f(new float[0.2017,0.7363,-0.0248,0.2028,0.7139,-0.0236]);
LineSet841.coord = Coordinate842;

//from l_carpal_proximal_interphalangeal_2 to l_carpal_distal_interphalangeal_2
let ColorRGBA843 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA843.USE = "HAnimSegmentLineColorRGBA";
LineSet841.color = ColorRGBA843;

Shape840.geometry = LineSet841;

HAnimJoint839.shape = Shape840;

let HAnimSite844 = browser.currentScene.createNode("HAnimSite");
HAnimSite844.name = "l_carpal_distal_phalanx_2_tip";
HAnimSite844.DEF = "hanim_l_carpal_distal_phalanx_2_tip";
HAnimSite844.translation = new SFVec3f(new float[0,1,0]);
let TouchSensor845 = browser.currentScene.createNode("TouchSensor");
TouchSensor845.description = "HAnimSite l_carpal_distal_phalanx_2_tip";
HAnimSite844.children = new MFNode();

HAnimSite844.children[0] = TouchSensor845;

let Shape846 = browser.currentScene.createNode("Shape");
Shape846.USE = "HAnimSiteShape";
HAnimSite844.children[1] = Shape846;

HAnimJoint839.hAnimSite = new undefined();

HAnimJoint839.hAnimSite[0] = HAnimSite844;

let HAnimSite847 = browser.currentScene.createNode("HAnimSite");
HAnimSite847.name = "l_dactylion_pt";
HAnimSite847.DEF = "hanim_l_dactylion_pt";
HAnimSite847.translation = new SFVec3f(new float[0.2056,0.6743,-0.0482]);
let TouchSensor848 = browser.currentScene.createNode("TouchSensor");
TouchSensor848.description = "HAnimSite l_dactylion_pt";
HAnimSite847.children = new MFNode();

HAnimSite847.children[0] = TouchSensor848;

let Shape849 = browser.currentScene.createNode("Shape");
Shape849.USE = "HAnimSiteShape";
HAnimSite847.children[1] = Shape849;

HAnimJoint839.hAnimSite[1] = HAnimSite847;

let HAnimJoint850 = browser.currentScene.createNode("HAnimJoint");
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

let HAnimJoint851 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint851.name = "l_midcarpal_3";
HAnimJoint851.DEF = "hanim_l_midcarpal_3";
HAnimJoint851.center = new SFVec3f(new float[0,1,0]);
HAnimJoint851.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint851.llimit = new MFFloat(new float[0,0,0]);
let Shape852 = browser.currentScene.createNode("Shape");
let LineSet853 = browser.currentScene.createNode("LineSet");
LineSet853.vertexCount = new MFInt32(new int[1]);
let Coordinate854 = browser.currentScene.createNode("Coordinate");
Coordinate854.point = new MFVec3f(new float[0.1987,0.8029,-0.053]);
LineSet853.coord = Coordinate854;

//from l_midcarpal_3 to l_carpometacarpal_3
let ColorRGBA855 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA855.USE = "HAnimSegmentLineColorRGBA";
LineSet853.color = ColorRGBA855;

Shape852.geometry = LineSet853;

HAnimJoint851.shape = Shape852;

let HAnimSite856 = browser.currentScene.createNode("HAnimSite");
HAnimSite856.name = "l_metacarpal_phalanx_3_pt";
HAnimSite856.DEF = "hanim_l_metacarpal_phalanx_3_pt";
HAnimSite856.translation = new SFVec3f(new float[0,1,0]);
let TouchSensor857 = browser.currentScene.createNode("TouchSensor");
TouchSensor857.description = "HAnimSite l_metacarpal_phalanx_3_pt";
HAnimSite856.children = new MFNode();

HAnimSite856.children[0] = TouchSensor857;

let Shape858 = browser.currentScene.createNode("Shape");
Shape858.USE = "HAnimSiteShape";
HAnimSite856.children[1] = Shape858;

HAnimJoint851.hAnimSite = new undefined();

HAnimJoint851.hAnimSite[0] = HAnimSite856;

let HAnimJoint859 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint859.name = "l_carpometacarpal_3";
HAnimJoint859.DEF = "hanim_l_carpometacarpal_3";
HAnimJoint859.center = new SFVec3f(new float[0.1987,0.8029,-0.053]);
HAnimJoint859.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint859.llimit = new MFFloat(new float[0,0,0]);
let Shape860 = browser.currentScene.createNode("Shape");
let LineSet861 = browser.currentScene.createNode("LineSet");
LineSet861.vertexCount = new MFInt32(new int[2]);
let Coordinate862 = browser.currentScene.createNode("Coordinate");
Coordinate862.point = new MFVec3f(new float[0.1987,0.8029,-0.053,0.1987,0.7818,-0.053]);
LineSet861.coord = Coordinate862;

//from l_carpometacarpal_3 to l_metacarpophalangeal_3
let ColorRGBA863 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA863.USE = "HAnimSegmentLineColorRGBA";
LineSet861.color = ColorRGBA863;

Shape860.geometry = LineSet861;

HAnimJoint859.shape = Shape860;

let HAnimJoint864 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint864.name = "l_metacarpophalangeal_3";
HAnimJoint864.DEF = "hanim_l_metacarpophalangeal_3";
HAnimJoint864.center = new SFVec3f(new float[0.1987,0.7818,-0.053]);
HAnimJoint864.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint864.llimit = new MFFloat(new float[0,0,0]);
let Shape865 = browser.currentScene.createNode("Shape");
let LineSet866 = browser.currentScene.createNode("LineSet");
LineSet866.vertexCount = new MFInt32(new int[2]);
let Coordinate867 = browser.currentScene.createNode("Coordinate");
Coordinate867.point = new MFVec3f(new float[0.1987,0.7818,-0.053,0.2013,0.7273,-0.0503]);
LineSet866.coord = Coordinate867;

//from l_metacarpophalangeal_3 to l_carpal_proximal_interphalangeal_3
let ColorRGBA868 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA868.USE = "HAnimSegmentLineColorRGBA";
LineSet866.color = ColorRGBA868;

Shape865.geometry = LineSet866;

HAnimJoint864.shape = Shape865;

let HAnimJoint869 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint869.name = "l_carpal_proximal_interphalangeal_3";
HAnimJoint869.DEF = "hanim_l_carpal_proximal_interphalangeal_3";
HAnimJoint869.center = new SFVec3f(new float[0.2013,0.7273,-0.0503]);
HAnimJoint869.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint869.llimit = new MFFloat(new float[0,0,0]);
let Shape870 = browser.currentScene.createNode("Shape");
let LineSet871 = browser.currentScene.createNode("LineSet");
LineSet871.vertexCount = new MFInt32(new int[2]);
let Coordinate872 = browser.currentScene.createNode("Coordinate");
Coordinate872.point = new MFVec3f(new float[0.2013,0.7273,-0.0503,0.2026,0.7011,-0.0494]);
LineSet871.coord = Coordinate872;

//from l_carpal_proximal_interphalangeal_3 to l_carpal_distal_interphalangeal_3
let ColorRGBA873 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA873.USE = "HAnimSegmentLineColorRGBA";
LineSet871.color = ColorRGBA873;

Shape870.geometry = LineSet871;

HAnimJoint869.shape = Shape870;

let HAnimSite874 = browser.currentScene.createNode("HAnimSite");
HAnimSite874.name = "l_carpal_distal_phalanx_3_tip";
HAnimSite874.DEF = "hanim_l_carpal_distal_phalanx_3_tip";
HAnimSite874.translation = new SFVec3f(new float[0,1,0]);
let TouchSensor875 = browser.currentScene.createNode("TouchSensor");
TouchSensor875.description = "HAnimSite l_carpal_distal_phalanx_3_tip";
HAnimSite874.children = new MFNode();

HAnimSite874.children[0] = TouchSensor875;

let Shape876 = browser.currentScene.createNode("Shape");
Shape876.USE = "HAnimSiteShape";
HAnimSite874.children[1] = Shape876;

HAnimJoint869.hAnimSite = new undefined();

HAnimJoint869.hAnimSite[0] = HAnimSite874;

let HAnimJoint877 = browser.currentScene.createNode("HAnimJoint");
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

let HAnimJoint878 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint878.name = "l_midcarpal_4_5";
HAnimJoint878.DEF = "hanim_l_midcarpal_4_5";
HAnimJoint878.center = new SFVec3f(new float[0,1,0]);
HAnimJoint878.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint878.llimit = new MFFloat(new float[0,0,0]);
let Shape879 = browser.currentScene.createNode("Shape");
let LineSet880 = browser.currentScene.createNode("LineSet");
LineSet880.vertexCount = new MFInt32(new int[1]);
let Coordinate881 = browser.currentScene.createNode("Coordinate");
Coordinate881.point = new MFVec3f(new float[0.1956,0.8019,-0.0794]);
LineSet880.coord = Coordinate881;

//from l_midcarpal_4_5 to l_carpometacarpal_4
let ColorRGBA882 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA882.USE = "HAnimSegmentLineColorRGBA";
LineSet880.color = ColorRGBA882;

Shape879.geometry = LineSet880;

HAnimJoint878.shape = Shape879;

let Shape883 = browser.currentScene.createNode("Shape");
let LineSet884 = browser.currentScene.createNode("LineSet");
LineSet884.vertexCount = new MFInt32(new int[1]);
let Coordinate885 = browser.currentScene.createNode("Coordinate");
Coordinate885.point = new MFVec3f(new float[0.1925,0.8066,-0.1036]);
LineSet884.coord = Coordinate885;

//from l_midcarpal_4_5 to l_carpometacarpal_5
let ColorRGBA886 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA886.USE = "HAnimSegmentLineColorRGBA";
LineSet884.color = ColorRGBA886;

Shape883.geometry = LineSet884;

HAnimJoint878.shape = new undefined();

HAnimJoint878.shape[0] = Shape883;

let HAnimSite887 = browser.currentScene.createNode("HAnimSite");
HAnimSite887.name = "l_metacarpal_phalanx_5_pt";
HAnimSite887.DEF = "hanim_l_metacarpal_phalanx_5_pt";
HAnimSite887.translation = new SFVec3f(new float[0.1929,0.786,-0.1122]);
let TouchSensor888 = browser.currentScene.createNode("TouchSensor");
TouchSensor888.description = "HAnimSite l_metacarpal_phalanx_5_pt";
HAnimSite887.children = new MFNode();

HAnimSite887.children[0] = TouchSensor888;

let Shape889 = browser.currentScene.createNode("Shape");
Shape889.USE = "HAnimSiteShape";
HAnimSite887.children[1] = Shape889;

HAnimJoint878.hAnimSite[1] = HAnimSite887;

let HAnimJoint890 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint890.name = "l_carpometacarpal_4";
HAnimJoint890.DEF = "hanim_l_carpometacarpal_4";
HAnimJoint890.center = new SFVec3f(new float[0.1956,0.8019,-0.0794]);
HAnimJoint890.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint890.llimit = new MFFloat(new float[0,0,0]);
let Shape891 = browser.currentScene.createNode("Shape");
let LineSet892 = browser.currentScene.createNode("LineSet");
LineSet892.vertexCount = new MFInt32(new int[2]);
let Coordinate893 = browser.currentScene.createNode("Coordinate");
Coordinate893.point = new MFVec3f(new float[0.1956,0.8019,-0.0794,0.1956,0.7815,-0.0794]);
LineSet892.coord = Coordinate893;

//from l_carpometacarpal_4 to l_metacarpophalangeal_4
let ColorRGBA894 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA894.USE = "HAnimSegmentLineColorRGBA";
LineSet892.color = ColorRGBA894;

Shape891.geometry = LineSet892;

HAnimJoint890.shape = Shape891;

let HAnimJoint895 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint895.name = "l_metacarpophalangeal_4";
HAnimJoint895.DEF = "hanim_l_metacarpophalangeal_4";
HAnimJoint895.center = new SFVec3f(new float[0.1956,0.7815,-0.0794]);
HAnimJoint895.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint895.llimit = new MFFloat(new float[0,0,0]);
let Shape896 = browser.currentScene.createNode("Shape");
let LineSet897 = browser.currentScene.createNode("LineSet");
LineSet897.vertexCount = new MFInt32(new int[2]);
let Coordinate898 = browser.currentScene.createNode("Coordinate");
Coordinate898.point = new MFVec3f(new float[0.1956,0.7815,-0.0794,0.1973,0.7287,-0.0777]);
LineSet897.coord = Coordinate898;

//from l_metacarpophalangeal_4 to l_carpal_proximal_interphalangeal_4
let ColorRGBA899 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA899.USE = "HAnimSegmentLineColorRGBA";
LineSet897.color = ColorRGBA899;

Shape896.geometry = LineSet897;

HAnimJoint895.shape = Shape896;

let HAnimJoint900 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint900.name = "l_carpal_proximal_interphalangeal_4";
HAnimJoint900.DEF = "hanim_l_carpal_proximal_interphalangeal_4";
HAnimJoint900.center = new SFVec3f(new float[0.1973,0.7287,-0.0777]);
HAnimJoint900.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint900.llimit = new MFFloat(new float[0,0,0]);
let Shape901 = browser.currentScene.createNode("Shape");
let LineSet902 = browser.currentScene.createNode("LineSet");
LineSet902.vertexCount = new MFInt32(new int[2]);
let Coordinate903 = browser.currentScene.createNode("Coordinate");
Coordinate903.point = new MFVec3f(new float[0.1973,0.7287,-0.0777,0.1983,0.7045,-0.0767]);
LineSet902.coord = Coordinate903;

//from l_carpal_proximal_interphalangeal_4 to l_carpal_distal_interphalangeal_4
let ColorRGBA904 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA904.USE = "HAnimSegmentLineColorRGBA";
LineSet902.color = ColorRGBA904;

Shape901.geometry = LineSet902;

HAnimJoint900.shape = Shape901;

let HAnimSite905 = browser.currentScene.createNode("HAnimSite");
HAnimSite905.name = "l_carpal_distal_phalanx_4_tip";
HAnimSite905.DEF = "hanim_l_carpal_distal_phalanx_4_tip";
HAnimSite905.translation = new SFVec3f(new float[0,1,0]);
let TouchSensor906 = browser.currentScene.createNode("TouchSensor");
TouchSensor906.description = "HAnimSite l_carpal_distal_phalanx_4_tip";
HAnimSite905.children = new MFNode();

HAnimSite905.children[0] = TouchSensor906;

let Shape907 = browser.currentScene.createNode("Shape");
Shape907.USE = "HAnimSiteShape";
HAnimSite905.children[1] = Shape907;

HAnimJoint900.hAnimSite = new undefined();

HAnimJoint900.hAnimSite[0] = HAnimSite905;

let HAnimJoint908 = browser.currentScene.createNode("HAnimJoint");
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

let HAnimJoint909 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint909.name = "l_carpometacarpal_5";
HAnimJoint909.DEF = "hanim_l_carpometacarpal_5";
HAnimJoint909.center = new SFVec3f(new float[0.1925,0.8066,-0.1036]);
HAnimJoint909.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint909.llimit = new MFFloat(new float[0,0,0]);
let Shape910 = browser.currentScene.createNode("Shape");
let LineSet911 = browser.currentScene.createNode("LineSet");
LineSet911.vertexCount = new MFInt32(new int[2]);
let Coordinate912 = browser.currentScene.createNode("Coordinate");
Coordinate912.point = new MFVec3f(new float[0.1925,0.8066,-0.1036,0.1925,0.7866,-0.1036]);
LineSet911.coord = Coordinate912;

//from l_carpometacarpal_5 to l_metacarpophalangeal_5
let ColorRGBA913 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA913.USE = "HAnimSegmentLineColorRGBA";
LineSet911.color = ColorRGBA913;

Shape910.geometry = LineSet911;

HAnimJoint909.shape = Shape910;

let HAnimJoint914 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint914.name = "l_metacarpophalangeal_5";
HAnimJoint914.DEF = "hanim_l_metacarpophalangeal_5";
HAnimJoint914.center = new SFVec3f(new float[0.1925,0.7866,-0.1036]);
HAnimJoint914.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint914.llimit = new MFFloat(new float[0,0,0]);
let Shape915 = browser.currentScene.createNode("Shape");
let LineSet916 = browser.currentScene.createNode("LineSet");
LineSet916.vertexCount = new MFInt32(new int[2]);
let Coordinate917 = browser.currentScene.createNode("Coordinate");
Coordinate917.point = new MFVec3f(new float[0.1925,0.7866,-0.1036,0.1938,0.7452,-0.1024]);
LineSet916.coord = Coordinate917;

//from l_metacarpophalangeal_5 to l_carpal_proximal_interphalangeal_5
let ColorRGBA918 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA918.USE = "HAnimSegmentLineColorRGBA";
LineSet916.color = ColorRGBA918;

Shape915.geometry = LineSet916;

HAnimJoint914.shape = Shape915;

let HAnimJoint919 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint919.name = "l_carpal_proximal_interphalangeal_5";
HAnimJoint919.DEF = "hanim_l_carpal_proximal_interphalangeal_5";
HAnimJoint919.center = new SFVec3f(new float[0.1938,0.7452,-0.1024]);
HAnimJoint919.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint919.llimit = new MFFloat(new float[0,0,0]);
let Shape920 = browser.currentScene.createNode("Shape");
let LineSet921 = browser.currentScene.createNode("LineSet");
LineSet921.vertexCount = new MFInt32(new int[2]);
let Coordinate922 = browser.currentScene.createNode("Coordinate");
Coordinate922.point = new MFVec3f(new float[0.1938,0.7452,-0.1024,0.1948,0.7277,-0.1017]);
LineSet921.coord = Coordinate922;

//from l_carpal_proximal_interphalangeal_5 to l_carpal_distal_interphalangeal_5
let ColorRGBA923 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA923.USE = "HAnimSegmentLineColorRGBA";
LineSet921.color = ColorRGBA923;

Shape920.geometry = LineSet921;

HAnimJoint919.shape = Shape920;

let HAnimSite924 = browser.currentScene.createNode("HAnimSite");
HAnimSite924.name = "l_carpal_distal_phalanx_5_tip";
HAnimSite924.DEF = "hanim_l_carpal_distal_phalanx_5_tip";
HAnimSite924.translation = new SFVec3f(new float[0,1,0]);
let TouchSensor925 = browser.currentScene.createNode("TouchSensor");
TouchSensor925.description = "HAnimSite l_carpal_distal_phalanx_5_tip";
HAnimSite924.children = new MFNode();

HAnimSite924.children[0] = TouchSensor925;

let Shape926 = browser.currentScene.createNode("Shape");
Shape926.USE = "HAnimSiteShape";
HAnimSite924.children[1] = Shape926;

HAnimJoint919.hAnimSite = new undefined();

HAnimJoint919.hAnimSite[0] = HAnimSite924;

let HAnimJoint927 = browser.currentScene.createNode("HAnimJoint");
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

let HAnimJoint928 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint928.name = "r_sternoclavicular";
HAnimJoint928.DEF = "hanim_r_sternoclavicular";
HAnimJoint928.center = new SFVec3f(new float[-0.0694,1.46,-0.033]);
HAnimJoint928.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint928.llimit = new MFFloat(new float[0,0,0]);
let Shape929 = browser.currentScene.createNode("Shape");
let LineSet930 = browser.currentScene.createNode("LineSet");
LineSet930.vertexCount = new MFInt32(new int[2]);
let Coordinate931 = browser.currentScene.createNode("Coordinate");
Coordinate931.point = new MFVec3f(new float[-0.0694,1.46,-0.033,-0.0836,1.4281,-0.0401]);
LineSet930.coord = Coordinate931;

//from r_sternoclavicular to r_acromioclavicular
let ColorRGBA932 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA932.USE = "HAnimSegmentLineColorRGBA";
LineSet930.color = ColorRGBA932;

Shape929.geometry = LineSet930;

HAnimJoint928.shape = Shape929;

let HAnimJoint933 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint933.name = "r_acromioclavicular";
HAnimJoint933.DEF = "hanim_r_acromioclavicular";
HAnimJoint933.center = new SFVec3f(new float[-0.0836,1.4281,-0.0401]);
HAnimJoint933.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint933.llimit = new MFFloat(new float[0,0,0]);
let Shape934 = browser.currentScene.createNode("Shape");
let LineSet935 = browser.currentScene.createNode("LineSet");
LineSet935.vertexCount = new MFInt32(new int[2]);
let Coordinate936 = browser.currentScene.createNode("Coordinate");
Coordinate936.point = new MFVec3f(new float[-0.0836,1.4281,-0.0401,-0.1907,1.4407,-0.0325]);
LineSet935.coord = Coordinate936;

//from r_acromioclavicular to r_shoulder
let ColorRGBA937 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA937.USE = "HAnimSegmentLineColorRGBA";
LineSet935.color = ColorRGBA937;

Shape934.geometry = LineSet935;

HAnimJoint933.shape = Shape934;

let HAnimSite938 = browser.currentScene.createNode("HAnimSite");
HAnimSite938.name = "r_bideltoid_pt";
HAnimSite938.DEF = "hanim_r_bideltoid_pt";
HAnimSite938.translation = new SFVec3f(new float[0,1,0]);
let TouchSensor939 = browser.currentScene.createNode("TouchSensor");
TouchSensor939.description = "HAnimSite r_bideltoid_pt";
HAnimSite938.children = new MFNode();

HAnimSite938.children[0] = TouchSensor939;

let Shape940 = browser.currentScene.createNode("Shape");
Shape940.USE = "HAnimSiteShape";
HAnimSite938.children[1] = Shape940;

HAnimJoint933.hAnimSite = new undefined();

HAnimJoint933.hAnimSite[0] = HAnimSite938;

let HAnimSite941 = browser.currentScene.createNode("HAnimSite");
HAnimSite941.name = "r_humeral_lateral_epicondyles_pt";
HAnimSite941.DEF = "hanim_r_humeral_lateral_epicondyles_pt";
HAnimSite941.translation = new SFVec3f(new float[-0.2224,1.1517,-0.1033]);
let TouchSensor942 = browser.currentScene.createNode("TouchSensor");
TouchSensor942.description = "HAnimSite r_humeral_lateral_epicondyles_pt";
HAnimSite941.children = new MFNode();

HAnimSite941.children[0] = TouchSensor942;

let Shape943 = browser.currentScene.createNode("Shape");
Shape943.USE = "HAnimSiteShape";
HAnimSite941.children[1] = Shape943;

HAnimJoint933.hAnimSite[1] = HAnimSite941;

let HAnimJoint944 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint944.name = "r_shoulder";
HAnimJoint944.DEF = "hanim_r_shoulder";
HAnimJoint944.center = new SFVec3f(new float[-0.1907,1.4407,-0.0325]);
HAnimJoint944.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint944.llimit = new MFFloat(new float[0,0,0]);
let Shape945 = browser.currentScene.createNode("Shape");
let LineSet946 = browser.currentScene.createNode("LineSet");
LineSet946.vertexCount = new MFInt32(new int[2]);
let Coordinate947 = browser.currentScene.createNode("Coordinate");
Coordinate947.point = new MFVec3f(new float[-0.1907,1.4407,-0.0325,-0.1949,1.1388,-0.062]);
LineSet946.coord = Coordinate947;

//from r_shoulder to r_elbow
let ColorRGBA948 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA948.USE = "HAnimSegmentLineColorRGBA";
LineSet946.color = ColorRGBA948;

Shape945.geometry = LineSet946;

HAnimJoint944.shape = Shape945;

let HAnimSite949 = browser.currentScene.createNode("HAnimSite");
HAnimSite949.name = "r_humeral_medial_epicondyles_pt";
HAnimSite949.DEF = "hanim_r_humeral_medial_epicondyles_pt";
HAnimSite949.translation = new SFVec3f(new float[-0.168,1.1298,-0.1062]);
let TouchSensor950 = browser.currentScene.createNode("TouchSensor");
TouchSensor950.description = "HAnimSite r_humeral_medial_epicondyles_pt";
HAnimSite949.children = new MFNode();

HAnimSite949.children[0] = TouchSensor950;

let Shape951 = browser.currentScene.createNode("Shape");
Shape951.USE = "HAnimSiteShape";
HAnimSite949.children[1] = Shape951;

HAnimJoint944.hAnimSite = new undefined();

HAnimJoint944.hAnimSite[0] = HAnimSite949;

let HAnimSite952 = browser.currentScene.createNode("HAnimSite");
HAnimSite952.name = "r_olecranon_pt";
HAnimSite952.DEF = "hanim_r_olecranon_pt";
HAnimSite952.translation = new SFVec3f(new float[-0.1907,1.1405,-0.1065]);
let TouchSensor953 = browser.currentScene.createNode("TouchSensor");
TouchSensor953.description = "HAnimSite r_olecranon_pt";
HAnimSite952.children = new MFNode();

HAnimSite952.children[0] = TouchSensor953;

let Shape954 = browser.currentScene.createNode("Shape");
Shape954.USE = "HAnimSiteShape";
HAnimSite952.children[1] = Shape954;

HAnimJoint944.hAnimSite[1] = HAnimSite952;

let HAnimSite955 = browser.currentScene.createNode("HAnimSite");
HAnimSite955.name = "r_radial_styloid_pt";
HAnimSite955.DEF = "hanim_r_radial_styloid_pt";
HAnimSite955.translation = new SFVec3f(new float[-0.1884,0.8676,-0.036]);
let TouchSensor956 = browser.currentScene.createNode("TouchSensor");
TouchSensor956.description = "HAnimSite r_radial_styloid_pt";
HAnimSite955.children = new MFNode();

HAnimSite955.children[0] = TouchSensor956;

let Shape957 = browser.currentScene.createNode("Shape");
Shape957.USE = "HAnimSiteShape";
HAnimSite955.children[1] = Shape957;

HAnimJoint944.hAnimSite[2] = HAnimSite955;

let HAnimSite958 = browser.currentScene.createNode("HAnimSite");
HAnimSite958.name = "r_radiale_pt";
HAnimSite958.DEF = "hanim_r_radiale_pt";
HAnimSite958.translation = new SFVec3f(new float[-0.213,1.1305,-0.1091]);
let TouchSensor959 = browser.currentScene.createNode("TouchSensor");
TouchSensor959.description = "HAnimSite r_radiale_pt";
HAnimSite958.children = new MFNode();

HAnimSite958.children[0] = TouchSensor959;

let Shape960 = browser.currentScene.createNode("Shape");
Shape960.USE = "HAnimSiteShape";
HAnimSite958.children[1] = Shape960;

HAnimJoint944.hAnimSite[3] = HAnimSite958;

let HAnimJoint961 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint961.name = "r_elbow";
HAnimJoint961.DEF = "hanim_r_elbow";
HAnimJoint961.center = new SFVec3f(new float[-0.1949,1.1388,-0.062]);
HAnimJoint961.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint961.llimit = new MFFloat(new float[0,0,0]);
let Shape962 = browser.currentScene.createNode("Shape");
let LineSet963 = browser.currentScene.createNode("LineSet");
LineSet963.vertexCount = new MFInt32(new int[2]);
let Coordinate964 = browser.currentScene.createNode("Coordinate");
Coordinate964.point = new MFVec3f(new float[-0.1949,1.1388,-0.062,-0.1959,0.8694,-0.0521]);
LineSet963.coord = Coordinate964;

//from r_elbow to r_radiocarpal
let ColorRGBA965 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA965.USE = "HAnimSegmentLineColorRGBA";
LineSet963.color = ColorRGBA965;

Shape962.geometry = LineSet963;

HAnimJoint961.shape = Shape962;

let HAnimSite966 = browser.currentScene.createNode("HAnimSite");
HAnimSite966.name = "r_ulnar_styloid_pt";
HAnimSite966.DEF = "hanim_r_ulnar_styloid_pt";
HAnimSite966.translation = new SFVec3f(new float[-0.2117,0.8562,-0.0584]);
let TouchSensor967 = browser.currentScene.createNode("TouchSensor");
TouchSensor967.description = "HAnimSite r_ulnar_styloid_pt";
HAnimSite966.children = new MFNode();

HAnimSite966.children[0] = TouchSensor967;

let Shape968 = browser.currentScene.createNode("Shape");
Shape968.USE = "HAnimSiteShape";
HAnimSite966.children[1] = Shape968;

HAnimJoint961.hAnimSite = new undefined();

HAnimJoint961.hAnimSite[0] = HAnimSite966;

let HAnimJoint969 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint969.name = "r_radiocarpal";
HAnimJoint969.DEF = "hanim_r_radiocarpal";
HAnimJoint969.center = new SFVec3f(new float[-0.1959,0.8694,-0.0521]);
HAnimJoint969.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint969.llimit = new MFFloat(new float[0,0,0]);
let Shape970 = browser.currentScene.createNode("Shape");
let LineSet971 = browser.currentScene.createNode("LineSet");
LineSet971.vertexCount = new MFInt32(new int[2]);
let Coordinate972 = browser.currentScene.createNode("Coordinate");
Coordinate972.point = new MFVec3f(new float[-0.1959,0.8694,-0.0521,0,1,0]);
LineSet971.coord = Coordinate972;

//from r_radiocarpal to r_midcarpal_1
let ColorRGBA973 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA973.USE = "HAnimSegmentLineColorRGBA";
LineSet971.color = ColorRGBA973;

Shape970.geometry = LineSet971;

HAnimJoint969.shape = Shape970;

let Shape974 = browser.currentScene.createNode("Shape");
let LineSet975 = browser.currentScene.createNode("LineSet");
LineSet975.vertexCount = new MFInt32(new int[2]);
let Coordinate976 = browser.currentScene.createNode("Coordinate");
Coordinate976.point = new MFVec3f(new float[-0.1959,0.8694,-0.0521,0,1,0]);
LineSet975.coord = Coordinate976;

//from r_radiocarpal to r_midcarpal_2
let ColorRGBA977 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA977.USE = "HAnimSegmentLineColorRGBA";
LineSet975.color = ColorRGBA977;

Shape974.geometry = LineSet975;

HAnimJoint969.shape = new undefined();

HAnimJoint969.shape[0] = Shape974;

let Shape978 = browser.currentScene.createNode("Shape");
let LineSet979 = browser.currentScene.createNode("LineSet");
LineSet979.vertexCount = new MFInt32(new int[2]);
let Coordinate980 = browser.currentScene.createNode("Coordinate");
Coordinate980.point = new MFVec3f(new float[-0.1959,0.8694,-0.0521,0,1,0]);
LineSet979.coord = Coordinate980;

//from r_radiocarpal to r_midcarpal_3
let ColorRGBA981 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA981.USE = "HAnimSegmentLineColorRGBA";
LineSet979.color = ColorRGBA981;

Shape978.geometry = LineSet979;

HAnimJoint969.shape[1] = Shape978;

let Shape982 = browser.currentScene.createNode("Shape");
let LineSet983 = browser.currentScene.createNode("LineSet");
LineSet983.vertexCount = new MFInt32(new int[2]);
let Coordinate984 = browser.currentScene.createNode("Coordinate");
Coordinate984.point = new MFVec3f(new float[-0.1959,0.8694,-0.0521,0,1,0]);
LineSet983.coord = Coordinate984;

//from r_radiocarpal to r_midcarpal_4_5
let ColorRGBA985 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA985.USE = "HAnimSegmentLineColorRGBA";
LineSet983.color = ColorRGBA985;

Shape982.geometry = LineSet983;

HAnimJoint969.shape[2] = Shape982;

let HAnimJoint986 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint986.name = "r_midcarpal_1";
HAnimJoint986.DEF = "hanim_r_midcarpal_1";
HAnimJoint986.center = new SFVec3f(new float[0,1,0]);
HAnimJoint986.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint986.llimit = new MFFloat(new float[0,0,0]);
let Shape987 = browser.currentScene.createNode("Shape");
let LineSet988 = browser.currentScene.createNode("LineSet");
LineSet988.vertexCount = new MFInt32(new int[1]);
let Coordinate989 = browser.currentScene.createNode("Coordinate");
Coordinate989.point = new MFVec3f(new float[-0.1899,0.8502,-0.0473]);
LineSet988.coord = Coordinate989;

//from r_midcarpal_1 to r_carpometacarpal_1
let ColorRGBA990 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA990.USE = "HAnimSegmentLineColorRGBA";
LineSet988.color = ColorRGBA990;

Shape987.geometry = LineSet988;

HAnimJoint986.shape = Shape987;

let HAnimJoint991 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint991.name = "r_carpometacarpal_1";
HAnimJoint991.DEF = "hanim_r_carpometacarpal_1";
HAnimJoint991.center = new SFVec3f(new float[-0.1899,0.8502,-0.0473]);
HAnimJoint991.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint991.llimit = new MFFloat(new float[0,0,0]);
let Shape992 = browser.currentScene.createNode("Shape");
let LineSet993 = browser.currentScene.createNode("LineSet");
LineSet993.vertexCount = new MFInt32(new int[2]);
let Coordinate994 = browser.currentScene.createNode("Coordinate");
Coordinate994.point = new MFVec3f(new float[-0.1899,0.8502,-0.0473,-0.1874,0.8256,0.0306]);
LineSet993.coord = Coordinate994;

//from r_carpometacarpal_1 to r_metacarpophalangeal_1
let ColorRGBA995 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA995.USE = "HAnimSegmentLineColorRGBA";
LineSet993.color = ColorRGBA995;

Shape992.geometry = LineSet993;

HAnimJoint991.shape = Shape992;

let HAnimJoint996 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint996.name = "r_metacarpophalangeal_1";
HAnimJoint996.DEF = "hanim_r_metacarpophalangeal_1";
HAnimJoint996.center = new SFVec3f(new float[-0.1874,0.8256,0.0306]);
HAnimJoint996.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint996.llimit = new MFFloat(new float[0,0,0]);
let Shape997 = browser.currentScene.createNode("Shape");
let LineSet998 = browser.currentScene.createNode("LineSet");
LineSet998.vertexCount = new MFInt32(new int[2]);
let Coordinate999 = browser.currentScene.createNode("Coordinate");
Coordinate999.point = new MFVec3f(new float[-0.1874,0.8256,0.0306,-0.1864,0.819,0.0506]);
LineSet998.coord = Coordinate999;

//from r_metacarpophalangeal_1 to r_carpal_interphalangeal_1
let ColorRGBA1000 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1000.USE = "HAnimSegmentLineColorRGBA";
LineSet998.color = ColorRGBA1000;

Shape997.geometry = LineSet998;

HAnimJoint996.shape = Shape997;

let HAnimSite1001 = browser.currentScene.createNode("HAnimSite");
HAnimSite1001.name = "r_carpal_distal_phalanx_1_tip";
HAnimSite1001.DEF = "hanim_r_carpal_distal_phalanx_1_tip";
HAnimSite1001.translation = new SFVec3f(new float[0,1,0]);
let TouchSensor1002 = browser.currentScene.createNode("TouchSensor");
TouchSensor1002.description = "HAnimSite r_carpal_distal_phalanx_1_tip";
HAnimSite1001.children = new MFNode();

HAnimSite1001.children[0] = TouchSensor1002;

let Shape1003 = browser.currentScene.createNode("Shape");
Shape1003.USE = "HAnimSiteShape";
HAnimSite1001.children[1] = Shape1003;

HAnimJoint996.hAnimSite = new undefined();

HAnimJoint996.hAnimSite[0] = HAnimSite1001;

let HAnimJoint1004 = browser.currentScene.createNode("HAnimJoint");
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

let HAnimJoint1005 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1005.name = "r_midcarpal_2";
HAnimJoint1005.DEF = "hanim_r_midcarpal_2";
HAnimJoint1005.center = new SFVec3f(new float[0,1,0]);
HAnimJoint1005.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1005.llimit = new MFFloat(new float[0,0,0]);
let Shape1006 = browser.currentScene.createNode("Shape");
let LineSet1007 = browser.currentScene.createNode("LineSet");
LineSet1007.vertexCount = new MFInt32(new int[1]);
let Coordinate1008 = browser.currentScene.createNode("Coordinate");
Coordinate1008.point = new MFVec3f(new float[-0.1961,0.8055,-0.0218]);
LineSet1007.coord = Coordinate1008;

//from r_midcarpal_2 to r_carpometacarpal_2
let ColorRGBA1009 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1009.USE = "HAnimSegmentLineColorRGBA";
LineSet1007.color = ColorRGBA1009;

Shape1006.geometry = LineSet1007;

HAnimJoint1005.shape = Shape1006;

let HAnimSite1010 = browser.currentScene.createNode("HAnimSite");
HAnimSite1010.name = "r_metacarpal_phalanx_2_pt";
HAnimSite1010.DEF = "hanim_r_metacarpal_phalanx_2_pt";
HAnimSite1010.translation = new SFVec3f(new float[-0.1977,0.8169,-0.0177]);
let TouchSensor1011 = browser.currentScene.createNode("TouchSensor");
TouchSensor1011.description = "HAnimSite r_metacarpal_phalanx_2_pt";
HAnimSite1010.children = new MFNode();

HAnimSite1010.children[0] = TouchSensor1011;

let Shape1012 = browser.currentScene.createNode("Shape");
Shape1012.USE = "HAnimSiteShape";
HAnimSite1010.children[1] = Shape1012;

HAnimJoint1005.hAnimSite = new undefined();

HAnimJoint1005.hAnimSite[0] = HAnimSite1010;

let HAnimJoint1013 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1013.name = "r_carpometacarpal_2";
HAnimJoint1013.DEF = "hanim_r_carpometacarpal_2";
HAnimJoint1013.center = new SFVec3f(new float[-0.1961,0.8055,-0.0218]);
HAnimJoint1013.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1013.llimit = new MFFloat(new float[0,0,0]);
let Shape1014 = browser.currentScene.createNode("Shape");
let LineSet1015 = browser.currentScene.createNode("LineSet");
LineSet1015.vertexCount = new MFInt32(new int[2]);
let Coordinate1016 = browser.currentScene.createNode("Coordinate");
Coordinate1016.point = new MFVec3f(new float[-0.1961,0.8055,-0.0218,-0.1961,0.7846,-0.0218]);
LineSet1015.coord = Coordinate1016;

//from r_carpometacarpal_2 to r_metacarpophalangeal_2
let ColorRGBA1017 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1017.USE = "HAnimSegmentLineColorRGBA";
LineSet1015.color = ColorRGBA1017;

Shape1014.geometry = LineSet1015;

HAnimJoint1013.shape = Shape1014;

let HAnimJoint1018 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1018.name = "r_metacarpophalangeal_2";
HAnimJoint1018.DEF = "hanim_r_metacarpophalangeal_2";
HAnimJoint1018.center = new SFVec3f(new float[-0.1961,0.7846,-0.0218]);
HAnimJoint1018.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1018.llimit = new MFFloat(new float[0,0,0]);
let Shape1019 = browser.currentScene.createNode("Shape");
let LineSet1020 = browser.currentScene.createNode("LineSet");
LineSet1020.vertexCount = new MFInt32(new int[2]);
let Coordinate1021 = browser.currentScene.createNode("Coordinate");
Coordinate1021.point = new MFVec3f(new float[-0.1961,0.7846,-0.0218,-0.1954,0.7393,-0.0185]);
LineSet1020.coord = Coordinate1021;

//from r_metacarpophalangeal_2 to r_carpal_proximal_interphalangeal_2
let ColorRGBA1022 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1022.USE = "HAnimSegmentLineColorRGBA";
LineSet1020.color = ColorRGBA1022;

Shape1019.geometry = LineSet1020;

HAnimJoint1018.shape = Shape1019;

let HAnimJoint1023 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1023.name = "r_carpal_proximal_interphalangeal_2";
HAnimJoint1023.DEF = "hanim_r_carpal_proximal_interphalangeal_2";
HAnimJoint1023.center = new SFVec3f(new float[-0.1954,0.7393,-0.0185]);
HAnimJoint1023.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1023.llimit = new MFFloat(new float[0,0,0]);
let Shape1024 = browser.currentScene.createNode("Shape");
let LineSet1025 = browser.currentScene.createNode("LineSet");
LineSet1025.vertexCount = new MFInt32(new int[2]);
let Coordinate1026 = browser.currentScene.createNode("Coordinate");
Coordinate1026.point = new MFVec3f(new float[-0.1954,0.7393,-0.0185,-0.1945,0.7169,-0.0173]);
LineSet1025.coord = Coordinate1026;

//from r_carpal_proximal_interphalangeal_2 to r_carpal_distal_interphalangeal_2
let ColorRGBA1027 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1027.USE = "HAnimSegmentLineColorRGBA";
LineSet1025.color = ColorRGBA1027;

Shape1024.geometry = LineSet1025;

HAnimJoint1023.shape = Shape1024;

let HAnimSite1028 = browser.currentScene.createNode("HAnimSite");
HAnimSite1028.name = "r_carpal_distal_phalanx_2_tip";
HAnimSite1028.DEF = "hanim_r_carpal_distal_phalanx_2_tip";
HAnimSite1028.translation = new SFVec3f(new float[0,1,0]);
let TouchSensor1029 = browser.currentScene.createNode("TouchSensor");
TouchSensor1029.description = "HAnimSite r_carpal_distal_phalanx_2_tip";
HAnimSite1028.children = new MFNode();

HAnimSite1028.children[0] = TouchSensor1029;

let Shape1030 = browser.currentScene.createNode("Shape");
Shape1030.USE = "HAnimSiteShape";
HAnimSite1028.children[1] = Shape1030;

HAnimJoint1023.hAnimSite = new undefined();

HAnimJoint1023.hAnimSite[0] = HAnimSite1028;

let HAnimSite1031 = browser.currentScene.createNode("HAnimSite");
HAnimSite1031.name = "r_dactylion_pt";
HAnimSite1031.DEF = "hanim_r_dactylion_pt";
HAnimSite1031.translation = new SFVec3f(new float[-0.1941,0.6772,-0.0423]);
let TouchSensor1032 = browser.currentScene.createNode("TouchSensor");
TouchSensor1032.description = "HAnimSite r_dactylion_pt";
HAnimSite1031.children = new MFNode();

HAnimSite1031.children[0] = TouchSensor1032;

let Shape1033 = browser.currentScene.createNode("Shape");
Shape1033.USE = "HAnimSiteShape";
HAnimSite1031.children[1] = Shape1033;

HAnimJoint1023.hAnimSite[1] = HAnimSite1031;

let HAnimJoint1034 = browser.currentScene.createNode("HAnimJoint");
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

let HAnimJoint1035 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1035.name = "r_midcarpal_3";
HAnimJoint1035.DEF = "hanim_r_midcarpal_3";
HAnimJoint1035.center = new SFVec3f(new float[0,1,0]);
HAnimJoint1035.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1035.llimit = new MFFloat(new float[0,0,0]);
let Shape1036 = browser.currentScene.createNode("Shape");
let LineSet1037 = browser.currentScene.createNode("LineSet");
LineSet1037.vertexCount = new MFInt32(new int[1]);
let Coordinate1038 = browser.currentScene.createNode("Coordinate");
Coordinate1038.point = new MFVec3f(new float[-0.1972,0.806,-0.0468]);
LineSet1037.coord = Coordinate1038;

//from r_midcarpal_3 to r_carpometacarpal_3
let ColorRGBA1039 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1039.USE = "HAnimSegmentLineColorRGBA";
LineSet1037.color = ColorRGBA1039;

Shape1036.geometry = LineSet1037;

HAnimJoint1035.shape = Shape1036;

let HAnimSite1040 = browser.currentScene.createNode("HAnimSite");
HAnimSite1040.name = "r_metacarpal_phalanx_3_pt";
HAnimSite1040.DEF = "hanim_r_metacarpal_phalanx_3_pt";
HAnimSite1040.translation = new SFVec3f(new float[0,1,0]);
let TouchSensor1041 = browser.currentScene.createNode("TouchSensor");
TouchSensor1041.description = "HAnimSite r_metacarpal_phalanx_3_pt";
HAnimSite1040.children = new MFNode();

HAnimSite1040.children[0] = TouchSensor1041;

let Shape1042 = browser.currentScene.createNode("Shape");
Shape1042.USE = "HAnimSiteShape";
HAnimSite1040.children[1] = Shape1042;

HAnimJoint1035.hAnimSite = new undefined();

HAnimJoint1035.hAnimSite[0] = HAnimSite1040;

let HAnimJoint1043 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1043.name = "r_carpometacarpal_3";
HAnimJoint1043.DEF = "hanim_r_carpometacarpal_3";
HAnimJoint1043.center = new SFVec3f(new float[-0.1972,0.806,-0.0468]);
HAnimJoint1043.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1043.llimit = new MFFloat(new float[0,0,0]);
let Shape1044 = browser.currentScene.createNode("Shape");
let LineSet1045 = browser.currentScene.createNode("LineSet");
LineSet1045.vertexCount = new MFInt32(new int[2]);
let Coordinate1046 = browser.currentScene.createNode("Coordinate");
Coordinate1046.point = new MFVec3f(new float[-0.1972,0.806,-0.0468,-0.1972,0.7849,-0.0468]);
LineSet1045.coord = Coordinate1046;

//from r_carpometacarpal_3 to r_metacarpophalangeal_3
let ColorRGBA1047 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1047.USE = "HAnimSegmentLineColorRGBA";
LineSet1045.color = ColorRGBA1047;

Shape1044.geometry = LineSet1045;

HAnimJoint1043.shape = Shape1044;

let HAnimJoint1048 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1048.name = "r_metacarpophalangeal_3";
HAnimJoint1048.DEF = "hanim_r_metacarpophalangeal_3";
HAnimJoint1048.center = new SFVec3f(new float[-0.1972,0.7849,-0.0468]);
HAnimJoint1048.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1048.llimit = new MFFloat(new float[0,0,0]);
let Shape1049 = browser.currentScene.createNode("Shape");
let LineSet1050 = browser.currentScene.createNode("LineSet");
LineSet1050.vertexCount = new MFInt32(new int[2]);
let Coordinate1051 = browser.currentScene.createNode("Coordinate");
Coordinate1051.point = new MFVec3f(new float[-0.1972,0.7849,-0.0468,-0.195,0.7304,-0.0441]);
LineSet1050.coord = Coordinate1051;

//from r_metacarpophalangeal_3 to r_carpal_proximal_interphalangeal_3
let ColorRGBA1052 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1052.USE = "HAnimSegmentLineColorRGBA";
LineSet1050.color = ColorRGBA1052;

Shape1049.geometry = LineSet1050;

HAnimJoint1048.shape = Shape1049;

let HAnimJoint1053 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1053.name = "r_carpal_proximal_interphalangeal_3";
HAnimJoint1053.DEF = "hanim_r_carpal_proximal_interphalangeal_3";
HAnimJoint1053.center = new SFVec3f(new float[-0.195,0.7304,-0.0441]);
HAnimJoint1053.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1053.llimit = new MFFloat(new float[0,0,0]);
let Shape1054 = browser.currentScene.createNode("Shape");
let LineSet1055 = browser.currentScene.createNode("LineSet");
LineSet1055.vertexCount = new MFInt32(new int[2]);
let Coordinate1056 = browser.currentScene.createNode("Coordinate");
Coordinate1056.point = new MFVec3f(new float[-0.195,0.7304,-0.0441,-0.1939,0.7042,-0.0432]);
LineSet1055.coord = Coordinate1056;

//from r_carpal_proximal_interphalangeal_3 to r_carpal_distal_interphalangeal_3
let ColorRGBA1057 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1057.USE = "HAnimSegmentLineColorRGBA";
LineSet1055.color = ColorRGBA1057;

Shape1054.geometry = LineSet1055;

HAnimJoint1053.shape = Shape1054;

let HAnimSite1058 = browser.currentScene.createNode("HAnimSite");
HAnimSite1058.name = "r_carpal_distal_phalanx_3_tip";
HAnimSite1058.DEF = "hanim_r_carpal_distal_phalanx_3_tip";
HAnimSite1058.translation = new SFVec3f(new float[0,1,0]);
let TouchSensor1059 = browser.currentScene.createNode("TouchSensor");
TouchSensor1059.description = "HAnimSite r_carpal_distal_phalanx_3_tip";
HAnimSite1058.children = new MFNode();

HAnimSite1058.children[0] = TouchSensor1059;

let Shape1060 = browser.currentScene.createNode("Shape");
Shape1060.USE = "HAnimSiteShape";
HAnimSite1058.children[1] = Shape1060;

HAnimJoint1053.hAnimSite = new undefined();

HAnimJoint1053.hAnimSite[0] = HAnimSite1058;

let HAnimJoint1061 = browser.currentScene.createNode("HAnimJoint");
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

let HAnimJoint1062 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1062.name = "r_midcarpal_4_5";
HAnimJoint1062.DEF = "hanim_r_midcarpal_4_5";
HAnimJoint1062.center = new SFVec3f(new float[0,1,0]);
HAnimJoint1062.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1062.llimit = new MFFloat(new float[0,0,0]);
let Shape1063 = browser.currentScene.createNode("Shape");
let LineSet1064 = browser.currentScene.createNode("LineSet");
LineSet1064.vertexCount = new MFInt32(new int[1]);
let Coordinate1065 = browser.currentScene.createNode("Coordinate");
Coordinate1065.point = new MFVec3f(new float[-0.1951,0.8049,-0.0732]);
LineSet1064.coord = Coordinate1065;

//from r_midcarpal_4_5 to r_carpometacarpal_4
let ColorRGBA1066 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1066.USE = "HAnimSegmentLineColorRGBA";
LineSet1064.color = ColorRGBA1066;

Shape1063.geometry = LineSet1064;

HAnimJoint1062.shape = Shape1063;

let Shape1067 = browser.currentScene.createNode("Shape");
let LineSet1068 = browser.currentScene.createNode("LineSet");
LineSet1068.vertexCount = new MFInt32(new int[1]);
let Coordinate1069 = browser.currentScene.createNode("Coordinate");
Coordinate1069.point = new MFVec3f(new float[-0.1926,0.8096,-0.0975]);
LineSet1068.coord = Coordinate1069;

//from r_midcarpal_4_5 to r_carpometacarpal_5
let ColorRGBA1070 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1070.USE = "HAnimSegmentLineColorRGBA";
LineSet1068.color = ColorRGBA1070;

Shape1067.geometry = LineSet1068;

HAnimJoint1062.shape = new undefined();

HAnimJoint1062.shape[0] = Shape1067;

let HAnimSite1071 = browser.currentScene.createNode("HAnimSite");
HAnimSite1071.name = "r_metacarpal_phalanx_5_pt";
HAnimSite1071.DEF = "hanim_r_metacarpal_phalanx_5_pt";
HAnimSite1071.translation = new SFVec3f(new float[-0.1929,0.789,-0.1064]);
let TouchSensor1072 = browser.currentScene.createNode("TouchSensor");
TouchSensor1072.description = "HAnimSite r_metacarpal_phalanx_5_pt";
HAnimSite1071.children = new MFNode();

HAnimSite1071.children[0] = TouchSensor1072;

let Shape1073 = browser.currentScene.createNode("Shape");
Shape1073.USE = "HAnimSiteShape";
HAnimSite1071.children[1] = Shape1073;

HAnimJoint1062.hAnimSite[1] = HAnimSite1071;

let HAnimJoint1074 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1074.name = "r_carpometacarpal_4";
HAnimJoint1074.DEF = "hanim_r_carpometacarpal_4";
HAnimJoint1074.center = new SFVec3f(new float[-0.1951,0.8049,-0.0732]);
HAnimJoint1074.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1074.llimit = new MFFloat(new float[0,0,0]);
let Shape1075 = browser.currentScene.createNode("Shape");
let LineSet1076 = browser.currentScene.createNode("LineSet");
LineSet1076.vertexCount = new MFInt32(new int[2]);
let Coordinate1077 = browser.currentScene.createNode("Coordinate");
Coordinate1077.point = new MFVec3f(new float[-0.1951,0.8049,-0.0732,-0.1951,0.7845,-0.0732]);
LineSet1076.coord = Coordinate1077;

//from r_carpometacarpal_4 to r_metacarpophalangeal_4
let ColorRGBA1078 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1078.USE = "HAnimSegmentLineColorRGBA";
LineSet1076.color = ColorRGBA1078;

Shape1075.geometry = LineSet1076;

HAnimJoint1074.shape = Shape1075;

let HAnimJoint1079 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1079.name = "r_metacarpophalangeal_4";
HAnimJoint1079.DEF = "hanim_r_metacarpophalangeal_4";
HAnimJoint1079.center = new SFVec3f(new float[-0.1951,0.7845,-0.0732]);
HAnimJoint1079.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1079.llimit = new MFFloat(new float[0,0,0]);
let Shape1080 = browser.currentScene.createNode("Shape");
let LineSet1081 = browser.currentScene.createNode("LineSet");
LineSet1081.vertexCount = new MFInt32(new int[2]);
let Coordinate1082 = browser.currentScene.createNode("Coordinate");
Coordinate1082.point = new MFVec3f(new float[-0.1951,0.7845,-0.0732,-0.192,0.7318,-0.0716]);
LineSet1081.coord = Coordinate1082;

//from r_metacarpophalangeal_4 to r_carpal_proximal_interphalangeal_4
let ColorRGBA1083 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1083.USE = "HAnimSegmentLineColorRGBA";
LineSet1081.color = ColorRGBA1083;

Shape1080.geometry = LineSet1081;

HAnimJoint1079.shape = Shape1080;

let HAnimJoint1084 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1084.name = "r_carpal_proximal_interphalangeal_4";
HAnimJoint1084.DEF = "hanim_r_carpal_proximal_interphalangeal_4";
HAnimJoint1084.center = new SFVec3f(new float[-0.192,0.7318,-0.0716]);
HAnimJoint1084.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1084.llimit = new MFFloat(new float[0,0,0]);
let Shape1085 = browser.currentScene.createNode("Shape");
let LineSet1086 = browser.currentScene.createNode("LineSet");
LineSet1086.vertexCount = new MFInt32(new int[2]);
let Coordinate1087 = browser.currentScene.createNode("Coordinate");
Coordinate1087.point = new MFVec3f(new float[-0.192,0.7318,-0.0716,-0.1908,0.7077,-0.0706]);
LineSet1086.coord = Coordinate1087;

//from r_carpal_proximal_interphalangeal_4 to r_carpal_distal_interphalangeal_4
let ColorRGBA1088 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1088.USE = "HAnimSegmentLineColorRGBA";
LineSet1086.color = ColorRGBA1088;

Shape1085.geometry = LineSet1086;

HAnimJoint1084.shape = Shape1085;

let HAnimSite1089 = browser.currentScene.createNode("HAnimSite");
HAnimSite1089.name = "r_carpal_distal_phalanx_4_tip";
HAnimSite1089.DEF = "hanim_r_carpal_distal_phalanx_4_tip";
HAnimSite1089.translation = new SFVec3f(new float[0,1,0]);
let TouchSensor1090 = browser.currentScene.createNode("TouchSensor");
TouchSensor1090.description = "HAnimSite r_carpal_distal_phalanx_4_tip";
HAnimSite1089.children = new MFNode();

HAnimSite1089.children[0] = TouchSensor1090;

let Shape1091 = browser.currentScene.createNode("Shape");
Shape1091.USE = "HAnimSiteShape";
HAnimSite1089.children[1] = Shape1091;

HAnimJoint1084.hAnimSite = new undefined();

HAnimJoint1084.hAnimSite[0] = HAnimSite1089;

let HAnimJoint1092 = browser.currentScene.createNode("HAnimJoint");
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

let HAnimJoint1093 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1093.name = "r_carpometacarpal_5";
HAnimJoint1093.DEF = "hanim_r_carpometacarpal_5";
HAnimJoint1093.center = new SFVec3f(new float[-0.1926,0.8096,-0.0975]);
HAnimJoint1093.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1093.llimit = new MFFloat(new float[0,0,0]);
let Shape1094 = browser.currentScene.createNode("Shape");
let LineSet1095 = browser.currentScene.createNode("LineSet");
LineSet1095.vertexCount = new MFInt32(new int[2]);
let Coordinate1096 = browser.currentScene.createNode("Coordinate");
Coordinate1096.point = new MFVec3f(new float[-0.1926,0.8096,-0.0975,-0.1926,0.7896,-0.0975]);
LineSet1095.coord = Coordinate1096;

//from r_carpometacarpal_5 to r_metacarpophalangeal_5
let ColorRGBA1097 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1097.USE = "HAnimSegmentLineColorRGBA";
LineSet1095.color = ColorRGBA1097;

Shape1094.geometry = LineSet1095;

HAnimJoint1093.shape = Shape1094;

let HAnimJoint1098 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1098.name = "r_metacarpophalangeal_5";
HAnimJoint1098.DEF = "hanim_r_metacarpophalangeal_5";
HAnimJoint1098.center = new SFVec3f(new float[-0.1926,0.7896,-0.0975]);
HAnimJoint1098.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1098.llimit = new MFFloat(new float[0,0,0]);
let Shape1099 = browser.currentScene.createNode("Shape");
let LineSet1100 = browser.currentScene.createNode("LineSet");
LineSet1100.vertexCount = new MFInt32(new int[2]);
let Coordinate1101 = browser.currentScene.createNode("Coordinate");
Coordinate1101.point = new MFVec3f(new float[-0.1926,0.7896,-0.0975,-0.1902,0.7483,-0.0963]);
LineSet1100.coord = Coordinate1101;

//from r_metacarpophalangeal_5 to r_carpal_proximal_interphalangeal_5
let ColorRGBA1102 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1102.USE = "HAnimSegmentLineColorRGBA";
LineSet1100.color = ColorRGBA1102;

Shape1099.geometry = LineSet1100;

HAnimJoint1098.shape = Shape1099;

let HAnimJoint1103 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1103.name = "r_carpal_proximal_interphalangeal_5";
HAnimJoint1103.DEF = "hanim_r_carpal_proximal_interphalangeal_5";
HAnimJoint1103.center = new SFVec3f(new float[-0.1902,0.7483,-0.0963]);
HAnimJoint1103.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1103.llimit = new MFFloat(new float[0,0,0]);
let Shape1104 = browser.currentScene.createNode("Shape");
let LineSet1105 = browser.currentScene.createNode("LineSet");
LineSet1105.vertexCount = new MFInt32(new int[2]);
let Coordinate1106 = browser.currentScene.createNode("Coordinate");
Coordinate1106.point = new MFVec3f(new float[-0.1902,0.7483,-0.0963,-0.1908,0.754,-0.096]);
LineSet1105.coord = Coordinate1106;

//from r_carpal_proximal_interphalangeal_5 to r_carpal_distal_interphalangeal_5
let ColorRGBA1107 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1107.USE = "HAnimSegmentLineColorRGBA";
LineSet1105.color = ColorRGBA1107;

Shape1104.geometry = LineSet1105;

HAnimJoint1103.shape = Shape1104;

let HAnimSite1108 = browser.currentScene.createNode("HAnimSite");
HAnimSite1108.name = "r_carpal_distal_phalanx_5_tip";
HAnimSite1108.DEF = "hanim_r_carpal_distal_phalanx_5_tip";
HAnimSite1108.translation = new SFVec3f(new float[0,1,0]);
let TouchSensor1109 = browser.currentScene.createNode("TouchSensor");
TouchSensor1109.description = "HAnimSite r_carpal_distal_phalanx_5_tip";
HAnimSite1108.children = new MFNode();

HAnimSite1108.children[0] = TouchSensor1109;

let Shape1110 = browser.currentScene.createNode("Shape");
Shape1110.USE = "HAnimSiteShape";
HAnimSite1108.children[1] = Shape1110;

HAnimJoint1103.hAnimSite = new undefined();

HAnimJoint1103.hAnimSite[0] = HAnimSite1108;

let HAnimJoint1111 = browser.currentScene.createNode("HAnimJoint");
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

let HAnimJoint1112 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1112.USE = "hanim_humanoid_root";
HAnimHumanoid31.joints[1] = HAnimJoint1112;

let HAnimJoint1113 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1113.USE = "hanim_sacroiliac";
HAnimHumanoid31.joints[2] = HAnimJoint1113;

let HAnimJoint1114 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1114.USE = "hanim_l_hip";
HAnimHumanoid31.joints[3] = HAnimJoint1114;

let HAnimJoint1115 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1115.USE = "hanim_l_knee";
HAnimHumanoid31.joints[4] = HAnimJoint1115;

let HAnimJoint1116 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1116.USE = "hanim_l_talocrural";
HAnimHumanoid31.joints[5] = HAnimJoint1116;

let HAnimJoint1117 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1117.USE = "hanim_l_talocalcaneonavicular";
HAnimHumanoid31.joints[6] = HAnimJoint1117;

let HAnimJoint1118 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1118.USE = "hanim_l_cuneonavicular_1";
HAnimHumanoid31.joints[7] = HAnimJoint1118;

let HAnimJoint1119 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1119.USE = "hanim_l_tarsometatarsal_1";
HAnimHumanoid31.joints[8] = HAnimJoint1119;

let HAnimJoint1120 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1120.USE = "hanim_l_metatarsophalangeal_1";
HAnimHumanoid31.joints[9] = HAnimJoint1120;

let HAnimJoint1121 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1121.USE = "hanim_l_tarsal_interphalangeal_1";
HAnimHumanoid31.joints[10] = HAnimJoint1121;

let HAnimJoint1122 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1122.USE = "hanim_l_cuneonavicular_2";
HAnimHumanoid31.joints[11] = HAnimJoint1122;

let HAnimJoint1123 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1123.USE = "hanim_l_tarsometatarsal_2";
HAnimHumanoid31.joints[12] = HAnimJoint1123;

let HAnimJoint1124 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1124.USE = "hanim_l_metatarsophalangeal_2";
HAnimHumanoid31.joints[13] = HAnimJoint1124;

let HAnimJoint1125 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1125.USE = "hanim_l_tarsal_proximal_interphalangeal_2";
HAnimHumanoid31.joints[14] = HAnimJoint1125;

let HAnimJoint1126 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1126.USE = "hanim_l_tarsal_distal_interphalangeal_2";
HAnimHumanoid31.joints[15] = HAnimJoint1126;

let HAnimJoint1127 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1127.USE = "hanim_l_cuneonavicular_3";
HAnimHumanoid31.joints[16] = HAnimJoint1127;

let HAnimJoint1128 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1128.USE = "hanim_l_tarsometatarsal_3";
HAnimHumanoid31.joints[17] = HAnimJoint1128;

let HAnimJoint1129 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1129.USE = "hanim_l_metatarsophalangeal_3";
HAnimHumanoid31.joints[18] = HAnimJoint1129;

let HAnimJoint1130 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1130.USE = "hanim_l_tarsal_proximal_interphalangeal_3";
HAnimHumanoid31.joints[19] = HAnimJoint1130;

let HAnimJoint1131 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1131.USE = "hanim_l_tarsal_distal_interphalangeal_3";
HAnimHumanoid31.joints[20] = HAnimJoint1131;

let HAnimJoint1132 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1132.USE = "hanim_l_calcaneocuboid";
HAnimHumanoid31.joints[21] = HAnimJoint1132;

let HAnimJoint1133 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1133.USE = "hanim_l_transversetarsal";
HAnimHumanoid31.joints[22] = HAnimJoint1133;

let HAnimJoint1134 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1134.USE = "hanim_l_tarsometatarsal_4";
HAnimHumanoid31.joints[23] = HAnimJoint1134;

let HAnimJoint1135 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1135.USE = "hanim_l_metatarsophalangeal_4";
HAnimHumanoid31.joints[24] = HAnimJoint1135;

let HAnimJoint1136 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1136.USE = "hanim_l_tarsal_proximal_interphalangeal_4";
HAnimHumanoid31.joints[25] = HAnimJoint1136;

let HAnimJoint1137 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1137.USE = "hanim_l_tarsal_distal_interphalangeal_4";
HAnimHumanoid31.joints[26] = HAnimJoint1137;

let HAnimJoint1138 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1138.USE = "hanim_l_tarsometatarsal_5";
HAnimHumanoid31.joints[27] = HAnimJoint1138;

let HAnimJoint1139 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1139.USE = "hanim_l_metatarsophalangeal_5";
HAnimHumanoid31.joints[28] = HAnimJoint1139;

let HAnimJoint1140 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1140.USE = "hanim_l_tarsal_proximal_interphalangeal_5";
HAnimHumanoid31.joints[29] = HAnimJoint1140;

let HAnimJoint1141 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1141.USE = "hanim_l_tarsal_distal_interphalangeal_5";
HAnimHumanoid31.joints[30] = HAnimJoint1141;

let HAnimJoint1142 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1142.USE = "hanim_r_hip";
HAnimHumanoid31.joints[31] = HAnimJoint1142;

let HAnimJoint1143 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1143.USE = "hanim_r_knee";
HAnimHumanoid31.joints[32] = HAnimJoint1143;

let HAnimJoint1144 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1144.USE = "hanim_r_talocrural";
HAnimHumanoid31.joints[33] = HAnimJoint1144;

let HAnimJoint1145 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1145.USE = "hanim_r_talocalcaneonavicular";
HAnimHumanoid31.joints[34] = HAnimJoint1145;

let HAnimJoint1146 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1146.USE = "hanim_r_cuneonavicular_1";
HAnimHumanoid31.joints[35] = HAnimJoint1146;

let HAnimJoint1147 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1147.USE = "hanim_r_tarsometatarsal_1";
HAnimHumanoid31.joints[36] = HAnimJoint1147;

let HAnimJoint1148 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1148.USE = "hanim_r_metatarsophalangeal_1";
HAnimHumanoid31.joints[37] = HAnimJoint1148;

let HAnimJoint1149 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1149.USE = "hanim_r_tarsal_interphalangeal_1";
HAnimHumanoid31.joints[38] = HAnimJoint1149;

let HAnimJoint1150 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1150.USE = "hanim_r_cuneonavicular_2";
HAnimHumanoid31.joints[39] = HAnimJoint1150;

let HAnimJoint1151 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1151.USE = "hanim_r_tarsometatarsal_2";
HAnimHumanoid31.joints[40] = HAnimJoint1151;

let HAnimJoint1152 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1152.USE = "hanim_r_metatarsophalangeal_2";
HAnimHumanoid31.joints[41] = HAnimJoint1152;

let HAnimJoint1153 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1153.USE = "hanim_r_tarsal_proximal_interphalangeal_2";
HAnimHumanoid31.joints[42] = HAnimJoint1153;

let HAnimJoint1154 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1154.USE = "hanim_r_tarsal_distal_interphalangeal_2";
HAnimHumanoid31.joints[43] = HAnimJoint1154;

let HAnimJoint1155 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1155.USE = "hanim_r_cuneonavicular_3";
HAnimHumanoid31.joints[44] = HAnimJoint1155;

let HAnimJoint1156 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1156.USE = "hanim_r_tarsometatarsal_3";
HAnimHumanoid31.joints[45] = HAnimJoint1156;

let HAnimJoint1157 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1157.USE = "hanim_r_metatarsophalangeal_3";
HAnimHumanoid31.joints[46] = HAnimJoint1157;

let HAnimJoint1158 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1158.USE = "hanim_r_tarsal_proximal_interphalangeal_3";
HAnimHumanoid31.joints[47] = HAnimJoint1158;

let HAnimJoint1159 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1159.USE = "hanim_r_tarsal_distal_interphalangeal_3";
HAnimHumanoid31.joints[48] = HAnimJoint1159;

let HAnimJoint1160 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1160.USE = "hanim_r_calcaneocuboid";
HAnimHumanoid31.joints[49] = HAnimJoint1160;

let HAnimJoint1161 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1161.USE = "hanim_r_transversetarsal";
HAnimHumanoid31.joints[50] = HAnimJoint1161;

let HAnimJoint1162 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1162.USE = "hanim_r_tarsometatarsal_4";
HAnimHumanoid31.joints[51] = HAnimJoint1162;

let HAnimJoint1163 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1163.USE = "hanim_r_metatarsophalangeal_4";
HAnimHumanoid31.joints[52] = HAnimJoint1163;

let HAnimJoint1164 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1164.USE = "hanim_r_tarsal_proximal_interphalangeal_4";
HAnimHumanoid31.joints[53] = HAnimJoint1164;

let HAnimJoint1165 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1165.USE = "hanim_r_tarsal_distal_interphalangeal_4";
HAnimHumanoid31.joints[54] = HAnimJoint1165;

let HAnimJoint1166 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1166.USE = "hanim_r_tarsometatarsal_5";
HAnimHumanoid31.joints[55] = HAnimJoint1166;

let HAnimJoint1167 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1167.USE = "hanim_r_metatarsophalangeal_5";
HAnimHumanoid31.joints[56] = HAnimJoint1167;

let HAnimJoint1168 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1168.USE = "hanim_r_tarsal_proximal_interphalangeal_5";
HAnimHumanoid31.joints[57] = HAnimJoint1168;

let HAnimJoint1169 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1169.USE = "hanim_r_tarsal_distal_interphalangeal_5";
HAnimHumanoid31.joints[58] = HAnimJoint1169;

let HAnimJoint1170 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1170.USE = "hanim_vl5";
HAnimHumanoid31.joints[59] = HAnimJoint1170;

let HAnimJoint1171 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1171.USE = "hanim_vl4";
HAnimHumanoid31.joints[60] = HAnimJoint1171;

let HAnimJoint1172 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1172.USE = "hanim_vl3";
HAnimHumanoid31.joints[61] = HAnimJoint1172;

let HAnimJoint1173 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1173.USE = "hanim_vl2";
HAnimHumanoid31.joints[62] = HAnimJoint1173;

let HAnimJoint1174 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1174.USE = "hanim_vl1";
HAnimHumanoid31.joints[63] = HAnimJoint1174;

let HAnimJoint1175 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1175.USE = "hanim_vt12";
HAnimHumanoid31.joints[64] = HAnimJoint1175;

let HAnimJoint1176 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1176.USE = "hanim_vt11";
HAnimHumanoid31.joints[65] = HAnimJoint1176;

let HAnimJoint1177 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1177.USE = "hanim_vt10";
HAnimHumanoid31.joints[66] = HAnimJoint1177;

let HAnimJoint1178 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1178.USE = "hanim_vt9";
HAnimHumanoid31.joints[67] = HAnimJoint1178;

let HAnimJoint1179 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1179.USE = "hanim_vt8";
HAnimHumanoid31.joints[68] = HAnimJoint1179;

let HAnimJoint1180 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1180.USE = "hanim_vt7";
HAnimHumanoid31.joints[69] = HAnimJoint1180;

let HAnimJoint1181 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1181.USE = "hanim_vt6";
HAnimHumanoid31.joints[70] = HAnimJoint1181;

let HAnimJoint1182 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1182.USE = "hanim_vt5";
HAnimHumanoid31.joints[71] = HAnimJoint1182;

let HAnimJoint1183 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1183.USE = "hanim_vt4";
HAnimHumanoid31.joints[72] = HAnimJoint1183;

let HAnimJoint1184 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1184.USE = "hanim_vt3";
HAnimHumanoid31.joints[73] = HAnimJoint1184;

let HAnimJoint1185 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1185.USE = "hanim_vt2";
HAnimHumanoid31.joints[74] = HAnimJoint1185;

let HAnimJoint1186 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1186.USE = "hanim_vt1";
HAnimHumanoid31.joints[75] = HAnimJoint1186;

let HAnimJoint1187 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1187.USE = "hanim_vc7";
HAnimHumanoid31.joints[76] = HAnimJoint1187;

let HAnimJoint1188 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1188.USE = "hanim_vc6";
HAnimHumanoid31.joints[77] = HAnimJoint1188;

let HAnimJoint1189 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1189.USE = "hanim_vc5";
HAnimHumanoid31.joints[78] = HAnimJoint1189;

let HAnimJoint1190 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1190.USE = "hanim_vc4";
HAnimHumanoid31.joints[79] = HAnimJoint1190;

let HAnimJoint1191 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1191.USE = "hanim_vc3";
HAnimHumanoid31.joints[80] = HAnimJoint1191;

let HAnimJoint1192 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1192.USE = "hanim_vc2";
HAnimHumanoid31.joints[81] = HAnimJoint1192;

let HAnimJoint1193 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1193.USE = "hanim_vc1";
HAnimHumanoid31.joints[82] = HAnimJoint1193;

let HAnimJoint1194 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1194.USE = "hanim_skullbase";
HAnimHumanoid31.joints[83] = HAnimJoint1194;

let HAnimJoint1195 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1195.USE = "hanim_l_eyelid_joint";
HAnimHumanoid31.joints[84] = HAnimJoint1195;

let HAnimJoint1196 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1196.USE = "hanim_r_eyelid_joint";
HAnimHumanoid31.joints[85] = HAnimJoint1196;

let HAnimJoint1197 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1197.USE = "hanim_l_eyeball_joint";
HAnimHumanoid31.joints[86] = HAnimJoint1197;

let HAnimJoint1198 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1198.USE = "hanim_r_eyeball_joint";
HAnimHumanoid31.joints[87] = HAnimJoint1198;

let HAnimJoint1199 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1199.USE = "hanim_l_eyebrow_joint";
HAnimHumanoid31.joints[88] = HAnimJoint1199;

let HAnimJoint1200 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1200.USE = "hanim_r_eyebrow_joint";
HAnimHumanoid31.joints[89] = HAnimJoint1200;

let HAnimJoint1201 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1201.USE = "hanim_temporomandibular";
HAnimHumanoid31.joints[90] = HAnimJoint1201;

let HAnimJoint1202 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1202.USE = "hanim_l_sternoclavicular";
HAnimHumanoid31.joints[91] = HAnimJoint1202;

let HAnimJoint1203 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1203.USE = "hanim_l_acromioclavicular";
HAnimHumanoid31.joints[92] = HAnimJoint1203;

let HAnimJoint1204 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1204.USE = "hanim_l_shoulder";
HAnimHumanoid31.joints[93] = HAnimJoint1204;

let HAnimJoint1205 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1205.USE = "hanim_l_elbow";
HAnimHumanoid31.joints[94] = HAnimJoint1205;

let HAnimJoint1206 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1206.USE = "hanim_l_radiocarpal";
HAnimHumanoid31.joints[95] = HAnimJoint1206;

let HAnimJoint1207 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1207.USE = "hanim_l_midcarpal_1";
HAnimHumanoid31.joints[96] = HAnimJoint1207;

let HAnimJoint1208 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1208.USE = "hanim_l_carpometacarpal_1";
HAnimHumanoid31.joints[97] = HAnimJoint1208;

let HAnimJoint1209 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1209.USE = "hanim_l_metacarpophalangeal_1";
HAnimHumanoid31.joints[98] = HAnimJoint1209;

let HAnimJoint1210 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1210.USE = "hanim_l_carpal_interphalangeal_1";
HAnimHumanoid31.joints[99] = HAnimJoint1210;

let HAnimJoint1211 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1211.USE = "hanim_l_midcarpal_2";
HAnimHumanoid31.joints[100] = HAnimJoint1211;

let HAnimJoint1212 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1212.USE = "hanim_l_carpometacarpal_2";
HAnimHumanoid31.joints[101] = HAnimJoint1212;

let HAnimJoint1213 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1213.USE = "hanim_l_metacarpophalangeal_2";
HAnimHumanoid31.joints[102] = HAnimJoint1213;

let HAnimJoint1214 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1214.USE = "hanim_l_carpal_proximal_interphalangeal_2";
HAnimHumanoid31.joints[103] = HAnimJoint1214;

let HAnimJoint1215 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1215.USE = "hanim_l_carpal_distal_interphalangeal_2";
HAnimHumanoid31.joints[104] = HAnimJoint1215;

let HAnimJoint1216 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1216.USE = "hanim_l_midcarpal_3";
HAnimHumanoid31.joints[105] = HAnimJoint1216;

let HAnimJoint1217 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1217.USE = "hanim_l_carpometacarpal_3";
HAnimHumanoid31.joints[106] = HAnimJoint1217;

let HAnimJoint1218 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1218.USE = "hanim_l_metacarpophalangeal_3";
HAnimHumanoid31.joints[107] = HAnimJoint1218;

let HAnimJoint1219 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1219.USE = "hanim_l_carpal_proximal_interphalangeal_3";
HAnimHumanoid31.joints[108] = HAnimJoint1219;

let HAnimJoint1220 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1220.USE = "hanim_l_carpal_distal_interphalangeal_3";
HAnimHumanoid31.joints[109] = HAnimJoint1220;

let HAnimJoint1221 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1221.USE = "hanim_l_midcarpal_4_5";
HAnimHumanoid31.joints[110] = HAnimJoint1221;

let HAnimJoint1222 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1222.USE = "hanim_l_carpometacarpal_4";
HAnimHumanoid31.joints[111] = HAnimJoint1222;

let HAnimJoint1223 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1223.USE = "hanim_l_metacarpophalangeal_4";
HAnimHumanoid31.joints[112] = HAnimJoint1223;

let HAnimJoint1224 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1224.USE = "hanim_l_carpal_proximal_interphalangeal_4";
HAnimHumanoid31.joints[113] = HAnimJoint1224;

let HAnimJoint1225 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1225.USE = "hanim_l_carpal_distal_interphalangeal_4";
HAnimHumanoid31.joints[114] = HAnimJoint1225;

let HAnimJoint1226 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1226.USE = "hanim_l_carpometacarpal_5";
HAnimHumanoid31.joints[115] = HAnimJoint1226;

let HAnimJoint1227 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1227.USE = "hanim_l_metacarpophalangeal_5";
HAnimHumanoid31.joints[116] = HAnimJoint1227;

let HAnimJoint1228 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1228.USE = "hanim_l_carpal_proximal_interphalangeal_5";
HAnimHumanoid31.joints[117] = HAnimJoint1228;

let HAnimJoint1229 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1229.USE = "hanim_l_carpal_distal_interphalangeal_5";
HAnimHumanoid31.joints[118] = HAnimJoint1229;

let HAnimJoint1230 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1230.USE = "hanim_r_sternoclavicular";
HAnimHumanoid31.joints[119] = HAnimJoint1230;

let HAnimJoint1231 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1231.USE = "hanim_r_acromioclavicular";
HAnimHumanoid31.joints[120] = HAnimJoint1231;

let HAnimJoint1232 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1232.USE = "hanim_r_shoulder";
HAnimHumanoid31.joints[121] = HAnimJoint1232;

let HAnimJoint1233 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1233.USE = "hanim_r_elbow";
HAnimHumanoid31.joints[122] = HAnimJoint1233;

let HAnimJoint1234 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1234.USE = "hanim_r_radiocarpal";
HAnimHumanoid31.joints[123] = HAnimJoint1234;

let HAnimJoint1235 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1235.USE = "hanim_r_midcarpal_1";
HAnimHumanoid31.joints[124] = HAnimJoint1235;

let HAnimJoint1236 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1236.USE = "hanim_r_carpometacarpal_1";
HAnimHumanoid31.joints[125] = HAnimJoint1236;

let HAnimJoint1237 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1237.USE = "hanim_r_metacarpophalangeal_1";
HAnimHumanoid31.joints[126] = HAnimJoint1237;

let HAnimJoint1238 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1238.USE = "hanim_r_carpal_interphalangeal_1";
HAnimHumanoid31.joints[127] = HAnimJoint1238;

let HAnimJoint1239 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1239.USE = "hanim_r_midcarpal_2";
HAnimHumanoid31.joints[128] = HAnimJoint1239;

let HAnimJoint1240 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1240.USE = "hanim_r_carpometacarpal_2";
HAnimHumanoid31.joints[129] = HAnimJoint1240;

let HAnimJoint1241 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1241.USE = "hanim_r_metacarpophalangeal_2";
HAnimHumanoid31.joints[130] = HAnimJoint1241;

let HAnimJoint1242 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1242.USE = "hanim_r_carpal_proximal_interphalangeal_2";
HAnimHumanoid31.joints[131] = HAnimJoint1242;

let HAnimJoint1243 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1243.USE = "hanim_r_carpal_distal_interphalangeal_2";
HAnimHumanoid31.joints[132] = HAnimJoint1243;

let HAnimJoint1244 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1244.USE = "hanim_r_midcarpal_3";
HAnimHumanoid31.joints[133] = HAnimJoint1244;

let HAnimJoint1245 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1245.USE = "hanim_r_carpometacarpal_3";
HAnimHumanoid31.joints[134] = HAnimJoint1245;

let HAnimJoint1246 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1246.USE = "hanim_r_metacarpophalangeal_3";
HAnimHumanoid31.joints[135] = HAnimJoint1246;

let HAnimJoint1247 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1247.USE = "hanim_r_carpal_proximal_interphalangeal_3";
HAnimHumanoid31.joints[136] = HAnimJoint1247;

let HAnimJoint1248 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1248.USE = "hanim_r_carpal_distal_interphalangeal_3";
HAnimHumanoid31.joints[137] = HAnimJoint1248;

let HAnimJoint1249 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1249.USE = "hanim_r_midcarpal_4_5";
HAnimHumanoid31.joints[138] = HAnimJoint1249;

let HAnimJoint1250 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1250.USE = "hanim_r_carpometacarpal_4";
HAnimHumanoid31.joints[139] = HAnimJoint1250;

let HAnimJoint1251 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1251.USE = "hanim_r_metacarpophalangeal_4";
HAnimHumanoid31.joints[140] = HAnimJoint1251;

let HAnimJoint1252 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1252.USE = "hanim_r_carpal_proximal_interphalangeal_4";
HAnimHumanoid31.joints[141] = HAnimJoint1252;

let HAnimJoint1253 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1253.USE = "hanim_r_carpal_distal_interphalangeal_4";
HAnimHumanoid31.joints[142] = HAnimJoint1253;

let HAnimJoint1254 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1254.USE = "hanim_r_carpometacarpal_5";
HAnimHumanoid31.joints[143] = HAnimJoint1254;

let HAnimJoint1255 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1255.USE = "hanim_r_metacarpophalangeal_5";
HAnimHumanoid31.joints[144] = HAnimJoint1255;

let HAnimJoint1256 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1256.USE = "hanim_r_carpal_proximal_interphalangeal_5";
HAnimHumanoid31.joints[145] = HAnimJoint1256;

let HAnimJoint1257 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1257.USE = "hanim_r_carpal_distal_interphalangeal_5";
HAnimHumanoid31.joints[146] = HAnimJoint1257;

let HAnimSite1258 = browser.currentScene.createNode("HAnimSite");
HAnimSite1258.USE = "hanim_buttocks_standing_wall_contact_point_pt";
HAnimHumanoid31.viewpoints[147] = HAnimSite1258;

let HAnimSite1259 = browser.currentScene.createNode("HAnimSite");
HAnimSite1259.USE = "hanim_crotch_pt";
HAnimHumanoid31.viewpoints[148] = HAnimSite1259;

let HAnimSite1260 = browser.currentScene.createNode("HAnimSite");
HAnimSite1260.USE = "hanim_l_asis_pt";
HAnimHumanoid31.viewpoints[149] = HAnimSite1260;

let HAnimSite1261 = browser.currentScene.createNode("HAnimSite");
HAnimSite1261.USE = "hanim_l_iliocristale_pt";
HAnimHumanoid31.viewpoints[150] = HAnimSite1261;

let HAnimSite1262 = browser.currentScene.createNode("HAnimSite");
HAnimSite1262.USE = "hanim_l_psis_pt";
HAnimHumanoid31.viewpoints[151] = HAnimSite1262;

let HAnimSite1263 = browser.currentScene.createNode("HAnimSite");
HAnimSite1263.USE = "hanim_l_trochanterion_pt";
HAnimHumanoid31.viewpoints[152] = HAnimSite1263;

let HAnimSite1264 = browser.currentScene.createNode("HAnimSite");
HAnimSite1264.USE = "hanim_r_asis_pt";
HAnimHumanoid31.viewpoints[153] = HAnimSite1264;

let HAnimSite1265 = browser.currentScene.createNode("HAnimSite");
HAnimSite1265.USE = "hanim_r_iliocristale_pt";
HAnimHumanoid31.viewpoints[154] = HAnimSite1265;

let HAnimSite1266 = browser.currentScene.createNode("HAnimSite");
HAnimSite1266.USE = "hanim_r_psis_pt";
HAnimHumanoid31.viewpoints[155] = HAnimSite1266;

let HAnimSite1267 = browser.currentScene.createNode("HAnimSite");
HAnimSite1267.USE = "hanim_r_trochanterion_pt";
HAnimHumanoid31.viewpoints[156] = HAnimSite1267;

let HAnimSite1268 = browser.currentScene.createNode("HAnimSite");
HAnimSite1268.USE = "hanim_navel_pt";
HAnimHumanoid31.viewpoints[157] = HAnimSite1268;

let HAnimSite1269 = browser.currentScene.createNode("HAnimSite");
HAnimSite1269.USE = "hanim_waist_preferred_anterior_pt";
HAnimHumanoid31.viewpoints[158] = HAnimSite1269;

let HAnimSite1270 = browser.currentScene.createNode("HAnimSite");
HAnimSite1270.USE = "hanim_waist_preferred_posterior_pt";
HAnimHumanoid31.viewpoints[159] = HAnimSite1270;

let HAnimSite1271 = browser.currentScene.createNode("HAnimSite");
HAnimSite1271.USE = "hanim_l_femoral_lateral_epicondyles_pt";
HAnimHumanoid31.viewpoints[160] = HAnimSite1271;

let HAnimSite1272 = browser.currentScene.createNode("HAnimSite");
HAnimSite1272.USE = "hanim_l_femoral_medial_epicondyles_pt";
HAnimHumanoid31.viewpoints[161] = HAnimSite1272;

let HAnimSite1273 = browser.currentScene.createNode("HAnimSite");
HAnimSite1273.USE = "hanim_l_knee_crease_pt";
HAnimHumanoid31.viewpoints[162] = HAnimSite1273;

let HAnimSite1274 = browser.currentScene.createNode("HAnimSite");
HAnimSite1274.USE = "hanim_l_suprapatella_pt";
HAnimHumanoid31.viewpoints[163] = HAnimSite1274;

let HAnimSite1275 = browser.currentScene.createNode("HAnimSite");
HAnimSite1275.USE = "hanim_r_femoral_lateral_epicondyles_pt";
HAnimHumanoid31.viewpoints[164] = HAnimSite1275;

let HAnimSite1276 = browser.currentScene.createNode("HAnimSite");
HAnimSite1276.USE = "hanim_r_femoral_medial_epicondyles_pt";
HAnimHumanoid31.viewpoints[165] = HAnimSite1276;

let HAnimSite1277 = browser.currentScene.createNode("HAnimSite");
HAnimSite1277.USE = "hanim_r_knee_crease_pt";
HAnimHumanoid31.viewpoints[166] = HAnimSite1277;

let HAnimSite1278 = browser.currentScene.createNode("HAnimSite");
HAnimSite1278.USE = "hanim_r_suprapatella_pt";
HAnimHumanoid31.viewpoints[167] = HAnimSite1278;

let HAnimSite1279 = browser.currentScene.createNode("HAnimSite");
HAnimSite1279.USE = "hanim_l_lateral_malleolus_pt";
HAnimHumanoid31.viewpoints[168] = HAnimSite1279;

let HAnimSite1280 = browser.currentScene.createNode("HAnimSite");
HAnimSite1280.USE = "hanim_l_medial_malleolus_pt";
HAnimHumanoid31.viewpoints[169] = HAnimSite1280;

let HAnimSite1281 = browser.currentScene.createNode("HAnimSite");
HAnimSite1281.USE = "hanim_l_tibiale_pt";
HAnimHumanoid31.viewpoints[170] = HAnimSite1281;

let HAnimSite1282 = browser.currentScene.createNode("HAnimSite");
HAnimSite1282.USE = "hanim_l_calcaneus_posterior_pt";
HAnimHumanoid31.viewpoints[171] = HAnimSite1282;

let HAnimSite1283 = browser.currentScene.createNode("HAnimSite");
HAnimSite1283.USE = "hanim_l_sphyrion_pt";
HAnimHumanoid31.viewpoints[172] = HAnimSite1283;

let HAnimSite1284 = browser.currentScene.createNode("HAnimSite");
HAnimSite1284.USE = "hanim_l_metatarsal_phalanx_1_pt";
HAnimHumanoid31.viewpoints[173] = HAnimSite1284;

let HAnimSite1285 = browser.currentScene.createNode("HAnimSite");
HAnimSite1285.USE = "hanim_l_tarsal_distal_phalanx_1_tip";
HAnimHumanoid31.viewpoints[174] = HAnimSite1285;

let HAnimSite1286 = browser.currentScene.createNode("HAnimSite");
HAnimSite1286.USE = "hanim_l_tarsal_distal_phalanx_2_tip";
HAnimHumanoid31.viewpoints[175] = HAnimSite1286;

let HAnimSite1287 = browser.currentScene.createNode("HAnimSite");
HAnimSite1287.USE = "hanim_l_tarsal_distal_phalanx_3_tip";
HAnimHumanoid31.viewpoints[176] = HAnimSite1287;

let HAnimSite1288 = browser.currentScene.createNode("HAnimSite");
HAnimSite1288.USE = "hanim_l_tarsal_distal_phalanx_4_tip";
HAnimHumanoid31.viewpoints[177] = HAnimSite1288;

let HAnimSite1289 = browser.currentScene.createNode("HAnimSite");
HAnimSite1289.USE = "hanim_l_metatarsal_phalanx_5_pt";
HAnimHumanoid31.viewpoints[178] = HAnimSite1289;

let HAnimSite1290 = browser.currentScene.createNode("HAnimSite");
HAnimSite1290.USE = "hanim_l_tarsal_distal_phalanx_5_tip";
HAnimHumanoid31.viewpoints[179] = HAnimSite1290;

let HAnimSite1291 = browser.currentScene.createNode("HAnimSite");
HAnimSite1291.USE = "hanim_r_lateral_malleolus_pt";
HAnimHumanoid31.viewpoints[180] = HAnimSite1291;

let HAnimSite1292 = browser.currentScene.createNode("HAnimSite");
HAnimSite1292.USE = "hanim_r_medial_malleolus_pt";
HAnimHumanoid31.viewpoints[181] = HAnimSite1292;

let HAnimSite1293 = browser.currentScene.createNode("HAnimSite");
HAnimSite1293.USE = "hanim_r_tibiale_pt";
HAnimHumanoid31.viewpoints[182] = HAnimSite1293;

let HAnimSite1294 = browser.currentScene.createNode("HAnimSite");
HAnimSite1294.USE = "hanim_r_calcaneus_posterior_pt";
HAnimHumanoid31.viewpoints[183] = HAnimSite1294;

let HAnimSite1295 = browser.currentScene.createNode("HAnimSite");
HAnimSite1295.USE = "hanim_r_sphyrion_pt";
HAnimHumanoid31.viewpoints[184] = HAnimSite1295;

let HAnimSite1296 = browser.currentScene.createNode("HAnimSite");
HAnimSite1296.USE = "hanim_r_metatarsal_phalanx_1_pt";
HAnimHumanoid31.viewpoints[185] = HAnimSite1296;

let HAnimSite1297 = browser.currentScene.createNode("HAnimSite");
HAnimSite1297.USE = "hanim_r_tarsal_distal_phalanx_1_tip";
HAnimHumanoid31.viewpoints[186] = HAnimSite1297;

let HAnimSite1298 = browser.currentScene.createNode("HAnimSite");
HAnimSite1298.USE = "hanim_r_tarsal_distal_phalanx_2_tip";
HAnimHumanoid31.viewpoints[187] = HAnimSite1298;

let HAnimSite1299 = browser.currentScene.createNode("HAnimSite");
HAnimSite1299.USE = "hanim_r_tarsal_distal_phalanx_3_tip";
HAnimHumanoid31.viewpoints[188] = HAnimSite1299;

let HAnimSite1300 = browser.currentScene.createNode("HAnimSite");
HAnimSite1300.USE = "hanim_r_tarsal_distal_phalanx_4_tip";
HAnimHumanoid31.viewpoints[189] = HAnimSite1300;

let HAnimSite1301 = browser.currentScene.createNode("HAnimSite");
HAnimSite1301.USE = "hanim_r_metatarsal_phalanx_5_pt";
HAnimHumanoid31.viewpoints[190] = HAnimSite1301;

let HAnimSite1302 = browser.currentScene.createNode("HAnimSite");
HAnimSite1302.USE = "hanim_r_tarsal_distal_phalanx_5_tip";
HAnimHumanoid31.viewpoints[191] = HAnimSite1302;

let HAnimSite1303 = browser.currentScene.createNode("HAnimSite");
HAnimSite1303.USE = "hanim_l_rib10_pt";
HAnimHumanoid31.viewpoints[192] = HAnimSite1303;

let HAnimSite1304 = browser.currentScene.createNode("HAnimSite");
HAnimSite1304.USE = "hanim_r_rib10_pt";
HAnimHumanoid31.viewpoints[193] = HAnimSite1304;

let HAnimSite1305 = browser.currentScene.createNode("HAnimSite");
HAnimSite1305.USE = "hanim_spine_2_middle_back_pt";
HAnimHumanoid31.viewpoints[194] = HAnimSite1305;

let HAnimSite1306 = browser.currentScene.createNode("HAnimSite");
HAnimSite1306.USE = "hanim_substernale_pt";
HAnimHumanoid31.viewpoints[195] = HAnimSite1306;

let HAnimSite1307 = browser.currentScene.createNode("HAnimSite");
HAnimSite1307.USE = "hanim_l_thelion_pt";
HAnimHumanoid31.viewpoints[196] = HAnimSite1307;

let HAnimSite1308 = browser.currentScene.createNode("HAnimSite");
HAnimSite1308.USE = "hanim_r_thelion_pt";
HAnimHumanoid31.viewpoints[197] = HAnimSite1308;

let HAnimSite1309 = browser.currentScene.createNode("HAnimSite");
HAnimSite1309.USE = "hanim_l_chest_midsagittal_plane_pt";
HAnimHumanoid31.viewpoints[198] = HAnimSite1309;

let HAnimSite1310 = browser.currentScene.createNode("HAnimSite");
HAnimSite1310.USE = "hanim_mesosternale_pt";
HAnimHumanoid31.viewpoints[199] = HAnimSite1310;

let HAnimSite1311 = browser.currentScene.createNode("HAnimSite");
HAnimSite1311.USE = "hanim_r_chest_midsagittal_plane_pt";
HAnimHumanoid31.viewpoints[200] = HAnimSite1311;

let HAnimSite1312 = browser.currentScene.createNode("HAnimSite");
HAnimSite1312.USE = "hanim_rear_center_midsagittal_plane_pt";
HAnimHumanoid31.viewpoints[201] = HAnimSite1312;

let HAnimSite1313 = browser.currentScene.createNode("HAnimSite");
HAnimSite1313.USE = "hanim_spine_1_middle_back_pt";
HAnimHumanoid31.viewpoints[202] = HAnimSite1313;

let HAnimSite1314 = browser.currentScene.createNode("HAnimSite");
HAnimSite1314.USE = "hanim_cervicale_pt";
HAnimHumanoid31.viewpoints[203] = HAnimSite1314;

let HAnimSite1315 = browser.currentScene.createNode("HAnimSite");
HAnimSite1315.USE = "hanim_suprasternale_pt";
HAnimHumanoid31.viewpoints[204] = HAnimSite1315;

let HAnimSite1316 = browser.currentScene.createNode("HAnimSite");
HAnimSite1316.USE = "hanim_l_neck_base_pt";
HAnimHumanoid31.viewpoints[205] = HAnimSite1316;

let HAnimSite1317 = browser.currentScene.createNode("HAnimSite");
HAnimSite1317.USE = "hanim_r_neck_base_pt";
HAnimHumanoid31.viewpoints[206] = HAnimSite1317;

let HAnimSite1318 = browser.currentScene.createNode("HAnimSite");
HAnimSite1318.USE = "hanim_l_acromion_pt";
HAnimHumanoid31.viewpoints[207] = HAnimSite1318;

let HAnimSite1319 = browser.currentScene.createNode("HAnimSite");
HAnimSite1319.USE = "hanim_l_axilla_distal_pt";
HAnimHumanoid31.viewpoints[208] = HAnimSite1319;

let HAnimSite1320 = browser.currentScene.createNode("HAnimSite");
HAnimSite1320.USE = "hanim_l_axilla_posterior_folds_pt";
HAnimHumanoid31.viewpoints[209] = HAnimSite1320;

let HAnimSite1321 = browser.currentScene.createNode("HAnimSite");
HAnimSite1321.USE = "hanim_l_axilla_proximal_pt";
HAnimHumanoid31.viewpoints[210] = HAnimSite1321;

let HAnimSite1322 = browser.currentScene.createNode("HAnimSite");
HAnimSite1322.USE = "hanim_l_clavicale_pt";
HAnimHumanoid31.viewpoints[211] = HAnimSite1322;

let HAnimSite1323 = browser.currentScene.createNode("HAnimSite");
HAnimSite1323.USE = "hanim_r_acromion_pt";
HAnimHumanoid31.viewpoints[212] = HAnimSite1323;

let HAnimSite1324 = browser.currentScene.createNode("HAnimSite");
HAnimSite1324.USE = "hanim_r_axilla_distal_pt";
HAnimHumanoid31.viewpoints[213] = HAnimSite1324;

let HAnimSite1325 = browser.currentScene.createNode("HAnimSite");
HAnimSite1325.USE = "hanim_r_axilla_posterior_folds_pt";
HAnimHumanoid31.viewpoints[214] = HAnimSite1325;

let HAnimSite1326 = browser.currentScene.createNode("HAnimSite");
HAnimSite1326.USE = "hanim_r_axilla_proximal_pt";
HAnimHumanoid31.viewpoints[215] = HAnimSite1326;

let HAnimSite1327 = browser.currentScene.createNode("HAnimSite");
HAnimSite1327.USE = "hanim_r_clavicale_pt";
HAnimHumanoid31.viewpoints[216] = HAnimSite1327;

let HAnimSite1328 = browser.currentScene.createNode("HAnimSite");
HAnimSite1328.USE = "hanim_adams_apple_pt";
HAnimHumanoid31.viewpoints[217] = HAnimSite1328;

let HAnimSite1329 = browser.currentScene.createNode("HAnimSite");
HAnimSite1329.USE = "hanim_glabella_pt";
HAnimHumanoid31.viewpoints[218] = HAnimSite1329;

let HAnimSite1330 = browser.currentScene.createNode("HAnimSite");
HAnimSite1330.USE = "hanim_l_ectocanthus_pt";
HAnimHumanoid31.viewpoints[219] = HAnimSite1330;

let HAnimSite1331 = browser.currentScene.createNode("HAnimSite");
HAnimSite1331.USE = "hanim_l_infraorbitale_pt";
HAnimHumanoid31.viewpoints[220] = HAnimSite1331;

let HAnimSite1332 = browser.currentScene.createNode("HAnimSite");
HAnimSite1332.USE = "hanim_l_tragion_pt";
HAnimHumanoid31.viewpoints[221] = HAnimSite1332;

let HAnimSite1333 = browser.currentScene.createNode("HAnimSite");
HAnimSite1333.USE = "hanim_nuchale_pt";
HAnimHumanoid31.viewpoints[222] = HAnimSite1333;

let HAnimSite1334 = browser.currentScene.createNode("HAnimSite");
HAnimSite1334.USE = "hanim_opisthocranion_pt";
HAnimHumanoid31.viewpoints[223] = HAnimSite1334;

let HAnimSite1335 = browser.currentScene.createNode("HAnimSite");
HAnimSite1335.USE = "hanim_r_ectocanthus_pt";
HAnimHumanoid31.viewpoints[224] = HAnimSite1335;

let HAnimSite1336 = browser.currentScene.createNode("HAnimSite");
HAnimSite1336.USE = "hanim_r_infraorbitale_pt";
HAnimHumanoid31.viewpoints[225] = HAnimSite1336;

let HAnimSite1337 = browser.currentScene.createNode("HAnimSite");
HAnimSite1337.USE = "hanim_r_tragion_pt";
HAnimHumanoid31.viewpoints[226] = HAnimSite1337;

let HAnimSite1338 = browser.currentScene.createNode("HAnimSite");
HAnimSite1338.USE = "hanim_sellion_pt";
HAnimHumanoid31.viewpoints[227] = HAnimSite1338;

let HAnimSite1339 = browser.currentScene.createNode("HAnimSite");
HAnimSite1339.USE = "hanim_skull_vertex_pt";
HAnimHumanoid31.viewpoints[228] = HAnimSite1339;

let HAnimSite1340 = browser.currentScene.createNode("HAnimSite");
HAnimSite1340.USE = "hanim_l_gonion_pt";
HAnimHumanoid31.viewpoints[229] = HAnimSite1340;

let HAnimSite1341 = browser.currentScene.createNode("HAnimSite");
HAnimSite1341.USE = "hanim_menton_pt";
HAnimHumanoid31.viewpoints[230] = HAnimSite1341;

let HAnimSite1342 = browser.currentScene.createNode("HAnimSite");
HAnimSite1342.USE = "hanim_r_gonion_pt";
HAnimHumanoid31.viewpoints[231] = HAnimSite1342;

let HAnimSite1343 = browser.currentScene.createNode("HAnimSite");
HAnimSite1343.USE = "hanim_supramenton_pt";
HAnimHumanoid31.viewpoints[232] = HAnimSite1343;

let HAnimSite1344 = browser.currentScene.createNode("HAnimSite");
HAnimSite1344.USE = "hanim_l_bideltoid_pt";
HAnimHumanoid31.viewpoints[233] = HAnimSite1344;

let HAnimSite1345 = browser.currentScene.createNode("HAnimSite");
HAnimSite1345.USE = "hanim_l_humeral_lateral_epicondyles_pt";
HAnimHumanoid31.viewpoints[234] = HAnimSite1345;

let HAnimSite1346 = browser.currentScene.createNode("HAnimSite");
HAnimSite1346.USE = "hanim_l_humeral_medial_epicondyles_pt";
HAnimHumanoid31.viewpoints[235] = HAnimSite1346;

let HAnimSite1347 = browser.currentScene.createNode("HAnimSite");
HAnimSite1347.USE = "hanim_l_olecranon_pt";
HAnimHumanoid31.viewpoints[236] = HAnimSite1347;

let HAnimSite1348 = browser.currentScene.createNode("HAnimSite");
HAnimSite1348.USE = "hanim_l_radial_styloid_pt";
HAnimHumanoid31.viewpoints[237] = HAnimSite1348;

let HAnimSite1349 = browser.currentScene.createNode("HAnimSite");
HAnimSite1349.USE = "hanim_l_radiale_pt";
HAnimHumanoid31.viewpoints[238] = HAnimSite1349;

let HAnimSite1350 = browser.currentScene.createNode("HAnimSite");
HAnimSite1350.USE = "hanim_l_ulnar_styloid_pt";
HAnimHumanoid31.viewpoints[239] = HAnimSite1350;

let HAnimSite1351 = browser.currentScene.createNode("HAnimSite");
HAnimSite1351.USE = "hanim_l_carpal_distal_phalanx_1_tip";
HAnimHumanoid31.viewpoints[240] = HAnimSite1351;

let HAnimSite1352 = browser.currentScene.createNode("HAnimSite");
HAnimSite1352.USE = "hanim_l_metacarpal_phalanx_2_pt";
HAnimHumanoid31.viewpoints[241] = HAnimSite1352;

let HAnimSite1353 = browser.currentScene.createNode("HAnimSite");
HAnimSite1353.USE = "hanim_l_carpal_distal_phalanx_2_tip";
HAnimHumanoid31.viewpoints[242] = HAnimSite1353;

let HAnimSite1354 = browser.currentScene.createNode("HAnimSite");
HAnimSite1354.USE = "hanim_l_dactylion_pt";
HAnimHumanoid31.viewpoints[243] = HAnimSite1354;

let HAnimSite1355 = browser.currentScene.createNode("HAnimSite");
HAnimSite1355.USE = "hanim_l_metacarpal_phalanx_3_pt";
HAnimHumanoid31.viewpoints[244] = HAnimSite1355;

let HAnimSite1356 = browser.currentScene.createNode("HAnimSite");
HAnimSite1356.USE = "hanim_l_carpal_distal_phalanx_3_tip";
HAnimHumanoid31.viewpoints[245] = HAnimSite1356;

let HAnimSite1357 = browser.currentScene.createNode("HAnimSite");
HAnimSite1357.USE = "hanim_l_metacarpal_phalanx_5_pt";
HAnimHumanoid31.viewpoints[246] = HAnimSite1357;

let HAnimSite1358 = browser.currentScene.createNode("HAnimSite");
HAnimSite1358.USE = "hanim_l_carpal_distal_phalanx_4_tip";
HAnimHumanoid31.viewpoints[247] = HAnimSite1358;

let HAnimSite1359 = browser.currentScene.createNode("HAnimSite");
HAnimSite1359.USE = "hanim_l_carpal_distal_phalanx_5_tip";
HAnimHumanoid31.viewpoints[248] = HAnimSite1359;

let HAnimSite1360 = browser.currentScene.createNode("HAnimSite");
HAnimSite1360.USE = "hanim_r_bideltoid_pt";
HAnimHumanoid31.viewpoints[249] = HAnimSite1360;

let HAnimSite1361 = browser.currentScene.createNode("HAnimSite");
HAnimSite1361.USE = "hanim_r_humeral_lateral_epicondyles_pt";
HAnimHumanoid31.viewpoints[250] = HAnimSite1361;

let HAnimSite1362 = browser.currentScene.createNode("HAnimSite");
HAnimSite1362.USE = "hanim_r_humeral_medial_epicondyles_pt";
HAnimHumanoid31.viewpoints[251] = HAnimSite1362;

let HAnimSite1363 = browser.currentScene.createNode("HAnimSite");
HAnimSite1363.USE = "hanim_r_olecranon_pt";
HAnimHumanoid31.viewpoints[252] = HAnimSite1363;

let HAnimSite1364 = browser.currentScene.createNode("HAnimSite");
HAnimSite1364.USE = "hanim_r_radial_styloid_pt";
HAnimHumanoid31.viewpoints[253] = HAnimSite1364;

let HAnimSite1365 = browser.currentScene.createNode("HAnimSite");
HAnimSite1365.USE = "hanim_r_radiale_pt";
HAnimHumanoid31.viewpoints[254] = HAnimSite1365;

let HAnimSite1366 = browser.currentScene.createNode("HAnimSite");
HAnimSite1366.USE = "hanim_r_ulnar_styloid_pt";
HAnimHumanoid31.viewpoints[255] = HAnimSite1366;

let HAnimSite1367 = browser.currentScene.createNode("HAnimSite");
HAnimSite1367.USE = "hanim_r_carpal_distal_phalanx_1_tip";
HAnimHumanoid31.viewpoints[256] = HAnimSite1367;

let HAnimSite1368 = browser.currentScene.createNode("HAnimSite");
HAnimSite1368.USE = "hanim_r_metacarpal_phalanx_2_pt";
HAnimHumanoid31.viewpoints[257] = HAnimSite1368;

let HAnimSite1369 = browser.currentScene.createNode("HAnimSite");
HAnimSite1369.USE = "hanim_r_carpal_distal_phalanx_2_tip";
HAnimHumanoid31.viewpoints[258] = HAnimSite1369;

let HAnimSite1370 = browser.currentScene.createNode("HAnimSite");
HAnimSite1370.USE = "hanim_r_dactylion_pt";
HAnimHumanoid31.viewpoints[259] = HAnimSite1370;

let HAnimSite1371 = browser.currentScene.createNode("HAnimSite");
HAnimSite1371.USE = "hanim_r_metacarpal_phalanx_3_pt";
HAnimHumanoid31.viewpoints[260] = HAnimSite1371;

let HAnimSite1372 = browser.currentScene.createNode("HAnimSite");
HAnimSite1372.USE = "hanim_r_carpal_distal_phalanx_3_tip";
HAnimHumanoid31.viewpoints[261] = HAnimSite1372;

let HAnimSite1373 = browser.currentScene.createNode("HAnimSite");
HAnimSite1373.USE = "hanim_r_metacarpal_phalanx_5_pt";
HAnimHumanoid31.viewpoints[262] = HAnimSite1373;

let HAnimSite1374 = browser.currentScene.createNode("HAnimSite");
HAnimSite1374.USE = "hanim_r_carpal_distal_phalanx_4_tip";
HAnimHumanoid31.viewpoints[263] = HAnimSite1374;

let HAnimSite1375 = browser.currentScene.createNode("HAnimSite");
HAnimSite1375.USE = "hanim_r_carpal_distal_phalanx_5_tip";
HAnimHumanoid31.viewpoints[264] = HAnimSite1375;

browser.currentScene.children[4] = HAnimHumanoid31;

