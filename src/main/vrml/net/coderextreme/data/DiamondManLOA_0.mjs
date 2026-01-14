const
   X3D     = require ("x_ite-node"),
   canvas  = X3D .createBrowser (),
   browser = canvas .browser,
   scene   = browser .currentScene;
async function main () {
scene.setProfile(browser.getProfile("Immersive"));
scene .addComponent (browser .getComponent ("HAnim", 1));
scene.addMetaData("title", "DiamondManLOA_0.x3d");
scene.addMetaData("description", "HAnim skeletal structure for Level of Action (LOA) zero, with one diamond at the base node for the structure. HumanoidRoot only, so this is the minimum legal HAnim humanoid.");
scene.addMetaData("creator", "Matthew T. Beitler");
scene.addMetaData("translator", "Joel S. Pawloski");
scene.addMetaData("created", "12 November 2001");
scene.addMetaData("modified", "Tue, 09 Sep 2025 19:37:54 GMT");
scene.addMetaData("reference", "../Templates/DiamondManLOA_0.x3d");
scene.addMetaData("reference", "HAnim 2.0 specification, Appendix A: Nominal human body dimensions and levels of articulation (LOAs)");
scene.addMetaData("reference", "https://www.web3d.org/documents/specifications/19774-1/V2.0/HAnim/BodyDimensionsAndLOAs.html");
scene.addMetaData("reference", "https://www.web3d.org/documents/specifications/19774-1/V2.0/HAnim/BodyDimensionsAndLOAs.html#LevelOfArticulationZero");
scene.addMetaData("reference", "HAnim 1.1 specification, Appendix A: Suggested Body Dimensions and Levels of Articulation, Level of Articulation Zero");
scene.addMetaData("reference", "http://HAnim.org/Specifications/HAnim1.1/appendices.html#appendixa");
scene.addMetaData("reference", "http://HAnim.org/Specifications/HAnim1.1/JointCenters1_1_LOA0.wrl");
scene.addMetaData("reference", "http://HAnim.org/Specifications/HAnim1.1/JointCenters1_1_LOA0-diamond.wrl");
scene.addMetaData("reference", "http://ece.uwaterloo.ca/~HAnim");
scene.addMetaData("reference", "http://www.cis.upenn.edu/~badler/anthro/89-71.pdf");
scene.addMetaData("reference", "http://www.cis.upenn.edu/~badler/anthro/89-71.ps");
scene.addMetaData("reference", "http://www.cis.upenn.edu/~beitler");
scene.addMetaData("error", "Legacy model, not valid as X3D4 HAnim version 2.0 since HAnim version 1.0 has significant differences and is no longer directly supported");
scene.addMetaData("motto", "(a) "Diamonds are a girl's best friend." (b) "Gosh, it sure is chilly in here."");
scene.addMetaData("Image", "humanoid_landmark_locations.gif");
scene.addMetaData("Image", "http://HAnim.org/Specifications/HAnim1.1/humanoid_landmark_locations.gif");
scene.addMetaData("identifier", "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Templates/DiamondManLOA_0.x3d");
await browser .loadComponents (scene);
let WorldInfo27 = browser.currentScene.createNode("WorldInfo");
WorldInfo27.title = "HANIM 2.0 Default Joint Centers, LOA0";
WorldInfo27.info = new X3D.MFString([new X3D.SFString("HAnim 2.0 Default Joint Centers, Level Of Articulation (LOA) 0 -------------------------------------------------------- HANIM 1.1 (VRML 2.0) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 1.1 (VRML 2.0) Author email: beitler@graphics.cis.upenn.edu or beitler@acm.org HANIM 1.1 (VRML 2.0) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 1.1 (VRML 2.0) Compliance Date: May 12, 1999 HANIM 1.1 Compliance Information: http://ece.uwaterloo.ca/~HAnim/ Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps, .pdf")]);
browser.currentScene.children = new X3D.MFNode();

browser.currentScene.children[0] = WorldInfo27;

let NavigationInfo28 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo28.speed = 1.5;
browser.currentScene.children[1] = NavigationInfo28;

let Viewpoint29 = browser.currentScene.createNode("Viewpoint");
Viewpoint29.description = "Diamond Man, LOA 0";
Viewpoint29.position = new X3D.SFVec3f([0,1,3]);
Viewpoint29.centerOfRotation = new X3D.SFVec3f([0,1,0]);
browser.currentScene.children[2] = Viewpoint29;

let HAnimHumanoid30 = browser.currentScene.createNode("HAnimHumanoid");
HAnimHumanoid30.DEF = "hanim_humanoid";
HAnimHumanoid30.name = "humanoid";
HAnimHumanoid30.version = "1.0";
let MetadataSet31 = browser.currentScene.createNode("MetadataSet");
MetadataSet31.name = "HAnimHumanoid.info";
MetadataSet31.reference = "https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid";
let MetadataString32 = browser.currentScene.createNode("MetadataString");
MetadataString32.name = "authorEmail";
MetadataSet31.value = new X3D.MFNode();

MetadataSet31XXX.value[0] = MetadataString32;

let MetadataString33 = browser.currentScene.createNode("MetadataString");
MetadataString33.name = "authorName";
value[1] = MetadataString33;

let MetadataString34 = browser.currentScene.createNode("MetadataString");
MetadataString34.name = "copyright";
value[2] = MetadataString34;

let MetadataString35 = browser.currentScene.createNode("MetadataString");
MetadataString35.name = "creationDate";
value[3] = MetadataString35;

let MetadataString36 = browser.currentScene.createNode("MetadataString");
MetadataString36.name = "humanoidVersion";
value[4] = MetadataString36;

let MetadataString37 = browser.currentScene.createNode("MetadataString");
MetadataString37.name = "usageRestrictions";
value[5] = MetadataString37;

HAnimHumanoid30.metadata = new X3D.SFNode();

HAnimHumanoid30XXX.metadata[0] = MetadataSet31;

let HAnimJoint38 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint38.DEF = "hanim_HumanoidRoot";
HAnimJoint38.name = "humanoid_root";
HAnimJoint38.center = new X3D.SFVec3f([0,0.824,0.0277]);
let HAnimJoint39 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint39.DEF = "hanim_sacroiliac";
HAnimJoint39.name = "sacroiliac";
HAnimJoint39.center = new X3D.SFVec3f([0,0.9149,0.0016]);
let HAnimSegment40 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment40.DEF = "hanim_pelvis";
HAnimSegment40.name = "pelvis";
let Transform41 = browser.currentScene.createNode("Transform");
Transform41.translation = new X3D.SFVec3f([0,0.9149,0.0016]);
let Shape42 = browser.currentScene.createNode("Shape");
Shape42.DEF = "DiamondShape";
let Appearance43 = browser.currentScene.createNode("Appearance");
let Material44 = browser.currentScene.createNode("Material");
Material44.diffuseColor = new X3D.SFColor([1,1,0]);
material = Material44;

appearance = Appearance43;

let IndexedFaceSet45 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet45.creaseAngle = 0.5;
IndexedFaceSet45.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
let Coordinate46 = browser.currentScene.createNode("Coordinate");
Coordinate46.point = new X3D.MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
coord = Coordinate46;

geometry = IndexedFaceSet45;

Transform41YYY.child = new X3D.undefined();

Transform41ZZZ.child[0] = Shape42;

HAnimSegment40YYY.children = new X3D.MFNode();

HAnimSegment40ZZZ.children[0] = Transform41;

HAnimJoint39YYY.children = new X3D.MFNode();

HAnimJoint39ZZZ.children[0] = HAnimSegment40;

HAnimJoint38YYY.children = new X3D.MFNode();

HAnimJoint38ZZZ.children[0] = HAnimJoint39;

joints[1] = HAnimJoint38;

let HAnimJoint47 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint47.USE = "hanim_HumanoidRoot";
joints[2] = HAnimJoint47;

let HAnimJoint48 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint48.USE = "hanim_sacroiliac";
joints[3] = HAnimJoint48;

let HAnimSegment49 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment49.USE = "hanim_pelvis";
segments[4] = HAnimSegment49;

let HAnimSite50 = browser.currentScene.createNode("HAnimSite");
HAnimSite50.DEF = "hanim_site_view";
HAnimSite50.name = "site_view";
let Viewpoint51 = browser.currentScene.createNode("Viewpoint");
Viewpoint51.DEF = "InclinedView";
Viewpoint51.description = "Inclined View";
Viewpoint51.position = new X3D.SFVec3f([1.62,1.05,2.06]);
Viewpoint51.orientation = new X3D.SFRotation([-0.113,0.993,0.0347,0.671]);
HAnimSite50YYY.children = new X3D.MFNode();

HAnimSite50ZZZ.children[0] = Viewpoint51;

let Viewpoint52 = browser.currentScene.createNode("Viewpoint");
Viewpoint52.DEF = "FrontView";
Viewpoint52.description = "Front View";
Viewpoint52.position = new X3D.SFVec3f([0,0.854,2.57665]);
HAnimSite50ZZZ.children[1] = Viewpoint52;

let Viewpoint53 = browser.currentScene.createNode("Viewpoint");
Viewpoint53.DEF = "SideView";
Viewpoint53.description = "Side View";
Viewpoint53.position = new X3D.SFVec3f([2.5929,0.854,0]);
Viewpoint53.orientation = new X3D.SFRotation([0,1,0,1.57079]);
HAnimSite50ZZZ.children[2] = Viewpoint53;

let Viewpoint54 = browser.currentScene.createNode("Viewpoint");
Viewpoint54.DEF = "TopView";
Viewpoint54.description = "Top View";
Viewpoint54.position = new X3D.SFVec3f([0,3.4495,0]);
Viewpoint54.orientation = new X3D.SFRotation([1,0,0,-1.57079]);
HAnimSite50ZZZ.children[3] = Viewpoint54;

viewpoints[5] = HAnimSite50;

browser.currentScene.children[3] = HAnimHumanoid30;

}
main ();
