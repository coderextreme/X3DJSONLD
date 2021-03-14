let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
let WorldInfo2 = browser.currentScene.createNode("WorldInfo");
WorldInfo2.info = new MFString(new java.lang.String["HAnim 2.0 Default Joint Centers, Level Of Articulation (LOA) 2 -------------------------------------------------------- HANIM 1.1 (VRML 2.0) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 1.1 (VRML 2.0) Author email: beitler@graphics.cis.upenn.edu or beitler@acm.org HANIM 1.1 (VRML 2.0) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 1.1 (VRML 2.0) Compliance Date: May 12, 1999 HANIM 1.1 Compliance Information: http://ece.uwaterloo.ca/~HAnim/ Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps, .pdf"]);
WorldInfo2.title = "HANIM 1.1 Default Joint Centers, LOA1";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo2;

let NavigationInfo3 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo3.speed = 1.5;
browser.currentScene.children[1] = NavigationInfo3;

let Viewpoint4 = browser.currentScene.createNode("Viewpoint");
Viewpoint4.centerOfRotation = new SFVec3f(new float[0,1,0]);
Viewpoint4.description = "Diamond Man, LOA 2";
Viewpoint4.position = new SFVec3f(new float[0,1,3]);
browser.currentScene.children[2] = Viewpoint4;

let Transform5 = browser.currentScene.createNode("Transform");
Transform5.translation = new SFVec3f(new float[1,1.5,0]);
let Billboard6 = browser.currentScene.createNode("Billboard");
let Shape7 = browser.currentScene.createNode("Shape");
let Text8 = browser.currentScene.createNode("Text");
Text8.string = new MFString(new java.lang.String["Diamond Man Key"]);
let FontStyle9 = browser.currentScene.createNode("FontStyle");
FontStyle9.family = new MFString(new java.lang.String["SANS"]);
FontStyle9.size = 0.1;
Text8.fontStyle = FontStyle9;

Shape7.geometry = Text8;

let Appearance10 = browser.currentScene.createNode("Appearance");
let Material11 = browser.currentScene.createNode("Material");
Material11.DEF = "TextMaterial";
Material11.diffuseColor = new SFColor(new float[0.9,0.9,0.9]);
Appearance10.material = Material11;

Shape7.appearance = Appearance10;

Billboard6.children = new MFNode();

Billboard6.children[0] = Shape7;

let Transform12 = browser.currentScene.createNode("Transform");
Transform12.translation = new SFVec3f(new float[0,-0.3,0]);
let Shape13 = browser.currentScene.createNode("Shape");
let Sphere14 = browser.currentScene.createNode("Sphere");
Sphere14.radius = 0.08;
Shape13.geometry = Sphere14;

let Appearance15 = browser.currentScene.createNode("Appearance");
let Material16 = browser.currentScene.createNode("Material");
Material16.DEF = "MIN_COLOR";
Material16.diffuseColor = new SFColor(new float[1,0,0]);
Appearance15.material = Material16;

Shape13.appearance = Appearance15;

Transform12.children = new MFNode();

Transform12.children[0] = Shape13;

let Transform17 = browser.currentScene.createNode("Transform");
Transform17.translation = new SFVec3f(new float[0.2,0,0]);
let Shape18 = browser.currentScene.createNode("Shape");
let Text19 = browser.currentScene.createNode("Text");
Text19.string = new MFString(new java.lang.String["Minimal Humanoid Joints"]);
let FontStyle20 = browser.currentScene.createNode("FontStyle");
FontStyle20.family = new MFString(new java.lang.String["SANS"]);
FontStyle20.size = 0.1;
Text19.fontStyle = FontStyle20;

Shape18.geometry = Text19;

let Appearance21 = browser.currentScene.createNode("Appearance");
let Material22 = browser.currentScene.createNode("Material");
Material22.USE = "TextMaterial";
Appearance21.material = Material22;

Shape18.appearance = Appearance21;

Transform17.children = new MFNode();

Transform17.children[0] = Shape18;

Transform12.children[1] = Transform17;

Billboard6.children[1] = Transform12;

let Transform23 = browser.currentScene.createNode("Transform");
Transform23.translation = new SFVec3f(new float[0,-0.5,0]);
let Shape24 = browser.currentScene.createNode("Shape");
let Sphere25 = browser.currentScene.createNode("Sphere");
Sphere25.radius = 0.08;
Shape24.geometry = Sphere25;

let Appearance26 = browser.currentScene.createNode("Appearance");
let Material27 = browser.currentScene.createNode("Material");
Material27.DEF = "JOINT_COLOR";
Material27.diffuseColor = new SFColor(new float[1,1,0]);
Appearance26.material = Material27;

Shape24.appearance = Appearance26;

Transform23.children = new MFNode();

Transform23.children[0] = Shape24;

let Transform28 = browser.currentScene.createNode("Transform");
Transform28.translation = new SFVec3f(new float[0.2,0,0]);
let Shape29 = browser.currentScene.createNode("Shape");
let Text30 = browser.currentScene.createNode("Text");
Text30.string = new MFString(new java.lang.String["Humanoid Joints"]);
let FontStyle31 = browser.currentScene.createNode("FontStyle");
FontStyle31.family = new MFString(new java.lang.String["SANS"]);
FontStyle31.size = 0.1;
Text30.fontStyle = FontStyle31;

Shape29.geometry = Text30;

let Appearance32 = browser.currentScene.createNode("Appearance");
let Material33 = browser.currentScene.createNode("Material");
Material33.USE = "TextMaterial";
Appearance32.material = Material33;

Shape29.appearance = Appearance32;

Transform28.children = new MFNode();

Transform28.children[0] = Shape29;

Transform23.children[1] = Transform28;

Billboard6.children[2] = Transform23;

let Transform34 = browser.currentScene.createNode("Transform");
Transform34.translation = new SFVec3f(new float[0,-0.7,0]);
let Shape35 = browser.currentScene.createNode("Shape");
let Sphere36 = browser.currentScene.createNode("Sphere");
Sphere36.radius = 0.08;
Shape35.geometry = Sphere36;

let Appearance37 = browser.currentScene.createNode("Appearance");
let Material38 = browser.currentScene.createNode("Material");
Material38.DEF = "REC_SPINAL_COLOR";
Material38.diffuseColor = new SFColor(new float[1,0,1]);
Appearance37.material = Material38;

Shape35.appearance = Appearance37;

Transform34.children = new MFNode();

Transform34.children[0] = Shape35;

let Transform39 = browser.currentScene.createNode("Transform");
Transform39.translation = new SFVec3f(new float[0.2,0,0]);
let Shape40 = browser.currentScene.createNode("Shape");
let Text41 = browser.currentScene.createNode("Text");
Text41.string = new MFString(new java.lang.String["Recommended Spinal Joints"]);
let FontStyle42 = browser.currentScene.createNode("FontStyle");
FontStyle42.family = new MFString(new java.lang.String["SANS"]);
FontStyle42.size = 0.1;
Text41.fontStyle = FontStyle42;

Shape40.geometry = Text41;

let Appearance43 = browser.currentScene.createNode("Appearance");
let Material44 = browser.currentScene.createNode("Material");
Material44.USE = "TextMaterial";
Appearance43.material = Material44;

Shape40.appearance = Appearance43;

Transform39.children = new MFNode();

Transform39.children[0] = Shape40;

Transform34.children[1] = Transform39;

Billboard6.children[3] = Transform34;

let Transform45 = browser.currentScene.createNode("Transform");
Transform45.translation = new SFVec3f(new float[0,-0.9,0]);
let Shape46 = browser.currentScene.createNode("Shape");
let Sphere47 = browser.currentScene.createNode("Sphere");
Sphere47.radius = 0.08;
Shape46.geometry = Sphere47;

let Appearance48 = browser.currentScene.createNode("Appearance");
let Material49 = browser.currentScene.createNode("Material");
Material49.DEF = "SPINAL_COLOR";
Material49.diffuseColor = new SFColor(new float[0,1,0]);
Appearance48.material = Material49;

Shape46.appearance = Appearance48;

Transform45.children = new MFNode();

Transform45.children[0] = Shape46;

let Transform50 = browser.currentScene.createNode("Transform");
Transform50.translation = new SFVec3f(new float[0.2,0,0]);
let Shape51 = browser.currentScene.createNode("Shape");
let Text52 = browser.currentScene.createNode("Text");
Text52.string = new MFString(new java.lang.String["Spinal Joints"]);
let FontStyle53 = browser.currentScene.createNode("FontStyle");
FontStyle53.family = new MFString(new java.lang.String["SANS"]);
FontStyle53.size = 0.1;
Text52.fontStyle = FontStyle53;

Shape51.geometry = Text52;

let Appearance54 = browser.currentScene.createNode("Appearance");
let Material55 = browser.currentScene.createNode("Material");
Material55.USE = "TextMaterial";
Appearance54.material = Material55;

Shape51.appearance = Appearance54;

Transform50.children = new MFNode();

Transform50.children[0] = Shape51;

Transform45.children[1] = Transform50;

Billboard6.children[4] = Transform45;

let Transform56 = browser.currentScene.createNode("Transform");
Transform56.translation = new SFVec3f(new float[0,-1.3,0]);
let Shape57 = browser.currentScene.createNode("Shape");
let Sphere58 = browser.currentScene.createNode("Sphere");
Sphere58.radius = 0.08;
Shape57.geometry = Sphere58;

let Appearance59 = browser.currentScene.createNode("Appearance");
let Material60 = browser.currentScene.createNode("Material");
Material60.DEF = "SITE_COLOR";
Material60.diffuseColor = new SFColor(new float[0,0,1]);
Appearance59.material = Material60;

Shape57.appearance = Appearance59;

Transform56.children = new MFNode();

Transform56.children[0] = Shape57;

let Transform61 = browser.currentScene.createNode("Transform");
Transform61.translation = new SFVec3f(new float[0.2,0,0]);
let Shape62 = browser.currentScene.createNode("Shape");
let Text63 = browser.currentScene.createNode("Text");
Text63.string = new MFString(new java.lang.String["Humanoid Sites"]);
let FontStyle64 = browser.currentScene.createNode("FontStyle");
FontStyle64.family = new MFString(new java.lang.String["SANS"]);
FontStyle64.size = 0.1;
Text63.fontStyle = FontStyle64;

Shape62.geometry = Text63;

let Appearance65 = browser.currentScene.createNode("Appearance");
let Material66 = browser.currentScene.createNode("Material");
Material66.USE = "TextMaterial";
Appearance65.material = Material66;

Shape62.appearance = Appearance65;

Transform61.children = new MFNode();

Transform61.children[0] = Shape62;

Transform56.children[1] = Transform61;

Billboard6.children[5] = Transform56;

let Transform67 = browser.currentScene.createNode("Transform");
Transform67.translation = new SFVec3f(new float[0,-1.1,0]);
let Shape68 = browser.currentScene.createNode("Shape");
let Sphere69 = browser.currentScene.createNode("Sphere");
Sphere69.radius = 0.08;
Shape68.geometry = Sphere69;

let Appearance70 = browser.currentScene.createNode("Appearance");
let Material71 = browser.currentScene.createNode("Material");
Material71.DEF = "HAND_FEET_COLOR";
Material71.diffuseColor = new SFColor(new float[0,1,1]);
Appearance70.material = Material71;

Shape68.appearance = Appearance70;

Transform67.children = new MFNode();

Transform67.children[0] = Shape68;

let Transform72 = browser.currentScene.createNode("Transform");
Transform72.translation = new SFVec3f(new float[0.2,0,0]);
let Shape73 = browser.currentScene.createNode("Shape");
let Text74 = browser.currentScene.createNode("Text");
Text74.string = new MFString(new java.lang.String["Hand & Feet Joints"]);
let FontStyle75 = browser.currentScene.createNode("FontStyle");
FontStyle75.family = new MFString(new java.lang.String["SANS"]);
FontStyle75.size = 0.1;
Text74.fontStyle = FontStyle75;

Shape73.geometry = Text74;

let Appearance76 = browser.currentScene.createNode("Appearance");
let Material77 = browser.currentScene.createNode("Material");
Material77.USE = "TextMaterial";
Appearance76.material = Material77;

Shape73.appearance = Appearance76;

Transform72.children = new MFNode();

Transform72.children[0] = Shape73;

Transform67.children[1] = Transform72;

Billboard6.children[6] = Transform67;

Transform5.children = new MFNode();

Transform5.children[0] = Billboard6;

browser.currentScene.children[3] = Transform5;

let HAnimHumanoid78 = browser.currentScene.createNode("HAnimHumanoid");
HAnimHumanoid78.name = "humanoid";
HAnimHumanoid78.DEF = "hanim_humanoid";
HAnimHumanoid78.version = "1.0";
//HAnimHumanoid original info='\"humanoidVersion=Nancy V1.2b\" \"authorName=Cindy Ballreich\" \"authorEmail=cindy@ballreich.net\" \"copyright=1997 3Name3D / Yglesias Wallock Divekar Inc. all rights reserved.\" \"creationDate=Tue Dec 30 08:30:08 PST 1997\" \"usageRestrictions=Noncommercial usage is ok if 3Name3D name and logo <www.ballreich.net/vrml/HAnim/small_logo.gif> is present and proper credit is given.\"'
let MetadataSet79 = browser.currentScene.createNode("MetadataSet");
MetadataSet79.name = "HAnimHumanoid.info";
MetadataSet79.reference = "https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid";
let MetadataString80 = browser.currentScene.createNode("MetadataString");
MetadataString80.name = "humanoidVersion";
MetadataString80.value = new MFString(new java.lang.String["Nancy V1.2b"]);
MetadataSet79.value = new MFNode();

MetadataSet79.value[0] = MetadataString80;

let MetadataString81 = browser.currentScene.createNode("MetadataString");
MetadataString81.name = "authorEmail";
MetadataString81.value = new MFString(new java.lang.String["cindy@ballreich.net"]);
MetadataSet79.value[1] = MetadataString81;

let MetadataString82 = browser.currentScene.createNode("MetadataString");
MetadataString82.name = "authorName";
MetadataString82.value = new MFString(new java.lang.String["Cindy Ballreich"]);
MetadataSet79.value[2] = MetadataString82;

let MetadataString83 = browser.currentScene.createNode("MetadataString");
MetadataString83.name = "copyright";
MetadataString83.value = new MFString(new java.lang.String["1997 3Name3D / Yglesias Wallock Divekar Inc. all rights reserved."]);
MetadataSet79.value[3] = MetadataString83;

let MetadataString84 = browser.currentScene.createNode("MetadataString");
MetadataString84.name = "creationDate";
MetadataString84.value = new MFString(new java.lang.String["Tue Dec 30 08:30:08 PST 1997"]);
MetadataSet79.value[4] = MetadataString84;

let MetadataString85 = browser.currentScene.createNode("MetadataString");
MetadataString85.name = "usageRestrictions";
MetadataString85.value = new MFString(new java.lang.String["Noncommercial usage is ok if 3Name3D name and logo <www.ballreich.net/vrml/HAnim/small_logo.gif> is present and proper credit is given."]);
MetadataSet79.value[5] = MetadataString85;

HAnimHumanoid78.metadata = MetadataSet79;

let HAnimJoint86 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint86.name = "HumanoidRoot";
HAnimJoint86.DEF = "hanim_HumanoidRoot";
HAnimJoint86.center = new SFVec3f(new float[0,0.824,0.0277]);
let HAnimSegment87 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment87.name = "sacrum";
HAnimSegment87.DEF = "hanim_sacrum";
let Transform88 = browser.currentScene.createNode("Transform");
Transform88.translation = new SFVec3f(new float[0,0.824,0.0277]);
let Shape89 = browser.currentScene.createNode("Shape");
Shape89.DEF = "DiamondShape";
let IndexedFaceSet90 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet90.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet90.creaseAngle = 0.5;
let Coordinate91 = browser.currentScene.createNode("Coordinate");
Coordinate91.DEF = "points";
Coordinate91.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet90.coord = Coordinate91;

Shape89.geometry = IndexedFaceSet90;

let Appearance92 = browser.currentScene.createNode("Appearance");
let Material93 = browser.currentScene.createNode("Material");
Material93.DEF = "ROOT_COLOR";
Material93.diffuseColor = new SFColor(new float[1,1,1]);
Appearance92.material = Material93;

Shape89.appearance = Appearance92;

Transform88.children = new MFNode();

Transform88.children[0] = Shape89;

let Transform94 = browser.currentScene.createNode("Transform");
Transform94.translation = new SFVec3f(new float[0,0.01,0]);
let Billboard95 = browser.currentScene.createNode("Billboard");
let Shape96 = browser.currentScene.createNode("Shape");
let Text97 = browser.currentScene.createNode("Text");
Text97.string = new MFString(new java.lang.String["Humanoid Root"]);
let FontStyle98 = browser.currentScene.createNode("FontStyle");
FontStyle98.family = new MFString(new java.lang.String["SANS"]);
FontStyle98.size = 0.01;
FontStyle98.style = "ITALIC";
Text97.fontStyle = FontStyle98;

Shape96.geometry = Text97;

let Appearance99 = browser.currentScene.createNode("Appearance");
let Material100 = browser.currentScene.createNode("Material");
Material100.diffuseColor = new SFColor(new float[0.039216,1,0.568627]);
Appearance99.material = Material100;

Shape96.appearance = Appearance99;

Billboard95.children = new MFNode();

Billboard95.children[0] = Shape96;

Transform94.children = new MFNode();

Transform94.children[0] = Billboard95;

Transform88.children[1] = Transform94;

HAnimSegment87.children = new MFNode();

HAnimSegment87.children[0] = Transform88;

HAnimJoint86.children = new MFNode();

HAnimJoint86.children[0] = HAnimSegment87;

let HAnimJoint101 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint101.name = "sacroiliac";
HAnimJoint101.DEF = "hanim_sacroiliac";
HAnimJoint101.center = new SFVec3f(new float[0,0.9149,0.0016]);
let HAnimSegment102 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment102.name = "pelvis";
HAnimSegment102.DEF = "hanim_pelvis";
let Transform103 = browser.currentScene.createNode("Transform");
Transform103.DEF = "sacroiliacPos";
Transform103.translation = new SFVec3f(new float[0,0.9149,0.0016]);
let Shape104 = browser.currentScene.createNode("Shape");
let IndexedFaceSet105 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet105.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet105.creaseAngle = 0.5;
let Coordinate106 = browser.currentScene.createNode("Coordinate");
Coordinate106.USE = "points";
IndexedFaceSet105.coord = Coordinate106;

Shape104.geometry = IndexedFaceSet105;

let Appearance107 = browser.currentScene.createNode("Appearance");
let Material108 = browser.currentScene.createNode("Material");
Material108.USE = "MIN_COLOR";
Appearance107.material = Material108;

Shape104.appearance = Appearance107;

Transform103.children = new MFNode();

Transform103.children[0] = Shape104;

HAnimSegment102.children = new MFNode();

HAnimSegment102.children[0] = Transform103;

let HAnimSite109 = browser.currentScene.createNode("HAnimSite");
HAnimSite109.name = "r_iliocristale_pt";
HAnimSite109.DEF = "hanim_r_iliocristale_pt";
HAnimSite109.translation = new SFVec3f(new float[-0.1525,1.0628,0.0035]);
let Shape110 = browser.currentScene.createNode("Shape");
let IndexedFaceSet111 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet111.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet111.creaseAngle = 0.5;
let Coordinate112 = browser.currentScene.createNode("Coordinate");
Coordinate112.USE = "points";
IndexedFaceSet111.coord = Coordinate112;

Shape110.geometry = IndexedFaceSet111;

let Appearance113 = browser.currentScene.createNode("Appearance");
let Material114 = browser.currentScene.createNode("Material");
Material114.USE = "SITE_COLOR";
Appearance113.material = Material114;

Shape110.appearance = Appearance113;

HAnimSite109.children = new MFNode();

HAnimSite109.children[0] = Shape110;

HAnimSegment102.children[1] = HAnimSite109;

let HAnimSite115 = browser.currentScene.createNode("HAnimSite");
HAnimSite115.name = "r_trochanterion_pt";
HAnimSite115.DEF = "hanim_r_trochanterion_pt";
HAnimSite115.translation = new SFVec3f(new float[-0.1689,0.8419,0.0352]);
let Shape116 = browser.currentScene.createNode("Shape");
let IndexedFaceSet117 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet117.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet117.creaseAngle = 0.5;
let Coordinate118 = browser.currentScene.createNode("Coordinate");
Coordinate118.USE = "points";
IndexedFaceSet117.coord = Coordinate118;

Shape116.geometry = IndexedFaceSet117;

let Appearance119 = browser.currentScene.createNode("Appearance");
let Material120 = browser.currentScene.createNode("Material");
Material120.USE = "SITE_COLOR";
Appearance119.material = Material120;

Shape116.appearance = Appearance119;

HAnimSite115.children = new MFNode();

HAnimSite115.children[0] = Shape116;

HAnimSegment102.children[2] = HAnimSite115;

let HAnimSite121 = browser.currentScene.createNode("HAnimSite");
HAnimSite121.name = "l_iliocristale_pt";
HAnimSite121.DEF = "hanim_l_iliocristale_pt";
HAnimSite121.translation = new SFVec3f(new float[0.1612,1.0537,0.0008]);
let Shape122 = browser.currentScene.createNode("Shape");
let IndexedFaceSet123 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet123.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet123.creaseAngle = 0.5;
let Coordinate124 = browser.currentScene.createNode("Coordinate");
Coordinate124.USE = "points";
IndexedFaceSet123.coord = Coordinate124;

Shape122.geometry = IndexedFaceSet123;

let Appearance125 = browser.currentScene.createNode("Appearance");
let Material126 = browser.currentScene.createNode("Material");
Material126.USE = "SITE_COLOR";
Appearance125.material = Material126;

Shape122.appearance = Appearance125;

HAnimSite121.children = new MFNode();

HAnimSite121.children[0] = Shape122;

HAnimSegment102.children[3] = HAnimSite121;

let HAnimSite127 = browser.currentScene.createNode("HAnimSite");
HAnimSite127.name = "l_trochanterion_pt";
HAnimSite127.DEF = "hanim_l_trochanterion_pt";
HAnimSite127.translation = new SFVec3f(new float[0.1677,0.8336,0.0303]);
let Shape128 = browser.currentScene.createNode("Shape");
let IndexedFaceSet129 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet129.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet129.creaseAngle = 0.5;
let Coordinate130 = browser.currentScene.createNode("Coordinate");
Coordinate130.USE = "points";
IndexedFaceSet129.coord = Coordinate130;

Shape128.geometry = IndexedFaceSet129;

let Appearance131 = browser.currentScene.createNode("Appearance");
let Material132 = browser.currentScene.createNode("Material");
Material132.USE = "SITE_COLOR";
Appearance131.material = Material132;

Shape128.appearance = Appearance131;

HAnimSite127.children = new MFNode();

