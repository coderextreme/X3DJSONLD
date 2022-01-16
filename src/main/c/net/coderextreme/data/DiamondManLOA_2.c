#include "/c/x3d-code/www.web3d.org/x3d/languages/c/X3DLib/X3DLib.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Immersive";
X3D0.version = "3.3";
head head1 = createNode("head");
component component2 = createNode("component");
component2.name = "H-Anim";
component2.level = 1;
head1.component = new MFNode();

head1.component[0] = component2;

meta meta3 = createNode("meta");
meta3.name = "title";
meta3.content = "DiamondManLOA_2.x3d";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "description";
meta4.content = "hanim skeletal structure at level of articulation two, one diamond at the base node for the structure";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "creator";
meta5.content = "Matthew T. Beitler";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "translator";
meta6.content = "Joel S. Pawloski";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "created";
meta7.content = "12 November 2001";
head1.meta[5] = meta7;

meta meta8 = createNode("meta");
meta8.name = "modified";
meta8.content = "23 December 2021";
head1.meta[6] = meta8;

meta meta9 = createNode("meta");
meta9.name = "Image";
meta9.content = "DiamondManLOA_2.png";
head1.meta[7] = meta9;

meta meta10 = createNode("meta");
meta10.name = "Image";
meta10.content = "images/BonesAllSkeletonFrontViewLOA2.png";
head1.meta[8] = meta10;

meta meta11 = createNode("meta");
meta11.name = "motto";
meta11.content = "(a) \"Diamonds are a girl's best friend.\" (b) \"Gosh, it sure is chilly in here.\"";
head1.meta[9] = meta11;

meta meta12 = createNode("meta");
meta12.name = "reference";
meta12.content = "The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps";
head1.meta[10] = meta12;

meta meta13 = createNode("meta");
meta13.name = "subject";
meta13.content = "human animation, x3d, vrml, animation";
head1.meta[11] = meta13;

meta meta14 = createNode("meta");
meta14.name = "identifier";
meta14.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Templates/DiamondManLOA_2.x3d";
head1.meta[12] = meta14;

meta meta15 = createNode("meta");
meta15.name = "generator";
meta15.content = "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit";
head1.meta[13] = meta15;

meta meta16 = createNode("meta");
meta16.name = "license";
meta16.content = "../license.html";
head1.meta[14] = meta16;

head = head1;

WorldInfo WorldInfo18 = createNode("WorldInfo");
WorldInfo18.info = new MFString(new java.lang.String["HAnim 2.0 Default Joint Centers, Level Of Articulation (LOA) 2 -------------------------------------------------------- HANIM 1.1 (VRML 2.0) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 1.1 (VRML 2.0) Author email: beitler@graphics.cis.upenn.edu or beitler@acm.org HANIM 1.1 (VRML 2.0) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 1.1 (VRML 2.0) Compliance Date: May 12, 1999 HANIM 1.1 Compliance Information: http://ece.uwaterloo.ca/~HAnim/ Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps, .pdf"]);
WorldInfo18.title = "HANIM 1.1 Default Joint Centers, LOA1";
children = new MFNode();

children[0] = WorldInfo18;

NavigationInfo NavigationInfo19 = createNode("NavigationInfo");
NavigationInfo19.speed = 1.5;
children[1] = NavigationInfo19;

Viewpoint Viewpoint20 = createNode("Viewpoint");
Viewpoint20.centerOfRotation = new SFVec3f(new float[0,1,0]);
Viewpoint20.description = "Diamond Man, LOA 2";
Viewpoint20.position = new SFVec3f(new float[0,1,3]);
children[2] = Viewpoint20;

Transform Transform21 = createNode("Transform");
Transform21.translation = new SFVec3f(new float[1,1.5,0]);
Billboard Billboard22 = createNode("Billboard");
Shape Shape23 = createNode("Shape");
Text Text24 = createNode("Text");
Text24.string = new MFString(new java.lang.String["Diamond Man Key"]);
FontStyle FontStyle25 = createNode("FontStyle");
FontStyle25.family = new MFString(new java.lang.String["SANS"]);
FontStyle25.size = 0.1;
Text24.fontStyle = FontStyle25;

Shape23.geometry = Text24;

Appearance Appearance26 = createNode("Appearance");
Material Material27 = createNode("Material");
Material27.DEF = "TextMaterial";
Material27.diffuseColor = new SFColor(new float[0.9,0.9,0.9]);
Appearance26.material = Material27;

Shape23.appearance = Appearance26;

Billboard22.children = new MFNode();

Billboard22.children[0] = Shape23;

Transform Transform28 = createNode("Transform");
Transform28.translation = new SFVec3f(new float[0,-0.3,0]);
Shape Shape29 = createNode("Shape");
Sphere Sphere30 = createNode("Sphere");
Sphere30.radius = 0.08;
Shape29.geometry = Sphere30;

Appearance Appearance31 = createNode("Appearance");
Material Material32 = createNode("Material");
Material32.DEF = "MIN_COLOR";
Material32.diffuseColor = new SFColor(new float[1,0,0]);
Appearance31.material = Material32;

Shape29.appearance = Appearance31;

Transform28.children = new MFNode();

Transform28.children[0] = Shape29;

Transform Transform33 = createNode("Transform");
Transform33.translation = new SFVec3f(new float[0.2,0,0]);
Shape Shape34 = createNode("Shape");
Text Text35 = createNode("Text");
Text35.string = new MFString(new java.lang.String["Minimal Humanoid Joints"]);
FontStyle FontStyle36 = createNode("FontStyle");
FontStyle36.family = new MFString(new java.lang.String["SANS"]);
FontStyle36.size = 0.1;
Text35.fontStyle = FontStyle36;

Shape34.geometry = Text35;

Appearance Appearance37 = createNode("Appearance");
Material Material38 = createNode("Material");
Material38.USE = "TextMaterial";
Appearance37.material = Material38;

Shape34.appearance = Appearance37;

Transform33.children = new MFNode();

Transform33.children[0] = Shape34;

Transform28.children[1] = Transform33;

Billboard22.children[1] = Transform28;

Transform Transform39 = createNode("Transform");
Transform39.translation = new SFVec3f(new float[0,-0.5,0]);
Shape Shape40 = createNode("Shape");
Sphere Sphere41 = createNode("Sphere");
Sphere41.radius = 0.08;
Shape40.geometry = Sphere41;

Appearance Appearance42 = createNode("Appearance");
Material Material43 = createNode("Material");
Material43.DEF = "JOINT_COLOR";
Material43.diffuseColor = new SFColor(new float[1,1,0]);
Appearance42.material = Material43;

Shape40.appearance = Appearance42;

Transform39.children = new MFNode();

Transform39.children[0] = Shape40;

Transform Transform44 = createNode("Transform");
Transform44.translation = new SFVec3f(new float[0.2,0,0]);
Shape Shape45 = createNode("Shape");
Text Text46 = createNode("Text");
Text46.string = new MFString(new java.lang.String["Humanoid Joints"]);
FontStyle FontStyle47 = createNode("FontStyle");
FontStyle47.family = new MFString(new java.lang.String["SANS"]);
FontStyle47.size = 0.1;
Text46.fontStyle = FontStyle47;

Shape45.geometry = Text46;

Appearance Appearance48 = createNode("Appearance");
Material Material49 = createNode("Material");
Material49.USE = "TextMaterial";
Appearance48.material = Material49;

Shape45.appearance = Appearance48;

Transform44.children = new MFNode();

Transform44.children[0] = Shape45;

Transform39.children[1] = Transform44;

Billboard22.children[2] = Transform39;

Transform Transform50 = createNode("Transform");
Transform50.translation = new SFVec3f(new float[0,-0.7,0]);
Shape Shape51 = createNode("Shape");
Sphere Sphere52 = createNode("Sphere");
Sphere52.radius = 0.08;
Shape51.geometry = Sphere52;

Appearance Appearance53 = createNode("Appearance");
Material Material54 = createNode("Material");
Material54.DEF = "REC_SPINAL_COLOR";
Material54.diffuseColor = new SFColor(new float[1,0,1]);
Appearance53.material = Material54;

Shape51.appearance = Appearance53;

Transform50.children = new MFNode();

Transform50.children[0] = Shape51;

Transform Transform55 = createNode("Transform");
Transform55.translation = new SFVec3f(new float[0.2,0,0]);
Shape Shape56 = createNode("Shape");
Text Text57 = createNode("Text");
Text57.string = new MFString(new java.lang.String["Recommended Spinal Joints"]);
FontStyle FontStyle58 = createNode("FontStyle");
FontStyle58.family = new MFString(new java.lang.String["SANS"]);
FontStyle58.size = 0.1;
Text57.fontStyle = FontStyle58;

Shape56.geometry = Text57;

Appearance Appearance59 = createNode("Appearance");
Material Material60 = createNode("Material");
Material60.USE = "TextMaterial";
Appearance59.material = Material60;

Shape56.appearance = Appearance59;

Transform55.children = new MFNode();

Transform55.children[0] = Shape56;

Transform50.children[1] = Transform55;

Billboard22.children[3] = Transform50;

Transform Transform61 = createNode("Transform");
Transform61.translation = new SFVec3f(new float[0,-0.9,0]);
Shape Shape62 = createNode("Shape");
Sphere Sphere63 = createNode("Sphere");
Sphere63.radius = 0.08;
Shape62.geometry = Sphere63;

Appearance Appearance64 = createNode("Appearance");
Material Material65 = createNode("Material");
Material65.DEF = "SPINAL_COLOR";
Material65.diffuseColor = new SFColor(new float[0,1,0]);
Appearance64.material = Material65;

Shape62.appearance = Appearance64;

Transform61.children = new MFNode();

Transform61.children[0] = Shape62;

Transform Transform66 = createNode("Transform");
Transform66.translation = new SFVec3f(new float[0.2,0,0]);
Shape Shape67 = createNode("Shape");
Text Text68 = createNode("Text");
Text68.string = new MFString(new java.lang.String["Spinal Joints"]);
FontStyle FontStyle69 = createNode("FontStyle");
FontStyle69.family = new MFString(new java.lang.String["SANS"]);
FontStyle69.size = 0.1;
Text68.fontStyle = FontStyle69;

Shape67.geometry = Text68;

Appearance Appearance70 = createNode("Appearance");
Material Material71 = createNode("Material");
Material71.USE = "TextMaterial";
Appearance70.material = Material71;

Shape67.appearance = Appearance70;

Transform66.children = new MFNode();

Transform66.children[0] = Shape67;

Transform61.children[1] = Transform66;

Billboard22.children[4] = Transform61;

Transform Transform72 = createNode("Transform");
Transform72.translation = new SFVec3f(new float[0,-1.3,0]);
Shape Shape73 = createNode("Shape");
Sphere Sphere74 = createNode("Sphere");
Sphere74.radius = 0.08;
Shape73.geometry = Sphere74;

Appearance Appearance75 = createNode("Appearance");
Material Material76 = createNode("Material");
Material76.DEF = "SITE_COLOR";
Material76.diffuseColor = new SFColor(new float[0,0,1]);
Appearance75.material = Material76;

Shape73.appearance = Appearance75;

Transform72.children = new MFNode();

Transform72.children[0] = Shape73;

Transform Transform77 = createNode("Transform");
Transform77.translation = new SFVec3f(new float[0.2,0,0]);
Shape Shape78 = createNode("Shape");
Text Text79 = createNode("Text");
Text79.string = new MFString(new java.lang.String["Humanoid Sites"]);
FontStyle FontStyle80 = createNode("FontStyle");
FontStyle80.family = new MFString(new java.lang.String["SANS"]);
FontStyle80.size = 0.1;
Text79.fontStyle = FontStyle80;

Shape78.geometry = Text79;

Appearance Appearance81 = createNode("Appearance");
Material Material82 = createNode("Material");
Material82.USE = "TextMaterial";
Appearance81.material = Material82;

Shape78.appearance = Appearance81;

Transform77.children = new MFNode();

Transform77.children[0] = Shape78;

Transform72.children[1] = Transform77;

Billboard22.children[5] = Transform72;

Transform Transform83 = createNode("Transform");
Transform83.translation = new SFVec3f(new float[0,-1.1,0]);
Shape Shape84 = createNode("Shape");
Sphere Sphere85 = createNode("Sphere");
Sphere85.radius = 0.08;
Shape84.geometry = Sphere85;

Appearance Appearance86 = createNode("Appearance");
Material Material87 = createNode("Material");
Material87.DEF = "HAND_FEET_COLOR";
Material87.diffuseColor = new SFColor(new float[0,1,1]);
Appearance86.material = Material87;

Shape84.appearance = Appearance86;

Transform83.children = new MFNode();

Transform83.children[0] = Shape84;

Transform Transform88 = createNode("Transform");
Transform88.translation = new SFVec3f(new float[0.2,0,0]);
Shape Shape89 = createNode("Shape");
Text Text90 = createNode("Text");
Text90.string = new MFString(new java.lang.String["Hand & Feet Joints"]);
FontStyle FontStyle91 = createNode("FontStyle");
FontStyle91.family = new MFString(new java.lang.String["SANS"]);
FontStyle91.size = 0.1;
Text90.fontStyle = FontStyle91;

Shape89.geometry = Text90;

Appearance Appearance92 = createNode("Appearance");
Material Material93 = createNode("Material");
Material93.USE = "TextMaterial";
Appearance92.material = Material93;

Shape89.appearance = Appearance92;

Transform88.children = new MFNode();

Transform88.children[0] = Shape89;

Transform83.children[1] = Transform88;

Billboard22.children[6] = Transform83;

Transform21.children = new MFNode();

Transform21.children[0] = Billboard22;

children[3] = Transform21;

HAnimHumanoid HAnimHumanoid94 = createNode("HAnimHumanoid");
HAnimHumanoid94.name = "humanoid";
HAnimHumanoid94.DEF = "hanim_humanoid";
HAnimHumanoid94.version = "1.0";
//original HAnimHumanoid info='\"humanoidVersion=Nancy V1.2b\" \"authorName=Cindy Ballreich\" \"authorEmail=cindy@ballreich.net\" \"copyright=1997 3Name3D / Yglesias Wallock Divekar Inc. all rights reserved.\" \"creationDate=Tue Dec 30 08:30:08 PST 1997\" \"usageRestrictions=Noncommercial usage is ok if 3Name3D name and logo <www.ballreich.net/vrml/HAnim/small_logo.gif> is present and proper credit is given.\"'
MetadataSet MetadataSet95 = createNode("MetadataSet");
MetadataSet95.name = "HAnimHumanoid.info";
MetadataSet95.reference = "https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid";
MetadataString MetadataString96 = createNode("MetadataString");
MetadataString96.name = "humanoidVersion";
MetadataString96.value = new MFString(new java.lang.String["Nancy V1.2b"]);
MetadataSet95.value = new MFNode();

MetadataSet95.value[0] = MetadataString96;

MetadataString MetadataString97 = createNode("MetadataString");
MetadataString97.name = "authorEmail";
MetadataString97.value = new MFString(new java.lang.String["cindy@ballreich.net"]);
MetadataSet95.value[1] = MetadataString97;

MetadataString MetadataString98 = createNode("MetadataString");
MetadataString98.name = "authorName";
MetadataString98.value = new MFString(new java.lang.String["Cindy Ballreich"]);
MetadataSet95.value[2] = MetadataString98;

MetadataString MetadataString99 = createNode("MetadataString");
MetadataString99.name = "copyright";
MetadataString99.value = new MFString(new java.lang.String["1997 3Name3D / Yglesias Wallock Divekar Inc. all rights reserved."]);
MetadataSet95.value[3] = MetadataString99;

MetadataString MetadataString100 = createNode("MetadataString");
MetadataString100.name = "creationDate";
MetadataString100.value = new MFString(new java.lang.String["Tue Dec 30 08:30:08 PST 1997"]);
MetadataSet95.value[4] = MetadataString100;

MetadataString MetadataString101 = createNode("MetadataString");
MetadataString101.name = "usageRestrictions";
MetadataString101.value = new MFString(new java.lang.String["Noncommercial usage is ok if 3Name3D name and logo <www.ballreich.net/vrml/HAnim/small_logo.gif> is present and proper credit is given."]);
MetadataSet95.value[5] = MetadataString101;

HAnimHumanoid94.metadata = MetadataSet95;

HAnimJoint HAnimJoint102 = createNode("HAnimJoint");
HAnimJoint102.name = "HumanoidRoot";
HAnimJoint102.DEF = "hanim_HumanoidRoot";
HAnimJoint102.center = new SFVec3f(new float[0,0.824,0.0277]);
HAnimJoint102.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint102.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment103 = createNode("HAnimSegment");
HAnimSegment103.name = "sacrum";
HAnimSegment103.DEF = "hanim_sacrum";
Transform Transform104 = createNode("Transform");
Transform104.translation = new SFVec3f(new float[0,0.824,0.0277]);
Shape Shape105 = createNode("Shape");
Shape105.DEF = "DiamondShape";
IndexedFaceSet IndexedFaceSet106 = createNode("IndexedFaceSet");
IndexedFaceSet106.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet106.creaseAngle = 0.5;
Coordinate Coordinate107 = createNode("Coordinate");
Coordinate107.DEF = "points";
Coordinate107.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet106.coord = Coordinate107;

Shape105.geometry = IndexedFaceSet106;

Appearance Appearance108 = createNode("Appearance");
Material Material109 = createNode("Material");
Material109.DEF = "ROOT_COLOR";
Material109.diffuseColor = new SFColor(new float[1,1,1]);
Appearance108.material = Material109;

Shape105.appearance = Appearance108;

Transform104.children = new MFNode();

Transform104.children[0] = Shape105;

Transform Transform110 = createNode("Transform");
Transform110.translation = new SFVec3f(new float[0,0.01,0]);
Billboard Billboard111 = createNode("Billboard");
Shape Shape112 = createNode("Shape");
Text Text113 = createNode("Text");
Text113.string = new MFString(new java.lang.String["Humanoid Root"]);
FontStyle FontStyle114 = createNode("FontStyle");
FontStyle114.family = new MFString(new java.lang.String["SANS"]);
FontStyle114.size = 0.01;
FontStyle114.style = "ITALIC";
Text113.fontStyle = FontStyle114;

Shape112.geometry = Text113;

Appearance Appearance115 = createNode("Appearance");
Material Material116 = createNode("Material");
Material116.diffuseColor = new SFColor(new float[0.039216,1,0.568627]);
Appearance115.material = Material116;

Shape112.appearance = Appearance115;

Billboard111.children = new MFNode();

Billboard111.children[0] = Shape112;

Transform110.children = new MFNode();

Transform110.children[0] = Billboard111;

Transform104.children[1] = Transform110;

HAnimSegment103.children = new MFNode();

HAnimSegment103.children[0] = Transform104;

HAnimJoint102.children = new MFNode();

HAnimJoint102.children[0] = HAnimSegment103;

HAnimJoint HAnimJoint117 = createNode("HAnimJoint");
HAnimJoint117.name = "sacroiliac";
HAnimJoint117.DEF = "hanim_sacroiliac";
HAnimJoint117.center = new SFVec3f(new float[0,0.9149,0.0016]);
HAnimJoint117.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint117.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment118 = createNode("HAnimSegment");
HAnimSegment118.name = "pelvis";
HAnimSegment118.DEF = "hanim_pelvis";
Transform Transform119 = createNode("Transform");
Transform119.DEF = "sacroiliacPos";
Transform119.translation = new SFVec3f(new float[0,0.9149,0.0016]);
Shape Shape120 = createNode("Shape");
IndexedFaceSet IndexedFaceSet121 = createNode("IndexedFaceSet");
IndexedFaceSet121.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet121.creaseAngle = 0.5;
Coordinate Coordinate122 = createNode("Coordinate");
Coordinate122.USE = "points";
IndexedFaceSet121.coord = Coordinate122;

Shape120.geometry = IndexedFaceSet121;

Appearance Appearance123 = createNode("Appearance");
Material Material124 = createNode("Material");
Material124.USE = "MIN_COLOR";
Appearance123.material = Material124;

Shape120.appearance = Appearance123;

Transform119.children = new MFNode();

Transform119.children[0] = Shape120;

HAnimSegment118.children = new MFNode();

HAnimSegment118.children[0] = Transform119;

HAnimSite HAnimSite125 = createNode("HAnimSite");
HAnimSite125.name = "r_iliocristale_pt";
HAnimSite125.DEF = "hanim_r_iliocristale_pt";
HAnimSite125.translation = new SFVec3f(new float[-0.1525,1.0628,0.0035]);
Shape Shape126 = createNode("Shape");
IndexedFaceSet IndexedFaceSet127 = createNode("IndexedFaceSet");
IndexedFaceSet127.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet127.creaseAngle = 0.5;
Coordinate Coordinate128 = createNode("Coordinate");
Coordinate128.USE = "points";
IndexedFaceSet127.coord = Coordinate128;

Shape126.geometry = IndexedFaceSet127;

Appearance Appearance129 = createNode("Appearance");
Material Material130 = createNode("Material");
Material130.USE = "SITE_COLOR";
Appearance129.material = Material130;

Shape126.appearance = Appearance129;

HAnimSite125.children = new MFNode();

HAnimSite125.children[0] = Shape126;

HAnimSegment118.children[1] = HAnimSite125;

HAnimSite HAnimSite131 = createNode("HAnimSite");
HAnimSite131.name = "r_trochanterion_pt";
HAnimSite131.DEF = "hanim_r_trochanterion_pt";
HAnimSite131.translation = new SFVec3f(new float[-0.1689,0.8419,0.0352]);
Shape Shape132 = createNode("Shape");
IndexedFaceSet IndexedFaceSet133 = createNode("IndexedFaceSet");
IndexedFaceSet133.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet133.creaseAngle = 0.5;
Coordinate Coordinate134 = createNode("Coordinate");
Coordinate134.USE = "points";
IndexedFaceSet133.coord = Coordinate134;

Shape132.geometry = IndexedFaceSet133;

Appearance Appearance135 = createNode("Appearance");
Material Material136 = createNode("Material");
Material136.USE = "SITE_COLOR";
Appearance135.material = Material136;

Shape132.appearance = Appearance135;

HAnimSite131.children = new MFNode();

HAnimSite131.children[0] = Shape132;

HAnimSegment118.children[2] = HAnimSite131;

HAnimSite HAnimSite137 = createNode("HAnimSite");
HAnimSite137.name = "l_iliocristale_pt";
HAnimSite137.DEF = "hanim_l_iliocristale_pt";
HAnimSite137.translation = new SFVec3f(new float[0.1612,1.0537,0.0008]);
Shape Shape138 = createNode("Shape");
IndexedFaceSet IndexedFaceSet139 = createNode("IndexedFaceSet");
IndexedFaceSet139.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet139.creaseAngle = 0.5;
Coordinate Coordinate140 = createNode("Coordinate");
Coordinate140.USE = "points";
IndexedFaceSet139.coord = Coordinate140;

Shape138.geometry = IndexedFaceSet139;

Appearance Appearance141 = createNode("Appearance");
Material Material142 = createNode("Material");
Material142.USE = "SITE_COLOR";
Appearance141.material = Material142;

Shape138.appearance = Appearance141;

HAnimSite137.children = new MFNode();

HAnimSite137.children[0] = Shape138;

HAnimSegment118.children[3] = HAnimSite137;

HAnimSite HAnimSite143 = createNode("HAnimSite");
HAnimSite143.name = "l_trochanterion_pt";
HAnimSite143.DEF = "hanim_l_trochanterion_pt";
HAnimSite143.translation = new SFVec3f(new float[0.1677,0.8336,0.0303]);
Shape Shape144 = createNode("Shape");
IndexedFaceSet IndexedFaceSet145 = createNode("IndexedFaceSet");
IndexedFaceSet145.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet145.creaseAngle = 0.5;
Coordinate Coordinate146 = createNode("Coordinate");
Coordinate146.USE = "points";
IndexedFaceSet145.coord = Coordinate146;

Shape144.geometry = IndexedFaceSet145;

Appearance Appearance147 = createNode("Appearance");
Material Material148 = createNode("Material");
Material148.USE = "SITE_COLOR";
Appearance147.material = Material148;

Shape144.appearance = Appearance147;

HAnimSite143.children = new MFNode();

HAnimSite143.children[0] = Shape144;

HAnimSegment118.children[4] = HAnimSite143;

