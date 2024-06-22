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
meta3.setContent(CString("JoeKick.x3d"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("description"));
meta4.setContent(CString("This Joe model is a HAnim version 2 LOA-3 Humanoid with textured skin based on the original HAnim Specification and data from CAESAR models."));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("creator"));
meta5.setContent(CString("Joe D. Williams"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("created"));
meta6.setContent(CString("9 January 2004"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(CString("translated"));
meta7.setContent(CString("12 January 2017"));
head1.addMeta(&meta7);

meta& meta8 =  meta();
meta8.setName(CString("modified"));
meta8.setContent(CString("1 July 2023"));
head1.addMeta(&meta8);

meta& meta9 =  meta();
meta9.setName(CString("TODO"));
meta9.setContent(CString("Record information about skin coordinates (found in comment at end of scene) as a structured MetadataSet containing MetadataString nodes"));
head1.addMeta(&meta9);

meta& meta10 =  meta();
meta10.setName(CString("translator"));
meta10.setContent(CString("Roy Walmsley"));
head1.addMeta(&meta10);

meta& meta11 =  meta();
meta11.setName(CString("translator"));
meta11.setContent(CString("Don Brutzman"));
head1.addMeta(&meta11);

meta& meta12 =  meta();
meta12.setName(CString("translator"));
meta12.setContent(CString("John Carlson"));
head1.addMeta(&meta12);

meta& meta13 =  meta();
meta13.setName(CString("reference"));
meta13.setContent(CString("../Characters/JoeSkinTexcoordDisplacerKick.x3d"));
head1.addMeta(&meta13);

meta& meta14 =  meta();
meta14.setName(CString("identifier"));
meta14.setContent(CString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/JoeKick.x3d"));
head1.addMeta(&meta14);

meta& meta15 =  meta();
meta15.setName(CString("generator"));
meta15.setContent(CString("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"));
head1.addMeta(&meta15);

meta& meta16 =  meta();
meta16.setName(CString("generator"));
meta16.setContent(CString("BS studio translation from .x3dv by Joe using BS Contact"));
head1.addMeta(&meta16);

meta& meta17 =  meta();
meta17.setName(CString("license"));
meta17.setContent(CString("../license.html"));
head1.addMeta(&meta17);

X3D0.setHead(&head1);

Scene& Scene18 =  Scene();
WorldInfo& WorldInfo19 =  WorldInfo();
WorldInfo19.setInfo(new CString[]{CString("X3D Humanoid LOA3 skeleton"), CString("skin from hanim sites, surface features, and some added points"), CString("390 points")}, 3);
WorldInfo19.setTitle(CString("X3D HANIM LOA3 Skeleton, 390 point Skin, texcoords, Displacer, teTrans for Joe_ by Joe"));
Scene18.addChild(&WorldInfo19);

NavigationInfo& NavigationInfo20 =  NavigationInfo();
NavigationInfo20.setDEF(CString("Start_NavigationInfo"));
NavigationInfo20.setSpeed(2.5);
Scene18.addChild(&NavigationInfo20);

Background& Background21 =  Background();
Background21.setDEF(CString("blue_Background"));
Scene18.addChild(&Background21);

SpotLight& SpotLight22 =  SpotLight();
SpotLight22.setDEF(CString("light1"));
SpotLight22.setAmbientIntensity(0.7);
SpotLight22.setBeamWidth(1.5);
SpotLight22.setColor(new float[]{0.8,0.8,1});
SpotLight22.setCutOffAngle(0.6);
SpotLight22.setDirection(new float[]{0,0,0});
SpotLight22.setLocation(new float[]{0,3,3});
SpotLight22.setRadius(10);
Scene18.addChild(&SpotLight22);

PointLight& PointLight23 =  PointLight();
PointLight23.setDEF(CString("light2"));
PointLight23.setAmbientIntensity(0.7);
PointLight23.setColor(new float[]{0.8,0.8,1});
PointLight23.setLocation(new float[]{0,10,-7});
Scene18.addChild(&PointLight23);

//External from the Humanoid viewpoints
Viewpoint& Viewpoint24 =  Viewpoint();
Viewpoint24.setDEF(CString("Scene_InclinedView"));
Viewpoint24.setCenterOfRotation(new float[]{0,0.85,0});
Viewpoint24.setDescription(CString("Scene_Inclined View"));
Viewpoint24.setOrientation(new float[]{-0.113,0.993,0.0347,0.671});
Viewpoint24.setPosition(new float[]{1.62,1.05,3.06});
Scene18.addChild(&Viewpoint24);

Viewpoint& Viewpoint25 =  Viewpoint();
Viewpoint25.setDEF(CString("Scene_IFrontView"));
Viewpoint25.setCenterOfRotation(new float[]{0,0.8,0});
Viewpoint25.setDescription(CString("Scene_Front View"));
Viewpoint25.setPosition(new float[]{0,0.8,2.58});
Scene18.addChild(&Viewpoint25);

Viewpoint& Viewpoint26 =  Viewpoint();
Viewpoint26.setDEF(CString("Scene_ISideView"));
Viewpoint26.setCenterOfRotation(new float[]{0,0.8,0});
Viewpoint26.setDescription(CString("Scene_Side View"));
Viewpoint26.setOrientation(new float[]{0,1,0,1.5708});
Viewpoint26.setPosition(new float[]{2.6,0.8,0});
Scene18.addChild(&Viewpoint26);

Viewpoint& Viewpoint27 =  Viewpoint();
Viewpoint27.setDEF(CString("Scene_BackView"));
Viewpoint27.setCenterOfRotation(new float[]{0,1.5,0});
Viewpoint27.setDescription(CString("Scene_Back View"));
Viewpoint27.setOrientation(new float[]{0,1,0,3.14});
Viewpoint27.setPosition(new float[]{0,1.5,-3});
Scene18.addChild(&Viewpoint27);

Viewpoint& Viewpoint28 =  Viewpoint();
Viewpoint28.setDEF(CString("Scene_TopView"));
Viewpoint28.setCenterOfRotation(new float[]{0,1.5,0});
Viewpoint28.setDescription(CString("Scene_Top View"));
Viewpoint28.setOrientation(new float[]{1,0,0,-1.5708});
Viewpoint28.setPosition(new float[]{0,3.5,0});
Scene18.addChild(&Viewpoint28);

Group& Group29 =  Group();
Group29.setDEF(CString("Joe_Humanoid"));
HAnimHumanoid& HAnimHumanoid30 =  HAnimHumanoid();
HAnimHumanoid30.X3DNode::setName(CString("Kick"));
HAnimHumanoid30.setDEF(CString("Joe_Kick"));
HAnimHumanoid30.setLoa(4);
HAnimHumanoid30.setVersion(CString("2.0"));
MetadataSet& MetadataSet31 =  MetadataSet();
MetadataSet31.X3DNode::setName(CString("warnings"));
MetadataSet31.X3DNode::setReference(CString("HAnim"));
MetadataString& MetadataString32 =  MetadataString();
MetadataString32.X3DNode::setName(CString("SymmetricalLeftRight"));
MetadataString32.X3DNode::setReference(CString("correction options: ignore, warn, average, left, right, largest, smallest"));
MetadataString32.setValue(new CString[]{CString("ignore")}, 1);
MetadataSet31.setValue((X3DNode *)&MetadataString32);

HAnimHumanoid30.setMetadata(&MetadataSet31);

HAnimJoint& HAnimJoint33 =  HAnimJoint();
HAnimJoint33.X3DNode::setName(CString("humanoid_root"));
HAnimJoint33.setDEF(CString("Joe_humanoid_root"));
HAnimJoint33.setCenter(new float[]{0,0.875,0});
HAnimJoint33.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint33.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment34 =  HAnimSegment();
HAnimSegment34.X3DNode::setName(CString("sacrum"));
HAnimSegment34.setDEF(CString("Joe_sacrum"));
HAnimSite& HAnimSite35 =  HAnimSite();
HAnimSite35.X3DNode::setName(CString("RootFront_view"));
HAnimSite35.setDEF(CString("Joe_RootFront_view"));
Transform& Transform36 =  Transform();
Transform36.setDEF(CString("hanimcordsys"));
Transform36.setScale(new float[]{0.175,0.175,0.175});
Viewpoint& Viewpoint37 =  Viewpoint();
Viewpoint37.setDEF(CString("ViewBodyRootAxes"));
Viewpoint37.setDescription(CString("Joe_HAnim Root HAnimSite Coordinate Axes View"));
Transform36.addChild(&Viewpoint37);

Shape& Shape38 =  Shape();
Shape38.setDEF(CString("AxisLinesShape"));
//RGB lines showing XYZ axes
IndexedLineSet& IndexedLineSet39 =  IndexedLineSet();
IndexedLineSet39.setColorIndex(new int[]{0,1,2}, 3);
IndexedLineSet39.setColorPerVertex(False);
IndexedLineSet39.setCoordIndex(new int32_t[]{0,1,-1,0,2,-1,0,3,-1}, 9);
Coordinate& Coordinate40 =  Coordinate();
Coordinate40.setPoint(new float[]{0,0,0,1,0,0,0,1,0,0,0,1}, 12);
IndexedLineSet39.setCoord(&Coordinate40);

CColor& Color41 =  CColor();
Color41.setColor(new float[]{1,0,0,0,0.6,0,0,0,1}, 9);
IndexedLineSet39.setColor(&Color41);

Shape38.setGeometry(&IndexedLineSet39);

Transform36.addChild(&Shape38);

HAnimSite35.addChild(&Transform36);

HAnimSegment34.addChild(&HAnimSite35);

HAnimJoint33.addChildren(&HAnimSegment34);

HAnimJoint& HAnimJoint42 =  HAnimJoint();
HAnimJoint42.X3DNode::setName(CString("sacroiliac"));
HAnimJoint42.setDEF(CString("Joe_sacroiliac"));
HAnimJoint42.setCenter(new float[]{0,0.92,0});
HAnimJoint42.setSkinCoordIndex(new int32_t[]{17,19,20,21,22,23,26,27,73,82,89,91,93}, 13);
HAnimJoint42.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1,1,1,0.35,0.35,1}, 13);
HAnimJoint42.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint42.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint& HAnimJoint43 =  HAnimJoint();
HAnimJoint43.X3DNode::setName(CString("l_hip"));
HAnimJoint43.setDEF(CString("Joe_l_hip"));
HAnimJoint43.setCenter(new float[]{0.1,0.92,0});
HAnimJoint43.setSkinCoordIndex(new int32_t[]{89,90,94,95,96,97}, 6);
HAnimJoint43.setSkinCoordWeight(new float[]{0.65,1,1,1,1,1}, 6);
HAnimJoint43.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint43.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint& HAnimJoint44 =  HAnimJoint();
HAnimJoint44.X3DNode::setName(CString("l_knee"));
HAnimJoint44.setDEF(CString("Joe_l_knee"));
HAnimJoint44.setCenter(new float[]{0.115,0.466,0});
HAnimJoint44.setSkinCoordIndex(new int32_t[]{334,335,336,337,338,339,340,341}, 8);
HAnimJoint44.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1}, 8);
HAnimJoint44.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint44.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint& HAnimJoint45 =  HAnimJoint();
HAnimJoint45.X3DNode::setName(CString("l_talocrural"));
HAnimJoint45.setDEF(CString("Joe_l_talocrural"));
HAnimJoint45.setCenter(new float[]{0.115,0.069,0});
HAnimJoint45.setSkinCoordIndex(new int32_t[]{342,343,344,345}, 4);
HAnimJoint45.setSkinCoordWeight(new float[]{1,1,1,1}, 4);
HAnimJoint45.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint45.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint& HAnimJoint46 =  HAnimJoint();
HAnimJoint46.X3DNode::setName(CString("l_tarsometatarsal_2"));
HAnimJoint46.setDEF(CString("Joe_l_tarsometatarsal_2"));
HAnimJoint46.setCenter(new float[]{0.115,0.031,0.03});
HAnimJoint46.setSkinCoordIndex(new int32_t[]{346,347,348,71}, 4);
HAnimJoint46.setSkinCoordWeight(new float[]{1,1,1,1}, 4);
HAnimJoint46.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint46.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint& HAnimJoint47 =  HAnimJoint();
HAnimJoint47.X3DNode::setName(CString("l_metatarsophalangeal_2"));
HAnimJoint47.setDEF(CString("Joe_l_metatarsophalangeal_2"));
HAnimJoint47.setCenter(new float[]{0.115,0.037,0.09});
HAnimJoint47.setSkinCoordIndex(new int32_t[]{349,350,351,352}, 4);
HAnimJoint47.setSkinCoordWeight(new float[]{1,1,1,1}, 4);
HAnimJoint47.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint47.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint& HAnimJoint48 =  HAnimJoint();
HAnimJoint48.X3DNode::setName(CString("l_tarsal_distal_interphalangeal_2"));
HAnimJoint48.setDEF(CString("Joe_l_tarsal_distal_interphalangeal_2"));
HAnimJoint48.setCenter(new float[]{0.115,0.02,0.122});
HAnimJoint48.setSkinCoordIndex(new int32_t[]{353,354,355,356,357,358,359,360,361}, 9);
HAnimJoint48.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1,1}, 9);
HAnimJoint48.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint48.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint47.addChildren(&HAnimJoint48);

HAnimJoint46.addChildren(&HAnimJoint47);

HAnimJoint45.addChildren(&HAnimJoint46);

HAnimJoint44.addChildren(&HAnimJoint45);

HAnimJoint43.addChildren(&HAnimJoint44);

HAnimJoint42.addChildren(&HAnimJoint43);

HAnimJoint& HAnimJoint49 =  HAnimJoint();
HAnimJoint49.X3DNode::setName(CString("r_hip"));
HAnimJoint49.setDEF(CString("Joe_r_hip"));
HAnimJoint49.setCenter(new float[]{-0.1,0.92,0});
HAnimJoint49.setSkinCoordIndex(new int32_t[]{91,92,98,99,100,101,362,363}, 8);
HAnimJoint49.setSkinCoordWeight(new float[]{0.65,1,0.8,1,1,1,0.4,0.8}, 8);
HAnimJoint49.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint49.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint& HAnimJoint50 =  HAnimJoint();
HAnimJoint50.X3DNode::setName(CString("r_knee"));
HAnimJoint50.setDEF(CString("Joe_r_knee"));
HAnimJoint50.setCenter(new float[]{-0.05,0.466,0});
HAnimJoint50.setSkinCoordIndex(new int32_t[]{362,363,364,365,366,367,368,369,98}, 9);
HAnimJoint50.setSkinCoordWeight(new float[]{0.6,0.2,1,1,1,1,1,1,0.2}, 9);
HAnimJoint50.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint50.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint& HAnimJoint51 =  HAnimJoint();
HAnimJoint51.X3DNode::setName(CString("r_talocrural"));
HAnimJoint51.setDEF(CString("Joe_r_talocrural"));
HAnimJoint51.setCenter(new float[]{-0.115,0.069,0});
HAnimJoint51.setSkinCoordIndex(new int32_t[]{370,371,372,373}, 4);
HAnimJoint51.setSkinCoordWeight(new float[]{1,1,1,1}, 4);
HAnimJoint51.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint51.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint& HAnimJoint52 =  HAnimJoint();
HAnimJoint52.X3DNode::setName(CString("r_tarsometatarsal_2"));
HAnimJoint52.setDEF(CString("Joe_r_tarsometatarsal_2"));
HAnimJoint52.setCenter(new float[]{-0.1,0.015,-0.01});
HAnimJoint52.setSkinCoordIndex(new int32_t[]{374,375,376}, 3);
HAnimJoint52.setSkinCoordWeight(new float[]{1,1,1}, 3);
HAnimJoint52.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint52.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint& HAnimJoint53 =  HAnimJoint();
HAnimJoint53.X3DNode::setName(CString("r_metatarsophalangeal_2"));
HAnimJoint53.setDEF(CString("Joe_r_metatarsophalangeal_2"));
HAnimJoint53.setCenter(new float[]{-0.115,0.037,0.09});
HAnimJoint53.setSkinCoordIndex(new int32_t[]{377,378,379,380}, 4);
HAnimJoint53.setSkinCoordWeight(new float[]{1,1,1,1}, 4);
HAnimJoint53.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint53.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint& HAnimJoint54 =  HAnimJoint();
HAnimJoint54.X3DNode::setName(CString("r_tarsal_distal_interphalangeal_2"));
HAnimJoint54.setDEF(CString("Joe_r_tarsal_distal_interphalangeal_2"));
HAnimJoint54.setCenter(new float[]{-0.1,0.01,0.14});
HAnimJoint54.setSkinCoordIndex(new int32_t[]{381,382,383,384,385,386,387,388,389}, 9);
HAnimJoint54.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1,1}, 9);
HAnimJoint54.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint54.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint53.addChildren(&HAnimJoint54);

HAnimJoint52.addChildren(&HAnimJoint53);

HAnimJoint51.addChildren(&HAnimJoint52);

HAnimJoint50.addChildren(&HAnimJoint51);

HAnimJoint49.addChildren(&HAnimJoint50);

HAnimJoint42.addChildren(&HAnimJoint49);

HAnimJoint33.addChildren(&HAnimJoint42);

HAnimJoint& HAnimJoint55 =  HAnimJoint();
HAnimJoint55.X3DNode::setName(CString("vl5"));
HAnimJoint55.setDEF(CString("Joe_vl5"));
HAnimJoint55.setCenter(new float[]{0,1.045,-0.095});
HAnimJoint55.setSkinCoordIndex(new int32_t[]{28,76}, 2);
HAnimJoint55.setSkinCoordWeight(new float[]{1,1}, 2);
HAnimJoint55.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint55.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint& HAnimJoint56 =  HAnimJoint();
HAnimJoint56.X3DNode::setName(CString("vl4"));
HAnimJoint56.setDEF(CString("Joe_vl4"));
HAnimJoint56.setCenter(new float[]{0,1.068,-0.085});
HAnimJoint56.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint56.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint& HAnimJoint57 =  HAnimJoint();
HAnimJoint57.X3DNode::setName(CString("vl3"));
HAnimJoint57.setDEF(CString("Joe_vl3"));
HAnimJoint57.setCenter(new float[]{0,1.092,-0.0725});
HAnimJoint57.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint57.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint& HAnimJoint58 =  HAnimJoint();
HAnimJoint58.X3DNode::setName(CString("vl2"));
HAnimJoint58.setDEF(CString("Joe_vl2"));
HAnimJoint58.setCenter(new float[]{0,1.12,-0.065});
HAnimJoint58.setSkinCoordIndex(new int32_t[]{16,18,25,83,84,85,86,87,88}, 9);
HAnimJoint58.setSkinCoordWeight(new float[]{1,1,1,1,1,1,0.7,1,0.8}, 9);
HAnimJoint58.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint58.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint& HAnimJoint59 =  HAnimJoint();
HAnimJoint59.X3DNode::setName(CString("vl1"));
HAnimJoint59.setDEF(CString("Joe_vl1"));
HAnimJoint59.setCenter(new float[]{0,1.1459,-0.0625});
HAnimJoint59.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint59.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint& HAnimJoint60 =  HAnimJoint();
HAnimJoint60.X3DNode::setName(CString("vt12"));
HAnimJoint60.setDEF(CString("Joe_vt12"));
HAnimJoint60.setCenter(new float[]{0,1.179,-0.068});
HAnimJoint60.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint60.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint& HAnimJoint61 =  HAnimJoint();
HAnimJoint61.X3DNode::setName(CString("vt11"));
HAnimJoint61.setDEF(CString("Joe_vt11"));
HAnimJoint61.setCenter(new float[]{0,1.2679,-0.081});
HAnimJoint61.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint61.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint& HAnimJoint62 =  HAnimJoint();
HAnimJoint62.X3DNode::setName(CString("vt10"));
HAnimJoint62.setDEF(CString("Joe_vt10"));
HAnimJoint62.setCenter(new float[]{0,1.242,-0.09});
HAnimJoint62.setSkinCoordIndex(new int32_t[]{15}, 1);
HAnimJoint62.setSkinCoordWeight(new float[]{1}, 1);
HAnimJoint62.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint62.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint& HAnimJoint63 =  HAnimJoint();
HAnimJoint63.X3DNode::setName(CString("vt9"));
HAnimJoint63.setDEF(CString("Joe_vt9"));
HAnimJoint63.setCenter(new float[]{0,1.268,-0.1});
HAnimJoint63.setSkinCoordIndex(new int32_t[]{13,14}, 2);
HAnimJoint63.setSkinCoordWeight(new float[]{1,1}, 2);
HAnimJoint63.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint63.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint& HAnimJoint64 =  HAnimJoint();
HAnimJoint64.X3DNode::setName(CString("vt8"));
HAnimJoint64.setDEF(CString("Joe_vt8"));
HAnimJoint64.setCenter(new float[]{0,1.294,-0.11});
HAnimJoint64.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint64.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint& HAnimJoint65 =  HAnimJoint();
HAnimJoint65.X3DNode::setName(CString("vt7"));
HAnimJoint65.setDEF(CString("Joe_vt7"));
HAnimJoint65.setCenter(new float[]{0,1.323,-0.1155});
HAnimJoint65.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint65.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint& HAnimJoint66 =  HAnimJoint();
HAnimJoint66.X3DNode::setName(CString("vt6"));
HAnimJoint66.setDEF(CString("Joe_vt6"));
HAnimJoint66.setCenter(new float[]{0,1.352,-0.12});
HAnimJoint66.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint66.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint& HAnimJoint67 =  HAnimJoint();
HAnimJoint67.X3DNode::setName(CString("vt5"));
HAnimJoint67.setDEF(CString("Joe_vt5"));
HAnimJoint67.setCenter(new float[]{0,1.381,-0.1235});
HAnimJoint67.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint67.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint& HAnimJoint68 =  HAnimJoint();
HAnimJoint68.X3DNode::setName(CString("vt4"));
HAnimJoint68.setDEF(CString("Joe_vt4"));
HAnimJoint68.setCenter(new float[]{0,1.41,-0.1235});
HAnimJoint68.setSkinCoordIndex(new int32_t[]{81}, 1);
HAnimJoint68.setSkinCoordWeight(new float[]{1}, 1);
HAnimJoint68.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint68.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint& HAnimJoint69 =  HAnimJoint();
HAnimJoint69.X3DNode::setName(CString("vt3"));
HAnimJoint69.setDEF(CString("Joe_vt3"));
HAnimJoint69.setCenter(new float[]{0,1.438,-0.12});
HAnimJoint69.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint69.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint& HAnimJoint70 =  HAnimJoint();
HAnimJoint70.X3DNode::setName(CString("vt2"));
HAnimJoint70.setDEF(CString("Joe_vt2"));
HAnimJoint70.setCenter(new float[]{0,1.468,-0.105});
HAnimJoint70.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint70.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint& HAnimJoint71 =  HAnimJoint();
HAnimJoint71.X3DNode::setName(CString("vt1"));
HAnimJoint71.setDEF(CString("Joe_vt1"));
HAnimJoint71.setCenter(new float[]{0,1.497,-0.09});
HAnimJoint71.setSkinCoordIndex(new int32_t[]{11,24}, 2);
HAnimJoint71.setSkinCoordWeight(new float[]{1,1}, 2);
HAnimJoint71.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint71.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint& HAnimJoint72 =  HAnimJoint();
HAnimJoint72.X3DNode::setName(CString("vc7"));
HAnimJoint72.setDEF(CString("Joe_vc7"));
HAnimJoint72.setCenter(new float[]{0,1.525,-0.072});
HAnimJoint72.setSkinCoordIndex(new int32_t[]{74,75}, 2);
HAnimJoint72.setSkinCoordWeight(new float[]{1,1}, 2);
HAnimJoint72.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint72.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint& HAnimJoint73 =  HAnimJoint();
HAnimJoint73.X3DNode::setName(CString("vc6"));
HAnimJoint73.setDEF(CString("Joe_vc6"));
HAnimJoint73.setCenter(new float[]{0,1.54,-0.05});
HAnimJoint73.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint73.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint& HAnimJoint74 =  HAnimJoint();
HAnimJoint74.X3DNode::setName(CString("vc5"));
HAnimJoint74.setDEF(CString("Joe_vc5"));
HAnimJoint74.setCenter(new float[]{0,1.552,-0.035});
HAnimJoint74.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint74.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint& HAnimJoint75 =  HAnimJoint();
HAnimJoint75.X3DNode::setName(CString("vc4"));
HAnimJoint75.setDEF(CString("Joe_vc4"));
HAnimJoint75.setCenter(new float[]{0,1.5675,-0.0256});
HAnimJoint75.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint75.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint& HAnimJoint76 =  HAnimJoint();
HAnimJoint76.X3DNode::setName(CString("vc3"));
HAnimJoint76.setDEF(CString("Joe_vc3"));
HAnimJoint76.setCenter(new float[]{0,1.58225,-0.0185});
HAnimJoint76.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint76.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint& HAnimJoint77 =  HAnimJoint();
HAnimJoint77.X3DNode::setName(CString("vc2"));
HAnimJoint77.setDEF(CString("Joe_vc2"));
HAnimJoint77.setCenter(new float[]{0,1.595,-0.0175});
HAnimJoint77.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint77.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint& HAnimJoint78 =  HAnimJoint();
HAnimJoint78.X3DNode::setName(CString("vc1"));
HAnimJoint78.setDEF(CString("Joe_vc1"));
HAnimJoint78.setCenter(new float[]{0,1.61,-0.015});
HAnimJoint78.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint78.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint& HAnimJoint79 =  HAnimJoint();
HAnimJoint79.X3DNode::setName(CString("skullbase"));
HAnimJoint79.setDEF(CString("Joe_skullbase"));
HAnimJoint79.setCenter(new float[]{0,1.63,-0.01});
HAnimJoint79.setSkinCoordIndex(new int32_t[]{0,1,2,3,4,5,6,7,8,9}, 10);
HAnimJoint79.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1,1,1}, 10);
HAnimJoint79.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint79.setLlimit(new float[]{0,0,0}, 3);
HAnimDisplacer& HAnimDisplacer80 =  HAnimDisplacer();
HAnimDisplacer80.X3DNode::setName(CString("skull_tip_raiser_action"));
HAnimDisplacer80.setDEF(CString("Joe_skull_tip_raiser_action"));
HAnimDisplacer80.setCoordIndex(new int32_t[]{0,1,2,3,4,5,6,7,8,9}, 10);
HAnimDisplacer80.setDisplacements(new float[]{0,0.15,0,0,0,0.15,-0.1,0,0.15,0.1,0,0.05,0,-0.02,0.05,-0.15,0,0,-0.05,0,0,0.15,0,0,0.05,0,0,0,0,-0.15}, 30);
HAnimJoint79.setDisplacers(HAnimDisplacer80);

HAnimJoint& HAnimJoint81 =  HAnimJoint();
HAnimJoint81.X3DNode::setName(CString("l_eyelid_joint"));
HAnimJoint81.setDEF(CString("Joe_l_eyelid_joint"));
HAnimJoint81.setCenter(new float[]{0.034,1.659,0.06});
HAnimJoint81.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint81.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint79.addChildren(&HAnimJoint81);

HAnimJoint& HAnimJoint82 =  HAnimJoint();
HAnimJoint82.X3DNode::setName(CString("l_eyeball_joint"));
HAnimJoint82.setDEF(CString("Joe_l_eyeball_joint"));
HAnimJoint82.setCenter(new float[]{0.034,1.659,0.06});
HAnimJoint82.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint82.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint79.addChildren(&HAnimJoint82);

HAnimJoint& HAnimJoint83 =  HAnimJoint();
HAnimJoint83.X3DNode::setName(CString("l_eyebrow_joint"));
HAnimJoint83.setDEF(CString("Joe_l_eyebrow_joint"));
HAnimJoint83.setCenter(new float[]{0.034,1.659,0.06});
HAnimJoint83.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint83.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint79.addChildren(&HAnimJoint83);

