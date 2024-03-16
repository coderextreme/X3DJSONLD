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
meta3->setContent("HAnimModelFootLeft.x3d");
head1->addMeta(meta3);

meta* meta4 = new meta();
meta4->setName("description");
meta4->setContent("Left foot, using high-fidelity definitions for HAnim version 2.0");
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
meta9->setName("warning");
meta9->setContent("TODO will X3D HAnim component add a new level to support LOA-4 functionality?");
head1->addMeta(meta9);

meta* meta10 = new meta();
meta10->setName("info");
meta10->setContent("TODO describe how to compute and apply offsets for center values whenever attaching this appendage to a body");
head1->addMeta(meta10);

meta* meta11 = new meta();
meta11->setName("reference");
meta11->setContent("https://www.web3d.org/working-groups/humanoid-animation-HAnim");
head1->addMeta(meta11);

meta* meta12 = new meta();
meta12->setName("reference");
meta12->setContent("https://www.web3d.org/documents/specifications/19774/V2.0");
head1->addMeta(meta12);

meta* meta13 = new meta();
meta13->setName("reference");
meta13->setContent("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#TheFeet");
head1->addMeta(meta13);

meta* meta14 = new meta();
meta14->setName("reference");
meta14->setContent("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#f-FootJoints");
head1->addMeta(meta14);

meta* meta15 = new meta();
meta15->setName("reference");
meta15->setContent("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#Hierarchy4");
head1->addMeta(meta15);

meta* meta16 = new meta();
meta16->setName("reference");
meta16->setContent("https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19775-1v4-WD2/Part01/components/hanim.html");
head1->addMeta(meta16);

meta* meta17 = new meta();
meta17->setName("subject");
meta17->setContent("X3D HAnim humanoid animation");
head1->addMeta(meta17);

meta* meta18 = new meta();
meta18->setName("TODO");
meta18->setContent("Integrate and confirm Segment/Joint names, Viewpoints.");
head1->addMeta(meta18);

meta* meta19 = new meta();
meta19->setName("identifier");
meta19->setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelFootLeft.x3d");
head1->addMeta(meta19);

meta* meta20 = new meta();
meta20->setName("generator");
meta20->setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit");
head1->addMeta(meta20);

meta* meta21 = new meta();
meta21->setName("license");
meta21->setContent("../license.html");
head1->addMeta(meta21);

X3D0->setHead(head1);

Scene* Scene22 = new Scene();
WorldInfo* WorldInfo23 = new WorldInfo();
WorldInfo23->setTitle("HAnimModelFootLeft.x3d");
Scene22->addChild(WorldInfo23);

HAnimHumanoid* HAnimHumanoid24 = new HAnimHumanoid();
HAnimHumanoid24->setName("Foot_Left");
HAnimHumanoid24->setDEF("hanim_Foot_Left");
HAnimHumanoid24->setLoa(4);
HAnimHumanoid24->setVersion("2.0");
//original HAnimHumanoid info='\"authorName=Kwan-Hee YOO, Don Brutzman and Joe Williams\"'
MetadataSet* MetadataSet25 = new MetadataSet();
MetadataSet25->setName("HAnimHumanoid.info");
MetadataSet25->setReference("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid");
MetadataString* MetadataString26 = new MetadataString();
MetadataString26->setName("authorName");
MetadataString26->setValue(new String[1]{"Kwan-Hee YOO, Don Brutzman and Joe Williams"}, 1);
MetadataSet25->setValue(MetadataString26);

HAnimHumanoid24->setMetadata(MetadataSet25);

HAnimJoint* HAnimJoint27 = new HAnimJoint();
HAnimJoint27->setName("humanoid_root");
HAnimJoint27->setDEF("hanim_humanoid_root");
//Might consider putting a HAnimSegment here, but that doesn't help with re-use of this foot model
HAnimJoint* HAnimJoint28 = new HAnimJoint();
HAnimJoint28->setName("l_talocrural");
HAnimJoint28->setDEF("hanim_l_talocrural");
HAnimJoint28->setDescription("connection joint of foot to leg above");
HAnimSegment* HAnimSegment29 = new HAnimSegment();
HAnimSegment29->setName("l_talus");
HAnimSegment29->setDEF("hanim_l_talus");
Transform* Transform30 = new Transform();
Shape* Shape31 = new Shape();
Shape31->setDEF("HAnimJointShape");
Sphere* Sphere32 = new Sphere();
Sphere32->setRadius(0.025);
Shape31->setGeometry(Sphere32);

Appearance* Appearance33 = new Appearance();
Appearance33->setDEF("HAnimJointAppearance");
Material* Material34 = new Material();
Material34->setDiffuseColor(new float[3]{0,0,1});
Appearance33->setMaterial(Material34);

Shape31->setAppearance(Appearance33);

Transform30->addChild(Shape31);

HAnimSegment29->addChild(Transform30);

Shape* Shape35 = new Shape();
Appearance* Appearance36 = new Appearance();
Material* Material37 = new Material();
Material37->setEmissiveColor(new float[3]{1,1,1});
Appearance36->setMaterial(Material37);

Shape35->setAppearance(Appearance36);

IndexedLineSet* IndexedLineSet38 = new IndexedLineSet();
IndexedLineSet38->setDEF("TCtoTCN");
IndexedLineSet38->setCoordIndex(new int[2]{0,1});
Coordinate* Coordinate39 = new Coordinate();
Coordinate39->setPoint(new float[6]{0,0,0,0,-0.3,0});
IndexedLineSet38->setCoord(Coordinate39);

Shape35->setGeometry(IndexedLineSet38);

HAnimSegment29->addChild(Shape35);

Shape* Shape40 = new Shape();
Appearance* Appearance41 = new Appearance();
Material* Material42 = new Material();
Material42->setEmissiveColor(new float[3]{1,1,1});
Appearance41->setMaterial(Material42);

Shape40->setAppearance(Appearance41);

IndexedLineSet* IndexedLineSet43 = new IndexedLineSet();
IndexedLineSet43->setDEF("TCtoCC");
IndexedLineSet43->setCoordIndex(new int[2]{0,1});
Coordinate* Coordinate44 = new Coordinate();
Coordinate44->setPoint(new float[6]{0,0,0,0.2,0.3,0});
IndexedLineSet43->setCoord(Coordinate44);

Shape40->setGeometry(IndexedLineSet43);

HAnimSegment29->addChild(Shape40);

HAnimJoint28->addChild(HAnimSegment29);

//TCN
HAnimJoint* HAnimJoint45 = new HAnimJoint();
HAnimJoint45->setName("l_talocalcaneonavicular");
HAnimJoint45->setDEF("hanim_l_talocalcaneonavicular");
HAnimJoint45->setCenter(new float[3]{0,-0.3,0});
HAnimSegment* HAnimSegment46 = new HAnimSegment();
HAnimSegment46->setName("l_navicular");
HAnimSegment46->setDEF("hanim_l_navicular");
Transform* Transform47 = new Transform();
Transform47->setTranslation(new float[3]{0,-0.3,0});
Shape* Shape48 = new Shape();
Shape48->setUSE("HAnimJointShape");
Transform47->addChild(Shape48);

