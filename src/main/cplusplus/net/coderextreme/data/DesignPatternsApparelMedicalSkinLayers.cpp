#ifdef WIN32
#define FALSE false
#define TRUE true
#define WINAPI
#define AFX_EXT_CLASS
#define EXPORT32
#endif
#define False false
#define True true
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/SphereExample/SphereExample/pch.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/SphereExample/SphereExample/framework.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/SphereExample/include/XML_PARSER.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/SphereExample/include/X3DLib.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/SphereExample/include/glMath.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/SphereExample/include/glut.h"
int main(int argc, char ** argv) {
X3D* X3D0 = new X3D();
X3D0->setProfile(CString("Immersive"));
X3D0->setVersion(CString("4.0"));
head* head1 = new head();
meta* meta2 = new meta();
meta2->setName(CString("title"));
meta2->setContent(CString("DesignPatternsApparelMedicalSkinLayers.x3d"));
head1->addMeta(meta2);

meta* meta3 = new meta();
meta3->setName(CString("description"));
meta3->setContent(CString("Design patterns for skin and apparel using HAnim2 standard in X3D4"));
head1->addMeta(meta3);

meta* meta4 = new meta();
meta4->setName(CString("creator"));
meta4->setContent(CString("Don Brutzman"));
head1->addMeta(meta4);

meta* meta5 = new meta();
meta5->setName(CString("creator"));
meta5->setContent(CString("Joe D. Williams"));
head1->addMeta(meta5);

meta* meta6 = new meta();
meta6->setName(CString("creator"));
meta6->setContent(CString("Dick Puk"));
head1->addMeta(meta6);

meta* meta7 = new meta();
meta7->setName(CString("created"));
meta7->setContent(CString("23 December 2022"));
head1->addMeta(meta7);

meta* meta8 = new meta();
meta8->setName(CString("modified"));
meta8->setContent(CString("2 July 2023"));
head1->addMeta(meta8);

meta* meta9 = new meta();
meta9->setName(CString("reference"));
meta9->setContent(CString("DesignPatternsApparelVariations.txt"));
head1->addMeta(meta9);

meta* meta10 = new meta();
meta10->setName(CString("reference"));
meta10->setContent(CString("HAnim2 Part 1, HAnim architecture, 4.3 Humanoid object https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#HumanoidObject"));
head1->addMeta(meta10);

meta* meta11 = new meta();
meta11->setName(CString("reference"));
meta11->setContent(CString("HAnim2 Part 1, HAnim architecture, E.4 Multiple humanoids per file https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/Guidelines.html#MultipleHumanoidsPerFile"));
head1->addMeta(meta11);

meta* meta12 = new meta();
meta12->setName(CString("reference"));
meta12->setContent(CString("X3D4 Architecture, clause 26 HAnim component, 26.3.2 HAnimHumanoid https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19775-1v4-DIS/Part01/components/hanim.html#HAnimHumanoid"));
head1->addMeta(meta12);

meta* meta13 = new meta();
meta13->setName(CString("warning"));
meta13->setContent(CString("Under development. This template example does not produce renderable HAnim models."));
head1->addMeta(meta13);

meta* meta14 = new meta();
meta14->setName(CString("identifier"));
meta14->setContent(CString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/DesignPatternsApparelMedicalSkinLayers.x3d"));
head1->addMeta(meta14);

meta* meta15 = new meta();
meta15->setName(CString("generator"));
meta15->setContent(CString("X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit"));
head1->addMeta(meta15);

meta* meta16 = new meta();
meta16->setName(CString("license"));
meta16->setContent(CString("../license.html"));
head1->addMeta(meta16);

X3D0->setHead(head1);

Scene* Scene17 = new Scene();
WorldInfo* WorldInfo18 = new WorldInfo();
WorldInfo18->setTitle(CString("HAnimHumanoid skin design patterns for apparel, medical"));
Scene17->addChild(WorldInfo18);

Background* Background19 = new Background();
Background19->setSkyColor(new float[3]{0,0.6,0.6}, 3);
Scene17->addChild(Background19);

Group* Group20 = new Group();
Group20->setDEF(CString("MultipleHumanoids"));
MetadataString* MetadataString21 = new MetadataString();
MetadataString21->setName(CString("HAnimArchitecture"));
MetadataString21->setReference(CString("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/Guidelines.html#MultipleHumanoidsPerFile"));
MetadataString21->setValue(new CString[1]{CString("E.4 Multiple humanoids per file")}, 1);
Group20->setMetadata(MetadataString21);

//==============================
HAnimHumanoid* HAnimHumanoid22 = new HAnimHumanoid();
HAnimHumanoid22->setName(CString("SimpleSkeleton"));
HAnimHumanoid22->setDEF(CString("a_SimpleSkeleton"));
HAnimHumanoid22->setVersion(CString("2.0"));
HAnimJoint* HAnimJoint23 = new HAnimJoint();
HAnimJoint23->setName(CString("humanoid_root"));
HAnimSegment* HAnimSegment24 = new HAnimSegment();
HAnimSegment24->setName(CString("sacrum"));
Shape* Shape25 = new Shape();
Shape25->setDEF(CString("JointVisualization"));
HAnimSegment24->addChild(Shape25);

Shape* Shape26 = new Shape();
Shape26->setDEF(CString("SegmentVisualization"));
HAnimSegment24->addChild(Shape26);

HAnimSite* HAnimSite27 = new HAnimSite();
HAnimSite27->setName(CString("feature01_tip"));
HAnimSite27->setDEF(CString("a_feature01_tip"));
Shape* Shape28 = new Shape();
Shape28->setDEF(CString("SiteVisualization"));
HAnimSite27->addChild(Shape28);

HAnimSegment24->addChild(HAnimSite27);

HAnimJoint23->addChild(HAnimSegment24);

HAnimHumanoid22->setSkeleton(HAnimJoint23);

Group20->addChild(HAnimHumanoid22);

//==============================
HAnimHumanoid* HAnimHumanoid29 = new HAnimHumanoid();
HAnimHumanoid29->setName(CString("SimpleSkeletonMesh"));
HAnimHumanoid29->setDEF(CString("b_SimpleSkeletonMesh"));
HAnimHumanoid29->setVersion(CString("2.0"));
HAnimJoint* HAnimJoint30 = new HAnimJoint();
HAnimJoint30->setName(CString("humanoid_root"));
HAnimSegment* HAnimSegment31 = new HAnimSegment();
HAnimSegment31->setName(CString("sacrum"));
Shape* Shape32 = new Shape();
IndexedFaceSet* IndexedFaceSet33 = new IndexedFaceSet();
IndexedFaceSet33->setDEF(CString("SegmentBoneMesh"));
Shape32->setGeometry(IndexedFaceSet33);

HAnimSegment31->addChild(Shape32);

HAnimJoint30->addChild(HAnimSegment31);

HAnimHumanoid29->setSkeleton(HAnimJoint30);

Group20->addChild(HAnimHumanoid29);

//==============================
HAnimHumanoid* HAnimHumanoid34 = new HAnimHumanoid();
HAnimHumanoid34->setName(CString("SkinIndexedGeometry"));
HAnimHumanoid34->setDEF(CString("c_SkinIndexedGeometry"));
HAnimHumanoid34->setVersion(CString("2.0"));
HAnimJoint* HAnimJoint35 = new HAnimJoint();
HAnimJoint35->setName(CString("humanoid_root"));
HAnimSegment* HAnimSegment36 = new HAnimSegment();
HAnimSegment36->setName(CString("sacrum"));
HAnimJoint35->addChild(HAnimSegment36);

HAnimHumanoid34->setSkeleton(HAnimJoint35);

IndexedFaceSet* IndexedFaceSet37 = new IndexedFaceSet();
IndexedFaceSet37->setDEF(CString("SkinMeshIFS"));
HAnimHumanoid34->setSkin(IndexedFaceSet37);

Group20->addChild(HAnimHumanoid34);

//==============================
HAnimHumanoid* HAnimHumanoid38 = new HAnimHumanoid();
HAnimHumanoid38->setName(CString("SkinShapeIndexedGeometry"));
HAnimHumanoid38->setDEF(CString("d_SkinShapeIndexedGeometry"));
HAnimHumanoid38->setVersion(CString("2.0"));
HAnimJoint* HAnimJoint39 = new HAnimJoint();
HAnimJoint39->setName(CString("humanoid_root"));
HAnimSegment* HAnimSegment40 = new HAnimSegment();
HAnimSegment40->setName(CString("sacrum"));
HAnimJoint39->addChild(HAnimSegment40);

HAnimHumanoid38->setSkeleton(HAnimJoint39);

Shape* Shape41 = new Shape();
IndexedFaceSet* IndexedFaceSet42 = new IndexedFaceSet();
IndexedFaceSet42->setUSE(CString("SkinMeshIFS"));
Shape41->setGeometry(IndexedFaceSet42);

HAnimHumanoid38->setSkin(Shape41);

Group20->addChild(HAnimHumanoid38);

//==============================
HAnimHumanoid* HAnimHumanoid43 = new HAnimHumanoid();
HAnimHumanoid43->setName(CString("SkinSwitchShapeIndexedGeometry"));
HAnimHumanoid43->setDEF(CString("e_SkinSwitchShapeIndexedGeometry"));
HAnimHumanoid43->setVersion(CString("2.0"));
HAnimJoint* HAnimJoint44 = new HAnimJoint();
HAnimJoint44->setName(CString("humanoid_root"));
HAnimSegment* HAnimSegment45 = new HAnimSegment();
HAnimSegment45->setName(CString("sacrum"));
HAnimJoint44->addChild(HAnimSegment45);

HAnimHumanoid43->setSkeleton(HAnimJoint44);

//TODO show X3D4.0 addition of <Switch DEF='AlternativeSkins' containerField='skin'>
Shape* Shape46 = new Shape();
IndexedFaceSet* IndexedFaceSet47 = new IndexedFaceSet();
IndexedFaceSet47->setDEF(CString("IndexedSkinMeshIFS"));
Coordinate* Coordinate48 = new Coordinate();
Coordinate48->setDEF(CString("SkinMeshCoordinate"));
IndexedFaceSet47->addChild(Coordinate48);

Shape46->setGeometry(IndexedFaceSet47);

HAnimHumanoid43->setSkin(Shape46);

Group20->addChild(HAnimHumanoid43);

//similarly for LOD
//==============================
HAnimHumanoid* HAnimHumanoid49 = new HAnimHumanoid();
HAnimHumanoid49->setName(CString("SynthesizedSkinShapeIndexedTwoPartGeometry"));
HAnimHumanoid49->setDEF(CString("f_SynthesizedSkinShapeIndexedTwoPartGeometry"));
HAnimHumanoid49->setVersion(CString("2.0"));
HAnimJoint* HAnimJoint50 = new HAnimJoint();
HAnimJoint50->setName(CString("humanoid_root"));
HAnimSegment* HAnimSegment51 = new HAnimSegment();
HAnimSegment51->setName(CString("sacrum"));
HAnimJoint50->addChild(HAnimSegment51);

HAnimHumanoid49->setSkeleton(HAnimJoint50);

Shape* Shape52 = new Shape();
IndexedFaceSet* IndexedFaceSet53 = new IndexedFaceSet();
IndexedFaceSet53->setDEF(CString("TwoPartIndexedSkinMesh"));
Coordinate* Coordinate54 = new Coordinate();
Coordinate54->setDEF(CString("TwoPartSkinMesh"));
IndexedFaceSet53->addChild(Coordinate54);

Shape52->setGeometry(IndexedFaceSet53);

HAnimHumanoid49->setSkin(Shape52);

Group20->addChild(HAnimHumanoid49);

//==============================
HAnimHumanoid* HAnimHumanoid55 = new HAnimHumanoid();
HAnimHumanoid55->setName(CString("ApparelSkinIndexedGeometryMultipleShapes"));
HAnimHumanoid55->setDEF(CString("g_ApparelSkinIndexedGeometryMultipleShapes"));
HAnimHumanoid55->setVersion(CString("2.0"));
HAnimJoint* HAnimJoint56 = new HAnimJoint();
HAnimJoint56->setName(CString("humanoid_root"));
HAnimSegment* HAnimSegment57 = new HAnimSegment();
HAnimSegment57->setName(CString("sacrum"));
HAnimJoint56->addChild(HAnimSegment57);

HAnimHumanoid55->setSkeleton(HAnimJoint56);

Shape* Shape58 = new Shape();
HAnimHumanoid55->setSkin(Shape58);

//allow multiple Shape nodes with containerField='apparel', one for each layer of clothing
//TODO proposed for X3D4.1 <Shape containerField='apparel'/>
Group20->addChild(HAnimHumanoid55);

//==============================
HAnimHumanoid* HAnimHumanoid59 = new HAnimHumanoid();
HAnimHumanoid59->setName(CString("AnatomySkinIndexedGeometryMultipleShapes"));
HAnimHumanoid59->setDEF(CString("h_AnatomySkinIndexedGeometryMultipleShapes"));
HAnimHumanoid59->setVersion(CString("2.0"));
HAnimJoint* HAnimJoint60 = new HAnimJoint();
HAnimJoint60->setName(CString("humanoid_root"));
HAnimSegment* HAnimSegment61 = new HAnimSegment();
HAnimSegment61->setName(CString("sacrum"));
HAnimJoint60->addChild(HAnimSegment61);

HAnimHumanoid59->setSkeleton(HAnimJoint60);

//allow multiple Shape nodes with containerField='skin', one for each layer of skin
Shape* Shape62 = new Shape();
HAnimHumanoid59->setSkin(Shape62);

Group20->addChild(HAnimHumanoid59);

//==============================
Scene17->addChild(Group20);

Viewpoint* Viewpoint63 = new Viewpoint();
Viewpoint63->setDEF(CString("ViewHelpText"));
Viewpoint63->setDescription(CString("Select text to see website"));
Viewpoint63->setPosition(new float[3]{0,0,12});
Scene17->addChild(Viewpoint63);

//Selectable Text design pattern has transparent Box and TouchSensor description as a tooltip
Anchor* Anchor64 = new Anchor();
Anchor64->setDescription(CString("DesignPatternsApparelMedicalSkinLayers.x3d explores potential apparel approaches"));
Anchor64->setParameter(new CString[1]{CString("target=blank")}, 1);
Anchor64->setUrl(new CString[1]{CString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/DesignPatternsApparelMedicalSkinLayersIndex.html")}, 1);
Shape* Shape65 = new Shape();
//TODO adjust Text string and Box size, then set Material transparency='1'
Text* Text66 = new Text();
Text66->setString(new CString[3]{CString("DesignPatternsApparelMedicalSkinLayers.x3d"), CString(""), CString("explores potential apparel approaches")}, 3);
CFontStyle* FontStyle67 = new CFontStyle();
FontStyle67->setFamily(new CString[1]{CString("SANS")}, 1);
FontStyle67->setJustify(new CString[2]{CString("MIDDLE"), CString("MIDDLE")}, 2);
FontStyle67->setSize(0.6);
FontStyle67->setStyle(CString("BOLD"));
Text66->setFontStyle(FontStyle67);

Shape65->setGeometry(Text66);

Appearance* Appearance68 = new Appearance();
Material* Material69 = new Material();
Material69->setDiffuseColor(new float[3]{0.9,0.9,0.9});
Appearance68->addChild(Material69);

Shape65->addChild(Appearance68);

Anchor64->addChild(Shape65);

Shape* Shape70 = new Shape();
//Author TODO: to adjust transparent Box as text-selection assist, set width and height to match size, then set transparency='1' to make invisible.
Box* Box71 = new Box();
Box71->setSize(new float[3]{11,2,0.001});
Shape70->setGeometry(Box71);

Appearance* Appearance72 = new Appearance();
Material* Material73 = new Material();
Material73->setTransparency(1);
Appearance72->addChild(Material73);

Shape70->addChild(Appearance72);

Anchor64->addChild(Shape70);

Scene17->addChild(Anchor64);

X3D0->setScene(Scene17);

}
