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
meta3.setContent(CString("HAnimModelHandLeft.x3d"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("description"));
meta4.setContent(CString("Left hand, using high-fidelity definitions for HAnim version 2.0"));
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
meta8.setName(CString("TODO"));
meta8.setContent(CString("fix visible geometry for thumb and index finger, midcarpal_1 and midcarpal_2"));
head1.addMeta(&meta8);

meta& meta9 =  meta();
meta9.setName(CString("Image"));
meta9.setContent(CString("HAnimModelHandRightSegmentVisualizationError.png"));
head1.addMeta(&meta9);

meta& meta10 =  meta();
meta10.setName(CString("error"));
meta10.setContent(CString("not yet to scale, also relatively flat"));
head1.addMeta(&meta10);

meta& meta11 =  meta();
meta11.setName(CString("warning"));
meta11.setContent(CString("TODO will X3D HAnim component add a new level to support LOA-4 functionality?"));
head1.addMeta(&meta11);

meta& meta12 =  meta();
meta12.setName(CString("info"));
meta12.setContent(CString("TODO describe how to compute and apply offsets for center values whenever attaching this appendage to a body"));
head1.addMeta(&meta12);

meta& meta13 =  meta();
meta13.setName(CString("reference"));
meta13.setContent(CString("https://www.web3d.org/working-groups/humanoid-animation-HAnim"));
head1.addMeta(&meta13);

meta& meta14 =  meta();
meta14.setName(CString("reference"));
meta14.setContent(CString("https://www.web3d.org/documents/specifications/19774/V2.0"));
head1.addMeta(&meta14);

meta& meta15 =  meta();
meta15.setName(CString("reference"));
meta15.setContent(CString("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#TheHands"));
head1.addMeta(&meta15);

meta& meta16 =  meta();
meta16.setName(CString("reference"));
meta16.setContent(CString("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#f-HandJoints"));
head1.addMeta(&meta16);

meta& meta17 =  meta();
meta17.setName(CString("reference"));
meta17.setContent(CString("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#Hierarchy4"));
head1.addMeta(&meta17);

meta& meta18 =  meta();
meta18.setName(CString("reference"));
meta18.setContent(CString("https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19775-1v4-WD2/Part01/components/hanim.html"));
head1.addMeta(&meta18);

meta& meta19 =  meta();
meta19.setName(CString("subject"));
meta19.setContent(CString("X3D HAnim humanoid animation"));
head1.addMeta(&meta19);

meta& meta20 =  meta();
meta20.setName(CString("TODO"));
meta20.setContent(CString("Integrate and confirm Segment/Joint names, Viewpoints."));
head1.addMeta(&meta20);

meta& meta21 =  meta();
meta21.setName(CString("identifier"));
meta21.setContent(CString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelHandLeft.x3d"));
head1.addMeta(&meta21);

meta& meta22 =  meta();
meta22.setName(CString("generator"));
meta22.setContent(CString("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"));
head1.addMeta(&meta22);

meta& meta23 =  meta();
meta23.setName(CString("license"));
meta23.setContent(CString("../license.html"));
head1.addMeta(&meta23);

X3D0.setHead(&head1);

Scene& Scene24 =  Scene();
WorldInfo& WorldInfo25 =  WorldInfo();
WorldInfo25.setTitle(CString("HAnimModelHandLeft.x3d"));
Scene24.addChild(&WorldInfo25);

HAnimHumanoid& HAnimHumanoid26 =  HAnimHumanoid();
HAnimHumanoid26.X3DNode::setName(CString("Hand_Left"));
HAnimHumanoid26.setDEF(CString("hanim_Hand_Left"));
HAnimHumanoid26.setLoa(4);
HAnimHumanoid26.setVersion(CString("2.0"));
//original HAnimHumanoid info='\"authorName=Kwan-Hee YOO, Don Brutzman and Joe Williams\"'
MetadataSet& MetadataSet27 =  MetadataSet();
MetadataSet27.X3DNode::setName(CString("HAnimHumanoid.info"));
MetadataSet27.X3DNode::setReference(CString("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid"));
MetadataString& MetadataString28 =  MetadataString();
MetadataString28.X3DNode::setName(CString("authorName"));
MetadataString28.setValue(new CString[]{CString("Kwan-Hee YOO, Don Brutzman and Joe Williams")}, 1);
MetadataSet27.setValue((X3DNode *)&MetadataString28);

HAnimHumanoid26.setMetadata(&MetadataSet27);

HAnimJoint& HAnimJoint29 =  HAnimJoint();
HAnimJoint29.X3DNode::setName(CString("humanoid_root"));
HAnimJoint29.setDEF(CString("hanim_humanoid_root"));
HAnimJoint29.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint29.setLlimit(new float[]{0,0,0}, 3);
//Might consider putting a HAnimSegment here, but that doesn't help with re-use of this hand model
HAnimJoint& HAnimJoint30 =  HAnimJoint();
HAnimJoint30.X3DNode::setName(CString("l_radiocarpal"));
HAnimJoint30.setDEF(CString("hanim_l_radiocarpal"));
HAnimJoint30.setDescription(CString("connection joint of hand to leg above"));
HAnimJoint30.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint30.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment31 =  HAnimSegment();
HAnimSegment31.X3DNode::setName(CString("l_carpal"));
HAnimSegment31.setDEF(CString("hanim_l_carpal"));
Transform& Transform32 =  Transform();
Shape& Shape33 =  Shape();
Shape33.setDEF(CString("HAnimJointShape"));
Sphere& Sphere34 =  Sphere();
Sphere34.setRadius(0.025);
Shape33.setGeometry(&Sphere34);

Appearance& Appearance35 =  Appearance();
Appearance35.setDEF(CString("HAnimJointAppearanceBlue"));
Material& Material36 =  Material();
Material36.setDiffuseColor(new float[]{0,0,1});
Appearance35.addChild(&Material36);

Shape33.addChild(&Appearance35);

Transform32.addChild(&Shape33);

HAnimSegment31.addChild(&Transform32);

Shape& Shape37 =  Shape();
Appearance& Appearance38 =  Appearance();
Material& Material39 =  Material();
Material39.setEmissiveColor(new float[]{1,1,1});
Appearance38.addChild(&Material39);

Shape37.addChild(&Appearance38);

IndexedLineSet& IndexedLineSet40 =  IndexedLineSet();
IndexedLineSet40.setDEF(CString("RCToMC12"));
IndexedLineSet40.setCoordIndex(new int32_t[]{0,1}, 2);
Coordinate& Coordinate41 =  Coordinate();
Coordinate41.setPoint(new float[]{0,0,0,0.1,0.1,0}, 6);
IndexedLineSet40.setCoord(&Coordinate41);

Shape37.setGeometry(&IndexedLineSet40);

HAnimSegment31.addChild(&Shape37);

Shape& Shape42 =  Shape();
Appearance& Appearance43 =  Appearance();
Material& Material44 =  Material();
Material44.setEmissiveColor(new float[]{1,1,1});
Appearance43.addChild(&Material44);

Shape42.addChild(&Appearance43);

IndexedLineSet& IndexedLineSet45 =  IndexedLineSet();
IndexedLineSet45.setDEF(CString("RCToMC3"));
IndexedLineSet45.setCoordIndex(new int32_t[]{0,1}, 2);
Coordinate& Coordinate46 =  Coordinate();
Coordinate46.setPoint(new float[]{0,0,0,0,0.07,0}, 6);
IndexedLineSet45.setCoord(&Coordinate46);

Shape42.setGeometry(&IndexedLineSet45);

HAnimSegment31.addChild(&Shape42);

Shape& Shape47 =  Shape();
Appearance& Appearance48 =  Appearance();
Material& Material49 =  Material();
Material49.setEmissiveColor(new float[]{1,1,1});
Appearance48.addChild(&Material49);

Shape47.addChild(&Appearance48);

IndexedLineSet& IndexedLineSet50 =  IndexedLineSet();
IndexedLineSet50.setDEF(CString("RCToMC45"));
IndexedLineSet50.setCoordIndex(new int32_t[]{0,1}, 2);
Coordinate& Coordinate51 =  Coordinate();
Coordinate51.setPoint(new float[]{0,0,0,-0.1,0.1,0}, 6);
IndexedLineSet50.setCoord(&Coordinate51);

Shape47.setGeometry(&IndexedLineSet50);

HAnimSegment31.addChild(&Shape47);

HAnimJoint30.addChildren(&HAnimSegment31);

//MC1
HAnimJoint& HAnimJoint52 =  HAnimJoint();
HAnimJoint52.X3DNode::setName(CString("l_midcarpal_1"));
HAnimJoint52.setDEF(CString("hanim_l_midcarpal_1"));
HAnimJoint52.setCenter(new float[]{0.14,0.09,0});
HAnimJoint52.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint52.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment53 =  HAnimSegment();
HAnimSegment53.X3DNode::setName(CString("l_trapezium"));
HAnimSegment53.setDEF(CString("hanim_l_trapezium"));
Transform& Transform54 =  Transform();
Transform54.setTranslation(new float[]{0.14,0.09,0});
Shape& Shape55 =  Shape();
Shape55.setDEF(CString("HAnimNewJointShape"));
Sphere& Sphere56 =  Sphere();
Sphere56.setRadius(0.025);
Shape55.setGeometry(&Sphere56);

Appearance& Appearance57 =  Appearance();
Appearance57.setDEF(CString("HAnimJointAppearanceRed"));
Material& Material58 =  Material();
Material58.setDiffuseColor(new float[]{1,0,0});
Appearance57.addChild(&Material58);

Shape55.addChild(&Appearance57);

Transform54.addChild(&Shape55);

HAnimSegment53.addChild(&Transform54);

Shape& Shape59 =  Shape();
Appearance& Appearance60 =  Appearance();
Material& Material61 =  Material();
Material61.setEmissiveColor(new float[]{1,1,1});
Appearance60.addChild(&Material61);

Shape59.addChild(&Appearance60);

IndexedLineSet& IndexedLineSet62 =  IndexedLineSet();
IndexedLineSet62.setDEF(CString("MC12toCMC1"));
IndexedLineSet62.setCoordIndex(new int32_t[]{0,1}, 2);
Coordinate& Coordinate63 =  Coordinate();
Coordinate63.setPoint(new float[]{0.1,0.1,0,0.2,0.15,0}, 6);
IndexedLineSet62.setCoord(&Coordinate63);

Shape59.setGeometry(&IndexedLineSet62);

HAnimSegment53.addChild(&Shape59);

Shape& Shape64 =  Shape();
Appearance& Appearance65 =  Appearance();
Material& Material66 =  Material();
Material66.setEmissiveColor(new float[]{1,1,1});
Appearance65.addChild(&Material66);

Shape64.addChild(&Appearance65);

IndexedLineSet& IndexedLineSet67 =  IndexedLineSet();
IndexedLineSet67.setDEF(CString("MC1toCMC1"));
IndexedLineSet67.setCoordIndex(new int32_t[]{0,1}, 2);
Coordinate& Coordinate68 =  Coordinate();
Coordinate68.setPoint(new float[]{0.1,0.1,0,0.1,0.2,0}, 6);
IndexedLineSet67.setCoord(&Coordinate68);

Shape64.setGeometry(&IndexedLineSet67);

HAnimSegment53.addChild(&Shape64);

HAnimJoint52.addChildren(&HAnimSegment53);

//thumb finger
HAnimJoint& HAnimJoint69 =  HAnimJoint();
HAnimJoint69.X3DNode::setName(CString("l_carpometacarpal_1"));
HAnimJoint69.setDEF(CString("hanim_l_carpometacarpal_1"));
HAnimJoint69.setCenter(new float[]{0.2,0.15,0});
HAnimJoint69.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint69.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment70 =  HAnimSegment();
HAnimSegment70.X3DNode::setName(CString("l_metacarpal_1"));
HAnimSegment70.setDEF(CString("hanim_l_metacarpal_1"));
Transform& Transform71 =  Transform();
Transform71.setTranslation(new float[]{0.2,0.15,0});
Shape& Shape72 =  Shape();
Shape72.setUSE(CString("HAnimJointShape"));
Transform71.addChild(&Shape72);

HAnimSegment70.addChild(&Transform71);

Shape& Shape73 =  Shape();
Appearance& Appearance74 =  Appearance();
Material& Material75 =  Material();
Material75.setEmissiveColor(new float[]{1,1,1});
Appearance74.addChild(&Material75);

Shape73.addChild(&Appearance74);

IndexedLineSet& IndexedLineSet76 =  IndexedLineSet();
IndexedLineSet76.setDEF(CString("CMC1toMCP1"));
IndexedLineSet76.setCoordIndex(new int32_t[]{0,1}, 2);
Coordinate& Coordinate77 =  Coordinate();
Coordinate77.setPoint(new float[]{0.2,0.15,0,0.3,0.3,0}, 6);
IndexedLineSet76.setCoord(&Coordinate77);

Shape73.setGeometry(&IndexedLineSet76);

HAnimSegment70.addChild(&Shape73);

HAnimJoint69.addChildren(&HAnimSegment70);

HAnimJoint& HAnimJoint78 =  HAnimJoint();
HAnimJoint78.X3DNode::setName(CString("l_metacarpophalangeal_1"));
HAnimJoint78.setDEF(CString("hanim_l_metacarpophalangeal_1"));
HAnimJoint78.setCenter(new float[]{0.3,0.3,0});
HAnimJoint78.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint78.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment79 =  HAnimSegment();
HAnimSegment79.X3DNode::setName(CString("l_carpal_proximal_phalanx_1"));
HAnimSegment79.setDEF(CString("hanim_l_carpal_proximal_phalanx_1"));
Transform& Transform80 =  Transform();
Transform80.setTranslation(new float[]{0.3,0.3,0});
Shape& Shape81 =  Shape();
Shape81.setUSE(CString("HAnimJointShape"));
Transform80.addChild(&Shape81);

HAnimSegment79.addChild(&Transform80);

Shape& Shape82 =  Shape();
Appearance& Appearance83 =  Appearance();
Material& Material84 =  Material();
Material84.setEmissiveColor(new float[]{1,1,1});
Appearance83.addChild(&Material84);

Shape82.addChild(&Appearance83);

IndexedLineSet& IndexedLineSet85 =  IndexedLineSet();
IndexedLineSet85.setDEF(CString("MCP11toIP1"));
IndexedLineSet85.setCoordIndex(new int32_t[]{0,1}, 2);
Coordinate& Coordinate86 =  Coordinate();
Coordinate86.setPoint(new float[]{0.3,0.3,0,0.35,0.4,0}, 6);
IndexedLineSet85.setCoord(&Coordinate86);

Shape82.setGeometry(&IndexedLineSet85);

HAnimSegment79.addChild(&Shape82);

HAnimJoint78.addChildren(&HAnimSegment79);

HAnimJoint& HAnimJoint87 =  HAnimJoint();
HAnimJoint87.X3DNode::setName(CString("l_carpal_interphalangeal_1"));
HAnimJoint87.setDEF(CString("hanim_l_carpal_interphalangeal_1"));
HAnimJoint87.setCenter(new float[]{0.35,0.4,0});
HAnimJoint87.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint87.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment88 =  HAnimSegment();
HAnimSegment88.X3DNode::setName(CString("l_carpal_distal_phalanx_1"));
HAnimSegment88.setDEF(CString("hanim_l_carpal_distal_phalanx_1"));
Transform& Transform89 =  Transform();
Transform89.setTranslation(new float[]{0.35,0.4,0});
Shape& Shape90 =  Shape();
Shape90.setUSE(CString("HAnimJointShape"));
Transform89.addChild(&Shape90);

HAnimSegment88.addChild(&Transform89);

Shape& Shape91 =  Shape();
Appearance& Appearance92 =  Appearance();
Material& Material93 =  Material();
Material93.setEmissiveColor(new float[]{1,1,1});
Appearance92.addChild(&Material93);

Shape91.addChild(&Appearance92);

IndexedLineSet& IndexedLineSet94 =  IndexedLineSet();
IndexedLineSet94.setDEF(CString("fingertip_l_carpal_interphalangeal_1"));
IndexedLineSet94.setCoordIndex(new int32_t[]{0,1}, 2);
Coordinate& Coordinate95 =  Coordinate();
Coordinate95.setPoint(new float[]{0.35,0.4,0,0.36,0.45,0}, 6);
IndexedLineSet94.setCoord(&Coordinate95);

Shape91.setGeometry(&IndexedLineSet94);

HAnimSegment88.addChild(&Shape91);

HAnimJoint87.addChildren(&HAnimSegment88);

HAnimJoint78.addChildren(&HAnimJoint87);

HAnimJoint69.addChildren(&HAnimJoint78);

HAnimJoint52.addChildren(&HAnimJoint69);

HAnimJoint30.addChildren(&HAnimJoint52);

//MC2
HAnimJoint& HAnimJoint96 =  HAnimJoint();
HAnimJoint96.X3DNode::setName(CString("l_midcarpal_2"));
HAnimJoint96.setDEF(CString("hanim_l_midcarpal_2"));
HAnimJoint96.setCenter(new float[]{0.07,0.07,0});
HAnimJoint96.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint96.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment97 =  HAnimSegment();
HAnimSegment97.X3DNode::setName(CString("l_trapezoid"));
HAnimSegment97.setDEF(CString("hanim_l_trapezoid"));
Transform& Transform98 =  Transform();
Transform98.setTranslation(new float[]{0.07,0.07,0});
Shape& Shape99 =  Shape();
Shape99.setUSE(CString("HAnimNewJointShape"));
Transform98.addChild(&Shape99);

HAnimSegment97.addChild(&Transform98);

Shape& Shape100 =  Shape();
Appearance& Appearance101 =  Appearance();
Material& Material102 =  Material();
Material102.setEmissiveColor(new float[]{1,1,1});
Appearance101.addChild(&Material102);

Shape100.addChild(&Appearance101);

IndexedLineSet& IndexedLineSet103 =  IndexedLineSet();
IndexedLineSet103.setDEF(CString("MC2toCMC2"));
IndexedLineSet103.setCoordIndex(new int32_t[]{0,1}, 2);
Coordinate& Coordinate104 =  Coordinate();
Coordinate104.setPoint(new float[]{-0.1,0.1,0,-0.1,0.2,0}, 6);
IndexedLineSet103.setCoord(&Coordinate104);

Shape100.setGeometry(&IndexedLineSet103);

HAnimSegment97.addChild(&Shape100);

HAnimJoint96.addChildren(&HAnimSegment97);

//index finger
HAnimJoint& HAnimJoint105 =  HAnimJoint();
HAnimJoint105.X3DNode::setName(CString("l_carpometacarpal_2"));
HAnimJoint105.setDEF(CString("hanim_l_carpometacarpal_2"));
HAnimJoint105.setCenter(new float[]{0.1,0.2,0});
HAnimJoint105.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint105.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment106 =  HAnimSegment();
HAnimSegment106.X3DNode::setName(CString("l_metacarpal_2"));
HAnimSegment106.setDEF(CString("hanim_l_metacarpal_2"));
Transform& Transform107 =  Transform();
Transform107.setTranslation(new float[]{0.1,0.2,0});
Shape& Shape108 =  Shape();
Shape108.setUSE(CString("HAnimJointShape"));
Transform107.addChild(&Shape108);

HAnimSegment106.addChild(&Transform107);

Shape& Shape109 =  Shape();
Appearance& Appearance110 =  Appearance();
Material& Material111 =  Material();
Material111.setEmissiveColor(new float[]{1,1,1});
Appearance110.addChild(&Material111);

Shape109.addChild(&Appearance110);

IndexedLineSet& IndexedLineSet112 =  IndexedLineSet();
IndexedLineSet112.setDEF(CString("CMC2toMCP2"));
IndexedLineSet112.setCoordIndex(new int32_t[]{0,1}, 2);
Coordinate& Coordinate113 =  Coordinate();
Coordinate113.setPoint(new float[]{0.1,0.2,0,0.15,0.5,0}, 6);
IndexedLineSet112.setCoord(&Coordinate113);

Shape109.setGeometry(&IndexedLineSet112);

HAnimSegment106.addChild(&Shape109);

HAnimJoint105.addChildren(&HAnimSegment106);

HAnimJoint& HAnimJoint114 =  HAnimJoint();
HAnimJoint114.X3DNode::setName(CString("l_metacarpophalangeal_2"));
HAnimJoint114.setDEF(CString("hanim_l_metacarpophalangeal_2"));
HAnimJoint114.setCenter(new float[]{0.15,0.5,0});
HAnimJoint114.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint114.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment115 =  HAnimSegment();
HAnimSegment115.X3DNode::setName(CString("l_carpal_proximal_phalanx_2"));
HAnimSegment115.setDEF(CString("hanim_l_carpal_proximal_phalanx_2"));
Transform& Transform116 =  Transform();
Transform116.setTranslation(new float[]{0.15,0.5,0});
Shape& Shape117 =  Shape();
Shape117.setUSE(CString("HAnimJointShape"));
Transform116.addChild(&Shape117);

HAnimSegment115.addChild(&Transform116);

Shape& Shape118 =  Shape();
Appearance& Appearance119 =  Appearance();
Material& Material120 =  Material();
Material120.setEmissiveColor(new float[]{1,1,1});
Appearance119.addChild(&Material120);

Shape118.addChild(&Appearance119);

IndexedLineSet& IndexedLineSet121 =  IndexedLineSet();
IndexedLineSet121.setDEF(CString("MCP2toPIP2"));
IndexedLineSet121.setCoordIndex(new int32_t[]{0,1}, 2);
Coordinate& Coordinate122 =  Coordinate();
Coordinate122.setPoint(new float[]{0.15,0.5,0,0.2,0.7,0}, 6);
IndexedLineSet121.setCoord(&Coordinate122);

Shape118.setGeometry(&IndexedLineSet121);

HAnimSegment115.addChild(&Shape118);

HAnimJoint114.addChildren(&HAnimSegment115);

HAnimJoint& HAnimJoint123 =  HAnimJoint();
HAnimJoint123.X3DNode::setName(CString("l_carpal_proximal_interphalangeal_2"));
HAnimJoint123.setDEF(CString("hanim_l_carpal_proximal_interphalangeal_2"));
HAnimJoint123.setCenter(new float[]{0.2,0.7,0});
HAnimJoint123.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint123.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment124 =  HAnimSegment();
HAnimSegment124.X3DNode::setName(CString("l_carpal_middle_phalanx_2"));
HAnimSegment124.setDEF(CString("hanim_l_carpal_middle_phalanx_2"));
Transform& Transform125 =  Transform();
Transform125.setTranslation(new float[]{0.2,0.7,0});
Shape& Shape126 =  Shape();
Shape126.setUSE(CString("HAnimJointShape"));
Transform125.addChild(&Shape126);

HAnimSegment124.addChild(&Transform125);

Shape& Shape127 =  Shape();
Appearance& Appearance128 =  Appearance();
Material& Material129 =  Material();
Material129.setEmissiveColor(new float[]{1,1,1});
Appearance128.addChild(&Material129);

Shape127.addChild(&Appearance128);

IndexedLineSet& IndexedLineSet130 =  IndexedLineSet();
IndexedLineSet130.setDEF(CString("PIP2toDIP2"));
IndexedLineSet130.setCoordIndex(new int32_t[]{0,1}, 2);
Coordinate& Coordinate131 =  Coordinate();
Coordinate131.setPoint(new float[]{0.2,0.7,0,0.24,0.87,0}, 6);
IndexedLineSet130.setCoord(&Coordinate131);

Shape127.setGeometry(&IndexedLineSet130);

HAnimSegment124.addChild(&Shape127);

HAnimJoint123.addChildren(&HAnimSegment124);

HAnimJoint& HAnimJoint132 =  HAnimJoint();
HAnimJoint132.X3DNode::setName(CString("l_carpal_distal_interphalangeal_2"));
HAnimJoint132.setDEF(CString("hanim_l_carpal_distal_interphalangeal_2"));
HAnimJoint132.setCenter(new float[]{0.24,0.87,0});
HAnimJoint132.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint132.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment133 =  HAnimSegment();
HAnimSegment133.X3DNode::setName(CString("l_carpal_distal_phalanx_2"));
HAnimSegment133.setDEF(CString("hanim_l_carpal_distal_phalanx_2"));
Transform& Transform134 =  Transform();
Transform134.setTranslation(new float[]{0.24,0.87,0});
Shape& Shape135 =  Shape();
Shape135.setUSE(CString("HAnimJointShape"));
Transform134.addChild(&Shape135);

HAnimSegment133.addChild(&Transform134);

Shape& Shape136 =  Shape();
Appearance& Appearance137 =  Appearance();
Material& Material138 =  Material();
Material138.setEmissiveColor(new float[]{1,1,1});
Appearance137.addChild(&Material138);

Shape136.addChild(&Appearance137);

IndexedLineSet& IndexedLineSet139 =  IndexedLineSet();
IndexedLineSet139.setDEF(CString("fingertip_l_carpal_distal_interphalangeal_2"));
IndexedLineSet139.setCoordIndex(new int32_t[]{0,1}, 2);
Coordinate& Coordinate140 =  Coordinate();
Coordinate140.setPoint(new float[]{0.24,0.87,0,0.26,0.93,0}, 6);
IndexedLineSet139.setCoord(&Coordinate140);

Shape136.setGeometry(&IndexedLineSet139);

HAnimSegment133.addChild(&Shape136);

HAnimJoint132.addChildren(&HAnimSegment133);

HAnimJoint123.addChildren(&HAnimJoint132);

HAnimJoint114.addChildren(&HAnimJoint123);

HAnimJoint105.addChildren(&HAnimJoint114);

HAnimJoint96.addChildren(&HAnimJoint105);

HAnimJoint30.addChildren(&HAnimJoint96);

//MC3
HAnimJoint& HAnimJoint141 =  HAnimJoint();
HAnimJoint141.X3DNode::setName(CString("l_midcarpal_3"));
HAnimJoint141.setDEF(CString("hanim_l_midcarpal_3"));
HAnimJoint141.setCenter(new float[]{0,0.07,0});
HAnimJoint141.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint141.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment142 =  HAnimSegment();
HAnimSegment142.X3DNode::setName(CString("l_capitate"));
HAnimSegment142.setDEF(CString("hanim_l_capitate"));
Transform& Transform143 =  Transform();
Transform143.setTranslation(new float[]{0,0.07,0});
Shape& Shape144 =  Shape();
Shape144.setUSE(CString("HAnimNewJointShape"));
Transform143.addChild(&Shape144);

HAnimSegment142.addChild(&Transform143);

Shape& Shape145 =  Shape();
Appearance& Appearance146 =  Appearance();
Material& Material147 =  Material();
Material147.setEmissiveColor(new float[]{1,1,1});
Appearance146.addChild(&Material147);

Shape145.addChild(&Appearance146);

IndexedLineSet& IndexedLineSet148 =  IndexedLineSet();
IndexedLineSet148.setDEF(CString("MC3toCMC3"));
IndexedLineSet148.setCoordIndex(new int32_t[]{0,1}, 2);
Coordinate& Coordinate149 =  Coordinate();
Coordinate149.setPoint(new float[]{0,0.07,0,0,0.2,0}, 6);
IndexedLineSet148.setCoord(&Coordinate149);

Shape145.setGeometry(&IndexedLineSet148);

HAnimSegment142.addChild(&Shape145);

HAnimJoint141.addChildren(&HAnimSegment142);

//Middle fingle
HAnimJoint& HAnimJoint150 =  HAnimJoint();
HAnimJoint150.X3DNode::setName(CString("l_carpometacarpal_3"));
HAnimJoint150.setDEF(CString("hanim_l_carpometacarpal_3"));
HAnimJoint150.setCenter(new float[]{0,0.2,0});
HAnimJoint150.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint150.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment151 =  HAnimSegment();
HAnimSegment151.X3DNode::setName(CString("l_metacarpal_3"));
HAnimSegment151.setDEF(CString("hanim_l_metacarpal_3"));
Transform& Transform152 =  Transform();
Transform152.setTranslation(new float[]{0,0.2,0});
Shape& Shape153 =  Shape();
Shape153.setUSE(CString("HAnimJointShape"));
Transform152.addChild(&Shape153);

HAnimSegment151.addChild(&Transform152);

Shape& Shape154 =  Shape();
Appearance& Appearance155 =  Appearance();
Material& Material156 =  Material();
Material156.setEmissiveColor(new float[]{1,1,1});
Appearance155.addChild(&Material156);

Shape154.addChild(&Appearance155);

IndexedLineSet& IndexedLineSet157 =  IndexedLineSet();
IndexedLineSet157.setDEF(CString("CMC3toMCP3"));
IndexedLineSet157.setCoordIndex(new int32_t[]{0,1}, 2);
Coordinate& Coordinate158 =  Coordinate();
Coordinate158.setPoint(new float[]{0,0.2,0,0.03,0.5,0}, 6);
IndexedLineSet157.setCoord(&Coordinate158);

Shape154.setGeometry(&IndexedLineSet157);

HAnimSegment151.addChild(&Shape154);

HAnimJoint150.addChildren(&HAnimSegment151);

HAnimJoint& HAnimJoint159 =  HAnimJoint();
HAnimJoint159.X3DNode::setName(CString("l_metacarpophalangeal_3"));
HAnimJoint159.setDEF(CString("hanim_l_metacarpophalangeal_3"));
HAnimJoint159.setCenter(new float[]{0.03,0.5,0});
HAnimJoint159.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint159.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment160 =  HAnimSegment();
HAnimSegment160.X3DNode::setName(CString("l_carpal_proximal_phalanx_3"));
HAnimSegment160.setDEF(CString("hanim_l_carpal_proximal_phalanx_3"));
Transform& Transform161 =  Transform();
Transform161.setTranslation(new float[]{0.03,0.5,0});
Shape& Shape162 =  Shape();
Shape162.setUSE(CString("HAnimJointShape"));
Transform161.addChild(&Shape162);

HAnimSegment160.addChild(&Transform161);

Shape& Shape163 =  Shape();
Appearance& Appearance164 =  Appearance();
Material& Material165 =  Material();
Material165.setEmissiveColor(new float[]{1,1,1});
Appearance164.addChild(&Material165);

Shape163.addChild(&Appearance164);

IndexedLineSet& IndexedLineSet166 =  IndexedLineSet();
IndexedLineSet166.setDEF(CString("MCP3toPIP3"));
IndexedLineSet166.setCoordIndex(new int32_t[]{0,1}, 2);
Coordinate& Coordinate167 =  Coordinate();
Coordinate167.setPoint(new float[]{0.03,0.5,0,0.05,0.75,0}, 6);
IndexedLineSet166.setCoord(&Coordinate167);

Shape163.setGeometry(&IndexedLineSet166);

HAnimSegment160.addChild(&Shape163);

HAnimJoint159.addChildren(&HAnimSegment160);

HAnimJoint& HAnimJoint168 =  HAnimJoint();
HAnimJoint168.X3DNode::setName(CString("l_carpal_proximal_interphalangeal_3"));
HAnimJoint168.setDEF(CString("hanim_l_carpal_proximal_interphalangeal_3"));
HAnimJoint168.setCenter(new float[]{0.05,0.75,0});
HAnimJoint168.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint168.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment169 =  HAnimSegment();
HAnimSegment169.X3DNode::setName(CString("l_carpal_middle_phalanx_3"));
HAnimSegment169.setDEF(CString("hanim_l_carpal_middle_phalanx_3"));
Transform& Transform170 =  Transform();
Transform170.setTranslation(new float[]{0.05,0.75,0});
Shape& Shape171 =  Shape();
Shape171.setUSE(CString("HAnimJointShape"));
Transform170.addChild(&Shape171);

HAnimSegment169.addChild(&Transform170);

Shape& Shape172 =  Shape();
Appearance& Appearance173 =  Appearance();
Material& Material174 =  Material();
Material174.setEmissiveColor(new float[]{1,1,1});
Appearance173.addChild(&Material174);

Shape172.addChild(&Appearance173);

IndexedLineSet& IndexedLineSet175 =  IndexedLineSet();
IndexedLineSet175.setDEF(CString("PIP3toDIP3"));
IndexedLineSet175.setCoordIndex(new int32_t[]{0,1}, 2);
Coordinate& Coordinate176 =  Coordinate();
Coordinate176.setPoint(new float[]{0.05,0.75,0,0.08,0.96,0}, 6);
IndexedLineSet175.setCoord(&Coordinate176);

Shape172.setGeometry(&IndexedLineSet175);

HAnimSegment169.addChild(&Shape172);

HAnimJoint168.addChildren(&HAnimSegment169);

HAnimJoint& HAnimJoint177 =  HAnimJoint();
HAnimJoint177.X3DNode::setName(CString("l_carpal_distal_interphalangeal_3"));
HAnimJoint177.setDEF(CString("hanim_l_carpal_distal_interphalangeal_3"));
HAnimJoint177.setCenter(new float[]{0.08,0.96,0});
HAnimJoint177.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint177.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment178 =  HAnimSegment();
HAnimSegment178.X3DNode::setName(CString("l_carpal_distal_phalanx_3"));
HAnimSegment178.setDEF(CString("hanim_l_carpal_distal_phalanx_3"));
Transform& Transform179 =  Transform();
Transform179.setTranslation(new float[]{0.08,0.96,0});
Shape& Shape180 =  Shape();
Shape180.setUSE(CString("HAnimJointShape"));
Transform179.addChild(&Shape180);

HAnimSegment178.addChild(&Transform179);

Shape& Shape181 =  Shape();
Appearance& Appearance182 =  Appearance();
Material& Material183 =  Material();
Material183.setEmissiveColor(new float[]{1,1,1});
Appearance182.addChild(&Material183);

Shape181.addChild(&Appearance182);

IndexedLineSet& IndexedLineSet184 =  IndexedLineSet();
IndexedLineSet184.setDEF(CString("fingertip_l_carpal_distal_interphalangeal_3"));
IndexedLineSet184.setCoordIndex(new int32_t[]{0,1}, 2);
Coordinate& Coordinate185 =  Coordinate();
Coordinate185.setPoint(new float[]{0.08,0.96,0,0.09,1.05,0}, 6);
IndexedLineSet184.setCoord(&Coordinate185);

Shape181.setGeometry(&IndexedLineSet184);

HAnimSegment178.addChild(&Shape181);

HAnimJoint177.addChildren(&HAnimSegment178);

HAnimJoint168.addChildren(&HAnimJoint177);

HAnimJoint159.addChildren(&HAnimJoint168);

HAnimJoint150.addChildren(&HAnimJoint159);

HAnimJoint141.addChildren(&HAnimJoint150);

HAnimJoint30.addChildren(&HAnimJoint141);

//MC45
HAnimJoint& HAnimJoint186 =  HAnimJoint();
HAnimJoint186.X3DNode::setName(CString("l_midcarpal_4_5"));
HAnimJoint186.setDEF(CString("hanim_l_midcarpal_4_5"));
HAnimJoint186.setCenter(new float[]{-0.1,0.1,0});
HAnimJoint186.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint186.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment187 =  HAnimSegment();
HAnimSegment187.X3DNode::setName(CString("l_hamate"));
HAnimSegment187.setDEF(CString("hanim_l_hamate"));
Transform& Transform188 =  Transform();
Transform188.setTranslation(new float[]{-0.1,0.1,0});
Shape& Shape189 =  Shape();
Shape189.setUSE(CString("HAnimNewJointShape"));
Transform188.addChild(&Shape189);

HAnimSegment187.addChild(&Transform188);

Shape& Shape190 =  Shape();
Appearance& Appearance191 =  Appearance();
Material& Material192 =  Material();
Material192.setEmissiveColor(new float[]{1,1,1});
Appearance191.addChild(&Material192);

Shape190.addChild(&Appearance191);

IndexedLineSet& IndexedLineSet193 =  IndexedLineSet();
IndexedLineSet193.setDEF(CString("MC45toCMC4"));
IndexedLineSet193.setCoordIndex(new int32_t[]{0,1}, 2);
Coordinate& Coordinate194 =  Coordinate();
Coordinate194.setPoint(new float[]{-0.1,0.1,0,-0.1,0.2,0}, 6);
IndexedLineSet193.setCoord(&Coordinate194);

Shape190.setGeometry(&IndexedLineSet193);

HAnimSegment187.addChild(&Shape190);

Shape& Shape195 =  Shape();
Appearance& Appearance196 =  Appearance();
Material& Material197 =  Material();
Material197.setEmissiveColor(new float[]{1,1,1});
Appearance196.addChild(&Material197);

Shape195.addChild(&Appearance196);

IndexedLineSet& IndexedLineSet198 =  IndexedLineSet();
IndexedLineSet198.setDEF(CString("MC45toCMC5"));
IndexedLineSet198.setCoordIndex(new int32_t[]{0,1}, 2);
Coordinate& Coordinate199 =  Coordinate();
Coordinate199.setPoint(new float[]{-0.1,0.1,0,-0.15,0.17,0}, 6);
IndexedLineSet198.setCoord(&Coordinate199);

Shape195.setGeometry(&IndexedLineSet198);

HAnimSegment187.addChild(&Shape195);

HAnimJoint186.addChildren(&HAnimSegment187);

//ring finger
HAnimJoint& HAnimJoint200 =  HAnimJoint();
HAnimJoint200.X3DNode::setName(CString("l_carpometacarpal_4"));
HAnimJoint200.setDEF(CString("hanim_l_carpometacarpal_4"));
HAnimJoint200.setCenter(new float[]{-0.1,0.2,0});
HAnimJoint200.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint200.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment201 =  HAnimSegment();
HAnimSegment201.X3DNode::setName(CString("l_metacarpal_4"));
HAnimSegment201.setDEF(CString("hanim_l_metacarpal_4"));
Transform& Transform202 =  Transform();
Transform202.setTranslation(new float[]{-0.1,0.2,0});
Shape& Shape203 =  Shape();
Shape203.setUSE(CString("HAnimJointShape"));
Transform202.addChild(&Shape203);

HAnimSegment201.addChild(&Transform202);

Shape& Shape204 =  Shape();
Appearance& Appearance205 =  Appearance();
Material& Material206 =  Material();
Material206.setEmissiveColor(new float[]{1,1,1});
Appearance205.addChild(&Material206);

Shape204.addChild(&Appearance205);

IndexedLineSet& IndexedLineSet207 =  IndexedLineSet();
IndexedLineSet207.setDEF(CString("CMC4toMCP4"));
IndexedLineSet207.setCoordIndex(new int32_t[]{0,1}, 2);
Coordinate& Coordinate208 =  Coordinate();
Coordinate208.setPoint(new float[]{-0.1,0.2,0,-0.1,0.47,0}, 6);
IndexedLineSet207.setCoord(&Coordinate208);

Shape204.setGeometry(&IndexedLineSet207);

HAnimSegment201.addChild(&Shape204);

HAnimJoint200.addChildren(&HAnimSegment201);

HAnimJoint& HAnimJoint209 =  HAnimJoint();
HAnimJoint209.X3DNode::setName(CString("l_metacarpophalangeal_4"));
HAnimJoint209.setDEF(CString("hanim_l_metacarpophalangeal_4"));
HAnimJoint209.setCenter(new float[]{-0.1,0.47,0});
HAnimJoint209.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint209.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment210 =  HAnimSegment();
HAnimSegment210.X3DNode::setName(CString("l_carpal_proximal_phalanx_4"));
HAnimSegment210.setDEF(CString("hanim_l_carpal_proximal_phalanx_4"));
Transform& Transform211 =  Transform();
Transform211.setTranslation(new float[]{-0.1,0.47,0});
Shape& Shape212 =  Shape();
Shape212.setUSE(CString("HAnimJointShape"));
Transform211.addChild(&Shape212);

HAnimSegment210.addChild(&Transform211);

Shape& Shape213 =  Shape();
Appearance& Appearance214 =  Appearance();
Material& Material215 =  Material();
Material215.setEmissiveColor(new float[]{1,1,1});
Appearance214.addChild(&Material215);

Shape213.addChild(&Appearance214);

IndexedLineSet& IndexedLineSet216 =  IndexedLineSet();
IndexedLineSet216.setDEF(CString("MCP4toPIP4"));
IndexedLineSet216.setCoordIndex(new int32_t[]{0,1}, 2);
Coordinate& Coordinate217 =  Coordinate();
Coordinate217.setPoint(new float[]{-0.1,0.47,0,-0.1,0.7,0}, 6);
IndexedLineSet216.setCoord(&Coordinate217);

Shape213.setGeometry(&IndexedLineSet216);

HAnimSegment210.addChild(&Shape213);

HAnimJoint209.addChildren(&HAnimSegment210);

HAnimJoint& HAnimJoint218 =  HAnimJoint();
HAnimJoint218.X3DNode::setName(CString("l_carpal_proximal_interphalangeal_4"));
HAnimJoint218.setDEF(CString("hanim_l_carpal_proximal_interphalangeal_4"));
HAnimJoint218.setCenter(new float[]{-0.1,0.7,0});
HAnimJoint218.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint218.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment219 =  HAnimSegment();
HAnimSegment219.X3DNode::setName(CString("l_carpal_middle_phalanx_4"));
HAnimSegment219.setDEF(CString("hanim_l_carpal_middle_phalanx_4"));
Transform& Transform220 =  Transform();
Transform220.setTranslation(new float[]{-0.1,0.7,0});
Shape& Shape221 =  Shape();
Shape221.setUSE(CString("HAnimJointShape"));
Transform220.addChild(&Shape221);

HAnimSegment219.addChild(&Transform220);

Shape& Shape222 =  Shape();
Appearance& Appearance223 =  Appearance();
Material& Material224 =  Material();
Material224.setEmissiveColor(new float[]{1,1,1});
Appearance223.addChild(&Material224);

Shape222.addChild(&Appearance223);

IndexedLineSet& IndexedLineSet225 =  IndexedLineSet();
IndexedLineSet225.setDEF(CString("PIP4toDIP4"));
IndexedLineSet225.setCoordIndex(new int32_t[]{0,1}, 2);
Coordinate& Coordinate226 =  Coordinate();
Coordinate226.setPoint(new float[]{-0.1,0.7,0,-0.1,0.93,0}, 6);
IndexedLineSet225.setCoord(&Coordinate226);

Shape222.setGeometry(&IndexedLineSet225);

HAnimSegment219.addChild(&Shape222);

HAnimJoint218.addChildren(&HAnimSegment219);

HAnimJoint& HAnimJoint227 =  HAnimJoint();
HAnimJoint227.X3DNode::setName(CString("l_carpal_distal_interphalangeal_4"));
HAnimJoint227.setDEF(CString("hanim_l_carpal_distal_interphalangeal_4"));
HAnimJoint227.setCenter(new float[]{-0.1,0.93,0});
HAnimJoint227.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint227.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment228 =  HAnimSegment();
HAnimSegment228.X3DNode::setName(CString("l_carpal_distal_phalanx_4"));
HAnimSegment228.setDEF(CString("hanim_l_carpal_distal_phalanx_4"));
Transform& Transform229 =  Transform();
Transform229.setTranslation(new float[]{-0.1,0.93,0});
Shape& Shape230 =  Shape();
Shape230.setUSE(CString("HAnimJointShape"));
Transform229.addChild(&Shape230);

HAnimSegment228.addChild(&Transform229);

Shape& Shape231 =  Shape();
Appearance& Appearance232 =  Appearance();
Material& Material233 =  Material();
Material233.setEmissiveColor(new float[]{1,1,1});
Appearance232.addChild(&Material233);

Shape231.addChild(&Appearance232);

IndexedLineSet& IndexedLineSet234 =  IndexedLineSet();
IndexedLineSet234.setDEF(CString("fingertip_l_carpal_distal_interphalangeal_4"));
IndexedLineSet234.setCoordIndex(new int32_t[]{0,1}, 2);
Coordinate& Coordinate235 =  Coordinate();
Coordinate235.setPoint(new float[]{-0.1,0.93,0,-0.1,1,0}, 6);
IndexedLineSet234.setCoord(&Coordinate235);

Shape231.setGeometry(&IndexedLineSet234);

HAnimSegment228.addChild(&Shape231);

HAnimJoint227.addChildren(&HAnimSegment228);

HAnimJoint218.addChildren(&HAnimJoint227);

HAnimJoint209.addChildren(&HAnimJoint218);

HAnimJoint200.addChildren(&HAnimJoint209);

HAnimJoint186.addChildren(&HAnimJoint200);

//pinky finger
HAnimJoint& HAnimJoint236 =  HAnimJoint();
HAnimJoint236.X3DNode::setName(CString("l_carpometacarpal_5"));
HAnimJoint236.setDEF(CString("hanim_l_carpometacarpal_5"));
HAnimJoint236.setCenter(new float[]{-0.15,0.17,0});
HAnimJoint236.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint236.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment237 =  HAnimSegment();
HAnimSegment237.X3DNode::setName(CString("l_metacarpal_5"));
HAnimSegment237.setDEF(CString("hanim_l_metacarpal_5"));
Transform& Transform238 =  Transform();
Transform238.setTranslation(new float[]{-0.15,0.17,0});
Shape& Shape239 =  Shape();
Shape239.setUSE(CString("HAnimJointShape"));
Transform238.addChild(&Shape239);

HAnimSegment237.addChild(&Transform238);

Shape& Shape240 =  Shape();
Appearance& Appearance241 =  Appearance();
Material& Material242 =  Material();
Material242.setEmissiveColor(new float[]{1,1,1});
Appearance241.addChild(&Material242);

Shape240.addChild(&Appearance241);

IndexedLineSet& IndexedLineSet243 =  IndexedLineSet();
IndexedLineSet243.setDEF(CString("CMC5toMCP5"));
IndexedLineSet243.setCoordIndex(new int32_t[]{0,1}, 2);
Coordinate& Coordinate244 =  Coordinate();
Coordinate244.setPoint(new float[]{-0.15,0.17,0,-0.2,0.4,0}, 6);
IndexedLineSet243.setCoord(&Coordinate244);

Shape240.setGeometry(&IndexedLineSet243);

HAnimSegment237.addChild(&Shape240);

HAnimJoint236.addChildren(&HAnimSegment237);

HAnimJoint& HAnimJoint245 =  HAnimJoint();
HAnimJoint245.X3DNode::setName(CString("l_metacarpophalangeal_5"));
HAnimJoint245.setDEF(CString("hanim_l_metacarpophalangeal_5"));
HAnimJoint245.setCenter(new float[]{-0.2,0.4,0});
HAnimJoint245.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint245.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment246 =  HAnimSegment();
HAnimSegment246.X3DNode::setName(CString("l_carpal_proximal_phalanx_5"));
HAnimSegment246.setDEF(CString("hanim_l_carpal_proximal_phalanx_5"));
Transform& Transform247 =  Transform();
Transform247.setTranslation(new float[]{-0.2,0.4,0});
Shape& Shape248 =  Shape();
Shape248.setUSE(CString("HAnimJointShape"));
Transform247.addChild(&Shape248);

HAnimSegment246.addChild(&Transform247);

Shape& Shape249 =  Shape();
Appearance& Appearance250 =  Appearance();
Material& Material251 =  Material();
Material251.setEmissiveColor(new float[]{1,1,1});
Appearance250.addChild(&Material251);

Shape249.addChild(&Appearance250);

IndexedLineSet& IndexedLineSet252 =  IndexedLineSet();
IndexedLineSet252.setDEF(CString("MCP5toPIP5"));
IndexedLineSet252.setCoordIndex(new int32_t[]{0,1}, 2);
Coordinate& Coordinate253 =  Coordinate();
Coordinate253.setPoint(new float[]{-0.2,0.4,0,-0.23,0.63,0}, 6);
IndexedLineSet252.setCoord(&Coordinate253);

Shape249.setGeometry(&IndexedLineSet252);

HAnimSegment246.addChild(&Shape249);

HAnimJoint245.addChildren(&HAnimSegment246);

HAnimJoint& HAnimJoint254 =  HAnimJoint();
HAnimJoint254.X3DNode::setName(CString("l_carpal_proximal_interphalangeal_5"));
HAnimJoint254.setDEF(CString("hanim_l_carpal_proximal_interphalangeal_5"));
HAnimJoint254.setCenter(new float[]{-0.23,0.63,0});
HAnimJoint254.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint254.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment255 =  HAnimSegment();
HAnimSegment255.X3DNode::setName(CString("l_carpal_middle_phalanx_5"));
HAnimSegment255.setDEF(CString("hanim_l_carpal_middle_phalanx_5"));
Transform& Transform256 =  Transform();
Transform256.setTranslation(new float[]{-0.23,0.63,0});
Shape& Shape257 =  Shape();
Shape257.setUSE(CString("HAnimJointShape"));
Transform256.addChild(&Shape257);

HAnimSegment255.addChild(&Transform256);

Shape& Shape258 =  Shape();
Appearance& Appearance259 =  Appearance();
Material& Material260 =  Material();
Material260.setEmissiveColor(new float[]{1,1,1});
Appearance259.addChild(&Material260);

Shape258.addChild(&Appearance259);

IndexedLineSet& IndexedLineSet261 =  IndexedLineSet();
IndexedLineSet261.setDEF(CString("PIP5toDIP5"));
IndexedLineSet261.setCoordIndex(new int32_t[]{0,1}, 2);
Coordinate& Coordinate262 =  Coordinate();
Coordinate262.setPoint(new float[]{-0.23,0.63,0,-0.25,0.79,0}, 6);
IndexedLineSet261.setCoord(&Coordinate262);

Shape258.setGeometry(&IndexedLineSet261);

HAnimSegment255.addChild(&Shape258);

HAnimJoint254.addChildren(&HAnimSegment255);

HAnimJoint& HAnimJoint263 =  HAnimJoint();
HAnimJoint263.X3DNode::setName(CString("l_carpal_distal_interphalangeal_5"));
HAnimJoint263.setDEF(CString("hanim_l_carpal_distal_interphalangeal_5"));
HAnimJoint263.setCenter(new float[]{-0.25,0.79,0});
HAnimJoint263.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint263.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment264 =  HAnimSegment();
HAnimSegment264.X3DNode::setName(CString("l_carpal_distal_phalanx_5"));
HAnimSegment264.setDEF(CString("hanim_l_carpal_distal_phalanx_5"));
Transform& Transform265 =  Transform();
Transform265.setTranslation(new float[]{-0.25,0.79,0});
Shape& Shape266 =  Shape();
Shape266.setUSE(CString("HAnimJointShape"));
Transform265.addChild(&Shape266);

HAnimSegment264.addChild(&Transform265);

Shape& Shape267 =  Shape();
Appearance& Appearance268 =  Appearance();
Material& Material269 =  Material();
Material269.setEmissiveColor(new float[]{1,1,1});
Appearance268.addChild(&Material269);

Shape267.addChild(&Appearance268);

IndexedLineSet& IndexedLineSet270 =  IndexedLineSet();
IndexedLineSet270.setDEF(CString("fingertip_l_carpal_distal_interphalangeal_5"));
IndexedLineSet270.setCoordIndex(new int32_t[]{0,1}, 2);
Coordinate& Coordinate271 =  Coordinate();
Coordinate271.setPoint(new float[]{-0.25,0.79,0,-0.26,0.85,0}, 6);
IndexedLineSet270.setCoord(&Coordinate271);

Shape267.setGeometry(&IndexedLineSet270);

HAnimSegment264.addChild(&Shape267);

HAnimJoint263.addChildren(&HAnimSegment264);

HAnimJoint254.addChildren(&HAnimJoint263);

HAnimJoint245.addChildren(&HAnimJoint254);

HAnimJoint236.addChildren(&HAnimJoint245);

HAnimJoint186.addChildren(&HAnimJoint236);

HAnimJoint30.addChildren(&HAnimJoint186);

HAnimJoint29.addChildren(&HAnimJoint30);

HAnimHumanoid26.setSkeleton(&HAnimJoint29);

HAnimJoint& HAnimJoint272 =  HAnimJoint();
HAnimJoint272.setUSE(CString("hanim_humanoid_root"));
HAnimHumanoid26.setJoints(&HAnimJoint272);

HAnimJoint& HAnimJoint273 =  HAnimJoint();
HAnimJoint273.setUSE(CString("hanim_l_carpal_distal_interphalangeal_2"));
HAnimHumanoid26.setJoints(&HAnimJoint273);

HAnimJoint& HAnimJoint274 =  HAnimJoint();
HAnimJoint274.setUSE(CString("hanim_l_carpal_distal_interphalangeal_3"));
HAnimHumanoid26.setJoints(&HAnimJoint274);

HAnimJoint& HAnimJoint275 =  HAnimJoint();
HAnimJoint275.setUSE(CString("hanim_l_carpal_distal_interphalangeal_4"));
HAnimHumanoid26.setJoints(&HAnimJoint275);

HAnimJoint& HAnimJoint276 =  HAnimJoint();
HAnimJoint276.setUSE(CString("hanim_l_carpal_distal_interphalangeal_5"));
HAnimHumanoid26.setJoints(&HAnimJoint276);

HAnimJoint& HAnimJoint277 =  HAnimJoint();
HAnimJoint277.setUSE(CString("hanim_l_carpal_interphalangeal_1"));
HAnimHumanoid26.setJoints(&HAnimJoint277);

HAnimJoint& HAnimJoint278 =  HAnimJoint();
HAnimJoint278.setUSE(CString("hanim_l_carpal_proximal_interphalangeal_2"));
HAnimHumanoid26.setJoints(&HAnimJoint278);

HAnimJoint& HAnimJoint279 =  HAnimJoint();
HAnimJoint279.setUSE(CString("hanim_l_carpal_proximal_interphalangeal_3"));
HAnimHumanoid26.setJoints(&HAnimJoint279);

HAnimJoint& HAnimJoint280 =  HAnimJoint();
HAnimJoint280.setUSE(CString("hanim_l_carpal_proximal_interphalangeal_4"));
HAnimHumanoid26.setJoints(&HAnimJoint280);

HAnimJoint& HAnimJoint281 =  HAnimJoint();
HAnimJoint281.setUSE(CString("hanim_l_carpal_proximal_interphalangeal_5"));
HAnimHumanoid26.setJoints(&HAnimJoint281);

HAnimJoint& HAnimJoint282 =  HAnimJoint();
HAnimJoint282.setUSE(CString("hanim_l_carpometacarpal_1"));
HAnimHumanoid26.setJoints(&HAnimJoint282);

HAnimJoint& HAnimJoint283 =  HAnimJoint();
HAnimJoint283.setUSE(CString("hanim_l_carpometacarpal_2"));
HAnimHumanoid26.setJoints(&HAnimJoint283);

HAnimJoint& HAnimJoint284 =  HAnimJoint();
HAnimJoint284.setUSE(CString("hanim_l_carpometacarpal_3"));
HAnimHumanoid26.setJoints(&HAnimJoint284);

HAnimJoint& HAnimJoint285 =  HAnimJoint();
HAnimJoint285.setUSE(CString("hanim_l_carpometacarpal_4"));
HAnimHumanoid26.setJoints(&HAnimJoint285);

HAnimJoint& HAnimJoint286 =  HAnimJoint();
HAnimJoint286.setUSE(CString("hanim_l_carpometacarpal_5"));
HAnimHumanoid26.setJoints(&HAnimJoint286);

HAnimJoint& HAnimJoint287 =  HAnimJoint();
HAnimJoint287.setUSE(CString("hanim_l_metacarpophalangeal_1"));
HAnimHumanoid26.setJoints(&HAnimJoint287);

HAnimJoint& HAnimJoint288 =  HAnimJoint();
HAnimJoint288.setUSE(CString("hanim_l_metacarpophalangeal_2"));
HAnimHumanoid26.setJoints(&HAnimJoint288);

HAnimJoint& HAnimJoint289 =  HAnimJoint();
HAnimJoint289.setUSE(CString("hanim_l_metacarpophalangeal_3"));
HAnimHumanoid26.setJoints(&HAnimJoint289);

HAnimJoint& HAnimJoint290 =  HAnimJoint();
HAnimJoint290.setUSE(CString("hanim_l_metacarpophalangeal_4"));
HAnimHumanoid26.setJoints(&HAnimJoint290);

HAnimJoint& HAnimJoint291 =  HAnimJoint();
HAnimJoint291.setUSE(CString("hanim_l_metacarpophalangeal_5"));
HAnimHumanoid26.setJoints(&HAnimJoint291);

HAnimJoint& HAnimJoint292 =  HAnimJoint();
HAnimJoint292.setUSE(CString("hanim_l_midcarpal_1"));
HAnimHumanoid26.setJoints(&HAnimJoint292);

HAnimJoint& HAnimJoint293 =  HAnimJoint();
HAnimJoint293.setUSE(CString("hanim_l_midcarpal_2"));
HAnimHumanoid26.setJoints(&HAnimJoint293);

HAnimJoint& HAnimJoint294 =  HAnimJoint();
HAnimJoint294.setUSE(CString("hanim_l_midcarpal_3"));
HAnimHumanoid26.setJoints(&HAnimJoint294);

HAnimJoint& HAnimJoint295 =  HAnimJoint();
HAnimJoint295.setUSE(CString("hanim_l_midcarpal_4_5"));
HAnimHumanoid26.setJoints(&HAnimJoint295);

HAnimJoint& HAnimJoint296 =  HAnimJoint();
HAnimJoint296.setUSE(CString("hanim_l_radiocarpal"));
HAnimHumanoid26.setJoints(&HAnimJoint296);

Scene24.addChild(&HAnimHumanoid26);

X3D0.setScene(&Scene24);

}
