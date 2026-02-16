#ifndef WIN32
#define WINAPI
#define AFX_EXT_CLASS
#define EXPORT32
#define WINGDIAPI
#define APIENTRY
#endif
#define FALSE false
#define TRUE true
#define BOOL bool
#define False false
#define True true
#include "C:/Users/jcarl/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/pch.h"
#include "C:/Users/jcarl/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/framework.h"
#include "C:/Users/jcarl/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/glut.h"
#include "C:/Users/jcarl/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/X3DLib.h"
int main(int argc, char ** argv) {
X3D& X3D0 =  X3D();
X3D0.setProfile(CString("Immersive"));
X3D0.setVersion(CString("4.0"));
head& head1 =  head();
component& component2 =  component();
component2.setName(CString("HAnim"));
component2.setLevel(1);
head1.addChild(&component2);

meta& meta3 =  meta();
meta3.setName(CString("title"));
meta3.setContent(CString("HAnimModelFootLeft.x3d"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("description"));
meta4.setContent(CString("Left foot, using high-fidelity definitions for HAnim version 2.0"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("creator"));
meta5.setContent(CString("Kwan-Hee YOO, Don Brutzman and Joe Williams"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("created"));
meta6.setContent(CString("26 January 2015"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(CString("modified"));
meta7.setContent(CString("23 December 2021"));
head1.addMeta(&meta7);

meta& meta8 =  meta();
meta8.setName(CString("warning"));
meta8.setContent(CString("not yet to scale"));
head1.addMeta(&meta8);

meta& meta9 =  meta();
meta9.setName(CString("warning"));
meta9.setContent(CString("TODO will X3D HAnim component add a new level to support LOA-4 functionality?"));
head1.addMeta(&meta9);

meta& meta10 =  meta();
meta10.setName(CString("info"));
meta10.setContent(CString("TODO describe how to compute and apply offsets for center values whenever attaching this appendage to a body"));
head1.addMeta(&meta10);

meta& meta11 =  meta();
meta11.setName(CString("reference"));
meta11.setContent(CString("https://www.web3d.org/working-groups/humanoid-animation-HAnim"));
head1.addMeta(&meta11);

meta& meta12 =  meta();
meta12.setName(CString("reference"));
meta12.setContent(CString("https://www.web3d.org/documents/specifications/19774/V2.0"));
head1.addMeta(&meta12);

meta& meta13 =  meta();
meta13.setName(CString("reference"));
meta13.setContent(CString("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#TheFeet"));
head1.addMeta(&meta13);

meta& meta14 =  meta();
meta14.setName(CString("reference"));
meta14.setContent(CString("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#f-FootJoints"));
head1.addMeta(&meta14);

meta& meta15 =  meta();
meta15.setName(CString("reference"));
meta15.setContent(CString("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#Hierarchy4"));
head1.addMeta(&meta15);

meta& meta16 =  meta();
meta16.setName(CString("reference"));
meta16.setContent(CString("https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19775-1v4-WD2/Part01/components/hanim.html"));
head1.addMeta(&meta16);

meta& meta17 =  meta();
meta17.setName(CString("subject"));
meta17.setContent(CString("X3D HAnim humanoid animation"));
head1.addMeta(&meta17);

meta& meta18 =  meta();
meta18.setName(CString("TODO"));
meta18.setContent(CString("Integrate and confirm Segment/Joint names, Viewpoints."));
head1.addMeta(&meta18);

meta& meta19 =  meta();
meta19.setName(CString("identifier"));
meta19.setContent(CString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelFootLeft.x3d"));
head1.addMeta(&meta19);

meta& meta20 =  meta();
meta20.setName(CString("generator"));
meta20.setContent(CString("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"));
head1.addMeta(&meta20);

meta& meta21 =  meta();
meta21.setName(CString("license"));
meta21.setContent(CString("../license.html"));
head1.addMeta(&meta21);

X3D0.setHead(&head1);

Scene& Scene22 =  Scene();
WorldInfo& WorldInfo23 =  WorldInfo();
WorldInfo23.setTitle(CString("HAnimModelFootLeft.x3d"));
Scene22.addChild(&WorldInfo23);

HAnimHumanoid& HAnimHumanoid24 =  HAnimHumanoid();
HAnimHumanoid24.X3DNode::setName(CString("Foot_Left"));
HAnimHumanoid24.setDEF(CString("hanim_Foot_Left"));
HAnimHumanoid24.setLoa(4);
HAnimHumanoid24.setVersion(CString("2.0"));
//original HAnimHumanoid info='\"authorName=Kwan-Hee YOO, Don Brutzman and Joe Williams\"'
MetadataSet& MetadataSet25 =  MetadataSet();
MetadataSet25.X3DNode::setName(CString("HAnimHumanoid.info"));
MetadataSet25.X3DNode::setReference(CString("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid"));
MetadataString& MetadataString26 =  MetadataString();
MetadataString26.X3DNode::setName(CString("authorName"));
MetadataString26.setValue(new CString[]{CString("Kwan-Hee YOO, Don Brutzman and Joe Williams")}, 1);
MetadataSet25.setValue((X3DNode *)&MetadataString26);

HAnimHumanoid24.setMetadata(&MetadataSet25);

HAnimJoint& HAnimJoint27 =  HAnimJoint();
HAnimJoint27.X3DNode::setName(CString("humanoid_root"));
HAnimJoint27.setDEF(CString("hanim_humanoid_root"));
HAnimJoint27.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint27.setLlimit(new float[]{0,0,0}, 3);
//Might consider putting a HAnimSegment here, but that doesn't help with re-use of this foot model
HAnimJoint& HAnimJoint28 =  HAnimJoint();
HAnimJoint28.X3DNode::setName(CString("l_talocrural"));
HAnimJoint28.setDEF(CString("hanim_l_talocrural"));
HAnimJoint28.setDescription(CString("connection joint of foot to leg above"));
HAnimJoint28.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint28.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment29 =  HAnimSegment();
HAnimSegment29.X3DNode::setName(CString("l_talus"));
HAnimSegment29.setDEF(CString("hanim_l_talus"));
Transform& Transform30 =  Transform();
Shape& Shape31 =  Shape();
Shape31.setDEF(CString("HAnimJointShape"));
Sphere& Sphere32 =  Sphere();
Sphere32.setRadius(0.025);
Shape31.setGeometry(&Sphere32);

Appearance& Appearance33 =  Appearance();
Appearance33.setDEF(CString("HAnimJointAppearance"));
Material& Material34 =  Material();
Material34.setDiffuseColor(new float[]{0,0,1});
Appearance33.addChild(&Material34);

Shape31.addChild(&Appearance33);

Transform30.addChild(&Shape31);

HAnimSegment29.addChild(&Transform30);

Shape& Shape35 =  Shape();
Appearance& Appearance36 =  Appearance();
Material& Material37 =  Material();
Material37.setEmissiveColor(new float[]{1,1,1});
Appearance36.addChild(&Material37);

Shape35.addChild(&Appearance36);

IndexedLineSet& IndexedLineSet38 =  IndexedLineSet();
IndexedLineSet38.setDEF(CString("TCtoTCN"));
IndexedLineSet38.setCoordIndex(new int32_t[]{0,1}, 2);
Coordinate& Coordinate39 =  Coordinate();
Coordinate39.setPoint(new float[]{0,0,0,0,-0.3,0}, 6);
IndexedLineSet38.setCoord(&Coordinate39);

Shape35.setGeometry(&IndexedLineSet38);

HAnimSegment29.addChild(&Shape35);

Shape& Shape40 =  Shape();
Appearance& Appearance41 =  Appearance();
Material& Material42 =  Material();
Material42.setEmissiveColor(new float[]{1,1,1});
Appearance41.addChild(&Material42);

Shape40.addChild(&Appearance41);

IndexedLineSet& IndexedLineSet43 =  IndexedLineSet();
IndexedLineSet43.setDEF(CString("TCtoCC"));
IndexedLineSet43.setCoordIndex(new int32_t[]{0,1}, 2);
Coordinate& Coordinate44 =  Coordinate();
Coordinate44.setPoint(new float[]{0,0,0,0.2,0.3,0}, 6);
IndexedLineSet43.setCoord(&Coordinate44);

Shape40.setGeometry(&IndexedLineSet43);

HAnimSegment29.addChild(&Shape40);

HAnimJoint28.addChildren(&HAnimSegment29);

//TCN
HAnimJoint& HAnimJoint45 =  HAnimJoint();
HAnimJoint45.X3DNode::setName(CString("l_talocalcaneonavicular"));
HAnimJoint45.setDEF(CString("hanim_l_talocalcaneonavicular"));
HAnimJoint45.setCenter(new float[]{0,-0.3,0});
HAnimJoint45.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint45.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment46 =  HAnimSegment();
HAnimSegment46.X3DNode::setName(CString("l_navicular"));
HAnimSegment46.setDEF(CString("hanim_l_navicular"));
Transform& Transform47 =  Transform();
Transform47.setTranslation(new float[]{0,-0.3,0});
Shape& Shape48 =  Shape();
Shape48.setUSE(CString("HAnimJointShape"));
Transform47.addChild(&Shape48);

HAnimSegment46.addChild(&Transform47);

Shape& Shape49 =  Shape();
Appearance& Appearance50 =  Appearance();
Material& Material51 =  Material();
Material51.setEmissiveColor(new float[]{1,1,1});
Appearance50.addChild(&Material51);

Shape49.addChild(&Appearance50);

IndexedLineSet& IndexedLineSet52 =  IndexedLineSet();
IndexedLineSet52.setDEF(CString("TCNtoCN1"));
IndexedLineSet52.setCoordIndex(new int32_t[]{0,1}, 2);
Coordinate& Coordinate53 =  Coordinate();
Coordinate53.setPoint(new float[]{0,-0.3,0,-0.1,-0.45,0}, 6);
IndexedLineSet52.setCoord(&Coordinate53);

Shape49.setGeometry(&IndexedLineSet52);

HAnimSegment46.addChild(&Shape49);

Shape& Shape54 =  Shape();
Appearance& Appearance55 =  Appearance();
Material& Material56 =  Material();
Material56.setEmissiveColor(new float[]{1,1,1});
Appearance55.addChild(&Material56);

Shape54.addChild(&Appearance55);

IndexedLineSet& IndexedLineSet57 =  IndexedLineSet();
IndexedLineSet57.setDEF(CString("TCNtoCN2"));
IndexedLineSet57.setCoordIndex(new int32_t[]{0,1}, 2);
Coordinate& Coordinate58 =  Coordinate();
Coordinate58.setPoint(new float[]{0,-0.3,0,0,-0.45,0}, 6);
IndexedLineSet57.setCoord(&Coordinate58);

Shape54.setGeometry(&IndexedLineSet57);

HAnimSegment46.addChild(&Shape54);

Shape& Shape59 =  Shape();
Appearance& Appearance60 =  Appearance();
Material& Material61 =  Material();
Material61.setEmissiveColor(new float[]{1,1,1});
Appearance60.addChild(&Material61);

Shape59.addChild(&Appearance60);

IndexedLineSet& IndexedLineSet62 =  IndexedLineSet();
IndexedLineSet62.setDEF(CString("TCNtoCN3"));
IndexedLineSet62.setCoordIndex(new int32_t[]{0,1}, 2);
Coordinate& Coordinate63 =  Coordinate();
Coordinate63.setPoint(new float[]{0,-0.3,0,0.1,-0.4,0}, 6);
IndexedLineSet62.setCoord(&Coordinate63);

Shape59.setGeometry(&IndexedLineSet62);

HAnimSegment46.addChild(&Shape59);

HAnimJoint45.addChildren(&HAnimSegment46);

//CN1
HAnimJoint& HAnimJoint64 =  HAnimJoint();
HAnimJoint64.X3DNode::setName(CString("l_cuneonavicular_1"));
HAnimJoint64.setDEF(CString("hanim_l_cuneonavicular_1"));
HAnimJoint64.setCenter(new float[]{-0.1,-0.45,0});
HAnimJoint64.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint64.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment65 =  HAnimSegment();
HAnimSegment65.X3DNode::setName(CString("l_cuneiform_1"));
HAnimSegment65.setDEF(CString("hanim_l_cuneiform_1"));
Transform& Transform66 =  Transform();
Transform66.setTranslation(new float[]{-0.1,-0.45,0});
Shape& Shape67 =  Shape();
Shape67.setUSE(CString("HAnimJointShape"));
Transform66.addChild(&Shape67);

HAnimSegment65.addChild(&Transform66);

Shape& Shape68 =  Shape();
Appearance& Appearance69 =  Appearance();
Material& Material70 =  Material();
Material70.setEmissiveColor(new float[]{1,1,1});
Appearance69.addChild(&Material70);

Shape68.addChild(&Appearance69);

IndexedLineSet& IndexedLineSet71 =  IndexedLineSet();
IndexedLineSet71.setDEF(CString("CN1toTMT1"));
IndexedLineSet71.setCoordIndex(new int32_t[]{0,1}, 2);
Coordinate& Coordinate72 =  Coordinate();
Coordinate72.setPoint(new float[]{-0.1,-0.45,0,-0.1,-0.6,0}, 6);
IndexedLineSet71.setCoord(&Coordinate72);

Shape68.setGeometry(&IndexedLineSet71);

HAnimSegment65.addChild(&Shape68);

HAnimJoint64.addChildren(&HAnimSegment65);

HAnimJoint& HAnimJoint73 =  HAnimJoint();
HAnimJoint73.X3DNode::setName(CString("l_tarsometatarsal_1"));
HAnimJoint73.setDEF(CString("hanim_l_tarsometatarsal_1"));
HAnimJoint73.setCenter(new float[]{-0.1,-0.6,0});
HAnimJoint73.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint73.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment74 =  HAnimSegment();
HAnimSegment74.X3DNode::setName(CString("l_metatarsal_1"));
HAnimSegment74.setDEF(CString("hanim_l_metatarsal_1"));
Transform& Transform75 =  Transform();
Transform75.setTranslation(new float[]{-0.1,-0.6,0});
Shape& Shape76 =  Shape();
Shape76.setUSE(CString("HAnimJointShape"));
Transform75.addChild(&Shape76);

HAnimSegment74.addChild(&Transform75);

Shape& Shape77 =  Shape();
Appearance& Appearance78 =  Appearance();
Material& Material79 =  Material();
Material79.setEmissiveColor(new float[]{1,1,1});
Appearance78.addChild(&Material79);

Shape77.addChild(&Appearance78);

IndexedLineSet& IndexedLineSet80 =  IndexedLineSet();
IndexedLineSet80.setDEF(CString("TMT1toMTP1"));
IndexedLineSet80.setCoordIndex(new int32_t[]{0,1}, 2);
Coordinate& Coordinate81 =  Coordinate();
Coordinate81.setPoint(new float[]{-0.1,-0.6,0,-0.1,-0.9,0}, 6);
IndexedLineSet80.setCoord(&Coordinate81);

Shape77.setGeometry(&IndexedLineSet80);

HAnimSegment74.addChild(&Shape77);

HAnimJoint73.addChildren(&HAnimSegment74);

HAnimJoint& HAnimJoint82 =  HAnimJoint();
HAnimJoint82.X3DNode::setName(CString("l_metatarsophalangeal_1"));
HAnimJoint82.setDEF(CString("hanim_l_metatarsophalangeal_1"));
HAnimJoint82.setCenter(new float[]{-0.1,-0.9,0});
HAnimJoint82.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint82.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment83 =  HAnimSegment();
HAnimSegment83.X3DNode::setName(CString("l_tarsal_proximal_phalanx_1"));
HAnimSegment83.setDEF(CString("hanim_l_tarsal_proximal_phalanx_1"));
Transform& Transform84 =  Transform();
Transform84.setTranslation(new float[]{-0.1,-0.9,0});
Shape& Shape85 =  Shape();
Shape85.setUSE(CString("HAnimJointShape"));
Transform84.addChild(&Shape85);

HAnimSegment83.addChild(&Transform84);

Shape& Shape86 =  Shape();
Appearance& Appearance87 =  Appearance();
Material& Material88 =  Material();
Material88.setEmissiveColor(new float[]{1,1,1});
Appearance87.addChild(&Material88);

Shape86.addChild(&Appearance87);

IndexedLineSet& IndexedLineSet89 =  IndexedLineSet();
IndexedLineSet89.setDEF(CString("MTP1toIP1"));
IndexedLineSet89.setCoordIndex(new int32_t[]{0,1}, 2);
Coordinate& Coordinate90 =  Coordinate();
Coordinate90.setPoint(new float[]{-0.1,-0.9,0,-0.1,-1.05,0}, 6);
IndexedLineSet89.setCoord(&Coordinate90);

Shape86.setGeometry(&IndexedLineSet89);

HAnimSegment83.addChild(&Shape86);

HAnimJoint82.addChildren(&HAnimSegment83);

HAnimJoint& HAnimJoint91 =  HAnimJoint();
HAnimJoint91.X3DNode::setName(CString("l_tarsal_interphalangeal_1"));
HAnimJoint91.setDEF(CString("hanim_l_tarsal_interphalangeal_1"));
HAnimJoint91.setCenter(new float[]{-0.1,-1.05,0});
HAnimJoint91.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint91.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment92 =  HAnimSegment();
HAnimSegment92.X3DNode::setName(CString("l_tarsal_distal_phalanx_1"));
HAnimSegment92.setDEF(CString("hanim_l_tarsal_distal_phalanx_1"));
Transform& Transform93 =  Transform();
Transform93.setTranslation(new float[]{-0.1,-1.05,0});
Shape& Shape94 =  Shape();
Shape94.setUSE(CString("HAnimJointShape"));
Transform93.addChild(&Shape94);

HAnimSegment92.addChild(&Transform93);

Shape& Shape95 =  Shape();
Appearance& Appearance96 =  Appearance();
Material& Material97 =  Material();
Material97.setEmissiveColor(new float[]{1,1,1});
Appearance96.addChild(&Material97);

Shape95.addChild(&Appearance96);

IndexedLineSet& IndexedLineSet98 =  IndexedLineSet();
IndexedLineSet98.setDEF(CString("tiptoe_l_tarsal_distal_interphalangeal_1"));
IndexedLineSet98.setCoordIndex(new int32_t[]{0,1}, 2);
Coordinate& Coordinate99 =  Coordinate();
Coordinate99.setPoint(new float[]{-0.1,-1.05,0,-0.1,-1.1,0}, 6);
IndexedLineSet98.setCoord(&Coordinate99);

Shape95.setGeometry(&IndexedLineSet98);

HAnimSegment92.addChild(&Shape95);

HAnimJoint91.addChildren(&HAnimSegment92);

HAnimJoint82.addChildren(&HAnimJoint91);

HAnimJoint73.addChildren(&HAnimJoint82);

HAnimJoint64.addChildren(&HAnimJoint73);

HAnimJoint45.addChildren(&HAnimJoint64);

//CN2
HAnimJoint& HAnimJoint100 =  HAnimJoint();
HAnimJoint100.X3DNode::setName(CString("l_cuneonavicular_2"));
HAnimJoint100.setDEF(CString("hanim_l_cuneonavicular_2"));
HAnimJoint100.setCenter(new float[]{0,-0.45,0});
HAnimJoint100.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint100.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment101 =  HAnimSegment();
HAnimSegment101.X3DNode::setName(CString("l_cuneiform_2"));
HAnimSegment101.setDEF(CString("hanim_l_cuneiform_2"));
Transform& Transform102 =  Transform();
Transform102.setTranslation(new float[]{0,-0.45,0});
Shape& Shape103 =  Shape();
Shape103.setUSE(CString("HAnimJointShape"));
Transform102.addChild(&Shape103);

HAnimSegment101.addChild(&Transform102);

Shape& Shape104 =  Shape();
Appearance& Appearance105 =  Appearance();
Material& Material106 =  Material();
Material106.setEmissiveColor(new float[]{1,1,1});
Appearance105.addChild(&Material106);

Shape104.addChild(&Appearance105);

IndexedLineSet& IndexedLineSet107 =  IndexedLineSet();
IndexedLineSet107.setDEF(CString("CN2toTMT2"));
IndexedLineSet107.setCoordIndex(new int32_t[]{0,1}, 2);
Coordinate& Coordinate108 =  Coordinate();
Coordinate108.setPoint(new float[]{0,-0.45,0,0.05,-0.6,0}, 6);
IndexedLineSet107.setCoord(&Coordinate108);

Shape104.setGeometry(&IndexedLineSet107);

HAnimSegment101.addChild(&Shape104);

HAnimJoint100.addChildren(&HAnimSegment101);

HAnimJoint& HAnimJoint109 =  HAnimJoint();
HAnimJoint109.X3DNode::setName(CString("l_tarsometatarsal_2"));
HAnimJoint109.setDEF(CString("hanim_l_tarsometatarsal_2"));
HAnimJoint109.setCenter(new float[]{0.05,-0.6,0});
HAnimJoint109.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint109.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment110 =  HAnimSegment();
HAnimSegment110.X3DNode::setName(CString("l_metatarsal_2"));
HAnimSegment110.setDEF(CString("hanim_l_metatarsal_2"));
Transform& Transform111 =  Transform();
Transform111.setTranslation(new float[]{0.05,-0.6,0});
Shape& Shape112 =  Shape();
Shape112.setUSE(CString("HAnimJointShape"));
Transform111.addChild(&Shape112);

HAnimSegment110.addChild(&Transform111);

Shape& Shape113 =  Shape();
Appearance& Appearance114 =  Appearance();
Material& Material115 =  Material();
Material115.setEmissiveColor(new float[]{1,1,1});
Appearance114.addChild(&Material115);

Shape113.addChild(&Appearance114);

IndexedLineSet& IndexedLineSet116 =  IndexedLineSet();
IndexedLineSet116.setDEF(CString("TMT2toMTP2"));
IndexedLineSet116.setCoordIndex(new int32_t[]{0,1}, 2);
Coordinate& Coordinate117 =  Coordinate();
Coordinate117.setPoint(new float[]{0.05,-0.6,0,0.05,-0.9,0}, 6);
IndexedLineSet116.setCoord(&Coordinate117);

Shape113.setGeometry(&IndexedLineSet116);

HAnimSegment110.addChild(&Shape113);

HAnimJoint109.addChildren(&HAnimSegment110);

HAnimJoint& HAnimJoint118 =  HAnimJoint();
HAnimJoint118.X3DNode::setName(CString("l_metatarsophalangeal_2"));
HAnimJoint118.setDEF(CString("hanim_l_metatarsophalangeal_2"));
HAnimJoint118.setCenter(new float[]{0.05,-0.9,0});
HAnimJoint118.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint118.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment119 =  HAnimSegment();
HAnimSegment119.X3DNode::setName(CString("l_tarsal_proximal_phalanx_2"));
HAnimSegment119.setDEF(CString("hanim_l_tarsal_proximal_phalanx_2"));
Transform& Transform120 =  Transform();
Transform120.setTranslation(new float[]{0.05,-0.9,0});
Shape& Shape121 =  Shape();
Shape121.setUSE(CString("HAnimJointShape"));
Transform120.addChild(&Shape121);

HAnimSegment119.addChild(&Transform120);

Shape& Shape122 =  Shape();
Appearance& Appearance123 =  Appearance();
Material& Material124 =  Material();
Material124.setEmissiveColor(new float[]{1,1,1});
Appearance123.addChild(&Material124);

Shape122.addChild(&Appearance123);

IndexedLineSet& IndexedLineSet125 =  IndexedLineSet();
IndexedLineSet125.setDEF(CString("MTP2toPIP2"));
IndexedLineSet125.setCoordIndex(new int32_t[]{0,1}, 2);
Coordinate& Coordinate126 =  Coordinate();
Coordinate126.setPoint(new float[]{0.05,-0.9,0,0.05,-1.05,0}, 6);
IndexedLineSet125.setCoord(&Coordinate126);

Shape122.setGeometry(&IndexedLineSet125);

HAnimSegment119.addChild(&Shape122);

HAnimJoint118.addChildren(&HAnimSegment119);

HAnimJoint& HAnimJoint127 =  HAnimJoint();
HAnimJoint127.X3DNode::setName(CString("l_tarsal_proximal_interphalangeal_2"));
HAnimJoint127.setDEF(CString("hanim_l_tarsal_proximal_interphalangeal_2"));
HAnimJoint127.setCenter(new float[]{0.05,-1.05,0});
HAnimJoint127.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint127.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment128 =  HAnimSegment();
HAnimSegment128.X3DNode::setName(CString("l_tarsal_middle_phalanx_2"));
HAnimSegment128.setDEF(CString("hanim_l_tarsal_middle_phalanx_2"));
Transform& Transform129 =  Transform();
Transform129.setTranslation(new float[]{0.05,-1.05,0});
Shape& Shape130 =  Shape();
Shape130.setUSE(CString("HAnimJointShape"));
Transform129.addChild(&Shape130);

HAnimSegment128.addChild(&Transform129);

Shape& Shape131 =  Shape();
Appearance& Appearance132 =  Appearance();
Material& Material133 =  Material();
Material133.setEmissiveColor(new float[]{1,1,1});
Appearance132.addChild(&Material133);

Shape131.addChild(&Appearance132);

IndexedLineSet& IndexedLineSet134 =  IndexedLineSet();
IndexedLineSet134.setDEF(CString("PIP2toDIP2"));
IndexedLineSet134.setCoordIndex(new int32_t[]{0,1}, 2);
Coordinate& Coordinate135 =  Coordinate();
Coordinate135.setPoint(new float[]{0.05,-1.05,0,0.05,-1.12,0}, 6);
IndexedLineSet134.setCoord(&Coordinate135);

Shape131.setGeometry(&IndexedLineSet134);

HAnimSegment128.addChild(&Shape131);

HAnimJoint127.addChildren(&HAnimSegment128);

HAnimJoint& HAnimJoint136 =  HAnimJoint();
HAnimJoint136.X3DNode::setName(CString("l_tarsal_distal_interphalangeal_2"));
HAnimJoint136.setDEF(CString("hanim_l_tarsal_distal_interphalangeal_2"));
HAnimJoint136.setCenter(new float[]{0.05,-1.12,0});
HAnimJoint136.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint136.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment137 =  HAnimSegment();
HAnimSegment137.X3DNode::setName(CString("l_tarsal_distal_phalanx_2"));
HAnimSegment137.setDEF(CString("hanim_l_tarsal_distal_phalanx_2"));
Transform& Transform138 =  Transform();
Transform138.setTranslation(new float[]{0.05,-1.12,0});
Shape& Shape139 =  Shape();
Shape139.setUSE(CString("HAnimJointShape"));
Transform138.addChild(&Shape139);

HAnimSegment137.addChild(&Transform138);

Shape& Shape140 =  Shape();
Appearance& Appearance141 =  Appearance();
Material& Material142 =  Material();
Material142.setEmissiveColor(new float[]{1,1,1});
Appearance141.addChild(&Material142);

Shape140.addChild(&Appearance141);

IndexedLineSet& IndexedLineSet143 =  IndexedLineSet();
IndexedLineSet143.setDEF(CString("tiptoe_l_tarsal_distal_phalanx_2"));
IndexedLineSet143.setCoordIndex(new int32_t[]{0,1}, 2);
Coordinate& Coordinate144 =  Coordinate();
Coordinate144.setPoint(new float[]{0.05,-1.12,0,0.05,-1.16,0}, 6);
IndexedLineSet143.setCoord(&Coordinate144);

Shape140.setGeometry(&IndexedLineSet143);

HAnimSegment137.addChild(&Shape140);

HAnimJoint136.addChildren(&HAnimSegment137);

HAnimJoint127.addChildren(&HAnimJoint136);

HAnimJoint118.addChildren(&HAnimJoint127);

HAnimJoint109.addChildren(&HAnimJoint118);

HAnimJoint100.addChildren(&HAnimJoint109);

HAnimJoint45.addChildren(&HAnimJoint100);

//CN3
HAnimJoint& HAnimJoint145 =  HAnimJoint();
HAnimJoint145.X3DNode::setName(CString("l_cuneonavicular_3"));
HAnimJoint145.setDEF(CString("hanim_l_cuneonavicular_3"));
HAnimJoint145.setCenter(new float[]{0.1,-0.4,0});
HAnimJoint145.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint145.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment146 =  HAnimSegment();
HAnimSegment146.X3DNode::setName(CString("l_cuneiform_3"));
HAnimSegment146.setDEF(CString("hanim_l_cuneiform_3"));
Transform& Transform147 =  Transform();
Transform147.setTranslation(new float[]{0.1,-0.4,0});
Shape& Shape148 =  Shape();
Shape148.setUSE(CString("HAnimJointShape"));
Transform147.addChild(&Shape148);

HAnimSegment146.addChild(&Transform147);

Shape& Shape149 =  Shape();
Appearance& Appearance150 =  Appearance();
Material& Material151 =  Material();
Material151.setEmissiveColor(new float[]{1,1,1});
Appearance150.addChild(&Material151);

Shape149.addChild(&Appearance150);

IndexedLineSet& IndexedLineSet152 =  IndexedLineSet();
IndexedLineSet152.setDEF(CString("CN3toTMT3"));
IndexedLineSet152.setCoordIndex(new int32_t[]{0,1}, 2);
Coordinate& Coordinate153 =  Coordinate();
Coordinate153.setPoint(new float[]{0.1,-0.4,0,0.15,-0.6,0}, 6);
IndexedLineSet152.setCoord(&Coordinate153);

Shape149.setGeometry(&IndexedLineSet152);

HAnimSegment146.addChild(&Shape149);

HAnimJoint145.addChildren(&HAnimSegment146);

HAnimJoint& HAnimJoint154 =  HAnimJoint();
HAnimJoint154.X3DNode::setName(CString("l_tarsometatarsal_3"));
HAnimJoint154.setDEF(CString("hanim_l_tarsometatarsal_3"));
HAnimJoint154.setCenter(new float[]{0.15,-0.6,0});
HAnimJoint154.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint154.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment155 =  HAnimSegment();
HAnimSegment155.X3DNode::setName(CString("l_metatarsal_3"));
HAnimSegment155.setDEF(CString("hanim_l_metatarsal_3"));
Transform& Transform156 =  Transform();
Transform156.setTranslation(new float[]{0.15,-0.6,0});
Shape& Shape157 =  Shape();
Shape157.setUSE(CString("HAnimJointShape"));
Transform156.addChild(&Shape157);

HAnimSegment155.addChild(&Transform156);

Shape& Shape158 =  Shape();
Appearance& Appearance159 =  Appearance();
Material& Material160 =  Material();
Material160.setEmissiveColor(new float[]{1,1,1});
Appearance159.addChild(&Material160);

Shape158.addChild(&Appearance159);

IndexedLineSet& IndexedLineSet161 =  IndexedLineSet();
IndexedLineSet161.setDEF(CString("TMT3toMTP3"));
IndexedLineSet161.setCoordIndex(new int32_t[]{0,1}, 2);
Coordinate& Coordinate162 =  Coordinate();
Coordinate162.setPoint(new float[]{0.15,-0.6,0,0.15,-0.9,0}, 6);
IndexedLineSet161.setCoord(&Coordinate162);

Shape158.setGeometry(&IndexedLineSet161);

HAnimSegment155.addChild(&Shape158);

HAnimJoint154.addChildren(&HAnimSegment155);

HAnimJoint& HAnimJoint163 =  HAnimJoint();
HAnimJoint163.X3DNode::setName(CString("l_metatarsophalangeal_3"));
HAnimJoint163.setDEF(CString("hanim_l_metatarsophalangeal_3"));
HAnimJoint163.setCenter(new float[]{0.15,-0.9,0});
HAnimJoint163.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint163.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment164 =  HAnimSegment();
HAnimSegment164.X3DNode::setName(CString("l_tarsal_proximal_phalanx_3"));
HAnimSegment164.setDEF(CString("hanim_l_tarsal_proximal_phalanx_3"));
Transform& Transform165 =  Transform();
Transform165.setTranslation(new float[]{0.15,-0.9,0});
Shape& Shape166 =  Shape();
Shape166.setUSE(CString("HAnimJointShape"));
Transform165.addChild(&Shape166);

HAnimSegment164.addChild(&Transform165);

Shape& Shape167 =  Shape();
Appearance& Appearance168 =  Appearance();
Material& Material169 =  Material();
Material169.setEmissiveColor(new float[]{1,1,1});
Appearance168.addChild(&Material169);

Shape167.addChild(&Appearance168);

IndexedLineSet& IndexedLineSet170 =  IndexedLineSet();
IndexedLineSet170.setDEF(CString("MTP3toPIP3"));
IndexedLineSet170.setCoordIndex(new int32_t[]{0,1}, 2);
Coordinate& Coordinate171 =  Coordinate();
Coordinate171.setPoint(new float[]{0.15,-0.9,0,0.15,-1.05,0}, 6);
IndexedLineSet170.setCoord(&Coordinate171);

Shape167.setGeometry(&IndexedLineSet170);

HAnimSegment164.addChild(&Shape167);

HAnimJoint163.addChildren(&HAnimSegment164);

HAnimJoint& HAnimJoint172 =  HAnimJoint();
HAnimJoint172.X3DNode::setName(CString("l_tarsal_proximal_interphalangeal_3"));
HAnimJoint172.setDEF(CString("hanim_l_tarsal_proximal_interphalangeal_3"));
HAnimJoint172.setCenter(new float[]{0.15,-1.05,0});
HAnimJoint172.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint172.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment173 =  HAnimSegment();
HAnimSegment173.X3DNode::setName(CString("l_tarsal_middle_phalanx_3"));
HAnimSegment173.setDEF(CString("hanim_l_tarsal_middle_phalanx_3"));
Transform& Transform174 =  Transform();
Transform174.setTranslation(new float[]{0.15,-1.05,0});
Shape& Shape175 =  Shape();
Shape175.setUSE(CString("HAnimJointShape"));
Transform174.addChild(&Shape175);

HAnimSegment173.addChild(&Transform174);

Shape& Shape176 =  Shape();
Appearance& Appearance177 =  Appearance();
Material& Material178 =  Material();
Material178.setEmissiveColor(new float[]{1,1,1});
Appearance177.addChild(&Material178);

Shape176.addChild(&Appearance177);

IndexedLineSet& IndexedLineSet179 =  IndexedLineSet();
IndexedLineSet179.setDEF(CString("PIP3toDIP3"));
IndexedLineSet179.setCoordIndex(new int32_t[]{0,1}, 2);
Coordinate& Coordinate180 =  Coordinate();
Coordinate180.setPoint(new float[]{0.15,-1.05,0,0.15,-1.13,0}, 6);
IndexedLineSet179.setCoord(&Coordinate180);

Shape176.setGeometry(&IndexedLineSet179);

HAnimSegment173.addChild(&Shape176);

HAnimJoint172.addChildren(&HAnimSegment173);

HAnimJoint& HAnimJoint181 =  HAnimJoint();
HAnimJoint181.X3DNode::setName(CString("l_tarsal_distal_interphalangeal_3"));
HAnimJoint181.setDEF(CString("hanim_l_tarsal_distal_interphalangeal_3"));
HAnimJoint181.setCenter(new float[]{0.15,-1.13,0});
HAnimJoint181.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint181.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment182 =  HAnimSegment();
HAnimSegment182.X3DNode::setName(CString("l_tarsal_distal_phalanx_3"));
HAnimSegment182.setDEF(CString("hanim_l_tarsal_distal_phalanx_3"));
Transform& Transform183 =  Transform();
Transform183.setTranslation(new float[]{0.15,-1.13,0});
Shape& Shape184 =  Shape();
Shape184.setUSE(CString("HAnimJointShape"));
Transform183.addChild(&Shape184);

HAnimSegment182.addChild(&Transform183);

Shape& Shape185 =  Shape();
Appearance& Appearance186 =  Appearance();
Material& Material187 =  Material();
Material187.setEmissiveColor(new float[]{1,1,1});
Appearance186.addChild(&Material187);

Shape185.addChild(&Appearance186);

IndexedLineSet& IndexedLineSet188 =  IndexedLineSet();
IndexedLineSet188.setDEF(CString("tiptoe_l_tarsal_distal_interphalangeal_3"));
IndexedLineSet188.setCoordIndex(new int32_t[]{0,1}, 2);
Coordinate& Coordinate189 =  Coordinate();
Coordinate189.setPoint(new float[]{0.15,-1.13,0,0.15,-1.16,0}, 6);
IndexedLineSet188.setCoord(&Coordinate189);

Shape185.setGeometry(&IndexedLineSet188);

HAnimSegment182.addChild(&Shape185);

HAnimJoint181.addChildren(&HAnimSegment182);

HAnimJoint172.addChildren(&HAnimJoint181);

HAnimJoint163.addChildren(&HAnimJoint172);

HAnimJoint154.addChildren(&HAnimJoint163);

HAnimJoint145.addChildren(&HAnimJoint154);

HAnimJoint45.addChildren(&HAnimJoint145);

HAnimJoint28.addChildren(&HAnimJoint45);

//CC
HAnimJoint& HAnimJoint190 =  HAnimJoint();
HAnimJoint190.X3DNode::setName(CString("l_calcaneocuboid"));
HAnimJoint190.setDEF(CString("hanim_l_calcaneocuboid"));
HAnimJoint190.setCenter(new float[]{0.2,0.3,0});
HAnimJoint190.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint190.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment191 =  HAnimSegment();
HAnimSegment191.X3DNode::setName(CString("l_calcaneus"));
HAnimSegment191.setDEF(CString("hanim_l_calcaneus"));
Transform& Transform192 =  Transform();
Transform192.setTranslation(new float[]{0.2,0.3,0});
Shape& Shape193 =  Shape();
Shape193.setUSE(CString("HAnimJointShape"));
Transform192.addChild(&Shape193);

HAnimSegment191.addChild(&Transform192);

Shape& Shape194 =  Shape();
Appearance& Appearance195 =  Appearance();
Material& Material196 =  Material();
Material196.setEmissiveColor(new float[]{1,1,1});
Appearance195.addChild(&Material196);

Shape194.addChild(&Appearance195);

IndexedLineSet& IndexedLineSet197 =  IndexedLineSet();
IndexedLineSet197.setDEF(CString("CCtoTT"));
IndexedLineSet197.setCoordIndex(new int32_t[]{0,1}, 2);
Coordinate& Coordinate198 =  Coordinate();
Coordinate198.setPoint(new float[]{0.2,0.3,0,0.21,-0.3,0}, 6);
IndexedLineSet197.setCoord(&Coordinate198);

Shape194.setGeometry(&IndexedLineSet197);

HAnimSegment191.addChild(&Shape194);

HAnimJoint190.addChildren(&HAnimSegment191);

//TT
HAnimJoint& HAnimJoint199 =  HAnimJoint();
HAnimJoint199.X3DNode::setName(CString("l_transversetarsal"));
HAnimJoint199.setDEF(CString("hanim_l_transversetarsal"));
HAnimJoint199.setCenter(new float[]{0.21,-0.3,0});
HAnimJoint199.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint199.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment200 =  HAnimSegment();
HAnimSegment200.X3DNode::setName(CString("l_cuboid"));
HAnimSegment200.setDEF(CString("hanim_l_cuboid"));
Transform& Transform201 =  Transform();
Transform201.setTranslation(new float[]{0.21,-0.3,0});
Shape& Shape202 =  Shape();
Shape202.setUSE(CString("HAnimJointShape"));
Transform201.addChild(&Shape202);

HAnimSegment200.addChild(&Transform201);

Shape& Shape203 =  Shape();
Appearance& Appearance204 =  Appearance();
Material& Material205 =  Material();
Material205.setEmissiveColor(new float[]{1,1,1});
Appearance204.addChild(&Material205);

Shape203.addChild(&Appearance204);

IndexedLineSet& IndexedLineSet206 =  IndexedLineSet();
IndexedLineSet206.setDEF(CString("TTtoTMT4"));
IndexedLineSet206.setCoordIndex(new int32_t[]{0,1}, 2);
Coordinate& Coordinate207 =  Coordinate();
Coordinate207.setPoint(new float[]{0.21,-0.3,0,0.25,-0.58,0}, 6);
IndexedLineSet206.setCoord(&Coordinate207);

Shape203.setGeometry(&IndexedLineSet206);

HAnimSegment200.addChild(&Shape203);

Shape& Shape208 =  Shape();
Appearance& Appearance209 =  Appearance();
Material& Material210 =  Material();
Material210.setEmissiveColor(new float[]{1,1,1});
Appearance209.addChild(&Material210);

Shape208.addChild(&Appearance209);

IndexedLineSet& IndexedLineSet211 =  IndexedLineSet();
IndexedLineSet211.setDEF(CString("TTtoTMT5"));
IndexedLineSet211.setCoordIndex(new int32_t[]{0,1}, 2);
Coordinate& Coordinate212 =  Coordinate();
Coordinate212.setPoint(new float[]{0.21,-0.3,0,0.33,-0.52,0}, 6);
IndexedLineSet211.setCoord(&Coordinate212);

Shape208.setGeometry(&IndexedLineSet211);

HAnimSegment200.addChild(&Shape208);

HAnimJoint199.addChildren(&HAnimSegment200);

//TMT4
HAnimJoint& HAnimJoint213 =  HAnimJoint();
HAnimJoint213.X3DNode::setName(CString("l_tarsometatarsal_4"));
HAnimJoint213.setDEF(CString("hanim_l_tarsometatarsal_4"));
HAnimJoint213.setCenter(new float[]{0.25,-0.58,0});
HAnimJoint213.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint213.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment214 =  HAnimSegment();
HAnimSegment214.X3DNode::setName(CString("l_metatarsal_4"));
HAnimSegment214.setDEF(CString("hanim_l_metatarsal_4"));
Transform& Transform215 =  Transform();
Transform215.setTranslation(new float[]{0.25,-0.58,0});
Shape& Shape216 =  Shape();
Shape216.setUSE(CString("HAnimJointShape"));
Transform215.addChild(&Shape216);

HAnimSegment214.addChild(&Transform215);

Shape& Shape217 =  Shape();
Appearance& Appearance218 =  Appearance();
Material& Material219 =  Material();
Material219.setEmissiveColor(new float[]{1,1,1});
Appearance218.addChild(&Material219);

Shape217.addChild(&Appearance218);

IndexedLineSet& IndexedLineSet220 =  IndexedLineSet();
IndexedLineSet220.setDEF(CString("TMT4toMTP4"));
IndexedLineSet220.setCoordIndex(new int32_t[]{0,1}, 2);
Coordinate& Coordinate221 =  Coordinate();
Coordinate221.setPoint(new float[]{0.25,-0.58,0,0.25,-0.87,0}, 6);
IndexedLineSet220.setCoord(&Coordinate221);

Shape217.setGeometry(&IndexedLineSet220);

HAnimSegment214.addChild(&Shape217);

HAnimJoint213.addChildren(&HAnimSegment214);

HAnimJoint& HAnimJoint222 =  HAnimJoint();
HAnimJoint222.X3DNode::setName(CString("l_metatarsophalangeal_4"));
HAnimJoint222.setDEF(CString("hanim_l_metatarsophalangeal_4"));
HAnimJoint222.setCenter(new float[]{0.25,-0.87,0});
HAnimJoint222.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint222.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment223 =  HAnimSegment();
HAnimSegment223.X3DNode::setName(CString("l_tarsal_proximal_phalanx_4"));
HAnimSegment223.setDEF(CString("hanim_l_tarsal_proximal_phalanx_4"));
Transform& Transform224 =  Transform();
Transform224.setTranslation(new float[]{0.25,-0.87,0});
Shape& Shape225 =  Shape();
Shape225.setUSE(CString("HAnimJointShape"));
Transform224.addChild(&Shape225);

HAnimSegment223.addChild(&Transform224);

Shape& Shape226 =  Shape();
Appearance& Appearance227 =  Appearance();
Material& Material228 =  Material();
Material228.setEmissiveColor(new float[]{1,1,1});
Appearance227.addChild(&Material228);

Shape226.addChild(&Appearance227);

IndexedLineSet& IndexedLineSet229 =  IndexedLineSet();
IndexedLineSet229.setDEF(CString("MTP4toPIP4"));
IndexedLineSet229.setCoordIndex(new int32_t[]{0,1}, 2);
Coordinate& Coordinate230 =  Coordinate();
Coordinate230.setPoint(new float[]{0.25,-0.87,0,0.25,-1,0}, 6);
IndexedLineSet229.setCoord(&Coordinate230);

Shape226.setGeometry(&IndexedLineSet229);

HAnimSegment223.addChild(&Shape226);

HAnimJoint222.addChildren(&HAnimSegment223);

HAnimJoint& HAnimJoint231 =  HAnimJoint();
HAnimJoint231.X3DNode::setName(CString("l_tarsal_proximal_interphalangeal_4"));
HAnimJoint231.setDEF(CString("hanim_l_tarsal_proximal_interphalangeal_4"));
HAnimJoint231.setCenter(new float[]{0.25,-1,0});
HAnimJoint231.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint231.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment232 =  HAnimSegment();
HAnimSegment232.X3DNode::setName(CString("l_tarsal_middle_phalanx_4"));
HAnimSegment232.setDEF(CString("hanim_l_tarsal_middle_phalanx_4"));
Transform& Transform233 =  Transform();
Transform233.setTranslation(new float[]{0.25,-1,0});
Shape& Shape234 =  Shape();
Shape234.setUSE(CString("HAnimJointShape"));
Transform233.addChild(&Shape234);

HAnimSegment232.addChild(&Transform233);

Shape& Shape235 =  Shape();
Appearance& Appearance236 =  Appearance();
Material& Material237 =  Material();
Material237.setEmissiveColor(new float[]{1,1,1});
Appearance236.addChild(&Material237);

Shape235.addChild(&Appearance236);

IndexedLineSet& IndexedLineSet238 =  IndexedLineSet();
IndexedLineSet238.setDEF(CString("PIP4toDIP4"));
IndexedLineSet238.setCoordIndex(new int32_t[]{0,1}, 2);
Coordinate& Coordinate239 =  Coordinate();
Coordinate239.setPoint(new float[]{0.25,-1,0,0.25,-1.1,0}, 6);
IndexedLineSet238.setCoord(&Coordinate239);

Shape235.setGeometry(&IndexedLineSet238);

HAnimSegment232.addChild(&Shape235);

HAnimJoint231.addChildren(&HAnimSegment232);

HAnimJoint& HAnimJoint240 =  HAnimJoint();
HAnimJoint240.X3DNode::setName(CString("l_tarsal_distal_interphalangeal_4"));
HAnimJoint240.setDEF(CString("hanim_l_tarsal_distal_interphalangeal_4"));
HAnimJoint240.setCenter(new float[]{0.25,-1.1,0});
HAnimJoint240.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint240.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment241 =  HAnimSegment();
HAnimSegment241.X3DNode::setName(CString("l_tarsal_distal_phalanx_4"));
HAnimSegment241.setDEF(CString("hanim_l_tarsal_distal_phalanx_4"));
Transform& Transform242 =  Transform();
Transform242.setTranslation(new float[]{0.25,-1.1,0});
Shape& Shape243 =  Shape();
Shape243.setUSE(CString("HAnimJointShape"));
Transform242.addChild(&Shape243);

HAnimSegment241.addChild(&Transform242);

Shape& Shape244 =  Shape();
Appearance& Appearance245 =  Appearance();
Material& Material246 =  Material();
Material246.setEmissiveColor(new float[]{1,1,1});
Appearance245.addChild(&Material246);

Shape244.addChild(&Appearance245);

IndexedLineSet& IndexedLineSet247 =  IndexedLineSet();
IndexedLineSet247.setDEF(CString("tiptoe_l_tarsal_distal_interphalangeal_4"));
IndexedLineSet247.setCoordIndex(new int32_t[]{0,1}, 2);
Coordinate& Coordinate248 =  Coordinate();
Coordinate248.setPoint(new float[]{0.25,-1.1,0,0.25,-1.15,0}, 6);
IndexedLineSet247.setCoord(&Coordinate248);

Shape244.setGeometry(&IndexedLineSet247);

HAnimSegment241.addChild(&Shape244);

HAnimJoint240.addChildren(&HAnimSegment241);

HAnimJoint231.addChildren(&HAnimJoint240);

HAnimJoint222.addChildren(&HAnimJoint231);

HAnimJoint213.addChildren(&HAnimJoint222);

HAnimJoint199.addChildren(&HAnimJoint213);

//TMT5
HAnimJoint& HAnimJoint249 =  HAnimJoint();
HAnimJoint249.X3DNode::setName(CString("l_tarsometatarsal_5"));
HAnimJoint249.setDEF(CString("hanim_l_tarsometatarsal_5"));
HAnimJoint249.setCenter(new float[]{0.33,-0.52,0});
HAnimJoint249.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint249.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment250 =  HAnimSegment();
HAnimSegment250.X3DNode::setName(CString("l_metatarsal_5"));
HAnimSegment250.setDEF(CString("hanim_l_metatarsal_5"));
Transform& Transform251 =  Transform();
Transform251.setTranslation(new float[]{0.33,-0.52,0});
Shape& Shape252 =  Shape();
Shape252.setUSE(CString("HAnimJointShape"));
Transform251.addChild(&Shape252);

HAnimSegment250.addChild(&Transform251);

Shape& Shape253 =  Shape();
Appearance& Appearance254 =  Appearance();
Material& Material255 =  Material();
Material255.setEmissiveColor(new float[]{1,1,1});
Appearance254.addChild(&Material255);

Shape253.addChild(&Appearance254);

IndexedLineSet& IndexedLineSet256 =  IndexedLineSet();
IndexedLineSet256.setDEF(CString("TMT5toMTP5"));
IndexedLineSet256.setCoordIndex(new int32_t[]{0,1}, 2);
Coordinate& Coordinate257 =  Coordinate();
Coordinate257.setPoint(new float[]{0.33,-0.52,0,0.34,-0.8,0}, 6);
IndexedLineSet256.setCoord(&Coordinate257);

Shape253.setGeometry(&IndexedLineSet256);

HAnimSegment250.addChild(&Shape253);

HAnimJoint249.addChildren(&HAnimSegment250);

HAnimJoint& HAnimJoint258 =  HAnimJoint();
HAnimJoint258.X3DNode::setName(CString("l_metatarsophalangeal_5"));
HAnimJoint258.setDEF(CString("hanim_l_metatarsophalangeal_5"));
HAnimJoint258.setCenter(new float[]{0.34,-0.8,0});
HAnimJoint258.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint258.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment259 =  HAnimSegment();
HAnimSegment259.X3DNode::setName(CString("l_tarsal_proximal_phalanx_5"));
HAnimSegment259.setDEF(CString("hanim_l_tarsal_proximal_phalanx_5"));
Transform& Transform260 =  Transform();
Transform260.setTranslation(new float[]{0.34,-0.8,0});
Shape& Shape261 =  Shape();
Shape261.setUSE(CString("HAnimJointShape"));
Transform260.addChild(&Shape261);

HAnimSegment259.addChild(&Transform260);

Shape& Shape262 =  Shape();
Appearance& Appearance263 =  Appearance();
Material& Material264 =  Material();
Material264.setEmissiveColor(new float[]{1,1,1});
Appearance263.addChild(&Material264);

Shape262.addChild(&Appearance263);

IndexedLineSet& IndexedLineSet265 =  IndexedLineSet();
IndexedLineSet265.setDEF(CString("MTP5toPIP5"));
IndexedLineSet265.setCoordIndex(new int32_t[]{0,1}, 2);
Coordinate& Coordinate266 =  Coordinate();
Coordinate266.setPoint(new float[]{0.34,-0.8,0,0.34,-0.95,0}, 6);
IndexedLineSet265.setCoord(&Coordinate266);

Shape262.setGeometry(&IndexedLineSet265);

HAnimSegment259.addChild(&Shape262);

HAnimJoint258.addChildren(&HAnimSegment259);

HAnimJoint& HAnimJoint267 =  HAnimJoint();
HAnimJoint267.X3DNode::setName(CString("l_tarsal_proximal_interphalangeal_5"));
HAnimJoint267.setDEF(CString("hanim_l_tarsal_proximal_interphalangeal_5"));
HAnimJoint267.setCenter(new float[]{0.34,-0.95,0});
HAnimJoint267.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint267.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment268 =  HAnimSegment();
HAnimSegment268.X3DNode::setName(CString("l_tarsal_middle_phalanx_5"));
HAnimSegment268.setDEF(CString("hanim_l_tarsal_middle_phalanx_5"));
Transform& Transform269 =  Transform();
Transform269.setTranslation(new float[]{0.34,-0.95,0});
Shape& Shape270 =  Shape();
Shape270.setUSE(CString("HAnimJointShape"));
Transform269.addChild(&Shape270);

HAnimSegment268.addChild(&Transform269);

Shape& Shape271 =  Shape();
Appearance& Appearance272 =  Appearance();
Material& Material273 =  Material();
Material273.setEmissiveColor(new float[]{1,1,1});
Appearance272.addChild(&Material273);

Shape271.addChild(&Appearance272);

IndexedLineSet& IndexedLineSet274 =  IndexedLineSet();
IndexedLineSet274.setDEF(CString("PIP5toDIP5"));
IndexedLineSet274.setCoordIndex(new int32_t[]{0,1}, 2);
Coordinate& Coordinate275 =  Coordinate();
Coordinate275.setPoint(new float[]{0.34,-0.95,0,0.34,-1.05,0}, 6);
IndexedLineSet274.setCoord(&Coordinate275);

Shape271.setGeometry(&IndexedLineSet274);

HAnimSegment268.addChild(&Shape271);

HAnimJoint267.addChildren(&HAnimSegment268);

HAnimJoint& HAnimJoint276 =  HAnimJoint();
HAnimJoint276.X3DNode::setName(CString("l_tarsal_distal_interphalangeal_5"));
HAnimJoint276.setDEF(CString("hanim_l_tarsal_distal_interphalangeal_5"));
HAnimJoint276.setCenter(new float[]{0.34,-1.05,0});
HAnimJoint276.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint276.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment277 =  HAnimSegment();
HAnimSegment277.X3DNode::setName(CString("l_tarsal_distal_phalanx_5"));
HAnimSegment277.setDEF(CString("hanim_l_tarsal_distal_phalanx_5"));
Transform& Transform278 =  Transform();
Transform278.setTranslation(new float[]{0.34,-1.05,0});
Shape& Shape279 =  Shape();
Shape279.setUSE(CString("HAnimJointShape"));
Transform278.addChild(&Shape279);

HAnimSegment277.addChild(&Transform278);

Shape& Shape280 =  Shape();
Appearance& Appearance281 =  Appearance();
Material& Material282 =  Material();
Material282.setEmissiveColor(new float[]{1,1,1});
Appearance281.addChild(&Material282);

Shape280.addChild(&Appearance281);

IndexedLineSet& IndexedLineSet283 =  IndexedLineSet();
IndexedLineSet283.setDEF(CString("tiptoe_l_tarsal_distal_interphalangeal_5"));
IndexedLineSet283.setCoordIndex(new int32_t[]{0,1}, 2);
Coordinate& Coordinate284 =  Coordinate();
Coordinate284.setPoint(new float[]{0.34,-1.05,0,0.34,-1.08,0}, 6);
IndexedLineSet283.setCoord(&Coordinate284);

Shape280.setGeometry(&IndexedLineSet283);

HAnimSegment277.addChild(&Shape280);

HAnimJoint276.addChildren(&HAnimSegment277);

HAnimJoint267.addChildren(&HAnimJoint276);

HAnimJoint258.addChildren(&HAnimJoint267);

HAnimJoint249.addChildren(&HAnimJoint258);

HAnimJoint199.addChildren(&HAnimJoint249);

HAnimJoint190.addChildren(&HAnimJoint199);

HAnimJoint28.addChildren(&HAnimJoint190);

HAnimJoint27.addChildren(&HAnimJoint28);

HAnimHumanoid24.setSkeleton(&HAnimJoint27);

HAnimJoint& HAnimJoint285 =  HAnimJoint();
HAnimJoint285.setUSE(CString("hanim_humanoid_root"));
HAnimHumanoid24.setJoints(&HAnimJoint285);

HAnimJoint& HAnimJoint286 =  HAnimJoint();
HAnimJoint286.setUSE(CString("hanim_l_calcaneocuboid"));
HAnimHumanoid24.setJoints(&HAnimJoint286);

HAnimJoint& HAnimJoint287 =  HAnimJoint();
HAnimJoint287.setUSE(CString("hanim_l_cuneonavicular_1"));
HAnimHumanoid24.setJoints(&HAnimJoint287);

HAnimJoint& HAnimJoint288 =  HAnimJoint();
HAnimJoint288.setUSE(CString("hanim_l_cuneonavicular_2"));
HAnimHumanoid24.setJoints(&HAnimJoint288);

HAnimJoint& HAnimJoint289 =  HAnimJoint();
HAnimJoint289.setUSE(CString("hanim_l_cuneonavicular_3"));
HAnimHumanoid24.setJoints(&HAnimJoint289);

HAnimJoint& HAnimJoint290 =  HAnimJoint();
HAnimJoint290.setUSE(CString("hanim_l_metatarsophalangeal_1"));
HAnimHumanoid24.setJoints(&HAnimJoint290);

HAnimJoint& HAnimJoint291 =  HAnimJoint();
HAnimJoint291.setUSE(CString("hanim_l_metatarsophalangeal_2"));
HAnimHumanoid24.setJoints(&HAnimJoint291);

HAnimJoint& HAnimJoint292 =  HAnimJoint();
HAnimJoint292.setUSE(CString("hanim_l_metatarsophalangeal_3"));
HAnimHumanoid24.setJoints(&HAnimJoint292);

HAnimJoint& HAnimJoint293 =  HAnimJoint();
HAnimJoint293.setUSE(CString("hanim_l_metatarsophalangeal_4"));
HAnimHumanoid24.setJoints(&HAnimJoint293);

HAnimJoint& HAnimJoint294 =  HAnimJoint();
HAnimJoint294.setUSE(CString("hanim_l_metatarsophalangeal_5"));
HAnimHumanoid24.setJoints(&HAnimJoint294);

HAnimJoint& HAnimJoint295 =  HAnimJoint();
HAnimJoint295.setUSE(CString("hanim_l_talocalcaneonavicular"));
HAnimHumanoid24.setJoints(&HAnimJoint295);

HAnimJoint& HAnimJoint296 =  HAnimJoint();
HAnimJoint296.setUSE(CString("hanim_l_talocrural"));
HAnimHumanoid24.setJoints(&HAnimJoint296);

HAnimJoint& HAnimJoint297 =  HAnimJoint();
HAnimJoint297.setUSE(CString("hanim_l_tarsal_distal_interphalangeal_2"));
HAnimHumanoid24.setJoints(&HAnimJoint297);

HAnimJoint& HAnimJoint298 =  HAnimJoint();
HAnimJoint298.setUSE(CString("hanim_l_tarsal_distal_interphalangeal_3"));
HAnimHumanoid24.setJoints(&HAnimJoint298);

HAnimJoint& HAnimJoint299 =  HAnimJoint();
HAnimJoint299.setUSE(CString("hanim_l_tarsal_distal_interphalangeal_4"));
HAnimHumanoid24.setJoints(&HAnimJoint299);

HAnimJoint& HAnimJoint300 =  HAnimJoint();
HAnimJoint300.setUSE(CString("hanim_l_tarsal_distal_interphalangeal_5"));
HAnimHumanoid24.setJoints(&HAnimJoint300);

HAnimJoint& HAnimJoint301 =  HAnimJoint();
HAnimJoint301.setUSE(CString("hanim_l_tarsal_interphalangeal_1"));
HAnimHumanoid24.setJoints(&HAnimJoint301);

HAnimJoint& HAnimJoint302 =  HAnimJoint();
HAnimJoint302.setUSE(CString("hanim_l_tarsal_proximal_interphalangeal_2"));
HAnimHumanoid24.setJoints(&HAnimJoint302);

HAnimJoint& HAnimJoint303 =  HAnimJoint();
HAnimJoint303.setUSE(CString("hanim_l_tarsal_proximal_interphalangeal_3"));
HAnimHumanoid24.setJoints(&HAnimJoint303);

HAnimJoint& HAnimJoint304 =  HAnimJoint();
HAnimJoint304.setUSE(CString("hanim_l_tarsal_proximal_interphalangeal_4"));
HAnimHumanoid24.setJoints(&HAnimJoint304);

HAnimJoint& HAnimJoint305 =  HAnimJoint();
HAnimJoint305.setUSE(CString("hanim_l_tarsal_proximal_interphalangeal_5"));
HAnimHumanoid24.setJoints(&HAnimJoint305);

HAnimJoint& HAnimJoint306 =  HAnimJoint();
HAnimJoint306.setUSE(CString("hanim_l_tarsometatarsal_1"));
HAnimHumanoid24.setJoints(&HAnimJoint306);

HAnimJoint& HAnimJoint307 =  HAnimJoint();
HAnimJoint307.setUSE(CString("hanim_l_tarsometatarsal_2"));
HAnimHumanoid24.setJoints(&HAnimJoint307);

HAnimJoint& HAnimJoint308 =  HAnimJoint();
HAnimJoint308.setUSE(CString("hanim_l_tarsometatarsal_3"));
HAnimHumanoid24.setJoints(&HAnimJoint308);

HAnimJoint& HAnimJoint309 =  HAnimJoint();
HAnimJoint309.setUSE(CString("hanim_l_tarsometatarsal_4"));
HAnimHumanoid24.setJoints(&HAnimJoint309);

HAnimJoint& HAnimJoint310 =  HAnimJoint();
HAnimJoint310.setUSE(CString("hanim_l_tarsometatarsal_5"));
HAnimHumanoid24.setJoints(&HAnimJoint310);

HAnimJoint& HAnimJoint311 =  HAnimJoint();
HAnimJoint311.setUSE(CString("hanim_l_transversetarsal"));
HAnimHumanoid24.setJoints(&HAnimJoint311);

Scene22.addChild(&HAnimHumanoid24);

X3D0.setScene(&Scene22);

}