HAnimSite HAnimSite149 = createNode("HAnimSite");
HAnimSite149.name = "r_asis_pt";
HAnimSite149.DEF = "hanim_r_asis_pt";
HAnimSite149.translation = new SFVec3f(new float[-0.0887,1.0021,0.1112]);
Shape Shape150 = createNode("Shape");
IndexedFaceSet IndexedFaceSet151 = createNode("IndexedFaceSet");
IndexedFaceSet151.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet151.creaseAngle = 0.5;
Coordinate Coordinate152 = createNode("Coordinate");
Coordinate152.USE = "points";
IndexedFaceSet151.coord = Coordinate152;

Shape150.geometry = IndexedFaceSet151;

Appearance Appearance153 = createNode("Appearance");
Material Material154 = createNode("Material");
Material154.USE = "SITE_COLOR";
Appearance153.material = Material154;

Shape150.appearance = Appearance153;

HAnimSite149.children = new MFNode();

HAnimSite149.children[0] = Shape150;

HAnimSegment118.children[5] = HAnimSite149;

HAnimSite HAnimSite155 = createNode("HAnimSite");
HAnimSite155.name = "l_asis_pt";
HAnimSite155.DEF = "hanim_l_asis_pt";
HAnimSite155.translation = new SFVec3f(new float[0.0925,0.9983,0.1052]);
Shape Shape156 = createNode("Shape");
IndexedFaceSet IndexedFaceSet157 = createNode("IndexedFaceSet");
IndexedFaceSet157.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet157.creaseAngle = 0.5;
Coordinate Coordinate158 = createNode("Coordinate");
Coordinate158.USE = "points";
IndexedFaceSet157.coord = Coordinate158;

Shape156.geometry = IndexedFaceSet157;

Appearance Appearance159 = createNode("Appearance");
Material Material160 = createNode("Material");
Material160.USE = "SITE_COLOR";
Appearance159.material = Material160;

Shape156.appearance = Appearance159;

HAnimSite155.children = new MFNode();

HAnimSite155.children[0] = Shape156;

HAnimSegment118.children[6] = HAnimSite155;

HAnimSite HAnimSite161 = createNode("HAnimSite");
HAnimSite161.name = "r_psis_pt";
HAnimSite161.DEF = "hanim_r_psis_pt";
HAnimSite161.translation = new SFVec3f(new float[-0.0716,1.019,-0.1138]);
Shape Shape162 = createNode("Shape");
IndexedFaceSet IndexedFaceSet163 = createNode("IndexedFaceSet");
IndexedFaceSet163.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet163.creaseAngle = 0.5;
Coordinate Coordinate164 = createNode("Coordinate");
Coordinate164.USE = "points";
IndexedFaceSet163.coord = Coordinate164;

Shape162.geometry = IndexedFaceSet163;

Appearance Appearance165 = createNode("Appearance");
Material Material166 = createNode("Material");
Material166.USE = "SITE_COLOR";
Appearance165.material = Material166;

Shape162.appearance = Appearance165;

HAnimSite161.children = new MFNode();

HAnimSite161.children[0] = Shape162;

HAnimSegment118.children[7] = HAnimSite161;

HAnimSite HAnimSite167 = createNode("HAnimSite");
HAnimSite167.name = "l_psis_pt";
HAnimSite167.DEF = "hanim_l_psis_pt";
HAnimSite167.translation = new SFVec3f(new float[0.0774,1.019,-0.1151]);
Shape Shape168 = createNode("Shape");
IndexedFaceSet IndexedFaceSet169 = createNode("IndexedFaceSet");
IndexedFaceSet169.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet169.creaseAngle = 0.5;
Coordinate Coordinate170 = createNode("Coordinate");
Coordinate170.USE = "points";
IndexedFaceSet169.coord = Coordinate170;

Shape168.geometry = IndexedFaceSet169;

Appearance Appearance171 = createNode("Appearance");
Material Material172 = createNode("Material");
Material172.USE = "SITE_COLOR";
Appearance171.material = Material172;

Shape168.appearance = Appearance171;

HAnimSite167.children = new MFNode();

HAnimSite167.children[0] = Shape168;

HAnimSegment118.children[8] = HAnimSite167;

HAnimSite HAnimSite173 = createNode("HAnimSite");
HAnimSite173.name = "crotch_pt";
HAnimSite173.DEF = "hanim_crotch_pt";
HAnimSite173.translation = new SFVec3f(new float[0.0034,0.8266,0.0257]);
Shape Shape174 = createNode("Shape");
IndexedFaceSet IndexedFaceSet175 = createNode("IndexedFaceSet");
IndexedFaceSet175.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet175.creaseAngle = 0.5;
Coordinate Coordinate176 = createNode("Coordinate");
Coordinate176.USE = "points";
IndexedFaceSet175.coord = Coordinate176;

Shape174.geometry = IndexedFaceSet175;

Appearance Appearance177 = createNode("Appearance");
Material Material178 = createNode("Material");
Material178.USE = "SITE_COLOR";
Appearance177.material = Material178;

Shape174.appearance = Appearance177;

HAnimSite173.children = new MFNode();

HAnimSite173.children[0] = Shape174;

HAnimSegment118.children[9] = HAnimSite173;

HAnimJoint117.children = new MFNode();

HAnimJoint117.children[0] = HAnimSegment118;

HAnimJoint HAnimJoint179 = createNode("HAnimJoint");
HAnimJoint179.name = "l_hip";
HAnimJoint179.DEF = "hanim_l_hip";
HAnimJoint179.center = new SFVec3f(new float[0.0961,0.9124,-0.0001]);
HAnimJoint179.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint179.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment180 = createNode("HAnimSegment");
HAnimSegment180.name = "l_thigh";
HAnimSegment180.DEF = "hanim_l_thigh";
Transform Transform181 = createNode("Transform");
Transform181.translation = new SFVec3f(new float[0.0961,0.9124,-0.0001]);
Shape Shape182 = createNode("Shape");
IndexedFaceSet IndexedFaceSet183 = createNode("IndexedFaceSet");
IndexedFaceSet183.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet183.creaseAngle = 0.5;
Coordinate Coordinate184 = createNode("Coordinate");
Coordinate184.USE = "points";
IndexedFaceSet183.coord = Coordinate184;

Shape182.geometry = IndexedFaceSet183;

Appearance Appearance185 = createNode("Appearance");
Material Material186 = createNode("Material");
Material186.USE = "MIN_COLOR";
Appearance185.material = Material186;

Shape182.appearance = Appearance185;

Transform181.children = new MFNode();

Transform181.children[0] = Shape182;

HAnimSegment180.children = new MFNode();

HAnimSegment180.children[0] = Transform181;

HAnimSite HAnimSite187 = createNode("HAnimSite");
HAnimSite187.name = "l_knee_crease_pt";
HAnimSite187.DEF = "hanim_l_knee_crease_pt";
HAnimSite187.translation = new SFVec3f(new float[0.0993,0.4881,-0.0309]);
Shape Shape188 = createNode("Shape");
IndexedFaceSet IndexedFaceSet189 = createNode("IndexedFaceSet");
IndexedFaceSet189.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet189.creaseAngle = 0.5;
Coordinate Coordinate190 = createNode("Coordinate");
Coordinate190.USE = "points";
IndexedFaceSet189.coord = Coordinate190;

Shape188.geometry = IndexedFaceSet189;

Appearance Appearance191 = createNode("Appearance");
Material Material192 = createNode("Material");
Material192.USE = "SITE_COLOR";
Appearance191.material = Material192;

Shape188.appearance = Appearance191;

HAnimSite187.children = new MFNode();

HAnimSite187.children[0] = Shape188;

HAnimSegment180.children[1] = HAnimSite187;

HAnimSite HAnimSite193 = createNode("HAnimSite");
HAnimSite193.name = "l_femoral_lateral_epicn_pt";
HAnimSite193.DEF = "hanim_l_femoral_lateral_epicn_pt";
HAnimSite193.translation = new SFVec3f(new float[0.1598,0.4967,0.0297]);
Shape Shape194 = createNode("Shape");
IndexedFaceSet IndexedFaceSet195 = createNode("IndexedFaceSet");
IndexedFaceSet195.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet195.creaseAngle = 0.5;
Coordinate Coordinate196 = createNode("Coordinate");
Coordinate196.USE = "points";
IndexedFaceSet195.coord = Coordinate196;

Shape194.geometry = IndexedFaceSet195;

Appearance Appearance197 = createNode("Appearance");
Material Material198 = createNode("Material");
Material198.USE = "SITE_COLOR";
Appearance197.material = Material198;

Shape194.appearance = Appearance197;

HAnimSite193.children = new MFNode();

HAnimSite193.children[0] = Shape194;

HAnimSegment180.children[2] = HAnimSite193;

HAnimSite HAnimSite199 = createNode("HAnimSite");
HAnimSite199.name = "l_femoral_medial_epicn_pt";
HAnimSite199.DEF = "hanim_l_femoral_medial_epicn_pt";
HAnimSite199.translation = new SFVec3f(new float[0.0398,0.4946,0.0303]);
Shape Shape200 = createNode("Shape");
IndexedFaceSet IndexedFaceSet201 = createNode("IndexedFaceSet");
IndexedFaceSet201.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet201.creaseAngle = 0.5;
Coordinate Coordinate202 = createNode("Coordinate");
Coordinate202.USE = "points";
IndexedFaceSet201.coord = Coordinate202;

Shape200.geometry = IndexedFaceSet201;

Appearance Appearance203 = createNode("Appearance");
Material Material204 = createNode("Material");
Material204.USE = "SITE_COLOR";
Appearance203.material = Material204;

Shape200.appearance = Appearance203;

HAnimSite199.children = new MFNode();

HAnimSite199.children[0] = Shape200;

HAnimSegment180.children[3] = HAnimSite199;

HAnimJoint179.children = new MFNode();

HAnimJoint179.children[0] = HAnimSegment180;

HAnimJoint HAnimJoint205 = createNode("HAnimJoint");
HAnimJoint205.name = "l_knee";
HAnimJoint205.DEF = "hanim_l_knee";
HAnimJoint205.center = new SFVec3f(new float[0.104,0.4867,0.0308]);
HAnimJoint205.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint205.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment206 = createNode("HAnimSegment");
HAnimSegment206.name = "l_calf";
HAnimSegment206.DEF = "hanim_l_calf";
Transform Transform207 = createNode("Transform");
Transform207.translation = new SFVec3f(new float[0.104,0.4867,0.0308]);
Shape Shape208 = createNode("Shape");
IndexedFaceSet IndexedFaceSet209 = createNode("IndexedFaceSet");
IndexedFaceSet209.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet209.creaseAngle = 0.5;
Coordinate Coordinate210 = createNode("Coordinate");
Coordinate210.USE = "points";
IndexedFaceSet209.coord = Coordinate210;

Shape208.geometry = IndexedFaceSet209;

Appearance Appearance211 = createNode("Appearance");
Material Material212 = createNode("Material");
Material212.USE = "MIN_COLOR";
Appearance211.material = Material212;

Shape208.appearance = Appearance211;

Transform207.children = new MFNode();

Transform207.children[0] = Shape208;

HAnimSegment206.children = new MFNode();

HAnimSegment206.children[0] = Transform207;

HAnimJoint205.children = new MFNode();

HAnimJoint205.children[0] = HAnimSegment206;

HAnimJoint HAnimJoint213 = createNode("HAnimJoint");
HAnimJoint213.name = "l_ankle";
HAnimJoint213.DEF = "hanim_l_ankle";
HAnimJoint213.center = new SFVec3f(new float[0.1101,0.0656,-0.0736]);
HAnimJoint213.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint213.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment214 = createNode("HAnimSegment");
HAnimSegment214.name = "l_hindfoot";
HAnimSegment214.DEF = "hanim_l_hindfoot";
Transform Transform215 = createNode("Transform");
Transform215.translation = new SFVec3f(new float[0.1101,0.0656,-0.0736]);
Shape Shape216 = createNode("Shape");
IndexedFaceSet IndexedFaceSet217 = createNode("IndexedFaceSet");
IndexedFaceSet217.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet217.creaseAngle = 0.5;
Coordinate Coordinate218 = createNode("Coordinate");
Coordinate218.USE = "points";
IndexedFaceSet217.coord = Coordinate218;

Shape216.geometry = IndexedFaceSet217;

Appearance Appearance219 = createNode("Appearance");
Material Material220 = createNode("Material");
Material220.USE = "MIN_COLOR";
Appearance219.material = Material220;

Shape216.appearance = Appearance219;

Transform215.children = new MFNode();

Transform215.children[0] = Shape216;

HAnimSegment214.children = new MFNode();

HAnimSegment214.children[0] = Transform215;

HAnimSite HAnimSite221 = createNode("HAnimSite");
HAnimSite221.name = "l_lateral_malleolus_pt";
HAnimSite221.DEF = "hanim_l_lateral_malleolus_pt";
HAnimSite221.translation = new SFVec3f(new float[0.1308,0.0597,-0.1032]);
Shape Shape222 = createNode("Shape");
IndexedFaceSet IndexedFaceSet223 = createNode("IndexedFaceSet");
IndexedFaceSet223.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet223.creaseAngle = 0.5;
Coordinate Coordinate224 = createNode("Coordinate");
Coordinate224.USE = "points";
IndexedFaceSet223.coord = Coordinate224;

Shape222.geometry = IndexedFaceSet223;

Appearance Appearance225 = createNode("Appearance");
Material Material226 = createNode("Material");
Material226.USE = "HAND_FEET_COLOR";
Appearance225.material = Material226;

Shape222.appearance = Appearance225;

HAnimSite221.children = new MFNode();

HAnimSite221.children[0] = Shape222;

HAnimSegment214.children[1] = HAnimSite221;

HAnimSite HAnimSite227 = createNode("HAnimSite");
HAnimSite227.name = "l_medial_malleolus_pt";
HAnimSite227.DEF = "hanim_l_medial_malleolus_pt";
HAnimSite227.translation = new SFVec3f(new float[0.089,0.0716,-0.0881]);
Shape Shape228 = createNode("Shape");
IndexedFaceSet IndexedFaceSet229 = createNode("IndexedFaceSet");
IndexedFaceSet229.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet229.creaseAngle = 0.5;
Coordinate Coordinate230 = createNode("Coordinate");
Coordinate230.USE = "points";
IndexedFaceSet229.coord = Coordinate230;

Shape228.geometry = IndexedFaceSet229;

Appearance Appearance231 = createNode("Appearance");
Material Material232 = createNode("Material");
Material232.USE = "HAND_FEET_COLOR";
Appearance231.material = Material232;

Shape228.appearance = Appearance231;

HAnimSite227.children = new MFNode();

HAnimSite227.children[0] = Shape228;

HAnimSegment214.children[2] = HAnimSite227;

HAnimSite HAnimSite233 = createNode("HAnimSite");
HAnimSite233.name = "l_sphyrion_pt";
HAnimSite233.DEF = "hanim_l_sphyrion_pt";
HAnimSite233.translation = new SFVec3f(new float[0.089,0.0575,-0.0943]);
Shape Shape234 = createNode("Shape");
IndexedFaceSet IndexedFaceSet235 = createNode("IndexedFaceSet");
IndexedFaceSet235.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet235.creaseAngle = 0.5;
Coordinate Coordinate236 = createNode("Coordinate");
Coordinate236.USE = "points";
IndexedFaceSet235.coord = Coordinate236;

Shape234.geometry = IndexedFaceSet235;

Appearance Appearance237 = createNode("Appearance");
Material Material238 = createNode("Material");
Material238.USE = "HAND_FEET_COLOR";
Appearance237.material = Material238;

Shape234.appearance = Appearance237;

HAnimSite233.children = new MFNode();

HAnimSite233.children[0] = Shape234;

HAnimSegment214.children[3] = HAnimSite233;

HAnimSite HAnimSite239 = createNode("HAnimSite");
HAnimSite239.name = "l_calcaneous_post_pt";
HAnimSite239.DEF = "hanim_l_calcaneous_post_pt";
HAnimSite239.translation = new SFVec3f(new float[0.0974,0.0259,-0.1171]);
Shape Shape240 = createNode("Shape");
IndexedFaceSet IndexedFaceSet241 = createNode("IndexedFaceSet");
IndexedFaceSet241.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet241.creaseAngle = 0.5;
Coordinate Coordinate242 = createNode("Coordinate");
Coordinate242.USE = "points";
IndexedFaceSet241.coord = Coordinate242;

Shape240.geometry = IndexedFaceSet241;

Appearance Appearance243 = createNode("Appearance");
Material Material244 = createNode("Material");
Material244.USE = "HAND_FEET_COLOR";
Appearance243.material = Material244;

Shape240.appearance = Appearance243;

HAnimSite239.children = new MFNode();

HAnimSite239.children[0] = Shape240;

HAnimSegment214.children[4] = HAnimSite239;

HAnimJoint213.children = new MFNode();

HAnimJoint213.children[0] = HAnimSegment214;

HAnimJoint HAnimJoint245 = createNode("HAnimJoint");
HAnimJoint245.name = "l_subtalar";
HAnimJoint245.DEF = "hanim_l_subtalar";
HAnimJoint245.center = new SFVec3f(new float[0.1086,0.0001,-0.0368]);
HAnimJoint245.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint245.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment246 = createNode("HAnimSegment");
HAnimSegment246.name = "midproximal";
HAnimSegment246.DEF = "hanim_midproximal";
Transform Transform247 = createNode("Transform");
Transform247.translation = new SFVec3f(new float[0.1086,0.0001,-0.0368]);
Shape Shape248 = createNode("Shape");
IndexedFaceSet IndexedFaceSet249 = createNode("IndexedFaceSet");
IndexedFaceSet249.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet249.creaseAngle = 0.5;
Coordinate Coordinate250 = createNode("Coordinate");
Coordinate250.USE = "points";
IndexedFaceSet249.coord = Coordinate250;

Shape248.geometry = IndexedFaceSet249;

Appearance Appearance251 = createNode("Appearance");
Material Material252 = createNode("Material");
Material252.USE = "MIN_COLOR";
Appearance251.material = Material252;

Shape248.appearance = Appearance251;

Transform247.children = new MFNode();

Transform247.children[0] = Shape248;

HAnimSegment246.children = new MFNode();

HAnimSegment246.children[0] = Transform247;

HAnimJoint245.children = new MFNode();

HAnimJoint245.children[0] = HAnimSegment246;

HAnimJoint HAnimJoint253 = createNode("HAnimJoint");
HAnimJoint253.name = "l_midtarsal";
HAnimJoint253.DEF = "hanim_l_midtarsal";
HAnimJoint253.center = new SFVec3f(new float[0.1086,0.0001,0.0368]);
HAnimJoint253.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint253.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment254 = createNode("HAnimSegment");
HAnimSegment254.name = "l_middistal";
HAnimSegment254.DEF = "hanim_l_middistal";
Transform Transform255 = createNode("Transform");
Transform255.translation = new SFVec3f(new float[0.1086,0.0001,0.0368]);
Shape Shape256 = createNode("Shape");
IndexedFaceSet IndexedFaceSet257 = createNode("IndexedFaceSet");
IndexedFaceSet257.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet257.creaseAngle = 0.5;
Coordinate Coordinate258 = createNode("Coordinate");
Coordinate258.USE = "points";
IndexedFaceSet257.coord = Coordinate258;

Shape256.geometry = IndexedFaceSet257;

Appearance Appearance259 = createNode("Appearance");
Material Material260 = createNode("Material");
Material260.USE = "JOINT_COLOR";
Appearance259.material = Material260;

Shape256.appearance = Appearance259;

Transform255.children = new MFNode();

Transform255.children[0] = Shape256;

HAnimSegment254.children = new MFNode();

HAnimSegment254.children[0] = Transform255;

HAnimSite HAnimSite261 = createNode("HAnimSite");
HAnimSite261.name = "l_middistal_tip";
HAnimSite261.DEF = "hanim_l_middistal_tip";
HAnimSite261.translation = new SFVec3f(new float[0.1354,0.0016,0.1476]);
Shape Shape262 = createNode("Shape");
IndexedFaceSet IndexedFaceSet263 = createNode("IndexedFaceSet");
IndexedFaceSet263.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet263.creaseAngle = 0.5;
Coordinate Coordinate264 = createNode("Coordinate");
Coordinate264.USE = "points";
IndexedFaceSet263.coord = Coordinate264;

Shape262.geometry = IndexedFaceSet263;

Appearance Appearance265 = createNode("Appearance");
Material Material266 = createNode("Material");
Material266.USE = "HAND_FEET_COLOR";
Appearance265.material = Material266;

Shape262.appearance = Appearance265;

HAnimSite261.children = new MFNode();

HAnimSite261.children[0] = Shape262;

HAnimSegment254.children[1] = HAnimSite261;

HAnimSite HAnimSite267 = createNode("HAnimSite");
HAnimSite267.name = "l_metatarsal_pha1_pt";
HAnimSite267.DEF = "hanim_l_metatarsal_pha1_pt";
HAnimSite267.translation = new SFVec3f(new float[0.0816,0.0232,0.0106]);
Shape Shape268 = createNode("Shape");
IndexedFaceSet IndexedFaceSet269 = createNode("IndexedFaceSet");
IndexedFaceSet269.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet269.creaseAngle = 0.5;
Coordinate Coordinate270 = createNode("Coordinate");
Coordinate270.USE = "points";
IndexedFaceSet269.coord = Coordinate270;

Shape268.geometry = IndexedFaceSet269;

Appearance Appearance271 = createNode("Appearance");
Material Material272 = createNode("Material");
Material272.USE = "HAND_FEET_COLOR";
Appearance271.material = Material272;

Shape268.appearance = Appearance271;

HAnimSite267.children = new MFNode();

HAnimSite267.children[0] = Shape268;

HAnimSegment254.children[2] = HAnimSite267;

HAnimJoint253.children = new MFNode();

HAnimJoint253.children[0] = HAnimSegment254;

HAnimJoint HAnimJoint273 = createNode("HAnimJoint");
HAnimJoint273.name = "l_metatarsal";
HAnimJoint273.DEF = "hanim_l_metatarsal";
HAnimJoint273.center = new SFVec3f(new float[0.1086,0,0.0762]);
HAnimJoint273.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint273.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment274 = createNode("HAnimSegment");
HAnimSegment274.name = "l_forefoot";
HAnimSegment274.DEF = "hanim_l_forefoot";
Transform Transform275 = createNode("Transform");
Transform275.translation = new SFVec3f(new float[0.1086,0,0.0762]);
Shape Shape276 = createNode("Shape");
IndexedFaceSet IndexedFaceSet277 = createNode("IndexedFaceSet");
IndexedFaceSet277.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet277.creaseAngle = 0.5;
Coordinate Coordinate278 = createNode("Coordinate");
Coordinate278.USE = "points";
IndexedFaceSet277.coord = Coordinate278;

Shape276.geometry = IndexedFaceSet277;

Appearance Appearance279 = createNode("Appearance");
Material Material280 = createNode("Material");
Material280.USE = "JOINT_COLOR";
Appearance279.material = Material280;

Shape276.appearance = Appearance279;

Transform275.children = new MFNode();

Transform275.children[0] = Shape276;

HAnimSegment274.children = new MFNode();

HAnimSegment274.children[0] = Transform275;

HAnimSite HAnimSite281 = createNode("HAnimSite");
HAnimSite281.name = "l_forefoot_tip";
HAnimSite281.DEF = "hanim_l_forefoot_tip";
HAnimSite281.translation = new SFVec3f(new float[0.1354,0.0016,0.1476]);
Shape Shape282 = createNode("Shape");
IndexedFaceSet IndexedFaceSet283 = createNode("IndexedFaceSet");
IndexedFaceSet283.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet283.creaseAngle = 0.5;
Coordinate Coordinate284 = createNode("Coordinate");
Coordinate284.USE = "points";
IndexedFaceSet283.coord = Coordinate284;

Shape282.geometry = IndexedFaceSet283;

Appearance Appearance285 = createNode("Appearance");
Material Material286 = createNode("Material");
Material286.USE = "HAND_FEET_COLOR";
Appearance285.material = Material286;

Shape282.appearance = Appearance285;

HAnimSite281.children = new MFNode();

HAnimSite281.children[0] = Shape282;

HAnimSegment274.children[1] = HAnimSite281;

HAnimSite HAnimSite287 = createNode("HAnimSite");
HAnimSite287.name = "l_metatarsal_pha5_pt";
HAnimSite287.DEF = "hanim_l_metatarsal_pha5_pt";
HAnimSite287.translation = new SFVec3f(new float[0.1825,0.007,0.0928]);
//# CAESAR Feature Point #66
Shape Shape288 = createNode("Shape");
IndexedFaceSet IndexedFaceSet289 = createNode("IndexedFaceSet");
IndexedFaceSet289.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet289.creaseAngle = 0.5;
Coordinate Coordinate290 = createNode("Coordinate");
Coordinate290.USE = "points";
IndexedFaceSet289.coord = Coordinate290;

