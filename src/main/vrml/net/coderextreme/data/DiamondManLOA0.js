let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "4.0";
let WorldInfo2 = browser.currentScene.createNode("WorldInfo");
WorldInfo2.info = new MFString(new java.lang.String["HAnim 2.0 Default Joint Centers, Level Of Articulation (LOA) 0 -------------------------------------------------------- HANIM 1.1 (VRML 2.0) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 1.1 (VRML 2.0) Author email: beitler@graphics.cis.upenn.edu or beitler@acm.org HANIM 1.1 (VRML 2.0) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 1.1 (VRML 2.0) Compliance Date: May 12, 1999 HANIM 1.1 Compliance Information: http://ece.uwaterloo.ca/~HAnim/ Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps, .pdf"]);
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
HAnimHumanoid5.version = "2.0";
//HAnimHumanoid original info='\"authorEmail=beitler@graphics.cis.upenn.edu beitler@acm.org\" \"authorName=Matthew T. Beitler\" \"copyright=Copyright 1999 Matthew T. Beitler\" \"creationDate=05/12/99\" \"humanoidVersion=JointCenters 1.1 LOA0\" \"usageRestrictions=PERMISSION TO FULLY USE THIS SCENE GRAPH IS GRANTED PROVIDED THIS COPYRIGHT INFORMATION AND DOCUMENTATION OF THE ORIGINAL AUTHOR IS INCLUDED. This humanoid scene graph is provided _as-is_ and without warranty of any kind express implied or otherwise including without limitation any warranty of merchantability or fitness for a particular purpose.\"'
let MetadataSet6 = browser.currentScene.createNode("MetadataSet");
MetadataSet6.name = "HAnimHumanoid.info";
MetadataSet6.reference = "https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid";
let MetadataString7 = browser.currentScene.createNode("MetadataString");
MetadataString7.name = "authorEmail";
MetadataString7.value = new MFString(new java.lang.String["beitler@graphics.cis.upenn.edu beitler@acm.org"]);
MetadataSet6.value = new MFNode();

MetadataSet6.value[0] = MetadataString7;

let MetadataString8 = browser.currentScene.createNode("MetadataString");
MetadataString8.name = "authorName";
MetadataString8.value = new MFString(new java.lang.String["Matthew T. Beitler"]);
MetadataSet6.value[1] = MetadataString8;

let MetadataString9 = browser.currentScene.createNode("MetadataString");
MetadataString9.name = "copyright";
MetadataString9.value = new MFString(new java.lang.String["Copyright 1999 Matthew T. Beitler"]);
MetadataSet6.value[2] = MetadataString9;

let MetadataString10 = browser.currentScene.createNode("MetadataString");
MetadataString10.name = "creationDate";
MetadataString10.value = new MFString(new java.lang.String["05/12/99"]);
MetadataSet6.value[3] = MetadataString10;

let MetadataString11 = browser.currentScene.createNode("MetadataString");
MetadataString11.name = "humanoidVersion";
MetadataString11.value = new MFString(new java.lang.String["JointCenters 1.1 LOA0"]);
MetadataSet6.value[4] = MetadataString11;

let MetadataString12 = browser.currentScene.createNode("MetadataString");
MetadataString12.name = "usageRestrictions";
MetadataString12.value = new MFString(new java.lang.String["PERMISSION TO FULLY USE THIS SCENE GRAPH IS GRANTED PROVIDED THIS COPYRIGHT INFORMATION AND DOCUMENTATION OF THE ORIGINAL AUTHOR IS INCLUDED. This humanoid scene graph is provided _as-is_ and without warranty of any kind express implied or otherwise including without limitation any warranty of merchantability or fitness for a particular purpose."]);
MetadataSet6.value[5] = MetadataString12;

HAnimHumanoid5.metadata = MetadataSet6;

