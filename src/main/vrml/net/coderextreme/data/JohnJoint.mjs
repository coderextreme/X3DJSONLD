const
   X3D     = require ("x_ite-node"),
   canvas  = X3D .createBrowser (),
   browser = canvas .browser,
   scene   = browser .currentScene;
async function main () {
scene.setProfile(browser.getProfile("Immersive"));
scene .addComponent (browser .getComponent ("HAnim", 1));
scene.addMetaData("title", "JohnJoint.x3d");
scene.addMetaData("identifier", "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/JohnJoint.x3d");
scene.addMetaData("description", "An attempt at a standard LOA-4 skeleton");
scene.addMetaData("generator", "h6.pl");
scene.addMetaData("creator", "John Carlson");
scene.addMetaData("created", "12 January 2023");
scene.addMetaData("license", "../license.html");
await browser .loadComponents (scene);
let Transform11 = browser.currentScene.createNode("Transform");
//DEF for markerfor XYZ axes
let Shape12 = browser.currentScene.createNode("Shape");
Shape12.DEF = "AxisLinesShape";
//RGB lines showing XYZ axes
let IndexedLineSet13 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet13.colorIndex = new X3D.MFInt32([0,1,2]);
IndexedLineSet13.colorPerVertex = False;
IndexedLineSet13.coordIndex = new X3D.MFInt32([0,1,-1,0,2,-1,0,3,-1]);
let Coordinate14 = browser.currentScene.createNode("Coordinate");
Coordinate14.point = new X3D.MFVec3f([0,0,0,0.1,0,0,0,0.1,0,0,0,0.1]);
coord = Coordinate14;

let Color15 = browser.currentScene.createNode("Color");
Color15.color = new X3D.MFColor([1,0,0,0,0.6,0,0,0,1]);
color = Color15;

geometry = IndexedLineSet13;

Transform11YYY.child = new X3D.undefined();

Transform11ZZZ.child[0] = Shape12;

browser.currentScene.children = new X3D.MFNode();

browser.currentScene.children[0] = Transform11;

let Group16 = browser.currentScene.createNode("Group");
//DEFS for markers of skeleton joints, segments, and sites
let Transform17 = browser.currentScene.createNode("Transform");
//<Transform translation='0 2 0'> <Shape DEF='HAnimRootShape'> <Sphere radius='0.02' /> <Appearance> <Material DEF='HAnimRootMaterial' diffuseColor='0.8 0 0' transparency='0.3'/> </Appearance> </Shape> </Transform>
let Transform18 = browser.currentScene.createNode("Transform");
Transform18.translation = new X3D.SFVec3f([0,2.1,0]);
let Shape19 = browser.currentScene.createNode("Shape");
Shape19.DEF = "HAnimJointShape";
let Sphere20 = browser.currentScene.createNode("Sphere");
Sphere20.radius = 0.02;
geometry = Sphere20;

let Appearance21 = browser.currentScene.createNode("Appearance");
let Material22 = browser.currentScene.createNode("Material");
Material22.DEF = "HAnimJointMaterial";
Material22.diffuseColor = new X3D.SFColor([0,0,0.8]);
Material22.transparency = 0.3;
material = Material22;

appearance = Appearance21;

Transform18YYY.child = new X3D.undefined();

Transform18ZZZ.child[0] = Shape19;

Transform17YYY.children = new X3D.MFNode();

Transform17ZZZ.children[0] = Transform18;

let Transform23 = browser.currentScene.createNode("Transform");
Transform23.translation = new X3D.SFVec3f([0,2.05,0]);
let Shape24 = browser.currentScene.createNode("Shape");
Shape24.DEF = "HAnimSegmentLine";
let LineSet25 = browser.currentScene.createNode("LineSet");
LineSet25.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA26 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA26.DEF = "HAnimSegmentLineColorRGBA";
ColorRGBA26.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,0.1]);
color = ColorRGBA26;

let Coordinate27 = browser.currentScene.createNode("Coordinate");
Coordinate27.point = new X3D.MFVec3f([-0.05,0,0,0.05,0,0]);
coord = Coordinate27;

geometry = LineSet25;

Transform23YYY.child = new X3D.undefined();

Transform23ZZZ.child[0] = Shape24;

Transform17ZZZ.children[1] = Transform23;

//<Transform translation='0 2.1 0'> <Shape DEF='HAnimSiteShape'> <IndexedFaceSet DEF='DiamondIFS' creaseAngle='0.5' solid='false' coordIndex='0 1 2 -1 0 2 3 -1 0 3 4 -1 0 4 1 -1 5 2 1 -1 5 3 2 -1 5 4 3 -1 5 1 4 -1'> <ColorRGBA DEF='HAnimSiteColorRGBA' color='1 1 0 1 1 1 0 0.1'/> <Coordinate point='0 0.01 0 -0.01 0 0 0 0 0.01 0.01 0 0 0 0 -0.01 0 -0.01 0'/> </IndexedFaceSet> <Appearance> <Material diffuseColor='1 1 0' transparency='0.3'/> </Appearance> </Shape> </Transform>
Group16YYY.children = new X3D.MFNode();

Group16ZZZ.children[0] = Transform17;

browser.currentScene.children[1] = Group16;

let NavigationInfo28 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo28.speed = 1.5;
browser.currentScene.children[2] = NavigationInfo28;

let Viewpoint29 = browser.currentScene.createNode("Viewpoint");
Viewpoint29.description = "default";
browser.currentScene.children[3] = Viewpoint29;

let HAnimHumanoid30 = browser.currentScene.createNode("HAnimHumanoid");
HAnimHumanoid30.name = "HAnim";
HAnimHumanoid30.DEF = "hanim_HAnim";
HAnimHumanoid30.info = new X3D.MFString([new X3D.SFString("humanoidVersion=2.0")]);
HAnimHumanoid30.version = "2.0";
let HAnimJoint31 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint31.name = "humanoid_root";
HAnimJoint31.DEF = "hanim_humanoid_root";
HAnimJoint31.center = new X3D.SFVec3f([0,0.824,0.0277]);
HAnimJoint31.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint31.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint32 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint32.name = "sacroiliac";
HAnimJoint32.DEF = "hanim_sacroiliac";
HAnimJoint32.center = new X3D.SFVec3f([0,0.9149,0.0016]);
HAnimJoint32.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint32.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint33 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint33.name = "l_hip";
HAnimJoint33.DEF = "hanim_l_hip";
HAnimJoint33.center = new X3D.SFVec3f([0.0961,0.9124,-0.0001]);
HAnimJoint33.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint33.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint34 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint34.name = "l_knee";
HAnimJoint34.DEF = "hanim_l_knee";
HAnimJoint34.center = new X3D.SFVec3f([0.104,0.4867,0.0308]);
HAnimJoint34.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint34.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint35 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint35.name = "l_talocrural";
HAnimJoint35.DEF = "hanim_l_talocrural";
HAnimJoint35.center = new X3D.SFVec3f([0.1101,0.0656,-0.0736]);
HAnimJoint35.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint35.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint36 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint36.name = "l_talocalcaneonavicular";
HAnimJoint36.DEF = "hanim_l_talocalcaneonavicular";
HAnimJoint36.center = new X3D.SFVec3f([0,1,0]);
HAnimJoint36.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint36.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint37 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint37.name = "l_cuneonavicular_1";
HAnimJoint37.DEF = "hanim_l_cuneonavicular_1";
HAnimJoint37.center = new X3D.SFVec3f([0,1,0]);
HAnimJoint37.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint37.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint38 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint38.name = "l_tarsometatarsal_1";
HAnimJoint38.DEF = "hanim_l_tarsometatarsal_1";
HAnimJoint38.center = new X3D.SFVec3f([0,1,0]);
HAnimJoint38.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint38.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint39 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint39.name = "l_metatarsophalangeal_1";
HAnimJoint39.DEF = "hanim_l_metatarsophalangeal_1";
HAnimJoint39.center = new X3D.SFVec3f([0,1,0]);
HAnimJoint39.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint39.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint40 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint40.name = "l_tarsal_interphalangeal_1";
HAnimJoint40.DEF = "hanim_l_tarsal_interphalangeal_1";
HAnimJoint40.center = new X3D.SFVec3f([0,1,0]);
HAnimJoint40.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint40.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint39YYY.children = new X3D.MFNode();

HAnimJoint39ZZZ.children[0] = HAnimJoint40;

HAnimJoint38YYY.children = new X3D.MFNode();

HAnimJoint38ZZZ.children[0] = HAnimJoint39;

HAnimJoint37YYY.children = new X3D.MFNode();

HAnimJoint37ZZZ.children[0] = HAnimJoint38;

HAnimJoint36YYY.children = new X3D.MFNode();

HAnimJoint36ZZZ.children[0] = HAnimJoint37;

let HAnimJoint41 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint41.name = "l_cuneonavicular_2";
HAnimJoint41.DEF = "hanim_l_cuneonavicular_2";
HAnimJoint41.center = new X3D.SFVec3f([0,1,0]);
HAnimJoint41.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint41.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint42 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint42.name = "l_tarsometatarsal_2";
HAnimJoint42.DEF = "hanim_l_tarsometatarsal_2";
HAnimJoint42.center = new X3D.SFVec3f([0,1,0]);
HAnimJoint42.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint42.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint43 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint43.name = "l_metatarsophalangeal_2";
HAnimJoint43.DEF = "hanim_l_metatarsophalangeal_2";
HAnimJoint43.center = new X3D.SFVec3f([0,1,0]);
HAnimJoint43.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint43.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint44 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint44.name = "l_tarsal_proximal_interphalangeal_2";
HAnimJoint44.DEF = "hanim_l_tarsal_proximal_interphalangeal_2";
HAnimJoint44.center = new X3D.SFVec3f([0,1,0]);
HAnimJoint44.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint44.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint45 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint45.name = "l_tarsal_distal_interphalangeal_2";
HAnimJoint45.DEF = "hanim_l_tarsal_distal_interphalangeal_2";
HAnimJoint45.center = new X3D.SFVec3f([0,1,0]);
HAnimJoint45.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint45.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint44YYY.children = new X3D.MFNode();