Shape288.geometry = IndexedFaceSet289;

Appearance Appearance291 = createNode("Appearance");
Material Material292 = createNode("Material");
Material292.USE = "HAND_FEET_COLOR";
Appearance291.material = Material292;

Shape288.appearance = Appearance291;

HAnimSite287.children = new MFNode();

HAnimSite287.children[0] = Shape288;

HAnimSegment274.children[2] = HAnimSite287;

HAnimSite HAnimSite293 = createNode("HAnimSite");
HAnimSite293.name = "l_digit2_pt";
HAnimSite293.DEF = "hanim_l_digit2_pt";
HAnimSite293.translation = new SFVec3f(new float[0.1195,0.0079,0.1433]);
//# CAESAR Feature Point #72
Shape Shape294 = createNode("Shape");
IndexedFaceSet IndexedFaceSet295 = createNode("IndexedFaceSet");
IndexedFaceSet295.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet295.creaseAngle = 0.5;
Coordinate Coordinate296 = createNode("Coordinate");
Coordinate296.USE = "points";
IndexedFaceSet295.coord = Coordinate296;

Shape294.geometry = IndexedFaceSet295;

Appearance Appearance297 = createNode("Appearance");
Material Material298 = createNode("Material");
Material298.USE = "HAND_FEET_COLOR";
Appearance297.material = Material298;

Shape294.appearance = Appearance297;

HAnimSite293.children = new MFNode();

HAnimSite293.children[0] = Shape294;

HAnimSegment274.children[3] = HAnimSite293;

HAnimJoint273.children = new MFNode();

HAnimJoint273.children[0] = HAnimSegment274;

HAnimJoint253.children[1] = HAnimJoint273;

HAnimJoint245.children[1] = HAnimJoint253;

HAnimJoint213.children[1] = HAnimJoint245;

HAnimJoint205.children[1] = HAnimJoint213;

HAnimJoint179.children[1] = HAnimJoint205;

HAnimJoint117.children[1] = HAnimJoint179;

HAnimJoint HAnimJoint299 = createNode("HAnimJoint");
HAnimJoint299.name = "r_hip";
HAnimJoint299.DEF = "hanim_r_hip";
HAnimJoint299.center = new SFVec3f(new float[-0.095,0.9171,0.0029]);
HAnimJoint299.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint299.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment300 = createNode("HAnimSegment");
HAnimSegment300.name = "r_thigh";
HAnimSegment300.DEF = "hanim_r_thigh";
Transform Transform301 = createNode("Transform");
Transform301.translation = new SFVec3f(new float[-0.095,0.9171,0.0029]);
Shape Shape302 = createNode("Shape");
IndexedFaceSet IndexedFaceSet303 = createNode("IndexedFaceSet");
IndexedFaceSet303.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet303.creaseAngle = 0.5;
Coordinate Coordinate304 = createNode("Coordinate");
Coordinate304.USE = "points";
IndexedFaceSet303.coord = Coordinate304;

Shape302.geometry = IndexedFaceSet303;

Appearance Appearance305 = createNode("Appearance");
Material Material306 = createNode("Material");
Material306.USE = "MIN_COLOR";
Appearance305.material = Material306;

Shape302.appearance = Appearance305;

Transform301.children = new MFNode();

Transform301.children[0] = Shape302;

HAnimSegment300.children = new MFNode();

HAnimSegment300.children[0] = Transform301;

HAnimSite HAnimSite307 = createNode("HAnimSite");
HAnimSite307.name = "r_knee_crease_pt";
HAnimSite307.DEF = "hanim_r_knee_crease_pt";
HAnimSite307.translation = new SFVec3f(new float[-0.0825,0.4932,-0.0326]);
Shape Shape308 = createNode("Shape");
IndexedFaceSet IndexedFaceSet309 = createNode("IndexedFaceSet");
IndexedFaceSet309.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet309.creaseAngle = 0.5;
Coordinate Coordinate310 = createNode("Coordinate");
Coordinate310.USE = "points";
IndexedFaceSet309.coord = Coordinate310;

Shape308.geometry = IndexedFaceSet309;

Appearance Appearance311 = createNode("Appearance");
Material Material312 = createNode("Material");
Material312.USE = "SITE_COLOR";
Appearance311.material = Material312;

Shape308.appearance = Appearance311;

HAnimSite307.children = new MFNode();

HAnimSite307.children[0] = Shape308;

HAnimSegment300.children[1] = HAnimSite307;

HAnimSite HAnimSite313 = createNode("HAnimSite");
HAnimSite313.name = "r_femoral_lateral_epicn_pt";
HAnimSite313.DEF = "hanim_r_femoral_lateral_epicn_pt";
HAnimSite313.translation = new SFVec3f(new float[-0.1421,0.4992,0.031]);
Shape Shape314 = createNode("Shape");
IndexedFaceSet IndexedFaceSet315 = createNode("IndexedFaceSet");
IndexedFaceSet315.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet315.creaseAngle = 0.5;
Coordinate Coordinate316 = createNode("Coordinate");
Coordinate316.USE = "points";
IndexedFaceSet315.coord = Coordinate316;

Shape314.geometry = IndexedFaceSet315;

Appearance Appearance317 = createNode("Appearance");
Material Material318 = createNode("Material");
Material318.USE = "SITE_COLOR";
Appearance317.material = Material318;

Shape314.appearance = Appearance317;

HAnimSite313.children = new MFNode();

HAnimSite313.children[0] = Shape314;

HAnimSegment300.children[2] = HAnimSite313;

HAnimSite HAnimSite319 = createNode("HAnimSite");
HAnimSite319.name = "r_femoral_medial_epicn_pt";
HAnimSite319.DEF = "hanim_r_femoral_medial_epicn_pt";
HAnimSite319.translation = new SFVec3f(new float[-0.0221,0.5014,0.0289]);
Shape Shape320 = createNode("Shape");
IndexedFaceSet IndexedFaceSet321 = createNode("IndexedFaceSet");
IndexedFaceSet321.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet321.creaseAngle = 0.5;
Coordinate Coordinate322 = createNode("Coordinate");
Coordinate322.USE = "points";
IndexedFaceSet321.coord = Coordinate322;

Shape320.geometry = IndexedFaceSet321;

Appearance Appearance323 = createNode("Appearance");
Material Material324 = createNode("Material");
Material324.USE = "SITE_COLOR";
Appearance323.material = Material324;

Shape320.appearance = Appearance323;

HAnimSite319.children = new MFNode();

HAnimSite319.children[0] = Shape320;

HAnimSegment300.children[3] = HAnimSite319;

HAnimJoint299.children = new MFNode();

HAnimJoint299.children[0] = HAnimSegment300;

HAnimJoint HAnimJoint325 = createNode("HAnimJoint");
HAnimJoint325.name = "r_knee";
HAnimJoint325.DEF = "hanim_r_knee";
HAnimJoint325.center = new SFVec3f(new float[-0.0867,0.4913,0.0318]);
HAnimJoint325.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint325.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment326 = createNode("HAnimSegment");
HAnimSegment326.name = "r_calf";
HAnimSegment326.DEF = "hanim_r_calf";
Transform Transform327 = createNode("Transform");
Transform327.translation = new SFVec3f(new float[-0.0867,0.4913,0.0318]);
Shape Shape328 = createNode("Shape");
IndexedFaceSet IndexedFaceSet329 = createNode("IndexedFaceSet");
IndexedFaceSet329.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet329.creaseAngle = 0.5;
Coordinate Coordinate330 = createNode("Coordinate");
Coordinate330.USE = "points";
IndexedFaceSet329.coord = Coordinate330;

Shape328.geometry = IndexedFaceSet329;

Appearance Appearance331 = createNode("Appearance");
Material Material332 = createNode("Material");
Material332.USE = "SITE_COLOR";
Appearance331.material = Material332;

Shape328.appearance = Appearance331;

Transform327.children = new MFNode();

Transform327.children[0] = Shape328;

HAnimSegment326.children = new MFNode();

HAnimSegment326.children[0] = Transform327;

HAnimJoint325.children = new MFNode();

HAnimJoint325.children[0] = HAnimSegment326;

HAnimJoint HAnimJoint333 = createNode("HAnimJoint");
HAnimJoint333.name = "r_ankle";
HAnimJoint333.DEF = "hanim_r_ankle";
HAnimJoint333.center = new SFVec3f(new float[-0.0801,0.0712,-0.0766]);
HAnimJoint333.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint333.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment334 = createNode("HAnimSegment");
HAnimSegment334.name = "r_hindfoot";
HAnimSegment334.DEF = "hanim_r_hindfoot";
Transform Transform335 = createNode("Transform");
Transform335.translation = new SFVec3f(new float[-0.0801,0.0712,-0.0766]);
Shape Shape336 = createNode("Shape");
IndexedFaceSet IndexedFaceSet337 = createNode("IndexedFaceSet");
IndexedFaceSet337.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet337.creaseAngle = 0.5;
Coordinate Coordinate338 = createNode("Coordinate");
Coordinate338.USE = "points";
IndexedFaceSet337.coord = Coordinate338;

Shape336.geometry = IndexedFaceSet337;

Appearance Appearance339 = createNode("Appearance");
Material Material340 = createNode("Material");
Material340.USE = "MIN_COLOR";
Appearance339.material = Material340;

Shape336.appearance = Appearance339;

Transform335.children = new MFNode();

Transform335.children[0] = Shape336;

HAnimSegment334.children = new MFNode();

HAnimSegment334.children[0] = Transform335;

HAnimSite HAnimSite341 = createNode("HAnimSite");
HAnimSite341.name = "r_lateral_malleolus_pt";
HAnimSite341.DEF = "hanim_r_lateral_malleolus_pt";
HAnimSite341.translation = new SFVec3f(new float[-0.1006,0.0658,-0.1075]);
Shape Shape342 = createNode("Shape");
IndexedFaceSet IndexedFaceSet343 = createNode("IndexedFaceSet");
IndexedFaceSet343.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet343.creaseAngle = 0.5;
Coordinate Coordinate344 = createNode("Coordinate");
Coordinate344.USE = "points";
IndexedFaceSet343.coord = Coordinate344;

Shape342.geometry = IndexedFaceSet343;

Appearance Appearance345 = createNode("Appearance");
Material Material346 = createNode("Material");
Material346.USE = "HAND_FEET_COLOR";
Appearance345.material = Material346;

Shape342.appearance = Appearance345;

HAnimSite341.children = new MFNode();

HAnimSite341.children[0] = Shape342;

HAnimSegment334.children[1] = HAnimSite341;

HAnimSite HAnimSite347 = createNode("HAnimSite");
HAnimSite347.name = "r_medial_malleolus_pt";
HAnimSite347.DEF = "hanim_r_medial_malleolus_pt";
HAnimSite347.translation = new SFVec3f(new float[-0.0591,0.076,-0.0928]);
Shape Shape348 = createNode("Shape");
IndexedFaceSet IndexedFaceSet349 = createNode("IndexedFaceSet");
IndexedFaceSet349.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet349.creaseAngle = 0.5;
Coordinate Coordinate350 = createNode("Coordinate");
Coordinate350.USE = "points";
IndexedFaceSet349.coord = Coordinate350;

Shape348.geometry = IndexedFaceSet349;

Appearance Appearance351 = createNode("Appearance");
Material Material352 = createNode("Material");
Material352.USE = "HAND_FEET_COLOR";
Appearance351.material = Material352;

Shape348.appearance = Appearance351;

HAnimSite347.children = new MFNode();

HAnimSite347.children[0] = Shape348;

HAnimSegment334.children[2] = HAnimSite347;

HAnimSite HAnimSite353 = createNode("HAnimSite");
HAnimSite353.name = "r_sphyrion_pt";
HAnimSite353.DEF = "hanim_r_sphyrion_pt";
HAnimSite353.translation = new SFVec3f(new float[-0.0603,0.061,-0.1002]);
Shape Shape354 = createNode("Shape");
IndexedFaceSet IndexedFaceSet355 = createNode("IndexedFaceSet");
IndexedFaceSet355.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet355.creaseAngle = 0.5;
Coordinate Coordinate356 = createNode("Coordinate");
Coordinate356.USE = "points";
IndexedFaceSet355.coord = Coordinate356;

Shape354.geometry = IndexedFaceSet355;

Appearance Appearance357 = createNode("Appearance");
Material Material358 = createNode("Material");
Material358.USE = "HAND_FEET_COLOR";
Appearance357.material = Material358;

Shape354.appearance = Appearance357;

HAnimSite353.children = new MFNode();

HAnimSite353.children[0] = Shape354;

HAnimSegment334.children[3] = HAnimSite353;

HAnimSite HAnimSite359 = createNode("HAnimSite");
HAnimSite359.name = "r_calcaneous_post_pt";
HAnimSite359.DEF = "hanim_r_calcaneous_post_pt";
HAnimSite359.translation = new SFVec3f(new float[-0.0692,0.0297,-0.1221]);
Shape Shape360 = createNode("Shape");
IndexedFaceSet IndexedFaceSet361 = createNode("IndexedFaceSet");
IndexedFaceSet361.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet361.creaseAngle = 0.5;
Coordinate Coordinate362 = createNode("Coordinate");
Coordinate362.USE = "points";
IndexedFaceSet361.coord = Coordinate362;

Shape360.geometry = IndexedFaceSet361;

Appearance Appearance363 = createNode("Appearance");
Material Material364 = createNode("Material");
Material364.USE = "HAND_FEET_COLOR";
Appearance363.material = Material364;

Shape360.appearance = Appearance363;

HAnimSite359.children = new MFNode();

HAnimSite359.children[0] = Shape360;

HAnimSegment334.children[4] = HAnimSite359;

HAnimJoint333.children = new MFNode();

HAnimJoint333.children[0] = HAnimSegment334;

HAnimJoint HAnimJoint365 = createNode("HAnimJoint");
HAnimJoint365.name = "r_midtarsal";
HAnimJoint365.DEF = "hanim_r_midtarsal";
HAnimJoint365.center = new SFVec3f(new float[-0.0801,0,0.0368]);
HAnimJoint365.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint365.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment366 = createNode("HAnimSegment");
HAnimSegment366.name = "r_middistal";
HAnimSegment366.DEF = "hanim_r_middistal";
Transform Transform367 = createNode("Transform");
Transform367.translation = new SFVec3f(new float[-0.0801,0,0.0368]);
Shape Shape368 = createNode("Shape");
IndexedFaceSet IndexedFaceSet369 = createNode("IndexedFaceSet");
IndexedFaceSet369.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet369.creaseAngle = 0.5;
Coordinate Coordinate370 = createNode("Coordinate");
Coordinate370.USE = "points";
IndexedFaceSet369.coord = Coordinate370;

Shape368.geometry = IndexedFaceSet369;

Appearance Appearance371 = createNode("Appearance");
Material Material372 = createNode("Material");
Material372.USE = "JOINT_COLOR";
Appearance371.material = Material372;

Shape368.appearance = Appearance371;

Transform367.children = new MFNode();

Transform367.children[0] = Shape368;

HAnimSegment366.children = new MFNode();

HAnimSegment366.children[0] = Transform367;

HAnimSite HAnimSite373 = createNode("HAnimSite");
HAnimSite373.name = "r_middistal_tip";
HAnimSite373.DEF = "hanim_r_middistal_tip";
HAnimSite373.translation = new SFVec3f(new float[-0.1043,-0.0227,0.145]);
Shape Shape374 = createNode("Shape");
IndexedFaceSet IndexedFaceSet375 = createNode("IndexedFaceSet");
IndexedFaceSet375.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet375.creaseAngle = 0.5;
Coordinate Coordinate376 = createNode("Coordinate");
Coordinate376.USE = "points";
IndexedFaceSet375.coord = Coordinate376;

Shape374.geometry = IndexedFaceSet375;

Appearance Appearance377 = createNode("Appearance");
Material Material378 = createNode("Material");
Material378.USE = "HAND_FEET_COLOR";
Appearance377.material = Material378;

Shape374.appearance = Appearance377;

HAnimSite373.children = new MFNode();

HAnimSite373.children[0] = Shape374;

HAnimSegment366.children[1] = HAnimSite373;

HAnimSite HAnimSite379 = createNode("HAnimSite");
HAnimSite379.name = "r_metatarsal_pha5_pt";
HAnimSite379.DEF = "hanim_r_metatarsal_pha5_pt";
HAnimSite379.translation = new SFVec3f(new float[-0.1523,0.0166,0.0895]);
Shape Shape380 = createNode("Shape");
IndexedFaceSet IndexedFaceSet381 = createNode("IndexedFaceSet");
IndexedFaceSet381.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet381.creaseAngle = 0.5;
Coordinate Coordinate382 = createNode("Coordinate");
Coordinate382.USE = "points";
IndexedFaceSet381.coord = Coordinate382;

Shape380.geometry = IndexedFaceSet381;

Appearance Appearance383 = createNode("Appearance");
Material Material384 = createNode("Material");
Material384.USE = "HAND_FEET_COLOR";
Appearance383.material = Material384;

Shape380.appearance = Appearance383;

HAnimSite379.children = new MFNode();

HAnimSite379.children[0] = Shape380;

HAnimSegment366.children[2] = HAnimSite379;

HAnimSite HAnimSite385 = createNode("HAnimSite");
HAnimSite385.name = "r_metatarsal_pha1_pt";
HAnimSite385.DEF = "hanim_r_metatarsal_pha1_pt";
HAnimSite385.translation = new SFVec3f(new float[-0.0521,0.026,0.0127]);
Shape Shape386 = createNode("Shape");
IndexedFaceSet IndexedFaceSet387 = createNode("IndexedFaceSet");
IndexedFaceSet387.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet387.creaseAngle = 0.5;
Coordinate Coordinate388 = createNode("Coordinate");
Coordinate388.USE = "points";
IndexedFaceSet387.coord = Coordinate388;

Shape386.geometry = IndexedFaceSet387;

Appearance Appearance389 = createNode("Appearance");
Material Material390 = createNode("Material");
Material390.USE = "HAND_FEET_COLOR";
Appearance389.material = Material390;

Shape386.appearance = Appearance389;

HAnimSite385.children = new MFNode();

HAnimSite385.children[0] = Shape386;

HAnimSegment366.children[3] = HAnimSite385;

HAnimSite HAnimSite391 = createNode("HAnimSite");
HAnimSite391.name = "r_digit2_pt";
HAnimSite391.DEF = "hanim_r_digit2_pt";
HAnimSite391.translation = new SFVec3f(new float[-0.0883,0.0134,0.1383]);
Shape Shape392 = createNode("Shape");
IndexedFaceSet IndexedFaceSet393 = createNode("IndexedFaceSet");
IndexedFaceSet393.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet393.creaseAngle = 0.5;
Coordinate Coordinate394 = createNode("Coordinate");
Coordinate394.USE = "points";
IndexedFaceSet393.coord = Coordinate394;

Shape392.geometry = IndexedFaceSet393;

Appearance Appearance395 = createNode("Appearance");
Material Material396 = createNode("Material");
Material396.USE = "HAND_FEET_COLOR";
Appearance395.material = Material396;

Shape392.appearance = Appearance395;

HAnimSite391.children = new MFNode();

HAnimSite391.children[0] = Shape392;

HAnimSegment366.children[4] = HAnimSite391;

HAnimJoint365.children = new MFNode();

HAnimJoint365.children[0] = HAnimSegment366;

HAnimJoint333.children[1] = HAnimJoint365;

HAnimJoint325.children[1] = HAnimJoint333;

HAnimJoint299.children[1] = HAnimJoint325;

HAnimJoint117.children[2] = HAnimJoint299;

HAnimJoint102.children[1] = HAnimJoint117;

HAnimJoint HAnimJoint397 = createNode("HAnimJoint");
HAnimJoint397.name = "vl5";
HAnimJoint397.DEF = "hanim_vl5";
HAnimJoint397.center = new SFVec3f(new float[0.0028,1.0568,-0.0776]);
HAnimJoint397.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint397.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment398 = createNode("HAnimSegment");
HAnimSegment398.name = "l5";
HAnimSegment398.DEF = "hanim_l5";
Transform Transform399 = createNode("Transform");
Transform399.translation = new SFVec3f(new float[0.0028,1.0568,-0.0776]);
Shape Shape400 = createNode("Shape");
IndexedFaceSet IndexedFaceSet401 = createNode("IndexedFaceSet");
IndexedFaceSet401.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet401.creaseAngle = 0.5;
Coordinate Coordinate402 = createNode("Coordinate");
Coordinate402.USE = "points";
IndexedFaceSet401.coord = Coordinate402;

Shape400.geometry = IndexedFaceSet401;

Appearance Appearance403 = createNode("Appearance");
Material Material404 = createNode("Material");
Material404.USE = "REC_SPINAL_COLOR";
Appearance403.material = Material404;

Shape400.appearance = Appearance403;

Transform399.children = new MFNode();

Transform399.children[0] = Shape400;

HAnimSegment398.children = new MFNode();

HAnimSegment398.children[0] = Transform399;

HAnimJoint397.children = new MFNode();

HAnimJoint397.children[0] = HAnimSegment398;

HAnimJoint HAnimJoint405 = createNode("HAnimJoint");
HAnimJoint405.name = "vl4";
HAnimJoint405.DEF = "hanim_vl4";
HAnimJoint405.center = new SFVec3f(new float[0.0035,1.0925,-0.0787]);
HAnimJoint405.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint405.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment406 = createNode("HAnimSegment");
HAnimSegment406.name = "l4";
HAnimSegment406.DEF = "hanim_l4";
Transform Transform407 = createNode("Transform");
Transform407.translation = new SFVec3f(new float[0.0035,1.0925,-0.0787]);
Shape Shape408 = createNode("Shape");
IndexedFaceSet IndexedFaceSet409 = createNode("IndexedFaceSet");
IndexedFaceSet409.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet409.creaseAngle = 0.5;
Coordinate Coordinate410 = createNode("Coordinate");
Coordinate410.USE = "points";
IndexedFaceSet409.coord = Coordinate410;

Shape408.geometry = IndexedFaceSet409;

Appearance Appearance411 = createNode("Appearance");
Material Material412 = createNode("Material");
Material412.USE = "SPINAL_COLOR";
Appearance411.material = Material412;

Shape408.appearance = Appearance411;

Transform407.children = new MFNode();

Transform407.children[0] = Shape408;

HAnimSegment406.children = new MFNode();

HAnimSegment406.children[0] = Transform407;

HAnimJoint405.children = new MFNode();

HAnimJoint405.children[0] = HAnimSegment406;

HAnimJoint HAnimJoint413 = createNode("HAnimJoint");
HAnimJoint413.name = "vl3";
HAnimJoint413.DEF = "hanim_vl3";
HAnimJoint413.center = new SFVec3f(new float[0.0041,1.1276,-0.0796]);
HAnimJoint413.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint413.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment414 = createNode("HAnimSegment");
HAnimSegment414.name = "l3";
HAnimSegment414.DEF = "hanim_l3";
Transform Transform415 = createNode("Transform");
Transform415.translation = new SFVec3f(new float[0.0041,1.1276,-0.0796]);
Shape Shape416 = createNode("Shape");
IndexedFaceSet IndexedFaceSet417 = createNode("IndexedFaceSet");
IndexedFaceSet417.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet417.creaseAngle = 0.5;
Coordinate Coordinate418 = createNode("Coordinate");
Coordinate418.USE = "points";
IndexedFaceSet417.coord = Coordinate418;

Shape416.geometry = IndexedFaceSet417;

Appearance Appearance419 = createNode("Appearance");
Material Material420 = createNode("Material");
Material420.USE = "REC_SPINAL_COLOR";
Appearance419.material = Material420;

Shape416.appearance = Appearance419;

Transform415.children = new MFNode();

Transform415.children[0] = Shape416;

HAnimSegment414.children = new MFNode();

HAnimSegment414.children[0] = Transform415;

HAnimJoint413.children = new MFNode();

HAnimJoint413.children[0] = HAnimSegment414;

