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
component* component2 = new component();
component2->setName("HAnim");
component2->setLevel(1);
head1->addComponent(component2);

meta* meta3 = new meta();
meta3->setName("title");
meta3->setContent("HAnimModelHandLeft.x3d");
head1->addMeta(meta3);

meta* meta4 = new meta();
meta4->setName("description");
meta4->setContent("Left hand, using high-fidelity definitions for HAnim version 2.0");
head1->addMeta(meta4);

meta* meta5 = new meta();
meta5->setName("creator");
meta5->setContent("Kwan-Hee YOO, Don Brutzman and Joe Williams");
head1->addMeta(meta5);

meta* meta6 = new meta();
meta6->setName("created");
meta6->setContent("26 January 2015");
head1->addMeta(meta6);

meta* meta7 = new meta();
meta7->setName("modified");
meta7->setContent("23 December 2021");
head1->addMeta(meta7);

meta* meta8 = new meta();
meta8->setName("TODO");
meta8->setContent("fix visible geometry for thumb and index finger, midcarpal_1 and midcarpal_2");
head1->addMeta(meta8);

meta* meta9 = new meta();
meta9->setName("Image");
meta9->setContent("HAnimModelHandRightSegmentVisualizationError.png");
head1->addMeta(meta9);

meta* meta10 = new meta();
meta10->setName("error");
meta10->setContent("not yet to scale, also relatively flat");
head1->addMeta(meta10);

meta* meta11 = new meta();
meta11->setName("warning");
meta11->setContent("TODO will X3D HAnim component add a new level to support LOA-4 functionality?");
head1->addMeta(meta11);

meta* meta12 = new meta();
meta12->setName("info");
meta12->setContent("TODO describe how to compute and apply offsets for center values whenever attaching this appendage to a body");
head1->addMeta(meta12);

meta* meta13 = new meta();
meta13->setName("reference");
meta13->setContent("https://www.web3d.org/working-groups/humanoid-animation-HAnim");
head1->addMeta(meta13);

meta* meta14 = new meta();
meta14->setName("reference");
meta14->setContent("https://www.web3d.org/documents/specifications/19774/V2.0");
head1->addMeta(meta14);

meta* meta15 = new meta();
meta15->setName("reference");
meta15->setContent("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#TheHands");
head1->addMeta(meta15);

meta* meta16 = new meta();
meta16->setName("reference");
meta16->setContent("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#f-HandJoints");
head1->addMeta(meta16);

meta* meta17 = new meta();
meta17->setName("reference");
meta17->setContent("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#Hierarchy4");
head1->addMeta(meta17);

meta* meta18 = new meta();
meta18->setName("reference");
meta18->setContent("https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19775-1v4-WD2/Part01/components/hanim.html");
head1->addMeta(meta18);

meta* meta19 = new meta();
meta19->setName("subject");
meta19->setContent("X3D HAnim humanoid animation");
head1->addMeta(meta19);

meta* meta20 = new meta();
meta20->setName("TODO");
meta20->setContent("Integrate and confirm Segment/Joint names, Viewpoints.");
head1->addMeta(meta20);

meta* meta21 = new meta();
meta21->setName("identifier");
meta21->setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelHandLeft.x3d");
head1->addMeta(meta21);

meta* meta22 = new meta();
meta22->setName("generator");
meta22->setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit");
head1->addMeta(meta22);

meta* meta23 = new meta();
meta23->setName("license");
meta23->setContent("../license.html");
head1->addMeta(meta23);

X3D0->setHead(head1);

Scene* Scene24 = new Scene();
WorldInfo* WorldInfo25 = new WorldInfo();
WorldInfo25->setTitle("HAnimModelHandLeft.x3d");
Scene24->addChild(WorldInfo25);

HAnimHumanoid* HAnimHumanoid26 = new HAnimHumanoid();
HAnimHumanoid26->setName("Hand_Left");
HAnimHumanoid26->setDEF("hanim_Hand_Left");
HAnimHumanoid26->setLoa(4);
HAnimHumanoid26->setVersion("2.0");
//original HAnimHumanoid info='\"authorName=Kwan-Hee YOO, Don Brutzman and Joe Williams\"'
MetadataSet* MetadataSet27 = new MetadataSet();
MetadataSet27->setName("HAnimHumanoid.info");
MetadataSet27->setReference("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid");
MetadataString* MetadataString28 = new MetadataString();
MetadataString28->setName("authorName");
MetadataString28->setValue(new String[1]{"Kwan-Hee YOO, Don Brutzman and Joe Williams"}, 1);
MetadataSet27->setValue(MetadataString28);

HAnimHumanoid26->setMetadata(MetadataSet27);

HAnimJoint* HAnimJoint29 = new HAnimJoint();
HAnimJoint29->setName("humanoid_root");
HAnimJoint29->setDEF("hanim_humanoid_root");
//Might consider putting a HAnimSegment here, but that doesn't help with re-use of this hand model
HAnimJoint* HAnimJoint30 = new HAnimJoint();
HAnimJoint30->setName("l_radiocarpal");
HAnimJoint30->setDEF("hanim_l_radiocarpal");
HAnimJoint30->setDescription("connection joint of hand to leg above");
HAnimSegment* HAnimSegment31 = new HAnimSegment();
HAnimSegment31->setName("l_carpal");
HAnimSegment31->setDEF("hanim_l_carpal");
Transform* Transform32 = new Transform();
Shape* Shape33 = new Shape();
Shape33->setDEF("HAnimJointShape");
Sphere* Sphere34 = new Sphere();
Sphere34->setRadius(0.025);
Shape33->setGeometry(Sphere34);

Appearance* Appearance35 = new Appearance();
Appearance35->setDEF("HAnimJointAppearanceBlue");
Material* Material36 = new Material();
Material36->setDiffuseColor(new float[3]{0,0,1});
Appearance35->setMaterial(Material36);

Shape33->setAppearance(Appearance35);

Transform32->addChild(Shape33);

HAnimSegment31->addChild(Transform32);

Shape* Shape37 = new Shape();
Appearance* Appearance38 = new Appearance();
Material* Material39 = new Material();
Material39->setEmissiveColor(new float[3]{1,1,1});
Appearance38->setMaterial(Material39);

Shape37->setAppearance(Appearance38);

IndexedLineSet* IndexedLineSet40 = new IndexedLineSet();
IndexedLineSet40->setDEF("RCToMC12");
IndexedLineSet40->setCoordIndex(new int[2]{0,1});
Coordinate* Coordinate41 = new Coordinate();
Coordinate41->setPoint(new float[6]{0,0,0,0.1,0.1,0});
IndexedLineSet40->setCoord(Coordinate41);

Shape37->setGeometry(IndexedLineSet40);

HAnimSegment31->addChild(Shape37);

Shape* Shape42 = new Shape();
Appearance* Appearance43 = new Appearance();
Material* Material44 = new Material();
Material44->setEmissiveColor(new float[3]{1,1,1});
Appearance43->setMaterial(Material44);

Shape42->setAppearance(Appearance43);

IndexedLineSet* IndexedLineSet45 = new IndexedLineSet();
IndexedLineSet45->setDEF("RCToMC3");
IndexedLineSet45->setCoordIndex(new int[2]{0,1});
Coordinate* Coordinate46 = new Coordinate();
Coordinate46->setPoint(new float[6]{0,0,0,0,0.07,0});
IndexedLineSet45->setCoord(Coordinate46);

Shape42->setGeometry(IndexedLineSet45);

HAnimSegment31->addChild(Shape42);

