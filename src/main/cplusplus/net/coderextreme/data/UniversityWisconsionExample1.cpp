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
component2.setLevel(3);
head1.addChild(&component2);

meta& meta3 =  meta();
meta3.setName(CString("title"));
meta3.setContent(CString("BvhUniversityWisconsionExample1.x3d"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("description"));
meta4.setContent(CString("BVH file conversion: *enter description here, short-sentence summaries preferred*"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("creator"));
meta5.setContent(CString("*enter name of original author here*"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("created"));
meta6.setContent(CString("*enter date of initial version here*"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(CString("translated"));
meta7.setContent(CString("2 September 2023"));
head1.addMeta(&meta7);

meta& meta8 =  meta();
meta8.setName(CString("modified"));
meta8.setContent(CString("Mon, 15 Sep 2025 05:21:02 GMT"));
head1.addMeta(&meta8);

meta& meta9 =  meta();
meta9.setName(CString("reference"));
meta9.setContent(CString("BvhUniversityWIsconsionExample1.bvh"));
head1.addMeta(&meta9);

meta& meta10 =  meta();
meta10.setName(CString("reference"));
meta10.setContent(CString("https://TODO/UniversityWIsconsionExample1.bvh"));
head1.addMeta(&meta10);

meta& meta11 =  meta();
meta11.setName(CString("reference"));
meta11.setContent(CString("https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#MOCAP"));
head1.addMeta(&meta11);

meta& meta12 =  meta();
meta12.setName(CString("generator"));
meta12.setContent(CString("Java BVH to X3D Converter, org.web3d.x3d.hanim.bvh package"));
head1.addMeta(&meta12);

meta& meta13 =  meta();
meta13.setName(CString("generator"));
meta13.setContent(CString("X3D-Edit 4.0, https://www.web3d.org/x3d/tools/X3D-Edit"));
head1.addMeta(&meta13);

X3D0.setHead(&head1);

Scene& Scene14 =  Scene();
WorldInfo& WorldInfo15 =  WorldInfo();
WorldInfo15.setTitle(CString("BvhUniversityWisconsionExample1.x3d"));
Scene14.addChild(&WorldInfo15);

NavigationInfo& NavigationInfo16 =  NavigationInfo();
Scene14.addChild(&NavigationInfo16);

Group& Group17 =  Group();
Group17.setDEF(CString("BvhUniversityWisconsionExample1_BvhToX3dConversionImportInformation"));
MetadataSet& MetadataSet18 =  MetadataSet();
MetadataSet18.X3DNode::setName(CString("BvhToHAnimNameConversionTable"));
MetadataString& MetadataString19 =  MetadataString();
MetadataString19.X3DNode::setName(CString("ROOT_Hips"));
MetadataString19.X3DNode::setReference(CString("ROOT"));
MetadataString19.setValue(new CString[]{CString("humanoid_root"), CString("sacrum")}, 2);
MetadataSet18.setValue((X3DNode *)&MetadataString19);

MetadataString& MetadataString20 =  MetadataString();
MetadataString20.X3DNode::setName(CString("Chest"));
MetadataString20.X3DNode::setReference(CString("JOINT"));
MetadataString20.setValue(new CString[]{CString("vl5"), CString("l5")}, 2);
MetadataSet18.setValue((X3DNode *)&MetadataString20);

MetadataString& MetadataString21 =  MetadataString();
MetadataString21.X3DNode::setName(CString("Neck"));
MetadataString21.X3DNode::setReference(CString("JOINT"));
MetadataString21.setValue(new CString[]{CString("Neck"), CString("vl5_to_Neck")}, 2);
MetadataSet18.setValue((X3DNode *)&MetadataString21);

MetadataString& MetadataString22 =  MetadataString();
MetadataString22.X3DNode::setName(CString("Head"));
MetadataString22.X3DNode::setReference(CString("JOINT"));
MetadataString22.setValue(new CString[]{CString("skullbase"), CString("skull")}, 2);
MetadataSet18.setValue((X3DNode *)&MetadataString22);

MetadataString& MetadataString23 =  MetadataString();
MetadataString23.X3DNode::setName(CString("HeadSite"));
MetadataString23.X3DNode::setReference(CString("Site"));
MetadataString23.setValue(new CString[]{CString("skullbase_tip")}, 1);
MetadataSet18.setValue((X3DNode *)&MetadataString23);

MetadataString& MetadataString24 =  MetadataString();
MetadataString24.X3DNode::setName(CString("LeftCollar"));
MetadataString24.X3DNode::setReference(CString("JOINT"));
MetadataString24.setValue(new CString[]{CString("LeftCollar"), CString("vl5_to_LeftCollar")}, 2);
MetadataSet18.setValue((X3DNode *)&MetadataString24);

MetadataString& MetadataString25 =  MetadataString();
MetadataString25.X3DNode::setName(CString("LeftUpArm"));
MetadataString25.X3DNode::setReference(CString("JOINT"));
MetadataString25.setValue(new CString[]{CString("LeftUpArm"), CString("LeftCollar_to_LeftUpArm")}, 2);
MetadataSet18.setValue((X3DNode *)&MetadataString25);

MetadataString& MetadataString26 =  MetadataString();
MetadataString26.X3DNode::setName(CString("LeftLowArm"));
MetadataString26.X3DNode::setReference(CString("JOINT"));
MetadataString26.setValue(new CString[]{CString("LeftLowArm"), CString("LeftUpArm_to_LeftLowArm")}, 2);
MetadataSet18.setValue((X3DNode *)&MetadataString26);

MetadataString& MetadataString27 =  MetadataString();
MetadataString27.X3DNode::setName(CString("LeftHand"));
MetadataString27.X3DNode::setReference(CString("JOINT"));
MetadataString27.setValue(new CString[]{CString("LeftHand"), CString("LeftLowArm_to_LeftHand")}, 2);
MetadataSet18.setValue((X3DNode *)&MetadataString27);

MetadataString& MetadataString28 =  MetadataString();
MetadataString28.X3DNode::setName(CString("LeftHandSite"));
MetadataString28.X3DNode::setReference(CString("Site"));
MetadataString28.setValue(new CString[]{CString("LeftHand_tip")}, 1);
MetadataSet18.setValue((X3DNode *)&MetadataString28);

MetadataString& MetadataString29 =  MetadataString();
MetadataString29.X3DNode::setName(CString("RightCollar"));
MetadataString29.X3DNode::setReference(CString("JOINT"));
MetadataString29.setValue(new CString[]{CString("RightCollar"), CString("vl5_to_RightCollar")}, 2);
MetadataSet18.setValue((X3DNode *)&MetadataString29);

MetadataString& MetadataString30 =  MetadataString();
MetadataString30.X3DNode::setName(CString("RightUpArm"));
MetadataString30.X3DNode::setReference(CString("JOINT"));
MetadataString30.setValue(new CString[]{CString("RightUpArm"), CString("RightCollar_to_RightUpArm")}, 2);
MetadataSet18.setValue((X3DNode *)&MetadataString30);

MetadataString& MetadataString31 =  MetadataString();
MetadataString31.X3DNode::setName(CString("RightLowArm"));
MetadataString31.X3DNode::setReference(CString("JOINT"));
MetadataString31.setValue(new CString[]{CString("RightLowArm"), CString("RightUpArm_to_RightLowArm")}, 2);
MetadataSet18.setValue((X3DNode *)&MetadataString31);

MetadataString& MetadataString32 =  MetadataString();
MetadataString32.X3DNode::setName(CString("RightHand"));
MetadataString32.X3DNode::setReference(CString("JOINT"));
MetadataString32.setValue(new CString[]{CString("RightHand"), CString("RightLowArm_to_RightHand")}, 2);
MetadataSet18.setValue((X3DNode *)&MetadataString32);

MetadataString& MetadataString33 =  MetadataString();
MetadataString33.X3DNode::setName(CString("RightHandSite"));
MetadataString33.X3DNode::setReference(CString("Site"));
MetadataString33.setValue(new CString[]{CString("RightHand_tip")}, 1);
MetadataSet18.setValue((X3DNode *)&MetadataString33);

MetadataString& MetadataString34 =  MetadataString();
MetadataString34.X3DNode::setName(CString("LeftUpLeg"));
MetadataString34.X3DNode::setReference(CString("JOINT"));
MetadataString34.setValue(new CString[]{CString("LeftUpLeg"), CString("humanoid_root_to_LeftUpLeg")}, 2);
MetadataSet18.setValue((X3DNode *)&MetadataString34);

MetadataString& MetadataString35 =  MetadataString();
MetadataString35.X3DNode::setName(CString("LeftLowLeg"));
MetadataString35.X3DNode::setReference(CString("JOINT"));
MetadataString35.setValue(new CString[]{CString("LeftLowLeg"), CString("LeftUpLeg_to_LeftLowLeg")}, 2);
MetadataSet18.setValue((X3DNode *)&MetadataString35);

MetadataString& MetadataString36 =  MetadataString();
MetadataString36.X3DNode::setName(CString("LeftFoot"));
MetadataString36.X3DNode::setReference(CString("JOINT"));
MetadataString36.setValue(new CString[]{CString("LeftFoot"), CString("LeftLowLeg_to_LeftFoot")}, 2);
MetadataSet18.setValue((X3DNode *)&MetadataString36);

MetadataString& MetadataString37 =  MetadataString();
MetadataString37.X3DNode::setName(CString("LeftFootSite"));
MetadataString37.X3DNode::setReference(CString("Site"));
MetadataString37.setValue(new CString[]{CString("LeftFoot_tip")}, 1);
MetadataSet18.setValue((X3DNode *)&MetadataString37);

MetadataString& MetadataString38 =  MetadataString();
MetadataString38.X3DNode::setName(CString("RightUpLeg"));
MetadataString38.X3DNode::setReference(CString("JOINT"));
MetadataString38.setValue(new CString[]{CString("RightUpLeg"), CString("humanoid_root_to_RightUpLeg")}, 2);
MetadataSet18.setValue((X3DNode *)&MetadataString38);

MetadataString& MetadataString39 =  MetadataString();
MetadataString39.X3DNode::setName(CString("RightLowLeg"));
MetadataString39.X3DNode::setReference(CString("JOINT"));
MetadataString39.setValue(new CString[]{CString("RightLowLeg"), CString("RightUpLeg_to_RightLowLeg")}, 2);
MetadataSet18.setValue((X3DNode *)&MetadataString39);

MetadataString& MetadataString40 =  MetadataString();
MetadataString40.X3DNode::setName(CString("RightFoot"));
MetadataString40.X3DNode::setReference(CString("JOINT"));
MetadataString40.setValue(new CString[]{CString("RightFoot"), CString("RightLowLeg_to_RightFoot")}, 2);
MetadataSet18.setValue((X3DNode *)&MetadataString40);

MetadataString& MetadataString41 =  MetadataString();
MetadataString41.X3DNode::setName(CString("RightFootSite"));
MetadataString41.X3DNode::setReference(CString("Site"));
MetadataString41.setValue(new CString[]{CString("RightFoot_tip")}, 1);
MetadataSet18.setValue((X3DNode *)&MetadataString41);

Group17.setMetadata(&MetadataSet18);

Scene14.addChild(&Group17);

Transform& Transform42 =  Transform();
Transform42.setDEF(CString("InitialPositionScaled"));
Transform42.setTranslation(new float[]{0,1.244,0});
Viewpoint& Viewpoint43 =  Viewpoint();
Viewpoint43.setDescription(CString("BvhUniversityWisconsionExample1 model BVH to X3D conversion, from 8m"));
Viewpoint43.setPosition(new float[]{0,0,8});
Transform42.addChild(&Viewpoint43);

Viewpoint& Viewpoint44 =  Viewpoint();
Viewpoint44.setDescription(CString("BvhUniversityWisconsionExample1 initial motion position"));
Viewpoint44.setPosition(new float[]{0.803,3.501,16.836});
Transform42.addChild(&Viewpoint44);

Viewpoint& Viewpoint45 =  Viewpoint();
Viewpoint45.setDescription(CString("BvhUniversityWisconsionExample1 final motion position"));
Viewpoint45.setPosition(new float[]{0.781,3.51,16.647});
Transform42.addChild(&Viewpoint45);

Scene14.addChild(&Transform42);

HAnimHumanoid& HAnimHumanoid46 =  HAnimHumanoid();
HAnimHumanoid46.setDEF(CString("BvhUniversityWisconsionExample1_ROOT_Hips"));
HAnimHumanoid46.X3DNode::setName(CString("ROOT_Hips"));
MetadataSet& MetadataSet47 =  MetadataSet();
MetadataSet47.X3DNode::setName(CString("HAnimHumanoid.info"));
MetadataSet47.X3DNode::setReference(CString("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid"));
MetadataString& MetadataString48 =  MetadataString();
MetadataString48.X3DNode::setName(CString("authorEmail"));
MetadataString48.setValue(new CString[]{CString("*TODO*")}, 1);
MetadataSet47.setValue((X3DNode *)&MetadataString48);

MetadataString& MetadataString49 =  MetadataString();
MetadataString49.X3DNode::setName(CString("authorName"));
MetadataString49.setValue(new CString[]{CString("*TODO*")}, 1);
MetadataSet47.setValue((X3DNode *)&MetadataString49);

MetadataString& MetadataString50 =  MetadataString();
MetadataString50.X3DNode::setName(CString("copyright"));
MetadataString50.setValue(new CString[]{CString("Copyright (c) 2023")}, 1);
MetadataSet47.setValue((X3DNode *)&MetadataString50);

MetadataString& MetadataString51 =  MetadataString();
MetadataString51.X3DNode::setName(CString("humanoidVersion"));
MetadataString51.setValue(new CString[]{CString("*TODO*")}, 1);
MetadataSet47.setValue((X3DNode *)&MetadataString51);

MetadataString& MetadataString52 =  MetadataString();
MetadataString52.X3DNode::setName(CString("usageDescription"));
MetadataString52.setValue(new CString[]{CString("*TODO*")}, 1);
MetadataSet47.setValue((X3DNode *)&MetadataString52);

HAnimHumanoid46.setMetadata(&MetadataSet47);

HAnimJoint& HAnimJoint53 =  HAnimJoint();
HAnimJoint53.setDEF(CString("BvhUniversityWisconsionExample1_humanoid_root"));
HAnimJoint53.X3DNode::setName(CString("humanoid_root"));
HAnimJoint53.setTranslation(new float[]{0.7849403,3.508388,8.680851});
HAnimJoint53.setRotation(new float[]{-0.0184530858032817,-0.992698784706892,-0.119199859336308,2.9151883640198});
HAnimJoint53.setScale(new float[]{0.1,0.1,0.1});
HAnimSegment& HAnimSegment54 =  HAnimSegment();
HAnimSegment54.setDEF(CString("BvhUniversityWisconsionExample1_sacrum"));
HAnimSegment54.X3DNode::setName(CString("sacrum"));
Switch& Switch55 =  Switch();
Switch55.setWhichChoice(0);
Group& Group56 =  Group();
TouchSensor& TouchSensor57 =  TouchSensor();
TouchSensor57.setDescription(CString("HAnimHumanoid ROOT ROOT_Hips, HAnimSegment sacrum"));
Group56.addChild(&TouchSensor57);

Shape& Shape58 =  Shape();
Shape58.setDEF(CString("HAnimRootShape"));
Appearance& Appearance59 =  Appearance();
Material& Material60 =  Material();
Material60.setDEF(CString("HAnimRootMaterial"));
Material60.setDiffuseColor(new float[]{0.8,0,0});
Material60.setTransparency(0.3);
Appearance59.addChild(&Material60);

Shape58.addChild(&Appearance59);

Sphere& Sphere61 =  Sphere();
Sphere61.setDEF(CString("HAnimJointSphere"));
Sphere61.setRadius(0.254);
Shape58.setGeometry(&Sphere61);

Group56.addChild(&Shape58);

Switch55.addChild(&Group56);

Shape& Shape62 =  Shape();
Shape62.setDEF(CString("HAnimJointShape"));
Appearance& Appearance63 =  Appearance();
Material& Material64 =  Material();
Material64.setDEF(CString("HAnimJointMaterial"));
Material64.setDiffuseColor(new float[]{0,0,0.8});
Material64.setTransparency(0.3);
Appearance63.addChild(&Material64);

Shape62.addChild(&Appearance63);

Sphere& Sphere65 =  Sphere();
Sphere65.setUSE(CString("HAnimJointSphere"));
Shape62.setGeometry(&Sphere65);

Switch55.addChild(&Shape62);

Shape& Shape66 =  Shape();
LineSet& LineSet67 =  LineSet();
LineSet67.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA68 =  ColorRGBA();
ColorRGBA68.setDEF(CString("HAnimSegmentLineColorRGBA"));
ColorRGBA68.setColor(new float[]{1,1,0,1,1,1,0,0.1}, 8);
LineSet67.addChild(&ColorRGBA68);

Coordinate& Coordinate69 =  Coordinate();
Coordinate69.setPoint(new float[]{0,0,0,0,0,0}, 6);
LineSet67.setCoord(Coordinate69);

Shape66.setGeometry(&LineSet67);

Switch55.addChild(&Shape66);

Shape& Shape70 =  Shape();
Shape70.setDEF(CString("HAnimSiteShape"));
Appearance& Appearance71 =  Appearance();
Material& Material72 =  Material();
Material72.setDiffuseColor(new float[]{1,0.5,0});
Material72.setTransparency(0.3);
Appearance71.addChild(&Material72);

Shape70.addChild(&Appearance71);

IndexedFaceSet& IndexedFaceSet73 =  IndexedFaceSet();
IndexedFaceSet73.setDEF(CString("DiamondIFS"));
IndexedFaceSet73.setSolid(False);
IndexedFaceSet73.setCreaseAngle(0.5);
IndexedFaceSet73.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
Coordinate& Coordinate74 =  Coordinate();
Coordinate74.setPoint(new float[]{0,0.254,0,-0.254,0,0,0,0,0.254,0.254,0,0,0,0,-0.254,0,-0.254,0}, 18);
IndexedFaceSet73.setCoord(&Coordinate74);

Shape70.setGeometry(&IndexedFaceSet73);

Switch55.addChild(&Shape70);

Shape& Shape75 =  Shape();
LineSet& LineSet76 =  LineSet();
LineSet76.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA77 =  ColorRGBA();
ColorRGBA77.setDEF(CString("HAnimSiteLineColorRGBA"));
ColorRGBA77.setColor(new float[]{1,0.5,0,1,1,0.5,0,0.1}, 8);
LineSet76.addChild(&ColorRGBA77);

Coordinate& Coordinate78 =  Coordinate();
Coordinate78.setPoint(new float[]{0,0,0,0,0,0}, 6);
LineSet76.setCoord(Coordinate78);

Shape75.setGeometry(&LineSet76);

Switch55.addChild(&Shape75);

HAnimSegment54.addChild(Switch55);

Shape& Shape79 =  Shape();
LineSet& LineSet80 =  LineSet();
LineSet80.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA81 =  ColorRGBA();
ColorRGBA81.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet80.addChild(&ColorRGBA81);

Coordinate& Coordinate82 =  Coordinate();
Coordinate82.setPoint(new float[]{0,0,0,0,5.21,0}, 6);
LineSet80.setCoord(Coordinate82);

Shape79.setGeometry(&LineSet80);

HAnimSegment54.addChild(&Shape79);

Shape& Shape83 =  Shape();
LineSet& LineSet84 =  LineSet();
LineSet84.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA85 =  ColorRGBA();
ColorRGBA85.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet84.addChild(&ColorRGBA85);

Coordinate& Coordinate86 =  Coordinate();
Coordinate86.setPoint(new float[]{0,0,0,3.91,0,0}, 6);
LineSet84.setCoord(Coordinate86);

Shape83.setGeometry(&LineSet84);

HAnimSegment54.addChild(&Shape83);

Shape& Shape87 =  Shape();
LineSet& LineSet88 =  LineSet();
LineSet88.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA89 =  ColorRGBA();
ColorRGBA89.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet88.addChild(&ColorRGBA89);

Coordinate& Coordinate90 =  Coordinate();
Coordinate90.setPoint(new float[]{0,0,0,-3.91,0,0}, 6);
LineSet88.setCoord(Coordinate90);

Shape87.setGeometry(&LineSet88);

HAnimSegment54.addChild(&Shape87);

HAnimJoint53.addChildren(&HAnimSegment54);

HAnimJoint& HAnimJoint91 =  HAnimJoint();
HAnimJoint91.setDEF(CString("BvhUniversityWisconsionExample1_vl5"));
HAnimJoint91.X3DNode::setName(CString("vl5"));
HAnimJoint91.setRotation(new float[]{0.929559139694865,-0.360437334785587,0.0774902155269029,0.820797255601436});
HAnimJoint91.setCenter(new float[]{0,5.21,0});
HAnimSegment& HAnimSegment92 =  HAnimSegment();
HAnimSegment92.setDEF(CString("BvhUniversityWisconsionExample1_l5"));
HAnimSegment92.X3DNode::setName(CString("l5"));
Transform& Transform93 =  Transform();
Transform93.setTranslation(new float[]{0,5.21,0});
TouchSensor& TouchSensor94 =  TouchSensor();
TouchSensor94.setDescription(CString("HAnimJoint Chest vl5, HAnimSegment l5"));
Transform93.addChild(&TouchSensor94);

Shape& Shape95 =  Shape();
Shape95.setUSE(CString("HAnimJointShape"));
Transform93.addChild(&Shape95);

Shape& Shape96 =  Shape();
LineSet& LineSet97 =  LineSet();
LineSet97.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA98 =  ColorRGBA();
ColorRGBA98.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet97.addChild(&ColorRGBA98);

Coordinate& Coordinate99 =  Coordinate();
Coordinate99.setPoint(new float[]{0,0,0,0,18.65,0}, 6);
LineSet97.setCoord(Coordinate99);

Shape96.setGeometry(&LineSet97);

Transform93.addChild(&Shape96);

Shape& Shape100 =  Shape();
LineSet& LineSet101 =  LineSet();
LineSet101.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA102 =  ColorRGBA();
ColorRGBA102.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet101.addChild(&ColorRGBA102);

Coordinate& Coordinate103 =  Coordinate();
Coordinate103.setPoint(new float[]{0,0,0,1.12,16.23,1.87}, 6);
LineSet101.setCoord(Coordinate103);

Shape100.setGeometry(&LineSet101);

Transform93.addChild(&Shape100);

Shape& Shape104 =  Shape();
LineSet& LineSet105 =  LineSet();
LineSet105.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA106 =  ColorRGBA();
ColorRGBA106.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet105.addChild(&ColorRGBA106);

Coordinate& Coordinate107 =  Coordinate();
Coordinate107.setPoint(new float[]{0,0,0,-1.12,16.23,1.87}, 6);
LineSet105.setCoord(Coordinate107);

Shape104.setGeometry(&LineSet105);

Transform93.addChild(&Shape104);

HAnimSegment92.addChild(&Transform93);

HAnimJoint91.addChildren(&HAnimSegment92);

HAnimJoint& HAnimJoint108 =  HAnimJoint();
HAnimJoint108.setDEF(CString("BvhUniversityWisconsionExample1_Neck"));
HAnimJoint108.X3DNode::setName(CString("Neck"));
HAnimJoint108.setRotation(new float[]{0.983970484111271,0.0663053900569327,0.16554661472597,0.772979753553571});
HAnimJoint108.setCenter(new float[]{0,23.86,0});
HAnimSegment& HAnimSegment109 =  HAnimSegment();
HAnimSegment109.setDEF(CString("BvhUniversityWisconsionExample1_vl5_to_Neck"));
HAnimSegment109.X3DNode::setName(CString("vl5_to_Neck"));
Transform& Transform110 =  Transform();
Transform110.setTranslation(new float[]{0,23.86,0});
TouchSensor& TouchSensor111 =  TouchSensor();
TouchSensor111.setDescription(CString("HAnimJoint Neck Neck, HAnimSegment vl5_to_Neck"));
Transform110.addChild(&TouchSensor111);

Shape& Shape112 =  Shape();
Shape112.setUSE(CString("HAnimJointShape"));
Transform110.addChild(&Shape112);

Shape& Shape113 =  Shape();
LineSet& LineSet114 =  LineSet();
LineSet114.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA115 =  ColorRGBA();
ColorRGBA115.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet114.addChild(&ColorRGBA115);

Coordinate& Coordinate116 =  Coordinate();
Coordinate116.setPoint(new float[]{0,0,0,0,5.45,0}, 6);
LineSet114.setCoord(Coordinate116);

Shape113.setGeometry(&LineSet114);

Transform110.addChild(&Shape113);

HAnimSegment109.addChild(&Transform110);

HAnimJoint108.addChildren(&HAnimSegment109);

HAnimJoint& HAnimJoint117 =  HAnimJoint();
HAnimJoint117.setDEF(CString("BvhUniversityWisconsionExample1_skullbase"));
HAnimJoint117.X3DNode::setName(CString("skullbase"));
HAnimJoint117.setRotation(new float[]{-0.979126474330309,0.150183590569867,-0.136953409556093,0.734508385229556});
HAnimJoint117.setCenter(new float[]{0,29.31,0});
HAnimSegment& HAnimSegment118 =  HAnimSegment();
HAnimSegment118.setDEF(CString("BvhUniversityWisconsionExample1_skull"));
HAnimSegment118.X3DNode::setName(CString("skull"));
Transform& Transform119 =  Transform();
Transform119.setTranslation(new float[]{0,29.31,0});
HAnimSite& HAnimSite120 =  HAnimSite();
HAnimSite120.setDEF(CString("BvhUniversityWisconsionExample1_skull_tip"));
HAnimSite120.X3DNode::setName(CString("skull_tip"));
HAnimSite120.setTranslation(new float[]{0,3.87,0});
TouchSensor& TouchSensor121 =  TouchSensor();
TouchSensor121.setDescription(CString("HAnimSite skull_tip"));
HAnimSite120.addChild(&TouchSensor121);

Shape& Shape122 =  Shape();
Shape122.setUSE(CString("HAnimSiteShape"));
HAnimSite120.addChild(&Shape122);

Shape& Shape123 =  Shape();
LineSet& LineSet124 =  LineSet();
LineSet124.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA125 =  ColorRGBA();
ColorRGBA125.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet124.addChild(&ColorRGBA125);

Coordinate& Coordinate126 =  Coordinate();
Coordinate126.setPoint(new float[]{0,-3.87,0,0,0,0}, 6);
LineSet124.setCoord(Coordinate126);

Shape123.setGeometry(&LineSet124);

HAnimSite120.addChild(&Shape123);

Transform119.addChild(&HAnimSite120);

TouchSensor& TouchSensor127 =  TouchSensor();
TouchSensor127.setDescription(CString("HAnimJoint Head skullbase, HAnimSegment skull"));
Transform119.addChild(&TouchSensor127);

Shape& Shape128 =  Shape();
Shape128.setUSE(CString("HAnimJointShape"));
Transform119.addChild(&Shape128);

HAnimSegment118.addChild(&Transform119);

HAnimJoint117.addChildren(&HAnimSegment118);

HAnimJoint108.addChildren(&HAnimJoint117);

HAnimJoint91.addChildren(&HAnimJoint108);

HAnimJoint& HAnimJoint129 =  HAnimJoint();
HAnimJoint129.setDEF(CString("BvhUniversityWisconsionExample1_LeftCollar"));
HAnimJoint129.X3DNode::setName(CString("LeftCollar"));
HAnimJoint129.setRotation(new float[]{-0.0400336310146056,0.285571817840178,0.957520780580368,0.318543581718216});
HAnimJoint129.setCenter(new float[]{1.12,21.44,1.87});
HAnimSegment& HAnimSegment130 =  HAnimSegment();
HAnimSegment130.setDEF(CString("BvhUniversityWisconsionExample1_vl5_to_LeftCollar"));
HAnimSegment130.X3DNode::setName(CString("vl5_to_LeftCollar"));
Transform& Transform131 =  Transform();
Transform131.setTranslation(new float[]{1.12,21.44,1.87});
TouchSensor& TouchSensor132 =  TouchSensor();
TouchSensor132.setDescription(CString("HAnimJoint LeftCollar LeftCollar, HAnimSegment vl5_to_LeftCollar"));
Transform131.addChild(&TouchSensor132);

Shape& Shape133 =  Shape();
Shape133.setUSE(CString("HAnimJointShape"));
Transform131.addChild(&Shape133);

Shape& Shape134 =  Shape();
LineSet& LineSet135 =  LineSet();
LineSet135.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA136 =  ColorRGBA();
ColorRGBA136.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet135.addChild(&ColorRGBA136);

Coordinate& Coordinate137 =  Coordinate();
Coordinate137.setPoint(new float[]{0,0,0,5.54,0,0}, 6);
LineSet135.setCoord(Coordinate137);

Shape134.setGeometry(&LineSet135);

Transform131.addChild(&Shape134);

HAnimSegment130.addChild(&Transform131);

HAnimJoint129.addChildren(&HAnimSegment130);

HAnimJoint& HAnimJoint138 =  HAnimJoint();
HAnimJoint138.setDEF(CString("BvhUniversityWisconsionExample1_LeftUpArm"));
HAnimJoint138.X3DNode::setName(CString("LeftUpArm"));
HAnimJoint138.setRotation(new float[]{-0.027309899849048,-0.170484979510911,0.984981746598077,1.66813504770243});
HAnimJoint138.setCenter(new float[]{6.66,21.44,1.87});
HAnimSegment& HAnimSegment139 =  HAnimSegment();
HAnimSegment139.setDEF(CString("BvhUniversityWisconsionExample1_LeftCollar_to_LeftUpArm"));
HAnimSegment139.X3DNode::setName(CString("LeftCollar_to_LeftUpArm"));
Transform& Transform140 =  Transform();
Transform140.setTranslation(new float[]{6.66,21.44,1.87});
TouchSensor& TouchSensor141 =  TouchSensor();
TouchSensor141.setDescription(CString("HAnimJoint LeftUpArm LeftUpArm, HAnimSegment LeftCollar_to_LeftUpArm"));
Transform140.addChild(&TouchSensor141);

Shape& Shape142 =  Shape();
Shape142.setUSE(CString("HAnimJointShape"));
Transform140.addChild(&Shape142);

Shape& Shape143 =  Shape();
LineSet& LineSet144 =  LineSet();
LineSet144.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA145 =  ColorRGBA();
ColorRGBA145.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet144.addChild(&ColorRGBA145);

Coordinate& Coordinate146 =  Coordinate();
Coordinate146.setPoint(new float[]{0,0,0,0,-11.96,0}, 6);
LineSet144.setCoord(Coordinate146);

Shape143.setGeometry(&LineSet144);

Transform140.addChild(&Shape143);

HAnimSegment139.addChild(&Transform140);

HAnimJoint138.addChildren(&HAnimSegment139);

HAnimJoint& HAnimJoint147 =  HAnimJoint();
HAnimJoint147.setDEF(CString("BvhUniversityWisconsionExample1_LeftLowArm"));
HAnimJoint147.X3DNode::setName(CString("LeftLowArm"));
HAnimJoint147.setRotation(new float[]{-0.998249192144246,0.0587758586859541,-0.00662939055192083,1.65994762916941});
HAnimJoint147.setCenter(new float[]{6.66,9.48,1.87});
HAnimSegment& HAnimSegment148 =  HAnimSegment();
HAnimSegment148.setDEF(CString("BvhUniversityWisconsionExample1_LeftUpArm_to_LeftLowArm"));
HAnimSegment148.X3DNode::setName(CString("LeftUpArm_to_LeftLowArm"));
Transform& Transform149 =  Transform();
Transform149.setTranslation(new float[]{6.66,9.48,1.87});
TouchSensor& TouchSensor150 =  TouchSensor();
TouchSensor150.setDescription(CString("HAnimJoint LeftLowArm LeftLowArm, HAnimSegment LeftUpArm_to_LeftLowArm"));
Transform149.addChild(&TouchSensor150);

Shape& Shape151 =  Shape();
Shape151.setUSE(CString("HAnimJointShape"));
Transform149.addChild(&Shape151);

Shape& Shape152 =  Shape();
LineSet& LineSet153 =  LineSet();
LineSet153.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA154 =  ColorRGBA();
ColorRGBA154.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet153.addChild(&ColorRGBA154);

Coordinate& Coordinate155 =  Coordinate();
Coordinate155.setPoint(new float[]{0,0,0,0,-9.93,0}, 6);
LineSet153.setCoord(Coordinate155);

Shape152.setGeometry(&LineSet153);

Transform149.addChild(&Shape152);

HAnimSegment148.addChild(&Transform149);

HAnimJoint147.addChildren(&HAnimSegment148);

HAnimJoint& HAnimJoint156 =  HAnimJoint();
HAnimJoint156.setDEF(CString("BvhUniversityWisconsionExample1_LeftHand"));
HAnimJoint156.X3DNode::setName(CString("LeftHand"));
HAnimJoint156.setRotation(new float[]{0.404520441533964,0.00251538810905742,0.914525497293667,0.0133189030390886});
HAnimJoint156.setCenter(new float[]{6.66,-0.45,1.87});
HAnimSegment& HAnimSegment157 =  HAnimSegment();
HAnimSegment157.setDEF(CString("BvhUniversityWisconsionExample1_LeftLowArm_to_LeftHand"));
HAnimSegment157.X3DNode::setName(CString("LeftLowArm_to_LeftHand"));
Transform& Transform158 =  Transform();
Transform158.setTranslation(new float[]{6.66,-0.45,1.87});
HAnimSite& HAnimSite159 =  HAnimSite();
HAnimSite159.setDEF(CString("BvhUniversityWisconsionExample1_LeftLowArm_to_LeftHand_tip"));
HAnimSite159.X3DNode::setName(CString("LeftLowArm_to_LeftHand_tip"));
HAnimSite159.setTranslation(new float[]{0,-7,0});
TouchSensor& TouchSensor160 =  TouchSensor();
TouchSensor160.setDescription(CString("HAnimSite LeftLowArm_to_LeftHand_tip"));
HAnimSite159.addChild(&TouchSensor160);

Shape& Shape161 =  Shape();
Shape161.setUSE(CString("HAnimSiteShape"));
HAnimSite159.addChild(&Shape161);

Shape& Shape162 =  Shape();
LineSet& LineSet163 =  LineSet();
LineSet163.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA164 =  ColorRGBA();
ColorRGBA164.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet163.addChild(&ColorRGBA164);

Coordinate& Coordinate165 =  Coordinate();
Coordinate165.setPoint(new float[]{0,7,0,0,0,0}, 6);
LineSet163.setCoord(Coordinate165);

Shape162.setGeometry(&LineSet163);

HAnimSite159.addChild(&Shape162);

Transform158.addChild(&HAnimSite159);

TouchSensor& TouchSensor166 =  TouchSensor();
TouchSensor166.setDescription(CString("HAnimJoint LeftHand LeftHand, HAnimSegment LeftLowArm_to_LeftHand"));
Transform158.addChild(&TouchSensor166);

Shape& Shape167 =  Shape();
Shape167.setUSE(CString("HAnimJointShape"));
Transform158.addChild(&Shape167);

HAnimSegment157.addChild(&Transform158);

HAnimJoint156.addChildren(&HAnimSegment157);

HAnimJoint147.addChildren(&HAnimJoint156);

HAnimJoint138.addChildren(&HAnimJoint147);

HAnimJoint129.addChildren(&HAnimJoint138);

HAnimJoint91.addChildren(&HAnimJoint129);

HAnimJoint& HAnimJoint168 =  HAnimJoint();
HAnimJoint168.setDEF(CString("BvhUniversityWisconsionExample1_RightCollar"));
HAnimJoint168.X3DNode::setName(CString("RightCollar"));
HAnimJoint168.setRotation(new float[]{-0.0717927567877157,-0.898736438505571,-0.432572091304025,0.383573753513759});
HAnimJoint168.setCenter(new float[]{-1.12,21.44,1.87});
HAnimSegment& HAnimSegment169 =  HAnimSegment();
HAnimSegment169.setDEF(CString("BvhUniversityWisconsionExample1_vl5_to_RightCollar"));
HAnimSegment169.X3DNode::setName(CString("vl5_to_RightCollar"));
Transform& Transform170 =  Transform();
Transform170.setTranslation(new float[]{-1.12,21.44,1.87});
TouchSensor& TouchSensor171 =  TouchSensor();
TouchSensor171.setDescription(CString("HAnimJoint RightCollar RightCollar, HAnimSegment vl5_to_RightCollar"));
Transform170.addChild(&TouchSensor171);

Shape& Shape172 =  Shape();
Shape172.setUSE(CString("HAnimJointShape"));
Transform170.addChild(&Shape172);

Shape& Shape173 =  Shape();
LineSet& LineSet174 =  LineSet();
LineSet174.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA175 =  ColorRGBA();
ColorRGBA175.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet174.addChild(&ColorRGBA175);

Coordinate& Coordinate176 =  Coordinate();
Coordinate176.setPoint(new float[]{0,0,0,-6.07,0,0}, 6);
LineSet174.setCoord(Coordinate176);

Shape173.setGeometry(&LineSet174);

Transform170.addChild(&Shape173);

HAnimSegment169.addChild(&Transform170);

HAnimJoint168.addChildren(&HAnimSegment169);

HAnimJoint& HAnimJoint177 =  HAnimJoint();
HAnimJoint177.setDEF(CString("BvhUniversityWisconsionExample1_RightUpArm"));
HAnimJoint177.X3DNode::setName(CString("RightUpArm"));
HAnimJoint177.setRotation(new float[]{-0.750052184733347,-0.545300751513553,-0.374257679380781,1.93524054510947});
HAnimJoint177.setCenter(new float[]{-7.19,21.44,1.87});
HAnimSegment& HAnimSegment178 =  HAnimSegment();
HAnimSegment178.setDEF(CString("BvhUniversityWisconsionExample1_RightCollar_to_RightUpArm"));
HAnimSegment178.X3DNode::setName(CString("RightCollar_to_RightUpArm"));
Transform& Transform179 =  Transform();
Transform179.setTranslation(new float[]{-7.19,21.44,1.87});
TouchSensor& TouchSensor180 =  TouchSensor();
TouchSensor180.setDescription(CString("HAnimJoint RightUpArm RightUpArm, HAnimSegment RightCollar_to_RightUpArm"));
Transform179.addChild(&TouchSensor180);

Shape& Shape181 =  Shape();
Shape181.setUSE(CString("HAnimJointShape"));
Transform179.addChild(&Shape181);

Shape& Shape182 =  Shape();
LineSet& LineSet183 =  LineSet();
LineSet183.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA184 =  ColorRGBA();
ColorRGBA184.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet183.addChild(&ColorRGBA184);

Coordinate& Coordinate185 =  Coordinate();
Coordinate185.setPoint(new float[]{0,0,0,0,-11.82,0}, 6);
LineSet183.setCoord(Coordinate185);

Shape182.setGeometry(&LineSet183);

Transform179.addChild(&Shape182);

HAnimSegment178.addChild(&Transform179);

HAnimJoint177.addChildren(&HAnimSegment178);

HAnimJoint& HAnimJoint186 =  HAnimJoint();
HAnimJoint186.setDEF(CString("BvhUniversityWisconsionExample1_RightLowArm"));
HAnimJoint186.X3DNode::setName(CString("RightLowArm"));
HAnimJoint186.setRotation(new float[]{-0.942326628906139,0.260683574441484,0.209915693722034,1.36514284873355});
HAnimJoint186.setCenter(new float[]{-7.19,9.62,1.87});
HAnimSegment& HAnimSegment187 =  HAnimSegment();
HAnimSegment187.setDEF(CString("BvhUniversityWisconsionExample1_RightUpArm_to_RightLowArm"));
HAnimSegment187.X3DNode::setName(CString("RightUpArm_to_RightLowArm"));
Transform& Transform188 =  Transform();
Transform188.setTranslation(new float[]{-7.19,9.62,1.87});
TouchSensor& TouchSensor189 =  TouchSensor();
TouchSensor189.setDescription(CString("HAnimJoint RightLowArm RightLowArm, HAnimSegment RightUpArm_to_RightLowArm"));
Transform188.addChild(&TouchSensor189);

Shape& Shape190 =  Shape();
Shape190.setUSE(CString("HAnimJointShape"));
Transform188.addChild(&Shape190);

Shape& Shape191 =  Shape();
LineSet& LineSet192 =  LineSet();
LineSet192.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA193 =  ColorRGBA();
ColorRGBA193.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet192.addChild(&ColorRGBA193);

Coordinate& Coordinate194 =  Coordinate();
Coordinate194.setPoint(new float[]{0,0,0,0,-10.65,0}, 6);
LineSet192.setCoord(Coordinate194);

Shape191.setGeometry(&LineSet192);

Transform188.addChild(&Shape191);

HAnimSegment187.addChild(&Transform188);

HAnimJoint186.addChildren(&HAnimSegment187);

HAnimJoint& HAnimJoint195 =  HAnimJoint();
HAnimJoint195.setDEF(CString("BvhUniversityWisconsionExample1_RightHand"));
HAnimJoint195.X3DNode::setName(CString("RightHand"));
HAnimJoint195.setRotation(new float[]{0.487401172792782,0.00827736333346378,-0.87313892480885,0.0323338299925714});
HAnimJoint195.setCenter(new float[]{-7.19,-1.03,1.87});
HAnimSegment& HAnimSegment196 =  HAnimSegment();
HAnimSegment196.setDEF(CString("BvhUniversityWisconsionExample1_RightLowArm_to_RightHand"));
HAnimSegment196.X3DNode::setName(CString("RightLowArm_to_RightHand"));
Transform& Transform197 =  Transform();
Transform197.setTranslation(new float[]{-7.19,-1.03,1.87});
HAnimSite& HAnimSite198 =  HAnimSite();
HAnimSite198.setDEF(CString("BvhUniversityWisconsionExample1_RightLowArm_to_RightHand_tip"));
HAnimSite198.X3DNode::setName(CString("RightLowArm_to_RightHand_tip"));
HAnimSite198.setTranslation(new float[]{0,-7,0});
TouchSensor& TouchSensor199 =  TouchSensor();
TouchSensor199.setDescription(CString("HAnimSite RightLowArm_to_RightHand_tip"));
HAnimSite198.addChild(&TouchSensor199);

Shape& Shape200 =  Shape();
Shape200.setUSE(CString("HAnimSiteShape"));
HAnimSite198.addChild(&Shape200);

Shape& Shape201 =  Shape();
LineSet& LineSet202 =  LineSet();
LineSet202.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA203 =  ColorRGBA();
ColorRGBA203.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet202.addChild(&ColorRGBA203);

Coordinate& Coordinate204 =  Coordinate();
Coordinate204.setPoint(new float[]{0,7,0,0,0,0}, 6);
LineSet202.setCoord(Coordinate204);

Shape201.setGeometry(&LineSet202);

HAnimSite198.addChild(&Shape201);

Transform197.addChild(&HAnimSite198);

TouchSensor& TouchSensor205 =  TouchSensor();
TouchSensor205.setDescription(CString("HAnimJoint RightHand RightHand, HAnimSegment RightLowArm_to_RightHand"));
Transform197.addChild(&TouchSensor205);

Shape& Shape206 =  Shape();
Shape206.setUSE(CString("HAnimJointShape"));
Transform197.addChild(&Shape206);

HAnimSegment196.addChild(&Transform197);

HAnimJoint195.addChildren(&HAnimSegment196);

HAnimJoint186.addChildren(&HAnimJoint195);

HAnimJoint177.addChildren(&HAnimJoint186);

HAnimJoint168.addChildren(&HAnimJoint177);

HAnimJoint91.addChildren(&HAnimJoint168);

HAnimJoint53.addChildren(&HAnimJoint91);

HAnimJoint& HAnimJoint207 =  HAnimJoint();
HAnimJoint207.setDEF(CString("BvhUniversityWisconsionExample1_LeftUpLeg"));
HAnimJoint207.X3DNode::setName(CString("LeftUpLeg"));
HAnimJoint207.setRotation(new float[]{0.798274116909833,-0.0905296906431976,0.595451769150005,0.374616063385567});
HAnimJoint207.setCenter(new float[]{3.91,0,0});
HAnimSegment& HAnimSegment208 =  HAnimSegment();
HAnimSegment208.setDEF(CString("BvhUniversityWisconsionExample1_humanoid_root_to_LeftUpLeg"));
HAnimSegment208.X3DNode::setName(CString("humanoid_root_to_LeftUpLeg"));
Transform& Transform209 =  Transform();
Transform209.setTranslation(new float[]{3.91,0,0});
TouchSensor& TouchSensor210 =  TouchSensor();
TouchSensor210.setDescription(CString("HAnimJoint LeftUpLeg LeftUpLeg, HAnimSegment humanoid_root_to_LeftUpLeg"));
Transform209.addChild(&TouchSensor210);

Shape& Shape211 =  Shape();
Shape211.setUSE(CString("HAnimJointShape"));
Transform209.addChild(&Shape211);

Shape& Shape212 =  Shape();
LineSet& LineSet213 =  LineSet();
LineSet213.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA214 =  ColorRGBA();
ColorRGBA214.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet213.addChild(&ColorRGBA214);

Coordinate& Coordinate215 =  Coordinate();
Coordinate215.setPoint(new float[]{0,0,0,0,-18.34,0}, 6);
LineSet213.setCoord(Coordinate215);

Shape212.setGeometry(&LineSet213);

Transform209.addChild(&Shape212);

HAnimSegment208.addChild(&Transform209);

HAnimJoint207.addChildren(&HAnimSegment208);

HAnimJoint& HAnimJoint216 =  HAnimJoint();
HAnimJoint216.setDEF(CString("BvhUniversityWisconsionExample1_LeftLowLeg"));
HAnimJoint216.X3DNode::setName(CString("LeftLowLeg"));
HAnimJoint216.setRotation(new float[]{0.969171949455709,0.159020234805176,0.188197495495361,1.02828103886506});
HAnimJoint216.setCenter(new float[]{3.91,-18.34,0});
HAnimSegment& HAnimSegment217 =  HAnimSegment();
HAnimSegment217.setDEF(CString("BvhUniversityWisconsionExample1_LeftUpLeg_to_LeftLowLeg"));
HAnimSegment217.X3DNode::setName(CString("LeftUpLeg_to_LeftLowLeg"));
Transform& Transform218 =  Transform();
Transform218.setTranslation(new float[]{3.91,-18.34,0});
TouchSensor& TouchSensor219 =  TouchSensor();
TouchSensor219.setDescription(CString("HAnimJoint LeftLowLeg LeftLowLeg, HAnimSegment LeftUpLeg_to_LeftLowLeg"));
Transform218.addChild(&TouchSensor219);

Shape& Shape220 =  Shape();
Shape220.setUSE(CString("HAnimJointShape"));
Transform218.addChild(&Shape220);

Shape& Shape221 =  Shape();
LineSet& LineSet222 =  LineSet();
LineSet222.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA223 =  ColorRGBA();
ColorRGBA223.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet222.addChild(&ColorRGBA223);

Coordinate& Coordinate224 =  Coordinate();
Coordinate224.setPoint(new float[]{0,0,0,0,-17.37,0}, 6);
LineSet222.setCoord(Coordinate224);

Shape221.setGeometry(&LineSet222);

Transform218.addChild(&Shape221);

HAnimSegment217.addChild(&Transform218);

HAnimJoint216.addChildren(&HAnimSegment217);

HAnimJoint& HAnimJoint225 =  HAnimJoint();
HAnimJoint225.setDEF(CString("BvhUniversityWisconsionExample1_LeftFoot"));
HAnimJoint225.X3DNode::setName(CString("LeftFoot"));
HAnimJoint225.setRotation(new float[]{1.00000000000036,0,0,0.0199134632110525});
HAnimJoint225.setCenter(new float[]{3.91,-35.71,0});
HAnimSegment& HAnimSegment226 =  HAnimSegment();
HAnimSegment226.setDEF(CString("BvhUniversityWisconsionExample1_LeftLowLeg_to_LeftFoot"));
HAnimSegment226.X3DNode::setName(CString("LeftLowLeg_to_LeftFoot"));
Transform& Transform227 =  Transform();
Transform227.setTranslation(new float[]{3.91,-35.71,0});
HAnimSite& HAnimSite228 =  HAnimSite();
HAnimSite228.setDEF(CString("BvhUniversityWisconsionExample1_LeftLowLeg_to_LeftFoot_tip"));
HAnimSite228.X3DNode::setName(CString("LeftLowLeg_to_LeftFoot_tip"));
HAnimSite228.setTranslation(new float[]{0,-3.46,0});
TouchSensor& TouchSensor229 =  TouchSensor();
TouchSensor229.setDescription(CString("HAnimSite LeftLowLeg_to_LeftFoot_tip"));
HAnimSite228.addChild(&TouchSensor229);

Shape& Shape230 =  Shape();
Shape230.setUSE(CString("HAnimSiteShape"));
HAnimSite228.addChild(&Shape230);

Shape& Shape231 =  Shape();
LineSet& LineSet232 =  LineSet();
LineSet232.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA233 =  ColorRGBA();
ColorRGBA233.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet232.addChild(&ColorRGBA233);

Coordinate& Coordinate234 =  Coordinate();
Coordinate234.setPoint(new float[]{0,3.46,0,0,0,0}, 6);
LineSet232.setCoord(Coordinate234);

Shape231.setGeometry(&LineSet232);

HAnimSite228.addChild(&Shape231);

Transform227.addChild(&HAnimSite228);

TouchSensor& TouchSensor235 =  TouchSensor();
TouchSensor235.setDescription(CString("HAnimJoint LeftFoot LeftFoot, HAnimSegment LeftLowLeg_to_LeftFoot"));
Transform227.addChild(&TouchSensor235);

Shape& Shape236 =  Shape();
Shape236.setUSE(CString("HAnimJointShape"));
Transform227.addChild(&Shape236);

HAnimSegment226.addChild(&Transform227);

HAnimJoint225.addChildren(&HAnimSegment226);

HAnimJoint216.addChildren(&HAnimJoint225);

HAnimJoint207.addChildren(&HAnimJoint216);

HAnimJoint53.addChildren(&HAnimJoint207);

HAnimJoint& HAnimJoint237 =  HAnimJoint();
HAnimJoint237.setDEF(CString("BvhUniversityWisconsionExample1_RightUpLeg"));
HAnimJoint237.X3DNode::setName(CString("RightUpLeg"));
HAnimJoint237.setRotation(new float[]{-0.529026768997627,-0.0781104813974245,-0.845002621522441,0.345959390966261});
HAnimJoint237.setCenter(new float[]{-3.91,0,0});
HAnimSegment& HAnimSegment238 =  HAnimSegment();
HAnimSegment238.setDEF(CString("BvhUniversityWisconsionExample1_humanoid_root_to_RightUpLeg"));
HAnimSegment238.X3DNode::setName(CString("humanoid_root_to_RightUpLeg"));
Transform& Transform239 =  Transform();
Transform239.setTranslation(new float[]{-3.91,0,0});
TouchSensor& TouchSensor240 =  TouchSensor();
TouchSensor240.setDescription(CString("HAnimJoint RightUpLeg RightUpLeg, HAnimSegment humanoid_root_to_RightUpLeg"));
Transform239.addChild(&TouchSensor240);

Shape& Shape241 =  Shape();
Shape241.setUSE(CString("HAnimJointShape"));
Transform239.addChild(&Shape241);

Shape& Shape242 =  Shape();
LineSet& LineSet243 =  LineSet();
LineSet243.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA244 =  ColorRGBA();
ColorRGBA244.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet243.addChild(&ColorRGBA244);

Coordinate& Coordinate245 =  Coordinate();
Coordinate245.setPoint(new float[]{0,0,0,0,-17.63,0}, 6);
LineSet243.setCoord(Coordinate245);

Shape242.setGeometry(&LineSet243);

Transform239.addChild(&Shape242);

HAnimSegment238.addChild(&Transform239);

HAnimJoint237.addChildren(&HAnimSegment238);

HAnimJoint& HAnimJoint246 =  HAnimJoint();
HAnimJoint246.setDEF(CString("BvhUniversityWisconsionExample1_RightLowLeg"));
HAnimJoint246.X3DNode::setName(CString("RightLowLeg"));
HAnimJoint246.setRotation(new float[]{0.978057447453843,-0.194999101930461,0.073341527979632,0.971415273794883});
HAnimJoint246.setCenter(new float[]{-3.91,-17.63,0});
HAnimSegment& HAnimSegment247 =  HAnimSegment();
HAnimSegment247.setDEF(CString("BvhUniversityWisconsionExample1_RightUpLeg_to_RightLowLeg"));
HAnimSegment247.X3DNode::setName(CString("RightUpLeg_to_RightLowLeg"));
Transform& Transform248 =  Transform();
Transform248.setTranslation(new float[]{-3.91,-17.63,0});
TouchSensor& TouchSensor249 =  TouchSensor();
TouchSensor249.setDescription(CString("HAnimJoint RightLowLeg RightLowLeg, HAnimSegment RightUpLeg_to_RightLowLeg"));
Transform248.addChild(&TouchSensor249);

Shape& Shape250 =  Shape();
Shape250.setUSE(CString("HAnimJointShape"));
Transform248.addChild(&Shape250);

Shape& Shape251 =  Shape();
LineSet& LineSet252 =  LineSet();
LineSet252.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA253 =  ColorRGBA();
ColorRGBA253.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet252.addChild(&ColorRGBA253);

Coordinate& Coordinate254 =  Coordinate();
Coordinate254.setPoint(new float[]{0,0,0,0,-17.14,0}, 6);
LineSet252.setCoord(Coordinate254);

Shape251.setGeometry(&LineSet252);

Transform248.addChild(&Shape251);

HAnimSegment247.addChild(&Transform248);

HAnimJoint246.addChildren(&HAnimSegment247);

HAnimJoint& HAnimJoint255 =  HAnimJoint();
HAnimJoint255.setDEF(CString("BvhUniversityWisconsionExample1_RightFoot"));
HAnimJoint255.X3DNode::setName(CString("RightFoot"));
HAnimJoint255.setRotation(new float[]{-1,0,0,0.446403006744384});
HAnimJoint255.setCenter(new float[]{-3.91,-34.77,0});
HAnimSegment& HAnimSegment256 =  HAnimSegment();
HAnimSegment256.setDEF(CString("BvhUniversityWisconsionExample1_RightLowLeg_to_RightFoot"));
HAnimSegment256.X3DNode::setName(CString("RightLowLeg_to_RightFoot"));
Transform& Transform257 =  Transform();
Transform257.setTranslation(new float[]{-3.91,-34.77,0});
HAnimSite& HAnimSite258 =  HAnimSite();
HAnimSite258.setDEF(CString("BvhUniversityWisconsionExample1_RightLowLeg_to_RightFoot_tip"));
HAnimSite258.X3DNode::setName(CString("RightLowLeg_to_RightFoot_tip"));
HAnimSite258.setTranslation(new float[]{0,-3.75,0});
TouchSensor& TouchSensor259 =  TouchSensor();
TouchSensor259.setDescription(CString("HAnimSite RightLowLeg_to_RightFoot_tip"));
HAnimSite258.addChild(&TouchSensor259);

Shape& Shape260 =  Shape();
Shape260.setUSE(CString("HAnimSiteShape"));
HAnimSite258.addChild(&Shape260);

Shape& Shape261 =  Shape();
LineSet& LineSet262 =  LineSet();
LineSet262.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA263 =  ColorRGBA();
ColorRGBA263.setUSE(CString("HAnimSiteLineColorRGBA"));
LineSet262.addChild(&ColorRGBA263);

Coordinate& Coordinate264 =  Coordinate();
Coordinate264.setPoint(new float[]{0,3.75,0,0,0,0}, 6);
LineSet262.setCoord(Coordinate264);

Shape261.setGeometry(&LineSet262);

HAnimSite258.addChild(&Shape261);

Transform257.addChild(&HAnimSite258);

TouchSensor& TouchSensor265 =  TouchSensor();
TouchSensor265.setDescription(CString("HAnimJoint RightFoot RightFoot, HAnimSegment RightLowLeg_to_RightFoot"));
Transform257.addChild(&TouchSensor265);

Shape& Shape266 =  Shape();
Shape266.setUSE(CString("HAnimJointShape"));
Transform257.addChild(&Shape266);

HAnimSegment256.addChild(&Transform257);

HAnimJoint255.addChildren(&HAnimSegment256);

HAnimJoint246.addChildren(&HAnimJoint255);

HAnimJoint237.addChildren(&HAnimJoint246);

HAnimJoint53.addChildren(&HAnimJoint237);

HAnimHumanoid46.setSkeleton(&HAnimJoint53);

HAnimJoint& HAnimJoint267 =  HAnimJoint();
HAnimJoint267.setUSE(CString("BvhUniversityWisconsionExample1_humanoid_root"));
HAnimHumanoid46.setJoints(&HAnimJoint267);

HAnimJoint& HAnimJoint268 =  HAnimJoint();
HAnimJoint268.setUSE(CString("BvhUniversityWisconsionExample1_vl5"));
HAnimHumanoid46.setJoints(&HAnimJoint268);

HAnimJoint& HAnimJoint269 =  HAnimJoint();
HAnimJoint269.setUSE(CString("BvhUniversityWisconsionExample1_Neck"));
HAnimHumanoid46.setJoints(&HAnimJoint269);

HAnimJoint& HAnimJoint270 =  HAnimJoint();
HAnimJoint270.setUSE(CString("BvhUniversityWisconsionExample1_skullbase"));
HAnimHumanoid46.setJoints(&HAnimJoint270);

HAnimJoint& HAnimJoint271 =  HAnimJoint();
HAnimJoint271.setUSE(CString("BvhUniversityWisconsionExample1_LeftCollar"));
HAnimHumanoid46.setJoints(&HAnimJoint271);

HAnimJoint& HAnimJoint272 =  HAnimJoint();
HAnimJoint272.setUSE(CString("BvhUniversityWisconsionExample1_LeftUpArm"));
HAnimHumanoid46.setJoints(&HAnimJoint272);

HAnimJoint& HAnimJoint273 =  HAnimJoint();
HAnimJoint273.setUSE(CString("BvhUniversityWisconsionExample1_LeftLowArm"));
HAnimHumanoid46.setJoints(&HAnimJoint273);

HAnimJoint& HAnimJoint274 =  HAnimJoint();
HAnimJoint274.setUSE(CString("BvhUniversityWisconsionExample1_LeftHand"));
HAnimHumanoid46.setJoints(&HAnimJoint274);

HAnimJoint& HAnimJoint275 =  HAnimJoint();
HAnimJoint275.setUSE(CString("BvhUniversityWisconsionExample1_RightCollar"));
HAnimHumanoid46.setJoints(&HAnimJoint275);

HAnimJoint& HAnimJoint276 =  HAnimJoint();
HAnimJoint276.setUSE(CString("BvhUniversityWisconsionExample1_RightUpArm"));
HAnimHumanoid46.setJoints(&HAnimJoint276);

HAnimJoint& HAnimJoint277 =  HAnimJoint();
HAnimJoint277.setUSE(CString("BvhUniversityWisconsionExample1_RightLowArm"));
HAnimHumanoid46.setJoints(&HAnimJoint277);

HAnimJoint& HAnimJoint278 =  HAnimJoint();
HAnimJoint278.setUSE(CString("BvhUniversityWisconsionExample1_RightHand"));
HAnimHumanoid46.setJoints(&HAnimJoint278);

HAnimJoint& HAnimJoint279 =  HAnimJoint();
HAnimJoint279.setUSE(CString("BvhUniversityWisconsionExample1_LeftUpLeg"));
HAnimHumanoid46.setJoints(&HAnimJoint279);

HAnimJoint& HAnimJoint280 =  HAnimJoint();
HAnimJoint280.setUSE(CString("BvhUniversityWisconsionExample1_LeftLowLeg"));
HAnimHumanoid46.setJoints(&HAnimJoint280);

HAnimJoint& HAnimJoint281 =  HAnimJoint();
HAnimJoint281.setUSE(CString("BvhUniversityWisconsionExample1_LeftFoot"));
HAnimHumanoid46.setJoints(&HAnimJoint281);

HAnimJoint& HAnimJoint282 =  HAnimJoint();
HAnimJoint282.setUSE(CString("BvhUniversityWisconsionExample1_RightUpLeg"));
HAnimHumanoid46.setJoints(&HAnimJoint282);

HAnimJoint& HAnimJoint283 =  HAnimJoint();
HAnimJoint283.setUSE(CString("BvhUniversityWisconsionExample1_RightLowLeg"));
HAnimHumanoid46.setJoints(&HAnimJoint283);

HAnimJoint& HAnimJoint284 =  HAnimJoint();
HAnimJoint284.setUSE(CString("BvhUniversityWisconsionExample1_RightFoot"));
HAnimHumanoid46.setJoints(&HAnimJoint284);

HAnimSegment& HAnimSegment285 =  HAnimSegment();
HAnimSegment285.setUSE(CString("BvhUniversityWisconsionExample1_sacrum"));
HAnimHumanoid46.setSegments(&HAnimSegment285);

HAnimSegment& HAnimSegment286 =  HAnimSegment();
HAnimSegment286.setUSE(CString("BvhUniversityWisconsionExample1_l5"));
HAnimHumanoid46.setSegments(&HAnimSegment286);

HAnimSegment& HAnimSegment287 =  HAnimSegment();
HAnimSegment287.setUSE(CString("BvhUniversityWisconsionExample1_vl5_to_Neck"));
HAnimHumanoid46.setSegments(&HAnimSegment287);

HAnimSegment& HAnimSegment288 =  HAnimSegment();
HAnimSegment288.setUSE(CString("BvhUniversityWisconsionExample1_skull"));
HAnimHumanoid46.setSegments(&HAnimSegment288);

HAnimSegment& HAnimSegment289 =  HAnimSegment();
HAnimSegment289.setUSE(CString("BvhUniversityWisconsionExample1_vl5_to_LeftCollar"));
HAnimHumanoid46.setSegments(&HAnimSegment289);

HAnimSegment& HAnimSegment290 =  HAnimSegment();
HAnimSegment290.setUSE(CString("BvhUniversityWisconsionExample1_LeftCollar_to_LeftUpArm"));
HAnimHumanoid46.setSegments(&HAnimSegment290);

HAnimSegment& HAnimSegment291 =  HAnimSegment();
HAnimSegment291.setUSE(CString("BvhUniversityWisconsionExample1_LeftUpArm_to_LeftLowArm"));
HAnimHumanoid46.setSegments(&HAnimSegment291);

HAnimSegment& HAnimSegment292 =  HAnimSegment();
HAnimSegment292.setUSE(CString("BvhUniversityWisconsionExample1_LeftLowArm_to_LeftHand"));
HAnimHumanoid46.setSegments(&HAnimSegment292);

HAnimSegment& HAnimSegment293 =  HAnimSegment();
HAnimSegment293.setUSE(CString("BvhUniversityWisconsionExample1_vl5_to_RightCollar"));
HAnimHumanoid46.setSegments(&HAnimSegment293);

HAnimSegment& HAnimSegment294 =  HAnimSegment();
HAnimSegment294.setUSE(CString("BvhUniversityWisconsionExample1_RightCollar_to_RightUpArm"));
HAnimHumanoid46.setSegments(&HAnimSegment294);

HAnimSegment& HAnimSegment295 =  HAnimSegment();
HAnimSegment295.setUSE(CString("BvhUniversityWisconsionExample1_RightUpArm_to_RightLowArm"));
HAnimHumanoid46.setSegments(&HAnimSegment295);

HAnimSegment& HAnimSegment296 =  HAnimSegment();
HAnimSegment296.setUSE(CString("BvhUniversityWisconsionExample1_RightLowArm_to_RightHand"));
HAnimHumanoid46.setSegments(&HAnimSegment296);

HAnimSegment& HAnimSegment297 =  HAnimSegment();
HAnimSegment297.setUSE(CString("BvhUniversityWisconsionExample1_humanoid_root_to_LeftUpLeg"));
HAnimHumanoid46.setSegments(&HAnimSegment297);

HAnimSegment& HAnimSegment298 =  HAnimSegment();
HAnimSegment298.setUSE(CString("BvhUniversityWisconsionExample1_LeftUpLeg_to_LeftLowLeg"));
HAnimHumanoid46.setSegments(&HAnimSegment298);

HAnimSegment& HAnimSegment299 =  HAnimSegment();
HAnimSegment299.setUSE(CString("BvhUniversityWisconsionExample1_LeftLowLeg_to_LeftFoot"));
HAnimHumanoid46.setSegments(&HAnimSegment299);

HAnimSegment& HAnimSegment300 =  HAnimSegment();
HAnimSegment300.setUSE(CString("BvhUniversityWisconsionExample1_humanoid_root_to_RightUpLeg"));
HAnimHumanoid46.setSegments(&HAnimSegment300);

HAnimSegment& HAnimSegment301 =  HAnimSegment();
HAnimSegment301.setUSE(CString("BvhUniversityWisconsionExample1_RightUpLeg_to_RightLowLeg"));
HAnimHumanoid46.setSegments(&HAnimSegment301);

HAnimSegment& HAnimSegment302 =  HAnimSegment();
HAnimSegment302.setUSE(CString("BvhUniversityWisconsionExample1_RightLowLeg_to_RightFoot"));
HAnimHumanoid46.setSegments(&HAnimSegment302);

HAnimSite& HAnimSite303 =  HAnimSite();
HAnimSite303.setDEF(CString("BvhUniversityWisconsionExample1_humanoid_root_view"));
HAnimSite303.X3DNode::setName(CString("humanoid_root_view"));
Viewpoint& Viewpoint304 =  Viewpoint();
Viewpoint304.setDEF(CString("BvhUniversityWisconsionExample1_humanoid_root_viewpoint"));
Viewpoint304.setDescription(CString("BvhUniversityWisconsionExample1 front view towards HAnimHumanoid center"));
Viewpoint304.setPosition(new float[]{0,0,80});
HAnimSite303.addChild(&Viewpoint304);

HAnimHumanoid46.addViewpoints(&HAnimSite303);

HAnimSite& HAnimSite305 =  HAnimSite();
HAnimSite305.setUSE(CString("BvhUniversityWisconsionExample1_skull_tip"));
HAnimHumanoid46.setSites(&HAnimSite305);

HAnimSite& HAnimSite306 =  HAnimSite();
HAnimSite306.setUSE(CString("BvhUniversityWisconsionExample1_LeftLowArm_to_LeftHand_tip"));
HAnimHumanoid46.setSites(&HAnimSite306);

HAnimSite& HAnimSite307 =  HAnimSite();
HAnimSite307.setUSE(CString("BvhUniversityWisconsionExample1_RightLowArm_to_RightHand_tip"));
HAnimHumanoid46.setSites(&HAnimSite307);

HAnimSite& HAnimSite308 =  HAnimSite();
HAnimSite308.setUSE(CString("BvhUniversityWisconsionExample1_LeftLowLeg_to_LeftFoot_tip"));
HAnimHumanoid46.setSites(&HAnimSite308);

HAnimSite& HAnimSite309 =  HAnimSite();
HAnimSite309.setUSE(CString("BvhUniversityWisconsionExample1_RightLowLeg_to_RightFoot_tip"));
HAnimHumanoid46.setSites(&HAnimSite309);

HAnimSite& HAnimSite310 =  HAnimSite();
HAnimSite310.setUSE(CString("BvhUniversityWisconsionExample1_humanoid_root_view"));
HAnimHumanoid46.setSites(&HAnimSite310);

Scene14.addChild(&HAnimHumanoid46);

Group& Group311 =  Group();
Group311.setDEF(CString("BvhUniversityWisconsionExample1_MotionGroup"));
TimeSensor& TimeSensor312 =  TimeSensor();
TimeSensor312.setDEF(CString("RealTimer"));
TimeSensor312.setCycleInterval(0.067);
TimeSensor312.setLoop(True);
Group311.addChild(&TimeSensor312);

TimeSensor& TimeSensor313 =  TimeSensor();
TimeSensor313.setDEF(CString("StepTimer"));
TimeSensor313.setEnabled(False);
TimeSensor313.setCycleInterval(2);
TimeSensor313.setLoop(True);
Group311.addChild(&TimeSensor313);

ScalarInterpolator& ScalarInterpolator314 =  ScalarInterpolator();
ScalarInterpolator314.setDEF(CString("FrameStepper"));
ScalarInterpolator314.setKey(new float[]{0,1,1}, 3);
ScalarInterpolator314.setKeyValue(new float[]{0,0,1}, 3);
Group311.addChild(&ScalarInterpolator314);

PositionInterpolator& PositionInterpolator315 =  PositionInterpolator();
PositionInterpolator315.setDEF(CString("Interpolator0_humanoid_root"));
PositionInterpolator315.setKey(new float[]{0,1}, 2);
PositionInterpolator315.setKeyValue(new float[]{0.803,3.501,8.836,0.781,3.51,8.647}, 6);
Group311.addChild(&PositionInterpolator315);

OrientationInterpolator& OrientationInterpolator316 =  OrientationInterpolator();
OrientationInterpolator316.setDEF(CString("Interpolator1_humanoid_root"));
OrientationInterpolator316.setKey(new float[]{0,1}, 2);
OrientationInterpolator316.setKeyValue(new float[]{-0.0118,-0.9911,-0.1325,2.8785,-0.0199,-0.993,-0.1163,2.9232}, 8);
Group311.addChild(&OrientationInterpolator316);

OrientationInterpolator& OrientationInterpolator317 =  OrientationInterpolator();
OrientationInterpolator317.setDEF(CString("Interpolator2_vl5"));
OrientationInterpolator317.setKey(new float[]{0,1}, 2);
OrientationInterpolator317.setKeyValue(new float[]{0.9093,-0.4082,0.0806,0.8073,0.9336,-0.3501,0.0768,0.824}, 8);
Group311.addChild(&OrientationInterpolator317);

OrientationInterpolator& OrientationInterpolator318 =  OrientationInterpolator();
OrientationInterpolator318.setDEF(CString("Interpolator3_Neck"));
OrientationInterpolator318.setKey(new float[]{0,1}, 2);
OrientationInterpolator318.setKeyValue(new float[]{0.9834,0.0677,0.1685,0.7761,0.9841,0.066,0.1649,0.7723}, 8);
Group311.addChild(&OrientationInterpolator318);

OrientationInterpolator& OrientationInterpolator319 =  OrientationInterpolator();
OrientationInterpolator319.setDEF(CString("Interpolator4_skullbase"));
OrientationInterpolator319.setKey(new float[]{0,1}, 2);
OrientationInterpolator319.setKeyValue(new float[]{-0.9778,0.1629,-0.1317,0.736,-0.9794,0.1474,-0.1381,0.7342}, 8);
Group311.addChild(&OrientationInterpolator319);

OrientationInterpolator& OrientationInterpolator320 =  OrientationInterpolator();
OrientationInterpolator320.setDEF(CString("Interpolator5_LeftCollar"));
OrientationInterpolator320.setKey(new float[]{0,1}, 2);
OrientationInterpolator320.setKeyValue(new float[]{-0.0626,0.7102,0.7012,0.2502,-0.0355,0.2109,0.9769,0.3411}, 8);
Group311.addChild(&OrientationInterpolator320);

OrientationInterpolator& OrientationInterpolator321 =  OrientationInterpolator();
OrientationInterpolator321.setDEF(CString("Interpolator6_LeftUpArm"));
OrientationInterpolator321.setKey(new float[]{0,1}, 2);
OrientationInterpolator321.setKeyValue(new float[]{-0.1561,-0.2157,0.9639,1.7536,0.0022,-0.1597,0.9872,1.6521}, 8);
Group311.addChild(&OrientationInterpolator321);

OrientationInterpolator& OrientationInterpolator322 =  OrientationInterpolator();
OrientationInterpolator322.setDEF(CString("Interpolator7_LeftLowArm"));
OrientationInterpolator322.setKey(new float[]{0,1}, 2);
OrientationInterpolator322.setKeyValue(new float[]{-0.9933,-0.0526,-0.103,1.6066,-0.9965,0.0822,0.0138,1.6744}, 8);
Group311.addChild(&OrientationInterpolator322);

OrientationInterpolator& OrientationInterpolator323 =  OrientationInterpolator();
OrientationInterpolator323.setDEF(CString("Interpolator8_LeftHand"));
OrientationInterpolator323.setKey(new float[]{0,1}, 2);
OrientationInterpolator323.setKeyValue(new float[]{0.0434,0.0003,0.9991,0.0121,0.4673,0.0029,0.8841,0.0138}, 8);
Group311.addChild(&OrientationInterpolator323);

OrientationInterpolator& OrientationInterpolator324 =  OrientationInterpolator();
OrientationInterpolator324.setDEF(CString("Interpolator9_RightCollar"));
OrientationInterpolator324.setKey(new float[]{0,1}, 2);
OrientationInterpolator324.setKeyValue(new float[]{-0.0734,-0.5964,-0.7993,0.3057,-0.07,-0.9291,-0.3633,0.4091}, 8);
Group311.addChild(&OrientationInterpolator324);

OrientationInterpolator& OrientationInterpolator325 =  OrientationInterpolator();
OrientationInterpolator325.setDEF(CString("Interpolator10_RightUpArm"));
OrientationInterpolator325.setKey(new float[]{0,1}, 2);
OrientationInterpolator325.setKeyValue(new float[]{-0.6801,-0.6074,-0.4106,2.0536,-0.765,-0.5303,-0.3654,1.9107}, 8);
Group311.addChild(&OrientationInterpolator325);

OrientationInterpolator& OrientationInterpolator326 =  OrientationInterpolator();
OrientationInterpolator326.setDEF(CString("Interpolator11_RightLowArm"));
OrientationInterpolator326.setKey(new float[]{0,1}, 2);
OrientationInterpolator326.setKeyValue(new float[]{-0.9378,0.2739,0.2135,1.4058,-0.9433,0.2577,0.2091,1.3563}, 8);
Group311.addChild(&OrientationInterpolator326);

OrientationInterpolator& OrientationInterpolator327 =  OrientationInterpolator();
OrientationInterpolator327.setDEF(CString("Interpolator12_RightHand"));
OrientationInterpolator327.setKey(new float[]{0,1}, 2);
OrientationInterpolator327.setKeyValue(new float[]{0.4025,0.0061,-0.9154,0.0299,0.5037,0.0087,-0.8638,0.0329}, 8);
Group311.addChild(&OrientationInterpolator327);

OrientationInterpolator& OrientationInterpolator328 =  OrientationInterpolator();
OrientationInterpolator328.setDEF(CString("Interpolator13_LeftUpLeg"));
OrientationInterpolator328.setKey(new float[]{0,1}, 2);
OrientationInterpolator328.setKeyValue(new float[]{0.8595,-0.1039,0.5004,0.4748,0.7784,-0.0864,0.6217,0.3536}, 8);
Group311.addChild(&OrientationInterpolator328);

OrientationInterpolator& OrientationInterpolator329 =  OrientationInterpolator();
OrientationInterpolator329.setDEF(CString("Interpolator14_LeftLowLeg"));
OrientationInterpolator329.setKey(new float[]{0,1}, 2);
OrientationInterpolator329.setKeyValue(new float[]{0.9184,0.2378,0.3162,0.9291,0.9762,0.1432,0.1627,1.0525}, 8);
Group311.addChild(&OrientationInterpolator329);

OrientationInterpolator& OrientationInterpolator330 =  OrientationInterpolator();
OrientationInterpolator330.setDEF(CString("Interpolator15_LeftFoot"));
OrientationInterpolator330.setKey(new float[]{0,1}, 2);
OrientationInterpolator330.setKeyValue(new float[]{-1,0,0,0.0199,1,0,0,0.0286}, 8);
Group311.addChild(&OrientationInterpolator330);

OrientationInterpolator& OrientationInterpolator331 =  OrientationInterpolator();
OrientationInterpolator331.setDEF(CString("Interpolator16_RightUpLeg"));
OrientationInterpolator331.setKey(new float[]{0,1}, 2);
OrientationInterpolator331.setKeyValue(new float[]{-0.5548,-0.0795,-0.8282,0.3423,-0.5234,-0.0778,-0.8485,0.3468}, 8);
Group311.addChild(&OrientationInterpolator331);

OrientationInterpolator& OrientationInterpolator332 =  OrientationInterpolator();
OrientationInterpolator332.setDEF(CString("Interpolator17_RightLowLeg"));
OrientationInterpolator332.setKey(new float[]{0,1}, 2);
OrientationInterpolator332.setKeyValue(new float[]{0.9694,-0.234,0.0739,0.9755,0.9797,-0.1864,0.0732,0.9707}, 8);
Group311.addChild(&OrientationInterpolator332);

OrientationInterpolator& OrientationInterpolator333 =  OrientationInterpolator();
OrientationInterpolator333.setDEF(CString("Interpolator18_RightFoot"));
OrientationInterpolator333.setKey(new float[]{0,1}, 2);
OrientationInterpolator333.setKeyValue(new float[]{-1,0,0,0.418,-1,0,0,0.4526}, 8);
Group311.addChild(&OrientationInterpolator333);

Scene14.addChild(&Group311);

ROUTE& ROUTE334 =  ROUTE();
ROUTE334.setFromNode(CString("StepTimer"));
ROUTE334.setFromField(CString("fraction_changed"));
ROUTE334.setToNode(CString("FrameStepper"));
ROUTE334.setToField(CString("set_fraction"));
Scene14.addChild(&ROUTE334);

ROUTE& ROUTE335 =  ROUTE();
ROUTE335.setFromNode(CString("RealTimer"));
ROUTE335.setFromField(CString("fraction_changed"));
ROUTE335.setToNode(CString("Interpolator0_humanoid_root"));
ROUTE335.setToField(CString("set_fraction"));
Scene14.addChild(&ROUTE335);

ROUTE& ROUTE336 =  ROUTE();
ROUTE336.setFromNode(CString("FrameStepper"));
ROUTE336.setFromField(CString("value_changed"));
ROUTE336.setToNode(CString("Interpolator0_humanoid_root"));
ROUTE336.setToField(CString("set_fraction"));
Scene14.addChild(&ROUTE336);

ROUTE& ROUTE337 =  ROUTE();
ROUTE337.setFromNode(CString("Interpolator0_humanoid_root"));
ROUTE337.setFromField(CString("value_changed"));
ROUTE337.setToNode(CString("BvhUniversityWisconsionExample1_humanoid_root"));
ROUTE337.setToField(CString("set_translation"));
Scene14.addChild(&ROUTE337);

ROUTE& ROUTE338 =  ROUTE();
ROUTE338.setFromNode(CString("RealTimer"));
ROUTE338.setFromField(CString("fraction_changed"));
ROUTE338.setToNode(CString("Interpolator1_humanoid_root"));
ROUTE338.setToField(CString("set_fraction"));
Scene14.addChild(&ROUTE338);

ROUTE& ROUTE339 =  ROUTE();
ROUTE339.setFromNode(CString("FrameStepper"));
ROUTE339.setFromField(CString("value_changed"));
ROUTE339.setToNode(CString("Interpolator1_humanoid_root"));
ROUTE339.setToField(CString("set_fraction"));
Scene14.addChild(&ROUTE339);

ROUTE& ROUTE340 =  ROUTE();
ROUTE340.setFromNode(CString("Interpolator1_humanoid_root"));
ROUTE340.setFromField(CString("value_changed"));
ROUTE340.setToNode(CString("BvhUniversityWisconsionExample1_humanoid_root"));
ROUTE340.setToField(CString("set_rotation"));
Scene14.addChild(&ROUTE340);

ROUTE& ROUTE341 =  ROUTE();
ROUTE341.setFromNode(CString("RealTimer"));
ROUTE341.setFromField(CString("fraction_changed"));
ROUTE341.setToNode(CString("Interpolator2_vl5"));
ROUTE341.setToField(CString("set_fraction"));
Scene14.addChild(&ROUTE341);

ROUTE& ROUTE342 =  ROUTE();
ROUTE342.setFromNode(CString("FrameStepper"));
ROUTE342.setFromField(CString("value_changed"));
ROUTE342.setToNode(CString("Interpolator2_vl5"));
ROUTE342.setToField(CString("set_fraction"));
Scene14.addChild(&ROUTE342);

ROUTE& ROUTE343 =  ROUTE();
ROUTE343.setFromNode(CString("Interpolator2_vl5"));
ROUTE343.setFromField(CString("value_changed"));
ROUTE343.setToNode(CString("BvhUniversityWisconsionExample1_vl5"));
ROUTE343.setToField(CString("set_rotation"));
Scene14.addChild(&ROUTE343);

ROUTE& ROUTE344 =  ROUTE();
ROUTE344.setFromNode(CString("RealTimer"));
ROUTE344.setFromField(CString("fraction_changed"));
ROUTE344.setToNode(CString("Interpolator3_Neck"));
ROUTE344.setToField(CString("set_fraction"));
Scene14.addChild(&ROUTE344);

ROUTE& ROUTE345 =  ROUTE();
ROUTE345.setFromNode(CString("FrameStepper"));
ROUTE345.setFromField(CString("value_changed"));
ROUTE345.setToNode(CString("Interpolator3_Neck"));
ROUTE345.setToField(CString("set_fraction"));
Scene14.addChild(&ROUTE345);

ROUTE& ROUTE346 =  ROUTE();
ROUTE346.setFromNode(CString("Interpolator3_Neck"));
ROUTE346.setFromField(CString("value_changed"));
ROUTE346.setToNode(CString("BvhUniversityWisconsionExample1_Neck"));
ROUTE346.setToField(CString("set_rotation"));
Scene14.addChild(&ROUTE346);

ROUTE& ROUTE347 =  ROUTE();
ROUTE347.setFromNode(CString("RealTimer"));
ROUTE347.setFromField(CString("fraction_changed"));
ROUTE347.setToNode(CString("Interpolator4_skullbase"));
ROUTE347.setToField(CString("set_fraction"));
Scene14.addChild(&ROUTE347);

ROUTE& ROUTE348 =  ROUTE();
ROUTE348.setFromNode(CString("FrameStepper"));
ROUTE348.setFromField(CString("value_changed"));
ROUTE348.setToNode(CString("Interpolator4_skullbase"));
ROUTE348.setToField(CString("set_fraction"));
Scene14.addChild(&ROUTE348);

ROUTE& ROUTE349 =  ROUTE();
ROUTE349.setFromNode(CString("Interpolator4_skullbase"));
ROUTE349.setFromField(CString("value_changed"));
ROUTE349.setToNode(CString("BvhUniversityWisconsionExample1_skullbase"));
ROUTE349.setToField(CString("set_rotation"));
Scene14.addChild(&ROUTE349);

ROUTE& ROUTE350 =  ROUTE();
ROUTE350.setFromNode(CString("RealTimer"));
ROUTE350.setFromField(CString("fraction_changed"));
ROUTE350.setToNode(CString("Interpolator5_LeftCollar"));
ROUTE350.setToField(CString("set_fraction"));
Scene14.addChild(&ROUTE350);

ROUTE& ROUTE351 =  ROUTE();
ROUTE351.setFromNode(CString("FrameStepper"));
ROUTE351.setFromField(CString("value_changed"));
ROUTE351.setToNode(CString("Interpolator5_LeftCollar"));
ROUTE351.setToField(CString("set_fraction"));
Scene14.addChild(&ROUTE351);

ROUTE& ROUTE352 =  ROUTE();
ROUTE352.setFromNode(CString("Interpolator5_LeftCollar"));
ROUTE352.setFromField(CString("value_changed"));
ROUTE352.setToNode(CString("BvhUniversityWisconsionExample1_LeftCollar"));
ROUTE352.setToField(CString("set_rotation"));
Scene14.addChild(&ROUTE352);

ROUTE& ROUTE353 =  ROUTE();
ROUTE353.setFromNode(CString("RealTimer"));
ROUTE353.setFromField(CString("fraction_changed"));
ROUTE353.setToNode(CString("Interpolator6_LeftUpArm"));
ROUTE353.setToField(CString("set_fraction"));
Scene14.addChild(&ROUTE353);

ROUTE& ROUTE354 =  ROUTE();
ROUTE354.setFromNode(CString("FrameStepper"));
ROUTE354.setFromField(CString("value_changed"));
ROUTE354.setToNode(CString("Interpolator6_LeftUpArm"));
ROUTE354.setToField(CString("set_fraction"));
Scene14.addChild(&ROUTE354);

ROUTE& ROUTE355 =  ROUTE();
ROUTE355.setFromNode(CString("Interpolator6_LeftUpArm"));
ROUTE355.setFromField(CString("value_changed"));
ROUTE355.setToNode(CString("BvhUniversityWisconsionExample1_LeftUpArm"));
ROUTE355.setToField(CString("set_rotation"));
Scene14.addChild(&ROUTE355);

ROUTE& ROUTE356 =  ROUTE();
ROUTE356.setFromNode(CString("RealTimer"));
ROUTE356.setFromField(CString("fraction_changed"));
ROUTE356.setToNode(CString("Interpolator7_LeftLowArm"));
ROUTE356.setToField(CString("set_fraction"));
Scene14.addChild(&ROUTE356);

ROUTE& ROUTE357 =  ROUTE();
ROUTE357.setFromNode(CString("FrameStepper"));
ROUTE357.setFromField(CString("value_changed"));
ROUTE357.setToNode(CString("Interpolator7_LeftLowArm"));
ROUTE357.setToField(CString("set_fraction"));
Scene14.addChild(&ROUTE357);

ROUTE& ROUTE358 =  ROUTE();
ROUTE358.setFromNode(CString("Interpolator7_LeftLowArm"));
ROUTE358.setFromField(CString("value_changed"));
ROUTE358.setToNode(CString("BvhUniversityWisconsionExample1_LeftLowArm"));
ROUTE358.setToField(CString("set_rotation"));
Scene14.addChild(&ROUTE358);

ROUTE& ROUTE359 =  ROUTE();
ROUTE359.setFromNode(CString("RealTimer"));
ROUTE359.setFromField(CString("fraction_changed"));
ROUTE359.setToNode(CString("Interpolator8_LeftHand"));
ROUTE359.setToField(CString("set_fraction"));
Scene14.addChild(&ROUTE359);

ROUTE& ROUTE360 =  ROUTE();
ROUTE360.setFromNode(CString("FrameStepper"));
ROUTE360.setFromField(CString("value_changed"));
ROUTE360.setToNode(CString("Interpolator8_LeftHand"));
ROUTE360.setToField(CString("set_fraction"));
Scene14.addChild(&ROUTE360);

ROUTE& ROUTE361 =  ROUTE();
ROUTE361.setFromNode(CString("Interpolator8_LeftHand"));
ROUTE361.setFromField(CString("value_changed"));
ROUTE361.setToNode(CString("BvhUniversityWisconsionExample1_LeftHand"));
ROUTE361.setToField(CString("set_rotation"));
Scene14.addChild(&ROUTE361);

ROUTE& ROUTE362 =  ROUTE();
ROUTE362.setFromNode(CString("RealTimer"));
ROUTE362.setFromField(CString("fraction_changed"));
ROUTE362.setToNode(CString("Interpolator9_RightCollar"));
ROUTE362.setToField(CString("set_fraction"));
Scene14.addChild(&ROUTE362);

ROUTE& ROUTE363 =  ROUTE();
ROUTE363.setFromNode(CString("FrameStepper"));
ROUTE363.setFromField(CString("value_changed"));
ROUTE363.setToNode(CString("Interpolator9_RightCollar"));
ROUTE363.setToField(CString("set_fraction"));
Scene14.addChild(&ROUTE363);

ROUTE& ROUTE364 =  ROUTE();
ROUTE364.setFromNode(CString("Interpolator9_RightCollar"));
ROUTE364.setFromField(CString("value_changed"));
ROUTE364.setToNode(CString("BvhUniversityWisconsionExample1_RightCollar"));
ROUTE364.setToField(CString("set_rotation"));
Scene14.addChild(&ROUTE364);

ROUTE& ROUTE365 =  ROUTE();
ROUTE365.setFromNode(CString("RealTimer"));
ROUTE365.setFromField(CString("fraction_changed"));
ROUTE365.setToNode(CString("Interpolator10_RightUpArm"));
ROUTE365.setToField(CString("set_fraction"));
Scene14.addChild(&ROUTE365);

ROUTE& ROUTE366 =  ROUTE();
ROUTE366.setFromNode(CString("FrameStepper"));
ROUTE366.setFromField(CString("value_changed"));
ROUTE366.setToNode(CString("Interpolator10_RightUpArm"));
ROUTE366.setToField(CString("set_fraction"));
Scene14.addChild(&ROUTE366);

ROUTE& ROUTE367 =  ROUTE();
ROUTE367.setFromNode(CString("Interpolator10_RightUpArm"));
ROUTE367.setFromField(CString("value_changed"));
ROUTE367.setToNode(CString("BvhUniversityWisconsionExample1_RightUpArm"));
ROUTE367.setToField(CString("set_rotation"));
Scene14.addChild(&ROUTE367);

ROUTE& ROUTE368 =  ROUTE();
ROUTE368.setFromNode(CString("RealTimer"));
ROUTE368.setFromField(CString("fraction_changed"));
ROUTE368.setToNode(CString("Interpolator11_RightLowArm"));
ROUTE368.setToField(CString("set_fraction"));
Scene14.addChild(&ROUTE368);

ROUTE& ROUTE369 =  ROUTE();
ROUTE369.setFromNode(CString("FrameStepper"));
ROUTE369.setFromField(CString("value_changed"));
ROUTE369.setToNode(CString("Interpolator11_RightLowArm"));
ROUTE369.setToField(CString("set_fraction"));
Scene14.addChild(&ROUTE369);

ROUTE& ROUTE370 =  ROUTE();
ROUTE370.setFromNode(CString("Interpolator11_RightLowArm"));
ROUTE370.setFromField(CString("value_changed"));
ROUTE370.setToNode(CString("BvhUniversityWisconsionExample1_RightLowArm"));
ROUTE370.setToField(CString("set_rotation"));
Scene14.addChild(&ROUTE370);

ROUTE& ROUTE371 =  ROUTE();
ROUTE371.setFromNode(CString("RealTimer"));
ROUTE371.setFromField(CString("fraction_changed"));
ROUTE371.setToNode(CString("Interpolator12_RightHand"));
ROUTE371.setToField(CString("set_fraction"));
Scene14.addChild(&ROUTE371);

ROUTE& ROUTE372 =  ROUTE();
ROUTE372.setFromNode(CString("FrameStepper"));
ROUTE372.setFromField(CString("value_changed"));
ROUTE372.setToNode(CString("Interpolator12_RightHand"));
ROUTE372.setToField(CString("set_fraction"));
Scene14.addChild(&ROUTE372);

ROUTE& ROUTE373 =  ROUTE();
ROUTE373.setFromNode(CString("Interpolator12_RightHand"));
ROUTE373.setFromField(CString("value_changed"));
ROUTE373.setToNode(CString("BvhUniversityWisconsionExample1_RightHand"));
ROUTE373.setToField(CString("set_rotation"));
Scene14.addChild(&ROUTE373);

ROUTE& ROUTE374 =  ROUTE();
ROUTE374.setFromNode(CString("RealTimer"));
ROUTE374.setFromField(CString("fraction_changed"));
ROUTE374.setToNode(CString("Interpolator13_LeftUpLeg"));
ROUTE374.setToField(CString("set_fraction"));
Scene14.addChild(&ROUTE374);

ROUTE& ROUTE375 =  ROUTE();
ROUTE375.setFromNode(CString("FrameStepper"));
ROUTE375.setFromField(CString("value_changed"));
ROUTE375.setToNode(CString("Interpolator13_LeftUpLeg"));
ROUTE375.setToField(CString("set_fraction"));
Scene14.addChild(&ROUTE375);

ROUTE& ROUTE376 =  ROUTE();
ROUTE376.setFromNode(CString("Interpolator13_LeftUpLeg"));
ROUTE376.setFromField(CString("value_changed"));
ROUTE376.setToNode(CString("BvhUniversityWisconsionExample1_LeftUpLeg"));
ROUTE376.setToField(CString("set_rotation"));
Scene14.addChild(&ROUTE376);

ROUTE& ROUTE377 =  ROUTE();
ROUTE377.setFromNode(CString("RealTimer"));
ROUTE377.setFromField(CString("fraction_changed"));
ROUTE377.setToNode(CString("Interpolator14_LeftLowLeg"));
ROUTE377.setToField(CString("set_fraction"));
Scene14.addChild(&ROUTE377);

ROUTE& ROUTE378 =  ROUTE();
ROUTE378.setFromNode(CString("FrameStepper"));
ROUTE378.setFromField(CString("value_changed"));
ROUTE378.setToNode(CString("Interpolator14_LeftLowLeg"));
ROUTE378.setToField(CString("set_fraction"));
Scene14.addChild(&ROUTE378);

ROUTE& ROUTE379 =  ROUTE();
ROUTE379.setFromNode(CString("Interpolator14_LeftLowLeg"));
ROUTE379.setFromField(CString("value_changed"));
ROUTE379.setToNode(CString("BvhUniversityWisconsionExample1_LeftLowLeg"));
ROUTE379.setToField(CString("set_rotation"));
Scene14.addChild(&ROUTE379);

ROUTE& ROUTE380 =  ROUTE();
ROUTE380.setFromNode(CString("RealTimer"));
ROUTE380.setFromField(CString("fraction_changed"));
ROUTE380.setToNode(CString("Interpolator15_LeftFoot"));
ROUTE380.setToField(CString("set_fraction"));
Scene14.addChild(&ROUTE380);

ROUTE& ROUTE381 =  ROUTE();
ROUTE381.setFromNode(CString("FrameStepper"));
ROUTE381.setFromField(CString("value_changed"));
ROUTE381.setToNode(CString("Interpolator15_LeftFoot"));
ROUTE381.setToField(CString("set_fraction"));
Scene14.addChild(&ROUTE381);

ROUTE& ROUTE382 =  ROUTE();
ROUTE382.setFromNode(CString("Interpolator15_LeftFoot"));
ROUTE382.setFromField(CString("value_changed"));
ROUTE382.setToNode(CString("BvhUniversityWisconsionExample1_LeftFoot"));
ROUTE382.setToField(CString("set_rotation"));
Scene14.addChild(&ROUTE382);

ROUTE& ROUTE383 =  ROUTE();
ROUTE383.setFromNode(CString("RealTimer"));
ROUTE383.setFromField(CString("fraction_changed"));
ROUTE383.setToNode(CString("Interpolator16_RightUpLeg"));
ROUTE383.setToField(CString("set_fraction"));
Scene14.addChild(&ROUTE383);

ROUTE& ROUTE384 =  ROUTE();
ROUTE384.setFromNode(CString("FrameStepper"));
ROUTE384.setFromField(CString("value_changed"));
ROUTE384.setToNode(CString("Interpolator16_RightUpLeg"));
ROUTE384.setToField(CString("set_fraction"));
Scene14.addChild(&ROUTE384);

ROUTE& ROUTE385 =  ROUTE();
ROUTE385.setFromNode(CString("Interpolator16_RightUpLeg"));
ROUTE385.setFromField(CString("value_changed"));
ROUTE385.setToNode(CString("BvhUniversityWisconsionExample1_RightUpLeg"));
ROUTE385.setToField(CString("set_rotation"));
Scene14.addChild(&ROUTE385);

ROUTE& ROUTE386 =  ROUTE();
ROUTE386.setFromNode(CString("RealTimer"));
ROUTE386.setFromField(CString("fraction_changed"));
ROUTE386.setToNode(CString("Interpolator17_RightLowLeg"));
ROUTE386.setToField(CString("set_fraction"));
Scene14.addChild(&ROUTE386);

ROUTE& ROUTE387 =  ROUTE();
ROUTE387.setFromNode(CString("FrameStepper"));
ROUTE387.setFromField(CString("value_changed"));
ROUTE387.setToNode(CString("Interpolator17_RightLowLeg"));
ROUTE387.setToField(CString("set_fraction"));
Scene14.addChild(&ROUTE387);

ROUTE& ROUTE388 =  ROUTE();
ROUTE388.setFromNode(CString("Interpolator17_RightLowLeg"));
ROUTE388.setFromField(CString("value_changed"));
ROUTE388.setToNode(CString("BvhUniversityWisconsionExample1_RightLowLeg"));
ROUTE388.setToField(CString("set_rotation"));
Scene14.addChild(&ROUTE388);

ROUTE& ROUTE389 =  ROUTE();
ROUTE389.setFromNode(CString("RealTimer"));
ROUTE389.setFromField(CString("fraction_changed"));
ROUTE389.setToNode(CString("Interpolator18_RightFoot"));
ROUTE389.setToField(CString("set_fraction"));
Scene14.addChild(&ROUTE389);

ROUTE& ROUTE390 =  ROUTE();
ROUTE390.setFromNode(CString("FrameStepper"));
ROUTE390.setFromField(CString("value_changed"));
ROUTE390.setToNode(CString("Interpolator18_RightFoot"));
ROUTE390.setToField(CString("set_fraction"));
Scene14.addChild(&ROUTE390);

ROUTE& ROUTE391 =  ROUTE();
ROUTE391.setFromNode(CString("Interpolator18_RightFoot"));
ROUTE391.setFromField(CString("value_changed"));
ROUTE391.setToNode(CString("BvhUniversityWisconsionExample1_RightFoot"));
ROUTE391.setToField(CString("set_rotation"));
Scene14.addChild(&ROUTE391);

X3D0.setScene(&Scene14);

}
