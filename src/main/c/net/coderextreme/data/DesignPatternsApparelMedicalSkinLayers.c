#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Immersive";
X3D0.version = "4.0";
head head1 = createNode("head");
meta meta2 = createNode("meta");
meta2.name = "title";
meta2.content = "DesignPatternsApparelMedicalSkinLayers.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

meta meta3 = createNode("meta");
meta3.name = "description";
meta3.content = "Design patterns for skin and apparel using HAnim2 standard in X3D4";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "creator";
meta4.content = "Don Brutzman";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "creator";
meta5.content = "Joe D. Williams";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "creator";
meta6.content = "Dick Puk";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "created";
meta7.content = "23 December 2022";
head1.meta[5] = meta7;

meta meta8 = createNode("meta");
meta8.name = "modified";
meta8.content = "26 December 2022";
head1.meta[6] = meta8;

meta meta9 = createNode("meta");
meta9.name = "reference";
meta9.content = "DesignPatternsApparelVariations.txt";
head1.meta[7] = meta9;

meta meta10 = createNode("meta");
meta10.name = "reference";
meta10.content = "HAnim2 Part 1, HAnim architecture, 4.3 Humanoid object https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#HumanoidObject";
head1.meta[8] = meta10;

meta meta11 = createNode("meta");
meta11.name = "reference";
meta11.content = "HAnim2 Part 1, HAnim architecture, E.4 Multiple humanoids per file https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/Guidelines.html#MultipleHumanoidsPerFile";
head1.meta[9] = meta11;

meta meta12 = createNode("meta");
meta12.name = "reference";
meta12.content = "X3D4 Architecture, clause 26 HAnim component, 26.3.2 HAnimHumanoid https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19775-1v4-DIS/Part01/components/hanim.html#HAnimHumanoid";
head1.meta[10] = meta12;

meta meta13 = createNode("meta");
meta13.name = "warning";
meta13.content = "Under development. This template example does not produce renderable HAnim models.";
head1.meta[11] = meta13;

meta meta14 = createNode("meta");
meta14.name = "identifier";
meta14.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/DesignPatternsApparelMedicalSkinLayers.x3d";
head1.meta[12] = meta14;

meta meta15 = createNode("meta");
meta15.name = "generator";
meta15.content = "X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit";
head1.meta[13] = meta15;

meta meta16 = createNode("meta");
meta16.name = "license";
meta16.content = "../license.html";
head1.meta[14] = meta16;

head = head1;

WorldInfo WorldInfo18 = createNode("WorldInfo");
WorldInfo18.title = "HAnimHumanoid skin design patterns for apparel, medical";
children = new MFNode();

children[0] = WorldInfo18;

Background Background19 = createNode("Background");
Background19.skyColor = new MFColor(new float[0,0.6,0.6]);
children[1] = Background19;

Group Group20 = createNode("Group");
Group20.DEF = "MultipleHumanoids";
MetadataString MetadataString21 = createNode("MetadataString");
MetadataString21.name = "HAnimArchitecture";
MetadataString21.reference = "https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/Guidelines.html#MultipleHumanoidsPerFile";
MetadataString21.value = new MFString(new java.lang.String["E.4 Multiple humanoids per file"]);
Group20.metadata = MetadataString21;

//==============================
HAnimHumanoid HAnimHumanoid22 = createNode("HAnimHumanoid");
HAnimHumanoid22.name = "SimpleSkeleton";
HAnimHumanoid22.DEF = "a_SimpleSkeleton";
HAnimHumanoid22.version = "2.0";
HAnimJoint HAnimJoint23 = createNode("HAnimJoint");
HAnimJoint23.name = "humanoid_root";
HAnimJoint23.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint23.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment24 = createNode("HAnimSegment");
HAnimSegment24.name = "sacrum";
Shape Shape25 = createNode("Shape");
Shape25.DEF = "JointVisualization";
HAnimSegment24.children = new MFNode();

HAnimSegment24.children[0] = Shape25;

