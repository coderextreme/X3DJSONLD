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
meta3->setContent("HAnimModelHandRight.x3d");
head1->addMeta(meta3);

meta* meta4 = new meta();
meta4->setName("description");
meta4->setContent("Right hand using high-fidelity definitions for HAnim version 2.0");
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
meta21->setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelHandRight.x3d");
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
WorldInfo25->setTitle("HAnimModelHandRight.x3d");
Scene24->addChild(WorldInfo25);

HAnimHumanoid* HAnimHumanoid26 = new HAnimHumanoid();
HAnimHumanoid26->setName("Hand_Right");
HAnimHumanoid26->setDEF("hanim_Hand_Right");
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
HAnimJoint30->setName("r_radiocarpal");
HAnimJoint30->setDEF("hanim_r_radiocarpal");
HAnimJoint30->setDescription("connection joint of hand to leg above");
HAnimSegment* HAnimSegment31 = new HAnimSegment();
HAnimSegment31->setName("r_carpal");
HAnimSegment31->setDEF("hanim_r_carpal");
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
Coordinate41->setPoint(new float[6]{0,0,0,-0.1,0.1,0});
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
Coordinate51->setPoint(new float[6]{0,0,0,0.1,0.1,0});
IndexedLineSet50->setCoord(Coordinate51);

Shape47->setGeometry(IndexedLineSet50);

HAnimSegment31->addChild(Shape47);

HAnimJoint30->addChild(HAnimSegment31);

//MC1
HAnimJoint* HAnimJoint52 = new HAnimJoint();
HAnimJoint52->setName("r_midcarpal_1");
HAnimJoint52->setDEF("hanim_r_midcarpal_1");
HAnimJoint52->setCenter(new float[3]{-0.14,0.09,0});
HAnimSegment* HAnimSegment53 = new HAnimSegment();
HAnimSegment53->setName("r_trapezium");
HAnimSegment53->setDEF("hanim_r_trapezium");
Transform* Transform54 = new Transform();
Transform54->setTranslation(new float[3]{-0.14,0.09,0});
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
Coordinate63->setPoint(new float[6]{-0.1,0.1,0,-0.2,0.15,0});
IndexedLineSet62->setCoord(Coordinate63);

Shape59->setGeometry(IndexedLineSet62);

HAnimSegment53->addChild(Shape59);

HAnimJoint52->addChild(HAnimSegment53);

//thumb finger
HAnimJoint* HAnimJoint64 = new HAnimJoint();
HAnimJoint64->setName("r_carpometacarpal_1");
HAnimJoint64->setDEF("hanim_r_carpometacarpal_1");
HAnimJoint64->setCenter(new float[3]{-0.2,0.15,0});
HAnimSegment* HAnimSegment65 = new HAnimSegment();
HAnimSegment65->setName("r_metacarpal_1");
HAnimSegment65->setDEF("hanim_r_metacarpal_1");
Transform* Transform66 = new Transform();
Transform66->setTranslation(new float[3]{-0.2,0.15,0});
Shape* Shape67 = new Shape();
Shape67->setUSE("HAnimJointShape");
Transform66->addChild(Shape67);

HAnimSegment65->addChild(Transform66);

Shape* Shape68 = new Shape();
Appearance* Appearance69 = new Appearance();
Material* Material70 = new Material();
Material70->setEmissiveColor(new float[3]{1,1,1});
Appearance69->setMaterial(Material70);

Shape68->setAppearance(Appearance69);

IndexedLineSet* IndexedLineSet71 = new IndexedLineSet();
IndexedLineSet71->setDEF("CMC1toMCP1xxx");
IndexedLineSet71->setCoordIndex(new int[2]{0,1});
Coordinate* Coordinate72 = new Coordinate();
Coordinate72->setPoint(new float[6]{-0.2,0.15,0,-0.3,0.3,0});
IndexedLineSet71->setCoord(Coordinate72);

Shape68->setGeometry(IndexedLineSet71);

HAnimSegment65->addChild(Shape68);

HAnimJoint64->addChild(HAnimSegment65);

HAnimJoint* HAnimJoint73 = new HAnimJoint();
HAnimJoint73->setName("r_metacarpophalangeal_1");
HAnimJoint73->setDEF("hanim_r_metacarpophalangeal_1");
HAnimJoint73->setCenter(new float[3]{-0.3,0.3,0});
HAnimSegment* HAnimSegment74 = new HAnimSegment();
HAnimSegment74->setName("r_carpal_proximal_phalanx_1");
HAnimSegment74->setDEF("hanim_r_carpal_proximal_phalanx_1");
Transform* Transform75 = new Transform();
Transform75->setTranslation(new float[3]{-0.3,0.3,0});
Shape* Shape76 = new Shape();
Shape76->setUSE("HAnimJointShape");
Transform75->addChild(Shape76);

HAnimSegment74->addChild(Transform75);

Shape* Shape77 = new Shape();
Appearance* Appearance78 = new Appearance();
Material* Material79 = new Material();
Material79->setEmissiveColor(new float[3]{1,1,1});
Appearance78->setMaterial(Material79);

Shape77->setAppearance(Appearance78);

IndexedLineSet* IndexedLineSet80 = new IndexedLineSet();
IndexedLineSet80->setDEF("MCP11toIP1");
IndexedLineSet80->setCoordIndex(new int[2]{0,1});
Coordinate* Coordinate81 = new Coordinate();
Coordinate81->setPoint(new float[6]{-0.3,0.3,0,-0.35,0.4,0});
IndexedLineSet80->setCoord(Coordinate81);

Shape77->setGeometry(IndexedLineSet80);

HAnimSegment74->addChild(Shape77);

HAnimJoint73->addChild(HAnimSegment74);

HAnimJoint* HAnimJoint82 = new HAnimJoint();
HAnimJoint82->setName("r_carpal_interphalangeal_1");
HAnimJoint82->setDEF("hanim_r_carpal_interphalangeal_1");
HAnimJoint82->setCenter(new float[3]{-0.35,0.4,0});
HAnimSegment* HAnimSegment83 = new HAnimSegment();
HAnimSegment83->setName("r_carpal_distal_phalanx_1");
HAnimSegment83->setDEF("hanim_r_carpal_distal_phalanx_1");
Transform* Transform84 = new Transform();
Transform84->setTranslation(new float[3]{-0.35,0.4,0});
Shape* Shape85 = new Shape();
Shape85->setUSE("HAnimJointShape");
Transform84->addChild(Shape85);