HAnimJoint44ZZZ.children[0] = HAnimJoint45;

HAnimJoint43YYY.children = new X3D.MFNode();

HAnimJoint43ZZZ.children[0] = HAnimJoint44;

HAnimJoint42YYY.children = new X3D.MFNode();

HAnimJoint42ZZZ.children[0] = HAnimJoint43;

HAnimJoint41YYY.children = new X3D.MFNode();

HAnimJoint41ZZZ.children[0] = HAnimJoint42;

HAnimJoint36ZZZ.children[1] = HAnimJoint41;

let HAnimJoint46 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint46.name = "l_cuneonavicular_3";
HAnimJoint46.DEF = "hanim_l_cuneonavicular_3";
HAnimJoint46.center = new X3D.SFVec3f([0,1,0]);
HAnimJoint46.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint46.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint47 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint47.name = "l_tarsometatarsal_3";
HAnimJoint47.DEF = "hanim_l_tarsometatarsal_3";
HAnimJoint47.center = new X3D.SFVec3f([0,1,0]);
HAnimJoint47.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint47.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint48 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint48.name = "l_metatarsophalangeal_3";
HAnimJoint48.DEF = "hanim_l_metatarsophalangeal_3";
HAnimJoint48.center = new X3D.SFVec3f([0,1,0]);
HAnimJoint48.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint48.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint49 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint49.name = "l_tarsal_proximal_interphalangeal_3";
HAnimJoint49.DEF = "hanim_l_tarsal_proximal_interphalangeal_3";
HAnimJoint49.center = new X3D.SFVec3f([0,1,0]);
HAnimJoint49.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint49.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint50 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint50.name = "l_tarsal_distal_interphalangeal_3";
HAnimJoint50.DEF = "hanim_l_tarsal_distal_interphalangeal_3";
HAnimJoint50.center = new X3D.SFVec3f([0,1,0]);
HAnimJoint50.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint50.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint49YYY.children = new X3D.MFNode();

HAnimJoint49ZZZ.children[0] = HAnimJoint50;

HAnimJoint48YYY.children = new X3D.MFNode();

HAnimJoint48ZZZ.children[0] = HAnimJoint49;

HAnimJoint47YYY.children = new X3D.MFNode();

HAnimJoint47ZZZ.children[0] = HAnimJoint48;

HAnimJoint46YYY.children = new X3D.MFNode();

HAnimJoint46ZZZ.children[0] = HAnimJoint47;

HAnimJoint36ZZZ.children[2] = HAnimJoint46;

HAnimJoint35YYY.children = new X3D.MFNode();

HAnimJoint35ZZZ.children[0] = HAnimJoint36;

let HAnimJoint51 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint51.name = "l_calcaneocuboid";
HAnimJoint51.DEF = "hanim_l_calcaneocuboid";
HAnimJoint51.center = new X3D.SFVec3f([0,1,0]);
HAnimJoint51.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint51.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint52 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint52.name = "l_transversetarsal";
HAnimJoint52.DEF = "hanim_l_transversetarsal";
HAnimJoint52.center = new X3D.SFVec3f([0,1,0]);
HAnimJoint52.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint52.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint53 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint53.name = "l_tarsometatarsal_4";
HAnimJoint53.DEF = "hanim_l_tarsometatarsal_4";
HAnimJoint53.center = new X3D.SFVec3f([0,1,0]);
HAnimJoint53.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint53.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint54 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint54.name = "l_metatarsophalangeal_4";
HAnimJoint54.DEF = "hanim_l_metatarsophalangeal_4";
HAnimJoint54.center = new X3D.SFVec3f([0,1,0]);
HAnimJoint54.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint54.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint55 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint55.name = "l_tarsal_proximal_interphalangeal_4";
HAnimJoint55.DEF = "hanim_l_tarsal_proximal_interphalangeal_4";
HAnimJoint55.center = new X3D.SFVec3f([0,1,0]);
HAnimJoint55.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint55.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint56 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint56.name = "l_tarsal_distal_interphalangeal_4";
HAnimJoint56.DEF = "hanim_l_tarsal_distal_interphalangeal_4";
HAnimJoint56.center = new X3D.SFVec3f([0,1,0]);
HAnimJoint56.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint56.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint55YYY.children = new X3D.MFNode();

HAnimJoint55ZZZ.children[0] = HAnimJoint56;

HAnimJoint54YYY.children = new X3D.MFNode();

HAnimJoint54ZZZ.children[0] = HAnimJoint55;

HAnimJoint53YYY.children = new X3D.MFNode();

HAnimJoint53ZZZ.children[0] = HAnimJoint54;

HAnimJoint52YYY.children = new X3D.MFNode();

HAnimJoint52ZZZ.children[0] = HAnimJoint53;

let HAnimJoint57 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint57.name = "l_tarsometatarsal_5";
HAnimJoint57.DEF = "hanim_l_tarsometatarsal_5";
HAnimJoint57.center = new X3D.SFVec3f([0,1,0]);
HAnimJoint57.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint57.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint58 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint58.name = "l_metatarsophalangeal_5";
HAnimJoint58.DEF = "hanim_l_metatarsophalangeal_5";
HAnimJoint58.center = new X3D.SFVec3f([0,1,0]);
HAnimJoint58.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint58.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint59 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint59.name = "l_tarsal_proximal_interphalangeal_5";
HAnimJoint59.DEF = "hanim_l_tarsal_proximal_interphalangeal_5";
HAnimJoint59.center = new X3D.SFVec3f([0,1,0]);
HAnimJoint59.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint59.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint60 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint60.name = "l_tarsal_distal_interphalangeal_5";
HAnimJoint60.DEF = "hanim_l_tarsal_distal_interphalangeal_5";
HAnimJoint60.center = new X3D.SFVec3f([0,1,0]);
HAnimJoint60.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint60.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint59YYY.children = new X3D.MFNode();

HAnimJoint59ZZZ.children[0] = HAnimJoint60;

HAnimJoint58YYY.children = new X3D.MFNode();

HAnimJoint58ZZZ.children[0] = HAnimJoint59;

HAnimJoint57YYY.children = new X3D.MFNode();

HAnimJoint57ZZZ.children[0] = HAnimJoint58;

HAnimJoint52ZZZ.children[1] = HAnimJoint57;

HAnimJoint51YYY.children = new X3D.MFNode();

HAnimJoint51ZZZ.children[0] = HAnimJoint52;

HAnimJoint35ZZZ.children[1] = HAnimJoint51;

HAnimJoint34YYY.children = new X3D.MFNode();

HAnimJoint34ZZZ.children[0] = HAnimJoint35;

HAnimJoint33YYY.children = new X3D.MFNode();

HAnimJoint33ZZZ.children[0] = HAnimJoint34;

HAnimJoint32YYY.children = new X3D.MFNode();

HAnimJoint32ZZZ.children[0] = HAnimJoint33;

let HAnimJoint61 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint61.name = "r_hip";
HAnimJoint61.DEF = "hanim_r_hip";
HAnimJoint61.center = new X3D.SFVec3f([-0.095,0.9171,0.0029]);
HAnimJoint61.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint61.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint62 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint62.name = "r_knee";
HAnimJoint62.DEF = "hanim_r_knee";
HAnimJoint62.center = new X3D.SFVec3f([-0.0867,0.4913,0.0318]);
HAnimJoint62.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint62.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint63 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint63.name = "r_talocrural";
HAnimJoint63.DEF = "hanim_r_talocrural";
HAnimJoint63.center = new X3D.SFVec3f([-0.0801,0.0712,-0.0766]);
HAnimJoint63.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint63.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint64 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint64.name = "r_talocalcaneonavicular";
HAnimJoint64.DEF = "hanim_r_talocalcaneonavicular";
HAnimJoint64.center = new X3D.SFVec3f([0,1,0]);
HAnimJoint64.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint64.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint65 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint65.name = "r_cuneonavicular_1";
HAnimJoint65.DEF = "hanim_r_cuneonavicular_1";
HAnimJoint65.center = new X3D.SFVec3f([0,1,0]);
HAnimJoint65.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint65.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint66 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint66.name = "r_tarsometatarsal_1";
HAnimJoint66.DEF = "hanim_r_tarsometatarsal_1";
HAnimJoint66.center = new X3D.SFVec3f([0,1,0]);
HAnimJoint66.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint66.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint67 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint67.name = "r_metatarsophalangeal_1";
HAnimJoint67.DEF = "hanim_r_metatarsophalangeal_1";
HAnimJoint67.center = new X3D.SFVec3f([0,1,0]);
HAnimJoint67.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint67.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint68 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint68.name = "r_tarsal_interphalangeal_1";
HAnimJoint68.DEF = "hanim_r_tarsal_interphalangeal_1";
HAnimJoint68.center = new X3D.SFVec3f([0,1,0]);
HAnimJoint68.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint68.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint67YYY.children = new X3D.MFNode();

HAnimJoint67ZZZ.children[0] = HAnimJoint68;

HAnimJoint66YYY.children = new X3D.MFNode();

HAnimJoint66ZZZ.children[0] = HAnimJoint67;

HAnimJoint65YYY.children = new X3D.MFNode();

HAnimJoint65ZZZ.children[0] = HAnimJoint66;

HAnimJoint64YYY.children = new X3D.MFNode();

HAnimJoint64ZZZ.children[0] = HAnimJoint65;