HAnimSegment46->addChild(Transform47);

Shape* Shape49 = new Shape();
Appearance* Appearance50 = new Appearance();
Material* Material51 = new Material();
Material51->setEmissiveColor(new float[3]{1,1,1});
Appearance50->setMaterial(Material51);

Shape49->setAppearance(Appearance50);

IndexedLineSet* IndexedLineSet52 = new IndexedLineSet();
IndexedLineSet52->setDEF("TCNtoCN1");
IndexedLineSet52->setCoordIndex(new int[2]{0,1});
Coordinate* Coordinate53 = new Coordinate();
Coordinate53->setPoint(new float[6]{0,-0.3,0,-0.1,-0.45,0});
IndexedLineSet52->setCoord(Coordinate53);

Shape49->setGeometry(IndexedLineSet52);

HAnimSegment46->addChild(Shape49);

Shape* Shape54 = new Shape();
Appearance* Appearance55 = new Appearance();
Material* Material56 = new Material();
Material56->setEmissiveColor(new float[3]{1,1,1});
Appearance55->setMaterial(Material56);

Shape54->setAppearance(Appearance55);

IndexedLineSet* IndexedLineSet57 = new IndexedLineSet();
IndexedLineSet57->setDEF("TCNtoCN2");
IndexedLineSet57->setCoordIndex(new int[2]{0,1});
Coordinate* Coordinate58 = new Coordinate();
Coordinate58->setPoint(new float[6]{0,-0.3,0,0,-0.45,0});
IndexedLineSet57->setCoord(Coordinate58);

Shape54->setGeometry(IndexedLineSet57);

HAnimSegment46->addChild(Shape54);

Shape* Shape59 = new Shape();
Appearance* Appearance60 = new Appearance();
Material* Material61 = new Material();
Material61->setEmissiveColor(new float[3]{1,1,1});
Appearance60->setMaterial(Material61);

Shape59->setAppearance(Appearance60);

IndexedLineSet* IndexedLineSet62 = new IndexedLineSet();
IndexedLineSet62->setDEF("TCNtoCN3");
IndexedLineSet62->setCoordIndex(new int[2]{0,1});
Coordinate* Coordinate63 = new Coordinate();
Coordinate63->setPoint(new float[6]{0,-0.3,0,0.1,-0.4,0});
IndexedLineSet62->setCoord(Coordinate63);

Shape59->setGeometry(IndexedLineSet62);

HAnimSegment46->addChild(Shape59);

HAnimJoint45->addChild(HAnimSegment46);

//CN1
HAnimJoint* HAnimJoint64 = new HAnimJoint();
HAnimJoint64->setName("l_cuneonavicular_1");
HAnimJoint64->setDEF("hanim_l_cuneonavicular_1");
HAnimJoint64->setCenter(new float[3]{-0.1,-0.45,0});
HAnimSegment* HAnimSegment65 = new HAnimSegment();
HAnimSegment65->setName("l_cuneiform_1");
HAnimSegment65->setDEF("hanim_l_cuneiform_1");
Transform* Transform66 = new Transform();
Transform66->setTranslation(new float[3]{-0.1,-0.45,0});
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
IndexedLineSet71->setDEF("CN1toTMT1");
IndexedLineSet71->setCoordIndex(new int[2]{0,1});
Coordinate* Coordinate72 = new Coordinate();
Coordinate72->setPoint(new float[6]{-0.1,-0.45,0,-0.1,-0.6,0});
IndexedLineSet71->setCoord(Coordinate72);

Shape68->setGeometry(IndexedLineSet71);

HAnimSegment65->addChild(Shape68);

HAnimJoint64->addChild(HAnimSegment65);

HAnimJoint* HAnimJoint73 = new HAnimJoint();
HAnimJoint73->setName("l_tarsometatarsal_1");
HAnimJoint73->setDEF("hanim_l_tarsometatarsal_1");
HAnimJoint73->setCenter(new float[3]{-0.1,-0.6,0});
HAnimSegment* HAnimSegment74 = new HAnimSegment();
HAnimSegment74->setName("l_metatarsal_1");
HAnimSegment74->setDEF("hanim_l_metatarsal_1");
Transform* Transform75 = new Transform();
Transform75->setTranslation(new float[3]{-0.1,-0.6,0});
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
IndexedLineSet80->setDEF("TMT1toMTP1");
IndexedLineSet80->setCoordIndex(new int[2]{0,1});
Coordinate* Coordinate81 = new Coordinate();
Coordinate81->setPoint(new float[6]{-0.1,-0.6,0,-0.1,-0.9,0});
IndexedLineSet80->setCoord(Coordinate81);

Shape77->setGeometry(IndexedLineSet80);

HAnimSegment74->addChild(Shape77);

HAnimJoint73->addChild(HAnimSegment74);

HAnimJoint* HAnimJoint82 = new HAnimJoint();
HAnimJoint82->setName("l_metatarsophalangeal_1");
HAnimJoint82->setDEF("hanim_l_metatarsophalangeal_1");
HAnimJoint82->setCenter(new float[3]{-0.1,-0.9,0});
HAnimSegment* HAnimSegment83 = new HAnimSegment();
HAnimSegment83->setName("l_tarsal_proximal_phalanx_1");
HAnimSegment83->setDEF("hanim_l_tarsal_proximal_phalanx_1");
Transform* Transform84 = new Transform();
Transform84->setTranslation(new float[3]{-0.1,-0.9,0});
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
IndexedLineSet89->setDEF("MTP1toIP1");
IndexedLineSet89->setCoordIndex(new int[2]{0,1});
Coordinate* Coordinate90 = new Coordinate();
Coordinate90->setPoint(new float[6]{-0.1,-0.9,0,-0.1,-1.05,0});
IndexedLineSet89->setCoord(Coordinate90);

Shape86->setGeometry(IndexedLineSet89);

HAnimSegment83->addChild(Shape86);

HAnimJoint82->addChild(HAnimSegment83);

HAnimJoint* HAnimJoint91 = new HAnimJoint();
HAnimJoint91->setName("l_tarsal_interphalangeal_1");
HAnimJoint91->setDEF("hanim_l_tarsal_interphalangeal_1");
HAnimJoint91->setCenter(new float[3]{-0.1,-1.05,0});
HAnimSegment* HAnimSegment92 = new HAnimSegment();
HAnimSegment92->setName("l_tarsal_distal_phalanx_1");
HAnimSegment92->setDEF("hanim_l_tarsal_distal_phalanx_1");
Transform* Transform93 = new Transform();
Transform93->setTranslation(new float[3]{-0.1,-1.05,0});
Shape* Shape94 = new Shape();
Shape94->setUSE("HAnimJointShape");
Transform93->addChild(Shape94);

