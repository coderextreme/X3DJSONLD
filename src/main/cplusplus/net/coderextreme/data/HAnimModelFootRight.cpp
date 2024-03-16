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
meta3->setContent("HAnimModelFootRight.x3d");
head1->addMeta(meta3);

meta* meta4 = new meta();
meta4->setName("description");
meta4->setContent("Right foot, using high-fidelity definitions for HAnim version 2.0");
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
meta8->setName("warning");
meta8->setContent("not yet to scale");
head1->addMeta(meta8);

meta* meta9 = new meta();
meta9->setName("TODO");
meta9->setContent("Update all values to match HAnim2 A.7 Level of articulation four LOA-4");
head1->addMeta(meta9);

meta* meta10 = new meta();
meta10->setName("TODO");
meta10->setContent("Add links to figures");
head1->addMeta(meta10);

meta* meta11 = new meta();
meta11->setName("TODO");
meta11->setContent("Add Viewpoints to enable inspection");
head1->addMeta(meta11);

meta* meta12 = new meta();
meta12->setName("info");
meta12->setContent("TODO describe how to compute and apply offsets for center values whenever attaching this appendage to a body");
head1->addMeta(meta12);

meta* meta13 = new meta();
meta13->setName("warning");
meta13->setContent("TODO will X3D HAnim component add a new level to support LOA-4 functionality?");
head1->addMeta(meta13);

meta* meta14 = new meta();
meta14->setName("reference");
meta14->setContent("https://www.web3d.org/working-groups/humanoid-animation-HAnim");
head1->addMeta(meta14);

meta* meta15 = new meta();
meta15->setName("reference");
meta15->setContent("https://www.web3d.org/documents/specifications/19774/V2.0");
head1->addMeta(meta15);

meta* meta16 = new meta();
meta16->setName("reference");
meta16->setContent("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#TheFeet");
head1->addMeta(meta16);

meta* meta17 = new meta();
meta17->setName("reference");
meta17->setContent("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#f-FootJoints");
head1->addMeta(meta17);

meta* meta18 = new meta();
meta18->setName("reference");
meta18->setContent("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#Hierarchy4");
head1->addMeta(meta18);

meta* meta19 = new meta();
meta19->setName("reference");
meta19->setContent("https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19775-1v4-WD2/Part01/components/hanim.html");
head1->addMeta(meta19);

meta* meta20 = new meta();
meta20->setName("subject");
meta20->setContent("X3D HAnim humanoid animation");
head1->addMeta(meta20);

meta* meta21 = new meta();
meta21->setName("TODO");
meta21->setContent("Integrate and confirm Segment/Joint names, Viewpoints.");
head1->addMeta(meta21);

meta* meta22 = new meta();
meta22->setName("identifier");
meta22->setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelFootRight.x3d");
head1->addMeta(meta22);

meta* meta23 = new meta();
meta23->setName("generator");
meta23->setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit");
head1->addMeta(meta23);

meta* meta24 = new meta();
meta24->setName("license");
meta24->setContent("../license.html");
head1->addMeta(meta24);

X3D0->setHead(head1);

Scene* Scene25 = new Scene();
WorldInfo* WorldInfo26 = new WorldInfo();
WorldInfo26->setTitle("HAnimModelFootRight.x3d");
Scene25->addChild(WorldInfo26);

HAnimHumanoid* HAnimHumanoid27 = new HAnimHumanoid();
HAnimHumanoid27->setName("Foot_Right");
HAnimHumanoid27->setDEF("hanim_Foot_Right");
HAnimHumanoid27->setLoa(4);
HAnimHumanoid27->setVersion("2.0");
//original HAnimHumanoid info='\"authorName=Kwan-Hee YOO, Don Brutzman and Joe Williams\"'
MetadataSet* MetadataSet28 = new MetadataSet();
MetadataSet28->setName("HAnimHumanoid.info");
MetadataSet28->setReference("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid");
MetadataString* MetadataString29 = new MetadataString();
MetadataString29->setName("authorName");
MetadataString29->setValue(new String[1]{"Kwan-Hee YOO, Don Brutzman and Joe Williams"}, 1);
MetadataSet28->setValue(MetadataString29);

HAnimHumanoid27->setMetadata(MetadataSet28);

HAnimJoint* HAnimJoint30 = new HAnimJoint();
HAnimJoint30->setName("humanoid_root");
HAnimJoint30->setDEF("hanim_humanoid_root");
//Might consider putting a HAnimSegment here, but that doesn't help with re-use of this foot model
HAnimJoint* HAnimJoint31 = new HAnimJoint();
HAnimJoint31->setName("r_talocrural");
HAnimJoint31->setDEF("hanim_r_talocrural");
HAnimJoint31->setDescription("connection joint of foot to leg above");
HAnimSegment* HAnimSegment32 = new HAnimSegment();
HAnimSegment32->setName("r_talus");
HAnimSegment32->setDEF("hanim_r_talus");
Transform* Transform33 = new Transform();
Shape* Shape34 = new Shape();
Shape34->setDEF("HAnimJointShape");
Sphere* Sphere35 = new Sphere();
Sphere35->setRadius(0.025);
Shape34->setGeometry(Sphere35);

Appearance* Appearance36 = new Appearance();
Appearance36->setDEF("HAnimJointAppearance");
Material* Material37 = new Material();
Material37->setDiffuseColor(new float[3]{0,0,1});
Appearance36->setMaterial(Material37);

Shape34->setAppearance(Appearance36);

Transform33->addChild(Shape34);

HAnimSegment32->addChild(Transform33);

Shape* Shape38 = new Shape();
Appearance* Appearance39 = new Appearance();
Material* Material40 = new Material();
Material40->setEmissiveColor(new float[3]{1,1,1});
Appearance39->setMaterial(Material40);

Shape38->setAppearance(Appearance39);

IndexedLineSet* IndexedLineSet41 = new IndexedLineSet();
IndexedLineSet41->setDEF("TCtoTCN");
IndexedLineSet41->setCoordIndex(new int[2]{0,1});
Coordinate* Coordinate42 = new Coordinate();
Coordinate42->setPoint(new float[6]{0,0,0,0,-0.3,0});
IndexedLineSet41->setCoord(Coordinate42);

Shape38->setGeometry(IndexedLineSet41);

HAnimSegment32->addChild(Shape38);

Shape* Shape43 = new Shape();
Appearance* Appearance44 = new Appearance();
Material* Material45 = new Material();
Material45->setEmissiveColor(new float[3]{1,1,1});
Appearance44->setMaterial(Material45);

Shape43->setAppearance(Appearance44);

IndexedLineSet* IndexedLineSet46 = new IndexedLineSet();
IndexedLineSet46->setDEF("TCtoCC");
IndexedLineSet46->setCoordIndex(new int[2]{0,1});
Coordinate* Coordinate47 = new Coordinate();
Coordinate47->setPoint(new float[6]{0,0,0,-0.2,0.3,0});
IndexedLineSet46->setCoord(Coordinate47);

Shape43->setGeometry(IndexedLineSet46);

HAnimSegment32->addChild(Shape43);

HAnimJoint31->addChild(HAnimSegment32);

//TCN
HAnimJoint* HAnimJoint48 = new HAnimJoint();
HAnimJoint48->setName("r_talocalcaneonavicular");
HAnimJoint48->setDEF("hanim_r_talocalcaneonavicular");
HAnimJoint48->setCenter(new float[3]{0,-0.3,0});
HAnimSegment* HAnimSegment49 = new HAnimSegment();
HAnimSegment49->setName("r_navicular");
HAnimSegment49->setDEF("hanim_r_navicular");
Transform* Transform50 = new Transform();
Transform50->setTranslation(new float[3]{0,-0.3,0});
Shape* Shape51 = new Shape();
Shape51->setUSE("HAnimJointShape");
Transform50->addChild(Shape51);

HAnimSegment49->addChild(Transform50);

Shape* Shape52 = new Shape();
Appearance* Appearance53 = new Appearance();
Material* Material54 = new Material();
Material54->setEmissiveColor(new float[3]{1,1,1});
Appearance53->setMaterial(Material54);

