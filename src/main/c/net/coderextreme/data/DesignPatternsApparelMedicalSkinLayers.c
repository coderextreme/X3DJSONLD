#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Immersive";
X3D0.version = "4.0";
head head1 = createNode("head");
component component2 = createNode("component");
component2.name = "HAnim";
component2.level = 2;
head1.component = new MFNode();

head1.component[0] = component2;

meta meta3 = createNode("meta");
meta3.name = "title";
meta3.content = "DesignPatternsApparelMedicalSkinLayers.x3d";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "description";
meta4.content = "Design patterns for skin and apparel using HAnim2 standard in X3D4";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "creator";
meta5.content = "Don Brutzman";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "creator";
meta6.content = "Joe D. Williams";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "creator";
meta7.content = "Dick Puk";
head1.meta[5] = meta7;

meta meta8 = createNode("meta");
meta8.name = "created";
meta8.content = "23 December 2022";
head1.meta[6] = meta8;

meta meta9 = createNode("meta");
meta9.name = "modified";
meta9.content = "2 July 2023";
head1.meta[7] = meta9;

meta meta10 = createNode("meta");
meta10.name = "reference";
meta10.content = "DesignPatternsApparelVariations.txt";
head1.meta[8] = meta10;

meta meta11 = createNode("meta");
meta11.name = "reference";
meta11.content = "HAnim2 Part 1, HAnim architecture, 4.3 Humanoid object https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#HumanoidObject";
head1.meta[9] = meta11;

meta meta12 = createNode("meta");
meta12.name = "reference";
meta12.content = "HAnim2 Part 1, HAnim architecture, E.4 Multiple humanoids per file https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/Guidelines.html#MultipleHumanoidsPerFile";
head1.meta[10] = meta12;

meta meta13 = createNode("meta");
meta13.name = "reference";
meta13.content = "X3D4 Architecture, clause 26 HAnim component, 26.3.2 HAnimHumanoid https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19775-1v4-DIS/Part01/components/hanim.html#HAnimHumanoid";
head1.meta[11] = meta13;

meta meta14 = createNode("meta");
meta14.name = "warning";
meta14.content = "Under development. This template example does not produce renderable HAnim models.";
head1.meta[12] = meta14;

meta meta15 = createNode("meta");
meta15.name = "identifier";
meta15.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/DesignPatternsApparelMedicalSkinLayers.x3d";
head1.meta[13] = meta15;

meta meta16 = createNode("meta");
meta16.name = "generator";
meta16.content = "X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit";
head1.meta[14] = meta16;

meta meta17 = createNode("meta");
meta17.name = "license";
meta17.content = "../license.html";
head1.meta[15] = meta17;

head = head1;

WorldInfo WorldInfo19 = createNode("WorldInfo");
WorldInfo19.title = "HAnimHumanoid skin design patterns for apparel, medical";
children = new MFNode();

children[0] = WorldInfo19;

Background Background20 = createNode("Background");
Background20.skyColor = new MFColor(new float[0,0.6,0.6]);
children[1] = Background20;

Group Group21 = createNode("Group");
Group21.DEF = "MultipleHumanoids";
MetadataString MetadataString22 = createNode("MetadataString");
MetadataString22.name = "HAnimArchitecture";
MetadataString22.reference = "https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/Guidelines.html#MultipleHumanoidsPerFile";
MetadataString22.value = new MFString(new java.lang.String["E.4 Multiple humanoids per file"]);
Group21.metadata = MetadataString22;

//==============================
HAnimHumanoid HAnimHumanoid23 = createNode("HAnimHumanoid");
HAnimHumanoid23.name = "SimpleSkeleton";
HAnimHumanoid23.DEF = "a_SimpleSkeleton";
HAnimHumanoid23.version = "2.0";
HAnimJoint HAnimJoint24 = createNode("HAnimJoint");
HAnimJoint24.name = "humanoid_root";
HAnimJoint24.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint24.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment25 = createNode("HAnimSegment");
HAnimSegment25.name = "sacrum";
Shape Shape26 = createNode("Shape");
Shape26.DEF = "JointVisualization";
HAnimSegment25.children = new MFNode();

