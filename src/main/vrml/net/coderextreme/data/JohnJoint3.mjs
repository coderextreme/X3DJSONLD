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
meta3.content = "JohnJoint3.x3d";
head1.meta[1] = meta3;

let meta4 = browser.currentScene.createNode("meta");
meta4.name = "identifier";
meta4.content = "http://www.web3d.org/x3d/content/examples/HumanoidAnimation/JohnJoint3.x3d";
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

Transform12.child = new undefined();

Transform12.child[0] = Shape13;

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

Transform19.child = new undefined();

Transform19.child[0] = Shape20;

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

Transform24.child = new undefined();

Transform24.child[0] = Shape25;

Transform18.children[1] = Transform24;

let Transform29 = browser.currentScene.createNode("Transform");
Transform29.translation = new SFVec3f(new float[0,2.1,0]);
let Shape30 = browser.currentScene.createNode("Shape");
Shape30.DEF = "HAnimSiteShape";
let IndexedFaceSet31 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet31.DEF = "DiamondIFS";
IndexedFaceSet31.creaseAngle = 0.5;
IndexedFaceSet31.solid = False;
IndexedFaceSet31.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
let ColorRGBA32 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA32.DEF = "HAnimSiteColorRGBA";
ColorRGBA32.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1]);
IndexedFaceSet31.color = ColorRGBA32;

let Coordinate33 = browser.currentScene.createNode("Coordinate");
Coordinate33.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet31.coord = Coordinate33;

Shape30.geometry = IndexedFaceSet31;

let Appearance34 = browser.currentScene.createNode("Appearance");
let Material35 = browser.currentScene.createNode("Material");
Material35.diffuseColor = new SFColor(new float[1,1,0]);
Material35.transparency = 0.3;
Appearance34.material = Material35;

Shape30.appearance = Appearance34;

Transform29.child = new undefined();

Transform29.child[0] = Shape30;

Transform18.children[2] = Transform29;

Group17.children = new MFNode();

Group17.children[0] = Transform18;

browser.currentScene.children[1] = Group17;

let NavigationInfo36 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo36.speed = 1.5;
browser.currentScene.children[2] = NavigationInfo36;

let Viewpoint37 = browser.currentScene.createNode("Viewpoint");
Viewpoint37.description = "default";
browser.currentScene.children[3] = Viewpoint37;

let HAnimHumanoid38 = browser.currentScene.createNode("HAnimHumanoid");
HAnimHumanoid38.name = "HAnim";
HAnimHumanoid38.DEF = "hanim_HAnim";
HAnimHumanoid38.info = new MFString(new java.lang.String["humanoidVersion=2.0"]);
HAnimHumanoid38.version = "2.0";
let HAnimJoint39 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint39.name = "humanoid_root";
HAnimJoint39.DEF = "hanim_humanoid_root";
HAnimJoint39.center = new SFVec3f(new float[0,0.824,0.0277]);
HAnimJoint39.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint39.llimit = new MFFloat(new float[0,0,0]);
let Shape40 = browser.currentScene.createNode("Shape");
let LineSet41 = browser.currentScene.createNode("LineSet");
LineSet41.vertexCount = new MFInt32(new int[2]);
let Coordinate42 = browser.currentScene.createNode("Coordinate");
Coordinate42.point = new MFVec3f(new float[0,0.824,0.0277,0,0.9149,0.0016]);
LineSet41.coord = Coordinate42;

//from humanoid_root to sacroiliac
let ColorRGBA43 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA43.USE = "HAnimSegmentLineColorRGBA";
LineSet41.color = ColorRGBA43;

Shape40.geometry = LineSet41;

HAnimJoint39.child = new undefined();

HAnimJoint39.child[0] = Shape40;

let HAnimSite44 = browser.currentScene.createNode("HAnimSite");
HAnimSite44.name = "buttocks_standing_wall_contact_point_pt";
HAnimSite44.DEF = "hanim_buttocks_standing_wall_contact_point_pt";
HAnimSite44.translation = new SFVec3f(new float[0,1,0]);
let TouchSensor45 = browser.currentScene.createNode("TouchSensor");
TouchSensor45.description = "HAnimSite buttocks_standing_wall_contact_point_pt";
HAnimSite44.children = new MFNode();

HAnimSite44.children[0] = TouchSensor45;

let Shape46 = browser.currentScene.createNode("Shape");
Shape46.USE = "HAnimSiteShape";
HAnimSite44.children[1] = Shape46;

HAnimJoint39.child[1] = HAnimSite44;

let HAnimSite47 = browser.currentScene.createNode("HAnimSite");
HAnimSite47.name = "crotch_pt";
HAnimSite47.DEF = "hanim_crotch_pt";
HAnimSite47.translation = new SFVec3f(new float[0.0034,0.8266,0.0257]);
let TouchSensor48 = browser.currentScene.createNode("TouchSensor");
TouchSensor48.description = "HAnimSite crotch_pt";
HAnimSite47.children = new MFNode();

HAnimSite47.children[0] = TouchSensor48;

let Shape49 = browser.currentScene.createNode("Shape");
Shape49.USE = "HAnimSiteShape";
HAnimSite47.children[1] = Shape49;

HAnimJoint39.child[2] = HAnimSite47;

let HAnimSite50 = browser.currentScene.createNode("HAnimSite");
HAnimSite50.name = "l_asis_pt";
HAnimSite50.DEF = "hanim_l_asis_pt";
HAnimSite50.translation = new SFVec3f(new float[0.0925,0.9983,0.1052]);
let TouchSensor51 = browser.currentScene.createNode("TouchSensor");
TouchSensor51.description = "HAnimSite l_asis_pt";
HAnimSite50.children = new MFNode();

HAnimSite50.children[0] = TouchSensor51;

let Shape52 = browser.currentScene.createNode("Shape");
Shape52.USE = "HAnimSiteShape";
HAnimSite50.children[1] = Shape52;

HAnimJoint39.child[3] = HAnimSite50;

let HAnimSite53 = browser.currentScene.createNode("HAnimSite");
HAnimSite53.name = "l_iliocristale_pt";
HAnimSite53.DEF = "hanim_l_iliocristale_pt";
HAnimSite53.translation = new SFVec3f(new float[0.1612,1.0537,0.0008]);
let TouchSensor54 = browser.currentScene.createNode("TouchSensor");
TouchSensor54.description = "HAnimSite l_iliocristale_pt";
HAnimSite53.children = new MFNode();

HAnimSite53.children[0] = TouchSensor54;

let Shape55 = browser.currentScene.createNode("Shape");
Shape55.USE = "HAnimSiteShape";
HAnimSite53.children[1] = Shape55;

HAnimJoint39.child[4] = HAnimSite53;

let HAnimSite56 = browser.currentScene.createNode("HAnimSite");
HAnimSite56.name = "l_psis_pt";
HAnimSite56.DEF = "hanim_l_psis_pt";
HAnimSite56.translation = new SFVec3f(new float[0.0774,1.019,-0.1151]);
let TouchSensor57 = browser.currentScene.createNode("TouchSensor");
TouchSensor57.description = "HAnimSite l_psis_pt";
HAnimSite56.children = new MFNode();

HAnimSite56.children[0] = TouchSensor57;

let Shape58 = browser.currentScene.createNode("Shape");
Shape58.USE = "HAnimSiteShape";
HAnimSite56.children[1] = Shape58;

HAnimJoint39.child[5] = HAnimSite56;

let HAnimSite59 = browser.currentScene.createNode("HAnimSite");
HAnimSite59.name = "l_trochanterion_pt";
HAnimSite59.DEF = "hanim_l_trochanterion_pt";
HAnimSite59.translation = new SFVec3f(new float[0.1677,0.8336,0.0303]);
let TouchSensor60 = browser.currentScene.createNode("TouchSensor");
TouchSensor60.description = "HAnimSite l_trochanterion_pt";
HAnimSite59.children = new MFNode();

HAnimSite59.children[0] = TouchSensor60;

let Shape61 = browser.currentScene.createNode("Shape");
Shape61.USE = "HAnimSiteShape";
HAnimSite59.children[1] = Shape61;

HAnimJoint39.child[6] = HAnimSite59;

let HAnimSite62 = browser.currentScene.createNode("HAnimSite");
HAnimSite62.name = "r_asis_pt";
HAnimSite62.DEF = "hanim_r_asis_pt";
HAnimSite62.translation = new SFVec3f(new float[-0.0887,1.0021,0.1112]);
let TouchSensor63 = browser.currentScene.createNode("TouchSensor");
TouchSensor63.description = "HAnimSite r_asis_pt";
HAnimSite62.children = new MFNode();

HAnimSite62.children[0] = TouchSensor63;

let Shape64 = browser.currentScene.createNode("Shape");
Shape64.USE = "HAnimSiteShape";
HAnimSite62.children[1] = Shape64;

HAnimJoint39.child[7] = HAnimSite62;

let HAnimSite65 = browser.currentScene.createNode("HAnimSite");
HAnimSite65.name = "r_iliocristale_pt";
HAnimSite65.DEF = "hanim_r_iliocristale_pt";
HAnimSite65.translation = new SFVec3f(new float[-0.1525,1.0628,0.0035]);
let TouchSensor66 = browser.currentScene.createNode("TouchSensor");
TouchSensor66.description = "HAnimSite r_iliocristale_pt";
HAnimSite65.children = new MFNode();

HAnimSite65.children[0] = TouchSensor66;

let Shape67 = browser.currentScene.createNode("Shape");
Shape67.USE = "HAnimSiteShape";
HAnimSite65.children[1] = Shape67;

HAnimJoint39.child[8] = HAnimSite65;

let HAnimSite68 = browser.currentScene.createNode("HAnimSite");
HAnimSite68.name = "r_psis_pt";
HAnimSite68.DEF = "hanim_r_psis_pt";
HAnimSite68.translation = new SFVec3f(new float[-0.0716,1.019,-0.1138]);
let TouchSensor69 = browser.currentScene.createNode("TouchSensor");
TouchSensor69.description = "HAnimSite r_psis_pt";
HAnimSite68.children = new MFNode();

HAnimSite68.children[0] = TouchSensor69;

let Shape70 = browser.currentScene.createNode("Shape");
Shape70.USE = "HAnimSiteShape";
HAnimSite68.children[1] = Shape70;

HAnimJoint39.child[9] = HAnimSite68;

let HAnimSite71 = browser.currentScene.createNode("HAnimSite");
HAnimSite71.name = "r_trochanterion_pt";
HAnimSite71.DEF = "hanim_r_trochanterion_pt";
HAnimSite71.translation = new SFVec3f(new float[-0.1689,0.8419,0.0352]);
let TouchSensor72 = browser.currentScene.createNode("TouchSensor");
TouchSensor72.description = "HAnimSite r_trochanterion_pt";
HAnimSite71.children = new MFNode();

HAnimSite71.children[0] = TouchSensor72;

let Shape73 = browser.currentScene.createNode("Shape");
Shape73.USE = "HAnimSiteShape";
HAnimSite71.children[1] = Shape73;

HAnimJoint39.child[10] = HAnimSite71;

let Shape74 = browser.currentScene.createNode("Shape");
let LineSet75 = browser.currentScene.createNode("LineSet");
LineSet75.vertexCount = new MFInt32(new int[2]);
let Coordinate76 = browser.currentScene.createNode("Coordinate");
Coordinate76.point = new MFVec3f(new float[0,0.824,0.0277,0.0028,1.0568,-0.0776]);
LineSet75.coord = Coordinate76;

//from humanoid_root to vl5
let ColorRGBA77 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA77.USE = "HAnimSegmentLineColorRGBA";
LineSet75.color = ColorRGBA77;

Shape74.geometry = LineSet75;

HAnimJoint39.child[11] = Shape74;

let HAnimSite78 = browser.currentScene.createNode("HAnimSite");
HAnimSite78.name = "navel_pt";
HAnimSite78.DEF = "hanim_navel_pt";
HAnimSite78.translation = new SFVec3f(new float[0.0069,1.0966,0.1017]);
let TouchSensor79 = browser.currentScene.createNode("TouchSensor");
TouchSensor79.description = "HAnimSite navel_pt";
HAnimSite78.children = new MFNode();

HAnimSite78.children[0] = TouchSensor79;

let Shape80 = browser.currentScene.createNode("Shape");
Shape80.USE = "HAnimSiteShape";
HAnimSite78.children[1] = Shape80;

HAnimJoint39.child[12] = HAnimSite78;

let HAnimSite81 = browser.currentScene.createNode("HAnimSite");
HAnimSite81.name = "waist_preferred_anterior_pt";
HAnimSite81.DEF = "hanim_waist_preferred_anterior_pt";
HAnimSite81.translation = new SFVec3f(new float[0,1,0]);
let TouchSensor82 = browser.currentScene.createNode("TouchSensor");
TouchSensor82.description = "HAnimSite waist_preferred_anterior_pt";
HAnimSite81.children = new MFNode();

HAnimSite81.children[0] = TouchSensor82;

let Shape83 = browser.currentScene.createNode("Shape");
Shape83.USE = "HAnimSiteShape";
HAnimSite81.children[1] = Shape83;

HAnimJoint39.child[13] = HAnimSite81;

let HAnimSite84 = browser.currentScene.createNode("HAnimSite");
HAnimSite84.name = "waist_preferred_posterior_pt";
HAnimSite84.DEF = "hanim_waist_preferred_posterior_pt";
HAnimSite84.translation = new SFVec3f(new float[0.29,1.0915,-0.1091]);
let TouchSensor85 = browser.currentScene.createNode("TouchSensor");
TouchSensor85.description = "HAnimSite waist_preferred_posterior_pt";
HAnimSite84.children = new MFNode();

HAnimSite84.children[0] = TouchSensor85;

let Shape86 = browser.currentScene.createNode("Shape");
Shape86.USE = "HAnimSiteShape";
HAnimSite84.children[1] = Shape86;

HAnimJoint39.child[14] = HAnimSite84;

let HAnimJoint87 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint87.name = "sacroiliac";
HAnimJoint87.DEF = "hanim_sacroiliac";
HAnimJoint87.center = new SFVec3f(new float[0,0.9149,0.0016]);
HAnimJoint87.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint87.llimit = new MFFloat(new float[0,0,0]);
let Shape88 = browser.currentScene.createNode("Shape");
let LineSet89 = browser.currentScene.createNode("LineSet");
LineSet89.vertexCount = new MFInt32(new int[2]);
let Coordinate90 = browser.currentScene.createNode("Coordinate");
Coordinate90.point = new MFVec3f(new float[0,0.9149,0.0016,0.0961,0.9124,-0.0001]);
LineSet89.coord = Coordinate90;

//from sacroiliac to l_hip
let ColorRGBA91 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA91.USE = "HAnimSegmentLineColorRGBA";
LineSet89.color = ColorRGBA91;

Shape88.geometry = LineSet89;

HAnimJoint87.child = new undefined();

HAnimJoint87.child[0] = Shape88;

let HAnimSite92 = browser.currentScene.createNode("HAnimSite");
HAnimSite92.name = "l_femoral_lateral_epicondyles_pt";
HAnimSite92.DEF = "hanim_l_femoral_lateral_epicondyles_pt";
HAnimSite92.translation = new SFVec3f(new float[0.1598,0.4967,0.0297]);
let TouchSensor93 = browser.currentScene.createNode("TouchSensor");
TouchSensor93.description = "HAnimSite l_femoral_lateral_epicondyles_pt";
HAnimSite92.children = new MFNode();

HAnimSite92.children[0] = TouchSensor93;

let Shape94 = browser.currentScene.createNode("Shape");
Shape94.USE = "HAnimSiteShape";
HAnimSite92.children[1] = Shape94;

HAnimJoint87.child[1] = HAnimSite92;

let HAnimSite95 = browser.currentScene.createNode("HAnimSite");
HAnimSite95.name = "l_femoral_medial_epicondyles_pt";
HAnimSite95.DEF = "hanim_l_femoral_medial_epicondyles_pt";
HAnimSite95.translation = new SFVec3f(new float[0.0398,0.4946,0.0303]);
let TouchSensor96 = browser.currentScene.createNode("TouchSensor");
TouchSensor96.description = "HAnimSite l_femoral_medial_epicondyles_pt";
HAnimSite95.children = new MFNode();

HAnimSite95.children[0] = TouchSensor96;

let Shape97 = browser.currentScene.createNode("Shape");
Shape97.USE = "HAnimSiteShape";
HAnimSite95.children[1] = Shape97;

HAnimJoint87.child[2] = HAnimSite95;

let HAnimSite98 = browser.currentScene.createNode("HAnimSite");
HAnimSite98.name = "l_knee_crease_pt";
HAnimSite98.DEF = "hanim_l_knee_crease_pt";
HAnimSite98.translation = new SFVec3f(new float[0.0993,0.4881,-0.0309]);
let TouchSensor99 = browser.currentScene.createNode("TouchSensor");
TouchSensor99.description = "HAnimSite l_knee_crease_pt";
HAnimSite98.children = new MFNode();

HAnimSite98.children[0] = TouchSensor99;

let Shape100 = browser.currentScene.createNode("Shape");
Shape100.USE = "HAnimSiteShape";
HAnimSite98.children[1] = Shape100;

HAnimJoint87.child[3] = HAnimSite98;

let HAnimSite101 = browser.currentScene.createNode("HAnimSite");
HAnimSite101.name = "l_suprapatella_pt";
HAnimSite101.DEF = "hanim_l_suprapatella_pt";
HAnimSite101.translation = new SFVec3f(new float[0,1,0]);
let TouchSensor102 = browser.currentScene.createNode("TouchSensor");
TouchSensor102.description = "HAnimSite l_suprapatella_pt";
HAnimSite101.children = new MFNode();

HAnimSite101.children[0] = TouchSensor102;

let Shape103 = browser.currentScene.createNode("Shape");
Shape103.USE = "HAnimSiteShape";
HAnimSite101.children[1] = Shape103;

HAnimJoint87.child[4] = HAnimSite101;

let Shape104 = browser.currentScene.createNode("Shape");
let LineSet105 = browser.currentScene.createNode("LineSet");
LineSet105.vertexCount = new MFInt32(new int[2]);
let Coordinate106 = browser.currentScene.createNode("Coordinate");
Coordinate106.point = new MFVec3f(new float[0,0.9149,0.0016,-0.095,0.9171,0.0029]);
LineSet105.coord = Coordinate106;

//from sacroiliac to r_hip
let ColorRGBA107 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA107.USE = "HAnimSegmentLineColorRGBA";
LineSet105.color = ColorRGBA107;

Shape104.geometry = LineSet105;

HAnimJoint87.child[5] = Shape104;

let HAnimSite108 = browser.currentScene.createNode("HAnimSite");
HAnimSite108.name = "r_femoral_lateral_epicondyles_pt";
HAnimSite108.DEF = "hanim_r_femoral_lateral_epicondyles_pt";
HAnimSite108.translation = new SFVec3f(new float[-0.1421,0.4992,0.031]);
let TouchSensor109 = browser.currentScene.createNode("TouchSensor");
TouchSensor109.description = "HAnimSite r_femoral_lateral_epicondyles_pt";
HAnimSite108.children = new MFNode();

HAnimSite108.children[0] = TouchSensor109;

let Shape110 = browser.currentScene.createNode("Shape");
Shape110.USE = "HAnimSiteShape";
HAnimSite108.children[1] = Shape110;

HAnimJoint87.child[6] = HAnimSite108;

let HAnimSite111 = browser.currentScene.createNode("HAnimSite");
HAnimSite111.name = "r_femoral_medial_epicondyles_pt";
HAnimSite111.DEF = "hanim_r_femoral_medial_epicondyles_pt";
HAnimSite111.translation = new SFVec3f(new float[-0.0221,0.5014,0.0289]);
let TouchSensor112 = browser.currentScene.createNode("TouchSensor");
TouchSensor112.description = "HAnimSite r_femoral_medial_epicondyles_pt";
HAnimSite111.children = new MFNode();

HAnimSite111.children[0] = TouchSensor112;

let Shape113 = browser.currentScene.createNode("Shape");
Shape113.USE = "HAnimSiteShape";
HAnimSite111.children[1] = Shape113;

HAnimJoint87.child[7] = HAnimSite111;

let HAnimSite114 = browser.currentScene.createNode("HAnimSite");
HAnimSite114.name = "r_knee_crease_pt";
HAnimSite114.DEF = "hanim_r_knee_crease_pt";
HAnimSite114.translation = new SFVec3f(new float[-0.0825,0.4932,-0.0326]);
let TouchSensor115 = browser.currentScene.createNode("TouchSensor");
TouchSensor115.description = "HAnimSite r_knee_crease_pt";
HAnimSite114.children = new MFNode();

HAnimSite114.children[0] = TouchSensor115;

let Shape116 = browser.currentScene.createNode("Shape");
Shape116.USE = "HAnimSiteShape";
HAnimSite114.children[1] = Shape116;

HAnimJoint87.child[8] = HAnimSite114;

let HAnimSite117 = browser.currentScene.createNode("HAnimSite");
HAnimSite117.name = "r_suprapatella_pt";
HAnimSite117.DEF = "hanim_r_suprapatella_pt";
HAnimSite117.translation = new SFVec3f(new float[0,1,0]);
let TouchSensor118 = browser.currentScene.createNode("TouchSensor");
TouchSensor118.description = "HAnimSite r_suprapatella_pt";
HAnimSite117.children = new MFNode();

HAnimSite117.children[0] = TouchSensor118;

let Shape119 = browser.currentScene.createNode("Shape");
Shape119.USE = "HAnimSiteShape";
HAnimSite117.children[1] = Shape119;

HAnimJoint87.child[9] = HAnimSite117;

let HAnimJoint120 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint120.name = "l_hip";
HAnimJoint120.DEF = "hanim_l_hip";
HAnimJoint120.center = new SFVec3f(new float[0.0961,0.9124,-0.0001]);
HAnimJoint120.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint120.llimit = new MFFloat(new float[0,0,0]);
let Shape121 = browser.currentScene.createNode("Shape");
let LineSet122 = browser.currentScene.createNode("LineSet");
LineSet122.vertexCount = new MFInt32(new int[2]);
let Coordinate123 = browser.currentScene.createNode("Coordinate");
Coordinate123.point = new MFVec3f(new float[0.0961,0.9124,-0.0001,0.104,0.4867,0.0308]);
LineSet122.coord = Coordinate123;

//from l_hip to l_knee
let ColorRGBA124 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA124.USE = "HAnimSegmentLineColorRGBA";
LineSet122.color = ColorRGBA124;

Shape121.geometry = LineSet122;

HAnimJoint120.child = new undefined();

HAnimJoint120.child[0] = Shape121;

let HAnimSite125 = browser.currentScene.createNode("HAnimSite");
HAnimSite125.name = "l_lateral_malleolus_pt";
HAnimSite125.DEF = "hanim_l_lateral_malleolus_pt";
HAnimSite125.translation = new SFVec3f(new float[0.1308,0.0597,-0.1032]);
let TouchSensor126 = browser.currentScene.createNode("TouchSensor");
TouchSensor126.description = "HAnimSite l_lateral_malleolus_pt";
HAnimSite125.children = new MFNode();

HAnimSite125.children[0] = TouchSensor126;

let Shape127 = browser.currentScene.createNode("Shape");
Shape127.USE = "HAnimSiteShape";
HAnimSite125.children[1] = Shape127;

HAnimJoint120.child[1] = HAnimSite125;

let HAnimSite128 = browser.currentScene.createNode("HAnimSite");
HAnimSite128.name = "l_medial_malleolus_pt";
HAnimSite128.DEF = "hanim_l_medial_malleolus_pt";
HAnimSite128.translation = new SFVec3f(new float[0.089,0.0716,-0.0881]);
let TouchSensor129 = browser.currentScene.createNode("TouchSensor");
TouchSensor129.description = "HAnimSite l_medial_malleolus_pt";
HAnimSite128.children = new MFNode();

HAnimSite128.children[0] = TouchSensor129;

let Shape130 = browser.currentScene.createNode("Shape");
Shape130.USE = "HAnimSiteShape";
HAnimSite128.children[1] = Shape130;

HAnimJoint120.child[2] = HAnimSite128;

let HAnimSite131 = browser.currentScene.createNode("HAnimSite");
HAnimSite131.name = "l_tibiale_pt";
HAnimSite131.DEF = "hanim_l_tibiale_pt";
HAnimSite131.translation = new SFVec3f(new float[0,1,0]);
let TouchSensor132 = browser.currentScene.createNode("TouchSensor");
TouchSensor132.description = "HAnimSite l_tibiale_pt";
HAnimSite131.children = new MFNode();

HAnimSite131.children[0] = TouchSensor132;

let Shape133 = browser.currentScene.createNode("Shape");
Shape133.USE = "HAnimSiteShape";
HAnimSite131.children[1] = Shape133;

HAnimJoint120.child[3] = HAnimSite131;

let HAnimJoint134 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint134.name = "l_knee";
HAnimJoint134.DEF = "hanim_l_knee";
HAnimJoint134.center = new SFVec3f(new float[0.104,0.4867,0.0308]);
HAnimJoint134.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint134.llimit = new MFFloat(new float[0,0,0]);
let Shape135 = browser.currentScene.createNode("Shape");
let LineSet136 = browser.currentScene.createNode("LineSet");
LineSet136.vertexCount = new MFInt32(new int[2]);
let Coordinate137 = browser.currentScene.createNode("Coordinate");
Coordinate137.point = new MFVec3f(new float[0.104,0.4867,0.0308,0.1101,0.0656,-0.0736]);
LineSet136.coord = Coordinate137;

//from l_knee to l_talocrural
let ColorRGBA138 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA138.USE = "HAnimSegmentLineColorRGBA";
LineSet136.color = ColorRGBA138;

Shape135.geometry = LineSet136;

HAnimJoint134.child = new undefined();

HAnimJoint134.child[0] = Shape135;

let HAnimSite139 = browser.currentScene.createNode("HAnimSite");
HAnimSite139.name = "l_calcaneus_posterior_pt";
HAnimSite139.DEF = "hanim_l_calcaneus_posterior_pt";
HAnimSite139.translation = new SFVec3f(new float[0.0974,0.0259,-0.1171]);
let TouchSensor140 = browser.currentScene.createNode("TouchSensor");
TouchSensor140.description = "HAnimSite l_calcaneus_posterior_pt";
HAnimSite139.children = new MFNode();

HAnimSite139.children[0] = TouchSensor140;

let Shape141 = browser.currentScene.createNode("Shape");
Shape141.USE = "HAnimSiteShape";
HAnimSite139.children[1] = Shape141;

HAnimJoint134.child[1] = HAnimSite139;

let HAnimSite142 = browser.currentScene.createNode("HAnimSite");
HAnimSite142.name = "l_sphyrion_pt";
HAnimSite142.DEF = "hanim_l_sphyrion_pt";
HAnimSite142.translation = new SFVec3f(new float[0.089,0.0575,-0.0943]);
let TouchSensor143 = browser.currentScene.createNode("TouchSensor");
TouchSensor143.description = "HAnimSite l_sphyrion_pt";
HAnimSite142.children = new MFNode();

HAnimSite142.children[0] = TouchSensor143;

let Shape144 = browser.currentScene.createNode("Shape");
Shape144.USE = "HAnimSiteShape";
HAnimSite142.children[1] = Shape144;

HAnimJoint134.child[2] = HAnimSite142;

let HAnimJoint145 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint145.name = "l_talocrural";
HAnimJoint145.DEF = "hanim_l_talocrural";
HAnimJoint145.center = new SFVec3f(new float[0.1101,0.0656,-0.0736]);
HAnimJoint145.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint145.llimit = new MFFloat(new float[0,0,0]);
let Shape146 = browser.currentScene.createNode("Shape");
let LineSet147 = browser.currentScene.createNode("LineSet");
LineSet147.vertexCount = new MFInt32(new int[2]);
let Coordinate148 = browser.currentScene.createNode("Coordinate");
Coordinate148.point = new MFVec3f(new float[0.1101,0.0656,-0.0736,0,1,0]);
LineSet147.coord = Coordinate148;

//from l_talocrural to l_talocalcaneonavicular
let ColorRGBA149 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA149.USE = "HAnimSegmentLineColorRGBA";
LineSet147.color = ColorRGBA149;

Shape146.geometry = LineSet147;

HAnimJoint145.child = new undefined();

HAnimJoint145.child[0] = Shape146;

let Shape150 = browser.currentScene.createNode("Shape");
let LineSet151 = browser.currentScene.createNode("LineSet");
LineSet151.vertexCount = new MFInt32(new int[2]);
let Coordinate152 = browser.currentScene.createNode("Coordinate");
Coordinate152.point = new MFVec3f(new float[0.1101,0.0656,-0.0736,0,1,0]);
LineSet151.coord = Coordinate152;

//from l_talocrural to l_calcaneocuboid
let ColorRGBA153 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA153.USE = "HAnimSegmentLineColorRGBA";
LineSet151.color = ColorRGBA153;

Shape150.geometry = LineSet151;

HAnimJoint145.child[1] = Shape150;

let HAnimJoint154 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint154.name = "l_talocalcaneonavicular";
HAnimJoint154.DEF = "hanim_l_talocalcaneonavicular";
HAnimJoint154.center = new SFVec3f(new float[0,1,0]);
HAnimJoint154.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint154.llimit = new MFFloat(new float[0,0,0]);
let Shape155 = browser.currentScene.createNode("Shape");
let LineSet156 = browser.currentScene.createNode("LineSet");
LineSet156.vertexCount = new MFInt32(new int[1]);
let Coordinate157 = browser.currentScene.createNode("Coordinate");
Coordinate157.point = new MFVec3f(new float[0,1,0]);
LineSet156.coord = Coordinate157;

//from l_talocalcaneonavicular to l_cuneonavicular_1
let ColorRGBA158 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA158.USE = "HAnimSegmentLineColorRGBA";
LineSet156.color = ColorRGBA158;

Shape155.geometry = LineSet156;

HAnimJoint154.child = new undefined();

HAnimJoint154.child[0] = Shape155;

let Shape159 = browser.currentScene.createNode("Shape");
let LineSet160 = browser.currentScene.createNode("LineSet");
LineSet160.vertexCount = new MFInt32(new int[1]);
let Coordinate161 = browser.currentScene.createNode("Coordinate");
Coordinate161.point = new MFVec3f(new float[0,1,0]);
LineSet160.coord = Coordinate161;

//from l_talocalcaneonavicular to l_cuneonavicular_2
let ColorRGBA162 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA162.USE = "HAnimSegmentLineColorRGBA";
LineSet160.color = ColorRGBA162;

Shape159.geometry = LineSet160;

HAnimJoint154.child[1] = Shape159;

let Shape163 = browser.currentScene.createNode("Shape");
let LineSet164 = browser.currentScene.createNode("LineSet");
LineSet164.vertexCount = new MFInt32(new int[1]);
let Coordinate165 = browser.currentScene.createNode("Coordinate");
Coordinate165.point = new MFVec3f(new float[0,1,0]);
LineSet164.coord = Coordinate165;

//from l_talocalcaneonavicular to l_cuneonavicular_3
let ColorRGBA166 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA166.USE = "HAnimSegmentLineColorRGBA";
LineSet164.color = ColorRGBA166;

Shape163.geometry = LineSet164;

HAnimJoint154.child[2] = Shape163;

let HAnimJoint167 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint167.name = "l_cuneonavicular_1";
HAnimJoint167.DEF = "hanim_l_cuneonavicular_1";
HAnimJoint167.center = new SFVec3f(new float[0,1,0]);
HAnimJoint167.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint167.llimit = new MFFloat(new float[0,0,0]);
let Shape168 = browser.currentScene.createNode("Shape");
let LineSet169 = browser.currentScene.createNode("LineSet");
LineSet169.vertexCount = new MFInt32(new int[1]);
let Coordinate170 = browser.currentScene.createNode("Coordinate");
Coordinate170.point = new MFVec3f(new float[0,1,0]);
LineSet169.coord = Coordinate170;

//from l_cuneonavicular_1 to l_tarsometatarsal_1
let ColorRGBA171 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA171.USE = "HAnimSegmentLineColorRGBA";
LineSet169.color = ColorRGBA171;

Shape168.geometry = LineSet169;

HAnimJoint167.child = new undefined();

HAnimJoint167.child[0] = Shape168;

let HAnimJoint172 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint172.name = "l_tarsometatarsal_1";
HAnimJoint172.DEF = "hanim_l_tarsometatarsal_1";
HAnimJoint172.center = new SFVec3f(new float[0,1,0]);
HAnimJoint172.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint172.llimit = new MFFloat(new float[0,0,0]);
let Shape173 = browser.currentScene.createNode("Shape");
let LineSet174 = browser.currentScene.createNode("LineSet");
LineSet174.vertexCount = new MFInt32(new int[1]);
let Coordinate175 = browser.currentScene.createNode("Coordinate");
Coordinate175.point = new MFVec3f(new float[0,1,0]);
LineSet174.coord = Coordinate175;

//from l_tarsometatarsal_1 to l_metatarsophalangeal_1
let ColorRGBA176 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA176.USE = "HAnimSegmentLineColorRGBA";
LineSet174.color = ColorRGBA176;

Shape173.geometry = LineSet174;

HAnimJoint172.child = new undefined();

HAnimJoint172.child[0] = Shape173;

let HAnimSite177 = browser.currentScene.createNode("HAnimSite");
HAnimSite177.name = "l_metatarsal_phalanx_1_pt";
HAnimSite177.DEF = "hanim_l_metatarsal_phalanx_1_pt";
HAnimSite177.translation = new SFVec3f(new float[0,1,0]);
let TouchSensor178 = browser.currentScene.createNode("TouchSensor");
TouchSensor178.description = "HAnimSite l_metatarsal_phalanx_1_pt";
HAnimSite177.children = new MFNode();

HAnimSite177.children[0] = TouchSensor178;

let Shape179 = browser.currentScene.createNode("Shape");
Shape179.USE = "HAnimSiteShape";
HAnimSite177.children[1] = Shape179;

HAnimJoint172.child[1] = HAnimSite177;

let HAnimJoint180 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint180.name = "l_metatarsophalangeal_1";
HAnimJoint180.DEF = "hanim_l_metatarsophalangeal_1";
HAnimJoint180.center = new SFVec3f(new float[0,1,0]);
HAnimJoint180.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint180.llimit = new MFFloat(new float[0,0,0]);
let Shape181 = browser.currentScene.createNode("Shape");
let LineSet182 = browser.currentScene.createNode("LineSet");
LineSet182.vertexCount = new MFInt32(new int[1]);
let Coordinate183 = browser.currentScene.createNode("Coordinate");
Coordinate183.point = new MFVec3f(new float[0,1,0]);
LineSet182.coord = Coordinate183;

//from l_metatarsophalangeal_1 to l_tarsal_interphalangeal_1
let ColorRGBA184 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA184.USE = "HAnimSegmentLineColorRGBA";
LineSet182.color = ColorRGBA184;

Shape181.geometry = LineSet182;

HAnimJoint180.child = new undefined();

HAnimJoint180.child[0] = Shape181;

let HAnimSite185 = browser.currentScene.createNode("HAnimSite");
HAnimSite185.name = "l_tarsal_distal_phalanx_1_tip";
HAnimSite185.DEF = "hanim_l_tarsal_distal_phalanx_1_tip";
HAnimSite185.translation = new SFVec3f(new float[0,1,0]);
let TouchSensor186 = browser.currentScene.createNode("TouchSensor");
TouchSensor186.description = "HAnimSite l_tarsal_distal_phalanx_1_tip";
HAnimSite185.children = new MFNode();

HAnimSite185.children[0] = TouchSensor186;

let Shape187 = browser.currentScene.createNode("Shape");
Shape187.USE = "HAnimSiteShape";
HAnimSite185.children[1] = Shape187;

HAnimJoint180.child[1] = HAnimSite185;

let HAnimJoint188 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint188.name = "l_tarsal_interphalangeal_1";
HAnimJoint188.DEF = "hanim_l_tarsal_interphalangeal_1";
HAnimJoint188.center = new SFVec3f(new float[0,1,0]);
HAnimJoint188.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint188.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint180.children[2] = HAnimJoint188;

HAnimJoint172.children[2] = HAnimJoint180;

HAnimJoint167.children[1] = HAnimJoint172;

HAnimJoint154.children[3] = HAnimJoint167;

let HAnimJoint189 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint189.name = "l_cuneonavicular_2";
HAnimJoint189.DEF = "hanim_l_cuneonavicular_2";
HAnimJoint189.center = new SFVec3f(new float[0,1,0]);
HAnimJoint189.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint189.llimit = new MFFloat(new float[0,0,0]);
let Shape190 = browser.currentScene.createNode("Shape");
let LineSet191 = browser.currentScene.createNode("LineSet");
LineSet191.vertexCount = new MFInt32(new int[1]);
let Coordinate192 = browser.currentScene.createNode("Coordinate");
Coordinate192.point = new MFVec3f(new float[0,1,0]);
LineSet191.coord = Coordinate192;

//from l_cuneonavicular_2 to l_tarsometatarsal_2
let ColorRGBA193 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA193.USE = "HAnimSegmentLineColorRGBA";
LineSet191.color = ColorRGBA193;

