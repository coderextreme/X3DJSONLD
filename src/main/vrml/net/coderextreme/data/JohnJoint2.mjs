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
let HAnimJoint33 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint33.name = "sacroiliac";
HAnimJoint33.DEF = "hanim_sacroiliac";
HAnimJoint33.center = new SFVec3f(new float[0,0.9149,0.0016]);
HAnimJoint33.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint33.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint34 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint34.name = "l_hip";
HAnimJoint34.DEF = "hanim_l_hip";
HAnimJoint34.center = new SFVec3f(new float[0.0961,0.9124,-0.0001]);
HAnimJoint34.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint34.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint35 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint35.name = "l_knee";
HAnimJoint35.DEF = "hanim_l_knee";
HAnimJoint35.center = new SFVec3f(new float[0.104,0.4867,0.0308]);
HAnimJoint35.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint35.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint36 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint36.name = "l_talocrural";
HAnimJoint36.DEF = "hanim_l_talocrural";
HAnimJoint36.center = new SFVec3f(new float[0.1101,0.0656,-0.0736]);
HAnimJoint36.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint36.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint37 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint37.name = "l_talocalcaneonavicular";
HAnimJoint37.DEF = "hanim_l_talocalcaneonavicular";
HAnimJoint37.center = new SFVec3f(new float[0,1,0]);
HAnimJoint37.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint37.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint38 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint38.name = "l_cuneonavicular_1";
HAnimJoint38.DEF = "hanim_l_cuneonavicular_1";
HAnimJoint38.center = new SFVec3f(new float[0,1,0]);
HAnimJoint38.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint38.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint39 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint39.name = "l_tarsometatarsal_1";
HAnimJoint39.DEF = "hanim_l_tarsometatarsal_1";
HAnimJoint39.center = new SFVec3f(new float[0,1,0]);
HAnimJoint39.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint39.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint40 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint40.name = "l_metatarsophalangeal_1";
HAnimJoint40.DEF = "hanim_l_metatarsophalangeal_1";
HAnimJoint40.center = new SFVec3f(new float[0,1,0]);
HAnimJoint40.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint40.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint41 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint41.name = "l_tarsal_interphalangeal_1";
HAnimJoint41.DEF = "hanim_l_tarsal_interphalangeal_1";
HAnimJoint41.center = new SFVec3f(new float[0,1,0]);
HAnimJoint41.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint41.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint40.children = new MFNode();

HAnimJoint40.children[0] = HAnimJoint41;

HAnimJoint39.children = new MFNode();

HAnimJoint39.children[0] = HAnimJoint40;

HAnimJoint38.children = new MFNode();

HAnimJoint38.children[0] = HAnimJoint39;

HAnimJoint37.children = new MFNode();

HAnimJoint37.children[0] = HAnimJoint38;

let HAnimJoint42 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint42.name = "l_cuneonavicular_2";
HAnimJoint42.DEF = "hanim_l_cuneonavicular_2";
HAnimJoint42.center = new SFVec3f(new float[0,1,0]);
HAnimJoint42.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint42.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint43 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint43.name = "l_tarsometatarsal_2";
HAnimJoint43.DEF = "hanim_l_tarsometatarsal_2";
HAnimJoint43.center = new SFVec3f(new float[0,1,0]);
HAnimJoint43.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint43.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint44 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint44.name = "l_metatarsophalangeal_2";
HAnimJoint44.DEF = "hanim_l_metatarsophalangeal_2";
HAnimJoint44.center = new SFVec3f(new float[0,1,0]);
HAnimJoint44.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint44.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint45 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint45.name = "l_tarsal_proximal_interphalangeal_2";
HAnimJoint45.DEF = "hanim_l_tarsal_proximal_interphalangeal_2";
HAnimJoint45.center = new SFVec3f(new float[0,1,0]);
HAnimJoint45.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint45.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint46 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint46.name = "l_tarsal_distal_interphalangeal_2";
HAnimJoint46.DEF = "hanim_l_tarsal_distal_interphalangeal_2";
HAnimJoint46.center = new SFVec3f(new float[0,1,0]);
HAnimJoint46.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint46.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint45.children = new MFNode();

HAnimJoint45.children[0] = HAnimJoint46;

HAnimJoint44.children = new MFNode();

HAnimJoint44.children[0] = HAnimJoint45;

HAnimJoint43.children = new MFNode();

HAnimJoint43.children[0] = HAnimJoint44;

HAnimJoint42.children = new MFNode();

HAnimJoint42.children[0] = HAnimJoint43;

HAnimJoint37.children[1] = HAnimJoint42;

let HAnimJoint47 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint47.name = "l_cuneonavicular_3";
HAnimJoint47.DEF = "hanim_l_cuneonavicular_3";
HAnimJoint47.center = new SFVec3f(new float[0,1,0]);
HAnimJoint47.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint47.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint48 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint48.name = "l_tarsometatarsal_3";
HAnimJoint48.DEF = "hanim_l_tarsometatarsal_3";
HAnimJoint48.center = new SFVec3f(new float[0,1,0]);
HAnimJoint48.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint48.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint49 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint49.name = "l_metatarsophalangeal_3";
HAnimJoint49.DEF = "hanim_l_metatarsophalangeal_3";
HAnimJoint49.center = new SFVec3f(new float[0,1,0]);
HAnimJoint49.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint49.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint50 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint50.name = "l_tarsal_proximal_interphalangeal_3";
HAnimJoint50.DEF = "hanim_l_tarsal_proximal_interphalangeal_3";
HAnimJoint50.center = new SFVec3f(new float[0,1,0]);
HAnimJoint50.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint50.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint51 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint51.name = "l_tarsal_distal_interphalangeal_3";
HAnimJoint51.DEF = "hanim_l_tarsal_distal_interphalangeal_3";
HAnimJoint51.center = new SFVec3f(new float[0,1,0]);
HAnimJoint51.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint51.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint50.children = new MFNode();

HAnimJoint50.children[0] = HAnimJoint51;

HAnimJoint49.children = new MFNode();

HAnimJoint49.children[0] = HAnimJoint50;

HAnimJoint48.children = new MFNode();

HAnimJoint48.children[0] = HAnimJoint49;

HAnimJoint47.children = new MFNode();

HAnimJoint47.children[0] = HAnimJoint48;

HAnimJoint37.children[2] = HAnimJoint47;

HAnimJoint36.children = new MFNode();

HAnimJoint36.children[0] = HAnimJoint37;

let HAnimJoint52 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint52.name = "l_calcaneocuboid";
HAnimJoint52.DEF = "hanim_l_calcaneocuboid";
HAnimJoint52.center = new SFVec3f(new float[0,1,0]);
HAnimJoint52.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint52.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint53 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint53.name = "l_transversetarsal";
HAnimJoint53.DEF = "hanim_l_transversetarsal";
HAnimJoint53.center = new SFVec3f(new float[0,1,0]);
HAnimJoint53.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint53.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint54 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint54.name = "l_tarsometatarsal_4";
HAnimJoint54.DEF = "hanim_l_tarsometatarsal_4";
HAnimJoint54.center = new SFVec3f(new float[0,1,0]);
HAnimJoint54.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint54.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint55 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint55.name = "l_metatarsophalangeal_4";
HAnimJoint55.DEF = "hanim_l_metatarsophalangeal_4";
HAnimJoint55.center = new SFVec3f(new float[0,1,0]);
HAnimJoint55.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint55.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint56 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint56.name = "l_tarsal_proximal_interphalangeal_4";
HAnimJoint56.DEF = "hanim_l_tarsal_proximal_interphalangeal_4";
HAnimJoint56.center = new SFVec3f(new float[0,1,0]);
HAnimJoint56.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint56.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint57 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint57.name = "l_tarsal_distal_interphalangeal_4";
HAnimJoint57.DEF = "hanim_l_tarsal_distal_interphalangeal_4";
HAnimJoint57.center = new SFVec3f(new float[0,1,0]);
HAnimJoint57.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint57.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint56.children = new MFNode();

HAnimJoint56.children[0] = HAnimJoint57;

HAnimJoint55.children = new MFNode();

HAnimJoint55.children[0] = HAnimJoint56;

HAnimJoint54.children = new MFNode();

HAnimJoint54.children[0] = HAnimJoint55;

HAnimJoint53.children = new MFNode();

HAnimJoint53.children[0] = HAnimJoint54;

let HAnimJoint58 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint58.name = "l_tarsometatarsal_5";
HAnimJoint58.DEF = "hanim_l_tarsometatarsal_5";
HAnimJoint58.center = new SFVec3f(new float[0,1,0]);
HAnimJoint58.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint58.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint59 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint59.name = "l_metatarsophalangeal_5";
HAnimJoint59.DEF = "hanim_l_metatarsophalangeal_5";
HAnimJoint59.center = new SFVec3f(new float[0,1,0]);
HAnimJoint59.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint59.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint60 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint60.name = "l_tarsal_proximal_interphalangeal_5";
HAnimJoint60.DEF = "hanim_l_tarsal_proximal_interphalangeal_5";
HAnimJoint60.center = new SFVec3f(new float[0,1,0]);
HAnimJoint60.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint60.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint61 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint61.name = "l_tarsal_distal_interphalangeal_5";
HAnimJoint61.DEF = "hanim_l_tarsal_distal_interphalangeal_5";
HAnimJoint61.center = new SFVec3f(new float[0,1,0]);
HAnimJoint61.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint61.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint60.children = new MFNode();