HAnimJoint& HAnimJoint84 =  HAnimJoint();
HAnimJoint84.X3DNode::setName(CString("r_eyelid_joint"));
HAnimJoint84.setDEF(CString("Joe_r_eyelid_joint"));
HAnimJoint84.setCenter(new float[]{-0.034,1.659,0.06});
HAnimJoint84.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint84.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint79.addChildren(&HAnimJoint84);

HAnimJoint& HAnimJoint85 =  HAnimJoint();
HAnimJoint85.X3DNode::setName(CString("r_eyeball_joint"));
HAnimJoint85.setDEF(CString("Joe_r_eyeball_joint"));
HAnimJoint85.setCenter(new float[]{-0.034,1.659,0.06});
HAnimJoint85.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint85.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint79.addChildren(&HAnimJoint85);

HAnimJoint& HAnimJoint86 =  HAnimJoint();
HAnimJoint86.X3DNode::setName(CString("r_eyebrow_joint"));
HAnimJoint86.setDEF(CString("Joe_r_eyebrow_joint"));
HAnimJoint86.setCenter(new float[]{-0.034,1.659,0.06});
HAnimJoint86.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint86.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint79.addChildren(&HAnimJoint86);

HAnimJoint& HAnimJoint87 =  HAnimJoint();
HAnimJoint87.X3DNode::setName(CString("temporomandibular"));
HAnimJoint87.setDEF(CString("Joe_temporomandibular"));
HAnimJoint87.setCenter(new float[]{0.034,1.659,0.06});
HAnimJoint87.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint87.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint79.addChildren(&HAnimJoint87);

HAnimJoint78.addChildren(&HAnimJoint79);

HAnimJoint77.addChildren(&HAnimJoint78);

HAnimJoint76.addChildren(&HAnimJoint77);

HAnimJoint75.addChildren(&HAnimJoint76);

HAnimJoint74.addChildren(&HAnimJoint75);

HAnimJoint73.addChildren(&HAnimJoint74);

HAnimJoint72.addChildren(&HAnimJoint73);

HAnimJoint71.addChildren(&HAnimJoint72);

HAnimJoint& HAnimJoint88 =  HAnimJoint();
HAnimJoint88.setDEF(CString("Joe_l_acromioclavicular"));
HAnimJoint88.setCenter(new float[]{0.082,1.4488,-0.0353});
HAnimJoint88.setSkinCoordIndex(new int32_t[]{12}, 1);
HAnimJoint88.setSkinCoordWeight(new float[]{1}, 1);
HAnimJoint88.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint88.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint& HAnimJoint89 =  HAnimJoint();
HAnimJoint89.X3DNode::setName(CString("l_acromioclavicular"));
HAnimJoint89.setDEF(CString("Joe_l_sternoclavicular"));
HAnimJoint89.setCenter(new float[]{0.0962,1.4269,-0.0424});
HAnimJoint89.setSkinCoordIndex(new int32_t[]{79}, 1);
HAnimJoint89.setSkinCoordWeight(new float[]{1}, 1);
HAnimJoint89.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint89.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint& HAnimJoint90 =  HAnimJoint();
HAnimJoint90.X3DNode::setName(CString("l_shoulder"));
HAnimJoint90.setDEF(CString("Joe_l_shoulder"));
HAnimJoint90.setCenter(new float[]{0.2,1.44,-0.04});
HAnimJoint90.setSkinCoordIndex(new int32_t[]{41,42,44,80,102,103,104,105}, 8);
HAnimJoint90.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1}, 8);
HAnimJoint90.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint90.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint& HAnimJoint91 =  HAnimJoint();
HAnimJoint91.X3DNode::setName(CString("l_elbow"));
HAnimJoint91.setDEF(CString("Joe_l_elbow"));
HAnimJoint91.setCenter(new float[]{0.2,1.1388,-0.04});
HAnimJoint91.setSkinCoordIndex(new int32_t[]{45,46,47,109,110,111,112,113,115,116,117,118}, 12);
HAnimJoint91.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, 15);
HAnimJoint91.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint91.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint& HAnimJoint92 =  HAnimJoint();
HAnimJoint92.X3DNode::setName(CString("l_radiocarpal"));
HAnimJoint92.setDEF(CString("Joe_l_radiocarpal"));
HAnimJoint92.setCenter(new float[]{0.2,0.87,-0.04});
HAnimJoint92.setSkinCoordIndex(new int32_t[]{119,120,121,122,123,124,125,126}, 8);
HAnimJoint92.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1}, 8);
HAnimJoint92.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint92.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint& HAnimJoint93 =  HAnimJoint();
HAnimJoint93.X3DNode::setName(CString("l_carpometacarpal_1"));
HAnimJoint93.setDEF(CString("Joe_l_carpometacarpal_1"));
HAnimJoint93.setCenter(new float[]{0.1924,0.8472,-0.0534});
HAnimJoint93.setSkinCoordIndex(new int32_t[]{127,128}, 2);
HAnimJoint93.setSkinCoordWeight(new float[]{1,1}, 2);
HAnimJoint93.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint93.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint& HAnimJoint94 =  HAnimJoint();
HAnimJoint94.X3DNode::setName(CString("l_metacarpophalangeal_1"));
HAnimJoint94.setDEF(CString("Joe_l_metacarpophalangeal_1"));
HAnimJoint94.setCenter(new float[]{0.1951,0.8226,0.0246});
HAnimJoint94.setSkinCoordIndex(new int32_t[]{138,139,140,141,142,143}, 6);
HAnimJoint94.setSkinCoordWeight(new float[]{0.5,0.5,0.5,1,1,1}, 6);
HAnimJoint94.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint94.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint& HAnimJoint95 =  HAnimJoint();
HAnimJoint95.X3DNode::setName(CString("l_carpal_interphalangeal_1"));
HAnimJoint95.setDEF(CString("Joe_l_carpal_interphalangeal_1"));
HAnimJoint95.setCenter(new float[]{0.1955,0.8159,0.0464});
HAnimJoint95.setSkinCoordIndex(new int32_t[]{144,145,146,147,148,149,150,151,152}, 9);
HAnimJoint95.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1,1}, 9);
HAnimJoint95.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint95.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint94.addChildren(&HAnimJoint95);

HAnimJoint93.addChildren(&HAnimJoint94);

HAnimJoint92.addChildren(&HAnimJoint93);

HAnimJoint& HAnimJoint96 =  HAnimJoint();
HAnimJoint96.X3DNode::setName(CString("l_carpometacarpal_2"));
HAnimJoint96.setDEF(CString("Joe_l_carpometacarpal_2"));
HAnimJoint96.setCenter(new float[]{0.1983,0.8024,-0.028});
HAnimJoint96.setSkinCoordIndex(new int32_t[]{129,130}, 2);
HAnimJoint96.setSkinCoordWeight(new float[]{1,1}, 2);
HAnimJoint96.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint96.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint& HAnimJoint97 =  HAnimJoint();
HAnimJoint97.X3DNode::setName(CString("l_metacarpophalangeal_2"));
HAnimJoint97.setDEF(CString("Joe_l_metacarpophalangeal_2"));
HAnimJoint97.setCenter(new float[]{0.1983,0.7815,-0.028});
HAnimJoint97.setSkinCoordIndex(new int32_t[]{138,139,140,153,154,155,163}, 7);
HAnimJoint97.setSkinCoordWeight(new float[]{0.5,0.5,0.5,1,1,1,0.5}, 7);
HAnimJoint97.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint97.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint& HAnimJoint98 =  HAnimJoint();
HAnimJoint98.X3DNode::setName(CString("l_carpal_proximal_interphalangeal_2"));
HAnimJoint98.setDEF(CString("Joe_l_carpal_proximal_interphalangeal_2"));
HAnimJoint98.setCenter(new float[]{0.2017,0.7363,-0.0248});
HAnimJoint98.setSkinCoordIndex(new int32_t[]{166,167,168,169}, 4);
HAnimJoint98.setSkinCoordWeight(new float[]{1,1,1,1}, 4);
HAnimJoint98.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint98.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint& HAnimJoint99 =  HAnimJoint();
HAnimJoint99.X3DNode::setName(CString("l_carpal_distal_interphalangeal_2"));
HAnimJoint99.setDEF(CString("Joe_l_carpal_distal_interphalangeal_2"));
HAnimJoint99.setCenter(new float[]{0.2028,0.7139,-0.0236});
HAnimJoint99.setSkinCoordIndex(new int32_t[]{170,171,172,173,174,175,176,177,178}, 9);
HAnimJoint99.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1,1}, 9);
HAnimJoint99.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint99.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint98.addChildren(&HAnimJoint99);

HAnimJoint97.addChildren(&HAnimJoint98);

HAnimJoint96.addChildren(&HAnimJoint97);

HAnimJoint92.addChildren(&HAnimJoint96);

HAnimJoint& HAnimJoint100 =  HAnimJoint();
HAnimJoint100.X3DNode::setName(CString("l_carpometacarpal_3"));
HAnimJoint100.setDEF(CString("Joe_l_carpometacarpal_3"));
HAnimJoint100.setCenter(new float[]{0.1987,0.8029,-0.053});
HAnimJoint100.setSkinCoordIndex(new int32_t[]{131,132}, 2);
HAnimJoint100.setSkinCoordWeight(new float[]{1,1}, 2);
HAnimJoint100.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint100.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint& HAnimJoint101 =  HAnimJoint();
HAnimJoint101.X3DNode::setName(CString("l_metacarpophalangeal_3"));
HAnimJoint101.setDEF(CString("Joe_l_metacarpophalangeal_3"));
HAnimJoint101.setCenter(new float[]{0.1987,0.7818,-0.053});
HAnimJoint101.setSkinCoordIndex(new int32_t[]{156,157,163,164}, 4);
HAnimJoint101.setSkinCoordWeight(new float[]{1,1,0.5,0.5}, 4);
HAnimJoint101.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint101.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint& HAnimJoint102 =  HAnimJoint();
HAnimJoint102.X3DNode::setName(CString("l_carpal_proximal_interphalangeal_3"));
HAnimJoint102.setDEF(CString("Joe_l_carpal_proximal_interphalangeal_3"));
HAnimJoint102.setCenter(new float[]{0.2013,0.7273,-0.0503});
HAnimJoint102.setSkinCoordIndex(new int32_t[]{179,180,181,182}, 4);
HAnimJoint102.setSkinCoordWeight(new float[]{1,1,1,1}, 4);
HAnimJoint102.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint102.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint& HAnimJoint103 =  HAnimJoint();
HAnimJoint103.X3DNode::setName(CString("l_carpal_distal_interphalangeal_3"));
HAnimJoint103.setDEF(CString("Joe_l_carpal_distal_interphalangeal_3"));
HAnimJoint103.setCenter(new float[]{0.2026,0.7011,-0.0494});
HAnimJoint103.setSkinCoordIndex(new int32_t[]{183,184,185,186,187,188,189,190,191}, 9);
HAnimJoint103.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1,1}, 9);
HAnimJoint103.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint103.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint102.addChildren(&HAnimJoint103);

HAnimJoint101.addChildren(&HAnimJoint102);

HAnimJoint100.addChildren(&HAnimJoint101);

HAnimJoint92.addChildren(&HAnimJoint100);

HAnimJoint& HAnimJoint104 =  HAnimJoint();
HAnimJoint104.X3DNode::setName(CString("l_carpometacarpal_4"));
HAnimJoint104.setDEF(CString("Joe_l_carpometacarpal_4"));
HAnimJoint104.setCenter(new float[]{0.1956,0.8019,-0.0794});
HAnimJoint104.setSkinCoordIndex(new int32_t[]{133,134}, 2);
HAnimJoint104.setSkinCoordWeight(new float[]{1,1}, 2);
HAnimJoint104.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint104.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint& HAnimJoint105 =  HAnimJoint();
HAnimJoint105.X3DNode::setName(CString("l_metacarpophalangeal_4"));
HAnimJoint105.setDEF(CString("Joe_l_metacarpophalangeal_4"));
HAnimJoint105.setCenter(new float[]{0.1956,0.7815,-0.0794});
HAnimJoint105.setSkinCoordIndex(new int32_t[]{158,159,164,165}, 4);
HAnimJoint105.setSkinCoordWeight(new float[]{1,1,0.5,0.5}, 4);
HAnimJoint105.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint105.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint& HAnimJoint106 =  HAnimJoint();
HAnimJoint106.X3DNode::setName(CString("l_carpal_proximal_interphalangeal_4"));
HAnimJoint106.setDEF(CString("Joe_l_carpal_proximal_interphalangeal_4"));
HAnimJoint106.setCenter(new float[]{0.1973,0.7287,-0.0777});
HAnimJoint106.setSkinCoordIndex(new int32_t[]{192,193,194,195}, 4);
HAnimJoint106.setSkinCoordWeight(new float[]{1,1,1,1}, 4);
HAnimJoint106.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint106.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint& HAnimJoint107 =  HAnimJoint();
HAnimJoint107.X3DNode::setName(CString("l_carpal_distal_interphalangeal_4"));
HAnimJoint107.setDEF(CString("Joe_l_carpal_distal_interphalangeal_4"));
HAnimJoint107.setCenter(new float[]{0.1983,0.7045,-0.0767});
HAnimJoint107.setSkinCoordIndex(new int32_t[]{196,197,198,199,200,201,202,203,204}, 9);
HAnimJoint107.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1,1}, 9);
HAnimJoint107.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint107.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint106.addChildren(&HAnimJoint107);

HAnimJoint105.addChildren(&HAnimJoint106);

HAnimJoint104.addChildren(&HAnimJoint105);

HAnimJoint92.addChildren(&HAnimJoint104);

HAnimJoint& HAnimJoint108 =  HAnimJoint();
HAnimJoint108.X3DNode::setName(CString("l_carpometacarpal_5"));
HAnimJoint108.setDEF(CString("Joe_l_carpometacarpal_5"));
HAnimJoint108.setCenter(new float[]{0.1925,0.8066,-0.1036});
HAnimJoint108.setSkinCoordIndex(new int32_t[]{135,136,137,165}, 4);
HAnimJoint108.setSkinCoordWeight(new float[]{1,1,1,0.5}, 4);
HAnimJoint108.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint108.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint& HAnimJoint109 =  HAnimJoint();
HAnimJoint109.X3DNode::setName(CString("l_metacarpophalangeal_5"));
HAnimJoint109.setDEF(CString("Joe_l_metacarpophalangeal_5"));
HAnimJoint109.setCenter(new float[]{0.1925,0.7866,-0.1036});
HAnimJoint109.setSkinCoordIndex(new int32_t[]{160,161,162}, 3);
HAnimJoint109.setSkinCoordWeight(new float[]{1,1,1}, 3);
HAnimJoint109.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint109.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint& HAnimJoint110 =  HAnimJoint();
HAnimJoint110.X3DNode::setName(CString("l_carpal_proximal_interphalangeal_5"));
HAnimJoint110.setDEF(CString("Joe_l_carpal_proximal_interphalangeal_5"));
HAnimJoint110.setCenter(new float[]{0.1938,0.7452,-0.1024});
HAnimJoint110.setSkinCoordIndex(new int32_t[]{205,206,207,208}, 4);
HAnimJoint110.setSkinCoordWeight(new float[]{1,1,1,1}, 4);
HAnimJoint110.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint110.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint& HAnimJoint111 =  HAnimJoint();
HAnimJoint111.X3DNode::setName(CString("l_carpal_distal_interphalangeal_5"));
HAnimJoint111.setDEF(CString("Joe_l_carpal_distal_interphalangeal_5"));
HAnimJoint111.setCenter(new float[]{0.1948,0.7277,-0.1017});
HAnimJoint111.setSkinCoordIndex(new int32_t[]{209,210,211,212,213,214,215,216,217}, 9);
HAnimJoint111.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1,1}, 9);
HAnimJoint111.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint111.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint110.addChildren(&HAnimJoint111);

HAnimJoint109.addChildren(&HAnimJoint110);

HAnimJoint108.addChildren(&HAnimJoint109);

HAnimJoint92.addChildren(&HAnimJoint108);

HAnimJoint91.addChildren(&HAnimJoint92);

HAnimJoint90.addChildren(&HAnimJoint91);

HAnimJoint89.addChildren(&HAnimJoint90);

HAnimJoint88.addChildren(&HAnimJoint89);

HAnimJoint71.addChildren(&HAnimJoint88);

HAnimJoint& HAnimJoint112 =  HAnimJoint();
HAnimJoint112.X3DNode::setName(CString("r_sternoclavicular"));
HAnimJoint112.setDEF(CString("Joe_r_sternoclavicular"));
HAnimJoint112.setCenter(new float[]{-0.03,1.46,0});
HAnimJoint112.setSkinCoordIndex(new int32_t[]{10}, 1);
HAnimJoint112.setSkinCoordWeight(new float[]{1}, 1);
HAnimJoint112.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint112.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint& HAnimJoint113 =  HAnimJoint();
HAnimJoint113.X3DNode::setName(CString("r_acromioclavicular"));
HAnimJoint113.setDEF(CString("Joe_r_acromioclavicular"));
HAnimJoint113.setCenter(new float[]{-0.09,1.41,-0.11});
HAnimJoint113.setSkinCoordIndex(new int32_t[]{77,29}, 2);
HAnimJoint113.setSkinCoordWeight(new float[]{1,0.9}, 2);
HAnimJoint113.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint113.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint& HAnimJoint114 =  HAnimJoint();
HAnimJoint114.X3DNode::setName(CString("r_shoulder"));
HAnimJoint114.setDEF(CString("Joe_r_shoulder"));
HAnimJoint114.setCenter(new float[]{-0.2,1.44,-0.04});
HAnimJoint114.setSkinCoordIndex(new int32_t[]{29,30,32,78,218,219,220,221,86,88}, 10);
HAnimJoint114.setSkinCoordWeight(new float[]{0.1,1,1,1,1,1,1,1,0.3,0.2}, 10);
HAnimJoint114.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint114.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint& HAnimJoint115 =  HAnimJoint();
HAnimJoint115.X3DNode::setName(CString("r_elbow"));
HAnimJoint115.setDEF(CString("Joe_r_elbow"));
HAnimJoint115.setCenter(new float[]{-0.2,1.1388,-0.04});
HAnimJoint115.setSkinCoordIndex(new int32_t[]{33,34,35,225,226,227,228,229,231,232,233,234}, 12);
HAnimJoint115.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1,1,1,1,1}, 12);
HAnimJoint115.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint115.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint& HAnimJoint116 =  HAnimJoint();
HAnimJoint116.X3DNode::setName(CString("r_radiocarpal"));
HAnimJoint116.setDEF(CString("Joe_r_radiocarpal"));
HAnimJoint116.setCenter(new float[]{-0.2,0.89,-0.04});
HAnimJoint116.setSkinCoordIndex(new int32_t[]{235,236,237,238,239,240,241,242}, 8);
HAnimJoint116.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1}, 8);
HAnimJoint116.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint116.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint& HAnimJoint117 =  HAnimJoint();
HAnimJoint117.X3DNode::setName(CString("r_carpometacarpal_1"));
HAnimJoint117.setDEF(CString("Joe_r_carpometacarpal_1"));
HAnimJoint117.setCenter(new float[]{-0.2,0.85,0});
HAnimJoint117.setSkinCoordIndex(new int32_t[]{243,244}, 2);
HAnimJoint117.setSkinCoordWeight(new float[]{1,1}, 2);
HAnimJoint117.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint117.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint& HAnimJoint118 =  HAnimJoint();
HAnimJoint118.X3DNode::setName(CString("r_metacarpophalangeal_1"));
HAnimJoint118.setDEF(CString("Joe_r_metacarpophalangeal_1"));
HAnimJoint118.setCenter(new float[]{-0.2,0.82,0.03});
HAnimJoint118.setSkinCoordIndex(new int32_t[]{254,255,256,257,258,259}, 6);
HAnimJoint118.setSkinCoordWeight(new float[]{0.5,0.5,0.5,1,1,1}, 6);
HAnimJoint118.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint118.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint& HAnimJoint119 =  HAnimJoint();
HAnimJoint119.X3DNode::setName(CString("r_carpal_interphalangeal_1"));
HAnimJoint119.setDEF(CString("Joe_r_carpal_interphalangeal_1"));
HAnimJoint119.setCenter(new float[]{-0.2,0.8,0.05});
HAnimJoint119.setSkinCoordIndex(new int32_t[]{260,261,262,263,264,265,266,267,268}, 9);
HAnimJoint119.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1,1}, 9);
HAnimJoint119.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint119.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint118.addChildren(&HAnimJoint119);

HAnimJoint117.addChildren(&HAnimJoint118);

HAnimJoint116.addChildren(&HAnimJoint117);

HAnimJoint& HAnimJoint120 =  HAnimJoint();
HAnimJoint120.X3DNode::setName(CString("r_carpometacarpal_2"));
HAnimJoint120.setDEF(CString("Joe_r_carpometacarpal_2"));
HAnimJoint120.setCenter(new float[]{-0.2,0.84,-0.015});
HAnimJoint120.setSkinCoordIndex(new int32_t[]{245,246}, 2);
HAnimJoint120.setSkinCoordWeight(new float[]{1,1}, 2);
HAnimJoint120.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint120.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint& HAnimJoint121 =  HAnimJoint();
HAnimJoint121.X3DNode::setName(CString("r_metacarpophalangeal_2"));
HAnimJoint121.setDEF(CString("Joe_r_metacarpophalangeal_2"));
HAnimJoint121.setCenter(new float[]{-0.2,0.793,-0.015});
HAnimJoint121.setSkinCoordIndex(new int32_t[]{254,255,256,269,270,271,279}, 7);
HAnimJoint121.setSkinCoordWeight(new float[]{0.5,0.5,0.5,1,1,1,0.5}, 7);
HAnimJoint121.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint121.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint& HAnimJoint122 =  HAnimJoint();
HAnimJoint122.X3DNode::setName(CString("r_carpal_proximal_interphalangeal_2"));
HAnimJoint122.setDEF(CString("Joe_r_carpal_proximal_interphalangeal_2"));
HAnimJoint122.setCenter(new float[]{-0.2,0.745,-0.015});
HAnimJoint122.setSkinCoordIndex(new int32_t[]{282,283,284,285}, 4);
HAnimJoint122.setSkinCoordWeight(new float[]{1,1,1,1}, 4);
HAnimJoint122.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint122.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint& HAnimJoint123 =  HAnimJoint();
HAnimJoint123.X3DNode::setName(CString("r_carpal_distal_interphalangeal_2"));
HAnimJoint123.setDEF(CString("Joe_r_carpal_distal_interphalangeal_2"));
HAnimJoint123.setCenter(new float[]{-0.2,0.72,-0.015});
HAnimJoint123.setSkinCoordIndex(new int32_t[]{286,287,288,289,290,291,292,293,294}, 9);
HAnimJoint123.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1,1}, 9);
HAnimJoint123.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint123.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint122.addChildren(&HAnimJoint123);

HAnimJoint121.addChildren(&HAnimJoint122);

HAnimJoint120.addChildren(&HAnimJoint121);

HAnimJoint116.addChildren(&HAnimJoint120);

HAnimJoint& HAnimJoint124 =  HAnimJoint();
HAnimJoint124.X3DNode::setName(CString("r_carpometacarpal_3"));
HAnimJoint124.setDEF(CString("Joe_r_carpometacarpal_3"));
HAnimJoint124.setCenter(new float[]{-0.2,0.835,-0.04});
HAnimJoint124.setSkinCoordIndex(new int32_t[]{247,248}, 2);
HAnimJoint124.setSkinCoordWeight(new float[]{1,1}, 2);
HAnimJoint124.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint124.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint& HAnimJoint125 =  HAnimJoint();
HAnimJoint125.X3DNode::setName(CString("r_metacarpophalangeal_3"));
HAnimJoint125.setDEF(CString("Joe_r_metacarpophalangeal_3"));
HAnimJoint125.setCenter(new float[]{-0.2,0.788,-0.04});
HAnimJoint125.setSkinCoordIndex(new int32_t[]{272,273,279,280}, 4);
HAnimJoint125.setSkinCoordWeight(new float[]{1,1,0.5,0.5}, 4);
HAnimJoint125.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint125.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint& HAnimJoint126 =  HAnimJoint();
HAnimJoint126.X3DNode::setName(CString("r_carpal_proximal_interphalangeal_3"));
HAnimJoint126.setDEF(CString("Joe_r_carpal_proximal_interphalangeal_3"));
HAnimJoint126.setCenter(new float[]{-0.2,0.74,-0.04});
HAnimJoint126.setSkinCoordIndex(new int32_t[]{295,296,297,298}, 4);
HAnimJoint126.setSkinCoordWeight(new float[]{1,1,1,1}, 4);
HAnimJoint126.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint126.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint& HAnimJoint127 =  HAnimJoint();
HAnimJoint127.X3DNode::setName(CString("r_carpal_distal_interphalangeal_3"));
HAnimJoint127.setDEF(CString("Joe_r_carpal_distal_interphalangeal_3"));
HAnimJoint127.setCenter(new float[]{-0.2,0.7142,-0.04});
HAnimJoint127.setSkinCoordIndex(new int32_t[]{299,300,301,302,303,304,305,306,307}, 9);
HAnimJoint127.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1,1}, 9);
HAnimJoint127.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint127.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint126.addChildren(&HAnimJoint127);

HAnimJoint125.addChildren(&HAnimJoint126);

HAnimJoint124.addChildren(&HAnimJoint125);

HAnimJoint116.addChildren(&HAnimJoint124);

HAnimJoint& HAnimJoint128 =  HAnimJoint();
HAnimJoint128.X3DNode::setName(CString("r_carpometacarpal_4"));
HAnimJoint128.setDEF(CString("Joe_r_carpometacarpal_4"));
HAnimJoint128.setCenter(new float[]{-0.2,0.835,-0.065});
HAnimJoint128.setSkinCoordIndex(new int32_t[]{249,250}, 2);
HAnimJoint128.setSkinCoordWeight(new float[]{1,1}, 2);
HAnimJoint128.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint128.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint& HAnimJoint129 =  HAnimJoint();
HAnimJoint129.X3DNode::setName(CString("r_metacarpophalangeal_4"));
HAnimJoint129.setDEF(CString("Joe_r_metacarpophalangeal_4"));
HAnimJoint129.setCenter(new float[]{-0.2,0.793,-0.065});
HAnimJoint129.setSkinCoordIndex(new int32_t[]{274,275,280,281}, 4);
HAnimJoint129.setSkinCoordWeight(new float[]{1,1,0.5,0.5}, 4);
HAnimJoint129.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint129.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint& HAnimJoint130 =  HAnimJoint();
HAnimJoint130.X3DNode::setName(CString("r_carpal_proximal_interphalangeal_4"));
HAnimJoint130.setDEF(CString("Joe_r_carpal_proximal_interphalangeal_4"));
HAnimJoint130.setCenter(new float[]{-0.2,0.74,-0.065});
HAnimJoint130.setSkinCoordIndex(new int32_t[]{308,309,310,311}, 4);
HAnimJoint130.setSkinCoordWeight(new float[]{1,1,1,1}, 4);
HAnimJoint130.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint130.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint& HAnimJoint131 =  HAnimJoint();
HAnimJoint131.X3DNode::setName(CString("r_carpal_distal_interphalangeal_4"));
HAnimJoint131.setDEF(CString("Joe_r_carpal_distal_interphalangeal_4"));
HAnimJoint131.setCenter(new float[]{-0.2,0.7177,-0.065});
HAnimJoint131.setSkinCoordIndex(new int32_t[]{312,313,314,315,316,317,318,319,320}, 9);
HAnimJoint131.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1,1}, 9);
HAnimJoint131.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint131.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint130.addChildren(&HAnimJoint131);

HAnimJoint129.addChildren(&HAnimJoint130);

HAnimJoint128.addChildren(&HAnimJoint129);

HAnimJoint116.addChildren(&HAnimJoint128);