Shape190.geometry = LineSet191;

HAnimJoint189.child = new undefined();

HAnimJoint189.child[0] = Shape190;

let HAnimJoint194 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint194.name = "l_tarsometatarsal_2";
HAnimJoint194.DEF = "hanim_l_tarsometatarsal_2";
HAnimJoint194.center = new SFVec3f(new float[0,1,0]);
HAnimJoint194.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint194.llimit = new MFFloat(new float[0,0,0]);
let Shape195 = browser.currentScene.createNode("Shape");
let LineSet196 = browser.currentScene.createNode("LineSet");
LineSet196.vertexCount = new MFInt32(new int[1]);
let Coordinate197 = browser.currentScene.createNode("Coordinate");
Coordinate197.point = new MFVec3f(new float[0,1,0]);
LineSet196.coord = Coordinate197;

//from l_tarsometatarsal_2 to l_metatarsophalangeal_2
let ColorRGBA198 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA198.USE = "HAnimSegmentLineColorRGBA";
LineSet196.color = ColorRGBA198;

Shape195.geometry = LineSet196;

HAnimJoint194.child = new undefined();

HAnimJoint194.child[0] = Shape195;

let HAnimJoint199 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint199.name = "l_metatarsophalangeal_2";
HAnimJoint199.DEF = "hanim_l_metatarsophalangeal_2";
HAnimJoint199.center = new SFVec3f(new float[0,1,0]);
HAnimJoint199.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint199.llimit = new MFFloat(new float[0,0,0]);
let Shape200 = browser.currentScene.createNode("Shape");
let LineSet201 = browser.currentScene.createNode("LineSet");
LineSet201.vertexCount = new MFInt32(new int[1]);
let Coordinate202 = browser.currentScene.createNode("Coordinate");
Coordinate202.point = new MFVec3f(new float[0,1,0]);
LineSet201.coord = Coordinate202;

//from l_metatarsophalangeal_2 to l_tarsal_proximal_interphalangeal_2
let ColorRGBA203 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA203.USE = "HAnimSegmentLineColorRGBA";
LineSet201.color = ColorRGBA203;

Shape200.geometry = LineSet201;

HAnimJoint199.child = new undefined();

HAnimJoint199.child[0] = Shape200;

let HAnimJoint204 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint204.name = "l_tarsal_proximal_interphalangeal_2";
HAnimJoint204.DEF = "hanim_l_tarsal_proximal_interphalangeal_2";
HAnimJoint204.center = new SFVec3f(new float[0,1,0]);
HAnimJoint204.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint204.llimit = new MFFloat(new float[0,0,0]);
let Shape205 = browser.currentScene.createNode("Shape");
let LineSet206 = browser.currentScene.createNode("LineSet");
LineSet206.vertexCount = new MFInt32(new int[1]);
let Coordinate207 = browser.currentScene.createNode("Coordinate");
Coordinate207.point = new MFVec3f(new float[0,1,0]);
LineSet206.coord = Coordinate207;

//from l_tarsal_proximal_interphalangeal_2 to l_tarsal_distal_interphalangeal_2
let ColorRGBA208 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA208.USE = "HAnimSegmentLineColorRGBA";
LineSet206.color = ColorRGBA208;

Shape205.geometry = LineSet206;

HAnimJoint204.child = new undefined();

HAnimJoint204.child[0] = Shape205;

let HAnimSite209 = browser.currentScene.createNode("HAnimSite");
HAnimSite209.name = "l_tarsal_distal_phalanx_2_tip";
HAnimSite209.DEF = "hanim_l_tarsal_distal_phalanx_2_tip";
HAnimSite209.translation = new SFVec3f(new float[0.1195,0.0079,0.1433]);
let TouchSensor210 = browser.currentScene.createNode("TouchSensor");
TouchSensor210.description = "HAnimSite l_tarsal_distal_phalanx_2_tip";
HAnimSite209.children = new MFNode();

HAnimSite209.children[0] = TouchSensor210;

let Shape211 = browser.currentScene.createNode("Shape");
Shape211.USE = "HAnimSiteShape";
HAnimSite209.children[1] = Shape211;

HAnimJoint204.child[1] = HAnimSite209;

let HAnimJoint212 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint212.name = "l_tarsal_distal_interphalangeal_2";
HAnimJoint212.DEF = "hanim_l_tarsal_distal_interphalangeal_2";
HAnimJoint212.center = new SFVec3f(new float[0,1,0]);
HAnimJoint212.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint212.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint204.children[2] = HAnimJoint212;

HAnimJoint199.children[1] = HAnimJoint204;

HAnimJoint194.children[1] = HAnimJoint199;

HAnimJoint189.children[1] = HAnimJoint194;

HAnimJoint154.children[4] = HAnimJoint189;

let HAnimJoint213 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint213.name = "l_cuneonavicular_3";
HAnimJoint213.DEF = "hanim_l_cuneonavicular_3";
HAnimJoint213.center = new SFVec3f(new float[0,1,0]);
HAnimJoint213.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint213.llimit = new MFFloat(new float[0,0,0]);
let Shape214 = browser.currentScene.createNode("Shape");
let LineSet215 = browser.currentScene.createNode("LineSet");
LineSet215.vertexCount = new MFInt32(new int[1]);
let Coordinate216 = browser.currentScene.createNode("Coordinate");
Coordinate216.point = new MFVec3f(new float[0,1,0]);
LineSet215.coord = Coordinate216;

//from l_cuneonavicular_3 to l_tarsometatarsal_3
let ColorRGBA217 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA217.USE = "HAnimSegmentLineColorRGBA";
LineSet215.color = ColorRGBA217;

Shape214.geometry = LineSet215;

HAnimJoint213.child = new undefined();

HAnimJoint213.child[0] = Shape214;

let HAnimJoint218 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint218.name = "l_tarsometatarsal_3";
HAnimJoint218.DEF = "hanim_l_tarsometatarsal_3";
HAnimJoint218.center = new SFVec3f(new float[0,1,0]);
HAnimJoint218.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint218.llimit = new MFFloat(new float[0,0,0]);
let Shape219 = browser.currentScene.createNode("Shape");
let LineSet220 = browser.currentScene.createNode("LineSet");
LineSet220.vertexCount = new MFInt32(new int[1]);
let Coordinate221 = browser.currentScene.createNode("Coordinate");
Coordinate221.point = new MFVec3f(new float[0,1,0]);
LineSet220.coord = Coordinate221;

//from l_tarsometatarsal_3 to l_metatarsophalangeal_3
let ColorRGBA222 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA222.USE = "HAnimSegmentLineColorRGBA";
LineSet220.color = ColorRGBA222;

Shape219.geometry = LineSet220;

HAnimJoint218.child = new undefined();

HAnimJoint218.child[0] = Shape219;

let HAnimJoint223 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint223.name = "l_metatarsophalangeal_3";
HAnimJoint223.DEF = "hanim_l_metatarsophalangeal_3";
HAnimJoint223.center = new SFVec3f(new float[0,1,0]);
HAnimJoint223.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint223.llimit = new MFFloat(new float[0,0,0]);
let Shape224 = browser.currentScene.createNode("Shape");
let LineSet225 = browser.currentScene.createNode("LineSet");
LineSet225.vertexCount = new MFInt32(new int[1]);
let Coordinate226 = browser.currentScene.createNode("Coordinate");
Coordinate226.point = new MFVec3f(new float[0,1,0]);
LineSet225.coord = Coordinate226;

//from l_metatarsophalangeal_3 to l_tarsal_proximal_interphalangeal_3
let ColorRGBA227 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA227.USE = "HAnimSegmentLineColorRGBA";
LineSet225.color = ColorRGBA227;

Shape224.geometry = LineSet225;

HAnimJoint223.child = new undefined();

HAnimJoint223.child[0] = Shape224;

let HAnimJoint228 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint228.name = "l_tarsal_proximal_interphalangeal_3";
HAnimJoint228.DEF = "hanim_l_tarsal_proximal_interphalangeal_3";
HAnimJoint228.center = new SFVec3f(new float[0,1,0]);
HAnimJoint228.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint228.llimit = new MFFloat(new float[0,0,0]);
let Shape229 = browser.currentScene.createNode("Shape");
let LineSet230 = browser.currentScene.createNode("LineSet");
LineSet230.vertexCount = new MFInt32(new int[1]);
let Coordinate231 = browser.currentScene.createNode("Coordinate");
Coordinate231.point = new MFVec3f(new float[0,1,0]);
LineSet230.coord = Coordinate231;

//from l_tarsal_proximal_interphalangeal_3 to l_tarsal_distal_interphalangeal_3
let ColorRGBA232 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA232.USE = "HAnimSegmentLineColorRGBA";
LineSet230.color = ColorRGBA232;

Shape229.geometry = LineSet230;

HAnimJoint228.child = new undefined();

HAnimJoint228.child[0] = Shape229;

let HAnimSite233 = browser.currentScene.createNode("HAnimSite");
HAnimSite233.name = "l_tarsal_distal_phalanx_3_tip";
HAnimSite233.DEF = "hanim_l_tarsal_distal_phalanx_3_tip";
HAnimSite233.translation = new SFVec3f(new float[0,1,0]);
let TouchSensor234 = browser.currentScene.createNode("TouchSensor");
TouchSensor234.description = "HAnimSite l_tarsal_distal_phalanx_3_tip";
HAnimSite233.children = new MFNode();

HAnimSite233.children[0] = TouchSensor234;

let Shape235 = browser.currentScene.createNode("Shape");
Shape235.USE = "HAnimSiteShape";
HAnimSite233.children[1] = Shape235;

HAnimJoint228.child[1] = HAnimSite233;

let HAnimJoint236 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint236.name = "l_tarsal_distal_interphalangeal_3";
HAnimJoint236.DEF = "hanim_l_tarsal_distal_interphalangeal_3";
HAnimJoint236.center = new SFVec3f(new float[0,1,0]);
HAnimJoint236.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint236.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint228.children[2] = HAnimJoint236;

HAnimJoint223.children[1] = HAnimJoint228;

HAnimJoint218.children[1] = HAnimJoint223;

HAnimJoint213.children[1] = HAnimJoint218;

HAnimJoint154.children[5] = HAnimJoint213;

HAnimJoint145.children[2] = HAnimJoint154;

let HAnimJoint237 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint237.name = "l_calcaneocuboid";
HAnimJoint237.DEF = "hanim_l_calcaneocuboid";
HAnimJoint237.center = new SFVec3f(new float[0,1,0]);
HAnimJoint237.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint237.llimit = new MFFloat(new float[0,0,0]);
let Shape238 = browser.currentScene.createNode("Shape");
let LineSet239 = browser.currentScene.createNode("LineSet");
LineSet239.vertexCount = new MFInt32(new int[1]);
let Coordinate240 = browser.currentScene.createNode("Coordinate");
Coordinate240.point = new MFVec3f(new float[0,1,0]);
LineSet239.coord = Coordinate240;

//from l_calcaneocuboid to l_transversetarsal
let ColorRGBA241 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA241.USE = "HAnimSegmentLineColorRGBA";
LineSet239.color = ColorRGBA241;

Shape238.geometry = LineSet239;

HAnimJoint237.child = new undefined();

HAnimJoint237.child[0] = Shape238;

let HAnimJoint242 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint242.name = "l_transversetarsal";
HAnimJoint242.DEF = "hanim_l_transversetarsal";
HAnimJoint242.center = new SFVec3f(new float[0,1,0]);
HAnimJoint242.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint242.llimit = new MFFloat(new float[0,0,0]);
let Shape243 = browser.currentScene.createNode("Shape");
let LineSet244 = browser.currentScene.createNode("LineSet");
LineSet244.vertexCount = new MFInt32(new int[1]);
let Coordinate245 = browser.currentScene.createNode("Coordinate");
Coordinate245.point = new MFVec3f(new float[0,1,0]);
LineSet244.coord = Coordinate245;

//from l_transversetarsal to l_tarsometatarsal_4
let ColorRGBA246 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA246.USE = "HAnimSegmentLineColorRGBA";
LineSet244.color = ColorRGBA246;

Shape243.geometry = LineSet244;

HAnimJoint242.child = new undefined();

HAnimJoint242.child[0] = Shape243;

let Shape247 = browser.currentScene.createNode("Shape");
let LineSet248 = browser.currentScene.createNode("LineSet");
LineSet248.vertexCount = new MFInt32(new int[1]);
let Coordinate249 = browser.currentScene.createNode("Coordinate");
Coordinate249.point = new MFVec3f(new float[0,1,0]);
LineSet248.coord = Coordinate249;

//from l_transversetarsal to l_tarsometatarsal_5
let ColorRGBA250 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA250.USE = "HAnimSegmentLineColorRGBA";
LineSet248.color = ColorRGBA250;

Shape247.geometry = LineSet248;

HAnimJoint242.child[1] = Shape247;

let HAnimJoint251 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint251.name = "l_tarsometatarsal_4";
HAnimJoint251.DEF = "hanim_l_tarsometatarsal_4";
HAnimJoint251.center = new SFVec3f(new float[0,1,0]);
HAnimJoint251.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint251.llimit = new MFFloat(new float[0,0,0]);
let Shape252 = browser.currentScene.createNode("Shape");
let LineSet253 = browser.currentScene.createNode("LineSet");
LineSet253.vertexCount = new MFInt32(new int[1]);
let Coordinate254 = browser.currentScene.createNode("Coordinate");
Coordinate254.point = new MFVec3f(new float[0,1,0]);
LineSet253.coord = Coordinate254;

//from l_tarsometatarsal_4 to l_metatarsophalangeal_4
let ColorRGBA255 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA255.USE = "HAnimSegmentLineColorRGBA";
LineSet253.color = ColorRGBA255;

Shape252.geometry = LineSet253;

HAnimJoint251.child = new undefined();

HAnimJoint251.child[0] = Shape252;

let HAnimJoint256 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint256.name = "l_metatarsophalangeal_4";
HAnimJoint256.DEF = "hanim_l_metatarsophalangeal_4";
HAnimJoint256.center = new SFVec3f(new float[0,1,0]);
HAnimJoint256.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint256.llimit = new MFFloat(new float[0,0,0]);
let Shape257 = browser.currentScene.createNode("Shape");
let LineSet258 = browser.currentScene.createNode("LineSet");
LineSet258.vertexCount = new MFInt32(new int[1]);
let Coordinate259 = browser.currentScene.createNode("Coordinate");
Coordinate259.point = new MFVec3f(new float[0,1,0]);
LineSet258.coord = Coordinate259;

//from l_metatarsophalangeal_4 to l_tarsal_proximal_interphalangeal_4
let ColorRGBA260 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA260.USE = "HAnimSegmentLineColorRGBA";
LineSet258.color = ColorRGBA260;

Shape257.geometry = LineSet258;

HAnimJoint256.child = new undefined();

HAnimJoint256.child[0] = Shape257;

let HAnimJoint261 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint261.name = "l_tarsal_proximal_interphalangeal_4";
HAnimJoint261.DEF = "hanim_l_tarsal_proximal_interphalangeal_4";
HAnimJoint261.center = new SFVec3f(new float[0,1,0]);
HAnimJoint261.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint261.llimit = new MFFloat(new float[0,0,0]);
let Shape262 = browser.currentScene.createNode("Shape");
let LineSet263 = browser.currentScene.createNode("LineSet");
LineSet263.vertexCount = new MFInt32(new int[1]);
let Coordinate264 = browser.currentScene.createNode("Coordinate");
Coordinate264.point = new MFVec3f(new float[0,1,0]);
LineSet263.coord = Coordinate264;

//from l_tarsal_proximal_interphalangeal_4 to l_tarsal_distal_interphalangeal_4
let ColorRGBA265 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA265.USE = "HAnimSegmentLineColorRGBA";
LineSet263.color = ColorRGBA265;

Shape262.geometry = LineSet263;

HAnimJoint261.child = new undefined();

HAnimJoint261.child[0] = Shape262;

let HAnimSite266 = browser.currentScene.createNode("HAnimSite");
HAnimSite266.name = "l_tarsal_distal_phalanx_4_tip";
HAnimSite266.DEF = "hanim_l_tarsal_distal_phalanx_4_tip";
HAnimSite266.translation = new SFVec3f(new float[0,1,0]);
let TouchSensor267 = browser.currentScene.createNode("TouchSensor");
TouchSensor267.description = "HAnimSite l_tarsal_distal_phalanx_4_tip";
HAnimSite266.children = new MFNode();

HAnimSite266.children[0] = TouchSensor267;

let Shape268 = browser.currentScene.createNode("Shape");
Shape268.USE = "HAnimSiteShape";
HAnimSite266.children[1] = Shape268;

HAnimJoint261.child[1] = HAnimSite266;

let HAnimJoint269 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint269.name = "l_tarsal_distal_interphalangeal_4";
HAnimJoint269.DEF = "hanim_l_tarsal_distal_interphalangeal_4";
HAnimJoint269.center = new SFVec3f(new float[0,1,0]);
HAnimJoint269.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint269.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint261.children[2] = HAnimJoint269;

HAnimJoint256.children[1] = HAnimJoint261;

HAnimJoint251.children[1] = HAnimJoint256;

HAnimJoint242.children[2] = HAnimJoint251;

let HAnimJoint270 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint270.name = "l_tarsometatarsal_5";
HAnimJoint270.DEF = "hanim_l_tarsometatarsal_5";
HAnimJoint270.center = new SFVec3f(new float[0,1,0]);
HAnimJoint270.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint270.llimit = new MFFloat(new float[0,0,0]);
let Shape271 = browser.currentScene.createNode("Shape");
let LineSet272 = browser.currentScene.createNode("LineSet");
LineSet272.vertexCount = new MFInt32(new int[1]);
let Coordinate273 = browser.currentScene.createNode("Coordinate");
Coordinate273.point = new MFVec3f(new float[0,1,0]);
LineSet272.coord = Coordinate273;

//from l_tarsometatarsal_5 to l_metatarsophalangeal_5
let ColorRGBA274 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA274.USE = "HAnimSegmentLineColorRGBA";
LineSet272.color = ColorRGBA274;

Shape271.geometry = LineSet272;

HAnimJoint270.child = new undefined();

HAnimJoint270.child[0] = Shape271;

let HAnimSite275 = browser.currentScene.createNode("HAnimSite");
HAnimSite275.name = "l_metatarsal_phalanx_5_pt";
HAnimSite275.DEF = "hanim_l_metatarsal_phalanx_5_pt";
HAnimSite275.translation = new SFVec3f(new float[0,1,0]);
let TouchSensor276 = browser.currentScene.createNode("TouchSensor");
TouchSensor276.description = "HAnimSite l_metatarsal_phalanx_5_pt";
HAnimSite275.children = new MFNode();

HAnimSite275.children[0] = TouchSensor276;

let Shape277 = browser.currentScene.createNode("Shape");
Shape277.USE = "HAnimSiteShape";
HAnimSite275.children[1] = Shape277;

HAnimJoint270.child[1] = HAnimSite275;

let HAnimJoint278 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint278.name = "l_metatarsophalangeal_5";
HAnimJoint278.DEF = "hanim_l_metatarsophalangeal_5";
HAnimJoint278.center = new SFVec3f(new float[0,1,0]);
HAnimJoint278.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint278.llimit = new MFFloat(new float[0,0,0]);
let Shape279 = browser.currentScene.createNode("Shape");
let LineSet280 = browser.currentScene.createNode("LineSet");
LineSet280.vertexCount = new MFInt32(new int[1]);
let Coordinate281 = browser.currentScene.createNode("Coordinate");
Coordinate281.point = new MFVec3f(new float[0,1,0]);
LineSet280.coord = Coordinate281;

//from l_metatarsophalangeal_5 to l_tarsal_proximal_interphalangeal_5
let ColorRGBA282 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA282.USE = "HAnimSegmentLineColorRGBA";
LineSet280.color = ColorRGBA282;

Shape279.geometry = LineSet280;

HAnimJoint278.child = new undefined();

HAnimJoint278.child[0] = Shape279;

let HAnimJoint283 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint283.name = "l_tarsal_proximal_interphalangeal_5";
HAnimJoint283.DEF = "hanim_l_tarsal_proximal_interphalangeal_5";
HAnimJoint283.center = new SFVec3f(new float[0,1,0]);
HAnimJoint283.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint283.llimit = new MFFloat(new float[0,0,0]);
let Shape284 = browser.currentScene.createNode("Shape");
let LineSet285 = browser.currentScene.createNode("LineSet");
LineSet285.vertexCount = new MFInt32(new int[1]);
let Coordinate286 = browser.currentScene.createNode("Coordinate");
Coordinate286.point = new MFVec3f(new float[0,1,0]);
LineSet285.coord = Coordinate286;

//from l_tarsal_proximal_interphalangeal_5 to l_tarsal_distal_interphalangeal_5
let ColorRGBA287 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA287.USE = "HAnimSegmentLineColorRGBA";
LineSet285.color = ColorRGBA287;

Shape284.geometry = LineSet285;

HAnimJoint283.child = new undefined();

HAnimJoint283.child[0] = Shape284;

let HAnimSite288 = browser.currentScene.createNode("HAnimSite");
HAnimSite288.name = "l_tarsal_distal_phalanx_5_tip";
HAnimSite288.DEF = "hanim_l_tarsal_distal_phalanx_5_tip";
HAnimSite288.translation = new SFVec3f(new float[0,1,0]);
let TouchSensor289 = browser.currentScene.createNode("TouchSensor");
TouchSensor289.description = "HAnimSite l_tarsal_distal_phalanx_5_tip";
HAnimSite288.children = new MFNode();

HAnimSite288.children[0] = TouchSensor289;

let Shape290 = browser.currentScene.createNode("Shape");
Shape290.USE = "HAnimSiteShape";
HAnimSite288.children[1] = Shape290;

HAnimJoint283.child[1] = HAnimSite288;

let HAnimJoint291 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint291.name = "l_tarsal_distal_interphalangeal_5";
HAnimJoint291.DEF = "hanim_l_tarsal_distal_interphalangeal_5";
HAnimJoint291.center = new SFVec3f(new float[0,1,0]);
HAnimJoint291.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint291.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint283.children[2] = HAnimJoint291;

HAnimJoint278.children[1] = HAnimJoint283;

HAnimJoint270.children[2] = HAnimJoint278;

HAnimJoint242.children[3] = HAnimJoint270;

HAnimJoint237.children[1] = HAnimJoint242;

HAnimJoint145.children[3] = HAnimJoint237;

HAnimJoint134.children[3] = HAnimJoint145;

HAnimJoint120.children[4] = HAnimJoint134;

HAnimJoint87.children[10] = HAnimJoint120;

let HAnimJoint292 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint292.name = "r_hip";
HAnimJoint292.DEF = "hanim_r_hip";
HAnimJoint292.center = new SFVec3f(new float[-0.095,0.9171,0.0029]);
HAnimJoint292.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint292.llimit = new MFFloat(new float[0,0,0]);
let Shape293 = browser.currentScene.createNode("Shape");
let LineSet294 = browser.currentScene.createNode("LineSet");
LineSet294.vertexCount = new MFInt32(new int[2]);
let Coordinate295 = browser.currentScene.createNode("Coordinate");
Coordinate295.point = new MFVec3f(new float[-0.095,0.9171,0.0029,-0.0867,0.4913,0.0318]);
LineSet294.coord = Coordinate295;

//from r_hip to r_knee
let ColorRGBA296 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA296.USE = "HAnimSegmentLineColorRGBA";
LineSet294.color = ColorRGBA296;

Shape293.geometry = LineSet294;

HAnimJoint292.child = new undefined();

HAnimJoint292.child[0] = Shape293;

let HAnimSite297 = browser.currentScene.createNode("HAnimSite");
HAnimSite297.name = "r_lateral_malleolus_pt";
HAnimSite297.DEF = "hanim_r_lateral_malleolus_pt";
HAnimSite297.translation = new SFVec3f(new float[-0.1006,0.0658,-0.1075]);
let TouchSensor298 = browser.currentScene.createNode("TouchSensor");
TouchSensor298.description = "HAnimSite r_lateral_malleolus_pt";
HAnimSite297.children = new MFNode();

HAnimSite297.children[0] = TouchSensor298;

let Shape299 = browser.currentScene.createNode("Shape");
Shape299.USE = "HAnimSiteShape";
HAnimSite297.children[1] = Shape299;

HAnimJoint292.child[1] = HAnimSite297;

let HAnimSite300 = browser.currentScene.createNode("HAnimSite");
HAnimSite300.name = "r_medial_malleolus_pt";
HAnimSite300.DEF = "hanim_r_medial_malleolus_pt";
HAnimSite300.translation = new SFVec3f(new float[-0.0591,0.076,-0.0928]);
let TouchSensor301 = browser.currentScene.createNode("TouchSensor");
TouchSensor301.description = "HAnimSite r_medial_malleolus_pt";
HAnimSite300.children = new MFNode();

HAnimSite300.children[0] = TouchSensor301;

let Shape302 = browser.currentScene.createNode("Shape");
Shape302.USE = "HAnimSiteShape";
HAnimSite300.children[1] = Shape302;

HAnimJoint292.child[2] = HAnimSite300;

let HAnimSite303 = browser.currentScene.createNode("HAnimSite");
HAnimSite303.name = "r_tibiale_pt";
HAnimSite303.DEF = "hanim_r_tibiale_pt";
HAnimSite303.translation = new SFVec3f(new float[0,1,0]);
let TouchSensor304 = browser.currentScene.createNode("TouchSensor");
TouchSensor304.description = "HAnimSite r_tibiale_pt";
HAnimSite303.children = new MFNode();

HAnimSite303.children[0] = TouchSensor304;

let Shape305 = browser.currentScene.createNode("Shape");
Shape305.USE = "HAnimSiteShape";
HAnimSite303.children[1] = Shape305;

HAnimJoint292.child[3] = HAnimSite303;

let HAnimJoint306 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint306.name = "r_knee";
HAnimJoint306.DEF = "hanim_r_knee";
HAnimJoint306.center = new SFVec3f(new float[-0.0867,0.4913,0.0318]);
HAnimJoint306.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint306.llimit = new MFFloat(new float[0,0,0]);
let Shape307 = browser.currentScene.createNode("Shape");
let LineSet308 = browser.currentScene.createNode("LineSet");
LineSet308.vertexCount = new MFInt32(new int[2]);
let Coordinate309 = browser.currentScene.createNode("Coordinate");
Coordinate309.point = new MFVec3f(new float[-0.0867,0.4913,0.0318,-0.0801,0.0712,-0.0766]);
LineSet308.coord = Coordinate309;

//from r_knee to r_talocrural
let ColorRGBA310 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA310.USE = "HAnimSegmentLineColorRGBA";
LineSet308.color = ColorRGBA310;

Shape307.geometry = LineSet308;

HAnimJoint306.child = new undefined();

HAnimJoint306.child[0] = Shape307;

let HAnimSite311 = browser.currentScene.createNode("HAnimSite");
HAnimSite311.name = "r_calcaneus_posterior_pt";
HAnimSite311.DEF = "hanim_r_calcaneus_posterior_pt";
HAnimSite311.translation = new SFVec3f(new float[-0.0692,0.0297,-0.1221]);
let TouchSensor312 = browser.currentScene.createNode("TouchSensor");
TouchSensor312.description = "HAnimSite r_calcaneus_posterior_pt";
HAnimSite311.children = new MFNode();

HAnimSite311.children[0] = TouchSensor312;

let Shape313 = browser.currentScene.createNode("Shape");
Shape313.USE = "HAnimSiteShape";
HAnimSite311.children[1] = Shape313;

HAnimJoint306.child[1] = HAnimSite311;

let HAnimSite314 = browser.currentScene.createNode("HAnimSite");
HAnimSite314.name = "r_sphyrion_pt";
HAnimSite314.DEF = "hanim_r_sphyrion_pt";
HAnimSite314.translation = new SFVec3f(new float[-0.0603,0.061,-0.1002]);
let TouchSensor315 = browser.currentScene.createNode("TouchSensor");
TouchSensor315.description = "HAnimSite r_sphyrion_pt";
HAnimSite314.children = new MFNode();

HAnimSite314.children[0] = TouchSensor315;

let Shape316 = browser.currentScene.createNode("Shape");
Shape316.USE = "HAnimSiteShape";
HAnimSite314.children[1] = Shape316;

HAnimJoint306.child[2] = HAnimSite314;

let HAnimJoint317 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint317.name = "r_talocrural";
HAnimJoint317.DEF = "hanim_r_talocrural";
HAnimJoint317.center = new SFVec3f(new float[-0.0801,0.0712,-0.0766]);
HAnimJoint317.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint317.llimit = new MFFloat(new float[0,0,0]);
let Shape318 = browser.currentScene.createNode("Shape");
let LineSet319 = browser.currentScene.createNode("LineSet");
LineSet319.vertexCount = new MFInt32(new int[2]);
let Coordinate320 = browser.currentScene.createNode("Coordinate");
Coordinate320.point = new MFVec3f(new float[-0.0801,0.0712,-0.0766,0,1,0]);
LineSet319.coord = Coordinate320;

//from r_talocrural to r_talocalcaneonavicular
let ColorRGBA321 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA321.USE = "HAnimSegmentLineColorRGBA";
LineSet319.color = ColorRGBA321;

Shape318.geometry = LineSet319;

HAnimJoint317.child = new undefined();

HAnimJoint317.child[0] = Shape318;

let Shape322 = browser.currentScene.createNode("Shape");
let LineSet323 = browser.currentScene.createNode("LineSet");
LineSet323.vertexCount = new MFInt32(new int[2]);
let Coordinate324 = browser.currentScene.createNode("Coordinate");
Coordinate324.point = new MFVec3f(new float[-0.0801,0.0712,-0.0766,0,1,0]);
LineSet323.coord = Coordinate324;

//from r_talocrural to r_calcaneocuboid
let ColorRGBA325 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA325.USE = "HAnimSegmentLineColorRGBA";
LineSet323.color = ColorRGBA325;

Shape322.geometry = LineSet323;

HAnimJoint317.child[1] = Shape322;

let HAnimJoint326 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint326.name = "r_talocalcaneonavicular";
HAnimJoint326.DEF = "hanim_r_talocalcaneonavicular";
HAnimJoint326.center = new SFVec3f(new float[0,1,0]);
HAnimJoint326.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint326.llimit = new MFFloat(new float[0,0,0]);
let Shape327 = browser.currentScene.createNode("Shape");
let LineSet328 = browser.currentScene.createNode("LineSet");
LineSet328.vertexCount = new MFInt32(new int[1]);
let Coordinate329 = browser.currentScene.createNode("Coordinate");
Coordinate329.point = new MFVec3f(new float[0,1,0]);
LineSet328.coord = Coordinate329;

//from r_talocalcaneonavicular to r_cuneonavicular_1
let ColorRGBA330 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA330.USE = "HAnimSegmentLineColorRGBA";
LineSet328.color = ColorRGBA330;

Shape327.geometry = LineSet328;

HAnimJoint326.child = new undefined();

HAnimJoint326.child[0] = Shape327;

let Shape331 = browser.currentScene.createNode("Shape");
let LineSet332 = browser.currentScene.createNode("LineSet");
LineSet332.vertexCount = new MFInt32(new int[1]);
let Coordinate333 = browser.currentScene.createNode("Coordinate");
Coordinate333.point = new MFVec3f(new float[0,1,0]);
LineSet332.coord = Coordinate333;

//from r_talocalcaneonavicular to r_cuneonavicular_2
let ColorRGBA334 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA334.USE = "HAnimSegmentLineColorRGBA";
LineSet332.color = ColorRGBA334;

Shape331.geometry = LineSet332;

HAnimJoint326.child[1] = Shape331;

let Shape335 = browser.currentScene.createNode("Shape");
let LineSet336 = browser.currentScene.createNode("LineSet");
LineSet336.vertexCount = new MFInt32(new int[1]);
let Coordinate337 = browser.currentScene.createNode("Coordinate");
Coordinate337.point = new MFVec3f(new float[0,1,0]);
LineSet336.coord = Coordinate337;

//from r_talocalcaneonavicular to r_cuneonavicular_3
let ColorRGBA338 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA338.USE = "HAnimSegmentLineColorRGBA";
LineSet336.color = ColorRGBA338;

Shape335.geometry = LineSet336;

HAnimJoint326.child[2] = Shape335;

let HAnimJoint339 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint339.name = "r_cuneonavicular_1";
HAnimJoint339.DEF = "hanim_r_cuneonavicular_1";
HAnimJoint339.center = new SFVec3f(new float[0,1,0]);
HAnimJoint339.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint339.llimit = new MFFloat(new float[0,0,0]);
let Shape340 = browser.currentScene.createNode("Shape");
let LineSet341 = browser.currentScene.createNode("LineSet");
LineSet341.vertexCount = new MFInt32(new int[1]);
let Coordinate342 = browser.currentScene.createNode("Coordinate");
Coordinate342.point = new MFVec3f(new float[0,1,0]);
LineSet341.coord = Coordinate342;

//from r_cuneonavicular_1 to r_tarsometatarsal_1
let ColorRGBA343 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA343.USE = "HAnimSegmentLineColorRGBA";
LineSet341.color = ColorRGBA343;

Shape340.geometry = LineSet341;

HAnimJoint339.child = new undefined();

HAnimJoint339.child[0] = Shape340;

let HAnimJoint344 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint344.name = "r_tarsometatarsal_1";
HAnimJoint344.DEF = "hanim_r_tarsometatarsal_1";
HAnimJoint344.center = new SFVec3f(new float[0,1,0]);
HAnimJoint344.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint344.llimit = new MFFloat(new float[0,0,0]);
let Shape345 = browser.currentScene.createNode("Shape");
let LineSet346 = browser.currentScene.createNode("LineSet");
LineSet346.vertexCount = new MFInt32(new int[1]);
let Coordinate347 = browser.currentScene.createNode("Coordinate");
Coordinate347.point = new MFVec3f(new float[0,1,0]);
LineSet346.coord = Coordinate347;

//from r_tarsometatarsal_1 to r_metatarsophalangeal_1
let ColorRGBA348 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA348.USE = "HAnimSegmentLineColorRGBA";
LineSet346.color = ColorRGBA348;

Shape345.geometry = LineSet346;

HAnimJoint344.child = new undefined();

HAnimJoint344.child[0] = Shape345;

let HAnimSite349 = browser.currentScene.createNode("HAnimSite");
HAnimSite349.name = "r_metatarsal_phalanx_1_pt";
HAnimSite349.DEF = "hanim_r_metatarsal_phalanx_1_pt";
HAnimSite349.translation = new SFVec3f(new float[0,1,0]);
let TouchSensor350 = browser.currentScene.createNode("TouchSensor");
TouchSensor350.description = "HAnimSite r_metatarsal_phalanx_1_pt";
HAnimSite349.children = new MFNode();

HAnimSite349.children[0] = TouchSensor350;

let Shape351 = browser.currentScene.createNode("Shape");
Shape351.USE = "HAnimSiteShape";
HAnimSite349.children[1] = Shape351;

HAnimJoint344.child[1] = HAnimSite349;

let HAnimJoint352 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint352.name = "r_metatarsophalangeal_1";
HAnimJoint352.DEF = "hanim_r_metatarsophalangeal_1";
HAnimJoint352.center = new SFVec3f(new float[0,1,0]);
HAnimJoint352.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint352.llimit = new MFFloat(new float[0,0,0]);
let Shape353 = browser.currentScene.createNode("Shape");
let LineSet354 = browser.currentScene.createNode("LineSet");
LineSet354.vertexCount = new MFInt32(new int[1]);
let Coordinate355 = browser.currentScene.createNode("Coordinate");
Coordinate355.point = new MFVec3f(new float[0,1,0]);
LineSet354.coord = Coordinate355;

//from r_metatarsophalangeal_1 to r_tarsal_interphalangeal_1
let ColorRGBA356 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA356.USE = "HAnimSegmentLineColorRGBA";
LineSet354.color = ColorRGBA356;

Shape353.geometry = LineSet354;

HAnimJoint352.child = new undefined();

HAnimJoint352.child[0] = Shape353;

let HAnimSite357 = browser.currentScene.createNode("HAnimSite");
HAnimSite357.name = "r_tarsal_distal_phalanx_1_tip";
HAnimSite357.DEF = "hanim_r_tarsal_distal_phalanx_1_tip";
HAnimSite357.translation = new SFVec3f(new float[0,1,0]);
let TouchSensor358 = browser.currentScene.createNode("TouchSensor");
TouchSensor358.description = "HAnimSite r_tarsal_distal_phalanx_1_tip";
HAnimSite357.children = new MFNode();

HAnimSite357.children[0] = TouchSensor358;

let Shape359 = browser.currentScene.createNode("Shape");
Shape359.USE = "HAnimSiteShape";
HAnimSite357.children[1] = Shape359;

HAnimJoint352.child[1] = HAnimSite357;

let HAnimJoint360 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint360.name = "r_tarsal_interphalangeal_1";
HAnimJoint360.DEF = "hanim_r_tarsal_interphalangeal_1";
HAnimJoint360.center = new SFVec3f(new float[0,1,0]);
HAnimJoint360.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint360.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint352.children[2] = HAnimJoint360;