HAnimSegment92->addChild(Transform93);

Shape* Shape95 = new Shape();
Appearance* Appearance96 = new Appearance();
Material* Material97 = new Material();
Material97->setEmissiveColor(new float[3]{1,1,1});
Appearance96->setMaterial(Material97);

Shape95->setAppearance(Appearance96);

IndexedLineSet* IndexedLineSet98 = new IndexedLineSet();
IndexedLineSet98->setDEF("tiptoe_l_tarsal_distal_interphalangeal_1");
IndexedLineSet98->setCoordIndex(new int[2]{0,1});
Coordinate* Coordinate99 = new Coordinate();
Coordinate99->setPoint(new float[6]{-0.1,-1.05,0,-0.1,-1.1,0});
IndexedLineSet98->setCoord(Coordinate99);

Shape95->setGeometry(IndexedLineSet98);

HAnimSegment92->addChild(Shape95);

HAnimJoint91->addChild(HAnimSegment92);

HAnimJoint82->addChild(HAnimJoint91);

HAnimJoint73->addChild(HAnimJoint82);

HAnimJoint64->addChild(HAnimJoint73);

HAnimJoint45->addChild(HAnimJoint64);

//CN2
HAnimJoint* HAnimJoint100 = new HAnimJoint();
HAnimJoint100->setName("l_cuneonavicular_2");
HAnimJoint100->setDEF("hanim_l_cuneonavicular_2");
HAnimJoint100->setCenter(new float[3]{0,-0.45,0});
HAnimSegment* HAnimSegment101 = new HAnimSegment();
HAnimSegment101->setName("l_cuneiform_2");
HAnimSegment101->setDEF("hanim_l_cuneiform_2");
Transform* Transform102 = new Transform();
Transform102->setTranslation(new float[3]{0,-0.45,0});
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
IndexedLineSet107->setDEF("CN2toTMT2");
IndexedLineSet107->setCoordIndex(new int[2]{0,1});
Coordinate* Coordinate108 = new Coordinate();
Coordinate108->setPoint(new float[6]{0,-0.45,0,0.05,-0.6,0});
IndexedLineSet107->setCoord(Coordinate108);

Shape104->setGeometry(IndexedLineSet107);

HAnimSegment101->addChild(Shape104);

HAnimJoint100->addChild(HAnimSegment101);

HAnimJoint* HAnimJoint109 = new HAnimJoint();
HAnimJoint109->setName("l_tarsometatarsal_2");
HAnimJoint109->setDEF("hanim_l_tarsometatarsal_2");
HAnimJoint109->setCenter(new float[3]{0.05,-0.6,0});
HAnimSegment* HAnimSegment110 = new HAnimSegment();
HAnimSegment110->setName("l_metatarsal_2");
HAnimSegment110->setDEF("hanim_l_metatarsal_2");
Transform* Transform111 = new Transform();
Transform111->setTranslation(new float[3]{0.05,-0.6,0});
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
IndexedLineSet116->setDEF("TMT2toMTP2");
IndexedLineSet116->setCoordIndex(new int[2]{0,1});
Coordinate* Coordinate117 = new Coordinate();
Coordinate117->setPoint(new float[6]{0.05,-0.6,0,0.05,-0.9,0});
IndexedLineSet116->setCoord(Coordinate117);

Shape113->setGeometry(IndexedLineSet116);

HAnimSegment110->addChild(Shape113);

HAnimJoint109->addChild(HAnimSegment110);

HAnimJoint* HAnimJoint118 = new HAnimJoint();
HAnimJoint118->setName("l_metatarsophalangeal_2");
HAnimJoint118->setDEF("hanim_l_metatarsophalangeal_2");
HAnimJoint118->setCenter(new float[3]{0.05,-0.9,0});
HAnimSegment* HAnimSegment119 = new HAnimSegment();
HAnimSegment119->setName("l_tarsal_proximal_phalanx_2");
HAnimSegment119->setDEF("hanim_l_tarsal_proximal_phalanx_2");
Transform* Transform120 = new Transform();
Transform120->setTranslation(new float[3]{0.05,-0.9,0});
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
IndexedLineSet125->setDEF("MTP2toPIP2");
IndexedLineSet125->setCoordIndex(new int[2]{0,1});
Coordinate* Coordinate126 = new Coordinate();
Coordinate126->setPoint(new float[6]{0.05,-0.9,0,0.05,-1.05,0});
IndexedLineSet125->setCoord(Coordinate126);

Shape122->setGeometry(IndexedLineSet125);

HAnimSegment119->addChild(Shape122);

HAnimJoint118->addChild(HAnimSegment119);

HAnimJoint* HAnimJoint127 = new HAnimJoint();
HAnimJoint127->setName("l_tarsal_proximal_interphalangeal_2");
HAnimJoint127->setDEF("hanim_l_tarsal_proximal_interphalangeal_2");
HAnimJoint127->setCenter(new float[3]{0.05,-1.05,0});
HAnimSegment* HAnimSegment128 = new HAnimSegment();
HAnimSegment128->setName("l_tarsal_middle_phalanx_2");
HAnimSegment128->setDEF("hanim_l_tarsal_middle_phalanx_2");
Transform* Transform129 = new Transform();
Transform129->setTranslation(new float[3]{0.05,-1.05,0});
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
IndexedLineSet134->setDEF("PIP2toDIP2");
IndexedLineSet134->setCoordIndex(new int[2]{0,1});
Coordinate* Coordinate135 = new Coordinate();
Coordinate135->setPoint(new float[6]{0.05,-1.05,0,0.05,-1.12,0});
IndexedLineSet134->setCoord(Coordinate135);

Shape131->setGeometry(IndexedLineSet134);

HAnimSegment128->addChild(Shape131);

HAnimJoint127->addChild(HAnimSegment128);

HAnimJoint* HAnimJoint136 = new HAnimJoint();
HAnimJoint136->setName("l_tarsal_distal_interphalangeal_2");
HAnimJoint136->setDEF("hanim_l_tarsal_distal_interphalangeal_2");
HAnimJoint136->setCenter(new float[3]{0.05,-1.12,0});
HAnimSegment* HAnimSegment137 = new HAnimSegment();
HAnimSegment137->setName("l_tarsal_distal_phalanx_2");
HAnimSegment137->setDEF("hanim_l_tarsal_distal_phalanx_2");
Transform* Transform138 = new Transform();
Transform138->setTranslation(new float[3]{0.05,-1.12,0});
Shape* Shape139 = new Shape();
Shape139->setUSE("HAnimJointShape");
Transform138->addChild(Shape139);

HAnimSegment137->addChild(Transform138);

Shape* Shape140 = new Shape();
Appearance* Appearance141 = new Appearance();
Material* Material142 = new Material();
Material142->setEmissiveColor(new float[3]{1,1,1});
Appearance141->setMaterial(Material142);

