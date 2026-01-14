#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Immersive";
X3D0.version = "4.0";
head head1 = createNode("head");
component component2 = createNode("component");
component2.name = "HAnim";
component2.level = 1;
head1.component = new MFNode();

head1.component[0] = component2;

meta meta3 = createNode("meta");
meta3.name = "title";
meta3.content = "DiamondManLOA2.x3d";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "description";
meta4.content = "HAnim skeletal structure at level of articulation two, one diamond at the base node for the structure, blue spheres for HAnimSite feaature points";
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
meta7.name = "translator";
meta7.content = "Don Brutzman";
head1.meta[5] = meta7;

meta meta8 = createNode("meta");
meta8.name = "created";
meta8.content = "12 November 2001";
head1.meta[6] = meta8;

meta meta9 = createNode("meta");
meta9.name = "modified";
meta9.content = "Mon, 15 Sep 2025 05:18:47 GMT";
head1.meta[7] = meta9;

meta meta10 = createNode("meta");
meta10.name = "Image";
meta10.content = "DiamondManLOA2.png";
head1.meta[8] = meta10;

meta meta11 = createNode("meta");
meta11.name = "Image";
meta11.content = "images/BonesAllSkeletonFrontViewLOA2.png";
head1.meta[9] = meta11;

meta meta12 = createNode("meta");
meta12.name = "motto";
meta12.content = "(a) \"Diamonds are a girl's best friend.\" (b) \"Gosh, it sure is chilly in here.\"";
head1.meta[10] = meta12;

meta meta13 = createNode("meta");
meta13.name = "reference";
meta13.content = "The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps";
head1.meta[11] = meta13;

meta meta14 = createNode("meta");
meta14.name = "subject";
meta14.content = "human animation, x3d, vrml, animation";
head1.meta[12] = meta14;

meta meta15 = createNode("meta");
meta15.name = "identifier";
meta15.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Templates/DiamondManLOA2.x3d";
head1.meta[13] = meta15;

head = head1;

WorldInfo WorldInfo17 = createNode("WorldInfo");
WorldInfo17.title = "HANIM 1.1 Default Joint Centers, LOA1";
WorldInfo17.info = new MFString(new java.lang.String["HAnim 2.0 Default Joint Centers, Level Of Articulation (LOA) 2 -------------------------------------------------------- HANIM 1.1 (VRML 2.0) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 1.1 (VRML 2.0) Author email: beitler@graphics.cis.upenn.edu or beitler@acm.org HANIM 1.1 (VRML 2.0) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 1.1 (VRML 2.0) Compliance Date: May 12, 1999 HANIM 1.1 Compliance Information: http://ece.uwaterloo.ca/~HAnim/ Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps, .pdf"]);
children = new MFNode();

children[0] = WorldInfo17;

NavigationInfo NavigationInfo18 = createNode("NavigationInfo");
NavigationInfo18.speed = 1.5;
children[1] = NavigationInfo18;

Viewpoint Viewpoint19 = createNode("Viewpoint");
Viewpoint19.description = "Diamond Man, LOA 2";
Viewpoint19.position = new SFVec3f(new float[0,1,3]);
Viewpoint19.centerOfRotation = new SFVec3f(new float[0,1,0]);
children[2] = Viewpoint19;

Transform Transform20 = createNode("Transform");
Transform20.translation = new SFVec3f(new float[1,1.5,0]);
Billboard Billboard21 = createNode("Billboard");
Shape Shape22 = createNode("Shape");
Appearance Appearance23 = createNode("Appearance");
Material Material24 = createNode("Material");
Material24.DEF = "TextMaterial";
Material24.diffuseColor = new SFColor(new float[0.9,0.9,0.9]);
Appearance23.material = Material24;

Shape22.appearance = Appearance23;

Text Text25 = createNode("Text");
Text25.string = new MFString(new java.lang.String["Diamond Man Key"]);
FontStyle FontStyle26 = createNode("FontStyle");
FontStyle26.family = new MFString(new java.lang.String["SANS"]);
FontStyle26.size = 0.1;
Text25.fontStyle = FontStyle26;

Shape22.geometry = Text25;

Billboard21.children = new MFNode();

Billboard21.children[0] = Shape22;

Transform Transform27 = createNode("Transform");
Transform27.translation = new SFVec3f(new float[0,-0.3,0]);
Shape Shape28 = createNode("Shape");
Appearance Appearance29 = createNode("Appearance");
Material Material30 = createNode("Material");
Material30.DEF = "MIN_COLOR";
Material30.diffuseColor = new SFColor(new float[1,0,0]);
Appearance29.material = Material30;

Shape28.appearance = Appearance29;

Sphere Sphere31 = createNode("Sphere");
Sphere31.radius = 0.08;
Shape28.geometry = Sphere31;

Transform27.child = new undefined();

Transform27.child[0] = Shape28;

Transform Transform32 = createNode("Transform");
Transform32.translation = new SFVec3f(new float[0.2,0,0]);
Shape Shape33 = createNode("Shape");
Appearance Appearance34 = createNode("Appearance");
Material Material35 = createNode("Material");
Material35.USE = "TextMaterial";
Appearance34.material = Material35;

Shape33.appearance = Appearance34;

Text Text36 = createNode("Text");
Text36.string = new MFString(new java.lang.String["Minimal Humanoid Joints"]);
FontStyle FontStyle37 = createNode("FontStyle");
FontStyle37.family = new MFString(new java.lang.String["SANS"]);
FontStyle37.size = 0.1;
Text36.fontStyle = FontStyle37;

Shape33.geometry = Text36;

Transform32.child = new undefined();

Transform32.child[0] = Shape33;

Transform27.children[1] = Transform32;

Billboard21.children[1] = Transform27;

Transform Transform38 = createNode("Transform");
Transform38.translation = new SFVec3f(new float[0,-0.5,0]);
Shape Shape39 = createNode("Shape");
Appearance Appearance40 = createNode("Appearance");
Material Material41 = createNode("Material");
Material41.DEF = "JOINT_COLOR";
Material41.diffuseColor = new SFColor(new float[1,1,0]);
Appearance40.material = Material41;

Shape39.appearance = Appearance40;

Sphere Sphere42 = createNode("Sphere");
Sphere42.radius = 0.08;
Shape39.geometry = Sphere42;

Transform38.child = new undefined();

Transform38.child[0] = Shape39;

Transform Transform43 = createNode("Transform");
Transform43.translation = new SFVec3f(new float[0.2,0,0]);
Shape Shape44 = createNode("Shape");
Appearance Appearance45 = createNode("Appearance");
Material Material46 = createNode("Material");
Material46.USE = "TextMaterial";
Appearance45.material = Material46;

Shape44.appearance = Appearance45;

Text Text47 = createNode("Text");
Text47.string = new MFString(new java.lang.String["Humanoid Joints"]);
FontStyle FontStyle48 = createNode("FontStyle");
FontStyle48.family = new MFString(new java.lang.String["SANS"]);
FontStyle48.size = 0.1;
Text47.fontStyle = FontStyle48;

Shape44.geometry = Text47;

Transform43.child = new undefined();

Transform43.child[0] = Shape44;

Transform38.children[1] = Transform43;

Billboard21.children[2] = Transform38;

Transform Transform49 = createNode("Transform");
Transform49.translation = new SFVec3f(new float[0,-0.7,0]);
Shape Shape50 = createNode("Shape");
Appearance Appearance51 = createNode("Appearance");
Material Material52 = createNode("Material");
Material52.DEF = "REC_SPINAL_COLOR";
Material52.diffuseColor = new SFColor(new float[1,0,1]);
Appearance51.material = Material52;

Shape50.appearance = Appearance51;

Sphere Sphere53 = createNode("Sphere");
Sphere53.radius = 0.08;
Shape50.geometry = Sphere53;

Transform49.child = new undefined();

Transform49.child[0] = Shape50;

Transform Transform54 = createNode("Transform");
Transform54.translation = new SFVec3f(new float[0.2,0,0]);
Shape Shape55 = createNode("Shape");
Appearance Appearance56 = createNode("Appearance");
Material Material57 = createNode("Material");
Material57.USE = "TextMaterial";
Appearance56.material = Material57;

Shape55.appearance = Appearance56;

Text Text58 = createNode("Text");
Text58.string = new MFString(new java.lang.String["Recommended Spinal Joints"]);
FontStyle FontStyle59 = createNode("FontStyle");
FontStyle59.family = new MFString(new java.lang.String["SANS"]);
FontStyle59.size = 0.1;
Text58.fontStyle = FontStyle59;

Shape55.geometry = Text58;

Transform54.child = new undefined();

Transform54.child[0] = Shape55;

Transform49.children[1] = Transform54;

Billboard21.children[3] = Transform49;

Transform Transform60 = createNode("Transform");
Transform60.translation = new SFVec3f(new float[0,-0.9,0]);
Shape Shape61 = createNode("Shape");
Appearance Appearance62 = createNode("Appearance");
Material Material63 = createNode("Material");
Material63.DEF = "SPINAL_COLOR";
Material63.diffuseColor = new SFColor(new float[0,1,0]);
Appearance62.material = Material63;

Shape61.appearance = Appearance62;

Sphere Sphere64 = createNode("Sphere");
Sphere64.radius = 0.08;
Shape61.geometry = Sphere64;

Transform60.child = new undefined();

Transform60.child[0] = Shape61;

Transform Transform65 = createNode("Transform");
Transform65.translation = new SFVec3f(new float[0.2,0,0]);
Shape Shape66 = createNode("Shape");
Appearance Appearance67 = createNode("Appearance");
Material Material68 = createNode("Material");
Material68.USE = "TextMaterial";
Appearance67.material = Material68;

Shape66.appearance = Appearance67;

Text Text69 = createNode("Text");
Text69.string = new MFString(new java.lang.String["Spinal Joints"]);
FontStyle FontStyle70 = createNode("FontStyle");
FontStyle70.family = new MFString(new java.lang.String["SANS"]);
FontStyle70.size = 0.1;
Text69.fontStyle = FontStyle70;

Shape66.geometry = Text69;

Transform65.child = new undefined();

Transform65.child[0] = Shape66;

Transform60.children[1] = Transform65;

Billboard21.children[4] = Transform60;

Transform Transform71 = createNode("Transform");
Transform71.translation = new SFVec3f(new float[0,-1.3,0]);
Shape Shape72 = createNode("Shape");
Appearance Appearance73 = createNode("Appearance");
Material Material74 = createNode("Material");
Material74.DEF = "SITE_COLOR";
Material74.diffuseColor = new SFColor(new float[0,0,1]);
Appearance73.material = Material74;

Shape72.appearance = Appearance73;

Sphere Sphere75 = createNode("Sphere");
Sphere75.radius = 0.08;
Shape72.geometry = Sphere75;

Transform71.child = new undefined();

Transform71.child[0] = Shape72;

Transform Transform76 = createNode("Transform");
Transform76.translation = new SFVec3f(new float[0.2,0,0]);
Shape Shape77 = createNode("Shape");
Appearance Appearance78 = createNode("Appearance");
Material Material79 = createNode("Material");
Material79.USE = "TextMaterial";
Appearance78.material = Material79;

Shape77.appearance = Appearance78;

Text Text80 = createNode("Text");
Text80.string = new MFString(new java.lang.String["Humanoid Sites"]);
FontStyle FontStyle81 = createNode("FontStyle");
FontStyle81.family = new MFString(new java.lang.String["SANS"]);
FontStyle81.size = 0.1;
Text80.fontStyle = FontStyle81;

Shape77.geometry = Text80;

Transform76.child = new undefined();

Transform76.child[0] = Shape77;

Transform71.children[1] = Transform76;

Billboard21.children[5] = Transform71;

Transform Transform82 = createNode("Transform");
Transform82.translation = new SFVec3f(new float[0,-1.1,0]);
Shape Shape83 = createNode("Shape");
Appearance Appearance84 = createNode("Appearance");
Material Material85 = createNode("Material");
Material85.DEF = "HAND_FEET_COLOR";
Material85.diffuseColor = new SFColor(new float[0,1,1]);
Appearance84.material = Material85;

Shape83.appearance = Appearance84;

Sphere Sphere86 = createNode("Sphere");
Sphere86.radius = 0.08;
Shape83.geometry = Sphere86;

Transform82.child = new undefined();

Transform82.child[0] = Shape83;

Transform Transform87 = createNode("Transform");
Transform87.translation = new SFVec3f(new float[0.2,0,0]);
Shape Shape88 = createNode("Shape");
Appearance Appearance89 = createNode("Appearance");
Material Material90 = createNode("Material");
Material90.USE = "TextMaterial";
Appearance89.material = Material90;

Shape88.appearance = Appearance89;

Text Text91 = createNode("Text");
Text91.string = new MFString(new java.lang.String["Hand & Feet Joints"]);
FontStyle FontStyle92 = createNode("FontStyle");
FontStyle92.family = new MFString(new java.lang.String["SANS"]);
FontStyle92.size = 0.1;
Text91.fontStyle = FontStyle92;

Shape88.geometry = Text91;

Transform87.child = new undefined();

Transform87.child[0] = Shape88;

Transform82.children[1] = Transform87;

Billboard21.children[6] = Transform82;

Transform20.children = new MFNode();

Transform20.children[0] = Billboard21;

children[3] = Transform20;

HAnimHumanoid HAnimHumanoid93 = createNode("HAnimHumanoid");
HAnimHumanoid93.DEF = "hanim_humanoid";
HAnimHumanoid93.name = "humanoid";
HAnimHumanoid93.loa = 2;
MetadataSet MetadataSet94 = createNode("MetadataSet");
MetadataSet94.name = "HAnimHumanoid.info";
MetadataSet94.reference = "https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid";
MetadataString MetadataString95 = createNode("MetadataString");
MetadataString95.name = "humanoidVersion";
MetadataSet94.value = new MFNode();

MetadataSet94.value[0] = MetadataString95;

MetadataString MetadataString96 = createNode("MetadataString");
MetadataString96.name = "authorEmail";
MetadataSet94.value[1] = MetadataString96;

MetadataString MetadataString97 = createNode("MetadataString");
MetadataString97.name = "authorName";
MetadataSet94.value[2] = MetadataString97;

HAnimHumanoid93.metadata = new SFNode();

HAnimHumanoid93.metadata[0] = MetadataSet94;

HAnimJoint HAnimJoint98 = createNode("HAnimJoint");
HAnimJoint98.DEF = "hanim_humanoid_root";
HAnimJoint98.name = "humanoid_root";
HAnimJoint98.center = new SFVec3f(new float[0,0.824,0.0277]);
HAnimSegment HAnimSegment99 = createNode("HAnimSegment");
HAnimSegment99.DEF = "hanim_sacrum";
HAnimSegment99.name = "sacrum";
Transform Transform100 = createNode("Transform");
Transform100.translation = new SFVec3f(new float[0,0.824,0.0277]);
Shape Shape101 = createNode("Shape");
Shape101.DEF = "DiamondShape";
Appearance Appearance102 = createNode("Appearance");
Material Material103 = createNode("Material");
Material103.DEF = "ROOT_COLOR";
Material103.diffuseColor = new SFColor(new float[1,1,1]);
Appearance102.material = Material103;

Shape101.appearance = Appearance102;

IndexedFaceSet IndexedFaceSet104 = createNode("IndexedFaceSet");
IndexedFaceSet104.creaseAngle = 0.5;
IndexedFaceSet104.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
Coordinate Coordinate105 = createNode("Coordinate");
Coordinate105.DEF = "points";
Coordinate105.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet104.coord = Coordinate105;

Shape101.geometry = IndexedFaceSet104;

Transform100.child = new undefined();

Transform100.child[0] = Shape101;

Transform Transform106 = createNode("Transform");
Transform106.translation = new SFVec3f(new float[0,0.01,0]);
Billboard Billboard107 = createNode("Billboard");
Shape Shape108 = createNode("Shape");
Appearance Appearance109 = createNode("Appearance");
Material Material110 = createNode("Material");
Material110.diffuseColor = new SFColor(new float[0.039216,1,0.568627]);
Appearance109.material = Material110;

Shape108.appearance = Appearance109;

Text Text111 = createNode("Text");
Text111.string = new MFString(new java.lang.String["Humanoid Root"]);
FontStyle FontStyle112 = createNode("FontStyle");
FontStyle112.family = new MFString(new java.lang.String["SANS"]);
FontStyle112.style = "ITALIC";
FontStyle112.size = 0.01;
Text111.fontStyle = FontStyle112;

Shape108.geometry = Text111;

Billboard107.children = new MFNode();

Billboard107.children[0] = Shape108;

Transform106.children = new MFNode();

Transform106.children[0] = Billboard107;

Transform100.children[1] = Transform106;

HAnimSegment99.children = new MFNode();

HAnimSegment99.children[0] = Transform100;

HAnimJoint98.children = new MFNode();

HAnimJoint98.children[0] = HAnimSegment99;

HAnimJoint HAnimJoint113 = createNode("HAnimJoint");
HAnimJoint113.DEF = "hanim_sacroiliac";
HAnimJoint113.name = "sacroiliac";
HAnimJoint113.center = new SFVec3f(new float[0,0.9149,0.0016]);
HAnimSegment HAnimSegment114 = createNode("HAnimSegment");
HAnimSegment114.DEF = "hanim_pelvis";
HAnimSegment114.name = "pelvis";
Transform Transform115 = createNode("Transform");
Transform115.DEF = "sacroiliacPos";
Transform115.translation = new SFVec3f(new float[0,0.9149,0.0016]);
Shape Shape116 = createNode("Shape");
Appearance Appearance117 = createNode("Appearance");
Material Material118 = createNode("Material");
Material118.USE = "MIN_COLOR";
Appearance117.material = Material118;

Shape116.appearance = Appearance117;

IndexedFaceSet IndexedFaceSet119 = createNode("IndexedFaceSet");
IndexedFaceSet119.creaseAngle = 0.5;
IndexedFaceSet119.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
Coordinate Coordinate120 = createNode("Coordinate");
Coordinate120.USE = "points";
IndexedFaceSet119.coord = Coordinate120;

Shape116.geometry = IndexedFaceSet119;

Transform115.child = new undefined();

Transform115.child[0] = Shape116;

HAnimSegment114.children = new MFNode();

HAnimSegment114.children[0] = Transform115;

HAnimSite HAnimSite121 = createNode("HAnimSite");
HAnimSite121.DEF = "hanim_r_iliocristale_pt";
HAnimSite121.name = "r_iliocristale_pt";
HAnimSite121.translation = new SFVec3f(new float[-0.1525,1.0628,0.0035]);
Shape Shape122 = createNode("Shape");
Appearance Appearance123 = createNode("Appearance");
Material Material124 = createNode("Material");
Material124.USE = "SITE_COLOR";
Appearance123.material = Material124;

Shape122.appearance = Appearance123;

IndexedFaceSet IndexedFaceSet125 = createNode("IndexedFaceSet");
IndexedFaceSet125.creaseAngle = 0.5;
IndexedFaceSet125.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
Coordinate Coordinate126 = createNode("Coordinate");
Coordinate126.USE = "points";
IndexedFaceSet125.coord = Coordinate126;

Shape122.geometry = IndexedFaceSet125;

HAnimSite121.children = new MFNode();

HAnimSite121.children[0] = Shape122;

HAnimSegment114.children[1] = HAnimSite121;

HAnimSite HAnimSite127 = createNode("HAnimSite");
HAnimSite127.DEF = "hanim_r_trochanterion_pt";
HAnimSite127.name = "r_trochanterion_pt";
HAnimSite127.translation = new SFVec3f(new float[-0.1689,0.8419,0.0352]);
Shape Shape128 = createNode("Shape");
Appearance Appearance129 = createNode("Appearance");
Material Material130 = createNode("Material");
Material130.USE = "SITE_COLOR";
Appearance129.material = Material130;

Shape128.appearance = Appearance129;

IndexedFaceSet IndexedFaceSet131 = createNode("IndexedFaceSet");
IndexedFaceSet131.creaseAngle = 0.5;
IndexedFaceSet131.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
Coordinate Coordinate132 = createNode("Coordinate");
Coordinate132.USE = "points";
IndexedFaceSet131.coord = Coordinate132;

Shape128.geometry = IndexedFaceSet131;

HAnimSite127.children = new MFNode();

HAnimSite127.children[0] = Shape128;

HAnimSegment114.children[2] = HAnimSite127;

HAnimSite HAnimSite133 = createNode("HAnimSite");
HAnimSite133.DEF = "hanim_l_iliocristale_pt";
HAnimSite133.name = "l_iliocristale_pt";
HAnimSite133.translation = new SFVec3f(new float[0.1612,1.0537,0.0008]);
Shape Shape134 = createNode("Shape");
Appearance Appearance135 = createNode("Appearance");
Material Material136 = createNode("Material");
Material136.USE = "SITE_COLOR";
Appearance135.material = Material136;

Shape134.appearance = Appearance135;

IndexedFaceSet IndexedFaceSet137 = createNode("IndexedFaceSet");
IndexedFaceSet137.creaseAngle = 0.5;
IndexedFaceSet137.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
Coordinate Coordinate138 = createNode("Coordinate");
Coordinate138.USE = "points";
IndexedFaceSet137.coord = Coordinate138;

Shape134.geometry = IndexedFaceSet137;

HAnimSite133.children = new MFNode();

HAnimSite133.children[0] = Shape134;

HAnimSegment114.children[3] = HAnimSite133;

HAnimSite HAnimSite139 = createNode("HAnimSite");
HAnimSite139.DEF = "hanim_l_trochanterion_pt";
HAnimSite139.name = "l_trochanterion_pt";
HAnimSite139.translation = new SFVec3f(new float[0.1677,0.8336,0.0303]);
Shape Shape140 = createNode("Shape");
Appearance Appearance141 = createNode("Appearance");
Material Material142 = createNode("Material");
Material142.USE = "SITE_COLOR";
Appearance141.material = Material142;

Shape140.appearance = Appearance141;

IndexedFaceSet IndexedFaceSet143 = createNode("IndexedFaceSet");
IndexedFaceSet143.creaseAngle = 0.5;
IndexedFaceSet143.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
Coordinate Coordinate144 = createNode("Coordinate");
Coordinate144.USE = "points";
IndexedFaceSet143.coord = Coordinate144;

Shape140.geometry = IndexedFaceSet143;

HAnimSite139.children = new MFNode();

HAnimSite139.children[0] = Shape140;

HAnimSegment114.children[4] = HAnimSite139;

HAnimSite HAnimSite145 = createNode("HAnimSite");
HAnimSite145.DEF = "hanim_r_asis_pt";
HAnimSite145.name = "r_asis_pt";
HAnimSite145.translation = new SFVec3f(new float[-0.0887,1.0021,0.1112]);
Shape Shape146 = createNode("Shape");
Appearance Appearance147 = createNode("Appearance");
Material Material148 = createNode("Material");
Material148.USE = "SITE_COLOR";
Appearance147.material = Material148;

Shape146.appearance = Appearance147;

IndexedFaceSet IndexedFaceSet149 = createNode("IndexedFaceSet");
IndexedFaceSet149.creaseAngle = 0.5;
IndexedFaceSet149.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
Coordinate Coordinate150 = createNode("Coordinate");
Coordinate150.USE = "points";
IndexedFaceSet149.coord = Coordinate150;

Shape146.geometry = IndexedFaceSet149;

HAnimSite145.children = new MFNode();

HAnimSite145.children[0] = Shape146;

HAnimSegment114.children[5] = HAnimSite145;

HAnimSite HAnimSite151 = createNode("HAnimSite");
HAnimSite151.DEF = "hanim_l_asis_pt";
HAnimSite151.name = "l_asis_pt";
HAnimSite151.translation = new SFVec3f(new float[0.0925,0.9983,0.1052]);
Shape Shape152 = createNode("Shape");
Appearance Appearance153 = createNode("Appearance");
Material Material154 = createNode("Material");
Material154.USE = "SITE_COLOR";
Appearance153.material = Material154;

Shape152.appearance = Appearance153;

IndexedFaceSet IndexedFaceSet155 = createNode("IndexedFaceSet");
IndexedFaceSet155.creaseAngle = 0.5;
IndexedFaceSet155.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
Coordinate Coordinate156 = createNode("Coordinate");
Coordinate156.USE = "points";
IndexedFaceSet155.coord = Coordinate156;

Shape152.geometry = IndexedFaceSet155;

HAnimSite151.children = new MFNode();

HAnimSite151.children[0] = Shape152;

HAnimSegment114.children[6] = HAnimSite151;

HAnimSite HAnimSite157 = createNode("HAnimSite");
HAnimSite157.DEF = "hanim_r_psis_pt";
HAnimSite157.name = "r_psis_pt";
HAnimSite157.translation = new SFVec3f(new float[-0.0716,1.019,-0.1138]);
Shape Shape158 = createNode("Shape");
Appearance Appearance159 = createNode("Appearance");
Material Material160 = createNode("Material");
Material160.USE = "SITE_COLOR";
Appearance159.material = Material160;