let HAnimJoint69 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint69.name = "r_cuneonavicular_2";
HAnimJoint69.DEF = "hanim_r_cuneonavicular_2";
HAnimJoint69.center = new X3D.SFVec3f([0,1,0]);
HAnimJoint69.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint69.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint70 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint70.name = "r_tarsometatarsal_2";
HAnimJoint70.DEF = "hanim_r_tarsometatarsal_2";
HAnimJoint70.center = new X3D.SFVec3f([0,1,0]);
HAnimJoint70.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint70.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint71 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint71.name = "r_metatarsophalangeal_2";
HAnimJoint71.DEF = "hanim_r_metatarsophalangeal_2";
HAnimJoint71.center = new X3D.SFVec3f([0,1,0]);
HAnimJoint71.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint71.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint72 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint72.name = "r_tarsal_proximal_interphalangeal_2";
HAnimJoint72.DEF = "hanim_r_tarsal_proximal_interphalangeal_2";
HAnimJoint72.center = new X3D.SFVec3f([0,1,0]);
HAnimJoint72.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint72.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint73 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint73.name = "r_tarsal_distal_interphalangeal_2";
HAnimJoint73.DEF = "hanim_r_tarsal_distal_interphalangeal_2";
HAnimJoint73.center = new X3D.SFVec3f([0,1,0]);
HAnimJoint73.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint73.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint72YYY.children = new X3D.MFNode();

HAnimJoint72ZZZ.children[0] = HAnimJoint73;

HAnimJoint71YYY.children = new X3D.MFNode();

HAnimJoint71ZZZ.children[0] = HAnimJoint72;

HAnimJoint70YYY.children = new X3D.MFNode();

HAnimJoint70ZZZ.children[0] = HAnimJoint71;

HAnimJoint69YYY.children = new X3D.MFNode();

HAnimJoint69ZZZ.children[0] = HAnimJoint70;

HAnimJoint64ZZZ.children[1] = HAnimJoint69;

let HAnimJoint74 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint74.name = "r_cuneonavicular_3";
HAnimJoint74.DEF = "hanim_r_cuneonavicular_3";
HAnimJoint74.center = new X3D.SFVec3f([0,1,0]);
HAnimJoint74.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint74.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint75 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint75.name = "r_tarsometatarsal_3";
HAnimJoint75.DEF = "hanim_r_tarsometatarsal_3";
HAnimJoint75.center = new X3D.SFVec3f([0,1,0]);
HAnimJoint75.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint75.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint76 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint76.name = "r_metatarsophalangeal_3";
HAnimJoint76.DEF = "hanim_r_metatarsophalangeal_3";
HAnimJoint76.center = new X3D.SFVec3f([0,1,0]);
HAnimJoint76.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint76.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint77 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint77.name = "r_tarsal_proximal_interphalangeal_3";
HAnimJoint77.DEF = "hanim_r_tarsal_proximal_interphalangeal_3";
HAnimJoint77.center = new X3D.SFVec3f([0,1,0]);
HAnimJoint77.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint77.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint78 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint78.name = "r_tarsal_distal_interphalangeal_3";
HAnimJoint78.DEF = "hanim_r_tarsal_distal_interphalangeal_3";
HAnimJoint78.center = new X3D.SFVec3f([0,1,0]);
HAnimJoint78.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint78.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint77YYY.children = new X3D.MFNode();

HAnimJoint77ZZZ.children[0] = HAnimJoint78;

HAnimJoint76YYY.children = new X3D.MFNode();

HAnimJoint76ZZZ.children[0] = HAnimJoint77;

HAnimJoint75YYY.children = new X3D.MFNode();

HAnimJoint75ZZZ.children[0] = HAnimJoint76;

HAnimJoint74YYY.children = new X3D.MFNode();

HAnimJoint74ZZZ.children[0] = HAnimJoint75;

HAnimJoint64ZZZ.children[2] = HAnimJoint74;

HAnimJoint63YYY.children = new X3D.MFNode();

HAnimJoint63ZZZ.children[0] = HAnimJoint64;

let HAnimJoint79 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint79.name = "r_calcaneocuboid";
HAnimJoint79.DEF = "hanim_r_calcaneocuboid";
HAnimJoint79.center = new X3D.SFVec3f([0,1,0]);
HAnimJoint79.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint79.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint80 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint80.name = "r_transversetarsal";
HAnimJoint80.DEF = "hanim_r_transversetarsal";
HAnimJoint80.center = new X3D.SFVec3f([0,1,0]);
HAnimJoint80.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint80.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint81 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint81.name = "r_tarsometatarsal_4";
HAnimJoint81.DEF = "hanim_r_tarsometatarsal_4";
HAnimJoint81.center = new X3D.SFVec3f([0,1,0]);
HAnimJoint81.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint81.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint82 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint82.name = "r_metatarsophalangeal_4";
HAnimJoint82.DEF = "hanim_r_metatarsophalangeal_4";
HAnimJoint82.center = new X3D.SFVec3f([0,1,0]);
HAnimJoint82.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint82.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint83 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint83.name = "r_tarsal_proximal_interphalangeal_4";
HAnimJoint83.DEF = "hanim_r_tarsal_proximal_interphalangeal_4";
HAnimJoint83.center = new X3D.SFVec3f([0,1,0]);
HAnimJoint83.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint83.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint84 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint84.name = "r_tarsal_distal_interphalangeal_4";
HAnimJoint84.DEF = "hanim_r_tarsal_distal_interphalangeal_4";
HAnimJoint84.center = new X3D.SFVec3f([0,1,0]);
HAnimJoint84.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint84.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint83YYY.children = new X3D.MFNode();

HAnimJoint83ZZZ.children[0] = HAnimJoint84;

HAnimJoint82YYY.children = new X3D.MFNode();

HAnimJoint82ZZZ.children[0] = HAnimJoint83;

HAnimJoint81YYY.children = new X3D.MFNode();

HAnimJoint81ZZZ.children[0] = HAnimJoint82;

HAnimJoint80YYY.children = new X3D.MFNode();

HAnimJoint80ZZZ.children[0] = HAnimJoint81;

let HAnimJoint85 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint85.name = "r_tarsometatarsal_5";
HAnimJoint85.DEF = "hanim_r_tarsometatarsal_5";
HAnimJoint85.center = new X3D.SFVec3f([0,1,0]);
HAnimJoint85.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint85.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint86 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint86.name = "r_metatarsophalangeal_5";
HAnimJoint86.DEF = "hanim_r_metatarsophalangeal_5";
HAnimJoint86.center = new X3D.SFVec3f([0,1,0]);
HAnimJoint86.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint86.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint87 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint87.name = "r_tarsal_proximal_interphalangeal_5";
HAnimJoint87.DEF = "hanim_r_tarsal_proximal_interphalangeal_5";
HAnimJoint87.center = new X3D.SFVec3f([0,1,0]);
HAnimJoint87.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint87.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint88 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint88.name = "r_tarsal_distal_interphalangeal_5";
HAnimJoint88.DEF = "hanim_r_tarsal_distal_interphalangeal_5";
HAnimJoint88.center = new X3D.SFVec3f([0,1,0]);
HAnimJoint88.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint88.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint87YYY.children = new X3D.MFNode();

HAnimJoint87ZZZ.children[0] = HAnimJoint88;

HAnimJoint86YYY.children = new X3D.MFNode();

HAnimJoint86ZZZ.children[0] = HAnimJoint87;

HAnimJoint85YYY.children = new X3D.MFNode();

HAnimJoint85ZZZ.children[0] = HAnimJoint86;

HAnimJoint80ZZZ.children[1] = HAnimJoint85;

HAnimJoint79YYY.children = new X3D.MFNode();

HAnimJoint79ZZZ.children[0] = HAnimJoint80;

HAnimJoint63ZZZ.children[1] = HAnimJoint79;

HAnimJoint62YYY.children = new X3D.MFNode();

HAnimJoint62ZZZ.children[0] = HAnimJoint63;

HAnimJoint61YYY.children = new X3D.MFNode();

HAnimJoint61ZZZ.children[0] = HAnimJoint62;

HAnimJoint32ZZZ.children[1] = HAnimJoint61;

HAnimJoint31YYY.children = new X3D.MFNode();

HAnimJoint31ZZZ.children[0] = HAnimJoint32;