Shape52->setAppearance(Appearance53);

IndexedLineSet* IndexedLineSet55 = new IndexedLineSet();
IndexedLineSet55->setDEF("TCNtoCN1");
IndexedLineSet55->setCoordIndex(new int[2]{0,1});
Coordinate* Coordinate56 = new Coordinate();
Coordinate56->setPoint(new float[6]{0,-0.3,0,0.1,-0.45,0});
IndexedLineSet55->setCoord(Coordinate56);

Shape52->setGeometry(IndexedLineSet55);

HAnimSegment49->addChild(Shape52);

Shape* Shape57 = new Shape();
Appearance* Appearance58 = new Appearance();
Material* Material59 = new Material();
Material59->setEmissiveColor(new float[3]{1,1,1});
Appearance58->setMaterial(Material59);

Shape57->setAppearance(Appearance58);

IndexedLineSet* IndexedLineSet60 = new IndexedLineSet();
IndexedLineSet60->setDEF("TCNtoCN2");
IndexedLineSet60->setCoordIndex(new int[2]{0,1});
Coordinate* Coordinate61 = new Coordinate();
Coordinate61->setPoint(new float[6]{0,-0.3,0,0,-0.45,0});
IndexedLineSet60->setCoord(Coordinate61);

Shape57->setGeometry(IndexedLineSet60);

HAnimSegment49->addChild(Shape57);

Shape* Shape62 = new Shape();
Appearance* Appearance63 = new Appearance();
Material* Material64 = new Material();
Material64->setEmissiveColor(new float[3]{1,1,1});
Appearance63->setMaterial(Material64);

Shape62->setAppearance(Appearance63);

IndexedLineSet* IndexedLineSet65 = new IndexedLineSet();
IndexedLineSet65->setDEF("TCNtoCN3");
IndexedLineSet65->setCoordIndex(new int[2]{0,1});
Coordinate* Coordinate66 = new Coordinate();
Coordinate66->setPoint(new float[6]{0,-0.3,0,-0.1,-0.4,0});
IndexedLineSet65->setCoord(Coordinate66);

Shape62->setGeometry(IndexedLineSet65);

HAnimSegment49->addChild(Shape62);

HAnimJoint48->addChild(HAnimSegment49);

//CN1
HAnimJoint* HAnimJoint67 = new HAnimJoint();
HAnimJoint67->setName("r_cuneonavicular_1");
HAnimJoint67->setDEF("hanim_r_cuneonavicular_1");
HAnimJoint67->setCenter(new float[3]{0.1,-0.45,0});
HAnimSegment* HAnimSegment68 = new HAnimSegment();
HAnimSegment68->setName("r_cuneiform_1");
HAnimSegment68->setDEF("hanim_r_cuneiform_1");
Transform* Transform69 = new Transform();
Transform69->setTranslation(new float[3]{0.1,-0.45,0});
Shape* Shape70 = new Shape();
Shape70->setUSE("HAnimJointShape");
Transform69->addChild(Shape70);

HAnimSegment68->addChild(Transform69);

Shape* Shape71 = new Shape();
Appearance* Appearance72 = new Appearance();
Material* Material73 = new Material();
Material73->setEmissiveColor(new float[3]{1,1,1});
Appearance72->setMaterial(Material73);

Shape71->setAppearance(Appearance72);

IndexedLineSet* IndexedLineSet74 = new IndexedLineSet();
IndexedLineSet74->setDEF("CN1toTMT1");
IndexedLineSet74->setCoordIndex(new int[2]{0,1});
Coordinate* Coordinate75 = new Coordinate();
Coordinate75->setPoint(new float[6]{0.1,-0.45,0,0.1,-0.6,0});
IndexedLineSet74->setCoord(Coordinate75);

Shape71->setGeometry(IndexedLineSet74);

HAnimSegment68->addChild(Shape71);

HAnimJoint67->addChild(HAnimSegment68);

HAnimJoint* HAnimJoint76 = new HAnimJoint();
HAnimJoint76->setName("r_tarsometatarsal_1");
HAnimJoint76->setDEF("hanim_r_tarsometatarsal_1");
HAnimJoint76->setCenter(new float[3]{0.1,-0.6,0});
HAnimSegment* HAnimSegment77 = new HAnimSegment();
HAnimSegment77->setName("r_metatarsal_1");
HAnimSegment77->setDEF("hanim_r_metatarsal_1");
Transform* Transform78 = new Transform();
Transform78->setTranslation(new float[3]{0.1,-0.6,0});
Shape* Shape79 = new Shape();
Shape79->setUSE("HAnimJointShape");
Transform78->addChild(Shape79);

HAnimSegment77->addChild(Transform78);

Shape* Shape80 = new Shape();
Appearance* Appearance81 = new Appearance();
Material* Material82 = new Material();
Material82->setEmissiveColor(new float[3]{1,1,1});
Appearance81->setMaterial(Material82);

Shape80->setAppearance(Appearance81);

IndexedLineSet* IndexedLineSet83 = new IndexedLineSet();
IndexedLineSet83->setDEF("TMT1toMTP1");
IndexedLineSet83->setCoordIndex(new int[2]{0,1});
Coordinate* Coordinate84 = new Coordinate();
Coordinate84->setPoint(new float[6]{0.1,-0.6,0,0.1,-0.9,0});
IndexedLineSet83->setCoord(Coordinate84);

Shape80->setGeometry(IndexedLineSet83);

HAnimSegment77->addChild(Shape80);

HAnimJoint76->addChild(HAnimSegment77);

HAnimJoint* HAnimJoint85 = new HAnimJoint();
HAnimJoint85->setName("r_metatarsophalangeal_1");
HAnimJoint85->setDEF("hanim_r_metatarsophalangeal_1");
HAnimJoint85->setCenter(new float[3]{0.1,-0.9,0});
HAnimSegment* HAnimSegment86 = new HAnimSegment();
HAnimSegment86->setName("r_tarsal_proximal_phalanx_1");
HAnimSegment86->setDEF("hanim_r_tarsal_proximal_phalanx_1");
Transform* Transform87 = new Transform();
Transform87->setTranslation(new float[3]{0.1,-0.9,0});
Shape* Shape88 = new Shape();
Shape88->setUSE("HAnimJointShape");
Transform87->addChild(Shape88);

HAnimSegment86->addChild(Transform87);

Shape* Shape89 = new Shape();
Appearance* Appearance90 = new Appearance();
Material* Material91 = new Material();
Material91->setEmissiveColor(new float[3]{1,1,1});
Appearance90->setMaterial(Material91);

Shape89->setAppearance(Appearance90);

IndexedLineSet* IndexedLineSet92 = new IndexedLineSet();
IndexedLineSet92->setDEF("MTP1toIP1");
IndexedLineSet92->setCoordIndex(new int[2]{0,1});
Coordinate* Coordinate93 = new Coordinate();
Coordinate93->setPoint(new float[6]{0.1,-0.9,0,0.1,-1.05,0});
IndexedLineSet92->setCoord(Coordinate93);

Shape89->setGeometry(IndexedLineSet92);

HAnimSegment86->addChild(Shape89);

HAnimJoint85->addChild(HAnimSegment86);

HAnimJoint* HAnimJoint94 = new HAnimJoint();
HAnimJoint94->setName("r_tarsal_interphalangeal_1");
HAnimJoint94->setDEF("hanim_r_tarsal_interphalangeal_1");
HAnimJoint94->setCenter(new float[3]{0.1,-1.05,0});
HAnimSegment* HAnimSegment95 = new HAnimSegment();
HAnimSegment95->setName("r_tarsal_distal_phalanx_1");
HAnimSegment95->setDEF("hanim_r_tarsal_distal_phalanx_1");
Transform* Transform96 = new Transform();
Transform96->setTranslation(new float[3]{0.1,-1.05,0});
Shape* Shape97 = new Shape();
Shape97->setUSE("HAnimJointShape");
Transform96->addChild(Shape97);

HAnimSegment95->addChild(Transform96);