Shape158.appearance = Appearance159;

IndexedFaceSet IndexedFaceSet161 = createNode("IndexedFaceSet");
IndexedFaceSet161.creaseAngle = 0.5;
IndexedFaceSet161.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
Coordinate Coordinate162 = createNode("Coordinate");
Coordinate162.USE = "points";
IndexedFaceSet161.coord = Coordinate162;

Shape158.geometry = IndexedFaceSet161;

HAnimSite157.children = new MFNode();

HAnimSite157.children[0] = Shape158;

HAnimSegment114.children[7] = HAnimSite157;

HAnimSite HAnimSite163 = createNode("HAnimSite");
HAnimSite163.DEF = "hanim_l_psis_pt";
HAnimSite163.name = "l_psis_pt";
HAnimSite163.translation = new SFVec3f(new float[0.0774,1.019,-0.1151]);
Shape Shape164 = createNode("Shape");
Appearance Appearance165 = createNode("Appearance");
Material Material166 = createNode("Material");
Material166.USE = "SITE_COLOR";
Appearance165.material = Material166;

Shape164.appearance = Appearance165;

IndexedFaceSet IndexedFaceSet167 = createNode("IndexedFaceSet");
IndexedFaceSet167.creaseAngle = 0.5;
IndexedFaceSet167.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
Coordinate Coordinate168 = createNode("Coordinate");
Coordinate168.USE = "points";
IndexedFaceSet167.coord = Coordinate168;

Shape164.geometry = IndexedFaceSet167;

HAnimSite163.children = new MFNode();

HAnimSite163.children[0] = Shape164;

HAnimSegment114.children[8] = HAnimSite163;

HAnimSite HAnimSite169 = createNode("HAnimSite");
HAnimSite169.DEF = "hanim_crotch_pt";
HAnimSite169.name = "crotch_pt";
HAnimSite169.translation = new SFVec3f(new float[0.0034,0.8266,0.0257]);
Shape Shape170 = createNode("Shape");
Appearance Appearance171 = createNode("Appearance");
Material Material172 = createNode("Material");
Material172.USE = "SITE_COLOR";
Appearance171.material = Material172;

Shape170.appearance = Appearance171;

IndexedFaceSet IndexedFaceSet173 = createNode("IndexedFaceSet");
IndexedFaceSet173.creaseAngle = 0.5;
IndexedFaceSet173.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
Coordinate Coordinate174 = createNode("Coordinate");
Coordinate174.USE = "points";
IndexedFaceSet173.coord = Coordinate174;

Shape170.geometry = IndexedFaceSet173;

HAnimSite169.children = new MFNode();

HAnimSite169.children[0] = Shape170;

HAnimSegment114.children[9] = HAnimSite169;

HAnimJoint113.children = new MFNode();

HAnimJoint113.children[0] = HAnimSegment114;

HAnimJoint HAnimJoint175 = createNode("HAnimJoint");
HAnimJoint175.DEF = "hanim_l_hip";
HAnimJoint175.name = "l_hip";
HAnimJoint175.center = new SFVec3f(new float[0.0961,0.9124,-0.0001]);
HAnimSegment HAnimSegment176 = createNode("HAnimSegment");
HAnimSegment176.DEF = "hanim_l_thigh";
HAnimSegment176.name = "l_thigh";
Transform Transform177 = createNode("Transform");
Transform177.translation = new SFVec3f(new float[0.0961,0.9124,-0.0001]);
Shape Shape178 = createNode("Shape");
Appearance Appearance179 = createNode("Appearance");
Material Material180 = createNode("Material");
Material180.USE = "MIN_COLOR";
Appearance179.material = Material180;

Shape178.appearance = Appearance179;

IndexedFaceSet IndexedFaceSet181 = createNode("IndexedFaceSet");
IndexedFaceSet181.creaseAngle = 0.5;
IndexedFaceSet181.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
Coordinate Coordinate182 = createNode("Coordinate");
Coordinate182.USE = "points";
IndexedFaceSet181.coord = Coordinate182;

Shape178.geometry = IndexedFaceSet181;

Transform177.child = new undefined();

Transform177.child[0] = Shape178;

HAnimSegment176.children = new MFNode();

HAnimSegment176.children[0] = Transform177;

HAnimSite HAnimSite183 = createNode("HAnimSite");
HAnimSite183.DEF = "hanim_l_knee_crease_pt";
HAnimSite183.name = "l_knee_crease_pt";
HAnimSite183.translation = new SFVec3f(new float[0.0993,0.4881,-0.0309]);
Shape Shape184 = createNode("Shape");
Appearance Appearance185 = createNode("Appearance");
Material Material186 = createNode("Material");
Material186.USE = "SITE_COLOR";
Appearance185.material = Material186;

Shape184.appearance = Appearance185;

IndexedFaceSet IndexedFaceSet187 = createNode("IndexedFaceSet");
IndexedFaceSet187.creaseAngle = 0.5;
IndexedFaceSet187.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
Coordinate Coordinate188 = createNode("Coordinate");
Coordinate188.USE = "points";
IndexedFaceSet187.coord = Coordinate188;

Shape184.geometry = IndexedFaceSet187;

HAnimSite183.children = new MFNode();

HAnimSite183.children[0] = Shape184;

HAnimSegment176.children[1] = HAnimSite183;

HAnimSite HAnimSite189 = createNode("HAnimSite");
HAnimSite189.DEF = "hanim_l_femoral_lateral_epicondyle_pt";
HAnimSite189.name = "l_femoral_lateral_epicondyle_pt";
HAnimSite189.translation = new SFVec3f(new float[0.1598,0.4967,0.0297]);
Shape Shape190 = createNode("Shape");
Appearance Appearance191 = createNode("Appearance");
Material Material192 = createNode("Material");
Material192.USE = "SITE_COLOR";
Appearance191.material = Material192;

Shape190.appearance = Appearance191;

IndexedFaceSet IndexedFaceSet193 = createNode("IndexedFaceSet");
IndexedFaceSet193.creaseAngle = 0.5;
IndexedFaceSet193.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
Coordinate Coordinate194 = createNode("Coordinate");
Coordinate194.USE = "points";
IndexedFaceSet193.coord = Coordinate194;

Shape190.geometry = IndexedFaceSet193;

HAnimSite189.children = new MFNode();

HAnimSite189.children[0] = Shape190;

HAnimSegment176.children[2] = HAnimSite189;

HAnimSite HAnimSite195 = createNode("HAnimSite");
HAnimSite195.DEF = "hanim_l_femoral_medial_epicondyle_pt";
HAnimSite195.name = "l_femoral_medial_epicondyle_pt";
HAnimSite195.translation = new SFVec3f(new float[0.0398,0.4946,0.0303]);
Shape Shape196 = createNode("Shape");
Appearance Appearance197 = createNode("Appearance");
Material Material198 = createNode("Material");
Material198.USE = "SITE_COLOR";
Appearance197.material = Material198;

Shape196.appearance = Appearance197;

IndexedFaceSet IndexedFaceSet199 = createNode("IndexedFaceSet");
IndexedFaceSet199.creaseAngle = 0.5;
IndexedFaceSet199.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
Coordinate Coordinate200 = createNode("Coordinate");
Coordinate200.USE = "points";
IndexedFaceSet199.coord = Coordinate200;

Shape196.geometry = IndexedFaceSet199;

HAnimSite195.children = new MFNode();

HAnimSite195.children[0] = Shape196;

HAnimSegment176.children[3] = HAnimSite195;

HAnimJoint175.children = new MFNode();

HAnimJoint175.children[0] = HAnimSegment176;

HAnimJoint HAnimJoint201 = createNode("HAnimJoint");
HAnimJoint201.DEF = "hanim_l_knee";
HAnimJoint201.name = "l_knee";
HAnimJoint201.center = new SFVec3f(new float[0.104,0.4867,0.0308]);
HAnimSegment HAnimSegment202 = createNode("HAnimSegment");
HAnimSegment202.DEF = "hanim_l_calf";
HAnimSegment202.name = "l_calf";
Transform Transform203 = createNode("Transform");
Transform203.translation = new SFVec3f(new float[0.104,0.4867,0.0308]);
Shape Shape204 = createNode("Shape");
Appearance Appearance205 = createNode("Appearance");
Material Material206 = createNode("Material");
Material206.USE = "MIN_COLOR";
Appearance205.material = Material206;

Shape204.appearance = Appearance205;

IndexedFaceSet IndexedFaceSet207 = createNode("IndexedFaceSet");
IndexedFaceSet207.creaseAngle = 0.5;
IndexedFaceSet207.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
Coordinate Coordinate208 = createNode("Coordinate");
Coordinate208.USE = "points";
IndexedFaceSet207.coord = Coordinate208;

Shape204.geometry = IndexedFaceSet207;

Transform203.child = new undefined();

Transform203.child[0] = Shape204;

HAnimSegment202.children = new MFNode();

HAnimSegment202.children[0] = Transform203;

HAnimJoint201.children = new MFNode();

HAnimJoint201.children[0] = HAnimSegment202;

HAnimJoint HAnimJoint209 = createNode("HAnimJoint");
HAnimJoint209.DEF = "hanim_l_talocrural";
HAnimJoint209.name = "l_talocrural";
HAnimJoint209.center = new SFVec3f(new float[0.1101,0.0656,-0.0736]);
HAnimSegment HAnimSegment210 = createNode("HAnimSegment");
HAnimSegment210.DEF = "hanim_l_talus";
HAnimSegment210.name = "l_talus";
Transform Transform211 = createNode("Transform");
Transform211.translation = new SFVec3f(new float[0.1101,0.0656,-0.0736]);
Shape Shape212 = createNode("Shape");
Appearance Appearance213 = createNode("Appearance");
Material Material214 = createNode("Material");
Material214.USE = "MIN_COLOR";
Appearance213.material = Material214;

Shape212.appearance = Appearance213;

IndexedFaceSet IndexedFaceSet215 = createNode("IndexedFaceSet");
IndexedFaceSet215.creaseAngle = 0.5;
IndexedFaceSet215.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
Coordinate Coordinate216 = createNode("Coordinate");
Coordinate216.USE = "points";
IndexedFaceSet215.coord = Coordinate216;

Shape212.geometry = IndexedFaceSet215;

Transform211.child = new undefined();

Transform211.child[0] = Shape212;

HAnimSegment210.children = new MFNode();

HAnimSegment210.children[0] = Transform211;

HAnimSite HAnimSite217 = createNode("HAnimSite");
HAnimSite217.DEF = "hanim_l_lateral_malleolus_pt";
HAnimSite217.name = "l_lateral_malleolus_pt";
HAnimSite217.translation = new SFVec3f(new float[0.1308,0.0597,-0.1032]);
Shape Shape218 = createNode("Shape");
Appearance Appearance219 = createNode("Appearance");
Material Material220 = createNode("Material");
Material220.USE = "HAND_FEET_COLOR";
Appearance219.material = Material220;

Shape218.appearance = Appearance219;

IndexedFaceSet IndexedFaceSet221 = createNode("IndexedFaceSet");
IndexedFaceSet221.creaseAngle = 0.5;
IndexedFaceSet221.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
Coordinate Coordinate222 = createNode("Coordinate");
Coordinate222.USE = "points";
IndexedFaceSet221.coord = Coordinate222;

Shape218.geometry = IndexedFaceSet221;

HAnimSite217.children = new MFNode();

HAnimSite217.children[0] = Shape218;

HAnimSegment210.children[1] = HAnimSite217;

HAnimSite HAnimSite223 = createNode("HAnimSite");
HAnimSite223.DEF = "hanim_l_medial_malleolus_pt";
HAnimSite223.name = "l_medial_malleolus_pt";
HAnimSite223.translation = new SFVec3f(new float[0.089,0.0716,-0.0881]);
Shape Shape224 = createNode("Shape");
Appearance Appearance225 = createNode("Appearance");
Material Material226 = createNode("Material");
Material226.USE = "HAND_FEET_COLOR";
Appearance225.material = Material226;

Shape224.appearance = Appearance225;

IndexedFaceSet IndexedFaceSet227 = createNode("IndexedFaceSet");
IndexedFaceSet227.creaseAngle = 0.5;
IndexedFaceSet227.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
Coordinate Coordinate228 = createNode("Coordinate");
Coordinate228.USE = "points";
IndexedFaceSet227.coord = Coordinate228;

Shape224.geometry = IndexedFaceSet227;

HAnimSite223.children = new MFNode();

HAnimSite223.children[0] = Shape224;

HAnimSegment210.children[2] = HAnimSite223;

HAnimSite HAnimSite229 = createNode("HAnimSite");
HAnimSite229.DEF = "hanim_l_sphyrion_pt";
HAnimSite229.name = "l_sphyrion_pt";
HAnimSite229.translation = new SFVec3f(new float[0.089,0.0575,-0.0943]);
Shape Shape230 = createNode("Shape");
Appearance Appearance231 = createNode("Appearance");
Material Material232 = createNode("Material");
Material232.USE = "HAND_FEET_COLOR";
Appearance231.material = Material232;

Shape230.appearance = Appearance231;

IndexedFaceSet IndexedFaceSet233 = createNode("IndexedFaceSet");
IndexedFaceSet233.creaseAngle = 0.5;
IndexedFaceSet233.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
Coordinate Coordinate234 = createNode("Coordinate");
Coordinate234.USE = "points";
IndexedFaceSet233.coord = Coordinate234;

Shape230.geometry = IndexedFaceSet233;

HAnimSite229.children = new MFNode();

HAnimSite229.children[0] = Shape230;

HAnimSegment210.children[3] = HAnimSite229;

HAnimSite HAnimSite235 = createNode("HAnimSite");
HAnimSite235.DEF = "hanim_l_calcaneus_posterior_pt";
HAnimSite235.name = "l_calcaneus_posterior_pt";
HAnimSite235.translation = new SFVec3f(new float[0.0974,0.0259,-0.1171]);
Shape Shape236 = createNode("Shape");
Appearance Appearance237 = createNode("Appearance");
Material Material238 = createNode("Material");
Material238.USE = "HAND_FEET_COLOR";
Appearance237.material = Material238;

Shape236.appearance = Appearance237;

IndexedFaceSet IndexedFaceSet239 = createNode("IndexedFaceSet");
IndexedFaceSet239.creaseAngle = 0.5;
IndexedFaceSet239.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
Coordinate Coordinate240 = createNode("Coordinate");
Coordinate240.USE = "points";
IndexedFaceSet239.coord = Coordinate240;

Shape236.geometry = IndexedFaceSet239;

HAnimSite235.children = new MFNode();

HAnimSite235.children[0] = Shape236;

HAnimSegment210.children[4] = HAnimSite235;

HAnimJoint209.children = new MFNode();

HAnimJoint209.children[0] = HAnimSegment210;

HAnimJoint HAnimJoint241 = createNode("HAnimJoint");
HAnimJoint241.DEF = "hanim_l_tarsometatarsal_2";
HAnimJoint241.name = "l_tarsometatarsal_2";
HAnimJoint241.center = new SFVec3f(new float[0.1086,0.0001,-0.0368]);
HAnimSegment HAnimSegment242 = createNode("HAnimSegment");
HAnimSegment242.DEF = "hanim_l_metatarsal_2";
HAnimSegment242.name = "l_metatarsal_2";
Transform Transform243 = createNode("Transform");
Transform243.translation = new SFVec3f(new float[0.1086,0.0001,-0.0368]);
Shape Shape244 = createNode("Shape");
Appearance Appearance245 = createNode("Appearance");
Material Material246 = createNode("Material");
Material246.USE = "MIN_COLOR";
Appearance245.material = Material246;

Shape244.appearance = Appearance245;

IndexedFaceSet IndexedFaceSet247 = createNode("IndexedFaceSet");
IndexedFaceSet247.creaseAngle = 0.5;
IndexedFaceSet247.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
Coordinate Coordinate248 = createNode("Coordinate");
Coordinate248.USE = "points";
IndexedFaceSet247.coord = Coordinate248;

Shape244.geometry = IndexedFaceSet247;

Transform243.child = new undefined();

Transform243.child[0] = Shape244;

HAnimSegment242.children = new MFNode();

HAnimSegment242.children[0] = Transform243;

HAnimJoint241.children = new MFNode();

HAnimJoint241.children[0] = HAnimSegment242;

HAnimJoint HAnimJoint249 = createNode("HAnimJoint");
HAnimJoint249.DEF = "hanim_l_metatarsophalangeal_2";
HAnimJoint249.name = "l_metatarsophalangeal_2";
HAnimJoint249.center = new SFVec3f(new float[0.1086,0.0001,0.0368]);
HAnimSegment HAnimSegment250 = createNode("HAnimSegment");
HAnimSegment250.DEF = "hanim_l_tarsal_proximal_phalanx_2";
HAnimSegment250.name = "l_tarsal_proximal_phalanx_2";
Transform Transform251 = createNode("Transform");
Transform251.translation = new SFVec3f(new float[0.1086,0.0001,0.0368]);
Shape Shape252 = createNode("Shape");
Appearance Appearance253 = createNode("Appearance");
Material Material254 = createNode("Material");
Material254.USE = "JOINT_COLOR";
Appearance253.material = Material254;

Shape252.appearance = Appearance253;

IndexedFaceSet IndexedFaceSet255 = createNode("IndexedFaceSet");
IndexedFaceSet255.creaseAngle = 0.5;
IndexedFaceSet255.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
Coordinate Coordinate256 = createNode("Coordinate");
Coordinate256.USE = "points";
IndexedFaceSet255.coord = Coordinate256;

Shape252.geometry = IndexedFaceSet255;

Transform251.child = new undefined();

Transform251.child[0] = Shape252;

HAnimSegment250.children = new MFNode();

HAnimSegment250.children[0] = Transform251;

HAnimSite HAnimSite257 = createNode("HAnimSite");
HAnimSite257.DEF = "hanim_l_middistal_tip";
HAnimSite257.name = "l_middistal_tip";
HAnimSite257.translation = new SFVec3f(new float[0.1354,0.0016,0.1476]);
Shape Shape258 = createNode("Shape");
Appearance Appearance259 = createNode("Appearance");
Material Material260 = createNode("Material");
Material260.USE = "HAND_FEET_COLOR";
Appearance259.material = Material260;

Shape258.appearance = Appearance259;

IndexedFaceSet IndexedFaceSet261 = createNode("IndexedFaceSet");
IndexedFaceSet261.creaseAngle = 0.5;
IndexedFaceSet261.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
Coordinate Coordinate262 = createNode("Coordinate");
Coordinate262.USE = "points";
IndexedFaceSet261.coord = Coordinate262;

Shape258.geometry = IndexedFaceSet261;

HAnimSite257.children = new MFNode();

HAnimSite257.children[0] = Shape258;

HAnimSegment250.children[1] = HAnimSite257;

HAnimSite HAnimSite263 = createNode("HAnimSite");
HAnimSite263.DEF = "hanim_l_metatarsal_phalanx_1_pt";
HAnimSite263.name = "l_metatarsal_phalanx_1_pt";
HAnimSite263.translation = new SFVec3f(new float[0.0816,0.0232,0.0106]);
Shape Shape264 = createNode("Shape");
Appearance Appearance265 = createNode("Appearance");
Material Material266 = createNode("Material");
Material266.USE = "HAND_FEET_COLOR";
Appearance265.material = Material266;

Shape264.appearance = Appearance265;

IndexedFaceSet IndexedFaceSet267 = createNode("IndexedFaceSet");
IndexedFaceSet267.creaseAngle = 0.5;
IndexedFaceSet267.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
Coordinate Coordinate268 = createNode("Coordinate");
Coordinate268.USE = "points";
IndexedFaceSet267.coord = Coordinate268;

Shape264.geometry = IndexedFaceSet267;

HAnimSite263.children = new MFNode();

HAnimSite263.children[0] = Shape264;

HAnimSegment250.children[2] = HAnimSite263;

HAnimJoint249.children = new MFNode();

HAnimJoint249.children[0] = HAnimSegment250;

HAnimJoint HAnimJoint269 = createNode("HAnimJoint");
HAnimJoint269.DEF = "hanim_l_tarsal_distal_interphalangeal_2";
HAnimJoint269.name = "l_tarsal_distal_interphalangeal_2";
HAnimJoint269.center = new SFVec3f(new float[0.1086,0,0.0762]);
HAnimSegment HAnimSegment270 = createNode("HAnimSegment");
HAnimSegment270.DEF = "hanim_l_tarsal_distal_phalanx_2";
HAnimSegment270.name = "l_tarsal_distal_phalanx_2";
Transform Transform271 = createNode("Transform");
Transform271.translation = new SFVec3f(new float[0.1086,0,0.0762]);
Shape Shape272 = createNode("Shape");
Appearance Appearance273 = createNode("Appearance");
Material Material274 = createNode("Material");
Material274.USE = "JOINT_COLOR";
Appearance273.material = Material274;

Shape272.appearance = Appearance273;

IndexedFaceSet IndexedFaceSet275 = createNode("IndexedFaceSet");
IndexedFaceSet275.creaseAngle = 0.5;
IndexedFaceSet275.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
Coordinate Coordinate276 = createNode("Coordinate");
Coordinate276.USE = "points";
IndexedFaceSet275.coord = Coordinate276;

Shape272.geometry = IndexedFaceSet275;

Transform271.child = new undefined();

Transform271.child[0] = Shape272;

HAnimSegment270.children = new MFNode();

HAnimSegment270.children[0] = Transform271;

HAnimSite HAnimSite277 = createNode("HAnimSite");
HAnimSite277.DEF = "hanim_l_forefoot_tip";
HAnimSite277.name = "l_forefoot_tip";
HAnimSite277.translation = new SFVec3f(new float[0.1354,0.0016,0.1476]);
Shape Shape278 = createNode("Shape");
Appearance Appearance279 = createNode("Appearance");
Material Material280 = createNode("Material");
Material280.USE = "HAND_FEET_COLOR";
Appearance279.material = Material280;

Shape278.appearance = Appearance279;

IndexedFaceSet IndexedFaceSet281 = createNode("IndexedFaceSet");
IndexedFaceSet281.creaseAngle = 0.5;
IndexedFaceSet281.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
Coordinate Coordinate282 = createNode("Coordinate");
Coordinate282.USE = "points";
IndexedFaceSet281.coord = Coordinate282;

Shape278.geometry = IndexedFaceSet281;

HAnimSite277.children = new MFNode();

HAnimSite277.children[0] = Shape278;

HAnimSegment270.children[1] = HAnimSite277;

HAnimSite HAnimSite283 = createNode("HAnimSite");
HAnimSite283.DEF = "hanim_l_metatarsal_phalanx_5_pt";
HAnimSite283.name = "l_metatarsal_phalanx_5_pt";
HAnimSite283.translation = new SFVec3f(new float[0.1825,0.007,0.0928]);
Shape Shape284 = createNode("Shape");
Appearance Appearance285 = createNode("Appearance");
Material Material286 = createNode("Material");
Material286.USE = "HAND_FEET_COLOR";
Appearance285.material = Material286;

Shape284.appearance = Appearance285;

IndexedFaceSet IndexedFaceSet287 = createNode("IndexedFaceSet");
IndexedFaceSet287.creaseAngle = 0.5;
IndexedFaceSet287.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
Coordinate Coordinate288 = createNode("Coordinate");
Coordinate288.USE = "points";
IndexedFaceSet287.coord = Coordinate288;

Shape284.geometry = IndexedFaceSet287;

HAnimSite283.children = new MFNode();

HAnimSite283.children[0] = Shape284;

HAnimSegment270.children[2] = HAnimSite283;

HAnimSite HAnimSite289 = createNode("HAnimSite");
HAnimSite289.DEF = "hanim_l_tarsal_distal_phalanx_2_pt";
HAnimSite289.name = "l_tarsal_distal_phalanx_2_pt";
HAnimSite289.translation = new SFVec3f(new float[0.1195,0.0079,0.1433]);
Shape Shape290 = createNode("Shape");
Appearance Appearance291 = createNode("Appearance");
Material Material292 = createNode("Material");
Material292.USE = "HAND_FEET_COLOR";
Appearance291.material = Material292;

Shape290.appearance = Appearance291;

IndexedFaceSet IndexedFaceSet293 = createNode("IndexedFaceSet");
IndexedFaceSet293.creaseAngle = 0.5;
IndexedFaceSet293.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
Coordinate Coordinate294 = createNode("Coordinate");
Coordinate294.USE = "points";
IndexedFaceSet293.coord = Coordinate294;

Shape290.geometry = IndexedFaceSet293;

HAnimSite289.children = new MFNode();

HAnimSite289.children[0] = Shape290;

HAnimSegment270.children[3] = HAnimSite289;

HAnimJoint269.children = new MFNode();

HAnimJoint269.children[0] = HAnimSegment270;

HAnimJoint249.children[1] = HAnimJoint269;