HAnimSegment25.children[0] = Shape26;

Shape Shape27 = createNode("Shape");
Shape27.DEF = "SegmentVisualization";
HAnimSegment25.children[1] = Shape27;

HAnimSite HAnimSite28 = createNode("HAnimSite");
HAnimSite28.name = "feature01_tip";
HAnimSite28.DEF = "a_feature01_tip";
Shape Shape29 = createNode("Shape");
Shape29.DEF = "SiteVisualization";
HAnimSite28.children = new MFNode();

HAnimSite28.children[0] = Shape29;

HAnimSegment25.children[2] = HAnimSite28;

HAnimJoint24.children = new MFNode();

HAnimJoint24.children[0] = HAnimSegment25;

HAnimHumanoid23.joints = new MFNode();

HAnimHumanoid23.joints[0] = HAnimJoint24;

Group21.children = new MFNode();

Group21.children[0] = HAnimHumanoid23;

//==============================
HAnimHumanoid HAnimHumanoid30 = createNode("HAnimHumanoid");
HAnimHumanoid30.name = "SimpleSkeletonMesh";
HAnimHumanoid30.DEF = "b_SimpleSkeletonMesh";
HAnimHumanoid30.version = "2.0";
HAnimJoint HAnimJoint31 = createNode("HAnimJoint");
HAnimJoint31.name = "humanoid_root";
HAnimJoint31.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint31.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment32 = createNode("HAnimSegment");
HAnimSegment32.name = "sacrum";
Shape Shape33 = createNode("Shape");
IndexedFaceSet IndexedFaceSet34 = createNode("IndexedFaceSet");
IndexedFaceSet34.DEF = "SegmentBoneMesh";
Shape33.geometry = IndexedFaceSet34;

HAnimSegment32.children = new MFNode();

HAnimSegment32.children[0] = Shape33;

HAnimJoint31.children = new MFNode();

HAnimJoint31.children[0] = HAnimSegment32;

HAnimHumanoid30.joints = new MFNode();

HAnimHumanoid30.joints[0] = HAnimJoint31;

Group21.children[1] = HAnimHumanoid30;

//==============================
HAnimHumanoid HAnimHumanoid35 = createNode("HAnimHumanoid");
HAnimHumanoid35.name = "SkinIndexedGeometry";
HAnimHumanoid35.DEF = "c_SkinIndexedGeometry";
HAnimHumanoid35.version = "2.0";
HAnimJoint HAnimJoint36 = createNode("HAnimJoint");
HAnimJoint36.name = "humanoid_root";
HAnimJoint36.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint36.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment37 = createNode("HAnimSegment");
HAnimSegment37.name = "sacrum";
HAnimJoint36.children = new MFNode();

HAnimJoint36.children[0] = HAnimSegment37;

HAnimHumanoid35.joints = new MFNode();

HAnimHumanoid35.joints[0] = HAnimJoint36;

IndexedFaceSet IndexedFaceSet38 = createNode("IndexedFaceSet");
IndexedFaceSet38.DEF = "SkinMeshIFS";
HAnimHumanoid35.skin[1] = IndexedFaceSet38;

Group21.children[2] = HAnimHumanoid35;

//==============================
HAnimHumanoid HAnimHumanoid39 = createNode("HAnimHumanoid");
HAnimHumanoid39.name = "SkinShapeIndexedGeometry";
HAnimHumanoid39.DEF = "d_SkinShapeIndexedGeometry";
HAnimHumanoid39.version = "2.0";
HAnimJoint HAnimJoint40 = createNode("HAnimJoint");
HAnimJoint40.name = "humanoid_root";
HAnimJoint40.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint40.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment41 = createNode("HAnimSegment");
HAnimSegment41.name = "sacrum";
HAnimJoint40.children = new MFNode();

