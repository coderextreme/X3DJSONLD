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
//BS studio translation from .x3dv by Joe using BS Contact
component& component2 =  component();
component2.setName(CString("H-Anim"));
component2.setLevel(1);
head1.addChild(&component2);

meta& meta3 =  meta();
meta3.setName(CString("title"));
meta3.setContent(CString("JoeSkinTexcoordDisplacerKick.x3d"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("info"));
meta4.setContent(CString("Joe No Reservations 20200709 fix hier20161206 20161111 20160720 20121221 20040109 x3d/hanim"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("description"));
meta5.setContent(CString("The Joe model is a Humanoid with textured skin."));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("creator"));
meta6.setContent(CString("Joe Williams"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(CString("created"));
meta7.setContent(CString("9 January 2014"));
head1.addMeta(&meta7);

meta& meta8 =  meta();
meta8.setName(CString("translated"));
meta8.setContent(CString("12 January 2017"));
head1.addMeta(&meta8);

meta& meta9 =  meta();
meta9.setName(CString("modified"));
meta9.setContent(CString("09 July 2020"));
head1.addMeta(&meta9);

meta& meta10 =  meta();
meta10.setName(CString("TODO"));
meta10.setContent(CString("Record information about skin coordinates (found in comment at end of scene) as a structured MetadataSet containing MetadataString nodes"));
head1.addMeta(&meta10);

meta& meta11 =  meta();
meta11.setName(CString("translators"));
meta11.setContent(CString("Roy Walmsley and Don Brutzman"));
head1.addMeta(&meta11);

meta& meta12 =  meta();
meta12.setName(CString("identifier"));
meta12.setContent(CString("https://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/JoeSkinTexcoordDisplacerKick.x3d"));
head1.addMeta(&meta12);

meta& meta13 =  meta();
meta13.setName(CString("generator"));
meta13.setContent(CString("X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit"));
head1.addMeta(&meta13);

meta& meta14 =  meta();
meta14.setName(CString("license"));
meta14.setContent(CString("../license.html"));
head1.addMeta(&meta14);

X3D0.setHead(&head1);

Scene& Scene15 =  Scene();
WorldInfo& WorldInfo16 =  WorldInfo();
WorldInfo16.setInfo(new CString[]{CString("X3D Humanoid V1 LOA3 skeleton"), CString("skin from hanim sites, surface features, and some added points"), CString("390 points")}, 3);
WorldInfo16.setTitle(CString("X3D HANIM LOA3 Skeleton, 390 point Skin, texcoords, Displacer, teTrans for Joe_ by Joe"));
Scene15.addChild(&WorldInfo16);

NavigationInfo& NavigationInfo17 =  NavigationInfo();
NavigationInfo17.setDEF(CString("Start_NavigationInfo"));
NavigationInfo17.setHeadlight(False);
NavigationInfo17.setSpeed(2.5);
Scene15.addChild(&NavigationInfo17);

Background& Background18 =  Background();
Background18.setDEF(CString("blue_Background"));
Scene15.addChild(&Background18);

SpotLight& SpotLight19 =  SpotLight();
SpotLight19.setDEF(CString("light1"));
SpotLight19.setAmbientIntensity(0.7);
SpotLight19.setBeamWidth(1.5);
SpotLight19.setColor(new float[]{0.8,0.8,1});
SpotLight19.setCutOffAngle(0.6);
SpotLight19.setDirection(new float[]{0,0,0});
SpotLight19.setLocation(new float[]{0,3,3});
SpotLight19.setRadius(10);
Scene15.addChild(&SpotLight19);

PointLight& PointLight20 =  PointLight();
PointLight20.setDEF(CString("light2"));
PointLight20.setAmbientIntensity(0.7);
PointLight20.setColor(new float[]{0.8,0.8,1});
PointLight20.setLocation(new float[]{0,10,-7});
Scene15.addChild(&PointLight20);

//External from the Humanoid viewpoints
Viewpoint& Viewpoint21 =  Viewpoint();
Viewpoint21.setDEF(CString("Scene_InclinedView"));
Viewpoint21.setCenterOfRotation(new float[]{0,0.85,0});
Viewpoint21.setDescription(CString("Scene_Inclined View"));
Viewpoint21.setOrientation(new float[]{-0.113,0.993,0.0347,0.671});
Viewpoint21.setPosition(new float[]{1.62,1.05,3.06});
Scene15.addChild(&Viewpoint21);

Viewpoint& Viewpoint22 =  Viewpoint();
Viewpoint22.setDEF(CString("Scene_IFrontView"));
Viewpoint22.setCenterOfRotation(new float[]{0,0.8,0});
Viewpoint22.setDescription(CString("Scene_Front View"));
Viewpoint22.setPosition(new float[]{0,0.8,2.58});
Scene15.addChild(&Viewpoint22);

Viewpoint& Viewpoint23 =  Viewpoint();
Viewpoint23.setDEF(CString("Scene_ISideView"));
Viewpoint23.setCenterOfRotation(new float[]{0,0.8,0});
Viewpoint23.setDescription(CString("Scene_Side View"));
Viewpoint23.setOrientation(new float[]{0,1,0,1.5708});
Viewpoint23.setPosition(new float[]{2.6,0.5,0});
Scene15.addChild(&Viewpoint23);

Viewpoint& Viewpoint24 =  Viewpoint();
Viewpoint24.setDEF(CString("Scene_BackView"));
Viewpoint24.setCenterOfRotation(new float[]{0,1.5,0});
Viewpoint24.setDescription(CString("Scene_Back View"));
Viewpoint24.setOrientation(new float[]{0,1,0,3.14});
Viewpoint24.setPosition(new float[]{0,2.5,-3});
Scene15.addChild(&Viewpoint24);

Viewpoint& Viewpoint25 =  Viewpoint();
Viewpoint25.setDEF(CString("Scene_TopView"));
Viewpoint25.setCenterOfRotation(new float[]{0,1.5,0});
Viewpoint25.setDescription(CString("Scene_Top View"));
Viewpoint25.setOrientation(new float[]{1,0,0,-1.5708});
Viewpoint25.setPosition(new float[]{0,3.5,0});
Scene15.addChild(&Viewpoint25);

Group& Group26 =  Group();
Group26.setDEF(CString("Joe_Humanoid"));
HAnimHumanoid& HAnimHumanoid27 =  HAnimHumanoid();
HAnimHumanoid27.X3DNode::setName(CString("Human"));
HAnimHumanoid27.setDEF(CString("Joe_Human"));
HAnimHumanoid27.setVersion(CString("2.0"));
HAnimJoint& HAnimJoint28 =  HAnimJoint();
HAnimJoint28.X3DNode::setName(CString("HumanoidRoot"));
HAnimJoint28.setDEF(CString("Joe_HumanoidRoot"));
HAnimJoint28.setCenter(new float[]{0,0.875,0});
HAnimJoint28.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint28.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment29 =  HAnimSegment();
HAnimSegment29.X3DNode::setName(CString("sacrum"));
HAnimSegment29.setDEF(CString("Joe_sacrum"));
HAnimSite& HAnimSite30 =  HAnimSite();
HAnimSite30.X3DNode::setName(CString("RootFront"));
HAnimSite30.setDEF(CString("Joe_RootFront"));
Transform& Transform31 =  Transform();
Transform31.setDEF(CString("hanimcordsys"));
Transform31.setScale(new float[]{0.175,0.175,0.175});
Viewpoint& Viewpoint32 =  Viewpoint();
Viewpoint32.setDEF(CString("ViewBodyRootAxes"));
Viewpoint32.setDescription(CString("Joe_HAnim Root Coordinate Axes View"));
Transform31.addChild(&Viewpoint32);

Shape& Shape33 =  Shape();
Shape33.setDEF(CString("AxisLinesShape"));
IndexedLineSet& IndexedLineSet34 =  IndexedLineSet();
IndexedLineSet34.setColorIndex(new int[]{0,1,2}, 3);
IndexedLineSet34.setColorPerVertex(False);
IndexedLineSet34.setCoordIndex(new int32_t[]{0,1,-1,0,2,-1,0,3,-1}, 9);
Coordinate& Coordinate35 =  Coordinate();
Coordinate35.setPoint(new float[]{0,0,0,1,0,0,0,1,0,0,0,1}, 12);
IndexedLineSet34.setCoord(&Coordinate35);

CColor& Color36 =  CColor();
Color36.setColor(new float[]{1,0,0,0,0.6,0,0,0,1}, 9);
IndexedLineSet34.setColor(&Color36);

Shape33.setGeometry(&IndexedLineSet34);

Transform31.addChild(&Shape33);

HAnimSite30.addChild(&Transform31);

HAnimSegment29.addChild(&HAnimSite30);

HAnimJoint28.addChildren(&HAnimSegment29);

HAnimJoint& HAnimJoint37 =  HAnimJoint();
HAnimJoint37.X3DNode::setName(CString("sacroiliac"));
HAnimJoint37.setDEF(CString("Joe_sacroiliac"));
HAnimJoint37.setCenter(new float[]{0,0.92,0});
HAnimJoint37.setSkinCoordIndex(new int32_t[]{17,19,20,21,22,23,26,27,73,82,89,91,93}, 13);
HAnimJoint37.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1,1,1,0.35,0.35,1}, 13);
HAnimJoint37.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint37.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint& HAnimJoint38 =  HAnimJoint();
HAnimJoint38.X3DNode::setName(CString("l_hip"));
HAnimJoint38.setDEF(CString("Joe_l_hip"));
HAnimJoint38.setCenter(new float[]{0.1,0.92,0});
HAnimJoint38.setSkinCoordIndex(new int32_t[]{89,90,94,95,96,97}, 6);
HAnimJoint38.setSkinCoordWeight(new float[]{0.65,1,1,1,1,1}, 6);
HAnimJoint38.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint38.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint& HAnimJoint39 =  HAnimJoint();
HAnimJoint39.X3DNode::setName(CString("l_knee"));
HAnimJoint39.setDEF(CString("Joe_l_knee"));
HAnimJoint39.setCenter(new float[]{0.115,0.466,0});
HAnimJoint39.setSkinCoordIndex(new int32_t[]{334,335,336,337,338,339,340,341}, 8);
HAnimJoint39.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1}, 8);
HAnimJoint39.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint39.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint& HAnimJoint40 =  HAnimJoint();
HAnimJoint40.X3DNode::setName(CString("l_ankle"));
HAnimJoint40.setDEF(CString("Joe_l_ankle"));
HAnimJoint40.setCenter(new float[]{0.115,0.069,0});
HAnimJoint40.setSkinCoordIndex(new int32_t[]{342,343,344,345}, 4);
HAnimJoint40.setSkinCoordWeight(new float[]{1,1,1,1}, 4);
HAnimJoint40.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint40.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint& HAnimJoint41 =  HAnimJoint();
HAnimJoint41.X3DNode::setName(CString("l_subtalar"));
HAnimJoint41.setDEF(CString("Joe_l_subtalar"));
HAnimJoint41.setCenter(new float[]{0.115,0.031,0.03});
HAnimJoint41.setSkinCoordIndex(new int32_t[]{346,347,348,71}, 4);
HAnimJoint41.setSkinCoordWeight(new float[]{1,1,1,1}, 4);
HAnimJoint41.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint41.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint& HAnimJoint42 =  HAnimJoint();
HAnimJoint42.X3DNode::setName(CString("l_midtarsal"));
HAnimJoint42.setDEF(CString("Joe_l_midtarsal"));
HAnimJoint42.setCenter(new float[]{0.115,0.037,0.09});
HAnimJoint42.setSkinCoordIndex(new int32_t[]{349,350,351,352}, 4);
HAnimJoint42.setSkinCoordWeight(new float[]{1,1,1,1}, 4);
HAnimJoint42.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint42.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint& HAnimJoint43 =  HAnimJoint();
HAnimJoint43.X3DNode::setName(CString("l_metatarsal"));
HAnimJoint43.setDEF(CString("Joe_l_metatarsal"));
HAnimJoint43.setCenter(new float[]{0.115,0.02,0.122});
HAnimJoint43.setSkinCoordIndex(new int32_t[]{353,354,355,356,357,358,359,360,361}, 9);
HAnimJoint43.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1,1}, 9);
HAnimJoint43.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint43.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint42.addChildren(&HAnimJoint43);

HAnimJoint41.addChildren(&HAnimJoint42);

HAnimJoint40.addChildren(&HAnimJoint41);

HAnimJoint39.addChildren(&HAnimJoint40);

HAnimJoint38.addChildren(&HAnimJoint39);

HAnimJoint37.addChildren(&HAnimJoint38);

HAnimJoint& HAnimJoint44 =  HAnimJoint();
HAnimJoint44.X3DNode::setName(CString("r_hip"));
HAnimJoint44.setDEF(CString("Joe_r_hip"));
HAnimJoint44.setCenter(new float[]{-0.1,0.92,0});
HAnimJoint44.setSkinCoordIndex(new int32_t[]{91,92,98,99,100,101,362,363}, 8);
HAnimJoint44.setSkinCoordWeight(new float[]{0.65,1,0.8,1,1,1,0.4,0.8}, 8);
HAnimJoint44.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint44.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint& HAnimJoint45 =  HAnimJoint();
HAnimJoint45.X3DNode::setName(CString("r_knee"));
HAnimJoint45.setDEF(CString("Joe_r_knee"));
HAnimJoint45.setCenter(new float[]{-0.05,0.466,0});
HAnimJoint45.setSkinCoordIndex(new int32_t[]{362,363,364,365,366,367,368,369,98}, 9);
HAnimJoint45.setSkinCoordWeight(new float[]{0.6,0.2,1,1,1,1,1,1,0.2}, 9);
HAnimJoint45.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint45.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint& HAnimJoint46 =  HAnimJoint();
HAnimJoint46.X3DNode::setName(CString("r_ankle"));
HAnimJoint46.setDEF(CString("Joe_r_ankle"));
HAnimJoint46.setCenter(new float[]{-0.115,0.069,0});
HAnimJoint46.setSkinCoordIndex(new int32_t[]{370,371,372,373}, 4);
HAnimJoint46.setSkinCoordWeight(new float[]{1,1,1,1}, 4);
HAnimJoint46.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint46.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint& HAnimJoint47 =  HAnimJoint();
HAnimJoint47.X3DNode::setName(CString("r_subtalar"));
HAnimJoint47.setDEF(CString("Joe_r_subtalar"));
HAnimJoint47.setCenter(new float[]{-0.1,0.015,-0.01});
HAnimJoint47.setSkinCoordIndex(new int32_t[]{374,375,376}, 3);
HAnimJoint47.setSkinCoordWeight(new float[]{1,1,1}, 3);
HAnimJoint47.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint47.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint& HAnimJoint48 =  HAnimJoint();
HAnimJoint48.X3DNode::setName(CString("r_midtarsal"));
HAnimJoint48.setDEF(CString("Joe_r_midtarsal"));
HAnimJoint48.setCenter(new float[]{-0.115,0.037,0.09});
HAnimJoint48.setSkinCoordIndex(new int32_t[]{377,378,379,380}, 4);
HAnimJoint48.setSkinCoordWeight(new float[]{1,1,1,1}, 4);
HAnimJoint48.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint48.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint& HAnimJoint49 =  HAnimJoint();
HAnimJoint49.X3DNode::setName(CString("r_metatarsal"));
HAnimJoint49.setDEF(CString("Joe_r_metatarsal"));
HAnimJoint49.setCenter(new float[]{-0.1,0.01,0.14});
HAnimJoint49.setSkinCoordIndex(new int32_t[]{381,382,383,384,385,386,387,388,389}, 9);
HAnimJoint49.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1,1}, 9);
HAnimJoint49.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint49.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint48.addChildren(&HAnimJoint49);

HAnimJoint47.addChildren(&HAnimJoint48);

HAnimJoint46.addChildren(&HAnimJoint47);

HAnimJoint45.addChildren(&HAnimJoint46);

HAnimJoint44.addChildren(&HAnimJoint45);

HAnimJoint37.addChildren(&HAnimJoint44);

HAnimJoint28.addChildren(&HAnimJoint37);

HAnimJoint& HAnimJoint50 =  HAnimJoint();
HAnimJoint50.X3DNode::setName(CString("vl5"));
HAnimJoint50.setDEF(CString("Joe_vl5"));
HAnimJoint50.setCenter(new float[]{0,1.045,-0.095});
HAnimJoint50.setSkinCoordIndex(new int32_t[]{28,76}, 2);
HAnimJoint50.setSkinCoordWeight(new float[]{1,1}, 2);
HAnimJoint50.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint50.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint& HAnimJoint51 =  HAnimJoint();
HAnimJoint51.X3DNode::setName(CString("vl4"));
HAnimJoint51.setDEF(CString("Joe_vl4"));
HAnimJoint51.setCenter(new float[]{0,1.068,-0.085});
HAnimJoint51.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint51.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint& HAnimJoint52 =  HAnimJoint();
HAnimJoint52.X3DNode::setName(CString("vl3"));
HAnimJoint52.setDEF(CString("Joe_vl3"));
HAnimJoint52.setCenter(new float[]{0,1.092,-0.0725});
HAnimJoint52.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint52.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint& HAnimJoint53 =  HAnimJoint();
HAnimJoint53.X3DNode::setName(CString("vl2"));
HAnimJoint53.setDEF(CString("Joe_vl2"));
HAnimJoint53.setCenter(new float[]{0,1.12,-0.065});
HAnimJoint53.setSkinCoordIndex(new int32_t[]{16,18,25,83,84,85,86,87,88}, 9);
HAnimJoint53.setSkinCoordWeight(new float[]{1,1,1,1,1,1,0.7,1,0.8}, 9);
HAnimJoint53.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint53.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint& HAnimJoint54 =  HAnimJoint();
HAnimJoint54.X3DNode::setName(CString("vl1"));
HAnimJoint54.setDEF(CString("Joe_vl1"));
HAnimJoint54.setCenter(new float[]{0,1.1459,-0.0625});
HAnimJoint54.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint54.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint& HAnimJoint55 =  HAnimJoint();
HAnimJoint55.X3DNode::setName(CString("vt12"));
HAnimJoint55.setDEF(CString("Joe_vt12"));
HAnimJoint55.setCenter(new float[]{0,1.179,-0.068});
HAnimJoint55.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint55.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint& HAnimJoint56 =  HAnimJoint();
HAnimJoint56.X3DNode::setName(CString("vt11"));
HAnimJoint56.setDEF(CString("Joe_vt11"));
HAnimJoint56.setCenter(new float[]{0,1.2679,-0.081});
HAnimJoint56.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint56.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint& HAnimJoint57 =  HAnimJoint();
HAnimJoint57.X3DNode::setName(CString("vt10"));
HAnimJoint57.setDEF(CString("Joe_vt10"));
HAnimJoint57.setCenter(new float[]{0,1.242,-0.09});
HAnimJoint57.setSkinCoordIndex(new int32_t[]{15}, 1);
HAnimJoint57.setSkinCoordWeight(new float[]{1}, 1);
HAnimJoint57.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint57.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint& HAnimJoint58 =  HAnimJoint();
HAnimJoint58.X3DNode::setName(CString("vt9"));
HAnimJoint58.setDEF(CString("Joe_vt9"));
HAnimJoint58.setCenter(new float[]{0,1.268,-0.1});
HAnimJoint58.setSkinCoordIndex(new int32_t[]{13,14}, 2);
HAnimJoint58.setSkinCoordWeight(new float[]{1,1}, 2);
HAnimJoint58.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint58.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint& HAnimJoint59 =  HAnimJoint();
HAnimJoint59.X3DNode::setName(CString("vt8"));
HAnimJoint59.setDEF(CString("Joe_vt8"));
HAnimJoint59.setCenter(new float[]{0,1.294,-0.11});
HAnimJoint59.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint59.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint& HAnimJoint60 =  HAnimJoint();
HAnimJoint60.X3DNode::setName(CString("vt7"));
HAnimJoint60.setDEF(CString("Joe_vt7"));
HAnimJoint60.setCenter(new float[]{0,1.323,-0.1155});
HAnimJoint60.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint60.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint& HAnimJoint61 =  HAnimJoint();
HAnimJoint61.X3DNode::setName(CString("vt6"));
HAnimJoint61.setDEF(CString("Joe_vt6"));
HAnimJoint61.setCenter(new float[]{0,1.352,-0.12});
HAnimJoint61.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint61.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint& HAnimJoint62 =  HAnimJoint();
HAnimJoint62.X3DNode::setName(CString("vt5"));
HAnimJoint62.setDEF(CString("Joe_vt5"));
HAnimJoint62.setCenter(new float[]{0,1.381,-0.1235});
HAnimJoint62.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint62.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint& HAnimJoint63 =  HAnimJoint();
HAnimJoint63.X3DNode::setName(CString("vt4"));
HAnimJoint63.setDEF(CString("Joe_vt4"));
HAnimJoint63.setCenter(new float[]{0,1.41,-0.1235});
HAnimJoint63.setSkinCoordIndex(new int32_t[]{81}, 1);
HAnimJoint63.setSkinCoordWeight(new float[]{1}, 1);
HAnimJoint63.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint63.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint& HAnimJoint64 =  HAnimJoint();
HAnimJoint64.X3DNode::setName(CString("vt3"));
HAnimJoint64.setDEF(CString("Joe_vt3"));
HAnimJoint64.setCenter(new float[]{0,1.438,-0.12});
HAnimJoint64.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint64.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint& HAnimJoint65 =  HAnimJoint();
HAnimJoint65.X3DNode::setName(CString("vt2"));
HAnimJoint65.setDEF(CString("Joe_vt2"));
HAnimJoint65.setCenter(new float[]{0,1.468,-0.105});
HAnimJoint65.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint65.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint& HAnimJoint66 =  HAnimJoint();
HAnimJoint66.X3DNode::setName(CString("vt1"));
HAnimJoint66.setDEF(CString("Joe_vt1"));
HAnimJoint66.setCenter(new float[]{0,1.497,-0.09});
HAnimJoint66.setSkinCoordIndex(new int32_t[]{11,24}, 2);
HAnimJoint66.setSkinCoordWeight(new float[]{1,1}, 2);
HAnimJoint66.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint66.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint& HAnimJoint67 =  HAnimJoint();
HAnimJoint67.X3DNode::setName(CString("vc7"));
HAnimJoint67.setDEF(CString("Joe_vc7"));
HAnimJoint67.setCenter(new float[]{0,1.525,-0.072});
HAnimJoint67.setSkinCoordIndex(new int32_t[]{74,75}, 2);
HAnimJoint67.setSkinCoordWeight(new float[]{1,1}, 2);
HAnimJoint67.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint67.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint& HAnimJoint68 =  HAnimJoint();
HAnimJoint68.X3DNode::setName(CString("vc6"));
HAnimJoint68.setDEF(CString("Joe_vc6"));
HAnimJoint68.setCenter(new float[]{0,1.54,-0.05});
HAnimJoint68.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint68.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint& HAnimJoint69 =  HAnimJoint();
HAnimJoint69.X3DNode::setName(CString("vc5"));
HAnimJoint69.setDEF(CString("Joe_vc5"));
HAnimJoint69.setCenter(new float[]{0,1.552,-0.035});
HAnimJoint69.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint69.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint& HAnimJoint70 =  HAnimJoint();
HAnimJoint70.X3DNode::setName(CString("vc4"));
HAnimJoint70.setDEF(CString("Joe_vc4"));
HAnimJoint70.setCenter(new float[]{0,1.5675,-0.0256});
HAnimJoint70.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint70.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint& HAnimJoint71 =  HAnimJoint();
HAnimJoint71.X3DNode::setName(CString("vc3"));
HAnimJoint71.setDEF(CString("Joe_vc3"));
HAnimJoint71.setCenter(new float[]{0,1.58225,-0.0185});
HAnimJoint71.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint71.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint& HAnimJoint72 =  HAnimJoint();
HAnimJoint72.X3DNode::setName(CString("vc2"));
HAnimJoint72.setDEF(CString("Joe_vc2"));
HAnimJoint72.setCenter(new float[]{0,1.595,-0.0175});
HAnimJoint72.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint72.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint& HAnimJoint73 =  HAnimJoint();
HAnimJoint73.X3DNode::setName(CString("vc1"));
HAnimJoint73.setDEF(CString("Joe_vc1"));
HAnimJoint73.setCenter(new float[]{0,1.61,-0.015});
HAnimJoint73.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint73.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint& HAnimJoint74 =  HAnimJoint();
HAnimJoint74.X3DNode::setName(CString("skullbase"));
HAnimJoint74.setDEF(CString("Joe_skullbase"));
HAnimJoint74.setCenter(new float[]{0,1.63,-0.01});
HAnimJoint74.setSkinCoordIndex(new int32_t[]{0,1,2,3,4,5,6,7,8,9}, 10);
HAnimJoint74.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1,1,1}, 10);
HAnimJoint74.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint74.setLlimit(new float[]{0,0,0}, 3);
HAnimDisplacer& HAnimDisplacer75 =  HAnimDisplacer();
HAnimDisplacer75.X3DNode::setName(CString("skull_tip_raiser_action"));
HAnimDisplacer75.setDEF(CString("Joe_skull_tipTest"));
HAnimDisplacer75.setCoordIndex(new int32_t[]{0,1,2,3,4,5,6,7,8,9}, 10);
HAnimDisplacer75.setDisplacements(new float[]{0,0.15,0,0,0,0.15,-0.1,0,0.15,0.1,0,0.05,0,-0.02,0.05,-0.15,0,0,-0.05,0,0,0.15,0,0,0.05,0,0,0,0,-0.15}, 30);
HAnimJoint74.setDisplacers(HAnimDisplacer75);