HAnimSegment83->addChild(Transform84);

Shape* Shape86 = new Shape();
Appearance* Appearance87 = new Appearance();
Material* Material88 = new Material();
Material88->setEmissiveColor(new float[3]{1,1,1});
Appearance87->setMaterial(Material88);

Shape86->setAppearance(Appearance87);

IndexedLineSet* IndexedLineSet89 = new IndexedLineSet();
IndexedLineSet89->setDEF("fingertip_r_carpal_interphalangeal_1");
IndexedLineSet89->setCoordIndex(new int[2]{0,1});
Coordinate* Coordinate90 = new Coordinate();
Coordinate90->setPoint(new float[6]{-0.35,0.4,0,-0.36,0.45,0});
IndexedLineSet89->setCoord(Coordinate90);

Shape86->setGeometry(IndexedLineSet89);

HAnimSegment83->addChild(Shape86);

HAnimJoint82->addChild(HAnimSegment83);

HAnimJoint73->addChild(HAnimJoint82);

HAnimJoint64->addChild(HAnimJoint73);

HAnimJoint52->addChild(HAnimJoint64);

HAnimJoint30->addChild(HAnimJoint52);

//MC2
HAnimJoint* HAnimJoint91 = new HAnimJoint();
HAnimJoint91->setName("r_midcarpal_2");
HAnimJoint91->setDEF("hanim_r_midcarpal_2");
HAnimJoint91->setCenter(new float[3]{-0.07,0.07,0});
HAnimSegment* HAnimSegment92 = new HAnimSegment();
HAnimSegment92->setName("r_trapezoid");
HAnimSegment92->setDEF("hanim_r_trapezoid");
Transform* Transform93 = new Transform();
Transform93->setTranslation(new float[3]{-0.07,0.07,0});
Shape* Shape94 = new Shape();
Shape94->setUSE("HAnimNewJointShape");
Transform93->addChild(Shape94);

HAnimSegment92->addChild(Transform93);

Shape* Shape95 = new Shape();
Appearance* Appearance96 = new Appearance();
Material* Material97 = new Material();
Material97->setEmissiveColor(new float[3]{1,1,1});
Appearance96->setMaterial(Material97);

Shape95->setAppearance(Appearance96);

IndexedLineSet* IndexedLineSet98 = new IndexedLineSet();
IndexedLineSet98->setDEF("MC12toCMC2");
IndexedLineSet98->setCoordIndex(new int[2]{0,1});
Coordinate* Coordinate99 = new Coordinate();
Coordinate99->setPoint(new float[6]{-0.1,0.1,0,-0.1,0.2,0});
IndexedLineSet98->setCoord(Coordinate99);

Shape95->setGeometry(IndexedLineSet98);

HAnimSegment92->addChild(Shape95);

HAnimJoint91->addChild(HAnimSegment92);

//index finger
HAnimJoint* HAnimJoint100 = new HAnimJoint();
HAnimJoint100->setName("r_carpometacarpal_2");
HAnimJoint100->setDEF("hanim_r_carpometacarpal_2");
HAnimJoint100->setCenter(new float[3]{-0.1,0.2,0});
HAnimSegment* HAnimSegment101 = new HAnimSegment();
HAnimSegment101->setName("r_metacarpal_2");
HAnimSegment101->setDEF("hanim_r_metacarpal_2");
Transform* Transform102 = new Transform();
Transform102->setTranslation(new float[3]{-0.1,0.2,0});
Shape* Shape103 = new Shape();
Shape103->setUSE("HAnimJointShape");
Transform102->addChild(Shape103);

HAnimSegment101->addChild(Transform102);

Shape* Shape104 = new Shape();
Appearance* Appearance105 = new Appearance();
Material* Material106 = new Material();
Material106->setEmissiveColor(new float[3]{1,1,1});
Appearance105->setMaterial(Material106);

Shape104->setAppearance(Appearance105);

IndexedLineSet* IndexedLineSet107 = new IndexedLineSet();
IndexedLineSet107->setDEF("CMC2toMCP2");
IndexedLineSet107->setCoordIndex(new int[2]{0,1});
Coordinate* Coordinate108 = new Coordinate();
Coordinate108->setPoint(new float[6]{-0.1,0.2,0,-0.15,0.5,0});
IndexedLineSet107->setCoord(Coordinate108);

Shape104->setGeometry(IndexedLineSet107);

HAnimSegment101->addChild(Shape104);

HAnimJoint100->addChild(HAnimSegment101);

HAnimJoint* HAnimJoint109 = new HAnimJoint();
HAnimJoint109->setName("r_metacarpophalangeal_2");
HAnimJoint109->setDEF("hanim_r_metacarpophalangeal_2");
HAnimJoint109->setCenter(new float[3]{-0.15,0.5,0});
HAnimSegment* HAnimSegment110 = new HAnimSegment();
HAnimSegment110->setName("r_carpal_proximal_phalanx_2");
HAnimSegment110->setDEF("hanim_r_carpal_proximal_phalanx_2");
Transform* Transform111 = new Transform();
Transform111->setTranslation(new float[3]{-0.15,0.5,0});
Shape* Shape112 = new Shape();
Shape112->setUSE("HAnimJointShape");
Transform111->addChild(Shape112);

HAnimSegment110->addChild(Transform111);

Shape* Shape113 = new Shape();
Appearance* Appearance114 = new Appearance();
Material* Material115 = new Material();
Material115->setEmissiveColor(new float[3]{1,1,1});
Appearance114->setMaterial(Material115);

Shape113->setAppearance(Appearance114);

IndexedLineSet* IndexedLineSet116 = new IndexedLineSet();
IndexedLineSet116->setDEF("MCP2toPIP2");
IndexedLineSet116->setCoordIndex(new int[2]{0,1});
Coordinate* Coordinate117 = new Coordinate();
Coordinate117->setPoint(new float[6]{-0.15,0.5,0,-0.2,0.7,0});
IndexedLineSet116->setCoord(Coordinate117);

Shape113->setGeometry(IndexedLineSet116);

HAnimSegment110->addChild(Shape113);

HAnimJoint109->addChild(HAnimSegment110);

