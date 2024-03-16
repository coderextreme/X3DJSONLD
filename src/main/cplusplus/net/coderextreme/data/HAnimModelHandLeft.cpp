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
component* component2 = new component();
component2->setName(CString("HAnim"));
component2->setLevel(1);
head1->addChild(component2);

meta* meta3 = new meta();
meta3->setName(CString("title"));
meta3->setContent(CString("HAnimModelHandLeft.x3d"));
head1->addMeta(meta3);

meta* meta4 = new meta();
meta4->setName(CString("description"));
meta4->setContent(CString("Left hand, using high-fidelity definitions for HAnim version 2.0"));
head1->addMeta(meta4);

meta* meta5 = new meta();
meta5->setName(CString("creator"));
meta5->setContent(CString("Kwan-Hee YOO, Don Brutzman and Joe Williams"));
head1->addMeta(meta5);

meta* meta6 = new meta();
meta6->setName(CString("created"));
meta6->setContent(CString("26 January 2015"));
head1->addMeta(meta6);

meta* meta7 = new meta();
meta7->setName(CString("modified"));
meta7->setContent(CString("23 December 2021"));
head1->addMeta(meta7);

meta* meta8 = new meta();
meta8->setName(CString("TODO"));
meta8->setContent(CString("fix visible geometry for thumb and index finger, midcarpal_1 and midcarpal_2"));
head1->addMeta(meta8);

meta* meta9 = new meta();
meta9->setName(CString("Image"));
meta9->setContent(CString("HAnimModelHandRightSegmentVisualizationError.png"));
head1->addMeta(meta9);

meta* meta10 = new meta();
meta10->setName(CString("error"));
meta10->setContent(CString("not yet to scale, also relatively flat"));
head1->addMeta(meta10);

meta* meta11 = new meta();
meta11->setName(CString("warning"));
meta11->setContent(CString("TODO will X3D HAnim component add a new level to support LOA-4 functionality?"));
head1->addMeta(meta11);

meta* meta12 = new meta();
meta12->setName(CString("info"));
meta12->setContent(CString("TODO describe how to compute and apply offsets for center values whenever attaching this appendage to a body"));
head1->addMeta(meta12);

meta* meta13 = new meta();
meta13->setName(CString("reference"));
meta13->setContent(CString("https://www.web3d.org/working-groups/humanoid-animation-HAnim"));
head1->addMeta(meta13);

meta* meta14 = new meta();
meta14->setName(CString("reference"));
meta14->setContent(CString("https://www.web3d.org/documents/specifications/19774/V2.0"));
head1->addMeta(meta14);

meta* meta15 = new meta();
meta15->setName(CString("reference"));
meta15->setContent(CString("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#TheHands"));
head1->addMeta(meta15);

meta* meta16 = new meta();
meta16->setName(CString("reference"));
meta16->setContent(CString("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#f-HandJoints"));
head1->addMeta(meta16);

meta* meta17 = new meta();
meta17->setName(CString("reference"));
meta17->setContent(CString("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#Hierarchy4"));
head1->addMeta(meta17);

meta* meta18 = new meta();
meta18->setName(CString("reference"));
meta18->setContent(CString("https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19775-1v4-WD2/Part01/components/hanim.html"));
head1->addMeta(meta18);

meta* meta19 = new meta();
meta19->setName(CString("subject"));
meta19->setContent(CString("X3D HAnim humanoid animation"));
head1->addMeta(meta19);

meta* meta20 = new meta();
meta20->setName(CString("TODO"));
meta20->setContent(CString("Integrate and confirm Segment/Joint names, Viewpoints."));
head1->addMeta(meta20);