HAnimSite127.children[0] = Shape128;

HAnimSegment102.children[4] = HAnimSite127;

let HAnimSite133 = browser.currentScene.createNode("HAnimSite");
HAnimSite133.name = "r_asis_pt";
HAnimSite133.DEF = "hanim_r_asis_pt";
HAnimSite133.translation = new SFVec3f(new float[-0.0887,1.0021,0.1112]);
let Shape134 = browser.currentScene.createNode("Shape");
let IndexedFaceSet135 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet135.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet135.creaseAngle = 0.5;
let Coordinate136 = browser.currentScene.createNode("Coordinate");
Coordinate136.USE = "points";
IndexedFaceSet135.coord = Coordinate136;

Shape134.geometry = IndexedFaceSet135;

let Appearance137 = browser.currentScene.createNode("Appearance");
let Material138 = browser.currentScene.createNode("Material");
Material138.USE = "SITE_COLOR";
Appearance137.material = Material138;

Shape134.appearance = Appearance137;

HAnimSite133.children = new MFNode();

HAnimSite133.children[0] = Shape134;

HAnimSegment102.children[5] = HAnimSite133;

let HAnimSite139 = browser.currentScene.createNode("HAnimSite");
HAnimSite139.name = "l_asis_pt";
HAnimSite139.DEF = "hanim_l_asis_pt";
HAnimSite139.translation = new SFVec3f(new float[0.0925,0.9983,0.1052]);
let Shape140 = browser.currentScene.createNode("Shape");
let IndexedFaceSet141 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet141.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet141.creaseAngle = 0.5;
let Coordinate142 = browser.currentScene.createNode("Coordinate");
Coordinate142.USE = "points";
IndexedFaceSet141.coord = Coordinate142;

Shape140.geometry = IndexedFaceSet141;

let Appearance143 = browser.currentScene.createNode("Appearance");
let Material144 = browser.currentScene.createNode("Material");
Material144.USE = "SITE_COLOR";
Appearance143.material = Material144;

Shape140.appearance = Appearance143;

HAnimSite139.children = new MFNode();

HAnimSite139.children[0] = Shape140;

HAnimSegment102.children[6] = HAnimSite139;

let HAnimSite145 = browser.currentScene.createNode("HAnimSite");
HAnimSite145.name = "r_psis_pt";
HAnimSite145.DEF = "hanim_r_psis_pt";
HAnimSite145.translation = new SFVec3f(new float[-0.0716,1.019,-0.1138]);
let Shape146 = browser.currentScene.createNode("Shape");
let IndexedFaceSet147 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet147.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet147.creaseAngle = 0.5;
let Coordinate148 = browser.currentScene.createNode("Coordinate");
Coordinate148.USE = "points";
IndexedFaceSet147.coord = Coordinate148;

Shape146.geometry = IndexedFaceSet147;

let Appearance149 = browser.currentScene.createNode("Appearance");
let Material150 = browser.currentScene.createNode("Material");
Material150.USE = "SITE_COLOR";
Appearance149.material = Material150;

Shape146.appearance = Appearance149;

HAnimSite145.children = new MFNode();

HAnimSite145.children[0] = Shape146;

HAnimSegment102.children[7] = HAnimSite145;

let HAnimSite151 = browser.currentScene.createNode("HAnimSite");
HAnimSite151.name = "l_psis_pt";
HAnimSite151.DEF = "hanim_l_psis_pt";
HAnimSite151.translation = new SFVec3f(new float[0.0774,1.019,-0.1151]);
let Shape152 = browser.currentScene.createNode("Shape");
let IndexedFaceSet153 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet153.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet153.creaseAngle = 0.5;
let Coordinate154 = browser.currentScene.createNode("Coordinate");
Coordinate154.USE = "points";
IndexedFaceSet153.coord = Coordinate154;

Shape152.geometry = IndexedFaceSet153;

let Appearance155 = browser.currentScene.createNode("Appearance");
let Material156 = browser.currentScene.createNode("Material");
Material156.USE = "SITE_COLOR";
Appearance155.material = Material156;

Shape152.appearance = Appearance155;

HAnimSite151.children = new MFNode();

HAnimSite151.children[0] = Shape152;

HAnimSegment102.children[8] = HAnimSite151;

let HAnimSite157 = browser.currentScene.createNode("HAnimSite");
HAnimSite157.name = "crotch_pt";
HAnimSite157.DEF = "hanim_crotch_pt";
HAnimSite157.translation = new SFVec3f(new float[0.0034,0.8266,0.0257]);
let Shape158 = browser.currentScene.createNode("Shape");
let IndexedFaceSet159 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet159.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet159.creaseAngle = 0.5;
let Coordinate160 = browser.currentScene.createNode("Coordinate");
Coordinate160.USE = "points";
IndexedFaceSet159.coord = Coordinate160;

Shape158.geometry = IndexedFaceSet159;

let Appearance161 = browser.currentScene.createNode("Appearance");
let Material162 = browser.currentScene.createNode("Material");
Material162.USE = "SITE_COLOR";
Appearance161.material = Material162;

Shape158.appearance = Appearance161;

HAnimSite157.children = new MFNode();

HAnimSite157.children[0] = Shape158;

HAnimSegment102.children[9] = HAnimSite157;

HAnimJoint101.children = new MFNode();

HAnimJoint101.children[0] = HAnimSegment102;

let HAnimJoint163 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint163.name = "l_hip";
HAnimJoint163.DEF = "hanim_l_hip";
HAnimJoint163.center = new SFVec3f(new float[0.0961,0.9124,-0.0001]);
let HAnimSegment164 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment164.name = "l_thigh";
HAnimSegment164.DEF = "hanim_l_thigh";
let Transform165 = browser.currentScene.createNode("Transform");
Transform165.translation = new SFVec3f(new float[0.0961,0.9124,-0.0001]);
let Shape166 = browser.currentScene.createNode("Shape");
let IndexedFaceSet167 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet167.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet167.creaseAngle = 0.5;
let Coordinate168 = browser.currentScene.createNode("Coordinate");
Coordinate168.USE = "points";
IndexedFaceSet167.coord = Coordinate168;

Shape166.geometry = IndexedFaceSet167;

let Appearance169 = browser.currentScene.createNode("Appearance");
let Material170 = browser.currentScene.createNode("Material");
Material170.USE = "MIN_COLOR";
Appearance169.material = Material170;

Shape166.appearance = Appearance169;

Transform165.children = new MFNode();

Transform165.children[0] = Shape166;

HAnimSegment164.children = new MFNode();

HAnimSegment164.children[0] = Transform165;

let HAnimSite171 = browser.currentScene.createNode("HAnimSite");
HAnimSite171.name = "l_knee_crease_pt";
HAnimSite171.DEF = "hanim_l_knee_crease_pt";
HAnimSite171.translation = new SFVec3f(new float[0.0993,0.4881,-0.0309]);
let Shape172 = browser.currentScene.createNode("Shape");
let IndexedFaceSet173 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet173.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet173.creaseAngle = 0.5;
let Coordinate174 = browser.currentScene.createNode("Coordinate");
Coordinate174.USE = "points";
IndexedFaceSet173.coord = Coordinate174;

Shape172.geometry = IndexedFaceSet173;

let Appearance175 = browser.currentScene.createNode("Appearance");
let Material176 = browser.currentScene.createNode("Material");
Material176.USE = "SITE_COLOR";
Appearance175.material = Material176;

Shape172.appearance = Appearance175;

HAnimSite171.children = new MFNode();

HAnimSite171.children[0] = Shape172;

HAnimSegment164.children[1] = HAnimSite171;

let HAnimSite177 = browser.currentScene.createNode("HAnimSite");
HAnimSite177.name = "l_femoral_lateral_epicn_pt";
HAnimSite177.DEF = "hanim_l_femoral_lateral_epicn_pt";
HAnimSite177.translation = new SFVec3f(new float[0.1598,0.4967,0.0297]);
let Shape178 = browser.currentScene.createNode("Shape");
let IndexedFaceSet179 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet179.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet179.creaseAngle = 0.5;
let Coordinate180 = browser.currentScene.createNode("Coordinate");
Coordinate180.USE = "points";
IndexedFaceSet179.coord = Coordinate180;

Shape178.geometry = IndexedFaceSet179;

let Appearance181 = browser.currentScene.createNode("Appearance");
let Material182 = browser.currentScene.createNode("Material");
Material182.USE = "SITE_COLOR";
Appearance181.material = Material182;

Shape178.appearance = Appearance181;

HAnimSite177.children = new MFNode();

HAnimSite177.children[0] = Shape178;

HAnimSegment164.children[2] = HAnimSite177;

let HAnimSite183 = browser.currentScene.createNode("HAnimSite");
HAnimSite183.name = "l_femoral_medial_epicn_pt";
HAnimSite183.DEF = "hanim_l_femoral_medial_epicn_pt";
HAnimSite183.translation = new SFVec3f(new float[0.0398,0.4946,0.0303]);
let Shape184 = browser.currentScene.createNode("Shape");
let IndexedFaceSet185 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet185.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet185.creaseAngle = 0.5;
let Coordinate186 = browser.currentScene.createNode("Coordinate");
Coordinate186.USE = "points";
IndexedFaceSet185.coord = Coordinate186;

Shape184.geometry = IndexedFaceSet185;

let Appearance187 = browser.currentScene.createNode("Appearance");
let Material188 = browser.currentScene.createNode("Material");
Material188.USE = "SITE_COLOR";
Appearance187.material = Material188;

Shape184.appearance = Appearance187;

HAnimSite183.children = new MFNode();

HAnimSite183.children[0] = Shape184;

HAnimSegment164.children[3] = HAnimSite183;

HAnimJoint163.children = new MFNode();

HAnimJoint163.children[0] = HAnimSegment164;

let HAnimJoint189 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint189.name = "l_knee";
HAnimJoint189.DEF = "hanim_l_knee";
HAnimJoint189.center = new SFVec3f(new float[0.104,0.4867,0.0308]);
let HAnimSegment190 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment190.name = "l_calf";
HAnimSegment190.DEF = "hanim_l_calf";
let Transform191 = browser.currentScene.createNode("Transform");
Transform191.translation = new SFVec3f(new float[0.104,0.4867,0.0308]);
let Shape192 = browser.currentScene.createNode("Shape");
let IndexedFaceSet193 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet193.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet193.creaseAngle = 0.5;
let Coordinate194 = browser.currentScene.createNode("Coordinate");
Coordinate194.USE = "points";
IndexedFaceSet193.coord = Coordinate194;

Shape192.geometry = IndexedFaceSet193;

let Appearance195 = browser.currentScene.createNode("Appearance");
let Material196 = browser.currentScene.createNode("Material");
Material196.USE = "MIN_COLOR";
Appearance195.material = Material196;

Shape192.appearance = Appearance195;

Transform191.children = new MFNode();

Transform191.children[0] = Shape192;

HAnimSegment190.children = new MFNode();

HAnimSegment190.children[0] = Transform191;

HAnimJoint189.children = new MFNode();

HAnimJoint189.children[0] = HAnimSegment190;

let HAnimJoint197 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint197.name = "l_ankle";
HAnimJoint197.DEF = "hanim_l_ankle";
HAnimJoint197.center = new SFVec3f(new float[0.1101,0.0656,-0.0736]);
let HAnimSegment198 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment198.name = "l_hindfoot";
HAnimSegment198.DEF = "hanim_l_hindfoot";
let Transform199 = browser.currentScene.createNode("Transform");
Transform199.translation = new SFVec3f(new float[0.1101,0.0656,-0.0736]);
let Shape200 = browser.currentScene.createNode("Shape");
let IndexedFaceSet201 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet201.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet201.creaseAngle = 0.5;
let Coordinate202 = browser.currentScene.createNode("Coordinate");
Coordinate202.USE = "points";
IndexedFaceSet201.coord = Coordinate202;

Shape200.geometry = IndexedFaceSet201;

let Appearance203 = browser.currentScene.createNode("Appearance");
let Material204 = browser.currentScene.createNode("Material");
Material204.USE = "MIN_COLOR";
Appearance203.material = Material204;

Shape200.appearance = Appearance203;

Transform199.children = new MFNode();

Transform199.children[0] = Shape200;

HAnimSegment198.children = new MFNode();

HAnimSegment198.children[0] = Transform199;

let HAnimSite205 = browser.currentScene.createNode("HAnimSite");
HAnimSite205.name = "l_lateral_malleolus_pt";
HAnimSite205.DEF = "hanim_l_lateral_malleolus_pt";
HAnimSite205.translation = new SFVec3f(new float[0.1308,0.0597,-0.1032]);
let Shape206 = browser.currentScene.createNode("Shape");
let IndexedFaceSet207 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet207.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet207.creaseAngle = 0.5;
let Coordinate208 = browser.currentScene.createNode("Coordinate");
Coordinate208.USE = "points";
IndexedFaceSet207.coord = Coordinate208;

Shape206.geometry = IndexedFaceSet207;

let Appearance209 = browser.currentScene.createNode("Appearance");
let Material210 = browser.currentScene.createNode("Material");
Material210.USE = "HAND_FEET_COLOR";
Appearance209.material = Material210;

Shape206.appearance = Appearance209;

HAnimSite205.children = new MFNode();

HAnimSite205.children[0] = Shape206;

HAnimSegment198.children[1] = HAnimSite205;

let HAnimSite211 = browser.currentScene.createNode("HAnimSite");
HAnimSite211.name = "l_medial_malleolus_pt";
HAnimSite211.DEF = "hanim_l_medial_malleolus_pt";
HAnimSite211.translation = new SFVec3f(new float[0.089,0.0716,-0.0881]);
let Shape212 = browser.currentScene.createNode("Shape");
let IndexedFaceSet213 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet213.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet213.creaseAngle = 0.5;
let Coordinate214 = browser.currentScene.createNode("Coordinate");
Coordinate214.USE = "points";
IndexedFaceSet213.coord = Coordinate214;

Shape212.geometry = IndexedFaceSet213;

let Appearance215 = browser.currentScene.createNode("Appearance");
let Material216 = browser.currentScene.createNode("Material");
Material216.USE = "HAND_FEET_COLOR";
Appearance215.material = Material216;

Shape212.appearance = Appearance215;

HAnimSite211.children = new MFNode();

HAnimSite211.children[0] = Shape212;

HAnimSegment198.children[2] = HAnimSite211;

let HAnimSite217 = browser.currentScene.createNode("HAnimSite");
HAnimSite217.name = "l_sphyrion_pt";
HAnimSite217.DEF = "hanim_l_sphyrion_pt";
HAnimSite217.translation = new SFVec3f(new float[0.089,0.0575,-0.0943]);
let Shape218 = browser.currentScene.createNode("Shape");
let IndexedFaceSet219 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet219.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet219.creaseAngle = 0.5;
let Coordinate220 = browser.currentScene.createNode("Coordinate");
Coordinate220.USE = "points";
IndexedFaceSet219.coord = Coordinate220;

Shape218.geometry = IndexedFaceSet219;

let Appearance221 = browser.currentScene.createNode("Appearance");
let Material222 = browser.currentScene.createNode("Material");
Material222.USE = "HAND_FEET_COLOR";
Appearance221.material = Material222;

Shape218.appearance = Appearance221;

HAnimSite217.children = new MFNode();

HAnimSite217.children[0] = Shape218;

HAnimSegment198.children[3] = HAnimSite217;

let HAnimSite223 = browser.currentScene.createNode("HAnimSite");
HAnimSite223.name = "l_calcaneous_post_pt";
HAnimSite223.DEF = "hanim_l_calcaneous_post_pt";
HAnimSite223.translation = new SFVec3f(new float[0.0974,0.0259,-0.1171]);
let Shape224 = browser.currentScene.createNode("Shape");
let IndexedFaceSet225 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet225.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet225.creaseAngle = 0.5;
let Coordinate226 = browser.currentScene.createNode("Coordinate");
Coordinate226.USE = "points";
IndexedFaceSet225.coord = Coordinate226;

Shape224.geometry = IndexedFaceSet225;

let Appearance227 = browser.currentScene.createNode("Appearance");
let Material228 = browser.currentScene.createNode("Material");
Material228.USE = "HAND_FEET_COLOR";
Appearance227.material = Material228;

Shape224.appearance = Appearance227;

HAnimSite223.children = new MFNode();

HAnimSite223.children[0] = Shape224;

HAnimSegment198.children[4] = HAnimSite223;

HAnimJoint197.children = new MFNode();

HAnimJoint197.children[0] = HAnimSegment198;

let HAnimJoint229 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint229.name = "l_subtalar";
HAnimJoint229.DEF = "hanim_l_subtalar";
HAnimJoint229.center = new SFVec3f(new float[0.1086,0.0001,-0.0368]);
let HAnimSegment230 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment230.name = "midproximal";
HAnimSegment230.DEF = "hanim_midproximal";
let Transform231 = browser.currentScene.createNode("Transform");
Transform231.translation = new SFVec3f(new float[0.1086,0.0001,-0.0368]);
let Shape232 = browser.currentScene.createNode("Shape");
let IndexedFaceSet233 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet233.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet233.creaseAngle = 0.5;
let Coordinate234 = browser.currentScene.createNode("Coordinate");
Coordinate234.USE = "points";
IndexedFaceSet233.coord = Coordinate234;

Shape232.geometry = IndexedFaceSet233;

let Appearance235 = browser.currentScene.createNode("Appearance");
let Material236 = browser.currentScene.createNode("Material");
Material236.USE = "MIN_COLOR";
Appearance235.material = Material236;

Shape232.appearance = Appearance235;

Transform231.children = new MFNode();

Transform231.children[0] = Shape232;

HAnimSegment230.children = new MFNode();

HAnimSegment230.children[0] = Transform231;

HAnimJoint229.children = new MFNode();

HAnimJoint229.children[0] = HAnimSegment230;

let HAnimJoint237 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint237.name = "l_midtarsal";
HAnimJoint237.DEF = "hanim_l_midtarsal";
HAnimJoint237.center = new SFVec3f(new float[0.1086,0.0001,0.0368]);
let HAnimSegment238 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment238.name = "l_middistal";
HAnimSegment238.DEF = "hanim_l_middistal";
let Transform239 = browser.currentScene.createNode("Transform");
Transform239.translation = new SFVec3f(new float[0.1086,0.0001,0.0368]);
let Shape240 = browser.currentScene.createNode("Shape");
let IndexedFaceSet241 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet241.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet241.creaseAngle = 0.5;
let Coordinate242 = browser.currentScene.createNode("Coordinate");
Coordinate242.USE = "points";
IndexedFaceSet241.coord = Coordinate242;

Shape240.geometry = IndexedFaceSet241;

let Appearance243 = browser.currentScene.createNode("Appearance");
let Material244 = browser.currentScene.createNode("Material");
Material244.USE = "JOINT_COLOR";
Appearance243.material = Material244;

Shape240.appearance = Appearance243;

Transform239.children = new MFNode();

Transform239.children[0] = Shape240;

HAnimSegment238.children = new MFNode();

HAnimSegment238.children[0] = Transform239;

let HAnimSite245 = browser.currentScene.createNode("HAnimSite");
HAnimSite245.name = "l_middistal_tip";
HAnimSite245.DEF = "hanim_l_middistal_tip";
HAnimSite245.translation = new SFVec3f(new float[0.1354,0.0016,0.1476]);
let Shape246 = browser.currentScene.createNode("Shape");
let IndexedFaceSet247 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet247.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet247.creaseAngle = 0.5;
let Coordinate248 = browser.currentScene.createNode("Coordinate");
Coordinate248.USE = "points";
IndexedFaceSet247.coord = Coordinate248;

Shape246.geometry = IndexedFaceSet247;

let Appearance249 = browser.currentScene.createNode("Appearance");
let Material250 = browser.currentScene.createNode("Material");
Material250.USE = "HAND_FEET_COLOR";
Appearance249.material = Material250;

Shape246.appearance = Appearance249;

HAnimSite245.children = new MFNode();

HAnimSite245.children[0] = Shape246;

HAnimSegment238.children[1] = HAnimSite245;

let HAnimSite251 = browser.currentScene.createNode("HAnimSite");
HAnimSite251.name = "l_metatarsal_pha1_pt";
HAnimSite251.DEF = "hanim_l_metatarsal_pha1_pt";
HAnimSite251.translation = new SFVec3f(new float[0.0816,0.0232,0.0106]);
let Shape252 = browser.currentScene.createNode("Shape");
let IndexedFaceSet253 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet253.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet253.creaseAngle = 0.5;
let Coordinate254 = browser.currentScene.createNode("Coordinate");
Coordinate254.USE = "points";
IndexedFaceSet253.coord = Coordinate254;

Shape252.geometry = IndexedFaceSet253;

let Appearance255 = browser.currentScene.createNode("Appearance");
let Material256 = browser.currentScene.createNode("Material");
Material256.USE = "HAND_FEET_COLOR";
Appearance255.material = Material256;

Shape252.appearance = Appearance255;

HAnimSite251.children = new MFNode();

HAnimSite251.children[0] = Shape252;

HAnimSegment238.children[2] = HAnimSite251;

HAnimJoint237.children = new MFNode();

HAnimJoint237.children[0] = HAnimSegment238;

let HAnimJoint257 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint257.name = "l_metatarsal";
HAnimJoint257.DEF = "hanim_l_metatarsal";
HAnimJoint257.center = new SFVec3f(new float[0.1086,0,0.0762]);
let HAnimSegment258 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment258.name = "l_forefoot";
HAnimSegment258.DEF = "hanim_l_forefoot";
let Transform259 = browser.currentScene.createNode("Transform");
Transform259.translation = new SFVec3f(new float[0.1086,0,0.0762]);
let Shape260 = browser.currentScene.createNode("Shape");
let IndexedFaceSet261 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet261.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet261.creaseAngle = 0.5;
let Coordinate262 = browser.currentScene.createNode("Coordinate");
Coordinate262.USE = "points";
IndexedFaceSet261.coord = Coordinate262;

Shape260.geometry = IndexedFaceSet261;

let Appearance263 = browser.currentScene.createNode("Appearance");
let Material264 = browser.currentScene.createNode("Material");
Material264.USE = "JOINT_COLOR";
Appearance263.material = Material264;

Shape260.appearance = Appearance263;

Transform259.children = new MFNode();

Transform259.children[0] = Shape260;

HAnimSegment258.children = new MFNode();

HAnimSegment258.children[0] = Transform259;

let HAnimSite265 = browser.currentScene.createNode("HAnimSite");
HAnimSite265.name = "l_forefoot_tip";
HAnimSite265.DEF = "hanim_l_forefoot_tip";
HAnimSite265.translation = new SFVec3f(new float[0.1354,0.0016,0.1476]);
let Shape266 = browser.currentScene.createNode("Shape");
let IndexedFaceSet267 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet267.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet267.creaseAngle = 0.5;
let Coordinate268 = browser.currentScene.createNode("Coordinate");
Coordinate268.USE = "points";
IndexedFaceSet267.coord = Coordinate268;