Shape* Shape47 = new Shape();
Appearance* Appearance48 = new Appearance();
Material* Material49 = new Material();
Material49->setEmissiveColor(new float[3]{1,1,1});
Appearance48->setMaterial(Material49);

Shape47->setAppearance(Appearance48);

IndexedLineSet* IndexedLineSet50 = new IndexedLineSet();
IndexedLineSet50->setDEF("RCToMC45");
IndexedLineSet50->setCoordIndex(new int[2]{0,1});
Coordinate* Coordinate51 = new Coordinate();
Coordinate51->setPoint(new float[6]{0,0,0,-0.1,0.1,0});
IndexedLineSet50->setCoord(Coordinate51);

Shape47->setGeometry(IndexedLineSet50);

HAnimSegment31->addChild(Shape47);

HAnimJoint30->addChild(HAnimSegment31);

//MC1
HAnimJoint* HAnimJoint52 = new HAnimJoint();
HAnimJoint52->setName("l_midcarpal_1");
HAnimJoint52->setDEF("hanim_l_midcarpal_1");
HAnimJoint52->setCenter(new float[3]{0.14,0.09,0});
HAnimSegment* HAnimSegment53 = new HAnimSegment();
HAnimSegment53->setName("l_trapezium");
HAnimSegment53->setDEF("hanim_l_trapezium");
Transform* Transform54 = new Transform();
Transform54->setTranslation(new float[3]{0.14,0.09,0});
Shape* Shape55 = new Shape();
Shape55->setDEF("HAnimNewJointShape");
Sphere* Sphere56 = new Sphere();
Sphere56->setRadius(0.025);
Shape55->setGeometry(Sphere56);

Appearance* Appearance57 = new Appearance();
Appearance57->setDEF("HAnimJointAppearanceRed");
Material* Material58 = new Material();
Material58->setDiffuseColor(new float[3]{1,0,0});
Appearance57->setMaterial(Material58);

Shape55->setAppearance(Appearance57);

Transform54->addChild(Shape55);

HAnimSegment53->addChild(Transform54);

Shape* Shape59 = new Shape();
Appearance* Appearance60 = new Appearance();
Material* Material61 = new Material();
Material61->setEmissiveColor(new float[3]{1,1,1});
Appearance60->setMaterial(Material61);

Shape59->setAppearance(Appearance60);

IndexedLineSet* IndexedLineSet62 = new IndexedLineSet();
IndexedLineSet62->setDEF("MC12toCMC1");
IndexedLineSet62->setCoordIndex(new int[2]{0,1});
Coordinate* Coordinate63 = new Coordinate();
Coordinate63->setPoint(new float[6]{0.1,0.1,0,0.2,0.15,0});
IndexedLineSet62->setCoord(Coordinate63);

Shape59->setGeometry(IndexedLineSet62);

HAnimSegment53->addChild(Shape59);

Shape* Shape64 = new Shape();
Appearance* Appearance65 = new Appearance();
Material* Material66 = new Material();
Material66->setEmissiveColor(new float[3]{1,1,1});
Appearance65->setMaterial(Material66);

Shape64->setAppearance(Appearance65);

IndexedLineSet* IndexedLineSet67 = new IndexedLineSet();
IndexedLineSet67->setDEF("MC1toCMC1");
IndexedLineSet67->setCoordIndex(new int[2]{0,1});
Coordinate* Coordinate68 = new Coordinate();
Coordinate68->setPoint(new float[6]{0.1,0.1,0,0.1,0.2,0});
IndexedLineSet67->setCoord(Coordinate68);

Shape64->setGeometry(IndexedLineSet67);

HAnimSegment53->addChild(Shape64);

HAnimJoint52->addChild(HAnimSegment53);

//thumb finger
HAnimJoint* HAnimJoint69 = new HAnimJoint();
HAnimJoint69->setName("l_carpometacarpal_1");
HAnimJoint69->setDEF("hanim_l_carpometacarpal_1");
HAnimJoint69->setCenter(new float[3]{0.2,0.15,0});
HAnimSegment* HAnimSegment70 = new HAnimSegment();
HAnimSegment70->setName("l_metacarpal_1");
HAnimSegment70->setDEF("hanim_l_metacarpal_1");
Transform* Transform71 = new Transform();
Transform71->setTranslation(new float[3]{0.2,0.15,0});
Shape* Shape72 = new Shape();
Shape72->setUSE("HAnimJointShape");
Transform71->addChild(Shape72);

HAnimSegment70->addChild(Transform71);

Shape* Shape73 = new Shape();
Appearance* Appearance74 = new Appearance();
Material* Material75 = new Material();
Material75->setEmissiveColor(new float[3]{1,1,1});
Appearance74->setMaterial(Material75);

Shape73->setAppearance(Appearance74);

IndexedLineSet* IndexedLineSet76 = new IndexedLineSet();
IndexedLineSet76->setDEF("CMC1toMCP1");
IndexedLineSet76->setCoordIndex(new int[2]{0,1});
Coordinate* Coordinate77 = new Coordinate();
Coordinate77->setPoint(new float[6]{0.2,0.15,0,0.3,0.3,0});
IndexedLineSet76->setCoord(Coordinate77);

Shape73->setGeometry(IndexedLineSet76);

HAnimSegment70->addChild(Shape73);

HAnimJoint69->addChild(HAnimSegment70);

HAnimJoint* HAnimJoint78 = new HAnimJoint();
HAnimJoint78->setName("l_metacarpophalangeal_1");
HAnimJoint78->setDEF("hanim_l_metacarpophalangeal_1");
HAnimJoint78->setCenter(new float[3]{0.3,0.3,0});
HAnimSegment* HAnimSegment79 = new HAnimSegment();
HAnimSegment79->setName("l_carpal_proximal_phalanx_1");
HAnimSegment79->setDEF("hanim_l_carpal_proximal_phalanx_1");
Transform* Transform80 = new Transform();
Transform80->setTranslation(new float[3]{0.3,0.3,0});
Shape* Shape81 = new Shape();
Shape81->setUSE("HAnimJointShape");
Transform80->addChild(Shape81);

HAnimSegment79->addChild(Transform80);

Shape* Shape82 = new Shape();
Appearance* Appearance83 = new Appearance();
Material* Material84 = new Material();
Material84->setEmissiveColor(new float[3]{1,1,1});
Appearance83->setMaterial(Material84);

Shape82->setAppearance(Appearance83);

IndexedLineSet* IndexedLineSet85 = new IndexedLineSet();
IndexedLineSet85->setDEF("MCP11toIP1");
IndexedLineSet85->setCoordIndex(new int[2]{0,1});
Coordinate* Coordinate86 = new Coordinate();
Coordinate86->setPoint(new float[6]{0.3,0.3,0,0.35,0.4,0});
IndexedLineSet85->setCoord(Coordinate86);

Shape82->setGeometry(IndexedLineSet85);

HAnimSegment79->addChild(Shape82);

HAnimJoint78->addChild(HAnimSegment79);

HAnimJoint* HAnimJoint87 = new HAnimJoint();
HAnimJoint87->setName("l_carpal_interphalangeal_1");
HAnimJoint87->setDEF("hanim_l_carpal_interphalangeal_1");
HAnimJoint87->setCenter(new float[3]{0.35,0.4,0});
HAnimSegment* HAnimSegment88 = new HAnimSegment();
HAnimSegment88->setName("l_carpal_distal_phalanx_1");
HAnimSegment88->setDEF("hanim_l_carpal_distal_phalanx_1");
Transform* Transform89 = new Transform();
Transform89->setTranslation(new float[3]{0.35,0.4,0});
Shape* Shape90 = new Shape();
Shape90->setUSE("HAnimJointShape");
Transform89->addChild(Shape90);