Shape140->setAppearance(Appearance141);

IndexedLineSet* IndexedLineSet143 = new IndexedLineSet();
IndexedLineSet143->setDEF("tiptoe_l_tarsal_distal_phalanx_2");
IndexedLineSet143->setCoordIndex(new int[2]{0,1});
Coordinate* Coordinate144 = new Coordinate();
Coordinate144->setPoint(new float[6]{0.05,-1.12,0,0.05,-1.16,0});
IndexedLineSet143->setCoord(Coordinate144);

Shape140->setGeometry(IndexedLineSet143);

HAnimSegment137->addChild(Shape140);

HAnimJoint136->addChild(HAnimSegment137);

HAnimJoint127->addChild(HAnimJoint136);

HAnimJoint118->addChild(HAnimJoint127);

HAnimJoint109->addChild(HAnimJoint118);

HAnimJoint100->addChild(HAnimJoint109);

HAnimJoint45->addChild(HAnimJoint100);

//CN3
HAnimJoint* HAnimJoint145 = new HAnimJoint();
HAnimJoint145->setName("l_cuneonavicular_3");
HAnimJoint145->setDEF("hanim_l_cuneonavicular_3");
HAnimJoint145->setCenter(new float[3]{0.1,-0.4,0});
HAnimSegment* HAnimSegment146 = new HAnimSegment();
HAnimSegment146->setName("l_cuneiform_3");
HAnimSegment146->setDEF("hanim_l_cuneiform_3");
Transform* Transform147 = new Transform();
Transform147->setTranslation(new float[3]{0.1,-0.4,0});
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
IndexedLineSet152->setDEF("CN3toTMT3");
IndexedLineSet152->setCoordIndex(new int[2]{0,1});
Coordinate* Coordinate153 = new Coordinate();
Coordinate153->setPoint(new float[6]{0.1,-0.4,0,0.15,-0.6,0});
IndexedLineSet152->setCoord(Coordinate153);

Shape149->setGeometry(IndexedLineSet152);

HAnimSegment146->addChild(Shape149);

HAnimJoint145->addChild(HAnimSegment146);

HAnimJoint* HAnimJoint154 = new HAnimJoint();
HAnimJoint154->setName("l_tarsometatarsal_3");
HAnimJoint154->setDEF("hanim_l_tarsometatarsal_3");
HAnimJoint154->setCenter(new float[3]{0.15,-0.6,0});
HAnimSegment* HAnimSegment155 = new HAnimSegment();
HAnimSegment155->setName("l_metatarsal_3");
HAnimSegment155->setDEF("hanim_l_metatarsal_3");
Transform* Transform156 = new Transform();
Transform156->setTranslation(new float[3]{0.15,-0.6,0});
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
IndexedLineSet161->setDEF("TMT3toMTP3");
IndexedLineSet161->setCoordIndex(new int[2]{0,1});
Coordinate* Coordinate162 = new Coordinate();
Coordinate162->setPoint(new float[6]{0.15,-0.6,0,0.15,-0.9,0});
IndexedLineSet161->setCoord(Coordinate162);

Shape158->setGeometry(IndexedLineSet161);

HAnimSegment155->addChild(Shape158);

HAnimJoint154->addChild(HAnimSegment155);

HAnimJoint* HAnimJoint163 = new HAnimJoint();
HAnimJoint163->setName("l_metatarsophalangeal_3");
HAnimJoint163->setDEF("hanim_l_metatarsophalangeal_3");
HAnimJoint163->setCenter(new float[3]{0.15,-0.9,0});
HAnimSegment* HAnimSegment164 = new HAnimSegment();
HAnimSegment164->setName("l_tarsal_proximal_phalanx_3");
HAnimSegment164->setDEF("hanim_l_tarsal_proximal_phalanx_3");
Transform* Transform165 = new Transform();
Transform165->setTranslation(new float[3]{0.15,-0.9,0});
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
IndexedLineSet170->setDEF("MTP3toPIP3");
IndexedLineSet170->setCoordIndex(new int[2]{0,1});
Coordinate* Coordinate171 = new Coordinate();
Coordinate171->setPoint(new float[6]{0.15,-0.9,0,0.15,-1.05,0});
IndexedLineSet170->setCoord(Coordinate171);

Shape167->setGeometry(IndexedLineSet170);

HAnimSegment164->addChild(Shape167);

HAnimJoint163->addChild(HAnimSegment164);

HAnimJoint* HAnimJoint172 = new HAnimJoint();
HAnimJoint172->setName("l_tarsal_proximal_interphalangeal_3");
HAnimJoint172->setDEF("hanim_l_tarsal_proximal_interphalangeal_3");
HAnimJoint172->setCenter(new float[3]{0.15,-1.05,0});
HAnimSegment* HAnimSegment173 = new HAnimSegment();
HAnimSegment173->setName("l_tarsal_middle_phalanx_3");
HAnimSegment173->setDEF("hanim_l_tarsal_middle_phalanx_3");
Transform* Transform174 = new Transform();
Transform174->setTranslation(new float[3]{0.15,-1.05,0});
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
IndexedLineSet179->setDEF("PIP3toDIP3");
IndexedLineSet179->setCoordIndex(new int[2]{0,1});
Coordinate* Coordinate180 = new Coordinate();
Coordinate180->setPoint(new float[6]{0.15,-1.05,0,0.15,-1.13,0});
IndexedLineSet179->setCoord(Coordinate180);

Shape176->setGeometry(IndexedLineSet179);

HAnimSegment173->addChild(Shape176);

HAnimJoint172->addChild(HAnimSegment173);

HAnimJoint* HAnimJoint181 = new HAnimJoint();
HAnimJoint181->setName("l_tarsal_distal_interphalangeal_3");
HAnimJoint181->setDEF("hanim_l_tarsal_distal_interphalangeal_3");
HAnimJoint181->setCenter(new float[3]{0.15,-1.13,0});
HAnimSegment* HAnimSegment182 = new HAnimSegment();
HAnimSegment182->setName("l_tarsal_distal_phalanx_3");
HAnimSegment182->setDEF("hanim_l_tarsal_distal_phalanx_3");
Transform* Transform183 = new Transform();
Transform183->setTranslation(new float[3]{0.15,-1.13,0});
Shape* Shape184 = new Shape();
Shape184->setUSE("HAnimJointShape");
Transform183->addChild(Shape184);

HAnimSegment182->addChild(Transform183);

Shape* Shape185 = new Shape();
Appearance* Appearance186 = new Appearance();
Material* Material187 = new Material();
Material187->setEmissiveColor(new float[3]{1,1,1});
Appearance186->setMaterial(Material187);

Shape185->setAppearance(Appearance186);