HAnimJoint& HAnimJoint76 =  HAnimJoint();
HAnimJoint76.X3DNode::setName(CString("l_eyelid_joint"));
HAnimJoint76.setDEF(CString("Joe_l_eyelid_joint"));
HAnimJoint76.setCenter(new float[]{0.034,1.659,0.06});
HAnimJoint76.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint76.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint74.addChildren(&HAnimJoint76);

HAnimJoint& HAnimJoint77 =  HAnimJoint();
HAnimJoint77.X3DNode::setName(CString("l_eyeball_joint"));
HAnimJoint77.setDEF(CString("Joe_l_eyeball_joint"));
HAnimJoint77.setCenter(new float[]{0.034,1.659,0.06});
HAnimJoint77.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint77.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint74.addChildren(&HAnimJoint77);

HAnimJoint& HAnimJoint78 =  HAnimJoint();
HAnimJoint78.X3DNode::setName(CString("l_eyebrow_joint"));
HAnimJoint78.setDEF(CString("Joe_l_eyebrow_joint"));
HAnimJoint78.setCenter(new float[]{0.034,1.659,0.06});
HAnimJoint78.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint78.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint74.addChildren(&HAnimJoint78);

HAnimJoint& HAnimJoint79 =  HAnimJoint();
HAnimJoint79.X3DNode::setName(CString("l_eyelid_joint"));
HAnimJoint79.setDEF(CString("Joe_r_eyelid_joint"));
HAnimJoint79.setCenter(new float[]{-0.034,1.659,0.06});
HAnimJoint79.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint79.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint74.addChildren(&HAnimJoint79);

HAnimJoint& HAnimJoint80 =  HAnimJoint();
HAnimJoint80.X3DNode::setName(CString("l_eyeball_joint"));
HAnimJoint80.setDEF(CString("Joe_r_eyeball_joint"));
HAnimJoint80.setCenter(new float[]{-0.034,1.659,0.06});
HAnimJoint80.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint80.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint74.addChildren(&HAnimJoint80);

HAnimJoint& HAnimJoint81 =  HAnimJoint();
HAnimJoint81.X3DNode::setName(CString("l_eyebrow_joint"));
HAnimJoint81.setDEF(CString("Joe_r_eyebrow_joint"));
HAnimJoint81.setCenter(new float[]{-0.034,1.659,0.06});
HAnimJoint81.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint81.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint74.addChildren(&HAnimJoint81);

HAnimJoint& HAnimJoint82 =  HAnimJoint();
HAnimJoint82.X3DNode::setName(CString("temporomandibular"));
HAnimJoint82.setDEF(CString("Joe_temporomandibular"));
HAnimJoint82.setCenter(new float[]{0.034,1.659,0.06});
HAnimJoint82.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint82.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint74.addChildren(&HAnimJoint82);

HAnimJoint73.addChildren(&HAnimJoint74);

HAnimJoint72.addChildren(&HAnimJoint73);

HAnimJoint71.addChildren(&HAnimJoint72);

HAnimJoint70.addChildren(&HAnimJoint71);

HAnimJoint69.addChildren(&HAnimJoint70);

HAnimJoint68.addChildren(&HAnimJoint69);

HAnimJoint67.addChildren(&HAnimJoint68);

HAnimJoint& HAnimJoint83 =  HAnimJoint();
HAnimJoint83.X3DNode::setName(CString("l_sternoclavicular"));
HAnimJoint83.setDEF(CString("Joe_l_sternoclavicular"));
HAnimJoint83.setCenter(new float[]{0.082,1.4488,-0.0353});
HAnimJoint83.setSkinCoordIndex(new int32_t[]{12}, 1);
HAnimJoint83.setSkinCoordWeight(new float[]{1}, 1);
HAnimJoint83.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint83.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint& HAnimJoint84 =  HAnimJoint();
HAnimJoint84.X3DNode::setName(CString("l_acromioclavicular"));
HAnimJoint84.setDEF(CString("Joe_l_acromioclavicular"));
HAnimJoint84.setCenter(new float[]{0.0962,1.4269,-0.0424});
HAnimJoint84.setSkinCoordIndex(new int32_t[]{79}, 1);
HAnimJoint84.setSkinCoordWeight(new float[]{1}, 1);
HAnimJoint84.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint84.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint& HAnimJoint85 =  HAnimJoint();
HAnimJoint85.X3DNode::setName(CString("l_shoulder"));
HAnimJoint85.setDEF(CString("Joe_l_shoulder"));
HAnimJoint85.setCenter(new float[]{0.2,1.44,-0.04});
HAnimJoint85.setSkinCoordIndex(new int32_t[]{41,42,44,80,102,103,104,105}, 8);
HAnimJoint85.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1}, 8);
HAnimJoint85.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint85.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint& HAnimJoint86 =  HAnimJoint();
HAnimJoint86.X3DNode::setName(CString("l_elbow"));
HAnimJoint86.setDEF(CString("Joe_l_elbow"));
HAnimJoint86.setCenter(new float[]{0.2,1.1388,-0.04});
HAnimJoint86.setSkinCoordIndex(new int32_t[]{45,46,47,109,110,111,112,113,115,116,117,118}, 12);
HAnimJoint86.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, 15);
HAnimJoint86.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint86.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint& HAnimJoint87 =  HAnimJoint();
HAnimJoint87.X3DNode::setName(CString("l_wrist"));
HAnimJoint87.setDEF(CString("Joe_l_wrist"));
HAnimJoint87.setCenter(new float[]{0.2,0.87,-0.04});
HAnimJoint87.setSkinCoordIndex(new int32_t[]{119,120,121,122,123,124,125,126}, 8);
HAnimJoint87.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1}, 8);
HAnimJoint87.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint87.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint& HAnimJoint88 =  HAnimJoint();
HAnimJoint88.X3DNode::setName(CString("l_thumb1"));
HAnimJoint88.setDEF(CString("Joe_l_thumb1"));
HAnimJoint88.setCenter(new float[]{0.1924,0.8472,-0.0534});
HAnimJoint88.setSkinCoordIndex(new int32_t[]{127,128}, 2);
HAnimJoint88.setSkinCoordWeight(new float[]{1,1}, 2);
HAnimJoint88.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint88.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint& HAnimJoint89 =  HAnimJoint();
HAnimJoint89.X3DNode::setName(CString("l_thumb2"));
HAnimJoint89.setDEF(CString("Joe_l_thumb2"));
HAnimJoint89.setCenter(new float[]{0.1951,0.8226,0.0246});
HAnimJoint89.setSkinCoordIndex(new int32_t[]{138,139,140,141,142,143}, 6);
HAnimJoint89.setSkinCoordWeight(new float[]{0.5,0.5,0.5,1,1,1}, 6);
HAnimJoint89.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint89.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint& HAnimJoint90 =  HAnimJoint();
HAnimJoint90.X3DNode::setName(CString("l_thumb3"));
HAnimJoint90.setDEF(CString("Joe_l_thumb3"));
HAnimJoint90.setCenter(new float[]{0.1955,0.8159,0.0464});
HAnimJoint90.setSkinCoordIndex(new int32_t[]{144,145,146,147,148,149,150,151,152}, 9);
HAnimJoint90.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1,1}, 9);
HAnimJoint90.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint90.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint89.addChildren(&HAnimJoint90);

HAnimJoint88.addChildren(&HAnimJoint89);

HAnimJoint87.addChildren(&HAnimJoint88);

HAnimJoint& HAnimJoint91 =  HAnimJoint();
HAnimJoint91.X3DNode::setName(CString("l_index0"));
HAnimJoint91.setDEF(CString("Joe_l_index0"));
HAnimJoint91.setCenter(new float[]{0.1983,0.8024,-0.028});
HAnimJoint91.setSkinCoordIndex(new int32_t[]{129,130}, 2);
HAnimJoint91.setSkinCoordWeight(new float[]{1,1}, 2);
HAnimJoint91.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint91.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint& HAnimJoint92 =  HAnimJoint();
HAnimJoint92.X3DNode::setName(CString("l_index1"));
HAnimJoint92.setDEF(CString("Joe_l_index1"));
HAnimJoint92.setCenter(new float[]{0.1983,0.7815,-0.028});
HAnimJoint92.setSkinCoordIndex(new int32_t[]{138,139,140,153,154,155,163}, 7);
HAnimJoint92.setSkinCoordWeight(new float[]{0.5,0.5,0.5,1,1,1,0.5}, 7);
HAnimJoint92.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint92.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint& HAnimJoint93 =  HAnimJoint();
HAnimJoint93.X3DNode::setName(CString("l_index2"));
HAnimJoint93.setDEF(CString("Joe_l_index2"));
HAnimJoint93.setCenter(new float[]{0.2017,0.7363,-0.0248});
HAnimJoint93.setSkinCoordIndex(new int32_t[]{166,167,168,169}, 4);
HAnimJoint93.setSkinCoordWeight(new float[]{1,1,1,1}, 4);
HAnimJoint93.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint93.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint& HAnimJoint94 =  HAnimJoint();
HAnimJoint94.X3DNode::setName(CString("l_index3"));
HAnimJoint94.setDEF(CString("Joe_l_index3"));
HAnimJoint94.setCenter(new float[]{0.2028,0.7139,-0.0236});
HAnimJoint94.setSkinCoordIndex(new int32_t[]{170,171,172,173,174,175,176,177,178}, 9);
HAnimJoint94.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1,1}, 9);
HAnimJoint94.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint94.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint93.addChildren(&HAnimJoint94);

HAnimJoint92.addChildren(&HAnimJoint93);

HAnimJoint91.addChildren(&HAnimJoint92);

HAnimJoint87.addChildren(&HAnimJoint91);

HAnimJoint& HAnimJoint95 =  HAnimJoint();
HAnimJoint95.X3DNode::setName(CString("l_middle0"));
HAnimJoint95.setDEF(CString("Joe_l_middle0"));
HAnimJoint95.setCenter(new float[]{0.1987,0.8029,-0.053});
HAnimJoint95.setSkinCoordIndex(new int32_t[]{131,132}, 2);
HAnimJoint95.setSkinCoordWeight(new float[]{1,1}, 2);
HAnimJoint95.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint95.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint& HAnimJoint96 =  HAnimJoint();
HAnimJoint96.X3DNode::setName(CString("l_middle1"));
HAnimJoint96.setDEF(CString("Joe_l_middle1"));
HAnimJoint96.setCenter(new float[]{0.1987,0.7818,-0.053});
HAnimJoint96.setSkinCoordIndex(new int32_t[]{156,157,163,164}, 4);
HAnimJoint96.setSkinCoordWeight(new float[]{1,1,0.5,0.5}, 4);
HAnimJoint96.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint96.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint& HAnimJoint97 =  HAnimJoint();
HAnimJoint97.X3DNode::setName(CString("l_middle2"));
HAnimJoint97.setDEF(CString("Joe_l_middle2"));
HAnimJoint97.setCenter(new float[]{0.2013,0.7273,-0.0503});
HAnimJoint97.setSkinCoordIndex(new int32_t[]{179,180,181,182}, 4);
HAnimJoint97.setSkinCoordWeight(new float[]{1,1,1,1}, 4);
HAnimJoint97.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint97.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint& HAnimJoint98 =  HAnimJoint();
HAnimJoint98.X3DNode::setName(CString("l_middle3"));
HAnimJoint98.setDEF(CString("Joe_l_middle3"));
HAnimJoint98.setCenter(new float[]{0.2026,0.7011,-0.0494});
HAnimJoint98.setSkinCoordIndex(new int32_t[]{183,184,185,186,187,188,189,190,191}, 9);
HAnimJoint98.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1,1}, 9);
HAnimJoint98.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint98.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint97.addChildren(&HAnimJoint98);

HAnimJoint96.addChildren(&HAnimJoint97);

HAnimJoint95.addChildren(&HAnimJoint96);

HAnimJoint87.addChildren(&HAnimJoint95);

HAnimJoint& HAnimJoint99 =  HAnimJoint();
HAnimJoint99.X3DNode::setName(CString("l_ring0"));
HAnimJoint99.setDEF(CString("Joe_l_ring0"));
HAnimJoint99.setCenter(new float[]{0.1956,0.8019,-0.0794});
HAnimJoint99.setSkinCoordIndex(new int32_t[]{133,134}, 2);
HAnimJoint99.setSkinCoordWeight(new float[]{1,1}, 2);
HAnimJoint99.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint99.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint& HAnimJoint100 =  HAnimJoint();
HAnimJoint100.X3DNode::setName(CString("l_ring1"));
HAnimJoint100.setDEF(CString("Joe_l_ring1"));
HAnimJoint100.setCenter(new float[]{0.1956,0.7815,-0.0794});
HAnimJoint100.setSkinCoordIndex(new int32_t[]{158,159,164,165}, 4);
HAnimJoint100.setSkinCoordWeight(new float[]{1,1,0.5,0.5}, 4);
HAnimJoint100.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint100.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint& HAnimJoint101 =  HAnimJoint();
HAnimJoint101.X3DNode::setName(CString("l_ring2"));
HAnimJoint101.setDEF(CString("Joe_l_ring2"));
HAnimJoint101.setCenter(new float[]{0.1973,0.7287,-0.0777});
HAnimJoint101.setSkinCoordIndex(new int32_t[]{192,193,194,195}, 4);
HAnimJoint101.setSkinCoordWeight(new float[]{1,1,1,1}, 4);
HAnimJoint101.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint101.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint& HAnimJoint102 =  HAnimJoint();
HAnimJoint102.X3DNode::setName(CString("l_ring3"));
HAnimJoint102.setDEF(CString("Joe_l_ring3"));
HAnimJoint102.setCenter(new float[]{0.1983,0.7045,-0.0767});
HAnimJoint102.setSkinCoordIndex(new int32_t[]{196,197,198,199,200,201,202,203,204}, 9);
HAnimJoint102.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1,1}, 9);
HAnimJoint102.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint102.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint101.addChildren(&HAnimJoint102);

HAnimJoint100.addChildren(&HAnimJoint101);

HAnimJoint99.addChildren(&HAnimJoint100);

HAnimJoint87.addChildren(&HAnimJoint99);

HAnimJoint& HAnimJoint103 =  HAnimJoint();
HAnimJoint103.X3DNode::setName(CString("l_pinky0"));
HAnimJoint103.setDEF(CString("Joe_l_pinky0"));
HAnimJoint103.setCenter(new float[]{0.1925,0.8066,-0.1036});
HAnimJoint103.setSkinCoordIndex(new int32_t[]{135,136,137,165}, 4);
HAnimJoint103.setSkinCoordWeight(new float[]{1,1,1,0.5}, 4);
HAnimJoint103.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint103.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint& HAnimJoint104 =  HAnimJoint();
HAnimJoint104.X3DNode::setName(CString("l_pinky1"));
HAnimJoint104.setDEF(CString("Joe_l_pinky1"));
HAnimJoint104.setCenter(new float[]{0.1925,0.7866,-0.1036});
HAnimJoint104.setSkinCoordIndex(new int32_t[]{160,161,162}, 3);
HAnimJoint104.setSkinCoordWeight(new float[]{1,1,1}, 3);
HAnimJoint104.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint104.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint& HAnimJoint105 =  HAnimJoint();
HAnimJoint105.X3DNode::setName(CString("l_pinky2"));
HAnimJoint105.setDEF(CString("Joe_l_pinky2"));
HAnimJoint105.setCenter(new float[]{0.1938,0.7452,-0.1024});
HAnimJoint105.setSkinCoordIndex(new int32_t[]{205,206,207,208}, 4);
HAnimJoint105.setSkinCoordWeight(new float[]{1,1,1,1}, 4);
HAnimJoint105.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint105.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint& HAnimJoint106 =  HAnimJoint();
HAnimJoint106.X3DNode::setName(CString("l_pinky3"));
HAnimJoint106.setDEF(CString("Joe_l_pinky3"));
HAnimJoint106.setCenter(new float[]{0.1948,0.7277,-0.1017});
HAnimJoint106.setSkinCoordIndex(new int32_t[]{209,210,211,212,213,214,215,216,217}, 9);
HAnimJoint106.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1,1}, 9);
HAnimJoint106.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint106.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint105.addChildren(&HAnimJoint106);

HAnimJoint104.addChildren(&HAnimJoint105);

HAnimJoint103.addChildren(&HAnimJoint104);

HAnimJoint87.addChildren(&HAnimJoint103);

HAnimJoint86.addChildren(&HAnimJoint87);

HAnimJoint85.addChildren(&HAnimJoint86);

HAnimJoint84.addChildren(&HAnimJoint85);

HAnimJoint83.addChildren(&HAnimJoint84);

HAnimJoint67.addChildren(&HAnimJoint83);

HAnimJoint& HAnimJoint107 =  HAnimJoint();
HAnimJoint107.X3DNode::setName(CString("r_sternoclavicular"));
HAnimJoint107.setDEF(CString("Joe_r_sternoclavicular"));
HAnimJoint107.setCenter(new float[]{-0.03,1.46,0});
HAnimJoint107.setSkinCoordIndex(new int32_t[]{10}, 1);
HAnimJoint107.setSkinCoordWeight(new float[]{1}, 1);
HAnimJoint107.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint107.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint& HAnimJoint108 =  HAnimJoint();
HAnimJoint108.X3DNode::setName(CString("r_acromioclavicular"));
HAnimJoint108.setDEF(CString("Joe_r_acromioclavicular"));
HAnimJoint108.setCenter(new float[]{-0.09,1.41,-0.11});
HAnimJoint108.setSkinCoordIndex(new int32_t[]{77,29}, 2);
HAnimJoint108.setSkinCoordWeight(new float[]{1,0.9}, 2);
HAnimJoint108.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint108.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint& HAnimJoint109 =  HAnimJoint();
HAnimJoint109.X3DNode::setName(CString("r_shoulder"));
HAnimJoint109.setDEF(CString("Joe_r_shoulder"));
HAnimJoint109.setCenter(new float[]{-0.2,1.44,-0.04});
HAnimJoint109.setSkinCoordIndex(new int32_t[]{29,30,32,78,218,219,220,221,86,88}, 10);
HAnimJoint109.setSkinCoordWeight(new float[]{0.1,1,1,1,1,1,1,1,0.3,0.2}, 10);
HAnimJoint109.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint109.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint& HAnimJoint110 =  HAnimJoint();
HAnimJoint110.X3DNode::setName(CString("r_elbow"));
HAnimJoint110.setDEF(CString("Joe_r_elbow"));
HAnimJoint110.setCenter(new float[]{-0.2,1.1388,-0.04});
HAnimJoint110.setSkinCoordIndex(new int32_t[]{33,34,35,225,226,227,228,229,231,232,233,234}, 12);
HAnimJoint110.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1,1,1,1,1}, 12);
HAnimJoint110.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint110.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint& HAnimJoint111 =  HAnimJoint();
HAnimJoint111.X3DNode::setName(CString("r_wrist"));
HAnimJoint111.setDEF(CString("Joe_r_wrist"));
HAnimJoint111.setCenter(new float[]{-0.2,0.89,-0.04});
HAnimJoint111.setSkinCoordIndex(new int32_t[]{235,236,237,238,239,240,241,242}, 8);
HAnimJoint111.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1}, 8);
HAnimJoint111.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint111.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint& HAnimJoint112 =  HAnimJoint();
HAnimJoint112.X3DNode::setName(CString("r_thumb1"));
HAnimJoint112.setDEF(CString("Joe_r_thumb1"));
HAnimJoint112.setCenter(new float[]{-0.2,0.85,0});
HAnimJoint112.setSkinCoordIndex(new int32_t[]{243,244}, 2);
HAnimJoint112.setSkinCoordWeight(new float[]{1,1}, 2);
HAnimJoint112.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint112.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint& HAnimJoint113 =  HAnimJoint();
HAnimJoint113.X3DNode::setName(CString("r_thumb2"));
HAnimJoint113.setDEF(CString("Joe_r_thumb2"));
HAnimJoint113.setCenter(new float[]{-0.2,0.82,0.03});
HAnimJoint113.setSkinCoordIndex(new int32_t[]{254,255,256,257,258,259}, 6);
HAnimJoint113.setSkinCoordWeight(new float[]{0.5,0.5,0.5,1,1,1}, 6);
HAnimJoint113.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint113.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint& HAnimJoint114 =  HAnimJoint();
HAnimJoint114.X3DNode::setName(CString("r_thumb3"));
HAnimJoint114.setDEF(CString("Joe_r_thumb3"));
HAnimJoint114.setCenter(new float[]{-0.2,0.8,0.05});
HAnimJoint114.setSkinCoordIndex(new int32_t[]{260,261,262,263,264,265,266,267,268}, 9);
HAnimJoint114.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1,1}, 9);
HAnimJoint114.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint114.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint113.addChildren(&HAnimJoint114);

HAnimJoint112.addChildren(&HAnimJoint113);

HAnimJoint111.addChildren(&HAnimJoint112);

HAnimJoint& HAnimJoint115 =  HAnimJoint();
HAnimJoint115.X3DNode::setName(CString("r_index0"));
HAnimJoint115.setDEF(CString("Joe_r_index0"));
HAnimJoint115.setCenter(new float[]{-0.2,0.84,-0.015});
HAnimJoint115.setSkinCoordIndex(new int32_t[]{245,246}, 2);
HAnimJoint115.setSkinCoordWeight(new float[]{1,1}, 2);
HAnimJoint115.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint115.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint& HAnimJoint116 =  HAnimJoint();
HAnimJoint116.X3DNode::setName(CString("r_index1"));
HAnimJoint116.setDEF(CString("Joe_r_index1"));
HAnimJoint116.setCenter(new float[]{-0.2,0.793,-0.015});
HAnimJoint116.setSkinCoordIndex(new int32_t[]{254,255,256,269,270,271,279}, 7);
HAnimJoint116.setSkinCoordWeight(new float[]{0.5,0.5,0.5,1,1,1,0.5}, 7);
HAnimJoint116.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint116.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint& HAnimJoint117 =  HAnimJoint();
HAnimJoint117.X3DNode::setName(CString("r_index2"));
HAnimJoint117.setDEF(CString("Joe_r_index2"));
HAnimJoint117.setCenter(new float[]{-0.2,0.745,-0.015});
HAnimJoint117.setSkinCoordIndex(new int32_t[]{282,283,284,285}, 4);
HAnimJoint117.setSkinCoordWeight(new float[]{1,1,1,1}, 4);
HAnimJoint117.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint117.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint& HAnimJoint118 =  HAnimJoint();
HAnimJoint118.X3DNode::setName(CString("r_index3"));
HAnimJoint118.setDEF(CString("Joe_r_index3"));
HAnimJoint118.setCenter(new float[]{-0.2,0.72,-0.015});
HAnimJoint118.setSkinCoordIndex(new int32_t[]{286,287,288,289,290,291,292,293,294}, 9);
HAnimJoint118.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1,1}, 9);
HAnimJoint118.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint118.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint117.addChildren(&HAnimJoint118);

HAnimJoint116.addChildren(&HAnimJoint117);

HAnimJoint115.addChildren(&HAnimJoint116);

HAnimJoint111.addChildren(&HAnimJoint115);