HAnimSegment88->addChild(Transform89);

Shape* Shape91 = new Shape();
Appearance* Appearance92 = new Appearance();
Material* Material93 = new Material();
Material93->setEmissiveColor(new float[3]{1,1,1});
Appearance92->setMaterial(Material93);

Shape91->setAppearance(Appearance92);

IndexedLineSet* IndexedLineSet94 = new IndexedLineSet();
IndexedLineSet94->setDEF("fingertip_l_carpal_interphalangeal_1");
IndexedLineSet94->setCoordIndex(new int[2]{0,1});
Coordinate* Coordinate95 = new Coordinate();
Coordinate95->setPoint(new float[6]{0.35,0.4,0,0.36,0.45,0});
IndexedLineSet94->setCoord(Coordinate95);

Shape91->setGeometry(IndexedLineSet94);

HAnimSegment88->addChild(Shape91);

HAnimJoint87->addChild(HAnimSegment88);

HAnimJoint78->addChild(HAnimJoint87);

HAnimJoint69->addChild(HAnimJoint78);

HAnimJoint52->addChild(HAnimJoint69);

HAnimJoint30->addChild(HAnimJoint52);

//MC2
HAnimJoint* HAnimJoint96 = new HAnimJoint();
HAnimJoint96->setName("l_midcarpal_2");
HAnimJoint96->setDEF("hanim_l_midcarpal_2");
HAnimJoint96->setCenter(new float[3]{0.07,0.07,0});
HAnimSegment* HAnimSegment97 = new HAnimSegment();
HAnimSegment97->setName("l_trapezoid");
HAnimSegment97->setDEF("hanim_l_trapezoid");
Transform* Transform98 = new Transform();
Transform98->setTranslation(new float[3]{0.07,0.07,0});
Shape* Shape99 = new Shape();
Shape99->setUSE("HAnimNewJointShape");
Transform98->addChild(Shape99);

HAnimSegment97->addChild(Transform98);

Shape* Shape100 = new Shape();
Appearance* Appearance101 = new Appearance();
Material* Material102 = new Material();
Material102->setEmissiveColor(new float[3]{1,1,1});
Appearance101->setMaterial(Material102);

Shape100->setAppearance(Appearance101);

IndexedLineSet* IndexedLineSet103 = new IndexedLineSet();
IndexedLineSet103->setDEF("MC2toCMC2");
IndexedLineSet103->setCoordIndex(new int[2]{0,1});
Coordinate* Coordinate104 = new Coordinate();
Coordinate104->setPoint(new float[6]{-0.1,0.1,0,-0.1,0.2,0});
IndexedLineSet103->setCoord(Coordinate104);

Shape100->setGeometry(IndexedLineSet103);

HAnimSegment97->addChild(Shape100);

HAnimJoint96->addChild(HAnimSegment97);

//index finger
HAnimJoint* HAnimJoint105 = new HAnimJoint();
HAnimJoint105->setName("l_carpometacarpal_2");
HAnimJoint105->setDEF("hanim_l_carpometacarpal_2");
HAnimJoint105->setCenter(new float[3]{0.1,0.2,0});
HAnimSegment* HAnimSegment106 = new HAnimSegment();
HAnimSegment106->setName("l_metacarpal_2");
HAnimSegment106->setDEF("hanim_l_metacarpal_2");
Transform* Transform107 = new Transform();
Transform107->setTranslation(new float[3]{0.1,0.2,0});
Shape* Shape108 = new Shape();
Shape108->setUSE("HAnimJointShape");
Transform107->addChild(Shape108);

HAnimSegment106->addChild(Transform107);

Shape* Shape109 = new Shape();
Appearance* Appearance110 = new Appearance();
Material* Material111 = new Material();
Material111->setEmissiveColor(new float[3]{1,1,1});
Appearance110->setMaterial(Material111);

Shape109->setAppearance(Appearance110);

IndexedLineSet* IndexedLineSet112 = new IndexedLineSet();
IndexedLineSet112->setDEF("CMC2toMCP2");
IndexedLineSet112->setCoordIndex(new int[2]{0,1});
Coordinate* Coordinate113 = new Coordinate();
Coordinate113->setPoint(new float[6]{0.1,0.2,0,0.15,0.5,0});
IndexedLineSet112->setCoord(Coordinate113);

Shape109->setGeometry(IndexedLineSet112);

HAnimSegment106->addChild(Shape109);

HAnimJoint105->addChild(HAnimSegment106);

HAnimJoint* HAnimJoint114 = new HAnimJoint();
HAnimJoint114->setName("l_metacarpophalangeal_2");
HAnimJoint114->setDEF("hanim_l_metacarpophalangeal_2");
HAnimJoint114->setCenter(new float[3]{0.15,0.5,0});
HAnimSegment* HAnimSegment115 = new HAnimSegment();
HAnimSegment115->setName("l_carpal_proximal_phalanx_2");
HAnimSegment115->setDEF("hanim_l_carpal_proximal_phalanx_2");
Transform* Transform116 = new Transform();
Transform116->setTranslation(new float[3]{0.15,0.5,0});
Shape* Shape117 = new Shape();
Shape117->setUSE("HAnimJointShape");
Transform116->addChild(Shape117);

HAnimSegment115->addChild(Transform116);

Shape* Shape118 = new Shape();
Appearance* Appearance119 = new Appearance();
Material* Material120 = new Material();
Material120->setEmissiveColor(new float[3]{1,1,1});
Appearance119->setMaterial(Material120);

Shape118->setAppearance(Appearance119);

IndexedLineSet* IndexedLineSet121 = new IndexedLineSet();
IndexedLineSet121->setDEF("MCP2toPIP2");
IndexedLineSet121->setCoordIndex(new int[2]{0,1});
Coordinate* Coordinate122 = new Coordinate();
Coordinate122->setPoint(new float[6]{0.15,0.5,0,0.2,0.7,0});
IndexedLineSet121->setCoord(Coordinate122);

Shape118->setGeometry(IndexedLineSet121);

HAnimSegment115->addChild(Shape118);

HAnimJoint114->addChild(HAnimSegment115);

HAnimJoint* HAnimJoint123 = new HAnimJoint();
HAnimJoint123->setName("l_carpal_proximal_interphalangeal_2");
HAnimJoint123->setDEF("hanim_l_carpal_proximal_interphalangeal_2");
HAnimJoint123->setCenter(new float[3]{0.2,0.7,0});
HAnimSegment* HAnimSegment124 = new HAnimSegment();
HAnimSegment124->setName("l_carpal_middle_phalanx_2");
HAnimSegment124->setDEF("hanim_l_carpal_middle_phalanx_2");
Transform* Transform125 = new Transform();
Transform125->setTranslation(new float[3]{0.2,0.7,0});
Shape* Shape126 = new Shape();
Shape126->setUSE("HAnimJointShape");
Transform125->addChild(Shape126);

HAnimSegment124->addChild(Transform125);

Shape* Shape127 = new Shape();
Appearance* Appearance128 = new Appearance();
Material* Material129 = new Material();
Material129->setEmissiveColor(new float[3]{1,1,1});
Appearance128->setMaterial(Material129);

Shape127->setAppearance(Appearance128);

IndexedLineSet* IndexedLineSet130 = new IndexedLineSet();
IndexedLineSet130->setDEF("PIP2toDIP2");
IndexedLineSet130->setCoordIndex(new int[2]{0,1});
Coordinate* Coordinate131 = new Coordinate();
Coordinate131->setPoint(new float[6]{0.2,0.7,0,0.24,0.87,0});
IndexedLineSet130->setCoord(Coordinate131);