IndexedLineSet* IndexedLineSet188 = new IndexedLineSet();
IndexedLineSet188->setDEF("tiptoe_l_tarsal_distal_interphalangeal_3");
IndexedLineSet188->setCoordIndex(new int[2]{0,1});
Coordinate* Coordinate189 = new Coordinate();
Coordinate189->setPoint(new float[6]{0.15,-1.13,0,0.15,-1.16,0});
IndexedLineSet188->setCoord(Coordinate189);

Shape185->setGeometry(IndexedLineSet188);

HAnimSegment182->addChild(Shape185);

HAnimJoint181->addChild(HAnimSegment182);

HAnimJoint172->addChild(HAnimJoint181);

HAnimJoint163->addChild(HAnimJoint172);

HAnimJoint154->addChild(HAnimJoint163);

HAnimJoint145->addChild(HAnimJoint154);

HAnimJoint45->addChild(HAnimJoint145);

HAnimJoint28->addChild(HAnimJoint45);

//CC
HAnimJoint* HAnimJoint190 = new HAnimJoint();
HAnimJoint190->setName("l_calcaneocuboid");
HAnimJoint190->setDEF("hanim_l_calcaneocuboid");
HAnimJoint190->setCenter(new float[3]{0.2,0.3,0});
HAnimSegment* HAnimSegment191 = new HAnimSegment();
HAnimSegment191->setName("l_calcaneus");
HAnimSegment191->setDEF("hanim_l_calcaneus");
Transform* Transform192 = new Transform();
Transform192->setTranslation(new float[3]{0.2,0.3,0});
Shape* Shape193 = new Shape();
Shape193->setUSE("HAnimJointShape");
Transform192->addChild(Shape193);

HAnimSegment191->addChild(Transform192);

Shape* Shape194 = new Shape();
Appearance* Appearance195 = new Appearance();
Material* Material196 = new Material();
Material196->setEmissiveColor(new float[3]{1,1,1});
Appearance195->setMaterial(Material196);

Shape194->setAppearance(Appearance195);

IndexedLineSet* IndexedLineSet197 = new IndexedLineSet();
IndexedLineSet197->setDEF("CCtoTT");
IndexedLineSet197->setCoordIndex(new int[2]{0,1});
Coordinate* Coordinate198 = new Coordinate();
Coordinate198->setPoint(new float[6]{0.2,0.3,0,0.21,-0.3,0});
IndexedLineSet197->setCoord(Coordinate198);

Shape194->setGeometry(IndexedLineSet197);

HAnimSegment191->addChild(Shape194);

HAnimJoint190->addChild(HAnimSegment191);

//TT
HAnimJoint* HAnimJoint199 = new HAnimJoint();
HAnimJoint199->setName("l_transversetarsal");
HAnimJoint199->setDEF("hanim_l_transversetarsal");
HAnimJoint199->setCenter(new float[3]{0.21,-0.3,0});
HAnimSegment* HAnimSegment200 = new HAnimSegment();
HAnimSegment200->setName("l_cuboid");
HAnimSegment200->setDEF("hanim_l_cuboid");
Transform* Transform201 = new Transform();
Transform201->setTranslation(new float[3]{0.21,-0.3,0});
Shape* Shape202 = new Shape();
Shape202->setUSE("HAnimJointShape");
Transform201->addChild(Shape202);

HAnimSegment200->addChild(Transform201);

Shape* Shape203 = new Shape();
Appearance* Appearance204 = new Appearance();
Material* Material205 = new Material();
Material205->setEmissiveColor(new float[3]{1,1,1});
Appearance204->setMaterial(Material205);

Shape203->setAppearance(Appearance204);

IndexedLineSet* IndexedLineSet206 = new IndexedLineSet();
IndexedLineSet206->setDEF("TTtoTMT4");
IndexedLineSet206->setCoordIndex(new int[2]{0,1});
Coordinate* Coordinate207 = new Coordinate();
Coordinate207->setPoint(new float[6]{0.21,-0.3,0,0.25,-0.58,0});
IndexedLineSet206->setCoord(Coordinate207);

Shape203->setGeometry(IndexedLineSet206);

HAnimSegment200->addChild(Shape203);

Shape* Shape208 = new Shape();
Appearance* Appearance209 = new Appearance();
Material* Material210 = new Material();
Material210->setEmissiveColor(new float[3]{1,1,1});
Appearance209->setMaterial(Material210);

Shape208->setAppearance(Appearance209);

IndexedLineSet* IndexedLineSet211 = new IndexedLineSet();
IndexedLineSet211->setDEF("TTtoTMT5");
IndexedLineSet211->setCoordIndex(new int[2]{0,1});
Coordinate* Coordinate212 = new Coordinate();
Coordinate212->setPoint(new float[6]{0.21,-0.3,0,0.33,-0.52,0});
IndexedLineSet211->setCoord(Coordinate212);

Shape208->setGeometry(IndexedLineSet211);

HAnimSegment200->addChild(Shape208);

HAnimJoint199->addChild(HAnimSegment200);

//TMT4
HAnimJoint* HAnimJoint213 = new HAnimJoint();
HAnimJoint213->setName("l_tarsometatarsal_4");
HAnimJoint213->setDEF("hanim_l_tarsometatarsal_4");
HAnimJoint213->setCenter(new float[3]{0.25,-0.58,0});
HAnimSegment* HAnimSegment214 = new HAnimSegment();
HAnimSegment214->setName("l_metatarsal_4");
HAnimSegment214->setDEF("hanim_l_metatarsal_4");
Transform* Transform215 = new Transform();
Transform215->setTranslation(new float[3]{0.25,-0.58,0});
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
IndexedLineSet220->setDEF("TMT4toMTP4");
IndexedLineSet220->setCoordIndex(new int[2]{0,1});
Coordinate* Coordinate221 = new Coordinate();
Coordinate221->setPoint(new float[6]{0.25,-0.58,0,0.25,-0.87,0});
IndexedLineSet220->setCoord(Coordinate221);

Shape217->setGeometry(IndexedLineSet220);

HAnimSegment214->addChild(Shape217);

HAnimJoint213->addChild(HAnimSegment214);

HAnimJoint* HAnimJoint222 = new HAnimJoint();
HAnimJoint222->setName("l_metatarsophalangeal_4");
HAnimJoint222->setDEF("hanim_l_metatarsophalangeal_4");
HAnimJoint222->setCenter(new float[3]{0.25,-0.87,0});
HAnimSegment* HAnimSegment223 = new HAnimSegment();
HAnimSegment223->setName("l_tarsal_proximal_phalanx_4");
HAnimSegment223->setDEF("hanim_l_tarsal_proximal_phalanx_4");
Transform* Transform224 = new Transform();
Transform224->setTranslation(new float[3]{0.25,-0.87,0});
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
IndexedLineSet229->setDEF("MTP4toPIP4");
IndexedLineSet229->setCoordIndex(new int[2]{0,1});
Coordinate* Coordinate230 = new Coordinate();
Coordinate230->setPoint(new float[6]{0.25,-0.87,0,0.25,-1,0});
IndexedLineSet229->setCoord(Coordinate230);