HAnimJoint241.children[1] = HAnimJoint249;

HAnimJoint209.children[1] = HAnimJoint241;

HAnimJoint201.children[1] = HAnimJoint209;

HAnimJoint175.children[1] = HAnimJoint201;

HAnimJoint113.children[1] = HAnimJoint175;

HAnimJoint HAnimJoint295 = createNode("HAnimJoint");
HAnimJoint295.DEF = "hanim_r_hip";
HAnimJoint295.name = "r_hip";
HAnimJoint295.center = new SFVec3f(new float[-0.095,0.9171,0.0029]);
HAnimSegment HAnimSegment296 = createNode("HAnimSegment");
HAnimSegment296.DEF = "hanim_r_thigh";
HAnimSegment296.name = "r_thigh";
Transform Transform297 = createNode("Transform");
Transform297.translation = new SFVec3f(new float[-0.095,0.9171,0.0029]);
Shape Shape298 = createNode("Shape");
Appearance Appearance299 = createNode("Appearance");
Material Material300 = createNode("Material");
Material300.USE = "MIN_COLOR";
Appearance299.material = Material300;

Shape298.appearance = Appearance299;

IndexedFaceSet IndexedFaceSet301 = createNode("IndexedFaceSet");
IndexedFaceSet301.creaseAngle = 0.5;
IndexedFaceSet301.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
Coordinate Coordinate302 = createNode("Coordinate");
Coordinate302.USE = "points";
IndexedFaceSet301.coord = Coordinate302;

Shape298.geometry = IndexedFaceSet301;

Transform297.child = new undefined();

Transform297.child[0] = Shape298;

HAnimSegment296.children = new MFNode();

HAnimSegment296.children[0] = Transform297;

HAnimSite HAnimSite303 = createNode("HAnimSite");
HAnimSite303.DEF = "hanim_r_knee_crease_pt";
HAnimSite303.name = "r_knee_crease_pt";
HAnimSite303.translation = new SFVec3f(new float[-0.0825,0.4932,-0.0326]);
Shape Shape304 = createNode("Shape");
Appearance Appearance305 = createNode("Appearance");
Material Material306 = createNode("Material");
Material306.USE = "SITE_COLOR";
Appearance305.material = Material306;

Shape304.appearance = Appearance305;

IndexedFaceSet IndexedFaceSet307 = createNode("IndexedFaceSet");
IndexedFaceSet307.creaseAngle = 0.5;
IndexedFaceSet307.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
Coordinate Coordinate308 = createNode("Coordinate");
Coordinate308.USE = "points";
IndexedFaceSet307.coord = Coordinate308;

Shape304.geometry = IndexedFaceSet307;

HAnimSite303.children = new MFNode();

HAnimSite303.children[0] = Shape304;

HAnimSegment296.children[1] = HAnimSite303;

HAnimSite HAnimSite309 = createNode("HAnimSite");
HAnimSite309.DEF = "hanim_r_femoral_lateral_epicondyle_pt";
HAnimSite309.name = "r_femoral_lateral_epicondyle_pt";
HAnimSite309.translation = new SFVec3f(new float[-0.1421,0.4992,0.031]);
Shape Shape310 = createNode("Shape");
Appearance Appearance311 = createNode("Appearance");
Material Material312 = createNode("Material");
Material312.USE = "SITE_COLOR";
Appearance311.material = Material312;

Shape310.appearance = Appearance311;

IndexedFaceSet IndexedFaceSet313 = createNode("IndexedFaceSet");
IndexedFaceSet313.creaseAngle = 0.5;
IndexedFaceSet313.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
Coordinate Coordinate314 = createNode("Coordinate");
Coordinate314.USE = "points";
IndexedFaceSet313.coord = Coordinate314;

Shape310.geometry = IndexedFaceSet313;

HAnimSite309.children = new MFNode();

HAnimSite309.children[0] = Shape310;

HAnimSegment296.children[2] = HAnimSite309;

HAnimSite HAnimSite315 = createNode("HAnimSite");
HAnimSite315.DEF = "hanim_r_femoral_medial_epicondyle_pt";
HAnimSite315.name = "r_femoral_medial_epicondyle_pt";
HAnimSite315.translation = new SFVec3f(new float[-0.0221,0.5014,0.0289]);
Shape Shape316 = createNode("Shape");
Appearance Appearance317 = createNode("Appearance");
Material Material318 = createNode("Material");
Material318.USE = "SITE_COLOR";
Appearance317.material = Material318;

Shape316.appearance = Appearance317;

IndexedFaceSet IndexedFaceSet319 = createNode("IndexedFaceSet");
IndexedFaceSet319.creaseAngle = 0.5;
IndexedFaceSet319.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
Coordinate Coordinate320 = createNode("Coordinate");
Coordinate320.USE = "points";
IndexedFaceSet319.coord = Coordinate320;

Shape316.geometry = IndexedFaceSet319;

HAnimSite315.children = new MFNode();

HAnimSite315.children[0] = Shape316;

HAnimSegment296.children[3] = HAnimSite315;

HAnimJoint295.children = new MFNode();

HAnimJoint295.children[0] = HAnimSegment296;

HAnimJoint HAnimJoint321 = createNode("HAnimJoint");
HAnimJoint321.DEF = "hanim_r_knee";
HAnimJoint321.name = "r_knee";
HAnimJoint321.center = new SFVec3f(new float[-0.0867,0.4913,0.0318]);
HAnimSegment HAnimSegment322 = createNode("HAnimSegment");
HAnimSegment322.DEF = "hanim_r_calf";
HAnimSegment322.name = "r_calf";
Transform Transform323 = createNode("Transform");
Transform323.translation = new SFVec3f(new float[-0.0867,0.4913,0.0318]);
Shape Shape324 = createNode("Shape");
Appearance Appearance325 = createNode("Appearance");
Material Material326 = createNode("Material");
Material326.USE = "SITE_COLOR";
Appearance325.material = Material326;

Shape324.appearance = Appearance325;

IndexedFaceSet IndexedFaceSet327 = createNode("IndexedFaceSet");
IndexedFaceSet327.creaseAngle = 0.5;
IndexedFaceSet327.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
Coordinate Coordinate328 = createNode("Coordinate");
Coordinate328.USE = "points";
IndexedFaceSet327.coord = Coordinate328;

Shape324.geometry = IndexedFaceSet327;

Transform323.child = new undefined();

Transform323.child[0] = Shape324;

HAnimSegment322.children = new MFNode();

HAnimSegment322.children[0] = Transform323;

HAnimJoint321.children = new MFNode();

HAnimJoint321.children[0] = HAnimSegment322;

HAnimJoint HAnimJoint329 = createNode("HAnimJoint");
HAnimJoint329.DEF = "hanim_r_talocrural";
HAnimJoint329.name = "r_talocrural";
HAnimJoint329.center = new SFVec3f(new float[-0.0801,0.0712,-0.0766]);
HAnimSegment HAnimSegment330 = createNode("HAnimSegment");
HAnimSegment330.DEF = "hanim_r_talus";
HAnimSegment330.name = "r_talus";
Transform Transform331 = createNode("Transform");
Transform331.translation = new SFVec3f(new float[-0.0801,0.0712,-0.0766]);
Shape Shape332 = createNode("Shape");
Appearance Appearance333 = createNode("Appearance");
Material Material334 = createNode("Material");
Material334.USE = "MIN_COLOR";
Appearance333.material = Material334;

Shape332.appearance = Appearance333;

IndexedFaceSet IndexedFaceSet335 = createNode("IndexedFaceSet");
IndexedFaceSet335.creaseAngle = 0.5;
IndexedFaceSet335.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
Coordinate Coordinate336 = createNode("Coordinate");
Coordinate336.USE = "points";
IndexedFaceSet335.coord = Coordinate336;

Shape332.geometry = IndexedFaceSet335;

Transform331.child = new undefined();

Transform331.child[0] = Shape332;

HAnimSegment330.children = new MFNode();

HAnimSegment330.children[0] = Transform331;

HAnimSite HAnimSite337 = createNode("HAnimSite");
HAnimSite337.DEF = "hanim_r_lateral_malleolus_pt";
HAnimSite337.name = "r_lateral_malleolus_pt";
HAnimSite337.translation = new SFVec3f(new float[-0.1006,0.0658,-0.1075]);
Shape Shape338 = createNode("Shape");
Appearance Appearance339 = createNode("Appearance");
Material Material340 = createNode("Material");
Material340.USE = "HAND_FEET_COLOR";
Appearance339.material = Material340;

Shape338.appearance = Appearance339;

IndexedFaceSet IndexedFaceSet341 = createNode("IndexedFaceSet");
IndexedFaceSet341.creaseAngle = 0.5;
IndexedFaceSet341.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
Coordinate Coordinate342 = createNode("Coordinate");
Coordinate342.USE = "points";
IndexedFaceSet341.coord = Coordinate342;

Shape338.geometry = IndexedFaceSet341;

HAnimSite337.children = new MFNode();

HAnimSite337.children[0] = Shape338;

HAnimSegment330.children[1] = HAnimSite337;

HAnimSite HAnimSite343 = createNode("HAnimSite");
HAnimSite343.DEF = "hanim_r_medial_malleolus_pt";
HAnimSite343.name = "r_medial_malleolus_pt";
HAnimSite343.translation = new SFVec3f(new float[-0.0591,0.076,-0.0928]);
Shape Shape344 = createNode("Shape");
Appearance Appearance345 = createNode("Appearance");
Material Material346 = createNode("Material");
Material346.USE = "HAND_FEET_COLOR";
Appearance345.material = Material346;

Shape344.appearance = Appearance345;

IndexedFaceSet IndexedFaceSet347 = createNode("IndexedFaceSet");
IndexedFaceSet347.creaseAngle = 0.5;
IndexedFaceSet347.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
Coordinate Coordinate348 = createNode("Coordinate");
Coordinate348.USE = "points";
IndexedFaceSet347.coord = Coordinate348;

Shape344.geometry = IndexedFaceSet347;

HAnimSite343.children = new MFNode();

HAnimSite343.children[0] = Shape344;

HAnimSegment330.children[2] = HAnimSite343;

HAnimSite HAnimSite349 = createNode("HAnimSite");
HAnimSite349.DEF = "hanim_r_sphyrion_pt";
HAnimSite349.name = "r_sphyrion_pt";
HAnimSite349.translation = new SFVec3f(new float[-0.0603,0.061,-0.1002]);
Shape Shape350 = createNode("Shape");
Appearance Appearance351 = createNode("Appearance");
Material Material352 = createNode("Material");
Material352.USE = "HAND_FEET_COLOR";
Appearance351.material = Material352;

Shape350.appearance = Appearance351;

IndexedFaceSet IndexedFaceSet353 = createNode("IndexedFaceSet");
IndexedFaceSet353.creaseAngle = 0.5;
IndexedFaceSet353.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
Coordinate Coordinate354 = createNode("Coordinate");
Coordinate354.USE = "points";
IndexedFaceSet353.coord = Coordinate354;

Shape350.geometry = IndexedFaceSet353;

HAnimSite349.children = new MFNode();

HAnimSite349.children[0] = Shape350;

HAnimSegment330.children[3] = HAnimSite349;

HAnimSite HAnimSite355 = createNode("HAnimSite");
HAnimSite355.DEF = "hanim_r_calcaneus_posterior_pt";
HAnimSite355.name = "r_calcaneus_posterior_pt";
HAnimSite355.translation = new SFVec3f(new float[-0.0692,0.0297,-0.1221]);
Shape Shape356 = createNode("Shape");
Appearance Appearance357 = createNode("Appearance");
Material Material358 = createNode("Material");
Material358.USE = "HAND_FEET_COLOR";
Appearance357.material = Material358;

Shape356.appearance = Appearance357;

IndexedFaceSet IndexedFaceSet359 = createNode("IndexedFaceSet");
IndexedFaceSet359.creaseAngle = 0.5;
IndexedFaceSet359.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
Coordinate Coordinate360 = createNode("Coordinate");
Coordinate360.USE = "points";
IndexedFaceSet359.coord = Coordinate360;

Shape356.geometry = IndexedFaceSet359;

HAnimSite355.children = new MFNode();

HAnimSite355.children[0] = Shape356;

HAnimSegment330.children[4] = HAnimSite355;

HAnimJoint329.children = new MFNode();

HAnimJoint329.children[0] = HAnimSegment330;

HAnimJoint HAnimJoint361 = createNode("HAnimJoint");
HAnimJoint361.DEF = "hanim_r_metatarsophalangeal_2";
HAnimJoint361.name = "r_metatarsophalangeal_2";
HAnimJoint361.center = new SFVec3f(new float[-0.0801,0,0.0368]);
HAnimSegment HAnimSegment362 = createNode("HAnimSegment");
HAnimSegment362.DEF = "hanim_r_tarsal_proximal_phalanx_2";
HAnimSegment362.name = "r_tarsal_proximal_phalanx_2";
Transform Transform363 = createNode("Transform");
Transform363.translation = new SFVec3f(new float[-0.0801,0,0.0368]);
Shape Shape364 = createNode("Shape");
Appearance Appearance365 = createNode("Appearance");
Material Material366 = createNode("Material");
Material366.USE = "JOINT_COLOR";
Appearance365.material = Material366;

Shape364.appearance = Appearance365;

IndexedFaceSet IndexedFaceSet367 = createNode("IndexedFaceSet");
IndexedFaceSet367.creaseAngle = 0.5;
IndexedFaceSet367.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
Coordinate Coordinate368 = createNode("Coordinate");
Coordinate368.USE = "points";
IndexedFaceSet367.coord = Coordinate368;

Shape364.geometry = IndexedFaceSet367;

Transform363.child = new undefined();

Transform363.child[0] = Shape364;

HAnimSegment362.children = new MFNode();

HAnimSegment362.children[0] = Transform363;

HAnimSite HAnimSite369 = createNode("HAnimSite");
HAnimSite369.DEF = "hanim_r_middistal_tip";
HAnimSite369.name = "r_middistal_tip";
HAnimSite369.translation = new SFVec3f(new float[-0.1043,-0.0227,0.145]);
Shape Shape370 = createNode("Shape");
Appearance Appearance371 = createNode("Appearance");
Material Material372 = createNode("Material");
Material372.USE = "HAND_FEET_COLOR";
Appearance371.material = Material372;

Shape370.appearance = Appearance371;

IndexedFaceSet IndexedFaceSet373 = createNode("IndexedFaceSet");
IndexedFaceSet373.creaseAngle = 0.5;
IndexedFaceSet373.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
Coordinate Coordinate374 = createNode("Coordinate");
Coordinate374.USE = "points";
IndexedFaceSet373.coord = Coordinate374;

Shape370.geometry = IndexedFaceSet373;

HAnimSite369.children = new MFNode();

HAnimSite369.children[0] = Shape370;

HAnimSegment362.children[1] = HAnimSite369;

HAnimSite HAnimSite375 = createNode("HAnimSite");
HAnimSite375.DEF = "hanim_r_metatarsal_phalanx_5_pt";
HAnimSite375.name = "r_metatarsal_phalanx_5_pt";
HAnimSite375.translation = new SFVec3f(new float[-0.1523,0.0166,0.0895]);
Shape Shape376 = createNode("Shape");
Appearance Appearance377 = createNode("Appearance");
Material Material378 = createNode("Material");
Material378.USE = "HAND_FEET_COLOR";
Appearance377.material = Material378;

Shape376.appearance = Appearance377;

IndexedFaceSet IndexedFaceSet379 = createNode("IndexedFaceSet");
IndexedFaceSet379.creaseAngle = 0.5;
IndexedFaceSet379.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
Coordinate Coordinate380 = createNode("Coordinate");
Coordinate380.USE = "points";
IndexedFaceSet379.coord = Coordinate380;

Shape376.geometry = IndexedFaceSet379;

HAnimSite375.children = new MFNode();

HAnimSite375.children[0] = Shape376;

HAnimSegment362.children[2] = HAnimSite375;

HAnimSite HAnimSite381 = createNode("HAnimSite");
HAnimSite381.DEF = "hanim_r_metatarsal_phalanx_1_pt";
HAnimSite381.name = "r_metatarsal_phalanx_1_pt";
HAnimSite381.translation = new SFVec3f(new float[-0.0521,0.026,0.0127]);
Shape Shape382 = createNode("Shape");
Appearance Appearance383 = createNode("Appearance");
Material Material384 = createNode("Material");
Material384.USE = "HAND_FEET_COLOR";
Appearance383.material = Material384;

Shape382.appearance = Appearance383;

IndexedFaceSet IndexedFaceSet385 = createNode("IndexedFaceSet");
IndexedFaceSet385.creaseAngle = 0.5;
IndexedFaceSet385.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
Coordinate Coordinate386 = createNode("Coordinate");
Coordinate386.USE = "points";
IndexedFaceSet385.coord = Coordinate386;

Shape382.geometry = IndexedFaceSet385;

HAnimSite381.children = new MFNode();

HAnimSite381.children[0] = Shape382;

HAnimSegment362.children[3] = HAnimSite381;

HAnimSite HAnimSite387 = createNode("HAnimSite");
HAnimSite387.DEF = "hanim_r_tarsal_distal_phalanx_2_pt";
HAnimSite387.name = "r_tarsal_distal_phalanx_2_pt";
HAnimSite387.translation = new SFVec3f(new float[-0.0883,0.0134,0.1383]);
Shape Shape388 = createNode("Shape");
Appearance Appearance389 = createNode("Appearance");
Material Material390 = createNode("Material");
Material390.USE = "HAND_FEET_COLOR";
Appearance389.material = Material390;

Shape388.appearance = Appearance389;

IndexedFaceSet IndexedFaceSet391 = createNode("IndexedFaceSet");
IndexedFaceSet391.creaseAngle = 0.5;
IndexedFaceSet391.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
Coordinate Coordinate392 = createNode("Coordinate");
Coordinate392.USE = "points";
IndexedFaceSet391.coord = Coordinate392;

Shape388.geometry = IndexedFaceSet391;

HAnimSite387.children = new MFNode();

HAnimSite387.children[0] = Shape388;

HAnimSegment362.children[4] = HAnimSite387;

HAnimJoint361.children = new MFNode();

HAnimJoint361.children[0] = HAnimSegment362;

HAnimJoint329.children[1] = HAnimJoint361;

HAnimJoint321.children[1] = HAnimJoint329;

HAnimJoint295.children[1] = HAnimJoint321;

HAnimJoint113.children[2] = HAnimJoint295;

HAnimJoint98.children[1] = HAnimJoint113;

HAnimJoint HAnimJoint393 = createNode("HAnimJoint");
HAnimJoint393.DEF = "hanim_vl5";
HAnimJoint393.name = "vl5";
HAnimJoint393.center = new SFVec3f(new float[0.0028,1.0568,-0.0776]);
HAnimSegment HAnimSegment394 = createNode("HAnimSegment");
HAnimSegment394.DEF = "hanim_l5";
HAnimSegment394.name = "l5";
Transform Transform395 = createNode("Transform");
Transform395.translation = new SFVec3f(new float[0.0028,1.0568,-0.0776]);
Shape Shape396 = createNode("Shape");
Appearance Appearance397 = createNode("Appearance");
Material Material398 = createNode("Material");
Material398.USE = "REC_SPINAL_COLOR";
Appearance397.material = Material398;

Shape396.appearance = Appearance397;

IndexedFaceSet IndexedFaceSet399 = createNode("IndexedFaceSet");
IndexedFaceSet399.creaseAngle = 0.5;
IndexedFaceSet399.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
Coordinate Coordinate400 = createNode("Coordinate");
Coordinate400.USE = "points";
IndexedFaceSet399.coord = Coordinate400;

Shape396.geometry = IndexedFaceSet399;

Transform395.child = new undefined();

Transform395.child[0] = Shape396;

HAnimSegment394.children = new MFNode();

HAnimSegment394.children[0] = Transform395;

HAnimJoint393.children = new MFNode();

HAnimJoint393.children[0] = HAnimSegment394;

HAnimJoint HAnimJoint401 = createNode("HAnimJoint");
HAnimJoint401.DEF = "hanim_vl4";
HAnimJoint401.name = "vl4";
HAnimJoint401.center = new SFVec3f(new float[0.0035,1.0925,-0.0787]);
HAnimSegment HAnimSegment402 = createNode("HAnimSegment");
HAnimSegment402.DEF = "hanim_l4";
HAnimSegment402.name = "l4";
Transform Transform403 = createNode("Transform");
Transform403.translation = new SFVec3f(new float[0.0035,1.0925,-0.0787]);
Shape Shape404 = createNode("Shape");
Appearance Appearance405 = createNode("Appearance");
Material Material406 = createNode("Material");
Material406.USE = "SPINAL_COLOR";
Appearance405.material = Material406;

Shape404.appearance = Appearance405;

IndexedFaceSet IndexedFaceSet407 = createNode("IndexedFaceSet");
IndexedFaceSet407.creaseAngle = 0.5;
IndexedFaceSet407.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
Coordinate Coordinate408 = createNode("Coordinate");
Coordinate408.USE = "points";
IndexedFaceSet407.coord = Coordinate408;

Shape404.geometry = IndexedFaceSet407;

Transform403.child = new undefined();

Transform403.child[0] = Shape404;

HAnimSegment402.children = new MFNode();

HAnimSegment402.children[0] = Transform403;

HAnimJoint401.children = new MFNode();

HAnimJoint401.children[0] = HAnimSegment402;

HAnimJoint HAnimJoint409 = createNode("HAnimJoint");
HAnimJoint409.DEF = "hanim_vl3";
HAnimJoint409.name = "vl3";
HAnimJoint409.center = new SFVec3f(new float[0.0041,1.1276,-0.0796]);
HAnimSegment HAnimSegment410 = createNode("HAnimSegment");
HAnimSegment410.DEF = "hanim_l3";
HAnimSegment410.name = "l3";
Transform Transform411 = createNode("Transform");
Transform411.translation = new SFVec3f(new float[0.0041,1.1276,-0.0796]);
Shape Shape412 = createNode("Shape");
Appearance Appearance413 = createNode("Appearance");
Material Material414 = createNode("Material");
Material414.USE = "REC_SPINAL_COLOR";
Appearance413.material = Material414;

Shape412.appearance = Appearance413;

IndexedFaceSet IndexedFaceSet415 = createNode("IndexedFaceSet");
IndexedFaceSet415.creaseAngle = 0.5;
IndexedFaceSet415.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
Coordinate Coordinate416 = createNode("Coordinate");
Coordinate416.USE = "points";
IndexedFaceSet415.coord = Coordinate416;

Shape412.geometry = IndexedFaceSet415;

Transform411.child = new undefined();

Transform411.child[0] = Shape412;

HAnimSegment410.children = new MFNode();

HAnimSegment410.children[0] = Transform411;

HAnimJoint409.children = new MFNode();

HAnimJoint409.children[0] = HAnimSegment410;

HAnimJoint HAnimJoint417 = createNode("HAnimJoint");
HAnimJoint417.DEF = "hanim_vl2";
HAnimJoint417.name = "vl2";
HAnimJoint417.center = new SFVec3f(new float[0.0045,1.1546,-0.08]);
HAnimSegment HAnimSegment418 = createNode("HAnimSegment");
HAnimSegment418.DEF = "hanim_l2";
HAnimSegment418.name = "l2";
Transform Transform419 = createNode("Transform");
Transform419.translation = new SFVec3f(new float[0.0045,1.1546,-0.08]);
Shape Shape420 = createNode("Shape");
Appearance Appearance421 = createNode("Appearance");
Material Material422 = createNode("Material");
Material422.USE = "SPINAL_COLOR";
Appearance421.material = Material422;

Shape420.appearance = Appearance421;

IndexedFaceSet IndexedFaceSet423 = createNode("IndexedFaceSet");
IndexedFaceSet423.creaseAngle = 0.5;
IndexedFaceSet423.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
Coordinate Coordinate424 = createNode("Coordinate");
Coordinate424.USE = "points";
IndexedFaceSet423.coord = Coordinate424;

Shape420.geometry = IndexedFaceSet423;

Transform419.child = new undefined();

Transform419.child[0] = Shape420;

HAnimSegment418.children = new MFNode();

HAnimSegment418.children[0] = Transform419;

HAnimJoint417.children = new MFNode();

HAnimJoint417.children[0] = HAnimSegment418;

HAnimJoint HAnimJoint425 = createNode("HAnimJoint");
HAnimJoint425.DEF = "hanim_vl1";
HAnimJoint425.name = "vl1";
HAnimJoint425.center = new SFVec3f(new float[0.0048,1.1912,-0.0805]);
HAnimSegment HAnimSegment426 = createNode("HAnimSegment");
HAnimSegment426.DEF = "hanim_l1";
HAnimSegment426.name = "l1";
Transform Transform427 = createNode("Transform");
Transform427.translation = new SFVec3f(new float[0.0048,1.1912,-0.0805]);
Shape Shape428 = createNode("Shape");
Appearance Appearance429 = createNode("Appearance");
Material Material430 = createNode("Material");
Material430.USE = "REC_SPINAL_COLOR";
Appearance429.material = Material430;

