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
meta3.content = "DiamondManLOA0patched2.x3d";
head1.meta[1] = meta3;

let meta4 = browser.currentScene.createNode("meta");
meta4.name = "description";
meta4.content = "HAnim skeletal structure for Level of Action (LOA) zero, with one diamond at the base node for the structure. HumanoidRoot only, so this is the minimum legal HAnim humanoid.";
head1.meta[2] = meta4;

let meta5 = browser.currentScene.createNode("meta");
meta5.name = "creator";
meta5.content = "Matthew T. Beitler";
head1.meta[3] = meta5;

let meta6 = browser.currentScene.createNode("meta");
meta6.name = "translator";
meta6.content = "Joel S. Pawloski";
head1.meta[4] = meta6;

let meta7 = browser.currentScene.createNode("meta");
meta7.name = "created";
meta7.content = "12 November 2001";
head1.meta[5] = meta7;

let meta8 = browser.currentScene.createNode("meta");
meta8.name = "modified";
meta8.content = "2 November 2023";
head1.meta[6] = meta8;

let meta9 = browser.currentScene.createNode("meta");
meta9.name = "motto";
meta9.content = "(a) \"Diamonds are a girl's best friend.\" (b) \"Gosh, it sure is chilly in here.\"";
head1.meta[7] = meta9;

let meta10 = browser.currentScene.createNode("meta");
meta10.name = "reference";
meta10.content = "HAnim 2.0 specification, Appendix A: Nominal human body dimensions and levels of articulation (LOAs)";
head1.meta[8] = meta10;

let meta11 = browser.currentScene.createNode("meta");
meta11.name = "reference";
meta11.content = "https://www.web3d.org/documents/specifications/19774-1/V2.0/HAnim/BodyDimensionsAndLOAs.html";
head1.meta[9] = meta11;

let meta12 = browser.currentScene.createNode("meta");
meta12.name = "reference";
meta12.content = "https://www.web3d.org/documents/specifications/19774-1/V2.0/HAnim/BodyDimensionsAndLOAs.html#LevelOfArticulationZero";
head1.meta[10] = meta12;

let meta13 = browser.currentScene.createNode("meta");
meta13.name = "reference";
meta13.content = "HAnim 1.1 specification, Appendix A: Suggested Body Dimensions and Levels of Articulation, Level of Articulation Zero";
head1.meta[11] = meta13;

let meta14 = browser.currentScene.createNode("meta");
meta14.name = "reference";
meta14.content = "http://HAnim.org/Specifications/HAnim1.1/appendices.html#appendixa";
head1.meta[12] = meta14;

let meta15 = browser.currentScene.createNode("meta");
meta15.name = "reference";
meta15.content = "http://HAnim.org/Specifications/HAnim1.1/JointCenters1_1_LOA0.wrl";
head1.meta[13] = meta15;

let meta16 = browser.currentScene.createNode("meta");
meta16.name = "reference";
meta16.content = "http://HAnim.org/Specifications/HAnim1.1/JointCenters1_1_LOA0-diamond.wrl";
head1.meta[14] = meta16;

let meta17 = browser.currentScene.createNode("meta");
meta17.name = "reference";
meta17.content = "http://ece.uwaterloo.ca/~HAnim";
head1.meta[15] = meta17;

let meta18 = browser.currentScene.createNode("meta");
meta18.name = "reference";
meta18.content = "http://www.cis.upenn.edu/~badler/anthro/89-71.pdf";
head1.meta[16] = meta18;

let meta19 = browser.currentScene.createNode("meta");
meta19.name = "reference";
meta19.content = "http://www.cis.upenn.edu/~badler/anthro/89-71.ps";
head1.meta[17] = meta19;

let meta20 = browser.currentScene.createNode("meta");
meta20.name = "reference";
meta20.content = "http://www.cis.upenn.edu/~beitler";
head1.meta[18] = meta20;

let meta21 = browser.currentScene.createNode("meta");
meta21.name = "Image";
meta21.content = "humanoid_landmark_locations.gif";
head1.meta[19] = meta21;

let meta22 = browser.currentScene.createNode("meta");
meta22.name = "Image";
meta22.content = "http://HAnim.org/Specifications/HAnim1.1/humanoid_landmark_locations.gif";
head1.meta[20] = meta22;

let meta23 = browser.currentScene.createNode("meta");
meta23.name = "identifier";
meta23.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Templates/DiamondManLOA0.x3d";
head1.meta[21] = meta23;