HAnimJoint60.children[0] = HAnimJoint61;

HAnimJoint59.children = new MFNode();

HAnimJoint59.children[0] = HAnimJoint60;

HAnimJoint58.children = new MFNode();

HAnimJoint58.children[0] = HAnimJoint59;

HAnimJoint53.children[1] = HAnimJoint58;

HAnimJoint52.children = new MFNode();

HAnimJoint52.children[0] = HAnimJoint53;

HAnimJoint36.children[1] = HAnimJoint52;

HAnimJoint35.children = new MFNode();

HAnimJoint35.children[0] = HAnimJoint36;

HAnimJoint34.children = new MFNode();

HAnimJoint34.children[0] = HAnimJoint35;

HAnimJoint33.children = new MFNode();

HAnimJoint33.children[0] = HAnimJoint34;

let HAnimJoint62 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint62.name = "r_hip";
HAnimJoint62.DEF = "hanim_r_hip";
HAnimJoint62.center = new SFVec3f(new float[-0.095,0.9171,0.0029]);
HAnimJoint62.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint62.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint63 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint63.name = "r_knee";
HAnimJoint63.DEF = "hanim_r_knee";
HAnimJoint63.center = new SFVec3f(new float[-0.0867,0.4913,0.0318]);
HAnimJoint63.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint63.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint64 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint64.name = "r_talocrural";
HAnimJoint64.DEF = "hanim_r_talocrural";
HAnimJoint64.center = new SFVec3f(new float[-0.0801,0.0712,-0.0766]);
HAnimJoint64.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint64.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint65 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint65.name = "r_talocalcaneonavicular";
HAnimJoint65.DEF = "hanim_r_talocalcaneonavicular";
HAnimJoint65.center = new SFVec3f(new float[0,1,0]);
HAnimJoint65.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint65.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint66 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint66.name = "r_cuneonavicular_1";
HAnimJoint66.DEF = "hanim_r_cuneonavicular_1";
HAnimJoint66.center = new SFVec3f(new float[0,1,0]);
HAnimJoint66.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint66.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint67 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint67.name = "r_tarsometatarsal_1";
HAnimJoint67.DEF = "hanim_r_tarsometatarsal_1";
HAnimJoint67.center = new SFVec3f(new float[0,1,0]);
HAnimJoint67.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint67.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint68 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint68.name = "r_metatarsophalangeal_1";
HAnimJoint68.DEF = "hanim_r_metatarsophalangeal_1";
HAnimJoint68.center = new SFVec3f(new float[0,1,0]);
HAnimJoint68.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint68.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint69 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint69.name = "r_tarsal_interphalangeal_1";
HAnimJoint69.DEF = "hanim_r_tarsal_interphalangeal_1";
HAnimJoint69.center = new SFVec3f(new float[0,1,0]);
HAnimJoint69.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint69.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint68.children = new MFNode();

HAnimJoint68.children[0] = HAnimJoint69;

HAnimJoint67.children = new MFNode();

HAnimJoint67.children[0] = HAnimJoint68;

HAnimJoint66.children = new MFNode();

HAnimJoint66.children[0] = HAnimJoint67;

HAnimJoint65.children = new MFNode();

HAnimJoint65.children[0] = HAnimJoint66;

let HAnimJoint70 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint70.name = "r_cuneonavicular_2";
HAnimJoint70.DEF = "hanim_r_cuneonavicular_2";
HAnimJoint70.center = new SFVec3f(new float[0,1,0]);
HAnimJoint70.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint70.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint71 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint71.name = "r_tarsometatarsal_2";
HAnimJoint71.DEF = "hanim_r_tarsometatarsal_2";
HAnimJoint71.center = new SFVec3f(new float[0,1,0]);
HAnimJoint71.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint71.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint72 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint72.name = "r_metatarsophalangeal_2";
HAnimJoint72.DEF = "hanim_r_metatarsophalangeal_2";
HAnimJoint72.center = new SFVec3f(new float[0,1,0]);
HAnimJoint72.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint72.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint73 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint73.name = "r_tarsal_proximal_interphalangeal_2";
HAnimJoint73.DEF = "hanim_r_tarsal_proximal_interphalangeal_2";
HAnimJoint73.center = new SFVec3f(new float[0,1,0]);
HAnimJoint73.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint73.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint74 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint74.name = "r_tarsal_distal_interphalangeal_2";
HAnimJoint74.DEF = "hanim_r_tarsal_distal_interphalangeal_2";
HAnimJoint74.center = new SFVec3f(new float[0,1,0]);
HAnimJoint74.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint74.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint73.children = new MFNode();

HAnimJoint73.children[0] = HAnimJoint74;

HAnimJoint72.children = new MFNode();

HAnimJoint72.children[0] = HAnimJoint73;

HAnimJoint71.children = new MFNode();

HAnimJoint71.children[0] = HAnimJoint72;

HAnimJoint70.children = new MFNode();

HAnimJoint70.children[0] = HAnimJoint71;

HAnimJoint65.children[1] = HAnimJoint70;

let HAnimJoint75 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint75.name = "r_cuneonavicular_3";
HAnimJoint75.DEF = "hanim_r_cuneonavicular_3";
HAnimJoint75.center = new SFVec3f(new float[0,1,0]);
HAnimJoint75.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint75.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint76 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint76.name = "r_tarsometatarsal_3";
HAnimJoint76.DEF = "hanim_r_tarsometatarsal_3";
HAnimJoint76.center = new SFVec3f(new float[0,1,0]);
HAnimJoint76.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint76.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint77 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint77.name = "r_metatarsophalangeal_3";
HAnimJoint77.DEF = "hanim_r_metatarsophalangeal_3";
HAnimJoint77.center = new SFVec3f(new float[0,1,0]);
HAnimJoint77.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint77.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint78 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint78.name = "r_tarsal_proximal_interphalangeal_3";
HAnimJoint78.DEF = "hanim_r_tarsal_proximal_interphalangeal_3";
HAnimJoint78.center = new SFVec3f(new float[0,1,0]);
HAnimJoint78.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint78.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint79 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint79.name = "r_tarsal_distal_interphalangeal_3";
HAnimJoint79.DEF = "hanim_r_tarsal_distal_interphalangeal_3";
HAnimJoint79.center = new SFVec3f(new float[0,1,0]);
HAnimJoint79.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint79.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint78.children = new MFNode();

HAnimJoint78.children[0] = HAnimJoint79;

HAnimJoint77.children = new MFNode();

HAnimJoint77.children[0] = HAnimJoint78;

HAnimJoint76.children = new MFNode();

HAnimJoint76.children[0] = HAnimJoint77;

HAnimJoint75.children = new MFNode();

HAnimJoint75.children[0] = HAnimJoint76;

HAnimJoint65.children[2] = HAnimJoint75;

HAnimJoint64.children = new MFNode();

HAnimJoint64.children[0] = HAnimJoint65;

let HAnimJoint80 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint80.name = "r_calcaneocuboid";
HAnimJoint80.DEF = "hanim_r_calcaneocuboid";
HAnimJoint80.center = new SFVec3f(new float[0,1,0]);
HAnimJoint80.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint80.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint81 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint81.name = "r_transversetarsal";
HAnimJoint81.DEF = "hanim_r_transversetarsal";
HAnimJoint81.center = new SFVec3f(new float[0,1,0]);
HAnimJoint81.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint81.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint82 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint82.name = "r_tarsometatarsal_4";
HAnimJoint82.DEF = "hanim_r_tarsometatarsal_4";
HAnimJoint82.center = new SFVec3f(new float[0,1,0]);
HAnimJoint82.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint82.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint83 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint83.name = "r_metatarsophalangeal_4";
HAnimJoint83.DEF = "hanim_r_metatarsophalangeal_4";
HAnimJoint83.center = new SFVec3f(new float[0,1,0]);
HAnimJoint83.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint83.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint84 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint84.name = "r_tarsal_proximal_interphalangeal_4";
HAnimJoint84.DEF = "hanim_r_tarsal_proximal_interphalangeal_4";
HAnimJoint84.center = new SFVec3f(new float[0,1,0]);
HAnimJoint84.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint84.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint85 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint85.name = "r_tarsal_distal_interphalangeal_4";
HAnimJoint85.DEF = "hanim_r_tarsal_distal_interphalangeal_4";
HAnimJoint85.center = new SFVec3f(new float[0,1,0]);
HAnimJoint85.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint85.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint84.children = new MFNode();

HAnimJoint84.children[0] = HAnimJoint85;

HAnimJoint83.children = new MFNode();

HAnimJoint83.children[0] = HAnimJoint84;

HAnimJoint82.children = new MFNode();

HAnimJoint82.children[0] = HAnimJoint83;

HAnimJoint81.children = new MFNode();

HAnimJoint81.children[0] = HAnimJoint82;

