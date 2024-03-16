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
meta3->setContent(CString("HAnimModelFootLeft.x3d"));
head1->addMeta(meta3);

meta* meta4 = new meta();
meta4->setName(CString("description"));
meta4->setContent(CString("Left foot, using high-fidelity definitions for HAnim version 2.0"));
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
meta8->setName(CString("warning"));
meta8->setContent(CString("not yet to scale"));
head1->addMeta(meta8);

meta* meta9 = new meta();
meta9->setName(CString("warning"));
meta9->setContent(CString("TODO will X3D HAnim component add a new level to support LOA-4 functionality?"));
head1->addMeta(meta9);

meta* meta10 = new meta();
meta10->setName(CString("info"));
meta10->setContent(CString("TODO describe how to compute and apply offsets for center values whenever attaching this appendage to a body"));
head1->addMeta(meta10);

meta* meta11 = new meta();
meta11->setName(CString("reference"));
meta11->setContent(CString("https://www.web3d.org/working-groups/humanoid-animation-HAnim"));
head1->addMeta(meta11);

meta* meta12 = new meta();
meta12->setName(CString("reference"));
meta12->setContent(CString("https://www.web3d.org/documents/specifications/19774/V2.0"));
head1->addMeta(meta12);

meta* meta13 = new meta();
meta13->setName(CString("reference"));
meta13->setContent(CString("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#TheFeet"));
head1->addMeta(meta13);

meta* meta14 = new meta();
meta14->setName(CString("reference"));
meta14->setContent(CString("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#f-FootJoints"));
head1->addMeta(meta14);

meta* meta15 = new meta();
meta15->setName(CString("reference"));
meta15->setContent(CString("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#Hierarchy4"));
head1->addMeta(meta15);

meta* meta16 = new meta();
meta16->setName(CString("reference"));
meta16->setContent(CString("https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19775-1v4-WD2/Part01/components/hanim.html"));
head1->addMeta(meta16);

meta* meta17 = new meta();
meta17->setName(CString("subject"));
meta17->setContent(CString("X3D HAnim humanoid animation"));
head1->addMeta(meta17);

meta* meta18 = new meta();
meta18->setName(CString("TODO"));
meta18->setContent(CString("Integrate and confirm Segment/Joint names, Viewpoints."));
head1->addMeta(meta18);

