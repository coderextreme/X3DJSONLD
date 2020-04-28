let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
let WorldInfo2 = browser.currentScene.createNode("WorldInfo");
WorldInfo2.info = new MFString(new java.lang.String["HAnim 2.0 Default Joint Centers, Level Of Articulation (LOA) 0 -------------------------------------------------------- HANIM 1.1 (VRML 2.0) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 1.1 (VRML 2.0) Author email: beitler@graphics.cis.upenn.edu or beitler@acm.org HANIM 1.1 (VRML 2.0) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 1.1 (VRML 2.0) Compliance Date: May 12, 1999 HANIM 1.1 Compliance Information: http://ece.uwaterloo.ca/~h-anim/ Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps, .pdf"]);
WorldInfo2.title = "HANIM 2.0 Default Joint Centers, LOA0";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo2;

let NavigationInfo3 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo3.speed = 1.5;
browser.currentScene.children[1] = NavigationInfo3;

let Viewpoint4 = browser.currentScene.createNode("Viewpoint");
Viewpoint4.centerOfRotation = new SFVec3f(new float[0,1,0]);
Viewpoint4.description = "Diamond Man, LOA 0";
Viewpoint4.position = new SFVec3f(new float[0,1,3]);
browser.currentScene.children[2] = Viewpoint4;

let HAnimHumanoid5 = browser.currentScene.createNode("HAnimHumanoid");
HAnimHumanoid5.name = "humanoid";
HAnimHumanoid5.DEF = "hanim_humanoid";
HAnimHumanoid5.info = new MFString(new java.lang.String["authorEmail=beitler@graphics.cis.upenn.edu beitler@acm.org","authorName=Matthew T. Beitler","copyright=Copyright 1999 Matthew T. Beitler","creationDate=05/12/99","humanoidVersion=JointCenters 1.1 LOA0","usageRestrictions=PERMISSION TO FULLY USE THIS SCENE GRAPH IS GRANTED PROVIDED THIS COPYRIGHT INFORMATION AND DOCUMENTATION OF THE ORIGINAL AUTHOR IS INCLUDED. This humanoid scene graph is provided _as-is_ and without warranty of any kind express implied or otherwise including without limitation any warranty of merchantability or fitness for a particular purpose."]);
HAnimHumanoid5.version = "2.0";
let HAnimJoint6 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint6.name = "humanoid_root";
HAnimJoint6.DEF = "hanim_HumanoidRoot";
HAnimJoint6.center = new SFVec3f(new float[0,0.824,0.0277]);
let HAnimJoint7 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint7.name = "sacroiliac";
HAnimJoint7.DEF = "hanim_sacroiliac";
HAnimJoint7.center = new SFVec3f(new float[0,0.9149,0.0016]);
let HAnimSegment8 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment8.name = "pelvis";
HAnimSegment8.DEF = "hanim_pelvis";
let Transform9 = browser.currentScene.createNode("Transform");
Transform9.translation = new SFVec3f(new float[0,0.9149,0.0016]);
let Shape10 = browser.currentScene.createNode("Shape");
Shape10.DEF = "DiamondShape";
let IndexedFaceSet11 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet11.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet11.creaseAngle = 0.5;
let Coordinate12 = browser.currentScene.createNode("Coordinate");
Coordinate12.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet11.coord = Coordinate12;

Shape10.geometry = IndexedFaceSet11;

let Appearance13 = browser.currentScene.createNode("Appearance");
let Material14 = browser.currentScene.createNode("Material");
Material14.diffuseColor = new SFColor(new float[1,1,0]);
Appearance13.material = Material14;

Shape10.appearance = Appearance13;

Transform9.children = new MFNode();

Transform9.children[0] = Shape10;

HAnimSegment8.children = new MFNode();

HAnimSegment8.children[0] = Transform9;

HAnimJoint7.children = new MFNode();

HAnimJoint7.children[0] = HAnimSegment8;

HAnimJoint6.children = new MFNode();

HAnimJoint6.children[0] = HAnimJoint7;

HAnimHumanoid5.joints = new MFNode();

HAnimHumanoid5.joints[0] = HAnimJoint6;

let HAnimJoint15 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint15.USE = "hanim_HumanoidRoot";
HAnimHumanoid5.joints[1] = HAnimJoint15;

let HAnimJoint16 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint16.USE = "hanim_sacroiliac";
HAnimHumanoid5.joints[2] = HAnimJoint16;

let HAnimSegment17 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment17.USE = "hanim_pelvis";
HAnimHumanoid5.segments[3] = HAnimSegment17;

let HAnimSite18 = browser.currentScene.createNode("HAnimSite");
HAnimSite18.name = "hanim_view";
let Viewpoint19 = browser.currentScene.createNode("Viewpoint");
Viewpoint19.DEF = "InclinedView";
Viewpoint19.description = "Inclined View";
Viewpoint19.orientation = new SFRotation(new float[-0.113,0.993,0.0347,0.671]);
Viewpoint19.position = new SFVec3f(new float[1.62,1.05,2.06]);
HAnimSite18.children = new MFNode();

HAnimSite18.children[0] = Viewpoint19;

let Viewpoint20 = browser.currentScene.createNode("Viewpoint");
Viewpoint20.DEF = "FrontView";
Viewpoint20.description = "Front View";
Viewpoint20.position = new SFVec3f(new float[0,0.854,2.57665]);
HAnimSite18.children[1] = Viewpoint20;

let Viewpoint21 = browser.currentScene.createNode("Viewpoint");
Viewpoint21.DEF = "SideView";
Viewpoint21.description = "Side View";
Viewpoint21.orientation = new SFRotation(new float[0,1,0,1.57079]);
Viewpoint21.position = new SFVec3f(new float[2.5929,0.854,0]);
HAnimSite18.children[2] = Viewpoint21;

let Viewpoint22 = browser.currentScene.createNode("Viewpoint");
Viewpoint22.DEF = "TopView";
Viewpoint22.description = "Top View";
Viewpoint22.orientation = new SFRotation(new float[1,0,0,-1.57079]);
Viewpoint22.position = new SFVec3f(new float[0,3.4495,0]);
HAnimSite18.children[3] = Viewpoint22;

HAnimHumanoid5.viewpoints[4] = HAnimSite18;

browser.currentScene.children[3] = HAnimHumanoid5;