HAnimJoint& HAnimJoint132 =  HAnimJoint();
HAnimJoint132.X3DNode::setName(CString("r_carpometacarpal_5"));
HAnimJoint132.setDEF(CString("Joe_r_carpometacarpal_5"));
HAnimJoint132.setCenter(new float[]{-0.2,0.84,-0.085});
HAnimJoint132.setSkinCoordIndex(new int32_t[]{251,252,253,281}, 4);
HAnimJoint132.setSkinCoordWeight(new float[]{1,1,1,0.5}, 4);
HAnimJoint132.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint132.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint& HAnimJoint133 =  HAnimJoint();
HAnimJoint133.X3DNode::setName(CString("r_metacarpophalangeal_5"));
HAnimJoint133.setDEF(CString("Joe_r_metacarpophalangeal_5"));
HAnimJoint133.setCenter(new float[]{-0.2,0.79,-0.085});
HAnimJoint133.setSkinCoordIndex(new int32_t[]{276,277,278}, 3);
HAnimJoint133.setSkinCoordWeight(new float[]{1,1,1}, 3);
HAnimJoint133.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint133.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint& HAnimJoint134 =  HAnimJoint();
HAnimJoint134.X3DNode::setName(CString("r_carpal_proximal_interphalangeal_5"));
HAnimJoint134.setDEF(CString("Joe_r_carpal_proximal_interphalangeal_5"));
HAnimJoint134.setCenter(new float[]{-0.2,0.755,-0.085});
HAnimJoint134.setSkinCoordIndex(new int32_t[]{321,322,323,324}, 4);
HAnimJoint134.setSkinCoordWeight(new float[]{1,1,1,1}, 4);
HAnimJoint134.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint134.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint& HAnimJoint135 =  HAnimJoint();
HAnimJoint135.X3DNode::setName(CString("r_carpal_distal_interphalangeal_5"));
HAnimJoint135.setDEF(CString("Joe_r_carpal_distal_interphalangeal_5"));
HAnimJoint135.setCenter(new float[]{-0.2,0.735,-0.09});
HAnimJoint135.setSkinCoordIndex(new int32_t[]{325,326,327,328,329,330,331,332,333}, 9);
HAnimJoint135.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1,1}, 9);
HAnimJoint135.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint135.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint134.addChildren(&HAnimJoint135);

HAnimJoint133.addChildren(&HAnimJoint134);

HAnimJoint132.addChildren(&HAnimJoint133);

HAnimJoint116.addChildren(&HAnimJoint132);

HAnimJoint115.addChildren(&HAnimJoint116);

HAnimJoint114.addChildren(&HAnimJoint115);

HAnimJoint113.addChildren(&HAnimJoint114);

HAnimJoint112.addChildren(&HAnimJoint113);

HAnimJoint71.addChildren(&HAnimJoint112);

HAnimJoint70.addChildren(&HAnimJoint71);

HAnimJoint69.addChildren(&HAnimJoint70);

HAnimJoint68.addChildren(&HAnimJoint69);

HAnimJoint67.addChildren(&HAnimJoint68);

HAnimJoint66.addChildren(&HAnimJoint67);

HAnimJoint65.addChildren(&HAnimJoint66);

HAnimJoint64.addChildren(&HAnimJoint65);

HAnimJoint63.addChildren(&HAnimJoint64);

HAnimJoint62.addChildren(&HAnimJoint63);

HAnimJoint61.addChildren(&HAnimJoint62);

HAnimJoint60.addChildren(&HAnimJoint61);

HAnimJoint59.addChildren(&HAnimJoint60);

HAnimJoint58.addChildren(&HAnimJoint59);

HAnimJoint57.addChildren(&HAnimJoint58);

HAnimJoint56.addChildren(&HAnimJoint57);

HAnimJoint55.addChildren(&HAnimJoint56);

HAnimJoint33.addChildren(&HAnimJoint55);

HAnimHumanoid30.setSkeleton(&HAnimJoint33);

Shape& Shape136 =  Shape();
Shape136.setDEF(CString("Joe_Shape"));
Appearance& Appearance137 =  Appearance();
Appearance137.setDEF(CString("Joe_skin_Appearance"));
Material& Material138 =  Material();
Material138.setDEF(CString("Joe_skin_Material"));
Material138.setDiffuseColor(new float[]{0.3,0.3,0.6});
Material138.setEmissiveColor(new float[]{0.3,0.3,0.6});
Appearance137.addChild(&Material138);