HAnimJoint* HAnimJoint118 = new HAnimJoint();
HAnimJoint118->setName("r_carpal_proximal_interphalangeal_2");
HAnimJoint118->setDEF("hanim_r_carpal_proximal_interphalangeal_2");
HAnimJoint118->setCenter(new float[3]{-0.2,0.7,0});
HAnimSegment* HAnimSegment119 = new HAnimSegment();
HAnimSegment119->setName("r_carpal_middle_phalanx_2");
HAnimSegment119->setDEF("hanim_r_carpal_middle_phalanx_2");
Transform* Transform120 = new Transform();
Transform120->setTranslation(new float[3]{-0.2,0.7,0});
Shape* Shape121 = new Shape();
Shape121->setUSE("HAnimJointShape");
Transform120->addChild(Shape121);

HAnimSegment119->addChild(Transform120);

Shape* Shape122 = new Shape();
Appearance* Appearance123 = new Appearance();
Material* Material124 = new Material();
Material124->setEmissiveColor(new float[3]{1,1,1});
Appearance123->setMaterial(Material124);

Shape122->setAppearance(Appearance123);

IndexedLineSet* IndexedLineSet125 = new IndexedLineSet();
IndexedLineSet125->setDEF("PIP2toDIP2");
IndexedLineSet125->setCoordIndex(new int[2]{0,1});
Coordinate* Coordinate126 = new Coordinate();
Coordinate126->setPoint(new float[6]{-0.2,0.7,0,-0.24,0.87,0});
IndexedLineSet125->setCoord(Coordinate126);

Shape122->setGeometry(IndexedLineSet125);

HAnimSegment119->addChild(Shape122);

HAnimJoint118->addChild(HAnimSegment119);

HAnimJoint* HAnimJoint127 = new HAnimJoint();
HAnimJoint127->setName("r_carpal_distal_interphalangeal_2");
HAnimJoint127->setDEF("hanim_r_carpal_distal_interphalangeal_2");
HAnimJoint127->setCenter(new float[3]{-0.24,0.87,0});
HAnimSegment* HAnimSegment128 = new HAnimSegment();
HAnimSegment128->setName("r_carpal_distal_phalanx_2");
HAnimSegment128->setDEF("hanim_r_carpal_distal_phalanx_2");
Transform* Transform129 = new Transform();
Transform129->setTranslation(new float[3]{-0.24,0.87,0});
Shape* Shape130 = new Shape();
Shape130->setUSE("HAnimJointShape");
Transform129->addChild(Shape130);

HAnimSegment128->addChild(Transform129);

Shape* Shape131 = new Shape();
Appearance* Appearance132 = new Appearance();
Material* Material133 = new Material();
Material133->setEmissiveColor(new float[3]{1,1,1});
Appearance132->setMaterial(Material133);

Shape131->setAppearance(Appearance132);

IndexedLineSet* IndexedLineSet134 = new IndexedLineSet();
IndexedLineSet134->setDEF("fingertip_r_carpal_distal_interphalangeal_2");
IndexedLineSet134->setCoordIndex(new int[2]{0,1});
Coordinate* Coordinate135 = new Coordinate();
Coordinate135->setPoint(new float[6]{-0.24,0.87,0,-0.26,0.93,0});
IndexedLineSet134->setCoord(Coordinate135);

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
HAnimJoint136->setName("r_midcarpal_3");
HAnimJoint136->setDEF("hanim_r_midcarpal_3");
HAnimJoint136->setCenter(new float[3]{0,0.07,0});
HAnimSegment* HAnimSegment137 = new HAnimSegment();
HAnimSegment137->setName("r_capitate");
HAnimSegment137->setDEF("hanim_r_capitate");
Transform* Transform138 = new Transform();
Transform138->setTranslation(new float[3]{0,0.07,0});
Shape* Shape139 = new Shape();
Shape139->setUSE("HAnimNewJointShape");
Transform138->addChild(Shape139);

HAnimSegment137->addChild(Transform138);

Shape* Shape140 = new Shape();
Appearance* Appearance141 = new Appearance();
Material* Material142 = new Material();
Material142->setEmissiveColor(new float[3]{1,1,1});
Appearance141->setMaterial(Material142);

Shape140->setAppearance(Appearance141);

IndexedLineSet* IndexedLineSet143 = new IndexedLineSet();
IndexedLineSet143->setDEF("MC3toCMC3");
IndexedLineSet143->setCoordIndex(new int[2]{0,1});
Coordinate* Coordinate144 = new Coordinate();
Coordinate144->setPoint(new float[6]{0,0.07,0,0,0.2,0});
IndexedLineSet143->setCoord(Coordinate144);

Shape140->setGeometry(IndexedLineSet143);

HAnimSegment137->addChild(Shape140);

HAnimJoint136->addChild(HAnimSegment137);

//Middle fingle
HAnimJoint* HAnimJoint145 = new HAnimJoint();
HAnimJoint145->setName("r_carpometacarpal_3");
HAnimJoint145->setDEF("hanim_r_carpometacarpal_3");
HAnimJoint145->setCenter(new float[3]{0,0.2,0});
HAnimSegment* HAnimSegment146 = new HAnimSegment();
HAnimSegment146->setName("r_metacarpal_3");
HAnimSegment146->setDEF("hanim_r_metacarpal_3");
Transform* Transform147 = new Transform();
Transform147->setTranslation(new float[3]{0,0.2,0});
Shape* Shape148 = new Shape();
Shape148->setUSE("HAnimJointShape");
Transform147->addChild(Shape148);

HAnimSegment146->addChild(Transform147);

Shape* Shape149 = new Shape();
Appearance* Appearance150 = new Appearance();
Material* Material151 = new Material();
Material151->setEmissiveColor(new float[3]{1,1,1});
Appearance150->setMaterial(Material151);

Shape149->setAppearance(Appearance150);

IndexedLineSet* IndexedLineSet152 = new IndexedLineSet();
IndexedLineSet152->setDEF("CMC3toMCP3");
IndexedLineSet152->setCoordIndex(new int[2]{0,1});
Coordinate* Coordinate153 = new Coordinate();
Coordinate153->setPoint(new float[6]{0,0.2,0,-0.03,0.5,0});
IndexedLineSet152->setCoord(Coordinate153);

Shape149->setGeometry(IndexedLineSet152);