HAnimJoint344.children[2] = HAnimJoint352;

HAnimJoint339.children[1] = HAnimJoint344;

HAnimJoint326.children[3] = HAnimJoint339;

let HAnimJoint361 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint361.name = "r_cuneonavicular_2";
HAnimJoint361.DEF = "hanim_r_cuneonavicular_2";
HAnimJoint361.center = new SFVec3f(new float[0,1,0]);
HAnimJoint361.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint361.llimit = new MFFloat(new float[0,0,0]);
let Shape362 = browser.currentScene.createNode("Shape");
let LineSet363 = browser.currentScene.createNode("LineSet");
LineSet363.vertexCount = new MFInt32(new int[1]);
let Coordinate364 = browser.currentScene.createNode("Coordinate");
Coordinate364.point = new MFVec3f(new float[0,1,0]);
LineSet363.coord = Coordinate364;

//from r_cuneonavicular_2 to r_tarsometatarsal_2
let ColorRGBA365 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA365.USE = "HAnimSegmentLineColorRGBA";
LineSet363.color = ColorRGBA365;

Shape362.geometry = LineSet363;

HAnimJoint361.child = new undefined();

HAnimJoint361.child[0] = Shape362;

let HAnimJoint366 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint366.name = "r_tarsometatarsal_2";
HAnimJoint366.DEF = "hanim_r_tarsometatarsal_2";
HAnimJoint366.center = new SFVec3f(new float[0,1,0]);
HAnimJoint366.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint366.llimit = new MFFloat(new float[0,0,0]);
let Shape367 = browser.currentScene.createNode("Shape");
let LineSet368 = browser.currentScene.createNode("LineSet");
LineSet368.vertexCount = new MFInt32(new int[1]);
let Coordinate369 = browser.currentScene.createNode("Coordinate");
Coordinate369.point = new MFVec3f(new float[0,1,0]);
LineSet368.coord = Coordinate369;

//from r_tarsometatarsal_2 to r_metatarsophalangeal_2
let ColorRGBA370 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA370.USE = "HAnimSegmentLineColorRGBA";
LineSet368.color = ColorRGBA370;

Shape367.geometry = LineSet368;

HAnimJoint366.child = new undefined();

HAnimJoint366.child[0] = Shape367;

let HAnimJoint371 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint371.name = "r_metatarsophalangeal_2";
HAnimJoint371.DEF = "hanim_r_metatarsophalangeal_2";
HAnimJoint371.center = new SFVec3f(new float[0,1,0]);
HAnimJoint371.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint371.llimit = new MFFloat(new float[0,0,0]);
let Shape372 = browser.currentScene.createNode("Shape");
let LineSet373 = browser.currentScene.createNode("LineSet");
LineSet373.vertexCount = new MFInt32(new int[1]);
let Coordinate374 = browser.currentScene.createNode("Coordinate");
Coordinate374.point = new MFVec3f(new float[0,1,0]);
LineSet373.coord = Coordinate374;

//from r_metatarsophalangeal_2 to r_tarsal_proximal_interphalangeal_2
let ColorRGBA375 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA375.USE = "HAnimSegmentLineColorRGBA";
LineSet373.color = ColorRGBA375;

Shape372.geometry = LineSet373;

HAnimJoint371.child = new undefined();

HAnimJoint371.child[0] = Shape372;

let HAnimJoint376 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint376.name = "r_tarsal_proximal_interphalangeal_2";
HAnimJoint376.DEF = "hanim_r_tarsal_proximal_interphalangeal_2";
HAnimJoint376.center = new SFVec3f(new float[0,1,0]);
HAnimJoint376.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint376.llimit = new MFFloat(new float[0,0,0]);
let Shape377 = browser.currentScene.createNode("Shape");
let LineSet378 = browser.currentScene.createNode("LineSet");
LineSet378.vertexCount = new MFInt32(new int[1]);
let Coordinate379 = browser.currentScene.createNode("Coordinate");
Coordinate379.point = new MFVec3f(new float[0,1,0]);
LineSet378.coord = Coordinate379;

//from r_tarsal_proximal_interphalangeal_2 to r_tarsal_distal_interphalangeal_2
let ColorRGBA380 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA380.USE = "HAnimSegmentLineColorRGBA";
LineSet378.color = ColorRGBA380;

Shape377.geometry = LineSet378;

HAnimJoint376.child = new undefined();

HAnimJoint376.child[0] = Shape377;

let HAnimSite381 = browser.currentScene.createNode("HAnimSite");
HAnimSite381.name = "r_tarsal_distal_phalanx_2_tip";
HAnimSite381.DEF = "hanim_r_tarsal_distal_phalanx_2_tip";
HAnimSite381.translation = new SFVec3f(new float[-0.0883,0.0134,0.1383]);
let TouchSensor382 = browser.currentScene.createNode("TouchSensor");
TouchSensor382.description = "HAnimSite r_tarsal_distal_phalanx_2_tip";
HAnimSite381.children = new MFNode();

HAnimSite381.children[0] = TouchSensor382;

let Shape383 = browser.currentScene.createNode("Shape");
Shape383.USE = "HAnimSiteShape";
HAnimSite381.children[1] = Shape383;

HAnimJoint376.child[1] = HAnimSite381;

let HAnimJoint384 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint384.name = "r_tarsal_distal_interphalangeal_2";
HAnimJoint384.DEF = "hanim_r_tarsal_distal_interphalangeal_2";
HAnimJoint384.center = new SFVec3f(new float[0,1,0]);
HAnimJoint384.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint384.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint376.children[2] = HAnimJoint384;

HAnimJoint371.children[1] = HAnimJoint376;

HAnimJoint366.children[1] = HAnimJoint371;

HAnimJoint361.children[1] = HAnimJoint366;

HAnimJoint326.children[4] = HAnimJoint361;

let HAnimJoint385 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint385.name = "r_cuneonavicular_3";
HAnimJoint385.DEF = "hanim_r_cuneonavicular_3";
HAnimJoint385.center = new SFVec3f(new float[0,1,0]);
HAnimJoint385.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint385.llimit = new MFFloat(new float[0,0,0]);
let Shape386 = browser.currentScene.createNode("Shape");
let LineSet387 = browser.currentScene.createNode("LineSet");
LineSet387.vertexCount = new MFInt32(new int[1]);
let Coordinate388 = browser.currentScene.createNode("Coordinate");
Coordinate388.point = new MFVec3f(new float[0,1,0]);
LineSet387.coord = Coordinate388;

//from r_cuneonavicular_3 to r_tarsometatarsal_3
let ColorRGBA389 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA389.USE = "HAnimSegmentLineColorRGBA";
LineSet387.color = ColorRGBA389;

Shape386.geometry = LineSet387;

HAnimJoint385.child = new undefined();

HAnimJoint385.child[0] = Shape386;

let HAnimJoint390 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint390.name = "r_tarsometatarsal_3";
HAnimJoint390.DEF = "hanim_r_tarsometatarsal_3";
HAnimJoint390.center = new SFVec3f(new float[0,1,0]);
HAnimJoint390.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint390.llimit = new MFFloat(new float[0,0,0]);
let Shape391 = browser.currentScene.createNode("Shape");
let LineSet392 = browser.currentScene.createNode("LineSet");
LineSet392.vertexCount = new MFInt32(new int[1]);
let Coordinate393 = browser.currentScene.createNode("Coordinate");
Coordinate393.point = new MFVec3f(new float[0,1,0]);
LineSet392.coord = Coordinate393;

//from r_tarsometatarsal_3 to r_metatarsophalangeal_3
let ColorRGBA394 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA394.USE = "HAnimSegmentLineColorRGBA";
LineSet392.color = ColorRGBA394;

Shape391.geometry = LineSet392;

HAnimJoint390.child = new undefined();

HAnimJoint390.child[0] = Shape391;

let HAnimJoint395 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint395.name = "r_metatarsophalangeal_3";
HAnimJoint395.DEF = "hanim_r_metatarsophalangeal_3";
HAnimJoint395.center = new SFVec3f(new float[0,1,0]);
HAnimJoint395.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint395.llimit = new MFFloat(new float[0,0,0]);
let Shape396 = browser.currentScene.createNode("Shape");
let LineSet397 = browser.currentScene.createNode("LineSet");
LineSet397.vertexCount = new MFInt32(new int[1]);
let Coordinate398 = browser.currentScene.createNode("Coordinate");
Coordinate398.point = new MFVec3f(new float[0,1,0]);
LineSet397.coord = Coordinate398;

//from r_metatarsophalangeal_3 to r_tarsal_proximal_interphalangeal_3
let ColorRGBA399 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA399.USE = "HAnimSegmentLineColorRGBA";
LineSet397.color = ColorRGBA399;

Shape396.geometry = LineSet397;

HAnimJoint395.child = new undefined();

HAnimJoint395.child[0] = Shape396;

let HAnimJoint400 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint400.name = "r_tarsal_proximal_interphalangeal_3";
HAnimJoint400.DEF = "hanim_r_tarsal_proximal_interphalangeal_3";
HAnimJoint400.center = new SFVec3f(new float[0,1,0]);
HAnimJoint400.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint400.llimit = new MFFloat(new float[0,0,0]);
let Shape401 = browser.currentScene.createNode("Shape");
let LineSet402 = browser.currentScene.createNode("LineSet");
LineSet402.vertexCount = new MFInt32(new int[1]);
let Coordinate403 = browser.currentScene.createNode("Coordinate");
Coordinate403.point = new MFVec3f(new float[0,1,0]);
LineSet402.coord = Coordinate403;

//from r_tarsal_proximal_interphalangeal_3 to r_tarsal_distal_interphalangeal_3
let ColorRGBA404 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA404.USE = "HAnimSegmentLineColorRGBA";
LineSet402.color = ColorRGBA404;

Shape401.geometry = LineSet402;

HAnimJoint400.child = new undefined();

HAnimJoint400.child[0] = Shape401;

let HAnimSite405 = browser.currentScene.createNode("HAnimSite");
HAnimSite405.name = "r_tarsal_distal_phalanx_3_tip";
HAnimSite405.DEF = "hanim_r_tarsal_distal_phalanx_3_tip";
HAnimSite405.translation = new SFVec3f(new float[0,1,0]);
let TouchSensor406 = browser.currentScene.createNode("TouchSensor");
TouchSensor406.description = "HAnimSite r_tarsal_distal_phalanx_3_tip";
HAnimSite405.children = new MFNode();

HAnimSite405.children[0] = TouchSensor406;

let Shape407 = browser.currentScene.createNode("Shape");
Shape407.USE = "HAnimSiteShape";
HAnimSite405.children[1] = Shape407;

HAnimJoint400.child[1] = HAnimSite405;

let HAnimJoint408 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint408.name = "r_tarsal_distal_interphalangeal_3";
HAnimJoint408.DEF = "hanim_r_tarsal_distal_interphalangeal_3";
HAnimJoint408.center = new SFVec3f(new float[0,1,0]);
HAnimJoint408.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint408.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint400.children[2] = HAnimJoint408;

HAnimJoint395.children[1] = HAnimJoint400;

HAnimJoint390.children[1] = HAnimJoint395;

HAnimJoint385.children[1] = HAnimJoint390;

HAnimJoint326.children[5] = HAnimJoint385;

HAnimJoint317.children[2] = HAnimJoint326;

let HAnimJoint409 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint409.name = "r_calcaneocuboid";
HAnimJoint409.DEF = "hanim_r_calcaneocuboid";
HAnimJoint409.center = new SFVec3f(new float[0,1,0]);
HAnimJoint409.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint409.llimit = new MFFloat(new float[0,0,0]);
let Shape410 = browser.currentScene.createNode("Shape");
let LineSet411 = browser.currentScene.createNode("LineSet");
LineSet411.vertexCount = new MFInt32(new int[1]);
let Coordinate412 = browser.currentScene.createNode("Coordinate");
Coordinate412.point = new MFVec3f(new float[0,1,0]);
LineSet411.coord = Coordinate412;

//from r_calcaneocuboid to r_transversetarsal
let ColorRGBA413 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA413.USE = "HAnimSegmentLineColorRGBA";
LineSet411.color = ColorRGBA413;

Shape410.geometry = LineSet411;

HAnimJoint409.child = new undefined();

HAnimJoint409.child[0] = Shape410;

let HAnimJoint414 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint414.name = "r_transversetarsal";
HAnimJoint414.DEF = "hanim_r_transversetarsal";
HAnimJoint414.center = new SFVec3f(new float[0,1,0]);
HAnimJoint414.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint414.llimit = new MFFloat(new float[0,0,0]);
let Shape415 = browser.currentScene.createNode("Shape");
let LineSet416 = browser.currentScene.createNode("LineSet");
LineSet416.vertexCount = new MFInt32(new int[1]);
let Coordinate417 = browser.currentScene.createNode("Coordinate");
Coordinate417.point = new MFVec3f(new float[0,1,0]);
LineSet416.coord = Coordinate417;

//from r_transversetarsal to r_tarsometatarsal_4
let ColorRGBA418 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA418.USE = "HAnimSegmentLineColorRGBA";
LineSet416.color = ColorRGBA418;

Shape415.geometry = LineSet416;

HAnimJoint414.child = new undefined();

HAnimJoint414.child[0] = Shape415;

let Shape419 = browser.currentScene.createNode("Shape");
let LineSet420 = browser.currentScene.createNode("LineSet");
LineSet420.vertexCount = new MFInt32(new int[1]);
let Coordinate421 = browser.currentScene.createNode("Coordinate");
Coordinate421.point = new MFVec3f(new float[0,1,0]);
LineSet420.coord = Coordinate421;

//from r_transversetarsal to r_tarsometatarsal_5
let ColorRGBA422 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA422.USE = "HAnimSegmentLineColorRGBA";
LineSet420.color = ColorRGBA422;

Shape419.geometry = LineSet420;

HAnimJoint414.child[1] = Shape419;

let HAnimJoint423 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint423.name = "r_tarsometatarsal_4";
HAnimJoint423.DEF = "hanim_r_tarsometatarsal_4";
HAnimJoint423.center = new SFVec3f(new float[0,1,0]);
HAnimJoint423.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint423.llimit = new MFFloat(new float[0,0,0]);
let Shape424 = browser.currentScene.createNode("Shape");
let LineSet425 = browser.currentScene.createNode("LineSet");
LineSet425.vertexCount = new MFInt32(new int[1]);
let Coordinate426 = browser.currentScene.createNode("Coordinate");
Coordinate426.point = new MFVec3f(new float[0,1,0]);
LineSet425.coord = Coordinate426;

//from r_tarsometatarsal_4 to r_metatarsophalangeal_4
let ColorRGBA427 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA427.USE = "HAnimSegmentLineColorRGBA";
LineSet425.color = ColorRGBA427;

Shape424.geometry = LineSet425;

HAnimJoint423.child = new undefined();

HAnimJoint423.child[0] = Shape424;

let HAnimJoint428 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint428.name = "r_metatarsophalangeal_4";
HAnimJoint428.DEF = "hanim_r_metatarsophalangeal_4";
HAnimJoint428.center = new SFVec3f(new float[0,1,0]);
HAnimJoint428.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint428.llimit = new MFFloat(new float[0,0,0]);
let Shape429 = browser.currentScene.createNode("Shape");
let LineSet430 = browser.currentScene.createNode("LineSet");
LineSet430.vertexCount = new MFInt32(new int[1]);
let Coordinate431 = browser.currentScene.createNode("Coordinate");
Coordinate431.point = new MFVec3f(new float[0,1,0]);
LineSet430.coord = Coordinate431;

//from r_metatarsophalangeal_4 to r_tarsal_proximal_interphalangeal_4
let ColorRGBA432 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA432.USE = "HAnimSegmentLineColorRGBA";
LineSet430.color = ColorRGBA432;

Shape429.geometry = LineSet430;

HAnimJoint428.child = new undefined();

HAnimJoint428.child[0] = Shape429;

let HAnimJoint433 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint433.name = "r_tarsal_proximal_interphalangeal_4";
HAnimJoint433.DEF = "hanim_r_tarsal_proximal_interphalangeal_4";
HAnimJoint433.center = new SFVec3f(new float[0,1,0]);
HAnimJoint433.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint433.llimit = new MFFloat(new float[0,0,0]);
let Shape434 = browser.currentScene.createNode("Shape");
let LineSet435 = browser.currentScene.createNode("LineSet");
LineSet435.vertexCount = new MFInt32(new int[1]);
let Coordinate436 = browser.currentScene.createNode("Coordinate");
Coordinate436.point = new MFVec3f(new float[0,1,0]);
LineSet435.coord = Coordinate436;

//from r_tarsal_proximal_interphalangeal_4 to r_tarsal_distal_interphalangeal_4
let ColorRGBA437 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA437.USE = "HAnimSegmentLineColorRGBA";
LineSet435.color = ColorRGBA437;

Shape434.geometry = LineSet435;

HAnimJoint433.child = new undefined();

HAnimJoint433.child[0] = Shape434;

let HAnimSite438 = browser.currentScene.createNode("HAnimSite");
HAnimSite438.name = "r_tarsal_distal_phalanx_4_tip";
HAnimSite438.DEF = "hanim_r_tarsal_distal_phalanx_4_tip";
HAnimSite438.translation = new SFVec3f(new float[0,1,0]);
let TouchSensor439 = browser.currentScene.createNode("TouchSensor");
TouchSensor439.description = "HAnimSite r_tarsal_distal_phalanx_4_tip";
HAnimSite438.children = new MFNode();

HAnimSite438.children[0] = TouchSensor439;

let Shape440 = browser.currentScene.createNode("Shape");
Shape440.USE = "HAnimSiteShape";
HAnimSite438.children[1] = Shape440;

HAnimJoint433.child[1] = HAnimSite438;

let HAnimJoint441 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint441.name = "r_tarsal_distal_interphalangeal_4";
HAnimJoint441.DEF = "hanim_r_tarsal_distal_interphalangeal_4";
HAnimJoint441.center = new SFVec3f(new float[0,1,0]);
HAnimJoint441.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint441.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint433.children[2] = HAnimJoint441;

HAnimJoint428.children[1] = HAnimJoint433;

HAnimJoint423.children[1] = HAnimJoint428;

HAnimJoint414.children[2] = HAnimJoint423;

let HAnimJoint442 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint442.name = "r_tarsometatarsal_5";
HAnimJoint442.DEF = "hanim_r_tarsometatarsal_5";
HAnimJoint442.center = new SFVec3f(new float[0,1,0]);
HAnimJoint442.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint442.llimit = new MFFloat(new float[0,0,0]);
let Shape443 = browser.currentScene.createNode("Shape");
let LineSet444 = browser.currentScene.createNode("LineSet");
LineSet444.vertexCount = new MFInt32(new int[1]);
let Coordinate445 = browser.currentScene.createNode("Coordinate");
Coordinate445.point = new MFVec3f(new float[0,1,0]);
LineSet444.coord = Coordinate445;

//from r_tarsometatarsal_5 to r_metatarsophalangeal_5
let ColorRGBA446 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA446.USE = "HAnimSegmentLineColorRGBA";
LineSet444.color = ColorRGBA446;

Shape443.geometry = LineSet444;

HAnimJoint442.child = new undefined();

HAnimJoint442.child[0] = Shape443;

let HAnimSite447 = browser.currentScene.createNode("HAnimSite");
HAnimSite447.name = "r_metatarsal_phalanx_5_pt";
HAnimSite447.DEF = "hanim_r_metatarsal_phalanx_5_pt";
HAnimSite447.translation = new SFVec3f(new float[0,1,0]);
let TouchSensor448 = browser.currentScene.createNode("TouchSensor");
TouchSensor448.description = "HAnimSite r_metatarsal_phalanx_5_pt";
HAnimSite447.children = new MFNode();

HAnimSite447.children[0] = TouchSensor448;

let Shape449 = browser.currentScene.createNode("Shape");
Shape449.USE = "HAnimSiteShape";
HAnimSite447.children[1] = Shape449;

HAnimJoint442.child[1] = HAnimSite447;

let HAnimJoint450 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint450.name = "r_metatarsophalangeal_5";
HAnimJoint450.DEF = "hanim_r_metatarsophalangeal_5";
HAnimJoint450.center = new SFVec3f(new float[0,1,0]);
HAnimJoint450.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint450.llimit = new MFFloat(new float[0,0,0]);
let Shape451 = browser.currentScene.createNode("Shape");
let LineSet452 = browser.currentScene.createNode("LineSet");
LineSet452.vertexCount = new MFInt32(new int[1]);
let Coordinate453 = browser.currentScene.createNode("Coordinate");
Coordinate453.point = new MFVec3f(new float[0,1,0]);
LineSet452.coord = Coordinate453;

//from r_metatarsophalangeal_5 to r_tarsal_proximal_interphalangeal_5
let ColorRGBA454 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA454.USE = "HAnimSegmentLineColorRGBA";
LineSet452.color = ColorRGBA454;

Shape451.geometry = LineSet452;

HAnimJoint450.child = new undefined();

HAnimJoint450.child[0] = Shape451;

let HAnimJoint455 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint455.name = "r_tarsal_proximal_interphalangeal_5";
HAnimJoint455.DEF = "hanim_r_tarsal_proximal_interphalangeal_5";
HAnimJoint455.center = new SFVec3f(new float[0,1,0]);
HAnimJoint455.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint455.llimit = new MFFloat(new float[0,0,0]);
let Shape456 = browser.currentScene.createNode("Shape");
let LineSet457 = browser.currentScene.createNode("LineSet");
LineSet457.vertexCount = new MFInt32(new int[1]);
let Coordinate458 = browser.currentScene.createNode("Coordinate");
Coordinate458.point = new MFVec3f(new float[0,1,0]);
LineSet457.coord = Coordinate458;

//from r_tarsal_proximal_interphalangeal_5 to r_tarsal_distal_interphalangeal_5
let ColorRGBA459 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA459.USE = "HAnimSegmentLineColorRGBA";
LineSet457.color = ColorRGBA459;

Shape456.geometry = LineSet457;

HAnimJoint455.child = new undefined();

HAnimJoint455.child[0] = Shape456;

let HAnimSite460 = browser.currentScene.createNode("HAnimSite");
HAnimSite460.name = "r_tarsal_distal_phalanx_5_tip";
HAnimSite460.DEF = "hanim_r_tarsal_distal_phalanx_5_tip";
HAnimSite460.translation = new SFVec3f(new float[0,1,0]);
let TouchSensor461 = browser.currentScene.createNode("TouchSensor");
TouchSensor461.description = "HAnimSite r_tarsal_distal_phalanx_5_tip";
HAnimSite460.children = new MFNode();

HAnimSite460.children[0] = TouchSensor461;

let Shape462 = browser.currentScene.createNode("Shape");
Shape462.USE = "HAnimSiteShape";
HAnimSite460.children[1] = Shape462;

HAnimJoint455.child[1] = HAnimSite460;

let HAnimJoint463 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint463.name = "r_tarsal_distal_interphalangeal_5";
HAnimJoint463.DEF = "hanim_r_tarsal_distal_interphalangeal_5";
HAnimJoint463.center = new SFVec3f(new float[0,1,0]);
HAnimJoint463.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint463.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint455.children[2] = HAnimJoint463;

HAnimJoint450.children[1] = HAnimJoint455;

HAnimJoint442.children[2] = HAnimJoint450;

HAnimJoint414.children[3] = HAnimJoint442;

HAnimJoint409.children[1] = HAnimJoint414;

HAnimJoint317.children[3] = HAnimJoint409;

HAnimJoint306.children[3] = HAnimJoint317;

HAnimJoint292.children[4] = HAnimJoint306;

HAnimJoint87.children[11] = HAnimJoint292;

HAnimJoint39.children[15] = HAnimJoint87;

let HAnimJoint464 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint464.name = "vl5";
HAnimJoint464.DEF = "hanim_vl5";
HAnimJoint464.center = new SFVec3f(new float[0.0028,1.0568,-0.0776]);
HAnimJoint464.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint464.llimit = new MFFloat(new float[0,0,0]);
let Shape465 = browser.currentScene.createNode("Shape");
let LineSet466 = browser.currentScene.createNode("LineSet");
LineSet466.vertexCount = new MFInt32(new int[2]);
let Coordinate467 = browser.currentScene.createNode("Coordinate");
Coordinate467.point = new MFVec3f(new float[0.0028,1.0568,-0.0776,0.0035,1.0925,-0.0787]);
LineSet466.coord = Coordinate467;

//from vl5 to vl4
let ColorRGBA468 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA468.USE = "HAnimSegmentLineColorRGBA";
LineSet466.color = ColorRGBA468;

Shape465.geometry = LineSet466;

HAnimJoint464.child = new undefined();

HAnimJoint464.child[0] = Shape465;

let HAnimJoint469 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint469.name = "vl4";
HAnimJoint469.DEF = "hanim_vl4";
HAnimJoint469.center = new SFVec3f(new float[0.0035,1.0925,-0.0787]);
HAnimJoint469.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint469.llimit = new MFFloat(new float[0,0,0]);
let Shape470 = browser.currentScene.createNode("Shape");
let LineSet471 = browser.currentScene.createNode("LineSet");
LineSet471.vertexCount = new MFInt32(new int[2]);
let Coordinate472 = browser.currentScene.createNode("Coordinate");
Coordinate472.point = new MFVec3f(new float[0.0035,1.0925,-0.0787,0.0041,1.1276,-0.0796]);
LineSet471.coord = Coordinate472;

//from vl4 to vl3
let ColorRGBA473 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA473.USE = "HAnimSegmentLineColorRGBA";
LineSet471.color = ColorRGBA473;

Shape470.geometry = LineSet471;

HAnimJoint469.child = new undefined();

HAnimJoint469.child[0] = Shape470;

let HAnimJoint474 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint474.name = "vl3";
HAnimJoint474.DEF = "hanim_vl3";
HAnimJoint474.center = new SFVec3f(new float[0.0041,1.1276,-0.0796]);
HAnimJoint474.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint474.llimit = new MFFloat(new float[0,0,0]);
let Shape475 = browser.currentScene.createNode("Shape");
let LineSet476 = browser.currentScene.createNode("LineSet");
LineSet476.vertexCount = new MFInt32(new int[2]);
let Coordinate477 = browser.currentScene.createNode("Coordinate");
Coordinate477.point = new MFVec3f(new float[0.0041,1.1276,-0.0796,0.0045,1.1546,-0.08]);
LineSet476.coord = Coordinate477;

//from vl3 to vl2
let ColorRGBA478 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA478.USE = "HAnimSegmentLineColorRGBA";
LineSet476.color = ColorRGBA478;

Shape475.geometry = LineSet476;

HAnimJoint474.child = new undefined();

HAnimJoint474.child[0] = Shape475;

let HAnimSite479 = browser.currentScene.createNode("HAnimSite");
HAnimSite479.name = "l_rib10_pt";
HAnimSite479.DEF = "hanim_l_rib10_pt";
HAnimSite479.translation = new SFVec3f(new float[0.0871,1.1925,0.0992]);
let TouchSensor480 = browser.currentScene.createNode("TouchSensor");
TouchSensor480.description = "HAnimSite l_rib10_pt";
HAnimSite479.children = new MFNode();

HAnimSite479.children[0] = TouchSensor480;

let Shape481 = browser.currentScene.createNode("Shape");
Shape481.USE = "HAnimSiteShape";
HAnimSite479.children[1] = Shape481;

HAnimJoint474.child[1] = HAnimSite479;

let HAnimSite482 = browser.currentScene.createNode("HAnimSite");
HAnimSite482.name = "r_rib10_pt";
HAnimSite482.DEF = "hanim_r_rib10_pt";
HAnimSite482.translation = new SFVec3f(new float[-0.0711,1.1941,0.1016]);
let TouchSensor483 = browser.currentScene.createNode("TouchSensor");
TouchSensor483.description = "HAnimSite r_rib10_pt";
HAnimSite482.children = new MFNode();

HAnimSite482.children[0] = TouchSensor483;

let Shape484 = browser.currentScene.createNode("Shape");
Shape484.USE = "HAnimSiteShape";
HAnimSite482.children[1] = Shape484;

HAnimJoint474.child[2] = HAnimSite482;

let HAnimSite485 = browser.currentScene.createNode("HAnimSite");
HAnimSite485.name = "spine_2_middle_back_pt";
HAnimSite485.DEF = "hanim_spine_2_middle_back_pt";
HAnimSite485.translation = new SFVec3f(new float[0,1,0]);
let TouchSensor486 = browser.currentScene.createNode("TouchSensor");
TouchSensor486.description = "HAnimSite spine_2_middle_back_pt";
HAnimSite485.children = new MFNode();

HAnimSite485.children[0] = TouchSensor486;

let Shape487 = browser.currentScene.createNode("Shape");
Shape487.USE = "HAnimSiteShape";
HAnimSite485.children[1] = Shape487;

HAnimJoint474.child[3] = HAnimSite485;

let HAnimJoint488 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint488.name = "vl2";
HAnimJoint488.DEF = "hanim_vl2";
HAnimJoint488.center = new SFVec3f(new float[0.0045,1.1546,-0.08]);
HAnimJoint488.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint488.llimit = new MFFloat(new float[0,0,0]);
let Shape489 = browser.currentScene.createNode("Shape");
let LineSet490 = browser.currentScene.createNode("LineSet");
LineSet490.vertexCount = new MFInt32(new int[2]);
let Coordinate491 = browser.currentScene.createNode("Coordinate");
Coordinate491.point = new MFVec3f(new float[0.0045,1.1546,-0.08,0.0048,1.1912,-0.0805]);
LineSet490.coord = Coordinate491;

//from vl2 to vl1
let ColorRGBA492 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA492.USE = "HAnimSegmentLineColorRGBA";
LineSet490.color = ColorRGBA492;

Shape489.geometry = LineSet490;

HAnimJoint488.child = new undefined();

HAnimJoint488.child[0] = Shape489;

let HAnimJoint493 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint493.name = "vl1";
HAnimJoint493.DEF = "hanim_vl1";
HAnimJoint493.center = new SFVec3f(new float[0.0048,1.1912,-0.0805]);
HAnimJoint493.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint493.llimit = new MFFloat(new float[0,0,0]);
let Shape494 = browser.currentScene.createNode("Shape");
let LineSet495 = browser.currentScene.createNode("LineSet");
LineSet495.vertexCount = new MFInt32(new int[2]);
let Coordinate496 = browser.currentScene.createNode("Coordinate");
Coordinate496.point = new MFVec3f(new float[0.0048,1.1912,-0.0805,0.0051,1.2278,-0.0808]);
LineSet495.coord = Coordinate496;

//from vl1 to vt12
let ColorRGBA497 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA497.USE = "HAnimSegmentLineColorRGBA";
LineSet495.color = ColorRGBA497;

Shape494.geometry = LineSet495;

HAnimJoint493.child = new undefined();

HAnimJoint493.child[0] = Shape494;

let HAnimJoint498 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint498.name = "vt12";
HAnimJoint498.DEF = "hanim_vt12";
HAnimJoint498.center = new SFVec3f(new float[0.0051,1.2278,-0.0808]);
HAnimJoint498.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint498.llimit = new MFFloat(new float[0,0,0]);
let Shape499 = browser.currentScene.createNode("Shape");
let LineSet500 = browser.currentScene.createNode("LineSet");
LineSet500.vertexCount = new MFInt32(new int[2]);
let Coordinate501 = browser.currentScene.createNode("Coordinate");
Coordinate501.point = new MFVec3f(new float[0.0051,1.2278,-0.0808,0.0053,1.2679,-0.081]);
LineSet500.coord = Coordinate501;

//from vt12 to vt11
let ColorRGBA502 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA502.USE = "HAnimSegmentLineColorRGBA";
LineSet500.color = ColorRGBA502;

Shape499.geometry = LineSet500;

HAnimJoint498.child = new undefined();

HAnimJoint498.child[0] = Shape499;

let HAnimJoint503 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint503.name = "vt11";
HAnimJoint503.DEF = "hanim_vt11";
HAnimJoint503.center = new SFVec3f(new float[0.0053,1.2679,-0.081]);
HAnimJoint503.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint503.llimit = new MFFloat(new float[0,0,0]);
let Shape504 = browser.currentScene.createNode("Shape");
let LineSet505 = browser.currentScene.createNode("LineSet");
LineSet505.vertexCount = new MFInt32(new int[2]);
let Coordinate506 = browser.currentScene.createNode("Coordinate");
Coordinate506.point = new MFVec3f(new float[0.0053,1.2679,-0.081,0.0056,1.2848,-0.0822]);
LineSet505.coord = Coordinate506;

//from vt11 to vt10
let ColorRGBA507 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA507.USE = "HAnimSegmentLineColorRGBA";
LineSet505.color = ColorRGBA507;

Shape504.geometry = LineSet505;

HAnimJoint503.child = new undefined();

HAnimJoint503.child[0] = Shape504;

let HAnimSite508 = browser.currentScene.createNode("HAnimSite");
HAnimSite508.name = "substernale_pt";
HAnimSite508.DEF = "hanim_substernale_pt";
HAnimSite508.translation = new SFVec3f(new float[0.0085,1.2995,0.1147]);
let TouchSensor509 = browser.currentScene.createNode("TouchSensor");
TouchSensor509.description = "HAnimSite substernale_pt";
HAnimSite508.children = new MFNode();

HAnimSite508.children[0] = TouchSensor509;

let Shape510 = browser.currentScene.createNode("Shape");
Shape510.USE = "HAnimSiteShape";
HAnimSite508.children[1] = Shape510;

HAnimJoint503.child[1] = HAnimSite508;

let HAnimJoint511 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint511.name = "vt10";
HAnimJoint511.DEF = "hanim_vt10";
HAnimJoint511.center = new SFVec3f(new float[0.0056,1.2848,-0.0822]);
HAnimJoint511.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint511.llimit = new MFFloat(new float[0,0,0]);
let Shape512 = browser.currentScene.createNode("Shape");
let LineSet513 = browser.currentScene.createNode("LineSet");
LineSet513.vertexCount = new MFInt32(new int[2]);
let Coordinate514 = browser.currentScene.createNode("Coordinate");
Coordinate514.point = new MFVec3f(new float[0.0056,1.2848,-0.0822,0.0057,1.3126,-0.0838]);
LineSet513.coord = Coordinate514;

//from vt10 to vt9
let ColorRGBA515 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA515.USE = "HAnimSegmentLineColorRGBA";
LineSet513.color = ColorRGBA515;

Shape512.geometry = LineSet513;

HAnimJoint511.child = new undefined();

HAnimJoint511.child[0] = Shape512;

let HAnimSite516 = browser.currentScene.createNode("HAnimSite");
HAnimSite516.name = "l_thelion_pt";
HAnimSite516.DEF = "hanim_l_thelion_pt";
HAnimSite516.translation = new SFVec3f(new float[0.0918,1.3382,0.1192]);
let TouchSensor517 = browser.currentScene.createNode("TouchSensor");
TouchSensor517.description = "HAnimSite l_thelion_pt";
HAnimSite516.children = new MFNode();

HAnimSite516.children[0] = TouchSensor517;

let Shape518 = browser.currentScene.createNode("Shape");
Shape518.USE = "HAnimSiteShape";
HAnimSite516.children[1] = Shape518;

HAnimJoint511.child[1] = HAnimSite516;

let HAnimSite519 = browser.currentScene.createNode("HAnimSite");
HAnimSite519.name = "r_thelion_pt";
HAnimSite519.DEF = "hanim_r_thelion_pt";
HAnimSite519.translation = new SFVec3f(new float[-0.0736,1.3385,0.1217]);
let TouchSensor520 = browser.currentScene.createNode("TouchSensor");
TouchSensor520.description = "HAnimSite r_thelion_pt";
HAnimSite519.children = new MFNode();

HAnimSite519.children[0] = TouchSensor520;

let Shape521 = browser.currentScene.createNode("Shape");
Shape521.USE = "HAnimSiteShape";
HAnimSite519.children[1] = Shape521;

HAnimJoint511.child[2] = HAnimSite519;

let HAnimJoint522 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint522.name = "vt9";
HAnimJoint522.DEF = "hanim_vt9";
HAnimJoint522.center = new SFVec3f(new float[0.0057,1.3126,-0.0838]);
HAnimJoint522.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint522.llimit = new MFFloat(new float[0,0,0]);
let Shape523 = browser.currentScene.createNode("Shape");
let LineSet524 = browser.currentScene.createNode("LineSet");
LineSet524.vertexCount = new MFInt32(new int[2]);
let Coordinate525 = browser.currentScene.createNode("Coordinate");
Coordinate525.point = new MFVec3f(new float[0.0057,1.3126,-0.0838,0.0057,1.3382,-0.0845]);
LineSet524.coord = Coordinate525;

//from vt9 to vt8
let ColorRGBA526 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA526.USE = "HAnimSegmentLineColorRGBA";
LineSet524.color = ColorRGBA526;

Shape523.geometry = LineSet524;

HAnimJoint522.child = new undefined();

HAnimJoint522.child[0] = Shape523;