Shape* Shape98 = new Shape();
Appearance* Appearance99 = new Appearance();
Material* Material100 = new Material();
Material100->setEmissiveColor(new float[3]{1,1,1});
Appearance99->setMaterial(Material100);

Shape98->setAppearance(Appearance99);

IndexedLineSet* IndexedLineSet101 = new IndexedLineSet();
IndexedLineSet101->setDEF("tiptoe_r_interphalangeal_");
IndexedLineSet101->setCoordIndex(new int[2]{0,1});
Coordinate* Coordinate102 = new Coordinate();
Coordinate102->setPoint(new float[6]{0.1,-1.05,0,0.1,-1.1,0});
IndexedLineSet101->setCoord(Coordinate102);

Shape98->setGeometry(IndexedLineSet101);

HAnimSegment95->addChild(Shape98);

HAnimJoint94->addChild(HAnimSegment95);

HAnimJoint85->addChild(HAnimJoint94);

HAnimJoint76->addChild(HAnimJoint85);

HAnimJoint67->addChild(HAnimJoint76);

HAnimJoint48->addChild(HAnimJoint67);

//CN2
HAnimJoint* HAnimJoint103 = new HAnimJoint();
HAnimJoint103->setName("r_cuneonavicular_2");
HAnimJoint103->setDEF("hanim_r_cuneonavicular_2");
HAnimJoint103->setCenter(new float[3]{0,-0.45,0});
HAnimSegment* HAnimSegment104 = new HAnimSegment();
HAnimSegment104->setName("r_cuneiform_2");
HAnimSegment104->setDEF("hanim_r_cuneiform_2");
Transform* Transform105 = new Transform();
Transform105->setTranslation(new float[3]{0,-0.45,0});
Shape* Shape106 = new Shape();
Shape106->setUSE("HAnimJointShape");
Transform105->addChild(Shape106);

HAnimSegment104->addChild(Transform105);

Shape* Shape107 = new Shape();
Appearance* Appearance108 = new Appearance();
Material* Material109 = new Material();
Material109->setEmissiveColor(new float[3]{1,1,1});
Appearance108->setMaterial(Material109);

Shape107->setAppearance(Appearance108);

IndexedLineSet* IndexedLineSet110 = new IndexedLineSet();
IndexedLineSet110->setDEF("CN2toTMT2");
IndexedLineSet110->setCoordIndex(new int[2]{0,1});
Coordinate* Coordinate111 = new Coordinate();
Coordinate111->setPoint(new float[6]{0,-0.45,0,-0.05,-0.6,0});
IndexedLineSet110->setCoord(Coordinate111);

Shape107->setGeometry(IndexedLineSet110);

HAnimSegment104->addChild(Shape107);

HAnimJoint103->addChild(HAnimSegment104);

HAnimJoint* HAnimJoint112 = new HAnimJoint();
HAnimJoint112->setName("r_tarsometatarsal_2");
HAnimJoint112->setDEF("hanim_r_tarsometatarsal_2");
HAnimJoint112->setCenter(new float[3]{-0.05,-0.6,0});
HAnimSegment* HAnimSegment113 = new HAnimSegment();
HAnimSegment113->setName("r_metatarsal_2");
HAnimSegment113->setDEF("hanim_r_metatarsal_2");
Transform* Transform114 = new Transform();
Transform114->setTranslation(new float[3]{-0.05,-0.6,0});
Shape* Shape115 = new Shape();
Shape115->setUSE("HAnimJointShape");
Transform114->addChild(Shape115);

HAnimSegment113->addChild(Transform114);

Shape* Shape116 = new Shape();
Appearance* Appearance117 = new Appearance();
Material* Material118 = new Material();
Material118->setEmissiveColor(new float[3]{1,1,1});
Appearance117->setMaterial(Material118);

Shape116->setAppearance(Appearance117);

IndexedLineSet* IndexedLineSet119 = new IndexedLineSet();
IndexedLineSet119->setDEF("TMT2toMTP2");
IndexedLineSet119->setCoordIndex(new int[2]{0,1});
Coordinate* Coordinate120 = new Coordinate();
Coordinate120->setPoint(new float[6]{-0.05,-0.6,0,-0.05,-0.9,0});
IndexedLineSet119->setCoord(Coordinate120);

Shape116->setGeometry(IndexedLineSet119);

HAnimSegment113->addChild(Shape116);

HAnimJoint112->addChild(HAnimSegment113);

HAnimJoint* HAnimJoint121 = new HAnimJoint();
HAnimJoint121->setName("r_metatarsophalangeal_2");
HAnimJoint121->setDEF("hanim_r_metatarsophalangeal_2");
HAnimJoint121->setCenter(new float[3]{-0.05,-0.9,0});
HAnimSegment* HAnimSegment122 = new HAnimSegment();
HAnimSegment122->setName("r_tarsal_proximal_phalanx_2");
HAnimSegment122->setDEF("hanim_r_tarsal_proximal_phalanx_2");
Transform* Transform123 = new Transform();
Transform123->setTranslation(new float[3]{-0.05,-0.9,0});
Shape* Shape124 = new Shape();
Shape124->setUSE("HAnimJointShape");
Transform123->addChild(Shape124);

HAnimSegment122->addChild(Transform123);

Shape* Shape125 = new Shape();
Appearance* Appearance126 = new Appearance();
Material* Material127 = new Material();
Material127->setEmissiveColor(new float[3]{1,1,1});
Appearance126->setMaterial(Material127);

Shape125->setAppearance(Appearance126);

IndexedLineSet* IndexedLineSet128 = new IndexedLineSet();
IndexedLineSet128->setDEF("MTP2toPIP2");
IndexedLineSet128->setCoordIndex(new int[2]{0,1});
Coordinate* Coordinate129 = new Coordinate();
Coordinate129->setPoint(new float[6]{-0.05,-0.9,0,-0.05,-1.05,0});
IndexedLineSet128->setCoord(Coordinate129);

Shape125->setGeometry(IndexedLineSet128);

HAnimSegment122->addChild(Shape125);

HAnimJoint121->addChild(HAnimSegment122);

HAnimJoint* HAnimJoint130 = new HAnimJoint();
HAnimJoint130->setName("r_tarsal_proximal_interphalangeal_2");
HAnimJoint130->setDEF("hanim_r_tarsal_proximal_interphalangeal_2");
HAnimJoint130->setCenter(new float[3]{-0.05,-1.05,0});
HAnimSegment* HAnimSegment131 = new HAnimSegment();
HAnimSegment131->setName("r_tarsal_middle_phalanx_2");
HAnimSegment131->setDEF("hanim_r_tarsal_middle_phalanx_2");
Transform* Transform132 = new Transform();
Transform132->setTranslation(new float[3]{-0.05,-1.05,0});
Shape* Shape133 = new Shape();
Shape133->setUSE("HAnimJointShape");
Transform132->addChild(Shape133);

HAnimSegment131->addChild(Transform132);

Shape* Shape134 = new Shape();
Appearance* Appearance135 = new Appearance();
Material* Material136 = new Material();
Material136->setEmissiveColor(new float[3]{1,1,1});
Appearance135->setMaterial(Material136);

Shape134->setAppearance(Appearance135);

IndexedLineSet* IndexedLineSet137 = new IndexedLineSet();
IndexedLineSet137->setDEF("PIP2toDIP2");
IndexedLineSet137->setCoordIndex(new int[2]{0,1});
Coordinate* Coordinate138 = new Coordinate();
Coordinate138->setPoint(new float[6]{-0.05,-1.05,0,-0.05,-1.12,0});
IndexedLineSet137->setCoord(Coordinate138);

Shape134->setGeometry(IndexedLineSet137);

HAnimSegment131->addChild(Shape134);

HAnimJoint130->addChild(HAnimSegment131);