let HAnimJoint86 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint86.name = "r_tarsometatarsal_5";
HAnimJoint86.DEF = "hanim_r_tarsometatarsal_5";
HAnimJoint86.center = new SFVec3f(new float[0,1,0]);
HAnimJoint86.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint86.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint87 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint87.name = "r_metatarsophalangeal_5";
HAnimJoint87.DEF = "hanim_r_metatarsophalangeal_5";
HAnimJoint87.center = new SFVec3f(new float[0,1,0]);
HAnimJoint87.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint87.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint88 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint88.name = "r_tarsal_proximal_interphalangeal_5";
HAnimJoint88.DEF = "hanim_r_tarsal_proximal_interphalangeal_5";
HAnimJoint88.center = new SFVec3f(new float[0,1,0]);
HAnimJoint88.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint88.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint89 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint89.name = "r_tarsal_distal_interphalangeal_5";
HAnimJoint89.DEF = "hanim_r_tarsal_distal_interphalangeal_5";
HAnimJoint89.center = new SFVec3f(new float[0,1,0]);
HAnimJoint89.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint89.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint88.children = new MFNode();

HAnimJoint88.children[0] = HAnimJoint89;

HAnimJoint87.children = new MFNode();

HAnimJoint87.children[0] = HAnimJoint88;

HAnimJoint86.children = new MFNode();

HAnimJoint86.children[0] = HAnimJoint87;

HAnimJoint81.children[1] = HAnimJoint86;

HAnimJoint80.children = new MFNode();

HAnimJoint80.children[0] = HAnimJoint81;

HAnimJoint64.children[1] = HAnimJoint80;

HAnimJoint63.children = new MFNode();

HAnimJoint63.children[0] = HAnimJoint64;

HAnimJoint62.children = new MFNode();

HAnimJoint62.children[0] = HAnimJoint63;

HAnimJoint33.children[1] = HAnimJoint62;

HAnimJoint32.children = new MFNode();

HAnimJoint32.children[0] = HAnimJoint33;

let HAnimJoint90 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint90.name = "vl5";
HAnimJoint90.DEF = "hanim_vl5";
HAnimJoint90.center = new SFVec3f(new float[0.0028,1.0568,-0.0776]);
HAnimJoint90.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint90.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint91 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint91.name = "vl4";
HAnimJoint91.DEF = "hanim_vl4";
HAnimJoint91.center = new SFVec3f(new float[0.0035,1.0925,-0.0787]);
HAnimJoint91.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint91.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint92 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint92.name = "vl3";
HAnimJoint92.DEF = "hanim_vl3";
HAnimJoint92.center = new SFVec3f(new float[0.0041,1.1276,-0.0796]);
HAnimJoint92.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint92.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint93 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint93.name = "vl2";
HAnimJoint93.DEF = "hanim_vl2";
HAnimJoint93.center = new SFVec3f(new float[0.0045,1.1546,-0.08]);
HAnimJoint93.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint93.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint94 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint94.name = "vl1";
HAnimJoint94.DEF = "hanim_vl1";
HAnimJoint94.center = new SFVec3f(new float[0.0048,1.1912,-0.0805]);
HAnimJoint94.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint94.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint95 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint95.name = "vt12";
HAnimJoint95.DEF = "hanim_vt12";
HAnimJoint95.center = new SFVec3f(new float[0.0051,1.2278,-0.0808]);
HAnimJoint95.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint95.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint96 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint96.name = "vt11";
HAnimJoint96.DEF = "hanim_vt11";
HAnimJoint96.center = new SFVec3f(new float[0.0053,1.2679,-0.081]);
HAnimJoint96.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint96.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint97 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint97.name = "vt10";
HAnimJoint97.DEF = "hanim_vt10";
HAnimJoint97.center = new SFVec3f(new float[0.0056,1.2848,-0.0822]);
HAnimJoint97.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint97.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint98 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint98.name = "vt9";
HAnimJoint98.DEF = "hanim_vt9";
HAnimJoint98.center = new SFVec3f(new float[0.0057,1.3126,-0.0838]);
HAnimJoint98.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint98.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint99 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint99.name = "vt8";
HAnimJoint99.DEF = "hanim_vt8";
HAnimJoint99.center = new SFVec3f(new float[0.0057,1.3382,-0.0845]);
HAnimJoint99.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint99.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint100 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint100.name = "vt7";
HAnimJoint100.DEF = "hanim_vt7";
HAnimJoint100.center = new SFVec3f(new float[0.0058,1.3625,-0.0833]);
HAnimJoint100.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint100.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint101 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint101.name = "vt6";
HAnimJoint101.DEF = "hanim_vt6";
HAnimJoint101.center = new SFVec3f(new float[0.0059,1.3866,-0.08]);
HAnimJoint101.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint101.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint102 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint102.name = "vt5";
HAnimJoint102.DEF = "hanim_vt5";
HAnimJoint102.center = new SFVec3f(new float[0.006,1.4102,-0.0745]);
HAnimJoint102.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint102.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint103 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint103.name = "vt4";
HAnimJoint103.DEF = "hanim_vt4";
HAnimJoint103.center = new SFVec3f(new float[0.0061,1.432,-0.0675]);
HAnimJoint103.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint103.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint104 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint104.name = "vt3";
HAnimJoint104.DEF = "hanim_vt3";
HAnimJoint104.center = new SFVec3f(new float[0.0062,1.4583,-0.057]);
HAnimJoint104.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint104.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint105 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint105.name = "vt2";
HAnimJoint105.DEF = "hanim_vt2";
HAnimJoint105.center = new SFVec3f(new float[0.0063,1.4761,-0.0484]);
HAnimJoint105.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint105.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint106 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint106.name = "vt1";
HAnimJoint106.DEF = "hanim_vt1";
HAnimJoint106.center = new SFVec3f(new float[0.0065,1.4951,-0.0387]);
HAnimJoint106.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint106.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint107 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint107.name = "vc7";
HAnimJoint107.DEF = "hanim_vc7";
HAnimJoint107.center = new SFVec3f(new float[0.0066,1.5132,-0.0301]);
HAnimJoint107.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint107.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint108 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint108.name = "vc6";
HAnimJoint108.DEF = "hanim_vc6";
HAnimJoint108.center = new SFVec3f(new float[0.0066,1.5357,-0.0143]);
HAnimJoint108.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint108.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint109 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint109.name = "vc5";
HAnimJoint109.DEF = "hanim_vc5";
HAnimJoint109.center = new SFVec3f(new float[0.0066,1.552,-0.0082]);
HAnimJoint109.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint109.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint110 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint110.name = "vc4";
HAnimJoint110.DEF = "hanim_vc4";
HAnimJoint110.center = new SFVec3f(new float[0.0066,1.5662,-0.0084]);
HAnimJoint110.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint110.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint111 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint111.name = "vc3";
HAnimJoint111.DEF = "hanim_vc3";
HAnimJoint111.center = new SFVec3f(new float[0.0066,1.58,-0.0103]);
HAnimJoint111.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint111.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint112 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint112.name = "vc2";
HAnimJoint112.DEF = "hanim_vc2";
HAnimJoint112.center = new SFVec3f(new float[0.0066,1.5928,-0.0103]);
HAnimJoint112.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint112.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint113 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint113.name = "vc1";
HAnimJoint113.DEF = "hanim_vc1";
HAnimJoint113.center = new SFVec3f(new float[0.0066,1.6144,-0.0034]);
HAnimJoint113.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint113.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint114 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint114.name = "skullbase";
HAnimJoint114.DEF = "hanim_skullbase";
HAnimJoint114.center = new SFVec3f(new float[0.0044,1.6209,0.0236]);
HAnimJoint114.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint114.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint115 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint115.name = "l_eyelid_joint";
HAnimJoint115.DEF = "hanim_l_eyelid_joint";
HAnimJoint115.center = new SFVec3f(new float[0,1,0]);
HAnimJoint115.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint115.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint114.children = new MFNode();

HAnimJoint114.children[0] = HAnimJoint115;

let HAnimJoint116 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint116.name = "r_eyelid_joint";
HAnimJoint116.DEF = "hanim_r_eyelid_joint";
HAnimJoint116.center = new SFVec3f(new float[0,1,0]);
HAnimJoint116.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint116.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint114.children[1] = HAnimJoint116;

let HAnimJoint117 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint117.name = "l_eyeball_joint";
HAnimJoint117.DEF = "hanim_l_eyeball_joint";
HAnimJoint117.center = new SFVec3f(new float[0,1,0]);
HAnimJoint117.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint117.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint114.children[2] = HAnimJoint117;

let HAnimJoint118 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint118.name = "r_eyeball_joint";
HAnimJoint118.DEF = "hanim_r_eyeball_joint";
HAnimJoint118.center = new SFVec3f(new float[0,1,0]);
HAnimJoint118.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint118.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint114.children[3] = HAnimJoint118;

let HAnimJoint119 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint119.name = "l_eyebrow_joint";
HAnimJoint119.DEF = "hanim_l_eyebrow_joint";
HAnimJoint119.center = new SFVec3f(new float[0,1,0]);
HAnimJoint119.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint119.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint114.children[4] = HAnimJoint119;

let HAnimJoint120 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint120.name = "r_eyebrow_joint";
HAnimJoint120.DEF = "hanim_r_eyebrow_joint";
HAnimJoint120.center = new SFVec3f(new float[0,1,0]);
HAnimJoint120.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint120.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint114.children[5] = HAnimJoint120;