Shape266.geometry = IndexedFaceSet267;

let Appearance269 = browser.currentScene.createNode("Appearance");
let Material270 = browser.currentScene.createNode("Material");
Material270.USE = "HAND_FEET_COLOR";
Appearance269.material = Material270;

Shape266.appearance = Appearance269;

HAnimSite265.children = new MFNode();

HAnimSite265.children[0] = Shape266;

HAnimSegment258.children[1] = HAnimSite265;

let HAnimSite271 = browser.currentScene.createNode("HAnimSite");
HAnimSite271.name = "l_metatarsal_pha5_pt";
HAnimSite271.DEF = "hanim_l_metatarsal_pha5_pt";
HAnimSite271.translation = new SFVec3f(new float[0.1825,0.007,0.0928]);
//# CAESAR Feature Point #66
let Shape272 = browser.currentScene.createNode("Shape");
let IndexedFaceSet273 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet273.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet273.creaseAngle = 0.5;
let Coordinate274 = browser.currentScene.createNode("Coordinate");
Coordinate274.USE = "points";
IndexedFaceSet273.coord = Coordinate274;

Shape272.geometry = IndexedFaceSet273;

let Appearance275 = browser.currentScene.createNode("Appearance");
let Material276 = browser.currentScene.createNode("Material");
Material276.USE = "HAND_FEET_COLOR";
Appearance275.material = Material276;

Shape272.appearance = Appearance275;

HAnimSite271.children = new MFNode();

HAnimSite271.children[0] = Shape272;

HAnimSegment258.children[2] = HAnimSite271;

let HAnimSite277 = browser.currentScene.createNode("HAnimSite");
HAnimSite277.name = "l_digit2_pt";
HAnimSite277.DEF = "hanim_l_digit2_pt";
HAnimSite277.translation = new SFVec3f(new float[0.1195,0.0079,0.1433]);
//# CAESAR Feature Point #72
let Shape278 = browser.currentScene.createNode("Shape");
let IndexedFaceSet279 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet279.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet279.creaseAngle = 0.5;
let Coordinate280 = browser.currentScene.createNode("Coordinate");
Coordinate280.USE = "points";
IndexedFaceSet279.coord = Coordinate280;

Shape278.geometry = IndexedFaceSet279;

let Appearance281 = browser.currentScene.createNode("Appearance");
let Material282 = browser.currentScene.createNode("Material");
Material282.USE = "HAND_FEET_COLOR";
Appearance281.material = Material282;

Shape278.appearance = Appearance281;

HAnimSite277.children = new MFNode();

HAnimSite277.children[0] = Shape278;

HAnimSegment258.children[3] = HAnimSite277;

HAnimJoint257.children = new MFNode();

HAnimJoint257.children[0] = HAnimSegment258;

HAnimJoint237.children[1] = HAnimJoint257;

HAnimJoint229.children[1] = HAnimJoint237;

HAnimJoint197.children[1] = HAnimJoint229;

HAnimJoint189.children[1] = HAnimJoint197;

HAnimJoint163.children[1] = HAnimJoint189;

HAnimJoint101.children[1] = HAnimJoint163;

let HAnimJoint283 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint283.name = "r_hip";
HAnimJoint283.DEF = "hanim_r_hip";
HAnimJoint283.center = new SFVec3f(new float[-0.095,0.9171,0.0029]);
let HAnimSegment284 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment284.name = "r_thigh";
HAnimSegment284.DEF = "hanim_r_thigh";
let Transform285 = browser.currentScene.createNode("Transform");
Transform285.translation = new SFVec3f(new float[-0.095,0.9171,0.0029]);
let Shape286 = browser.currentScene.createNode("Shape");
let IndexedFaceSet287 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet287.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet287.creaseAngle = 0.5;
let Coordinate288 = browser.currentScene.createNode("Coordinate");
Coordinate288.USE = "points";
IndexedFaceSet287.coord = Coordinate288;

Shape286.geometry = IndexedFaceSet287;

let Appearance289 = browser.currentScene.createNode("Appearance");
let Material290 = browser.currentScene.createNode("Material");
Material290.USE = "MIN_COLOR";
Appearance289.material = Material290;

Shape286.appearance = Appearance289;

Transform285.children = new MFNode();

Transform285.children[0] = Shape286;

HAnimSegment284.children = new MFNode();

HAnimSegment284.children[0] = Transform285;

let HAnimSite291 = browser.currentScene.createNode("HAnimSite");
HAnimSite291.name = "r_knee_crease_pt";
HAnimSite291.DEF = "hanim_r_knee_crease_pt";
HAnimSite291.translation = new SFVec3f(new float[-0.0825,0.4932,-0.0326]);
let Shape292 = browser.currentScene.createNode("Shape");
let IndexedFaceSet293 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet293.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet293.creaseAngle = 0.5;
let Coordinate294 = browser.currentScene.createNode("Coordinate");
Coordinate294.USE = "points";
IndexedFaceSet293.coord = Coordinate294;

Shape292.geometry = IndexedFaceSet293;

let Appearance295 = browser.currentScene.createNode("Appearance");
let Material296 = browser.currentScene.createNode("Material");
Material296.USE = "SITE_COLOR";
Appearance295.material = Material296;

Shape292.appearance = Appearance295;

HAnimSite291.children = new MFNode();

HAnimSite291.children[0] = Shape292;

HAnimSegment284.children[1] = HAnimSite291;

let HAnimSite297 = browser.currentScene.createNode("HAnimSite");
HAnimSite297.name = "r_femoral_lateral_epicn_pt";
HAnimSite297.DEF = "hanim_r_femoral_lateral_epicn_pt";
HAnimSite297.translation = new SFVec3f(new float[-0.1421,0.4992,0.031]);
let Shape298 = browser.currentScene.createNode("Shape");
let IndexedFaceSet299 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet299.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet299.creaseAngle = 0.5;
let Coordinate300 = browser.currentScene.createNode("Coordinate");
Coordinate300.USE = "points";
IndexedFaceSet299.coord = Coordinate300;

Shape298.geometry = IndexedFaceSet299;

let Appearance301 = browser.currentScene.createNode("Appearance");
let Material302 = browser.currentScene.createNode("Material");
Material302.USE = "SITE_COLOR";
Appearance301.material = Material302;

Shape298.appearance = Appearance301;

HAnimSite297.children = new MFNode();

HAnimSite297.children[0] = Shape298;

HAnimSegment284.children[2] = HAnimSite297;

let HAnimSite303 = browser.currentScene.createNode("HAnimSite");
HAnimSite303.name = "r_femoral_medial_epicn_pt";
HAnimSite303.DEF = "hanim_r_femoral_medial_epicn_pt";
HAnimSite303.translation = new SFVec3f(new float[-0.0221,0.5014,0.0289]);
let Shape304 = browser.currentScene.createNode("Shape");
let IndexedFaceSet305 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet305.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet305.creaseAngle = 0.5;
let Coordinate306 = browser.currentScene.createNode("Coordinate");
Coordinate306.USE = "points";
IndexedFaceSet305.coord = Coordinate306;

Shape304.geometry = IndexedFaceSet305;

let Appearance307 = browser.currentScene.createNode("Appearance");
let Material308 = browser.currentScene.createNode("Material");
Material308.USE = "SITE_COLOR";
Appearance307.material = Material308;

Shape304.appearance = Appearance307;

HAnimSite303.children = new MFNode();

HAnimSite303.children[0] = Shape304;

HAnimSegment284.children[3] = HAnimSite303;

HAnimJoint283.children = new MFNode();

HAnimJoint283.children[0] = HAnimSegment284;

let HAnimJoint309 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint309.name = "r_knee";
HAnimJoint309.DEF = "hanim_r_knee";
HAnimJoint309.center = new SFVec3f(new float[-0.0867,0.4913,0.0318]);
let HAnimSegment310 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment310.name = "r_calf";
HAnimSegment310.DEF = "hanim_r_calf";
let Transform311 = browser.currentScene.createNode("Transform");
Transform311.translation = new SFVec3f(new float[-0.0867,0.4913,0.0318]);
let Shape312 = browser.currentScene.createNode("Shape");
let IndexedFaceSet313 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet313.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet313.creaseAngle = 0.5;
let Coordinate314 = browser.currentScene.createNode("Coordinate");
Coordinate314.USE = "points";
IndexedFaceSet313.coord = Coordinate314;

Shape312.geometry = IndexedFaceSet313;

let Appearance315 = browser.currentScene.createNode("Appearance");
let Material316 = browser.currentScene.createNode("Material");
Material316.USE = "SITE_COLOR";
Appearance315.material = Material316;

Shape312.appearance = Appearance315;

Transform311.children = new MFNode();

Transform311.children[0] = Shape312;

HAnimSegment310.children = new MFNode();

HAnimSegment310.children[0] = Transform311;

HAnimJoint309.children = new MFNode();

HAnimJoint309.children[0] = HAnimSegment310;

let HAnimJoint317 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint317.name = "r_ankle";
HAnimJoint317.DEF = "hanim_r_ankle";
HAnimJoint317.center = new SFVec3f(new float[-0.0801,0.0712,-0.0766]);
let HAnimSegment318 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment318.name = "r_hindfoot";
HAnimSegment318.DEF = "hanim_r_hindfoot";
let Transform319 = browser.currentScene.createNode("Transform");
Transform319.translation = new SFVec3f(new float[-0.0801,0.0712,-0.0766]);
let Shape320 = browser.currentScene.createNode("Shape");
let IndexedFaceSet321 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet321.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet321.creaseAngle = 0.5;
let Coordinate322 = browser.currentScene.createNode("Coordinate");
Coordinate322.USE = "points";
IndexedFaceSet321.coord = Coordinate322;

Shape320.geometry = IndexedFaceSet321;

let Appearance323 = browser.currentScene.createNode("Appearance");
let Material324 = browser.currentScene.createNode("Material");
Material324.USE = "MIN_COLOR";
Appearance323.material = Material324;

Shape320.appearance = Appearance323;

Transform319.children = new MFNode();

Transform319.children[0] = Shape320;

HAnimSegment318.children = new MFNode();

HAnimSegment318.children[0] = Transform319;

let HAnimSite325 = browser.currentScene.createNode("HAnimSite");
HAnimSite325.name = "r_lateral_malleolus_pt";
HAnimSite325.DEF = "hanim_r_lateral_malleolus_pt";
HAnimSite325.translation = new SFVec3f(new float[-0.1006,0.0658,-0.1075]);
let Shape326 = browser.currentScene.createNode("Shape");
let IndexedFaceSet327 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet327.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet327.creaseAngle = 0.5;
let Coordinate328 = browser.currentScene.createNode("Coordinate");
Coordinate328.USE = "points";
IndexedFaceSet327.coord = Coordinate328;

Shape326.geometry = IndexedFaceSet327;

let Appearance329 = browser.currentScene.createNode("Appearance");
let Material330 = browser.currentScene.createNode("Material");
Material330.USE = "HAND_FEET_COLOR";
Appearance329.material = Material330;

Shape326.appearance = Appearance329;

HAnimSite325.children = new MFNode();

HAnimSite325.children[0] = Shape326;

HAnimSegment318.children[1] = HAnimSite325;

let HAnimSite331 = browser.currentScene.createNode("HAnimSite");
HAnimSite331.name = "r_medial_malleolus_pt";
HAnimSite331.DEF = "hanim_r_medial_malleolus_pt";
HAnimSite331.translation = new SFVec3f(new float[-0.0591,0.076,-0.0928]);
let Shape332 = browser.currentScene.createNode("Shape");
let IndexedFaceSet333 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet333.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet333.creaseAngle = 0.5;
let Coordinate334 = browser.currentScene.createNode("Coordinate");
Coordinate334.USE = "points";
IndexedFaceSet333.coord = Coordinate334;

Shape332.geometry = IndexedFaceSet333;

let Appearance335 = browser.currentScene.createNode("Appearance");
let Material336 = browser.currentScene.createNode("Material");
Material336.USE = "HAND_FEET_COLOR";
Appearance335.material = Material336;

Shape332.appearance = Appearance335;

HAnimSite331.children = new MFNode();

HAnimSite331.children[0] = Shape332;

HAnimSegment318.children[2] = HAnimSite331;

let HAnimSite337 = browser.currentScene.createNode("HAnimSite");
HAnimSite337.name = "r_sphyrion_pt";
HAnimSite337.DEF = "hanim_r_sphyrion_pt";
HAnimSite337.translation = new SFVec3f(new float[-0.0603,0.061,-0.1002]);
let Shape338 = browser.currentScene.createNode("Shape");
let IndexedFaceSet339 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet339.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet339.creaseAngle = 0.5;
let Coordinate340 = browser.currentScene.createNode("Coordinate");
Coordinate340.USE = "points";
IndexedFaceSet339.coord = Coordinate340;

Shape338.geometry = IndexedFaceSet339;

let Appearance341 = browser.currentScene.createNode("Appearance");
let Material342 = browser.currentScene.createNode("Material");
Material342.USE = "HAND_FEET_COLOR";
Appearance341.material = Material342;

Shape338.appearance = Appearance341;

HAnimSite337.children = new MFNode();

HAnimSite337.children[0] = Shape338;

HAnimSegment318.children[3] = HAnimSite337;

let HAnimSite343 = browser.currentScene.createNode("HAnimSite");
HAnimSite343.name = "r_calcaneous_post_pt";
HAnimSite343.DEF = "hanim_r_calcaneous_post_pt";
HAnimSite343.translation = new SFVec3f(new float[-0.0692,0.0297,-0.1221]);
let Shape344 = browser.currentScene.createNode("Shape");
let IndexedFaceSet345 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet345.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet345.creaseAngle = 0.5;
let Coordinate346 = browser.currentScene.createNode("Coordinate");
Coordinate346.USE = "points";
IndexedFaceSet345.coord = Coordinate346;

Shape344.geometry = IndexedFaceSet345;

let Appearance347 = browser.currentScene.createNode("Appearance");
let Material348 = browser.currentScene.createNode("Material");
Material348.USE = "HAND_FEET_COLOR";
Appearance347.material = Material348;

Shape344.appearance = Appearance347;

HAnimSite343.children = new MFNode();

HAnimSite343.children[0] = Shape344;

HAnimSegment318.children[4] = HAnimSite343;

HAnimJoint317.children = new MFNode();

HAnimJoint317.children[0] = HAnimSegment318;

let HAnimJoint349 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint349.name = "r_midtarsal";
HAnimJoint349.DEF = "hanim_r_midtarsal";
HAnimJoint349.center = new SFVec3f(new float[-0.0801,0,0.0368]);
let HAnimSegment350 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment350.name = "r_middistal";
HAnimSegment350.DEF = "hanim_r_middistal";
let Transform351 = browser.currentScene.createNode("Transform");
Transform351.translation = new SFVec3f(new float[-0.0801,0,0.0368]);
let Shape352 = browser.currentScene.createNode("Shape");
let IndexedFaceSet353 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet353.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet353.creaseAngle = 0.5;
let Coordinate354 = browser.currentScene.createNode("Coordinate");
Coordinate354.USE = "points";
IndexedFaceSet353.coord = Coordinate354;

Shape352.geometry = IndexedFaceSet353;

let Appearance355 = browser.currentScene.createNode("Appearance");
let Material356 = browser.currentScene.createNode("Material");
Material356.USE = "JOINT_COLOR";
Appearance355.material = Material356;

Shape352.appearance = Appearance355;

Transform351.children = new MFNode();

Transform351.children[0] = Shape352;

HAnimSegment350.children = new MFNode();

HAnimSegment350.children[0] = Transform351;

let HAnimSite357 = browser.currentScene.createNode("HAnimSite");
HAnimSite357.name = "r_middistal_tip";
HAnimSite357.DEF = "hanim_r_middistal_tip";
HAnimSite357.translation = new SFVec3f(new float[-0.1043,-0.0227,0.145]);
let Shape358 = browser.currentScene.createNode("Shape");
let IndexedFaceSet359 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet359.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet359.creaseAngle = 0.5;
let Coordinate360 = browser.currentScene.createNode("Coordinate");
Coordinate360.USE = "points";
IndexedFaceSet359.coord = Coordinate360;

Shape358.geometry = IndexedFaceSet359;

let Appearance361 = browser.currentScene.createNode("Appearance");
let Material362 = browser.currentScene.createNode("Material");
Material362.USE = "HAND_FEET_COLOR";
Appearance361.material = Material362;

Shape358.appearance = Appearance361;

HAnimSite357.children = new MFNode();

HAnimSite357.children[0] = Shape358;

HAnimSegment350.children[1] = HAnimSite357;

let HAnimSite363 = browser.currentScene.createNode("HAnimSite");
HAnimSite363.name = "r_metatarsal_pha5_pt";
HAnimSite363.DEF = "hanim_r_metatarsal_pha5_pt";
HAnimSite363.translation = new SFVec3f(new float[-0.1523,0.0166,0.0895]);
let Shape364 = browser.currentScene.createNode("Shape");
let IndexedFaceSet365 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet365.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet365.creaseAngle = 0.5;
let Coordinate366 = browser.currentScene.createNode("Coordinate");
Coordinate366.USE = "points";
IndexedFaceSet365.coord = Coordinate366;

Shape364.geometry = IndexedFaceSet365;

let Appearance367 = browser.currentScene.createNode("Appearance");
let Material368 = browser.currentScene.createNode("Material");
Material368.USE = "HAND_FEET_COLOR";
Appearance367.material = Material368;

Shape364.appearance = Appearance367;

HAnimSite363.children = new MFNode();

HAnimSite363.children[0] = Shape364;

HAnimSegment350.children[2] = HAnimSite363;

let HAnimSite369 = browser.currentScene.createNode("HAnimSite");
HAnimSite369.name = "r_metatarsal_pha1_pt";
HAnimSite369.DEF = "hanim_r_metatarsal_pha1_pt";
HAnimSite369.translation = new SFVec3f(new float[-0.0521,0.026,0.0127]);
let Shape370 = browser.currentScene.createNode("Shape");
let IndexedFaceSet371 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet371.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet371.creaseAngle = 0.5;
let Coordinate372 = browser.currentScene.createNode("Coordinate");
Coordinate372.USE = "points";
IndexedFaceSet371.coord = Coordinate372;

Shape370.geometry = IndexedFaceSet371;

let Appearance373 = browser.currentScene.createNode("Appearance");
let Material374 = browser.currentScene.createNode("Material");
Material374.USE = "HAND_FEET_COLOR";
Appearance373.material = Material374;

Shape370.appearance = Appearance373;

HAnimSite369.children = new MFNode();

HAnimSite369.children[0] = Shape370;

HAnimSegment350.children[3] = HAnimSite369;

let HAnimSite375 = browser.currentScene.createNode("HAnimSite");
HAnimSite375.name = "r_digit2_pt";
HAnimSite375.DEF = "hanim_r_digit2_pt";
HAnimSite375.translation = new SFVec3f(new float[-0.0883,0.0134,0.1383]);
let Shape376 = browser.currentScene.createNode("Shape");
let IndexedFaceSet377 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet377.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet377.creaseAngle = 0.5;
let Coordinate378 = browser.currentScene.createNode("Coordinate");
Coordinate378.USE = "points";
IndexedFaceSet377.coord = Coordinate378;

Shape376.geometry = IndexedFaceSet377;

let Appearance379 = browser.currentScene.createNode("Appearance");
let Material380 = browser.currentScene.createNode("Material");
Material380.USE = "HAND_FEET_COLOR";
Appearance379.material = Material380;

Shape376.appearance = Appearance379;

HAnimSite375.children = new MFNode();

HAnimSite375.children[0] = Shape376;

HAnimSegment350.children[4] = HAnimSite375;

HAnimJoint349.children = new MFNode();

HAnimJoint349.children[0] = HAnimSegment350;

HAnimJoint317.children[1] = HAnimJoint349;

HAnimJoint309.children[1] = HAnimJoint317;

HAnimJoint283.children[1] = HAnimJoint309;

HAnimJoint101.children[2] = HAnimJoint283;

HAnimJoint86.children[1] = HAnimJoint101;

let HAnimJoint381 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint381.name = "vl5";
HAnimJoint381.DEF = "hanim_vl5";
HAnimJoint381.center = new SFVec3f(new float[0.0028,1.0568,-0.0776]);
let HAnimSegment382 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment382.name = "l5";
HAnimSegment382.DEF = "hanim_l5";
let Transform383 = browser.currentScene.createNode("Transform");
Transform383.translation = new SFVec3f(new float[0.0028,1.0568,-0.0776]);
let Shape384 = browser.currentScene.createNode("Shape");
let IndexedFaceSet385 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet385.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet385.creaseAngle = 0.5;
let Coordinate386 = browser.currentScene.createNode("Coordinate");
Coordinate386.USE = "points";
IndexedFaceSet385.coord = Coordinate386;

Shape384.geometry = IndexedFaceSet385;

let Appearance387 = browser.currentScene.createNode("Appearance");
let Material388 = browser.currentScene.createNode("Material");
Material388.USE = "REC_SPINAL_COLOR";
Appearance387.material = Material388;

Shape384.appearance = Appearance387;

Transform383.children = new MFNode();

Transform383.children[0] = Shape384;

HAnimSegment382.children = new MFNode();

HAnimSegment382.children[0] = Transform383;

HAnimJoint381.children = new MFNode();

HAnimJoint381.children[0] = HAnimSegment382;

let HAnimJoint389 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint389.name = "vl4";
HAnimJoint389.DEF = "hanim_vl4";
HAnimJoint389.center = new SFVec3f(new float[0.0035,1.0925,-0.0787]);
let HAnimSegment390 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment390.name = "l4";
HAnimSegment390.DEF = "hanim_l4";
let Transform391 = browser.currentScene.createNode("Transform");
Transform391.translation = new SFVec3f(new float[0.0035,1.0925,-0.0787]);
let Shape392 = browser.currentScene.createNode("Shape");
let IndexedFaceSet393 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet393.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet393.creaseAngle = 0.5;
let Coordinate394 = browser.currentScene.createNode("Coordinate");
Coordinate394.USE = "points";
IndexedFaceSet393.coord = Coordinate394;

Shape392.geometry = IndexedFaceSet393;

let Appearance395 = browser.currentScene.createNode("Appearance");
let Material396 = browser.currentScene.createNode("Material");
Material396.USE = "SPINAL_COLOR";
Appearance395.material = Material396;

Shape392.appearance = Appearance395;

Transform391.children = new MFNode();

Transform391.children[0] = Shape392;

HAnimSegment390.children = new MFNode();

HAnimSegment390.children[0] = Transform391;

HAnimJoint389.children = new MFNode();

HAnimJoint389.children[0] = HAnimSegment390;