let HAnimJoint527 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint527.name = "vt8";
HAnimJoint527.DEF = "hanim_vt8";
HAnimJoint527.center = new SFVec3f(new float[0.0057,1.3382,-0.0845]);
HAnimJoint527.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint527.llimit = new MFFloat(new float[0,0,0]);
let Shape528 = browser.currentScene.createNode("Shape");
let LineSet529 = browser.currentScene.createNode("LineSet");
LineSet529.vertexCount = new MFInt32(new int[2]);
let Coordinate530 = browser.currentScene.createNode("Coordinate");
Coordinate530.point = new MFVec3f(new float[0.0057,1.3382,-0.0845,0.0058,1.3625,-0.0833]);
LineSet529.coord = Coordinate530;

//from vt8 to vt7
let ColorRGBA531 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA531.USE = "HAnimSegmentLineColorRGBA";
LineSet529.color = ColorRGBA531;

Shape528.geometry = LineSet529;

HAnimJoint527.child = new undefined();

HAnimJoint527.child[0] = Shape528;

let HAnimJoint532 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint532.name = "vt7";
HAnimJoint532.DEF = "hanim_vt7";
HAnimJoint532.center = new SFVec3f(new float[0.0058,1.3625,-0.0833]);
HAnimJoint532.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint532.llimit = new MFFloat(new float[0,0,0]);
let Shape533 = browser.currentScene.createNode("Shape");
let LineSet534 = browser.currentScene.createNode("LineSet");
LineSet534.vertexCount = new MFInt32(new int[2]);
let Coordinate535 = browser.currentScene.createNode("Coordinate");
Coordinate535.point = new MFVec3f(new float[0.0058,1.3625,-0.0833,0.0059,1.3866,-0.08]);
LineSet534.coord = Coordinate535;

//from vt7 to vt6
let ColorRGBA536 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA536.USE = "HAnimSegmentLineColorRGBA";
LineSet534.color = ColorRGBA536;

Shape533.geometry = LineSet534;

HAnimJoint532.child = new undefined();

HAnimJoint532.child[0] = Shape533;

let HAnimSite537 = browser.currentScene.createNode("HAnimSite");
HAnimSite537.name = "l_chest_midsagittal_plane_pt";
HAnimSite537.DEF = "hanim_l_chest_midsagittal_plane_pt";
HAnimSite537.translation = new SFVec3f(new float[0,1,0]);
let TouchSensor538 = browser.currentScene.createNode("TouchSensor");
TouchSensor538.description = "HAnimSite l_chest_midsagittal_plane_pt";
HAnimSite537.children = new MFNode();

HAnimSite537.children[0] = TouchSensor538;

let Shape539 = browser.currentScene.createNode("Shape");
Shape539.USE = "HAnimSiteShape";
HAnimSite537.children[1] = Shape539;

HAnimJoint532.child[1] = HAnimSite537;

let HAnimSite540 = browser.currentScene.createNode("HAnimSite");
HAnimSite540.name = "mesosternale_pt";
HAnimSite540.DEF = "hanim_mesosternale_pt";
HAnimSite540.translation = new SFVec3f(new float[0,1,0]);
let TouchSensor541 = browser.currentScene.createNode("TouchSensor");
TouchSensor541.description = "HAnimSite mesosternale_pt";
HAnimSite540.children = new MFNode();

HAnimSite540.children[0] = TouchSensor541;

let Shape542 = browser.currentScene.createNode("Shape");
Shape542.USE = "HAnimSiteShape";
HAnimSite540.children[1] = Shape542;

HAnimJoint532.child[2] = HAnimSite540;

let HAnimSite543 = browser.currentScene.createNode("HAnimSite");
HAnimSite543.name = "r_chest_midsagittal_plane_pt";
HAnimSite543.DEF = "hanim_r_chest_midsagittal_plane_pt";
HAnimSite543.translation = new SFVec3f(new float[0,1,0]);
let TouchSensor544 = browser.currentScene.createNode("TouchSensor");
TouchSensor544.description = "HAnimSite r_chest_midsagittal_plane_pt";
HAnimSite543.children = new MFNode();

HAnimSite543.children[0] = TouchSensor544;

let Shape545 = browser.currentScene.createNode("Shape");
Shape545.USE = "HAnimSiteShape";
HAnimSite543.children[1] = Shape545;

HAnimJoint532.child[3] = HAnimSite543;

let HAnimSite546 = browser.currentScene.createNode("HAnimSite");
HAnimSite546.name = "rear_center_midsagittal_plane_pt";
HAnimSite546.DEF = "hanim_rear_center_midsagittal_plane_pt";
HAnimSite546.translation = new SFVec3f(new float[0,1,0]);
let TouchSensor547 = browser.currentScene.createNode("TouchSensor");
TouchSensor547.description = "HAnimSite rear_center_midsagittal_plane_pt";
HAnimSite546.children = new MFNode();

HAnimSite546.children[0] = TouchSensor547;

let Shape548 = browser.currentScene.createNode("Shape");
Shape548.USE = "HAnimSiteShape";
HAnimSite546.children[1] = Shape548;

HAnimJoint532.child[4] = HAnimSite546;

let HAnimJoint549 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint549.name = "vt6";
HAnimJoint549.DEF = "hanim_vt6";
HAnimJoint549.center = new SFVec3f(new float[0.0059,1.3866,-0.08]);
HAnimJoint549.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint549.llimit = new MFFloat(new float[0,0,0]);
let Shape550 = browser.currentScene.createNode("Shape");
let LineSet551 = browser.currentScene.createNode("LineSet");
LineSet551.vertexCount = new MFInt32(new int[2]);
let Coordinate552 = browser.currentScene.createNode("Coordinate");
Coordinate552.point = new MFVec3f(new float[0.0059,1.3866,-0.08,0.006,1.4102,-0.0745]);
LineSet551.coord = Coordinate552;

//from vt6 to vt5
let ColorRGBA553 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA553.USE = "HAnimSegmentLineColorRGBA";
LineSet551.color = ColorRGBA553;

Shape550.geometry = LineSet551;

HAnimJoint549.child = new undefined();

HAnimJoint549.child[0] = Shape550;

let HAnimSite554 = browser.currentScene.createNode("HAnimSite");
HAnimSite554.name = "spine_1_middle_back_pt";
HAnimSite554.DEF = "hanim_spine_1_middle_back_pt";
HAnimSite554.translation = new SFVec3f(new float[0,1,0]);
let TouchSensor555 = browser.currentScene.createNode("TouchSensor");
TouchSensor555.description = "HAnimSite spine_1_middle_back_pt";
HAnimSite554.children = new MFNode();

HAnimSite554.children[0] = TouchSensor555;

let Shape556 = browser.currentScene.createNode("Shape");
Shape556.USE = "HAnimSiteShape";
HAnimSite554.children[1] = Shape556;

HAnimJoint549.child[1] = HAnimSite554;

let HAnimJoint557 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint557.name = "vt5";
HAnimJoint557.DEF = "hanim_vt5";
HAnimJoint557.center = new SFVec3f(new float[0.006,1.4102,-0.0745]);
HAnimJoint557.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint557.llimit = new MFFloat(new float[0,0,0]);
let Shape558 = browser.currentScene.createNode("Shape");
let LineSet559 = browser.currentScene.createNode("LineSet");
LineSet559.vertexCount = new MFInt32(new int[2]);
let Coordinate560 = browser.currentScene.createNode("Coordinate");
Coordinate560.point = new MFVec3f(new float[0.006,1.4102,-0.0745,0.0061,1.432,-0.0675]);
LineSet559.coord = Coordinate560;

//from vt5 to vt4
let ColorRGBA561 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA561.USE = "HAnimSegmentLineColorRGBA";
LineSet559.color = ColorRGBA561;

Shape558.geometry = LineSet559;

HAnimJoint557.child = new undefined();

HAnimJoint557.child[0] = Shape558;

let HAnimJoint562 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint562.name = "vt4";
HAnimJoint562.DEF = "hanim_vt4";
HAnimJoint562.center = new SFVec3f(new float[0.0061,1.432,-0.0675]);
HAnimJoint562.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint562.llimit = new MFFloat(new float[0,0,0]);
let Shape563 = browser.currentScene.createNode("Shape");
let LineSet564 = browser.currentScene.createNode("LineSet");
LineSet564.vertexCount = new MFInt32(new int[2]);
let Coordinate565 = browser.currentScene.createNode("Coordinate");
Coordinate565.point = new MFVec3f(new float[0.0061,1.432,-0.0675,0.0062,1.4583,-0.057]);
LineSet564.coord = Coordinate565;

//from vt4 to vt3
let ColorRGBA566 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA566.USE = "HAnimSegmentLineColorRGBA";
LineSet564.color = ColorRGBA566;

Shape563.geometry = LineSet564;

HAnimJoint562.child = new undefined();

HAnimJoint562.child[0] = Shape563;

let HAnimJoint567 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint567.name = "vt3";
HAnimJoint567.DEF = "hanim_vt3";
HAnimJoint567.center = new SFVec3f(new float[0.0062,1.4583,-0.057]);
HAnimJoint567.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint567.llimit = new MFFloat(new float[0,0,0]);
let Shape568 = browser.currentScene.createNode("Shape");
let LineSet569 = browser.currentScene.createNode("LineSet");
LineSet569.vertexCount = new MFInt32(new int[2]);
let Coordinate570 = browser.currentScene.createNode("Coordinate");
Coordinate570.point = new MFVec3f(new float[0.0062,1.4583,-0.057,0.0063,1.4761,-0.0484]);
LineSet569.coord = Coordinate570;

//from vt3 to vt2
let ColorRGBA571 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA571.USE = "HAnimSegmentLineColorRGBA";
LineSet569.color = ColorRGBA571;

Shape568.geometry = LineSet569;

HAnimJoint567.child = new undefined();

HAnimJoint567.child[0] = Shape568;

let HAnimJoint572 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint572.name = "vt2";
HAnimJoint572.DEF = "hanim_vt2";
HAnimJoint572.center = new SFVec3f(new float[0.0063,1.4761,-0.0484]);
HAnimJoint572.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint572.llimit = new MFFloat(new float[0,0,0]);
let Shape573 = browser.currentScene.createNode("Shape");
let LineSet574 = browser.currentScene.createNode("LineSet");
LineSet574.vertexCount = new MFInt32(new int[2]);
let Coordinate575 = browser.currentScene.createNode("Coordinate");
Coordinate575.point = new MFVec3f(new float[0.0063,1.4761,-0.0484,0.0065,1.4951,-0.0387]);
LineSet574.coord = Coordinate575;

//from vt2 to vt1
let ColorRGBA576 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA576.USE = "HAnimSegmentLineColorRGBA";
LineSet574.color = ColorRGBA576;

Shape573.geometry = LineSet574;

HAnimJoint572.child = new undefined();

HAnimJoint572.child[0] = Shape573;

let HAnimSite577 = browser.currentScene.createNode("HAnimSite");
HAnimSite577.name = "cervicale_pt";
HAnimSite577.DEF = "hanim_cervicale_pt";
HAnimSite577.translation = new SFVec3f(new float[0.0064,1.52,-0.0815]);
let TouchSensor578 = browser.currentScene.createNode("TouchSensor");
TouchSensor578.description = "HAnimSite cervicale_pt";
HAnimSite577.children = new MFNode();

HAnimSite577.children[0] = TouchSensor578;

let Shape579 = browser.currentScene.createNode("Shape");
Shape579.USE = "HAnimSiteShape";
HAnimSite577.children[1] = Shape579;

HAnimJoint572.child[1] = HAnimSite577;

let HAnimSite580 = browser.currentScene.createNode("HAnimSite");
HAnimSite580.name = "suprasternale_pt";
HAnimSite580.DEF = "hanim_suprasternale_pt";
HAnimSite580.translation = new SFVec3f(new float[0.0084,1.4714,0.0551]);
let TouchSensor581 = browser.currentScene.createNode("TouchSensor");
TouchSensor581.description = "HAnimSite suprasternale_pt";
HAnimSite580.children = new MFNode();

HAnimSite580.children[0] = TouchSensor581;

let Shape582 = browser.currentScene.createNode("Shape");
Shape582.USE = "HAnimSiteShape";
HAnimSite580.children[1] = Shape582;

HAnimJoint572.child[2] = HAnimSite580;

let HAnimJoint583 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint583.name = "vt1";
HAnimJoint583.DEF = "hanim_vt1";
HAnimJoint583.center = new SFVec3f(new float[0.0065,1.4951,-0.0387]);
HAnimJoint583.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint583.llimit = new MFFloat(new float[0,0,0]);
let Shape584 = browser.currentScene.createNode("Shape");
let LineSet585 = browser.currentScene.createNode("LineSet");
LineSet585.vertexCount = new MFInt32(new int[2]);
let Coordinate586 = browser.currentScene.createNode("Coordinate");
Coordinate586.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,0.0066,1.5132,-0.0301]);
LineSet585.coord = Coordinate586;

//from vt1 to vc7
let ColorRGBA587 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA587.USE = "HAnimSegmentLineColorRGBA";
LineSet585.color = ColorRGBA587;

Shape584.geometry = LineSet585;

HAnimJoint583.child = new undefined();

HAnimJoint583.child[0] = Shape584;

let HAnimSite588 = browser.currentScene.createNode("HAnimSite");
HAnimSite588.name = "l_neck_base_pt";
HAnimSite588.DEF = "hanim_l_neck_base_pt";
HAnimSite588.translation = new SFVec3f(new float[0.0646,1.5141,-0.038]);
let TouchSensor589 = browser.currentScene.createNode("TouchSensor");
TouchSensor589.description = "HAnimSite l_neck_base_pt";
HAnimSite588.children = new MFNode();

HAnimSite588.children[0] = TouchSensor589;

let Shape590 = browser.currentScene.createNode("Shape");
Shape590.USE = "HAnimSiteShape";
HAnimSite588.children[1] = Shape590;

HAnimJoint583.child[1] = HAnimSite588;

let HAnimSite591 = browser.currentScene.createNode("HAnimSite");
HAnimSite591.name = "r_neck_base_pt";
HAnimSite591.DEF = "hanim_r_neck_base_pt";
HAnimSite591.translation = new SFVec3f(new float[-0.0419,1.5149,-0.022]);
let TouchSensor592 = browser.currentScene.createNode("TouchSensor");
TouchSensor592.description = "HAnimSite r_neck_base_pt";
HAnimSite591.children = new MFNode();

HAnimSite591.children[0] = TouchSensor592;

let Shape593 = browser.currentScene.createNode("Shape");
Shape593.USE = "HAnimSiteShape";
HAnimSite591.children[1] = Shape593;

HAnimJoint583.child[2] = HAnimSite591;

let Shape594 = browser.currentScene.createNode("Shape");
let LineSet595 = browser.currentScene.createNode("LineSet");
LineSet595.vertexCount = new MFInt32(new int[2]);
let Coordinate596 = browser.currentScene.createNode("Coordinate");
Coordinate596.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,0.082,1.4488,-0.0353]);
LineSet595.coord = Coordinate596;

//from vt1 to l_sternoclavicular
let ColorRGBA597 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA597.USE = "HAnimSegmentLineColorRGBA";
LineSet595.color = ColorRGBA597;

Shape594.geometry = LineSet595;

HAnimJoint583.child[3] = Shape594;

let HAnimSite598 = browser.currentScene.createNode("HAnimSite");
HAnimSite598.name = "l_acromion_pt";
HAnimSite598.DEF = "hanim_l_acromion_pt";
HAnimSite598.translation = new SFVec3f(new float[0.2032,1.476,-0.049]);
let TouchSensor599 = browser.currentScene.createNode("TouchSensor");
TouchSensor599.description = "HAnimSite l_acromion_pt";
HAnimSite598.children = new MFNode();

HAnimSite598.children[0] = TouchSensor599;

let Shape600 = browser.currentScene.createNode("Shape");
Shape600.USE = "HAnimSiteShape";
HAnimSite598.children[1] = Shape600;

HAnimJoint583.child[4] = HAnimSite598;

let HAnimSite601 = browser.currentScene.createNode("HAnimSite");
HAnimSite601.name = "l_axilla_distal_pt";
HAnimSite601.DEF = "hanim_l_axilla_distal_pt";
HAnimSite601.translation = new SFVec3f(new float[0.1706,1.4072,-0.0875]);
let TouchSensor602 = browser.currentScene.createNode("TouchSensor");
TouchSensor602.description = "HAnimSite l_axilla_distal_pt";
HAnimSite601.children = new MFNode();

HAnimSite601.children[0] = TouchSensor602;

let Shape603 = browser.currentScene.createNode("Shape");
Shape603.USE = "HAnimSiteShape";
HAnimSite601.children[1] = Shape603;

HAnimJoint583.child[5] = HAnimSite601;

let HAnimSite604 = browser.currentScene.createNode("HAnimSite");
HAnimSite604.name = "l_axilla_posterior_folds_pt";
HAnimSite604.DEF = "hanim_l_axilla_posterior_folds_pt";
HAnimSite604.translation = new SFVec3f(new float[0,1,0]);
let TouchSensor605 = browser.currentScene.createNode("TouchSensor");
TouchSensor605.description = "HAnimSite l_axilla_posterior_folds_pt";
HAnimSite604.children = new MFNode();

HAnimSite604.children[0] = TouchSensor605;

let Shape606 = browser.currentScene.createNode("Shape");
Shape606.USE = "HAnimSiteShape";
HAnimSite604.children[1] = Shape606;

HAnimJoint583.child[6] = HAnimSite604;

let HAnimSite607 = browser.currentScene.createNode("HAnimSite");
HAnimSite607.name = "l_axilla_proximal_pt";
HAnimSite607.DEF = "hanim_l_axilla_proximal_pt";
HAnimSite607.translation = new SFVec3f(new float[0.1777,1.4065,-0.0075]);
let TouchSensor608 = browser.currentScene.createNode("TouchSensor");
TouchSensor608.description = "HAnimSite l_axilla_proximal_pt";
HAnimSite607.children = new MFNode();

HAnimSite607.children[0] = TouchSensor608;

let Shape609 = browser.currentScene.createNode("Shape");
Shape609.USE = "HAnimSiteShape";
HAnimSite607.children[1] = Shape609;

HAnimJoint583.child[7] = HAnimSite607;

let HAnimSite610 = browser.currentScene.createNode("HAnimSite");
HAnimSite610.name = "l_clavicale_pt";
HAnimSite610.DEF = "hanim_l_clavicale_pt";
HAnimSite610.translation = new SFVec3f(new float[0.0271,1.4943,0.0394]);
let TouchSensor611 = browser.currentScene.createNode("TouchSensor");
TouchSensor611.description = "HAnimSite l_clavicale_pt";
HAnimSite610.children = new MFNode();

HAnimSite610.children[0] = TouchSensor611;

let Shape612 = browser.currentScene.createNode("Shape");
Shape612.USE = "HAnimSiteShape";
HAnimSite610.children[1] = Shape612;

HAnimJoint583.child[8] = HAnimSite610;

let Shape613 = browser.currentScene.createNode("Shape");
let LineSet614 = browser.currentScene.createNode("LineSet");
LineSet614.vertexCount = new MFInt32(new int[2]);
let Coordinate615 = browser.currentScene.createNode("Coordinate");
Coordinate615.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,-0.0694,1.46,-0.033]);
LineSet614.coord = Coordinate615;

//from vt1 to r_sternoclavicular
let ColorRGBA616 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA616.USE = "HAnimSegmentLineColorRGBA";
LineSet614.color = ColorRGBA616;

Shape613.geometry = LineSet614;

HAnimJoint583.child[9] = Shape613;

let HAnimSite617 = browser.currentScene.createNode("HAnimSite");
HAnimSite617.name = "r_acromion_pt";
HAnimSite617.DEF = "hanim_r_acromion_pt";
HAnimSite617.translation = new SFVec3f(new float[-0.1905,1.4791,-0.0431]);
let TouchSensor618 = browser.currentScene.createNode("TouchSensor");
TouchSensor618.description = "HAnimSite r_acromion_pt";
HAnimSite617.children = new MFNode();

HAnimSite617.children[0] = TouchSensor618;

let Shape619 = browser.currentScene.createNode("Shape");
Shape619.USE = "HAnimSiteShape";
HAnimSite617.children[1] = Shape619;

HAnimJoint583.child[10] = HAnimSite617;

let HAnimSite620 = browser.currentScene.createNode("HAnimSite");
HAnimSite620.name = "r_axilla_distal_pt";
HAnimSite620.DEF = "hanim_r_axilla_distal_pt";
HAnimSite620.translation = new SFVec3f(new float[-0.1603,1.4098,-0.0826]);
let TouchSensor621 = browser.currentScene.createNode("TouchSensor");
TouchSensor621.description = "HAnimSite r_axilla_distal_pt";
HAnimSite620.children = new MFNode();

HAnimSite620.children[0] = TouchSensor621;

let Shape622 = browser.currentScene.createNode("Shape");
Shape622.USE = "HAnimSiteShape";
HAnimSite620.children[1] = Shape622;

HAnimJoint583.child[11] = HAnimSite620;

let HAnimSite623 = browser.currentScene.createNode("HAnimSite");
HAnimSite623.name = "r_axilla_posterior_folds_pt";
HAnimSite623.DEF = "hanim_r_axilla_posterior_folds_pt";
HAnimSite623.translation = new SFVec3f(new float[0,1,0]);
let TouchSensor624 = browser.currentScene.createNode("TouchSensor");
TouchSensor624.description = "HAnimSite r_axilla_posterior_folds_pt";
HAnimSite623.children = new MFNode();

HAnimSite623.children[0] = TouchSensor624;

let Shape625 = browser.currentScene.createNode("Shape");
Shape625.USE = "HAnimSiteShape";
HAnimSite623.children[1] = Shape625;

HAnimJoint583.child[12] = HAnimSite623;

let HAnimSite626 = browser.currentScene.createNode("HAnimSite");
HAnimSite626.name = "r_axilla_proximal_pt";
HAnimSite626.DEF = "hanim_r_axilla_proximal_pt";
HAnimSite626.translation = new SFVec3f(new float[-0.1626,1.4072,-0.0031]);
let TouchSensor627 = browser.currentScene.createNode("TouchSensor");
TouchSensor627.description = "HAnimSite r_axilla_proximal_pt";
HAnimSite626.children = new MFNode();

HAnimSite626.children[0] = TouchSensor627;

let Shape628 = browser.currentScene.createNode("Shape");
Shape628.USE = "HAnimSiteShape";
HAnimSite626.children[1] = Shape628;

HAnimJoint583.child[13] = HAnimSite626;

let HAnimSite629 = browser.currentScene.createNode("HAnimSite");
HAnimSite629.name = "r_clavicale_pt";
HAnimSite629.DEF = "hanim_r_clavicale_pt";
HAnimSite629.translation = new SFVec3f(new float[-0.0115,1.4943,0.04]);
let TouchSensor630 = browser.currentScene.createNode("TouchSensor");
TouchSensor630.description = "HAnimSite r_clavicale_pt";
HAnimSite629.children = new MFNode();

HAnimSite629.children[0] = TouchSensor630;

let Shape631 = browser.currentScene.createNode("Shape");
Shape631.USE = "HAnimSiteShape";
HAnimSite629.children[1] = Shape631;

HAnimJoint583.child[14] = HAnimSite629;

let HAnimJoint632 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint632.name = "vc7";
HAnimJoint632.DEF = "hanim_vc7";
HAnimJoint632.center = new SFVec3f(new float[0.0066,1.5132,-0.0301]);
HAnimJoint632.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint632.llimit = new MFFloat(new float[0,0,0]);
let Shape633 = browser.currentScene.createNode("Shape");
let LineSet634 = browser.currentScene.createNode("LineSet");
LineSet634.vertexCount = new MFInt32(new int[2]);
let Coordinate635 = browser.currentScene.createNode("Coordinate");
Coordinate635.point = new MFVec3f(new float[0.0066,1.5132,-0.0301,0.0066,1.5357,-0.0143]);
LineSet634.coord = Coordinate635;

//from vc7 to vc6
let ColorRGBA636 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA636.USE = "HAnimSegmentLineColorRGBA";
LineSet634.color = ColorRGBA636;

Shape633.geometry = LineSet634;

HAnimJoint632.child = new undefined();

HAnimJoint632.child[0] = Shape633;

let HAnimJoint637 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint637.name = "vc6";
HAnimJoint637.DEF = "hanim_vc6";
HAnimJoint637.center = new SFVec3f(new float[0.0066,1.5357,-0.0143]);
HAnimJoint637.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint637.llimit = new MFFloat(new float[0,0,0]);
let Shape638 = browser.currentScene.createNode("Shape");
let LineSet639 = browser.currentScene.createNode("LineSet");
LineSet639.vertexCount = new MFInt32(new int[2]);
let Coordinate640 = browser.currentScene.createNode("Coordinate");
Coordinate640.point = new MFVec3f(new float[0.0066,1.5357,-0.0143,0.0066,1.552,-0.0082]);
LineSet639.coord = Coordinate640;

//from vc6 to vc5
let ColorRGBA641 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA641.USE = "HAnimSegmentLineColorRGBA";
LineSet639.color = ColorRGBA641;

Shape638.geometry = LineSet639;

HAnimJoint637.child = new undefined();

HAnimJoint637.child[0] = Shape638;

let HAnimJoint642 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint642.name = "vc5";
HAnimJoint642.DEF = "hanim_vc5";
HAnimJoint642.center = new SFVec3f(new float[0.0066,1.552,-0.0082]);
HAnimJoint642.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint642.llimit = new MFFloat(new float[0,0,0]);
let Shape643 = browser.currentScene.createNode("Shape");
let LineSet644 = browser.currentScene.createNode("LineSet");
LineSet644.vertexCount = new MFInt32(new int[2]);
let Coordinate645 = browser.currentScene.createNode("Coordinate");
Coordinate645.point = new MFVec3f(new float[0.0066,1.552,-0.0082,0.0066,1.5662,-0.0084]);
LineSet644.coord = Coordinate645;

//from vc5 to vc4
let ColorRGBA646 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA646.USE = "HAnimSegmentLineColorRGBA";
LineSet644.color = ColorRGBA646;

Shape643.geometry = LineSet644;

HAnimJoint642.child = new undefined();

HAnimJoint642.child[0] = Shape643;

let HAnimJoint647 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint647.name = "vc4";
HAnimJoint647.DEF = "hanim_vc4";
HAnimJoint647.center = new SFVec3f(new float[0.0066,1.5662,-0.0084]);
HAnimJoint647.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint647.llimit = new MFFloat(new float[0,0,0]);
let Shape648 = browser.currentScene.createNode("Shape");
let LineSet649 = browser.currentScene.createNode("LineSet");
LineSet649.vertexCount = new MFInt32(new int[2]);
let Coordinate650 = browser.currentScene.createNode("Coordinate");
Coordinate650.point = new MFVec3f(new float[0.0066,1.5662,-0.0084,0.0066,1.58,-0.0103]);
LineSet649.coord = Coordinate650;

//from vc4 to vc3
let ColorRGBA651 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA651.USE = "HAnimSegmentLineColorRGBA";
LineSet649.color = ColorRGBA651;

Shape648.geometry = LineSet649;

HAnimJoint647.child = new undefined();

HAnimJoint647.child[0] = Shape648;

let HAnimJoint652 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint652.name = "vc3";
HAnimJoint652.DEF = "hanim_vc3";
HAnimJoint652.center = new SFVec3f(new float[0.0066,1.58,-0.0103]);
HAnimJoint652.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint652.llimit = new MFFloat(new float[0,0,0]);
let Shape653 = browser.currentScene.createNode("Shape");
let LineSet654 = browser.currentScene.createNode("LineSet");
LineSet654.vertexCount = new MFInt32(new int[2]);
let Coordinate655 = browser.currentScene.createNode("Coordinate");
Coordinate655.point = new MFVec3f(new float[0.0066,1.58,-0.0103,0.0066,1.5928,-0.0103]);
LineSet654.coord = Coordinate655;

//from vc3 to vc2
let ColorRGBA656 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA656.USE = "HAnimSegmentLineColorRGBA";
LineSet654.color = ColorRGBA656;

Shape653.geometry = LineSet654;

HAnimJoint652.child = new undefined();

HAnimJoint652.child[0] = Shape653;

let HAnimSite657 = browser.currentScene.createNode("HAnimSite");
HAnimSite657.name = "adams_apple_pt";
HAnimSite657.DEF = "hanim_adams_apple_pt";
HAnimSite657.translation = new SFVec3f(new float[0,1,0]);
let TouchSensor658 = browser.currentScene.createNode("TouchSensor");
TouchSensor658.description = "HAnimSite adams_apple_pt";
HAnimSite657.children = new MFNode();

HAnimSite657.children[0] = TouchSensor658;

let Shape659 = browser.currentScene.createNode("Shape");
Shape659.USE = "HAnimSiteShape";
HAnimSite657.children[1] = Shape659;

HAnimJoint652.child[1] = HAnimSite657;

let HAnimJoint660 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint660.name = "vc2";
HAnimJoint660.DEF = "hanim_vc2";
HAnimJoint660.center = new SFVec3f(new float[0.0066,1.5928,-0.0103]);
HAnimJoint660.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint660.llimit = new MFFloat(new float[0,0,0]);
let Shape661 = browser.currentScene.createNode("Shape");
let LineSet662 = browser.currentScene.createNode("LineSet");
LineSet662.vertexCount = new MFInt32(new int[2]);
let Coordinate663 = browser.currentScene.createNode("Coordinate");
Coordinate663.point = new MFVec3f(new float[0.0066,1.5928,-0.0103,0.0066,1.6144,-0.0034]);
LineSet662.coord = Coordinate663;

//from vc2 to vc1
let ColorRGBA664 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA664.USE = "HAnimSegmentLineColorRGBA";
LineSet662.color = ColorRGBA664;

Shape661.geometry = LineSet662;

HAnimJoint660.child = new undefined();

HAnimJoint660.child[0] = Shape661;

let HAnimJoint665 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint665.name = "vc1";
HAnimJoint665.DEF = "hanim_vc1";
HAnimJoint665.center = new SFVec3f(new float[0.0066,1.6144,-0.0034]);
HAnimJoint665.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint665.llimit = new MFFloat(new float[0,0,0]);
let Shape666 = browser.currentScene.createNode("Shape");
let LineSet667 = browser.currentScene.createNode("LineSet");
LineSet667.vertexCount = new MFInt32(new int[2]);
let Coordinate668 = browser.currentScene.createNode("Coordinate");
Coordinate668.point = new MFVec3f(new float[0.0066,1.6144,-0.0034,0.0044,1.6209,0.0236]);
LineSet667.coord = Coordinate668;

//from vc1 to skullbase
let ColorRGBA669 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA669.USE = "HAnimSegmentLineColorRGBA";
LineSet667.color = ColorRGBA669;

Shape666.geometry = LineSet667;

HAnimJoint665.child = new undefined();

HAnimJoint665.child[0] = Shape666;

let HAnimSite670 = browser.currentScene.createNode("HAnimSite");
HAnimSite670.name = "glabella_pt";
HAnimSite670.DEF = "hanim_glabella_pt";
HAnimSite670.translation = new SFVec3f(new float[0,1,0]);
let TouchSensor671 = browser.currentScene.createNode("TouchSensor");
TouchSensor671.description = "HAnimSite glabella_pt";
HAnimSite670.children = new MFNode();

HAnimSite670.children[0] = TouchSensor671;

let Shape672 = browser.currentScene.createNode("Shape");
Shape672.USE = "HAnimSiteShape";
HAnimSite670.children[1] = Shape672;

HAnimJoint665.child[1] = HAnimSite670;

let HAnimSite673 = browser.currentScene.createNode("HAnimSite");
HAnimSite673.name = "l_ectocanthus_pt";
HAnimSite673.DEF = "hanim_l_ectocanthus_pt";
HAnimSite673.translation = new SFVec3f(new float[0,1,0]);
let TouchSensor674 = browser.currentScene.createNode("TouchSensor");
TouchSensor674.description = "HAnimSite l_ectocanthus_pt";
HAnimSite673.children = new MFNode();

HAnimSite673.children[0] = TouchSensor674;

let Shape675 = browser.currentScene.createNode("Shape");
Shape675.USE = "HAnimSiteShape";
HAnimSite673.children[1] = Shape675;

HAnimJoint665.child[2] = HAnimSite673;

let HAnimSite676 = browser.currentScene.createNode("HAnimSite");
HAnimSite676.name = "l_infraorbitale_pt";
HAnimSite676.DEF = "hanim_l_infraorbitale_pt";
HAnimSite676.translation = new SFVec3f(new float[0.0341,1.6171,0.0752]);
let TouchSensor677 = browser.currentScene.createNode("TouchSensor");
TouchSensor677.description = "HAnimSite l_infraorbitale_pt";
HAnimSite676.children = new MFNode();

HAnimSite676.children[0] = TouchSensor677;

let Shape678 = browser.currentScene.createNode("Shape");
Shape678.USE = "HAnimSiteShape";
HAnimSite676.children[1] = Shape678;

HAnimJoint665.child[3] = HAnimSite676;

let HAnimSite679 = browser.currentScene.createNode("HAnimSite");
HAnimSite679.name = "l_tragion_pt";
HAnimSite679.DEF = "hanim_l_tragion_pt";
HAnimSite679.translation = new SFVec3f(new float[0.0739,1.6348,0.0282]);
let TouchSensor680 = browser.currentScene.createNode("TouchSensor");
TouchSensor680.description = "HAnimSite l_tragion_pt";
HAnimSite679.children = new MFNode();

HAnimSite679.children[0] = TouchSensor680;

let Shape681 = browser.currentScene.createNode("Shape");
Shape681.USE = "HAnimSiteShape";
HAnimSite679.children[1] = Shape681;

HAnimJoint665.child[4] = HAnimSite679;

let HAnimSite682 = browser.currentScene.createNode("HAnimSite");
HAnimSite682.name = "nuchale_pt";
HAnimSite682.DEF = "hanim_nuchale_pt";
HAnimSite682.translation = new SFVec3f(new float[0.0039,1.5972,-0.0796]);
let TouchSensor683 = browser.currentScene.createNode("TouchSensor");
TouchSensor683.description = "HAnimSite nuchale_pt";
HAnimSite682.children = new MFNode();

HAnimSite682.children[0] = TouchSensor683;

let Shape684 = browser.currentScene.createNode("Shape");
Shape684.USE = "HAnimSiteShape";
HAnimSite682.children[1] = Shape684;

HAnimJoint665.child[5] = HAnimSite682;

let HAnimSite685 = browser.currentScene.createNode("HAnimSite");
HAnimSite685.name = "opisthocranion_pt";
HAnimSite685.DEF = "hanim_opisthocranion_pt";
HAnimSite685.translation = new SFVec3f(new float[0,1,0]);
let TouchSensor686 = browser.currentScene.createNode("TouchSensor");
TouchSensor686.description = "HAnimSite opisthocranion_pt";
HAnimSite685.children = new MFNode();

HAnimSite685.children[0] = TouchSensor686;

let Shape687 = browser.currentScene.createNode("Shape");
Shape687.USE = "HAnimSiteShape";
HAnimSite685.children[1] = Shape687;

HAnimJoint665.child[6] = HAnimSite685;

let HAnimSite688 = browser.currentScene.createNode("HAnimSite");
HAnimSite688.name = "r_ectocanthus_pt";
HAnimSite688.DEF = "hanim_r_ectocanthus_pt";
HAnimSite688.translation = new SFVec3f(new float[0,1,0]);
let TouchSensor689 = browser.currentScene.createNode("TouchSensor");
TouchSensor689.description = "HAnimSite r_ectocanthus_pt";
HAnimSite688.children = new MFNode();

HAnimSite688.children[0] = TouchSensor689;

let Shape690 = browser.currentScene.createNode("Shape");
Shape690.USE = "HAnimSiteShape";
HAnimSite688.children[1] = Shape690;

HAnimJoint665.child[7] = HAnimSite688;

let HAnimSite691 = browser.currentScene.createNode("HAnimSite");
HAnimSite691.name = "r_infraorbitale_pt";
HAnimSite691.DEF = "hanim_r_infraorbitale_pt";
HAnimSite691.translation = new SFVec3f(new float[-0.0237,1.6171,0.0752]);
let TouchSensor692 = browser.currentScene.createNode("TouchSensor");
TouchSensor692.description = "HAnimSite r_infraorbitale_pt";
HAnimSite691.children = new MFNode();

HAnimSite691.children[0] = TouchSensor692;

let Shape693 = browser.currentScene.createNode("Shape");
Shape693.USE = "HAnimSiteShape";
HAnimSite691.children[1] = Shape693;

HAnimJoint665.child[8] = HAnimSite691;

let HAnimSite694 = browser.currentScene.createNode("HAnimSite");
HAnimSite694.name = "r_tragion_pt";
HAnimSite694.DEF = "hanim_r_tragion_pt";
HAnimSite694.translation = new SFVec3f(new float[-0.0646,1.6347,0.0302]);
let TouchSensor695 = browser.currentScene.createNode("TouchSensor");
TouchSensor695.description = "HAnimSite r_tragion_pt";
HAnimSite694.children = new MFNode();