Shape127->setGeometry(IndexedLineSet130);

HAnimSegment124->addChild(Shape127);

HAnimJoint123->addChild(HAnimSegment124);

HAnimJoint* HAnimJoint132 = new HAnimJoint();
HAnimJoint132->setName("l_carpal_distal_interphalangeal_2");
HAnimJoint132->setDEF("hanim_l_carpal_distal_interphalangeal_2");
HAnimJoint132->setCenter(new float[3]{0.24,0.87,0});
HAnimSegment* HAnimSegment133 = new HAnimSegment();
HAnimSegment133->setName("l_carpal_distal_phalanx_2");
HAnimSegment133->setDEF("hanim_l_carpal_distal_phalanx_2");
Transform* Transform134 = new Transform();
Transform134->setTranslation(new float[3]{0.24,0.87,0});
Shape* Shape135 = new Shape();
Shape135->setUSE("HAnimJointShape");
Transform134->addChild(Shape135);

HAnimSegment133->addChild(Transform134);

Shape* Shape136 = new Shape();
Appearance* Appearance137 = new Appearance();
Material* Material138 = new Material();
Material138->setEmissiveColor(new float[3]{1,1,1});
Appearance137->setMaterial(Material138);

Shape136->setAppearance(Appearance137);

IndexedLineSet* IndexedLineSet139 = new IndexedLineSet();
IndexedLineSet139->setDEF("fingertip_l_carpal_distal_interphalangeal_2");
IndexedLineSet139->setCoordIndex(new int[2]{0,1});
Coordinate* Coordinate140 = new Coordinate();
Coordinate140->setPoint(new float[6]{0.24,0.87,0,0.26,0.93,0});
IndexedLineSet139->setCoord(Coordinate140);

Shape136->setGeometry(IndexedLineSet139);

HAnimSegment133->addChild(Shape136);

HAnimJoint132->addChild(HAnimSegment133);

HAnimJoint123->addChild(HAnimJoint132);

HAnimJoint114->addChild(HAnimJoint123);

HAnimJoint105->addChild(HAnimJoint114);

HAnimJoint96->addChild(HAnimJoint105);

HAnimJoint30->addChild(HAnimJoint96);

//MC3
HAnimJoint* HAnimJoint141 = new HAnimJoint();
HAnimJoint141->setName("l_midcarpal_3");
HAnimJoint141->setDEF("hanim_l_midcarpal_3");
HAnimJoint141->setCenter(new float[3]{0,0.07,0});
HAnimSegment* HAnimSegment142 = new HAnimSegment();
HAnimSegment142->setName("l_capitate");
HAnimSegment142->setDEF("hanim_l_capitate");
Transform* Transform143 = new Transform();
Transform143->setTranslation(new float[3]{0,0.07,0});
Shape* Shape144 = new Shape();
Shape144->setUSE("HAnimNewJointShape");
Transform143->addChild(Shape144);

HAnimSegment142->addChild(Transform143);

Shape* Shape145 = new Shape();
Appearance* Appearance146 = new Appearance();
Material* Material147 = new Material();
Material147->setEmissiveColor(new float[3]{1,1,1});
Appearance146->setMaterial(Material147);

Shape145->setAppearance(Appearance146);

IndexedLineSet* IndexedLineSet148 = new IndexedLineSet();
IndexedLineSet148->setDEF("MC3toCMC3");
IndexedLineSet148->setCoordIndex(new int[2]{0,1});
Coordinate* Coordinate149 = new Coordinate();
Coordinate149->setPoint(new float[6]{0,0.07,0,0,0.2,0});
IndexedLineSet148->setCoord(Coordinate149);

Shape145->setGeometry(IndexedLineSet148);

HAnimSegment142->addChild(Shape145);

HAnimJoint141->addChild(HAnimSegment142);

//Middle fingle
HAnimJoint* HAnimJoint150 = new HAnimJoint();
HAnimJoint150->setName("l_carpometacarpal_3");
HAnimJoint150->setDEF("hanim_l_carpometacarpal_3");
HAnimJoint150->setCenter(new float[3]{0,0.2,0});
HAnimSegment* HAnimSegment151 = new HAnimSegment();
HAnimSegment151->setName("l_metacarpal_3");
HAnimSegment151->setDEF("hanim_l_metacarpal_3");
Transform* Transform152 = new Transform();
Transform152->setTranslation(new float[3]{0,0.2,0});
Shape* Shape153 = new Shape();
Shape153->setUSE("HAnimJointShape");
Transform152->addChild(Shape153);

HAnimSegment151->addChild(Transform152);

Shape* Shape154 = new Shape();
Appearance* Appearance155 = new Appearance();
Material* Material156 = new Material();
Material156->setEmissiveColor(new float[3]{1,1,1});
Appearance155->setMaterial(Material156);

Shape154->setAppearance(Appearance155);

IndexedLineSet* IndexedLineSet157 = new IndexedLineSet();
IndexedLineSet157->setDEF("CMC3toMCP3");
IndexedLineSet157->setCoordIndex(new int[2]{0,1});
Coordinate* Coordinate158 = new Coordinate();
Coordinate158->setPoint(new float[6]{0,0.2,0,0.03,0.5,0});
IndexedLineSet157->setCoord(Coordinate158);

Shape154->setGeometry(IndexedLineSet157);

HAnimSegment151->addChild(Shape154);

HAnimJoint150->addChild(HAnimSegment151);

HAnimJoint* HAnimJoint159 = new HAnimJoint();
HAnimJoint159->setName("l_metacarpophalangeal_3");
HAnimJoint159->setDEF("hanim_l_metacarpophalangeal_3");
HAnimJoint159->setCenter(new float[3]{0.03,0.5,0});
HAnimSegment* HAnimSegment160 = new HAnimSegment();
HAnimSegment160->setName("l_carpal_proximal_phalanx_3");
HAnimSegment160->setDEF("hanim_l_carpal_proximal_phalanx_3");
Transform* Transform161 = new Transform();
Transform161->setTranslation(new float[3]{0.03,0.5,0});
Shape* Shape162 = new Shape();
Shape162->setUSE("HAnimJointShape");
Transform161->addChild(Shape162);

HAnimSegment160->addChild(Transform161);

Shape* Shape163 = new Shape();
Appearance* Appearance164 = new Appearance();
Material* Material165 = new Material();
Material165->setEmissiveColor(new float[3]{1,1,1});
Appearance164->setMaterial(Material165);

Shape163->setAppearance(Appearance164);

IndexedLineSet* IndexedLineSet166 = new IndexedLineSet();
IndexedLineSet166->setDEF("MCP3toPIP3");
IndexedLineSet166->setCoordIndex(new int[2]{0,1});
Coordinate* Coordinate167 = new Coordinate();
Coordinate167->setPoint(new float[6]{0.03,0.5,0,0.05,0.75,0});
IndexedLineSet166->setCoord(Coordinate167);

Shape163->setGeometry(IndexedLineSet166);

HAnimSegment160->addChild(Shape163);

HAnimJoint159->addChild(HAnimSegment160);

HAnimJoint* HAnimJoint168 = new HAnimJoint();
HAnimJoint168->setName("l_carpal_proximal_interphalangeal_3");
HAnimJoint168->setDEF("hanim_l_carpal_proximal_interphalangeal_3");
HAnimJoint168->setCenter(new float[3]{0.05,0.75,0});
HAnimSegment* HAnimSegment169 = new HAnimSegment();
HAnimSegment169->setName("l_carpal_middle_phalanx_3");
HAnimSegment169->setDEF("hanim_l_carpal_middle_phalanx_3");
Transform* Transform170 = new Transform();
Transform170->setTranslation(new float[3]{0.05,0.75,0});
Shape* Shape171 = new Shape();
Shape171->setUSE("HAnimJointShape");
Transform170->addChild(Shape171);

