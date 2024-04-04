#define False false
#define True true
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/pch.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/framework.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/glut.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/X3DLib.h"
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
meta3.setContent(CString("HAnimModelFootRight.x3d"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("description"));
meta4.setContent(CString("Right foot, using high-fidelity definitions for HAnim version 2.0"));
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
meta9.setName(CString("TODO"));
meta9.setContent(CString("Update all values to match HAnim2 A.7 Level of articulation four LOA-4"));
head1.addMeta(&meta9);

meta& meta10 =  meta();
meta10.setName(CString("TODO"));
meta10.setContent(CString("Add links to figures"));
head1.addMeta(&meta10);

meta& meta11 =  meta();
meta11.setName(CString("TODO"));
meta11.setContent(CString("Add Viewpoints to enable inspection"));
head1.addMeta(&meta11);

meta& meta12 =  meta();
meta12.setName(CString("info"));
meta12.setContent(CString("TODO describe how to compute and apply offsets for center values whenever attaching this appendage to a body"));
head1.addMeta(&meta12);

meta& meta13 =  meta();
meta13.setName(CString("warning"));
meta13.setContent(CString("TODO will X3D HAnim component add a new level to support LOA-4 functionality?"));
head1.addMeta(&meta13);

meta& meta14 =  meta();
meta14.setName(CString("reference"));
meta14.setContent(CString("https://www.web3d.org/working-groups/humanoid-animation-HAnim"));
head1.addMeta(&meta14);

meta& meta15 =  meta();
meta15.setName(CString("reference"));
meta15.setContent(CString("https://www.web3d.org/documents/specifications/19774/V2.0"));
head1.addMeta(&meta15);

meta& meta16 =  meta();
meta16.setName(CString("reference"));
meta16.setContent(CString("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#TheFeet"));
head1.addMeta(&meta16);

meta& meta17 =  meta();
meta17.setName(CString("reference"));
meta17.setContent(CString("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#f-FootJoints"));
head1.addMeta(&meta17);

meta& meta18 =  meta();
meta18.setName(CString("reference"));
meta18.setContent(CString("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#Hierarchy4"));
head1.addMeta(&meta18);

meta& meta19 =  meta();
meta19.setName(CString("reference"));
meta19.setContent(CString("https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19775-1v4-WD2/Part01/components/hanim.html"));
head1.addMeta(&meta19);

meta& meta20 =  meta();
meta20.setName(CString("subject"));
meta20.setContent(CString("X3D HAnim humanoid animation"));
head1.addMeta(&meta20);

meta& meta21 =  meta();
meta21.setName(CString("TODO"));
meta21.setContent(CString("Integrate and confirm Segment/Joint names, Viewpoints."));
head1.addMeta(&meta21);

meta& meta22 =  meta();
meta22.setName(CString("identifier"));
meta22.setContent(CString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelFootRight.x3d"));
head1.addMeta(&meta22);

meta& meta23 =  meta();
meta23.setName(CString("generator"));
meta23.setContent(CString("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"));
head1.addMeta(&meta23);

meta& meta24 =  meta();
meta24.setName(CString("license"));
meta24.setContent(CString("../license.html"));
head1.addMeta(&meta24);

X3D0.setHead(&head1);

Scene& Scene25 =  Scene();
WorldInfo& WorldInfo26 =  WorldInfo();
WorldInfo26.setTitle(CString("HAnimModelFootRight.x3d"));
Scene25.addChild(&WorldInfo26);

HAnimHumanoid& HAnimHumanoid27 =  HAnimHumanoid();
HAnimHumanoid27.X3DNode::setName(CString("Foot_Right"));
HAnimHumanoid27.setDEF(CString("hanim_Foot_Right"));
HAnimHumanoid27.setLoa(4);
HAnimHumanoid27.setVersion(CString("2.0"));
//original HAnimHumanoid info='\"authorName=Kwan-Hee YOO, Don Brutzman and Joe Williams\"'
MetadataSet& MetadataSet28 =  MetadataSet();
MetadataSet28.X3DNode::setName(CString("HAnimHumanoid.info"));
MetadataSet28.X3DNode::setReference(CString("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid"));
MetadataString& MetadataString29 =  MetadataString();
MetadataString29.X3DNode::setName(CString("authorName"));
MetadataString29.setValue(new CString[]{CString("Kwan-Hee YOO, Don Brutzman and Joe Williams")}, 1);
MetadataSet28.setValue((X3DNode *)&MetadataString29);

HAnimHumanoid27.setMetadata(&MetadataSet28);

HAnimJoint& HAnimJoint30 =  HAnimJoint();
HAnimJoint30.X3DNode::setName(CString("humanoid_root"));
HAnimJoint30.setDEF(CString("hanim_humanoid_root"));
//Might consider putting a HAnimSegment here, but that doesn't help with re-use of this foot model
HAnimJoint& HAnimJoint31 =  HAnimJoint();
HAnimJoint31.X3DNode::setName(CString("r_talocrural"));
HAnimJoint31.setDEF(CString("hanim_r_talocrural"));
HAnimJoint31.setDescription(CString("connection joint of foot to leg above"));
HAnimSegment& HAnimSegment32 =  HAnimSegment();
HAnimSegment32.X3DNode::setName(CString("r_talus"));
HAnimSegment32.setDEF(CString("hanim_r_talus"));
Transform& Transform33 =  Transform();
Shape& Shape34 =  Shape();
Shape34.setDEF(CString("HAnimJointShape"));
Sphere& Sphere35 =  Sphere();
Sphere35.setRadius(0.025);
Shape34.setGeometry(&Sphere35);

Appearance& Appearance36 =  Appearance();
Appearance36.setDEF(CString("HAnimJointAppearance"));
Material& Material37 =  Material();
Material37.setDiffuseColor(new float[]{0,0,1});
Appearance36.addChild(&Material37);

Shape34.addChild(&Appearance36);

Transform33.addChild(&Shape34);

HAnimSegment32.addChild(&Transform33);

Shape& Shape38 =  Shape();
Appearance& Appearance39 =  Appearance();
Material& Material40 =  Material();
Material40.setEmissiveColor(new float[]{1,1,1});
Appearance39.addChild(&Material40);

Shape38.addChild(&Appearance39);

IndexedLineSet& IndexedLineSet41 =  IndexedLineSet();
IndexedLineSet41.setDEF(CString("TCtoTCN"));
IndexedLineSet41.setCoordIndex(new int32_t[]{0,1}, 2);
Coordinate& Coordinate42 =  Coordinate();
Coordinate42.setPoint(new float[]{0,0,0,0,-0.3,0}, 6);
IndexedLineSet41.setCoord(&Coordinate42);

Shape38.setGeometry(&IndexedLineSet41);

HAnimSegment32.addChild(&Shape38);

Shape& Shape43 =  Shape();
Appearance& Appearance44 =  Appearance();
Material& Material45 =  Material();
Material45.setEmissiveColor(new float[]{1,1,1});
Appearance44.addChild(&Material45);

Shape43.addChild(&Appearance44);

IndexedLineSet& IndexedLineSet46 =  IndexedLineSet();
IndexedLineSet46.setDEF(CString("TCtoCC"));
IndexedLineSet46.setCoordIndex(new int32_t[]{0,1}, 2);
Coordinate& Coordinate47 =  Coordinate();
Coordinate47.setPoint(new float[]{0,0,0,-0.2,0.3,0}, 6);
IndexedLineSet46.setCoord(&Coordinate47);

Shape43.setGeometry(&IndexedLineSet46);

HAnimSegment32.addChild(&Shape43);

HAnimJoint31.addChildren(&HAnimSegment32);

//TCN
HAnimJoint& HAnimJoint48 =  HAnimJoint();
HAnimJoint48.X3DNode::setName(CString("r_talocalcaneonavicular"));
HAnimJoint48.setDEF(CString("hanim_r_talocalcaneonavicular"));
HAnimJoint48.setCenter(new float[]{0,-0.3,0});
HAnimSegment& HAnimSegment49 =  HAnimSegment();
HAnimSegment49.X3DNode::setName(CString("r_navicular"));
HAnimSegment49.setDEF(CString("hanim_r_navicular"));
Transform& Transform50 =  Transform();
Transform50.setTranslation(new float[]{0,-0.3,0});
Shape& Shape51 =  Shape();
Shape51.setUSE(CString("HAnimJointShape"));
Transform50.addChild(&Shape51);

HAnimSegment49.addChild(&Transform50);

Shape& Shape52 =  Shape();
Appearance& Appearance53 =  Appearance();
Material& Material54 =  Material();
Material54.setEmissiveColor(new float[]{1,1,1});
Appearance53.addChild(&Material54);

Shape52.addChild(&Appearance53);

IndexedLineSet& IndexedLineSet55 =  IndexedLineSet();
IndexedLineSet55.setDEF(CString("TCNtoCN1"));
IndexedLineSet55.setCoordIndex(new int32_t[]{0,1}, 2);
Coordinate& Coordinate56 =  Coordinate();
Coordinate56.setPoint(new float[]{0,-0.3,0,0.1,-0.45,0}, 6);
IndexedLineSet55.setCoord(&Coordinate56);

Shape52.setGeometry(&IndexedLineSet55);

HAnimSegment49.addChild(&Shape52);

Shape& Shape57 =  Shape();
Appearance& Appearance58 =  Appearance();
Material& Material59 =  Material();
Material59.setEmissiveColor(new float[]{1,1,1});
Appearance58.addChild(&Material59);

Shape57.addChild(&Appearance58);

IndexedLineSet& IndexedLineSet60 =  IndexedLineSet();
IndexedLineSet60.setDEF(CString("TCNtoCN2"));
IndexedLineSet60.setCoordIndex(new int32_t[]{0,1}, 2);
Coordinate& Coordinate61 =  Coordinate();
Coordinate61.setPoint(new float[]{0,-0.3,0,0,-0.45,0}, 6);
IndexedLineSet60.setCoord(&Coordinate61);

Shape57.setGeometry(&IndexedLineSet60);

HAnimSegment49.addChild(&Shape57);

Shape& Shape62 =  Shape();
Appearance& Appearance63 =  Appearance();
Material& Material64 =  Material();
Material64.setEmissiveColor(new float[]{1,1,1});
Appearance63.addChild(&Material64);

Shape62.addChild(&Appearance63);

IndexedLineSet& IndexedLineSet65 =  IndexedLineSet();
IndexedLineSet65.setDEF(CString("TCNtoCN3"));
IndexedLineSet65.setCoordIndex(new int32_t[]{0,1}, 2);
Coordinate& Coordinate66 =  Coordinate();
Coordinate66.setPoint(new float[]{0,-0.3,0,-0.1,-0.4,0}, 6);
IndexedLineSet65.setCoord(&Coordinate66);

Shape62.setGeometry(&IndexedLineSet65);

HAnimSegment49.addChild(&Shape62);

HAnimJoint48.addChildren(&HAnimSegment49);

//CN1
HAnimJoint& HAnimJoint67 =  HAnimJoint();
HAnimJoint67.X3DNode::setName(CString("r_cuneonavicular_1"));
HAnimJoint67.setDEF(CString("hanim_r_cuneonavicular_1"));
HAnimJoint67.setCenter(new float[]{0.1,-0.45,0});
HAnimSegment& HAnimSegment68 =  HAnimSegment();
HAnimSegment68.X3DNode::setName(CString("r_cuneiform_1"));
HAnimSegment68.setDEF(CString("hanim_r_cuneiform_1"));
Transform& Transform69 =  Transform();
Transform69.setTranslation(new float[]{0.1,-0.45,0});
Shape& Shape70 =  Shape();
Shape70.setUSE(CString("HAnimJointShape"));
Transform69.addChild(&Shape70);

HAnimSegment68.addChild(&Transform69);

Shape& Shape71 =  Shape();
Appearance& Appearance72 =  Appearance();
Material& Material73 =  Material();
Material73.setEmissiveColor(new float[]{1,1,1});
Appearance72.addChild(&Material73);

Shape71.addChild(&Appearance72);

IndexedLineSet& IndexedLineSet74 =  IndexedLineSet();
IndexedLineSet74.setDEF(CString("CN1toTMT1"));
IndexedLineSet74.setCoordIndex(new int32_t[]{0,1}, 2);
Coordinate& Coordinate75 =  Coordinate();
Coordinate75.setPoint(new float[]{0.1,-0.45,0,0.1,-0.6,0}, 6);
IndexedLineSet74.setCoord(&Coordinate75);

Shape71.setGeometry(&IndexedLineSet74);

HAnimSegment68.addChild(&Shape71);

HAnimJoint67.addChildren(&HAnimSegment68);

HAnimJoint& HAnimJoint76 =  HAnimJoint();
HAnimJoint76.X3DNode::setName(CString("r_tarsometatarsal_1"));
HAnimJoint76.setDEF(CString("hanim_r_tarsometatarsal_1"));
HAnimJoint76.setCenter(new float[]{0.1,-0.6,0});
HAnimSegment& HAnimSegment77 =  HAnimSegment();
HAnimSegment77.X3DNode::setName(CString("r_metatarsal_1"));
HAnimSegment77.setDEF(CString("hanim_r_metatarsal_1"));
Transform& Transform78 =  Transform();
Transform78.setTranslation(new float[]{0.1,-0.6,0});
Shape& Shape79 =  Shape();
Shape79.setUSE(CString("HAnimJointShape"));
Transform78.addChild(&Shape79);

HAnimSegment77.addChild(&Transform78);

Shape& Shape80 =  Shape();
Appearance& Appearance81 =  Appearance();
Material& Material82 =  Material();
Material82.setEmissiveColor(new float[]{1,1,1});
Appearance81.addChild(&Material82);

Shape80.addChild(&Appearance81);

IndexedLineSet& IndexedLineSet83 =  IndexedLineSet();
IndexedLineSet83.setDEF(CString("TMT1toMTP1"));
IndexedLineSet83.setCoordIndex(new int32_t[]{0,1}, 2);
Coordinate& Coordinate84 =  Coordinate();
Coordinate84.setPoint(new float[]{0.1,-0.6,0,0.1,-0.9,0}, 6);
IndexedLineSet83.setCoord(&Coordinate84);

Shape80.setGeometry(&IndexedLineSet83);

HAnimSegment77.addChild(&Shape80);

HAnimJoint76.addChildren(&HAnimSegment77);

HAnimJoint& HAnimJoint85 =  HAnimJoint();
HAnimJoint85.X3DNode::setName(CString("r_metatarsophalangeal_1"));
HAnimJoint85.setDEF(CString("hanim_r_metatarsophalangeal_1"));
HAnimJoint85.setCenter(new float[]{0.1,-0.9,0});
HAnimSegment& HAnimSegment86 =  HAnimSegment();
HAnimSegment86.X3DNode::setName(CString("r_tarsal_proximal_phalanx_1"));
HAnimSegment86.setDEF(CString("hanim_r_tarsal_proximal_phalanx_1"));
Transform& Transform87 =  Transform();
Transform87.setTranslation(new float[]{0.1,-0.9,0});
Shape& Shape88 =  Shape();
Shape88.setUSE(CString("HAnimJointShape"));
Transform87.addChild(&Shape88);

HAnimSegment86.addChild(&Transform87);

Shape& Shape89 =  Shape();
Appearance& Appearance90 =  Appearance();
Material& Material91 =  Material();
Material91.setEmissiveColor(new float[]{1,1,1});
Appearance90.addChild(&Material91);

Shape89.addChild(&Appearance90);

IndexedLineSet& IndexedLineSet92 =  IndexedLineSet();
IndexedLineSet92.setDEF(CString("MTP1toIP1"));
IndexedLineSet92.setCoordIndex(new int32_t[]{0,1}, 2);
Coordinate& Coordinate93 =  Coordinate();
Coordinate93.setPoint(new float[]{0.1,-0.9,0,0.1,-1.05,0}, 6);
IndexedLineSet92.setCoord(&Coordinate93);

Shape89.setGeometry(&IndexedLineSet92);

HAnimSegment86.addChild(&Shape89);

HAnimJoint85.addChildren(&HAnimSegment86);

HAnimJoint& HAnimJoint94 =  HAnimJoint();
HAnimJoint94.X3DNode::setName(CString("r_tarsal_interphalangeal_1"));
HAnimJoint94.setDEF(CString("hanim_r_tarsal_interphalangeal_1"));
HAnimJoint94.setCenter(new float[]{0.1,-1.05,0});
HAnimSegment& HAnimSegment95 =  HAnimSegment();
HAnimSegment95.X3DNode::setName(CString("r_tarsal_distal_phalanx_1"));
HAnimSegment95.setDEF(CString("hanim_r_tarsal_distal_phalanx_1"));
Transform& Transform96 =  Transform();
Transform96.setTranslation(new float[]{0.1,-1.05,0});
Shape& Shape97 =  Shape();
Shape97.setUSE(CString("HAnimJointShape"));
Transform96.addChild(&Shape97);

HAnimSegment95.addChild(&Transform96);

Shape& Shape98 =  Shape();
Appearance& Appearance99 =  Appearance();
Material& Material100 =  Material();
Material100.setEmissiveColor(new float[]{1,1,1});
Appearance99.addChild(&Material100);

Shape98.addChild(&Appearance99);

IndexedLineSet& IndexedLineSet101 =  IndexedLineSet();
IndexedLineSet101.setDEF(CString("tiptoe_r_interphalangeal_"));
IndexedLineSet101.setCoordIndex(new int32_t[]{0,1}, 2);
Coordinate& Coordinate102 =  Coordinate();
Coordinate102.setPoint(new float[]{0.1,-1.05,0,0.1,-1.1,0}, 6);
IndexedLineSet101.setCoord(&Coordinate102);

Shape98.setGeometry(&IndexedLineSet101);

HAnimSegment95.addChild(&Shape98);

HAnimJoint94.addChildren(&HAnimSegment95);

HAnimJoint85.addChildren(&HAnimJoint94);

HAnimJoint76.addChildren(&HAnimJoint85);

HAnimJoint67.addChildren(&HAnimJoint76);

HAnimJoint48.addChildren(&HAnimJoint67);

//CN2
HAnimJoint& HAnimJoint103 =  HAnimJoint();
HAnimJoint103.X3DNode::setName(CString("r_cuneonavicular_2"));
HAnimJoint103.setDEF(CString("hanim_r_cuneonavicular_2"));
HAnimJoint103.setCenter(new float[]{0,-0.45,0});
HAnimSegment& HAnimSegment104 =  HAnimSegment();
HAnimSegment104.X3DNode::setName(CString("r_cuneiform_2"));
HAnimSegment104.setDEF(CString("hanim_r_cuneiform_2"));
Transform& Transform105 =  Transform();
Transform105.setTranslation(new float[]{0,-0.45,0});
Shape& Shape106 =  Shape();
Shape106.setUSE(CString("HAnimJointShape"));
Transform105.addChild(&Shape106);

HAnimSegment104.addChild(&Transform105);

Shape& Shape107 =  Shape();
Appearance& Appearance108 =  Appearance();
Material& Material109 =  Material();
Material109.setEmissiveColor(new float[]{1,1,1});
Appearance108.addChild(&Material109);

Shape107.addChild(&Appearance108);

IndexedLineSet& IndexedLineSet110 =  IndexedLineSet();
IndexedLineSet110.setDEF(CString("CN2toTMT2"));
IndexedLineSet110.setCoordIndex(new int32_t[]{0,1}, 2);
Coordinate& Coordinate111 =  Coordinate();
Coordinate111.setPoint(new float[]{0,-0.45,0,-0.05,-0.6,0}, 6);
IndexedLineSet110.setCoord(&Coordinate111);

Shape107.setGeometry(&IndexedLineSet110);

HAnimSegment104.addChild(&Shape107);

HAnimJoint103.addChildren(&HAnimSegment104);

HAnimJoint& HAnimJoint112 =  HAnimJoint();
HAnimJoint112.X3DNode::setName(CString("r_tarsometatarsal_2"));
HAnimJoint112.setDEF(CString("hanim_r_tarsometatarsal_2"));
HAnimJoint112.setCenter(new float[]{-0.05,-0.6,0});
HAnimSegment& HAnimSegment113 =  HAnimSegment();
HAnimSegment113.X3DNode::setName(CString("r_metatarsal_2"));
HAnimSegment113.setDEF(CString("hanim_r_metatarsal_2"));
Transform& Transform114 =  Transform();
Transform114.setTranslation(new float[]{-0.05,-0.6,0});
Shape& Shape115 =  Shape();
Shape115.setUSE(CString("HAnimJointShape"));
Transform114.addChild(&Shape115);

HAnimSegment113.addChild(&Transform114);

Shape& Shape116 =  Shape();
Appearance& Appearance117 =  Appearance();
Material& Material118 =  Material();
Material118.setEmissiveColor(new float[]{1,1,1});
Appearance117.addChild(&Material118);

Shape116.addChild(&Appearance117);

IndexedLineSet& IndexedLineSet119 =  IndexedLineSet();
IndexedLineSet119.setDEF(CString("TMT2toMTP2"));
IndexedLineSet119.setCoordIndex(new int32_t[]{0,1}, 2);
Coordinate& Coordinate120 =  Coordinate();
Coordinate120.setPoint(new float[]{-0.05,-0.6,0,-0.05,-0.9,0}, 6);
IndexedLineSet119.setCoord(&Coordinate120);

Shape116.setGeometry(&IndexedLineSet119);

HAnimSegment113.addChild(&Shape116);

HAnimJoint112.addChildren(&HAnimSegment113);

HAnimJoint& HAnimJoint121 =  HAnimJoint();
HAnimJoint121.X3DNode::setName(CString("r_metatarsophalangeal_2"));
HAnimJoint121.setDEF(CString("hanim_r_metatarsophalangeal_2"));
HAnimJoint121.setCenter(new float[]{-0.05,-0.9,0});
HAnimSegment& HAnimSegment122 =  HAnimSegment();
HAnimSegment122.X3DNode::setName(CString("r_tarsal_proximal_phalanx_2"));
HAnimSegment122.setDEF(CString("hanim_r_tarsal_proximal_phalanx_2"));
Transform& Transform123 =  Transform();
Transform123.setTranslation(new float[]{-0.05,-0.9,0});
Shape& Shape124 =  Shape();
Shape124.setUSE(CString("HAnimJointShape"));
Transform123.addChild(&Shape124);

HAnimSegment122.addChild(&Transform123);

Shape& Shape125 =  Shape();
Appearance& Appearance126 =  Appearance();
Material& Material127 =  Material();
Material127.setEmissiveColor(new float[]{1,1,1});
Appearance126.addChild(&Material127);

Shape125.addChild(&Appearance126);

IndexedLineSet& IndexedLineSet128 =  IndexedLineSet();
IndexedLineSet128.setDEF(CString("MTP2toPIP2"));
IndexedLineSet128.setCoordIndex(new int32_t[]{0,1}, 2);
Coordinate& Coordinate129 =  Coordinate();
Coordinate129.setPoint(new float[]{-0.05,-0.9,0,-0.05,-1.05,0}, 6);
IndexedLineSet128.setCoord(&Coordinate129);

Shape125.setGeometry(&IndexedLineSet128);

HAnimSegment122.addChild(&Shape125);

HAnimJoint121.addChildren(&HAnimSegment122);

HAnimJoint& HAnimJoint130 =  HAnimJoint();
HAnimJoint130.X3DNode::setName(CString("r_tarsal_proximal_interphalangeal_2"));
HAnimJoint130.setDEF(CString("hanim_r_tarsal_proximal_interphalangeal_2"));
HAnimJoint130.setCenter(new float[]{-0.05,-1.05,0});
HAnimSegment& HAnimSegment131 =  HAnimSegment();
HAnimSegment131.X3DNode::setName(CString("r_tarsal_middle_phalanx_2"));
HAnimSegment131.setDEF(CString("hanim_r_tarsal_middle_phalanx_2"));
Transform& Transform132 =  Transform();
Transform132.setTranslation(new float[]{-0.05,-1.05,0});
Shape& Shape133 =  Shape();
Shape133.setUSE(CString("HAnimJointShape"));
Transform132.addChild(&Shape133);

HAnimSegment131.addChild(&Transform132);

Shape& Shape134 =  Shape();
Appearance& Appearance135 =  Appearance();
Material& Material136 =  Material();
Material136.setEmissiveColor(new float[]{1,1,1});
Appearance135.addChild(&Material136);

Shape134.addChild(&Appearance135);

IndexedLineSet& IndexedLineSet137 =  IndexedLineSet();
IndexedLineSet137.setDEF(CString("PIP2toDIP2"));
IndexedLineSet137.setCoordIndex(new int32_t[]{0,1}, 2);
Coordinate& Coordinate138 =  Coordinate();
Coordinate138.setPoint(new float[]{-0.05,-1.05,0,-0.05,-1.12,0}, 6);
IndexedLineSet137.setCoord(&Coordinate138);

Shape134.setGeometry(&IndexedLineSet137);

HAnimSegment131.addChild(&Shape134);

HAnimJoint130.addChildren(&HAnimSegment131);

HAnimJoint& HAnimJoint139 =  HAnimJoint();
HAnimJoint139.X3DNode::setName(CString("r_tarsal_distal_interphalangeal_2"));
HAnimJoint139.setDEF(CString("hanim_r_tarsal_distal_interphalangeal_2"));
HAnimJoint139.setCenter(new float[]{-0.05,-1.12,0});
HAnimSegment& HAnimSegment140 =  HAnimSegment();
HAnimSegment140.X3DNode::setName(CString("r_tarsal_distal_phalanx_2"));
HAnimSegment140.setDEF(CString("hanim_r_tarsal_distal_phalanx_2"));
Transform& Transform141 =  Transform();
Transform141.setTranslation(new float[]{-0.05,-1.12,0});
Shape& Shape142 =  Shape();
Shape142.setUSE(CString("HAnimJointShape"));
Transform141.addChild(&Shape142);

HAnimSegment140.addChild(&Transform141);

Shape& Shape143 =  Shape();
Appearance& Appearance144 =  Appearance();
Material& Material145 =  Material();
Material145.setEmissiveColor(new float[]{1,1,1});
Appearance144.addChild(&Material145);

Shape143.addChild(&Appearance144);

IndexedLineSet& IndexedLineSet146 =  IndexedLineSet();
IndexedLineSet146.setDEF(CString("tiptoe_r_tarsal_distal_interphalangeal_2"));
IndexedLineSet146.setCoordIndex(new int32_t[]{0,1}, 2);
Coordinate& Coordinate147 =  Coordinate();
Coordinate147.setPoint(new float[]{-0.05,-1.12,0,-0.05,-1.16,0}, 6);
IndexedLineSet146.setCoord(&Coordinate147);

Shape143.setGeometry(&IndexedLineSet146);

HAnimSegment140.addChild(&Shape143);

HAnimJoint139.addChildren(&HAnimSegment140);

HAnimJoint130.addChildren(&HAnimJoint139);

HAnimJoint121.addChildren(&HAnimJoint130);

HAnimJoint112.addChildren(&HAnimJoint121);

HAnimJoint103.addChildren(&HAnimJoint112);

HAnimJoint48.addChildren(&HAnimJoint103);

//CN3
HAnimJoint& HAnimJoint148 =  HAnimJoint();
HAnimJoint148.X3DNode::setName(CString("r_cuneonavicular_3"));
HAnimJoint148.setDEF(CString("hanim_r_cuneonavicular_3"));
HAnimJoint148.setCenter(new float[]{-0.1,-0.4,0});
HAnimSegment& HAnimSegment149 =  HAnimSegment();
HAnimSegment149.X3DNode::setName(CString("r_cuneiform_3"));
HAnimSegment149.setDEF(CString("hanim_r_cuneiform_3"));
Transform& Transform150 =  Transform();
Transform150.setTranslation(new float[]{-0.1,-0.4,0});
Shape& Shape151 =  Shape();
Shape151.setUSE(CString("HAnimJointShape"));
Transform150.addChild(&Shape151);

HAnimSegment149.addChild(&Transform150);

Shape& Shape152 =  Shape();
Appearance& Appearance153 =  Appearance();
Material& Material154 =  Material();
Material154.setEmissiveColor(new float[]{1,1,1});
Appearance153.addChild(&Material154);

Shape152.addChild(&Appearance153);

IndexedLineSet& IndexedLineSet155 =  IndexedLineSet();
IndexedLineSet155.setDEF(CString("CN3toTMT3"));
IndexedLineSet155.setCoordIndex(new int32_t[]{0,1}, 2);
Coordinate& Coordinate156 =  Coordinate();
Coordinate156.setPoint(new float[]{-0.1,-0.4,0,-0.15,-0.6,0}, 6);
IndexedLineSet155.setCoord(&Coordinate156);

Shape152.setGeometry(&IndexedLineSet155);

HAnimSegment149.addChild(&Shape152);

HAnimJoint148.addChildren(&HAnimSegment149);

HAnimJoint& HAnimJoint157 =  HAnimJoint();
HAnimJoint157.X3DNode::setName(CString("r_tarsometatarsal_3"));
HAnimJoint157.setDEF(CString("hanim_r_tarsometatarsal_3"));
HAnimJoint157.setCenter(new float[]{-0.15,-0.6,0});
HAnimSegment& HAnimSegment158 =  HAnimSegment();
HAnimSegment158.X3DNode::setName(CString("r_metatarsal_3"));
HAnimSegment158.setDEF(CString("hanim_r_metatarsal_3"));
Transform& Transform159 =  Transform();
Transform159.setTranslation(new float[]{-0.15,-0.6,0});
Shape& Shape160 =  Shape();
Shape160.setUSE(CString("HAnimJointShape"));
Transform159.addChild(&Shape160);

HAnimSegment158.addChild(&Transform159);

Shape& Shape161 =  Shape();
Appearance& Appearance162 =  Appearance();
Material& Material163 =  Material();
Material163.setEmissiveColor(new float[]{1,1,1});
Appearance162.addChild(&Material163);

Shape161.addChild(&Appearance162);

IndexedLineSet& IndexedLineSet164 =  IndexedLineSet();
IndexedLineSet164.setDEF(CString("TMT3toMTP3"));
IndexedLineSet164.setCoordIndex(new int32_t[]{0,1}, 2);
Coordinate& Coordinate165 =  Coordinate();
Coordinate165.setPoint(new float[]{-0.15,-0.6,0,-0.15,-0.9,0}, 6);
IndexedLineSet164.setCoord(&Coordinate165);

Shape161.setGeometry(&IndexedLineSet164);

HAnimSegment158.addChild(&Shape161);

HAnimJoint157.addChildren(&HAnimSegment158);

HAnimJoint& HAnimJoint166 =  HAnimJoint();
HAnimJoint166.X3DNode::setName(CString("r_metatarsophalangeal_3"));
HAnimJoint166.setDEF(CString("hanim_r_metatarsophalangeal_3"));
HAnimJoint166.setCenter(new float[]{-0.15,-0.9,0});
HAnimSegment& HAnimSegment167 =  HAnimSegment();
HAnimSegment167.X3DNode::setName(CString("r_tarsal_proximal_phalanx_3"));
HAnimSegment167.setDEF(CString("hanim_r_tarsal_proximal_phalanx_3"));
Transform& Transform168 =  Transform();
Transform168.setTranslation(new float[]{-0.15,-0.9,0});
Shape& Shape169 =  Shape();
Shape169.setUSE(CString("HAnimJointShape"));
Transform168.addChild(&Shape169);

HAnimSegment167.addChild(&Transform168);

Shape& Shape170 =  Shape();
Appearance& Appearance171 =  Appearance();
Material& Material172 =  Material();
Material172.setEmissiveColor(new float[]{1,1,1});
Appearance171.addChild(&Material172);

Shape170.addChild(&Appearance171);

IndexedLineSet& IndexedLineSet173 =  IndexedLineSet();
IndexedLineSet173.setDEF(CString("MTP3toPIP3"));
IndexedLineSet173.setCoordIndex(new int32_t[]{0,1}, 2);
Coordinate& Coordinate174 =  Coordinate();
Coordinate174.setPoint(new float[]{-0.15,-0.9,0,-0.15,-1.05,0}, 6);
IndexedLineSet173.setCoord(&Coordinate174);

Shape170.setGeometry(&IndexedLineSet173);

HAnimSegment167.addChild(&Shape170);

HAnimJoint166.addChildren(&HAnimSegment167);

HAnimJoint& HAnimJoint175 =  HAnimJoint();
HAnimJoint175.X3DNode::setName(CString("r_tarsal_proximal_interphalangeal_3"));
HAnimJoint175.setDEF(CString("hanim_r_tarsal_proximal_interphalangeal_3"));
HAnimJoint175.setCenter(new float[]{-0.15,-1.05,0});
HAnimSegment& HAnimSegment176 =  HAnimSegment();
HAnimSegment176.X3DNode::setName(CString("r_tarsal_middle_phalanx_3"));
HAnimSegment176.setDEF(CString("hanim_r_tarsal_middle_phalanx_3"));
Transform& Transform177 =  Transform();
Transform177.setTranslation(new float[]{-0.15,-1.05,0});
Shape& Shape178 =  Shape();
Shape178.setUSE(CString("HAnimJointShape"));
Transform177.addChild(&Shape178);

HAnimSegment176.addChild(&Transform177);

Shape& Shape179 =  Shape();
Appearance& Appearance180 =  Appearance();
Material& Material181 =  Material();
Material181.setEmissiveColor(new float[]{1,1,1});
Appearance180.addChild(&Material181);

Shape179.addChild(&Appearance180);

IndexedLineSet& IndexedLineSet182 =  IndexedLineSet();
IndexedLineSet182.setDEF(CString("PIP3toDIP3"));
IndexedLineSet182.setCoordIndex(new int32_t[]{0,1}, 2);
Coordinate& Coordinate183 =  Coordinate();
Coordinate183.setPoint(new float[]{-0.15,-1.05,0,-0.15,-1.13,0}, 6);
IndexedLineSet182.setCoord(&Coordinate183);

Shape179.setGeometry(&IndexedLineSet182);

HAnimSegment176.addChild(&Shape179);

HAnimJoint175.addChildren(&HAnimSegment176);

HAnimJoint& HAnimJoint184 =  HAnimJoint();
HAnimJoint184.X3DNode::setName(CString("r_tarsal_distal_interphalangeal_3"));
HAnimJoint184.setDEF(CString("hanim_r_tarsal_distal_interphalangeal_3"));
HAnimJoint184.setCenter(new float[]{-0.15,-1.13,0});
HAnimSegment& HAnimSegment185 =  HAnimSegment();
HAnimSegment185.X3DNode::setName(CString("r_tarsal_distal_phalanx_3"));
HAnimSegment185.setDEF(CString("hanim_r_tarsal_distal_phalanx_3"));
Transform& Transform186 =  Transform();
Transform186.setTranslation(new float[]{-0.15,-1.13,0});
Shape& Shape187 =  Shape();
Shape187.setUSE(CString("HAnimJointShape"));
Transform186.addChild(&Shape187);

HAnimSegment185.addChild(&Transform186);

Shape& Shape188 =  Shape();
Appearance& Appearance189 =  Appearance();
Material& Material190 =  Material();
Material190.setEmissiveColor(new float[]{1,1,1});
Appearance189.addChild(&Material190);

Shape188.addChild(&Appearance189);

IndexedLineSet& IndexedLineSet191 =  IndexedLineSet();
IndexedLineSet191.setDEF(CString("tiptoe_r_tarsal_distal_interphalangeal_3"));
IndexedLineSet191.setCoordIndex(new int32_t[]{0,1}, 2);
Coordinate& Coordinate192 =  Coordinate();
Coordinate192.setPoint(new float[]{-0.15,-1.13,0,-0.15,-1.16,0}, 6);
IndexedLineSet191.setCoord(&Coordinate192);

Shape188.setGeometry(&IndexedLineSet191);

HAnimSegment185.addChild(&Shape188);

HAnimJoint184.addChildren(&HAnimSegment185);

HAnimJoint175.addChildren(&HAnimJoint184);

HAnimJoint166.addChildren(&HAnimJoint175);

HAnimJoint157.addChildren(&HAnimJoint166);

HAnimJoint148.addChildren(&HAnimJoint157);

HAnimJoint48.addChildren(&HAnimJoint148);

HAnimJoint31.addChildren(&HAnimJoint48);

//CC
HAnimJoint& HAnimJoint193 =  HAnimJoint();
HAnimJoint193.X3DNode::setName(CString("r_calcaneocuboid"));
HAnimJoint193.setDEF(CString("hanim_r_calcaneocuboid"));
HAnimJoint193.setCenter(new float[]{-0.2,0.3,0});
HAnimSegment& HAnimSegment194 =  HAnimSegment();
HAnimSegment194.X3DNode::setName(CString("r_calcaneus"));
HAnimSegment194.setDEF(CString("hanim_r_calcaneus"));
Transform& Transform195 =  Transform();
Transform195.setTranslation(new float[]{-0.2,0.3,0});
Shape& Shape196 =  Shape();
Shape196.setUSE(CString("HAnimJointShape"));
Transform195.addChild(&Shape196);

HAnimSegment194.addChild(&Transform195);

Shape& Shape197 =  Shape();
Appearance& Appearance198 =  Appearance();
Material& Material199 =  Material();
Material199.setEmissiveColor(new float[]{1,1,1});
Appearance198.addChild(&Material199);

Shape197.addChild(&Appearance198);

IndexedLineSet& IndexedLineSet200 =  IndexedLineSet();
IndexedLineSet200.setDEF(CString("CCtoTT"));
IndexedLineSet200.setCoordIndex(new int32_t[]{0,1}, 2);
Coordinate& Coordinate201 =  Coordinate();
Coordinate201.setPoint(new float[]{-0.2,0.3,0,-0.21,-0.3,0}, 6);
IndexedLineSet200.setCoord(&Coordinate201);

Shape197.setGeometry(&IndexedLineSet200);

HAnimSegment194.addChild(&Shape197);

HAnimJoint193.addChildren(&HAnimSegment194);

//TT
HAnimJoint& HAnimJoint202 =  HAnimJoint();
HAnimJoint202.X3DNode::setName(CString("r_transversetarsal"));
HAnimJoint202.setDEF(CString("hanim_r_transversetarsal"));
HAnimJoint202.setCenter(new float[]{-0.21,-0.3,0});
HAnimSegment& HAnimSegment203 =  HAnimSegment();
HAnimSegment203.X3DNode::setName(CString("r_cuboid"));
HAnimSegment203.setDEF(CString("hanim_r_cuboid"));
Transform& Transform204 =  Transform();
Transform204.setTranslation(new float[]{-0.21,-0.3,0});
Shape& Shape205 =  Shape();
Shape205.setUSE(CString("HAnimJointShape"));
Transform204.addChild(&Shape205);

HAnimSegment203.addChild(&Transform204);

Shape& Shape206 =  Shape();
Appearance& Appearance207 =  Appearance();
Material& Material208 =  Material();
Material208.setEmissiveColor(new float[]{1,1,1});
Appearance207.addChild(&Material208);

Shape206.addChild(&Appearance207);

IndexedLineSet& IndexedLineSet209 =  IndexedLineSet();
IndexedLineSet209.setDEF(CString("TTtoTMT4"));
IndexedLineSet209.setCoordIndex(new int32_t[]{0,1}, 2);
Coordinate& Coordinate210 =  Coordinate();
Coordinate210.setPoint(new float[]{-0.21,-0.3,0,-0.25,-0.58,0}, 6);
IndexedLineSet209.setCoord(&Coordinate210);

Shape206.setGeometry(&IndexedLineSet209);

HAnimSegment203.addChild(&Shape206);

Shape& Shape211 =  Shape();
Appearance& Appearance212 =  Appearance();
Material& Material213 =  Material();
Material213.setEmissiveColor(new float[]{1,1,1});
Appearance212.addChild(&Material213);

Shape211.addChild(&Appearance212);

IndexedLineSet& IndexedLineSet214 =  IndexedLineSet();
IndexedLineSet214.setDEF(CString("TTtoTMT5"));
IndexedLineSet214.setCoordIndex(new int32_t[]{0,1}, 2);
Coordinate& Coordinate215 =  Coordinate();
Coordinate215.setPoint(new float[]{-0.21,-0.3,0,-0.33,-0.52,0}, 6);
IndexedLineSet214.setCoord(&Coordinate215);

Shape211.setGeometry(&IndexedLineSet214);

HAnimSegment203.addChild(&Shape211);

HAnimJoint202.addChildren(&HAnimSegment203);

//TMT4
HAnimJoint& HAnimJoint216 =  HAnimJoint();
HAnimJoint216.X3DNode::setName(CString("r_tarsometatarsal_4"));
HAnimJoint216.setDEF(CString("hanim_r_tarsometatarsal_4"));
HAnimJoint216.setCenter(new float[]{-0.25,-0.58,0});
HAnimSegment& HAnimSegment217 =  HAnimSegment();
HAnimSegment217.X3DNode::setName(CString("r_metatarsal_4"));
HAnimSegment217.setDEF(CString("hanim_r_metatarsal_4"));
Transform& Transform218 =  Transform();
Transform218.setTranslation(new float[]{-0.25,-0.58,0});
Shape& Shape219 =  Shape();
Shape219.setUSE(CString("HAnimJointShape"));
Transform218.addChild(&Shape219);

HAnimSegment217.addChild(&Transform218);

Shape& Shape220 =  Shape();
Appearance& Appearance221 =  Appearance();
Material& Material222 =  Material();
Material222.setEmissiveColor(new float[]{1,1,1});
Appearance221.addChild(&Material222);

Shape220.addChild(&Appearance221);

IndexedLineSet& IndexedLineSet223 =  IndexedLineSet();
IndexedLineSet223.setDEF(CString("TMT4toMTP4"));
IndexedLineSet223.setCoordIndex(new int32_t[]{0,1}, 2);
Coordinate& Coordinate224 =  Coordinate();
Coordinate224.setPoint(new float[]{-0.25,-0.58,0,-0.25,-0.87,0}, 6);
IndexedLineSet223.setCoord(&Coordinate224);

Shape220.setGeometry(&IndexedLineSet223);

HAnimSegment217.addChild(&Shape220);

HAnimJoint216.addChildren(&HAnimSegment217);

HAnimJoint& HAnimJoint225 =  HAnimJoint();
HAnimJoint225.X3DNode::setName(CString("r_metatarsophalangeal_4"));
HAnimJoint225.setDEF(CString("hanim_r_metatarsophalangeal_4"));
HAnimJoint225.setCenter(new float[]{-0.25,-0.87,0});
HAnimSegment& HAnimSegment226 =  HAnimSegment();
HAnimSegment226.X3DNode::setName(CString("r_tarsal_proximal_phalanx_4"));
HAnimSegment226.setDEF(CString("hanim_r_tarsal_proximal_phalanx_4"));
Transform& Transform227 =  Transform();
Transform227.setTranslation(new float[]{-0.25,-0.87,0});
Shape& Shape228 =  Shape();
Shape228.setUSE(CString("HAnimJointShape"));
Transform227.addChild(&Shape228);

HAnimSegment226.addChild(&Transform227);

Shape& Shape229 =  Shape();
Appearance& Appearance230 =  Appearance();
Material& Material231 =  Material();
Material231.setEmissiveColor(new float[]{1,1,1});
Appearance230.addChild(&Material231);

Shape229.addChild(&Appearance230);

IndexedLineSet& IndexedLineSet232 =  IndexedLineSet();
IndexedLineSet232.setDEF(CString("MTP4toPIP4"));
IndexedLineSet232.setCoordIndex(new int32_t[]{0,1}, 2);
Coordinate& Coordinate233 =  Coordinate();
Coordinate233.setPoint(new float[]{-0.25,-0.87,0,-0.25,-1,0}, 6);
IndexedLineSet232.setCoord(&Coordinate233);

Shape229.setGeometry(&IndexedLineSet232);

HAnimSegment226.addChild(&Shape229);

HAnimJoint225.addChildren(&HAnimSegment226);

HAnimJoint& HAnimJoint234 =  HAnimJoint();
HAnimJoint234.X3DNode::setName(CString("r_tarsal_proximal_interphalangeal_4"));
HAnimJoint234.setDEF(CString("hanim_r_tarsal_proximal_interphalangeal_4"));
HAnimJoint234.setCenter(new float[]{-0.25,-1,0});
HAnimSegment& HAnimSegment235 =  HAnimSegment();
HAnimSegment235.X3DNode::setName(CString("r_tarsal_middle_phalanx_4"));
HAnimSegment235.setDEF(CString("hanim_r_tarsal_middle_phalanx_4"));
Transform& Transform236 =  Transform();
Transform236.setTranslation(new float[]{-0.25,-1,0});
Shape& Shape237 =  Shape();
Shape237.setUSE(CString("HAnimJointShape"));
Transform236.addChild(&Shape237);

HAnimSegment235.addChild(&Transform236);

Shape& Shape238 =  Shape();
Appearance& Appearance239 =  Appearance();
Material& Material240 =  Material();
Material240.setEmissiveColor(new float[]{1,1,1});
Appearance239.addChild(&Material240);

Shape238.addChild(&Appearance239);

IndexedLineSet& IndexedLineSet241 =  IndexedLineSet();
IndexedLineSet241.setDEF(CString("PIP4toDIP4"));
IndexedLineSet241.setCoordIndex(new int32_t[]{0,1}, 2);
Coordinate& Coordinate242 =  Coordinate();
Coordinate242.setPoint(new float[]{-0.25,-1,0,-0.25,-1.1,0}, 6);
IndexedLineSet241.setCoord(&Coordinate242);

Shape238.setGeometry(&IndexedLineSet241);

HAnimSegment235.addChild(&Shape238);

HAnimJoint234.addChildren(&HAnimSegment235);

HAnimJoint& HAnimJoint243 =  HAnimJoint();
HAnimJoint243.X3DNode::setName(CString("r_tarsal_distal_interphalangeal_4"));
HAnimJoint243.setDEF(CString("hanim_r_tarsal_distal_interphalangeal_4"));
HAnimJoint243.setCenter(new float[]{-0.25,-1.1,0});
HAnimSegment& HAnimSegment244 =  HAnimSegment();
HAnimSegment244.X3DNode::setName(CString("r_tarsal_distal_phalanx_4"));
HAnimSegment244.setDEF(CString("hanim_r_tarsal_distal_phalanx_4"));
Transform& Transform245 =  Transform();
Transform245.setTranslation(new float[]{-0.25,-1.1,0});
Shape& Shape246 =  Shape();
Shape246.setUSE(CString("HAnimJointShape"));
Transform245.addChild(&Shape246);

HAnimSegment244.addChild(&Transform245);

Shape& Shape247 =  Shape();
Appearance& Appearance248 =  Appearance();
Material& Material249 =  Material();
Material249.setEmissiveColor(new float[]{1,1,1});
Appearance248.addChild(&Material249);

Shape247.addChild(&Appearance248);

IndexedLineSet& IndexedLineSet250 =  IndexedLineSet();
IndexedLineSet250.setDEF(CString("tiptoe_r_tarsal_distal_interphalangeal_4"));
IndexedLineSet250.setCoordIndex(new int32_t[]{0,1}, 2);
Coordinate& Coordinate251 =  Coordinate();
Coordinate251.setPoint(new float[]{-0.25,-1.1,0,-0.25,-1.15,0}, 6);
IndexedLineSet250.setCoord(&Coordinate251);

Shape247.setGeometry(&IndexedLineSet250);

HAnimSegment244.addChild(&Shape247);

HAnimJoint243.addChildren(&HAnimSegment244);

HAnimJoint234.addChildren(&HAnimJoint243);

HAnimJoint225.addChildren(&HAnimJoint234);

HAnimJoint216.addChildren(&HAnimJoint225);

HAnimJoint202.addChildren(&HAnimJoint216);

//TMT5
HAnimJoint& HAnimJoint252 =  HAnimJoint();
HAnimJoint252.X3DNode::setName(CString("r_tarsometatarsal_5"));
HAnimJoint252.setDEF(CString("hanim_r_tarsometatarsal_5"));
HAnimJoint252.setCenter(new float[]{-0.33,-0.52,0});
HAnimSegment& HAnimSegment253 =  HAnimSegment();
HAnimSegment253.X3DNode::setName(CString("r_metatarsal_5"));
HAnimSegment253.setDEF(CString("hanim_r_metatarsal_5"));
Transform& Transform254 =  Transform();
Transform254.setTranslation(new float[]{-0.33,-0.52,0});
Shape& Shape255 =  Shape();
Shape255.setUSE(CString("HAnimJointShape"));
Transform254.addChild(&Shape255);

HAnimSegment253.addChild(&Transform254);

Shape& Shape256 =  Shape();
Appearance& Appearance257 =  Appearance();
Material& Material258 =  Material();
Material258.setEmissiveColor(new float[]{1,1,1});
Appearance257.addChild(&Material258);

Shape256.addChild(&Appearance257);

IndexedLineSet& IndexedLineSet259 =  IndexedLineSet();
IndexedLineSet259.setDEF(CString("TMT5toMTP5"));
IndexedLineSet259.setCoordIndex(new int32_t[]{0,1}, 2);
Coordinate& Coordinate260 =  Coordinate();
Coordinate260.setPoint(new float[]{-0.33,-0.52,0,-0.34,-0.8,0}, 6);
IndexedLineSet259.setCoord(&Coordinate260);

Shape256.setGeometry(&IndexedLineSet259);

HAnimSegment253.addChild(&Shape256);

HAnimJoint252.addChildren(&HAnimSegment253);

HAnimJoint& HAnimJoint261 =  HAnimJoint();
HAnimJoint261.X3DNode::setName(CString("r_metatarsophalangeal_5"));
HAnimJoint261.setDEF(CString("hanim_r_metatarsophalangeal_5"));
HAnimJoint261.setCenter(new float[]{-0.34,-0.8,0});
HAnimSegment& HAnimSegment262 =  HAnimSegment();
HAnimSegment262.X3DNode::setName(CString("r_tarsal_proximal_phalanx_5"));
HAnimSegment262.setDEF(CString("hanim_r_tarsal_proximal_phalanx_5"));
Transform& Transform263 =  Transform();
Transform263.setTranslation(new float[]{-0.34,-0.8,0});
Shape& Shape264 =  Shape();
Shape264.setUSE(CString("HAnimJointShape"));
Transform263.addChild(&Shape264);

HAnimSegment262.addChild(&Transform263);

Shape& Shape265 =  Shape();
Appearance& Appearance266 =  Appearance();
Material& Material267 =  Material();
Material267.setEmissiveColor(new float[]{1,1,1});
Appearance266.addChild(&Material267);

Shape265.addChild(&Appearance266);

IndexedLineSet& IndexedLineSet268 =  IndexedLineSet();
IndexedLineSet268.setDEF(CString("MTP5toPIP5"));
IndexedLineSet268.setCoordIndex(new int32_t[]{0,1}, 2);
Coordinate& Coordinate269 =  Coordinate();
Coordinate269.setPoint(new float[]{-0.34,-0.8,0,-0.34,-0.95,0}, 6);
IndexedLineSet268.setCoord(&Coordinate269);

Shape265.setGeometry(&IndexedLineSet268);

HAnimSegment262.addChild(&Shape265);

HAnimJoint261.addChildren(&HAnimSegment262);

HAnimJoint& HAnimJoint270 =  HAnimJoint();
HAnimJoint270.X3DNode::setName(CString("r_tarsal_proximal_interphalangeal_5"));
HAnimJoint270.setDEF(CString("hanim_r_tarsal_proximal_interphalangeal_5"));
HAnimJoint270.setCenter(new float[]{-0.34,-0.95,0});
HAnimSegment& HAnimSegment271 =  HAnimSegment();
HAnimSegment271.X3DNode::setName(CString("r_tarsal_middle_phalanx_5"));
HAnimSegment271.setDEF(CString("hanim_r_tarsal_middle_phalanx_5"));
Transform& Transform272 =  Transform();
Transform272.setTranslation(new float[]{-0.34,-0.95,0});
Shape& Shape273 =  Shape();
Shape273.setUSE(CString("HAnimJointShape"));
Transform272.addChild(&Shape273);

HAnimSegment271.addChild(&Transform272);

Shape& Shape274 =  Shape();
Appearance& Appearance275 =  Appearance();
Material& Material276 =  Material();
Material276.setEmissiveColor(new float[]{1,1,1});
Appearance275.addChild(&Material276);

Shape274.addChild(&Appearance275);

IndexedLineSet& IndexedLineSet277 =  IndexedLineSet();
IndexedLineSet277.setDEF(CString("PIP5toDIP5"));
IndexedLineSet277.setCoordIndex(new int32_t[]{0,1}, 2);
Coordinate& Coordinate278 =  Coordinate();
Coordinate278.setPoint(new float[]{-0.34,-0.95,0,-0.34,-1.05,0}, 6);
IndexedLineSet277.setCoord(&Coordinate278);

Shape274.setGeometry(&IndexedLineSet277);

HAnimSegment271.addChild(&Shape274);

HAnimJoint270.addChildren(&HAnimSegment271);

HAnimJoint& HAnimJoint279 =  HAnimJoint();
HAnimJoint279.X3DNode::setName(CString("r_tarsal_distal_interphalangeal_5"));
HAnimJoint279.setDEF(CString("hanim_r_tarsal_distal_interphalangeal_5"));
HAnimJoint279.setCenter(new float[]{-0.34,-1.05,0});
HAnimSegment& HAnimSegment280 =  HAnimSegment();
HAnimSegment280.X3DNode::setName(CString("r_tarsal_distal_phalanx_5"));
HAnimSegment280.setDEF(CString("hanim_r_tarsal_distal_phalanx_5"));
Transform& Transform281 =  Transform();
Transform281.setTranslation(new float[]{-0.34,-1.05,0});
Shape& Shape282 =  Shape();
Shape282.setUSE(CString("HAnimJointShape"));
Transform281.addChild(&Shape282);

HAnimSegment280.addChild(&Transform281);

Shape& Shape283 =  Shape();
Appearance& Appearance284 =  Appearance();
Material& Material285 =  Material();
Material285.setEmissiveColor(new float[]{1,1,1});
Appearance284.addChild(&Material285);

Shape283.addChild(&Appearance284);

IndexedLineSet& IndexedLineSet286 =  IndexedLineSet();
IndexedLineSet286.setDEF(CString("tiptoe_r_tarsal_distal_interphalangeal_5"));
IndexedLineSet286.setCoordIndex(new int32_t[]{0,1}, 2);
Coordinate& Coordinate287 =  Coordinate();
Coordinate287.setPoint(new float[]{-0.34,-1.05,0,-0.34,-1.08,0}, 6);
IndexedLineSet286.setCoord(&Coordinate287);

Shape283.setGeometry(&IndexedLineSet286);

HAnimSegment280.addChild(&Shape283);

HAnimJoint279.addChildren(&HAnimSegment280);

HAnimJoint270.addChildren(&HAnimJoint279);

HAnimJoint261.addChildren(&HAnimJoint270);

HAnimJoint252.addChildren(&HAnimJoint261);

HAnimJoint202.addChildren(&HAnimJoint252);

HAnimJoint193.addChildren(&HAnimJoint202);

HAnimJoint31.addChildren(&HAnimJoint193);

HAnimJoint30.addChildren(&HAnimJoint31);

HAnimHumanoid27.setSkeleton(&HAnimJoint30);

HAnimJoint& HAnimJoint288 =  HAnimJoint();
HAnimJoint288.setUSE(CString("hanim_humanoid_root"));
HAnimHumanoid27.setJoints(&HAnimJoint288);

HAnimJoint& HAnimJoint289 =  HAnimJoint();
HAnimJoint289.setUSE(CString("hanim_r_calcaneocuboid"));
HAnimHumanoid27.setJoints(&HAnimJoint289);

HAnimJoint& HAnimJoint290 =  HAnimJoint();
HAnimJoint290.setUSE(CString("hanim_r_cuneonavicular_1"));
HAnimHumanoid27.setJoints(&HAnimJoint290);

HAnimJoint& HAnimJoint291 =  HAnimJoint();
HAnimJoint291.setUSE(CString("hanim_r_cuneonavicular_2"));
HAnimHumanoid27.setJoints(&HAnimJoint291);

HAnimJoint& HAnimJoint292 =  HAnimJoint();
HAnimJoint292.setUSE(CString("hanim_r_cuneonavicular_3"));
HAnimHumanoid27.setJoints(&HAnimJoint292);

HAnimJoint& HAnimJoint293 =  HAnimJoint();
HAnimJoint293.setUSE(CString("hanim_r_metatarsophalangeal_1"));
HAnimHumanoid27.setJoints(&HAnimJoint293);

HAnimJoint& HAnimJoint294 =  HAnimJoint();
HAnimJoint294.setUSE(CString("hanim_r_metatarsophalangeal_2"));
HAnimHumanoid27.setJoints(&HAnimJoint294);

HAnimJoint& HAnimJoint295 =  HAnimJoint();
HAnimJoint295.setUSE(CString("hanim_r_metatarsophalangeal_3"));
HAnimHumanoid27.setJoints(&HAnimJoint295);

HAnimJoint& HAnimJoint296 =  HAnimJoint();
HAnimJoint296.setUSE(CString("hanim_r_metatarsophalangeal_4"));
HAnimHumanoid27.setJoints(&HAnimJoint296);

HAnimJoint& HAnimJoint297 =  HAnimJoint();
HAnimJoint297.setUSE(CString("hanim_r_metatarsophalangeal_5"));
HAnimHumanoid27.setJoints(&HAnimJoint297);

HAnimJoint& HAnimJoint298 =  HAnimJoint();
HAnimJoint298.setUSE(CString("hanim_r_talocalcaneonavicular"));
HAnimHumanoid27.setJoints(&HAnimJoint298);

HAnimJoint& HAnimJoint299 =  HAnimJoint();
HAnimJoint299.setUSE(CString("hanim_r_talocrural"));
HAnimHumanoid27.setJoints(&HAnimJoint299);

HAnimJoint& HAnimJoint300 =  HAnimJoint();
HAnimJoint300.setUSE(CString("hanim_r_tarsal_distal_interphalangeal_2"));
HAnimHumanoid27.setJoints(&HAnimJoint300);

HAnimJoint& HAnimJoint301 =  HAnimJoint();
HAnimJoint301.setUSE(CString("hanim_r_tarsal_distal_interphalangeal_3"));
HAnimHumanoid27.setJoints(&HAnimJoint301);

HAnimJoint& HAnimJoint302 =  HAnimJoint();
HAnimJoint302.setUSE(CString("hanim_r_tarsal_distal_interphalangeal_4"));
HAnimHumanoid27.setJoints(&HAnimJoint302);

HAnimJoint& HAnimJoint303 =  HAnimJoint();
HAnimJoint303.setUSE(CString("hanim_r_tarsal_distal_interphalangeal_5"));
HAnimHumanoid27.setJoints(&HAnimJoint303);

HAnimJoint& HAnimJoint304 =  HAnimJoint();
HAnimJoint304.setUSE(CString("hanim_r_tarsal_interphalangeal_1"));
HAnimHumanoid27.setJoints(&HAnimJoint304);

HAnimJoint& HAnimJoint305 =  HAnimJoint();
HAnimJoint305.setUSE(CString("hanim_r_tarsal_proximal_interphalangeal_2"));
HAnimHumanoid27.setJoints(&HAnimJoint305);

HAnimJoint& HAnimJoint306 =  HAnimJoint();
HAnimJoint306.setUSE(CString("hanim_r_tarsal_proximal_interphalangeal_3"));
HAnimHumanoid27.setJoints(&HAnimJoint306);

HAnimJoint& HAnimJoint307 =  HAnimJoint();
HAnimJoint307.setUSE(CString("hanim_r_tarsal_proximal_interphalangeal_4"));
HAnimHumanoid27.setJoints(&HAnimJoint307);

HAnimJoint& HAnimJoint308 =  HAnimJoint();
HAnimJoint308.setUSE(CString("hanim_r_tarsal_proximal_interphalangeal_5"));
HAnimHumanoid27.setJoints(&HAnimJoint308);

HAnimJoint& HAnimJoint309 =  HAnimJoint();
HAnimJoint309.setUSE(CString("hanim_r_tarsometatarsal_1"));
HAnimHumanoid27.setJoints(&HAnimJoint309);

HAnimJoint& HAnimJoint310 =  HAnimJoint();
HAnimJoint310.setUSE(CString("hanim_r_tarsometatarsal_2"));
HAnimHumanoid27.setJoints(&HAnimJoint310);

HAnimJoint& HAnimJoint311 =  HAnimJoint();
HAnimJoint311.setUSE(CString("hanim_r_tarsometatarsal_3"));
HAnimHumanoid27.setJoints(&HAnimJoint311);

HAnimJoint& HAnimJoint312 =  HAnimJoint();
HAnimJoint312.setUSE(CString("hanim_r_tarsometatarsal_4"));
HAnimHumanoid27.setJoints(&HAnimJoint312);

HAnimJoint& HAnimJoint313 =  HAnimJoint();
HAnimJoint313.setUSE(CString("hanim_r_tarsometatarsal_5"));
HAnimHumanoid27.setJoints(&HAnimJoint313);

HAnimJoint& HAnimJoint314 =  HAnimJoint();
HAnimJoint314.setUSE(CString("hanim_r_transversetarsal"));
HAnimHumanoid27.setJoints(&HAnimJoint314);

HAnimSegment& HAnimSegment315 =  HAnimSegment();
HAnimSegment315.setUSE(CString("hanim_r_calcaneus"));
HAnimHumanoid27.setSegments(&HAnimSegment315);

HAnimSegment& HAnimSegment316 =  HAnimSegment();
HAnimSegment316.setUSE(CString("hanim_r_cuboid"));
HAnimHumanoid27.setSegments(&HAnimSegment316);

HAnimSegment& HAnimSegment317 =  HAnimSegment();
HAnimSegment317.setUSE(CString("hanim_r_cuneiform_1"));
HAnimHumanoid27.setSegments(&HAnimSegment317);

HAnimSegment& HAnimSegment318 =  HAnimSegment();
HAnimSegment318.setUSE(CString("hanim_r_cuneiform_2"));
HAnimHumanoid27.setSegments(&HAnimSegment318);

HAnimSegment& HAnimSegment319 =  HAnimSegment();
HAnimSegment319.setUSE(CString("hanim_r_cuneiform_3"));
HAnimHumanoid27.setSegments(&HAnimSegment319);

HAnimSegment& HAnimSegment320 =  HAnimSegment();
HAnimSegment320.setUSE(CString("hanim_r_metatarsal_1"));
HAnimHumanoid27.setSegments(&HAnimSegment320);

HAnimSegment& HAnimSegment321 =  HAnimSegment();
HAnimSegment321.setUSE(CString("hanim_r_metatarsal_2"));
HAnimHumanoid27.setSegments(&HAnimSegment321);

HAnimSegment& HAnimSegment322 =  HAnimSegment();
HAnimSegment322.setUSE(CString("hanim_r_metatarsal_3"));
HAnimHumanoid27.setSegments(&HAnimSegment322);

HAnimSegment& HAnimSegment323 =  HAnimSegment();
HAnimSegment323.setUSE(CString("hanim_r_metatarsal_4"));
HAnimHumanoid27.setSegments(&HAnimSegment323);

HAnimSegment& HAnimSegment324 =  HAnimSegment();
HAnimSegment324.setUSE(CString("hanim_r_metatarsal_5"));
HAnimHumanoid27.setSegments(&HAnimSegment324);

HAnimSegment& HAnimSegment325 =  HAnimSegment();
HAnimSegment325.setUSE(CString("hanim_r_navicular"));
HAnimHumanoid27.setSegments(&HAnimSegment325);

HAnimSegment& HAnimSegment326 =  HAnimSegment();
HAnimSegment326.setUSE(CString("hanim_r_talus"));
HAnimHumanoid27.setSegments(&HAnimSegment326);

HAnimSegment& HAnimSegment327 =  HAnimSegment();
HAnimSegment327.setUSE(CString("hanim_r_tarsal_distal_phalanx_1"));
HAnimHumanoid27.setSegments(&HAnimSegment327);

HAnimSegment& HAnimSegment328 =  HAnimSegment();
HAnimSegment328.setUSE(CString("hanim_r_tarsal_distal_phalanx_2"));
HAnimHumanoid27.setSegments(&HAnimSegment328);

HAnimSegment& HAnimSegment329 =  HAnimSegment();
HAnimSegment329.setUSE(CString("hanim_r_tarsal_distal_phalanx_3"));
HAnimHumanoid27.setSegments(&HAnimSegment329);

HAnimSegment& HAnimSegment330 =  HAnimSegment();
HAnimSegment330.setUSE(CString("hanim_r_tarsal_distal_phalanx_4"));
HAnimHumanoid27.setSegments(&HAnimSegment330);

HAnimSegment& HAnimSegment331 =  HAnimSegment();
HAnimSegment331.setUSE(CString("hanim_r_tarsal_distal_phalanx_5"));
HAnimHumanoid27.setSegments(&HAnimSegment331);

HAnimSegment& HAnimSegment332 =  HAnimSegment();
HAnimSegment332.setUSE(CString("hanim_r_tarsal_middle_phalanx_2"));
HAnimHumanoid27.setSegments(&HAnimSegment332);

HAnimSegment& HAnimSegment333 =  HAnimSegment();
HAnimSegment333.setUSE(CString("hanim_r_tarsal_middle_phalanx_3"));
HAnimHumanoid27.setSegments(&HAnimSegment333);

HAnimSegment& HAnimSegment334 =  HAnimSegment();
HAnimSegment334.setUSE(CString("hanim_r_tarsal_middle_phalanx_4"));
HAnimHumanoid27.setSegments(&HAnimSegment334);

HAnimSegment& HAnimSegment335 =  HAnimSegment();
HAnimSegment335.setUSE(CString("hanim_r_tarsal_middle_phalanx_5"));
HAnimHumanoid27.setSegments(&HAnimSegment335);

HAnimSegment& HAnimSegment336 =  HAnimSegment();
HAnimSegment336.setUSE(CString("hanim_r_tarsal_proximal_phalanx_1"));
HAnimHumanoid27.setSegments(&HAnimSegment336);

HAnimSegment& HAnimSegment337 =  HAnimSegment();
HAnimSegment337.setUSE(CString("hanim_r_tarsal_proximal_phalanx_2"));
HAnimHumanoid27.setSegments(&HAnimSegment337);

HAnimSegment& HAnimSegment338 =  HAnimSegment();
HAnimSegment338.setUSE(CString("hanim_r_tarsal_proximal_phalanx_3"));
HAnimHumanoid27.setSegments(&HAnimSegment338);

HAnimSegment& HAnimSegment339 =  HAnimSegment();
HAnimSegment339.setUSE(CString("hanim_r_tarsal_proximal_phalanx_4"));
HAnimHumanoid27.setSegments(&HAnimSegment339);

HAnimSegment& HAnimSegment340 =  HAnimSegment();
HAnimSegment340.setUSE(CString("hanim_r_tarsal_proximal_phalanx_5"));
HAnimHumanoid27.setSegments(&HAnimSegment340);

Scene25.addChild(&HAnimHumanoid27);

X3D0.setScene(&Scene25);

}