HAnimSite694.children[0] = TouchSensor695;

let Shape696 = browser.currentScene.createNode("Shape");
Shape696.USE = "HAnimSiteShape";
HAnimSite694.children[1] = Shape696;

HAnimJoint665.child[9] = HAnimSite694;

let HAnimSite697 = browser.currentScene.createNode("HAnimSite");
HAnimSite697.name = "sellion_pt";
HAnimSite697.DEF = "hanim_sellion_pt";
HAnimSite697.translation = new SFVec3f(new float[0.0058,1.6316,0.0852]);
let TouchSensor698 = browser.currentScene.createNode("TouchSensor");
TouchSensor698.description = "HAnimSite sellion_pt";
HAnimSite697.children = new MFNode();

HAnimSite697.children[0] = TouchSensor698;

let Shape699 = browser.currentScene.createNode("Shape");
Shape699.USE = "HAnimSiteShape";
HAnimSite697.children[1] = Shape699;

HAnimJoint665.child[10] = HAnimSite697;

let HAnimSite700 = browser.currentScene.createNode("HAnimSite");
HAnimSite700.name = "skull_vertex_pt";
HAnimSite700.DEF = "hanim_skull_vertex_pt";
HAnimSite700.translation = new SFVec3f(new float[0.005,1.7504,0.0055]);
let TouchSensor701 = browser.currentScene.createNode("TouchSensor");
TouchSensor701.description = "HAnimSite skull_vertex_pt";
HAnimSite700.children = new MFNode();

HAnimSite700.children[0] = TouchSensor701;

let Shape702 = browser.currentScene.createNode("Shape");
Shape702.USE = "HAnimSiteShape";
HAnimSite700.children[1] = Shape702;

HAnimJoint665.child[11] = HAnimSite700;

let HAnimJoint703 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint703.name = "skullbase";
HAnimJoint703.DEF = "hanim_skullbase";
HAnimJoint703.center = new SFVec3f(new float[0.0044,1.6209,0.0236]);
HAnimJoint703.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint703.llimit = new MFFloat(new float[0,0,0]);
let Shape704 = browser.currentScene.createNode("Shape");
let LineSet705 = browser.currentScene.createNode("LineSet");
LineSet705.vertexCount = new MFInt32(new int[2]);
let Coordinate706 = browser.currentScene.createNode("Coordinate");
Coordinate706.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0,1,0]);
LineSet705.coord = Coordinate706;

//from skullbase to l_eyelid_joint
let ColorRGBA707 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA707.USE = "HAnimSegmentLineColorRGBA";
LineSet705.color = ColorRGBA707;

Shape704.geometry = LineSet705;

HAnimJoint703.child = new undefined();

HAnimJoint703.child[0] = Shape704;

let Shape708 = browser.currentScene.createNode("Shape");
let LineSet709 = browser.currentScene.createNode("LineSet");
LineSet709.vertexCount = new MFInt32(new int[2]);
let Coordinate710 = browser.currentScene.createNode("Coordinate");
Coordinate710.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0,1,0]);
LineSet709.coord = Coordinate710;

//from skullbase to r_eyelid_joint
let ColorRGBA711 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA711.USE = "HAnimSegmentLineColorRGBA";
LineSet709.color = ColorRGBA711;

Shape708.geometry = LineSet709;

HAnimJoint703.child[1] = Shape708;

let Shape712 = browser.currentScene.createNode("Shape");
let LineSet713 = browser.currentScene.createNode("LineSet");
LineSet713.vertexCount = new MFInt32(new int[2]);
let Coordinate714 = browser.currentScene.createNode("Coordinate");
Coordinate714.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0,1,0]);
LineSet713.coord = Coordinate714;

//from skullbase to l_eyeball_joint
let ColorRGBA715 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA715.USE = "HAnimSegmentLineColorRGBA";
LineSet713.color = ColorRGBA715;

Shape712.geometry = LineSet713;

HAnimJoint703.child[2] = Shape712;

let Shape716 = browser.currentScene.createNode("Shape");
let LineSet717 = browser.currentScene.createNode("LineSet");
LineSet717.vertexCount = new MFInt32(new int[2]);
let Coordinate718 = browser.currentScene.createNode("Coordinate");
Coordinate718.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0,1,0]);
LineSet717.coord = Coordinate718;

//from skullbase to r_eyeball_joint
let ColorRGBA719 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA719.USE = "HAnimSegmentLineColorRGBA";
LineSet717.color = ColorRGBA719;

Shape716.geometry = LineSet717;

HAnimJoint703.child[3] = Shape716;

let Shape720 = browser.currentScene.createNode("Shape");
let LineSet721 = browser.currentScene.createNode("LineSet");
LineSet721.vertexCount = new MFInt32(new int[2]);
let Coordinate722 = browser.currentScene.createNode("Coordinate");
Coordinate722.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0,1,0]);
LineSet721.coord = Coordinate722;

//from skullbase to l_eyebrow_joint
let ColorRGBA723 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA723.USE = "HAnimSegmentLineColorRGBA";
LineSet721.color = ColorRGBA723;

Shape720.geometry = LineSet721;

HAnimJoint703.child[4] = Shape720;

let Shape724 = browser.currentScene.createNode("Shape");
let LineSet725 = browser.currentScene.createNode("LineSet");
LineSet725.vertexCount = new MFInt32(new int[2]);
let Coordinate726 = browser.currentScene.createNode("Coordinate");
Coordinate726.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0,1,0]);
LineSet725.coord = Coordinate726;

//from skullbase to r_eyebrow_joint
let ColorRGBA727 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA727.USE = "HAnimSegmentLineColorRGBA";
LineSet725.color = ColorRGBA727;

Shape724.geometry = LineSet725;

HAnimJoint703.child[5] = Shape724;

let Shape728 = browser.currentScene.createNode("Shape");
let LineSet729 = browser.currentScene.createNode("LineSet");
LineSet729.vertexCount = new MFInt32(new int[2]);
let Coordinate730 = browser.currentScene.createNode("Coordinate");
Coordinate730.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0,1,0]);
LineSet729.coord = Coordinate730;

//from skullbase to temporomandibular
let ColorRGBA731 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA731.USE = "HAnimSegmentLineColorRGBA";
LineSet729.color = ColorRGBA731;

Shape728.geometry = LineSet729;

HAnimJoint703.child[6] = Shape728;

let HAnimSite732 = browser.currentScene.createNode("HAnimSite");
HAnimSite732.name = "l_gonion_pt";
HAnimSite732.DEF = "hanim_l_gonion_pt";
HAnimSite732.translation = new SFVec3f(new float[0.0631,1.553,0.033]);
let TouchSensor733 = browser.currentScene.createNode("TouchSensor");
TouchSensor733.description = "HAnimSite l_gonion_pt";
HAnimSite732.children = new MFNode();

HAnimSite732.children[0] = TouchSensor733;

let Shape734 = browser.currentScene.createNode("Shape");
Shape734.USE = "HAnimSiteShape";
HAnimSite732.children[1] = Shape734;

HAnimJoint703.child[7] = HAnimSite732;

let HAnimSite735 = browser.currentScene.createNode("HAnimSite");
HAnimSite735.name = "menton_pt";
HAnimSite735.DEF = "hanim_menton_pt";
HAnimSite735.translation = new SFVec3f(new float[0,1,0]);
let TouchSensor736 = browser.currentScene.createNode("TouchSensor");
TouchSensor736.description = "HAnimSite menton_pt";
HAnimSite735.children = new MFNode();

HAnimSite735.children[0] = TouchSensor736;

let Shape737 = browser.currentScene.createNode("Shape");
Shape737.USE = "HAnimSiteShape";
HAnimSite735.children[1] = Shape737;

HAnimJoint703.child[8] = HAnimSite735;

let HAnimSite738 = browser.currentScene.createNode("HAnimSite");
HAnimSite738.name = "r_gonion_pt";
HAnimSite738.DEF = "hanim_r_gonion_pt";
HAnimSite738.translation = new SFVec3f(new float[-0.052,1.5529,0.0347]);
let TouchSensor739 = browser.currentScene.createNode("TouchSensor");
TouchSensor739.description = "HAnimSite r_gonion_pt";
HAnimSite738.children = new MFNode();

HAnimSite738.children[0] = TouchSensor739;

let Shape740 = browser.currentScene.createNode("Shape");
Shape740.USE = "HAnimSiteShape";
HAnimSite738.children[1] = Shape740;

HAnimJoint703.child[9] = HAnimSite738;

let HAnimSite741 = browser.currentScene.createNode("HAnimSite");
HAnimSite741.name = "supramenton_pt";
HAnimSite741.DEF = "hanim_supramenton_pt";
HAnimSite741.translation = new SFVec3f(new float[0.0061,1.541,0.0805]);
let TouchSensor742 = browser.currentScene.createNode("TouchSensor");
TouchSensor742.description = "HAnimSite supramenton_pt";
HAnimSite741.children = new MFNode();

HAnimSite741.children[0] = TouchSensor742;

let Shape743 = browser.currentScene.createNode("Shape");
Shape743.USE = "HAnimSiteShape";
HAnimSite741.children[1] = Shape743;

HAnimJoint703.child[10] = HAnimSite741;

let HAnimJoint744 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint744.name = "l_eyelid_joint";
HAnimJoint744.DEF = "hanim_l_eyelid_joint";
HAnimJoint744.center = new SFVec3f(new float[0,1,0]);
HAnimJoint744.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint744.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint703.children[11] = HAnimJoint744;

let HAnimJoint745 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint745.name = "r_eyelid_joint";
HAnimJoint745.DEF = "hanim_r_eyelid_joint";
HAnimJoint745.center = new SFVec3f(new float[0,1,0]);
HAnimJoint745.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint745.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint703.children[12] = HAnimJoint745;

let HAnimJoint746 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint746.name = "l_eyeball_joint";
HAnimJoint746.DEF = "hanim_l_eyeball_joint";
HAnimJoint746.center = new SFVec3f(new float[0,1,0]);
HAnimJoint746.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint746.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint703.children[13] = HAnimJoint746;

let HAnimJoint747 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint747.name = "r_eyeball_joint";
HAnimJoint747.DEF = "hanim_r_eyeball_joint";
HAnimJoint747.center = new SFVec3f(new float[0,1,0]);
HAnimJoint747.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint747.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint703.children[14] = HAnimJoint747;

let HAnimJoint748 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint748.name = "l_eyebrow_joint";
HAnimJoint748.DEF = "hanim_l_eyebrow_joint";
HAnimJoint748.center = new SFVec3f(new float[0,1,0]);
HAnimJoint748.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint748.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint703.children[15] = HAnimJoint748;

let HAnimJoint749 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint749.name = "r_eyebrow_joint";
HAnimJoint749.DEF = "hanim_r_eyebrow_joint";
HAnimJoint749.center = new SFVec3f(new float[0,1,0]);
HAnimJoint749.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint749.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint703.children[16] = HAnimJoint749;

let HAnimJoint750 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint750.name = "temporomandibular";
HAnimJoint750.DEF = "hanim_temporomandibular";
HAnimJoint750.center = new SFVec3f(new float[0,1,0]);
HAnimJoint750.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint750.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint703.children[17] = HAnimJoint750;

HAnimJoint665.children[12] = HAnimJoint703;

HAnimJoint660.children[1] = HAnimJoint665;

HAnimJoint652.children[2] = HAnimJoint660;

HAnimJoint647.children[1] = HAnimJoint652;

HAnimJoint642.children[1] = HAnimJoint647;

HAnimJoint637.children[1] = HAnimJoint642;

HAnimJoint632.children[1] = HAnimJoint637;

HAnimJoint583.children[15] = HAnimJoint632;

let HAnimJoint751 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint751.name = "l_sternoclavicular";
HAnimJoint751.DEF = "hanim_l_sternoclavicular";
HAnimJoint751.center = new SFVec3f(new float[0.082,1.4488,-0.0353]);
HAnimJoint751.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint751.llimit = new MFFloat(new float[0,0,0]);
let Shape752 = browser.currentScene.createNode("Shape");
let LineSet753 = browser.currentScene.createNode("LineSet");
LineSet753.vertexCount = new MFInt32(new int[2]);
let Coordinate754 = browser.currentScene.createNode("Coordinate");
Coordinate754.point = new MFVec3f(new float[0.082,1.4488,-0.0353,0.0962,1.4269,-0.0424]);
LineSet753.coord = Coordinate754;

//from l_sternoclavicular to l_acromioclavicular
let ColorRGBA755 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA755.USE = "HAnimSegmentLineColorRGBA";
LineSet753.color = ColorRGBA755;

Shape752.geometry = LineSet753;

HAnimJoint751.child = new undefined();

HAnimJoint751.child[0] = Shape752;

let HAnimJoint756 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint756.name = "l_acromioclavicular";
HAnimJoint756.DEF = "hanim_l_acromioclavicular";
HAnimJoint756.center = new SFVec3f(new float[0.0962,1.4269,-0.0424]);
HAnimJoint756.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint756.llimit = new MFFloat(new float[0,0,0]);
let Shape757 = browser.currentScene.createNode("Shape");
let LineSet758 = browser.currentScene.createNode("LineSet");
LineSet758.vertexCount = new MFInt32(new int[2]);
let Coordinate759 = browser.currentScene.createNode("Coordinate");
Coordinate759.point = new MFVec3f(new float[0.0962,1.4269,-0.0424,0.2029,1.4376,-0.0387]);
LineSet758.coord = Coordinate759;

//from l_acromioclavicular to l_shoulder
let ColorRGBA760 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA760.USE = "HAnimSegmentLineColorRGBA";
LineSet758.color = ColorRGBA760;

Shape757.geometry = LineSet758;

HAnimJoint756.child = new undefined();

HAnimJoint756.child[0] = Shape757;

let HAnimSite761 = browser.currentScene.createNode("HAnimSite");
HAnimSite761.name = "l_bideltoid_pt";
HAnimSite761.DEF = "hanim_l_bideltoid_pt";
HAnimSite761.translation = new SFVec3f(new float[0,1,0]);
let TouchSensor762 = browser.currentScene.createNode("TouchSensor");
TouchSensor762.description = "HAnimSite l_bideltoid_pt";
HAnimSite761.children = new MFNode();

HAnimSite761.children[0] = TouchSensor762;

let Shape763 = browser.currentScene.createNode("Shape");
Shape763.USE = "HAnimSiteShape";
HAnimSite761.children[1] = Shape763;

HAnimJoint756.child[1] = HAnimSite761;

let HAnimSite764 = browser.currentScene.createNode("HAnimSite");
HAnimSite764.name = "l_humeral_lateral_epicondyles_pt";
HAnimSite764.DEF = "hanim_l_humeral_lateral_epicondyles_pt";
HAnimSite764.translation = new SFVec3f(new float[0.228,1.1482,-0.11]);
let TouchSensor765 = browser.currentScene.createNode("TouchSensor");
TouchSensor765.description = "HAnimSite l_humeral_lateral_epicondyles_pt";
HAnimSite764.children = new MFNode();

HAnimSite764.children[0] = TouchSensor765;

let Shape766 = browser.currentScene.createNode("Shape");
Shape766.USE = "HAnimSiteShape";
HAnimSite764.children[1] = Shape766;

HAnimJoint756.child[2] = HAnimSite764;

let HAnimJoint767 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint767.name = "l_shoulder";
HAnimJoint767.DEF = "hanim_l_shoulder";
HAnimJoint767.center = new SFVec3f(new float[0.2029,1.4376,-0.0387]);
HAnimJoint767.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint767.llimit = new MFFloat(new float[0,0,0]);
let Shape768 = browser.currentScene.createNode("Shape");
let LineSet769 = browser.currentScene.createNode("LineSet");
LineSet769.vertexCount = new MFInt32(new int[2]);
let Coordinate770 = browser.currentScene.createNode("Coordinate");
Coordinate770.point = new MFVec3f(new float[0.2029,1.4376,-0.0387,0.2014,1.1357,-0.0682]);
LineSet769.coord = Coordinate770;

//from l_shoulder to l_elbow
let ColorRGBA771 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA771.USE = "HAnimSegmentLineColorRGBA";
LineSet769.color = ColorRGBA771;

Shape768.geometry = LineSet769;

HAnimJoint767.child = new undefined();

HAnimJoint767.child[0] = Shape768;

let HAnimSite772 = browser.currentScene.createNode("HAnimSite");
HAnimSite772.name = "l_humeral_medial_epicondyles_pt";
HAnimSite772.DEF = "hanim_l_humeral_medial_epicondyles_pt";
HAnimSite772.translation = new SFVec3f(new float[0.1735,1.1272,-0.1113]);
let TouchSensor773 = browser.currentScene.createNode("TouchSensor");
TouchSensor773.description = "HAnimSite l_humeral_medial_epicondyles_pt";
HAnimSite772.children = new MFNode();

HAnimSite772.children[0] = TouchSensor773;

let Shape774 = browser.currentScene.createNode("Shape");
Shape774.USE = "HAnimSiteShape";
HAnimSite772.children[1] = Shape774;

HAnimJoint767.child[1] = HAnimSite772;

let HAnimSite775 = browser.currentScene.createNode("HAnimSite");
HAnimSite775.name = "l_olecranon_pt";
HAnimSite775.DEF = "hanim_l_olecranon_pt";
HAnimSite775.translation = new SFVec3f(new float[-0.1962,1.1375,-0.1123]);
let TouchSensor776 = browser.currentScene.createNode("TouchSensor");
TouchSensor776.description = "HAnimSite l_olecranon_pt";
HAnimSite775.children = new MFNode();

HAnimSite775.children[0] = TouchSensor776;

let Shape777 = browser.currentScene.createNode("Shape");
Shape777.USE = "HAnimSiteShape";
HAnimSite775.children[1] = Shape777;

HAnimJoint767.child[2] = HAnimSite775;

let HAnimSite778 = browser.currentScene.createNode("HAnimSite");
HAnimSite778.name = "l_radial_styloid_pt";
HAnimSite778.DEF = "hanim_l_radial_styloid_pt";
HAnimSite778.translation = new SFVec3f(new float[0.1901,0.8645,-0.0415]);
let TouchSensor779 = browser.currentScene.createNode("TouchSensor");
TouchSensor779.description = "HAnimSite l_radial_styloid_pt";
HAnimSite778.children = new MFNode();

HAnimSite778.children[0] = TouchSensor779;

let Shape780 = browser.currentScene.createNode("Shape");
Shape780.USE = "HAnimSiteShape";
HAnimSite778.children[1] = Shape780;

HAnimJoint767.child[3] = HAnimSite778;

let HAnimSite781 = browser.currentScene.createNode("HAnimSite");
HAnimSite781.name = "l_radiale_pt";
HAnimSite781.DEF = "hanim_l_radiale_pt";
HAnimSite781.translation = new SFVec3f(new float[0.2182,1.1212,-0.1167]);
let TouchSensor782 = browser.currentScene.createNode("TouchSensor");
TouchSensor782.description = "HAnimSite l_radiale_pt";
HAnimSite781.children = new MFNode();

HAnimSite781.children[0] = TouchSensor782;

let Shape783 = browser.currentScene.createNode("Shape");
Shape783.USE = "HAnimSiteShape";
HAnimSite781.children[1] = Shape783;

HAnimJoint767.child[4] = HAnimSite781;

let HAnimJoint784 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint784.name = "l_elbow";
HAnimJoint784.DEF = "hanim_l_elbow";
HAnimJoint784.center = new SFVec3f(new float[0.2014,1.1357,-0.0682]);
HAnimJoint784.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint784.llimit = new MFFloat(new float[0,0,0]);
let Shape785 = browser.currentScene.createNode("Shape");
let LineSet786 = browser.currentScene.createNode("LineSet");
LineSet786.vertexCount = new MFInt32(new int[2]);
let Coordinate787 = browser.currentScene.createNode("Coordinate");
Coordinate787.point = new MFVec3f(new float[0.2014,1.1357,-0.0682,0.1984,0.8663,-0.0583]);
LineSet786.coord = Coordinate787;

//from l_elbow to l_radiocarpal
let ColorRGBA788 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA788.USE = "HAnimSegmentLineColorRGBA";
LineSet786.color = ColorRGBA788;

Shape785.geometry = LineSet786;

HAnimJoint784.child = new undefined();

HAnimJoint784.child[0] = Shape785;

let HAnimSite789 = browser.currentScene.createNode("HAnimSite");
HAnimSite789.name = "l_ulnar_styloid_pt";
HAnimSite789.DEF = "hanim_l_ulnar_styloid_pt";
HAnimSite789.translation = new SFVec3f(new float[-0.2142,0.8529,-0.0648]);
let TouchSensor790 = browser.currentScene.createNode("TouchSensor");
TouchSensor790.description = "HAnimSite l_ulnar_styloid_pt";
HAnimSite789.children = new MFNode();

HAnimSite789.children[0] = TouchSensor790;

let Shape791 = browser.currentScene.createNode("Shape");
Shape791.USE = "HAnimSiteShape";
HAnimSite789.children[1] = Shape791;

HAnimJoint784.child[1] = HAnimSite789;

let HAnimJoint792 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint792.name = "l_radiocarpal";
HAnimJoint792.DEF = "hanim_l_radiocarpal";
HAnimJoint792.center = new SFVec3f(new float[0.1984,0.8663,-0.0583]);
HAnimJoint792.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint792.llimit = new MFFloat(new float[0,0,0]);
let Shape793 = browser.currentScene.createNode("Shape");
let LineSet794 = browser.currentScene.createNode("LineSet");
LineSet794.vertexCount = new MFInt32(new int[2]);
let Coordinate795 = browser.currentScene.createNode("Coordinate");
Coordinate795.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0,1,0]);
LineSet794.coord = Coordinate795;

//from l_radiocarpal to l_midcarpal_1
let ColorRGBA796 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA796.USE = "HAnimSegmentLineColorRGBA";
LineSet794.color = ColorRGBA796;

Shape793.geometry = LineSet794;

HAnimJoint792.child = new undefined();

HAnimJoint792.child[0] = Shape793;

let Shape797 = browser.currentScene.createNode("Shape");
let LineSet798 = browser.currentScene.createNode("LineSet");
LineSet798.vertexCount = new MFInt32(new int[2]);
let Coordinate799 = browser.currentScene.createNode("Coordinate");
Coordinate799.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0,1,0]);
LineSet798.coord = Coordinate799;

//from l_radiocarpal to l_midcarpal_2
let ColorRGBA800 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA800.USE = "HAnimSegmentLineColorRGBA";
LineSet798.color = ColorRGBA800;

Shape797.geometry = LineSet798;

HAnimJoint792.child[1] = Shape797;

let Shape801 = browser.currentScene.createNode("Shape");
let LineSet802 = browser.currentScene.createNode("LineSet");
LineSet802.vertexCount = new MFInt32(new int[2]);
let Coordinate803 = browser.currentScene.createNode("Coordinate");
Coordinate803.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0,1,0]);
LineSet802.coord = Coordinate803;

//from l_radiocarpal to l_midcarpal_3
let ColorRGBA804 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA804.USE = "HAnimSegmentLineColorRGBA";
LineSet802.color = ColorRGBA804;

Shape801.geometry = LineSet802;

HAnimJoint792.child[2] = Shape801;

let Shape805 = browser.currentScene.createNode("Shape");
let LineSet806 = browser.currentScene.createNode("LineSet");
LineSet806.vertexCount = new MFInt32(new int[2]);
let Coordinate807 = browser.currentScene.createNode("Coordinate");
Coordinate807.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0,1,0]);
LineSet806.coord = Coordinate807;

//from l_radiocarpal to l_midcarpal_4_5
let ColorRGBA808 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA808.USE = "HAnimSegmentLineColorRGBA";
LineSet806.color = ColorRGBA808;

Shape805.geometry = LineSet806;

HAnimJoint792.child[3] = Shape805;

let HAnimJoint809 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint809.name = "l_midcarpal_1";
HAnimJoint809.DEF = "hanim_l_midcarpal_1";
HAnimJoint809.center = new SFVec3f(new float[0,1,0]);
HAnimJoint809.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint809.llimit = new MFFloat(new float[0,0,0]);
let Shape810 = browser.currentScene.createNode("Shape");
let LineSet811 = browser.currentScene.createNode("LineSet");
LineSet811.vertexCount = new MFInt32(new int[1]);
let Coordinate812 = browser.currentScene.createNode("Coordinate");
Coordinate812.point = new MFVec3f(new float[0.1924,0.8472,-0.0534]);
LineSet811.coord = Coordinate812;

//from l_midcarpal_1 to l_carpometacarpal_1
let ColorRGBA813 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA813.USE = "HAnimSegmentLineColorRGBA";
LineSet811.color = ColorRGBA813;

Shape810.geometry = LineSet811;

HAnimJoint809.child = new undefined();

HAnimJoint809.child[0] = Shape810;

let HAnimJoint814 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint814.name = "l_carpometacarpal_1";
HAnimJoint814.DEF = "hanim_l_carpometacarpal_1";
HAnimJoint814.center = new SFVec3f(new float[0.1924,0.8472,-0.0534]);
HAnimJoint814.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint814.llimit = new MFFloat(new float[0,0,0]);
let Shape815 = browser.currentScene.createNode("Shape");
let LineSet816 = browser.currentScene.createNode("LineSet");
LineSet816.vertexCount = new MFInt32(new int[2]);
let Coordinate817 = browser.currentScene.createNode("Coordinate");
Coordinate817.point = new MFVec3f(new float[0.1924,0.8472,-0.0534,0.1951,0.8226,0.0246]);
LineSet816.coord = Coordinate817;

//from l_carpometacarpal_1 to l_metacarpophalangeal_1
let ColorRGBA818 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA818.USE = "HAnimSegmentLineColorRGBA";
LineSet816.color = ColorRGBA818;

Shape815.geometry = LineSet816;

HAnimJoint814.child = new undefined();

HAnimJoint814.child[0] = Shape815;

let HAnimJoint819 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint819.name = "l_metacarpophalangeal_1";
HAnimJoint819.DEF = "hanim_l_metacarpophalangeal_1";
HAnimJoint819.center = new SFVec3f(new float[0.1951,0.8226,0.0246]);
HAnimJoint819.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint819.llimit = new MFFloat(new float[0,0,0]);
let Shape820 = browser.currentScene.createNode("Shape");
let LineSet821 = browser.currentScene.createNode("LineSet");
LineSet821.vertexCount = new MFInt32(new int[2]);
let Coordinate822 = browser.currentScene.createNode("Coordinate");
Coordinate822.point = new MFVec3f(new float[0.1951,0.8226,0.0246,0.1955,0.8159,0.0464]);
LineSet821.coord = Coordinate822;

//from l_metacarpophalangeal_1 to l_carpal_interphalangeal_1
let ColorRGBA823 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA823.USE = "HAnimSegmentLineColorRGBA";
LineSet821.color = ColorRGBA823;

Shape820.geometry = LineSet821;

HAnimJoint819.child = new undefined();

HAnimJoint819.child[0] = Shape820;

let HAnimSite824 = browser.currentScene.createNode("HAnimSite");
HAnimSite824.name = "l_carpal_distal_phalanx_1_tip";
HAnimSite824.DEF = "hanim_l_carpal_distal_phalanx_1_tip";
HAnimSite824.translation = new SFVec3f(new float[0,1,0]);
let TouchSensor825 = browser.currentScene.createNode("TouchSensor");
TouchSensor825.description = "HAnimSite l_carpal_distal_phalanx_1_tip";
HAnimSite824.children = new MFNode();

HAnimSite824.children[0] = TouchSensor825;

let Shape826 = browser.currentScene.createNode("Shape");
Shape826.USE = "HAnimSiteShape";
HAnimSite824.children[1] = Shape826;

HAnimJoint819.child[1] = HAnimSite824;

let HAnimJoint827 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint827.name = "l_carpal_interphalangeal_1";
HAnimJoint827.DEF = "hanim_l_carpal_interphalangeal_1";
HAnimJoint827.center = new SFVec3f(new float[0.1955,0.8159,0.0464]);
HAnimJoint827.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint827.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint819.children[2] = HAnimJoint827;

HAnimJoint814.children[1] = HAnimJoint819;

HAnimJoint809.children[1] = HAnimJoint814;

HAnimJoint792.children[4] = HAnimJoint809;

let HAnimJoint828 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint828.name = "l_midcarpal_2";
HAnimJoint828.DEF = "hanim_l_midcarpal_2";
HAnimJoint828.center = new SFVec3f(new float[0,1,0]);
HAnimJoint828.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint828.llimit = new MFFloat(new float[0,0,0]);
let Shape829 = browser.currentScene.createNode("Shape");
let LineSet830 = browser.currentScene.createNode("LineSet");
LineSet830.vertexCount = new MFInt32(new int[1]);
let Coordinate831 = browser.currentScene.createNode("Coordinate");
Coordinate831.point = new MFVec3f(new float[0.1983,0.8024,-0.028]);
LineSet830.coord = Coordinate831;

//from l_midcarpal_2 to l_carpometacarpal_2
let ColorRGBA832 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA832.USE = "HAnimSegmentLineColorRGBA";
LineSet830.color = ColorRGBA832;

Shape829.geometry = LineSet830;

HAnimJoint828.child = new undefined();

HAnimJoint828.child[0] = Shape829;

let HAnimSite833 = browser.currentScene.createNode("HAnimSite");
HAnimSite833.name = "l_metacarpal_phalanx_2_pt";
HAnimSite833.DEF = "hanim_l_metacarpal_phalanx_2_pt";
HAnimSite833.translation = new SFVec3f(new float[0.2009,0.8139,-0.0237]);
let TouchSensor834 = browser.currentScene.createNode("TouchSensor");
TouchSensor834.description = "HAnimSite l_metacarpal_phalanx_2_pt";
HAnimSite833.children = new MFNode();

HAnimSite833.children[0] = TouchSensor834;

let Shape835 = browser.currentScene.createNode("Shape");
Shape835.USE = "HAnimSiteShape";
HAnimSite833.children[1] = Shape835;

HAnimJoint828.child[1] = HAnimSite833;

let HAnimJoint836 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint836.name = "l_carpometacarpal_2";
HAnimJoint836.DEF = "hanim_l_carpometacarpal_2";
HAnimJoint836.center = new SFVec3f(new float[0.1983,0.8024,-0.028]);
HAnimJoint836.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint836.llimit = new MFFloat(new float[0,0,0]);
let Shape837 = browser.currentScene.createNode("Shape");
let LineSet838 = browser.currentScene.createNode("LineSet");
LineSet838.vertexCount = new MFInt32(new int[2]);
let Coordinate839 = browser.currentScene.createNode("Coordinate");
Coordinate839.point = new MFVec3f(new float[0.1983,0.8024,-0.028,0.1983,0.7815,-0.028]);
LineSet838.coord = Coordinate839;

//from l_carpometacarpal_2 to l_metacarpophalangeal_2
let ColorRGBA840 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA840.USE = "HAnimSegmentLineColorRGBA";
LineSet838.color = ColorRGBA840;

Shape837.geometry = LineSet838;

HAnimJoint836.child = new undefined();

HAnimJoint836.child[0] = Shape837;

let HAnimJoint841 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint841.name = "l_metacarpophalangeal_2";
HAnimJoint841.DEF = "hanim_l_metacarpophalangeal_2";
HAnimJoint841.center = new SFVec3f(new float[0.1983,0.7815,-0.028]);
HAnimJoint841.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint841.llimit = new MFFloat(new float[0,0,0]);
let Shape842 = browser.currentScene.createNode("Shape");
let LineSet843 = browser.currentScene.createNode("LineSet");
LineSet843.vertexCount = new MFInt32(new int[2]);
let Coordinate844 = browser.currentScene.createNode("Coordinate");
Coordinate844.point = new MFVec3f(new float[0.1983,0.7815,-0.028,0.2017,0.7363,-0.0248]);
LineSet843.coord = Coordinate844;

//from l_metacarpophalangeal_2 to l_carpal_proximal_interphalangeal_2
let ColorRGBA845 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA845.USE = "HAnimSegmentLineColorRGBA";
LineSet843.color = ColorRGBA845;

Shape842.geometry = LineSet843;

HAnimJoint841.child = new undefined();

HAnimJoint841.child[0] = Shape842;

let HAnimJoint846 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint846.name = "l_carpal_proximal_interphalangeal_2";
HAnimJoint846.DEF = "hanim_l_carpal_proximal_interphalangeal_2";
HAnimJoint846.center = new SFVec3f(new float[0.2017,0.7363,-0.0248]);
HAnimJoint846.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint846.llimit = new MFFloat(new float[0,0,0]);
let Shape847 = browser.currentScene.createNode("Shape");
let LineSet848 = browser.currentScene.createNode("LineSet");
LineSet848.vertexCount = new MFInt32(new int[2]);
let Coordinate849 = browser.currentScene.createNode("Coordinate");
Coordinate849.point = new MFVec3f(new float[0.2017,0.7363,-0.0248,0.2028,0.7139,-0.0236]);
LineSet848.coord = Coordinate849;

//from l_carpal_proximal_interphalangeal_2 to l_carpal_distal_interphalangeal_2
let ColorRGBA850 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA850.USE = "HAnimSegmentLineColorRGBA";
LineSet848.color = ColorRGBA850;

Shape847.geometry = LineSet848;

HAnimJoint846.child = new undefined();

HAnimJoint846.child[0] = Shape847;

let HAnimSite851 = browser.currentScene.createNode("HAnimSite");
HAnimSite851.name = "l_carpal_distal_phalanx_2_tip";
HAnimSite851.DEF = "hanim_l_carpal_distal_phalanx_2_tip";
HAnimSite851.translation = new SFVec3f(new float[0,1,0]);
let TouchSensor852 = browser.currentScene.createNode("TouchSensor");
TouchSensor852.description = "HAnimSite l_carpal_distal_phalanx_2_tip";
HAnimSite851.children = new MFNode();

HAnimSite851.children[0] = TouchSensor852;

let Shape853 = browser.currentScene.createNode("Shape");
Shape853.USE = "HAnimSiteShape";
HAnimSite851.children[1] = Shape853;

HAnimJoint846.child[1] = HAnimSite851;

let HAnimSite854 = browser.currentScene.createNode("HAnimSite");
HAnimSite854.name = "l_dactylion_pt";
HAnimSite854.DEF = "hanim_l_dactylion_pt";
HAnimSite854.translation = new SFVec3f(new float[0.2056,0.6743,-0.0482]);
let TouchSensor855 = browser.currentScene.createNode("TouchSensor");
TouchSensor855.description = "HAnimSite l_dactylion_pt";
HAnimSite854.children = new MFNode();

HAnimSite854.children[0] = TouchSensor855;

let Shape856 = browser.currentScene.createNode("Shape");
Shape856.USE = "HAnimSiteShape";
HAnimSite854.children[1] = Shape856;

HAnimJoint846.child[2] = HAnimSite854;

let HAnimJoint857 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint857.name = "l_carpal_distal_interphalangeal_2";
HAnimJoint857.DEF = "hanim_l_carpal_distal_interphalangeal_2";
HAnimJoint857.center = new SFVec3f(new float[0.2028,0.7139,-0.0236]);
HAnimJoint857.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint857.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint846.children[3] = HAnimJoint857;

HAnimJoint841.children[1] = HAnimJoint846;

HAnimJoint836.children[1] = HAnimJoint841;

HAnimJoint828.children[2] = HAnimJoint836;

HAnimJoint792.children[5] = HAnimJoint828;

let HAnimJoint858 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint858.name = "l_midcarpal_3";
HAnimJoint858.DEF = "hanim_l_midcarpal_3";
HAnimJoint858.center = new SFVec3f(new float[0,1,0]);
HAnimJoint858.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint858.llimit = new MFFloat(new float[0,0,0]);
let Shape859 = browser.currentScene.createNode("Shape");
let LineSet860 = browser.currentScene.createNode("LineSet");
LineSet860.vertexCount = new MFInt32(new int[1]);
let Coordinate861 = browser.currentScene.createNode("Coordinate");
Coordinate861.point = new MFVec3f(new float[0.1987,0.8029,-0.053]);
LineSet860.coord = Coordinate861;

//from l_midcarpal_3 to l_carpometacarpal_3
let ColorRGBA862 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA862.USE = "HAnimSegmentLineColorRGBA";
LineSet860.color = ColorRGBA862;

Shape859.geometry = LineSet860;

HAnimJoint858.child = new undefined();

HAnimJoint858.child[0] = Shape859;

let HAnimSite863 = browser.currentScene.createNode("HAnimSite");
HAnimSite863.name = "l_metacarpal_phalanx_3_pt";
HAnimSite863.DEF = "hanim_l_metacarpal_phalanx_3_pt";
HAnimSite863.translation = new SFVec3f(new float[0,1,0]);
let TouchSensor864 = browser.currentScene.createNode("TouchSensor");
TouchSensor864.description = "HAnimSite l_metacarpal_phalanx_3_pt";
HAnimSite863.children = new MFNode();

HAnimSite863.children[0] = TouchSensor864;