ImageTexture& ImageTexture139 =  ImageTexture();
ImageTexture139.setDEF(CString("JoeSkinImageTexture"));
ImageTexture139.setUrl(new CString[]{CString("JoeBodyTexture29.png"), CString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/JoeBodyTexture29.png")}, 2);
Appearance137.addChild(&ImageTexture139);

TextureTransform& TextureTransform140 =  TextureTransform();
TextureTransform140.setDEF(CString("KickTextureTransform"));
Appearance137.setTextureTransform(TextureTransform140);

Shape136.addChild(&Appearance137);

IndexedFaceSet& IndexedFaceSet141 =  IndexedFaceSet();
IndexedFaceSet141.setDEF(CString("Joe_skin_IndexedFaceSet"));
IndexedFaceSet141.setCoordIndex(new int32_t[]{0,9,5,-1,0,7,9,-1,0,5,1,-1,1,5,2,-1,1,3,7,-1,2,4,3,-1,0,1,7,-1,1,2,3,-1,5,6,2,-1,7,3,8,-1,6,4,2,-1,3,4,8,-1,9,6,5,-1,9,7,8,-1,4,6,10,-1,4,10,12,-1,4,12,8,-1,10,11,12,-1,9,75,24,-1,9,24,74,-1,9,8,75,-1,9,74,6,-1,10,6,74,-1,12,75,8,-1,74,24,29,-1,24,77,29,-1,10,74,29,-1,77,32,29,-1,32,78,29,-1,78,30,29,-1,30,10,29,-1,41,24,75,-1,41,75,12,-1,41,12,42,-1,41,42,80,-1,41,80,44,-1,41,44,79,-1,41,79,24,-1,81,24,79,-1,81,77,24,-1,81,25,77,-1,81,79,25,-1,25,79,44,-1,25,32,77,-1,25,83,32,-1,25,26,83,-1,25,27,26,-1,25,84,27,-1,25,44,84,-1,11,10,30,-1,11,30,13,-1,11,13,15,-1,11,15,14,-1,11,14,42,-1,11,42,12,-1,15,13,16,-1,15,18,14,-1,15,16,76,-1,15,76,18,-1,76,16,17,-1,76,17,82,-1,76,82,19,-1,76,19,18,-1,22,18,19,-1,22,87,18,-1,22,27,84,-1,22,84,87,-1,87,84,85,-1,85,84,44,-1,85,42,14,-1,87,14,18,-1,87,85,14,-1,20,83,26,-1,20,17,16,-1,20,16,88,-1,20,88,83,-1,88,16,13,-1,88,13,86,-1,88,86,83,-1,86,13,30,-1,86,32,83,-1,23,89,22,-1,89,27,22,-1,89,91,27,-1,91,26,27,-1,91,20,26,-1,21,20,91,-1,21,17,20,-1,21,92,17,-1,82,17,92,-1,82,90,19,-1,23,22,19,-1,23,19,90,-1,82,92,101,-1,82,101,99,-1,82,99,93,-1,82,93,95,-1,82,95,97,-1,82,97,90,-1,23,90,97,-1,23,97,94,-1,23,94,89,-1,89,94,96,-1,89,96,95,-1,89,95,93,-1,89,93,91,-1,91,93,99,-1,91,99,100,-1,91,100,98,-1,21,91,98,-1,21,98,101,-1,21,101,92,-1,85,105,42,-1,85,103,105,-1,85,44,103,-1,103,44,104,-1,80,42,105,-1,80,105,102,-1,80,102,104,-1,80,104,44,-1,105,109,102,-1,102,109,47,-1,47,104,102,-1,104,47,45,-1,104,45,103,-1,103,45,46,-1,103,46,109,-1,103,109,105,-1,109,112,110,-1,109,110,47,-1,47,110,111,-1,47,111,45,-1,45,111,113,-1,113,46,45,-1,46,113,112,-1,112,109,46,-1,112,118,110,-1,110,118,115,-1,110,115,111,-1,111,115,117,-1,111,117,113,-1,113,117,116,-1,113,116,112,-1,112,116,118,-1,115,118,119,-1,119,118,122,-1,118,116,122,-1,122,116,120,-1,116,117,120,-1,120,117,121,-1,117,115,121,-1,115,119,121,-1,119,127,123,-1,119,122,127,-1,122,126,127,-1,122,128,126,-1,122,120,128,-1,120,124,128,-1,120,121,124,-1,121,125,124,-1,121,119,125,-1,119,123,125,-1,127,129,123,-1,127,126,129,-1,129,126,141,-1,141,126,143,-1,126,142,143,-1,126,128,142,-1,128,124,130,-1,142,128,130,-1,124,132,130,-1,124,134,132,-1,125,134,124,-1,125,136,134,-1,125,137,136,-1,125,135,137,-1,125,133,135,-1,125,123,133,-1,123,131,133,-1,123,129,131,-1,131,129,138,-1,129,141,138,-1,138,141,144,-1,141,143,144,-1,143,146,144,-1,142,146,143,-1,142,145,146,-1,139,145,142,-1,130,139,142,-1,139,130,132,-1,139,132,154,-1,132,157,154,-1,132,159,157,-1,132,134,159,-1,134,136,159,-1,136,161,159,-1,136,137,161,-1,137,162,161,-1,160,162,137,-1,135,160,137,-1,133,160,135,-1,133,158,160,-1,131,158,133,-1,156,158,131,-1,153,156,131,-1,131,138,153,-1,138,155,153,-1,140,155,138,-1,138,144,140,-1,144,147,140,-1,140,147,145,-1,140,145,139,-1,139,155,140,-1,154,155,139,-1,146,149,144,-1,146,151,149,-1,145,151,146,-1,150,151,145,-1,145,152,150,-1,147,152,145,-1,147,149,152,-1,147,144,149,-1,148,149,151,-1,148,152,149,-1,148,150,152,-1,148,151,150,-1,160,207,162,-1,160,205,207,-1,165,208,205,-1,160,165,205,-1,158,165,160,-1,161,162,207,-1,161,207,206,-1,165,206,208,-1,206,165,161,-1,161,165,159,-1,207,209,211,-1,205,209,207,-1,205,212,209,-1,205,208,212,-1,206,212,208,-1,206,210,212,-1,206,207,210,-1,207,211,210,-1,209,212,213,-1,212,216,213,-1,212,214,216,-1,210,214,212,-1,210,215,214,-1,210,211,215,-1,209,215,211,-1,209,213,215,-1,217,213,216,-1,217,215,213,-1,217,214,215,-1,217,216,214,-1,158,194,165,-1,192,194,158,-1,164,195,192,-1,158,164,192,-1,156,164,158,-1,159,194,165,-1,159,194,193,-1,159,193,195,-1,159,195,164,-1,159,164,157,-1,157,164,180,-1,192,198,194,-1,192,196,198,-1,192,195,196,-1,195,199,196,-1,196,199,200,-1,199,203,200,-1,193,199,195,-1,193,197,199,-1,193,198,197,-1,193,194,198,-1,199,201,203,-1,197,201,199,-1,197,198,201,-1,198,202,201,-1,196,202,198,-1,200,202,196,-1,204,202,200,-1,204,201,202,-1,204,203,201,-1,204,200,203,-1,156,181,164,-1,156,179,181,-1,156,182,179,-1,156,163,182,-1,163,180,182,-1,157,180,163,-1,164,181,180,-1,179,182,183,-1,182,186,183,-1,182,184,186,-1,180,184,182,-1,180,181,184,-1,181,185,184,-1,179,185,181,-1,183,185,179,-1,183,186,187,-1,186,190,187,-1,184,190,186,-1,184,188,190,-1,184,185,188,-1,185,189,188,-1,185,183,189,-1,183,187,189,-1,191,189,187,-1,191,188,189,-1,191,190,188,-1,191,187,190,-1,153,163,156,-1,153,168,163,-1,153,166,168,-1,153,169,166,-1,155,169,153,-1,155,167,169,-1,154,167,155,-1,154,163,167,-1,154,157,163,-1,163,168,167,-1,166,169,170,-1,169,173,170,-1,169,171,173,-1,169,167,171,-1,167,168,171,-1,168,172,171,-1,168,170,172,-1,170,168,166,-1,170,173,174,-1,173,177,174,-1,173,175,177,-1,173,171,175,-1,171,172,175,-1,172,176,175,-1,172,174,176,-1,170,174,172,-1,178,176,174,-1,178,175,176,-1,178,177,175,-1,178,174,177,-1,86,30,221,-1,86,221,219,-1,86,219,32,-1,32,219,220,-1,78,32,220,-1,78,220,218,-1,78,218,221,-1,78,221,30,-1,221,225,219,-1,219,225,35,-1,35,33,219,-1,33,220,219,-1,33,34,220,-1,220,34,218,-1,221,218,34,-1,34,225,221,-1,225,226,228,-1,225,228,35,-1,35,228,229,-1,35,229,33,-1,33,229,227,-1,33,227,34,-1,34,227,226,-1,34,226,225,-1,226,234,228,-1,228,234,232,-1,232,229,228,-1,232,233,229,-1,229,233,227,-1,227,233,231,-1,227,231,226,-1,226,231,234,-1,231,235,234,-1,235,238,234,-1,234,238,232,-1,238,236,232,-1,232,236,233,-1,236,237,233,-1,233,237,231,-1,231,237,235,-1,235,239,243,-1,235,243,238,-1,238,243,242,-1,238,242,244,-1,238,244,236,-1,236,244,240,-1,236,240,237,-1,237,240,241,-1,237,241,235,-1,235,241,239,-1,243,239,245,-1,243,245,242,-1,245,257,242,-1,257,259,242,-1,242,259,258,-1,242,258,244,-1,244,246,240,-1,258,246,244,-1,240,246,248,-1,240,248,250,-1,241,240,250,-1,241,250,252,-1,241,252,253,-1,241,253,251,-1,241,251,249,-1,241,249,239,-1,239,249,247,-1,239,247,245,-1,247,254,245,-1,245,254,257,-1,254,260,257,-1,257,260,259,-1,259,260,262,-1,258,259,262,-1,258,262,261,-1,255,258,261,-1,246,258,255,-1,255,248,246,-1,255,270,248,-1,248,270,273,-1,248,273,275,-1,248,275,250,-1,250,275,252,-1,252,275,277,-1,252,277,253,-1,253,277,278,-1,276,253,278,-1,251,253,276,-1,249,251,276,-1,249,276,274,-1,247,249,274,-1,272,247,274,-1,269,247,272,-1,247,269,254,-1,254,269,271,-1,256,254,271,-1,254,256,260,-1,260,256,263,-1,256,261,263,-1,256,255,261,-1,255,256,271,-1,270,255,271,-1,262,260,265,-1,262,265,267,-1,261,262,267,-1,266,261,267,-1,261,266,268,-1,263,261,268,-1,263,268,265,-1,263,265,260,-1,264,267,265,-1,264,265,268,-1,264,268,266,-1,264,266,267,-1,276,278,323,-1,276,323,321,-1,281,321,324,-1,276,321,281,-1,274,276,281,-1,277,323,278,-1,277,322,323,-1,281,324,322,-1,322,277,281,-1,277,275,281,-1,323,327,325,-1,321,323,325,-1,321,325,328,-1,321,328,324,-1,322,324,328,-1,322,328,326,-1,322,326,323,-1,323,326,327,-1,325,329,328,-1,328,329,332,-1,328,332,330,-1,326,328,330,-1,326,330,331,-1,326,331,327,-1,325,327,331,-1,325,331,329,-1,333,332,329,-1,333,329,331,-1,333,331,330,-1,333,330,332,-1,274,281,310,-1,308,274,310,-1,280,308,311,-1,274,308,280,-1,272,274,280,-1,275,310,281,-1,275,309,310,-1,275,311,309,-1,275,280,311,-1,275,273,280,-1,273,296,280,-1,308,310,314,-1,308,314,312,-1,308,312,311,-1,311,312,315,-1,312,316,315,-1,315,316,319,-1,309,311,315,-1,309,315,313,-1,309,313,314,-1,309,314,310,-1,315,319,317,-1,313,315,317,-1,313,317,314,-1,314,317,318,-1,312,314,318,-1,316,312,318,-1,320,316,318,-1,320,318,317,-1,320,317,319,-1,320,319,316,-1,272,280,297,-1,272,297,295,-1,272,295,298,-1,272,298,279,-1,279,298,296,-1,273,279,296,-1,280,296,297,-1,295,299,298,-1,298,299,302,-1,298,302,300,-1,296,298,300,-1,296,300,297,-1,297,300,301,-1,295,297,301,-1,299,295,301,-1,299,303,302,-1,302,303,306,-1,300,302,306,-1,300,306,304,-1,300,304,301,-1,301,304,305,-1,301,305,299,-1,299,305,303,-1,307,303,305,-1,307,305,304,-1,307,304,306,-1,307,306,303,-1,269,272,279,-1,269,279,284,-1,269,284,282,-1,269,282,285,-1,271,269,285,-1,271,285,283,-1,270,271,283,-1,270,283,279,-1,270,279,273,-1,279,283,284,-1,282,286,285,-1,285,286,289,-1,285,289,287,-1,285,287,283,-1,283,287,284,-1,284,287,288,-1,284,288,286,-1,286,282,284,-1,286,290,289,-1,289,290,293,-1,289,293,291,-1,289,291,287,-1,287,291,288,-1,288,291,292,-1,288,292,290,-1,286,288,290,-1,294,290,292,-1,294,292,291,-1,294,291,293,-1,294,293,290,-1,97,334,336,-1,97,336,94,-1,94,336,96,-1,336,335,96,-1,96,335,95,-1,95,335,337,-1,95,337,334,-1,95,334,97,-1,334,341,336,-1,336,341,338,-1,336,338,335,-1,335,338,340,-1,335,340,337,-1,337,340,339,-1,337,339,334,-1,334,339,341,-1,341,345,342,-1,341,342,338,-1,338,342,340,-1,340,342,344,-1,340,344,339,-1,339,344,343,-1,339,343,345,-1,339,345,341,-1,345,349,342,-1,342,349,351,-1,342,351,346,-1,342,346,344,-1,71,346,348,-1,71,344,346,-1,71,348,347,-1,71,347,344,-1,344,347,343,-1,343,347,352,-1,343,352,349,-1,343,349,345,-1,349,352,356,-1,349,356,353,-1,349,353,355,-1,349,355,351,-1,354,356,352,-1,354,352,350,-1,354,350,351,-1,354,351,355,-1,353,356,357,-1,353,357,358,-1,353,358,359,-1,353,359,360,-1,353,360,361,-1,353,361,355,-1,354,357,356,-1,350,346,351,-1,348,346,347,-1,350,347,346,-1,350,352,347,-1,354,358,357,-1,354,359,358,-1,354,360,359,-1,354,361,360,-1,354,355,361,-1,101,362,365,-1,101,365,99,-1,99,365,100,-1,100,365,363,-1,100,363,98,-1,98,363,364,-1,98,364,101,-1,101,364,362,-1,362,369,367,-1,362,367,365,-1,365,367,363,-1,363,367,368,-1,363,367,368,-1,363,368,366,-1,363,366,364,-1,364,366,362,-1,362,366,369,-1,369,373,371,-1,369,371,367,-1,367,371,368,-1,368,371,372,-1,368,372,366,-1,366,372,370,-1,366,370,369,-1,369,370,373,-1,373,377,380,-1,373,380,375,-1,373,375,371,-1,371,375,372,-1,372,375,376,-1,372,376,374,-1,372,374,370,-1,370,374,379,-1,373,370,379,-1,373,379,377,-1,377,379,383,-1,377,383,381,-1,377,381,384,-1,377,384,380,-1,381,383,389,-1,381,389,388,-1,381,388,387,-1,381,387,386,-1,381,386,385,-1,381,385,384,-1,376,375,374,-1,378,379,374,-1,378,374,375,-1,378,375,380,-1,382,386,387,-1,382,387,388,-1,382,388,389,-1,382,389,383,-1,382,383,379,-1,382,379,378,-1,382,378,380,-1,382,380,384,-1,382,384,385,-1,382,385,386,-1}, 2780);
IndexedFaceSet141.setCreaseAngle(3.14);
Coordinate& Coordinate142 =  Coordinate();
Coordinate142.setDEF(CString("Joe_SkinCoord"));
Coordinate142.setPoint(new float[]{0,1.77,0,0,1.665,0.09,-0.033,1.62,0.087,0.033,1.62,0.087,0,1.55,0.097,-0.077,1.64,-0.01,-0.0527,1.58,0.015,0.077,1.64,-0.01,0.0527,1.58,0.015,0,1.625,-0.0925,-0.03,1.46,0.035,0,1.44,0.03,0.03,1.46,0.035,-0.1135,1.318,0.095,0.1135,1.318,0.095,0,1.25,0.113,-0.087,1.19,0.09,-0.0935,1.03,0.075,0.087,1.19,0.09,0.0935,1.03,0.075,-0.1425,1.065,0.0033,-0.15,0.9,-0.01,0.1425,1.065,0.0033,0.15,0.9,-0.01,0,1.53,-0.084,0.0049,1.1908,-0.1113,-0.0773,1.019,-0.12,0.0773,1.019,-0.12,0.005,1.0915,-0.1091,-0.178,1.4825,-0.0625,-0.17,1.38,0.007,-0.1884,0.8676,-0.036,-0.16,1.38,-0.127,-0.2,1.1388,-0.08,-0.244,1.1388,-0.04,-0.165,1.1388,-0.04,-0.23,1.133,-0.055,-0.1977,0.8169,-0.0177,-0.1941,0.6772,-0.0423,-0.2117,0.8562,-0.0584,-0.1929,0.789,-0.1064,0.175,1.4825,-0.06,0.17,1.38,0.007,0.1901,0.8645,-0.0415,0.16,1.38,-0.125,0.2,1.1388,-0.08,0.165,1.1388,-0.04,0.244,1.1388,-0.04,0.23,1.133,-0.055,0.2009,0.8139,-0.0237,0.2056,0.6743,-0.0482,0.2142,0.8529,-0.0648,0.1929,0.786,-0.1122,-0.1,0.4913,-0.03,-0.17,0.466,0,-0.05,0.466,0,-0.165,0.01,0.12,-0.15,0.07,0,-0.085,0.086,0.0125,-0.09,0.056,0.0125,-0.115,0.02,0.122,-0.115,0.04,-0.055,-0.11,0.011,0.19,0.0993,0.4881,-0.0309,0.17,0.466,0,0.05,0.4867,0,0.165,0.01,0.12,0.15,0.07,0,0.085,0.086,0.0125,0.09,0.056,0.0125,0.115,0.02,0.122,0.115,0.04,-0.055,0.11,0.011,0.19,0,0.875,0,-0.0646,1.5149,-0.038,0.0646,1.5149,-0.038,0,1.07225,0.09,-0.11,1.427,-0.1375,-0.235,1.42,-0.0625,0.11,1.427,-0.1375,0.235,1.42,-0.0625,0,1.41,-0.145,0,0.925,0.08,-0.087,1.19,-0.09,0.087,1.19,-0.09,0.172,1.32,-0.03,-0.172,1.32,-0.03,0.15,1.23,-0.015,-0.15,1.23,-0.015,0.079,0.92,-0.14,0.1,0.9,0.077,-0.079,0.92,-0.14,-0.1,0.9,0.075,0,0.87,0,0.171,0.65,0,0.02,0.65,0,0.1,0.65,-0.08,0.1,0.65,0.07,-0.171,0.65,0,-0.02,0.65,0,-0.1,0.65,-0.08,-0.1,0.65,0.07,0.25,1.27,-0.04,0.17,1.27,-0.04,0.2,1.27,-0.09,0.2,1.27,0.02,0.244,1.1388,-0.04,0.165,1.1388,-0.04,0.2,1.1388,-0.08,0.2,1.1388,-0.013,0.225,1,-0.01,0.225,1,-0.07,0.185,1,-0.01,0.185,1,-0.07,0.2,1.1388,-0.04,0.225,0.92,-0.04,0.175,0.92,-0.04,0.2,0.92,-0.065,0.2,0.92,-0.015,0.225,0.89,-0.04,0.175,0.89,-0.04,0.2,0.89,-0.065,0.2,0.89,-0.015,0.218,0.86,-0.04,0.184,0.86,-0.04,0.2,0.87,-0.07,0.2,0.87,0,0.21,0.85,0,0.1854,0.85,0,0.212,0.84,-0.015,0.183,0.84,-0.015,0.213,0.835,-0.04,0.19,0.835,-0.04,0.211,0.835,-0.065,0.192,0.835,-0.065,0.208,0.84,-0.085,0.19,0.84,-0.085,0.2,0.84,-0.095,0.215,0.82,0,0.193,0.815,0.005,0.198,0.8,0.012,0.21,0.82,0.03,0.19,0.82,0.03,0.2,0.835,0.039,0.212,0.8,0.05,0.188,0.8,0.05,0.2,0.807,0.057,0.2,0.793,0.035,0.2,0.774,0.076,0.212,0.78,0.07,0.188,0.78,0.07,0.2,0.785,0.075,0.2,0.77,0.062,0.215,0.793,-0.015,0.187,0.793,-0.015,0.2,0.793,-0.005,0.215,0.788,-0.04,0.187,0.788,-0.04,0.215,0.793,-0.065,0.187,0.793,-0.065,0.21,0.79,-0.085,0.19,0.79,-0.085,0.2,0.79,-0.095,0.19,0.77,-0.0275,0.19,0.77,-0.0525,0.19,0.78,-0.0775,0.212,0.745,-0.015,0.188,0.745,-0.02,0.2,0.745,-0.0255,0.2,0.745,-0.0045,0.211,0.72,-0.015,0.189,0.72,-0.015,0.2,0.72,-0.0252,0.2,0.72,-0.0048,0.21,0.695,-0.015,0.19,0.695,-0.015,0.2,0.695,-0.025,0.2,0.695,-0.005,0.2,0.685,-0.015,0.215,0.74,-0.04,0.185,0.74,-0.04,0.2,0.74,-0.055,0.2,0.74,-0.025,0.21,0.7142,-0.04,0.19,0.7142,-0.04,0.2,0.7142,-0.053,0.2,0.7142,-0.027,0.21,0.68,-0.04,0.19,0.68,-0.04,0.2,0.68,-0.05,0.2,0.68,-0.03,0.2,0.67,-0.04,0.212,0.74,-0.065,0.188,0.74,-0.065,0.2,0.74,-0.0756,0.2,0.74,-0.0542,0.21,0.7177,-0.065,0.19,0.7177,-0.065,0.2,0.7177,-0.0751,0.2,0.7177,-0.0549,0.21,0.695,-0.065,0.19,0.695,-0.065,0.2,0.695,-0.075,0.2,0.695,-0.055,0.2,0.685,-0.065,0.211,0.755,-0.085,0.189,0.755,-0.085,0.2,0.755,-0.0952,0.2,0.755,-0.0748,0.21,0.735,-0.085,0.19,0.735,-0.085,0.2,0.735,-0.0951,0.2,0.735,-0.0749,0.21,0.72,-0.085,0.19,0.72,-0.085,0.2,0.72,-0.095,0.2,0.72,-0.075,0.2,0.71,-0.085,-0.23,1.23,-0.04,-0.16,1.23,-0.04,-0.2,1.235,-0.105,-0.2,1.255,0.02,-0.244,1.1388,-0.04,-0.165,1.1388,-0.04,-0.2,1.1388,-0.08,-0.2,1.1388,0.013,-0.225,1,-0.01,-0.225,1,-0.07,-0.185,1,-0.01,-0.185,1,-0.07,-0.2,1.1388,-0.04,-0.225,0.92,-0.04,-0.175,0.92,-0.04,-0.2,0.92,-0.065,-0.2,0.92,-0.015,-0.225,0.89,-0.04,-0.175,0.89,-0.04,-0.2,0.89,-0.065,-0.2,0.89,-0.015,-0.218,0.86,-0.04,-0.184,0.86,-0.04,-0.2,0.87,-0.07,-0.2,0.87,0,-0.21,0.85,0,-0.1854,0.85,0,-0.212,0.84,-0.015,-0.183,0.84,-0.015,-0.213,0.835,-0.04,-0.19,0.835,-0.04,-0.211,0.835,-0.065,-0.192,0.835,-0.065,-0.208,0.84,-0.085,-0.19,0.84,-0.085,-0.2,0.84,-0.095,-0.215,0.82,0,-0.193,0.815,0.005,-0.198,0.8,0.012,-0.21,0.82,0.03,-0.19,0.82,0.03,-0.2,0.835,0.039,-0.212,0.8,0.05,-0.188,0.8,0.05,-0.2,0.807,0.057,-0.2,0.793,0.035,-0.2,0.774,0.076,-0.212,0.78,0.07,-0.188,0.78,0.07,-0.2,0.785,0.075,-0.2,0.77,0.062,-0.215,0.793,-0.015,-0.187,0.793,-0.015,-0.2,0.793,-0.005,-0.215,0.788,-0.04,-0.187,0.788,-0.04,-0.215,0.793,-0.065,-0.187,0.793,-0.065,-0.21,0.79,-0.085,-0.19,0.79,-0.085,-0.2,0.79,-0.095,-0.19,0.77,-0.0275,-0.19,0.77,-0.0525,-0.19,0.78,-0.0775,-0.212,0.745,-0.015,-0.188,0.745,-0.02,-0.2,0.745,-0.0255,-0.2,0.745,-0.0045,-0.211,0.72,-0.015,-0.189,0.72,-0.015,-0.2,0.72,-0.0252,-0.2,0.72,-0.0048,-0.21,0.695,-0.015,-0.19,0.695,-0.015,-0.2,0.695,-0.025,-0.2,0.695,-0.005,-0.2,0.685,-0.015,-0.215,0.74,-0.04,-0.185,0.74,-0.04,-0.2,0.74,-0.055,-0.2,0.74,-0.025,-0.21,0.7142,-0.04,-0.19,0.7142,-0.04,-0.2,0.7142,-0.053,-0.2,0.7142,-0.027,-0.21,0.68,-0.04,-0.19,0.68,-0.04,-0.2,0.68,-0.05,-0.2,0.68,-0.03,-0.2,0.67,-0.04,-0.212,0.74,-0.065,-0.188,0.74,-0.065,-0.2,0.74,-0.0756,-0.2,0.74,-0.0542,-0.21,0.7177,-0.065,-0.19,0.7177,-0.065,-0.2,0.7177,-0.0751,-0.2,0.7177,-0.0549,-0.21,0.695,-0.065,-0.19,0.695,-0.065,-0.2,0.695,-0.075,-0.2,0.695,-0.055,-0.2,0.685,-0.065,-0.211,0.755,-0.085,-0.189,0.755,-0.085,-0.2,0.755,-0.0952,-0.2,0.755,-0.0748,-0.21,0.735,-0.085,-0.19,0.735,-0.085,-0.2,0.735,-0.0951,-0.2,0.735,-0.0749,-0.21,0.72,-0.085,-0.19,0.72,-0.085,-0.2,0.72,-0.095,-0.2,0.72,-0.075,-0.2,0.71,-0.085,0.115,0.466,0.06,0.115,0.466,-0.055,0.15,0.466,0,0.05,0.466,0,0.17,0.3,0,0.06,0.3,0,0.1,0.3,-0.05,0.1,0.3,0.05,0.15,0.07,0,0.085,0.086,0.0125,0.115,0.069,-0.045,0.117,0.0975,0.0615,0.1375,0.006,-0.03,0.095,0.006,-0.03,0.115,0.015,-0.045,0.115,0.06,0.1,0.115,0,0.07,0.165,0,0.07,0.095,0,0.07,0.115,0.04,0.13,0.125,0,0.12,0.165,0,0.12,0.087,0,0.122,0.09,0.012,0.188,0.11,0.011,0.19,0.128,0.011,0.185,0.142,0.011,0.178,0.154,0.01,0.168,-0.115,0.466,0.06,-0.115,0.466,-0.055,-0.17,0.466,0,-0.05,0.466,0,-0.17,0.3,0,-0.06,0.3,0,-0.1,0.3,-0.05,-0.1,0.3,0.05,-0.15,0.07,0,-0.085,0.086,0.0125,-0.115,0.069,-0.045,-0.117,0.0975,0.0615,-0.1375,0.006,-0.03,-0.095,0.006,-0.03,-0.095,0.006,-0.03,-0.115,0.06,0.1,-0.115,0,0.07,-0.165,0,0.07,-0.095,0,0.07,-0.115,0.04,0.13,-0.125,0,0.12,-0.165,0,0.12,-0.087,0,0.122,-0.09,0.012,0.188,-0.11,0.011,0.19,-0.128,0.011,0.185,-0.142,0.011,0.178,-0.154,0.01,0.168}, 1170);
IndexedFaceSet141.setCoord(&Coordinate142);

TextureCoordinate& TextureCoordinate143 =  TextureCoordinate();
TextureCoordinate143.setPoint(new float[]{0,0,0.5,0.5,0.5,0,0,0.5}, 8);
IndexedFaceSet141.setTexCoord(&TextureCoordinate143);

Shape136.setGeometry(&IndexedFaceSet141);

HAnimHumanoid30.setSkin(&Shape136);

Coordinate& Coordinate144 =  Coordinate();
Coordinate144.setUSE(CString("Joe_SkinCoord"));
HAnimHumanoid30.setSkinCoord(&Coordinate144);

HAnimJoint& HAnimJoint145 =  HAnimJoint();
HAnimJoint145.setUSE(CString("Joe_humanoid_root"));
HAnimHumanoid30.setJoints(&HAnimJoint145);

HAnimJoint& HAnimJoint146 =  HAnimJoint();
HAnimJoint146.setUSE(CString("Joe_sacroiliac"));
HAnimHumanoid30.setJoints(&HAnimJoint146);

HAnimJoint& HAnimJoint147 =  HAnimJoint();
HAnimJoint147.setUSE(CString("Joe_skullbase"));
HAnimHumanoid30.setJoints(&HAnimJoint147);

HAnimJoint& HAnimJoint148 =  HAnimJoint();
HAnimJoint148.setUSE(CString("Joe_temporomandibular"));
HAnimHumanoid30.setJoints(&HAnimJoint148);

HAnimJoint& HAnimJoint149 =  HAnimJoint();
HAnimJoint149.setUSE(CString("Joe_vc1"));
HAnimHumanoid30.setJoints(&HAnimJoint149);

HAnimJoint& HAnimJoint150 =  HAnimJoint();
HAnimJoint150.setUSE(CString("Joe_vc2"));
HAnimHumanoid30.setJoints(&HAnimJoint150);

HAnimJoint& HAnimJoint151 =  HAnimJoint();
HAnimJoint151.setUSE(CString("Joe_vc3"));
HAnimHumanoid30.setJoints(&HAnimJoint151);

HAnimJoint& HAnimJoint152 =  HAnimJoint();
HAnimJoint152.setUSE(CString("Joe_vc4"));
HAnimHumanoid30.setJoints(&HAnimJoint152);

HAnimJoint& HAnimJoint153 =  HAnimJoint();
HAnimJoint153.setUSE(CString("Joe_vc5"));
HAnimHumanoid30.setJoints(&HAnimJoint153);

HAnimJoint& HAnimJoint154 =  HAnimJoint();
HAnimJoint154.setUSE(CString("Joe_vc6"));
HAnimHumanoid30.setJoints(&HAnimJoint154);

HAnimJoint& HAnimJoint155 =  HAnimJoint();
HAnimJoint155.setUSE(CString("Joe_vc7"));
HAnimHumanoid30.setJoints(&HAnimJoint155);

HAnimJoint& HAnimJoint156 =  HAnimJoint();
HAnimJoint156.setUSE(CString("Joe_vl1"));
HAnimHumanoid30.setJoints(&HAnimJoint156);

HAnimJoint& HAnimJoint157 =  HAnimJoint();
HAnimJoint157.setUSE(CString("Joe_vl2"));
HAnimHumanoid30.setJoints(&HAnimJoint157);

HAnimJoint& HAnimJoint158 =  HAnimJoint();
HAnimJoint158.setUSE(CString("Joe_vl3"));
HAnimHumanoid30.setJoints(&HAnimJoint158);

HAnimJoint& HAnimJoint159 =  HAnimJoint();
HAnimJoint159.setUSE(CString("Joe_vl4"));
HAnimHumanoid30.setJoints(&HAnimJoint159);

HAnimJoint& HAnimJoint160 =  HAnimJoint();
HAnimJoint160.setUSE(CString("Joe_vl5"));
HAnimHumanoid30.setJoints(&HAnimJoint160);

HAnimJoint& HAnimJoint161 =  HAnimJoint();
HAnimJoint161.setUSE(CString("Joe_vt1"));
HAnimHumanoid30.setJoints(&HAnimJoint161);

HAnimJoint& HAnimJoint162 =  HAnimJoint();
HAnimJoint162.setUSE(CString("Joe_vt10"));
HAnimHumanoid30.setJoints(&HAnimJoint162);

HAnimJoint& HAnimJoint163 =  HAnimJoint();
HAnimJoint163.setUSE(CString("Joe_vt11"));
HAnimHumanoid30.setJoints(&HAnimJoint163);

HAnimJoint& HAnimJoint164 =  HAnimJoint();
HAnimJoint164.setUSE(CString("Joe_vt12"));
HAnimHumanoid30.setJoints(&HAnimJoint164);

HAnimJoint& HAnimJoint165 =  HAnimJoint();
HAnimJoint165.setUSE(CString("Joe_vt2"));
HAnimHumanoid30.setJoints(&HAnimJoint165);

HAnimJoint& HAnimJoint166 =  HAnimJoint();
HAnimJoint166.setUSE(CString("Joe_vt3"));
HAnimHumanoid30.setJoints(&HAnimJoint166);

HAnimJoint& HAnimJoint167 =  HAnimJoint();
HAnimJoint167.setUSE(CString("Joe_vt4"));
HAnimHumanoid30.setJoints(&HAnimJoint167);

HAnimJoint& HAnimJoint168 =  HAnimJoint();
HAnimJoint168.setUSE(CString("Joe_vt5"));
HAnimHumanoid30.setJoints(&HAnimJoint168);

HAnimJoint& HAnimJoint169 =  HAnimJoint();
HAnimJoint169.setUSE(CString("Joe_vt6"));
HAnimHumanoid30.setJoints(&HAnimJoint169);

HAnimJoint& HAnimJoint170 =  HAnimJoint();
HAnimJoint170.setUSE(CString("Joe_vt7"));
HAnimHumanoid30.setJoints(&HAnimJoint170);

HAnimJoint& HAnimJoint171 =  HAnimJoint();
HAnimJoint171.setUSE(CString("Joe_vt8"));
HAnimHumanoid30.setJoints(&HAnimJoint171);

HAnimJoint& HAnimJoint172 =  HAnimJoint();
HAnimJoint172.setUSE(CString("Joe_vt9"));
HAnimHumanoid30.setJoints(&HAnimJoint172);

HAnimJoint& HAnimJoint173 =  HAnimJoint();
HAnimJoint173.setUSE(CString("Joe_l_acromioclavicular"));
HAnimHumanoid30.setJoints(&HAnimJoint173);

HAnimJoint& HAnimJoint174 =  HAnimJoint();
HAnimJoint174.setUSE(CString("Joe_r_acromioclavicular"));
HAnimHumanoid30.setJoints(&HAnimJoint174);

HAnimJoint& HAnimJoint175 =  HAnimJoint();
HAnimJoint175.setUSE(CString("Joe_l_carpal_distal_interphalangeal_2"));
HAnimHumanoid30.setJoints(&HAnimJoint175);

HAnimJoint& HAnimJoint176 =  HAnimJoint();
HAnimJoint176.setUSE(CString("Joe_r_carpal_distal_interphalangeal_2"));
HAnimHumanoid30.setJoints(&HAnimJoint176);

HAnimJoint& HAnimJoint177 =  HAnimJoint();
HAnimJoint177.setUSE(CString("Joe_l_carpal_distal_interphalangeal_3"));
HAnimHumanoid30.setJoints(&HAnimJoint177);

HAnimJoint& HAnimJoint178 =  HAnimJoint();
HAnimJoint178.setUSE(CString("Joe_r_carpal_distal_interphalangeal_3"));
HAnimHumanoid30.setJoints(&HAnimJoint178);

HAnimJoint& HAnimJoint179 =  HAnimJoint();
HAnimJoint179.setUSE(CString("Joe_l_carpal_distal_interphalangeal_4"));
HAnimHumanoid30.setJoints(&HAnimJoint179);

HAnimJoint& HAnimJoint180 =  HAnimJoint();
HAnimJoint180.setUSE(CString("Joe_r_carpal_distal_interphalangeal_4"));
HAnimHumanoid30.setJoints(&HAnimJoint180);

HAnimJoint& HAnimJoint181 =  HAnimJoint();
HAnimJoint181.setUSE(CString("Joe_l_carpal_distal_interphalangeal_5"));
HAnimHumanoid30.setJoints(&HAnimJoint181);

HAnimJoint& HAnimJoint182 =  HAnimJoint();
HAnimJoint182.setUSE(CString("Joe_r_carpal_distal_interphalangeal_5"));
HAnimHumanoid30.setJoints(&HAnimJoint182);

HAnimJoint& HAnimJoint183 =  HAnimJoint();
HAnimJoint183.setUSE(CString("Joe_l_carpal_interphalangeal_1"));
HAnimHumanoid30.setJoints(&HAnimJoint183);

HAnimJoint& HAnimJoint184 =  HAnimJoint();
HAnimJoint184.setUSE(CString("Joe_r_carpal_interphalangeal_1"));
HAnimHumanoid30.setJoints(&HAnimJoint184);

HAnimJoint& HAnimJoint185 =  HAnimJoint();
HAnimJoint185.setUSE(CString("Joe_l_carpal_proximal_interphalangeal_2"));
HAnimHumanoid30.setJoints(&HAnimJoint185);

HAnimJoint& HAnimJoint186 =  HAnimJoint();
HAnimJoint186.setUSE(CString("Joe_r_carpal_proximal_interphalangeal_2"));
HAnimHumanoid30.setJoints(&HAnimJoint186);

HAnimJoint& HAnimJoint187 =  HAnimJoint();
HAnimJoint187.setUSE(CString("Joe_l_carpal_proximal_interphalangeal_3"));
HAnimHumanoid30.setJoints(&HAnimJoint187);

HAnimJoint& HAnimJoint188 =  HAnimJoint();
HAnimJoint188.setUSE(CString("Joe_r_carpal_proximal_interphalangeal_3"));
HAnimHumanoid30.setJoints(&HAnimJoint188);

HAnimJoint& HAnimJoint189 =  HAnimJoint();
HAnimJoint189.setUSE(CString("Joe_l_carpal_proximal_interphalangeal_4"));
HAnimHumanoid30.setJoints(&HAnimJoint189);

HAnimJoint& HAnimJoint190 =  HAnimJoint();
HAnimJoint190.setUSE(CString("Joe_r_carpal_proximal_interphalangeal_4"));
HAnimHumanoid30.setJoints(&HAnimJoint190);

HAnimJoint& HAnimJoint191 =  HAnimJoint();
HAnimJoint191.setUSE(CString("Joe_l_carpal_proximal_interphalangeal_5"));
HAnimHumanoid30.setJoints(&HAnimJoint191);

HAnimJoint& HAnimJoint192 =  HAnimJoint();
HAnimJoint192.setUSE(CString("Joe_r_carpal_proximal_interphalangeal_5"));
HAnimHumanoid30.setJoints(&HAnimJoint192);

HAnimJoint& HAnimJoint193 =  HAnimJoint();
HAnimJoint193.setUSE(CString("Joe_l_carpometacarpal_1"));
HAnimHumanoid30.setJoints(&HAnimJoint193);

HAnimJoint& HAnimJoint194 =  HAnimJoint();
HAnimJoint194.setUSE(CString("Joe_r_carpometacarpal_1"));
HAnimHumanoid30.setJoints(&HAnimJoint194);

HAnimJoint& HAnimJoint195 =  HAnimJoint();
HAnimJoint195.setUSE(CString("Joe_l_carpometacarpal_2"));
HAnimHumanoid30.setJoints(&HAnimJoint195);

HAnimJoint& HAnimJoint196 =  HAnimJoint();
HAnimJoint196.setUSE(CString("Joe_r_carpometacarpal_2"));
HAnimHumanoid30.setJoints(&HAnimJoint196);

HAnimJoint& HAnimJoint197 =  HAnimJoint();
HAnimJoint197.setUSE(CString("Joe_l_carpometacarpal_3"));
HAnimHumanoid30.setJoints(&HAnimJoint197);

HAnimJoint& HAnimJoint198 =  HAnimJoint();
HAnimJoint198.setUSE(CString("Joe_r_carpometacarpal_3"));
HAnimHumanoid30.setJoints(&HAnimJoint198);

HAnimJoint& HAnimJoint199 =  HAnimJoint();
HAnimJoint199.setUSE(CString("Joe_l_carpometacarpal_4"));
HAnimHumanoid30.setJoints(&HAnimJoint199);

HAnimJoint& HAnimJoint200 =  HAnimJoint();
HAnimJoint200.setUSE(CString("Joe_r_carpometacarpal_4"));
HAnimHumanoid30.setJoints(&HAnimJoint200);

HAnimJoint& HAnimJoint201 =  HAnimJoint();
HAnimJoint201.setUSE(CString("Joe_l_carpometacarpal_5"));
HAnimHumanoid30.setJoints(&HAnimJoint201);

HAnimJoint& HAnimJoint202 =  HAnimJoint();
HAnimJoint202.setUSE(CString("Joe_r_carpometacarpal_5"));
HAnimHumanoid30.setJoints(&HAnimJoint202);

HAnimJoint& HAnimJoint203 =  HAnimJoint();
HAnimJoint203.setUSE(CString("Joe_l_elbow"));
HAnimHumanoid30.setJoints(&HAnimJoint203);

HAnimJoint& HAnimJoint204 =  HAnimJoint();
HAnimJoint204.setUSE(CString("Joe_r_elbow"));
HAnimHumanoid30.setJoints(&HAnimJoint204);

HAnimJoint& HAnimJoint205 =  HAnimJoint();
HAnimJoint205.setUSE(CString("Joe_l_eyeball_joint"));
HAnimHumanoid30.setJoints(&HAnimJoint205);

HAnimJoint& HAnimJoint206 =  HAnimJoint();
HAnimJoint206.setUSE(CString("Joe_r_eyeball_joint"));
HAnimHumanoid30.setJoints(&HAnimJoint206);

HAnimJoint& HAnimJoint207 =  HAnimJoint();
HAnimJoint207.setUSE(CString("Joe_l_eyebrow_joint"));
HAnimHumanoid30.setJoints(&HAnimJoint207);

HAnimJoint& HAnimJoint208 =  HAnimJoint();
HAnimJoint208.setUSE(CString("Joe_r_eyebrow_joint"));
HAnimHumanoid30.setJoints(&HAnimJoint208);

HAnimJoint& HAnimJoint209 =  HAnimJoint();
HAnimJoint209.setUSE(CString("Joe_l_eyelid_joint"));
HAnimHumanoid30.setJoints(&HAnimJoint209);

HAnimJoint& HAnimJoint210 =  HAnimJoint();
HAnimJoint210.setUSE(CString("Joe_r_eyelid_joint"));
HAnimHumanoid30.setJoints(&HAnimJoint210);

HAnimJoint& HAnimJoint211 =  HAnimJoint();
HAnimJoint211.setUSE(CString("Joe_l_hip"));
HAnimHumanoid30.setJoints(&HAnimJoint211);

HAnimJoint& HAnimJoint212 =  HAnimJoint();
HAnimJoint212.setUSE(CString("Joe_r_hip"));
HAnimHumanoid30.setJoints(&HAnimJoint212);

HAnimJoint& HAnimJoint213 =  HAnimJoint();
HAnimJoint213.setUSE(CString("Joe_l_knee"));
HAnimHumanoid30.setJoints(&HAnimJoint213);

HAnimJoint& HAnimJoint214 =  HAnimJoint();
HAnimJoint214.setUSE(CString("Joe_r_knee"));
HAnimHumanoid30.setJoints(&HAnimJoint214);

HAnimJoint& HAnimJoint215 =  HAnimJoint();
HAnimJoint215.setUSE(CString("Joe_l_metacarpophalangeal_1"));
HAnimHumanoid30.setJoints(&HAnimJoint215);

HAnimJoint& HAnimJoint216 =  HAnimJoint();
HAnimJoint216.setUSE(CString("Joe_r_metacarpophalangeal_1"));
HAnimHumanoid30.setJoints(&HAnimJoint216);

HAnimJoint& HAnimJoint217 =  HAnimJoint();
HAnimJoint217.setUSE(CString("Joe_l_metacarpophalangeal_2"));
HAnimHumanoid30.setJoints(&HAnimJoint217);

HAnimJoint& HAnimJoint218 =  HAnimJoint();
HAnimJoint218.setUSE(CString("Joe_r_metacarpophalangeal_2"));
HAnimHumanoid30.setJoints(&HAnimJoint218);

HAnimJoint& HAnimJoint219 =  HAnimJoint();
HAnimJoint219.setUSE(CString("Joe_l_metacarpophalangeal_3"));
HAnimHumanoid30.setJoints(&HAnimJoint219);

HAnimJoint& HAnimJoint220 =  HAnimJoint();
HAnimJoint220.setUSE(CString("Joe_r_metacarpophalangeal_3"));
HAnimHumanoid30.setJoints(&HAnimJoint220);

HAnimJoint& HAnimJoint221 =  HAnimJoint();
HAnimJoint221.setUSE(CString("Joe_l_metacarpophalangeal_4"));
HAnimHumanoid30.setJoints(&HAnimJoint221);

HAnimJoint& HAnimJoint222 =  HAnimJoint();
HAnimJoint222.setUSE(CString("Joe_r_metacarpophalangeal_4"));
HAnimHumanoid30.setJoints(&HAnimJoint222);

HAnimJoint& HAnimJoint223 =  HAnimJoint();
HAnimJoint223.setUSE(CString("Joe_l_metacarpophalangeal_5"));
HAnimHumanoid30.setJoints(&HAnimJoint223);

HAnimJoint& HAnimJoint224 =  HAnimJoint();
HAnimJoint224.setUSE(CString("Joe_r_metacarpophalangeal_5"));
HAnimHumanoid30.setJoints(&HAnimJoint224);

HAnimJoint& HAnimJoint225 =  HAnimJoint();
HAnimJoint225.setUSE(CString("Joe_l_metatarsophalangeal_2"));
HAnimHumanoid30.setJoints(&HAnimJoint225);

HAnimJoint& HAnimJoint226 =  HAnimJoint();
HAnimJoint226.setUSE(CString("Joe_r_metatarsophalangeal_2"));
HAnimHumanoid30.setJoints(&HAnimJoint226);

HAnimJoint& HAnimJoint227 =  HAnimJoint();
HAnimJoint227.setUSE(CString("Joe_l_radiocarpal"));
HAnimHumanoid30.setJoints(&HAnimJoint227);

HAnimJoint& HAnimJoint228 =  HAnimJoint();
HAnimJoint228.setUSE(CString("Joe_r_radiocarpal"));
HAnimHumanoid30.setJoints(&HAnimJoint228);

HAnimJoint& HAnimJoint229 =  HAnimJoint();
HAnimJoint229.setUSE(CString("Joe_l_shoulder"));
HAnimHumanoid30.setJoints(&HAnimJoint229);

HAnimJoint& HAnimJoint230 =  HAnimJoint();
HAnimJoint230.setUSE(CString("Joe_r_shoulder"));
HAnimHumanoid30.setJoints(&HAnimJoint230);

HAnimJoint& HAnimJoint231 =  HAnimJoint();
HAnimJoint231.setUSE(CString("Joe_l_sternoclavicular"));
HAnimHumanoid30.setJoints(&HAnimJoint231);

HAnimJoint& HAnimJoint232 =  HAnimJoint();
HAnimJoint232.setUSE(CString("Joe_r_sternoclavicular"));
HAnimHumanoid30.setJoints(&HAnimJoint232);

HAnimJoint& HAnimJoint233 =  HAnimJoint();
HAnimJoint233.setUSE(CString("Joe_l_talocrural"));
HAnimHumanoid30.setJoints(&HAnimJoint233);

HAnimJoint& HAnimJoint234 =  HAnimJoint();
HAnimJoint234.setUSE(CString("Joe_r_talocrural"));
HAnimHumanoid30.setJoints(&HAnimJoint234);

HAnimJoint& HAnimJoint235 =  HAnimJoint();
HAnimJoint235.setUSE(CString("Joe_l_tarsal_distal_interphalangeal_2"));
HAnimHumanoid30.setJoints(&HAnimJoint235);

HAnimJoint& HAnimJoint236 =  HAnimJoint();
HAnimJoint236.setUSE(CString("Joe_r_tarsal_distal_interphalangeal_2"));
HAnimHumanoid30.setJoints(&HAnimJoint236);

HAnimJoint& HAnimJoint237 =  HAnimJoint();
HAnimJoint237.setUSE(CString("Joe_l_tarsometatarsal_2"));
HAnimHumanoid30.setJoints(&HAnimJoint237);

HAnimJoint& HAnimJoint238 =  HAnimJoint();
HAnimJoint238.setUSE(CString("Joe_r_tarsometatarsal_2"));
HAnimHumanoid30.setJoints(&HAnimJoint238);

HAnimSegment& HAnimSegment239 =  HAnimSegment();
HAnimSegment239.setUSE(CString("Joe_sacrum"));
HAnimHumanoid30.setSegments(&HAnimSegment239);

HAnimSite& HAnimSite240 =  HAnimSite();
HAnimSite240.setUSE(CString("Joe_RootFront_view"));
HAnimHumanoid30.setSites(&HAnimSite240);

Group29.addChild(&HAnimHumanoid30);

Scene18.addChild(&Group29);

Group& Group241 =  Group();
TimeSensor& TimeSensor242 =  TimeSensor();
TimeSensor242.setDEF(CString("KickTimer"));
TimeSensor242.setCycleInterval(3.73);
TimeSensor242.setLoop(True);
Group241.addChild(&TimeSensor242);

//Interpolators
OrientationInterpolator& OrientationInterpolator243 =  OrientationInterpolator();
OrientationInterpolator243.setDEF(CString("HumanoidRoot_RotationInterpolator"));
OrientationInterpolator243.setKey(new float[]{0,0.1,0.4,0.6,1}, 5);
OrientationInterpolator243.setKeyValue(new float[]{1,0,0,0.5,1,0,0,0.5,-1,0,0,0.1,-1,0,0,0.5,-1,0,0,0.5}, 20);
Group241.addChild(&OrientationInterpolator243);

PositionInterpolator& PositionInterpolator244 =  PositionInterpolator();
PositionInterpolator244.setDEF(CString("HumanoidRoot_TranslationInterpolator"));
PositionInterpolator244.setKey(new float[]{0,0.2,0.6,1}, 4);
PositionInterpolator244.setKeyValue(new float[]{1,0.3,-1,0.4,-0.04,-0.4,-0.18,0.1,0,-0.2,0.15,0.15}, 12);
Group241.addChild(&PositionInterpolator244);

OrientationInterpolator& OrientationInterpolator245 =  OrientationInterpolator();
OrientationInterpolator245.setDEF(CString("sacroiliac_RotationInterpolator"));
OrientationInterpolator245.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator245.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group241.addChild(&OrientationInterpolator245);

OrientationInterpolator& OrientationInterpolator246 =  OrientationInterpolator();
OrientationInterpolator246.setDEF(CString("l_hip_RotationInterpolator"));
OrientationInterpolator246.setKey(new float[]{0,0.1,0.3,0.45,1}, 5);
OrientationInterpolator246.setKeyValue(new float[]{-1,0,0,1.5,-1,0,0,1,0,0,1,0,1,0,0,0.5,1,0,0,1}, 20);
Group241.addChild(&OrientationInterpolator246);

OrientationInterpolator& OrientationInterpolator247 =  OrientationInterpolator();
OrientationInterpolator247.setDEF(CString("l_knee_RotationInterpolator"));
OrientationInterpolator247.setKey(new float[]{0,0.2,0.35,0.5,1}, 5);
OrientationInterpolator247.setKeyValue(new float[]{1,0,0,1,0,0,1,0,0,0,1,0.2,1,0,1,0.5,1,0,0,1.4}, 20);
Group241.addChild(&OrientationInterpolator247);

OrientationInterpolator& OrientationInterpolator248 =  OrientationInterpolator();
OrientationInterpolator248.setDEF(CString("l_ankle_RotationInterpolator"));
OrientationInterpolator248.setKey(new float[]{0,0.25,1}, 3);
OrientationInterpolator248.setKeyValue(new float[]{-1,0,0,1,0,0,1,0,1,0,0,1}, 12);
Group241.addChild(&OrientationInterpolator248);

OrientationInterpolator& OrientationInterpolator249 =  OrientationInterpolator();
OrientationInterpolator249.setDEF(CString("l_subtalar_RotationInterpolator"));
OrientationInterpolator249.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator249.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group241.addChild(&OrientationInterpolator249);

OrientationInterpolator& OrientationInterpolator250 =  OrientationInterpolator();
OrientationInterpolator250.setDEF(CString("l_midtarsal_RotationInterpolator"));
OrientationInterpolator250.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator250.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group241.addChild(&OrientationInterpolator250);

OrientationInterpolator& OrientationInterpolator251 =  OrientationInterpolator();
OrientationInterpolator251.setDEF(CString("l_metatarsal_RotationInterpolator"));
OrientationInterpolator251.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator251.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group241.addChild(&OrientationInterpolator251);

OrientationInterpolator& OrientationInterpolator252 =  OrientationInterpolator();
OrientationInterpolator252.setDEF(CString("r_hip_RotationInterpolator"));
OrientationInterpolator252.setKey(new float[]{0,0.25,0.5,0.75,1}, 5);
OrientationInterpolator252.setKeyValue(new float[]{1,0,0,1,1,0,0,1,-1,0,0,1,-1,0,0,1,-1,0,0,1}, 20);
Group241.addChild(&OrientationInterpolator252);

OrientationInterpolator& OrientationInterpolator253 =  OrientationInterpolator();
OrientationInterpolator253.setDEF(CString("r_knee_RotationInterpolator"));
OrientationInterpolator253.setKey(new float[]{0,0.25,0.5,0.75,1}, 5);
OrientationInterpolator253.setKeyValue(new float[]{1,0,0,0.1,0,0,1,0,1,0,0,1,1,0,0,1,1,0,0,1.5}, 20);
Group241.addChild(&OrientationInterpolator253);

OrientationInterpolator& OrientationInterpolator254 =  OrientationInterpolator();
OrientationInterpolator254.setDEF(CString("r_ankle_RotationInterpolator"));
OrientationInterpolator254.setKey(new float[]{0,0.25,0.5,0.75,1}, 5);
OrientationInterpolator254.setKeyValue(new float[]{-1,0,0,1,0,0,1,0,1,0,0,1,1,0,0,1,1,0,0,0.5}, 20);
Group241.addChild(&OrientationInterpolator254);

OrientationInterpolator& OrientationInterpolator255 =  OrientationInterpolator();
OrientationInterpolator255.setDEF(CString("r_subtalar_RotationInterpolator"));
OrientationInterpolator255.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator255.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group241.addChild(&OrientationInterpolator255);

OrientationInterpolator& OrientationInterpolator256 =  OrientationInterpolator();
OrientationInterpolator256.setDEF(CString("r_midtarsal_RotationInterpolator"));
OrientationInterpolator256.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator256.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group241.addChild(&OrientationInterpolator256);

OrientationInterpolator& OrientationInterpolator257 =  OrientationInterpolator();
OrientationInterpolator257.setDEF(CString("r_metatarsal_RotationInterpolator"));
OrientationInterpolator257.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator257.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group241.addChild(&OrientationInterpolator257);

OrientationInterpolator& OrientationInterpolator258 =  OrientationInterpolator();
OrientationInterpolator258.setDEF(CString("vl5_RotationInterpolator"));
OrientationInterpolator258.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator258.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group241.addChild(&OrientationInterpolator258);

OrientationInterpolator& OrientationInterpolator259 =  OrientationInterpolator();
OrientationInterpolator259.setDEF(CString("vl4_RotationInterpolator"));
OrientationInterpolator259.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator259.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group241.addChild(&OrientationInterpolator259);

OrientationInterpolator& OrientationInterpolator260 =  OrientationInterpolator();
OrientationInterpolator260.setDEF(CString("vl3_RotationInterpolator"));
OrientationInterpolator260.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator260.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group241.addChild(&OrientationInterpolator260);

OrientationInterpolator& OrientationInterpolator261 =  OrientationInterpolator();
OrientationInterpolator261.setDEF(CString("vl2_RotationInterpolator"));
OrientationInterpolator261.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator261.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group241.addChild(&OrientationInterpolator261);

OrientationInterpolator& OrientationInterpolator262 =  OrientationInterpolator();
OrientationInterpolator262.setDEF(CString("vl1_RotationInterpolator"));
OrientationInterpolator262.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator262.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group241.addChild(&OrientationInterpolator262);

OrientationInterpolator& OrientationInterpolator263 =  OrientationInterpolator();
OrientationInterpolator263.setDEF(CString("vt12_RotationInterpolator"));
OrientationInterpolator263.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator263.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group241.addChild(&OrientationInterpolator263);

OrientationInterpolator& OrientationInterpolator264 =  OrientationInterpolator();
OrientationInterpolator264.setDEF(CString("vt11_RotationInterpolator"));
OrientationInterpolator264.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator264.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group241.addChild(&OrientationInterpolator264);

OrientationInterpolator& OrientationInterpolator265 =  OrientationInterpolator();
OrientationInterpolator265.setDEF(CString("vt10_RotationInterpolator"));
OrientationInterpolator265.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator265.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group241.addChild(&OrientationInterpolator265);

OrientationInterpolator& OrientationInterpolator266 =  OrientationInterpolator();
OrientationInterpolator266.setDEF(CString("vt9_RotationInterpolator"));
OrientationInterpolator266.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator266.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group241.addChild(&OrientationInterpolator266);

OrientationInterpolator& OrientationInterpolator267 =  OrientationInterpolator();
OrientationInterpolator267.setDEF(CString("vt8_RotationInterpolator"));
OrientationInterpolator267.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator267.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group241.addChild(&OrientationInterpolator267);

OrientationInterpolator& OrientationInterpolator268 =  OrientationInterpolator();
OrientationInterpolator268.setDEF(CString("vt7_RotationInterpolator"));
OrientationInterpolator268.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator268.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group241.addChild(&OrientationInterpolator268);

OrientationInterpolator& OrientationInterpolator269 =  OrientationInterpolator();
OrientationInterpolator269.setDEF(CString("vt6_RotationInterpolator"));
OrientationInterpolator269.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator269.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group241.addChild(&OrientationInterpolator269);

OrientationInterpolator& OrientationInterpolator270 =  OrientationInterpolator();
OrientationInterpolator270.setDEF(CString("vt5_RotationInterpolator"));
OrientationInterpolator270.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator270.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group241.addChild(&OrientationInterpolator270);

OrientationInterpolator& OrientationInterpolator271 =  OrientationInterpolator();
OrientationInterpolator271.setDEF(CString("vt4_RotationInterpolator"));
OrientationInterpolator271.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator271.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group241.addChild(&OrientationInterpolator271);

OrientationInterpolator& OrientationInterpolator272 =  OrientationInterpolator();
OrientationInterpolator272.setDEF(CString("vt3_RotationInterpolator"));
OrientationInterpolator272.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator272.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group241.addChild(&OrientationInterpolator272);

OrientationInterpolator& OrientationInterpolator273 =  OrientationInterpolator();
OrientationInterpolator273.setDEF(CString("vt2_RotationInterpolator"));
OrientationInterpolator273.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator273.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group241.addChild(&OrientationInterpolator273);

OrientationInterpolator& OrientationInterpolator274 =  OrientationInterpolator();
OrientationInterpolator274.setDEF(CString("vt1_RotationInterpolator"));
OrientationInterpolator274.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator274.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group241.addChild(&OrientationInterpolator274);

OrientationInterpolator& OrientationInterpolator275 =  OrientationInterpolator();
OrientationInterpolator275.setDEF(CString("vc7_RotationInterpolator"));
OrientationInterpolator275.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator275.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group241.addChild(&OrientationInterpolator275);

OrientationInterpolator& OrientationInterpolator276 =  OrientationInterpolator();
OrientationInterpolator276.setDEF(CString("vc6_RotationInterpolator"));
OrientationInterpolator276.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator276.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group241.addChild(&OrientationInterpolator276);

OrientationInterpolator& OrientationInterpolator277 =  OrientationInterpolator();
OrientationInterpolator277.setDEF(CString("vc5_RotationInterpolator"));
OrientationInterpolator277.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator277.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group241.addChild(&OrientationInterpolator277);

OrientationInterpolator& OrientationInterpolator278 =  OrientationInterpolator();
OrientationInterpolator278.setDEF(CString("vc4_RotationInterpolator"));
OrientationInterpolator278.setKey(new float[]{0,0.3,0.4,1}, 4);
OrientationInterpolator278.setKeyValue(new float[]{1,0,1,0.25,-1,0,-1,0.35,1,0,0,0.75,1,0,1,0.5}, 16);
Group241.addChild(&OrientationInterpolator278);

OrientationInterpolator& OrientationInterpolator279 =  OrientationInterpolator();
OrientationInterpolator279.setDEF(CString("vc3_RotationInterpolator"));
OrientationInterpolator279.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator279.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group241.addChild(&OrientationInterpolator279);

OrientationInterpolator& OrientationInterpolator280 =  OrientationInterpolator();
OrientationInterpolator280.setDEF(CString("vc2_RotationInterpolator"));
OrientationInterpolator280.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator280.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group241.addChild(&OrientationInterpolator280);

OrientationInterpolator& OrientationInterpolator281 =  OrientationInterpolator();
OrientationInterpolator281.setDEF(CString("vc1_RotationInterpolator"));
OrientationInterpolator281.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator281.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group241.addChild(&OrientationInterpolator281);

OrientationInterpolator& OrientationInterpolator282 =  OrientationInterpolator();
OrientationInterpolator282.setDEF(CString("skullbase_RotationInterpolator"));
OrientationInterpolator282.setKey(new float[]{0,0.2,0.75,1}, 4);
OrientationInterpolator282.setKeyValue(new float[]{0,-1,0,0.5,0,0,1,0,0,0,1,0,0,1,0,0.35}, 16);
Group241.addChild(&OrientationInterpolator282);

OrientationInterpolator& OrientationInterpolator283 =  OrientationInterpolator();
OrientationInterpolator283.setDEF(CString("l_eyelid_joint_RotationInterpolator"));
OrientationInterpolator283.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator283.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group241.addChild(&OrientationInterpolator283);

OrientationInterpolator& OrientationInterpolator284 =  OrientationInterpolator();
OrientationInterpolator284.setDEF(CString("l_eyeball_joint_RotationInterpolator"));
OrientationInterpolator284.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator284.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group241.addChild(&OrientationInterpolator284);

OrientationInterpolator& OrientationInterpolator285 =  OrientationInterpolator();
OrientationInterpolator285.setDEF(CString("l_eyebrow_joint_RotationInterpolator"));
OrientationInterpolator285.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator285.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group241.addChild(&OrientationInterpolator285);

OrientationInterpolator& OrientationInterpolator286 =  OrientationInterpolator();
OrientationInterpolator286.setDEF(CString("r_eyelid_joint_RotationInterpolator"));
OrientationInterpolator286.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator286.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group241.addChild(&OrientationInterpolator286);

OrientationInterpolator& OrientationInterpolator287 =  OrientationInterpolator();
OrientationInterpolator287.setDEF(CString("r_eyeball_joint_RotationInterpolator"));
OrientationInterpolator287.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator287.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group241.addChild(&OrientationInterpolator287);

OrientationInterpolator& OrientationInterpolator288 =  OrientationInterpolator();
OrientationInterpolator288.setDEF(CString("r_eyebrow_joint_RotationInterpolator"));
OrientationInterpolator288.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator288.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group241.addChild(&OrientationInterpolator288);

OrientationInterpolator& OrientationInterpolator289 =  OrientationInterpolator();
OrientationInterpolator289.setDEF(CString("temporomandibular_RotationInterpolator"));
OrientationInterpolator289.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator289.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group241.addChild(&OrientationInterpolator289);

OrientationInterpolator& OrientationInterpolator290 =  OrientationInterpolator();
OrientationInterpolator290.setDEF(CString("l_sternoclavicular_RotationInterpolator"));
OrientationInterpolator290.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator290.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group241.addChild(&OrientationInterpolator290);

OrientationInterpolator& OrientationInterpolator291 =  OrientationInterpolator();
OrientationInterpolator291.setDEF(CString("l_acromioclavicular_RotationInterpolator"));
OrientationInterpolator291.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator291.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group241.addChild(&OrientationInterpolator291);

OrientationInterpolator& OrientationInterpolator292 =  OrientationInterpolator();
OrientationInterpolator292.setDEF(CString("l_shoulder_RotationInterpolator"));
OrientationInterpolator292.setKey(new float[]{0,0.4,1}, 3);
OrientationInterpolator292.setKeyValue(new float[]{0,0,1,0,0,0,1,1.5,-1,0,1,1.75}, 12);
Group241.addChild(&OrientationInterpolator292);

OrientationInterpolator& OrientationInterpolator293 =  OrientationInterpolator();
OrientationInterpolator293.setDEF(CString("l_elbow_RotationInterpolator"));
OrientationInterpolator293.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator293.setKeyValue(new float[]{-1,0,0,3,-1,0,0,0.75,-1,-1,0,0.5}, 12);
Group241.addChild(&OrientationInterpolator293);

OrientationInterpolator& OrientationInterpolator294 =  OrientationInterpolator();
OrientationInterpolator294.setDEF(CString("l_wrist_RotationInterpolator"));
OrientationInterpolator294.setKey(new float[]{0,0.4,0.8,1}, 4);
OrientationInterpolator294.setKeyValue(new float[]{0,0,1,0,0,1,0,1.3,0,-0.5,1,1.3,0,0,1,0}, 16);
Group241.addChild(&OrientationInterpolator294);

OrientationInterpolator& OrientationInterpolator295 =  OrientationInterpolator();
OrientationInterpolator295.setDEF(CString("l_thumb1_RotationInterpolator"));
OrientationInterpolator295.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator295.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group241.addChild(&OrientationInterpolator295);

OrientationInterpolator& OrientationInterpolator296 =  OrientationInterpolator();
OrientationInterpolator296.setDEF(CString("l_thumb2_RotationInterpolator"));
OrientationInterpolator296.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator296.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group241.addChild(&OrientationInterpolator296);

OrientationInterpolator& OrientationInterpolator297 =  OrientationInterpolator();
OrientationInterpolator297.setDEF(CString("l_thumb3_RotationInterpolator"));
OrientationInterpolator297.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator297.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group241.addChild(&OrientationInterpolator297);

OrientationInterpolator& OrientationInterpolator298 =  OrientationInterpolator();
OrientationInterpolator298.setDEF(CString("l_index0_RotationInterpolator"));
OrientationInterpolator298.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator298.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group241.addChild(&OrientationInterpolator298);

OrientationInterpolator& OrientationInterpolator299 =  OrientationInterpolator();
OrientationInterpolator299.setDEF(CString("l_index1_RotationInterpolator"));
OrientationInterpolator299.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator299.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group241.addChild(&OrientationInterpolator299);

OrientationInterpolator& OrientationInterpolator300 =  OrientationInterpolator();
OrientationInterpolator300.setDEF(CString("l_index2_RotationInterpolator"));
OrientationInterpolator300.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator300.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group241.addChild(&OrientationInterpolator300);

OrientationInterpolator& OrientationInterpolator301 =  OrientationInterpolator();
OrientationInterpolator301.setDEF(CString("l_index3_RotationInterpolator"));
OrientationInterpolator301.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator301.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group241.addChild(&OrientationInterpolator301);

OrientationInterpolator& OrientationInterpolator302 =  OrientationInterpolator();
OrientationInterpolator302.setDEF(CString("l_middle0_RotationInterpolator"));
OrientationInterpolator302.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator302.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group241.addChild(&OrientationInterpolator302);

OrientationInterpolator& OrientationInterpolator303 =  OrientationInterpolator();
OrientationInterpolator303.setDEF(CString("l_middle1_RotationInterpolator"));
OrientationInterpolator303.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator303.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group241.addChild(&OrientationInterpolator303);

OrientationInterpolator& OrientationInterpolator304 =  OrientationInterpolator();
OrientationInterpolator304.setDEF(CString("l_middle2_RotationInterpolator"));
OrientationInterpolator304.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator304.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group241.addChild(&OrientationInterpolator304);

OrientationInterpolator& OrientationInterpolator305 =  OrientationInterpolator();
OrientationInterpolator305.setDEF(CString("l_middle3_RotationInterpolator"));
OrientationInterpolator305.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator305.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group241.addChild(&OrientationInterpolator305);

OrientationInterpolator& OrientationInterpolator306 =  OrientationInterpolator();
OrientationInterpolator306.setDEF(CString("l_ring0_RotationInterpolator"));
OrientationInterpolator306.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator306.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group241.addChild(&OrientationInterpolator306);

OrientationInterpolator& OrientationInterpolator307 =  OrientationInterpolator();
OrientationInterpolator307.setDEF(CString("l_ring1_RotationInterpolator"));
OrientationInterpolator307.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator307.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group241.addChild(&OrientationInterpolator307);

OrientationInterpolator& OrientationInterpolator308 =  OrientationInterpolator();
OrientationInterpolator308.setDEF(CString("l_ring2_RotationInterpolator"));
OrientationInterpolator308.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator308.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group241.addChild(&OrientationInterpolator308);

OrientationInterpolator& OrientationInterpolator309 =  OrientationInterpolator();
OrientationInterpolator309.setDEF(CString("l_ring3_RotationInterpolator"));
OrientationInterpolator309.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator309.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group241.addChild(&OrientationInterpolator309);

OrientationInterpolator& OrientationInterpolator310 =  OrientationInterpolator();
OrientationInterpolator310.setDEF(CString("l_pinky0_RotationInterpolator"));
OrientationInterpolator310.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator310.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group241.addChild(&OrientationInterpolator310);

OrientationInterpolator& OrientationInterpolator311 =  OrientationInterpolator();
OrientationInterpolator311.setDEF(CString("l_pinky1_RotationInterpolator"));
OrientationInterpolator311.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator311.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group241.addChild(&OrientationInterpolator311);

OrientationInterpolator& OrientationInterpolator312 =  OrientationInterpolator();
OrientationInterpolator312.setDEF(CString("l_pinky2_RotationInterpolator"));
OrientationInterpolator312.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator312.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group241.addChild(&OrientationInterpolator312);

OrientationInterpolator& OrientationInterpolator313 =  OrientationInterpolator();
OrientationInterpolator313.setDEF(CString("l_pinky3_RotationInterpolator"));
OrientationInterpolator313.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator313.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group241.addChild(&OrientationInterpolator313);

OrientationInterpolator& OrientationInterpolator314 =  OrientationInterpolator();
OrientationInterpolator314.setDEF(CString("r_sternoclavicular_RotationInterpolator"));
OrientationInterpolator314.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator314.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group241.addChild(&OrientationInterpolator314);

OrientationInterpolator& OrientationInterpolator315 =  OrientationInterpolator();
OrientationInterpolator315.setDEF(CString("r_acromioclavicular_RotationInterpolator"));
OrientationInterpolator315.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator315.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group241.addChild(&OrientationInterpolator315);

OrientationInterpolator& OrientationInterpolator316 =  OrientationInterpolator();
OrientationInterpolator316.setDEF(CString("r_shoulder_RotationInterpolator"));
OrientationInterpolator316.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator316.setKeyValue(new float[]{0,0,-1,2.5,0,0,-1,1.5,0,0,-1,1.75}, 12);
Group241.addChild(&OrientationInterpolator316);

OrientationInterpolator& OrientationInterpolator317 =  OrientationInterpolator();
OrientationInterpolator317.setDEF(CString("r_elbow_RotationInterpolator"));
OrientationInterpolator317.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator317.setKeyValue(new float[]{-1,0,0,3,-1,0,0,0.75,-1,-1,0,0.5}, 12);
Group241.addChild(&OrientationInterpolator317);

OrientationInterpolator& OrientationInterpolator318 =  OrientationInterpolator();
OrientationInterpolator318.setDEF(CString("r_wrist_RotationInterpolator"));
OrientationInterpolator318.setKey(new float[]{0,0.5,0.7,1}, 4);
OrientationInterpolator318.setKeyValue(new float[]{0,1,0,0.3,0,0,1,0,0,0,-1,1,0,-1,0,0.3}, 16);
Group241.addChild(&OrientationInterpolator318);

OrientationInterpolator& OrientationInterpolator319 =  OrientationInterpolator();
OrientationInterpolator319.setDEF(CString("r_thumb1_RotationInterpolator"));
OrientationInterpolator319.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator319.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group241.addChild(&OrientationInterpolator319);

OrientationInterpolator& OrientationInterpolator320 =  OrientationInterpolator();
OrientationInterpolator320.setDEF(CString("r_thumb2_RotationInterpolator"));
OrientationInterpolator320.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator320.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group241.addChild(&OrientationInterpolator320);

OrientationInterpolator& OrientationInterpolator321 =  OrientationInterpolator();
OrientationInterpolator321.setDEF(CString("r_thumb3_RotationInterpolator"));
OrientationInterpolator321.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator321.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group241.addChild(&OrientationInterpolator321);

OrientationInterpolator& OrientationInterpolator322 =  OrientationInterpolator();
OrientationInterpolator322.setDEF(CString("r_index0_RotationInterpolator"));
OrientationInterpolator322.setKey(new float[]{0,0.5,0.75,1}, 4);
OrientationInterpolator322.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,1,0,0,1,0}, 16);
Group241.addChild(&OrientationInterpolator322);