HAnimJoint* HAnimJoint139 = new HAnimJoint();
HAnimJoint139->setName("r_tarsal_distal_interphalangeal_2");
HAnimJoint139->setDEF("hanim_r_tarsal_distal_interphalangeal_2");
HAnimJoint139->setCenter(new float[3]{-0.05,-1.12,0});
HAnimSegment* HAnimSegment140 = new HAnimSegment();
HAnimSegment140->setName("r_tarsal_distal_phalanx_2");
HAnimSegment140->setDEF("hanim_r_tarsal_distal_phalanx_2");
Transform* Transform141 = new Transform();
Transform141->setTranslation(new float[3]{-0.05,-1.12,0});
Shape* Shape142 = new Shape();
Shape142->setUSE("HAnimJointShape");
Transform141->addChild(Shape142);

HAnimSegment140->addChild(Transform141);

Shape* Shape143 = new Shape();
Appearance* Appearance144 = new Appearance();
Material* Material145 = new Material();
Material145->setEmissiveColor(new float[3]{1,1,1});
Appearance144->setMaterial(Material145);

Shape143->setAppearance(Appearance144);

IndexedLineSet* IndexedLineSet146 = new IndexedLineSet();
IndexedLineSet146->setDEF("tiptoe_r_tarsal_distal_interphalangeal_2");
IndexedLineSet146->setCoordIndex(new int[2]{0,1});
Coordinate* Coordinate147 = new Coordinate();
Coordinate147->setPoint(new float[6]{-0.05,-1.12,0,-0.05,-1.16,0});
IndexedLineSet146->setCoord(Coordinate147);

Shape143->setGeometry(IndexedLineSet146);

HAnimSegment140->addChild(Shape143);

HAnimJoint139->addChild(HAnimSegment140);

HAnimJoint130->addChild(HAnimJoint139);

HAnimJoint121->addChild(HAnimJoint130);

HAnimJoint112->addChild(HAnimJoint121);

HAnimJoint103->addChild(HAnimJoint112);

HAnimJoint48->addChild(HAnimJoint103);

//CN3
HAnimJoint* HAnimJoint148 = new HAnimJoint();
HAnimJoint148->setName("r_cuneonavicular_3");
HAnimJoint148->setDEF("hanim_r_cuneonavicular_3");
HAnimJoint148->setCenter(new float[3]{-0.1,-0.4,0});
HAnimSegment* HAnimSegment149 = new HAnimSegment();
HAnimSegment149->setName("r_cuneiform_3");
HAnimSegment149->setDEF("hanim_r_cuneiform_3");
Transform* Transform150 = new Transform();
Transform150->setTranslation(new float[3]{-0.1,-0.4,0});
Shape* Shape151 = new Shape();
Shape151->setUSE("HAnimJointShape");
Transform150->addChild(Shape151);

HAnimSegment149->addChild(Transform150);

Shape* Shape152 = new Shape();
Appearance* Appearance153 = new Appearance();
Material* Material154 = new Material();
Material154->setEmissiveColor(new float[3]{1,1,1});
Appearance153->setMaterial(Material154);

Shape152->setAppearance(Appearance153);

IndexedLineSet* IndexedLineSet155 = new IndexedLineSet();
IndexedLineSet155->setDEF("CN3toTMT3");
IndexedLineSet155->setCoordIndex(new int[2]{0,1});
Coordinate* Coordinate156 = new Coordinate();
Coordinate156->setPoint(new float[6]{-0.1,-0.4,0,-0.15,-0.6,0});
IndexedLineSet155->setCoord(Coordinate156);

Shape152->setGeometry(IndexedLineSet155);

HAnimSegment149->addChild(Shape152);

HAnimJoint148->addChild(HAnimSegment149);

HAnimJoint* HAnimJoint157 = new HAnimJoint();
HAnimJoint157->setName("r_tarsometatarsal_3");
HAnimJoint157->setDEF("hanim_r_tarsometatarsal_3");
HAnimJoint157->setCenter(new float[3]{-0.15,-0.6,0});
HAnimSegment* HAnimSegment158 = new HAnimSegment();
HAnimSegment158->setName("r_metatarsal_3");
HAnimSegment158->setDEF("hanim_r_metatarsal_3");
Transform* Transform159 = new Transform();
Transform159->setTranslation(new float[3]{-0.15,-0.6,0});
Shape* Shape160 = new Shape();
Shape160->setUSE("HAnimJointShape");
Transform159->addChild(Shape160);

HAnimSegment158->addChild(Transform159);

Shape* Shape161 = new Shape();
Appearance* Appearance162 = new Appearance();
Material* Material163 = new Material();
Material163->setEmissiveColor(new float[3]{1,1,1});
Appearance162->setMaterial(Material163);

Shape161->setAppearance(Appearance162);

IndexedLineSet* IndexedLineSet164 = new IndexedLineSet();
IndexedLineSet164->setDEF("TMT3toMTP3");
IndexedLineSet164->setCoordIndex(new int[2]{0,1});
Coordinate* Coordinate165 = new Coordinate();
Coordinate165->setPoint(new float[6]{-0.15,-0.6,0,-0.15,-0.9,0});
IndexedLineSet164->setCoord(Coordinate165);

Shape161->setGeometry(IndexedLineSet164);

HAnimSegment158->addChild(Shape161);

HAnimJoint157->addChild(HAnimSegment158);

HAnimJoint* HAnimJoint166 = new HAnimJoint();
HAnimJoint166->setName("r_metatarsophalangeal_3");
HAnimJoint166->setDEF("hanim_r_metatarsophalangeal_3");
HAnimJoint166->setCenter(new float[3]{-0.15,-0.9,0});
HAnimSegment* HAnimSegment167 = new HAnimSegment();
HAnimSegment167->setName("r_tarsal_proximal_phalanx_3");
HAnimSegment167->setDEF("hanim_r_tarsal_proximal_phalanx_3");
Transform* Transform168 = new Transform();
Transform168->setTranslation(new float[3]{-0.15,-0.9,0});
Shape* Shape169 = new Shape();
Shape169->setUSE("HAnimJointShape");
Transform168->addChild(Shape169);

HAnimSegment167->addChild(Transform168);

Shape* Shape170 = new Shape();
Appearance* Appearance171 = new Appearance();
Material* Material172 = new Material();
Material172->setEmissiveColor(new float[3]{1,1,1});
Appearance171->setMaterial(Material172);

Shape170->setAppearance(Appearance171);

IndexedLineSet* IndexedLineSet173 = new IndexedLineSet();
IndexedLineSet173->setDEF("MTP3toPIP3");
IndexedLineSet173->setCoordIndex(new int[2]{0,1});
Coordinate* Coordinate174 = new Coordinate();
Coordinate174->setPoint(new float[6]{-0.15,-0.9,0,-0.15,-1.05,0});
IndexedLineSet173->setCoord(Coordinate174);

Shape170->setGeometry(IndexedLineSet173);

HAnimSegment167->addChild(Shape170);

HAnimJoint166->addChild(HAnimSegment167);

HAnimJoint* HAnimJoint175 = new HAnimJoint();
HAnimJoint175->setName("r_tarsal_proximal_interphalangeal_3");
HAnimJoint175->setDEF("hanim_r_tarsal_proximal_interphalangeal_3");
HAnimJoint175->setCenter(new float[3]{-0.15,-1.05,0});
HAnimSegment* HAnimSegment176 = new HAnimSegment();
HAnimSegment176->setName("r_tarsal_middle_phalanx_3");
HAnimSegment176->setDEF("hanim_r_tarsal_middle_phalanx_3");
Transform* Transform177 = new Transform();
Transform177->setTranslation(new float[3]{-0.15,-1.05,0});
Shape* Shape178 = new Shape();
Shape178->setUSE("HAnimJointShape");
Transform177->addChild(Shape178);

HAnimSegment176->addChild(Transform177);

Shape* Shape179 = new Shape();
Appearance* Appearance180 = new Appearance();
Material* Material181 = new Material();
Material181->setEmissiveColor(new float[3]{1,1,1});
Appearance180->setMaterial(Material181);

Shape179->setAppearance(Appearance180);

IndexedLineSet* IndexedLineSet182 = new IndexedLineSet();
IndexedLineSet182->setDEF("PIP3toDIP3");
IndexedLineSet182->setCoordIndex(new int[2]{0,1});
Coordinate* Coordinate183 = new Coordinate();
Coordinate183->setPoint(new float[6]{-0.15,-1.05,0,-0.15,-1.13,0});
IndexedLineSet182->setCoord(Coordinate183);