HAnimSegment146->addChild(Shape149);

HAnimJoint145->addChild(HAnimSegment146);

HAnimJoint* HAnimJoint154 = new HAnimJoint();
HAnimJoint154->setName("r_metacarpophalangeal_3");
HAnimJoint154->setDEF("hanim_r_metacarpophalangeal_3");
HAnimJoint154->setCenter(new float[3]{-0.03,0.5,0});
HAnimSegment* HAnimSegment155 = new HAnimSegment();
HAnimSegment155->setName("r_carpal_proximal_phalanx_3");
HAnimSegment155->setDEF("hanim_r_carpal_proximal_phalanx_3");
Transform* Transform156 = new Transform();
Transform156->setTranslation(new float[3]{-0.03,0.5,0});
Shape* Shape157 = new Shape();
Shape157->setUSE("HAnimJointShape");
Transform156->addChild(Shape157);

HAnimSegment155->addChild(Transform156);

Shape* Shape158 = new Shape();
Appearance* Appearance159 = new Appearance();
Material* Material160 = new Material();
Material160->setEmissiveColor(new float[3]{1,1,1});
Appearance159->setMaterial(Material160);

Shape158->setAppearance(Appearance159);

IndexedLineSet* IndexedLineSet161 = new IndexedLineSet();
IndexedLineSet161->setDEF("MCP3toPIP3");
IndexedLineSet161->setCoordIndex(new int[2]{0,1});
Coordinate* Coordinate162 = new Coordinate();
Coordinate162->setPoint(new float[6]{-0.03,0.5,0,-0.05,0.75,0});
IndexedLineSet161->setCoord(Coordinate162);

Shape158->setGeometry(IndexedLineSet161);

HAnimSegment155->addChild(Shape158);

HAnimJoint154->addChild(HAnimSegment155);

HAnimJoint* HAnimJoint163 = new HAnimJoint();
HAnimJoint163->setName("r_carpal_proximal_interphalangeal_3");
HAnimJoint163->setDEF("hanim_r_carpal_proximal_interphalangeal_3");
HAnimJoint163->setCenter(new float[3]{-0.05,0.75,0});
HAnimSegment* HAnimSegment164 = new HAnimSegment();
HAnimSegment164->setName("r_carpal_middle_phalanx_3");
HAnimSegment164->setDEF("hanim_r_carpal_middle_phalanx_3");
Transform* Transform165 = new Transform();
Transform165->setTranslation(new float[3]{-0.05,0.75,0});
Shape* Shape166 = new Shape();
Shape166->setUSE("HAnimJointShape");
Transform165->addChild(Shape166);

HAnimSegment164->addChild(Transform165);

Shape* Shape167 = new Shape();
Appearance* Appearance168 = new Appearance();
Material* Material169 = new Material();
Material169->setEmissiveColor(new float[3]{1,1,1});
Appearance168->setMaterial(Material169);

Shape167->setAppearance(Appearance168);

IndexedLineSet* IndexedLineSet170 = new IndexedLineSet();
IndexedLineSet170->setDEF("PIP3toDIP3");
IndexedLineSet170->setCoordIndex(new int[2]{0,1});
Coordinate* Coordinate171 = new Coordinate();
Coordinate171->setPoint(new float[6]{-0.05,0.75,0,-0.08,0.96,0});
IndexedLineSet170->setCoord(Coordinate171);

Shape167->setGeometry(IndexedLineSet170);

HAnimSegment164->addChild(Shape167);

HAnimJoint163->addChild(HAnimSegment164);

HAnimJoint* HAnimJoint172 = new HAnimJoint();
HAnimJoint172->setName("r_carpal_distal_interphalangeal_3");
HAnimJoint172->setDEF("hanim_r_carpal_distal_interphalangeal_3");
HAnimJoint172->setCenter(new float[3]{-0.08,0.96,0});
HAnimSegment* HAnimSegment173 = new HAnimSegment();
HAnimSegment173->setName("r_carpal_distal_phalanx_3");
HAnimSegment173->setDEF("hanim_r_carpal_distal_phalanx_3");
Transform* Transform174 = new Transform();
Transform174->setTranslation(new float[3]{-0.08,0.96,0});
Shape* Shape175 = new Shape();
Shape175->setUSE("HAnimJointShape");
Transform174->addChild(Shape175);

HAnimSegment173->addChild(Transform174);

Shape* Shape176 = new Shape();
Appearance* Appearance177 = new Appearance();
Material* Material178 = new Material();
Material178->setEmissiveColor(new float[3]{1,1,1});
Appearance177->setMaterial(Material178);

Shape176->setAppearance(Appearance177);

IndexedLineSet* IndexedLineSet179 = new IndexedLineSet();
IndexedLineSet179->setDEF("fingertip_r_carpal_distal_interphalangeal_3");
IndexedLineSet179->setCoordIndex(new int[2]{0,1});
Coordinate* Coordinate180 = new Coordinate();
Coordinate180->setPoint(new float[6]{-0.08,0.96,0,-0.09,1.05,0});
IndexedLineSet179->setCoord(Coordinate180);

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
HAnimJoint181->setName("r_midcarpal_4_5");
HAnimJoint181->setDEF("hanim_r_midcarpal_4_5");
HAnimJoint181->setCenter(new float[3]{0.1,0.1,0});
HAnimSegment* HAnimSegment182 = new HAnimSegment();
HAnimSegment182->setName("r_hamate");
HAnimSegment182->setDEF("hanim_r_hamate");
Transform* Transform183 = new Transform();
Transform183->setTranslation(new float[3]{0.1,0.1,0});
Shape* Shape184 = new Shape();
Shape184->setUSE("HAnimNewJointShape");
Transform183->addChild(Shape184);

HAnimSegment182->addChild(Transform183);

Shape* Shape185 = new Shape();
Appearance* Appearance186 = new Appearance();
Material* Material187 = new Material();
Material187->setEmissiveColor(new float[3]{1,1,1});
Appearance186->setMaterial(Material187);

Shape185->setAppearance(Appearance186);

IndexedLineSet* IndexedLineSet188 = new IndexedLineSet();
IndexedLineSet188->setDEF("MC45toCMC4");
IndexedLineSet188->setCoordIndex(new int[2]{0,1});
Coordinate* Coordinate189 = new Coordinate();
Coordinate189->setPoint(new float[6]{0.1,0.1,0,0.1,0.2,0});
IndexedLineSet188->setCoord(Coordinate189);