let HAnimJoint89 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint89.name = "vl5";
HAnimJoint89.DEF = "hanim_vl5";
HAnimJoint89.center = new X3D.SFVec3f([0.0028,1.0568,-0.0776]);
HAnimJoint89.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint89.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint90 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint90.name = "vl4";
HAnimJoint90.DEF = "hanim_vl4";
HAnimJoint90.center = new X3D.SFVec3f([0.0035,1.0925,-0.0787]);
HAnimJoint90.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint90.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint91 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint91.name = "vl3";
HAnimJoint91.DEF = "hanim_vl3";
HAnimJoint91.center = new X3D.SFVec3f([0.0041,1.1276,-0.0796]);
HAnimJoint91.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint91.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint92 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint92.name = "vl2";
HAnimJoint92.DEF = "hanim_vl2";
HAnimJoint92.center = new X3D.SFVec3f([0.0045,1.1546,-0.08]);
HAnimJoint92.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint92.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint93 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint93.name = "vl1";
HAnimJoint93.DEF = "hanim_vl1";
HAnimJoint93.center = new X3D.SFVec3f([0.0048,1.1912,-0.0805]);
HAnimJoint93.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint93.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint94 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint94.name = "vt12";
HAnimJoint94.DEF = "hanim_vt12";
HAnimJoint94.center = new X3D.SFVec3f([0.0051,1.2278,-0.0808]);
HAnimJoint94.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint94.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint95 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint95.name = "vt11";
HAnimJoint95.DEF = "hanim_vt11";
HAnimJoint95.center = new X3D.SFVec3f([0.0053,1.2679,-0.081]);
HAnimJoint95.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint95.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint96 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint96.name = "vt10";
HAnimJoint96.DEF = "hanim_vt10";
HAnimJoint96.center = new X3D.SFVec3f([0.0056,1.2848,-0.0822]);
HAnimJoint96.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint96.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint97 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint97.name = "vt9";
HAnimJoint97.DEF = "hanim_vt9";
HAnimJoint97.center = new X3D.SFVec3f([0.0057,1.3126,-0.0838]);
HAnimJoint97.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint97.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint98 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint98.name = "vt8";
HAnimJoint98.DEF = "hanim_vt8";
HAnimJoint98.center = new X3D.SFVec3f([0.0057,1.3382,-0.0845]);
HAnimJoint98.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint98.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint99 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint99.name = "vt7";
HAnimJoint99.DEF = "hanim_vt7";
HAnimJoint99.center = new X3D.SFVec3f([0.0058,1.3625,-0.0833]);
HAnimJoint99.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint99.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint100 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint100.name = "vt6";
HAnimJoint100.DEF = "hanim_vt6";
HAnimJoint100.center = new X3D.SFVec3f([0.0059,1.3866,-0.08]);
HAnimJoint100.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint100.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint101 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint101.name = "vt5";
HAnimJoint101.DEF = "hanim_vt5";
HAnimJoint101.center = new X3D.SFVec3f([0.006,1.4102,-0.0745]);
HAnimJoint101.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint101.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint102 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint102.name = "vt4";
HAnimJoint102.DEF = "hanim_vt4";
HAnimJoint102.center = new X3D.SFVec3f([0.0061,1.432,-0.0675]);
HAnimJoint102.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint102.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint103 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint103.name = "vt3";
HAnimJoint103.DEF = "hanim_vt3";
HAnimJoint103.center = new X3D.SFVec3f([0.0062,1.4583,-0.057]);
HAnimJoint103.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint103.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint104 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint104.name = "vt2";
HAnimJoint104.DEF = "hanim_vt2";
HAnimJoint104.center = new X3D.SFVec3f([0.0063,1.4761,-0.0484]);
HAnimJoint104.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint104.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint105 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint105.name = "vt1";
HAnimJoint105.DEF = "hanim_vt1";
HAnimJoint105.center = new X3D.SFVec3f([0.0065,1.4951,-0.0387]);
HAnimJoint105.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint105.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint106 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint106.name = "vc7";
HAnimJoint106.DEF = "hanim_vc7";
HAnimJoint106.center = new X3D.SFVec3f([0.0066,1.5132,-0.0301]);
HAnimJoint106.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint106.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint107 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint107.name = "vc6";
HAnimJoint107.DEF = "hanim_vc6";
HAnimJoint107.center = new X3D.SFVec3f([0.0066,1.5357,-0.0143]);
HAnimJoint107.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint107.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint108 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint108.name = "vc5";
HAnimJoint108.DEF = "hanim_vc5";
HAnimJoint108.center = new X3D.SFVec3f([0.0066,1.552,-0.0082]);
HAnimJoint108.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint108.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint109 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint109.name = "vc4";
HAnimJoint109.DEF = "hanim_vc4";
HAnimJoint109.center = new X3D.SFVec3f([0.0066,1.5662,-0.0084]);
HAnimJoint109.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint109.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint110 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint110.name = "vc3";
HAnimJoint110.DEF = "hanim_vc3";
HAnimJoint110.center = new X3D.SFVec3f([0.0066,1.58,-0.0103]);
HAnimJoint110.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint110.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint111 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint111.name = "vc2";
HAnimJoint111.DEF = "hanim_vc2";
HAnimJoint111.center = new X3D.SFVec3f([0.0066,1.5928,-0.0103]);
HAnimJoint111.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint111.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint112 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint112.name = "vc1";
HAnimJoint112.DEF = "hanim_vc1";
HAnimJoint112.center = new X3D.SFVec3f([0.0066,1.6144,-0.0034]);
HAnimJoint112.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint112.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint113 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint113.name = "skullbase";
HAnimJoint113.DEF = "hanim_skullbase";
HAnimJoint113.center = new X3D.SFVec3f([0.0044,1.6209,0.0236]);
HAnimJoint113.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint113.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint114 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint114.name = "l_eyelid_joint";
HAnimJoint114.DEF = "hanim_l_eyelid_joint";
HAnimJoint114.center = new X3D.SFVec3f([0,1,0]);
HAnimJoint114.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint114.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint113YYY.children = new X3D.MFNode();

HAnimJoint113ZZZ.children[0] = HAnimJoint114;

let HAnimJoint115 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint115.name = "r_eyelid_joint";
HAnimJoint115.DEF = "hanim_r_eyelid_joint";
HAnimJoint115.center = new X3D.SFVec3f([0,1,0]);
HAnimJoint115.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint115.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint113ZZZ.children[1] = HAnimJoint115;

let HAnimJoint116 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint116.name = "l_eyeball_joint";
HAnimJoint116.DEF = "hanim_l_eyeball_joint";
HAnimJoint116.center = new X3D.SFVec3f([0,1,0]);
HAnimJoint116.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint116.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint113ZZZ.children[2] = HAnimJoint116;

let HAnimJoint117 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint117.name = "r_eyeball_joint";
HAnimJoint117.DEF = "hanim_r_eyeball_joint";
HAnimJoint117.center = new X3D.SFVec3f([0,1,0]);
HAnimJoint117.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint117.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint113ZZZ.children[3] = HAnimJoint117;

let HAnimJoint118 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint118.name = "l_eyebrow_joint";
HAnimJoint118.DEF = "hanim_l_eyebrow_joint";
HAnimJoint118.center = new X3D.SFVec3f([0,1,0]);
HAnimJoint118.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint118.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint113ZZZ.children[4] = HAnimJoint118;

let HAnimJoint119 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint119.name = "r_eyebrow_joint";
HAnimJoint119.DEF = "hanim_r_eyebrow_joint";
HAnimJoint119.center = new X3D.SFVec3f([0,1,0]);
HAnimJoint119.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint119.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint113ZZZ.children[5] = HAnimJoint119;

let HAnimJoint120 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint120.name = "temporomandibular";
HAnimJoint120.DEF = "hanim_temporomandibular";
HAnimJoint120.center = new X3D.SFVec3f([0,1,0]);
HAnimJoint120.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint120.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint113ZZZ.children[6] = HAnimJoint120;

HAnimJoint112YYY.children = new X3D.MFNode();

HAnimJoint112ZZZ.children[0] = HAnimJoint113;

HAnimJoint111YYY.children = new X3D.MFNode();

HAnimJoint111ZZZ.children[0] = HAnimJoint112;

HAnimJoint110YYY.children = new X3D.MFNode();

HAnimJoint110ZZZ.children[0] = HAnimJoint111;

HAnimJoint109YYY.children = new X3D.MFNode();

HAnimJoint109ZZZ.children[0] = HAnimJoint110;

HAnimJoint108YYY.children = new X3D.MFNode();

HAnimJoint108ZZZ.children[0] = HAnimJoint109;

HAnimJoint107YYY.children = new X3D.MFNode();

HAnimJoint107ZZZ.children[0] = HAnimJoint108;

HAnimJoint106YYY.children = new X3D.MFNode();

HAnimJoint106ZZZ.children[0] = HAnimJoint107;

HAnimJoint105YYY.children = new X3D.MFNode();

HAnimJoint105ZZZ.children[0] = HAnimJoint106;

let HAnimJoint121 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint121.name = "l_sternoclavicular";
HAnimJoint121.DEF = "hanim_l_sternoclavicular";
HAnimJoint121.center = new X3D.SFVec3f([0.082,1.4488,-0.0353]);
HAnimJoint121.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint121.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint122 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint122.name = "l_acromioclavicular";
HAnimJoint122.DEF = "hanim_l_acromioclavicular";
HAnimJoint122.center = new X3D.SFVec3f([0.0962,1.4269,-0.0424]);
HAnimJoint122.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint122.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint123 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint123.name = "l_shoulder";
HAnimJoint123.DEF = "hanim_l_shoulder";
HAnimJoint123.center = new X3D.SFVec3f([0.2029,1.4376,-0.0387]);
HAnimJoint123.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint123.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint124 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint124.name = "l_elbow";
HAnimJoint124.DEF = "hanim_l_elbow";
HAnimJoint124.center = new X3D.SFVec3f([0.2014,1.1357,-0.0682]);
HAnimJoint124.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint124.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint125 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint125.name = "l_radiocarpal";
HAnimJoint125.DEF = "hanim_l_radiocarpal";
HAnimJoint125.center = new X3D.SFVec3f([0.1984,0.8663,-0.0583]);
HAnimJoint125.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint125.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint126 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint126.name = "l_midcarpal_1";
HAnimJoint126.DEF = "hanim_l_midcarpal_1";
HAnimJoint126.center = new X3D.SFVec3f([0,1,0]);
HAnimJoint126.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint126.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint127 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint127.name = "l_carpometacarpal_1";
HAnimJoint127.DEF = "hanim_l_carpometacarpal_1";
HAnimJoint127.center = new X3D.SFVec3f([0.1924,0.8472,-0.0534]);
HAnimJoint127.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint127.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint128 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint128.name = "l_metacarpophalangeal_1";
HAnimJoint128.DEF = "hanim_l_metacarpophalangeal_1";
HAnimJoint128.center = new X3D.SFVec3f([0.1951,0.8226,0.0246]);
HAnimJoint128.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint128.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint129 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint129.name = "l_carpal_interphalangeal_1";
HAnimJoint129.DEF = "hanim_l_carpal_interphalangeal_1";
HAnimJoint129.center = new X3D.SFVec3f([0.1955,0.8159,0.0464]);
HAnimJoint129.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint129.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint128YYY.children = new X3D.MFNode();

HAnimJoint128ZZZ.children[0] = HAnimJoint129;

HAnimJoint127YYY.children = new X3D.MFNode();

HAnimJoint127ZZZ.children[0] = HAnimJoint128;

HAnimJoint126YYY.children = new X3D.MFNode();

HAnimJoint126ZZZ.children[0] = HAnimJoint127;

HAnimJoint125YYY.children = new X3D.MFNode();

HAnimJoint125ZZZ.children[0] = HAnimJoint126;

