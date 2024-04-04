//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/pch.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/framework.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/glut.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/X3DLib.h"
//int main(int argc, char ** argv) 
//{
X3D& X3D0 =  X3D();
X3D0.setProfile(CString("Immersive"));
X3D0.setVersion(CString("4.0"));
head& head1 =  head();
meta& meta2 =  meta();
meta2.setName(CString("title"));
meta2.setContent(CString("DesignPatternsApparelMedicalSkinLayers.x3d"));
head1.addMeta(&meta2);

meta& meta3 =  meta();
meta3.setName(CString("description"));
meta3.setContent(CString("Design patterns for skin and apparel using HAnim2 standard in X3D4"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("creator"));
meta4.setContent(CString("Don Brutzman"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("creator"));
meta5.setContent(CString("Joe D. Williams"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("creator"));
meta6.setContent(CString("Dick Puk"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(CString("created"));
meta7.setContent(CString("23 December 2022"));
head1.addMeta(&meta7);

meta& meta8 =  meta();
meta8.setName(CString("modified"));
meta8.setContent(CString("2 July 2023"));
head1.addMeta(&meta8);

meta& meta9 =  meta();
meta9.setName(CString("reference"));
meta9.setContent(CString("DesignPatternsApparelVariations.txt"));
head1.addMeta(&meta9);

meta& meta10 =  meta();
meta10.setName(CString("reference"));
meta10.setContent(CString("HAnim2 Part 1, HAnim architecture, 4.3 Humanoid object https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#HumanoidObject"));
head1.addMeta(&meta10);

meta& meta11 =  meta();
meta11.setName(CString("reference"));
meta11.setContent(CString("HAnim2 Part 1, HAnim architecture, E.4 Multiple humanoids per file https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/Guidelines.html#MultipleHumanoidsPerFile"));
head1.addMeta(&meta11);

meta& meta12 =  meta();
meta12.setName(CString("reference"));
meta12.setContent(CString("X3D4 Architecture, clause 26 HAnim component, 26.3.2 HAnimHumanoid https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19775-1v4-DIS/Part01/components/hanim.html#HAnimHumanoid"));
head1.addMeta(&meta12);

meta& meta13 =  meta();
meta13.setName(CString("warning"));
meta13.setContent(CString("Under development. This template example does not produce renderable HAnim models."));
head1.addMeta(&meta13);

meta& meta14 =  meta();
meta14.setName(CString("identifier"));
meta14.setContent(CString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/DesignPatternsApparelMedicalSkinLayers.x3d"));
head1.addMeta(&meta14);

meta& meta15 =  meta();
meta15.setName(CString("generator"));
meta15.setContent(CString("X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit"));
head1.addMeta(&meta15);

meta& meta16 =  meta();
meta16.setName(CString("license"));
meta16.setContent(CString("../license.html"));
head1.addMeta(&meta16);

X3D0.setHead(&head1);

Scene& Scene17 =  Scene();
WorldInfo& WorldInfo18 =  WorldInfo();
WorldInfo18.setTitle(CString("HAnimHumanoid skin design patterns for apparel, medical"));
Scene17.addChild(&WorldInfo18);

Background& Background19 =  Background();
Background19.setSkyColor(new float[]{0.0,0.6,0.6}, 3);
Scene17.addChild(&Background19);

Group& Group20 =  Group();
Group20.setDEF(CString("MultipleHumanoids"));
MetadataString& MetadataString21 =  MetadataString();
MetadataString21.X3DNode::setName(CString("HAnimArchitecture"));
MetadataString21.X3DNode::setReference(CString("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/Guidelines.html#MultipleHumanoidsPerFile"));
MetadataString21.setValue(new CString[]{CString("E.4 Multiple humanoids per file")}, 1);
Group20.setMetadata(&MetadataString21);

//==============================
HAnimHumanoid& HAnimHumanoid22 =  HAnimHumanoid();
HAnimHumanoid22.X3DNode::setName(CString("SimpleSkeleton"));
HAnimHumanoid22.setDEF(CString("a_SimpleSkeleton"));
HAnimHumanoid22.setVersion(CString("2.0"));
HAnimJoint& HAnimJoint23 =  HAnimJoint();
HAnimJoint23.X3DNode::setName(CString("humanoid_root"));
HAnimSegment& HAnimSegment24 =  HAnimSegment();
HAnimSegment24.X3DNode::setName(CString("sacrum"));
Shape& Shape25 =  Shape();
Shape25.setDEF(CString("JointVisualization"));
HAnimSegment24.addChild(&Shape25);

Shape& Shape26 =  Shape();
Shape26.setDEF(CString("SegmentVisualization"));
HAnimSegment24.addChild(&Shape26);

HAnimSite& HAnimSite27 =  HAnimSite();
HAnimSite27.X3DNode::setName(CString("feature01_tip"));
HAnimSite27.setDEF(CString("a_feature01_tip"));
Shape& Shape28 =  Shape();
Shape28.setDEF(CString("SiteVisualization"));
HAnimSite27.addChild(&Shape28);

HAnimSegment24.addChild(&HAnimSite27);

HAnimJoint23.addChildren(&HAnimSegment24);

HAnimHumanoid22.setSkeleton(&HAnimJoint23);

Group20.addChild(&HAnimHumanoid22);

//==============================
HAnimHumanoid& HAnimHumanoid29 =  HAnimHumanoid();
HAnimHumanoid29.X3DNode::setName(CString("SimpleSkeletonMesh"));
HAnimHumanoid29.setDEF(CString("b_SimpleSkeletonMesh"));
HAnimHumanoid29.setVersion(CString("2.0"));
HAnimJoint& HAnimJoint30 =  HAnimJoint();
HAnimJoint30.X3DNode::setName(CString("humanoid_root"));
HAnimSegment& HAnimSegment31 =  HAnimSegment();
HAnimSegment31.X3DNode::setName(CString("sacrum"));
Shape& Shape32 =  Shape();
IndexedFaceSet& IndexedFaceSet33 =  IndexedFaceSet();
IndexedFaceSet33.setDEF(CString("SegmentBoneMesh"));
Shape32.setGeometry(&IndexedFaceSet33);

HAnimSegment31.addChild(&Shape32);

HAnimJoint30.addChildren(&HAnimSegment31);

HAnimHumanoid29.setSkeleton(&HAnimJoint30);

Group20.addChild(&HAnimHumanoid29);

//==============================
HAnimHumanoid& HAnimHumanoid34 =  HAnimHumanoid();
HAnimHumanoid34.X3DNode::setName(CString("SkinIndexedGeometry"));
HAnimHumanoid34.setDEF(CString("c_SkinIndexedGeometry"));
HAnimHumanoid34.setVersion(CString("2.0"));
HAnimJoint& HAnimJoint35 =  HAnimJoint();
HAnimJoint35.X3DNode::setName(CString("humanoid_root"));
HAnimSegment& HAnimSegment36 =  HAnimSegment();
HAnimSegment36.X3DNode::setName(CString("sacrum"));
HAnimJoint35.addChildren(&HAnimSegment36);

HAnimHumanoid34.setSkeleton(&HAnimJoint35);

IndexedFaceSet& IndexedFaceSet37 =  IndexedFaceSet();
IndexedFaceSet37.setDEF(CString("SkinMeshIFS"));
HAnimHumanoid34.setSkin(&IndexedFaceSet37);

Group20.addChild(&HAnimHumanoid34);

//==============================
HAnimHumanoid& HAnimHumanoid38 =  HAnimHumanoid();
HAnimHumanoid38.X3DNode::setName(CString("SkinShapeIndexedGeometry"));
HAnimHumanoid38.setDEF(CString("d_SkinShapeIndexedGeometry"));
HAnimHumanoid38.setVersion(CString("2.0"));
HAnimJoint& HAnimJoint39 =  HAnimJoint();
HAnimJoint39.X3DNode::setName(CString("humanoid_root"));
HAnimSegment& HAnimSegment40 =  HAnimSegment();
HAnimSegment40.X3DNode::setName(CString("sacrum"));
HAnimJoint39.addChildren(&HAnimSegment40);

HAnimHumanoid38.setSkeleton(&HAnimJoint39);

Shape& Shape41 =  Shape();
IndexedFaceSet& IndexedFaceSet42 =  IndexedFaceSet();
IndexedFaceSet42.setUSE(CString("SkinMeshIFS"));
Shape41.setGeometry(&IndexedFaceSet42);

HAnimHumanoid38.setSkin(&Shape41);

Group20.addChild(&HAnimHumanoid38);

//==============================
HAnimHumanoid& HAnimHumanoid43 =  HAnimHumanoid();
HAnimHumanoid43.X3DNode::setName(CString("SkinSwitchShapeIndexedGeometry"));
HAnimHumanoid43.setDEF(CString("e_SkinSwitchShapeIndexedGeometry"));
HAnimHumanoid43.setVersion(CString("2.0"));
HAnimJoint& HAnimJoint44 =  HAnimJoint();
HAnimJoint44.X3DNode::setName(CString("humanoid_root"));
HAnimSegment& HAnimSegment45 =  HAnimSegment();
HAnimSegment45.X3DNode::setName(CString("sacrum"));
HAnimJoint44.addChildren(&HAnimSegment45);

HAnimHumanoid43.setSkeleton(&HAnimJoint44);

//TODO show X3D4.0 addition of <Switch DEF='AlternativeSkins' containerField='skin'>
Shape& Shape46 =  Shape();
IndexedFaceSet& IndexedFaceSet47 =  IndexedFaceSet();
IndexedFaceSet47.setDEF(CString("IndexedSkinMeshIFS"));
Coordinate& Coordinate48 =  Coordinate();
Coordinate48.setDEF(CString("SkinMeshCoordinate"));
IndexedFaceSet47.setCoord(&Coordinate48);

Shape46.setGeometry(&IndexedFaceSet47);

HAnimHumanoid43.setSkin(&Shape46);

Group20.addChild(&HAnimHumanoid43);

//similarly for LOD
//==============================
HAnimHumanoid& HAnimHumanoid49 =  HAnimHumanoid();
HAnimHumanoid49.X3DNode::setName(CString("SynthesizedSkinShapeIndexedTwoPartGeometry"));
HAnimHumanoid49.setDEF(CString("f_SynthesizedSkinShapeIndexedTwoPartGeometry"));
HAnimHumanoid49.setVersion(CString("2.0"));
HAnimJoint& HAnimJoint50 =  HAnimJoint();
HAnimJoint50.X3DNode::setName(CString("humanoid_root"));
HAnimSegment& HAnimSegment51 =  HAnimSegment();
HAnimSegment51.X3DNode::setName(CString("sacrum"));
HAnimJoint50.addChildren(&HAnimSegment51);

HAnimHumanoid49.setSkeleton(&HAnimJoint50);

Shape& Shape52 =  Shape();
IndexedFaceSet& IndexedFaceSet53 =  IndexedFaceSet();
IndexedFaceSet53.setDEF(CString("TwoPartIndexedSkinMesh"));
Coordinate& Coordinate54 =  Coordinate();
Coordinate54.setDEF(CString("TwoPartSkinMesh"));
IndexedFaceSet53.setCoord(&Coordinate54);

Shape52.setGeometry(&IndexedFaceSet53);

HAnimHumanoid49.setSkin(&Shape52);

Group20.addChild(&HAnimHumanoid49);

//==============================
HAnimHumanoid& HAnimHumanoid55 =  HAnimHumanoid();
HAnimHumanoid55.X3DNode::setName(CString("ApparelSkinIndexedGeometryMultipleShapes"));
HAnimHumanoid55.setDEF(CString("g_ApparelSkinIndexedGeometryMultipleShapes"));
HAnimHumanoid55.setVersion(CString("2.0"));
HAnimJoint& HAnimJoint56 =  HAnimJoint();
HAnimJoint56.X3DNode::setName(CString("humanoid_root"));
HAnimSegment& HAnimSegment57 =  HAnimSegment();
HAnimSegment57.X3DNode::setName(CString("sacrum"));
HAnimJoint56.addChildren(&HAnimSegment57);

HAnimHumanoid55.setSkeleton(&HAnimJoint56);

Shape& Shape58 =  Shape();
HAnimHumanoid55.setSkin(&Shape58);

//allow multiple Shape nodes with containerField='apparel', one for each layer of clothing
//TODO proposed for X3D4.1 <Shape containerField='apparel'/>
Group20.addChild(&HAnimHumanoid55);

//==============================
HAnimHumanoid& HAnimHumanoid59 =  HAnimHumanoid();
HAnimHumanoid59.X3DNode::setName(CString("AnatomySkinIndexedGeometryMultipleShapes"));
HAnimHumanoid59.setDEF(CString("h_AnatomySkinIndexedGeometryMultipleShapes"));
HAnimHumanoid59.setVersion(CString("2.0"));
HAnimJoint& HAnimJoint60 =  HAnimJoint();
HAnimJoint60.X3DNode::setName(CString("humanoid_root"));
HAnimSegment& HAnimSegment61 =  HAnimSegment();
HAnimSegment61.X3DNode::setName(CString("sacrum"));
HAnimJoint60.addChildren(&HAnimSegment61);

HAnimHumanoid59.setSkeleton(&HAnimJoint60);

//allow multiple Shape nodes with containerField='skin', one for each layer of skin
Shape& Shape62 =  Shape();
HAnimHumanoid59.setSkin(&Shape62);

Group20.addChild(&HAnimHumanoid59);

//==============================
Scene17.addChild(&Group20);

Viewpoint& Viewpoint63 =  Viewpoint();
Viewpoint63.setDEF(CString("ViewHelpText"));
Viewpoint63.setDescription(CString("Select text to see website"));
Viewpoint63.setPosition(new float[]{0.0,0.0,12.0});
Scene17.addChild(&Viewpoint63);

//Selectable Text design pattern has transparent Box and TouchSensor description as a tooltip
Anchor& Anchor64 =  Anchor();
Anchor64.setDescription(CString("DesignPatternsApparelMedicalSkinLayers.x3d explores potential apparel approaches"));
Anchor64.setParameter(new CString[]{CString("target=blank")}, 1);
Anchor64.setUrl(new CString[]{CString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/DesignPatternsApparelMedicalSkinLayersIndex.html")}, 1);
Shape& Shape65 =  Shape();
//TODO adjust Text string and Box size, then set Material transparency='1'
Text& Text66 =  Text();
Text66.setString(new CString[]{CString("DesignPatternsApparelMedicalSkinLayers.x3d"), CString(""), CString("explores potential apparel approaches")}, 3);
CFontStyle& FontStyle67 =  CFontStyle();
FontStyle67.setFamily(new CString[]{CString("SANS")}, 1);
FontStyle67.setJustify(new CString[]{CString("MIDDLE"), CString("MIDDLE")}, 2);
FontStyle67.setSize(0.6);
FontStyle67.setStyle(CString("BOLD"));
Text66.setFontStyle(&FontStyle67);

Shape65.setGeometry(&Text66);

Appearance& Appearance68 =  Appearance();
Material& Material69 =  Material();
Material69.setDiffuseColor(new float[]{0.9,0.9,0.9});
Appearance68.addChild(&Material69);

Shape65.addChild(&Appearance68);

Anchor64.addChild(&Shape65);

Shape& Shape70 =  Shape();
//Author TODO: to adjust transparent Box as text-selection assist, set width and height to match size, then set transparency='1' to make invisible.
Box& Box71 =  Box();
Box71.setSize(new float[]{11.0,2.0,0.001});
Shape70.setGeometry(&Box71);

Appearance& Appearance72 =  Appearance();
Material& Material73 =  Material();
Material73.setTransparency(1);
Appearance72.addChild(&Material73);

Shape70.addChild(&Appearance72);

Anchor64.addChild(&Shape70);

Scene17.addChild(&Anchor64);

X3D0.setScene(&Scene17);

//}