let meta24 = browser.currentScene.createNode("meta");
meta24.name = "generator";
meta24.content = "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit";
head1.meta[22] = meta24;

let meta25 = browser.currentScene.createNode("meta");
meta25.name = "license";
meta25.content = "../license.html";
head1.meta[23] = meta25;

head = head1;

let WorldInfo27 = browser.currentScene.createNode("WorldInfo");
WorldInfo27.info = new MFString(new java.lang.String["HAnim 2.0 Default Joint Centers, Level Of Articulation (LOA) 0 -------------------------------------------------------- HANIM 1.1 (VRML 2.0) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 1.1 (VRML 2.0) Author email: beitler@graphics.cis.upenn.edu or beitler@acm.org HANIM 1.1 (VRML 2.0) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 1.1 (VRML 2.0) Compliance Date: May 12, 1999 HANIM 1.1 Compliance Information: http://ece.uwaterloo.ca/~HAnim/ Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps, .pdf"]);
WorldInfo27.title = "HANIM 2.0 Default Joint Centers, LOA0";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo27;

let NavigationInfo28 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo28.speed = 1.5;
browser.currentScene.children[1] = NavigationInfo28;

let Viewpoint29 = browser.currentScene.createNode("Viewpoint");
Viewpoint29.centerOfRotation = new SFVec3f(new float[0,1,0]);
Viewpoint29.description = "Diamond Man, LOA 0";
Viewpoint29.position = new SFVec3f(new float[0,1,3]);
browser.currentScene.children[2] = Viewpoint29;

let HAnimHumanoid30 = browser.currentScene.createNode("HAnimHumanoid");
HAnimHumanoid30.name = "humanoid";
HAnimHumanoid30.DEF = "hanim_humanoid";
HAnimHumanoid30.loa = 0;
HAnimHumanoid30.version = "2.0";
//original HAnimHumanoid info='\"authorEmail=beitler@graphics.cis.upenn.edu beitler@acm.org\" \"authorName=Matthew T. Beitler\" \"copyright=Copyright 1999 Matthew T. Beitler\" \"creationDate=05/12/99\" \"humanoidVersion=JointCenters 1.1 LOA0\" \"usageRestrictions=PERMISSION TO FULLY USE THIS SCENE GRAPH IS GRANTED PROVIDED THIS COPYRIGHT INFORMATION AND DOCUMENTATION OF THE ORIGINAL AUTHOR IS INCLUDED. This humanoid scene graph is provided _as-is_ and without warranty of any kind express implied or otherwise including without limitation any warranty of merchantability or fitness for a particular purpose.\"'
let MetadataSet31 = browser.currentScene.createNode("MetadataSet");
MetadataSet31.name = "HAnimHumanoid.info";
MetadataSet31.reference = "https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid";
let MetadataString32 = browser.currentScene.createNode("MetadataString");
MetadataString32.name = "authorEmail";
MetadataString32.value = new MFString(new java.lang.String["beitler@graphics.cis.upenn.edu beitler@acm.org"]);
MetadataSet31.value = new MFNode();

MetadataSet31.value[0] = MetadataString32;

let MetadataString33 = browser.currentScene.createNode("MetadataString");
MetadataString33.name = "authorName";
MetadataString33.value = new MFString(new java.lang.String["Matthew T. Beitler"]);
MetadataSet31.value[1] = MetadataString33;

let MetadataString34 = browser.currentScene.createNode("MetadataString");
MetadataString34.name = "copyright";
MetadataString34.value = new MFString(new java.lang.String["Copyright 1999 Matthew T. Beitler"]);
MetadataSet31.value[2] = MetadataString34;

let MetadataString35 = browser.currentScene.createNode("MetadataString");
MetadataString35.name = "creationDate";
MetadataString35.value = new MFString(new java.lang.String["05/12/99"]);
MetadataSet31.value[3] = MetadataString35;

let MetadataString36 = browser.currentScene.createNode("MetadataString");
MetadataString36.name = "humanoidVersion";
MetadataString36.value = new MFString(new java.lang.String["JointCenters 1.1 LOA0"]);
MetadataSet31.value[4] = MetadataString36;

let MetadataString37 = browser.currentScene.createNode("MetadataString");
MetadataString37.name = "usageRestrictions";
MetadataString37.value = new MFString(new java.lang.String["PERMISSION TO FULLY USE THIS SCENE GRAPH IS GRANTED PROVIDED THIS COPYRIGHT INFORMATION AND DOCUMENTATION OF THE ORIGINAL AUTHOR IS INCLUDED. This humanoid scene graph is provided _as-is_ and without warranty of any kind express implied or otherwise including without limitation any warranty of merchantability or fitness for a particular purpose."]);
MetadataSet31.value[5] = MetadataString37;