let HAnimJoint121 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint121.name = "temporomandibular";
HAnimJoint121.DEF = "hanim_temporomandibular";
HAnimJoint121.center = new SFVec3f(new float[0,1,0]);
HAnimJoint121.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint121.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint114.children[6] = HAnimJoint121;

HAnimJoint113.children = new MFNode();

HAnimJoint113.children[0] = HAnimJoint114;

HAnimJoint112.children = new MFNode();

HAnimJoint112.children[0] = HAnimJoint113;

HAnimJoint111.children = new MFNode();

HAnimJoint111.children[0] = HAnimJoint112;

HAnimJoint110.children = new MFNode();

HAnimJoint110.children[0] = HAnimJoint111;

HAnimJoint109.children = new MFNode();

HAnimJoint109.children[0] = HAnimJoint110;

HAnimJoint108.children = new MFNode();

HAnimJoint108.children[0] = HAnimJoint109;

HAnimJoint107.children = new MFNode();

HAnimJoint107.children[0] = HAnimJoint108;

HAnimJoint106.children = new MFNode();

HAnimJoint106.children[0] = HAnimJoint107;

let HAnimJoint122 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint122.name = "l_sternoclavicular";
HAnimJoint122.DEF = "hanim_l_sternoclavicular";
HAnimJoint122.center = new SFVec3f(new float[0.082,1.4488,-0.0353]);
HAnimJoint122.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint122.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint123 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint123.name = "l_acromioclavicular";
HAnimJoint123.DEF = "hanim_l_acromioclavicular";
HAnimJoint123.center = new SFVec3f(new float[0.0962,1.4269,-0.0424]);
HAnimJoint123.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint123.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint124 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint124.name = "l_shoulder";
HAnimJoint124.DEF = "hanim_l_shoulder";
HAnimJoint124.center = new SFVec3f(new float[0.2029,1.4376,-0.0387]);
HAnimJoint124.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint124.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint125 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint125.name = "l_elbow";
HAnimJoint125.DEF = "hanim_l_elbow";
HAnimJoint125.center = new SFVec3f(new float[0.2014,1.1357,-0.0682]);
HAnimJoint125.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint125.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint126 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint126.name = "l_radiocarpal";
HAnimJoint126.DEF = "hanim_l_radiocarpal";
HAnimJoint126.center = new SFVec3f(new float[0.1984,0.8663,-0.0583]);
HAnimJoint126.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint126.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint127 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint127.name = "l_midcarpal_1";
HAnimJoint127.DEF = "hanim_l_midcarpal_1";
HAnimJoint127.center = new SFVec3f(new float[0,1,0]);
HAnimJoint127.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint127.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint128 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint128.name = "l_carpometacarpal_1";
HAnimJoint128.DEF = "hanim_l_carpometacarpal_1";
HAnimJoint128.center = new SFVec3f(new float[0.1924,0.8472,-0.0534]);
HAnimJoint128.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint128.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint129 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint129.name = "l_metacarpophalangeal_1";
HAnimJoint129.DEF = "hanim_l_metacarpophalangeal_1";
HAnimJoint129.center = new SFVec3f(new float[0.1951,0.8226,0.0246]);
HAnimJoint129.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint129.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint130 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint130.name = "l_carpal_interphalangeal_1";
HAnimJoint130.DEF = "hanim_l_carpal_interphalangeal_1";
HAnimJoint130.center = new SFVec3f(new float[0.1955,0.8159,0.0464]);
HAnimJoint130.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint130.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint129.children = new MFNode();

HAnimJoint129.children[0] = HAnimJoint130;

HAnimJoint128.children = new MFNode();

HAnimJoint128.children[0] = HAnimJoint129;

HAnimJoint127.children = new MFNode();

HAnimJoint127.children[0] = HAnimJoint128;

HAnimJoint126.children = new MFNode();

HAnimJoint126.children[0] = HAnimJoint127;

let HAnimJoint131 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint131.name = "l_midcarpal_2";
HAnimJoint131.DEF = "hanim_l_midcarpal_2";
HAnimJoint131.center = new SFVec3f(new float[0,1,0]);
HAnimJoint131.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint131.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint132 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint132.name = "l_carpometacarpal_2";
HAnimJoint132.DEF = "hanim_l_carpometacarpal_2";
HAnimJoint132.center = new SFVec3f(new float[0.1983,0.8024,-0.028]);
HAnimJoint132.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint132.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint133 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint133.name = "l_metacarpophalangeal_2";
HAnimJoint133.DEF = "hanim_l_metacarpophalangeal_2";
HAnimJoint133.center = new SFVec3f(new float[0.1983,0.7815,-0.028]);
HAnimJoint133.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint133.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint134 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint134.name = "l_carpal_proximal_interphalangeal_2";
HAnimJoint134.DEF = "hanim_l_carpal_proximal_interphalangeal_2";
HAnimJoint134.center = new SFVec3f(new float[0.2017,0.7363,-0.0248]);
HAnimJoint134.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint134.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint135 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint135.name = "l_carpal_distal_interphalangeal_2";
HAnimJoint135.DEF = "hanim_l_carpal_distal_interphalangeal_2";
HAnimJoint135.center = new SFVec3f(new float[0.2028,0.7139,-0.0236]);
HAnimJoint135.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint135.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint134.children = new MFNode();

HAnimJoint134.children[0] = HAnimJoint135;

HAnimJoint133.children = new MFNode();

HAnimJoint133.children[0] = HAnimJoint134;

HAnimJoint132.children = new MFNode();

HAnimJoint132.children[0] = HAnimJoint133;

HAnimJoint131.children = new MFNode();

HAnimJoint131.children[0] = HAnimJoint132;

HAnimJoint126.children[1] = HAnimJoint131;

let HAnimJoint136 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint136.name = "l_midcarpal_3";
HAnimJoint136.DEF = "hanim_l_midcarpal_3";
HAnimJoint136.center = new SFVec3f(new float[0,1,0]);
HAnimJoint136.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint136.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint137 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint137.name = "l_carpometacarpal_3";
HAnimJoint137.DEF = "hanim_l_carpometacarpal_3";
HAnimJoint137.center = new SFVec3f(new float[0.1987,0.8029,-0.053]);
HAnimJoint137.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint137.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint138 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint138.name = "l_metacarpophalangeal_3";
HAnimJoint138.DEF = "hanim_l_metacarpophalangeal_3";
HAnimJoint138.center = new SFVec3f(new float[0.1987,0.7818,-0.053]);
HAnimJoint138.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint138.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint139 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint139.name = "l_carpal_proximal_interphalangeal_3";
HAnimJoint139.DEF = "hanim_l_carpal_proximal_interphalangeal_3";
HAnimJoint139.center = new SFVec3f(new float[0.2013,0.7273,-0.0503]);
HAnimJoint139.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint139.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint140 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint140.name = "l_carpal_distal_interphalangeal_3";
HAnimJoint140.DEF = "hanim_l_carpal_distal_interphalangeal_3";
HAnimJoint140.center = new SFVec3f(new float[0.2026,0.7011,-0.0494]);
HAnimJoint140.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint140.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint139.children = new MFNode();

HAnimJoint139.children[0] = HAnimJoint140;

HAnimJoint138.children = new MFNode();

HAnimJoint138.children[0] = HAnimJoint139;

HAnimJoint137.children = new MFNode();

HAnimJoint137.children[0] = HAnimJoint138;

HAnimJoint136.children = new MFNode();

HAnimJoint136.children[0] = HAnimJoint137;

HAnimJoint126.children[2] = HAnimJoint136;

let HAnimJoint141 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint141.name = "l_midcarpal_4_5";
HAnimJoint141.DEF = "hanim_l_midcarpal_4_5";
HAnimJoint141.center = new SFVec3f(new float[0,1,0]);
HAnimJoint141.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint141.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint142 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint142.name = "l_carpometacarpal_4";
HAnimJoint142.DEF = "hanim_l_carpometacarpal_4";
HAnimJoint142.center = new SFVec3f(new float[0.1956,0.8019,-0.0794]);
HAnimJoint142.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint142.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint143 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint143.name = "l_metacarpophalangeal_4";
HAnimJoint143.DEF = "hanim_l_metacarpophalangeal_4";
HAnimJoint143.center = new SFVec3f(new float[0.1956,0.7815,-0.0794]);
HAnimJoint143.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint143.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint144 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint144.name = "l_carpal_proximal_interphalangeal_4";
HAnimJoint144.DEF = "hanim_l_carpal_proximal_interphalangeal_4";
HAnimJoint144.center = new SFVec3f(new float[0.1973,0.7287,-0.0777]);
HAnimJoint144.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint144.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint145 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint145.name = "l_carpal_distal_interphalangeal_4";
HAnimJoint145.DEF = "hanim_l_carpal_distal_interphalangeal_4";
HAnimJoint145.center = new SFVec3f(new float[0.1983,0.7045,-0.0767]);
HAnimJoint145.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint145.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint144.children = new MFNode();

HAnimJoint144.children[0] = HAnimJoint145;

HAnimJoint143.children = new MFNode();

HAnimJoint143.children[0] = HAnimJoint144;