HAnimJoint HAnimJoint421 = createNode("HAnimJoint");
HAnimJoint421.name = "vl2";
HAnimJoint421.DEF = "hanim_vl2";
HAnimJoint421.center = new SFVec3f(new float[0.0045,1.1546,-0.08]);
HAnimJoint421.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint421.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment422 = createNode("HAnimSegment");
HAnimSegment422.name = "l2";
HAnimSegment422.DEF = "hanim_l2";
Transform Transform423 = createNode("Transform");
Transform423.translation = new SFVec3f(new float[0.0045,1.1546,-0.08]);
Shape Shape424 = createNode("Shape");
IndexedFaceSet IndexedFaceSet425 = createNode("IndexedFaceSet");
IndexedFaceSet425.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet425.creaseAngle = 0.5;
Coordinate Coordinate426 = createNode("Coordinate");
Coordinate426.USE = "points";
IndexedFaceSet425.coord = Coordinate426;

Shape424.geometry = IndexedFaceSet425;

Appearance Appearance427 = createNode("Appearance");
Material Material428 = createNode("Material");
Material428.USE = "SPINAL_COLOR";
Appearance427.material = Material428;

Shape424.appearance = Appearance427;

Transform423.children = new MFNode();

Transform423.children[0] = Shape424;

HAnimSegment422.children = new MFNode();

HAnimSegment422.children[0] = Transform423;

HAnimJoint421.children = new MFNode();

HAnimJoint421.children[0] = HAnimSegment422;

HAnimJoint HAnimJoint429 = createNode("HAnimJoint");
HAnimJoint429.name = "vl1";
HAnimJoint429.DEF = "hanim_vl1";
HAnimJoint429.center = new SFVec3f(new float[0.0048,1.1912,-0.0805]);
HAnimJoint429.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint429.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment430 = createNode("HAnimSegment");
HAnimSegment430.name = "l1";
HAnimSegment430.DEF = "hanim_l1";
Transform Transform431 = createNode("Transform");
Transform431.translation = new SFVec3f(new float[0.0048,1.1912,-0.0805]);
Shape Shape432 = createNode("Shape");
IndexedFaceSet IndexedFaceSet433 = createNode("IndexedFaceSet");
IndexedFaceSet433.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet433.creaseAngle = 0.5;
Coordinate Coordinate434 = createNode("Coordinate");
Coordinate434.USE = "points";
IndexedFaceSet433.coord = Coordinate434;

Shape432.geometry = IndexedFaceSet433;

Appearance Appearance435 = createNode("Appearance");
Material Material436 = createNode("Material");
Material436.USE = "REC_SPINAL_COLOR";
Appearance435.material = Material436;

Shape432.appearance = Appearance435;

Transform431.children = new MFNode();

Transform431.children[0] = Shape432;

HAnimSegment430.children = new MFNode();

HAnimSegment430.children[0] = Transform431;

HAnimJoint429.children = new MFNode();

HAnimJoint429.children[0] = HAnimSegment430;

HAnimJoint HAnimJoint437 = createNode("HAnimJoint");
HAnimJoint437.name = "vt12";
HAnimJoint437.DEF = "hanim_vt12";
HAnimJoint437.center = new SFVec3f(new float[0.0051,1.2278,-0.0808]);
HAnimJoint437.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint437.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment438 = createNode("HAnimSegment");
HAnimSegment438.name = "t12";
HAnimSegment438.DEF = "hanim_t12";
Transform Transform439 = createNode("Transform");
Transform439.translation = new SFVec3f(new float[0.0051,1.2278,-0.0808]);
Shape Shape440 = createNode("Shape");
IndexedFaceSet IndexedFaceSet441 = createNode("IndexedFaceSet");
IndexedFaceSet441.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet441.creaseAngle = 0.5;
Coordinate Coordinate442 = createNode("Coordinate");
Coordinate442.USE = "points";
IndexedFaceSet441.coord = Coordinate442;

Shape440.geometry = IndexedFaceSet441;

Appearance Appearance443 = createNode("Appearance");
Material Material444 = createNode("Material");
Material444.USE = "SPINAL_COLOR";
Appearance443.material = Material444;

Shape440.appearance = Appearance443;

Transform439.children = new MFNode();

Transform439.children[0] = Shape440;

HAnimSegment438.children = new MFNode();

HAnimSegment438.children[0] = Transform439;

HAnimJoint437.children = new MFNode();

HAnimJoint437.children[0] = HAnimSegment438;

HAnimJoint HAnimJoint445 = createNode("HAnimJoint");
HAnimJoint445.name = "vt11";
HAnimJoint445.DEF = "hanim_vt11";
HAnimJoint445.center = new SFVec3f(new float[0.0053,1.2679,-0.081]);
HAnimJoint445.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint445.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment446 = createNode("HAnimSegment");
HAnimSegment446.name = "t11";
HAnimSegment446.DEF = "hanim_t11";
Transform Transform447 = createNode("Transform");
Transform447.translation = new SFVec3f(new float[0.0053,1.2679,-0.081]);
Shape Shape448 = createNode("Shape");
IndexedFaceSet IndexedFaceSet449 = createNode("IndexedFaceSet");
IndexedFaceSet449.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet449.creaseAngle = 0.5;
Coordinate Coordinate450 = createNode("Coordinate");
Coordinate450.USE = "points";
IndexedFaceSet449.coord = Coordinate450;

Shape448.geometry = IndexedFaceSet449;

Appearance Appearance451 = createNode("Appearance");
Material Material452 = createNode("Material");
Material452.USE = "SPINAL_COLOR";
Appearance451.material = Material452;

Shape448.appearance = Appearance451;

Transform447.children = new MFNode();

Transform447.children[0] = Shape448;

HAnimSegment446.children = new MFNode();

HAnimSegment446.children[0] = Transform447;

HAnimJoint445.children = new MFNode();

HAnimJoint445.children[0] = HAnimSegment446;

HAnimJoint HAnimJoint453 = createNode("HAnimJoint");
HAnimJoint453.name = "vt10";
HAnimJoint453.DEF = "hanim_vt10";
HAnimJoint453.center = new SFVec3f(new float[0.0056,1.2848,-0.0822]);
HAnimJoint453.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint453.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment454 = createNode("HAnimSegment");
HAnimSegment454.name = "t10";
HAnimSegment454.DEF = "hanim_t10";
Transform Transform455 = createNode("Transform");
Transform455.translation = new SFVec3f(new float[0.0056,1.2848,-0.0822]);
Shape Shape456 = createNode("Shape");
IndexedFaceSet IndexedFaceSet457 = createNode("IndexedFaceSet");
IndexedFaceSet457.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet457.creaseAngle = 0.5;
Coordinate Coordinate458 = createNode("Coordinate");
Coordinate458.USE = "points";
IndexedFaceSet457.coord = Coordinate458;

Shape456.geometry = IndexedFaceSet457;

Appearance Appearance459 = createNode("Appearance");
Material Material460 = createNode("Material");
Material460.USE = "REC_SPINAL_COLOR";
Appearance459.material = Material460;

Shape456.appearance = Appearance459;

Transform455.children = new MFNode();

Transform455.children[0] = Shape456;

HAnimSegment454.children = new MFNode();

HAnimSegment454.children[0] = Transform455;

HAnimJoint453.children = new MFNode();

HAnimJoint453.children[0] = HAnimSegment454;

HAnimJoint HAnimJoint461 = createNode("HAnimJoint");
HAnimJoint461.name = "vt9";
HAnimJoint461.DEF = "hanim_vt9";
HAnimJoint461.center = new SFVec3f(new float[0.0057,1.3126,-0.0838]);
HAnimJoint461.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint461.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment462 = createNode("HAnimSegment");
HAnimSegment462.name = "t9";
HAnimSegment462.DEF = "hanim_t9";
Transform Transform463 = createNode("Transform");
Transform463.translation = new SFVec3f(new float[0.0057,1.3126,-0.0838]);
Shape Shape464 = createNode("Shape");
IndexedFaceSet IndexedFaceSet465 = createNode("IndexedFaceSet");
IndexedFaceSet465.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet465.creaseAngle = 0.5;
Coordinate Coordinate466 = createNode("Coordinate");
Coordinate466.USE = "points";
IndexedFaceSet465.coord = Coordinate466;

Shape464.geometry = IndexedFaceSet465;

Appearance Appearance467 = createNode("Appearance");
Material Material468 = createNode("Material");
Material468.USE = "SPINAL_COLOR";
Appearance467.material = Material468;

Shape464.appearance = Appearance467;

Transform463.children = new MFNode();

Transform463.children[0] = Shape464;

HAnimSegment462.children = new MFNode();

HAnimSegment462.children[0] = Transform463;

HAnimJoint461.children = new MFNode();

HAnimJoint461.children[0] = HAnimSegment462;

HAnimJoint HAnimJoint469 = createNode("HAnimJoint");
HAnimJoint469.name = "vt8";
HAnimJoint469.DEF = "hanim_vt8";
HAnimJoint469.center = new SFVec3f(new float[0.0057,1.3382,-0.0845]);
HAnimJoint469.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint469.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment470 = createNode("HAnimSegment");
HAnimSegment470.name = "t8";
HAnimSegment470.DEF = "hanim_t8";
Transform Transform471 = createNode("Transform");
Transform471.translation = new SFVec3f(new float[0.0057,1.3382,-0.0845]);
Shape Shape472 = createNode("Shape");
IndexedFaceSet IndexedFaceSet473 = createNode("IndexedFaceSet");
IndexedFaceSet473.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet473.creaseAngle = 0.5;
Coordinate Coordinate474 = createNode("Coordinate");
Coordinate474.USE = "points";
IndexedFaceSet473.coord = Coordinate474;

Shape472.geometry = IndexedFaceSet473;

Appearance Appearance475 = createNode("Appearance");
Material Material476 = createNode("Material");
Material476.USE = "SPINAL_COLOR";
Appearance475.material = Material476;

Shape472.appearance = Appearance475;

Transform471.children = new MFNode();

Transform471.children[0] = Shape472;

HAnimSegment470.children = new MFNode();

HAnimSegment470.children[0] = Transform471;

HAnimJoint469.children = new MFNode();

HAnimJoint469.children[0] = HAnimSegment470;

HAnimJoint HAnimJoint477 = createNode("HAnimJoint");
HAnimJoint477.name = "vt7";
HAnimJoint477.DEF = "hanim_vt7";
HAnimJoint477.center = new SFVec3f(new float[0.0058,1.3625,-0.0833]);
HAnimJoint477.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint477.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment478 = createNode("HAnimSegment");
HAnimSegment478.name = "t7";
HAnimSegment478.DEF = "hanim_t7";
Transform Transform479 = createNode("Transform");
Transform479.translation = new SFVec3f(new float[0.0058,1.3625,-0.0833]);
Shape Shape480 = createNode("Shape");
IndexedFaceSet IndexedFaceSet481 = createNode("IndexedFaceSet");
IndexedFaceSet481.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet481.creaseAngle = 0.5;
Coordinate Coordinate482 = createNode("Coordinate");
Coordinate482.USE = "points";
IndexedFaceSet481.coord = Coordinate482;

Shape480.geometry = IndexedFaceSet481;

Appearance Appearance483 = createNode("Appearance");
Material Material484 = createNode("Material");
Material484.USE = "SPINAL_COLOR";
Appearance483.material = Material484;

Shape480.appearance = Appearance483;

Transform479.children = new MFNode();

Transform479.children[0] = Shape480;

HAnimSegment478.children = new MFNode();

HAnimSegment478.children[0] = Transform479;

HAnimJoint477.children = new MFNode();

HAnimJoint477.children[0] = HAnimSegment478;

HAnimJoint HAnimJoint485 = createNode("HAnimJoint");
HAnimJoint485.name = "vt6";
HAnimJoint485.DEF = "hanim_vt6";
HAnimJoint485.center = new SFVec3f(new float[0.0059,1.3866,-0.08]);
HAnimJoint485.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint485.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment486 = createNode("HAnimSegment");
HAnimSegment486.name = "t6";
HAnimSegment486.DEF = "hanim_t6";
Transform Transform487 = createNode("Transform");
Transform487.translation = new SFVec3f(new float[0.0059,1.3866,-0.08]);
Shape Shape488 = createNode("Shape");
IndexedFaceSet IndexedFaceSet489 = createNode("IndexedFaceSet");
IndexedFaceSet489.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet489.creaseAngle = 0.5;
Coordinate Coordinate490 = createNode("Coordinate");
Coordinate490.USE = "points";
IndexedFaceSet489.coord = Coordinate490;

Shape488.geometry = IndexedFaceSet489;

Appearance Appearance491 = createNode("Appearance");
Material Material492 = createNode("Material");
Material492.USE = "REC_SPINAL_COLOR";
Appearance491.material = Material492;

Shape488.appearance = Appearance491;

Transform487.children = new MFNode();

Transform487.children[0] = Shape488;

HAnimSegment486.children = new MFNode();

HAnimSegment486.children[0] = Transform487;

HAnimJoint485.children = new MFNode();

HAnimJoint485.children[0] = HAnimSegment486;

HAnimJoint HAnimJoint493 = createNode("HAnimJoint");
HAnimJoint493.name = "vt5";
HAnimJoint493.DEF = "hanim_vt5";
HAnimJoint493.center = new SFVec3f(new float[0.006,1.4102,-0.0745]);
HAnimJoint493.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint493.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment494 = createNode("HAnimSegment");
HAnimSegment494.name = "t5";
HAnimSegment494.DEF = "hanim_t5";
Transform Transform495 = createNode("Transform");
Transform495.translation = new SFVec3f(new float[0.006,1.4102,-0.0745]);
Shape Shape496 = createNode("Shape");
IndexedFaceSet IndexedFaceSet497 = createNode("IndexedFaceSet");
IndexedFaceSet497.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet497.creaseAngle = 0.5;
Coordinate Coordinate498 = createNode("Coordinate");
Coordinate498.USE = "points";
IndexedFaceSet497.coord = Coordinate498;

Shape496.geometry = IndexedFaceSet497;

Appearance Appearance499 = createNode("Appearance");
Material Material500 = createNode("Material");
Material500.USE = "SPINAL_COLOR";
Appearance499.material = Material500;

Shape496.appearance = Appearance499;

Transform495.children = new MFNode();

Transform495.children[0] = Shape496;

HAnimSegment494.children = new MFNode();

HAnimSegment494.children[0] = Transform495;

HAnimJoint493.children = new MFNode();

HAnimJoint493.children[0] = HAnimSegment494;

HAnimJoint HAnimJoint501 = createNode("HAnimJoint");
HAnimJoint501.name = "vt4";
HAnimJoint501.DEF = "hanim_vt4";
HAnimJoint501.center = new SFVec3f(new float[0.0061,1.432,-0.0675]);
HAnimJoint501.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint501.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment502 = createNode("HAnimSegment");
HAnimSegment502.name = "t4";
HAnimSegment502.DEF = "hanim_t4";
Transform Transform503 = createNode("Transform");
Transform503.translation = new SFVec3f(new float[0.0061,1.432,-0.0675]);
Shape Shape504 = createNode("Shape");
IndexedFaceSet IndexedFaceSet505 = createNode("IndexedFaceSet");
IndexedFaceSet505.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet505.creaseAngle = 0.5;
Coordinate Coordinate506 = createNode("Coordinate");
Coordinate506.USE = "points";
IndexedFaceSet505.coord = Coordinate506;

Shape504.geometry = IndexedFaceSet505;

Appearance Appearance507 = createNode("Appearance");
Material Material508 = createNode("Material");
Material508.USE = "SPINAL_COLOR";
Appearance507.material = Material508;

Shape504.appearance = Appearance507;

Transform503.children = new MFNode();

Transform503.children[0] = Shape504;

HAnimSegment502.children = new MFNode();

HAnimSegment502.children[0] = Transform503;

HAnimJoint501.children = new MFNode();

HAnimJoint501.children[0] = HAnimSegment502;

HAnimJoint HAnimJoint509 = createNode("HAnimJoint");
HAnimJoint509.name = "vt3";
HAnimJoint509.DEF = "hanim_vt3";
HAnimJoint509.center = new SFVec3f(new float[0.0062,1.4583,-0.057]);
HAnimJoint509.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint509.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment510 = createNode("HAnimSegment");
HAnimSegment510.name = "t3";
HAnimSegment510.DEF = "hanim_t3";
Transform Transform511 = createNode("Transform");
Transform511.translation = new SFVec3f(new float[0.0062,1.4583,-0.057]);
Shape Shape512 = createNode("Shape");
IndexedFaceSet IndexedFaceSet513 = createNode("IndexedFaceSet");
IndexedFaceSet513.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet513.creaseAngle = 0.5;
Coordinate Coordinate514 = createNode("Coordinate");
Coordinate514.USE = "points";
IndexedFaceSet513.coord = Coordinate514;

Shape512.geometry = IndexedFaceSet513;

Appearance Appearance515 = createNode("Appearance");
Material Material516 = createNode("Material");
Material516.USE = "SPINAL_COLOR";
Appearance515.material = Material516;

Shape512.appearance = Appearance515;

Transform511.children = new MFNode();

Transform511.children[0] = Shape512;

HAnimSegment510.children = new MFNode();

HAnimSegment510.children[0] = Transform511;

HAnimJoint509.children = new MFNode();

HAnimJoint509.children[0] = HAnimSegment510;

HAnimJoint HAnimJoint517 = createNode("HAnimJoint");
HAnimJoint517.name = "vt2";
HAnimJoint517.DEF = "hanim_vt2";
HAnimJoint517.center = new SFVec3f(new float[0.0063,1.4761,-0.0484]);
HAnimJoint517.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint517.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment518 = createNode("HAnimSegment");
HAnimSegment518.name = "t2";
HAnimSegment518.DEF = "hanim_t2";
Transform Transform519 = createNode("Transform");
Transform519.translation = new SFVec3f(new float[0.0063,1.4761,-0.0484]);
Shape Shape520 = createNode("Shape");
IndexedFaceSet IndexedFaceSet521 = createNode("IndexedFaceSet");
IndexedFaceSet521.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet521.creaseAngle = 0.5;
Coordinate Coordinate522 = createNode("Coordinate");
Coordinate522.USE = "points";
IndexedFaceSet521.coord = Coordinate522;

Shape520.geometry = IndexedFaceSet521;

Appearance Appearance523 = createNode("Appearance");
Material Material524 = createNode("Material");
Material524.USE = "SPINAL_COLOR";
Appearance523.material = Material524;

Shape520.appearance = Appearance523;

Transform519.children = new MFNode();

Transform519.children[0] = Shape520;

HAnimSegment518.children = new MFNode();

HAnimSegment518.children[0] = Transform519;

HAnimJoint517.children = new MFNode();

HAnimJoint517.children[0] = HAnimSegment518;

HAnimJoint HAnimJoint525 = createNode("HAnimJoint");
HAnimJoint525.name = "vt1";
HAnimJoint525.DEF = "hanim_vt1";
HAnimJoint525.center = new SFVec3f(new float[0.0065,1.4951,-0.0387]);
HAnimJoint525.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint525.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment526 = createNode("HAnimSegment");
HAnimSegment526.name = "t1";
HAnimSegment526.DEF = "hanim_t1";
Transform Transform527 = createNode("Transform");
Transform527.translation = new SFVec3f(new float[0.0065,1.4951,-0.0387]);
Shape Shape528 = createNode("Shape");
IndexedFaceSet IndexedFaceSet529 = createNode("IndexedFaceSet");
IndexedFaceSet529.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet529.creaseAngle = 0.5;
Coordinate Coordinate530 = createNode("Coordinate");
Coordinate530.USE = "points";
IndexedFaceSet529.coord = Coordinate530;

Shape528.geometry = IndexedFaceSet529;

Appearance Appearance531 = createNode("Appearance");
Material Material532 = createNode("Material");
Material532.USE = "REC_SPINAL_COLOR";
Appearance531.material = Material532;

Shape528.appearance = Appearance531;

Transform527.children = new MFNode();

Transform527.children[0] = Shape528;

HAnimSegment526.children = new MFNode();

HAnimSegment526.children[0] = Transform527;

HAnimJoint525.children = new MFNode();

HAnimJoint525.children[0] = HAnimSegment526;

HAnimJoint HAnimJoint533 = createNode("HAnimJoint");
HAnimJoint533.name = "l_shoulder";
HAnimJoint533.DEF = "hanim_l_shoulder";
HAnimJoint533.center = new SFVec3f(new float[0.2029,1.4376,-0.0387]);
HAnimJoint533.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint533.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment534 = createNode("HAnimSegment");
HAnimSegment534.name = "l_upperarm";
HAnimSegment534.DEF = "hanim_l_upperarm";
Transform Transform535 = createNode("Transform");
Transform535.translation = new SFVec3f(new float[0.2029,1.4376,-0.0387]);
Shape Shape536 = createNode("Shape");
IndexedFaceSet IndexedFaceSet537 = createNode("IndexedFaceSet");
IndexedFaceSet537.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet537.creaseAngle = 0.5;
Coordinate Coordinate538 = createNode("Coordinate");
Coordinate538.USE = "points";
IndexedFaceSet537.coord = Coordinate538;

Shape536.geometry = IndexedFaceSet537;

Appearance Appearance539 = createNode("Appearance");
Material Material540 = createNode("Material");
Material540.USE = "MIN_COLOR";
Appearance539.material = Material540;

Shape536.appearance = Appearance539;

Transform535.children = new MFNode();

Transform535.children[0] = Shape536;

HAnimSegment534.children = new MFNode();

HAnimSegment534.children[0] = Transform535;

Transform Transform541 = createNode("Transform");
Transform541.DEF = "l_upperarm_adjust";
Transform541.center = new SFVec3f(new float[0.182,1.22,-0.047]);
Transform541.rotation = new SFRotation(new float[1,0,0,0.119]);
Transform541.translation = new SFVec3f(new float[0.2029,1.4376,-0.0387]);
HAnimSegment534.children[1] = Transform541;

HAnimSite HAnimSite542 = createNode("HAnimSite");
HAnimSite542.name = "l_humeral_lateral_epicn_pt";
HAnimSite542.DEF = "hanim_l_humeral_lateral_epicn_pt";
HAnimSite542.translation = new SFVec3f(new float[0.228,1.1482,-0.11]);
Shape Shape543 = createNode("Shape");
IndexedFaceSet IndexedFaceSet544 = createNode("IndexedFaceSet");
IndexedFaceSet544.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet544.creaseAngle = 0.5;
Coordinate Coordinate545 = createNode("Coordinate");
Coordinate545.USE = "points";
IndexedFaceSet544.coord = Coordinate545;

Shape543.geometry = IndexedFaceSet544;

Appearance Appearance546 = createNode("Appearance");
Material Material547 = createNode("Material");
Material547.USE = "SITE_COLOR";
Appearance546.material = Material547;

Shape543.appearance = Appearance546;

HAnimSite542.children = new MFNode();

HAnimSite542.children[0] = Shape543;

HAnimSegment534.children[2] = HAnimSite542;

HAnimJoint533.children = new MFNode();

HAnimJoint533.children[0] = HAnimSegment534;

HAnimJoint HAnimJoint548 = createNode("HAnimJoint");
HAnimJoint548.name = "l_elbow";
HAnimJoint548.DEF = "hanim_l_elbow";
HAnimJoint548.center = new SFVec3f(new float[0.2014,1.1357,-0.0682]);
HAnimJoint548.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint548.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment549 = createNode("HAnimSegment");
HAnimSegment549.name = "l_forearm";
HAnimSegment549.DEF = "hanim_l_forearm";
Transform Transform550 = createNode("Transform");
Transform550.translation = new SFVec3f(new float[0.2014,1.1357,-0.0682]);
Shape Shape551 = createNode("Shape");
IndexedFaceSet IndexedFaceSet552 = createNode("IndexedFaceSet");
IndexedFaceSet552.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet552.creaseAngle = 0.5;
Coordinate Coordinate553 = createNode("Coordinate");
Coordinate553.USE = "points";
IndexedFaceSet552.coord = Coordinate553;

Shape551.geometry = IndexedFaceSet552;

Appearance Appearance554 = createNode("Appearance");
Material Material555 = createNode("Material");
Material555.USE = "MIN_COLOR";
Appearance554.material = Material555;

Shape551.appearance = Appearance554;

Transform550.children = new MFNode();

Transform550.children[0] = Shape551;

HAnimSegment549.children = new MFNode();

HAnimSegment549.children[0] = Transform550;

Transform Transform556 = createNode("Transform");
Transform556.DEF = "l_forearm_adjust";
Transform556.center = new SFVec3f(new float[0.198,0.961,-0.0405]);
Transform556.rotation = new SFRotation(new float[-1,0,0,0.1]);
Transform556.translation = new SFVec3f(new float[0.2014,1.1357,-0.0682]);
HAnimSegment549.children[1] = Transform556;