OrientationInterpolator& OrientationInterpolator323 =  OrientationInterpolator();
OrientationInterpolator323.setDEF(CString("r_index1_RotationInterpolator"));
OrientationInterpolator323.setKey(new float[]{0,0.5,0.75,1}, 4);
OrientationInterpolator323.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0}, 16);
Group241.addChild(&OrientationInterpolator323);

OrientationInterpolator& OrientationInterpolator324 =  OrientationInterpolator();
OrientationInterpolator324.setDEF(CString("r_index2_RotationInterpolator"));
OrientationInterpolator324.setKey(new float[]{0,0.5,0.75,1}, 4);
OrientationInterpolator324.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0}, 16);
Group241.addChild(&OrientationInterpolator324);

OrientationInterpolator& OrientationInterpolator325 =  OrientationInterpolator();
OrientationInterpolator325.setDEF(CString("r_index3_RotationInterpolator"));
OrientationInterpolator325.setKey(new float[]{0,0.5,0.75,1}, 4);
OrientationInterpolator325.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0}, 16);
Group241.addChild(&OrientationInterpolator325);

OrientationInterpolator& OrientationInterpolator326 =  OrientationInterpolator();
OrientationInterpolator326.setDEF(CString("r_middle0_RotationInterpolator"));
OrientationInterpolator326.setKey(new float[]{0,0.5,0.75,1}, 4);
OrientationInterpolator326.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,1,0,0,1,0}, 16);
Group241.addChild(&OrientationInterpolator326);

OrientationInterpolator& OrientationInterpolator327 =  OrientationInterpolator();
OrientationInterpolator327.setDEF(CString("r_middle1_RotationInterpolator"));
OrientationInterpolator327.setKey(new float[]{0,0.5,0.75,1}, 4);
OrientationInterpolator327.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0}, 16);
Group241.addChild(&OrientationInterpolator327);

OrientationInterpolator& OrientationInterpolator328 =  OrientationInterpolator();
OrientationInterpolator328.setDEF(CString("r_middle2_RotationInterpolator"));
OrientationInterpolator328.setKey(new float[]{0,0.5,0.75,1}, 4);
OrientationInterpolator328.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0}, 16);
Group241.addChild(&OrientationInterpolator328);

OrientationInterpolator& OrientationInterpolator329 =  OrientationInterpolator();
OrientationInterpolator329.setDEF(CString("r_middle3_RotationInterpolator"));
OrientationInterpolator329.setKey(new float[]{0,0.5,0.75,1}, 4);
OrientationInterpolator329.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0}, 16);
Group241.addChild(&OrientationInterpolator329);

OrientationInterpolator& OrientationInterpolator330 =  OrientationInterpolator();
OrientationInterpolator330.setDEF(CString("r_ring0_RotationInterpolator"));
OrientationInterpolator330.setKey(new float[]{0,0.5,0.75,1}, 4);
OrientationInterpolator330.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,1,0,0,1,0}, 16);
Group241.addChild(&OrientationInterpolator330);

OrientationInterpolator& OrientationInterpolator331 =  OrientationInterpolator();
OrientationInterpolator331.setDEF(CString("r_ring1_RotationInterpolator"));
OrientationInterpolator331.setKey(new float[]{0,0.5,0.75,1}, 4);
OrientationInterpolator331.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0}, 16);
Group241.addChild(&OrientationInterpolator331);

OrientationInterpolator& OrientationInterpolator332 =  OrientationInterpolator();
OrientationInterpolator332.setDEF(CString("r_ring2_RotationInterpolator"));
OrientationInterpolator332.setKey(new float[]{0,0.5,0.75,1}, 4);
OrientationInterpolator332.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0}, 16);
Group241.addChild(&OrientationInterpolator332);

OrientationInterpolator& OrientationInterpolator333 =  OrientationInterpolator();
OrientationInterpolator333.setDEF(CString("r_ring3_RotationInterpolator"));
OrientationInterpolator333.setKey(new float[]{0,0.5,0.75,1}, 4);
OrientationInterpolator333.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0}, 16);
Group241.addChild(&OrientationInterpolator333);

OrientationInterpolator& OrientationInterpolator334 =  OrientationInterpolator();
OrientationInterpolator334.setDEF(CString("r_pinky0_RotationInterpolator"));
OrientationInterpolator334.setKey(new float[]{0,0.5,0.75,1}, 4);
OrientationInterpolator334.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,1,0,0,1,0}, 16);
Group241.addChild(&OrientationInterpolator334);

OrientationInterpolator& OrientationInterpolator335 =  OrientationInterpolator();
OrientationInterpolator335.setDEF(CString("r_pinky1_RotationInterpolator"));
OrientationInterpolator335.setKey(new float[]{0,0.5,0.75,1}, 4);
OrientationInterpolator335.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0}, 16);
Group241.addChild(&OrientationInterpolator335);

OrientationInterpolator& OrientationInterpolator336 =  OrientationInterpolator();
OrientationInterpolator336.setDEF(CString("r_pinky2_RotationInterpolator"));
OrientationInterpolator336.setKey(new float[]{0,0.5,0.75,1}, 4);
OrientationInterpolator336.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0}, 16);
Group241.addChild(&OrientationInterpolator336);

