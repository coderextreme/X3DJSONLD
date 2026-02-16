#ifndef WIN32
#define WINAPI
#define AFX_EXT_CLASS
#define EXPORT32
#define WINGDIAPI
#define APIENTRY
#endif
#define FALSE false
#define TRUE true
#define BOOL bool
#define False false
#define True true
#include "C:/Users/jcarl/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/pch.h"
#include "C:/Users/jcarl/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/framework.h"
#include "C:/Users/jcarl/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/glut.h"
#include "C:/Users/jcarl/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/X3DLib.h"
int main(int argc, char ** argv) {
X3D& X3D0 =  X3D();
X3D0.setProfile(CString("Immersive"));
X3D0.setVersion(CString("4.0"));
head& head1 =  head();
component& component2 =  component();
component2.setName(CString("HAnim"));
component2.setLevel(2);
head1.addChild(&component2);

meta& meta3 =  meta();
meta3.setName(CString("title"));
meta3.setContent(CString("DesignPatternsApparelMedicalSkinLayers.x3d"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("description"));
meta4.setContent(CString("Design patterns for skin and apparel using HAnim2 standard in X3D4"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("creator"));
meta5.setContent(CString("Don Brutzman"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("creator"));
meta6.setContent(CString("Joe D. Williams"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(CString("creator"));
meta7.setContent(CString("Dick Puk"));
head1.addMeta(&meta7);

meta& meta8 =  meta();
meta8.setName(CString("created"));
meta8.setContent(CString("23 December 2022"));
head1.addMeta(&meta8);

meta& meta9 =  meta();
meta9.setName(CString("modified"));
meta9.setContent(CString("2 July 2023"));
head1.addMeta(&meta9);

meta& meta10 =  meta();
meta10.setName(CString("reference"));
meta10.setContent(CString("DesignPatternsApparelVariations.txt"));
head1.addMeta(&meta10);

meta& meta11 =  meta();
meta11.setName(CString("reference"));
meta11.setContent(CString("HAnim2 Part 1, HAnim architecture, 4.3 Humanoid object https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#HumanoidObject"));
head1.addMeta(&meta11);

meta& meta12 =  meta();
meta12.setName(CString("reference"));
meta12.setContent(CString("HAnim2 Part 1, HAnim architecture, E.4 Multiple humanoids per file https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/Guidelines.html#MultipleHumanoidsPerFile"));
head1.addMeta(&meta12);

meta& meta13 =  meta();
meta13.setName(CString("reference"));
meta13.setContent(CString("X3D4 Architecture, clause 26 HAnim component, 26.3.2 HAnimHumanoid https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19775-1v4-DIS/Part01/components/hanim.html#HAnimHumanoid"));
head1.addMeta(&meta13);

meta& meta14 =  meta();
meta14.setName(CString("warning"));
meta14.setContent(CString("Under development. This template example does not produce renderable HAnim models."));
head1.addMeta(&meta14);

meta& meta15 =  meta();
meta15.setName(CString("identifier"));
meta15.setContent(CString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/DesignPatternsApparelMedicalSkinLayers.x3d"));
head1.addMeta(&meta15);

meta& meta16 =  meta();
meta16.setName(CString("generator"));
meta16.setContent(CString("X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit"));
head1.addMeta(&meta16);

meta& meta17 =  meta();
meta17.setName(CString("license"));
meta17.setContent(CString("../license.html"));
head1.addMeta(&meta17);

X3D0.setHead(&head1);

Scene& Scene18 =  Scene();
WorldInfo& WorldInfo19 =  WorldInfo();
WorldInfo19.setTitle(CString("HAnimHumanoid skin design patterns for apparel, medical"));
Scene18.addChild(&WorldInfo19);

Background& Background20 =  Background();
Background20.setSkyColor(new float[]{0,0.6,0.6}, 3);
Scene18.addChild(&Background20);

Group& Group21 =  Group();
Group21.setDEF(CString("MultipleHumanoids"));
MetadataString& MetadataString22 =  MetadataString();
MetadataString22.X3DNode::setName(CString("HAnimArchitecture"));
MetadataString22.X3DNode::setReference(CString("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/Guidelines.html#MultipleHumanoidsPerFile"));
MetadataString22.setValue(new CString[]{CString("E.4 Multiple humanoids per file")}, 1);
Group21.setMetadata(&MetadataString22);

//==============================
HAnimHumanoid& HAnimHumanoid23 =  HAnimHumanoid();
HAnimHumanoid23.X3DNode::setName(CString("SimpleSkeleton"));
HAnimHumanoid23.setDEF(CString("a_SimpleSkeleton"));
HAnimHumanoid23.setVersion(CString("2.0"));
HAnimJoint& HAnimJoint24 =  HAnimJoint();
HAnimJoint24.X3DNode::setName(CString("humanoid_root"));
HAnimJoint24.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint24.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment25 =  HAnimSegment();
HAnimSegment25.X3DNode::setName(CString("sacrum"));
Shape& Shape26 =  Shape();
Shape26.setDEF(CString("JointVisualization"));
HAnimSegment25.addChild(&Shape26);

Shape& Shape27 =  Shape();
Shape27.setDEF(CString("SegmentVisualization"));
HAnimSegment25.addChild(&Shape27);

HAnimSite& HAnimSite28 =  HAnimSite();
HAnimSite28.X3DNode::setName(CString("feature01_tip"));
HAnimSite28.setDEF(CString("a_feature01_tip"));
Shape& Shape29 =  Shape();
Shape29.setDEF(CString("SiteVisualization"));
HAnimSite28.addChild(&Shape29);

HAnimSegment25.addChild(&HAnimSite28);

HAnimJoint24.addChildren(&HAnimSegment25);

HAnimHumanoid23.setSkeleton(&HAnimJoint24);

Group21.addChild(&HAnimHumanoid23);

//==============================
HAnimHumanoid& HAnimHumanoid30 =  HAnimHumanoid();
HAnimHumanoid30.X3DNode::setName(CString("SimpleSkeletonMesh"));
HAnimHumanoid30.setDEF(CString("b_SimpleSkeletonMesh"));
HAnimHumanoid30.setVersion(CString("2.0"));
HAnimJoint& HAnimJoint31 =  HAnimJoint();
HAnimJoint31.X3DNode::setName(CString("humanoid_root"));
HAnimJoint31.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint31.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment32 =  HAnimSegment();
HAnimSegment32.X3DNode::setName(CString("sacrum"));
Shape& Shape33 =  Shape();
IndexedFaceSet& IndexedFaceSet34 =  IndexedFaceSet();
IndexedFaceSet34.setDEF(CString("SegmentBoneMesh"));
Shape33.setGeometry(&IndexedFaceSet34);

HAnimSegment32.addChild(&Shape33);

HAnimJoint31.addChildren(&HAnimSegment32);

HAnimHumanoid30.setSkeleton(&HAnimJoint31);

Group21.addChild(&HAnimHumanoid30);

//==============================
HAnimHumanoid& HAnimHumanoid35 =  HAnimHumanoid();
HAnimHumanoid35.X3DNode::setName(CString("SkinIndexedGeometry"));
HAnimHumanoid35.setDEF(CString("c_SkinIndexedGeometry"));
HAnimHumanoid35.setVersion(CString("2.0"));
HAnimJoint& HAnimJoint36 =  HAnimJoint();
HAnimJoint36.X3DNode::setName(CString("humanoid_root"));
HAnimJoint36.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint36.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment37 =  HAnimSegment();
HAnimSegment37.X3DNode::setName(CString("sacrum"));
HAnimJoint36.addChildren(&HAnimSegment37);

HAnimHumanoid35.setSkeleton(&HAnimJoint36);

IndexedFaceSet& IndexedFaceSet38 =  IndexedFaceSet();
IndexedFaceSet38.setDEF(CString("SkinMeshIFS"));
HAnimHumanoid35.setSkin(&IndexedFaceSet38);

Group21.addChild(&HAnimHumanoid35);

//==============================
HAnimHumanoid& HAnimHumanoid39 =  HAnimHumanoid();
HAnimHumanoid39.X3DNode::setName(CString("SkinShapeIndexedGeometry"));
HAnimHumanoid39.setDEF(CString("d_SkinShapeIndexedGeometry"));
HAnimHumanoid39.setVersion(CString("2.0"));
HAnimJoint& HAnimJoint40 =  HAnimJoint();
HAnimJoint40.X3DNode::setName(CString("humanoid_root"));
HAnimJoint40.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint40.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment41 =  HAnimSegment();
HAnimSegment41.X3DNode::setName(CString("sacrum"));
HAnimJoint40.addChildren(&HAnimSegment41);

HAnimHumanoid39.setSkeleton(&HAnimJoint40);

Shape& Shape42 =  Shape();
IndexedFaceSet& IndexedFaceSet43 =  IndexedFaceSet();
IndexedFaceSet43.setUSE(CString("SkinMeshIFS"));
Shape42.setGeometry(&IndexedFaceSet43);

HAnimHumanoid39.setSkin(&Shape42);

Group21.addChild(&HAnimHumanoid39);

//==============================
HAnimHumanoid& HAnimHumanoid44 =  HAnimHumanoid();
HAnimHumanoid44.X3DNode::setName(CString("SkinSwitchShapeIndexedGeometry"));
HAnimHumanoid44.setDEF(CString("e_SkinSwitchShapeIndexedGeometry"));
HAnimHumanoid44.setVersion(CString("2.0"));
HAnimJoint& HAnimJoint45 =  HAnimJoint();
HAnimJoint45.X3DNode::setName(CString("humanoid_root"));
HAnimJoint45.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint45.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment46 =  HAnimSegment();
HAnimSegment46.X3DNode::setName(CString("sacrum"));
HAnimJoint45.addChildren(&HAnimSegment46);

HAnimHumanoid44.setSkeleton(&HAnimJoint45);

//TODO show X3D4.0 addition of <Switch DEF='AlternativeSkins' containerField='skin'>
Shape& Shape47 =  Shape();
IndexedFaceSet& IndexedFaceSet48 =  IndexedFaceSet();
IndexedFaceSet48.setDEF(CString("IndexedSkinMeshIFS"));
Coordinate& Coordinate49 =  Coordinate();
Coordinate49.setDEF(CString("SkinMeshCoordinate"));
IndexedFaceSet48.setCoord(&Coordinate49);

Shape47.setGeometry(&IndexedFaceSet48);

HAnimHumanoid44.setSkin(&Shape47);

Group21.addChild(&HAnimHumanoid44);

//similarly for LOD
//==============================
HAnimHumanoid& HAnimHumanoid50 =  HAnimHumanoid();
HAnimHumanoid50.X3DNode::setName(CString("SynthesizedSkinShapeIndexedTwoPartGeometry"));
HAnimHumanoid50.setDEF(CString("f_SynthesizedSkinShapeIndexedTwoPartGeometry"));
HAnimHumanoid50.setVersion(CString("2.0"));
HAnimJoint& HAnimJoint51 =  HAnimJoint();
HAnimJoint51.X3DNode::setName(CString("humanoid_root"));
HAnimJoint51.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint51.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment52 =  HAnimSegment();
HAnimSegment52.X3DNode::setName(CString("sacrum"));
HAnimJoint51.addChildren(&HAnimSegment52);

HAnimHumanoid50.setSkeleton(&HAnimJoint51);

Shape& Shape53 =  Shape();
IndexedFaceSet& IndexedFaceSet54 =  IndexedFaceSet();
IndexedFaceSet54.setDEF(CString("TwoPartIndexedSkinMesh"));
Coordinate& Coordinate55 =  Coordinate();
Coordinate55.setDEF(CString("TwoPartSkinMesh"));
IndexedFaceSet54.setCoord(&Coordinate55);

Shape53.setGeometry(&IndexedFaceSet54);

HAnimHumanoid50.setSkin(&Shape53);

Group21.addChild(&HAnimHumanoid50);

//==============================
HAnimHumanoid& HAnimHumanoid56 =  HAnimHumanoid();
HAnimHumanoid56.X3DNode::setName(CString("ApparelSkinIndexedGeometryMultipleShapes"));
HAnimHumanoid56.setDEF(CString("g_ApparelSkinIndexedGeometryMultipleShapes"));
HAnimHumanoid56.setVersion(CString("2.0"));
HAnimJoint& HAnimJoint57 =  HAnimJoint();
HAnimJoint57.X3DNode::setName(CString("humanoid_root"));
HAnimJoint57.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint57.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment58 =  HAnimSegment();
HAnimSegment58.X3DNode::setName(CString("sacrum"));
HAnimJoint57.addChildren(&HAnimSegment58);

HAnimHumanoid56.setSkeleton(&HAnimJoint57);

Shape& Shape59 =  Shape();
HAnimHumanoid56.setSkin(&Shape59);

//allow multiple Shape nodes with containerField='apparel', one for each layer of clothing
//TODO proposed for X3D4.1 <Shape containerField='apparel'/>
Group21.addChild(&HAnimHumanoid56);

//==============================
HAnimHumanoid& HAnimHumanoid60 =  HAnimHumanoid();
HAnimHumanoid60.X3DNode::setName(CString("AnatomySkinIndexedGeometryMultipleShapes"));
HAnimHumanoid60.setDEF(CString("h_AnatomySkinIndexedGeometryMultipleShapes"));
HAnimHumanoid60.setVersion(CString("2.0"));
HAnimJoint& HAnimJoint61 =  HAnimJoint();
HAnimJoint61.X3DNode::setName(CString("humanoid_root"));
HAnimJoint61.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint61.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment62 =  HAnimSegment();
HAnimSegment62.X3DNode::setName(CString("sacrum"));
HAnimJoint61.addChildren(&HAnimSegment62);

HAnimHumanoid60.setSkeleton(&HAnimJoint61);

//allow multiple Shape nodes with containerField='skin', one for each layer of skin
Shape& Shape63 =  Shape();
HAnimHumanoid60.setSkin(&Shape63);

Group21.addChild(&HAnimHumanoid60);

//==============================
Scene18.addChild(&Group21);

Viewpoint& Viewpoint64 =  Viewpoint();
Viewpoint64.setDEF(CString("ViewHelpText"));
Viewpoint64.setDescription(CString("Select text to see website"));
Viewpoint64.setPosition(new float[]{0,0,12});
Scene18.addChild(&Viewpoint64);

//Selectable Text design pattern has transparent Box and TouchSensor description as a tooltip
Anchor& Anchor65 =  Anchor();
Anchor65.setDescription(CString("DesignPatternsApparelMedicalSkinLayers.x3d explores potential apparel approaches"));
Anchor65.setParameter(new CString[]{CString("target=blank")}, 1);
Anchor65.setUrl(new CString[]{CString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/DesignPatternsApparelMedicalSkinLayersIndex.html")}, 1);
Shape& Shape66 =  Shape();
//TODO adjust Text string and Box size, then set Material transparency='1'
Text& Text67 =  Text();
Text67.setString(new CString[]{CString("DesignPatternsApparelMedicalSkinLayers.x3d"), CString(""), CString("explores potential apparel approaches")}, 3);
CFontStyle& FontStyle68 =  CFontStyle();
FontStyle68.setFamily(new CString[]{CString("SANS")}, 1);
FontStyle68.setJustify(new CString[]{CString("MIDDLE"), CString("MIDDLE")}, 2);
FontStyle68.setSize(0.6);
FontStyle68.setStyle(CString("BOLD"));
Text67.setFontStyle(&FontStyle68);

Shape66.setGeometry(&Text67);

Appearance& Appearance69 =  Appearance();
Material& Material70 =  Material();
Material70.setDiffuseColor(new float[]{0.9,0.9,0.9});
Appearance69.addChild(&Material70);

Shape66.addChild(&Appearance69);

Anchor65.addChild(&Shape66);

Shape& Shape71 =  Shape();
//Author TODO: to adjust transparent Box as text-selection assist, set width and height to match size, then set transparency='1' to make invisible.
Box& Box72 =  Box();
Box72.setSize(new float[]{11,2,0.001});
Shape71.setGeometry(&Box72);

Appearance& Appearance73 =  Appearance();
Material& Material74 =  Material();
Material74.setTransparency(1);
Appearance73.addChild(&Material74);

Shape71.addChild(&Appearance73);

Anchor65.addChild(&Shape71);

Scene18.addChild(&Anchor65);

X3D0.setScene(&Scene18);

}