let HAnimJoint397 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint397.name = "vl3";
HAnimJoint397.DEF = "hanim_vl3";
HAnimJoint397.center = new SFVec3f(new float[0.0041,1.1276,-0.0796]);
let HAnimSegment398 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment398.name = "l3";
HAnimSegment398.DEF = "hanim_l3";
let Transform399 = browser.currentScene.createNode("Transform");
Transform399.translation = new SFVec3f(new float[0.0041,1.1276,-0.0796]);
let Shape400 = browser.currentScene.createNode("Shape");
let IndexedFaceSet401 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet401.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet401.creaseAngle = 0.5;
let Coordinate402 = browser.currentScene.createNode("Coordinate");
Coordinate402.USE = "points";
IndexedFaceSet401.coord = Coordinate402;

Shape400.geometry = IndexedFaceSet401;

let Appearance403 = browser.currentScene.createNode("Appearance");
let Material404 = browser.currentScene.createNode("Material");
Material404.USE = "REC_SPINAL_COLOR";
Appearance403.material = Material404;

Shape400.appearance = Appearance403;

Transform399.children = new MFNode();

Transform399.children[0] = Shape400;

HAnimSegment398.children = new MFNode();

HAnimSegment398.children[0] = Transform399;

HAnimJoint397.children = new MFNode();

HAnimJoint397.children[0] = HAnimSegment398;

let HAnimJoint405 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint405.name = "vl2";
HAnimJoint405.DEF = "hanim_vl2";
HAnimJoint405.center = new SFVec3f(new float[0.0045,1.1546,-0.08]);
let HAnimSegment406 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment406.name = "l2";
HAnimSegment406.DEF = "hanim_l2";
let Transform407 = browser.currentScene.createNode("Transform");
Transform407.translation = new SFVec3f(new float[0.0045,1.1546,-0.08]);
let Shape408 = browser.currentScene.createNode("Shape");
let IndexedFaceSet409 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet409.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet409.creaseAngle = 0.5;
let Coordinate410 = browser.currentScene.createNode("Coordinate");
Coordinate410.USE = "points";
IndexedFaceSet409.coord = Coordinate410;

Shape408.geometry = IndexedFaceSet409;

let Appearance411 = browser.currentScene.createNode("Appearance");
let Material412 = browser.currentScene.createNode("Material");
Material412.USE = "SPINAL_COLOR";
Appearance411.material = Material412;

Shape408.appearance = Appearance411;

Transform407.children = new MFNode();

Transform407.children[0] = Shape408;

HAnimSegment406.children = new MFNode();

HAnimSegment406.children[0] = Transform407;

HAnimJoint405.children = new MFNode();

HAnimJoint405.children[0] = HAnimSegment406;

let HAnimJoint413 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint413.name = "vl1";
HAnimJoint413.DEF = "hanim_vl1";
HAnimJoint413.center = new SFVec3f(new float[0.0048,1.1912,-0.0805]);
let HAnimSegment414 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment414.name = "l1";
HAnimSegment414.DEF = "hanim_l1";
let Transform415 = browser.currentScene.createNode("Transform");
Transform415.translation = new SFVec3f(new float[0.0048,1.1912,-0.0805]);
let Shape416 = browser.currentScene.createNode("Shape");
let IndexedFaceSet417 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet417.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet417.creaseAngle = 0.5;
let Coordinate418 = browser.currentScene.createNode("Coordinate");
Coordinate418.USE = "points";
IndexedFaceSet417.coord = Coordinate418;

Shape416.geometry = IndexedFaceSet417;

let Appearance419 = browser.currentScene.createNode("Appearance");
let Material420 = browser.currentScene.createNode("Material");
Material420.USE = "REC_SPINAL_COLOR";
Appearance419.material = Material420;

Shape416.appearance = Appearance419;

Transform415.children = new MFNode();

Transform415.children[0] = Shape416;

HAnimSegment414.children = new MFNode();

HAnimSegment414.children[0] = Transform415;

HAnimJoint413.children = new MFNode();

HAnimJoint413.children[0] = HAnimSegment414;

let HAnimJoint421 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint421.name = "vt12";
HAnimJoint421.DEF = "hanim_vt12";
HAnimJoint421.center = new SFVec3f(new float[0.0051,1.2278,-0.0808]);
let HAnimSegment422 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment422.name = "t12";
HAnimSegment422.DEF = "hanim_t12";
let Transform423 = browser.currentScene.createNode("Transform");
Transform423.translation = new SFVec3f(new float[0.0051,1.2278,-0.0808]);
let Shape424 = browser.currentScene.createNode("Shape");
let IndexedFaceSet425 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet425.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet425.creaseAngle = 0.5;
let Coordinate426 = browser.currentScene.createNode("Coordinate");
Coordinate426.USE = "points";
IndexedFaceSet425.coord = Coordinate426;

Shape424.geometry = IndexedFaceSet425;

let Appearance427 = browser.currentScene.createNode("Appearance");
let Material428 = browser.currentScene.createNode("Material");
Material428.USE = "SPINAL_COLOR";
Appearance427.material = Material428;

Shape424.appearance = Appearance427;

Transform423.children = new MFNode();

Transform423.children[0] = Shape424;

HAnimSegment422.children = new MFNode();

HAnimSegment422.children[0] = Transform423;

HAnimJoint421.children = new MFNode();

HAnimJoint421.children[0] = HAnimSegment422;

let HAnimJoint429 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint429.name = "vt11";
HAnimJoint429.DEF = "hanim_vt11";
HAnimJoint429.center = new SFVec3f(new float[0.0053,1.2679,-0.081]);
let HAnimSegment430 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment430.name = "t11";
HAnimSegment430.DEF = "hanim_t11";
let Transform431 = browser.currentScene.createNode("Transform");
Transform431.translation = new SFVec3f(new float[0.0053,1.2679,-0.081]);
let Shape432 = browser.currentScene.createNode("Shape");
let IndexedFaceSet433 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet433.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet433.creaseAngle = 0.5;
let Coordinate434 = browser.currentScene.createNode("Coordinate");
Coordinate434.USE = "points";
IndexedFaceSet433.coord = Coordinate434;

Shape432.geometry = IndexedFaceSet433;

let Appearance435 = browser.currentScene.createNode("Appearance");
let Material436 = browser.currentScene.createNode("Material");
Material436.USE = "SPINAL_COLOR";
Appearance435.material = Material436;

Shape432.appearance = Appearance435;

Transform431.children = new MFNode();

Transform431.children[0] = Shape432;

HAnimSegment430.children = new MFNode();

HAnimSegment430.children[0] = Transform431;

HAnimJoint429.children = new MFNode();

HAnimJoint429.children[0] = HAnimSegment430;

let HAnimJoint437 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint437.name = "vt10";
HAnimJoint437.DEF = "hanim_vt10";
HAnimJoint437.center = new SFVec3f(new float[0.0056,1.2848,-0.0822]);
let HAnimSegment438 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment438.name = "t10";
HAnimSegment438.DEF = "hanim_t10";
let Transform439 = browser.currentScene.createNode("Transform");
Transform439.translation = new SFVec3f(new float[0.0056,1.2848,-0.0822]);
let Shape440 = browser.currentScene.createNode("Shape");
let IndexedFaceSet441 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet441.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet441.creaseAngle = 0.5;
let Coordinate442 = browser.currentScene.createNode("Coordinate");
Coordinate442.USE = "points";
IndexedFaceSet441.coord = Coordinate442;

Shape440.geometry = IndexedFaceSet441;

let Appearance443 = browser.currentScene.createNode("Appearance");
let Material444 = browser.currentScene.createNode("Material");
Material444.USE = "REC_SPINAL_COLOR";
Appearance443.material = Material444;

Shape440.appearance = Appearance443;

Transform439.children = new MFNode();

Transform439.children[0] = Shape440;

HAnimSegment438.children = new MFNode();

HAnimSegment438.children[0] = Transform439;

HAnimJoint437.children = new MFNode();

HAnimJoint437.children[0] = HAnimSegment438;

let HAnimJoint445 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint445.name = "vt9";
HAnimJoint445.DEF = "hanim_vt9";
HAnimJoint445.center = new SFVec3f(new float[0.0057,1.3126,-0.0838]);
let HAnimSegment446 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment446.name = "t9";
HAnimSegment446.DEF = "hanim_t9";
let Transform447 = browser.currentScene.createNode("Transform");
Transform447.translation = new SFVec3f(new float[0.0057,1.3126,-0.0838]);
let Shape448 = browser.currentScene.createNode("Shape");
let IndexedFaceSet449 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet449.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet449.creaseAngle = 0.5;
let Coordinate450 = browser.currentScene.createNode("Coordinate");
Coordinate450.USE = "points";
IndexedFaceSet449.coord = Coordinate450;

Shape448.geometry = IndexedFaceSet449;

let Appearance451 = browser.currentScene.createNode("Appearance");
let Material452 = browser.currentScene.createNode("Material");
Material452.USE = "SPINAL_COLOR";
Appearance451.material = Material452;

Shape448.appearance = Appearance451;

Transform447.children = new MFNode();

Transform447.children[0] = Shape448;

HAnimSegment446.children = new MFNode();

HAnimSegment446.children[0] = Transform447;

HAnimJoint445.children = new MFNode();

HAnimJoint445.children[0] = HAnimSegment446;

let HAnimJoint453 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint453.name = "vt8";
HAnimJoint453.DEF = "hanim_vt8";
HAnimJoint453.center = new SFVec3f(new float[0.0057,1.3382,-0.0845]);
let HAnimSegment454 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment454.name = "t8";
HAnimSegment454.DEF = "hanim_t8";
let Transform455 = browser.currentScene.createNode("Transform");
Transform455.translation = new SFVec3f(new float[0.0057,1.3382,-0.0845]);
let Shape456 = browser.currentScene.createNode("Shape");
let IndexedFaceSet457 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet457.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet457.creaseAngle = 0.5;
let Coordinate458 = browser.currentScene.createNode("Coordinate");
Coordinate458.USE = "points";
IndexedFaceSet457.coord = Coordinate458;

Shape456.geometry = IndexedFaceSet457;

let Appearance459 = browser.currentScene.createNode("Appearance");
let Material460 = browser.currentScene.createNode("Material");
Material460.USE = "SPINAL_COLOR";
Appearance459.material = Material460;

Shape456.appearance = Appearance459;

Transform455.children = new MFNode();

Transform455.children[0] = Shape456;

HAnimSegment454.children = new MFNode();

HAnimSegment454.children[0] = Transform455;

HAnimJoint453.children = new MFNode();

HAnimJoint453.children[0] = HAnimSegment454;

let HAnimJoint461 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint461.name = "vt7";
HAnimJoint461.DEF = "hanim_vt7";
HAnimJoint461.center = new SFVec3f(new float[0.0058,1.3625,-0.0833]);
let HAnimSegment462 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment462.name = "t7";
HAnimSegment462.DEF = "hanim_t7";
let Transform463 = browser.currentScene.createNode("Transform");
Transform463.translation = new SFVec3f(new float[0.0058,1.3625,-0.0833]);
let Shape464 = browser.currentScene.createNode("Shape");
let IndexedFaceSet465 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet465.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet465.creaseAngle = 0.5;
let Coordinate466 = browser.currentScene.createNode("Coordinate");
Coordinate466.USE = "points";
IndexedFaceSet465.coord = Coordinate466;

Shape464.geometry = IndexedFaceSet465;

let Appearance467 = browser.currentScene.createNode("Appearance");
let Material468 = browser.currentScene.createNode("Material");
Material468.USE = "SPINAL_COLOR";
Appearance467.material = Material468;

Shape464.appearance = Appearance467;

Transform463.children = new MFNode();

Transform463.children[0] = Shape464;

HAnimSegment462.children = new MFNode();

HAnimSegment462.children[0] = Transform463;

HAnimJoint461.children = new MFNode();

HAnimJoint461.children[0] = HAnimSegment462;

let HAnimJoint469 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint469.name = "vt6";
HAnimJoint469.DEF = "hanim_vt6";
HAnimJoint469.center = new SFVec3f(new float[0.0059,1.3866,-0.08]);
let HAnimSegment470 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment470.name = "t6";
HAnimSegment470.DEF = "hanim_t6";
let Transform471 = browser.currentScene.createNode("Transform");
Transform471.translation = new SFVec3f(new float[0.0059,1.3866,-0.08]);
let Shape472 = browser.currentScene.createNode("Shape");
let IndexedFaceSet473 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet473.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet473.creaseAngle = 0.5;
let Coordinate474 = browser.currentScene.createNode("Coordinate");
Coordinate474.USE = "points";
IndexedFaceSet473.coord = Coordinate474;

Shape472.geometry = IndexedFaceSet473;

let Appearance475 = browser.currentScene.createNode("Appearance");
let Material476 = browser.currentScene.createNode("Material");
Material476.USE = "REC_SPINAL_COLOR";
Appearance475.material = Material476;

Shape472.appearance = Appearance475;

Transform471.children = new MFNode();

Transform471.children[0] = Shape472;

HAnimSegment470.children = new MFNode();

HAnimSegment470.children[0] = Transform471;

HAnimJoint469.children = new MFNode();

HAnimJoint469.children[0] = HAnimSegment470;

let HAnimJoint477 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint477.name = "vt5";
HAnimJoint477.DEF = "hanim_vt5";
HAnimJoint477.center = new SFVec3f(new float[0.006,1.4102,-0.0745]);
let HAnimSegment478 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment478.name = "t5";
HAnimSegment478.DEF = "hanim_t5";
let Transform479 = browser.currentScene.createNode("Transform");
Transform479.translation = new SFVec3f(new float[0.006,1.4102,-0.0745]);
let Shape480 = browser.currentScene.createNode("Shape");
let IndexedFaceSet481 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet481.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet481.creaseAngle = 0.5;
let Coordinate482 = browser.currentScene.createNode("Coordinate");
Coordinate482.USE = "points";
IndexedFaceSet481.coord = Coordinate482;

Shape480.geometry = IndexedFaceSet481;

let Appearance483 = browser.currentScene.createNode("Appearance");
let Material484 = browser.currentScene.createNode("Material");
Material484.USE = "SPINAL_COLOR";
Appearance483.material = Material484;

Shape480.appearance = Appearance483;

Transform479.children = new MFNode();

Transform479.children[0] = Shape480;

HAnimSegment478.children = new MFNode();

HAnimSegment478.children[0] = Transform479;

HAnimJoint477.children = new MFNode();

HAnimJoint477.children[0] = HAnimSegment478;

let HAnimJoint485 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint485.name = "vt4";
HAnimJoint485.DEF = "hanim_vt4";
HAnimJoint485.center = new SFVec3f(new float[0.0061,1.432,-0.0675]);
let HAnimSegment486 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment486.name = "t4";
HAnimSegment486.DEF = "hanim_t4";
let Transform487 = browser.currentScene.createNode("Transform");
Transform487.translation = new SFVec3f(new float[0.0061,1.432,-0.0675]);
let Shape488 = browser.currentScene.createNode("Shape");
let IndexedFaceSet489 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet489.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet489.creaseAngle = 0.5;
let Coordinate490 = browser.currentScene.createNode("Coordinate");
Coordinate490.USE = "points";
IndexedFaceSet489.coord = Coordinate490;

Shape488.geometry = IndexedFaceSet489;

let Appearance491 = browser.currentScene.createNode("Appearance");
let Material492 = browser.currentScene.createNode("Material");
Material492.USE = "SPINAL_COLOR";
Appearance491.material = Material492;

Shape488.appearance = Appearance491;

Transform487.children = new MFNode();

Transform487.children[0] = Shape488;

HAnimSegment486.children = new MFNode();

HAnimSegment486.children[0] = Transform487;

HAnimJoint485.children = new MFNode();

HAnimJoint485.children[0] = HAnimSegment486;

let HAnimJoint493 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint493.name = "vt3";
HAnimJoint493.DEF = "hanim_vt3";
HAnimJoint493.center = new SFVec3f(new float[0.0062,1.4583,-0.057]);
let HAnimSegment494 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment494.name = "t3";
HAnimSegment494.DEF = "hanim_t3";
let Transform495 = browser.currentScene.createNode("Transform");
Transform495.translation = new SFVec3f(new float[0.0062,1.4583,-0.057]);
let Shape496 = browser.currentScene.createNode("Shape");
let IndexedFaceSet497 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet497.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet497.creaseAngle = 0.5;
let Coordinate498 = browser.currentScene.createNode("Coordinate");
Coordinate498.USE = "points";
IndexedFaceSet497.coord = Coordinate498;

Shape496.geometry = IndexedFaceSet497;

let Appearance499 = browser.currentScene.createNode("Appearance");
let Material500 = browser.currentScene.createNode("Material");
Material500.USE = "SPINAL_COLOR";
Appearance499.material = Material500;

Shape496.appearance = Appearance499;

Transform495.children = new MFNode();

Transform495.children[0] = Shape496;

HAnimSegment494.children = new MFNode();

HAnimSegment494.children[0] = Transform495;

HAnimJoint493.children = new MFNode();

HAnimJoint493.children[0] = HAnimSegment494;

let HAnimJoint501 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint501.name = "vt2";
HAnimJoint501.DEF = "hanim_vt2";
HAnimJoint501.center = new SFVec3f(new float[0.0063,1.4761,-0.0484]);
let HAnimSegment502 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment502.name = "t2";
HAnimSegment502.DEF = "hanim_t2";
let Transform503 = browser.currentScene.createNode("Transform");
Transform503.translation = new SFVec3f(new float[0.0063,1.4761,-0.0484]);
let Shape504 = browser.currentScene.createNode("Shape");
let IndexedFaceSet505 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet505.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet505.creaseAngle = 0.5;
let Coordinate506 = browser.currentScene.createNode("Coordinate");
Coordinate506.USE = "points";
IndexedFaceSet505.coord = Coordinate506;

Shape504.geometry = IndexedFaceSet505;

let Appearance507 = browser.currentScene.createNode("Appearance");
let Material508 = browser.currentScene.createNode("Material");
Material508.USE = "SPINAL_COLOR";
Appearance507.material = Material508;

Shape504.appearance = Appearance507;

Transform503.children = new MFNode();

Transform503.children[0] = Shape504;

HAnimSegment502.children = new MFNode();

HAnimSegment502.children[0] = Transform503;

HAnimJoint501.children = new MFNode();

HAnimJoint501.children[0] = HAnimSegment502;

let HAnimJoint509 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint509.name = "vt1";
HAnimJoint509.DEF = "hanim_vt1";
HAnimJoint509.center = new SFVec3f(new float[0.0065,1.4951,-0.0387]);
let HAnimSegment510 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment510.name = "t1";
HAnimSegment510.DEF = "hanim_t1";
let Transform511 = browser.currentScene.createNode("Transform");
Transform511.translation = new SFVec3f(new float[0.0065,1.4951,-0.0387]);
let Shape512 = browser.currentScene.createNode("Shape");
let IndexedFaceSet513 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet513.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet513.creaseAngle = 0.5;
let Coordinate514 = browser.currentScene.createNode("Coordinate");
Coordinate514.USE = "points";
IndexedFaceSet513.coord = Coordinate514;

Shape512.geometry = IndexedFaceSet513;

let Appearance515 = browser.currentScene.createNode("Appearance");
let Material516 = browser.currentScene.createNode("Material");
Material516.USE = "REC_SPINAL_COLOR";
Appearance515.material = Material516;

Shape512.appearance = Appearance515;

Transform511.children = new MFNode();

Transform511.children[0] = Shape512;

HAnimSegment510.children = new MFNode();

HAnimSegment510.children[0] = Transform511;

HAnimJoint509.children = new MFNode();

HAnimJoint509.children[0] = HAnimSegment510;

let HAnimJoint517 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint517.name = "l_shoulder";
HAnimJoint517.DEF = "hanim_l_shoulder";
HAnimJoint517.center = new SFVec3f(new float[0.2029,1.4376,-0.0387]);
let HAnimSegment518 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment518.name = "l_upperarm";
HAnimSegment518.DEF = "hanim_l_upperarm";
let Transform519 = browser.currentScene.createNode("Transform");
Transform519.translation = new SFVec3f(new float[0.2029,1.4376,-0.0387]);
let Shape520 = browser.currentScene.createNode("Shape");
let IndexedFaceSet521 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet521.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet521.creaseAngle = 0.5;
let Coordinate522 = browser.currentScene.createNode("Coordinate");
Coordinate522.USE = "points";
IndexedFaceSet521.coord = Coordinate522;

Shape520.geometry = IndexedFaceSet521;

let Appearance523 = browser.currentScene.createNode("Appearance");
let Material524 = browser.currentScene.createNode("Material");
Material524.USE = "MIN_COLOR";
Appearance523.material = Material524;

Shape520.appearance = Appearance523;

Transform519.children = new MFNode();

Transform519.children[0] = Shape520;

HAnimSegment518.children = new MFNode();

HAnimSegment518.children[0] = Transform519;

let Transform525 = browser.currentScene.createNode("Transform");
Transform525.DEF = "l_upperarm_adjust";
Transform525.center = new SFVec3f(new float[0.182,1.22,-0.047]);
Transform525.rotation = new SFRotation(new float[1,0,0,0.119]);
Transform525.translation = new SFVec3f(new float[0.2029,1.4376,-0.0387]);
HAnimSegment518.children[1] = Transform525;

let HAnimSite526 = browser.currentScene.createNode("HAnimSite");
HAnimSite526.name = "l_humeral_lateral_epicn_pt";
HAnimSite526.DEF = "hanim_l_humeral_lateral_epicn_pt";
HAnimSite526.translation = new SFVec3f(new float[0.228,1.1482,-0.11]);
let Shape527 = browser.currentScene.createNode("Shape");
let IndexedFaceSet528 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet528.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet528.creaseAngle = 0.5;
let Coordinate529 = browser.currentScene.createNode("Coordinate");
Coordinate529.USE = "points";
IndexedFaceSet528.coord = Coordinate529;

Shape527.geometry = IndexedFaceSet528;

let Appearance530 = browser.currentScene.createNode("Appearance");
let Material531 = browser.currentScene.createNode("Material");
Material531.USE = "SITE_COLOR";
Appearance530.material = Material531;

Shape527.appearance = Appearance530;

HAnimSite526.children = new MFNode();

HAnimSite526.children[0] = Shape527;

HAnimSegment518.children[2] = HAnimSite526;

HAnimJoint517.children = new MFNode();

HAnimJoint517.children[0] = HAnimSegment518;

let HAnimJoint532 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint532.name = "l_elbow";
HAnimJoint532.DEF = "hanim_l_elbow";
HAnimJoint532.center = new SFVec3f(new float[0.2014,1.1357,-0.0682]);
let HAnimSegment533 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment533.name = "l_forearm";
HAnimSegment533.DEF = "hanim_l_forearm";
let Transform534 = browser.currentScene.createNode("Transform");
Transform534.translation = new SFVec3f(new float[0.2014,1.1357,-0.0682]);
let Shape535 = browser.currentScene.createNode("Shape");
let IndexedFaceSet536 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet536.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet536.creaseAngle = 0.5;
let Coordinate537 = browser.currentScene.createNode("Coordinate");
Coordinate537.USE = "points";
IndexedFaceSet536.coord = Coordinate537;

