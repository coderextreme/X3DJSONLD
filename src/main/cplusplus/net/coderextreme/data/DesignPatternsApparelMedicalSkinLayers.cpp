/* delete next 5 lines for Visual Studio */
#define FALSE false
#define TRUE true
#define WINAPI
#define AFX_EXT_CLASS
#define EXPORT32
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/CylinderExample/CylinderExample/pch.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/CylinderExample/CylinderExample/framework.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/CylinderExample/include/XML_PARSER.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/CylinderExample/include/X3DLib.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/CylinderExample/include/Abstracts.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/CylinderExample/include/Concretes.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/CylinderExample/include/glMath.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/CylinderExample/include/glut.h"
int main(int argc, char ** argv) {
X3D* X3D0 = new X3D();
X3D0->setProfile("Immersive");
X3D0->setVersion("4.0");
head* head1 = new head();
meta* meta2 = new meta();
meta2->setName("title");
meta2->setContent("DesignPatternsApparelMedicalSkinLayers.x3d");
head1->addMeta(meta2);

meta* meta3 = new meta();
meta3->setName("description");
meta3->setContent("Design patterns for skin and apparel using HAnim2 standard in X3D4");
head1->addMeta(meta3);

meta* meta4 = new meta();
meta4->setName("creator");
meta4->setContent("Don Brutzman");
head1->addMeta(meta4);

meta* meta5 = new meta();
meta5->setName("creator");
meta5->setContent("Joe D. Williams");
head1->addMeta(meta5);

meta* meta6 = new meta();
meta6->setName("creator");
meta6->setContent("Dick Puk");
head1->addMeta(meta6);

meta* meta7 = new meta();
meta7->setName("created");
meta7->setContent("23 December 2022");
head1->addMeta(meta7);

meta* meta8 = new meta();
meta8->setName("modified");
meta8->setContent("2 July 2023");
head1->addMeta(meta8);

meta* meta9 = new meta();
meta9->setName("reference");
meta9->setContent("DesignPatternsApparelVariations.txt");
head1->addMeta(meta9);

meta* meta10 = new meta();
meta10->setName("reference");
meta10->setContent("HAnim2 Part 1, HAnim architecture, 4.3 Humanoid object https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#HumanoidObject");
head1->addMeta(meta10);

meta* meta11 = new meta();
meta11->setName("reference");
meta11->setContent("HAnim2 Part 1, HAnim architecture, E.4 Multiple humanoids per file https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/Guidelines.html#MultipleHumanoidsPerFile");
head1->addMeta(meta11);

meta* meta12 = new meta();
meta12->setName("reference");
meta12->setContent("X3D4 Architecture, clause 26 HAnim component, 26.3.2 HAnimHumanoid https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19775-1v4-DIS/Part01/components/hanim.html#HAnimHumanoid");
head1->addMeta(meta12);

meta* meta13 = new meta();
meta13->setName("warning");
meta13->setContent("Under development. This template example does not produce renderable HAnim models.");
head1->addMeta(meta13);

meta* meta14 = new meta();
meta14->setName("identifier");
meta14->setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/DesignPatternsApparelMedicalSkinLayers.x3d");
head1->addMeta(meta14);

meta* meta15 = new meta();
meta15->setName("generator");
meta15->setContent("X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit");
head1->addMeta(meta15);

meta* meta16 = new meta();
meta16->setName("license");
meta16->setContent("../license.html");
head1->addMeta(meta16);

X3D0->setHead(head1);

Scene* Scene17 = new Scene();
WorldInfo* WorldInfo18 = new WorldInfo();
WorldInfo18->setTitle("HAnimHumanoid skin design patterns for apparel, medical");
Scene17->addChild(WorldInfo18);

Background* Background19 = new Background();
Background19->setSkyColor(new float[3]{0,0.6,0.6});
Scene17->addChild(Background19);

Group* Group20 = new Group();
Group20->setDEF("MultipleHumanoids");
MetadataString* MetadataString21 = new MetadataString();
MetadataString21->setName("HAnimArchitecture");
MetadataString21->setReference("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/Guidelines.html#MultipleHumanoidsPerFile");
MetadataString21->setValue(new String[1]{"E.4 Multiple humanoids per file"}, 1);
Group20->setMetadata(MetadataString21);

//==============================
HAnimHumanoid* HAnimHumanoid22 = new HAnimHumanoid();
HAnimHumanoid22->setName("SimpleSkeleton");
HAnimHumanoid22->setDEF("a_SimpleSkeleton");
HAnimHumanoid22->setVersion("2.0");
HAnimJoint* HAnimJoint23 = new HAnimJoint();
HAnimJoint23->setName("humanoid_root");
HAnimSegment* HAnimSegment24 = new HAnimSegment();
HAnimSegment24->setName("sacrum");
Shape* Shape25 = new Shape();
Shape25->setDEF("JointVisualization");
HAnimSegment24->addChild(Shape25);

Shape* Shape26 = new Shape();
Shape26->setDEF("SegmentVisualization");
HAnimSegment24->addChild(Shape26);

HAnimSite* HAnimSite27 = new HAnimSite();
HAnimSite27->setName("feature01_tip");
HAnimSite27->setDEF("a_feature01_tip");
Shape* Shape28 = new Shape();
Shape28->setDEF("SiteVisualization");
HAnimSite27->addChild(Shape28);

HAnimSegment24->addChild(HAnimSite27);

HAnimJoint23->addChild(HAnimSegment24);

HAnimHumanoid22->setSkeleton(HAnimJoint23);

Group20->addChild(HAnimHumanoid22);

//==============================
HAnimHumanoid* HAnimHumanoid29 = new HAnimHumanoid();
HAnimHumanoid29->setName("SimpleSkeletonMesh");
HAnimHumanoid29->setDEF("b_SimpleSkeletonMesh");
HAnimHumanoid29->setVersion("2.0");
HAnimJoint* HAnimJoint30 = new HAnimJoint();
HAnimJoint30->setName("humanoid_root");
HAnimSegment* HAnimSegment31 = new HAnimSegment();
HAnimSegment31->setName("sacrum");
Shape* Shape32 = new Shape();
IndexedFaceSet* IndexedFaceSet33 = new IndexedFaceSet();
IndexedFaceSet33->setDEF("SegmentBoneMesh");
Shape32->setGeometry(IndexedFaceSet33);

HAnimSegment31->addChild(Shape32);

HAnimJoint30->addChild(HAnimSegment31);

HAnimHumanoid29->setSkeleton(HAnimJoint30);

Group20->addChild(HAnimHumanoid29);

//==============================
HAnimHumanoid* HAnimHumanoid34 = new HAnimHumanoid();
HAnimHumanoid34->setName("SkinIndexedGeometry");
HAnimHumanoid34->setDEF("c_SkinIndexedGeometry");
HAnimHumanoid34->setVersion("2.0");
HAnimJoint* HAnimJoint35 = new HAnimJoint();
HAnimJoint35->setName("humanoid_root");
HAnimSegment* HAnimSegment36 = new HAnimSegment();
HAnimSegment36->setName("sacrum");
HAnimJoint35->addChild(HAnimSegment36);

HAnimHumanoid34->setSkeleton(HAnimJoint35);

IndexedFaceSet* IndexedFaceSet37 = new IndexedFaceSet();
IndexedFaceSet37->setDEF("SkinMeshIFS");
HAnimHumanoid34->setSkin(IndexedFaceSet37);

Group20->addChild(HAnimHumanoid34);

//==============================
HAnimHumanoid* HAnimHumanoid38 = new HAnimHumanoid();
HAnimHumanoid38->setName("SkinShapeIndexedGeometry");
HAnimHumanoid38->setDEF("d_SkinShapeIndexedGeometry");
HAnimHumanoid38->setVersion("2.0");
HAnimJoint* HAnimJoint39 = new HAnimJoint();
HAnimJoint39->setName("humanoid_root");
HAnimSegment* HAnimSegment40 = new HAnimSegment();
HAnimSegment40->setName("sacrum");
HAnimJoint39->addChild(HAnimSegment40);

HAnimHumanoid38->setSkeleton(HAnimJoint39);

Shape* Shape41 = new Shape();
IndexedFaceSet* IndexedFaceSet42 = new IndexedFaceSet();
IndexedFaceSet42->setUSE("SkinMeshIFS");
Shape41->setGeometry(IndexedFaceSet42);

HAnimHumanoid38->setSkin(Shape41);

Group20->addChild(HAnimHumanoid38);

//==============================
HAnimHumanoid* HAnimHumanoid43 = new HAnimHumanoid();
HAnimHumanoid43->setName("SkinSwitchShapeIndexedGeometry");
HAnimHumanoid43->setDEF("e_SkinSwitchShapeIndexedGeometry");
HAnimHumanoid43->setVersion("2.0");
HAnimJoint* HAnimJoint44 = new HAnimJoint();
HAnimJoint44->setName("humanoid_root");
HAnimSegment* HAnimSegment45 = new HAnimSegment();
HAnimSegment45->setName("sacrum");
HAnimJoint44->addChild(HAnimSegment45);

HAnimHumanoid43->setSkeleton(HAnimJoint44);

//TODO show X3D4.0 addition of <Switch DEF='AlternativeSkins' containerField='skin'>
Shape* Shape46 = new Shape();
IndexedFaceSet* IndexedFaceSet47 = new IndexedFaceSet();
IndexedFaceSet47->setDEF("IndexedSkinMeshIFS");
Coordinate* Coordinate48 = new Coordinate();
Coordinate48->setDEF("SkinMeshCoordinate");
IndexedFaceSet47->setCoord(Coordinate48);

Shape46->setGeometry(IndexedFaceSet47);

HAnimHumanoid43->setSkin(Shape46);

Group20->addChild(HAnimHumanoid43);

//similarly for LOD
//==============================
HAnimHumanoid* HAnimHumanoid49 = new HAnimHumanoid();
HAnimHumanoid49->setName("SynthesizedSkinShapeIndexedTwoPartGeometry");
HAnimHumanoid49->setDEF("f_SynthesizedSkinShapeIndexedTwoPartGeometry");
HAnimHumanoid49->setVersion("2.0");
HAnimJoint* HAnimJoint50 = new HAnimJoint();
HAnimJoint50->setName("humanoid_root");
HAnimSegment* HAnimSegment51 = new HAnimSegment();
HAnimSegment51->setName("sacrum");
HAnimJoint50->addChild(HAnimSegment51);

HAnimHumanoid49->setSkeleton(HAnimJoint50);

Shape* Shape52 = new Shape();
IndexedFaceSet* IndexedFaceSet53 = new IndexedFaceSet();
IndexedFaceSet53->setDEF("TwoPartIndexedSkinMesh");
Coordinate* Coordinate54 = new Coordinate();
Coordinate54->setDEF("TwoPartSkinMesh");
IndexedFaceSet53->setCoord(Coordinate54);

Shape52->setGeometry(IndexedFaceSet53);

HAnimHumanoid49->setSkin(Shape52);

Group20->addChild(HAnimHumanoid49);

//==============================
HAnimHumanoid* HAnimHumanoid55 = new HAnimHumanoid();
HAnimHumanoid55->setName("ApparelSkinIndexedGeometryMultipleShapes");
HAnimHumanoid55->setDEF("g_ApparelSkinIndexedGeometryMultipleShapes");
HAnimHumanoid55->setVersion("2.0");
HAnimJoint* HAnimJoint56 = new HAnimJoint();
HAnimJoint56->setName("humanoid_root");
HAnimSegment* HAnimSegment57 = new HAnimSegment();
HAnimSegment57->setName("sacrum");
HAnimJoint56->addChild(HAnimSegment57);

HAnimHumanoid55->setSkeleton(HAnimJoint56);

Shape* Shape58 = new Shape();
HAnimHumanoid55->setSkin(Shape58);

//allow multiple Shape nodes with containerField='apparel', one for each layer of clothing
//TODO proposed for X3D4.1 <Shape containerField='apparel'/>
Group20->addChild(HAnimHumanoid55);

//==============================
HAnimHumanoid* HAnimHumanoid59 = new HAnimHumanoid();
HAnimHumanoid59->setName("AnatomySkinIndexedGeometryMultipleShapes");
HAnimHumanoid59->setDEF("h_AnatomySkinIndexedGeometryMultipleShapes");
HAnimHumanoid59->setVersion("2.0");
HAnimJoint* HAnimJoint60 = new HAnimJoint();
HAnimJoint60->setName("humanoid_root");
HAnimSegment* HAnimSegment61 = new HAnimSegment();
HAnimSegment61->setName("sacrum");
HAnimJoint60->addChild(HAnimSegment61);

HAnimHumanoid59->setSkeleton(HAnimJoint60);

//allow multiple Shape nodes with containerField='skin', one for each layer of skin
Shape* Shape62 = new Shape();
HAnimHumanoid59->setSkin(Shape62);

Group20->addChild(HAnimHumanoid59);

//==============================
Scene17->addChild(Group20);

Viewpoint* Viewpoint63 = new Viewpoint();
Viewpoint63->setDEF("ViewHelpText");
Viewpoint63->setDescription("Select text to see website");
Viewpoint63->setPosition(new float[3]{0,0,12});
Scene17->addChild(Viewpoint63);

//Selectable Text design pattern has transparent Box and TouchSensor description as a tooltip
Anchor* Anchor64 = new Anchor();
Anchor64->setDescription("DesignPatternsApparelMedicalSkinLayers.x3d explores potential apparel approaches");
Anchor64->setParameter(new String[1]{"target=blank"}, 1);
Anchor64->setUrl(new String[1]{"https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/DesignPatternsApparelMedicalSkinLayersIndex.html"}, 1);
Shape* Shape65 = new Shape();
//TODO adjust Text string and Box size, then set Material transparency='1'
Text* Text66 = new Text();
Text66->setString(new String[3]{"DesignPatternsApparelMedicalSkinLayers.x3d","","explores potential apparel approaches"}, 3);
FontStyle* FontStyle67 = new FontStyle();
FontStyle67->setFamily(new String[1]{"SANS"}, 1);
FontStyle67->setJustify(new String[2]{"MIDDLE","MIDDLE"}, 2);
FontStyle67->setSize(0.6);
FontStyle67->setStyle("BOLD");
Text66->setFontStyle(FontStyle67);

Shape65->setGeometry(Text66);

Appearance* Appearance68 = new Appearance();
Material* Material69 = new Material();
Material69->setDiffuseColor(new float[3]{0.9,0.9,0.9});
Appearance68->setMaterial(Material69);

Shape65->setAppearance(Appearance68);

Anchor64->addChild(Shape65);

Shape* Shape70 = new Shape();
//Author TODO: to adjust transparent Box as text-selection assist, set width and height to match size, then set transparency='1' to make invisible.
Box* Box71 = new Box();
Box71->setSize(new float[3]{11,2,0.001});
Shape70->setGeometry(Box71);

Appearance* Appearance72 = new Appearance();
Material* Material73 = new Material();
Material73->setTransparency(1);
Appearance72->setMaterial(Material73);

Shape70->setAppearance(Appearance72);

Anchor64->addChild(Shape70);

Scene17->addChild(Anchor64);

X3D0->setScene(Scene17);

X3D0->toXMLString();
}