HAnimSite HAnimSite557 = createNode("HAnimSite");
HAnimSite557.name = "l_radial_styloid_pt";
HAnimSite557.DEF = "hanim_l_radial_styloid_pt";
HAnimSite557.translation = new SFVec3f(new float[0.1901,0.8645,-0.0415]);
Shape Shape558 = createNode("Shape");
IndexedFaceSet IndexedFaceSet559 = createNode("IndexedFaceSet");
IndexedFaceSet559.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet559.creaseAngle = 0.5;
Coordinate Coordinate560 = createNode("Coordinate");
Coordinate560.USE = "points";
IndexedFaceSet559.coord = Coordinate560;

Shape558.geometry = IndexedFaceSet559;

Appearance Appearance561 = createNode("Appearance");
Material Material562 = createNode("Material");
Material562.USE = "SITE_COLOR";
Appearance561.material = Material562;

Shape558.appearance = Appearance561;

HAnimSite557.children = new MFNode();

HAnimSite557.children[0] = Shape558;

HAnimSegment549.children[2] = HAnimSite557;

HAnimSite HAnimSite563 = createNode("HAnimSite");
HAnimSite563.name = "l_olecranon_pt";
HAnimSite563.DEF = "hanim_l_olecranon_pt";
HAnimSite563.translation = new SFVec3f(new float[-0.1962,1.1375,-0.1123]);
Shape Shape564 = createNode("Shape");
IndexedFaceSet IndexedFaceSet565 = createNode("IndexedFaceSet");
IndexedFaceSet565.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet565.creaseAngle = 0.5;
Coordinate Coordinate566 = createNode("Coordinate");
Coordinate566.USE = "points";
IndexedFaceSet565.coord = Coordinate566;

Shape564.geometry = IndexedFaceSet565;

Appearance Appearance567 = createNode("Appearance");
Material Material568 = createNode("Material");
Material568.USE = "SITE_COLOR";
Appearance567.material = Material568;

Shape564.appearance = Appearance567;

HAnimSite563.children = new MFNode();

HAnimSite563.children[0] = Shape564;

HAnimSegment549.children[3] = HAnimSite563;

HAnimSite HAnimSite569 = createNode("HAnimSite");
HAnimSite569.name = "l_humeral_medial_epicn_pt";
HAnimSite569.DEF = "hanim_l_humeral_medial_epicn_pt";
HAnimSite569.translation = new SFVec3f(new float[0.1735,1.1272,-0.1113]);
Shape Shape570 = createNode("Shape");
IndexedFaceSet IndexedFaceSet571 = createNode("IndexedFaceSet");
IndexedFaceSet571.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet571.creaseAngle = 0.5;
Coordinate Coordinate572 = createNode("Coordinate");
Coordinate572.USE = "points";
IndexedFaceSet571.coord = Coordinate572;

Shape570.geometry = IndexedFaceSet571;

Appearance Appearance573 = createNode("Appearance");
Material Material574 = createNode("Material");
Material574.USE = "SITE_COLOR";
Appearance573.material = Material574;

Shape570.appearance = Appearance573;

HAnimSite569.children = new MFNode();

HAnimSite569.children[0] = Shape570;

HAnimSegment549.children[4] = HAnimSite569;

HAnimSite HAnimSite575 = createNode("HAnimSite");
HAnimSite575.name = "l_radiale_pt";
HAnimSite575.DEF = "hanim_l_radiale_pt";
HAnimSite575.translation = new SFVec3f(new float[0.2182,1.1212,-0.1167]);
Shape Shape576 = createNode("Shape");
IndexedFaceSet IndexedFaceSet577 = createNode("IndexedFaceSet");
IndexedFaceSet577.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet577.creaseAngle = 0.5;
Coordinate Coordinate578 = createNode("Coordinate");
Coordinate578.USE = "points";
IndexedFaceSet577.coord = Coordinate578;

Shape576.geometry = IndexedFaceSet577;

Appearance Appearance579 = createNode("Appearance");
Material Material580 = createNode("Material");
Material580.USE = "SITE_COLOR";
Appearance579.material = Material580;

Shape576.appearance = Appearance579;

HAnimSite575.children = new MFNode();

HAnimSite575.children[0] = Shape576;

HAnimSegment549.children[5] = HAnimSite575;

HAnimJoint548.children = new MFNode();

HAnimJoint548.children[0] = HAnimSegment549;

HAnimJoint HAnimJoint581 = createNode("HAnimJoint");
HAnimJoint581.name = "l_wrist";
HAnimJoint581.DEF = "hanim_l_wrist";
HAnimJoint581.center = new SFVec3f(new float[0.1984,0.8663,-0.0583]);
HAnimJoint581.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint581.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment582 = createNode("HAnimSegment");
HAnimSegment582.name = "l_hand";
HAnimSegment582.DEF = "hanim_l_hand";
Transform Transform583 = createNode("Transform");
Transform583.translation = new SFVec3f(new float[0.1984,0.8663,-0.0583]);
Shape Shape584 = createNode("Shape");
IndexedFaceSet IndexedFaceSet585 = createNode("IndexedFaceSet");
IndexedFaceSet585.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet585.creaseAngle = 0.5;
Coordinate Coordinate586 = createNode("Coordinate");
Coordinate586.USE = "points";
IndexedFaceSet585.coord = Coordinate586;

Shape584.geometry = IndexedFaceSet585;

Appearance Appearance587 = createNode("Appearance");
Material Material588 = createNode("Material");
Material588.USE = "MIN_COLOR";
Appearance587.material = Material588;

Shape584.appearance = Appearance587;

Transform583.children = new MFNode();

Transform583.children[0] = Shape584;

HAnimSegment582.children = new MFNode();

HAnimSegment582.children[0] = Transform583;

Transform Transform589 = createNode("Transform");
Transform589.DEF = "l_hand_adjust";
Transform589.center = new SFVec3f(new float[0.213,0.811,-0.0338]);
Transform589.rotation = new SFRotation(new float[-0.06361,-0.9967,0.04988,1.333]);
Transform589.translation = new SFVec3f(new float[0.1984,0.8663,-0.0583]);
HAnimSegment582.children[1] = Transform589;

HAnimSite HAnimSite590 = createNode("HAnimSite");
HAnimSite590.name = "l_hand_tip";
HAnimSite590.DEF = "hanim_l_hand_tip";
HAnimSite590.translation = new SFVec3f(new float[0.208,0.6731,-0.0491]);
Shape Shape591 = createNode("Shape");
IndexedFaceSet IndexedFaceSet592 = createNode("IndexedFaceSet");
IndexedFaceSet592.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet592.creaseAngle = 0.5;
Coordinate Coordinate593 = createNode("Coordinate");
Coordinate593.USE = "points";
IndexedFaceSet592.coord = Coordinate593;

Shape591.geometry = IndexedFaceSet592;

Appearance Appearance594 = createNode("Appearance");
Material Material595 = createNode("Material");
Material595.USE = "SITE_COLOR";
Appearance594.material = Material595;

Shape591.appearance = Appearance594;

HAnimSite590.children = new MFNode();

HAnimSite590.children[0] = Shape591;

HAnimSegment582.children[2] = HAnimSite590;

HAnimSite HAnimSite596 = createNode("HAnimSite");
HAnimSite596.name = "l_metacarpal_pha2_pt";
HAnimSite596.DEF = "hanim_l_metacarpal_pha2_pt";
HAnimSite596.translation = new SFVec3f(new float[0.2009,0.8139,-0.0237]);
Shape Shape597 = createNode("Shape");
IndexedFaceSet IndexedFaceSet598 = createNode("IndexedFaceSet");
IndexedFaceSet598.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet598.creaseAngle = 0.5;
Coordinate Coordinate599 = createNode("Coordinate");
Coordinate599.USE = "points";
IndexedFaceSet598.coord = Coordinate599;

Shape597.geometry = IndexedFaceSet598;

Appearance Appearance600 = createNode("Appearance");
Material Material601 = createNode("Material");
Material601.USE = "SITE_COLOR";
Appearance600.material = Material601;

Shape597.appearance = Appearance600;

HAnimSite596.children = new MFNode();

HAnimSite596.children[0] = Shape597;

HAnimSegment582.children[3] = HAnimSite596;

HAnimSite HAnimSite602 = createNode("HAnimSite");
HAnimSite602.name = "l_dactylion_pt";
HAnimSite602.DEF = "hanim_l_dactylion_pt";
HAnimSite602.translation = new SFVec3f(new float[0.2056,0.6743,-0.0482]);
Shape Shape603 = createNode("Shape");
IndexedFaceSet IndexedFaceSet604 = createNode("IndexedFaceSet");
IndexedFaceSet604.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet604.creaseAngle = 0.5;
Coordinate Coordinate605 = createNode("Coordinate");
Coordinate605.USE = "points";
IndexedFaceSet604.coord = Coordinate605;

Shape603.geometry = IndexedFaceSet604;

Appearance Appearance606 = createNode("Appearance");
Material Material607 = createNode("Material");
Material607.USE = "SITE_COLOR";
Appearance606.material = Material607;

Shape603.appearance = Appearance606;

HAnimSite602.children = new MFNode();

HAnimSite602.children[0] = Shape603;

HAnimSegment582.children[4] = HAnimSite602;

HAnimSite HAnimSite608 = createNode("HAnimSite");
HAnimSite608.name = "l_ulnar_styloid_pt";
HAnimSite608.DEF = "hanim_l_ulnar_styloid_pt";
HAnimSite608.translation = new SFVec3f(new float[-0.2142,0.8529,-0.0648]);
Shape Shape609 = createNode("Shape");
IndexedFaceSet IndexedFaceSet610 = createNode("IndexedFaceSet");
IndexedFaceSet610.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet610.creaseAngle = 0.5;
Coordinate Coordinate611 = createNode("Coordinate");
Coordinate611.USE = "points";
IndexedFaceSet610.coord = Coordinate611;

Shape609.geometry = IndexedFaceSet610;

Appearance Appearance612 = createNode("Appearance");
Material Material613 = createNode("Material");
Material613.USE = "SITE_COLOR";
Appearance612.material = Material613;

Shape609.appearance = Appearance612;

HAnimSite608.children = new MFNode();

HAnimSite608.children[0] = Shape609;

HAnimSegment582.children[5] = HAnimSite608;

HAnimSite HAnimSite614 = createNode("HAnimSite");
HAnimSite614.name = "l_metacarpal_pha5_pt";
HAnimSite614.DEF = "hanim_l_metacarpal_pha5_pt";
HAnimSite614.translation = new SFVec3f(new float[0.1929,0.786,-0.1122]);
Shape Shape615 = createNode("Shape");
IndexedFaceSet IndexedFaceSet616 = createNode("IndexedFaceSet");
IndexedFaceSet616.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet616.creaseAngle = 0.5;
Coordinate Coordinate617 = createNode("Coordinate");
Coordinate617.USE = "points";
IndexedFaceSet616.coord = Coordinate617;

Shape615.geometry = IndexedFaceSet616;

Appearance Appearance618 = createNode("Appearance");
Material Material619 = createNode("Material");
Material619.USE = "SITE_COLOR";
Appearance618.material = Material619;

Shape615.appearance = Appearance618;

HAnimSite614.children = new MFNode();

HAnimSite614.children[0] = Shape615;

HAnimSegment582.children[6] = HAnimSite614;

HAnimJoint581.children = new MFNode();

HAnimJoint581.children[0] = HAnimSegment582;

HAnimJoint HAnimJoint620 = createNode("HAnimJoint");
HAnimJoint620.name = "l_thumb1";
HAnimJoint620.DEF = "hanim_l_thumb1";
HAnimJoint620.center = new SFVec3f(new float[0.1924,0.8472,-0.0534]);
HAnimJoint620.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint620.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment621 = createNode("HAnimSegment");
HAnimSegment621.name = "l_thumb_metacarpal";
HAnimSegment621.DEF = "hanim_l_thumb_metacarpal";
Transform Transform622 = createNode("Transform");
Transform622.translation = new SFVec3f(new float[0.1924,0.8472,-0.0534]);
Shape Shape623 = createNode("Shape");
IndexedFaceSet IndexedFaceSet624 = createNode("IndexedFaceSet");
IndexedFaceSet624.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet624.creaseAngle = 0.5;
Coordinate Coordinate625 = createNode("Coordinate");
Coordinate625.USE = "points";
IndexedFaceSet624.coord = Coordinate625;

Shape623.geometry = IndexedFaceSet624;

Appearance Appearance626 = createNode("Appearance");
Material Material627 = createNode("Material");
Material627.USE = "JOINT_COLOR";
Appearance626.material = Material627;

Shape623.appearance = Appearance626;

Transform622.children = new MFNode();

Transform622.children[0] = Shape623;

HAnimSegment621.children = new MFNode();

HAnimSegment621.children[0] = Transform622;

HAnimJoint620.children = new MFNode();

HAnimJoint620.children[0] = HAnimSegment621;

HAnimJoint HAnimJoint628 = createNode("HAnimJoint");
HAnimJoint628.name = "l_thumb2";
HAnimJoint628.DEF = "hanim_l_thumb2";
HAnimJoint628.center = new SFVec3f(new float[0.1951,0.8226,0.0246]);
HAnimJoint628.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint628.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment629 = createNode("HAnimSegment");
HAnimSegment629.name = "l_thumb_proximal";
HAnimSegment629.DEF = "hanim_l_thumb_proximal";
Transform Transform630 = createNode("Transform");
Transform630.translation = new SFVec3f(new float[0.1951,0.8226,0.0246]);
Shape Shape631 = createNode("Shape");
IndexedFaceSet IndexedFaceSet632 = createNode("IndexedFaceSet");
IndexedFaceSet632.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet632.creaseAngle = 0.5;
Coordinate Coordinate633 = createNode("Coordinate");
Coordinate633.USE = "points";
IndexedFaceSet632.coord = Coordinate633;

Shape631.geometry = IndexedFaceSet632;

Appearance Appearance634 = createNode("Appearance");
Material Material635 = createNode("Material");
Material635.USE = "JOINT_COLOR";
Appearance634.material = Material635;

Shape631.appearance = Appearance634;

Transform630.children = new MFNode();

Transform630.children[0] = Shape631;

HAnimSegment629.children = new MFNode();

HAnimSegment629.children[0] = Transform630;

HAnimJoint628.children = new MFNode();

HAnimJoint628.children[0] = HAnimSegment629;

HAnimJoint HAnimJoint636 = createNode("HAnimJoint");
HAnimJoint636.name = "l_thumb3";
HAnimJoint636.DEF = "hanim_l_thumb3";
HAnimJoint636.center = new SFVec3f(new float[0.1955,0.8159,0.0464]);
HAnimJoint636.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint636.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment637 = createNode("HAnimSegment");
HAnimSegment637.name = "l_thumb_distal";
HAnimSegment637.DEF = "hanim_l_thumb_distal";
Transform Transform638 = createNode("Transform");
Transform638.translation = new SFVec3f(new float[0.1955,0.8159,0.0464]);
Shape Shape639 = createNode("Shape");
IndexedFaceSet IndexedFaceSet640 = createNode("IndexedFaceSet");
IndexedFaceSet640.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet640.creaseAngle = 0.5;
Coordinate Coordinate641 = createNode("Coordinate");
Coordinate641.USE = "points";
IndexedFaceSet640.coord = Coordinate641;

Shape639.geometry = IndexedFaceSet640;

Appearance Appearance642 = createNode("Appearance");
Material Material643 = createNode("Material");
Material643.USE = "JOINT_COLOR";
Appearance642.material = Material643;

Shape639.appearance = Appearance642;

Transform638.children = new MFNode();

Transform638.children[0] = Shape639;

HAnimSegment637.children = new MFNode();

HAnimSegment637.children[0] = Transform638;

HAnimSite HAnimSite644 = createNode("HAnimSite");
HAnimSite644.name = "l_thumb_distal_tip";
HAnimSite644.DEF = "hanim_l_thumb_distal_tip";
HAnimSite644.translation = new SFVec3f(new float[0.1982,0.8061,0.0759]);
Shape Shape645 = createNode("Shape");
IndexedFaceSet IndexedFaceSet646 = createNode("IndexedFaceSet");
IndexedFaceSet646.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet646.creaseAngle = 0.5;
Coordinate Coordinate647 = createNode("Coordinate");
Coordinate647.USE = "points";
IndexedFaceSet646.coord = Coordinate647;

Shape645.geometry = IndexedFaceSet646;

Appearance Appearance648 = createNode("Appearance");
Material Material649 = createNode("Material");
Material649.USE = "HAND_FEET_COLOR";
Appearance648.material = Material649;

Shape645.appearance = Appearance648;

HAnimSite644.children = new MFNode();

HAnimSite644.children[0] = Shape645;

HAnimSegment637.children[1] = HAnimSite644;

HAnimJoint636.children = new MFNode();

HAnimJoint636.children[0] = HAnimSegment637;

HAnimJoint628.children[1] = HAnimJoint636;

HAnimJoint620.children[1] = HAnimJoint628;

HAnimJoint581.children[1] = HAnimJoint620;

HAnimJoint HAnimJoint650 = createNode("HAnimJoint");
HAnimJoint650.name = "l_index0";
HAnimJoint650.DEF = "hanim_l_index0";
HAnimJoint650.center = new SFVec3f(new float[0.1983,0.8024,-0.028]);
HAnimJoint650.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint650.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment651 = createNode("HAnimSegment");
HAnimSegment651.name = "l_index_metacarpal";
HAnimSegment651.DEF = "hanim_l_index_metacarpal";
Transform Transform652 = createNode("Transform");
Transform652.translation = new SFVec3f(new float[0.1983,0.8024,-0.028]);
Shape Shape653 = createNode("Shape");
IndexedFaceSet IndexedFaceSet654 = createNode("IndexedFaceSet");
IndexedFaceSet654.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet654.creaseAngle = 0.5;
Coordinate Coordinate655 = createNode("Coordinate");
Coordinate655.USE = "points";
IndexedFaceSet654.coord = Coordinate655;

Shape653.geometry = IndexedFaceSet654;

Appearance Appearance656 = createNode("Appearance");
Material Material657 = createNode("Material");
Material657.USE = "JOINT_COLOR";
Appearance656.material = Material657;

Shape653.appearance = Appearance656;

Transform652.children = new MFNode();

Transform652.children[0] = Shape653;

HAnimSegment651.children = new MFNode();

HAnimSegment651.children[0] = Transform652;

HAnimJoint650.children = new MFNode();

HAnimJoint650.children[0] = HAnimSegment651;

HAnimJoint HAnimJoint658 = createNode("HAnimJoint");
HAnimJoint658.name = "l_index1";
HAnimJoint658.DEF = "hanim_l_index1";
HAnimJoint658.center = new SFVec3f(new float[0.1983,0.7815,-0.028]);
HAnimJoint658.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint658.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment659 = createNode("HAnimSegment");
HAnimSegment659.name = "l_index_proximal";
HAnimSegment659.DEF = "hanim_l_index_proximal";
Transform Transform660 = createNode("Transform");
Transform660.translation = new SFVec3f(new float[0.1983,0.7815,-0.028]);
Shape Shape661 = createNode("Shape");
IndexedFaceSet IndexedFaceSet662 = createNode("IndexedFaceSet");
IndexedFaceSet662.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet662.creaseAngle = 0.5;
Coordinate Coordinate663 = createNode("Coordinate");
Coordinate663.USE = "points";
IndexedFaceSet662.coord = Coordinate663;

Shape661.geometry = IndexedFaceSet662;

Appearance Appearance664 = createNode("Appearance");
Material Material665 = createNode("Material");
Material665.USE = "JOINT_COLOR";
Appearance664.material = Material665;

Shape661.appearance = Appearance664;

Transform660.children = new MFNode();

Transform660.children[0] = Shape661;

HAnimSegment659.children = new MFNode();

HAnimSegment659.children[0] = Transform660;

HAnimJoint658.children = new MFNode();

HAnimJoint658.children[0] = HAnimSegment659;

HAnimJoint HAnimJoint666 = createNode("HAnimJoint");
HAnimJoint666.name = "l_index2";
HAnimJoint666.DEF = "hanim_l_index2";
HAnimJoint666.center = new SFVec3f(new float[0.2017,0.7363,-0.0248]);
HAnimJoint666.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint666.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment667 = createNode("HAnimSegment");
HAnimSegment667.name = "l_index_middle";
HAnimSegment667.DEF = "hanim_l_index_middle";
Transform Transform668 = createNode("Transform");
Transform668.translation = new SFVec3f(new float[0.2017,0.7363,-0.0248]);
Shape Shape669 = createNode("Shape");
IndexedFaceSet IndexedFaceSet670 = createNode("IndexedFaceSet");
IndexedFaceSet670.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet670.creaseAngle = 0.5;
Coordinate Coordinate671 = createNode("Coordinate");
Coordinate671.USE = "points";
IndexedFaceSet670.coord = Coordinate671;

Shape669.geometry = IndexedFaceSet670;

Appearance Appearance672 = createNode("Appearance");
Material Material673 = createNode("Material");
Material673.USE = "JOINT_COLOR";
Appearance672.material = Material673;

Shape669.appearance = Appearance672;

Transform668.children = new MFNode();

Transform668.children[0] = Shape669;

HAnimSegment667.children = new MFNode();

HAnimSegment667.children[0] = Transform668;

HAnimJoint666.children = new MFNode();

HAnimJoint666.children[0] = HAnimSegment667;

HAnimJoint HAnimJoint674 = createNode("HAnimJoint");
HAnimJoint674.name = "l_index3";
HAnimJoint674.DEF = "hanim_l_index3";
HAnimJoint674.center = new SFVec3f(new float[0.2028,0.7139,-0.0236]);
HAnimJoint674.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint674.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment675 = createNode("HAnimSegment");
HAnimSegment675.name = "l_index_distal";
HAnimSegment675.DEF = "hanim_l_index_distal";
Transform Transform676 = createNode("Transform");
Transform676.translation = new SFVec3f(new float[0.2028,0.7139,-0.0236]);
Shape Shape677 = createNode("Shape");
IndexedFaceSet IndexedFaceSet678 = createNode("IndexedFaceSet");
IndexedFaceSet678.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet678.creaseAngle = 0.5;
Coordinate Coordinate679 = createNode("Coordinate");
Coordinate679.USE = "points";
IndexedFaceSet678.coord = Coordinate679;

Shape677.geometry = IndexedFaceSet678;

Appearance Appearance680 = createNode("Appearance");
Material Material681 = createNode("Material");
Material681.USE = "JOINT_COLOR";
Appearance680.material = Material681;

Shape677.appearance = Appearance680;

Transform676.children = new MFNode();

Transform676.children[0] = Shape677;

HAnimSegment675.children = new MFNode();

HAnimSegment675.children[0] = Transform676;

HAnimSite HAnimSite682 = createNode("HAnimSite");
HAnimSite682.name = "l_index_distal_tip";
HAnimSite682.DEF = "hanim_l_index_distal_tip";
HAnimSite682.translation = new SFVec3f(new float[0.2089,0.6858,-0.0245]);
Shape Shape683 = createNode("Shape");
IndexedFaceSet IndexedFaceSet684 = createNode("IndexedFaceSet");
IndexedFaceSet684.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet684.creaseAngle = 0.5;
Coordinate Coordinate685 = createNode("Coordinate");
Coordinate685.USE = "points";
IndexedFaceSet684.coord = Coordinate685;

Shape683.geometry = IndexedFaceSet684;

Appearance Appearance686 = createNode("Appearance");
Material Material687 = createNode("Material");
Material687.USE = "HAND_FEET_COLOR";
Appearance686.material = Material687;

Shape683.appearance = Appearance686;

HAnimSite682.children = new MFNode();

HAnimSite682.children[0] = Shape683;

HAnimSegment675.children[1] = HAnimSite682;

HAnimJoint674.children = new MFNode();

HAnimJoint674.children[0] = HAnimSegment675;

HAnimJoint666.children[1] = HAnimJoint674;

HAnimJoint658.children[1] = HAnimJoint666;

HAnimJoint650.children[1] = HAnimJoint658;

HAnimJoint581.children[2] = HAnimJoint650;

HAnimJoint548.children[1] = HAnimJoint581;

HAnimJoint533.children[1] = HAnimJoint548;

HAnimJoint525.children[1] = HAnimJoint533;

