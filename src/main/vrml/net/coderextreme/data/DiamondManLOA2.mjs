const
   X3D     = require ("x_ite-node"),
   canvas  = X3D .createBrowser (),
   browser = canvas .browser,
   scene   = browser .currentScene;
async function main () {
scene.setProfile(browser.getProfile("Immersive"));
scene .addComponent (browser .getComponent ("HAnim", 1));
scene.addMetaData("title", "DiamondManLOA2.x3d");
scene.addMetaData("description", "HAnim skeletal structure at level of articulation two, one diamond at the base node for the structure, blue spheres for HAnimSite feaature points");
scene.addMetaData("creator", "Matthew T. Beitler");
scene.addMetaData("translator", "Joel S. Pawloski");
scene.addMetaData("translator", "Don Brutzman");
scene.addMetaData("created", "12 November 2001");
scene.addMetaData("modified", "Mon, 15 Sep 2025 05:18:47 GMT");
scene.addMetaData("Image", "DiamondManLOA2.png");
scene.addMetaData("Image", "images/BonesAllSkeletonFrontViewLOA2.png");
scene.addMetaData("motto", "(a) "Diamonds are a girl's best friend." (b) "Gosh, it sure is chilly in here."");
scene.addMetaData("reference", "The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps");
scene.addMetaData("subject", "human animation, x3d, vrml, animation");
scene.addMetaData("identifier", "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Templates/DiamondManLOA2.x3d");
await browser .loadComponents (scene);
let WorldInfo17 = browser.currentScene.createNode("WorldInfo");
WorldInfo17.title = "HANIM 1.1 Default Joint Centers, LOA1";
WorldInfo17.info = new X3D.MFString([new X3D.SFString("HAnim 2.0 Default Joint Centers, Level Of Articulation (LOA) 2 -------------------------------------------------------- HANIM 1.1 (VRML 2.0) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 1.1 (VRML 2.0) Author email: beitler@graphics.cis.upenn.edu or beitler@acm.org HANIM 1.1 (VRML 2.0) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 1.1 (VRML 2.0) Compliance Date: May 12, 1999 HANIM 1.1 Compliance Information: http://ece.uwaterloo.ca/~HAnim/ Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps, .pdf")]);
browser.currentScene.children = new X3D.MFNode();

browser.currentScene.children[0] = WorldInfo17;

let NavigationInfo18 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo18.speed = 1.5;
browser.currentScene.children[1] = NavigationInfo18;

let Viewpoint19 = browser.currentScene.createNode("Viewpoint");
Viewpoint19.description = "Diamond Man, LOA 2";
Viewpoint19.position = new X3D.SFVec3f([0,1,3]);
Viewpoint19.centerOfRotation = new X3D.SFVec3f([0,1,0]);
browser.currentScene.children[2] = Viewpoint19;

let Transform20 = browser.currentScene.createNode("Transform");
Transform20.translation = new X3D.SFVec3f([1,1.5,0]);
let Billboard21 = browser.currentScene.createNode("Billboard");
let Shape22 = browser.currentScene.createNode("Shape");
let Appearance23 = browser.currentScene.createNode("Appearance");
let Material24 = browser.currentScene.createNode("Material");
Material24.DEF = "TextMaterial";
Material24.diffuseColor = new X3D.SFColor([0.9,0.9,0.9]);
material = Material24;

appearance = Appearance23;

let Text25 = browser.currentScene.createNode("Text");
Text25.string = new X3D.MFString([new X3D.SFString("Diamond Man Key")]);
let FontStyle26 = browser.currentScene.createNode("FontStyle");
FontStyle26.family = new X3D.MFString([new X3D.SFString("SANS")]);
FontStyle26.size = 0.1;
fontStyle = FontStyle26;

geometry = Text25;

Billboard21YYY.children = new X3D.MFNode();

Billboard21ZZZ.children[0] = Shape22;

let Transform27 = browser.currentScene.createNode("Transform");
Transform27.translation = new X3D.SFVec3f([0,-0.3,0]);
let Shape28 = browser.currentScene.createNode("Shape");
let Appearance29 = browser.currentScene.createNode("Appearance");
let Material30 = browser.currentScene.createNode("Material");
Material30.DEF = "MIN_COLOR";
Material30.diffuseColor = new X3D.SFColor([1,0,0]);
material = Material30;

appearance = Appearance29;

let Sphere31 = browser.currentScene.createNode("Sphere");
Sphere31.radius = 0.08;
geometry = Sphere31;

Transform27YYY.child = new X3D.undefined();

Transform27ZZZ.child[0] = Shape28;

let Transform32 = browser.currentScene.createNode("Transform");
Transform32.translation = new X3D.SFVec3f([0.2,0,0]);
let Shape33 = browser.currentScene.createNode("Shape");
let Appearance34 = browser.currentScene.createNode("Appearance");
let Material35 = browser.currentScene.createNode("Material");
Material35.USE = "TextMaterial";
material = Material35;

appearance = Appearance34;

let Text36 = browser.currentScene.createNode("Text");
Text36.string = new X3D.MFString([new X3D.SFString("Minimal Humanoid Joints")]);
let FontStyle37 = browser.currentScene.createNode("FontStyle");
FontStyle37.family = new X3D.MFString([new X3D.SFString("SANS")]);
FontStyle37.size = 0.1;
fontStyle = FontStyle37;

geometry = Text36;

Transform32YYY.child = new X3D.undefined();

Transform32ZZZ.child[0] = Shape33;

Transform27ZZZ.children[1] = Transform32;

Billboard21ZZZ.children[1] = Transform27;

let Transform38 = browser.currentScene.createNode("Transform");
Transform38.translation = new X3D.SFVec3f([0,-0.5,0]);
let Shape39 = browser.currentScene.createNode("Shape");
let Appearance40 = browser.currentScene.createNode("Appearance");
let Material41 = browser.currentScene.createNode("Material");
Material41.DEF = "JOINT_COLOR";
Material41.diffuseColor = new X3D.SFColor([1,1,0]);
material = Material41;

appearance = Appearance40;

let Sphere42 = browser.currentScene.createNode("Sphere");
Sphere42.radius = 0.08;
geometry = Sphere42;

Transform38YYY.child = new X3D.undefined();

Transform38ZZZ.child[0] = Shape39;

let Transform43 = browser.currentScene.createNode("Transform");
Transform43.translation = new X3D.SFVec3f([0.2,0,0]);
let Shape44 = browser.currentScene.createNode("Shape");
let Appearance45 = browser.currentScene.createNode("Appearance");
let Material46 = browser.currentScene.createNode("Material");
Material46.USE = "TextMaterial";
material = Material46;

appearance = Appearance45;

let Text47 = browser.currentScene.createNode("Text");
Text47.string = new X3D.MFString([new X3D.SFString("Humanoid Joints")]);
let FontStyle48 = browser.currentScene.createNode("FontStyle");
FontStyle48.family = new X3D.MFString([new X3D.SFString("SANS")]);
FontStyle48.size = 0.1;
fontStyle = FontStyle48;

geometry = Text47;

Transform43YYY.child = new X3D.undefined();

Transform43ZZZ.child[0] = Shape44;

Transform38ZZZ.children[1] = Transform43;

Billboard21ZZZ.children[2] = Transform38;

let Transform49 = browser.currentScene.createNode("Transform");
Transform49.translation = new X3D.SFVec3f([0,-0.7,0]);
let Shape50 = browser.currentScene.createNode("Shape");
let Appearance51 = browser.currentScene.createNode("Appearance");
let Material52 = browser.currentScene.createNode("Material");
Material52.DEF = "REC_SPINAL_COLOR";
Material52.diffuseColor = new X3D.SFColor([1,0,1]);
material = Material52;

appearance = Appearance51;

let Sphere53 = browser.currentScene.createNode("Sphere");
Sphere53.radius = 0.08;
geometry = Sphere53;

Transform49YYY.child = new X3D.undefined();

Transform49ZZZ.child[0] = Shape50;

let Transform54 = browser.currentScene.createNode("Transform");
Transform54.translation = new X3D.SFVec3f([0.2,0,0]);
let Shape55 = browser.currentScene.createNode("Shape");
let Appearance56 = browser.currentScene.createNode("Appearance");
let Material57 = browser.currentScene.createNode("Material");
Material57.USE = "TextMaterial";
material = Material57;

appearance = Appearance56;

let Text58 = browser.currentScene.createNode("Text");
Text58.string = new X3D.MFString([new X3D.SFString("Recommended Spinal Joints")]);
let FontStyle59 = browser.currentScene.createNode("FontStyle");
FontStyle59.family = new X3D.MFString([new X3D.SFString("SANS")]);
FontStyle59.size = 0.1;
fontStyle = FontStyle59;

geometry = Text58;

Transform54YYY.child = new X3D.undefined();

Transform54ZZZ.child[0] = Shape55;

Transform49ZZZ.children[1] = Transform54;

Billboard21ZZZ.children[3] = Transform49;

let Transform60 = browser.currentScene.createNode("Transform");
Transform60.translation = new X3D.SFVec3f([0,-0.9,0]);
let Shape61 = browser.currentScene.createNode("Shape");
let Appearance62 = browser.currentScene.createNode("Appearance");
let Material63 = browser.currentScene.createNode("Material");
Material63.DEF = "SPINAL_COLOR";
Material63.diffuseColor = new X3D.SFColor([0,1,0]);
material = Material63;

appearance = Appearance62;

let Sphere64 = browser.currentScene.createNode("Sphere");
Sphere64.radius = 0.08;
geometry = Sphere64;

Transform60YYY.child = new X3D.undefined();

Transform60ZZZ.child[0] = Shape61;

let Transform65 = browser.currentScene.createNode("Transform");
Transform65.translation = new X3D.SFVec3f([0.2,0,0]);
let Shape66 = browser.currentScene.createNode("Shape");
let Appearance67 = browser.currentScene.createNode("Appearance");
let Material68 = browser.currentScene.createNode("Material");
Material68.USE = "TextMaterial";
material = Material68;

appearance = Appearance67;

let Text69 = browser.currentScene.createNode("Text");
Text69.string = new X3D.MFString([new X3D.SFString("Spinal Joints")]);
let FontStyle70 = browser.currentScene.createNode("FontStyle");
FontStyle70.family = new X3D.MFString([new X3D.SFString("SANS")]);
FontStyle70.size = 0.1;
fontStyle = FontStyle70;

geometry = Text69;

Transform65YYY.child = new X3D.undefined();

Transform65ZZZ.child[0] = Shape66;

Transform60ZZZ.children[1] = Transform65;

Billboard21ZZZ.children[4] = Transform60;

let Transform71 = browser.currentScene.createNode("Transform");
Transform71.translation = new X3D.SFVec3f([0,-1.3,0]);
let Shape72 = browser.currentScene.createNode("Shape");
let Appearance73 = browser.currentScene.createNode("Appearance");
let Material74 = browser.currentScene.createNode("Material");
Material74.DEF = "SITE_COLOR";
Material74.diffuseColor = new X3D.SFColor([0,0,1]);
material = Material74;

appearance = Appearance73;

let Sphere75 = browser.currentScene.createNode("Sphere");
Sphere75.radius = 0.08;
geometry = Sphere75;

Transform71YYY.child = new X3D.undefined();

Transform71ZZZ.child[0] = Shape72;

let Transform76 = browser.currentScene.createNode("Transform");
Transform76.translation = new X3D.SFVec3f([0.2,0,0]);
let Shape77 = browser.currentScene.createNode("Shape");
let Appearance78 = browser.currentScene.createNode("Appearance");
let Material79 = browser.currentScene.createNode("Material");
Material79.USE = "TextMaterial";
material = Material79;

appearance = Appearance78;

let Text80 = browser.currentScene.createNode("Text");
Text80.string = new X3D.MFString([new X3D.SFString("Humanoid Sites")]);
let FontStyle81 = browser.currentScene.createNode("FontStyle");
FontStyle81.family = new X3D.MFString([new X3D.SFString("SANS")]);
FontStyle81.size = 0.1;
fontStyle = FontStyle81;

geometry = Text80;

Transform76YYY.child = new X3D.undefined();

Transform76ZZZ.child[0] = Shape77;

Transform71ZZZ.children[1] = Transform76;

Billboard21ZZZ.children[5] = Transform71;

let Transform82 = browser.currentScene.createNode("Transform");
Transform82.translation = new X3D.SFVec3f([0,-1.1,0]);
let Shape83 = browser.currentScene.createNode("Shape");
let Appearance84 = browser.currentScene.createNode("Appearance");
let Material85 = browser.currentScene.createNode("Material");
Material85.DEF = "HAND_FEET_COLOR";
Material85.diffuseColor = new X3D.SFColor([0,1,1]);
material = Material85;

appearance = Appearance84;

let Sphere86 = browser.currentScene.createNode("Sphere");
Sphere86.radius = 0.08;
geometry = Sphere86;

Transform82YYY.child = new X3D.undefined();

Transform82ZZZ.child[0] = Shape83;

let Transform87 = browser.currentScene.createNode("Transform");
Transform87.translation = new X3D.SFVec3f([0.2,0,0]);
let Shape88 = browser.currentScene.createNode("Shape");
let Appearance89 = browser.currentScene.createNode("Appearance");
let Material90 = browser.currentScene.createNode("Material");
Material90.USE = "TextMaterial";
material = Material90;

appearance = Appearance89;

let Text91 = browser.currentScene.createNode("Text");
Text91.string = new X3D.MFString([new X3D.SFString("Hand & Feet Joints")]);
let FontStyle92 = browser.currentScene.createNode("FontStyle");
FontStyle92.family = new X3D.MFString([new X3D.SFString("SANS")]);
FontStyle92.size = 0.1;
fontStyle = FontStyle92;

geometry = Text91;

Transform87YYY.child = new X3D.undefined();

Transform87ZZZ.child[0] = Shape88;

Transform82ZZZ.children[1] = Transform87;

Billboard21ZZZ.children[6] = Transform82;

Transform20YYY.children = new X3D.MFNode();

Transform20ZZZ.children[0] = Billboard21;

browser.currentScene.children[3] = Transform20;

let HAnimHumanoid93 = browser.currentScene.createNode("HAnimHumanoid");
HAnimHumanoid93.DEF = "hanim_humanoid";
HAnimHumanoid93.name = "humanoid";
HAnimHumanoid93.loa = 2;
let MetadataSet94 = browser.currentScene.createNode("MetadataSet");
MetadataSet94.name = "HAnimHumanoid.info";
MetadataSet94.reference = "https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid";
let MetadataString95 = browser.currentScene.createNode("MetadataString");
MetadataString95.name = "humanoidVersion";
MetadataSet94.value = new X3D.MFNode();

MetadataSet94XXX.value[0] = MetadataString95;

let MetadataString96 = browser.currentScene.createNode("MetadataString");
MetadataString96.name = "authorEmail";
value[1] = MetadataString96;

let MetadataString97 = browser.currentScene.createNode("MetadataString");
MetadataString97.name = "authorName";
value[2] = MetadataString97;

HAnimHumanoid93.metadata = new X3D.SFNode();

HAnimHumanoid93XXX.metadata[0] = MetadataSet94;

let HAnimJoint98 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint98.DEF = "hanim_humanoid_root";
HAnimJoint98.name = "humanoid_root";
HAnimJoint98.center = new X3D.SFVec3f([0,0.824,0.0277]);
let HAnimSegment99 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment99.DEF = "hanim_sacrum";
HAnimSegment99.name = "sacrum";
let Transform100 = browser.currentScene.createNode("Transform");
Transform100.translation = new X3D.SFVec3f([0,0.824,0.0277]);
let Shape101 = browser.currentScene.createNode("Shape");
Shape101.DEF = "DiamondShape";
let Appearance102 = browser.currentScene.createNode("Appearance");
let Material103 = browser.currentScene.createNode("Material");
Material103.DEF = "ROOT_COLOR";
Material103.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material103;

appearance = Appearance102;

let IndexedFaceSet104 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet104.creaseAngle = 0.5;
IndexedFaceSet104.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
let Coordinate105 = browser.currentScene.createNode("Coordinate");
Coordinate105.DEF = "points";
Coordinate105.point = new X3D.MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
coord = Coordinate105;

geometry = IndexedFaceSet104;

Transform100YYY.child = new X3D.undefined();

Transform100ZZZ.child[0] = Shape101;

let Transform106 = browser.currentScene.createNode("Transform");
Transform106.translation = new X3D.SFVec3f([0,0.01,0]);
let Billboard107 = browser.currentScene.createNode("Billboard");
let Shape108 = browser.currentScene.createNode("Shape");
let Appearance109 = browser.currentScene.createNode("Appearance");
let Material110 = browser.currentScene.createNode("Material");
Material110.diffuseColor = new X3D.SFColor([0.039216,1,0.568627]);
material = Material110;

appearance = Appearance109;

let Text111 = browser.currentScene.createNode("Text");
Text111.string = new X3D.MFString([new X3D.SFString("Humanoid Root")]);
let FontStyle112 = browser.currentScene.createNode("FontStyle");
FontStyle112.family = new X3D.MFString([new X3D.SFString("SANS")]);
FontStyle112.style = "ITALIC";
FontStyle112.size = 0.01;
fontStyle = FontStyle112;

geometry = Text111;

Billboard107YYY.children = new X3D.MFNode();

Billboard107ZZZ.children[0] = Shape108;

Transform106YYY.children = new X3D.MFNode();

Transform106ZZZ.children[0] = Billboard107;

Transform100ZZZ.children[1] = Transform106;

HAnimSegment99YYY.children = new X3D.MFNode();

HAnimSegment99ZZZ.children[0] = Transform100;

HAnimJoint98YYY.children = new X3D.MFNode();

HAnimJoint98ZZZ.children[0] = HAnimSegment99;

let HAnimJoint113 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint113.DEF = "hanim_sacroiliac";
HAnimJoint113.name = "sacroiliac";
HAnimJoint113.center = new X3D.SFVec3f([0,0.9149,0.0016]);
let HAnimSegment114 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment114.DEF = "hanim_pelvis";
HAnimSegment114.name = "pelvis";
let Transform115 = browser.currentScene.createNode("Transform");
Transform115.DEF = "sacroiliacPos";
Transform115.translation = new X3D.SFVec3f([0,0.9149,0.0016]);
let Shape116 = browser.currentScene.createNode("Shape");
let Appearance117 = browser.currentScene.createNode("Appearance");
let Material118 = browser.currentScene.createNode("Material");
Material118.USE = "MIN_COLOR";
material = Material118;

appearance = Appearance117;

let IndexedFaceSet119 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet119.creaseAngle = 0.5;
IndexedFaceSet119.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
let Coordinate120 = browser.currentScene.createNode("Coordinate");
Coordinate120.USE = "points";
coord = Coordinate120;

geometry = IndexedFaceSet119;

Transform115YYY.child = new X3D.undefined();

Transform115ZZZ.child[0] = Shape116;

HAnimSegment114YYY.children = new X3D.MFNode();

HAnimSegment114ZZZ.children[0] = Transform115;

let HAnimSite121 = browser.currentScene.createNode("HAnimSite");
HAnimSite121.DEF = "hanim_r_iliocristale_pt";
HAnimSite121.name = "r_iliocristale_pt";
HAnimSite121.translation = new X3D.SFVec3f([-0.1525,1.0628,0.0035]);
let Shape122 = browser.currentScene.createNode("Shape");
let Appearance123 = browser.currentScene.createNode("Appearance");
let Material124 = browser.currentScene.createNode("Material");
Material124.USE = "SITE_COLOR";
material = Material124;

appearance = Appearance123;

let IndexedFaceSet125 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet125.creaseAngle = 0.5;
IndexedFaceSet125.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
let Coordinate126 = browser.currentScene.createNode("Coordinate");
Coordinate126.USE = "points";
coord = Coordinate126;

geometry = IndexedFaceSet125;

HAnimSite121YYY.children = new X3D.MFNode();

HAnimSite121ZZZ.children[0] = Shape122;

HAnimSegment114ZZZ.children[1] = HAnimSite121;

let HAnimSite127 = browser.currentScene.createNode("HAnimSite");
HAnimSite127.DEF = "hanim_r_trochanterion_pt";
HAnimSite127.name = "r_trochanterion_pt";
HAnimSite127.translation = new X3D.SFVec3f([-0.1689,0.8419,0.0352]);
let Shape128 = browser.currentScene.createNode("Shape");
let Appearance129 = browser.currentScene.createNode("Appearance");
let Material130 = browser.currentScene.createNode("Material");
Material130.USE = "SITE_COLOR";
material = Material130;

appearance = Appearance129;

let IndexedFaceSet131 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet131.creaseAngle = 0.5;
IndexedFaceSet131.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
let Coordinate132 = browser.currentScene.createNode("Coordinate");
Coordinate132.USE = "points";
coord = Coordinate132;

geometry = IndexedFaceSet131;

HAnimSite127YYY.children = new X3D.MFNode();

HAnimSite127ZZZ.children[0] = Shape128;

HAnimSegment114ZZZ.children[2] = HAnimSite127;

let HAnimSite133 = browser.currentScene.createNode("HAnimSite");
HAnimSite133.DEF = "hanim_l_iliocristale_pt";
HAnimSite133.name = "l_iliocristale_pt";
HAnimSite133.translation = new X3D.SFVec3f([0.1612,1.0537,0.0008]);
let Shape134 = browser.currentScene.createNode("Shape");
let Appearance135 = browser.currentScene.createNode("Appearance");
let Material136 = browser.currentScene.createNode("Material");
Material136.USE = "SITE_COLOR";
material = Material136;

appearance = Appearance135;

let IndexedFaceSet137 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet137.creaseAngle = 0.5;
IndexedFaceSet137.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
let Coordinate138 = browser.currentScene.createNode("Coordinate");
Coordinate138.USE = "points";
coord = Coordinate138;

geometry = IndexedFaceSet137;

HAnimSite133YYY.children = new X3D.MFNode();

HAnimSite133ZZZ.children[0] = Shape134;

HAnimSegment114ZZZ.children[3] = HAnimSite133;

let HAnimSite139 = browser.currentScene.createNode("HAnimSite");
HAnimSite139.DEF = "hanim_l_trochanterion_pt";
HAnimSite139.name = "l_trochanterion_pt";
HAnimSite139.translation = new X3D.SFVec3f([0.1677,0.8336,0.0303]);
let Shape140 = browser.currentScene.createNode("Shape");
let Appearance141 = browser.currentScene.createNode("Appearance");
let Material142 = browser.currentScene.createNode("Material");
Material142.USE = "SITE_COLOR";
material = Material142;

appearance = Appearance141;

let IndexedFaceSet143 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet143.creaseAngle = 0.5;
IndexedFaceSet143.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
let Coordinate144 = browser.currentScene.createNode("Coordinate");
Coordinate144.USE = "points";
coord = Coordinate144;

geometry = IndexedFaceSet143;

HAnimSite139YYY.children = new X3D.MFNode();

HAnimSite139ZZZ.children[0] = Shape140;

HAnimSegment114ZZZ.children[4] = HAnimSite139;

let HAnimSite145 = browser.currentScene.createNode("HAnimSite");
HAnimSite145.DEF = "hanim_r_asis_pt";
HAnimSite145.name = "r_asis_pt";
HAnimSite145.translation = new X3D.SFVec3f([-0.0887,1.0021,0.1112]);
let Shape146 = browser.currentScene.createNode("Shape");
let Appearance147 = browser.currentScene.createNode("Appearance");
let Material148 = browser.currentScene.createNode("Material");
Material148.USE = "SITE_COLOR";
material = Material148;

appearance = Appearance147;

let IndexedFaceSet149 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet149.creaseAngle = 0.5;
IndexedFaceSet149.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
let Coordinate150 = browser.currentScene.createNode("Coordinate");
Coordinate150.USE = "points";
coord = Coordinate150;

geometry = IndexedFaceSet149;

HAnimSite145YYY.children = new X3D.MFNode();

HAnimSite145ZZZ.children[0] = Shape146;

HAnimSegment114ZZZ.children[5] = HAnimSite145;

let HAnimSite151 = browser.currentScene.createNode("HAnimSite");
HAnimSite151.DEF = "hanim_l_asis_pt";
HAnimSite151.name = "l_asis_pt";
HAnimSite151.translation = new X3D.SFVec3f([0.0925,0.9983,0.1052]);
let Shape152 = browser.currentScene.createNode("Shape");
let Appearance153 = browser.currentScene.createNode("Appearance");
let Material154 = browser.currentScene.createNode("Material");
Material154.USE = "SITE_COLOR";
material = Material154;

appearance = Appearance153;

let IndexedFaceSet155 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet155.creaseAngle = 0.5;
IndexedFaceSet155.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
let Coordinate156 = browser.currentScene.createNode("Coordinate");
Coordinate156.USE = "points";
coord = Coordinate156;

geometry = IndexedFaceSet155;

HAnimSite151YYY.children = new X3D.MFNode();

HAnimSite151ZZZ.children[0] = Shape152;

HAnimSegment114ZZZ.children[6] = HAnimSite151;

let HAnimSite157 = browser.currentScene.createNode("HAnimSite");
HAnimSite157.DEF = "hanim_r_psis_pt";
HAnimSite157.name = "r_psis_pt";
HAnimSite157.translation = new X3D.SFVec3f([-0.0716,1.019,-0.1138]);
let Shape158 = browser.currentScene.createNode("Shape");
let Appearance159 = browser.currentScene.createNode("Appearance");
let Material160 = browser.currentScene.createNode("Material");
Material160.USE = "SITE_COLOR";
material = Material160;

appearance = Appearance159;

let IndexedFaceSet161 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet161.creaseAngle = 0.5;
IndexedFaceSet161.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
let Coordinate162 = browser.currentScene.createNode("Coordinate");
Coordinate162.USE = "points";
coord = Coordinate162;

geometry = IndexedFaceSet161;

HAnimSite157YYY.children = new X3D.MFNode();

HAnimSite157ZZZ.children[0] = Shape158;

HAnimSegment114ZZZ.children[7] = HAnimSite157;

let HAnimSite163 = browser.currentScene.createNode("HAnimSite");
HAnimSite163.DEF = "hanim_l_psis_pt";
HAnimSite163.name = "l_psis_pt";
HAnimSite163.translation = new X3D.SFVec3f([0.0774,1.019,-0.1151]);
let Shape164 = browser.currentScene.createNode("Shape");
let Appearance165 = browser.currentScene.createNode("Appearance");
let Material166 = browser.currentScene.createNode("Material");
Material166.USE = "SITE_COLOR";
material = Material166;

appearance = Appearance165;

let IndexedFaceSet167 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet167.creaseAngle = 0.5;
IndexedFaceSet167.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
let Coordinate168 = browser.currentScene.createNode("Coordinate");
Coordinate168.USE = "points";
coord = Coordinate168;

geometry = IndexedFaceSet167;

HAnimSite163YYY.children = new X3D.MFNode();

HAnimSite163ZZZ.children[0] = Shape164;

HAnimSegment114ZZZ.children[8] = HAnimSite163;

let HAnimSite169 = browser.currentScene.createNode("HAnimSite");
HAnimSite169.DEF = "hanim_crotch_pt";
HAnimSite169.name = "crotch_pt";
HAnimSite169.translation = new X3D.SFVec3f([0.0034,0.8266,0.0257]);
let Shape170 = browser.currentScene.createNode("Shape");
let Appearance171 = browser.currentScene.createNode("Appearance");
let Material172 = browser.currentScene.createNode("Material");
Material172.USE = "SITE_COLOR";
material = Material172;

appearance = Appearance171;

let IndexedFaceSet173 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet173.creaseAngle = 0.5;
IndexedFaceSet173.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
let Coordinate174 = browser.currentScene.createNode("Coordinate");
Coordinate174.USE = "points";
coord = Coordinate174;

geometry = IndexedFaceSet173;

HAnimSite169YYY.children = new X3D.MFNode();

HAnimSite169ZZZ.children[0] = Shape170;

HAnimSegment114ZZZ.children[9] = HAnimSite169;

HAnimJoint113YYY.children = new X3D.MFNode();

HAnimJoint113ZZZ.children[0] = HAnimSegment114;

let HAnimJoint175 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint175.DEF = "hanim_l_hip";
HAnimJoint175.name = "l_hip";
HAnimJoint175.center = new X3D.SFVec3f([0.0961,0.9124,-0.0001]);
let HAnimSegment176 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment176.DEF = "hanim_l_thigh";
HAnimSegment176.name = "l_thigh";
let Transform177 = browser.currentScene.createNode("Transform");
Transform177.translation = new X3D.SFVec3f([0.0961,0.9124,-0.0001]);
let Shape178 = browser.currentScene.createNode("Shape");
let Appearance179 = browser.currentScene.createNode("Appearance");
let Material180 = browser.currentScene.createNode("Material");
Material180.USE = "MIN_COLOR";
material = Material180;

appearance = Appearance179;

let IndexedFaceSet181 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet181.creaseAngle = 0.5;
IndexedFaceSet181.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
let Coordinate182 = browser.currentScene.createNode("Coordinate");
Coordinate182.USE = "points";
coord = Coordinate182;

geometry = IndexedFaceSet181;

Transform177YYY.child = new X3D.undefined();

Transform177ZZZ.child[0] = Shape178;

HAnimSegment176YYY.children = new X3D.MFNode();

HAnimSegment176ZZZ.children[0] = Transform177;

let HAnimSite183 = browser.currentScene.createNode("HAnimSite");
HAnimSite183.DEF = "hanim_l_knee_crease_pt";
HAnimSite183.name = "l_knee_crease_pt";
HAnimSite183.translation = new X3D.SFVec3f([0.0993,0.4881,-0.0309]);
let Shape184 = browser.currentScene.createNode("Shape");
let Appearance185 = browser.currentScene.createNode("Appearance");
let Material186 = browser.currentScene.createNode("Material");
Material186.USE = "SITE_COLOR";
material = Material186;

appearance = Appearance185;

let IndexedFaceSet187 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet187.creaseAngle = 0.5;
IndexedFaceSet187.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
let Coordinate188 = browser.currentScene.createNode("Coordinate");
Coordinate188.USE = "points";
coord = Coordinate188;

geometry = IndexedFaceSet187;

HAnimSite183YYY.children = new X3D.MFNode();

HAnimSite183ZZZ.children[0] = Shape184;

HAnimSegment176ZZZ.children[1] = HAnimSite183;

let HAnimSite189 = browser.currentScene.createNode("HAnimSite");
HAnimSite189.DEF = "hanim_l_femoral_lateral_epicondyle_pt";
HAnimSite189.name = "l_femoral_lateral_epicondyle_pt";
HAnimSite189.translation = new X3D.SFVec3f([0.1598,0.4967,0.0297]);
let Shape190 = browser.currentScene.createNode("Shape");
let Appearance191 = browser.currentScene.createNode("Appearance");
let Material192 = browser.currentScene.createNode("Material");
Material192.USE = "SITE_COLOR";
material = Material192;

appearance = Appearance191;

let IndexedFaceSet193 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet193.creaseAngle = 0.5;
IndexedFaceSet193.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
let Coordinate194 = browser.currentScene.createNode("Coordinate");
Coordinate194.USE = "points";
coord = Coordinate194;

geometry = IndexedFaceSet193;

HAnimSite189YYY.children = new X3D.MFNode();

HAnimSite189ZZZ.children[0] = Shape190;

HAnimSegment176ZZZ.children[2] = HAnimSite189;

let HAnimSite195 = browser.currentScene.createNode("HAnimSite");
HAnimSite195.DEF = "hanim_l_femoral_medial_epicondyle_pt";
HAnimSite195.name = "l_femoral_medial_epicondyle_pt";
HAnimSite195.translation = new X3D.SFVec3f([0.0398,0.4946,0.0303]);
let Shape196 = browser.currentScene.createNode("Shape");
let Appearance197 = browser.currentScene.createNode("Appearance");
let Material198 = browser.currentScene.createNode("Material");
Material198.USE = "SITE_COLOR";
material = Material198;

appearance = Appearance197;

let IndexedFaceSet199 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet199.creaseAngle = 0.5;
IndexedFaceSet199.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
let Coordinate200 = browser.currentScene.createNode("Coordinate");
Coordinate200.USE = "points";
coord = Coordinate200;

geometry = IndexedFaceSet199;

HAnimSite195YYY.children = new X3D.MFNode();

HAnimSite195ZZZ.children[0] = Shape196;

HAnimSegment176ZZZ.children[3] = HAnimSite195;

HAnimJoint175YYY.children = new X3D.MFNode();

HAnimJoint175ZZZ.children[0] = HAnimSegment176;

let HAnimJoint201 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint201.DEF = "hanim_l_knee";
HAnimJoint201.name = "l_knee";
HAnimJoint201.center = new X3D.SFVec3f([0.104,0.4867,0.0308]);
let HAnimSegment202 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment202.DEF = "hanim_l_calf";
HAnimSegment202.name = "l_calf";
let Transform203 = browser.currentScene.createNode("Transform");
Transform203.translation = new X3D.SFVec3f([0.104,0.4867,0.0308]);
let Shape204 = browser.currentScene.createNode("Shape");
let Appearance205 = browser.currentScene.createNode("Appearance");
let Material206 = browser.currentScene.createNode("Material");
Material206.USE = "MIN_COLOR";
material = Material206;

appearance = Appearance205;

let IndexedFaceSet207 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet207.creaseAngle = 0.5;
IndexedFaceSet207.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
let Coordinate208 = browser.currentScene.createNode("Coordinate");
Coordinate208.USE = "points";
coord = Coordinate208;

geometry = IndexedFaceSet207;

Transform203YYY.child = new X3D.undefined();

Transform203ZZZ.child[0] = Shape204;

HAnimSegment202YYY.children = new X3D.MFNode();

HAnimSegment202ZZZ.children[0] = Transform203;

HAnimJoint201YYY.children = new X3D.MFNode();

HAnimJoint201ZZZ.children[0] = HAnimSegment202;

let HAnimJoint209 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint209.DEF = "hanim_l_talocrural";
HAnimJoint209.name = "l_talocrural";
HAnimJoint209.center = new X3D.SFVec3f([0.1101,0.0656,-0.0736]);
let HAnimSegment210 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment210.DEF = "hanim_l_talus";
HAnimSegment210.name = "l_talus";
let Transform211 = browser.currentScene.createNode("Transform");
Transform211.translation = new X3D.SFVec3f([0.1101,0.0656,-0.0736]);
let Shape212 = browser.currentScene.createNode("Shape");
let Appearance213 = browser.currentScene.createNode("Appearance");
let Material214 = browser.currentScene.createNode("Material");
Material214.USE = "MIN_COLOR";
material = Material214;

appearance = Appearance213;

let IndexedFaceSet215 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet215.creaseAngle = 0.5;
IndexedFaceSet215.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
let Coordinate216 = browser.currentScene.createNode("Coordinate");
Coordinate216.USE = "points";
coord = Coordinate216;

geometry = IndexedFaceSet215;

Transform211YYY.child = new X3D.undefined();

Transform211ZZZ.child[0] = Shape212;

HAnimSegment210YYY.children = new X3D.MFNode();

HAnimSegment210ZZZ.children[0] = Transform211;

let HAnimSite217 = browser.currentScene.createNode("HAnimSite");
HAnimSite217.DEF = "hanim_l_lateral_malleolus_pt";
HAnimSite217.name = "l_lateral_malleolus_pt";
HAnimSite217.translation = new X3D.SFVec3f([0.1308,0.0597,-0.1032]);
let Shape218 = browser.currentScene.createNode("Shape");
let Appearance219 = browser.currentScene.createNode("Appearance");
let Material220 = browser.currentScene.createNode("Material");
Material220.USE = "HAND_FEET_COLOR";
material = Material220;

appearance = Appearance219;

let IndexedFaceSet221 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet221.creaseAngle = 0.5;
IndexedFaceSet221.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
let Coordinate222 = browser.currentScene.createNode("Coordinate");
Coordinate222.USE = "points";
coord = Coordinate222;

geometry = IndexedFaceSet221;

HAnimSite217YYY.children = new X3D.MFNode();

HAnimSite217ZZZ.children[0] = Shape218;

HAnimSegment210ZZZ.children[1] = HAnimSite217;

let HAnimSite223 = browser.currentScene.createNode("HAnimSite");
HAnimSite223.DEF = "hanim_l_medial_malleolus_pt";
HAnimSite223.name = "l_medial_malleolus_pt";
HAnimSite223.translation = new X3D.SFVec3f([0.089,0.0716,-0.0881]);
let Shape224 = browser.currentScene.createNode("Shape");
let Appearance225 = browser.currentScene.createNode("Appearance");
let Material226 = browser.currentScene.createNode("Material");
Material226.USE = "HAND_FEET_COLOR";
material = Material226;

appearance = Appearance225;

let IndexedFaceSet227 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet227.creaseAngle = 0.5;
IndexedFaceSet227.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
let Coordinate228 = browser.currentScene.createNode("Coordinate");
Coordinate228.USE = "points";
coord = Coordinate228;

geometry = IndexedFaceSet227;

HAnimSite223YYY.children = new X3D.MFNode();

HAnimSite223ZZZ.children[0] = Shape224;

HAnimSegment210ZZZ.children[2] = HAnimSite223;

let HAnimSite229 = browser.currentScene.createNode("HAnimSite");
HAnimSite229.DEF = "hanim_l_sphyrion_pt";
HAnimSite229.name = "l_sphyrion_pt";
HAnimSite229.translation = new X3D.SFVec3f([0.089,0.0575,-0.0943]);
let Shape230 = browser.currentScene.createNode("Shape");
let Appearance231 = browser.currentScene.createNode("Appearance");
let Material232 = browser.currentScene.createNode("Material");
Material232.USE = "HAND_FEET_COLOR";
material = Material232;

appearance = Appearance231;

let IndexedFaceSet233 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet233.creaseAngle = 0.5;
IndexedFaceSet233.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
let Coordinate234 = browser.currentScene.createNode("Coordinate");
Coordinate234.USE = "points";
coord = Coordinate234;

geometry = IndexedFaceSet233;

HAnimSite229YYY.children = new X3D.MFNode();

HAnimSite229ZZZ.children[0] = Shape230;

HAnimSegment210ZZZ.children[3] = HAnimSite229;

let HAnimSite235 = browser.currentScene.createNode("HAnimSite");
HAnimSite235.DEF = "hanim_l_calcaneus_posterior_pt";
HAnimSite235.name = "l_calcaneus_posterior_pt";
HAnimSite235.translation = new X3D.SFVec3f([0.0974,0.0259,-0.1171]);
let Shape236 = browser.currentScene.createNode("Shape");
let Appearance237 = browser.currentScene.createNode("Appearance");
let Material238 = browser.currentScene.createNode("Material");
Material238.USE = "HAND_FEET_COLOR";
material = Material238;

appearance = Appearance237;

let IndexedFaceSet239 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet239.creaseAngle = 0.5;
IndexedFaceSet239.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
let Coordinate240 = browser.currentScene.createNode("Coordinate");
Coordinate240.USE = "points";
coord = Coordinate240;

geometry = IndexedFaceSet239;

HAnimSite235YYY.children = new X3D.MFNode();

HAnimSite235ZZZ.children[0] = Shape236;

HAnimSegment210ZZZ.children[4] = HAnimSite235;

HAnimJoint209YYY.children = new X3D.MFNode();

HAnimJoint209ZZZ.children[0] = HAnimSegment210;

let HAnimJoint241 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint241.DEF = "hanim_l_tarsometatarsal_2";
HAnimJoint241.name = "l_tarsometatarsal_2";
HAnimJoint241.center = new X3D.SFVec3f([0.1086,0.0001,-0.0368]);
let HAnimSegment242 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment242.DEF = "hanim_l_metatarsal_2";
HAnimSegment242.name = "l_metatarsal_2";
let Transform243 = browser.currentScene.createNode("Transform");
Transform243.translation = new X3D.SFVec3f([0.1086,0.0001,-0.0368]);
let Shape244 = browser.currentScene.createNode("Shape");
let Appearance245 = browser.currentScene.createNode("Appearance");
let Material246 = browser.currentScene.createNode("Material");
Material246.USE = "MIN_COLOR";
material = Material246;

appearance = Appearance245;

let IndexedFaceSet247 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet247.creaseAngle = 0.5;
IndexedFaceSet247.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
let Coordinate248 = browser.currentScene.createNode("Coordinate");
Coordinate248.USE = "points";
coord = Coordinate248;

geometry = IndexedFaceSet247;

Transform243YYY.child = new X3D.undefined();

Transform243ZZZ.child[0] = Shape244;

HAnimSegment242YYY.children = new X3D.MFNode();

HAnimSegment242ZZZ.children[0] = Transform243;

HAnimJoint241YYY.children = new X3D.MFNode();

HAnimJoint241ZZZ.children[0] = HAnimSegment242;

let HAnimJoint249 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint249.DEF = "hanim_l_metatarsophalangeal_2";
HAnimJoint249.name = "l_metatarsophalangeal_2";
HAnimJoint249.center = new X3D.SFVec3f([0.1086,0.0001,0.0368]);
let HAnimSegment250 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment250.DEF = "hanim_l_tarsal_proximal_phalanx_2";
HAnimSegment250.name = "l_tarsal_proximal_phalanx_2";
let Transform251 = browser.currentScene.createNode("Transform");
Transform251.translation = new X3D.SFVec3f([0.1086,0.0001,0.0368]);
let Shape252 = browser.currentScene.createNode("Shape");
let Appearance253 = browser.currentScene.createNode("Appearance");
let Material254 = browser.currentScene.createNode("Material");
Material254.USE = "JOINT_COLOR";
material = Material254;

appearance = Appearance253;

let IndexedFaceSet255 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet255.creaseAngle = 0.5;
IndexedFaceSet255.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
let Coordinate256 = browser.currentScene.createNode("Coordinate");
Coordinate256.USE = "points";
coord = Coordinate256;

geometry = IndexedFaceSet255;

Transform251YYY.child = new X3D.undefined();

Transform251ZZZ.child[0] = Shape252;

HAnimSegment250YYY.children = new X3D.MFNode();

HAnimSegment250ZZZ.children[0] = Transform251;

let HAnimSite257 = browser.currentScene.createNode("HAnimSite");
HAnimSite257.DEF = "hanim_l_middistal_tip";
HAnimSite257.name = "l_middistal_tip";
HAnimSite257.translation = new X3D.SFVec3f([0.1354,0.0016,0.1476]);
let Shape258 = browser.currentScene.createNode("Shape");
let Appearance259 = browser.currentScene.createNode("Appearance");
let Material260 = browser.currentScene.createNode("Material");
Material260.USE = "HAND_FEET_COLOR";
material = Material260;

appearance = Appearance259;

let IndexedFaceSet261 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet261.creaseAngle = 0.5;
IndexedFaceSet261.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
let Coordinate262 = browser.currentScene.createNode("Coordinate");
Coordinate262.USE = "points";
coord = Coordinate262;

geometry = IndexedFaceSet261;

HAnimSite257YYY.children = new X3D.MFNode();

HAnimSite257ZZZ.children[0] = Shape258;

HAnimSegment250ZZZ.children[1] = HAnimSite257;

let HAnimSite263 = browser.currentScene.createNode("HAnimSite");
HAnimSite263.DEF = "hanim_l_metatarsal_phalanx_1_pt";
HAnimSite263.name = "l_metatarsal_phalanx_1_pt";
HAnimSite263.translation = new X3D.SFVec3f([0.0816,0.0232,0.0106]);
let Shape264 = browser.currentScene.createNode("Shape");
let Appearance265 = browser.currentScene.createNode("Appearance");
let Material266 = browser.currentScene.createNode("Material");
Material266.USE = "HAND_FEET_COLOR";
material = Material266;

appearance = Appearance265;

let IndexedFaceSet267 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet267.creaseAngle = 0.5;
IndexedFaceSet267.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
let Coordinate268 = browser.currentScene.createNode("Coordinate");
Coordinate268.USE = "points";
coord = Coordinate268;

geometry = IndexedFaceSet267;

HAnimSite263YYY.children = new X3D.MFNode();

HAnimSite263ZZZ.children[0] = Shape264;

HAnimSegment250ZZZ.children[2] = HAnimSite263;

HAnimJoint249YYY.children = new X3D.MFNode();

HAnimJoint249ZZZ.children[0] = HAnimSegment250;

let HAnimJoint269 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint269.DEF = "hanim_l_tarsal_distal_interphalangeal_2";
HAnimJoint269.name = "l_tarsal_distal_interphalangeal_2";
HAnimJoint269.center = new X3D.SFVec3f([0.1086,0,0.0762]);
let HAnimSegment270 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment270.DEF = "hanim_l_tarsal_distal_phalanx_2";
HAnimSegment270.name = "l_tarsal_distal_phalanx_2";
let Transform271 = browser.currentScene.createNode("Transform");
Transform271.translation = new X3D.SFVec3f([0.1086,0,0.0762]);
let Shape272 = browser.currentScene.createNode("Shape");
let Appearance273 = browser.currentScene.createNode("Appearance");
let Material274 = browser.currentScene.createNode("Material");
Material274.USE = "JOINT_COLOR";
material = Material274;

appearance = Appearance273;

let IndexedFaceSet275 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet275.creaseAngle = 0.5;
IndexedFaceSet275.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
let Coordinate276 = browser.currentScene.createNode("Coordinate");
Coordinate276.USE = "points";
coord = Coordinate276;

geometry = IndexedFaceSet275;

Transform271YYY.child = new X3D.undefined();

Transform271ZZZ.child[0] = Shape272;

HAnimSegment270YYY.children = new X3D.MFNode();

HAnimSegment270ZZZ.children[0] = Transform271;

let HAnimSite277 = browser.currentScene.createNode("HAnimSite");
HAnimSite277.DEF = "hanim_l_forefoot_tip";
HAnimSite277.name = "l_forefoot_tip";
HAnimSite277.translation = new X3D.SFVec3f([0.1354,0.0016,0.1476]);
let Shape278 = browser.currentScene.createNode("Shape");
let Appearance279 = browser.currentScene.createNode("Appearance");
let Material280 = browser.currentScene.createNode("Material");
Material280.USE = "HAND_FEET_COLOR";
material = Material280;

appearance = Appearance279;

let IndexedFaceSet281 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet281.creaseAngle = 0.5;
IndexedFaceSet281.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
let Coordinate282 = browser.currentScene.createNode("Coordinate");
Coordinate282.USE = "points";
coord = Coordinate282;

geometry = IndexedFaceSet281;

HAnimSite277YYY.children = new X3D.MFNode();

HAnimSite277ZZZ.children[0] = Shape278;

HAnimSegment270ZZZ.children[1] = HAnimSite277;

let HAnimSite283 = browser.currentScene.createNode("HAnimSite");
HAnimSite283.DEF = "hanim_l_metatarsal_phalanx_5_pt";
HAnimSite283.name = "l_metatarsal_phalanx_5_pt";
HAnimSite283.translation = new X3D.SFVec3f([0.1825,0.007,0.0928]);
let Shape284 = browser.currentScene.createNode("Shape");
let Appearance285 = browser.currentScene.createNode("Appearance");
let Material286 = browser.currentScene.createNode("Material");
Material286.USE = "HAND_FEET_COLOR";
material = Material286;

appearance = Appearance285;

let IndexedFaceSet287 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet287.creaseAngle = 0.5;
IndexedFaceSet287.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
let Coordinate288 = browser.currentScene.createNode("Coordinate");
Coordinate288.USE = "points";
coord = Coordinate288;

geometry = IndexedFaceSet287;

HAnimSite283YYY.children = new X3D.MFNode();

HAnimSite283ZZZ.children[0] = Shape284;

HAnimSegment270ZZZ.children[2] = HAnimSite283;

let HAnimSite289 = browser.currentScene.createNode("HAnimSite");
HAnimSite289.DEF = "hanim_l_tarsal_distal_phalanx_2_pt";
HAnimSite289.name = "l_tarsal_distal_phalanx_2_pt";
HAnimSite289.translation = new X3D.SFVec3f([0.1195,0.0079,0.1433]);
let Shape290 = browser.currentScene.createNode("Shape");
let Appearance291 = browser.currentScene.createNode("Appearance");
let Material292 = browser.currentScene.createNode("Material");
Material292.USE = "HAND_FEET_COLOR";
material = Material292;

appearance = Appearance291;

let IndexedFaceSet293 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet293.creaseAngle = 0.5;
IndexedFaceSet293.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
let Coordinate294 = browser.currentScene.createNode("Coordinate");
Coordinate294.USE = "points";
coord = Coordinate294;

geometry = IndexedFaceSet293;

HAnimSite289YYY.children = new X3D.MFNode();

HAnimSite289ZZZ.children[0] = Shape290;

HAnimSegment270ZZZ.children[3] = HAnimSite289;

HAnimJoint269YYY.children = new X3D.MFNode();

HAnimJoint269ZZZ.children[0] = HAnimSegment270;

HAnimJoint249ZZZ.children[1] = HAnimJoint269;

HAnimJoint241ZZZ.children[1] = HAnimJoint249;

HAnimJoint209ZZZ.children[1] = HAnimJoint241;

HAnimJoint201ZZZ.children[1] = HAnimJoint209;

HAnimJoint175ZZZ.children[1] = HAnimJoint201;

HAnimJoint113ZZZ.children[1] = HAnimJoint175;

let HAnimJoint295 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint295.DEF = "hanim_r_hip";
HAnimJoint295.name = "r_hip";
HAnimJoint295.center = new X3D.SFVec3f([-0.095,0.9171,0.0029]);
let HAnimSegment296 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment296.DEF = "hanim_r_thigh";
HAnimSegment296.name = "r_thigh";
let Transform297 = browser.currentScene.createNode("Transform");
Transform297.translation = new X3D.SFVec3f([-0.095,0.9171,0.0029]);
let Shape298 = browser.currentScene.createNode("Shape");
let Appearance299 = browser.currentScene.createNode("Appearance");
let Material300 = browser.currentScene.createNode("Material");
Material300.USE = "MIN_COLOR";
material = Material300;

appearance = Appearance299;

let IndexedFaceSet301 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet301.creaseAngle = 0.5;
IndexedFaceSet301.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
let Coordinate302 = browser.currentScene.createNode("Coordinate");
Coordinate302.USE = "points";
coord = Coordinate302;

geometry = IndexedFaceSet301;

Transform297YYY.child = new X3D.undefined();

Transform297ZZZ.child[0] = Shape298;

HAnimSegment296YYY.children = new X3D.MFNode();

HAnimSegment296ZZZ.children[0] = Transform297;

let HAnimSite303 = browser.currentScene.createNode("HAnimSite");
HAnimSite303.DEF = "hanim_r_knee_crease_pt";
HAnimSite303.name = "r_knee_crease_pt";
HAnimSite303.translation = new X3D.SFVec3f([-0.0825,0.4932,-0.0326]);
let Shape304 = browser.currentScene.createNode("Shape");
let Appearance305 = browser.currentScene.createNode("Appearance");
let Material306 = browser.currentScene.createNode("Material");
Material306.USE = "SITE_COLOR";
material = Material306;

appearance = Appearance305;

let IndexedFaceSet307 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet307.creaseAngle = 0.5;
IndexedFaceSet307.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
let Coordinate308 = browser.currentScene.createNode("Coordinate");
Coordinate308.USE = "points";
coord = Coordinate308;

geometry = IndexedFaceSet307;

HAnimSite303YYY.children = new X3D.MFNode();

HAnimSite303ZZZ.children[0] = Shape304;

HAnimSegment296ZZZ.children[1] = HAnimSite303;

let HAnimSite309 = browser.currentScene.createNode("HAnimSite");
HAnimSite309.DEF = "hanim_r_femoral_lateral_epicondyle_pt";
HAnimSite309.name = "r_femoral_lateral_epicondyle_pt";
HAnimSite309.translation = new X3D.SFVec3f([-0.1421,0.4992,0.031]);
let Shape310 = browser.currentScene.createNode("Shape");
let Appearance311 = browser.currentScene.createNode("Appearance");
let Material312 = browser.currentScene.createNode("Material");
Material312.USE = "SITE_COLOR";
material = Material312;

appearance = Appearance311;

let IndexedFaceSet313 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet313.creaseAngle = 0.5;
IndexedFaceSet313.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
let Coordinate314 = browser.currentScene.createNode("Coordinate");
Coordinate314.USE = "points";
coord = Coordinate314;

geometry = IndexedFaceSet313;

HAnimSite309YYY.children = new X3D.MFNode();

HAnimSite309ZZZ.children[0] = Shape310;

HAnimSegment296ZZZ.children[2] = HAnimSite309;

let HAnimSite315 = browser.currentScene.createNode("HAnimSite");
HAnimSite315.DEF = "hanim_r_femoral_medial_epicondyle_pt";
HAnimSite315.name = "r_femoral_medial_epicondyle_pt";
HAnimSite315.translation = new X3D.SFVec3f([-0.0221,0.5014,0.0289]);
let Shape316 = browser.currentScene.createNode("Shape");
let Appearance317 = browser.currentScene.createNode("Appearance");
let Material318 = browser.currentScene.createNode("Material");
Material318.USE = "SITE_COLOR";
material = Material318;

appearance = Appearance317;

let IndexedFaceSet319 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet319.creaseAngle = 0.5;
IndexedFaceSet319.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
let Coordinate320 = browser.currentScene.createNode("Coordinate");
Coordinate320.USE = "points";
coord = Coordinate320;

geometry = IndexedFaceSet319;

HAnimSite315YYY.children = new X3D.MFNode();

HAnimSite315ZZZ.children[0] = Shape316;

HAnimSegment296ZZZ.children[3] = HAnimSite315;

HAnimJoint295YYY.children = new X3D.MFNode();

HAnimJoint295ZZZ.children[0] = HAnimSegment296;

let HAnimJoint321 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint321.DEF = "hanim_r_knee";
HAnimJoint321.name = "r_knee";
HAnimJoint321.center = new X3D.SFVec3f([-0.0867,0.4913,0.0318]);
let HAnimSegment322 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment322.DEF = "hanim_r_calf";
HAnimSegment322.name = "r_calf";
let Transform323 = browser.currentScene.createNode("Transform");
Transform323.translation = new X3D.SFVec3f([-0.0867,0.4913,0.0318]);
let Shape324 = browser.currentScene.createNode("Shape");
let Appearance325 = browser.currentScene.createNode("Appearance");
let Material326 = browser.currentScene.createNode("Material");
Material326.USE = "SITE_COLOR";
material = Material326;

appearance = Appearance325;

let IndexedFaceSet327 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet327.creaseAngle = 0.5;
IndexedFaceSet327.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
let Coordinate328 = browser.currentScene.createNode("Coordinate");
Coordinate328.USE = "points";
coord = Coordinate328;

geometry = IndexedFaceSet327;

Transform323YYY.child = new X3D.undefined();

Transform323ZZZ.child[0] = Shape324;

HAnimSegment322YYY.children = new X3D.MFNode();

HAnimSegment322ZZZ.children[0] = Transform323;

HAnimJoint321YYY.children = new X3D.MFNode();

HAnimJoint321ZZZ.children[0] = HAnimSegment322;

let HAnimJoint329 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint329.DEF = "hanim_r_talocrural";
HAnimJoint329.name = "r_talocrural";
HAnimJoint329.center = new X3D.SFVec3f([-0.0801,0.0712,-0.0766]);
let HAnimSegment330 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment330.DEF = "hanim_r_talus";
HAnimSegment330.name = "r_talus";
let Transform331 = browser.currentScene.createNode("Transform");
Transform331.translation = new X3D.SFVec3f([-0.0801,0.0712,-0.0766]);
let Shape332 = browser.currentScene.createNode("Shape");
let Appearance333 = browser.currentScene.createNode("Appearance");
let Material334 = browser.currentScene.createNode("Material");
Material334.USE = "MIN_COLOR";
material = Material334;

appearance = Appearance333;

let IndexedFaceSet335 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet335.creaseAngle = 0.5;
IndexedFaceSet335.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
let Coordinate336 = browser.currentScene.createNode("Coordinate");
Coordinate336.USE = "points";
coord = Coordinate336;

geometry = IndexedFaceSet335;

Transform331YYY.child = new X3D.undefined();

Transform331ZZZ.child[0] = Shape332;

HAnimSegment330YYY.children = new X3D.MFNode();

HAnimSegment330ZZZ.children[0] = Transform331;

let HAnimSite337 = browser.currentScene.createNode("HAnimSite");
HAnimSite337.DEF = "hanim_r_lateral_malleolus_pt";
HAnimSite337.name = "r_lateral_malleolus_pt";
HAnimSite337.translation = new X3D.SFVec3f([-0.1006,0.0658,-0.1075]);
let Shape338 = browser.currentScene.createNode("Shape");
let Appearance339 = browser.currentScene.createNode("Appearance");
let Material340 = browser.currentScene.createNode("Material");
Material340.USE = "HAND_FEET_COLOR";
material = Material340;

appearance = Appearance339;

let IndexedFaceSet341 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet341.creaseAngle = 0.5;
IndexedFaceSet341.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
let Coordinate342 = browser.currentScene.createNode("Coordinate");
Coordinate342.USE = "points";
coord = Coordinate342;

geometry = IndexedFaceSet341;

HAnimSite337YYY.children = new X3D.MFNode();

HAnimSite337ZZZ.children[0] = Shape338;

HAnimSegment330ZZZ.children[1] = HAnimSite337;

let HAnimSite343 = browser.currentScene.createNode("HAnimSite");
HAnimSite343.DEF = "hanim_r_medial_malleolus_pt";
HAnimSite343.name = "r_medial_malleolus_pt";
HAnimSite343.translation = new X3D.SFVec3f([-0.0591,0.076,-0.0928]);
let Shape344 = browser.currentScene.createNode("Shape");
let Appearance345 = browser.currentScene.createNode("Appearance");
let Material346 = browser.currentScene.createNode("Material");
Material346.USE = "HAND_FEET_COLOR";
material = Material346;

appearance = Appearance345;

let IndexedFaceSet347 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet347.creaseAngle = 0.5;
IndexedFaceSet347.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
let Coordinate348 = browser.currentScene.createNode("Coordinate");
Coordinate348.USE = "points";
coord = Coordinate348;

geometry = IndexedFaceSet347;

HAnimSite343YYY.children = new X3D.MFNode();

HAnimSite343ZZZ.children[0] = Shape344;

HAnimSegment330ZZZ.children[2] = HAnimSite343;

let HAnimSite349 = browser.currentScene.createNode("HAnimSite");
HAnimSite349.DEF = "hanim_r_sphyrion_pt";
HAnimSite349.name = "r_sphyrion_pt";
HAnimSite349.translation = new X3D.SFVec3f([-0.0603,0.061,-0.1002]);
let Shape350 = browser.currentScene.createNode("Shape");
let Appearance351 = browser.currentScene.createNode("Appearance");
let Material352 = browser.currentScene.createNode("Material");
Material352.USE = "HAND_FEET_COLOR";
material = Material352;

appearance = Appearance351;

let IndexedFaceSet353 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet353.creaseAngle = 0.5;
IndexedFaceSet353.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
let Coordinate354 = browser.currentScene.createNode("Coordinate");
Coordinate354.USE = "points";
coord = Coordinate354;

geometry = IndexedFaceSet353;

HAnimSite349YYY.children = new X3D.MFNode();

HAnimSite349ZZZ.children[0] = Shape350;

HAnimSegment330ZZZ.children[3] = HAnimSite349;

let HAnimSite355 = browser.currentScene.createNode("HAnimSite");
HAnimSite355.DEF = "hanim_r_calcaneus_posterior_pt";
HAnimSite355.name = "r_calcaneus_posterior_pt";
HAnimSite355.translation = new X3D.SFVec3f([-0.0692,0.0297,-0.1221]);
let Shape356 = browser.currentScene.createNode("Shape");
let Appearance357 = browser.currentScene.createNode("Appearance");
let Material358 = browser.currentScene.createNode("Material");
Material358.USE = "HAND_FEET_COLOR";
material = Material358;

appearance = Appearance357;

let IndexedFaceSet359 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet359.creaseAngle = 0.5;
IndexedFaceSet359.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
let Coordinate360 = browser.currentScene.createNode("Coordinate");
Coordinate360.USE = "points";
coord = Coordinate360;

geometry = IndexedFaceSet359;

HAnimSite355YYY.children = new X3D.MFNode();

HAnimSite355ZZZ.children[0] = Shape356;

HAnimSegment330ZZZ.children[4] = HAnimSite355;

HAnimJoint329YYY.children = new X3D.MFNode();

HAnimJoint329ZZZ.children[0] = HAnimSegment330;

let HAnimJoint361 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint361.DEF = "hanim_r_metatarsophalangeal_2";
HAnimJoint361.name = "r_metatarsophalangeal_2";
HAnimJoint361.center = new X3D.SFVec3f([-0.0801,0,0.0368]);
let HAnimSegment362 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment362.DEF = "hanim_r_tarsal_proximal_phalanx_2";
HAnimSegment362.name = "r_tarsal_proximal_phalanx_2";
let Transform363 = browser.currentScene.createNode("Transform");
Transform363.translation = new X3D.SFVec3f([-0.0801,0,0.0368]);
let Shape364 = browser.currentScene.createNode("Shape");
let Appearance365 = browser.currentScene.createNode("Appearance");
let Material366 = browser.currentScene.createNode("Material");
Material366.USE = "JOINT_COLOR";
material = Material366;

appearance = Appearance365;

let IndexedFaceSet367 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet367.creaseAngle = 0.5;
IndexedFaceSet367.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
let Coordinate368 = browser.currentScene.createNode("Coordinate");
Coordinate368.USE = "points";
coord = Coordinate368;

geometry = IndexedFaceSet367;

Transform363YYY.child = new X3D.undefined();

Transform363ZZZ.child[0] = Shape364;

HAnimSegment362YYY.children = new X3D.MFNode();

HAnimSegment362ZZZ.children[0] = Transform363;

let HAnimSite369 = browser.currentScene.createNode("HAnimSite");
HAnimSite369.DEF = "hanim_r_middistal_tip";
HAnimSite369.name = "r_middistal_tip";
HAnimSite369.translation = new X3D.SFVec3f([-0.1043,-0.0227,0.145]);
let Shape370 = browser.currentScene.createNode("Shape");
let Appearance371 = browser.currentScene.createNode("Appearance");
let Material372 = browser.currentScene.createNode("Material");
Material372.USE = "HAND_FEET_COLOR";
material = Material372;

appearance = Appearance371;

let IndexedFaceSet373 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet373.creaseAngle = 0.5;
IndexedFaceSet373.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
let Coordinate374 = browser.currentScene.createNode("Coordinate");
Coordinate374.USE = "points";
coord = Coordinate374;

geometry = IndexedFaceSet373;

HAnimSite369YYY.children = new X3D.MFNode();

HAnimSite369ZZZ.children[0] = Shape370;

HAnimSegment362ZZZ.children[1] = HAnimSite369;

let HAnimSite375 = browser.currentScene.createNode("HAnimSite");
HAnimSite375.DEF = "hanim_r_metatarsal_phalanx_5_pt";
HAnimSite375.name = "r_metatarsal_phalanx_5_pt";
HAnimSite375.translation = new X3D.SFVec3f([-0.1523,0.0166,0.0895]);
let Shape376 = browser.currentScene.createNode("Shape");
let Appearance377 = browser.currentScene.createNode("Appearance");
let Material378 = browser.currentScene.createNode("Material");
Material378.USE = "HAND_FEET_COLOR";
material = Material378;

appearance = Appearance377;

let IndexedFaceSet379 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet379.creaseAngle = 0.5;
IndexedFaceSet379.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
let Coordinate380 = browser.currentScene.createNode("Coordinate");
Coordinate380.USE = "points";
coord = Coordinate380;

geometry = IndexedFaceSet379;

HAnimSite375YYY.children = new X3D.MFNode();

HAnimSite375ZZZ.children[0] = Shape376;

HAnimSegment362ZZZ.children[2] = HAnimSite375;

let HAnimSite381 = browser.currentScene.createNode("HAnimSite");
HAnimSite381.DEF = "hanim_r_metatarsal_phalanx_1_pt";
HAnimSite381.name = "r_metatarsal_phalanx_1_pt";
HAnimSite381.translation = new X3D.SFVec3f([-0.0521,0.026,0.0127]);
let Shape382 = browser.currentScene.createNode("Shape");
let Appearance383 = browser.currentScene.createNode("Appearance");
let Material384 = browser.currentScene.createNode("Material");
Material384.USE = "HAND_FEET_COLOR";
material = Material384;

appearance = Appearance383;

let IndexedFaceSet385 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet385.creaseAngle = 0.5;
IndexedFaceSet385.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
let Coordinate386 = browser.currentScene.createNode("Coordinate");
Coordinate386.USE = "points";
coord = Coordinate386;

geometry = IndexedFaceSet385;

HAnimSite381YYY.children = new X3D.MFNode();

HAnimSite381ZZZ.children[0] = Shape382;

HAnimSegment362ZZZ.children[3] = HAnimSite381;

let HAnimSite387 = browser.currentScene.createNode("HAnimSite");
HAnimSite387.DEF = "hanim_r_tarsal_distal_phalanx_2_pt";
HAnimSite387.name = "r_tarsal_distal_phalanx_2_pt";
HAnimSite387.translation = new X3D.SFVec3f([-0.0883,0.0134,0.1383]);
let Shape388 = browser.currentScene.createNode("Shape");
let Appearance389 = browser.currentScene.createNode("Appearance");
let Material390 = browser.currentScene.createNode("Material");
Material390.USE = "HAND_FEET_COLOR";
material = Material390;

appearance = Appearance389;

let IndexedFaceSet391 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet391.creaseAngle = 0.5;
IndexedFaceSet391.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
let Coordinate392 = browser.currentScene.createNode("Coordinate");
Coordinate392.USE = "points";
coord = Coordinate392;

geometry = IndexedFaceSet391;

HAnimSite387YYY.children = new X3D.MFNode();

HAnimSite387ZZZ.children[0] = Shape388;

HAnimSegment362ZZZ.children[4] = HAnimSite387;

HAnimJoint361YYY.children = new X3D.MFNode();

HAnimJoint361ZZZ.children[0] = HAnimSegment362;

HAnimJoint329ZZZ.children[1] = HAnimJoint361;

HAnimJoint321ZZZ.children[1] = HAnimJoint329;

HAnimJoint295ZZZ.children[1] = HAnimJoint321;

HAnimJoint113ZZZ.children[2] = HAnimJoint295;

HAnimJoint98ZZZ.children[1] = HAnimJoint113;

let HAnimJoint393 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint393.DEF = "hanim_vl5";
HAnimJoint393.name = "vl5";
HAnimJoint393.center = new X3D.SFVec3f([0.0028,1.0568,-0.0776]);
let HAnimSegment394 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment394.DEF = "hanim_l5";
HAnimSegment394.name = "l5";
let Transform395 = browser.currentScene.createNode("Transform");
Transform395.translation = new X3D.SFVec3f([0.0028,1.0568,-0.0776]);
let Shape396 = browser.currentScene.createNode("Shape");
let Appearance397 = browser.currentScene.createNode("Appearance");
let Material398 = browser.currentScene.createNode("Material");
Material398.USE = "REC_SPINAL_COLOR";
material = Material398;

appearance = Appearance397;

let IndexedFaceSet399 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet399.creaseAngle = 0.5;
IndexedFaceSet399.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
let Coordinate400 = browser.currentScene.createNode("Coordinate");
Coordinate400.USE = "points";
coord = Coordinate400;

geometry = IndexedFaceSet399;

Transform395YYY.child = new X3D.undefined();

Transform395ZZZ.child[0] = Shape396;

HAnimSegment394YYY.children = new X3D.MFNode();

HAnimSegment394ZZZ.children[0] = Transform395;

HAnimJoint393YYY.children = new X3D.MFNode();

HAnimJoint393ZZZ.children[0] = HAnimSegment394;

let HAnimJoint401 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint401.DEF = "hanim_vl4";
HAnimJoint401.name = "vl4";
HAnimJoint401.center = new X3D.SFVec3f([0.0035,1.0925,-0.0787]);
let HAnimSegment402 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment402.DEF = "hanim_l4";
HAnimSegment402.name = "l4";
let Transform403 = browser.currentScene.createNode("Transform");
Transform403.translation = new X3D.SFVec3f([0.0035,1.0925,-0.0787]);
let Shape404 = browser.currentScene.createNode("Shape");
let Appearance405 = browser.currentScene.createNode("Appearance");
let Material406 = browser.currentScene.createNode("Material");
Material406.USE = "SPINAL_COLOR";
material = Material406;

appearance = Appearance405;

let IndexedFaceSet407 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet407.creaseAngle = 0.5;
IndexedFaceSet407.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
let Coordinate408 = browser.currentScene.createNode("Coordinate");
Coordinate408.USE = "points";
coord = Coordinate408;

geometry = IndexedFaceSet407;

Transform403YYY.child = new X3D.undefined();

Transform403ZZZ.child[0] = Shape404;

HAnimSegment402YYY.children = new X3D.MFNode();

HAnimSegment402ZZZ.children[0] = Transform403;

HAnimJoint401YYY.children = new X3D.MFNode();

HAnimJoint401ZZZ.children[0] = HAnimSegment402;

let HAnimJoint409 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint409.DEF = "hanim_vl3";
HAnimJoint409.name = "vl3";
HAnimJoint409.center = new X3D.SFVec3f([0.0041,1.1276,-0.0796]);
let HAnimSegment410 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment410.DEF = "hanim_l3";
HAnimSegment410.name = "l3";
let Transform411 = browser.currentScene.createNode("Transform");
Transform411.translation = new X3D.SFVec3f([0.0041,1.1276,-0.0796]);
let Shape412 = browser.currentScene.createNode("Shape");
let Appearance413 = browser.currentScene.createNode("Appearance");
let Material414 = browser.currentScene.createNode("Material");
Material414.USE = "REC_SPINAL_COLOR";
material = Material414;

appearance = Appearance413;

let IndexedFaceSet415 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet415.creaseAngle = 0.5;
IndexedFaceSet415.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
let Coordinate416 = browser.currentScene.createNode("Coordinate");
Coordinate416.USE = "points";
coord = Coordinate416;

geometry = IndexedFaceSet415;

Transform411YYY.child = new X3D.undefined();

Transform411ZZZ.child[0] = Shape412;

HAnimSegment410YYY.children = new X3D.MFNode();

HAnimSegment410ZZZ.children[0] = Transform411;

HAnimJoint409YYY.children = new X3D.MFNode();

HAnimJoint409ZZZ.children[0] = HAnimSegment410;

let HAnimJoint417 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint417.DEF = "hanim_vl2";
HAnimJoint417.name = "vl2";
HAnimJoint417.center = new X3D.SFVec3f([0.0045,1.1546,-0.08]);
let HAnimSegment418 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment418.DEF = "hanim_l2";
HAnimSegment418.name = "l2";
let Transform419 = browser.currentScene.createNode("Transform");
Transform419.translation = new X3D.SFVec3f([0.0045,1.1546,-0.08]);
let Shape420 = browser.currentScene.createNode("Shape");
let Appearance421 = browser.currentScene.createNode("Appearance");
let Material422 = browser.currentScene.createNode("Material");
Material422.USE = "SPINAL_COLOR";
material = Material422;

appearance = Appearance421;

let IndexedFaceSet423 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet423.creaseAngle = 0.5;
IndexedFaceSet423.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
let Coordinate424 = browser.currentScene.createNode("Coordinate");
Coordinate424.USE = "points";
coord = Coordinate424;

geometry = IndexedFaceSet423;

Transform419YYY.child = new X3D.undefined();

Transform419ZZZ.child[0] = Shape420;

HAnimSegment418YYY.children = new X3D.MFNode();

HAnimSegment418ZZZ.children[0] = Transform419;

HAnimJoint417YYY.children = new X3D.MFNode();

HAnimJoint417ZZZ.children[0] = HAnimSegment418;

let HAnimJoint425 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint425.DEF = "hanim_vl1";
HAnimJoint425.name = "vl1";
HAnimJoint425.center = new X3D.SFVec3f([0.0048,1.1912,-0.0805]);
let HAnimSegment426 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment426.DEF = "hanim_l1";
HAnimSegment426.name = "l1";
let Transform427 = browser.currentScene.createNode("Transform");
Transform427.translation = new X3D.SFVec3f([0.0048,1.1912,-0.0805]);
let Shape428 = browser.currentScene.createNode("Shape");
let Appearance429 = browser.currentScene.createNode("Appearance");
let Material430 = browser.currentScene.createNode("Material");
Material430.USE = "REC_SPINAL_COLOR";
material = Material430;

appearance = Appearance429;

let IndexedFaceSet431 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet431.creaseAngle = 0.5;
IndexedFaceSet431.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
let Coordinate432 = browser.currentScene.createNode("Coordinate");
Coordinate432.USE = "points";
coord = Coordinate432;

geometry = IndexedFaceSet431;

Transform427YYY.child = new X3D.undefined();

Transform427ZZZ.child[0] = Shape428;

HAnimSegment426YYY.children = new X3D.MFNode();

HAnimSegment426ZZZ.children[0] = Transform427;

HAnimJoint425YYY.children = new X3D.MFNode();

HAnimJoint425ZZZ.children[0] = HAnimSegment426;

let HAnimJoint433 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint433.DEF = "hanim_vt12";
HAnimJoint433.name = "vt12";
HAnimJoint433.center = new X3D.SFVec3f([0.0051,1.2278,-0.0808]);
let HAnimSegment434 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment434.DEF = "hanim_t12";
HAnimSegment434.name = "t12";
let Transform435 = browser.currentScene.createNode("Transform");
Transform435.translation = new X3D.SFVec3f([0.0051,1.2278,-0.0808]);
let Shape436 = browser.currentScene.createNode("Shape");
let Appearance437 = browser.currentScene.createNode("Appearance");
let Material438 = browser.currentScene.createNode("Material");
Material438.USE = "SPINAL_COLOR";
material = Material438;

appearance = Appearance437;

let IndexedFaceSet439 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet439.creaseAngle = 0.5;
IndexedFaceSet439.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
let Coordinate440 = browser.currentScene.createNode("Coordinate");
Coordinate440.USE = "points";
coord = Coordinate440;

geometry = IndexedFaceSet439;

Transform435YYY.child = new X3D.undefined();

Transform435ZZZ.child[0] = Shape436;

HAnimSegment434YYY.children = new X3D.MFNode();

HAnimSegment434ZZZ.children[0] = Transform435;

HAnimJoint433YYY.children = new X3D.MFNode();

HAnimJoint433ZZZ.children[0] = HAnimSegment434;

let HAnimJoint441 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint441.DEF = "hanim_vt11";
HAnimJoint441.name = "vt11";
HAnimJoint441.center = new X3D.SFVec3f([0.0053,1.2679,-0.081]);
let HAnimSegment442 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment442.DEF = "hanim_t11";
HAnimSegment442.name = "t11";
let Transform443 = browser.currentScene.createNode("Transform");
Transform443.translation = new X3D.SFVec3f([0.0053,1.2679,-0.081]);
let Shape444 = browser.currentScene.createNode("Shape");
let Appearance445 = browser.currentScene.createNode("Appearance");
let Material446 = browser.currentScene.createNode("Material");
Material446.USE = "SPINAL_COLOR";
material = Material446;

appearance = Appearance445;

let IndexedFaceSet447 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet447.creaseAngle = 0.5;
IndexedFaceSet447.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
let Coordinate448 = browser.currentScene.createNode("Coordinate");
Coordinate448.USE = "points";
coord = Coordinate448;

geometry = IndexedFaceSet447;

Transform443YYY.child = new X3D.undefined();

Transform443ZZZ.child[0] = Shape444;

HAnimSegment442YYY.children = new X3D.MFNode();

HAnimSegment442ZZZ.children[0] = Transform443;

HAnimJoint441YYY.children = new X3D.MFNode();

HAnimJoint441ZZZ.children[0] = HAnimSegment442;

let HAnimJoint449 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint449.DEF = "hanim_vt10";
HAnimJoint449.name = "vt10";
HAnimJoint449.center = new X3D.SFVec3f([0.0056,1.2848,-0.0822]);
let HAnimSegment450 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment450.DEF = "hanim_t10";
HAnimSegment450.name = "t10";
let Transform451 = browser.currentScene.createNode("Transform");
Transform451.translation = new X3D.SFVec3f([0.0056,1.2848,-0.0822]);
let Shape452 = browser.currentScene.createNode("Shape");
let Appearance453 = browser.currentScene.createNode("Appearance");
let Material454 = browser.currentScene.createNode("Material");
Material454.USE = "REC_SPINAL_COLOR";
material = Material454;

appearance = Appearance453;

let IndexedFaceSet455 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet455.creaseAngle = 0.5;
IndexedFaceSet455.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
let Coordinate456 = browser.currentScene.createNode("Coordinate");
Coordinate456.USE = "points";
coord = Coordinate456;

geometry = IndexedFaceSet455;

Transform451YYY.child = new X3D.undefined();

Transform451ZZZ.child[0] = Shape452;

HAnimSegment450YYY.children = new X3D.MFNode();

HAnimSegment450ZZZ.children[0] = Transform451;

HAnimJoint449YYY.children = new X3D.MFNode();

HAnimJoint449ZZZ.children[0] = HAnimSegment450;

let HAnimJoint457 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint457.DEF = "hanim_vt9";
HAnimJoint457.name = "vt9";
HAnimJoint457.center = new X3D.SFVec3f([0.0057,1.3126,-0.0838]);
let HAnimSegment458 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment458.DEF = "hanim_t9";
HAnimSegment458.name = "t9";
let Transform459 = browser.currentScene.createNode("Transform");
Transform459.translation = new X3D.SFVec3f([0.0057,1.3126,-0.0838]);
let Shape460 = browser.currentScene.createNode("Shape");
let Appearance461 = browser.currentScene.createNode("Appearance");
let Material462 = browser.currentScene.createNode("Material");
Material462.USE = "SPINAL_COLOR";
material = Material462;

appearance = Appearance461;

let IndexedFaceSet463 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet463.creaseAngle = 0.5;
IndexedFaceSet463.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
let Coordinate464 = browser.currentScene.createNode("Coordinate");
Coordinate464.USE = "points";
coord = Coordinate464;

geometry = IndexedFaceSet463;

Transform459YYY.child = new X3D.undefined();

Transform459ZZZ.child[0] = Shape460;

HAnimSegment458YYY.children = new X3D.MFNode();

HAnimSegment458ZZZ.children[0] = Transform459;

HAnimJoint457YYY.children = new X3D.MFNode();

HAnimJoint457ZZZ.children[0] = HAnimSegment458;

let HAnimJoint465 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint465.DEF = "hanim_vt8";
HAnimJoint465.name = "vt8";
HAnimJoint465.center = new X3D.SFVec3f([0.0057,1.3382,-0.0845]);
let HAnimSegment466 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment466.DEF = "hanim_t8";
HAnimSegment466.name = "t8";
let Transform467 = browser.currentScene.createNode("Transform");
Transform467.translation = new X3D.SFVec3f([0.0057,1.3382,-0.0845]);
let Shape468 = browser.currentScene.createNode("Shape");
let Appearance469 = browser.currentScene.createNode("Appearance");
let Material470 = browser.currentScene.createNode("Material");
Material470.USE = "SPINAL_COLOR";
material = Material470;

appearance = Appearance469;

let IndexedFaceSet471 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet471.creaseAngle = 0.5;
IndexedFaceSet471.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
let Coordinate472 = browser.currentScene.createNode("Coordinate");
Coordinate472.USE = "points";
coord = Coordinate472;

geometry = IndexedFaceSet471;

Transform467YYY.child = new X3D.undefined();

Transform467ZZZ.child[0] = Shape468;

HAnimSegment466YYY.children = new X3D.MFNode();

HAnimSegment466ZZZ.children[0] = Transform467;

HAnimJoint465YYY.children = new X3D.MFNode();

HAnimJoint465ZZZ.children[0] = HAnimSegment466;

let HAnimJoint473 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint473.DEF = "hanim_vt7";
HAnimJoint473.name = "vt7";
HAnimJoint473.center = new X3D.SFVec3f([0.0058,1.3625,-0.0833]);
let HAnimSegment474 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment474.DEF = "hanim_t7";
HAnimSegment474.name = "t7";
let Transform475 = browser.currentScene.createNode("Transform");
Transform475.translation = new X3D.SFVec3f([0.0058,1.3625,-0.0833]);
let Shape476 = browser.currentScene.createNode("Shape");
let Appearance477 = browser.currentScene.createNode("Appearance");
let Material478 = browser.currentScene.createNode("Material");
Material478.USE = "SPINAL_COLOR";
material = Material478;

appearance = Appearance477;

let IndexedFaceSet479 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet479.creaseAngle = 0.5;
IndexedFaceSet479.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
let Coordinate480 = browser.currentScene.createNode("Coordinate");
Coordinate480.USE = "points";
coord = Coordinate480;

geometry = IndexedFaceSet479;

Transform475YYY.child = new X3D.undefined();

Transform475ZZZ.child[0] = Shape476;

HAnimSegment474YYY.children = new X3D.MFNode();

HAnimSegment474ZZZ.children[0] = Transform475;

HAnimJoint473YYY.children = new X3D.MFNode();

HAnimJoint473ZZZ.children[0] = HAnimSegment474;

let HAnimJoint481 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint481.DEF = "hanim_vt6";
HAnimJoint481.name = "vt6";
HAnimJoint481.center = new X3D.SFVec3f([0.0059,1.3866,-0.08]);
let HAnimSegment482 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment482.DEF = "hanim_t6";
HAnimSegment482.name = "t6";
let Transform483 = browser.currentScene.createNode("Transform");
Transform483.translation = new X3D.SFVec3f([0.0059,1.3866,-0.08]);
let Shape484 = browser.currentScene.createNode("Shape");
let Appearance485 = browser.currentScene.createNode("Appearance");
let Material486 = browser.currentScene.createNode("Material");
Material486.USE = "REC_SPINAL_COLOR";
material = Material486;

appearance = Appearance485;

let IndexedFaceSet487 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet487.creaseAngle = 0.5;
IndexedFaceSet487.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
let Coordinate488 = browser.currentScene.createNode("Coordinate");
Coordinate488.USE = "points";
coord = Coordinate488;

geometry = IndexedFaceSet487;

Transform483YYY.child = new X3D.undefined();

Transform483ZZZ.child[0] = Shape484;

HAnimSegment482YYY.children = new X3D.MFNode();

HAnimSegment482ZZZ.children[0] = Transform483;

HAnimJoint481YYY.children = new X3D.MFNode();

HAnimJoint481ZZZ.children[0] = HAnimSegment482;

let HAnimJoint489 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint489.DEF = "hanim_vt5";
HAnimJoint489.name = "vt5";
HAnimJoint489.center = new X3D.SFVec3f([0.006,1.4102,-0.0745]);
let HAnimSegment490 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment490.DEF = "hanim_t5";
HAnimSegment490.name = "t5";
let Transform491 = browser.currentScene.createNode("Transform");
Transform491.translation = new X3D.SFVec3f([0.006,1.4102,-0.0745]);
let Shape492 = browser.currentScene.createNode("Shape");
let Appearance493 = browser.currentScene.createNode("Appearance");
let Material494 = browser.currentScene.createNode("Material");
Material494.USE = "SPINAL_COLOR";
material = Material494;

appearance = Appearance493;

let IndexedFaceSet495 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet495.creaseAngle = 0.5;
IndexedFaceSet495.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
let Coordinate496 = browser.currentScene.createNode("Coordinate");
Coordinate496.USE = "points";
coord = Coordinate496;

geometry = IndexedFaceSet495;

Transform491YYY.child = new X3D.undefined();

Transform491ZZZ.child[0] = Shape492;

HAnimSegment490YYY.children = new X3D.MFNode();

HAnimSegment490ZZZ.children[0] = Transform491;

HAnimJoint489YYY.children = new X3D.MFNode();

HAnimJoint489ZZZ.children[0] = HAnimSegment490;

let HAnimJoint497 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint497.DEF = "hanim_vt4";
HAnimJoint497.name = "vt4";
HAnimJoint497.center = new X3D.SFVec3f([0.0061,1.432,-0.0675]);
let HAnimSegment498 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment498.DEF = "hanim_t4";
HAnimSegment498.name = "t4";
let Transform499 = browser.currentScene.createNode("Transform");
Transform499.translation = new X3D.SFVec3f([0.0061,1.432,-0.0675]);
let Shape500 = browser.currentScene.createNode("Shape");
let Appearance501 = browser.currentScene.createNode("Appearance");
let Material502 = browser.currentScene.createNode("Material");
Material502.USE = "SPINAL_COLOR";
material = Material502;

appearance = Appearance501;

let IndexedFaceSet503 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet503.creaseAngle = 0.5;
IndexedFaceSet503.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
let Coordinate504 = browser.currentScene.createNode("Coordinate");
Coordinate504.USE = "points";
coord = Coordinate504;

geometry = IndexedFaceSet503;

Transform499YYY.child = new X3D.undefined();

Transform499ZZZ.child[0] = Shape500;

HAnimSegment498YYY.children = new X3D.MFNode();

HAnimSegment498ZZZ.children[0] = Transform499;

HAnimJoint497YYY.children = new X3D.MFNode();

HAnimJoint497ZZZ.children[0] = HAnimSegment498;

let HAnimJoint505 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint505.DEF = "hanim_vt3";
HAnimJoint505.name = "vt3";
HAnimJoint505.center = new X3D.SFVec3f([0.0062,1.4583,-0.057]);
let HAnimSegment506 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment506.DEF = "hanim_t3";
HAnimSegment506.name = "t3";
let Transform507 = browser.currentScene.createNode("Transform");
Transform507.translation = new X3D.SFVec3f([0.0062,1.4583,-0.057]);
let Shape508 = browser.currentScene.createNode("Shape");
let Appearance509 = browser.currentScene.createNode("Appearance");
let Material510 = browser.currentScene.createNode("Material");
Material510.USE = "SPINAL_COLOR";
material = Material510;

appearance = Appearance509;

let IndexedFaceSet511 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet511.creaseAngle = 0.5;
IndexedFaceSet511.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
let Coordinate512 = browser.currentScene.createNode("Coordinate");
Coordinate512.USE = "points";
coord = Coordinate512;

geometry = IndexedFaceSet511;

Transform507YYY.child = new X3D.undefined();

Transform507ZZZ.child[0] = Shape508;

HAnimSegment506YYY.children = new X3D.MFNode();

HAnimSegment506ZZZ.children[0] = Transform507;

HAnimJoint505YYY.children = new X3D.MFNode();

HAnimJoint505ZZZ.children[0] = HAnimSegment506;

let HAnimJoint513 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint513.DEF = "hanim_vt2";
HAnimJoint513.name = "vt2";
HAnimJoint513.center = new X3D.SFVec3f([0.0063,1.4761,-0.0484]);
let HAnimSegment514 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment514.DEF = "hanim_t2";
HAnimSegment514.name = "t2";
let Transform515 = browser.currentScene.createNode("Transform");
Transform515.translation = new X3D.SFVec3f([0.0063,1.4761,-0.0484]);
let Shape516 = browser.currentScene.createNode("Shape");
let Appearance517 = browser.currentScene.createNode("Appearance");
let Material518 = browser.currentScene.createNode("Material");
Material518.USE = "SPINAL_COLOR";
material = Material518;

appearance = Appearance517;

let IndexedFaceSet519 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet519.creaseAngle = 0.5;
IndexedFaceSet519.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
let Coordinate520 = browser.currentScene.createNode("Coordinate");
Coordinate520.USE = "points";
coord = Coordinate520;

geometry = IndexedFaceSet519;

Transform515YYY.child = new X3D.undefined();

Transform515ZZZ.child[0] = Shape516;

HAnimSegment514YYY.children = new X3D.MFNode();

HAnimSegment514ZZZ.children[0] = Transform515;

HAnimJoint513YYY.children = new X3D.MFNode();

HAnimJoint513ZZZ.children[0] = HAnimSegment514;

let HAnimJoint521 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint521.DEF = "hanim_vt1";
HAnimJoint521.name = "vt1";
HAnimJoint521.center = new X3D.SFVec3f([0.0065,1.4951,-0.0387]);
let HAnimSegment522 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment522.DEF = "hanim_t1";
HAnimSegment522.name = "t1";
let Transform523 = browser.currentScene.createNode("Transform");
Transform523.translation = new X3D.SFVec3f([0.0065,1.4951,-0.0387]);
let Shape524 = browser.currentScene.createNode("Shape");
let Appearance525 = browser.currentScene.createNode("Appearance");
let Material526 = browser.currentScene.createNode("Material");
Material526.USE = "REC_SPINAL_COLOR";
material = Material526;

appearance = Appearance525;

let IndexedFaceSet527 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet527.creaseAngle = 0.5;
IndexedFaceSet527.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
let Coordinate528 = browser.currentScene.createNode("Coordinate");
Coordinate528.USE = "points";
coord = Coordinate528;

geometry = IndexedFaceSet527;

Transform523YYY.child = new X3D.undefined();

Transform523ZZZ.child[0] = Shape524;

HAnimSegment522YYY.children = new X3D.MFNode();

HAnimSegment522ZZZ.children[0] = Transform523;

HAnimJoint521YYY.children = new X3D.MFNode();

HAnimJoint521ZZZ.children[0] = HAnimSegment522;

let HAnimJoint529 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint529.DEF = "hanim_l_shoulder";
HAnimJoint529.name = "l_shoulder";
HAnimJoint529.center = new X3D.SFVec3f([0.2029,1.4376,-0.0387]);
let HAnimSegment530 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment530.DEF = "hanim_l_upperarm";
HAnimSegment530.name = "l_upperarm";
let Transform531 = browser.currentScene.createNode("Transform");
Transform531.translation = new X3D.SFVec3f([0.2029,1.4376,-0.0387]);
let Shape532 = browser.currentScene.createNode("Shape");
let Appearance533 = browser.currentScene.createNode("Appearance");
let Material534 = browser.currentScene.createNode("Material");
Material534.USE = "MIN_COLOR";
material = Material534;

appearance = Appearance533;

let IndexedFaceSet535 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet535.creaseAngle = 0.5;
IndexedFaceSet535.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
let Coordinate536 = browser.currentScene.createNode("Coordinate");
Coordinate536.USE = "points";
coord = Coordinate536;

geometry = IndexedFaceSet535;

Transform531YYY.child = new X3D.undefined();

Transform531ZZZ.child[0] = Shape532;

HAnimSegment530YYY.children = new X3D.MFNode();

HAnimSegment530ZZZ.children[0] = Transform531;

let Transform537 = browser.currentScene.createNode("Transform");
Transform537.DEF = "l_upperarm_adjust";
Transform537.translation = new X3D.SFVec3f([0.2029,1.4376,-0.0387]);
Transform537.rotation = new X3D.SFRotation([1,0,0,0.119]);
Transform537.center = new X3D.SFVec3f([0.182,1.22,-0.047]);
HAnimSegment530ZZZ.children[1] = Transform537;

let HAnimSite538 = browser.currentScene.createNode("HAnimSite");
HAnimSite538.DEF = "hanim_l_humeral_lateral_epicondyle_pt";
HAnimSite538.name = "l_humeral_lateral_epicondyle_pt";
HAnimSite538.translation = new X3D.SFVec3f([0.228,1.1482,-0.11]);
let Shape539 = browser.currentScene.createNode("Shape");
let Appearance540 = browser.currentScene.createNode("Appearance");
let Material541 = browser.currentScene.createNode("Material");
Material541.USE = "SITE_COLOR";
material = Material541;

appearance = Appearance540;

let IndexedFaceSet542 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet542.creaseAngle = 0.5;
IndexedFaceSet542.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
let Coordinate543 = browser.currentScene.createNode("Coordinate");
Coordinate543.USE = "points";
coord = Coordinate543;

geometry = IndexedFaceSet542;

HAnimSite538YYY.children = new X3D.MFNode();

HAnimSite538ZZZ.children[0] = Shape539;

HAnimSegment530ZZZ.children[2] = HAnimSite538;

HAnimJoint529YYY.children = new X3D.MFNode();

HAnimJoint529ZZZ.children[0] = HAnimSegment530;

let HAnimJoint544 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint544.DEF = "hanim_l_elbow";
HAnimJoint544.name = "l_elbow";
HAnimJoint544.center = new X3D.SFVec3f([0.2014,1.1357,-0.0682]);
let HAnimSegment545 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment545.DEF = "hanim_l_forearm";
HAnimSegment545.name = "l_forearm";
let Transform546 = browser.currentScene.createNode("Transform");
Transform546.translation = new X3D.SFVec3f([0.2014,1.1357,-0.0682]);
let Shape547 = browser.currentScene.createNode("Shape");
let Appearance548 = browser.currentScene.createNode("Appearance");
let Material549 = browser.currentScene.createNode("Material");
Material549.USE = "MIN_COLOR";
material = Material549;

appearance = Appearance548;

let IndexedFaceSet550 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet550.creaseAngle = 0.5;
IndexedFaceSet550.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
let Coordinate551 = browser.currentScene.createNode("Coordinate");
Coordinate551.USE = "points";
coord = Coordinate551;

geometry = IndexedFaceSet550;

Transform546YYY.child = new X3D.undefined();

Transform546ZZZ.child[0] = Shape547;

HAnimSegment545YYY.children = new X3D.MFNode();

HAnimSegment545ZZZ.children[0] = Transform546;

let Transform552 = browser.currentScene.createNode("Transform");
Transform552.DEF = "l_forearm_adjust";
Transform552.translation = new X3D.SFVec3f([0.2014,1.1357,-0.0682]);
Transform552.rotation = new X3D.SFRotation([-1,0,0,0.1]);
Transform552.center = new X3D.SFVec3f([0.198,0.961,-0.0405]);
HAnimSegment545ZZZ.children[1] = Transform552;

let HAnimSite553 = browser.currentScene.createNode("HAnimSite");
HAnimSite553.DEF = "hanim_l_radial_styloid_pt";
HAnimSite553.name = "l_radial_styloid_pt";
HAnimSite553.translation = new X3D.SFVec3f([0.1901,0.8645,-0.0415]);
let Shape554 = browser.currentScene.createNode("Shape");
let Appearance555 = browser.currentScene.createNode("Appearance");
let Material556 = browser.currentScene.createNode("Material");
Material556.USE = "SITE_COLOR";
material = Material556;

appearance = Appearance555;

let IndexedFaceSet557 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet557.creaseAngle = 0.5;
IndexedFaceSet557.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
let Coordinate558 = browser.currentScene.createNode("Coordinate");
Coordinate558.USE = "points";
coord = Coordinate558;

geometry = IndexedFaceSet557;

HAnimSite553YYY.children = new X3D.MFNode();

HAnimSite553ZZZ.children[0] = Shape554;

HAnimSegment545ZZZ.children[2] = HAnimSite553;

let HAnimSite559 = browser.currentScene.createNode("HAnimSite");
HAnimSite559.DEF = "hanim_l_olecranon_pt";
HAnimSite559.name = "l_olecranon_pt";
HAnimSite559.translation = new X3D.SFVec3f([-0.1962,1.1375,-0.1123]);
let Shape560 = browser.currentScene.createNode("Shape");
let Appearance561 = browser.currentScene.createNode("Appearance");
let Material562 = browser.currentScene.createNode("Material");
Material562.USE = "SITE_COLOR";
material = Material562;

appearance = Appearance561;

let IndexedFaceSet563 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet563.creaseAngle = 0.5;
IndexedFaceSet563.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
let Coordinate564 = browser.currentScene.createNode("Coordinate");
Coordinate564.USE = "points";
coord = Coordinate564;

geometry = IndexedFaceSet563;

HAnimSite559YYY.children = new X3D.MFNode();

HAnimSite559ZZZ.children[0] = Shape560;

HAnimSegment545ZZZ.children[3] = HAnimSite559;

let HAnimSite565 = browser.currentScene.createNode("HAnimSite");
HAnimSite565.DEF = "hanim_l_humeral_medial_epicondyle_pt";
HAnimSite565.name = "l_humeral_medial_epicondyle_pt";
HAnimSite565.translation = new X3D.SFVec3f([0.1735,1.1272,-0.1113]);
let Shape566 = browser.currentScene.createNode("Shape");
let Appearance567 = browser.currentScene.createNode("Appearance");
let Material568 = browser.currentScene.createNode("Material");
Material568.USE = "SITE_COLOR";
material = Material568;

appearance = Appearance567;

let IndexedFaceSet569 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet569.creaseAngle = 0.5;
IndexedFaceSet569.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
let Coordinate570 = browser.currentScene.createNode("Coordinate");
Coordinate570.USE = "points";
coord = Coordinate570;

geometry = IndexedFaceSet569;

HAnimSite565YYY.children = new X3D.MFNode();

HAnimSite565ZZZ.children[0] = Shape566;

HAnimSegment545ZZZ.children[4] = HAnimSite565;

let HAnimSite571 = browser.currentScene.createNode("HAnimSite");
HAnimSite571.DEF = "hanim_l_radiale_pt";
HAnimSite571.name = "l_radiale_pt";
HAnimSite571.translation = new X3D.SFVec3f([0.2182,1.1212,-0.1167]);
let Shape572 = browser.currentScene.createNode("Shape");
let Appearance573 = browser.currentScene.createNode("Appearance");
let Material574 = browser.currentScene.createNode("Material");
Material574.USE = "SITE_COLOR";
material = Material574;

appearance = Appearance573;

let IndexedFaceSet575 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet575.creaseAngle = 0.5;
IndexedFaceSet575.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
let Coordinate576 = browser.currentScene.createNode("Coordinate");
Coordinate576.USE = "points";
coord = Coordinate576;

geometry = IndexedFaceSet575;

HAnimSite571YYY.children = new X3D.MFNode();

HAnimSite571ZZZ.children[0] = Shape572;

HAnimSegment545ZZZ.children[5] = HAnimSite571;

HAnimJoint544YYY.children = new X3D.MFNode();

HAnimJoint544ZZZ.children[0] = HAnimSegment545;

let HAnimJoint577 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint577.DEF = "hanim_l_radiocarpal";
HAnimJoint577.name = "l_radiocarpal";
HAnimJoint577.center = new X3D.SFVec3f([0.1984,0.8663,-0.0583]);
let HAnimSegment578 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment578.DEF = "hanim_l_carpal";
HAnimSegment578.name = "l_carpal";
let Transform579 = browser.currentScene.createNode("Transform");
Transform579.translation = new X3D.SFVec3f([0.1984,0.8663,-0.0583]);
let Shape580 = browser.currentScene.createNode("Shape");
let Appearance581 = browser.currentScene.createNode("Appearance");
let Material582 = browser.currentScene.createNode("Material");
Material582.USE = "MIN_COLOR";
material = Material582;

appearance = Appearance581;

let IndexedFaceSet583 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet583.creaseAngle = 0.5;
IndexedFaceSet583.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
let Coordinate584 = browser.currentScene.createNode("Coordinate");
Coordinate584.USE = "points";
coord = Coordinate584;

geometry = IndexedFaceSet583;

Transform579YYY.child = new X3D.undefined();

Transform579ZZZ.child[0] = Shape580;

HAnimSegment578YYY.children = new X3D.MFNode();

HAnimSegment578ZZZ.children[0] = Transform579;

let Transform585 = browser.currentScene.createNode("Transform");
Transform585.DEF = "l_hand_adjust";
Transform585.translation = new X3D.SFVec3f([0.1984,0.8663,-0.0583]);
Transform585.rotation = new X3D.SFRotation([-0.06361,-0.9967,0.04988,1.333]);
Transform585.center = new X3D.SFVec3f([0.213,0.811,-0.0338]);
HAnimSegment578ZZZ.children[1] = Transform585;

let HAnimSite586 = browser.currentScene.createNode("HAnimSite");
HAnimSite586.DEF = "hanim_l_hand_tip";
HAnimSite586.name = "l_hand_tip";
HAnimSite586.translation = new X3D.SFVec3f([0.208,0.6731,-0.0491]);
let Shape587 = browser.currentScene.createNode("Shape");
let Appearance588 = browser.currentScene.createNode("Appearance");
let Material589 = browser.currentScene.createNode("Material");
Material589.USE = "SITE_COLOR";
material = Material589;

appearance = Appearance588;

let IndexedFaceSet590 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet590.creaseAngle = 0.5;
IndexedFaceSet590.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
let Coordinate591 = browser.currentScene.createNode("Coordinate");
Coordinate591.USE = "points";
coord = Coordinate591;

geometry = IndexedFaceSet590;

HAnimSite586YYY.children = new X3D.MFNode();

HAnimSite586ZZZ.children[0] = Shape587;

HAnimSegment578ZZZ.children[2] = HAnimSite586;

let HAnimSite592 = browser.currentScene.createNode("HAnimSite");
HAnimSite592.DEF = "hanim_l_metacarpal_phalanx_2_pt";
HAnimSite592.name = "l_metacarpal_phalanx_2_pt";
HAnimSite592.translation = new X3D.SFVec3f([0.2009,0.8139,-0.0237]);
let Shape593 = browser.currentScene.createNode("Shape");
let Appearance594 = browser.currentScene.createNode("Appearance");
let Material595 = browser.currentScene.createNode("Material");
Material595.USE = "SITE_COLOR";
material = Material595;

appearance = Appearance594;

let IndexedFaceSet596 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet596.creaseAngle = 0.5;
IndexedFaceSet596.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
let Coordinate597 = browser.currentScene.createNode("Coordinate");
Coordinate597.USE = "points";
coord = Coordinate597;

geometry = IndexedFaceSet596;

HAnimSite592YYY.children = new X3D.MFNode();

HAnimSite592ZZZ.children[0] = Shape593;

HAnimSegment578ZZZ.children[3] = HAnimSite592;

let HAnimSite598 = browser.currentScene.createNode("HAnimSite");
HAnimSite598.DEF = "hanim_l_dactylion_pt";
HAnimSite598.name = "l_dactylion_pt";
HAnimSite598.translation = new X3D.SFVec3f([0.2056,0.6743,-0.0482]);
let Shape599 = browser.currentScene.createNode("Shape");
let Appearance600 = browser.currentScene.createNode("Appearance");
let Material601 = browser.currentScene.createNode("Material");
Material601.USE = "SITE_COLOR";
material = Material601;

appearance = Appearance600;

let IndexedFaceSet602 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet602.creaseAngle = 0.5;
IndexedFaceSet602.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
let Coordinate603 = browser.currentScene.createNode("Coordinate");
Coordinate603.USE = "points";
coord = Coordinate603;

geometry = IndexedFaceSet602;

HAnimSite598YYY.children = new X3D.MFNode();

HAnimSite598ZZZ.children[0] = Shape599;

HAnimSegment578ZZZ.children[4] = HAnimSite598;

let HAnimSite604 = browser.currentScene.createNode("HAnimSite");
HAnimSite604.DEF = "hanim_l_ulnar_styloid_pt";
HAnimSite604.name = "l_ulnar_styloid_pt";
HAnimSite604.translation = new X3D.SFVec3f([-0.2142,0.8529,-0.0648]);
let Shape605 = browser.currentScene.createNode("Shape");
let Appearance606 = browser.currentScene.createNode("Appearance");
let Material607 = browser.currentScene.createNode("Material");
Material607.USE = "SITE_COLOR";
material = Material607;

appearance = Appearance606;

let IndexedFaceSet608 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet608.creaseAngle = 0.5;
IndexedFaceSet608.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
let Coordinate609 = browser.currentScene.createNode("Coordinate");
Coordinate609.USE = "points";
coord = Coordinate609;

geometry = IndexedFaceSet608;

HAnimSite604YYY.children = new X3D.MFNode();

HAnimSite604ZZZ.children[0] = Shape605;

HAnimSegment578ZZZ.children[5] = HAnimSite604;

let HAnimSite610 = browser.currentScene.createNode("HAnimSite");
HAnimSite610.DEF = "hanim_l_metacarpal_phalanx_5_pt";
HAnimSite610.name = "l_metacarpal_phalanx_5_pt";
HAnimSite610.translation = new X3D.SFVec3f([0.1929,0.786,-0.1122]);
let Shape611 = browser.currentScene.createNode("Shape");
let Appearance612 = browser.currentScene.createNode("Appearance");
let Material613 = browser.currentScene.createNode("Material");
Material613.USE = "SITE_COLOR";
material = Material613;

appearance = Appearance612;

let IndexedFaceSet614 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet614.creaseAngle = 0.5;
IndexedFaceSet614.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
let Coordinate615 = browser.currentScene.createNode("Coordinate");
Coordinate615.USE = "points";
coord = Coordinate615;

geometry = IndexedFaceSet614;

HAnimSite610YYY.children = new X3D.MFNode();

HAnimSite610ZZZ.children[0] = Shape611;

HAnimSegment578ZZZ.children[6] = HAnimSite610;

HAnimJoint577YYY.children = new X3D.MFNode();

HAnimJoint577ZZZ.children[0] = HAnimSegment578;

let HAnimJoint616 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint616.DEF = "hanim_l_carpometacarpal_1";
HAnimJoint616.name = "l_carpometacarpal_1";
HAnimJoint616.center = new X3D.SFVec3f([0.1924,0.8472,-0.0534]);
let HAnimSegment617 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment617.DEF = "hanim_l_metacarpal_1";
HAnimSegment617.name = "l_metacarpal_1";
let Transform618 = browser.currentScene.createNode("Transform");
Transform618.translation = new X3D.SFVec3f([0.1924,0.8472,-0.0534]);
let Shape619 = browser.currentScene.createNode("Shape");
let Appearance620 = browser.currentScene.createNode("Appearance");
let Material621 = browser.currentScene.createNode("Material");
Material621.USE = "JOINT_COLOR";
material = Material621;

appearance = Appearance620;

let IndexedFaceSet622 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet622.creaseAngle = 0.5;
IndexedFaceSet622.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
let Coordinate623 = browser.currentScene.createNode("Coordinate");
Coordinate623.USE = "points";
coord = Coordinate623;

geometry = IndexedFaceSet622;

Transform618YYY.child = new X3D.undefined();

Transform618ZZZ.child[0] = Shape619;

HAnimSegment617YYY.children = new X3D.MFNode();

HAnimSegment617ZZZ.children[0] = Transform618;

HAnimJoint616YYY.children = new X3D.MFNode();

HAnimJoint616ZZZ.children[0] = HAnimSegment617;

let HAnimJoint624 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint624.DEF = "hanim_l_metacarpophalangeal_1";
HAnimJoint624.name = "l_metacarpophalangeal_1";
HAnimJoint624.center = new X3D.SFVec3f([0.1951,0.8226,0.0246]);
let HAnimSegment625 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment625.DEF = "hanim_l_carpal_proximal_phalanx_1";
HAnimSegment625.name = "l_carpal_proximal_phalanx_1";
let Transform626 = browser.currentScene.createNode("Transform");
Transform626.translation = new X3D.SFVec3f([0.1951,0.8226,0.0246]);
let Shape627 = browser.currentScene.createNode("Shape");
let Appearance628 = browser.currentScene.createNode("Appearance");
let Material629 = browser.currentScene.createNode("Material");
Material629.USE = "JOINT_COLOR";
material = Material629;

appearance = Appearance628;

let IndexedFaceSet630 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet630.creaseAngle = 0.5;
IndexedFaceSet630.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
let Coordinate631 = browser.currentScene.createNode("Coordinate");
Coordinate631.USE = "points";
coord = Coordinate631;

geometry = IndexedFaceSet630;

Transform626YYY.child = new X3D.undefined();

Transform626ZZZ.child[0] = Shape627;

HAnimSegment625YYY.children = new X3D.MFNode();

HAnimSegment625ZZZ.children[0] = Transform626;

HAnimJoint624YYY.children = new X3D.MFNode();

HAnimJoint624ZZZ.children[0] = HAnimSegment625;

let HAnimJoint632 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint632.DEF = "hanim_l_carpal_interphalangeal_1";
HAnimJoint632.name = "l_carpal_interphalangeal_1";
HAnimJoint632.center = new X3D.SFVec3f([0.1955,0.8159,0.0464]);
let HAnimSegment633 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment633.DEF = "hanim_l_carpal_distal_phalanx_1";
HAnimSegment633.name = "l_carpal_distal_phalanx_1";
let Transform634 = browser.currentScene.createNode("Transform");
Transform634.translation = new X3D.SFVec3f([0.1955,0.8159,0.0464]);
let Shape635 = browser.currentScene.createNode("Shape");
let Appearance636 = browser.currentScene.createNode("Appearance");
let Material637 = browser.currentScene.createNode("Material");
Material637.USE = "JOINT_COLOR";
material = Material637;

appearance = Appearance636;

let IndexedFaceSet638 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet638.creaseAngle = 0.5;
IndexedFaceSet638.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
let Coordinate639 = browser.currentScene.createNode("Coordinate");
Coordinate639.USE = "points";
coord = Coordinate639;

geometry = IndexedFaceSet638;

Transform634YYY.child = new X3D.undefined();

Transform634ZZZ.child[0] = Shape635;

HAnimSegment633YYY.children = new X3D.MFNode();

HAnimSegment633ZZZ.children[0] = Transform634;

let HAnimSite640 = browser.currentScene.createNode("HAnimSite");
HAnimSite640.DEF = "hanim_l_carpal_distal_phalanx_1_tip";
HAnimSite640.name = "l_carpal_distal_phalanx_1_tip";
HAnimSite640.translation = new X3D.SFVec3f([0.1982,0.8061,0.0759]);
let Shape641 = browser.currentScene.createNode("Shape");
let Appearance642 = browser.currentScene.createNode("Appearance");
let Material643 = browser.currentScene.createNode("Material");
Material643.USE = "HAND_FEET_COLOR";
material = Material643;

appearance = Appearance642;

let IndexedFaceSet644 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet644.creaseAngle = 0.5;
IndexedFaceSet644.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
let Coordinate645 = browser.currentScene.createNode("Coordinate");
Coordinate645.USE = "points";
coord = Coordinate645;

geometry = IndexedFaceSet644;

HAnimSite640YYY.children = new X3D.MFNode();

HAnimSite640ZZZ.children[0] = Shape641;

HAnimSegment633ZZZ.children[1] = HAnimSite640;

HAnimJoint632YYY.children = new X3D.MFNode();

HAnimJoint632ZZZ.children[0] = HAnimSegment633;

HAnimJoint624ZZZ.children[1] = HAnimJoint632;

HAnimJoint616ZZZ.children[1] = HAnimJoint624;

HAnimJoint577ZZZ.children[1] = HAnimJoint616;

let HAnimJoint646 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint646.DEF = "hanim_l_carpometacarpal_2";
HAnimJoint646.name = "l_carpometacarpal_2";
HAnimJoint646.center = new X3D.SFVec3f([0.1983,0.8024,-0.028]);
let HAnimSegment647 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment647.DEF = "hanim_l_metacarpal_2";
HAnimSegment647.name = "l_metacarpal_2";
let Transform648 = browser.currentScene.createNode("Transform");
Transform648.translation = new X3D.SFVec3f([0.1983,0.8024,-0.028]);
let Shape649 = browser.currentScene.createNode("Shape");
let Appearance650 = browser.currentScene.createNode("Appearance");
let Material651 = browser.currentScene.createNode("Material");
Material651.USE = "JOINT_COLOR";
material = Material651;

appearance = Appearance650;

let IndexedFaceSet652 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet652.creaseAngle = 0.5;
IndexedFaceSet652.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
let Coordinate653 = browser.currentScene.createNode("Coordinate");
Coordinate653.USE = "points";
coord = Coordinate653;

geometry = IndexedFaceSet652;

Transform648YYY.child = new X3D.undefined();

Transform648ZZZ.child[0] = Shape649;

HAnimSegment647YYY.children = new X3D.MFNode();

HAnimSegment647ZZZ.children[0] = Transform648;

HAnimJoint646YYY.children = new X3D.MFNode();

HAnimJoint646ZZZ.children[0] = HAnimSegment647;

let HAnimJoint654 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint654.DEF = "hanim_l_metacarpophalangeal_2";
HAnimJoint654.name = "l_metacarpophalangeal_2";
HAnimJoint654.center = new X3D.SFVec3f([0.1983,0.7815,-0.028]);
let HAnimSegment655 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment655.DEF = "hanim_l_carpal_proximal_phalanx_2";
HAnimSegment655.name = "l_carpal_proximal_phalanx_2";
let Transform656 = browser.currentScene.createNode("Transform");
Transform656.translation = new X3D.SFVec3f([0.1983,0.7815,-0.028]);
let Shape657 = browser.currentScene.createNode("Shape");
let Appearance658 = browser.currentScene.createNode("Appearance");
let Material659 = browser.currentScene.createNode("Material");
Material659.USE = "JOINT_COLOR";
material = Material659;

appearance = Appearance658;

let IndexedFaceSet660 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet660.creaseAngle = 0.5;
IndexedFaceSet660.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
let Coordinate661 = browser.currentScene.createNode("Coordinate");
Coordinate661.USE = "points";
coord = Coordinate661;

geometry = IndexedFaceSet660;

Transform656YYY.child = new X3D.undefined();

Transform656ZZZ.child[0] = Shape657;

HAnimSegment655YYY.children = new X3D.MFNode();

HAnimSegment655ZZZ.children[0] = Transform656;

HAnimJoint654YYY.children = new X3D.MFNode();

HAnimJoint654ZZZ.children[0] = HAnimSegment655;

let HAnimJoint662 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint662.DEF = "hanim_l_carpal_proximal_interphalangeal_2";
HAnimJoint662.name = "l_carpal_proximal_interphalangeal_2";
HAnimJoint662.center = new X3D.SFVec3f([0.2017,0.7363,-0.0248]);
let HAnimSegment663 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment663.DEF = "hanim_l_carpal_middle_phalanx_2";
HAnimSegment663.name = "l_carpal_middle_phalanx_2";
let Transform664 = browser.currentScene.createNode("Transform");
Transform664.translation = new X3D.SFVec3f([0.2017,0.7363,-0.0248]);
let Shape665 = browser.currentScene.createNode("Shape");
let Appearance666 = browser.currentScene.createNode("Appearance");
let Material667 = browser.currentScene.createNode("Material");
Material667.USE = "JOINT_COLOR";
material = Material667;

appearance = Appearance666;

let IndexedFaceSet668 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet668.creaseAngle = 0.5;
IndexedFaceSet668.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
let Coordinate669 = browser.currentScene.createNode("Coordinate");
Coordinate669.USE = "points";
coord = Coordinate669;

geometry = IndexedFaceSet668;

Transform664YYY.child = new X3D.undefined();

Transform664ZZZ.child[0] = Shape665;

HAnimSegment663YYY.children = new X3D.MFNode();

HAnimSegment663ZZZ.children[0] = Transform664;

HAnimJoint662YYY.children = new X3D.MFNode();

HAnimJoint662ZZZ.children[0] = HAnimSegment663;

let HAnimJoint670 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint670.DEF = "hanim_l_carpal_distal_interphalangeal_2";
HAnimJoint670.name = "l_carpal_distal_interphalangeal_2";
HAnimJoint670.center = new X3D.SFVec3f([0.2028,0.7139,-0.0236]);
let HAnimSegment671 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment671.DEF = "hanim_l_carpal_distal_phalanx_2";
HAnimSegment671.name = "l_carpal_distal_phalanx_2";
let Transform672 = browser.currentScene.createNode("Transform");
Transform672.translation = new X3D.SFVec3f([0.2028,0.7139,-0.0236]);
let Shape673 = browser.currentScene.createNode("Shape");
let Appearance674 = browser.currentScene.createNode("Appearance");
let Material675 = browser.currentScene.createNode("Material");
Material675.USE = "JOINT_COLOR";
material = Material675;

appearance = Appearance674;

let IndexedFaceSet676 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet676.creaseAngle = 0.5;
IndexedFaceSet676.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
let Coordinate677 = browser.currentScene.createNode("Coordinate");
Coordinate677.USE = "points";
coord = Coordinate677;

geometry = IndexedFaceSet676;

Transform672YYY.child = new X3D.undefined();

Transform672ZZZ.child[0] = Shape673;

HAnimSegment671YYY.children = new X3D.MFNode();

HAnimSegment671ZZZ.children[0] = Transform672;

let HAnimSite678 = browser.currentScene.createNode("HAnimSite");
HAnimSite678.DEF = "hanim_l_carpal_distal_phalanx_2_tip";
HAnimSite678.name = "l_carpal_distal_phalanx_2_tip";
HAnimSite678.translation = new X3D.SFVec3f([0.2089,0.6858,-0.0245]);
let Shape679 = browser.currentScene.createNode("Shape");
let Appearance680 = browser.currentScene.createNode("Appearance");
let Material681 = browser.currentScene.createNode("Material");
Material681.USE = "HAND_FEET_COLOR";
material = Material681;

appearance = Appearance680;

let IndexedFaceSet682 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet682.creaseAngle = 0.5;
IndexedFaceSet682.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
let Coordinate683 = browser.currentScene.createNode("Coordinate");
Coordinate683.USE = "points";
coord = Coordinate683;

geometry = IndexedFaceSet682;

HAnimSite678YYY.children = new X3D.MFNode();

HAnimSite678ZZZ.children[0] = Shape679;

HAnimSegment671ZZZ.children[1] = HAnimSite678;

HAnimJoint670YYY.children = new X3D.MFNode();

HAnimJoint670ZZZ.children[0] = HAnimSegment671;

HAnimJoint662ZZZ.children[1] = HAnimJoint670;

HAnimJoint654ZZZ.children[1] = HAnimJoint662;

HAnimJoint646ZZZ.children[1] = HAnimJoint654;

HAnimJoint577ZZZ.children[2] = HAnimJoint646;

HAnimJoint544ZZZ.children[1] = HAnimJoint577;

HAnimJoint529ZZZ.children[1] = HAnimJoint544;

HAnimJoint521ZZZ.children[1] = HAnimJoint529;

let HAnimJoint684 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint684.DEF = "hanim_r_shoulder";
HAnimJoint684.name = "r_shoulder";
HAnimJoint684.center = new X3D.SFVec3f([-0.1907,1.4407,-0.0325]);
let HAnimSegment685 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment685.DEF = "hanim_r_upperarm";
HAnimSegment685.name = "r_upperarm";
let Transform686 = browser.currentScene.createNode("Transform");
Transform686.translation = new X3D.SFVec3f([-0.1907,1.4407,-0.0325]);
let Shape687 = browser.currentScene.createNode("Shape");
let Appearance688 = browser.currentScene.createNode("Appearance");
let Material689 = browser.currentScene.createNode("Material");
Material689.USE = "MIN_COLOR";
material = Material689;

appearance = Appearance688;

let IndexedFaceSet690 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet690.creaseAngle = 0.5;
IndexedFaceSet690.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
let Coordinate691 = browser.currentScene.createNode("Coordinate");
Coordinate691.USE = "points";
coord = Coordinate691;

geometry = IndexedFaceSet690;

Transform686YYY.child = new X3D.undefined();

Transform686ZZZ.child[0] = Shape687;

HAnimSegment685YYY.children = new X3D.MFNode();

HAnimSegment685ZZZ.children[0] = Transform686;

let Transform692 = browser.currentScene.createNode("Transform");
Transform692.DEF = "r_upperarm_adjust";
Transform692.translation = new X3D.SFVec3f([-0.1907,1.4407,-0.0325]);
Transform692.rotation = new X3D.SFRotation([1,0,0,0.0836]);
Transform692.center = new X3D.SFVec3f([-0.182,1.22,-0.047]);
HAnimSegment685ZZZ.children[1] = Transform692;

let HAnimSite693 = browser.currentScene.createNode("HAnimSite");
HAnimSite693.DEF = "hanim_r_humeral_lateral_epicondyle_pt";
HAnimSite693.name = "r_humeral_lateral_epicondyle_pt";
HAnimSite693.translation = new X3D.SFVec3f([-0.2224,1.1517,-0.1033]);
let Shape694 = browser.currentScene.createNode("Shape");
let Appearance695 = browser.currentScene.createNode("Appearance");
let Material696 = browser.currentScene.createNode("Material");
Material696.USE = "SITE_COLOR";
material = Material696;

appearance = Appearance695;

let IndexedFaceSet697 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet697.creaseAngle = 0.5;
IndexedFaceSet697.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
let Coordinate698 = browser.currentScene.createNode("Coordinate");
Coordinate698.USE = "points";
coord = Coordinate698;

geometry = IndexedFaceSet697;

HAnimSite693YYY.children = new X3D.MFNode();

HAnimSite693ZZZ.children[0] = Shape694;

HAnimSegment685ZZZ.children[2] = HAnimSite693;

HAnimJoint684YYY.children = new X3D.MFNode();

HAnimJoint684ZZZ.children[0] = HAnimSegment685;

let HAnimJoint699 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint699.DEF = "hanim_r_elbow";
HAnimJoint699.name = "r_elbow";
HAnimJoint699.center = new X3D.SFVec3f([-0.1949,1.1388,-0.062]);
let HAnimSegment700 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment700.DEF = "hanim_r_forearm";
HAnimSegment700.name = "r_forearm";
let Transform701 = browser.currentScene.createNode("Transform");
Transform701.translation = new X3D.SFVec3f([-0.1949,1.1388,-0.062]);
let Shape702 = browser.currentScene.createNode("Shape");
let Appearance703 = browser.currentScene.createNode("Appearance");
let Material704 = browser.currentScene.createNode("Material");
Material704.USE = "MIN_COLOR";
material = Material704;

appearance = Appearance703;

let IndexedFaceSet705 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet705.creaseAngle = 0.5;
IndexedFaceSet705.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
let Coordinate706 = browser.currentScene.createNode("Coordinate");
Coordinate706.USE = "points";
coord = Coordinate706;

geometry = IndexedFaceSet705;

Transform701YYY.child = new X3D.undefined();

Transform701ZZZ.child[0] = Shape702;

HAnimSegment700YYY.children = new X3D.MFNode();

HAnimSegment700ZZZ.children[0] = Transform701;

let Transform707 = browser.currentScene.createNode("Transform");
Transform707.DEF = "r_forearm_adjust";
Transform707.translation = new X3D.SFVec3f([-0.1949,1.1388,-0.062]);
Transform707.rotation = new X3D.SFRotation([-1,0,0,0.1254]);
Transform707.center = new X3D.SFVec3f([-0.198,0.961,-0.0397]);
HAnimSegment700ZZZ.children[1] = Transform707;

let HAnimSite708 = browser.currentScene.createNode("HAnimSite");
HAnimSite708.DEF = "hanim_r_radial_styloid_pt";
HAnimSite708.name = "r_radial_styloid_pt";
HAnimSite708.translation = new X3D.SFVec3f([-0.1884,0.8676,-0.036]);
let Shape709 = browser.currentScene.createNode("Shape");
let Appearance710 = browser.currentScene.createNode("Appearance");
let Material711 = browser.currentScene.createNode("Material");
Material711.USE = "SITE_COLOR";
material = Material711;

appearance = Appearance710;

let IndexedFaceSet712 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet712.creaseAngle = 0.5;
IndexedFaceSet712.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
let Coordinate713 = browser.currentScene.createNode("Coordinate");
Coordinate713.USE = "points";
coord = Coordinate713;

geometry = IndexedFaceSet712;

HAnimSite708YYY.children = new X3D.MFNode();

HAnimSite708ZZZ.children[0] = Shape709;

HAnimSegment700ZZZ.children[2] = HAnimSite708;

let HAnimSite714 = browser.currentScene.createNode("HAnimSite");
HAnimSite714.DEF = "hanim_r_olecranon_pt";
HAnimSite714.name = "r_olecranon_pt";
HAnimSite714.translation = new X3D.SFVec3f([-0.1907,1.1405,-0.1065]);
let Shape715 = browser.currentScene.createNode("Shape");
let Appearance716 = browser.currentScene.createNode("Appearance");
let Material717 = browser.currentScene.createNode("Material");
Material717.USE = "SITE_COLOR";
material = Material717;

appearance = Appearance716;

let IndexedFaceSet718 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet718.creaseAngle = 0.5;
IndexedFaceSet718.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
let Coordinate719 = browser.currentScene.createNode("Coordinate");
Coordinate719.USE = "points";
coord = Coordinate719;

geometry = IndexedFaceSet718;

HAnimSite714YYY.children = new X3D.MFNode();

HAnimSite714ZZZ.children[0] = Shape715;

HAnimSegment700ZZZ.children[3] = HAnimSite714;

let HAnimSite720 = browser.currentScene.createNode("HAnimSite");
HAnimSite720.DEF = "hanim_r_humeral_medial_epicondyle_pt";
HAnimSite720.name = "r_humeral_medial_epicondyle_pt";
HAnimSite720.translation = new X3D.SFVec3f([-0.168,1.1298,-0.1062]);
let Shape721 = browser.currentScene.createNode("Shape");
let Appearance722 = browser.currentScene.createNode("Appearance");
let Material723 = browser.currentScene.createNode("Material");
Material723.USE = "SITE_COLOR";
material = Material723;

appearance = Appearance722;

let IndexedFaceSet724 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet724.creaseAngle = 0.5;
IndexedFaceSet724.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
let Coordinate725 = browser.currentScene.createNode("Coordinate");
Coordinate725.USE = "points";
coord = Coordinate725;

geometry = IndexedFaceSet724;

HAnimSite720YYY.children = new X3D.MFNode();

HAnimSite720ZZZ.children[0] = Shape721;

HAnimSegment700ZZZ.children[4] = HAnimSite720;

let HAnimSite726 = browser.currentScene.createNode("HAnimSite");
HAnimSite726.DEF = "hanim_r_radiale_pt";
HAnimSite726.name = "r_radiale_pt";
HAnimSite726.translation = new X3D.SFVec3f([-0.213,1.1305,-0.1091]);
let Shape727 = browser.currentScene.createNode("Shape");
let Appearance728 = browser.currentScene.createNode("Appearance");
let Material729 = browser.currentScene.createNode("Material");
Material729.USE = "SITE_COLOR";
material = Material729;

appearance = Appearance728;

let IndexedFaceSet730 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet730.creaseAngle = 0.5;
IndexedFaceSet730.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
let Coordinate731 = browser.currentScene.createNode("Coordinate");
Coordinate731.USE = "points";
coord = Coordinate731;

geometry = IndexedFaceSet730;

HAnimSite726YYY.children = new X3D.MFNode();

HAnimSite726ZZZ.children[0] = Shape727;

HAnimSegment700ZZZ.children[5] = HAnimSite726;

HAnimJoint699YYY.children = new X3D.MFNode();

HAnimJoint699ZZZ.children[0] = HAnimSegment700;

let HAnimJoint732 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint732.DEF = "hanim_r_radiocarpal";
HAnimJoint732.name = "r_radiocarpal";
HAnimJoint732.center = new X3D.SFVec3f([-0.1959,0.8694,-0.0521]);
let HAnimSegment733 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment733.DEF = "hanim_r_carpal";
HAnimSegment733.name = "r_carpal";
let Transform734 = browser.currentScene.createNode("Transform");
Transform734.translation = new X3D.SFVec3f([-0.1959,0.8694,-0.0521]);
let Shape735 = browser.currentScene.createNode("Shape");
let Appearance736 = browser.currentScene.createNode("Appearance");
let Material737 = browser.currentScene.createNode("Material");
Material737.USE = "MIN_COLOR";
material = Material737;

appearance = Appearance736;

let IndexedFaceSet738 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet738.creaseAngle = 0.5;
IndexedFaceSet738.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
let Coordinate739 = browser.currentScene.createNode("Coordinate");
Coordinate739.USE = "points";
coord = Coordinate739;

geometry = IndexedFaceSet738;

Transform734YYY.child = new X3D.undefined();

Transform734ZZZ.child[0] = Shape735;

HAnimSegment733YYY.children = new X3D.MFNode();

HAnimSegment733ZZZ.children[0] = Transform734;

let Transform740 = browser.currentScene.createNode("Transform");
Transform740.DEF = "r_hand_adjust";
Transform740.rotation = new X3D.SFRotation([-0.09024,0.994,-0.0624,1.216]);
Transform740.center = new X3D.SFVec3f([-0.217,0.811,-0.0338]);
HAnimSegment733ZZZ.children[1] = Transform740;

let HAnimSite741 = browser.currentScene.createNode("HAnimSite");
HAnimSite741.DEF = "hanim_r_hand_tip";
HAnimSite741.name = "r_hand_tip";
HAnimSite741.translation = new X3D.SFVec3f([-0.1969,0.6758,-0.0427]);
let Shape742 = browser.currentScene.createNode("Shape");
let Appearance743 = browser.currentScene.createNode("Appearance");
let Material744 = browser.currentScene.createNode("Material");
Material744.USE = "SITE_COLOR";
material = Material744;

appearance = Appearance743;

let IndexedFaceSet745 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet745.creaseAngle = 0.5;
IndexedFaceSet745.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
let Coordinate746 = browser.currentScene.createNode("Coordinate");
Coordinate746.USE = "points";
coord = Coordinate746;

geometry = IndexedFaceSet745;

HAnimSite741YYY.children = new X3D.MFNode();

HAnimSite741ZZZ.children[0] = Shape742;

HAnimSegment733ZZZ.children[2] = HAnimSite741;

let HAnimSite747 = browser.currentScene.createNode("HAnimSite");
HAnimSite747.DEF = "hanim_r_metacarpal_phalanx_2_pt";
HAnimSite747.name = "r_metacarpal_phalanx_2_pt";
HAnimSite747.translation = new X3D.SFVec3f([-0.1977,0.8169,-0.0177]);
let Shape748 = browser.currentScene.createNode("Shape");
let Appearance749 = browser.currentScene.createNode("Appearance");
let Material750 = browser.currentScene.createNode("Material");
Material750.USE = "SITE_COLOR";
material = Material750;

appearance = Appearance749;

let IndexedFaceSet751 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet751.creaseAngle = 0.5;
IndexedFaceSet751.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
let Coordinate752 = browser.currentScene.createNode("Coordinate");
Coordinate752.USE = "points";
coord = Coordinate752;

geometry = IndexedFaceSet751;

HAnimSite747YYY.children = new X3D.MFNode();

HAnimSite747ZZZ.children[0] = Shape748;

HAnimSegment733ZZZ.children[3] = HAnimSite747;

let HAnimSite753 = browser.currentScene.createNode("HAnimSite");
HAnimSite753.DEF = "hanim_r_dactylion_pt";
HAnimSite753.name = "r_dactylion_pt";
HAnimSite753.translation = new X3D.SFVec3f([-0.1941,0.6772,-0.0423]);
let Shape754 = browser.currentScene.createNode("Shape");
let Appearance755 = browser.currentScene.createNode("Appearance");
let Material756 = browser.currentScene.createNode("Material");
Material756.USE = "SITE_COLOR";
material = Material756;

appearance = Appearance755;

let IndexedFaceSet757 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet757.creaseAngle = 0.5;
IndexedFaceSet757.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
let Coordinate758 = browser.currentScene.createNode("Coordinate");
Coordinate758.USE = "points";
coord = Coordinate758;

geometry = IndexedFaceSet757;

HAnimSite753YYY.children = new X3D.MFNode();

HAnimSite753ZZZ.children[0] = Shape754;

HAnimSegment733ZZZ.children[4] = HAnimSite753;

let HAnimSite759 = browser.currentScene.createNode("HAnimSite");
HAnimSite759.DEF = "hanim_r_ulnar_styloid_pt";
HAnimSite759.name = "r_ulnar_styloid_pt";
HAnimSite759.translation = new X3D.SFVec3f([-0.2117,0.8562,-0.0584]);
let Shape760 = browser.currentScene.createNode("Shape");
let Appearance761 = browser.currentScene.createNode("Appearance");
let Material762 = browser.currentScene.createNode("Material");
Material762.USE = "SITE_COLOR";
material = Material762;

appearance = Appearance761;

let IndexedFaceSet763 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet763.creaseAngle = 0.5;
IndexedFaceSet763.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
let Coordinate764 = browser.currentScene.createNode("Coordinate");
Coordinate764.USE = "points";
coord = Coordinate764;

geometry = IndexedFaceSet763;

HAnimSite759YYY.children = new X3D.MFNode();

HAnimSite759ZZZ.children[0] = Shape760;

HAnimSegment733ZZZ.children[5] = HAnimSite759;

let HAnimSite765 = browser.currentScene.createNode("HAnimSite");
HAnimSite765.DEF = "hanim_r_metacarpal_phalanx_5_pt";
HAnimSite765.name = "r_metacarpal_phalanx_5_pt";
HAnimSite765.translation = new X3D.SFVec3f([-0.1929,0.789,-0.1064]);
let Shape766 = browser.currentScene.createNode("Shape");
let Appearance767 = browser.currentScene.createNode("Appearance");
let Material768 = browser.currentScene.createNode("Material");
Material768.USE = "SITE_COLOR";
material = Material768;

appearance = Appearance767;

let IndexedFaceSet769 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet769.creaseAngle = 0.5;
IndexedFaceSet769.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
let Coordinate770 = browser.currentScene.createNode("Coordinate");
Coordinate770.USE = "points";
coord = Coordinate770;

geometry = IndexedFaceSet769;

HAnimSite765YYY.children = new X3D.MFNode();

HAnimSite765ZZZ.children[0] = Shape766;

HAnimSegment733ZZZ.children[6] = HAnimSite765;

HAnimJoint732YYY.children = new X3D.MFNode();

HAnimJoint732ZZZ.children[0] = HAnimSegment733;

HAnimJoint699ZZZ.children[1] = HAnimJoint732;

HAnimJoint684ZZZ.children[1] = HAnimJoint699;

HAnimJoint521ZZZ.children[2] = HAnimJoint684;

let HAnimJoint771 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint771.DEF = "hanim_vc7";
HAnimJoint771.name = "vc7";
HAnimJoint771.center = new X3D.SFVec3f([0.0066,1.5132,-0.0301]);
let HAnimSegment772 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment772.DEF = "hanim_c7";
HAnimSegment772.name = "c7";
let Transform773 = browser.currentScene.createNode("Transform");
Transform773.translation = new X3D.SFVec3f([0.0066,1.5132,-0.0301]);
let Shape774 = browser.currentScene.createNode("Shape");
let Appearance775 = browser.currentScene.createNode("Appearance");
let Material776 = browser.currentScene.createNode("Material");
Material776.USE = "SPINAL_COLOR";
material = Material776;

appearance = Appearance775;

let IndexedFaceSet777 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet777.creaseAngle = 0.5;
IndexedFaceSet777.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
let Coordinate778 = browser.currentScene.createNode("Coordinate");
Coordinate778.USE = "points";
coord = Coordinate778;

geometry = IndexedFaceSet777;

Transform773YYY.child = new X3D.undefined();

Transform773ZZZ.child[0] = Shape774;

HAnimSegment772YYY.children = new X3D.MFNode();

HAnimSegment772ZZZ.children[0] = Transform773;

HAnimJoint771YYY.children = new X3D.MFNode();

HAnimJoint771ZZZ.children[0] = HAnimSegment772;

let HAnimJoint779 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint779.DEF = "hanim_vc6";
HAnimJoint779.name = "vc6";
HAnimJoint779.center = new X3D.SFVec3f([0.0066,1.5357,-0.0143]);
let HAnimSegment780 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment780.DEF = "hanim_c6";
HAnimSegment780.name = "c6";
let Transform781 = browser.currentScene.createNode("Transform");
Transform781.translation = new X3D.SFVec3f([0.0066,1.5357,-0.0143]);
let Shape782 = browser.currentScene.createNode("Shape");
let Appearance783 = browser.currentScene.createNode("Appearance");
let Material784 = browser.currentScene.createNode("Material");
Material784.USE = "SPINAL_COLOR";
material = Material784;

appearance = Appearance783;

let IndexedFaceSet785 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet785.creaseAngle = 0.5;
IndexedFaceSet785.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
let Coordinate786 = browser.currentScene.createNode("Coordinate");
Coordinate786.USE = "points";
coord = Coordinate786;

geometry = IndexedFaceSet785;

Transform781YYY.child = new X3D.undefined();

Transform781ZZZ.child[0] = Shape782;

HAnimSegment780YYY.children = new X3D.MFNode();

HAnimSegment780ZZZ.children[0] = Transform781;

HAnimJoint779YYY.children = new X3D.MFNode();

HAnimJoint779ZZZ.children[0] = HAnimSegment780;

let HAnimJoint787 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint787.DEF = "hanim_vc5";
HAnimJoint787.name = "vc5";
HAnimJoint787.center = new X3D.SFVec3f([0.0066,1.552,-0.0082]);
let HAnimSegment788 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment788.DEF = "hanim_c5";
HAnimSegment788.name = "c5";
let Transform789 = browser.currentScene.createNode("Transform");
Transform789.translation = new X3D.SFVec3f([0.0066,1.552,-0.0082]);
let Shape790 = browser.currentScene.createNode("Shape");
let Appearance791 = browser.currentScene.createNode("Appearance");
let Material792 = browser.currentScene.createNode("Material");
Material792.USE = "SPINAL_COLOR";
material = Material792;

appearance = Appearance791;

let IndexedFaceSet793 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet793.creaseAngle = 0.5;
IndexedFaceSet793.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
let Coordinate794 = browser.currentScene.createNode("Coordinate");
Coordinate794.USE = "points";
coord = Coordinate794;

geometry = IndexedFaceSet793;

Transform789YYY.child = new X3D.undefined();

Transform789ZZZ.child[0] = Shape790;

HAnimSegment788YYY.children = new X3D.MFNode();

HAnimSegment788ZZZ.children[0] = Transform789;

HAnimJoint787YYY.children = new X3D.MFNode();

HAnimJoint787ZZZ.children[0] = HAnimSegment788;

let HAnimJoint795 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint795.DEF = "hanim_vc4";
HAnimJoint795.name = "vc4";
HAnimJoint795.center = new X3D.SFVec3f([0.0066,1.5662,-0.0084]);
let HAnimSegment796 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment796.DEF = "hanim_c4";
HAnimSegment796.name = "c4";
let Transform797 = browser.currentScene.createNode("Transform");
Transform797.translation = new X3D.SFVec3f([0.0066,1.5662,-0.0084]);
let Shape798 = browser.currentScene.createNode("Shape");
let Appearance799 = browser.currentScene.createNode("Appearance");
let Material800 = browser.currentScene.createNode("Material");
Material800.USE = "SPINAL_COLOR";
material = Material800;

appearance = Appearance799;

let IndexedFaceSet801 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet801.creaseAngle = 0.5;
IndexedFaceSet801.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
let Coordinate802 = browser.currentScene.createNode("Coordinate");
Coordinate802.USE = "points";
coord = Coordinate802;

geometry = IndexedFaceSet801;

Transform797YYY.child = new X3D.undefined();

Transform797ZZZ.child[0] = Shape798;

HAnimSegment796YYY.children = new X3D.MFNode();

HAnimSegment796ZZZ.children[0] = Transform797;

HAnimJoint795YYY.children = new X3D.MFNode();

HAnimJoint795ZZZ.children[0] = HAnimSegment796;

let HAnimJoint803 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint803.DEF = "hanim_vc3";
HAnimJoint803.name = "vc3";
HAnimJoint803.center = new X3D.SFVec3f([0.0066,1.58,-0.0103]);
let HAnimSegment804 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment804.DEF = "hanim_c3";
HAnimSegment804.name = "c3";
let Transform805 = browser.currentScene.createNode("Transform");
Transform805.translation = new X3D.SFVec3f([0.0066,1.58,-0.0103]);
let Shape806 = browser.currentScene.createNode("Shape");
let Appearance807 = browser.currentScene.createNode("Appearance");
let Material808 = browser.currentScene.createNode("Material");
Material808.USE = "SPINAL_COLOR";
material = Material808;

appearance = Appearance807;

let IndexedFaceSet809 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet809.creaseAngle = 0.5;
IndexedFaceSet809.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
let Coordinate810 = browser.currentScene.createNode("Coordinate");
Coordinate810.USE = "points";
coord = Coordinate810;

geometry = IndexedFaceSet809;

Transform805YYY.child = new X3D.undefined();

Transform805ZZZ.child[0] = Shape806;

HAnimSegment804YYY.children = new X3D.MFNode();

HAnimSegment804ZZZ.children[0] = Transform805;

HAnimJoint803YYY.children = new X3D.MFNode();

HAnimJoint803ZZZ.children[0] = HAnimSegment804;

let HAnimJoint811 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint811.DEF = "hanim_vc2";
HAnimJoint811.name = "vc2";
HAnimJoint811.center = new X3D.SFVec3f([0.0066,1.5928,-0.0103]);
let HAnimSegment812 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment812.DEF = "hanim_c2";
HAnimSegment812.name = "c2";
let Transform813 = browser.currentScene.createNode("Transform");
Transform813.translation = new X3D.SFVec3f([0.0066,1.5928,-0.0103]);
let Shape814 = browser.currentScene.createNode("Shape");
let Appearance815 = browser.currentScene.createNode("Appearance");
let Material816 = browser.currentScene.createNode("Material");
Material816.USE = "REC_SPINAL_COLOR";
material = Material816;

appearance = Appearance815;

let IndexedFaceSet817 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet817.creaseAngle = 0.5;
IndexedFaceSet817.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
let Coordinate818 = browser.currentScene.createNode("Coordinate");
Coordinate818.USE = "points";
coord = Coordinate818;

geometry = IndexedFaceSet817;

Transform813YYY.child = new X3D.undefined();

Transform813ZZZ.child[0] = Shape814;

HAnimSegment812YYY.children = new X3D.MFNode();

HAnimSegment812ZZZ.children[0] = Transform813;

HAnimJoint811YYY.children = new X3D.MFNode();

HAnimJoint811ZZZ.children[0] = HAnimSegment812;

let HAnimJoint819 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint819.DEF = "hanim_vc1";
HAnimJoint819.name = "vc1";
HAnimJoint819.center = new X3D.SFVec3f([0.0066,1.6144,-0.0034]);
let HAnimSegment820 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment820.DEF = "hanim_c1";
HAnimSegment820.name = "c1";
let Transform821 = browser.currentScene.createNode("Transform");
Transform821.translation = new X3D.SFVec3f([0.0066,1.6144,-0.0034]);
let Shape822 = browser.currentScene.createNode("Shape");
let Appearance823 = browser.currentScene.createNode("Appearance");
let Material824 = browser.currentScene.createNode("Material");
Material824.USE = "SPINAL_COLOR";
material = Material824;

appearance = Appearance823;

let IndexedFaceSet825 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet825.creaseAngle = 0.5;
IndexedFaceSet825.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
let Coordinate826 = browser.currentScene.createNode("Coordinate");
Coordinate826.USE = "points";
coord = Coordinate826;

geometry = IndexedFaceSet825;

Transform821YYY.child = new X3D.undefined();

Transform821ZZZ.child[0] = Shape822;

HAnimSegment820YYY.children = new X3D.MFNode();

HAnimSegment820ZZZ.children[0] = Transform821;

HAnimJoint819YYY.children = new X3D.MFNode();

HAnimJoint819ZZZ.children[0] = HAnimSegment820;

let HAnimJoint827 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint827.DEF = "hanim_skullbase";
HAnimJoint827.name = "skullbase";
HAnimJoint827.center = new X3D.SFVec3f([0.0044,1.6209,0.0236]);
let HAnimSegment828 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment828.DEF = "hanim_skull";
HAnimSegment828.name = "skull";
let Transform829 = browser.currentScene.createNode("Transform");
Transform829.translation = new X3D.SFVec3f([0.0044,1.6209,0.0236]);
let Shape830 = browser.currentScene.createNode("Shape");
let Appearance831 = browser.currentScene.createNode("Appearance");
let Material832 = browser.currentScene.createNode("Material");
Material832.USE = "MIN_COLOR";
material = Material832;

appearance = Appearance831;

let IndexedFaceSet833 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet833.creaseAngle = 0.5;
IndexedFaceSet833.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
let Coordinate834 = browser.currentScene.createNode("Coordinate");
Coordinate834.USE = "points";
coord = Coordinate834;

geometry = IndexedFaceSet833;

Transform829YYY.child = new X3D.undefined();

Transform829ZZZ.child[0] = Shape830;

HAnimSegment828YYY.children = new X3D.MFNode();

HAnimSegment828ZZZ.children[0] = Transform829;

let HAnimSite835 = browser.currentScene.createNode("HAnimSite");
HAnimSite835.DEF = "hanim_skull_vertex_tip";
HAnimSite835.name = "skull_vertex_tip";
HAnimSite835.translation = new X3D.SFVec3f([0.005,1.7504,0.0055]);
let Shape836 = browser.currentScene.createNode("Shape");
let Appearance837 = browser.currentScene.createNode("Appearance");
let Material838 = browser.currentScene.createNode("Material");
Material838.USE = "SITE_COLOR";
material = Material838;

appearance = Appearance837;

let IndexedFaceSet839 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet839.creaseAngle = 0.5;
IndexedFaceSet839.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
let Coordinate840 = browser.currentScene.createNode("Coordinate");
Coordinate840.USE = "points";
coord = Coordinate840;

geometry = IndexedFaceSet839;

HAnimSite835YYY.children = new X3D.MFNode();

HAnimSite835ZZZ.children[0] = Shape836;

HAnimSegment828ZZZ.children[1] = HAnimSite835;

let HAnimSite841 = browser.currentScene.createNode("HAnimSite");
HAnimSite841.DEF = "hanim_sellion_pt";
HAnimSite841.name = "sellion_pt";
HAnimSite841.translation = new X3D.SFVec3f([0.0058,1.6316,0.0852]);
let Shape842 = browser.currentScene.createNode("Shape");
let Appearance843 = browser.currentScene.createNode("Appearance");
let Material844 = browser.currentScene.createNode("Material");
Material844.USE = "SITE_COLOR";
material = Material844;

appearance = Appearance843;

let IndexedFaceSet845 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet845.creaseAngle = 0.5;
IndexedFaceSet845.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
let Coordinate846 = browser.currentScene.createNode("Coordinate");
Coordinate846.USE = "points";
coord = Coordinate846;

geometry = IndexedFaceSet845;

HAnimSite841YYY.children = new X3D.MFNode();

HAnimSite841ZZZ.children[0] = Shape842;

HAnimSegment828ZZZ.children[2] = HAnimSite841;

let HAnimSite847 = browser.currentScene.createNode("HAnimSite");
HAnimSite847.DEF = "hanim_r_infraorbitale_pt";
HAnimSite847.name = "r_infraorbitale_pt";
HAnimSite847.translation = new X3D.SFVec3f([-0.0237,1.6171,0.0752]);
let Shape848 = browser.currentScene.createNode("Shape");
let Appearance849 = browser.currentScene.createNode("Appearance");
let Material850 = browser.currentScene.createNode("Material");
Material850.USE = "SITE_COLOR";
material = Material850;

appearance = Appearance849;

let IndexedFaceSet851 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet851.creaseAngle = 0.5;
IndexedFaceSet851.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
let Coordinate852 = browser.currentScene.createNode("Coordinate");
Coordinate852.USE = "points";
coord = Coordinate852;

geometry = IndexedFaceSet851;

HAnimSite847YYY.children = new X3D.MFNode();

HAnimSite847ZZZ.children[0] = Shape848;

HAnimSegment828ZZZ.children[3] = HAnimSite847;

let HAnimSite853 = browser.currentScene.createNode("HAnimSite");
HAnimSite853.DEF = "hanim_l_infraorbitale_pt";
HAnimSite853.name = "l_infraorbitale_pt";
HAnimSite853.translation = new X3D.SFVec3f([0.0341,1.6171,0.0752]);
let Shape854 = browser.currentScene.createNode("Shape");
let Appearance855 = browser.currentScene.createNode("Appearance");
let Material856 = browser.currentScene.createNode("Material");
Material856.USE = "SITE_COLOR";
material = Material856;

appearance = Appearance855;

let IndexedFaceSet857 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet857.creaseAngle = 0.5;
IndexedFaceSet857.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
let Coordinate858 = browser.currentScene.createNode("Coordinate");
Coordinate858.USE = "points";
coord = Coordinate858;

geometry = IndexedFaceSet857;

HAnimSite853YYY.children = new X3D.MFNode();

HAnimSite853ZZZ.children[0] = Shape854;

HAnimSegment828ZZZ.children[4] = HAnimSite853;

let HAnimSite859 = browser.currentScene.createNode("HAnimSite");
HAnimSite859.DEF = "hanim_supramenton_pt";
HAnimSite859.name = "supramenton_pt";
HAnimSite859.translation = new X3D.SFVec3f([0.0061,1.541,0.0805]);
let Shape860 = browser.currentScene.createNode("Shape");
let Appearance861 = browser.currentScene.createNode("Appearance");
let Material862 = browser.currentScene.createNode("Material");
Material862.USE = "SITE_COLOR";
material = Material862;

appearance = Appearance861;

let IndexedFaceSet863 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet863.creaseAngle = 0.5;
IndexedFaceSet863.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
let Coordinate864 = browser.currentScene.createNode("Coordinate");
Coordinate864.USE = "points";
coord = Coordinate864;

geometry = IndexedFaceSet863;

HAnimSite859YYY.children = new X3D.MFNode();

HAnimSite859ZZZ.children[0] = Shape860;

HAnimSegment828ZZZ.children[5] = HAnimSite859;

let HAnimSite865 = browser.currentScene.createNode("HAnimSite");
HAnimSite865.DEF = "hanim_r_tragion_pt";
HAnimSite865.name = "r_tragion_pt";
HAnimSite865.translation = new X3D.SFVec3f([-0.0646,1.6347,0.0302]);
let Shape866 = browser.currentScene.createNode("Shape");
let Appearance867 = browser.currentScene.createNode("Appearance");
let Material868 = browser.currentScene.createNode("Material");
Material868.USE = "SITE_COLOR";
material = Material868;

appearance = Appearance867;

let IndexedFaceSet869 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet869.creaseAngle = 0.5;
IndexedFaceSet869.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
let Coordinate870 = browser.currentScene.createNode("Coordinate");
Coordinate870.USE = "points";
coord = Coordinate870;

geometry = IndexedFaceSet869;

HAnimSite865YYY.children = new X3D.MFNode();

HAnimSite865ZZZ.children[0] = Shape866;

HAnimSegment828ZZZ.children[6] = HAnimSite865;

let HAnimSite871 = browser.currentScene.createNode("HAnimSite");
HAnimSite871.DEF = "hanim_r_gonion_pt";
HAnimSite871.name = "r_gonion_pt";
HAnimSite871.translation = new X3D.SFVec3f([-0.052,1.5529,0.0347]);
let Shape872 = browser.currentScene.createNode("Shape");
let Appearance873 = browser.currentScene.createNode("Appearance");
let Material874 = browser.currentScene.createNode("Material");
Material874.USE = "SITE_COLOR";
material = Material874;

appearance = Appearance873;

let IndexedFaceSet875 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet875.creaseAngle = 0.5;
IndexedFaceSet875.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
let Coordinate876 = browser.currentScene.createNode("Coordinate");
Coordinate876.USE = "points";
coord = Coordinate876;

geometry = IndexedFaceSet875;

HAnimSite871YYY.children = new X3D.MFNode();

HAnimSite871ZZZ.children[0] = Shape872;

HAnimSegment828ZZZ.children[7] = HAnimSite871;

let HAnimSite877 = browser.currentScene.createNode("HAnimSite");
HAnimSite877.DEF = "hanim_l_tragion_pt";
HAnimSite877.name = "l_tragion_pt";
HAnimSite877.translation = new X3D.SFVec3f([0.0739,1.6348,0.0282]);
let Shape878 = browser.currentScene.createNode("Shape");
let Appearance879 = browser.currentScene.createNode("Appearance");
let Material880 = browser.currentScene.createNode("Material");
Material880.USE = "SITE_COLOR";
material = Material880;

appearance = Appearance879;

let IndexedFaceSet881 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet881.creaseAngle = 0.5;
IndexedFaceSet881.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
let Coordinate882 = browser.currentScene.createNode("Coordinate");
Coordinate882.USE = "points";
coord = Coordinate882;

geometry = IndexedFaceSet881;

HAnimSite877YYY.children = new X3D.MFNode();

HAnimSite877ZZZ.children[0] = Shape878;

HAnimSegment828ZZZ.children[8] = HAnimSite877;

let HAnimSite883 = browser.currentScene.createNode("HAnimSite");
HAnimSite883.DEF = "hanim_l_gonion_pt";
HAnimSite883.name = "l_gonion_pt";
HAnimSite883.translation = new X3D.SFVec3f([0.0631,1.553,0.033]);
let Shape884 = browser.currentScene.createNode("Shape");
let Appearance885 = browser.currentScene.createNode("Appearance");
let Material886 = browser.currentScene.createNode("Material");
Material886.USE = "SITE_COLOR";
material = Material886;

appearance = Appearance885;

let IndexedFaceSet887 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet887.creaseAngle = 0.5;
IndexedFaceSet887.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
let Coordinate888 = browser.currentScene.createNode("Coordinate");
Coordinate888.USE = "points";
coord = Coordinate888;

geometry = IndexedFaceSet887;

HAnimSite883YYY.children = new X3D.MFNode();

HAnimSite883ZZZ.children[0] = Shape884;

HAnimSegment828ZZZ.children[9] = HAnimSite883;

let HAnimSite889 = browser.currentScene.createNode("HAnimSite");
HAnimSite889.DEF = "hanim_nuchale_pt";
HAnimSite889.name = "nuchale_pt";
HAnimSite889.translation = new X3D.SFVec3f([0.0039,1.5972,-0.0796]);
let Shape890 = browser.currentScene.createNode("Shape");
let Appearance891 = browser.currentScene.createNode("Appearance");
let Material892 = browser.currentScene.createNode("Material");
Material892.USE = "SITE_COLOR";
material = Material892;

appearance = Appearance891;

let IndexedFaceSet893 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet893.creaseAngle = 0.5;
IndexedFaceSet893.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
let Coordinate894 = browser.currentScene.createNode("Coordinate");
Coordinate894.USE = "points";
coord = Coordinate894;

geometry = IndexedFaceSet893;

HAnimSite889YYY.children = new X3D.MFNode();

HAnimSite889ZZZ.children[0] = Shape890;

HAnimSegment828ZZZ.children[10] = HAnimSite889;

HAnimJoint827YYY.children = new X3D.MFNode();

HAnimJoint827ZZZ.children[0] = HAnimSegment828;

HAnimJoint819ZZZ.children[1] = HAnimJoint827;

HAnimJoint811ZZZ.children[1] = HAnimJoint819;

HAnimJoint803ZZZ.children[1] = HAnimJoint811;

HAnimJoint795ZZZ.children[1] = HAnimJoint803;

HAnimJoint787ZZZ.children[1] = HAnimJoint795;

HAnimJoint779ZZZ.children[1] = HAnimJoint787;

HAnimJoint771ZZZ.children[1] = HAnimJoint779;

HAnimJoint521ZZZ.children[3] = HAnimJoint771;

HAnimJoint513ZZZ.children[1] = HAnimJoint521;

HAnimJoint505ZZZ.children[1] = HAnimJoint513;

HAnimJoint497ZZZ.children[1] = HAnimJoint505;

HAnimJoint489ZZZ.children[1] = HAnimJoint497;

HAnimJoint481ZZZ.children[1] = HAnimJoint489;

HAnimJoint473ZZZ.children[1] = HAnimJoint481;

HAnimJoint465ZZZ.children[1] = HAnimJoint473;

HAnimJoint457ZZZ.children[1] = HAnimJoint465;

HAnimJoint449ZZZ.children[1] = HAnimJoint457;

HAnimJoint441ZZZ.children[1] = HAnimJoint449;

HAnimJoint433ZZZ.children[1] = HAnimJoint441;

HAnimJoint425ZZZ.children[1] = HAnimJoint433;

HAnimJoint417ZZZ.children[1] = HAnimJoint425;

HAnimJoint409ZZZ.children[1] = HAnimJoint417;

HAnimJoint401ZZZ.children[1] = HAnimJoint409;

HAnimJoint393ZZZ.children[1] = HAnimJoint401;

HAnimJoint98ZZZ.children[2] = HAnimJoint393;

joints[1] = HAnimJoint98;

let HAnimJoint895 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint895.USE = "hanim_humanoid_root";
joints[2] = HAnimJoint895;

let HAnimJoint896 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint896.USE = "hanim_sacroiliac";
joints[3] = HAnimJoint896;

let HAnimJoint897 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint897.USE = "hanim_vl1";
joints[4] = HAnimJoint897;

let HAnimJoint898 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint898.USE = "hanim_vc4";
joints[5] = HAnimJoint898;

let HAnimJoint899 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint899.USE = "hanim_skullbase";
joints[6] = HAnimJoint899;

let HAnimJoint900 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint900.USE = "hanim_vl5";
joints[7] = HAnimJoint900;

let HAnimJoint901 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint901.USE = "hanim_vl4";
joints[8] = HAnimJoint901;

let HAnimJoint902 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint902.USE = "hanim_vl3";
joints[9] = HAnimJoint902;

let HAnimJoint903 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint903.USE = "hanim_vl2";
joints[10] = HAnimJoint903;

let HAnimJoint904 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint904.USE = "hanim_vt12";
joints[11] = HAnimJoint904;

let HAnimJoint905 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint905.USE = "hanim_vt11";
joints[12] = HAnimJoint905;

let HAnimJoint906 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint906.USE = "hanim_vt10";
joints[13] = HAnimJoint906;

let HAnimJoint907 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint907.USE = "hanim_vt9";
joints[14] = HAnimJoint907;

let HAnimJoint908 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint908.USE = "hanim_vt8";
joints[15] = HAnimJoint908;

let HAnimJoint909 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint909.USE = "hanim_vt7";
joints[16] = HAnimJoint909;

let HAnimJoint910 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint910.USE = "hanim_vt6";
joints[17] = HAnimJoint910;

let HAnimJoint911 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint911.USE = "hanim_vt5";
joints[18] = HAnimJoint911;

let HAnimJoint912 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint912.USE = "hanim_vt4";
joints[19] = HAnimJoint912;

let HAnimJoint913 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint913.USE = "hanim_vt3";
joints[20] = HAnimJoint913;

let HAnimJoint914 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint914.USE = "hanim_vt2";
joints[21] = HAnimJoint914;

let HAnimJoint915 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint915.USE = "hanim_vt1";
joints[22] = HAnimJoint915;

let HAnimJoint916 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint916.USE = "hanim_vc7";
joints[23] = HAnimJoint916;

let HAnimJoint917 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint917.USE = "hanim_vc6";
joints[24] = HAnimJoint917;

let HAnimJoint918 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint918.USE = "hanim_vc5";
joints[25] = HAnimJoint918;

let HAnimJoint919 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint919.USE = "hanim_vc3";
joints[26] = HAnimJoint919;

let HAnimJoint920 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint920.USE = "hanim_vc2";
joints[27] = HAnimJoint920;

let HAnimJoint921 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint921.USE = "hanim_vc1";
joints[28] = HAnimJoint921;

let HAnimJoint922 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint922.USE = "hanim_l_carpal_distal_interphalangeal_2";
joints[29] = HAnimJoint922;

let HAnimJoint923 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint923.USE = "hanim_l_carpal_interphalangeal_1";
joints[30] = HAnimJoint923;

let HAnimJoint924 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint924.USE = "hanim_l_carpal_proximal_interphalangeal_2";
joints[31] = HAnimJoint924;

let HAnimJoint925 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint925.USE = "hanim_l_carpometacarpal_1";
joints[32] = HAnimJoint925;

let HAnimJoint926 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint926.USE = "hanim_l_carpometacarpal_2";
joints[33] = HAnimJoint926;

let HAnimJoint927 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint927.USE = "hanim_l_elbow";
joints[34] = HAnimJoint927;

let HAnimJoint928 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint928.USE = "hanim_r_elbow";
joints[35] = HAnimJoint928;

let HAnimJoint929 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint929.USE = "hanim_l_hip";
joints[36] = HAnimJoint929;

let HAnimJoint930 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint930.USE = "hanim_r_hip";
joints[37] = HAnimJoint930;

let HAnimJoint931 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint931.USE = "hanim_l_knee";
joints[38] = HAnimJoint931;

let HAnimJoint932 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint932.USE = "hanim_r_knee";
joints[39] = HAnimJoint932;

let HAnimJoint933 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint933.USE = "hanim_l_metacarpophalangeal_1";
joints[40] = HAnimJoint933;

let HAnimJoint934 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint934.USE = "hanim_l_metacarpophalangeal_2";
joints[41] = HAnimJoint934;

let HAnimJoint935 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint935.USE = "hanim_l_metatarsophalangeal_2";
joints[42] = HAnimJoint935;

let HAnimJoint936 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint936.USE = "hanim_r_metatarsophalangeal_2";
joints[43] = HAnimJoint936;

let HAnimJoint937 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint937.USE = "hanim_l_radiocarpal";
joints[44] = HAnimJoint937;

let HAnimJoint938 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint938.USE = "hanim_r_radiocarpal";
joints[45] = HAnimJoint938;

let HAnimJoint939 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint939.USE = "hanim_l_shoulder";
joints[46] = HAnimJoint939;

let HAnimJoint940 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint940.USE = "hanim_r_shoulder";
joints[47] = HAnimJoint940;

let HAnimJoint941 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint941.USE = "hanim_l_talocrural";
joints[48] = HAnimJoint941;

let HAnimJoint942 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint942.USE = "hanim_r_talocrural";
joints[49] = HAnimJoint942;

let HAnimJoint943 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint943.USE = "hanim_l_tarsal_distal_interphalangeal_2";
joints[50] = HAnimJoint943;

let HAnimJoint944 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint944.USE = "hanim_l_tarsometatarsal_2";
joints[51] = HAnimJoint944;

let HAnimSegment945 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment945.USE = "hanim_pelvis";
segments[52] = HAnimSegment945;

let HAnimSegment946 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment946.USE = "hanim_c7";
segments[53] = HAnimSegment946;

let HAnimSegment947 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment947.USE = "hanim_c4";
segments[54] = HAnimSegment947;

let HAnimSegment948 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment948.USE = "hanim_skull";
segments[55] = HAnimSegment948;

let HAnimSegment949 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment949.USE = "hanim_sacrum";
segments[56] = HAnimSegment949;

let HAnimSegment950 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment950.USE = "hanim_l5";
segments[57] = HAnimSegment950;

let HAnimSegment951 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment951.USE = "hanim_l4";
segments[58] = HAnimSegment951;

let HAnimSegment952 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment952.USE = "hanim_l3";
segments[59] = HAnimSegment952;

let HAnimSegment953 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment953.USE = "hanim_l2";
segments[60] = HAnimSegment953;

let HAnimSegment954 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment954.USE = "hanim_l1";
segments[61] = HAnimSegment954;

let HAnimSegment955 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment955.USE = "hanim_t12";
segments[62] = HAnimSegment955;

let HAnimSegment956 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment956.USE = "hanim_t11";
segments[63] = HAnimSegment956;

let HAnimSegment957 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment957.USE = "hanim_t10";
segments[64] = HAnimSegment957;

let HAnimSegment958 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment958.USE = "hanim_t9";
segments[65] = HAnimSegment958;

let HAnimSegment959 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment959.USE = "hanim_t8";
segments[66] = HAnimSegment959;

let HAnimSegment960 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment960.USE = "hanim_t7";
segments[67] = HAnimSegment960;

let HAnimSegment961 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment961.USE = "hanim_t6";
segments[68] = HAnimSegment961;

let HAnimSegment962 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment962.USE = "hanim_t5";
segments[69] = HAnimSegment962;

let HAnimSegment963 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment963.USE = "hanim_t4";
segments[70] = HAnimSegment963;

let HAnimSegment964 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment964.USE = "hanim_t3";
segments[71] = HAnimSegment964;

let HAnimSegment965 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment965.USE = "hanim_t2";
segments[72] = HAnimSegment965;

let HAnimSegment966 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment966.USE = "hanim_t1";
segments[73] = HAnimSegment966;

let HAnimSegment967 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment967.USE = "hanim_c6";
segments[74] = HAnimSegment967;

let HAnimSegment968 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment968.USE = "hanim_c5";
segments[75] = HAnimSegment968;

let HAnimSegment969 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment969.USE = "hanim_c3";
segments[76] = HAnimSegment969;

let HAnimSegment970 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment970.USE = "hanim_c2";
segments[77] = HAnimSegment970;

let HAnimSegment971 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment971.USE = "hanim_c1";
segments[78] = HAnimSegment971;

let HAnimSegment972 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment972.USE = "hanim_l_calf";
segments[79] = HAnimSegment972;

let HAnimSegment973 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment973.USE = "hanim_r_calf";
segments[80] = HAnimSegment973;

let HAnimSegment974 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment974.USE = "hanim_l_carpal";
segments[81] = HAnimSegment974;

let HAnimSegment975 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment975.USE = "hanim_r_carpal";
segments[82] = HAnimSegment975;

let HAnimSegment976 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment976.USE = "hanim_l_carpal_distal_phalanx_1";
segments[83] = HAnimSegment976;

let HAnimSegment977 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment977.USE = "hanim_l_carpal_distal_phalanx_2";
segments[84] = HAnimSegment977;

let HAnimSegment978 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment978.USE = "hanim_l_carpal_middle_phalanx_2";
segments[85] = HAnimSegment978;

let HAnimSegment979 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment979.USE = "hanim_l_carpal_proximal_phalanx_1";
segments[86] = HAnimSegment979;

let HAnimSegment980 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment980.USE = "hanim_l_carpal_proximal_phalanx_2";
segments[87] = HAnimSegment980;

let HAnimSegment981 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment981.USE = "hanim_l_forearm";
segments[88] = HAnimSegment981;

let HAnimSegment982 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment982.USE = "hanim_r_forearm";
segments[89] = HAnimSegment982;

let HAnimSegment983 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment983.USE = "hanim_l_metacarpal_1";
segments[90] = HAnimSegment983;

let HAnimSegment984 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment984.USE = "hanim_l_metacarpal_2";
segments[91] = HAnimSegment984;

let HAnimSegment985 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment985.USE = "hanim_l_metatarsal_2";
segments[92] = HAnimSegment985;

let HAnimSegment986 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment986.USE = "hanim_l_talus";
segments[93] = HAnimSegment986;

let HAnimSegment987 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment987.USE = "hanim_r_talus";
segments[94] = HAnimSegment987;

let HAnimSegment988 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment988.USE = "hanim_l_tarsal_distal_phalanx_2";
segments[95] = HAnimSegment988;

let HAnimSegment989 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment989.USE = "hanim_l_tarsal_proximal_phalanx_2";
segments[96] = HAnimSegment989;

let HAnimSegment990 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment990.USE = "hanim_r_tarsal_proximal_phalanx_2";
segments[97] = HAnimSegment990;

let HAnimSegment991 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment991.USE = "hanim_l_thigh";
segments[98] = HAnimSegment991;

let HAnimSegment992 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment992.USE = "hanim_r_thigh";
segments[99] = HAnimSegment992;

let HAnimSegment993 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment993.USE = "hanim_l_upperarm";
segments[100] = HAnimSegment993;

let HAnimSegment994 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment994.USE = "hanim_r_upperarm";
segments[101] = HAnimSegment994;

let HAnimSite995 = browser.currentScene.createNode("HAnimSite");
HAnimSite995.USE = "hanim_crotch_pt";
viewpoints[102] = HAnimSite995;

let HAnimSite996 = browser.currentScene.createNode("HAnimSite");
HAnimSite996.USE = "hanim_skull_vertex_tip";
viewpoints[103] = HAnimSite996;

let HAnimSite997 = browser.currentScene.createNode("HAnimSite");
HAnimSite997.USE = "hanim_sellion_pt";
viewpoints[104] = HAnimSite997;

let HAnimSite998 = browser.currentScene.createNode("HAnimSite");
HAnimSite998.USE = "hanim_supramenton_pt";
viewpoints[105] = HAnimSite998;

let HAnimSite999 = browser.currentScene.createNode("HAnimSite");
HAnimSite999.USE = "hanim_nuchale_pt";
viewpoints[106] = HAnimSite999;

let HAnimSite1000 = browser.currentScene.createNode("HAnimSite");
HAnimSite1000.USE = "hanim_r_asis_pt";
viewpoints[107] = HAnimSite1000;

let HAnimSite1001 = browser.currentScene.createNode("HAnimSite");
HAnimSite1001.USE = "hanim_l_asis_pt";
viewpoints[108] = HAnimSite1001;

let HAnimSite1002 = browser.currentScene.createNode("HAnimSite");
HAnimSite1002.USE = "hanim_l_calcaneus_posterior_pt";
viewpoints[109] = HAnimSite1002;

let HAnimSite1003 = browser.currentScene.createNode("HAnimSite");
HAnimSite1003.USE = "hanim_r_calcaneus_posterior_pt";
viewpoints[110] = HAnimSite1003;

let HAnimSite1004 = browser.currentScene.createNode("HAnimSite");
HAnimSite1004.USE = "hanim_l_carpal_distal_phalanx_1_tip";
viewpoints[111] = HAnimSite1004;

let HAnimSite1005 = browser.currentScene.createNode("HAnimSite");
HAnimSite1005.USE = "hanim_l_carpal_distal_phalanx_2_tip";
viewpoints[112] = HAnimSite1005;

let HAnimSite1006 = browser.currentScene.createNode("HAnimSite");
HAnimSite1006.USE = "hanim_l_dactylion_pt";
viewpoints[113] = HAnimSite1006;

let HAnimSite1007 = browser.currentScene.createNode("HAnimSite");
HAnimSite1007.USE = "hanim_r_dactylion_pt";
viewpoints[114] = HAnimSite1007;

let HAnimSite1008 = browser.currentScene.createNode("HAnimSite");
HAnimSite1008.USE = "hanim_l_femoral_lateral_epicondyle_pt";
viewpoints[115] = HAnimSite1008;

let HAnimSite1009 = browser.currentScene.createNode("HAnimSite");
HAnimSite1009.USE = "hanim_r_femoral_lateral_epicondyle_pt";
viewpoints[116] = HAnimSite1009;

let HAnimSite1010 = browser.currentScene.createNode("HAnimSite");
HAnimSite1010.USE = "hanim_l_femoral_medial_epicondyle_pt";
viewpoints[117] = HAnimSite1010;

let HAnimSite1011 = browser.currentScene.createNode("HAnimSite");
HAnimSite1011.USE = "hanim_r_femoral_medial_epicondyle_pt";
viewpoints[118] = HAnimSite1011;

let HAnimSite1012 = browser.currentScene.createNode("HAnimSite");
HAnimSite1012.USE = "hanim_l_forefoot_tip";
viewpoints[119] = HAnimSite1012;

let HAnimSite1013 = browser.currentScene.createNode("HAnimSite");
HAnimSite1013.USE = "hanim_r_gonion_pt";
viewpoints[120] = HAnimSite1013;

let HAnimSite1014 = browser.currentScene.createNode("HAnimSite");
HAnimSite1014.USE = "hanim_l_gonion_pt";
viewpoints[121] = HAnimSite1014;

let HAnimSite1015 = browser.currentScene.createNode("HAnimSite");
HAnimSite1015.USE = "hanim_l_hand_tip";
viewpoints[122] = HAnimSite1015;

let HAnimSite1016 = browser.currentScene.createNode("HAnimSite");
HAnimSite1016.USE = "hanim_r_hand_tip";
viewpoints[123] = HAnimSite1016;

let HAnimSite1017 = browser.currentScene.createNode("HAnimSite");
HAnimSite1017.USE = "hanim_l_humeral_lateral_epicondyle_pt";
viewpoints[124] = HAnimSite1017;

let HAnimSite1018 = browser.currentScene.createNode("HAnimSite");
HAnimSite1018.USE = "hanim_r_humeral_lateral_epicondyle_pt";
viewpoints[125] = HAnimSite1018;

let HAnimSite1019 = browser.currentScene.createNode("HAnimSite");
HAnimSite1019.USE = "hanim_l_humeral_medial_epicondyle_pt";
viewpoints[126] = HAnimSite1019;

let HAnimSite1020 = browser.currentScene.createNode("HAnimSite");
HAnimSite1020.USE = "hanim_r_humeral_medial_epicondyle_pt";
viewpoints[127] = HAnimSite1020;

let HAnimSite1021 = browser.currentScene.createNode("HAnimSite");
HAnimSite1021.USE = "hanim_r_iliocristale_pt";
viewpoints[128] = HAnimSite1021;

let HAnimSite1022 = browser.currentScene.createNode("HAnimSite");
HAnimSite1022.USE = "hanim_l_iliocristale_pt";
viewpoints[129] = HAnimSite1022;

let HAnimSite1023 = browser.currentScene.createNode("HAnimSite");
HAnimSite1023.USE = "hanim_r_infraorbitale_pt";
viewpoints[130] = HAnimSite1023;

let HAnimSite1024 = browser.currentScene.createNode("HAnimSite");
HAnimSite1024.USE = "hanim_l_infraorbitale_pt";
viewpoints[131] = HAnimSite1024;

let HAnimSite1025 = browser.currentScene.createNode("HAnimSite");
HAnimSite1025.USE = "hanim_l_knee_crease_pt";
viewpoints[132] = HAnimSite1025;

let HAnimSite1026 = browser.currentScene.createNode("HAnimSite");
HAnimSite1026.USE = "hanim_r_knee_crease_pt";
viewpoints[133] = HAnimSite1026;

let HAnimSite1027 = browser.currentScene.createNode("HAnimSite");
HAnimSite1027.USE = "hanim_l_lateral_malleolus_pt";
viewpoints[134] = HAnimSite1027;

let HAnimSite1028 = browser.currentScene.createNode("HAnimSite");
HAnimSite1028.USE = "hanim_r_lateral_malleolus_pt";
viewpoints[135] = HAnimSite1028;

let HAnimSite1029 = browser.currentScene.createNode("HAnimSite");
HAnimSite1029.USE = "hanim_l_medial_malleolus_pt";
viewpoints[136] = HAnimSite1029;

let HAnimSite1030 = browser.currentScene.createNode("HAnimSite");
HAnimSite1030.USE = "hanim_r_medial_malleolus_pt";
viewpoints[137] = HAnimSite1030;

let HAnimSite1031 = browser.currentScene.createNode("HAnimSite");
HAnimSite1031.USE = "hanim_l_metacarpal_phalanx_2_pt";
viewpoints[138] = HAnimSite1031;

let HAnimSite1032 = browser.currentScene.createNode("HAnimSite");
HAnimSite1032.USE = "hanim_r_metacarpal_phalanx_2_pt";
viewpoints[139] = HAnimSite1032;

let HAnimSite1033 = browser.currentScene.createNode("HAnimSite");
HAnimSite1033.USE = "hanim_l_metacarpal_phalanx_5_pt";
viewpoints[140] = HAnimSite1033;

let HAnimSite1034 = browser.currentScene.createNode("HAnimSite");
HAnimSite1034.USE = "hanim_r_metacarpal_phalanx_5_pt";
viewpoints[141] = HAnimSite1034;

let HAnimSite1035 = browser.currentScene.createNode("HAnimSite");
HAnimSite1035.USE = "hanim_l_metatarsal_phalanx_1_pt";
viewpoints[142] = HAnimSite1035;

let HAnimSite1036 = browser.currentScene.createNode("HAnimSite");
HAnimSite1036.USE = "hanim_r_metatarsal_phalanx_1_pt";
viewpoints[143] = HAnimSite1036;

let HAnimSite1037 = browser.currentScene.createNode("HAnimSite");
HAnimSite1037.USE = "hanim_l_metatarsal_phalanx_5_pt";
viewpoints[144] = HAnimSite1037;

let HAnimSite1038 = browser.currentScene.createNode("HAnimSite");
HAnimSite1038.USE = "hanim_r_metatarsal_phalanx_5_pt";
viewpoints[145] = HAnimSite1038;

let HAnimSite1039 = browser.currentScene.createNode("HAnimSite");
HAnimSite1039.USE = "hanim_l_middistal_tip";
viewpoints[146] = HAnimSite1039;

let HAnimSite1040 = browser.currentScene.createNode("HAnimSite");
HAnimSite1040.USE = "hanim_r_middistal_tip";
viewpoints[147] = HAnimSite1040;

let HAnimSite1041 = browser.currentScene.createNode("HAnimSite");
HAnimSite1041.USE = "hanim_l_olecranon_pt";
viewpoints[148] = HAnimSite1041;

let HAnimSite1042 = browser.currentScene.createNode("HAnimSite");
HAnimSite1042.USE = "hanim_r_olecranon_pt";
viewpoints[149] = HAnimSite1042;

let HAnimSite1043 = browser.currentScene.createNode("HAnimSite");
HAnimSite1043.USE = "hanim_r_psis_pt";
viewpoints[150] = HAnimSite1043;

let HAnimSite1044 = browser.currentScene.createNode("HAnimSite");
HAnimSite1044.USE = "hanim_l_psis_pt";
viewpoints[151] = HAnimSite1044;

let HAnimSite1045 = browser.currentScene.createNode("HAnimSite");
HAnimSite1045.USE = "hanim_l_radial_styloid_pt";
viewpoints[152] = HAnimSite1045;

let HAnimSite1046 = browser.currentScene.createNode("HAnimSite");
HAnimSite1046.USE = "hanim_r_radial_styloid_pt";
viewpoints[153] = HAnimSite1046;

let HAnimSite1047 = browser.currentScene.createNode("HAnimSite");
HAnimSite1047.USE = "hanim_l_radiale_pt";
viewpoints[154] = HAnimSite1047;

let HAnimSite1048 = browser.currentScene.createNode("HAnimSite");
HAnimSite1048.USE = "hanim_r_radiale_pt";
viewpoints[155] = HAnimSite1048;

let HAnimSite1049 = browser.currentScene.createNode("HAnimSite");
HAnimSite1049.USE = "hanim_l_sphyrion_pt";
viewpoints[156] = HAnimSite1049;

let HAnimSite1050 = browser.currentScene.createNode("HAnimSite");
HAnimSite1050.USE = "hanim_r_sphyrion_pt";
viewpoints[157] = HAnimSite1050;

let HAnimSite1051 = browser.currentScene.createNode("HAnimSite");
HAnimSite1051.USE = "hanim_l_tarsal_distal_phalanx_2_pt";
viewpoints[158] = HAnimSite1051;

let HAnimSite1052 = browser.currentScene.createNode("HAnimSite");
HAnimSite1052.USE = "hanim_r_tarsal_distal_phalanx_2_pt";
viewpoints[159] = HAnimSite1052;

let HAnimSite1053 = browser.currentScene.createNode("HAnimSite");
HAnimSite1053.USE = "hanim_r_tragion_pt";
viewpoints[160] = HAnimSite1053;

let HAnimSite1054 = browser.currentScene.createNode("HAnimSite");
HAnimSite1054.USE = "hanim_l_tragion_pt";
viewpoints[161] = HAnimSite1054;

let HAnimSite1055 = browser.currentScene.createNode("HAnimSite");
HAnimSite1055.USE = "hanim_r_trochanterion_pt";
viewpoints[162] = HAnimSite1055;

let HAnimSite1056 = browser.currentScene.createNode("HAnimSite");
HAnimSite1056.USE = "hanim_l_trochanterion_pt";
viewpoints[163] = HAnimSite1056;

let HAnimSite1057 = browser.currentScene.createNode("HAnimSite");
HAnimSite1057.USE = "hanim_l_ulnar_styloid_pt";
viewpoints[164] = HAnimSite1057;

let HAnimSite1058 = browser.currentScene.createNode("HAnimSite");
HAnimSite1058.USE = "hanim_r_ulnar_styloid_pt";
viewpoints[165] = HAnimSite1058;

let HAnimSite1059 = browser.currentScene.createNode("HAnimSite");
HAnimSite1059.DEF = "hanim_DiamondManLOA2_view";
HAnimSite1059.name = "DiamondManLOA2_view";
let Viewpoint1060 = browser.currentScene.createNode("Viewpoint");
Viewpoint1060.DEF = "FrontView";
Viewpoint1060.description = "Front View";
Viewpoint1060.position = new X3D.SFVec3f([0.35,0.854,2.57665]);
HAnimSite1059YYY.children = new X3D.MFNode();

HAnimSite1059ZZZ.children[0] = Viewpoint1060;

let Viewpoint1061 = browser.currentScene.createNode("Viewpoint");
Viewpoint1061.DEF = "SideView";
Viewpoint1061.description = "Side View";
Viewpoint1061.position = new X3D.SFVec3f([2,0.854,0]);
Viewpoint1061.orientation = new X3D.SFRotation([0,1,0,1.57079]);
HAnimSite1059ZZZ.children[1] = Viewpoint1061;

let Viewpoint1062 = browser.currentScene.createNode("Viewpoint");
Viewpoint1062.DEF = "TopView";
Viewpoint1062.description = "Top View";
Viewpoint1062.position = new X3D.SFVec3f([0,3.4495,0]);
Viewpoint1062.orientation = new X3D.SFRotation([1,0,0,-1.57079]);
HAnimSite1059ZZZ.children[2] = Viewpoint1062;

let Viewpoint1063 = browser.currentScene.createNode("Viewpoint");
Viewpoint1063.DEF = "RootView";
Viewpoint1063.description = "Humanoid Root View";
Viewpoint1063.position = new X3D.SFVec3f([0,0.824,0.277]);
HAnimSite1059ZZZ.children[3] = Viewpoint1063;

let Viewpoint1064 = browser.currentScene.createNode("Viewpoint");
Viewpoint1064.DEF = "InclinedView";
Viewpoint1064.description = "Inclined View";
Viewpoint1064.position = new X3D.SFVec3f([1.62,1.05,2.06]);
Viewpoint1064.orientation = new X3D.SFRotation([-0.113,0.993,0.0347,0.671]);
HAnimSite1059ZZZ.children[4] = Viewpoint1064;

viewpoints[166] = HAnimSite1059;

browser.currentScene.children[4] = HAnimHumanoid93;

}
main ();