HAnimJoint& HAnimJoint119 =  HAnimJoint();
HAnimJoint119.X3DNode::setName(CString("r_middle0"));
HAnimJoint119.setDEF(CString("Joe_r_middle0"));
HAnimJoint119.setCenter(new float[]{-0.2,0.835,-0.04});
HAnimJoint119.setSkinCoordIndex(new int32_t[]{247,248}, 2);
HAnimJoint119.setSkinCoordWeight(new float[]{1,1}, 2);
HAnimJoint119.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint119.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint& HAnimJoint120 =  HAnimJoint();
HAnimJoint120.X3DNode::setName(CString("r_middle1"));
HAnimJoint120.setDEF(CString("Joe_r_middle1"));
HAnimJoint120.setCenter(new float[]{-0.2,0.788,-0.04});
HAnimJoint120.setSkinCoordIndex(new int32_t[]{272,273,279,280}, 4);
HAnimJoint120.setSkinCoordWeight(new float[]{1,1,0.5,0.5}, 4);
HAnimJoint120.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint120.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint& HAnimJoint121 =  HAnimJoint();
HAnimJoint121.X3DNode::setName(CString("r_middle2"));
HAnimJoint121.setDEF(CString("Joe_r_middle2"));
HAnimJoint121.setCenter(new float[]{-0.2,0.74,-0.04});
HAnimJoint121.setSkinCoordIndex(new int32_t[]{295,296,297,298}, 4);
HAnimJoint121.setSkinCoordWeight(new float[]{1,1,1,1}, 4);
HAnimJoint121.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint121.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint& HAnimJoint122 =  HAnimJoint();
HAnimJoint122.X3DNode::setName(CString("r_middle3"));
HAnimJoint122.setDEF(CString("Joe_r_middle3"));
HAnimJoint122.setCenter(new float[]{-0.2,0.7142,-0.04});
HAnimJoint122.setSkinCoordIndex(new int32_t[]{299,300,301,302,303,304,305,306,307}, 9);
HAnimJoint122.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1,1}, 9);
HAnimJoint122.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint122.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint121.addChildren(&HAnimJoint122);

HAnimJoint120.addChildren(&HAnimJoint121);

HAnimJoint119.addChildren(&HAnimJoint120);

HAnimJoint111.addChildren(&HAnimJoint119);

HAnimJoint& HAnimJoint123 =  HAnimJoint();
HAnimJoint123.X3DNode::setName(CString("r_ring0"));
HAnimJoint123.setDEF(CString("Joe_r_ring0"));
HAnimJoint123.setCenter(new float[]{-0.2,0.835,-0.065});
HAnimJoint123.setSkinCoordIndex(new int32_t[]{249,250}, 2);
HAnimJoint123.setSkinCoordWeight(new float[]{1,1}, 2);
HAnimJoint123.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint123.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint& HAnimJoint124 =  HAnimJoint();
HAnimJoint124.X3DNode::setName(CString("r_ring1"));
HAnimJoint124.setDEF(CString("Joe_r_ring1"));
HAnimJoint124.setCenter(new float[]{-0.2,0.793,-0.065});
HAnimJoint124.setSkinCoordIndex(new int32_t[]{274,275,280,281}, 4);
HAnimJoint124.setSkinCoordWeight(new float[]{1,1,0.5,0.5}, 4);
HAnimJoint124.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint124.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint& HAnimJoint125 =  HAnimJoint();
HAnimJoint125.X3DNode::setName(CString("r_ring2"));
HAnimJoint125.setDEF(CString("Joe_r_ring2"));
HAnimJoint125.setCenter(new float[]{-0.2,0.74,-0.065});
HAnimJoint125.setSkinCoordIndex(new int32_t[]{308,309,310,311}, 4);
HAnimJoint125.setSkinCoordWeight(new float[]{1,1,1,1}, 4);
HAnimJoint125.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint125.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint& HAnimJoint126 =  HAnimJoint();
HAnimJoint126.X3DNode::setName(CString("r_ring3"));
HAnimJoint126.setDEF(CString("Joe_r_ring3"));
HAnimJoint126.setCenter(new float[]{-0.2,0.7177,-0.065});
HAnimJoint126.setSkinCoordIndex(new int32_t[]{312,313,314,315,316,317,318,319,320}, 9);
HAnimJoint126.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1,1}, 9);
HAnimJoint126.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint126.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint125.addChildren(&HAnimJoint126);

HAnimJoint124.addChildren(&HAnimJoint125);

HAnimJoint123.addChildren(&HAnimJoint124);

HAnimJoint111.addChildren(&HAnimJoint123);

HAnimJoint& HAnimJoint127 =  HAnimJoint();
HAnimJoint127.X3DNode::setName(CString("r_pinky0"));
HAnimJoint127.setDEF(CString("Joe_r_pinky0"));
HAnimJoint127.setCenter(new float[]{-0.2,0.84,-0.085});
HAnimJoint127.setSkinCoordIndex(new int32_t[]{251,252,253,281}, 4);
HAnimJoint127.setSkinCoordWeight(new float[]{1,1,1,0.5}, 4);
HAnimJoint127.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint127.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint& HAnimJoint128 =  HAnimJoint();
HAnimJoint128.X3DNode::setName(CString("r_pinky1"));
HAnimJoint128.setDEF(CString("Joe_r_pinky1"));
HAnimJoint128.setCenter(new float[]{-0.2,0.79,-0.085});
HAnimJoint128.setSkinCoordIndex(new int32_t[]{276,277,278}, 3);
HAnimJoint128.setSkinCoordWeight(new float[]{1,1,1}, 3);
HAnimJoint128.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint128.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint& HAnimJoint129 =  HAnimJoint();
HAnimJoint129.X3DNode::setName(CString("r_pinky2"));
HAnimJoint129.setDEF(CString("Joe_r_pinky2"));
HAnimJoint129.setCenter(new float[]{-0.2,0.755,-0.085});
HAnimJoint129.setSkinCoordIndex(new int32_t[]{321,322,323,324}, 4);
HAnimJoint129.setSkinCoordWeight(new float[]{1,1,1,1}, 4);
HAnimJoint129.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint129.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint& HAnimJoint130 =  HAnimJoint();
HAnimJoint130.X3DNode::setName(CString("r_pinky3"));
HAnimJoint130.setDEF(CString("Joe_r_pinky3"));
HAnimJoint130.setCenter(new float[]{-0.2,0.735,-0.09});
HAnimJoint130.setSkinCoordIndex(new int32_t[]{325,326,327,328,329,330,331,332,333}, 9);
HAnimJoint130.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1,1}, 9);
HAnimJoint130.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint130.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint129.addChildren(&HAnimJoint130);

HAnimJoint128.addChildren(&HAnimJoint129);

HAnimJoint127.addChildren(&HAnimJoint128);

HAnimJoint111.addChildren(&HAnimJoint127);

HAnimJoint110.addChildren(&HAnimJoint111);

HAnimJoint109.addChildren(&HAnimJoint110);

HAnimJoint108.addChildren(&HAnimJoint109);

HAnimJoint107.addChildren(&HAnimJoint108);

HAnimJoint67.addChildren(&HAnimJoint107);

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

HAnimJoint54.addChildren(&HAnimJoint55);

HAnimJoint53.addChildren(&HAnimJoint54);

HAnimJoint52.addChildren(&HAnimJoint53);

HAnimJoint51.addChildren(&HAnimJoint52);

HAnimJoint50.addChildren(&HAnimJoint51);

HAnimJoint28.addChildren(&HAnimJoint50);

HAnimHumanoid27.setSkeleton(&HAnimJoint28);

Shape& Shape131 =  Shape();
Shape131.setDEF(CString("Joe_Shape"));
Appearance& Appearance132 =  Appearance();
Appearance132.setDEF(CString("Joe_skin_Appearance"));
Material& Material133 =  Material();
Material133.setDEF(CString("Joe_skin_Material"));
Material133.setDiffuseColor(new float[]{0.3,0.3,0.6});
Material133.setEmissiveColor(new float[]{0.3,0.3,0.6});
Appearance132.addChild(&Material133);

ImageTexture& ImageTexture134 =  ImageTexture();
ImageTexture134.setDEF(CString("JoeSkinImageTexture"));
ImageTexture134.setUrl(new CString[]{CString("bodytexture28.png")}, 1);
Appearance132.addChild(&ImageTexture134);

TextureTransform& TextureTransform135 =  TextureTransform();
TextureTransform135.setDEF(CString("kicktextrans"));
Appearance132.setTextureTransform(TextureTransform135);

Shape131.addChild(&Appearance132);

IndexedFaceSet& IndexedFaceSet136 =  IndexedFaceSet();
IndexedFaceSet136.setDEF(CString("Joe_skin_IndexedFaceSet"));
IndexedFaceSet136.setCoordIndex(new int32_t[]{0,9,5,-1,0,7,9,-1,0,5,1,-1,1,5,2,-1,1,3,7,-1,2,4,3,-1,0,1,7,-1,1,2,3,-1,5,6,2,-1,7,3,8,-1,6,4,2,-1,3,4,8,-1,9,6,5,-1,9,7,8,-1,4,6,10,-1,4,10,12,-1,4,12,8,-1,10,11,12,-1,9,75,24,-1,9,24,74,-1,9,8,75,-1,9,74,6,-1,10,6,74,-1,12,75,8,-1,74,24,29,-1,24,77,29,-1,10,74,29,-1,77,32,29,-1,32,78,29,-1,78,30,29,-1,30,10,29,-1,41,24,75,-1,41,75,12,-1,41,12,42,-1,41,42,80,-1,41,80,44,-1,41,44,79,-1,41,79,24,-1,81,24,79,-1,81,77,24,-1,81,25,77,-1,81,79,25,-1,25,79,44,-1,25,32,77,-1,25,83,32,-1,25,26,83,-1,25,27,26,-1,25,84,27,-1,25,44,84,-1,11,10,30,-1,11,30,13,-1,11,13,15,-1,11,15,14,-1,11,14,42,-1,11,42,12,-1,15,13,16,-1,15,18,14,-1,15,16,76,-1,15,76,18,-1,76,16,17,-1,76,17,82,-1,76,82,19,-1,76,19,18,-1,22,18,19,-1,22,87,18,-1,22,27,84,-1,22,84,87,-1,87,84,85,-1,85,84,44,-1,85,42,14,-1,87,14,18,-1,87,85,14,-1,20,83,26,-1,20,17,16,-1,20,16,88,-1,20,88,83,-1,88,16,13,-1,88,13,86,-1,88,86,83,-1,86,13,30,-1,86,32,83,-1,23,89,22,-1,89,27,22,-1,89,91,27,-1,91,26,27,-1,91,20,26,-1,21,20,91,-1,21,17,20,-1,21,92,17,-1,82,17,92,-1,82,90,19,-1,23,22,19,-1,23,19,90,-1,82,92,101,-1,82,101,99,-1,82,99,93,-1,82,93,95,-1,82,95,97,-1,82,97,90,-1,23,90,97,-1,23,97,94,-1,23,94,89,-1,89,94,96,-1,89,96,95,-1,89,95,93,-1,89,93,91,-1,91,93,99,-1,91,99,100,-1,91,100,98,-1,21,91,98,-1,21,98,101,-1,21,101,92,-1,85,105,42,-1,85,103,105,-1,85,44,103,-1,103,44,104,-1,80,42,105,-1,80,105,102,-1,80,102,104,-1,80,104,44,-1,105,109,102,-1,102,109,47,-1,47,104,102,-1,104,47,45,-1,104,45,103,-1,103,45,46,-1,103,46,109,-1,103,109,105,-1,109,112,110,-1,109,110,47,-1,47,110,111,-1,47,111,45,-1,45,111,113,-1,113,46,45,-1,46,113,112,-1,112,109,46,-1,112,118,110,-1,110,118,115,-1,110,115,111,-1,111,115,117,-1,111,117,113,-1,113,117,116,-1,113,116,112,-1,112,116,118,-1,115,118,119,-1,119,118,122,-1,118,116,122,-1,122,116,120,-1,116,117,120,-1,120,117,121,-1,117,115,121,-1,115,119,121,-1,119,127,123,-1,119,122,127,-1,122,126,127,-1,122,128,126,-1,122,120,128,-1,120,124,128,-1,120,121,124,-1,121,125,124,-1,121,119,125,-1,119,123,125,-1,127,129,123,-1,127,126,129,-1,129,126,141,-1,141,126,143,-1,126,142,143,-1,126,128,142,-1,128,124,130,-1,142,128,130,-1,124,132,130,-1,124,134,132,-1,125,134,124,-1,125,136,134,-1,125,137,136,-1,125,135,137,-1,125,133,135,-1,125,123,133,-1,123,131,133,-1,123,129,131,-1,131,129,138,-1,129,141,138,-1,138,141,144,-1,141,143,144,-1,143,146,144,-1,142,146,143,-1,142,145,146,-1,139,145,142,-1,130,139,142,-1,139,130,132,-1,139,132,154,-1,132,157,154,-1,132,159,157,-1,132,134,159,-1,134,136,159,-1,136,161,159,-1,136,137,161,-1,137,162,161,-1,160,162,137,-1,135,160,137,-1,133,160,135,-1,133,158,160,-1,131,158,133,-1,156,158,131,-1,153,156,131,-1,131,138,153,-1,138,155,153,-1,140,155,138,-1,138,144,140,-1,144,147,140,-1,140,147,145,-1,140,145,139,-1,139,155,140,-1,154,155,139,-1,146,149,144,-1,146,151,149,-1,145,151,146,-1,150,151,145,-1,145,152,150,-1,147,152,145,-1,147,149,152,-1,147,144,149,-1,148,149,151,-1,148,152,149,-1,148,150,152,-1,148,151,150,-1,160,207,162,-1,160,205,207,-1,165,208,205,-1,160,165,205,-1,158,165,160,-1,161,162,207,-1,161,207,206,-1,165,206,208,-1,206,165,161,-1,161,165,159,-1,207,209,211,-1,205,209,207,-1,205,212,209,-1,205,208,212,-1,206,212,208,-1,206,210,212,-1,206,207,210,-1,207,211,210,-1,209,212,213,-1,212,216,213,-1,212,214,216,-1,210,214,212,-1,210,215,214,-1,210,211,215,-1,209,215,211,-1,209,213,215,-1,217,213,216,-1,217,215,213,-1,217,214,215,-1,217,216,214,-1,158,194,165,-1,192,194,158,-1,164,195,192,-1,158,164,192,-1,156,164,158,-1,159,194,165,-1,159,194,193,-1,159,193,195,-1,159,195,164,-1,159,164,157,-1,157,164,180,-1,192,198,194,-1,192,196,198,-1,192,195,196,-1,195,199,196,-1,196,199,200,-1,199,203,200,-1,193,199,195,-1,193,197,199,-1,193,198,197,-1,193,194,198,-1,199,201,203,-1,197,201,199,-1,197,198,201,-1,198,202,201,-1,196,202,198,-1,200,202,196,-1,204,202,200,-1,204,201,202,-1,204,203,201,-1,204,200,203,-1,156,181,164,-1,156,179,181,-1,156,182,179,-1,156,163,182,-1,163,180,182,-1,157,180,163,-1,164,181,180,-1,179,182,183,-1,182,186,183,-1,182,184,186,-1,180,184,182,-1,180,181,184,-1,181,185,184,-1,179,185,181,-1,183,185,179,-1,183,186,187,-1,186,190,187,-1,184,190,186,-1,184,188,190,-1,184,185,188,-1,185,189,188,-1,185,183,189,-1,183,187,189,-1,191,189,187,-1,191,188,189,-1,191,190,188,-1,191,187,190,-1,153,163,156,-1,153,168,163,-1,153,166,168,-1,153,169,166,-1,155,169,153,-1,155,167,169,-1,154,167,155,-1,154,163,167,-1,154,157,163,-1,163,168,167,-1,166,169,170,-1,169,173,170,-1,169,171,173,-1,169,167,171,-1,167,168,171,-1,168,172,171,-1,168,170,172,-1,170,168,166,-1,170,173,174,-1,173,177,174,-1,173,175,177,-1,173,171,175,-1,171,172,175,-1,172,176,175,-1,172,174,176,-1,170,174,172,-1,178,176,174,-1,178,175,176,-1,178,177,175,-1,178,174,177,-1,86,30,221,-1,86,221,219,-1,86,219,32,-1,32,219,220,-1,78,32,220,-1,78,220,218,-1,78,218,221,-1,78,221,30,-1,221,225,219,-1,219,225,35,-1,35,33,219,-1,33,220,219,-1,33,34,220,-1,220,34,218,-1,221,218,34,-1,34,225,221,-1,225,226,228,-1,225,228,35,-1,35,228,229,-1,35,229,33,-1,33,229,227,-1,33,227,34,-1,34,227,226,-1,34,226,225,-1,226,234,228,-1,228,234,232,-1,232,229,228,-1,232,233,229,-1,229,233,227,-1,227,233,231,-1,227,231,226,-1,226,231,234,-1,231,235,234,-1,235,238,234,-1,234,238,232,-1,238,236,232,-1,232,236,233,-1,236,237,233,-1,233,237,231,-1,231,237,235,-1,235,239,243,-1,235,243,238,-1,238,243,242,-1,238,242,244,-1,238,244,236,-1,236,244,240,-1,236,240,237,-1,237,240,241,-1,237,241,235,-1,235,241,239,-1,243,239,245,-1,243,245,242,-1,245,257,242,-1,257,259,242,-1,242,259,258,-1,242,258,244,-1,244,246,240,-1,258,246,244,-1,240,246,248,-1,240,248,250,-1,241,240,250,-1,241,250,252,-1,241,252,253,-1,241,253,251,-1,241,251,249,-1,241,249,239,-1,239,249,247,-1,239,247,245,-1,247,254,245,-1,245,254,257,-1,254,260,257,-1,257,260,259,-1,259,260,262,-1,258,259,262,-1,258,262,261,-1,255,258,261,-1,246,258,255,-1,255,248,246,-1,255,270,248,-1,248,270,273,-1,248,273,275,-1,248,275,250,-1,250,275,252,-1,252,275,277,-1,252,277,253,-1,253,277,278,-1,276,253,278,-1,251,253,276,-1,249,251,276,-1,249,276,274,-1,247,249,274,-1,272,247,274,-1,269,247,272,-1,247,269,254,-1,254,269,271,-1,256,254,271,-1,254,256,260,-1,260,256,263,-1,256,261,263,-1,256,255,261,-1,255,256,271,-1,270,255,271,-1,262,260,265,-1,262,265,267,-1,261,262,267,-1,266,261,267,-1,261,266,268,-1,263,261,268,-1,263,268,265,-1,263,265,260,-1,264,267,265,-1,264,265,268,-1,264,268,266,-1,264,266,267,-1,276,278,323,-1,276,323,321,-1,281,321,324,-1,276,321,281,-1,274,276,281,-1,277,323,278,-1,277,322,323,-1,281,324,322,-1,322,277,281,-1,277,275,281,-1,323,327,325,-1,321,323,325,-1,321,325,328,-1,321,328,324,-1,322,324,328,-1,322,328,326,-1,322,326,323,-1,323,326,327,-1,325,329,328,-1,328,329,332,-1,328,332,330,-1,326,328,330,-1,326,330,331,-1,326,331,327,-1,325,327,331,-1,325,331,329,-1,333,332,329,-1,333,329,331,-1,333,331,330,-1,333,330,332,-1,274,281,310,-1,308,274,310,-1,280,308,311,-1,274,308,280,-1,272,274,280,-1,275,310,281,-1,275,309,310,-1,275,311,309,-1,275,280,311,-1,275,273,280,-1,273,296,280,-1,308,310,314,-1,308,314,312,-1,308,312,311,-1,311,312,315,-1,312,316,315,-1,315,316,319,-1,309,311,315,-1,309,315,313,-1,309,313,314,-1,309,314,310,-1,315,319,317,-1,313,315,317,-1,313,317,314,-1,314,317,318,-1,312,314,318,-1,316,312,318,-1,320,316,318,-1,320,318,317,-1,320,317,319,-1,320,319,316,-1,272,280,297,-1,272,297,295,-1,272,295,298,-1,272,298,279,-1,279,298,296,-1,273,279,296,-1,280,296,297,-1,295,299,298,-1,298,299,302,-1,298,302,300,-1,296,298,300,-1,296,300,297,-1,297,300,301,-1,295,297,301,-1,299,295,301,-1,299,303,302,-1,302,303,306,-1,300,302,306,-1,300,306,304,-1,300,304,301,-1,301,304,305,-1,301,305,299,-1,299,305,303,-1,307,303,305,-1,307,305,304,-1,307,304,306,-1,307,306,303,-1,269,272,279,-1,269,279,284,-1,269,284,282,-1,269,282,285,-1,271,269,285,-1,271,285,283,-1,270,271,283,-1,270,283,279,-1,270,279,273,-1,279,283,284,-1,282,286,285,-1,285,286,289,-1,285,289,287,-1,285,287,283,-1,283,287,284,-1,284,287,288,-1,284,288,286,-1,286,282,284,-1,286,290,289,-1,289,290,293,-1,289,293,291,-1,289,291,287,-1,287,291,288,-1,288,291,292,-1,288,292,290,-1,286,288,290,-1,294,290,292,-1,294,292,291,-1,294,291,293,-1,294,293,290,-1,97,334,336,-1,97,336,94,-1,94,336,96,-1,336,335,96,-1,96,335,95,-1,95,335,337,-1,95,337,334,-1,95,334,97,-1,334,341,336,-1,336,341,338,-1,336,338,335,-1,335,338,340,-1,335,340,337,-1,337,340,339,-1,337,339,334,-1,334,339,341,-1,341,345,342,-1,341,342,338,-1,338,342,340,-1,340,342,344,-1,340,344,339,-1,339,344,343,-1,339,343,345,-1,339,345,341,-1,345,349,342,-1,342,349,351,-1,342,351,346,-1,342,346,344,-1,71,346,348,-1,71,344,346,-1,71,348,347,-1,71,347,344,-1,344,347,343,-1,343,347,352,-1,343,352,349,-1,343,349,345,-1,349,352,356,-1,349,356,353,-1,349,353,355,-1,349,355,351,-1,354,356,352,-1,354,352,350,-1,354,350,351,-1,354,351,355,-1,353,356,357,-1,353,357,358,-1,353,358,359,-1,353,359,360,-1,353,360,361,-1,353,361,355,-1,354,357,356,-1,350,346,351,-1,348,346,347,-1,350,347,346,-1,350,352,347,-1,354,358,357,-1,354,359,358,-1,354,360,359,-1,354,361,360,-1,354,355,361,-1,101,362,365,-1,101,365,99,-1,99,365,100,-1,100,365,363,-1,100,363,98,-1,98,363,364,-1,98,364,101,-1,101,364,362,-1,362,369,367,-1,362,367,365,-1,365,367,363,-1,363,367,368,-1,363,367,368,-1,363,368,366,-1,363,366,364,-1,364,366,362,-1,362,366,369,-1,369,373,371,-1,369,371,367,-1,367,371,368,-1,368,371,372,-1,368,372,366,-1,366,372,370,-1,366,370,369,-1,369,370,373,-1,373,377,380,-1,373,380,375,-1,373,375,371,-1,371,375,372,-1,372,375,376,-1,372,376,374,-1,372,374,370,-1,370,374,379,-1,373,370,379,-1,373,379,377,-1,377,379,383,-1,377,383,381,-1,377,381,384,-1,377,384,380,-1,381,383,389,-1,381,389,388,-1,381,388,387,-1,381,387,386,-1,381,386,385,-1,381,385,384,-1,376,375,374,-1,378,379,374,-1,378,374,375,-1,378,375,380,-1,382,386,387,-1,382,387,388,-1,382,388,389,-1,382,389,383,-1,382,383,379,-1,382,379,378,-1,382,378,380,-1,382,380,384,-1,382,384,385,-1,382,385,386,-1}, 2780);
IndexedFaceSet136.setCreaseAngle(3.14);
Coordinate& Coordinate137 =  Coordinate();
Coordinate137.setDEF(CString("Joe_SkinCoord"));
Coordinate137.setPoint(new float[]{0,1.77,0,0,1.665,0.09,-0.033,1.62,0.087,0.033,1.62,0.087,0,1.55,0.097,-0.077,1.64,-0.01,-0.0527,1.58,0.015,0.077,1.64,-0.01,0.0527,1.58,0.015,0,1.625,-0.0925,-0.03,1.46,0.035,0,1.44,0.03,0.03,1.46,0.035,-0.1135,1.318,0.095,0.1135,1.318,0.095,0,1.25,0.113,-0.087,1.19,0.09,-0.0935,1.03,0.075,0.087,1.19,0.09,0.0935,1.03,0.075,-0.1425,1.065,0.0033,-0.15,0.9,-0.01,0.1425,1.065,0.0033,0.15,0.9,-0.01,0,1.53,-0.084,0.0049,1.1908,-0.1113,-0.0773,1.019,-0.12,0.0773,1.019,-0.12,0.005,1.0915,-0.1091,-0.178,1.4825,-0.0625,-0.17,1.38,0.007,-0.1884,0.8676,-0.036,-0.16,1.38,-0.127,-0.2,1.1388,-0.08,-0.244,1.1388,-0.04,-0.165,1.1388,-0.04,-0.23,1.133,-0.055,-0.1977,0.8169,-0.0177,-0.1941,0.6772,-0.0423,-0.2117,0.8562,-0.0584,-0.1929,0.789,-0.1064,0.175,1.4825,-0.06,0.17,1.38,0.007,0.1901,0.8645,-0.0415,0.16,1.38,-0.125,0.2,1.1388,-0.08,0.165,1.1388,-0.04,0.244,1.1388,-0.04,0.23,1.133,-0.055,0.2009,0.8139,-0.0237,0.2056,0.6743,-0.0482,0.2142,0.8529,-0.0648,0.1929,0.786,-0.1122,-0.1,0.4913,-0.03,-0.17,0.466,0,-0.05,0.466,0,-0.165,0.01,0.12,-0.15,0.07,0,-0.085,0.086,0.0125,-0.09,0.056,0.0125,-0.115,0.02,0.122,-0.115,0.04,-0.055,-0.11,0.011,0.19,0.0993,0.4881,-0.0309,0.17,0.466,0,0.05,0.4867,0,0.165,0.01,0.12,0.15,0.07,0,0.085,0.086,0.0125,0.09,0.056,0.0125,0.115,0.02,0.122,0.115,0.04,-0.055,0.11,0.011,0.19,0,0.875,0,-0.0646,1.5149,-0.038,0.0646,1.5149,-0.038,0,1.07225,0.09,-0.11,1.427,-0.1375,-0.235,1.42,-0.0625,0.11,1.427,-0.1375,0.235,1.42,-0.0625,0,1.41,-0.145,0,0.925,0.08,-0.087,1.19,-0.09,0.087,1.19,-0.09,0.172,1.32,-0.03,-0.172,1.32,-0.03,0.15,1.23,-0.015,-0.15,1.23,-0.015,0.079,0.92,-0.14,0.1,0.9,0.077,-0.079,0.92,-0.14,-0.1,0.9,0.075,0,0.87,0,0.171,0.65,0,0.02,0.65,0,0.1,0.65,-0.08,0.1,0.65,0.07,-0.171,0.65,0,-0.02,0.65,0,-0.1,0.65,-0.08,-0.1,0.65,0.07,0.25,1.27,-0.04,0.17,1.27,-0.04,0.2,1.27,-0.09,0.2,1.27,0.02,0.244,1.1388,-0.04,0.165,1.1388,-0.04,0.2,1.1388,-0.08,0.2,1.1388,-0.013,0.225,1,-0.01,0.225,1,-0.07,0.185,1,-0.01,0.185,1,-0.07,0.2,1.1388,-0.04,0.225,0.92,-0.04,0.175,0.92,-0.04,0.2,0.92,-0.065,0.2,0.92,-0.015,0.225,0.89,-0.04,0.175,0.89,-0.04,0.2,0.89,-0.065,0.2,0.89,-0.015,0.218,0.86,-0.04,0.184,0.86,-0.04,0.2,0.87,-0.07,0.2,0.87,0,0.21,0.85,0,0.1854,0.85,0,0.212,0.84,-0.015,0.183,0.84,-0.015,0.213,0.835,-0.04,0.19,0.835,-0.04,0.211,0.835,-0.065,0.192,0.835,-0.065,0.208,0.84,-0.085,0.19,0.84,-0.085,0.2,0.84,-0.095,0.215,0.82,0,0.193,0.815,0.005,0.198,0.8,0.012,0.21,0.82,0.03,0.19,0.82,0.03,0.2,0.835,0.039,0.212,0.8,0.05,0.188,0.8,0.05,0.2,0.807,0.057,0.2,0.793,0.035,0.2,0.774,0.076,0.212,0.78,0.07,0.188,0.78,0.07,0.2,0.785,0.075,0.2,0.77,0.062,0.215,0.793,-0.015,0.187,0.793,-0.015,0.2,0.793,-0.005,0.215,0.788,-0.04,0.187,0.788,-0.04,0.215,0.793,-0.065,0.187,0.793,-0.065,0.21,0.79,-0.085,0.19,0.79,-0.085,0.2,0.79,-0.095,0.19,0.77,-0.0275,0.19,0.77,-0.0525,0.19,0.78,-0.0775,0.212,0.745,-0.015,0.188,0.745,-0.02,0.2,0.745,-0.0255,0.2,0.745,-0.0045,0.211,0.72,-0.015,0.189,0.72,-0.015,0.2,0.72,-0.0252,0.2,0.72,-0.0048,0.21,0.695,-0.015,0.19,0.695,-0.015,0.2,0.695,-0.025,0.2,0.695,-0.005,0.2,0.685,-0.015,0.215,0.74,-0.04,0.185,0.74,-0.04,0.2,0.74,-0.055,0.2,0.74,-0.025,0.21,0.7142,-0.04,0.19,0.7142,-0.04,0.2,0.7142,-0.053,0.2,0.7142,-0.027,0.21,0.68,-0.04,0.19,0.68,-0.04,0.2,0.68,-0.05,0.2,0.68,-0.03,0.2,0.67,-0.04,0.212,0.74,-0.065,0.188,0.74,-0.065,0.2,0.74,-0.0756,0.2,0.74,-0.0542,0.21,0.7177,-0.065,0.19,0.7177,-0.065,0.2,0.7177,-0.0751,0.2,0.7177,-0.0549,0.21,0.695,-0.065,0.19,0.695,-0.065,0.2,0.695,-0.075,0.2,0.695,-0.055,0.2,0.685,-0.065,0.211,0.755,-0.085,0.189,0.755,-0.085,0.2,0.755,-0.0952,0.2,0.755,-0.0748,0.21,0.735,-0.085,0.19,0.735,-0.085,0.2,0.735,-0.0951,0.2,0.735,-0.0749,0.21,0.72,-0.085,0.19,0.72,-0.085,0.2,0.72,-0.095,0.2,0.72,-0.075,0.2,0.71,-0.085,-0.23,1.23,-0.04,-0.16,1.23,-0.04,-0.2,1.235,-0.105,-0.2,1.255,0.02,-0.244,1.1388,-0.04,-0.165,1.1388,-0.04,-0.2,1.1388,-0.08,-0.2,1.1388,0.013,-0.225,1,-0.01,-0.225,1,-0.07,-0.185,1,-0.01,-0.185,1,-0.07,-0.2,1.1388,-0.04,-0.225,0.92,-0.04,-0.175,0.92,-0.04,-0.2,0.92,-0.065,-0.2,0.92,-0.015,-0.225,0.89,-0.04,-0.175,0.89,-0.04,-0.2,0.89,-0.065,-0.2,0.89,-0.015,-0.218,0.86,-0.04,-0.184,0.86,-0.04,-0.2,0.87,-0.07,-0.2,0.87,0,-0.21,0.85,0,-0.1854,0.85,0,-0.212,0.84,-0.015,-0.183,0.84,-0.015,-0.213,0.835,-0.04,-0.19,0.835,-0.04,-0.211,0.835,-0.065,-0.192,0.835,-0.065,-0.208,0.84,-0.085,-0.19,0.84,-0.085,-0.2,0.84,-0.095,-0.215,0.82,0,-0.193,0.815,0.005,-0.198,0.8,0.012,-0.21,0.82,0.03,-0.19,0.82,0.03,-0.2,0.835,0.039,-0.212,0.8,0.05,-0.188,0.8,0.05,-0.2,0.807,0.057,-0.2,0.793,0.035,-0.2,0.774,0.076,-0.212,0.78,0.07,-0.188,0.78,0.07,-0.2,0.785,0.075,-0.2,0.77,0.062,-0.215,0.793,-0.015,-0.187,0.793,-0.015,-0.2,0.793,-0.005,-0.215,0.788,-0.04,-0.187,0.788,-0.04,-0.215,0.793,-0.065,-0.187,0.793,-0.065,-0.21,0.79,-0.085,-0.19,0.79,-0.085,-0.2,0.79,-0.095,-0.19,0.77,-0.0275,-0.19,0.77,-0.0525,-0.19,0.78,-0.0775,-0.212,0.745,-0.015,-0.188,0.745,-0.02,-0.2,0.745,-0.0255,-0.2,0.745,-0.0045,-0.211,0.72,-0.015,-0.189,0.72,-0.015,-0.2,0.72,-0.0252,-0.2,0.72,-0.0048,-0.21,0.695,-0.015,-0.19,0.695,-0.015,-0.2,0.695,-0.025,-0.2,0.695,-0.005,-0.2,0.685,-0.015,-0.215,0.74,-0.04,-0.185,0.74,-0.04,-0.2,0.74,-0.055,-0.2,0.74,-0.025,-0.21,0.7142,-0.04,-0.19,0.7142,-0.04,-0.2,0.7142,-0.053,-0.2,0.7142,-0.027,-0.21,0.68,-0.04,-0.19,0.68,-0.04,-0.2,0.68,-0.05,-0.2,0.68,-0.03,-0.2,0.67,-0.04,-0.212,0.74,-0.065,-0.188,0.74,-0.065,-0.2,0.74,-0.0756,-0.2,0.74,-0.0542,-0.21,0.7177,-0.065,-0.19,0.7177,-0.065,-0.2,0.7177,-0.0751,-0.2,0.7177,-0.0549,-0.21,0.695,-0.065,-0.19,0.695,-0.065,-0.2,0.695,-0.075,-0.2,0.695,-0.055,-0.2,0.685,-0.065,-0.211,0.755,-0.085,-0.189,0.755,-0.085,-0.2,0.755,-0.0952,-0.2,0.755,-0.0748,-0.21,0.735,-0.085,-0.19,0.735,-0.085,-0.2,0.735,-0.0951,-0.2,0.735,-0.0749,-0.21,0.72,-0.085,-0.19,0.72,-0.085,-0.2,0.72,-0.095,-0.2,0.72,-0.075,-0.2,0.71,-0.085,0.115,0.466,0.06,0.115,0.466,-0.055,0.15,0.466,0,0.05,0.466,0,0.17,0.3,0,0.06,0.3,0,0.1,0.3,-0.05,0.1,0.3,0.05,0.15,0.07,0,0.085,0.086,0.0125,0.115,0.069,-0.045,0.117,0.0975,0.0615,0.1375,0.006,-0.03,0.095,0.006,-0.03,0.115,0.015,-0.045,0.115,0.06,0.1,0.115,0,0.07,0.165,0,0.07,0.095,0,0.07,0.115,0.04,0.13,0.125,0,0.12,0.165,0,0.12,0.087,0,0.122,0.09,0.012,0.188,0.11,0.011,0.19,0.128,0.011,0.185,0.142,0.011,0.178,0.154,0.01,0.168,-0.115,0.466,0.06,-0.115,0.466,-0.055,-0.17,0.466,0,-0.05,0.466,0,-0.17,0.3,0,-0.06,0.3,0,-0.1,0.3,-0.05,-0.1,0.3,0.05,-0.15,0.07,0,-0.085,0.086,0.0125,-0.115,0.069,-0.045,-0.117,0.0975,0.0615,-0.1375,0.006,-0.03,-0.095,0.006,-0.03,-0.095,0.006,-0.03,-0.115,0.06,0.1,-0.115,0,0.07,-0.165,0,0.07,-0.095,0,0.07,-0.115,0.04,0.13,-0.125,0,0.12,-0.165,0,0.12,-0.087,0,0.122,-0.09,0.012,0.188,-0.11,0.011,0.19,-0.128,0.011,0.185,-0.142,0.011,0.178,-0.154,0.01,0.168}, 1170);
IndexedFaceSet136.setCoord(&Coordinate137);