Shape179->setGeometry(IndexedLineSet182);

HAnimSegment176->addChild(Shape179);

HAnimJoint175->addChild(HAnimSegment176);

HAnimJoint* HAnimJoint184 = new HAnimJoint();
HAnimJoint184->setName("r_tarsal_distal_interphalangeal_3");
HAnimJoint184->setDEF("hanim_r_tarsal_distal_interphalangeal_3");
HAnimJoint184->setCenter(new float[3]{-0.15,-1.13,0});
HAnimSegment* HAnimSegment185 = new HAnimSegment();
HAnimSegment185->setName("r_tarsal_distal_phalanx_3");
HAnimSegment185->setDEF("hanim_r_tarsal_distal_phalanx_3");
Transform* Transform186 = new Transform();
Transform186->setTranslation(new float[3]{-0.15,-1.13,0});
Shape* Shape187 = new Shape();
Shape187->setUSE("HAnimJointShape");
Transform186->addChild(Shape187);

HAnimSegment185->addChild(Transform186);

Shape* Shape188 = new Shape();
Appearance* Appearance189 = new Appearance();
Material* Material190 = new Material();
Material190->setEmissiveColor(new float[3]{1,1,1});
Appearance189->setMaterial(Material190);

Shape188->setAppearance(Appearance189);

IndexedLineSet* IndexedLineSet191 = new IndexedLineSet();
IndexedLineSet191->setDEF("tiptoe_r_tarsal_distal_interphalangeal_3");
IndexedLineSet191->setCoordIndex(new int[2]{0,1});
Coordinate* Coordinate192 = new Coordinate();
Coordinate192->setPoint(new float[6]{-0.15,-1.13,0,-0.15,-1.16,0});
IndexedLineSet191->setCoord(Coordinate192);

Shape188->setGeometry(IndexedLineSet191);

HAnimSegment185->addChild(Shape188);

HAnimJoint184->addChild(HAnimSegment185);

HAnimJoint175->addChild(HAnimJoint184);

HAnimJoint166->addChild(HAnimJoint175);

HAnimJoint157->addChild(HAnimJoint166);

HAnimJoint148->addChild(HAnimJoint157);

HAnimJoint48->addChild(HAnimJoint148);

HAnimJoint31->addChild(HAnimJoint48);

//CC
HAnimJoint* HAnimJoint193 = new HAnimJoint();
HAnimJoint193->setName("r_calcaneocuboid");
HAnimJoint193->setDEF("hanim_r_calcaneocuboid");
HAnimJoint193->setCenter(new float[3]{-0.2,0.3,0});
HAnimSegment* HAnimSegment194 = new HAnimSegment();
HAnimSegment194->setName("r_calcaneus");
HAnimSegment194->setDEF("hanim_r_calcaneus");
Transform* Transform195 = new Transform();
Transform195->setTranslation(new float[3]{-0.2,0.3,0});
Shape* Shape196 = new Shape();
Shape196->setUSE("HAnimJointShape");
Transform195->addChild(Shape196);

HAnimSegment194->addChild(Transform195);

Shape* Shape197 = new Shape();
Appearance* Appearance198 = new Appearance();
Material* Material199 = new Material();
Material199->setEmissiveColor(new float[3]{1,1,1});
Appearance198->setMaterial(Material199);

Shape197->setAppearance(Appearance198);

IndexedLineSet* IndexedLineSet200 = new IndexedLineSet();
IndexedLineSet200->setDEF("CCtoTT");
IndexedLineSet200->setCoordIndex(new int[2]{0,1});
Coordinate* Coordinate201 = new Coordinate();
Coordinate201->setPoint(new float[6]{-0.2,0.3,0,-0.21,-0.3,0});
IndexedLineSet200->setCoord(Coordinate201);

Shape197->setGeometry(IndexedLineSet200);

HAnimSegment194->addChild(Shape197);

HAnimJoint193->addChild(HAnimSegment194);

//TT
HAnimJoint* HAnimJoint202 = new HAnimJoint();
HAnimJoint202->setName("r_transversetarsal");
HAnimJoint202->setDEF("hanim_r_transversetarsal");
HAnimJoint202->setCenter(new float[3]{-0.21,-0.3,0});
HAnimSegment* HAnimSegment203 = new HAnimSegment();
HAnimSegment203->setName("r_cuboid");
HAnimSegment203->setDEF("hanim_r_cuboid");
Transform* Transform204 = new Transform();
Transform204->setTranslation(new float[3]{-0.21,-0.3,0});
Shape* Shape205 = new Shape();
Shape205->setUSE("HAnimJointShape");
Transform204->addChild(Shape205);

HAnimSegment203->addChild(Transform204);

Shape* Shape206 = new Shape();
Appearance* Appearance207 = new Appearance();
Material* Material208 = new Material();
Material208->setEmissiveColor(new float[3]{1,1,1});
Appearance207->setMaterial(Material208);

Shape206->setAppearance(Appearance207);

IndexedLineSet* IndexedLineSet209 = new IndexedLineSet();
IndexedLineSet209->setDEF("TTtoTMT4");
IndexedLineSet209->setCoordIndex(new int[2]{0,1});
Coordinate* Coordinate210 = new Coordinate();
Coordinate210->setPoint(new float[6]{-0.21,-0.3,0,-0.25,-0.58,0});
IndexedLineSet209->setCoord(Coordinate210);

Shape206->setGeometry(IndexedLineSet209);

HAnimSegment203->addChild(Shape206);

Shape* Shape211 = new Shape();
Appearance* Appearance212 = new Appearance();
Material* Material213 = new Material();
Material213->setEmissiveColor(new float[3]{1,1,1});
Appearance212->setMaterial(Material213);

Shape211->setAppearance(Appearance212);

IndexedLineSet* IndexedLineSet214 = new IndexedLineSet();
IndexedLineSet214->setDEF("TTtoTMT5");
IndexedLineSet214->setCoordIndex(new int[2]{0,1});
Coordinate* Coordinate215 = new Coordinate();
Coordinate215->setPoint(new float[6]{-0.21,-0.3,0,-0.33,-0.52,0});
IndexedLineSet214->setCoord(Coordinate215);

Shape211->setGeometry(IndexedLineSet214);

HAnimSegment203->addChild(Shape211);

HAnimJoint202->addChild(HAnimSegment203);

//TMT4
HAnimJoint* HAnimJoint216 = new HAnimJoint();
HAnimJoint216->setName("r_tarsometatarsal_4");
HAnimJoint216->setDEF("hanim_r_tarsometatarsal_4");
HAnimJoint216->setCenter(new float[3]{-0.25,-0.58,0});
HAnimSegment* HAnimSegment217 = new HAnimSegment();
HAnimSegment217->setName("r_metatarsal_4");
HAnimSegment217->setDEF("hanim_r_metatarsal_4");
Transform* Transform218 = new Transform();
Transform218->setTranslation(new float[3]{-0.25,-0.58,0});
Shape* Shape219 = new Shape();
Shape219->setUSE("HAnimJointShape");
Transform218->addChild(Shape219);

HAnimSegment217->addChild(Transform218);

Shape* Shape220 = new Shape();
Appearance* Appearance221 = new Appearance();
Material* Material222 = new Material();
Material222->setEmissiveColor(new float[3]{1,1,1});
Appearance221->setMaterial(Material222);

Shape220->setAppearance(Appearance221);

IndexedLineSet* IndexedLineSet223 = new IndexedLineSet();
IndexedLineSet223->setDEF("TMT4toMTP4");
IndexedLineSet223->setCoordIndex(new int[2]{0,1});
Coordinate* Coordinate224 = new Coordinate();
Coordinate224->setPoint(new float[6]{-0.25,-0.58,0,-0.25,-0.87,0});
IndexedLineSet223->setCoord(Coordinate224);

Shape220->setGeometry(IndexedLineSet223);

HAnimSegment217->addChild(Shape220);

HAnimJoint216->addChild(HAnimSegment217);