OrientationInterpolator& OrientationInterpolator337 =  OrientationInterpolator();
OrientationInterpolator337.setDEF(CString("r_pinky3_RotationInterpolator"));
OrientationInterpolator337.setKey(new float[]{0,0.5,0.75,1}, 4);
OrientationInterpolator337.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0}, 16);
Group241.addChild(&OrientationInterpolator337);

Scene18.addChild(&Group241);

//TimeSensor to Interpolators
ROUTE& ROUTE338 =  ROUTE();
ROUTE338.setFromField(CString("fraction_changed"));
ROUTE338.setFromNode(CString("KickTimer"));
ROUTE338.setToField(CString("set_fraction"));
ROUTE338.setToNode(CString("HumanoidRoot_RotationInterpolator"));
Scene18.addChild(&ROUTE338);

ROUTE& ROUTE339 =  ROUTE();
ROUTE339.setFromField(CString("fraction_changed"));
ROUTE339.setFromNode(CString("KickTimer"));
ROUTE339.setToField(CString("set_fraction"));
ROUTE339.setToNode(CString("HumanoidRoot_TranslationInterpolator"));
Scene18.addChild(&ROUTE339);

ROUTE& ROUTE340 =  ROUTE();
ROUTE340.setFromField(CString("fraction_changed"));
ROUTE340.setFromNode(CString("KickTimer"));
ROUTE340.setToField(CString("set_fraction"));
ROUTE340.setToNode(CString("sacroiliac_RotationInterpolator"));
Scene18.addChild(&ROUTE340);

ROUTE& ROUTE341 =  ROUTE();
ROUTE341.setFromField(CString("fraction_changed"));
ROUTE341.setFromNode(CString("KickTimer"));
ROUTE341.setToField(CString("set_fraction"));
ROUTE341.setToNode(CString("l_hip_RotationInterpolator"));
Scene18.addChild(&ROUTE341);

ROUTE& ROUTE342 =  ROUTE();
ROUTE342.setFromField(CString("fraction_changed"));
ROUTE342.setFromNode(CString("KickTimer"));
ROUTE342.setToField(CString("set_fraction"));
ROUTE342.setToNode(CString("l_knee_RotationInterpolator"));
Scene18.addChild(&ROUTE342);

ROUTE& ROUTE343 =  ROUTE();
ROUTE343.setFromField(CString("fraction_changed"));
ROUTE343.setFromNode(CString("KickTimer"));
ROUTE343.setToField(CString("set_fraction"));
ROUTE343.setToNode(CString("l_ankle_RotationInterpolator"));
Scene18.addChild(&ROUTE343);

ROUTE& ROUTE344 =  ROUTE();
ROUTE344.setFromField(CString("fraction_changed"));
ROUTE344.setFromNode(CString("KickTimer"));
ROUTE344.setToField(CString("set_fraction"));
ROUTE344.setToNode(CString("l_subtalar_RotationInterpolator"));
Scene18.addChild(&ROUTE344);

ROUTE& ROUTE345 =  ROUTE();
ROUTE345.setFromField(CString("fraction_changed"));
ROUTE345.setFromNode(CString("KickTimer"));
ROUTE345.setToField(CString("set_fraction"));
ROUTE345.setToNode(CString("l_midtarsal_RotationInterpolator"));
Scene18.addChild(&ROUTE345);

ROUTE& ROUTE346 =  ROUTE();
ROUTE346.setFromField(CString("fraction_changed"));
ROUTE346.setFromNode(CString("KickTimer"));
ROUTE346.setToField(CString("set_fraction"));
ROUTE346.setToNode(CString("l_metatarsal_RotationInterpolator"));
Scene18.addChild(&ROUTE346);

ROUTE& ROUTE347 =  ROUTE();
ROUTE347.setFromField(CString("fraction_changed"));
ROUTE347.setFromNode(CString("KickTimer"));
ROUTE347.setToField(CString("set_fraction"));
ROUTE347.setToNode(CString("r_hip_RotationInterpolator"));
Scene18.addChild(&ROUTE347);

ROUTE& ROUTE348 =  ROUTE();
ROUTE348.setFromField(CString("fraction_changed"));
ROUTE348.setFromNode(CString("KickTimer"));
ROUTE348.setToField(CString("set_fraction"));
ROUTE348.setToNode(CString("r_knee_RotationInterpolator"));
Scene18.addChild(&ROUTE348);

ROUTE& ROUTE349 =  ROUTE();
ROUTE349.setFromField(CString("fraction_changed"));
ROUTE349.setFromNode(CString("KickTimer"));
ROUTE349.setToField(CString("set_fraction"));
ROUTE349.setToNode(CString("r_ankle_RotationInterpolator"));
Scene18.addChild(&ROUTE349);

ROUTE& ROUTE350 =  ROUTE();
ROUTE350.setFromField(CString("fraction_changed"));
ROUTE350.setFromNode(CString("KickTimer"));
ROUTE350.setToField(CString("set_fraction"));
ROUTE350.setToNode(CString("r_subtalar_RotationInterpolator"));
Scene18.addChild(&ROUTE350);

ROUTE& ROUTE351 =  ROUTE();
ROUTE351.setFromField(CString("fraction_changed"));
ROUTE351.setFromNode(CString("KickTimer"));
ROUTE351.setToField(CString("set_fraction"));
ROUTE351.setToNode(CString("r_midtarsal_RotationInterpolator"));
Scene18.addChild(&ROUTE351);

ROUTE& ROUTE352 =  ROUTE();
ROUTE352.setFromField(CString("fraction_changed"));
ROUTE352.setFromNode(CString("KickTimer"));
ROUTE352.setToField(CString("set_fraction"));
ROUTE352.setToNode(CString("r_metatarsal_RotationInterpolator"));
Scene18.addChild(&ROUTE352);

ROUTE& ROUTE353 =  ROUTE();
ROUTE353.setFromField(CString("fraction_changed"));
ROUTE353.setFromNode(CString("KickTimer"));
ROUTE353.setToField(CString("set_fraction"));
ROUTE353.setToNode(CString("vl5_RotationInterpolator"));
Scene18.addChild(&ROUTE353);

ROUTE& ROUTE354 =  ROUTE();
ROUTE354.setFromField(CString("fraction_changed"));
ROUTE354.setFromNode(CString("KickTimer"));
ROUTE354.setToField(CString("set_fraction"));
ROUTE354.setToNode(CString("vl4_RotationInterpolator"));
Scene18.addChild(&ROUTE354);

ROUTE& ROUTE355 =  ROUTE();
ROUTE355.setFromField(CString("fraction_changed"));
ROUTE355.setFromNode(CString("KickTimer"));
ROUTE355.setToField(CString("set_fraction"));
ROUTE355.setToNode(CString("vl3_RotationInterpolator"));
Scene18.addChild(&ROUTE355);

ROUTE& ROUTE356 =  ROUTE();
ROUTE356.setFromField(CString("fraction_changed"));
ROUTE356.setFromNode(CString("KickTimer"));
ROUTE356.setToField(CString("set_fraction"));
ROUTE356.setToNode(CString("vl2_RotationInterpolator"));
Scene18.addChild(&ROUTE356);

ROUTE& ROUTE357 =  ROUTE();
ROUTE357.setFromField(CString("fraction_changed"));
ROUTE357.setFromNode(CString("KickTimer"));
ROUTE357.setToField(CString("set_fraction"));
ROUTE357.setToNode(CString("vl1_RotationInterpolator"));
Scene18.addChild(&ROUTE357);

ROUTE& ROUTE358 =  ROUTE();
ROUTE358.setFromField(CString("fraction_changed"));
ROUTE358.setFromNode(CString("KickTimer"));
ROUTE358.setToField(CString("set_fraction"));
ROUTE358.setToNode(CString("vt12_RotationInterpolator"));
Scene18.addChild(&ROUTE358);

ROUTE& ROUTE359 =  ROUTE();
ROUTE359.setFromField(CString("fraction_changed"));
ROUTE359.setFromNode(CString("KickTimer"));
ROUTE359.setToField(CString("set_fraction"));
ROUTE359.setToNode(CString("vt11_RotationInterpolator"));
Scene18.addChild(&ROUTE359);

ROUTE& ROUTE360 =  ROUTE();
ROUTE360.setFromField(CString("fraction_changed"));
ROUTE360.setFromNode(CString("KickTimer"));
ROUTE360.setToField(CString("set_fraction"));
ROUTE360.setToNode(CString("vt10_RotationInterpolator"));
Scene18.addChild(&ROUTE360);

ROUTE& ROUTE361 =  ROUTE();
ROUTE361.setFromField(CString("fraction_changed"));
ROUTE361.setFromNode(CString("KickTimer"));
ROUTE361.setToField(CString("set_fraction"));
ROUTE361.setToNode(CString("vt9_RotationInterpolator"));
Scene18.addChild(&ROUTE361);

ROUTE& ROUTE362 =  ROUTE();
ROUTE362.setFromField(CString("fraction_changed"));
ROUTE362.setFromNode(CString("KickTimer"));
ROUTE362.setToField(CString("set_fraction"));
ROUTE362.setToNode(CString("vt8_RotationInterpolator"));
Scene18.addChild(&ROUTE362);

ROUTE& ROUTE363 =  ROUTE();
ROUTE363.setFromField(CString("fraction_changed"));
ROUTE363.setFromNode(CString("KickTimer"));
ROUTE363.setToField(CString("set_fraction"));
ROUTE363.setToNode(CString("vt7_RotationInterpolator"));
Scene18.addChild(&ROUTE363);

ROUTE& ROUTE364 =  ROUTE();
ROUTE364.setFromField(CString("fraction_changed"));
ROUTE364.setFromNode(CString("KickTimer"));
ROUTE364.setToField(CString("set_fraction"));
ROUTE364.setToNode(CString("vt6_RotationInterpolator"));
Scene18.addChild(&ROUTE364);

ROUTE& ROUTE365 =  ROUTE();
ROUTE365.setFromField(CString("fraction_changed"));
ROUTE365.setFromNode(CString("KickTimer"));
ROUTE365.setToField(CString("set_fraction"));
ROUTE365.setToNode(CString("vt5_RotationInterpolator"));
Scene18.addChild(&ROUTE365);

ROUTE& ROUTE366 =  ROUTE();
ROUTE366.setFromField(CString("fraction_changed"));
ROUTE366.setFromNode(CString("KickTimer"));
ROUTE366.setToField(CString("set_fraction"));
ROUTE366.setToNode(CString("vt4_RotationInterpolator"));
Scene18.addChild(&ROUTE366);

ROUTE& ROUTE367 =  ROUTE();
ROUTE367.setFromField(CString("fraction_changed"));
ROUTE367.setFromNode(CString("KickTimer"));
ROUTE367.setToField(CString("set_fraction"));
ROUTE367.setToNode(CString("vt3_RotationInterpolator"));
Scene18.addChild(&ROUTE367);

ROUTE& ROUTE368 =  ROUTE();
ROUTE368.setFromField(CString("fraction_changed"));
ROUTE368.setFromNode(CString("KickTimer"));
ROUTE368.setToField(CString("set_fraction"));
ROUTE368.setToNode(CString("vt2_RotationInterpolator"));
Scene18.addChild(&ROUTE368);

ROUTE& ROUTE369 =  ROUTE();
ROUTE369.setFromField(CString("fraction_changed"));
ROUTE369.setFromNode(CString("KickTimer"));
ROUTE369.setToField(CString("set_fraction"));
ROUTE369.setToNode(CString("vt1_RotationInterpolator"));
Scene18.addChild(&ROUTE369);

ROUTE& ROUTE370 =  ROUTE();
ROUTE370.setFromField(CString("fraction_changed"));
ROUTE370.setFromNode(CString("KickTimer"));
ROUTE370.setToField(CString("set_fraction"));
ROUTE370.setToNode(CString("vc7_RotationInterpolator"));
Scene18.addChild(&ROUTE370);

ROUTE& ROUTE371 =  ROUTE();
ROUTE371.setFromField(CString("fraction_changed"));
ROUTE371.setFromNode(CString("KickTimer"));
ROUTE371.setToField(CString("set_fraction"));
ROUTE371.setToNode(CString("vc6_RotationInterpolator"));
Scene18.addChild(&ROUTE371);

ROUTE& ROUTE372 =  ROUTE();
ROUTE372.setFromField(CString("fraction_changed"));
ROUTE372.setFromNode(CString("KickTimer"));
ROUTE372.setToField(CString("set_fraction"));
ROUTE372.setToNode(CString("vc5_RotationInterpolator"));
Scene18.addChild(&ROUTE372);

ROUTE& ROUTE373 =  ROUTE();
ROUTE373.setFromField(CString("fraction_changed"));
ROUTE373.setFromNode(CString("KickTimer"));
ROUTE373.setToField(CString("set_fraction"));
ROUTE373.setToNode(CString("vc4_RotationInterpolator"));
Scene18.addChild(&ROUTE373);

ROUTE& ROUTE374 =  ROUTE();
ROUTE374.setFromField(CString("fraction_changed"));
ROUTE374.setFromNode(CString("KickTimer"));
ROUTE374.setToField(CString("set_fraction"));
ROUTE374.setToNode(CString("vc3_RotationInterpolator"));
Scene18.addChild(&ROUTE374);

ROUTE& ROUTE375 =  ROUTE();
ROUTE375.setFromField(CString("fraction_changed"));
ROUTE375.setFromNode(CString("KickTimer"));
ROUTE375.setToField(CString("set_fraction"));
ROUTE375.setToNode(CString("vc2_RotationInterpolator"));
Scene18.addChild(&ROUTE375);

ROUTE& ROUTE376 =  ROUTE();
ROUTE376.setFromField(CString("fraction_changed"));
ROUTE376.setFromNode(CString("KickTimer"));
ROUTE376.setToField(CString("set_fraction"));
ROUTE376.setToNode(CString("vc1_RotationInterpolator"));
Scene18.addChild(&ROUTE376);

ROUTE& ROUTE377 =  ROUTE();
ROUTE377.setFromField(CString("fraction_changed"));
ROUTE377.setFromNode(CString("KickTimer"));
ROUTE377.setToField(CString("set_fraction"));
ROUTE377.setToNode(CString("skullbase_RotationInterpolator"));
Scene18.addChild(&ROUTE377);

ROUTE& ROUTE378 =  ROUTE();
ROUTE378.setFromField(CString("fraction_changed"));
ROUTE378.setFromNode(CString("KickTimer"));
ROUTE378.setToField(CString("set_fraction"));
ROUTE378.setToNode(CString("l_eyelid_joint_RotationInterpolator"));
Scene18.addChild(&ROUTE378);

ROUTE& ROUTE379 =  ROUTE();
ROUTE379.setFromField(CString("fraction_changed"));
ROUTE379.setFromNode(CString("KickTimer"));
ROUTE379.setToField(CString("set_fraction"));
ROUTE379.setToNode(CString("l_eyeball_joint_RotationInterpolator"));
Scene18.addChild(&ROUTE379);

ROUTE& ROUTE380 =  ROUTE();
ROUTE380.setFromField(CString("fraction_changed"));
ROUTE380.setFromNode(CString("KickTimer"));
ROUTE380.setToField(CString("set_fraction"));
ROUTE380.setToNode(CString("l_eyebrow_joint_RotationInterpolator"));
Scene18.addChild(&ROUTE380);

ROUTE& ROUTE381 =  ROUTE();
ROUTE381.setFromField(CString("fraction_changed"));
ROUTE381.setFromNode(CString("KickTimer"));
ROUTE381.setToField(CString("set_fraction"));
ROUTE381.setToNode(CString("r_eyelid_joint_RotationInterpolator"));
Scene18.addChild(&ROUTE381);

ROUTE& ROUTE382 =  ROUTE();
ROUTE382.setFromField(CString("fraction_changed"));
ROUTE382.setFromNode(CString("KickTimer"));
ROUTE382.setToField(CString("set_fraction"));
ROUTE382.setToNode(CString("r_eyeball_joint_RotationInterpolator"));
Scene18.addChild(&ROUTE382);

ROUTE& ROUTE383 =  ROUTE();
ROUTE383.setFromField(CString("fraction_changed"));
ROUTE383.setFromNode(CString("KickTimer"));
ROUTE383.setToField(CString("set_fraction"));
ROUTE383.setToNode(CString("r_eyebrow_joint_RotationInterpolator"));
Scene18.addChild(&ROUTE383);

ROUTE& ROUTE384 =  ROUTE();
ROUTE384.setFromField(CString("fraction_changed"));
ROUTE384.setFromNode(CString("KickTimer"));
ROUTE384.setToField(CString("set_fraction"));
ROUTE384.setToNode(CString("temporomandibular_RotationInterpolator"));
Scene18.addChild(&ROUTE384);

ROUTE& ROUTE385 =  ROUTE();
ROUTE385.setFromField(CString("fraction_changed"));
ROUTE385.setFromNode(CString("KickTimer"));
ROUTE385.setToField(CString("set_fraction"));
ROUTE385.setToNode(CString("l_sternoclavicular_RotationInterpolator"));
Scene18.addChild(&ROUTE385);

ROUTE& ROUTE386 =  ROUTE();
ROUTE386.setFromField(CString("fraction_changed"));
ROUTE386.setFromNode(CString("KickTimer"));
ROUTE386.setToField(CString("set_fraction"));
ROUTE386.setToNode(CString("l_acromioclavicular_RotationInterpolator"));
Scene18.addChild(&ROUTE386);

ROUTE& ROUTE387 =  ROUTE();
ROUTE387.setFromField(CString("fraction_changed"));
ROUTE387.setFromNode(CString("KickTimer"));
ROUTE387.setToField(CString("set_fraction"));
ROUTE387.setToNode(CString("l_shoulder_RotationInterpolator"));
Scene18.addChild(&ROUTE387);

ROUTE& ROUTE388 =  ROUTE();
ROUTE388.setFromField(CString("fraction_changed"));
ROUTE388.setFromNode(CString("KickTimer"));
ROUTE388.setToField(CString("set_fraction"));
ROUTE388.setToNode(CString("l_elbow_RotationInterpolator"));
Scene18.addChild(&ROUTE388);

ROUTE& ROUTE389 =  ROUTE();
ROUTE389.setFromField(CString("fraction_changed"));
ROUTE389.setFromNode(CString("KickTimer"));
ROUTE389.setToField(CString("set_fraction"));
ROUTE389.setToNode(CString("l_wrist_RotationInterpolator"));
Scene18.addChild(&ROUTE389);

ROUTE& ROUTE390 =  ROUTE();
ROUTE390.setFromField(CString("fraction_changed"));
ROUTE390.setFromNode(CString("KickTimer"));
ROUTE390.setToField(CString("set_fraction"));
ROUTE390.setToNode(CString("l_thumb1_RotationInterpolator"));
Scene18.addChild(&ROUTE390);

ROUTE& ROUTE391 =  ROUTE();
ROUTE391.setFromField(CString("fraction_changed"));
ROUTE391.setFromNode(CString("KickTimer"));
ROUTE391.setToField(CString("set_fraction"));
ROUTE391.setToNode(CString("l_thumb2_RotationInterpolator"));
Scene18.addChild(&ROUTE391);

ROUTE& ROUTE392 =  ROUTE();
ROUTE392.setFromField(CString("fraction_changed"));
ROUTE392.setFromNode(CString("KickTimer"));
ROUTE392.setToField(CString("set_fraction"));
ROUTE392.setToNode(CString("l_thumb3_RotationInterpolator"));
Scene18.addChild(&ROUTE392);

ROUTE& ROUTE393 =  ROUTE();
ROUTE393.setFromField(CString("fraction_changed"));
ROUTE393.setFromNode(CString("KickTimer"));
ROUTE393.setToField(CString("set_fraction"));
ROUTE393.setToNode(CString("l_index0_RotationInterpolator"));
Scene18.addChild(&ROUTE393);

ROUTE& ROUTE394 =  ROUTE();
ROUTE394.setFromField(CString("fraction_changed"));
ROUTE394.setFromNode(CString("KickTimer"));
ROUTE394.setToField(CString("set_fraction"));
ROUTE394.setToNode(CString("l_index1_RotationInterpolator"));
Scene18.addChild(&ROUTE394);

ROUTE& ROUTE395 =  ROUTE();
ROUTE395.setFromField(CString("fraction_changed"));
ROUTE395.setFromNode(CString("KickTimer"));
ROUTE395.setToField(CString("set_fraction"));
ROUTE395.setToNode(CString("l_index2_RotationInterpolator"));
Scene18.addChild(&ROUTE395);

ROUTE& ROUTE396 =  ROUTE();
ROUTE396.setFromField(CString("fraction_changed"));
ROUTE396.setFromNode(CString("KickTimer"));
ROUTE396.setToField(CString("set_fraction"));
ROUTE396.setToNode(CString("l_index3_RotationInterpolator"));
Scene18.addChild(&ROUTE396);

ROUTE& ROUTE397 =  ROUTE();
ROUTE397.setFromField(CString("fraction_changed"));
ROUTE397.setFromNode(CString("KickTimer"));
ROUTE397.setToField(CString("set_fraction"));
ROUTE397.setToNode(CString("l_middle0_RotationInterpolator"));
Scene18.addChild(&ROUTE397);

ROUTE& ROUTE398 =  ROUTE();
ROUTE398.setFromField(CString("fraction_changed"));
ROUTE398.setFromNode(CString("KickTimer"));
ROUTE398.setToField(CString("set_fraction"));
ROUTE398.setToNode(CString("l_middle1_RotationInterpolator"));
Scene18.addChild(&ROUTE398);

ROUTE& ROUTE399 =  ROUTE();
ROUTE399.setFromField(CString("fraction_changed"));
ROUTE399.setFromNode(CString("KickTimer"));
ROUTE399.setToField(CString("set_fraction"));
ROUTE399.setToNode(CString("l_middle2_RotationInterpolator"));
Scene18.addChild(&ROUTE399);

ROUTE& ROUTE400 =  ROUTE();
ROUTE400.setFromField(CString("fraction_changed"));
ROUTE400.setFromNode(CString("KickTimer"));
ROUTE400.setToField(CString("set_fraction"));
ROUTE400.setToNode(CString("l_middle3_RotationInterpolator"));
Scene18.addChild(&ROUTE400);

ROUTE& ROUTE401 =  ROUTE();
ROUTE401.setFromField(CString("fraction_changed"));
ROUTE401.setFromNode(CString("KickTimer"));
ROUTE401.setToField(CString("set_fraction"));
ROUTE401.setToNode(CString("l_ring0_RotationInterpolator"));
Scene18.addChild(&ROUTE401);

ROUTE& ROUTE402 =  ROUTE();
ROUTE402.setFromField(CString("fraction_changed"));
ROUTE402.setFromNode(CString("KickTimer"));
ROUTE402.setToField(CString("set_fraction"));
ROUTE402.setToNode(CString("l_ring1_RotationInterpolator"));
Scene18.addChild(&ROUTE402);

ROUTE& ROUTE403 =  ROUTE();
ROUTE403.setFromField(CString("fraction_changed"));
ROUTE403.setFromNode(CString("KickTimer"));
ROUTE403.setToField(CString("set_fraction"));
ROUTE403.setToNode(CString("l_ring2_RotationInterpolator"));
Scene18.addChild(&ROUTE403);

ROUTE& ROUTE404 =  ROUTE();
ROUTE404.setFromField(CString("fraction_changed"));
ROUTE404.setFromNode(CString("KickTimer"));
ROUTE404.setToField(CString("set_fraction"));
ROUTE404.setToNode(CString("l_ring3_RotationInterpolator"));
Scene18.addChild(&ROUTE404);

ROUTE& ROUTE405 =  ROUTE();
ROUTE405.setFromField(CString("fraction_changed"));
ROUTE405.setFromNode(CString("KickTimer"));
ROUTE405.setToField(CString("set_fraction"));
ROUTE405.setToNode(CString("l_pinky0_RotationInterpolator"));
Scene18.addChild(&ROUTE405);

ROUTE& ROUTE406 =  ROUTE();
ROUTE406.setFromField(CString("fraction_changed"));
ROUTE406.setFromNode(CString("KickTimer"));
ROUTE406.setToField(CString("set_fraction"));
ROUTE406.setToNode(CString("l_pinky1_RotationInterpolator"));
Scene18.addChild(&ROUTE406);

ROUTE& ROUTE407 =  ROUTE();
ROUTE407.setFromField(CString("fraction_changed"));
ROUTE407.setFromNode(CString("KickTimer"));
ROUTE407.setToField(CString("set_fraction"));
ROUTE407.setToNode(CString("l_pinky2_RotationInterpolator"));
Scene18.addChild(&ROUTE407);

ROUTE& ROUTE408 =  ROUTE();
ROUTE408.setFromField(CString("fraction_changed"));
ROUTE408.setFromNode(CString("KickTimer"));
ROUTE408.setToField(CString("set_fraction"));
ROUTE408.setToNode(CString("l_pinky3_RotationInterpolator"));
Scene18.addChild(&ROUTE408);

ROUTE& ROUTE409 =  ROUTE();
ROUTE409.setFromField(CString("fraction_changed"));
ROUTE409.setFromNode(CString("KickTimer"));
ROUTE409.setToField(CString("set_fraction"));
ROUTE409.setToNode(CString("r_sternoclavicular_RotationInterpolator"));
Scene18.addChild(&ROUTE409);

ROUTE& ROUTE410 =  ROUTE();
ROUTE410.setFromField(CString("fraction_changed"));
ROUTE410.setFromNode(CString("KickTimer"));
ROUTE410.setToField(CString("set_fraction"));
ROUTE410.setToNode(CString("r_acromioclavicular_RotationInterpolator"));
Scene18.addChild(&ROUTE410);

ROUTE& ROUTE411 =  ROUTE();
ROUTE411.setFromField(CString("fraction_changed"));
ROUTE411.setFromNode(CString("KickTimer"));
ROUTE411.setToField(CString("set_fraction"));
ROUTE411.setToNode(CString("r_shoulder_RotationInterpolator"));
Scene18.addChild(&ROUTE411);

ROUTE& ROUTE412 =  ROUTE();
ROUTE412.setFromField(CString("fraction_changed"));
ROUTE412.setFromNode(CString("KickTimer"));
ROUTE412.setToField(CString("set_fraction"));
ROUTE412.setToNode(CString("r_elbow_RotationInterpolator"));
Scene18.addChild(&ROUTE412);

ROUTE& ROUTE413 =  ROUTE();
ROUTE413.setFromField(CString("fraction_changed"));
ROUTE413.setFromNode(CString("KickTimer"));
ROUTE413.setToField(CString("set_fraction"));
ROUTE413.setToNode(CString("r_wrist_RotationInterpolator"));
Scene18.addChild(&ROUTE413);

ROUTE& ROUTE414 =  ROUTE();
ROUTE414.setFromField(CString("fraction_changed"));
ROUTE414.setFromNode(CString("KickTimer"));
ROUTE414.setToField(CString("set_fraction"));
ROUTE414.setToNode(CString("r_thumb1_RotationInterpolator"));
Scene18.addChild(&ROUTE414);

ROUTE& ROUTE415 =  ROUTE();
ROUTE415.setFromField(CString("fraction_changed"));
ROUTE415.setFromNode(CString("KickTimer"));
ROUTE415.setToField(CString("set_fraction"));
ROUTE415.setToNode(CString("r_thumb2_RotationInterpolator"));
Scene18.addChild(&ROUTE415);

ROUTE& ROUTE416 =  ROUTE();
ROUTE416.setFromField(CString("fraction_changed"));
ROUTE416.setFromNode(CString("KickTimer"));
ROUTE416.setToField(CString("set_fraction"));
ROUTE416.setToNode(CString("r_thumb3_RotationInterpolator"));
Scene18.addChild(&ROUTE416);

ROUTE& ROUTE417 =  ROUTE();
ROUTE417.setFromField(CString("fraction_changed"));
ROUTE417.setFromNode(CString("KickTimer"));
ROUTE417.setToField(CString("set_fraction"));
ROUTE417.setToNode(CString("r_index0_RotationInterpolator"));
Scene18.addChild(&ROUTE417);