TextureCoordinate& TextureCoordinate138 =  TextureCoordinate();
TextureCoordinate138.setPoint(new float[]{0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5}, 780);
IndexedFaceSet136.setTexCoord(&TextureCoordinate138);

Shape131.setGeometry(&IndexedFaceSet136);

HAnimHumanoid27.setSkin(&Shape131);

Coordinate& Coordinate139 =  Coordinate();
Coordinate139.setUSE(CString("Joe_SkinCoord"));
HAnimHumanoid27.setSkinCoord(&Coordinate139);

Group26.addChild(&HAnimHumanoid27);

Scene15.addChild(&Group26);

Group& Group140 =  Group();
TimeSensor& TimeSensor141 =  TimeSensor();
TimeSensor141.setDEF(CString("KickTimer"));
TimeSensor141.setCycleInterval(3.73);
TimeSensor141.setLoop(True);
Group140.addChild(&TimeSensor141);

//Interpolators
OrientationInterpolator& OrientationInterpolator142 =  OrientationInterpolator();
OrientationInterpolator142.setDEF(CString("HumanoidRootRotInterp"));
OrientationInterpolator142.setKey(new float[]{0,0.1,0.4,0.6,1}, 5);
OrientationInterpolator142.setKeyValue(new float[]{1,0,0,0.5,1,0,0,0.5,-1,0,0,0.1,-1,0,0,0.5,-1,0,0,0.5}, 20);
Group140.addChild(&OrientationInterpolator142);

PositionInterpolator& PositionInterpolator143 =  PositionInterpolator();
PositionInterpolator143.setDEF(CString("HumanoidRootTransInterp"));
PositionInterpolator143.setKey(new float[]{0,0.2,0.6,1}, 4);
PositionInterpolator143.setKeyValue(new float[]{1,0.3,-1,0.4,-0.04,-0.4,-0.18,0.1,0,-0.2,0.15,0.15}, 12);
Group140.addChild(&PositionInterpolator143);

OrientationInterpolator& OrientationInterpolator144 =  OrientationInterpolator();
OrientationInterpolator144.setDEF(CString("sacroiliacRotInterp"));
OrientationInterpolator144.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator144.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group140.addChild(&OrientationInterpolator144);

OrientationInterpolator& OrientationInterpolator145 =  OrientationInterpolator();
OrientationInterpolator145.setDEF(CString("l_hipRotInterp"));
OrientationInterpolator145.setKey(new float[]{0,0.1,0.3,0.45,1}, 5);
OrientationInterpolator145.setKeyValue(new float[]{-1,0,0,1.5,-1,0,0,1,0,0,1,0,1,0,0,0.5,1,0,0,1}, 20);
Group140.addChild(&OrientationInterpolator145);

OrientationInterpolator& OrientationInterpolator146 =  OrientationInterpolator();
OrientationInterpolator146.setDEF(CString("l_kneeRotInterp"));
OrientationInterpolator146.setKey(new float[]{0,0.2,0.35,0.5,1}, 5);
OrientationInterpolator146.setKeyValue(new float[]{1,0,0,1,0,0,1,0,0,0,1,0.2,1,0,1,0.5,1,0,0,1.4}, 20);
Group140.addChild(&OrientationInterpolator146);

OrientationInterpolator& OrientationInterpolator147 =  OrientationInterpolator();
OrientationInterpolator147.setDEF(CString("l_ankleRotInterp"));
OrientationInterpolator147.setKey(new float[]{0,0.25,1}, 3);
OrientationInterpolator147.setKeyValue(new float[]{-1,0,0,1,0,0,1,0,1,0,0,1}, 12);
Group140.addChild(&OrientationInterpolator147);

OrientationInterpolator& OrientationInterpolator148 =  OrientationInterpolator();
OrientationInterpolator148.setDEF(CString("l_subtalarRotInterp"));
OrientationInterpolator148.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator148.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group140.addChild(&OrientationInterpolator148);

OrientationInterpolator& OrientationInterpolator149 =  OrientationInterpolator();
OrientationInterpolator149.setDEF(CString("l_midtarsalRotInterp"));
OrientationInterpolator149.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator149.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group140.addChild(&OrientationInterpolator149);

OrientationInterpolator& OrientationInterpolator150 =  OrientationInterpolator();
OrientationInterpolator150.setDEF(CString("l_metatarsalRotInterp"));
OrientationInterpolator150.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator150.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group140.addChild(&OrientationInterpolator150);

OrientationInterpolator& OrientationInterpolator151 =  OrientationInterpolator();
OrientationInterpolator151.setDEF(CString("r_hipRotInterp"));
OrientationInterpolator151.setKey(new float[]{0,0.25,0.5,0.75,1}, 5);
OrientationInterpolator151.setKeyValue(new float[]{1,0,0,1,1,0,0,1,-1,0,0,1,-1,0,0,1,-1,0,0,1}, 20);
Group140.addChild(&OrientationInterpolator151);

OrientationInterpolator& OrientationInterpolator152 =  OrientationInterpolator();
OrientationInterpolator152.setDEF(CString("r_kneeRotInterp"));
OrientationInterpolator152.setKey(new float[]{0,0.25,0.5,0.75,1}, 5);
OrientationInterpolator152.setKeyValue(new float[]{1,0,0,0.1,0,0,1,0,1,0,0,1,1,0,0,1,1,0,0,1.5}, 20);
Group140.addChild(&OrientationInterpolator152);

OrientationInterpolator& OrientationInterpolator153 =  OrientationInterpolator();
OrientationInterpolator153.setDEF(CString("r_ankleRotInterp"));
OrientationInterpolator153.setKey(new float[]{0,0.25,0.5,0.75,1}, 5);
OrientationInterpolator153.setKeyValue(new float[]{-1,0,0,1,0,0,1,0,1,0,0,1,1,0,0,1,1,0,0,0.5}, 20);
Group140.addChild(&OrientationInterpolator153);

OrientationInterpolator& OrientationInterpolator154 =  OrientationInterpolator();
OrientationInterpolator154.setDEF(CString("r_subtalarRotInterp"));
OrientationInterpolator154.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator154.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group140.addChild(&OrientationInterpolator154);

OrientationInterpolator& OrientationInterpolator155 =  OrientationInterpolator();
OrientationInterpolator155.setDEF(CString("r_midtarsalRotInterp"));
OrientationInterpolator155.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator155.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group140.addChild(&OrientationInterpolator155);

OrientationInterpolator& OrientationInterpolator156 =  OrientationInterpolator();
OrientationInterpolator156.setDEF(CString("r_metatarsalRotInterp"));
OrientationInterpolator156.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator156.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group140.addChild(&OrientationInterpolator156);

OrientationInterpolator& OrientationInterpolator157 =  OrientationInterpolator();
OrientationInterpolator157.setDEF(CString("vl5RotInterp"));
OrientationInterpolator157.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator157.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group140.addChild(&OrientationInterpolator157);

OrientationInterpolator& OrientationInterpolator158 =  OrientationInterpolator();
OrientationInterpolator158.setDEF(CString("vl4RotInterp"));
OrientationInterpolator158.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator158.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group140.addChild(&OrientationInterpolator158);

OrientationInterpolator& OrientationInterpolator159 =  OrientationInterpolator();
OrientationInterpolator159.setDEF(CString("vl3RotInterp"));
OrientationInterpolator159.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator159.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group140.addChild(&OrientationInterpolator159);

OrientationInterpolator& OrientationInterpolator160 =  OrientationInterpolator();
OrientationInterpolator160.setDEF(CString("vl2RotInterp"));
OrientationInterpolator160.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator160.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group140.addChild(&OrientationInterpolator160);

OrientationInterpolator& OrientationInterpolator161 =  OrientationInterpolator();
OrientationInterpolator161.setDEF(CString("vl1RotInterp"));
OrientationInterpolator161.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator161.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group140.addChild(&OrientationInterpolator161);

OrientationInterpolator& OrientationInterpolator162 =  OrientationInterpolator();
OrientationInterpolator162.setDEF(CString("vt12RotInterp"));
OrientationInterpolator162.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator162.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group140.addChild(&OrientationInterpolator162);

OrientationInterpolator& OrientationInterpolator163 =  OrientationInterpolator();
OrientationInterpolator163.setDEF(CString("vt11RotInterp"));
OrientationInterpolator163.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator163.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group140.addChild(&OrientationInterpolator163);

OrientationInterpolator& OrientationInterpolator164 =  OrientationInterpolator();
OrientationInterpolator164.setDEF(CString("vt10RotInterp"));
OrientationInterpolator164.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator164.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group140.addChild(&OrientationInterpolator164);

OrientationInterpolator& OrientationInterpolator165 =  OrientationInterpolator();
OrientationInterpolator165.setDEF(CString("vt9RotInterp"));
OrientationInterpolator165.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator165.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group140.addChild(&OrientationInterpolator165);

OrientationInterpolator& OrientationInterpolator166 =  OrientationInterpolator();
OrientationInterpolator166.setDEF(CString("vt8RotInterp"));
OrientationInterpolator166.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator166.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group140.addChild(&OrientationInterpolator166);

OrientationInterpolator& OrientationInterpolator167 =  OrientationInterpolator();
OrientationInterpolator167.setDEF(CString("vt7RotInterp"));
OrientationInterpolator167.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator167.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group140.addChild(&OrientationInterpolator167);

OrientationInterpolator& OrientationInterpolator168 =  OrientationInterpolator();
OrientationInterpolator168.setDEF(CString("vt6RotInterp"));
OrientationInterpolator168.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator168.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group140.addChild(&OrientationInterpolator168);

OrientationInterpolator& OrientationInterpolator169 =  OrientationInterpolator();
OrientationInterpolator169.setDEF(CString("vt5RotInterp"));
OrientationInterpolator169.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator169.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group140.addChild(&OrientationInterpolator169);

OrientationInterpolator& OrientationInterpolator170 =  OrientationInterpolator();
OrientationInterpolator170.setDEF(CString("vt4RotInterp"));
OrientationInterpolator170.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator170.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group140.addChild(&OrientationInterpolator170);

OrientationInterpolator& OrientationInterpolator171 =  OrientationInterpolator();
OrientationInterpolator171.setDEF(CString("vt3RotInterp"));
OrientationInterpolator171.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator171.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group140.addChild(&OrientationInterpolator171);

OrientationInterpolator& OrientationInterpolator172 =  OrientationInterpolator();
OrientationInterpolator172.setDEF(CString("vt2RotInterp"));
OrientationInterpolator172.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator172.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group140.addChild(&OrientationInterpolator172);

OrientationInterpolator& OrientationInterpolator173 =  OrientationInterpolator();
OrientationInterpolator173.setDEF(CString("vt1RotInterp"));
OrientationInterpolator173.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator173.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group140.addChild(&OrientationInterpolator173);

OrientationInterpolator& OrientationInterpolator174 =  OrientationInterpolator();
OrientationInterpolator174.setDEF(CString("vc7RotInterp"));
OrientationInterpolator174.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator174.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group140.addChild(&OrientationInterpolator174);

OrientationInterpolator& OrientationInterpolator175 =  OrientationInterpolator();
OrientationInterpolator175.setDEF(CString("vc6RotInterp"));
OrientationInterpolator175.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator175.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group140.addChild(&OrientationInterpolator175);

OrientationInterpolator& OrientationInterpolator176 =  OrientationInterpolator();
OrientationInterpolator176.setDEF(CString("vc5RotInterp"));
OrientationInterpolator176.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator176.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group140.addChild(&OrientationInterpolator176);

OrientationInterpolator& OrientationInterpolator177 =  OrientationInterpolator();
OrientationInterpolator177.setDEF(CString("vc4RotInterp"));
OrientationInterpolator177.setKey(new float[]{0,0.3,0.4,1}, 4);
OrientationInterpolator177.setKeyValue(new float[]{1,0,1,0.25,-1,0,-1,0.35,1,0,0,0.75,1,0,1,0.5}, 16);
Group140.addChild(&OrientationInterpolator177);

OrientationInterpolator& OrientationInterpolator178 =  OrientationInterpolator();
OrientationInterpolator178.setDEF(CString("vc3RotInterp"));
OrientationInterpolator178.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator178.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group140.addChild(&OrientationInterpolator178);

OrientationInterpolator& OrientationInterpolator179 =  OrientationInterpolator();
OrientationInterpolator179.setDEF(CString("vc2RotInterp"));
OrientationInterpolator179.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator179.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group140.addChild(&OrientationInterpolator179);

OrientationInterpolator& OrientationInterpolator180 =  OrientationInterpolator();
OrientationInterpolator180.setDEF(CString("vc1RotInterp"));
OrientationInterpolator180.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator180.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group140.addChild(&OrientationInterpolator180);