Shape185->setGeometry(IndexedLineSet188);

HAnimSegment182->addChild(Shape185);

Shape* Shape190 = new Shape();
Appearance* Appearance191 = new Appearance();
Material* Material192 = new Material();
Material192->setEmissiveColor(new float[3]{1,1,1});
Appearance191->setMaterial(Material192);

Shape190->setAppearance(Appearance191);

IndexedLineSet* IndexedLineSet193 = new IndexedLineSet();
IndexedLineSet193->setDEF("MC45toCMC5");
IndexedLineSet193->setCoordIndex(new int[2]{0,1});
Coordinate* Coordinate194 = new Coordinate();
Coordinate194->setPoint(new float[6]{0.1,0.1,0,0.15,0.17,0});
IndexedLineSet193->setCoord(Coordinate194);

Shape190->setGeometry(IndexedLineSet193);

HAnimSegment182->addChild(Shape190);

HAnimJoint181->addChild(HAnimSegment182);

//ring finger
HAnimJoint* HAnimJoint195 = new HAnimJoint();
HAnimJoint195->setName("r_carpometacarpal_4");
HAnimJoint195->setDEF("hanim_r_carpometacarpal_4");
HAnimJoint195->setCenter(new float[3]{0.1,0.2,0});
HAnimSegment* HAnimSegment196 = new HAnimSegment();
HAnimSegment196->setName("r_metacarpal_4");
HAnimSegment196->setDEF("hanim_r_metacarpal_4");
Transform* Transform197 = new Transform();
Transform197->setTranslation(new float[3]{0.1,0.2,0});
Shape* Shape198 = new Shape();
Shape198->setUSE("HAnimJointShape");
Transform197->addChild(Shape198);

HAnimSegment196->addChild(Transform197);

Shape* Shape199 = new Shape();
Appearance* Appearance200 = new Appearance();
Material* Material201 = new Material();
Material201->setEmissiveColor(new float[3]{1,1,1});
Appearance200->setMaterial(Material201);

Shape199->setAppearance(Appearance200);

IndexedLineSet* IndexedLineSet202 = new IndexedLineSet();
IndexedLineSet202->setDEF("CMC4toMCP4");
IndexedLineSet202->setCoordIndex(new int[2]{0,1});
Coordinate* Coordinate203 = new Coordinate();
Coordinate203->setPoint(new float[6]{0.1,0.2,0,0.1,0.47,0});
IndexedLineSet202->setCoord(Coordinate203);

Shape199->setGeometry(IndexedLineSet202);

HAnimSegment196->addChild(Shape199);

HAnimJoint195->addChild(HAnimSegment196);

HAnimJoint* HAnimJoint204 = new HAnimJoint();
HAnimJoint204->setName("r_metacarpophalangeal_4");
HAnimJoint204->setDEF("hanim_r_metacarpophalangeal_4");
HAnimJoint204->setCenter(new float[3]{0.1,0.47,0});
HAnimSegment* HAnimSegment205 = new HAnimSegment();
HAnimSegment205->setName("r_carpal_proximal_phalanx_4");
HAnimSegment205->setDEF("hanim_r_carpal_proximal_phalanx_4");
Transform* Transform206 = new Transform();
Transform206->setTranslation(new float[3]{0.1,0.47,0});
Shape* Shape207 = new Shape();
Shape207->setUSE("HAnimJointShape");
Transform206->addChild(Shape207);

HAnimSegment205->addChild(Transform206);

Shape* Shape208 = new Shape();
Appearance* Appearance209 = new Appearance();
Material* Material210 = new Material();
Material210->setEmissiveColor(new float[3]{1,1,1});
Appearance209->setMaterial(Material210);

Shape208->setAppearance(Appearance209);

IndexedLineSet* IndexedLineSet211 = new IndexedLineSet();
IndexedLineSet211->setDEF("MCP4toPIP4");
IndexedLineSet211->setCoordIndex(new int[2]{0,1});
Coordinate* Coordinate212 = new Coordinate();
Coordinate212->setPoint(new float[6]{0.1,0.47,0,0.1,0.7,0});
IndexedLineSet211->setCoord(Coordinate212);

Shape208->setGeometry(IndexedLineSet211);

HAnimSegment205->addChild(Shape208);

HAnimJoint204->addChild(HAnimSegment205);

HAnimJoint* HAnimJoint213 = new HAnimJoint();
HAnimJoint213->setName("r_carpal_proximal_interphalangeal_4");
HAnimJoint213->setDEF("hanim_r_carpal_proximal_interphalangeal_4");
HAnimJoint213->setCenter(new float[3]{0.1,0.7,0});
HAnimSegment* HAnimSegment214 = new HAnimSegment();
HAnimSegment214->setName("r_carpal_middle_phalanx_4");
HAnimSegment214->setDEF("hanim_r_carpal_middle_phalanx_4");
Transform* Transform215 = new Transform();
Transform215->setTranslation(new float[3]{0.1,0.7,0});
Shape* Shape216 = new Shape();
Shape216->setUSE("HAnimJointShape");
Transform215->addChild(Shape216);

HAnimSegment214->addChild(Transform215);

Shape* Shape217 = new Shape();
Appearance* Appearance218 = new Appearance();
Material* Material219 = new Material();
Material219->setEmissiveColor(new float[3]{1,1,1});
Appearance218->setMaterial(Material219);

Shape217->setAppearance(Appearance218);

IndexedLineSet* IndexedLineSet220 = new IndexedLineSet();
IndexedLineSet220->setDEF("PIP4toDIP4");
IndexedLineSet220->setCoordIndex(new int[2]{0,1});
Coordinate* Coordinate221 = new Coordinate();
Coordinate221->setPoint(new float[6]{0.1,0.7,0,0.1,0.93,0});
IndexedLineSet220->setCoord(Coordinate221);

Shape217->setGeometry(IndexedLineSet220);

HAnimSegment214->addChild(Shape217);

HAnimJoint213->addChild(HAnimSegment214);