HAnimSegment169->addChild(Transform170);

Shape* Shape172 = new Shape();
Appearance* Appearance173 = new Appearance();
Material* Material174 = new Material();
Material174->setEmissiveColor(new float[3]{1,1,1});
Appearance173->setMaterial(Material174);

Shape172->setAppearance(Appearance173);

IndexedLineSet* IndexedLineSet175 = new IndexedLineSet();
IndexedLineSet175->setDEF("PIP3toDIP3");
IndexedLineSet175->setCoordIndex(new int[2]{0,1});
Coordinate* Coordinate176 = new Coordinate();
Coordinate176->setPoint(new float[6]{0.05,0.75,0,0.08,0.96,0});
IndexedLineSet175->setCoord(Coordinate176);

Shape172->setGeometry(IndexedLineSet175);

HAnimSegment169->addChild(Shape172);

HAnimJoint168->addChild(HAnimSegment169);

HAnimJoint* HAnimJoint177 = new HAnimJoint();
HAnimJoint177->setName("l_carpal_distal_interphalangeal_3");
HAnimJoint177->setDEF("hanim_l_carpal_distal_interphalangeal_3");
HAnimJoint177->setCenter(new float[3]{0.08,0.96,0});
HAnimSegment* HAnimSegment178 = new HAnimSegment();
HAnimSegment178->setName("l_carpal_distal_phalanx_3");
HAnimSegment178->setDEF("hanim_l_carpal_distal_phalanx_3");
Transform* Transform179 = new Transform();
Transform179->setTranslation(new float[3]{0.08,0.96,0});
Shape* Shape180 = new Shape();
Shape180->setUSE("HAnimJointShape");
Transform179->addChild(Shape180);

HAnimSegment178->addChild(Transform179);

Shape* Shape181 = new Shape();
Appearance* Appearance182 = new Appearance();
Material* Material183 = new Material();
Material183->setEmissiveColor(new float[3]{1,1,1});
Appearance182->setMaterial(Material183);

Shape181->setAppearance(Appearance182);

IndexedLineSet* IndexedLineSet184 = new IndexedLineSet();
IndexedLineSet184->setDEF("fingertip_l_carpal_distal_interphalangeal_3");
IndexedLineSet184->setCoordIndex(new int[2]{0,1});
Coordinate* Coordinate185 = new Coordinate();
Coordinate185->setPoint(new float[6]{0.08,0.96,0,0.09,1.05,0});
IndexedLineSet184->setCoord(Coordinate185);

Shape181->setGeometry(IndexedLineSet184);

HAnimSegment178->addChild(Shape181);

HAnimJoint177->addChild(HAnimSegment178);

HAnimJoint168->addChild(HAnimJoint177);

HAnimJoint159->addChild(HAnimJoint168);

HAnimJoint150->addChild(HAnimJoint159);

HAnimJoint141->addChild(HAnimJoint150);

HAnimJoint30->addChild(HAnimJoint141);

//MC45
HAnimJoint* HAnimJoint186 = new HAnimJoint();
HAnimJoint186->setName("l_midcarpal_4_5");
HAnimJoint186->setDEF("hanim_l_midcarpal_4_5");
HAnimJoint186->setCenter(new float[3]{-0.1,0.1,0});
HAnimSegment* HAnimSegment187 = new HAnimSegment();
HAnimSegment187->setName("l_hamate");
HAnimSegment187->setDEF("hanim_l_hamate");
Transform* Transform188 = new Transform();
Transform188->setTranslation(new float[3]{-0.1,0.1,0});
Shape* Shape189 = new Shape();
Shape189->setUSE("HAnimNewJointShape");
Transform188->addChild(Shape189);

HAnimSegment187->addChild(Transform188);

Shape* Shape190 = new Shape();
Appearance* Appearance191 = new Appearance();
Material* Material192 = new Material();
Material192->setEmissiveColor(new float[3]{1,1,1});
Appearance191->setMaterial(Material192);

Shape190->setAppearance(Appearance191);

IndexedLineSet* IndexedLineSet193 = new IndexedLineSet();
IndexedLineSet193->setDEF("MC45toCMC4");
IndexedLineSet193->setCoordIndex(new int[2]{0,1});
Coordinate* Coordinate194 = new Coordinate();
Coordinate194->setPoint(new float[6]{-0.1,0.1,0,-0.1,0.2,0});
IndexedLineSet193->setCoord(Coordinate194);

Shape190->setGeometry(IndexedLineSet193);

HAnimSegment187->addChild(Shape190);

Shape* Shape195 = new Shape();
Appearance* Appearance196 = new Appearance();
Material* Material197 = new Material();
Material197->setEmissiveColor(new float[3]{1,1,1});
Appearance196->setMaterial(Material197);

Shape195->setAppearance(Appearance196);

IndexedLineSet* IndexedLineSet198 = new IndexedLineSet();
IndexedLineSet198->setDEF("MC45toCMC5");
IndexedLineSet198->setCoordIndex(new int[2]{0,1});
Coordinate* Coordinate199 = new Coordinate();
Coordinate199->setPoint(new float[6]{-0.1,0.1,0,-0.15,0.17,0});
IndexedLineSet198->setCoord(Coordinate199);

Shape195->setGeometry(IndexedLineSet198);

HAnimSegment187->addChild(Shape195);

HAnimJoint186->addChild(HAnimSegment187);

//ring finger
HAnimJoint* HAnimJoint200 = new HAnimJoint();
HAnimJoint200->setName("l_carpometacarpal_4");
HAnimJoint200->setDEF("hanim_l_carpometacarpal_4");
HAnimJoint200->setCenter(new float[3]{-0.1,0.2,0});
HAnimSegment* HAnimSegment201 = new HAnimSegment();
HAnimSegment201->setName("l_metacarpal_4");
HAnimSegment201->setDEF("hanim_l_metacarpal_4");
Transform* Transform202 = new Transform();
Transform202->setTranslation(new float[3]{-0.1,0.2,0});
Shape* Shape203 = new Shape();
Shape203->setUSE("HAnimJointShape");
Transform202->addChild(Shape203);

HAnimSegment201->addChild(Transform202);

Shape* Shape204 = new Shape();
Appearance* Appearance205 = new Appearance();
Material* Material206 = new Material();
Material206->setEmissiveColor(new float[3]{1,1,1});
Appearance205->setMaterial(Material206);

Shape204->setAppearance(Appearance205);

IndexedLineSet* IndexedLineSet207 = new IndexedLineSet();
IndexedLineSet207->setDEF("CMC4toMCP4");
IndexedLineSet207->setCoordIndex(new int[2]{0,1});
Coordinate* Coordinate208 = new Coordinate();
Coordinate208->setPoint(new float[6]{-0.1,0.2,0,-0.1,0.47,0});
IndexedLineSet207->setCoord(Coordinate208);

Shape204->setGeometry(IndexedLineSet207);

HAnimSegment201->addChild(Shape204);

HAnimJoint200->addChild(HAnimSegment201);

