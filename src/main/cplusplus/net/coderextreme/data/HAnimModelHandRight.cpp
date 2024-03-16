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
meta3->setContent(CString("HAnimModelHandRight.x3d"));
head1->addMeta(meta3);

meta* meta4 = new meta();
meta4->setName(CString("description"));
meta4->setContent(CString("Right hand using high-fidelity definitions for HAnim version 2.0"));
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
meta21->setContent(CString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelHandRight.x3d"));
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
WorldInfo25->setTitle(CString("HAnimModelHandRight.x3d"));
Scene24->addChild(WorldInfo25);

HAnimHumanoid* HAnimHumanoid26 = new HAnimHumanoid();
HAnimHumanoid26->setName(CString("Hand_Right"));
HAnimHumanoid26->setDEF(CString("hanim_Hand_Right"));
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
HAnimJoint30->setName(CString("r_radiocarpal"));
HAnimJoint30->setDEF(CString("hanim_r_radiocarpal"));
HAnimJoint30->setDescription(CString("connection joint of hand to leg above"));
HAnimSegment* HAnimSegment31 = new HAnimSegment();
HAnimSegment31->setName(CString("r_carpal"));
HAnimSegment31->setDEF(CString("hanim_r_carpal"));
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
Coordinate41->setPoint(new float[6]{0,0,0,-0.1,0.1,0}, 6);
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
Coordinate51->setPoint(new float[6]{0,0,0,0.1,0.1,0}, 6);
IndexedLineSet50->addChild(Coordinate51);

Shape47->setGeometry(IndexedLineSet50);

HAnimSegment31->addChild(Shape47);

HAnimJoint30->addChild(HAnimSegment31);

//MC1
HAnimJoint* HAnimJoint52 = new HAnimJoint();
HAnimJoint52->setName(CString("r_midcarpal_1"));
HAnimJoint52->setDEF(CString("hanim_r_midcarpal_1"));
HAnimJoint52->setCenter(new float[3]{-0.14,0.09,0});
HAnimSegment* HAnimSegment53 = new HAnimSegment();
HAnimSegment53->setName(CString("r_trapezium"));
HAnimSegment53->setDEF(CString("hanim_r_trapezium"));
Transform* Transform54 = new Transform();
Transform54->setTranslation(new float[3]{-0.14,0.09,0});
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
Coordinate63->setPoint(new float[6]{-0.1,0.1,0,-0.2,0.15,0}, 6);
IndexedLineSet62->addChild(Coordinate63);

Shape59->setGeometry(IndexedLineSet62);

HAnimSegment53->addChild(Shape59);

HAnimJoint52->addChild(HAnimSegment53);

//thumb finger
HAnimJoint* HAnimJoint64 = new HAnimJoint();
HAnimJoint64->setName(CString("r_carpometacarpal_1"));
HAnimJoint64->setDEF(CString("hanim_r_carpometacarpal_1"));
HAnimJoint64->setCenter(new float[3]{-0.2,0.15,0});
HAnimSegment* HAnimSegment65 = new HAnimSegment();
HAnimSegment65->setName(CString("r_metacarpal_1"));
HAnimSegment65->setDEF(CString("hanim_r_metacarpal_1"));
Transform* Transform66 = new Transform();
Transform66->setTranslation(new float[3]{-0.2,0.15,0});
Shape* Shape67 = new Shape();
Shape67->setUSE(CString("HAnimJointShape"));
Transform66->addChild(Shape67);

HAnimSegment65->addChild(Transform66);

Shape* Shape68 = new Shape();
Appearance* Appearance69 = new Appearance();
Material* Material70 = new Material();
Material70->setEmissiveColor(new float[3]{1,1,1});
Appearance69->addChild(Material70);

Shape68->addChild(Appearance69);

IndexedLineSet* IndexedLineSet71 = new IndexedLineSet();
IndexedLineSet71->setDEF(CString("CMC1toMCP1xxx"));
IndexedLineSet71->setCoordIndex(new int32_t[2]{0,1}, 2);
Coordinate* Coordinate72 = new Coordinate();
Coordinate72->setPoint(new float[6]{-0.2,0.15,0,-0.3,0.3,0}, 6);
IndexedLineSet71->addChild(Coordinate72);

Shape68->setGeometry(IndexedLineSet71);

HAnimSegment65->addChild(Shape68);

HAnimJoint64->addChild(HAnimSegment65);

HAnimJoint* HAnimJoint73 = new HAnimJoint();
HAnimJoint73->setName(CString("r_metacarpophalangeal_1"));
HAnimJoint73->setDEF(CString("hanim_r_metacarpophalangeal_1"));
HAnimJoint73->setCenter(new float[3]{-0.3,0.3,0});
HAnimSegment* HAnimSegment74 = new HAnimSegment();
HAnimSegment74->setName(CString("r_carpal_proximal_phalanx_1"));
HAnimSegment74->setDEF(CString("hanim_r_carpal_proximal_phalanx_1"));
Transform* Transform75 = new Transform();
Transform75->setTranslation(new float[3]{-0.3,0.3,0});
Shape* Shape76 = new Shape();
Shape76->setUSE(CString("HAnimJointShape"));
Transform75->addChild(Shape76);

HAnimSegment74->addChild(Transform75);

Shape* Shape77 = new Shape();
Appearance* Appearance78 = new Appearance();
Material* Material79 = new Material();
Material79->setEmissiveColor(new float[3]{1,1,1});
Appearance78->addChild(Material79);

Shape77->addChild(Appearance78);

IndexedLineSet* IndexedLineSet80 = new IndexedLineSet();
IndexedLineSet80->setDEF(CString("MCP11toIP1"));
IndexedLineSet80->setCoordIndex(new int32_t[2]{0,1}, 2);
Coordinate* Coordinate81 = new Coordinate();
Coordinate81->setPoint(new float[6]{-0.3,0.3,0,-0.35,0.4,0}, 6);
IndexedLineSet80->addChild(Coordinate81);

Shape77->setGeometry(IndexedLineSet80);

HAnimSegment74->addChild(Shape77);

HAnimJoint73->addChild(HAnimSegment74);

HAnimJoint* HAnimJoint82 = new HAnimJoint();
HAnimJoint82->setName(CString("r_carpal_interphalangeal_1"));
HAnimJoint82->setDEF(CString("hanim_r_carpal_interphalangeal_1"));
HAnimJoint82->setCenter(new float[3]{-0.35,0.4,0});
HAnimSegment* HAnimSegment83 = new HAnimSegment();
HAnimSegment83->setName(CString("r_carpal_distal_phalanx_1"));
HAnimSegment83->setDEF(CString("hanim_r_carpal_distal_phalanx_1"));
Transform* Transform84 = new Transform();
Transform84->setTranslation(new float[3]{-0.35,0.4,0});
Shape* Shape85 = new Shape();
Shape85->setUSE(CString("HAnimJointShape"));
Transform84->addChild(Shape85);

HAnimSegment83->addChild(Transform84);

Shape* Shape86 = new Shape();
Appearance* Appearance87 = new Appearance();
Material* Material88 = new Material();
Material88->setEmissiveColor(new float[3]{1,1,1});
Appearance87->addChild(Material88);

Shape86->addChild(Appearance87);

IndexedLineSet* IndexedLineSet89 = new IndexedLineSet();
IndexedLineSet89->setDEF(CString("fingertip_r_carpal_interphalangeal_1"));
IndexedLineSet89->setCoordIndex(new int32_t[2]{0,1}, 2);
Coordinate* Coordinate90 = new Coordinate();
Coordinate90->setPoint(new float[6]{-0.35,0.4,0,-0.36,0.45,0}, 6);
IndexedLineSet89->addChild(Coordinate90);

Shape86->setGeometry(IndexedLineSet89);

HAnimSegment83->addChild(Shape86);

HAnimJoint82->addChild(HAnimSegment83);

HAnimJoint73->addChild(HAnimJoint82);

HAnimJoint64->addChild(HAnimJoint73);

HAnimJoint52->addChild(HAnimJoint64);

HAnimJoint30->addChild(HAnimJoint52);

//MC2
HAnimJoint* HAnimJoint91 = new HAnimJoint();
HAnimJoint91->setName(CString("r_midcarpal_2"));
HAnimJoint91->setDEF(CString("hanim_r_midcarpal_2"));
HAnimJoint91->setCenter(new float[3]{-0.07,0.07,0});
HAnimSegment* HAnimSegment92 = new HAnimSegment();
HAnimSegment92->setName(CString("r_trapezoid"));
HAnimSegment92->setDEF(CString("hanim_r_trapezoid"));
Transform* Transform93 = new Transform();
Transform93->setTranslation(new float[3]{-0.07,0.07,0});
Shape* Shape94 = new Shape();
Shape94->setUSE(CString("HAnimNewJointShape"));
Transform93->addChild(Shape94);

HAnimSegment92->addChild(Transform93);

Shape* Shape95 = new Shape();
Appearance* Appearance96 = new Appearance();
Material* Material97 = new Material();
Material97->setEmissiveColor(new float[3]{1,1,1});
Appearance96->addChild(Material97);

Shape95->addChild(Appearance96);

IndexedLineSet* IndexedLineSet98 = new IndexedLineSet();
IndexedLineSet98->setDEF(CString("MC12toCMC2"));
IndexedLineSet98->setCoordIndex(new int32_t[2]{0,1}, 2);
Coordinate* Coordinate99 = new Coordinate();
Coordinate99->setPoint(new float[6]{-0.1,0.1,0,-0.1,0.2,0}, 6);
IndexedLineSet98->addChild(Coordinate99);

Shape95->setGeometry(IndexedLineSet98);

HAnimSegment92->addChild(Shape95);

HAnimJoint91->addChild(HAnimSegment92);

//index finger
HAnimJoint* HAnimJoint100 = new HAnimJoint();
HAnimJoint100->setName(CString("r_carpometacarpal_2"));
HAnimJoint100->setDEF(CString("hanim_r_carpometacarpal_2"));
HAnimJoint100->setCenter(new float[3]{-0.1,0.2,0});
HAnimSegment* HAnimSegment101 = new HAnimSegment();
HAnimSegment101->setName(CString("r_metacarpal_2"));
HAnimSegment101->setDEF(CString("hanim_r_metacarpal_2"));
Transform* Transform102 = new Transform();
Transform102->setTranslation(new float[3]{-0.1,0.2,0});
Shape* Shape103 = new Shape();
Shape103->setUSE(CString("HAnimJointShape"));
Transform102->addChild(Shape103);

HAnimSegment101->addChild(Transform102);

Shape* Shape104 = new Shape();
Appearance* Appearance105 = new Appearance();
Material* Material106 = new Material();
Material106->setEmissiveColor(new float[3]{1,1,1});
Appearance105->addChild(Material106);

Shape104->addChild(Appearance105);

IndexedLineSet* IndexedLineSet107 = new IndexedLineSet();
IndexedLineSet107->setDEF(CString("CMC2toMCP2"));
IndexedLineSet107->setCoordIndex(new int32_t[2]{0,1}, 2);
Coordinate* Coordinate108 = new Coordinate();
Coordinate108->setPoint(new float[6]{-0.1,0.2,0,-0.15,0.5,0}, 6);
IndexedLineSet107->addChild(Coordinate108);

Shape104->setGeometry(IndexedLineSet107);

HAnimSegment101->addChild(Shape104);

HAnimJoint100->addChild(HAnimSegment101);

HAnimJoint* HAnimJoint109 = new HAnimJoint();
HAnimJoint109->setName(CString("r_metacarpophalangeal_2"));
HAnimJoint109->setDEF(CString("hanim_r_metacarpophalangeal_2"));
HAnimJoint109->setCenter(new float[3]{-0.15,0.5,0});
HAnimSegment* HAnimSegment110 = new HAnimSegment();
HAnimSegment110->setName(CString("r_carpal_proximal_phalanx_2"));
HAnimSegment110->setDEF(CString("hanim_r_carpal_proximal_phalanx_2"));
Transform* Transform111 = new Transform();
Transform111->setTranslation(new float[3]{-0.15,0.5,0});
Shape* Shape112 = new Shape();
Shape112->setUSE(CString("HAnimJointShape"));
Transform111->addChild(Shape112);

HAnimSegment110->addChild(Transform111);

Shape* Shape113 = new Shape();
Appearance* Appearance114 = new Appearance();
Material* Material115 = new Material();
Material115->setEmissiveColor(new float[3]{1,1,1});
Appearance114->addChild(Material115);

Shape113->addChild(Appearance114);

IndexedLineSet* IndexedLineSet116 = new IndexedLineSet();
IndexedLineSet116->setDEF(CString("MCP2toPIP2"));
IndexedLineSet116->setCoordIndex(new int32_t[2]{0,1}, 2);
Coordinate* Coordinate117 = new Coordinate();
Coordinate117->setPoint(new float[6]{-0.15,0.5,0,-0.2,0.7,0}, 6);
IndexedLineSet116->addChild(Coordinate117);

Shape113->setGeometry(IndexedLineSet116);

HAnimSegment110->addChild(Shape113);

HAnimJoint109->addChild(HAnimSegment110);

HAnimJoint* HAnimJoint118 = new HAnimJoint();
HAnimJoint118->setName(CString("r_carpal_proximal_interphalangeal_2"));
HAnimJoint118->setDEF(CString("hanim_r_carpal_proximal_interphalangeal_2"));
HAnimJoint118->setCenter(new float[3]{-0.2,0.7,0});
HAnimSegment* HAnimSegment119 = new HAnimSegment();
HAnimSegment119->setName(CString("r_carpal_middle_phalanx_2"));
HAnimSegment119->setDEF(CString("hanim_r_carpal_middle_phalanx_2"));
Transform* Transform120 = new Transform();
Transform120->setTranslation(new float[3]{-0.2,0.7,0});
Shape* Shape121 = new Shape();
Shape121->setUSE(CString("HAnimJointShape"));
Transform120->addChild(Shape121);

HAnimSegment119->addChild(Transform120);

Shape* Shape122 = new Shape();
Appearance* Appearance123 = new Appearance();
Material* Material124 = new Material();
Material124->setEmissiveColor(new float[3]{1,1,1});
Appearance123->addChild(Material124);

Shape122->addChild(Appearance123);

IndexedLineSet* IndexedLineSet125 = new IndexedLineSet();
IndexedLineSet125->setDEF(CString("PIP2toDIP2"));
IndexedLineSet125->setCoordIndex(new int32_t[2]{0,1}, 2);
Coordinate* Coordinate126 = new Coordinate();
Coordinate126->setPoint(new float[6]{-0.2,0.7,0,-0.24,0.87,0}, 6);
IndexedLineSet125->addChild(Coordinate126);

Shape122->setGeometry(IndexedLineSet125);

HAnimSegment119->addChild(Shape122);

HAnimJoint118->addChild(HAnimSegment119);

HAnimJoint* HAnimJoint127 = new HAnimJoint();
HAnimJoint127->setName(CString("r_carpal_distal_interphalangeal_2"));
HAnimJoint127->setDEF(CString("hanim_r_carpal_distal_interphalangeal_2"));
HAnimJoint127->setCenter(new float[3]{-0.24,0.87,0});
HAnimSegment* HAnimSegment128 = new HAnimSegment();
HAnimSegment128->setName(CString("r_carpal_distal_phalanx_2"));
HAnimSegment128->setDEF(CString("hanim_r_carpal_distal_phalanx_2"));
Transform* Transform129 = new Transform();
Transform129->setTranslation(new float[3]{-0.24,0.87,0});
Shape* Shape130 = new Shape();
Shape130->setUSE(CString("HAnimJointShape"));
Transform129->addChild(Shape130);

HAnimSegment128->addChild(Transform129);

Shape* Shape131 = new Shape();
Appearance* Appearance132 = new Appearance();
Material* Material133 = new Material();
Material133->setEmissiveColor(new float[3]{1,1,1});
Appearance132->addChild(Material133);

Shape131->addChild(Appearance132);

IndexedLineSet* IndexedLineSet134 = new IndexedLineSet();
IndexedLineSet134->setDEF(CString("fingertip_r_carpal_distal_interphalangeal_2"));
IndexedLineSet134->setCoordIndex(new int32_t[2]{0,1}, 2);
Coordinate* Coordinate135 = new Coordinate();
Coordinate135->setPoint(new float[6]{-0.24,0.87,0,-0.26,0.93,0}, 6);
IndexedLineSet134->addChild(Coordinate135);

Shape131->setGeometry(IndexedLineSet134);

HAnimSegment128->addChild(Shape131);

HAnimJoint127->addChild(HAnimSegment128);

HAnimJoint118->addChild(HAnimJoint127);

HAnimJoint109->addChild(HAnimJoint118);

HAnimJoint100->addChild(HAnimJoint109);

HAnimJoint91->addChild(HAnimJoint100);

HAnimJoint30->addChild(HAnimJoint91);

//MC3
HAnimJoint* HAnimJoint136 = new HAnimJoint();
HAnimJoint136->setName(CString("r_midcarpal_3"));
HAnimJoint136->setDEF(CString("hanim_r_midcarpal_3"));
HAnimJoint136->setCenter(new float[3]{0,0.07,0});
HAnimSegment* HAnimSegment137 = new HAnimSegment();
HAnimSegment137->setName(CString("r_capitate"));
HAnimSegment137->setDEF(CString("hanim_r_capitate"));
Transform* Transform138 = new Transform();
Transform138->setTranslation(new float[3]{0,0.07,0});
Shape* Shape139 = new Shape();
Shape139->setUSE(CString("HAnimNewJointShape"));
Transform138->addChild(Shape139);

HAnimSegment137->addChild(Transform138);

Shape* Shape140 = new Shape();
Appearance* Appearance141 = new Appearance();
Material* Material142 = new Material();
Material142->setEmissiveColor(new float[3]{1,1,1});
Appearance141->addChild(Material142);

Shape140->addChild(Appearance141);

IndexedLineSet* IndexedLineSet143 = new IndexedLineSet();
IndexedLineSet143->setDEF(CString("MC3toCMC3"));
IndexedLineSet143->setCoordIndex(new int32_t[2]{0,1}, 2);
Coordinate* Coordinate144 = new Coordinate();
Coordinate144->setPoint(new float[6]{0,0.07,0,0,0.2,0}, 6);
IndexedLineSet143->addChild(Coordinate144);

Shape140->setGeometry(IndexedLineSet143);

HAnimSegment137->addChild(Shape140);

HAnimJoint136->addChild(HAnimSegment137);

//Middle fingle
HAnimJoint* HAnimJoint145 = new HAnimJoint();
HAnimJoint145->setName(CString("r_carpometacarpal_3"));
HAnimJoint145->setDEF(CString("hanim_r_carpometacarpal_3"));
HAnimJoint145->setCenter(new float[3]{0,0.2,0});
HAnimSegment* HAnimSegment146 = new HAnimSegment();
HAnimSegment146->setName(CString("r_metacarpal_3"));
HAnimSegment146->setDEF(CString("hanim_r_metacarpal_3"));
Transform* Transform147 = new Transform();
Transform147->setTranslation(new float[3]{0,0.2,0});
Shape* Shape148 = new Shape();
Shape148->setUSE(CString("HAnimJointShape"));
Transform147->addChild(Shape148);

HAnimSegment146->addChild(Transform147);

Shape* Shape149 = new Shape();
Appearance* Appearance150 = new Appearance();
Material* Material151 = new Material();
Material151->setEmissiveColor(new float[3]{1,1,1});
Appearance150->addChild(Material151);

Shape149->addChild(Appearance150);

IndexedLineSet* IndexedLineSet152 = new IndexedLineSet();
IndexedLineSet152->setDEF(CString("CMC3toMCP3"));
IndexedLineSet152->setCoordIndex(new int32_t[2]{0,1}, 2);
Coordinate* Coordinate153 = new Coordinate();
Coordinate153->setPoint(new float[6]{0,0.2,0,-0.03,0.5,0}, 6);
IndexedLineSet152->addChild(Coordinate153);

Shape149->setGeometry(IndexedLineSet152);

HAnimSegment146->addChild(Shape149);

HAnimJoint145->addChild(HAnimSegment146);

HAnimJoint* HAnimJoint154 = new HAnimJoint();
HAnimJoint154->setName(CString("r_metacarpophalangeal_3"));
HAnimJoint154->setDEF(CString("hanim_r_metacarpophalangeal_3"));
HAnimJoint154->setCenter(new float[3]{-0.03,0.5,0});
HAnimSegment* HAnimSegment155 = new HAnimSegment();
HAnimSegment155->setName(CString("r_carpal_proximal_phalanx_3"));
HAnimSegment155->setDEF(CString("hanim_r_carpal_proximal_phalanx_3"));
Transform* Transform156 = new Transform();
Transform156->setTranslation(new float[3]{-0.03,0.5,0});
Shape* Shape157 = new Shape();
Shape157->setUSE(CString("HAnimJointShape"));
Transform156->addChild(Shape157);

HAnimSegment155->addChild(Transform156);

Shape* Shape158 = new Shape();
Appearance* Appearance159 = new Appearance();
Material* Material160 = new Material();
Material160->setEmissiveColor(new float[3]{1,1,1});
Appearance159->addChild(Material160);

Shape158->addChild(Appearance159);

IndexedLineSet* IndexedLineSet161 = new IndexedLineSet();
IndexedLineSet161->setDEF(CString("MCP3toPIP3"));
IndexedLineSet161->setCoordIndex(new int32_t[2]{0,1}, 2);
Coordinate* Coordinate162 = new Coordinate();
Coordinate162->setPoint(new float[6]{-0.03,0.5,0,-0.05,0.75,0}, 6);
IndexedLineSet161->addChild(Coordinate162);

Shape158->setGeometry(IndexedLineSet161);

HAnimSegment155->addChild(Shape158);

HAnimJoint154->addChild(HAnimSegment155);

HAnimJoint* HAnimJoint163 = new HAnimJoint();
HAnimJoint163->setName(CString("r_carpal_proximal_interphalangeal_3"));
HAnimJoint163->setDEF(CString("hanim_r_carpal_proximal_interphalangeal_3"));
HAnimJoint163->setCenter(new float[3]{-0.05,0.75,0});
HAnimSegment* HAnimSegment164 = new HAnimSegment();
HAnimSegment164->setName(CString("r_carpal_middle_phalanx_3"));
HAnimSegment164->setDEF(CString("hanim_r_carpal_middle_phalanx_3"));
Transform* Transform165 = new Transform();
Transform165->setTranslation(new float[3]{-0.05,0.75,0});
Shape* Shape166 = new Shape();
Shape166->setUSE(CString("HAnimJointShape"));
Transform165->addChild(Shape166);

HAnimSegment164->addChild(Transform165);

Shape* Shape167 = new Shape();
Appearance* Appearance168 = new Appearance();
Material* Material169 = new Material();
Material169->setEmissiveColor(new float[3]{1,1,1});
Appearance168->addChild(Material169);

Shape167->addChild(Appearance168);

IndexedLineSet* IndexedLineSet170 = new IndexedLineSet();
IndexedLineSet170->setDEF(CString("PIP3toDIP3"));
IndexedLineSet170->setCoordIndex(new int32_t[2]{0,1}, 2);
Coordinate* Coordinate171 = new Coordinate();
Coordinate171->setPoint(new float[6]{-0.05,0.75,0,-0.08,0.96,0}, 6);
IndexedLineSet170->addChild(Coordinate171);

Shape167->setGeometry(IndexedLineSet170);

HAnimSegment164->addChild(Shape167);

HAnimJoint163->addChild(HAnimSegment164);

HAnimJoint* HAnimJoint172 = new HAnimJoint();
HAnimJoint172->setName(CString("r_carpal_distal_interphalangeal_3"));
HAnimJoint172->setDEF(CString("hanim_r_carpal_distal_interphalangeal_3"));
HAnimJoint172->setCenter(new float[3]{-0.08,0.96,0});
HAnimSegment* HAnimSegment173 = new HAnimSegment();
HAnimSegment173->setName(CString("r_carpal_distal_phalanx_3"));
HAnimSegment173->setDEF(CString("hanim_r_carpal_distal_phalanx_3"));
Transform* Transform174 = new Transform();
Transform174->setTranslation(new float[3]{-0.08,0.96,0});
Shape* Shape175 = new Shape();
Shape175->setUSE(CString("HAnimJointShape"));
Transform174->addChild(Shape175);

HAnimSegment173->addChild(Transform174);

Shape* Shape176 = new Shape();
Appearance* Appearance177 = new Appearance();
Material* Material178 = new Material();
Material178->setEmissiveColor(new float[3]{1,1,1});
Appearance177->addChild(Material178);

Shape176->addChild(Appearance177);

IndexedLineSet* IndexedLineSet179 = new IndexedLineSet();
IndexedLineSet179->setDEF(CString("fingertip_r_carpal_distal_interphalangeal_3"));
IndexedLineSet179->setCoordIndex(new int32_t[2]{0,1}, 2);
Coordinate* Coordinate180 = new Coordinate();
Coordinate180->setPoint(new float[6]{-0.08,0.96,0,-0.09,1.05,0}, 6);
IndexedLineSet179->addChild(Coordinate180);

Shape176->setGeometry(IndexedLineSet179);

HAnimSegment173->addChild(Shape176);

HAnimJoint172->addChild(HAnimSegment173);

HAnimJoint163->addChild(HAnimJoint172);

HAnimJoint154->addChild(HAnimJoint163);

HAnimJoint145->addChild(HAnimJoint154);

HAnimJoint136->addChild(HAnimJoint145);

HAnimJoint30->addChild(HAnimJoint136);

//MC4_5
HAnimJoint* HAnimJoint181 = new HAnimJoint();
HAnimJoint181->setName(CString("r_midcarpal_4_5"));
HAnimJoint181->setDEF(CString("hanim_r_midcarpal_4_5"));
HAnimJoint181->setCenter(new float[3]{0.1,0.1,0});
HAnimSegment* HAnimSegment182 = new HAnimSegment();
HAnimSegment182->setName(CString("r_hamate"));
HAnimSegment182->setDEF(CString("hanim_r_hamate"));
Transform* Transform183 = new Transform();
Transform183->setTranslation(new float[3]{0.1,0.1,0});
Shape* Shape184 = new Shape();
Shape184->setUSE(CString("HAnimNewJointShape"));
Transform183->addChild(Shape184);

HAnimSegment182->addChild(Transform183);

Shape* Shape185 = new Shape();
Appearance* Appearance186 = new Appearance();
Material* Material187 = new Material();
Material187->setEmissiveColor(new float[3]{1,1,1});
Appearance186->addChild(Material187);

Shape185->addChild(Appearance186);

IndexedLineSet* IndexedLineSet188 = new IndexedLineSet();
IndexedLineSet188->setDEF(CString("MC45toCMC4"));
IndexedLineSet188->setCoordIndex(new int32_t[2]{0,1}, 2);
Coordinate* Coordinate189 = new Coordinate();
Coordinate189->setPoint(new float[6]{0.1,0.1,0,0.1,0.2,0}, 6);
IndexedLineSet188->addChild(Coordinate189);

Shape185->setGeometry(IndexedLineSet188);

HAnimSegment182->addChild(Shape185);

Shape* Shape190 = new Shape();
Appearance* Appearance191 = new Appearance();
Material* Material192 = new Material();
Material192->setEmissiveColor(new float[3]{1,1,1});
Appearance191->addChild(Material192);

Shape190->addChild(Appearance191);

IndexedLineSet* IndexedLineSet193 = new IndexedLineSet();
IndexedLineSet193->setDEF(CString("MC45toCMC5"));
IndexedLineSet193->setCoordIndex(new int32_t[2]{0,1}, 2);
Coordinate* Coordinate194 = new Coordinate();
Coordinate194->setPoint(new float[6]{0.1,0.1,0,0.15,0.17,0}, 6);
IndexedLineSet193->addChild(Coordinate194);

Shape190->setGeometry(IndexedLineSet193);

HAnimSegment182->addChild(Shape190);

HAnimJoint181->addChild(HAnimSegment182);

//ring finger
HAnimJoint* HAnimJoint195 = new HAnimJoint();
HAnimJoint195->setName(CString("r_carpometacarpal_4"));
HAnimJoint195->setDEF(CString("hanim_r_carpometacarpal_4"));
HAnimJoint195->setCenter(new float[3]{0.1,0.2,0});
HAnimSegment* HAnimSegment196 = new HAnimSegment();
HAnimSegment196->setName(CString("r_metacarpal_4"));
HAnimSegment196->setDEF(CString("hanim_r_metacarpal_4"));
Transform* Transform197 = new Transform();
Transform197->setTranslation(new float[3]{0.1,0.2,0});
Shape* Shape198 = new Shape();
Shape198->setUSE(CString("HAnimJointShape"));
Transform197->addChild(Shape198);

HAnimSegment196->addChild(Transform197);

Shape* Shape199 = new Shape();
Appearance* Appearance200 = new Appearance();
Material* Material201 = new Material();
Material201->setEmissiveColor(new float[3]{1,1,1});
Appearance200->addChild(Material201);

Shape199->addChild(Appearance200);

IndexedLineSet* IndexedLineSet202 = new IndexedLineSet();
IndexedLineSet202->setDEF(CString("CMC4toMCP4"));
IndexedLineSet202->setCoordIndex(new int32_t[2]{0,1}, 2);
Coordinate* Coordinate203 = new Coordinate();
Coordinate203->setPoint(new float[6]{0.1,0.2,0,0.1,0.47,0}, 6);
IndexedLineSet202->addChild(Coordinate203);

Shape199->setGeometry(IndexedLineSet202);

HAnimSegment196->addChild(Shape199);

HAnimJoint195->addChild(HAnimSegment196);

HAnimJoint* HAnimJoint204 = new HAnimJoint();
HAnimJoint204->setName(CString("r_metacarpophalangeal_4"));
HAnimJoint204->setDEF(CString("hanim_r_metacarpophalangeal_4"));
HAnimJoint204->setCenter(new float[3]{0.1,0.47,0});
HAnimSegment* HAnimSegment205 = new HAnimSegment();
HAnimSegment205->setName(CString("r_carpal_proximal_phalanx_4"));
HAnimSegment205->setDEF(CString("hanim_r_carpal_proximal_phalanx_4"));
Transform* Transform206 = new Transform();
Transform206->setTranslation(new float[3]{0.1,0.47,0});
Shape* Shape207 = new Shape();
Shape207->setUSE(CString("HAnimJointShape"));
Transform206->addChild(Shape207);

HAnimSegment205->addChild(Transform206);

Shape* Shape208 = new Shape();
Appearance* Appearance209 = new Appearance();
Material* Material210 = new Material();
Material210->setEmissiveColor(new float[3]{1,1,1});
Appearance209->addChild(Material210);

Shape208->addChild(Appearance209);

IndexedLineSet* IndexedLineSet211 = new IndexedLineSet();
IndexedLineSet211->setDEF(CString("MCP4toPIP4"));
IndexedLineSet211->setCoordIndex(new int32_t[2]{0,1}, 2);
Coordinate* Coordinate212 = new Coordinate();
Coordinate212->setPoint(new float[6]{0.1,0.47,0,0.1,0.7,0}, 6);
IndexedLineSet211->addChild(Coordinate212);

Shape208->setGeometry(IndexedLineSet211);

HAnimSegment205->addChild(Shape208);

HAnimJoint204->addChild(HAnimSegment205);

HAnimJoint* HAnimJoint213 = new HAnimJoint();
HAnimJoint213->setName(CString("r_carpal_proximal_interphalangeal_4"));
HAnimJoint213->setDEF(CString("hanim_r_carpal_proximal_interphalangeal_4"));
HAnimJoint213->setCenter(new float[3]{0.1,0.7,0});
HAnimSegment* HAnimSegment214 = new HAnimSegment();
HAnimSegment214->setName(CString("r_carpal_middle_phalanx_4"));
HAnimSegment214->setDEF(CString("hanim_r_carpal_middle_phalanx_4"));
Transform* Transform215 = new Transform();
Transform215->setTranslation(new float[3]{0.1,0.7,0});
Shape* Shape216 = new Shape();
Shape216->setUSE(CString("HAnimJointShape"));
Transform215->addChild(Shape216);

HAnimSegment214->addChild(Transform215);

Shape* Shape217 = new Shape();
Appearance* Appearance218 = new Appearance();
Material* Material219 = new Material();
Material219->setEmissiveColor(new float[3]{1,1,1});
Appearance218->addChild(Material219);

Shape217->addChild(Appearance218);

IndexedLineSet* IndexedLineSet220 = new IndexedLineSet();
IndexedLineSet220->setDEF(CString("PIP4toDIP4"));
IndexedLineSet220->setCoordIndex(new int32_t[2]{0,1}, 2);
Coordinate* Coordinate221 = new Coordinate();
Coordinate221->setPoint(new float[6]{0.1,0.7,0,0.1,0.93,0}, 6);
IndexedLineSet220->addChild(Coordinate221);

Shape217->setGeometry(IndexedLineSet220);

HAnimSegment214->addChild(Shape217);

HAnimJoint213->addChild(HAnimSegment214);

HAnimJoint* HAnimJoint222 = new HAnimJoint();
HAnimJoint222->setName(CString("r_carpal_distal_interphalangeal_4"));
HAnimJoint222->setDEF(CString("hanim_r_carpal_distal_interphalangeal_4"));
HAnimJoint222->setCenter(new float[3]{0.1,0.93,0});
HAnimSegment* HAnimSegment223 = new HAnimSegment();
HAnimSegment223->setName(CString("r_carpal_distal_phalanx_4"));
HAnimSegment223->setDEF(CString("hanim_r_carpal_distal_phalanx_4"));
Transform* Transform224 = new Transform();
Transform224->setTranslation(new float[3]{0.1,0.93,0});
Shape* Shape225 = new Shape();
Shape225->setUSE(CString("HAnimJointShape"));
Transform224->addChild(Shape225);

HAnimSegment223->addChild(Transform224);

Shape* Shape226 = new Shape();
Appearance* Appearance227 = new Appearance();
Material* Material228 = new Material();
Material228->setEmissiveColor(new float[3]{1,1,1});
Appearance227->addChild(Material228);

Shape226->addChild(Appearance227);

IndexedLineSet* IndexedLineSet229 = new IndexedLineSet();
IndexedLineSet229->setDEF(CString("fingertip_r_carpal_distal_interphalangeal_4"));
IndexedLineSet229->setCoordIndex(new int32_t[2]{0,1}, 2);
Coordinate* Coordinate230 = new Coordinate();
Coordinate230->setPoint(new float[6]{0.1,0.93,0,0.1,1,0}, 6);
IndexedLineSet229->addChild(Coordinate230);

Shape226->setGeometry(IndexedLineSet229);

HAnimSegment223->addChild(Shape226);

HAnimJoint222->addChild(HAnimSegment223);

HAnimJoint213->addChild(HAnimJoint222);

HAnimJoint204->addChild(HAnimJoint213);

HAnimJoint195->addChild(HAnimJoint204);

HAnimJoint181->addChild(HAnimJoint195);

//pinky finger
HAnimJoint* HAnimJoint231 = new HAnimJoint();
HAnimJoint231->setName(CString("r_carpometacarpal_5"));
HAnimJoint231->setDEF(CString("hanim_r_carpometacarpal_5"));
HAnimJoint231->setCenter(new float[3]{0.15,0.17,0});
HAnimSegment* HAnimSegment232 = new HAnimSegment();
HAnimSegment232->setName(CString("r_metacarpal_5"));
HAnimSegment232->setDEF(CString("hanim_r_metacarpal_5"));
Transform* Transform233 = new Transform();
Transform233->setTranslation(new float[3]{0.15,0.17,0});
Shape* Shape234 = new Shape();
Shape234->setUSE(CString("HAnimJointShape"));
Transform233->addChild(Shape234);

HAnimSegment232->addChild(Transform233);

Shape* Shape235 = new Shape();
Appearance* Appearance236 = new Appearance();
Material* Material237 = new Material();
Material237->setEmissiveColor(new float[3]{1,1,1});
Appearance236->addChild(Material237);

Shape235->addChild(Appearance236);

IndexedLineSet* IndexedLineSet238 = new IndexedLineSet();
IndexedLineSet238->setDEF(CString("CMC5toMCP5"));
IndexedLineSet238->setCoordIndex(new int32_t[2]{0,1}, 2);
Coordinate* Coordinate239 = new Coordinate();
Coordinate239->setPoint(new float[6]{0.15,0.17,0,0.2,0.4,0}, 6);
IndexedLineSet238->addChild(Coordinate239);

Shape235->setGeometry(IndexedLineSet238);

HAnimSegment232->addChild(Shape235);

HAnimJoint231->addChild(HAnimSegment232);

HAnimJoint* HAnimJoint240 = new HAnimJoint();
HAnimJoint240->setName(CString("r_metacarpophalangeal_5"));
HAnimJoint240->setDEF(CString("hanim_r_metacarpophalangeal_5"));
HAnimJoint240->setCenter(new float[3]{0.2,0.4,0});
HAnimSegment* HAnimSegment241 = new HAnimSegment();
HAnimSegment241->setName(CString("r_carpal_proximal_phalanx_5"));
HAnimSegment241->setDEF(CString("hanim_r_carpal_proximal_phalanx_5"));
Transform* Transform242 = new Transform();
Transform242->setTranslation(new float[3]{0.2,0.4,0});
Shape* Shape243 = new Shape();
Shape243->setUSE(CString("HAnimJointShape"));
Transform242->addChild(Shape243);

HAnimSegment241->addChild(Transform242);

Shape* Shape244 = new Shape();
Appearance* Appearance245 = new Appearance();
Material* Material246 = new Material();
Material246->setEmissiveColor(new float[3]{1,1,1});
Appearance245->addChild(Material246);

Shape244->addChild(Appearance245);

IndexedLineSet* IndexedLineSet247 = new IndexedLineSet();
IndexedLineSet247->setDEF(CString("MCP5toPIP5"));
IndexedLineSet247->setCoordIndex(new int32_t[2]{0,1}, 2);
Coordinate* Coordinate248 = new Coordinate();
Coordinate248->setPoint(new float[6]{0.2,0.4,0,0.23,0.63,0}, 6);
IndexedLineSet247->addChild(Coordinate248);

Shape244->setGeometry(IndexedLineSet247);

HAnimSegment241->addChild(Shape244);

HAnimJoint240->addChild(HAnimSegment241);

HAnimJoint* HAnimJoint249 = new HAnimJoint();
HAnimJoint249->setName(CString("r_carpal_proximal_interphalangeal_5"));
HAnimJoint249->setDEF(CString("hanim_r_carpal_proximal_interphalangeal_5"));
HAnimJoint249->setCenter(new float[3]{0.23,0.63,0});
HAnimSegment* HAnimSegment250 = new HAnimSegment();
HAnimSegment250->setName(CString("r_carpal_middle_phalanx_5"));
HAnimSegment250->setDEF(CString("hanim_r_carpal_middle_phalanx_5"));
Transform* Transform251 = new Transform();
Transform251->setTranslation(new float[3]{0.23,0.63,0});
Shape* Shape252 = new Shape();
Shape252->setUSE(CString("HAnimJointShape"));
Transform251->addChild(Shape252);

HAnimSegment250->addChild(Transform251);

Shape* Shape253 = new Shape();
Appearance* Appearance254 = new Appearance();
Material* Material255 = new Material();
Material255->setEmissiveColor(new float[3]{1,1,1});
Appearance254->addChild(Material255);

Shape253->addChild(Appearance254);

IndexedLineSet* IndexedLineSet256 = new IndexedLineSet();
IndexedLineSet256->setDEF(CString("PIP5toDIP5"));
IndexedLineSet256->setCoordIndex(new int32_t[2]{0,1}, 2);
Coordinate* Coordinate257 = new Coordinate();
Coordinate257->setPoint(new float[6]{0.23,0.63,0,0.25,0.79,0}, 6);
IndexedLineSet256->addChild(Coordinate257);

Shape253->setGeometry(IndexedLineSet256);

HAnimSegment250->addChild(Shape253);

HAnimJoint249->addChild(HAnimSegment250);

HAnimJoint* HAnimJoint258 = new HAnimJoint();
HAnimJoint258->setName(CString("r_carpal_distal_interphalangeal_5"));
HAnimJoint258->setDEF(CString("hanim_r_carpal_distal_interphalangeal_5"));
HAnimJoint258->setCenter(new float[3]{0.25,0.79,0});
HAnimSegment* HAnimSegment259 = new HAnimSegment();
HAnimSegment259->setName(CString("r_carpal_distal_phalanx_5"));
HAnimSegment259->setDEF(CString("hanim_r_carpal_distal_phalanx_5"));
Transform* Transform260 = new Transform();
Transform260->setTranslation(new float[3]{0.25,0.79,0});
Shape* Shape261 = new Shape();
Shape261->setUSE(CString("HAnimJointShape"));
Transform260->addChild(Shape261);

HAnimSegment259->addChild(Transform260);

Shape* Shape262 = new Shape();
Appearance* Appearance263 = new Appearance();
Material* Material264 = new Material();
Material264->setEmissiveColor(new float[3]{1,1,1});
Appearance263->addChild(Material264);

Shape262->addChild(Appearance263);

IndexedLineSet* IndexedLineSet265 = new IndexedLineSet();
IndexedLineSet265->setDEF(CString("fingertip_r_carpal_distal_interphalangeal_5"));
IndexedLineSet265->setCoordIndex(new int32_t[2]{0,1}, 2);
Coordinate* Coordinate266 = new Coordinate();
Coordinate266->setPoint(new float[6]{0.25,0.79,0,0.26,0.85,0}, 6);
IndexedLineSet265->addChild(Coordinate266);

Shape262->setGeometry(IndexedLineSet265);

HAnimSegment259->addChild(Shape262);

HAnimJoint258->addChild(HAnimSegment259);

HAnimJoint249->addChild(HAnimJoint258);

HAnimJoint240->addChild(HAnimJoint249);

HAnimJoint231->addChild(HAnimJoint240);

HAnimJoint181->addChild(HAnimJoint231);

HAnimJoint30->addChild(HAnimJoint181);

HAnimJoint29->addChild(HAnimJoint30);

HAnimHumanoid26->setSkeleton(HAnimJoint29);

HAnimJoint* HAnimJoint267 = new HAnimJoint();
HAnimJoint267->setUSE(CString("hanim_humanoid_root"));
HAnimHumanoid26->addChild(HAnimJoint267);

HAnimJoint* HAnimJoint268 = new HAnimJoint();
HAnimJoint268->setUSE(CString("hanim_r_carpal_distal_interphalangeal_2"));
HAnimHumanoid26->addChild(HAnimJoint268);

HAnimJoint* HAnimJoint269 = new HAnimJoint();
HAnimJoint269->setUSE(CString("hanim_r_carpal_distal_interphalangeal_3"));
HAnimHumanoid26->addChild(HAnimJoint269);

HAnimJoint* HAnimJoint270 = new HAnimJoint();
HAnimJoint270->setUSE(CString("hanim_r_carpal_distal_interphalangeal_4"));
HAnimHumanoid26->addChild(HAnimJoint270);

HAnimJoint* HAnimJoint271 = new HAnimJoint();
HAnimJoint271->setUSE(CString("hanim_r_carpal_distal_interphalangeal_5"));
HAnimHumanoid26->addChild(HAnimJoint271);

HAnimJoint* HAnimJoint272 = new HAnimJoint();
HAnimJoint272->setUSE(CString("hanim_r_carpal_interphalangeal_1"));
HAnimHumanoid26->addChild(HAnimJoint272);

HAnimJoint* HAnimJoint273 = new HAnimJoint();
HAnimJoint273->setUSE(CString("hanim_r_carpal_proximal_interphalangeal_2"));
HAnimHumanoid26->addChild(HAnimJoint273);

HAnimJoint* HAnimJoint274 = new HAnimJoint();
HAnimJoint274->setUSE(CString("hanim_r_carpal_proximal_interphalangeal_3"));
HAnimHumanoid26->addChild(HAnimJoint274);

HAnimJoint* HAnimJoint275 = new HAnimJoint();
HAnimJoint275->setUSE(CString("hanim_r_carpal_proximal_interphalangeal_4"));
HAnimHumanoid26->addChild(HAnimJoint275);

HAnimJoint* HAnimJoint276 = new HAnimJoint();
HAnimJoint276->setUSE(CString("hanim_r_carpal_proximal_interphalangeal_5"));
HAnimHumanoid26->addChild(HAnimJoint276);

HAnimJoint* HAnimJoint277 = new HAnimJoint();
HAnimJoint277->setUSE(CString("hanim_r_carpometacarpal_1"));
HAnimHumanoid26->addChild(HAnimJoint277);

HAnimJoint* HAnimJoint278 = new HAnimJoint();
HAnimJoint278->setUSE(CString("hanim_r_carpometacarpal_2"));
HAnimHumanoid26->addChild(HAnimJoint278);

HAnimJoint* HAnimJoint279 = new HAnimJoint();
HAnimJoint279->setUSE(CString("hanim_r_carpometacarpal_3"));
HAnimHumanoid26->addChild(HAnimJoint279);

HAnimJoint* HAnimJoint280 = new HAnimJoint();
HAnimJoint280->setUSE(CString("hanim_r_carpometacarpal_4"));
HAnimHumanoid26->addChild(HAnimJoint280);

HAnimJoint* HAnimJoint281 = new HAnimJoint();
HAnimJoint281->setUSE(CString("hanim_r_carpometacarpal_5"));
HAnimHumanoid26->addChild(HAnimJoint281);

HAnimJoint* HAnimJoint282 = new HAnimJoint();
HAnimJoint282->setUSE(CString("hanim_r_metacarpophalangeal_1"));
HAnimHumanoid26->addChild(HAnimJoint282);

HAnimJoint* HAnimJoint283 = new HAnimJoint();
HAnimJoint283->setUSE(CString("hanim_r_metacarpophalangeal_2"));
HAnimHumanoid26->addChild(HAnimJoint283);

HAnimJoint* HAnimJoint284 = new HAnimJoint();
HAnimJoint284->setUSE(CString("hanim_r_metacarpophalangeal_3"));
HAnimHumanoid26->addChild(HAnimJoint284);

HAnimJoint* HAnimJoint285 = new HAnimJoint();
HAnimJoint285->setUSE(CString("hanim_r_metacarpophalangeal_4"));
HAnimHumanoid26->addChild(HAnimJoint285);

HAnimJoint* HAnimJoint286 = new HAnimJoint();
HAnimJoint286->setUSE(CString("hanim_r_metacarpophalangeal_5"));
HAnimHumanoid26->addChild(HAnimJoint286);

HAnimJoint* HAnimJoint287 = new HAnimJoint();
HAnimJoint287->setUSE(CString("hanim_r_midcarpal_1"));
HAnimHumanoid26->addChild(HAnimJoint287);

HAnimJoint* HAnimJoint288 = new HAnimJoint();
HAnimJoint288->setUSE(CString("hanim_r_midcarpal_2"));
HAnimHumanoid26->addChild(HAnimJoint288);

HAnimJoint* HAnimJoint289 = new HAnimJoint();
HAnimJoint289->setUSE(CString("hanim_r_midcarpal_3"));
HAnimHumanoid26->addChild(HAnimJoint289);

HAnimJoint* HAnimJoint290 = new HAnimJoint();
HAnimJoint290->setUSE(CString("hanim_r_midcarpal_4_5"));
HAnimHumanoid26->addChild(HAnimJoint290);

HAnimJoint* HAnimJoint291 = new HAnimJoint();
HAnimJoint291->setUSE(CString("hanim_r_radiocarpal"));
HAnimHumanoid26->addChild(HAnimJoint291);

HAnimSegment* HAnimSegment292 = new HAnimSegment();
HAnimSegment292->setUSE(CString("hanim_r_capitate"));
HAnimHumanoid26->setSegments(HAnimSegment292);

HAnimSegment* HAnimSegment293 = new HAnimSegment();
HAnimSegment293->setUSE(CString("hanim_r_carpal"));
HAnimHumanoid26->setSegments(HAnimSegment293);

HAnimSegment* HAnimSegment294 = new HAnimSegment();
HAnimSegment294->setUSE(CString("hanim_r_carpal_distal_phalanx_1"));
HAnimHumanoid26->setSegments(HAnimSegment294);

HAnimSegment* HAnimSegment295 = new HAnimSegment();
HAnimSegment295->setUSE(CString("hanim_r_carpal_distal_phalanx_2"));
HAnimHumanoid26->setSegments(HAnimSegment295);

HAnimSegment* HAnimSegment296 = new HAnimSegment();
HAnimSegment296->setUSE(CString("hanim_r_carpal_distal_phalanx_3"));
HAnimHumanoid26->setSegments(HAnimSegment296);

HAnimSegment* HAnimSegment297 = new HAnimSegment();
HAnimSegment297->setUSE(CString("hanim_r_carpal_distal_phalanx_4"));
HAnimHumanoid26->setSegments(HAnimSegment297);

HAnimSegment* HAnimSegment298 = new HAnimSegment();
HAnimSegment298->setUSE(CString("hanim_r_carpal_distal_phalanx_5"));
HAnimHumanoid26->setSegments(HAnimSegment298);

HAnimSegment* HAnimSegment299 = new HAnimSegment();
HAnimSegment299->setUSE(CString("hanim_r_carpal_middle_phalanx_2"));
HAnimHumanoid26->setSegments(HAnimSegment299);

HAnimSegment* HAnimSegment300 = new HAnimSegment();
HAnimSegment300->setUSE(CString("hanim_r_carpal_middle_phalanx_3"));
HAnimHumanoid26->setSegments(HAnimSegment300);

HAnimSegment* HAnimSegment301 = new HAnimSegment();
HAnimSegment301->setUSE(CString("hanim_r_carpal_middle_phalanx_4"));
HAnimHumanoid26->setSegments(HAnimSegment301);

HAnimSegment* HAnimSegment302 = new HAnimSegment();
HAnimSegment302->setUSE(CString("hanim_r_carpal_middle_phalanx_5"));
HAnimHumanoid26->setSegments(HAnimSegment302);

HAnimSegment* HAnimSegment303 = new HAnimSegment();
HAnimSegment303->setUSE(CString("hanim_r_carpal_proximal_phalanx_1"));
HAnimHumanoid26->setSegments(HAnimSegment303);

HAnimSegment* HAnimSegment304 = new HAnimSegment();
HAnimSegment304->setUSE(CString("hanim_r_carpal_proximal_phalanx_2"));
HAnimHumanoid26->setSegments(HAnimSegment304);

HAnimSegment* HAnimSegment305 = new HAnimSegment();
HAnimSegment305->setUSE(CString("hanim_r_carpal_proximal_phalanx_3"));
HAnimHumanoid26->setSegments(HAnimSegment305);

HAnimSegment* HAnimSegment306 = new HAnimSegment();
HAnimSegment306->setUSE(CString("hanim_r_carpal_proximal_phalanx_4"));
HAnimHumanoid26->setSegments(HAnimSegment306);

HAnimSegment* HAnimSegment307 = new HAnimSegment();
HAnimSegment307->setUSE(CString("hanim_r_carpal_proximal_phalanx_5"));
HAnimHumanoid26->setSegments(HAnimSegment307);

HAnimSegment* HAnimSegment308 = new HAnimSegment();
HAnimSegment308->setUSE(CString("hanim_r_hamate"));
HAnimHumanoid26->setSegments(HAnimSegment308);

HAnimSegment* HAnimSegment309 = new HAnimSegment();
HAnimSegment309->setUSE(CString("hanim_r_metacarpal_1"));
HAnimHumanoid26->setSegments(HAnimSegment309);

HAnimSegment* HAnimSegment310 = new HAnimSegment();
HAnimSegment310->setUSE(CString("hanim_r_metacarpal_2"));
HAnimHumanoid26->setSegments(HAnimSegment310);

HAnimSegment* HAnimSegment311 = new HAnimSegment();
HAnimSegment311->setUSE(CString("hanim_r_metacarpal_3"));
HAnimHumanoid26->setSegments(HAnimSegment311);

HAnimSegment* HAnimSegment312 = new HAnimSegment();
HAnimSegment312->setUSE(CString("hanim_r_metacarpal_4"));
HAnimHumanoid26->setSegments(HAnimSegment312);

HAnimSegment* HAnimSegment313 = new HAnimSegment();
HAnimSegment313->setUSE(CString("hanim_r_metacarpal_5"));
HAnimHumanoid26->setSegments(HAnimSegment313);

HAnimSegment* HAnimSegment314 = new HAnimSegment();
HAnimSegment314->setUSE(CString("hanim_r_trapezium"));
HAnimHumanoid26->setSegments(HAnimSegment314);

HAnimSegment* HAnimSegment315 = new HAnimSegment();
HAnimSegment315->setUSE(CString("hanim_r_trapezoid"));
HAnimHumanoid26->setSegments(HAnimSegment315);

Scene24->addChild(HAnimHumanoid26);

X3D0->setScene(Scene24);

}