HAnimHumanoid30.metadata = new SFNode();

HAnimHumanoid30.metadata[0] = MetadataSet31;

let HAnimJoint38 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint38.name = "humanoid_root";
HAnimJoint38.DEF = "hanim_humanoid_root";
HAnimJoint38.center = new SFVec3f(new float[0,0.824,0.0277]);
let HAnimJoint39 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint39.name = "sacroiliac";
HAnimJoint39.DEF = "hanim_sacroiliac";
HAnimJoint39.center = new SFVec3f(new float[0,0.9149,0.0016]);
let HAnimSegment40 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment40.name = "pelvis";
HAnimSegment40.DEF = "hanim_pelvis";
let Transform41 = browser.currentScene.createNode("Transform");
Transform41.translation = new SFVec3f(new float[0,0.9149,0.0016]);
let Shape42 = browser.currentScene.createNode("Shape");
Shape42.DEF = "DiamondShape";
let IndexedFaceSet43 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet43.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet43.creaseAngle = 0.5;
let Coordinate44 = browser.currentScene.createNode("Coordinate");
Coordinate44.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet43.coord = Coordinate44;

Shape42.geometry = IndexedFaceSet43;

let Appearance45 = browser.currentScene.createNode("Appearance");
let Material46 = browser.currentScene.createNode("Material");
Material46.diffuseColor = new SFColor(new float[1,1,0]);
Appearance45.material = Material46;

Shape42.appearance = Appearance45;

Transform41.child = new undefined();

Transform41.child[0] = Shape42;

HAnimSegment40.children = new MFNode();

HAnimSegment40.children[0] = Transform41;

HAnimJoint39.children = new MFNode();

HAnimJoint39.children[0] = HAnimSegment40;

HAnimJoint38.children = new MFNode();

HAnimJoint38.children[0] = HAnimJoint39;

HAnimHumanoid30.joints[1] = HAnimJoint38;

let HAnimSite47 = browser.currentScene.createNode("HAnimSite");
HAnimSite47.name = "site_view";
HAnimSite47.DEF = "hanim_site_view";
let Viewpoint48 = browser.currentScene.createNode("Viewpoint");
Viewpoint48.DEF = "InclinedView";
Viewpoint48.description = "Inclined View";
Viewpoint48.orientation = new SFRotation(new float[-0.113,0.993,0.0347,0.671]);
Viewpoint48.position = new SFVec3f(new float[1.62,1.05,2.06]);
HAnimSite47.children = new MFNode();

HAnimSite47.children[0] = Viewpoint48;

let Viewpoint49 = browser.currentScene.createNode("Viewpoint");
Viewpoint49.DEF = "FrontView";
Viewpoint49.description = "Front View";
Viewpoint49.position = new SFVec3f(new float[0,0.854,2.57665]);
HAnimSite47.children[1] = Viewpoint49;

let Viewpoint50 = browser.currentScene.createNode("Viewpoint");
Viewpoint50.DEF = "SideView";
Viewpoint50.description = "Side View";
Viewpoint50.orientation = new SFRotation(new float[0,1,0,1.57079]);
Viewpoint50.position = new SFVec3f(new float[2.5929,0.854,0]);
HAnimSite47.children[2] = Viewpoint50;

let Viewpoint51 = browser.currentScene.createNode("Viewpoint");
Viewpoint51.DEF = "TopView";
Viewpoint51.description = "Top View";
Viewpoint51.orientation = new SFRotation(new float[1,0,0,-1.57079]);
Viewpoint51.position = new SFVec3f(new float[0,3.4495,0]);
HAnimSite47.children[3] = Viewpoint51;

HAnimHumanoid30.viewpoints[2] = HAnimSite47;

let HAnimJoint52 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint52.USE = "hanim_humanoid_root";
HAnimHumanoid30.joints[3] = HAnimJoint52;

let HAnimJoint53 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint53.USE = "hanim_sacroiliac";
HAnimHumanoid30.joints[4] = HAnimJoint53;

let HAnimSegment54 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment54.USE = "hanim_pelvis";
HAnimHumanoid30.segments[5] = HAnimSegment54;

browser.currentScene.children[3] = HAnimHumanoid30;