HAnimJoint* HAnimJoint209 = new HAnimJoint();
HAnimJoint209->setName("l_metacarpophalangeal_4");
HAnimJoint209->setDEF("hanim_l_metacarpophalangeal_4");
HAnimJoint209->setCenter(new float[3]{-0.1,0.47,0});
HAnimSegment* HAnimSegment210 = new HAnimSegment();
HAnimSegment210->setName("l_carpal_proximal_phalanx_4");
HAnimSegment210->setDEF("hanim_l_carpal_proximal_phalanx_4");
Transform* Transform211 = new Transform();
Transform211->setTranslation(new float[3]{-0.1,0.47,0});
Shape* Shape212 = new Shape();
Shape212->setUSE("HAnimJointShape");
Transform211->addChild(Shape212);

HAnimSegment210->addChild(Transform211);

Shape* Shape213 = new Shape();
Appearance* Appearance214 = new Appearance();
Material* Material215 = new Material();
Material215->setEmissiveColor(new float[3]{1,1,1});
Appearance214->setMaterial(Material215);

Shape213->setAppearance(Appearance214);

IndexedLineSet* IndexedLineSet216 = new IndexedLineSet();
IndexedLineSet216->setDEF("MCP4toPIP4");
IndexedLineSet216->setCoordIndex(new int[2]{0,1});
Coordinate* Coordinate217 = new Coordinate();
Coordinate217->setPoint(new float[6]{-0.1,0.47,0,-0.1,0.7,0});
IndexedLineSet216->setCoord(Coordinate217);

Shape213->setGeometry(IndexedLineSet216);

HAnimSegment210->addChild(Shape213);

HAnimJoint209->addChild(HAnimSegment210);

HAnimJoint* HAnimJoint218 = new HAnimJoint();
HAnimJoint218->setName("l_carpal_proximal_interphalangeal_4");
HAnimJoint218->setDEF("hanim_l_carpal_proximal_interphalangeal_4");
HAnimJoint218->setCenter(new float[3]{-0.1,0.7,0});
HAnimSegment* HAnimSegment219 = new HAnimSegment();
HAnimSegment219->setName("l_carpal_middle_phalanx_4");
HAnimSegment219->setDEF("hanim_l_carpal_middle_phalanx_4");
Transform* Transform220 = new Transform();
Transform220->setTranslation(new float[3]{-0.1,0.7,0});
Shape* Shape221 = new Shape();
Shape221->setUSE("HAnimJointShape");
Transform220->addChild(Shape221);

HAnimSegment219->addChild(Transform220);

Shape* Shape222 = new Shape();
Appearance* Appearance223 = new Appearance();
Material* Material224 = new Material();
Material224->setEmissiveColor(new float[3]{1,1,1});
Appearance223->setMaterial(Material224);

Shape222->setAppearance(Appearance223);

IndexedLineSet* IndexedLineSet225 = new IndexedLineSet();
IndexedLineSet225->setDEF("PIP4toDIP4");
IndexedLineSet225->setCoordIndex(new int[2]{0,1});
Coordinate* Coordinate226 = new Coordinate();
Coordinate226->setPoint(new float[6]{-0.1,0.7,0,-0.1,0.93,0});
IndexedLineSet225->setCoord(Coordinate226);

Shape222->setGeometry(IndexedLineSet225);

HAnimSegment219->addChild(Shape222);

HAnimJoint218->addChild(HAnimSegment219);

HAnimJoint* HAnimJoint227 = new HAnimJoint();
HAnimJoint227->setName("l_carpal_distal_interphalangeal_4");
HAnimJoint227->setDEF("hanim_l_carpal_distal_interphalangeal_4");
HAnimJoint227->setCenter(new float[3]{-0.1,0.93,0});
HAnimSegment* HAnimSegment228 = new HAnimSegment();
HAnimSegment228->setName("l_carpal_distal_phalanx_4");
HAnimSegment228->setDEF("hanim_l_carpal_distal_phalanx_4");
Transform* Transform229 = new Transform();
Transform229->setTranslation(new float[3]{-0.1,0.93,0});
Shape* Shape230 = new Shape();
Shape230->setUSE("HAnimJointShape");
Transform229->addChild(Shape230);

HAnimSegment228->addChild(Transform229);

Shape* Shape231 = new Shape();
Appearance* Appearance232 = new Appearance();
Material* Material233 = new Material();
Material233->setEmissiveColor(new float[3]{1,1,1});
Appearance232->setMaterial(Material233);

Shape231->setAppearance(Appearance232);

IndexedLineSet* IndexedLineSet234 = new IndexedLineSet();
IndexedLineSet234->setDEF("fingertip_l_carpal_distal_interphalangeal_4");
IndexedLineSet234->setCoordIndex(new int[2]{0,1});
Coordinate* Coordinate235 = new Coordinate();
Coordinate235->setPoint(new float[6]{-0.1,0.93,0,-0.1,1,0});
IndexedLineSet234->setCoord(Coordinate235);

Shape231->setGeometry(IndexedLineSet234);

HAnimSegment228->addChild(Shape231);

HAnimJoint227->addChild(HAnimSegment228);

HAnimJoint218->addChild(HAnimJoint227);

HAnimJoint209->addChild(HAnimJoint218);

HAnimJoint200->addChild(HAnimJoint209);

HAnimJoint186->addChild(HAnimJoint200);

//pinky finger
HAnimJoint* HAnimJoint236 = new HAnimJoint();
HAnimJoint236->setName("l_carpometacarpal_5");
HAnimJoint236->setDEF("hanim_l_carpometacarpal_5");
HAnimJoint236->setCenter(new float[3]{-0.15,0.17,0});
HAnimSegment* HAnimSegment237 = new HAnimSegment();
HAnimSegment237->setName("l_metacarpal_5");
HAnimSegment237->setDEF("hanim_l_metacarpal_5");
Transform* Transform238 = new Transform();
Transform238->setTranslation(new float[3]{-0.15,0.17,0});
Shape* Shape239 = new Shape();
Shape239->setUSE("HAnimJointShape");
Transform238->addChild(Shape239);

HAnimSegment237->addChild(Transform238);

Shape* Shape240 = new Shape();
Appearance* Appearance241 = new Appearance();
Material* Material242 = new Material();
Material242->setEmissiveColor(new float[3]{1,1,1});
Appearance241->setMaterial(Material242);

Shape240->setAppearance(Appearance241);

IndexedLineSet* IndexedLineSet243 = new IndexedLineSet();
IndexedLineSet243->setDEF("CMC5toMCP5");
IndexedLineSet243->setCoordIndex(new int[2]{0,1});
Coordinate* Coordinate244 = new Coordinate();
Coordinate244->setPoint(new float[6]{-0.15,0.17,0,-0.2,0.4,0});
IndexedLineSet243->setCoord(Coordinate244);

Shape240->setGeometry(IndexedLineSet243);

HAnimSegment237->addChild(Shape240);

HAnimJoint236->addChild(HAnimSegment237);

HAnimJoint* HAnimJoint245 = new HAnimJoint();
HAnimJoint245->setName("l_metacarpophalangeal_5");
HAnimJoint245->setDEF("hanim_l_metacarpophalangeal_5");
HAnimJoint245->setCenter(new float[3]{-0.2,0.4,0});
HAnimSegment* HAnimSegment246 = new HAnimSegment();
HAnimSegment246->setName("l_carpal_proximal_phalanx_5");
HAnimSegment246->setDEF("hanim_l_carpal_proximal_phalanx_5");
Transform* Transform247 = new Transform();
Transform247->setTranslation(new float[3]{-0.2,0.4,0});
Shape* Shape248 = new Shape();
Shape248->setUSE("HAnimJointShape");
Transform247->addChild(Shape248);

HAnimSegment246->addChild(Transform247);

Shape* Shape249 = new Shape();
Appearance* Appearance250 = new Appearance();
Material* Material251 = new Material();
Material251->setEmissiveColor(new float[3]{1,1,1});
Appearance250->setMaterial(Material251);