Shape428.appearance = Appearance429;

IndexedFaceSet IndexedFaceSet431 = createNode("IndexedFaceSet");
IndexedFaceSet431.creaseAngle = 0.5;
IndexedFaceSet431.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
Coordinate Coordinate432 = createNode("Coordinate");
Coordinate432.USE = "points";
IndexedFaceSet431.coord = Coordinate432;

Shape428.geometry = IndexedFaceSet431;

Transform427.child = new undefined();

Transform427.child[0] = Shape428;

HAnimSegment426.children = new MFNode();

HAnimSegment426.children[0] = Transform427;

HAnimJoint425.children = new MFNode();

HAnimJoint425.children[0] = HAnimSegment426;

HAnimJoint HAnimJoint433 = createNode("HAnimJoint");
HAnimJoint433.DEF = "hanim_vt12";
HAnimJoint433.name = "vt12";
HAnimJoint433.center = new SFVec3f(new float[0.0051,1.2278,-0.0808]);
HAnimSegment HAnimSegment434 = createNode("HAnimSegment");
HAnimSegment434.DEF = "hanim_t12";
HAnimSegment434.name = "t12";
Transform Transform435 = createNode("Transform");
Transform435.translation = new SFVec3f(new float[0.0051,1.2278,-0.0808]);
Shape Shape436 = createNode("Shape");
Appearance Appearance437 = createNode("Appearance");
Material Material438 = createNode("Material");
Material438.USE = "SPINAL_COLOR";
Appearance437.material = Material438;

Shape436.appearance = Appearance437;

IndexedFaceSet IndexedFaceSet439 = createNode("IndexedFaceSet");
IndexedFaceSet439.creaseAngle = 0.5;
IndexedFaceSet439.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
Coordinate Coordinate440 = createNode("Coordinate");
Coordinate440.USE = "points";
IndexedFaceSet439.coord = Coordinate440;

Shape436.geometry = IndexedFaceSet439;

Transform435.child = new undefined();

Transform435.child[0] = Shape436;

HAnimSegment434.children = new MFNode();

HAnimSegment434.children[0] = Transform435;

HAnimJoint433.children = new MFNode();

HAnimJoint433.children[0] = HAnimSegment434;

HAnimJoint HAnimJoint441 = createNode("HAnimJoint");
HAnimJoint441.DEF = "hanim_vt11";
HAnimJoint441.name = "vt11";
HAnimJoint441.center = new SFVec3f(new float[0.0053,1.2679,-0.081]);
HAnimSegment HAnimSegment442 = createNode("HAnimSegment");
HAnimSegment442.DEF = "hanim_t11";
HAnimSegment442.name = "t11";
Transform Transform443 = createNode("Transform");
Transform443.translation = new SFVec3f(new float[0.0053,1.2679,-0.081]);
Shape Shape444 = createNode("Shape");
Appearance Appearance445 = createNode("Appearance");
Material Material446 = createNode("Material");
Material446.USE = "SPINAL_COLOR";
Appearance445.material = Material446;

Shape444.appearance = Appearance445;

IndexedFaceSet IndexedFaceSet447 = createNode("IndexedFaceSet");
IndexedFaceSet447.creaseAngle = 0.5;
IndexedFaceSet447.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
Coordinate Coordinate448 = createNode("Coordinate");
Coordinate448.USE = "points";
IndexedFaceSet447.coord = Coordinate448;

Shape444.geometry = IndexedFaceSet447;

Transform443.child = new undefined();

Transform443.child[0] = Shape444;

HAnimSegment442.children = new MFNode();

HAnimSegment442.children[0] = Transform443;

HAnimJoint441.children = new MFNode();

HAnimJoint441.children[0] = HAnimSegment442;

HAnimJoint HAnimJoint449 = createNode("HAnimJoint");
HAnimJoint449.DEF = "hanim_vt10";
HAnimJoint449.name = "vt10";
HAnimJoint449.center = new SFVec3f(new float[0.0056,1.2848,-0.0822]);
HAnimSegment HAnimSegment450 = createNode("HAnimSegment");
HAnimSegment450.DEF = "hanim_t10";
HAnimSegment450.name = "t10";
Transform Transform451 = createNode("Transform");
Transform451.translation = new SFVec3f(new float[0.0056,1.2848,-0.0822]);
Shape Shape452 = createNode("Shape");
Appearance Appearance453 = createNode("Appearance");
Material Material454 = createNode("Material");
Material454.USE = "REC_SPINAL_COLOR";
Appearance453.material = Material454;

Shape452.appearance = Appearance453;

IndexedFaceSet IndexedFaceSet455 = createNode("IndexedFaceSet");
IndexedFaceSet455.creaseAngle = 0.5;
IndexedFaceSet455.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
Coordinate Coordinate456 = createNode("Coordinate");
Coordinate456.USE = "points";
IndexedFaceSet455.coord = Coordinate456;

Shape452.geometry = IndexedFaceSet455;

Transform451.child = new undefined();

Transform451.child[0] = Shape452;

HAnimSegment450.children = new MFNode();

HAnimSegment450.children[0] = Transform451;

HAnimJoint449.children = new MFNode();

HAnimJoint449.children[0] = HAnimSegment450;

HAnimJoint HAnimJoint457 = createNode("HAnimJoint");
HAnimJoint457.DEF = "hanim_vt9";
HAnimJoint457.name = "vt9";
HAnimJoint457.center = new SFVec3f(new float[0.0057,1.3126,-0.0838]);
HAnimSegment HAnimSegment458 = createNode("HAnimSegment");
HAnimSegment458.DEF = "hanim_t9";
HAnimSegment458.name = "t9";
Transform Transform459 = createNode("Transform");
Transform459.translation = new SFVec3f(new float[0.0057,1.3126,-0.0838]);
Shape Shape460 = createNode("Shape");
Appearance Appearance461 = createNode("Appearance");
Material Material462 = createNode("Material");
Material462.USE = "SPINAL_COLOR";
Appearance461.material = Material462;

Shape460.appearance = Appearance461;

IndexedFaceSet IndexedFaceSet463 = createNode("IndexedFaceSet");
IndexedFaceSet463.creaseAngle = 0.5;
IndexedFaceSet463.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
Coordinate Coordinate464 = createNode("Coordinate");
Coordinate464.USE = "points";
IndexedFaceSet463.coord = Coordinate464;

Shape460.geometry = IndexedFaceSet463;

Transform459.child = new undefined();

Transform459.child[0] = Shape460;

HAnimSegment458.children = new MFNode();

HAnimSegment458.children[0] = Transform459;

HAnimJoint457.children = new MFNode();

HAnimJoint457.children[0] = HAnimSegment458;

HAnimJoint HAnimJoint465 = createNode("HAnimJoint");
HAnimJoint465.DEF = "hanim_vt8";
HAnimJoint465.name = "vt8";
HAnimJoint465.center = new SFVec3f(new float[0.0057,1.3382,-0.0845]);
HAnimSegment HAnimSegment466 = createNode("HAnimSegment");
HAnimSegment466.DEF = "hanim_t8";
HAnimSegment466.name = "t8";
Transform Transform467 = createNode("Transform");
Transform467.translation = new SFVec3f(new float[0.0057,1.3382,-0.0845]);
Shape Shape468 = createNode("Shape");
Appearance Appearance469 = createNode("Appearance");
Material Material470 = createNode("Material");
Material470.USE = "SPINAL_COLOR";
Appearance469.material = Material470;

Shape468.appearance = Appearance469;

IndexedFaceSet IndexedFaceSet471 = createNode("IndexedFaceSet");
IndexedFaceSet471.creaseAngle = 0.5;
IndexedFaceSet471.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
Coordinate Coordinate472 = createNode("Coordinate");
Coordinate472.USE = "points";
IndexedFaceSet471.coord = Coordinate472;

Shape468.geometry = IndexedFaceSet471;

Transform467.child = new undefined();

Transform467.child[0] = Shape468;

HAnimSegment466.children = new MFNode();

HAnimSegment466.children[0] = Transform467;

HAnimJoint465.children = new MFNode();

HAnimJoint465.children[0] = HAnimSegment466;

HAnimJoint HAnimJoint473 = createNode("HAnimJoint");
HAnimJoint473.DEF = "hanim_vt7";
HAnimJoint473.name = "vt7";
HAnimJoint473.center = new SFVec3f(new float[0.0058,1.3625,-0.0833]);
HAnimSegment HAnimSegment474 = createNode("HAnimSegment");
HAnimSegment474.DEF = "hanim_t7";
HAnimSegment474.name = "t7";
Transform Transform475 = createNode("Transform");
Transform475.translation = new SFVec3f(new float[0.0058,1.3625,-0.0833]);
Shape Shape476 = createNode("Shape");
Appearance Appearance477 = createNode("Appearance");
Material Material478 = createNode("Material");
Material478.USE = "SPINAL_COLOR";
Appearance477.material = Material478;

Shape476.appearance = Appearance477;

IndexedFaceSet IndexedFaceSet479 = createNode("IndexedFaceSet");
IndexedFaceSet479.creaseAngle = 0.5;
IndexedFaceSet479.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
Coordinate Coordinate480 = createNode("Coordinate");
Coordinate480.USE = "points";
IndexedFaceSet479.coord = Coordinate480;

Shape476.geometry = IndexedFaceSet479;

Transform475.child = new undefined();

Transform475.child[0] = Shape476;

HAnimSegment474.children = new MFNode();

HAnimSegment474.children[0] = Transform475;

HAnimJoint473.children = new MFNode();

HAnimJoint473.children[0] = HAnimSegment474;

HAnimJoint HAnimJoint481 = createNode("HAnimJoint");
HAnimJoint481.DEF = "hanim_vt6";
HAnimJoint481.name = "vt6";
HAnimJoint481.center = new SFVec3f(new float[0.0059,1.3866,-0.08]);
HAnimSegment HAnimSegment482 = createNode("HAnimSegment");
HAnimSegment482.DEF = "hanim_t6";
HAnimSegment482.name = "t6";
Transform Transform483 = createNode("Transform");
Transform483.translation = new SFVec3f(new float[0.0059,1.3866,-0.08]);
Shape Shape484 = createNode("Shape");
Appearance Appearance485 = createNode("Appearance");
Material Material486 = createNode("Material");
Material486.USE = "REC_SPINAL_COLOR";
Appearance485.material = Material486;

Shape484.appearance = Appearance485;

IndexedFaceSet IndexedFaceSet487 = createNode("IndexedFaceSet");
IndexedFaceSet487.creaseAngle = 0.5;
IndexedFaceSet487.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
Coordinate Coordinate488 = createNode("Coordinate");
Coordinate488.USE = "points";
IndexedFaceSet487.coord = Coordinate488;

Shape484.geometry = IndexedFaceSet487;

Transform483.child = new undefined();

Transform483.child[0] = Shape484;

HAnimSegment482.children = new MFNode();

HAnimSegment482.children[0] = Transform483;

HAnimJoint481.children = new MFNode();

HAnimJoint481.children[0] = HAnimSegment482;

HAnimJoint HAnimJoint489 = createNode("HAnimJoint");
HAnimJoint489.DEF = "hanim_vt5";
HAnimJoint489.name = "vt5";
HAnimJoint489.center = new SFVec3f(new float[0.006,1.4102,-0.0745]);
HAnimSegment HAnimSegment490 = createNode("HAnimSegment");
HAnimSegment490.DEF = "hanim_t5";
HAnimSegment490.name = "t5";
Transform Transform491 = createNode("Transform");
Transform491.translation = new SFVec3f(new float[0.006,1.4102,-0.0745]);
Shape Shape492 = createNode("Shape");
Appearance Appearance493 = createNode("Appearance");
Material Material494 = createNode("Material");
Material494.USE = "SPINAL_COLOR";
Appearance493.material = Material494;

Shape492.appearance = Appearance493;

IndexedFaceSet IndexedFaceSet495 = createNode("IndexedFaceSet");
IndexedFaceSet495.creaseAngle = 0.5;
IndexedFaceSet495.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
Coordinate Coordinate496 = createNode("Coordinate");
Coordinate496.USE = "points";
IndexedFaceSet495.coord = Coordinate496;

Shape492.geometry = IndexedFaceSet495;

Transform491.child = new undefined();

Transform491.child[0] = Shape492;

HAnimSegment490.children = new MFNode();

HAnimSegment490.children[0] = Transform491;

HAnimJoint489.children = new MFNode();

HAnimJoint489.children[0] = HAnimSegment490;

HAnimJoint HAnimJoint497 = createNode("HAnimJoint");
HAnimJoint497.DEF = "hanim_vt4";
HAnimJoint497.name = "vt4";
HAnimJoint497.center = new SFVec3f(new float[0.0061,1.432,-0.0675]);
HAnimSegment HAnimSegment498 = createNode("HAnimSegment");
HAnimSegment498.DEF = "hanim_t4";
HAnimSegment498.name = "t4";
Transform Transform499 = createNode("Transform");
Transform499.translation = new SFVec3f(new float[0.0061,1.432,-0.0675]);
Shape Shape500 = createNode("Shape");
Appearance Appearance501 = createNode("Appearance");
Material Material502 = createNode("Material");
Material502.USE = "SPINAL_COLOR";
Appearance501.material = Material502;

Shape500.appearance = Appearance501;

IndexedFaceSet IndexedFaceSet503 = createNode("IndexedFaceSet");
IndexedFaceSet503.creaseAngle = 0.5;
IndexedFaceSet503.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
Coordinate Coordinate504 = createNode("Coordinate");
Coordinate504.USE = "points";
IndexedFaceSet503.coord = Coordinate504;

Shape500.geometry = IndexedFaceSet503;

Transform499.child = new undefined();

Transform499.child[0] = Shape500;

HAnimSegment498.children = new MFNode();

HAnimSegment498.children[0] = Transform499;

HAnimJoint497.children = new MFNode();

HAnimJoint497.children[0] = HAnimSegment498;

HAnimJoint HAnimJoint505 = createNode("HAnimJoint");
HAnimJoint505.DEF = "hanim_vt3";
HAnimJoint505.name = "vt3";
HAnimJoint505.center = new SFVec3f(new float[0.0062,1.4583,-0.057]);
HAnimSegment HAnimSegment506 = createNode("HAnimSegment");
HAnimSegment506.DEF = "hanim_t3";
HAnimSegment506.name = "t3";
Transform Transform507 = createNode("Transform");
Transform507.translation = new SFVec3f(new float[0.0062,1.4583,-0.057]);
Shape Shape508 = createNode("Shape");
Appearance Appearance509 = createNode("Appearance");
Material Material510 = createNode("Material");
Material510.USE = "SPINAL_COLOR";
Appearance509.material = Material510;

Shape508.appearance = Appearance509;

IndexedFaceSet IndexedFaceSet511 = createNode("IndexedFaceSet");
IndexedFaceSet511.creaseAngle = 0.5;
IndexedFaceSet511.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
Coordinate Coordinate512 = createNode("Coordinate");
Coordinate512.USE = "points";
IndexedFaceSet511.coord = Coordinate512;

Shape508.geometry = IndexedFaceSet511;

Transform507.child = new undefined();

Transform507.child[0] = Shape508;

HAnimSegment506.children = new MFNode();

HAnimSegment506.children[0] = Transform507;

HAnimJoint505.children = new MFNode();

HAnimJoint505.children[0] = HAnimSegment506;

HAnimJoint HAnimJoint513 = createNode("HAnimJoint");
HAnimJoint513.DEF = "hanim_vt2";
HAnimJoint513.name = "vt2";
HAnimJoint513.center = new SFVec3f(new float[0.0063,1.4761,-0.0484]);
HAnimSegment HAnimSegment514 = createNode("HAnimSegment");
HAnimSegment514.DEF = "hanim_t2";
HAnimSegment514.name = "t2";
Transform Transform515 = createNode("Transform");
Transform515.translation = new SFVec3f(new float[0.0063,1.4761,-0.0484]);
Shape Shape516 = createNode("Shape");
Appearance Appearance517 = createNode("Appearance");
Material Material518 = createNode("Material");
Material518.USE = "SPINAL_COLOR";
Appearance517.material = Material518;

Shape516.appearance = Appearance517;

IndexedFaceSet IndexedFaceSet519 = createNode("IndexedFaceSet");
IndexedFaceSet519.creaseAngle = 0.5;
IndexedFaceSet519.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
Coordinate Coordinate520 = createNode("Coordinate");
Coordinate520.USE = "points";
IndexedFaceSet519.coord = Coordinate520;

Shape516.geometry = IndexedFaceSet519;

Transform515.child = new undefined();

Transform515.child[0] = Shape516;

HAnimSegment514.children = new MFNode();

HAnimSegment514.children[0] = Transform515;

HAnimJoint513.children = new MFNode();

HAnimJoint513.children[0] = HAnimSegment514;

HAnimJoint HAnimJoint521 = createNode("HAnimJoint");
HAnimJoint521.DEF = "hanim_vt1";
HAnimJoint521.name = "vt1";
HAnimJoint521.center = new SFVec3f(new float[0.0065,1.4951,-0.0387]);
HAnimSegment HAnimSegment522 = createNode("HAnimSegment");
HAnimSegment522.DEF = "hanim_t1";
HAnimSegment522.name = "t1";
Transform Transform523 = createNode("Transform");
Transform523.translation = new SFVec3f(new float[0.0065,1.4951,-0.0387]);
Shape Shape524 = createNode("Shape");
Appearance Appearance525 = createNode("Appearance");
Material Material526 = createNode("Material");
Material526.USE = "REC_SPINAL_COLOR";
Appearance525.material = Material526;

Shape524.appearance = Appearance525;

IndexedFaceSet IndexedFaceSet527 = createNode("IndexedFaceSet");
IndexedFaceSet527.creaseAngle = 0.5;
IndexedFaceSet527.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
Coordinate Coordinate528 = createNode("Coordinate");
Coordinate528.USE = "points";
IndexedFaceSet527.coord = Coordinate528;

Shape524.geometry = IndexedFaceSet527;

Transform523.child = new undefined();

Transform523.child[0] = Shape524;

HAnimSegment522.children = new MFNode();

HAnimSegment522.children[0] = Transform523;

HAnimJoint521.children = new MFNode();

HAnimJoint521.children[0] = HAnimSegment522;

HAnimJoint HAnimJoint529 = createNode("HAnimJoint");
HAnimJoint529.DEF = "hanim_l_shoulder";
HAnimJoint529.name = "l_shoulder";
HAnimJoint529.center = new SFVec3f(new float[0.2029,1.4376,-0.0387]);
HAnimSegment HAnimSegment530 = createNode("HAnimSegment");
HAnimSegment530.DEF = "hanim_l_upperarm";
HAnimSegment530.name = "l_upperarm";
Transform Transform531 = createNode("Transform");
Transform531.translation = new SFVec3f(new float[0.2029,1.4376,-0.0387]);
Shape Shape532 = createNode("Shape");
Appearance Appearance533 = createNode("Appearance");
Material Material534 = createNode("Material");
Material534.USE = "MIN_COLOR";
Appearance533.material = Material534;

Shape532.appearance = Appearance533;

IndexedFaceSet IndexedFaceSet535 = createNode("IndexedFaceSet");
IndexedFaceSet535.creaseAngle = 0.5;
IndexedFaceSet535.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
Coordinate Coordinate536 = createNode("Coordinate");
Coordinate536.USE = "points";
IndexedFaceSet535.coord = Coordinate536;

Shape532.geometry = IndexedFaceSet535;

Transform531.child = new undefined();

Transform531.child[0] = Shape532;

HAnimSegment530.children = new MFNode();

HAnimSegment530.children[0] = Transform531;

Transform Transform537 = createNode("Transform");
Transform537.DEF = "l_upperarm_adjust";
Transform537.translation = new SFVec3f(new float[0.2029,1.4376,-0.0387]);
Transform537.rotation = new SFRotation(new float[1,0,0,0.119]);
Transform537.center = new SFVec3f(new float[0.182,1.22,-0.047]);
HAnimSegment530.children[1] = Transform537;

HAnimSite HAnimSite538 = createNode("HAnimSite");
HAnimSite538.DEF = "hanim_l_humeral_lateral_epicondyle_pt";
HAnimSite538.name = "l_humeral_lateral_epicondyle_pt";
HAnimSite538.translation = new SFVec3f(new float[0.228,1.1482,-0.11]);
Shape Shape539 = createNode("Shape");
Appearance Appearance540 = createNode("Appearance");
Material Material541 = createNode("Material");
Material541.USE = "SITE_COLOR";
Appearance540.material = Material541;

Shape539.appearance = Appearance540;

IndexedFaceSet IndexedFaceSet542 = createNode("IndexedFaceSet");
IndexedFaceSet542.creaseAngle = 0.5;
IndexedFaceSet542.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
Coordinate Coordinate543 = createNode("Coordinate");
Coordinate543.USE = "points";
IndexedFaceSet542.coord = Coordinate543;

Shape539.geometry = IndexedFaceSet542;

HAnimSite538.children = new MFNode();

HAnimSite538.children[0] = Shape539;

HAnimSegment530.children[2] = HAnimSite538;

HAnimJoint529.children = new MFNode();

HAnimJoint529.children[0] = HAnimSegment530;

HAnimJoint HAnimJoint544 = createNode("HAnimJoint");
HAnimJoint544.DEF = "hanim_l_elbow";
HAnimJoint544.name = "l_elbow";
HAnimJoint544.center = new SFVec3f(new float[0.2014,1.1357,-0.0682]);
HAnimSegment HAnimSegment545 = createNode("HAnimSegment");
HAnimSegment545.DEF = "hanim_l_forearm";
HAnimSegment545.name = "l_forearm";
Transform Transform546 = createNode("Transform");
Transform546.translation = new SFVec3f(new float[0.2014,1.1357,-0.0682]);
Shape Shape547 = createNode("Shape");
Appearance Appearance548 = createNode("Appearance");
Material Material549 = createNode("Material");
Material549.USE = "MIN_COLOR";
Appearance548.material = Material549;

Shape547.appearance = Appearance548;

IndexedFaceSet IndexedFaceSet550 = createNode("IndexedFaceSet");
IndexedFaceSet550.creaseAngle = 0.5;
IndexedFaceSet550.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
Coordinate Coordinate551 = createNode("Coordinate");
Coordinate551.USE = "points";
IndexedFaceSet550.coord = Coordinate551;

Shape547.geometry = IndexedFaceSet550;

Transform546.child = new undefined();

Transform546.child[0] = Shape547;

HAnimSegment545.children = new MFNode();

HAnimSegment545.children[0] = Transform546;

Transform Transform552 = createNode("Transform");
Transform552.DEF = "l_forearm_adjust";
Transform552.translation = new SFVec3f(new float[0.2014,1.1357,-0.0682]);
Transform552.rotation = new SFRotation(new float[-1,0,0,0.1]);
Transform552.center = new SFVec3f(new float[0.198,0.961,-0.0405]);
HAnimSegment545.children[1] = Transform552;

HAnimSite HAnimSite553 = createNode("HAnimSite");
HAnimSite553.DEF = "hanim_l_radial_styloid_pt";
HAnimSite553.name = "l_radial_styloid_pt";
HAnimSite553.translation = new SFVec3f(new float[0.1901,0.8645,-0.0415]);
Shape Shape554 = createNode("Shape");
Appearance Appearance555 = createNode("Appearance");
Material Material556 = createNode("Material");
Material556.USE = "SITE_COLOR";
Appearance555.material = Material556;

Shape554.appearance = Appearance555;

IndexedFaceSet IndexedFaceSet557 = createNode("IndexedFaceSet");
IndexedFaceSet557.creaseAngle = 0.5;
IndexedFaceSet557.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
Coordinate Coordinate558 = createNode("Coordinate");
Coordinate558.USE = "points";
IndexedFaceSet557.coord = Coordinate558;

Shape554.geometry = IndexedFaceSet557;

HAnimSite553.children = new MFNode();

HAnimSite553.children[0] = Shape554;

HAnimSegment545.children[2] = HAnimSite553;

HAnimSite HAnimSite559 = createNode("HAnimSite");
HAnimSite559.DEF = "hanim_l_olecranon_pt";
HAnimSite559.name = "l_olecranon_pt";
HAnimSite559.translation = new SFVec3f(new float[-0.1962,1.1375,-0.1123]);
Shape Shape560 = createNode("Shape");
Appearance Appearance561 = createNode("Appearance");
Material Material562 = createNode("Material");
Material562.USE = "SITE_COLOR";
Appearance561.material = Material562;

Shape560.appearance = Appearance561;