let HAnimJoint130 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint130.name = "l_midcarpal_2";
HAnimJoint130.DEF = "hanim_l_midcarpal_2";
HAnimJoint130.center = new X3D.SFVec3f([0,1,0]);
HAnimJoint130.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint130.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint131 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint131.name = "l_carpometacarpal_2";
HAnimJoint131.DEF = "hanim_l_carpometacarpal_2";
HAnimJoint131.center = new X3D.SFVec3f([0.1983,0.8024,-0.028]);
HAnimJoint131.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint131.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint132 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint132.name = "l_metacarpophalangeal_2";
HAnimJoint132.DEF = "hanim_l_metacarpophalangeal_2";
HAnimJoint132.center = new X3D.SFVec3f([0.1983,0.7815,-0.028]);
HAnimJoint132.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint132.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint133 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint133.name = "l_carpal_proximal_interphalangeal_2";
HAnimJoint133.DEF = "hanim_l_carpal_proximal_interphalangeal_2";
HAnimJoint133.center = new X3D.SFVec3f([0.2017,0.7363,-0.0248]);
HAnimJoint133.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint133.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint134 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint134.name = "l_carpal_distal_interphalangeal_2";
HAnimJoint134.DEF = "hanim_l_carpal_distal_interphalangeal_2";
HAnimJoint134.center = new X3D.SFVec3f([0.2028,0.7139,-0.0236]);
HAnimJoint134.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint134.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint133YYY.children = new X3D.MFNode();

HAnimJoint133ZZZ.children[0] = HAnimJoint134;

HAnimJoint132YYY.children = new X3D.MFNode();

HAnimJoint132ZZZ.children[0] = HAnimJoint133;

HAnimJoint131YYY.children = new X3D.MFNode();

HAnimJoint131ZZZ.children[0] = HAnimJoint132;

HAnimJoint130YYY.children = new X3D.MFNode();

HAnimJoint130ZZZ.children[0] = HAnimJoint131;

HAnimJoint125ZZZ.children[1] = HAnimJoint130;

let HAnimJoint135 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint135.name = "l_midcarpal_3";
HAnimJoint135.DEF = "hanim_l_midcarpal_3";
HAnimJoint135.center = new X3D.SFVec3f([0,1,0]);
HAnimJoint135.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint135.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint136 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint136.name = "l_carpometacarpal_3";
HAnimJoint136.DEF = "hanim_l_carpometacarpal_3";
HAnimJoint136.center = new X3D.SFVec3f([0.1987,0.8029,-0.053]);
HAnimJoint136.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint136.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint137 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint137.name = "l_metacarpophalangeal_3";
HAnimJoint137.DEF = "hanim_l_metacarpophalangeal_3";
HAnimJoint137.center = new X3D.SFVec3f([0.1987,0.7818,-0.053]);
HAnimJoint137.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint137.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint138 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint138.name = "l_carpal_proximal_interphalangeal_3";
HAnimJoint138.DEF = "hanim_l_carpal_proximal_interphalangeal_3";
HAnimJoint138.center = new X3D.SFVec3f([0.2013,0.7273,-0.0503]);
HAnimJoint138.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint138.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint139 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint139.name = "l_carpal_distal_interphalangeal_3";
HAnimJoint139.DEF = "hanim_l_carpal_distal_interphalangeal_3";
HAnimJoint139.center = new X3D.SFVec3f([0.2026,0.7011,-0.0494]);
HAnimJoint139.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint139.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint138YYY.children = new X3D.MFNode();

HAnimJoint138ZZZ.children[0] = HAnimJoint139;

HAnimJoint137YYY.children = new X3D.MFNode();

HAnimJoint137ZZZ.children[0] = HAnimJoint138;

HAnimJoint136YYY.children = new X3D.MFNode();

HAnimJoint136ZZZ.children[0] = HAnimJoint137;

HAnimJoint135YYY.children = new X3D.MFNode();

HAnimJoint135ZZZ.children[0] = HAnimJoint136;

HAnimJoint125ZZZ.children[2] = HAnimJoint135;

let HAnimJoint140 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint140.name = "l_midcarpal_4_5";
HAnimJoint140.DEF = "hanim_l_midcarpal_4_5";
HAnimJoint140.center = new X3D.SFVec3f([0,1,0]);
HAnimJoint140.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint140.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint141 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint141.name = "l_carpometacarpal_4";
HAnimJoint141.DEF = "hanim_l_carpometacarpal_4";
HAnimJoint141.center = new X3D.SFVec3f([0.1956,0.8019,-0.0794]);
HAnimJoint141.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint141.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint142 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint142.name = "l_metacarpophalangeal_4";
HAnimJoint142.DEF = "hanim_l_metacarpophalangeal_4";
HAnimJoint142.center = new X3D.SFVec3f([0.1956,0.7815,-0.0794]);
HAnimJoint142.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint142.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint143 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint143.name = "l_carpal_proximal_interphalangeal_4";
HAnimJoint143.DEF = "hanim_l_carpal_proximal_interphalangeal_4";
HAnimJoint143.center = new X3D.SFVec3f([0.1973,0.7287,-0.0777]);
HAnimJoint143.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint143.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint144 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint144.name = "l_carpal_distal_interphalangeal_4";
HAnimJoint144.DEF = "hanim_l_carpal_distal_interphalangeal_4";
HAnimJoint144.center = new X3D.SFVec3f([0.1983,0.7045,-0.0767]);
HAnimJoint144.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint144.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint143YYY.children = new X3D.MFNode();

HAnimJoint143ZZZ.children[0] = HAnimJoint144;

HAnimJoint142YYY.children = new X3D.MFNode();

HAnimJoint142ZZZ.children[0] = HAnimJoint143;

HAnimJoint141YYY.children = new X3D.MFNode();

HAnimJoint141ZZZ.children[0] = HAnimJoint142;

HAnimJoint140YYY.children = new X3D.MFNode();

HAnimJoint140ZZZ.children[0] = HAnimJoint141;

let HAnimJoint145 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint145.name = "l_carpometacarpal_5";
HAnimJoint145.DEF = "hanim_l_carpometacarpal_5";
HAnimJoint145.center = new X3D.SFVec3f([0.1925,0.8066,-0.1036]);
HAnimJoint145.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint145.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint146 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint146.name = "l_metacarpophalangeal_5";
HAnimJoint146.DEF = "hanim_l_metacarpophalangeal_5";
HAnimJoint146.center = new X3D.SFVec3f([0.1925,0.7866,-0.1036]);
HAnimJoint146.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint146.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint147 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint147.name = "l_carpal_proximal_interphalangeal_5";
HAnimJoint147.DEF = "hanim_l_carpal_proximal_interphalangeal_5";
HAnimJoint147.center = new X3D.SFVec3f([0.1938,0.7452,-0.1024]);
HAnimJoint147.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint147.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint148 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint148.name = "l_carpal_distal_interphalangeal_5";
HAnimJoint148.DEF = "hanim_l_carpal_distal_interphalangeal_5";
HAnimJoint148.center = new X3D.SFVec3f([0.1948,0.7277,-0.1017]);
HAnimJoint148.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint148.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint147YYY.children = new X3D.MFNode();

HAnimJoint147ZZZ.children[0] = HAnimJoint148;

HAnimJoint146YYY.children = new X3D.MFNode();

HAnimJoint146ZZZ.children[0] = HAnimJoint147;

HAnimJoint145YYY.children = new X3D.MFNode();

HAnimJoint145ZZZ.children[0] = HAnimJoint146;

HAnimJoint140ZZZ.children[1] = HAnimJoint145;

HAnimJoint125ZZZ.children[3] = HAnimJoint140;

HAnimJoint124YYY.children = new X3D.MFNode();

HAnimJoint124ZZZ.children[0] = HAnimJoint125;

HAnimJoint123YYY.children = new X3D.MFNode();

HAnimJoint123ZZZ.children[0] = HAnimJoint124;

HAnimJoint122YYY.children = new X3D.MFNode();

HAnimJoint122ZZZ.children[0] = HAnimJoint123;

HAnimJoint121YYY.children = new X3D.MFNode();

HAnimJoint121ZZZ.children[0] = HAnimJoint122;

HAnimJoint105ZZZ.children[1] = HAnimJoint121;

let HAnimJoint149 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint149.name = "r_sternoclavicular";
HAnimJoint149.DEF = "hanim_r_sternoclavicular";
HAnimJoint149.center = new X3D.SFVec3f([-0.0694,1.46,-0.033]);
HAnimJoint149.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint149.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint150 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint150.name = "r_acromioclavicular";
HAnimJoint150.DEF = "hanim_r_acromioclavicular";
HAnimJoint150.center = new X3D.SFVec3f([-0.0836,1.4281,-0.0401]);
HAnimJoint150.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint150.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint151 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint151.name = "r_shoulder";
HAnimJoint151.DEF = "hanim_r_shoulder";
HAnimJoint151.center = new X3D.SFVec3f([-0.1907,1.4407,-0.0325]);
HAnimJoint151.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint151.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint152 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint152.name = "r_elbow";
HAnimJoint152.DEF = "hanim_r_elbow";
HAnimJoint152.center = new X3D.SFVec3f([-0.1949,1.1388,-0.062]);
HAnimJoint152.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint152.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint153 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint153.name = "r_radiocarpal";
HAnimJoint153.DEF = "hanim_r_radiocarpal";
HAnimJoint153.center = new X3D.SFVec3f([-0.1959,0.8694,-0.0521]);
HAnimJoint153.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint153.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint154 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint154.name = "r_midcarpal_1";
HAnimJoint154.DEF = "hanim_r_midcarpal_1";
HAnimJoint154.center = new X3D.SFVec3f([0,1,0]);
HAnimJoint154.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint154.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint155 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint155.name = "r_carpometacarpal_1";
HAnimJoint155.DEF = "hanim_r_carpometacarpal_1";
HAnimJoint155.center = new X3D.SFVec3f([-0.1899,0.8502,-0.0473]);
HAnimJoint155.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint155.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint156 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint156.name = "r_metacarpophalangeal_1";
HAnimJoint156.DEF = "hanim_r_metacarpophalangeal_1";
HAnimJoint156.center = new X3D.SFVec3f([-0.1874,0.8256,0.0306]);
HAnimJoint156.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint156.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint157 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint157.name = "r_carpal_interphalangeal_1";
HAnimJoint157.DEF = "hanim_r_carpal_interphalangeal_1";
HAnimJoint157.center = new X3D.SFVec3f([-0.1864,0.819,0.0506]);
HAnimJoint157.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint157.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint156YYY.children = new X3D.MFNode();