Shape249->setAppearance(Appearance250);

IndexedLineSet* IndexedLineSet252 = new IndexedLineSet();
IndexedLineSet252->setDEF("MCP5toPIP5");
IndexedLineSet252->setCoordIndex(new int[2]{0,1});
Coordinate* Coordinate253 = new Coordinate();
Coordinate253->setPoint(new float[6]{-0.2,0.4,0,-0.23,0.63,0});
IndexedLineSet252->setCoord(Coordinate253);

Shape249->setGeometry(IndexedLineSet252);

HAnimSegment246->addChild(Shape249);

HAnimJoint245->addChild(HAnimSegment246);

HAnimJoint* HAnimJoint254 = new HAnimJoint();
HAnimJoint254->setName("l_carpal_proximal_interphalangeal_5");
HAnimJoint254->setDEF("hanim_l_carpal_proximal_interphalangeal_5");
HAnimJoint254->setCenter(new float[3]{-0.23,0.63,0});
HAnimSegment* HAnimSegment255 = new HAnimSegment();
HAnimSegment255->setName("l_carpal_middle_phalanx_5");
HAnimSegment255->setDEF("hanim_l_carpal_middle_phalanx_5");
Transform* Transform256 = new Transform();
Transform256->setTranslation(new float[3]{-0.23,0.63,0});
Shape* Shape257 = new Shape();
Shape257->setUSE("HAnimJointShape");
Transform256->addChild(Shape257);

HAnimSegment255->addChild(Transform256);

Shape* Shape258 = new Shape();
Appearance* Appearance259 = new Appearance();
Material* Material260 = new Material();
Material260->setEmissiveColor(new float[3]{1,1,1});
Appearance259->setMaterial(Material260);

Shape258->setAppearance(Appearance259);

IndexedLineSet* IndexedLineSet261 = new IndexedLineSet();
IndexedLineSet261->setDEF("PIP5toDIP5");
IndexedLineSet261->setCoordIndex(new int[2]{0,1});
Coordinate* Coordinate262 = new Coordinate();
Coordinate262->setPoint(new float[6]{-0.23,0.63,0,-0.25,0.79,0});
IndexedLineSet261->setCoord(Coordinate262);

Shape258->setGeometry(IndexedLineSet261);

HAnimSegment255->addChild(Shape258);

HAnimJoint254->addChild(HAnimSegment255);

HAnimJoint* HAnimJoint263 = new HAnimJoint();
HAnimJoint263->setName("l_carpal_distal_interphalangeal_5");
HAnimJoint263->setDEF("hanim_l_carpal_distal_interphalangeal_5");
HAnimJoint263->setCenter(new float[3]{-0.25,0.79,0});
HAnimSegment* HAnimSegment264 = new HAnimSegment();
HAnimSegment264->setName("l_carpal_distal_phalanx_5");
HAnimSegment264->setDEF("hanim_l_carpal_distal_phalanx_5");
Transform* Transform265 = new Transform();
Transform265->setTranslation(new float[3]{-0.25,0.79,0});
Shape* Shape266 = new Shape();
Shape266->setUSE("HAnimJointShape");
Transform265->addChild(Shape266);

HAnimSegment264->addChild(Transform265);

Shape* Shape267 = new Shape();
Appearance* Appearance268 = new Appearance();
Material* Material269 = new Material();
Material269->setEmissiveColor(new float[3]{1,1,1});
Appearance268->setMaterial(Material269);

Shape267->setAppearance(Appearance268);

IndexedLineSet* IndexedLineSet270 = new IndexedLineSet();
IndexedLineSet270->setDEF("fingertip_l_carpal_distal_interphalangeal_5");
IndexedLineSet270->setCoordIndex(new int[2]{0,1});
Coordinate* Coordinate271 = new Coordinate();
Coordinate271->setPoint(new float[6]{-0.25,0.79,0,-0.26,0.85,0});
IndexedLineSet270->setCoord(Coordinate271);

Shape267->setGeometry(IndexedLineSet270);

HAnimSegment264->addChild(Shape267);

HAnimJoint263->addChild(HAnimSegment264);

HAnimJoint254->addChild(HAnimJoint263);

HAnimJoint245->addChild(HAnimJoint254);

HAnimJoint236->addChild(HAnimJoint245);

HAnimJoint186->addChild(HAnimJoint236);

HAnimJoint30->addChild(HAnimJoint186);

HAnimJoint29->addChild(HAnimJoint30);

HAnimHumanoid26->setSkeleton(HAnimJoint29);

HAnimJoint* HAnimJoint272 = new HAnimJoint();
HAnimJoint272->setUSE("hanim_humanoid_root");
HAnimHumanoid26->addJoints(HAnimJoint272);

HAnimJoint* HAnimJoint273 = new HAnimJoint();
HAnimJoint273->setUSE("hanim_l_carpal_distal_interphalangeal_2");
HAnimHumanoid26->addJoints(HAnimJoint273);

HAnimJoint* HAnimJoint274 = new HAnimJoint();
HAnimJoint274->setUSE("hanim_l_carpal_distal_interphalangeal_3");
HAnimHumanoid26->addJoints(HAnimJoint274);

HAnimJoint* HAnimJoint275 = new HAnimJoint();
HAnimJoint275->setUSE("hanim_l_carpal_distal_interphalangeal_4");
HAnimHumanoid26->addJoints(HAnimJoint275);

HAnimJoint* HAnimJoint276 = new HAnimJoint();
HAnimJoint276->setUSE("hanim_l_carpal_distal_interphalangeal_5");
HAnimHumanoid26->addJoints(HAnimJoint276);

HAnimJoint* HAnimJoint277 = new HAnimJoint();
HAnimJoint277->setUSE("hanim_l_carpal_interphalangeal_1");
HAnimHumanoid26->addJoints(HAnimJoint277);

HAnimJoint* HAnimJoint278 = new HAnimJoint();
HAnimJoint278->setUSE("hanim_l_carpal_proximal_interphalangeal_2");
HAnimHumanoid26->addJoints(HAnimJoint278);

HAnimJoint* HAnimJoint279 = new HAnimJoint();
HAnimJoint279->setUSE("hanim_l_carpal_proximal_interphalangeal_3");
HAnimHumanoid26->addJoints(HAnimJoint279);

HAnimJoint* HAnimJoint280 = new HAnimJoint();
HAnimJoint280->setUSE("hanim_l_carpal_proximal_interphalangeal_4");
HAnimHumanoid26->addJoints(HAnimJoint280);

HAnimJoint* HAnimJoint281 = new HAnimJoint();
HAnimJoint281->setUSE("hanim_l_carpal_proximal_interphalangeal_5");
HAnimHumanoid26->addJoints(HAnimJoint281);

HAnimJoint* HAnimJoint282 = new HAnimJoint();
HAnimJoint282->setUSE("hanim_l_carpometacarpal_1");
HAnimHumanoid26->addJoints(HAnimJoint282);

HAnimJoint* HAnimJoint283 = new HAnimJoint();
HAnimJoint283->setUSE("hanim_l_carpometacarpal_2");
HAnimHumanoid26->addJoints(HAnimJoint283);

HAnimJoint* HAnimJoint284 = new HAnimJoint();
HAnimJoint284->setUSE("hanim_l_carpometacarpal_3");
HAnimHumanoid26->addJoints(HAnimJoint284);

HAnimJoint* HAnimJoint285 = new HAnimJoint();
HAnimJoint285->setUSE("hanim_l_carpometacarpal_4");
HAnimHumanoid26->addJoints(HAnimJoint285);