meta* meta21 = new meta();
meta21->setName(CString("identifier"));
meta21->setContent(CString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelHandLeft.x3d"));
head1->addMeta(meta21);

meta* meta22 = new meta();
meta22->setName(CString("generator"));
meta22->setContent(CString("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"));
head1->addMeta(meta22);

meta* meta23 = new meta();
meta23->setName(CString("license"));
meta23->setContent(CString("../license.html"));
head1->addMeta(meta23);

X3D0->setHead(head1);

Scene* Scene24 = new Scene();
WorldInfo* WorldInfo25 = new WorldInfo();
WorldInfo25->setTitle(CString("HAnimModelHandLeft.x3d"));
Scene24->addChild(WorldInfo25);

HAnimHumanoid* HAnimHumanoid26 = new HAnimHumanoid();
HAnimHumanoid26->setName(CString("Hand_Left"));
HAnimHumanoid26->setDEF(CString("hanim_Hand_Left"));
HAnimHumanoid26->setLoa(4);
HAnimHumanoid26->setVersion(CString("2.0"));
//original HAnimHumanoid info='\"authorName=Kwan-Hee YOO, Don Brutzman and Joe Williams\"'
MetadataSet* MetadataSet27 = new MetadataSet();
MetadataSet27->setName(CString("HAnimHumanoid.info"));
MetadataSet27->setReference(CString("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid"));
MetadataString* MetadataString28 = new MetadataString();
MetadataString28->setName(CString("authorName"));
MetadataString28->setValue(new CString[1]{CString("Kwan-Hee YOO, Don Brutzman and Joe Williams")}, 1);
MetadataSet27->setValue((X3DNode *)MetadataString28);

HAnimHumanoid26->setMetadata(MetadataSet27);

HAnimJoint* HAnimJoint29 = new HAnimJoint();
HAnimJoint29->setName(CString("humanoid_root"));
HAnimJoint29->setDEF(CString("hanim_humanoid_root"));
//Might consider putting a HAnimSegment here, but that doesn't help with re-use of this hand model
HAnimJoint* HAnimJoint30 = new HAnimJoint();
HAnimJoint30->setName(CString("l_radiocarpal"));
HAnimJoint30->setDEF(CString("hanim_l_radiocarpal"));
HAnimJoint30->setDescription(CString("connection joint of hand to leg above"));
HAnimSegment* HAnimSegment31 = new HAnimSegment();
HAnimSegment31->setName(CString("l_carpal"));
HAnimSegment31->setDEF(CString("hanim_l_carpal"));
Transform* Transform32 = new Transform();
Shape* Shape33 = new Shape();
Shape33->setDEF(CString("HAnimJointShape"));
Sphere* Sphere34 = new Sphere();
Sphere34->setRadius(0.025);
Shape33->setGeometry(Sphere34);

Appearance* Appearance35 = new Appearance();
Appearance35->setDEF(CString("HAnimJointAppearanceBlue"));
Material* Material36 = new Material();
Material36->setDiffuseColor(new float[3]{0,0,1});
Appearance35->addChild(Material36);

Shape33->addChild(Appearance35);

Transform32->addChild(Shape33);

HAnimSegment31->addChild(Transform32);

Shape* Shape37 = new Shape();
Appearance* Appearance38 = new Appearance();
Material* Material39 = new Material();
Material39->setEmissiveColor(new float[3]{1,1,1});
Appearance38->addChild(Material39);

Shape37->addChild(Appearance38);

IndexedLineSet* IndexedLineSet40 = new IndexedLineSet();
IndexedLineSet40->setDEF(CString("RCToMC12"));
IndexedLineSet40->setCoordIndex(new int32_t[2]{0,1}, 2);
Coordinate* Coordinate41 = new Coordinate();
Coordinate41->setPoint(new float[6]{0,0,0,0.1,0.1,0}, 6);
IndexedLineSet40->addChild(Coordinate41);

Shape37->setGeometry(IndexedLineSet40);

HAnimSegment31->addChild(Shape37);

Shape* Shape42 = new Shape();
Appearance* Appearance43 = new Appearance();
Material* Material44 = new Material();
Material44->setEmissiveColor(new float[3]{1,1,1});
Appearance43->addChild(Material44);

Shape42->addChild(Appearance43);

IndexedLineSet* IndexedLineSet45 = new IndexedLineSet();
IndexedLineSet45->setDEF(CString("RCToMC3"));
IndexedLineSet45->setCoordIndex(new int32_t[2]{0,1}, 2);
Coordinate* Coordinate46 = new Coordinate();
Coordinate46->setPoint(new float[6]{0,0,0,0,0.07,0}, 6);
IndexedLineSet45->addChild(Coordinate46);

Shape42->setGeometry(IndexedLineSet45);

HAnimSegment31->addChild(Shape42);

Shape* Shape47 = new Shape();
Appearance* Appearance48 = new Appearance();
Material* Material49 = new Material();
Material49->setEmissiveColor(new float[3]{1,1,1});
Appearance48->addChild(Material49);

Shape47->addChild(Appearance48);

IndexedLineSet* IndexedLineSet50 = new IndexedLineSet();
IndexedLineSet50->setDEF(CString("RCToMC45"));
IndexedLineSet50->setCoordIndex(new int32_t[2]{0,1}, 2);
Coordinate* Coordinate51 = new Coordinate();
Coordinate51->setPoint(new float[6]{0,0,0,-0.1,0.1,0}, 6);
IndexedLineSet50->addChild(Coordinate51);

Shape47->setGeometry(IndexedLineSet50);

HAnimSegment31->addChild(Shape47);

HAnimJoint30->addChild(HAnimSegment31);

//MC1
HAnimJoint* HAnimJoint52 = new HAnimJoint();
HAnimJoint52->setName(CString("l_midcarpal_1"));
HAnimJoint52->setDEF(CString("hanim_l_midcarpal_1"));
HAnimJoint52->setCenter(new float[3]{0.14,0.09,0});
HAnimSegment* HAnimSegment53 = new HAnimSegment();
HAnimSegment53->setName(CString("l_trapezium"));
HAnimSegment53->setDEF(CString("hanim_l_trapezium"));
Transform* Transform54 = new Transform();
Transform54->setTranslation(new float[3]{0.14,0.09,0});
Shape* Shape55 = new Shape();
Shape55->setDEF(CString("HAnimNewJointShape"));
Sphere* Sphere56 = new Sphere();
Sphere56->setRadius(0.025);
Shape55->setGeometry(Sphere56);

Appearance* Appearance57 = new Appearance();
Appearance57->setDEF(CString("HAnimJointAppearanceRed"));
Material* Material58 = new Material();
Material58->setDiffuseColor(new float[3]{1,0,0});
Appearance57->addChild(Material58);

Shape55->addChild(Appearance57);

Transform54->addChild(Shape55);

HAnimSegment53->addChild(Transform54);

Shape* Shape59 = new Shape();
Appearance* Appearance60 = new Appearance();
Material* Material61 = new Material();
Material61->setEmissiveColor(new float[3]{1,1,1});
Appearance60->addChild(Material61);

Shape59->addChild(Appearance60);

IndexedLineSet* IndexedLineSet62 = new IndexedLineSet();
IndexedLineSet62->setDEF(CString("MC12toCMC1"));
IndexedLineSet62->setCoordIndex(new int32_t[2]{0,1}, 2);
Coordinate* Coordinate63 = new Coordinate();
Coordinate63->setPoint(new float[6]{0.1,0.1,0,0.2,0.15,0}, 6);
IndexedLineSet62->addChild(Coordinate63);

Shape59->setGeometry(IndexedLineSet62);

HAnimSegment53->addChild(Shape59);

Shape* Shape64 = new Shape();
Appearance* Appearance65 = new Appearance();
Material* Material66 = new Material();
Material66->setEmissiveColor(new float[3]{1,1,1});
Appearance65->addChild(Material66);

Shape64->addChild(Appearance65);

IndexedLineSet* IndexedLineSet67 = new IndexedLineSet();
IndexedLineSet67->setDEF(CString("MC1toCMC1"));
IndexedLineSet67->setCoordIndex(new int32_t[2]{0,1}, 2);
Coordinate* Coordinate68 = new Coordinate();
Coordinate68->setPoint(new float[6]{0.1,0.1,0,0.1,0.2,0}, 6);
IndexedLineSet67->addChild(Coordinate68);

Shape64->setGeometry(IndexedLineSet67);

HAnimSegment53->addChild(Shape64);

HAnimJoint52->addChild(HAnimSegment53);

//thumb finger
HAnimJoint* HAnimJoint69 = new HAnimJoint();
HAnimJoint69->setName(CString("l_carpometacarpal_1"));
HAnimJoint69->setDEF(CString("hanim_l_carpometacarpal_1"));
HAnimJoint69->setCenter(new float[3]{0.2,0.15,0});
HAnimSegment* HAnimSegment70 = new HAnimSegment();
HAnimSegment70->setName(CString("l_metacarpal_1"));
HAnimSegment70->setDEF(CString("hanim_l_metacarpal_1"));
Transform* Transform71 = new Transform();
Transform71->setTranslation(new float[3]{0.2,0.15,0});
Shape* Shape72 = new Shape();
Shape72->setUSE(CString("HAnimJointShape"));
Transform71->addChild(Shape72);

HAnimSegment70->addChild(Transform71);

Shape* Shape73 = new Shape();
Appearance* Appearance74 = new Appearance();
Material* Material75 = new Material();
Material75->setEmissiveColor(new float[3]{1,1,1});
Appearance74->addChild(Material75);

Shape73->addChild(Appearance74);

IndexedLineSet* IndexedLineSet76 = new IndexedLineSet();
IndexedLineSet76->setDEF(CString("CMC1toMCP1"));
IndexedLineSet76->setCoordIndex(new int32_t[2]{0,1}, 2);
Coordinate* Coordinate77 = new Coordinate();
Coordinate77->setPoint(new float[6]{0.2,0.15,0,0.3,0.3,0}, 6);
IndexedLineSet76->addChild(Coordinate77);

Shape73->setGeometry(IndexedLineSet76);

HAnimSegment70->addChild(Shape73);

HAnimJoint69->addChild(HAnimSegment70);

HAnimJoint* HAnimJoint78 = new HAnimJoint();
HAnimJoint78->setName(CString("l_metacarpophalangeal_1"));
HAnimJoint78->setDEF(CString("hanim_l_metacarpophalangeal_1"));
HAnimJoint78->setCenter(new float[3]{0.3,0.3,0});
HAnimSegment* HAnimSegment79 = new HAnimSegment();
HAnimSegment79->setName(CString("l_carpal_proximal_phalanx_1"));
HAnimSegment79->setDEF(CString("hanim_l_carpal_proximal_phalanx_1"));
Transform* Transform80 = new Transform();
Transform80->setTranslation(new float[3]{0.3,0.3,0});
Shape* Shape81 = new Shape();
Shape81->setUSE(CString("HAnimJointShape"));
Transform80->addChild(Shape81);

HAnimSegment79->addChild(Transform80);

Shape* Shape82 = new Shape();
Appearance* Appearance83 = new Appearance();
Material* Material84 = new Material();
Material84->setEmissiveColor(new float[3]{1,1,1});
Appearance83->addChild(Material84);

Shape82->addChild(Appearance83);

IndexedLineSet* IndexedLineSet85 = new IndexedLineSet();
IndexedLineSet85->setDEF(CString("MCP11toIP1"));
IndexedLineSet85->setCoordIndex(new int32_t[2]{0,1}, 2);
Coordinate* Coordinate86 = new Coordinate();
Coordinate86->setPoint(new float[6]{0.3,0.3,0,0.35,0.4,0}, 6);
IndexedLineSet85->addChild(Coordinate86);

Shape82->setGeometry(IndexedLineSet85);

HAnimSegment79->addChild(Shape82);

HAnimJoint78->addChild(HAnimSegment79);

HAnimJoint* HAnimJoint87 = new HAnimJoint();
HAnimJoint87->setName(CString("l_carpal_interphalangeal_1"));
HAnimJoint87->setDEF(CString("hanim_l_carpal_interphalangeal_1"));
HAnimJoint87->setCenter(new float[3]{0.35,0.4,0});
HAnimSegment* HAnimSegment88 = new HAnimSegment();
HAnimSegment88->setName(CString("l_carpal_distal_phalanx_1"));
HAnimSegment88->setDEF(CString("hanim_l_carpal_distal_phalanx_1"));
Transform* Transform89 = new Transform();
Transform89->setTranslation(new float[3]{0.35,0.4,0});
Shape* Shape90 = new Shape();
Shape90->setUSE(CString("HAnimJointShape"));
Transform89->addChild(Shape90);

HAnimSegment88->addChild(Transform89);

Shape* Shape91 = new Shape();
Appearance* Appearance92 = new Appearance();
Material* Material93 = new Material();
Material93->setEmissiveColor(new float[3]{1,1,1});
Appearance92->addChild(Material93);

Shape91->addChild(Appearance92);

IndexedLineSet* IndexedLineSet94 = new IndexedLineSet();
IndexedLineSet94->setDEF(CString("fingertip_l_carpal_interphalangeal_1"));
IndexedLineSet94->setCoordIndex(new int32_t[2]{0,1}, 2);
Coordinate* Coordinate95 = new Coordinate();
Coordinate95->setPoint(new float[6]{0.35,0.4,0,0.36,0.45,0}, 6);
IndexedLineSet94->addChild(Coordinate95);

Shape91->setGeometry(IndexedLineSet94);

HAnimSegment88->addChild(Shape91);

HAnimJoint87->addChild(HAnimSegment88);

HAnimJoint78->addChild(HAnimJoint87);

HAnimJoint69->addChild(HAnimJoint78);

HAnimJoint52->addChild(HAnimJoint69);

HAnimJoint30->addChild(HAnimJoint52);

//MC2
HAnimJoint* HAnimJoint96 = new HAnimJoint();
HAnimJoint96->setName(CString("l_midcarpal_2"));
HAnimJoint96->setDEF(CString("hanim_l_midcarpal_2"));
HAnimJoint96->setCenter(new float[3]{0.07,0.07,0});
HAnimSegment* HAnimSegment97 = new HAnimSegment();
HAnimSegment97->setName(CString("l_trapezoid"));
HAnimSegment97->setDEF(CString("hanim_l_trapezoid"));
Transform* Transform98 = new Transform();
Transform98->setTranslation(new float[3]{0.07,0.07,0});
Shape* Shape99 = new Shape();
Shape99->setUSE(CString("HAnimNewJointShape"));
Transform98->addChild(Shape99);

HAnimSegment97->addChild(Transform98);

Shape* Shape100 = new Shape();
Appearance* Appearance101 = new Appearance();
Material* Material102 = new Material();
Material102->setEmissiveColor(new float[3]{1,1,1});
Appearance101->addChild(Material102);

Shape100->addChild(Appearance101);

IndexedLineSet* IndexedLineSet103 = new IndexedLineSet();
IndexedLineSet103->setDEF(CString("MC2toCMC2"));
IndexedLineSet103->setCoordIndex(new int32_t[2]{0,1}, 2);
Coordinate* Coordinate104 = new Coordinate();
Coordinate104->setPoint(new float[6]{-0.1,0.1,0,-0.1,0.2,0}, 6);
IndexedLineSet103->addChild(Coordinate104);

Shape100->setGeometry(IndexedLineSet103);

HAnimSegment97->addChild(Shape100);

HAnimJoint96->addChild(HAnimSegment97);

//index finger
HAnimJoint* HAnimJoint105 = new HAnimJoint();
HAnimJoint105->setName(CString("l_carpometacarpal_2"));
HAnimJoint105->setDEF(CString("hanim_l_carpometacarpal_2"));
HAnimJoint105->setCenter(new float[3]{0.1,0.2,0});
HAnimSegment* HAnimSegment106 = new HAnimSegment();
HAnimSegment106->setName(CString("l_metacarpal_2"));
HAnimSegment106->setDEF(CString("hanim_l_metacarpal_2"));
Transform* Transform107 = new Transform();
Transform107->setTranslation(new float[3]{0.1,0.2,0});
Shape* Shape108 = new Shape();
Shape108->setUSE(CString("HAnimJointShape"));
Transform107->addChild(Shape108);

HAnimSegment106->addChild(Transform107);

Shape* Shape109 = new Shape();
Appearance* Appearance110 = new Appearance();
Material* Material111 = new Material();
Material111->setEmissiveColor(new float[3]{1,1,1});
Appearance110->addChild(Material111);

Shape109->addChild(Appearance110);

IndexedLineSet* IndexedLineSet112 = new IndexedLineSet();
IndexedLineSet112->setDEF(CString("CMC2toMCP2"));
IndexedLineSet112->setCoordIndex(new int32_t[2]{0,1}, 2);
Coordinate* Coordinate113 = new Coordinate();
Coordinate113->setPoint(new float[6]{0.1,0.2,0,0.15,0.5,0}, 6);
IndexedLineSet112->addChild(Coordinate113);

Shape109->setGeometry(IndexedLineSet112);

HAnimSegment106->addChild(Shape109);

HAnimJoint105->addChild(HAnimSegment106);

HAnimJoint* HAnimJoint114 = new HAnimJoint();
HAnimJoint114->setName(CString("l_metacarpophalangeal_2"));
HAnimJoint114->setDEF(CString("hanim_l_metacarpophalangeal_2"));
HAnimJoint114->setCenter(new float[3]{0.15,0.5,0});
HAnimSegment* HAnimSegment115 = new HAnimSegment();
HAnimSegment115->setName(CString("l_carpal_proximal_phalanx_2"));
HAnimSegment115->setDEF(CString("hanim_l_carpal_proximal_phalanx_2"));
Transform* Transform116 = new Transform();
Transform116->setTranslation(new float[3]{0.15,0.5,0});
Shape* Shape117 = new Shape();
Shape117->setUSE(CString("HAnimJointShape"));
Transform116->addChild(Shape117);

HAnimSegment115->addChild(Transform116);

Shape* Shape118 = new Shape();
Appearance* Appearance119 = new Appearance();
Material* Material120 = new Material();
Material120->setEmissiveColor(new float[3]{1,1,1});
Appearance119->addChild(Material120);

Shape118->addChild(Appearance119);

IndexedLineSet* IndexedLineSet121 = new IndexedLineSet();
IndexedLineSet121->setDEF(CString("MCP2toPIP2"));
IndexedLineSet121->setCoordIndex(new int32_t[2]{0,1}, 2);
Coordinate* Coordinate122 = new Coordinate();
Coordinate122->setPoint(new float[6]{0.15,0.5,0,0.2,0.7,0}, 6);
IndexedLineSet121->addChild(Coordinate122);

Shape118->setGeometry(IndexedLineSet121);

HAnimSegment115->addChild(Shape118);

HAnimJoint114->addChild(HAnimSegment115);

HAnimJoint* HAnimJoint123 = new HAnimJoint();
HAnimJoint123->setName(CString("l_carpal_proximal_interphalangeal_2"));
HAnimJoint123->setDEF(CString("hanim_l_carpal_proximal_interphalangeal_2"));
HAnimJoint123->setCenter(new float[3]{0.2,0.7,0});
HAnimSegment* HAnimSegment124 = new HAnimSegment();
HAnimSegment124->setName(CString("l_carpal_middle_phalanx_2"));
HAnimSegment124->setDEF(CString("hanim_l_carpal_middle_phalanx_2"));
Transform* Transform125 = new Transform();
Transform125->setTranslation(new float[3]{0.2,0.7,0});
Shape* Shape126 = new Shape();
Shape126->setUSE(CString("HAnimJointShape"));
Transform125->addChild(Shape126);

HAnimSegment124->addChild(Transform125);

Shape* Shape127 = new Shape();
Appearance* Appearance128 = new Appearance();
Material* Material129 = new Material();
Material129->setEmissiveColor(new float[3]{1,1,1});
Appearance128->addChild(Material129);

Shape127->addChild(Appearance128);

IndexedLineSet* IndexedLineSet130 = new IndexedLineSet();
IndexedLineSet130->setDEF(CString("PIP2toDIP2"));
IndexedLineSet130->setCoordIndex(new int32_t[2]{0,1}, 2);
Coordinate* Coordinate131 = new Coordinate();
Coordinate131->setPoint(new float[6]{0.2,0.7,0,0.24,0.87,0}, 6);
IndexedLineSet130->addChild(Coordinate131);

Shape127->setGeometry(IndexedLineSet130);

HAnimSegment124->addChild(Shape127);

HAnimJoint123->addChild(HAnimSegment124);

HAnimJoint* HAnimJoint132 = new HAnimJoint();
HAnimJoint132->setName(CString("l_carpal_distal_interphalangeal_2"));
HAnimJoint132->setDEF(CString("hanim_l_carpal_distal_interphalangeal_2"));
HAnimJoint132->setCenter(new float[3]{0.24,0.87,0});
HAnimSegment* HAnimSegment133 = new HAnimSegment();
HAnimSegment133->setName(CString("l_carpal_distal_phalanx_2"));
HAnimSegment133->setDEF(CString("hanim_l_carpal_distal_phalanx_2"));
Transform* Transform134 = new Transform();
Transform134->setTranslation(new float[3]{0.24,0.87,0});
Shape* Shape135 = new Shape();
Shape135->setUSE(CString("HAnimJointShape"));
Transform134->addChild(Shape135);

HAnimSegment133->addChild(Transform134);

Shape* Shape136 = new Shape();
Appearance* Appearance137 = new Appearance();
Material* Material138 = new Material();
Material138->setEmissiveColor(new float[3]{1,1,1});
Appearance137->addChild(Material138);

Shape136->addChild(Appearance137);

IndexedLineSet* IndexedLineSet139 = new IndexedLineSet();
IndexedLineSet139->setDEF(CString("fingertip_l_carpal_distal_interphalangeal_2"));
IndexedLineSet139->setCoordIndex(new int32_t[2]{0,1}, 2);
Coordinate* Coordinate140 = new Coordinate();
Coordinate140->setPoint(new float[6]{0.24,0.87,0,0.26,0.93,0}, 6);
IndexedLineSet139->addChild(Coordinate140);

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
HAnimJoint141->setName(CString("l_midcarpal_3"));
HAnimJoint141->setDEF(CString("hanim_l_midcarpal_3"));
HAnimJoint141->setCenter(new float[3]{0,0.07,0});
HAnimSegment* HAnimSegment142 = new HAnimSegment();
HAnimSegment142->setName(CString("l_capitate"));
HAnimSegment142->setDEF(CString("hanim_l_capitate"));
Transform* Transform143 = new Transform();
Transform143->setTranslation(new float[3]{0,0.07,0});
Shape* Shape144 = new Shape();
Shape144->setUSE(CString("HAnimNewJointShape"));
Transform143->addChild(Shape144);

HAnimSegment142->addChild(Transform143);

Shape* Shape145 = new Shape();
Appearance* Appearance146 = new Appearance();
Material* Material147 = new Material();
Material147->setEmissiveColor(new float[3]{1,1,1});
Appearance146->addChild(Material147);

Shape145->addChild(Appearance146);

IndexedLineSet* IndexedLineSet148 = new IndexedLineSet();
IndexedLineSet148->setDEF(CString("MC3toCMC3"));
IndexedLineSet148->setCoordIndex(new int32_t[2]{0,1}, 2);
Coordinate* Coordinate149 = new Coordinate();
Coordinate149->setPoint(new float[6]{0,0.07,0,0,0.2,0}, 6);
IndexedLineSet148->addChild(Coordinate149);

Shape145->setGeometry(IndexedLineSet148);

HAnimSegment142->addChild(Shape145);

HAnimJoint141->addChild(HAnimSegment142);

//Middle fingle
HAnimJoint* HAnimJoint150 = new HAnimJoint();
HAnimJoint150->setName(CString("l_carpometacarpal_3"));
HAnimJoint150->setDEF(CString("hanim_l_carpometacarpal_3"));
HAnimJoint150->setCenter(new float[3]{0,0.2,0});
HAnimSegment* HAnimSegment151 = new HAnimSegment();
HAnimSegment151->setName(CString("l_metacarpal_3"));
HAnimSegment151->setDEF(CString("hanim_l_metacarpal_3"));
Transform* Transform152 = new Transform();
Transform152->setTranslation(new float[3]{0,0.2,0});
Shape* Shape153 = new Shape();
Shape153->setUSE(CString("HAnimJointShape"));
Transform152->addChild(Shape153);

HAnimSegment151->addChild(Transform152);

Shape* Shape154 = new Shape();
Appearance* Appearance155 = new Appearance();
Material* Material156 = new Material();
Material156->setEmissiveColor(new float[3]{1,1,1});
Appearance155->addChild(Material156);

Shape154->addChild(Appearance155);

IndexedLineSet* IndexedLineSet157 = new IndexedLineSet();
IndexedLineSet157->setDEF(CString("CMC3toMCP3"));
IndexedLineSet157->setCoordIndex(new int32_t[2]{0,1}, 2);
Coordinate* Coordinate158 = new Coordinate();
Coordinate158->setPoint(new float[6]{0,0.2,0,0.03,0.5,0}, 6);
IndexedLineSet157->addChild(Coordinate158);

Shape154->setGeometry(IndexedLineSet157);

HAnimSegment151->addChild(Shape154);

HAnimJoint150->addChild(HAnimSegment151);

HAnimJoint* HAnimJoint159 = new HAnimJoint();
HAnimJoint159->setName(CString("l_metacarpophalangeal_3"));
HAnimJoint159->setDEF(CString("hanim_l_metacarpophalangeal_3"));
HAnimJoint159->setCenter(new float[3]{0.03,0.5,0});
HAnimSegment* HAnimSegment160 = new HAnimSegment();
HAnimSegment160->setName(CString("l_carpal_proximal_phalanx_3"));
HAnimSegment160->setDEF(CString("hanim_l_carpal_proximal_phalanx_3"));
Transform* Transform161 = new Transform();
Transform161->setTranslation(new float[3]{0.03,0.5,0});
Shape* Shape162 = new Shape();
Shape162->setUSE(CString("HAnimJointShape"));
Transform161->addChild(Shape162);

HAnimSegment160->addChild(Transform161);

Shape* Shape163 = new Shape();
Appearance* Appearance164 = new Appearance();
Material* Material165 = new Material();
Material165->setEmissiveColor(new float[3]{1,1,1});
Appearance164->addChild(Material165);

Shape163->addChild(Appearance164);

IndexedLineSet* IndexedLineSet166 = new IndexedLineSet();
IndexedLineSet166->setDEF(CString("MCP3toPIP3"));
IndexedLineSet166->setCoordIndex(new int32_t[2]{0,1}, 2);
Coordinate* Coordinate167 = new Coordinate();
Coordinate167->setPoint(new float[6]{0.03,0.5,0,0.05,0.75,0}, 6);
IndexedLineSet166->addChild(Coordinate167);

Shape163->setGeometry(IndexedLineSet166);

HAnimSegment160->addChild(Shape163);

HAnimJoint159->addChild(HAnimSegment160);

HAnimJoint* HAnimJoint168 = new HAnimJoint();
HAnimJoint168->setName(CString("l_carpal_proximal_interphalangeal_3"));
HAnimJoint168->setDEF(CString("hanim_l_carpal_proximal_interphalangeal_3"));
HAnimJoint168->setCenter(new float[3]{0.05,0.75,0});
HAnimSegment* HAnimSegment169 = new HAnimSegment();
HAnimSegment169->setName(CString("l_carpal_middle_phalanx_3"));
HAnimSegment169->setDEF(CString("hanim_l_carpal_middle_phalanx_3"));
Transform* Transform170 = new Transform();
Transform170->setTranslation(new float[3]{0.05,0.75,0});
Shape* Shape171 = new Shape();
Shape171->setUSE(CString("HAnimJointShape"));
Transform170->addChild(Shape171);

HAnimSegment169->addChild(Transform170);

Shape* Shape172 = new Shape();
Appearance* Appearance173 = new Appearance();
Material* Material174 = new Material();
Material174->setEmissiveColor(new float[3]{1,1,1});
Appearance173->addChild(Material174);

Shape172->addChild(Appearance173);

IndexedLineSet* IndexedLineSet175 = new IndexedLineSet();
IndexedLineSet175->setDEF(CString("PIP3toDIP3"));
IndexedLineSet175->setCoordIndex(new int32_t[2]{0,1}, 2);
Coordinate* Coordinate176 = new Coordinate();
Coordinate176->setPoint(new float[6]{0.05,0.75,0,0.08,0.96,0}, 6);
IndexedLineSet175->addChild(Coordinate176);

Shape172->setGeometry(IndexedLineSet175);

HAnimSegment169->addChild(Shape172);

HAnimJoint168->addChild(HAnimSegment169);

HAnimJoint* HAnimJoint177 = new HAnimJoint();
HAnimJoint177->setName(CString("l_carpal_distal_interphalangeal_3"));
HAnimJoint177->setDEF(CString("hanim_l_carpal_distal_interphalangeal_3"));
HAnimJoint177->setCenter(new float[3]{0.08,0.96,0});
HAnimSegment* HAnimSegment178 = new HAnimSegment();
HAnimSegment178->setName(CString("l_carpal_distal_phalanx_3"));
HAnimSegment178->setDEF(CString("hanim_l_carpal_distal_phalanx_3"));
Transform* Transform179 = new Transform();
Transform179->setTranslation(new float[3]{0.08,0.96,0});
Shape* Shape180 = new Shape();
Shape180->setUSE(CString("HAnimJointShape"));
Transform179->addChild(Shape180);

HAnimSegment178->addChild(Transform179);

Shape* Shape181 = new Shape();
Appearance* Appearance182 = new Appearance();
Material* Material183 = new Material();
Material183->setEmissiveColor(new float[3]{1,1,1});
Appearance182->addChild(Material183);

Shape181->addChild(Appearance182);

IndexedLineSet* IndexedLineSet184 = new IndexedLineSet();
IndexedLineSet184->setDEF(CString("fingertip_l_carpal_distal_interphalangeal_3"));
IndexedLineSet184->setCoordIndex(new int32_t[2]{0,1}, 2);
Coordinate* Coordinate185 = new Coordinate();
Coordinate185->setPoint(new float[6]{0.08,0.96,0,0.09,1.05,0}, 6);
IndexedLineSet184->addChild(Coordinate185);

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
HAnimJoint186->setName(CString("l_midcarpal_4_5"));
HAnimJoint186->setDEF(CString("hanim_l_midcarpal_4_5"));
HAnimJoint186->setCenter(new float[3]{-0.1,0.1,0});
HAnimSegment* HAnimSegment187 = new HAnimSegment();
HAnimSegment187->setName(CString("l_hamate"));
HAnimSegment187->setDEF(CString("hanim_l_hamate"));
Transform* Transform188 = new Transform();
Transform188->setTranslation(new float[3]{-0.1,0.1,0});
Shape* Shape189 = new Shape();
Shape189->setUSE(CString("HAnimNewJointShape"));
Transform188->addChild(Shape189);

HAnimSegment187->addChild(Transform188);

Shape* Shape190 = new Shape();
Appearance* Appearance191 = new Appearance();
Material* Material192 = new Material();
Material192->setEmissiveColor(new float[3]{1,1,1});
Appearance191->addChild(Material192);

Shape190->addChild(Appearance191);

IndexedLineSet* IndexedLineSet193 = new IndexedLineSet();
IndexedLineSet193->setDEF(CString("MC45toCMC4"));
IndexedLineSet193->setCoordIndex(new int32_t[2]{0,1}, 2);
Coordinate* Coordinate194 = new Coordinate();
Coordinate194->setPoint(new float[6]{-0.1,0.1,0,-0.1,0.2,0}, 6);
IndexedLineSet193->addChild(Coordinate194);

Shape190->setGeometry(IndexedLineSet193);

HAnimSegment187->addChild(Shape190);

Shape* Shape195 = new Shape();
Appearance* Appearance196 = new Appearance();
Material* Material197 = new Material();
Material197->setEmissiveColor(new float[3]{1,1,1});
Appearance196->addChild(Material197);

Shape195->addChild(Appearance196);

IndexedLineSet* IndexedLineSet198 = new IndexedLineSet();
IndexedLineSet198->setDEF(CString("MC45toCMC5"));
IndexedLineSet198->setCoordIndex(new int32_t[2]{0,1}, 2);
Coordinate* Coordinate199 = new Coordinate();
Coordinate199->setPoint(new float[6]{-0.1,0.1,0,-0.15,0.17,0}, 6);
IndexedLineSet198->addChild(Coordinate199);

Shape195->setGeometry(IndexedLineSet198);

HAnimSegment187->addChild(Shape195);

HAnimJoint186->addChild(HAnimSegment187);

//ring finger
HAnimJoint* HAnimJoint200 = new HAnimJoint();
HAnimJoint200->setName(CString("l_carpometacarpal_4"));
HAnimJoint200->setDEF(CString("hanim_l_carpometacarpal_4"));
HAnimJoint200->setCenter(new float[3]{-0.1,0.2,0});
HAnimSegment* HAnimSegment201 = new HAnimSegment();
HAnimSegment201->setName(CString("l_metacarpal_4"));
HAnimSegment201->setDEF(CString("hanim_l_metacarpal_4"));
Transform* Transform202 = new Transform();
Transform202->setTranslation(new float[3]{-0.1,0.2,0});
Shape* Shape203 = new Shape();
Shape203->setUSE(CString("HAnimJointShape"));
Transform202->addChild(Shape203);

HAnimSegment201->addChild(Transform202);

Shape* Shape204 = new Shape();
Appearance* Appearance205 = new Appearance();
Material* Material206 = new Material();
Material206->setEmissiveColor(new float[3]{1,1,1});
Appearance205->addChild(Material206);

Shape204->addChild(Appearance205);

IndexedLineSet* IndexedLineSet207 = new IndexedLineSet();
IndexedLineSet207->setDEF(CString("CMC4toMCP4"));
IndexedLineSet207->setCoordIndex(new int32_t[2]{0,1}, 2);
Coordinate* Coordinate208 = new Coordinate();
Coordinate208->setPoint(new float[6]{-0.1,0.2,0,-0.1,0.47,0}, 6);
IndexedLineSet207->addChild(Coordinate208);

Shape204->setGeometry(IndexedLineSet207);

HAnimSegment201->addChild(Shape204);

HAnimJoint200->addChild(HAnimSegment201);

HAnimJoint* HAnimJoint209 = new HAnimJoint();
HAnimJoint209->setName(CString("l_metacarpophalangeal_4"));
HAnimJoint209->setDEF(CString("hanim_l_metacarpophalangeal_4"));
HAnimJoint209->setCenter(new float[3]{-0.1,0.47,0});
HAnimSegment* HAnimSegment210 = new HAnimSegment();
HAnimSegment210->setName(CString("l_carpal_proximal_phalanx_4"));
HAnimSegment210->setDEF(CString("hanim_l_carpal_proximal_phalanx_4"));
Transform* Transform211 = new Transform();
Transform211->setTranslation(new float[3]{-0.1,0.47,0});
Shape* Shape212 = new Shape();
Shape212->setUSE(CString("HAnimJointShape"));
Transform211->addChild(Shape212);

HAnimSegment210->addChild(Transform211);

Shape* Shape213 = new Shape();
Appearance* Appearance214 = new Appearance();
Material* Material215 = new Material();
Material215->setEmissiveColor(new float[3]{1,1,1});
Appearance214->addChild(Material215);

Shape213->addChild(Appearance214);

IndexedLineSet* IndexedLineSet216 = new IndexedLineSet();
IndexedLineSet216->setDEF(CString("MCP4toPIP4"));
IndexedLineSet216->setCoordIndex(new int32_t[2]{0,1}, 2);
Coordinate* Coordinate217 = new Coordinate();
Coordinate217->setPoint(new float[6]{-0.1,0.47,0,-0.1,0.7,0}, 6);
IndexedLineSet216->addChild(Coordinate217);

Shape213->setGeometry(IndexedLineSet216);

HAnimSegment210->addChild(Shape213);

HAnimJoint209->addChild(HAnimSegment210);

HAnimJoint* HAnimJoint218 = new HAnimJoint();
HAnimJoint218->setName(CString("l_carpal_proximal_interphalangeal_4"));
HAnimJoint218->setDEF(CString("hanim_l_carpal_proximal_interphalangeal_4"));
HAnimJoint218->setCenter(new float[3]{-0.1,0.7,0});
HAnimSegment* HAnimSegment219 = new HAnimSegment();
HAnimSegment219->setName(CString("l_carpal_middle_phalanx_4"));
HAnimSegment219->setDEF(CString("hanim_l_carpal_middle_phalanx_4"));
Transform* Transform220 = new Transform();
Transform220->setTranslation(new float[3]{-0.1,0.7,0});
Shape* Shape221 = new Shape();
Shape221->setUSE(CString("HAnimJointShape"));
Transform220->addChild(Shape221);

HAnimSegment219->addChild(Transform220);

Shape* Shape222 = new Shape();
Appearance* Appearance223 = new Appearance();
Material* Material224 = new Material();
Material224->setEmissiveColor(new float[3]{1,1,1});
Appearance223->addChild(Material224);

Shape222->addChild(Appearance223);

IndexedLineSet* IndexedLineSet225 = new IndexedLineSet();
IndexedLineSet225->setDEF(CString("PIP4toDIP4"));
IndexedLineSet225->setCoordIndex(new int32_t[2]{0,1}, 2);
Coordinate* Coordinate226 = new Coordinate();
Coordinate226->setPoint(new float[6]{-0.1,0.7,0,-0.1,0.93,0}, 6);
IndexedLineSet225->addChild(Coordinate226);

Shape222->setGeometry(IndexedLineSet225);

HAnimSegment219->addChild(Shape222);

HAnimJoint218->addChild(HAnimSegment219);

HAnimJoint* HAnimJoint227 = new HAnimJoint();
HAnimJoint227->setName(CString("l_carpal_distal_interphalangeal_4"));
HAnimJoint227->setDEF(CString("hanim_l_carpal_distal_interphalangeal_4"));
HAnimJoint227->setCenter(new float[3]{-0.1,0.93,0});
HAnimSegment* HAnimSegment228 = new HAnimSegment();
HAnimSegment228->setName(CString("l_carpal_distal_phalanx_4"));
HAnimSegment228->setDEF(CString("hanim_l_carpal_distal_phalanx_4"));
Transform* Transform229 = new Transform();
Transform229->setTranslation(new float[3]{-0.1,0.93,0});
Shape* Shape230 = new Shape();
Shape230->setUSE(CString("HAnimJointShape"));
Transform229->addChild(Shape230);

HAnimSegment228->addChild(Transform229);

Shape* Shape231 = new Shape();
Appearance* Appearance232 = new Appearance();
Material* Material233 = new Material();
Material233->setEmissiveColor(new float[3]{1,1,1});
Appearance232->addChild(Material233);

Shape231->addChild(Appearance232);

IndexedLineSet* IndexedLineSet234 = new IndexedLineSet();
IndexedLineSet234->setDEF(CString("fingertip_l_carpal_distal_interphalangeal_4"));
IndexedLineSet234->setCoordIndex(new int32_t[2]{0,1}, 2);
Coordinate* Coordinate235 = new Coordinate();
Coordinate235->setPoint(new float[6]{-0.1,0.93,0,-0.1,1,0}, 6);
IndexedLineSet234->addChild(Coordinate235);

Shape231->setGeometry(IndexedLineSet234);

HAnimSegment228->addChild(Shape231);

HAnimJoint227->addChild(HAnimSegment228);

HAnimJoint218->addChild(HAnimJoint227);

HAnimJoint209->addChild(HAnimJoint218);

HAnimJoint200->addChild(HAnimJoint209);

HAnimJoint186->addChild(HAnimJoint200);

//pinky finger
HAnimJoint* HAnimJoint236 = new HAnimJoint();
HAnimJoint236->setName(CString("l_carpometacarpal_5"));
HAnimJoint236->setDEF(CString("hanim_l_carpometacarpal_5"));
HAnimJoint236->setCenter(new float[3]{-0.15,0.17,0});
HAnimSegment* HAnimSegment237 = new HAnimSegment();
HAnimSegment237->setName(CString("l_metacarpal_5"));
HAnimSegment237->setDEF(CString("hanim_l_metacarpal_5"));
Transform* Transform238 = new Transform();
Transform238->setTranslation(new float[3]{-0.15,0.17,0});
Shape* Shape239 = new Shape();
Shape239->setUSE(CString("HAnimJointShape"));
Transform238->addChild(Shape239);

HAnimSegment237->addChild(Transform238);

Shape* Shape240 = new Shape();
Appearance* Appearance241 = new Appearance();
Material* Material242 = new Material();
Material242->setEmissiveColor(new float[3]{1,1,1});
Appearance241->addChild(Material242);

Shape240->addChild(Appearance241);

IndexedLineSet* IndexedLineSet243 = new IndexedLineSet();
IndexedLineSet243->setDEF(CString("CMC5toMCP5"));
IndexedLineSet243->setCoordIndex(new int32_t[2]{0,1}, 2);
Coordinate* Coordinate244 = new Coordinate();
Coordinate244->setPoint(new float[6]{-0.15,0.17,0,-0.2,0.4,0}, 6);
IndexedLineSet243->addChild(Coordinate244);

Shape240->setGeometry(IndexedLineSet243);

HAnimSegment237->addChild(Shape240);

HAnimJoint236->addChild(HAnimSegment237);

HAnimJoint* HAnimJoint245 = new HAnimJoint();
HAnimJoint245->setName(CString("l_metacarpophalangeal_5"));
HAnimJoint245->setDEF(CString("hanim_l_metacarpophalangeal_5"));
HAnimJoint245->setCenter(new float[3]{-0.2,0.4,0});
HAnimSegment* HAnimSegment246 = new HAnimSegment();
HAnimSegment246->setName(CString("l_carpal_proximal_phalanx_5"));
HAnimSegment246->setDEF(CString("hanim_l_carpal_proximal_phalanx_5"));
Transform* Transform247 = new Transform();
Transform247->setTranslation(new float[3]{-0.2,0.4,0});
Shape* Shape248 = new Shape();
Shape248->setUSE(CString("HAnimJointShape"));
Transform247->addChild(Shape248);

HAnimSegment246->addChild(Transform247);

Shape* Shape249 = new Shape();
Appearance* Appearance250 = new Appearance();
Material* Material251 = new Material();
Material251->setEmissiveColor(new float[3]{1,1,1});
Appearance250->addChild(Material251);

Shape249->addChild(Appearance250);

IndexedLineSet* IndexedLineSet252 = new IndexedLineSet();
IndexedLineSet252->setDEF(CString("MCP5toPIP5"));
IndexedLineSet252->setCoordIndex(new int32_t[2]{0,1}, 2);
Coordinate* Coordinate253 = new Coordinate();
Coordinate253->setPoint(new float[6]{-0.2,0.4,0,-0.23,0.63,0}, 6);
IndexedLineSet252->addChild(Coordinate253);

Shape249->setGeometry(IndexedLineSet252);

HAnimSegment246->addChild(Shape249);

HAnimJoint245->addChild(HAnimSegment246);

HAnimJoint* HAnimJoint254 = new HAnimJoint();
HAnimJoint254->setName(CString("l_carpal_proximal_interphalangeal_5"));
HAnimJoint254->setDEF(CString("hanim_l_carpal_proximal_interphalangeal_5"));
HAnimJoint254->setCenter(new float[3]{-0.23,0.63,0});
HAnimSegment* HAnimSegment255 = new HAnimSegment();
HAnimSegment255->setName(CString("l_carpal_middle_phalanx_5"));
HAnimSegment255->setDEF(CString("hanim_l_carpal_middle_phalanx_5"));
Transform* Transform256 = new Transform();
Transform256->setTranslation(new float[3]{-0.23,0.63,0});
Shape* Shape257 = new Shape();
Shape257->setUSE(CString("HAnimJointShape"));
Transform256->addChild(Shape257);

HAnimSegment255->addChild(Transform256);

Shape* Shape258 = new Shape();
Appearance* Appearance259 = new Appearance();
Material* Material260 = new Material();
Material260->setEmissiveColor(new float[3]{1,1,1});
Appearance259->addChild(Material260);

Shape258->addChild(Appearance259);

IndexedLineSet* IndexedLineSet261 = new IndexedLineSet();
IndexedLineSet261->setDEF(CString("PIP5toDIP5"));
IndexedLineSet261->setCoordIndex(new int32_t[2]{0,1}, 2);
Coordinate* Coordinate262 = new Coordinate();
Coordinate262->setPoint(new float[6]{-0.23,0.63,0,-0.25,0.79,0}, 6);
IndexedLineSet261->addChild(Coordinate262);

Shape258->setGeometry(IndexedLineSet261);

HAnimSegment255->addChild(Shape258);

HAnimJoint254->addChild(HAnimSegment255);

HAnimJoint* HAnimJoint263 = new HAnimJoint();
HAnimJoint263->setName(CString("l_carpal_distal_interphalangeal_5"));
HAnimJoint263->setDEF(CString("hanim_l_carpal_distal_interphalangeal_5"));
HAnimJoint263->setCenter(new float[3]{-0.25,0.79,0});
HAnimSegment* HAnimSegment264 = new HAnimSegment();
HAnimSegment264->setName(CString("l_carpal_distal_phalanx_5"));
HAnimSegment264->setDEF(CString("hanim_l_carpal_distal_phalanx_5"));
Transform* Transform265 = new Transform();
Transform265->setTranslation(new float[3]{-0.25,0.79,0});
Shape* Shape266 = new Shape();
Shape266->setUSE(CString("HAnimJointShape"));
Transform265->addChild(Shape266);

HAnimSegment264->addChild(Transform265);

Shape* Shape267 = new Shape();
Appearance* Appearance268 = new Appearance();
Material* Material269 = new Material();
Material269->setEmissiveColor(new float[3]{1,1,1});
Appearance268->addChild(Material269);

Shape267->addChild(Appearance268);

IndexedLineSet* IndexedLineSet270 = new IndexedLineSet();
IndexedLineSet270->setDEF(CString("fingertip_l_carpal_distal_interphalangeal_5"));
IndexedLineSet270->setCoordIndex(new int32_t[2]{0,1}, 2);
Coordinate* Coordinate271 = new Coordinate();
Coordinate271->setPoint(new float[6]{-0.25,0.79,0,-0.26,0.85,0}, 6);
IndexedLineSet270->addChild(Coordinate271);

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
HAnimJoint272->setUSE(CString("hanim_humanoid_root"));
HAnimHumanoid26->addChild(HAnimJoint272);

HAnimJoint* HAnimJoint273 = new HAnimJoint();
HAnimJoint273->setUSE(CString("hanim_l_carpal_distal_interphalangeal_2"));
HAnimHumanoid26->addChild(HAnimJoint273);

HAnimJoint* HAnimJoint274 = new HAnimJoint();
HAnimJoint274->setUSE(CString("hanim_l_carpal_distal_interphalangeal_3"));
HAnimHumanoid26->addChild(HAnimJoint274);

HAnimJoint* HAnimJoint275 = new HAnimJoint();
HAnimJoint275->setUSE(CString("hanim_l_carpal_distal_interphalangeal_4"));
HAnimHumanoid26->addChild(HAnimJoint275);

HAnimJoint* HAnimJoint276 = new HAnimJoint();
HAnimJoint276->setUSE(CString("hanim_l_carpal_distal_interphalangeal_5"));
HAnimHumanoid26->addChild(HAnimJoint276);

HAnimJoint* HAnimJoint277 = new HAnimJoint();
HAnimJoint277->setUSE(CString("hanim_l_carpal_interphalangeal_1"));
HAnimHumanoid26->addChild(HAnimJoint277);

HAnimJoint* HAnimJoint278 = new HAnimJoint();
HAnimJoint278->setUSE(CString("hanim_l_carpal_proximal_interphalangeal_2"));
HAnimHumanoid26->addChild(HAnimJoint278);

HAnimJoint* HAnimJoint279 = new HAnimJoint();
HAnimJoint279->setUSE(CString("hanim_l_carpal_proximal_interphalangeal_3"));
HAnimHumanoid26->addChild(HAnimJoint279);

HAnimJoint* HAnimJoint280 = new HAnimJoint();
HAnimJoint280->setUSE(CString("hanim_l_carpal_proximal_interphalangeal_4"));
HAnimHumanoid26->addChild(HAnimJoint280);

HAnimJoint* HAnimJoint281 = new HAnimJoint();
HAnimJoint281->setUSE(CString("hanim_l_carpal_proximal_interphalangeal_5"));
HAnimHumanoid26->addChild(HAnimJoint281);

HAnimJoint* HAnimJoint282 = new HAnimJoint();
HAnimJoint282->setUSE(CString("hanim_l_carpometacarpal_1"));
HAnimHumanoid26->addChild(HAnimJoint282);

HAnimJoint* HAnimJoint283 = new HAnimJoint();
HAnimJoint283->setUSE(CString("hanim_l_carpometacarpal_2"));
HAnimHumanoid26->addChild(HAnimJoint283);

HAnimJoint* HAnimJoint284 = new HAnimJoint();
HAnimJoint284->setUSE(CString("hanim_l_carpometacarpal_3"));
HAnimHumanoid26->addChild(HAnimJoint284);

HAnimJoint* HAnimJoint285 = new HAnimJoint();
HAnimJoint285->setUSE(CString("hanim_l_carpometacarpal_4"));
HAnimHumanoid26->addChild(HAnimJoint285);

HAnimJoint* HAnimJoint286 = new HAnimJoint();
HAnimJoint286->setUSE(CString("hanim_l_carpometacarpal_5"));
HAnimHumanoid26->addChild(HAnimJoint286);

HAnimJoint* HAnimJoint287 = new HAnimJoint();
HAnimJoint287->setUSE(CString("hanim_l_metacarpophalangeal_1"));
HAnimHumanoid26->addChild(HAnimJoint287);

HAnimJoint* HAnimJoint288 = new HAnimJoint();
HAnimJoint288->setUSE(CString("hanim_l_metacarpophalangeal_2"));
HAnimHumanoid26->addChild(HAnimJoint288);

HAnimJoint* HAnimJoint289 = new HAnimJoint();
HAnimJoint289->setUSE(CString("hanim_l_metacarpophalangeal_3"));
HAnimHumanoid26->addChild(HAnimJoint289);

HAnimJoint* HAnimJoint290 = new HAnimJoint();
HAnimJoint290->setUSE(CString("hanim_l_metacarpophalangeal_4"));
HAnimHumanoid26->addChild(HAnimJoint290);

HAnimJoint* HAnimJoint291 = new HAnimJoint();
HAnimJoint291->setUSE(CString("hanim_l_metacarpophalangeal_5"));
HAnimHumanoid26->addChild(HAnimJoint291);

HAnimJoint* HAnimJoint292 = new HAnimJoint();
HAnimJoint292->setUSE(CString("hanim_l_midcarpal_1"));
HAnimHumanoid26->addChild(HAnimJoint292);

HAnimJoint* HAnimJoint293 = new HAnimJoint();
HAnimJoint293->setUSE(CString("hanim_l_midcarpal_2"));
HAnimHumanoid26->addChild(HAnimJoint293);

HAnimJoint* HAnimJoint294 = new HAnimJoint();
HAnimJoint294->setUSE(CString("hanim_l_midcarpal_3"));
HAnimHumanoid26->addChild(HAnimJoint294);

HAnimJoint* HAnimJoint295 = new HAnimJoint();
HAnimJoint295->setUSE(CString("hanim_l_midcarpal_4_5"));
HAnimHumanoid26->addChild(HAnimJoint295);

HAnimJoint* HAnimJoint296 = new HAnimJoint();
HAnimJoint296->setUSE(CString("hanim_l_radiocarpal"));
HAnimHumanoid26->addChild(HAnimJoint296);

HAnimSegment* HAnimSegment297 = new HAnimSegment();
HAnimSegment297->setUSE(CString("hanim_l_capitate"));
HAnimHumanoid26->setSegments(HAnimSegment297);

HAnimSegment* HAnimSegment298 = new HAnimSegment();
HAnimSegment298->setUSE(CString("hanim_l_carpal"));
HAnimHumanoid26->setSegments(HAnimSegment298);

HAnimSegment* HAnimSegment299 = new HAnimSegment();
HAnimSegment299->setUSE(CString("hanim_l_carpal_distal_phalanx_1"));
HAnimHumanoid26->setSegments(HAnimSegment299);

HAnimSegment* HAnimSegment300 = new HAnimSegment();
HAnimSegment300->setUSE(CString("hanim_l_carpal_distal_phalanx_2"));
HAnimHumanoid26->setSegments(HAnimSegment300);

HAnimSegment* HAnimSegment301 = new HAnimSegment();
HAnimSegment301->setUSE(CString("hanim_l_carpal_distal_phalanx_3"));
HAnimHumanoid26->setSegments(HAnimSegment301);

HAnimSegment* HAnimSegment302 = new HAnimSegment();
HAnimSegment302->setUSE(CString("hanim_l_carpal_distal_phalanx_4"));
HAnimHumanoid26->setSegments(HAnimSegment302);

HAnimSegment* HAnimSegment303 = new HAnimSegment();
HAnimSegment303->setUSE(CString("hanim_l_carpal_distal_phalanx_5"));
HAnimHumanoid26->setSegments(HAnimSegment303);

HAnimSegment* HAnimSegment304 = new HAnimSegment();
HAnimSegment304->setUSE(CString("hanim_l_carpal_middle_phalanx_2"));
HAnimHumanoid26->setSegments(HAnimSegment304);

HAnimSegment* HAnimSegment305 = new HAnimSegment();
HAnimSegment305->setUSE(CString("hanim_l_carpal_middle_phalanx_3"));
HAnimHumanoid26->setSegments(HAnimSegment305);

HAnimSegment* HAnimSegment306 = new HAnimSegment();
HAnimSegment306->setUSE(CString("hanim_l_carpal_middle_phalanx_4"));
HAnimHumanoid26->setSegments(HAnimSegment306);

HAnimSegment* HAnimSegment307 = new HAnimSegment();
HAnimSegment307->setUSE(CString("hanim_l_carpal_middle_phalanx_5"));
HAnimHumanoid26->setSegments(HAnimSegment307);

HAnimSegment* HAnimSegment308 = new HAnimSegment();
HAnimSegment308->setUSE(CString("hanim_l_carpal_proximal_phalanx_1"));
HAnimHumanoid26->setSegments(HAnimSegment308);

HAnimSegment* HAnimSegment309 = new HAnimSegment();
HAnimSegment309->setUSE(CString("hanim_l_carpal_proximal_phalanx_2"));
HAnimHumanoid26->setSegments(HAnimSegment309);

HAnimSegment* HAnimSegment310 = new HAnimSegment();
HAnimSegment310->setUSE(CString("hanim_l_carpal_proximal_phalanx_3"));
HAnimHumanoid26->setSegments(HAnimSegment310);

HAnimSegment* HAnimSegment311 = new HAnimSegment();
HAnimSegment311->setUSE(CString("hanim_l_carpal_proximal_phalanx_4"));
HAnimHumanoid26->setSegments(HAnimSegment311);

HAnimSegment* HAnimSegment312 = new HAnimSegment();
HAnimSegment312->setUSE(CString("hanim_l_carpal_proximal_phalanx_5"));
HAnimHumanoid26->setSegments(HAnimSegment312);

HAnimSegment* HAnimSegment313 = new HAnimSegment();
HAnimSegment313->setUSE(CString("hanim_l_hamate"));
HAnimHumanoid26->setSegments(HAnimSegment313);

HAnimSegment* HAnimSegment314 = new HAnimSegment();
HAnimSegment314->setUSE(CString("hanim_l_metacarpal_1"));
HAnimHumanoid26->setSegments(HAnimSegment314);

HAnimSegment* HAnimSegment315 = new HAnimSegment();
HAnimSegment315->setUSE(CString("hanim_l_metacarpal_2"));
HAnimHumanoid26->setSegments(HAnimSegment315);

HAnimSegment* HAnimSegment316 = new HAnimSegment();
HAnimSegment316->setUSE(CString("hanim_l_metacarpal_3"));
HAnimHumanoid26->setSegments(HAnimSegment316);

HAnimSegment* HAnimSegment317 = new HAnimSegment();
HAnimSegment317->setUSE(CString("hanim_l_metacarpal_4"));
HAnimHumanoid26->setSegments(HAnimSegment317);

HAnimSegment* HAnimSegment318 = new HAnimSegment();
HAnimSegment318->setUSE(CString("hanim_l_metacarpal_5"));
HAnimHumanoid26->setSegments(HAnimSegment318);

HAnimSegment* HAnimSegment319 = new HAnimSegment();
HAnimSegment319->setUSE(CString("hanim_l_trapezium"));
HAnimHumanoid26->setSegments(HAnimSegment319);

HAnimSegment* HAnimSegment320 = new HAnimSegment();
HAnimSegment320->setUSE(CString("hanim_l_trapezoid"));
HAnimHumanoid26->setSegments(HAnimSegment320);

Scene24->addChild(HAnimHumanoid26);

X3D0->setScene(Scene24);

}