OrientationInterpolator& OrientationInterpolator181 =  OrientationInterpolator();
OrientationInterpolator181.setDEF(CString("skullbaseRotInterp"));
OrientationInterpolator181.setKey(new float[]{0,0.2,0.75,1}, 4);
OrientationInterpolator181.setKeyValue(new float[]{0,-1,0,0.5,0,0,1,0,0,0,1,0,0,1,0,0.35}, 16);
Group140.addChild(&OrientationInterpolator181);

OrientationInterpolator& OrientationInterpolator182 =  OrientationInterpolator();
OrientationInterpolator182.setDEF(CString("l_eyelid_jointRotInterp"));
OrientationInterpolator182.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator182.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group140.addChild(&OrientationInterpolator182);

OrientationInterpolator& OrientationInterpolator183 =  OrientationInterpolator();
OrientationInterpolator183.setDEF(CString("l_eyeball_jointRotInterp"));
OrientationInterpolator183.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator183.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group140.addChild(&OrientationInterpolator183);

OrientationInterpolator& OrientationInterpolator184 =  OrientationInterpolator();
OrientationInterpolator184.setDEF(CString("l_eyebrow_jointRotInterp"));
OrientationInterpolator184.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator184.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group140.addChild(&OrientationInterpolator184);

OrientationInterpolator& OrientationInterpolator185 =  OrientationInterpolator();
OrientationInterpolator185.setDEF(CString("r_eyelid_jointRotInterp"));
OrientationInterpolator185.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator185.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group140.addChild(&OrientationInterpolator185);

OrientationInterpolator& OrientationInterpolator186 =  OrientationInterpolator();
OrientationInterpolator186.setDEF(CString("r_eyeball_jointRotInterp"));
OrientationInterpolator186.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator186.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group140.addChild(&OrientationInterpolator186);

OrientationInterpolator& OrientationInterpolator187 =  OrientationInterpolator();
OrientationInterpolator187.setDEF(CString("r_eyebrow_jointRotInterp"));
OrientationInterpolator187.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator187.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group140.addChild(&OrientationInterpolator187);

OrientationInterpolator& OrientationInterpolator188 =  OrientationInterpolator();
OrientationInterpolator188.setDEF(CString("temporomandibularRotInterp"));
OrientationInterpolator188.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator188.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group140.addChild(&OrientationInterpolator188);

OrientationInterpolator& OrientationInterpolator189 =  OrientationInterpolator();
OrientationInterpolator189.setDEF(CString("l_sternoclavicularRotInterp"));
OrientationInterpolator189.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator189.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group140.addChild(&OrientationInterpolator189);

OrientationInterpolator& OrientationInterpolator190 =  OrientationInterpolator();
OrientationInterpolator190.setDEF(CString("l_acromioclavicularRotInterp"));
OrientationInterpolator190.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator190.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group140.addChild(&OrientationInterpolator190);

OrientationInterpolator& OrientationInterpolator191 =  OrientationInterpolator();
OrientationInterpolator191.setDEF(CString("l_shoulderRotInterp"));
OrientationInterpolator191.setKey(new float[]{0,0.4,1}, 3);
OrientationInterpolator191.setKeyValue(new float[]{0,0,1,0,0,0,1,1.5,-1,0,1,1.75}, 12);
Group140.addChild(&OrientationInterpolator191);

OrientationInterpolator& OrientationInterpolator192 =  OrientationInterpolator();
OrientationInterpolator192.setDEF(CString("l_elbowRotInterp"));
OrientationInterpolator192.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator192.setKeyValue(new float[]{-1,0,0,3,-1,0,0,0.75,-1,-1,0,0.5}, 12);
Group140.addChild(&OrientationInterpolator192);

OrientationInterpolator& OrientationInterpolator193 =  OrientationInterpolator();
OrientationInterpolator193.setDEF(CString("l_wristRotInterp"));
OrientationInterpolator193.setKey(new float[]{0,0.4,0.8,1}, 4);
OrientationInterpolator193.setKeyValue(new float[]{0,0,1,0,0,1,0,1.3,0,-0.5,1,1.3,0,0,1,0}, 16);
Group140.addChild(&OrientationInterpolator193);

OrientationInterpolator& OrientationInterpolator194 =  OrientationInterpolator();
OrientationInterpolator194.setDEF(CString("l_thumb1RotInterp"));
OrientationInterpolator194.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator194.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group140.addChild(&OrientationInterpolator194);

OrientationInterpolator& OrientationInterpolator195 =  OrientationInterpolator();
OrientationInterpolator195.setDEF(CString("l_thumb2RotInterp"));
OrientationInterpolator195.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator195.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group140.addChild(&OrientationInterpolator195);

OrientationInterpolator& OrientationInterpolator196 =  OrientationInterpolator();
OrientationInterpolator196.setDEF(CString("l_thumb3RotInterp"));
OrientationInterpolator196.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator196.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group140.addChild(&OrientationInterpolator196);

OrientationInterpolator& OrientationInterpolator197 =  OrientationInterpolator();
OrientationInterpolator197.setDEF(CString("l_index0RotInterp"));
OrientationInterpolator197.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator197.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group140.addChild(&OrientationInterpolator197);

OrientationInterpolator& OrientationInterpolator198 =  OrientationInterpolator();
OrientationInterpolator198.setDEF(CString("l_index1RotInterp"));
OrientationInterpolator198.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator198.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group140.addChild(&OrientationInterpolator198);

OrientationInterpolator& OrientationInterpolator199 =  OrientationInterpolator();
OrientationInterpolator199.setDEF(CString("l_index2RotInterp"));
OrientationInterpolator199.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator199.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group140.addChild(&OrientationInterpolator199);

OrientationInterpolator& OrientationInterpolator200 =  OrientationInterpolator();
OrientationInterpolator200.setDEF(CString("l_index3RotInterp"));
OrientationInterpolator200.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator200.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group140.addChild(&OrientationInterpolator200);

OrientationInterpolator& OrientationInterpolator201 =  OrientationInterpolator();
OrientationInterpolator201.setDEF(CString("l_middle0RotInterp"));
OrientationInterpolator201.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator201.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group140.addChild(&OrientationInterpolator201);

OrientationInterpolator& OrientationInterpolator202 =  OrientationInterpolator();
OrientationInterpolator202.setDEF(CString("l_middle1RotInterp"));
OrientationInterpolator202.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator202.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group140.addChild(&OrientationInterpolator202);

OrientationInterpolator& OrientationInterpolator203 =  OrientationInterpolator();
OrientationInterpolator203.setDEF(CString("l_middle2RotInterp"));
OrientationInterpolator203.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator203.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group140.addChild(&OrientationInterpolator203);

OrientationInterpolator& OrientationInterpolator204 =  OrientationInterpolator();
OrientationInterpolator204.setDEF(CString("l_middle3RotInterp"));
OrientationInterpolator204.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator204.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group140.addChild(&OrientationInterpolator204);

OrientationInterpolator& OrientationInterpolator205 =  OrientationInterpolator();
OrientationInterpolator205.setDEF(CString("l_ring0RotInterp"));
OrientationInterpolator205.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator205.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group140.addChild(&OrientationInterpolator205);

OrientationInterpolator& OrientationInterpolator206 =  OrientationInterpolator();
OrientationInterpolator206.setDEF(CString("l_ring1RotInterp"));
OrientationInterpolator206.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator206.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group140.addChild(&OrientationInterpolator206);

OrientationInterpolator& OrientationInterpolator207 =  OrientationInterpolator();
OrientationInterpolator207.setDEF(CString("l_ring2RotInterp"));
OrientationInterpolator207.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator207.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group140.addChild(&OrientationInterpolator207);

OrientationInterpolator& OrientationInterpolator208 =  OrientationInterpolator();
OrientationInterpolator208.setDEF(CString("l_ring3RotInterp"));
OrientationInterpolator208.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator208.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group140.addChild(&OrientationInterpolator208);

OrientationInterpolator& OrientationInterpolator209 =  OrientationInterpolator();
OrientationInterpolator209.setDEF(CString("l_pinky0RotInterp"));
OrientationInterpolator209.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator209.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group140.addChild(&OrientationInterpolator209);

OrientationInterpolator& OrientationInterpolator210 =  OrientationInterpolator();
OrientationInterpolator210.setDEF(CString("l_pinky1RotInterp"));
OrientationInterpolator210.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator210.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group140.addChild(&OrientationInterpolator210);

OrientationInterpolator& OrientationInterpolator211 =  OrientationInterpolator();
OrientationInterpolator211.setDEF(CString("l_pinky2RotInterp"));
OrientationInterpolator211.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator211.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group140.addChild(&OrientationInterpolator211);

OrientationInterpolator& OrientationInterpolator212 =  OrientationInterpolator();
OrientationInterpolator212.setDEF(CString("l_pinky3RotInterp"));
OrientationInterpolator212.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator212.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group140.addChild(&OrientationInterpolator212);

OrientationInterpolator& OrientationInterpolator213 =  OrientationInterpolator();
OrientationInterpolator213.setDEF(CString("r_sternoclavicularRotInterp"));
OrientationInterpolator213.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator213.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group140.addChild(&OrientationInterpolator213);

OrientationInterpolator& OrientationInterpolator214 =  OrientationInterpolator();
OrientationInterpolator214.setDEF(CString("r_acromioclavicularRotInterp"));
OrientationInterpolator214.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator214.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group140.addChild(&OrientationInterpolator214);

OrientationInterpolator& OrientationInterpolator215 =  OrientationInterpolator();
OrientationInterpolator215.setDEF(CString("r_shoulderRotInterp"));
OrientationInterpolator215.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator215.setKeyValue(new float[]{0,0,-1,2.5,0,0,-1,1.5,0,0,-1,1.75}, 12);
Group140.addChild(&OrientationInterpolator215);

OrientationInterpolator& OrientationInterpolator216 =  OrientationInterpolator();
OrientationInterpolator216.setDEF(CString("r_elbowRotInterp"));
OrientationInterpolator216.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator216.setKeyValue(new float[]{-1,0,0,3,-1,0,0,0.75,-1,-1,0,0.5}, 12);
Group140.addChild(&OrientationInterpolator216);

OrientationInterpolator& OrientationInterpolator217 =  OrientationInterpolator();
OrientationInterpolator217.setDEF(CString("r_wristRotInterp"));
OrientationInterpolator217.setKey(new float[]{0,0.5,0.7,1}, 4);
OrientationInterpolator217.setKeyValue(new float[]{0,1,0,0.3,0,0,1,0,0,0,-1,1,0,-1,0,0.3}, 16);
Group140.addChild(&OrientationInterpolator217);

OrientationInterpolator& OrientationInterpolator218 =  OrientationInterpolator();
OrientationInterpolator218.setDEF(CString("r_thumb1RotInterp"));
OrientationInterpolator218.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator218.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group140.addChild(&OrientationInterpolator218);

OrientationInterpolator& OrientationInterpolator219 =  OrientationInterpolator();
OrientationInterpolator219.setDEF(CString("r_thumb2RotInterp"));
OrientationInterpolator219.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator219.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group140.addChild(&OrientationInterpolator219);

OrientationInterpolator& OrientationInterpolator220 =  OrientationInterpolator();
OrientationInterpolator220.setDEF(CString("r_thumb3RotInterp"));
OrientationInterpolator220.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator220.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0}, 12);
Group140.addChild(&OrientationInterpolator220);

OrientationInterpolator& OrientationInterpolator221 =  OrientationInterpolator();
OrientationInterpolator221.setDEF(CString("r_index0RotInterp"));
OrientationInterpolator221.setKey(new float[]{0,0.5,0.75,1}, 4);
OrientationInterpolator221.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,1,0,0,1,0}, 16);
Group140.addChild(&OrientationInterpolator221);

OrientationInterpolator& OrientationInterpolator222 =  OrientationInterpolator();
OrientationInterpolator222.setDEF(CString("r_index1RotInterp"));
OrientationInterpolator222.setKey(new float[]{0,0.5,0.75,1}, 4);
OrientationInterpolator222.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0}, 16);
Group140.addChild(&OrientationInterpolator222);

OrientationInterpolator& OrientationInterpolator223 =  OrientationInterpolator();
OrientationInterpolator223.setDEF(CString("r_index2RotInterp"));
OrientationInterpolator223.setKey(new float[]{0,0.5,0.75,1}, 4);
OrientationInterpolator223.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0}, 16);
Group140.addChild(&OrientationInterpolator223);

OrientationInterpolator& OrientationInterpolator224 =  OrientationInterpolator();
OrientationInterpolator224.setDEF(CString("r_index3RotInterp"));
OrientationInterpolator224.setKey(new float[]{0,0.5,0.75,1}, 4);
OrientationInterpolator224.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0}, 16);
Group140.addChild(&OrientationInterpolator224);

OrientationInterpolator& OrientationInterpolator225 =  OrientationInterpolator();
OrientationInterpolator225.setDEF(CString("r_middle0RotInterp"));
OrientationInterpolator225.setKey(new float[]{0,0.5,0.75,1}, 4);
OrientationInterpolator225.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,1,0,0,1,0}, 16);
Group140.addChild(&OrientationInterpolator225);

OrientationInterpolator& OrientationInterpolator226 =  OrientationInterpolator();
OrientationInterpolator226.setDEF(CString("r_middle1RotInterp"));
OrientationInterpolator226.setKey(new float[]{0,0.5,0.75,1}, 4);
OrientationInterpolator226.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0}, 16);
Group140.addChild(&OrientationInterpolator226);

OrientationInterpolator& OrientationInterpolator227 =  OrientationInterpolator();
OrientationInterpolator227.setDEF(CString("r_middle2RotInterp"));
OrientationInterpolator227.setKey(new float[]{0,0.5,0.75,1}, 4);
OrientationInterpolator227.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0}, 16);
Group140.addChild(&OrientationInterpolator227);

OrientationInterpolator& OrientationInterpolator228 =  OrientationInterpolator();
OrientationInterpolator228.setDEF(CString("r_middle3RotInterp"));
OrientationInterpolator228.setKey(new float[]{0,0.5,0.75,1}, 4);
OrientationInterpolator228.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0}, 16);
Group140.addChild(&OrientationInterpolator228);

OrientationInterpolator& OrientationInterpolator229 =  OrientationInterpolator();
OrientationInterpolator229.setDEF(CString("r_ring0RotInterp"));
OrientationInterpolator229.setKey(new float[]{0,0.5,0.75,1}, 4);
OrientationInterpolator229.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,1,0,0,1,0}, 16);
Group140.addChild(&OrientationInterpolator229);

OrientationInterpolator& OrientationInterpolator230 =  OrientationInterpolator();
OrientationInterpolator230.setDEF(CString("r_ring1RotInterp"));
OrientationInterpolator230.setKey(new float[]{0,0.5,0.75,1}, 4);
OrientationInterpolator230.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0}, 16);
Group140.addChild(&OrientationInterpolator230);

OrientationInterpolator& OrientationInterpolator231 =  OrientationInterpolator();
OrientationInterpolator231.setDEF(CString("r_ring2RotInterp"));
OrientationInterpolator231.setKey(new float[]{0,0.5,0.75,1}, 4);
OrientationInterpolator231.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0}, 16);
Group140.addChild(&OrientationInterpolator231);

OrientationInterpolator& OrientationInterpolator232 =  OrientationInterpolator();
OrientationInterpolator232.setDEF(CString("r_ring3RotInterp"));
OrientationInterpolator232.setKey(new float[]{0,0.5,0.75,1}, 4);
OrientationInterpolator232.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0}, 16);
Group140.addChild(&OrientationInterpolator232);

OrientationInterpolator& OrientationInterpolator233 =  OrientationInterpolator();
OrientationInterpolator233.setDEF(CString("r_pinky0RotInterp"));
OrientationInterpolator233.setKey(new float[]{0,0.5,0.75,1}, 4);
OrientationInterpolator233.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,1,0,0,1,0}, 16);
Group140.addChild(&OrientationInterpolator233);

OrientationInterpolator& OrientationInterpolator234 =  OrientationInterpolator();
OrientationInterpolator234.setDEF(CString("r_pinky1RotInterp"));
OrientationInterpolator234.setKey(new float[]{0,0.5,0.75,1}, 4);
OrientationInterpolator234.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0}, 16);
Group140.addChild(&OrientationInterpolator234);

OrientationInterpolator& OrientationInterpolator235 =  OrientationInterpolator();
OrientationInterpolator235.setDEF(CString("r_pinky2RotInterp"));
OrientationInterpolator235.setKey(new float[]{0,0.5,0.75,1}, 4);
OrientationInterpolator235.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0}, 16);
Group140.addChild(&OrientationInterpolator235);

OrientationInterpolator& OrientationInterpolator236 =  OrientationInterpolator();
OrientationInterpolator236.setDEF(CString("r_pinky3RotInterp"));
OrientationInterpolator236.setKey(new float[]{0,0.5,0.75,1}, 4);
OrientationInterpolator236.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0}, 16);
Group140.addChild(&OrientationInterpolator236);

Scene15.addChild(&Group140);

//TimeSensor to Interpolators
ROUTE& ROUTE237 =  ROUTE();
ROUTE237.setFromField(CString("fraction_changed"));
ROUTE237.setFromNode(CString("KickTimer"));
ROUTE237.setToField(CString("set_fraction"));
ROUTE237.setToNode(CString("HumanoidRootRotInterp"));
Scene15.addChild(&ROUTE237);

ROUTE& ROUTE238 =  ROUTE();
ROUTE238.setFromField(CString("fraction_changed"));
ROUTE238.setFromNode(CString("KickTimer"));
ROUTE238.setToField(CString("set_fraction"));
ROUTE238.setToNode(CString("HumanoidRootTransInterp"));
Scene15.addChild(&ROUTE238);

ROUTE& ROUTE239 =  ROUTE();
ROUTE239.setFromField(CString("fraction_changed"));
ROUTE239.setFromNode(CString("KickTimer"));
ROUTE239.setToField(CString("set_fraction"));
ROUTE239.setToNode(CString("sacroiliacRotInterp"));
Scene15.addChild(&ROUTE239);

ROUTE& ROUTE240 =  ROUTE();
ROUTE240.setFromField(CString("fraction_changed"));
ROUTE240.setFromNode(CString("KickTimer"));
ROUTE240.setToField(CString("set_fraction"));
ROUTE240.setToNode(CString("l_hipRotInterp"));
Scene15.addChild(&ROUTE240);

ROUTE& ROUTE241 =  ROUTE();
ROUTE241.setFromField(CString("fraction_changed"));
ROUTE241.setFromNode(CString("KickTimer"));
ROUTE241.setToField(CString("set_fraction"));
ROUTE241.setToNode(CString("l_kneeRotInterp"));
Scene15.addChild(&ROUTE241);

ROUTE& ROUTE242 =  ROUTE();
ROUTE242.setFromField(CString("fraction_changed"));
ROUTE242.setFromNode(CString("KickTimer"));
ROUTE242.setToField(CString("set_fraction"));
ROUTE242.setToNode(CString("l_ankleRotInterp"));
Scene15.addChild(&ROUTE242);

ROUTE& ROUTE243 =  ROUTE();
ROUTE243.setFromField(CString("fraction_changed"));
ROUTE243.setFromNode(CString("KickTimer"));
ROUTE243.setToField(CString("set_fraction"));
ROUTE243.setToNode(CString("l_subtalarRotInterp"));
Scene15.addChild(&ROUTE243);

ROUTE& ROUTE244 =  ROUTE();
ROUTE244.setFromField(CString("fraction_changed"));
ROUTE244.setFromNode(CString("KickTimer"));
ROUTE244.setToField(CString("set_fraction"));
ROUTE244.setToNode(CString("l_midtarsalRotInterp"));
Scene15.addChild(&ROUTE244);

ROUTE& ROUTE245 =  ROUTE();
ROUTE245.setFromField(CString("fraction_changed"));
ROUTE245.setFromNode(CString("KickTimer"));
ROUTE245.setToField(CString("set_fraction"));
ROUTE245.setToNode(CString("l_metatarsalRotInterp"));
Scene15.addChild(&ROUTE245);

ROUTE& ROUTE246 =  ROUTE();
ROUTE246.setFromField(CString("fraction_changed"));
ROUTE246.setFromNode(CString("KickTimer"));
ROUTE246.setToField(CString("set_fraction"));
ROUTE246.setToNode(CString("r_hipRotInterp"));
Scene15.addChild(&ROUTE246);

ROUTE& ROUTE247 =  ROUTE();
ROUTE247.setFromField(CString("fraction_changed"));
ROUTE247.setFromNode(CString("KickTimer"));
ROUTE247.setToField(CString("set_fraction"));
ROUTE247.setToNode(CString("r_kneeRotInterp"));
Scene15.addChild(&ROUTE247);

ROUTE& ROUTE248 =  ROUTE();
ROUTE248.setFromField(CString("fraction_changed"));
ROUTE248.setFromNode(CString("KickTimer"));
ROUTE248.setToField(CString("set_fraction"));
ROUTE248.setToNode(CString("r_ankleRotInterp"));
Scene15.addChild(&ROUTE248);

ROUTE& ROUTE249 =  ROUTE();
ROUTE249.setFromField(CString("fraction_changed"));
ROUTE249.setFromNode(CString("KickTimer"));
ROUTE249.setToField(CString("set_fraction"));
ROUTE249.setToNode(CString("r_subtalarRotInterp"));
Scene15.addChild(&ROUTE249);

ROUTE& ROUTE250 =  ROUTE();
ROUTE250.setFromField(CString("fraction_changed"));
ROUTE250.setFromNode(CString("KickTimer"));
ROUTE250.setToField(CString("set_fraction"));
ROUTE250.setToNode(CString("r_midtarsalRotInterp"));
Scene15.addChild(&ROUTE250);

ROUTE& ROUTE251 =  ROUTE();
ROUTE251.setFromField(CString("fraction_changed"));
ROUTE251.setFromNode(CString("KickTimer"));
ROUTE251.setToField(CString("set_fraction"));
ROUTE251.setToNode(CString("r_metatarsalRotInterp"));
Scene15.addChild(&ROUTE251);

ROUTE& ROUTE252 =  ROUTE();
ROUTE252.setFromField(CString("fraction_changed"));
ROUTE252.setFromNode(CString("KickTimer"));
ROUTE252.setToField(CString("set_fraction"));
ROUTE252.setToNode(CString("vl5RotInterp"));
Scene15.addChild(&ROUTE252);

ROUTE& ROUTE253 =  ROUTE();
ROUTE253.setFromField(CString("fraction_changed"));
ROUTE253.setFromNode(CString("KickTimer"));
ROUTE253.setToField(CString("set_fraction"));
ROUTE253.setToNode(CString("vl4RotInterp"));
Scene15.addChild(&ROUTE253);

ROUTE& ROUTE254 =  ROUTE();
ROUTE254.setFromField(CString("fraction_changed"));
ROUTE254.setFromNode(CString("KickTimer"));
ROUTE254.setToField(CString("set_fraction"));
ROUTE254.setToNode(CString("vl3RotInterp"));
Scene15.addChild(&ROUTE254);

ROUTE& ROUTE255 =  ROUTE();
ROUTE255.setFromField(CString("fraction_changed"));
ROUTE255.setFromNode(CString("KickTimer"));
ROUTE255.setToField(CString("set_fraction"));
ROUTE255.setToNode(CString("vl2RotInterp"));
Scene15.addChild(&ROUTE255);

ROUTE& ROUTE256 =  ROUTE();
ROUTE256.setFromField(CString("fraction_changed"));
ROUTE256.setFromNode(CString("KickTimer"));
ROUTE256.setToField(CString("set_fraction"));
ROUTE256.setToNode(CString("vl1RotInterp"));
Scene15.addChild(&ROUTE256);

ROUTE& ROUTE257 =  ROUTE();
ROUTE257.setFromField(CString("fraction_changed"));
ROUTE257.setFromNode(CString("KickTimer"));
ROUTE257.setToField(CString("set_fraction"));
ROUTE257.setToNode(CString("vt12RotInterp"));
Scene15.addChild(&ROUTE257);

ROUTE& ROUTE258 =  ROUTE();
ROUTE258.setFromField(CString("fraction_changed"));
ROUTE258.setFromNode(CString("KickTimer"));
ROUTE258.setToField(CString("set_fraction"));
ROUTE258.setToNode(CString("vt11RotInterp"));
Scene15.addChild(&ROUTE258);