HAnimJoint HAnimJoint688 = createNode("HAnimJoint");
HAnimJoint688.name = "r_shoulder";
HAnimJoint688.DEF = "hanim_r_shoulder";
HAnimJoint688.center = new SFVec3f(new float[-0.1907,1.4407,-0.0325]);
HAnimJoint688.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint688.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment689 = createNode("HAnimSegment");
HAnimSegment689.name = "r_upperarm";
HAnimSegment689.DEF = "hanim_r_upperarm";
Transform Transform690 = createNode("Transform");
Transform690.translation = new SFVec3f(new float[-0.1907,1.4407,-0.0325]);
Shape Shape691 = createNode("Shape");
IndexedFaceSet IndexedFaceSet692 = createNode("IndexedFaceSet");
IndexedFaceSet692.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet692.creaseAngle = 0.5;
Coordinate Coordinate693 = createNode("Coordinate");
Coordinate693.USE = "points";
IndexedFaceSet692.coord = Coordinate693;

Shape691.geometry = IndexedFaceSet692;

Appearance Appearance694 = createNode("Appearance");
Material Material695 = createNode("Material");
Material695.USE = "MIN_COLOR";
Appearance694.material = Material695;

Shape691.appearance = Appearance694;

Transform690.children = new MFNode();

Transform690.children[0] = Shape691;

HAnimSegment689.children = new MFNode();

HAnimSegment689.children[0] = Transform690;

Transform Transform696 = createNode("Transform");
Transform696.DEF = "r_upperarm_adjust";
Transform696.center = new SFVec3f(new float[-0.182,1.22,-0.047]);
Transform696.rotation = new SFRotation(new float[1,0,0,0.0836]);
Transform696.translation = new SFVec3f(new float[-0.1907,1.4407,-0.0325]);
HAnimSegment689.children[1] = Transform696;

HAnimSite HAnimSite697 = createNode("HAnimSite");
HAnimSite697.name = "r_humeral_lateral_epicn_pt";
HAnimSite697.DEF = "hanim_r_humeral_lateral_epicn_pt";
HAnimSite697.translation = new SFVec3f(new float[-0.2224,1.1517,-0.1033]);
Shape Shape698 = createNode("Shape");
IndexedFaceSet IndexedFaceSet699 = createNode("IndexedFaceSet");
IndexedFaceSet699.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet699.creaseAngle = 0.5;
Coordinate Coordinate700 = createNode("Coordinate");
Coordinate700.USE = "points";
IndexedFaceSet699.coord = Coordinate700;

Shape698.geometry = IndexedFaceSet699;

Appearance Appearance701 = createNode("Appearance");
Material Material702 = createNode("Material");
Material702.USE = "SITE_COLOR";
Appearance701.material = Material702;

Shape698.appearance = Appearance701;

HAnimSite697.children = new MFNode();

HAnimSite697.children[0] = Shape698;

HAnimSegment689.children[2] = HAnimSite697;

HAnimJoint688.children = new MFNode();

HAnimJoint688.children[0] = HAnimSegment689;

HAnimJoint HAnimJoint703 = createNode("HAnimJoint");
HAnimJoint703.name = "r_elbow";
HAnimJoint703.DEF = "hanim_r_elbow";
HAnimJoint703.center = new SFVec3f(new float[-0.1949,1.1388,-0.062]);
HAnimJoint703.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint703.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment704 = createNode("HAnimSegment");
HAnimSegment704.name = "r_forearm";
HAnimSegment704.DEF = "hanim_r_forearm";
Transform Transform705 = createNode("Transform");
Transform705.translation = new SFVec3f(new float[-0.1949,1.1388,-0.062]);
Shape Shape706 = createNode("Shape");
IndexedFaceSet IndexedFaceSet707 = createNode("IndexedFaceSet");
IndexedFaceSet707.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet707.creaseAngle = 0.5;
Coordinate Coordinate708 = createNode("Coordinate");
Coordinate708.USE = "points";
IndexedFaceSet707.coord = Coordinate708;

Shape706.geometry = IndexedFaceSet707;

Appearance Appearance709 = createNode("Appearance");
Material Material710 = createNode("Material");
Material710.USE = "MIN_COLOR";
Appearance709.material = Material710;

Shape706.appearance = Appearance709;

Transform705.children = new MFNode();

Transform705.children[0] = Shape706;

HAnimSegment704.children = new MFNode();

HAnimSegment704.children[0] = Transform705;

Transform Transform711 = createNode("Transform");
Transform711.DEF = "r_forearm_adjust";
Transform711.center = new SFVec3f(new float[-0.198,0.961,-0.0397]);
Transform711.rotation = new SFRotation(new float[-1,0,0,0.1254]);
Transform711.translation = new SFVec3f(new float[-0.1949,1.1388,-0.062]);
HAnimSegment704.children[1] = Transform711;

HAnimSite HAnimSite712 = createNode("HAnimSite");
HAnimSite712.name = "r_radial_styloid_pt";
HAnimSite712.DEF = "hanim_r_radial_styloid_pt";
HAnimSite712.translation = new SFVec3f(new float[-0.1884,0.8676,-0.036]);
Shape Shape713 = createNode("Shape");
IndexedFaceSet IndexedFaceSet714 = createNode("IndexedFaceSet");
IndexedFaceSet714.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet714.creaseAngle = 0.5;
Coordinate Coordinate715 = createNode("Coordinate");
Coordinate715.USE = "points";
IndexedFaceSet714.coord = Coordinate715;

Shape713.geometry = IndexedFaceSet714;

Appearance Appearance716 = createNode("Appearance");
Material Material717 = createNode("Material");
Material717.USE = "SITE_COLOR";
Appearance716.material = Material717;

Shape713.appearance = Appearance716;

HAnimSite712.children = new MFNode();

HAnimSite712.children[0] = Shape713;

HAnimSegment704.children[2] = HAnimSite712;

HAnimSite HAnimSite718 = createNode("HAnimSite");
HAnimSite718.name = "r_olecranon_pt";
HAnimSite718.DEF = "hanim_r_olecranon_pt";
HAnimSite718.translation = new SFVec3f(new float[-0.1907,1.1405,-0.1065]);
Shape Shape719 = createNode("Shape");
IndexedFaceSet IndexedFaceSet720 = createNode("IndexedFaceSet");
IndexedFaceSet720.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet720.creaseAngle = 0.5;
Coordinate Coordinate721 = createNode("Coordinate");
Coordinate721.USE = "points";
IndexedFaceSet720.coord = Coordinate721;

Shape719.geometry = IndexedFaceSet720;

Appearance Appearance722 = createNode("Appearance");
Material Material723 = createNode("Material");
Material723.USE = "SITE_COLOR";
Appearance722.material = Material723;

Shape719.appearance = Appearance722;

HAnimSite718.children = new MFNode();

HAnimSite718.children[0] = Shape719;

HAnimSegment704.children[3] = HAnimSite718;

HAnimSite HAnimSite724 = createNode("HAnimSite");
HAnimSite724.name = "r_humeral_medial_epicn_pt";
HAnimSite724.DEF = "hanim_r_humeral_medial_epicn_pt";
HAnimSite724.translation = new SFVec3f(new float[-0.168,1.1298,-0.1062]);
Shape Shape725 = createNode("Shape");
IndexedFaceSet IndexedFaceSet726 = createNode("IndexedFaceSet");
IndexedFaceSet726.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet726.creaseAngle = 0.5;
Coordinate Coordinate727 = createNode("Coordinate");
Coordinate727.USE = "points";
IndexedFaceSet726.coord = Coordinate727;

Shape725.geometry = IndexedFaceSet726;

Appearance Appearance728 = createNode("Appearance");
Material Material729 = createNode("Material");
Material729.USE = "SITE_COLOR";
Appearance728.material = Material729;

Shape725.appearance = Appearance728;

HAnimSite724.children = new MFNode();

HAnimSite724.children[0] = Shape725;

HAnimSegment704.children[4] = HAnimSite724;

HAnimSite HAnimSite730 = createNode("HAnimSite");
HAnimSite730.name = "r_radiale_pt";
HAnimSite730.DEF = "hanim_r_radiale_pt";
HAnimSite730.translation = new SFVec3f(new float[-0.213,1.1305,-0.1091]);
Shape Shape731 = createNode("Shape");
IndexedFaceSet IndexedFaceSet732 = createNode("IndexedFaceSet");
IndexedFaceSet732.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet732.creaseAngle = 0.5;
Coordinate Coordinate733 = createNode("Coordinate");
Coordinate733.USE = "points";
IndexedFaceSet732.coord = Coordinate733;

Shape731.geometry = IndexedFaceSet732;

Appearance Appearance734 = createNode("Appearance");
Material Material735 = createNode("Material");
Material735.USE = "SITE_COLOR";
Appearance734.material = Material735;

Shape731.appearance = Appearance734;

HAnimSite730.children = new MFNode();

HAnimSite730.children[0] = Shape731;

HAnimSegment704.children[5] = HAnimSite730;

HAnimJoint703.children = new MFNode();

HAnimJoint703.children[0] = HAnimSegment704;

HAnimJoint HAnimJoint736 = createNode("HAnimJoint");
HAnimJoint736.name = "r_wrist";
HAnimJoint736.DEF = "hanim_r_wrist";
HAnimJoint736.center = new SFVec3f(new float[-0.1959,0.8694,-0.0521]);
HAnimJoint736.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint736.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment737 = createNode("HAnimSegment");
HAnimSegment737.name = "r_hand";
HAnimSegment737.DEF = "hanim_r_hand";
Transform Transform738 = createNode("Transform");
Transform738.translation = new SFVec3f(new float[-0.1959,0.8694,-0.0521]);
Shape Shape739 = createNode("Shape");
IndexedFaceSet IndexedFaceSet740 = createNode("IndexedFaceSet");
IndexedFaceSet740.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet740.creaseAngle = 0.5;
Coordinate Coordinate741 = createNode("Coordinate");
Coordinate741.USE = "points";
IndexedFaceSet740.coord = Coordinate741;

Shape739.geometry = IndexedFaceSet740;

Appearance Appearance742 = createNode("Appearance");
Material Material743 = createNode("Material");
Material743.USE = "MIN_COLOR";
Appearance742.material = Material743;

Shape739.appearance = Appearance742;

Transform738.children = new MFNode();

Transform738.children[0] = Shape739;

HAnimSegment737.children = new MFNode();

HAnimSegment737.children[0] = Transform738;

Transform Transform744 = createNode("Transform");
Transform744.DEF = "r_hand_adjust";
Transform744.center = new SFVec3f(new float[-0.217,0.811,-0.0338]);
Transform744.rotation = new SFRotation(new float[-0.09024,0.994,-0.0624,1.216]);
HAnimSegment737.children[1] = Transform744;

HAnimSite HAnimSite745 = createNode("HAnimSite");
HAnimSite745.name = "r_hand_tip";
HAnimSite745.DEF = "hanim_r_hand_tip";
HAnimSite745.translation = new SFVec3f(new float[-0.1969,0.6758,-0.0427]);
Shape Shape746 = createNode("Shape");
IndexedFaceSet IndexedFaceSet747 = createNode("IndexedFaceSet");
IndexedFaceSet747.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet747.creaseAngle = 0.5;
Coordinate Coordinate748 = createNode("Coordinate");
Coordinate748.USE = "points";
IndexedFaceSet747.coord = Coordinate748;

Shape746.geometry = IndexedFaceSet747;

Appearance Appearance749 = createNode("Appearance");
Material Material750 = createNode("Material");
Material750.USE = "SITE_COLOR";
Appearance749.material = Material750;

Shape746.appearance = Appearance749;

HAnimSite745.children = new MFNode();

HAnimSite745.children[0] = Shape746;

HAnimSegment737.children[2] = HAnimSite745;

HAnimSite HAnimSite751 = createNode("HAnimSite");
HAnimSite751.name = "r_metacarpal_pha2_pt";
HAnimSite751.DEF = "hanim_r_metacarpal_pha2_pt";
HAnimSite751.translation = new SFVec3f(new float[-0.1977,0.8169,-0.0177]);
Shape Shape752 = createNode("Shape");
IndexedFaceSet IndexedFaceSet753 = createNode("IndexedFaceSet");
IndexedFaceSet753.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet753.creaseAngle = 0.5;
Coordinate Coordinate754 = createNode("Coordinate");
Coordinate754.USE = "points";
IndexedFaceSet753.coord = Coordinate754;

Shape752.geometry = IndexedFaceSet753;

Appearance Appearance755 = createNode("Appearance");
Material Material756 = createNode("Material");
Material756.USE = "SITE_COLOR";
Appearance755.material = Material756;

Shape752.appearance = Appearance755;

HAnimSite751.children = new MFNode();

HAnimSite751.children[0] = Shape752;

HAnimSegment737.children[3] = HAnimSite751;

HAnimSite HAnimSite757 = createNode("HAnimSite");
HAnimSite757.name = "r_dactylion_pt";
HAnimSite757.DEF = "hanim_r_dactylion_pt";
HAnimSite757.translation = new SFVec3f(new float[-0.1941,0.6772,-0.0423]);
Shape Shape758 = createNode("Shape");
IndexedFaceSet IndexedFaceSet759 = createNode("IndexedFaceSet");
IndexedFaceSet759.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet759.creaseAngle = 0.5;
Coordinate Coordinate760 = createNode("Coordinate");
Coordinate760.USE = "points";
IndexedFaceSet759.coord = Coordinate760;

Shape758.geometry = IndexedFaceSet759;

Appearance Appearance761 = createNode("Appearance");
Material Material762 = createNode("Material");
Material762.USE = "SITE_COLOR";
Appearance761.material = Material762;

Shape758.appearance = Appearance761;

HAnimSite757.children = new MFNode();

HAnimSite757.children[0] = Shape758;

HAnimSegment737.children[4] = HAnimSite757;

HAnimSite HAnimSite763 = createNode("HAnimSite");
HAnimSite763.name = "r_ulnar_styloid_pt";
HAnimSite763.DEF = "hanim_r_ulnar_styloid_pt";
HAnimSite763.translation = new SFVec3f(new float[-0.2117,0.8562,-0.0584]);
Shape Shape764 = createNode("Shape");
IndexedFaceSet IndexedFaceSet765 = createNode("IndexedFaceSet");
IndexedFaceSet765.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet765.creaseAngle = 0.5;
Coordinate Coordinate766 = createNode("Coordinate");
Coordinate766.USE = "points";
IndexedFaceSet765.coord = Coordinate766;

Shape764.geometry = IndexedFaceSet765;

Appearance Appearance767 = createNode("Appearance");
Material Material768 = createNode("Material");
Material768.USE = "SITE_COLOR";
Appearance767.material = Material768;

Shape764.appearance = Appearance767;

HAnimSite763.children = new MFNode();

HAnimSite763.children[0] = Shape764;

HAnimSegment737.children[5] = HAnimSite763;

HAnimSite HAnimSite769 = createNode("HAnimSite");
HAnimSite769.name = "r_metacarpal_pha5_pt";
HAnimSite769.DEF = "hanim_r_metacarpal_pha5_pt";
HAnimSite769.translation = new SFVec3f(new float[-0.1929,0.789,-0.1064]);
Shape Shape770 = createNode("Shape");
IndexedFaceSet IndexedFaceSet771 = createNode("IndexedFaceSet");
IndexedFaceSet771.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet771.creaseAngle = 0.5;
Coordinate Coordinate772 = createNode("Coordinate");
Coordinate772.USE = "points";
IndexedFaceSet771.coord = Coordinate772;

Shape770.geometry = IndexedFaceSet771;

Appearance Appearance773 = createNode("Appearance");
Material Material774 = createNode("Material");
Material774.USE = "SITE_COLOR";
Appearance773.material = Material774;

Shape770.appearance = Appearance773;

HAnimSite769.children = new MFNode();

HAnimSite769.children[0] = Shape770;

HAnimSegment737.children[6] = HAnimSite769;

HAnimJoint736.children = new MFNode();

HAnimJoint736.children[0] = HAnimSegment737;

HAnimJoint703.children[1] = HAnimJoint736;

HAnimJoint688.children[1] = HAnimJoint703;

HAnimJoint525.children[2] = HAnimJoint688;

HAnimJoint HAnimJoint775 = createNode("HAnimJoint");
HAnimJoint775.name = "vc7";
HAnimJoint775.DEF = "hanim_vc7";
HAnimJoint775.center = new SFVec3f(new float[0.0066,1.5132,-0.0301]);
HAnimJoint775.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint775.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment776 = createNode("HAnimSegment");
HAnimSegment776.name = "c7";
HAnimSegment776.DEF = "hanim_c7";
Transform Transform777 = createNode("Transform");
Transform777.translation = new SFVec3f(new float[0.0066,1.5132,-0.0301]);
Shape Shape778 = createNode("Shape");
IndexedFaceSet IndexedFaceSet779 = createNode("IndexedFaceSet");
IndexedFaceSet779.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet779.creaseAngle = 0.5;
Coordinate Coordinate780 = createNode("Coordinate");
Coordinate780.USE = "points";
IndexedFaceSet779.coord = Coordinate780;

Shape778.geometry = IndexedFaceSet779;

Appearance Appearance781 = createNode("Appearance");
Material Material782 = createNode("Material");
Material782.USE = "SPINAL_COLOR";
Appearance781.material = Material782;

Shape778.appearance = Appearance781;

Transform777.children = new MFNode();

Transform777.children[0] = Shape778;

HAnimSegment776.children = new MFNode();

HAnimSegment776.children[0] = Transform777;

HAnimJoint775.children = new MFNode();

HAnimJoint775.children[0] = HAnimSegment776;

HAnimJoint HAnimJoint783 = createNode("HAnimJoint");
HAnimJoint783.name = "vc6";
HAnimJoint783.DEF = "hanim_vc6";
HAnimJoint783.center = new SFVec3f(new float[0.0066,1.5357,-0.0143]);
HAnimJoint783.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint783.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment784 = createNode("HAnimSegment");
HAnimSegment784.name = "c6";
HAnimSegment784.DEF = "hanim_c6";
Transform Transform785 = createNode("Transform");
Transform785.translation = new SFVec3f(new float[0.0066,1.5357,-0.0143]);
Shape Shape786 = createNode("Shape");
IndexedFaceSet IndexedFaceSet787 = createNode("IndexedFaceSet");
IndexedFaceSet787.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet787.creaseAngle = 0.5;
Coordinate Coordinate788 = createNode("Coordinate");
Coordinate788.USE = "points";
IndexedFaceSet787.coord = Coordinate788;

Shape786.geometry = IndexedFaceSet787;

Appearance Appearance789 = createNode("Appearance");
Material Material790 = createNode("Material");
Material790.USE = "SPINAL_COLOR";
Appearance789.material = Material790;

Shape786.appearance = Appearance789;

Transform785.children = new MFNode();

Transform785.children[0] = Shape786;

HAnimSegment784.children = new MFNode();

HAnimSegment784.children[0] = Transform785;

HAnimJoint783.children = new MFNode();

HAnimJoint783.children[0] = HAnimSegment784;

HAnimJoint HAnimJoint791 = createNode("HAnimJoint");
HAnimJoint791.name = "vc5";
HAnimJoint791.DEF = "hanim_vc5";
HAnimJoint791.center = new SFVec3f(new float[0.0066,1.552,-0.0082]);
HAnimJoint791.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint791.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment792 = createNode("HAnimSegment");
HAnimSegment792.name = "c5";
HAnimSegment792.DEF = "hanim_c5";
Transform Transform793 = createNode("Transform");
Transform793.translation = new SFVec3f(new float[0.0066,1.552,-0.0082]);
Shape Shape794 = createNode("Shape");
IndexedFaceSet IndexedFaceSet795 = createNode("IndexedFaceSet");
IndexedFaceSet795.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet795.creaseAngle = 0.5;
Coordinate Coordinate796 = createNode("Coordinate");
Coordinate796.USE = "points";
IndexedFaceSet795.coord = Coordinate796;

Shape794.geometry = IndexedFaceSet795;

Appearance Appearance797 = createNode("Appearance");
Material Material798 = createNode("Material");
Material798.USE = "SPINAL_COLOR";
Appearance797.material = Material798;

Shape794.appearance = Appearance797;

Transform793.children = new MFNode();

Transform793.children[0] = Shape794;

HAnimSegment792.children = new MFNode();

HAnimSegment792.children[0] = Transform793;

HAnimJoint791.children = new MFNode();

HAnimJoint791.children[0] = HAnimSegment792;

HAnimJoint HAnimJoint799 = createNode("HAnimJoint");
HAnimJoint799.name = "vc4";
HAnimJoint799.DEF = "hanim_vc4";
HAnimJoint799.center = new SFVec3f(new float[0.0066,1.5662,-0.0084]);
HAnimJoint799.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint799.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment800 = createNode("HAnimSegment");
HAnimSegment800.name = "c4";
HAnimSegment800.DEF = "hanim_c4";
Transform Transform801 = createNode("Transform");
Transform801.translation = new SFVec3f(new float[0.0066,1.5662,-0.0084]);
Shape Shape802 = createNode("Shape");
IndexedFaceSet IndexedFaceSet803 = createNode("IndexedFaceSet");
IndexedFaceSet803.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet803.creaseAngle = 0.5;
Coordinate Coordinate804 = createNode("Coordinate");
Coordinate804.USE = "points";
IndexedFaceSet803.coord = Coordinate804;

Shape802.geometry = IndexedFaceSet803;

Appearance Appearance805 = createNode("Appearance");
Material Material806 = createNode("Material");
Material806.USE = "SPINAL_COLOR";
Appearance805.material = Material806;

Shape802.appearance = Appearance805;

Transform801.children = new MFNode();

Transform801.children[0] = Shape802;

HAnimSegment800.children = new MFNode();

HAnimSegment800.children[0] = Transform801;

HAnimJoint799.children = new MFNode();

HAnimJoint799.children[0] = HAnimSegment800;

HAnimJoint HAnimJoint807 = createNode("HAnimJoint");
HAnimJoint807.name = "vc3";
HAnimJoint807.DEF = "hanim_vc3";
HAnimJoint807.center = new SFVec3f(new float[0.0066,1.58,-0.0103]);
HAnimJoint807.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint807.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment808 = createNode("HAnimSegment");
HAnimSegment808.name = "c3";
HAnimSegment808.DEF = "hanim_c3";
Transform Transform809 = createNode("Transform");
Transform809.translation = new SFVec3f(new float[0.0066,1.58,-0.0103]);
Shape Shape810 = createNode("Shape");
IndexedFaceSet IndexedFaceSet811 = createNode("IndexedFaceSet");
IndexedFaceSet811.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet811.creaseAngle = 0.5;
Coordinate Coordinate812 = createNode("Coordinate");
Coordinate812.USE = "points";
IndexedFaceSet811.coord = Coordinate812;

Shape810.geometry = IndexedFaceSet811;

Appearance Appearance813 = createNode("Appearance");
Material Material814 = createNode("Material");
Material814.USE = "SPINAL_COLOR";
Appearance813.material = Material814;

Shape810.appearance = Appearance813;

Transform809.children = new MFNode();

Transform809.children[0] = Shape810;

HAnimSegment808.children = new MFNode();

HAnimSegment808.children[0] = Transform809;

HAnimJoint807.children = new MFNode();

HAnimJoint807.children[0] = HAnimSegment808;

HAnimJoint HAnimJoint815 = createNode("HAnimJoint");
HAnimJoint815.name = "vc2";
HAnimJoint815.DEF = "hanim_vc2";
HAnimJoint815.center = new SFVec3f(new float[0.0066,1.5928,-0.0103]);
HAnimJoint815.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint815.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment816 = createNode("HAnimSegment");
HAnimSegment816.name = "c2";
HAnimSegment816.DEF = "hanim_c2";
Transform Transform817 = createNode("Transform");
Transform817.translation = new SFVec3f(new float[0.0066,1.5928,-0.0103]);
Shape Shape818 = createNode("Shape");
IndexedFaceSet IndexedFaceSet819 = createNode("IndexedFaceSet");
IndexedFaceSet819.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet819.creaseAngle = 0.5;
Coordinate Coordinate820 = createNode("Coordinate");
Coordinate820.USE = "points";
IndexedFaceSet819.coord = Coordinate820;

Shape818.geometry = IndexedFaceSet819;

Appearance Appearance821 = createNode("Appearance");
Material Material822 = createNode("Material");
Material822.USE = "REC_SPINAL_COLOR";
Appearance821.material = Material822;

Shape818.appearance = Appearance821;

Transform817.children = new MFNode();

Transform817.children[0] = Shape818;

HAnimSegment816.children = new MFNode();

HAnimSegment816.children[0] = Transform817;

HAnimJoint815.children = new MFNode();

HAnimJoint815.children[0] = HAnimSegment816;