IndexedFaceSet IndexedFaceSet563 = createNode("IndexedFaceSet");
IndexedFaceSet563.creaseAngle = 0.5;
IndexedFaceSet563.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
Coordinate Coordinate564 = createNode("Coordinate");
Coordinate564.USE = "points";
IndexedFaceSet563.coord = Coordinate564;

Shape560.geometry = IndexedFaceSet563;

HAnimSite559.children = new MFNode();

HAnimSite559.children[0] = Shape560;

HAnimSegment545.children[3] = HAnimSite559;

HAnimSite HAnimSite565 = createNode("HAnimSite");
HAnimSite565.DEF = "hanim_l_humeral_medial_epicondyle_pt";
HAnimSite565.name = "l_humeral_medial_epicondyle_pt";
HAnimSite565.translation = new SFVec3f(new float[0.1735,1.1272,-0.1113]);
Shape Shape566 = createNode("Shape");
Appearance Appearance567 = createNode("Appearance");
Material Material568 = createNode("Material");
Material568.USE = "SITE_COLOR";
Appearance567.material = Material568;

Shape566.appearance = Appearance567;

IndexedFaceSet IndexedFaceSet569 = createNode("IndexedFaceSet");
IndexedFaceSet569.creaseAngle = 0.5;
IndexedFaceSet569.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
Coordinate Coordinate570 = createNode("Coordinate");
Coordinate570.USE = "points";
IndexedFaceSet569.coord = Coordinate570;

Shape566.geometry = IndexedFaceSet569;

HAnimSite565.children = new MFNode();

HAnimSite565.children[0] = Shape566;

HAnimSegment545.children[4] = HAnimSite565;

HAnimSite HAnimSite571 = createNode("HAnimSite");
HAnimSite571.DEF = "hanim_l_radiale_pt";
HAnimSite571.name = "l_radiale_pt";
HAnimSite571.translation = new SFVec3f(new float[0.2182,1.1212,-0.1167]);
Shape Shape572 = createNode("Shape");
Appearance Appearance573 = createNode("Appearance");
Material Material574 = createNode("Material");
Material574.USE = "SITE_COLOR";
Appearance573.material = Material574;

Shape572.appearance = Appearance573;

IndexedFaceSet IndexedFaceSet575 = createNode("IndexedFaceSet");
IndexedFaceSet575.creaseAngle = 0.5;
IndexedFaceSet575.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
Coordinate Coordinate576 = createNode("Coordinate");
Coordinate576.USE = "points";
IndexedFaceSet575.coord = Coordinate576;

Shape572.geometry = IndexedFaceSet575;

HAnimSite571.children = new MFNode();

HAnimSite571.children[0] = Shape572;

HAnimSegment545.children[5] = HAnimSite571;

HAnimJoint544.children = new MFNode();

HAnimJoint544.children[0] = HAnimSegment545;

HAnimJoint HAnimJoint577 = createNode("HAnimJoint");
HAnimJoint577.DEF = "hanim_l_radiocarpal";
HAnimJoint577.name = "l_radiocarpal";
HAnimJoint577.center = new SFVec3f(new float[0.1984,0.8663,-0.0583]);
HAnimSegment HAnimSegment578 = createNode("HAnimSegment");
HAnimSegment578.DEF = "hanim_l_carpal";
HAnimSegment578.name = "l_carpal";
Transform Transform579 = createNode("Transform");
Transform579.translation = new SFVec3f(new float[0.1984,0.8663,-0.0583]);
Shape Shape580 = createNode("Shape");
Appearance Appearance581 = createNode("Appearance");
Material Material582 = createNode("Material");
Material582.USE = "MIN_COLOR";
Appearance581.material = Material582;

Shape580.appearance = Appearance581;

IndexedFaceSet IndexedFaceSet583 = createNode("IndexedFaceSet");
IndexedFaceSet583.creaseAngle = 0.5;
IndexedFaceSet583.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
Coordinate Coordinate584 = createNode("Coordinate");
Coordinate584.USE = "points";
IndexedFaceSet583.coord = Coordinate584;

Shape580.geometry = IndexedFaceSet583;

Transform579.child = new undefined();

Transform579.child[0] = Shape580;

HAnimSegment578.children = new MFNode();

HAnimSegment578.children[0] = Transform579;

Transform Transform585 = createNode("Transform");
Transform585.DEF = "l_hand_adjust";
Transform585.translation = new SFVec3f(new float[0.1984,0.8663,-0.0583]);
Transform585.rotation = new SFRotation(new float[-0.06361,-0.9967,0.04988,1.333]);
Transform585.center = new SFVec3f(new float[0.213,0.811,-0.0338]);
HAnimSegment578.children[1] = Transform585;

HAnimSite HAnimSite586 = createNode("HAnimSite");
HAnimSite586.DEF = "hanim_l_hand_tip";
HAnimSite586.name = "l_hand_tip";
HAnimSite586.translation = new SFVec3f(new float[0.208,0.6731,-0.0491]);
Shape Shape587 = createNode("Shape");
Appearance Appearance588 = createNode("Appearance");
Material Material589 = createNode("Material");
Material589.USE = "SITE_COLOR";
Appearance588.material = Material589;

Shape587.appearance = Appearance588;

IndexedFaceSet IndexedFaceSet590 = createNode("IndexedFaceSet");
IndexedFaceSet590.creaseAngle = 0.5;
IndexedFaceSet590.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
Coordinate Coordinate591 = createNode("Coordinate");
Coordinate591.USE = "points";
IndexedFaceSet590.coord = Coordinate591;

Shape587.geometry = IndexedFaceSet590;

HAnimSite586.children = new MFNode();

HAnimSite586.children[0] = Shape587;

HAnimSegment578.children[2] = HAnimSite586;

HAnimSite HAnimSite592 = createNode("HAnimSite");
HAnimSite592.DEF = "hanim_l_metacarpal_phalanx_2_pt";
HAnimSite592.name = "l_metacarpal_phalanx_2_pt";
HAnimSite592.translation = new SFVec3f(new float[0.2009,0.8139,-0.0237]);
Shape Shape593 = createNode("Shape");
Appearance Appearance594 = createNode("Appearance");
Material Material595 = createNode("Material");
Material595.USE = "SITE_COLOR";
Appearance594.material = Material595;

Shape593.appearance = Appearance594;

IndexedFaceSet IndexedFaceSet596 = createNode("IndexedFaceSet");
IndexedFaceSet596.creaseAngle = 0.5;
IndexedFaceSet596.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
Coordinate Coordinate597 = createNode("Coordinate");
Coordinate597.USE = "points";
IndexedFaceSet596.coord = Coordinate597;

Shape593.geometry = IndexedFaceSet596;

HAnimSite592.children = new MFNode();

HAnimSite592.children[0] = Shape593;

HAnimSegment578.children[3] = HAnimSite592;

HAnimSite HAnimSite598 = createNode("HAnimSite");
HAnimSite598.DEF = "hanim_l_dactylion_pt";
HAnimSite598.name = "l_dactylion_pt";
HAnimSite598.translation = new SFVec3f(new float[0.2056,0.6743,-0.0482]);
Shape Shape599 = createNode("Shape");
Appearance Appearance600 = createNode("Appearance");
Material Material601 = createNode("Material");
Material601.USE = "SITE_COLOR";
Appearance600.material = Material601;

Shape599.appearance = Appearance600;

IndexedFaceSet IndexedFaceSet602 = createNode("IndexedFaceSet");
IndexedFaceSet602.creaseAngle = 0.5;
IndexedFaceSet602.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
Coordinate Coordinate603 = createNode("Coordinate");
Coordinate603.USE = "points";
IndexedFaceSet602.coord = Coordinate603;

Shape599.geometry = IndexedFaceSet602;

HAnimSite598.children = new MFNode();

HAnimSite598.children[0] = Shape599;

HAnimSegment578.children[4] = HAnimSite598;

HAnimSite HAnimSite604 = createNode("HAnimSite");
HAnimSite604.DEF = "hanim_l_ulnar_styloid_pt";
HAnimSite604.name = "l_ulnar_styloid_pt";
HAnimSite604.translation = new SFVec3f(new float[-0.2142,0.8529,-0.0648]);
Shape Shape605 = createNode("Shape");
Appearance Appearance606 = createNode("Appearance");
Material Material607 = createNode("Material");
Material607.USE = "SITE_COLOR";
Appearance606.material = Material607;

Shape605.appearance = Appearance606;

IndexedFaceSet IndexedFaceSet608 = createNode("IndexedFaceSet");
IndexedFaceSet608.creaseAngle = 0.5;
IndexedFaceSet608.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
Coordinate Coordinate609 = createNode("Coordinate");
Coordinate609.USE = "points";
IndexedFaceSet608.coord = Coordinate609;

Shape605.geometry = IndexedFaceSet608;

HAnimSite604.children = new MFNode();

HAnimSite604.children[0] = Shape605;

HAnimSegment578.children[5] = HAnimSite604;

HAnimSite HAnimSite610 = createNode("HAnimSite");
HAnimSite610.DEF = "hanim_l_metacarpal_phalanx_5_pt";
HAnimSite610.name = "l_metacarpal_phalanx_5_pt";
HAnimSite610.translation = new SFVec3f(new float[0.1929,0.786,-0.1122]);
Shape Shape611 = createNode("Shape");
Appearance Appearance612 = createNode("Appearance");
Material Material613 = createNode("Material");
Material613.USE = "SITE_COLOR";
Appearance612.material = Material613;

Shape611.appearance = Appearance612;

IndexedFaceSet IndexedFaceSet614 = createNode("IndexedFaceSet");
IndexedFaceSet614.creaseAngle = 0.5;
IndexedFaceSet614.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
Coordinate Coordinate615 = createNode("Coordinate");
Coordinate615.USE = "points";
IndexedFaceSet614.coord = Coordinate615;

Shape611.geometry = IndexedFaceSet614;

HAnimSite610.children = new MFNode();

HAnimSite610.children[0] = Shape611;

HAnimSegment578.children[6] = HAnimSite610;

HAnimJoint577.children = new MFNode();

HAnimJoint577.children[0] = HAnimSegment578;

HAnimJoint HAnimJoint616 = createNode("HAnimJoint");
HAnimJoint616.DEF = "hanim_l_carpometacarpal_1";
HAnimJoint616.name = "l_carpometacarpal_1";
HAnimJoint616.center = new SFVec3f(new float[0.1924,0.8472,-0.0534]);
HAnimSegment HAnimSegment617 = createNode("HAnimSegment");
HAnimSegment617.DEF = "hanim_l_metacarpal_1";
HAnimSegment617.name = "l_metacarpal_1";
Transform Transform618 = createNode("Transform");
Transform618.translation = new SFVec3f(new float[0.1924,0.8472,-0.0534]);
Shape Shape619 = createNode("Shape");
Appearance Appearance620 = createNode("Appearance");
Material Material621 = createNode("Material");
Material621.USE = "JOINT_COLOR";
Appearance620.material = Material621;

Shape619.appearance = Appearance620;

IndexedFaceSet IndexedFaceSet622 = createNode("IndexedFaceSet");
IndexedFaceSet622.creaseAngle = 0.5;
IndexedFaceSet622.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
Coordinate Coordinate623 = createNode("Coordinate");
Coordinate623.USE = "points";
IndexedFaceSet622.coord = Coordinate623;

Shape619.geometry = IndexedFaceSet622;

Transform618.child = new undefined();

Transform618.child[0] = Shape619;

HAnimSegment617.children = new MFNode();

HAnimSegment617.children[0] = Transform618;

HAnimJoint616.children = new MFNode();

HAnimJoint616.children[0] = HAnimSegment617;

HAnimJoint HAnimJoint624 = createNode("HAnimJoint");
HAnimJoint624.DEF = "hanim_l_metacarpophalangeal_1";
HAnimJoint624.name = "l_metacarpophalangeal_1";
HAnimJoint624.center = new SFVec3f(new float[0.1951,0.8226,0.0246]);
HAnimSegment HAnimSegment625 = createNode("HAnimSegment");
HAnimSegment625.DEF = "hanim_l_carpal_proximal_phalanx_1";
HAnimSegment625.name = "l_carpal_proximal_phalanx_1";
Transform Transform626 = createNode("Transform");
Transform626.translation = new SFVec3f(new float[0.1951,0.8226,0.0246]);
Shape Shape627 = createNode("Shape");
Appearance Appearance628 = createNode("Appearance");
Material Material629 = createNode("Material");
Material629.USE = "JOINT_COLOR";
Appearance628.material = Material629;

Shape627.appearance = Appearance628;

IndexedFaceSet IndexedFaceSet630 = createNode("IndexedFaceSet");
IndexedFaceSet630.creaseAngle = 0.5;
IndexedFaceSet630.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
Coordinate Coordinate631 = createNode("Coordinate");
Coordinate631.USE = "points";
IndexedFaceSet630.coord = Coordinate631;

Shape627.geometry = IndexedFaceSet630;

Transform626.child = new undefined();

Transform626.child[0] = Shape627;

HAnimSegment625.children = new MFNode();

HAnimSegment625.children[0] = Transform626;

HAnimJoint624.children = new MFNode();

HAnimJoint624.children[0] = HAnimSegment625;

HAnimJoint HAnimJoint632 = createNode("HAnimJoint");
HAnimJoint632.DEF = "hanim_l_carpal_interphalangeal_1";
HAnimJoint632.name = "l_carpal_interphalangeal_1";
HAnimJoint632.center = new SFVec3f(new float[0.1955,0.8159,0.0464]);
HAnimSegment HAnimSegment633 = createNode("HAnimSegment");
HAnimSegment633.DEF = "hanim_l_carpal_distal_phalanx_1";
HAnimSegment633.name = "l_carpal_distal_phalanx_1";
Transform Transform634 = createNode("Transform");
Transform634.translation = new SFVec3f(new float[0.1955,0.8159,0.0464]);
Shape Shape635 = createNode("Shape");
Appearance Appearance636 = createNode("Appearance");
Material Material637 = createNode("Material");
Material637.USE = "JOINT_COLOR";
Appearance636.material = Material637;

Shape635.appearance = Appearance636;

IndexedFaceSet IndexedFaceSet638 = createNode("IndexedFaceSet");
IndexedFaceSet638.creaseAngle = 0.5;
IndexedFaceSet638.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
Coordinate Coordinate639 = createNode("Coordinate");
Coordinate639.USE = "points";
IndexedFaceSet638.coord = Coordinate639;

Shape635.geometry = IndexedFaceSet638;

Transform634.child = new undefined();

Transform634.child[0] = Shape635;

HAnimSegment633.children = new MFNode();

HAnimSegment633.children[0] = Transform634;

HAnimSite HAnimSite640 = createNode("HAnimSite");
HAnimSite640.DEF = "hanim_l_carpal_distal_phalanx_1_tip";
HAnimSite640.name = "l_carpal_distal_phalanx_1_tip";
HAnimSite640.translation = new SFVec3f(new float[0.1982,0.8061,0.0759]);
Shape Shape641 = createNode("Shape");
Appearance Appearance642 = createNode("Appearance");
Material Material643 = createNode("Material");
Material643.USE = "HAND_FEET_COLOR";
Appearance642.material = Material643;

Shape641.appearance = Appearance642;

IndexedFaceSet IndexedFaceSet644 = createNode("IndexedFaceSet");
IndexedFaceSet644.creaseAngle = 0.5;
IndexedFaceSet644.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
Coordinate Coordinate645 = createNode("Coordinate");
Coordinate645.USE = "points";
IndexedFaceSet644.coord = Coordinate645;

Shape641.geometry = IndexedFaceSet644;

HAnimSite640.children = new MFNode();

HAnimSite640.children[0] = Shape641;

HAnimSegment633.children[1] = HAnimSite640;

HAnimJoint632.children = new MFNode();

HAnimJoint632.children[0] = HAnimSegment633;

HAnimJoint624.children[1] = HAnimJoint632;

HAnimJoint616.children[1] = HAnimJoint624;

HAnimJoint577.children[1] = HAnimJoint616;

HAnimJoint HAnimJoint646 = createNode("HAnimJoint");
HAnimJoint646.DEF = "hanim_l_carpometacarpal_2";
HAnimJoint646.name = "l_carpometacarpal_2";
HAnimJoint646.center = new SFVec3f(new float[0.1983,0.8024,-0.028]);
HAnimSegment HAnimSegment647 = createNode("HAnimSegment");
HAnimSegment647.DEF = "hanim_l_metacarpal_2";
HAnimSegment647.name = "l_metacarpal_2";
Transform Transform648 = createNode("Transform");
Transform648.translation = new SFVec3f(new float[0.1983,0.8024,-0.028]);
Shape Shape649 = createNode("Shape");
Appearance Appearance650 = createNode("Appearance");
Material Material651 = createNode("Material");
Material651.USE = "JOINT_COLOR";
Appearance650.material = Material651;

Shape649.appearance = Appearance650;

IndexedFaceSet IndexedFaceSet652 = createNode("IndexedFaceSet");
IndexedFaceSet652.creaseAngle = 0.5;
IndexedFaceSet652.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
Coordinate Coordinate653 = createNode("Coordinate");
Coordinate653.USE = "points";
IndexedFaceSet652.coord = Coordinate653;

Shape649.geometry = IndexedFaceSet652;

Transform648.child = new undefined();

Transform648.child[0] = Shape649;

HAnimSegment647.children = new MFNode();

HAnimSegment647.children[0] = Transform648;

HAnimJoint646.children = new MFNode();

HAnimJoint646.children[0] = HAnimSegment647;

HAnimJoint HAnimJoint654 = createNode("HAnimJoint");
HAnimJoint654.DEF = "hanim_l_metacarpophalangeal_2";
HAnimJoint654.name = "l_metacarpophalangeal_2";
HAnimJoint654.center = new SFVec3f(new float[0.1983,0.7815,-0.028]);
HAnimSegment HAnimSegment655 = createNode("HAnimSegment");
HAnimSegment655.DEF = "hanim_l_carpal_proximal_phalanx_2";
HAnimSegment655.name = "l_carpal_proximal_phalanx_2";
Transform Transform656 = createNode("Transform");
Transform656.translation = new SFVec3f(new float[0.1983,0.7815,-0.028]);
Shape Shape657 = createNode("Shape");
Appearance Appearance658 = createNode("Appearance");
Material Material659 = createNode("Material");
Material659.USE = "JOINT_COLOR";
Appearance658.material = Material659;

Shape657.appearance = Appearance658;

IndexedFaceSet IndexedFaceSet660 = createNode("IndexedFaceSet");
IndexedFaceSet660.creaseAngle = 0.5;
IndexedFaceSet660.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
Coordinate Coordinate661 = createNode("Coordinate");
Coordinate661.USE = "points";
IndexedFaceSet660.coord = Coordinate661;

Shape657.geometry = IndexedFaceSet660;

Transform656.child = new undefined();

Transform656.child[0] = Shape657;

HAnimSegment655.children = new MFNode();

HAnimSegment655.children[0] = Transform656;

HAnimJoint654.children = new MFNode();

HAnimJoint654.children[0] = HAnimSegment655;

HAnimJoint HAnimJoint662 = createNode("HAnimJoint");
HAnimJoint662.DEF = "hanim_l_carpal_proximal_interphalangeal_2";
HAnimJoint662.name = "l_carpal_proximal_interphalangeal_2";
HAnimJoint662.center = new SFVec3f(new float[0.2017,0.7363,-0.0248]);
HAnimSegment HAnimSegment663 = createNode("HAnimSegment");
HAnimSegment663.DEF = "hanim_l_carpal_middle_phalanx_2";
HAnimSegment663.name = "l_carpal_middle_phalanx_2";
Transform Transform664 = createNode("Transform");
Transform664.translation = new SFVec3f(new float[0.2017,0.7363,-0.0248]);
Shape Shape665 = createNode("Shape");
Appearance Appearance666 = createNode("Appearance");
Material Material667 = createNode("Material");
Material667.USE = "JOINT_COLOR";
Appearance666.material = Material667;

Shape665.appearance = Appearance666;

IndexedFaceSet IndexedFaceSet668 = createNode("IndexedFaceSet");
IndexedFaceSet668.creaseAngle = 0.5;
IndexedFaceSet668.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
Coordinate Coordinate669 = createNode("Coordinate");
Coordinate669.USE = "points";
IndexedFaceSet668.coord = Coordinate669;

Shape665.geometry = IndexedFaceSet668;

Transform664.child = new undefined();

Transform664.child[0] = Shape665;

HAnimSegment663.children = new MFNode();

HAnimSegment663.children[0] = Transform664;

HAnimJoint662.children = new MFNode();

HAnimJoint662.children[0] = HAnimSegment663;

HAnimJoint HAnimJoint670 = createNode("HAnimJoint");
HAnimJoint670.DEF = "hanim_l_carpal_distal_interphalangeal_2";
HAnimJoint670.name = "l_carpal_distal_interphalangeal_2";
HAnimJoint670.center = new SFVec3f(new float[0.2028,0.7139,-0.0236]);
HAnimSegment HAnimSegment671 = createNode("HAnimSegment");
HAnimSegment671.DEF = "hanim_l_carpal_distal_phalanx_2";
HAnimSegment671.name = "l_carpal_distal_phalanx_2";
Transform Transform672 = createNode("Transform");
Transform672.translation = new SFVec3f(new float[0.2028,0.7139,-0.0236]);
Shape Shape673 = createNode("Shape");
Appearance Appearance674 = createNode("Appearance");
Material Material675 = createNode("Material");
Material675.USE = "JOINT_COLOR";
Appearance674.material = Material675;

Shape673.appearance = Appearance674;

IndexedFaceSet IndexedFaceSet676 = createNode("IndexedFaceSet");
IndexedFaceSet676.creaseAngle = 0.5;
IndexedFaceSet676.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
Coordinate Coordinate677 = createNode("Coordinate");
Coordinate677.USE = "points";
IndexedFaceSet676.coord = Coordinate677;

Shape673.geometry = IndexedFaceSet676;

Transform672.child = new undefined();

Transform672.child[0] = Shape673;

HAnimSegment671.children = new MFNode();

HAnimSegment671.children[0] = Transform672;

HAnimSite HAnimSite678 = createNode("HAnimSite");
HAnimSite678.DEF = "hanim_l_carpal_distal_phalanx_2_tip";
HAnimSite678.name = "l_carpal_distal_phalanx_2_tip";
HAnimSite678.translation = new SFVec3f(new float[0.2089,0.6858,-0.0245]);
Shape Shape679 = createNode("Shape");
Appearance Appearance680 = createNode("Appearance");
Material Material681 = createNode("Material");
Material681.USE = "HAND_FEET_COLOR";
Appearance680.material = Material681;

Shape679.appearance = Appearance680;

IndexedFaceSet IndexedFaceSet682 = createNode("IndexedFaceSet");
IndexedFaceSet682.creaseAngle = 0.5;
IndexedFaceSet682.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
Coordinate Coordinate683 = createNode("Coordinate");
Coordinate683.USE = "points";
IndexedFaceSet682.coord = Coordinate683;

Shape679.geometry = IndexedFaceSet682;

HAnimSite678.children = new MFNode();

HAnimSite678.children[0] = Shape679;

HAnimSegment671.children[1] = HAnimSite678;

HAnimJoint670.children = new MFNode();

HAnimJoint670.children[0] = HAnimSegment671;

HAnimJoint662.children[1] = HAnimJoint670;

HAnimJoint654.children[1] = HAnimJoint662;

HAnimJoint646.children[1] = HAnimJoint654;

HAnimJoint577.children[2] = HAnimJoint646;

HAnimJoint544.children[1] = HAnimJoint577;

HAnimJoint529.children[1] = HAnimJoint544;

HAnimJoint521.children[1] = HAnimJoint529;

HAnimJoint HAnimJoint684 = createNode("HAnimJoint");
HAnimJoint684.DEF = "hanim_r_shoulder";
HAnimJoint684.name = "r_shoulder";
HAnimJoint684.center = new SFVec3f(new float[-0.1907,1.4407,-0.0325]);
HAnimSegment HAnimSegment685 = createNode("HAnimSegment");
HAnimSegment685.DEF = "hanim_r_upperarm";
HAnimSegment685.name = "r_upperarm";
Transform Transform686 = createNode("Transform");
Transform686.translation = new SFVec3f(new float[-0.1907,1.4407,-0.0325]);
Shape Shape687 = createNode("Shape");
Appearance Appearance688 = createNode("Appearance");
Material Material689 = createNode("Material");
Material689.USE = "MIN_COLOR";
Appearance688.material = Material689;

Shape687.appearance = Appearance688;

IndexedFaceSet IndexedFaceSet690 = createNode("IndexedFaceSet");
IndexedFaceSet690.creaseAngle = 0.5;
IndexedFaceSet690.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
Coordinate Coordinate691 = createNode("Coordinate");
Coordinate691.USE = "points";
IndexedFaceSet690.coord = Coordinate691;

Shape687.geometry = IndexedFaceSet690;

Transform686.child = new undefined();

Transform686.child[0] = Shape687;