ROUTE& ROUTE259 =  ROUTE();
ROUTE259.setFromField(CString("fraction_changed"));
ROUTE259.setFromNode(CString("KickTimer"));
ROUTE259.setToField(CString("set_fraction"));
ROUTE259.setToNode(CString("vt10RotInterp"));
Scene15.addChild(&ROUTE259);

ROUTE& ROUTE260 =  ROUTE();
ROUTE260.setFromField(CString("fraction_changed"));
ROUTE260.setFromNode(CString("KickTimer"));
ROUTE260.setToField(CString("set_fraction"));
ROUTE260.setToNode(CString("vt9RotInterp"));
Scene15.addChild(&ROUTE260);

ROUTE& ROUTE261 =  ROUTE();
ROUTE261.setFromField(CString("fraction_changed"));
ROUTE261.setFromNode(CString("KickTimer"));
ROUTE261.setToField(CString("set_fraction"));
ROUTE261.setToNode(CString("vt8RotInterp"));
Scene15.addChild(&ROUTE261);

ROUTE& ROUTE262 =  ROUTE();
ROUTE262.setFromField(CString("fraction_changed"));
ROUTE262.setFromNode(CString("KickTimer"));
ROUTE262.setToField(CString("set_fraction"));
ROUTE262.setToNode(CString("vt7RotInterp"));
Scene15.addChild(&ROUTE262);

ROUTE& ROUTE263 =  ROUTE();
ROUTE263.setFromField(CString("fraction_changed"));
ROUTE263.setFromNode(CString("KickTimer"));
ROUTE263.setToField(CString("set_fraction"));
ROUTE263.setToNode(CString("vt6RotInterp"));
Scene15.addChild(&ROUTE263);

ROUTE& ROUTE264 =  ROUTE();
ROUTE264.setFromField(CString("fraction_changed"));
ROUTE264.setFromNode(CString("KickTimer"));
ROUTE264.setToField(CString("set_fraction"));
ROUTE264.setToNode(CString("vt5RotInterp"));
Scene15.addChild(&ROUTE264);

ROUTE& ROUTE265 =  ROUTE();
ROUTE265.setFromField(CString("fraction_changed"));
ROUTE265.setFromNode(CString("KickTimer"));
ROUTE265.setToField(CString("set_fraction"));
ROUTE265.setToNode(CString("vt4RotInterp"));
Scene15.addChild(&ROUTE265);

ROUTE& ROUTE266 =  ROUTE();
ROUTE266.setFromField(CString("fraction_changed"));
ROUTE266.setFromNode(CString("KickTimer"));
ROUTE266.setToField(CString("set_fraction"));
ROUTE266.setToNode(CString("vt3RotInterp"));
Scene15.addChild(&ROUTE266);

ROUTE& ROUTE267 =  ROUTE();
ROUTE267.setFromField(CString("fraction_changed"));
ROUTE267.setFromNode(CString("KickTimer"));
ROUTE267.setToField(CString("set_fraction"));
ROUTE267.setToNode(CString("vt2RotInterp"));
Scene15.addChild(&ROUTE267);

ROUTE& ROUTE268 =  ROUTE();
ROUTE268.setFromField(CString("fraction_changed"));
ROUTE268.setFromNode(CString("KickTimer"));
ROUTE268.setToField(CString("set_fraction"));
ROUTE268.setToNode(CString("vt1RotInterp"));
Scene15.addChild(&ROUTE268);

ROUTE& ROUTE269 =  ROUTE();
ROUTE269.setFromField(CString("fraction_changed"));
ROUTE269.setFromNode(CString("KickTimer"));
ROUTE269.setToField(CString("set_fraction"));
ROUTE269.setToNode(CString("vc7RotInterp"));
Scene15.addChild(&ROUTE269);

ROUTE& ROUTE270 =  ROUTE();
ROUTE270.setFromField(CString("fraction_changed"));
ROUTE270.setFromNode(CString("KickTimer"));
ROUTE270.setToField(CString("set_fraction"));
ROUTE270.setToNode(CString("vc6RotInterp"));
Scene15.addChild(&ROUTE270);

ROUTE& ROUTE271 =  ROUTE();
ROUTE271.setFromField(CString("fraction_changed"));
ROUTE271.setFromNode(CString("KickTimer"));
ROUTE271.setToField(CString("set_fraction"));
ROUTE271.setToNode(CString("vc5RotInterp"));
Scene15.addChild(&ROUTE271);

ROUTE& ROUTE272 =  ROUTE();
ROUTE272.setFromField(CString("fraction_changed"));
ROUTE272.setFromNode(CString("KickTimer"));
ROUTE272.setToField(CString("set_fraction"));
ROUTE272.setToNode(CString("vc4RotInterp"));
Scene15.addChild(&ROUTE272);

ROUTE& ROUTE273 =  ROUTE();
ROUTE273.setFromField(CString("fraction_changed"));
ROUTE273.setFromNode(CString("KickTimer"));
ROUTE273.setToField(CString("set_fraction"));
ROUTE273.setToNode(CString("vc3RotInterp"));
Scene15.addChild(&ROUTE273);

ROUTE& ROUTE274 =  ROUTE();
ROUTE274.setFromField(CString("fraction_changed"));
ROUTE274.setFromNode(CString("KickTimer"));
ROUTE274.setToField(CString("set_fraction"));
ROUTE274.setToNode(CString("vc2RotInterp"));
Scene15.addChild(&ROUTE274);

ROUTE& ROUTE275 =  ROUTE();
ROUTE275.setFromField(CString("fraction_changed"));
ROUTE275.setFromNode(CString("KickTimer"));
ROUTE275.setToField(CString("set_fraction"));
ROUTE275.setToNode(CString("vc1RotInterp"));
Scene15.addChild(&ROUTE275);

ROUTE& ROUTE276 =  ROUTE();
ROUTE276.setFromField(CString("fraction_changed"));
ROUTE276.setFromNode(CString("KickTimer"));
ROUTE276.setToField(CString("set_fraction"));
ROUTE276.setToNode(CString("skullbaseRotInterp"));
Scene15.addChild(&ROUTE276);

ROUTE& ROUTE277 =  ROUTE();
ROUTE277.setFromField(CString("fraction_changed"));
ROUTE277.setFromNode(CString("KickTimer"));
ROUTE277.setToField(CString("set_fraction"));
ROUTE277.setToNode(CString("l_eyelid_jointRotInterp"));
Scene15.addChild(&ROUTE277);

ROUTE& ROUTE278 =  ROUTE();
ROUTE278.setFromField(CString("fraction_changed"));
ROUTE278.setFromNode(CString("KickTimer"));
ROUTE278.setToField(CString("set_fraction"));
ROUTE278.setToNode(CString("l_eyeball_jointRotInterp"));
Scene15.addChild(&ROUTE278);

ROUTE& ROUTE279 =  ROUTE();
ROUTE279.setFromField(CString("fraction_changed"));
ROUTE279.setFromNode(CString("KickTimer"));
ROUTE279.setToField(CString("set_fraction"));
ROUTE279.setToNode(CString("l_eyebrow_jointRotInterp"));
Scene15.addChild(&ROUTE279);

ROUTE& ROUTE280 =  ROUTE();
ROUTE280.setFromField(CString("fraction_changed"));
ROUTE280.setFromNode(CString("KickTimer"));
ROUTE280.setToField(CString("set_fraction"));
ROUTE280.setToNode(CString("r_eyelid_jointRotInterp"));
Scene15.addChild(&ROUTE280);

ROUTE& ROUTE281 =  ROUTE();
ROUTE281.setFromField(CString("fraction_changed"));
ROUTE281.setFromNode(CString("KickTimer"));
ROUTE281.setToField(CString("set_fraction"));
ROUTE281.setToNode(CString("r_eyeball_jointRotInterp"));
Scene15.addChild(&ROUTE281);

ROUTE& ROUTE282 =  ROUTE();
ROUTE282.setFromField(CString("fraction_changed"));
ROUTE282.setFromNode(CString("KickTimer"));
ROUTE282.setToField(CString("set_fraction"));
ROUTE282.setToNode(CString("r_eyebrow_jointRotInterp"));
Scene15.addChild(&ROUTE282);

ROUTE& ROUTE283 =  ROUTE();
ROUTE283.setFromField(CString("fraction_changed"));
ROUTE283.setFromNode(CString("KickTimer"));
ROUTE283.setToField(CString("set_fraction"));
ROUTE283.setToNode(CString("temporomandibularRotInterp"));
Scene15.addChild(&ROUTE283);

ROUTE& ROUTE284 =  ROUTE();
ROUTE284.setFromField(CString("fraction_changed"));
ROUTE284.setFromNode(CString("KickTimer"));
ROUTE284.setToField(CString("set_fraction"));
ROUTE284.setToNode(CString("l_sternoclavicularRotInterp"));
Scene15.addChild(&ROUTE284);

ROUTE& ROUTE285 =  ROUTE();
ROUTE285.setFromField(CString("fraction_changed"));
ROUTE285.setFromNode(CString("KickTimer"));
ROUTE285.setToField(CString("set_fraction"));
ROUTE285.setToNode(CString("l_acromioclavicularRotInterp"));
Scene15.addChild(&ROUTE285);

ROUTE& ROUTE286 =  ROUTE();
ROUTE286.setFromField(CString("fraction_changed"));
ROUTE286.setFromNode(CString("KickTimer"));
ROUTE286.setToField(CString("set_fraction"));
ROUTE286.setToNode(CString("l_shoulderRotInterp"));
Scene15.addChild(&ROUTE286);

ROUTE& ROUTE287 =  ROUTE();
ROUTE287.setFromField(CString("fraction_changed"));
ROUTE287.setFromNode(CString("KickTimer"));
ROUTE287.setToField(CString("set_fraction"));
ROUTE287.setToNode(CString("l_elbowRotInterp"));
Scene15.addChild(&ROUTE287);

ROUTE& ROUTE288 =  ROUTE();
ROUTE288.setFromField(CString("fraction_changed"));
ROUTE288.setFromNode(CString("KickTimer"));
ROUTE288.setToField(CString("set_fraction"));
ROUTE288.setToNode(CString("l_wristRotInterp"));
Scene15.addChild(&ROUTE288);

ROUTE& ROUTE289 =  ROUTE();
ROUTE289.setFromField(CString("fraction_changed"));
ROUTE289.setFromNode(CString("KickTimer"));
ROUTE289.setToField(CString("set_fraction"));
ROUTE289.setToNode(CString("l_thumb1RotInterp"));
Scene15.addChild(&ROUTE289);

ROUTE& ROUTE290 =  ROUTE();
ROUTE290.setFromField(CString("fraction_changed"));
ROUTE290.setFromNode(CString("KickTimer"));
ROUTE290.setToField(CString("set_fraction"));
ROUTE290.setToNode(CString("l_thumb2RotInterp"));
Scene15.addChild(&ROUTE290);

ROUTE& ROUTE291 =  ROUTE();
ROUTE291.setFromField(CString("fraction_changed"));
ROUTE291.setFromNode(CString("KickTimer"));
ROUTE291.setToField(CString("set_fraction"));
ROUTE291.setToNode(CString("l_thumb3RotInterp"));
Scene15.addChild(&ROUTE291);

ROUTE& ROUTE292 =  ROUTE();
ROUTE292.setFromField(CString("fraction_changed"));
ROUTE292.setFromNode(CString("KickTimer"));
ROUTE292.setToField(CString("set_fraction"));
ROUTE292.setToNode(CString("l_index0RotInterp"));
Scene15.addChild(&ROUTE292);

ROUTE& ROUTE293 =  ROUTE();
ROUTE293.setFromField(CString("fraction_changed"));
ROUTE293.setFromNode(CString("KickTimer"));
ROUTE293.setToField(CString("set_fraction"));
ROUTE293.setToNode(CString("l_index1RotInterp"));
Scene15.addChild(&ROUTE293);

ROUTE& ROUTE294 =  ROUTE();
ROUTE294.setFromField(CString("fraction_changed"));
ROUTE294.setFromNode(CString("KickTimer"));
ROUTE294.setToField(CString("set_fraction"));
ROUTE294.setToNode(CString("l_index2RotInterp"));
Scene15.addChild(&ROUTE294);

ROUTE& ROUTE295 =  ROUTE();
ROUTE295.setFromField(CString("fraction_changed"));
ROUTE295.setFromNode(CString("KickTimer"));
ROUTE295.setToField(CString("set_fraction"));
ROUTE295.setToNode(CString("l_index3RotInterp"));
Scene15.addChild(&ROUTE295);

ROUTE& ROUTE296 =  ROUTE();
ROUTE296.setFromField(CString("fraction_changed"));
ROUTE296.setFromNode(CString("KickTimer"));
ROUTE296.setToField(CString("set_fraction"));
ROUTE296.setToNode(CString("l_middle0RotInterp"));
Scene15.addChild(&ROUTE296);

ROUTE& ROUTE297 =  ROUTE();
ROUTE297.setFromField(CString("fraction_changed"));
ROUTE297.setFromNode(CString("KickTimer"));
ROUTE297.setToField(CString("set_fraction"));
ROUTE297.setToNode(CString("l_middle1RotInterp"));
Scene15.addChild(&ROUTE297);

ROUTE& ROUTE298 =  ROUTE();
ROUTE298.setFromField(CString("fraction_changed"));
ROUTE298.setFromNode(CString("KickTimer"));
ROUTE298.setToField(CString("set_fraction"));
ROUTE298.setToNode(CString("l_middle2RotInterp"));
Scene15.addChild(&ROUTE298);

ROUTE& ROUTE299 =  ROUTE();
ROUTE299.setFromField(CString("fraction_changed"));
ROUTE299.setFromNode(CString("KickTimer"));
ROUTE299.setToField(CString("set_fraction"));
ROUTE299.setToNode(CString("l_middle3RotInterp"));
Scene15.addChild(&ROUTE299);

ROUTE& ROUTE300 =  ROUTE();
ROUTE300.setFromField(CString("fraction_changed"));
ROUTE300.setFromNode(CString("KickTimer"));
ROUTE300.setToField(CString("set_fraction"));
ROUTE300.setToNode(CString("l_ring0RotInterp"));
Scene15.addChild(&ROUTE300);

ROUTE& ROUTE301 =  ROUTE();
ROUTE301.setFromField(CString("fraction_changed"));
ROUTE301.setFromNode(CString("KickTimer"));
ROUTE301.setToField(CString("set_fraction"));
ROUTE301.setToNode(CString("l_ring1RotInterp"));
Scene15.addChild(&ROUTE301);

ROUTE& ROUTE302 =  ROUTE();
ROUTE302.setFromField(CString("fraction_changed"));
ROUTE302.setFromNode(CString("KickTimer"));
ROUTE302.setToField(CString("set_fraction"));
ROUTE302.setToNode(CString("l_ring2RotInterp"));
Scene15.addChild(&ROUTE302);

ROUTE& ROUTE303 =  ROUTE();
ROUTE303.setFromField(CString("fraction_changed"));
ROUTE303.setFromNode(CString("KickTimer"));
ROUTE303.setToField(CString("set_fraction"));
ROUTE303.setToNode(CString("l_ring3RotInterp"));
Scene15.addChild(&ROUTE303);

ROUTE& ROUTE304 =  ROUTE();
ROUTE304.setFromField(CString("fraction_changed"));
ROUTE304.setFromNode(CString("KickTimer"));
ROUTE304.setToField(CString("set_fraction"));
ROUTE304.setToNode(CString("l_pinky0RotInterp"));
Scene15.addChild(&ROUTE304);

ROUTE& ROUTE305 =  ROUTE();
ROUTE305.setFromField(CString("fraction_changed"));
ROUTE305.setFromNode(CString("KickTimer"));
ROUTE305.setToField(CString("set_fraction"));
ROUTE305.setToNode(CString("l_pinky1RotInterp"));
Scene15.addChild(&ROUTE305);

ROUTE& ROUTE306 =  ROUTE();
ROUTE306.setFromField(CString("fraction_changed"));
ROUTE306.setFromNode(CString("KickTimer"));
ROUTE306.setToField(CString("set_fraction"));
ROUTE306.setToNode(CString("l_pinky2RotInterp"));
Scene15.addChild(&ROUTE306);

ROUTE& ROUTE307 =  ROUTE();
ROUTE307.setFromField(CString("fraction_changed"));
ROUTE307.setFromNode(CString("KickTimer"));
ROUTE307.setToField(CString("set_fraction"));
ROUTE307.setToNode(CString("l_pinky3RotInterp"));
Scene15.addChild(&ROUTE307);

ROUTE& ROUTE308 =  ROUTE();
ROUTE308.setFromField(CString("fraction_changed"));
ROUTE308.setFromNode(CString("KickTimer"));
ROUTE308.setToField(CString("set_fraction"));
ROUTE308.setToNode(CString("r_sternoclavicularRotInterp"));
Scene15.addChild(&ROUTE308);

ROUTE& ROUTE309 =  ROUTE();
ROUTE309.setFromField(CString("fraction_changed"));
ROUTE309.setFromNode(CString("KickTimer"));
ROUTE309.setToField(CString("set_fraction"));
ROUTE309.setToNode(CString("r_acromioclavicularRotInterp"));
Scene15.addChild(&ROUTE309);

ROUTE& ROUTE310 =  ROUTE();
ROUTE310.setFromField(CString("fraction_changed"));
ROUTE310.setFromNode(CString("KickTimer"));
ROUTE310.setToField(CString("set_fraction"));
ROUTE310.setToNode(CString("r_shoulderRotInterp"));
Scene15.addChild(&ROUTE310);

ROUTE& ROUTE311 =  ROUTE();
ROUTE311.setFromField(CString("fraction_changed"));
ROUTE311.setFromNode(CString("KickTimer"));
ROUTE311.setToField(CString("set_fraction"));
ROUTE311.setToNode(CString("r_elbowRotInterp"));
Scene15.addChild(&ROUTE311);

ROUTE& ROUTE312 =  ROUTE();
ROUTE312.setFromField(CString("fraction_changed"));
ROUTE312.setFromNode(CString("KickTimer"));
ROUTE312.setToField(CString("set_fraction"));
ROUTE312.setToNode(CString("r_wristRotInterp"));
Scene15.addChild(&ROUTE312);

ROUTE& ROUTE313 =  ROUTE();
ROUTE313.setFromField(CString("fraction_changed"));
ROUTE313.setFromNode(CString("KickTimer"));
ROUTE313.setToField(CString("set_fraction"));
ROUTE313.setToNode(CString("r_thumb1RotInterp"));
Scene15.addChild(&ROUTE313);

ROUTE& ROUTE314 =  ROUTE();
ROUTE314.setFromField(CString("fraction_changed"));
ROUTE314.setFromNode(CString("KickTimer"));
ROUTE314.setToField(CString("set_fraction"));
ROUTE314.setToNode(CString("r_thumb2RotInterp"));
Scene15.addChild(&ROUTE314);

ROUTE& ROUTE315 =  ROUTE();
ROUTE315.setFromField(CString("fraction_changed"));
ROUTE315.setFromNode(CString("KickTimer"));
ROUTE315.setToField(CString("set_fraction"));
ROUTE315.setToNode(CString("r_thumb3RotInterp"));
Scene15.addChild(&ROUTE315);

ROUTE& ROUTE316 =  ROUTE();
ROUTE316.setFromField(CString("fraction_changed"));
ROUTE316.setFromNode(CString("KickTimer"));
ROUTE316.setToField(CString("set_fraction"));
ROUTE316.setToNode(CString("r_index0RotInterp"));
Scene15.addChild(&ROUTE316);

ROUTE& ROUTE317 =  ROUTE();
ROUTE317.setFromField(CString("fraction_changed"));
ROUTE317.setFromNode(CString("KickTimer"));
ROUTE317.setToField(CString("set_fraction"));
ROUTE317.setToNode(CString("r_index1RotInterp"));
Scene15.addChild(&ROUTE317);

ROUTE& ROUTE318 =  ROUTE();
ROUTE318.setFromField(CString("fraction_changed"));
ROUTE318.setFromNode(CString("KickTimer"));
ROUTE318.setToField(CString("set_fraction"));
ROUTE318.setToNode(CString("r_index2RotInterp"));
Scene15.addChild(&ROUTE318);

ROUTE& ROUTE319 =  ROUTE();
ROUTE319.setFromField(CString("fraction_changed"));
ROUTE319.setFromNode(CString("KickTimer"));
ROUTE319.setToField(CString("set_fraction"));
ROUTE319.setToNode(CString("r_index3RotInterp"));
Scene15.addChild(&ROUTE319);

ROUTE& ROUTE320 =  ROUTE();
ROUTE320.setFromField(CString("fraction_changed"));
ROUTE320.setFromNode(CString("KickTimer"));
ROUTE320.setToField(CString("set_fraction"));
ROUTE320.setToNode(CString("r_middle0RotInterp"));
Scene15.addChild(&ROUTE320);

ROUTE& ROUTE321 =  ROUTE();
ROUTE321.setFromField(CString("fraction_changed"));
ROUTE321.setFromNode(CString("KickTimer"));
ROUTE321.setToField(CString("set_fraction"));
ROUTE321.setToNode(CString("r_middle1RotInterp"));
Scene15.addChild(&ROUTE321);

ROUTE& ROUTE322 =  ROUTE();
ROUTE322.setFromField(CString("fraction_changed"));
ROUTE322.setFromNode(CString("KickTimer"));
ROUTE322.setToField(CString("set_fraction"));
ROUTE322.setToNode(CString("r_middle2RotInterp"));
Scene15.addChild(&ROUTE322);

ROUTE& ROUTE323 =  ROUTE();
ROUTE323.setFromField(CString("fraction_changed"));
ROUTE323.setFromNode(CString("KickTimer"));
ROUTE323.setToField(CString("set_fraction"));
ROUTE323.setToNode(CString("r_middle3RotInterp"));
Scene15.addChild(&ROUTE323);

ROUTE& ROUTE324 =  ROUTE();
ROUTE324.setFromField(CString("fraction_changed"));
ROUTE324.setFromNode(CString("KickTimer"));
ROUTE324.setToField(CString("set_fraction"));
ROUTE324.setToNode(CString("r_ring0RotInterp"));
Scene15.addChild(&ROUTE324);

ROUTE& ROUTE325 =  ROUTE();
ROUTE325.setFromField(CString("fraction_changed"));
ROUTE325.setFromNode(CString("KickTimer"));
ROUTE325.setToField(CString("set_fraction"));
ROUTE325.setToNode(CString("r_ring1RotInterp"));
Scene15.addChild(&ROUTE325);

ROUTE& ROUTE326 =  ROUTE();
ROUTE326.setFromField(CString("fraction_changed"));
ROUTE326.setFromNode(CString("KickTimer"));
ROUTE326.setToField(CString("set_fraction"));
ROUTE326.setToNode(CString("r_ring2RotInterp"));
Scene15.addChild(&ROUTE326);

ROUTE& ROUTE327 =  ROUTE();
ROUTE327.setFromField(CString("fraction_changed"));
ROUTE327.setFromNode(CString("KickTimer"));
ROUTE327.setToField(CString("set_fraction"));
ROUTE327.setToNode(CString("r_ring3RotInterp"));
Scene15.addChild(&ROUTE327);

ROUTE& ROUTE328 =  ROUTE();
ROUTE328.setFromField(CString("fraction_changed"));
ROUTE328.setFromNode(CString("KickTimer"));
ROUTE328.setToField(CString("set_fraction"));
ROUTE328.setToNode(CString("r_pinky0RotInterp"));
Scene15.addChild(&ROUTE328);

ROUTE& ROUTE329 =  ROUTE();
ROUTE329.setFromField(CString("fraction_changed"));
ROUTE329.setFromNode(CString("KickTimer"));
ROUTE329.setToField(CString("set_fraction"));
ROUTE329.setToNode(CString("r_pinky1RotInterp"));
Scene15.addChild(&ROUTE329);

ROUTE& ROUTE330 =  ROUTE();
ROUTE330.setFromField(CString("fraction_changed"));
ROUTE330.setFromNode(CString("KickTimer"));
ROUTE330.setToField(CString("set_fraction"));
ROUTE330.setToNode(CString("r_pinky2RotInterp"));
Scene15.addChild(&ROUTE330);

ROUTE& ROUTE331 =  ROUTE();
ROUTE331.setFromField(CString("fraction_changed"));
ROUTE331.setFromNode(CString("KickTimer"));
ROUTE331.setToField(CString("set_fraction"));
ROUTE331.setToNode(CString("r_pinky3RotInterp"));
Scene15.addChild(&ROUTE331);