ROUTE& ROUTE418 =  ROUTE();
ROUTE418.setFromField(CString("fraction_changed"));
ROUTE418.setFromNode(CString("KickTimer"));
ROUTE418.setToField(CString("set_fraction"));
ROUTE418.setToNode(CString("r_index1_RotationInterpolator"));
Scene18.addChild(&ROUTE418);

ROUTE& ROUTE419 =  ROUTE();
ROUTE419.setFromField(CString("fraction_changed"));
ROUTE419.setFromNode(CString("KickTimer"));
ROUTE419.setToField(CString("set_fraction"));
ROUTE419.setToNode(CString("r_index2_RotationInterpolator"));
Scene18.addChild(&ROUTE419);

ROUTE& ROUTE420 =  ROUTE();
ROUTE420.setFromField(CString("fraction_changed"));
ROUTE420.setFromNode(CString("KickTimer"));
ROUTE420.setToField(CString("set_fraction"));
ROUTE420.setToNode(CString("r_index3_RotationInterpolator"));
Scene18.addChild(&ROUTE420);

ROUTE& ROUTE421 =  ROUTE();
ROUTE421.setFromField(CString("fraction_changed"));
ROUTE421.setFromNode(CString("KickTimer"));
ROUTE421.setToField(CString("set_fraction"));
ROUTE421.setToNode(CString("r_middle0_RotationInterpolator"));
Scene18.addChild(&ROUTE421);

ROUTE& ROUTE422 =  ROUTE();
ROUTE422.setFromField(CString("fraction_changed"));
ROUTE422.setFromNode(CString("KickTimer"));
ROUTE422.setToField(CString("set_fraction"));
ROUTE422.setToNode(CString("r_middle1_RotationInterpolator"));
Scene18.addChild(&ROUTE422);

ROUTE& ROUTE423 =  ROUTE();
ROUTE423.setFromField(CString("fraction_changed"));
ROUTE423.setFromNode(CString("KickTimer"));
ROUTE423.setToField(CString("set_fraction"));
ROUTE423.setToNode(CString("r_middle2_RotationInterpolator"));
Scene18.addChild(&ROUTE423);

ROUTE& ROUTE424 =  ROUTE();
ROUTE424.setFromField(CString("fraction_changed"));
ROUTE424.setFromNode(CString("KickTimer"));
ROUTE424.setToField(CString("set_fraction"));
ROUTE424.setToNode(CString("r_middle3_RotationInterpolator"));
Scene18.addChild(&ROUTE424);

ROUTE& ROUTE425 =  ROUTE();
ROUTE425.setFromField(CString("fraction_changed"));
ROUTE425.setFromNode(CString("KickTimer"));
ROUTE425.setToField(CString("set_fraction"));
ROUTE425.setToNode(CString("r_ring0_RotationInterpolator"));
Scene18.addChild(&ROUTE425);

ROUTE& ROUTE426 =  ROUTE();
ROUTE426.setFromField(CString("fraction_changed"));
ROUTE426.setFromNode(CString("KickTimer"));
ROUTE426.setToField(CString("set_fraction"));
ROUTE426.setToNode(CString("r_ring1_RotationInterpolator"));
Scene18.addChild(&ROUTE426);

ROUTE& ROUTE427 =  ROUTE();
ROUTE427.setFromField(CString("fraction_changed"));
ROUTE427.setFromNode(CString("KickTimer"));
ROUTE427.setToField(CString("set_fraction"));
ROUTE427.setToNode(CString("r_ring2_RotationInterpolator"));
Scene18.addChild(&ROUTE427);

ROUTE& ROUTE428 =  ROUTE();
ROUTE428.setFromField(CString("fraction_changed"));
ROUTE428.setFromNode(CString("KickTimer"));
ROUTE428.setToField(CString("set_fraction"));
ROUTE428.setToNode(CString("r_ring3_RotationInterpolator"));
Scene18.addChild(&ROUTE428);

ROUTE& ROUTE429 =  ROUTE();
ROUTE429.setFromField(CString("fraction_changed"));
ROUTE429.setFromNode(CString("KickTimer"));
ROUTE429.setToField(CString("set_fraction"));
ROUTE429.setToNode(CString("r_pinky0_RotationInterpolator"));
Scene18.addChild(&ROUTE429);

ROUTE& ROUTE430 =  ROUTE();
ROUTE430.setFromField(CString("fraction_changed"));
ROUTE430.setFromNode(CString("KickTimer"));
ROUTE430.setToField(CString("set_fraction"));
ROUTE430.setToNode(CString("r_pinky1_RotationInterpolator"));
Scene18.addChild(&ROUTE430);

ROUTE& ROUTE431 =  ROUTE();
ROUTE431.setFromField(CString("fraction_changed"));
ROUTE431.setFromNode(CString("KickTimer"));
ROUTE431.setToField(CString("set_fraction"));
ROUTE431.setToNode(CString("r_pinky2_RotationInterpolator"));
Scene18.addChild(&ROUTE431);

ROUTE& ROUTE432 =  ROUTE();
ROUTE432.setFromField(CString("fraction_changed"));
ROUTE432.setFromNode(CString("KickTimer"));
ROUTE432.setToField(CString("set_fraction"));
ROUTE432.setToNode(CString("r_pinky3_RotationInterpolator"));
Scene18.addChild(&ROUTE432);

//Routes from Interpolators to Joe_ model Joints
ROUTE& ROUTE433 =  ROUTE();
ROUTE433.setFromField(CString("value_changed"));
ROUTE433.setFromNode(CString("HumanoidRoot_RotationInterpolator"));
ROUTE433.setToField(CString("set_rotation"));
ROUTE433.setToNode(CString("Joe_humanoid_root"));
Scene18.addChild(&ROUTE433);

ROUTE& ROUTE434 =  ROUTE();
ROUTE434.setFromField(CString("value_changed"));
ROUTE434.setFromNode(CString("HumanoidRoot_TranslationInterpolator"));
ROUTE434.setToField(CString("set_translation"));
ROUTE434.setToNode(CString("Joe_humanoid_root"));
Scene18.addChild(&ROUTE434);

ROUTE& ROUTE435 =  ROUTE();
ROUTE435.setFromField(CString("value_changed"));
ROUTE435.setFromNode(CString("sacroiliac_RotationInterpolator"));
ROUTE435.setToField(CString("set_rotation"));
ROUTE435.setToNode(CString("Joe_sacroiliac"));
Scene18.addChild(&ROUTE435);

ROUTE& ROUTE436 =  ROUTE();
ROUTE436.setFromField(CString("value_changed"));
ROUTE436.setFromNode(CString("l_hip_RotationInterpolator"));
ROUTE436.setToField(CString("set_rotation"));
ROUTE436.setToNode(CString("Joe_l_hip"));
Scene18.addChild(&ROUTE436);

ROUTE& ROUTE437 =  ROUTE();
ROUTE437.setFromField(CString("value_changed"));
ROUTE437.setFromNode(CString("l_knee_RotationInterpolator"));
ROUTE437.setToField(CString("set_rotation"));
ROUTE437.setToNode(CString("Joe_l_knee"));
Scene18.addChild(&ROUTE437);

ROUTE& ROUTE438 =  ROUTE();
ROUTE438.setFromField(CString("value_changed"));
ROUTE438.setFromNode(CString("l_ankle_RotationInterpolator"));
ROUTE438.setToField(CString("set_rotation"));
ROUTE438.setToNode(CString("Joe_l_talocrural"));
Scene18.addChild(&ROUTE438);

ROUTE& ROUTE439 =  ROUTE();
ROUTE439.setFromField(CString("value_changed"));
ROUTE439.setFromNode(CString("l_subtalar_RotationInterpolator"));
ROUTE439.setToField(CString("set_rotation"));
ROUTE439.setToNode(CString("Joe_l_tarsometatarsal_2"));
Scene18.addChild(&ROUTE439);

ROUTE& ROUTE440 =  ROUTE();
ROUTE440.setFromField(CString("value_changed"));
ROUTE440.setFromNode(CString("l_midtarsal_RotationInterpolator"));
ROUTE440.setToField(CString("set_rotation"));
ROUTE440.setToNode(CString("Joe_l_metatarsophalangeal_2"));
Scene18.addChild(&ROUTE440);

ROUTE& ROUTE441 =  ROUTE();
ROUTE441.setFromField(CString("value_changed"));
ROUTE441.setFromNode(CString("l_metatarsal_RotationInterpolator"));
ROUTE441.setToField(CString("set_rotation"));
ROUTE441.setToNode(CString("Joe_l_tarsal_distal_interphalangeal_2"));
Scene18.addChild(&ROUTE441);

ROUTE& ROUTE442 =  ROUTE();
ROUTE442.setFromField(CString("value_changed"));
ROUTE442.setFromNode(CString("r_hip_RotationInterpolator"));
ROUTE442.setToField(CString("set_rotation"));
ROUTE442.setToNode(CString("Joe_r_hip"));
Scene18.addChild(&ROUTE442);

ROUTE& ROUTE443 =  ROUTE();
ROUTE443.setFromField(CString("value_changed"));
ROUTE443.setFromNode(CString("r_knee_RotationInterpolator"));
ROUTE443.setToField(CString("set_rotation"));
ROUTE443.setToNode(CString("Joe_r_knee"));
Scene18.addChild(&ROUTE443);

ROUTE& ROUTE444 =  ROUTE();
ROUTE444.setFromField(CString("value_changed"));
ROUTE444.setFromNode(CString("r_ankle_RotationInterpolator"));
ROUTE444.setToField(CString("set_rotation"));
ROUTE444.setToNode(CString("Joe_r_talocrural"));
Scene18.addChild(&ROUTE444);

ROUTE& ROUTE445 =  ROUTE();
ROUTE445.setFromField(CString("value_changed"));
ROUTE445.setFromNode(CString("r_subtalar_RotationInterpolator"));
ROUTE445.setToField(CString("set_rotation"));
ROUTE445.setToNode(CString("Joe_r_tarsometatarsal_2"));
Scene18.addChild(&ROUTE445);

ROUTE& ROUTE446 =  ROUTE();
ROUTE446.setFromField(CString("value_changed"));
ROUTE446.setFromNode(CString("r_midtarsal_RotationInterpolator"));
ROUTE446.setToField(CString("set_rotation"));
ROUTE446.setToNode(CString("Joe_r_metatarsophalangeal_2"));
Scene18.addChild(&ROUTE446);

ROUTE& ROUTE447 =  ROUTE();
ROUTE447.setFromField(CString("value_changed"));
ROUTE447.setFromNode(CString("r_metatarsal_RotationInterpolator"));
ROUTE447.setToField(CString("set_rotation"));
ROUTE447.setToNode(CString("Joe_r_tarsal_distal_interphalangeal_2"));
Scene18.addChild(&ROUTE447);

ROUTE& ROUTE448 =  ROUTE();
ROUTE448.setFromField(CString("value_changed"));
ROUTE448.setFromNode(CString("vl5_RotationInterpolator"));
ROUTE448.setToField(CString("set_rotation"));
ROUTE448.setToNode(CString("Joe_vl5"));
Scene18.addChild(&ROUTE448);

ROUTE& ROUTE449 =  ROUTE();
ROUTE449.setFromField(CString("value_changed"));
ROUTE449.setFromNode(CString("vl4_RotationInterpolator"));
ROUTE449.setToField(CString("set_rotation"));
ROUTE449.setToNode(CString("Joe_vl4"));
Scene18.addChild(&ROUTE449);

ROUTE& ROUTE450 =  ROUTE();
ROUTE450.setFromField(CString("value_changed"));
ROUTE450.setFromNode(CString("vl3_RotationInterpolator"));
ROUTE450.setToField(CString("set_rotation"));
ROUTE450.setToNode(CString("Joe_vl3"));
Scene18.addChild(&ROUTE450);

ROUTE& ROUTE451 =  ROUTE();
ROUTE451.setFromField(CString("value_changed"));
ROUTE451.setFromNode(CString("vl2_RotationInterpolator"));
ROUTE451.setToField(CString("set_rotation"));
ROUTE451.setToNode(CString("Joe_vl2"));
Scene18.addChild(&ROUTE451);

ROUTE& ROUTE452 =  ROUTE();
ROUTE452.setFromField(CString("value_changed"));
ROUTE452.setFromNode(CString("vl1_RotationInterpolator"));
ROUTE452.setToField(CString("set_rotation"));
ROUTE452.setToNode(CString("Joe_vl1"));
Scene18.addChild(&ROUTE452);

ROUTE& ROUTE453 =  ROUTE();
ROUTE453.setFromField(CString("value_changed"));
ROUTE453.setFromNode(CString("vt12_RotationInterpolator"));
ROUTE453.setToField(CString("set_rotation"));
ROUTE453.setToNode(CString("Joe_vt12"));
Scene18.addChild(&ROUTE453);

ROUTE& ROUTE454 =  ROUTE();
ROUTE454.setFromField(CString("value_changed"));
ROUTE454.setFromNode(CString("vt11_RotationInterpolator"));
ROUTE454.setToField(CString("set_rotation"));
ROUTE454.setToNode(CString("Joe_vt11"));
Scene18.addChild(&ROUTE454);

ROUTE& ROUTE455 =  ROUTE();
ROUTE455.setFromField(CString("value_changed"));
ROUTE455.setFromNode(CString("vt10_RotationInterpolator"));
ROUTE455.setToField(CString("set_rotation"));
ROUTE455.setToNode(CString("Joe_vt10"));
Scene18.addChild(&ROUTE455);

ROUTE& ROUTE456 =  ROUTE();
ROUTE456.setFromField(CString("value_changed"));
ROUTE456.setFromNode(CString("vt9_RotationInterpolator"));
ROUTE456.setToField(CString("set_rotation"));
ROUTE456.setToNode(CString("Joe_vt9"));
Scene18.addChild(&ROUTE456);

ROUTE& ROUTE457 =  ROUTE();
ROUTE457.setFromField(CString("value_changed"));
ROUTE457.setFromNode(CString("vt8_RotationInterpolator"));
ROUTE457.setToField(CString("set_rotation"));
ROUTE457.setToNode(CString("Joe_vt8"));
Scene18.addChild(&ROUTE457);

ROUTE& ROUTE458 =  ROUTE();
ROUTE458.setFromField(CString("value_changed"));
ROUTE458.setFromNode(CString("vt7_RotationInterpolator"));
ROUTE458.setToField(CString("set_rotation"));
ROUTE458.setToNode(CString("Joe_vt7"));
Scene18.addChild(&ROUTE458);

ROUTE& ROUTE459 =  ROUTE();
ROUTE459.setFromField(CString("value_changed"));
ROUTE459.setFromNode(CString("vt6_RotationInterpolator"));
ROUTE459.setToField(CString("set_rotation"));
ROUTE459.setToNode(CString("Joe_vt6"));
Scene18.addChild(&ROUTE459);

ROUTE& ROUTE460 =  ROUTE();
ROUTE460.setFromField(CString("value_changed"));
ROUTE460.setFromNode(CString("vt5_RotationInterpolator"));
ROUTE460.setToField(CString("set_rotation"));
ROUTE460.setToNode(CString("Joe_vt5"));
Scene18.addChild(&ROUTE460);

ROUTE& ROUTE461 =  ROUTE();
ROUTE461.setFromField(CString("value_changed"));
ROUTE461.setFromNode(CString("vt4_RotationInterpolator"));
ROUTE461.setToField(CString("set_rotation"));
ROUTE461.setToNode(CString("Joe_vt4"));
Scene18.addChild(&ROUTE461);

ROUTE& ROUTE462 =  ROUTE();
ROUTE462.setFromField(CString("value_changed"));
ROUTE462.setFromNode(CString("vt3_RotationInterpolator"));
ROUTE462.setToField(CString("set_rotation"));
ROUTE462.setToNode(CString("Joe_vt3"));
Scene18.addChild(&ROUTE462);

ROUTE& ROUTE463 =  ROUTE();
ROUTE463.setFromField(CString("value_changed"));
ROUTE463.setFromNode(CString("vt2_RotationInterpolator"));
ROUTE463.setToField(CString("set_rotation"));
ROUTE463.setToNode(CString("Joe_vt2"));
Scene18.addChild(&ROUTE463);

ROUTE& ROUTE464 =  ROUTE();
ROUTE464.setFromField(CString("value_changed"));
ROUTE464.setFromNode(CString("vt1_RotationInterpolator"));
ROUTE464.setToField(CString("set_rotation"));
ROUTE464.setToNode(CString("Joe_vt1"));
Scene18.addChild(&ROUTE464);

ROUTE& ROUTE465 =  ROUTE();
ROUTE465.setFromField(CString("value_changed"));
ROUTE465.setFromNode(CString("vc7_RotationInterpolator"));
ROUTE465.setToField(CString("set_rotation"));
ROUTE465.setToNode(CString("Joe_vc7"));
Scene18.addChild(&ROUTE465);

ROUTE& ROUTE466 =  ROUTE();
ROUTE466.setFromField(CString("value_changed"));
ROUTE466.setFromNode(CString("vc6_RotationInterpolator"));
ROUTE466.setToField(CString("set_rotation"));
ROUTE466.setToNode(CString("Joe_vc6"));
Scene18.addChild(&ROUTE466);

ROUTE& ROUTE467 =  ROUTE();
ROUTE467.setFromField(CString("value_changed"));
ROUTE467.setFromNode(CString("vc5_RotationInterpolator"));
ROUTE467.setToField(CString("set_rotation"));
ROUTE467.setToNode(CString("Joe_vc5"));
Scene18.addChild(&ROUTE467);

ROUTE& ROUTE468 =  ROUTE();
ROUTE468.setFromField(CString("value_changed"));
ROUTE468.setFromNode(CString("vc4_RotationInterpolator"));
ROUTE468.setToField(CString("set_rotation"));
ROUTE468.setToNode(CString("Joe_vc4"));
Scene18.addChild(&ROUTE468);

ROUTE& ROUTE469 =  ROUTE();
ROUTE469.setFromField(CString("value_changed"));
ROUTE469.setFromNode(CString("vc3_RotationInterpolator"));
ROUTE469.setToField(CString("set_rotation"));
ROUTE469.setToNode(CString("Joe_vc3"));
Scene18.addChild(&ROUTE469);

ROUTE& ROUTE470 =  ROUTE();
ROUTE470.setFromField(CString("value_changed"));
ROUTE470.setFromNode(CString("vc2_RotationInterpolator"));
ROUTE470.setToField(CString("set_rotation"));
ROUTE470.setToNode(CString("Joe_vc2"));
Scene18.addChild(&ROUTE470);

ROUTE& ROUTE471 =  ROUTE();
ROUTE471.setFromField(CString("value_changed"));
ROUTE471.setFromNode(CString("vc1_RotationInterpolator"));
ROUTE471.setToField(CString("set_rotation"));
ROUTE471.setToNode(CString("Joe_vc1"));
Scene18.addChild(&ROUTE471);

ROUTE& ROUTE472 =  ROUTE();
ROUTE472.setFromField(CString("value_changed"));
ROUTE472.setFromNode(CString("skullbase_RotationInterpolator"));
ROUTE472.setToField(CString("set_rotation"));
ROUTE472.setToNode(CString("Joe_skullbase"));
Scene18.addChild(&ROUTE472);

ROUTE& ROUTE473 =  ROUTE();
ROUTE473.setFromField(CString("value_changed"));
ROUTE473.setFromNode(CString("l_eyelid_joint_RotationInterpolator"));
ROUTE473.setToField(CString("set_rotation"));
ROUTE473.setToNode(CString("Joe_l_eyelid_joint"));
Scene18.addChild(&ROUTE473);

ROUTE& ROUTE474 =  ROUTE();
ROUTE474.setFromField(CString("value_changed"));
ROUTE474.setFromNode(CString("l_eyeball_joint_RotationInterpolator"));
ROUTE474.setToField(CString("set_rotation"));
ROUTE474.setToNode(CString("Joe_l_eyeball_joint"));
Scene18.addChild(&ROUTE474);

ROUTE& ROUTE475 =  ROUTE();
ROUTE475.setFromField(CString("value_changed"));
ROUTE475.setFromNode(CString("l_eyebrow_joint_RotationInterpolator"));
ROUTE475.setToField(CString("set_rotation"));
ROUTE475.setToNode(CString("Joe_l_eyebrow_joint"));
Scene18.addChild(&ROUTE475);

ROUTE& ROUTE476 =  ROUTE();
ROUTE476.setFromField(CString("value_changed"));
ROUTE476.setFromNode(CString("r_eyelid_joint_RotationInterpolator"));
ROUTE476.setToField(CString("set_rotation"));
ROUTE476.setToNode(CString("Joe_r_eyelid_joint"));
Scene18.addChild(&ROUTE476);

ROUTE& ROUTE477 =  ROUTE();
ROUTE477.setFromField(CString("value_changed"));
ROUTE477.setFromNode(CString("r_eyeball_joint_RotationInterpolator"));
ROUTE477.setToField(CString("set_rotation"));
ROUTE477.setToNode(CString("Joe_r_eyeball_joint"));
Scene18.addChild(&ROUTE477);

ROUTE& ROUTE478 =  ROUTE();
ROUTE478.setFromField(CString("value_changed"));
ROUTE478.setFromNode(CString("r_eyebrow_joint_RotationInterpolator"));
ROUTE478.setToField(CString("set_rotation"));
ROUTE478.setToNode(CString("Joe_r_eyebrow_joint"));
Scene18.addChild(&ROUTE478);

ROUTE& ROUTE479 =  ROUTE();
ROUTE479.setFromField(CString("value_changed"));
ROUTE479.setFromNode(CString("temporomandibular_RotationInterpolator"));
ROUTE479.setToField(CString("set_rotation"));
ROUTE479.setToNode(CString("Joe_temporomandibular"));
Scene18.addChild(&ROUTE479);

ROUTE& ROUTE480 =  ROUTE();
ROUTE480.setFromField(CString("value_changed"));
ROUTE480.setFromNode(CString("l_sternoclavicular_RotationInterpolator"));
ROUTE480.setToField(CString("set_rotation"));
ROUTE480.setToNode(CString("Joe_l_sternoclavicular"));
Scene18.addChild(&ROUTE480);

ROUTE& ROUTE481 =  ROUTE();
ROUTE481.setFromField(CString("value_changed"));
ROUTE481.setFromNode(CString("l_acromioclavicular_RotationInterpolator"));
ROUTE481.setToField(CString("set_rotation"));
ROUTE481.setToNode(CString("Joe_l_acromioclavicular"));
Scene18.addChild(&ROUTE481);

ROUTE& ROUTE482 =  ROUTE();
ROUTE482.setFromField(CString("value_changed"));
ROUTE482.setFromNode(CString("l_shoulder_RotationInterpolator"));
ROUTE482.setToField(CString("set_rotation"));
ROUTE482.setToNode(CString("Joe_l_shoulder"));
Scene18.addChild(&ROUTE482);

ROUTE& ROUTE483 =  ROUTE();
ROUTE483.setFromField(CString("value_changed"));
ROUTE483.setFromNode(CString("l_elbow_RotationInterpolator"));
ROUTE483.setToField(CString("set_rotation"));
ROUTE483.setToNode(CString("Joe_l_elbow"));
Scene18.addChild(&ROUTE483);

ROUTE& ROUTE484 =  ROUTE();
ROUTE484.setFromField(CString("value_changed"));
ROUTE484.setFromNode(CString("l_wrist_RotationInterpolator"));
ROUTE484.setToField(CString("set_rotation"));
ROUTE484.setToNode(CString("Joe_l_radiocarpal"));
Scene18.addChild(&ROUTE484);

ROUTE& ROUTE485 =  ROUTE();
ROUTE485.setFromField(CString("value_changed"));
ROUTE485.setFromNode(CString("l_thumb1_RotationInterpolator"));
ROUTE485.setToField(CString("set_rotation"));
ROUTE485.setToNode(CString("Joe_l_carpometacarpal_1"));
Scene18.addChild(&ROUTE485);

ROUTE& ROUTE486 =  ROUTE();
ROUTE486.setFromField(CString("value_changed"));
ROUTE486.setFromNode(CString("l_thumb2_RotationInterpolator"));
ROUTE486.setToField(CString("set_rotation"));
ROUTE486.setToNode(CString("Joe_l_metacarpophalangeal_1"));
Scene18.addChild(&ROUTE486);

ROUTE& ROUTE487 =  ROUTE();
ROUTE487.setFromField(CString("value_changed"));
ROUTE487.setFromNode(CString("l_thumb3_RotationInterpolator"));
ROUTE487.setToField(CString("set_rotation"));
ROUTE487.setToNode(CString("Joe_l_carpal_interphalangeal_1"));
Scene18.addChild(&ROUTE487);

ROUTE& ROUTE488 =  ROUTE();
ROUTE488.setFromField(CString("value_changed"));
ROUTE488.setFromNode(CString("l_index0_RotationInterpolator"));
ROUTE488.setToField(CString("set_rotation"));
ROUTE488.setToNode(CString("Joe_l_carpometacarpal_2"));
Scene18.addChild(&ROUTE488);

ROUTE& ROUTE489 =  ROUTE();
ROUTE489.setFromField(CString("value_changed"));
ROUTE489.setFromNode(CString("l_index1_RotationInterpolator"));
ROUTE489.setToField(CString("set_rotation"));
ROUTE489.setToNode(CString("Joe_l_metacarpophalangeal_2"));
Scene18.addChild(&ROUTE489);

ROUTE& ROUTE490 =  ROUTE();
ROUTE490.setFromField(CString("value_changed"));
ROUTE490.setFromNode(CString("l_index2_RotationInterpolator"));
ROUTE490.setToField(CString("set_rotation"));
ROUTE490.setToNode(CString("Joe_l_carpal_proximal_interphalangeal_2"));
Scene18.addChild(&ROUTE490);

ROUTE& ROUTE491 =  ROUTE();
ROUTE491.setFromField(CString("value_changed"));
ROUTE491.setFromNode(CString("l_index3_RotationInterpolator"));
ROUTE491.setToField(CString("set_rotation"));
ROUTE491.setToNode(CString("Joe_l_carpal_distal_interphalangeal_2"));
Scene18.addChild(&ROUTE491);

ROUTE& ROUTE492 =  ROUTE();
ROUTE492.setFromField(CString("value_changed"));
ROUTE492.setFromNode(CString("l_middle0_RotationInterpolator"));
ROUTE492.setToField(CString("set_rotation"));
ROUTE492.setToNode(CString("Joe_l_carpometacarpal_3"));
Scene18.addChild(&ROUTE492);

ROUTE& ROUTE493 =  ROUTE();
ROUTE493.setFromField(CString("value_changed"));
ROUTE493.setFromNode(CString("l_middle1_RotationInterpolator"));
ROUTE493.setToField(CString("set_rotation"));
ROUTE493.setToNode(CString("Joe_l_metacarpophalangeal_3"));
Scene18.addChild(&ROUTE493);

ROUTE& ROUTE494 =  ROUTE();
ROUTE494.setFromField(CString("value_changed"));
ROUTE494.setFromNode(CString("l_middle2_RotationInterpolator"));
ROUTE494.setToField(CString("set_rotation"));
ROUTE494.setToNode(CString("Joe_l_carpal_proximal_interphalangeal_3"));
Scene18.addChild(&ROUTE494);

ROUTE& ROUTE495 =  ROUTE();
ROUTE495.setFromField(CString("value_changed"));
ROUTE495.setFromNode(CString("l_middle3_RotationInterpolator"));
ROUTE495.setToField(CString("set_rotation"));
ROUTE495.setToNode(CString("Joe_l_carpal_distal_interphalangeal_3"));
Scene18.addChild(&ROUTE495);

ROUTE& ROUTE496 =  ROUTE();
ROUTE496.setFromField(CString("value_changed"));
ROUTE496.setFromNode(CString("l_ring0_RotationInterpolator"));
ROUTE496.setToField(CString("set_rotation"));
ROUTE496.setToNode(CString("Joe_l_carpometacarpal_4"));
Scene18.addChild(&ROUTE496);