HAnimJoint40.children[0] = HAnimSegment41;

HAnimHumanoid39.joints = new MFNode();

HAnimHumanoid39.joints[0] = HAnimJoint40;

Shape Shape42 = createNode("Shape");
IndexedFaceSet IndexedFaceSet43 = createNode("IndexedFaceSet");
IndexedFaceSet43.USE = "SkinMeshIFS";
Shape42.geometry = IndexedFaceSet43;

HAnimHumanoid39.skin[1] = Shape42;

Group21.children[3] = HAnimHumanoid39;

//==============================
HAnimHumanoid HAnimHumanoid44 = createNode("HAnimHumanoid");
HAnimHumanoid44.name = "SkinSwitchShapeIndexedGeometry";
HAnimHumanoid44.DEF = "e_SkinSwitchShapeIndexedGeometry";
HAnimHumanoid44.version = "2.0";
HAnimJoint HAnimJoint45 = createNode("HAnimJoint");
HAnimJoint45.name = "humanoid_root";
HAnimJoint45.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint45.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment46 = createNode("HAnimSegment");
HAnimSegment46.name = "sacrum";
HAnimJoint45.children = new MFNode();

HAnimJoint45.children[0] = HAnimSegment46;

HAnimHumanoid44.joints = new MFNode();

HAnimHumanoid44.joints[0] = HAnimJoint45;

//TODO show X3D4.0 addition of <Switch DEF='AlternativeSkins' containerField='skin'>
Shape Shape47 = createNode("Shape");
IndexedFaceSet IndexedFaceSet48 = createNode("IndexedFaceSet");
IndexedFaceSet48.DEF = "IndexedSkinMeshIFS";
Coordinate Coordinate49 = createNode("Coordinate");
Coordinate49.DEF = "SkinMeshCoordinate";
IndexedFaceSet48.coord = Coordinate49;

Shape47.geometry = IndexedFaceSet48;

HAnimHumanoid44.skin[1] = Shape47;

Group21.children[4] = HAnimHumanoid44;

//similarly for LOD
//==============================
HAnimHumanoid HAnimHumanoid50 = createNode("HAnimHumanoid");
HAnimHumanoid50.name = "SynthesizedSkinShapeIndexedTwoPartGeometry";
HAnimHumanoid50.DEF = "f_SynthesizedSkinShapeIndexedTwoPartGeometry";
HAnimHumanoid50.version = "2.0";
HAnimJoint HAnimJoint51 = createNode("HAnimJoint");
HAnimJoint51.name = "humanoid_root";
HAnimJoint51.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint51.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment52 = createNode("HAnimSegment");
HAnimSegment52.name = "sacrum";
HAnimJoint51.children = new MFNode();

HAnimJoint51.children[0] = HAnimSegment52;

HAnimHumanoid50.joints = new MFNode();

HAnimHumanoid50.joints[0] = HAnimJoint51;

Shape Shape53 = createNode("Shape");
IndexedFaceSet IndexedFaceSet54 = createNode("IndexedFaceSet");
IndexedFaceSet54.DEF = "TwoPartIndexedSkinMesh";
Coordinate Coordinate55 = createNode("Coordinate");
Coordinate55.DEF = "TwoPartSkinMesh";
IndexedFaceSet54.coord = Coordinate55;

Shape53.geometry = IndexedFaceSet54;

HAnimHumanoid50.skin[1] = Shape53;

Group21.children[5] = HAnimHumanoid50;

//==============================
HAnimHumanoid HAnimHumanoid56 = createNode("HAnimHumanoid");
HAnimHumanoid56.name = "ApparelSkinIndexedGeometryMultipleShapes";
HAnimHumanoid56.DEF = "g_ApparelSkinIndexedGeometryMultipleShapes";
HAnimHumanoid56.version = "2.0";
HAnimJoint HAnimJoint57 = createNode("HAnimJoint");
HAnimJoint57.name = "humanoid_root";
HAnimJoint57.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint57.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment58 = createNode("HAnimSegment");
HAnimSegment58.name = "sacrum";
HAnimJoint57.children = new MFNode();