Shape535.geometry = IndexedFaceSet536;

let Appearance538 = browser.currentScene.createNode("Appearance");
let Material539 = browser.currentScene.createNode("Material");
Material539.USE = "MIN_COLOR";
Appearance538.material = Material539;

Shape535.appearance = Appearance538;

Transform534.children = new MFNode();

Transform534.children[0] = Shape535;

HAnimSegment533.children = new MFNode();

HAnimSegment533.children[0] = Transform534;

let Transform540 = browser.currentScene.createNode("Transform");
Transform540.DEF = "l_forearm_adjust";
Transform540.center = new SFVec3f(new float[0.198,0.961,-0.0405]);
Transform540.rotation = new SFRotation(new float[-1,0,0,0.1]);
Transform540.translation = new SFVec3f(new float[0.2014,1.1357,-0.0682]);
HAnimSegment533.children[1] = Transform540;

let HAnimSite541 = browser.currentScene.createNode("HAnimSite");
HAnimSite541.name = "l_radial_styloid_pt";
HAnimSite541.DEF = "hanim_l_radial_styloid_pt";
HAnimSite541.translation = new SFVec3f(new float[0.1901,0.8645,-0.0415]);
let Shape542 = browser.currentScene.createNode("Shape");
let IndexedFaceSet543 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet543.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet543.creaseAngle = 0.5;
let Coordinate544 = browser.currentScene.createNode("Coordinate");
Coordinate544.USE = "points";
IndexedFaceSet543.coord = Coordinate544;

Shape542.geometry = IndexedFaceSet543;

let Appearance545 = browser.currentScene.createNode("Appearance");
let Material546 = browser.currentScene.createNode("Material");
Material546.USE = "SITE_COLOR";
Appearance545.material = Material546;

Shape542.appearance = Appearance545;

HAnimSite541.children = new MFNode();

HAnimSite541.children[0] = Shape542;

HAnimSegment533.children[2] = HAnimSite541;

let HAnimSite547 = browser.currentScene.createNode("HAnimSite");
HAnimSite547.name = "l_olecranon_pt";
HAnimSite547.DEF = "hanim_l_olecranon_pt";
HAnimSite547.translation = new SFVec3f(new float[-0.1962,1.1375,-0.1123]);
let Shape548 = browser.currentScene.createNode("Shape");
let IndexedFaceSet549 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet549.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet549.creaseAngle = 0.5;
let Coordinate550 = browser.currentScene.createNode("Coordinate");
Coordinate550.USE = "points";
IndexedFaceSet549.coord = Coordinate550;

Shape548.geometry = IndexedFaceSet549;

let Appearance551 = browser.currentScene.createNode("Appearance");
let Material552 = browser.currentScene.createNode("Material");
Material552.USE = "SITE_COLOR";
Appearance551.material = Material552;

Shape548.appearance = Appearance551;

HAnimSite547.children = new MFNode();

HAnimSite547.children[0] = Shape548;

HAnimSegment533.children[3] = HAnimSite547;

let HAnimSite553 = browser.currentScene.createNode("HAnimSite");
HAnimSite553.name = "l_humeral_medial_epicn_pt";
HAnimSite553.DEF = "hanim_l_humeral_medial_epicn_pt";
HAnimSite553.translation = new SFVec3f(new float[0.1735,1.1272,-0.1113]);
let Shape554 = browser.currentScene.createNode("Shape");
let IndexedFaceSet555 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet555.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet555.creaseAngle = 0.5;
let Coordinate556 = browser.currentScene.createNode("Coordinate");
Coordinate556.USE = "points";
IndexedFaceSet555.coord = Coordinate556;

Shape554.geometry = IndexedFaceSet555;

let Appearance557 = browser.currentScene.createNode("Appearance");
let Material558 = browser.currentScene.createNode("Material");
Material558.USE = "SITE_COLOR";
Appearance557.material = Material558;

Shape554.appearance = Appearance557;

HAnimSite553.children = new MFNode();

HAnimSite553.children[0] = Shape554;

HAnimSegment533.children[4] = HAnimSite553;

let HAnimSite559 = browser.currentScene.createNode("HAnimSite");
HAnimSite559.name = "l_radiale_pt";
HAnimSite559.DEF = "hanim_l_radiale_pt";
HAnimSite559.translation = new SFVec3f(new float[0.2182,1.1212,-0.1167]);
let Shape560 = browser.currentScene.createNode("Shape");
let IndexedFaceSet561 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet561.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet561.creaseAngle = 0.5;
let Coordinate562 = browser.currentScene.createNode("Coordinate");
Coordinate562.USE = "points";
IndexedFaceSet561.coord = Coordinate562;

Shape560.geometry = IndexedFaceSet561;

let Appearance563 = browser.currentScene.createNode("Appearance");
let Material564 = browser.currentScene.createNode("Material");
Material564.USE = "SITE_COLOR";
Appearance563.material = Material564;

Shape560.appearance = Appearance563;

HAnimSite559.children = new MFNode();

HAnimSite559.children[0] = Shape560;

HAnimSegment533.children[5] = HAnimSite559;

HAnimJoint532.children = new MFNode();

HAnimJoint532.children[0] = HAnimSegment533;

let HAnimJoint565 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint565.name = "l_wrist";
HAnimJoint565.DEF = "hanim_l_wrist";
HAnimJoint565.center = new SFVec3f(new float[0.1984,0.8663,-0.0583]);
let HAnimSegment566 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment566.name = "l_hand";
HAnimSegment566.DEF = "hanim_l_hand";
let Transform567 = browser.currentScene.createNode("Transform");
Transform567.translation = new SFVec3f(new float[0.1984,0.8663,-0.0583]);
let Shape568 = browser.currentScene.createNode("Shape");
let IndexedFaceSet569 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet569.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet569.creaseAngle = 0.5;
let Coordinate570 = browser.currentScene.createNode("Coordinate");
Coordinate570.USE = "points";
IndexedFaceSet569.coord = Coordinate570;

Shape568.geometry = IndexedFaceSet569;

let Appearance571 = browser.currentScene.createNode("Appearance");
let Material572 = browser.currentScene.createNode("Material");
Material572.USE = "MIN_COLOR";
Appearance571.material = Material572;

Shape568.appearance = Appearance571;

Transform567.children = new MFNode();

Transform567.children[0] = Shape568;

HAnimSegment566.children = new MFNode();

HAnimSegment566.children[0] = Transform567;

let Transform573 = browser.currentScene.createNode("Transform");
Transform573.DEF = "l_hand_adjust";
Transform573.center = new SFVec3f(new float[0.213,0.811,-0.0338]);
Transform573.rotation = new SFRotation(new float[-0.06361,-0.9967,0.04988,1.333]);
Transform573.translation = new SFVec3f(new float[0.1984,0.8663,-0.0583]);
HAnimSegment566.children[1] = Transform573;

let HAnimSite574 = browser.currentScene.createNode("HAnimSite");
HAnimSite574.name = "l_hand_tip";
HAnimSite574.DEF = "hanim_l_hand_tip";
HAnimSite574.translation = new SFVec3f(new float[0.208,0.6731,-0.0491]);
let Shape575 = browser.currentScene.createNode("Shape");
let IndexedFaceSet576 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet576.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet576.creaseAngle = 0.5;
let Coordinate577 = browser.currentScene.createNode("Coordinate");
Coordinate577.USE = "points";
IndexedFaceSet576.coord = Coordinate577;

Shape575.geometry = IndexedFaceSet576;

let Appearance578 = browser.currentScene.createNode("Appearance");
let Material579 = browser.currentScene.createNode("Material");
Material579.USE = "SITE_COLOR";
Appearance578.material = Material579;

Shape575.appearance = Appearance578;

HAnimSite574.children = new MFNode();

HAnimSite574.children[0] = Shape575;

HAnimSegment566.children[2] = HAnimSite574;

let HAnimSite580 = browser.currentScene.createNode("HAnimSite");
HAnimSite580.name = "l_metacarpal_pha2_pt";
HAnimSite580.DEF = "hanim_l_metacarpal_pha2_pt";
HAnimSite580.translation = new SFVec3f(new float[0.2009,0.8139,-0.0237]);
let Shape581 = browser.currentScene.createNode("Shape");
let IndexedFaceSet582 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet582.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet582.creaseAngle = 0.5;
let Coordinate583 = browser.currentScene.createNode("Coordinate");
Coordinate583.USE = "points";
IndexedFaceSet582.coord = Coordinate583;

Shape581.geometry = IndexedFaceSet582;

let Appearance584 = browser.currentScene.createNode("Appearance");
let Material585 = browser.currentScene.createNode("Material");
Material585.USE = "SITE_COLOR";
Appearance584.material = Material585;

Shape581.appearance = Appearance584;

HAnimSite580.children = new MFNode();

HAnimSite580.children[0] = Shape581;

HAnimSegment566.children[3] = HAnimSite580;

let HAnimSite586 = browser.currentScene.createNode("HAnimSite");
HAnimSite586.name = "l_dactylion_pt";
HAnimSite586.DEF = "hanim_l_dactylion_pt";
HAnimSite586.translation = new SFVec3f(new float[0.2056,0.6743,-0.0482]);
let Shape587 = browser.currentScene.createNode("Shape");
let IndexedFaceSet588 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet588.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet588.creaseAngle = 0.5;
let Coordinate589 = browser.currentScene.createNode("Coordinate");
Coordinate589.USE = "points";
IndexedFaceSet588.coord = Coordinate589;

Shape587.geometry = IndexedFaceSet588;

let Appearance590 = browser.currentScene.createNode("Appearance");
let Material591 = browser.currentScene.createNode("Material");
Material591.USE = "SITE_COLOR";
Appearance590.material = Material591;

Shape587.appearance = Appearance590;

HAnimSite586.children = new MFNode();

HAnimSite586.children[0] = Shape587;

HAnimSegment566.children[4] = HAnimSite586;

let HAnimSite592 = browser.currentScene.createNode("HAnimSite");
HAnimSite592.name = "l_ulnar_styloid_pt";
HAnimSite592.DEF = "hanim_l_ulnar_styloid_pt";
HAnimSite592.translation = new SFVec3f(new float[-0.2142,0.8529,-0.0648]);
let Shape593 = browser.currentScene.createNode("Shape");
let IndexedFaceSet594 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet594.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet594.creaseAngle = 0.5;
let Coordinate595 = browser.currentScene.createNode("Coordinate");
Coordinate595.USE = "points";
IndexedFaceSet594.coord = Coordinate595;

Shape593.geometry = IndexedFaceSet594;

let Appearance596 = browser.currentScene.createNode("Appearance");
let Material597 = browser.currentScene.createNode("Material");
Material597.USE = "SITE_COLOR";
Appearance596.material = Material597;

Shape593.appearance = Appearance596;

HAnimSite592.children = new MFNode();

HAnimSite592.children[0] = Shape593;

HAnimSegment566.children[5] = HAnimSite592;

let HAnimSite598 = browser.currentScene.createNode("HAnimSite");
HAnimSite598.name = "l_metacarpal_pha5_pt";
HAnimSite598.DEF = "hanim_l_metacarpal_pha5_pt";
HAnimSite598.translation = new SFVec3f(new float[0.1929,0.786,-0.1122]);
let Shape599 = browser.currentScene.createNode("Shape");
let IndexedFaceSet600 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet600.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet600.creaseAngle = 0.5;
let Coordinate601 = browser.currentScene.createNode("Coordinate");
Coordinate601.USE = "points";
IndexedFaceSet600.coord = Coordinate601;

Shape599.geometry = IndexedFaceSet600;

let Appearance602 = browser.currentScene.createNode("Appearance");
let Material603 = browser.currentScene.createNode("Material");
Material603.USE = "SITE_COLOR";
Appearance602.material = Material603;

Shape599.appearance = Appearance602;

HAnimSite598.children = new MFNode();

HAnimSite598.children[0] = Shape599;

HAnimSegment566.children[6] = HAnimSite598;

HAnimJoint565.children = new MFNode();

HAnimJoint565.children[0] = HAnimSegment566;

let HAnimJoint604 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint604.name = "l_thumb1";
HAnimJoint604.DEF = "hanim_l_thumb1";
HAnimJoint604.center = new SFVec3f(new float[0.1924,0.8472,-0.0534]);
let HAnimSegment605 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment605.name = "l_thumb_metacarpal";
HAnimSegment605.DEF = "hanim_l_thumb_metacarpal";
let Transform606 = browser.currentScene.createNode("Transform");
Transform606.translation = new SFVec3f(new float[0.1924,0.8472,-0.0534]);
let Shape607 = browser.currentScene.createNode("Shape");
let IndexedFaceSet608 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet608.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet608.creaseAngle = 0.5;
let Coordinate609 = browser.currentScene.createNode("Coordinate");
Coordinate609.USE = "points";
IndexedFaceSet608.coord = Coordinate609;

Shape607.geometry = IndexedFaceSet608;

let Appearance610 = browser.currentScene.createNode("Appearance");
let Material611 = browser.currentScene.createNode("Material");
Material611.USE = "JOINT_COLOR";
Appearance610.material = Material611;

Shape607.appearance = Appearance610;

Transform606.children = new MFNode();

Transform606.children[0] = Shape607;

HAnimSegment605.children = new MFNode();

HAnimSegment605.children[0] = Transform606;

HAnimJoint604.children = new MFNode();

HAnimJoint604.children[0] = HAnimSegment605;

let HAnimJoint612 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint612.name = "l_thumb2";
HAnimJoint612.DEF = "hanim_l_thumb2";
HAnimJoint612.center = new SFVec3f(new float[0.1951,0.8226,0.0246]);
let HAnimSegment613 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment613.name = "l_thumb_proximal";
HAnimSegment613.DEF = "hanim_l_thumb_proximal";
let Transform614 = browser.currentScene.createNode("Transform");
Transform614.translation = new SFVec3f(new float[0.1951,0.8226,0.0246]);
let Shape615 = browser.currentScene.createNode("Shape");
let IndexedFaceSet616 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet616.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet616.creaseAngle = 0.5;
let Coordinate617 = browser.currentScene.createNode("Coordinate");
Coordinate617.USE = "points";
IndexedFaceSet616.coord = Coordinate617;

Shape615.geometry = IndexedFaceSet616;

let Appearance618 = browser.currentScene.createNode("Appearance");
let Material619 = browser.currentScene.createNode("Material");
Material619.USE = "JOINT_COLOR";
Appearance618.material = Material619;

Shape615.appearance = Appearance618;

Transform614.children = new MFNode();

Transform614.children[0] = Shape615;

HAnimSegment613.children = new MFNode();

HAnimSegment613.children[0] = Transform614;

HAnimJoint612.children = new MFNode();

HAnimJoint612.children[0] = HAnimSegment613;

let HAnimJoint620 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint620.name = "l_thumb3";
HAnimJoint620.DEF = "hanim_l_thumb3";
HAnimJoint620.center = new SFVec3f(new float[0.1955,0.8159,0.0464]);
let HAnimSegment621 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment621.name = "l_thumb_distal";
HAnimSegment621.DEF = "hanim_l_thumb_distal";
let Transform622 = browser.currentScene.createNode("Transform");
Transform622.translation = new SFVec3f(new float[0.1955,0.8159,0.0464]);
let Shape623 = browser.currentScene.createNode("Shape");
let IndexedFaceSet624 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet624.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet624.creaseAngle = 0.5;
let Coordinate625 = browser.currentScene.createNode("Coordinate");
Coordinate625.USE = "points";
IndexedFaceSet624.coord = Coordinate625;

Shape623.geometry = IndexedFaceSet624;

let Appearance626 = browser.currentScene.createNode("Appearance");
let Material627 = browser.currentScene.createNode("Material");
Material627.USE = "JOINT_COLOR";
Appearance626.material = Material627;

Shape623.appearance = Appearance626;

Transform622.children = new MFNode();

Transform622.children[0] = Shape623;

HAnimSegment621.children = new MFNode();

HAnimSegment621.children[0] = Transform622;

let HAnimSite628 = browser.currentScene.createNode("HAnimSite");
HAnimSite628.name = "l_thumb_distal_tip";
HAnimSite628.DEF = "hanim_l_thumb_distal_tip";
HAnimSite628.translation = new SFVec3f(new float[0.1982,0.8061,0.0759]);
let Shape629 = browser.currentScene.createNode("Shape");
let IndexedFaceSet630 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet630.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet630.creaseAngle = 0.5;
let Coordinate631 = browser.currentScene.createNode("Coordinate");
Coordinate631.USE = "points";
IndexedFaceSet630.coord = Coordinate631;

Shape629.geometry = IndexedFaceSet630;

let Appearance632 = browser.currentScene.createNode("Appearance");
let Material633 = browser.currentScene.createNode("Material");
Material633.USE = "HAND_FEET_COLOR";
Appearance632.material = Material633;

Shape629.appearance = Appearance632;

HAnimSite628.children = new MFNode();

HAnimSite628.children[0] = Shape629;

HAnimSegment621.children[1] = HAnimSite628;

HAnimJoint620.children = new MFNode();

HAnimJoint620.children[0] = HAnimSegment621;

HAnimJoint612.children[1] = HAnimJoint620;

HAnimJoint604.children[1] = HAnimJoint612;

HAnimJoint565.children[1] = HAnimJoint604;

let HAnimJoint634 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint634.name = "l_index0";
HAnimJoint634.DEF = "hanim_l_index0";
HAnimJoint634.center = new SFVec3f(new float[0.1983,0.8024,-0.028]);
let HAnimSegment635 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment635.name = "l_index_metacarpal";
HAnimSegment635.DEF = "hanim_l_index_metacarpal";
let Transform636 = browser.currentScene.createNode("Transform");
Transform636.translation = new SFVec3f(new float[0.1983,0.8024,-0.028]);
let Shape637 = browser.currentScene.createNode("Shape");
let IndexedFaceSet638 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet638.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet638.creaseAngle = 0.5;
let Coordinate639 = browser.currentScene.createNode("Coordinate");
Coordinate639.USE = "points";
IndexedFaceSet638.coord = Coordinate639;

Shape637.geometry = IndexedFaceSet638;

let Appearance640 = browser.currentScene.createNode("Appearance");
let Material641 = browser.currentScene.createNode("Material");
Material641.USE = "JOINT_COLOR";
Appearance640.material = Material641;

Shape637.appearance = Appearance640;

Transform636.children = new MFNode();

Transform636.children[0] = Shape637;

HAnimSegment635.children = new MFNode();

HAnimSegment635.children[0] = Transform636;

HAnimJoint634.children = new MFNode();

HAnimJoint634.children[0] = HAnimSegment635;

let HAnimJoint642 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint642.name = "l_index1";
HAnimJoint642.DEF = "hanim_l_index1";
HAnimJoint642.center = new SFVec3f(new float[0.1983,0.7815,-0.028]);
let HAnimSegment643 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment643.name = "l_index_proximal";
HAnimSegment643.DEF = "hanim_l_index_proximal";
let Transform644 = browser.currentScene.createNode("Transform");
Transform644.translation = new SFVec3f(new float[0.1983,0.7815,-0.028]);
let Shape645 = browser.currentScene.createNode("Shape");
let IndexedFaceSet646 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet646.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet646.creaseAngle = 0.5;
let Coordinate647 = browser.currentScene.createNode("Coordinate");
Coordinate647.USE = "points";
IndexedFaceSet646.coord = Coordinate647;

Shape645.geometry = IndexedFaceSet646;

let Appearance648 = browser.currentScene.createNode("Appearance");
let Material649 = browser.currentScene.createNode("Material");
Material649.USE = "JOINT_COLOR";
Appearance648.material = Material649;

Shape645.appearance = Appearance648;

Transform644.children = new MFNode();

Transform644.children[0] = Shape645;

HAnimSegment643.children = new MFNode();

HAnimSegment643.children[0] = Transform644;

HAnimJoint642.children = new MFNode();

HAnimJoint642.children[0] = HAnimSegment643;

let HAnimJoint650 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint650.name = "l_index2";
HAnimJoint650.DEF = "hanim_l_index2";
HAnimJoint650.center = new SFVec3f(new float[0.2017,0.7363,-0.0248]);
let HAnimSegment651 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment651.name = "l_index_middle";
HAnimSegment651.DEF = "hanim_l_index_middle";
let Transform652 = browser.currentScene.createNode("Transform");
Transform652.translation = new SFVec3f(new float[0.2017,0.7363,-0.0248]);
let Shape653 = browser.currentScene.createNode("Shape");
let IndexedFaceSet654 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet654.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet654.creaseAngle = 0.5;
let Coordinate655 = browser.currentScene.createNode("Coordinate");
Coordinate655.USE = "points";
IndexedFaceSet654.coord = Coordinate655;

Shape653.geometry = IndexedFaceSet654;

let Appearance656 = browser.currentScene.createNode("Appearance");
let Material657 = browser.currentScene.createNode("Material");
Material657.USE = "JOINT_COLOR";
Appearance656.material = Material657;

Shape653.appearance = Appearance656;

Transform652.children = new MFNode();

Transform652.children[0] = Shape653;

HAnimSegment651.children = new MFNode();

HAnimSegment651.children[0] = Transform652;

HAnimJoint650.children = new MFNode();

HAnimJoint650.children[0] = HAnimSegment651;

let HAnimJoint658 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint658.name = "l_index3";
HAnimJoint658.DEF = "hanim_l_index3";
HAnimJoint658.center = new SFVec3f(new float[0.2028,0.7139,-0.0236]);
let HAnimSegment659 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment659.name = "l_index_distal";
HAnimSegment659.DEF = "hanim_l_index_distal";
let Transform660 = browser.currentScene.createNode("Transform");
Transform660.translation = new SFVec3f(new float[0.2028,0.7139,-0.0236]);
let Shape661 = browser.currentScene.createNode("Shape");
let IndexedFaceSet662 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet662.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet662.creaseAngle = 0.5;
let Coordinate663 = browser.currentScene.createNode("Coordinate");
Coordinate663.USE = "points";
IndexedFaceSet662.coord = Coordinate663;

Shape661.geometry = IndexedFaceSet662;

let Appearance664 = browser.currentScene.createNode("Appearance");
let Material665 = browser.currentScene.createNode("Material");
Material665.USE = "JOINT_COLOR";
Appearance664.material = Material665;

Shape661.appearance = Appearance664;

Transform660.children = new MFNode();

Transform660.children[0] = Shape661;

HAnimSegment659.children = new MFNode();

HAnimSegment659.children[0] = Transform660;