meta* meta19 = new meta();
meta19->setName(CString("identifier"));
meta19->setContent(CString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelFootLeft.x3d"));
head1->addMeta(meta19);

meta* meta20 = new meta();
meta20->setName(CString("generator"));
meta20->setContent(CString("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"));
head1->addMeta(meta20);

meta* meta21 = new meta();
meta21->setName(CString("license"));
meta21->setContent(CString("../license.html"));
head1->addMeta(meta21);

X3D0->setHead(head1);

Scene* Scene22 = new Scene();
WorldInfo* WorldInfo23 = new WorldInfo();
WorldInfo23->setTitle(CString("HAnimModelFootLeft.x3d"));
Scene22->addChild(WorldInfo23);

HAnimHumanoid* HAnimHumanoid24 = new HAnimHumanoid();
HAnimHumanoid24->setName(CString("Foot_Left"));
HAnimHumanoid24->setDEF(CString("hanim_Foot_Left"));
HAnimHumanoid24->setLoa(4);
HAnimHumanoid24->setVersion(CString("2.0"));
//original HAnimHumanoid info='\"authorName=Kwan-Hee YOO, Don Brutzman and Joe Williams\"'
MetadataSet* MetadataSet25 = new MetadataSet();
MetadataSet25->setName(CString("HAnimHumanoid.info"));
MetadataSet25->setReference(CString("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid"));
MetadataString* MetadataString26 = new MetadataString();
MetadataString26->setName(CString("authorName"));
MetadataString26->setValue(new CString[1]{CString("Kwan-Hee YOO, Don Brutzman and Joe Williams")}, 1);
MetadataSet25->setValue((X3DNode *)MetadataString26);

HAnimHumanoid24->setMetadata(MetadataSet25);

HAnimJoint* HAnimJoint27 = new HAnimJoint();
HAnimJoint27->setName(CString("humanoid_root"));
HAnimJoint27->setDEF(CString("hanim_humanoid_root"));
//Might consider putting a HAnimSegment here, but that doesn't help with re-use of this foot model
HAnimJoint* HAnimJoint28 = new HAnimJoint();
HAnimJoint28->setName(CString("l_talocrural"));
HAnimJoint28->setDEF(CString("hanim_l_talocrural"));
HAnimJoint28->setDescription(CString("connection joint of foot to leg above"));
HAnimSegment* HAnimSegment29 = new HAnimSegment();
HAnimSegment29->setName(CString("l_talus"));
HAnimSegment29->setDEF(CString("hanim_l_talus"));
Transform* Transform30 = new Transform();
Shape* Shape31 = new Shape();
Shape31->setDEF(CString("HAnimJointShape"));
Sphere* Sphere32 = new Sphere();
Sphere32->setRadius(0.025);
Shape31->setGeometry(Sphere32);

Appearance* Appearance33 = new Appearance();
Appearance33->setDEF(CString("HAnimJointAppearance"));
Material* Material34 = new Material();
Material34->setDiffuseColor(new float[3]{0,0,1});
Appearance33->addChild(Material34);

Shape31->addChild(Appearance33);

Transform30->addChild(Shape31);

HAnimSegment29->addChild(Transform30);

Shape* Shape35 = new Shape();
Appearance* Appearance36 = new Appearance();
Material* Material37 = new Material();
Material37->setEmissiveColor(new float[3]{1,1,1});
Appearance36->addChild(Material37);

Shape35->addChild(Appearance36);

IndexedLineSet* IndexedLineSet38 = new IndexedLineSet();
IndexedLineSet38->setDEF(CString("TCtoTCN"));
IndexedLineSet38->setCoordIndex(new int32_t[2]{0,1}, 2);
Coordinate* Coordinate39 = new Coordinate();
Coordinate39->setPoint(new float[6]{0,0,0,0,-0.3,0}, 6);
IndexedLineSet38->addChild(Coordinate39);

Shape35->setGeometry(IndexedLineSet38);

HAnimSegment29->addChild(Shape35);

Shape* Shape40 = new Shape();
Appearance* Appearance41 = new Appearance();
Material* Material42 = new Material();
Material42->setEmissiveColor(new float[3]{1,1,1});
Appearance41->addChild(Material42);

Shape40->addChild(Appearance41);

IndexedLineSet* IndexedLineSet43 = new IndexedLineSet();
IndexedLineSet43->setDEF(CString("TCtoCC"));
IndexedLineSet43->setCoordIndex(new int32_t[2]{0,1}, 2);
Coordinate* Coordinate44 = new Coordinate();
Coordinate44->setPoint(new float[6]{0,0,0,0.2,0.3,0}, 6);
IndexedLineSet43->addChild(Coordinate44);

Shape40->setGeometry(IndexedLineSet43);

HAnimSegment29->addChild(Shape40);

HAnimJoint28->addChild(HAnimSegment29);

//TCN
HAnimJoint* HAnimJoint45 = new HAnimJoint();
HAnimJoint45->setName(CString("l_talocalcaneonavicular"));
HAnimJoint45->setDEF(CString("hanim_l_talocalcaneonavicular"));
HAnimJoint45->setCenter(new float[3]{0,-0.3,0});
HAnimSegment* HAnimSegment46 = new HAnimSegment();
HAnimSegment46->setName(CString("l_navicular"));
HAnimSegment46->setDEF(CString("hanim_l_navicular"));
Transform* Transform47 = new Transform();
Transform47->setTranslation(new float[3]{0,-0.3,0});
Shape* Shape48 = new Shape();
Shape48->setUSE(CString("HAnimJointShape"));
Transform47->addChild(Shape48);

HAnimSegment46->addChild(Transform47);

Shape* Shape49 = new Shape();
Appearance* Appearance50 = new Appearance();
Material* Material51 = new Material();
Material51->setEmissiveColor(new float[3]{1,1,1});
Appearance50->addChild(Material51);

Shape49->addChild(Appearance50);

IndexedLineSet* IndexedLineSet52 = new IndexedLineSet();
IndexedLineSet52->setDEF(CString("TCNtoCN1"));
IndexedLineSet52->setCoordIndex(new int32_t[2]{0,1}, 2);
Coordinate* Coordinate53 = new Coordinate();
Coordinate53->setPoint(new float[6]{0,-0.3,0,-0.1,-0.45,0}, 6);
IndexedLineSet52->addChild(Coordinate53);

Shape49->setGeometry(IndexedLineSet52);

HAnimSegment46->addChild(Shape49);

Shape* Shape54 = new Shape();
Appearance* Appearance55 = new Appearance();
Material* Material56 = new Material();
Material56->setEmissiveColor(new float[3]{1,1,1});
Appearance55->addChild(Material56);

Shape54->addChild(Appearance55);

IndexedLineSet* IndexedLineSet57 = new IndexedLineSet();
IndexedLineSet57->setDEF(CString("TCNtoCN2"));
IndexedLineSet57->setCoordIndex(new int32_t[2]{0,1}, 2);
Coordinate* Coordinate58 = new Coordinate();
Coordinate58->setPoint(new float[6]{0,-0.3,0,0,-0.45,0}, 6);
IndexedLineSet57->addChild(Coordinate58);

Shape54->setGeometry(IndexedLineSet57);

HAnimSegment46->addChild(Shape54);

Shape* Shape59 = new Shape();
Appearance* Appearance60 = new Appearance();
Material* Material61 = new Material();
Material61->setEmissiveColor(new float[3]{1,1,1});
Appearance60->addChild(Material61);

Shape59->addChild(Appearance60);

IndexedLineSet* IndexedLineSet62 = new IndexedLineSet();
IndexedLineSet62->setDEF(CString("TCNtoCN3"));
IndexedLineSet62->setCoordIndex(new int32_t[2]{0,1}, 2);
Coordinate* Coordinate63 = new Coordinate();
Coordinate63->setPoint(new float[6]{0,-0.3,0,0.1,-0.4,0}, 6);
IndexedLineSet62->addChild(Coordinate63);

Shape59->setGeometry(IndexedLineSet62);

HAnimSegment46->addChild(Shape59);

HAnimJoint45->addChild(HAnimSegment46);

//CN1
HAnimJoint* HAnimJoint64 = new HAnimJoint();
HAnimJoint64->setName(CString("l_cuneonavicular_1"));
HAnimJoint64->setDEF(CString("hanim_l_cuneonavicular_1"));
HAnimJoint64->setCenter(new float[3]{-0.1,-0.45,0});
HAnimSegment* HAnimSegment65 = new HAnimSegment();
HAnimSegment65->setName(CString("l_cuneiform_1"));
HAnimSegment65->setDEF(CString("hanim_l_cuneiform_1"));
Transform* Transform66 = new Transform();
Transform66->setTranslation(new float[3]{-0.1,-0.45,0});
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
IndexedLineSet71->setDEF(CString("CN1toTMT1"));
IndexedLineSet71->setCoordIndex(new int32_t[2]{0,1}, 2);
Coordinate* Coordinate72 = new Coordinate();
Coordinate72->setPoint(new float[6]{-0.1,-0.45,0,-0.1,-0.6,0}, 6);
IndexedLineSet71->addChild(Coordinate72);

Shape68->setGeometry(IndexedLineSet71);

HAnimSegment65->addChild(Shape68);

HAnimJoint64->addChild(HAnimSegment65);

HAnimJoint* HAnimJoint73 = new HAnimJoint();
HAnimJoint73->setName(CString("l_tarsometatarsal_1"));
HAnimJoint73->setDEF(CString("hanim_l_tarsometatarsal_1"));
HAnimJoint73->setCenter(new float[3]{-0.1,-0.6,0});
HAnimSegment* HAnimSegment74 = new HAnimSegment();
HAnimSegment74->setName(CString("l_metatarsal_1"));
HAnimSegment74->setDEF(CString("hanim_l_metatarsal_1"));
Transform* Transform75 = new Transform();
Transform75->setTranslation(new float[3]{-0.1,-0.6,0});
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
IndexedLineSet80->setDEF(CString("TMT1toMTP1"));
IndexedLineSet80->setCoordIndex(new int32_t[2]{0,1}, 2);
Coordinate* Coordinate81 = new Coordinate();
Coordinate81->setPoint(new float[6]{-0.1,-0.6,0,-0.1,-0.9,0}, 6);
IndexedLineSet80->addChild(Coordinate81);

Shape77->setGeometry(IndexedLineSet80);

HAnimSegment74->addChild(Shape77);

HAnimJoint73->addChild(HAnimSegment74);

HAnimJoint* HAnimJoint82 = new HAnimJoint();
HAnimJoint82->setName(CString("l_metatarsophalangeal_1"));
HAnimJoint82->setDEF(CString("hanim_l_metatarsophalangeal_1"));
HAnimJoint82->setCenter(new float[3]{-0.1,-0.9,0});
HAnimSegment* HAnimSegment83 = new HAnimSegment();
HAnimSegment83->setName(CString("l_tarsal_proximal_phalanx_1"));
HAnimSegment83->setDEF(CString("hanim_l_tarsal_proximal_phalanx_1"));
Transform* Transform84 = new Transform();
Transform84->setTranslation(new float[3]{-0.1,-0.9,0});
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
IndexedLineSet89->setDEF(CString("MTP1toIP1"));
IndexedLineSet89->setCoordIndex(new int32_t[2]{0,1}, 2);
Coordinate* Coordinate90 = new Coordinate();
Coordinate90->setPoint(new float[6]{-0.1,-0.9,0,-0.1,-1.05,0}, 6);
IndexedLineSet89->addChild(Coordinate90);

Shape86->setGeometry(IndexedLineSet89);

HAnimSegment83->addChild(Shape86);

HAnimJoint82->addChild(HAnimSegment83);

HAnimJoint* HAnimJoint91 = new HAnimJoint();
HAnimJoint91->setName(CString("l_tarsal_interphalangeal_1"));
HAnimJoint91->setDEF(CString("hanim_l_tarsal_interphalangeal_1"));
HAnimJoint91->setCenter(new float[3]{-0.1,-1.05,0});
HAnimSegment* HAnimSegment92 = new HAnimSegment();
HAnimSegment92->setName(CString("l_tarsal_distal_phalanx_1"));
HAnimSegment92->setDEF(CString("hanim_l_tarsal_distal_phalanx_1"));
Transform* Transform93 = new Transform();
Transform93->setTranslation(new float[3]{-0.1,-1.05,0});
Shape* Shape94 = new Shape();
Shape94->setUSE(CString("HAnimJointShape"));
Transform93->addChild(Shape94);

HAnimSegment92->addChild(Transform93);

Shape* Shape95 = new Shape();
Appearance* Appearance96 = new Appearance();
Material* Material97 = new Material();
Material97->setEmissiveColor(new float[3]{1,1,1});
Appearance96->addChild(Material97);

Shape95->addChild(Appearance96);

IndexedLineSet* IndexedLineSet98 = new IndexedLineSet();
IndexedLineSet98->setDEF(CString("tiptoe_l_tarsal_distal_interphalangeal_1"));
IndexedLineSet98->setCoordIndex(new int32_t[2]{0,1}, 2);
Coordinate* Coordinate99 = new Coordinate();
Coordinate99->setPoint(new float[6]{-0.1,-1.05,0,-0.1,-1.1,0}, 6);
IndexedLineSet98->addChild(Coordinate99);

Shape95->setGeometry(IndexedLineSet98);

HAnimSegment92->addChild(Shape95);

HAnimJoint91->addChild(HAnimSegment92);

HAnimJoint82->addChild(HAnimJoint91);

HAnimJoint73->addChild(HAnimJoint82);

HAnimJoint64->addChild(HAnimJoint73);

HAnimJoint45->addChild(HAnimJoint64);

//CN2
HAnimJoint* HAnimJoint100 = new HAnimJoint();
HAnimJoint100->setName(CString("l_cuneonavicular_2"));
HAnimJoint100->setDEF(CString("hanim_l_cuneonavicular_2"));
HAnimJoint100->setCenter(new float[3]{0,-0.45,0});
HAnimSegment* HAnimSegment101 = new HAnimSegment();
HAnimSegment101->setName(CString("l_cuneiform_2"));
HAnimSegment101->setDEF(CString("hanim_l_cuneiform_2"));
Transform* Transform102 = new Transform();
Transform102->setTranslation(new float[3]{0,-0.45,0});
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
IndexedLineSet107->setDEF(CString("CN2toTMT2"));
IndexedLineSet107->setCoordIndex(new int32_t[2]{0,1}, 2);
Coordinate* Coordinate108 = new Coordinate();
Coordinate108->setPoint(new float[6]{0,-0.45,0,0.05,-0.6,0}, 6);
IndexedLineSet107->addChild(Coordinate108);

Shape104->setGeometry(IndexedLineSet107);

HAnimSegment101->addChild(Shape104);

HAnimJoint100->addChild(HAnimSegment101);

HAnimJoint* HAnimJoint109 = new HAnimJoint();
HAnimJoint109->setName(CString("l_tarsometatarsal_2"));
HAnimJoint109->setDEF(CString("hanim_l_tarsometatarsal_2"));
HAnimJoint109->setCenter(new float[3]{0.05,-0.6,0});
HAnimSegment* HAnimSegment110 = new HAnimSegment();
HAnimSegment110->setName(CString("l_metatarsal_2"));
HAnimSegment110->setDEF(CString("hanim_l_metatarsal_2"));
Transform* Transform111 = new Transform();
Transform111->setTranslation(new float[3]{0.05,-0.6,0});
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
IndexedLineSet116->setDEF(CString("TMT2toMTP2"));
IndexedLineSet116->setCoordIndex(new int32_t[2]{0,1}, 2);
Coordinate* Coordinate117 = new Coordinate();
Coordinate117->setPoint(new float[6]{0.05,-0.6,0,0.05,-0.9,0}, 6);
IndexedLineSet116->addChild(Coordinate117);

Shape113->setGeometry(IndexedLineSet116);

HAnimSegment110->addChild(Shape113);

HAnimJoint109->addChild(HAnimSegment110);

HAnimJoint* HAnimJoint118 = new HAnimJoint();
HAnimJoint118->setName(CString("l_metatarsophalangeal_2"));
HAnimJoint118->setDEF(CString("hanim_l_metatarsophalangeal_2"));
HAnimJoint118->setCenter(new float[3]{0.05,-0.9,0});
HAnimSegment* HAnimSegment119 = new HAnimSegment();
HAnimSegment119->setName(CString("l_tarsal_proximal_phalanx_2"));
HAnimSegment119->setDEF(CString("hanim_l_tarsal_proximal_phalanx_2"));
Transform* Transform120 = new Transform();
Transform120->setTranslation(new float[3]{0.05,-0.9,0});
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
IndexedLineSet125->setDEF(CString("MTP2toPIP2"));
IndexedLineSet125->setCoordIndex(new int32_t[2]{0,1}, 2);
Coordinate* Coordinate126 = new Coordinate();
Coordinate126->setPoint(new float[6]{0.05,-0.9,0,0.05,-1.05,0}, 6);
IndexedLineSet125->addChild(Coordinate126);

Shape122->setGeometry(IndexedLineSet125);

HAnimSegment119->addChild(Shape122);

HAnimJoint118->addChild(HAnimSegment119);

HAnimJoint* HAnimJoint127 = new HAnimJoint();
HAnimJoint127->setName(CString("l_tarsal_proximal_interphalangeal_2"));
HAnimJoint127->setDEF(CString("hanim_l_tarsal_proximal_interphalangeal_2"));
HAnimJoint127->setCenter(new float[3]{0.05,-1.05,0});
HAnimSegment* HAnimSegment128 = new HAnimSegment();
HAnimSegment128->setName(CString("l_tarsal_middle_phalanx_2"));
HAnimSegment128->setDEF(CString("hanim_l_tarsal_middle_phalanx_2"));
Transform* Transform129 = new Transform();
Transform129->setTranslation(new float[3]{0.05,-1.05,0});
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
IndexedLineSet134->setDEF(CString("PIP2toDIP2"));
IndexedLineSet134->setCoordIndex(new int32_t[2]{0,1}, 2);
Coordinate* Coordinate135 = new Coordinate();
Coordinate135->setPoint(new float[6]{0.05,-1.05,0,0.05,-1.12,0}, 6);
IndexedLineSet134->addChild(Coordinate135);

Shape131->setGeometry(IndexedLineSet134);

HAnimSegment128->addChild(Shape131);

HAnimJoint127->addChild(HAnimSegment128);

HAnimJoint* HAnimJoint136 = new HAnimJoint();
HAnimJoint136->setName(CString("l_tarsal_distal_interphalangeal_2"));
HAnimJoint136->setDEF(CString("hanim_l_tarsal_distal_interphalangeal_2"));
HAnimJoint136->setCenter(new float[3]{0.05,-1.12,0});
HAnimSegment* HAnimSegment137 = new HAnimSegment();
HAnimSegment137->setName(CString("l_tarsal_distal_phalanx_2"));
HAnimSegment137->setDEF(CString("hanim_l_tarsal_distal_phalanx_2"));
Transform* Transform138 = new Transform();
Transform138->setTranslation(new float[3]{0.05,-1.12,0});
Shape* Shape139 = new Shape();
Shape139->setUSE(CString("HAnimJointShape"));
Transform138->addChild(Shape139);

HAnimSegment137->addChild(Transform138);

Shape* Shape140 = new Shape();
Appearance* Appearance141 = new Appearance();
Material* Material142 = new Material();
Material142->setEmissiveColor(new float[3]{1,1,1});
Appearance141->addChild(Material142);

Shape140->addChild(Appearance141);

IndexedLineSet* IndexedLineSet143 = new IndexedLineSet();
IndexedLineSet143->setDEF(CString("tiptoe_l_tarsal_distal_phalanx_2"));
IndexedLineSet143->setCoordIndex(new int32_t[2]{0,1}, 2);
Coordinate* Coordinate144 = new Coordinate();
Coordinate144->setPoint(new float[6]{0.05,-1.12,0,0.05,-1.16,0}, 6);
IndexedLineSet143->addChild(Coordinate144);

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
HAnimJoint145->setName(CString("l_cuneonavicular_3"));
HAnimJoint145->setDEF(CString("hanim_l_cuneonavicular_3"));
HAnimJoint145->setCenter(new float[3]{0.1,-0.4,0});
HAnimSegment* HAnimSegment146 = new HAnimSegment();
HAnimSegment146->setName(CString("l_cuneiform_3"));
HAnimSegment146->setDEF(CString("hanim_l_cuneiform_3"));
Transform* Transform147 = new Transform();
Transform147->setTranslation(new float[3]{0.1,-0.4,0});
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
IndexedLineSet152->setDEF(CString("CN3toTMT3"));
IndexedLineSet152->setCoordIndex(new int32_t[2]{0,1}, 2);
Coordinate* Coordinate153 = new Coordinate();
Coordinate153->setPoint(new float[6]{0.1,-0.4,0,0.15,-0.6,0}, 6);
IndexedLineSet152->addChild(Coordinate153);

Shape149->setGeometry(IndexedLineSet152);

HAnimSegment146->addChild(Shape149);

HAnimJoint145->addChild(HAnimSegment146);

HAnimJoint* HAnimJoint154 = new HAnimJoint();
HAnimJoint154->setName(CString("l_tarsometatarsal_3"));
HAnimJoint154->setDEF(CString("hanim_l_tarsometatarsal_3"));
HAnimJoint154->setCenter(new float[3]{0.15,-0.6,0});
HAnimSegment* HAnimSegment155 = new HAnimSegment();
HAnimSegment155->setName(CString("l_metatarsal_3"));
HAnimSegment155->setDEF(CString("hanim_l_metatarsal_3"));
Transform* Transform156 = new Transform();
Transform156->setTranslation(new float[3]{0.15,-0.6,0});
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
IndexedLineSet161->setDEF(CString("TMT3toMTP3"));
IndexedLineSet161->setCoordIndex(new int32_t[2]{0,1}, 2);
Coordinate* Coordinate162 = new Coordinate();
Coordinate162->setPoint(new float[6]{0.15,-0.6,0,0.15,-0.9,0}, 6);
IndexedLineSet161->addChild(Coordinate162);

Shape158->setGeometry(IndexedLineSet161);

HAnimSegment155->addChild(Shape158);

HAnimJoint154->addChild(HAnimSegment155);

HAnimJoint* HAnimJoint163 = new HAnimJoint();
HAnimJoint163->setName(CString("l_metatarsophalangeal_3"));
HAnimJoint163->setDEF(CString("hanim_l_metatarsophalangeal_3"));
HAnimJoint163->setCenter(new float[3]{0.15,-0.9,0});
HAnimSegment* HAnimSegment164 = new HAnimSegment();
HAnimSegment164->setName(CString("l_tarsal_proximal_phalanx_3"));
HAnimSegment164->setDEF(CString("hanim_l_tarsal_proximal_phalanx_3"));
Transform* Transform165 = new Transform();
Transform165->setTranslation(new float[3]{0.15,-0.9,0});
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
IndexedLineSet170->setDEF(CString("MTP3toPIP3"));
IndexedLineSet170->setCoordIndex(new int32_t[2]{0,1}, 2);
Coordinate* Coordinate171 = new Coordinate();
Coordinate171->setPoint(new float[6]{0.15,-0.9,0,0.15,-1.05,0}, 6);
IndexedLineSet170->addChild(Coordinate171);

Shape167->setGeometry(IndexedLineSet170);

HAnimSegment164->addChild(Shape167);

HAnimJoint163->addChild(HAnimSegment164);

HAnimJoint* HAnimJoint172 = new HAnimJoint();
HAnimJoint172->setName(CString("l_tarsal_proximal_interphalangeal_3"));
HAnimJoint172->setDEF(CString("hanim_l_tarsal_proximal_interphalangeal_3"));
HAnimJoint172->setCenter(new float[3]{0.15,-1.05,0});
HAnimSegment* HAnimSegment173 = new HAnimSegment();
HAnimSegment173->setName(CString("l_tarsal_middle_phalanx_3"));
HAnimSegment173->setDEF(CString("hanim_l_tarsal_middle_phalanx_3"));
Transform* Transform174 = new Transform();
Transform174->setTranslation(new float[3]{0.15,-1.05,0});
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
IndexedLineSet179->setDEF(CString("PIP3toDIP3"));
IndexedLineSet179->setCoordIndex(new int32_t[2]{0,1}, 2);
Coordinate* Coordinate180 = new Coordinate();
Coordinate180->setPoint(new float[6]{0.15,-1.05,0,0.15,-1.13,0}, 6);
IndexedLineSet179->addChild(Coordinate180);

Shape176->setGeometry(IndexedLineSet179);

HAnimSegment173->addChild(Shape176);

HAnimJoint172->addChild(HAnimSegment173);

HAnimJoint* HAnimJoint181 = new HAnimJoint();
HAnimJoint181->setName(CString("l_tarsal_distal_interphalangeal_3"));
HAnimJoint181->setDEF(CString("hanim_l_tarsal_distal_interphalangeal_3"));
HAnimJoint181->setCenter(new float[3]{0.15,-1.13,0});
HAnimSegment* HAnimSegment182 = new HAnimSegment();
HAnimSegment182->setName(CString("l_tarsal_distal_phalanx_3"));
HAnimSegment182->setDEF(CString("hanim_l_tarsal_distal_phalanx_3"));
Transform* Transform183 = new Transform();
Transform183->setTranslation(new float[3]{0.15,-1.13,0});
Shape* Shape184 = new Shape();
Shape184->setUSE(CString("HAnimJointShape"));
Transform183->addChild(Shape184);

HAnimSegment182->addChild(Transform183);

Shape* Shape185 = new Shape();
Appearance* Appearance186 = new Appearance();
Material* Material187 = new Material();
Material187->setEmissiveColor(new float[3]{1,1,1});
Appearance186->addChild(Material187);

Shape185->addChild(Appearance186);

IndexedLineSet* IndexedLineSet188 = new IndexedLineSet();
IndexedLineSet188->setDEF(CString("tiptoe_l_tarsal_distal_interphalangeal_3"));
IndexedLineSet188->setCoordIndex(new int32_t[2]{0,1}, 2);
Coordinate* Coordinate189 = new Coordinate();
Coordinate189->setPoint(new float[6]{0.15,-1.13,0,0.15,-1.16,0}, 6);
IndexedLineSet188->addChild(Coordinate189);

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
HAnimJoint190->setName(CString("l_calcaneocuboid"));
HAnimJoint190->setDEF(CString("hanim_l_calcaneocuboid"));
HAnimJoint190->setCenter(new float[3]{0.2,0.3,0});
HAnimSegment* HAnimSegment191 = new HAnimSegment();
HAnimSegment191->setName(CString("l_calcaneus"));
HAnimSegment191->setDEF(CString("hanim_l_calcaneus"));
Transform* Transform192 = new Transform();
Transform192->setTranslation(new float[3]{0.2,0.3,0});
Shape* Shape193 = new Shape();
Shape193->setUSE(CString("HAnimJointShape"));
Transform192->addChild(Shape193);

HAnimSegment191->addChild(Transform192);

Shape* Shape194 = new Shape();
Appearance* Appearance195 = new Appearance();
Material* Material196 = new Material();
Material196->setEmissiveColor(new float[3]{1,1,1});
Appearance195->addChild(Material196);

Shape194->addChild(Appearance195);

IndexedLineSet* IndexedLineSet197 = new IndexedLineSet();
IndexedLineSet197->setDEF(CString("CCtoTT"));
IndexedLineSet197->setCoordIndex(new int32_t[2]{0,1}, 2);
Coordinate* Coordinate198 = new Coordinate();
Coordinate198->setPoint(new float[6]{0.2,0.3,0,0.21,-0.3,0}, 6);
IndexedLineSet197->addChild(Coordinate198);

Shape194->setGeometry(IndexedLineSet197);

HAnimSegment191->addChild(Shape194);

HAnimJoint190->addChild(HAnimSegment191);

//TT
HAnimJoint* HAnimJoint199 = new HAnimJoint();
HAnimJoint199->setName(CString("l_transversetarsal"));
HAnimJoint199->setDEF(CString("hanim_l_transversetarsal"));
HAnimJoint199->setCenter(new float[3]{0.21,-0.3,0});
HAnimSegment* HAnimSegment200 = new HAnimSegment();
HAnimSegment200->setName(CString("l_cuboid"));
HAnimSegment200->setDEF(CString("hanim_l_cuboid"));
Transform* Transform201 = new Transform();
Transform201->setTranslation(new float[3]{0.21,-0.3,0});
Shape* Shape202 = new Shape();
Shape202->setUSE(CString("HAnimJointShape"));
Transform201->addChild(Shape202);

HAnimSegment200->addChild(Transform201);

Shape* Shape203 = new Shape();
Appearance* Appearance204 = new Appearance();
Material* Material205 = new Material();
Material205->setEmissiveColor(new float[3]{1,1,1});
Appearance204->addChild(Material205);

Shape203->addChild(Appearance204);

IndexedLineSet* IndexedLineSet206 = new IndexedLineSet();
IndexedLineSet206->setDEF(CString("TTtoTMT4"));
IndexedLineSet206->setCoordIndex(new int32_t[2]{0,1}, 2);
Coordinate* Coordinate207 = new Coordinate();
Coordinate207->setPoint(new float[6]{0.21,-0.3,0,0.25,-0.58,0}, 6);
IndexedLineSet206->addChild(Coordinate207);

Shape203->setGeometry(IndexedLineSet206);

HAnimSegment200->addChild(Shape203);

Shape* Shape208 = new Shape();
Appearance* Appearance209 = new Appearance();
Material* Material210 = new Material();
Material210->setEmissiveColor(new float[3]{1,1,1});
Appearance209->addChild(Material210);

Shape208->addChild(Appearance209);

IndexedLineSet* IndexedLineSet211 = new IndexedLineSet();
IndexedLineSet211->setDEF(CString("TTtoTMT5"));
IndexedLineSet211->setCoordIndex(new int32_t[2]{0,1}, 2);
Coordinate* Coordinate212 = new Coordinate();
Coordinate212->setPoint(new float[6]{0.21,-0.3,0,0.33,-0.52,0}, 6);
IndexedLineSet211->addChild(Coordinate212);

Shape208->setGeometry(IndexedLineSet211);

HAnimSegment200->addChild(Shape208);

HAnimJoint199->addChild(HAnimSegment200);

//TMT4
HAnimJoint* HAnimJoint213 = new HAnimJoint();
HAnimJoint213->setName(CString("l_tarsometatarsal_4"));
HAnimJoint213->setDEF(CString("hanim_l_tarsometatarsal_4"));
HAnimJoint213->setCenter(new float[3]{0.25,-0.58,0});
HAnimSegment* HAnimSegment214 = new HAnimSegment();
HAnimSegment214->setName(CString("l_metatarsal_4"));
HAnimSegment214->setDEF(CString("hanim_l_metatarsal_4"));
Transform* Transform215 = new Transform();
Transform215->setTranslation(new float[3]{0.25,-0.58,0});
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
IndexedLineSet220->setDEF(CString("TMT4toMTP4"));
IndexedLineSet220->setCoordIndex(new int32_t[2]{0,1}, 2);
Coordinate* Coordinate221 = new Coordinate();
Coordinate221->setPoint(new float[6]{0.25,-0.58,0,0.25,-0.87,0}, 6);
IndexedLineSet220->addChild(Coordinate221);

Shape217->setGeometry(IndexedLineSet220);

HAnimSegment214->addChild(Shape217);

HAnimJoint213->addChild(HAnimSegment214);

HAnimJoint* HAnimJoint222 = new HAnimJoint();
HAnimJoint222->setName(CString("l_metatarsophalangeal_4"));
HAnimJoint222->setDEF(CString("hanim_l_metatarsophalangeal_4"));
HAnimJoint222->setCenter(new float[3]{0.25,-0.87,0});
HAnimSegment* HAnimSegment223 = new HAnimSegment();
HAnimSegment223->setName(CString("l_tarsal_proximal_phalanx_4"));
HAnimSegment223->setDEF(CString("hanim_l_tarsal_proximal_phalanx_4"));
Transform* Transform224 = new Transform();
Transform224->setTranslation(new float[3]{0.25,-0.87,0});
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
IndexedLineSet229->setDEF(CString("MTP4toPIP4"));
IndexedLineSet229->setCoordIndex(new int32_t[2]{0,1}, 2);
Coordinate* Coordinate230 = new Coordinate();
Coordinate230->setPoint(new float[6]{0.25,-0.87,0,0.25,-1,0}, 6);
IndexedLineSet229->addChild(Coordinate230);

Shape226->setGeometry(IndexedLineSet229);

HAnimSegment223->addChild(Shape226);

HAnimJoint222->addChild(HAnimSegment223);

HAnimJoint* HAnimJoint231 = new HAnimJoint();
HAnimJoint231->setName(CString("l_tarsal_proximal_interphalangeal_4"));
HAnimJoint231->setDEF(CString("hanim_l_tarsal_proximal_interphalangeal_4"));
HAnimJoint231->setCenter(new float[3]{0.25,-1,0});
HAnimSegment* HAnimSegment232 = new HAnimSegment();
HAnimSegment232->setName(CString("l_tarsal_middle_phalanx_4"));
HAnimSegment232->setDEF(CString("hanim_l_tarsal_middle_phalanx_4"));
Transform* Transform233 = new Transform();
Transform233->setTranslation(new float[3]{0.25,-1,0});
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
IndexedLineSet238->setDEF(CString("PIP4toDIP4"));
IndexedLineSet238->setCoordIndex(new int32_t[2]{0,1}, 2);
Coordinate* Coordinate239 = new Coordinate();
Coordinate239->setPoint(new float[6]{0.25,-1,0,0.25,-1.1,0}, 6);
IndexedLineSet238->addChild(Coordinate239);

Shape235->setGeometry(IndexedLineSet238);

HAnimSegment232->addChild(Shape235);

HAnimJoint231->addChild(HAnimSegment232);

HAnimJoint* HAnimJoint240 = new HAnimJoint();
HAnimJoint240->setName(CString("l_tarsal_distal_interphalangeal_4"));
HAnimJoint240->setDEF(CString("hanim_l_tarsal_distal_interphalangeal_4"));
HAnimJoint240->setCenter(new float[3]{0.25,-1.1,0});
HAnimSegment* HAnimSegment241 = new HAnimSegment();
HAnimSegment241->setName(CString("l_tarsal_distal_phalanx_4"));
HAnimSegment241->setDEF(CString("hanim_l_tarsal_distal_phalanx_4"));
Transform* Transform242 = new Transform();
Transform242->setTranslation(new float[3]{0.25,-1.1,0});
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
IndexedLineSet247->setDEF(CString("tiptoe_l_tarsal_distal_interphalangeal_4"));
IndexedLineSet247->setCoordIndex(new int32_t[2]{0,1}, 2);
Coordinate* Coordinate248 = new Coordinate();
Coordinate248->setPoint(new float[6]{0.25,-1.1,0,0.25,-1.15,0}, 6);
IndexedLineSet247->addChild(Coordinate248);

Shape244->setGeometry(IndexedLineSet247);

HAnimSegment241->addChild(Shape244);

HAnimJoint240->addChild(HAnimSegment241);

HAnimJoint231->addChild(HAnimJoint240);

HAnimJoint222->addChild(HAnimJoint231);

HAnimJoint213->addChild(HAnimJoint222);

HAnimJoint199->addChild(HAnimJoint213);

//TMT5
HAnimJoint* HAnimJoint249 = new HAnimJoint();
HAnimJoint249->setName(CString("l_tarsometatarsal_5"));
HAnimJoint249->setDEF(CString("hanim_l_tarsometatarsal_5"));
HAnimJoint249->setCenter(new float[3]{0.33,-0.52,0});
HAnimSegment* HAnimSegment250 = new HAnimSegment();
HAnimSegment250->setName(CString("l_metatarsal_5"));
HAnimSegment250->setDEF(CString("hanim_l_metatarsal_5"));
Transform* Transform251 = new Transform();
Transform251->setTranslation(new float[3]{0.33,-0.52,0});
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
IndexedLineSet256->setDEF(CString("TMT5toMTP5"));
IndexedLineSet256->setCoordIndex(new int32_t[2]{0,1}, 2);
Coordinate* Coordinate257 = new Coordinate();
Coordinate257->setPoint(new float[6]{0.33,-0.52,0,0.34,-0.8,0}, 6);
IndexedLineSet256->addChild(Coordinate257);

Shape253->setGeometry(IndexedLineSet256);

HAnimSegment250->addChild(Shape253);

HAnimJoint249->addChild(HAnimSegment250);

HAnimJoint* HAnimJoint258 = new HAnimJoint();
HAnimJoint258->setName(CString("l_metatarsophalangeal_5"));
HAnimJoint258->setDEF(CString("hanim_l_metatarsophalangeal_5"));
HAnimJoint258->setCenter(new float[3]{0.34,-0.8,0});
HAnimSegment* HAnimSegment259 = new HAnimSegment();
HAnimSegment259->setName(CString("l_tarsal_proximal_phalanx_5"));
HAnimSegment259->setDEF(CString("hanim_l_tarsal_proximal_phalanx_5"));
Transform* Transform260 = new Transform();
Transform260->setTranslation(new float[3]{0.34,-0.8,0});
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
IndexedLineSet265->setDEF(CString("MTP5toPIP5"));
IndexedLineSet265->setCoordIndex(new int32_t[2]{0,1}, 2);
Coordinate* Coordinate266 = new Coordinate();
Coordinate266->setPoint(new float[6]{0.34,-0.8,0,0.34,-0.95,0}, 6);
IndexedLineSet265->addChild(Coordinate266);

Shape262->setGeometry(IndexedLineSet265);

HAnimSegment259->addChild(Shape262);

HAnimJoint258->addChild(HAnimSegment259);

HAnimJoint* HAnimJoint267 = new HAnimJoint();
HAnimJoint267->setName(CString("l_tarsal_proximal_interphalangeal_5"));
HAnimJoint267->setDEF(CString("hanim_l_tarsal_proximal_interphalangeal_5"));
HAnimJoint267->setCenter(new float[3]{0.34,-0.95,0});
HAnimSegment* HAnimSegment268 = new HAnimSegment();
HAnimSegment268->setName(CString("l_tarsal_middle_phalanx_5"));
HAnimSegment268->setDEF(CString("hanim_l_tarsal_middle_phalanx_5"));
Transform* Transform269 = new Transform();
Transform269->setTranslation(new float[3]{0.34,-0.95,0});
Shape* Shape270 = new Shape();
Shape270->setUSE(CString("HAnimJointShape"));
Transform269->addChild(Shape270);

HAnimSegment268->addChild(Transform269);

Shape* Shape271 = new Shape();
Appearance* Appearance272 = new Appearance();
Material* Material273 = new Material();
Material273->setEmissiveColor(new float[3]{1,1,1});
Appearance272->addChild(Material273);

Shape271->addChild(Appearance272);

IndexedLineSet* IndexedLineSet274 = new IndexedLineSet();
IndexedLineSet274->setDEF(CString("PIP5toDIP5"));
IndexedLineSet274->setCoordIndex(new int32_t[2]{0,1}, 2);
Coordinate* Coordinate275 = new Coordinate();
Coordinate275->setPoint(new float[6]{0.34,-0.95,0,0.34,-1.05,0}, 6);
IndexedLineSet274->addChild(Coordinate275);

Shape271->setGeometry(IndexedLineSet274);

HAnimSegment268->addChild(Shape271);

HAnimJoint267->addChild(HAnimSegment268);

HAnimJoint* HAnimJoint276 = new HAnimJoint();
HAnimJoint276->setName(CString("l_tarsal_distal_interphalangeal_5"));
HAnimJoint276->setDEF(CString("hanim_l_tarsal_distal_interphalangeal_5"));
HAnimJoint276->setCenter(new float[3]{0.34,-1.05,0});
HAnimSegment* HAnimSegment277 = new HAnimSegment();
HAnimSegment277->setName(CString("l_tarsal_distal_phalanx_5"));
HAnimSegment277->setDEF(CString("hanim_l_tarsal_distal_phalanx_5"));
Transform* Transform278 = new Transform();
Transform278->setTranslation(new float[3]{0.34,-1.05,0});
Shape* Shape279 = new Shape();
Shape279->setUSE(CString("HAnimJointShape"));
Transform278->addChild(Shape279);

HAnimSegment277->addChild(Transform278);

Shape* Shape280 = new Shape();
Appearance* Appearance281 = new Appearance();
Material* Material282 = new Material();
Material282->setEmissiveColor(new float[3]{1,1,1});
Appearance281->addChild(Material282);

Shape280->addChild(Appearance281);

IndexedLineSet* IndexedLineSet283 = new IndexedLineSet();
IndexedLineSet283->setDEF(CString("tiptoe_l_tarsal_distal_interphalangeal_5"));
IndexedLineSet283->setCoordIndex(new int32_t[2]{0,1}, 2);
Coordinate* Coordinate284 = new Coordinate();
Coordinate284->setPoint(new float[6]{0.34,-1.05,0,0.34,-1.08,0}, 6);
IndexedLineSet283->addChild(Coordinate284);

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
HAnimJoint285->setUSE(CString("hanim_humanoid_root"));
HAnimHumanoid24->addChild(HAnimJoint285);

HAnimJoint* HAnimJoint286 = new HAnimJoint();
HAnimJoint286->setUSE(CString("hanim_l_calcaneocuboid"));
HAnimHumanoid24->addChild(HAnimJoint286);

HAnimJoint* HAnimJoint287 = new HAnimJoint();
HAnimJoint287->setUSE(CString("hanim_l_cuneonavicular_1"));
HAnimHumanoid24->addChild(HAnimJoint287);

HAnimJoint* HAnimJoint288 = new HAnimJoint();
HAnimJoint288->setUSE(CString("hanim_l_cuneonavicular_2"));
HAnimHumanoid24->addChild(HAnimJoint288);

HAnimJoint* HAnimJoint289 = new HAnimJoint();
HAnimJoint289->setUSE(CString("hanim_l_cuneonavicular_3"));
HAnimHumanoid24->addChild(HAnimJoint289);

HAnimJoint* HAnimJoint290 = new HAnimJoint();
HAnimJoint290->setUSE(CString("hanim_l_metatarsophalangeal_1"));
HAnimHumanoid24->addChild(HAnimJoint290);

HAnimJoint* HAnimJoint291 = new HAnimJoint();
HAnimJoint291->setUSE(CString("hanim_l_metatarsophalangeal_2"));
HAnimHumanoid24->addChild(HAnimJoint291);

HAnimJoint* HAnimJoint292 = new HAnimJoint();
HAnimJoint292->setUSE(CString("hanim_l_metatarsophalangeal_3"));
HAnimHumanoid24->addChild(HAnimJoint292);

HAnimJoint* HAnimJoint293 = new HAnimJoint();
HAnimJoint293->setUSE(CString("hanim_l_metatarsophalangeal_4"));
HAnimHumanoid24->addChild(HAnimJoint293);

HAnimJoint* HAnimJoint294 = new HAnimJoint();
HAnimJoint294->setUSE(CString("hanim_l_metatarsophalangeal_5"));
HAnimHumanoid24->addChild(HAnimJoint294);

HAnimJoint* HAnimJoint295 = new HAnimJoint();
HAnimJoint295->setUSE(CString("hanim_l_talocalcaneonavicular"));
HAnimHumanoid24->addChild(HAnimJoint295);

HAnimJoint* HAnimJoint296 = new HAnimJoint();
HAnimJoint296->setUSE(CString("hanim_l_talocrural"));
HAnimHumanoid24->addChild(HAnimJoint296);

HAnimJoint* HAnimJoint297 = new HAnimJoint();
HAnimJoint297->setUSE(CString("hanim_l_tarsal_distal_interphalangeal_2"));
HAnimHumanoid24->addChild(HAnimJoint297);

HAnimJoint* HAnimJoint298 = new HAnimJoint();
HAnimJoint298->setUSE(CString("hanim_l_tarsal_distal_interphalangeal_3"));
HAnimHumanoid24->addChild(HAnimJoint298);

HAnimJoint* HAnimJoint299 = new HAnimJoint();
HAnimJoint299->setUSE(CString("hanim_l_tarsal_distal_interphalangeal_4"));
HAnimHumanoid24->addChild(HAnimJoint299);

HAnimJoint* HAnimJoint300 = new HAnimJoint();
HAnimJoint300->setUSE(CString("hanim_l_tarsal_distal_interphalangeal_5"));
HAnimHumanoid24->addChild(HAnimJoint300);

HAnimJoint* HAnimJoint301 = new HAnimJoint();
HAnimJoint301->setUSE(CString("hanim_l_tarsal_interphalangeal_1"));
HAnimHumanoid24->addChild(HAnimJoint301);

HAnimJoint* HAnimJoint302 = new HAnimJoint();
HAnimJoint302->setUSE(CString("hanim_l_tarsal_proximal_interphalangeal_2"));
HAnimHumanoid24->addChild(HAnimJoint302);

HAnimJoint* HAnimJoint303 = new HAnimJoint();
HAnimJoint303->setUSE(CString("hanim_l_tarsal_proximal_interphalangeal_3"));
HAnimHumanoid24->addChild(HAnimJoint303);

HAnimJoint* HAnimJoint304 = new HAnimJoint();
HAnimJoint304->setUSE(CString("hanim_l_tarsal_proximal_interphalangeal_4"));
HAnimHumanoid24->addChild(HAnimJoint304);

HAnimJoint* HAnimJoint305 = new HAnimJoint();
HAnimJoint305->setUSE(CString("hanim_l_tarsal_proximal_interphalangeal_5"));
HAnimHumanoid24->addChild(HAnimJoint305);

HAnimJoint* HAnimJoint306 = new HAnimJoint();
HAnimJoint306->setUSE(CString("hanim_l_tarsometatarsal_1"));
HAnimHumanoid24->addChild(HAnimJoint306);

HAnimJoint* HAnimJoint307 = new HAnimJoint();
HAnimJoint307->setUSE(CString("hanim_l_tarsometatarsal_2"));
HAnimHumanoid24->addChild(HAnimJoint307);

HAnimJoint* HAnimJoint308 = new HAnimJoint();
HAnimJoint308->setUSE(CString("hanim_l_tarsometatarsal_3"));
HAnimHumanoid24->addChild(HAnimJoint308);

HAnimJoint* HAnimJoint309 = new HAnimJoint();
HAnimJoint309->setUSE(CString("hanim_l_tarsometatarsal_4"));
HAnimHumanoid24->addChild(HAnimJoint309);

HAnimJoint* HAnimJoint310 = new HAnimJoint();
HAnimJoint310->setUSE(CString("hanim_l_tarsometatarsal_5"));
HAnimHumanoid24->addChild(HAnimJoint310);

HAnimJoint* HAnimJoint311 = new HAnimJoint();
HAnimJoint311->setUSE(CString("hanim_l_transversetarsal"));
HAnimHumanoid24->addChild(HAnimJoint311);

HAnimSegment* HAnimSegment312 = new HAnimSegment();
HAnimSegment312->setUSE(CString("hanim_l_calcaneus"));
HAnimHumanoid24->setSegments(HAnimSegment312);

HAnimSegment* HAnimSegment313 = new HAnimSegment();
HAnimSegment313->setUSE(CString("hanim_l_cuboid"));
HAnimHumanoid24->setSegments(HAnimSegment313);

HAnimSegment* HAnimSegment314 = new HAnimSegment();
HAnimSegment314->setUSE(CString("hanim_l_cuneiform_1"));
HAnimHumanoid24->setSegments(HAnimSegment314);

HAnimSegment* HAnimSegment315 = new HAnimSegment();
HAnimSegment315->setUSE(CString("hanim_l_cuneiform_2"));
HAnimHumanoid24->setSegments(HAnimSegment315);

HAnimSegment* HAnimSegment316 = new HAnimSegment();
HAnimSegment316->setUSE(CString("hanim_l_cuneiform_3"));
HAnimHumanoid24->setSegments(HAnimSegment316);

HAnimSegment* HAnimSegment317 = new HAnimSegment();
HAnimSegment317->setUSE(CString("hanim_l_metatarsal_1"));
HAnimHumanoid24->setSegments(HAnimSegment317);

HAnimSegment* HAnimSegment318 = new HAnimSegment();
HAnimSegment318->setUSE(CString("hanim_l_metatarsal_2"));
HAnimHumanoid24->setSegments(HAnimSegment318);

HAnimSegment* HAnimSegment319 = new HAnimSegment();
HAnimSegment319->setUSE(CString("hanim_l_metatarsal_3"));
HAnimHumanoid24->setSegments(HAnimSegment319);

HAnimSegment* HAnimSegment320 = new HAnimSegment();
HAnimSegment320->setUSE(CString("hanim_l_metatarsal_4"));
HAnimHumanoid24->setSegments(HAnimSegment320);

HAnimSegment* HAnimSegment321 = new HAnimSegment();
HAnimSegment321->setUSE(CString("hanim_l_metatarsal_5"));
HAnimHumanoid24->setSegments(HAnimSegment321);

HAnimSegment* HAnimSegment322 = new HAnimSegment();
HAnimSegment322->setUSE(CString("hanim_l_navicular"));
HAnimHumanoid24->setSegments(HAnimSegment322);

HAnimSegment* HAnimSegment323 = new HAnimSegment();
HAnimSegment323->setUSE(CString("hanim_l_talus"));
HAnimHumanoid24->setSegments(HAnimSegment323);

HAnimSegment* HAnimSegment324 = new HAnimSegment();
HAnimSegment324->setUSE(CString("hanim_l_tarsal_distal_phalanx_1"));
HAnimHumanoid24->setSegments(HAnimSegment324);

HAnimSegment* HAnimSegment325 = new HAnimSegment();
HAnimSegment325->setUSE(CString("hanim_l_tarsal_distal_phalanx_2"));
HAnimHumanoid24->setSegments(HAnimSegment325);

HAnimSegment* HAnimSegment326 = new HAnimSegment();
HAnimSegment326->setUSE(CString("hanim_l_tarsal_distal_phalanx_3"));
HAnimHumanoid24->setSegments(HAnimSegment326);

HAnimSegment* HAnimSegment327 = new HAnimSegment();
HAnimSegment327->setUSE(CString("hanim_l_tarsal_distal_phalanx_4"));
HAnimHumanoid24->setSegments(HAnimSegment327);

HAnimSegment* HAnimSegment328 = new HAnimSegment();
HAnimSegment328->setUSE(CString("hanim_l_tarsal_distal_phalanx_5"));
HAnimHumanoid24->setSegments(HAnimSegment328);

HAnimSegment* HAnimSegment329 = new HAnimSegment();
HAnimSegment329->setUSE(CString("hanim_l_tarsal_middle_phalanx_2"));
HAnimHumanoid24->setSegments(HAnimSegment329);

HAnimSegment* HAnimSegment330 = new HAnimSegment();
HAnimSegment330->setUSE(CString("hanim_l_tarsal_middle_phalanx_3"));
HAnimHumanoid24->setSegments(HAnimSegment330);

HAnimSegment* HAnimSegment331 = new HAnimSegment();
HAnimSegment331->setUSE(CString("hanim_l_tarsal_middle_phalanx_4"));
HAnimHumanoid24->setSegments(HAnimSegment331);

HAnimSegment* HAnimSegment332 = new HAnimSegment();
HAnimSegment332->setUSE(CString("hanim_l_tarsal_middle_phalanx_5"));
HAnimHumanoid24->setSegments(HAnimSegment332);

HAnimSegment* HAnimSegment333 = new HAnimSegment();
HAnimSegment333->setUSE(CString("hanim_l_tarsal_proximal_phalanx_1"));
HAnimHumanoid24->setSegments(HAnimSegment333);

HAnimSegment* HAnimSegment334 = new HAnimSegment();
HAnimSegment334->setUSE(CString("hanim_l_tarsal_proximal_phalanx_2"));
HAnimHumanoid24->setSegments(HAnimSegment334);

HAnimSegment* HAnimSegment335 = new HAnimSegment();
HAnimSegment335->setUSE(CString("hanim_l_tarsal_proximal_phalanx_3"));
HAnimHumanoid24->setSegments(HAnimSegment335);

HAnimSegment* HAnimSegment336 = new HAnimSegment();
HAnimSegment336->setUSE(CString("hanim_l_tarsal_proximal_phalanx_4"));
HAnimHumanoid24->setSegments(HAnimSegment336);

HAnimSegment* HAnimSegment337 = new HAnimSegment();
HAnimSegment337->setUSE(CString("hanim_l_tarsal_proximal_phalanx_5"));
HAnimHumanoid24->setSegments(HAnimSegment337);

Scene22->addChild(HAnimHumanoid24);

X3D0->setScene(Scene22);

}