HAnimSegment685.children = new MFNode();

HAnimSegment685.children[0] = Transform686;

Transform Transform692 = createNode("Transform");
Transform692.DEF = "r_upperarm_adjust";
Transform692.translation = new SFVec3f(new float[-0.1907,1.4407,-0.0325]);
Transform692.rotation = new SFRotation(new float[1,0,0,0.0836]);
Transform692.center = new SFVec3f(new float[-0.182,1.22,-0.047]);
HAnimSegment685.children[1] = Transform692;

HAnimSite HAnimSite693 = createNode("HAnimSite");
HAnimSite693.DEF = "hanim_r_humeral_lateral_epicondyle_pt";
HAnimSite693.name = "r_humeral_lateral_epicondyle_pt";
HAnimSite693.translation = new SFVec3f(new float[-0.2224,1.1517,-0.1033]);
Shape Shape694 = createNode("Shape");
Appearance Appearance695 = createNode("Appearance");
Material Material696 = createNode("Material");
Material696.USE = "SITE_COLOR";
Appearance695.material = Material696;

Shape694.appearance = Appearance695;

IndexedFaceSet IndexedFaceSet697 = createNode("IndexedFaceSet");
IndexedFaceSet697.creaseAngle = 0.5;
IndexedFaceSet697.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
Coordinate Coordinate698 = createNode("Coordinate");
Coordinate698.USE = "points";
IndexedFaceSet697.coord = Coordinate698;

Shape694.geometry = IndexedFaceSet697;

HAnimSite693.children = new MFNode();

HAnimSite693.children[0] = Shape694;

HAnimSegment685.children[2] = HAnimSite693;

HAnimJoint684.children = new MFNode();

HAnimJoint684.children[0] = HAnimSegment685;

HAnimJoint HAnimJoint699 = createNode("HAnimJoint");
HAnimJoint699.DEF = "hanim_r_elbow";
HAnimJoint699.name = "r_elbow";
HAnimJoint699.center = new SFVec3f(new float[-0.1949,1.1388,-0.062]);
HAnimSegment HAnimSegment700 = createNode("HAnimSegment");
HAnimSegment700.DEF = "hanim_r_forearm";
HAnimSegment700.name = "r_forearm";
Transform Transform701 = createNode("Transform");
Transform701.translation = new SFVec3f(new float[-0.1949,1.1388,-0.062]);
Shape Shape702 = createNode("Shape");
Appearance Appearance703 = createNode("Appearance");
Material Material704 = createNode("Material");
Material704.USE = "MIN_COLOR";
Appearance703.material = Material704;

Shape702.appearance = Appearance703;

IndexedFaceSet IndexedFaceSet705 = createNode("IndexedFaceSet");
IndexedFaceSet705.creaseAngle = 0.5;
IndexedFaceSet705.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
Coordinate Coordinate706 = createNode("Coordinate");
Coordinate706.USE = "points";
IndexedFaceSet705.coord = Coordinate706;

Shape702.geometry = IndexedFaceSet705;

Transform701.child = new undefined();

Transform701.child[0] = Shape702;

HAnimSegment700.children = new MFNode();

HAnimSegment700.children[0] = Transform701;

Transform Transform707 = createNode("Transform");
Transform707.DEF = "r_forearm_adjust";
Transform707.translation = new SFVec3f(new float[-0.1949,1.1388,-0.062]);
Transform707.rotation = new SFRotation(new float[-1,0,0,0.1254]);
Transform707.center = new SFVec3f(new float[-0.198,0.961,-0.0397]);
HAnimSegment700.children[1] = Transform707;

HAnimSite HAnimSite708 = createNode("HAnimSite");
HAnimSite708.DEF = "hanim_r_radial_styloid_pt";
HAnimSite708.name = "r_radial_styloid_pt";
HAnimSite708.translation = new SFVec3f(new float[-0.1884,0.8676,-0.036]);
Shape Shape709 = createNode("Shape");
Appearance Appearance710 = createNode("Appearance");
Material Material711 = createNode("Material");
Material711.USE = "SITE_COLOR";
Appearance710.material = Material711;

Shape709.appearance = Appearance710;

IndexedFaceSet IndexedFaceSet712 = createNode("IndexedFaceSet");
IndexedFaceSet712.creaseAngle = 0.5;
IndexedFaceSet712.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
Coordinate Coordinate713 = createNode("Coordinate");
Coordinate713.USE = "points";
IndexedFaceSet712.coord = Coordinate713;

Shape709.geometry = IndexedFaceSet712;

HAnimSite708.children = new MFNode();

HAnimSite708.children[0] = Shape709;

HAnimSegment700.children[2] = HAnimSite708;

HAnimSite HAnimSite714 = createNode("HAnimSite");
HAnimSite714.DEF = "hanim_r_olecranon_pt";
HAnimSite714.name = "r_olecranon_pt";
HAnimSite714.translation = new SFVec3f(new float[-0.1907,1.1405,-0.1065]);
Shape Shape715 = createNode("Shape");
Appearance Appearance716 = createNode("Appearance");
Material Material717 = createNode("Material");
Material717.USE = "SITE_COLOR";
Appearance716.material = Material717;

Shape715.appearance = Appearance716;

IndexedFaceSet IndexedFaceSet718 = createNode("IndexedFaceSet");
IndexedFaceSet718.creaseAngle = 0.5;
IndexedFaceSet718.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
Coordinate Coordinate719 = createNode("Coordinate");
Coordinate719.USE = "points";
IndexedFaceSet718.coord = Coordinate719;

Shape715.geometry = IndexedFaceSet718;

HAnimSite714.children = new MFNode();

HAnimSite714.children[0] = Shape715;

HAnimSegment700.children[3] = HAnimSite714;

HAnimSite HAnimSite720 = createNode("HAnimSite");
HAnimSite720.DEF = "hanim_r_humeral_medial_epicondyle_pt";
HAnimSite720.name = "r_humeral_medial_epicondyle_pt";
HAnimSite720.translation = new SFVec3f(new float[-0.168,1.1298,-0.1062]);
Shape Shape721 = createNode("Shape");
Appearance Appearance722 = createNode("Appearance");
Material Material723 = createNode("Material");
Material723.USE = "SITE_COLOR";
Appearance722.material = Material723;

Shape721.appearance = Appearance722;

IndexedFaceSet IndexedFaceSet724 = createNode("IndexedFaceSet");
IndexedFaceSet724.creaseAngle = 0.5;
IndexedFaceSet724.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
Coordinate Coordinate725 = createNode("Coordinate");
Coordinate725.USE = "points";
IndexedFaceSet724.coord = Coordinate725;

Shape721.geometry = IndexedFaceSet724;

HAnimSite720.children = new MFNode();

HAnimSite720.children[0] = Shape721;

HAnimSegment700.children[4] = HAnimSite720;

HAnimSite HAnimSite726 = createNode("HAnimSite");
HAnimSite726.DEF = "hanim_r_radiale_pt";
HAnimSite726.name = "r_radiale_pt";
HAnimSite726.translation = new SFVec3f(new float[-0.213,1.1305,-0.1091]);
Shape Shape727 = createNode("Shape");
Appearance Appearance728 = createNode("Appearance");
Material Material729 = createNode("Material");
Material729.USE = "SITE_COLOR";
Appearance728.material = Material729;

Shape727.appearance = Appearance728;

IndexedFaceSet IndexedFaceSet730 = createNode("IndexedFaceSet");
IndexedFaceSet730.creaseAngle = 0.5;
IndexedFaceSet730.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
Coordinate Coordinate731 = createNode("Coordinate");
Coordinate731.USE = "points";
IndexedFaceSet730.coord = Coordinate731;

Shape727.geometry = IndexedFaceSet730;

HAnimSite726.children = new MFNode();

HAnimSite726.children[0] = Shape727;

HAnimSegment700.children[5] = HAnimSite726;

HAnimJoint699.children = new MFNode();

HAnimJoint699.children[0] = HAnimSegment700;

HAnimJoint HAnimJoint732 = createNode("HAnimJoint");
HAnimJoint732.DEF = "hanim_r_radiocarpal";
HAnimJoint732.name = "r_radiocarpal";
HAnimJoint732.center = new SFVec3f(new float[-0.1959,0.8694,-0.0521]);
HAnimSegment HAnimSegment733 = createNode("HAnimSegment");
HAnimSegment733.DEF = "hanim_r_carpal";
HAnimSegment733.name = "r_carpal";
Transform Transform734 = createNode("Transform");
Transform734.translation = new SFVec3f(new float[-0.1959,0.8694,-0.0521]);
Shape Shape735 = createNode("Shape");
Appearance Appearance736 = createNode("Appearance");
Material Material737 = createNode("Material");
Material737.USE = "MIN_COLOR";
Appearance736.material = Material737;

Shape735.appearance = Appearance736;

IndexedFaceSet IndexedFaceSet738 = createNode("IndexedFaceSet");
IndexedFaceSet738.creaseAngle = 0.5;
IndexedFaceSet738.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
Coordinate Coordinate739 = createNode("Coordinate");
Coordinate739.USE = "points";
IndexedFaceSet738.coord = Coordinate739;

Shape735.geometry = IndexedFaceSet738;

Transform734.child = new undefined();

Transform734.child[0] = Shape735;

HAnimSegment733.children = new MFNode();

HAnimSegment733.children[0] = Transform734;

Transform Transform740 = createNode("Transform");
Transform740.DEF = "r_hand_adjust";
Transform740.rotation = new SFRotation(new float[-0.09024,0.994,-0.0624,1.216]);
Transform740.center = new SFVec3f(new float[-0.217,0.811,-0.0338]);
HAnimSegment733.children[1] = Transform740;

HAnimSite HAnimSite741 = createNode("HAnimSite");
HAnimSite741.DEF = "hanim_r_hand_tip";
HAnimSite741.name = "r_hand_tip";
HAnimSite741.translation = new SFVec3f(new float[-0.1969,0.6758,-0.0427]);
Shape Shape742 = createNode("Shape");
Appearance Appearance743 = createNode("Appearance");
Material Material744 = createNode("Material");
Material744.USE = "SITE_COLOR";
Appearance743.material = Material744;

Shape742.appearance = Appearance743;

IndexedFaceSet IndexedFaceSet745 = createNode("IndexedFaceSet");
IndexedFaceSet745.creaseAngle = 0.5;
IndexedFaceSet745.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
Coordinate Coordinate746 = createNode("Coordinate");
Coordinate746.USE = "points";
IndexedFaceSet745.coord = Coordinate746;

Shape742.geometry = IndexedFaceSet745;

HAnimSite741.children = new MFNode();

HAnimSite741.children[0] = Shape742;

HAnimSegment733.children[2] = HAnimSite741;

HAnimSite HAnimSite747 = createNode("HAnimSite");
HAnimSite747.DEF = "hanim_r_metacarpal_phalanx_2_pt";
HAnimSite747.name = "r_metacarpal_phalanx_2_pt";
HAnimSite747.translation = new SFVec3f(new float[-0.1977,0.8169,-0.0177]);
Shape Shape748 = createNode("Shape");
Appearance Appearance749 = createNode("Appearance");
Material Material750 = createNode("Material");
Material750.USE = "SITE_COLOR";
Appearance749.material = Material750;

Shape748.appearance = Appearance749;

IndexedFaceSet IndexedFaceSet751 = createNode("IndexedFaceSet");
IndexedFaceSet751.creaseAngle = 0.5;
IndexedFaceSet751.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
Coordinate Coordinate752 = createNode("Coordinate");
Coordinate752.USE = "points";
IndexedFaceSet751.coord = Coordinate752;

Shape748.geometry = IndexedFaceSet751;

HAnimSite747.children = new MFNode();

HAnimSite747.children[0] = Shape748;

HAnimSegment733.children[3] = HAnimSite747;

HAnimSite HAnimSite753 = createNode("HAnimSite");
HAnimSite753.DEF = "hanim_r_dactylion_pt";
HAnimSite753.name = "r_dactylion_pt";
HAnimSite753.translation = new SFVec3f(new float[-0.1941,0.6772,-0.0423]);
Shape Shape754 = createNode("Shape");
Appearance Appearance755 = createNode("Appearance");
Material Material756 = createNode("Material");
Material756.USE = "SITE_COLOR";
Appearance755.material = Material756;

Shape754.appearance = Appearance755;

IndexedFaceSet IndexedFaceSet757 = createNode("IndexedFaceSet");
IndexedFaceSet757.creaseAngle = 0.5;
IndexedFaceSet757.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
Coordinate Coordinate758 = createNode("Coordinate");
Coordinate758.USE = "points";
IndexedFaceSet757.coord = Coordinate758;

Shape754.geometry = IndexedFaceSet757;

HAnimSite753.children = new MFNode();

HAnimSite753.children[0] = Shape754;

HAnimSegment733.children[4] = HAnimSite753;

HAnimSite HAnimSite759 = createNode("HAnimSite");
HAnimSite759.DEF = "hanim_r_ulnar_styloid_pt";
HAnimSite759.name = "r_ulnar_styloid_pt";
HAnimSite759.translation = new SFVec3f(new float[-0.2117,0.8562,-0.0584]);
Shape Shape760 = createNode("Shape");
Appearance Appearance761 = createNode("Appearance");
Material Material762 = createNode("Material");
Material762.USE = "SITE_COLOR";
Appearance761.material = Material762;

Shape760.appearance = Appearance761;

IndexedFaceSet IndexedFaceSet763 = createNode("IndexedFaceSet");
IndexedFaceSet763.creaseAngle = 0.5;
IndexedFaceSet763.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
Coordinate Coordinate764 = createNode("Coordinate");
Coordinate764.USE = "points";
IndexedFaceSet763.coord = Coordinate764;

Shape760.geometry = IndexedFaceSet763;

HAnimSite759.children = new MFNode();

HAnimSite759.children[0] = Shape760;

HAnimSegment733.children[5] = HAnimSite759;

HAnimSite HAnimSite765 = createNode("HAnimSite");
HAnimSite765.DEF = "hanim_r_metacarpal_phalanx_5_pt";
HAnimSite765.name = "r_metacarpal_phalanx_5_pt";
HAnimSite765.translation = new SFVec3f(new float[-0.1929,0.789,-0.1064]);
Shape Shape766 = createNode("Shape");
Appearance Appearance767 = createNode("Appearance");
Material Material768 = createNode("Material");
Material768.USE = "SITE_COLOR";
Appearance767.material = Material768;

Shape766.appearance = Appearance767;

IndexedFaceSet IndexedFaceSet769 = createNode("IndexedFaceSet");
IndexedFaceSet769.creaseAngle = 0.5;
IndexedFaceSet769.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
Coordinate Coordinate770 = createNode("Coordinate");
Coordinate770.USE = "points";
IndexedFaceSet769.coord = Coordinate770;

Shape766.geometry = IndexedFaceSet769;

HAnimSite765.children = new MFNode();

HAnimSite765.children[0] = Shape766;

HAnimSegment733.children[6] = HAnimSite765;

HAnimJoint732.children = new MFNode();

HAnimJoint732.children[0] = HAnimSegment733;

HAnimJoint699.children[1] = HAnimJoint732;

HAnimJoint684.children[1] = HAnimJoint699;

HAnimJoint521.children[2] = HAnimJoint684;

HAnimJoint HAnimJoint771 = createNode("HAnimJoint");
HAnimJoint771.DEF = "hanim_vc7";
HAnimJoint771.name = "vc7";
HAnimJoint771.center = new SFVec3f(new float[0.0066,1.5132,-0.0301]);
HAnimSegment HAnimSegment772 = createNode("HAnimSegment");
HAnimSegment772.DEF = "hanim_c7";
HAnimSegment772.name = "c7";
Transform Transform773 = createNode("Transform");
Transform773.translation = new SFVec3f(new float[0.0066,1.5132,-0.0301]);
Shape Shape774 = createNode("Shape");
Appearance Appearance775 = createNode("Appearance");
Material Material776 = createNode("Material");
Material776.USE = "SPINAL_COLOR";
Appearance775.material = Material776;

Shape774.appearance = Appearance775;

IndexedFaceSet IndexedFaceSet777 = createNode("IndexedFaceSet");
IndexedFaceSet777.creaseAngle = 0.5;
IndexedFaceSet777.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
Coordinate Coordinate778 = createNode("Coordinate");
Coordinate778.USE = "points";
IndexedFaceSet777.coord = Coordinate778;

Shape774.geometry = IndexedFaceSet777;

Transform773.child = new undefined();

Transform773.child[0] = Shape774;

HAnimSegment772.children = new MFNode();

HAnimSegment772.children[0] = Transform773;

HAnimJoint771.children = new MFNode();

HAnimJoint771.children[0] = HAnimSegment772;

HAnimJoint HAnimJoint779 = createNode("HAnimJoint");
HAnimJoint779.DEF = "hanim_vc6";
HAnimJoint779.name = "vc6";
HAnimJoint779.center = new SFVec3f(new float[0.0066,1.5357,-0.0143]);
HAnimSegment HAnimSegment780 = createNode("HAnimSegment");
HAnimSegment780.DEF = "hanim_c6";
HAnimSegment780.name = "c6";
Transform Transform781 = createNode("Transform");
Transform781.translation = new SFVec3f(new float[0.0066,1.5357,-0.0143]);
Shape Shape782 = createNode("Shape");
Appearance Appearance783 = createNode("Appearance");
Material Material784 = createNode("Material");
Material784.USE = "SPINAL_COLOR";
Appearance783.material = Material784;

Shape782.appearance = Appearance783;

IndexedFaceSet IndexedFaceSet785 = createNode("IndexedFaceSet");
IndexedFaceSet785.creaseAngle = 0.5;
IndexedFaceSet785.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
Coordinate Coordinate786 = createNode("Coordinate");
Coordinate786.USE = "points";
IndexedFaceSet785.coord = Coordinate786;

Shape782.geometry = IndexedFaceSet785;

Transform781.child = new undefined();

Transform781.child[0] = Shape782;

HAnimSegment780.children = new MFNode();

HAnimSegment780.children[0] = Transform781;

HAnimJoint779.children = new MFNode();

HAnimJoint779.children[0] = HAnimSegment780;

HAnimJoint HAnimJoint787 = createNode("HAnimJoint");
HAnimJoint787.DEF = "hanim_vc5";
HAnimJoint787.name = "vc5";
HAnimJoint787.center = new SFVec3f(new float[0.0066,1.552,-0.0082]);
HAnimSegment HAnimSegment788 = createNode("HAnimSegment");
HAnimSegment788.DEF = "hanim_c5";
HAnimSegment788.name = "c5";
Transform Transform789 = createNode("Transform");
Transform789.translation = new SFVec3f(new float[0.0066,1.552,-0.0082]);
Shape Shape790 = createNode("Shape");
Appearance Appearance791 = createNode("Appearance");
Material Material792 = createNode("Material");
Material792.USE = "SPINAL_COLOR";
Appearance791.material = Material792;

Shape790.appearance = Appearance791;

IndexedFaceSet IndexedFaceSet793 = createNode("IndexedFaceSet");
IndexedFaceSet793.creaseAngle = 0.5;
IndexedFaceSet793.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
Coordinate Coordinate794 = createNode("Coordinate");
Coordinate794.USE = "points";
IndexedFaceSet793.coord = Coordinate794;

Shape790.geometry = IndexedFaceSet793;

Transform789.child = new undefined();

Transform789.child[0] = Shape790;

HAnimSegment788.children = new MFNode();

HAnimSegment788.children[0] = Transform789;

HAnimJoint787.children = new MFNode();

HAnimJoint787.children[0] = HAnimSegment788;

HAnimJoint HAnimJoint795 = createNode("HAnimJoint");
HAnimJoint795.DEF = "hanim_vc4";
HAnimJoint795.name = "vc4";
HAnimJoint795.center = new SFVec3f(new float[0.0066,1.5662,-0.0084]);
HAnimSegment HAnimSegment796 = createNode("HAnimSegment");
HAnimSegment796.DEF = "hanim_c4";
HAnimSegment796.name = "c4";
Transform Transform797 = createNode("Transform");
Transform797.translation = new SFVec3f(new float[0.0066,1.5662,-0.0084]);
Shape Shape798 = createNode("Shape");
Appearance Appearance799 = createNode("Appearance");
Material Material800 = createNode("Material");
Material800.USE = "SPINAL_COLOR";
Appearance799.material = Material800;

Shape798.appearance = Appearance799;

IndexedFaceSet IndexedFaceSet801 = createNode("IndexedFaceSet");
IndexedFaceSet801.creaseAngle = 0.5;
IndexedFaceSet801.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
Coordinate Coordinate802 = createNode("Coordinate");
Coordinate802.USE = "points";
IndexedFaceSet801.coord = Coordinate802;

Shape798.geometry = IndexedFaceSet801;

Transform797.child = new undefined();

Transform797.child[0] = Shape798;

HAnimSegment796.children = new MFNode();

HAnimSegment796.children[0] = Transform797;

HAnimJoint795.children = new MFNode();

HAnimJoint795.children[0] = HAnimSegment796;

HAnimJoint HAnimJoint803 = createNode("HAnimJoint");
HAnimJoint803.DEF = "hanim_vc3";
HAnimJoint803.name = "vc3";
HAnimJoint803.center = new SFVec3f(new float[0.0066,1.58,-0.0103]);
HAnimSegment HAnimSegment804 = createNode("HAnimSegment");
HAnimSegment804.DEF = "hanim_c3";
HAnimSegment804.name = "c3";
Transform Transform805 = createNode("Transform");
Transform805.translation = new SFVec3f(new float[0.0066,1.58,-0.0103]);
Shape Shape806 = createNode("Shape");
Appearance Appearance807 = createNode("Appearance");
Material Material808 = createNode("Material");
Material808.USE = "SPINAL_COLOR";
Appearance807.material = Material808;

Shape806.appearance = Appearance807;

IndexedFaceSet IndexedFaceSet809 = createNode("IndexedFaceSet");
IndexedFaceSet809.creaseAngle = 0.5;
IndexedFaceSet809.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
Coordinate Coordinate810 = createNode("Coordinate");
Coordinate810.USE = "points";
IndexedFaceSet809.coord = Coordinate810;

Shape806.geometry = IndexedFaceSet809;

Transform805.child = new undefined();

Transform805.child[0] = Shape806;

HAnimSegment804.children = new MFNode();

HAnimSegment804.children[0] = Transform805;

HAnimJoint803.children = new MFNode();

HAnimJoint803.children[0] = HAnimSegment804;

HAnimJoint HAnimJoint811 = createNode("HAnimJoint");
HAnimJoint811.DEF = "hanim_vc2";
HAnimJoint811.name = "vc2";
HAnimJoint811.center = new SFVec3f(new float[0.0066,1.5928,-0.0103]);
HAnimSegment HAnimSegment812 = createNode("HAnimSegment");
HAnimSegment812.DEF = "hanim_c2";
HAnimSegment812.name = "c2";
Transform Transform813 = createNode("Transform");
Transform813.translation = new SFVec3f(new float[0.0066,1.5928,-0.0103]);
Shape Shape814 = createNode("Shape");
Appearance Appearance815 = createNode("Appearance");
Material Material816 = createNode("Material");
Material816.USE = "REC_SPINAL_COLOR";
Appearance815.material = Material816;

Shape814.appearance = Appearance815;

IndexedFaceSet IndexedFaceSet817 = createNode("IndexedFaceSet");
IndexedFaceSet817.creaseAngle = 0.5;
IndexedFaceSet817.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
Coordinate Coordinate818 = createNode("Coordinate");
Coordinate818.USE = "points";
IndexedFaceSet817.coord = Coordinate818;

Shape814.geometry = IndexedFaceSet817;

Transform813.child = new undefined();

Transform813.child[0] = Shape814;

HAnimSegment812.children = new MFNode();

HAnimSegment812.children[0] = Transform813;

HAnimJoint811.children = new MFNode();

HAnimJoint811.children[0] = HAnimSegment812;

HAnimJoint HAnimJoint819 = createNode("HAnimJoint");
HAnimJoint819.DEF = "hanim_vc1";
HAnimJoint819.name = "vc1";
HAnimJoint819.center = new SFVec3f(new float[0.0066,1.6144,-0.0034]);
HAnimSegment HAnimSegment820 = createNode("HAnimSegment");
HAnimSegment820.DEF = "hanim_c1";
HAnimSegment820.name = "c1";
Transform Transform821 = createNode("Transform");
Transform821.translation = new SFVec3f(new float[0.0066,1.6144,-0.0034]);
Shape Shape822 = createNode("Shape");
Appearance Appearance823 = createNode("Appearance");
Material Material824 = createNode("Material");
Material824.USE = "SPINAL_COLOR";
Appearance823.material = Material824;

Shape822.appearance = Appearance823;

IndexedFaceSet IndexedFaceSet825 = createNode("IndexedFaceSet");
IndexedFaceSet825.creaseAngle = 0.5;
IndexedFaceSet825.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
Coordinate Coordinate826 = createNode("Coordinate");
Coordinate826.USE = "points";
IndexedFaceSet825.coord = Coordinate826;