let Shape865 = browser.currentScene.createNode("Shape");
Shape865.USE = "HAnimSiteShape";
HAnimSite863.children[1] = Shape865;

HAnimJoint858.child[1] = HAnimSite863;

let HAnimJoint866 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint866.name = "l_carpometacarpal_3";
HAnimJoint866.DEF = "hanim_l_carpometacarpal_3";
HAnimJoint866.center = new SFVec3f(new float[0.1987,0.8029,-0.053]);
HAnimJoint866.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint866.llimit = new MFFloat(new float[0,0,0]);
let Shape867 = browser.currentScene.createNode("Shape");
let LineSet868 = browser.currentScene.createNode("LineSet");
LineSet868.vertexCount = new MFInt32(new int[2]);
let Coordinate869 = browser.currentScene.createNode("Coordinate");
Coordinate869.point = new MFVec3f(new float[0.1987,0.8029,-0.053,0.1987,0.7818,-0.053]);
LineSet868.coord = Coordinate869;

//from l_carpometacarpal_3 to l_metacarpophalangeal_3
let ColorRGBA870 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA870.USE = "HAnimSegmentLineColorRGBA";
LineSet868.color = ColorRGBA870;

Shape867.geometry = LineSet868;

HAnimJoint866.child = new undefined();

HAnimJoint866.child[0] = Shape867;

let HAnimJoint871 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint871.name = "l_metacarpophalangeal_3";
HAnimJoint871.DEF = "hanim_l_metacarpophalangeal_3";
HAnimJoint871.center = new SFVec3f(new float[0.1987,0.7818,-0.053]);
HAnimJoint871.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint871.llimit = new MFFloat(new float[0,0,0]);
let Shape872 = browser.currentScene.createNode("Shape");
let LineSet873 = browser.currentScene.createNode("LineSet");
LineSet873.vertexCount = new MFInt32(new int[2]);
let Coordinate874 = browser.currentScene.createNode("Coordinate");
Coordinate874.point = new MFVec3f(new float[0.1987,0.7818,-0.053,0.2013,0.7273,-0.0503]);
LineSet873.coord = Coordinate874;

//from l_metacarpophalangeal_3 to l_carpal_proximal_interphalangeal_3
let ColorRGBA875 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA875.USE = "HAnimSegmentLineColorRGBA";
LineSet873.color = ColorRGBA875;

Shape872.geometry = LineSet873;

HAnimJoint871.child = new undefined();

HAnimJoint871.child[0] = Shape872;

let HAnimJoint876 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint876.name = "l_carpal_proximal_interphalangeal_3";
HAnimJoint876.DEF = "hanim_l_carpal_proximal_interphalangeal_3";
HAnimJoint876.center = new SFVec3f(new float[0.2013,0.7273,-0.0503]);
HAnimJoint876.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint876.llimit = new MFFloat(new float[0,0,0]);
let Shape877 = browser.currentScene.createNode("Shape");
let LineSet878 = browser.currentScene.createNode("LineSet");
LineSet878.vertexCount = new MFInt32(new int[2]);
let Coordinate879 = browser.currentScene.createNode("Coordinate");
Coordinate879.point = new MFVec3f(new float[0.2013,0.7273,-0.0503,0.2026,0.7011,-0.0494]);
LineSet878.coord = Coordinate879;

//from l_carpal_proximal_interphalangeal_3 to l_carpal_distal_interphalangeal_3
let ColorRGBA880 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA880.USE = "HAnimSegmentLineColorRGBA";
LineSet878.color = ColorRGBA880;

Shape877.geometry = LineSet878;

HAnimJoint876.child = new undefined();

HAnimJoint876.child[0] = Shape877;

let HAnimSite881 = browser.currentScene.createNode("HAnimSite");
HAnimSite881.name = "l_carpal_distal_phalanx_3_tip";
HAnimSite881.DEF = "hanim_l_carpal_distal_phalanx_3_tip";
HAnimSite881.translation = new SFVec3f(new float[0,1,0]);
let TouchSensor882 = browser.currentScene.createNode("TouchSensor");
TouchSensor882.description = "HAnimSite l_carpal_distal_phalanx_3_tip";
HAnimSite881.children = new MFNode();

HAnimSite881.children[0] = TouchSensor882;

let Shape883 = browser.currentScene.createNode("Shape");
Shape883.USE = "HAnimSiteShape";
HAnimSite881.children[1] = Shape883;

HAnimJoint876.child[1] = HAnimSite881;

let HAnimJoint884 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint884.name = "l_carpal_distal_interphalangeal_3";
HAnimJoint884.DEF = "hanim_l_carpal_distal_interphalangeal_3";
HAnimJoint884.center = new SFVec3f(new float[0.2026,0.7011,-0.0494]);
HAnimJoint884.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint884.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint876.children[2] = HAnimJoint884;

HAnimJoint871.children[1] = HAnimJoint876;

HAnimJoint866.children[1] = HAnimJoint871;

HAnimJoint858.children[2] = HAnimJoint866;

HAnimJoint792.children[6] = HAnimJoint858;

let HAnimJoint885 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint885.name = "l_midcarpal_4_5";
HAnimJoint885.DEF = "hanim_l_midcarpal_4_5";
HAnimJoint885.center = new SFVec3f(new float[0,1,0]);
HAnimJoint885.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint885.llimit = new MFFloat(new float[0,0,0]);
let Shape886 = browser.currentScene.createNode("Shape");
let LineSet887 = browser.currentScene.createNode("LineSet");
LineSet887.vertexCount = new MFInt32(new int[1]);
let Coordinate888 = browser.currentScene.createNode("Coordinate");
Coordinate888.point = new MFVec3f(new float[0.1956,0.8019,-0.0794]);
LineSet887.coord = Coordinate888;

//from l_midcarpal_4_5 to l_carpometacarpal_4
let ColorRGBA889 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA889.USE = "HAnimSegmentLineColorRGBA";
LineSet887.color = ColorRGBA889;

Shape886.geometry = LineSet887;

HAnimJoint885.child = new undefined();

HAnimJoint885.child[0] = Shape886;

let Shape890 = browser.currentScene.createNode("Shape");
let LineSet891 = browser.currentScene.createNode("LineSet");
LineSet891.vertexCount = new MFInt32(new int[1]);
let Coordinate892 = browser.currentScene.createNode("Coordinate");
Coordinate892.point = new MFVec3f(new float[0.1925,0.8066,-0.1036]);
LineSet891.coord = Coordinate892;

//from l_midcarpal_4_5 to l_carpometacarpal_5
let ColorRGBA893 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA893.USE = "HAnimSegmentLineColorRGBA";
LineSet891.color = ColorRGBA893;

Shape890.geometry = LineSet891;

HAnimJoint885.child[1] = Shape890;

let HAnimSite894 = browser.currentScene.createNode("HAnimSite");
HAnimSite894.name = "l_metacarpal_phalanx_5_pt";
HAnimSite894.DEF = "hanim_l_metacarpal_phalanx_5_pt";
HAnimSite894.translation = new SFVec3f(new float[0.1929,0.786,-0.1122]);
let TouchSensor895 = browser.currentScene.createNode("TouchSensor");
TouchSensor895.description = "HAnimSite l_metacarpal_phalanx_5_pt";
HAnimSite894.children = new MFNode();

HAnimSite894.children[0] = TouchSensor895;

let Shape896 = browser.currentScene.createNode("Shape");
Shape896.USE = "HAnimSiteShape";
HAnimSite894.children[1] = Shape896;

HAnimJoint885.child[2] = HAnimSite894;

let HAnimJoint897 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint897.name = "l_carpometacarpal_4";
HAnimJoint897.DEF = "hanim_l_carpometacarpal_4";
HAnimJoint897.center = new SFVec3f(new float[0.1956,0.8019,-0.0794]);
HAnimJoint897.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint897.llimit = new MFFloat(new float[0,0,0]);
let Shape898 = browser.currentScene.createNode("Shape");
let LineSet899 = browser.currentScene.createNode("LineSet");
LineSet899.vertexCount = new MFInt32(new int[2]);
let Coordinate900 = browser.currentScene.createNode("Coordinate");
Coordinate900.point = new MFVec3f(new float[0.1956,0.8019,-0.0794,0.1956,0.7815,-0.0794]);
LineSet899.coord = Coordinate900;

//from l_carpometacarpal_4 to l_metacarpophalangeal_4
let ColorRGBA901 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA901.USE = "HAnimSegmentLineColorRGBA";
LineSet899.color = ColorRGBA901;

Shape898.geometry = LineSet899;

HAnimJoint897.child = new undefined();

HAnimJoint897.child[0] = Shape898;

let HAnimJoint902 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint902.name = "l_metacarpophalangeal_4";
HAnimJoint902.DEF = "hanim_l_metacarpophalangeal_4";
HAnimJoint902.center = new SFVec3f(new float[0.1956,0.7815,-0.0794]);
HAnimJoint902.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint902.llimit = new MFFloat(new float[0,0,0]);
let Shape903 = browser.currentScene.createNode("Shape");
let LineSet904 = browser.currentScene.createNode("LineSet");
LineSet904.vertexCount = new MFInt32(new int[2]);
let Coordinate905 = browser.currentScene.createNode("Coordinate");
Coordinate905.point = new MFVec3f(new float[0.1956,0.7815,-0.0794,0.1973,0.7287,-0.0777]);
LineSet904.coord = Coordinate905;

//from l_metacarpophalangeal_4 to l_carpal_proximal_interphalangeal_4
let ColorRGBA906 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA906.USE = "HAnimSegmentLineColorRGBA";
LineSet904.color = ColorRGBA906;

Shape903.geometry = LineSet904;

HAnimJoint902.child = new undefined();

HAnimJoint902.child[0] = Shape903;

let HAnimJoint907 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint907.name = "l_carpal_proximal_interphalangeal_4";
HAnimJoint907.DEF = "hanim_l_carpal_proximal_interphalangeal_4";
HAnimJoint907.center = new SFVec3f(new float[0.1973,0.7287,-0.0777]);
HAnimJoint907.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint907.llimit = new MFFloat(new float[0,0,0]);
let Shape908 = browser.currentScene.createNode("Shape");
let LineSet909 = browser.currentScene.createNode("LineSet");
LineSet909.vertexCount = new MFInt32(new int[2]);
let Coordinate910 = browser.currentScene.createNode("Coordinate");
Coordinate910.point = new MFVec3f(new float[0.1973,0.7287,-0.0777,0.1983,0.7045,-0.0767]);
LineSet909.coord = Coordinate910;

//from l_carpal_proximal_interphalangeal_4 to l_carpal_distal_interphalangeal_4
let ColorRGBA911 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA911.USE = "HAnimSegmentLineColorRGBA";
LineSet909.color = ColorRGBA911;

Shape908.geometry = LineSet909;

HAnimJoint907.child = new undefined();

HAnimJoint907.child[0] = Shape908;

let HAnimSite912 = browser.currentScene.createNode("HAnimSite");
HAnimSite912.name = "l_carpal_distal_phalanx_4_tip";
HAnimSite912.DEF = "hanim_l_carpal_distal_phalanx_4_tip";
HAnimSite912.translation = new SFVec3f(new float[0,1,0]);
let TouchSensor913 = browser.currentScene.createNode("TouchSensor");
TouchSensor913.description = "HAnimSite l_carpal_distal_phalanx_4_tip";
HAnimSite912.children = new MFNode();

HAnimSite912.children[0] = TouchSensor913;

let Shape914 = browser.currentScene.createNode("Shape");
Shape914.USE = "HAnimSiteShape";
HAnimSite912.children[1] = Shape914;

HAnimJoint907.child[1] = HAnimSite912;

let HAnimJoint915 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint915.name = "l_carpal_distal_interphalangeal_4";
HAnimJoint915.DEF = "hanim_l_carpal_distal_interphalangeal_4";
HAnimJoint915.center = new SFVec3f(new float[0.1983,0.7045,-0.0767]);
HAnimJoint915.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint915.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint907.children[2] = HAnimJoint915;

HAnimJoint902.children[1] = HAnimJoint907;

HAnimJoint897.children[1] = HAnimJoint902;

HAnimJoint885.children[3] = HAnimJoint897;

let HAnimJoint916 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint916.name = "l_carpometacarpal_5";
HAnimJoint916.DEF = "hanim_l_carpometacarpal_5";
HAnimJoint916.center = new SFVec3f(new float[0.1925,0.8066,-0.1036]);
HAnimJoint916.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint916.llimit = new MFFloat(new float[0,0,0]);
let Shape917 = browser.currentScene.createNode("Shape");
let LineSet918 = browser.currentScene.createNode("LineSet");
LineSet918.vertexCount = new MFInt32(new int[2]);
let Coordinate919 = browser.currentScene.createNode("Coordinate");
Coordinate919.point = new MFVec3f(new float[0.1925,0.8066,-0.1036,0.1925,0.7866,-0.1036]);
LineSet918.coord = Coordinate919;

//from l_carpometacarpal_5 to l_metacarpophalangeal_5
let ColorRGBA920 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA920.USE = "HAnimSegmentLineColorRGBA";
LineSet918.color = ColorRGBA920;

Shape917.geometry = LineSet918;

HAnimJoint916.child = new undefined();

HAnimJoint916.child[0] = Shape917;

let HAnimJoint921 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint921.name = "l_metacarpophalangeal_5";
HAnimJoint921.DEF = "hanim_l_metacarpophalangeal_5";
HAnimJoint921.center = new SFVec3f(new float[0.1925,0.7866,-0.1036]);
HAnimJoint921.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint921.llimit = new MFFloat(new float[0,0,0]);
let Shape922 = browser.currentScene.createNode("Shape");
let LineSet923 = browser.currentScene.createNode("LineSet");
LineSet923.vertexCount = new MFInt32(new int[2]);
let Coordinate924 = browser.currentScene.createNode("Coordinate");
Coordinate924.point = new MFVec3f(new float[0.1925,0.7866,-0.1036,0.1938,0.7452,-0.1024]);
LineSet923.coord = Coordinate924;

//from l_metacarpophalangeal_5 to l_carpal_proximal_interphalangeal_5
let ColorRGBA925 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA925.USE = "HAnimSegmentLineColorRGBA";
LineSet923.color = ColorRGBA925;

Shape922.geometry = LineSet923;

HAnimJoint921.child = new undefined();

HAnimJoint921.child[0] = Shape922;

let HAnimJoint926 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint926.name = "l_carpal_proximal_interphalangeal_5";
HAnimJoint926.DEF = "hanim_l_carpal_proximal_interphalangeal_5";
HAnimJoint926.center = new SFVec3f(new float[0.1938,0.7452,-0.1024]);
HAnimJoint926.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint926.llimit = new MFFloat(new float[0,0,0]);
let Shape927 = browser.currentScene.createNode("Shape");
let LineSet928 = browser.currentScene.createNode("LineSet");
LineSet928.vertexCount = new MFInt32(new int[2]);
let Coordinate929 = browser.currentScene.createNode("Coordinate");
Coordinate929.point = new MFVec3f(new float[0.1938,0.7452,-0.1024,0.1948,0.7277,-0.1017]);
LineSet928.coord = Coordinate929;

//from l_carpal_proximal_interphalangeal_5 to l_carpal_distal_interphalangeal_5
let ColorRGBA930 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA930.USE = "HAnimSegmentLineColorRGBA";
LineSet928.color = ColorRGBA930;

Shape927.geometry = LineSet928;

HAnimJoint926.child = new undefined();

HAnimJoint926.child[0] = Shape927;

let HAnimSite931 = browser.currentScene.createNode("HAnimSite");
HAnimSite931.name = "l_carpal_distal_phalanx_5_tip";
HAnimSite931.DEF = "hanim_l_carpal_distal_phalanx_5_tip";
HAnimSite931.translation = new SFVec3f(new float[0,1,0]);
let TouchSensor932 = browser.currentScene.createNode("TouchSensor");
TouchSensor932.description = "HAnimSite l_carpal_distal_phalanx_5_tip";
HAnimSite931.children = new MFNode();

HAnimSite931.children[0] = TouchSensor932;

let Shape933 = browser.currentScene.createNode("Shape");
Shape933.USE = "HAnimSiteShape";
HAnimSite931.children[1] = Shape933;

HAnimJoint926.child[1] = HAnimSite931;

let HAnimJoint934 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint934.name = "l_carpal_distal_interphalangeal_5";
HAnimJoint934.DEF = "hanim_l_carpal_distal_interphalangeal_5";
HAnimJoint934.center = new SFVec3f(new float[0.1948,0.7277,-0.1017]);
HAnimJoint934.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint934.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint926.children[2] = HAnimJoint934;

HAnimJoint921.children[1] = HAnimJoint926;

HAnimJoint916.children[1] = HAnimJoint921;

HAnimJoint885.children[4] = HAnimJoint916;

HAnimJoint792.children[7] = HAnimJoint885;

HAnimJoint784.children[2] = HAnimJoint792;

HAnimJoint767.children[5] = HAnimJoint784;

HAnimJoint756.children[3] = HAnimJoint767;

HAnimJoint751.children[1] = HAnimJoint756;

HAnimJoint583.children[16] = HAnimJoint751;

let HAnimJoint935 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint935.name = "r_sternoclavicular";
HAnimJoint935.DEF = "hanim_r_sternoclavicular";
HAnimJoint935.center = new SFVec3f(new float[-0.0694,1.46,-0.033]);
HAnimJoint935.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint935.llimit = new MFFloat(new float[0,0,0]);
let Shape936 = browser.currentScene.createNode("Shape");
let LineSet937 = browser.currentScene.createNode("LineSet");
LineSet937.vertexCount = new MFInt32(new int[2]);
let Coordinate938 = browser.currentScene.createNode("Coordinate");
Coordinate938.point = new MFVec3f(new float[-0.0694,1.46,-0.033,-0.0836,1.4281,-0.0401]);
LineSet937.coord = Coordinate938;

//from r_sternoclavicular to r_acromioclavicular
let ColorRGBA939 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA939.USE = "HAnimSegmentLineColorRGBA";
LineSet937.color = ColorRGBA939;

Shape936.geometry = LineSet937;

HAnimJoint935.child = new undefined();

HAnimJoint935.child[0] = Shape936;

let HAnimJoint940 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint940.name = "r_acromioclavicular";
HAnimJoint940.DEF = "hanim_r_acromioclavicular";
HAnimJoint940.center = new SFVec3f(new float[-0.0836,1.4281,-0.0401]);
HAnimJoint940.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint940.llimit = new MFFloat(new float[0,0,0]);
let Shape941 = browser.currentScene.createNode("Shape");
let LineSet942 = browser.currentScene.createNode("LineSet");
LineSet942.vertexCount = new MFInt32(new int[2]);
let Coordinate943 = browser.currentScene.createNode("Coordinate");
Coordinate943.point = new MFVec3f(new float[-0.0836,1.4281,-0.0401,-0.1907,1.4407,-0.0325]);
LineSet942.coord = Coordinate943;

//from r_acromioclavicular to r_shoulder
let ColorRGBA944 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA944.USE = "HAnimSegmentLineColorRGBA";
LineSet942.color = ColorRGBA944;

Shape941.geometry = LineSet942;

HAnimJoint940.child = new undefined();

HAnimJoint940.child[0] = Shape941;

let HAnimSite945 = browser.currentScene.createNode("HAnimSite");
HAnimSite945.name = "r_bideltoid_pt";
HAnimSite945.DEF = "hanim_r_bideltoid_pt";
HAnimSite945.translation = new SFVec3f(new float[0,1,0]);
let TouchSensor946 = browser.currentScene.createNode("TouchSensor");
TouchSensor946.description = "HAnimSite r_bideltoid_pt";
HAnimSite945.children = new MFNode();

HAnimSite945.children[0] = TouchSensor946;

let Shape947 = browser.currentScene.createNode("Shape");
Shape947.USE = "HAnimSiteShape";
HAnimSite945.children[1] = Shape947;

HAnimJoint940.child[1] = HAnimSite945;

let HAnimSite948 = browser.currentScene.createNode("HAnimSite");
HAnimSite948.name = "r_humeral_lateral_epicondyles_pt";
HAnimSite948.DEF = "hanim_r_humeral_lateral_epicondyles_pt";
HAnimSite948.translation = new SFVec3f(new float[-0.2224,1.1517,-0.1033]);
let TouchSensor949 = browser.currentScene.createNode("TouchSensor");
TouchSensor949.description = "HAnimSite r_humeral_lateral_epicondyles_pt";
HAnimSite948.children = new MFNode();

HAnimSite948.children[0] = TouchSensor949;

let Shape950 = browser.currentScene.createNode("Shape");
Shape950.USE = "HAnimSiteShape";
HAnimSite948.children[1] = Shape950;

HAnimJoint940.child[2] = HAnimSite948;

let HAnimJoint951 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint951.name = "r_shoulder";
HAnimJoint951.DEF = "hanim_r_shoulder";
HAnimJoint951.center = new SFVec3f(new float[-0.1907,1.4407,-0.0325]);
HAnimJoint951.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint951.llimit = new MFFloat(new float[0,0,0]);
let Shape952 = browser.currentScene.createNode("Shape");
let LineSet953 = browser.currentScene.createNode("LineSet");
LineSet953.vertexCount = new MFInt32(new int[2]);
let Coordinate954 = browser.currentScene.createNode("Coordinate");
Coordinate954.point = new MFVec3f(new float[-0.1907,1.4407,-0.0325,-0.1949,1.1388,-0.062]);
LineSet953.coord = Coordinate954;

//from r_shoulder to r_elbow
let ColorRGBA955 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA955.USE = "HAnimSegmentLineColorRGBA";
LineSet953.color = ColorRGBA955;

Shape952.geometry = LineSet953;

HAnimJoint951.child = new undefined();

HAnimJoint951.child[0] = Shape952;

let HAnimSite956 = browser.currentScene.createNode("HAnimSite");
HAnimSite956.name = "r_humeral_medial_epicondyles_pt";
HAnimSite956.DEF = "hanim_r_humeral_medial_epicondyles_pt";
HAnimSite956.translation = new SFVec3f(new float[-0.168,1.1298,-0.1062]);
let TouchSensor957 = browser.currentScene.createNode("TouchSensor");
TouchSensor957.description = "HAnimSite r_humeral_medial_epicondyles_pt";
HAnimSite956.children = new MFNode();

HAnimSite956.children[0] = TouchSensor957;

let Shape958 = browser.currentScene.createNode("Shape");
Shape958.USE = "HAnimSiteShape";
HAnimSite956.children[1] = Shape958;

HAnimJoint951.child[1] = HAnimSite956;

let HAnimSite959 = browser.currentScene.createNode("HAnimSite");
HAnimSite959.name = "r_olecranon_pt";
HAnimSite959.DEF = "hanim_r_olecranon_pt";
HAnimSite959.translation = new SFVec3f(new float[-0.1907,1.1405,-0.1065]);
let TouchSensor960 = browser.currentScene.createNode("TouchSensor");
TouchSensor960.description = "HAnimSite r_olecranon_pt";
HAnimSite959.children = new MFNode();

HAnimSite959.children[0] = TouchSensor960;

let Shape961 = browser.currentScene.createNode("Shape");
Shape961.USE = "HAnimSiteShape";
HAnimSite959.children[1] = Shape961;

HAnimJoint951.child[2] = HAnimSite959;

let HAnimSite962 = browser.currentScene.createNode("HAnimSite");
HAnimSite962.name = "r_radial_styloid_pt";
HAnimSite962.DEF = "hanim_r_radial_styloid_pt";
HAnimSite962.translation = new SFVec3f(new float[-0.1884,0.8676,-0.036]);
let TouchSensor963 = browser.currentScene.createNode("TouchSensor");
TouchSensor963.description = "HAnimSite r_radial_styloid_pt";
HAnimSite962.children = new MFNode();

HAnimSite962.children[0] = TouchSensor963;

let Shape964 = browser.currentScene.createNode("Shape");
Shape964.USE = "HAnimSiteShape";
HAnimSite962.children[1] = Shape964;

HAnimJoint951.child[3] = HAnimSite962;

let HAnimSite965 = browser.currentScene.createNode("HAnimSite");
HAnimSite965.name = "r_radiale_pt";
HAnimSite965.DEF = "hanim_r_radiale_pt";
HAnimSite965.translation = new SFVec3f(new float[-0.213,1.1305,-0.1091]);
let TouchSensor966 = browser.currentScene.createNode("TouchSensor");
TouchSensor966.description = "HAnimSite r_radiale_pt";
HAnimSite965.children = new MFNode();

HAnimSite965.children[0] = TouchSensor966;

let Shape967 = browser.currentScene.createNode("Shape");
Shape967.USE = "HAnimSiteShape";
HAnimSite965.children[1] = Shape967;

HAnimJoint951.child[4] = HAnimSite965;

let HAnimJoint968 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint968.name = "r_elbow";
HAnimJoint968.DEF = "hanim_r_elbow";
HAnimJoint968.center = new SFVec3f(new float[-0.1949,1.1388,-0.062]);
HAnimJoint968.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint968.llimit = new MFFloat(new float[0,0,0]);
let Shape969 = browser.currentScene.createNode("Shape");
let LineSet970 = browser.currentScene.createNode("LineSet");
LineSet970.vertexCount = new MFInt32(new int[2]);
let Coordinate971 = browser.currentScene.createNode("Coordinate");
Coordinate971.point = new MFVec3f(new float[-0.1949,1.1388,-0.062,-0.1959,0.8694,-0.0521]);
LineSet970.coord = Coordinate971;

//from r_elbow to r_radiocarpal
let ColorRGBA972 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA972.USE = "HAnimSegmentLineColorRGBA";
LineSet970.color = ColorRGBA972;

Shape969.geometry = LineSet970;

HAnimJoint968.child = new undefined();

HAnimJoint968.child[0] = Shape969;

let HAnimSite973 = browser.currentScene.createNode("HAnimSite");
HAnimSite973.name = "r_ulnar_styloid_pt";
HAnimSite973.DEF = "hanim_r_ulnar_styloid_pt";
HAnimSite973.translation = new SFVec3f(new float[-0.2117,0.8562,-0.0584]);
let TouchSensor974 = browser.currentScene.createNode("TouchSensor");
TouchSensor974.description = "HAnimSite r_ulnar_styloid_pt";
HAnimSite973.children = new MFNode();

HAnimSite973.children[0] = TouchSensor974;

let Shape975 = browser.currentScene.createNode("Shape");
Shape975.USE = "HAnimSiteShape";
HAnimSite973.children[1] = Shape975;

HAnimJoint968.child[1] = HAnimSite973;

let HAnimJoint976 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint976.name = "r_radiocarpal";
HAnimJoint976.DEF = "hanim_r_radiocarpal";
HAnimJoint976.center = new SFVec3f(new float[-0.1959,0.8694,-0.0521]);
HAnimJoint976.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint976.llimit = new MFFloat(new float[0,0,0]);
let Shape977 = browser.currentScene.createNode("Shape");
let LineSet978 = browser.currentScene.createNode("LineSet");
LineSet978.vertexCount = new MFInt32(new int[2]);
let Coordinate979 = browser.currentScene.createNode("Coordinate");
Coordinate979.point = new MFVec3f(new float[-0.1959,0.8694,-0.0521,0,1,0]);
LineSet978.coord = Coordinate979;

//from r_radiocarpal to r_midcarpal_1
let ColorRGBA980 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA980.USE = "HAnimSegmentLineColorRGBA";
LineSet978.color = ColorRGBA980;

Shape977.geometry = LineSet978;

HAnimJoint976.child = new undefined();

HAnimJoint976.child[0] = Shape977;

let Shape981 = browser.currentScene.createNode("Shape");
let LineSet982 = browser.currentScene.createNode("LineSet");
LineSet982.vertexCount = new MFInt32(new int[2]);
let Coordinate983 = browser.currentScene.createNode("Coordinate");
Coordinate983.point = new MFVec3f(new float[-0.1959,0.8694,-0.0521,0,1,0]);
LineSet982.coord = Coordinate983;

//from r_radiocarpal to r_midcarpal_2
let ColorRGBA984 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA984.USE = "HAnimSegmentLineColorRGBA";
LineSet982.color = ColorRGBA984;

Shape981.geometry = LineSet982;

HAnimJoint976.child[1] = Shape981;

let Shape985 = browser.currentScene.createNode("Shape");
let LineSet986 = browser.currentScene.createNode("LineSet");
LineSet986.vertexCount = new MFInt32(new int[2]);
let Coordinate987 = browser.currentScene.createNode("Coordinate");
Coordinate987.point = new MFVec3f(new float[-0.1959,0.8694,-0.0521,0,1,0]);
LineSet986.coord = Coordinate987;

//from r_radiocarpal to r_midcarpal_3
let ColorRGBA988 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA988.USE = "HAnimSegmentLineColorRGBA";
LineSet986.color = ColorRGBA988;

Shape985.geometry = LineSet986;

HAnimJoint976.child[2] = Shape985;

let Shape989 = browser.currentScene.createNode("Shape");
let LineSet990 = browser.currentScene.createNode("LineSet");
LineSet990.vertexCount = new MFInt32(new int[2]);
let Coordinate991 = browser.currentScene.createNode("Coordinate");
Coordinate991.point = new MFVec3f(new float[-0.1959,0.8694,-0.0521,0,1,0]);
LineSet990.coord = Coordinate991;

//from r_radiocarpal to r_midcarpal_4_5
let ColorRGBA992 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA992.USE = "HAnimSegmentLineColorRGBA";
LineSet990.color = ColorRGBA992;

Shape989.geometry = LineSet990;

HAnimJoint976.child[3] = Shape989;

let HAnimJoint993 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint993.name = "r_midcarpal_1";
HAnimJoint993.DEF = "hanim_r_midcarpal_1";
HAnimJoint993.center = new SFVec3f(new float[0,1,0]);
HAnimJoint993.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint993.llimit = new MFFloat(new float[0,0,0]);
let Shape994 = browser.currentScene.createNode("Shape");
let LineSet995 = browser.currentScene.createNode("LineSet");
LineSet995.vertexCount = new MFInt32(new int[1]);
let Coordinate996 = browser.currentScene.createNode("Coordinate");
Coordinate996.point = new MFVec3f(new float[-0.1899,0.8502,-0.0473]);
LineSet995.coord = Coordinate996;

//from r_midcarpal_1 to r_carpometacarpal_1
let ColorRGBA997 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA997.USE = "HAnimSegmentLineColorRGBA";
LineSet995.color = ColorRGBA997;

Shape994.geometry = LineSet995;

HAnimJoint993.child = new undefined();

HAnimJoint993.child[0] = Shape994;

let HAnimJoint998 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint998.name = "r_carpometacarpal_1";
HAnimJoint998.DEF = "hanim_r_carpometacarpal_1";
HAnimJoint998.center = new SFVec3f(new float[-0.1899,0.8502,-0.0473]);
HAnimJoint998.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint998.llimit = new MFFloat(new float[0,0,0]);
let Shape999 = browser.currentScene.createNode("Shape");
let LineSet1000 = browser.currentScene.createNode("LineSet");
LineSet1000.vertexCount = new MFInt32(new int[2]);
let Coordinate1001 = browser.currentScene.createNode("Coordinate");
Coordinate1001.point = new MFVec3f(new float[-0.1899,0.8502,-0.0473,-0.1874,0.8256,0.0306]);
LineSet1000.coord = Coordinate1001;

//from r_carpometacarpal_1 to r_metacarpophalangeal_1
let ColorRGBA1002 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1002.USE = "HAnimSegmentLineColorRGBA";
LineSet1000.color = ColorRGBA1002;

Shape999.geometry = LineSet1000;

HAnimJoint998.child = new undefined();

HAnimJoint998.child[0] = Shape999;

let HAnimJoint1003 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1003.name = "r_metacarpophalangeal_1";
HAnimJoint1003.DEF = "hanim_r_metacarpophalangeal_1";
HAnimJoint1003.center = new SFVec3f(new float[-0.1874,0.8256,0.0306]);
HAnimJoint1003.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1003.llimit = new MFFloat(new float[0,0,0]);
let Shape1004 = browser.currentScene.createNode("Shape");
let LineSet1005 = browser.currentScene.createNode("LineSet");
LineSet1005.vertexCount = new MFInt32(new int[2]);
let Coordinate1006 = browser.currentScene.createNode("Coordinate");
Coordinate1006.point = new MFVec3f(new float[-0.1874,0.8256,0.0306,-0.1864,0.819,0.0506]);
LineSet1005.coord = Coordinate1006;

//from r_metacarpophalangeal_1 to r_carpal_interphalangeal_1
let ColorRGBA1007 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1007.USE = "HAnimSegmentLineColorRGBA";
LineSet1005.color = ColorRGBA1007;

Shape1004.geometry = LineSet1005;

HAnimJoint1003.child = new undefined();

HAnimJoint1003.child[0] = Shape1004;

let HAnimSite1008 = browser.currentScene.createNode("HAnimSite");
HAnimSite1008.name = "r_carpal_distal_phalanx_1_tip";
HAnimSite1008.DEF = "hanim_r_carpal_distal_phalanx_1_tip";
HAnimSite1008.translation = new SFVec3f(new float[0,1,0]);
let TouchSensor1009 = browser.currentScene.createNode("TouchSensor");
TouchSensor1009.description = "HAnimSite r_carpal_distal_phalanx_1_tip";
HAnimSite1008.children = new MFNode();

HAnimSite1008.children[0] = TouchSensor1009;

let Shape1010 = browser.currentScene.createNode("Shape");
Shape1010.USE = "HAnimSiteShape";
HAnimSite1008.children[1] = Shape1010;

HAnimJoint1003.child[1] = HAnimSite1008;

let HAnimJoint1011 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1011.name = "r_carpal_interphalangeal_1";
HAnimJoint1011.DEF = "hanim_r_carpal_interphalangeal_1";
HAnimJoint1011.center = new SFVec3f(new float[-0.1864,0.819,0.0506]);
HAnimJoint1011.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1011.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1003.children[2] = HAnimJoint1011;

HAnimJoint998.children[1] = HAnimJoint1003;

HAnimJoint993.children[1] = HAnimJoint998;

HAnimJoint976.children[4] = HAnimJoint993;

let HAnimJoint1012 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1012.name = "r_midcarpal_2";
HAnimJoint1012.DEF = "hanim_r_midcarpal_2";
HAnimJoint1012.center = new SFVec3f(new float[0,1,0]);
HAnimJoint1012.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1012.llimit = new MFFloat(new float[0,0,0]);
let Shape1013 = browser.currentScene.createNode("Shape");
let LineSet1014 = browser.currentScene.createNode("LineSet");
LineSet1014.vertexCount = new MFInt32(new int[1]);
let Coordinate1015 = browser.currentScene.createNode("Coordinate");
Coordinate1015.point = new MFVec3f(new float[-0.1961,0.8055,-0.0218]);
LineSet1014.coord = Coordinate1015;

//from r_midcarpal_2 to r_carpometacarpal_2
let ColorRGBA1016 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1016.USE = "HAnimSegmentLineColorRGBA";
LineSet1014.color = ColorRGBA1016;

Shape1013.geometry = LineSet1014;

HAnimJoint1012.child = new undefined();

HAnimJoint1012.child[0] = Shape1013;

let HAnimSite1017 = browser.currentScene.createNode("HAnimSite");
HAnimSite1017.name = "r_metacarpal_phalanx_2_pt";
HAnimSite1017.DEF = "hanim_r_metacarpal_phalanx_2_pt";
HAnimSite1017.translation = new SFVec3f(new float[-0.1977,0.8169,-0.0177]);
let TouchSensor1018 = browser.currentScene.createNode("TouchSensor");
TouchSensor1018.description = "HAnimSite r_metacarpal_phalanx_2_pt";
HAnimSite1017.children = new MFNode();

HAnimSite1017.children[0] = TouchSensor1018;

let Shape1019 = browser.currentScene.createNode("Shape");
Shape1019.USE = "HAnimSiteShape";
HAnimSite1017.children[1] = Shape1019;

HAnimJoint1012.child[1] = HAnimSite1017;

let HAnimJoint1020 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1020.name = "r_carpometacarpal_2";
HAnimJoint1020.DEF = "hanim_r_carpometacarpal_2";
HAnimJoint1020.center = new SFVec3f(new float[-0.1961,0.8055,-0.0218]);
HAnimJoint1020.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1020.llimit = new MFFloat(new float[0,0,0]);
let Shape1021 = browser.currentScene.createNode("Shape");
let LineSet1022 = browser.currentScene.createNode("LineSet");
LineSet1022.vertexCount = new MFInt32(new int[2]);
let Coordinate1023 = browser.currentScene.createNode("Coordinate");
Coordinate1023.point = new MFVec3f(new float[-0.1961,0.8055,-0.0218,-0.1961,0.7846,-0.0218]);
LineSet1022.coord = Coordinate1023;

//from r_carpometacarpal_2 to r_metacarpophalangeal_2
let ColorRGBA1024 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1024.USE = "HAnimSegmentLineColorRGBA";
LineSet1022.color = ColorRGBA1024;

Shape1021.geometry = LineSet1022;

HAnimJoint1020.child = new undefined();

HAnimJoint1020.child[0] = Shape1021;