let HAnimSite666 = browser.currentScene.createNode("HAnimSite");
HAnimSite666.name = "l_index_distal_tip";
HAnimSite666.DEF = "hanim_l_index_distal_tip";
HAnimSite666.translation = new SFVec3f(new float[0.2089,0.6858,-0.0245]);
let Shape667 = browser.currentScene.createNode("Shape");
let IndexedFaceSet668 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet668.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet668.creaseAngle = 0.5;
let Coordinate669 = browser.currentScene.createNode("Coordinate");
Coordinate669.USE = "points";
IndexedFaceSet668.coord = Coordinate669;

Shape667.geometry = IndexedFaceSet668;

let Appearance670 = browser.currentScene.createNode("Appearance");
let Material671 = browser.currentScene.createNode("Material");
Material671.USE = "HAND_FEET_COLOR";
Appearance670.material = Material671;

Shape667.appearance = Appearance670;

HAnimSite666.children = new MFNode();

HAnimSite666.children[0] = Shape667;

HAnimSegment659.children[1] = HAnimSite666;

HAnimJoint658.children = new MFNode();

HAnimJoint658.children[0] = HAnimSegment659;

HAnimJoint650.children[1] = HAnimJoint658;

HAnimJoint642.children[1] = HAnimJoint650;

HAnimJoint634.children[1] = HAnimJoint642;

HAnimJoint565.children[2] = HAnimJoint634;

HAnimJoint532.children[1] = HAnimJoint565;

HAnimJoint517.children[1] = HAnimJoint532;

HAnimJoint509.children[1] = HAnimJoint517;

let HAnimJoint672 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint672.name = "r_shoulder";
HAnimJoint672.DEF = "hanim_r_shoulder";
HAnimJoint672.center = new SFVec3f(new float[-0.1907,1.4407,-0.0325]);
let HAnimSegment673 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment673.name = "r_upperarm";
HAnimSegment673.DEF = "hanim_r_upperarm";
let Transform674 = browser.currentScene.createNode("Transform");
Transform674.translation = new SFVec3f(new float[-0.1907,1.4407,-0.0325]);
let Shape675 = browser.currentScene.createNode("Shape");
let IndexedFaceSet676 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet676.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet676.creaseAngle = 0.5;
let Coordinate677 = browser.currentScene.createNode("Coordinate");
Coordinate677.USE = "points";
IndexedFaceSet676.coord = Coordinate677;

Shape675.geometry = IndexedFaceSet676;

let Appearance678 = browser.currentScene.createNode("Appearance");
let Material679 = browser.currentScene.createNode("Material");
Material679.USE = "MIN_COLOR";
Appearance678.material = Material679;

Shape675.appearance = Appearance678;

Transform674.children = new MFNode();

Transform674.children[0] = Shape675;

HAnimSegment673.children = new MFNode();

HAnimSegment673.children[0] = Transform674;

let Transform680 = browser.currentScene.createNode("Transform");
Transform680.DEF = "r_upperarm_adjust";
Transform680.center = new SFVec3f(new float[-0.182,1.22,-0.047]);
Transform680.rotation = new SFRotation(new float[1,0,0,0.0836]);
Transform680.translation = new SFVec3f(new float[-0.1907,1.4407,-0.0325]);
HAnimSegment673.children[1] = Transform680;

let HAnimSite681 = browser.currentScene.createNode("HAnimSite");
HAnimSite681.name = "r_humeral_lateral_epicn_pt";
HAnimSite681.DEF = "hanim_r_humeral_lateral_epicn_pt";
HAnimSite681.translation = new SFVec3f(new float[-0.2224,1.1517,-0.1033]);
let Shape682 = browser.currentScene.createNode("Shape");
let IndexedFaceSet683 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet683.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet683.creaseAngle = 0.5;
let Coordinate684 = browser.currentScene.createNode("Coordinate");
Coordinate684.USE = "points";
IndexedFaceSet683.coord = Coordinate684;

Shape682.geometry = IndexedFaceSet683;

let Appearance685 = browser.currentScene.createNode("Appearance");
let Material686 = browser.currentScene.createNode("Material");
Material686.USE = "SITE_COLOR";
Appearance685.material = Material686;

Shape682.appearance = Appearance685;

HAnimSite681.children = new MFNode();

HAnimSite681.children[0] = Shape682;

HAnimSegment673.children[2] = HAnimSite681;

HAnimJoint672.children = new MFNode();

HAnimJoint672.children[0] = HAnimSegment673;

let HAnimJoint687 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint687.name = "r_elbow";
HAnimJoint687.DEF = "hanim_r_elbow";
HAnimJoint687.center = new SFVec3f(new float[-0.1949,1.1388,-0.062]);
let HAnimSegment688 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment688.name = "r_forearm";
HAnimSegment688.DEF = "hanim_r_forearm";
let Transform689 = browser.currentScene.createNode("Transform");
Transform689.translation = new SFVec3f(new float[-0.1949,1.1388,-0.062]);
let Shape690 = browser.currentScene.createNode("Shape");
let IndexedFaceSet691 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet691.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet691.creaseAngle = 0.5;
let Coordinate692 = browser.currentScene.createNode("Coordinate");
Coordinate692.USE = "points";
IndexedFaceSet691.coord = Coordinate692;

Shape690.geometry = IndexedFaceSet691;

let Appearance693 = browser.currentScene.createNode("Appearance");
let Material694 = browser.currentScene.createNode("Material");
Material694.USE = "MIN_COLOR";
Appearance693.material = Material694;

Shape690.appearance = Appearance693;

Transform689.children = new MFNode();

Transform689.children[0] = Shape690;

HAnimSegment688.children = new MFNode();

HAnimSegment688.children[0] = Transform689;

let Transform695 = browser.currentScene.createNode("Transform");
Transform695.DEF = "r_forearm_adjust";
Transform695.center = new SFVec3f(new float[-0.198,0.961,-0.0397]);
Transform695.rotation = new SFRotation(new float[-1,0,0,0.1254]);
Transform695.translation = new SFVec3f(new float[-0.1949,1.1388,-0.062]);
HAnimSegment688.children[1] = Transform695;

let HAnimSite696 = browser.currentScene.createNode("HAnimSite");
HAnimSite696.name = "r_radial_styloid_pt";
HAnimSite696.DEF = "hanim_r_radial_styloid_pt";
HAnimSite696.translation = new SFVec3f(new float[-0.1884,0.8676,-0.036]);
let Shape697 = browser.currentScene.createNode("Shape");
let IndexedFaceSet698 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet698.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet698.creaseAngle = 0.5;
let Coordinate699 = browser.currentScene.createNode("Coordinate");
Coordinate699.USE = "points";
IndexedFaceSet698.coord = Coordinate699;

Shape697.geometry = IndexedFaceSet698;

let Appearance700 = browser.currentScene.createNode("Appearance");
let Material701 = browser.currentScene.createNode("Material");
Material701.USE = "SITE_COLOR";
Appearance700.material = Material701;

Shape697.appearance = Appearance700;

HAnimSite696.children = new MFNode();

HAnimSite696.children[0] = Shape697;

HAnimSegment688.children[2] = HAnimSite696;

let HAnimSite702 = browser.currentScene.createNode("HAnimSite");
HAnimSite702.name = "r_olecranon_pt";
HAnimSite702.DEF = "hanim_r_olecranon_pt";
HAnimSite702.translation = new SFVec3f(new float[-0.1907,1.1405,-0.1065]);
let Shape703 = browser.currentScene.createNode("Shape");
let IndexedFaceSet704 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet704.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet704.creaseAngle = 0.5;
let Coordinate705 = browser.currentScene.createNode("Coordinate");
Coordinate705.USE = "points";
IndexedFaceSet704.coord = Coordinate705;

Shape703.geometry = IndexedFaceSet704;

let Appearance706 = browser.currentScene.createNode("Appearance");
let Material707 = browser.currentScene.createNode("Material");
Material707.USE = "SITE_COLOR";
Appearance706.material = Material707;

Shape703.appearance = Appearance706;

HAnimSite702.children = new MFNode();

HAnimSite702.children[0] = Shape703;

HAnimSegment688.children[3] = HAnimSite702;

let HAnimSite708 = browser.currentScene.createNode("HAnimSite");
HAnimSite708.name = "r_humeral_medial_epicn_pt";
HAnimSite708.DEF = "hanim_r_humeral_medial_epicn_pt";
HAnimSite708.translation = new SFVec3f(new float[-0.168,1.1298,-0.1062]);
let Shape709 = browser.currentScene.createNode("Shape");
let IndexedFaceSet710 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet710.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet710.creaseAngle = 0.5;
let Coordinate711 = browser.currentScene.createNode("Coordinate");
Coordinate711.USE = "points";
IndexedFaceSet710.coord = Coordinate711;

Shape709.geometry = IndexedFaceSet710;

let Appearance712 = browser.currentScene.createNode("Appearance");
let Material713 = browser.currentScene.createNode("Material");
Material713.USE = "SITE_COLOR";
Appearance712.material = Material713;

Shape709.appearance = Appearance712;

HAnimSite708.children = new MFNode();

HAnimSite708.children[0] = Shape709;

HAnimSegment688.children[4] = HAnimSite708;

let HAnimSite714 = browser.currentScene.createNode("HAnimSite");
HAnimSite714.name = "r_radiale_pt";
HAnimSite714.DEF = "hanim_r_radiale_pt";
HAnimSite714.translation = new SFVec3f(new float[-0.213,1.1305,-0.1091]);
let Shape715 = browser.currentScene.createNode("Shape");
let IndexedFaceSet716 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet716.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet716.creaseAngle = 0.5;
let Coordinate717 = browser.currentScene.createNode("Coordinate");
Coordinate717.USE = "points";
IndexedFaceSet716.coord = Coordinate717;

Shape715.geometry = IndexedFaceSet716;

let Appearance718 = browser.currentScene.createNode("Appearance");
let Material719 = browser.currentScene.createNode("Material");
Material719.USE = "SITE_COLOR";
Appearance718.material = Material719;

Shape715.appearance = Appearance718;

HAnimSite714.children = new MFNode();

HAnimSite714.children[0] = Shape715;

HAnimSegment688.children[5] = HAnimSite714;

HAnimJoint687.children = new MFNode();

HAnimJoint687.children[0] = HAnimSegment688;

let HAnimJoint720 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint720.name = "r_wrist";
HAnimJoint720.DEF = "hanim_r_wrist";
HAnimJoint720.center = new SFVec3f(new float[-0.1959,0.8694,-0.0521]);
let HAnimSegment721 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment721.name = "r_hand";
HAnimSegment721.DEF = "hanim_r_hand";
let Transform722 = browser.currentScene.createNode("Transform");
Transform722.translation = new SFVec3f(new float[-0.1959,0.8694,-0.0521]);
let Shape723 = browser.currentScene.createNode("Shape");
let IndexedFaceSet724 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet724.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet724.creaseAngle = 0.5;
let Coordinate725 = browser.currentScene.createNode("Coordinate");
Coordinate725.USE = "points";
IndexedFaceSet724.coord = Coordinate725;

Shape723.geometry = IndexedFaceSet724;

let Appearance726 = browser.currentScene.createNode("Appearance");
let Material727 = browser.currentScene.createNode("Material");
Material727.USE = "MIN_COLOR";
Appearance726.material = Material727;

Shape723.appearance = Appearance726;

Transform722.children = new MFNode();

Transform722.children[0] = Shape723;

HAnimSegment721.children = new MFNode();

HAnimSegment721.children[0] = Transform722;

let Transform728 = browser.currentScene.createNode("Transform");
Transform728.DEF = "r_hand_adjust";
Transform728.center = new SFVec3f(new float[-0.217,0.811,-0.0338]);
Transform728.rotation = new SFRotation(new float[-0.09024,0.994,-0.0624,1.216]);
HAnimSegment721.children[1] = Transform728;

let HAnimSite729 = browser.currentScene.createNode("HAnimSite");
HAnimSite729.name = "r_hand_tip";
HAnimSite729.DEF = "hanim_r_hand_tip";
HAnimSite729.translation = new SFVec3f(new float[-0.1969,0.6758,-0.0427]);
let Shape730 = browser.currentScene.createNode("Shape");
let IndexedFaceSet731 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet731.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet731.creaseAngle = 0.5;
let Coordinate732 = browser.currentScene.createNode("Coordinate");
Coordinate732.USE = "points";
IndexedFaceSet731.coord = Coordinate732;

Shape730.geometry = IndexedFaceSet731;

let Appearance733 = browser.currentScene.createNode("Appearance");
let Material734 = browser.currentScene.createNode("Material");
Material734.USE = "SITE_COLOR";
Appearance733.material = Material734;

Shape730.appearance = Appearance733;

HAnimSite729.children = new MFNode();

HAnimSite729.children[0] = Shape730;

HAnimSegment721.children[2] = HAnimSite729;

let HAnimSite735 = browser.currentScene.createNode("HAnimSite");
HAnimSite735.name = "r_metacarpal_pha2_pt";
HAnimSite735.DEF = "hanim_r_metacarpal_pha2_pt";
HAnimSite735.translation = new SFVec3f(new float[-0.1977,0.8169,-0.0177]);
let Shape736 = browser.currentScene.createNode("Shape");
let IndexedFaceSet737 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet737.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet737.creaseAngle = 0.5;
let Coordinate738 = browser.currentScene.createNode("Coordinate");
Coordinate738.USE = "points";
IndexedFaceSet737.coord = Coordinate738;

Shape736.geometry = IndexedFaceSet737;

let Appearance739 = browser.currentScene.createNode("Appearance");
let Material740 = browser.currentScene.createNode("Material");
Material740.USE = "SITE_COLOR";
Appearance739.material = Material740;

Shape736.appearance = Appearance739;

HAnimSite735.children = new MFNode();

HAnimSite735.children[0] = Shape736;

HAnimSegment721.children[3] = HAnimSite735;

let HAnimSite741 = browser.currentScene.createNode("HAnimSite");
HAnimSite741.name = "r_dactylion_pt";
HAnimSite741.DEF = "hanim_r_dactylion_pt";
HAnimSite741.translation = new SFVec3f(new float[-0.1941,0.6772,-0.0423]);
let Shape742 = browser.currentScene.createNode("Shape");
let IndexedFaceSet743 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet743.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet743.creaseAngle = 0.5;
let Coordinate744 = browser.currentScene.createNode("Coordinate");
Coordinate744.USE = "points";
IndexedFaceSet743.coord = Coordinate744;

Shape742.geometry = IndexedFaceSet743;

let Appearance745 = browser.currentScene.createNode("Appearance");
let Material746 = browser.currentScene.createNode("Material");
Material746.USE = "SITE_COLOR";
Appearance745.material = Material746;

Shape742.appearance = Appearance745;

HAnimSite741.children = new MFNode();

HAnimSite741.children[0] = Shape742;

HAnimSegment721.children[4] = HAnimSite741;

let HAnimSite747 = browser.currentScene.createNode("HAnimSite");
HAnimSite747.name = "r_ulnar_styloid_pt";
HAnimSite747.DEF = "hanim_r_ulnar_styloid_pt";
HAnimSite747.translation = new SFVec3f(new float[-0.2117,0.8562,-0.0584]);
let Shape748 = browser.currentScene.createNode("Shape");
let IndexedFaceSet749 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet749.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet749.creaseAngle = 0.5;
let Coordinate750 = browser.currentScene.createNode("Coordinate");
Coordinate750.USE = "points";
IndexedFaceSet749.coord = Coordinate750;

Shape748.geometry = IndexedFaceSet749;

let Appearance751 = browser.currentScene.createNode("Appearance");
let Material752 = browser.currentScene.createNode("Material");
Material752.USE = "SITE_COLOR";
Appearance751.material = Material752;

Shape748.appearance = Appearance751;

HAnimSite747.children = new MFNode();

HAnimSite747.children[0] = Shape748;

HAnimSegment721.children[5] = HAnimSite747;

let HAnimSite753 = browser.currentScene.createNode("HAnimSite");
HAnimSite753.name = "r_metacarpal_pha5_pt";
HAnimSite753.DEF = "hanim_r_metacarpal_pha5_pt";
HAnimSite753.translation = new SFVec3f(new float[-0.1929,0.789,-0.1064]);
let Shape754 = browser.currentScene.createNode("Shape");
let IndexedFaceSet755 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet755.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet755.creaseAngle = 0.5;
let Coordinate756 = browser.currentScene.createNode("Coordinate");
Coordinate756.USE = "points";
IndexedFaceSet755.coord = Coordinate756;

Shape754.geometry = IndexedFaceSet755;

let Appearance757 = browser.currentScene.createNode("Appearance");
let Material758 = browser.currentScene.createNode("Material");
Material758.USE = "SITE_COLOR";
Appearance757.material = Material758;

Shape754.appearance = Appearance757;

HAnimSite753.children = new MFNode();

HAnimSite753.children[0] = Shape754;

HAnimSegment721.children[6] = HAnimSite753;

HAnimJoint720.children = new MFNode();

HAnimJoint720.children[0] = HAnimSegment721;

HAnimJoint687.children[1] = HAnimJoint720;

HAnimJoint672.children[1] = HAnimJoint687;

HAnimJoint509.children[2] = HAnimJoint672;

let HAnimJoint759 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint759.name = "vc7";
HAnimJoint759.DEF = "hanim_vc7";
HAnimJoint759.center = new SFVec3f(new float[0.0066,1.5132,-0.0301]);
let HAnimSegment760 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment760.name = "c7";
HAnimSegment760.DEF = "hanim_c7";
let Transform761 = browser.currentScene.createNode("Transform");
Transform761.translation = new SFVec3f(new float[0.0066,1.5132,-0.0301]);
let Shape762 = browser.currentScene.createNode("Shape");
let IndexedFaceSet763 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet763.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet763.creaseAngle = 0.5;
let Coordinate764 = browser.currentScene.createNode("Coordinate");
Coordinate764.USE = "points";
IndexedFaceSet763.coord = Coordinate764;

Shape762.geometry = IndexedFaceSet763;

let Appearance765 = browser.currentScene.createNode("Appearance");
let Material766 = browser.currentScene.createNode("Material");
Material766.USE = "SPINAL_COLOR";
Appearance765.material = Material766;

Shape762.appearance = Appearance765;

Transform761.children = new MFNode();

Transform761.children[0] = Shape762;

HAnimSegment760.children = new MFNode();

HAnimSegment760.children[0] = Transform761;

HAnimJoint759.children = new MFNode();

HAnimJoint759.children[0] = HAnimSegment760;

let HAnimJoint767 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint767.name = "vc6";
HAnimJoint767.DEF = "hanim_vc6";
HAnimJoint767.center = new SFVec3f(new float[0.0066,1.5357,-0.0143]);
let HAnimSegment768 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment768.name = "c6";
HAnimSegment768.DEF = "hanim_c6";
let Transform769 = browser.currentScene.createNode("Transform");
Transform769.translation = new SFVec3f(new float[0.0066,1.5357,-0.0143]);
let Shape770 = browser.currentScene.createNode("Shape");
let IndexedFaceSet771 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet771.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet771.creaseAngle = 0.5;
let Coordinate772 = browser.currentScene.createNode("Coordinate");
Coordinate772.USE = "points";
IndexedFaceSet771.coord = Coordinate772;

Shape770.geometry = IndexedFaceSet771;

let Appearance773 = browser.currentScene.createNode("Appearance");
let Material774 = browser.currentScene.createNode("Material");
Material774.USE = "SPINAL_COLOR";
Appearance773.material = Material774;

Shape770.appearance = Appearance773;

Transform769.children = new MFNode();

Transform769.children[0] = Shape770;

HAnimSegment768.children = new MFNode();

HAnimSegment768.children[0] = Transform769;

HAnimJoint767.children = new MFNode();

HAnimJoint767.children[0] = HAnimSegment768;

let HAnimJoint775 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint775.name = "vc5";
HAnimJoint775.DEF = "hanim_vc5";
HAnimJoint775.center = new SFVec3f(new float[0.0066,1.552,-0.0082]);
let HAnimSegment776 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment776.name = "c5";
HAnimSegment776.DEF = "hanim_c5";
let Transform777 = browser.currentScene.createNode("Transform");
Transform777.translation = new SFVec3f(new float[0.0066,1.552,-0.0082]);
let Shape778 = browser.currentScene.createNode("Shape");
let IndexedFaceSet779 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet779.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet779.creaseAngle = 0.5;
let Coordinate780 = browser.currentScene.createNode("Coordinate");
Coordinate780.USE = "points";
IndexedFaceSet779.coord = Coordinate780;

Shape778.geometry = IndexedFaceSet779;

let Appearance781 = browser.currentScene.createNode("Appearance");
let Material782 = browser.currentScene.createNode("Material");
Material782.USE = "SPINAL_COLOR";
Appearance781.material = Material782;

Shape778.appearance = Appearance781;

Transform777.children = new MFNode();

Transform777.children[0] = Shape778;

HAnimSegment776.children = new MFNode();

HAnimSegment776.children[0] = Transform777;

HAnimJoint775.children = new MFNode();

HAnimJoint775.children[0] = HAnimSegment776;

let HAnimJoint783 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint783.name = "vc4";
HAnimJoint783.DEF = "hanim_vc4";
HAnimJoint783.center = new SFVec3f(new float[0.0066,1.5662,-0.0084]);
let HAnimSegment784 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment784.name = "c4";
HAnimSegment784.DEF = "hanim_c4";
let Transform785 = browser.currentScene.createNode("Transform");
Transform785.translation = new SFVec3f(new float[0.0066,1.5662,-0.0084]);
let Shape786 = browser.currentScene.createNode("Shape");
let IndexedFaceSet787 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet787.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet787.creaseAngle = 0.5;
let Coordinate788 = browser.currentScene.createNode("Coordinate");
Coordinate788.USE = "points";
IndexedFaceSet787.coord = Coordinate788;

Shape786.geometry = IndexedFaceSet787;

let Appearance789 = browser.currentScene.createNode("Appearance");
let Material790 = browser.currentScene.createNode("Material");
Material790.USE = "SPINAL_COLOR";
Appearance789.material = Material790;

Shape786.appearance = Appearance789;

Transform785.children = new MFNode();

Transform785.children[0] = Shape786;

HAnimSegment784.children = new MFNode();

HAnimSegment784.children[0] = Transform785;

HAnimJoint783.children = new MFNode();

HAnimJoint783.children[0] = HAnimSegment784;

let HAnimJoint791 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint791.name = "vc3";
HAnimJoint791.DEF = "hanim_vc3";
HAnimJoint791.center = new SFVec3f(new float[0.0066,1.58,-0.0103]);
let HAnimSegment792 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment792.name = "c3";
HAnimSegment792.DEF = "hanim_c3";
let Transform793 = browser.currentScene.createNode("Transform");
Transform793.translation = new SFVec3f(new float[0.0066,1.58,-0.0103]);
let Shape794 = browser.currentScene.createNode("Shape");
let IndexedFaceSet795 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet795.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet795.creaseAngle = 0.5;
let Coordinate796 = browser.currentScene.createNode("Coordinate");
Coordinate796.USE = "points";
IndexedFaceSet795.coord = Coordinate796;