HAnimJoint HAnimJoint823 = createNode("HAnimJoint");
HAnimJoint823.name = "vc1";
HAnimJoint823.DEF = "hanim_vc1";
HAnimJoint823.center = new SFVec3f(new float[0.0066,1.6144,-0.0034]);
HAnimJoint823.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint823.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment824 = createNode("HAnimSegment");
HAnimSegment824.name = "c1";
HAnimSegment824.DEF = "hanim_c1";
Transform Transform825 = createNode("Transform");
Transform825.translation = new SFVec3f(new float[0.0066,1.6144,-0.0034]);
Shape Shape826 = createNode("Shape");
IndexedFaceSet IndexedFaceSet827 = createNode("IndexedFaceSet");
IndexedFaceSet827.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet827.creaseAngle = 0.5;
Coordinate Coordinate828 = createNode("Coordinate");
Coordinate828.USE = "points";
IndexedFaceSet827.coord = Coordinate828;

Shape826.geometry = IndexedFaceSet827;

Appearance Appearance829 = createNode("Appearance");
Material Material830 = createNode("Material");
Material830.USE = "SPINAL_COLOR";
Appearance829.material = Material830;

Shape826.appearance = Appearance829;

Transform825.children = new MFNode();

Transform825.children[0] = Shape826;

HAnimSegment824.children = new MFNode();

HAnimSegment824.children[0] = Transform825;

HAnimJoint823.children = new MFNode();

HAnimJoint823.children[0] = HAnimSegment824;

HAnimJoint HAnimJoint831 = createNode("HAnimJoint");
HAnimJoint831.name = "skullbase";
HAnimJoint831.DEF = "hanim_skullbase";
HAnimJoint831.center = new SFVec3f(new float[0.0044,1.6209,0.0236]);
HAnimJoint831.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint831.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment832 = createNode("HAnimSegment");
HAnimSegment832.name = "skull";
HAnimSegment832.DEF = "hanim_skull";
Transform Transform833 = createNode("Transform");
Transform833.translation = new SFVec3f(new float[0.0044,1.6209,0.0236]);
Shape Shape834 = createNode("Shape");
IndexedFaceSet IndexedFaceSet835 = createNode("IndexedFaceSet");
IndexedFaceSet835.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet835.creaseAngle = 0.5;
Coordinate Coordinate836 = createNode("Coordinate");
Coordinate836.USE = "points";
IndexedFaceSet835.coord = Coordinate836;

Shape834.geometry = IndexedFaceSet835;

Appearance Appearance837 = createNode("Appearance");
Material Material838 = createNode("Material");
Material838.USE = "MIN_COLOR";
Appearance837.material = Material838;

Shape834.appearance = Appearance837;

Transform833.children = new MFNode();

Transform833.children[0] = Shape834;

HAnimSegment832.children = new MFNode();

HAnimSegment832.children[0] = Transform833;

HAnimSite HAnimSite839 = createNode("HAnimSite");
HAnimSite839.name = "skull_tip";
HAnimSite839.DEF = "hanim_skull_tip";
HAnimSite839.translation = new SFVec3f(new float[0.005,1.7504,0.0055]);
Shape Shape840 = createNode("Shape");
IndexedFaceSet IndexedFaceSet841 = createNode("IndexedFaceSet");
IndexedFaceSet841.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet841.creaseAngle = 0.5;
Coordinate Coordinate842 = createNode("Coordinate");
Coordinate842.USE = "points";
IndexedFaceSet841.coord = Coordinate842;

Shape840.geometry = IndexedFaceSet841;

Appearance Appearance843 = createNode("Appearance");
Material Material844 = createNode("Material");
Material844.USE = "SITE_COLOR";
Appearance843.material = Material844;

Shape840.appearance = Appearance843;

HAnimSite839.children = new MFNode();

HAnimSite839.children[0] = Shape840;

HAnimSegment832.children[1] = HAnimSite839;

HAnimSite HAnimSite845 = createNode("HAnimSite");
HAnimSite845.name = "sellion_pt";
HAnimSite845.DEF = "hanim_sellion_pt";
HAnimSite845.translation = new SFVec3f(new float[0.0058,1.6316,0.0852]);
Shape Shape846 = createNode("Shape");
IndexedFaceSet IndexedFaceSet847 = createNode("IndexedFaceSet");
IndexedFaceSet847.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet847.creaseAngle = 0.5;
Coordinate Coordinate848 = createNode("Coordinate");
Coordinate848.USE = "points";
IndexedFaceSet847.coord = Coordinate848;

Shape846.geometry = IndexedFaceSet847;

Appearance Appearance849 = createNode("Appearance");
Material Material850 = createNode("Material");
Material850.USE = "SITE_COLOR";
Appearance849.material = Material850;

Shape846.appearance = Appearance849;

HAnimSite845.children = new MFNode();

HAnimSite845.children[0] = Shape846;

HAnimSegment832.children[2] = HAnimSite845;

HAnimSite HAnimSite851 = createNode("HAnimSite");
HAnimSite851.name = "r_infraorbitale_pt";
HAnimSite851.DEF = "hanim_r_infraorbitale_pt";
HAnimSite851.translation = new SFVec3f(new float[-0.0237,1.6171,0.0752]);
Shape Shape852 = createNode("Shape");
IndexedFaceSet IndexedFaceSet853 = createNode("IndexedFaceSet");
IndexedFaceSet853.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet853.creaseAngle = 0.5;
Coordinate Coordinate854 = createNode("Coordinate");
Coordinate854.USE = "points";
IndexedFaceSet853.coord = Coordinate854;

Shape852.geometry = IndexedFaceSet853;

Appearance Appearance855 = createNode("Appearance");
Material Material856 = createNode("Material");
Material856.USE = "SITE_COLOR";
Appearance855.material = Material856;

Shape852.appearance = Appearance855;

HAnimSite851.children = new MFNode();

HAnimSite851.children[0] = Shape852;

HAnimSegment832.children[3] = HAnimSite851;

HAnimSite HAnimSite857 = createNode("HAnimSite");
HAnimSite857.name = "l_infraorbitale_pt";
HAnimSite857.DEF = "hanim_l_infraorbitale_pt";
HAnimSite857.translation = new SFVec3f(new float[0.0341,1.6171,0.0752]);
Shape Shape858 = createNode("Shape");
IndexedFaceSet IndexedFaceSet859 = createNode("IndexedFaceSet");
IndexedFaceSet859.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet859.creaseAngle = 0.5;
Coordinate Coordinate860 = createNode("Coordinate");
Coordinate860.USE = "points";
IndexedFaceSet859.coord = Coordinate860;

Shape858.geometry = IndexedFaceSet859;

Appearance Appearance861 = createNode("Appearance");
Material Material862 = createNode("Material");
Material862.USE = "SITE_COLOR";
Appearance861.material = Material862;

Shape858.appearance = Appearance861;

HAnimSite857.children = new MFNode();

HAnimSite857.children[0] = Shape858;

HAnimSegment832.children[4] = HAnimSite857;

HAnimSite HAnimSite863 = createNode("HAnimSite");
HAnimSite863.name = "supramenton_pt";
HAnimSite863.DEF = "hanim_supramenton_pt";
HAnimSite863.translation = new SFVec3f(new float[0.0061,1.541,0.0805]);
Shape Shape864 = createNode("Shape");
IndexedFaceSet IndexedFaceSet865 = createNode("IndexedFaceSet");
IndexedFaceSet865.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet865.creaseAngle = 0.5;
Coordinate Coordinate866 = createNode("Coordinate");
Coordinate866.USE = "points";
IndexedFaceSet865.coord = Coordinate866;

Shape864.geometry = IndexedFaceSet865;

Appearance Appearance867 = createNode("Appearance");
Material Material868 = createNode("Material");
Material868.USE = "SITE_COLOR";
Appearance867.material = Material868;

Shape864.appearance = Appearance867;

HAnimSite863.children = new MFNode();

HAnimSite863.children[0] = Shape864;

HAnimSegment832.children[5] = HAnimSite863;

HAnimSite HAnimSite869 = createNode("HAnimSite");
HAnimSite869.name = "r_tragion_pt";
HAnimSite869.DEF = "hanim_r_tragion_pt";
HAnimSite869.translation = new SFVec3f(new float[-0.0646,1.6347,0.0302]);
Shape Shape870 = createNode("Shape");
IndexedFaceSet IndexedFaceSet871 = createNode("IndexedFaceSet");
IndexedFaceSet871.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet871.creaseAngle = 0.5;
Coordinate Coordinate872 = createNode("Coordinate");
Coordinate872.USE = "points";
IndexedFaceSet871.coord = Coordinate872;

Shape870.geometry = IndexedFaceSet871;

Appearance Appearance873 = createNode("Appearance");
Material Material874 = createNode("Material");
Material874.USE = "SITE_COLOR";
Appearance873.material = Material874;

Shape870.appearance = Appearance873;

HAnimSite869.children = new MFNode();

HAnimSite869.children[0] = Shape870;

HAnimSegment832.children[6] = HAnimSite869;

HAnimSite HAnimSite875 = createNode("HAnimSite");
HAnimSite875.name = "r_gonion_pt";
HAnimSite875.DEF = "hanim_r_gonion_pt";
HAnimSite875.translation = new SFVec3f(new float[-0.052,1.5529,0.0347]);
Shape Shape876 = createNode("Shape");
IndexedFaceSet IndexedFaceSet877 = createNode("IndexedFaceSet");
IndexedFaceSet877.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet877.creaseAngle = 0.5;
Coordinate Coordinate878 = createNode("Coordinate");
Coordinate878.USE = "points";
IndexedFaceSet877.coord = Coordinate878;

Shape876.geometry = IndexedFaceSet877;

Appearance Appearance879 = createNode("Appearance");
Material Material880 = createNode("Material");
Material880.USE = "SITE_COLOR";
Appearance879.material = Material880;

Shape876.appearance = Appearance879;

HAnimSite875.children = new MFNode();

HAnimSite875.children[0] = Shape876;

HAnimSegment832.children[7] = HAnimSite875;

HAnimSite HAnimSite881 = createNode("HAnimSite");
HAnimSite881.name = "l_tragion_pt";
HAnimSite881.DEF = "hanim_l_tragion_pt";
HAnimSite881.translation = new SFVec3f(new float[0.0739,1.6348,0.0282]);
Shape Shape882 = createNode("Shape");
IndexedFaceSet IndexedFaceSet883 = createNode("IndexedFaceSet");
IndexedFaceSet883.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet883.creaseAngle = 0.5;
Coordinate Coordinate884 = createNode("Coordinate");
Coordinate884.USE = "points";
IndexedFaceSet883.coord = Coordinate884;

Shape882.geometry = IndexedFaceSet883;

Appearance Appearance885 = createNode("Appearance");
Material Material886 = createNode("Material");
Material886.USE = "SITE_COLOR";
Appearance885.material = Material886;

Shape882.appearance = Appearance885;

HAnimSite881.children = new MFNode();

HAnimSite881.children[0] = Shape882;

HAnimSegment832.children[8] = HAnimSite881;

HAnimSite HAnimSite887 = createNode("HAnimSite");
HAnimSite887.name = "l_gonion_pt";
HAnimSite887.DEF = "hanim_l_gonion_pt";
HAnimSite887.translation = new SFVec3f(new float[0.0631,1.553,0.033]);
Shape Shape888 = createNode("Shape");
IndexedFaceSet IndexedFaceSet889 = createNode("IndexedFaceSet");
IndexedFaceSet889.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet889.creaseAngle = 0.5;
Coordinate Coordinate890 = createNode("Coordinate");
Coordinate890.USE = "points";
IndexedFaceSet889.coord = Coordinate890;

Shape888.geometry = IndexedFaceSet889;

Appearance Appearance891 = createNode("Appearance");
Material Material892 = createNode("Material");
Material892.USE = "SITE_COLOR";
Appearance891.material = Material892;

Shape888.appearance = Appearance891;

HAnimSite887.children = new MFNode();

HAnimSite887.children[0] = Shape888;

HAnimSegment832.children[9] = HAnimSite887;

HAnimSite HAnimSite893 = createNode("HAnimSite");
HAnimSite893.name = "nuchale_pt";
HAnimSite893.DEF = "hanim_nuchale_pt";
HAnimSite893.translation = new SFVec3f(new float[0.0039,1.5972,-0.0796]);
Shape Shape894 = createNode("Shape");
IndexedFaceSet IndexedFaceSet895 = createNode("IndexedFaceSet");
IndexedFaceSet895.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet895.creaseAngle = 0.5;
Coordinate Coordinate896 = createNode("Coordinate");
Coordinate896.USE = "points";
IndexedFaceSet895.coord = Coordinate896;

Shape894.geometry = IndexedFaceSet895;

Appearance Appearance897 = createNode("Appearance");
Material Material898 = createNode("Material");
Material898.USE = "SITE_COLOR";
Appearance897.material = Material898;

Shape894.appearance = Appearance897;

HAnimSite893.children = new MFNode();

HAnimSite893.children[0] = Shape894;

HAnimSegment832.children[10] = HAnimSite893;

HAnimJoint831.children = new MFNode();

HAnimJoint831.children[0] = HAnimSegment832;

HAnimJoint823.children[1] = HAnimJoint831;

HAnimJoint815.children[1] = HAnimJoint823;

HAnimJoint807.children[1] = HAnimJoint815;

HAnimJoint799.children[1] = HAnimJoint807;

HAnimJoint791.children[1] = HAnimJoint799;

HAnimJoint783.children[1] = HAnimJoint791;

HAnimJoint775.children[1] = HAnimJoint783;

HAnimJoint525.children[3] = HAnimJoint775;

HAnimJoint517.children[1] = HAnimJoint525;

HAnimJoint509.children[1] = HAnimJoint517;

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

HAnimJoint102.children[2] = HAnimJoint397;

HAnimHumanoid94.joints = new MFNode();

HAnimHumanoid94.joints[0] = HAnimJoint102;

HAnimSite HAnimSite899 = createNode("HAnimSite");
HAnimSite899.name = "DiamondManLOA_2_view";
HAnimSite899.DEF = "hanim_DiamondManLOA_2_view";
Viewpoint Viewpoint900 = createNode("Viewpoint");
Viewpoint900.DEF = "FrontView";
Viewpoint900.description = "Front View";
Viewpoint900.position = new SFVec3f(new float[0.35,0.854,2.57665]);
HAnimSite899.children = new MFNode();

HAnimSite899.children[0] = Viewpoint900;

Viewpoint Viewpoint901 = createNode("Viewpoint");
Viewpoint901.DEF = "SideView";
Viewpoint901.description = "Side View";
Viewpoint901.orientation = new SFRotation(new float[0,1,0,1.57079]);
Viewpoint901.position = new SFVec3f(new float[2,0.854,0]);
HAnimSite899.children[1] = Viewpoint901;

Viewpoint Viewpoint902 = createNode("Viewpoint");
Viewpoint902.DEF = "TopView";
Viewpoint902.description = "Top View";
Viewpoint902.orientation = new SFRotation(new float[1,0,0,-1.57079]);
Viewpoint902.position = new SFVec3f(new float[0,3.4495,0]);
HAnimSite899.children[2] = Viewpoint902;

Viewpoint Viewpoint903 = createNode("Viewpoint");
Viewpoint903.DEF = "RootView";
Viewpoint903.description = "Humanoid Root View";
Viewpoint903.position = new SFVec3f(new float[0,0.824,0.277]);
HAnimSite899.children[3] = Viewpoint903;

Viewpoint Viewpoint904 = createNode("Viewpoint");
Viewpoint904.DEF = "InclinedView";
Viewpoint904.description = "Inclined View";
Viewpoint904.orientation = new SFRotation(new float[-0.113,0.993,0.0347,0.671]);
Viewpoint904.position = new SFVec3f(new float[1.62,1.05,2.06]);
HAnimSite899.children[4] = Viewpoint904;

HAnimHumanoid94.viewpoints[1] = HAnimSite899;

HAnimJoint HAnimJoint905 = createNode("HAnimJoint");
HAnimJoint905.USE = "hanim_HumanoidRoot";
HAnimHumanoid94.joints[2] = HAnimJoint905;

HAnimJoint HAnimJoint906 = createNode("HAnimJoint");
HAnimJoint906.USE = "hanim_sacroiliac";
HAnimHumanoid94.joints[3] = HAnimJoint906;

HAnimJoint HAnimJoint907 = createNode("HAnimJoint");
HAnimJoint907.USE = "hanim_vl1";
HAnimHumanoid94.joints[4] = HAnimJoint907;

HAnimJoint HAnimJoint908 = createNode("HAnimJoint");
HAnimJoint908.USE = "hanim_vc4";
HAnimHumanoid94.joints[5] = HAnimJoint908;

HAnimJoint HAnimJoint909 = createNode("HAnimJoint");
HAnimJoint909.USE = "hanim_skullbase";
HAnimHumanoid94.joints[6] = HAnimJoint909;

HAnimJoint HAnimJoint910 = createNode("HAnimJoint");
HAnimJoint910.USE = "hanim_vl5";
HAnimHumanoid94.joints[7] = HAnimJoint910;

HAnimJoint HAnimJoint911 = createNode("HAnimJoint");
HAnimJoint911.USE = "hanim_vl4";
HAnimHumanoid94.joints[8] = HAnimJoint911;

HAnimJoint HAnimJoint912 = createNode("HAnimJoint");
HAnimJoint912.USE = "hanim_vl3";
HAnimHumanoid94.joints[9] = HAnimJoint912;

HAnimJoint HAnimJoint913 = createNode("HAnimJoint");
HAnimJoint913.USE = "hanim_vl2";
HAnimHumanoid94.joints[10] = HAnimJoint913;

HAnimJoint HAnimJoint914 = createNode("HAnimJoint");
HAnimJoint914.USE = "hanim_vt12";
HAnimHumanoid94.joints[11] = HAnimJoint914;

HAnimJoint HAnimJoint915 = createNode("HAnimJoint");
HAnimJoint915.USE = "hanim_vt11";
HAnimHumanoid94.joints[12] = HAnimJoint915;

HAnimJoint HAnimJoint916 = createNode("HAnimJoint");
HAnimJoint916.USE = "hanim_vt10";
HAnimHumanoid94.joints[13] = HAnimJoint916;

HAnimJoint HAnimJoint917 = createNode("HAnimJoint");
HAnimJoint917.USE = "hanim_vt9";
HAnimHumanoid94.joints[14] = HAnimJoint917;

HAnimJoint HAnimJoint918 = createNode("HAnimJoint");
HAnimJoint918.USE = "hanim_vt8";
HAnimHumanoid94.joints[15] = HAnimJoint918;

HAnimJoint HAnimJoint919 = createNode("HAnimJoint");
HAnimJoint919.USE = "hanim_vt7";
HAnimHumanoid94.joints[16] = HAnimJoint919;

HAnimJoint HAnimJoint920 = createNode("HAnimJoint");
HAnimJoint920.USE = "hanim_vt6";
HAnimHumanoid94.joints[17] = HAnimJoint920;

HAnimJoint HAnimJoint921 = createNode("HAnimJoint");
HAnimJoint921.USE = "hanim_vt5";
HAnimHumanoid94.joints[18] = HAnimJoint921;

HAnimJoint HAnimJoint922 = createNode("HAnimJoint");
HAnimJoint922.USE = "hanim_vt4";
HAnimHumanoid94.joints[19] = HAnimJoint922;

HAnimJoint HAnimJoint923 = createNode("HAnimJoint");
HAnimJoint923.USE = "hanim_vt3";
HAnimHumanoid94.joints[20] = HAnimJoint923;

HAnimJoint HAnimJoint924 = createNode("HAnimJoint");
HAnimJoint924.USE = "hanim_vt2";
HAnimHumanoid94.joints[21] = HAnimJoint924;

HAnimJoint HAnimJoint925 = createNode("HAnimJoint");
HAnimJoint925.USE = "hanim_vt1";
HAnimHumanoid94.joints[22] = HAnimJoint925;

HAnimJoint HAnimJoint926 = createNode("HAnimJoint");
HAnimJoint926.USE = "hanim_vc7";
HAnimHumanoid94.joints[23] = HAnimJoint926;

HAnimJoint HAnimJoint927 = createNode("HAnimJoint");
HAnimJoint927.USE = "hanim_vc6";
HAnimHumanoid94.joints[24] = HAnimJoint927;

HAnimJoint HAnimJoint928 = createNode("HAnimJoint");
HAnimJoint928.USE = "hanim_vc5";
HAnimHumanoid94.joints[25] = HAnimJoint928;

HAnimJoint HAnimJoint929 = createNode("HAnimJoint");
HAnimJoint929.USE = "hanim_vc3";
HAnimHumanoid94.joints[26] = HAnimJoint929;

HAnimJoint HAnimJoint930 = createNode("HAnimJoint");
HAnimJoint930.USE = "hanim_vc2";
HAnimHumanoid94.joints[27] = HAnimJoint930;

HAnimJoint HAnimJoint931 = createNode("HAnimJoint");
HAnimJoint931.USE = "hanim_vc1";
HAnimHumanoid94.joints[28] = HAnimJoint931;

HAnimJoint HAnimJoint932 = createNode("HAnimJoint");
HAnimJoint932.USE = "hanim_l_ankle";
HAnimHumanoid94.joints[29] = HAnimJoint932;

HAnimJoint HAnimJoint933 = createNode("HAnimJoint");
HAnimJoint933.USE = "hanim_r_ankle";
HAnimHumanoid94.joints[30] = HAnimJoint933;

HAnimJoint HAnimJoint934 = createNode("HAnimJoint");
HAnimJoint934.USE = "hanim_l_elbow";
HAnimHumanoid94.joints[31] = HAnimJoint934;

HAnimJoint HAnimJoint935 = createNode("HAnimJoint");
HAnimJoint935.USE = "hanim_r_elbow";
HAnimHumanoid94.joints[32] = HAnimJoint935;

HAnimJoint HAnimJoint936 = createNode("HAnimJoint");
HAnimJoint936.USE = "hanim_l_hip";
HAnimHumanoid94.joints[33] = HAnimJoint936;

HAnimJoint HAnimJoint937 = createNode("HAnimJoint");
HAnimJoint937.USE = "hanim_r_hip";
HAnimHumanoid94.joints[34] = HAnimJoint937;

HAnimJoint HAnimJoint938 = createNode("HAnimJoint");
HAnimJoint938.USE = "hanim_l_index0";
HAnimHumanoid94.joints[35] = HAnimJoint938;

HAnimJoint HAnimJoint939 = createNode("HAnimJoint");
HAnimJoint939.USE = "hanim_l_index1";
HAnimHumanoid94.joints[36] = HAnimJoint939;

HAnimJoint HAnimJoint940 = createNode("HAnimJoint");
HAnimJoint940.USE = "hanim_l_index2";
HAnimHumanoid94.joints[37] = HAnimJoint940;

HAnimJoint HAnimJoint941 = createNode("HAnimJoint");
HAnimJoint941.USE = "hanim_l_index3";
HAnimHumanoid94.joints[38] = HAnimJoint941;

HAnimJoint HAnimJoint942 = createNode("HAnimJoint");
HAnimJoint942.USE = "hanim_l_knee";
HAnimHumanoid94.joints[39] = HAnimJoint942;

HAnimJoint HAnimJoint943 = createNode("HAnimJoint");
HAnimJoint943.USE = "hanim_r_knee";
HAnimHumanoid94.joints[40] = HAnimJoint943;

HAnimJoint HAnimJoint944 = createNode("HAnimJoint");
HAnimJoint944.USE = "hanim_l_metatarsal";
HAnimHumanoid94.joints[41] = HAnimJoint944;

HAnimJoint HAnimJoint945 = createNode("HAnimJoint");
HAnimJoint945.USE = "hanim_l_midtarsal";
HAnimHumanoid94.joints[42] = HAnimJoint945;

HAnimJoint HAnimJoint946 = createNode("HAnimJoint");
HAnimJoint946.USE = "hanim_r_midtarsal";
HAnimHumanoid94.joints[43] = HAnimJoint946;

HAnimJoint HAnimJoint947 = createNode("HAnimJoint");
HAnimJoint947.USE = "hanim_l_shoulder";
HAnimHumanoid94.joints[44] = HAnimJoint947;

HAnimJoint HAnimJoint948 = createNode("HAnimJoint");
HAnimJoint948.USE = "hanim_r_shoulder";
HAnimHumanoid94.joints[45] = HAnimJoint948;

HAnimJoint HAnimJoint949 = createNode("HAnimJoint");
HAnimJoint949.USE = "hanim_l_subtalar";
HAnimHumanoid94.joints[46] = HAnimJoint949;