let HAnimJoint13 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint13.name = "humanoid_root";
HAnimJoint13.DEF = "hanim_humanoid_root";
HAnimJoint13.center = new SFVec3f(new float[0,0.824,0.0277]);
let HAnimJoint14 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint14.name = "sacroiliac";
HAnimJoint14.DEF = "hanim_sacroiliac";
HAnimJoint14.center = new SFVec3f(new float[0,0.9149,0.0016]);
let HAnimSegment15 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment15.name = "pelvis";
HAnimSegment15.DEF = "hanim_pelvis";
let Transform16 = browser.currentScene.createNode("Transform");
Transform16.translation = new SFVec3f(new float[0,0.9149,0.0016]);
let Shape17 = browser.currentScene.createNode("Shape");
Shape17.DEF = "DiamondShape";
let IndexedFaceSet18 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet18.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet18.creaseAngle = 0.5;
let Coordinate19 = browser.currentScene.createNode("Coordinate");
Coordinate19.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet18.coord = Coordinate19;

Shape17.geometry = IndexedFaceSet18;

let Appearance20 = browser.currentScene.createNode("Appearance");
let Material21 = browser.currentScene.createNode("Material");
Material21.diffuseColor = new SFColor(new float[1,1,0]);
Appearance20.material = Material21;

Shape17.appearance = Appearance20;

Transform16.children = new MFNode();

Transform16.children[0] = Shape17;

HAnimSegment15.children = new MFNode();

HAnimSegment15.children[0] = Transform16;

HAnimJoint14.children = new MFNode();

HAnimJoint14.children[0] = HAnimSegment15;

HAnimJoint13.children = new MFNode();

HAnimJoint13.children[0] = HAnimJoint14;

HAnimHumanoid5.joints = new MFNode();

HAnimHumanoid5.joints[0] = HAnimJoint13;

let HAnimSite22 = browser.currentScene.createNode("HAnimSite");
HAnimSite22.name = "site_view";
HAnimSite22.DEF = "hanim_site_view";
let Viewpoint23 = browser.currentScene.createNode("Viewpoint");
Viewpoint23.DEF = "InclinedView";
Viewpoint23.description = "Inclined View";
Viewpoint23.orientation = new SFRotation(new float[-0.113,0.993,0.0347,0.671]);
Viewpoint23.position = new SFVec3f(new float[1.62,1.05,2.06]);
HAnimSite22.children = new MFNode();

HAnimSite22.children[0] = Viewpoint23;

let Viewpoint24 = browser.currentScene.createNode("Viewpoint");
Viewpoint24.DEF = "FrontView";
Viewpoint24.description = "Front View";
Viewpoint24.position = new SFVec3f(new float[0,0.854,2.57665]);
HAnimSite22.children[1] = Viewpoint24;

let Viewpoint25 = browser.currentScene.createNode("Viewpoint");
Viewpoint25.DEF = "SideView";
Viewpoint25.description = "Side View";
Viewpoint25.orientation = new SFRotation(new float[0,1,0,1.57079]);
Viewpoint25.position = new SFVec3f(new float[2.5929,0.854,0]);
HAnimSite22.children[2] = Viewpoint25;

let Viewpoint26 = browser.currentScene.createNode("Viewpoint");
Viewpoint26.DEF = "TopView";
Viewpoint26.description = "Top View";
Viewpoint26.orientation = new SFRotation(new float[1,0,0,-1.57079]);
Viewpoint26.position = new SFVec3f(new float[0,3.4495,0]);
HAnimSite22.children[3] = Viewpoint26;

HAnimHumanoid5.viewpoints[1] = HAnimSite22;

let HAnimJoint27 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint27.USE = "hanim_humanoid_root";
HAnimHumanoid5.joints[2] = HAnimJoint27;

let HAnimJoint28 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint28.USE = "hanim_sacroiliac";
HAnimHumanoid5.joints[3] = HAnimJoint28;

let HAnimSegment29 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment29.USE = "hanim_pelvis";
HAnimHumanoid5.segments[4] = HAnimSegment29;

browser.currentScene.children[3] = HAnimHumanoid5;