ROUTE& ROUTE497 =  ROUTE();
ROUTE497.setFromField(CString("value_changed"));
ROUTE497.setFromNode(CString("l_ring1_RotationInterpolator"));
ROUTE497.setToField(CString("set_rotation"));
ROUTE497.setToNode(CString("Joe_l_metacarpophalangeal_4"));
Scene18.addChild(&ROUTE497);

ROUTE& ROUTE498 =  ROUTE();
ROUTE498.setFromField(CString("value_changed"));
ROUTE498.setFromNode(CString("l_ring2_RotationInterpolator"));
ROUTE498.setToField(CString("set_rotation"));
ROUTE498.setToNode(CString("Joe_l_carpal_proximal_interphalangeal_4"));
Scene18.addChild(&ROUTE498);

ROUTE& ROUTE499 =  ROUTE();
ROUTE499.setFromField(CString("value_changed"));
ROUTE499.setFromNode(CString("l_ring3_RotationInterpolator"));
ROUTE499.setToField(CString("set_rotation"));
ROUTE499.setToNode(CString("Joe_l_carpal_distal_interphalangeal_4"));
Scene18.addChild(&ROUTE499);

ROUTE& ROUTE500 =  ROUTE();
ROUTE500.setFromField(CString("value_changed"));
ROUTE500.setFromNode(CString("l_pinky0_RotationInterpolator"));
ROUTE500.setToField(CString("set_rotation"));
ROUTE500.setToNode(CString("Joe_l_carpometacarpal_5"));
Scene18.addChild(&ROUTE500);

ROUTE& ROUTE501 =  ROUTE();
ROUTE501.setFromField(CString("value_changed"));
ROUTE501.setFromNode(CString("l_pinky1_RotationInterpolator"));
ROUTE501.setToField(CString("set_rotation"));
ROUTE501.setToNode(CString("Joe_l_metacarpophalangeal_5"));
Scene18.addChild(&ROUTE501);

ROUTE& ROUTE502 =  ROUTE();
ROUTE502.setFromField(CString("value_changed"));
ROUTE502.setFromNode(CString("l_pinky2_RotationInterpolator"));
ROUTE502.setToField(CString("set_rotation"));
ROUTE502.setToNode(CString("Joe_l_carpal_proximal_interphalangeal_5"));
Scene18.addChild(&ROUTE502);

ROUTE& ROUTE503 =  ROUTE();
ROUTE503.setFromField(CString("value_changed"));
ROUTE503.setFromNode(CString("l_pinky3_RotationInterpolator"));
ROUTE503.setToField(CString("set_rotation"));
ROUTE503.setToNode(CString("Joe_l_carpal_distal_interphalangeal_5"));
Scene18.addChild(&ROUTE503);

ROUTE& ROUTE504 =  ROUTE();
ROUTE504.setFromField(CString("value_changed"));
ROUTE504.setFromNode(CString("r_sternoclavicular_RotationInterpolator"));
ROUTE504.setToField(CString("set_rotation"));
ROUTE504.setToNode(CString("Joe_r_sternoclavicular"));
Scene18.addChild(&ROUTE504);

ROUTE& ROUTE505 =  ROUTE();
ROUTE505.setFromField(CString("value_changed"));
ROUTE505.setFromNode(CString("r_acromioclavicular_RotationInterpolator"));
ROUTE505.setToField(CString("set_rotation"));
ROUTE505.setToNode(CString("Joe_r_acromioclavicular"));
Scene18.addChild(&ROUTE505);

ROUTE& ROUTE506 =  ROUTE();
ROUTE506.setFromField(CString("value_changed"));
ROUTE506.setFromNode(CString("r_shoulder_RotationInterpolator"));
ROUTE506.setToField(CString("set_rotation"));
ROUTE506.setToNode(CString("Joe_r_shoulder"));
Scene18.addChild(&ROUTE506);

ROUTE& ROUTE507 =  ROUTE();
ROUTE507.setFromField(CString("value_changed"));
ROUTE507.setFromNode(CString("r_elbow_RotationInterpolator"));
ROUTE507.setToField(CString("set_rotation"));
ROUTE507.setToNode(CString("Joe_r_elbow"));
Scene18.addChild(&ROUTE507);

ROUTE& ROUTE508 =  ROUTE();
ROUTE508.setFromField(CString("value_changed"));
ROUTE508.setFromNode(CString("r_wrist_RotationInterpolator"));
ROUTE508.setToField(CString("set_rotation"));
ROUTE508.setToNode(CString("Joe_r_radiocarpal"));
Scene18.addChild(&ROUTE508);

ROUTE& ROUTE509 =  ROUTE();
ROUTE509.setFromField(CString("value_changed"));
ROUTE509.setFromNode(CString("r_thumb1_RotationInterpolator"));
ROUTE509.setToField(CString("set_rotation"));
ROUTE509.setToNode(CString("Joe_r_carpometacarpal_1"));
Scene18.addChild(&ROUTE509);

ROUTE& ROUTE510 =  ROUTE();
ROUTE510.setFromField(CString("value_changed"));
ROUTE510.setFromNode(CString("r_thumb2_RotationInterpolator"));
ROUTE510.setToField(CString("set_rotation"));
ROUTE510.setToNode(CString("Joe_r_metacarpophalangeal_1"));
Scene18.addChild(&ROUTE510);

ROUTE& ROUTE511 =  ROUTE();
ROUTE511.setFromField(CString("value_changed"));
ROUTE511.setFromNode(CString("r_thumb3_RotationInterpolator"));
ROUTE511.setToField(CString("set_rotation"));
ROUTE511.setToNode(CString("Joe_r_carpal_interphalangeal_1"));
Scene18.addChild(&ROUTE511);

ROUTE& ROUTE512 =  ROUTE();
ROUTE512.setFromField(CString("value_changed"));
ROUTE512.setFromNode(CString("r_index0_RotationInterpolator"));
ROUTE512.setToField(CString("set_rotation"));
ROUTE512.setToNode(CString("Joe_r_carpometacarpal_2"));
Scene18.addChild(&ROUTE512);

ROUTE& ROUTE513 =  ROUTE();
ROUTE513.setFromField(CString("value_changed"));
ROUTE513.setFromNode(CString("r_index1_RotationInterpolator"));
ROUTE513.setToField(CString("set_rotation"));
ROUTE513.setToNode(CString("Joe_r_metacarpophalangeal_2"));
Scene18.addChild(&ROUTE513);

ROUTE& ROUTE514 =  ROUTE();
ROUTE514.setFromField(CString("value_changed"));
ROUTE514.setFromNode(CString("r_index2_RotationInterpolator"));
ROUTE514.setToField(CString("set_rotation"));
ROUTE514.setToNode(CString("Joe_r_carpal_proximal_interphalangeal_2"));
Scene18.addChild(&ROUTE514);

ROUTE& ROUTE515 =  ROUTE();
ROUTE515.setFromField(CString("value_changed"));
ROUTE515.setFromNode(CString("r_index3_RotationInterpolator"));
ROUTE515.setToField(CString("set_rotation"));
ROUTE515.setToNode(CString("Joe_r_carpal_distal_interphalangeal_2"));
Scene18.addChild(&ROUTE515);

ROUTE& ROUTE516 =  ROUTE();
ROUTE516.setFromField(CString("value_changed"));
ROUTE516.setFromNode(CString("r_middle0_RotationInterpolator"));
ROUTE516.setToField(CString("set_rotation"));
ROUTE516.setToNode(CString("Joe_r_carpometacarpal_3"));
Scene18.addChild(&ROUTE516);

ROUTE& ROUTE517 =  ROUTE();
ROUTE517.setFromField(CString("value_changed"));
ROUTE517.setFromNode(CString("r_middle1_RotationInterpolator"));
ROUTE517.setToField(CString("set_rotation"));
ROUTE517.setToNode(CString("Joe_r_metacarpophalangeal_3"));
Scene18.addChild(&ROUTE517);

ROUTE& ROUTE518 =  ROUTE();
ROUTE518.setFromField(CString("value_changed"));
ROUTE518.setFromNode(CString("r_middle2_RotationInterpolator"));
ROUTE518.setToField(CString("set_rotation"));
ROUTE518.setToNode(CString("Joe_r_carpal_proximal_interphalangeal_3"));
Scene18.addChild(&ROUTE518);

ROUTE& ROUTE519 =  ROUTE();
ROUTE519.setFromField(CString("value_changed"));
ROUTE519.setFromNode(CString("r_middle3_RotationInterpolator"));
ROUTE519.setToField(CString("set_rotation"));
ROUTE519.setToNode(CString("Joe_r_carpal_distal_interphalangeal_3"));
Scene18.addChild(&ROUTE519);

ROUTE& ROUTE520 =  ROUTE();
ROUTE520.setFromField(CString("value_changed"));
ROUTE520.setFromNode(CString("r_ring0_RotationInterpolator"));
ROUTE520.setToField(CString("set_rotation"));
ROUTE520.setToNode(CString("Joe_r_carpometacarpal_4"));
Scene18.addChild(&ROUTE520);

ROUTE& ROUTE521 =  ROUTE();
ROUTE521.setFromField(CString("value_changed"));
ROUTE521.setFromNode(CString("r_ring1_RotationInterpolator"));
ROUTE521.setToField(CString("set_rotation"));
ROUTE521.setToNode(CString("Joe_r_metacarpophalangeal_4"));
Scene18.addChild(&ROUTE521);

ROUTE& ROUTE522 =  ROUTE();
ROUTE522.setFromField(CString("value_changed"));
ROUTE522.setFromNode(CString("r_ring2_RotationInterpolator"));
ROUTE522.setToField(CString("set_rotation"));
ROUTE522.setToNode(CString("Joe_r_carpal_proximal_interphalangeal_4"));
Scene18.addChild(&ROUTE522);

ROUTE& ROUTE523 =  ROUTE();
ROUTE523.setFromField(CString("value_changed"));
ROUTE523.setFromNode(CString("r_ring3_RotationInterpolator"));
ROUTE523.setToField(CString("set_rotation"));
ROUTE523.setToNode(CString("Joe_r_carpal_distal_interphalangeal_4"));
Scene18.addChild(&ROUTE523);

ROUTE& ROUTE524 =  ROUTE();
ROUTE524.setFromField(CString("value_changed"));
ROUTE524.setFromNode(CString("r_pinky0_RotationInterpolator"));
ROUTE524.setToField(CString("set_rotation"));
ROUTE524.setToNode(CString("Joe_r_carpometacarpal_5"));
Scene18.addChild(&ROUTE524);

ROUTE& ROUTE525 =  ROUTE();
ROUTE525.setFromField(CString("value_changed"));
ROUTE525.setFromNode(CString("r_pinky1_RotationInterpolator"));
ROUTE525.setToField(CString("set_rotation"));
ROUTE525.setToNode(CString("Joe_r_metacarpophalangeal_5"));
Scene18.addChild(&ROUTE525);

ROUTE& ROUTE526 =  ROUTE();
ROUTE526.setFromField(CString("value_changed"));
ROUTE526.setFromNode(CString("r_pinky2_RotationInterpolator"));
ROUTE526.setToField(CString("set_rotation"));
ROUTE526.setToNode(CString("Joe_r_carpal_proximal_interphalangeal_5"));
Scene18.addChild(&ROUTE526);

ROUTE& ROUTE527 =  ROUTE();
ROUTE527.setFromField(CString("value_changed"));
ROUTE527.setFromNode(CString("r_pinky3_RotationInterpolator"));
ROUTE527.setToField(CString("set_rotation"));
ROUTE527.setToNode(CString("Joe_r_carpal_distal_interphalangeal_5"));
Scene18.addChild(&ROUTE527);

Group& Group528 =  Group();
Group528.setDEF(CString("DisplacersAnimationGroup"));
ScalarInterpolator& ScalarInterpolator529 =  ScalarInterpolator();
ScalarInterpolator529.setDEF(CString("skull_tipInterpolator"));
ScalarInterpolator529.setKey(new float[]{0,0.1,0.2,0.35,0.6,0.7,0.85,0.88,0.94,0.97,1}, 11);
ScalarInterpolator529.setKeyValue(new float[]{0,0,0,0,0.2,0.4,1,0,1,0.4,0}, 11);
Group528.addChild(&ScalarInterpolator529);

ROUTE& ROUTE530 =  ROUTE();
ROUTE530.setFromField(CString("fraction_changed"));
ROUTE530.setFromNode(CString("KickTimer"));
ROUTE530.setToField(CString("set_fraction"));
ROUTE530.setToNode(CString("skull_tipInterpolator"));
Group528.addChild(&ROUTE530);

ROUTE& ROUTE531 =  ROUTE();
ROUTE531.setFromField(CString("value_changed"));
ROUTE531.setFromNode(CString("skull_tipInterpolator"));
ROUTE531.setToField(CString("weight"));
ROUTE531.setToNode(CString("Joe_skull_tip_raiser_action"));
Group528.addChild(&ROUTE531);

Scene18.addChild(&Group528);

Group& Group532 =  Group();
Group532.setDEF(CString("SkinTextureTransformAnimationGroup"));
ScalarInterpolator& ScalarInterpolator533 =  ScalarInterpolator();
ScalarInterpolator533.setDEF(CString("SkinInterpolator"));
ScalarInterpolator533.setKey(new float[]{0,0.2,0.4,0.5,0.6,0.7,0.8,1}, 8);
ScalarInterpolator533.setKeyValue(new float[]{0,0,0,0,0,1,2,0}, 8);
Group532.addChild(&ScalarInterpolator533);

ROUTE& ROUTE534 =  ROUTE();
ROUTE534.setFromField(CString("fraction_changed"));
ROUTE534.setFromNode(CString("KickTimer"));
ROUTE534.setToField(CString("set_fraction"));
ROUTE534.setToNode(CString("SkinInterpolator"));
Group532.addChild(&ROUTE534);

ROUTE& ROUTE535 =  ROUTE();
ROUTE535.setFromField(CString("value_changed"));
ROUTE535.setFromNode(CString("SkinInterpolator"));
ROUTE535.setToField(CString("rotation"));
ROUTE535.setToNode(CString("KickTextureTransform"));
Group532.addChild(&ROUTE535);

Scene18.addChild(&Group532);

Group& Group536 =  Group();
Transform& Transform537 =  Transform();
Transform537.setDEF(CString("SBall"));
Transform537.setRotation(new float[]{0.7,0,0.7,0.1});
Transform537.setScale(new float[]{0.23,0.23,0.23});
Transform537.setTranslation(new float[]{-0.916,0.37,-0.92});
Shape& Shape538 =  Shape();
Shape538.setDEF(CString("ball_Shape"));
Appearance& Appearance539 =  Appearance();
Appearance539.setDEF(CString("ball_Appearance"));
Material& Material540 =  Material();
Material540.setDEF(CString("ball_Material"));
Material540.setDiffuseColor(new float[]{0.3,0.3,1});
Material540.setEmissiveColor(new float[]{0.3,0.3,0.33});
Appearance539.addChild(&Material540);

ImageTexture& ImageTexture541 =  ImageTexture();
ImageTexture541.setUSE(CString("JoeSkinImageTexture"));
Appearance539.addChild(&ImageTexture541);

Shape538.addChild(&Appearance539);

IndexedFaceSet& IndexedFaceSet542 =  IndexedFaceSet();
IndexedFaceSet542.setDEF(CString("ball_IndexedFaceSet"));
IndexedFaceSet542.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,1,-1,1,13,14,-1,1,14,2,-1,2,14,15,-1,2,15,3,-1,3,15,16,-1,3,16,4,-1,4,16,17,-1,4,17,5,-1,5,17,18,-1,5,18,6,-1,6,18,19,-1,6,19,7,-1,7,19,20,-1,7,20,8,-1,8,20,21,-1,8,21,9,-1,9,21,22,-1,9,22,10,-1,10,22,23,-1,10,23,11,-1,11,23,24,-1,11,24,12,-1,12,24,13,-1,12,13,1,-1,13,25,26,-1,13,26,14,-1,14,26,27,-1,14,27,15,-1,15,27,28,-1,15,28,16,-1,16,28,29,-1,16,29,17,-1,17,29,30,-1,17,30,18,-1,18,30,31,-1,18,31,19,-1,19,31,32,-1,19,32,20,-1,20,32,33,-1,20,33,21,-1,21,33,34,-1,21,34,22,-1,22,34,35,-1,22,35,23,-1,23,35,36,-1,23,36,24,-1,24,36,25,-1,24,25,13,-1,25,37,38,-1,25,38,26,-1,26,38,39,-1,26,39,27,-1,27,39,40,-1,27,40,28,-1,28,40,41,-1,28,41,29,-1,29,41,42,-1,29,42,30,-1,30,42,43,-1,30,43,31,-1,31,43,44,-1,31,44,32,-1,32,44,45,-1,32,45,33,-1,33,45,46,-1,33,46,34,-1,34,46,47,-1,34,47,35,-1,35,47,48,-1,35,48,36,-1,36,48,37,-1,36,37,25,-1,37,49,50,-1,37,50,38,-1,38,50,51,-1,38,51,39,-1,39,51,52,-1,39,52,40,-1,40,52,53,-1,40,53,41,-1,41,53,54,-1,41,54,42,-1,42,54,55,-1,42,55,43,-1,43,55,56,-1,43,56,44,-1,44,56,57,-1,44,57,45,-1,45,57,58,-1,45,58,46,-1,46,58,59,-1,46,59,47,-1,47,59,60,-1,47,60,48,-1,48,60,49,-1,48,49,37,-1,61,50,49,-1,61,51,50,-1,61,52,51,-1,61,53,52,-1,61,54,53,-1,61,55,54,-1,61,56,55,-1,61,57,56,-1,61,58,57,-1,61,59,58,-1,61,60,59,-1,61,49,60,-1}, 480);
Coordinate& Coordinate543 =  Coordinate();
Coordinate543.setDEF(CString("Ball_Coordinates"));
Coordinate543.setPoint(new float[]{0,0.4675,0,0,0.4049,-0.2338,-0.1169,0.4049,-0.2024,-0.2024,0.4049,-0.1169,-0.2338,0.4049,0,-0.2024,0.4049,0.1169,-0.1169,0.4049,0.2024,0,0.4049,0.2338,0.1169,0.4049,0.2024,0.2024,0.4049,0.1169,0.2338,0.4049,0,0.2024,0.4049,-0.1169,0.1169,0.4049,-0.2024,0,0.2338,-0.4049,-0.2024,0.2338,-0.3506,-0.3506,0.2338,-0.2024,-0.4049,0.2338,0,-0.3506,0.2338,0.2024,-0.2024,0.2338,0.3506,0,0.2338,0.4049,0.2024,0.2338,0.3506,0.3506,0.2338,0.2024,0.4049,0.2338,0,0.3506,0.2338,-0.2024,0.2024,0.2338,-0.3506,0,0,-0.4675,-0.2338,0,-0.4049,-0.4049,0,-0.2338,-0.4675,0,0,-0.4049,0,0.2338,-0.2338,0,0.4049,0,0,0.4675,0.2338,0,0.4049,0.4049,0,0.2338,0.4675,0,0,0.4049,0,-0.2338,0.2338,0,-0.4049,0,-0.2338,-0.4049,-0.2024,-0.2338,-0.3506,-0.3506,-0.2338,-0.2024,-0.4049,-0.2338,0,-0.3506,-0.2338,0.2024,-0.2024,-0.2338,0.3506,0,-0.2338,0.4049,0.2024,-0.2338,0.3506,0.3506,-0.2338,0.2024,0.4049,-0.2338,0,0.3506,-0.2338,-0.2024,0.2024,-0.2338,-0.3506,0,-0.4049,-0.2338,-0.1169,-0.4049,-0.2024,-0.2024,-0.4049,-0.1169,-0.2338,-0.4049,0,-0.2024,-0.4049,0.1169,-0.1169,-0.4049,0.2024,0,-0.4049,0.2338,0.1169,-0.4049,0.2024,0.2024,-0.4049,0.1169,0.2338,-0.4049,0,0.2024,-0.4049,-0.1169,0.1169,-0.4049,-0.2024,0,-0.4675,0}, 186);
IndexedFaceSet542.setCoord(&Coordinate543);

Shape538.setGeometry(&IndexedFaceSet542);

Transform537.addChild(&Shape538);

Viewpoint& Viewpoint544 =  Viewpoint();
Viewpoint544.setDEF(CString("ballView_1"));
Viewpoint544.setDescription(CString("Ball View"));
Transform537.addChild(&Viewpoint544);

Group536.addChild(&Transform537);

//Ball Animation interpolators
PositionInterpolator& PositionInterpolator545 =  PositionInterpolator();
PositionInterpolator545.setDEF(CString("ball_TranslationInterpolator"));
PositionInterpolator545.setKey(new float[]{0,0.4,0.409,1}, 4);
PositionInterpolator545.setKeyValue(new float[]{-1,0.4,-1,0,0.07,0,0.05,0.06,0.05,2,4,10}, 12);
Group536.addChild(&PositionInterpolator545);

OrientationInterpolator& OrientationInterpolator546 =  OrientationInterpolator();
OrientationInterpolator546.setDEF(CString("ball_RotationInterpolator"));
OrientationInterpolator546.setKey(new float[]{0,0.4,0.41,0.71,1}, 5);
OrientationInterpolator546.setKeyValue(new float[]{1,0,1,0.25,-1,0,-1,1.35,-1,1,-1,3.35,-1,0.2,-1,3,-1,0.2,-1,3}, 20);
Group536.addChild(&OrientationInterpolator546);

//Ball Animation Routes
ROUTE& ROUTE547 =  ROUTE();
ROUTE547.setFromField(CString("fraction_changed"));
ROUTE547.setFromNode(CString("KickTimer"));
ROUTE547.setToField(CString("set_fraction"));
ROUTE547.setToNode(CString("ball_TranslationInterpolator"));
Group536.addChild(&ROUTE547);

ROUTE& ROUTE548 =  ROUTE();
ROUTE548.setFromField(CString("value_changed"));
ROUTE548.setFromNode(CString("ball_TranslationInterpolator"));
ROUTE548.setToField(CString("set_translation"));
ROUTE548.setToNode(CString("SBall"));
Group536.addChild(&ROUTE548);

ROUTE& ROUTE549 =  ROUTE();
ROUTE549.setFromField(CString("fraction_changed"));
ROUTE549.setFromNode(CString("KickTimer"));
ROUTE549.setToField(CString("set_fraction"));
ROUTE549.setToNode(CString("ball_RotationInterpolator"));
Group536.addChild(&ROUTE549);

ROUTE& ROUTE550 =  ROUTE();
ROUTE550.setFromField(CString("value_changed"));
ROUTE550.setFromNode(CString("ball_RotationInterpolator"));
ROUTE550.setToField(CString("set_rotation"));
ROUTE550.setToNode(CString("SBall"));
Group536.addChild(&ROUTE550);

Scene18.addChild(&Group536);

Group& Group551 =  Group();
Transform& Transform552 =  Transform();
Transform552.setScale(new float[]{0.2,0.2,0.2});
Shape& Shape553 =  Shape();
Shape553.setUSE(CString("AxisLinesShape"));
Transform552.addChild(&Shape553);

Group551.addChild(&Transform552);

Transform& Transform554 =  Transform();
Transform554.setDEF(CString("Circle0"));
Transform554.setScale(new float[]{1.175,1,1.175});
Shape& Shape555 =  Shape();
Shape555.setDEF(CString("circle_Shape"));
Appearance& Appearance556 =  Appearance();
Appearance556.setDEF(CString("circle0_Appearance"));
Material& Material557 =  Material();
Material557.setDEF(CString("circle0_Material"));
Material557.setAmbientIntensity(0.9);
Material557.setDiffuseColor(new float[]{0.9,0,0.7});
Material557.setEmissiveColor(new float[]{0.425,0.486,1});
Appearance556.addChild(&Material557);

Shape555.addChild(&Appearance556);

IndexedLineSet& IndexedLineSet558 =  IndexedLineSet();
IndexedLineSet558.setDEF(CString("Orbit1"));
IndexedLineSet558.setCoordIndex(new int32_t[]{0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,-1}, 62);
Coordinate& Coordinate559 =  Coordinate();
Coordinate559.setDEF(CString("circle_Coordinates"));
Coordinate559.setPoint(new float[]{1,0,0,0.995,0,-0.105,0.979,0,-0.208,0.951,0,-0.309,0.914,0,-0.407,0.866,0,-0.5,0.809,0,-0.588,0.743,0,-0.669,0.669,0,-0.743,0.588,0,-0.809,0.5,0,-0.866,0.407,0,-0.914,0.309,0,-0.951,0.208,0,-0.978,0.105,0,-0.995,0,0,-1,-0.105,0,-0.994522,-0.208,0,-0.978,-0.309,0,-0.951,-0.407,0,-0.914,-0.5,0,-0.866,-0.588,0,-0.809,-0.669,0,-0.743,-0.743,0,-0.669,-0.809,0,-0.588,-0.866,0,-0.5,-0.914,0,-0.407,-0.951,0,-0.309,-0.978,0,-0.208,-0.995,0,-0.105,-1,0,0,-0.995,0,0.105,-0.978,0,0.208,-0.951,0,0.309,-0.914,0,0.407,-0.866,0,0.5,-0.809,0,0.588,-0.743,0,0.669,-0.669,0,0.743,-0.588,0,0.809,-0.5,0,0.866,-0.407,0,0.914,-0.309,0,0.951,-0.208,0,0.978,-0.105,0,0.995,0,0,1,0.105,0,0.995,0.208,0,0.978,0.309,0,0.951,0.407,0,0.914,0.5,0,0.866,0.588,0,0.809,0.669,0,0.743,0.743,0,0.669,0.809,0,0.588,0.866,0,0.5,0.914,0,0.407,0.951,0,0.309,0.978,0,0.208,0.995,0,0.104,1,0,0}, 183);
IndexedLineSet558.setCoord(&Coordinate559);

Shape555.setGeometry(&IndexedLineSet558);

Transform554.addChild(&Shape555);

Group551.addChild(&Transform554);

Transform& Transform560 =  Transform();
Transform560.setDEF(CString("Circle1"));
Transform560.setScale(new float[]{0.5,1,0.5});
Shape& Shape561 =  Shape();
Shape561.setDEF(CString("circle1_Shape"));
Appearance& Appearance562 =  Appearance();
Appearance562.setDEF(CString("circle1_Appearance"));
Material& Material563 =  Material();
Material563.setDEF(CString("circle1_Material"));
Material563.setDiffuseColor(new float[]{0.9,0,0.7});
Material563.setEmissiveColor(new float[]{0.424956,0.483976,1});
Appearance562.addChild(&Material563);

Shape561.addChild(&Appearance562);

IndexedLineSet& IndexedLineSet564 =  IndexedLineSet();
IndexedLineSet564.setUSE(CString("Orbit1"));
Shape561.setGeometry(&IndexedLineSet564);

Transform560.addChild(&Shape561);

Group551.addChild(&Transform560);

Transform& Transform565 =  Transform();
Transform565.setDEF(CString("Circle2"));
Transform565.setScale(new float[]{0.25,1,0.25});
Shape& Shape566 =  Shape();
Shape566.setDEF(CString("circle2_Shape"));
Appearance& Appearance567 =  Appearance();
Appearance567.setDEF(CString("circle2_Appearance"));
Material& Material568 =  Material();
Material568.setDEF(CString("circle2_Material"));
Material568.setDiffuseColor(new float[]{0.9,0,0.7});
Material568.setEmissiveColor(new float[]{0.424956,0.483976,1});
Appearance567.addChild(&Material568);

Shape566.addChild(&Appearance567);

IndexedLineSet& IndexedLineSet569 =  IndexedLineSet();
IndexedLineSet569.setUSE(CString("Orbit1"));
Shape566.setGeometry(&IndexedLineSet569);

Transform565.addChild(&Shape566);

Group551.addChild(&Transform565);

Scene18.addChild(&Group551);

X3D0.setScene(&Scene18);

}
