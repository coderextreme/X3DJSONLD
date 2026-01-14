const
   X3D     = require ("x_ite-node"),
   canvas  = X3D .createBrowser (),
   browser = canvas .browser,
   scene   = browser .currentScene;
async function main () {
scene.setProfile(browser.getProfile("Immersive"));
scene .addComponent (browser .getComponent ("HAnim", 1));
scene.addMetaData("title", "Humanoid4_1.x3d");
scene.addMetaData("identifier", "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Humanoid4_1.x3d");
scene.addMetaData("description", "An attempt at a standard LOA-4 skeleton");
scene.addMetaData("generator", "h2.pl");
scene.addMetaData("modified", "14 Jan 2023");
scene.addMetaData("creator", "John Carlson");
scene.addMetaData("created", "9 November 2020");
scene.addMetaData("license", "../license.html");
await browser .loadComponents (scene);
let Transform12 = browser.currentScene.createNode("Transform");
//DEF for markerfor XYZ axes
let Shape13 = browser.currentScene.createNode("Shape");
Shape13.DEF = "AxisLinesShape";
//RGB lines showing XYZ axes
let IndexedLineSet14 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet14.colorIndex = new X3D.MFInt32([0,1,2]);
IndexedLineSet14.colorPerVertex = False;
IndexedLineSet14.coordIndex = new X3D.MFInt32([0,1,-1,0,2,-1,0,3,-1]);
let Coordinate15 = browser.currentScene.createNode("Coordinate");
Coordinate15.point = new X3D.MFVec3f([0,0,0,0.1,0,0,0,0.1,0,0,0,0.1]);
coord = Coordinate15;

let Color16 = browser.currentScene.createNode("Color");
Color16.color = new X3D.MFColor([1,0,0,0,0.6,0,0,0,1]);
color = Color16;

geometry = IndexedLineSet14;

Transform12YYY.child = new X3D.undefined();

Transform12ZZZ.child[0] = Shape13;

browser.currentScene.children = new X3D.MFNode();

browser.currentScene.children[0] = Transform12;

let Group17 = browser.currentScene.createNode("Group");
//DEFS for markers of skeleton joints, segments, and sites
let Transform18 = browser.currentScene.createNode("Transform");
let Transform19 = browser.currentScene.createNode("Transform");
Transform19.translation = new X3D.SFVec3f([0,2,0]);
let Shape20 = browser.currentScene.createNode("Shape");
Shape20.DEF = "HAnimRootShape";
let Sphere21 = browser.currentScene.createNode("Sphere");
Sphere21.radius = 0.02;
geometry = Sphere21;

let Appearance22 = browser.currentScene.createNode("Appearance");
let Material23 = browser.currentScene.createNode("Material");
Material23.DEF = "HAnimRootMaterial";
Material23.diffuseColor = new X3D.SFColor([0.8,0,0]);
Material23.transparency = 0.3;
material = Material23;

appearance = Appearance22;

Transform19YYY.child = new X3D.undefined();

Transform19ZZZ.child[0] = Shape20;

Transform18YYY.children = new X3D.MFNode();

Transform18ZZZ.children[0] = Transform19;

let Transform24 = browser.currentScene.createNode("Transform");
Transform24.translation = new X3D.SFVec3f([0,2.1,0]);
let Shape25 = browser.currentScene.createNode("Shape");
Shape25.DEF = "HAnimJointShape";
let Sphere26 = browser.currentScene.createNode("Sphere");
Sphere26.radius = 0.02;
geometry = Sphere26;

let Appearance27 = browser.currentScene.createNode("Appearance");
let Material28 = browser.currentScene.createNode("Material");
Material28.DEF = "HAnimJointMaterial";
Material28.diffuseColor = new X3D.SFColor([0,0,0.8]);
Material28.transparency = 0.3;
material = Material28;

appearance = Appearance27;

Transform24YYY.child = new X3D.undefined();

Transform24ZZZ.child[0] = Shape25;

Transform18ZZZ.children[1] = Transform24;

let Transform29 = browser.currentScene.createNode("Transform");
Transform29.translation = new X3D.SFVec3f([0,2.05,0]);
let Shape30 = browser.currentScene.createNode("Shape");
Shape30.DEF = "HAnimSegmentLine";
let LineSet31 = browser.currentScene.createNode("LineSet");
LineSet31.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA32 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA32.DEF = "HAnimSegmentLineColorRGBA";
ColorRGBA32.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,0.1]);
color = ColorRGBA32;

let Coordinate33 = browser.currentScene.createNode("Coordinate");
Coordinate33.point = new X3D.MFVec3f([-0.05,0,0,0.05,0,0]);
coord = Coordinate33;

geometry = LineSet31;

Transform29YYY.child = new X3D.undefined();

Transform29ZZZ.child[0] = Shape30;

Transform18ZZZ.children[2] = Transform29;

let Transform34 = browser.currentScene.createNode("Transform");
Transform34.translation = new X3D.SFVec3f([0,2.1,0]);
let Shape35 = browser.currentScene.createNode("Shape");
Shape35.DEF = "HAnimSiteShape";
let IndexedFaceSet36 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet36.DEF = "DiamondIFS";
IndexedFaceSet36.creaseAngle = 0.5;
IndexedFaceSet36.solid = False;
IndexedFaceSet36.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
let ColorRGBA37 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA37.DEF = "HAnimSiteColorRGBA";
ColorRGBA37.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
color = ColorRGBA37;

let Coordinate38 = browser.currentScene.createNode("Coordinate");
Coordinate38.point = new X3D.MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
coord = Coordinate38;

geometry = IndexedFaceSet36;

let Appearance39 = browser.currentScene.createNode("Appearance");
let Material40 = browser.currentScene.createNode("Material");
Material40.diffuseColor = new X3D.SFColor([1,1,0]);
Material40.transparency = 0.3;
material = Material40;

appearance = Appearance39;

Transform34YYY.child = new X3D.undefined();

Transform34ZZZ.child[0] = Shape35;

Transform18ZZZ.children[3] = Transform34;

Group17YYY.children = new X3D.MFNode();

Group17ZZZ.children[0] = Transform18;

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
HAnimHumanoid43.info = new X3D.MFString([new X3D.SFString("humanoidVersion=2.0")]);
HAnimHumanoid43.version = "2.0";
//</LOD>
let Coordinate44 = browser.currentScene.createNode("Coordinate");
skinCoord = Coordinate44;

let HAnimJoint45 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint45.name = "humanoid_root";
HAnimJoint45.DEF = "hanim_humanoid_root";
HAnimJoint45.center = new X3D.SFVec3f([0,0.824,0.0277]);
HAnimJoint45.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint45.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment46 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment46.name = "sacrum";
HAnimSegment46.DEF = "hanim_sacrum";
let Transform47 = browser.currentScene.createNode("Transform");
Transform47.translation = new X3D.SFVec3f([0,0.824,0.0277]);
let Transform48 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape49 = browser.currentScene.createNode("Shape");
Shape49.USE = "HAnimJointShape";
Transform48YYY.child = new X3D.undefined();

Transform48ZZZ.child[0] = Shape49;

Transform47YYY.children = new X3D.MFNode();

Transform47ZZZ.children[0] = Transform48;

HAnimSegment46YYY.children = new X3D.MFNode();

HAnimSegment46ZZZ.children[0] = Transform47;

let Shape50 = browser.currentScene.createNode("Shape");
let LineSet51 = browser.currentScene.createNode("LineSet");
LineSet51.vertexCount = new X3D.MFInt32([2]);
let Coordinate52 = browser.currentScene.createNode("Coordinate");
Coordinate52.point = new X3D.MFVec3f([0,0.824,0.0277,0,0.9149,0.0016]);
coord = Coordinate52;

//from humanoid_root to sacroiliac vertices 2
let ColorRGBA53 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA53.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA53;

geometry = LineSet51;

HAnimSegment46ZZZ.children[1] = Shape50;

let HAnimSite54 = browser.currentScene.createNode("HAnimSite");
HAnimSite54.name = "buttocks_standing_wall_contact_point_pt";
HAnimSite54.DEF = "hanim_buttocks_standing_wall_contact_point_pt";
let TouchSensor55 = browser.currentScene.createNode("TouchSensor");
TouchSensor55.description = "HAnimSite buttocks_standing_wall_contact_point_pt";
HAnimSite54YYY.children = new X3D.MFNode();

HAnimSite54ZZZ.children[0] = TouchSensor55;

let Shape56 = browser.currentScene.createNode("Shape");
Shape56.USE = "HAnimSiteShape";
HAnimSite54ZZZ.children[1] = Shape56;

HAnimSegment46ZZZ.children[2] = HAnimSite54;

let HAnimSite57 = browser.currentScene.createNode("HAnimSite");
HAnimSite57.name = "crotch_pt";
HAnimSite57.DEF = "hanim_crotch_pt";
HAnimSite57.translation = new X3D.SFVec3f([0.0034,0.8266,0.0257]);
let TouchSensor58 = browser.currentScene.createNode("TouchSensor");
TouchSensor58.description = "HAnimSite crotch_pt";
HAnimSite57YYY.children = new X3D.MFNode();

HAnimSite57ZZZ.children[0] = TouchSensor58;

let Shape59 = browser.currentScene.createNode("Shape");
Shape59.USE = "HAnimSiteShape";
HAnimSite57ZZZ.children[1] = Shape59;

HAnimSegment46ZZZ.children[3] = HAnimSite57;

let HAnimSite60 = browser.currentScene.createNode("HAnimSite");
HAnimSite60.name = "l_asis_pt";
HAnimSite60.DEF = "hanim_l_asis_pt";
HAnimSite60.translation = new X3D.SFVec3f([0.0925,0.9983,0.1052]);
let TouchSensor61 = browser.currentScene.createNode("TouchSensor");
TouchSensor61.description = "HAnimSite l_asis_pt";
HAnimSite60YYY.children = new X3D.MFNode();

HAnimSite60ZZZ.children[0] = TouchSensor61;

let Shape62 = browser.currentScene.createNode("Shape");
Shape62.USE = "HAnimSiteShape";
HAnimSite60ZZZ.children[1] = Shape62;

HAnimSegment46ZZZ.children[4] = HAnimSite60;

let HAnimSite63 = browser.currentScene.createNode("HAnimSite");
HAnimSite63.name = "l_iliocristale_pt";
HAnimSite63.DEF = "hanim_l_iliocristale_pt";
HAnimSite63.translation = new X3D.SFVec3f([0.1612,1.0537,0.0008]);
let TouchSensor64 = browser.currentScene.createNode("TouchSensor");
TouchSensor64.description = "HAnimSite l_iliocristale_pt";
HAnimSite63YYY.children = new X3D.MFNode();

HAnimSite63ZZZ.children[0] = TouchSensor64;

let Shape65 = browser.currentScene.createNode("Shape");
Shape65.USE = "HAnimSiteShape";
HAnimSite63ZZZ.children[1] = Shape65;

HAnimSegment46ZZZ.children[5] = HAnimSite63;

let HAnimSite66 = browser.currentScene.createNode("HAnimSite");
HAnimSite66.name = "l_psis_pt";
HAnimSite66.DEF = "hanim_l_psis_pt";
HAnimSite66.translation = new X3D.SFVec3f([0.0774,1.019,-0.1151]);
let TouchSensor67 = browser.currentScene.createNode("TouchSensor");
TouchSensor67.description = "HAnimSite l_psis_pt";
HAnimSite66YYY.children = new X3D.MFNode();

HAnimSite66ZZZ.children[0] = TouchSensor67;

let Shape68 = browser.currentScene.createNode("Shape");
Shape68.USE = "HAnimSiteShape";
HAnimSite66ZZZ.children[1] = Shape68;

HAnimSegment46ZZZ.children[6] = HAnimSite66;

let HAnimSite69 = browser.currentScene.createNode("HAnimSite");
HAnimSite69.name = "l_trochanterion_pt";
HAnimSite69.DEF = "hanim_l_trochanterion_pt";
HAnimSite69.translation = new X3D.SFVec3f([0.1677,0.8336,0.0303]);
let TouchSensor70 = browser.currentScene.createNode("TouchSensor");
TouchSensor70.description = "HAnimSite l_trochanterion_pt";
HAnimSite69YYY.children = new X3D.MFNode();

HAnimSite69ZZZ.children[0] = TouchSensor70;

let Shape71 = browser.currentScene.createNode("Shape");
Shape71.USE = "HAnimSiteShape";
HAnimSite69ZZZ.children[1] = Shape71;

HAnimSegment46ZZZ.children[7] = HAnimSite69;

let HAnimSite72 = browser.currentScene.createNode("HAnimSite");
HAnimSite72.name = "r_asis_pt";
HAnimSite72.DEF = "hanim_r_asis_pt";
HAnimSite72.translation = new X3D.SFVec3f([-0.0887,1.0021,0.1112]);
let TouchSensor73 = browser.currentScene.createNode("TouchSensor");
TouchSensor73.description = "HAnimSite r_asis_pt";
HAnimSite72YYY.children = new X3D.MFNode();

HAnimSite72ZZZ.children[0] = TouchSensor73;

let Shape74 = browser.currentScene.createNode("Shape");
Shape74.USE = "HAnimSiteShape";
HAnimSite72ZZZ.children[1] = Shape74;

HAnimSegment46ZZZ.children[8] = HAnimSite72;

let HAnimSite75 = browser.currentScene.createNode("HAnimSite");
HAnimSite75.name = "r_iliocristale_pt";
HAnimSite75.DEF = "hanim_r_iliocristale_pt";
HAnimSite75.translation = new X3D.SFVec3f([-0.1525,1.0628,0.0035]);
let TouchSensor76 = browser.currentScene.createNode("TouchSensor");
TouchSensor76.description = "HAnimSite r_iliocristale_pt";
HAnimSite75YYY.children = new X3D.MFNode();

HAnimSite75ZZZ.children[0] = TouchSensor76;

let Shape77 = browser.currentScene.createNode("Shape");
Shape77.USE = "HAnimSiteShape";
HAnimSite75ZZZ.children[1] = Shape77;

HAnimSegment46ZZZ.children[9] = HAnimSite75;

let HAnimSite78 = browser.currentScene.createNode("HAnimSite");
HAnimSite78.name = "r_psis_pt";
HAnimSite78.DEF = "hanim_r_psis_pt";
HAnimSite78.translation = new X3D.SFVec3f([-0.0716,1.019,-0.1138]);
let TouchSensor79 = browser.currentScene.createNode("TouchSensor");
TouchSensor79.description = "HAnimSite r_psis_pt";
HAnimSite78YYY.children = new X3D.MFNode();

HAnimSite78ZZZ.children[0] = TouchSensor79;

let Shape80 = browser.currentScene.createNode("Shape");
Shape80.USE = "HAnimSiteShape";
HAnimSite78ZZZ.children[1] = Shape80;

HAnimSegment46ZZZ.children[10] = HAnimSite78;

let HAnimSite81 = browser.currentScene.createNode("HAnimSite");
HAnimSite81.name = "r_trochanterion_pt";
HAnimSite81.DEF = "hanim_r_trochanterion_pt";
HAnimSite81.translation = new X3D.SFVec3f([-0.1689,0.8419,0.0352]);
let TouchSensor82 = browser.currentScene.createNode("TouchSensor");
TouchSensor82.description = "HAnimSite r_trochanterion_pt";
HAnimSite81YYY.children = new X3D.MFNode();

HAnimSite81ZZZ.children[0] = TouchSensor82;

let Shape83 = browser.currentScene.createNode("Shape");
Shape83.USE = "HAnimSiteShape";
HAnimSite81ZZZ.children[1] = Shape83;

HAnimSegment46ZZZ.children[11] = HAnimSite81;

let Shape84 = browser.currentScene.createNode("Shape");
let LineSet85 = browser.currentScene.createNode("LineSet");
LineSet85.vertexCount = new X3D.MFInt32([2]);
let Coordinate86 = browser.currentScene.createNode("Coordinate");
Coordinate86.point = new X3D.MFVec3f([0,0.824,0.0277,0.0028,1.0568,-0.0776]);
coord = Coordinate86;

//from humanoid_root to vl5 vertices 2
let ColorRGBA87 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA87.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA87;

geometry = LineSet85;

HAnimSegment46ZZZ.children[12] = Shape84;

let HAnimSite88 = browser.currentScene.createNode("HAnimSite");
HAnimSite88.name = "navel_pt";
HAnimSite88.DEF = "hanim_navel_pt";
HAnimSite88.translation = new X3D.SFVec3f([0.0069,1.0966,0.1017]);
let TouchSensor89 = browser.currentScene.createNode("TouchSensor");
TouchSensor89.description = "HAnimSite navel_pt";
HAnimSite88YYY.children = new X3D.MFNode();

HAnimSite88ZZZ.children[0] = TouchSensor89;

let Shape90 = browser.currentScene.createNode("Shape");
Shape90.USE = "HAnimSiteShape";
HAnimSite88ZZZ.children[1] = Shape90;

HAnimSegment46ZZZ.children[13] = HAnimSite88;

let HAnimSite91 = browser.currentScene.createNode("HAnimSite");
HAnimSite91.name = "waist_preferred_anterior_pt";
HAnimSite91.DEF = "hanim_waist_preferred_anterior_pt";
let TouchSensor92 = browser.currentScene.createNode("TouchSensor");
TouchSensor92.description = "HAnimSite waist_preferred_anterior_pt";
HAnimSite91YYY.children = new X3D.MFNode();

HAnimSite91ZZZ.children[0] = TouchSensor92;

let Shape93 = browser.currentScene.createNode("Shape");
Shape93.USE = "HAnimSiteShape";
HAnimSite91ZZZ.children[1] = Shape93;

HAnimSegment46ZZZ.children[14] = HAnimSite91;

let HAnimSite94 = browser.currentScene.createNode("HAnimSite");
HAnimSite94.name = "waist_preferred_posterior_pt";
HAnimSite94.DEF = "hanim_waist_preferred_posterior_pt";
HAnimSite94.translation = new X3D.SFVec3f([0.29,1.0915,-0.1091]);
let TouchSensor95 = browser.currentScene.createNode("TouchSensor");
TouchSensor95.description = "HAnimSite waist_preferred_posterior_pt";
HAnimSite94YYY.children = new X3D.MFNode();

HAnimSite94ZZZ.children[0] = TouchSensor95;

let Shape96 = browser.currentScene.createNode("Shape");
Shape96.USE = "HAnimSiteShape";
HAnimSite94ZZZ.children[1] = Shape96;

HAnimSegment46ZZZ.children[15] = HAnimSite94;

HAnimJoint45YYY.children = new X3D.MFNode();

HAnimJoint45ZZZ.children[0] = HAnimSegment46;

let HAnimJoint97 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint97.name = "sacroiliac";
HAnimJoint97.DEF = "hanim_sacroiliac";
HAnimJoint97.center = new X3D.SFVec3f([0,0.9149,0.0016]);
HAnimJoint97.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint97.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment98 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment98.name = "pelvis";
HAnimSegment98.DEF = "hanim_pelvis";
let Transform99 = browser.currentScene.createNode("Transform");
Transform99.translation = new X3D.SFVec3f([0,0.9149,0.0016]);
let Transform100 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape101 = browser.currentScene.createNode("Shape");
Shape101.USE = "HAnimJointShape";
Transform100YYY.child = new X3D.undefined();

Transform100ZZZ.child[0] = Shape101;

Transform99YYY.children = new X3D.MFNode();

Transform99ZZZ.children[0] = Transform100;

HAnimSegment98YYY.children = new X3D.MFNode();

HAnimSegment98ZZZ.children[0] = Transform99;

let Shape102 = browser.currentScene.createNode("Shape");
let LineSet103 = browser.currentScene.createNode("LineSet");
LineSet103.vertexCount = new X3D.MFInt32([2]);
let Coordinate104 = browser.currentScene.createNode("Coordinate");
Coordinate104.point = new X3D.MFVec3f([0,0.9149,0.0016,0.0961,0.9124,-0.0001]);
coord = Coordinate104;

//from sacroiliac to l_hip vertices 2
let ColorRGBA105 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA105.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA105;

geometry = LineSet103;

HAnimSegment98ZZZ.children[1] = Shape102;

let HAnimSite106 = browser.currentScene.createNode("HAnimSite");
HAnimSite106.name = "l_femoral_lateral_epicondyles_pt";
HAnimSite106.DEF = "hanim_l_femoral_lateral_epicondyles_pt";
HAnimSite106.translation = new X3D.SFVec3f([0.1598,0.4967,0.0297]);
let TouchSensor107 = browser.currentScene.createNode("TouchSensor");
TouchSensor107.description = "HAnimSite l_femoral_lateral_epicondyles_pt";
HAnimSite106YYY.children = new X3D.MFNode();

HAnimSite106ZZZ.children[0] = TouchSensor107;

let Shape108 = browser.currentScene.createNode("Shape");
Shape108.USE = "HAnimSiteShape";
HAnimSite106ZZZ.children[1] = Shape108;

HAnimSegment98ZZZ.children[2] = HAnimSite106;

let HAnimSite109 = browser.currentScene.createNode("HAnimSite");
HAnimSite109.name = "l_femoral_medial_epicondyles_pt";
HAnimSite109.DEF = "hanim_l_femoral_medial_epicondyles_pt";
HAnimSite109.translation = new X3D.SFVec3f([0.0398,0.4946,0.0303]);
let TouchSensor110 = browser.currentScene.createNode("TouchSensor");
TouchSensor110.description = "HAnimSite l_femoral_medial_epicondyles_pt";
HAnimSite109YYY.children = new X3D.MFNode();

HAnimSite109ZZZ.children[0] = TouchSensor110;

let Shape111 = browser.currentScene.createNode("Shape");
Shape111.USE = "HAnimSiteShape";
HAnimSite109ZZZ.children[1] = Shape111;

HAnimSegment98ZZZ.children[3] = HAnimSite109;

let HAnimSite112 = browser.currentScene.createNode("HAnimSite");
HAnimSite112.name = "l_knee_crease_pt";
HAnimSite112.DEF = "hanim_l_knee_crease_pt";
HAnimSite112.translation = new X3D.SFVec3f([0.0993,0.4881,-0.0309]);
let TouchSensor113 = browser.currentScene.createNode("TouchSensor");
TouchSensor113.description = "HAnimSite l_knee_crease_pt";
HAnimSite112YYY.children = new X3D.MFNode();

HAnimSite112ZZZ.children[0] = TouchSensor113;

let Shape114 = browser.currentScene.createNode("Shape");
Shape114.USE = "HAnimSiteShape";
HAnimSite112ZZZ.children[1] = Shape114;

HAnimSegment98ZZZ.children[4] = HAnimSite112;

let HAnimSite115 = browser.currentScene.createNode("HAnimSite");
HAnimSite115.name = "l_suprapatella_pt";
HAnimSite115.DEF = "hanim_l_suprapatella_pt";
let TouchSensor116 = browser.currentScene.createNode("TouchSensor");
TouchSensor116.description = "HAnimSite l_suprapatella_pt";
HAnimSite115YYY.children = new X3D.MFNode();

HAnimSite115ZZZ.children[0] = TouchSensor116;

let Shape117 = browser.currentScene.createNode("Shape");
Shape117.USE = "HAnimSiteShape";
HAnimSite115ZZZ.children[1] = Shape117;

HAnimSegment98ZZZ.children[5] = HAnimSite115;

let Shape118 = browser.currentScene.createNode("Shape");
let LineSet119 = browser.currentScene.createNode("LineSet");
LineSet119.vertexCount = new X3D.MFInt32([2]);
let Coordinate120 = browser.currentScene.createNode("Coordinate");
Coordinate120.point = new X3D.MFVec3f([0,0.9149,0.0016,-0.095,0.9171,0.0029]);
coord = Coordinate120;

//from sacroiliac to r_hip vertices 2
let ColorRGBA121 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA121.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA121;

geometry = LineSet119;

HAnimSegment98ZZZ.children[6] = Shape118;

let HAnimSite122 = browser.currentScene.createNode("HAnimSite");
HAnimSite122.name = "r_femoral_lateral_epicondyles_pt";
HAnimSite122.DEF = "hanim_r_femoral_lateral_epicondyles_pt";
HAnimSite122.translation = new X3D.SFVec3f([-0.1421,0.4992,0.031]);
let TouchSensor123 = browser.currentScene.createNode("TouchSensor");
TouchSensor123.description = "HAnimSite r_femoral_lateral_epicondyles_pt";
HAnimSite122YYY.children = new X3D.MFNode();

HAnimSite122ZZZ.children[0] = TouchSensor123;

let Shape124 = browser.currentScene.createNode("Shape");
Shape124.USE = "HAnimSiteShape";
HAnimSite122ZZZ.children[1] = Shape124;

HAnimSegment98ZZZ.children[7] = HAnimSite122;

let HAnimSite125 = browser.currentScene.createNode("HAnimSite");
HAnimSite125.name = "r_femoral_medial_epicondyles_pt";
HAnimSite125.DEF = "hanim_r_femoral_medial_epicondyles_pt";
HAnimSite125.translation = new X3D.SFVec3f([-0.0221,0.5014,0.0289]);
let TouchSensor126 = browser.currentScene.createNode("TouchSensor");
TouchSensor126.description = "HAnimSite r_femoral_medial_epicondyles_pt";
HAnimSite125YYY.children = new X3D.MFNode();

HAnimSite125ZZZ.children[0] = TouchSensor126;

let Shape127 = browser.currentScene.createNode("Shape");
Shape127.USE = "HAnimSiteShape";
HAnimSite125ZZZ.children[1] = Shape127;

HAnimSegment98ZZZ.children[8] = HAnimSite125;

let HAnimSite128 = browser.currentScene.createNode("HAnimSite");
HAnimSite128.name = "r_knee_crease_pt";
HAnimSite128.DEF = "hanim_r_knee_crease_pt";
HAnimSite128.translation = new X3D.SFVec3f([-0.0825,0.4932,-0.0326]);
let TouchSensor129 = browser.currentScene.createNode("TouchSensor");
TouchSensor129.description = "HAnimSite r_knee_crease_pt";
HAnimSite128YYY.children = new X3D.MFNode();

HAnimSite128ZZZ.children[0] = TouchSensor129;

let Shape130 = browser.currentScene.createNode("Shape");
Shape130.USE = "HAnimSiteShape";
HAnimSite128ZZZ.children[1] = Shape130;

HAnimSegment98ZZZ.children[9] = HAnimSite128;

let HAnimSite131 = browser.currentScene.createNode("HAnimSite");
HAnimSite131.name = "r_suprapatella_pt";
HAnimSite131.DEF = "hanim_r_suprapatella_pt";
let TouchSensor132 = browser.currentScene.createNode("TouchSensor");
TouchSensor132.description = "HAnimSite r_suprapatella_pt";
HAnimSite131YYY.children = new X3D.MFNode();

HAnimSite131ZZZ.children[0] = TouchSensor132;

let Shape133 = browser.currentScene.createNode("Shape");
Shape133.USE = "HAnimSiteShape";
HAnimSite131ZZZ.children[1] = Shape133;

HAnimSegment98ZZZ.children[10] = HAnimSite131;

HAnimJoint97YYY.children = new X3D.MFNode();

HAnimJoint97ZZZ.children[0] = HAnimSegment98;

let HAnimJoint134 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint134.name = "l_hip";
HAnimJoint134.DEF = "hanim_l_hip";
HAnimJoint134.center = new X3D.SFVec3f([0.0961,0.9124,-0.0001]);
HAnimJoint134.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint134.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment135 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment135.name = "l_thigh";
HAnimSegment135.DEF = "hanim_l_thigh";
let Transform136 = browser.currentScene.createNode("Transform");
Transform136.translation = new X3D.SFVec3f([0.0961,0.9124,-0.0001]);
let Transform137 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape138 = browser.currentScene.createNode("Shape");
Shape138.USE = "HAnimJointShape";
Transform137YYY.child = new X3D.undefined();

Transform137ZZZ.child[0] = Shape138;

Transform136YYY.children = new X3D.MFNode();

Transform136ZZZ.children[0] = Transform137;

HAnimSegment135YYY.children = new X3D.MFNode();

HAnimSegment135ZZZ.children[0] = Transform136;

let Shape139 = browser.currentScene.createNode("Shape");
let LineSet140 = browser.currentScene.createNode("LineSet");
LineSet140.vertexCount = new X3D.MFInt32([2]);
let Coordinate141 = browser.currentScene.createNode("Coordinate");
Coordinate141.point = new X3D.MFVec3f([0.0961,0.9124,-0.0001,0.104,0.4867,0.0308]);
coord = Coordinate141;

//from l_hip to l_knee vertices 2
let ColorRGBA142 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA142.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA142;

geometry = LineSet140;

HAnimSegment135ZZZ.children[1] = Shape139;

let HAnimSite143 = browser.currentScene.createNode("HAnimSite");
HAnimSite143.name = "l_lateral_malleolus_pt";
HAnimSite143.DEF = "hanim_l_lateral_malleolus_pt";
HAnimSite143.translation = new X3D.SFVec3f([0.1308,0.0597,-0.1032]);
let TouchSensor144 = browser.currentScene.createNode("TouchSensor");
TouchSensor144.description = "HAnimSite l_lateral_malleolus_pt";
HAnimSite143YYY.children = new X3D.MFNode();

HAnimSite143ZZZ.children[0] = TouchSensor144;

let Shape145 = browser.currentScene.createNode("Shape");
Shape145.USE = "HAnimSiteShape";
HAnimSite143ZZZ.children[1] = Shape145;

HAnimSegment135ZZZ.children[2] = HAnimSite143;

let HAnimSite146 = browser.currentScene.createNode("HAnimSite");
HAnimSite146.name = "l_medial_malleolus_pt";
HAnimSite146.DEF = "hanim_l_medial_malleolus_pt";
HAnimSite146.translation = new X3D.SFVec3f([0.089,0.0716,-0.0881]);
let TouchSensor147 = browser.currentScene.createNode("TouchSensor");
TouchSensor147.description = "HAnimSite l_medial_malleolus_pt";
HAnimSite146YYY.children = new X3D.MFNode();

HAnimSite146ZZZ.children[0] = TouchSensor147;

let Shape148 = browser.currentScene.createNode("Shape");
Shape148.USE = "HAnimSiteShape";
HAnimSite146ZZZ.children[1] = Shape148;

HAnimSegment135ZZZ.children[3] = HAnimSite146;

let HAnimSite149 = browser.currentScene.createNode("HAnimSite");
HAnimSite149.name = "l_tibiale_pt";
HAnimSite149.DEF = "hanim_l_tibiale_pt";
let TouchSensor150 = browser.currentScene.createNode("TouchSensor");
TouchSensor150.description = "HAnimSite l_tibiale_pt";
HAnimSite149YYY.children = new X3D.MFNode();

HAnimSite149ZZZ.children[0] = TouchSensor150;

let Shape151 = browser.currentScene.createNode("Shape");
Shape151.USE = "HAnimSiteShape";
HAnimSite149ZZZ.children[1] = Shape151;

HAnimSegment135ZZZ.children[4] = HAnimSite149;

HAnimJoint134YYY.children = new X3D.MFNode();

HAnimJoint134ZZZ.children[0] = HAnimSegment135;

let HAnimJoint152 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint152.name = "l_knee";
HAnimJoint152.DEF = "hanim_l_knee";
HAnimJoint152.center = new X3D.SFVec3f([0.104,0.4867,0.0308]);
HAnimJoint152.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint152.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment153 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment153.name = "l_calf";
HAnimSegment153.DEF = "hanim_l_calf";
let Transform154 = browser.currentScene.createNode("Transform");
Transform154.translation = new X3D.SFVec3f([0.104,0.4867,0.0308]);
let Transform155 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape156 = browser.currentScene.createNode("Shape");
Shape156.USE = "HAnimJointShape";
Transform155YYY.child = new X3D.undefined();

Transform155ZZZ.child[0] = Shape156;

Transform154YYY.children = new X3D.MFNode();

Transform154ZZZ.children[0] = Transform155;

HAnimSegment153YYY.children = new X3D.MFNode();

HAnimSegment153ZZZ.children[0] = Transform154;

let Shape157 = browser.currentScene.createNode("Shape");
let LineSet158 = browser.currentScene.createNode("LineSet");
LineSet158.vertexCount = new X3D.MFInt32([2]);
let Coordinate159 = browser.currentScene.createNode("Coordinate");
Coordinate159.point = new X3D.MFVec3f([0.104,0.4867,0.0308,0.1101,0.0656,-0.0736]);
coord = Coordinate159;

//from l_knee to l_talocrural vertices 2
let ColorRGBA160 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA160.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA160;

geometry = LineSet158;

HAnimSegment153ZZZ.children[1] = Shape157;

let HAnimSite161 = browser.currentScene.createNode("HAnimSite");
HAnimSite161.name = "l_calcaneus_posterior_pt";
HAnimSite161.DEF = "hanim_l_calcaneus_posterior_pt";
HAnimSite161.translation = new X3D.SFVec3f([0.0974,0.0259,-0.1171]);
let TouchSensor162 = browser.currentScene.createNode("TouchSensor");
TouchSensor162.description = "HAnimSite l_calcaneus_posterior_pt";
HAnimSite161YYY.children = new X3D.MFNode();

HAnimSite161ZZZ.children[0] = TouchSensor162;

let Shape163 = browser.currentScene.createNode("Shape");
Shape163.USE = "HAnimSiteShape";
HAnimSite161ZZZ.children[1] = Shape163;

HAnimSegment153ZZZ.children[2] = HAnimSite161;

let HAnimSite164 = browser.currentScene.createNode("HAnimSite");
HAnimSite164.name = "l_sphyrion_pt";
HAnimSite164.DEF = "hanim_l_sphyrion_pt";
HAnimSite164.translation = new X3D.SFVec3f([0.089,0.0575,-0.0943]);
let TouchSensor165 = browser.currentScene.createNode("TouchSensor");
TouchSensor165.description = "HAnimSite l_sphyrion_pt";
HAnimSite164YYY.children = new X3D.MFNode();

HAnimSite164ZZZ.children[0] = TouchSensor165;

let Shape166 = browser.currentScene.createNode("Shape");
Shape166.USE = "HAnimSiteShape";
HAnimSite164ZZZ.children[1] = Shape166;

HAnimSegment153ZZZ.children[3] = HAnimSite164;

HAnimJoint152YYY.children = new X3D.MFNode();

HAnimJoint152ZZZ.children[0] = HAnimSegment153;

let HAnimJoint167 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint167.name = "l_talocrural";
HAnimJoint167.DEF = "hanim_l_talocrural";
HAnimJoint167.center = new X3D.SFVec3f([0.1101,0.0656,-0.0736]);
HAnimJoint167.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint167.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment168 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment168.name = "l_talus";
HAnimSegment168.DEF = "hanim_l_talus";
let Transform169 = browser.currentScene.createNode("Transform");
Transform169.scale = new X3D.SFVec3f([0.15,0.15,0.15]);
Transform169.translation = new X3D.SFVec3f([0.08,0.06,-0.025]);
Transform169.rotation = new X3D.SFRotation([1,0,0,-1.57]);
//Transform left foot
let Transform170 = browser.currentScene.createNode("Transform");
//Empty Transform left foot
let Shape171 = browser.currentScene.createNode("Shape");
Shape171.USE = "HAnimJointShape";
Transform170YYY.child = new X3D.undefined();

Transform170ZZZ.child[0] = Shape171;

Transform169YYY.children = new X3D.MFNode();

Transform169ZZZ.children[0] = Transform170;

HAnimSegment168YYY.children = new X3D.MFNode();

HAnimSegment168ZZZ.children[0] = Transform169;

let Shape172 = browser.currentScene.createNode("Shape");
let LineSet173 = browser.currentScene.createNode("LineSet");
LineSet173.vertexCount = new X3D.MFInt32([2]);
let Coordinate174 = browser.currentScene.createNode("Coordinate");
Coordinate174.point = new X3D.MFVec3f([0.1101,0.0656,-0.0736,3.4715,0.0374,0.6807]);
coord = Coordinate174;

//from l_talocrural to l_talocalcaneonavicular vertices 2
let ColorRGBA175 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA175.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA175;

geometry = LineSet173;

HAnimSegment168ZZZ.children[1] = Shape172;

let Shape176 = browser.currentScene.createNode("Shape");
let LineSet177 = browser.currentScene.createNode("LineSet");
LineSet177.vertexCount = new X3D.MFInt32([2]);
let Coordinate178 = browser.currentScene.createNode("Coordinate");
Coordinate178.point = new X3D.MFVec3f([0.1101,0.0656,-0.0736,3.9515,0.0653,-0.6895]);
coord = Coordinate178;

//from l_talocrural to l_calcaneocuboid vertices 2
let ColorRGBA179 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA179.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA179;

geometry = LineSet177;

HAnimSegment168ZZZ.children[2] = Shape176;

HAnimJoint167YYY.children = new X3D.MFNode();

HAnimJoint167ZZZ.children[0] = HAnimSegment168;

let HAnimJoint180 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint180.name = "l_talocalcaneonavicular";
HAnimJoint180.DEF = "hanim_l_talocalcaneonavicular";
HAnimJoint180.center = new X3D.SFVec3f([3.4715,0.0374,0.6807]);
HAnimJoint180.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint180.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment181 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment181.name = "l_navicular";
HAnimSegment181.DEF = "hanim_l_navicular";
let Transform182 = browser.currentScene.createNode("Transform");
Transform182.translation = new X3D.SFVec3f([3.4715,0.0374,0.6807]);
let Transform183 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape184 = browser.currentScene.createNode("Shape");
Shape184.USE = "HAnimJointShape";
Transform183YYY.child = new X3D.undefined();

Transform183ZZZ.child[0] = Shape184;

Transform182YYY.children = new X3D.MFNode();

Transform182ZZZ.children[0] = Transform183;

HAnimSegment181YYY.children = new X3D.MFNode();

HAnimSegment181ZZZ.children[0] = Transform182;

let Shape185 = browser.currentScene.createNode("Shape");
let LineSet186 = browser.currentScene.createNode("LineSet");
LineSet186.vertexCount = new X3D.MFInt32([2]);
let Coordinate187 = browser.currentScene.createNode("Coordinate");
Coordinate187.point = new X3D.MFVec3f([3.4715,0.0374,0.6807,2.9855,0.0311,1.2819]);
coord = Coordinate187;

//from l_talocalcaneonavicular to l_cuneonavicular_1 vertices 2
let ColorRGBA188 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA188.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA188;

geometry = LineSet186;

HAnimSegment181ZZZ.children[1] = Shape185;

let Shape189 = browser.currentScene.createNode("Shape");
let LineSet190 = browser.currentScene.createNode("LineSet");
LineSet190.vertexCount = new X3D.MFInt32([2]);
let Coordinate191 = browser.currentScene.createNode("Coordinate");
Coordinate191.point = new X3D.MFVec3f([3.4715,0.0374,0.6807,3.6105,0.033,1.4168]);
coord = Coordinate191;

//from l_talocalcaneonavicular to l_cuneonavicular_2 vertices 2
let ColorRGBA192 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA192.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA192;

geometry = LineSet190;

HAnimSegment181ZZZ.children[2] = Shape189;

let Shape193 = browser.currentScene.createNode("Shape");
let LineSet194 = browser.currentScene.createNode("LineSet");
LineSet194.vertexCount = new X3D.MFInt32([2]);
let Coordinate195 = browser.currentScene.createNode("Coordinate");
Coordinate195.point = new X3D.MFVec3f([3.4715,0.0374,0.6807,4.1235,0.0328,1.3453]);
coord = Coordinate195;

//from l_talocalcaneonavicular to l_cuneonavicular_3 vertices 2
let ColorRGBA196 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA196.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA196;

geometry = LineSet194;

HAnimSegment181ZZZ.children[3] = Shape193;

HAnimJoint180YYY.children = new X3D.MFNode();

HAnimJoint180ZZZ.children[0] = HAnimSegment181;

let HAnimJoint197 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint197.name = "l_cuneonavicular_1";
HAnimJoint197.DEF = "hanim_l_cuneonavicular_1";
HAnimJoint197.center = new X3D.SFVec3f([2.9855,0.0311,1.2819]);
HAnimJoint197.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint197.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment198 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment198.name = "l_cuneiform_1";
HAnimSegment198.DEF = "hanim_l_cuneiform_1";
let Transform199 = browser.currentScene.createNode("Transform");
Transform199.translation = new X3D.SFVec3f([2.9855,0.0311,1.2819]);
let Transform200 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape201 = browser.currentScene.createNode("Shape");
Shape201.USE = "HAnimJointShape";
Transform200YYY.child = new X3D.undefined();

Transform200ZZZ.child[0] = Shape201;

Transform199YYY.children = new X3D.MFNode();

Transform199ZZZ.children[0] = Transform200;

HAnimSegment198YYY.children = new X3D.MFNode();

HAnimSegment198ZZZ.children[0] = Transform199;

let Shape202 = browser.currentScene.createNode("Shape");
let LineSet203 = browser.currentScene.createNode("LineSet");
LineSet203.vertexCount = new X3D.MFInt32([2]);
let Coordinate204 = browser.currentScene.createNode("Coordinate");
Coordinate204.point = new X3D.MFVec3f([2.9855,0.0311,1.2819,2.8635,0.0194,2.4285]);
coord = Coordinate204;

//from l_cuneonavicular_1 to l_tarsometatarsal_1 vertices 2
let ColorRGBA205 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA205.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA205;

geometry = LineSet203;

HAnimSegment198ZZZ.children[1] = Shape202;

HAnimJoint197YYY.children = new X3D.MFNode();

HAnimJoint197ZZZ.children[0] = HAnimSegment198;

let HAnimJoint206 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint206.name = "l_tarsometatarsal_1";
HAnimJoint206.DEF = "hanim_l_tarsometatarsal_1";
HAnimJoint206.center = new X3D.SFVec3f([2.8635,0.0194,2.4285]);
HAnimJoint206.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint206.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment207 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment207.name = "l_metatarsal_1";
HAnimSegment207.DEF = "hanim_l_metatarsal_1";
let Transform208 = browser.currentScene.createNode("Transform");
Transform208.translation = new X3D.SFVec3f([2.8635,0.0194,2.4285]);
let Transform209 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape210 = browser.currentScene.createNode("Shape");
Shape210.USE = "HAnimJointShape";
Transform209YYY.child = new X3D.undefined();

Transform209ZZZ.child[0] = Shape210;

Transform208YYY.children = new X3D.MFNode();

Transform208ZZZ.children[0] = Transform209;

HAnimSegment207YYY.children = new X3D.MFNode();

HAnimSegment207ZZZ.children[0] = Transform208;

let Shape211 = browser.currentScene.createNode("Shape");
let LineSet212 = browser.currentScene.createNode("LineSet");
LineSet212.vertexCount = new X3D.MFInt32([2]);
let Coordinate213 = browser.currentScene.createNode("Coordinate");
Coordinate213.point = new X3D.MFVec3f([2.8635,0.0194,2.4285,2.7525,0.0077,4.6255]);
coord = Coordinate213;

//from l_tarsometatarsal_1 to l_metatarsophalangeal_1 vertices 2
let ColorRGBA214 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA214.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA214;

geometry = LineSet212;

HAnimSegment207ZZZ.children[1] = Shape211;

let HAnimSite215 = browser.currentScene.createNode("HAnimSite");
HAnimSite215.name = "l_metatarsal_phalanx_1_pt";
HAnimSite215.DEF = "hanim_l_metatarsal_phalanx_1_pt";
let TouchSensor216 = browser.currentScene.createNode("TouchSensor");
TouchSensor216.description = "HAnimSite l_metatarsal_phalanx_1_pt";
HAnimSite215YYY.children = new X3D.MFNode();

HAnimSite215ZZZ.children[0] = TouchSensor216;

let Shape217 = browser.currentScene.createNode("Shape");
Shape217.USE = "HAnimSiteShape";
HAnimSite215ZZZ.children[1] = Shape217;

HAnimSegment207ZZZ.children[2] = HAnimSite215;

HAnimJoint206YYY.children = new X3D.MFNode();

HAnimJoint206ZZZ.children[0] = HAnimSegment207;

let HAnimJoint218 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint218.name = "l_metatarsophalangeal_1";
HAnimJoint218.DEF = "hanim_l_metatarsophalangeal_1";
HAnimJoint218.center = new X3D.SFVec3f([2.7525,0.0077,4.6255]);
HAnimJoint218.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint218.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment219 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment219.name = "l_tarsal_proximal_phalanx_1";
HAnimSegment219.DEF = "hanim_l_tarsal_proximal_phalanx_1";
let Transform220 = browser.currentScene.createNode("Transform");
Transform220.translation = new X3D.SFVec3f([2.7525,0.0077,4.6255]);
let Transform221 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape222 = browser.currentScene.createNode("Shape");
Shape222.USE = "HAnimJointShape";
Transform221YYY.child = new X3D.undefined();

Transform221ZZZ.child[0] = Shape222;

Transform220YYY.children = new X3D.MFNode();

Transform220ZZZ.children[0] = Transform221;

HAnimSegment219YYY.children = new X3D.MFNode();

HAnimSegment219ZZZ.children[0] = Transform220;

let Shape223 = browser.currentScene.createNode("Shape");
let LineSet224 = browser.currentScene.createNode("LineSet");
LineSet224.vertexCount = new X3D.MFInt32([2]);
let Coordinate225 = browser.currentScene.createNode("Coordinate");
Coordinate225.point = new X3D.MFVec3f([2.7525,0.0077,4.6255,2.7525,0.0077,4.6255]);
coord = Coordinate225;

//from l_metatarsophalangeal_1 to l_tarsal_interphalangeal_1 vertices 2
let ColorRGBA226 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA226.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA226;

geometry = LineSet224;

HAnimSegment219ZZZ.children[1] = Shape223;

let HAnimSite227 = browser.currentScene.createNode("HAnimSite");
HAnimSite227.name = "l_tarsal_distal_phalanx_1_tip";
HAnimSite227.DEF = "hanim_l_tarsal_distal_phalanx_1_tip";
let TouchSensor228 = browser.currentScene.createNode("TouchSensor");
TouchSensor228.description = "HAnimSite l_tarsal_distal_phalanx_1_tip";
HAnimSite227YYY.children = new X3D.MFNode();

HAnimSite227ZZZ.children[0] = TouchSensor228;

let Shape229 = browser.currentScene.createNode("Shape");
Shape229.USE = "HAnimSiteShape";
HAnimSite227ZZZ.children[1] = Shape229;

HAnimSegment219ZZZ.children[2] = HAnimSite227;

HAnimJoint218YYY.children = new X3D.MFNode();

HAnimJoint218ZZZ.children[0] = HAnimSegment219;

let HAnimJoint230 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint230.name = "l_tarsal_interphalangeal_1";
HAnimJoint230.DEF = "hanim_l_tarsal_interphalangeal_1";
HAnimJoint230.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint230.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint218ZZZ.children[1] = HAnimJoint230;

HAnimJoint206ZZZ.children[1] = HAnimJoint218;

HAnimJoint197ZZZ.children[1] = HAnimJoint206;

HAnimJoint180ZZZ.children[1] = HAnimJoint197;

let HAnimJoint231 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint231.name = "l_cuneonavicular_2";
HAnimJoint231.DEF = "hanim_l_cuneonavicular_2";
HAnimJoint231.center = new X3D.SFVec3f([3.6105,0.033,1.4168]);
HAnimJoint231.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint231.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment232 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment232.name = "l_cuneiform_2";
HAnimSegment232.DEF = "hanim_l_cuneiform_2";
let Transform233 = browser.currentScene.createNode("Transform");
Transform233.translation = new X3D.SFVec3f([3.6105,0.033,1.4168]);
let Transform234 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape235 = browser.currentScene.createNode("Shape");
Shape235.USE = "HAnimJointShape";
Transform234YYY.child = new X3D.undefined();

Transform234ZZZ.child[0] = Shape235;

Transform233YYY.children = new X3D.MFNode();

Transform233ZZZ.children[0] = Transform234;

HAnimSegment232YYY.children = new X3D.MFNode();

HAnimSegment232ZZZ.children[0] = Transform233;

let Shape236 = browser.currentScene.createNode("Shape");
let LineSet237 = browser.currentScene.createNode("LineSet");
LineSet237.vertexCount = new X3D.MFInt32([2]);
let Coordinate238 = browser.currentScene.createNode("Coordinate");
Coordinate238.point = new X3D.MFVec3f([3.6105,0.033,1.4168,3.5555,0.0232,2.2895]);
coord = Coordinate238;

//from l_cuneonavicular_2 to l_tarsometatarsal_2 vertices 2
let ColorRGBA239 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA239.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA239;

geometry = LineSet237;

HAnimSegment232ZZZ.children[1] = Shape236;

HAnimJoint231YYY.children = new X3D.MFNode();

HAnimJoint231ZZZ.children[0] = HAnimSegment232;

let HAnimJoint240 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint240.name = "l_tarsometatarsal_2";
HAnimJoint240.DEF = "hanim_l_tarsometatarsal_2";
HAnimJoint240.center = new X3D.SFVec3f([3.5555,0.0232,2.2895]);
HAnimJoint240.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint240.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment241 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment241.name = "l_metatarsal_2";
HAnimSegment241.DEF = "hanim_l_metatarsal_2";
let Transform242 = browser.currentScene.createNode("Transform");
Transform242.translation = new X3D.SFVec3f([3.5555,0.0232,2.2895]);
let Transform243 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape244 = browser.currentScene.createNode("Shape");
Shape244.USE = "HAnimJointShape";
Transform243YYY.child = new X3D.undefined();

Transform243ZZZ.child[0] = Shape244;

Transform242YYY.children = new X3D.MFNode();

Transform242ZZZ.children[0] = Transform243;

HAnimSegment241YYY.children = new X3D.MFNode();

HAnimSegment241ZZZ.children[0] = Transform242;

let Shape245 = browser.currentScene.createNode("Shape");
let LineSet246 = browser.currentScene.createNode("LineSet");
LineSet246.vertexCount = new X3D.MFInt32([2]);
let Coordinate247 = browser.currentScene.createNode("Coordinate");
Coordinate247.point = new X3D.MFVec3f([3.5555,0.0232,2.2895,3.6595,0.0085,4.8125]);
coord = Coordinate247;

//from l_tarsometatarsal_2 to l_metatarsophalangeal_2 vertices 2
let ColorRGBA248 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA248.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA248;

geometry = LineSet246;

HAnimSegment241ZZZ.children[1] = Shape245;

HAnimJoint240YYY.children = new X3D.MFNode();

HAnimJoint240ZZZ.children[0] = HAnimSegment241;

let HAnimJoint249 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint249.name = "l_metatarsophalangeal_2";
HAnimJoint249.DEF = "hanim_l_metatarsophalangeal_2";
HAnimJoint249.center = new X3D.SFVec3f([3.6595,0.0085,4.8125]);
HAnimJoint249.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint249.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment250 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment250.name = "l_tarsal_proximal_phalanx_2";
HAnimSegment250.DEF = "hanim_l_tarsal_proximal_phalanx_2";
let Transform251 = browser.currentScene.createNode("Transform");
Transform251.translation = new X3D.SFVec3f([3.6595,0.0085,4.8125]);
let Transform252 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape253 = browser.currentScene.createNode("Shape");
Shape253.USE = "HAnimJointShape";
Transform252YYY.child = new X3D.undefined();

Transform252ZZZ.child[0] = Shape253;

Transform251YYY.children = new X3D.MFNode();

Transform251ZZZ.children[0] = Transform252;

HAnimSegment250YYY.children = new X3D.MFNode();

HAnimSegment250ZZZ.children[0] = Transform251;

let Shape254 = browser.currentScene.createNode("Shape");
let LineSet255 = browser.currentScene.createNode("LineSet");
LineSet255.vertexCount = new X3D.MFInt32([2]);
let Coordinate256 = browser.currentScene.createNode("Coordinate");
Coordinate256.point = new X3D.MFVec3f([3.6595,0.0085,4.8125,3.7385,0.0054,5.5315]);
coord = Coordinate256;

//from l_metatarsophalangeal_2 to l_tarsal_proximal_interphalangeal_2 vertices 2
let ColorRGBA257 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA257.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA257;

geometry = LineSet255;

HAnimSegment250ZZZ.children[1] = Shape254;

HAnimJoint249YYY.children = new X3D.MFNode();

HAnimJoint249ZZZ.children[0] = HAnimSegment250;

let HAnimJoint258 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint258.name = "l_tarsal_proximal_interphalangeal_2";
HAnimJoint258.DEF = "hanim_l_tarsal_proximal_interphalangeal_2";
HAnimJoint258.center = new X3D.SFVec3f([3.7385,0.0054,5.5315]);
HAnimJoint258.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint258.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment259 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment259.name = "l_tarsal_middle_phalanx_2";
HAnimSegment259.DEF = "hanim_l_tarsal_middle_phalanx_2";
let Transform260 = browser.currentScene.createNode("Transform");
Transform260.translation = new X3D.SFVec3f([3.7385,0.0054,5.5315]);
let Transform261 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape262 = browser.currentScene.createNode("Shape");
Shape262.USE = "HAnimJointShape";
Transform261YYY.child = new X3D.undefined();

Transform261ZZZ.child[0] = Shape262;

Transform260YYY.children = new X3D.MFNode();

Transform260ZZZ.children[0] = Transform261;

HAnimSegment259YYY.children = new X3D.MFNode();

HAnimSegment259ZZZ.children[0] = Transform260;

let Shape263 = browser.currentScene.createNode("Shape");
let LineSet264 = browser.currentScene.createNode("LineSet");
LineSet264.vertexCount = new X3D.MFInt32([2]);
let Coordinate265 = browser.currentScene.createNode("Coordinate");
Coordinate265.point = new X3D.MFVec3f([3.7385,0.0054,5.5315,3.7385,0.0017,5.9505]);
coord = Coordinate265;

//from l_tarsal_proximal_interphalangeal_2 to l_tarsal_distal_interphalangeal_2 vertices 2
let ColorRGBA266 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA266.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA266;

geometry = LineSet264;

HAnimSegment259ZZZ.children[1] = Shape263;

let HAnimSite267 = browser.currentScene.createNode("HAnimSite");
HAnimSite267.name = "l_tarsal_distal_phalanx_2_tip";
HAnimSite267.DEF = "hanim_l_tarsal_distal_phalanx_2_tip";
HAnimSite267.translation = new X3D.SFVec3f([0.1195,0.0079,0.1433]);
let TouchSensor268 = browser.currentScene.createNode("TouchSensor");
TouchSensor268.description = "HAnimSite l_tarsal_distal_phalanx_2_tip";
HAnimSite267YYY.children = new X3D.MFNode();

HAnimSite267ZZZ.children[0] = TouchSensor268;

let Shape269 = browser.currentScene.createNode("Shape");
Shape269.USE = "HAnimSiteShape";
HAnimSite267ZZZ.children[1] = Shape269;

HAnimSegment259ZZZ.children[2] = HAnimSite267;

HAnimJoint258YYY.children = new X3D.MFNode();

HAnimJoint258ZZZ.children[0] = HAnimSegment259;

let HAnimJoint270 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint270.name = "l_tarsal_distal_interphalangeal_2";
HAnimJoint270.DEF = "hanim_l_tarsal_distal_interphalangeal_2";
HAnimJoint270.center = new X3D.SFVec3f([3.7385,0.0017,5.9505]);
HAnimJoint270.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint270.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint258ZZZ.children[1] = HAnimJoint270;

HAnimJoint249ZZZ.children[1] = HAnimJoint258;

HAnimJoint240ZZZ.children[1] = HAnimJoint249;

HAnimJoint231ZZZ.children[1] = HAnimJoint240;

HAnimJoint180ZZZ.children[2] = HAnimJoint231;

let HAnimJoint271 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint271.name = "l_cuneonavicular_3";
HAnimJoint271.DEF = "hanim_l_cuneonavicular_3";
HAnimJoint271.center = new X3D.SFVec3f([4.1235,0.0328,1.3453]);
HAnimJoint271.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint271.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment272 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment272.name = "l_cuneiform_3";
HAnimSegment272.DEF = "hanim_l_cuneiform_3";
let Transform273 = browser.currentScene.createNode("Transform");
Transform273.translation = new X3D.SFVec3f([4.1235,0.0328,1.3453]);
let Transform274 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape275 = browser.currentScene.createNode("Shape");
Shape275.USE = "HAnimJointShape";
Transform274YYY.child = new X3D.undefined();

Transform274ZZZ.child[0] = Shape275;

Transform273YYY.children = new X3D.MFNode();

Transform273ZZZ.children[0] = Transform274;

HAnimSegment272YYY.children = new X3D.MFNode();

HAnimSegment272ZZZ.children[0] = Transform273;

let Shape276 = browser.currentScene.createNode("Shape");
let LineSet277 = browser.currentScene.createNode("LineSet");
LineSet277.vertexCount = new X3D.MFInt32([2]);
let Coordinate278 = browser.currentScene.createNode("Coordinate");
Coordinate278.point = new X3D.MFVec3f([4.1235,0.0328,1.3453,3.7385,0.0017,5.9505]);
coord = Coordinate278;

//from l_cuneonavicular_3 to l_tarsometatarsal_3 vertices 2
let ColorRGBA279 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA279.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA279;

geometry = LineSet277;

HAnimSegment272ZZZ.children[1] = Shape276;

HAnimJoint271YYY.children = new X3D.MFNode();

HAnimJoint271ZZZ.children[0] = HAnimSegment272;

let HAnimJoint280 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint280.name = "l_tarsometatarsal_3";
HAnimJoint280.DEF = "hanim_l_tarsometatarsal_3";
HAnimJoint280.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint280.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment281 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment281.name = "l_metatarsal_3";
HAnimSegment281.DEF = "hanim_l_metatarsal_3";
let Transform282 = browser.currentScene.createNode("Transform");
Transform282.translation = new X3D.SFVec3f([4.1235,0.0328,1.3453]);
let Transform283 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape284 = browser.currentScene.createNode("Shape");
Shape284.USE = "HAnimJointShape";
Transform283YYY.child = new X3D.undefined();

Transform283ZZZ.child[0] = Shape284;

Transform282YYY.children = new X3D.MFNode();

Transform282ZZZ.children[0] = Transform283;

HAnimSegment281YYY.children = new X3D.MFNode();

HAnimSegment281ZZZ.children[0] = Transform282;

let Shape285 = browser.currentScene.createNode("Shape");
let LineSet286 = browser.currentScene.createNode("LineSet");
LineSet286.vertexCount = new X3D.MFInt32([2]);
let Coordinate287 = browser.currentScene.createNode("Coordinate");
Coordinate287.point = new X3D.MFVec3f([4.2795,0.0086,4.7055]);
coord = Coordinate287;

//from l_tarsometatarsal_3 to l_metatarsophalangeal_3 vertices 1
let ColorRGBA288 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA288.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA288;

geometry = LineSet286;

HAnimSegment281ZZZ.children[1] = Shape285;

HAnimJoint280YYY.children = new X3D.MFNode();

HAnimJoint280ZZZ.children[0] = HAnimSegment281;

let HAnimJoint289 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint289.name = "l_metatarsophalangeal_3";
HAnimJoint289.DEF = "hanim_l_metatarsophalangeal_3";
HAnimJoint289.center = new X3D.SFVec3f([4.2795,0.0086,4.7055]);
HAnimJoint289.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint289.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment290 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment290.name = "l_tarsal_proximal_phalanx_3";
HAnimSegment290.DEF = "hanim_l_tarsal_proximal_phalanx_3";
let Transform291 = browser.currentScene.createNode("Transform");
Transform291.translation = new X3D.SFVec3f([4.2795,0.0086,4.7055]);
let Transform292 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape293 = browser.currentScene.createNode("Shape");
Shape293.USE = "HAnimJointShape";
Transform292YYY.child = new X3D.undefined();

Transform292ZZZ.child[0] = Shape293;

Transform291YYY.children = new X3D.MFNode();

Transform291ZZZ.children[0] = Transform292;

HAnimSegment290YYY.children = new X3D.MFNode();

HAnimSegment290ZZZ.children[0] = Transform291;

let Shape294 = browser.currentScene.createNode("Shape");
let LineSet295 = browser.currentScene.createNode("LineSet");
LineSet295.vertexCount = new X3D.MFInt32([2]);
let Coordinate296 = browser.currentScene.createNode("Coordinate");
Coordinate296.point = new X3D.MFVec3f([4.2795,0.0086,4.7055,4.3855,0.0044,5.3745]);
coord = Coordinate296;

//from l_metatarsophalangeal_3 to l_tarsal_proximal_interphalangeal_3 vertices 2
let ColorRGBA297 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA297.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA297;

geometry = LineSet295;

HAnimSegment290ZZZ.children[1] = Shape294;

HAnimJoint289YYY.children = new X3D.MFNode();

HAnimJoint289ZZZ.children[0] = HAnimSegment290;

let HAnimJoint298 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint298.name = "l_tarsal_proximal_interphalangeal_3";
HAnimJoint298.DEF = "hanim_l_tarsal_proximal_interphalangeal_3";
HAnimJoint298.center = new X3D.SFVec3f([4.3855,0.0044,5.3745]);
HAnimJoint298.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint298.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment299 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment299.name = "l_tarsal_middle_phalanx_3";
HAnimSegment299.DEF = "hanim_l_tarsal_middle_phalanx_3";
let Transform300 = browser.currentScene.createNode("Transform");
Transform300.translation = new X3D.SFVec3f([4.3855,0.0044,5.3745]);
let Transform301 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape302 = browser.currentScene.createNode("Shape");
Shape302.USE = "HAnimJointShape";
Transform301YYY.child = new X3D.undefined();

Transform301ZZZ.child[0] = Shape302;

Transform300YYY.children = new X3D.MFNode();

Transform300ZZZ.children[0] = Transform301;

HAnimSegment299YYY.children = new X3D.MFNode();

HAnimSegment299ZZZ.children[0] = Transform300;

let Shape303 = browser.currentScene.createNode("Shape");
let LineSet304 = browser.currentScene.createNode("LineSet");
LineSet304.vertexCount = new X3D.MFInt32([2]);
let Coordinate305 = browser.currentScene.createNode("Coordinate");
Coordinate305.point = new X3D.MFVec3f([4.3855,0.0044,5.3745,4.4545,0.0017,5.7845]);
coord = Coordinate305;

//from l_tarsal_proximal_interphalangeal_3 to l_tarsal_distal_interphalangeal_3 vertices 2
let ColorRGBA306 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA306.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA306;

geometry = LineSet304;

HAnimSegment299ZZZ.children[1] = Shape303;

let HAnimSite307 = browser.currentScene.createNode("HAnimSite");
HAnimSite307.name = "l_tarsal_distal_phalanx_3_tip";
HAnimSite307.DEF = "hanim_l_tarsal_distal_phalanx_3_tip";
let TouchSensor308 = browser.currentScene.createNode("TouchSensor");
TouchSensor308.description = "HAnimSite l_tarsal_distal_phalanx_3_tip";
HAnimSite307YYY.children = new X3D.MFNode();

HAnimSite307ZZZ.children[0] = TouchSensor308;

let Shape309 = browser.currentScene.createNode("Shape");
Shape309.USE = "HAnimSiteShape";
HAnimSite307ZZZ.children[1] = Shape309;

HAnimSegment299ZZZ.children[2] = HAnimSite307;

HAnimJoint298YYY.children = new X3D.MFNode();

HAnimJoint298ZZZ.children[0] = HAnimSegment299;

let HAnimJoint310 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint310.name = "l_tarsal_distal_interphalangeal_3";
HAnimJoint310.DEF = "hanim_l_tarsal_distal_interphalangeal_3";
HAnimJoint310.center = new X3D.SFVec3f([4.4545,0.0017,5.7845]);
HAnimJoint310.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint310.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint298ZZZ.children[1] = HAnimJoint310;

HAnimJoint289ZZZ.children[1] = HAnimJoint298;

HAnimJoint280ZZZ.children[1] = HAnimJoint289;

HAnimJoint271ZZZ.children[1] = HAnimJoint280;

HAnimJoint180ZZZ.children[3] = HAnimJoint271;

HAnimJoint167ZZZ.children[1] = HAnimJoint180;

let HAnimJoint311 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint311.name = "l_calcaneocuboid";
HAnimJoint311.DEF = "hanim_l_calcaneocuboid";
HAnimJoint311.center = new X3D.SFVec3f([3.9515,0.0653,-0.6895]);
HAnimJoint311.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint311.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment312 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment312.name = "l_calcaneus";
HAnimSegment312.DEF = "hanim_l_calcaneus";
let Transform313 = browser.currentScene.createNode("Transform");
Transform313.translation = new X3D.SFVec3f([3.9515,0.0653,-0.6895]);
let Transform314 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape315 = browser.currentScene.createNode("Shape");
Shape315.USE = "HAnimJointShape";
Transform314YYY.child = new X3D.undefined();

Transform314ZZZ.child[0] = Shape315;

Transform313YYY.children = new X3D.MFNode();

Transform313ZZZ.children[0] = Transform314;

HAnimSegment312YYY.children = new X3D.MFNode();

HAnimSegment312ZZZ.children[0] = Transform313;

let Shape316 = browser.currentScene.createNode("Shape");
let LineSet317 = browser.currentScene.createNode("LineSet");
LineSet317.vertexCount = new X3D.MFInt32([2]);
let Coordinate318 = browser.currentScene.createNode("Coordinate");
Coordinate318.point = new X3D.MFVec3f([3.9515,0.0653,-0.6895,4.9085,0.0353,0.5574]);
coord = Coordinate318;

//from l_calcaneocuboid to l_transversetarsal vertices 2
let ColorRGBA319 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA319.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA319;

geometry = LineSet317;

HAnimSegment312ZZZ.children[1] = Shape316;

HAnimJoint311YYY.children = new X3D.MFNode();

HAnimJoint311ZZZ.children[0] = HAnimSegment312;

let HAnimJoint320 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint320.name = "l_transversetarsal";
HAnimJoint320.DEF = "hanim_l_transversetarsal";
HAnimJoint320.center = new X3D.SFVec3f([4.9085,0.0353,0.5574]);
HAnimJoint320.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint320.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment321 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment321.name = "l_cuboid";
HAnimSegment321.DEF = "hanim_l_cuboid";
let Transform322 = browser.currentScene.createNode("Transform");
Transform322.translation = new X3D.SFVec3f([4.9085,0.0353,0.5574]);
let Transform323 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape324 = browser.currentScene.createNode("Shape");
Shape324.USE = "HAnimJointShape";
Transform323YYY.child = new X3D.undefined();

Transform323ZZZ.child[0] = Shape324;

Transform322YYY.children = new X3D.MFNode();

Transform322ZZZ.children[0] = Transform323;

HAnimSegment321YYY.children = new X3D.MFNode();

HAnimSegment321ZZZ.children[0] = Transform322;

let Shape325 = browser.currentScene.createNode("Shape");
let LineSet326 = browser.currentScene.createNode("LineSet");
LineSet326.vertexCount = new X3D.MFInt32([2]);
let Coordinate327 = browser.currentScene.createNode("Coordinate");
Coordinate327.point = new X3D.MFVec3f([4.9085,0.0353,0.5574,4.7245,0.0211,2.1725]);
coord = Coordinate327;

//from l_transversetarsal to l_tarsometatarsal_4 vertices 2
let ColorRGBA328 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA328.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA328;

geometry = LineSet326;

HAnimSegment321ZZZ.children[1] = Shape325;

let Shape329 = browser.currentScene.createNode("Shape");
let LineSet330 = browser.currentScene.createNode("LineSet");
LineSet330.vertexCount = new X3D.MFInt32([2]);
let Coordinate331 = browser.currentScene.createNode("Coordinate");
Coordinate331.point = new X3D.MFVec3f([4.9085,0.0353,0.5574,5.3615,0.0164,2.0085]);
coord = Coordinate331;

//from l_transversetarsal to l_tarsometatarsal_5 vertices 2
let ColorRGBA332 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA332.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA332;

geometry = LineSet330;

HAnimSegment321ZZZ.children[2] = Shape329;

HAnimJoint320YYY.children = new X3D.MFNode();

HAnimJoint320ZZZ.children[0] = HAnimSegment321;

let HAnimJoint333 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint333.name = "l_tarsometatarsal_4";
HAnimJoint333.DEF = "hanim_l_tarsometatarsal_4";
HAnimJoint333.center = new X3D.SFVec3f([4.7245,0.0211,2.1725]);
HAnimJoint333.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint333.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment334 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment334.name = "l_metatarsal_4";
HAnimSegment334.DEF = "hanim_l_metatarsal_4";
let Transform335 = browser.currentScene.createNode("Transform");
Transform335.translation = new X3D.SFVec3f([4.7245,0.0211,2.1725]);
let Transform336 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape337 = browser.currentScene.createNode("Shape");
Shape337.USE = "HAnimJointShape";
Transform336YYY.child = new X3D.undefined();

Transform336ZZZ.child[0] = Shape337;

Transform335YYY.children = new X3D.MFNode();

Transform335ZZZ.children[0] = Transform336;

HAnimSegment334YYY.children = new X3D.MFNode();

HAnimSegment334ZZZ.children[0] = Transform335;

let Shape338 = browser.currentScene.createNode("Shape");
let LineSet339 = browser.currentScene.createNode("LineSet");
LineSet339.vertexCount = new X3D.MFInt32([2]);
let Coordinate340 = browser.currentScene.createNode("Coordinate");
Coordinate340.point = new X3D.MFVec3f([4.7245,0.0211,2.1725,4.8745,0.0076,4.5165]);
coord = Coordinate340;

//from l_tarsometatarsal_4 to l_metatarsophalangeal_4 vertices 2
let ColorRGBA341 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA341.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA341;

geometry = LineSet339;

HAnimSegment334ZZZ.children[1] = Shape338;

HAnimJoint333YYY.children = new X3D.MFNode();

HAnimJoint333ZZZ.children[0] = HAnimSegment334;

let HAnimJoint342 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint342.name = "l_metatarsophalangeal_4";
HAnimJoint342.DEF = "hanim_l_metatarsophalangeal_4";
HAnimJoint342.center = new X3D.SFVec3f([4.8745,0.0076,4.5165]);
HAnimJoint342.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint342.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment343 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment343.name = "l_tarsal_proximal_phalanx_4";
HAnimSegment343.DEF = "hanim_l_tarsal_proximal_phalanx_4";
let Transform344 = browser.currentScene.createNode("Transform");
Transform344.translation = new X3D.SFVec3f([4.8745,0.0076,4.5165]);
let Transform345 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape346 = browser.currentScene.createNode("Shape");
Shape346.USE = "HAnimJointShape";
Transform345YYY.child = new X3D.undefined();

Transform345ZZZ.child[0] = Shape346;

Transform344YYY.children = new X3D.MFNode();

Transform344ZZZ.children[0] = Transform345;

HAnimSegment343YYY.children = new X3D.MFNode();

HAnimSegment343ZZZ.children[0] = Transform344;

let Shape347 = browser.currentScene.createNode("Shape");
let LineSet348 = browser.currentScene.createNode("LineSet");
LineSet348.vertexCount = new X3D.MFInt32([2]);
let Coordinate349 = browser.currentScene.createNode("Coordinate");
Coordinate349.point = new X3D.MFVec3f([4.8745,0.0076,4.5165,5.0655,0.0049,5.1895]);
coord = Coordinate349;

//from l_metatarsophalangeal_4 to l_tarsal_proximal_interphalangeal_4 vertices 2
let ColorRGBA350 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA350.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA350;

geometry = LineSet348;

HAnimSegment343ZZZ.children[1] = Shape347;

HAnimJoint342YYY.children = new X3D.MFNode();

HAnimJoint342ZZZ.children[0] = HAnimSegment343;

let HAnimJoint351 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint351.name = "l_tarsal_proximal_interphalangeal_4";
HAnimJoint351.DEF = "hanim_l_tarsal_proximal_interphalangeal_4";
HAnimJoint351.center = new X3D.SFVec3f([5.0655,0.0049,5.1895]);
HAnimJoint351.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint351.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment352 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment352.name = "l_tarsal_middle_phalanx_4";
HAnimSegment352.DEF = "hanim_l_tarsal_middle_phalanx_4";
let Transform353 = browser.currentScene.createNode("Transform");
Transform353.translation = new X3D.SFVec3f([5.0655,0.0049,5.1895]);
let Transform354 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape355 = browser.currentScene.createNode("Shape");
Shape355.USE = "HAnimJointShape";
Transform354YYY.child = new X3D.undefined();

Transform354ZZZ.child[0] = Shape355;

Transform353YYY.children = new X3D.MFNode();

Transform353ZZZ.children[0] = Transform354;

HAnimSegment352YYY.children = new X3D.MFNode();

HAnimSegment352ZZZ.children[0] = Transform353;

let Shape356 = browser.currentScene.createNode("Shape");
let LineSet357 = browser.currentScene.createNode("LineSet");
LineSet357.vertexCount = new X3D.MFInt32([2]);
let Coordinate358 = browser.currentScene.createNode("Coordinate");
Coordinate358.point = new X3D.MFVec3f([5.0655,0.0049,5.1895,5.1325,0.0011,5.5175]);
coord = Coordinate358;

//from l_tarsal_proximal_interphalangeal_4 to l_tarsal_distal_interphalangeal_4 vertices 2
let ColorRGBA359 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA359.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA359;

geometry = LineSet357;

HAnimSegment352ZZZ.children[1] = Shape356;

let HAnimSite360 = browser.currentScene.createNode("HAnimSite");
HAnimSite360.name = "l_tarsal_distal_phalanx_4_tip";
HAnimSite360.DEF = "hanim_l_tarsal_distal_phalanx_4_tip";
let TouchSensor361 = browser.currentScene.createNode("TouchSensor");
TouchSensor361.description = "HAnimSite l_tarsal_distal_phalanx_4_tip";
HAnimSite360YYY.children = new X3D.MFNode();

HAnimSite360ZZZ.children[0] = TouchSensor361;

let Shape362 = browser.currentScene.createNode("Shape");
Shape362.USE = "HAnimSiteShape";
HAnimSite360ZZZ.children[1] = Shape362;

HAnimSegment352ZZZ.children[2] = HAnimSite360;

HAnimJoint351YYY.children = new X3D.MFNode();

HAnimJoint351ZZZ.children[0] = HAnimSegment352;

let HAnimJoint363 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint363.name = "l_tarsal_distal_interphalangeal_4";
HAnimJoint363.DEF = "hanim_l_tarsal_distal_interphalangeal_4";
HAnimJoint363.center = new X3D.SFVec3f([5.1325,0.0011,5.5175]);
HAnimJoint363.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint363.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint351ZZZ.children[1] = HAnimJoint363;

HAnimJoint342ZZZ.children[1] = HAnimJoint351;

HAnimJoint333ZZZ.children[1] = HAnimJoint342;

HAnimJoint320ZZZ.children[1] = HAnimJoint333;

let HAnimJoint364 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint364.name = "l_tarsometatarsal_5";
HAnimJoint364.DEF = "hanim_l_tarsometatarsal_5";
HAnimJoint364.center = new X3D.SFVec3f([5.3615,0.0164,2.0085]);
HAnimJoint364.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint364.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment365 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment365.name = "l_metatarsal_5";
HAnimSegment365.DEF = "hanim_l_metatarsal_5";
let Transform366 = browser.currentScene.createNode("Transform");
Transform366.translation = new X3D.SFVec3f([5.3615,0.0164,2.0085]);
let Transform367 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape368 = browser.currentScene.createNode("Shape");
Shape368.USE = "HAnimJointShape";
Transform367YYY.child = new X3D.undefined();

Transform367ZZZ.child[0] = Shape368;

Transform366YYY.children = new X3D.MFNode();

Transform366ZZZ.children[0] = Transform367;

HAnimSegment365YYY.children = new X3D.MFNode();

HAnimSegment365ZZZ.children[0] = Transform366;

let Shape369 = browser.currentScene.createNode("Shape");
let LineSet370 = browser.currentScene.createNode("LineSet");
LineSet370.vertexCount = new X3D.MFInt32([2]);
let Coordinate371 = browser.currentScene.createNode("Coordinate");
Coordinate371.point = new X3D.MFVec3f([5.3615,0.0164,2.0085,5.5055,0.0067,4.3115]);
coord = Coordinate371;

//from l_tarsometatarsal_5 to l_metatarsophalangeal_5 vertices 2
let ColorRGBA372 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA372.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA372;

geometry = LineSet370;

HAnimSegment365ZZZ.children[1] = Shape369;

let HAnimSite373 = browser.currentScene.createNode("HAnimSite");
HAnimSite373.name = "l_metatarsal_phalanx_5_pt";
HAnimSite373.DEF = "hanim_l_metatarsal_phalanx_5_pt";
let TouchSensor374 = browser.currentScene.createNode("TouchSensor");
TouchSensor374.description = "HAnimSite l_metatarsal_phalanx_5_pt";
HAnimSite373YYY.children = new X3D.MFNode();

HAnimSite373ZZZ.children[0] = TouchSensor374;

let Shape375 = browser.currentScene.createNode("Shape");
Shape375.USE = "HAnimSiteShape";
HAnimSite373ZZZ.children[1] = Shape375;

HAnimSegment365ZZZ.children[2] = HAnimSite373;

HAnimJoint364YYY.children = new X3D.MFNode();

HAnimJoint364ZZZ.children[0] = HAnimSegment365;

let HAnimJoint376 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint376.name = "l_metatarsophalangeal_5";
HAnimJoint376.DEF = "hanim_l_metatarsophalangeal_5";
HAnimJoint376.center = new X3D.SFVec3f([5.5055,0.0067,4.3115]);
HAnimJoint376.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint376.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment377 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment377.name = "l_tarsal_proximal_phalanx_5";
HAnimSegment377.DEF = "hanim_l_tarsal_proximal_phalanx_5";
let Transform378 = browser.currentScene.createNode("Transform");
Transform378.translation = new X3D.SFVec3f([5.5055,0.0067,4.3115]);
let Transform379 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape380 = browser.currentScene.createNode("Shape");
Shape380.USE = "HAnimJointShape";
Transform379YYY.child = new X3D.undefined();

Transform379ZZZ.child[0] = Shape380;

Transform378YYY.children = new X3D.MFNode();

Transform378ZZZ.children[0] = Transform379;

HAnimSegment377YYY.children = new X3D.MFNode();

HAnimSegment377ZZZ.children[0] = Transform378;

let Shape381 = browser.currentScene.createNode("Shape");
let LineSet382 = browser.currentScene.createNode("LineSet");
LineSet382.vertexCount = new X3D.MFInt32([2]);
let Coordinate383 = browser.currentScene.createNode("Coordinate");
Coordinate383.point = new X3D.MFVec3f([5.5055,0.0067,4.3115,5.6085,0.003,4.6485]);
coord = Coordinate383;

//from l_metatarsophalangeal_5 to l_tarsal_proximal_interphalangeal_5 vertices 2
let ColorRGBA384 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA384.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA384;

geometry = LineSet382;

HAnimSegment377ZZZ.children[1] = Shape381;

HAnimJoint376YYY.children = new X3D.MFNode();

HAnimJoint376ZZZ.children[0] = HAnimSegment377;

let HAnimJoint385 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint385.name = "l_tarsal_proximal_interphalangeal_5";
HAnimJoint385.DEF = "hanim_l_tarsal_proximal_interphalangeal_5";
HAnimJoint385.center = new X3D.SFVec3f([5.6085,0.003,4.6485]);
HAnimJoint385.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint385.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment386 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment386.name = "l_tarsal_middle_phalanx_5";
HAnimSegment386.DEF = "hanim_l_tarsal_middle_phalanx_5";
let Transform387 = browser.currentScene.createNode("Transform");
Transform387.translation = new X3D.SFVec3f([5.6085,0.003,4.6485]);
let Transform388 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape389 = browser.currentScene.createNode("Shape");
Shape389.USE = "HAnimJointShape";
Transform388YYY.child = new X3D.undefined();

Transform388ZZZ.child[0] = Shape389;

Transform387YYY.children = new X3D.MFNode();

Transform387ZZZ.children[0] = Transform388;

HAnimSegment386YYY.children = new X3D.MFNode();

HAnimSegment386ZZZ.children[0] = Transform387;

let Shape390 = browser.currentScene.createNode("Shape");
let LineSet391 = browser.currentScene.createNode("LineSet");
LineSet391.vertexCount = new X3D.MFInt32([2]);
let Coordinate392 = browser.currentScene.createNode("Coordinate");
Coordinate392.point = new X3D.MFVec3f([5.6085,0.003,4.6485,5.6485,0,4.9925]);
coord = Coordinate392;

//from l_tarsal_proximal_interphalangeal_5 to l_tarsal_distal_interphalangeal_5 vertices 2
let ColorRGBA393 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA393.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA393;

geometry = LineSet391;

HAnimSegment386ZZZ.children[1] = Shape390;

let HAnimSite394 = browser.currentScene.createNode("HAnimSite");
HAnimSite394.name = "l_tarsal_distal_phalanx_5_tip";
HAnimSite394.DEF = "hanim_l_tarsal_distal_phalanx_5_tip";
let TouchSensor395 = browser.currentScene.createNode("TouchSensor");
TouchSensor395.description = "HAnimSite l_tarsal_distal_phalanx_5_tip";
HAnimSite394YYY.children = new X3D.MFNode();

HAnimSite394ZZZ.children[0] = TouchSensor395;

let Shape396 = browser.currentScene.createNode("Shape");
Shape396.USE = "HAnimSiteShape";
HAnimSite394ZZZ.children[1] = Shape396;

HAnimSegment386ZZZ.children[2] = HAnimSite394;

HAnimJoint385YYY.children = new X3D.MFNode();

HAnimJoint385ZZZ.children[0] = HAnimSegment386;

let HAnimJoint397 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint397.name = "l_tarsal_distal_interphalangeal_5";
HAnimJoint397.DEF = "hanim_l_tarsal_distal_interphalangeal_5";
HAnimJoint397.center = new X3D.SFVec3f([5.6485,0,4.9925]);
HAnimJoint397.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint397.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint385ZZZ.children[1] = HAnimJoint397;

HAnimJoint376ZZZ.children[1] = HAnimJoint385;

HAnimJoint364ZZZ.children[1] = HAnimJoint376;

HAnimJoint320ZZZ.children[2] = HAnimJoint364;

HAnimJoint311ZZZ.children[1] = HAnimJoint320;

HAnimJoint167ZZZ.children[2] = HAnimJoint311;

HAnimJoint152ZZZ.children[1] = HAnimJoint167;

HAnimJoint134ZZZ.children[1] = HAnimJoint152;

HAnimJoint97ZZZ.children[1] = HAnimJoint134;

let HAnimJoint398 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint398.name = "r_hip";
HAnimJoint398.DEF = "hanim_r_hip";
HAnimJoint398.center = new X3D.SFVec3f([-0.095,0.9171,0.0029]);
HAnimJoint398.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint398.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment399 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment399.name = "r_thigh";
HAnimSegment399.DEF = "hanim_r_thigh";
let Transform400 = browser.currentScene.createNode("Transform");
Transform400.translation = new X3D.SFVec3f([-0.095,0.9171,0.0029]);
let Transform401 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape402 = browser.currentScene.createNode("Shape");
Shape402.USE = "HAnimJointShape";
Transform401YYY.child = new X3D.undefined();

Transform401ZZZ.child[0] = Shape402;

Transform400YYY.children = new X3D.MFNode();

Transform400ZZZ.children[0] = Transform401;

HAnimSegment399YYY.children = new X3D.MFNode();

HAnimSegment399ZZZ.children[0] = Transform400;

let Shape403 = browser.currentScene.createNode("Shape");
let LineSet404 = browser.currentScene.createNode("LineSet");
LineSet404.vertexCount = new X3D.MFInt32([2]);
let Coordinate405 = browser.currentScene.createNode("Coordinate");
Coordinate405.point = new X3D.MFVec3f([-0.095,0.9171,0.0029,-0.0867,0.4913,0.0318]);
coord = Coordinate405;

//from r_hip to r_knee vertices 2
let ColorRGBA406 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA406.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA406;

geometry = LineSet404;

HAnimSegment399ZZZ.children[1] = Shape403;

let HAnimSite407 = browser.currentScene.createNode("HAnimSite");
HAnimSite407.name = "r_lateral_malleolus_pt";
HAnimSite407.DEF = "hanim_r_lateral_malleolus_pt";
HAnimSite407.translation = new X3D.SFVec3f([-0.1006,0.0658,-0.1075]);
let TouchSensor408 = browser.currentScene.createNode("TouchSensor");
TouchSensor408.description = "HAnimSite r_lateral_malleolus_pt";
HAnimSite407YYY.children = new X3D.MFNode();

HAnimSite407ZZZ.children[0] = TouchSensor408;

let Shape409 = browser.currentScene.createNode("Shape");
Shape409.USE = "HAnimSiteShape";
HAnimSite407ZZZ.children[1] = Shape409;

HAnimSegment399ZZZ.children[2] = HAnimSite407;

let HAnimSite410 = browser.currentScene.createNode("HAnimSite");
HAnimSite410.name = "r_medial_malleolus_pt";
HAnimSite410.DEF = "hanim_r_medial_malleolus_pt";
HAnimSite410.translation = new X3D.SFVec3f([-0.0591,0.076,-0.0928]);
let TouchSensor411 = browser.currentScene.createNode("TouchSensor");
TouchSensor411.description = "HAnimSite r_medial_malleolus_pt";
HAnimSite410YYY.children = new X3D.MFNode();

HAnimSite410ZZZ.children[0] = TouchSensor411;

let Shape412 = browser.currentScene.createNode("Shape");
Shape412.USE = "HAnimSiteShape";
HAnimSite410ZZZ.children[1] = Shape412;

HAnimSegment399ZZZ.children[3] = HAnimSite410;

let HAnimSite413 = browser.currentScene.createNode("HAnimSite");
HAnimSite413.name = "r_tibiale_pt";
HAnimSite413.DEF = "hanim_r_tibiale_pt";
let TouchSensor414 = browser.currentScene.createNode("TouchSensor");
TouchSensor414.description = "HAnimSite r_tibiale_pt";
HAnimSite413YYY.children = new X3D.MFNode();

HAnimSite413ZZZ.children[0] = TouchSensor414;

let Shape415 = browser.currentScene.createNode("Shape");
Shape415.USE = "HAnimSiteShape";
HAnimSite413ZZZ.children[1] = Shape415;

HAnimSegment399ZZZ.children[4] = HAnimSite413;

HAnimJoint398YYY.children = new X3D.MFNode();

HAnimJoint398ZZZ.children[0] = HAnimSegment399;

let HAnimJoint416 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint416.name = "r_knee";
HAnimJoint416.DEF = "hanim_r_knee";
HAnimJoint416.center = new X3D.SFVec3f([-0.0867,0.4913,0.0318]);
HAnimJoint416.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint416.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment417 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment417.name = "r_calf";
HAnimSegment417.DEF = "hanim_r_calf";
let Transform418 = browser.currentScene.createNode("Transform");
Transform418.translation = new X3D.SFVec3f([-0.0867,0.4913,0.0318]);
let Transform419 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape420 = browser.currentScene.createNode("Shape");
Shape420.USE = "HAnimJointShape";
Transform419YYY.child = new X3D.undefined();

Transform419ZZZ.child[0] = Shape420;

Transform418YYY.children = new X3D.MFNode();

Transform418ZZZ.children[0] = Transform419;

HAnimSegment417YYY.children = new X3D.MFNode();

HAnimSegment417ZZZ.children[0] = Transform418;

let Shape421 = browser.currentScene.createNode("Shape");
let LineSet422 = browser.currentScene.createNode("LineSet");
LineSet422.vertexCount = new X3D.MFInt32([2]);
let Coordinate423 = browser.currentScene.createNode("Coordinate");
Coordinate423.point = new X3D.MFVec3f([-0.0867,0.4913,0.0318,-0.0801,0.0712,-0.0766]);
coord = Coordinate423;

//from r_knee to r_talocrural vertices 2
let ColorRGBA424 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA424.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA424;

geometry = LineSet422;

HAnimSegment417ZZZ.children[1] = Shape421;

let HAnimSite425 = browser.currentScene.createNode("HAnimSite");
HAnimSite425.name = "r_calcaneus_posterior_pt";
HAnimSite425.DEF = "hanim_r_calcaneus_posterior_pt";
HAnimSite425.translation = new X3D.SFVec3f([-0.0692,0.0297,-0.1221]);
let TouchSensor426 = browser.currentScene.createNode("TouchSensor");
TouchSensor426.description = "HAnimSite r_calcaneus_posterior_pt";
HAnimSite425YYY.children = new X3D.MFNode();

HAnimSite425ZZZ.children[0] = TouchSensor426;

let Shape427 = browser.currentScene.createNode("Shape");
Shape427.USE = "HAnimSiteShape";
HAnimSite425ZZZ.children[1] = Shape427;

HAnimSegment417ZZZ.children[2] = HAnimSite425;

let HAnimSite428 = browser.currentScene.createNode("HAnimSite");
HAnimSite428.name = "r_sphyrion_pt";
HAnimSite428.DEF = "hanim_r_sphyrion_pt";
HAnimSite428.translation = new X3D.SFVec3f([-0.0603,0.061,-0.1002]);
let TouchSensor429 = browser.currentScene.createNode("TouchSensor");
TouchSensor429.description = "HAnimSite r_sphyrion_pt";
HAnimSite428YYY.children = new X3D.MFNode();

HAnimSite428ZZZ.children[0] = TouchSensor429;

let Shape430 = browser.currentScene.createNode("Shape");
Shape430.USE = "HAnimSiteShape";
HAnimSite428ZZZ.children[1] = Shape430;

HAnimSegment417ZZZ.children[3] = HAnimSite428;

HAnimJoint416YYY.children = new X3D.MFNode();

HAnimJoint416ZZZ.children[0] = HAnimSegment417;

let HAnimJoint431 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint431.name = "r_talocrural";
HAnimJoint431.DEF = "hanim_r_talocrural";
HAnimJoint431.center = new X3D.SFVec3f([-0.0801,0.0712,-0.0766]);
HAnimJoint431.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint431.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment432 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment432.name = "r_talus";
HAnimSegment432.DEF = "hanim_r_talus";
let Transform433 = browser.currentScene.createNode("Transform");
Transform433.scale = new X3D.SFVec3f([0.15,0.15,0.15]);
Transform433.translation = new X3D.SFVec3f([-0.05,0.06,-0.025]);
Transform433.rotation = new X3D.SFRotation([1,0,0,-1.57]);
//Transform right foot
let Transform434 = browser.currentScene.createNode("Transform");
//Empty Transform right foot
let Shape435 = browser.currentScene.createNode("Shape");
Shape435.USE = "HAnimJointShape";
Transform434YYY.child = new X3D.undefined();

Transform434ZZZ.child[0] = Shape435;

Transform433YYY.children = new X3D.MFNode();

Transform433ZZZ.children[0] = Transform434;

HAnimSegment432YYY.children = new X3D.MFNode();

HAnimSegment432ZZZ.children[0] = Transform433;

let Shape436 = browser.currentScene.createNode("Shape");
let LineSet437 = browser.currentScene.createNode("LineSet");
LineSet437.vertexCount = new X3D.MFInt32([2]);
let Coordinate438 = browser.currentScene.createNode("Coordinate");
Coordinate438.point = new X3D.MFVec3f([-0.0801,0.0712,-0.0766,-3.4725,0.0374,0.6807]);
coord = Coordinate438;

//from r_talocrural to r_talocalcaneonavicular vertices 2
let ColorRGBA439 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA439.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA439;

geometry = LineSet437;

HAnimSegment432ZZZ.children[1] = Shape436;

let Shape440 = browser.currentScene.createNode("Shape");
let LineSet441 = browser.currentScene.createNode("LineSet");
LineSet441.vertexCount = new X3D.MFInt32([2]);
let Coordinate442 = browser.currentScene.createNode("Coordinate");
Coordinate442.point = new X3D.MFVec3f([-0.0801,0.0712,-0.0766,-3.9515,0.0653,-0.6895]);
coord = Coordinate442;

//from r_talocrural to r_calcaneocuboid vertices 2
let ColorRGBA443 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA443.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA443;

geometry = LineSet441;

HAnimSegment432ZZZ.children[2] = Shape440;

HAnimJoint431YYY.children = new X3D.MFNode();

HAnimJoint431ZZZ.children[0] = HAnimSegment432;

let HAnimJoint444 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint444.name = "r_talocalcaneonavicular";
HAnimJoint444.DEF = "hanim_r_talocalcaneonavicular";
HAnimJoint444.center = new X3D.SFVec3f([-3.4725,0.0374,0.6807]);
HAnimJoint444.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint444.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment445 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment445.name = "r_navicular";
HAnimSegment445.DEF = "hanim_r_navicular";
let Transform446 = browser.currentScene.createNode("Transform");
Transform446.translation = new X3D.SFVec3f([-3.4725,0.0374,0.6807]);
let Transform447 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape448 = browser.currentScene.createNode("Shape");
Shape448.USE = "HAnimJointShape";
Transform447YYY.child = new X3D.undefined();

Transform447ZZZ.child[0] = Shape448;

Transform446YYY.children = new X3D.MFNode();

Transform446ZZZ.children[0] = Transform447;

HAnimSegment445YYY.children = new X3D.MFNode();

HAnimSegment445ZZZ.children[0] = Transform446;

let Shape449 = browser.currentScene.createNode("Shape");
let LineSet450 = browser.currentScene.createNode("LineSet");
LineSet450.vertexCount = new X3D.MFInt32([2]);
let Coordinate451 = browser.currentScene.createNode("Coordinate");
Coordinate451.point = new X3D.MFVec3f([-3.4725,0.0374,0.6807,-2.9855,0.0311,1.2819]);
coord = Coordinate451;

//from r_talocalcaneonavicular to r_cuneonavicular_1 vertices 2
let ColorRGBA452 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA452.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA452;

geometry = LineSet450;

HAnimSegment445ZZZ.children[1] = Shape449;

let Shape453 = browser.currentScene.createNode("Shape");
let LineSet454 = browser.currentScene.createNode("LineSet");
LineSet454.vertexCount = new X3D.MFInt32([2]);
let Coordinate455 = browser.currentScene.createNode("Coordinate");
Coordinate455.point = new X3D.MFVec3f([-3.4725,0.0374,0.6807,-3.6105,0.033,1.4168]);
coord = Coordinate455;

//from r_talocalcaneonavicular to r_cuneonavicular_2 vertices 2
let ColorRGBA456 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA456.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA456;

geometry = LineSet454;

HAnimSegment445ZZZ.children[2] = Shape453;

let Shape457 = browser.currentScene.createNode("Shape");
let LineSet458 = browser.currentScene.createNode("LineSet");
LineSet458.vertexCount = new X3D.MFInt32([2]);
let Coordinate459 = browser.currentScene.createNode("Coordinate");
Coordinate459.point = new X3D.MFVec3f([-3.4725,0.0374,0.6807,-4.1245,0.0328,1.3453]);
coord = Coordinate459;

//from r_talocalcaneonavicular to r_cuneonavicular_3 vertices 2
let ColorRGBA460 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA460.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA460;

geometry = LineSet458;

HAnimSegment445ZZZ.children[3] = Shape457;

HAnimJoint444YYY.children = new X3D.MFNode();

HAnimJoint444ZZZ.children[0] = HAnimSegment445;

let HAnimJoint461 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint461.name = "r_cuneonavicular_1";
HAnimJoint461.DEF = "hanim_r_cuneonavicular_1";
HAnimJoint461.center = new X3D.SFVec3f([-2.9855,0.0311,1.2819]);
HAnimJoint461.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint461.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment462 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment462.name = "r_cuneiform_1";
HAnimSegment462.DEF = "hanim_r_cuneiform_1";
let Transform463 = browser.currentScene.createNode("Transform");
Transform463.translation = new X3D.SFVec3f([-2.9855,0.0311,1.2819]);
let Transform464 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape465 = browser.currentScene.createNode("Shape");
Shape465.USE = "HAnimJointShape";
Transform464YYY.child = new X3D.undefined();

Transform464ZZZ.child[0] = Shape465;

Transform463YYY.children = new X3D.MFNode();

Transform463ZZZ.children[0] = Transform464;

HAnimSegment462YYY.children = new X3D.MFNode();

HAnimSegment462ZZZ.children[0] = Transform463;

let Shape466 = browser.currentScene.createNode("Shape");
let LineSet467 = browser.currentScene.createNode("LineSet");
LineSet467.vertexCount = new X3D.MFInt32([2]);
let Coordinate468 = browser.currentScene.createNode("Coordinate");
Coordinate468.point = new X3D.MFVec3f([-2.9855,0.0311,1.2819,-2.8645,0.0194,2.4285]);
coord = Coordinate468;

//from r_cuneonavicular_1 to r_tarsometatarsal_1 vertices 2
let ColorRGBA469 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA469.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA469;

geometry = LineSet467;

HAnimSegment462ZZZ.children[1] = Shape466;

HAnimJoint461YYY.children = new X3D.MFNode();

HAnimJoint461ZZZ.children[0] = HAnimSegment462;

let HAnimJoint470 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint470.name = "r_tarsometatarsal_1";
HAnimJoint470.DEF = "hanim_r_tarsometatarsal_1";
HAnimJoint470.center = new X3D.SFVec3f([-2.8645,0.0194,2.4285]);
HAnimJoint470.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint470.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment471 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment471.name = "r_metatarsal_1";
HAnimSegment471.DEF = "hanim_r_metatarsal_1";
let Transform472 = browser.currentScene.createNode("Transform");
Transform472.translation = new X3D.SFVec3f([-2.8645,0.0194,2.4285]);
let Transform473 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape474 = browser.currentScene.createNode("Shape");
Shape474.USE = "HAnimJointShape";
Transform473YYY.child = new X3D.undefined();

Transform473ZZZ.child[0] = Shape474;

Transform472YYY.children = new X3D.MFNode();

Transform472ZZZ.children[0] = Transform473;

HAnimSegment471YYY.children = new X3D.MFNode();

HAnimSegment471ZZZ.children[0] = Transform472;

let Shape475 = browser.currentScene.createNode("Shape");
let LineSet476 = browser.currentScene.createNode("LineSet");
LineSet476.vertexCount = new X3D.MFInt32([2]);
let Coordinate477 = browser.currentScene.createNode("Coordinate");
Coordinate477.point = new X3D.MFVec3f([-2.8645,0.0194,2.4285,-2.7535,0.0077,4.6255]);
coord = Coordinate477;

//from r_tarsometatarsal_1 to r_metatarsophalangeal_1 vertices 2
let ColorRGBA478 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA478.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA478;

geometry = LineSet476;

HAnimSegment471ZZZ.children[1] = Shape475;

let HAnimSite479 = browser.currentScene.createNode("HAnimSite");
HAnimSite479.name = "r_metatarsal_phalanx_1_pt";
HAnimSite479.DEF = "hanim_r_metatarsal_phalanx_1_pt";
let TouchSensor480 = browser.currentScene.createNode("TouchSensor");
TouchSensor480.description = "HAnimSite r_metatarsal_phalanx_1_pt";
HAnimSite479YYY.children = new X3D.MFNode();

HAnimSite479ZZZ.children[0] = TouchSensor480;

let Shape481 = browser.currentScene.createNode("Shape");
Shape481.USE = "HAnimSiteShape";
HAnimSite479ZZZ.children[1] = Shape481;

HAnimSegment471ZZZ.children[2] = HAnimSite479;

HAnimJoint470YYY.children = new X3D.MFNode();

HAnimJoint470ZZZ.children[0] = HAnimSegment471;

let HAnimJoint482 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint482.name = "r_metatarsophalangeal_1";
HAnimJoint482.DEF = "hanim_r_metatarsophalangeal_1";
HAnimJoint482.center = new X3D.SFVec3f([-2.7535,0.0077,4.6255]);
HAnimJoint482.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint482.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment483 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment483.name = "r_tarsal_proximal_phalanx_1";
HAnimSegment483.DEF = "hanim_r_tarsal_proximal_phalanx_1";
let Transform484 = browser.currentScene.createNode("Transform");
Transform484.translation = new X3D.SFVec3f([-2.7535,0.0077,4.6255]);
let Transform485 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape486 = browser.currentScene.createNode("Shape");
Shape486.USE = "HAnimJointShape";
Transform485YYY.child = new X3D.undefined();

Transform485ZZZ.child[0] = Shape486;

Transform484YYY.children = new X3D.MFNode();

Transform484ZZZ.children[0] = Transform485;

HAnimSegment483YYY.children = new X3D.MFNode();

HAnimSegment483ZZZ.children[0] = Transform484;

let Shape487 = browser.currentScene.createNode("Shape");
let LineSet488 = browser.currentScene.createNode("LineSet");
LineSet488.vertexCount = new X3D.MFInt32([2]);
let Coordinate489 = browser.currentScene.createNode("Coordinate");
Coordinate489.point = new X3D.MFVec3f([-2.7535,0.0077,4.6255,-2.7535,0.0077,4.6255]);
coord = Coordinate489;

//from r_metatarsophalangeal_1 to r_tarsal_interphalangeal_1 vertices 2
let ColorRGBA490 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA490.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA490;

geometry = LineSet488;

HAnimSegment483ZZZ.children[1] = Shape487;

let HAnimSite491 = browser.currentScene.createNode("HAnimSite");
HAnimSite491.name = "r_tarsal_distal_phalanx_1_tip";
HAnimSite491.DEF = "hanim_r_tarsal_distal_phalanx_1_tip";
let TouchSensor492 = browser.currentScene.createNode("TouchSensor");
TouchSensor492.description = "HAnimSite r_tarsal_distal_phalanx_1_tip";
HAnimSite491YYY.children = new X3D.MFNode();

HAnimSite491ZZZ.children[0] = TouchSensor492;

let Shape493 = browser.currentScene.createNode("Shape");
Shape493.USE = "HAnimSiteShape";
HAnimSite491ZZZ.children[1] = Shape493;

HAnimSegment483ZZZ.children[2] = HAnimSite491;

HAnimJoint482YYY.children = new X3D.MFNode();

HAnimJoint482ZZZ.children[0] = HAnimSegment483;

let HAnimJoint494 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint494.name = "r_tarsal_interphalangeal_1";
HAnimJoint494.DEF = "hanim_r_tarsal_interphalangeal_1";
HAnimJoint494.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint494.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint482ZZZ.children[1] = HAnimJoint494;

HAnimJoint470ZZZ.children[1] = HAnimJoint482;

HAnimJoint461ZZZ.children[1] = HAnimJoint470;

HAnimJoint444ZZZ.children[1] = HAnimJoint461;

let HAnimJoint495 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint495.name = "r_cuneonavicular_2";
HAnimJoint495.DEF = "hanim_r_cuneonavicular_2";
HAnimJoint495.center = new X3D.SFVec3f([-3.6105,0.033,1.4168]);
HAnimJoint495.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint495.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment496 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment496.name = "r_cuneiform_2";
HAnimSegment496.DEF = "hanim_r_cuneiform_2";
let Transform497 = browser.currentScene.createNode("Transform");
Transform497.translation = new X3D.SFVec3f([-3.6105,0.033,1.4168]);
let Transform498 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape499 = browser.currentScene.createNode("Shape");
Shape499.USE = "HAnimJointShape";
Transform498YYY.child = new X3D.undefined();

Transform498ZZZ.child[0] = Shape499;

Transform497YYY.children = new X3D.MFNode();

Transform497ZZZ.children[0] = Transform498;

HAnimSegment496YYY.children = new X3D.MFNode();

HAnimSegment496ZZZ.children[0] = Transform497;

let Shape500 = browser.currentScene.createNode("Shape");
let LineSet501 = browser.currentScene.createNode("LineSet");
LineSet501.vertexCount = new X3D.MFInt32([2]);
let Coordinate502 = browser.currentScene.createNode("Coordinate");
Coordinate502.point = new X3D.MFVec3f([-3.6105,0.033,1.4168,-3.5565,0.0232,2.2895]);
coord = Coordinate502;

//from r_cuneonavicular_2 to r_tarsometatarsal_2 vertices 2
let ColorRGBA503 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA503.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA503;

geometry = LineSet501;

HAnimSegment496ZZZ.children[1] = Shape500;

HAnimJoint495YYY.children = new X3D.MFNode();

HAnimJoint495ZZZ.children[0] = HAnimSegment496;

let HAnimJoint504 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint504.name = "r_tarsometatarsal_2";
HAnimJoint504.DEF = "hanim_r_tarsometatarsal_2";
HAnimJoint504.center = new X3D.SFVec3f([-3.5565,0.0232,2.2895]);
HAnimJoint504.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint504.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment505 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment505.name = "r_metatarsal_2";
HAnimSegment505.DEF = "hanim_r_metatarsal_2";
let Transform506 = browser.currentScene.createNode("Transform");
Transform506.translation = new X3D.SFVec3f([-3.5565,0.0232,2.2895]);
let Transform507 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape508 = browser.currentScene.createNode("Shape");
Shape508.USE = "HAnimJointShape";
Transform507YYY.child = new X3D.undefined();

Transform507ZZZ.child[0] = Shape508;

Transform506YYY.children = new X3D.MFNode();

Transform506ZZZ.children[0] = Transform507;

HAnimSegment505YYY.children = new X3D.MFNode();

HAnimSegment505ZZZ.children[0] = Transform506;

let Shape509 = browser.currentScene.createNode("Shape");
let LineSet510 = browser.currentScene.createNode("LineSet");
LineSet510.vertexCount = new X3D.MFInt32([2]);
let Coordinate511 = browser.currentScene.createNode("Coordinate");
Coordinate511.point = new X3D.MFVec3f([-3.5565,0.0232,2.2895,-3.6595,0.0085,4.8125]);
coord = Coordinate511;

//from r_tarsometatarsal_2 to r_metatarsophalangeal_2 vertices 2
let ColorRGBA512 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA512.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA512;

geometry = LineSet510;

HAnimSegment505ZZZ.children[1] = Shape509;

HAnimJoint504YYY.children = new X3D.MFNode();

HAnimJoint504ZZZ.children[0] = HAnimSegment505;

let HAnimJoint513 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint513.name = "r_metatarsophalangeal_2";
HAnimJoint513.DEF = "hanim_r_metatarsophalangeal_2";
HAnimJoint513.center = new X3D.SFVec3f([-3.6595,0.0085,4.8125]);
HAnimJoint513.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint513.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment514 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment514.name = "r_tarsal_proximal_phalanx_2";
HAnimSegment514.DEF = "hanim_r_tarsal_proximal_phalanx_2";
let Transform515 = browser.currentScene.createNode("Transform");
Transform515.translation = new X3D.SFVec3f([-3.6595,0.0085,4.8125]);
let Transform516 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape517 = browser.currentScene.createNode("Shape");
Shape517.USE = "HAnimJointShape";
Transform516YYY.child = new X3D.undefined();

Transform516ZZZ.child[0] = Shape517;

Transform515YYY.children = new X3D.MFNode();

Transform515ZZZ.children[0] = Transform516;

HAnimSegment514YYY.children = new X3D.MFNode();

HAnimSegment514ZZZ.children[0] = Transform515;

let Shape518 = browser.currentScene.createNode("Shape");
let LineSet519 = browser.currentScene.createNode("LineSet");
LineSet519.vertexCount = new X3D.MFInt32([2]);
let Coordinate520 = browser.currentScene.createNode("Coordinate");
Coordinate520.point = new X3D.MFVec3f([-3.6595,0.0085,4.8125,-3.7385,0.0054,5.5315]);
coord = Coordinate520;

//from r_metatarsophalangeal_2 to r_tarsal_proximal_interphalangeal_2 vertices 2
let ColorRGBA521 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA521.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA521;

geometry = LineSet519;

HAnimSegment514ZZZ.children[1] = Shape518;

HAnimJoint513YYY.children = new X3D.MFNode();

HAnimJoint513ZZZ.children[0] = HAnimSegment514;

let HAnimJoint522 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint522.name = "r_tarsal_proximal_interphalangeal_2";
HAnimJoint522.DEF = "hanim_r_tarsal_proximal_interphalangeal_2";
HAnimJoint522.center = new X3D.SFVec3f([-3.7385,0.0054,5.5315]);
HAnimJoint522.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint522.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment523 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment523.name = "r_tarsal_middle_phalanx_2";
HAnimSegment523.DEF = "hanim_r_tarsal_middle_phalanx_2";
let Transform524 = browser.currentScene.createNode("Transform");
Transform524.translation = new X3D.SFVec3f([-3.7385,0.0054,5.5315]);
let Transform525 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape526 = browser.currentScene.createNode("Shape");
Shape526.USE = "HAnimJointShape";
Transform525YYY.child = new X3D.undefined();

Transform525ZZZ.child[0] = Shape526;

Transform524YYY.children = new X3D.MFNode();

Transform524ZZZ.children[0] = Transform525;

HAnimSegment523YYY.children = new X3D.MFNode();

HAnimSegment523ZZZ.children[0] = Transform524;

let Shape527 = browser.currentScene.createNode("Shape");
let LineSet528 = browser.currentScene.createNode("LineSet");
LineSet528.vertexCount = new X3D.MFInt32([2]);
let Coordinate529 = browser.currentScene.createNode("Coordinate");
Coordinate529.point = new X3D.MFVec3f([-3.7385,0.0054,5.5315,-3.7385,0.0017,5.9505]);
coord = Coordinate529;

//from r_tarsal_proximal_interphalangeal_2 to r_tarsal_distal_interphalangeal_2 vertices 2
let ColorRGBA530 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA530.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA530;

geometry = LineSet528;

HAnimSegment523ZZZ.children[1] = Shape527;

let HAnimSite531 = browser.currentScene.createNode("HAnimSite");
HAnimSite531.name = "r_tarsal_distal_phalanx_2_tip";
HAnimSite531.DEF = "hanim_r_tarsal_distal_phalanx_2_tip";
HAnimSite531.translation = new X3D.SFVec3f([-0.0883,0.0134,0.1383]);
let TouchSensor532 = browser.currentScene.createNode("TouchSensor");
TouchSensor532.description = "HAnimSite r_tarsal_distal_phalanx_2_tip";
HAnimSite531YYY.children = new X3D.MFNode();

HAnimSite531ZZZ.children[0] = TouchSensor532;

let Shape533 = browser.currentScene.createNode("Shape");
Shape533.USE = "HAnimSiteShape";
HAnimSite531ZZZ.children[1] = Shape533;

HAnimSegment523ZZZ.children[2] = HAnimSite531;

HAnimJoint522YYY.children = new X3D.MFNode();

HAnimJoint522ZZZ.children[0] = HAnimSegment523;

let HAnimJoint534 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint534.name = "r_tarsal_distal_interphalangeal_2";
HAnimJoint534.DEF = "hanim_r_tarsal_distal_interphalangeal_2";
HAnimJoint534.center = new X3D.SFVec3f([-3.7385,0.0017,5.9505]);
HAnimJoint534.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint534.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint522ZZZ.children[1] = HAnimJoint534;

HAnimJoint513ZZZ.children[1] = HAnimJoint522;

HAnimJoint504ZZZ.children[1] = HAnimJoint513;

HAnimJoint495ZZZ.children[1] = HAnimJoint504;

HAnimJoint444ZZZ.children[2] = HAnimJoint495;

let HAnimJoint535 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint535.name = "r_cuneonavicular_3";
HAnimJoint535.DEF = "hanim_r_cuneonavicular_3";
HAnimJoint535.center = new X3D.SFVec3f([-4.1245,0.0328,1.3453]);
HAnimJoint535.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint535.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment536 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment536.name = "r_cuneiform_3";
HAnimSegment536.DEF = "hanim_r_cuneiform_3";
let Transform537 = browser.currentScene.createNode("Transform");
Transform537.translation = new X3D.SFVec3f([-4.1245,0.0328,1.3453]);
let Transform538 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape539 = browser.currentScene.createNode("Shape");
Shape539.USE = "HAnimJointShape";
Transform538YYY.child = new X3D.undefined();

Transform538ZZZ.child[0] = Shape539;

Transform537YYY.children = new X3D.MFNode();

Transform537ZZZ.children[0] = Transform538;

HAnimSegment536YYY.children = new X3D.MFNode();

HAnimSegment536ZZZ.children[0] = Transform537;

let Shape540 = browser.currentScene.createNode("Shape");
let LineSet541 = browser.currentScene.createNode("LineSet");
LineSet541.vertexCount = new X3D.MFInt32([2]);
let Coordinate542 = browser.currentScene.createNode("Coordinate");
Coordinate542.point = new X3D.MFVec3f([-4.1245,0.0328,1.3453,-3.7385,0.0017,5.9505]);
coord = Coordinate542;

//from r_cuneonavicular_3 to r_tarsometatarsal_3 vertices 2
let ColorRGBA543 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA543.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA543;

geometry = LineSet541;

HAnimSegment536ZZZ.children[1] = Shape540;

HAnimJoint535YYY.children = new X3D.MFNode();

HAnimJoint535ZZZ.children[0] = HAnimSegment536;

let HAnimJoint544 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint544.name = "r_tarsometatarsal_3";
HAnimJoint544.DEF = "hanim_r_tarsometatarsal_3";
HAnimJoint544.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint544.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment545 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment545.name = "r_metatarsal_3";
HAnimSegment545.DEF = "hanim_r_metatarsal_3";
let Transform546 = browser.currentScene.createNode("Transform");
Transform546.translation = new X3D.SFVec3f([-4.1245,0.0328,1.3453]);
let Transform547 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape548 = browser.currentScene.createNode("Shape");
Shape548.USE = "HAnimJointShape";
Transform547YYY.child = new X3D.undefined();

Transform547ZZZ.child[0] = Shape548;

Transform546YYY.children = new X3D.MFNode();

Transform546ZZZ.children[0] = Transform547;

HAnimSegment545YYY.children = new X3D.MFNode();

HAnimSegment545ZZZ.children[0] = Transform546;

let Shape549 = browser.currentScene.createNode("Shape");
let LineSet550 = browser.currentScene.createNode("LineSet");
LineSet550.vertexCount = new X3D.MFInt32([2]);
let Coordinate551 = browser.currentScene.createNode("Coordinate");
Coordinate551.point = new X3D.MFVec3f([-4.2795,0.0086,4.7055]);
coord = Coordinate551;

//from r_tarsometatarsal_3 to r_metatarsophalangeal_3 vertices 1
let ColorRGBA552 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA552.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA552;

geometry = LineSet550;

HAnimSegment545ZZZ.children[1] = Shape549;

HAnimJoint544YYY.children = new X3D.MFNode();

HAnimJoint544ZZZ.children[0] = HAnimSegment545;

let HAnimJoint553 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint553.name = "r_metatarsophalangeal_3";
HAnimJoint553.DEF = "hanim_r_metatarsophalangeal_3";
HAnimJoint553.center = new X3D.SFVec3f([-4.2795,0.0086,4.7055]);
HAnimJoint553.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint553.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment554 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment554.name = "r_tarsal_proximal_phalanx_3";
HAnimSegment554.DEF = "hanim_r_tarsal_proximal_phalanx_3";
let Transform555 = browser.currentScene.createNode("Transform");
Transform555.translation = new X3D.SFVec3f([-4.2795,0.0086,4.7055]);
let Transform556 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape557 = browser.currentScene.createNode("Shape");
Shape557.USE = "HAnimJointShape";
Transform556YYY.child = new X3D.undefined();

Transform556ZZZ.child[0] = Shape557;

Transform555YYY.children = new X3D.MFNode();

Transform555ZZZ.children[0] = Transform556;

HAnimSegment554YYY.children = new X3D.MFNode();

HAnimSegment554ZZZ.children[0] = Transform555;

let Shape558 = browser.currentScene.createNode("Shape");
let LineSet559 = browser.currentScene.createNode("LineSet");
LineSet559.vertexCount = new X3D.MFInt32([2]);
let Coordinate560 = browser.currentScene.createNode("Coordinate");
Coordinate560.point = new X3D.MFVec3f([-4.2795,0.0086,4.7055,-4.3865,0.0044,5.3745]);
coord = Coordinate560;

//from r_metatarsophalangeal_3 to r_tarsal_proximal_interphalangeal_3 vertices 2
let ColorRGBA561 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA561.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA561;

geometry = LineSet559;

HAnimSegment554ZZZ.children[1] = Shape558;

HAnimJoint553YYY.children = new X3D.MFNode();

HAnimJoint553ZZZ.children[0] = HAnimSegment554;

let HAnimJoint562 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint562.name = "r_tarsal_proximal_interphalangeal_3";
HAnimJoint562.DEF = "hanim_r_tarsal_proximal_interphalangeal_3";
HAnimJoint562.center = new X3D.SFVec3f([-4.3865,0.0044,5.3745]);
HAnimJoint562.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint562.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment563 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment563.name = "r_tarsal_middle_phalanx_3";
HAnimSegment563.DEF = "hanim_r_tarsal_middle_phalanx_3";
let Transform564 = browser.currentScene.createNode("Transform");
Transform564.translation = new X3D.SFVec3f([-4.3865,0.0044,5.3745]);
let Transform565 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape566 = browser.currentScene.createNode("Shape");
Shape566.USE = "HAnimJointShape";
Transform565YYY.child = new X3D.undefined();

Transform565ZZZ.child[0] = Shape566;

Transform564YYY.children = new X3D.MFNode();

Transform564ZZZ.children[0] = Transform565;

HAnimSegment563YYY.children = new X3D.MFNode();

HAnimSegment563ZZZ.children[0] = Transform564;

let Shape567 = browser.currentScene.createNode("Shape");
let LineSet568 = browser.currentScene.createNode("LineSet");
LineSet568.vertexCount = new X3D.MFInt32([2]);
let Coordinate569 = browser.currentScene.createNode("Coordinate");
Coordinate569.point = new X3D.MFVec3f([-4.3865,0.0044,5.3745,-4.4545,0.0017,5.7845]);
coord = Coordinate569;

//from r_tarsal_proximal_interphalangeal_3 to r_tarsal_distal_interphalangeal_3 vertices 2
let ColorRGBA570 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA570.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA570;

geometry = LineSet568;

HAnimSegment563ZZZ.children[1] = Shape567;

let HAnimSite571 = browser.currentScene.createNode("HAnimSite");
HAnimSite571.name = "r_tarsal_distal_phalanx_3_tip";
HAnimSite571.DEF = "hanim_r_tarsal_distal_phalanx_3_tip";
let TouchSensor572 = browser.currentScene.createNode("TouchSensor");
TouchSensor572.description = "HAnimSite r_tarsal_distal_phalanx_3_tip";
HAnimSite571YYY.children = new X3D.MFNode();

HAnimSite571ZZZ.children[0] = TouchSensor572;

let Shape573 = browser.currentScene.createNode("Shape");
Shape573.USE = "HAnimSiteShape";
HAnimSite571ZZZ.children[1] = Shape573;

HAnimSegment563ZZZ.children[2] = HAnimSite571;

HAnimJoint562YYY.children = new X3D.MFNode();

HAnimJoint562ZZZ.children[0] = HAnimSegment563;

let HAnimJoint574 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint574.name = "r_tarsal_distal_interphalangeal_3";
HAnimJoint574.DEF = "hanim_r_tarsal_distal_interphalangeal_3";
HAnimJoint574.center = new X3D.SFVec3f([-4.4545,0.0017,5.7845]);
HAnimJoint574.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint574.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint562ZZZ.children[1] = HAnimJoint574;

HAnimJoint553ZZZ.children[1] = HAnimJoint562;

HAnimJoint544ZZZ.children[1] = HAnimJoint553;

HAnimJoint535ZZZ.children[1] = HAnimJoint544;

HAnimJoint444ZZZ.children[3] = HAnimJoint535;

HAnimJoint431ZZZ.children[1] = HAnimJoint444;

let HAnimJoint575 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint575.name = "r_calcaneocuboid";
HAnimJoint575.DEF = "hanim_r_calcaneocuboid";
HAnimJoint575.center = new X3D.SFVec3f([-3.9515,0.0653,-0.6895]);
HAnimJoint575.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint575.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment576 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment576.name = "r_calcaneus";
HAnimSegment576.DEF = "hanim_r_calcaneus";
let Transform577 = browser.currentScene.createNode("Transform");
Transform577.translation = new X3D.SFVec3f([-3.9515,0.0653,-0.6895]);
let Transform578 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape579 = browser.currentScene.createNode("Shape");
Shape579.USE = "HAnimJointShape";
Transform578YYY.child = new X3D.undefined();

Transform578ZZZ.child[0] = Shape579;

Transform577YYY.children = new X3D.MFNode();

Transform577ZZZ.children[0] = Transform578;

HAnimSegment576YYY.children = new X3D.MFNode();

HAnimSegment576ZZZ.children[0] = Transform577;

let Shape580 = browser.currentScene.createNode("Shape");
let LineSet581 = browser.currentScene.createNode("LineSet");
LineSet581.vertexCount = new X3D.MFInt32([2]);
let Coordinate582 = browser.currentScene.createNode("Coordinate");
Coordinate582.point = new X3D.MFVec3f([-3.9515,0.0653,-0.6895,-4.9095,0.0353,0.5574]);
coord = Coordinate582;

//from r_calcaneocuboid to r_transversetarsal vertices 2
let ColorRGBA583 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA583.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA583;

geometry = LineSet581;

HAnimSegment576ZZZ.children[1] = Shape580;

HAnimJoint575YYY.children = new X3D.MFNode();

HAnimJoint575ZZZ.children[0] = HAnimSegment576;

let HAnimJoint584 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint584.name = "r_transversetarsal";
HAnimJoint584.DEF = "hanim_r_transversetarsal";
HAnimJoint584.center = new X3D.SFVec3f([-4.9095,0.0353,0.5574]);
HAnimJoint584.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint584.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment585 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment585.name = "r_cuboid";
HAnimSegment585.DEF = "hanim_r_cuboid";
let Transform586 = browser.currentScene.createNode("Transform");
Transform586.translation = new X3D.SFVec3f([-4.9095,0.0353,0.5574]);
let Transform587 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape588 = browser.currentScene.createNode("Shape");
Shape588.USE = "HAnimJointShape";
Transform587YYY.child = new X3D.undefined();

Transform587ZZZ.child[0] = Shape588;

Transform586YYY.children = new X3D.MFNode();

Transform586ZZZ.children[0] = Transform587;

HAnimSegment585YYY.children = new X3D.MFNode();

HAnimSegment585ZZZ.children[0] = Transform586;

let Shape589 = browser.currentScene.createNode("Shape");
let LineSet590 = browser.currentScene.createNode("LineSet");
LineSet590.vertexCount = new X3D.MFInt32([2]);
let Coordinate591 = browser.currentScene.createNode("Coordinate");
Coordinate591.point = new X3D.MFVec3f([-4.9095,0.0353,0.5574,-4.7255,0.0211,2.1725]);
coord = Coordinate591;

//from r_transversetarsal to r_tarsometatarsal_4 vertices 2
let ColorRGBA592 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA592.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA592;

geometry = LineSet590;

HAnimSegment585ZZZ.children[1] = Shape589;

let Shape593 = browser.currentScene.createNode("Shape");
let LineSet594 = browser.currentScene.createNode("LineSet");
LineSet594.vertexCount = new X3D.MFInt32([2]);
let Coordinate595 = browser.currentScene.createNode("Coordinate");
Coordinate595.point = new X3D.MFVec3f([-4.9095,0.0353,0.5574,-5.3615,0.0164,2.0085]);
coord = Coordinate595;

//from r_transversetarsal to r_tarsometatarsal_5 vertices 2
let ColorRGBA596 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA596.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA596;

geometry = LineSet594;

HAnimSegment585ZZZ.children[2] = Shape593;

HAnimJoint584YYY.children = new X3D.MFNode();

HAnimJoint584ZZZ.children[0] = HAnimSegment585;

let HAnimJoint597 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint597.name = "r_tarsometatarsal_4";
HAnimJoint597.DEF = "hanim_r_tarsometatarsal_4";
HAnimJoint597.center = new X3D.SFVec3f([-4.7255,0.0211,2.1725]);
HAnimJoint597.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint597.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment598 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment598.name = "r_metatarsal_4";
HAnimSegment598.DEF = "hanim_r_metatarsal_4";
let Transform599 = browser.currentScene.createNode("Transform");
Transform599.translation = new X3D.SFVec3f([-4.7255,0.0211,2.1725]);
let Transform600 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape601 = browser.currentScene.createNode("Shape");
Shape601.USE = "HAnimJointShape";
Transform600YYY.child = new X3D.undefined();

Transform600ZZZ.child[0] = Shape601;

Transform599YYY.children = new X3D.MFNode();

Transform599ZZZ.children[0] = Transform600;

HAnimSegment598YYY.children = new X3D.MFNode();

HAnimSegment598ZZZ.children[0] = Transform599;

let Shape602 = browser.currentScene.createNode("Shape");
let LineSet603 = browser.currentScene.createNode("LineSet");
LineSet603.vertexCount = new X3D.MFInt32([2]);
let Coordinate604 = browser.currentScene.createNode("Coordinate");
Coordinate604.point = new X3D.MFVec3f([-4.7255,0.0211,2.1725,-4.8755,0.0076,4.5165]);
coord = Coordinate604;

//from r_tarsometatarsal_4 to r_metatarsophalangeal_4 vertices 2
let ColorRGBA605 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA605.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA605;

geometry = LineSet603;

HAnimSegment598ZZZ.children[1] = Shape602;

HAnimJoint597YYY.children = new X3D.MFNode();

HAnimJoint597ZZZ.children[0] = HAnimSegment598;

let HAnimJoint606 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint606.name = "r_metatarsophalangeal_4";
HAnimJoint606.DEF = "hanim_r_metatarsophalangeal_4";
HAnimJoint606.center = new X3D.SFVec3f([-4.8755,0.0076,4.5165]);
HAnimJoint606.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint606.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment607 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment607.name = "r_tarsal_proximal_phalanx_4";
HAnimSegment607.DEF = "hanim_r_tarsal_proximal_phalanx_4";
let Transform608 = browser.currentScene.createNode("Transform");
Transform608.translation = new X3D.SFVec3f([-4.8755,0.0076,4.5165]);
let Transform609 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape610 = browser.currentScene.createNode("Shape");
Shape610.USE = "HAnimJointShape";
Transform609YYY.child = new X3D.undefined();

Transform609ZZZ.child[0] = Shape610;

Transform608YYY.children = new X3D.MFNode();

Transform608ZZZ.children[0] = Transform609;

HAnimSegment607YYY.children = new X3D.MFNode();

HAnimSegment607ZZZ.children[0] = Transform608;

let Shape611 = browser.currentScene.createNode("Shape");
let LineSet612 = browser.currentScene.createNode("LineSet");
LineSet612.vertexCount = new X3D.MFInt32([2]);
let Coordinate613 = browser.currentScene.createNode("Coordinate");
Coordinate613.point = new X3D.MFVec3f([-4.8755,0.0076,4.5165,-5.0655,0.0049,5.1895]);
coord = Coordinate613;

//from r_metatarsophalangeal_4 to r_tarsal_proximal_interphalangeal_4 vertices 2
let ColorRGBA614 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA614.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA614;

geometry = LineSet612;

HAnimSegment607ZZZ.children[1] = Shape611;

HAnimJoint606YYY.children = new X3D.MFNode();

HAnimJoint606ZZZ.children[0] = HAnimSegment607;

let HAnimJoint615 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint615.name = "r_tarsal_proximal_interphalangeal_4";
HAnimJoint615.DEF = "hanim_r_tarsal_proximal_interphalangeal_4";
HAnimJoint615.center = new X3D.SFVec3f([-5.0655,0.0049,5.1895]);
HAnimJoint615.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint615.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment616 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment616.name = "r_tarsal_middle_phalanx_4";
HAnimSegment616.DEF = "hanim_r_tarsal_middle_phalanx_4";
let Transform617 = browser.currentScene.createNode("Transform");
Transform617.translation = new X3D.SFVec3f([-5.0655,0.0049,5.1895]);
let Transform618 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape619 = browser.currentScene.createNode("Shape");
Shape619.USE = "HAnimJointShape";
Transform618YYY.child = new X3D.undefined();

Transform618ZZZ.child[0] = Shape619;

Transform617YYY.children = new X3D.MFNode();

Transform617ZZZ.children[0] = Transform618;

HAnimSegment616YYY.children = new X3D.MFNode();

HAnimSegment616ZZZ.children[0] = Transform617;

let Shape620 = browser.currentScene.createNode("Shape");
let LineSet621 = browser.currentScene.createNode("LineSet");
LineSet621.vertexCount = new X3D.MFInt32([2]);
let Coordinate622 = browser.currentScene.createNode("Coordinate");
Coordinate622.point = new X3D.MFVec3f([-5.0655,0.0049,5.1895,-5.1335,0.0011,5.5175]);
coord = Coordinate622;

//from r_tarsal_proximal_interphalangeal_4 to r_tarsal_distal_interphalangeal_4 vertices 2
let ColorRGBA623 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA623.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA623;

geometry = LineSet621;

HAnimSegment616ZZZ.children[1] = Shape620;

let HAnimSite624 = browser.currentScene.createNode("HAnimSite");
HAnimSite624.name = "r_tarsal_distal_phalanx_4_tip";
HAnimSite624.DEF = "hanim_r_tarsal_distal_phalanx_4_tip";
let TouchSensor625 = browser.currentScene.createNode("TouchSensor");
TouchSensor625.description = "HAnimSite r_tarsal_distal_phalanx_4_tip";
HAnimSite624YYY.children = new X3D.MFNode();

HAnimSite624ZZZ.children[0] = TouchSensor625;

let Shape626 = browser.currentScene.createNode("Shape");
Shape626.USE = "HAnimSiteShape";
HAnimSite624ZZZ.children[1] = Shape626;

HAnimSegment616ZZZ.children[2] = HAnimSite624;

HAnimJoint615YYY.children = new X3D.MFNode();

HAnimJoint615ZZZ.children[0] = HAnimSegment616;

let HAnimJoint627 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint627.name = "r_tarsal_distal_interphalangeal_4";
HAnimJoint627.DEF = "hanim_r_tarsal_distal_interphalangeal_4";
HAnimJoint627.center = new X3D.SFVec3f([-5.1335,0.0011,5.5175]);
HAnimJoint627.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint627.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint615ZZZ.children[1] = HAnimJoint627;

HAnimJoint606ZZZ.children[1] = HAnimJoint615;

HAnimJoint597ZZZ.children[1] = HAnimJoint606;

HAnimJoint584ZZZ.children[1] = HAnimJoint597;

let HAnimJoint628 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint628.name = "r_tarsometatarsal_5";
HAnimJoint628.DEF = "hanim_r_tarsometatarsal_5";
HAnimJoint628.center = new X3D.SFVec3f([-5.3615,0.0164,2.0085]);
HAnimJoint628.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint628.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment629 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment629.name = "r_metatarsal_5";
HAnimSegment629.DEF = "hanim_r_metatarsal_5";
let Transform630 = browser.currentScene.createNode("Transform");
Transform630.translation = new X3D.SFVec3f([-5.3615,0.0164,2.0085]);
let Transform631 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape632 = browser.currentScene.createNode("Shape");
Shape632.USE = "HAnimJointShape";
Transform631YYY.child = new X3D.undefined();

Transform631ZZZ.child[0] = Shape632;

Transform630YYY.children = new X3D.MFNode();

Transform630ZZZ.children[0] = Transform631;

HAnimSegment629YYY.children = new X3D.MFNode();

HAnimSegment629ZZZ.children[0] = Transform630;

let Shape633 = browser.currentScene.createNode("Shape");
let LineSet634 = browser.currentScene.createNode("LineSet");
LineSet634.vertexCount = new X3D.MFInt32([2]);
let Coordinate635 = browser.currentScene.createNode("Coordinate");
Coordinate635.point = new X3D.MFVec3f([-5.3615,0.0164,2.0085,-5.5055,0.0067,4.3115]);
coord = Coordinate635;

//from r_tarsometatarsal_5 to r_metatarsophalangeal_5 vertices 2
let ColorRGBA636 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA636.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA636;

geometry = LineSet634;

HAnimSegment629ZZZ.children[1] = Shape633;

let HAnimSite637 = browser.currentScene.createNode("HAnimSite");
HAnimSite637.name = "r_metatarsal_phalanx_5_pt";
HAnimSite637.DEF = "hanim_r_metatarsal_phalanx_5_pt";
let TouchSensor638 = browser.currentScene.createNode("TouchSensor");
TouchSensor638.description = "HAnimSite r_metatarsal_phalanx_5_pt";
HAnimSite637YYY.children = new X3D.MFNode();

HAnimSite637ZZZ.children[0] = TouchSensor638;

let Shape639 = browser.currentScene.createNode("Shape");
Shape639.USE = "HAnimSiteShape";
HAnimSite637ZZZ.children[1] = Shape639;

HAnimSegment629ZZZ.children[2] = HAnimSite637;

HAnimJoint628YYY.children = new X3D.MFNode();

HAnimJoint628ZZZ.children[0] = HAnimSegment629;

let HAnimJoint640 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint640.name = "r_metatarsophalangeal_5";
HAnimJoint640.DEF = "hanim_r_metatarsophalangeal_5";
HAnimJoint640.center = new X3D.SFVec3f([-5.5055,0.0067,4.3115]);
HAnimJoint640.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint640.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment641 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment641.name = "r_tarsal_proximal_phalanx_5";
HAnimSegment641.DEF = "hanim_r_tarsal_proximal_phalanx_5";
let Transform642 = browser.currentScene.createNode("Transform");
Transform642.translation = new X3D.SFVec3f([-5.5055,0.0067,4.3115]);
let Transform643 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape644 = browser.currentScene.createNode("Shape");
Shape644.USE = "HAnimJointShape";
Transform643YYY.child = new X3D.undefined();

Transform643ZZZ.child[0] = Shape644;

Transform642YYY.children = new X3D.MFNode();

Transform642ZZZ.children[0] = Transform643;

HAnimSegment641YYY.children = new X3D.MFNode();

HAnimSegment641ZZZ.children[0] = Transform642;

let Shape645 = browser.currentScene.createNode("Shape");
let LineSet646 = browser.currentScene.createNode("LineSet");
LineSet646.vertexCount = new X3D.MFInt32([2]);
let Coordinate647 = browser.currentScene.createNode("Coordinate");
Coordinate647.point = new X3D.MFVec3f([-5.5055,0.0067,4.3115,-5.6085,0.003,4.6485]);
coord = Coordinate647;

//from r_metatarsophalangeal_5 to r_tarsal_proximal_interphalangeal_5 vertices 2
let ColorRGBA648 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA648.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA648;

geometry = LineSet646;

HAnimSegment641ZZZ.children[1] = Shape645;

HAnimJoint640YYY.children = new X3D.MFNode();

HAnimJoint640ZZZ.children[0] = HAnimSegment641;

let HAnimJoint649 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint649.name = "r_tarsal_proximal_interphalangeal_5";
HAnimJoint649.DEF = "hanim_r_tarsal_proximal_interphalangeal_5";
HAnimJoint649.center = new X3D.SFVec3f([-5.6085,0.003,4.6485]);
HAnimJoint649.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint649.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment650 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment650.name = "r_tarsal_middle_phalanx_5";
HAnimSegment650.DEF = "hanim_r_tarsal_middle_phalanx_5";
let Transform651 = browser.currentScene.createNode("Transform");
Transform651.translation = new X3D.SFVec3f([-5.6085,0.003,4.6485]);
let Transform652 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape653 = browser.currentScene.createNode("Shape");
Shape653.USE = "HAnimJointShape";
Transform652YYY.child = new X3D.undefined();

Transform652ZZZ.child[0] = Shape653;

Transform651YYY.children = new X3D.MFNode();

Transform651ZZZ.children[0] = Transform652;

HAnimSegment650YYY.children = new X3D.MFNode();

HAnimSegment650ZZZ.children[0] = Transform651;

let Shape654 = browser.currentScene.createNode("Shape");
let LineSet655 = browser.currentScene.createNode("LineSet");
LineSet655.vertexCount = new X3D.MFInt32([2]);
let Coordinate656 = browser.currentScene.createNode("Coordinate");
Coordinate656.point = new X3D.MFVec3f([-5.6085,0.003,4.6485,-5.6495,0,4.9925]);
coord = Coordinate656;

//from r_tarsal_proximal_interphalangeal_5 to r_tarsal_distal_interphalangeal_5 vertices 2
let ColorRGBA657 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA657.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA657;

geometry = LineSet655;

HAnimSegment650ZZZ.children[1] = Shape654;

let HAnimSite658 = browser.currentScene.createNode("HAnimSite");
HAnimSite658.name = "r_tarsal_distal_phalanx_5_tip";
HAnimSite658.DEF = "hanim_r_tarsal_distal_phalanx_5_tip";
let TouchSensor659 = browser.currentScene.createNode("TouchSensor");
TouchSensor659.description = "HAnimSite r_tarsal_distal_phalanx_5_tip";
HAnimSite658YYY.children = new X3D.MFNode();

HAnimSite658ZZZ.children[0] = TouchSensor659;

let Shape660 = browser.currentScene.createNode("Shape");
Shape660.USE = "HAnimSiteShape";
HAnimSite658ZZZ.children[1] = Shape660;

HAnimSegment650ZZZ.children[2] = HAnimSite658;

HAnimJoint649YYY.children = new X3D.MFNode();

HAnimJoint649ZZZ.children[0] = HAnimSegment650;

let HAnimJoint661 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint661.name = "r_tarsal_distal_interphalangeal_5";
HAnimJoint661.DEF = "hanim_r_tarsal_distal_interphalangeal_5";
HAnimJoint661.center = new X3D.SFVec3f([-5.6495,0,4.9925]);
HAnimJoint661.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint661.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint649ZZZ.children[1] = HAnimJoint661;

HAnimJoint640ZZZ.children[1] = HAnimJoint649;

HAnimJoint628ZZZ.children[1] = HAnimJoint640;

HAnimJoint584ZZZ.children[2] = HAnimJoint628;

HAnimJoint575ZZZ.children[1] = HAnimJoint584;

HAnimJoint431ZZZ.children[2] = HAnimJoint575;

HAnimJoint416ZZZ.children[1] = HAnimJoint431;

HAnimJoint398ZZZ.children[1] = HAnimJoint416;

HAnimJoint97ZZZ.children[2] = HAnimJoint398;

HAnimJoint45ZZZ.children[1] = HAnimJoint97;

let HAnimJoint662 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint662.name = "vl5";
HAnimJoint662.DEF = "hanim_vl5";
HAnimJoint662.center = new X3D.SFVec3f([0.0028,1.0568,-0.0776]);
HAnimJoint662.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint662.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment663 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment663.name = "l5";
HAnimSegment663.DEF = "hanim_l5";
let Transform664 = browser.currentScene.createNode("Transform");
Transform664.translation = new X3D.SFVec3f([0.0028,1.0568,-0.0776]);
let Transform665 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape666 = browser.currentScene.createNode("Shape");
Shape666.USE = "HAnimJointShape";
Transform665YYY.child = new X3D.undefined();

Transform665ZZZ.child[0] = Shape666;

Transform664YYY.children = new X3D.MFNode();

Transform664ZZZ.children[0] = Transform665;

HAnimSegment663YYY.children = new X3D.MFNode();

HAnimSegment663ZZZ.children[0] = Transform664;

let Shape667 = browser.currentScene.createNode("Shape");
let LineSet668 = browser.currentScene.createNode("LineSet");
LineSet668.vertexCount = new X3D.MFInt32([2]);
let Coordinate669 = browser.currentScene.createNode("Coordinate");
Coordinate669.point = new X3D.MFVec3f([0.0028,1.0568,-0.0776,0.0035,1.0925,-0.0787]);
coord = Coordinate669;

//from vl5 to vl4 vertices 2
let ColorRGBA670 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA670.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA670;

geometry = LineSet668;

HAnimSegment663ZZZ.children[1] = Shape667;

HAnimJoint662YYY.children = new X3D.MFNode();

HAnimJoint662ZZZ.children[0] = HAnimSegment663;

let HAnimJoint671 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint671.name = "vl4";
HAnimJoint671.DEF = "hanim_vl4";
HAnimJoint671.center = new X3D.SFVec3f([0.0035,1.0925,-0.0787]);
HAnimJoint671.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint671.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment672 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment672.name = "l4";
HAnimSegment672.DEF = "hanim_l4";
let Transform673 = browser.currentScene.createNode("Transform");
Transform673.translation = new X3D.SFVec3f([0.0035,1.0925,-0.0787]);
let Transform674 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape675 = browser.currentScene.createNode("Shape");
Shape675.USE = "HAnimJointShape";
Transform674YYY.child = new X3D.undefined();

Transform674ZZZ.child[0] = Shape675;

Transform673YYY.children = new X3D.MFNode();

Transform673ZZZ.children[0] = Transform674;

HAnimSegment672YYY.children = new X3D.MFNode();

HAnimSegment672ZZZ.children[0] = Transform673;

let Shape676 = browser.currentScene.createNode("Shape");
let LineSet677 = browser.currentScene.createNode("LineSet");
LineSet677.vertexCount = new X3D.MFInt32([2]);
let Coordinate678 = browser.currentScene.createNode("Coordinate");
Coordinate678.point = new X3D.MFVec3f([0.0035,1.0925,-0.0787,0.0041,1.1276,-0.0796]);
coord = Coordinate678;

//from vl4 to vl3 vertices 2
let ColorRGBA679 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA679.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA679;

geometry = LineSet677;

HAnimSegment672ZZZ.children[1] = Shape676;

HAnimJoint671YYY.children = new X3D.MFNode();

HAnimJoint671ZZZ.children[0] = HAnimSegment672;

let HAnimJoint680 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint680.name = "vl3";
HAnimJoint680.DEF = "hanim_vl3";
HAnimJoint680.center = new X3D.SFVec3f([0.0041,1.1276,-0.0796]);
HAnimJoint680.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint680.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment681 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment681.name = "l3";
HAnimSegment681.DEF = "hanim_l3";
let Transform682 = browser.currentScene.createNode("Transform");
Transform682.translation = new X3D.SFVec3f([0.0041,1.1276,-0.0796]);
let Transform683 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape684 = browser.currentScene.createNode("Shape");
Shape684.USE = "HAnimJointShape";
Transform683YYY.child = new X3D.undefined();

Transform683ZZZ.child[0] = Shape684;

Transform682YYY.children = new X3D.MFNode();

Transform682ZZZ.children[0] = Transform683;

HAnimSegment681YYY.children = new X3D.MFNode();

HAnimSegment681ZZZ.children[0] = Transform682;

let Shape685 = browser.currentScene.createNode("Shape");
let LineSet686 = browser.currentScene.createNode("LineSet");
LineSet686.vertexCount = new X3D.MFInt32([2]);
let Coordinate687 = browser.currentScene.createNode("Coordinate");
Coordinate687.point = new X3D.MFVec3f([0.0041,1.1276,-0.0796,0.0045,1.1546,-0.08]);
coord = Coordinate687;

//from vl3 to vl2 vertices 2
let ColorRGBA688 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA688.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA688;

geometry = LineSet686;

HAnimSegment681ZZZ.children[1] = Shape685;

let HAnimSite689 = browser.currentScene.createNode("HAnimSite");
HAnimSite689.name = "l_rib10_pt";
HAnimSite689.DEF = "hanim_l_rib10_pt";
HAnimSite689.translation = new X3D.SFVec3f([0.0871,1.1925,0.0992]);
let TouchSensor690 = browser.currentScene.createNode("TouchSensor");
TouchSensor690.description = "HAnimSite l_rib10_pt";
HAnimSite689YYY.children = new X3D.MFNode();

HAnimSite689ZZZ.children[0] = TouchSensor690;

let Shape691 = browser.currentScene.createNode("Shape");
Shape691.USE = "HAnimSiteShape";
HAnimSite689ZZZ.children[1] = Shape691;

HAnimSegment681ZZZ.children[2] = HAnimSite689;

let HAnimSite692 = browser.currentScene.createNode("HAnimSite");
HAnimSite692.name = "r_rib10_pt";
HAnimSite692.DEF = "hanim_r_rib10_pt";
HAnimSite692.translation = new X3D.SFVec3f([-0.0711,1.1941,0.1016]);
let TouchSensor693 = browser.currentScene.createNode("TouchSensor");
TouchSensor693.description = "HAnimSite r_rib10_pt";
HAnimSite692YYY.children = new X3D.MFNode();

HAnimSite692ZZZ.children[0] = TouchSensor693;

let Shape694 = browser.currentScene.createNode("Shape");
Shape694.USE = "HAnimSiteShape";
HAnimSite692ZZZ.children[1] = Shape694;

HAnimSegment681ZZZ.children[3] = HAnimSite692;

let HAnimSite695 = browser.currentScene.createNode("HAnimSite");
HAnimSite695.name = "spine_2_middle_back_pt";
HAnimSite695.DEF = "hanim_spine_2_middle_back_pt";
let TouchSensor696 = browser.currentScene.createNode("TouchSensor");
TouchSensor696.description = "HAnimSite spine_2_middle_back_pt";
HAnimSite695YYY.children = new X3D.MFNode();

HAnimSite695ZZZ.children[0] = TouchSensor696;

let Shape697 = browser.currentScene.createNode("Shape");
Shape697.USE = "HAnimSiteShape";
HAnimSite695ZZZ.children[1] = Shape697;

HAnimSegment681ZZZ.children[4] = HAnimSite695;

HAnimJoint680YYY.children = new X3D.MFNode();

HAnimJoint680ZZZ.children[0] = HAnimSegment681;

let HAnimJoint698 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint698.name = "vl2";
HAnimJoint698.DEF = "hanim_vl2";
HAnimJoint698.center = new X3D.SFVec3f([0.0045,1.1546,-0.08]);
HAnimJoint698.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint698.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment699 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment699.name = "l2";
HAnimSegment699.DEF = "hanim_l2";
let Transform700 = browser.currentScene.createNode("Transform");
Transform700.translation = new X3D.SFVec3f([0.0045,1.1546,-0.08]);
let Transform701 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape702 = browser.currentScene.createNode("Shape");
Shape702.USE = "HAnimJointShape";
Transform701YYY.child = new X3D.undefined();

Transform701ZZZ.child[0] = Shape702;

Transform700YYY.children = new X3D.MFNode();

Transform700ZZZ.children[0] = Transform701;

HAnimSegment699YYY.children = new X3D.MFNode();

HAnimSegment699ZZZ.children[0] = Transform700;

let Shape703 = browser.currentScene.createNode("Shape");
let LineSet704 = browser.currentScene.createNode("LineSet");
LineSet704.vertexCount = new X3D.MFInt32([2]);
let Coordinate705 = browser.currentScene.createNode("Coordinate");
Coordinate705.point = new X3D.MFVec3f([0.0045,1.1546,-0.08,0.0048,1.1912,-0.0805]);
coord = Coordinate705;

//from vl2 to vl1 vertices 2
let ColorRGBA706 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA706.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA706;

geometry = LineSet704;

HAnimSegment699ZZZ.children[1] = Shape703;

HAnimJoint698YYY.children = new X3D.MFNode();

HAnimJoint698ZZZ.children[0] = HAnimSegment699;

let HAnimJoint707 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint707.name = "vl1";
HAnimJoint707.DEF = "hanim_vl1";
HAnimJoint707.center = new X3D.SFVec3f([0.0048,1.1912,-0.0805]);
HAnimJoint707.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint707.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment708 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment708.name = "l1";
HAnimSegment708.DEF = "hanim_l1";
let Transform709 = browser.currentScene.createNode("Transform");
Transform709.translation = new X3D.SFVec3f([0.0048,1.1912,-0.0805]);
let Transform710 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape711 = browser.currentScene.createNode("Shape");
Shape711.USE = "HAnimJointShape";
Transform710YYY.child = new X3D.undefined();

Transform710ZZZ.child[0] = Shape711;

Transform709YYY.children = new X3D.MFNode();

Transform709ZZZ.children[0] = Transform710;

HAnimSegment708YYY.children = new X3D.MFNode();

HAnimSegment708ZZZ.children[0] = Transform709;

let Shape712 = browser.currentScene.createNode("Shape");
let LineSet713 = browser.currentScene.createNode("LineSet");
LineSet713.vertexCount = new X3D.MFInt32([2]);
let Coordinate714 = browser.currentScene.createNode("Coordinate");
Coordinate714.point = new X3D.MFVec3f([0.0048,1.1912,-0.0805,0.0051,1.2278,-0.0808]);
coord = Coordinate714;

//from vl1 to vt12 vertices 2
let ColorRGBA715 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA715.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA715;

geometry = LineSet713;

HAnimSegment708ZZZ.children[1] = Shape712;

HAnimJoint707YYY.children = new X3D.MFNode();

HAnimJoint707ZZZ.children[0] = HAnimSegment708;

let HAnimJoint716 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint716.name = "vt12";
HAnimJoint716.DEF = "hanim_vt12";
HAnimJoint716.center = new X3D.SFVec3f([0.0051,1.2278,-0.0808]);
HAnimJoint716.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint716.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment717 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment717.name = "t12";
HAnimSegment717.DEF = "hanim_t12";
let Transform718 = browser.currentScene.createNode("Transform");
Transform718.translation = new X3D.SFVec3f([0.0051,1.2278,-0.0808]);
let Transform719 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape720 = browser.currentScene.createNode("Shape");
Shape720.USE = "HAnimJointShape";
Transform719YYY.child = new X3D.undefined();

Transform719ZZZ.child[0] = Shape720;

Transform718YYY.children = new X3D.MFNode();

Transform718ZZZ.children[0] = Transform719;

HAnimSegment717YYY.children = new X3D.MFNode();

HAnimSegment717ZZZ.children[0] = Transform718;

let Shape721 = browser.currentScene.createNode("Shape");
let LineSet722 = browser.currentScene.createNode("LineSet");
LineSet722.vertexCount = new X3D.MFInt32([2]);
let Coordinate723 = browser.currentScene.createNode("Coordinate");
Coordinate723.point = new X3D.MFVec3f([0.0051,1.2278,-0.0808,0.0053,1.2679,-0.081]);
coord = Coordinate723;

//from vt12 to vt11 vertices 2
let ColorRGBA724 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA724.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA724;

geometry = LineSet722;

HAnimSegment717ZZZ.children[1] = Shape721;

HAnimJoint716YYY.children = new X3D.MFNode();

HAnimJoint716ZZZ.children[0] = HAnimSegment717;

let HAnimJoint725 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint725.name = "vt11";
HAnimJoint725.DEF = "hanim_vt11";
HAnimJoint725.center = new X3D.SFVec3f([0.0053,1.2679,-0.081]);
HAnimJoint725.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint725.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment726 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment726.name = "t11";
HAnimSegment726.DEF = "hanim_t11";
let Transform727 = browser.currentScene.createNode("Transform");
Transform727.translation = new X3D.SFVec3f([0.0053,1.2679,-0.081]);
let Transform728 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape729 = browser.currentScene.createNode("Shape");
Shape729.USE = "HAnimJointShape";
Transform728YYY.child = new X3D.undefined();

Transform728ZZZ.child[0] = Shape729;

Transform727YYY.children = new X3D.MFNode();

Transform727ZZZ.children[0] = Transform728;

HAnimSegment726YYY.children = new X3D.MFNode();

HAnimSegment726ZZZ.children[0] = Transform727;

let Shape730 = browser.currentScene.createNode("Shape");
let LineSet731 = browser.currentScene.createNode("LineSet");
LineSet731.vertexCount = new X3D.MFInt32([2]);
let Coordinate732 = browser.currentScene.createNode("Coordinate");
Coordinate732.point = new X3D.MFVec3f([0.0053,1.2679,-0.081,0.0056,1.2848,-0.0822]);
coord = Coordinate732;

//from vt11 to vt10 vertices 2
let ColorRGBA733 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA733.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA733;

geometry = LineSet731;

HAnimSegment726ZZZ.children[1] = Shape730;

let HAnimSite734 = browser.currentScene.createNode("HAnimSite");
HAnimSite734.name = "substernale_pt";
HAnimSite734.DEF = "hanim_substernale_pt";
HAnimSite734.translation = new X3D.SFVec3f([0.0085,1.2995,0.1147]);
let TouchSensor735 = browser.currentScene.createNode("TouchSensor");
TouchSensor735.description = "HAnimSite substernale_pt";
HAnimSite734YYY.children = new X3D.MFNode();

HAnimSite734ZZZ.children[0] = TouchSensor735;

let Shape736 = browser.currentScene.createNode("Shape");
Shape736.USE = "HAnimSiteShape";
HAnimSite734ZZZ.children[1] = Shape736;

HAnimSegment726ZZZ.children[2] = HAnimSite734;

HAnimJoint725YYY.children = new X3D.MFNode();

HAnimJoint725ZZZ.children[0] = HAnimSegment726;

let HAnimJoint737 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint737.name = "vt10";
HAnimJoint737.DEF = "hanim_vt10";
HAnimJoint737.center = new X3D.SFVec3f([0.0056,1.2848,-0.0822]);
HAnimJoint737.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint737.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment738 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment738.name = "t10";
HAnimSegment738.DEF = "hanim_t10";
let Transform739 = browser.currentScene.createNode("Transform");
Transform739.translation = new X3D.SFVec3f([0.0056,1.2848,-0.0822]);
let Transform740 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape741 = browser.currentScene.createNode("Shape");
Shape741.USE = "HAnimJointShape";
Transform740YYY.child = new X3D.undefined();

Transform740ZZZ.child[0] = Shape741;

Transform739YYY.children = new X3D.MFNode();

Transform739ZZZ.children[0] = Transform740;

HAnimSegment738YYY.children = new X3D.MFNode();

HAnimSegment738ZZZ.children[0] = Transform739;

let Shape742 = browser.currentScene.createNode("Shape");
let LineSet743 = browser.currentScene.createNode("LineSet");
LineSet743.vertexCount = new X3D.MFInt32([2]);
let Coordinate744 = browser.currentScene.createNode("Coordinate");
Coordinate744.point = new X3D.MFVec3f([0.0056,1.2848,-0.0822,0.0057,1.3126,-0.0838]);
coord = Coordinate744;

//from vt10 to vt9 vertices 2
let ColorRGBA745 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA745.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA745;

geometry = LineSet743;

HAnimSegment738ZZZ.children[1] = Shape742;

let HAnimSite746 = browser.currentScene.createNode("HAnimSite");
HAnimSite746.name = "l_thelion_pt";
HAnimSite746.DEF = "hanim_l_thelion_pt";
HAnimSite746.translation = new X3D.SFVec3f([0.0918,1.3382,0.1192]);
let TouchSensor747 = browser.currentScene.createNode("TouchSensor");
TouchSensor747.description = "HAnimSite l_thelion_pt";
HAnimSite746YYY.children = new X3D.MFNode();

HAnimSite746ZZZ.children[0] = TouchSensor747;

let Shape748 = browser.currentScene.createNode("Shape");
Shape748.USE = "HAnimSiteShape";
HAnimSite746ZZZ.children[1] = Shape748;

HAnimSegment738ZZZ.children[2] = HAnimSite746;

let HAnimSite749 = browser.currentScene.createNode("HAnimSite");
HAnimSite749.name = "r_thelion_pt";
HAnimSite749.DEF = "hanim_r_thelion_pt";
HAnimSite749.translation = new X3D.SFVec3f([-0.0736,1.3385,0.1217]);
let TouchSensor750 = browser.currentScene.createNode("TouchSensor");
TouchSensor750.description = "HAnimSite r_thelion_pt";
HAnimSite749YYY.children = new X3D.MFNode();

HAnimSite749ZZZ.children[0] = TouchSensor750;

let Shape751 = browser.currentScene.createNode("Shape");
Shape751.USE = "HAnimSiteShape";
HAnimSite749ZZZ.children[1] = Shape751;

HAnimSegment738ZZZ.children[3] = HAnimSite749;

HAnimJoint737YYY.children = new X3D.MFNode();

HAnimJoint737ZZZ.children[0] = HAnimSegment738;

let HAnimJoint752 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint752.name = "vt9";
HAnimJoint752.DEF = "hanim_vt9";
HAnimJoint752.center = new X3D.SFVec3f([0.0057,1.3126,-0.0838]);
HAnimJoint752.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint752.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment753 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment753.name = "t9";
HAnimSegment753.DEF = "hanim_t9";
let Transform754 = browser.currentScene.createNode("Transform");
Transform754.translation = new X3D.SFVec3f([0.0057,1.3126,-0.0838]);
let Transform755 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape756 = browser.currentScene.createNode("Shape");
Shape756.USE = "HAnimJointShape";
Transform755YYY.child = new X3D.undefined();

Transform755ZZZ.child[0] = Shape756;

Transform754YYY.children = new X3D.MFNode();

Transform754ZZZ.children[0] = Transform755;

HAnimSegment753YYY.children = new X3D.MFNode();

HAnimSegment753ZZZ.children[0] = Transform754;

let Shape757 = browser.currentScene.createNode("Shape");
let LineSet758 = browser.currentScene.createNode("LineSet");
LineSet758.vertexCount = new X3D.MFInt32([2]);
let Coordinate759 = browser.currentScene.createNode("Coordinate");
Coordinate759.point = new X3D.MFVec3f([0.0057,1.3126,-0.0838,0.0057,1.3382,-0.0845]);
coord = Coordinate759;

//from vt9 to vt8 vertices 2
let ColorRGBA760 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA760.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA760;

geometry = LineSet758;

HAnimSegment753ZZZ.children[1] = Shape757;

HAnimJoint752YYY.children = new X3D.MFNode();

HAnimJoint752ZZZ.children[0] = HAnimSegment753;

let HAnimJoint761 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint761.name = "vt8";
HAnimJoint761.DEF = "hanim_vt8";
HAnimJoint761.center = new X3D.SFVec3f([0.0057,1.3382,-0.0845]);
HAnimJoint761.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint761.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment762 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment762.name = "t8";
HAnimSegment762.DEF = "hanim_t8";
let Transform763 = browser.currentScene.createNode("Transform");
Transform763.translation = new X3D.SFVec3f([0.0057,1.3382,-0.0845]);
let Transform764 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape765 = browser.currentScene.createNode("Shape");
Shape765.USE = "HAnimJointShape";
Transform764YYY.child = new X3D.undefined();

Transform764ZZZ.child[0] = Shape765;

Transform763YYY.children = new X3D.MFNode();

Transform763ZZZ.children[0] = Transform764;

HAnimSegment762YYY.children = new X3D.MFNode();

HAnimSegment762ZZZ.children[0] = Transform763;

let Shape766 = browser.currentScene.createNode("Shape");
let LineSet767 = browser.currentScene.createNode("LineSet");
LineSet767.vertexCount = new X3D.MFInt32([2]);
let Coordinate768 = browser.currentScene.createNode("Coordinate");
Coordinate768.point = new X3D.MFVec3f([0.0057,1.3382,-0.0845,0.0058,1.3625,-0.0833]);
coord = Coordinate768;

//from vt8 to vt7 vertices 2
let ColorRGBA769 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA769.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA769;

geometry = LineSet767;

HAnimSegment762ZZZ.children[1] = Shape766;

HAnimJoint761YYY.children = new X3D.MFNode();

HAnimJoint761ZZZ.children[0] = HAnimSegment762;

let HAnimJoint770 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint770.name = "vt7";
HAnimJoint770.DEF = "hanim_vt7";
HAnimJoint770.center = new X3D.SFVec3f([0.0058,1.3625,-0.0833]);
HAnimJoint770.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint770.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment771 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment771.name = "t7";
HAnimSegment771.DEF = "hanim_t7";
let Transform772 = browser.currentScene.createNode("Transform");
Transform772.translation = new X3D.SFVec3f([0.0058,1.3625,-0.0833]);
let Transform773 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape774 = browser.currentScene.createNode("Shape");
Shape774.USE = "HAnimJointShape";
Transform773YYY.child = new X3D.undefined();

Transform773ZZZ.child[0] = Shape774;

Transform772YYY.children = new X3D.MFNode();

Transform772ZZZ.children[0] = Transform773;

HAnimSegment771YYY.children = new X3D.MFNode();

HAnimSegment771ZZZ.children[0] = Transform772;

let Shape775 = browser.currentScene.createNode("Shape");
let LineSet776 = browser.currentScene.createNode("LineSet");
LineSet776.vertexCount = new X3D.MFInt32([2]);
let Coordinate777 = browser.currentScene.createNode("Coordinate");
Coordinate777.point = new X3D.MFVec3f([0.0058,1.3625,-0.0833,0.0059,1.3866,-0.08]);
coord = Coordinate777;

//from vt7 to vt6 vertices 2
let ColorRGBA778 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA778.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA778;

geometry = LineSet776;

HAnimSegment771ZZZ.children[1] = Shape775;

let HAnimSite779 = browser.currentScene.createNode("HAnimSite");
HAnimSite779.name = "l_chest_midsagittal_plane_pt";
HAnimSite779.DEF = "hanim_l_chest_midsagittal_plane_pt";
let TouchSensor780 = browser.currentScene.createNode("TouchSensor");
TouchSensor780.description = "HAnimSite l_chest_midsagittal_plane_pt";
HAnimSite779YYY.children = new X3D.MFNode();

HAnimSite779ZZZ.children[0] = TouchSensor780;

let Shape781 = browser.currentScene.createNode("Shape");
Shape781.USE = "HAnimSiteShape";
HAnimSite779ZZZ.children[1] = Shape781;

HAnimSegment771ZZZ.children[2] = HAnimSite779;

let HAnimSite782 = browser.currentScene.createNode("HAnimSite");
HAnimSite782.name = "mesosternale_pt";
HAnimSite782.DEF = "hanim_mesosternale_pt";
let TouchSensor783 = browser.currentScene.createNode("TouchSensor");
TouchSensor783.description = "HAnimSite mesosternale_pt";
HAnimSite782YYY.children = new X3D.MFNode();

HAnimSite782ZZZ.children[0] = TouchSensor783;

let Shape784 = browser.currentScene.createNode("Shape");
Shape784.USE = "HAnimSiteShape";
HAnimSite782ZZZ.children[1] = Shape784;

HAnimSegment771ZZZ.children[3] = HAnimSite782;

let HAnimSite785 = browser.currentScene.createNode("HAnimSite");
HAnimSite785.name = "r_chest_midsagittal_plane_pt";
HAnimSite785.DEF = "hanim_r_chest_midsagittal_plane_pt";
let TouchSensor786 = browser.currentScene.createNode("TouchSensor");
TouchSensor786.description = "HAnimSite r_chest_midsagittal_plane_pt";
HAnimSite785YYY.children = new X3D.MFNode();

HAnimSite785ZZZ.children[0] = TouchSensor786;

let Shape787 = browser.currentScene.createNode("Shape");
Shape787.USE = "HAnimSiteShape";
HAnimSite785ZZZ.children[1] = Shape787;

HAnimSegment771ZZZ.children[4] = HAnimSite785;

let HAnimSite788 = browser.currentScene.createNode("HAnimSite");
HAnimSite788.name = "rear_center_midsagittal_plane_pt";
HAnimSite788.DEF = "hanim_rear_center_midsagittal_plane_pt";
let TouchSensor789 = browser.currentScene.createNode("TouchSensor");
TouchSensor789.description = "HAnimSite rear_center_midsagittal_plane_pt";
HAnimSite788YYY.children = new X3D.MFNode();

HAnimSite788ZZZ.children[0] = TouchSensor789;

let Shape790 = browser.currentScene.createNode("Shape");
Shape790.USE = "HAnimSiteShape";
HAnimSite788ZZZ.children[1] = Shape790;

HAnimSegment771ZZZ.children[5] = HAnimSite788;

HAnimJoint770YYY.children = new X3D.MFNode();

HAnimJoint770ZZZ.children[0] = HAnimSegment771;

let HAnimJoint791 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint791.name = "vt6";
HAnimJoint791.DEF = "hanim_vt6";
HAnimJoint791.center = new X3D.SFVec3f([0.0059,1.3866,-0.08]);
HAnimJoint791.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint791.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment792 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment792.name = "t6";
HAnimSegment792.DEF = "hanim_t6";
let Transform793 = browser.currentScene.createNode("Transform");
Transform793.translation = new X3D.SFVec3f([0.0059,1.3866,-0.08]);
let Transform794 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape795 = browser.currentScene.createNode("Shape");
Shape795.USE = "HAnimJointShape";
Transform794YYY.child = new X3D.undefined();

Transform794ZZZ.child[0] = Shape795;

Transform793YYY.children = new X3D.MFNode();

Transform793ZZZ.children[0] = Transform794;

HAnimSegment792YYY.children = new X3D.MFNode();

HAnimSegment792ZZZ.children[0] = Transform793;

let Shape796 = browser.currentScene.createNode("Shape");
let LineSet797 = browser.currentScene.createNode("LineSet");
LineSet797.vertexCount = new X3D.MFInt32([2]);
let Coordinate798 = browser.currentScene.createNode("Coordinate");
Coordinate798.point = new X3D.MFVec3f([0.0059,1.3866,-0.08,0.006,1.4102,-0.0745]);
coord = Coordinate798;

//from vt6 to vt5 vertices 2
let ColorRGBA799 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA799.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA799;

geometry = LineSet797;

HAnimSegment792ZZZ.children[1] = Shape796;

let HAnimSite800 = browser.currentScene.createNode("HAnimSite");
HAnimSite800.name = "spine_1_middle_back_pt";
HAnimSite800.DEF = "hanim_spine_1_middle_back_pt";
let TouchSensor801 = browser.currentScene.createNode("TouchSensor");
TouchSensor801.description = "HAnimSite spine_1_middle_back_pt";
HAnimSite800YYY.children = new X3D.MFNode();

HAnimSite800ZZZ.children[0] = TouchSensor801;

let Shape802 = browser.currentScene.createNode("Shape");
Shape802.USE = "HAnimSiteShape";
HAnimSite800ZZZ.children[1] = Shape802;

HAnimSegment792ZZZ.children[2] = HAnimSite800;

HAnimJoint791YYY.children = new X3D.MFNode();

HAnimJoint791ZZZ.children[0] = HAnimSegment792;

let HAnimJoint803 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint803.name = "vt5";
HAnimJoint803.DEF = "hanim_vt5";
HAnimJoint803.center = new X3D.SFVec3f([0.006,1.4102,-0.0745]);
HAnimJoint803.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint803.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment804 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment804.name = "t5";
HAnimSegment804.DEF = "hanim_t5";
let Transform805 = browser.currentScene.createNode("Transform");
Transform805.translation = new X3D.SFVec3f([0.006,1.4102,-0.0745]);
let Transform806 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape807 = browser.currentScene.createNode("Shape");
Shape807.USE = "HAnimJointShape";
Transform806YYY.child = new X3D.undefined();

Transform806ZZZ.child[0] = Shape807;

Transform805YYY.children = new X3D.MFNode();

Transform805ZZZ.children[0] = Transform806;

HAnimSegment804YYY.children = new X3D.MFNode();

HAnimSegment804ZZZ.children[0] = Transform805;

let Shape808 = browser.currentScene.createNode("Shape");
let LineSet809 = browser.currentScene.createNode("LineSet");
LineSet809.vertexCount = new X3D.MFInt32([2]);
let Coordinate810 = browser.currentScene.createNode("Coordinate");
Coordinate810.point = new X3D.MFVec3f([0.006,1.4102,-0.0745,0.0061,1.432,-0.0675]);
coord = Coordinate810;

//from vt5 to vt4 vertices 2
let ColorRGBA811 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA811.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA811;

geometry = LineSet809;

HAnimSegment804ZZZ.children[1] = Shape808;

HAnimJoint803YYY.children = new X3D.MFNode();

HAnimJoint803ZZZ.children[0] = HAnimSegment804;

let HAnimJoint812 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint812.name = "vt4";
HAnimJoint812.DEF = "hanim_vt4";
HAnimJoint812.center = new X3D.SFVec3f([0.0061,1.432,-0.0675]);
HAnimJoint812.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint812.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment813 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment813.name = "t4";
HAnimSegment813.DEF = "hanim_t4";
let Transform814 = browser.currentScene.createNode("Transform");
Transform814.translation = new X3D.SFVec3f([0.0061,1.432,-0.0675]);
let Transform815 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape816 = browser.currentScene.createNode("Shape");
Shape816.USE = "HAnimJointShape";
Transform815YYY.child = new X3D.undefined();

Transform815ZZZ.child[0] = Shape816;

Transform814YYY.children = new X3D.MFNode();

Transform814ZZZ.children[0] = Transform815;

HAnimSegment813YYY.children = new X3D.MFNode();

HAnimSegment813ZZZ.children[0] = Transform814;

let Shape817 = browser.currentScene.createNode("Shape");
let LineSet818 = browser.currentScene.createNode("LineSet");
LineSet818.vertexCount = new X3D.MFInt32([2]);
let Coordinate819 = browser.currentScene.createNode("Coordinate");
Coordinate819.point = new X3D.MFVec3f([0.0061,1.432,-0.0675,0.0062,1.4583,-0.057]);
coord = Coordinate819;

//from vt4 to vt3 vertices 2
let ColorRGBA820 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA820.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA820;

geometry = LineSet818;

HAnimSegment813ZZZ.children[1] = Shape817;

HAnimJoint812YYY.children = new X3D.MFNode();

HAnimJoint812ZZZ.children[0] = HAnimSegment813;

let HAnimJoint821 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint821.name = "vt3";
HAnimJoint821.DEF = "hanim_vt3";
HAnimJoint821.center = new X3D.SFVec3f([0.0062,1.4583,-0.057]);
HAnimJoint821.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint821.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment822 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment822.name = "t3";
HAnimSegment822.DEF = "hanim_t3";
let Transform823 = browser.currentScene.createNode("Transform");
Transform823.translation = new X3D.SFVec3f([0.0062,1.4583,-0.057]);
let Transform824 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape825 = browser.currentScene.createNode("Shape");
Shape825.USE = "HAnimJointShape";
Transform824YYY.child = new X3D.undefined();

Transform824ZZZ.child[0] = Shape825;

Transform823YYY.children = new X3D.MFNode();

Transform823ZZZ.children[0] = Transform824;

HAnimSegment822YYY.children = new X3D.MFNode();

HAnimSegment822ZZZ.children[0] = Transform823;

let Shape826 = browser.currentScene.createNode("Shape");
let LineSet827 = browser.currentScene.createNode("LineSet");
LineSet827.vertexCount = new X3D.MFInt32([2]);
let Coordinate828 = browser.currentScene.createNode("Coordinate");
Coordinate828.point = new X3D.MFVec3f([0.0062,1.4583,-0.057,0.0063,1.4761,-0.0484]);
coord = Coordinate828;

//from vt3 to vt2 vertices 2
let ColorRGBA829 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA829.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA829;

geometry = LineSet827;

HAnimSegment822ZZZ.children[1] = Shape826;

HAnimJoint821YYY.children = new X3D.MFNode();

HAnimJoint821ZZZ.children[0] = HAnimSegment822;

let HAnimJoint830 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint830.name = "vt2";
HAnimJoint830.DEF = "hanim_vt2";
HAnimJoint830.center = new X3D.SFVec3f([0.0063,1.4761,-0.0484]);
HAnimJoint830.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint830.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment831 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment831.name = "t2";
HAnimSegment831.DEF = "hanim_t2";
let Transform832 = browser.currentScene.createNode("Transform");
Transform832.translation = new X3D.SFVec3f([0.0063,1.4761,-0.0484]);
let Transform833 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape834 = browser.currentScene.createNode("Shape");
Shape834.USE = "HAnimJointShape";
Transform833YYY.child = new X3D.undefined();

Transform833ZZZ.child[0] = Shape834;

Transform832YYY.children = new X3D.MFNode();

Transform832ZZZ.children[0] = Transform833;

HAnimSegment831YYY.children = new X3D.MFNode();

HAnimSegment831ZZZ.children[0] = Transform832;

let Shape835 = browser.currentScene.createNode("Shape");
let LineSet836 = browser.currentScene.createNode("LineSet");
LineSet836.vertexCount = new X3D.MFInt32([2]);
let Coordinate837 = browser.currentScene.createNode("Coordinate");
Coordinate837.point = new X3D.MFVec3f([0.0063,1.4761,-0.0484,0.0065,1.4951,-0.0387]);
coord = Coordinate837;

//from vt2 to vt1 vertices 2
let ColorRGBA838 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA838.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA838;

geometry = LineSet836;

HAnimSegment831ZZZ.children[1] = Shape835;

let HAnimSite839 = browser.currentScene.createNode("HAnimSite");
HAnimSite839.name = "cervicale_pt";
HAnimSite839.DEF = "hanim_cervicale_pt";
HAnimSite839.translation = new X3D.SFVec3f([0.0064,1.52,-0.0815]);
let TouchSensor840 = browser.currentScene.createNode("TouchSensor");
TouchSensor840.description = "HAnimSite cervicale_pt";
HAnimSite839YYY.children = new X3D.MFNode();

HAnimSite839ZZZ.children[0] = TouchSensor840;

let Shape841 = browser.currentScene.createNode("Shape");
Shape841.USE = "HAnimSiteShape";
HAnimSite839ZZZ.children[1] = Shape841;

HAnimSegment831ZZZ.children[2] = HAnimSite839;

let HAnimSite842 = browser.currentScene.createNode("HAnimSite");
HAnimSite842.name = "suprasternale_pt";
HAnimSite842.DEF = "hanim_suprasternale_pt";
HAnimSite842.translation = new X3D.SFVec3f([0.0084,1.4714,0.0551]);
let TouchSensor843 = browser.currentScene.createNode("TouchSensor");
TouchSensor843.description = "HAnimSite suprasternale_pt";
HAnimSite842YYY.children = new X3D.MFNode();

HAnimSite842ZZZ.children[0] = TouchSensor843;

let Shape844 = browser.currentScene.createNode("Shape");
Shape844.USE = "HAnimSiteShape";
HAnimSite842ZZZ.children[1] = Shape844;

HAnimSegment831ZZZ.children[3] = HAnimSite842;

HAnimJoint830YYY.children = new X3D.MFNode();

HAnimJoint830ZZZ.children[0] = HAnimSegment831;

let HAnimJoint845 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint845.name = "vt1";
HAnimJoint845.DEF = "hanim_vt1";
HAnimJoint845.center = new X3D.SFVec3f([0.0065,1.4951,-0.0387]);
HAnimJoint845.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint845.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment846 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment846.name = "t1";
HAnimSegment846.DEF = "hanim_t1";
let Transform847 = browser.currentScene.createNode("Transform");
Transform847.translation = new X3D.SFVec3f([0.0065,1.4951,-0.0387]);
let Transform848 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape849 = browser.currentScene.createNode("Shape");
Shape849.USE = "HAnimJointShape";
Transform848YYY.child = new X3D.undefined();

Transform848ZZZ.child[0] = Shape849;

Transform847YYY.children = new X3D.MFNode();

Transform847ZZZ.children[0] = Transform848;

HAnimSegment846YYY.children = new X3D.MFNode();

HAnimSegment846ZZZ.children[0] = Transform847;

let Shape850 = browser.currentScene.createNode("Shape");
let LineSet851 = browser.currentScene.createNode("LineSet");
LineSet851.vertexCount = new X3D.MFInt32([2]);
let Coordinate852 = browser.currentScene.createNode("Coordinate");
Coordinate852.point = new X3D.MFVec3f([0.0065,1.4951,-0.0387,0.0066,1.5132,-0.0301]);
coord = Coordinate852;

//from vt1 to vc7 vertices 2
let ColorRGBA853 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA853.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA853;

geometry = LineSet851;

HAnimSegment846ZZZ.children[1] = Shape850;

let HAnimSite854 = browser.currentScene.createNode("HAnimSite");
HAnimSite854.name = "l_neck_base_pt";
HAnimSite854.DEF = "hanim_l_neck_base_pt";
HAnimSite854.translation = new X3D.SFVec3f([0.0646,1.5141,-0.038]);
let TouchSensor855 = browser.currentScene.createNode("TouchSensor");
TouchSensor855.description = "HAnimSite l_neck_base_pt";
HAnimSite854YYY.children = new X3D.MFNode();

HAnimSite854ZZZ.children[0] = TouchSensor855;

let Shape856 = browser.currentScene.createNode("Shape");
Shape856.USE = "HAnimSiteShape";
HAnimSite854ZZZ.children[1] = Shape856;

HAnimSegment846ZZZ.children[2] = HAnimSite854;

let HAnimSite857 = browser.currentScene.createNode("HAnimSite");
HAnimSite857.name = "r_neck_base_pt";
HAnimSite857.DEF = "hanim_r_neck_base_pt";
HAnimSite857.translation = new X3D.SFVec3f([-0.0419,1.5149,-0.022]);
let TouchSensor858 = browser.currentScene.createNode("TouchSensor");
TouchSensor858.description = "HAnimSite r_neck_base_pt";
HAnimSite857YYY.children = new X3D.MFNode();

HAnimSite857ZZZ.children[0] = TouchSensor858;

let Shape859 = browser.currentScene.createNode("Shape");
Shape859.USE = "HAnimSiteShape";
HAnimSite857ZZZ.children[1] = Shape859;

HAnimSegment846ZZZ.children[3] = HAnimSite857;

let Shape860 = browser.currentScene.createNode("Shape");
let LineSet861 = browser.currentScene.createNode("LineSet");
LineSet861.vertexCount = new X3D.MFInt32([2]);
let Coordinate862 = browser.currentScene.createNode("Coordinate");
Coordinate862.point = new X3D.MFVec3f([0.0065,1.4951,-0.0387,0.082,1.4488,-0.0353]);
coord = Coordinate862;

//from vt1 to l_sternoclavicular vertices 2
let ColorRGBA863 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA863.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA863;

geometry = LineSet861;

HAnimSegment846ZZZ.children[4] = Shape860;

let HAnimSite864 = browser.currentScene.createNode("HAnimSite");
HAnimSite864.name = "l_acromion_pt";
HAnimSite864.DEF = "hanim_l_acromion_pt";
HAnimSite864.translation = new X3D.SFVec3f([0.2032,1.476,-0.049]);
let TouchSensor865 = browser.currentScene.createNode("TouchSensor");
TouchSensor865.description = "HAnimSite l_acromion_pt";
HAnimSite864YYY.children = new X3D.MFNode();

HAnimSite864ZZZ.children[0] = TouchSensor865;

let Shape866 = browser.currentScene.createNode("Shape");
Shape866.USE = "HAnimSiteShape";
HAnimSite864ZZZ.children[1] = Shape866;

HAnimSegment846ZZZ.children[5] = HAnimSite864;

let HAnimSite867 = browser.currentScene.createNode("HAnimSite");
HAnimSite867.name = "l_axilla_distal_pt";
HAnimSite867.DEF = "hanim_l_axilla_distal_pt";
HAnimSite867.translation = new X3D.SFVec3f([0.1706,1.4072,-0.0875]);
let TouchSensor868 = browser.currentScene.createNode("TouchSensor");
TouchSensor868.description = "HAnimSite l_axilla_distal_pt";
HAnimSite867YYY.children = new X3D.MFNode();

HAnimSite867ZZZ.children[0] = TouchSensor868;

let Shape869 = browser.currentScene.createNode("Shape");
Shape869.USE = "HAnimSiteShape";
HAnimSite867ZZZ.children[1] = Shape869;

HAnimSegment846ZZZ.children[6] = HAnimSite867;

let HAnimSite870 = browser.currentScene.createNode("HAnimSite");
HAnimSite870.name = "l_axilla_posterior_folds_pt";
HAnimSite870.DEF = "hanim_l_axilla_posterior_folds_pt";
let TouchSensor871 = browser.currentScene.createNode("TouchSensor");
TouchSensor871.description = "HAnimSite l_axilla_posterior_folds_pt";
HAnimSite870YYY.children = new X3D.MFNode();

HAnimSite870ZZZ.children[0] = TouchSensor871;

let Shape872 = browser.currentScene.createNode("Shape");
Shape872.USE = "HAnimSiteShape";
HAnimSite870ZZZ.children[1] = Shape872;

HAnimSegment846ZZZ.children[7] = HAnimSite870;

let HAnimSite873 = browser.currentScene.createNode("HAnimSite");
HAnimSite873.name = "l_axilla_proximal_pt";
HAnimSite873.DEF = "hanim_l_axilla_proximal_pt";
HAnimSite873.translation = new X3D.SFVec3f([0.1777,1.4065,-0.0075]);
let TouchSensor874 = browser.currentScene.createNode("TouchSensor");
TouchSensor874.description = "HAnimSite l_axilla_proximal_pt";
HAnimSite873YYY.children = new X3D.MFNode();

HAnimSite873ZZZ.children[0] = TouchSensor874;

let Shape875 = browser.currentScene.createNode("Shape");
Shape875.USE = "HAnimSiteShape";
HAnimSite873ZZZ.children[1] = Shape875;

HAnimSegment846ZZZ.children[8] = HAnimSite873;

let HAnimSite876 = browser.currentScene.createNode("HAnimSite");
HAnimSite876.name = "l_clavicale_pt";
HAnimSite876.DEF = "hanim_l_clavicale_pt";
HAnimSite876.translation = new X3D.SFVec3f([0.0271,1.4943,0.0394]);
let TouchSensor877 = browser.currentScene.createNode("TouchSensor");
TouchSensor877.description = "HAnimSite l_clavicale_pt";
HAnimSite876YYY.children = new X3D.MFNode();

HAnimSite876ZZZ.children[0] = TouchSensor877;

let Shape878 = browser.currentScene.createNode("Shape");
Shape878.USE = "HAnimSiteShape";
HAnimSite876ZZZ.children[1] = Shape878;

HAnimSegment846ZZZ.children[9] = HAnimSite876;

let Shape879 = browser.currentScene.createNode("Shape");
let LineSet880 = browser.currentScene.createNode("LineSet");
LineSet880.vertexCount = new X3D.MFInt32([2]);
let Coordinate881 = browser.currentScene.createNode("Coordinate");
Coordinate881.point = new X3D.MFVec3f([0.0065,1.4951,-0.0387,-0.0694,1.46,-0.033]);
coord = Coordinate881;

//from vt1 to r_sternoclavicular vertices 2
let ColorRGBA882 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA882.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA882;

geometry = LineSet880;

HAnimSegment846ZZZ.children[10] = Shape879;

let HAnimSite883 = browser.currentScene.createNode("HAnimSite");
HAnimSite883.name = "r_acromion_pt";
HAnimSite883.DEF = "hanim_r_acromion_pt";
HAnimSite883.translation = new X3D.SFVec3f([-0.1905,1.4791,-0.0431]);
let TouchSensor884 = browser.currentScene.createNode("TouchSensor");
TouchSensor884.description = "HAnimSite r_acromion_pt";
HAnimSite883YYY.children = new X3D.MFNode();

HAnimSite883ZZZ.children[0] = TouchSensor884;

let Shape885 = browser.currentScene.createNode("Shape");
Shape885.USE = "HAnimSiteShape";
HAnimSite883ZZZ.children[1] = Shape885;

HAnimSegment846ZZZ.children[11] = HAnimSite883;

let HAnimSite886 = browser.currentScene.createNode("HAnimSite");
HAnimSite886.name = "r_axilla_distal_pt";
HAnimSite886.DEF = "hanim_r_axilla_distal_pt";
HAnimSite886.translation = new X3D.SFVec3f([-0.1603,1.4098,-0.0826]);
let TouchSensor887 = browser.currentScene.createNode("TouchSensor");
TouchSensor887.description = "HAnimSite r_axilla_distal_pt";
HAnimSite886YYY.children = new X3D.MFNode();

HAnimSite886ZZZ.children[0] = TouchSensor887;

let Shape888 = browser.currentScene.createNode("Shape");
Shape888.USE = "HAnimSiteShape";
HAnimSite886ZZZ.children[1] = Shape888;

HAnimSegment846ZZZ.children[12] = HAnimSite886;

let HAnimSite889 = browser.currentScene.createNode("HAnimSite");
HAnimSite889.name = "r_axilla_posterior_folds_pt";
HAnimSite889.DEF = "hanim_r_axilla_posterior_folds_pt";
let TouchSensor890 = browser.currentScene.createNode("TouchSensor");
TouchSensor890.description = "HAnimSite r_axilla_posterior_folds_pt";
HAnimSite889YYY.children = new X3D.MFNode();

HAnimSite889ZZZ.children[0] = TouchSensor890;

let Shape891 = browser.currentScene.createNode("Shape");
Shape891.USE = "HAnimSiteShape";
HAnimSite889ZZZ.children[1] = Shape891;

HAnimSegment846ZZZ.children[13] = HAnimSite889;

let HAnimSite892 = browser.currentScene.createNode("HAnimSite");
HAnimSite892.name = "r_axilla_proximal_pt";
HAnimSite892.DEF = "hanim_r_axilla_proximal_pt";
HAnimSite892.translation = new X3D.SFVec3f([-0.1626,1.4072,-0.0031]);
let TouchSensor893 = browser.currentScene.createNode("TouchSensor");
TouchSensor893.description = "HAnimSite r_axilla_proximal_pt";
HAnimSite892YYY.children = new X3D.MFNode();

HAnimSite892ZZZ.children[0] = TouchSensor893;

let Shape894 = browser.currentScene.createNode("Shape");
Shape894.USE = "HAnimSiteShape";
HAnimSite892ZZZ.children[1] = Shape894;

HAnimSegment846ZZZ.children[14] = HAnimSite892;

let HAnimSite895 = browser.currentScene.createNode("HAnimSite");
HAnimSite895.name = "r_clavicale_pt";
HAnimSite895.DEF = "hanim_r_clavicale_pt";
HAnimSite895.translation = new X3D.SFVec3f([-0.0115,1.4943,0.04]);
let TouchSensor896 = browser.currentScene.createNode("TouchSensor");
TouchSensor896.description = "HAnimSite r_clavicale_pt";
HAnimSite895YYY.children = new X3D.MFNode();

HAnimSite895ZZZ.children[0] = TouchSensor896;

let Shape897 = browser.currentScene.createNode("Shape");
Shape897.USE = "HAnimSiteShape";
HAnimSite895ZZZ.children[1] = Shape897;

HAnimSegment846ZZZ.children[15] = HAnimSite895;

HAnimJoint845YYY.children = new X3D.MFNode();

HAnimJoint845ZZZ.children[0] = HAnimSegment846;

let HAnimJoint898 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint898.name = "vc7";
HAnimJoint898.DEF = "hanim_vc7";
HAnimJoint898.center = new X3D.SFVec3f([0.0066,1.5132,-0.0301]);
HAnimJoint898.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint898.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment899 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment899.name = "c7";
HAnimSegment899.DEF = "hanim_c7";
let Transform900 = browser.currentScene.createNode("Transform");
Transform900.translation = new X3D.SFVec3f([0.0066,1.5132,-0.0301]);
let Transform901 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape902 = browser.currentScene.createNode("Shape");
Shape902.USE = "HAnimJointShape";
Transform901YYY.child = new X3D.undefined();

Transform901ZZZ.child[0] = Shape902;

Transform900YYY.children = new X3D.MFNode();

Transform900ZZZ.children[0] = Transform901;

HAnimSegment899YYY.children = new X3D.MFNode();

HAnimSegment899ZZZ.children[0] = Transform900;

let Shape903 = browser.currentScene.createNode("Shape");
let LineSet904 = browser.currentScene.createNode("LineSet");
LineSet904.vertexCount = new X3D.MFInt32([2]);
let Coordinate905 = browser.currentScene.createNode("Coordinate");
Coordinate905.point = new X3D.MFVec3f([0.0066,1.5132,-0.0301,0.0066,1.5357,-0.0143]);
coord = Coordinate905;

//from vc7 to vc6 vertices 2
let ColorRGBA906 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA906.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA906;

geometry = LineSet904;

HAnimSegment899ZZZ.children[1] = Shape903;

HAnimJoint898YYY.children = new X3D.MFNode();

HAnimJoint898ZZZ.children[0] = HAnimSegment899;

let HAnimJoint907 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint907.name = "vc6";
HAnimJoint907.DEF = "hanim_vc6";
HAnimJoint907.center = new X3D.SFVec3f([0.0066,1.5357,-0.0143]);
HAnimJoint907.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint907.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment908 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment908.name = "c6";
HAnimSegment908.DEF = "hanim_c6";
let Transform909 = browser.currentScene.createNode("Transform");
Transform909.translation = new X3D.SFVec3f([0.0066,1.5357,-0.0143]);
let Transform910 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape911 = browser.currentScene.createNode("Shape");
Shape911.USE = "HAnimJointShape";
Transform910YYY.child = new X3D.undefined();

Transform910ZZZ.child[0] = Shape911;

Transform909YYY.children = new X3D.MFNode();

Transform909ZZZ.children[0] = Transform910;

HAnimSegment908YYY.children = new X3D.MFNode();

HAnimSegment908ZZZ.children[0] = Transform909;

let Shape912 = browser.currentScene.createNode("Shape");
let LineSet913 = browser.currentScene.createNode("LineSet");
LineSet913.vertexCount = new X3D.MFInt32([2]);
let Coordinate914 = browser.currentScene.createNode("Coordinate");
Coordinate914.point = new X3D.MFVec3f([0.0066,1.5357,-0.0143,0.0066,1.552,-0.0082]);
coord = Coordinate914;

//from vc6 to vc5 vertices 2
let ColorRGBA915 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA915.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA915;

geometry = LineSet913;

HAnimSegment908ZZZ.children[1] = Shape912;

HAnimJoint907YYY.children = new X3D.MFNode();

HAnimJoint907ZZZ.children[0] = HAnimSegment908;

let HAnimJoint916 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint916.name = "vc5";
HAnimJoint916.DEF = "hanim_vc5";
HAnimJoint916.center = new X3D.SFVec3f([0.0066,1.552,-0.0082]);
HAnimJoint916.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint916.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment917 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment917.name = "c5";
HAnimSegment917.DEF = "hanim_c5";
let Transform918 = browser.currentScene.createNode("Transform");
Transform918.translation = new X3D.SFVec3f([0.0066,1.552,-0.0082]);
let Transform919 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape920 = browser.currentScene.createNode("Shape");
Shape920.USE = "HAnimJointShape";
Transform919YYY.child = new X3D.undefined();

Transform919ZZZ.child[0] = Shape920;

Transform918YYY.children = new X3D.MFNode();

Transform918ZZZ.children[0] = Transform919;

HAnimSegment917YYY.children = new X3D.MFNode();

HAnimSegment917ZZZ.children[0] = Transform918;

let Shape921 = browser.currentScene.createNode("Shape");
let LineSet922 = browser.currentScene.createNode("LineSet");
LineSet922.vertexCount = new X3D.MFInt32([2]);
let Coordinate923 = browser.currentScene.createNode("Coordinate");
Coordinate923.point = new X3D.MFVec3f([0.0066,1.552,-0.0082,0.0066,1.5662,-0.0084]);
coord = Coordinate923;

//from vc5 to vc4 vertices 2
let ColorRGBA924 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA924.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA924;

geometry = LineSet922;

HAnimSegment917ZZZ.children[1] = Shape921;

HAnimJoint916YYY.children = new X3D.MFNode();

HAnimJoint916ZZZ.children[0] = HAnimSegment917;

let HAnimJoint925 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint925.name = "vc4";
HAnimJoint925.DEF = "hanim_vc4";
HAnimJoint925.center = new X3D.SFVec3f([0.0066,1.5662,-0.0084]);
HAnimJoint925.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint925.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment926 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment926.name = "c4";
HAnimSegment926.DEF = "hanim_c4";
let Transform927 = browser.currentScene.createNode("Transform");
Transform927.translation = new X3D.SFVec3f([0.0066,1.5662,-0.0084]);
let Transform928 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape929 = browser.currentScene.createNode("Shape");
Shape929.USE = "HAnimJointShape";
Transform928YYY.child = new X3D.undefined();

Transform928ZZZ.child[0] = Shape929;

Transform927YYY.children = new X3D.MFNode();

Transform927ZZZ.children[0] = Transform928;

HAnimSegment926YYY.children = new X3D.MFNode();

HAnimSegment926ZZZ.children[0] = Transform927;

let Shape930 = browser.currentScene.createNode("Shape");
let LineSet931 = browser.currentScene.createNode("LineSet");
LineSet931.vertexCount = new X3D.MFInt32([2]);
let Coordinate932 = browser.currentScene.createNode("Coordinate");
Coordinate932.point = new X3D.MFVec3f([0.0066,1.5662,-0.0084,0.0066,1.58,-0.0103]);
coord = Coordinate932;

//from vc4 to vc3 vertices 2
let ColorRGBA933 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA933.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA933;

geometry = LineSet931;

HAnimSegment926ZZZ.children[1] = Shape930;

HAnimJoint925YYY.children = new X3D.MFNode();

HAnimJoint925ZZZ.children[0] = HAnimSegment926;

let HAnimJoint934 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint934.name = "vc3";
HAnimJoint934.DEF = "hanim_vc3";
HAnimJoint934.center = new X3D.SFVec3f([0.0066,1.58,-0.0103]);
HAnimJoint934.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint934.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment935 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment935.name = "c3";
HAnimSegment935.DEF = "hanim_c3";
let Transform936 = browser.currentScene.createNode("Transform");
Transform936.translation = new X3D.SFVec3f([0.0066,1.58,-0.0103]);
let Transform937 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape938 = browser.currentScene.createNode("Shape");
Shape938.USE = "HAnimJointShape";
Transform937YYY.child = new X3D.undefined();

Transform937ZZZ.child[0] = Shape938;

Transform936YYY.children = new X3D.MFNode();

Transform936ZZZ.children[0] = Transform937;

HAnimSegment935YYY.children = new X3D.MFNode();

HAnimSegment935ZZZ.children[0] = Transform936;

let Shape939 = browser.currentScene.createNode("Shape");
let LineSet940 = browser.currentScene.createNode("LineSet");
LineSet940.vertexCount = new X3D.MFInt32([2]);
let Coordinate941 = browser.currentScene.createNode("Coordinate");
Coordinate941.point = new X3D.MFVec3f([0.0066,1.58,-0.0103,0.0066,1.5928,-0.0103]);
coord = Coordinate941;

//from vc3 to vc2 vertices 2
let ColorRGBA942 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA942.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA942;

geometry = LineSet940;

HAnimSegment935ZZZ.children[1] = Shape939;

let HAnimSite943 = browser.currentScene.createNode("HAnimSite");
HAnimSite943.name = "adams_apple_pt";
HAnimSite943.DEF = "hanim_adams_apple_pt";
let TouchSensor944 = browser.currentScene.createNode("TouchSensor");
TouchSensor944.description = "HAnimSite adams_apple_pt";
HAnimSite943YYY.children = new X3D.MFNode();

HAnimSite943ZZZ.children[0] = TouchSensor944;

let Shape945 = browser.currentScene.createNode("Shape");
Shape945.USE = "HAnimSiteShape";
HAnimSite943ZZZ.children[1] = Shape945;

HAnimSegment935ZZZ.children[2] = HAnimSite943;

HAnimJoint934YYY.children = new X3D.MFNode();

HAnimJoint934ZZZ.children[0] = HAnimSegment935;

let HAnimJoint946 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint946.name = "vc2";
HAnimJoint946.DEF = "hanim_vc2";
HAnimJoint946.center = new X3D.SFVec3f([0.0066,1.5928,-0.0103]);
HAnimJoint946.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint946.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment947 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment947.name = "c2";
HAnimSegment947.DEF = "hanim_c2";
let Transform948 = browser.currentScene.createNode("Transform");
Transform948.translation = new X3D.SFVec3f([0.0066,1.5928,-0.0103]);
let Transform949 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape950 = browser.currentScene.createNode("Shape");
Shape950.USE = "HAnimJointShape";
Transform949YYY.child = new X3D.undefined();

Transform949ZZZ.child[0] = Shape950;

Transform948YYY.children = new X3D.MFNode();

Transform948ZZZ.children[0] = Transform949;

HAnimSegment947YYY.children = new X3D.MFNode();

HAnimSegment947ZZZ.children[0] = Transform948;

let Shape951 = browser.currentScene.createNode("Shape");
let LineSet952 = browser.currentScene.createNode("LineSet");
LineSet952.vertexCount = new X3D.MFInt32([2]);
let Coordinate953 = browser.currentScene.createNode("Coordinate");
Coordinate953.point = new X3D.MFVec3f([0.0066,1.5928,-0.0103,0.0066,1.6144,-0.0034]);
coord = Coordinate953;

//from vc2 to vc1 vertices 2
let ColorRGBA954 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA954.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA954;

geometry = LineSet952;

HAnimSegment947ZZZ.children[1] = Shape951;

HAnimJoint946YYY.children = new X3D.MFNode();

HAnimJoint946ZZZ.children[0] = HAnimSegment947;

let HAnimJoint955 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint955.name = "vc1";
HAnimJoint955.DEF = "hanim_vc1";
HAnimJoint955.center = new X3D.SFVec3f([0.0066,1.6144,-0.0034]);
HAnimJoint955.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint955.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment956 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment956.name = "c1";
HAnimSegment956.DEF = "hanim_c1";
let Transform957 = browser.currentScene.createNode("Transform");
Transform957.translation = new X3D.SFVec3f([0.0066,1.6144,-0.0034]);
let Transform958 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape959 = browser.currentScene.createNode("Shape");
Shape959.USE = "HAnimJointShape";
Transform958YYY.child = new X3D.undefined();

Transform958ZZZ.child[0] = Shape959;

Transform957YYY.children = new X3D.MFNode();

Transform957ZZZ.children[0] = Transform958;

HAnimSegment956YYY.children = new X3D.MFNode();

HAnimSegment956ZZZ.children[0] = Transform957;

let Shape960 = browser.currentScene.createNode("Shape");
let LineSet961 = browser.currentScene.createNode("LineSet");
LineSet961.vertexCount = new X3D.MFInt32([2]);
let Coordinate962 = browser.currentScene.createNode("Coordinate");
Coordinate962.point = new X3D.MFVec3f([0.0066,1.6144,-0.0034,0.0044,1.6209,0.0236]);
coord = Coordinate962;

//from vc1 to skullbase vertices 2
let ColorRGBA963 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA963.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA963;

geometry = LineSet961;

HAnimSegment956ZZZ.children[1] = Shape960;

let HAnimSite964 = browser.currentScene.createNode("HAnimSite");
HAnimSite964.name = "glabella_pt";
HAnimSite964.DEF = "hanim_glabella_pt";
let TouchSensor965 = browser.currentScene.createNode("TouchSensor");
TouchSensor965.description = "HAnimSite glabella_pt";
HAnimSite964YYY.children = new X3D.MFNode();

HAnimSite964ZZZ.children[0] = TouchSensor965;

let Shape966 = browser.currentScene.createNode("Shape");
Shape966.USE = "HAnimSiteShape";
HAnimSite964ZZZ.children[1] = Shape966;

HAnimSegment956ZZZ.children[2] = HAnimSite964;

let HAnimSite967 = browser.currentScene.createNode("HAnimSite");
HAnimSite967.name = "l_ectocanthus_pt";
HAnimSite967.DEF = "hanim_l_ectocanthus_pt";
let TouchSensor968 = browser.currentScene.createNode("TouchSensor");
TouchSensor968.description = "HAnimSite l_ectocanthus_pt";
HAnimSite967YYY.children = new X3D.MFNode();

HAnimSite967ZZZ.children[0] = TouchSensor968;

let Shape969 = browser.currentScene.createNode("Shape");
Shape969.USE = "HAnimSiteShape";
HAnimSite967ZZZ.children[1] = Shape969;

HAnimSegment956ZZZ.children[3] = HAnimSite967;

let HAnimSite970 = browser.currentScene.createNode("HAnimSite");
HAnimSite970.name = "l_infraorbitale_pt";
HAnimSite970.DEF = "hanim_l_infraorbitale_pt";
HAnimSite970.translation = new X3D.SFVec3f([0.0341,1.6171,0.0752]);
let TouchSensor971 = browser.currentScene.createNode("TouchSensor");
TouchSensor971.description = "HAnimSite l_infraorbitale_pt";
HAnimSite970YYY.children = new X3D.MFNode();

HAnimSite970ZZZ.children[0] = TouchSensor971;

let Shape972 = browser.currentScene.createNode("Shape");
Shape972.USE = "HAnimSiteShape";
HAnimSite970ZZZ.children[1] = Shape972;

HAnimSegment956ZZZ.children[4] = HAnimSite970;

let HAnimSite973 = browser.currentScene.createNode("HAnimSite");
HAnimSite973.name = "l_tragion_pt";
HAnimSite973.DEF = "hanim_l_tragion_pt";
HAnimSite973.translation = new X3D.SFVec3f([0.0739,1.6348,0.0282]);
let TouchSensor974 = browser.currentScene.createNode("TouchSensor");
TouchSensor974.description = "HAnimSite l_tragion_pt";
HAnimSite973YYY.children = new X3D.MFNode();

HAnimSite973ZZZ.children[0] = TouchSensor974;

let Shape975 = browser.currentScene.createNode("Shape");
Shape975.USE = "HAnimSiteShape";
HAnimSite973ZZZ.children[1] = Shape975;

HAnimSegment956ZZZ.children[5] = HAnimSite973;

let HAnimSite976 = browser.currentScene.createNode("HAnimSite");
HAnimSite976.name = "nuchale_pt";
HAnimSite976.DEF = "hanim_nuchale_pt";
HAnimSite976.translation = new X3D.SFVec3f([0.0039,1.5972,-0.0796]);
let TouchSensor977 = browser.currentScene.createNode("TouchSensor");
TouchSensor977.description = "HAnimSite nuchale_pt";
HAnimSite976YYY.children = new X3D.MFNode();

HAnimSite976ZZZ.children[0] = TouchSensor977;

let Shape978 = browser.currentScene.createNode("Shape");
Shape978.USE = "HAnimSiteShape";
HAnimSite976ZZZ.children[1] = Shape978;

HAnimSegment956ZZZ.children[6] = HAnimSite976;

let HAnimSite979 = browser.currentScene.createNode("HAnimSite");
HAnimSite979.name = "opisthocranion_pt";
HAnimSite979.DEF = "hanim_opisthocranion_pt";
let TouchSensor980 = browser.currentScene.createNode("TouchSensor");
TouchSensor980.description = "HAnimSite opisthocranion_pt";
HAnimSite979YYY.children = new X3D.MFNode();

HAnimSite979ZZZ.children[0] = TouchSensor980;

let Shape981 = browser.currentScene.createNode("Shape");
Shape981.USE = "HAnimSiteShape";
HAnimSite979ZZZ.children[1] = Shape981;

HAnimSegment956ZZZ.children[7] = HAnimSite979;

let HAnimSite982 = browser.currentScene.createNode("HAnimSite");
HAnimSite982.name = "r_ectocanthus_pt";
HAnimSite982.DEF = "hanim_r_ectocanthus_pt";
let TouchSensor983 = browser.currentScene.createNode("TouchSensor");
TouchSensor983.description = "HAnimSite r_ectocanthus_pt";
HAnimSite982YYY.children = new X3D.MFNode();

HAnimSite982ZZZ.children[0] = TouchSensor983;

let Shape984 = browser.currentScene.createNode("Shape");
Shape984.USE = "HAnimSiteShape";
HAnimSite982ZZZ.children[1] = Shape984;

HAnimSegment956ZZZ.children[8] = HAnimSite982;

let HAnimSite985 = browser.currentScene.createNode("HAnimSite");
HAnimSite985.name = "r_infraorbitale_pt";
HAnimSite985.DEF = "hanim_r_infraorbitale_pt";
HAnimSite985.translation = new X3D.SFVec3f([-0.0237,1.6171,0.0752]);
let TouchSensor986 = browser.currentScene.createNode("TouchSensor");
TouchSensor986.description = "HAnimSite r_infraorbitale_pt";
HAnimSite985YYY.children = new X3D.MFNode();

HAnimSite985ZZZ.children[0] = TouchSensor986;

let Shape987 = browser.currentScene.createNode("Shape");
Shape987.USE = "HAnimSiteShape";
HAnimSite985ZZZ.children[1] = Shape987;

HAnimSegment956ZZZ.children[9] = HAnimSite985;

let HAnimSite988 = browser.currentScene.createNode("HAnimSite");
HAnimSite988.name = "r_tragion_pt";
HAnimSite988.DEF = "hanim_r_tragion_pt";
HAnimSite988.translation = new X3D.SFVec3f([-0.0646,1.6347,0.0302]);
let TouchSensor989 = browser.currentScene.createNode("TouchSensor");
TouchSensor989.description = "HAnimSite r_tragion_pt";
HAnimSite988YYY.children = new X3D.MFNode();

HAnimSite988ZZZ.children[0] = TouchSensor989;

let Shape990 = browser.currentScene.createNode("Shape");
Shape990.USE = "HAnimSiteShape";
HAnimSite988ZZZ.children[1] = Shape990;

HAnimSegment956ZZZ.children[10] = HAnimSite988;

let HAnimSite991 = browser.currentScene.createNode("HAnimSite");
HAnimSite991.name = "sellion_pt";
HAnimSite991.DEF = "hanim_sellion_pt";
HAnimSite991.translation = new X3D.SFVec3f([0.0058,1.6316,0.0852]);
let TouchSensor992 = browser.currentScene.createNode("TouchSensor");
TouchSensor992.description = "HAnimSite sellion_pt";
HAnimSite991YYY.children = new X3D.MFNode();

HAnimSite991ZZZ.children[0] = TouchSensor992;

let Shape993 = browser.currentScene.createNode("Shape");
Shape993.USE = "HAnimSiteShape";
HAnimSite991ZZZ.children[1] = Shape993;

HAnimSegment956ZZZ.children[11] = HAnimSite991;

let HAnimSite994 = browser.currentScene.createNode("HAnimSite");
HAnimSite994.name = "skull_vertex_pt";
HAnimSite994.DEF = "hanim_skull_vertex_pt";
HAnimSite994.translation = new X3D.SFVec3f([0.005,1.7504,0.0055]);
let TouchSensor995 = browser.currentScene.createNode("TouchSensor");
TouchSensor995.description = "HAnimSite skull_vertex_pt";
HAnimSite994YYY.children = new X3D.MFNode();

HAnimSite994ZZZ.children[0] = TouchSensor995;

let Shape996 = browser.currentScene.createNode("Shape");
Shape996.USE = "HAnimSiteShape";
HAnimSite994ZZZ.children[1] = Shape996;

HAnimSegment956ZZZ.children[12] = HAnimSite994;

HAnimJoint955YYY.children = new X3D.MFNode();

HAnimJoint955ZZZ.children[0] = HAnimSegment956;

let HAnimJoint997 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint997.name = "skullbase";
HAnimJoint997.DEF = "hanim_skullbase";
HAnimJoint997.center = new X3D.SFVec3f([0.0044,1.6209,0.0236]);
HAnimJoint997.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint997.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment998 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment998.name = "skull";
HAnimSegment998.DEF = "hanim_skull";
let Transform999 = browser.currentScene.createNode("Transform");
Transform999.translation = new X3D.SFVec3f([0.0044,1.6209,0.0236]);
let Transform1000 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1001 = browser.currentScene.createNode("Shape");
Shape1001.USE = "HAnimJointShape";
Transform1000YYY.child = new X3D.undefined();

Transform1000ZZZ.child[0] = Shape1001;

Transform999YYY.children = new X3D.MFNode();

Transform999ZZZ.children[0] = Transform1000;

HAnimSegment998YYY.children = new X3D.MFNode();

HAnimSegment998ZZZ.children[0] = Transform999;

let Shape1002 = browser.currentScene.createNode("Shape");
let LineSet1003 = browser.currentScene.createNode("LineSet");
LineSet1003.vertexCount = new X3D.MFInt32([2]);
let Coordinate1004 = browser.currentScene.createNode("Coordinate");
Coordinate1004.point = new X3D.MFVec3f([0.0044,1.6209,0.0236,2.2365,1.87,1.9285]);
coord = Coordinate1004;

//from skullbase to l_eyelid_joint vertices 2
let ColorRGBA1005 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1005.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1005;

geometry = LineSet1003;

HAnimSegment998ZZZ.children[1] = Shape1002;

let Shape1006 = browser.currentScene.createNode("Shape");
let LineSet1007 = browser.currentScene.createNode("LineSet");
LineSet1007.vertexCount = new X3D.MFInt32([2]);
let Coordinate1008 = browser.currentScene.createNode("Coordinate");
Coordinate1008.point = new X3D.MFVec3f([0.0044,1.6209,0.0236,-2.2535,1.87,1.9285]);
coord = Coordinate1008;

//from skullbase to r_eyelid_joint vertices 2
let ColorRGBA1009 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1009.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1009;

geometry = LineSet1007;

HAnimSegment998ZZZ.children[2] = Shape1006;

let Shape1010 = browser.currentScene.createNode("Shape");
let LineSet1011 = browser.currentScene.createNode("LineSet");
LineSet1011.vertexCount = new X3D.MFInt32([2]);
let Coordinate1012 = browser.currentScene.createNode("Coordinate");
Coordinate1012.point = new X3D.MFVec3f([0.0044,1.6209,0.0236,2.1305,1.8444,4.1555]);
coord = Coordinate1012;

//from skullbase to l_eyeball_joint vertices 2
let ColorRGBA1013 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1013.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1013;

geometry = LineSet1011;

HAnimSegment998ZZZ.children[3] = Shape1010;

let Shape1014 = browser.currentScene.createNode("Shape");
let LineSet1015 = browser.currentScene.createNode("LineSet");
LineSet1015.vertexCount = new X3D.MFInt32([2]);
let Coordinate1016 = browser.currentScene.createNode("Coordinate");
Coordinate1016.point = new X3D.MFVec3f([0.0044,1.6209,0.0236,-2.1475,1.8444,4.1555]);
coord = Coordinate1016;

//from skullbase to r_eyeball_joint vertices 2
let ColorRGBA1017 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1017.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1017;

geometry = LineSet1015;

HAnimSegment998ZZZ.children[4] = Shape1014;

let Shape1018 = browser.currentScene.createNode("Shape");
let LineSet1019 = browser.currentScene.createNode("LineSet");
LineSet1019.vertexCount = new X3D.MFInt32([2]);
let Coordinate1020 = browser.currentScene.createNode("Coordinate");
Coordinate1020.point = new X3D.MFVec3f([0.0044,1.6209,0.0236,0.9581,1.8563,5.2175]);
coord = Coordinate1020;

//from skullbase to l_eyebrow_joint vertices 2
let ColorRGBA1021 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1021.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1021;

geometry = LineSet1019;

HAnimSegment998ZZZ.children[5] = Shape1018;

let Shape1022 = browser.currentScene.createNode("Shape");
let LineSet1023 = browser.currentScene.createNode("LineSet");
LineSet1023.vertexCount = new X3D.MFInt32([2]);
let Coordinate1024 = browser.currentScene.createNode("Coordinate");
Coordinate1024.point = new X3D.MFVec3f([0.0044,1.6209,0.0236,-0.9751,1.8563,5.2175]);
coord = Coordinate1024;

//from skullbase to r_eyebrow_joint vertices 2
let ColorRGBA1025 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1025.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1025;

geometry = LineSet1023;

HAnimSegment998ZZZ.children[6] = Shape1022;

let Shape1026 = browser.currentScene.createNode("Shape");
let LineSet1027 = browser.currentScene.createNode("LineSet");
LineSet1027.vertexCount = new X3D.MFInt32([2]);
let Coordinate1028 = browser.currentScene.createNode("Coordinate");
Coordinate1028.point = new X3D.MFVec3f([0.0044,1.6209,0.0236,-0.0085,1.7229,1.148]);
coord = Coordinate1028;

//from skullbase to temporomandibular vertices 2
let ColorRGBA1029 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1029.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1029;

geometry = LineSet1027;

HAnimSegment998ZZZ.children[7] = Shape1026;

let HAnimSite1030 = browser.currentScene.createNode("HAnimSite");
HAnimSite1030.name = "l_gonion_pt";
HAnimSite1030.DEF = "hanim_l_gonion_pt";
HAnimSite1030.translation = new X3D.SFVec3f([0.0631,1.553,0.033]);
let TouchSensor1031 = browser.currentScene.createNode("TouchSensor");
TouchSensor1031.description = "HAnimSite l_gonion_pt";
HAnimSite1030YYY.children = new X3D.MFNode();

HAnimSite1030ZZZ.children[0] = TouchSensor1031;

let Shape1032 = browser.currentScene.createNode("Shape");
Shape1032.USE = "HAnimSiteShape";
HAnimSite1030ZZZ.children[1] = Shape1032;

HAnimSegment998ZZZ.children[8] = HAnimSite1030;

let HAnimSite1033 = browser.currentScene.createNode("HAnimSite");
HAnimSite1033.name = "menton_pt";
HAnimSite1033.DEF = "hanim_menton_pt";
let TouchSensor1034 = browser.currentScene.createNode("TouchSensor");
TouchSensor1034.description = "HAnimSite menton_pt";
HAnimSite1033YYY.children = new X3D.MFNode();

HAnimSite1033ZZZ.children[0] = TouchSensor1034;

let Shape1035 = browser.currentScene.createNode("Shape");
Shape1035.USE = "HAnimSiteShape";
HAnimSite1033ZZZ.children[1] = Shape1035;

HAnimSegment998ZZZ.children[9] = HAnimSite1033;

let HAnimSite1036 = browser.currentScene.createNode("HAnimSite");
HAnimSite1036.name = "r_gonion_pt";
HAnimSite1036.DEF = "hanim_r_gonion_pt";
HAnimSite1036.translation = new X3D.SFVec3f([-0.052,1.5529,0.0347]);
let TouchSensor1037 = browser.currentScene.createNode("TouchSensor");
TouchSensor1037.description = "HAnimSite r_gonion_pt";
HAnimSite1036YYY.children = new X3D.MFNode();

HAnimSite1036ZZZ.children[0] = TouchSensor1037;

let Shape1038 = browser.currentScene.createNode("Shape");
Shape1038.USE = "HAnimSiteShape";
HAnimSite1036ZZZ.children[1] = Shape1038;

HAnimSegment998ZZZ.children[10] = HAnimSite1036;

let HAnimSite1039 = browser.currentScene.createNode("HAnimSite");
HAnimSite1039.name = "supramenton_pt";
HAnimSite1039.DEF = "hanim_supramenton_pt";
HAnimSite1039.translation = new X3D.SFVec3f([0.0061,1.541,0.0805]);
let TouchSensor1040 = browser.currentScene.createNode("TouchSensor");
TouchSensor1040.description = "HAnimSite supramenton_pt";
HAnimSite1039YYY.children = new X3D.MFNode();

HAnimSite1039ZZZ.children[0] = TouchSensor1040;

let Shape1041 = browser.currentScene.createNode("Shape");
Shape1041.USE = "HAnimSiteShape";
HAnimSite1039ZZZ.children[1] = Shape1041;

HAnimSegment998ZZZ.children[11] = HAnimSite1039;

HAnimJoint997YYY.children = new X3D.MFNode();

HAnimJoint997ZZZ.children[0] = HAnimSegment998;

let HAnimJoint1042 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1042.name = "l_eyelid_joint";
HAnimJoint1042.DEF = "hanim_l_eyelid_joint";
HAnimJoint1042.center = new X3D.SFVec3f([2.2365,1.87,1.9285]);
HAnimJoint1042.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1042.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint997ZZZ.children[1] = HAnimJoint1042;

let HAnimJoint1043 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1043.name = "r_eyelid_joint";
HAnimJoint1043.DEF = "hanim_r_eyelid_joint";
HAnimJoint1043.center = new X3D.SFVec3f([-2.2535,1.87,1.9285]);
HAnimJoint1043.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1043.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint997ZZZ.children[2] = HAnimJoint1043;

let HAnimJoint1044 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1044.name = "l_eyeball_joint";
HAnimJoint1044.DEF = "hanim_l_eyeball_joint";
HAnimJoint1044.center = new X3D.SFVec3f([2.1305,1.8444,4.1555]);
HAnimJoint1044.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1044.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint997ZZZ.children[3] = HAnimJoint1044;

let HAnimJoint1045 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1045.name = "r_eyeball_joint";
HAnimJoint1045.DEF = "hanim_r_eyeball_joint";
HAnimJoint1045.center = new X3D.SFVec3f([-2.1475,1.8444,4.1555]);
HAnimJoint1045.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1045.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint997ZZZ.children[4] = HAnimJoint1045;

let HAnimJoint1046 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1046.name = "l_eyebrow_joint";
HAnimJoint1046.DEF = "hanim_l_eyebrow_joint";
HAnimJoint1046.center = new X3D.SFVec3f([0.9581,1.8563,5.2175]);
HAnimJoint1046.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1046.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint997ZZZ.children[5] = HAnimJoint1046;

let HAnimJoint1047 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1047.name = "r_eyebrow_joint";
HAnimJoint1047.DEF = "hanim_r_eyebrow_joint";
HAnimJoint1047.center = new X3D.SFVec3f([-0.9751,1.8563,5.2175]);
HAnimJoint1047.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1047.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint997ZZZ.children[6] = HAnimJoint1047;

let HAnimJoint1048 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1048.name = "temporomandibular";
HAnimJoint1048.DEF = "hanim_temporomandibular";
HAnimJoint1048.center = new X3D.SFVec3f([-0.0085,1.7229,1.148]);
HAnimJoint1048.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1048.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint997ZZZ.children[7] = HAnimJoint1048;

HAnimJoint955ZZZ.children[1] = HAnimJoint997;

HAnimJoint946ZZZ.children[1] = HAnimJoint955;

HAnimJoint934ZZZ.children[1] = HAnimJoint946;

HAnimJoint925ZZZ.children[1] = HAnimJoint934;

HAnimJoint916ZZZ.children[1] = HAnimJoint925;

HAnimJoint907ZZZ.children[1] = HAnimJoint916;

HAnimJoint898ZZZ.children[1] = HAnimJoint907;

HAnimJoint845ZZZ.children[1] = HAnimJoint898;

let HAnimJoint1049 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1049.name = "l_sternoclavicular";
HAnimJoint1049.DEF = "hanim_l_sternoclavicular";
HAnimJoint1049.center = new X3D.SFVec3f([0.082,1.4488,-0.0353]);
HAnimJoint1049.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1049.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1050 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1050.name = "l_clavicle";
HAnimSegment1050.DEF = "hanim_l_clavicle";
let Transform1051 = browser.currentScene.createNode("Transform");
Transform1051.translation = new X3D.SFVec3f([0.082,1.4488,-0.0353]);
let Transform1052 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1053 = browser.currentScene.createNode("Shape");
Shape1053.USE = "HAnimJointShape";
Transform1052YYY.child = new X3D.undefined();

Transform1052ZZZ.child[0] = Shape1053;

Transform1051YYY.children = new X3D.MFNode();

Transform1051ZZZ.children[0] = Transform1052;

HAnimSegment1050YYY.children = new X3D.MFNode();

HAnimSegment1050ZZZ.children[0] = Transform1051;

let Shape1054 = browser.currentScene.createNode("Shape");
let LineSet1055 = browser.currentScene.createNode("LineSet");
LineSet1055.vertexCount = new X3D.MFInt32([2]);
let Coordinate1056 = browser.currentScene.createNode("Coordinate");
Coordinate1056.point = new X3D.MFVec3f([0.082,1.4488,-0.0353,0.0962,1.4269,-0.0424]);
coord = Coordinate1056;

//from l_sternoclavicular to l_acromioclavicular vertices 2
let ColorRGBA1057 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1057.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1057;

geometry = LineSet1055;

HAnimSegment1050ZZZ.children[1] = Shape1054;

HAnimJoint1049YYY.children = new X3D.MFNode();

HAnimJoint1049ZZZ.children[0] = HAnimSegment1050;

let HAnimJoint1058 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1058.name = "l_acromioclavicular";
HAnimJoint1058.DEF = "hanim_l_acromioclavicular";
HAnimJoint1058.center = new X3D.SFVec3f([0.0962,1.4269,-0.0424]);
HAnimJoint1058.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1058.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1059 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1059.name = "l_scapula";
HAnimSegment1059.DEF = "hanim_l_scapula";
let Transform1060 = browser.currentScene.createNode("Transform");
Transform1060.translation = new X3D.SFVec3f([0.0962,1.4269,-0.0424]);
let Transform1061 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1062 = browser.currentScene.createNode("Shape");
Shape1062.USE = "HAnimJointShape";
Transform1061YYY.child = new X3D.undefined();

Transform1061ZZZ.child[0] = Shape1062;

Transform1060YYY.children = new X3D.MFNode();

Transform1060ZZZ.children[0] = Transform1061;

HAnimSegment1059YYY.children = new X3D.MFNode();

HAnimSegment1059ZZZ.children[0] = Transform1060;

let Shape1063 = browser.currentScene.createNode("Shape");
let LineSet1064 = browser.currentScene.createNode("LineSet");
LineSet1064.vertexCount = new X3D.MFInt32([2]);
let Coordinate1065 = browser.currentScene.createNode("Coordinate");
Coordinate1065.point = new X3D.MFVec3f([0.0962,1.4269,-0.0424,0.2029,1.4376,-0.0387]);
coord = Coordinate1065;

//from l_acromioclavicular to l_shoulder vertices 2
let ColorRGBA1066 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1066.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1066;

geometry = LineSet1064;

HAnimSegment1059ZZZ.children[1] = Shape1063;

let HAnimSite1067 = browser.currentScene.createNode("HAnimSite");
HAnimSite1067.name = "l_bideltoid_pt";
HAnimSite1067.DEF = "hanim_l_bideltoid_pt";
let TouchSensor1068 = browser.currentScene.createNode("TouchSensor");
TouchSensor1068.description = "HAnimSite l_bideltoid_pt";
HAnimSite1067YYY.children = new X3D.MFNode();

HAnimSite1067ZZZ.children[0] = TouchSensor1068;

let Shape1069 = browser.currentScene.createNode("Shape");
Shape1069.USE = "HAnimSiteShape";
HAnimSite1067ZZZ.children[1] = Shape1069;

HAnimSegment1059ZZZ.children[2] = HAnimSite1067;

let HAnimSite1070 = browser.currentScene.createNode("HAnimSite");
HAnimSite1070.name = "l_humeral_lateral_epicondyles_pt";
HAnimSite1070.DEF = "hanim_l_humeral_lateral_epicondyles_pt";
HAnimSite1070.translation = new X3D.SFVec3f([0.228,1.1482,-0.11]);
let TouchSensor1071 = browser.currentScene.createNode("TouchSensor");
TouchSensor1071.description = "HAnimSite l_humeral_lateral_epicondyles_pt";
HAnimSite1070YYY.children = new X3D.MFNode();

HAnimSite1070ZZZ.children[0] = TouchSensor1071;

let Shape1072 = browser.currentScene.createNode("Shape");
Shape1072.USE = "HAnimSiteShape";
HAnimSite1070ZZZ.children[1] = Shape1072;

HAnimSegment1059ZZZ.children[3] = HAnimSite1070;

HAnimJoint1058YYY.children = new X3D.MFNode();

HAnimJoint1058ZZZ.children[0] = HAnimSegment1059;

let HAnimJoint1073 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1073.name = "l_shoulder";
HAnimJoint1073.DEF = "hanim_l_shoulder";
HAnimJoint1073.center = new X3D.SFVec3f([0.2029,1.4376,-0.0387]);
HAnimJoint1073.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1073.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1074 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1074.name = "l_upperarm";
HAnimSegment1074.DEF = "hanim_l_upperarm";
let Transform1075 = browser.currentScene.createNode("Transform");
Transform1075.translation = new X3D.SFVec3f([0.2029,1.4376,-0.0387]);
let Transform1076 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1077 = browser.currentScene.createNode("Shape");
Shape1077.USE = "HAnimJointShape";
Transform1076YYY.child = new X3D.undefined();

Transform1076ZZZ.child[0] = Shape1077;

Transform1075YYY.children = new X3D.MFNode();

Transform1075ZZZ.children[0] = Transform1076;

HAnimSegment1074YYY.children = new X3D.MFNode();

HAnimSegment1074ZZZ.children[0] = Transform1075;

let Shape1078 = browser.currentScene.createNode("Shape");
let LineSet1079 = browser.currentScene.createNode("LineSet");
LineSet1079.vertexCount = new X3D.MFInt32([2]);
let Coordinate1080 = browser.currentScene.createNode("Coordinate");
Coordinate1080.point = new X3D.MFVec3f([0.2029,1.4376,-0.0387,0.2014,1.1357,-0.0682]);
coord = Coordinate1080;

//from l_shoulder to l_elbow vertices 2
let ColorRGBA1081 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1081.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1081;

geometry = LineSet1079;

HAnimSegment1074ZZZ.children[1] = Shape1078;

let HAnimSite1082 = browser.currentScene.createNode("HAnimSite");
HAnimSite1082.name = "l_humeral_medial_epicondyles_pt";
HAnimSite1082.DEF = "hanim_l_humeral_medial_epicondyles_pt";
HAnimSite1082.translation = new X3D.SFVec3f([0.1735,1.1272,-0.1113]);
let TouchSensor1083 = browser.currentScene.createNode("TouchSensor");
TouchSensor1083.description = "HAnimSite l_humeral_medial_epicondyles_pt";
HAnimSite1082YYY.children = new X3D.MFNode();

HAnimSite1082ZZZ.children[0] = TouchSensor1083;

let Shape1084 = browser.currentScene.createNode("Shape");
Shape1084.USE = "HAnimSiteShape";
HAnimSite1082ZZZ.children[1] = Shape1084;

HAnimSegment1074ZZZ.children[2] = HAnimSite1082;

let HAnimSite1085 = browser.currentScene.createNode("HAnimSite");
HAnimSite1085.name = "l_olecranon_pt";
HAnimSite1085.DEF = "hanim_l_olecranon_pt";
HAnimSite1085.translation = new X3D.SFVec3f([-0.1962,1.1375,-0.1123]);
let TouchSensor1086 = browser.currentScene.createNode("TouchSensor");
TouchSensor1086.description = "HAnimSite l_olecranon_pt";
HAnimSite1085YYY.children = new X3D.MFNode();

HAnimSite1085ZZZ.children[0] = TouchSensor1086;

let Shape1087 = browser.currentScene.createNode("Shape");
Shape1087.USE = "HAnimSiteShape";
HAnimSite1085ZZZ.children[1] = Shape1087;

HAnimSegment1074ZZZ.children[3] = HAnimSite1085;

let HAnimSite1088 = browser.currentScene.createNode("HAnimSite");
HAnimSite1088.name = "l_radial_styloid_pt";
HAnimSite1088.DEF = "hanim_l_radial_styloid_pt";
HAnimSite1088.translation = new X3D.SFVec3f([0.1901,0.8645,-0.0415]);
let TouchSensor1089 = browser.currentScene.createNode("TouchSensor");
TouchSensor1089.description = "HAnimSite l_radial_styloid_pt";
HAnimSite1088YYY.children = new X3D.MFNode();

HAnimSite1088ZZZ.children[0] = TouchSensor1089;

let Shape1090 = browser.currentScene.createNode("Shape");
Shape1090.USE = "HAnimSiteShape";
HAnimSite1088ZZZ.children[1] = Shape1090;

HAnimSegment1074ZZZ.children[4] = HAnimSite1088;

let HAnimSite1091 = browser.currentScene.createNode("HAnimSite");
HAnimSite1091.name = "l_radiale_pt";
HAnimSite1091.DEF = "hanim_l_radiale_pt";
HAnimSite1091.translation = new X3D.SFVec3f([0.2182,1.1212,-0.1167]);
let TouchSensor1092 = browser.currentScene.createNode("TouchSensor");
TouchSensor1092.description = "HAnimSite l_radiale_pt";
HAnimSite1091YYY.children = new X3D.MFNode();

HAnimSite1091ZZZ.children[0] = TouchSensor1092;

let Shape1093 = browser.currentScene.createNode("Shape");
Shape1093.USE = "HAnimSiteShape";
HAnimSite1091ZZZ.children[1] = Shape1093;

HAnimSegment1074ZZZ.children[5] = HAnimSite1091;

HAnimJoint1073YYY.children = new X3D.MFNode();

HAnimJoint1073ZZZ.children[0] = HAnimSegment1074;

let HAnimJoint1094 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1094.name = "l_elbow";
HAnimJoint1094.DEF = "hanim_l_elbow";
HAnimJoint1094.center = new X3D.SFVec3f([0.2014,1.1357,-0.0682]);
HAnimJoint1094.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1094.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1095 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1095.name = "l_forearm";
HAnimSegment1095.DEF = "hanim_l_forearm";
let Transform1096 = browser.currentScene.createNode("Transform");
Transform1096.translation = new X3D.SFVec3f([0.2014,1.1357,-0.0682]);
let Transform1097 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1098 = browser.currentScene.createNode("Shape");
Shape1098.USE = "HAnimJointShape";
Transform1097YYY.child = new X3D.undefined();

Transform1097ZZZ.child[0] = Shape1098;

Transform1096YYY.children = new X3D.MFNode();

Transform1096ZZZ.children[0] = Transform1097;

HAnimSegment1095YYY.children = new X3D.MFNode();

HAnimSegment1095ZZZ.children[0] = Transform1096;

let Shape1099 = browser.currentScene.createNode("Shape");
let LineSet1100 = browser.currentScene.createNode("LineSet");
LineSet1100.vertexCount = new X3D.MFInt32([2]);
let Coordinate1101 = browser.currentScene.createNode("Coordinate");
Coordinate1101.point = new X3D.MFVec3f([0.2014,1.1357,-0.0682,0.1984,0.8663,-0.0583]);
coord = Coordinate1101;

//from l_elbow to l_radiocarpal vertices 2
let ColorRGBA1102 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1102.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1102;

geometry = LineSet1100;

HAnimSegment1095ZZZ.children[1] = Shape1099;

let HAnimSite1103 = browser.currentScene.createNode("HAnimSite");
HAnimSite1103.name = "l_ulnar_styloid_pt";
HAnimSite1103.DEF = "hanim_l_ulnar_styloid_pt";
HAnimSite1103.translation = new X3D.SFVec3f([-0.2142,0.8529,-0.0648]);
let TouchSensor1104 = browser.currentScene.createNode("TouchSensor");
TouchSensor1104.description = "HAnimSite l_ulnar_styloid_pt";
HAnimSite1103YYY.children = new X3D.MFNode();

HAnimSite1103ZZZ.children[0] = TouchSensor1104;

let Shape1105 = browser.currentScene.createNode("Shape");
Shape1105.USE = "HAnimSiteShape";
HAnimSite1103ZZZ.children[1] = Shape1105;

HAnimSegment1095ZZZ.children[2] = HAnimSite1103;

HAnimJoint1094YYY.children = new X3D.MFNode();

HAnimJoint1094ZZZ.children[0] = HAnimSegment1095;

let HAnimJoint1106 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1106.name = "l_radiocarpal";
HAnimJoint1106.DEF = "hanim_l_radiocarpal";
HAnimJoint1106.center = new X3D.SFVec3f([0.1984,0.8663,-0.0583]);
HAnimJoint1106.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1106.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1107 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1107.name = "l_carpal";
HAnimSegment1107.DEF = "hanim_l_carpal";
let Transform1108 = browser.currentScene.createNode("Transform");
Transform1108.scale = new X3D.SFVec3f([0.2,0.2,0.2]);
Transform1108.translation = new X3D.SFVec3f([0.2,0.85,-0.05]);
Transform1108.rotation = new X3D.SFRotation([0,0,1,-3.14]);
//Transform left hand
let Transform1109 = browser.currentScene.createNode("Transform");
Transform1109.rotation = new X3D.SFRotation([0,1,0,-1.57]);
//Transform left hand
let Shape1110 = browser.currentScene.createNode("Shape");
Shape1110.USE = "HAnimJointShape";
Transform1109YYY.child = new X3D.undefined();

Transform1109ZZZ.child[0] = Shape1110;

Transform1108YYY.children = new X3D.MFNode();

Transform1108ZZZ.children[0] = Transform1109;

HAnimSegment1107YYY.children = new X3D.MFNode();

HAnimSegment1107ZZZ.children[0] = Transform1108;

let Shape1111 = browser.currentScene.createNode("Shape");
let LineSet1112 = browser.currentScene.createNode("LineSet");
LineSet1112.vertexCount = new X3D.MFInt32([2]);
let Coordinate1113 = browser.currentScene.createNode("Coordinate");
Coordinate1113.point = new X3D.MFVec3f([0.1984,0.8663,-0.0583,8.0485,0.9213,1.3235]);
coord = Coordinate1113;

//from l_radiocarpal to l_midcarpal_1 vertices 2
let ColorRGBA1114 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1114.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1114;

geometry = LineSet1112;

HAnimSegment1107ZZZ.children[1] = Shape1111;

let Shape1115 = browser.currentScene.createNode("Shape");
let LineSet1116 = browser.currentScene.createNode("LineSet");
LineSet1116.vertexCount = new X3D.MFInt32([2]);
let Coordinate1117 = browser.currentScene.createNode("Coordinate");
Coordinate1117.point = new X3D.MFVec3f([0.1984,0.8663,-0.0583,8.0485,0.9225,0.8386]);
coord = Coordinate1117;

//from l_radiocarpal to l_midcarpal_2 vertices 2
let ColorRGBA1118 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1118.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1118;

geometry = LineSet1116;

HAnimSegment1107ZZZ.children[2] = Shape1115;

let Shape1119 = browser.currentScene.createNode("Shape");
let LineSet1120 = browser.currentScene.createNode("LineSet");
LineSet1120.vertexCount = new X3D.MFInt32([2]);
let Coordinate1121 = browser.currentScene.createNode("Coordinate");
Coordinate1121.point = new X3D.MFVec3f([0.1984,0.8663,-0.0583,8.0395,0.9246,0.2513]);
coord = Coordinate1121;

//from l_radiocarpal to l_midcarpal_3 vertices 2
let ColorRGBA1122 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1122.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1122;

geometry = LineSet1120;

HAnimSegment1107ZZZ.children[3] = Shape1119;

let Shape1123 = browser.currentScene.createNode("Shape");
let LineSet1124 = browser.currentScene.createNode("LineSet");
LineSet1124.vertexCount = new X3D.MFInt32([2]);
let Coordinate1125 = browser.currentScene.createNode("Coordinate");
Coordinate1125.point = new X3D.MFVec3f([0.1984,0.8663,-0.0583,8.0395,0.921,-0.6795]);
coord = Coordinate1125;

//from l_radiocarpal to l_midcarpal_4_5 vertices 2
let ColorRGBA1126 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1126.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1126;

geometry = LineSet1124;

HAnimSegment1107ZZZ.children[4] = Shape1123;

HAnimJoint1106YYY.children = new X3D.MFNode();

HAnimJoint1106ZZZ.children[0] = HAnimSegment1107;

let HAnimJoint1127 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1127.name = "l_midcarpal_1";
HAnimJoint1127.DEF = "hanim_l_midcarpal_1";
HAnimJoint1127.center = new X3D.SFVec3f([8.0485,0.9213,1.3235]);
HAnimJoint1127.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1127.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1128 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1128.name = "l_trapezium";
HAnimSegment1128.DEF = "hanim_l_trapezium";
let Transform1129 = browser.currentScene.createNode("Transform");
Transform1129.translation = new X3D.SFVec3f([8.0485,0.9213,1.3235]);
let Transform1130 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1131 = browser.currentScene.createNode("Shape");
Shape1131.USE = "HAnimJointShape";
Transform1130YYY.child = new X3D.undefined();

Transform1130ZZZ.child[0] = Shape1131;

Transform1129YYY.children = new X3D.MFNode();

Transform1129ZZZ.children[0] = Transform1130;

HAnimSegment1128YYY.children = new X3D.MFNode();

HAnimSegment1128ZZZ.children[0] = Transform1129;

let Shape1132 = browser.currentScene.createNode("Shape");
let LineSet1133 = browser.currentScene.createNode("LineSet");
LineSet1133.vertexCount = new X3D.MFInt32([2]);
let Coordinate1134 = browser.currentScene.createNode("Coordinate");
Coordinate1134.point = new X3D.MFVec3f([8.0485,0.9213,1.3235,0.1924,0.8472,-0.0534]);
coord = Coordinate1134;

//from l_midcarpal_1 to l_carpometacarpal_1 vertices 2
let ColorRGBA1135 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1135.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1135;

geometry = LineSet1133;

HAnimSegment1128ZZZ.children[1] = Shape1132;

HAnimJoint1127YYY.children = new X3D.MFNode();

HAnimJoint1127ZZZ.children[0] = HAnimSegment1128;

let HAnimJoint1136 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1136.name = "l_carpometacarpal_1";
HAnimJoint1136.DEF = "hanim_l_carpometacarpal_1";
HAnimJoint1136.center = new X3D.SFVec3f([0.1924,0.8472,-0.0534]);
HAnimJoint1136.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1136.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1137 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1137.name = "l_metacarpal_1";
HAnimSegment1137.DEF = "hanim_l_metacarpal_1";
let Transform1138 = browser.currentScene.createNode("Transform");
Transform1138.translation = new X3D.SFVec3f([0.1924,0.8472,-0.0534]);
let Transform1139 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1140 = browser.currentScene.createNode("Shape");
Shape1140.USE = "HAnimJointShape";
Transform1139YYY.child = new X3D.undefined();

Transform1139ZZZ.child[0] = Shape1140;

Transform1138YYY.children = new X3D.MFNode();

Transform1138ZZZ.children[0] = Transform1139;

HAnimSegment1137YYY.children = new X3D.MFNode();

HAnimSegment1137ZZZ.children[0] = Transform1138;

let Shape1141 = browser.currentScene.createNode("Shape");
let LineSet1142 = browser.currentScene.createNode("LineSet");
LineSet1142.vertexCount = new X3D.MFInt32([2]);
let Coordinate1143 = browser.currentScene.createNode("Coordinate");
Coordinate1143.point = new X3D.MFVec3f([0.1924,0.8472,-0.0534,0.1951,0.8226,0.0246]);
coord = Coordinate1143;

//from l_carpometacarpal_1 to l_metacarpophalangeal_1 vertices 2
let ColorRGBA1144 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1144.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1144;

geometry = LineSet1142;

HAnimSegment1137ZZZ.children[1] = Shape1141;

HAnimJoint1136YYY.children = new X3D.MFNode();

HAnimJoint1136ZZZ.children[0] = HAnimSegment1137;

let HAnimJoint1145 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1145.name = "l_metacarpophalangeal_1";
HAnimJoint1145.DEF = "hanim_l_metacarpophalangeal_1";
HAnimJoint1145.center = new X3D.SFVec3f([0.1951,0.8226,0.0246]);
HAnimJoint1145.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1145.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1146 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1146.name = "l_carpal_proximal_phalanx_1";
HAnimSegment1146.DEF = "hanim_l_carpal_proximal_phalanx_1";
let Transform1147 = browser.currentScene.createNode("Transform");
Transform1147.translation = new X3D.SFVec3f([0.1951,0.8226,0.0246]);
let Transform1148 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1149 = browser.currentScene.createNode("Shape");
Shape1149.USE = "HAnimJointShape";
Transform1148YYY.child = new X3D.undefined();

Transform1148ZZZ.child[0] = Shape1149;

Transform1147YYY.children = new X3D.MFNode();

Transform1147ZZZ.children[0] = Transform1148;

HAnimSegment1146YYY.children = new X3D.MFNode();

HAnimSegment1146ZZZ.children[0] = Transform1147;

let Shape1150 = browser.currentScene.createNode("Shape");
let LineSet1151 = browser.currentScene.createNode("LineSet");
LineSet1151.vertexCount = new X3D.MFInt32([2]);
let Coordinate1152 = browser.currentScene.createNode("Coordinate");
Coordinate1152.point = new X3D.MFVec3f([0.1951,0.8226,0.0246,0.1955,0.8159,0.0464]);
coord = Coordinate1152;

//from l_metacarpophalangeal_1 to l_carpal_interphalangeal_1 vertices 2
let ColorRGBA1153 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1153.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1153;

geometry = LineSet1151;

HAnimSegment1146ZZZ.children[1] = Shape1150;

let HAnimSite1154 = browser.currentScene.createNode("HAnimSite");
HAnimSite1154.name = "l_carpal_distal_phalanx_1_tip";
HAnimSite1154.DEF = "hanim_l_carpal_distal_phalanx_1_tip";
let TouchSensor1155 = browser.currentScene.createNode("TouchSensor");
TouchSensor1155.description = "HAnimSite l_carpal_distal_phalanx_1_tip";
HAnimSite1154YYY.children = new X3D.MFNode();

HAnimSite1154ZZZ.children[0] = TouchSensor1155;

let Shape1156 = browser.currentScene.createNode("Shape");
Shape1156.USE = "HAnimSiteShape";
HAnimSite1154ZZZ.children[1] = Shape1156;

HAnimSegment1146ZZZ.children[2] = HAnimSite1154;

HAnimJoint1145YYY.children = new X3D.MFNode();

HAnimJoint1145ZZZ.children[0] = HAnimSegment1146;

let HAnimJoint1157 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1157.name = "l_carpal_interphalangeal_1";
HAnimJoint1157.DEF = "hanim_l_carpal_interphalangeal_1";
HAnimJoint1157.center = new X3D.SFVec3f([0.1955,0.8159,0.0464]);
HAnimJoint1157.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1157.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1145ZZZ.children[1] = HAnimJoint1157;

HAnimJoint1136ZZZ.children[1] = HAnimJoint1145;

HAnimJoint1127ZZZ.children[1] = HAnimJoint1136;

HAnimJoint1106ZZZ.children[1] = HAnimJoint1127;

let HAnimJoint1158 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1158.name = "l_midcarpal_2";
HAnimJoint1158.DEF = "hanim_l_midcarpal_2";
HAnimJoint1158.center = new X3D.SFVec3f([8.0485,0.9225,0.8386]);
HAnimJoint1158.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1158.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1159 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1159.name = "l_trapezoid";
HAnimSegment1159.DEF = "hanim_l_trapezoid";
let Transform1160 = browser.currentScene.createNode("Transform");
Transform1160.translation = new X3D.SFVec3f([8.0485,0.9225,0.8386]);
let Transform1161 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1162 = browser.currentScene.createNode("Shape");
Shape1162.USE = "HAnimJointShape";
Transform1161YYY.child = new X3D.undefined();

Transform1161ZZZ.child[0] = Shape1162;

Transform1160YYY.children = new X3D.MFNode();

Transform1160ZZZ.children[0] = Transform1161;

HAnimSegment1159YYY.children = new X3D.MFNode();

HAnimSegment1159ZZZ.children[0] = Transform1160;

let Shape1163 = browser.currentScene.createNode("Shape");
let LineSet1164 = browser.currentScene.createNode("LineSet");
LineSet1164.vertexCount = new X3D.MFInt32([2]);
let Coordinate1165 = browser.currentScene.createNode("Coordinate");
Coordinate1165.point = new X3D.MFVec3f([8.0485,0.9225,0.8386,0.1983,0.8024,-0.028]);
coord = Coordinate1165;

//from l_midcarpal_2 to l_carpometacarpal_2 vertices 2
let ColorRGBA1166 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1166.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1166;

geometry = LineSet1164;

HAnimSegment1159ZZZ.children[1] = Shape1163;

let HAnimSite1167 = browser.currentScene.createNode("HAnimSite");
HAnimSite1167.name = "l_metacarpal_phalanx_2_pt";
HAnimSite1167.DEF = "hanim_l_metacarpal_phalanx_2_pt";
HAnimSite1167.translation = new X3D.SFVec3f([0.2009,0.8139,-0.0237]);
let TouchSensor1168 = browser.currentScene.createNode("TouchSensor");
TouchSensor1168.description = "HAnimSite l_metacarpal_phalanx_2_pt";
HAnimSite1167YYY.children = new X3D.MFNode();

HAnimSite1167ZZZ.children[0] = TouchSensor1168;

let Shape1169 = browser.currentScene.createNode("Shape");
Shape1169.USE = "HAnimSiteShape";
HAnimSite1167ZZZ.children[1] = Shape1169;

HAnimSegment1159ZZZ.children[2] = HAnimSite1167;

HAnimJoint1158YYY.children = new X3D.MFNode();

HAnimJoint1158ZZZ.children[0] = HAnimSegment1159;

let HAnimJoint1170 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1170.name = "l_carpometacarpal_2";
HAnimJoint1170.DEF = "hanim_l_carpometacarpal_2";
HAnimJoint1170.center = new X3D.SFVec3f([0.1983,0.8024,-0.028]);
HAnimJoint1170.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1170.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1171 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1171.name = "l_metacarpal_2";
HAnimSegment1171.DEF = "hanim_l_metacarpal_2";
let Transform1172 = browser.currentScene.createNode("Transform");
Transform1172.translation = new X3D.SFVec3f([0.1983,0.8024,-0.028]);
let Transform1173 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1174 = browser.currentScene.createNode("Shape");
Shape1174.USE = "HAnimJointShape";
Transform1173YYY.child = new X3D.undefined();

Transform1173ZZZ.child[0] = Shape1174;

Transform1172YYY.children = new X3D.MFNode();

Transform1172ZZZ.children[0] = Transform1173;

HAnimSegment1171YYY.children = new X3D.MFNode();

HAnimSegment1171ZZZ.children[0] = Transform1172;

let Shape1175 = browser.currentScene.createNode("Shape");
let LineSet1176 = browser.currentScene.createNode("LineSet");
LineSet1176.vertexCount = new X3D.MFInt32([2]);
let Coordinate1177 = browser.currentScene.createNode("Coordinate");
Coordinate1177.point = new X3D.MFVec3f([0.1983,0.8024,-0.028,0.1983,0.7815,-0.028]);
coord = Coordinate1177;

//from l_carpometacarpal_2 to l_metacarpophalangeal_2 vertices 2
let ColorRGBA1178 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1178.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1178;

geometry = LineSet1176;

HAnimSegment1171ZZZ.children[1] = Shape1175;

HAnimJoint1170YYY.children = new X3D.MFNode();

HAnimJoint1170ZZZ.children[0] = HAnimSegment1171;

let HAnimJoint1179 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1179.name = "l_metacarpophalangeal_2";
HAnimJoint1179.DEF = "hanim_l_metacarpophalangeal_2";
HAnimJoint1179.center = new X3D.SFVec3f([0.1983,0.7815,-0.028]);
HAnimJoint1179.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1179.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1180 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1180.name = "l_carpal_proximal_phalanx_2";
HAnimSegment1180.DEF = "hanim_l_carpal_proximal_phalanx_2";
let Transform1181 = browser.currentScene.createNode("Transform");
Transform1181.translation = new X3D.SFVec3f([0.1983,0.7815,-0.028]);
let Transform1182 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1183 = browser.currentScene.createNode("Shape");
Shape1183.USE = "HAnimJointShape";
Transform1182YYY.child = new X3D.undefined();

Transform1182ZZZ.child[0] = Shape1183;

Transform1181YYY.children = new X3D.MFNode();

Transform1181ZZZ.children[0] = Transform1182;

HAnimSegment1180YYY.children = new X3D.MFNode();

HAnimSegment1180ZZZ.children[0] = Transform1181;

let Shape1184 = browser.currentScene.createNode("Shape");
let LineSet1185 = browser.currentScene.createNode("LineSet");
LineSet1185.vertexCount = new X3D.MFInt32([2]);
let Coordinate1186 = browser.currentScene.createNode("Coordinate");
Coordinate1186.point = new X3D.MFVec3f([0.1983,0.7815,-0.028,0.2017,0.7363,-0.0248]);
coord = Coordinate1186;

//from l_metacarpophalangeal_2 to l_carpal_proximal_interphalangeal_2 vertices 2
let ColorRGBA1187 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1187.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1187;

geometry = LineSet1185;

HAnimSegment1180ZZZ.children[1] = Shape1184;

HAnimJoint1179YYY.children = new X3D.MFNode();

HAnimJoint1179ZZZ.children[0] = HAnimSegment1180;

let HAnimJoint1188 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1188.name = "l_carpal_proximal_interphalangeal_2";
HAnimJoint1188.DEF = "hanim_l_carpal_proximal_interphalangeal_2";
HAnimJoint1188.center = new X3D.SFVec3f([0.2017,0.7363,-0.0248]);
HAnimJoint1188.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1188.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1189 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1189.name = "l_carpal_middle_phalanx_2";
HAnimSegment1189.DEF = "hanim_l_carpal_middle_phalanx_2";
let Transform1190 = browser.currentScene.createNode("Transform");
Transform1190.translation = new X3D.SFVec3f([0.2017,0.7363,-0.0248]);
let Transform1191 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1192 = browser.currentScene.createNode("Shape");
Shape1192.USE = "HAnimJointShape";
Transform1191YYY.child = new X3D.undefined();

Transform1191ZZZ.child[0] = Shape1192;

Transform1190YYY.children = new X3D.MFNode();

Transform1190ZZZ.children[0] = Transform1191;

HAnimSegment1189YYY.children = new X3D.MFNode();

HAnimSegment1189ZZZ.children[0] = Transform1190;

let Shape1193 = browser.currentScene.createNode("Shape");
let LineSet1194 = browser.currentScene.createNode("LineSet");
LineSet1194.vertexCount = new X3D.MFInt32([2]);
let Coordinate1195 = browser.currentScene.createNode("Coordinate");
Coordinate1195.point = new X3D.MFVec3f([0.2017,0.7363,-0.0248,0.2028,0.7139,-0.0236]);
coord = Coordinate1195;

//from l_carpal_proximal_interphalangeal_2 to l_carpal_distal_interphalangeal_2 vertices 2
let ColorRGBA1196 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1196.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1196;

geometry = LineSet1194;

HAnimSegment1189ZZZ.children[1] = Shape1193;

let HAnimSite1197 = browser.currentScene.createNode("HAnimSite");
HAnimSite1197.name = "l_carpal_distal_phalanx_2_tip";
HAnimSite1197.DEF = "hanim_l_carpal_distal_phalanx_2_tip";
let TouchSensor1198 = browser.currentScene.createNode("TouchSensor");
TouchSensor1198.description = "HAnimSite l_carpal_distal_phalanx_2_tip";
HAnimSite1197YYY.children = new X3D.MFNode();

HAnimSite1197ZZZ.children[0] = TouchSensor1198;

let Shape1199 = browser.currentScene.createNode("Shape");
Shape1199.USE = "HAnimSiteShape";
HAnimSite1197ZZZ.children[1] = Shape1199;

HAnimSegment1189ZZZ.children[2] = HAnimSite1197;

let HAnimSite1200 = browser.currentScene.createNode("HAnimSite");
HAnimSite1200.name = "l_dactylion_pt";
HAnimSite1200.DEF = "hanim_l_dactylion_pt";
HAnimSite1200.translation = new X3D.SFVec3f([0.2056,0.6743,-0.0482]);
let TouchSensor1201 = browser.currentScene.createNode("TouchSensor");
TouchSensor1201.description = "HAnimSite l_dactylion_pt";
HAnimSite1200YYY.children = new X3D.MFNode();

HAnimSite1200ZZZ.children[0] = TouchSensor1201;

let Shape1202 = browser.currentScene.createNode("Shape");
Shape1202.USE = "HAnimSiteShape";
HAnimSite1200ZZZ.children[1] = Shape1202;

HAnimSegment1189ZZZ.children[3] = HAnimSite1200;

HAnimJoint1188YYY.children = new X3D.MFNode();

HAnimJoint1188ZZZ.children[0] = HAnimSegment1189;

let HAnimJoint1203 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1203.name = "l_carpal_distal_interphalangeal_2";
HAnimJoint1203.DEF = "hanim_l_carpal_distal_interphalangeal_2";
HAnimJoint1203.center = new X3D.SFVec3f([0.2028,0.7139,-0.0236]);
HAnimJoint1203.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1203.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1188ZZZ.children[1] = HAnimJoint1203;

HAnimJoint1179ZZZ.children[1] = HAnimJoint1188;

HAnimJoint1170ZZZ.children[1] = HAnimJoint1179;

HAnimJoint1158ZZZ.children[1] = HAnimJoint1170;

HAnimJoint1106ZZZ.children[2] = HAnimJoint1158;

let HAnimJoint1204 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1204.name = "l_midcarpal_3";
HAnimJoint1204.DEF = "hanim_l_midcarpal_3";
HAnimJoint1204.center = new X3D.SFVec3f([8.0395,0.9246,0.2513]);
HAnimJoint1204.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1204.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1205 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1205.name = "l_capitate";
HAnimSegment1205.DEF = "hanim_l_capitate";
let Transform1206 = browser.currentScene.createNode("Transform");
Transform1206.translation = new X3D.SFVec3f([8.0395,0.9246,0.2513]);
let Transform1207 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1208 = browser.currentScene.createNode("Shape");
Shape1208.USE = "HAnimJointShape";
Transform1207YYY.child = new X3D.undefined();

Transform1207ZZZ.child[0] = Shape1208;

Transform1206YYY.children = new X3D.MFNode();

Transform1206ZZZ.children[0] = Transform1207;

HAnimSegment1205YYY.children = new X3D.MFNode();

HAnimSegment1205ZZZ.children[0] = Transform1206;

let Shape1209 = browser.currentScene.createNode("Shape");
let LineSet1210 = browser.currentScene.createNode("LineSet");
LineSet1210.vertexCount = new X3D.MFInt32([2]);
let Coordinate1211 = browser.currentScene.createNode("Coordinate");
Coordinate1211.point = new X3D.MFVec3f([8.0395,0.9246,0.2513,0.1987,0.8029,-0.053]);
coord = Coordinate1211;

//from l_midcarpal_3 to l_carpometacarpal_3 vertices 2
let ColorRGBA1212 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1212.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1212;

geometry = LineSet1210;

HAnimSegment1205ZZZ.children[1] = Shape1209;

let HAnimSite1213 = browser.currentScene.createNode("HAnimSite");
HAnimSite1213.name = "l_metacarpal_phalanx_3_pt";
HAnimSite1213.DEF = "hanim_l_metacarpal_phalanx_3_pt";
let TouchSensor1214 = browser.currentScene.createNode("TouchSensor");
TouchSensor1214.description = "HAnimSite l_metacarpal_phalanx_3_pt";
HAnimSite1213YYY.children = new X3D.MFNode();

HAnimSite1213ZZZ.children[0] = TouchSensor1214;

let Shape1215 = browser.currentScene.createNode("Shape");
Shape1215.USE = "HAnimSiteShape";
HAnimSite1213ZZZ.children[1] = Shape1215;

HAnimSegment1205ZZZ.children[2] = HAnimSite1213;

HAnimJoint1204YYY.children = new X3D.MFNode();

HAnimJoint1204ZZZ.children[0] = HAnimSegment1205;

let HAnimJoint1216 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1216.name = "l_carpometacarpal_3";
HAnimJoint1216.DEF = "hanim_l_carpometacarpal_3";
HAnimJoint1216.center = new X3D.SFVec3f([0.1987,0.8029,-0.053]);
HAnimJoint1216.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1216.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1217 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1217.name = "l_metacarpal_3";
HAnimSegment1217.DEF = "hanim_l_metacarpal_3";
let Transform1218 = browser.currentScene.createNode("Transform");
Transform1218.translation = new X3D.SFVec3f([0.1987,0.8029,-0.053]);
let Transform1219 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1220 = browser.currentScene.createNode("Shape");
Shape1220.USE = "HAnimJointShape";
Transform1219YYY.child = new X3D.undefined();

Transform1219ZZZ.child[0] = Shape1220;

Transform1218YYY.children = new X3D.MFNode();

Transform1218ZZZ.children[0] = Transform1219;

HAnimSegment1217YYY.children = new X3D.MFNode();

HAnimSegment1217ZZZ.children[0] = Transform1218;

let Shape1221 = browser.currentScene.createNode("Shape");
let LineSet1222 = browser.currentScene.createNode("LineSet");
LineSet1222.vertexCount = new X3D.MFInt32([2]);
let Coordinate1223 = browser.currentScene.createNode("Coordinate");
Coordinate1223.point = new X3D.MFVec3f([0.1987,0.8029,-0.053,0.1987,0.7818,-0.053]);
coord = Coordinate1223;

//from l_carpometacarpal_3 to l_metacarpophalangeal_3 vertices 2
let ColorRGBA1224 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1224.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1224;

geometry = LineSet1222;

HAnimSegment1217ZZZ.children[1] = Shape1221;

HAnimJoint1216YYY.children = new X3D.MFNode();

HAnimJoint1216ZZZ.children[0] = HAnimSegment1217;

let HAnimJoint1225 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1225.name = "l_metacarpophalangeal_3";
HAnimJoint1225.DEF = "hanim_l_metacarpophalangeal_3";
HAnimJoint1225.center = new X3D.SFVec3f([0.1987,0.7818,-0.053]);
HAnimJoint1225.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1225.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1226 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1226.name = "l_carpal_proximal_phalanx_3";
HAnimSegment1226.DEF = "hanim_l_carpal_proximal_phalanx_3";
let Transform1227 = browser.currentScene.createNode("Transform");
Transform1227.translation = new X3D.SFVec3f([0.1987,0.7818,-0.053]);
let Transform1228 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1229 = browser.currentScene.createNode("Shape");
Shape1229.USE = "HAnimJointShape";
Transform1228YYY.child = new X3D.undefined();

Transform1228ZZZ.child[0] = Shape1229;

Transform1227YYY.children = new X3D.MFNode();

Transform1227ZZZ.children[0] = Transform1228;

HAnimSegment1226YYY.children = new X3D.MFNode();

HAnimSegment1226ZZZ.children[0] = Transform1227;

let Shape1230 = browser.currentScene.createNode("Shape");
let LineSet1231 = browser.currentScene.createNode("LineSet");
LineSet1231.vertexCount = new X3D.MFInt32([2]);
let Coordinate1232 = browser.currentScene.createNode("Coordinate");
Coordinate1232.point = new X3D.MFVec3f([0.1987,0.7818,-0.053,0.2013,0.7273,-0.0503]);
coord = Coordinate1232;

//from l_metacarpophalangeal_3 to l_carpal_proximal_interphalangeal_3 vertices 2
let ColorRGBA1233 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1233.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1233;

geometry = LineSet1231;

HAnimSegment1226ZZZ.children[1] = Shape1230;

HAnimJoint1225YYY.children = new X3D.MFNode();

HAnimJoint1225ZZZ.children[0] = HAnimSegment1226;

let HAnimJoint1234 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1234.name = "l_carpal_proximal_interphalangeal_3";
HAnimJoint1234.DEF = "hanim_l_carpal_proximal_interphalangeal_3";
HAnimJoint1234.center = new X3D.SFVec3f([0.2013,0.7273,-0.0503]);
HAnimJoint1234.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1234.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1235 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1235.name = "l_carpal_middle_phalanx_3";
HAnimSegment1235.DEF = "hanim_l_carpal_middle_phalanx_3";
let Transform1236 = browser.currentScene.createNode("Transform");
Transform1236.translation = new X3D.SFVec3f([0.2013,0.7273,-0.0503]);
let Transform1237 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1238 = browser.currentScene.createNode("Shape");
Shape1238.USE = "HAnimJointShape";
Transform1237YYY.child = new X3D.undefined();

Transform1237ZZZ.child[0] = Shape1238;

Transform1236YYY.children = new X3D.MFNode();

Transform1236ZZZ.children[0] = Transform1237;

HAnimSegment1235YYY.children = new X3D.MFNode();

HAnimSegment1235ZZZ.children[0] = Transform1236;

let Shape1239 = browser.currentScene.createNode("Shape");
let LineSet1240 = browser.currentScene.createNode("LineSet");
LineSet1240.vertexCount = new X3D.MFInt32([2]);
let Coordinate1241 = browser.currentScene.createNode("Coordinate");
Coordinate1241.point = new X3D.MFVec3f([0.2013,0.7273,-0.0503,0.2026,0.7011,-0.0494]);
coord = Coordinate1241;

//from l_carpal_proximal_interphalangeal_3 to l_carpal_distal_interphalangeal_3 vertices 2
let ColorRGBA1242 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1242.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1242;

geometry = LineSet1240;

HAnimSegment1235ZZZ.children[1] = Shape1239;

let HAnimSite1243 = browser.currentScene.createNode("HAnimSite");
HAnimSite1243.name = "l_carpal_distal_phalanx_3_tip";
HAnimSite1243.DEF = "hanim_l_carpal_distal_phalanx_3_tip";
let TouchSensor1244 = browser.currentScene.createNode("TouchSensor");
TouchSensor1244.description = "HAnimSite l_carpal_distal_phalanx_3_tip";
HAnimSite1243YYY.children = new X3D.MFNode();

HAnimSite1243ZZZ.children[0] = TouchSensor1244;

let Shape1245 = browser.currentScene.createNode("Shape");
Shape1245.USE = "HAnimSiteShape";
HAnimSite1243ZZZ.children[1] = Shape1245;

HAnimSegment1235ZZZ.children[2] = HAnimSite1243;

HAnimJoint1234YYY.children = new X3D.MFNode();

HAnimJoint1234ZZZ.children[0] = HAnimSegment1235;

let HAnimJoint1246 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1246.name = "l_carpal_distal_interphalangeal_3";
HAnimJoint1246.DEF = "hanim_l_carpal_distal_interphalangeal_3";
HAnimJoint1246.center = new X3D.SFVec3f([0.2026,0.7011,-0.0494]);
HAnimJoint1246.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1246.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1234ZZZ.children[1] = HAnimJoint1246;

HAnimJoint1225ZZZ.children[1] = HAnimJoint1234;

HAnimJoint1216ZZZ.children[1] = HAnimJoint1225;

HAnimJoint1204ZZZ.children[1] = HAnimJoint1216;

HAnimJoint1106ZZZ.children[3] = HAnimJoint1204;

let HAnimJoint1247 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1247.name = "l_midcarpal_4_5";
HAnimJoint1247.DEF = "hanim_l_midcarpal_4_5";
HAnimJoint1247.center = new X3D.SFVec3f([8.0395,0.921,-0.6795]);
HAnimJoint1247.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1247.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1248 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1248.name = "l_hamate";
HAnimSegment1248.DEF = "hanim_l_hamate";
let Transform1249 = browser.currentScene.createNode("Transform");
Transform1249.translation = new X3D.SFVec3f([8.0395,0.921,-0.6795]);
let Transform1250 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1251 = browser.currentScene.createNode("Shape");
Shape1251.USE = "HAnimJointShape";
Transform1250YYY.child = new X3D.undefined();

Transform1250ZZZ.child[0] = Shape1251;

Transform1249YYY.children = new X3D.MFNode();

Transform1249ZZZ.children[0] = Transform1250;

HAnimSegment1248YYY.children = new X3D.MFNode();

HAnimSegment1248ZZZ.children[0] = Transform1249;

let Shape1252 = browser.currentScene.createNode("Shape");
let LineSet1253 = browser.currentScene.createNode("LineSet");
LineSet1253.vertexCount = new X3D.MFInt32([2]);
let Coordinate1254 = browser.currentScene.createNode("Coordinate");
Coordinate1254.point = new X3D.MFVec3f([8.0395,0.921,-0.6795,0.1956,0.8019,-0.0794]);
coord = Coordinate1254;

//from l_midcarpal_4_5 to l_carpometacarpal_4 vertices 2
let ColorRGBA1255 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1255.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1255;

geometry = LineSet1253;

HAnimSegment1248ZZZ.children[1] = Shape1252;

let Shape1256 = browser.currentScene.createNode("Shape");
let LineSet1257 = browser.currentScene.createNode("LineSet");
LineSet1257.vertexCount = new X3D.MFInt32([2]);
let Coordinate1258 = browser.currentScene.createNode("Coordinate");
Coordinate1258.point = new X3D.MFVec3f([8.0395,0.921,-0.6795,0.1925,0.8066,-0.1036]);
coord = Coordinate1258;

//from l_midcarpal_4_5 to l_carpometacarpal_5 vertices 2
let ColorRGBA1259 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1259.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1259;

geometry = LineSet1257;

HAnimSegment1248ZZZ.children[2] = Shape1256;

let HAnimSite1260 = browser.currentScene.createNode("HAnimSite");
HAnimSite1260.name = "l_metacarpal_phalanx_5_pt";
HAnimSite1260.DEF = "hanim_l_metacarpal_phalanx_5_pt";
HAnimSite1260.translation = new X3D.SFVec3f([0.1929,0.786,-0.1122]);
let TouchSensor1261 = browser.currentScene.createNode("TouchSensor");
TouchSensor1261.description = "HAnimSite l_metacarpal_phalanx_5_pt";
HAnimSite1260YYY.children = new X3D.MFNode();

HAnimSite1260ZZZ.children[0] = TouchSensor1261;

let Shape1262 = browser.currentScene.createNode("Shape");
Shape1262.USE = "HAnimSiteShape";
HAnimSite1260ZZZ.children[1] = Shape1262;

HAnimSegment1248ZZZ.children[3] = HAnimSite1260;

HAnimJoint1247YYY.children = new X3D.MFNode();

HAnimJoint1247ZZZ.children[0] = HAnimSegment1248;

let HAnimJoint1263 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1263.name = "l_carpometacarpal_4";
HAnimJoint1263.DEF = "hanim_l_carpometacarpal_4";
HAnimJoint1263.center = new X3D.SFVec3f([0.1956,0.8019,-0.0794]);
HAnimJoint1263.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1263.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1264 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1264.name = "l_metacarpal_4";
HAnimSegment1264.DEF = "hanim_l_metacarpal_4";
let Transform1265 = browser.currentScene.createNode("Transform");
Transform1265.translation = new X3D.SFVec3f([0.1956,0.8019,-0.0794]);
let Transform1266 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1267 = browser.currentScene.createNode("Shape");
Shape1267.USE = "HAnimJointShape";
Transform1266YYY.child = new X3D.undefined();

Transform1266ZZZ.child[0] = Shape1267;

Transform1265YYY.children = new X3D.MFNode();

Transform1265ZZZ.children[0] = Transform1266;

HAnimSegment1264YYY.children = new X3D.MFNode();

HAnimSegment1264ZZZ.children[0] = Transform1265;

let Shape1268 = browser.currentScene.createNode("Shape");
let LineSet1269 = browser.currentScene.createNode("LineSet");
LineSet1269.vertexCount = new X3D.MFInt32([2]);
let Coordinate1270 = browser.currentScene.createNode("Coordinate");
Coordinate1270.point = new X3D.MFVec3f([0.1956,0.8019,-0.0794,0.1956,0.7815,-0.0794]);
coord = Coordinate1270;

//from l_carpometacarpal_4 to l_metacarpophalangeal_4 vertices 2
let ColorRGBA1271 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1271.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1271;

geometry = LineSet1269;

HAnimSegment1264ZZZ.children[1] = Shape1268;

HAnimJoint1263YYY.children = new X3D.MFNode();

HAnimJoint1263ZZZ.children[0] = HAnimSegment1264;

let HAnimJoint1272 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1272.name = "l_metacarpophalangeal_4";
HAnimJoint1272.DEF = "hanim_l_metacarpophalangeal_4";
HAnimJoint1272.center = new X3D.SFVec3f([0.1956,0.7815,-0.0794]);
HAnimJoint1272.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1272.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1273 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1273.name = "l_carpal_proximal_phalanx_4";
HAnimSegment1273.DEF = "hanim_l_carpal_proximal_phalanx_4";
let Transform1274 = browser.currentScene.createNode("Transform");
Transform1274.translation = new X3D.SFVec3f([0.1956,0.7815,-0.0794]);
let Transform1275 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1276 = browser.currentScene.createNode("Shape");
Shape1276.USE = "HAnimJointShape";
Transform1275YYY.child = new X3D.undefined();

Transform1275ZZZ.child[0] = Shape1276;

Transform1274YYY.children = new X3D.MFNode();

Transform1274ZZZ.children[0] = Transform1275;

HAnimSegment1273YYY.children = new X3D.MFNode();

HAnimSegment1273ZZZ.children[0] = Transform1274;

let Shape1277 = browser.currentScene.createNode("Shape");
let LineSet1278 = browser.currentScene.createNode("LineSet");
LineSet1278.vertexCount = new X3D.MFInt32([2]);
let Coordinate1279 = browser.currentScene.createNode("Coordinate");
Coordinate1279.point = new X3D.MFVec3f([0.1956,0.7815,-0.0794,0.1973,0.7287,-0.0777]);
coord = Coordinate1279;

//from l_metacarpophalangeal_4 to l_carpal_proximal_interphalangeal_4 vertices 2
let ColorRGBA1280 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1280.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1280;

geometry = LineSet1278;

HAnimSegment1273ZZZ.children[1] = Shape1277;

HAnimJoint1272YYY.children = new X3D.MFNode();

HAnimJoint1272ZZZ.children[0] = HAnimSegment1273;

let HAnimJoint1281 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1281.name = "l_carpal_proximal_interphalangeal_4";
HAnimJoint1281.DEF = "hanim_l_carpal_proximal_interphalangeal_4";
HAnimJoint1281.center = new X3D.SFVec3f([0.1973,0.7287,-0.0777]);
HAnimJoint1281.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1281.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1282 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1282.name = "l_carpal_middle_phalanx_4";
HAnimSegment1282.DEF = "hanim_l_carpal_middle_phalanx_4";
let Transform1283 = browser.currentScene.createNode("Transform");
Transform1283.translation = new X3D.SFVec3f([0.1973,0.7287,-0.0777]);
let Transform1284 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1285 = browser.currentScene.createNode("Shape");
Shape1285.USE = "HAnimJointShape";
Transform1284YYY.child = new X3D.undefined();

Transform1284ZZZ.child[0] = Shape1285;

Transform1283YYY.children = new X3D.MFNode();

Transform1283ZZZ.children[0] = Transform1284;

HAnimSegment1282YYY.children = new X3D.MFNode();

HAnimSegment1282ZZZ.children[0] = Transform1283;

let Shape1286 = browser.currentScene.createNode("Shape");
let LineSet1287 = browser.currentScene.createNode("LineSet");
LineSet1287.vertexCount = new X3D.MFInt32([2]);
let Coordinate1288 = browser.currentScene.createNode("Coordinate");
Coordinate1288.point = new X3D.MFVec3f([0.1973,0.7287,-0.0777,0.1983,0.7045,-0.0767]);
coord = Coordinate1288;

//from l_carpal_proximal_interphalangeal_4 to l_carpal_distal_interphalangeal_4 vertices 2
let ColorRGBA1289 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1289.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1289;

geometry = LineSet1287;

HAnimSegment1282ZZZ.children[1] = Shape1286;

let HAnimSite1290 = browser.currentScene.createNode("HAnimSite");
HAnimSite1290.name = "l_carpal_distal_phalanx_4_tip";
HAnimSite1290.DEF = "hanim_l_carpal_distal_phalanx_4_tip";
let TouchSensor1291 = browser.currentScene.createNode("TouchSensor");
TouchSensor1291.description = "HAnimSite l_carpal_distal_phalanx_4_tip";
HAnimSite1290YYY.children = new X3D.MFNode();

HAnimSite1290ZZZ.children[0] = TouchSensor1291;

let Shape1292 = browser.currentScene.createNode("Shape");
Shape1292.USE = "HAnimSiteShape";
HAnimSite1290ZZZ.children[1] = Shape1292;

HAnimSegment1282ZZZ.children[2] = HAnimSite1290;

HAnimJoint1281YYY.children = new X3D.MFNode();

HAnimJoint1281ZZZ.children[0] = HAnimSegment1282;

let HAnimJoint1293 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1293.name = "l_carpal_distal_interphalangeal_4";
HAnimJoint1293.DEF = "hanim_l_carpal_distal_interphalangeal_4";
HAnimJoint1293.center = new X3D.SFVec3f([0.1983,0.7045,-0.0767]);
HAnimJoint1293.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1293.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1281ZZZ.children[1] = HAnimJoint1293;

HAnimJoint1272ZZZ.children[1] = HAnimJoint1281;

HAnimJoint1263ZZZ.children[1] = HAnimJoint1272;

HAnimJoint1247ZZZ.children[1] = HAnimJoint1263;

let HAnimJoint1294 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1294.name = "l_carpometacarpal_5";
HAnimJoint1294.DEF = "hanim_l_carpometacarpal_5";
HAnimJoint1294.center = new X3D.SFVec3f([0.1925,0.8066,-0.1036]);
HAnimJoint1294.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1294.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1295 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1295.name = "l_metacarpal_5";
HAnimSegment1295.DEF = "hanim_l_metacarpal_5";
let Transform1296 = browser.currentScene.createNode("Transform");
Transform1296.translation = new X3D.SFVec3f([0.1925,0.8066,-0.1036]);
let Transform1297 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1298 = browser.currentScene.createNode("Shape");
Shape1298.USE = "HAnimJointShape";
Transform1297YYY.child = new X3D.undefined();

Transform1297ZZZ.child[0] = Shape1298;

Transform1296YYY.children = new X3D.MFNode();

Transform1296ZZZ.children[0] = Transform1297;

HAnimSegment1295YYY.children = new X3D.MFNode();

HAnimSegment1295ZZZ.children[0] = Transform1296;

let Shape1299 = browser.currentScene.createNode("Shape");
let LineSet1300 = browser.currentScene.createNode("LineSet");
LineSet1300.vertexCount = new X3D.MFInt32([2]);
let Coordinate1301 = browser.currentScene.createNode("Coordinate");
Coordinate1301.point = new X3D.MFVec3f([0.1925,0.8066,-0.1036,0.1925,0.7866,-0.1036]);
coord = Coordinate1301;

//from l_carpometacarpal_5 to l_metacarpophalangeal_5 vertices 2
let ColorRGBA1302 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1302.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1302;

geometry = LineSet1300;

HAnimSegment1295ZZZ.children[1] = Shape1299;

HAnimJoint1294YYY.children = new X3D.MFNode();

HAnimJoint1294ZZZ.children[0] = HAnimSegment1295;

let HAnimJoint1303 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1303.name = "l_metacarpophalangeal_5";
HAnimJoint1303.DEF = "hanim_l_metacarpophalangeal_5";
HAnimJoint1303.center = new X3D.SFVec3f([0.1925,0.7866,-0.1036]);
HAnimJoint1303.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1303.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1304 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1304.name = "l_carpal_proximal_phalanx_5";
HAnimSegment1304.DEF = "hanim_l_carpal_proximal_phalanx_5";
let Transform1305 = browser.currentScene.createNode("Transform");
Transform1305.translation = new X3D.SFVec3f([0.1925,0.7866,-0.1036]);
let Transform1306 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1307 = browser.currentScene.createNode("Shape");
Shape1307.USE = "HAnimJointShape";
Transform1306YYY.child = new X3D.undefined();

Transform1306ZZZ.child[0] = Shape1307;

Transform1305YYY.children = new X3D.MFNode();

Transform1305ZZZ.children[0] = Transform1306;

HAnimSegment1304YYY.children = new X3D.MFNode();

HAnimSegment1304ZZZ.children[0] = Transform1305;

let Shape1308 = browser.currentScene.createNode("Shape");
let LineSet1309 = browser.currentScene.createNode("LineSet");
LineSet1309.vertexCount = new X3D.MFInt32([2]);
let Coordinate1310 = browser.currentScene.createNode("Coordinate");
Coordinate1310.point = new X3D.MFVec3f([0.1925,0.7866,-0.1036,0.1938,0.7452,-0.1024]);
coord = Coordinate1310;

//from l_metacarpophalangeal_5 to l_carpal_proximal_interphalangeal_5 vertices 2
let ColorRGBA1311 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1311.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1311;

geometry = LineSet1309;

HAnimSegment1304ZZZ.children[1] = Shape1308;

HAnimJoint1303YYY.children = new X3D.MFNode();

HAnimJoint1303ZZZ.children[0] = HAnimSegment1304;

let HAnimJoint1312 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1312.name = "l_carpal_proximal_interphalangeal_5";
HAnimJoint1312.DEF = "hanim_l_carpal_proximal_interphalangeal_5";
HAnimJoint1312.center = new X3D.SFVec3f([0.1938,0.7452,-0.1024]);
HAnimJoint1312.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1312.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1313 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1313.name = "l_carpal_middle_phalanx_5";
HAnimSegment1313.DEF = "hanim_l_carpal_middle_phalanx_5";
let Transform1314 = browser.currentScene.createNode("Transform");
Transform1314.translation = new X3D.SFVec3f([0.1938,0.7452,-0.1024]);
let Transform1315 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1316 = browser.currentScene.createNode("Shape");
Shape1316.USE = "HAnimJointShape";
Transform1315YYY.child = new X3D.undefined();

Transform1315ZZZ.child[0] = Shape1316;

Transform1314YYY.children = new X3D.MFNode();

Transform1314ZZZ.children[0] = Transform1315;

HAnimSegment1313YYY.children = new X3D.MFNode();

HAnimSegment1313ZZZ.children[0] = Transform1314;

let Shape1317 = browser.currentScene.createNode("Shape");
let LineSet1318 = browser.currentScene.createNode("LineSet");
LineSet1318.vertexCount = new X3D.MFInt32([2]);
let Coordinate1319 = browser.currentScene.createNode("Coordinate");
Coordinate1319.point = new X3D.MFVec3f([0.1938,0.7452,-0.1024,0.1948,0.7277,-0.1017]);
coord = Coordinate1319;

//from l_carpal_proximal_interphalangeal_5 to l_carpal_distal_interphalangeal_5 vertices 2
let ColorRGBA1320 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1320.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1320;

geometry = LineSet1318;

HAnimSegment1313ZZZ.children[1] = Shape1317;

let HAnimSite1321 = browser.currentScene.createNode("HAnimSite");
HAnimSite1321.name = "l_carpal_distal_phalanx_5_tip";
HAnimSite1321.DEF = "hanim_l_carpal_distal_phalanx_5_tip";
let TouchSensor1322 = browser.currentScene.createNode("TouchSensor");
TouchSensor1322.description = "HAnimSite l_carpal_distal_phalanx_5_tip";
HAnimSite1321YYY.children = new X3D.MFNode();

HAnimSite1321ZZZ.children[0] = TouchSensor1322;

let Shape1323 = browser.currentScene.createNode("Shape");
Shape1323.USE = "HAnimSiteShape";
HAnimSite1321ZZZ.children[1] = Shape1323;

HAnimSegment1313ZZZ.children[2] = HAnimSite1321;

HAnimJoint1312YYY.children = new X3D.MFNode();

HAnimJoint1312ZZZ.children[0] = HAnimSegment1313;

let HAnimJoint1324 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1324.name = "l_carpal_distal_interphalangeal_5";
HAnimJoint1324.DEF = "hanim_l_carpal_distal_interphalangeal_5";
HAnimJoint1324.center = new X3D.SFVec3f([0.1948,0.7277,-0.1017]);
HAnimJoint1324.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1324.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1312ZZZ.children[1] = HAnimJoint1324;

HAnimJoint1303ZZZ.children[1] = HAnimJoint1312;

HAnimJoint1294ZZZ.children[1] = HAnimJoint1303;

HAnimJoint1247ZZZ.children[2] = HAnimJoint1294;

HAnimJoint1106ZZZ.children[4] = HAnimJoint1247;

HAnimJoint1094ZZZ.children[1] = HAnimJoint1106;

HAnimJoint1073ZZZ.children[1] = HAnimJoint1094;

HAnimJoint1058ZZZ.children[1] = HAnimJoint1073;

HAnimJoint1049ZZZ.children[1] = HAnimJoint1058;

HAnimJoint845ZZZ.children[2] = HAnimJoint1049;

let HAnimJoint1325 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1325.name = "r_sternoclavicular";
HAnimJoint1325.DEF = "hanim_r_sternoclavicular";
HAnimJoint1325.center = new X3D.SFVec3f([-0.0694,1.46,-0.033]);
HAnimJoint1325.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1325.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1326 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1326.name = "r_clavicle";
HAnimSegment1326.DEF = "hanim_r_clavicle";
let Transform1327 = browser.currentScene.createNode("Transform");
Transform1327.translation = new X3D.SFVec3f([-0.0694,1.46,-0.033]);
let Transform1328 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1329 = browser.currentScene.createNode("Shape");
Shape1329.USE = "HAnimJointShape";
Transform1328YYY.child = new X3D.undefined();

Transform1328ZZZ.child[0] = Shape1329;

Transform1327YYY.children = new X3D.MFNode();

Transform1327ZZZ.children[0] = Transform1328;

HAnimSegment1326YYY.children = new X3D.MFNode();

HAnimSegment1326ZZZ.children[0] = Transform1327;

let Shape1330 = browser.currentScene.createNode("Shape");
let LineSet1331 = browser.currentScene.createNode("LineSet");
LineSet1331.vertexCount = new X3D.MFInt32([2]);
let Coordinate1332 = browser.currentScene.createNode("Coordinate");
Coordinate1332.point = new X3D.MFVec3f([-0.0694,1.46,-0.033,-0.0836,1.4281,-0.0401]);
coord = Coordinate1332;

//from r_sternoclavicular to r_acromioclavicular vertices 2
let ColorRGBA1333 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1333.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1333;

geometry = LineSet1331;

HAnimSegment1326ZZZ.children[1] = Shape1330;

HAnimJoint1325YYY.children = new X3D.MFNode();

HAnimJoint1325ZZZ.children[0] = HAnimSegment1326;

let HAnimJoint1334 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1334.name = "r_acromioclavicular";
HAnimJoint1334.DEF = "hanim_r_acromioclavicular";
HAnimJoint1334.center = new X3D.SFVec3f([-0.0836,1.4281,-0.0401]);
HAnimJoint1334.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1334.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1335 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1335.name = "r_scapula";
HAnimSegment1335.DEF = "hanim_r_scapula";
let Transform1336 = browser.currentScene.createNode("Transform");
Transform1336.translation = new X3D.SFVec3f([-0.0836,1.4281,-0.0401]);
let Transform1337 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1338 = browser.currentScene.createNode("Shape");
Shape1338.USE = "HAnimJointShape";
Transform1337YYY.child = new X3D.undefined();

Transform1337ZZZ.child[0] = Shape1338;

Transform1336YYY.children = new X3D.MFNode();

Transform1336ZZZ.children[0] = Transform1337;

HAnimSegment1335YYY.children = new X3D.MFNode();

HAnimSegment1335ZZZ.children[0] = Transform1336;

let Shape1339 = browser.currentScene.createNode("Shape");
let LineSet1340 = browser.currentScene.createNode("LineSet");
LineSet1340.vertexCount = new X3D.MFInt32([2]);
let Coordinate1341 = browser.currentScene.createNode("Coordinate");
Coordinate1341.point = new X3D.MFVec3f([-0.0836,1.4281,-0.0401,-0.1907,1.4407,-0.0325]);
coord = Coordinate1341;

//from r_acromioclavicular to r_shoulder vertices 2
let ColorRGBA1342 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1342.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1342;

geometry = LineSet1340;

HAnimSegment1335ZZZ.children[1] = Shape1339;

let HAnimSite1343 = browser.currentScene.createNode("HAnimSite");
HAnimSite1343.name = "r_bideltoid_pt";
HAnimSite1343.DEF = "hanim_r_bideltoid_pt";
let TouchSensor1344 = browser.currentScene.createNode("TouchSensor");
TouchSensor1344.description = "HAnimSite r_bideltoid_pt";
HAnimSite1343YYY.children = new X3D.MFNode();

HAnimSite1343ZZZ.children[0] = TouchSensor1344;

let Shape1345 = browser.currentScene.createNode("Shape");
Shape1345.USE = "HAnimSiteShape";
HAnimSite1343ZZZ.children[1] = Shape1345;

HAnimSegment1335ZZZ.children[2] = HAnimSite1343;

let HAnimSite1346 = browser.currentScene.createNode("HAnimSite");
HAnimSite1346.name = "r_humeral_lateral_epicondyles_pt";
HAnimSite1346.DEF = "hanim_r_humeral_lateral_epicondyles_pt";
HAnimSite1346.translation = new X3D.SFVec3f([-0.2224,1.1517,-0.1033]);
let TouchSensor1347 = browser.currentScene.createNode("TouchSensor");
TouchSensor1347.description = "HAnimSite r_humeral_lateral_epicondyles_pt";
HAnimSite1346YYY.children = new X3D.MFNode();

HAnimSite1346ZZZ.children[0] = TouchSensor1347;

let Shape1348 = browser.currentScene.createNode("Shape");
Shape1348.USE = "HAnimSiteShape";
HAnimSite1346ZZZ.children[1] = Shape1348;

HAnimSegment1335ZZZ.children[3] = HAnimSite1346;

HAnimJoint1334YYY.children = new X3D.MFNode();

HAnimJoint1334ZZZ.children[0] = HAnimSegment1335;

let HAnimJoint1349 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1349.name = "r_shoulder";
HAnimJoint1349.DEF = "hanim_r_shoulder";
HAnimJoint1349.center = new X3D.SFVec3f([-0.1907,1.4407,-0.0325]);
HAnimJoint1349.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1349.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1350 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1350.name = "r_upperarm";
HAnimSegment1350.DEF = "hanim_r_upperarm";
let Transform1351 = browser.currentScene.createNode("Transform");
Transform1351.translation = new X3D.SFVec3f([-0.1907,1.4407,-0.0325]);
let Transform1352 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1353 = browser.currentScene.createNode("Shape");
Shape1353.USE = "HAnimJointShape";
Transform1352YYY.child = new X3D.undefined();

Transform1352ZZZ.child[0] = Shape1353;

Transform1351YYY.children = new X3D.MFNode();

Transform1351ZZZ.children[0] = Transform1352;

HAnimSegment1350YYY.children = new X3D.MFNode();

HAnimSegment1350ZZZ.children[0] = Transform1351;

let Shape1354 = browser.currentScene.createNode("Shape");
let LineSet1355 = browser.currentScene.createNode("LineSet");
LineSet1355.vertexCount = new X3D.MFInt32([2]);
let Coordinate1356 = browser.currentScene.createNode("Coordinate");
Coordinate1356.point = new X3D.MFVec3f([-0.1907,1.4407,-0.0325,-0.1949,1.1388,-0.062]);
coord = Coordinate1356;

//from r_shoulder to r_elbow vertices 2
let ColorRGBA1357 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1357.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1357;

geometry = LineSet1355;

HAnimSegment1350ZZZ.children[1] = Shape1354;

let HAnimSite1358 = browser.currentScene.createNode("HAnimSite");
HAnimSite1358.name = "r_humeral_medial_epicondyles_pt";
HAnimSite1358.DEF = "hanim_r_humeral_medial_epicondyles_pt";
HAnimSite1358.translation = new X3D.SFVec3f([-0.168,1.1298,-0.1062]);
let TouchSensor1359 = browser.currentScene.createNode("TouchSensor");
TouchSensor1359.description = "HAnimSite r_humeral_medial_epicondyles_pt";
HAnimSite1358YYY.children = new X3D.MFNode();

HAnimSite1358ZZZ.children[0] = TouchSensor1359;

let Shape1360 = browser.currentScene.createNode("Shape");
Shape1360.USE = "HAnimSiteShape";
HAnimSite1358ZZZ.children[1] = Shape1360;

HAnimSegment1350ZZZ.children[2] = HAnimSite1358;

let HAnimSite1361 = browser.currentScene.createNode("HAnimSite");
HAnimSite1361.name = "r_olecranon_pt";
HAnimSite1361.DEF = "hanim_r_olecranon_pt";
HAnimSite1361.translation = new X3D.SFVec3f([-0.1907,1.1405,-0.1065]);
let TouchSensor1362 = browser.currentScene.createNode("TouchSensor");
TouchSensor1362.description = "HAnimSite r_olecranon_pt";
HAnimSite1361YYY.children = new X3D.MFNode();

HAnimSite1361ZZZ.children[0] = TouchSensor1362;

let Shape1363 = browser.currentScene.createNode("Shape");
Shape1363.USE = "HAnimSiteShape";
HAnimSite1361ZZZ.children[1] = Shape1363;

HAnimSegment1350ZZZ.children[3] = HAnimSite1361;

let HAnimSite1364 = browser.currentScene.createNode("HAnimSite");
HAnimSite1364.name = "r_radial_styloid_pt";
HAnimSite1364.DEF = "hanim_r_radial_styloid_pt";
HAnimSite1364.translation = new X3D.SFVec3f([-0.1884,0.8676,-0.036]);
let TouchSensor1365 = browser.currentScene.createNode("TouchSensor");
TouchSensor1365.description = "HAnimSite r_radial_styloid_pt";
HAnimSite1364YYY.children = new X3D.MFNode();

HAnimSite1364ZZZ.children[0] = TouchSensor1365;

let Shape1366 = browser.currentScene.createNode("Shape");
Shape1366.USE = "HAnimSiteShape";
HAnimSite1364ZZZ.children[1] = Shape1366;

HAnimSegment1350ZZZ.children[4] = HAnimSite1364;

let HAnimSite1367 = browser.currentScene.createNode("HAnimSite");
HAnimSite1367.name = "r_radiale_pt";
HAnimSite1367.DEF = "hanim_r_radiale_pt";
HAnimSite1367.translation = new X3D.SFVec3f([-0.213,1.1305,-0.1091]);
let TouchSensor1368 = browser.currentScene.createNode("TouchSensor");
TouchSensor1368.description = "HAnimSite r_radiale_pt";
HAnimSite1367YYY.children = new X3D.MFNode();

HAnimSite1367ZZZ.children[0] = TouchSensor1368;

let Shape1369 = browser.currentScene.createNode("Shape");
Shape1369.USE = "HAnimSiteShape";
HAnimSite1367ZZZ.children[1] = Shape1369;

HAnimSegment1350ZZZ.children[5] = HAnimSite1367;

HAnimJoint1349YYY.children = new X3D.MFNode();

HAnimJoint1349ZZZ.children[0] = HAnimSegment1350;

let HAnimJoint1370 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1370.name = "r_elbow";
HAnimJoint1370.DEF = "hanim_r_elbow";
HAnimJoint1370.center = new X3D.SFVec3f([-0.1949,1.1388,-0.062]);
HAnimJoint1370.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1370.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1371 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1371.name = "r_forearm";
HAnimSegment1371.DEF = "hanim_r_forearm";
let Transform1372 = browser.currentScene.createNode("Transform");
Transform1372.translation = new X3D.SFVec3f([-0.1949,1.1388,-0.062]);
let Transform1373 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1374 = browser.currentScene.createNode("Shape");
Shape1374.USE = "HAnimJointShape";
Transform1373YYY.child = new X3D.undefined();

Transform1373ZZZ.child[0] = Shape1374;

Transform1372YYY.children = new X3D.MFNode();

Transform1372ZZZ.children[0] = Transform1373;

HAnimSegment1371YYY.children = new X3D.MFNode();

HAnimSegment1371ZZZ.children[0] = Transform1372;

let Shape1375 = browser.currentScene.createNode("Shape");
let LineSet1376 = browser.currentScene.createNode("LineSet");
LineSet1376.vertexCount = new X3D.MFInt32([2]);
let Coordinate1377 = browser.currentScene.createNode("Coordinate");
Coordinate1377.point = new X3D.MFVec3f([-0.1949,1.1388,-0.062,-0.1959,0.8694,-0.0521]);
coord = Coordinate1377;

//from r_elbow to r_radiocarpal vertices 2
let ColorRGBA1378 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1378.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1378;

geometry = LineSet1376;

HAnimSegment1371ZZZ.children[1] = Shape1375;

let HAnimSite1379 = browser.currentScene.createNode("HAnimSite");
HAnimSite1379.name = "r_ulnar_styloid_pt";
HAnimSite1379.DEF = "hanim_r_ulnar_styloid_pt";
HAnimSite1379.translation = new X3D.SFVec3f([-0.2117,0.8562,-0.0584]);
let TouchSensor1380 = browser.currentScene.createNode("TouchSensor");
TouchSensor1380.description = "HAnimSite r_ulnar_styloid_pt";
HAnimSite1379YYY.children = new X3D.MFNode();

HAnimSite1379ZZZ.children[0] = TouchSensor1380;

let Shape1381 = browser.currentScene.createNode("Shape");
Shape1381.USE = "HAnimSiteShape";
HAnimSite1379ZZZ.children[1] = Shape1381;

HAnimSegment1371ZZZ.children[2] = HAnimSite1379;

HAnimJoint1370YYY.children = new X3D.MFNode();

HAnimJoint1370ZZZ.children[0] = HAnimSegment1371;

let HAnimJoint1382 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1382.name = "r_radiocarpal";
HAnimJoint1382.DEF = "hanim_r_radiocarpal";
HAnimJoint1382.center = new X3D.SFVec3f([-0.1959,0.8694,-0.0521]);
HAnimJoint1382.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1382.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1383 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1383.name = "r_carpal";
HAnimSegment1383.DEF = "hanim_r_carpal";
let Transform1384 = browser.currentScene.createNode("Transform");
Transform1384.scale = new X3D.SFVec3f([0.2,0.2,0.2]);
Transform1384.translation = new X3D.SFVec3f([-0.2,0.85,-0.05]);
Transform1384.rotation = new X3D.SFRotation([0,0,1,-3.14]);
//Transform right hand
let Transform1385 = browser.currentScene.createNode("Transform");
Transform1385.rotation = new X3D.SFRotation([0,1,0,1.57]);
//Transform right hand
let Shape1386 = browser.currentScene.createNode("Shape");
Shape1386.USE = "HAnimJointShape";
Transform1385YYY.child = new X3D.undefined();

Transform1385ZZZ.child[0] = Shape1386;

Transform1384YYY.children = new X3D.MFNode();

Transform1384ZZZ.children[0] = Transform1385;

HAnimSegment1383YYY.children = new X3D.MFNode();

HAnimSegment1383ZZZ.children[0] = Transform1384;

let Shape1387 = browser.currentScene.createNode("Shape");
let LineSet1388 = browser.currentScene.createNode("LineSet");
LineSet1388.vertexCount = new X3D.MFInt32([2]);
let Coordinate1389 = browser.currentScene.createNode("Coordinate");
Coordinate1389.point = new X3D.MFVec3f([-0.1959,0.8694,-0.0521,-8.0515,0.9213,1.3235]);
coord = Coordinate1389;

//from r_radiocarpal to r_midcarpal_1 vertices 2
let ColorRGBA1390 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1390.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1390;

geometry = LineSet1388;

HAnimSegment1383ZZZ.children[1] = Shape1387;

let Shape1391 = browser.currentScene.createNode("Shape");
let LineSet1392 = browser.currentScene.createNode("LineSet");
LineSet1392.vertexCount = new X3D.MFInt32([2]);
let Coordinate1393 = browser.currentScene.createNode("Coordinate");
Coordinate1393.point = new X3D.MFVec3f([-0.1959,0.8694,-0.0521,-8.0515,0.9225,0.8386]);
coord = Coordinate1393;

//from r_radiocarpal to r_midcarpal_2 vertices 2
let ColorRGBA1394 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1394.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1394;

geometry = LineSet1392;

HAnimSegment1383ZZZ.children[2] = Shape1391;

let Shape1395 = browser.currentScene.createNode("Shape");
let LineSet1396 = browser.currentScene.createNode("LineSet");
LineSet1396.vertexCount = new X3D.MFInt32([2]);
let Coordinate1397 = browser.currentScene.createNode("Coordinate");
Coordinate1397.point = new X3D.MFVec3f([-0.1959,0.8694,-0.0521,-8.0405,0.9246,0.2513]);
coord = Coordinate1397;

//from r_radiocarpal to r_midcarpal_3 vertices 2
let ColorRGBA1398 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1398.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1398;

geometry = LineSet1396;

HAnimSegment1383ZZZ.children[3] = Shape1395;

let Shape1399 = browser.currentScene.createNode("Shape");
let LineSet1400 = browser.currentScene.createNode("LineSet");
LineSet1400.vertexCount = new X3D.MFInt32([2]);
let Coordinate1401 = browser.currentScene.createNode("Coordinate");
Coordinate1401.point = new X3D.MFVec3f([-0.1959,0.8694,-0.0521,-8.0405,0.921,-0.6795]);
coord = Coordinate1401;

//from r_radiocarpal to r_midcarpal_4_5 vertices 2
let ColorRGBA1402 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1402.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1402;

geometry = LineSet1400;

HAnimSegment1383ZZZ.children[4] = Shape1399;

HAnimJoint1382YYY.children = new X3D.MFNode();

HAnimJoint1382ZZZ.children[0] = HAnimSegment1383;

let HAnimJoint1403 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1403.name = "r_midcarpal_1";
HAnimJoint1403.DEF = "hanim_r_midcarpal_1";
HAnimJoint1403.center = new X3D.SFVec3f([-8.0515,0.9213,1.3235]);
HAnimJoint1403.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1403.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1404 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1404.name = "r_trapezium";
HAnimSegment1404.DEF = "hanim_r_trapezium";
let Transform1405 = browser.currentScene.createNode("Transform");
Transform1405.translation = new X3D.SFVec3f([-8.0515,0.9213,1.3235]);
let Transform1406 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1407 = browser.currentScene.createNode("Shape");
Shape1407.USE = "HAnimJointShape";
Transform1406YYY.child = new X3D.undefined();

Transform1406ZZZ.child[0] = Shape1407;

Transform1405YYY.children = new X3D.MFNode();

Transform1405ZZZ.children[0] = Transform1406;

HAnimSegment1404YYY.children = new X3D.MFNode();

HAnimSegment1404ZZZ.children[0] = Transform1405;

let Shape1408 = browser.currentScene.createNode("Shape");
let LineSet1409 = browser.currentScene.createNode("LineSet");
LineSet1409.vertexCount = new X3D.MFInt32([2]);
let Coordinate1410 = browser.currentScene.createNode("Coordinate");
Coordinate1410.point = new X3D.MFVec3f([-8.0515,0.9213,1.3235,-0.1899,0.8502,-0.0473]);
coord = Coordinate1410;

//from r_midcarpal_1 to r_carpometacarpal_1 vertices 2
let ColorRGBA1411 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1411.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1411;

geometry = LineSet1409;

HAnimSegment1404ZZZ.children[1] = Shape1408;

HAnimJoint1403YYY.children = new X3D.MFNode();

HAnimJoint1403ZZZ.children[0] = HAnimSegment1404;

let HAnimJoint1412 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1412.name = "r_carpometacarpal_1";
HAnimJoint1412.DEF = "hanim_r_carpometacarpal_1";
HAnimJoint1412.center = new X3D.SFVec3f([-0.1899,0.8502,-0.0473]);
HAnimJoint1412.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1412.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1413 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1413.name = "r_metacarpal_1";
HAnimSegment1413.DEF = "hanim_r_metacarpal_1";
let Transform1414 = browser.currentScene.createNode("Transform");
Transform1414.translation = new X3D.SFVec3f([-0.1899,0.8502,-0.0473]);
let Transform1415 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1416 = browser.currentScene.createNode("Shape");
Shape1416.USE = "HAnimJointShape";
Transform1415YYY.child = new X3D.undefined();

Transform1415ZZZ.child[0] = Shape1416;

Transform1414YYY.children = new X3D.MFNode();

Transform1414ZZZ.children[0] = Transform1415;

HAnimSegment1413YYY.children = new X3D.MFNode();

HAnimSegment1413ZZZ.children[0] = Transform1414;

let Shape1417 = browser.currentScene.createNode("Shape");
let LineSet1418 = browser.currentScene.createNode("LineSet");
LineSet1418.vertexCount = new X3D.MFInt32([2]);
let Coordinate1419 = browser.currentScene.createNode("Coordinate");
Coordinate1419.point = new X3D.MFVec3f([-0.1899,0.8502,-0.0473,-0.1874,0.8256,0.0306]);
coord = Coordinate1419;

//from r_carpometacarpal_1 to r_metacarpophalangeal_1 vertices 2
let ColorRGBA1420 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1420.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1420;

geometry = LineSet1418;

HAnimSegment1413ZZZ.children[1] = Shape1417;

HAnimJoint1412YYY.children = new X3D.MFNode();

HAnimJoint1412ZZZ.children[0] = HAnimSegment1413;

let HAnimJoint1421 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1421.name = "r_metacarpophalangeal_1";
HAnimJoint1421.DEF = "hanim_r_metacarpophalangeal_1";
HAnimJoint1421.center = new X3D.SFVec3f([-0.1874,0.8256,0.0306]);
HAnimJoint1421.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1421.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1422 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1422.name = "r_carpal_proximal_phalanx_1";
HAnimSegment1422.DEF = "hanim_r_carpal_proximal_phalanx_1";
let Transform1423 = browser.currentScene.createNode("Transform");
Transform1423.translation = new X3D.SFVec3f([-0.1874,0.8256,0.0306]);
let Transform1424 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1425 = browser.currentScene.createNode("Shape");
Shape1425.USE = "HAnimJointShape";
Transform1424YYY.child = new X3D.undefined();

Transform1424ZZZ.child[0] = Shape1425;

Transform1423YYY.children = new X3D.MFNode();

Transform1423ZZZ.children[0] = Transform1424;

HAnimSegment1422YYY.children = new X3D.MFNode();

HAnimSegment1422ZZZ.children[0] = Transform1423;

let Shape1426 = browser.currentScene.createNode("Shape");
let LineSet1427 = browser.currentScene.createNode("LineSet");
LineSet1427.vertexCount = new X3D.MFInt32([2]);
let Coordinate1428 = browser.currentScene.createNode("Coordinate");
Coordinate1428.point = new X3D.MFVec3f([-0.1874,0.8256,0.0306,-0.1864,0.819,0.0506]);
coord = Coordinate1428;

//from r_metacarpophalangeal_1 to r_carpal_interphalangeal_1 vertices 2
let ColorRGBA1429 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1429.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1429;

geometry = LineSet1427;

HAnimSegment1422ZZZ.children[1] = Shape1426;

let HAnimSite1430 = browser.currentScene.createNode("HAnimSite");
HAnimSite1430.name = "r_carpal_distal_phalanx_1_tip";
HAnimSite1430.DEF = "hanim_r_carpal_distal_phalanx_1_tip";
let TouchSensor1431 = browser.currentScene.createNode("TouchSensor");
TouchSensor1431.description = "HAnimSite r_carpal_distal_phalanx_1_tip";
HAnimSite1430YYY.children = new X3D.MFNode();

HAnimSite1430ZZZ.children[0] = TouchSensor1431;

let Shape1432 = browser.currentScene.createNode("Shape");
Shape1432.USE = "HAnimSiteShape";
HAnimSite1430ZZZ.children[1] = Shape1432;

HAnimSegment1422ZZZ.children[2] = HAnimSite1430;

HAnimJoint1421YYY.children = new X3D.MFNode();

HAnimJoint1421ZZZ.children[0] = HAnimSegment1422;

let HAnimJoint1433 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1433.name = "r_carpal_interphalangeal_1";
HAnimJoint1433.DEF = "hanim_r_carpal_interphalangeal_1";
HAnimJoint1433.center = new X3D.SFVec3f([-0.1864,0.819,0.0506]);
HAnimJoint1433.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1433.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1421ZZZ.children[1] = HAnimJoint1433;

HAnimJoint1412ZZZ.children[1] = HAnimJoint1421;

HAnimJoint1403ZZZ.children[1] = HAnimJoint1412;

HAnimJoint1382ZZZ.children[1] = HAnimJoint1403;

let HAnimJoint1434 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1434.name = "r_midcarpal_2";
HAnimJoint1434.DEF = "hanim_r_midcarpal_2";
HAnimJoint1434.center = new X3D.SFVec3f([-8.0515,0.9225,0.8386]);
HAnimJoint1434.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1434.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1435 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1435.name = "r_trapezoid";
HAnimSegment1435.DEF = "hanim_r_trapezoid";
let Transform1436 = browser.currentScene.createNode("Transform");
Transform1436.translation = new X3D.SFVec3f([-8.0515,0.9225,0.8386]);
let Transform1437 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1438 = browser.currentScene.createNode("Shape");
Shape1438.USE = "HAnimJointShape";
Transform1437YYY.child = new X3D.undefined();

Transform1437ZZZ.child[0] = Shape1438;

Transform1436YYY.children = new X3D.MFNode();

Transform1436ZZZ.children[0] = Transform1437;

HAnimSegment1435YYY.children = new X3D.MFNode();

HAnimSegment1435ZZZ.children[0] = Transform1436;

let Shape1439 = browser.currentScene.createNode("Shape");
let LineSet1440 = browser.currentScene.createNode("LineSet");
LineSet1440.vertexCount = new X3D.MFInt32([2]);
let Coordinate1441 = browser.currentScene.createNode("Coordinate");
Coordinate1441.point = new X3D.MFVec3f([-8.0515,0.9225,0.8386,-0.1961,0.8055,-0.0218]);
coord = Coordinate1441;

//from r_midcarpal_2 to r_carpometacarpal_2 vertices 2
let ColorRGBA1442 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1442.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1442;

geometry = LineSet1440;

HAnimSegment1435ZZZ.children[1] = Shape1439;

let HAnimSite1443 = browser.currentScene.createNode("HAnimSite");
HAnimSite1443.name = "r_metacarpal_phalanx_2_pt";
HAnimSite1443.DEF = "hanim_r_metacarpal_phalanx_2_pt";
HAnimSite1443.translation = new X3D.SFVec3f([-0.1977,0.8169,-0.0177]);
let TouchSensor1444 = browser.currentScene.createNode("TouchSensor");
TouchSensor1444.description = "HAnimSite r_metacarpal_phalanx_2_pt";
HAnimSite1443YYY.children = new X3D.MFNode();

HAnimSite1443ZZZ.children[0] = TouchSensor1444;

let Shape1445 = browser.currentScene.createNode("Shape");
Shape1445.USE = "HAnimSiteShape";
HAnimSite1443ZZZ.children[1] = Shape1445;

HAnimSegment1435ZZZ.children[2] = HAnimSite1443;

HAnimJoint1434YYY.children = new X3D.MFNode();

HAnimJoint1434ZZZ.children[0] = HAnimSegment1435;

let HAnimJoint1446 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1446.name = "r_carpometacarpal_2";
HAnimJoint1446.DEF = "hanim_r_carpometacarpal_2";
HAnimJoint1446.center = new X3D.SFVec3f([-0.1961,0.8055,-0.0218]);
HAnimJoint1446.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1446.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1447 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1447.name = "r_metacarpal_2";
HAnimSegment1447.DEF = "hanim_r_metacarpal_2";
let Transform1448 = browser.currentScene.createNode("Transform");
Transform1448.translation = new X3D.SFVec3f([-0.1961,0.8055,-0.0218]);
let Transform1449 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1450 = browser.currentScene.createNode("Shape");
Shape1450.USE = "HAnimJointShape";
Transform1449YYY.child = new X3D.undefined();

Transform1449ZZZ.child[0] = Shape1450;

Transform1448YYY.children = new X3D.MFNode();

Transform1448ZZZ.children[0] = Transform1449;

HAnimSegment1447YYY.children = new X3D.MFNode();

HAnimSegment1447ZZZ.children[0] = Transform1448;

let Shape1451 = browser.currentScene.createNode("Shape");
let LineSet1452 = browser.currentScene.createNode("LineSet");
LineSet1452.vertexCount = new X3D.MFInt32([2]);
let Coordinate1453 = browser.currentScene.createNode("Coordinate");
Coordinate1453.point = new X3D.MFVec3f([-0.1961,0.8055,-0.0218,-0.1961,0.7846,-0.0218]);
coord = Coordinate1453;

//from r_carpometacarpal_2 to r_metacarpophalangeal_2 vertices 2
let ColorRGBA1454 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1454.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1454;

geometry = LineSet1452;

HAnimSegment1447ZZZ.children[1] = Shape1451;

HAnimJoint1446YYY.children = new X3D.MFNode();

HAnimJoint1446ZZZ.children[0] = HAnimSegment1447;

let HAnimJoint1455 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1455.name = "r_metacarpophalangeal_2";
HAnimJoint1455.DEF = "hanim_r_metacarpophalangeal_2";
HAnimJoint1455.center = new X3D.SFVec3f([-0.1961,0.7846,-0.0218]);
HAnimJoint1455.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1455.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1456 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1456.name = "r_carpal_proximal_phalanx_2";
HAnimSegment1456.DEF = "hanim_r_carpal_proximal_phalanx_2";
let Transform1457 = browser.currentScene.createNode("Transform");
Transform1457.translation = new X3D.SFVec3f([-0.1961,0.7846,-0.0218]);
let Transform1458 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1459 = browser.currentScene.createNode("Shape");
Shape1459.USE = "HAnimJointShape";
Transform1458YYY.child = new X3D.undefined();

Transform1458ZZZ.child[0] = Shape1459;

Transform1457YYY.children = new X3D.MFNode();

Transform1457ZZZ.children[0] = Transform1458;

HAnimSegment1456YYY.children = new X3D.MFNode();

HAnimSegment1456ZZZ.children[0] = Transform1457;

let Shape1460 = browser.currentScene.createNode("Shape");
let LineSet1461 = browser.currentScene.createNode("LineSet");
LineSet1461.vertexCount = new X3D.MFInt32([2]);
let Coordinate1462 = browser.currentScene.createNode("Coordinate");
Coordinate1462.point = new X3D.MFVec3f([-0.1961,0.7846,-0.0218,-0.1954,0.7393,-0.0185]);
coord = Coordinate1462;

//from r_metacarpophalangeal_2 to r_carpal_proximal_interphalangeal_2 vertices 2
let ColorRGBA1463 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1463.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1463;

geometry = LineSet1461;

HAnimSegment1456ZZZ.children[1] = Shape1460;

HAnimJoint1455YYY.children = new X3D.MFNode();

HAnimJoint1455ZZZ.children[0] = HAnimSegment1456;

let HAnimJoint1464 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1464.name = "r_carpal_proximal_interphalangeal_2";
HAnimJoint1464.DEF = "hanim_r_carpal_proximal_interphalangeal_2";
HAnimJoint1464.center = new X3D.SFVec3f([-0.1954,0.7393,-0.0185]);
HAnimJoint1464.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1464.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1465 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1465.name = "r_carpal_middle_phalanx_2";
HAnimSegment1465.DEF = "hanim_r_carpal_middle_phalanx_2";
let Transform1466 = browser.currentScene.createNode("Transform");
Transform1466.translation = new X3D.SFVec3f([-0.1954,0.7393,-0.0185]);
let Transform1467 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1468 = browser.currentScene.createNode("Shape");
Shape1468.USE = "HAnimJointShape";
Transform1467YYY.child = new X3D.undefined();

Transform1467ZZZ.child[0] = Shape1468;

Transform1466YYY.children = new X3D.MFNode();

Transform1466ZZZ.children[0] = Transform1467;

HAnimSegment1465YYY.children = new X3D.MFNode();

HAnimSegment1465ZZZ.children[0] = Transform1466;

let Shape1469 = browser.currentScene.createNode("Shape");
let LineSet1470 = browser.currentScene.createNode("LineSet");
LineSet1470.vertexCount = new X3D.MFInt32([2]);
let Coordinate1471 = browser.currentScene.createNode("Coordinate");
Coordinate1471.point = new X3D.MFVec3f([-0.1954,0.7393,-0.0185,-0.1945,0.7169,-0.0173]);
coord = Coordinate1471;

//from r_carpal_proximal_interphalangeal_2 to r_carpal_distal_interphalangeal_2 vertices 2
let ColorRGBA1472 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1472.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1472;

geometry = LineSet1470;

HAnimSegment1465ZZZ.children[1] = Shape1469;

let HAnimSite1473 = browser.currentScene.createNode("HAnimSite");
HAnimSite1473.name = "r_carpal_distal_phalanx_2_tip";
HAnimSite1473.DEF = "hanim_r_carpal_distal_phalanx_2_tip";
let TouchSensor1474 = browser.currentScene.createNode("TouchSensor");
TouchSensor1474.description = "HAnimSite r_carpal_distal_phalanx_2_tip";
HAnimSite1473YYY.children = new X3D.MFNode();

HAnimSite1473ZZZ.children[0] = TouchSensor1474;

let Shape1475 = browser.currentScene.createNode("Shape");
Shape1475.USE = "HAnimSiteShape";
HAnimSite1473ZZZ.children[1] = Shape1475;

HAnimSegment1465ZZZ.children[2] = HAnimSite1473;

let HAnimSite1476 = browser.currentScene.createNode("HAnimSite");
HAnimSite1476.name = "r_dactylion_pt";
HAnimSite1476.DEF = "hanim_r_dactylion_pt";
HAnimSite1476.translation = new X3D.SFVec3f([-0.1941,0.6772,-0.0423]);
let TouchSensor1477 = browser.currentScene.createNode("TouchSensor");
TouchSensor1477.description = "HAnimSite r_dactylion_pt";
HAnimSite1476YYY.children = new X3D.MFNode();

HAnimSite1476ZZZ.children[0] = TouchSensor1477;

let Shape1478 = browser.currentScene.createNode("Shape");
Shape1478.USE = "HAnimSiteShape";
HAnimSite1476ZZZ.children[1] = Shape1478;

HAnimSegment1465ZZZ.children[3] = HAnimSite1476;

HAnimJoint1464YYY.children = new X3D.MFNode();

HAnimJoint1464ZZZ.children[0] = HAnimSegment1465;

let HAnimJoint1479 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1479.name = "r_carpal_distal_interphalangeal_2";
HAnimJoint1479.DEF = "hanim_r_carpal_distal_interphalangeal_2";
HAnimJoint1479.center = new X3D.SFVec3f([-0.1945,0.7169,-0.0173]);
HAnimJoint1479.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1479.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1464ZZZ.children[1] = HAnimJoint1479;

HAnimJoint1455ZZZ.children[1] = HAnimJoint1464;

HAnimJoint1446ZZZ.children[1] = HAnimJoint1455;

HAnimJoint1434ZZZ.children[1] = HAnimJoint1446;

HAnimJoint1382ZZZ.children[2] = HAnimJoint1434;

let HAnimJoint1480 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1480.name = "r_midcarpal_3";
HAnimJoint1480.DEF = "hanim_r_midcarpal_3";
HAnimJoint1480.center = new X3D.SFVec3f([-8.0405,0.9246,0.2513]);
HAnimJoint1480.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1480.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1481 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1481.name = "r_capitate";
HAnimSegment1481.DEF = "hanim_r_capitate";
let Transform1482 = browser.currentScene.createNode("Transform");
Transform1482.translation = new X3D.SFVec3f([-8.0405,0.9246,0.2513]);
let Transform1483 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1484 = browser.currentScene.createNode("Shape");
Shape1484.USE = "HAnimJointShape";
Transform1483YYY.child = new X3D.undefined();

Transform1483ZZZ.child[0] = Shape1484;

Transform1482YYY.children = new X3D.MFNode();

Transform1482ZZZ.children[0] = Transform1483;

HAnimSegment1481YYY.children = new X3D.MFNode();

HAnimSegment1481ZZZ.children[0] = Transform1482;

let Shape1485 = browser.currentScene.createNode("Shape");
let LineSet1486 = browser.currentScene.createNode("LineSet");
LineSet1486.vertexCount = new X3D.MFInt32([2]);
let Coordinate1487 = browser.currentScene.createNode("Coordinate");
Coordinate1487.point = new X3D.MFVec3f([-8.0405,0.9246,0.2513,-0.1972,0.806,-0.0468]);
coord = Coordinate1487;

//from r_midcarpal_3 to r_carpometacarpal_3 vertices 2
let ColorRGBA1488 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1488.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1488;

geometry = LineSet1486;

HAnimSegment1481ZZZ.children[1] = Shape1485;

let HAnimSite1489 = browser.currentScene.createNode("HAnimSite");
HAnimSite1489.name = "r_metacarpal_phalanx_3_pt";
HAnimSite1489.DEF = "hanim_r_metacarpal_phalanx_3_pt";
let TouchSensor1490 = browser.currentScene.createNode("TouchSensor");
TouchSensor1490.description = "HAnimSite r_metacarpal_phalanx_3_pt";
HAnimSite1489YYY.children = new X3D.MFNode();

HAnimSite1489ZZZ.children[0] = TouchSensor1490;

let Shape1491 = browser.currentScene.createNode("Shape");
Shape1491.USE = "HAnimSiteShape";
HAnimSite1489ZZZ.children[1] = Shape1491;

HAnimSegment1481ZZZ.children[2] = HAnimSite1489;

HAnimJoint1480YYY.children = new X3D.MFNode();

HAnimJoint1480ZZZ.children[0] = HAnimSegment1481;

let HAnimJoint1492 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1492.name = "r_carpometacarpal_3";
HAnimJoint1492.DEF = "hanim_r_carpometacarpal_3";
HAnimJoint1492.center = new X3D.SFVec3f([-0.1972,0.806,-0.0468]);
HAnimJoint1492.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1492.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1493 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1493.name = "r_metacarpal_3";
HAnimSegment1493.DEF = "hanim_r_metacarpal_3";
let Transform1494 = browser.currentScene.createNode("Transform");
Transform1494.translation = new X3D.SFVec3f([-0.1972,0.806,-0.0468]);
let Transform1495 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1496 = browser.currentScene.createNode("Shape");
Shape1496.USE = "HAnimJointShape";
Transform1495YYY.child = new X3D.undefined();

Transform1495ZZZ.child[0] = Shape1496;

Transform1494YYY.children = new X3D.MFNode();

Transform1494ZZZ.children[0] = Transform1495;

HAnimSegment1493YYY.children = new X3D.MFNode();

HAnimSegment1493ZZZ.children[0] = Transform1494;

let Shape1497 = browser.currentScene.createNode("Shape");
let LineSet1498 = browser.currentScene.createNode("LineSet");
LineSet1498.vertexCount = new X3D.MFInt32([2]);
let Coordinate1499 = browser.currentScene.createNode("Coordinate");
Coordinate1499.point = new X3D.MFVec3f([-0.1972,0.806,-0.0468,-0.1972,0.7849,-0.0468]);
coord = Coordinate1499;

//from r_carpometacarpal_3 to r_metacarpophalangeal_3 vertices 2
let ColorRGBA1500 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1500.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1500;

geometry = LineSet1498;

HAnimSegment1493ZZZ.children[1] = Shape1497;

HAnimJoint1492YYY.children = new X3D.MFNode();

HAnimJoint1492ZZZ.children[0] = HAnimSegment1493;

let HAnimJoint1501 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1501.name = "r_metacarpophalangeal_3";
HAnimJoint1501.DEF = "hanim_r_metacarpophalangeal_3";
HAnimJoint1501.center = new X3D.SFVec3f([-0.1972,0.7849,-0.0468]);
HAnimJoint1501.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1501.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1502 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1502.name = "r_carpal_proximal_phalanx_3";
HAnimSegment1502.DEF = "hanim_r_carpal_proximal_phalanx_3";
let Transform1503 = browser.currentScene.createNode("Transform");
Transform1503.translation = new X3D.SFVec3f([-0.1972,0.7849,-0.0468]);
let Transform1504 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1505 = browser.currentScene.createNode("Shape");
Shape1505.USE = "HAnimJointShape";
Transform1504YYY.child = new X3D.undefined();

Transform1504ZZZ.child[0] = Shape1505;

Transform1503YYY.children = new X3D.MFNode();

Transform1503ZZZ.children[0] = Transform1504;

HAnimSegment1502YYY.children = new X3D.MFNode();

HAnimSegment1502ZZZ.children[0] = Transform1503;

let Shape1506 = browser.currentScene.createNode("Shape");
let LineSet1507 = browser.currentScene.createNode("LineSet");
LineSet1507.vertexCount = new X3D.MFInt32([2]);
let Coordinate1508 = browser.currentScene.createNode("Coordinate");
Coordinate1508.point = new X3D.MFVec3f([-0.1972,0.7849,-0.0468,-0.195,0.7304,-0.0441]);
coord = Coordinate1508;

//from r_metacarpophalangeal_3 to r_carpal_proximal_interphalangeal_3 vertices 2
let ColorRGBA1509 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1509.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1509;

geometry = LineSet1507;

HAnimSegment1502ZZZ.children[1] = Shape1506;

HAnimJoint1501YYY.children = new X3D.MFNode();

HAnimJoint1501ZZZ.children[0] = HAnimSegment1502;

let HAnimJoint1510 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1510.name = "r_carpal_proximal_interphalangeal_3";
HAnimJoint1510.DEF = "hanim_r_carpal_proximal_interphalangeal_3";
HAnimJoint1510.center = new X3D.SFVec3f([-0.195,0.7304,-0.0441]);
HAnimJoint1510.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1510.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1511 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1511.name = "r_carpal_middle_phalanx_3";
HAnimSegment1511.DEF = "hanim_r_carpal_middle_phalanx_3";
let Transform1512 = browser.currentScene.createNode("Transform");
Transform1512.translation = new X3D.SFVec3f([-0.195,0.7304,-0.0441]);
let Transform1513 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1514 = browser.currentScene.createNode("Shape");
Shape1514.USE = "HAnimJointShape";
Transform1513YYY.child = new X3D.undefined();

Transform1513ZZZ.child[0] = Shape1514;

Transform1512YYY.children = new X3D.MFNode();

Transform1512ZZZ.children[0] = Transform1513;

HAnimSegment1511YYY.children = new X3D.MFNode();

HAnimSegment1511ZZZ.children[0] = Transform1512;

let Shape1515 = browser.currentScene.createNode("Shape");
let LineSet1516 = browser.currentScene.createNode("LineSet");
LineSet1516.vertexCount = new X3D.MFInt32([2]);
let Coordinate1517 = browser.currentScene.createNode("Coordinate");
Coordinate1517.point = new X3D.MFVec3f([-0.195,0.7304,-0.0441,-0.1939,0.7042,-0.0432]);
coord = Coordinate1517;

//from r_carpal_proximal_interphalangeal_3 to r_carpal_distal_interphalangeal_3 vertices 2
let ColorRGBA1518 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1518.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1518;

geometry = LineSet1516;

HAnimSegment1511ZZZ.children[1] = Shape1515;

let HAnimSite1519 = browser.currentScene.createNode("HAnimSite");
HAnimSite1519.name = "r_carpal_distal_phalanx_3_tip";
HAnimSite1519.DEF = "hanim_r_carpal_distal_phalanx_3_tip";
let TouchSensor1520 = browser.currentScene.createNode("TouchSensor");
TouchSensor1520.description = "HAnimSite r_carpal_distal_phalanx_3_tip";
HAnimSite1519YYY.children = new X3D.MFNode();

HAnimSite1519ZZZ.children[0] = TouchSensor1520;

let Shape1521 = browser.currentScene.createNode("Shape");
Shape1521.USE = "HAnimSiteShape";
HAnimSite1519ZZZ.children[1] = Shape1521;

HAnimSegment1511ZZZ.children[2] = HAnimSite1519;

HAnimJoint1510YYY.children = new X3D.MFNode();

HAnimJoint1510ZZZ.children[0] = HAnimSegment1511;

let HAnimJoint1522 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1522.name = "r_carpal_distal_interphalangeal_3";
HAnimJoint1522.DEF = "hanim_r_carpal_distal_interphalangeal_3";
HAnimJoint1522.center = new X3D.SFVec3f([-0.1939,0.7042,-0.0432]);
HAnimJoint1522.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1522.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1510ZZZ.children[1] = HAnimJoint1522;

HAnimJoint1501ZZZ.children[1] = HAnimJoint1510;

HAnimJoint1492ZZZ.children[1] = HAnimJoint1501;

HAnimJoint1480ZZZ.children[1] = HAnimJoint1492;

HAnimJoint1382ZZZ.children[3] = HAnimJoint1480;

let HAnimJoint1523 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1523.name = "r_midcarpal_4_5";
HAnimJoint1523.DEF = "hanim_r_midcarpal_4_5";
HAnimJoint1523.center = new X3D.SFVec3f([-8.0405,0.921,-0.6795]);
HAnimJoint1523.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1523.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1524 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1524.name = "r_hamate";
HAnimSegment1524.DEF = "hanim_r_hamate";
let Transform1525 = browser.currentScene.createNode("Transform");
Transform1525.translation = new X3D.SFVec3f([-8.0405,0.921,-0.6795]);
let Transform1526 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1527 = browser.currentScene.createNode("Shape");
Shape1527.USE = "HAnimJointShape";
Transform1526YYY.child = new X3D.undefined();

Transform1526ZZZ.child[0] = Shape1527;

Transform1525YYY.children = new X3D.MFNode();

Transform1525ZZZ.children[0] = Transform1526;

HAnimSegment1524YYY.children = new X3D.MFNode();

HAnimSegment1524ZZZ.children[0] = Transform1525;

let Shape1528 = browser.currentScene.createNode("Shape");
let LineSet1529 = browser.currentScene.createNode("LineSet");
LineSet1529.vertexCount = new X3D.MFInt32([2]);
let Coordinate1530 = browser.currentScene.createNode("Coordinate");
Coordinate1530.point = new X3D.MFVec3f([-8.0405,0.921,-0.6795,-0.1951,0.8049,-0.0732]);
coord = Coordinate1530;

//from r_midcarpal_4_5 to r_carpometacarpal_4 vertices 2
let ColorRGBA1531 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1531.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1531;

geometry = LineSet1529;

HAnimSegment1524ZZZ.children[1] = Shape1528;

let Shape1532 = browser.currentScene.createNode("Shape");
let LineSet1533 = browser.currentScene.createNode("LineSet");
LineSet1533.vertexCount = new X3D.MFInt32([2]);
let Coordinate1534 = browser.currentScene.createNode("Coordinate");
Coordinate1534.point = new X3D.MFVec3f([-8.0405,0.921,-0.6795,-0.1926,0.8096,-0.0975]);
coord = Coordinate1534;

//from r_midcarpal_4_5 to r_carpometacarpal_5 vertices 2
let ColorRGBA1535 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1535.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1535;

geometry = LineSet1533;

HAnimSegment1524ZZZ.children[2] = Shape1532;

let HAnimSite1536 = browser.currentScene.createNode("HAnimSite");
HAnimSite1536.name = "r_metacarpal_phalanx_5_pt";
HAnimSite1536.DEF = "hanim_r_metacarpal_phalanx_5_pt";
HAnimSite1536.translation = new X3D.SFVec3f([-0.1929,0.789,-0.1064]);
let TouchSensor1537 = browser.currentScene.createNode("TouchSensor");
TouchSensor1537.description = "HAnimSite r_metacarpal_phalanx_5_pt";
HAnimSite1536YYY.children = new X3D.MFNode();

HAnimSite1536ZZZ.children[0] = TouchSensor1537;

let Shape1538 = browser.currentScene.createNode("Shape");
Shape1538.USE = "HAnimSiteShape";
HAnimSite1536ZZZ.children[1] = Shape1538;

HAnimSegment1524ZZZ.children[3] = HAnimSite1536;

HAnimJoint1523YYY.children = new X3D.MFNode();

HAnimJoint1523ZZZ.children[0] = HAnimSegment1524;

let HAnimJoint1539 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1539.name = "r_carpometacarpal_4";
HAnimJoint1539.DEF = "hanim_r_carpometacarpal_4";
HAnimJoint1539.center = new X3D.SFVec3f([-0.1951,0.8049,-0.0732]);
HAnimJoint1539.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1539.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1540 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1540.name = "r_metacarpal_4";
HAnimSegment1540.DEF = "hanim_r_metacarpal_4";
let Transform1541 = browser.currentScene.createNode("Transform");
Transform1541.translation = new X3D.SFVec3f([-0.1951,0.8049,-0.0732]);
let Transform1542 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1543 = browser.currentScene.createNode("Shape");
Shape1543.USE = "HAnimJointShape";
Transform1542YYY.child = new X3D.undefined();

Transform1542ZZZ.child[0] = Shape1543;

Transform1541YYY.children = new X3D.MFNode();

Transform1541ZZZ.children[0] = Transform1542;

HAnimSegment1540YYY.children = new X3D.MFNode();

HAnimSegment1540ZZZ.children[0] = Transform1541;

let Shape1544 = browser.currentScene.createNode("Shape");
let LineSet1545 = browser.currentScene.createNode("LineSet");
LineSet1545.vertexCount = new X3D.MFInt32([2]);
let Coordinate1546 = browser.currentScene.createNode("Coordinate");
Coordinate1546.point = new X3D.MFVec3f([-0.1951,0.8049,-0.0732,-0.1951,0.7845,-0.0732]);
coord = Coordinate1546;

//from r_carpometacarpal_4 to r_metacarpophalangeal_4 vertices 2
let ColorRGBA1547 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1547.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1547;

geometry = LineSet1545;

HAnimSegment1540ZZZ.children[1] = Shape1544;

HAnimJoint1539YYY.children = new X3D.MFNode();

HAnimJoint1539ZZZ.children[0] = HAnimSegment1540;

let HAnimJoint1548 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1548.name = "r_metacarpophalangeal_4";
HAnimJoint1548.DEF = "hanim_r_metacarpophalangeal_4";
HAnimJoint1548.center = new X3D.SFVec3f([-0.1951,0.7845,-0.0732]);
HAnimJoint1548.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1548.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1549 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1549.name = "r_carpal_proximal_phalanx_4";
HAnimSegment1549.DEF = "hanim_r_carpal_proximal_phalanx_4";
let Transform1550 = browser.currentScene.createNode("Transform");
Transform1550.translation = new X3D.SFVec3f([-0.1951,0.7845,-0.0732]);
let Transform1551 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1552 = browser.currentScene.createNode("Shape");
Shape1552.USE = "HAnimJointShape";
Transform1551YYY.child = new X3D.undefined();

Transform1551ZZZ.child[0] = Shape1552;

Transform1550YYY.children = new X3D.MFNode();

Transform1550ZZZ.children[0] = Transform1551;

HAnimSegment1549YYY.children = new X3D.MFNode();

HAnimSegment1549ZZZ.children[0] = Transform1550;

let Shape1553 = browser.currentScene.createNode("Shape");
let LineSet1554 = browser.currentScene.createNode("LineSet");
LineSet1554.vertexCount = new X3D.MFInt32([2]);
let Coordinate1555 = browser.currentScene.createNode("Coordinate");
Coordinate1555.point = new X3D.MFVec3f([-0.1951,0.7845,-0.0732,-0.192,0.7318,-0.0716]);
coord = Coordinate1555;

//from r_metacarpophalangeal_4 to r_carpal_proximal_interphalangeal_4 vertices 2
let ColorRGBA1556 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1556.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1556;

geometry = LineSet1554;

HAnimSegment1549ZZZ.children[1] = Shape1553;

HAnimJoint1548YYY.children = new X3D.MFNode();

HAnimJoint1548ZZZ.children[0] = HAnimSegment1549;

let HAnimJoint1557 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1557.name = "r_carpal_proximal_interphalangeal_4";
HAnimJoint1557.DEF = "hanim_r_carpal_proximal_interphalangeal_4";
HAnimJoint1557.center = new X3D.SFVec3f([-0.192,0.7318,-0.0716]);
HAnimJoint1557.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1557.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1558 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1558.name = "r_carpal_middle_phalanx_4";
HAnimSegment1558.DEF = "hanim_r_carpal_middle_phalanx_4";
let Transform1559 = browser.currentScene.createNode("Transform");
Transform1559.translation = new X3D.SFVec3f([-0.192,0.7318,-0.0716]);
let Transform1560 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1561 = browser.currentScene.createNode("Shape");
Shape1561.USE = "HAnimJointShape";
Transform1560YYY.child = new X3D.undefined();

Transform1560ZZZ.child[0] = Shape1561;

Transform1559YYY.children = new X3D.MFNode();

Transform1559ZZZ.children[0] = Transform1560;

HAnimSegment1558YYY.children = new X3D.MFNode();

HAnimSegment1558ZZZ.children[0] = Transform1559;

let Shape1562 = browser.currentScene.createNode("Shape");
let LineSet1563 = browser.currentScene.createNode("LineSet");
LineSet1563.vertexCount = new X3D.MFInt32([2]);
let Coordinate1564 = browser.currentScene.createNode("Coordinate");
Coordinate1564.point = new X3D.MFVec3f([-0.192,0.7318,-0.0716,-0.1908,0.7077,-0.0706]);
coord = Coordinate1564;

//from r_carpal_proximal_interphalangeal_4 to r_carpal_distal_interphalangeal_4 vertices 2
let ColorRGBA1565 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1565.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1565;

geometry = LineSet1563;

HAnimSegment1558ZZZ.children[1] = Shape1562;

let HAnimSite1566 = browser.currentScene.createNode("HAnimSite");
HAnimSite1566.name = "r_carpal_distal_phalanx_4_tip";
HAnimSite1566.DEF = "hanim_r_carpal_distal_phalanx_4_tip";
let TouchSensor1567 = browser.currentScene.createNode("TouchSensor");
TouchSensor1567.description = "HAnimSite r_carpal_distal_phalanx_4_tip";
HAnimSite1566YYY.children = new X3D.MFNode();

HAnimSite1566ZZZ.children[0] = TouchSensor1567;

let Shape1568 = browser.currentScene.createNode("Shape");
Shape1568.USE = "HAnimSiteShape";
HAnimSite1566ZZZ.children[1] = Shape1568;

HAnimSegment1558ZZZ.children[2] = HAnimSite1566;

HAnimJoint1557YYY.children = new X3D.MFNode();

HAnimJoint1557ZZZ.children[0] = HAnimSegment1558;

let HAnimJoint1569 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1569.name = "r_carpal_distal_interphalangeal_4";
HAnimJoint1569.DEF = "hanim_r_carpal_distal_interphalangeal_4";
HAnimJoint1569.center = new X3D.SFVec3f([-0.1908,0.7077,-0.0706]);
HAnimJoint1569.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1569.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1557ZZZ.children[1] = HAnimJoint1569;

HAnimJoint1548ZZZ.children[1] = HAnimJoint1557;

HAnimJoint1539ZZZ.children[1] = HAnimJoint1548;

HAnimJoint1523ZZZ.children[1] = HAnimJoint1539;

let HAnimJoint1570 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1570.name = "r_carpometacarpal_5";
HAnimJoint1570.DEF = "hanim_r_carpometacarpal_5";
HAnimJoint1570.center = new X3D.SFVec3f([-0.1926,0.8096,-0.0975]);
HAnimJoint1570.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1570.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1571 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1571.name = "r_metacarpal_5";
HAnimSegment1571.DEF = "hanim_r_metacarpal_5";
let Transform1572 = browser.currentScene.createNode("Transform");
Transform1572.translation = new X3D.SFVec3f([-0.1926,0.8096,-0.0975]);
let Transform1573 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1574 = browser.currentScene.createNode("Shape");
Shape1574.USE = "HAnimJointShape";
Transform1573YYY.child = new X3D.undefined();

Transform1573ZZZ.child[0] = Shape1574;

Transform1572YYY.children = new X3D.MFNode();

Transform1572ZZZ.children[0] = Transform1573;

HAnimSegment1571YYY.children = new X3D.MFNode();

HAnimSegment1571ZZZ.children[0] = Transform1572;

let Shape1575 = browser.currentScene.createNode("Shape");
let LineSet1576 = browser.currentScene.createNode("LineSet");
LineSet1576.vertexCount = new X3D.MFInt32([2]);
let Coordinate1577 = browser.currentScene.createNode("Coordinate");
Coordinate1577.point = new X3D.MFVec3f([-0.1926,0.8096,-0.0975,-0.1926,0.7896,-0.0975]);
coord = Coordinate1577;

//from r_carpometacarpal_5 to r_metacarpophalangeal_5 vertices 2
let ColorRGBA1578 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1578.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1578;

geometry = LineSet1576;

HAnimSegment1571ZZZ.children[1] = Shape1575;

HAnimJoint1570YYY.children = new X3D.MFNode();

HAnimJoint1570ZZZ.children[0] = HAnimSegment1571;

let HAnimJoint1579 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1579.name = "r_metacarpophalangeal_5";
HAnimJoint1579.DEF = "hanim_r_metacarpophalangeal_5";
HAnimJoint1579.center = new X3D.SFVec3f([-0.1926,0.7896,-0.0975]);
HAnimJoint1579.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1579.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1580 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1580.name = "r_carpal_proximal_phalanx_5";
HAnimSegment1580.DEF = "hanim_r_carpal_proximal_phalanx_5";
let Transform1581 = browser.currentScene.createNode("Transform");
Transform1581.translation = new X3D.SFVec3f([-0.1926,0.7896,-0.0975]);
let Transform1582 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1583 = browser.currentScene.createNode("Shape");
Shape1583.USE = "HAnimJointShape";
Transform1582YYY.child = new X3D.undefined();

Transform1582ZZZ.child[0] = Shape1583;

Transform1581YYY.children = new X3D.MFNode();

Transform1581ZZZ.children[0] = Transform1582;

HAnimSegment1580YYY.children = new X3D.MFNode();

HAnimSegment1580ZZZ.children[0] = Transform1581;

let Shape1584 = browser.currentScene.createNode("Shape");
let LineSet1585 = browser.currentScene.createNode("LineSet");
LineSet1585.vertexCount = new X3D.MFInt32([2]);
let Coordinate1586 = browser.currentScene.createNode("Coordinate");
Coordinate1586.point = new X3D.MFVec3f([-0.1926,0.7896,-0.0975,-0.1902,0.7483,-0.0963]);
coord = Coordinate1586;

//from r_metacarpophalangeal_5 to r_carpal_proximal_interphalangeal_5 vertices 2
let ColorRGBA1587 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1587.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1587;

geometry = LineSet1585;

HAnimSegment1580ZZZ.children[1] = Shape1584;

HAnimJoint1579YYY.children = new X3D.MFNode();

HAnimJoint1579ZZZ.children[0] = HAnimSegment1580;

let HAnimJoint1588 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1588.name = "r_carpal_proximal_interphalangeal_5";
HAnimJoint1588.DEF = "hanim_r_carpal_proximal_interphalangeal_5";
HAnimJoint1588.center = new X3D.SFVec3f([-0.1902,0.7483,-0.0963]);
HAnimJoint1588.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1588.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1589 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1589.name = "r_carpal_middle_phalanx_5";
HAnimSegment1589.DEF = "hanim_r_carpal_middle_phalanx_5";
let Transform1590 = browser.currentScene.createNode("Transform");
Transform1590.translation = new X3D.SFVec3f([-0.1902,0.7483,-0.0963]);
let Transform1591 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1592 = browser.currentScene.createNode("Shape");
Shape1592.USE = "HAnimJointShape";
Transform1591YYY.child = new X3D.undefined();

Transform1591ZZZ.child[0] = Shape1592;

Transform1590YYY.children = new X3D.MFNode();

Transform1590ZZZ.children[0] = Transform1591;

HAnimSegment1589YYY.children = new X3D.MFNode();

HAnimSegment1589ZZZ.children[0] = Transform1590;

let Shape1593 = browser.currentScene.createNode("Shape");
let LineSet1594 = browser.currentScene.createNode("LineSet");
LineSet1594.vertexCount = new X3D.MFInt32([2]);
let Coordinate1595 = browser.currentScene.createNode("Coordinate");
Coordinate1595.point = new X3D.MFVec3f([-0.1902,0.7483,-0.0963,-0.1908,0.754,-0.096]);
coord = Coordinate1595;

//from r_carpal_proximal_interphalangeal_5 to r_carpal_distal_interphalangeal_5 vertices 2
let ColorRGBA1596 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1596.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1596;

geometry = LineSet1594;

HAnimSegment1589ZZZ.children[1] = Shape1593;

let HAnimSite1597 = browser.currentScene.createNode("HAnimSite");
HAnimSite1597.name = "r_carpal_distal_phalanx_5_tip";
HAnimSite1597.DEF = "hanim_r_carpal_distal_phalanx_5_tip";
let TouchSensor1598 = browser.currentScene.createNode("TouchSensor");
TouchSensor1598.description = "HAnimSite r_carpal_distal_phalanx_5_tip";
HAnimSite1597YYY.children = new X3D.MFNode();

HAnimSite1597ZZZ.children[0] = TouchSensor1598;

let Shape1599 = browser.currentScene.createNode("Shape");
Shape1599.USE = "HAnimSiteShape";
HAnimSite1597ZZZ.children[1] = Shape1599;

HAnimSegment1589ZZZ.children[2] = HAnimSite1597;

HAnimJoint1588YYY.children = new X3D.MFNode();

HAnimJoint1588ZZZ.children[0] = HAnimSegment1589;

let HAnimJoint1600 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1600.name = "r_carpal_distal_interphalangeal_5";
HAnimJoint1600.DEF = "hanim_r_carpal_distal_interphalangeal_5";
HAnimJoint1600.center = new X3D.SFVec3f([-0.1908,0.754,-0.096]);
HAnimJoint1600.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1600.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1588ZZZ.children[1] = HAnimJoint1600;

HAnimJoint1579ZZZ.children[1] = HAnimJoint1588;

HAnimJoint1570ZZZ.children[1] = HAnimJoint1579;

HAnimJoint1523ZZZ.children[2] = HAnimJoint1570;

HAnimJoint1382ZZZ.children[4] = HAnimJoint1523;

HAnimJoint1370ZZZ.children[1] = HAnimJoint1382;

HAnimJoint1349ZZZ.children[1] = HAnimJoint1370;

HAnimJoint1334ZZZ.children[1] = HAnimJoint1349;

HAnimJoint1325ZZZ.children[1] = HAnimJoint1334;

HAnimJoint845ZZZ.children[3] = HAnimJoint1325;

HAnimJoint830ZZZ.children[1] = HAnimJoint845;

HAnimJoint821ZZZ.children[1] = HAnimJoint830;

HAnimJoint812ZZZ.children[1] = HAnimJoint821;

HAnimJoint803ZZZ.children[1] = HAnimJoint812;

HAnimJoint791ZZZ.children[1] = HAnimJoint803;

HAnimJoint770ZZZ.children[1] = HAnimJoint791;

HAnimJoint761ZZZ.children[1] = HAnimJoint770;

HAnimJoint752ZZZ.children[1] = HAnimJoint761;

HAnimJoint737ZZZ.children[1] = HAnimJoint752;

HAnimJoint725ZZZ.children[1] = HAnimJoint737;

HAnimJoint716ZZZ.children[1] = HAnimJoint725;

HAnimJoint707ZZZ.children[1] = HAnimJoint716;

HAnimJoint698ZZZ.children[1] = HAnimJoint707;

HAnimJoint680ZZZ.children[1] = HAnimJoint698;

HAnimJoint671ZZZ.children[1] = HAnimJoint680;

HAnimJoint662ZZZ.children[1] = HAnimJoint671;

HAnimJoint45ZZZ.children[2] = HAnimJoint662;

HAnimHumanoid43.joints = new X3D.MFNode();

HAnimHumanoid43XXX.joints[0] = HAnimJoint45;

let HAnimJoint1601 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1601.USE = "hanim_humanoid_root";
joints[1] = HAnimJoint1601;

let HAnimJoint1602 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1602.USE = "hanim_sacroiliac";
joints[2] = HAnimJoint1602;

let HAnimJoint1603 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1603.USE = "hanim_l_hip";
joints[3] = HAnimJoint1603;

let HAnimJoint1604 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1604.USE = "hanim_l_knee";
joints[4] = HAnimJoint1604;

let HAnimJoint1605 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1605.USE = "hanim_l_talocrural";
joints[5] = HAnimJoint1605;

let HAnimJoint1606 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1606.USE = "hanim_l_talocalcaneonavicular";
joints[6] = HAnimJoint1606;

let HAnimJoint1607 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1607.USE = "hanim_l_cuneonavicular_1";
joints[7] = HAnimJoint1607;

let HAnimJoint1608 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1608.USE = "hanim_l_tarsometatarsal_1";
joints[8] = HAnimJoint1608;

let HAnimJoint1609 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1609.USE = "hanim_l_metatarsophalangeal_1";
joints[9] = HAnimJoint1609;

let HAnimJoint1610 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1610.USE = "hanim_l_tarsal_interphalangeal_1";
joints[10] = HAnimJoint1610;

let HAnimJoint1611 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1611.USE = "hanim_l_cuneonavicular_2";
joints[11] = HAnimJoint1611;

let HAnimJoint1612 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1612.USE = "hanim_l_tarsometatarsal_2";
joints[12] = HAnimJoint1612;

let HAnimJoint1613 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1613.USE = "hanim_l_metatarsophalangeal_2";
joints[13] = HAnimJoint1613;

let HAnimJoint1614 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1614.USE = "hanim_l_tarsal_proximal_interphalangeal_2";
joints[14] = HAnimJoint1614;

let HAnimJoint1615 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1615.USE = "hanim_l_tarsal_distal_interphalangeal_2";
joints[15] = HAnimJoint1615;

let HAnimJoint1616 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1616.USE = "hanim_l_cuneonavicular_3";
joints[16] = HAnimJoint1616;

let HAnimJoint1617 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1617.USE = "hanim_l_tarsometatarsal_3";
joints[17] = HAnimJoint1617;

let HAnimJoint1618 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1618.USE = "hanim_l_metatarsophalangeal_3";
joints[18] = HAnimJoint1618;

let HAnimJoint1619 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1619.USE = "hanim_l_tarsal_proximal_interphalangeal_3";
joints[19] = HAnimJoint1619;

let HAnimJoint1620 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1620.USE = "hanim_l_tarsal_distal_interphalangeal_3";
joints[20] = HAnimJoint1620;

let HAnimJoint1621 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1621.USE = "hanim_l_calcaneocuboid";
joints[21] = HAnimJoint1621;

let HAnimJoint1622 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1622.USE = "hanim_l_transversetarsal";
joints[22] = HAnimJoint1622;

let HAnimJoint1623 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1623.USE = "hanim_l_tarsometatarsal_4";
joints[23] = HAnimJoint1623;

let HAnimJoint1624 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1624.USE = "hanim_l_metatarsophalangeal_4";
joints[24] = HAnimJoint1624;

let HAnimJoint1625 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1625.USE = "hanim_l_tarsal_proximal_interphalangeal_4";
joints[25] = HAnimJoint1625;

let HAnimJoint1626 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1626.USE = "hanim_l_tarsal_distal_interphalangeal_4";
joints[26] = HAnimJoint1626;

let HAnimJoint1627 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1627.USE = "hanim_l_tarsometatarsal_5";
joints[27] = HAnimJoint1627;

let HAnimJoint1628 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1628.USE = "hanim_l_metatarsophalangeal_5";
joints[28] = HAnimJoint1628;

let HAnimJoint1629 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1629.USE = "hanim_l_tarsal_proximal_interphalangeal_5";
joints[29] = HAnimJoint1629;

let HAnimJoint1630 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1630.USE = "hanim_l_tarsal_distal_interphalangeal_5";
joints[30] = HAnimJoint1630;

let HAnimJoint1631 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1631.USE = "hanim_r_hip";
joints[31] = HAnimJoint1631;

let HAnimJoint1632 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1632.USE = "hanim_r_knee";
joints[32] = HAnimJoint1632;

let HAnimJoint1633 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1633.USE = "hanim_r_talocrural";
joints[33] = HAnimJoint1633;

let HAnimJoint1634 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1634.USE = "hanim_r_talocalcaneonavicular";
joints[34] = HAnimJoint1634;

let HAnimJoint1635 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1635.USE = "hanim_r_cuneonavicular_1";
joints[35] = HAnimJoint1635;

let HAnimJoint1636 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1636.USE = "hanim_r_tarsometatarsal_1";
joints[36] = HAnimJoint1636;

let HAnimJoint1637 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1637.USE = "hanim_r_metatarsophalangeal_1";
joints[37] = HAnimJoint1637;

let HAnimJoint1638 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1638.USE = "hanim_r_tarsal_interphalangeal_1";
joints[38] = HAnimJoint1638;

let HAnimJoint1639 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1639.USE = "hanim_r_cuneonavicular_2";
joints[39] = HAnimJoint1639;

let HAnimJoint1640 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1640.USE = "hanim_r_tarsometatarsal_2";
joints[40] = HAnimJoint1640;

let HAnimJoint1641 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1641.USE = "hanim_r_metatarsophalangeal_2";
joints[41] = HAnimJoint1641;

let HAnimJoint1642 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1642.USE = "hanim_r_tarsal_proximal_interphalangeal_2";
joints[42] = HAnimJoint1642;

let HAnimJoint1643 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1643.USE = "hanim_r_tarsal_distal_interphalangeal_2";
joints[43] = HAnimJoint1643;

let HAnimJoint1644 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1644.USE = "hanim_r_cuneonavicular_3";
joints[44] = HAnimJoint1644;

let HAnimJoint1645 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1645.USE = "hanim_r_tarsometatarsal_3";
joints[45] = HAnimJoint1645;

let HAnimJoint1646 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1646.USE = "hanim_r_metatarsophalangeal_3";
joints[46] = HAnimJoint1646;

let HAnimJoint1647 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1647.USE = "hanim_r_tarsal_proximal_interphalangeal_3";
joints[47] = HAnimJoint1647;

let HAnimJoint1648 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1648.USE = "hanim_r_tarsal_distal_interphalangeal_3";
joints[48] = HAnimJoint1648;

let HAnimJoint1649 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1649.USE = "hanim_r_calcaneocuboid";
joints[49] = HAnimJoint1649;

let HAnimJoint1650 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1650.USE = "hanim_r_transversetarsal";
joints[50] = HAnimJoint1650;

let HAnimJoint1651 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1651.USE = "hanim_r_tarsometatarsal_4";
joints[51] = HAnimJoint1651;

let HAnimJoint1652 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1652.USE = "hanim_r_metatarsophalangeal_4";
joints[52] = HAnimJoint1652;

let HAnimJoint1653 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1653.USE = "hanim_r_tarsal_proximal_interphalangeal_4";
joints[53] = HAnimJoint1653;

let HAnimJoint1654 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1654.USE = "hanim_r_tarsal_distal_interphalangeal_4";
joints[54] = HAnimJoint1654;

let HAnimJoint1655 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1655.USE = "hanim_r_tarsometatarsal_5";
joints[55] = HAnimJoint1655;

let HAnimJoint1656 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1656.USE = "hanim_r_metatarsophalangeal_5";
joints[56] = HAnimJoint1656;

let HAnimJoint1657 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1657.USE = "hanim_r_tarsal_proximal_interphalangeal_5";
joints[57] = HAnimJoint1657;

let HAnimJoint1658 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1658.USE = "hanim_r_tarsal_distal_interphalangeal_5";
joints[58] = HAnimJoint1658;

let HAnimJoint1659 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1659.USE = "hanim_vl5";
joints[59] = HAnimJoint1659;

let HAnimJoint1660 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1660.USE = "hanim_vl4";
joints[60] = HAnimJoint1660;

let HAnimJoint1661 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1661.USE = "hanim_vl3";
joints[61] = HAnimJoint1661;

let HAnimJoint1662 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1662.USE = "hanim_vl2";
joints[62] = HAnimJoint1662;

let HAnimJoint1663 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1663.USE = "hanim_vl1";
joints[63] = HAnimJoint1663;

let HAnimJoint1664 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1664.USE = "hanim_vt12";
joints[64] = HAnimJoint1664;

let HAnimJoint1665 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1665.USE = "hanim_vt11";
joints[65] = HAnimJoint1665;

let HAnimJoint1666 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1666.USE = "hanim_vt10";
joints[66] = HAnimJoint1666;

let HAnimJoint1667 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1667.USE = "hanim_vt9";
joints[67] = HAnimJoint1667;

let HAnimJoint1668 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1668.USE = "hanim_vt8";
joints[68] = HAnimJoint1668;

let HAnimJoint1669 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1669.USE = "hanim_vt7";
joints[69] = HAnimJoint1669;

let HAnimJoint1670 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1670.USE = "hanim_vt6";
joints[70] = HAnimJoint1670;

let HAnimJoint1671 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1671.USE = "hanim_vt5";
joints[71] = HAnimJoint1671;

let HAnimJoint1672 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1672.USE = "hanim_vt4";
joints[72] = HAnimJoint1672;

let HAnimJoint1673 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1673.USE = "hanim_vt3";
joints[73] = HAnimJoint1673;

let HAnimJoint1674 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1674.USE = "hanim_vt2";
joints[74] = HAnimJoint1674;

let HAnimJoint1675 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1675.USE = "hanim_vt1";
joints[75] = HAnimJoint1675;

let HAnimJoint1676 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1676.USE = "hanim_vc7";
joints[76] = HAnimJoint1676;

let HAnimJoint1677 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1677.USE = "hanim_vc6";
joints[77] = HAnimJoint1677;

let HAnimJoint1678 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1678.USE = "hanim_vc5";
joints[78] = HAnimJoint1678;

let HAnimJoint1679 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1679.USE = "hanim_vc4";
joints[79] = HAnimJoint1679;

let HAnimJoint1680 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1680.USE = "hanim_vc3";
joints[80] = HAnimJoint1680;

let HAnimJoint1681 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1681.USE = "hanim_vc2";
joints[81] = HAnimJoint1681;

let HAnimJoint1682 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1682.USE = "hanim_vc1";
joints[82] = HAnimJoint1682;

let HAnimJoint1683 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1683.USE = "hanim_skullbase";
joints[83] = HAnimJoint1683;

let HAnimJoint1684 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1684.USE = "hanim_l_eyelid_joint";
joints[84] = HAnimJoint1684;

let HAnimJoint1685 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1685.USE = "hanim_r_eyelid_joint";
joints[85] = HAnimJoint1685;

let HAnimJoint1686 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1686.USE = "hanim_l_eyeball_joint";
joints[86] = HAnimJoint1686;

let HAnimJoint1687 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1687.USE = "hanim_r_eyeball_joint";
joints[87] = HAnimJoint1687;

let HAnimJoint1688 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1688.USE = "hanim_l_eyebrow_joint";
joints[88] = HAnimJoint1688;

let HAnimJoint1689 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1689.USE = "hanim_r_eyebrow_joint";
joints[89] = HAnimJoint1689;

let HAnimJoint1690 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1690.USE = "hanim_temporomandibular";
joints[90] = HAnimJoint1690;

let HAnimJoint1691 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1691.USE = "hanim_l_sternoclavicular";
joints[91] = HAnimJoint1691;

let HAnimJoint1692 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1692.USE = "hanim_l_acromioclavicular";
joints[92] = HAnimJoint1692;

let HAnimJoint1693 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1693.USE = "hanim_l_shoulder";
joints[93] = HAnimJoint1693;

let HAnimJoint1694 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1694.USE = "hanim_l_elbow";
joints[94] = HAnimJoint1694;

let HAnimJoint1695 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1695.USE = "hanim_l_radiocarpal";
joints[95] = HAnimJoint1695;

let HAnimJoint1696 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1696.USE = "hanim_l_midcarpal_1";
joints[96] = HAnimJoint1696;

let HAnimJoint1697 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1697.USE = "hanim_l_carpometacarpal_1";
joints[97] = HAnimJoint1697;

let HAnimJoint1698 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1698.USE = "hanim_l_metacarpophalangeal_1";
joints[98] = HAnimJoint1698;

let HAnimJoint1699 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1699.USE = "hanim_l_carpal_interphalangeal_1";
joints[99] = HAnimJoint1699;

let HAnimJoint1700 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1700.USE = "hanim_l_midcarpal_2";
joints[100] = HAnimJoint1700;

let HAnimJoint1701 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1701.USE = "hanim_l_carpometacarpal_2";
joints[101] = HAnimJoint1701;

let HAnimJoint1702 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1702.USE = "hanim_l_metacarpophalangeal_2";
joints[102] = HAnimJoint1702;

let HAnimJoint1703 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1703.USE = "hanim_l_carpal_proximal_interphalangeal_2";
joints[103] = HAnimJoint1703;

let HAnimJoint1704 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1704.USE = "hanim_l_carpal_distal_interphalangeal_2";
joints[104] = HAnimJoint1704;

let HAnimJoint1705 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1705.USE = "hanim_l_midcarpal_3";
joints[105] = HAnimJoint1705;

let HAnimJoint1706 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1706.USE = "hanim_l_carpometacarpal_3";
joints[106] = HAnimJoint1706;

let HAnimJoint1707 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1707.USE = "hanim_l_metacarpophalangeal_3";
joints[107] = HAnimJoint1707;

let HAnimJoint1708 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1708.USE = "hanim_l_carpal_proximal_interphalangeal_3";
joints[108] = HAnimJoint1708;

let HAnimJoint1709 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1709.USE = "hanim_l_carpal_distal_interphalangeal_3";
joints[109] = HAnimJoint1709;

let HAnimJoint1710 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1710.USE = "hanim_l_midcarpal_4_5";
joints[110] = HAnimJoint1710;

let HAnimJoint1711 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1711.USE = "hanim_l_carpometacarpal_4";
joints[111] = HAnimJoint1711;

let HAnimJoint1712 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1712.USE = "hanim_l_metacarpophalangeal_4";
joints[112] = HAnimJoint1712;

let HAnimJoint1713 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1713.USE = "hanim_l_carpal_proximal_interphalangeal_4";
joints[113] = HAnimJoint1713;

let HAnimJoint1714 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1714.USE = "hanim_l_carpal_distal_interphalangeal_4";
joints[114] = HAnimJoint1714;

let HAnimJoint1715 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1715.USE = "hanim_l_carpometacarpal_5";
joints[115] = HAnimJoint1715;

let HAnimJoint1716 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1716.USE = "hanim_l_metacarpophalangeal_5";
joints[116] = HAnimJoint1716;

let HAnimJoint1717 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1717.USE = "hanim_l_carpal_proximal_interphalangeal_5";
joints[117] = HAnimJoint1717;

let HAnimJoint1718 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1718.USE = "hanim_l_carpal_distal_interphalangeal_5";
joints[118] = HAnimJoint1718;

let HAnimJoint1719 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1719.USE = "hanim_r_sternoclavicular";
joints[119] = HAnimJoint1719;

let HAnimJoint1720 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1720.USE = "hanim_r_acromioclavicular";
joints[120] = HAnimJoint1720;

let HAnimJoint1721 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1721.USE = "hanim_r_shoulder";
joints[121] = HAnimJoint1721;

let HAnimJoint1722 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1722.USE = "hanim_r_elbow";
joints[122] = HAnimJoint1722;

let HAnimJoint1723 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1723.USE = "hanim_r_radiocarpal";
joints[123] = HAnimJoint1723;

let HAnimJoint1724 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1724.USE = "hanim_r_midcarpal_1";
joints[124] = HAnimJoint1724;

let HAnimJoint1725 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1725.USE = "hanim_r_carpometacarpal_1";
joints[125] = HAnimJoint1725;

let HAnimJoint1726 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1726.USE = "hanim_r_metacarpophalangeal_1";
joints[126] = HAnimJoint1726;

let HAnimJoint1727 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1727.USE = "hanim_r_carpal_interphalangeal_1";
joints[127] = HAnimJoint1727;

let HAnimJoint1728 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1728.USE = "hanim_r_midcarpal_2";
joints[128] = HAnimJoint1728;

let HAnimJoint1729 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1729.USE = "hanim_r_carpometacarpal_2";
joints[129] = HAnimJoint1729;

let HAnimJoint1730 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1730.USE = "hanim_r_metacarpophalangeal_2";
joints[130] = HAnimJoint1730;

let HAnimJoint1731 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1731.USE = "hanim_r_carpal_proximal_interphalangeal_2";
joints[131] = HAnimJoint1731;

let HAnimJoint1732 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1732.USE = "hanim_r_carpal_distal_interphalangeal_2";
joints[132] = HAnimJoint1732;

let HAnimJoint1733 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1733.USE = "hanim_r_midcarpal_3";
joints[133] = HAnimJoint1733;

let HAnimJoint1734 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1734.USE = "hanim_r_carpometacarpal_3";
joints[134] = HAnimJoint1734;

let HAnimJoint1735 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1735.USE = "hanim_r_metacarpophalangeal_3";
joints[135] = HAnimJoint1735;

let HAnimJoint1736 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1736.USE = "hanim_r_carpal_proximal_interphalangeal_3";
joints[136] = HAnimJoint1736;

let HAnimJoint1737 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1737.USE = "hanim_r_carpal_distal_interphalangeal_3";
joints[137] = HAnimJoint1737;

let HAnimJoint1738 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1738.USE = "hanim_r_midcarpal_4_5";
joints[138] = HAnimJoint1738;

let HAnimJoint1739 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1739.USE = "hanim_r_carpometacarpal_4";
joints[139] = HAnimJoint1739;

let HAnimJoint1740 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1740.USE = "hanim_r_metacarpophalangeal_4";
joints[140] = HAnimJoint1740;

let HAnimJoint1741 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1741.USE = "hanim_r_carpal_proximal_interphalangeal_4";
joints[141] = HAnimJoint1741;

let HAnimJoint1742 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1742.USE = "hanim_r_carpal_distal_interphalangeal_4";
joints[142] = HAnimJoint1742;

let HAnimJoint1743 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1743.USE = "hanim_r_carpometacarpal_5";
joints[143] = HAnimJoint1743;

let HAnimJoint1744 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1744.USE = "hanim_r_metacarpophalangeal_5";
joints[144] = HAnimJoint1744;

let HAnimJoint1745 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1745.USE = "hanim_r_carpal_proximal_interphalangeal_5";
joints[145] = HAnimJoint1745;

let HAnimJoint1746 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1746.USE = "hanim_r_carpal_distal_interphalangeal_5";
joints[146] = HAnimJoint1746;

let HAnimSegment1747 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1747.USE = "hanim_sacrum";
segments[147] = HAnimSegment1747;

let HAnimSegment1748 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1748.USE = "hanim_pelvis";
segments[148] = HAnimSegment1748;

let HAnimSegment1749 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1749.USE = "hanim_l_thigh";
segments[149] = HAnimSegment1749;

let HAnimSegment1750 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1750.USE = "hanim_l_calf";
segments[150] = HAnimSegment1750;

let HAnimSegment1751 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1751.USE = "hanim_l_talus";
segments[151] = HAnimSegment1751;

let HAnimSegment1752 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1752.USE = "hanim_l_navicular";
segments[152] = HAnimSegment1752;

let HAnimSegment1753 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1753.USE = "hanim_l_cuneiform_1";
segments[153] = HAnimSegment1753;

let HAnimSegment1754 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1754.USE = "hanim_l_metatarsal_1";
segments[154] = HAnimSegment1754;

let HAnimSegment1755 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1755.USE = "hanim_l_tarsal_proximal_phalanx_1";
segments[155] = HAnimSegment1755;

let HAnimSegment1756 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1756.USE = "hanim_l_cuneiform_2";
segments[156] = HAnimSegment1756;

let HAnimSegment1757 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1757.USE = "hanim_l_metatarsal_2";
segments[157] = HAnimSegment1757;

let HAnimSegment1758 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1758.USE = "hanim_l_tarsal_proximal_phalanx_2";
segments[158] = HAnimSegment1758;

let HAnimSegment1759 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1759.USE = "hanim_l_tarsal_middle_phalanx_2";
segments[159] = HAnimSegment1759;

let HAnimSegment1760 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1760.USE = "hanim_l_cuneiform_3";
segments[160] = HAnimSegment1760;

let HAnimSegment1761 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1761.USE = "hanim_l_metatarsal_3";
segments[161] = HAnimSegment1761;

let HAnimSegment1762 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1762.USE = "hanim_l_tarsal_proximal_phalanx_3";
segments[162] = HAnimSegment1762;

let HAnimSegment1763 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1763.USE = "hanim_l_tarsal_middle_phalanx_3";
segments[163] = HAnimSegment1763;

let HAnimSegment1764 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1764.USE = "hanim_l_calcaneus";
segments[164] = HAnimSegment1764;

let HAnimSegment1765 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1765.USE = "hanim_l_cuboid";
segments[165] = HAnimSegment1765;

let HAnimSegment1766 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1766.USE = "hanim_l_metatarsal_4";
segments[166] = HAnimSegment1766;

let HAnimSegment1767 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1767.USE = "hanim_l_tarsal_proximal_phalanx_4";
segments[167] = HAnimSegment1767;

let HAnimSegment1768 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1768.USE = "hanim_l_tarsal_middle_phalanx_4";
segments[168] = HAnimSegment1768;

let HAnimSegment1769 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1769.USE = "hanim_l_metatarsal_5";
segments[169] = HAnimSegment1769;

let HAnimSegment1770 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1770.USE = "hanim_l_tarsal_proximal_phalanx_5";
segments[170] = HAnimSegment1770;

let HAnimSegment1771 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1771.USE = "hanim_l_tarsal_middle_phalanx_5";
segments[171] = HAnimSegment1771;

let HAnimSegment1772 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1772.USE = "hanim_r_thigh";
segments[172] = HAnimSegment1772;

let HAnimSegment1773 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1773.USE = "hanim_r_calf";
segments[173] = HAnimSegment1773;

let HAnimSegment1774 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1774.USE = "hanim_r_talus";
segments[174] = HAnimSegment1774;

let HAnimSegment1775 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1775.USE = "hanim_r_navicular";
segments[175] = HAnimSegment1775;

let HAnimSegment1776 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1776.USE = "hanim_r_cuneiform_1";
segments[176] = HAnimSegment1776;

let HAnimSegment1777 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1777.USE = "hanim_r_metatarsal_1";
segments[177] = HAnimSegment1777;

let HAnimSegment1778 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1778.USE = "hanim_r_tarsal_proximal_phalanx_1";
segments[178] = HAnimSegment1778;

let HAnimSegment1779 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1779.USE = "hanim_r_cuneiform_2";
segments[179] = HAnimSegment1779;

let HAnimSegment1780 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1780.USE = "hanim_r_metatarsal_2";
segments[180] = HAnimSegment1780;

let HAnimSegment1781 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1781.USE = "hanim_r_tarsal_proximal_phalanx_2";
segments[181] = HAnimSegment1781;

let HAnimSegment1782 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1782.USE = "hanim_r_tarsal_middle_phalanx_2";
segments[182] = HAnimSegment1782;

let HAnimSegment1783 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1783.USE = "hanim_r_cuneiform_3";
segments[183] = HAnimSegment1783;

let HAnimSegment1784 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1784.USE = "hanim_r_metatarsal_3";
segments[184] = HAnimSegment1784;

let HAnimSegment1785 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1785.USE = "hanim_r_tarsal_proximal_phalanx_3";
segments[185] = HAnimSegment1785;

let HAnimSegment1786 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1786.USE = "hanim_r_tarsal_middle_phalanx_3";
segments[186] = HAnimSegment1786;

let HAnimSegment1787 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1787.USE = "hanim_r_calcaneus";
segments[187] = HAnimSegment1787;

let HAnimSegment1788 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1788.USE = "hanim_r_cuboid";
segments[188] = HAnimSegment1788;

let HAnimSegment1789 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1789.USE = "hanim_r_metatarsal_4";
segments[189] = HAnimSegment1789;

let HAnimSegment1790 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1790.USE = "hanim_r_tarsal_proximal_phalanx_4";
segments[190] = HAnimSegment1790;

let HAnimSegment1791 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1791.USE = "hanim_r_tarsal_middle_phalanx_4";
segments[191] = HAnimSegment1791;

let HAnimSegment1792 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1792.USE = "hanim_r_metatarsal_5";
segments[192] = HAnimSegment1792;

let HAnimSegment1793 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1793.USE = "hanim_r_tarsal_proximal_phalanx_5";
segments[193] = HAnimSegment1793;

let HAnimSegment1794 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1794.USE = "hanim_r_tarsal_middle_phalanx_5";
segments[194] = HAnimSegment1794;

let HAnimSegment1795 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1795.USE = "hanim_l5";
segments[195] = HAnimSegment1795;

let HAnimSegment1796 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1796.USE = "hanim_l4";
segments[196] = HAnimSegment1796;

let HAnimSegment1797 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1797.USE = "hanim_l3";
segments[197] = HAnimSegment1797;

let HAnimSegment1798 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1798.USE = "hanim_l2";
segments[198] = HAnimSegment1798;

let HAnimSegment1799 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1799.USE = "hanim_l1";
segments[199] = HAnimSegment1799;

let HAnimSegment1800 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1800.USE = "hanim_t12";
segments[200] = HAnimSegment1800;

let HAnimSegment1801 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1801.USE = "hanim_t11";
segments[201] = HAnimSegment1801;

let HAnimSegment1802 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1802.USE = "hanim_t10";
segments[202] = HAnimSegment1802;

let HAnimSegment1803 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1803.USE = "hanim_t9";
segments[203] = HAnimSegment1803;

let HAnimSegment1804 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1804.USE = "hanim_t8";
segments[204] = HAnimSegment1804;

let HAnimSegment1805 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1805.USE = "hanim_t7";
segments[205] = HAnimSegment1805;

let HAnimSegment1806 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1806.USE = "hanim_t6";
segments[206] = HAnimSegment1806;

let HAnimSegment1807 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1807.USE = "hanim_t5";
segments[207] = HAnimSegment1807;

let HAnimSegment1808 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1808.USE = "hanim_t4";
segments[208] = HAnimSegment1808;

let HAnimSegment1809 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1809.USE = "hanim_t3";
segments[209] = HAnimSegment1809;

let HAnimSegment1810 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1810.USE = "hanim_t2";
segments[210] = HAnimSegment1810;

let HAnimSegment1811 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1811.USE = "hanim_t1";
segments[211] = HAnimSegment1811;

let HAnimSegment1812 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1812.USE = "hanim_c7";
segments[212] = HAnimSegment1812;

let HAnimSegment1813 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1813.USE = "hanim_c6";
segments[213] = HAnimSegment1813;

let HAnimSegment1814 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1814.USE = "hanim_c5";
segments[214] = HAnimSegment1814;

let HAnimSegment1815 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1815.USE = "hanim_c4";
segments[215] = HAnimSegment1815;

let HAnimSegment1816 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1816.USE = "hanim_c3";
segments[216] = HAnimSegment1816;

let HAnimSegment1817 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1817.USE = "hanim_c2";
segments[217] = HAnimSegment1817;

let HAnimSegment1818 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1818.USE = "hanim_c1";
segments[218] = HAnimSegment1818;

let HAnimSegment1819 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1819.USE = "hanim_skull";
segments[219] = HAnimSegment1819;

let HAnimSegment1820 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1820.USE = "hanim_l_clavicle";
segments[220] = HAnimSegment1820;

let HAnimSegment1821 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1821.USE = "hanim_l_scapula";
segments[221] = HAnimSegment1821;

let HAnimSegment1822 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1822.USE = "hanim_l_upperarm";
segments[222] = HAnimSegment1822;

let HAnimSegment1823 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1823.USE = "hanim_l_forearm";
segments[223] = HAnimSegment1823;

let HAnimSegment1824 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1824.USE = "hanim_l_carpal";
segments[224] = HAnimSegment1824;

let HAnimSegment1825 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1825.USE = "hanim_l_trapezium";
segments[225] = HAnimSegment1825;

let HAnimSegment1826 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1826.USE = "hanim_l_metacarpal_1";
segments[226] = HAnimSegment1826;

let HAnimSegment1827 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1827.USE = "hanim_l_carpal_proximal_phalanx_1";
segments[227] = HAnimSegment1827;

let HAnimSegment1828 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1828.USE = "hanim_l_trapezoid";
segments[228] = HAnimSegment1828;

let HAnimSegment1829 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1829.USE = "hanim_l_metacarpal_2";
segments[229] = HAnimSegment1829;

let HAnimSegment1830 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1830.USE = "hanim_l_carpal_proximal_phalanx_2";
segments[230] = HAnimSegment1830;

let HAnimSegment1831 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1831.USE = "hanim_l_carpal_middle_phalanx_2";
segments[231] = HAnimSegment1831;

let HAnimSegment1832 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1832.USE = "hanim_l_capitate";
segments[232] = HAnimSegment1832;

let HAnimSegment1833 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1833.USE = "hanim_l_metacarpal_3";
segments[233] = HAnimSegment1833;

let HAnimSegment1834 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1834.USE = "hanim_l_carpal_proximal_phalanx_3";
segments[234] = HAnimSegment1834;

let HAnimSegment1835 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1835.USE = "hanim_l_carpal_middle_phalanx_3";
segments[235] = HAnimSegment1835;

let HAnimSegment1836 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1836.USE = "hanim_l_hamate";
segments[236] = HAnimSegment1836;

let HAnimSegment1837 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1837.USE = "hanim_l_metacarpal_4";
segments[237] = HAnimSegment1837;

let HAnimSegment1838 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1838.USE = "hanim_l_carpal_proximal_phalanx_4";
segments[238] = HAnimSegment1838;

let HAnimSegment1839 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1839.USE = "hanim_l_carpal_middle_phalanx_4";
segments[239] = HAnimSegment1839;

let HAnimSegment1840 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1840.USE = "hanim_l_metacarpal_5";
segments[240] = HAnimSegment1840;

let HAnimSegment1841 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1841.USE = "hanim_l_carpal_proximal_phalanx_5";
segments[241] = HAnimSegment1841;

let HAnimSegment1842 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1842.USE = "hanim_l_carpal_middle_phalanx_5";
segments[242] = HAnimSegment1842;

let HAnimSegment1843 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1843.USE = "hanim_r_clavicle";
segments[243] = HAnimSegment1843;

let HAnimSegment1844 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1844.USE = "hanim_r_scapula";
segments[244] = HAnimSegment1844;

let HAnimSegment1845 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1845.USE = "hanim_r_upperarm";
segments[245] = HAnimSegment1845;

let HAnimSegment1846 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1846.USE = "hanim_r_forearm";
segments[246] = HAnimSegment1846;

let HAnimSegment1847 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1847.USE = "hanim_r_carpal";
segments[247] = HAnimSegment1847;

let HAnimSegment1848 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1848.USE = "hanim_r_trapezium";
segments[248] = HAnimSegment1848;

let HAnimSegment1849 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1849.USE = "hanim_r_metacarpal_1";
segments[249] = HAnimSegment1849;

let HAnimSegment1850 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1850.USE = "hanim_r_carpal_proximal_phalanx_1";
segments[250] = HAnimSegment1850;

let HAnimSegment1851 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1851.USE = "hanim_r_trapezoid";
segments[251] = HAnimSegment1851;

let HAnimSegment1852 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1852.USE = "hanim_r_metacarpal_2";
segments[252] = HAnimSegment1852;

let HAnimSegment1853 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1853.USE = "hanim_r_carpal_proximal_phalanx_2";
segments[253] = HAnimSegment1853;

let HAnimSegment1854 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1854.USE = "hanim_r_carpal_middle_phalanx_2";
segments[254] = HAnimSegment1854;

let HAnimSegment1855 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1855.USE = "hanim_r_capitate";
segments[255] = HAnimSegment1855;

let HAnimSegment1856 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1856.USE = "hanim_r_metacarpal_3";
segments[256] = HAnimSegment1856;

let HAnimSegment1857 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1857.USE = "hanim_r_carpal_proximal_phalanx_3";
segments[257] = HAnimSegment1857;

let HAnimSegment1858 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1858.USE = "hanim_r_carpal_middle_phalanx_3";
segments[258] = HAnimSegment1858;

let HAnimSegment1859 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1859.USE = "hanim_r_hamate";
segments[259] = HAnimSegment1859;

let HAnimSegment1860 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1860.USE = "hanim_r_metacarpal_4";
segments[260] = HAnimSegment1860;

let HAnimSegment1861 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1861.USE = "hanim_r_carpal_proximal_phalanx_4";
segments[261] = HAnimSegment1861;

let HAnimSegment1862 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1862.USE = "hanim_r_carpal_middle_phalanx_4";
segments[262] = HAnimSegment1862;

let HAnimSegment1863 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1863.USE = "hanim_r_metacarpal_5";
segments[263] = HAnimSegment1863;

let HAnimSegment1864 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1864.USE = "hanim_r_carpal_proximal_phalanx_5";
segments[264] = HAnimSegment1864;

let HAnimSegment1865 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1865.USE = "hanim_r_carpal_middle_phalanx_5";
segments[265] = HAnimSegment1865;

let HAnimSite1866 = browser.currentScene.createNode("HAnimSite");
HAnimSite1866.USE = "hanim_buttocks_standing_wall_contact_point_pt";
viewpoints[266] = HAnimSite1866;

let HAnimSite1867 = browser.currentScene.createNode("HAnimSite");
HAnimSite1867.USE = "hanim_crotch_pt";
viewpoints[267] = HAnimSite1867;

let HAnimSite1868 = browser.currentScene.createNode("HAnimSite");
HAnimSite1868.USE = "hanim_l_asis_pt";
viewpoints[268] = HAnimSite1868;

let HAnimSite1869 = browser.currentScene.createNode("HAnimSite");
HAnimSite1869.USE = "hanim_l_iliocristale_pt";
viewpoints[269] = HAnimSite1869;

let HAnimSite1870 = browser.currentScene.createNode("HAnimSite");
HAnimSite1870.USE = "hanim_l_psis_pt";
viewpoints[270] = HAnimSite1870;

let HAnimSite1871 = browser.currentScene.createNode("HAnimSite");
HAnimSite1871.USE = "hanim_l_trochanterion_pt";
viewpoints[271] = HAnimSite1871;

let HAnimSite1872 = browser.currentScene.createNode("HAnimSite");
HAnimSite1872.USE = "hanim_r_asis_pt";
viewpoints[272] = HAnimSite1872;

let HAnimSite1873 = browser.currentScene.createNode("HAnimSite");
HAnimSite1873.USE = "hanim_r_iliocristale_pt";
viewpoints[273] = HAnimSite1873;

let HAnimSite1874 = browser.currentScene.createNode("HAnimSite");
HAnimSite1874.USE = "hanim_r_psis_pt";
viewpoints[274] = HAnimSite1874;

let HAnimSite1875 = browser.currentScene.createNode("HAnimSite");
HAnimSite1875.USE = "hanim_r_trochanterion_pt";
viewpoints[275] = HAnimSite1875;

let HAnimSite1876 = browser.currentScene.createNode("HAnimSite");
HAnimSite1876.USE = "hanim_navel_pt";
viewpoints[276] = HAnimSite1876;

let HAnimSite1877 = browser.currentScene.createNode("HAnimSite");
HAnimSite1877.USE = "hanim_waist_preferred_anterior_pt";
viewpoints[277] = HAnimSite1877;

let HAnimSite1878 = browser.currentScene.createNode("HAnimSite");
HAnimSite1878.USE = "hanim_waist_preferred_posterior_pt";
viewpoints[278] = HAnimSite1878;

let HAnimSite1879 = browser.currentScene.createNode("HAnimSite");
HAnimSite1879.USE = "hanim_l_femoral_lateral_epicondyles_pt";
viewpoints[279] = HAnimSite1879;

let HAnimSite1880 = browser.currentScene.createNode("HAnimSite");
HAnimSite1880.USE = "hanim_l_femoral_medial_epicondyles_pt";
viewpoints[280] = HAnimSite1880;

let HAnimSite1881 = browser.currentScene.createNode("HAnimSite");
HAnimSite1881.USE = "hanim_l_knee_crease_pt";
viewpoints[281] = HAnimSite1881;

let HAnimSite1882 = browser.currentScene.createNode("HAnimSite");
HAnimSite1882.USE = "hanim_l_suprapatella_pt";
viewpoints[282] = HAnimSite1882;

let HAnimSite1883 = browser.currentScene.createNode("HAnimSite");
HAnimSite1883.USE = "hanim_r_femoral_lateral_epicondyles_pt";
viewpoints[283] = HAnimSite1883;

let HAnimSite1884 = browser.currentScene.createNode("HAnimSite");
HAnimSite1884.USE = "hanim_r_femoral_medial_epicondyles_pt";
viewpoints[284] = HAnimSite1884;

let HAnimSite1885 = browser.currentScene.createNode("HAnimSite");
HAnimSite1885.USE = "hanim_r_knee_crease_pt";
viewpoints[285] = HAnimSite1885;

let HAnimSite1886 = browser.currentScene.createNode("HAnimSite");
HAnimSite1886.USE = "hanim_r_suprapatella_pt";
viewpoints[286] = HAnimSite1886;

let HAnimSite1887 = browser.currentScene.createNode("HAnimSite");
HAnimSite1887.USE = "hanim_l_lateral_malleolus_pt";
viewpoints[287] = HAnimSite1887;

let HAnimSite1888 = browser.currentScene.createNode("HAnimSite");
HAnimSite1888.USE = "hanim_l_medial_malleolus_pt";
viewpoints[288] = HAnimSite1888;

let HAnimSite1889 = browser.currentScene.createNode("HAnimSite");
HAnimSite1889.USE = "hanim_l_tibiale_pt";
viewpoints[289] = HAnimSite1889;

let HAnimSite1890 = browser.currentScene.createNode("HAnimSite");
HAnimSite1890.USE = "hanim_l_calcaneus_posterior_pt";
viewpoints[290] = HAnimSite1890;

let HAnimSite1891 = browser.currentScene.createNode("HAnimSite");
HAnimSite1891.USE = "hanim_l_sphyrion_pt";
viewpoints[291] = HAnimSite1891;

let HAnimSite1892 = browser.currentScene.createNode("HAnimSite");
HAnimSite1892.USE = "hanim_l_metatarsal_phalanx_1_pt";
viewpoints[292] = HAnimSite1892;

let HAnimSite1893 = browser.currentScene.createNode("HAnimSite");
HAnimSite1893.USE = "hanim_l_tarsal_distal_phalanx_1_tip";
viewpoints[293] = HAnimSite1893;

let HAnimSite1894 = browser.currentScene.createNode("HAnimSite");
HAnimSite1894.USE = "hanim_l_tarsal_distal_phalanx_2_tip";
viewpoints[294] = HAnimSite1894;

let HAnimSite1895 = browser.currentScene.createNode("HAnimSite");
HAnimSite1895.USE = "hanim_l_tarsal_distal_phalanx_3_tip";
viewpoints[295] = HAnimSite1895;

let HAnimSite1896 = browser.currentScene.createNode("HAnimSite");
HAnimSite1896.USE = "hanim_l_tarsal_distal_phalanx_4_tip";
viewpoints[296] = HAnimSite1896;

let HAnimSite1897 = browser.currentScene.createNode("HAnimSite");
HAnimSite1897.USE = "hanim_l_metatarsal_phalanx_5_pt";
viewpoints[297] = HAnimSite1897;

let HAnimSite1898 = browser.currentScene.createNode("HAnimSite");
HAnimSite1898.USE = "hanim_l_tarsal_distal_phalanx_5_tip";
viewpoints[298] = HAnimSite1898;

let HAnimSite1899 = browser.currentScene.createNode("HAnimSite");
HAnimSite1899.USE = "hanim_r_lateral_malleolus_pt";
viewpoints[299] = HAnimSite1899;

let HAnimSite1900 = browser.currentScene.createNode("HAnimSite");
HAnimSite1900.USE = "hanim_r_medial_malleolus_pt";
viewpoints[300] = HAnimSite1900;

let HAnimSite1901 = browser.currentScene.createNode("HAnimSite");
HAnimSite1901.USE = "hanim_r_tibiale_pt";
viewpoints[301] = HAnimSite1901;

let HAnimSite1902 = browser.currentScene.createNode("HAnimSite");
HAnimSite1902.USE = "hanim_r_calcaneus_posterior_pt";
viewpoints[302] = HAnimSite1902;

let HAnimSite1903 = browser.currentScene.createNode("HAnimSite");
HAnimSite1903.USE = "hanim_r_sphyrion_pt";
viewpoints[303] = HAnimSite1903;

let HAnimSite1904 = browser.currentScene.createNode("HAnimSite");
HAnimSite1904.USE = "hanim_r_metatarsal_phalanx_1_pt";
viewpoints[304] = HAnimSite1904;

let HAnimSite1905 = browser.currentScene.createNode("HAnimSite");
HAnimSite1905.USE = "hanim_r_tarsal_distal_phalanx_1_tip";
viewpoints[305] = HAnimSite1905;

let HAnimSite1906 = browser.currentScene.createNode("HAnimSite");
HAnimSite1906.USE = "hanim_r_tarsal_distal_phalanx_2_tip";
viewpoints[306] = HAnimSite1906;

let HAnimSite1907 = browser.currentScene.createNode("HAnimSite");
HAnimSite1907.USE = "hanim_r_tarsal_distal_phalanx_3_tip";
viewpoints[307] = HAnimSite1907;

let HAnimSite1908 = browser.currentScene.createNode("HAnimSite");
HAnimSite1908.USE = "hanim_r_tarsal_distal_phalanx_4_tip";
viewpoints[308] = HAnimSite1908;

let HAnimSite1909 = browser.currentScene.createNode("HAnimSite");
HAnimSite1909.USE = "hanim_r_metatarsal_phalanx_5_pt";
viewpoints[309] = HAnimSite1909;

let HAnimSite1910 = browser.currentScene.createNode("HAnimSite");
HAnimSite1910.USE = "hanim_r_tarsal_distal_phalanx_5_tip";
viewpoints[310] = HAnimSite1910;

let HAnimSite1911 = browser.currentScene.createNode("HAnimSite");
HAnimSite1911.USE = "hanim_l_rib10_pt";
viewpoints[311] = HAnimSite1911;

let HAnimSite1912 = browser.currentScene.createNode("HAnimSite");
HAnimSite1912.USE = "hanim_r_rib10_pt";
viewpoints[312] = HAnimSite1912;

let HAnimSite1913 = browser.currentScene.createNode("HAnimSite");
HAnimSite1913.USE = "hanim_spine_2_middle_back_pt";
viewpoints[313] = HAnimSite1913;

let HAnimSite1914 = browser.currentScene.createNode("HAnimSite");
HAnimSite1914.USE = "hanim_substernale_pt";
viewpoints[314] = HAnimSite1914;

let HAnimSite1915 = browser.currentScene.createNode("HAnimSite");
HAnimSite1915.USE = "hanim_l_thelion_pt";
viewpoints[315] = HAnimSite1915;

let HAnimSite1916 = browser.currentScene.createNode("HAnimSite");
HAnimSite1916.USE = "hanim_r_thelion_pt";
viewpoints[316] = HAnimSite1916;

let HAnimSite1917 = browser.currentScene.createNode("HAnimSite");
HAnimSite1917.USE = "hanim_l_chest_midsagittal_plane_pt";
viewpoints[317] = HAnimSite1917;

let HAnimSite1918 = browser.currentScene.createNode("HAnimSite");
HAnimSite1918.USE = "hanim_mesosternale_pt";
viewpoints[318] = HAnimSite1918;

let HAnimSite1919 = browser.currentScene.createNode("HAnimSite");
HAnimSite1919.USE = "hanim_r_chest_midsagittal_plane_pt";
viewpoints[319] = HAnimSite1919;

let HAnimSite1920 = browser.currentScene.createNode("HAnimSite");
HAnimSite1920.USE = "hanim_rear_center_midsagittal_plane_pt";
viewpoints[320] = HAnimSite1920;

let HAnimSite1921 = browser.currentScene.createNode("HAnimSite");
HAnimSite1921.USE = "hanim_spine_1_middle_back_pt";
viewpoints[321] = HAnimSite1921;

let HAnimSite1922 = browser.currentScene.createNode("HAnimSite");
HAnimSite1922.USE = "hanim_cervicale_pt";
viewpoints[322] = HAnimSite1922;

let HAnimSite1923 = browser.currentScene.createNode("HAnimSite");
HAnimSite1923.USE = "hanim_suprasternale_pt";
viewpoints[323] = HAnimSite1923;

let HAnimSite1924 = browser.currentScene.createNode("HAnimSite");
HAnimSite1924.USE = "hanim_l_neck_base_pt";
viewpoints[324] = HAnimSite1924;

let HAnimSite1925 = browser.currentScene.createNode("HAnimSite");
HAnimSite1925.USE = "hanim_r_neck_base_pt";
viewpoints[325] = HAnimSite1925;

let HAnimSite1926 = browser.currentScene.createNode("HAnimSite");
HAnimSite1926.USE = "hanim_l_acromion_pt";
viewpoints[326] = HAnimSite1926;

let HAnimSite1927 = browser.currentScene.createNode("HAnimSite");
HAnimSite1927.USE = "hanim_l_axilla_distal_pt";
viewpoints[327] = HAnimSite1927;

let HAnimSite1928 = browser.currentScene.createNode("HAnimSite");
HAnimSite1928.USE = "hanim_l_axilla_posterior_folds_pt";
viewpoints[328] = HAnimSite1928;

let HAnimSite1929 = browser.currentScene.createNode("HAnimSite");
HAnimSite1929.USE = "hanim_l_axilla_proximal_pt";
viewpoints[329] = HAnimSite1929;

let HAnimSite1930 = browser.currentScene.createNode("HAnimSite");
HAnimSite1930.USE = "hanim_l_clavicale_pt";
viewpoints[330] = HAnimSite1930;

let HAnimSite1931 = browser.currentScene.createNode("HAnimSite");
HAnimSite1931.USE = "hanim_r_acromion_pt";
viewpoints[331] = HAnimSite1931;

let HAnimSite1932 = browser.currentScene.createNode("HAnimSite");
HAnimSite1932.USE = "hanim_r_axilla_distal_pt";
viewpoints[332] = HAnimSite1932;

let HAnimSite1933 = browser.currentScene.createNode("HAnimSite");
HAnimSite1933.USE = "hanim_r_axilla_posterior_folds_pt";
viewpoints[333] = HAnimSite1933;

let HAnimSite1934 = browser.currentScene.createNode("HAnimSite");
HAnimSite1934.USE = "hanim_r_axilla_proximal_pt";
viewpoints[334] = HAnimSite1934;

let HAnimSite1935 = browser.currentScene.createNode("HAnimSite");
HAnimSite1935.USE = "hanim_r_clavicale_pt";
viewpoints[335] = HAnimSite1935;

let HAnimSite1936 = browser.currentScene.createNode("HAnimSite");
HAnimSite1936.USE = "hanim_adams_apple_pt";
viewpoints[336] = HAnimSite1936;

let HAnimSite1937 = browser.currentScene.createNode("HAnimSite");
HAnimSite1937.USE = "hanim_glabella_pt";
viewpoints[337] = HAnimSite1937;

let HAnimSite1938 = browser.currentScene.createNode("HAnimSite");
HAnimSite1938.USE = "hanim_l_ectocanthus_pt";
viewpoints[338] = HAnimSite1938;

let HAnimSite1939 = browser.currentScene.createNode("HAnimSite");
HAnimSite1939.USE = "hanim_l_infraorbitale_pt";
viewpoints[339] = HAnimSite1939;

let HAnimSite1940 = browser.currentScene.createNode("HAnimSite");
HAnimSite1940.USE = "hanim_l_tragion_pt";
viewpoints[340] = HAnimSite1940;

let HAnimSite1941 = browser.currentScene.createNode("HAnimSite");
HAnimSite1941.USE = "hanim_nuchale_pt";
viewpoints[341] = HAnimSite1941;

let HAnimSite1942 = browser.currentScene.createNode("HAnimSite");
HAnimSite1942.USE = "hanim_opisthocranion_pt";
viewpoints[342] = HAnimSite1942;

let HAnimSite1943 = browser.currentScene.createNode("HAnimSite");
HAnimSite1943.USE = "hanim_r_ectocanthus_pt";
viewpoints[343] = HAnimSite1943;

let HAnimSite1944 = browser.currentScene.createNode("HAnimSite");
HAnimSite1944.USE = "hanim_r_infraorbitale_pt";
viewpoints[344] = HAnimSite1944;

let HAnimSite1945 = browser.currentScene.createNode("HAnimSite");
HAnimSite1945.USE = "hanim_r_tragion_pt";
viewpoints[345] = HAnimSite1945;

let HAnimSite1946 = browser.currentScene.createNode("HAnimSite");
HAnimSite1946.USE = "hanim_sellion_pt";
viewpoints[346] = HAnimSite1946;

let HAnimSite1947 = browser.currentScene.createNode("HAnimSite");
HAnimSite1947.USE = "hanim_skull_vertex_pt";
viewpoints[347] = HAnimSite1947;

let HAnimSite1948 = browser.currentScene.createNode("HAnimSite");
HAnimSite1948.USE = "hanim_l_gonion_pt";
viewpoints[348] = HAnimSite1948;

let HAnimSite1949 = browser.currentScene.createNode("HAnimSite");
HAnimSite1949.USE = "hanim_menton_pt";
viewpoints[349] = HAnimSite1949;

let HAnimSite1950 = browser.currentScene.createNode("HAnimSite");
HAnimSite1950.USE = "hanim_r_gonion_pt";
viewpoints[350] = HAnimSite1950;

let HAnimSite1951 = browser.currentScene.createNode("HAnimSite");
HAnimSite1951.USE = "hanim_supramenton_pt";
viewpoints[351] = HAnimSite1951;

let HAnimSite1952 = browser.currentScene.createNode("HAnimSite");
HAnimSite1952.USE = "hanim_l_bideltoid_pt";
viewpoints[352] = HAnimSite1952;

let HAnimSite1953 = browser.currentScene.createNode("HAnimSite");
HAnimSite1953.USE = "hanim_l_humeral_lateral_epicondyles_pt";
viewpoints[353] = HAnimSite1953;

let HAnimSite1954 = browser.currentScene.createNode("HAnimSite");
HAnimSite1954.USE = "hanim_l_humeral_medial_epicondyles_pt";
viewpoints[354] = HAnimSite1954;

let HAnimSite1955 = browser.currentScene.createNode("HAnimSite");
HAnimSite1955.USE = "hanim_l_olecranon_pt";
viewpoints[355] = HAnimSite1955;

let HAnimSite1956 = browser.currentScene.createNode("HAnimSite");
HAnimSite1956.USE = "hanim_l_radial_styloid_pt";
viewpoints[356] = HAnimSite1956;

let HAnimSite1957 = browser.currentScene.createNode("HAnimSite");
HAnimSite1957.USE = "hanim_l_radiale_pt";
viewpoints[357] = HAnimSite1957;

let HAnimSite1958 = browser.currentScene.createNode("HAnimSite");
HAnimSite1958.USE = "hanim_l_ulnar_styloid_pt";
viewpoints[358] = HAnimSite1958;

let HAnimSite1959 = browser.currentScene.createNode("HAnimSite");
HAnimSite1959.USE = "hanim_l_carpal_distal_phalanx_1_tip";
viewpoints[359] = HAnimSite1959;

let HAnimSite1960 = browser.currentScene.createNode("HAnimSite");
HAnimSite1960.USE = "hanim_l_metacarpal_phalanx_2_pt";
viewpoints[360] = HAnimSite1960;

let HAnimSite1961 = browser.currentScene.createNode("HAnimSite");
HAnimSite1961.USE = "hanim_l_carpal_distal_phalanx_2_tip";
viewpoints[361] = HAnimSite1961;

let HAnimSite1962 = browser.currentScene.createNode("HAnimSite");
HAnimSite1962.USE = "hanim_l_dactylion_pt";
viewpoints[362] = HAnimSite1962;

let HAnimSite1963 = browser.currentScene.createNode("HAnimSite");
HAnimSite1963.USE = "hanim_l_metacarpal_phalanx_3_pt";
viewpoints[363] = HAnimSite1963;

let HAnimSite1964 = browser.currentScene.createNode("HAnimSite");
HAnimSite1964.USE = "hanim_l_carpal_distal_phalanx_3_tip";
viewpoints[364] = HAnimSite1964;

let HAnimSite1965 = browser.currentScene.createNode("HAnimSite");
HAnimSite1965.USE = "hanim_l_metacarpal_phalanx_5_pt";
viewpoints[365] = HAnimSite1965;

let HAnimSite1966 = browser.currentScene.createNode("HAnimSite");
HAnimSite1966.USE = "hanim_l_carpal_distal_phalanx_4_tip";
viewpoints[366] = HAnimSite1966;

let HAnimSite1967 = browser.currentScene.createNode("HAnimSite");
HAnimSite1967.USE = "hanim_l_carpal_distal_phalanx_5_tip";
viewpoints[367] = HAnimSite1967;

let HAnimSite1968 = browser.currentScene.createNode("HAnimSite");
HAnimSite1968.USE = "hanim_r_bideltoid_pt";
viewpoints[368] = HAnimSite1968;

let HAnimSite1969 = browser.currentScene.createNode("HAnimSite");
HAnimSite1969.USE = "hanim_r_humeral_lateral_epicondyles_pt";
viewpoints[369] = HAnimSite1969;

let HAnimSite1970 = browser.currentScene.createNode("HAnimSite");
HAnimSite1970.USE = "hanim_r_humeral_medial_epicondyles_pt";
viewpoints[370] = HAnimSite1970;

let HAnimSite1971 = browser.currentScene.createNode("HAnimSite");
HAnimSite1971.USE = "hanim_r_olecranon_pt";
viewpoints[371] = HAnimSite1971;

let HAnimSite1972 = browser.currentScene.createNode("HAnimSite");
HAnimSite1972.USE = "hanim_r_radial_styloid_pt";
viewpoints[372] = HAnimSite1972;

let HAnimSite1973 = browser.currentScene.createNode("HAnimSite");
HAnimSite1973.USE = "hanim_r_radiale_pt";
viewpoints[373] = HAnimSite1973;

let HAnimSite1974 = browser.currentScene.createNode("HAnimSite");
HAnimSite1974.USE = "hanim_r_ulnar_styloid_pt";
viewpoints[374] = HAnimSite1974;

let HAnimSite1975 = browser.currentScene.createNode("HAnimSite");
HAnimSite1975.USE = "hanim_r_carpal_distal_phalanx_1_tip";
viewpoints[375] = HAnimSite1975;

let HAnimSite1976 = browser.currentScene.createNode("HAnimSite");
HAnimSite1976.USE = "hanim_r_metacarpal_phalanx_2_pt";
viewpoints[376] = HAnimSite1976;

let HAnimSite1977 = browser.currentScene.createNode("HAnimSite");
HAnimSite1977.USE = "hanim_r_carpal_distal_phalanx_2_tip";
viewpoints[377] = HAnimSite1977;

let HAnimSite1978 = browser.currentScene.createNode("HAnimSite");
HAnimSite1978.USE = "hanim_r_dactylion_pt";
viewpoints[378] = HAnimSite1978;

let HAnimSite1979 = browser.currentScene.createNode("HAnimSite");
HAnimSite1979.USE = "hanim_r_metacarpal_phalanx_3_pt";
viewpoints[379] = HAnimSite1979;

let HAnimSite1980 = browser.currentScene.createNode("HAnimSite");
HAnimSite1980.USE = "hanim_r_carpal_distal_phalanx_3_tip";
viewpoints[380] = HAnimSite1980;

let HAnimSite1981 = browser.currentScene.createNode("HAnimSite");
HAnimSite1981.USE = "hanim_r_metacarpal_phalanx_5_pt";
viewpoints[381] = HAnimSite1981;

let HAnimSite1982 = browser.currentScene.createNode("HAnimSite");
HAnimSite1982.USE = "hanim_r_carpal_distal_phalanx_4_tip";
viewpoints[382] = HAnimSite1982;

let HAnimSite1983 = browser.currentScene.createNode("HAnimSite");
HAnimSite1983.USE = "hanim_r_carpal_distal_phalanx_5_tip";
viewpoints[383] = HAnimSite1983;

browser.currentScene.children[4] = HAnimHumanoid43;

}
main ();