HAnimJoint HAnimJoint950 = createNode("HAnimJoint");
HAnimJoint950.USE = "hanim_l_thumb1";
HAnimHumanoid94.joints[47] = HAnimJoint950;

HAnimJoint HAnimJoint951 = createNode("HAnimJoint");
HAnimJoint951.USE = "hanim_l_thumb2";
HAnimHumanoid94.joints[48] = HAnimJoint951;

HAnimJoint HAnimJoint952 = createNode("HAnimJoint");
HAnimJoint952.USE = "hanim_l_thumb3";
HAnimHumanoid94.joints[49] = HAnimJoint952;

HAnimJoint HAnimJoint953 = createNode("HAnimJoint");
HAnimJoint953.USE = "hanim_l_wrist";
HAnimHumanoid94.joints[50] = HAnimJoint953;

HAnimJoint HAnimJoint954 = createNode("HAnimJoint");
HAnimJoint954.USE = "hanim_r_wrist";
HAnimHumanoid94.joints[51] = HAnimJoint954;

HAnimSegment HAnimSegment955 = createNode("HAnimSegment");
HAnimSegment955.USE = "hanim_pelvis";
HAnimHumanoid94.segments[52] = HAnimSegment955;

HAnimSegment HAnimSegment956 = createNode("HAnimSegment");
HAnimSegment956.USE = "hanim_c7";
HAnimHumanoid94.segments[53] = HAnimSegment956;

HAnimSegment HAnimSegment957 = createNode("HAnimSegment");
HAnimSegment957.USE = "hanim_c4";
HAnimHumanoid94.segments[54] = HAnimSegment957;

HAnimSegment HAnimSegment958 = createNode("HAnimSegment");
HAnimSegment958.USE = "hanim_skull";
HAnimHumanoid94.segments[55] = HAnimSegment958;

HAnimSegment HAnimSegment959 = createNode("HAnimSegment");
HAnimSegment959.USE = "hanim_sacrum";
HAnimHumanoid94.segments[56] = HAnimSegment959;

HAnimSegment HAnimSegment960 = createNode("HAnimSegment");
HAnimSegment960.USE = "hanim_midproximal";
HAnimHumanoid94.segments[57] = HAnimSegment960;

HAnimSegment HAnimSegment961 = createNode("HAnimSegment");
HAnimSegment961.USE = "hanim_l5";
HAnimHumanoid94.segments[58] = HAnimSegment961;

HAnimSegment HAnimSegment962 = createNode("HAnimSegment");
HAnimSegment962.USE = "hanim_l4";
HAnimHumanoid94.segments[59] = HAnimSegment962;

HAnimSegment HAnimSegment963 = createNode("HAnimSegment");
HAnimSegment963.USE = "hanim_l3";
HAnimHumanoid94.segments[60] = HAnimSegment963;

HAnimSegment HAnimSegment964 = createNode("HAnimSegment");
HAnimSegment964.USE = "hanim_l2";
HAnimHumanoid94.segments[61] = HAnimSegment964;

HAnimSegment HAnimSegment965 = createNode("HAnimSegment");
HAnimSegment965.USE = "hanim_l1";
HAnimHumanoid94.segments[62] = HAnimSegment965;

HAnimSegment HAnimSegment966 = createNode("HAnimSegment");
HAnimSegment966.USE = "hanim_t12";
HAnimHumanoid94.segments[63] = HAnimSegment966;

HAnimSegment HAnimSegment967 = createNode("HAnimSegment");
HAnimSegment967.USE = "hanim_t11";
HAnimHumanoid94.segments[64] = HAnimSegment967;

HAnimSegment HAnimSegment968 = createNode("HAnimSegment");
HAnimSegment968.USE = "hanim_t10";
HAnimHumanoid94.segments[65] = HAnimSegment968;

HAnimSegment HAnimSegment969 = createNode("HAnimSegment");
HAnimSegment969.USE = "hanim_t9";
HAnimHumanoid94.segments[66] = HAnimSegment969;

HAnimSegment HAnimSegment970 = createNode("HAnimSegment");
HAnimSegment970.USE = "hanim_t8";
HAnimHumanoid94.segments[67] = HAnimSegment970;

HAnimSegment HAnimSegment971 = createNode("HAnimSegment");
HAnimSegment971.USE = "hanim_t7";
HAnimHumanoid94.segments[68] = HAnimSegment971;

HAnimSegment HAnimSegment972 = createNode("HAnimSegment");
HAnimSegment972.USE = "hanim_t6";
HAnimHumanoid94.segments[69] = HAnimSegment972;

HAnimSegment HAnimSegment973 = createNode("HAnimSegment");
HAnimSegment973.USE = "hanim_t5";
HAnimHumanoid94.segments[70] = HAnimSegment973;

HAnimSegment HAnimSegment974 = createNode("HAnimSegment");
HAnimSegment974.USE = "hanim_t4";
HAnimHumanoid94.segments[71] = HAnimSegment974;

HAnimSegment HAnimSegment975 = createNode("HAnimSegment");
HAnimSegment975.USE = "hanim_t3";
HAnimHumanoid94.segments[72] = HAnimSegment975;

HAnimSegment HAnimSegment976 = createNode("HAnimSegment");
HAnimSegment976.USE = "hanim_t2";
HAnimHumanoid94.segments[73] = HAnimSegment976;

HAnimSegment HAnimSegment977 = createNode("HAnimSegment");
HAnimSegment977.USE = "hanim_t1";
HAnimHumanoid94.segments[74] = HAnimSegment977;

HAnimSegment HAnimSegment978 = createNode("HAnimSegment");
HAnimSegment978.USE = "hanim_c6";
HAnimHumanoid94.segments[75] = HAnimSegment978;

HAnimSegment HAnimSegment979 = createNode("HAnimSegment");
HAnimSegment979.USE = "hanim_c5";
HAnimHumanoid94.segments[76] = HAnimSegment979;

HAnimSegment HAnimSegment980 = createNode("HAnimSegment");
HAnimSegment980.USE = "hanim_c3";
HAnimHumanoid94.segments[77] = HAnimSegment980;

HAnimSegment HAnimSegment981 = createNode("HAnimSegment");
HAnimSegment981.USE = "hanim_c2";
HAnimHumanoid94.segments[78] = HAnimSegment981;

HAnimSegment HAnimSegment982 = createNode("HAnimSegment");
HAnimSegment982.USE = "hanim_c1";
HAnimHumanoid94.segments[79] = HAnimSegment982;

HAnimSegment HAnimSegment983 = createNode("HAnimSegment");
HAnimSegment983.USE = "hanim_l_calf";
HAnimHumanoid94.segments[80] = HAnimSegment983;

HAnimSegment HAnimSegment984 = createNode("HAnimSegment");
HAnimSegment984.USE = "hanim_r_calf";
HAnimHumanoid94.segments[81] = HAnimSegment984;

HAnimSegment HAnimSegment985 = createNode("HAnimSegment");
HAnimSegment985.USE = "hanim_l_forearm";
HAnimHumanoid94.segments[82] = HAnimSegment985;

HAnimSegment HAnimSegment986 = createNode("HAnimSegment");
HAnimSegment986.USE = "hanim_r_forearm";
HAnimHumanoid94.segments[83] = HAnimSegment986;

HAnimSegment HAnimSegment987 = createNode("HAnimSegment");
HAnimSegment987.USE = "hanim_l_forefoot";
HAnimHumanoid94.segments[84] = HAnimSegment987;

HAnimSegment HAnimSegment988 = createNode("HAnimSegment");
HAnimSegment988.USE = "hanim_l_hand";
HAnimHumanoid94.segments[85] = HAnimSegment988;

HAnimSegment HAnimSegment989 = createNode("HAnimSegment");
HAnimSegment989.USE = "hanim_r_hand";
HAnimHumanoid94.segments[86] = HAnimSegment989;

HAnimSegment HAnimSegment990 = createNode("HAnimSegment");
HAnimSegment990.USE = "hanim_l_hindfoot";
HAnimHumanoid94.segments[87] = HAnimSegment990;

HAnimSegment HAnimSegment991 = createNode("HAnimSegment");
HAnimSegment991.USE = "hanim_r_hindfoot";
HAnimHumanoid94.segments[88] = HAnimSegment991;

HAnimSegment HAnimSegment992 = createNode("HAnimSegment");
HAnimSegment992.USE = "hanim_l_index_distal";
HAnimHumanoid94.segments[89] = HAnimSegment992;

HAnimSegment HAnimSegment993 = createNode("HAnimSegment");
HAnimSegment993.USE = "hanim_l_index_metacarpal";
HAnimHumanoid94.segments[90] = HAnimSegment993;

HAnimSegment HAnimSegment994 = createNode("HAnimSegment");
HAnimSegment994.USE = "hanim_l_index_middle";
HAnimHumanoid94.segments[91] = HAnimSegment994;

HAnimSegment HAnimSegment995 = createNode("HAnimSegment");
HAnimSegment995.USE = "hanim_l_index_proximal";
HAnimHumanoid94.segments[92] = HAnimSegment995;

HAnimSegment HAnimSegment996 = createNode("HAnimSegment");
HAnimSegment996.USE = "hanim_l_middistal";
HAnimHumanoid94.segments[93] = HAnimSegment996;

HAnimSegment HAnimSegment997 = createNode("HAnimSegment");
HAnimSegment997.USE = "hanim_r_middistal";
HAnimHumanoid94.segments[94] = HAnimSegment997;

HAnimSegment HAnimSegment998 = createNode("HAnimSegment");
HAnimSegment998.USE = "hanim_l_thigh";
HAnimHumanoid94.segments[95] = HAnimSegment998;

HAnimSegment HAnimSegment999 = createNode("HAnimSegment");
HAnimSegment999.USE = "hanim_r_thigh";
HAnimHumanoid94.segments[96] = HAnimSegment999;

HAnimSegment HAnimSegment1000 = createNode("HAnimSegment");
HAnimSegment1000.USE = "hanim_l_thumb_distal";
HAnimHumanoid94.segments[97] = HAnimSegment1000;

HAnimSegment HAnimSegment1001 = createNode("HAnimSegment");
HAnimSegment1001.USE = "hanim_l_thumb_metacarpal";
HAnimHumanoid94.segments[98] = HAnimSegment1001;

HAnimSegment HAnimSegment1002 = createNode("HAnimSegment");
HAnimSegment1002.USE = "hanim_l_thumb_proximal";
HAnimHumanoid94.segments[99] = HAnimSegment1002;

HAnimSegment HAnimSegment1003 = createNode("HAnimSegment");
HAnimSegment1003.USE = "hanim_l_upperarm";
HAnimHumanoid94.segments[100] = HAnimSegment1003;

HAnimSegment HAnimSegment1004 = createNode("HAnimSegment");
HAnimSegment1004.USE = "hanim_r_upperarm";
HAnimHumanoid94.segments[101] = HAnimSegment1004;

HAnimSite HAnimSite1005 = createNode("HAnimSite");
HAnimSite1005.USE = "hanim_crotch_pt";
HAnimHumanoid94.viewpoints[102] = HAnimSite1005;

HAnimSite HAnimSite1006 = createNode("HAnimSite");
HAnimSite1006.USE = "hanim_skull_tip";
HAnimHumanoid94.viewpoints[103] = HAnimSite1006;

HAnimSite HAnimSite1007 = createNode("HAnimSite");
HAnimSite1007.USE = "hanim_sellion_pt";
HAnimHumanoid94.viewpoints[104] = HAnimSite1007;

HAnimSite HAnimSite1008 = createNode("HAnimSite");
HAnimSite1008.USE = "hanim_supramenton_pt";
HAnimHumanoid94.viewpoints[105] = HAnimSite1008;

HAnimSite HAnimSite1009 = createNode("HAnimSite");
HAnimSite1009.USE = "hanim_nuchale_pt";
HAnimHumanoid94.viewpoints[106] = HAnimSite1009;

HAnimSite HAnimSite1010 = createNode("HAnimSite");
HAnimSite1010.USE = "hanim_r_asis_pt";
HAnimHumanoid94.viewpoints[107] = HAnimSite1010;

HAnimSite HAnimSite1011 = createNode("HAnimSite");
HAnimSite1011.USE = "hanim_l_asis_pt";
HAnimHumanoid94.viewpoints[108] = HAnimSite1011;

HAnimSite HAnimSite1012 = createNode("HAnimSite");
HAnimSite1012.USE = "hanim_l_calcaneous_post_pt";
HAnimHumanoid94.viewpoints[109] = HAnimSite1012;

HAnimSite HAnimSite1013 = createNode("HAnimSite");
HAnimSite1013.USE = "hanim_r_calcaneous_post_pt";
HAnimHumanoid94.viewpoints[110] = HAnimSite1013;

HAnimSite HAnimSite1014 = createNode("HAnimSite");
HAnimSite1014.USE = "hanim_l_dactylion_pt";
HAnimHumanoid94.viewpoints[111] = HAnimSite1014;

HAnimSite HAnimSite1015 = createNode("HAnimSite");
HAnimSite1015.USE = "hanim_r_dactylion_pt";
HAnimHumanoid94.viewpoints[112] = HAnimSite1015;

HAnimSite HAnimSite1016 = createNode("HAnimSite");
HAnimSite1016.USE = "hanim_l_digit2_pt";
HAnimHumanoid94.viewpoints[113] = HAnimSite1016;

HAnimSite HAnimSite1017 = createNode("HAnimSite");
HAnimSite1017.USE = "hanim_r_digit2_pt";
HAnimHumanoid94.viewpoints[114] = HAnimSite1017;

HAnimSite HAnimSite1018 = createNode("HAnimSite");
HAnimSite1018.USE = "hanim_l_femoral_lateral_epicn_pt";
HAnimHumanoid94.viewpoints[115] = HAnimSite1018;

HAnimSite HAnimSite1019 = createNode("HAnimSite");
HAnimSite1019.USE = "hanim_r_femoral_lateral_epicn_pt";
HAnimHumanoid94.viewpoints[116] = HAnimSite1019;

HAnimSite HAnimSite1020 = createNode("HAnimSite");
HAnimSite1020.USE = "hanim_l_femoral_medial_epicn_pt";
HAnimHumanoid94.viewpoints[117] = HAnimSite1020;

HAnimSite HAnimSite1021 = createNode("HAnimSite");
HAnimSite1021.USE = "hanim_r_femoral_medial_epicn_pt";
HAnimHumanoid94.viewpoints[118] = HAnimSite1021;

HAnimSite HAnimSite1022 = createNode("HAnimSite");
HAnimSite1022.USE = "hanim_l_forefoot_tip";
HAnimHumanoid94.viewpoints[119] = HAnimSite1022;

HAnimSite HAnimSite1023 = createNode("HAnimSite");
HAnimSite1023.USE = "hanim_r_gonion_pt";
HAnimHumanoid94.viewpoints[120] = HAnimSite1023;

HAnimSite HAnimSite1024 = createNode("HAnimSite");
HAnimSite1024.USE = "hanim_l_gonion_pt";
HAnimHumanoid94.viewpoints[121] = HAnimSite1024;

HAnimSite HAnimSite1025 = createNode("HAnimSite");
HAnimSite1025.USE = "hanim_l_hand_tip";
HAnimHumanoid94.viewpoints[122] = HAnimSite1025;

HAnimSite HAnimSite1026 = createNode("HAnimSite");
HAnimSite1026.USE = "hanim_r_hand_tip";
HAnimHumanoid94.viewpoints[123] = HAnimSite1026;

HAnimSite HAnimSite1027 = createNode("HAnimSite");
HAnimSite1027.USE = "hanim_l_humeral_lateral_epicn_pt";
HAnimHumanoid94.viewpoints[124] = HAnimSite1027;

HAnimSite HAnimSite1028 = createNode("HAnimSite");
HAnimSite1028.USE = "hanim_r_humeral_lateral_epicn_pt";
HAnimHumanoid94.viewpoints[125] = HAnimSite1028;

HAnimSite HAnimSite1029 = createNode("HAnimSite");
HAnimSite1029.USE = "hanim_l_humeral_medial_epicn_pt";
HAnimHumanoid94.viewpoints[126] = HAnimSite1029;

HAnimSite HAnimSite1030 = createNode("HAnimSite");
HAnimSite1030.USE = "hanim_r_humeral_medial_epicn_pt";
HAnimHumanoid94.viewpoints[127] = HAnimSite1030;

HAnimSite HAnimSite1031 = createNode("HAnimSite");
HAnimSite1031.USE = "hanim_r_iliocristale_pt";
HAnimHumanoid94.viewpoints[128] = HAnimSite1031;

HAnimSite HAnimSite1032 = createNode("HAnimSite");
HAnimSite1032.USE = "hanim_l_iliocristale_pt";
HAnimHumanoid94.viewpoints[129] = HAnimSite1032;

HAnimSite HAnimSite1033 = createNode("HAnimSite");
HAnimSite1033.USE = "hanim_l_index_distal_tip";
HAnimHumanoid94.viewpoints[130] = HAnimSite1033;

HAnimSite HAnimSite1034 = createNode("HAnimSite");
HAnimSite1034.USE = "hanim_r_infraorbitale_pt";
HAnimHumanoid94.viewpoints[131] = HAnimSite1034;

HAnimSite HAnimSite1035 = createNode("HAnimSite");
HAnimSite1035.USE = "hanim_l_infraorbitale_pt";
HAnimHumanoid94.viewpoints[132] = HAnimSite1035;

HAnimSite HAnimSite1036 = createNode("HAnimSite");
HAnimSite1036.USE = "hanim_l_knee_crease_pt";
HAnimHumanoid94.viewpoints[133] = HAnimSite1036;

HAnimSite HAnimSite1037 = createNode("HAnimSite");
HAnimSite1037.USE = "hanim_r_knee_crease_pt";
HAnimHumanoid94.viewpoints[134] = HAnimSite1037;

HAnimSite HAnimSite1038 = createNode("HAnimSite");
HAnimSite1038.USE = "hanim_l_lateral_malleolus_pt";
HAnimHumanoid94.viewpoints[135] = HAnimSite1038;

HAnimSite HAnimSite1039 = createNode("HAnimSite");
HAnimSite1039.USE = "hanim_r_lateral_malleolus_pt";
HAnimHumanoid94.viewpoints[136] = HAnimSite1039;

HAnimSite HAnimSite1040 = createNode("HAnimSite");
HAnimSite1040.USE = "hanim_l_medial_malleolus_pt";
HAnimHumanoid94.viewpoints[137] = HAnimSite1040;

HAnimSite HAnimSite1041 = createNode("HAnimSite");
HAnimSite1041.USE = "hanim_r_medial_malleolus_pt";
HAnimHumanoid94.viewpoints[138] = HAnimSite1041;

HAnimSite HAnimSite1042 = createNode("HAnimSite");
HAnimSite1042.USE = "hanim_l_metacarpal_pha2_pt";
HAnimHumanoid94.viewpoints[139] = HAnimSite1042;

HAnimSite HAnimSite1043 = createNode("HAnimSite");
HAnimSite1043.USE = "hanim_r_metacarpal_pha2_pt";
HAnimHumanoid94.viewpoints[140] = HAnimSite1043;

HAnimSite HAnimSite1044 = createNode("HAnimSite");
HAnimSite1044.USE = "hanim_l_metacarpal_pha5_pt";
HAnimHumanoid94.viewpoints[141] = HAnimSite1044;

HAnimSite HAnimSite1045 = createNode("HAnimSite");
HAnimSite1045.USE = "hanim_r_metacarpal_pha5_pt";
HAnimHumanoid94.viewpoints[142] = HAnimSite1045;

HAnimSite HAnimSite1046 = createNode("HAnimSite");
HAnimSite1046.USE = "hanim_l_metatarsal_pha1_pt";
HAnimHumanoid94.viewpoints[143] = HAnimSite1046;

HAnimSite HAnimSite1047 = createNode("HAnimSite");
HAnimSite1047.USE = "hanim_r_metatarsal_pha1_pt";
HAnimHumanoid94.viewpoints[144] = HAnimSite1047;

HAnimSite HAnimSite1048 = createNode("HAnimSite");
HAnimSite1048.USE = "hanim_l_metatarsal_pha5_pt";
HAnimHumanoid94.viewpoints[145] = HAnimSite1048;

HAnimSite HAnimSite1049 = createNode("HAnimSite");
HAnimSite1049.USE = "hanim_r_metatarsal_pha5_pt";
HAnimHumanoid94.viewpoints[146] = HAnimSite1049;

HAnimSite HAnimSite1050 = createNode("HAnimSite");
HAnimSite1050.USE = "hanim_l_middistal_tip";
HAnimHumanoid94.viewpoints[147] = HAnimSite1050;

HAnimSite HAnimSite1051 = createNode("HAnimSite");
HAnimSite1051.USE = "hanim_r_middistal_tip";
HAnimHumanoid94.viewpoints[148] = HAnimSite1051;

HAnimSite HAnimSite1052 = createNode("HAnimSite");
HAnimSite1052.USE = "hanim_l_olecranon_pt";
HAnimHumanoid94.viewpoints[149] = HAnimSite1052;

HAnimSite HAnimSite1053 = createNode("HAnimSite");
HAnimSite1053.USE = "hanim_r_olecranon_pt";
HAnimHumanoid94.viewpoints[150] = HAnimSite1053;

HAnimSite HAnimSite1054 = createNode("HAnimSite");
HAnimSite1054.USE = "hanim_r_psis_pt";
HAnimHumanoid94.viewpoints[151] = HAnimSite1054;

HAnimSite HAnimSite1055 = createNode("HAnimSite");
HAnimSite1055.USE = "hanim_l_psis_pt";
HAnimHumanoid94.viewpoints[152] = HAnimSite1055;

HAnimSite HAnimSite1056 = createNode("HAnimSite");
HAnimSite1056.USE = "hanim_l_radial_styloid_pt";
HAnimHumanoid94.viewpoints[153] = HAnimSite1056;

HAnimSite HAnimSite1057 = createNode("HAnimSite");
HAnimSite1057.USE = "hanim_r_radial_styloid_pt";
HAnimHumanoid94.viewpoints[154] = HAnimSite1057;

HAnimSite HAnimSite1058 = createNode("HAnimSite");
HAnimSite1058.USE = "hanim_l_radiale_pt";
HAnimHumanoid94.viewpoints[155] = HAnimSite1058;

HAnimSite HAnimSite1059 = createNode("HAnimSite");
HAnimSite1059.USE = "hanim_r_radiale_pt";
HAnimHumanoid94.viewpoints[156] = HAnimSite1059;

HAnimSite HAnimSite1060 = createNode("HAnimSite");
HAnimSite1060.USE = "hanim_l_sphyrion_pt";
HAnimHumanoid94.viewpoints[157] = HAnimSite1060;

HAnimSite HAnimSite1061 = createNode("HAnimSite");
HAnimSite1061.USE = "hanim_r_sphyrion_pt";
HAnimHumanoid94.viewpoints[158] = HAnimSite1061;

HAnimSite HAnimSite1062 = createNode("HAnimSite");
HAnimSite1062.USE = "hanim_l_thumb_distal_tip";
HAnimHumanoid94.viewpoints[159] = HAnimSite1062;

HAnimSite HAnimSite1063 = createNode("HAnimSite");
HAnimSite1063.USE = "hanim_r_tragion_pt";
HAnimHumanoid94.viewpoints[160] = HAnimSite1063;

HAnimSite HAnimSite1064 = createNode("HAnimSite");
HAnimSite1064.USE = "hanim_l_tragion_pt";
HAnimHumanoid94.viewpoints[161] = HAnimSite1064;

HAnimSite HAnimSite1065 = createNode("HAnimSite");
HAnimSite1065.USE = "hanim_r_trochanterion_pt";
HAnimHumanoid94.viewpoints[162] = HAnimSite1065;

HAnimSite HAnimSite1066 = createNode("HAnimSite");
HAnimSite1066.USE = "hanim_l_trochanterion_pt";
HAnimHumanoid94.viewpoints[163] = HAnimSite1066;

HAnimSite HAnimSite1067 = createNode("HAnimSite");
HAnimSite1067.USE = "hanim_l_ulnar_styloid_pt";
HAnimHumanoid94.viewpoints[164] = HAnimSite1067;

HAnimSite HAnimSite1068 = createNode("HAnimSite");
HAnimSite1068.USE = "hanim_r_ulnar_styloid_pt";
HAnimHumanoid94.viewpoints[165] = HAnimSite1068;

children[4] = HAnimHumanoid94;

}