HAnimJoint* HAnimJoint286 = new HAnimJoint();
HAnimJoint286->setUSE("hanim_l_carpometacarpal_5");
HAnimHumanoid26->addJoints(HAnimJoint286);

HAnimJoint* HAnimJoint287 = new HAnimJoint();
HAnimJoint287->setUSE("hanim_l_metacarpophalangeal_1");
HAnimHumanoid26->addJoints(HAnimJoint287);

HAnimJoint* HAnimJoint288 = new HAnimJoint();
HAnimJoint288->setUSE("hanim_l_metacarpophalangeal_2");
HAnimHumanoid26->addJoints(HAnimJoint288);

HAnimJoint* HAnimJoint289 = new HAnimJoint();
HAnimJoint289->setUSE("hanim_l_metacarpophalangeal_3");
HAnimHumanoid26->addJoints(HAnimJoint289);

HAnimJoint* HAnimJoint290 = new HAnimJoint();
HAnimJoint290->setUSE("hanim_l_metacarpophalangeal_4");
HAnimHumanoid26->addJoints(HAnimJoint290);

HAnimJoint* HAnimJoint291 = new HAnimJoint();
HAnimJoint291->setUSE("hanim_l_metacarpophalangeal_5");
HAnimHumanoid26->addJoints(HAnimJoint291);

HAnimJoint* HAnimJoint292 = new HAnimJoint();
HAnimJoint292->setUSE("hanim_l_midcarpal_1");
HAnimHumanoid26->addJoints(HAnimJoint292);

HAnimJoint* HAnimJoint293 = new HAnimJoint();
HAnimJoint293->setUSE("hanim_l_midcarpal_2");
HAnimHumanoid26->addJoints(HAnimJoint293);

HAnimJoint* HAnimJoint294 = new HAnimJoint();
HAnimJoint294->setUSE("hanim_l_midcarpal_3");
HAnimHumanoid26->addJoints(HAnimJoint294);

HAnimJoint* HAnimJoint295 = new HAnimJoint();
HAnimJoint295->setUSE("hanim_l_midcarpal_4_5");
HAnimHumanoid26->addJoints(HAnimJoint295);

HAnimJoint* HAnimJoint296 = new HAnimJoint();
HAnimJoint296->setUSE("hanim_l_radiocarpal");
HAnimHumanoid26->addJoints(HAnimJoint296);

HAnimSegment* HAnimSegment297 = new HAnimSegment();
HAnimSegment297->setUSE("hanim_l_capitate");
HAnimHumanoid26->setSegments(HAnimSegment297);

HAnimSegment* HAnimSegment298 = new HAnimSegment();
HAnimSegment298->setUSE("hanim_l_carpal");
HAnimHumanoid26->setSegments(HAnimSegment298);

HAnimSegment* HAnimSegment299 = new HAnimSegment();
HAnimSegment299->setUSE("hanim_l_carpal_distal_phalanx_1");
HAnimHumanoid26->setSegments(HAnimSegment299);

HAnimSegment* HAnimSegment300 = new HAnimSegment();
HAnimSegment300->setUSE("hanim_l_carpal_distal_phalanx_2");
HAnimHumanoid26->setSegments(HAnimSegment300);

HAnimSegment* HAnimSegment301 = new HAnimSegment();
HAnimSegment301->setUSE("hanim_l_carpal_distal_phalanx_3");
HAnimHumanoid26->setSegments(HAnimSegment301);

HAnimSegment* HAnimSegment302 = new HAnimSegment();
HAnimSegment302->setUSE("hanim_l_carpal_distal_phalanx_4");
HAnimHumanoid26->setSegments(HAnimSegment302);

HAnimSegment* HAnimSegment303 = new HAnimSegment();
HAnimSegment303->setUSE("hanim_l_carpal_distal_phalanx_5");
HAnimHumanoid26->setSegments(HAnimSegment303);

HAnimSegment* HAnimSegment304 = new HAnimSegment();
HAnimSegment304->setUSE("hanim_l_carpal_middle_phalanx_2");
HAnimHumanoid26->setSegments(HAnimSegment304);

HAnimSegment* HAnimSegment305 = new HAnimSegment();
HAnimSegment305->setUSE("hanim_l_carpal_middle_phalanx_3");
HAnimHumanoid26->setSegments(HAnimSegment305);

HAnimSegment* HAnimSegment306 = new HAnimSegment();
HAnimSegment306->setUSE("hanim_l_carpal_middle_phalanx_4");
HAnimHumanoid26->setSegments(HAnimSegment306);

HAnimSegment* HAnimSegment307 = new HAnimSegment();
HAnimSegment307->setUSE("hanim_l_carpal_middle_phalanx_5");
HAnimHumanoid26->setSegments(HAnimSegment307);

HAnimSegment* HAnimSegment308 = new HAnimSegment();
HAnimSegment308->setUSE("hanim_l_carpal_proximal_phalanx_1");
HAnimHumanoid26->setSegments(HAnimSegment308);

HAnimSegment* HAnimSegment309 = new HAnimSegment();
HAnimSegment309->setUSE("hanim_l_carpal_proximal_phalanx_2");
HAnimHumanoid26->setSegments(HAnimSegment309);

HAnimSegment* HAnimSegment310 = new HAnimSegment();
HAnimSegment310->setUSE("hanim_l_carpal_proximal_phalanx_3");
HAnimHumanoid26->setSegments(HAnimSegment310);

HAnimSegment* HAnimSegment311 = new HAnimSegment();
HAnimSegment311->setUSE("hanim_l_carpal_proximal_phalanx_4");
HAnimHumanoid26->setSegments(HAnimSegment311);

HAnimSegment* HAnimSegment312 = new HAnimSegment();
HAnimSegment312->setUSE("hanim_l_carpal_proximal_phalanx_5");
HAnimHumanoid26->setSegments(HAnimSegment312);

HAnimSegment* HAnimSegment313 = new HAnimSegment();
HAnimSegment313->setUSE("hanim_l_hamate");
HAnimHumanoid26->setSegments(HAnimSegment313);

HAnimSegment* HAnimSegment314 = new HAnimSegment();
HAnimSegment314->setUSE("hanim_l_metacarpal_1");
HAnimHumanoid26->setSegments(HAnimSegment314);

HAnimSegment* HAnimSegment315 = new HAnimSegment();
HAnimSegment315->setUSE("hanim_l_metacarpal_2");
HAnimHumanoid26->setSegments(HAnimSegment315);

HAnimSegment* HAnimSegment316 = new HAnimSegment();
HAnimSegment316->setUSE("hanim_l_metacarpal_3");
HAnimHumanoid26->setSegments(HAnimSegment316);

HAnimSegment* HAnimSegment317 = new HAnimSegment();
HAnimSegment317->setUSE("hanim_l_metacarpal_4");
HAnimHumanoid26->setSegments(HAnimSegment317);

HAnimSegment* HAnimSegment318 = new HAnimSegment();
HAnimSegment318->setUSE("hanim_l_metacarpal_5");
HAnimHumanoid26->setSegments(HAnimSegment318);

HAnimSegment* HAnimSegment319 = new HAnimSegment();
HAnimSegment319->setUSE("hanim_l_trapezium");
HAnimHumanoid26->setSegments(HAnimSegment319);

HAnimSegment* HAnimSegment320 = new HAnimSegment();
HAnimSegment320->setUSE("hanim_l_trapezoid");
HAnimHumanoid26->setSegments(HAnimSegment320);

Scene24->addChild(HAnimHumanoid26);

X3D0->setScene(Scene24);

X3D0->toXMLString();
}