HAnimJoint142.children = new MFNode();

HAnimJoint142.children[0] = HAnimJoint143;

HAnimJoint141.children = new MFNode();

HAnimJoint141.children[0] = HAnimJoint142;

let HAnimJoint146 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint146.name = "l_carpometacarpal_5";
HAnimJoint146.DEF = "hanim_l_carpometacarpal_5";
HAnimJoint146.center = new SFVec3f(new float[0.1925,0.8066,-0.1036]);
HAnimJoint146.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint146.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint147 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint147.name = "l_metacarpophalangeal_5";
HAnimJoint147.DEF = "hanim_l_metacarpophalangeal_5";
HAnimJoint147.center = new SFVec3f(new float[0.1925,0.7866,-0.1036]);
HAnimJoint147.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint147.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint148 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint148.name = "l_carpal_proximal_interphalangeal_5";
HAnimJoint148.DEF = "hanim_l_carpal_proximal_interphalangeal_5";
HAnimJoint148.center = new SFVec3f(new float[0.1938,0.7452,-0.1024]);
HAnimJoint148.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint148.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint149 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint149.name = "l_carpal_distal_interphalangeal_5";
HAnimJoint149.DEF = "hanim_l_carpal_distal_interphalangeal_5";
HAnimJoint149.center = new SFVec3f(new float[0.1948,0.7277,-0.1017]);
HAnimJoint149.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint149.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint148.children = new MFNode();

HAnimJoint148.children[0] = HAnimJoint149;

HAnimJoint147.children = new MFNode();

HAnimJoint147.children[0] = HAnimJoint148;

HAnimJoint146.children = new MFNode();

HAnimJoint146.children[0] = HAnimJoint147;

HAnimJoint141.children[1] = HAnimJoint146;

HAnimJoint126.children[3] = HAnimJoint141;

HAnimJoint125.children = new MFNode();

HAnimJoint125.children[0] = HAnimJoint126;

HAnimJoint124.children = new MFNode();

HAnimJoint124.children[0] = HAnimJoint125;

HAnimJoint123.children = new MFNode();

HAnimJoint123.children[0] = HAnimJoint124;

HAnimJoint122.children = new MFNode();

HAnimJoint122.children[0] = HAnimJoint123;

HAnimJoint106.children[1] = HAnimJoint122;

let HAnimJoint150 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint150.name = "r_sternoclavicular";
HAnimJoint150.DEF = "hanim_r_sternoclavicular";
HAnimJoint150.center = new SFVec3f(new float[-0.0694,1.46,-0.033]);
HAnimJoint150.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint150.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint151 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint151.name = "r_acromioclavicular";
HAnimJoint151.DEF = "hanim_r_acromioclavicular";
HAnimJoint151.center = new SFVec3f(new float[-0.0836,1.4281,-0.0401]);
HAnimJoint151.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint151.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint152 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint152.name = "r_shoulder";
HAnimJoint152.DEF = "hanim_r_shoulder";
HAnimJoint152.center = new SFVec3f(new float[-0.1907,1.4407,-0.0325]);
HAnimJoint152.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint152.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint153 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint153.name = "r_elbow";
HAnimJoint153.DEF = "hanim_r_elbow";
HAnimJoint153.center = new SFVec3f(new float[-0.1949,1.1388,-0.062]);
HAnimJoint153.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint153.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint154 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint154.name = "r_radiocarpal";
HAnimJoint154.DEF = "hanim_r_radiocarpal";
HAnimJoint154.center = new SFVec3f(new float[-0.1959,0.8694,-0.0521]);
HAnimJoint154.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint154.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint155 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint155.name = "r_midcarpal_1";
HAnimJoint155.DEF = "hanim_r_midcarpal_1";
HAnimJoint155.center = new SFVec3f(new float[0,1,0]);
HAnimJoint155.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint155.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint156 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint156.name = "r_carpometacarpal_1";
HAnimJoint156.DEF = "hanim_r_carpometacarpal_1";
HAnimJoint156.center = new SFVec3f(new float[-0.1899,0.8502,-0.0473]);
HAnimJoint156.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint156.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint157 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint157.name = "r_metacarpophalangeal_1";
HAnimJoint157.DEF = "hanim_r_metacarpophalangeal_1";
HAnimJoint157.center = new SFVec3f(new float[-0.1874,0.8256,0.0306]);
HAnimJoint157.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint157.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint158 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint158.name = "r_carpal_interphalangeal_1";
HAnimJoint158.DEF = "hanim_r_carpal_interphalangeal_1";
HAnimJoint158.center = new SFVec3f(new float[-0.1864,0.819,0.0506]);
HAnimJoint158.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint158.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint157.children = new MFNode();

HAnimJoint157.children[0] = HAnimJoint158;

HAnimJoint156.children = new MFNode();

HAnimJoint156.children[0] = HAnimJoint157;

HAnimJoint155.children = new MFNode();

HAnimJoint155.children[0] = HAnimJoint156;

HAnimJoint154.children = new MFNode();

HAnimJoint154.children[0] = HAnimJoint155;

let HAnimJoint159 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint159.name = "r_midcarpal_2";
HAnimJoint159.DEF = "hanim_r_midcarpal_2";
HAnimJoint159.center = new SFVec3f(new float[0,1,0]);
HAnimJoint159.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint159.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint160 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint160.name = "r_carpometacarpal_2";
HAnimJoint160.DEF = "hanim_r_carpometacarpal_2";
HAnimJoint160.center = new SFVec3f(new float[-0.1961,0.8055,-0.0218]);
HAnimJoint160.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint160.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint161 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint161.name = "r_metacarpophalangeal_2";
HAnimJoint161.DEF = "hanim_r_metacarpophalangeal_2";
HAnimJoint161.center = new SFVec3f(new float[-0.1961,0.7846,-0.0218]);
HAnimJoint161.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint161.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint162 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint162.name = "r_carpal_proximal_interphalangeal_2";
HAnimJoint162.DEF = "hanim_r_carpal_proximal_interphalangeal_2";
HAnimJoint162.center = new SFVec3f(new float[-0.1954,0.7393,-0.0185]);
HAnimJoint162.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint162.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint163 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint163.name = "r_carpal_distal_interphalangeal_2";
HAnimJoint163.DEF = "hanim_r_carpal_distal_interphalangeal_2";
HAnimJoint163.center = new SFVec3f(new float[-0.1945,0.7169,-0.0173]);
HAnimJoint163.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint163.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint162.children = new MFNode();

HAnimJoint162.children[0] = HAnimJoint163;

HAnimJoint161.children = new MFNode();

HAnimJoint161.children[0] = HAnimJoint162;

HAnimJoint160.children = new MFNode();

HAnimJoint160.children[0] = HAnimJoint161;

HAnimJoint159.children = new MFNode();

HAnimJoint159.children[0] = HAnimJoint160;

HAnimJoint154.children[1] = HAnimJoint159;

let HAnimJoint164 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint164.name = "r_midcarpal_3";
HAnimJoint164.DEF = "hanim_r_midcarpal_3";
HAnimJoint164.center = new SFVec3f(new float[0,1,0]);
HAnimJoint164.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint164.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint165 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint165.name = "r_carpometacarpal_3";
HAnimJoint165.DEF = "hanim_r_carpometacarpal_3";
HAnimJoint165.center = new SFVec3f(new float[-0.1972,0.806,-0.0468]);
HAnimJoint165.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint165.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint166 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint166.name = "r_metacarpophalangeal_3";
HAnimJoint166.DEF = "hanim_r_metacarpophalangeal_3";
HAnimJoint166.center = new SFVec3f(new float[-0.1972,0.7849,-0.0468]);
HAnimJoint166.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint166.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint167 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint167.name = "r_carpal_proximal_interphalangeal_3";
HAnimJoint167.DEF = "hanim_r_carpal_proximal_interphalangeal_3";
HAnimJoint167.center = new SFVec3f(new float[-0.195,0.7304,-0.0441]);
HAnimJoint167.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint167.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint168 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint168.name = "r_carpal_distal_interphalangeal_3";
HAnimJoint168.DEF = "hanim_r_carpal_distal_interphalangeal_3";
HAnimJoint168.center = new SFVec3f(new float[-0.1939,0.7042,-0.0432]);
HAnimJoint168.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint168.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint167.children = new MFNode();

HAnimJoint167.children[0] = HAnimJoint168;

HAnimJoint166.children = new MFNode();

HAnimJoint166.children[0] = HAnimJoint167;

HAnimJoint165.children = new MFNode();

HAnimJoint165.children[0] = HAnimJoint166;

HAnimJoint164.children = new MFNode();

HAnimJoint164.children[0] = HAnimJoint165;

HAnimJoint154.children[2] = HAnimJoint164;