Shape822.geometry = IndexedFaceSet825;

Transform821.child = new undefined();

Transform821.child[0] = Shape822;

HAnimSegment820.children = new MFNode();

HAnimSegment820.children[0] = Transform821;

HAnimJoint819.children = new MFNode();

HAnimJoint819.children[0] = HAnimSegment820;

HAnimJoint HAnimJoint827 = createNode("HAnimJoint");
HAnimJoint827.DEF = "hanim_skullbase";
HAnimJoint827.name = "skullbase";
HAnimJoint827.center = new SFVec3f(new float[0.0044,1.6209,0.0236]);
HAnimSegment HAnimSegment828 = createNode("HAnimSegment");
HAnimSegment828.DEF = "hanim_skull";
HAnimSegment828.name = "skull";
Transform Transform829 = createNode("Transform");
Transform829.translation = new SFVec3f(new float[0.0044,1.6209,0.0236]);
Shape Shape830 = createNode("Shape");
Appearance Appearance831 = createNode("Appearance");
Material Material832 = createNode("Material");
Material832.USE = "MIN_COLOR";
Appearance831.material = Material832;

Shape830.appearance = Appearance831;

IndexedFaceSet IndexedFaceSet833 = createNode("IndexedFaceSet");
IndexedFaceSet833.creaseAngle = 0.5;
IndexedFaceSet833.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
Coordinate Coordinate834 = createNode("Coordinate");
Coordinate834.USE = "points";
IndexedFaceSet833.coord = Coordinate834;

Shape830.geometry = IndexedFaceSet833;

Transform829.child = new undefined();

Transform829.child[0] = Shape830;

HAnimSegment828.children = new MFNode();

HAnimSegment828.children[0] = Transform829;

HAnimSite HAnimSite835 = createNode("HAnimSite");
HAnimSite835.DEF = "hanim_skull_vertex_tip";
HAnimSite835.name = "skull_vertex_tip";
HAnimSite835.translation = new SFVec3f(new float[0.005,1.7504,0.0055]);
Shape Shape836 = createNode("Shape");
Appearance Appearance837 = createNode("Appearance");
Material Material838 = createNode("Material");
Material838.USE = "SITE_COLOR";
Appearance837.material = Material838;

Shape836.appearance = Appearance837;

IndexedFaceSet IndexedFaceSet839 = createNode("IndexedFaceSet");
IndexedFaceSet839.creaseAngle = 0.5;
IndexedFaceSet839.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
Coordinate Coordinate840 = createNode("Coordinate");
Coordinate840.USE = "points";
IndexedFaceSet839.coord = Coordinate840;

Shape836.geometry = IndexedFaceSet839;

HAnimSite835.children = new MFNode();

HAnimSite835.children[0] = Shape836;

HAnimSegment828.children[1] = HAnimSite835;

HAnimSite HAnimSite841 = createNode("HAnimSite");
HAnimSite841.DEF = "hanim_sellion_pt";
HAnimSite841.name = "sellion_pt";
HAnimSite841.translation = new SFVec3f(new float[0.0058,1.6316,0.0852]);
Shape Shape842 = createNode("Shape");
Appearance Appearance843 = createNode("Appearance");
Material Material844 = createNode("Material");
Material844.USE = "SITE_COLOR";
Appearance843.material = Material844;

Shape842.appearance = Appearance843;

IndexedFaceSet IndexedFaceSet845 = createNode("IndexedFaceSet");
IndexedFaceSet845.creaseAngle = 0.5;
IndexedFaceSet845.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
Coordinate Coordinate846 = createNode("Coordinate");
Coordinate846.USE = "points";
IndexedFaceSet845.coord = Coordinate846;

Shape842.geometry = IndexedFaceSet845;

HAnimSite841.children = new MFNode();

HAnimSite841.children[0] = Shape842;

HAnimSegment828.children[2] = HAnimSite841;

HAnimSite HAnimSite847 = createNode("HAnimSite");
HAnimSite847.DEF = "hanim_r_infraorbitale_pt";
HAnimSite847.name = "r_infraorbitale_pt";
HAnimSite847.translation = new SFVec3f(new float[-0.0237,1.6171,0.0752]);
Shape Shape848 = createNode("Shape");
Appearance Appearance849 = createNode("Appearance");
Material Material850 = createNode("Material");
Material850.USE = "SITE_COLOR";
Appearance849.material = Material850;

Shape848.appearance = Appearance849;

IndexedFaceSet IndexedFaceSet851 = createNode("IndexedFaceSet");
IndexedFaceSet851.creaseAngle = 0.5;
IndexedFaceSet851.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
Coordinate Coordinate852 = createNode("Coordinate");
Coordinate852.USE = "points";
IndexedFaceSet851.coord = Coordinate852;

Shape848.geometry = IndexedFaceSet851;

HAnimSite847.children = new MFNode();

HAnimSite847.children[0] = Shape848;

HAnimSegment828.children[3] = HAnimSite847;

HAnimSite HAnimSite853 = createNode("HAnimSite");
HAnimSite853.DEF = "hanim_l_infraorbitale_pt";
HAnimSite853.name = "l_infraorbitale_pt";
HAnimSite853.translation = new SFVec3f(new float[0.0341,1.6171,0.0752]);
Shape Shape854 = createNode("Shape");
Appearance Appearance855 = createNode("Appearance");
Material Material856 = createNode("Material");
Material856.USE = "SITE_COLOR";
Appearance855.material = Material856;

Shape854.appearance = Appearance855;

IndexedFaceSet IndexedFaceSet857 = createNode("IndexedFaceSet");
IndexedFaceSet857.creaseAngle = 0.5;
IndexedFaceSet857.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
Coordinate Coordinate858 = createNode("Coordinate");
Coordinate858.USE = "points";
IndexedFaceSet857.coord = Coordinate858;

Shape854.geometry = IndexedFaceSet857;

HAnimSite853.children = new MFNode();

HAnimSite853.children[0] = Shape854;

HAnimSegment828.children[4] = HAnimSite853;

HAnimSite HAnimSite859 = createNode("HAnimSite");
HAnimSite859.DEF = "hanim_supramenton_pt";
HAnimSite859.name = "supramenton_pt";
HAnimSite859.translation = new SFVec3f(new float[0.0061,1.541,0.0805]);
Shape Shape860 = createNode("Shape");
Appearance Appearance861 = createNode("Appearance");
Material Material862 = createNode("Material");
Material862.USE = "SITE_COLOR";
Appearance861.material = Material862;

Shape860.appearance = Appearance861;

IndexedFaceSet IndexedFaceSet863 = createNode("IndexedFaceSet");
IndexedFaceSet863.creaseAngle = 0.5;
IndexedFaceSet863.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
Coordinate Coordinate864 = createNode("Coordinate");
Coordinate864.USE = "points";
IndexedFaceSet863.coord = Coordinate864;

Shape860.geometry = IndexedFaceSet863;

HAnimSite859.children = new MFNode();

HAnimSite859.children[0] = Shape860;

HAnimSegment828.children[5] = HAnimSite859;

HAnimSite HAnimSite865 = createNode("HAnimSite");
HAnimSite865.DEF = "hanim_r_tragion_pt";
HAnimSite865.name = "r_tragion_pt";
HAnimSite865.translation = new SFVec3f(new float[-0.0646,1.6347,0.0302]);
Shape Shape866 = createNode("Shape");
Appearance Appearance867 = createNode("Appearance");
Material Material868 = createNode("Material");
Material868.USE = "SITE_COLOR";
Appearance867.material = Material868;

Shape866.appearance = Appearance867;

IndexedFaceSet IndexedFaceSet869 = createNode("IndexedFaceSet");
IndexedFaceSet869.creaseAngle = 0.5;
IndexedFaceSet869.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
Coordinate Coordinate870 = createNode("Coordinate");
Coordinate870.USE = "points";
IndexedFaceSet869.coord = Coordinate870;

Shape866.geometry = IndexedFaceSet869;

HAnimSite865.children = new MFNode();

HAnimSite865.children[0] = Shape866;

HAnimSegment828.children[6] = HAnimSite865;

HAnimSite HAnimSite871 = createNode("HAnimSite");
HAnimSite871.DEF = "hanim_r_gonion_pt";
HAnimSite871.name = "r_gonion_pt";
HAnimSite871.translation = new SFVec3f(new float[-0.052,1.5529,0.0347]);
Shape Shape872 = createNode("Shape");
Appearance Appearance873 = createNode("Appearance");
Material Material874 = createNode("Material");
Material874.USE = "SITE_COLOR";
Appearance873.material = Material874;

Shape872.appearance = Appearance873;

IndexedFaceSet IndexedFaceSet875 = createNode("IndexedFaceSet");
IndexedFaceSet875.creaseAngle = 0.5;
IndexedFaceSet875.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
Coordinate Coordinate876 = createNode("Coordinate");
Coordinate876.USE = "points";
IndexedFaceSet875.coord = Coordinate876;

Shape872.geometry = IndexedFaceSet875;

HAnimSite871.children = new MFNode();

HAnimSite871.children[0] = Shape872;

HAnimSegment828.children[7] = HAnimSite871;

HAnimSite HAnimSite877 = createNode("HAnimSite");
HAnimSite877.DEF = "hanim_l_tragion_pt";
HAnimSite877.name = "l_tragion_pt";
HAnimSite877.translation = new SFVec3f(new float[0.0739,1.6348,0.0282]);
Shape Shape878 = createNode("Shape");
Appearance Appearance879 = createNode("Appearance");
Material Material880 = createNode("Material");
Material880.USE = "SITE_COLOR";
Appearance879.material = Material880;

Shape878.appearance = Appearance879;

IndexedFaceSet IndexedFaceSet881 = createNode("IndexedFaceSet");
IndexedFaceSet881.creaseAngle = 0.5;
IndexedFaceSet881.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
Coordinate Coordinate882 = createNode("Coordinate");
Coordinate882.USE = "points";
IndexedFaceSet881.coord = Coordinate882;

Shape878.geometry = IndexedFaceSet881;

HAnimSite877.children = new MFNode();

HAnimSite877.children[0] = Shape878;

HAnimSegment828.children[8] = HAnimSite877;

HAnimSite HAnimSite883 = createNode("HAnimSite");
HAnimSite883.DEF = "hanim_l_gonion_pt";
HAnimSite883.name = "l_gonion_pt";
HAnimSite883.translation = new SFVec3f(new float[0.0631,1.553,0.033]);
Shape Shape884 = createNode("Shape");
Appearance Appearance885 = createNode("Appearance");
Material Material886 = createNode("Material");
Material886.USE = "SITE_COLOR";
Appearance885.material = Material886;

Shape884.appearance = Appearance885;

IndexedFaceSet IndexedFaceSet887 = createNode("IndexedFaceSet");
IndexedFaceSet887.creaseAngle = 0.5;
IndexedFaceSet887.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
Coordinate Coordinate888 = createNode("Coordinate");
Coordinate888.USE = "points";
IndexedFaceSet887.coord = Coordinate888;

Shape884.geometry = IndexedFaceSet887;

HAnimSite883.children = new MFNode();

HAnimSite883.children[0] = Shape884;

HAnimSegment828.children[9] = HAnimSite883;

HAnimSite HAnimSite889 = createNode("HAnimSite");
HAnimSite889.DEF = "hanim_nuchale_pt";
HAnimSite889.name = "nuchale_pt";
HAnimSite889.translation = new SFVec3f(new float[0.0039,1.5972,-0.0796]);
Shape Shape890 = createNode("Shape");
Appearance Appearance891 = createNode("Appearance");
Material Material892 = createNode("Material");
Material892.USE = "SITE_COLOR";
Appearance891.material = Material892;

Shape890.appearance = Appearance891;

IndexedFaceSet IndexedFaceSet893 = createNode("IndexedFaceSet");
IndexedFaceSet893.creaseAngle = 0.5;
IndexedFaceSet893.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
Coordinate Coordinate894 = createNode("Coordinate");
Coordinate894.USE = "points";
IndexedFaceSet893.coord = Coordinate894;

Shape890.geometry = IndexedFaceSet893;

HAnimSite889.children = new MFNode();

HAnimSite889.children[0] = Shape890;

HAnimSegment828.children[10] = HAnimSite889;

HAnimJoint827.children = new MFNode();

HAnimJoint827.children[0] = HAnimSegment828;

HAnimJoint819.children[1] = HAnimJoint827;

HAnimJoint811.children[1] = HAnimJoint819;

HAnimJoint803.children[1] = HAnimJoint811;

HAnimJoint795.children[1] = HAnimJoint803;

HAnimJoint787.children[1] = HAnimJoint795;

HAnimJoint779.children[1] = HAnimJoint787;

HAnimJoint771.children[1] = HAnimJoint779;

HAnimJoint521.children[3] = HAnimJoint771;

HAnimJoint513.children[1] = HAnimJoint521;

HAnimJoint505.children[1] = HAnimJoint513;

HAnimJoint497.children[1] = HAnimJoint505;

HAnimJoint489.children[1] = HAnimJoint497;

HAnimJoint481.children[1] = HAnimJoint489;

HAnimJoint473.children[1] = HAnimJoint481;

HAnimJoint465.children[1] = HAnimJoint473;

HAnimJoint457.children[1] = HAnimJoint465;

HAnimJoint449.children[1] = HAnimJoint457;

HAnimJoint441.children[1] = HAnimJoint449;

HAnimJoint433.children[1] = HAnimJoint441;

HAnimJoint425.children[1] = HAnimJoint433;

HAnimJoint417.children[1] = HAnimJoint425;

HAnimJoint409.children[1] = HAnimJoint417;

HAnimJoint401.children[1] = HAnimJoint409;

HAnimJoint393.children[1] = HAnimJoint401;

HAnimJoint98.children[2] = HAnimJoint393;

HAnimHumanoid93.joints[1] = HAnimJoint98;

HAnimJoint HAnimJoint895 = createNode("HAnimJoint");
HAnimJoint895.USE = "hanim_humanoid_root";
HAnimHumanoid93.joints[2] = HAnimJoint895;

HAnimJoint HAnimJoint896 = createNode("HAnimJoint");
HAnimJoint896.USE = "hanim_sacroiliac";
HAnimHumanoid93.joints[3] = HAnimJoint896;

HAnimJoint HAnimJoint897 = createNode("HAnimJoint");
HAnimJoint897.USE = "hanim_vl1";
HAnimHumanoid93.joints[4] = HAnimJoint897;

HAnimJoint HAnimJoint898 = createNode("HAnimJoint");
HAnimJoint898.USE = "hanim_vc4";
HAnimHumanoid93.joints[5] = HAnimJoint898;

HAnimJoint HAnimJoint899 = createNode("HAnimJoint");
HAnimJoint899.USE = "hanim_skullbase";
HAnimHumanoid93.joints[6] = HAnimJoint899;

HAnimJoint HAnimJoint900 = createNode("HAnimJoint");
HAnimJoint900.USE = "hanim_vl5";
HAnimHumanoid93.joints[7] = HAnimJoint900;

HAnimJoint HAnimJoint901 = createNode("HAnimJoint");
HAnimJoint901.USE = "hanim_vl4";
HAnimHumanoid93.joints[8] = HAnimJoint901;

HAnimJoint HAnimJoint902 = createNode("HAnimJoint");
HAnimJoint902.USE = "hanim_vl3";
HAnimHumanoid93.joints[9] = HAnimJoint902;

HAnimJoint HAnimJoint903 = createNode("HAnimJoint");
HAnimJoint903.USE = "hanim_vl2";
HAnimHumanoid93.joints[10] = HAnimJoint903;

HAnimJoint HAnimJoint904 = createNode("HAnimJoint");
HAnimJoint904.USE = "hanim_vt12";
HAnimHumanoid93.joints[11] = HAnimJoint904;

HAnimJoint HAnimJoint905 = createNode("HAnimJoint");
HAnimJoint905.USE = "hanim_vt11";
HAnimHumanoid93.joints[12] = HAnimJoint905;

HAnimJoint HAnimJoint906 = createNode("HAnimJoint");
HAnimJoint906.USE = "hanim_vt10";
HAnimHumanoid93.joints[13] = HAnimJoint906;

HAnimJoint HAnimJoint907 = createNode("HAnimJoint");
HAnimJoint907.USE = "hanim_vt9";
HAnimHumanoid93.joints[14] = HAnimJoint907;

HAnimJoint HAnimJoint908 = createNode("HAnimJoint");
HAnimJoint908.USE = "hanim_vt8";
HAnimHumanoid93.joints[15] = HAnimJoint908;

HAnimJoint HAnimJoint909 = createNode("HAnimJoint");
HAnimJoint909.USE = "hanim_vt7";
HAnimHumanoid93.joints[16] = HAnimJoint909;

HAnimJoint HAnimJoint910 = createNode("HAnimJoint");
HAnimJoint910.USE = "hanim_vt6";
HAnimHumanoid93.joints[17] = HAnimJoint910;

HAnimJoint HAnimJoint911 = createNode("HAnimJoint");
HAnimJoint911.USE = "hanim_vt5";
HAnimHumanoid93.joints[18] = HAnimJoint911;

HAnimJoint HAnimJoint912 = createNode("HAnimJoint");
HAnimJoint912.USE = "hanim_vt4";
HAnimHumanoid93.joints[19] = HAnimJoint912;

HAnimJoint HAnimJoint913 = createNode("HAnimJoint");
HAnimJoint913.USE = "hanim_vt3";
HAnimHumanoid93.joints[20] = HAnimJoint913;

HAnimJoint HAnimJoint914 = createNode("HAnimJoint");
HAnimJoint914.USE = "hanim_vt2";
HAnimHumanoid93.joints[21] = HAnimJoint914;

HAnimJoint HAnimJoint915 = createNode("HAnimJoint");
HAnimJoint915.USE = "hanim_vt1";
HAnimHumanoid93.joints[22] = HAnimJoint915;

HAnimJoint HAnimJoint916 = createNode("HAnimJoint");
HAnimJoint916.USE = "hanim_vc7";
HAnimHumanoid93.joints[23] = HAnimJoint916;

HAnimJoint HAnimJoint917 = createNode("HAnimJoint");
HAnimJoint917.USE = "hanim_vc6";
HAnimHumanoid93.joints[24] = HAnimJoint917;

HAnimJoint HAnimJoint918 = createNode("HAnimJoint");
HAnimJoint918.USE = "hanim_vc5";
HAnimHumanoid93.joints[25] = HAnimJoint918;

HAnimJoint HAnimJoint919 = createNode("HAnimJoint");
HAnimJoint919.USE = "hanim_vc3";
HAnimHumanoid93.joints[26] = HAnimJoint919;

HAnimJoint HAnimJoint920 = createNode("HAnimJoint");
HAnimJoint920.USE = "hanim_vc2";
HAnimHumanoid93.joints[27] = HAnimJoint920;

HAnimJoint HAnimJoint921 = createNode("HAnimJoint");
HAnimJoint921.USE = "hanim_vc1";
HAnimHumanoid93.joints[28] = HAnimJoint921;

HAnimJoint HAnimJoint922 = createNode("HAnimJoint");
HAnimJoint922.USE = "hanim_l_carpal_distal_interphalangeal_2";
HAnimHumanoid93.joints[29] = HAnimJoint922;

HAnimJoint HAnimJoint923 = createNode("HAnimJoint");
HAnimJoint923.USE = "hanim_l_carpal_interphalangeal_1";
HAnimHumanoid93.joints[30] = HAnimJoint923;

HAnimJoint HAnimJoint924 = createNode("HAnimJoint");
HAnimJoint924.USE = "hanim_l_carpal_proximal_interphalangeal_2";
HAnimHumanoid93.joints[31] = HAnimJoint924;

HAnimJoint HAnimJoint925 = createNode("HAnimJoint");
HAnimJoint925.USE = "hanim_l_carpometacarpal_1";
HAnimHumanoid93.joints[32] = HAnimJoint925;

HAnimJoint HAnimJoint926 = createNode("HAnimJoint");
HAnimJoint926.USE = "hanim_l_carpometacarpal_2";
HAnimHumanoid93.joints[33] = HAnimJoint926;

HAnimJoint HAnimJoint927 = createNode("HAnimJoint");
HAnimJoint927.USE = "hanim_l_elbow";
HAnimHumanoid93.joints[34] = HAnimJoint927;

HAnimJoint HAnimJoint928 = createNode("HAnimJoint");
HAnimJoint928.USE = "hanim_r_elbow";
HAnimHumanoid93.joints[35] = HAnimJoint928;

HAnimJoint HAnimJoint929 = createNode("HAnimJoint");
HAnimJoint929.USE = "hanim_l_hip";
HAnimHumanoid93.joints[36] = HAnimJoint929;

HAnimJoint HAnimJoint930 = createNode("HAnimJoint");
HAnimJoint930.USE = "hanim_r_hip";
HAnimHumanoid93.joints[37] = HAnimJoint930;

HAnimJoint HAnimJoint931 = createNode("HAnimJoint");
HAnimJoint931.USE = "hanim_l_knee";
HAnimHumanoid93.joints[38] = HAnimJoint931;

HAnimJoint HAnimJoint932 = createNode("HAnimJoint");
HAnimJoint932.USE = "hanim_r_knee";
HAnimHumanoid93.joints[39] = HAnimJoint932;

HAnimJoint HAnimJoint933 = createNode("HAnimJoint");
HAnimJoint933.USE = "hanim_l_metacarpophalangeal_1";
HAnimHumanoid93.joints[40] = HAnimJoint933;

HAnimJoint HAnimJoint934 = createNode("HAnimJoint");
HAnimJoint934.USE = "hanim_l_metacarpophalangeal_2";
HAnimHumanoid93.joints[41] = HAnimJoint934;

HAnimJoint HAnimJoint935 = createNode("HAnimJoint");
HAnimJoint935.USE = "hanim_l_metatarsophalangeal_2";
HAnimHumanoid93.joints[42] = HAnimJoint935;

HAnimJoint HAnimJoint936 = createNode("HAnimJoint");
HAnimJoint936.USE = "hanim_r_metatarsophalangeal_2";
HAnimHumanoid93.joints[43] = HAnimJoint936;

HAnimJoint HAnimJoint937 = createNode("HAnimJoint");
HAnimJoint937.USE = "hanim_l_radiocarpal";
HAnimHumanoid93.joints[44] = HAnimJoint937;

HAnimJoint HAnimJoint938 = createNode("HAnimJoint");
HAnimJoint938.USE = "hanim_r_radiocarpal";
HAnimHumanoid93.joints[45] = HAnimJoint938;

HAnimJoint HAnimJoint939 = createNode("HAnimJoint");
HAnimJoint939.USE = "hanim_l_shoulder";
HAnimHumanoid93.joints[46] = HAnimJoint939;

HAnimJoint HAnimJoint940 = createNode("HAnimJoint");
HAnimJoint940.USE = "hanim_r_shoulder";
HAnimHumanoid93.joints[47] = HAnimJoint940;

HAnimJoint HAnimJoint941 = createNode("HAnimJoint");
HAnimJoint941.USE = "hanim_l_talocrural";
HAnimHumanoid93.joints[48] = HAnimJoint941;

HAnimJoint HAnimJoint942 = createNode("HAnimJoint");
HAnimJoint942.USE = "hanim_r_talocrural";
HAnimHumanoid93.joints[49] = HAnimJoint942;

HAnimJoint HAnimJoint943 = createNode("HAnimJoint");
HAnimJoint943.USE = "hanim_l_tarsal_distal_interphalangeal_2";
HAnimHumanoid93.joints[50] = HAnimJoint943;

HAnimJoint HAnimJoint944 = createNode("HAnimJoint");
HAnimJoint944.USE = "hanim_l_tarsometatarsal_2";
HAnimHumanoid93.joints[51] = HAnimJoint944;

HAnimSegment HAnimSegment945 = createNode("HAnimSegment");
HAnimSegment945.USE = "hanim_pelvis";
HAnimHumanoid93.segments[52] = HAnimSegment945;

HAnimSegment HAnimSegment946 = createNode("HAnimSegment");
HAnimSegment946.USE = "hanim_c7";
HAnimHumanoid93.segments[53] = HAnimSegment946;

HAnimSegment HAnimSegment947 = createNode("HAnimSegment");
HAnimSegment947.USE = "hanim_c4";
HAnimHumanoid93.segments[54] = HAnimSegment947;

HAnimSegment HAnimSegment948 = createNode("HAnimSegment");
HAnimSegment948.USE = "hanim_skull";
HAnimHumanoid93.segments[55] = HAnimSegment948;

HAnimSegment HAnimSegment949 = createNode("HAnimSegment");
HAnimSegment949.USE = "hanim_sacrum";
HAnimHumanoid93.segments[56] = HAnimSegment949;