HAnimJoint* HAnimJoint225 = new HAnimJoint();
HAnimJoint225->setName("r_metatarsophalangeal_4");
HAnimJoint225->setDEF("hanim_r_metatarsophalangeal_4");
HAnimJoint225->setCenter(new float[3]{-0.25,-0.87,0});
HAnimSegment* HAnimSegment226 = new HAnimSegment();
HAnimSegment226->setName("r_tarsal_proximal_phalanx_4");
HAnimSegment226->setDEF("hanim_r_tarsal_proximal_phalanx_4");
Transform* Transform227 = new Transform();
Transform227->setTranslation(new float[3]{-0.25,-0.87,0});
Shape* Shape228 = new Shape();
Shape228->setUSE("HAnimJointShape");
Transform227->addChild(Shape228);

HAnimSegment226->addChild(Transform227);

Shape* Shape229 = new Shape();
Appearance* Appearance230 = new Appearance();
Material* Material231 = new Material();
Material231->setEmissiveColor(new float[3]{1,1,1});
Appearance230->setMaterial(Material231);

Shape229->setAppearance(Appearance230);

IndexedLineSet* IndexedLineSet232 = new IndexedLineSet();
IndexedLineSet232->setDEF("MTP4toPIP4");
IndexedLineSet232->setCoordIndex(new int[2]{0,1});
Coordinate* Coordinate233 = new Coordinate();
Coordinate233->setPoint(new float[6]{-0.25,-0.87,0,-0.25,-1,0});
IndexedLineSet232->setCoord(Coordinate233);

Shape229->setGeometry(IndexedLineSet232);

HAnimSegment226->addChild(Shape229);

HAnimJoint225->addChild(HAnimSegment226);

HAnimJoint* HAnimJoint234 = new HAnimJoint();
HAnimJoint234->setName("r_tarsal_proximal_interphalangeal_4");
HAnimJoint234->setDEF("hanim_r_tarsal_proximal_interphalangeal_4");
HAnimJoint234->setCenter(new float[3]{-0.25,-1,0});
HAnimSegment* HAnimSegment235 = new HAnimSegment();
HAnimSegment235->setName("r_tarsal_middle_phalanx_4");
HAnimSegment235->setDEF("hanim_r_tarsal_middle_phalanx_4");
Transform* Transform236 = new Transform();
Transform236->setTranslation(new float[3]{-0.25,-1,0});
Shape* Shape237 = new Shape();
Shape237->setUSE("HAnimJointShape");
Transform236->addChild(Shape237);

HAnimSegment235->addChild(Transform236);

Shape* Shape238 = new Shape();
Appearance* Appearance239 = new Appearance();
Material* Material240 = new Material();
Material240->setEmissiveColor(new float[3]{1,1,1});
Appearance239->setMaterial(Material240);

Shape238->setAppearance(Appearance239);

IndexedLineSet* IndexedLineSet241 = new IndexedLineSet();
IndexedLineSet241->setDEF("PIP4toDIP4");
IndexedLineSet241->setCoordIndex(new int[2]{0,1});
Coordinate* Coordinate242 = new Coordinate();
Coordinate242->setPoint(new float[6]{-0.25,-1,0,-0.25,-1.1,0});
IndexedLineSet241->setCoord(Coordinate242);

Shape238->setGeometry(IndexedLineSet241);

HAnimSegment235->addChild(Shape238);

HAnimJoint234->addChild(HAnimSegment235);

HAnimJoint* HAnimJoint243 = new HAnimJoint();
HAnimJoint243->setName("r_tarsal_distal_interphalangeal_4");
HAnimJoint243->setDEF("hanim_r_tarsal_distal_interphalangeal_4");
HAnimJoint243->setCenter(new float[3]{-0.25,-1.1,0});
HAnimSegment* HAnimSegment244 = new HAnimSegment();
HAnimSegment244->setName("r_tarsal_distal_phalanx_4");
HAnimSegment244->setDEF("hanim_r_tarsal_distal_phalanx_4");
Transform* Transform245 = new Transform();
Transform245->setTranslation(new float[3]{-0.25,-1.1,0});
Shape* Shape246 = new Shape();
Shape246->setUSE("HAnimJointShape");
Transform245->addChild(Shape246);

HAnimSegment244->addChild(Transform245);

Shape* Shape247 = new Shape();
Appearance* Appearance248 = new Appearance();
Material* Material249 = new Material();
Material249->setEmissiveColor(new float[3]{1,1,1});
Appearance248->setMaterial(Material249);

Shape247->setAppearance(Appearance248);

IndexedLineSet* IndexedLineSet250 = new IndexedLineSet();
IndexedLineSet250->setDEF("tiptoe_r_tarsal_distal_interphalangeal_4");
IndexedLineSet250->setCoordIndex(new int[2]{0,1});
Coordinate* Coordinate251 = new Coordinate();
Coordinate251->setPoint(new float[6]{-0.25,-1.1,0,-0.25,-1.15,0});
IndexedLineSet250->setCoord(Coordinate251);

Shape247->setGeometry(IndexedLineSet250);

HAnimSegment244->addChild(Shape247);

HAnimJoint243->addChild(HAnimSegment244);

HAnimJoint234->addChild(HAnimJoint243);

HAnimJoint225->addChild(HAnimJoint234);

HAnimJoint216->addChild(HAnimJoint225);

HAnimJoint202->addChild(HAnimJoint216);

//TMT5
HAnimJoint* HAnimJoint252 = new HAnimJoint();
HAnimJoint252->setName("r_tarsometatarsal_5");
HAnimJoint252->setDEF("hanim_r_tarsometatarsal_5");
HAnimJoint252->setCenter(new float[3]{-0.33,-0.52,0});
HAnimSegment* HAnimSegment253 = new HAnimSegment();
HAnimSegment253->setName("r_metatarsal_5");
HAnimSegment253->setDEF("hanim_r_metatarsal_5");
Transform* Transform254 = new Transform();
Transform254->setTranslation(new float[3]{-0.33,-0.52,0});
Shape* Shape255 = new Shape();
Shape255->setUSE("HAnimJointShape");
Transform254->addChild(Shape255);

HAnimSegment253->addChild(Transform254);

Shape* Shape256 = new Shape();
Appearance* Appearance257 = new Appearance();
Material* Material258 = new Material();
Material258->setEmissiveColor(new float[3]{1,1,1});
Appearance257->setMaterial(Material258);

Shape256->setAppearance(Appearance257);

IndexedLineSet* IndexedLineSet259 = new IndexedLineSet();
IndexedLineSet259->setDEF("TMT5toMTP5");
IndexedLineSet259->setCoordIndex(new int[2]{0,1});
Coordinate* Coordinate260 = new Coordinate();
Coordinate260->setPoint(new float[6]{-0.33,-0.52,0,-0.34,-0.8,0});
IndexedLineSet259->setCoord(Coordinate260);

Shape256->setGeometry(IndexedLineSet259);

HAnimSegment253->addChild(Shape256);

HAnimJoint252->addChild(HAnimSegment253);

HAnimJoint* HAnimJoint261 = new HAnimJoint();
HAnimJoint261->setName("r_metatarsophalangeal_5");
HAnimJoint261->setDEF("hanim_r_metatarsophalangeal_5");
HAnimJoint261->setCenter(new float[3]{-0.34,-0.8,0});
HAnimSegment* HAnimSegment262 = new HAnimSegment();
HAnimSegment262->setName("r_tarsal_proximal_phalanx_5");
HAnimSegment262->setDEF("hanim_r_tarsal_proximal_phalanx_5");
Transform* Transform263 = new Transform();
Transform263->setTranslation(new float[3]{-0.34,-0.8,0});
Shape* Shape264 = new Shape();
Shape264->setUSE("HAnimJointShape");
Transform263->addChild(Shape264);

HAnimSegment262->addChild(Transform263);

Shape* Shape265 = new Shape();
Appearance* Appearance266 = new Appearance();
Material* Material267 = new Material();
Material267->setEmissiveColor(new float[3]{1,1,1});
Appearance266->setMaterial(Material267);