let HAnimJoint169 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint169.name = "r_midcarpal_4_5";
HAnimJoint169.DEF = "hanim_r_midcarpal_4_5";
HAnimJoint169.center = new SFVec3f(new float[0,1,0]);
HAnimJoint169.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint169.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint170 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint170.name = "r_carpometacarpal_4";
HAnimJoint170.DEF = "hanim_r_carpometacarpal_4";
HAnimJoint170.center = new SFVec3f(new float[-0.1951,0.8049,-0.0732]);
HAnimJoint170.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint170.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint171 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint171.name = "r_metacarpophalangeal_4";
HAnimJoint171.DEF = "hanim_r_metacarpophalangeal_4";
HAnimJoint171.center = new SFVec3f(new float[-0.1951,0.7845,-0.0732]);
HAnimJoint171.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint171.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint172 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint172.name = "r_carpal_proximal_interphalangeal_4";
HAnimJoint172.DEF = "hanim_r_carpal_proximal_interphalangeal_4";
HAnimJoint172.center = new SFVec3f(new float[-0.192,0.7318,-0.0716]);
HAnimJoint172.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint172.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint173 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint173.name = "r_carpal_distal_interphalangeal_4";
HAnimJoint173.DEF = "hanim_r_carpal_distal_interphalangeal_4";
HAnimJoint173.center = new SFVec3f(new float[-0.1908,0.7077,-0.0706]);
HAnimJoint173.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint173.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint172.children = new MFNode();

HAnimJoint172.children[0] = HAnimJoint173;

HAnimJoint171.children = new MFNode();

HAnimJoint171.children[0] = HAnimJoint172;

HAnimJoint170.children = new MFNode();

HAnimJoint170.children[0] = HAnimJoint171;

HAnimJoint169.children = new MFNode();

HAnimJoint169.children[0] = HAnimJoint170;

let HAnimJoint174 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint174.name = "r_carpometacarpal_5";
HAnimJoint174.DEF = "hanim_r_carpometacarpal_5";
HAnimJoint174.center = new SFVec3f(new float[-0.1926,0.8096,-0.0975]);
HAnimJoint174.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint174.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint175 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint175.name = "r_metacarpophalangeal_5";
HAnimJoint175.DEF = "hanim_r_metacarpophalangeal_5";
HAnimJoint175.center = new SFVec3f(new float[-0.1926,0.7896,-0.0975]);
HAnimJoint175.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint175.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint176 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint176.name = "r_carpal_proximal_interphalangeal_5";
HAnimJoint176.DEF = "hanim_r_carpal_proximal_interphalangeal_5";
HAnimJoint176.center = new SFVec3f(new float[-0.1902,0.7483,-0.0963]);
HAnimJoint176.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint176.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint177 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint177.name = "r_carpal_distal_interphalangeal_5";
HAnimJoint177.DEF = "hanim_r_carpal_distal_interphalangeal_5";
HAnimJoint177.center = new SFVec3f(new float[-0.1908,0.754,-0.096]);
HAnimJoint177.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint177.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint176.children = new MFNode();

HAnimJoint176.children[0] = HAnimJoint177;

HAnimJoint175.children = new MFNode();

HAnimJoint175.children[0] = HAnimJoint176;

HAnimJoint174.children = new MFNode();

HAnimJoint174.children[0] = HAnimJoint175;

HAnimJoint169.children[1] = HAnimJoint174;

HAnimJoint154.children[3] = HAnimJoint169;

HAnimJoint153.children = new MFNode();

HAnimJoint153.children[0] = HAnimJoint154;

HAnimJoint152.children = new MFNode();

HAnimJoint152.children[0] = HAnimJoint153;

HAnimJoint151.children = new MFNode();

HAnimJoint151.children[0] = HAnimJoint152;

HAnimJoint150.children = new MFNode();

HAnimJoint150.children[0] = HAnimJoint151;

HAnimJoint106.children[2] = HAnimJoint150;

HAnimJoint105.children = new MFNode();

HAnimJoint105.children[0] = HAnimJoint106;

HAnimJoint104.children = new MFNode();

HAnimJoint104.children[0] = HAnimJoint105;

HAnimJoint103.children = new MFNode();

HAnimJoint103.children[0] = HAnimJoint104;

HAnimJoint102.children = new MFNode();

HAnimJoint102.children[0] = HAnimJoint103;

HAnimJoint101.children = new MFNode();

HAnimJoint101.children[0] = HAnimJoint102;

HAnimJoint100.children = new MFNode();

HAnimJoint100.children[0] = HAnimJoint101;

HAnimJoint99.children = new MFNode();

HAnimJoint99.children[0] = HAnimJoint100;

HAnimJoint98.children = new MFNode();

HAnimJoint98.children[0] = HAnimJoint99;

HAnimJoint97.children = new MFNode();

HAnimJoint97.children[0] = HAnimJoint98;

HAnimJoint96.children = new MFNode();

HAnimJoint96.children[0] = HAnimJoint97;

HAnimJoint95.children = new MFNode();

HAnimJoint95.children[0] = HAnimJoint96;

HAnimJoint94.children = new MFNode();

HAnimJoint94.children[0] = HAnimJoint95;

HAnimJoint93.children = new MFNode();

HAnimJoint93.children[0] = HAnimJoint94;

HAnimJoint92.children = new MFNode();

HAnimJoint92.children[0] = HAnimJoint93;

HAnimJoint91.children = new MFNode();

HAnimJoint91.children[0] = HAnimJoint92;

HAnimJoint90.children = new MFNode();

HAnimJoint90.children[0] = HAnimJoint91;

HAnimJoint32.children[1] = HAnimJoint90;

HAnimHumanoid31.joints = new MFNode();

HAnimHumanoid31.joints[0] = HAnimJoint32;

let HAnimJoint178 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint178.USE = "hanim_humanoid_root";
HAnimHumanoid31.joints[1] = HAnimJoint178;

let HAnimJoint179 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint179.USE = "hanim_sacroiliac";
HAnimHumanoid31.joints[2] = HAnimJoint179;

let HAnimJoint180 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint180.USE = "hanim_l_hip";
HAnimHumanoid31.joints[3] = HAnimJoint180;

let HAnimJoint181 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint181.USE = "hanim_l_knee";
HAnimHumanoid31.joints[4] = HAnimJoint181;

let HAnimJoint182 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint182.USE = "hanim_l_talocrural";
HAnimHumanoid31.joints[5] = HAnimJoint182;

let HAnimJoint183 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint183.USE = "hanim_l_talocalcaneonavicular";
HAnimHumanoid31.joints[6] = HAnimJoint183;

let HAnimJoint184 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint184.USE = "hanim_l_cuneonavicular_1";
HAnimHumanoid31.joints[7] = HAnimJoint184;

let HAnimJoint185 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint185.USE = "hanim_l_tarsometatarsal_1";
HAnimHumanoid31.joints[8] = HAnimJoint185;

let HAnimJoint186 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint186.USE = "hanim_l_metatarsophalangeal_1";
HAnimHumanoid31.joints[9] = HAnimJoint186;

let HAnimJoint187 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint187.USE = "hanim_l_tarsal_interphalangeal_1";
HAnimHumanoid31.joints[10] = HAnimJoint187;

let HAnimJoint188 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint188.USE = "hanim_l_cuneonavicular_2";
HAnimHumanoid31.joints[11] = HAnimJoint188;

let HAnimJoint189 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint189.USE = "hanim_l_tarsometatarsal_2";
HAnimHumanoid31.joints[12] = HAnimJoint189;

let HAnimJoint190 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint190.USE = "hanim_l_metatarsophalangeal_2";
HAnimHumanoid31.joints[13] = HAnimJoint190;

let HAnimJoint191 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint191.USE = "hanim_l_tarsal_proximal_interphalangeal_2";
HAnimHumanoid31.joints[14] = HAnimJoint191;

let HAnimJoint192 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint192.USE = "hanim_l_tarsal_distal_interphalangeal_2";
HAnimHumanoid31.joints[15] = HAnimJoint192;

let HAnimJoint193 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint193.USE = "hanim_l_cuneonavicular_3";
HAnimHumanoid31.joints[16] = HAnimJoint193;

let HAnimJoint194 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint194.USE = "hanim_l_tarsometatarsal_3";
HAnimHumanoid31.joints[17] = HAnimJoint194;

let HAnimJoint195 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint195.USE = "hanim_l_metatarsophalangeal_3";
HAnimHumanoid31.joints[18] = HAnimJoint195;

let HAnimJoint196 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint196.USE = "hanim_l_tarsal_proximal_interphalangeal_3";
HAnimHumanoid31.joints[19] = HAnimJoint196;

let HAnimJoint197 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint197.USE = "hanim_l_tarsal_distal_interphalangeal_3";
HAnimHumanoid31.joints[20] = HAnimJoint197;

let HAnimJoint198 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint198.USE = "hanim_l_calcaneocuboid";
HAnimHumanoid31.joints[21] = HAnimJoint198;

let HAnimJoint199 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint199.USE = "hanim_l_transversetarsal";
HAnimHumanoid31.joints[22] = HAnimJoint199;

let HAnimJoint200 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint200.USE = "hanim_l_tarsometatarsal_4";
HAnimHumanoid31.joints[23] = HAnimJoint200;

let HAnimJoint201 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint201.USE = "hanim_l_metatarsophalangeal_4";
HAnimHumanoid31.joints[24] = HAnimJoint201;

let HAnimJoint202 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint202.USE = "hanim_l_tarsal_proximal_interphalangeal_4";
HAnimHumanoid31.joints[25] = HAnimJoint202;

let HAnimJoint203 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint203.USE = "hanim_l_tarsal_distal_interphalangeal_4";
HAnimHumanoid31.joints[26] = HAnimJoint203;