Shape Shape26 = createNode("Shape");
Shape26.DEF = "SegmentVisualization";
HAnimSegment24.children[1] = Shape26;

HAnimSite HAnimSite27 = createNode("HAnimSite");
HAnimSite27.name = "feature01_tip";
HAnimSite27.DEF = "a_feature01_tip";
Shape Shape28 = createNode("Shape");
Shape28.DEF = "SiteVisualization";
HAnimSite27.children = new MFNode();

HAnimSite27.children[0] = Shape28;

HAnimSegment24.children[2] = HAnimSite27;

HAnimJoint23.children = new MFNode();

HAnimJoint23.children[0] = HAnimSegment24;

HAnimHumanoid22.joints = new MFNode();

HAnimHumanoid22.joints[0] = HAnimJoint23;

Group20.children = new MFNode();

Group20.children[0] = HAnimHumanoid22;

//==============================
HAnimHumanoid HAnimHumanoid29 = createNode("HAnimHumanoid");
HAnimHumanoid29.name = "SimpleSkeletonMesh";
HAnimHumanoid29.DEF = "b_SimpleSkeletonMesh";
HAnimHumanoid29.version = "2.0";
HAnimJoint HAnimJoint30 = createNode("HAnimJoint");
HAnimJoint30.name = "humanoid_root";
HAnimJoint30.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint30.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment31 = createNode("HAnimSegment");
HAnimSegment31.name = "sacrum";
Shape Shape32 = createNode("Shape");
IndexedFaceSet IndexedFaceSet33 = createNode("IndexedFaceSet");
IndexedFaceSet33.DEF = "SegmentBoneMesh";
Shape32.geometry = IndexedFaceSet33;

HAnimSegment31.children = new MFNode();

HAnimSegment31.children[0] = Shape32;

HAnimJoint30.children = new MFNode();

HAnimJoint30.children[0] = HAnimSegment31;

HAnimHumanoid29.joints = new MFNode();

HAnimHumanoid29.joints[0] = HAnimJoint30;

Group20.children[1] = HAnimHumanoid29;

//==============================
HAnimHumanoid HAnimHumanoid34 = createNode("HAnimHumanoid");
HAnimHumanoid34.name = "SkinIndexedGeometry";
HAnimHumanoid34.DEF = "c_SkinIndexedGeometry";
HAnimHumanoid34.version = "2.0";
HAnimJoint HAnimJoint35 = createNode("HAnimJoint");
HAnimJoint35.name = "humanoid_root";
HAnimJoint35.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint35.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment36 = createNode("HAnimSegment");
HAnimSegment36.name = "sacrum";
HAnimJoint35.children = new MFNode();

HAnimJoint35.children[0] = HAnimSegment36;

HAnimHumanoid34.joints = new MFNode();

HAnimHumanoid34.joints[0] = HAnimJoint35;

IndexedFaceSet IndexedFaceSet37 = createNode("IndexedFaceSet");
IndexedFaceSet37.DEF = "SkinMeshIFS";
HAnimHumanoid34.skin[1] = IndexedFaceSet37;

Group20.children[2] = HAnimHumanoid34;

//==============================
HAnimHumanoid HAnimHumanoid38 = createNode("HAnimHumanoid");
HAnimHumanoid38.name = "SkinShapeIndexedGeometry";
HAnimHumanoid38.DEF = "d_SkinShapeIndexedGeometry";
HAnimHumanoid38.version = "2.0";
HAnimJoint HAnimJoint39 = createNode("HAnimJoint");
HAnimJoint39.name = "humanoid_root";
HAnimJoint39.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint39.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment40 = createNode("HAnimSegment");
HAnimSegment40.name = "sacrum";
HAnimJoint39.children = new MFNode();

HAnimJoint39.children[0] = HAnimSegment40;

HAnimHumanoid38.joints = new MFNode();

HAnimHumanoid38.joints[0] = HAnimJoint39;