//Routes from Interpolators to Joe_ model Joints
ROUTE& ROUTE332 =  ROUTE();
ROUTE332.setFromField(CString("value_changed"));
ROUTE332.setFromNode(CString("HumanoidRootRotInterp"));
ROUTE332.setToField(CString("set_rotation"));
ROUTE332.setToNode(CString("Joe_HumanoidRoot"));
Scene15.addChild(&ROUTE332);

ROUTE& ROUTE333 =  ROUTE();
ROUTE333.setFromField(CString("value_changed"));
ROUTE333.setFromNode(CString("HumanoidRootTransInterp"));
ROUTE333.setToField(CString("set_translation"));
ROUTE333.setToNode(CString("Joe_HumanoidRoot"));
Scene15.addChild(&ROUTE333);

ROUTE& ROUTE334 =  ROUTE();
ROUTE334.setFromField(CString("value_changed"));
ROUTE334.setFromNode(CString("sacroiliacRotInterp"));
ROUTE334.setToField(CString("set_rotation"));
ROUTE334.setToNode(CString("Joe_sacroiliac"));
Scene15.addChild(&ROUTE334);

ROUTE& ROUTE335 =  ROUTE();
ROUTE335.setFromField(CString("value_changed"));
ROUTE335.setFromNode(CString("l_hipRotInterp"));
ROUTE335.setToField(CString("set_rotation"));
ROUTE335.setToNode(CString("Joe_l_hip"));
Scene15.addChild(&ROUTE335);

ROUTE& ROUTE336 =  ROUTE();
ROUTE336.setFromField(CString("value_changed"));
ROUTE336.setFromNode(CString("l_kneeRotInterp"));
ROUTE336.setToField(CString("set_rotation"));
ROUTE336.setToNode(CString("Joe_l_knee"));
Scene15.addChild(&ROUTE336);

ROUTE& ROUTE337 =  ROUTE();
ROUTE337.setFromField(CString("value_changed"));
ROUTE337.setFromNode(CString("l_ankleRotInterp"));
ROUTE337.setToField(CString("set_rotation"));
ROUTE337.setToNode(CString("Joe_l_ankle"));
Scene15.addChild(&ROUTE337);

ROUTE& ROUTE338 =  ROUTE();
ROUTE338.setFromField(CString("value_changed"));
ROUTE338.setFromNode(CString("l_subtalarRotInterp"));
ROUTE338.setToField(CString("set_rotation"));
ROUTE338.setToNode(CString("Joe_l_subtalar"));
Scene15.addChild(&ROUTE338);

ROUTE& ROUTE339 =  ROUTE();
ROUTE339.setFromField(CString("value_changed"));
ROUTE339.setFromNode(CString("l_midtarsalRotInterp"));
ROUTE339.setToField(CString("set_rotation"));
ROUTE339.setToNode(CString("Joe_l_midtarsal"));
Scene15.addChild(&ROUTE339);

ROUTE& ROUTE340 =  ROUTE();
ROUTE340.setFromField(CString("value_changed"));
ROUTE340.setFromNode(CString("l_metatarsalRotInterp"));
ROUTE340.setToField(CString("set_rotation"));
ROUTE340.setToNode(CString("Joe_l_metatarsal"));
Scene15.addChild(&ROUTE340);

ROUTE& ROUTE341 =  ROUTE();
ROUTE341.setFromField(CString("value_changed"));
ROUTE341.setFromNode(CString("r_hipRotInterp"));
ROUTE341.setToField(CString("set_rotation"));
ROUTE341.setToNode(CString("Joe_r_hip"));
Scene15.addChild(&ROUTE341);

ROUTE& ROUTE342 =  ROUTE();
ROUTE342.setFromField(CString("value_changed"));
ROUTE342.setFromNode(CString("r_kneeRotInterp"));
ROUTE342.setToField(CString("set_rotation"));
ROUTE342.setToNode(CString("Joe_r_knee"));
Scene15.addChild(&ROUTE342);

ROUTE& ROUTE343 =  ROUTE();
ROUTE343.setFromField(CString("value_changed"));
ROUTE343.setFromNode(CString("r_ankleRotInterp"));
ROUTE343.setToField(CString("set_rotation"));
ROUTE343.setToNode(CString("Joe_r_ankle"));
Scene15.addChild(&ROUTE343);

ROUTE& ROUTE344 =  ROUTE();
ROUTE344.setFromField(CString("value_changed"));
ROUTE344.setFromNode(CString("r_subtalarRotInterp"));
ROUTE344.setToField(CString("set_rotation"));
ROUTE344.setToNode(CString("Joe_r_subtalar"));
Scene15.addChild(&ROUTE344);

ROUTE& ROUTE345 =  ROUTE();
ROUTE345.setFromField(CString("value_changed"));
ROUTE345.setFromNode(CString("r_midtarsalRotInterp"));
ROUTE345.setToField(CString("set_rotation"));
ROUTE345.setToNode(CString("Joe_r_midtarsal"));
Scene15.addChild(&ROUTE345);

ROUTE& ROUTE346 =  ROUTE();
ROUTE346.setFromField(CString("value_changed"));
ROUTE346.setFromNode(CString("r_metatarsalRotInterp"));
ROUTE346.setToField(CString("set_rotation"));
ROUTE346.setToNode(CString("Joe_r_metatarsal"));
Scene15.addChild(&ROUTE346);

ROUTE& ROUTE347 =  ROUTE();
ROUTE347.setFromField(CString("value_changed"));
ROUTE347.setFromNode(CString("vl5RotInterp"));
ROUTE347.setToField(CString("set_rotation"));
ROUTE347.setToNode(CString("Joe_vl5"));
Scene15.addChild(&ROUTE347);

ROUTE& ROUTE348 =  ROUTE();
ROUTE348.setFromField(CString("value_changed"));
ROUTE348.setFromNode(CString("vl4RotInterp"));
ROUTE348.setToField(CString("set_rotation"));
ROUTE348.setToNode(CString("Joe_vl4"));
Scene15.addChild(&ROUTE348);

ROUTE& ROUTE349 =  ROUTE();
ROUTE349.setFromField(CString("value_changed"));
ROUTE349.setFromNode(CString("vl3RotInterp"));
ROUTE349.setToField(CString("set_rotation"));
ROUTE349.setToNode(CString("Joe_vl3"));
Scene15.addChild(&ROUTE349);

ROUTE& ROUTE350 =  ROUTE();
ROUTE350.setFromField(CString("value_changed"));
ROUTE350.setFromNode(CString("vl2RotInterp"));
ROUTE350.setToField(CString("set_rotation"));
ROUTE350.setToNode(CString("Joe_vl2"));
Scene15.addChild(&ROUTE350);

ROUTE& ROUTE351 =  ROUTE();
ROUTE351.setFromField(CString("value_changed"));
ROUTE351.setFromNode(CString("vl1RotInterp"));
ROUTE351.setToField(CString("set_rotation"));
ROUTE351.setToNode(CString("Joe_vl1"));
Scene15.addChild(&ROUTE351);

ROUTE& ROUTE352 =  ROUTE();
ROUTE352.setFromField(CString("value_changed"));
ROUTE352.setFromNode(CString("vt12RotInterp"));
ROUTE352.setToField(CString("set_rotation"));
ROUTE352.setToNode(CString("Joe_vt12"));
Scene15.addChild(&ROUTE352);

ROUTE& ROUTE353 =  ROUTE();
ROUTE353.setFromField(CString("value_changed"));
ROUTE353.setFromNode(CString("vt11RotInterp"));
ROUTE353.setToField(CString("set_rotation"));
ROUTE353.setToNode(CString("Joe_vt11"));
Scene15.addChild(&ROUTE353);

ROUTE& ROUTE354 =  ROUTE();
ROUTE354.setFromField(CString("value_changed"));
ROUTE354.setFromNode(CString("vt10RotInterp"));
ROUTE354.setToField(CString("set_rotation"));
ROUTE354.setToNode(CString("Joe_vt10"));
Scene15.addChild(&ROUTE354);

ROUTE& ROUTE355 =  ROUTE();
ROUTE355.setFromField(CString("value_changed"));
ROUTE355.setFromNode(CString("vt9RotInterp"));
ROUTE355.setToField(CString("set_rotation"));
ROUTE355.setToNode(CString("Joe_vt9"));
Scene15.addChild(&ROUTE355);

ROUTE& ROUTE356 =  ROUTE();
ROUTE356.setFromField(CString("value_changed"));
ROUTE356.setFromNode(CString("vt8RotInterp"));
ROUTE356.setToField(CString("set_rotation"));
ROUTE356.setToNode(CString("Joe_vt8"));
Scene15.addChild(&ROUTE356);

ROUTE& ROUTE357 =  ROUTE();
ROUTE357.setFromField(CString("value_changed"));
ROUTE357.setFromNode(CString("vt7RotInterp"));
ROUTE357.setToField(CString("set_rotation"));
ROUTE357.setToNode(CString("Joe_vt7"));
Scene15.addChild(&ROUTE357);

ROUTE& ROUTE358 =  ROUTE();
ROUTE358.setFromField(CString("value_changed"));
ROUTE358.setFromNode(CString("vt6RotInterp"));
ROUTE358.setToField(CString("set_rotation"));
ROUTE358.setToNode(CString("Joe_vt6"));
Scene15.addChild(&ROUTE358);

ROUTE& ROUTE359 =  ROUTE();
ROUTE359.setFromField(CString("value_changed"));
ROUTE359.setFromNode(CString("vt5RotInterp"));
ROUTE359.setToField(CString("set_rotation"));
ROUTE359.setToNode(CString("Joe_vt5"));
Scene15.addChild(&ROUTE359);

ROUTE& ROUTE360 =  ROUTE();
ROUTE360.setFromField(CString("value_changed"));
ROUTE360.setFromNode(CString("vt4RotInterp"));
ROUTE360.setToField(CString("set_rotation"));
ROUTE360.setToNode(CString("Joe_vt4"));
Scene15.addChild(&ROUTE360);

ROUTE& ROUTE361 =  ROUTE();
ROUTE361.setFromField(CString("value_changed"));
ROUTE361.setFromNode(CString("vt3RotInterp"));
ROUTE361.setToField(CString("set_rotation"));
ROUTE361.setToNode(CString("Joe_vt3"));
Scene15.addChild(&ROUTE361);

ROUTE& ROUTE362 =  ROUTE();
ROUTE362.setFromField(CString("value_changed"));
ROUTE362.setFromNode(CString("vt2RotInterp"));
ROUTE362.setToField(CString("set_rotation"));
ROUTE362.setToNode(CString("Joe_vt2"));
Scene15.addChild(&ROUTE362);

ROUTE& ROUTE363 =  ROUTE();
ROUTE363.setFromField(CString("value_changed"));
ROUTE363.setFromNode(CString("vt1RotInterp"));
ROUTE363.setToField(CString("set_rotation"));
ROUTE363.setToNode(CString("Joe_vt1"));
Scene15.addChild(&ROUTE363);

ROUTE& ROUTE364 =  ROUTE();
ROUTE364.setFromField(CString("value_changed"));
ROUTE364.setFromNode(CString("vc7RotInterp"));
ROUTE364.setToField(CString("set_rotation"));
ROUTE364.setToNode(CString("Joe_vc7"));
Scene15.addChild(&ROUTE364);

ROUTE& ROUTE365 =  ROUTE();
ROUTE365.setFromField(CString("value_changed"));
ROUTE365.setFromNode(CString("vc6RotInterp"));
ROUTE365.setToField(CString("set_rotation"));
ROUTE365.setToNode(CString("Joe_vc6"));
Scene15.addChild(&ROUTE365);

ROUTE& ROUTE366 =  ROUTE();
ROUTE366.setFromField(CString("value_changed"));
ROUTE366.setFromNode(CString("vc5RotInterp"));
ROUTE366.setToField(CString("set_rotation"));
ROUTE366.setToNode(CString("Joe_vc5"));
Scene15.addChild(&ROUTE366);

ROUTE& ROUTE367 =  ROUTE();
ROUTE367.setFromField(CString("value_changed"));
ROUTE367.setFromNode(CString("vc4RotInterp"));
ROUTE367.setToField(CString("set_rotation"));
ROUTE367.setToNode(CString("Joe_vc4"));
Scene15.addChild(&ROUTE367);

ROUTE& ROUTE368 =  ROUTE();
ROUTE368.setFromField(CString("value_changed"));
ROUTE368.setFromNode(CString("vc3RotInterp"));
ROUTE368.setToField(CString("set_rotation"));
ROUTE368.setToNode(CString("Joe_vc3"));
Scene15.addChild(&ROUTE368);

ROUTE& ROUTE369 =  ROUTE();
ROUTE369.setFromField(CString("value_changed"));
ROUTE369.setFromNode(CString("vc2RotInterp"));
ROUTE369.setToField(CString("set_rotation"));
ROUTE369.setToNode(CString("Joe_vc2"));
Scene15.addChild(&ROUTE369);

ROUTE& ROUTE370 =  ROUTE();
ROUTE370.setFromField(CString("value_changed"));
ROUTE370.setFromNode(CString("vc1RotInterp"));
ROUTE370.setToField(CString("set_rotation"));
ROUTE370.setToNode(CString("Joe_vc1"));
Scene15.addChild(&ROUTE370);

ROUTE& ROUTE371 =  ROUTE();
ROUTE371.setFromField(CString("value_changed"));
ROUTE371.setFromNode(CString("skullbaseRotInterp"));
ROUTE371.setToField(CString("set_rotation"));
ROUTE371.setToNode(CString("Joe_skullbase"));
Scene15.addChild(&ROUTE371);

ROUTE& ROUTE372 =  ROUTE();
ROUTE372.setFromField(CString("value_changed"));
ROUTE372.setFromNode(CString("l_eyelid_jointRotInterp"));
ROUTE372.setToField(CString("set_rotation"));
ROUTE372.setToNode(CString("Joe_l_eyelid_joint"));
Scene15.addChild(&ROUTE372);

ROUTE& ROUTE373 =  ROUTE();
ROUTE373.setFromField(CString("value_changed"));
ROUTE373.setFromNode(CString("l_eyeball_jointRotInterp"));
ROUTE373.setToField(CString("set_rotation"));
ROUTE373.setToNode(CString("Joe_l_eyeball_joint"));
Scene15.addChild(&ROUTE373);

ROUTE& ROUTE374 =  ROUTE();
ROUTE374.setFromField(CString("value_changed"));
ROUTE374.setFromNode(CString("l_eyebrow_jointRotInterp"));
ROUTE374.setToField(CString("set_rotation"));
ROUTE374.setToNode(CString("Joe_l_eyebrow_joint"));
Scene15.addChild(&ROUTE374);

ROUTE& ROUTE375 =  ROUTE();
ROUTE375.setFromField(CString("value_changed"));
ROUTE375.setFromNode(CString("r_eyelid_jointRotInterp"));
ROUTE375.setToField(CString("set_rotation"));
ROUTE375.setToNode(CString("Joe_r_eyelid_joint"));
Scene15.addChild(&ROUTE375);

ROUTE& ROUTE376 =  ROUTE();
ROUTE376.setFromField(CString("value_changed"));
ROUTE376.setFromNode(CString("r_eyeball_jointRotInterp"));
ROUTE376.setToField(CString("set_rotation"));
ROUTE376.setToNode(CString("Joe_r_eyeball_joint"));
Scene15.addChild(&ROUTE376);

ROUTE& ROUTE377 =  ROUTE();
ROUTE377.setFromField(CString("value_changed"));
ROUTE377.setFromNode(CString("r_eyebrow_jointRotInterp"));
ROUTE377.setToField(CString("set_rotation"));
ROUTE377.setToNode(CString("Joe_r_eyebrow_joint"));
Scene15.addChild(&ROUTE377);

ROUTE& ROUTE378 =  ROUTE();
ROUTE378.setFromField(CString("value_changed"));
ROUTE378.setFromNode(CString("temporomandibularRotInterp"));
ROUTE378.setToField(CString("set_rotation"));
ROUTE378.setToNode(CString("Joe_temporomandibular"));
Scene15.addChild(&ROUTE378);

ROUTE& ROUTE379 =  ROUTE();
ROUTE379.setFromField(CString("value_changed"));
ROUTE379.setFromNode(CString("l_sternoclavicularRotInterp"));
ROUTE379.setToField(CString("set_rotation"));
ROUTE379.setToNode(CString("Joe_l_sternoclavicular"));
Scene15.addChild(&ROUTE379);

ROUTE& ROUTE380 =  ROUTE();
ROUTE380.setFromField(CString("value_changed"));
ROUTE380.setFromNode(CString("l_acromioclavicularRotInterp"));
ROUTE380.setToField(CString("set_rotation"));
ROUTE380.setToNode(CString("Joe_l_acromioclavicular"));
Scene15.addChild(&ROUTE380);

ROUTE& ROUTE381 =  ROUTE();
ROUTE381.setFromField(CString("value_changed"));
ROUTE381.setFromNode(CString("l_shoulderRotInterp"));
ROUTE381.setToField(CString("set_rotation"));
ROUTE381.setToNode(CString("Joe_l_shoulder"));
Scene15.addChild(&ROUTE381);

ROUTE& ROUTE382 =  ROUTE();
ROUTE382.setFromField(CString("value_changed"));
ROUTE382.setFromNode(CString("l_elbowRotInterp"));
ROUTE382.setToField(CString("set_rotation"));
ROUTE382.setToNode(CString("Joe_l_elbow"));
Scene15.addChild(&ROUTE382);

ROUTE& ROUTE383 =  ROUTE();
ROUTE383.setFromField(CString("value_changed"));
ROUTE383.setFromNode(CString("l_wristRotInterp"));
ROUTE383.setToField(CString("set_rotation"));
ROUTE383.setToNode(CString("Joe_l_wrist"));
Scene15.addChild(&ROUTE383);

ROUTE& ROUTE384 =  ROUTE();
ROUTE384.setFromField(CString("value_changed"));
ROUTE384.setFromNode(CString("l_thumb1RotInterp"));
ROUTE384.setToField(CString("set_rotation"));
ROUTE384.setToNode(CString("Joe_l_thumb1"));
Scene15.addChild(&ROUTE384);

ROUTE& ROUTE385 =  ROUTE();
ROUTE385.setFromField(CString("value_changed"));
ROUTE385.setFromNode(CString("l_thumb2RotInterp"));
ROUTE385.setToField(CString("set_rotation"));
ROUTE385.setToNode(CString("Joe_l_thumb2"));
Scene15.addChild(&ROUTE385);

ROUTE& ROUTE386 =  ROUTE();
ROUTE386.setFromField(CString("value_changed"));
ROUTE386.setFromNode(CString("l_thumb3RotInterp"));
ROUTE386.setToField(CString("set_rotation"));
ROUTE386.setToNode(CString("Joe_l_thumb3"));
Scene15.addChild(&ROUTE386);

ROUTE& ROUTE387 =  ROUTE();
ROUTE387.setFromField(CString("value_changed"));
ROUTE387.setFromNode(CString("l_index0RotInterp"));
ROUTE387.setToField(CString("set_rotation"));
ROUTE387.setToNode(CString("Joe_l_index0"));
Scene15.addChild(&ROUTE387);

ROUTE& ROUTE388 =  ROUTE();
ROUTE388.setFromField(CString("value_changed"));
ROUTE388.setFromNode(CString("l_index1RotInterp"));
ROUTE388.setToField(CString("set_rotation"));
ROUTE388.setToNode(CString("Joe_l_index1"));
Scene15.addChild(&ROUTE388);

ROUTE& ROUTE389 =  ROUTE();
ROUTE389.setFromField(CString("value_changed"));
ROUTE389.setFromNode(CString("l_index2RotInterp"));
ROUTE389.setToField(CString("set_rotation"));
ROUTE389.setToNode(CString("Joe_l_index2"));
Scene15.addChild(&ROUTE389);

ROUTE& ROUTE390 =  ROUTE();
ROUTE390.setFromField(CString("value_changed"));
ROUTE390.setFromNode(CString("l_index3RotInterp"));
ROUTE390.setToField(CString("set_rotation"));
ROUTE390.setToNode(CString("Joe_l_index3"));
Scene15.addChild(&ROUTE390);

ROUTE& ROUTE391 =  ROUTE();
ROUTE391.setFromField(CString("value_changed"));
ROUTE391.setFromNode(CString("l_middle0RotInterp"));
ROUTE391.setToField(CString("set_rotation"));
ROUTE391.setToNode(CString("Joe_l_middle0"));
Scene15.addChild(&ROUTE391);

ROUTE& ROUTE392 =  ROUTE();
ROUTE392.setFromField(CString("value_changed"));
ROUTE392.setFromNode(CString("l_middle1RotInterp"));
ROUTE392.setToField(CString("set_rotation"));
ROUTE392.setToNode(CString("Joe_l_middle1"));
Scene15.addChild(&ROUTE392);

ROUTE& ROUTE393 =  ROUTE();
ROUTE393.setFromField(CString("value_changed"));
ROUTE393.setFromNode(CString("l_middle2RotInterp"));
ROUTE393.setToField(CString("set_rotation"));
ROUTE393.setToNode(CString("Joe_l_middle2"));
Scene15.addChild(&ROUTE393);

ROUTE& ROUTE394 =  ROUTE();
ROUTE394.setFromField(CString("value_changed"));
ROUTE394.setFromNode(CString("l_middle3RotInterp"));
ROUTE394.setToField(CString("set_rotation"));
ROUTE394.setToNode(CString("Joe_l_middle3"));
Scene15.addChild(&ROUTE394);

ROUTE& ROUTE395 =  ROUTE();
ROUTE395.setFromField(CString("value_changed"));
ROUTE395.setFromNode(CString("l_ring0RotInterp"));
ROUTE395.setToField(CString("set_rotation"));
ROUTE395.setToNode(CString("Joe_l_ring0"));
Scene15.addChild(&ROUTE395);

ROUTE& ROUTE396 =  ROUTE();
ROUTE396.setFromField(CString("value_changed"));
ROUTE396.setFromNode(CString("l_ring1RotInterp"));
ROUTE396.setToField(CString("set_rotation"));
ROUTE396.setToNode(CString("Joe_l_ring1"));
Scene15.addChild(&ROUTE396);

ROUTE& ROUTE397 =  ROUTE();
ROUTE397.setFromField(CString("value_changed"));
ROUTE397.setFromNode(CString("l_ring2RotInterp"));
ROUTE397.setToField(CString("set_rotation"));
ROUTE397.setToNode(CString("Joe_l_ring2"));
Scene15.addChild(&ROUTE397);

ROUTE& ROUTE398 =  ROUTE();
ROUTE398.setFromField(CString("value_changed"));
ROUTE398.setFromNode(CString("l_ring3RotInterp"));
ROUTE398.setToField(CString("set_rotation"));
ROUTE398.setToNode(CString("Joe_l_ring3"));
Scene15.addChild(&ROUTE398);

ROUTE& ROUTE399 =  ROUTE();
ROUTE399.setFromField(CString("value_changed"));
ROUTE399.setFromNode(CString("l_pinky0RotInterp"));
ROUTE399.setToField(CString("set_rotation"));
ROUTE399.setToNode(CString("Joe_l_pinky0"));
Scene15.addChild(&ROUTE399);

ROUTE& ROUTE400 =  ROUTE();
ROUTE400.setFromField(CString("value_changed"));
ROUTE400.setFromNode(CString("l_pinky1RotInterp"));
ROUTE400.setToField(CString("set_rotation"));
ROUTE400.setToNode(CString("Joe_l_pinky1"));
Scene15.addChild(&ROUTE400);

ROUTE& ROUTE401 =  ROUTE();
ROUTE401.setFromField(CString("value_changed"));
ROUTE401.setFromNode(CString("l_pinky2RotInterp"));
ROUTE401.setToField(CString("set_rotation"));
ROUTE401.setToNode(CString("Joe_l_pinky2"));
Scene15.addChild(&ROUTE401);

ROUTE& ROUTE402 =  ROUTE();
ROUTE402.setFromField(CString("value_changed"));
ROUTE402.setFromNode(CString("l_pinky3RotInterp"));
ROUTE402.setToField(CString("set_rotation"));
ROUTE402.setToNode(CString("Joe_l_pinky3"));
Scene15.addChild(&ROUTE402);