let HAnimJoint1025 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1025.name = "r_metacarpophalangeal_2";
HAnimJoint1025.DEF = "hanim_r_metacarpophalangeal_2";
HAnimJoint1025.center = new SFVec3f(new float[-0.1961,0.7846,-0.0218]);
HAnimJoint1025.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1025.llimit = new MFFloat(new float[0,0,0]);
let Shape1026 = browser.currentScene.createNode("Shape");
let LineSet1027 = browser.currentScene.createNode("LineSet");
LineSet1027.vertexCount = new MFInt32(new int[2]);
let Coordinate1028 = browser.currentScene.createNode("Coordinate");
Coordinate1028.point = new MFVec3f(new float[-0.1961,0.7846,-0.0218,-0.1954,0.7393,-0.0185]);
LineSet1027.coord = Coordinate1028;

//from r_metacarpophalangeal_2 to r_carpal_proximal_interphalangeal_2
let ColorRGBA1029 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1029.USE = "HAnimSegmentLineColorRGBA";
LineSet1027.color = ColorRGBA1029;

Shape1026.geometry = LineSet1027;

HAnimJoint1025.child = new undefined();

HAnimJoint1025.child[0] = Shape1026;

let HAnimJoint1030 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1030.name = "r_carpal_proximal_interphalangeal_2";
HAnimJoint1030.DEF = "hanim_r_carpal_proximal_interphalangeal_2";
HAnimJoint1030.center = new SFVec3f(new float[-0.1954,0.7393,-0.0185]);
HAnimJoint1030.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1030.llimit = new MFFloat(new float[0,0,0]);
let Shape1031 = browser.currentScene.createNode("Shape");
let LineSet1032 = browser.currentScene.createNode("LineSet");
LineSet1032.vertexCount = new MFInt32(new int[2]);
let Coordinate1033 = browser.currentScene.createNode("Coordinate");
Coordinate1033.point = new MFVec3f(new float[-0.1954,0.7393,-0.0185,-0.1945,0.7169,-0.0173]);
LineSet1032.coord = Coordinate1033;

//from r_carpal_proximal_interphalangeal_2 to r_carpal_distal_interphalangeal_2
let ColorRGBA1034 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1034.USE = "HAnimSegmentLineColorRGBA";
LineSet1032.color = ColorRGBA1034;

Shape1031.geometry = LineSet1032;

HAnimJoint1030.child = new undefined();

HAnimJoint1030.child[0] = Shape1031;

let HAnimSite1035 = browser.currentScene.createNode("HAnimSite");
HAnimSite1035.name = "r_carpal_distal_phalanx_2_tip";
HAnimSite1035.DEF = "hanim_r_carpal_distal_phalanx_2_tip";
HAnimSite1035.translation = new SFVec3f(new float[0,1,0]);
let TouchSensor1036 = browser.currentScene.createNode("TouchSensor");
TouchSensor1036.description = "HAnimSite r_carpal_distal_phalanx_2_tip";
HAnimSite1035.children = new MFNode();

HAnimSite1035.children[0] = TouchSensor1036;

let Shape1037 = browser.currentScene.createNode("Shape");
Shape1037.USE = "HAnimSiteShape";
HAnimSite1035.children[1] = Shape1037;

HAnimJoint1030.child[1] = HAnimSite1035;

let HAnimSite1038 = browser.currentScene.createNode("HAnimSite");
HAnimSite1038.name = "r_dactylion_pt";
HAnimSite1038.DEF = "hanim_r_dactylion_pt";
HAnimSite1038.translation = new SFVec3f(new float[-0.1941,0.6772,-0.0423]);
let TouchSensor1039 = browser.currentScene.createNode("TouchSensor");
TouchSensor1039.description = "HAnimSite r_dactylion_pt";
HAnimSite1038.children = new MFNode();

HAnimSite1038.children[0] = TouchSensor1039;

let Shape1040 = browser.currentScene.createNode("Shape");
Shape1040.USE = "HAnimSiteShape";
HAnimSite1038.children[1] = Shape1040;

HAnimJoint1030.child[2] = HAnimSite1038;

let HAnimJoint1041 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1041.name = "r_carpal_distal_interphalangeal_2";
HAnimJoint1041.DEF = "hanim_r_carpal_distal_interphalangeal_2";
HAnimJoint1041.center = new SFVec3f(new float[-0.1945,0.7169,-0.0173]);
HAnimJoint1041.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1041.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1030.children[3] = HAnimJoint1041;

HAnimJoint1025.children[1] = HAnimJoint1030;

HAnimJoint1020.children[1] = HAnimJoint1025;

HAnimJoint1012.children[2] = HAnimJoint1020;

HAnimJoint976.children[5] = HAnimJoint1012;

let HAnimJoint1042 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1042.name = "r_midcarpal_3";
HAnimJoint1042.DEF = "hanim_r_midcarpal_3";
HAnimJoint1042.center = new SFVec3f(new float[0,1,0]);
HAnimJoint1042.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1042.llimit = new MFFloat(new float[0,0,0]);
let Shape1043 = browser.currentScene.createNode("Shape");
let LineSet1044 = browser.currentScene.createNode("LineSet");
LineSet1044.vertexCount = new MFInt32(new int[1]);
let Coordinate1045 = browser.currentScene.createNode("Coordinate");
Coordinate1045.point = new MFVec3f(new float[-0.1972,0.806,-0.0468]);
LineSet1044.coord = Coordinate1045;

//from r_midcarpal_3 to r_carpometacarpal_3
let ColorRGBA1046 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1046.USE = "HAnimSegmentLineColorRGBA";
LineSet1044.color = ColorRGBA1046;

Shape1043.geometry = LineSet1044;

HAnimJoint1042.child = new undefined();

HAnimJoint1042.child[0] = Shape1043;

let HAnimSite1047 = browser.currentScene.createNode("HAnimSite");
HAnimSite1047.name = "r_metacarpal_phalanx_3_pt";
HAnimSite1047.DEF = "hanim_r_metacarpal_phalanx_3_pt";
HAnimSite1047.translation = new SFVec3f(new float[0,1,0]);
let TouchSensor1048 = browser.currentScene.createNode("TouchSensor");
TouchSensor1048.description = "HAnimSite r_metacarpal_phalanx_3_pt";
HAnimSite1047.children = new MFNode();

HAnimSite1047.children[0] = TouchSensor1048;

let Shape1049 = browser.currentScene.createNode("Shape");
Shape1049.USE = "HAnimSiteShape";
HAnimSite1047.children[1] = Shape1049;

HAnimJoint1042.child[1] = HAnimSite1047;

let HAnimJoint1050 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1050.name = "r_carpometacarpal_3";
HAnimJoint1050.DEF = "hanim_r_carpometacarpal_3";
HAnimJoint1050.center = new SFVec3f(new float[-0.1972,0.806,-0.0468]);
HAnimJoint1050.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1050.llimit = new MFFloat(new float[0,0,0]);
let Shape1051 = browser.currentScene.createNode("Shape");
let LineSet1052 = browser.currentScene.createNode("LineSet");
LineSet1052.vertexCount = new MFInt32(new int[2]);
let Coordinate1053 = browser.currentScene.createNode("Coordinate");
Coordinate1053.point = new MFVec3f(new float[-0.1972,0.806,-0.0468,-0.1972,0.7849,-0.0468]);
LineSet1052.coord = Coordinate1053;

//from r_carpometacarpal_3 to r_metacarpophalangeal_3
let ColorRGBA1054 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1054.USE = "HAnimSegmentLineColorRGBA";
LineSet1052.color = ColorRGBA1054;

Shape1051.geometry = LineSet1052;

HAnimJoint1050.child = new undefined();

HAnimJoint1050.child[0] = Shape1051;

let HAnimJoint1055 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1055.name = "r_metacarpophalangeal_3";
HAnimJoint1055.DEF = "hanim_r_metacarpophalangeal_3";
HAnimJoint1055.center = new SFVec3f(new float[-0.1972,0.7849,-0.0468]);
HAnimJoint1055.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1055.llimit = new MFFloat(new float[0,0,0]);
let Shape1056 = browser.currentScene.createNode("Shape");
let LineSet1057 = browser.currentScene.createNode("LineSet");
LineSet1057.vertexCount = new MFInt32(new int[2]);
let Coordinate1058 = browser.currentScene.createNode("Coordinate");
Coordinate1058.point = new MFVec3f(new float[-0.1972,0.7849,-0.0468,-0.195,0.7304,-0.0441]);
LineSet1057.coord = Coordinate1058;

//from r_metacarpophalangeal_3 to r_carpal_proximal_interphalangeal_3
let ColorRGBA1059 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1059.USE = "HAnimSegmentLineColorRGBA";
LineSet1057.color = ColorRGBA1059;

Shape1056.geometry = LineSet1057;

HAnimJoint1055.child = new undefined();

HAnimJoint1055.child[0] = Shape1056;

let HAnimJoint1060 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1060.name = "r_carpal_proximal_interphalangeal_3";
HAnimJoint1060.DEF = "hanim_r_carpal_proximal_interphalangeal_3";
HAnimJoint1060.center = new SFVec3f(new float[-0.195,0.7304,-0.0441]);
HAnimJoint1060.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1060.llimit = new MFFloat(new float[0,0,0]);
let Shape1061 = browser.currentScene.createNode("Shape");
let LineSet1062 = browser.currentScene.createNode("LineSet");
LineSet1062.vertexCount = new MFInt32(new int[2]);
let Coordinate1063 = browser.currentScene.createNode("Coordinate");
Coordinate1063.point = new MFVec3f(new float[-0.195,0.7304,-0.0441,-0.1939,0.7042,-0.0432]);
LineSet1062.coord = Coordinate1063;

//from r_carpal_proximal_interphalangeal_3 to r_carpal_distal_interphalangeal_3
let ColorRGBA1064 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1064.USE = "HAnimSegmentLineColorRGBA";
LineSet1062.color = ColorRGBA1064;

Shape1061.geometry = LineSet1062;

HAnimJoint1060.child = new undefined();

HAnimJoint1060.child[0] = Shape1061;

let HAnimSite1065 = browser.currentScene.createNode("HAnimSite");
HAnimSite1065.name = "r_carpal_distal_phalanx_3_tip";
HAnimSite1065.DEF = "hanim_r_carpal_distal_phalanx_3_tip";
HAnimSite1065.translation = new SFVec3f(new float[0,1,0]);
let TouchSensor1066 = browser.currentScene.createNode("TouchSensor");
TouchSensor1066.description = "HAnimSite r_carpal_distal_phalanx_3_tip";
HAnimSite1065.children = new MFNode();

HAnimSite1065.children[0] = TouchSensor1066;

let Shape1067 = browser.currentScene.createNode("Shape");
Shape1067.USE = "HAnimSiteShape";
HAnimSite1065.children[1] = Shape1067;

HAnimJoint1060.child[1] = HAnimSite1065;

let HAnimJoint1068 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1068.name = "r_carpal_distal_interphalangeal_3";
HAnimJoint1068.DEF = "hanim_r_carpal_distal_interphalangeal_3";
HAnimJoint1068.center = new SFVec3f(new float[-0.1939,0.7042,-0.0432]);
HAnimJoint1068.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1068.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1060.children[2] = HAnimJoint1068;

HAnimJoint1055.children[1] = HAnimJoint1060;

HAnimJoint1050.children[1] = HAnimJoint1055;

HAnimJoint1042.children[2] = HAnimJoint1050;

HAnimJoint976.children[6] = HAnimJoint1042;

let HAnimJoint1069 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1069.name = "r_midcarpal_4_5";
HAnimJoint1069.DEF = "hanim_r_midcarpal_4_5";
HAnimJoint1069.center = new SFVec3f(new float[0,1,0]);
HAnimJoint1069.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1069.llimit = new MFFloat(new float[0,0,0]);
let Shape1070 = browser.currentScene.createNode("Shape");
let LineSet1071 = browser.currentScene.createNode("LineSet");
LineSet1071.vertexCount = new MFInt32(new int[1]);
let Coordinate1072 = browser.currentScene.createNode("Coordinate");
Coordinate1072.point = new MFVec3f(new float[-0.1951,0.8049,-0.0732]);
LineSet1071.coord = Coordinate1072;

//from r_midcarpal_4_5 to r_carpometacarpal_4
let ColorRGBA1073 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1073.USE = "HAnimSegmentLineColorRGBA";
LineSet1071.color = ColorRGBA1073;

Shape1070.geometry = LineSet1071;

HAnimJoint1069.child = new undefined();

HAnimJoint1069.child[0] = Shape1070;

let Shape1074 = browser.currentScene.createNode("Shape");
let LineSet1075 = browser.currentScene.createNode("LineSet");
LineSet1075.vertexCount = new MFInt32(new int[1]);
let Coordinate1076 = browser.currentScene.createNode("Coordinate");
Coordinate1076.point = new MFVec3f(new float[-0.1926,0.8096,-0.0975]);
LineSet1075.coord = Coordinate1076;

//from r_midcarpal_4_5 to r_carpometacarpal_5
let ColorRGBA1077 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1077.USE = "HAnimSegmentLineColorRGBA";
LineSet1075.color = ColorRGBA1077;

Shape1074.geometry = LineSet1075;

HAnimJoint1069.child[1] = Shape1074;

let HAnimSite1078 = browser.currentScene.createNode("HAnimSite");
HAnimSite1078.name = "r_metacarpal_phalanx_5_pt";
HAnimSite1078.DEF = "hanim_r_metacarpal_phalanx_5_pt";
HAnimSite1078.translation = new SFVec3f(new float[-0.1929,0.789,-0.1064]);
let TouchSensor1079 = browser.currentScene.createNode("TouchSensor");
TouchSensor1079.description = "HAnimSite r_metacarpal_phalanx_5_pt";
HAnimSite1078.children = new MFNode();

HAnimSite1078.children[0] = TouchSensor1079;

let Shape1080 = browser.currentScene.createNode("Shape");
Shape1080.USE = "HAnimSiteShape";
HAnimSite1078.children[1] = Shape1080;

HAnimJoint1069.child[2] = HAnimSite1078;

let HAnimJoint1081 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1081.name = "r_carpometacarpal_4";
HAnimJoint1081.DEF = "hanim_r_carpometacarpal_4";
HAnimJoint1081.center = new SFVec3f(new float[-0.1951,0.8049,-0.0732]);
HAnimJoint1081.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1081.llimit = new MFFloat(new float[0,0,0]);
let Shape1082 = browser.currentScene.createNode("Shape");
let LineSet1083 = browser.currentScene.createNode("LineSet");
LineSet1083.vertexCount = new MFInt32(new int[2]);
let Coordinate1084 = browser.currentScene.createNode("Coordinate");
Coordinate1084.point = new MFVec3f(new float[-0.1951,0.8049,-0.0732,-0.1951,0.7845,-0.0732]);
LineSet1083.coord = Coordinate1084;

//from r_carpometacarpal_4 to r_metacarpophalangeal_4
let ColorRGBA1085 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1085.USE = "HAnimSegmentLineColorRGBA";
LineSet1083.color = ColorRGBA1085;

Shape1082.geometry = LineSet1083;

HAnimJoint1081.child = new undefined();

HAnimJoint1081.child[0] = Shape1082;

let HAnimJoint1086 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1086.name = "r_metacarpophalangeal_4";
HAnimJoint1086.DEF = "hanim_r_metacarpophalangeal_4";
HAnimJoint1086.center = new SFVec3f(new float[-0.1951,0.7845,-0.0732]);
HAnimJoint1086.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1086.llimit = new MFFloat(new float[0,0,0]);
let Shape1087 = browser.currentScene.createNode("Shape");
let LineSet1088 = browser.currentScene.createNode("LineSet");
LineSet1088.vertexCount = new MFInt32(new int[2]);
let Coordinate1089 = browser.currentScene.createNode("Coordinate");
Coordinate1089.point = new MFVec3f(new float[-0.1951,0.7845,-0.0732,-0.192,0.7318,-0.0716]);
LineSet1088.coord = Coordinate1089;

//from r_metacarpophalangeal_4 to r_carpal_proximal_interphalangeal_4
let ColorRGBA1090 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1090.USE = "HAnimSegmentLineColorRGBA";
LineSet1088.color = ColorRGBA1090;

Shape1087.geometry = LineSet1088;

HAnimJoint1086.child = new undefined();

HAnimJoint1086.child[0] = Shape1087;

let HAnimJoint1091 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1091.name = "r_carpal_proximal_interphalangeal_4";
HAnimJoint1091.DEF = "hanim_r_carpal_proximal_interphalangeal_4";
HAnimJoint1091.center = new SFVec3f(new float[-0.192,0.7318,-0.0716]);
HAnimJoint1091.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1091.llimit = new MFFloat(new float[0,0,0]);
let Shape1092 = browser.currentScene.createNode("Shape");
let LineSet1093 = browser.currentScene.createNode("LineSet");
LineSet1093.vertexCount = new MFInt32(new int[2]);
let Coordinate1094 = browser.currentScene.createNode("Coordinate");
Coordinate1094.point = new MFVec3f(new float[-0.192,0.7318,-0.0716,-0.1908,0.7077,-0.0706]);
LineSet1093.coord = Coordinate1094;

//from r_carpal_proximal_interphalangeal_4 to r_carpal_distal_interphalangeal_4
let ColorRGBA1095 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1095.USE = "HAnimSegmentLineColorRGBA";
LineSet1093.color = ColorRGBA1095;

Shape1092.geometry = LineSet1093;

HAnimJoint1091.child = new undefined();

HAnimJoint1091.child[0] = Shape1092;

let HAnimSite1096 = browser.currentScene.createNode("HAnimSite");
HAnimSite1096.name = "r_carpal_distal_phalanx_4_tip";
HAnimSite1096.DEF = "hanim_r_carpal_distal_phalanx_4_tip";
HAnimSite1096.translation = new SFVec3f(new float[0,1,0]);
let TouchSensor1097 = browser.currentScene.createNode("TouchSensor");
TouchSensor1097.description = "HAnimSite r_carpal_distal_phalanx_4_tip";
HAnimSite1096.children = new MFNode();

HAnimSite1096.children[0] = TouchSensor1097;

let Shape1098 = browser.currentScene.createNode("Shape");
Shape1098.USE = "HAnimSiteShape";
HAnimSite1096.children[1] = Shape1098;

HAnimJoint1091.child[1] = HAnimSite1096;

let HAnimJoint1099 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1099.name = "r_carpal_distal_interphalangeal_4";
HAnimJoint1099.DEF = "hanim_r_carpal_distal_interphalangeal_4";
HAnimJoint1099.center = new SFVec3f(new float[-0.1908,0.7077,-0.0706]);
HAnimJoint1099.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1099.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1091.children[2] = HAnimJoint1099;

HAnimJoint1086.children[1] = HAnimJoint1091;

HAnimJoint1081.children[1] = HAnimJoint1086;

HAnimJoint1069.children[3] = HAnimJoint1081;

let HAnimJoint1100 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1100.name = "r_carpometacarpal_5";
HAnimJoint1100.DEF = "hanim_r_carpometacarpal_5";
HAnimJoint1100.center = new SFVec3f(new float[-0.1926,0.8096,-0.0975]);
HAnimJoint1100.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1100.llimit = new MFFloat(new float[0,0,0]);
let Shape1101 = browser.currentScene.createNode("Shape");
let LineSet1102 = browser.currentScene.createNode("LineSet");
LineSet1102.vertexCount = new MFInt32(new int[2]);
let Coordinate1103 = browser.currentScene.createNode("Coordinate");
Coordinate1103.point = new MFVec3f(new float[-0.1926,0.8096,-0.0975,-0.1926,0.7896,-0.0975]);
LineSet1102.coord = Coordinate1103;

//from r_carpometacarpal_5 to r_metacarpophalangeal_5
let ColorRGBA1104 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1104.USE = "HAnimSegmentLineColorRGBA";
LineSet1102.color = ColorRGBA1104;

Shape1101.geometry = LineSet1102;

HAnimJoint1100.child = new undefined();

HAnimJoint1100.child[0] = Shape1101;

let HAnimJoint1105 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1105.name = "r_metacarpophalangeal_5";
HAnimJoint1105.DEF = "hanim_r_metacarpophalangeal_5";
HAnimJoint1105.center = new SFVec3f(new float[-0.1926,0.7896,-0.0975]);
HAnimJoint1105.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1105.llimit = new MFFloat(new float[0,0,0]);
let Shape1106 = browser.currentScene.createNode("Shape");
let LineSet1107 = browser.currentScene.createNode("LineSet");
LineSet1107.vertexCount = new MFInt32(new int[2]);
let Coordinate1108 = browser.currentScene.createNode("Coordinate");
Coordinate1108.point = new MFVec3f(new float[-0.1926,0.7896,-0.0975,-0.1902,0.7483,-0.0963]);
LineSet1107.coord = Coordinate1108;

//from r_metacarpophalangeal_5 to r_carpal_proximal_interphalangeal_5
let ColorRGBA1109 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1109.USE = "HAnimSegmentLineColorRGBA";
LineSet1107.color = ColorRGBA1109;

Shape1106.geometry = LineSet1107;

HAnimJoint1105.child = new undefined();

HAnimJoint1105.child[0] = Shape1106;

let HAnimJoint1110 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1110.name = "r_carpal_proximal_interphalangeal_5";
HAnimJoint1110.DEF = "hanim_r_carpal_proximal_interphalangeal_5";
HAnimJoint1110.center = new SFVec3f(new float[-0.1902,0.7483,-0.0963]);
HAnimJoint1110.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1110.llimit = new MFFloat(new float[0,0,0]);
let Shape1111 = browser.currentScene.createNode("Shape");
let LineSet1112 = browser.currentScene.createNode("LineSet");
LineSet1112.vertexCount = new MFInt32(new int[2]);
let Coordinate1113 = browser.currentScene.createNode("Coordinate");
Coordinate1113.point = new MFVec3f(new float[-0.1902,0.7483,-0.0963,-0.1908,0.754,-0.096]);
LineSet1112.coord = Coordinate1113;

//from r_carpal_proximal_interphalangeal_5 to r_carpal_distal_interphalangeal_5
let ColorRGBA1114 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1114.USE = "HAnimSegmentLineColorRGBA";
LineSet1112.color = ColorRGBA1114;

Shape1111.geometry = LineSet1112;

HAnimJoint1110.child = new undefined();

HAnimJoint1110.child[0] = Shape1111;

let HAnimSite1115 = browser.currentScene.createNode("HAnimSite");
HAnimSite1115.name = "r_carpal_distal_phalanx_5_tip";
HAnimSite1115.DEF = "hanim_r_carpal_distal_phalanx_5_tip";
HAnimSite1115.translation = new SFVec3f(new float[0,1,0]);
let TouchSensor1116 = browser.currentScene.createNode("TouchSensor");
TouchSensor1116.description = "HAnimSite r_carpal_distal_phalanx_5_tip";
HAnimSite1115.children = new MFNode();

HAnimSite1115.children[0] = TouchSensor1116;

let Shape1117 = browser.currentScene.createNode("Shape");
Shape1117.USE = "HAnimSiteShape";
HAnimSite1115.children[1] = Shape1117;

HAnimJoint1110.child[1] = HAnimSite1115;

let HAnimJoint1118 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1118.name = "r_carpal_distal_interphalangeal_5";
HAnimJoint1118.DEF = "hanim_r_carpal_distal_interphalangeal_5";
HAnimJoint1118.center = new SFVec3f(new float[-0.1908,0.754,-0.096]);
HAnimJoint1118.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1118.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1110.children[2] = HAnimJoint1118;

HAnimJoint1105.children[1] = HAnimJoint1110;

HAnimJoint1100.children[1] = HAnimJoint1105;

HAnimJoint1069.children[4] = HAnimJoint1100;

HAnimJoint976.children[7] = HAnimJoint1069;

HAnimJoint968.children[2] = HAnimJoint976;

HAnimJoint951.children[5] = HAnimJoint968;

HAnimJoint940.children[3] = HAnimJoint951;

HAnimJoint935.children[1] = HAnimJoint940;

HAnimJoint583.children[17] = HAnimJoint935;

HAnimJoint572.children[3] = HAnimJoint583;

HAnimJoint567.children[1] = HAnimJoint572;

HAnimJoint562.children[1] = HAnimJoint567;

HAnimJoint557.children[1] = HAnimJoint562;

HAnimJoint549.children[2] = HAnimJoint557;

HAnimJoint532.children[5] = HAnimJoint549;

HAnimJoint527.children[1] = HAnimJoint532;

HAnimJoint522.children[1] = HAnimJoint527;

HAnimJoint511.children[3] = HAnimJoint522;

HAnimJoint503.children[2] = HAnimJoint511;

HAnimJoint498.children[1] = HAnimJoint503;

HAnimJoint493.children[1] = HAnimJoint498;

HAnimJoint488.children[1] = HAnimJoint493;

HAnimJoint474.children[4] = HAnimJoint488;

HAnimJoint469.children[1] = HAnimJoint474;

HAnimJoint464.children[1] = HAnimJoint469;

HAnimJoint39.children[16] = HAnimJoint464;

HAnimHumanoid38.joints = new MFNode();

HAnimHumanoid38.joints[0] = HAnimJoint39;

let HAnimJoint1119 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1119.USE = "hanim_humanoid_root";
HAnimHumanoid38.joints[1] = HAnimJoint1119;

let HAnimJoint1120 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1120.USE = "hanim_sacroiliac";
HAnimHumanoid38.joints[2] = HAnimJoint1120;

let HAnimJoint1121 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1121.USE = "hanim_l_hip";
HAnimHumanoid38.joints[3] = HAnimJoint1121;

let HAnimJoint1122 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1122.USE = "hanim_l_knee";
HAnimHumanoid38.joints[4] = HAnimJoint1122;

let HAnimJoint1123 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1123.USE = "hanim_l_talocrural";
HAnimHumanoid38.joints[5] = HAnimJoint1123;

let HAnimJoint1124 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1124.USE = "hanim_l_talocalcaneonavicular";
HAnimHumanoid38.joints[6] = HAnimJoint1124;

let HAnimJoint1125 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1125.USE = "hanim_l_cuneonavicular_1";
HAnimHumanoid38.joints[7] = HAnimJoint1125;

let HAnimJoint1126 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1126.USE = "hanim_l_tarsometatarsal_1";
HAnimHumanoid38.joints[8] = HAnimJoint1126;

let HAnimJoint1127 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1127.USE = "hanim_l_metatarsophalangeal_1";
HAnimHumanoid38.joints[9] = HAnimJoint1127;

let HAnimJoint1128 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1128.USE = "hanim_l_tarsal_interphalangeal_1";
HAnimHumanoid38.joints[10] = HAnimJoint1128;

let HAnimJoint1129 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1129.USE = "hanim_l_cuneonavicular_2";
HAnimHumanoid38.joints[11] = HAnimJoint1129;

let HAnimJoint1130 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1130.USE = "hanim_l_tarsometatarsal_2";
HAnimHumanoid38.joints[12] = HAnimJoint1130;

let HAnimJoint1131 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1131.USE = "hanim_l_metatarsophalangeal_2";
HAnimHumanoid38.joints[13] = HAnimJoint1131;

let HAnimJoint1132 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1132.USE = "hanim_l_tarsal_proximal_interphalangeal_2";
HAnimHumanoid38.joints[14] = HAnimJoint1132;

let HAnimJoint1133 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1133.USE = "hanim_l_tarsal_distal_interphalangeal_2";
HAnimHumanoid38.joints[15] = HAnimJoint1133;

let HAnimJoint1134 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1134.USE = "hanim_l_cuneonavicular_3";
HAnimHumanoid38.joints[16] = HAnimJoint1134;

let HAnimJoint1135 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1135.USE = "hanim_l_tarsometatarsal_3";
HAnimHumanoid38.joints[17] = HAnimJoint1135;

let HAnimJoint1136 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1136.USE = "hanim_l_metatarsophalangeal_3";
HAnimHumanoid38.joints[18] = HAnimJoint1136;

let HAnimJoint1137 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1137.USE = "hanim_l_tarsal_proximal_interphalangeal_3";
HAnimHumanoid38.joints[19] = HAnimJoint1137;

let HAnimJoint1138 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1138.USE = "hanim_l_tarsal_distal_interphalangeal_3";
HAnimHumanoid38.joints[20] = HAnimJoint1138;

let HAnimJoint1139 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1139.USE = "hanim_l_calcaneocuboid";
HAnimHumanoid38.joints[21] = HAnimJoint1139;

let HAnimJoint1140 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1140.USE = "hanim_l_transversetarsal";
HAnimHumanoid38.joints[22] = HAnimJoint1140;

let HAnimJoint1141 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1141.USE = "hanim_l_tarsometatarsal_4";
HAnimHumanoid38.joints[23] = HAnimJoint1141;

let HAnimJoint1142 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1142.USE = "hanim_l_metatarsophalangeal_4";
HAnimHumanoid38.joints[24] = HAnimJoint1142;

let HAnimJoint1143 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1143.USE = "hanim_l_tarsal_proximal_interphalangeal_4";
HAnimHumanoid38.joints[25] = HAnimJoint1143;

let HAnimJoint1144 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1144.USE = "hanim_l_tarsal_distal_interphalangeal_4";
HAnimHumanoid38.joints[26] = HAnimJoint1144;

let HAnimJoint1145 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1145.USE = "hanim_l_tarsometatarsal_5";
HAnimHumanoid38.joints[27] = HAnimJoint1145;

let HAnimJoint1146 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1146.USE = "hanim_l_metatarsophalangeal_5";
HAnimHumanoid38.joints[28] = HAnimJoint1146;

let HAnimJoint1147 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1147.USE = "hanim_l_tarsal_proximal_interphalangeal_5";
HAnimHumanoid38.joints[29] = HAnimJoint1147;

let HAnimJoint1148 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1148.USE = "hanim_l_tarsal_distal_interphalangeal_5";
HAnimHumanoid38.joints[30] = HAnimJoint1148;

let HAnimJoint1149 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1149.USE = "hanim_r_hip";
HAnimHumanoid38.joints[31] = HAnimJoint1149;

let HAnimJoint1150 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1150.USE = "hanim_r_knee";
HAnimHumanoid38.joints[32] = HAnimJoint1150;

let HAnimJoint1151 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1151.USE = "hanim_r_talocrural";
HAnimHumanoid38.joints[33] = HAnimJoint1151;

let HAnimJoint1152 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1152.USE = "hanim_r_talocalcaneonavicular";
HAnimHumanoid38.joints[34] = HAnimJoint1152;

let HAnimJoint1153 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1153.USE = "hanim_r_cuneonavicular_1";
HAnimHumanoid38.joints[35] = HAnimJoint1153;

let HAnimJoint1154 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1154.USE = "hanim_r_tarsometatarsal_1";
HAnimHumanoid38.joints[36] = HAnimJoint1154;

let HAnimJoint1155 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1155.USE = "hanim_r_metatarsophalangeal_1";
HAnimHumanoid38.joints[37] = HAnimJoint1155;

let HAnimJoint1156 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1156.USE = "hanim_r_tarsal_interphalangeal_1";
HAnimHumanoid38.joints[38] = HAnimJoint1156;

let HAnimJoint1157 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1157.USE = "hanim_r_cuneonavicular_2";
HAnimHumanoid38.joints[39] = HAnimJoint1157;

let HAnimJoint1158 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1158.USE = "hanim_r_tarsometatarsal_2";
HAnimHumanoid38.joints[40] = HAnimJoint1158;

let HAnimJoint1159 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1159.USE = "hanim_r_metatarsophalangeal_2";
HAnimHumanoid38.joints[41] = HAnimJoint1159;

let HAnimJoint1160 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1160.USE = "hanim_r_tarsal_proximal_interphalangeal_2";
HAnimHumanoid38.joints[42] = HAnimJoint1160;

let HAnimJoint1161 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1161.USE = "hanim_r_tarsal_distal_interphalangeal_2";
HAnimHumanoid38.joints[43] = HAnimJoint1161;

let HAnimJoint1162 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1162.USE = "hanim_r_cuneonavicular_3";
HAnimHumanoid38.joints[44] = HAnimJoint1162;

let HAnimJoint1163 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1163.USE = "hanim_r_tarsometatarsal_3";
HAnimHumanoid38.joints[45] = HAnimJoint1163;

let HAnimJoint1164 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1164.USE = "hanim_r_metatarsophalangeal_3";
HAnimHumanoid38.joints[46] = HAnimJoint1164;

let HAnimJoint1165 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1165.USE = "hanim_r_tarsal_proximal_interphalangeal_3";
HAnimHumanoid38.joints[47] = HAnimJoint1165;

let HAnimJoint1166 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1166.USE = "hanim_r_tarsal_distal_interphalangeal_3";
HAnimHumanoid38.joints[48] = HAnimJoint1166;

let HAnimJoint1167 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1167.USE = "hanim_r_calcaneocuboid";
HAnimHumanoid38.joints[49] = HAnimJoint1167;

let HAnimJoint1168 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1168.USE = "hanim_r_transversetarsal";
HAnimHumanoid38.joints[50] = HAnimJoint1168;

let HAnimJoint1169 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1169.USE = "hanim_r_tarsometatarsal_4";
HAnimHumanoid38.joints[51] = HAnimJoint1169;

let HAnimJoint1170 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1170.USE = "hanim_r_metatarsophalangeal_4";
HAnimHumanoid38.joints[52] = HAnimJoint1170;

let HAnimJoint1171 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1171.USE = "hanim_r_tarsal_proximal_interphalangeal_4";
HAnimHumanoid38.joints[53] = HAnimJoint1171;

let HAnimJoint1172 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1172.USE = "hanim_r_tarsal_distal_interphalangeal_4";
HAnimHumanoid38.joints[54] = HAnimJoint1172;

let HAnimJoint1173 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1173.USE = "hanim_r_tarsometatarsal_5";
HAnimHumanoid38.joints[55] = HAnimJoint1173;

let HAnimJoint1174 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1174.USE = "hanim_r_metatarsophalangeal_5";
HAnimHumanoid38.joints[56] = HAnimJoint1174;

let HAnimJoint1175 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1175.USE = "hanim_r_tarsal_proximal_interphalangeal_5";
HAnimHumanoid38.joints[57] = HAnimJoint1175;

let HAnimJoint1176 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1176.USE = "hanim_r_tarsal_distal_interphalangeal_5";
HAnimHumanoid38.joints[58] = HAnimJoint1176;

let HAnimJoint1177 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1177.USE = "hanim_vl5";
HAnimHumanoid38.joints[59] = HAnimJoint1177;

let HAnimJoint1178 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1178.USE = "hanim_vl4";
HAnimHumanoid38.joints[60] = HAnimJoint1178;

let HAnimJoint1179 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1179.USE = "hanim_vl3";
HAnimHumanoid38.joints[61] = HAnimJoint1179;

let HAnimJoint1180 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1180.USE = "hanim_vl2";
HAnimHumanoid38.joints[62] = HAnimJoint1180;

let HAnimJoint1181 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1181.USE = "hanim_vl1";
HAnimHumanoid38.joints[63] = HAnimJoint1181;

let HAnimJoint1182 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1182.USE = "hanim_vt12";
HAnimHumanoid38.joints[64] = HAnimJoint1182;

let HAnimJoint1183 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1183.USE = "hanim_vt11";
HAnimHumanoid38.joints[65] = HAnimJoint1183;

let HAnimJoint1184 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1184.USE = "hanim_vt10";
HAnimHumanoid38.joints[66] = HAnimJoint1184;

let HAnimJoint1185 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1185.USE = "hanim_vt9";
HAnimHumanoid38.joints[67] = HAnimJoint1185;

let HAnimJoint1186 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1186.USE = "hanim_vt8";
HAnimHumanoid38.joints[68] = HAnimJoint1186;

let HAnimJoint1187 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1187.USE = "hanim_vt7";
HAnimHumanoid38.joints[69] = HAnimJoint1187;

let HAnimJoint1188 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1188.USE = "hanim_vt6";
HAnimHumanoid38.joints[70] = HAnimJoint1188;

let HAnimJoint1189 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1189.USE = "hanim_vt5";
HAnimHumanoid38.joints[71] = HAnimJoint1189;

let HAnimJoint1190 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1190.USE = "hanim_vt4";
HAnimHumanoid38.joints[72] = HAnimJoint1190;

let HAnimJoint1191 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1191.USE = "hanim_vt3";
HAnimHumanoid38.joints[73] = HAnimJoint1191;

let HAnimJoint1192 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1192.USE = "hanim_vt2";
HAnimHumanoid38.joints[74] = HAnimJoint1192;

let HAnimJoint1193 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1193.USE = "hanim_vt1";
HAnimHumanoid38.joints[75] = HAnimJoint1193;

let HAnimJoint1194 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1194.USE = "hanim_vc7";
HAnimHumanoid38.joints[76] = HAnimJoint1194;

let HAnimJoint1195 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1195.USE = "hanim_vc6";
HAnimHumanoid38.joints[77] = HAnimJoint1195;

let HAnimJoint1196 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1196.USE = "hanim_vc5";
HAnimHumanoid38.joints[78] = HAnimJoint1196;