Shape Shape41 = createNode("Shape");
IndexedFaceSet IndexedFaceSet42 = createNode("IndexedFaceSet");
IndexedFaceSet42.USE = "SkinMeshIFS";
Shape41.geometry = IndexedFaceSet42;

HAnimHumanoid38.skin[1] = Shape41;

Group20.children[3] = HAnimHumanoid38;

//==============================
HAnimHumanoid HAnimHumanoid43 = createNode("HAnimHumanoid");
HAnimHumanoid43.name = "SkinSwitchShapeIndexedGeometry";
HAnimHumanoid43.DEF = "e_SkinSwitchShapeIndexedGeometry";
HAnimHumanoid43.version = "2.0";
HAnimJoint HAnimJoint44 = createNode("HAnimJoint");
HAnimJoint44.name = "humanoid_root";
HAnimJoint44.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint44.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment45 = createNode("HAnimSegment");
HAnimSegment45.name = "sacrum";
HAnimJoint44.children = new MFNode();

HAnimJoint44.children[0] = HAnimSegment45;

HAnimHumanoid43.joints = new MFNode();

HAnimHumanoid43.joints[0] = HAnimJoint44;

//TODO proposed for X3D4 <Switch DEF='AlternativeSkins' containerField='skin'>
Shape Shape46 = createNode("Shape");
IndexedFaceSet IndexedFaceSet47 = createNode("IndexedFaceSet");
IndexedFaceSet47.DEF = "IndexedSkinMeshIFS";
Coordinate Coordinate48 = createNode("Coordinate");
Coordinate48.DEF = "SkinMeshCoordinate";
IndexedFaceSet47.coord = Coordinate48;

Shape46.geometry = IndexedFaceSet47;

HAnimHumanoid43.skin[1] = Shape46;

//TODO proposed for X3D4 </Switch>
Group20.children[4] = HAnimHumanoid43;

//similarly for LOD
//==============================
HAnimHumanoid HAnimHumanoid49 = createNode("HAnimHumanoid");
HAnimHumanoid49.name = "SynthesizedSkinShapeIndexedTwoPartGeometry";
HAnimHumanoid49.DEF = "f_SynthesizedSkinShapeIndexedTwoPartGeometry";
HAnimHumanoid49.version = "2.0";
HAnimJoint HAnimJoint50 = createNode("HAnimJoint");
HAnimJoint50.name = "humanoid_root";
HAnimJoint50.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint50.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment51 = createNode("HAnimSegment");
HAnimSegment51.name = "sacrum";
HAnimJoint50.children = new MFNode();

HAnimJoint50.children[0] = HAnimSegment51;

HAnimHumanoid49.joints = new MFNode();

HAnimHumanoid49.joints[0] = HAnimJoint50;

Shape Shape52 = createNode("Shape");
IndexedFaceSet IndexedFaceSet53 = createNode("IndexedFaceSet");
IndexedFaceSet53.DEF = "TwoPartIndexedSkinMesh";
Coordinate Coordinate54 = createNode("Coordinate");
Coordinate54.DEF = "TwoPartSkinMesh";
IndexedFaceSet53.coord = Coordinate54;

Shape52.geometry = IndexedFaceSet53;

HAnimHumanoid49.skin[1] = Shape52;

Group20.children[5] = HAnimHumanoid49;

//==============================
HAnimHumanoid HAnimHumanoid55 = createNode("HAnimHumanoid");
HAnimHumanoid55.name = "ApparelSkinIndexedGeometryMultipleShapes";
HAnimHumanoid55.DEF = "g_ApparelSkinIndexedGeometryMultipleShapes";
HAnimHumanoid55.version = "2.0";
HAnimJoint HAnimJoint56 = createNode("HAnimJoint");
HAnimJoint56.name = "humanoid_root";
HAnimJoint56.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint56.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment57 = createNode("HAnimSegment");
HAnimSegment57.name = "sacrum";
HAnimJoint56.children = new MFNode();

HAnimJoint56.children[0] = HAnimSegment57;