HAnimSegment HAnimSegment950 = createNode("HAnimSegment");
HAnimSegment950.USE = "hanim_l5";
HAnimHumanoid93.segments[57] = HAnimSegment950;

HAnimSegment HAnimSegment951 = createNode("HAnimSegment");
HAnimSegment951.USE = "hanim_l4";
HAnimHumanoid93.segments[58] = HAnimSegment951;

HAnimSegment HAnimSegment952 = createNode("HAnimSegment");
HAnimSegment952.USE = "hanim_l3";
HAnimHumanoid93.segments[59] = HAnimSegment952;

HAnimSegment HAnimSegment953 = createNode("HAnimSegment");
HAnimSegment953.USE = "hanim_l2";
HAnimHumanoid93.segments[60] = HAnimSegment953;

HAnimSegment HAnimSegment954 = createNode("HAnimSegment");
HAnimSegment954.USE = "hanim_l1";
HAnimHumanoid93.segments[61] = HAnimSegment954;

HAnimSegment HAnimSegment955 = createNode("HAnimSegment");
HAnimSegment955.USE = "hanim_t12";
HAnimHumanoid93.segments[62] = HAnimSegment955;

HAnimSegment HAnimSegment956 = createNode("HAnimSegment");
HAnimSegment956.USE = "hanim_t11";
HAnimHumanoid93.segments[63] = HAnimSegment956;

HAnimSegment HAnimSegment957 = createNode("HAnimSegment");
HAnimSegment957.USE = "hanim_t10";
HAnimHumanoid93.segments[64] = HAnimSegment957;

HAnimSegment HAnimSegment958 = createNode("HAnimSegment");
HAnimSegment958.USE = "hanim_t9";
HAnimHumanoid93.segments[65] = HAnimSegment958;

HAnimSegment HAnimSegment959 = createNode("HAnimSegment");
HAnimSegment959.USE = "hanim_t8";
HAnimHumanoid93.segments[66] = HAnimSegment959;

HAnimSegment HAnimSegment960 = createNode("HAnimSegment");
HAnimSegment960.USE = "hanim_t7";
HAnimHumanoid93.segments[67] = HAnimSegment960;

HAnimSegment HAnimSegment961 = createNode("HAnimSegment");
HAnimSegment961.USE = "hanim_t6";
HAnimHumanoid93.segments[68] = HAnimSegment961;

HAnimSegment HAnimSegment962 = createNode("HAnimSegment");
HAnimSegment962.USE = "hanim_t5";
HAnimHumanoid93.segments[69] = HAnimSegment962;

HAnimSegment HAnimSegment963 = createNode("HAnimSegment");
HAnimSegment963.USE = "hanim_t4";
HAnimHumanoid93.segments[70] = HAnimSegment963;

HAnimSegment HAnimSegment964 = createNode("HAnimSegment");
HAnimSegment964.USE = "hanim_t3";
HAnimHumanoid93.segments[71] = HAnimSegment964;

HAnimSegment HAnimSegment965 = createNode("HAnimSegment");
HAnimSegment965.USE = "hanim_t2";
HAnimHumanoid93.segments[72] = HAnimSegment965;

HAnimSegment HAnimSegment966 = createNode("HAnimSegment");
HAnimSegment966.USE = "hanim_t1";
HAnimHumanoid93.segments[73] = HAnimSegment966;

HAnimSegment HAnimSegment967 = createNode("HAnimSegment");
HAnimSegment967.USE = "hanim_c6";
HAnimHumanoid93.segments[74] = HAnimSegment967;

HAnimSegment HAnimSegment968 = createNode("HAnimSegment");
HAnimSegment968.USE = "hanim_c5";
HAnimHumanoid93.segments[75] = HAnimSegment968;

HAnimSegment HAnimSegment969 = createNode("HAnimSegment");
HAnimSegment969.USE = "hanim_c3";
HAnimHumanoid93.segments[76] = HAnimSegment969;

HAnimSegment HAnimSegment970 = createNode("HAnimSegment");
HAnimSegment970.USE = "hanim_c2";
HAnimHumanoid93.segments[77] = HAnimSegment970;

HAnimSegment HAnimSegment971 = createNode("HAnimSegment");
HAnimSegment971.USE = "hanim_c1";
HAnimHumanoid93.segments[78] = HAnimSegment971;

HAnimSegment HAnimSegment972 = createNode("HAnimSegment");
HAnimSegment972.USE = "hanim_l_calf";
HAnimHumanoid93.segments[79] = HAnimSegment972;

HAnimSegment HAnimSegment973 = createNode("HAnimSegment");
HAnimSegment973.USE = "hanim_r_calf";
HAnimHumanoid93.segments[80] = HAnimSegment973;

HAnimSegment HAnimSegment974 = createNode("HAnimSegment");
HAnimSegment974.USE = "hanim_l_carpal";
HAnimHumanoid93.segments[81] = HAnimSegment974;

HAnimSegment HAnimSegment975 = createNode("HAnimSegment");
HAnimSegment975.USE = "hanim_r_carpal";
HAnimHumanoid93.segments[82] = HAnimSegment975;

HAnimSegment HAnimSegment976 = createNode("HAnimSegment");
HAnimSegment976.USE = "hanim_l_carpal_distal_phalanx_1";
HAnimHumanoid93.segments[83] = HAnimSegment976;

HAnimSegment HAnimSegment977 = createNode("HAnimSegment");
HAnimSegment977.USE = "hanim_l_carpal_distal_phalanx_2";
HAnimHumanoid93.segments[84] = HAnimSegment977;

HAnimSegment HAnimSegment978 = createNode("HAnimSegment");
HAnimSegment978.USE = "hanim_l_carpal_middle_phalanx_2";
HAnimHumanoid93.segments[85] = HAnimSegment978;

HAnimSegment HAnimSegment979 = createNode("HAnimSegment");
HAnimSegment979.USE = "hanim_l_carpal_proximal_phalanx_1";
HAnimHumanoid93.segments[86] = HAnimSegment979;

HAnimSegment HAnimSegment980 = createNode("HAnimSegment");
HAnimSegment980.USE = "hanim_l_carpal_proximal_phalanx_2";
HAnimHumanoid93.segments[87] = HAnimSegment980;

HAnimSegment HAnimSegment981 = createNode("HAnimSegment");
HAnimSegment981.USE = "hanim_l_forearm";
HAnimHumanoid93.segments[88] = HAnimSegment981;

HAnimSegment HAnimSegment982 = createNode("HAnimSegment");
HAnimSegment982.USE = "hanim_r_forearm";
HAnimHumanoid93.segments[89] = HAnimSegment982;

HAnimSegment HAnimSegment983 = createNode("HAnimSegment");
HAnimSegment983.USE = "hanim_l_metacarpal_1";
HAnimHumanoid93.segments[90] = HAnimSegment983;

HAnimSegment HAnimSegment984 = createNode("HAnimSegment");
HAnimSegment984.USE = "hanim_l_metacarpal_2";
HAnimHumanoid93.segments[91] = HAnimSegment984;

HAnimSegment HAnimSegment985 = createNode("HAnimSegment");
HAnimSegment985.USE = "hanim_l_metatarsal_2";
HAnimHumanoid93.segments[92] = HAnimSegment985;

HAnimSegment HAnimSegment986 = createNode("HAnimSegment");
HAnimSegment986.USE = "hanim_l_talus";
HAnimHumanoid93.segments[93] = HAnimSegment986;

HAnimSegment HAnimSegment987 = createNode("HAnimSegment");
HAnimSegment987.USE = "hanim_r_talus";
HAnimHumanoid93.segments[94] = HAnimSegment987;

HAnimSegment HAnimSegment988 = createNode("HAnimSegment");
HAnimSegment988.USE = "hanim_l_tarsal_distal_phalanx_2";
HAnimHumanoid93.segments[95] = HAnimSegment988;

HAnimSegment HAnimSegment989 = createNode("HAnimSegment");
HAnimSegment989.USE = "hanim_l_tarsal_proximal_phalanx_2";
HAnimHumanoid93.segments[96] = HAnimSegment989;

HAnimSegment HAnimSegment990 = createNode("HAnimSegment");
HAnimSegment990.USE = "hanim_r_tarsal_proximal_phalanx_2";
HAnimHumanoid93.segments[97] = HAnimSegment990;

HAnimSegment HAnimSegment991 = createNode("HAnimSegment");
HAnimSegment991.USE = "hanim_l_thigh";
HAnimHumanoid93.segments[98] = HAnimSegment991;

HAnimSegment HAnimSegment992 = createNode("HAnimSegment");
HAnimSegment992.USE = "hanim_r_thigh";
HAnimHumanoid93.segments[99] = HAnimSegment992;

HAnimSegment HAnimSegment993 = createNode("HAnimSegment");
HAnimSegment993.USE = "hanim_l_upperarm";
HAnimHumanoid93.segments[100] = HAnimSegment993;

HAnimSegment HAnimSegment994 = createNode("HAnimSegment");
HAnimSegment994.USE = "hanim_r_upperarm";
HAnimHumanoid93.segments[101] = HAnimSegment994;

HAnimSite HAnimSite995 = createNode("HAnimSite");
HAnimSite995.USE = "hanim_crotch_pt";
HAnimHumanoid93.viewpoints[102] = HAnimSite995;

HAnimSite HAnimSite996 = createNode("HAnimSite");
HAnimSite996.USE = "hanim_skull_vertex_tip";
HAnimHumanoid93.viewpoints[103] = HAnimSite996;

HAnimSite HAnimSite997 = createNode("HAnimSite");
HAnimSite997.USE = "hanim_sellion_pt";
HAnimHumanoid93.viewpoints[104] = HAnimSite997;

HAnimSite HAnimSite998 = createNode("HAnimSite");
HAnimSite998.USE = "hanim_supramenton_pt";
HAnimHumanoid93.viewpoints[105] = HAnimSite998;

HAnimSite HAnimSite999 = createNode("HAnimSite");
HAnimSite999.USE = "hanim_nuchale_pt";
HAnimHumanoid93.viewpoints[106] = HAnimSite999;

HAnimSite HAnimSite1000 = createNode("HAnimSite");
HAnimSite1000.USE = "hanim_r_asis_pt";
HAnimHumanoid93.viewpoints[107] = HAnimSite1000;

HAnimSite HAnimSite1001 = createNode("HAnimSite");
HAnimSite1001.USE = "hanim_l_asis_pt";
HAnimHumanoid93.viewpoints[108] = HAnimSite1001;

HAnimSite HAnimSite1002 = createNode("HAnimSite");
HAnimSite1002.USE = "hanim_l_calcaneus_posterior_pt";
HAnimHumanoid93.viewpoints[109] = HAnimSite1002;

HAnimSite HAnimSite1003 = createNode("HAnimSite");
HAnimSite1003.USE = "hanim_r_calcaneus_posterior_pt";
HAnimHumanoid93.viewpoints[110] = HAnimSite1003;

HAnimSite HAnimSite1004 = createNode("HAnimSite");
HAnimSite1004.USE = "hanim_l_carpal_distal_phalanx_1_tip";
HAnimHumanoid93.viewpoints[111] = HAnimSite1004;

HAnimSite HAnimSite1005 = createNode("HAnimSite");
HAnimSite1005.USE = "hanim_l_carpal_distal_phalanx_2_tip";
HAnimHumanoid93.viewpoints[112] = HAnimSite1005;

HAnimSite HAnimSite1006 = createNode("HAnimSite");
HAnimSite1006.USE = "hanim_l_dactylion_pt";
HAnimHumanoid93.viewpoints[113] = HAnimSite1006;

HAnimSite HAnimSite1007 = createNode("HAnimSite");
HAnimSite1007.USE = "hanim_r_dactylion_pt";
HAnimHumanoid93.viewpoints[114] = HAnimSite1007;

HAnimSite HAnimSite1008 = createNode("HAnimSite");
HAnimSite1008.USE = "hanim_l_femoral_lateral_epicondyle_pt";
HAnimHumanoid93.viewpoints[115] = HAnimSite1008;

HAnimSite HAnimSite1009 = createNode("HAnimSite");
HAnimSite1009.USE = "hanim_r_femoral_lateral_epicondyle_pt";
HAnimHumanoid93.viewpoints[116] = HAnimSite1009;

HAnimSite HAnimSite1010 = createNode("HAnimSite");
HAnimSite1010.USE = "hanim_l_femoral_medial_epicondyle_pt";
HAnimHumanoid93.viewpoints[117] = HAnimSite1010;

HAnimSite HAnimSite1011 = createNode("HAnimSite");
HAnimSite1011.USE = "hanim_r_femoral_medial_epicondyle_pt";
HAnimHumanoid93.viewpoints[118] = HAnimSite1011;

HAnimSite HAnimSite1012 = createNode("HAnimSite");
HAnimSite1012.USE = "hanim_l_forefoot_tip";
HAnimHumanoid93.viewpoints[119] = HAnimSite1012;

HAnimSite HAnimSite1013 = createNode("HAnimSite");
HAnimSite1013.USE = "hanim_r_gonion_pt";
HAnimHumanoid93.viewpoints[120] = HAnimSite1013;

HAnimSite HAnimSite1014 = createNode("HAnimSite");
HAnimSite1014.USE = "hanim_l_gonion_pt";
HAnimHumanoid93.viewpoints[121] = HAnimSite1014;

HAnimSite HAnimSite1015 = createNode("HAnimSite");
HAnimSite1015.USE = "hanim_l_hand_tip";
HAnimHumanoid93.viewpoints[122] = HAnimSite1015;

HAnimSite HAnimSite1016 = createNode("HAnimSite");
HAnimSite1016.USE = "hanim_r_hand_tip";
HAnimHumanoid93.viewpoints[123] = HAnimSite1016;

HAnimSite HAnimSite1017 = createNode("HAnimSite");
HAnimSite1017.USE = "hanim_l_humeral_lateral_epicondyle_pt";
HAnimHumanoid93.viewpoints[124] = HAnimSite1017;

HAnimSite HAnimSite1018 = createNode("HAnimSite");
HAnimSite1018.USE = "hanim_r_humeral_lateral_epicondyle_pt";
HAnimHumanoid93.viewpoints[125] = HAnimSite1018;

HAnimSite HAnimSite1019 = createNode("HAnimSite");
HAnimSite1019.USE = "hanim_l_humeral_medial_epicondyle_pt";
HAnimHumanoid93.viewpoints[126] = HAnimSite1019;

HAnimSite HAnimSite1020 = createNode("HAnimSite");
HAnimSite1020.USE = "hanim_r_humeral_medial_epicondyle_pt";
HAnimHumanoid93.viewpoints[127] = HAnimSite1020;

HAnimSite HAnimSite1021 = createNode("HAnimSite");
HAnimSite1021.USE = "hanim_r_iliocristale_pt";
HAnimHumanoid93.viewpoints[128] = HAnimSite1021;

HAnimSite HAnimSite1022 = createNode("HAnimSite");
HAnimSite1022.USE = "hanim_l_iliocristale_pt";
HAnimHumanoid93.viewpoints[129] = HAnimSite1022;

HAnimSite HAnimSite1023 = createNode("HAnimSite");
HAnimSite1023.USE = "hanim_r_infraorbitale_pt";
HAnimHumanoid93.viewpoints[130] = HAnimSite1023;

HAnimSite HAnimSite1024 = createNode("HAnimSite");
HAnimSite1024.USE = "hanim_l_infraorbitale_pt";
HAnimHumanoid93.viewpoints[131] = HAnimSite1024;

HAnimSite HAnimSite1025 = createNode("HAnimSite");
HAnimSite1025.USE = "hanim_l_knee_crease_pt";
HAnimHumanoid93.viewpoints[132] = HAnimSite1025;

HAnimSite HAnimSite1026 = createNode("HAnimSite");
HAnimSite1026.USE = "hanim_r_knee_crease_pt";
HAnimHumanoid93.viewpoints[133] = HAnimSite1026;

HAnimSite HAnimSite1027 = createNode("HAnimSite");
HAnimSite1027.USE = "hanim_l_lateral_malleolus_pt";
HAnimHumanoid93.viewpoints[134] = HAnimSite1027;

HAnimSite HAnimSite1028 = createNode("HAnimSite");
HAnimSite1028.USE = "hanim_r_lateral_malleolus_pt";
HAnimHumanoid93.viewpoints[135] = HAnimSite1028;

HAnimSite HAnimSite1029 = createNode("HAnimSite");
HAnimSite1029.USE = "hanim_l_medial_malleolus_pt";
HAnimHumanoid93.viewpoints[136] = HAnimSite1029;

HAnimSite HAnimSite1030 = createNode("HAnimSite");
HAnimSite1030.USE = "hanim_r_medial_malleolus_pt";
HAnimHumanoid93.viewpoints[137] = HAnimSite1030;

HAnimSite HAnimSite1031 = createNode("HAnimSite");
HAnimSite1031.USE = "hanim_l_metacarpal_phalanx_2_pt";
HAnimHumanoid93.viewpoints[138] = HAnimSite1031;

HAnimSite HAnimSite1032 = createNode("HAnimSite");
HAnimSite1032.USE = "hanim_r_metacarpal_phalanx_2_pt";
HAnimHumanoid93.viewpoints[139] = HAnimSite1032;

HAnimSite HAnimSite1033 = createNode("HAnimSite");
HAnimSite1033.USE = "hanim_l_metacarpal_phalanx_5_pt";
HAnimHumanoid93.viewpoints[140] = HAnimSite1033;

HAnimSite HAnimSite1034 = createNode("HAnimSite");
HAnimSite1034.USE = "hanim_r_metacarpal_phalanx_5_pt";
HAnimHumanoid93.viewpoints[141] = HAnimSite1034;

HAnimSite HAnimSite1035 = createNode("HAnimSite");
HAnimSite1035.USE = "hanim_l_metatarsal_phalanx_1_pt";
HAnimHumanoid93.viewpoints[142] = HAnimSite1035;

HAnimSite HAnimSite1036 = createNode("HAnimSite");
HAnimSite1036.USE = "hanim_r_metatarsal_phalanx_1_pt";
HAnimHumanoid93.viewpoints[143] = HAnimSite1036;

HAnimSite HAnimSite1037 = createNode("HAnimSite");
HAnimSite1037.USE = "hanim_l_metatarsal_phalanx_5_pt";
HAnimHumanoid93.viewpoints[144] = HAnimSite1037;

HAnimSite HAnimSite1038 = createNode("HAnimSite");
HAnimSite1038.USE = "hanim_r_metatarsal_phalanx_5_pt";
HAnimHumanoid93.viewpoints[145] = HAnimSite1038;

HAnimSite HAnimSite1039 = createNode("HAnimSite");
HAnimSite1039.USE = "hanim_l_middistal_tip";
HAnimHumanoid93.viewpoints[146] = HAnimSite1039;

HAnimSite HAnimSite1040 = createNode("HAnimSite");
HAnimSite1040.USE = "hanim_r_middistal_tip";
HAnimHumanoid93.viewpoints[147] = HAnimSite1040;

HAnimSite HAnimSite1041 = createNode("HAnimSite");
HAnimSite1041.USE = "hanim_l_olecranon_pt";
HAnimHumanoid93.viewpoints[148] = HAnimSite1041;

HAnimSite HAnimSite1042 = createNode("HAnimSite");
HAnimSite1042.USE = "hanim_r_olecranon_pt";
HAnimHumanoid93.viewpoints[149] = HAnimSite1042;

HAnimSite HAnimSite1043 = createNode("HAnimSite");
HAnimSite1043.USE = "hanim_r_psis_pt";
HAnimHumanoid93.viewpoints[150] = HAnimSite1043;

HAnimSite HAnimSite1044 = createNode("HAnimSite");
HAnimSite1044.USE = "hanim_l_psis_pt";
HAnimHumanoid93.viewpoints[151] = HAnimSite1044;

HAnimSite HAnimSite1045 = createNode("HAnimSite");
HAnimSite1045.USE = "hanim_l_radial_styloid_pt";
HAnimHumanoid93.viewpoints[152] = HAnimSite1045;

HAnimSite HAnimSite1046 = createNode("HAnimSite");
HAnimSite1046.USE = "hanim_r_radial_styloid_pt";
HAnimHumanoid93.viewpoints[153] = HAnimSite1046;

HAnimSite HAnimSite1047 = createNode("HAnimSite");
HAnimSite1047.USE = "hanim_l_radiale_pt";
HAnimHumanoid93.viewpoints[154] = HAnimSite1047;

HAnimSite HAnimSite1048 = createNode("HAnimSite");
HAnimSite1048.USE = "hanim_r_radiale_pt";
HAnimHumanoid93.viewpoints[155] = HAnimSite1048;

HAnimSite HAnimSite1049 = createNode("HAnimSite");
HAnimSite1049.USE = "hanim_l_sphyrion_pt";
HAnimHumanoid93.viewpoints[156] = HAnimSite1049;

HAnimSite HAnimSite1050 = createNode("HAnimSite");
HAnimSite1050.USE = "hanim_r_sphyrion_pt";
HAnimHumanoid93.viewpoints[157] = HAnimSite1050;

HAnimSite HAnimSite1051 = createNode("HAnimSite");
HAnimSite1051.USE = "hanim_l_tarsal_distal_phalanx_2_pt";
HAnimHumanoid93.viewpoints[158] = HAnimSite1051;

HAnimSite HAnimSite1052 = createNode("HAnimSite");
HAnimSite1052.USE = "hanim_r_tarsal_distal_phalanx_2_pt";
HAnimHumanoid93.viewpoints[159] = HAnimSite1052;

HAnimSite HAnimSite1053 = createNode("HAnimSite");
HAnimSite1053.USE = "hanim_r_tragion_pt";
HAnimHumanoid93.viewpoints[160] = HAnimSite1053;

HAnimSite HAnimSite1054 = createNode("HAnimSite");
HAnimSite1054.USE = "hanim_l_tragion_pt";
HAnimHumanoid93.viewpoints[161] = HAnimSite1054;

HAnimSite HAnimSite1055 = createNode("HAnimSite");
HAnimSite1055.USE = "hanim_r_trochanterion_pt";
HAnimHumanoid93.viewpoints[162] = HAnimSite1055;

HAnimSite HAnimSite1056 = createNode("HAnimSite");
HAnimSite1056.USE = "hanim_l_trochanterion_pt";
HAnimHumanoid93.viewpoints[163] = HAnimSite1056;

HAnimSite HAnimSite1057 = createNode("HAnimSite");
HAnimSite1057.USE = "hanim_l_ulnar_styloid_pt";
HAnimHumanoid93.viewpoints[164] = HAnimSite1057;

HAnimSite HAnimSite1058 = createNode("HAnimSite");
HAnimSite1058.USE = "hanim_r_ulnar_styloid_pt";
HAnimHumanoid93.viewpoints[165] = HAnimSite1058;

HAnimSite HAnimSite1059 = createNode("HAnimSite");
HAnimSite1059.DEF = "hanim_DiamondManLOA2_view";
HAnimSite1059.name = "DiamondManLOA2_view";
Viewpoint Viewpoint1060 = createNode("Viewpoint");
Viewpoint1060.DEF = "FrontView";
Viewpoint1060.description = "Front View";
Viewpoint1060.position = new SFVec3f(new float[0.35,0.854,2.57665]);
HAnimSite1059.children = new MFNode();

HAnimSite1059.children[0] = Viewpoint1060;

Viewpoint Viewpoint1061 = createNode("Viewpoint");
Viewpoint1061.DEF = "SideView";
Viewpoint1061.description = "Side View";
Viewpoint1061.position = new SFVec3f(new float[2,0.854,0]);
Viewpoint1061.orientation = new SFRotation(new float[0,1,0,1.57079]);
HAnimSite1059.children[1] = Viewpoint1061;

Viewpoint Viewpoint1062 = createNode("Viewpoint");
Viewpoint1062.DEF = "TopView";
Viewpoint1062.description = "Top View";
Viewpoint1062.position = new SFVec3f(new float[0,3.4495,0]);
Viewpoint1062.orientation = new SFRotation(new float[1,0,0,-1.57079]);
HAnimSite1059.children[2] = Viewpoint1062;

Viewpoint Viewpoint1063 = createNode("Viewpoint");
Viewpoint1063.DEF = "RootView";
Viewpoint1063.description = "Humanoid Root View";
Viewpoint1063.position = new SFVec3f(new float[0,0.824,0.277]);
HAnimSite1059.children[3] = Viewpoint1063;

Viewpoint Viewpoint1064 = createNode("Viewpoint");
Viewpoint1064.DEF = "InclinedView";
Viewpoint1064.description = "Inclined View";
Viewpoint1064.position = new SFVec3f(new float[1.62,1.05,2.06]);
Viewpoint1064.orientation = new SFRotation(new float[-0.113,0.993,0.0347,0.671]);
HAnimSite1059.children[4] = Viewpoint1064;

HAnimHumanoid93.viewpoints[166] = HAnimSite1059;

children[4] = HAnimHumanoid93;

}
