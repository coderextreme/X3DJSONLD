const
   X3D     = require ("x_ite-node"),
   canvas  = X3D .createBrowser (),
   browser = canvas .browser,
   scene   = browser .currentScene;
async function main () {
scene.setProfile(browser.getProfile("Immersive"));
scene .addComponent (browser .getComponent ("HAnim", 1));
scene.addMetaData("title", "DiamondManLOA0.x3d");
scene.addMetaData("description", "HAnim skeletal structure for Level of Action (LOA) zero, with one diamond at the base node for the structure. HumanoidRoot only, so this is the minimum legal HAnim humanoid.");
scene.addMetaData("creator", "Matthew T. Beitler");
scene.addMetaData("translator", "Joel S. Pawloski");
scene.addMetaData("created", "12 November 2001");
scene.addMetaData("modified", "Mon, 15 Sep 2025 05:18:46 GMT");
scene.addMetaData("motto", "(a) "Diamonds are a girl's best friend." (b) "Gosh, it sure is chilly in here."");
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
scene.addMetaData("Image", "humanoid_landmark_locations.gif");
scene.addMetaData("Image", "http://HAnim.org/Specifications/HAnim1.1/humanoid_landmark_locations.gif");
scene.addMetaData("identifier", "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Templates/DiamondManLOA0.x3d");
await browser .loadComponents (scene);
let WorldInfo25 = browser.currentScene.createNode("WorldInfo");
WorldInfo25.title = "HANIM 2.0 Default Joint Centers, LOA0";
WorldInfo25.info = new X3D.MFString([new X3D.SFString("HAnim 2.0 Default Joint Centers, Level Of Articulation (LOA) 0 -------------------------------------------------------- HANIM 1.1 (VRML 2.0) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 1.1 (VRML 2.0) Author email: beitler@graphics.cis.upenn.edu or beitler@acm.org HANIM 1.1 (VRML 2.0) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 1.1 (VRML 2.0) Compliance Date: May 12, 1999 HANIM 1.1 Compliance Information: http://ece.uwaterloo.ca/~HAnim/ Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps, .pdf")]);
browser.currentScene.children = new X3D.MFNode();

browser.currentScene.children[0] = WorldInfo25;

let NavigationInfo26 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo26.speed = 1.5;
browser.currentScene.children[1] = NavigationInfo26;

let Viewpoint27 = browser.currentScene.createNode("Viewpoint");
Viewpoint27.description = "Diamond Man, LOA 0";
Viewpoint27.position = new X3D.SFVec3f([0,1,3]);
Viewpoint27.centerOfRotation = new X3D.SFVec3f([0,1,0]);
browser.currentScene.children[2] = Viewpoint27;

let HAnimHumanoid28 = browser.currentScene.createNode("HAnimHumanoid");
HAnimHumanoid28.DEF = "hanim_humanoid";
HAnimHumanoid28.name = "humanoid";
HAnimHumanoid28.loa = 0;
let MetadataSet29 = browser.currentScene.createNode("MetadataSet");
MetadataSet29.name = "HAnimHumanoid.info";
MetadataSet29.reference = "https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid";
let MetadataString30 = browser.currentScene.createNode("MetadataString");
MetadataString30.name = "authorEmail";
MetadataSet29.value = new X3D.MFNode();

MetadataSet29XXX.value[0] = MetadataString30;

let MetadataString31 = browser.currentScene.createNode("MetadataString");
MetadataString31.name = "authorName";
value[1] = MetadataString31;

let MetadataString32 = browser.currentScene.createNode("MetadataString");
MetadataString32.name = "copyright";
value[2] = MetadataString32;

let MetadataString33 = browser.currentScene.createNode("MetadataString");
MetadataString33.name = "creationDate";
value[3] = MetadataString33;

let MetadataString34 = browser.currentScene.createNode("MetadataString");
MetadataString34.name = "humanoidVersion";
value[4] = MetadataString34;

let MetadataString35 = browser.currentScene.createNode("MetadataString");
MetadataString35.name = "usageRestrictions";
value[5] = MetadataString35;

HAnimHumanoid28.metadata = new X3D.SFNode();

HAnimHumanoid28XXX.metadata[0] = MetadataSet29;

let HAnimJoint36 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint36.DEF = "hanim_humanoid_root";
HAnimJoint36.name = "humanoid_root";
HAnimJoint36.center = new X3D.SFVec3f([0,0.824,0.0277]);
let HAnimJoint37 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint37.DEF = "hanim_sacroiliac";
HAnimJoint37.name = "sacroiliac";
HAnimJoint37.center = new X3D.SFVec3f([0,0.9149,0.0016]);
let HAnimSegment38 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment38.DEF = "hanim_pelvis";
HAnimSegment38.name = "pelvis";
let Transform39 = browser.currentScene.createNode("Transform");
Transform39.translation = new X3D.SFVec3f([0,0.9149,0.0016]);
let Shape40 = browser.currentScene.createNode("Shape");
Shape40.DEF = "DiamondShape";
let Appearance41 = browser.currentScene.createNode("Appearance");
let Material42 = browser.currentScene.createNode("Material");
Material42.diffuseColor = new X3D.SFColor([1,1,0]);
material = Material42;

appearance = Appearance41;

let IndexedFaceSet43 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet43.creaseAngle = 0.5;
IndexedFaceSet43.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
let Coordinate44 = browser.currentScene.createNode("Coordinate");
Coordinate44.point = new X3D.MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
coord = Coordinate44;

geometry = IndexedFaceSet43;

Transform39YYY.child = new X3D.undefined();

Transform39ZZZ.child[0] = Shape40;

HAnimSegment38YYY.children = new X3D.MFNode();

HAnimSegment38ZZZ.children[0] = Transform39;

HAnimJoint37YYY.children = new X3D.MFNode();

HAnimJoint37ZZZ.children[0] = HAnimSegment38;

HAnimJoint36YYY.children = new X3D.MFNode();

HAnimJoint36ZZZ.children[0] = HAnimJoint37;

joints[1] = HAnimJoint36;

let HAnimJoint45 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint45.USE = "hanim_humanoid_root";
joints[2] = HAnimJoint45;

let HAnimJoint46 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint46.USE = "hanim_sacroiliac";
joints[3] = HAnimJoint46;

let HAnimSegment47 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment47.USE = "hanim_pelvis";
segments[4] = HAnimSegment47;

let HAnimSite48 = browser.currentScene.createNode("HAnimSite");
HAnimSite48.DEF = "hanim_site_view";
HAnimSite48.name = "site_view";
let Viewpoint49 = browser.currentScene.createNode("Viewpoint");
Viewpoint49.DEF = "InclinedView";
Viewpoint49.description = "Inclined View";
Viewpoint49.position = new X3D.SFVec3f([1.62,1.05,2.06]);
Viewpoint49.orientation = new X3D.SFRotation([-0.113,0.993,0.0347,0.671]);
HAnimSite48YYY.children = new X3D.MFNode();

HAnimSite48ZZZ.children[0] = Viewpoint49;

let Viewpoint50 = browser.currentScene.createNode("Viewpoint");
Viewpoint50.DEF = "FrontView";
Viewpoint50.description = "Front View";
Viewpoint50.position = new X3D.SFVec3f([0,0.854,2.57665]);
HAnimSite48ZZZ.children[1] = Viewpoint50;

let Viewpoint51 = browser.currentScene.createNode("Viewpoint");
Viewpoint51.DEF = "SideView";
Viewpoint51.description = "Side View";
Viewpoint51.position = new X3D.SFVec3f([2.5929,0.854,0]);
Viewpoint51.orientation = new X3D.SFRotation([0,1,0,1.57079]);
HAnimSite48ZZZ.children[2] = Viewpoint51;

let Viewpoint52 = browser.currentScene.createNode("Viewpoint");
Viewpoint52.DEF = "TopView";
Viewpoint52.description = "Top View";
Viewpoint52.position = new X3D.SFVec3f([0,3.4495,0]);
Viewpoint52.orientation = new X3D.SFRotation([1,0,0,-1.57079]);
HAnimSite48ZZZ.children[3] = Viewpoint52;

viewpoints[5] = HAnimSite48;

browser.currentScene.children[3] = HAnimHumanoid28;

}
main ();