HAnimHumanoid55.joints = new MFNode();

HAnimHumanoid55.joints[0] = HAnimJoint56;

Shape Shape58 = createNode("Shape");
HAnimHumanoid55.skin[1] = Shape58;

//allow multiple Shape nodes with containerField='apparel', one for each layer of clothing
//TODO proposed for X3D4.1 <Shape containerField='apparel'/>
Group20.children[6] = HAnimHumanoid55;

//==============================
HAnimHumanoid HAnimHumanoid59 = createNode("HAnimHumanoid");
HAnimHumanoid59.name = "AnatomySkinIndexedGeometryMultipleShapes";
HAnimHumanoid59.DEF = "h_AnatomySkinIndexedGeometryMultipleShapes";
HAnimHumanoid59.version = "2.0";
HAnimJoint HAnimJoint60 = createNode("HAnimJoint");
HAnimJoint60.name = "humanoid_root";
HAnimJoint60.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint60.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment61 = createNode("HAnimSegment");
HAnimSegment61.name = "sacrum";
HAnimJoint60.children = new MFNode();

HAnimJoint60.children[0] = HAnimSegment61;

HAnimHumanoid59.joints = new MFNode();

HAnimHumanoid59.joints[0] = HAnimJoint60;

//allow multiple Shape nodes with containerField='skin', one for each layer of skin
//TODO proposed for X3D4.1 <Shape containerField='skin'/>
//TODO proposed for X3D4.1 <Shape containerField='skin'/>
Shape Shape62 = createNode("Shape");
HAnimHumanoid59.skin[1] = Shape62;

Group20.children[7] = HAnimHumanoid59;

//==============================
children[2] = Group20;

Viewpoint Viewpoint63 = createNode("Viewpoint");
Viewpoint63.DEF = "ViewHelpText";
Viewpoint63.description = "Select text to see website";
Viewpoint63.position = new SFVec3f(new float[0,0,12]);
children[3] = Viewpoint63;

//Selectable Text design pattern has transparent Box and TouchSensor description as a tooltip
Anchor Anchor64 = createNode("Anchor");
Anchor64.description = "DesignPatternsApparelMedicalSkinLayers.x3d explores potential apparel approaches";
Anchor64.parameter = new MFString(new java.lang.String["target=blank"]);
Anchor64.url = new MFString(new java.lang.String["https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/DesignPatternsApparelMedicalSkinLayersIndex.html"]);
Shape Shape65 = createNode("Shape");
//TODO adjust Text string and Box size, then set Material transparency='1'
Text Text66 = createNode("Text");
Text66.string = new MFString(new java.lang.String["DesignPatternsApparelMedicalSkinLayers.x3d","","explores potential apparel approaches"]);
FontStyle FontStyle67 = createNode("FontStyle");
FontStyle67.family = new MFString(new java.lang.String["SANS"]);
FontStyle67.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
FontStyle67.size = 0.6;
FontStyle67.style = "BOLD";
Text66.fontStyle = FontStyle67;

Shape65.geometry = Text66;

Appearance Appearance68 = createNode("Appearance");
Material Material69 = createNode("Material");
Material69.diffuseColor = new SFColor(new float[0.9,0.9,0.9]);
Appearance68.material = Material69;

Shape65.appearance = Appearance68;

Anchor64.children = new MFNode();

Anchor64.children[0] = Shape65;

Shape Shape70 = createNode("Shape");
//Author TODO: to adjust transparent Box as text-selection assist, set width and height to match size, then set transparency='1' to make invisible.
Box Box71 = createNode("Box");
Box71.size = new SFVec3f(new float[11,2,0.001]);
Shape70.geometry = Box71;

Appearance Appearance72 = createNode("Appearance");
Material Material73 = createNode("Material");
Material73.transparency = 1;
Appearance72.material = Material73;

Shape70.appearance = Appearance72;

Anchor64.children[1] = Shape70;

children[4] = Anchor64;

}