Shape794.geometry = IndexedFaceSet795;

let Appearance797 = browser.currentScene.createNode("Appearance");
let Material798 = browser.currentScene.createNode("Material");
Material798.USE = "SPINAL_COLOR";
Appearance797.material = Material798;

Shape794.appearance = Appearance797;

Transform793.children = new MFNode();

Transform793.children[0] = Shape794;

HAnimSegment792.children = new MFNode();

HAnimSegment792.children[0] = Transform793;

HAnimJoint791.children = new MFNode();

HAnimJoint791.children[0] = HAnimSegment792;

let HAnimJoint799 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint799.name = "vc2";
HAnimJoint799.DEF = "hanim_vc2";
HAnimJoint799.center = new SFVec3f(new float[0.0066,1.5928,-0.0103]);
let HAnimSegment800 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment800.name = "c2";
HAnimSegment800.DEF = "hanim_c2";
let Transform801 = browser.currentScene.createNode("Transform");
Transform801.translation = new SFVec3f(new float[0.0066,1.5928,-0.0103]);
let Shape802 = browser.currentScene.createNode("Shape");
let IndexedFaceSet803 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet803.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet803.creaseAngle = 0.5;
let Coordinate804 = browser.currentScene.createNode("Coordinate");
Coordinate804.USE = "points";
IndexedFaceSet803.coord = Coordinate804;

Shape802.geometry = IndexedFaceSet803;

let Appearance805 = browser.currentScene.createNode("Appearance");
let Material806 = browser.currentScene.createNode("Material");
Material806.USE = "REC_SPINAL_COLOR";
Appearance805.material = Material806;

Shape802.appearance = Appearance805;

Transform801.children = new MFNode();

Transform801.children[0] = Shape802;

HAnimSegment800.children = new MFNode();

HAnimSegment800.children[0] = Transform801;

HAnimJoint799.children = new MFNode();

HAnimJoint799.children[0] = HAnimSegment800;

let HAnimJoint807 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint807.name = "vc1";
HAnimJoint807.DEF = "hanim_vc1";
HAnimJoint807.center = new SFVec3f(new float[0.0066,1.6144,-0.0034]);
let HAnimSegment808 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment808.name = "c1";
HAnimSegment808.DEF = "hanim_c1";
let Transform809 = browser.currentScene.createNode("Transform");
Transform809.translation = new SFVec3f(new float[0.0066,1.6144,-0.0034]);
let Shape810 = browser.currentScene.createNode("Shape");
let IndexedFaceSet811 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet811.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet811.creaseAngle = 0.5;
let Coordinate812 = browser.currentScene.createNode("Coordinate");
Coordinate812.USE = "points";
IndexedFaceSet811.coord = Coordinate812;

Shape810.geometry = IndexedFaceSet811;

let Appearance813 = browser.currentScene.createNode("Appearance");
let Material814 = browser.currentScene.createNode("Material");
Material814.USE = "SPINAL_COLOR";
Appearance813.material = Material814;

Shape810.appearance = Appearance813;

Transform809.children = new MFNode();

Transform809.children[0] = Shape810;

HAnimSegment808.children = new MFNode();

HAnimSegment808.children[0] = Transform809;

HAnimJoint807.children = new MFNode();

HAnimJoint807.children[0] = HAnimSegment808;

let HAnimJoint815 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint815.name = "skullbase";
HAnimJoint815.DEF = "hanim_skullbase";
HAnimJoint815.center = new SFVec3f(new float[0.0044,1.6209,0.0236]);
let HAnimSegment816 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment816.name = "skull";
HAnimSegment816.DEF = "hanim_skull";
let Transform817 = browser.currentScene.createNode("Transform");
Transform817.translation = new SFVec3f(new float[0.0044,1.6209,0.0236]);
let Shape818 = browser.currentScene.createNode("Shape");
let IndexedFaceSet819 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet819.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet819.creaseAngle = 0.5;
let Coordinate820 = browser.currentScene.createNode("Coordinate");
Coordinate820.USE = "points";
IndexedFaceSet819.coord = Coordinate820;

Shape818.geometry = IndexedFaceSet819;

let Appearance821 = browser.currentScene.createNode("Appearance");
let Material822 = browser.currentScene.createNode("Material");
Material822.USE = "MIN_COLOR";
Appearance821.material = Material822;

Shape818.appearance = Appearance821;

Transform817.children = new MFNode();

Transform817.children[0] = Shape818;

HAnimSegment816.children = new MFNode();

HAnimSegment816.children[0] = Transform817;

let HAnimSite823 = browser.currentScene.createNode("HAnimSite");
HAnimSite823.name = "skull_tip";
HAnimSite823.DEF = "hanim_skull_tip";
HAnimSite823.translation = new SFVec3f(new float[0.005,1.7504,0.0055]);
let Shape824 = browser.currentScene.createNode("Shape");
let IndexedFaceSet825 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet825.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet825.creaseAngle = 0.5;
let Coordinate826 = browser.currentScene.createNode("Coordinate");
Coordinate826.USE = "points";
IndexedFaceSet825.coord = Coordinate826;

Shape824.geometry = IndexedFaceSet825;

let Appearance827 = browser.currentScene.createNode("Appearance");
let Material828 = browser.currentScene.createNode("Material");
Material828.USE = "SITE_COLOR";
Appearance827.material = Material828;

Shape824.appearance = Appearance827;

HAnimSite823.children = new MFNode();

HAnimSite823.children[0] = Shape824;

HAnimSegment816.children[1] = HAnimSite823;

let HAnimSite829 = browser.currentScene.createNode("HAnimSite");
HAnimSite829.name = "sellion_pt";
HAnimSite829.DEF = "hanim_sellion_pt";
HAnimSite829.translation = new SFVec3f(new float[0.0058,1.6316,0.0852]);
let Shape830 = browser.currentScene.createNode("Shape");
let IndexedFaceSet831 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet831.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet831.creaseAngle = 0.5;
let Coordinate832 = browser.currentScene.createNode("Coordinate");
Coordinate832.USE = "points";
IndexedFaceSet831.coord = Coordinate832;

Shape830.geometry = IndexedFaceSet831;

let Appearance833 = browser.currentScene.createNode("Appearance");
let Material834 = browser.currentScene.createNode("Material");
Material834.USE = "SITE_COLOR";
Appearance833.material = Material834;

Shape830.appearance = Appearance833;

HAnimSite829.children = new MFNode();

HAnimSite829.children[0] = Shape830;

HAnimSegment816.children[2] = HAnimSite829;

let HAnimSite835 = browser.currentScene.createNode("HAnimSite");
HAnimSite835.name = "r_infraorbitale_pt";
HAnimSite835.DEF = "hanim_r_infraorbitale_pt";
HAnimSite835.translation = new SFVec3f(new float[-0.0237,1.6171,0.0752]);
let Shape836 = browser.currentScene.createNode("Shape");
let IndexedFaceSet837 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet837.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet837.creaseAngle = 0.5;
let Coordinate838 = browser.currentScene.createNode("Coordinate");
Coordinate838.USE = "points";
IndexedFaceSet837.coord = Coordinate838;

Shape836.geometry = IndexedFaceSet837;

let Appearance839 = browser.currentScene.createNode("Appearance");
let Material840 = browser.currentScene.createNode("Material");
Material840.USE = "SITE_COLOR";
Appearance839.material = Material840;

Shape836.appearance = Appearance839;

HAnimSite835.children = new MFNode();

HAnimSite835.children[0] = Shape836;

HAnimSegment816.children[3] = HAnimSite835;

let HAnimSite841 = browser.currentScene.createNode("HAnimSite");
HAnimSite841.name = "l_infraorbitale_pt";
HAnimSite841.DEF = "hanim_l_infraorbitale_pt";
HAnimSite841.translation = new SFVec3f(new float[0.0341,1.6171,0.0752]);
let Shape842 = browser.currentScene.createNode("Shape");
let IndexedFaceSet843 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet843.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet843.creaseAngle = 0.5;
let Coordinate844 = browser.currentScene.createNode("Coordinate");
Coordinate844.USE = "points";
IndexedFaceSet843.coord = Coordinate844;

Shape842.geometry = IndexedFaceSet843;

let Appearance845 = browser.currentScene.createNode("Appearance");
let Material846 = browser.currentScene.createNode("Material");
Material846.USE = "SITE_COLOR";
Appearance845.material = Material846;

Shape842.appearance = Appearance845;

HAnimSite841.children = new MFNode();

HAnimSite841.children[0] = Shape842;

HAnimSegment816.children[4] = HAnimSite841;

let HAnimSite847 = browser.currentScene.createNode("HAnimSite");
HAnimSite847.name = "supramenton_pt";
HAnimSite847.DEF = "hanim_supramenton_pt";
HAnimSite847.translation = new SFVec3f(new float[0.0061,1.541,0.0805]);
let Shape848 = browser.currentScene.createNode("Shape");
let IndexedFaceSet849 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet849.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet849.creaseAngle = 0.5;
let Coordinate850 = browser.currentScene.createNode("Coordinate");
Coordinate850.USE = "points";
IndexedFaceSet849.coord = Coordinate850;

Shape848.geometry = IndexedFaceSet849;

let Appearance851 = browser.currentScene.createNode("Appearance");
let Material852 = browser.currentScene.createNode("Material");
Material852.USE = "SITE_COLOR";
Appearance851.material = Material852;

Shape848.appearance = Appearance851;

HAnimSite847.children = new MFNode();

HAnimSite847.children[0] = Shape848;

HAnimSegment816.children[5] = HAnimSite847;

let HAnimSite853 = browser.currentScene.createNode("HAnimSite");
HAnimSite853.name = "r_tragion_pt";
HAnimSite853.DEF = "hanim_r_tragion_pt";
HAnimSite853.translation = new SFVec3f(new float[-0.0646,1.6347,0.0302]);
let Shape854 = browser.currentScene.createNode("Shape");
let IndexedFaceSet855 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet855.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet855.creaseAngle = 0.5;
let Coordinate856 = browser.currentScene.createNode("Coordinate");
Coordinate856.USE = "points";
IndexedFaceSet855.coord = Coordinate856;

Shape854.geometry = IndexedFaceSet855;

let Appearance857 = browser.currentScene.createNode("Appearance");
let Material858 = browser.currentScene.createNode("Material");
Material858.USE = "SITE_COLOR";
Appearance857.material = Material858;

Shape854.appearance = Appearance857;

HAnimSite853.children = new MFNode();

HAnimSite853.children[0] = Shape854;

HAnimSegment816.children[6] = HAnimSite853;

let HAnimSite859 = browser.currentScene.createNode("HAnimSite");
HAnimSite859.name = "r_gonion_pt";
HAnimSite859.DEF = "hanim_r_gonion_pt";
HAnimSite859.translation = new SFVec3f(new float[-0.052,1.5529,0.0347]);
let Shape860 = browser.currentScene.createNode("Shape");
let IndexedFaceSet861 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet861.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet861.creaseAngle = 0.5;
let Coordinate862 = browser.currentScene.createNode("Coordinate");
Coordinate862.USE = "points";
IndexedFaceSet861.coord = Coordinate862;

Shape860.geometry = IndexedFaceSet861;

let Appearance863 = browser.currentScene.createNode("Appearance");
let Material864 = browser.currentScene.createNode("Material");
Material864.USE = "SITE_COLOR";
Appearance863.material = Material864;

Shape860.appearance = Appearance863;

HAnimSite859.children = new MFNode();

HAnimSite859.children[0] = Shape860;

HAnimSegment816.children[7] = HAnimSite859;

let HAnimSite865 = browser.currentScene.createNode("HAnimSite");
HAnimSite865.name = "l_tragion_pt";
HAnimSite865.DEF = "hanim_l_tragion_pt";
HAnimSite865.translation = new SFVec3f(new float[0.0739,1.6348,0.0282]);
let Shape866 = browser.currentScene.createNode("Shape");
let IndexedFaceSet867 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet867.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet867.creaseAngle = 0.5;
let Coordinate868 = browser.currentScene.createNode("Coordinate");
Coordinate868.USE = "points";
IndexedFaceSet867.coord = Coordinate868;

Shape866.geometry = IndexedFaceSet867;

let Appearance869 = browser.currentScene.createNode("Appearance");
let Material870 = browser.currentScene.createNode("Material");
Material870.USE = "SITE_COLOR";
Appearance869.material = Material870;

Shape866.appearance = Appearance869;

HAnimSite865.children = new MFNode();

HAnimSite865.children[0] = Shape866;

HAnimSegment816.children[8] = HAnimSite865;

let HAnimSite871 = browser.currentScene.createNode("HAnimSite");
HAnimSite871.name = "l_gonion_pt";
HAnimSite871.DEF = "hanim_l_gonion_pt";
HAnimSite871.translation = new SFVec3f(new float[0.0631,1.553,0.033]);
let Shape872 = browser.currentScene.createNode("Shape");
let IndexedFaceSet873 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet873.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet873.creaseAngle = 0.5;
let Coordinate874 = browser.currentScene.createNode("Coordinate");
Coordinate874.USE = "points";
IndexedFaceSet873.coord = Coordinate874;

Shape872.geometry = IndexedFaceSet873;

let Appearance875 = browser.currentScene.createNode("Appearance");
let Material876 = browser.currentScene.createNode("Material");
Material876.USE = "SITE_COLOR";
Appearance875.material = Material876;

Shape872.appearance = Appearance875;

HAnimSite871.children = new MFNode();

HAnimSite871.children[0] = Shape872;

HAnimSegment816.children[9] = HAnimSite871;

let HAnimSite877 = browser.currentScene.createNode("HAnimSite");
HAnimSite877.name = "nuchale_pt";
HAnimSite877.DEF = "hanim_nuchale_pt";
HAnimSite877.translation = new SFVec3f(new float[0.0039,1.5972,-0.0796]);
let Shape878 = browser.currentScene.createNode("Shape");
let IndexedFaceSet879 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet879.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet879.creaseAngle = 0.5;
let Coordinate880 = browser.currentScene.createNode("Coordinate");
Coordinate880.USE = "points";
IndexedFaceSet879.coord = Coordinate880;

Shape878.geometry = IndexedFaceSet879;

let Appearance881 = browser.currentScene.createNode("Appearance");
let Material882 = browser.currentScene.createNode("Material");
Material882.USE = "SITE_COLOR";
Appearance881.material = Material882;

Shape878.appearance = Appearance881;

HAnimSite877.children = new MFNode();

HAnimSite877.children[0] = Shape878;

HAnimSegment816.children[10] = HAnimSite877;

HAnimJoint815.children = new MFNode();

HAnimJoint815.children[0] = HAnimSegment816;

HAnimJoint807.children[1] = HAnimJoint815;

HAnimJoint799.children[1] = HAnimJoint807;

HAnimJoint791.children[1] = HAnimJoint799;

HAnimJoint783.children[1] = HAnimJoint791;

HAnimJoint775.children[1] = HAnimJoint783;

HAnimJoint767.children[1] = HAnimJoint775;

HAnimJoint759.children[1] = HAnimJoint767;

HAnimJoint509.children[3] = HAnimJoint759;

HAnimJoint501.children[1] = HAnimJoint509;

HAnimJoint493.children[1] = HAnimJoint501;

HAnimJoint485.children[1] = HAnimJoint493;

HAnimJoint477.children[1] = HAnimJoint485;

HAnimJoint469.children[1] = HAnimJoint477;

HAnimJoint461.children[1] = HAnimJoint469;

HAnimJoint453.children[1] = HAnimJoint461;

HAnimJoint445.children[1] = HAnimJoint453;

HAnimJoint437.children[1] = HAnimJoint445;

HAnimJoint429.children[1] = HAnimJoint437;

HAnimJoint421.children[1] = HAnimJoint429;

HAnimJoint413.children[1] = HAnimJoint421;

HAnimJoint405.children[1] = HAnimJoint413;

HAnimJoint397.children[1] = HAnimJoint405;

HAnimJoint389.children[1] = HAnimJoint397;

HAnimJoint381.children[1] = HAnimJoint389;

HAnimJoint86.children[2] = HAnimJoint381;

HAnimHumanoid78.joints = new MFNode();

HAnimHumanoid78.joints[0] = HAnimJoint86;

let HAnimSite883 = browser.currentScene.createNode("HAnimSite");
HAnimSite883.name = "DiamondManLOA_2_view";
HAnimSite883.DEF = "hanim_DiamondManLOA_2_view";
let Viewpoint884 = browser.currentScene.createNode("Viewpoint");
Viewpoint884.DEF = "FrontView";
Viewpoint884.description = "Front View";
Viewpoint884.position = new SFVec3f(new float[0.35,0.854,2.57665]);
HAnimSite883.children = new MFNode();

HAnimSite883.children[0] = Viewpoint884;

let Viewpoint885 = browser.currentScene.createNode("Viewpoint");
Viewpoint885.DEF = "SideView";
Viewpoint885.description = "Side View";
Viewpoint885.orientation = new SFRotation(new float[0,1,0,1.57079]);
Viewpoint885.position = new SFVec3f(new float[2,0.854,0]);
HAnimSite883.children[1] = Viewpoint885;

let Viewpoint886 = browser.currentScene.createNode("Viewpoint");
Viewpoint886.DEF = "TopView";
Viewpoint886.description = "Top View";
Viewpoint886.orientation = new SFRotation(new float[1,0,0,-1.57079]);
Viewpoint886.position = new SFVec3f(new float[0,3.4495,0]);
HAnimSite883.children[2] = Viewpoint886;

let Viewpoint887 = browser.currentScene.createNode("Viewpoint");
Viewpoint887.DEF = "RootView";
Viewpoint887.description = "Humanoid Root View";
Viewpoint887.position = new SFVec3f(new float[0,0.824,0.277]);
HAnimSite883.children[3] = Viewpoint887;

let Viewpoint888 = browser.currentScene.createNode("Viewpoint");
Viewpoint888.DEF = "InclinedView";
Viewpoint888.description = "Inclined View";
Viewpoint888.orientation = new SFRotation(new float[-0.113,0.993,0.0347,0.671]);
Viewpoint888.position = new SFVec3f(new float[1.62,1.05,2.06]);
HAnimSite883.children[4] = Viewpoint888;

HAnimHumanoid78.viewpoints[1] = HAnimSite883;

let HAnimJoint889 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint889.USE = "hanim_HumanoidRoot";
HAnimHumanoid78.joints[2] = HAnimJoint889;

let HAnimJoint890 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint890.USE = "hanim_sacroiliac";
HAnimHumanoid78.joints[3] = HAnimJoint890;

let HAnimJoint891 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint891.USE = "hanim_vl1";
HAnimHumanoid78.joints[4] = HAnimJoint891;

let HAnimJoint892 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint892.USE = "hanim_vc4";
HAnimHumanoid78.joints[5] = HAnimJoint892;

let HAnimJoint893 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint893.USE = "hanim_skullbase";
HAnimHumanoid78.joints[6] = HAnimJoint893;

let HAnimJoint894 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint894.USE = "hanim_vl5";
HAnimHumanoid78.joints[7] = HAnimJoint894;

let HAnimJoint895 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint895.USE = "hanim_vl4";
HAnimHumanoid78.joints[8] = HAnimJoint895;

let HAnimJoint896 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint896.USE = "hanim_vl3";
HAnimHumanoid78.joints[9] = HAnimJoint896;

let HAnimJoint897 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint897.USE = "hanim_vl2";
HAnimHumanoid78.joints[10] = HAnimJoint897;

let HAnimJoint898 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint898.USE = "hanim_vt12";
HAnimHumanoid78.joints[11] = HAnimJoint898;

let HAnimJoint899 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint899.USE = "hanim_vt11";
HAnimHumanoid78.joints[12] = HAnimJoint899;

let HAnimJoint900 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint900.USE = "hanim_vt10";
HAnimHumanoid78.joints[13] = HAnimJoint900;

let HAnimJoint901 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint901.USE = "hanim_vt9";
HAnimHumanoid78.joints[14] = HAnimJoint901;

let HAnimJoint902 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint902.USE = "hanim_vt8";
HAnimHumanoid78.joints[15] = HAnimJoint902;

let HAnimJoint903 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint903.USE = "hanim_vt7";
HAnimHumanoid78.joints[16] = HAnimJoint903;

let HAnimJoint904 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint904.USE = "hanim_vt6";
HAnimHumanoid78.joints[17] = HAnimJoint904;

let HAnimJoint905 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint905.USE = "hanim_vt5";
HAnimHumanoid78.joints[18] = HAnimJoint905;

let HAnimJoint906 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint906.USE = "hanim_vt4";
HAnimHumanoid78.joints[19] = HAnimJoint906;

let HAnimJoint907 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint907.USE = "hanim_vt3";
HAnimHumanoid78.joints[20] = HAnimJoint907;

let HAnimJoint908 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint908.USE = "hanim_vt2";
HAnimHumanoid78.joints[21] = HAnimJoint908;

let HAnimJoint909 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint909.USE = "hanim_vt1";
HAnimHumanoid78.joints[22] = HAnimJoint909;

let HAnimJoint910 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint910.USE = "hanim_vc7";
HAnimHumanoid78.joints[23] = HAnimJoint910;

let HAnimJoint911 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint911.USE = "hanim_vc6";
HAnimHumanoid78.joints[24] = HAnimJoint911;

let HAnimJoint912 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint912.USE = "hanim_vc5";
HAnimHumanoid78.joints[25] = HAnimJoint912;

let HAnimJoint913 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint913.USE = "hanim_vc3";
HAnimHumanoid78.joints[26] = HAnimJoint913;

let HAnimJoint914 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint914.USE = "hanim_vc2";
HAnimHumanoid78.joints[27] = HAnimJoint914;

let HAnimJoint915 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint915.USE = "hanim_vc1";
HAnimHumanoid78.joints[28] = HAnimJoint915;

let HAnimJoint916 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint916.USE = "hanim_l_ankle";
HAnimHumanoid78.joints[29] = HAnimJoint916;

let HAnimJoint917 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint917.USE = "hanim_r_ankle";
HAnimHumanoid78.joints[30] = HAnimJoint917;

let HAnimJoint918 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint918.USE = "hanim_l_elbow";
HAnimHumanoid78.joints[31] = HAnimJoint918;

let HAnimJoint919 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint919.USE = "hanim_r_elbow";
HAnimHumanoid78.joints[32] = HAnimJoint919;

let HAnimJoint920 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint920.USE = "hanim_l_hip";
HAnimHumanoid78.joints[33] = HAnimJoint920;

let HAnimJoint921 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint921.USE = "hanim_r_hip";
HAnimHumanoid78.joints[34] = HAnimJoint921;

let HAnimJoint922 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint922.USE = "hanim_l_index0";
HAnimHumanoid78.joints[35] = HAnimJoint922;

let HAnimJoint923 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint923.USE = "hanim_l_index1";
HAnimHumanoid78.joints[36] = HAnimJoint923;

let HAnimJoint924 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint924.USE = "hanim_l_index2";
HAnimHumanoid78.joints[37] = HAnimJoint924;