Shape226->setGeometry(IndexedLineSet229);

HAnimSegment223->addChild(Shape226);

HAnimJoint222->addChild(HAnimSegment223);

HAnimJoint* HAnimJoint231 = new HAnimJoint();
HAnimJoint231->setName("l_tarsal_proximal_interphalangeal_4");
HAnimJoint231->setDEF("hanim_l_tarsal_proximal_interphalangeal_4");
HAnimJoint231->setCenter(new float[3]{0.25,-1,0});
HAnimSegment* HAnimSegment232 = new HAnimSegment();
HAnimSegment232->setName("l_tarsal_middle_phalanx_4");
HAnimSegment232->setDEF("hanim_l_tarsal_middle_phalanx_4");
Transform* Transform233 = new Transform();
Transform233->setTranslation(new float[3]{0.25,-1,0});
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
IndexedLineSet238->setDEF("PIP4toDIP4");
IndexedLineSet238->setCoordIndex(new int[2]{0,1});
Coordinate* Coordinate239 = new Coordinate();
Coordinate239->setPoint(new float[6]{0.25,-1,0,0.25,-1.1,0});
IndexedLineSet238->setCoord(Coordinate239);

Shape235->setGeometry(IndexedLineSet238);

HAnimSegment232->addChild(Shape235);

HAnimJoint231->addChild(HAnimSegment232);

HAnimJoint* HAnimJoint240 = new HAnimJoint();
HAnimJoint240->setName("l_tarsal_distal_interphalangeal_4");
HAnimJoint240->setDEF("hanim_l_tarsal_distal_interphalangeal_4");
HAnimJoint240->setCenter(new float[3]{0.25,-1.1,0});
HAnimSegment* HAnimSegment241 = new HAnimSegment();
HAnimSegment241->setName("l_tarsal_distal_phalanx_4");
HAnimSegment241->setDEF("hanim_l_tarsal_distal_phalanx_4");
Transform* Transform242 = new Transform();
Transform242->setTranslation(new float[3]{0.25,-1.1,0});
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
IndexedLineSet247->setDEF("tiptoe_l_tarsal_distal_interphalangeal_4");
IndexedLineSet247->setCoordIndex(new int[2]{0,1});
Coordinate* Coordinate248 = new Coordinate();
Coordinate248->setPoint(new float[6]{0.25,-1.1,0,0.25,-1.15,0});
IndexedLineSet247->setCoord(Coordinate248);

Shape244->setGeometry(IndexedLineSet247);

HAnimSegment241->addChild(Shape244);

HAnimJoint240->addChild(HAnimSegment241);

HAnimJoint231->addChild(HAnimJoint240);

HAnimJoint222->addChild(HAnimJoint231);

HAnimJoint213->addChild(HAnimJoint222);

HAnimJoint199->addChild(HAnimJoint213);

//TMT5
HAnimJoint* HAnimJoint249 = new HAnimJoint();
HAnimJoint249->setName("l_tarsometatarsal_5");
HAnimJoint249->setDEF("hanim_l_tarsometatarsal_5");
HAnimJoint249->setCenter(new float[3]{0.33,-0.52,0});
HAnimSegment* HAnimSegment250 = new HAnimSegment();
HAnimSegment250->setName("l_metatarsal_5");
HAnimSegment250->setDEF("hanim_l_metatarsal_5");
Transform* Transform251 = new Transform();
Transform251->setTranslation(new float[3]{0.33,-0.52,0});
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
IndexedLineSet256->setDEF("TMT5toMTP5");
IndexedLineSet256->setCoordIndex(new int[2]{0,1});
Coordinate* Coordinate257 = new Coordinate();
Coordinate257->setPoint(new float[6]{0.33,-0.52,0,0.34,-0.8,0});
IndexedLineSet256->setCoord(Coordinate257);

Shape253->setGeometry(IndexedLineSet256);

HAnimSegment250->addChild(Shape253);

HAnimJoint249->addChild(HAnimSegment250);

HAnimJoint* HAnimJoint258 = new HAnimJoint();
HAnimJoint258->setName("l_metatarsophalangeal_5");
HAnimJoint258->setDEF("hanim_l_metatarsophalangeal_5");
HAnimJoint258->setCenter(new float[3]{0.34,-0.8,0});
HAnimSegment* HAnimSegment259 = new HAnimSegment();
HAnimSegment259->setName("l_tarsal_proximal_phalanx_5");
HAnimSegment259->setDEF("hanim_l_tarsal_proximal_phalanx_5");
Transform* Transform260 = new Transform();
Transform260->setTranslation(new float[3]{0.34,-0.8,0});
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
IndexedLineSet265->setDEF("MTP5toPIP5");
IndexedLineSet265->setCoordIndex(new int[2]{0,1});
Coordinate* Coordinate266 = new Coordinate();
Coordinate266->setPoint(new float[6]{0.34,-0.8,0,0.34,-0.95,0});
IndexedLineSet265->setCoord(Coordinate266);

Shape262->setGeometry(IndexedLineSet265);

HAnimSegment259->addChild(Shape262);

HAnimJoint258->addChild(HAnimSegment259);

HAnimJoint* HAnimJoint267 = new HAnimJoint();
HAnimJoint267->setName("l_tarsal_proximal_interphalangeal_5");
HAnimJoint267->setDEF("hanim_l_tarsal_proximal_interphalangeal_5");
HAnimJoint267->setCenter(new float[3]{0.34,-0.95,0});
HAnimSegment* HAnimSegment268 = new HAnimSegment();
HAnimSegment268->setName("l_tarsal_middle_phalanx_5");
HAnimSegment268->setDEF("hanim_l_tarsal_middle_phalanx_5");
Transform* Transform269 = new Transform();
Transform269->setTranslation(new float[3]{0.34,-0.95,0});
Shape* Shape270 = new Shape();
Shape270->setUSE("HAnimJointShape");
Transform269->addChild(Shape270);

HAnimSegment268->addChild(Transform269);

Shape* Shape271 = new Shape();
Appearance* Appearance272 = new Appearance();
Material* Material273 = new Material();
Material273->setEmissiveColor(new float[3]{1,1,1});
Appearance272->setMaterial(Material273);

Shape271->setAppearance(Appearance272);

IndexedLineSet* IndexedLineSet274 = new IndexedLineSet();
IndexedLineSet274->setDEF("PIP5toDIP5");
IndexedLineSet274->setCoordIndex(new int[2]{0,1});
Coordinate* Coordinate275 = new Coordinate();
Coordinate275->setPoint(new float[6]{0.34,-0.95,0,0.34,-1.05,0});
IndexedLineSet274->setCoord(Coordinate275);

Shape271->setGeometry(IndexedLineSet274);

HAnimSegment268->addChild(Shape271);

HAnimJoint267->addChild(HAnimSegment268);