let HAnimJoint204 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint204.USE = "hanim_l_tarsometatarsal_5";
HAnimHumanoid31.joints[27] = HAnimJoint204;

let HAnimJoint205 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint205.USE = "hanim_l_metatarsophalangeal_5";
HAnimHumanoid31.joints[28] = HAnimJoint205;

let HAnimJoint206 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint206.USE = "hanim_l_tarsal_proximal_interphalangeal_5";
HAnimHumanoid31.joints[29] = HAnimJoint206;

let HAnimJoint207 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint207.USE = "hanim_l_tarsal_distal_interphalangeal_5";
HAnimHumanoid31.joints[30] = HAnimJoint207;

let HAnimJoint208 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint208.USE = "hanim_r_hip";
HAnimHumanoid31.joints[31] = HAnimJoint208;

let HAnimJoint209 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint209.USE = "hanim_r_knee";
HAnimHumanoid31.joints[32] = HAnimJoint209;

let HAnimJoint210 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint210.USE = "hanim_r_talocrural";
HAnimHumanoid31.joints[33] = HAnimJoint210;

let HAnimJoint211 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint211.USE = "hanim_r_talocalcaneonavicular";
HAnimHumanoid31.joints[34] = HAnimJoint211;

let HAnimJoint212 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint212.USE = "hanim_r_cuneonavicular_1";
HAnimHumanoid31.joints[35] = HAnimJoint212;

let HAnimJoint213 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint213.USE = "hanim_r_tarsometatarsal_1";
HAnimHumanoid31.joints[36] = HAnimJoint213;

let HAnimJoint214 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint214.USE = "hanim_r_metatarsophalangeal_1";
HAnimHumanoid31.joints[37] = HAnimJoint214;

let HAnimJoint215 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint215.USE = "hanim_r_tarsal_interphalangeal_1";
HAnimHumanoid31.joints[38] = HAnimJoint215;

let HAnimJoint216 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint216.USE = "hanim_r_cuneonavicular_2";
HAnimHumanoid31.joints[39] = HAnimJoint216;

let HAnimJoint217 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint217.USE = "hanim_r_tarsometatarsal_2";
HAnimHumanoid31.joints[40] = HAnimJoint217;

let HAnimJoint218 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint218.USE = "hanim_r_metatarsophalangeal_2";
HAnimHumanoid31.joints[41] = HAnimJoint218;

let HAnimJoint219 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint219.USE = "hanim_r_tarsal_proximal_interphalangeal_2";
HAnimHumanoid31.joints[42] = HAnimJoint219;

let HAnimJoint220 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint220.USE = "hanim_r_tarsal_distal_interphalangeal_2";
HAnimHumanoid31.joints[43] = HAnimJoint220;

let HAnimJoint221 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint221.USE = "hanim_r_cuneonavicular_3";
HAnimHumanoid31.joints[44] = HAnimJoint221;

let HAnimJoint222 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint222.USE = "hanim_r_tarsometatarsal_3";
HAnimHumanoid31.joints[45] = HAnimJoint222;

let HAnimJoint223 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint223.USE = "hanim_r_metatarsophalangeal_3";
HAnimHumanoid31.joints[46] = HAnimJoint223;

let HAnimJoint224 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint224.USE = "hanim_r_tarsal_proximal_interphalangeal_3";
HAnimHumanoid31.joints[47] = HAnimJoint224;

let HAnimJoint225 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint225.USE = "hanim_r_tarsal_distal_interphalangeal_3";
HAnimHumanoid31.joints[48] = HAnimJoint225;

let HAnimJoint226 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint226.USE = "hanim_r_calcaneocuboid";
HAnimHumanoid31.joints[49] = HAnimJoint226;

let HAnimJoint227 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint227.USE = "hanim_r_transversetarsal";
HAnimHumanoid31.joints[50] = HAnimJoint227;

let HAnimJoint228 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint228.USE = "hanim_r_tarsometatarsal_4";
HAnimHumanoid31.joints[51] = HAnimJoint228;

let HAnimJoint229 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint229.USE = "hanim_r_metatarsophalangeal_4";
HAnimHumanoid31.joints[52] = HAnimJoint229;

let HAnimJoint230 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint230.USE = "hanim_r_tarsal_proximal_interphalangeal_4";
HAnimHumanoid31.joints[53] = HAnimJoint230;

let HAnimJoint231 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint231.USE = "hanim_r_tarsal_distal_interphalangeal_4";
HAnimHumanoid31.joints[54] = HAnimJoint231;

let HAnimJoint232 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint232.USE = "hanim_r_tarsometatarsal_5";
HAnimHumanoid31.joints[55] = HAnimJoint232;

let HAnimJoint233 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint233.USE = "hanim_r_metatarsophalangeal_5";
HAnimHumanoid31.joints[56] = HAnimJoint233;

let HAnimJoint234 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint234.USE = "hanim_r_tarsal_proximal_interphalangeal_5";
HAnimHumanoid31.joints[57] = HAnimJoint234;

let HAnimJoint235 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint235.USE = "hanim_r_tarsal_distal_interphalangeal_5";
HAnimHumanoid31.joints[58] = HAnimJoint235;

let HAnimJoint236 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint236.USE = "hanim_vl5";
HAnimHumanoid31.joints[59] = HAnimJoint236;

let HAnimJoint237 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint237.USE = "hanim_vl4";
HAnimHumanoid31.joints[60] = HAnimJoint237;

let HAnimJoint238 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint238.USE = "hanim_vl3";
HAnimHumanoid31.joints[61] = HAnimJoint238;

let HAnimJoint239 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint239.USE = "hanim_vl2";
HAnimHumanoid31.joints[62] = HAnimJoint239;

let HAnimJoint240 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint240.USE = "hanim_vl1";
HAnimHumanoid31.joints[63] = HAnimJoint240;

let HAnimJoint241 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint241.USE = "hanim_vt12";
HAnimHumanoid31.joints[64] = HAnimJoint241;

let HAnimJoint242 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint242.USE = "hanim_vt11";
HAnimHumanoid31.joints[65] = HAnimJoint242;

let HAnimJoint243 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint243.USE = "hanim_vt10";
HAnimHumanoid31.joints[66] = HAnimJoint243;

let HAnimJoint244 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint244.USE = "hanim_vt9";
HAnimHumanoid31.joints[67] = HAnimJoint244;

let HAnimJoint245 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint245.USE = "hanim_vt8";
HAnimHumanoid31.joints[68] = HAnimJoint245;

let HAnimJoint246 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint246.USE = "hanim_vt7";
HAnimHumanoid31.joints[69] = HAnimJoint246;

let HAnimJoint247 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint247.USE = "hanim_vt6";
HAnimHumanoid31.joints[70] = HAnimJoint247;

let HAnimJoint248 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint248.USE = "hanim_vt5";
HAnimHumanoid31.joints[71] = HAnimJoint248;

let HAnimJoint249 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint249.USE = "hanim_vt4";
HAnimHumanoid31.joints[72] = HAnimJoint249;

let HAnimJoint250 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint250.USE = "hanim_vt3";
HAnimHumanoid31.joints[73] = HAnimJoint250;

let HAnimJoint251 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint251.USE = "hanim_vt2";
HAnimHumanoid31.joints[74] = HAnimJoint251;

let HAnimJoint252 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint252.USE = "hanim_vt1";
HAnimHumanoid31.joints[75] = HAnimJoint252;

let HAnimJoint253 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint253.USE = "hanim_vc7";
HAnimHumanoid31.joints[76] = HAnimJoint253;

let HAnimJoint254 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint254.USE = "hanim_vc6";
HAnimHumanoid31.joints[77] = HAnimJoint254;

let HAnimJoint255 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint255.USE = "hanim_vc5";
HAnimHumanoid31.joints[78] = HAnimJoint255;

let HAnimJoint256 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint256.USE = "hanim_vc4";
HAnimHumanoid31.joints[79] = HAnimJoint256;

let HAnimJoint257 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint257.USE = "hanim_vc3";
HAnimHumanoid31.joints[80] = HAnimJoint257;

let HAnimJoint258 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint258.USE = "hanim_vc2";
HAnimHumanoid31.joints[81] = HAnimJoint258;

let HAnimJoint259 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint259.USE = "hanim_vc1";
HAnimHumanoid31.joints[82] = HAnimJoint259;

let HAnimJoint260 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint260.USE = "hanim_skullbase";
HAnimHumanoid31.joints[83] = HAnimJoint260;

let HAnimJoint261 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint261.USE = "hanim_l_eyelid_joint";
HAnimHumanoid31.joints[84] = HAnimJoint261;

let HAnimJoint262 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint262.USE = "hanim_r_eyelid_joint";
HAnimHumanoid31.joints[85] = HAnimJoint262;

let HAnimJoint263 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint263.USE = "hanim_l_eyeball_joint";
HAnimHumanoid31.joints[86] = HAnimJoint263;

let HAnimJoint264 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint264.USE = "hanim_r_eyeball_joint";
HAnimHumanoid31.joints[87] = HAnimJoint264;

let HAnimJoint265 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint265.USE = "hanim_l_eyebrow_joint";
HAnimHumanoid31.joints[88] = HAnimJoint265;