let HAnimJoint1197 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1197.USE = "hanim_vc4";
HAnimHumanoid38.joints[79] = HAnimJoint1197;

let HAnimJoint1198 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1198.USE = "hanim_vc3";
HAnimHumanoid38.joints[80] = HAnimJoint1198;

let HAnimJoint1199 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1199.USE = "hanim_vc2";
HAnimHumanoid38.joints[81] = HAnimJoint1199;

let HAnimJoint1200 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1200.USE = "hanim_vc1";
HAnimHumanoid38.joints[82] = HAnimJoint1200;

let HAnimJoint1201 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1201.USE = "hanim_skullbase";
HAnimHumanoid38.joints[83] = HAnimJoint1201;

let HAnimJoint1202 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1202.USE = "hanim_l_eyelid_joint";
HAnimHumanoid38.joints[84] = HAnimJoint1202;

let HAnimJoint1203 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1203.USE = "hanim_r_eyelid_joint";
HAnimHumanoid38.joints[85] = HAnimJoint1203;

let HAnimJoint1204 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1204.USE = "hanim_l_eyeball_joint";
HAnimHumanoid38.joints[86] = HAnimJoint1204;

let HAnimJoint1205 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1205.USE = "hanim_r_eyeball_joint";
HAnimHumanoid38.joints[87] = HAnimJoint1205;

let HAnimJoint1206 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1206.USE = "hanim_l_eyebrow_joint";
HAnimHumanoid38.joints[88] = HAnimJoint1206;

let HAnimJoint1207 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1207.USE = "hanim_r_eyebrow_joint";
HAnimHumanoid38.joints[89] = HAnimJoint1207;

let HAnimJoint1208 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1208.USE = "hanim_temporomandibular";
HAnimHumanoid38.joints[90] = HAnimJoint1208;

let HAnimJoint1209 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1209.USE = "hanim_l_sternoclavicular";
HAnimHumanoid38.joints[91] = HAnimJoint1209;

let HAnimJoint1210 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1210.USE = "hanim_l_acromioclavicular";
HAnimHumanoid38.joints[92] = HAnimJoint1210;

let HAnimJoint1211 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1211.USE = "hanim_l_shoulder";
HAnimHumanoid38.joints[93] = HAnimJoint1211;

let HAnimJoint1212 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1212.USE = "hanim_l_elbow";
HAnimHumanoid38.joints[94] = HAnimJoint1212;

let HAnimJoint1213 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1213.USE = "hanim_l_radiocarpal";
HAnimHumanoid38.joints[95] = HAnimJoint1213;

let HAnimJoint1214 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1214.USE = "hanim_l_midcarpal_1";
HAnimHumanoid38.joints[96] = HAnimJoint1214;

let HAnimJoint1215 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1215.USE = "hanim_l_carpometacarpal_1";
HAnimHumanoid38.joints[97] = HAnimJoint1215;

let HAnimJoint1216 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1216.USE = "hanim_l_metacarpophalangeal_1";
HAnimHumanoid38.joints[98] = HAnimJoint1216;

let HAnimJoint1217 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1217.USE = "hanim_l_carpal_interphalangeal_1";
HAnimHumanoid38.joints[99] = HAnimJoint1217;

let HAnimJoint1218 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1218.USE = "hanim_l_midcarpal_2";
HAnimHumanoid38.joints[100] = HAnimJoint1218;

let HAnimJoint1219 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1219.USE = "hanim_l_carpometacarpal_2";
HAnimHumanoid38.joints[101] = HAnimJoint1219;

let HAnimJoint1220 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1220.USE = "hanim_l_metacarpophalangeal_2";
HAnimHumanoid38.joints[102] = HAnimJoint1220;

let HAnimJoint1221 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1221.USE = "hanim_l_carpal_proximal_interphalangeal_2";
HAnimHumanoid38.joints[103] = HAnimJoint1221;

let HAnimJoint1222 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1222.USE = "hanim_l_carpal_distal_interphalangeal_2";
HAnimHumanoid38.joints[104] = HAnimJoint1222;

let HAnimJoint1223 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1223.USE = "hanim_l_midcarpal_3";
HAnimHumanoid38.joints[105] = HAnimJoint1223;

let HAnimJoint1224 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1224.USE = "hanim_l_carpometacarpal_3";
HAnimHumanoid38.joints[106] = HAnimJoint1224;

let HAnimJoint1225 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1225.USE = "hanim_l_metacarpophalangeal_3";
HAnimHumanoid38.joints[107] = HAnimJoint1225;

let HAnimJoint1226 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1226.USE = "hanim_l_carpal_proximal_interphalangeal_3";
HAnimHumanoid38.joints[108] = HAnimJoint1226;

let HAnimJoint1227 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1227.USE = "hanim_l_carpal_distal_interphalangeal_3";
HAnimHumanoid38.joints[109] = HAnimJoint1227;

let HAnimJoint1228 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1228.USE = "hanim_l_midcarpal_4_5";
HAnimHumanoid38.joints[110] = HAnimJoint1228;

let HAnimJoint1229 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1229.USE = "hanim_l_carpometacarpal_4";
HAnimHumanoid38.joints[111] = HAnimJoint1229;

let HAnimJoint1230 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1230.USE = "hanim_l_metacarpophalangeal_4";
HAnimHumanoid38.joints[112] = HAnimJoint1230;

let HAnimJoint1231 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1231.USE = "hanim_l_carpal_proximal_interphalangeal_4";
HAnimHumanoid38.joints[113] = HAnimJoint1231;

let HAnimJoint1232 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1232.USE = "hanim_l_carpal_distal_interphalangeal_4";
HAnimHumanoid38.joints[114] = HAnimJoint1232;

let HAnimJoint1233 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1233.USE = "hanim_l_carpometacarpal_5";
HAnimHumanoid38.joints[115] = HAnimJoint1233;

let HAnimJoint1234 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1234.USE = "hanim_l_metacarpophalangeal_5";
HAnimHumanoid38.joints[116] = HAnimJoint1234;

let HAnimJoint1235 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1235.USE = "hanim_l_carpal_proximal_interphalangeal_5";
HAnimHumanoid38.joints[117] = HAnimJoint1235;

let HAnimJoint1236 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1236.USE = "hanim_l_carpal_distal_interphalangeal_5";
HAnimHumanoid38.joints[118] = HAnimJoint1236;

let HAnimJoint1237 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1237.USE = "hanim_r_sternoclavicular";
HAnimHumanoid38.joints[119] = HAnimJoint1237;

let HAnimJoint1238 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1238.USE = "hanim_r_acromioclavicular";
HAnimHumanoid38.joints[120] = HAnimJoint1238;

let HAnimJoint1239 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1239.USE = "hanim_r_shoulder";
HAnimHumanoid38.joints[121] = HAnimJoint1239;

let HAnimJoint1240 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1240.USE = "hanim_r_elbow";
HAnimHumanoid38.joints[122] = HAnimJoint1240;

let HAnimJoint1241 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1241.USE = "hanim_r_radiocarpal";
HAnimHumanoid38.joints[123] = HAnimJoint1241;

let HAnimJoint1242 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1242.USE = "hanim_r_midcarpal_1";
HAnimHumanoid38.joints[124] = HAnimJoint1242;

let HAnimJoint1243 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1243.USE = "hanim_r_carpometacarpal_1";
HAnimHumanoid38.joints[125] = HAnimJoint1243;

let HAnimJoint1244 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1244.USE = "hanim_r_metacarpophalangeal_1";
HAnimHumanoid38.joints[126] = HAnimJoint1244;

let HAnimJoint1245 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1245.USE = "hanim_r_carpal_interphalangeal_1";
HAnimHumanoid38.joints[127] = HAnimJoint1245;

let HAnimJoint1246 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1246.USE = "hanim_r_midcarpal_2";
HAnimHumanoid38.joints[128] = HAnimJoint1246;

let HAnimJoint1247 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1247.USE = "hanim_r_carpometacarpal_2";
HAnimHumanoid38.joints[129] = HAnimJoint1247;

let HAnimJoint1248 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1248.USE = "hanim_r_metacarpophalangeal_2";
HAnimHumanoid38.joints[130] = HAnimJoint1248;

let HAnimJoint1249 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1249.USE = "hanim_r_carpal_proximal_interphalangeal_2";
HAnimHumanoid38.joints[131] = HAnimJoint1249;

let HAnimJoint1250 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1250.USE = "hanim_r_carpal_distal_interphalangeal_2";
HAnimHumanoid38.joints[132] = HAnimJoint1250;

let HAnimJoint1251 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1251.USE = "hanim_r_midcarpal_3";
HAnimHumanoid38.joints[133] = HAnimJoint1251;

let HAnimJoint1252 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1252.USE = "hanim_r_carpometacarpal_3";
HAnimHumanoid38.joints[134] = HAnimJoint1252;

let HAnimJoint1253 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1253.USE = "hanim_r_metacarpophalangeal_3";
HAnimHumanoid38.joints[135] = HAnimJoint1253;

let HAnimJoint1254 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1254.USE = "hanim_r_carpal_proximal_interphalangeal_3";
HAnimHumanoid38.joints[136] = HAnimJoint1254;

let HAnimJoint1255 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1255.USE = "hanim_r_carpal_distal_interphalangeal_3";
HAnimHumanoid38.joints[137] = HAnimJoint1255;

let HAnimJoint1256 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1256.USE = "hanim_r_midcarpal_4_5";
HAnimHumanoid38.joints[138] = HAnimJoint1256;

let HAnimJoint1257 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1257.USE = "hanim_r_carpometacarpal_4";
HAnimHumanoid38.joints[139] = HAnimJoint1257;

let HAnimJoint1258 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1258.USE = "hanim_r_metacarpophalangeal_4";
HAnimHumanoid38.joints[140] = HAnimJoint1258;

let HAnimJoint1259 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1259.USE = "hanim_r_carpal_proximal_interphalangeal_4";
HAnimHumanoid38.joints[141] = HAnimJoint1259;

let HAnimJoint1260 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1260.USE = "hanim_r_carpal_distal_interphalangeal_4";
HAnimHumanoid38.joints[142] = HAnimJoint1260;

let HAnimJoint1261 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1261.USE = "hanim_r_carpometacarpal_5";
HAnimHumanoid38.joints[143] = HAnimJoint1261;

let HAnimJoint1262 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1262.USE = "hanim_r_metacarpophalangeal_5";
HAnimHumanoid38.joints[144] = HAnimJoint1262;

let HAnimJoint1263 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1263.USE = "hanim_r_carpal_proximal_interphalangeal_5";
HAnimHumanoid38.joints[145] = HAnimJoint1263;

let HAnimJoint1264 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1264.USE = "hanim_r_carpal_distal_interphalangeal_5";
HAnimHumanoid38.joints[146] = HAnimJoint1264;

let HAnimSite1265 = browser.currentScene.createNode("HAnimSite");
HAnimSite1265.USE = "hanim_buttocks_standing_wall_contact_point_pt";
HAnimHumanoid38.viewpoints[147] = HAnimSite1265;

let HAnimSite1266 = browser.currentScene.createNode("HAnimSite");
HAnimSite1266.USE = "hanim_crotch_pt";
HAnimHumanoid38.viewpoints[148] = HAnimSite1266;

let HAnimSite1267 = browser.currentScene.createNode("HAnimSite");
HAnimSite1267.USE = "hanim_l_asis_pt";
HAnimHumanoid38.viewpoints[149] = HAnimSite1267;

let HAnimSite1268 = browser.currentScene.createNode("HAnimSite");
HAnimSite1268.USE = "hanim_l_iliocristale_pt";
HAnimHumanoid38.viewpoints[150] = HAnimSite1268;

let HAnimSite1269 = browser.currentScene.createNode("HAnimSite");
HAnimSite1269.USE = "hanim_l_psis_pt";
HAnimHumanoid38.viewpoints[151] = HAnimSite1269;

let HAnimSite1270 = browser.currentScene.createNode("HAnimSite");
HAnimSite1270.USE = "hanim_l_trochanterion_pt";
HAnimHumanoid38.viewpoints[152] = HAnimSite1270;

let HAnimSite1271 = browser.currentScene.createNode("HAnimSite");
HAnimSite1271.USE = "hanim_r_asis_pt";
HAnimHumanoid38.viewpoints[153] = HAnimSite1271;

let HAnimSite1272 = browser.currentScene.createNode("HAnimSite");
HAnimSite1272.USE = "hanim_r_iliocristale_pt";
HAnimHumanoid38.viewpoints[154] = HAnimSite1272;

let HAnimSite1273 = browser.currentScene.createNode("HAnimSite");
HAnimSite1273.USE = "hanim_r_psis_pt";
HAnimHumanoid38.viewpoints[155] = HAnimSite1273;

let HAnimSite1274 = browser.currentScene.createNode("HAnimSite");
HAnimSite1274.USE = "hanim_r_trochanterion_pt";
HAnimHumanoid38.viewpoints[156] = HAnimSite1274;

let HAnimSite1275 = browser.currentScene.createNode("HAnimSite");
HAnimSite1275.USE = "hanim_navel_pt";
HAnimHumanoid38.viewpoints[157] = HAnimSite1275;

let HAnimSite1276 = browser.currentScene.createNode("HAnimSite");
HAnimSite1276.USE = "hanim_waist_preferred_anterior_pt";
HAnimHumanoid38.viewpoints[158] = HAnimSite1276;

let HAnimSite1277 = browser.currentScene.createNode("HAnimSite");
HAnimSite1277.USE = "hanim_waist_preferred_posterior_pt";
HAnimHumanoid38.viewpoints[159] = HAnimSite1277;

let HAnimSite1278 = browser.currentScene.createNode("HAnimSite");
HAnimSite1278.USE = "hanim_l_femoral_lateral_epicondyles_pt";
HAnimHumanoid38.viewpoints[160] = HAnimSite1278;

let HAnimSite1279 = browser.currentScene.createNode("HAnimSite");
HAnimSite1279.USE = "hanim_l_femoral_medial_epicondyles_pt";
HAnimHumanoid38.viewpoints[161] = HAnimSite1279;

let HAnimSite1280 = browser.currentScene.createNode("HAnimSite");
HAnimSite1280.USE = "hanim_l_knee_crease_pt";
HAnimHumanoid38.viewpoints[162] = HAnimSite1280;

let HAnimSite1281 = browser.currentScene.createNode("HAnimSite");
HAnimSite1281.USE = "hanim_l_suprapatella_pt";
HAnimHumanoid38.viewpoints[163] = HAnimSite1281;

let HAnimSite1282 = browser.currentScene.createNode("HAnimSite");
HAnimSite1282.USE = "hanim_r_femoral_lateral_epicondyles_pt";
HAnimHumanoid38.viewpoints[164] = HAnimSite1282;

let HAnimSite1283 = browser.currentScene.createNode("HAnimSite");
HAnimSite1283.USE = "hanim_r_femoral_medial_epicondyles_pt";
HAnimHumanoid38.viewpoints[165] = HAnimSite1283;

let HAnimSite1284 = browser.currentScene.createNode("HAnimSite");
HAnimSite1284.USE = "hanim_r_knee_crease_pt";
HAnimHumanoid38.viewpoints[166] = HAnimSite1284;

let HAnimSite1285 = browser.currentScene.createNode("HAnimSite");
HAnimSite1285.USE = "hanim_r_suprapatella_pt";
HAnimHumanoid38.viewpoints[167] = HAnimSite1285;

let HAnimSite1286 = browser.currentScene.createNode("HAnimSite");
HAnimSite1286.USE = "hanim_l_lateral_malleolus_pt";
HAnimHumanoid38.viewpoints[168] = HAnimSite1286;

let HAnimSite1287 = browser.currentScene.createNode("HAnimSite");
HAnimSite1287.USE = "hanim_l_medial_malleolus_pt";
HAnimHumanoid38.viewpoints[169] = HAnimSite1287;

let HAnimSite1288 = browser.currentScene.createNode("HAnimSite");
HAnimSite1288.USE = "hanim_l_tibiale_pt";
HAnimHumanoid38.viewpoints[170] = HAnimSite1288;

let HAnimSite1289 = browser.currentScene.createNode("HAnimSite");
HAnimSite1289.USE = "hanim_l_calcaneus_posterior_pt";
HAnimHumanoid38.viewpoints[171] = HAnimSite1289;

let HAnimSite1290 = browser.currentScene.createNode("HAnimSite");
HAnimSite1290.USE = "hanim_l_sphyrion_pt";
HAnimHumanoid38.viewpoints[172] = HAnimSite1290;

let HAnimSite1291 = browser.currentScene.createNode("HAnimSite");
HAnimSite1291.USE = "hanim_l_metatarsal_phalanx_1_pt";
HAnimHumanoid38.viewpoints[173] = HAnimSite1291;

let HAnimSite1292 = browser.currentScene.createNode("HAnimSite");
HAnimSite1292.USE = "hanim_l_tarsal_distal_phalanx_1_tip";
HAnimHumanoid38.viewpoints[174] = HAnimSite1292;

let HAnimSite1293 = browser.currentScene.createNode("HAnimSite");
HAnimSite1293.USE = "hanim_l_tarsal_distal_phalanx_2_tip";
HAnimHumanoid38.viewpoints[175] = HAnimSite1293;

let HAnimSite1294 = browser.currentScene.createNode("HAnimSite");
HAnimSite1294.USE = "hanim_l_tarsal_distal_phalanx_3_tip";
HAnimHumanoid38.viewpoints[176] = HAnimSite1294;

let HAnimSite1295 = browser.currentScene.createNode("HAnimSite");
HAnimSite1295.USE = "hanim_l_tarsal_distal_phalanx_4_tip";
HAnimHumanoid38.viewpoints[177] = HAnimSite1295;

let HAnimSite1296 = browser.currentScene.createNode("HAnimSite");
HAnimSite1296.USE = "hanim_l_metatarsal_phalanx_5_pt";
HAnimHumanoid38.viewpoints[178] = HAnimSite1296;

let HAnimSite1297 = browser.currentScene.createNode("HAnimSite");
HAnimSite1297.USE = "hanim_l_tarsal_distal_phalanx_5_tip";
HAnimHumanoid38.viewpoints[179] = HAnimSite1297;

let HAnimSite1298 = browser.currentScene.createNode("HAnimSite");
HAnimSite1298.USE = "hanim_r_lateral_malleolus_pt";
HAnimHumanoid38.viewpoints[180] = HAnimSite1298;

let HAnimSite1299 = browser.currentScene.createNode("HAnimSite");
HAnimSite1299.USE = "hanim_r_medial_malleolus_pt";
HAnimHumanoid38.viewpoints[181] = HAnimSite1299;

let HAnimSite1300 = browser.currentScene.createNode("HAnimSite");
HAnimSite1300.USE = "hanim_r_tibiale_pt";
HAnimHumanoid38.viewpoints[182] = HAnimSite1300;

let HAnimSite1301 = browser.currentScene.createNode("HAnimSite");
HAnimSite1301.USE = "hanim_r_calcaneus_posterior_pt";
HAnimHumanoid38.viewpoints[183] = HAnimSite1301;

let HAnimSite1302 = browser.currentScene.createNode("HAnimSite");
HAnimSite1302.USE = "hanim_r_sphyrion_pt";
HAnimHumanoid38.viewpoints[184] = HAnimSite1302;

let HAnimSite1303 = browser.currentScene.createNode("HAnimSite");
HAnimSite1303.USE = "hanim_r_metatarsal_phalanx_1_pt";
HAnimHumanoid38.viewpoints[185] = HAnimSite1303;

let HAnimSite1304 = browser.currentScene.createNode("HAnimSite");
HAnimSite1304.USE = "hanim_r_tarsal_distal_phalanx_1_tip";
HAnimHumanoid38.viewpoints[186] = HAnimSite1304;

let HAnimSite1305 = browser.currentScene.createNode("HAnimSite");
HAnimSite1305.USE = "hanim_r_tarsal_distal_phalanx_2_tip";
HAnimHumanoid38.viewpoints[187] = HAnimSite1305;

let HAnimSite1306 = browser.currentScene.createNode("HAnimSite");
HAnimSite1306.USE = "hanim_r_tarsal_distal_phalanx_3_tip";
HAnimHumanoid38.viewpoints[188] = HAnimSite1306;

let HAnimSite1307 = browser.currentScene.createNode("HAnimSite");
HAnimSite1307.USE = "hanim_r_tarsal_distal_phalanx_4_tip";
HAnimHumanoid38.viewpoints[189] = HAnimSite1307;

let HAnimSite1308 = browser.currentScene.createNode("HAnimSite");
HAnimSite1308.USE = "hanim_r_metatarsal_phalanx_5_pt";
HAnimHumanoid38.viewpoints[190] = HAnimSite1308;

let HAnimSite1309 = browser.currentScene.createNode("HAnimSite");
HAnimSite1309.USE = "hanim_r_tarsal_distal_phalanx_5_tip";
HAnimHumanoid38.viewpoints[191] = HAnimSite1309;

let HAnimSite1310 = browser.currentScene.createNode("HAnimSite");
HAnimSite1310.USE = "hanim_l_rib10_pt";
HAnimHumanoid38.viewpoints[192] = HAnimSite1310;

let HAnimSite1311 = browser.currentScene.createNode("HAnimSite");
HAnimSite1311.USE = "hanim_r_rib10_pt";
HAnimHumanoid38.viewpoints[193] = HAnimSite1311;

let HAnimSite1312 = browser.currentScene.createNode("HAnimSite");
HAnimSite1312.USE = "hanim_spine_2_middle_back_pt";
HAnimHumanoid38.viewpoints[194] = HAnimSite1312;

let HAnimSite1313 = browser.currentScene.createNode("HAnimSite");
HAnimSite1313.USE = "hanim_substernale_pt";
HAnimHumanoid38.viewpoints[195] = HAnimSite1313;

let HAnimSite1314 = browser.currentScene.createNode("HAnimSite");
HAnimSite1314.USE = "hanim_l_thelion_pt";
HAnimHumanoid38.viewpoints[196] = HAnimSite1314;

let HAnimSite1315 = browser.currentScene.createNode("HAnimSite");
HAnimSite1315.USE = "hanim_r_thelion_pt";
HAnimHumanoid38.viewpoints[197] = HAnimSite1315;

let HAnimSite1316 = browser.currentScene.createNode("HAnimSite");
HAnimSite1316.USE = "hanim_l_chest_midsagittal_plane_pt";
HAnimHumanoid38.viewpoints[198] = HAnimSite1316;

let HAnimSite1317 = browser.currentScene.createNode("HAnimSite");
HAnimSite1317.USE = "hanim_mesosternale_pt";
HAnimHumanoid38.viewpoints[199] = HAnimSite1317;

let HAnimSite1318 = browser.currentScene.createNode("HAnimSite");
HAnimSite1318.USE = "hanim_r_chest_midsagittal_plane_pt";
HAnimHumanoid38.viewpoints[200] = HAnimSite1318;

let HAnimSite1319 = browser.currentScene.createNode("HAnimSite");
HAnimSite1319.USE = "hanim_rear_center_midsagittal_plane_pt";
HAnimHumanoid38.viewpoints[201] = HAnimSite1319;

let HAnimSite1320 = browser.currentScene.createNode("HAnimSite");
HAnimSite1320.USE = "hanim_spine_1_middle_back_pt";
HAnimHumanoid38.viewpoints[202] = HAnimSite1320;

let HAnimSite1321 = browser.currentScene.createNode("HAnimSite");
HAnimSite1321.USE = "hanim_cervicale_pt";
HAnimHumanoid38.viewpoints[203] = HAnimSite1321;

let HAnimSite1322 = browser.currentScene.createNode("HAnimSite");
HAnimSite1322.USE = "hanim_suprasternale_pt";
HAnimHumanoid38.viewpoints[204] = HAnimSite1322;

let HAnimSite1323 = browser.currentScene.createNode("HAnimSite");
HAnimSite1323.USE = "hanim_l_neck_base_pt";
HAnimHumanoid38.viewpoints[205] = HAnimSite1323;

let HAnimSite1324 = browser.currentScene.createNode("HAnimSite");
HAnimSite1324.USE = "hanim_r_neck_base_pt";
HAnimHumanoid38.viewpoints[206] = HAnimSite1324;

let HAnimSite1325 = browser.currentScene.createNode("HAnimSite");
HAnimSite1325.USE = "hanim_l_acromion_pt";
HAnimHumanoid38.viewpoints[207] = HAnimSite1325;

let HAnimSite1326 = browser.currentScene.createNode("HAnimSite");
HAnimSite1326.USE = "hanim_l_axilla_distal_pt";
HAnimHumanoid38.viewpoints[208] = HAnimSite1326;

let HAnimSite1327 = browser.currentScene.createNode("HAnimSite");
HAnimSite1327.USE = "hanim_l_axilla_posterior_folds_pt";
HAnimHumanoid38.viewpoints[209] = HAnimSite1327;

let HAnimSite1328 = browser.currentScene.createNode("HAnimSite");
HAnimSite1328.USE = "hanim_l_axilla_proximal_pt";
HAnimHumanoid38.viewpoints[210] = HAnimSite1328;

let HAnimSite1329 = browser.currentScene.createNode("HAnimSite");
HAnimSite1329.USE = "hanim_l_clavicale_pt";
HAnimHumanoid38.viewpoints[211] = HAnimSite1329;

let HAnimSite1330 = browser.currentScene.createNode("HAnimSite");
HAnimSite1330.USE = "hanim_r_acromion_pt";
HAnimHumanoid38.viewpoints[212] = HAnimSite1330;

let HAnimSite1331 = browser.currentScene.createNode("HAnimSite");
HAnimSite1331.USE = "hanim_r_axilla_distal_pt";
HAnimHumanoid38.viewpoints[213] = HAnimSite1331;

let HAnimSite1332 = browser.currentScene.createNode("HAnimSite");
HAnimSite1332.USE = "hanim_r_axilla_posterior_folds_pt";
HAnimHumanoid38.viewpoints[214] = HAnimSite1332;

let HAnimSite1333 = browser.currentScene.createNode("HAnimSite");
HAnimSite1333.USE = "hanim_r_axilla_proximal_pt";
HAnimHumanoid38.viewpoints[215] = HAnimSite1333;

let HAnimSite1334 = browser.currentScene.createNode("HAnimSite");
HAnimSite1334.USE = "hanim_r_clavicale_pt";
HAnimHumanoid38.viewpoints[216] = HAnimSite1334;

let HAnimSite1335 = browser.currentScene.createNode("HAnimSite");
HAnimSite1335.USE = "hanim_adams_apple_pt";
HAnimHumanoid38.viewpoints[217] = HAnimSite1335;

let HAnimSite1336 = browser.currentScene.createNode("HAnimSite");
HAnimSite1336.USE = "hanim_glabella_pt";
HAnimHumanoid38.viewpoints[218] = HAnimSite1336;

let HAnimSite1337 = browser.currentScene.createNode("HAnimSite");
HAnimSite1337.USE = "hanim_l_ectocanthus_pt";
HAnimHumanoid38.viewpoints[219] = HAnimSite1337;

let HAnimSite1338 = browser.currentScene.createNode("HAnimSite");
HAnimSite1338.USE = "hanim_l_infraorbitale_pt";
HAnimHumanoid38.viewpoints[220] = HAnimSite1338;

let HAnimSite1339 = browser.currentScene.createNode("HAnimSite");
HAnimSite1339.USE = "hanim_l_tragion_pt";
HAnimHumanoid38.viewpoints[221] = HAnimSite1339;

let HAnimSite1340 = browser.currentScene.createNode("HAnimSite");
HAnimSite1340.USE = "hanim_nuchale_pt";
HAnimHumanoid38.viewpoints[222] = HAnimSite1340;

let HAnimSite1341 = browser.currentScene.createNode("HAnimSite");
HAnimSite1341.USE = "hanim_opisthocranion_pt";
HAnimHumanoid38.viewpoints[223] = HAnimSite1341;

let HAnimSite1342 = browser.currentScene.createNode("HAnimSite");
HAnimSite1342.USE = "hanim_r_ectocanthus_pt";
HAnimHumanoid38.viewpoints[224] = HAnimSite1342;

let HAnimSite1343 = browser.currentScene.createNode("HAnimSite");
HAnimSite1343.USE = "hanim_r_infraorbitale_pt";
HAnimHumanoid38.viewpoints[225] = HAnimSite1343;

let HAnimSite1344 = browser.currentScene.createNode("HAnimSite");
HAnimSite1344.USE = "hanim_r_tragion_pt";
HAnimHumanoid38.viewpoints[226] = HAnimSite1344;

let HAnimSite1345 = browser.currentScene.createNode("HAnimSite");
HAnimSite1345.USE = "hanim_sellion_pt";
HAnimHumanoid38.viewpoints[227] = HAnimSite1345;

let HAnimSite1346 = browser.currentScene.createNode("HAnimSite");
HAnimSite1346.USE = "hanim_skull_vertex_pt";
HAnimHumanoid38.viewpoints[228] = HAnimSite1346;

let HAnimSite1347 = browser.currentScene.createNode("HAnimSite");
HAnimSite1347.USE = "hanim_l_gonion_pt";
HAnimHumanoid38.viewpoints[229] = HAnimSite1347;

let HAnimSite1348 = browser.currentScene.createNode("HAnimSite");
HAnimSite1348.USE = "hanim_menton_pt";
HAnimHumanoid38.viewpoints[230] = HAnimSite1348;

let HAnimSite1349 = browser.currentScene.createNode("HAnimSite");
HAnimSite1349.USE = "hanim_r_gonion_pt";
HAnimHumanoid38.viewpoints[231] = HAnimSite1349;

let HAnimSite1350 = browser.currentScene.createNode("HAnimSite");
HAnimSite1350.USE = "hanim_supramenton_pt";
HAnimHumanoid38.viewpoints[232] = HAnimSite1350;

let HAnimSite1351 = browser.currentScene.createNode("HAnimSite");
HAnimSite1351.USE = "hanim_l_bideltoid_pt";
HAnimHumanoid38.viewpoints[233] = HAnimSite1351;

let HAnimSite1352 = browser.currentScene.createNode("HAnimSite");
HAnimSite1352.USE = "hanim_l_humeral_lateral_epicondyles_pt";
HAnimHumanoid38.viewpoints[234] = HAnimSite1352;

let HAnimSite1353 = browser.currentScene.createNode("HAnimSite");
HAnimSite1353.USE = "hanim_l_humeral_medial_epicondyles_pt";
HAnimHumanoid38.viewpoints[235] = HAnimSite1353;

let HAnimSite1354 = browser.currentScene.createNode("HAnimSite");
HAnimSite1354.USE = "hanim_l_olecranon_pt";
HAnimHumanoid38.viewpoints[236] = HAnimSite1354;

let HAnimSite1355 = browser.currentScene.createNode("HAnimSite");
HAnimSite1355.USE = "hanim_l_radial_styloid_pt";
HAnimHumanoid38.viewpoints[237] = HAnimSite1355;

let HAnimSite1356 = browser.currentScene.createNode("HAnimSite");
HAnimSite1356.USE = "hanim_l_radiale_pt";
HAnimHumanoid38.viewpoints[238] = HAnimSite1356;

let HAnimSite1357 = browser.currentScene.createNode("HAnimSite");
HAnimSite1357.USE = "hanim_l_ulnar_styloid_pt";
HAnimHumanoid38.viewpoints[239] = HAnimSite1357;

let HAnimSite1358 = browser.currentScene.createNode("HAnimSite");
HAnimSite1358.USE = "hanim_l_carpal_distal_phalanx_1_tip";
HAnimHumanoid38.viewpoints[240] = HAnimSite1358;

let HAnimSite1359 = browser.currentScene.createNode("HAnimSite");
HAnimSite1359.USE = "hanim_l_metacarpal_phalanx_2_pt";
HAnimHumanoid38.viewpoints[241] = HAnimSite1359;

let HAnimSite1360 = browser.currentScene.createNode("HAnimSite");
HAnimSite1360.USE = "hanim_l_carpal_distal_phalanx_2_tip";
HAnimHumanoid38.viewpoints[242] = HAnimSite1360;

let HAnimSite1361 = browser.currentScene.createNode("HAnimSite");
HAnimSite1361.USE = "hanim_l_dactylion_pt";
HAnimHumanoid38.viewpoints[243] = HAnimSite1361;

let HAnimSite1362 = browser.currentScene.createNode("HAnimSite");
HAnimSite1362.USE = "hanim_l_metacarpal_phalanx_3_pt";
HAnimHumanoid38.viewpoints[244] = HAnimSite1362;

let HAnimSite1363 = browser.currentScene.createNode("HAnimSite");
HAnimSite1363.USE = "hanim_l_carpal_distal_phalanx_3_tip";
HAnimHumanoid38.viewpoints[245] = HAnimSite1363;

let HAnimSite1364 = browser.currentScene.createNode("HAnimSite");
HAnimSite1364.USE = "hanim_l_metacarpal_phalanx_5_pt";
HAnimHumanoid38.viewpoints[246] = HAnimSite1364;

let HAnimSite1365 = browser.currentScene.createNode("HAnimSite");
HAnimSite1365.USE = "hanim_l_carpal_distal_phalanx_4_tip";
HAnimHumanoid38.viewpoints[247] = HAnimSite1365;

let HAnimSite1366 = browser.currentScene.createNode("HAnimSite");
HAnimSite1366.USE = "hanim_l_carpal_distal_phalanx_5_tip";
HAnimHumanoid38.viewpoints[248] = HAnimSite1366;

let HAnimSite1367 = browser.currentScene.createNode("HAnimSite");
HAnimSite1367.USE = "hanim_r_bideltoid_pt";
HAnimHumanoid38.viewpoints[249] = HAnimSite1367;

let HAnimSite1368 = browser.currentScene.createNode("HAnimSite");
HAnimSite1368.USE = "hanim_r_humeral_lateral_epicondyles_pt";
HAnimHumanoid38.viewpoints[250] = HAnimSite1368;

let HAnimSite1369 = browser.currentScene.createNode("HAnimSite");
HAnimSite1369.USE = "hanim_r_humeral_medial_epicondyles_pt";
HAnimHumanoid38.viewpoints[251] = HAnimSite1369;

let HAnimSite1370 = browser.currentScene.createNode("HAnimSite");
HAnimSite1370.USE = "hanim_r_olecranon_pt";
HAnimHumanoid38.viewpoints[252] = HAnimSite1370;

let HAnimSite1371 = browser.currentScene.createNode("HAnimSite");
HAnimSite1371.USE = "hanim_r_radial_styloid_pt";
HAnimHumanoid38.viewpoints[253] = HAnimSite1371;

let HAnimSite1372 = browser.currentScene.createNode("HAnimSite");
HAnimSite1372.USE = "hanim_r_radiale_pt";
HAnimHumanoid38.viewpoints[254] = HAnimSite1372;

let HAnimSite1373 = browser.currentScene.createNode("HAnimSite");
HAnimSite1373.USE = "hanim_r_ulnar_styloid_pt";
HAnimHumanoid38.viewpoints[255] = HAnimSite1373;

let HAnimSite1374 = browser.currentScene.createNode("HAnimSite");
HAnimSite1374.USE = "hanim_r_carpal_distal_phalanx_1_tip";
HAnimHumanoid38.viewpoints[256] = HAnimSite1374;

let HAnimSite1375 = browser.currentScene.createNode("HAnimSite");
HAnimSite1375.USE = "hanim_r_metacarpal_phalanx_2_pt";
HAnimHumanoid38.viewpoints[257] = HAnimSite1375;

let HAnimSite1376 = browser.currentScene.createNode("HAnimSite");
HAnimSite1376.USE = "hanim_r_carpal_distal_phalanx_2_tip";
HAnimHumanoid38.viewpoints[258] = HAnimSite1376;

let HAnimSite1377 = browser.currentScene.createNode("HAnimSite");
HAnimSite1377.USE = "hanim_r_dactylion_pt";
HAnimHumanoid38.viewpoints[259] = HAnimSite1377;

let HAnimSite1378 = browser.currentScene.createNode("HAnimSite");
HAnimSite1378.USE = "hanim_r_metacarpal_phalanx_3_pt";
HAnimHumanoid38.viewpoints[260] = HAnimSite1378;

let HAnimSite1379 = browser.currentScene.createNode("HAnimSite");
HAnimSite1379.USE = "hanim_r_carpal_distal_phalanx_3_tip";
HAnimHumanoid38.viewpoints[261] = HAnimSite1379;

let HAnimSite1380 = browser.currentScene.createNode("HAnimSite");
HAnimSite1380.USE = "hanim_r_metacarpal_phalanx_5_pt";
HAnimHumanoid38.viewpoints[262] = HAnimSite1380;

let HAnimSite1381 = browser.currentScene.createNode("HAnimSite");
HAnimSite1381.USE = "hanim_r_carpal_distal_phalanx_4_tip";
HAnimHumanoid38.viewpoints[263] = HAnimSite1381;

let HAnimSite1382 = browser.currentScene.createNode("HAnimSite");
HAnimSite1382.USE = "hanim_r_carpal_distal_phalanx_5_tip";
HAnimHumanoid38.viewpoints[264] = HAnimSite1382;

browser.currentScene.children[4] = HAnimHumanoid38;