let HAnimJoint925 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint925.USE = "hanim_l_index3";
HAnimHumanoid78.joints[38] = HAnimJoint925;

let HAnimJoint926 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint926.USE = "hanim_l_knee";
HAnimHumanoid78.joints[39] = HAnimJoint926;

let HAnimJoint927 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint927.USE = "hanim_r_knee";
HAnimHumanoid78.joints[40] = HAnimJoint927;

let HAnimJoint928 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint928.USE = "hanim_l_metatarsal";
HAnimHumanoid78.joints[41] = HAnimJoint928;

let HAnimJoint929 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint929.USE = "hanim_l_midtarsal";
HAnimHumanoid78.joints[42] = HAnimJoint929;

let HAnimJoint930 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint930.USE = "hanim_r_midtarsal";
HAnimHumanoid78.joints[43] = HAnimJoint930;

let HAnimJoint931 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint931.USE = "hanim_l_shoulder";
HAnimHumanoid78.joints[44] = HAnimJoint931;

let HAnimJoint932 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint932.USE = "hanim_r_shoulder";
HAnimHumanoid78.joints[45] = HAnimJoint932;

let HAnimJoint933 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint933.USE = "hanim_l_subtalar";
HAnimHumanoid78.joints[46] = HAnimJoint933;

let HAnimJoint934 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint934.USE = "hanim_l_thumb1";
HAnimHumanoid78.joints[47] = HAnimJoint934;

let HAnimJoint935 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint935.USE = "hanim_l_thumb2";
HAnimHumanoid78.joints[48] = HAnimJoint935;

let HAnimJoint936 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint936.USE = "hanim_l_thumb3";
HAnimHumanoid78.joints[49] = HAnimJoint936;

let HAnimJoint937 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint937.USE = "hanim_l_wrist";
HAnimHumanoid78.joints[50] = HAnimJoint937;

let HAnimJoint938 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint938.USE = "hanim_r_wrist";
HAnimHumanoid78.joints[51] = HAnimJoint938;

let HAnimSegment939 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment939.USE = "hanim_pelvis";
HAnimHumanoid78.segments[52] = HAnimSegment939;

let HAnimSegment940 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment940.USE = "hanim_c7";
HAnimHumanoid78.segments[53] = HAnimSegment940;

let HAnimSegment941 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment941.USE = "hanim_c4";
HAnimHumanoid78.segments[54] = HAnimSegment941;

let HAnimSegment942 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment942.USE = "hanim_skull";
HAnimHumanoid78.segments[55] = HAnimSegment942;

let HAnimSegment943 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment943.USE = "hanim_sacrum";
HAnimHumanoid78.segments[56] = HAnimSegment943;

let HAnimSegment944 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment944.USE = "hanim_midproximal";
HAnimHumanoid78.segments[57] = HAnimSegment944;

let HAnimSegment945 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment945.USE = "hanim_l5";
HAnimHumanoid78.segments[58] = HAnimSegment945;

let HAnimSegment946 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment946.USE = "hanim_l4";
HAnimHumanoid78.segments[59] = HAnimSegment946;

let HAnimSegment947 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment947.USE = "hanim_l3";
HAnimHumanoid78.segments[60] = HAnimSegment947;

let HAnimSegment948 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment948.USE = "hanim_l2";
HAnimHumanoid78.segments[61] = HAnimSegment948;

let HAnimSegment949 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment949.USE = "hanim_l1";
HAnimHumanoid78.segments[62] = HAnimSegment949;

let HAnimSegment950 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment950.USE = "hanim_t12";
HAnimHumanoid78.segments[63] = HAnimSegment950;

let HAnimSegment951 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment951.USE = "hanim_t11";
HAnimHumanoid78.segments[64] = HAnimSegment951;

let HAnimSegment952 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment952.USE = "hanim_t10";
HAnimHumanoid78.segments[65] = HAnimSegment952;

let HAnimSegment953 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment953.USE = "hanim_t9";
HAnimHumanoid78.segments[66] = HAnimSegment953;

let HAnimSegment954 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment954.USE = "hanim_t8";
HAnimHumanoid78.segments[67] = HAnimSegment954;

let HAnimSegment955 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment955.USE = "hanim_t7";
HAnimHumanoid78.segments[68] = HAnimSegment955;

let HAnimSegment956 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment956.USE = "hanim_t6";
HAnimHumanoid78.segments[69] = HAnimSegment956;

let HAnimSegment957 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment957.USE = "hanim_t5";
HAnimHumanoid78.segments[70] = HAnimSegment957;

let HAnimSegment958 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment958.USE = "hanim_t4";
HAnimHumanoid78.segments[71] = HAnimSegment958;

let HAnimSegment959 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment959.USE = "hanim_t3";
HAnimHumanoid78.segments[72] = HAnimSegment959;

let HAnimSegment960 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment960.USE = "hanim_t2";
HAnimHumanoid78.segments[73] = HAnimSegment960;

let HAnimSegment961 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment961.USE = "hanim_t1";
HAnimHumanoid78.segments[74] = HAnimSegment961;

let HAnimSegment962 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment962.USE = "hanim_c6";
HAnimHumanoid78.segments[75] = HAnimSegment962;

let HAnimSegment963 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment963.USE = "hanim_c5";
HAnimHumanoid78.segments[76] = HAnimSegment963;

let HAnimSegment964 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment964.USE = "hanim_c3";
HAnimHumanoid78.segments[77] = HAnimSegment964;

let HAnimSegment965 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment965.USE = "hanim_c2";
HAnimHumanoid78.segments[78] = HAnimSegment965;

let HAnimSegment966 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment966.USE = "hanim_c1";
HAnimHumanoid78.segments[79] = HAnimSegment966;

let HAnimSegment967 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment967.USE = "hanim_l_calf";
HAnimHumanoid78.segments[80] = HAnimSegment967;

let HAnimSegment968 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment968.USE = "hanim_r_calf";
HAnimHumanoid78.segments[81] = HAnimSegment968;

let HAnimSegment969 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment969.USE = "hanim_l_forearm";
HAnimHumanoid78.segments[82] = HAnimSegment969;

let HAnimSegment970 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment970.USE = "hanim_r_forearm";
HAnimHumanoid78.segments[83] = HAnimSegment970;

let HAnimSegment971 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment971.USE = "hanim_l_forefoot";
HAnimHumanoid78.segments[84] = HAnimSegment971;

let HAnimSegment972 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment972.USE = "hanim_l_hand";
HAnimHumanoid78.segments[85] = HAnimSegment972;

let HAnimSegment973 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment973.USE = "hanim_r_hand";
HAnimHumanoid78.segments[86] = HAnimSegment973;

let HAnimSegment974 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment974.USE = "hanim_l_hindfoot";
HAnimHumanoid78.segments[87] = HAnimSegment974;

let HAnimSegment975 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment975.USE = "hanim_r_hindfoot";
HAnimHumanoid78.segments[88] = HAnimSegment975;

let HAnimSegment976 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment976.USE = "hanim_l_index_distal";
HAnimHumanoid78.segments[89] = HAnimSegment976;

let HAnimSegment977 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment977.USE = "hanim_l_index_metacarpal";
HAnimHumanoid78.segments[90] = HAnimSegment977;

let HAnimSegment978 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment978.USE = "hanim_l_index_middle";
HAnimHumanoid78.segments[91] = HAnimSegment978;

let HAnimSegment979 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment979.USE = "hanim_l_index_proximal";
HAnimHumanoid78.segments[92] = HAnimSegment979;

let HAnimSegment980 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment980.USE = "hanim_l_middistal";
HAnimHumanoid78.segments[93] = HAnimSegment980;

let HAnimSegment981 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment981.USE = "hanim_r_middistal";
HAnimHumanoid78.segments[94] = HAnimSegment981;

let HAnimSegment982 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment982.USE = "hanim_l_thigh";
HAnimHumanoid78.segments[95] = HAnimSegment982;

let HAnimSegment983 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment983.USE = "hanim_r_thigh";
HAnimHumanoid78.segments[96] = HAnimSegment983;

let HAnimSegment984 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment984.USE = "hanim_l_thumb_distal";
HAnimHumanoid78.segments[97] = HAnimSegment984;

let HAnimSegment985 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment985.USE = "hanim_l_thumb_metacarpal";
HAnimHumanoid78.segments[98] = HAnimSegment985;

let HAnimSegment986 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment986.USE = "hanim_l_thumb_proximal";
HAnimHumanoid78.segments[99] = HAnimSegment986;

let HAnimSegment987 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment987.USE = "hanim_l_upperarm";
HAnimHumanoid78.segments[100] = HAnimSegment987;

let HAnimSegment988 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment988.USE = "hanim_r_upperarm";
HAnimHumanoid78.segments[101] = HAnimSegment988;

let HAnimSite989 = browser.currentScene.createNode("HAnimSite");
HAnimSite989.USE = "hanim_crotch_pt";
HAnimHumanoid78.viewpoints[102] = HAnimSite989;

let HAnimSite990 = browser.currentScene.createNode("HAnimSite");
HAnimSite990.USE = "hanim_skull_tip";
HAnimHumanoid78.viewpoints[103] = HAnimSite990;

let HAnimSite991 = browser.currentScene.createNode("HAnimSite");
HAnimSite991.USE = "hanim_sellion_pt";
HAnimHumanoid78.viewpoints[104] = HAnimSite991;

let HAnimSite992 = browser.currentScene.createNode("HAnimSite");
HAnimSite992.USE = "hanim_supramenton_pt";
HAnimHumanoid78.viewpoints[105] = HAnimSite992;

let HAnimSite993 = browser.currentScene.createNode("HAnimSite");
HAnimSite993.USE = "hanim_nuchale_pt";
HAnimHumanoid78.viewpoints[106] = HAnimSite993;

let HAnimSite994 = browser.currentScene.createNode("HAnimSite");
HAnimSite994.USE = "hanim_r_asis_pt";
HAnimHumanoid78.viewpoints[107] = HAnimSite994;

let HAnimSite995 = browser.currentScene.createNode("HAnimSite");
HAnimSite995.USE = "hanim_l_asis_pt";
HAnimHumanoid78.viewpoints[108] = HAnimSite995;

let HAnimSite996 = browser.currentScene.createNode("HAnimSite");
HAnimSite996.USE = "hanim_l_calcaneous_post_pt";
HAnimHumanoid78.viewpoints[109] = HAnimSite996;

let HAnimSite997 = browser.currentScene.createNode("HAnimSite");
HAnimSite997.USE = "hanim_r_calcaneous_post_pt";
HAnimHumanoid78.viewpoints[110] = HAnimSite997;

let HAnimSite998 = browser.currentScene.createNode("HAnimSite");
HAnimSite998.USE = "hanim_l_dactylion_pt";
HAnimHumanoid78.viewpoints[111] = HAnimSite998;

let HAnimSite999 = browser.currentScene.createNode("HAnimSite");
HAnimSite999.USE = "hanim_r_dactylion_pt";
HAnimHumanoid78.viewpoints[112] = HAnimSite999;

let HAnimSite1000 = browser.currentScene.createNode("HAnimSite");
HAnimSite1000.USE = "hanim_l_digit2_pt";
HAnimHumanoid78.viewpoints[113] = HAnimSite1000;

let HAnimSite1001 = browser.currentScene.createNode("HAnimSite");
HAnimSite1001.USE = "hanim_r_digit2_pt";
HAnimHumanoid78.viewpoints[114] = HAnimSite1001;

let HAnimSite1002 = browser.currentScene.createNode("HAnimSite");
HAnimSite1002.USE = "hanim_l_femoral_lateral_epicn_pt";
HAnimHumanoid78.viewpoints[115] = HAnimSite1002;

let HAnimSite1003 = browser.currentScene.createNode("HAnimSite");
HAnimSite1003.USE = "hanim_r_femoral_lateral_epicn_pt";
HAnimHumanoid78.viewpoints[116] = HAnimSite1003;

let HAnimSite1004 = browser.currentScene.createNode("HAnimSite");
HAnimSite1004.USE = "hanim_l_femoral_medial_epicn_pt";
HAnimHumanoid78.viewpoints[117] = HAnimSite1004;

let HAnimSite1005 = browser.currentScene.createNode("HAnimSite");
HAnimSite1005.USE = "hanim_r_femoral_medial_epicn_pt";
HAnimHumanoid78.viewpoints[118] = HAnimSite1005;

let HAnimSite1006 = browser.currentScene.createNode("HAnimSite");
HAnimSite1006.USE = "hanim_l_forefoot_tip";
HAnimHumanoid78.viewpoints[119] = HAnimSite1006;

let HAnimSite1007 = browser.currentScene.createNode("HAnimSite");
HAnimSite1007.USE = "hanim_r_gonion_pt";
HAnimHumanoid78.viewpoints[120] = HAnimSite1007;

let HAnimSite1008 = browser.currentScene.createNode("HAnimSite");
HAnimSite1008.USE = "hanim_l_gonion_pt";
HAnimHumanoid78.viewpoints[121] = HAnimSite1008;

let HAnimSite1009 = browser.currentScene.createNode("HAnimSite");
HAnimSite1009.USE = "hanim_l_hand_tip";
HAnimHumanoid78.viewpoints[122] = HAnimSite1009;

let HAnimSite1010 = browser.currentScene.createNode("HAnimSite");
HAnimSite1010.USE = "hanim_r_hand_tip";
HAnimHumanoid78.viewpoints[123] = HAnimSite1010;

let HAnimSite1011 = browser.currentScene.createNode("HAnimSite");
HAnimSite1011.USE = "hanim_l_humeral_lateral_epicn_pt";
HAnimHumanoid78.viewpoints[124] = HAnimSite1011;

let HAnimSite1012 = browser.currentScene.createNode("HAnimSite");
HAnimSite1012.USE = "hanim_r_humeral_lateral_epicn_pt";
HAnimHumanoid78.viewpoints[125] = HAnimSite1012;

let HAnimSite1013 = browser.currentScene.createNode("HAnimSite");
HAnimSite1013.USE = "hanim_l_humeral_medial_epicn_pt";
HAnimHumanoid78.viewpoints[126] = HAnimSite1013;

let HAnimSite1014 = browser.currentScene.createNode("HAnimSite");
HAnimSite1014.USE = "hanim_r_humeral_medial_epicn_pt";
HAnimHumanoid78.viewpoints[127] = HAnimSite1014;

let HAnimSite1015 = browser.currentScene.createNode("HAnimSite");
HAnimSite1015.USE = "hanim_r_iliocristale_pt";
HAnimHumanoid78.viewpoints[128] = HAnimSite1015;

let HAnimSite1016 = browser.currentScene.createNode("HAnimSite");
HAnimSite1016.USE = "hanim_l_iliocristale_pt";
HAnimHumanoid78.viewpoints[129] = HAnimSite1016;

let HAnimSite1017 = browser.currentScene.createNode("HAnimSite");
HAnimSite1017.USE = "hanim_l_index_distal_tip";
HAnimHumanoid78.viewpoints[130] = HAnimSite1017;

let HAnimSite1018 = browser.currentScene.createNode("HAnimSite");
HAnimSite1018.USE = "hanim_r_infraorbitale_pt";
HAnimHumanoid78.viewpoints[131] = HAnimSite1018;

let HAnimSite1019 = browser.currentScene.createNode("HAnimSite");
HAnimSite1019.USE = "hanim_l_infraorbitale_pt";
HAnimHumanoid78.viewpoints[132] = HAnimSite1019;

let HAnimSite1020 = browser.currentScene.createNode("HAnimSite");
HAnimSite1020.USE = "hanim_l_knee_crease_pt";
HAnimHumanoid78.viewpoints[133] = HAnimSite1020;

let HAnimSite1021 = browser.currentScene.createNode("HAnimSite");
HAnimSite1021.USE = "hanim_r_knee_crease_pt";
HAnimHumanoid78.viewpoints[134] = HAnimSite1021;

let HAnimSite1022 = browser.currentScene.createNode("HAnimSite");
HAnimSite1022.USE = "hanim_l_lateral_malleolus_pt";
HAnimHumanoid78.viewpoints[135] = HAnimSite1022;

let HAnimSite1023 = browser.currentScene.createNode("HAnimSite");
HAnimSite1023.USE = "hanim_r_lateral_malleolus_pt";
HAnimHumanoid78.viewpoints[136] = HAnimSite1023;

let HAnimSite1024 = browser.currentScene.createNode("HAnimSite");
HAnimSite1024.USE = "hanim_l_medial_malleolus_pt";
HAnimHumanoid78.viewpoints[137] = HAnimSite1024;

let HAnimSite1025 = browser.currentScene.createNode("HAnimSite");
HAnimSite1025.USE = "hanim_r_medial_malleolus_pt";
HAnimHumanoid78.viewpoints[138] = HAnimSite1025;

let HAnimSite1026 = browser.currentScene.createNode("HAnimSite");
HAnimSite1026.USE = "hanim_l_metacarpal_pha2_pt";
HAnimHumanoid78.viewpoints[139] = HAnimSite1026;

let HAnimSite1027 = browser.currentScene.createNode("HAnimSite");
HAnimSite1027.USE = "hanim_r_metacarpal_pha2_pt";
HAnimHumanoid78.viewpoints[140] = HAnimSite1027;

let HAnimSite1028 = browser.currentScene.createNode("HAnimSite");
HAnimSite1028.USE = "hanim_l_metacarpal_pha5_pt";
HAnimHumanoid78.viewpoints[141] = HAnimSite1028;

let HAnimSite1029 = browser.currentScene.createNode("HAnimSite");
HAnimSite1029.USE = "hanim_r_metacarpal_pha5_pt";
HAnimHumanoid78.viewpoints[142] = HAnimSite1029;

let HAnimSite1030 = browser.currentScene.createNode("HAnimSite");
HAnimSite1030.USE = "hanim_l_metatarsal_pha1_pt";
HAnimHumanoid78.viewpoints[143] = HAnimSite1030;

let HAnimSite1031 = browser.currentScene.createNode("HAnimSite");
HAnimSite1031.USE = "hanim_r_metatarsal_pha1_pt";
HAnimHumanoid78.viewpoints[144] = HAnimSite1031;

let HAnimSite1032 = browser.currentScene.createNode("HAnimSite");
HAnimSite1032.USE = "hanim_l_metatarsal_pha5_pt";
HAnimHumanoid78.viewpoints[145] = HAnimSite1032;

let HAnimSite1033 = browser.currentScene.createNode("HAnimSite");
HAnimSite1033.USE = "hanim_r_metatarsal_pha5_pt";
HAnimHumanoid78.viewpoints[146] = HAnimSite1033;

let HAnimSite1034 = browser.currentScene.createNode("HAnimSite");
HAnimSite1034.USE = "hanim_l_middistal_tip";
HAnimHumanoid78.viewpoints[147] = HAnimSite1034;

let HAnimSite1035 = browser.currentScene.createNode("HAnimSite");
HAnimSite1035.USE = "hanim_r_middistal_tip";
HAnimHumanoid78.viewpoints[148] = HAnimSite1035;

let HAnimSite1036 = browser.currentScene.createNode("HAnimSite");
HAnimSite1036.USE = "hanim_l_olecranon_pt";
HAnimHumanoid78.viewpoints[149] = HAnimSite1036;

let HAnimSite1037 = browser.currentScene.createNode("HAnimSite");
HAnimSite1037.USE = "hanim_r_olecranon_pt";
HAnimHumanoid78.viewpoints[150] = HAnimSite1037;

let HAnimSite1038 = browser.currentScene.createNode("HAnimSite");
HAnimSite1038.USE = "hanim_r_psis_pt";
HAnimHumanoid78.viewpoints[151] = HAnimSite1038;

let HAnimSite1039 = browser.currentScene.createNode("HAnimSite");
HAnimSite1039.USE = "hanim_l_psis_pt";
HAnimHumanoid78.viewpoints[152] = HAnimSite1039;

let HAnimSite1040 = browser.currentScene.createNode("HAnimSite");
HAnimSite1040.USE = "hanim_l_radial_styloid_pt";
HAnimHumanoid78.viewpoints[153] = HAnimSite1040;

let HAnimSite1041 = browser.currentScene.createNode("HAnimSite");
HAnimSite1041.USE = "hanim_r_radial_styloid_pt";
HAnimHumanoid78.viewpoints[154] = HAnimSite1041;

let HAnimSite1042 = browser.currentScene.createNode("HAnimSite");
HAnimSite1042.USE = "hanim_l_radiale_pt";
HAnimHumanoid78.viewpoints[155] = HAnimSite1042;

let HAnimSite1043 = browser.currentScene.createNode("HAnimSite");
HAnimSite1043.USE = "hanim_r_radiale_pt";
HAnimHumanoid78.viewpoints[156] = HAnimSite1043;

let HAnimSite1044 = browser.currentScene.createNode("HAnimSite");
HAnimSite1044.USE = "hanim_l_sphyrion_pt";
HAnimHumanoid78.viewpoints[157] = HAnimSite1044;

let HAnimSite1045 = browser.currentScene.createNode("HAnimSite");
HAnimSite1045.USE = "hanim_r_sphyrion_pt";
HAnimHumanoid78.viewpoints[158] = HAnimSite1045;

let HAnimSite1046 = browser.currentScene.createNode("HAnimSite");
HAnimSite1046.USE = "hanim_l_thumb_distal_tip";
HAnimHumanoid78.viewpoints[159] = HAnimSite1046;

let HAnimSite1047 = browser.currentScene.createNode("HAnimSite");
HAnimSite1047.USE = "hanim_r_tragion_pt";
HAnimHumanoid78.viewpoints[160] = HAnimSite1047;

let HAnimSite1048 = browser.currentScene.createNode("HAnimSite");
HAnimSite1048.USE = "hanim_l_tragion_pt";
HAnimHumanoid78.viewpoints[161] = HAnimSite1048;

let HAnimSite1049 = browser.currentScene.createNode("HAnimSite");
HAnimSite1049.USE = "hanim_r_trochanterion_pt";
HAnimHumanoid78.viewpoints[162] = HAnimSite1049;

let HAnimSite1050 = browser.currentScene.createNode("HAnimSite");
HAnimSite1050.USE = "hanim_l_trochanterion_pt";
HAnimHumanoid78.viewpoints[163] = HAnimSite1050;

let HAnimSite1051 = browser.currentScene.createNode("HAnimSite");
HAnimSite1051.USE = "hanim_l_ulnar_styloid_pt";
HAnimHumanoid78.viewpoints[164] = HAnimSite1051;

let HAnimSite1052 = browser.currentScene.createNode("HAnimSite");
HAnimSite1052.USE = "hanim_r_ulnar_styloid_pt";
HAnimHumanoid78.viewpoints[165] = HAnimSite1052;

browser.currentScene.children[4] = HAnimHumanoid78;