let HAnimJoint266 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint266.USE = "hanim_r_eyebrow_joint";
HAnimHumanoid31.joints[89] = HAnimJoint266;

let HAnimJoint267 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint267.USE = "hanim_temporomandibular";
HAnimHumanoid31.joints[90] = HAnimJoint267;

let HAnimJoint268 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint268.USE = "hanim_l_sternoclavicular";
HAnimHumanoid31.joints[91] = HAnimJoint268;

let HAnimJoint269 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint269.USE = "hanim_l_acromioclavicular";
HAnimHumanoid31.joints[92] = HAnimJoint269;

let HAnimJoint270 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint270.USE = "hanim_l_shoulder";
HAnimHumanoid31.joints[93] = HAnimJoint270;

let HAnimJoint271 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint271.USE = "hanim_l_elbow";
HAnimHumanoid31.joints[94] = HAnimJoint271;

let HAnimJoint272 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint272.USE = "hanim_l_radiocarpal";
HAnimHumanoid31.joints[95] = HAnimJoint272;

let HAnimJoint273 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint273.USE = "hanim_l_midcarpal_1";
HAnimHumanoid31.joints[96] = HAnimJoint273;

let HAnimJoint274 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint274.USE = "hanim_l_carpometacarpal_1";
HAnimHumanoid31.joints[97] = HAnimJoint274;

let HAnimJoint275 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint275.USE = "hanim_l_metacarpophalangeal_1";
HAnimHumanoid31.joints[98] = HAnimJoint275;

let HAnimJoint276 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint276.USE = "hanim_l_carpal_interphalangeal_1";
HAnimHumanoid31.joints[99] = HAnimJoint276;

let HAnimJoint277 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint277.USE = "hanim_l_midcarpal_2";
HAnimHumanoid31.joints[100] = HAnimJoint277;

let HAnimJoint278 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint278.USE = "hanim_l_carpometacarpal_2";
HAnimHumanoid31.joints[101] = HAnimJoint278;

let HAnimJoint279 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint279.USE = "hanim_l_metacarpophalangeal_2";
HAnimHumanoid31.joints[102] = HAnimJoint279;

let HAnimJoint280 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint280.USE = "hanim_l_carpal_proximal_interphalangeal_2";
HAnimHumanoid31.joints[103] = HAnimJoint280;

let HAnimJoint281 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint281.USE = "hanim_l_carpal_distal_interphalangeal_2";
HAnimHumanoid31.joints[104] = HAnimJoint281;

let HAnimJoint282 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint282.USE = "hanim_l_midcarpal_3";
HAnimHumanoid31.joints[105] = HAnimJoint282;

let HAnimJoint283 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint283.USE = "hanim_l_carpometacarpal_3";
HAnimHumanoid31.joints[106] = HAnimJoint283;

let HAnimJoint284 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint284.USE = "hanim_l_metacarpophalangeal_3";
HAnimHumanoid31.joints[107] = HAnimJoint284;

let HAnimJoint285 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint285.USE = "hanim_l_carpal_proximal_interphalangeal_3";
HAnimHumanoid31.joints[108] = HAnimJoint285;

let HAnimJoint286 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint286.USE = "hanim_l_carpal_distal_interphalangeal_3";
HAnimHumanoid31.joints[109] = HAnimJoint286;

let HAnimJoint287 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint287.USE = "hanim_l_midcarpal_4_5";
HAnimHumanoid31.joints[110] = HAnimJoint287;

let HAnimJoint288 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint288.USE = "hanim_l_carpometacarpal_4";
HAnimHumanoid31.joints[111] = HAnimJoint288;

let HAnimJoint289 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint289.USE = "hanim_l_metacarpophalangeal_4";
HAnimHumanoid31.joints[112] = HAnimJoint289;

let HAnimJoint290 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint290.USE = "hanim_l_carpal_proximal_interphalangeal_4";
HAnimHumanoid31.joints[113] = HAnimJoint290;

let HAnimJoint291 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint291.USE = "hanim_l_carpal_distal_interphalangeal_4";
HAnimHumanoid31.joints[114] = HAnimJoint291;

let HAnimJoint292 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint292.USE = "hanim_l_carpometacarpal_5";
HAnimHumanoid31.joints[115] = HAnimJoint292;

let HAnimJoint293 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint293.USE = "hanim_l_metacarpophalangeal_5";
HAnimHumanoid31.joints[116] = HAnimJoint293;

let HAnimJoint294 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint294.USE = "hanim_l_carpal_proximal_interphalangeal_5";
HAnimHumanoid31.joints[117] = HAnimJoint294;

let HAnimJoint295 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint295.USE = "hanim_l_carpal_distal_interphalangeal_5";
HAnimHumanoid31.joints[118] = HAnimJoint295;

let HAnimJoint296 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint296.USE = "hanim_r_sternoclavicular";
HAnimHumanoid31.joints[119] = HAnimJoint296;

let HAnimJoint297 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint297.USE = "hanim_r_acromioclavicular";
HAnimHumanoid31.joints[120] = HAnimJoint297;

let HAnimJoint298 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint298.USE = "hanim_r_shoulder";
HAnimHumanoid31.joints[121] = HAnimJoint298;

let HAnimJoint299 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint299.USE = "hanim_r_elbow";
HAnimHumanoid31.joints[122] = HAnimJoint299;

let HAnimJoint300 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint300.USE = "hanim_r_radiocarpal";
HAnimHumanoid31.joints[123] = HAnimJoint300;

let HAnimJoint301 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint301.USE = "hanim_r_midcarpal_1";
HAnimHumanoid31.joints[124] = HAnimJoint301;

let HAnimJoint302 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint302.USE = "hanim_r_carpometacarpal_1";
HAnimHumanoid31.joints[125] = HAnimJoint302;

let HAnimJoint303 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint303.USE = "hanim_r_metacarpophalangeal_1";
HAnimHumanoid31.joints[126] = HAnimJoint303;

let HAnimJoint304 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint304.USE = "hanim_r_carpal_interphalangeal_1";
HAnimHumanoid31.joints[127] = HAnimJoint304;

let HAnimJoint305 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint305.USE = "hanim_r_midcarpal_2";
HAnimHumanoid31.joints[128] = HAnimJoint305;

let HAnimJoint306 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint306.USE = "hanim_r_carpometacarpal_2";
HAnimHumanoid31.joints[129] = HAnimJoint306;

let HAnimJoint307 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint307.USE = "hanim_r_metacarpophalangeal_2";
HAnimHumanoid31.joints[130] = HAnimJoint307;

let HAnimJoint308 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint308.USE = "hanim_r_carpal_proximal_interphalangeal_2";
HAnimHumanoid31.joints[131] = HAnimJoint308;

let HAnimJoint309 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint309.USE = "hanim_r_carpal_distal_interphalangeal_2";
HAnimHumanoid31.joints[132] = HAnimJoint309;

let HAnimJoint310 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint310.USE = "hanim_r_midcarpal_3";
HAnimHumanoid31.joints[133] = HAnimJoint310;

let HAnimJoint311 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint311.USE = "hanim_r_carpometacarpal_3";
HAnimHumanoid31.joints[134] = HAnimJoint311;

let HAnimJoint312 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint312.USE = "hanim_r_metacarpophalangeal_3";
HAnimHumanoid31.joints[135] = HAnimJoint312;

let HAnimJoint313 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint313.USE = "hanim_r_carpal_proximal_interphalangeal_3";
HAnimHumanoid31.joints[136] = HAnimJoint313;

let HAnimJoint314 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint314.USE = "hanim_r_carpal_distal_interphalangeal_3";
HAnimHumanoid31.joints[137] = HAnimJoint314;

let HAnimJoint315 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint315.USE = "hanim_r_midcarpal_4_5";
HAnimHumanoid31.joints[138] = HAnimJoint315;

let HAnimJoint316 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint316.USE = "hanim_r_carpometacarpal_4";
HAnimHumanoid31.joints[139] = HAnimJoint316;

let HAnimJoint317 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint317.USE = "hanim_r_metacarpophalangeal_4";
HAnimHumanoid31.joints[140] = HAnimJoint317;

let HAnimJoint318 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint318.USE = "hanim_r_carpal_proximal_interphalangeal_4";
HAnimHumanoid31.joints[141] = HAnimJoint318;

let HAnimJoint319 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint319.USE = "hanim_r_carpal_distal_interphalangeal_4";
HAnimHumanoid31.joints[142] = HAnimJoint319;

let HAnimJoint320 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint320.USE = "hanim_r_carpometacarpal_5";
HAnimHumanoid31.joints[143] = HAnimJoint320;

let HAnimJoint321 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint321.USE = "hanim_r_metacarpophalangeal_5";
HAnimHumanoid31.joints[144] = HAnimJoint321;

let HAnimJoint322 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint322.USE = "hanim_r_carpal_proximal_interphalangeal_5";
HAnimHumanoid31.joints[145] = HAnimJoint322;

let HAnimJoint323 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint323.USE = "hanim_r_carpal_distal_interphalangeal_5";
HAnimHumanoid31.joints[146] = HAnimJoint323;

browser.currentScene.children[4] = HAnimHumanoid31;