ROUTE& ROUTE403 =  ROUTE();
ROUTE403.setFromField(CString("value_changed"));
ROUTE403.setFromNode(CString("r_sternoclavicularRotInterp"));
ROUTE403.setToField(CString("set_rotation"));
ROUTE403.setToNode(CString("Joe_r_sternoclavicular"));
Scene15.addChild(&ROUTE403);

ROUTE& ROUTE404 =  ROUTE();
ROUTE404.setFromField(CString("value_changed"));
ROUTE404.setFromNode(CString("r_acromioclavicularRotInterp"));
ROUTE404.setToField(CString("set_rotation"));
ROUTE404.setToNode(CString("Joe_r_acromioclavicular"));
Scene15.addChild(&ROUTE404);

ROUTE& ROUTE405 =  ROUTE();
ROUTE405.setFromField(CString("value_changed"));
ROUTE405.setFromNode(CString("r_shoulderRotInterp"));
ROUTE405.setToField(CString("set_rotation"));
ROUTE405.setToNode(CString("Joe_r_shoulder"));
Scene15.addChild(&ROUTE405);

ROUTE& ROUTE406 =  ROUTE();
ROUTE406.setFromField(CString("value_changed"));
ROUTE406.setFromNode(CString("r_elbowRotInterp"));
ROUTE406.setToField(CString("set_rotation"));
ROUTE406.setToNode(CString("Joe_r_elbow"));
Scene15.addChild(&ROUTE406);

ROUTE& ROUTE407 =  ROUTE();
ROUTE407.setFromField(CString("value_changed"));
ROUTE407.setFromNode(CString("r_wristRotInterp"));
ROUTE407.setToField(CString("set_rotation"));
ROUTE407.setToNode(CString("Joe_r_wrist"));
Scene15.addChild(&ROUTE407);

ROUTE& ROUTE408 =  ROUTE();
ROUTE408.setFromField(CString("value_changed"));
ROUTE408.setFromNode(CString("r_thumb1RotInterp"));
ROUTE408.setToField(CString("set_rotation"));
ROUTE408.setToNode(CString("Joe_r_thumb1"));
Scene15.addChild(&ROUTE408);

ROUTE& ROUTE409 =  ROUTE();
ROUTE409.setFromField(CString("value_changed"));
ROUTE409.setFromNode(CString("r_thumb2RotInterp"));
ROUTE409.setToField(CString("set_rotation"));
ROUTE409.setToNode(CString("Joe_r_thumb2"));
Scene15.addChild(&ROUTE409);

ROUTE& ROUTE410 =  ROUTE();
ROUTE410.setFromField(CString("value_changed"));
ROUTE410.setFromNode(CString("r_thumb3RotInterp"));
ROUTE410.setToField(CString("set_rotation"));
ROUTE410.setToNode(CString("Joe_r_thumb3"));
Scene15.addChild(&ROUTE410);

ROUTE& ROUTE411 =  ROUTE();
ROUTE411.setFromField(CString("value_changed"));
ROUTE411.setFromNode(CString("r_index0RotInterp"));
ROUTE411.setToField(CString("set_rotation"));
ROUTE411.setToNode(CString("Joe_r_index0"));
Scene15.addChild(&ROUTE411);

ROUTE& ROUTE412 =  ROUTE();
ROUTE412.setFromField(CString("value_changed"));
ROUTE412.setFromNode(CString("r_index1RotInterp"));
ROUTE412.setToField(CString("set_rotation"));
ROUTE412.setToNode(CString("Joe_r_index1"));
Scene15.addChild(&ROUTE412);

ROUTE& ROUTE413 =  ROUTE();
ROUTE413.setFromField(CString("value_changed"));
ROUTE413.setFromNode(CString("r_index2RotInterp"));
ROUTE413.setToField(CString("set_rotation"));
ROUTE413.setToNode(CString("Joe_r_index2"));
Scene15.addChild(&ROUTE413);

ROUTE& ROUTE414 =  ROUTE();
ROUTE414.setFromField(CString("value_changed"));
ROUTE414.setFromNode(CString("r_index3RotInterp"));
ROUTE414.setToField(CString("set_rotation"));
ROUTE414.setToNode(CString("Joe_r_index3"));
Scene15.addChild(&ROUTE414);

ROUTE& ROUTE415 =  ROUTE();
ROUTE415.setFromField(CString("value_changed"));
ROUTE415.setFromNode(CString("r_middle0RotInterp"));
ROUTE415.setToField(CString("set_rotation"));
ROUTE415.setToNode(CString("Joe_r_middle0"));
Scene15.addChild(&ROUTE415);

ROUTE& ROUTE416 =  ROUTE();
ROUTE416.setFromField(CString("value_changed"));
ROUTE416.setFromNode(CString("r_middle1RotInterp"));
ROUTE416.setToField(CString("set_rotation"));
ROUTE416.setToNode(CString("Joe_r_middle1"));
Scene15.addChild(&ROUTE416);

ROUTE& ROUTE417 =  ROUTE();
ROUTE417.setFromField(CString("value_changed"));
ROUTE417.setFromNode(CString("r_middle2RotInterp"));
ROUTE417.setToField(CString("set_rotation"));
ROUTE417.setToNode(CString("Joe_r_middle2"));
Scene15.addChild(&ROUTE417);

ROUTE& ROUTE418 =  ROUTE();
ROUTE418.setFromField(CString("value_changed"));
ROUTE418.setFromNode(CString("r_middle3RotInterp"));
ROUTE418.setToField(CString("set_rotation"));
ROUTE418.setToNode(CString("Joe_r_middle3"));
Scene15.addChild(&ROUTE418);

ROUTE& ROUTE419 =  ROUTE();
ROUTE419.setFromField(CString("value_changed"));
ROUTE419.setFromNode(CString("r_ring0RotInterp"));
ROUTE419.setToField(CString("set_rotation"));
ROUTE419.setToNode(CString("Joe_r_ring0"));
Scene15.addChild(&ROUTE419);

ROUTE& ROUTE420 =  ROUTE();
ROUTE420.setFromField(CString("value_changed"));
ROUTE420.setFromNode(CString("r_ring1RotInterp"));
ROUTE420.setToField(CString("set_rotation"));
ROUTE420.setToNode(CString("Joe_r_ring1"));
Scene15.addChild(&ROUTE420);

ROUTE& ROUTE421 =  ROUTE();
ROUTE421.setFromField(CString("value_changed"));
ROUTE421.setFromNode(CString("r_ring2RotInterp"));
ROUTE421.setToField(CString("set_rotation"));
ROUTE421.setToNode(CString("Joe_r_ring2"));
Scene15.addChild(&ROUTE421);

ROUTE& ROUTE422 =  ROUTE();
ROUTE422.setFromField(CString("value_changed"));
ROUTE422.setFromNode(CString("r_ring3RotInterp"));
ROUTE422.setToField(CString("set_rotation"));
ROUTE422.setToNode(CString("Joe_r_ring3"));
Scene15.addChild(&ROUTE422);

ROUTE& ROUTE423 =  ROUTE();
ROUTE423.setFromField(CString("value_changed"));
ROUTE423.setFromNode(CString("r_pinky0RotInterp"));
ROUTE423.setToField(CString("set_rotation"));
ROUTE423.setToNode(CString("Joe_r_pinky0"));
Scene15.addChild(&ROUTE423);

ROUTE& ROUTE424 =  ROUTE();
ROUTE424.setFromField(CString("value_changed"));
ROUTE424.setFromNode(CString("r_pinky1RotInterp"));
ROUTE424.setToField(CString("set_rotation"));
ROUTE424.setToNode(CString("Joe_r_pinky1"));
Scene15.addChild(&ROUTE424);

ROUTE& ROUTE425 =  ROUTE();
ROUTE425.setFromField(CString("value_changed"));
ROUTE425.setFromNode(CString("r_pinky2RotInterp"));
ROUTE425.setToField(CString("set_rotation"));
ROUTE425.setToNode(CString("Joe_r_pinky2"));
Scene15.addChild(&ROUTE425);

ROUTE& ROUTE426 =  ROUTE();
ROUTE426.setFromField(CString("value_changed"));
ROUTE426.setFromNode(CString("r_pinky3RotInterp"));
ROUTE426.setToField(CString("set_rotation"));
ROUTE426.setToNode(CString("Joe_r_pinky3"));
Scene15.addChild(&ROUTE426);

Group& Group427 =  Group();
Group427.setDEF(CString("DisplacersAnimationGroup"));
//TimeSensor DEF='skull_tipTestTimer' cycleInterval='5.73' loop='true' enabled='true'></TimeSensor
ScalarInterpolator& ScalarInterpolator428 =  ScalarInterpolator();
ScalarInterpolator428.setDEF(CString("skull_tipTest"));
ScalarInterpolator428.setKey(new float[]{0,0.1,0.2,0.35,0.6,0.7,0.85,0.88,0.94,0.97,1}, 11);
ScalarInterpolator428.setKeyValue(new float[]{0,0,0,0,0.2,0.4,1,0,1,0.4,0}, 11);
Group427.addChild(&ScalarInterpolator428);

ROUTE& ROUTE429 =  ROUTE();
ROUTE429.setFromField(CString("fraction_changed"));
ROUTE429.setFromNode(CString("KickTimer"));
ROUTE429.setToField(CString("set_fraction"));
ROUTE429.setToNode(CString("skull_tipTest"));
Group427.addChild(&ROUTE429);

ROUTE& ROUTE430 =  ROUTE();
ROUTE430.setFromField(CString("value_changed"));
ROUTE430.setFromNode(CString("skull_tipTest"));
ROUTE430.setToField(CString("weight"));
ROUTE430.setToNode(CString("Joe_skull_tipTest"));
Group427.addChild(&ROUTE430);

Scene15.addChild(&Group427);

Group& Group431 =  Group();
Group431.setDEF(CString("skintexturetransform_animation"));
ScalarInterpolator& ScalarInterpolator432 =  ScalarInterpolator();
ScalarInterpolator432.setDEF(CString("skinTexTransTest"));
ScalarInterpolator432.setKey(new float[]{0,0.2,0.4,0.5,0.6,0.7,0.8,1}, 8);
ScalarInterpolator432.setKeyValue(new float[]{0,0,0,0,0,1,2,0}, 8);
Group431.addChild(&ScalarInterpolator432);

ROUTE& ROUTE433 =  ROUTE();
ROUTE433.setFromField(CString("fraction_changed"));
ROUTE433.setFromNode(CString("KickTimer"));
ROUTE433.setToField(CString("set_fraction"));
ROUTE433.setToNode(CString("skinTexTransTest"));
Group431.addChild(&ROUTE433);

ROUTE& ROUTE434 =  ROUTE();
ROUTE434.setFromField(CString("value_changed"));
ROUTE434.setFromNode(CString("skinTexTransTest"));
ROUTE434.setToField(CString("rotation"));
ROUTE434.setToNode(CString("kicktextrans"));
Group431.addChild(&ROUTE434);

Scene15.addChild(&Group431);

Group& Group435 =  Group();
Transform& Transform436 =  Transform();
Transform436.setDEF(CString("SBall"));
Transform436.setRotation(new float[]{0.7,0,0.7,0.1});
Transform436.setScale(new float[]{0.23,0.23,0.23});
Transform436.setTranslation(new float[]{-0.916,0.37,-0.92});
Shape& Shape437 =  Shape();
Shape437.setDEF(CString("ball_Shape"));
Appearance& Appearance438 =  Appearance();
Appearance438.setDEF(CString("ball_Appearance"));
Material& Material439 =  Material();
Material439.setDEF(CString("ball_Material"));
Material439.setDiffuseColor(new float[]{0.3,0.3,1});
Material439.setEmissiveColor(new float[]{0.3,0.3,0.33});
Appearance438.addChild(&Material439);

ImageTexture& ImageTexture440 =  ImageTexture();
ImageTexture440.setUSE(CString("JoeSkinImageTexture"));
Appearance438.addChild(&ImageTexture440);

Shape437.addChild(&Appearance438);

IndexedFaceSet& IndexedFaceSet441 =  IndexedFaceSet();
IndexedFaceSet441.setDEF(CString("ball_IndexedFaceSet"));
IndexedFaceSet441.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,1,-1,1,13,14,-1,1,14,2,-1,2,14,15,-1,2,15,3,-1,3,15,16,-1,3,16,4,-1,4,16,17,-1,4,17,5,-1,5,17,18,-1,5,18,6,-1,6,18,19,-1,6,19,7,-1,7,19,20,-1,7,20,8,-1,8,20,21,-1,8,21,9,-1,9,21,22,-1,9,22,10,-1,10,22,23,-1,10,23,11,-1,11,23,24,-1,11,24,12,-1,12,24,13,-1,12,13,1,-1,13,25,26,-1,13,26,14,-1,14,26,27,-1,14,27,15,-1,15,27,28,-1,15,28,16,-1,16,28,29,-1,16,29,17,-1,17,29,30,-1,17,30,18,-1,18,30,31,-1,18,31,19,-1,19,31,32,-1,19,32,20,-1,20,32,33,-1,20,33,21,-1,21,33,34,-1,21,34,22,-1,22,34,35,-1,22,35,23,-1,23,35,36,-1,23,36,24,-1,24,36,25,-1,24,25,13,-1,25,37,38,-1,25,38,26,-1,26,38,39,-1,26,39,27,-1,27,39,40,-1,27,40,28,-1,28,40,41,-1,28,41,29,-1,29,41,42,-1,29,42,30,-1,30,42,43,-1,30,43,31,-1,31,43,44,-1,31,44,32,-1,32,44,45,-1,32,45,33,-1,33,45,46,-1,33,46,34,-1,34,46,47,-1,34,47,35,-1,35,47,48,-1,35,48,36,-1,36,48,37,-1,36,37,25,-1,37,49,50,-1,37,50,38,-1,38,50,51,-1,38,51,39,-1,39,51,52,-1,39,52,40,-1,40,52,53,-1,40,53,41,-1,41,53,54,-1,41,54,42,-1,42,54,55,-1,42,55,43,-1,43,55,56,-1,43,56,44,-1,44,56,57,-1,44,57,45,-1,45,57,58,-1,45,58,46,-1,46,58,59,-1,46,59,47,-1,47,59,60,-1,47,60,48,-1,48,60,49,-1,48,49,37,-1,61,50,49,-1,61,51,50,-1,61,52,51,-1,61,53,52,-1,61,54,53,-1,61,55,54,-1,61,56,55,-1,61,57,56,-1,61,58,57,-1,61,59,58,-1,61,60,59,-1,61,49,60,-1}, 480);
Coordinate& Coordinate442 =  Coordinate();
Coordinate442.setDEF(CString("Ball_Coordinates"));
Coordinate442.setPoint(new float[]{0,0.4675,0,0,0.4049,-0.2338,-0.1169,0.4049,-0.2024,-0.2024,0.4049,-0.1169,-0.2338,0.4049,0,-0.2024,0.4049,0.1169,-0.1169,0.4049,0.2024,0,0.4049,0.2338,0.1169,0.4049,0.2024,0.2024,0.4049,0.1169,0.2338,0.4049,0,0.2024,0.4049,-0.1169,0.1169,0.4049,-0.2024,0,0.2338,-0.4049,-0.2024,0.2338,-0.3506,-0.3506,0.2338,-0.2024,-0.4049,0.2338,0,-0.3506,0.2338,0.2024,-0.2024,0.2338,0.3506,0,0.2338,0.4049,0.2024,0.2338,0.3506,0.3506,0.2338,0.2024,0.4049,0.2338,0,0.3506,0.2338,-0.2024,0.2024,0.2338,-0.3506,0,0,-0.4675,-0.2338,0,-0.4049,-0.4049,0,-0.2338,-0.4675,0,0,-0.4049,0,0.2338,-0.2338,0,0.4049,0,0,0.4675,0.2338,0,0.4049,0.4049,0,0.2338,0.4675,0,0,0.4049,0,-0.2338,0.2338,0,-0.4049,0,-0.2338,-0.4049,-0.2024,-0.2338,-0.3506,-0.3506,-0.2338,-0.2024,-0.4049,-0.2338,0,-0.3506,-0.2338,0.2024,-0.2024,-0.2338,0.3506,0,-0.2338,0.4049,0.2024,-0.2338,0.3506,0.3506,-0.2338,0.2024,0.4049,-0.2338,0,0.3506,-0.2338,-0.2024,0.2024,-0.2338,-0.3506,0,-0.4049,-0.2338,-0.1169,-0.4049,-0.2024,-0.2024,-0.4049,-0.1169,-0.2338,-0.4049,0,-0.2024,-0.4049,0.1169,-0.1169,-0.4049,0.2024,0,-0.4049,0.2338,0.1169,-0.4049,0.2024,0.2024,-0.4049,0.1169,0.2338,-0.4049,0,0.2024,-0.4049,-0.1169,0.1169,-0.4049,-0.2024,0,-0.4675,0}, 186);
IndexedFaceSet441.setCoord(&Coordinate442);

Shape437.setGeometry(&IndexedFaceSet441);

Transform436.addChild(&Shape437);

Viewpoint& Viewpoint443 =  Viewpoint();
Viewpoint443.setDEF(CString("ballView_1"));
Viewpoint443.setDescription(CString("Ball View"));
Transform436.addChild(&Viewpoint443);

Group435.addChild(&Transform436);

//Ball Animation interpolators
PositionInterpolator& PositionInterpolator444 =  PositionInterpolator();
PositionInterpolator444.setDEF(CString("ballTransInterp"));
PositionInterpolator444.setKey(new float[]{0,0.4,0.409,1}, 4);
PositionInterpolator444.setKeyValue(new float[]{-1,0.4,-1,0,0.07,0,0.05,0.06,0.05,2,4,10}, 12);
Group435.addChild(&PositionInterpolator444);

OrientationInterpolator& OrientationInterpolator445 =  OrientationInterpolator();
OrientationInterpolator445.setDEF(CString("ballRotInterp"));
OrientationInterpolator445.setKey(new float[]{0,0.4,0.41,0.71,1}, 5);
OrientationInterpolator445.setKeyValue(new float[]{1,0,1,0.25,-1,0,-1,1.35,-1,1,-1,3.35,-1,0.2,-1,3,-1,0.2,-1,3}, 20);
Group435.addChild(&OrientationInterpolator445);

//Ball Animation Routes
ROUTE& ROUTE446 =  ROUTE();
ROUTE446.setFromField(CString("fraction_changed"));
ROUTE446.setFromNode(CString("KickTimer"));
ROUTE446.setToField(CString("set_fraction"));
ROUTE446.setToNode(CString("ballTransInterp"));
Group435.addChild(&ROUTE446);

ROUTE& ROUTE447 =  ROUTE();
ROUTE447.setFromField(CString("value_changed"));
ROUTE447.setFromNode(CString("ballTransInterp"));
ROUTE447.setToField(CString("set_translation"));
ROUTE447.setToNode(CString("SBall"));
Group435.addChild(&ROUTE447);

ROUTE& ROUTE448 =  ROUTE();
ROUTE448.setFromField(CString("fraction_changed"));
ROUTE448.setFromNode(CString("KickTimer"));
ROUTE448.setToField(CString("set_fraction"));
ROUTE448.setToNode(CString("ballRotInterp"));
Group435.addChild(&ROUTE448);

ROUTE& ROUTE449 =  ROUTE();
ROUTE449.setFromField(CString("value_changed"));
ROUTE449.setFromNode(CString("ballRotInterp"));
ROUTE449.setToField(CString("set_rotation"));
ROUTE449.setToNode(CString("SBall"));
Group435.addChild(&ROUTE449);

Scene15.addChild(&Group435);

Group& Group450 =  Group();
Transform& Transform451 =  Transform();
Transform451.setScale(new float[]{0.2,0.2,0.2});
Shape& Shape452 =  Shape();
Shape452.setUSE(CString("AxisLinesShape"));
Transform451.addChild(&Shape452);

Group450.addChild(&Transform451);

Transform& Transform453 =  Transform();
Transform453.setDEF(CString("Circle0"));
Transform453.setScale(new float[]{1.175,1,1.175});
Shape& Shape454 =  Shape();
Shape454.setDEF(CString("circle_Shape"));
Appearance& Appearance455 =  Appearance();
Appearance455.setDEF(CString("circle0_Appearance"));
Material& Material456 =  Material();
Material456.setDEF(CString("circle0_Material"));
Material456.setAmbientIntensity(0.9);
Material456.setDiffuseColor(new float[]{0.9,0,0.7});
Material456.setEmissiveColor(new float[]{0.425,0.486,1});
Appearance455.addChild(&Material456);

Shape454.addChild(&Appearance455);

IndexedLineSet& IndexedLineSet457 =  IndexedLineSet();
IndexedLineSet457.setDEF(CString("Orbit1"));
IndexedLineSet457.setCoordIndex(new int32_t[]{0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,-1}, 62);
Coordinate& Coordinate458 =  Coordinate();
Coordinate458.setDEF(CString("circle_Coordinates"));
Coordinate458.setPoint(new float[]{1,0,0,0.995,0,-0.105,0.979,0,-0.208,0.951,0,-0.309,0.914,0,-0.407,0.866,0,-0.5,0.809,0,-0.588,0.743,0,-0.669,0.669,0,-0.743,0.588,0,-0.809,0.5,0,-0.866,0.407,0,-0.914,0.309,0,-0.951,0.208,0,-0.978,0.105,0,-0.995,0,0,-1,-0.105,0,-0.994522,-0.208,0,-0.978,-0.309,0,-0.951,-0.407,0,-0.914,-0.5,0,-0.866,-0.588,0,-0.809,-0.669,0,-0.743,-0.743,0,-0.669,-0.809,0,-0.588,-0.866,0,-0.5,-0.914,0,-0.407,-0.951,0,-0.309,-0.978,0,-0.208,-0.995,0,-0.105,-1,0,0,-0.995,0,0.105,-0.978,0,0.208,-0.951,0,0.309,-0.914,0,0.407,-0.866,0,0.5,-0.809,0,0.588,-0.743,0,0.669,-0.669,0,0.743,-0.588,0,0.809,-0.5,0,0.866,-0.407,0,0.914,-0.309,0,0.951,-0.208,0,0.978,-0.105,0,0.995,0,0,1,0.105,0,0.995,0.208,0,0.978,0.309,0,0.951,0.407,0,0.914,0.5,0,0.866,0.588,0,0.809,0.669,0,0.743,0.743,0,0.669,0.809,0,0.588,0.866,0,0.5,0.914,0,0.407,0.951,0,0.309,0.978,0,0.208,0.995,0,0.104,1,0,0}, 183);
IndexedLineSet457.setCoord(&Coordinate458);

Shape454.setGeometry(&IndexedLineSet457);

Transform453.addChild(&Shape454);

Group450.addChild(&Transform453);

Transform& Transform459 =  Transform();
Transform459.setDEF(CString("Circle1"));
Transform459.setScale(new float[]{0.5,1,0.5});
Shape& Shape460 =  Shape();
Shape460.setDEF(CString("circle1_Shape"));
Appearance& Appearance461 =  Appearance();
Appearance461.setDEF(CString("circle1_Appearance"));
Material& Material462 =  Material();
Material462.setDEF(CString("circle1_Material"));
Material462.setDiffuseColor(new float[]{0.9,0,0.7});
Material462.setEmissiveColor(new float[]{0.424956,0.483976,1});
Appearance461.addChild(&Material462);

Shape460.addChild(&Appearance461);

IndexedLineSet& IndexedLineSet463 =  IndexedLineSet();
IndexedLineSet463.setUSE(CString("Orbit1"));
Shape460.setGeometry(&IndexedLineSet463);

Transform459.addChild(&Shape460);

Group450.addChild(&Transform459);

Transform& Transform464 =  Transform();
Transform464.setDEF(CString("Circle2"));
Transform464.setScale(new float[]{0.25,1,0.25});
Shape& Shape465 =  Shape();
Shape465.setDEF(CString("circle2_Shape"));
Appearance& Appearance466 =  Appearance();
Appearance466.setDEF(CString("circle2_Appearance"));
Material& Material467 =  Material();
Material467.setDEF(CString("circle2_Material"));
Material467.setDiffuseColor(new float[]{0.9,0,0.7});
Material467.setEmissiveColor(new float[]{0.424956,0.483976,1});
Appearance466.addChild(&Material467);

Shape465.addChild(&Appearance466);

IndexedLineSet& IndexedLineSet468 =  IndexedLineSet();
IndexedLineSet468.setUSE(CString("Orbit1"));
Shape465.setGeometry(&IndexedLineSet468);

Transform464.addChild(&Shape465);

Group450.addChild(&Transform464);

Scene15.addChild(&Group450);

X3D0.setScene(&Scene15);

}