HAnimJoint* HAnimJoint276 = new HAnimJoint();
HAnimJoint276->setName("l_tarsal_distal_interphalangeal_5");
HAnimJoint276->setDEF("hanim_l_tarsal_distal_interphalangeal_5");
HAnimJoint276->setCenter(new float[3]{0.34,-1.05,0});
HAnimSegment* HAnimSegment277 = new HAnimSegment();
HAnimSegment277->setName("l_tarsal_distal_phalanx_5");
HAnimSegment277->setDEF("hanim_l_tarsal_distal_phalanx_5");
Transform* Transform278 = new Transform();
Transform278->setTranslation(new float[3]{0.34,-1.05,0});
Shape* Shape279 = new Shape();
Shape279->setUSE("HAnimJointShape");
Transform278->addChild(Shape279);

HAnimSegment277->addChild(Transform278);

Shape* Shape280 = new Shape();
Appearance* Appearance281 = new Appearance();
Material* Material282 = new Material();
Material282->setEmissiveColor(new float[3]{1,1,1});
Appearance281->setMaterial(Material282);

Shape280->setAppearance(Appearance281);

IndexedLineSet* IndexedLineSet283 = new IndexedLineSet();
IndexedLineSet283->setDEF("tiptoe_l_tarsal_distal_interphalangeal_5");
IndexedLineSet283->setCoordIndex(new int[2]{0,1});
Coordinate* Coordinate284 = new Coordinate();
Coordinate284->setPoint(new float[6]{0.34,-1.05,0,0.34,-1.08,0});
IndexedLineSet283->setCoord(Coordinate284);

Shape280->setGeometry(IndexedLineSet283);

HAnimSegment277->addChild(Shape280);

HAnimJoint276->addChild(HAnimSegment277);

HAnimJoint267->addChild(HAnimJoint276);

HAnimJoint258->addChild(HAnimJoint267);

HAnimJoint249->addChild(HAnimJoint258);

HAnimJoint199->addChild(HAnimJoint249);

HAnimJoint190->addChild(HAnimJoint199);

HAnimJoint28->addChild(HAnimJoint190);

HAnimJoint27->addChild(HAnimJoint28);

HAnimHumanoid24->setSkeleton(HAnimJoint27);

HAnimJoint* HAnimJoint285 = new HAnimJoint();
HAnimJoint285->setUSE("hanim_humanoid_root");
HAnimHumanoid24->addJoints(HAnimJoint285);

HAnimJoint* HAnimJoint286 = new HAnimJoint();
HAnimJoint286->setUSE("hanim_l_calcaneocuboid");
HAnimHumanoid24->addJoints(HAnimJoint286);

HAnimJoint* HAnimJoint287 = new HAnimJoint();
HAnimJoint287->setUSE("hanim_l_cuneonavicular_1");
HAnimHumanoid24->addJoints(HAnimJoint287);

HAnimJoint* HAnimJoint288 = new HAnimJoint();
HAnimJoint288->setUSE("hanim_l_cuneonavicular_2");
HAnimHumanoid24->addJoints(HAnimJoint288);

HAnimJoint* HAnimJoint289 = new HAnimJoint();
HAnimJoint289->setUSE("hanim_l_cuneonavicular_3");
HAnimHumanoid24->addJoints(HAnimJoint289);

HAnimJoint* HAnimJoint290 = new HAnimJoint();
HAnimJoint290->setUSE("hanim_l_metatarsophalangeal_1");
HAnimHumanoid24->addJoints(HAnimJoint290);

HAnimJoint* HAnimJoint291 = new HAnimJoint();
HAnimJoint291->setUSE("hanim_l_metatarsophalangeal_2");
HAnimHumanoid24->addJoints(HAnimJoint291);

HAnimJoint* HAnimJoint292 = new HAnimJoint();
HAnimJoint292->setUSE("hanim_l_metatarsophalangeal_3");
HAnimHumanoid24->addJoints(HAnimJoint292);

HAnimJoint* HAnimJoint293 = new HAnimJoint();
HAnimJoint293->setUSE("hanim_l_metatarsophalangeal_4");
HAnimHumanoid24->addJoints(HAnimJoint293);

HAnimJoint* HAnimJoint294 = new HAnimJoint();
HAnimJoint294->setUSE("hanim_l_metatarsophalangeal_5");
HAnimHumanoid24->addJoints(HAnimJoint294);

HAnimJoint* HAnimJoint295 = new HAnimJoint();
HAnimJoint295->setUSE("hanim_l_talocalcaneonavicular");
HAnimHumanoid24->addJoints(HAnimJoint295);

HAnimJoint* HAnimJoint296 = new HAnimJoint();
HAnimJoint296->setUSE("hanim_l_talocrural");
HAnimHumanoid24->addJoints(HAnimJoint296);

HAnimJoint* HAnimJoint297 = new HAnimJoint();
HAnimJoint297->setUSE("hanim_l_tarsal_distal_interphalangeal_2");
HAnimHumanoid24->addJoints(HAnimJoint297);

HAnimJoint* HAnimJoint298 = new HAnimJoint();
HAnimJoint298->setUSE("hanim_l_tarsal_distal_interphalangeal_3");
HAnimHumanoid24->addJoints(HAnimJoint298);

HAnimJoint* HAnimJoint299 = new HAnimJoint();
HAnimJoint299->setUSE("hanim_l_tarsal_distal_interphalangeal_4");
HAnimHumanoid24->addJoints(HAnimJoint299);

HAnimJoint* HAnimJoint300 = new HAnimJoint();
HAnimJoint300->setUSE("hanim_l_tarsal_distal_interphalangeal_5");
HAnimHumanoid24->addJoints(HAnimJoint300);

HAnimJoint* HAnimJoint301 = new HAnimJoint();
HAnimJoint301->setUSE("hanim_l_tarsal_interphalangeal_1");
HAnimHumanoid24->addJoints(HAnimJoint301);

HAnimJoint* HAnimJoint302 = new HAnimJoint();
HAnimJoint302->setUSE("hanim_l_tarsal_proximal_interphalangeal_2");
HAnimHumanoid24->addJoints(HAnimJoint302);

HAnimJoint* HAnimJoint303 = new HAnimJoint();
HAnimJoint303->setUSE("hanim_l_tarsal_proximal_interphalangeal_3");
HAnimHumanoid24->addJoints(HAnimJoint303);

HAnimJoint* HAnimJoint304 = new HAnimJoint();
HAnimJoint304->setUSE("hanim_l_tarsal_proximal_interphalangeal_4");
HAnimHumanoid24->addJoints(HAnimJoint304);

HAnimJoint* HAnimJoint305 = new HAnimJoint();
HAnimJoint305->setUSE("hanim_l_tarsal_proximal_interphalangeal_5");
HAnimHumanoid24->addJoints(HAnimJoint305);