HAnimJoint* HAnimJoint222 = new HAnimJoint();
HAnimJoint222->setName("r_carpal_distal_interphalangeal_4");
HAnimJoint222->setDEF("hanim_r_carpal_distal_interphalangeal_4");
HAnimJoint222->setCenter(new float[3]{0.1,0.93,0});
HAnimSegment* HAnimSegment223 = new HAnimSegment();
HAnimSegment223->setName("r_carpal_distal_phalanx_4");
HAnimSegment223->setDEF("hanim_r_carpal_distal_phalanx_4");
Transform* Transform224 = new Transform();
Transform224->setTranslation(new float[3]{0.1,0.93,0});
Shape* Shape225 = new Shape();
Shape225->setUSE("HAnimJointShape");
Transform224->addChild(Shape225);

HAnimSegment223->addChild(Transform224);

Shape* Shape226 = new Shape();
Appearance* Appearance227 = new Appearance();
Material* Material228 = new Material();
Material228->setEmissiveColor(new float[3]{1,1,1});
Appearance227->setMaterial(Material228);

Shape226->setAppearance(Appearance227);

IndexedLineSet* IndexedLineSet229 = new IndexedLineSet();
IndexedLineSet229->setDEF("fingertip_r_carpal_distal_interphalangeal_4");
IndexedLineSet229->setCoordIndex(new int[2]{0,1});
Coordinate* Coordinate230 = new Coordinate();
Coordinate230->setPoint(new float[6]{0.1,0.93,0,0.1,1,0});
IndexedLineSet229->setCoord(Coordinate230);

Shape226->setGeometry(IndexedLineSet229);

HAnimSegment223->addChild(Shape226);

HAnimJoint222->addChild(HAnimSegment223);

HAnimJoint213->addChild(HAnimJoint222);

HAnimJoint204->addChild(HAnimJoint213);

HAnimJoint195->addChild(HAnimJoint204);

HAnimJoint181->addChild(HAnimJoint195);

//pinky finger
HAnimJoint* HAnimJoint231 = new HAnimJoint();
HAnimJoint231->setName("r_carpometacarpal_5");
HAnimJoint231->setDEF("hanim_r_carpometacarpal_5");
HAnimJoint231->setCenter(new float[3]{0.15,0.17,0});
HAnimSegment* HAnimSegment232 = new HAnimSegment();
HAnimSegment232->setName("r_metacarpal_5");
HAnimSegment232->setDEF("hanim_r_metacarpal_5");
Transform* Transform233 = new Transform();
Transform233->setTranslation(new float[3]{0.15,0.17,0});
Shape* Shape234 = new Shape();
Shape234->setUSE("HAnimJointShape");
Transform233->addChild(Shape234);

HAnimSegment232->addChild(Transform233);

Shape* Shape235 = new Shape();
Appearance* Appearance236 = new Appearance();
Material* Material237 = new Material();
Material237->setEmissiveColor(new float[3]{1,1,1});
Appearance236->setMaterial(Material237);

Shape235->setAppearance(Appearance236);

IndexedLineSet* IndexedLineSet238 = new IndexedLineSet();
IndexedLineSet238->setDEF("CMC5toMCP5");
IndexedLineSet238->setCoordIndex(new int[2]{0,1});
Coordinate* Coordinate239 = new Coordinate();
Coordinate239->setPoint(new float[6]{0.15,0.17,0,0.2,0.4,0});
IndexedLineSet238->setCoord(Coordinate239);

Shape235->setGeometry(IndexedLineSet238);

HAnimSegment232->addChild(Shape235);

HAnimJoint231->addChild(HAnimSegment232);

HAnimJoint* HAnimJoint240 = new HAnimJoint();
HAnimJoint240->setName("r_metacarpophalangeal_5");
HAnimJoint240->setDEF("hanim_r_metacarpophalangeal_5");
HAnimJoint240->setCenter(new float[3]{0.2,0.4,0});
HAnimSegment* HAnimSegment241 = new HAnimSegment();
HAnimSegment241->setName("r_carpal_proximal_phalanx_5");
HAnimSegment241->setDEF("hanim_r_carpal_proximal_phalanx_5");
Transform* Transform242 = new Transform();
Transform242->setTranslation(new float[3]{0.2,0.4,0});
Shape* Shape243 = new Shape();
Shape243->setUSE("HAnimJointShape");
Transform242->addChild(Shape243);

HAnimSegment241->addChild(Transform242);

Shape* Shape244 = new Shape();
Appearance* Appearance245 = new Appearance();
Material* Material246 = new Material();
Material246->setEmissiveColor(new float[3]{1,1,1});
Appearance245->setMaterial(Material246);

Shape244->setAppearance(Appearance245);

IndexedLineSet* IndexedLineSet247 = new IndexedLineSet();
IndexedLineSet247->setDEF("MCP5toPIP5");
IndexedLineSet247->setCoordIndex(new int[2]{0,1});
Coordinate* Coordinate248 = new Coordinate();
Coordinate248->setPoint(new float[6]{0.2,0.4,0,0.23,0.63,0});
IndexedLineSet247->setCoord(Coordinate248);

Shape244->setGeometry(IndexedLineSet247);

HAnimSegment241->addChild(Shape244);

HAnimJoint240->addChild(HAnimSegment241);

HAnimJoint* HAnimJoint249 = new HAnimJoint();
HAnimJoint249->setName("r_carpal_proximal_interphalangeal_5");
HAnimJoint249->setDEF("hanim_r_carpal_proximal_interphalangeal_5");
HAnimJoint249->setCenter(new float[3]{0.23,0.63,0});
HAnimSegment* HAnimSegment250 = new HAnimSegment();
HAnimSegment250->setName("r_carpal_middle_phalanx_5");
HAnimSegment250->setDEF("hanim_r_carpal_middle_phalanx_5");
Transform* Transform251 = new Transform();
Transform251->setTranslation(new float[3]{0.23,0.63,0});
Shape* Shape252 = new Shape();
Shape252->setUSE("HAnimJointShape");
Transform251->addChild(Shape252);

HAnimSegment250->addChild(Transform251);

Shape* Shape253 = new Shape();
Appearance* Appearance254 = new Appearance();
Material* Material255 = new Material();
Material255->setEmissiveColor(new float[3]{1,1,1});
Appearance254->setMaterial(Material255);

Shape253->setAppearance(Appearance254);