HAnimJoint57.children[0] = HAnimSegment58;

HAnimHumanoid56.joints = new MFNode();

HAnimHumanoid56.joints[0] = HAnimJoint57;

Shape Shape59 = createNode("Shape");
HAnimHumanoid56.skin[1] = Shape59;

//allow multiple Shape nodes with containerField='apparel', one for each layer of clothing
//TODO proposed for X3D4.1 <Shape containerField='apparel'/>
Group21.children[6] = HAnimHumanoid56;

//==============================
HAnimHumanoid HAnimHumanoid60 = createNode("HAnimHumanoid");
HAnimHumanoid60.name = "AnatomySkinIndexedGeometryMultipleShapes";
HAnimHumanoid60.DEF = "h_AnatomySkinIndexedGeometryMultipleShapes";
HAnimHumanoid60.version = "2.0";
HAnimJoint HAnimJoint61 = createNode("HAnimJoint");
HAnimJoint61.name = "humanoid_root";
HAnimJoint61.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint61.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment62 = createNode("HAnimSegment");
HAnimSegment62.name = "sacrum";
HAnimJoint61.children = new MFNode();

HAnimJoint61.children[0] = HAnimSegment62;

HAnimHumanoid60.joints = new MFNode();

HAnimHumanoid60.joints[0] = HAnimJoint61;

//allow multiple Shape nodes with containerField='skin', one for each layer of skin
Shape Shape63 = createNode("Shape");
HAnimHumanoid60.skin[1] = Shape63;

Group21.children[7] = HAnimHumanoid60;

//==============================
children[2] = Group21;

Viewpoint Viewpoint64 = createNode("Viewpoint");
Viewpoint64.DEF = "ViewHelpText";
Viewpoint64.description = "Select text to see website";
Viewpoint64.position = new SFVec3f(new float[0,0,12]);
children[3] = Viewpoint64;

//Selectable Text design pattern has transparent Box and TouchSensor description as a tooltip
Anchor Anchor65 = createNode("Anchor");
Anchor65.description = "DesignPatternsApparelMedicalSkinLayers.x3d explores potential apparel approaches";
Anchor65.parameter = new MFString(new java.lang.String["target=blank"]);
Anchor65.url = new MFString(new java.lang.String["https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/DesignPatternsApparelMedicalSkinLayersIndex.html"]);
Shape Shape66 = createNode("Shape");
//TODO adjust Text string and Box size, then set Material transparency='1'
Text Text67 = createNode("Text");
Text67.string = new MFString(new java.lang.String["DesignPatternsApparelMedicalSkinLayers.x3d","","explores potential apparel approaches"]);
FontStyle FontStyle68 = createNode("FontStyle");
FontStyle68.family = new MFString(new java.lang.String["SANS"]);
FontStyle68.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
FontStyle68.size = 0.6;
FontStyle68.style = "BOLD";
Text67.fontStyle = FontStyle68;

Shape66.geometry = Text67;

Appearance Appearance69 = createNode("Appearance");
Material Material70 = createNode("Material");
Material70.diffuseColor = new SFColor(new float[0.9,0.9,0.9]);
Appearance69.material = Material70;

Shape66.appearance = Appearance69;

Anchor65.children = new MFNode();

Anchor65.children[0] = Shape66;

Shape Shape71 = createNode("Shape");
//Author TODO: to adjust transparent Box as text-selection assist, set width and height to match size, then set transparency='1' to make invisible.
Box Box72 = createNode("Box");
Box72.size = new SFVec3f(new float[11,2,0.001]);
Shape71.geometry = Box72;

Appearance Appearance73 = createNode("Appearance");
Material Material74 = createNode("Material");
Material74.transparency = 1;
Appearance73.material = Material74;

Shape71.appearance = Appearance73;

Anchor65.children[1] = Shape71;

children[4] = Anchor65;

}