HAnimJoint156ZZZ.children[0] = HAnimJoint157;

HAnimJoint155YYY.children = new X3D.MFNode();

HAnimJoint155ZZZ.children[0] = HAnimJoint156;

HAnimJoint154YYY.children = new X3D.MFNode();

HAnimJoint154ZZZ.children[0] = HAnimJoint155;

HAnimJoint153YYY.children = new X3D.MFNode();

HAnimJoint153ZZZ.children[0] = HAnimJoint154;

let HAnimJoint158 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint158.name = "r_midcarpal_2";
HAnimJoint158.DEF = "hanim_r_midcarpal_2";
HAnimJoint158.center = new X3D.SFVec3f([0,1,0]);
HAnimJoint158.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint158.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint159 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint159.name = "r_carpometacarpal_2";
HAnimJoint159.DEF = "hanim_r_carpometacarpal_2";
HAnimJoint159.center = new X3D.SFVec3f([-0.1961,0.8055,-0.0218]);
HAnimJoint159.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint159.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint160 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint160.name = "r_metacarpophalangeal_2";
HAnimJoint160.DEF = "hanim_r_metacarpophalangeal_2";
HAnimJoint160.center = new X3D.SFVec3f([-0.1961,0.7846,-0.0218]);
HAnimJoint160.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint160.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint161 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint161.name = "r_carpal_proximal_interphalangeal_2";
HAnimJoint161.DEF = "hanim_r_carpal_proximal_interphalangeal_2";
HAnimJoint161.center = new X3D.SFVec3f([-0.1954,0.7393,-0.0185]);
HAnimJoint161.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint161.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint162 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint162.name = "r_carpal_distal_interphalangeal_2";
HAnimJoint162.DEF = "hanim_r_carpal_distal_interphalangeal_2";
HAnimJoint162.center = new X3D.SFVec3f([-0.1945,0.7169,-0.0173]);
HAnimJoint162.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint162.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint161YYY.children = new X3D.MFNode();

HAnimJoint161ZZZ.children[0] = HAnimJoint162;

HAnimJoint160YYY.children = new X3D.MFNode();

HAnimJoint160ZZZ.children[0] = HAnimJoint161;

HAnimJoint159YYY.children = new X3D.MFNode();

HAnimJoint159ZZZ.children[0] = HAnimJoint160;

HAnimJoint158YYY.children = new X3D.MFNode();

HAnimJoint158ZZZ.children[0] = HAnimJoint159;

HAnimJoint153ZZZ.children[1] = HAnimJoint158;

let HAnimJoint163 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint163.name = "r_midcarpal_3";
HAnimJoint163.DEF = "hanim_r_midcarpal_3";
HAnimJoint163.center = new X3D.SFVec3f([0,1,0]);
HAnimJoint163.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint163.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint164 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint164.name = "r_carpometacarpal_3";
HAnimJoint164.DEF = "hanim_r_carpometacarpal_3";
HAnimJoint164.center = new X3D.SFVec3f([-0.1972,0.806,-0.0468]);
HAnimJoint164.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint164.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint165 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint165.name = "r_metacarpophalangeal_3";
HAnimJoint165.DEF = "hanim_r_metacarpophalangeal_3";
HAnimJoint165.center = new X3D.SFVec3f([-0.1972,0.7849,-0.0468]);
HAnimJoint165.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint165.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint166 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint166.name = "r_carpal_proximal_interphalangeal_3";
HAnimJoint166.DEF = "hanim_r_carpal_proximal_interphalangeal_3";
HAnimJoint166.center = new X3D.SFVec3f([-0.195,0.7304,-0.0441]);
HAnimJoint166.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint166.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint167 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint167.name = "r_carpal_distal_interphalangeal_3";
HAnimJoint167.DEF = "hanim_r_carpal_distal_interphalangeal_3";
HAnimJoint167.center = new X3D.SFVec3f([-0.1939,0.7042,-0.0432]);
HAnimJoint167.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint167.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint166YYY.children = new X3D.MFNode();

HAnimJoint166ZZZ.children[0] = HAnimJoint167;

HAnimJoint165YYY.children = new X3D.MFNode();

HAnimJoint165ZZZ.children[0] = HAnimJoint166;

HAnimJoint164YYY.children = new X3D.MFNode();

HAnimJoint164ZZZ.children[0] = HAnimJoint165;

HAnimJoint163YYY.children = new X3D.MFNode();

HAnimJoint163ZZZ.children[0] = HAnimJoint164;

HAnimJoint153ZZZ.children[2] = HAnimJoint163;

let HAnimJoint168 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint168.name = "r_midcarpal_4_5";
HAnimJoint168.DEF = "hanim_r_midcarpal_4_5";
HAnimJoint168.center = new X3D.SFVec3f([0,1,0]);
HAnimJoint168.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint168.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint169 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint169.name = "r_carpometacarpal_4";
HAnimJoint169.DEF = "hanim_r_carpometacarpal_4";
HAnimJoint169.center = new X3D.SFVec3f([-0.1951,0.8049,-0.0732]);
HAnimJoint169.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint169.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint170 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint170.name = "r_metacarpophalangeal_4";
HAnimJoint170.DEF = "hanim_r_metacarpophalangeal_4";
HAnimJoint170.center = new X3D.SFVec3f([-0.1951,0.7845,-0.0732]);
HAnimJoint170.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint170.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint171 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint171.name = "r_carpal_proximal_interphalangeal_4";
HAnimJoint171.DEF = "hanim_r_carpal_proximal_interphalangeal_4";
HAnimJoint171.center = new X3D.SFVec3f([-0.192,0.7318,-0.0716]);
HAnimJoint171.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint171.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint172 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint172.name = "r_carpal_distal_interphalangeal_4";
HAnimJoint172.DEF = "hanim_r_carpal_distal_interphalangeal_4";
HAnimJoint172.center = new X3D.SFVec3f([-0.1908,0.7077,-0.0706]);
HAnimJoint172.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint172.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint171YYY.children = new X3D.MFNode();

HAnimJoint171ZZZ.children[0] = HAnimJoint172;

HAnimJoint170YYY.children = new X3D.MFNode();

HAnimJoint170ZZZ.children[0] = HAnimJoint171;

HAnimJoint169YYY.children = new X3D.MFNode();

HAnimJoint169ZZZ.children[0] = HAnimJoint170;

HAnimJoint168YYY.children = new X3D.MFNode();

HAnimJoint168ZZZ.children[0] = HAnimJoint169;

let HAnimJoint173 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint173.name = "r_carpometacarpal_5";
HAnimJoint173.DEF = "hanim_r_carpometacarpal_5";
HAnimJoint173.center = new X3D.SFVec3f([-0.1926,0.8096,-0.0975]);
HAnimJoint173.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint173.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint174 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint174.name = "r_metacarpophalangeal_5";
HAnimJoint174.DEF = "hanim_r_metacarpophalangeal_5";
HAnimJoint174.center = new X3D.SFVec3f([-0.1926,0.7896,-0.0975]);
HAnimJoint174.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint174.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint175 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint175.name = "r_carpal_proximal_interphalangeal_5";
HAnimJoint175.DEF = "hanim_r_carpal_proximal_interphalangeal_5";
HAnimJoint175.center = new X3D.SFVec3f([-0.1902,0.7483,-0.0963]);
HAnimJoint175.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint175.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint176 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint176.name = "r_carpal_distal_interphalangeal_5";
HAnimJoint176.DEF = "hanim_r_carpal_distal_interphalangeal_5";
HAnimJoint176.center = new X3D.SFVec3f([-0.1908,0.754,-0.096]);
HAnimJoint176.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint176.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint175YYY.children = new X3D.MFNode();

HAnimJoint175ZZZ.children[0] = HAnimJoint176;

HAnimJoint174YYY.children = new X3D.MFNode();

HAnimJoint174ZZZ.children[0] = HAnimJoint175;

HAnimJoint173YYY.children = new X3D.MFNode();

HAnimJoint173ZZZ.children[0] = HAnimJoint174;

HAnimJoint168ZZZ.children[1] = HAnimJoint173;

HAnimJoint153ZZZ.children[3] = HAnimJoint168;

HAnimJoint152YYY.children = new X3D.MFNode();

HAnimJoint152ZZZ.children[0] = HAnimJoint153;

HAnimJoint151YYY.children = new X3D.MFNode();

HAnimJoint151ZZZ.children[0] = HAnimJoint152;

HAnimJoint150YYY.children = new X3D.MFNode();

HAnimJoint150ZZZ.children[0] = HAnimJoint151;

HAnimJoint149YYY.children = new X3D.MFNode();

HAnimJoint149ZZZ.children[0] = HAnimJoint150;

HAnimJoint105ZZZ.children[2] = HAnimJoint149;

HAnimJoint104YYY.children = new X3D.MFNode();

HAnimJoint104ZZZ.children[0] = HAnimJoint105;

HAnimJoint103YYY.children = new X3D.MFNode();

HAnimJoint103ZZZ.children[0] = HAnimJoint104;

HAnimJoint102YYY.children = new X3D.MFNode();

HAnimJoint102ZZZ.children[0] = HAnimJoint103;

HAnimJoint101YYY.children = new X3D.MFNode();

HAnimJoint101ZZZ.children[0] = HAnimJoint102;

HAnimJoint100YYY.children = new X3D.MFNode();

HAnimJoint100ZZZ.children[0] = HAnimJoint101;

HAnimJoint99YYY.children = new X3D.MFNode();

HAnimJoint99ZZZ.children[0] = HAnimJoint100;