Shape265->setAppearance(Appearance266);

IndexedLineSet* IndexedLineSet268 = new IndexedLineSet();
IndexedLineSet268->setDEF("MTP5toPIP5");
IndexedLineSet268->setCoordIndex(new int[2]{0,1});
Coordinate* Coordinate269 = new Coordinate();
Coordinate269->setPoint(new float[6]{-0.34,-0.8,0,-0.34,-0.95,0});
IndexedLineSet268->setCoord(Coordinate269);

Shape265->setGeometry(IndexedLineSet268);

HAnimSegment262->addChild(Shape265);

HAnimJoint261->addChild(HAnimSegment262);

HAnimJoint* HAnimJoint270 = new HAnimJoint();
HAnimJoint270->setName("r_tarsal_proximal_interphalangeal_5");
HAnimJoint270->setDEF("hanim_r_tarsal_proximal_interphalangeal_5");
HAnimJoint270->setCenter(new float[3]{-0.34,-0.95,0});
HAnimSegment* HAnimSegment271 = new HAnimSegment();
HAnimSegment271->setName("r_tarsal_middle_phalanx_5");
HAnimSegment271->setDEF("hanim_r_tarsal_middle_phalanx_5");
Transform* Transform272 = new Transform();
Transform272->setTranslation(new float[3]{-0.34,-0.95,0});
Shape* Shape273 = new Shape();
Shape273->setUSE("HAnimJointShape");
Transform272->addChild(Shape273);

HAnimSegment271->addChild(Transform272);

Shape* Shape274 = new Shape();
Appearance* Appearance275 = new Appearance();
Material* Material276 = new Material();
Material276->setEmissiveColor(new float[3]{1,1,1});
Appearance275->setMaterial(Material276);

Shape274->setAppearance(Appearance275);

IndexedLineSet* IndexedLineSet277 = new IndexedLineSet();
IndexedLineSet277->setDEF("PIP5toDIP5");
IndexedLineSet277->setCoordIndex(new int[2]{0,1});
Coordinate* Coordinate278 = new Coordinate();
Coordinate278->setPoint(new float[6]{-0.34,-0.95,0,-0.34,-1.05,0});
IndexedLineSet277->setCoord(Coordinate278);

Shape274->setGeometry(IndexedLineSet277);

HAnimSegment271->addChild(Shape274);

HAnimJoint270->addChild(HAnimSegment271);

HAnimJoint* HAnimJoint279 = new HAnimJoint();
HAnimJoint279->setName("r_tarsal_distal_interphalangeal_5");
HAnimJoint279->setDEF("hanim_r_tarsal_distal_interphalangeal_5");
HAnimJoint279->setCenter(new float[3]{-0.34,-1.05,0});
HAnimSegment* HAnimSegment280 = new HAnimSegment();
HAnimSegment280->setName("r_tarsal_distal_phalanx_5");
HAnimSegment280->setDEF("hanim_r_tarsal_distal_phalanx_5");
Transform* Transform281 = new Transform();
Transform281->setTranslation(new float[3]{-0.34,-1.05,0});
Shape* Shape282 = new Shape();
Shape282->setUSE("HAnimJointShape");
Transform281->addChild(Shape282);

HAnimSegment280->addChild(Transform281);

Shape* Shape283 = new Shape();
Appearance* Appearance284 = new Appearance();
Material* Material285 = new Material();
Material285->setEmissiveColor(new float[3]{1,1,1});
Appearance284->setMaterial(Material285);

Shape283->setAppearance(Appearance284);

IndexedLineSet* IndexedLineSet286 = new IndexedLineSet();
IndexedLineSet286->setDEF("tiptoe_r_tarsal_distal_interphalangeal_5");
IndexedLineSet286->setCoordIndex(new int[2]{0,1});
Coordinate* Coordinate287 = new Coordinate();
Coordinate287->setPoint(new float[6]{-0.34,-1.05,0,-0.34,-1.08,0});
IndexedLineSet286->setCoord(Coordinate287);

Shape283->setGeometry(IndexedLineSet286);

HAnimSegment280->addChild(Shape283);

HAnimJoint279->addChild(HAnimSegment280);

HAnimJoint270->addChild(HAnimJoint279);

HAnimJoint261->addChild(HAnimJoint270);

HAnimJoint252->addChild(HAnimJoint261);

HAnimJoint202->addChild(HAnimJoint252);

HAnimJoint193->addChild(HAnimJoint202);

HAnimJoint31->addChild(HAnimJoint193);

HAnimJoint30->addChild(HAnimJoint31);

HAnimHumanoid27->setSkeleton(HAnimJoint30);

HAnimJoint* HAnimJoint288 = new HAnimJoint();
HAnimJoint288->setUSE("hanim_humanoid_root");
HAnimHumanoid27->addJoints(HAnimJoint288);

HAnimJoint* HAnimJoint289 = new HAnimJoint();
HAnimJoint289->setUSE("hanim_r_calcaneocuboid");
HAnimHumanoid27->addJoints(HAnimJoint289);

HAnimJoint* HAnimJoint290 = new HAnimJoint();
HAnimJoint290->setUSE("hanim_r_cuneonavicular_1");
HAnimHumanoid27->addJoints(HAnimJoint290);

HAnimJoint* HAnimJoint291 = new HAnimJoint();
HAnimJoint291->setUSE("hanim_r_cuneonavicular_2");
HAnimHumanoid27->addJoints(HAnimJoint291);

HAnimJoint* HAnimJoint292 = new HAnimJoint();
HAnimJoint292->setUSE("hanim_r_cuneonavicular_3");
HAnimHumanoid27->addJoints(HAnimJoint292);

HAnimJoint* HAnimJoint293 = new HAnimJoint();
HAnimJoint293->setUSE("hanim_r_metatarsophalangeal_1");
HAnimHumanoid27->addJoints(HAnimJoint293);

HAnimJoint* HAnimJoint294 = new HAnimJoint();
HAnimJoint294->setUSE("hanim_r_metatarsophalangeal_2");
HAnimHumanoid27->addJoints(HAnimJoint294);

HAnimJoint* HAnimJoint295 = new HAnimJoint();
HAnimJoint295->setUSE("hanim_r_metatarsophalangeal_3");
HAnimHumanoid27->addJoints(HAnimJoint295);

HAnimJoint* HAnimJoint296 = new HAnimJoint();
HAnimJoint296->setUSE("hanim_r_metatarsophalangeal_4");
HAnimHumanoid27->addJoints(HAnimJoint296);

HAnimJoint* HAnimJoint297 = new HAnimJoint();
HAnimJoint297->setUSE("hanim_r_metatarsophalangeal_5");
HAnimHumanoid27->addJoints(HAnimJoint297);

HAnimJoint* HAnimJoint298 = new HAnimJoint();
HAnimJoint298->setUSE("hanim_r_talocalcaneonavicular");
HAnimHumanoid27->addJoints(HAnimJoint298);

HAnimJoint* HAnimJoint299 = new HAnimJoint();
HAnimJoint299->setUSE("hanim_r_talocrural");
HAnimHumanoid27->addJoints(HAnimJoint299);

HAnimJoint* HAnimJoint300 = new HAnimJoint();
HAnimJoint300->setUSE("hanim_r_tarsal_distal_interphalangeal_2");
HAnimHumanoid27->addJoints(HAnimJoint300);

HAnimJoint* HAnimJoint301 = new HAnimJoint();
HAnimJoint301->setUSE("hanim_r_tarsal_distal_interphalangeal_3");
HAnimHumanoid27->addJoints(HAnimJoint301);

HAnimJoint* HAnimJoint302 = new HAnimJoint();
HAnimJoint302->setUSE("hanim_r_tarsal_distal_interphalangeal_4");
HAnimHumanoid27->addJoints(HAnimJoint302);

HAnimJoint* HAnimJoint303 = new HAnimJoint();
HAnimJoint303->setUSE("hanim_r_tarsal_distal_interphalangeal_5");
HAnimHumanoid27->addJoints(HAnimJoint303);