IndexedLineSet* IndexedLineSet256 = new IndexedLineSet();
IndexedLineSet256->setDEF("PIP5toDIP5");
IndexedLineSet256->setCoordIndex(new int[2]{0,1});
Coordinate* Coordinate257 = new Coordinate();
Coordinate257->setPoint(new float[6]{0.23,0.63,0,0.25,0.79,0});
IndexedLineSet256->setCoord(Coordinate257);

Shape253->setGeometry(IndexedLineSet256);

HAnimSegment250->addChild(Shape253);

HAnimJoint249->addChild(HAnimSegment250);

HAnimJoint* HAnimJoint258 = new HAnimJoint();
HAnimJoint258->setName("r_carpal_distal_interphalangeal_5");
HAnimJoint258->setDEF("hanim_r_carpal_distal_interphalangeal_5");
HAnimJoint258->setCenter(new float[3]{0.25,0.79,0});
HAnimSegment* HAnimSegment259 = new HAnimSegment();
HAnimSegment259->setName("r_carpal_distal_phalanx_5");
HAnimSegment259->setDEF("hanim_r_carpal_distal_phalanx_5");
Transform* Transform260 = new Transform();
Transform260->setTranslation(new float[3]{0.25,0.79,0});
Shape* Shape261 = new Shape();
Shape261->setUSE("HAnimJointShape");
Transform260->addChild(Shape261);

HAnimSegment259->addChild(Transform260);

Shape* Shape262 = new Shape();
Appearance* Appearance263 = new Appearance();
Material* Material264 = new Material();
Material264->setEmissiveColor(new float[3]{1,1,1});
Appearance263->setMaterial(Material264);

Shape262->setAppearance(Appearance263);

IndexedLineSet* IndexedLineSet265 = new IndexedLineSet();
IndexedLineSet265->setDEF("fingertip_r_carpal_distal_interphalangeal_5");
IndexedLineSet265->setCoordIndex(new int[2]{0,1});
Coordinate* Coordinate266 = new Coordinate();
Coordinate266->setPoint(new float[6]{0.25,0.79,0,0.26,0.85,0});
IndexedLineSet265->setCoord(Coordinate266);

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
HAnimJoint267->setUSE("hanim_humanoid_root");
HAnimHumanoid26->addJoints(HAnimJoint267);

HAnimJoint* HAnimJoint268 = new HAnimJoint();
HAnimJoint268->setUSE("hanim_r_carpal_distal_interphalangeal_2");
HAnimHumanoid26->addJoints(HAnimJoint268);

HAnimJoint* HAnimJoint269 = new HAnimJoint();
HAnimJoint269->setUSE("hanim_r_carpal_distal_interphalangeal_3");
HAnimHumanoid26->addJoints(HAnimJoint269);

HAnimJoint* HAnimJoint270 = new HAnimJoint();
HAnimJoint270->setUSE("hanim_r_carpal_distal_interphalangeal_4");
HAnimHumanoid26->addJoints(HAnimJoint270);

HAnimJoint* HAnimJoint271 = new HAnimJoint();
HAnimJoint271->setUSE("hanim_r_carpal_distal_interphalangeal_5");
HAnimHumanoid26->addJoints(HAnimJoint271);

HAnimJoint* HAnimJoint272 = new HAnimJoint();
HAnimJoint272->setUSE("hanim_r_carpal_interphalangeal_1");
HAnimHumanoid26->addJoints(HAnimJoint272);

HAnimJoint* HAnimJoint273 = new HAnimJoint();
HAnimJoint273->setUSE("hanim_r_carpal_proximal_interphalangeal_2");
HAnimHumanoid26->addJoints(HAnimJoint273);

HAnimJoint* HAnimJoint274 = new HAnimJoint();
HAnimJoint274->setUSE("hanim_r_carpal_proximal_interphalangeal_3");
HAnimHumanoid26->addJoints(HAnimJoint274);

HAnimJoint* HAnimJoint275 = new HAnimJoint();
HAnimJoint275->setUSE("hanim_r_carpal_proximal_interphalangeal_4");
HAnimHumanoid26->addJoints(HAnimJoint275);

HAnimJoint* HAnimJoint276 = new HAnimJoint();
HAnimJoint276->setUSE("hanim_r_carpal_proximal_interphalangeal_5");
HAnimHumanoid26->addJoints(HAnimJoint276);

HAnimJoint* HAnimJoint277 = new HAnimJoint();
HAnimJoint277->setUSE("hanim_r_carpometacarpal_1");
HAnimHumanoid26->addJoints(HAnimJoint277);

HAnimJoint* HAnimJoint278 = new HAnimJoint();
HAnimJoint278->setUSE("hanim_r_carpometacarpal_2");
HAnimHumanoid26->addJoints(HAnimJoint278);

HAnimJoint* HAnimJoint279 = new HAnimJoint();
HAnimJoint279->setUSE("hanim_r_carpometacarpal_3");
HAnimHumanoid26->addJoints(HAnimJoint279);

HAnimJoint* HAnimJoint280 = new HAnimJoint();
HAnimJoint280->setUSE("hanim_r_carpometacarpal_4");
HAnimHumanoid26->addJoints(HAnimJoint280);

HAnimJoint* HAnimJoint281 = new HAnimJoint();
HAnimJoint281->setUSE("hanim_r_carpometacarpal_5");
HAnimHumanoid26->addJoints(HAnimJoint281);

HAnimJoint* HAnimJoint282 = new HAnimJoint();
HAnimJoint282->setUSE("hanim_r_metacarpophalangeal_1");
HAnimHumanoid26->addJoints(HAnimJoint282);

HAnimJoint* HAnimJoint283 = new HAnimJoint();
HAnimJoint283->setUSE("hanim_r_metacarpophalangeal_2");
HAnimHumanoid26->addJoints(HAnimJoint283);

HAnimJoint* HAnimJoint284 = new HAnimJoint();
HAnimJoint284->setUSE("hanim_r_metacarpophalangeal_3");
HAnimHumanoid26->addJoints(HAnimJoint284);

HAnimJoint* HAnimJoint285 = new HAnimJoint();
HAnimJoint285->setUSE("hanim_r_metacarpophalangeal_4");
HAnimHumanoid26->addJoints(HAnimJoint285);

HAnimJoint* HAnimJoint286 = new HAnimJoint();
HAnimJoint286->setUSE("hanim_r_metacarpophalangeal_5");
HAnimHumanoid26->addJoints(HAnimJoint286);