HAnimJoint98YYY.children = new X3D.MFNode();

HAnimJoint98ZZZ.children[0] = HAnimJoint99;

HAnimJoint97YYY.children = new X3D.MFNode();

HAnimJoint97ZZZ.children[0] = HAnimJoint98;

HAnimJoint96YYY.children = new X3D.MFNode();

HAnimJoint96ZZZ.children[0] = HAnimJoint97;

HAnimJoint95YYY.children = new X3D.MFNode();

HAnimJoint95ZZZ.children[0] = HAnimJoint96;

HAnimJoint94YYY.children = new X3D.MFNode();

HAnimJoint94ZZZ.children[0] = HAnimJoint95;

HAnimJoint93YYY.children = new X3D.MFNode();

HAnimJoint93ZZZ.children[0] = HAnimJoint94;

HAnimJoint92YYY.children = new X3D.MFNode();

HAnimJoint92ZZZ.children[0] = HAnimJoint93;

HAnimJoint91YYY.children = new X3D.MFNode();

HAnimJoint91ZZZ.children[0] = HAnimJoint92;

HAnimJoint90YYY.children = new X3D.MFNode();

HAnimJoint90ZZZ.children[0] = HAnimJoint91;

HAnimJoint89YYY.children = new X3D.MFNode();

HAnimJoint89ZZZ.children[0] = HAnimJoint90;

HAnimJoint31ZZZ.children[1] = HAnimJoint89;

HAnimHumanoid30.joints = new X3D.MFNode();

HAnimHumanoid30XXX.joints[0] = HAnimJoint31;

let HAnimJoint177 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint177.USE = "hanim_humanoid_root";
joints[1] = HAnimJoint177;

let HAnimJoint178 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint178.USE = "hanim_sacroiliac";
joints[2] = HAnimJoint178;

let HAnimJoint179 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint179.USE = "hanim_l_hip";
joints[3] = HAnimJoint179;

let HAnimJoint180 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint180.USE = "hanim_l_knee";
joints[4] = HAnimJoint180;

let HAnimJoint181 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint181.USE = "hanim_l_talocrural";
joints[5] = HAnimJoint181;

let HAnimJoint182 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint182.USE = "hanim_l_talocalcaneonavicular";
joints[6] = HAnimJoint182;

let HAnimJoint183 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint183.USE = "hanim_l_cuneonavicular_1";
joints[7] = HAnimJoint183;

let HAnimJoint184 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint184.USE = "hanim_l_tarsometatarsal_1";
joints[8] = HAnimJoint184;

let HAnimJoint185 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint185.USE = "hanim_l_metatarsophalangeal_1";
joints[9] = HAnimJoint185;

let HAnimJoint186 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint186.USE = "hanim_l_tarsal_interphalangeal_1";
joints[10] = HAnimJoint186;

let HAnimJoint187 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint187.USE = "hanim_l_cuneonavicular_2";
joints[11] = HAnimJoint187;

let HAnimJoint188 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint188.USE = "hanim_l_tarsometatarsal_2";
joints[12] = HAnimJoint188;

let HAnimJoint189 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint189.USE = "hanim_l_metatarsophalangeal_2";
joints[13] = HAnimJoint189;

let HAnimJoint190 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint190.USE = "hanim_l_tarsal_proximal_interphalangeal_2";
joints[14] = HAnimJoint190;

let HAnimJoint191 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint191.USE = "hanim_l_tarsal_distal_interphalangeal_2";
joints[15] = HAnimJoint191;

let HAnimJoint192 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint192.USE = "hanim_l_cuneonavicular_3";
joints[16] = HAnimJoint192;

let HAnimJoint193 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint193.USE = "hanim_l_tarsometatarsal_3";
joints[17] = HAnimJoint193;

let HAnimJoint194 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint194.USE = "hanim_l_metatarsophalangeal_3";
joints[18] = HAnimJoint194;

let HAnimJoint195 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint195.USE = "hanim_l_tarsal_proximal_interphalangeal_3";
joints[19] = HAnimJoint195;

let HAnimJoint196 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint196.USE = "hanim_l_tarsal_distal_interphalangeal_3";
joints[20] = HAnimJoint196;

let HAnimJoint197 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint197.USE = "hanim_l_calcaneocuboid";
joints[21] = HAnimJoint197;

let HAnimJoint198 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint198.USE = "hanim_l_transversetarsal";
joints[22] = HAnimJoint198;

let HAnimJoint199 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint199.USE = "hanim_l_tarsometatarsal_4";
joints[23] = HAnimJoint199;

let HAnimJoint200 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint200.USE = "hanim_l_metatarsophalangeal_4";
joints[24] = HAnimJoint200;

let HAnimJoint201 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint201.USE = "hanim_l_tarsal_proximal_interphalangeal_4";
joints[25] = HAnimJoint201;

let HAnimJoint202 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint202.USE = "hanim_l_tarsal_distal_interphalangeal_4";
joints[26] = HAnimJoint202;

let HAnimJoint203 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint203.USE = "hanim_l_tarsometatarsal_5";
joints[27] = HAnimJoint203;

let HAnimJoint204 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint204.USE = "hanim_l_metatarsophalangeal_5";
joints[28] = HAnimJoint204;

let HAnimJoint205 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint205.USE = "hanim_l_tarsal_proximal_interphalangeal_5";
joints[29] = HAnimJoint205;

let HAnimJoint206 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint206.USE = "hanim_l_tarsal_distal_interphalangeal_5";
joints[30] = HAnimJoint206;

let HAnimJoint207 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint207.USE = "hanim_r_hip";
joints[31] = HAnimJoint207;

let HAnimJoint208 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint208.USE = "hanim_r_knee";
joints[32] = HAnimJoint208;

let HAnimJoint209 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint209.USE = "hanim_r_talocrural";
joints[33] = HAnimJoint209;

let HAnimJoint210 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint210.USE = "hanim_r_talocalcaneonavicular";
joints[34] = HAnimJoint210;

let HAnimJoint211 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint211.USE = "hanim_r_cuneonavicular_1";
joints[35] = HAnimJoint211;

let HAnimJoint212 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint212.USE = "hanim_r_tarsometatarsal_1";
joints[36] = HAnimJoint212;

let HAnimJoint213 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint213.USE = "hanim_r_metatarsophalangeal_1";
joints[37] = HAnimJoint213;

let HAnimJoint214 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint214.USE = "hanim_r_tarsal_interphalangeal_1";
joints[38] = HAnimJoint214;

let HAnimJoint215 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint215.USE = "hanim_r_cuneonavicular_2";
joints[39] = HAnimJoint215;

let HAnimJoint216 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint216.USE = "hanim_r_tarsometatarsal_2";
joints[40] = HAnimJoint216;

let HAnimJoint217 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint217.USE = "hanim_r_metatarsophalangeal_2";
joints[41] = HAnimJoint217;

let HAnimJoint218 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint218.USE = "hanim_r_tarsal_proximal_interphalangeal_2";
joints[42] = HAnimJoint218;

let HAnimJoint219 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint219.USE = "hanim_r_tarsal_distal_interphalangeal_2";
joints[43] = HAnimJoint219;

let HAnimJoint220 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint220.USE = "hanim_r_cuneonavicular_3";
joints[44] = HAnimJoint220;

let HAnimJoint221 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint221.USE = "hanim_r_tarsometatarsal_3";
joints[45] = HAnimJoint221;

let HAnimJoint222 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint222.USE = "hanim_r_metatarsophalangeal_3";
joints[46] = HAnimJoint222;

let HAnimJoint223 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint223.USE = "hanim_r_tarsal_proximal_interphalangeal_3";
joints[47] = HAnimJoint223;

let HAnimJoint224 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint224.USE = "hanim_r_tarsal_distal_interphalangeal_3";
joints[48] = HAnimJoint224;

let HAnimJoint225 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint225.USE = "hanim_r_calcaneocuboid";
joints[49] = HAnimJoint225;

let HAnimJoint226 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint226.USE = "hanim_r_transversetarsal";
joints[50] = HAnimJoint226;

let HAnimJoint227 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint227.USE = "hanim_r_tarsometatarsal_4";
joints[51] = HAnimJoint227;

let HAnimJoint228 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint228.USE = "hanim_r_metatarsophalangeal_4";
joints[52] = HAnimJoint228;

let HAnimJoint229 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint229.USE = "hanim_r_tarsal_proximal_interphalangeal_4";
joints[53] = HAnimJoint229;

let HAnimJoint230 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint230.USE = "hanim_r_tarsal_distal_interphalangeal_4";
joints[54] = HAnimJoint230;

let HAnimJoint231 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint231.USE = "hanim_r_tarsometatarsal_5";
joints[55] = HAnimJoint231;

let HAnimJoint232 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint232.USE = "hanim_r_metatarsophalangeal_5";
joints[56] = HAnimJoint232;

let HAnimJoint233 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint233.USE = "hanim_r_tarsal_proximal_interphalangeal_5";
joints[57] = HAnimJoint233;

let HAnimJoint234 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint234.USE = "hanim_r_tarsal_distal_interphalangeal_5";
joints[58] = HAnimJoint234;

let HAnimJoint235 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint235.USE = "hanim_vl5";
joints[59] = HAnimJoint235;

let HAnimJoint236 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint236.USE = "hanim_vl4";
joints[60] = HAnimJoint236;

let HAnimJoint237 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint237.USE = "hanim_vl3";
joints[61] = HAnimJoint237;

let HAnimJoint238 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint238.USE = "hanim_vl2";
joints[62] = HAnimJoint238;

let HAnimJoint239 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint239.USE = "hanim_vl1";
joints[63] = HAnimJoint239;

let HAnimJoint240 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint240.USE = "hanim_vt12";
joints[64] = HAnimJoint240;

let HAnimJoint241 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint241.USE = "hanim_vt11";
joints[65] = HAnimJoint241;

let HAnimJoint242 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint242.USE = "hanim_vt10";
joints[66] = HAnimJoint242;