HAnimJoint* HAnimJoint304 = new HAnimJoint();
HAnimJoint304->setUSE("hanim_r_tarsal_interphalangeal_1");
HAnimHumanoid27->addJoints(HAnimJoint304);

HAnimJoint* HAnimJoint305 = new HAnimJoint();
HAnimJoint305->setUSE("hanim_r_tarsal_proximal_interphalangeal_2");
HAnimHumanoid27->addJoints(HAnimJoint305);

HAnimJoint* HAnimJoint306 = new HAnimJoint();
HAnimJoint306->setUSE("hanim_r_tarsal_proximal_interphalangeal_3");
HAnimHumanoid27->addJoints(HAnimJoint306);

HAnimJoint* HAnimJoint307 = new HAnimJoint();
HAnimJoint307->setUSE("hanim_r_tarsal_proximal_interphalangeal_4");
HAnimHumanoid27->addJoints(HAnimJoint307);

HAnimJoint* HAnimJoint308 = new HAnimJoint();
HAnimJoint308->setUSE("hanim_r_tarsal_proximal_interphalangeal_5");
HAnimHumanoid27->addJoints(HAnimJoint308);

HAnimJoint* HAnimJoint309 = new HAnimJoint();
HAnimJoint309->setUSE("hanim_r_tarsometatarsal_1");
HAnimHumanoid27->addJoints(HAnimJoint309);

HAnimJoint* HAnimJoint310 = new HAnimJoint();
HAnimJoint310->setUSE("hanim_r_tarsometatarsal_2");
HAnimHumanoid27->addJoints(HAnimJoint310);

HAnimJoint* HAnimJoint311 = new HAnimJoint();
HAnimJoint311->setUSE("hanim_r_tarsometatarsal_3");
HAnimHumanoid27->addJoints(HAnimJoint311);

HAnimJoint* HAnimJoint312 = new HAnimJoint();
HAnimJoint312->setUSE("hanim_r_tarsometatarsal_4");
HAnimHumanoid27->addJoints(HAnimJoint312);

HAnimJoint* HAnimJoint313 = new HAnimJoint();
HAnimJoint313->setUSE("hanim_r_tarsometatarsal_5");
HAnimHumanoid27->addJoints(HAnimJoint313);

HAnimJoint* HAnimJoint314 = new HAnimJoint();
HAnimJoint314->setUSE("hanim_r_transversetarsal");
HAnimHumanoid27->addJoints(HAnimJoint314);

HAnimSegment* HAnimSegment315 = new HAnimSegment();
HAnimSegment315->setUSE("hanim_r_calcaneus");
HAnimHumanoid27->setSegments(HAnimSegment315);

HAnimSegment* HAnimSegment316 = new HAnimSegment();
HAnimSegment316->setUSE("hanim_r_cuboid");
HAnimHumanoid27->setSegments(HAnimSegment316);

HAnimSegment* HAnimSegment317 = new HAnimSegment();
HAnimSegment317->setUSE("hanim_r_cuneiform_1");
HAnimHumanoid27->setSegments(HAnimSegment317);

HAnimSegment* HAnimSegment318 = new HAnimSegment();
HAnimSegment318->setUSE("hanim_r_cuneiform_2");
HAnimHumanoid27->setSegments(HAnimSegment318);

HAnimSegment* HAnimSegment319 = new HAnimSegment();
HAnimSegment319->setUSE("hanim_r_cuneiform_3");
HAnimHumanoid27->setSegments(HAnimSegment319);

HAnimSegment* HAnimSegment320 = new HAnimSegment();
HAnimSegment320->setUSE("hanim_r_metatarsal_1");
HAnimHumanoid27->setSegments(HAnimSegment320);

HAnimSegment* HAnimSegment321 = new HAnimSegment();
HAnimSegment321->setUSE("hanim_r_metatarsal_2");
HAnimHumanoid27->setSegments(HAnimSegment321);

HAnimSegment* HAnimSegment322 = new HAnimSegment();
HAnimSegment322->setUSE("hanim_r_metatarsal_3");
HAnimHumanoid27->setSegments(HAnimSegment322);

HAnimSegment* HAnimSegment323 = new HAnimSegment();
HAnimSegment323->setUSE("hanim_r_metatarsal_4");
HAnimHumanoid27->setSegments(HAnimSegment323);

HAnimSegment* HAnimSegment324 = new HAnimSegment();
HAnimSegment324->setUSE("hanim_r_metatarsal_5");
HAnimHumanoid27->setSegments(HAnimSegment324);

HAnimSegment* HAnimSegment325 = new HAnimSegment();
HAnimSegment325->setUSE("hanim_r_navicular");
HAnimHumanoid27->setSegments(HAnimSegment325);

HAnimSegment* HAnimSegment326 = new HAnimSegment();
HAnimSegment326->setUSE("hanim_r_talus");
HAnimHumanoid27->setSegments(HAnimSegment326);

HAnimSegment* HAnimSegment327 = new HAnimSegment();
HAnimSegment327->setUSE("hanim_r_tarsal_distal_phalanx_1");
HAnimHumanoid27->setSegments(HAnimSegment327);

HAnimSegment* HAnimSegment328 = new HAnimSegment();
HAnimSegment328->setUSE("hanim_r_tarsal_distal_phalanx_2");
HAnimHumanoid27->setSegments(HAnimSegment328);

HAnimSegment* HAnimSegment329 = new HAnimSegment();
HAnimSegment329->setUSE("hanim_r_tarsal_distal_phalanx_3");
HAnimHumanoid27->setSegments(HAnimSegment329);

HAnimSegment* HAnimSegment330 = new HAnimSegment();
HAnimSegment330->setUSE("hanim_r_tarsal_distal_phalanx_4");
HAnimHumanoid27->setSegments(HAnimSegment330);

HAnimSegment* HAnimSegment331 = new HAnimSegment();
HAnimSegment331->setUSE("hanim_r_tarsal_distal_phalanx_5");
HAnimHumanoid27->setSegments(HAnimSegment331);

HAnimSegment* HAnimSegment332 = new HAnimSegment();
HAnimSegment332->setUSE("hanim_r_tarsal_middle_phalanx_2");
HAnimHumanoid27->setSegments(HAnimSegment332);

HAnimSegment* HAnimSegment333 = new HAnimSegment();
HAnimSegment333->setUSE("hanim_r_tarsal_middle_phalanx_3");
HAnimHumanoid27->setSegments(HAnimSegment333);

HAnimSegment* HAnimSegment334 = new HAnimSegment();
HAnimSegment334->setUSE("hanim_r_tarsal_middle_phalanx_4");
HAnimHumanoid27->setSegments(HAnimSegment334);

HAnimSegment* HAnimSegment335 = new HAnimSegment();
HAnimSegment335->setUSE("hanim_r_tarsal_middle_phalanx_5");
HAnimHumanoid27->setSegments(HAnimSegment335);

HAnimSegment* HAnimSegment336 = new HAnimSegment();
HAnimSegment336->setUSE("hanim_r_tarsal_proximal_phalanx_1");
HAnimHumanoid27->setSegments(HAnimSegment336);

HAnimSegment* HAnimSegment337 = new HAnimSegment();
HAnimSegment337->setUSE("hanim_r_tarsal_proximal_phalanx_2");
HAnimHumanoid27->setSegments(HAnimSegment337);

HAnimSegment* HAnimSegment338 = new HAnimSegment();
HAnimSegment338->setUSE("hanim_r_tarsal_proximal_phalanx_3");
HAnimHumanoid27->setSegments(HAnimSegment338);

HAnimSegment* HAnimSegment339 = new HAnimSegment();
HAnimSegment339->setUSE("hanim_r_tarsal_proximal_phalanx_4");
HAnimHumanoid27->setSegments(HAnimSegment339);

HAnimSegment* HAnimSegment340 = new HAnimSegment();
HAnimSegment340->setUSE("hanim_r_tarsal_proximal_phalanx_5");
HAnimHumanoid27->setSegments(HAnimSegment340);

Scene25->addChild(HAnimHumanoid27);

X3D0->setScene(Scene25);

X3D0->toXMLString();
}