HAnimJoint* HAnimJoint306 = new HAnimJoint();
HAnimJoint306->setUSE("hanim_l_tarsometatarsal_1");
HAnimHumanoid24->addJoints(HAnimJoint306);

HAnimJoint* HAnimJoint307 = new HAnimJoint();
HAnimJoint307->setUSE("hanim_l_tarsometatarsal_2");
HAnimHumanoid24->addJoints(HAnimJoint307);

HAnimJoint* HAnimJoint308 = new HAnimJoint();
HAnimJoint308->setUSE("hanim_l_tarsometatarsal_3");
HAnimHumanoid24->addJoints(HAnimJoint308);

HAnimJoint* HAnimJoint309 = new HAnimJoint();
HAnimJoint309->setUSE("hanim_l_tarsometatarsal_4");
HAnimHumanoid24->addJoints(HAnimJoint309);

HAnimJoint* HAnimJoint310 = new HAnimJoint();
HAnimJoint310->setUSE("hanim_l_tarsometatarsal_5");
HAnimHumanoid24->addJoints(HAnimJoint310);

HAnimJoint* HAnimJoint311 = new HAnimJoint();
HAnimJoint311->setUSE("hanim_l_transversetarsal");
HAnimHumanoid24->addJoints(HAnimJoint311);

HAnimSegment* HAnimSegment312 = new HAnimSegment();
HAnimSegment312->setUSE("hanim_l_calcaneus");
HAnimHumanoid24->setSegments(HAnimSegment312);

HAnimSegment* HAnimSegment313 = new HAnimSegment();
HAnimSegment313->setUSE("hanim_l_cuboid");
HAnimHumanoid24->setSegments(HAnimSegment313);

HAnimSegment* HAnimSegment314 = new HAnimSegment();
HAnimSegment314->setUSE("hanim_l_cuneiform_1");
HAnimHumanoid24->setSegments(HAnimSegment314);

HAnimSegment* HAnimSegment315 = new HAnimSegment();
HAnimSegment315->setUSE("hanim_l_cuneiform_2");
HAnimHumanoid24->setSegments(HAnimSegment315);

HAnimSegment* HAnimSegment316 = new HAnimSegment();
HAnimSegment316->setUSE("hanim_l_cuneiform_3");
HAnimHumanoid24->setSegments(HAnimSegment316);

HAnimSegment* HAnimSegment317 = new HAnimSegment();
HAnimSegment317->setUSE("hanim_l_metatarsal_1");
HAnimHumanoid24->setSegments(HAnimSegment317);

HAnimSegment* HAnimSegment318 = new HAnimSegment();
HAnimSegment318->setUSE("hanim_l_metatarsal_2");
HAnimHumanoid24->setSegments(HAnimSegment318);

HAnimSegment* HAnimSegment319 = new HAnimSegment();
HAnimSegment319->setUSE("hanim_l_metatarsal_3");
HAnimHumanoid24->setSegments(HAnimSegment319);

HAnimSegment* HAnimSegment320 = new HAnimSegment();
HAnimSegment320->setUSE("hanim_l_metatarsal_4");
HAnimHumanoid24->setSegments(HAnimSegment320);

HAnimSegment* HAnimSegment321 = new HAnimSegment();
HAnimSegment321->setUSE("hanim_l_metatarsal_5");
HAnimHumanoid24->setSegments(HAnimSegment321);

HAnimSegment* HAnimSegment322 = new HAnimSegment();
HAnimSegment322->setUSE("hanim_l_navicular");
HAnimHumanoid24->setSegments(HAnimSegment322);

HAnimSegment* HAnimSegment323 = new HAnimSegment();
HAnimSegment323->setUSE("hanim_l_talus");
HAnimHumanoid24->setSegments(HAnimSegment323);

HAnimSegment* HAnimSegment324 = new HAnimSegment();
HAnimSegment324->setUSE("hanim_l_tarsal_distal_phalanx_1");
HAnimHumanoid24->setSegments(HAnimSegment324);

HAnimSegment* HAnimSegment325 = new HAnimSegment();
HAnimSegment325->setUSE("hanim_l_tarsal_distal_phalanx_2");
HAnimHumanoid24->setSegments(HAnimSegment325);

HAnimSegment* HAnimSegment326 = new HAnimSegment();
HAnimSegment326->setUSE("hanim_l_tarsal_distal_phalanx_3");
HAnimHumanoid24->setSegments(HAnimSegment326);

HAnimSegment* HAnimSegment327 = new HAnimSegment();
HAnimSegment327->setUSE("hanim_l_tarsal_distal_phalanx_4");
HAnimHumanoid24->setSegments(HAnimSegment327);

HAnimSegment* HAnimSegment328 = new HAnimSegment();
HAnimSegment328->setUSE("hanim_l_tarsal_distal_phalanx_5");
HAnimHumanoid24->setSegments(HAnimSegment328);

HAnimSegment* HAnimSegment329 = new HAnimSegment();
HAnimSegment329->setUSE("hanim_l_tarsal_middle_phalanx_2");
HAnimHumanoid24->setSegments(HAnimSegment329);

HAnimSegment* HAnimSegment330 = new HAnimSegment();
HAnimSegment330->setUSE("hanim_l_tarsal_middle_phalanx_3");
HAnimHumanoid24->setSegments(HAnimSegment330);

HAnimSegment* HAnimSegment331 = new HAnimSegment();
HAnimSegment331->setUSE("hanim_l_tarsal_middle_phalanx_4");
HAnimHumanoid24->setSegments(HAnimSegment331);

HAnimSegment* HAnimSegment332 = new HAnimSegment();
HAnimSegment332->setUSE("hanim_l_tarsal_middle_phalanx_5");
HAnimHumanoid24->setSegments(HAnimSegment332);

HAnimSegment* HAnimSegment333 = new HAnimSegment();
HAnimSegment333->setUSE("hanim_l_tarsal_proximal_phalanx_1");
HAnimHumanoid24->setSegments(HAnimSegment333);

HAnimSegment* HAnimSegment334 = new HAnimSegment();
HAnimSegment334->setUSE("hanim_l_tarsal_proximal_phalanx_2");
HAnimHumanoid24->setSegments(HAnimSegment334);

HAnimSegment* HAnimSegment335 = new HAnimSegment();
HAnimSegment335->setUSE("hanim_l_tarsal_proximal_phalanx_3");
HAnimHumanoid24->setSegments(HAnimSegment335);

HAnimSegment* HAnimSegment336 = new HAnimSegment();
HAnimSegment336->setUSE("hanim_l_tarsal_proximal_phalanx_4");
HAnimHumanoid24->setSegments(HAnimSegment336);

HAnimSegment* HAnimSegment337 = new HAnimSegment();
HAnimSegment337->setUSE("hanim_l_tarsal_proximal_phalanx_5");
HAnimHumanoid24->setSegments(HAnimSegment337);

Scene22->addChild(HAnimHumanoid24);

X3D0->setScene(Scene22);

X3D0->toXMLString();
}