let HAnimJoint243 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint243.USE = "hanim_vt9";
joints[67] = HAnimJoint243;

let HAnimJoint244 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint244.USE = "hanim_vt8";
joints[68] = HAnimJoint244;

let HAnimJoint245 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint245.USE = "hanim_vt7";
joints[69] = HAnimJoint245;

let HAnimJoint246 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint246.USE = "hanim_vt6";
joints[70] = HAnimJoint246;

let HAnimJoint247 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint247.USE = "hanim_vt5";
joints[71] = HAnimJoint247;

let HAnimJoint248 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint248.USE = "hanim_vt4";
joints[72] = HAnimJoint248;

let HAnimJoint249 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint249.USE = "hanim_vt3";
joints[73] = HAnimJoint249;

let HAnimJoint250 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint250.USE = "hanim_vt2";
joints[74] = HAnimJoint250;

let HAnimJoint251 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint251.USE = "hanim_vt1";
joints[75] = HAnimJoint251;

let HAnimJoint252 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint252.USE = "hanim_vc7";
joints[76] = HAnimJoint252;

let HAnimJoint253 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint253.USE = "hanim_vc6";
joints[77] = HAnimJoint253;

let HAnimJoint254 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint254.USE = "hanim_vc5";
joints[78] = HAnimJoint254;

let HAnimJoint255 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint255.USE = "hanim_vc4";
joints[79] = HAnimJoint255;

let HAnimJoint256 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint256.USE = "hanim_vc3";
joints[80] = HAnimJoint256;

let HAnimJoint257 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint257.USE = "hanim_vc2";
joints[81] = HAnimJoint257;

let HAnimJoint258 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint258.USE = "hanim_vc1";
joints[82] = HAnimJoint258;

let HAnimJoint259 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint259.USE = "hanim_skullbase";
joints[83] = HAnimJoint259;

let HAnimJoint260 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint260.USE = "hanim_l_eyelid_joint";
joints[84] = HAnimJoint260;

let HAnimJoint261 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint261.USE = "hanim_r_eyelid_joint";
joints[85] = HAnimJoint261;

let HAnimJoint262 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint262.USE = "hanim_l_eyeball_joint";
joints[86] = HAnimJoint262;

let HAnimJoint263 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint263.USE = "hanim_r_eyeball_joint";
joints[87] = HAnimJoint263;

let HAnimJoint264 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint264.USE = "hanim_l_eyebrow_joint";
joints[88] = HAnimJoint264;

let HAnimJoint265 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint265.USE = "hanim_r_eyebrow_joint";
joints[89] = HAnimJoint265;

let HAnimJoint266 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint266.USE = "hanim_temporomandibular";
joints[90] = HAnimJoint266;

let HAnimJoint267 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint267.USE = "hanim_l_sternoclavicular";
joints[91] = HAnimJoint267;

let HAnimJoint268 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint268.USE = "hanim_l_acromioclavicular";
joints[92] = HAnimJoint268;

let HAnimJoint269 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint269.USE = "hanim_l_shoulder";
joints[93] = HAnimJoint269;

let HAnimJoint270 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint270.USE = "hanim_l_elbow";
joints[94] = HAnimJoint270;

let HAnimJoint271 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint271.USE = "hanim_l_radiocarpal";
joints[95] = HAnimJoint271;

let HAnimJoint272 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint272.USE = "hanim_l_midcarpal_1";
joints[96] = HAnimJoint272;

let HAnimJoint273 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint273.USE = "hanim_l_carpometacarpal_1";
joints[97] = HAnimJoint273;

let HAnimJoint274 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint274.USE = "hanim_l_metacarpophalangeal_1";
joints[98] = HAnimJoint274;

let HAnimJoint275 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint275.USE = "hanim_l_carpal_interphalangeal_1";
joints[99] = HAnimJoint275;

let HAnimJoint276 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint276.USE = "hanim_l_midcarpal_2";
joints[100] = HAnimJoint276;

let HAnimJoint277 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint277.USE = "hanim_l_carpometacarpal_2";
joints[101] = HAnimJoint277;

let HAnimJoint278 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint278.USE = "hanim_l_metacarpophalangeal_2";
joints[102] = HAnimJoint278;

let HAnimJoint279 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint279.USE = "hanim_l_carpal_proximal_interphalangeal_2";
joints[103] = HAnimJoint279;

let HAnimJoint280 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint280.USE = "hanim_l_carpal_distal_interphalangeal_2";
joints[104] = HAnimJoint280;

let HAnimJoint281 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint281.USE = "hanim_l_midcarpal_3";
joints[105] = HAnimJoint281;

let HAnimJoint282 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint282.USE = "hanim_l_carpometacarpal_3";
joints[106] = HAnimJoint282;

let HAnimJoint283 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint283.USE = "hanim_l_metacarpophalangeal_3";
joints[107] = HAnimJoint283;

let HAnimJoint284 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint284.USE = "hanim_l_carpal_proximal_interphalangeal_3";
joints[108] = HAnimJoint284;

let HAnimJoint285 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint285.USE = "hanim_l_carpal_distal_interphalangeal_3";
joints[109] = HAnimJoint285;

let HAnimJoint286 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint286.USE = "hanim_l_midcarpal_4_5";
joints[110] = HAnimJoint286;

let HAnimJoint287 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint287.USE = "hanim_l_carpometacarpal_4";
joints[111] = HAnimJoint287;

let HAnimJoint288 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint288.USE = "hanim_l_metacarpophalangeal_4";
joints[112] = HAnimJoint288;

let HAnimJoint289 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint289.USE = "hanim_l_carpal_proximal_interphalangeal_4";
joints[113] = HAnimJoint289;

let HAnimJoint290 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint290.USE = "hanim_l_carpal_distal_interphalangeal_4";
joints[114] = HAnimJoint290;

let HAnimJoint291 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint291.USE = "hanim_l_carpometacarpal_5";
joints[115] = HAnimJoint291;

let HAnimJoint292 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint292.USE = "hanim_l_metacarpophalangeal_5";
joints[116] = HAnimJoint292;

let HAnimJoint293 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint293.USE = "hanim_l_carpal_proximal_interphalangeal_5";
joints[117] = HAnimJoint293;

let HAnimJoint294 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint294.USE = "hanim_l_carpal_distal_interphalangeal_5";
joints[118] = HAnimJoint294;

let HAnimJoint295 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint295.USE = "hanim_r_sternoclavicular";
joints[119] = HAnimJoint295;

let HAnimJoint296 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint296.USE = "hanim_r_acromioclavicular";
joints[120] = HAnimJoint296;

let HAnimJoint297 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint297.USE = "hanim_r_shoulder";
joints[121] = HAnimJoint297;

let HAnimJoint298 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint298.USE = "hanim_r_elbow";
joints[122] = HAnimJoint298;

let HAnimJoint299 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint299.USE = "hanim_r_radiocarpal";
joints[123] = HAnimJoint299;

let HAnimJoint300 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint300.USE = "hanim_r_midcarpal_1";
joints[124] = HAnimJoint300;

let HAnimJoint301 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint301.USE = "hanim_r_carpometacarpal_1";
joints[125] = HAnimJoint301;

let HAnimJoint302 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint302.USE = "hanim_r_metacarpophalangeal_1";
joints[126] = HAnimJoint302;

let HAnimJoint303 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint303.USE = "hanim_r_carpal_interphalangeal_1";
joints[127] = HAnimJoint303;

let HAnimJoint304 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint304.USE = "hanim_r_midcarpal_2";
joints[128] = HAnimJoint304;

let HAnimJoint305 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint305.USE = "hanim_r_carpometacarpal_2";
joints[129] = HAnimJoint305;

let HAnimJoint306 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint306.USE = "hanim_r_metacarpophalangeal_2";
joints[130] = HAnimJoint306;

let HAnimJoint307 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint307.USE = "hanim_r_carpal_proximal_interphalangeal_2";
joints[131] = HAnimJoint307;

let HAnimJoint308 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint308.USE = "hanim_r_carpal_distal_interphalangeal_2";
joints[132] = HAnimJoint308;

let HAnimJoint309 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint309.USE = "hanim_r_midcarpal_3";
joints[133] = HAnimJoint309;

let HAnimJoint310 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint310.USE = "hanim_r_carpometacarpal_3";
joints[134] = HAnimJoint310;

let HAnimJoint311 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint311.USE = "hanim_r_metacarpophalangeal_3";
joints[135] = HAnimJoint311;

let HAnimJoint312 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint312.USE = "hanim_r_carpal_proximal_interphalangeal_3";
joints[136] = HAnimJoint312;

let HAnimJoint313 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint313.USE = "hanim_r_carpal_distal_interphalangeal_3";
joints[137] = HAnimJoint313;

let HAnimJoint314 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint314.USE = "hanim_r_midcarpal_4_5";
joints[138] = HAnimJoint314;

let HAnimJoint315 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint315.USE = "hanim_r_carpometacarpal_4";
joints[139] = HAnimJoint315;

let HAnimJoint316 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint316.USE = "hanim_r_metacarpophalangeal_4";
joints[140] = HAnimJoint316;

let HAnimJoint317 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint317.USE = "hanim_r_carpal_proximal_interphalangeal_4";
joints[141] = HAnimJoint317;

let HAnimJoint318 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint318.USE = "hanim_r_carpal_distal_interphalangeal_4";
joints[142] = HAnimJoint318;

let HAnimJoint319 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint319.USE = "hanim_r_carpometacarpal_5";
joints[143] = HAnimJoint319;

let HAnimJoint320 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint320.USE = "hanim_r_metacarpophalangeal_5";
joints[144] = HAnimJoint320;

let HAnimJoint321 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint321.USE = "hanim_r_carpal_proximal_interphalangeal_5";
joints[145] = HAnimJoint321;

let HAnimJoint322 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint322.USE = "hanim_r_carpal_distal_interphalangeal_5";
joints[146] = HAnimJoint322;

browser.currentScene.children[4] = HAnimHumanoid30;

}
main ();