HAnimJoint* HAnimJoint287 = new HAnimJoint();
HAnimJoint287->setUSE("hanim_r_midcarpal_1");
HAnimHumanoid26->addJoints(HAnimJoint287);

HAnimJoint* HAnimJoint288 = new HAnimJoint();
HAnimJoint288->setUSE("hanim_r_midcarpal_2");
HAnimHumanoid26->addJoints(HAnimJoint288);

HAnimJoint* HAnimJoint289 = new HAnimJoint();
HAnimJoint289->setUSE("hanim_r_midcarpal_3");
HAnimHumanoid26->addJoints(HAnimJoint289);

HAnimJoint* HAnimJoint290 = new HAnimJoint();
HAnimJoint290->setUSE("hanim_r_midcarpal_4_5");
HAnimHumanoid26->addJoints(HAnimJoint290);

HAnimJoint* HAnimJoint291 = new HAnimJoint();
HAnimJoint291->setUSE("hanim_r_radiocarpal");
HAnimHumanoid26->addJoints(HAnimJoint291);

HAnimSegment* HAnimSegment292 = new HAnimSegment();
HAnimSegment292->setUSE("hanim_r_capitate");
HAnimHumanoid26->setSegments(HAnimSegment292);

HAnimSegment* HAnimSegment293 = new HAnimSegment();
HAnimSegment293->setUSE("hanim_r_carpal");
HAnimHumanoid26->setSegments(HAnimSegment293);

HAnimSegment* HAnimSegment294 = new HAnimSegment();
HAnimSegment294->setUSE("hanim_r_carpal_distal_phalanx_1");
HAnimHumanoid26->setSegments(HAnimSegment294);

HAnimSegment* HAnimSegment295 = new HAnimSegment();
HAnimSegment295->setUSE("hanim_r_carpal_distal_phalanx_2");
HAnimHumanoid26->setSegments(HAnimSegment295);

HAnimSegment* HAnimSegment296 = new HAnimSegment();
HAnimSegment296->setUSE("hanim_r_carpal_distal_phalanx_3");
HAnimHumanoid26->setSegments(HAnimSegment296);

HAnimSegment* HAnimSegment297 = new HAnimSegment();
HAnimSegment297->setUSE("hanim_r_carpal_distal_phalanx_4");
HAnimHumanoid26->setSegments(HAnimSegment297);

HAnimSegment* HAnimSegment298 = new HAnimSegment();
HAnimSegment298->setUSE("hanim_r_carpal_distal_phalanx_5");
HAnimHumanoid26->setSegments(HAnimSegment298);

HAnimSegment* HAnimSegment299 = new HAnimSegment();
HAnimSegment299->setUSE("hanim_r_carpal_middle_phalanx_2");
HAnimHumanoid26->setSegments(HAnimSegment299);

HAnimSegment* HAnimSegment300 = new HAnimSegment();
HAnimSegment300->setUSE("hanim_r_carpal_middle_phalanx_3");
HAnimHumanoid26->setSegments(HAnimSegment300);

HAnimSegment* HAnimSegment301 = new HAnimSegment();
HAnimSegment301->setUSE("hanim_r_carpal_middle_phalanx_4");
HAnimHumanoid26->setSegments(HAnimSegment301);

HAnimSegment* HAnimSegment302 = new HAnimSegment();
HAnimSegment302->setUSE("hanim_r_carpal_middle_phalanx_5");
HAnimHumanoid26->setSegments(HAnimSegment302);

HAnimSegment* HAnimSegment303 = new HAnimSegment();
HAnimSegment303->setUSE("hanim_r_carpal_proximal_phalanx_1");
HAnimHumanoid26->setSegments(HAnimSegment303);

HAnimSegment* HAnimSegment304 = new HAnimSegment();
HAnimSegment304->setUSE("hanim_r_carpal_proximal_phalanx_2");
HAnimHumanoid26->setSegments(HAnimSegment304);

HAnimSegment* HAnimSegment305 = new HAnimSegment();
HAnimSegment305->setUSE("hanim_r_carpal_proximal_phalanx_3");
HAnimHumanoid26->setSegments(HAnimSegment305);

HAnimSegment* HAnimSegment306 = new HAnimSegment();
HAnimSegment306->setUSE("hanim_r_carpal_proximal_phalanx_4");
HAnimHumanoid26->setSegments(HAnimSegment306);

HAnimSegment* HAnimSegment307 = new HAnimSegment();
HAnimSegment307->setUSE("hanim_r_carpal_proximal_phalanx_5");
HAnimHumanoid26->setSegments(HAnimSegment307);

HAnimSegment* HAnimSegment308 = new HAnimSegment();
HAnimSegment308->setUSE("hanim_r_hamate");
HAnimHumanoid26->setSegments(HAnimSegment308);

HAnimSegment* HAnimSegment309 = new HAnimSegment();
HAnimSegment309->setUSE("hanim_r_metacarpal_1");
HAnimHumanoid26->setSegments(HAnimSegment309);

HAnimSegment* HAnimSegment310 = new HAnimSegment();
HAnimSegment310->setUSE("hanim_r_metacarpal_2");
HAnimHumanoid26->setSegments(HAnimSegment310);

HAnimSegment* HAnimSegment311 = new HAnimSegment();
HAnimSegment311->setUSE("hanim_r_metacarpal_3");
HAnimHumanoid26->setSegments(HAnimSegment311);

HAnimSegment* HAnimSegment312 = new HAnimSegment();
HAnimSegment312->setUSE("hanim_r_metacarpal_4");
HAnimHumanoid26->setSegments(HAnimSegment312);

HAnimSegment* HAnimSegment313 = new HAnimSegment();
HAnimSegment313->setUSE("hanim_r_metacarpal_5");
HAnimHumanoid26->setSegments(HAnimSegment313);

HAnimSegment* HAnimSegment314 = new HAnimSegment();
HAnimSegment314->setUSE("hanim_r_trapezium");
HAnimHumanoid26->setSegments(HAnimSegment314);

HAnimSegment* HAnimSegment315 = new HAnimSegment();
HAnimSegment315->setUSE("hanim_r_trapezoid");
HAnimHumanoid26->setSegments(HAnimSegment315);

Scene24->addChild(HAnimHumanoid26);

X3D0->setScene(Scene24);

X3D0->toXMLString();
}
