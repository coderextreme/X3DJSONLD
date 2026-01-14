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
meta3.setContent(CString("HAnimDisplacerExamples.x3d"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("description"));
meta4.setContent(CString("This model illustrates use of the HAnimDisplacer node."));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("creator"));
meta5.setContent(CString("Joe Williams"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("creator"));
meta6.setContent(CString("Don Brutzman"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(CString("created"));
meta7.setContent(CString("9 January 2014"));
head1.addMeta(&meta7);

meta& meta8 =  meta();
meta8.setName(CString("modified"));
meta8.setContent(CString("Mon, 15 Sep 2025 05:20:09 GMT"));
head1.addMeta(&meta8);

meta& meta9 =  meta();
meta9.setName(CString("TODO"));
meta9.setContent(CString("Provide clear HAnimDisplacer examples that other can use, with initial displacements of head and left-hand index figure."));
head1.addMeta(&meta9);

meta& meta10 =  meta();
meta10.setName(CString("identifier"));
meta10.setContent(CString("http://www.web3d.org/x3d/content/examples/HumanoidAnimation/MotionAnimation/HAnimDisplacerExamples.x3d"));
head1.addMeta(&meta10);

meta& meta11 =  meta();
meta11.setName(CString("reference"));
meta11.setContent(CString("../Legacy/JoeSkinTexcoordDisplacerKick.x3d"));
head1.addMeta(&meta11);

X3D0.setHead(&head1);

Scene& Scene12 =  Scene();
WorldInfo& WorldInfo13 =  WorldInfo();
WorldInfo13.setTitle(CString("X3D HANIM LOA3 Skeleton, 390 point Skin, texcoords, Displacer, teTrans for Joe_ by Joe"));
WorldInfo13.setInfo(new CString[]{CString("X3D Humanoid V1 LOA3 skeleton"), CString("skin from hanim sites, surface features, and some added points"), CString("390 points")}, 3);
Scene12.addChild(&WorldInfo13);

NavigationInfo& NavigationInfo14 =  NavigationInfo();
NavigationInfo14.setDEF(CString("Start_NavigationInfo"));
NavigationInfo14.setSpeed(2.5);
NavigationInfo14.setHeadlight(False);
Scene12.addChild(&NavigationInfo14);

Background& Background15 =  Background();
Background15.setDEF(CString("blue_Background"));
Scene12.addChild(&Background15);

SpotLight& SpotLight16 =  SpotLight();
SpotLight16.setDEF(CString("light1"));
SpotLight16.setColor(new float[]{0.8,0.8,1});
SpotLight16.setAmbientIntensity(0.7);
SpotLight16.setLocation(new float[]{0,3,3});
SpotLight16.setDirection(new float[]{0,0,0});
SpotLight16.setRadius(10);
SpotLight16.setBeamWidth(1.5);
SpotLight16.setCutOffAngle(0.6);
Scene12.addChild(&SpotLight16);

PointLight& PointLight17 =  PointLight();
PointLight17.setDEF(CString("light2"));
PointLight17.setColor(new float[]{0.8,0.8,1});
PointLight17.setAmbientIntensity(0.7);
PointLight17.setLocation(new float[]{0,10,-7});
Scene12.addChild(&PointLight17);

Viewpoint& Viewpoint18 =  Viewpoint();
Viewpoint18.setDEF(CString("Scene_InclinedView"));
Viewpoint18.setDescription(CString("Scene_Inclined View"));
Viewpoint18.setPosition(new float[]{1.62,1.05,3.06});
Viewpoint18.setOrientation(new float[]{-0.113,0.993,0.0347,0.671});
Viewpoint18.setCenterOfRotation(new float[]{0,0.85,0});
Scene12.addChild(&Viewpoint18);

Viewpoint& Viewpoint19 =  Viewpoint();
Viewpoint19.setDEF(CString("Scene_IFrontView"));
Viewpoint19.setDescription(CString("Scene_Front View"));
Viewpoint19.setPosition(new float[]{0,0.8,2.58});
Viewpoint19.setCenterOfRotation(new float[]{0,0.8,0});
Scene12.addChild(&Viewpoint19);

Viewpoint& Viewpoint20 =  Viewpoint();
Viewpoint20.setDEF(CString("Scene_ISideView"));
Viewpoint20.setDescription(CString("Scene_Side View"));
Viewpoint20.setPosition(new float[]{2.6,0.5,0});
Viewpoint20.setOrientation(new float[]{0,1,0,1.5708});
Viewpoint20.setCenterOfRotation(new float[]{0,0.8,0});
Scene12.addChild(&Viewpoint20);

Viewpoint& Viewpoint21 =  Viewpoint();
Viewpoint21.setDEF(CString("Scene_BackView"));
Viewpoint21.setDescription(CString("Scene_Back View"));
Viewpoint21.setPosition(new float[]{0,2.5,-3});
Viewpoint21.setOrientation(new float[]{0,1,0,3.14});
Viewpoint21.setCenterOfRotation(new float[]{0,1.5,0});
Scene12.addChild(&Viewpoint21);

Viewpoint& Viewpoint22 =  Viewpoint();
Viewpoint22.setDEF(CString("Scene_TopView"));
Viewpoint22.setDescription(CString("Scene_Top View"));
Viewpoint22.setPosition(new float[]{0,3.5,0});
Viewpoint22.setOrientation(new float[]{1,0,0,-1.5708});
Viewpoint22.setCenterOfRotation(new float[]{0,1.5,0});
Scene12.addChild(&Viewpoint22);

Group& Group23 =  Group();
Group23.setDEF(CString("Joe_Humanoid"));
HAnimHumanoid& HAnimHumanoid24 =  HAnimHumanoid();
HAnimHumanoid24.setDEF(CString("Joe_Human"));
HAnimHumanoid24.X3DNode::setName(CString("Human"));
HAnimJoint& HAnimJoint25 =  HAnimJoint();
HAnimJoint25.setDEF(CString("Joe_humanoid_root"));
HAnimJoint25.X3DNode::setName(CString("humanoid_root"));
HAnimJoint25.setCenter(new float[]{0,0.875,0});
HAnimSegment& HAnimSegment26 =  HAnimSegment();
HAnimSegment26.setDEF(CString("Joe_sacrum"));
HAnimSegment26.X3DNode::setName(CString("sacrum"));
HAnimSite& HAnimSite27 =  HAnimSite();
HAnimSite27.setDEF(CString("Joe_humanoid_sacrum_pt"));
HAnimSite27.X3DNode::setName(CString("humanoid_sacrum_pt"));
HAnimSite27.setTranslation(new float[]{0,0.875,0});
Shape& Shape28 =  Shape();
Shape28.setDEF(CString("RedBox"));
Appearance& Appearance29 =  Appearance();
Material& Material30 =  Material();
Material30.setDiffuseColor(new float[]{1,0,0});
Appearance29.addChild(&Material30);

Shape28.addChild(&Appearance29);

Box& Box31 =  Box();
Box31.setSize(new float[]{0.01,0.01,0.01});
Shape28.setGeometry(&Box31);

HAnimSite27.addChild(&Shape28);

HAnimSegment26.addChild(&HAnimSite27);

HAnimSite& HAnimSite32 =  HAnimSite();
HAnimSite32.setDEF(CString("Joe_humanoid_origin_view"));
HAnimSite32.X3DNode::setName(CString("humanoid_origin_view"));
Transform& Transform33 =  Transform();
Transform33.setDEF(CString("HAnimHumanoidOrigin"));
Transform33.setScale(new float[]{0.175,0.175,0.175});
Viewpoint& Viewpoint34 =  Viewpoint();
Viewpoint34.setDEF(CString("ViewBodyRootAxes"));
Viewpoint34.setDescription(CString("Joe_HAnim Root Coordinate Axes View"));
Transform33.addChild(&Viewpoint34);

Shape& Shape35 =  Shape();
Shape35.setDEF(CString("AxisLinesShape"));
IndexedLineSet& IndexedLineSet36 =  IndexedLineSet();
IndexedLineSet36.setColorPerVertex(False);
IndexedLineSet36.setColorIndex(new int[]{0,1,2}, 3);
IndexedLineSet36.setCoordIndex(new int32_t[]{0,1,-1,0,2,-1,0,3,-1}, 9);
CColor& Color37 =  CColor();
Color37.setColor(new float[]{1,0,0,0,0.6,0,0,0,1}, 9);
IndexedLineSet36.setColor(&Color37);

Coordinate& Coordinate38 =  Coordinate();
Coordinate38.setPoint(new float[]{0,0,0,1,0,0,0,1,0,0,0,1}, 12);
IndexedLineSet36.setCoord(&Coordinate38);

Shape35.setGeometry(&IndexedLineSet36);

Transform33.addChild(&Shape35);

HAnimSite32.addChild(&Transform33);

HAnimSegment26.addChild(&HAnimSite32);

HAnimJoint25.addChildren(&HAnimSegment26);

HAnimJoint& HAnimJoint39 =  HAnimJoint();
HAnimJoint39.setDEF(CString("Joe_sacroiliac"));
HAnimJoint39.X3DNode::setName(CString("sacroiliac"));
HAnimJoint39.setCenter(new float[]{0,0.92,0});
HAnimJoint39.setSkinCoordIndex(new int32_t[]{17,19,20,21,22,23,26,27,73,82,89,91,93}, 13);
HAnimJoint39.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1,1,1,0.35,0.35,1}, 13);
HAnimJoint& HAnimJoint40 =  HAnimJoint();
HAnimJoint40.setDEF(CString("Joe_l_hip"));
HAnimJoint40.X3DNode::setName(CString("l_hip"));
HAnimJoint40.setCenter(new float[]{0.1,0.92,0});
HAnimJoint40.setSkinCoordIndex(new int32_t[]{89,90,94,95,96,97}, 6);
HAnimJoint40.setSkinCoordWeight(new float[]{0.65,1,1,1,1,1}, 6);
HAnimJoint& HAnimJoint41 =  HAnimJoint();
HAnimJoint41.setDEF(CString("Joe_l_knee"));
HAnimJoint41.X3DNode::setName(CString("l_knee"));
HAnimJoint41.setCenter(new float[]{0.115,0.466,0});
HAnimJoint41.setSkinCoordIndex(new int32_t[]{334,335,336,337,338,339,340,341}, 8);
HAnimJoint41.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1}, 8);
HAnimJoint& HAnimJoint42 =  HAnimJoint();
HAnimJoint42.setDEF(CString("Joe_l_talocrural"));
HAnimJoint42.X3DNode::setName(CString("l_talocrural"));
HAnimJoint42.setCenter(new float[]{0.115,0.069,0});
HAnimJoint42.setSkinCoordIndex(new int32_t[]{342,343,344,345}, 4);
HAnimJoint42.setSkinCoordWeight(new float[]{1,1,1,1}, 4);
HAnimJoint& HAnimJoint43 =  HAnimJoint();
HAnimJoint43.setDEF(CString("Joe_l_subtalar"));
HAnimJoint43.X3DNode::setName(CString("l_subtalar"));
HAnimJoint43.setCenter(new float[]{0.115,0.031,0.03});
HAnimJoint43.setSkinCoordIndex(new int32_t[]{346,347,348,71}, 4);
HAnimJoint43.setSkinCoordWeight(new float[]{1,1,1,1}, 4);
HAnimJoint& HAnimJoint44 =  HAnimJoint();
HAnimJoint44.setDEF(CString("Joe_l_midtarsal"));
HAnimJoint44.X3DNode::setName(CString("l_midtarsal"));
HAnimJoint44.setCenter(new float[]{0.115,0.037,0.09});
HAnimJoint44.setSkinCoordIndex(new int32_t[]{349,350,351,352}, 4);
HAnimJoint44.setSkinCoordWeight(new float[]{1,1,1,1}, 4);
HAnimJoint& HAnimJoint45 =  HAnimJoint();
HAnimJoint45.setDEF(CString("Joe_l_metatarsal"));
HAnimJoint45.X3DNode::setName(CString("l_metatarsal"));
HAnimJoint45.setCenter(new float[]{0.115,0.02,0.122});
HAnimJoint45.setSkinCoordIndex(new int32_t[]{353,354,355,356,357,358,359,360,361}, 9);
HAnimJoint45.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1,1}, 9);
HAnimJoint44.addChildren(&HAnimJoint45);

HAnimJoint43.addChildren(&HAnimJoint44);

HAnimJoint42.addChildren(&HAnimJoint43);

HAnimJoint41.addChildren(&HAnimJoint42);

HAnimJoint40.addChildren(&HAnimJoint41);

HAnimJoint39.addChildren(&HAnimJoint40);

HAnimJoint& HAnimJoint46 =  HAnimJoint();
HAnimJoint46.setDEF(CString("Joe_r_hip"));
HAnimJoint46.X3DNode::setName(CString("r_hip"));
HAnimJoint46.setCenter(new float[]{-0.1,0.92,0});
HAnimJoint46.setSkinCoordIndex(new int32_t[]{91,92,98,99,100,101,362,363}, 8);
HAnimJoint46.setSkinCoordWeight(new float[]{0.65,1,0.8,1,1,1,0.4,0.8}, 8);
HAnimJoint& HAnimJoint47 =  HAnimJoint();
HAnimJoint47.setDEF(CString("Joe_r_knee"));
HAnimJoint47.X3DNode::setName(CString("r_knee"));
HAnimJoint47.setCenter(new float[]{-0.05,0.466,0});
HAnimJoint47.setSkinCoordIndex(new int32_t[]{362,363,364,365,366,367,368,369,98}, 9);
HAnimJoint47.setSkinCoordWeight(new float[]{0.6,0.2,1,1,1,1,1,1,0.2}, 9);
HAnimJoint& HAnimJoint48 =  HAnimJoint();
HAnimJoint48.setDEF(CString("Joe_r_talocrural"));
HAnimJoint48.X3DNode::setName(CString("r_talocrural"));
HAnimJoint48.setCenter(new float[]{-0.115,0.069,0});
HAnimJoint48.setSkinCoordIndex(new int32_t[]{370,371,372,373}, 4);
HAnimJoint48.setSkinCoordWeight(new float[]{1,1,1,1}, 4);
HAnimJoint& HAnimJoint49 =  HAnimJoint();
HAnimJoint49.setDEF(CString("Joe_r_subtalar"));
HAnimJoint49.X3DNode::setName(CString("r_subtalar"));
HAnimJoint49.setCenter(new float[]{-0.1,0.015,-0.01});
HAnimJoint49.setSkinCoordIndex(new int32_t[]{374,375,376}, 3);
HAnimJoint49.setSkinCoordWeight(new float[]{1,1,1}, 3);
HAnimJoint& HAnimJoint50 =  HAnimJoint();
HAnimJoint50.setDEF(CString("Joe_r_midtarsal"));
HAnimJoint50.X3DNode::setName(CString("r_midtarsal"));
HAnimJoint50.setCenter(new float[]{-0.115,0.037,0.09});
HAnimJoint50.setSkinCoordIndex(new int32_t[]{377,378,379,380}, 4);
HAnimJoint50.setSkinCoordWeight(new float[]{1,1,1,1}, 4);
HAnimJoint& HAnimJoint51 =  HAnimJoint();
HAnimJoint51.setDEF(CString("Joe_r_metatarsal"));
HAnimJoint51.X3DNode::setName(CString("r_metatarsal"));
HAnimJoint51.setCenter(new float[]{-0.1,0.01,0.14});
HAnimJoint51.setSkinCoordIndex(new int32_t[]{381,382,383,384,385,386,387,388,389}, 9);
HAnimJoint51.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1,1}, 9);
HAnimJoint50.addChildren(&HAnimJoint51);

HAnimJoint49.addChildren(&HAnimJoint50);

HAnimJoint48.addChildren(&HAnimJoint49);

HAnimJoint47.addChildren(&HAnimJoint48);

HAnimJoint46.addChildren(&HAnimJoint47);

HAnimJoint39.addChildren(&HAnimJoint46);

HAnimJoint25.addChildren(&HAnimJoint39);

HAnimJoint& HAnimJoint52 =  HAnimJoint();
HAnimJoint52.setDEF(CString("Joe_vl5"));
HAnimJoint52.X3DNode::setName(CString("vl5"));
HAnimJoint52.setCenter(new float[]{0,1.045,-0.095});
HAnimJoint52.setSkinCoordIndex(new int32_t[]{28,76}, 2);
HAnimJoint52.setSkinCoordWeight(new float[]{1,1}, 2);
HAnimJoint& HAnimJoint53 =  HAnimJoint();
HAnimJoint53.setDEF(CString("Joe_vl4"));
HAnimJoint53.X3DNode::setName(CString("vl4"));
HAnimJoint53.setCenter(new float[]{0,1.068,-0.085});
HAnimJoint& HAnimJoint54 =  HAnimJoint();
HAnimJoint54.setDEF(CString("Joe_vl3"));
HAnimJoint54.X3DNode::setName(CString("vl3"));
HAnimJoint54.setCenter(new float[]{0,1.092,-0.0725});
HAnimJoint& HAnimJoint55 =  HAnimJoint();
HAnimJoint55.setDEF(CString("Joe_vl2"));
HAnimJoint55.X3DNode::setName(CString("vl2"));
HAnimJoint55.setCenter(new float[]{0,1.12,-0.065});
HAnimJoint55.setSkinCoordIndex(new int32_t[]{16,18,25,83,84,85,86,87,88}, 9);
HAnimJoint55.setSkinCoordWeight(new float[]{1,1,1,1,1,1,0.7,1,0.8}, 9);
HAnimJoint& HAnimJoint56 =  HAnimJoint();
HAnimJoint56.setDEF(CString("Joe_vl1"));
HAnimJoint56.X3DNode::setName(CString("vl1"));
HAnimJoint56.setCenter(new float[]{0,1.1459,-0.0625});
HAnimJoint& HAnimJoint57 =  HAnimJoint();
HAnimJoint57.setDEF(CString("Joe_vt12"));
HAnimJoint57.X3DNode::setName(CString("vt12"));
HAnimJoint57.setCenter(new float[]{0,1.179,-0.068});
HAnimJoint& HAnimJoint58 =  HAnimJoint();
HAnimJoint58.setDEF(CString("Joe_vt11"));
HAnimJoint58.X3DNode::setName(CString("vt11"));
HAnimJoint58.setCenter(new float[]{0,1.2679,-0.081});
HAnimJoint& HAnimJoint59 =  HAnimJoint();
HAnimJoint59.setDEF(CString("Joe_vt10"));
HAnimJoint59.X3DNode::setName(CString("vt10"));
HAnimJoint59.setCenter(new float[]{0,1.242,-0.09});
HAnimJoint59.setSkinCoordIndex(new int32_t[]{15}, 1);
HAnimJoint59.setSkinCoordWeight(new float[]{1}, 1);
HAnimJoint& HAnimJoint60 =  HAnimJoint();
HAnimJoint60.setDEF(CString("Joe_vt9"));
HAnimJoint60.X3DNode::setName(CString("vt9"));
HAnimJoint60.setCenter(new float[]{0,1.268,-0.1});
HAnimJoint60.setSkinCoordIndex(new int32_t[]{13,14}, 2);
HAnimJoint60.setSkinCoordWeight(new float[]{1,1}, 2);
HAnimJoint& HAnimJoint61 =  HAnimJoint();
HAnimJoint61.setDEF(CString("Joe_vt8"));
HAnimJoint61.X3DNode::setName(CString("vt8"));
HAnimJoint61.setCenter(new float[]{0,1.294,-0.11});
HAnimJoint& HAnimJoint62 =  HAnimJoint();
HAnimJoint62.setDEF(CString("Joe_vt7"));
HAnimJoint62.X3DNode::setName(CString("vt7"));
HAnimJoint62.setCenter(new float[]{0,1.323,-0.1155});
HAnimJoint& HAnimJoint63 =  HAnimJoint();
HAnimJoint63.setDEF(CString("Joe_vt6"));
HAnimJoint63.X3DNode::setName(CString("vt6"));
HAnimJoint63.setCenter(new float[]{0,1.352,-0.12});
HAnimJoint& HAnimJoint64 =  HAnimJoint();
HAnimJoint64.setDEF(CString("Joe_vt5"));
HAnimJoint64.X3DNode::setName(CString("vt5"));
HAnimJoint64.setCenter(new float[]{0,1.381,-0.1235});
HAnimJoint& HAnimJoint65 =  HAnimJoint();
HAnimJoint65.setDEF(CString("Joe_vt4"));
HAnimJoint65.X3DNode::setName(CString("vt4"));
HAnimJoint65.setCenter(new float[]{0,1.41,-0.1235});
HAnimJoint65.setSkinCoordIndex(new int32_t[]{81}, 1);
HAnimJoint65.setSkinCoordWeight(new float[]{1}, 1);
HAnimJoint& HAnimJoint66 =  HAnimJoint();
HAnimJoint66.setDEF(CString("Joe_vt3"));
HAnimJoint66.X3DNode::setName(CString("vt3"));
HAnimJoint66.setCenter(new float[]{0,1.438,-0.12});
HAnimJoint& HAnimJoint67 =  HAnimJoint();
HAnimJoint67.setDEF(CString("Joe_vt2"));
HAnimJoint67.X3DNode::setName(CString("vt2"));
HAnimJoint67.setCenter(new float[]{0,1.468,-0.105});
HAnimJoint& HAnimJoint68 =  HAnimJoint();
HAnimJoint68.setDEF(CString("Joe_vt1"));
HAnimJoint68.X3DNode::setName(CString("vt1"));
HAnimJoint68.setCenter(new float[]{0,1.497,-0.09});
HAnimJoint68.setSkinCoordIndex(new int32_t[]{11,24}, 2);
HAnimJoint68.setSkinCoordWeight(new float[]{1,1}, 2);
HAnimJoint& HAnimJoint69 =  HAnimJoint();
HAnimJoint69.setDEF(CString("Joe_vc7"));
HAnimJoint69.X3DNode::setName(CString("vc7"));
HAnimJoint69.setCenter(new float[]{0,1.525,-0.072});
HAnimJoint69.setSkinCoordIndex(new int32_t[]{74,75}, 2);
HAnimJoint69.setSkinCoordWeight(new float[]{1,1}, 2);
HAnimJoint& HAnimJoint70 =  HAnimJoint();
HAnimJoint70.setDEF(CString("Joe_vc6"));
HAnimJoint70.X3DNode::setName(CString("vc6"));
HAnimJoint70.setCenter(new float[]{0,1.54,-0.05});
HAnimJoint& HAnimJoint71 =  HAnimJoint();
HAnimJoint71.setDEF(CString("Joe_vc5"));
HAnimJoint71.X3DNode::setName(CString("vc5"));
HAnimJoint71.setCenter(new float[]{0,1.552,-0.035});
HAnimJoint& HAnimJoint72 =  HAnimJoint();
HAnimJoint72.setDEF(CString("Joe_vc4"));
HAnimJoint72.X3DNode::setName(CString("vc4"));
HAnimJoint72.setCenter(new float[]{0,1.5675,-0.0256});
HAnimJoint& HAnimJoint73 =  HAnimJoint();
HAnimJoint73.setDEF(CString("Joe_vc3"));
HAnimJoint73.X3DNode::setName(CString("vc3"));
HAnimJoint73.setCenter(new float[]{0,1.58225,-0.0185});
HAnimJoint& HAnimJoint74 =  HAnimJoint();
HAnimJoint74.setDEF(CString("Joe_vc2"));
HAnimJoint74.X3DNode::setName(CString("vc2"));
HAnimJoint74.setCenter(new float[]{0,1.595,-0.0175});
HAnimJoint& HAnimJoint75 =  HAnimJoint();
HAnimJoint75.setDEF(CString("Joe_vc1"));
HAnimJoint75.X3DNode::setName(CString("vc1"));
HAnimJoint75.setCenter(new float[]{0,1.61,-0.015});
HAnimJoint& HAnimJoint76 =  HAnimJoint();
HAnimJoint76.setDEF(CString("Joe_skullbase"));
HAnimJoint76.X3DNode::setName(CString("skullbase"));
HAnimJoint76.setCenter(new float[]{0,1.63,-0.01});
HAnimJoint76.setSkinCoordIndex(new int32_t[]{0,1,2,3,4,5,6,7,8,9}, 10);
HAnimJoint76.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1,1,1}, 10);
HAnimDisplacer& HAnimDisplacer77 =  HAnimDisplacer();
HAnimDisplacer77.setDEF(CString("Joe_skull_tip"));
HAnimDisplacer77.X3DNode::setName(CString("skull_tip_raiser_action"));
HAnimDisplacer77.setWeight(0.9682372);
HAnimDisplacer77.setCoordIndex(new int32_t[]{0,1,2,3,4,5,6,7,8,9}, 10);
HAnimDisplacer77.setDisplacements(new float[]{0,0.15,0,0,0,0.15,-0.1,0,0.15,0.1,0,0.05,0,-0.02,0.05,-0.15,0,0,-0.05,0,0,0.15,0,0,0.05,0,0,0,0,-0.15}, 30);
HAnimJoint76.setDisplacers(HAnimDisplacer77);

HAnimJoint& HAnimJoint78 =  HAnimJoint();
HAnimJoint78.setDEF(CString("Joe_l_eyelid_joint"));
HAnimJoint78.X3DNode::setName(CString("l_eyelid_joint"));
HAnimJoint78.setCenter(new float[]{0.034,1.659,0.06});
HAnimJoint76.addChildren(&HAnimJoint78);

HAnimJoint& HAnimJoint79 =  HAnimJoint();
HAnimJoint79.setDEF(CString("Joe_l_eyeball_joint"));
HAnimJoint79.X3DNode::setName(CString("l_eyeball_joint"));
HAnimJoint79.setCenter(new float[]{0.034,1.659,0.06});
HAnimJoint76.addChildren(&HAnimJoint79);

HAnimJoint& HAnimJoint80 =  HAnimJoint();
HAnimJoint80.setDEF(CString("Joe_l_eyebrow_joint"));
HAnimJoint80.X3DNode::setName(CString("l_eyebrow_joint"));
HAnimJoint80.setCenter(new float[]{0.034,1.659,0.06});
HAnimJoint76.addChildren(&HAnimJoint80);

HAnimJoint& HAnimJoint81 =  HAnimJoint();
HAnimJoint81.setDEF(CString("Joe_r_eyelid_joint"));
HAnimJoint81.X3DNode::setName(CString("l_eyelid_joint"));
HAnimJoint81.setCenter(new float[]{-0.034,1.659,0.06});
HAnimJoint76.addChildren(&HAnimJoint81);

HAnimJoint& HAnimJoint82 =  HAnimJoint();
HAnimJoint82.setDEF(CString("Joe_r_eyeball_joint"));
HAnimJoint82.X3DNode::setName(CString("l_eyeball_joint"));
HAnimJoint82.setCenter(new float[]{-0.034,1.659,0.06});
HAnimJoint76.addChildren(&HAnimJoint82);

HAnimJoint& HAnimJoint83 =  HAnimJoint();
HAnimJoint83.setDEF(CString("Joe_r_eyebrow_joint"));
HAnimJoint83.X3DNode::setName(CString("l_eyebrow_joint"));
HAnimJoint83.setCenter(new float[]{-0.034,1.659,0.06});
HAnimJoint76.addChildren(&HAnimJoint83);

HAnimJoint& HAnimJoint84 =  HAnimJoint();
HAnimJoint84.setDEF(CString("Joe_temporomandibular"));
HAnimJoint84.X3DNode::setName(CString("temporomandibular"));
HAnimJoint84.setCenter(new float[]{0.034,1.659,0.06});
HAnimJoint76.addChildren(&HAnimJoint84);

HAnimJoint75.addChildren(&HAnimJoint76);

HAnimJoint74.addChildren(&HAnimJoint75);

HAnimJoint73.addChildren(&HAnimJoint74);

HAnimJoint72.addChildren(&HAnimJoint73);

HAnimJoint71.addChildren(&HAnimJoint72);

HAnimJoint70.addChildren(&HAnimJoint71);

HAnimJoint69.addChildren(&HAnimJoint70);

HAnimJoint& HAnimJoint85 =  HAnimJoint();
HAnimJoint85.setDEF(CString("Joe_l_sternoclavicular"));
HAnimJoint85.X3DNode::setName(CString("l_sternoclavicular"));
HAnimJoint85.setCenter(new float[]{0.082,1.4488,-0.0353});
HAnimJoint85.setSkinCoordIndex(new int32_t[]{12}, 1);
HAnimJoint85.setSkinCoordWeight(new float[]{1}, 1);
HAnimJoint& HAnimJoint86 =  HAnimJoint();
HAnimJoint86.setDEF(CString("Joe_l_acromioclavicular"));
HAnimJoint86.X3DNode::setName(CString("l_acromioclavicular"));
HAnimJoint86.setCenter(new float[]{0.0962,1.4269,-0.0424});
HAnimJoint86.setSkinCoordIndex(new int32_t[]{79}, 1);
HAnimJoint86.setSkinCoordWeight(new float[]{1}, 1);
HAnimJoint& HAnimJoint87 =  HAnimJoint();
HAnimJoint87.setDEF(CString("Joe_l_shoulder"));
HAnimJoint87.X3DNode::setName(CString("l_shoulder"));
HAnimJoint87.setRotation(new float[]{-0.999999999999989,0,0,0.177942317505106});
HAnimJoint87.setCenter(new float[]{0.2,1.44,-0.04});
HAnimJoint87.setSkinCoordIndex(new int32_t[]{41,42,44,80,102,103,104,105}, 8);
HAnimJoint87.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1}, 8);
HAnimJoint& HAnimJoint88 =  HAnimJoint();
HAnimJoint88.setDEF(CString("Joe_l_elbow"));
HAnimJoint88.X3DNode::setName(CString("l_elbow"));
HAnimJoint88.setCenter(new float[]{0.2,1.1388,-0.04});
HAnimJoint88.setSkinCoordIndex(new int32_t[]{45,46,47,109,110,111,112,113,115,116,117,118}, 12);
HAnimJoint88.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, 15);
HAnimJoint& HAnimJoint89 =  HAnimJoint();
HAnimJoint89.setDEF(CString("Joe_l_wrist"));
HAnimJoint89.X3DNode::setName(CString("l_wrist"));
HAnimJoint89.setCenter(new float[]{0.2,0.87,-0.04});
HAnimJoint89.setSkinCoordIndex(new int32_t[]{119,120,121,122,123,124,125,126}, 8);
HAnimJoint89.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1}, 8);
HAnimJoint& HAnimJoint90 =  HAnimJoint();
HAnimJoint90.setDEF(CString("Joe_l_thumb1"));
HAnimJoint90.X3DNode::setName(CString("l_thumb1"));
HAnimJoint90.setCenter(new float[]{0.1924,0.8472,-0.0534});
HAnimJoint90.setSkinCoordIndex(new int32_t[]{127,128}, 2);
HAnimJoint90.setSkinCoordWeight(new float[]{1,1}, 2);
HAnimJoint& HAnimJoint91 =  HAnimJoint();
HAnimJoint91.setDEF(CString("Joe_l_thumb2"));
HAnimJoint91.X3DNode::setName(CString("l_thumb2"));
HAnimJoint91.setCenter(new float[]{0.1951,0.8226,0.0246});
HAnimJoint91.setSkinCoordIndex(new int32_t[]{138,139,140,141,142,143}, 6);
HAnimJoint91.setSkinCoordWeight(new float[]{0.5,0.5,0.5,1,1,1}, 6);
HAnimJoint& HAnimJoint92 =  HAnimJoint();
HAnimJoint92.setDEF(CString("Joe_l_thumb3"));
HAnimJoint92.X3DNode::setName(CString("l_thumb3"));
HAnimJoint92.setCenter(new float[]{0.1955,0.8159,0.0464});
HAnimJoint92.setSkinCoordIndex(new int32_t[]{144,145,146,147,148,149,150,151,152}, 9);
HAnimJoint92.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1,1}, 9);
HAnimJoint91.addChildren(&HAnimJoint92);

HAnimJoint90.addChildren(&HAnimJoint91);

HAnimJoint89.addChildren(&HAnimJoint90);

HAnimJoint& HAnimJoint93 =  HAnimJoint();
HAnimJoint93.setDEF(CString("Joe_l_index0"));
HAnimJoint93.X3DNode::setName(CString("l_index0"));
HAnimJoint93.setCenter(new float[]{0.1983,0.8024,-0.028});
HAnimJoint93.setSkinCoordIndex(new int32_t[]{129,130}, 2);
HAnimJoint93.setSkinCoordWeight(new float[]{1,1}, 2);
HAnimJoint& HAnimJoint94 =  HAnimJoint();
HAnimJoint94.setDEF(CString("Joe_l_index1"));
HAnimJoint94.X3DNode::setName(CString("l_index1"));
HAnimJoint94.setCenter(new float[]{0.1983,0.7815,-0.028});
HAnimJoint94.setSkinCoordIndex(new int32_t[]{138,139,140,153,154,155,163}, 7);
HAnimJoint94.setSkinCoordWeight(new float[]{0.5,0.5,0.5,1,1,1,0.5}, 7);
HAnimJoint& HAnimJoint95 =  HAnimJoint();
HAnimJoint95.setDEF(CString("Joe_l_index2"));
HAnimJoint95.X3DNode::setName(CString("l_index2"));
HAnimJoint95.setCenter(new float[]{0.2017,0.7363,-0.0248});
HAnimJoint95.setSkinCoordIndex(new int32_t[]{166,167,168,169}, 4);
HAnimJoint95.setSkinCoordWeight(new float[]{1,1,1,1}, 4);
HAnimDisplacer& HAnimDisplacer96 =  HAnimDisplacer();
HAnimDisplacer96.setDEF(CString("Joe_L_finger_tips"));
HAnimDisplacer96.X3DNode::setName(CString("Joe_L_finger_tips_raiser_action"));
HAnimDisplacer96.setWeight(0.2205769);
HAnimDisplacer96.setCoordIndex(new int32_t[]{172,173,174}, 3);
HAnimDisplacer96.setDisplacements(new float[]{0,-1.15,0,0,-1.15,0,0,-1.15,0}, 9);
HAnimJoint95.setDisplacers(HAnimDisplacer96);

HAnimJoint& HAnimJoint97 =  HAnimJoint();
HAnimJoint97.setDEF(CString("Joe_l_index3"));
HAnimJoint97.X3DNode::setName(CString("l_index3"));
HAnimJoint97.setCenter(new float[]{0.2028,0.7139,-0.0236});
HAnimJoint97.setSkinCoordIndex(new int32_t[]{170,171,172,173,174,175,176,177,178}, 9);
HAnimJoint97.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1,1}, 9);
HAnimJoint95.addChildren(&HAnimJoint97);

HAnimJoint94.addChildren(&HAnimJoint95);

HAnimJoint93.addChildren(&HAnimJoint94);

HAnimJoint89.addChildren(&HAnimJoint93);

HAnimJoint& HAnimJoint98 =  HAnimJoint();
HAnimJoint98.setDEF(CString("Joe_l_middle0"));
HAnimJoint98.X3DNode::setName(CString("l_middle0"));
HAnimJoint98.setCenter(new float[]{0.1987,0.8029,-0.053});
HAnimJoint98.setSkinCoordIndex(new int32_t[]{131,132}, 2);
HAnimJoint98.setSkinCoordWeight(new float[]{1,1}, 2);
HAnimJoint& HAnimJoint99 =  HAnimJoint();
HAnimJoint99.setDEF(CString("Joe_l_middle1"));
HAnimJoint99.X3DNode::setName(CString("l_middle1"));
HAnimJoint99.setCenter(new float[]{0.1987,0.7818,-0.053});
HAnimJoint99.setSkinCoordIndex(new int32_t[]{156,157,163,164}, 4);
HAnimJoint99.setSkinCoordWeight(new float[]{1,1,0.5,0.5}, 4);
HAnimJoint& HAnimJoint100 =  HAnimJoint();
HAnimJoint100.setDEF(CString("Joe_l_middle2"));
HAnimJoint100.X3DNode::setName(CString("l_middle2"));
HAnimJoint100.setCenter(new float[]{0.2013,0.7273,-0.0503});
HAnimJoint100.setSkinCoordIndex(new int32_t[]{179,180,181,182}, 4);
HAnimJoint100.setSkinCoordWeight(new float[]{1,1,1,1}, 4);
HAnimJoint& HAnimJoint101 =  HAnimJoint();
HAnimJoint101.setDEF(CString("Joe_l_middle3"));
HAnimJoint101.X3DNode::setName(CString("l_middle3"));
HAnimJoint101.setCenter(new float[]{0.2026,0.7011,-0.0494});
HAnimJoint101.setSkinCoordIndex(new int32_t[]{183,184,185,186,187,188,189,190,191}, 9);
HAnimJoint101.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1,1}, 9);
HAnimJoint100.addChildren(&HAnimJoint101);

HAnimJoint99.addChildren(&HAnimJoint100);

HAnimJoint98.addChildren(&HAnimJoint99);

HAnimJoint89.addChildren(&HAnimJoint98);

HAnimJoint& HAnimJoint102 =  HAnimJoint();
HAnimJoint102.setDEF(CString("Joe_l_ring0"));
HAnimJoint102.X3DNode::setName(CString("l_ring0"));
HAnimJoint102.setCenter(new float[]{0.1956,0.8019,-0.0794});
HAnimJoint102.setSkinCoordIndex(new int32_t[]{133,134}, 2);
HAnimJoint102.setSkinCoordWeight(new float[]{1,1}, 2);
HAnimJoint& HAnimJoint103 =  HAnimJoint();
HAnimJoint103.setDEF(CString("Joe_l_ring1"));
HAnimJoint103.X3DNode::setName(CString("l_ring1"));
HAnimJoint103.setCenter(new float[]{0.1956,0.7815,-0.0794});
HAnimJoint103.setSkinCoordIndex(new int32_t[]{158,159,164,165}, 4);
HAnimJoint103.setSkinCoordWeight(new float[]{1,1,0.5,0.5}, 4);
HAnimJoint& HAnimJoint104 =  HAnimJoint();
HAnimJoint104.setDEF(CString("Joe_l_ring2"));
HAnimJoint104.X3DNode::setName(CString("l_ring2"));
HAnimJoint104.setCenter(new float[]{0.1973,0.7287,-0.0777});
HAnimJoint104.setSkinCoordIndex(new int32_t[]{192,193,194,195}, 4);
HAnimJoint104.setSkinCoordWeight(new float[]{1,1,1,1}, 4);
HAnimJoint& HAnimJoint105 =  HAnimJoint();
HAnimJoint105.setDEF(CString("Joe_l_ring3"));
HAnimJoint105.X3DNode::setName(CString("l_ring3"));
HAnimJoint105.setCenter(new float[]{0.1983,0.7045,-0.0767});
HAnimJoint105.setSkinCoordIndex(new int32_t[]{196,197,198,199,200,201,202,203,204}, 9);
HAnimJoint105.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1,1}, 9);
HAnimJoint104.addChildren(&HAnimJoint105);

HAnimJoint103.addChildren(&HAnimJoint104);

HAnimJoint102.addChildren(&HAnimJoint103);

HAnimJoint89.addChildren(&HAnimJoint102);

HAnimJoint& HAnimJoint106 =  HAnimJoint();
HAnimJoint106.setDEF(CString("Joe_l_pinky0"));
HAnimJoint106.X3DNode::setName(CString("l_pinky0"));
HAnimJoint106.setCenter(new float[]{0.1925,0.8066,-0.1036});
HAnimJoint106.setSkinCoordIndex(new int32_t[]{135,136,137,165}, 4);
HAnimJoint106.setSkinCoordWeight(new float[]{1,1,1,0.5}, 4);
HAnimJoint& HAnimJoint107 =  HAnimJoint();
HAnimJoint107.setDEF(CString("Joe_l_pinky1"));
HAnimJoint107.X3DNode::setName(CString("l_pinky1"));
HAnimJoint107.setCenter(new float[]{0.1925,0.7866,-0.1036});
HAnimJoint107.setSkinCoordIndex(new int32_t[]{160,161,162}, 3);
HAnimJoint107.setSkinCoordWeight(new float[]{1,1,1}, 3);
HAnimJoint& HAnimJoint108 =  HAnimJoint();
HAnimJoint108.setDEF(CString("Joe_l_pinky2"));
HAnimJoint108.X3DNode::setName(CString("l_pinky2"));
HAnimJoint108.setCenter(new float[]{0.1938,0.7452,-0.1024});
HAnimJoint108.setSkinCoordIndex(new int32_t[]{205,206,207,208}, 4);
HAnimJoint108.setSkinCoordWeight(new float[]{1,1,1,1}, 4);
HAnimJoint& HAnimJoint109 =  HAnimJoint();
HAnimJoint109.setDEF(CString("Joe_l_pinky3"));
HAnimJoint109.X3DNode::setName(CString("l_pinky3"));
HAnimJoint109.setCenter(new float[]{0.1948,0.7277,-0.1017});
HAnimJoint109.setSkinCoordIndex(new int32_t[]{209,210,211,212,213,214,215,216,217}, 9);
HAnimJoint109.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1,1}, 9);
HAnimJoint108.addChildren(&HAnimJoint109);

HAnimJoint107.addChildren(&HAnimJoint108);

HAnimJoint106.addChildren(&HAnimJoint107);

HAnimJoint89.addChildren(&HAnimJoint106);

HAnimJoint88.addChildren(&HAnimJoint89);

HAnimJoint87.addChildren(&HAnimJoint88);

HAnimJoint86.addChildren(&HAnimJoint87);

HAnimJoint85.addChildren(&HAnimJoint86);

HAnimJoint69.addChildren(&HAnimJoint85);

HAnimJoint& HAnimJoint110 =  HAnimJoint();
HAnimJoint110.setDEF(CString("Joe_r_sternoclavicular"));
HAnimJoint110.X3DNode::setName(CString("r_sternoclavicular"));
HAnimJoint110.setCenter(new float[]{-0.03,1.46,0});
HAnimJoint110.setSkinCoordIndex(new int32_t[]{10}, 1);
HAnimJoint110.setSkinCoordWeight(new float[]{1}, 1);
HAnimJoint& HAnimJoint111 =  HAnimJoint();
HAnimJoint111.setDEF(CString("Joe_r_acromioclavicular"));
HAnimJoint111.X3DNode::setName(CString("r_acromioclavicular"));
HAnimJoint111.setCenter(new float[]{-0.09,1.41,-0.11});
HAnimJoint111.setSkinCoordIndex(new int32_t[]{77,29}, 2);
HAnimJoint111.setSkinCoordWeight(new float[]{1,0.9}, 2);
HAnimJoint& HAnimJoint112 =  HAnimJoint();
HAnimJoint112.setDEF(CString("Joe_r_shoulder"));
HAnimJoint112.X3DNode::setName(CString("r_shoulder"));
HAnimJoint112.setRotation(new float[]{-0.999999999999989,0,0,0.177942317505106});
HAnimJoint112.setCenter(new float[]{-0.2,1.44,-0.04});
HAnimJoint112.setSkinCoordIndex(new int32_t[]{29,30,32,78,218,219,220,221,86,88}, 10);
HAnimJoint112.setSkinCoordWeight(new float[]{0.1,1,1,1,1,1,1,1,0.3,0.2}, 10);
HAnimJoint& HAnimJoint113 =  HAnimJoint();
HAnimJoint113.setDEF(CString("Joe_r_elbow"));
HAnimJoint113.X3DNode::setName(CString("r_elbow"));
HAnimJoint113.setCenter(new float[]{-0.2,1.1388,-0.04});
HAnimJoint113.setSkinCoordIndex(new int32_t[]{33,34,35,225,226,227,228,229,231,232,233,234}, 12);
HAnimJoint113.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1,1,1,1,1}, 12);
HAnimJoint& HAnimJoint114 =  HAnimJoint();
HAnimJoint114.setDEF(CString("Joe_r_wrist"));
HAnimJoint114.X3DNode::setName(CString("r_wrist"));
HAnimJoint114.setCenter(new float[]{-0.2,0.89,-0.04});
HAnimJoint114.setSkinCoordIndex(new int32_t[]{235,236,237,238,239,240,241,242}, 8);
HAnimJoint114.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1}, 8);
HAnimJoint& HAnimJoint115 =  HAnimJoint();
HAnimJoint115.setDEF(CString("Joe_r_thumb1"));
HAnimJoint115.X3DNode::setName(CString("r_thumb1"));
HAnimJoint115.setCenter(new float[]{-0.2,0.85,0});
HAnimJoint115.setSkinCoordIndex(new int32_t[]{243,244}, 2);
HAnimJoint115.setSkinCoordWeight(new float[]{1,1}, 2);
HAnimJoint& HAnimJoint116 =  HAnimJoint();
HAnimJoint116.setDEF(CString("Joe_r_thumb2"));
HAnimJoint116.X3DNode::setName(CString("r_thumb2"));
HAnimJoint116.setCenter(new float[]{-0.2,0.82,0.03});
HAnimJoint116.setSkinCoordIndex(new int32_t[]{254,255,256,257,258,259}, 6);
HAnimJoint116.setSkinCoordWeight(new float[]{0.5,0.5,0.5,1,1,1}, 6);
HAnimJoint& HAnimJoint117 =  HAnimJoint();
HAnimJoint117.setDEF(CString("Joe_r_thumb3"));
HAnimJoint117.X3DNode::setName(CString("r_thumb3"));
HAnimJoint117.setCenter(new float[]{-0.2,0.8,0.05});
HAnimJoint117.setSkinCoordIndex(new int32_t[]{260,261,262,263,264,265,266,267,268}, 9);
HAnimJoint117.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1,1}, 9);
HAnimJoint116.addChildren(&HAnimJoint117);

HAnimJoint115.addChildren(&HAnimJoint116);

HAnimJoint114.addChildren(&HAnimJoint115);

HAnimJoint& HAnimJoint118 =  HAnimJoint();
HAnimJoint118.setDEF(CString("Joe_r_index0"));
HAnimJoint118.X3DNode::setName(CString("r_index0"));
HAnimJoint118.setCenter(new float[]{-0.2,0.84,-0.015});
HAnimJoint118.setSkinCoordIndex(new int32_t[]{245,246}, 2);
HAnimJoint118.setSkinCoordWeight(new float[]{1,1}, 2);
HAnimJoint& HAnimJoint119 =  HAnimJoint();
HAnimJoint119.setDEF(CString("Joe_r_index1"));
HAnimJoint119.X3DNode::setName(CString("r_index1"));
HAnimJoint119.setCenter(new float[]{-0.2,0.793,-0.015});
HAnimJoint119.setSkinCoordIndex(new int32_t[]{254,255,256,269,270,271,279}, 7);
HAnimJoint119.setSkinCoordWeight(new float[]{0.5,0.5,0.5,1,1,1,0.5}, 7);
HAnimJoint& HAnimJoint120 =  HAnimJoint();
HAnimJoint120.setDEF(CString("Joe_r_index2"));
HAnimJoint120.X3DNode::setName(CString("r_index2"));
HAnimJoint120.setCenter(new float[]{-0.2,0.745,-0.015});
HAnimJoint120.setSkinCoordIndex(new int32_t[]{282,283,284,285}, 4);
HAnimJoint120.setSkinCoordWeight(new float[]{1,1,1,1}, 4);
HAnimJoint& HAnimJoint121 =  HAnimJoint();
HAnimJoint121.setDEF(CString("Joe_r_index3"));
HAnimJoint121.X3DNode::setName(CString("r_index3"));
HAnimJoint121.setCenter(new float[]{-0.2,0.72,-0.015});
HAnimJoint121.setSkinCoordIndex(new int32_t[]{286,287,288,289,290,291,292,293,294}, 9);
HAnimJoint121.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1,1}, 9);
HAnimJoint120.addChildren(&HAnimJoint121);

HAnimJoint119.addChildren(&HAnimJoint120);

HAnimJoint118.addChildren(&HAnimJoint119);

HAnimJoint114.addChildren(&HAnimJoint118);

HAnimJoint& HAnimJoint122 =  HAnimJoint();
HAnimJoint122.setDEF(CString("Joe_r_middle0"));
HAnimJoint122.X3DNode::setName(CString("r_middle0"));
HAnimJoint122.setCenter(new float[]{-0.2,0.835,-0.04});
HAnimJoint122.setSkinCoordIndex(new int32_t[]{247,248}, 2);
HAnimJoint122.setSkinCoordWeight(new float[]{1,1}, 2);
HAnimJoint& HAnimJoint123 =  HAnimJoint();
HAnimJoint123.setDEF(CString("Joe_r_middle1"));
HAnimJoint123.X3DNode::setName(CString("r_middle1"));
HAnimJoint123.setCenter(new float[]{-0.2,0.788,-0.04});
HAnimJoint123.setSkinCoordIndex(new int32_t[]{272,273,279,280}, 4);
HAnimJoint123.setSkinCoordWeight(new float[]{1,1,0.5,0.5}, 4);
HAnimJoint& HAnimJoint124 =  HAnimJoint();
HAnimJoint124.setDEF(CString("Joe_r_middle2"));
HAnimJoint124.X3DNode::setName(CString("r_middle2"));
HAnimJoint124.setCenter(new float[]{-0.2,0.74,-0.04});
HAnimJoint124.setSkinCoordIndex(new int32_t[]{295,296,297,298}, 4);
HAnimJoint124.setSkinCoordWeight(new float[]{1,1,1,1}, 4);
HAnimJoint& HAnimJoint125 =  HAnimJoint();
HAnimJoint125.setDEF(CString("Joe_r_middle3"));
HAnimJoint125.X3DNode::setName(CString("r_middle3"));
HAnimJoint125.setCenter(new float[]{-0.2,0.7142,-0.04});
HAnimJoint125.setSkinCoordIndex(new int32_t[]{299,300,301,302,303,304,305,306,307}, 9);
HAnimJoint125.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1,1}, 9);
HAnimJoint124.addChildren(&HAnimJoint125);

HAnimJoint123.addChildren(&HAnimJoint124);

HAnimJoint122.addChildren(&HAnimJoint123);

HAnimJoint114.addChildren(&HAnimJoint122);

HAnimJoint& HAnimJoint126 =  HAnimJoint();
HAnimJoint126.setDEF(CString("Joe_r_ring0"));
HAnimJoint126.X3DNode::setName(CString("r_ring0"));
HAnimJoint126.setCenter(new float[]{-0.2,0.835,-0.065});
HAnimJoint126.setSkinCoordIndex(new int32_t[]{249,250}, 2);
HAnimJoint126.setSkinCoordWeight(new float[]{1,1}, 2);
HAnimJoint& HAnimJoint127 =  HAnimJoint();
HAnimJoint127.setDEF(CString("Joe_r_ring1"));
HAnimJoint127.X3DNode::setName(CString("r_ring1"));
HAnimJoint127.setCenter(new float[]{-0.2,0.793,-0.065});
HAnimJoint127.setSkinCoordIndex(new int32_t[]{274,275,280,281}, 4);
HAnimJoint127.setSkinCoordWeight(new float[]{1,1,0.5,0.5}, 4);
HAnimJoint& HAnimJoint128 =  HAnimJoint();
HAnimJoint128.setDEF(CString("Joe_r_ring2"));
HAnimJoint128.X3DNode::setName(CString("r_ring2"));
HAnimJoint128.setCenter(new float[]{-0.2,0.74,-0.065});
HAnimJoint128.setSkinCoordIndex(new int32_t[]{308,309,310,311}, 4);
HAnimJoint128.setSkinCoordWeight(new float[]{1,1,1,1}, 4);
HAnimJoint& HAnimJoint129 =  HAnimJoint();
HAnimJoint129.setDEF(CString("Joe_r_ring3"));
HAnimJoint129.X3DNode::setName(CString("r_ring3"));
HAnimJoint129.setCenter(new float[]{-0.2,0.7177,-0.065});
HAnimJoint129.setSkinCoordIndex(new int32_t[]{312,313,314,315,316,317,318,319,320}, 9);
HAnimJoint129.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1,1}, 9);
HAnimJoint128.addChildren(&HAnimJoint129);

HAnimJoint127.addChildren(&HAnimJoint128);

HAnimJoint126.addChildren(&HAnimJoint127);

HAnimJoint114.addChildren(&HAnimJoint126);

HAnimJoint& HAnimJoint130 =  HAnimJoint();
HAnimJoint130.setDEF(CString("Joe_r_pinky0"));
HAnimJoint130.X3DNode::setName(CString("r_pinky0"));
HAnimJoint130.setCenter(new float[]{-0.2,0.84,-0.085});
HAnimJoint130.setSkinCoordIndex(new int32_t[]{251,252,253,281}, 4);
HAnimJoint130.setSkinCoordWeight(new float[]{1,1,1,0.5}, 4);
HAnimJoint& HAnimJoint131 =  HAnimJoint();
HAnimJoint131.setDEF(CString("Joe_r_pinky1"));
HAnimJoint131.X3DNode::setName(CString("r_pinky1"));
HAnimJoint131.setCenter(new float[]{-0.2,0.79,-0.085});
HAnimJoint131.setSkinCoordIndex(new int32_t[]{276,277,278}, 3);
HAnimJoint131.setSkinCoordWeight(new float[]{1,1,1}, 3);
HAnimJoint& HAnimJoint132 =  HAnimJoint();
HAnimJoint132.setDEF(CString("Joe_r_pinky2"));
HAnimJoint132.X3DNode::setName(CString("r_pinky2"));
HAnimJoint132.setCenter(new float[]{-0.2,0.755,-0.085});
HAnimJoint132.setSkinCoordIndex(new int32_t[]{321,322,323,324}, 4);
HAnimJoint132.setSkinCoordWeight(new float[]{1,1,1,1}, 4);
HAnimJoint& HAnimJoint133 =  HAnimJoint();
HAnimJoint133.setDEF(CString("Joe_r_pinky3"));
HAnimJoint133.X3DNode::setName(CString("r_pinky3"));
HAnimJoint133.setCenter(new float[]{-0.2,0.735,-0.09});
HAnimJoint133.setSkinCoordIndex(new int32_t[]{325,326,327,328,329,330,331,332,333}, 9);
HAnimJoint133.setSkinCoordWeight(new float[]{1,1,1,1,1,1,1,1,1}, 9);
HAnimJoint132.addChildren(&HAnimJoint133);

HAnimJoint131.addChildren(&HAnimJoint132);

HAnimJoint130.addChildren(&HAnimJoint131);

HAnimJoint114.addChildren(&HAnimJoint130);

HAnimJoint113.addChildren(&HAnimJoint114);

HAnimJoint112.addChildren(&HAnimJoint113);

HAnimJoint111.addChildren(&HAnimJoint112);

HAnimJoint110.addChildren(&HAnimJoint111);

HAnimJoint69.addChildren(&HAnimJoint110);

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

HAnimJoint54.addChildren(&HAnimJoint55);

HAnimJoint53.addChildren(&HAnimJoint54);

HAnimJoint52.addChildren(&HAnimJoint53);

HAnimJoint25.addChildren(&HAnimJoint52);

HAnimHumanoid24.setSkeleton(&HAnimJoint25);

HAnimJoint& HAnimJoint134 =  HAnimJoint();
HAnimJoint134.setUSE(CString("Joe_humanoid_root"));
HAnimHumanoid24.setJoints(&HAnimJoint134);

HAnimJoint& HAnimJoint135 =  HAnimJoint();
HAnimJoint135.setUSE(CString("Joe_l_acromioclavicular"));
HAnimHumanoid24.setJoints(&HAnimJoint135);

HAnimJoint& HAnimJoint136 =  HAnimJoint();
HAnimJoint136.setUSE(CString("Joe_l_talocrural"));
HAnimHumanoid24.setJoints(&HAnimJoint136);

HAnimJoint& HAnimJoint137 =  HAnimJoint();
HAnimJoint137.setUSE(CString("Joe_l_elbow"));
HAnimHumanoid24.setJoints(&HAnimJoint137);

HAnimJoint& HAnimJoint138 =  HAnimJoint();
HAnimJoint138.setUSE(CString("Joe_l_eyeball_joint"));
HAnimHumanoid24.setJoints(&HAnimJoint138);

HAnimJoint& HAnimJoint139 =  HAnimJoint();
HAnimJoint139.setUSE(CString("Joe_l_eyebrow_joint"));
HAnimHumanoid24.setJoints(&HAnimJoint139);

HAnimJoint& HAnimJoint140 =  HAnimJoint();
HAnimJoint140.setUSE(CString("Joe_l_eyelid_joint"));
HAnimHumanoid24.setJoints(&HAnimJoint140);

HAnimJoint& HAnimJoint141 =  HAnimJoint();
HAnimJoint141.setUSE(CString("Joe_l_hip"));
HAnimHumanoid24.setJoints(&HAnimJoint141);

HAnimJoint& HAnimJoint142 =  HAnimJoint();
HAnimJoint142.setUSE(CString("Joe_l_index0"));
HAnimHumanoid24.setJoints(&HAnimJoint142);

HAnimJoint& HAnimJoint143 =  HAnimJoint();
HAnimJoint143.setUSE(CString("Joe_l_index1"));
HAnimHumanoid24.setJoints(&HAnimJoint143);

HAnimJoint& HAnimJoint144 =  HAnimJoint();
HAnimJoint144.setUSE(CString("Joe_l_index2"));
HAnimHumanoid24.setJoints(&HAnimJoint144);

HAnimJoint& HAnimJoint145 =  HAnimJoint();
HAnimJoint145.setUSE(CString("Joe_l_index3"));
HAnimHumanoid24.setJoints(&HAnimJoint145);

HAnimJoint& HAnimJoint146 =  HAnimJoint();
HAnimJoint146.setUSE(CString("Joe_l_knee"));
HAnimHumanoid24.setJoints(&HAnimJoint146);

HAnimJoint& HAnimJoint147 =  HAnimJoint();
HAnimJoint147.setUSE(CString("Joe_l_metatarsal"));
HAnimHumanoid24.setJoints(&HAnimJoint147);

HAnimJoint& HAnimJoint148 =  HAnimJoint();
HAnimJoint148.setUSE(CString("Joe_l_middle0"));
HAnimHumanoid24.setJoints(&HAnimJoint148);

HAnimJoint& HAnimJoint149 =  HAnimJoint();
HAnimJoint149.setUSE(CString("Joe_l_middle1"));
HAnimHumanoid24.setJoints(&HAnimJoint149);

HAnimJoint& HAnimJoint150 =  HAnimJoint();
HAnimJoint150.setUSE(CString("Joe_l_middle2"));
HAnimHumanoid24.setJoints(&HAnimJoint150);

HAnimJoint& HAnimJoint151 =  HAnimJoint();
HAnimJoint151.setUSE(CString("Joe_l_middle3"));
HAnimHumanoid24.setJoints(&HAnimJoint151);

HAnimJoint& HAnimJoint152 =  HAnimJoint();
HAnimJoint152.setUSE(CString("Joe_l_midtarsal"));
HAnimHumanoid24.setJoints(&HAnimJoint152);

HAnimJoint& HAnimJoint153 =  HAnimJoint();
HAnimJoint153.setUSE(CString("Joe_l_pinky0"));
HAnimHumanoid24.setJoints(&HAnimJoint153);

HAnimJoint& HAnimJoint154 =  HAnimJoint();
HAnimJoint154.setUSE(CString("Joe_l_pinky1"));
HAnimHumanoid24.setJoints(&HAnimJoint154);

HAnimJoint& HAnimJoint155 =  HAnimJoint();
HAnimJoint155.setUSE(CString("Joe_l_pinky2"));
HAnimHumanoid24.setJoints(&HAnimJoint155);

HAnimJoint& HAnimJoint156 =  HAnimJoint();
HAnimJoint156.setUSE(CString("Joe_l_pinky3"));
HAnimHumanoid24.setJoints(&HAnimJoint156);

HAnimJoint& HAnimJoint157 =  HAnimJoint();
HAnimJoint157.setUSE(CString("Joe_l_ring0"));
HAnimHumanoid24.setJoints(&HAnimJoint157);

HAnimJoint& HAnimJoint158 =  HAnimJoint();
HAnimJoint158.setUSE(CString("Joe_l_ring1"));
HAnimHumanoid24.setJoints(&HAnimJoint158);

HAnimJoint& HAnimJoint159 =  HAnimJoint();
HAnimJoint159.setUSE(CString("Joe_l_ring2"));
HAnimHumanoid24.setJoints(&HAnimJoint159);

HAnimJoint& HAnimJoint160 =  HAnimJoint();
HAnimJoint160.setUSE(CString("Joe_l_ring3"));
HAnimHumanoid24.setJoints(&HAnimJoint160);

HAnimJoint& HAnimJoint161 =  HAnimJoint();
HAnimJoint161.setUSE(CString("Joe_l_shoulder"));
HAnimHumanoid24.setJoints(&HAnimJoint161);

HAnimJoint& HAnimJoint162 =  HAnimJoint();
HAnimJoint162.setUSE(CString("Joe_l_sternoclavicular"));
HAnimHumanoid24.setJoints(&HAnimJoint162);

HAnimJoint& HAnimJoint163 =  HAnimJoint();
HAnimJoint163.setUSE(CString("Joe_l_subtalar"));
HAnimHumanoid24.setJoints(&HAnimJoint163);

HAnimJoint& HAnimJoint164 =  HAnimJoint();
HAnimJoint164.setUSE(CString("Joe_l_thumb1"));
HAnimHumanoid24.setJoints(&HAnimJoint164);

HAnimJoint& HAnimJoint165 =  HAnimJoint();
HAnimJoint165.setUSE(CString("Joe_l_thumb2"));
HAnimHumanoid24.setJoints(&HAnimJoint165);

HAnimJoint& HAnimJoint166 =  HAnimJoint();
HAnimJoint166.setUSE(CString("Joe_l_thumb3"));
HAnimHumanoid24.setJoints(&HAnimJoint166);

HAnimJoint& HAnimJoint167 =  HAnimJoint();
HAnimJoint167.setUSE(CString("Joe_l_wrist"));
HAnimHumanoid24.setJoints(&HAnimJoint167);

HAnimJoint& HAnimJoint168 =  HAnimJoint();
HAnimJoint168.setUSE(CString("Joe_r_acromioclavicular"));
HAnimHumanoid24.setJoints(&HAnimJoint168);

HAnimJoint& HAnimJoint169 =  HAnimJoint();
HAnimJoint169.setUSE(CString("Joe_r_talocrural"));
HAnimHumanoid24.setJoints(&HAnimJoint169);

HAnimJoint& HAnimJoint170 =  HAnimJoint();
HAnimJoint170.setUSE(CString("Joe_r_elbow"));
HAnimHumanoid24.setJoints(&HAnimJoint170);

HAnimJoint& HAnimJoint171 =  HAnimJoint();
HAnimJoint171.setUSE(CString("Joe_r_eyeball_joint"));
HAnimHumanoid24.setJoints(&HAnimJoint171);

HAnimJoint& HAnimJoint172 =  HAnimJoint();
HAnimJoint172.setUSE(CString("Joe_r_eyebrow_joint"));
HAnimHumanoid24.setJoints(&HAnimJoint172);

HAnimJoint& HAnimJoint173 =  HAnimJoint();
HAnimJoint173.setUSE(CString("Joe_r_eyelid_joint"));
HAnimHumanoid24.setJoints(&HAnimJoint173);

HAnimJoint& HAnimJoint174 =  HAnimJoint();
HAnimJoint174.setUSE(CString("Joe_r_hip"));
HAnimHumanoid24.setJoints(&HAnimJoint174);

HAnimJoint& HAnimJoint175 =  HAnimJoint();
HAnimJoint175.setUSE(CString("Joe_r_index0"));
HAnimHumanoid24.setJoints(&HAnimJoint175);

HAnimJoint& HAnimJoint176 =  HAnimJoint();
HAnimJoint176.setUSE(CString("Joe_r_index1"));
HAnimHumanoid24.setJoints(&HAnimJoint176);

HAnimJoint& HAnimJoint177 =  HAnimJoint();
HAnimJoint177.setUSE(CString("Joe_r_index2"));
HAnimHumanoid24.setJoints(&HAnimJoint177);

HAnimJoint& HAnimJoint178 =  HAnimJoint();
HAnimJoint178.setUSE(CString("Joe_r_index3"));
HAnimHumanoid24.setJoints(&HAnimJoint178);

HAnimJoint& HAnimJoint179 =  HAnimJoint();
HAnimJoint179.setUSE(CString("Joe_r_knee"));
HAnimHumanoid24.setJoints(&HAnimJoint179);

HAnimJoint& HAnimJoint180 =  HAnimJoint();
HAnimJoint180.setUSE(CString("Joe_r_metatarsal"));
HAnimHumanoid24.setJoints(&HAnimJoint180);

HAnimJoint& HAnimJoint181 =  HAnimJoint();
HAnimJoint181.setUSE(CString("Joe_r_middle0"));
HAnimHumanoid24.setJoints(&HAnimJoint181);

HAnimJoint& HAnimJoint182 =  HAnimJoint();
HAnimJoint182.setUSE(CString("Joe_r_middle1"));
HAnimHumanoid24.setJoints(&HAnimJoint182);

HAnimJoint& HAnimJoint183 =  HAnimJoint();
HAnimJoint183.setUSE(CString("Joe_r_middle2"));
HAnimHumanoid24.setJoints(&HAnimJoint183);

HAnimJoint& HAnimJoint184 =  HAnimJoint();
HAnimJoint184.setUSE(CString("Joe_r_middle3"));
HAnimHumanoid24.setJoints(&HAnimJoint184);

HAnimJoint& HAnimJoint185 =  HAnimJoint();
HAnimJoint185.setUSE(CString("Joe_r_midtarsal"));
HAnimHumanoid24.setJoints(&HAnimJoint185);

HAnimJoint& HAnimJoint186 =  HAnimJoint();
HAnimJoint186.setUSE(CString("Joe_r_pinky0"));
HAnimHumanoid24.setJoints(&HAnimJoint186);

HAnimJoint& HAnimJoint187 =  HAnimJoint();
HAnimJoint187.setUSE(CString("Joe_r_pinky1"));
HAnimHumanoid24.setJoints(&HAnimJoint187);

HAnimJoint& HAnimJoint188 =  HAnimJoint();
HAnimJoint188.setUSE(CString("Joe_r_pinky2"));
HAnimHumanoid24.setJoints(&HAnimJoint188);

HAnimJoint& HAnimJoint189 =  HAnimJoint();
HAnimJoint189.setUSE(CString("Joe_r_pinky3"));
HAnimHumanoid24.setJoints(&HAnimJoint189);

HAnimJoint& HAnimJoint190 =  HAnimJoint();
HAnimJoint190.setUSE(CString("Joe_r_ring0"));
HAnimHumanoid24.setJoints(&HAnimJoint190);

HAnimJoint& HAnimJoint191 =  HAnimJoint();
HAnimJoint191.setUSE(CString("Joe_r_ring1"));
HAnimHumanoid24.setJoints(&HAnimJoint191);

HAnimJoint& HAnimJoint192 =  HAnimJoint();
HAnimJoint192.setUSE(CString("Joe_r_ring2"));
HAnimHumanoid24.setJoints(&HAnimJoint192);

HAnimJoint& HAnimJoint193 =  HAnimJoint();
HAnimJoint193.setUSE(CString("Joe_r_ring3"));
HAnimHumanoid24.setJoints(&HAnimJoint193);

HAnimJoint& HAnimJoint194 =  HAnimJoint();
HAnimJoint194.setUSE(CString("Joe_r_shoulder"));
HAnimHumanoid24.setJoints(&HAnimJoint194);

HAnimJoint& HAnimJoint195 =  HAnimJoint();
HAnimJoint195.setUSE(CString("Joe_r_sternoclavicular"));
HAnimHumanoid24.setJoints(&HAnimJoint195);

HAnimJoint& HAnimJoint196 =  HAnimJoint();
HAnimJoint196.setUSE(CString("Joe_r_subtalar"));
HAnimHumanoid24.setJoints(&HAnimJoint196);

HAnimJoint& HAnimJoint197 =  HAnimJoint();
HAnimJoint197.setUSE(CString("Joe_r_thumb1"));
HAnimHumanoid24.setJoints(&HAnimJoint197);

HAnimJoint& HAnimJoint198 =  HAnimJoint();
HAnimJoint198.setUSE(CString("Joe_r_thumb2"));
HAnimHumanoid24.setJoints(&HAnimJoint198);

HAnimJoint& HAnimJoint199 =  HAnimJoint();
HAnimJoint199.setUSE(CString("Joe_r_thumb3"));
HAnimHumanoid24.setJoints(&HAnimJoint199);

HAnimJoint& HAnimJoint200 =  HAnimJoint();
HAnimJoint200.setUSE(CString("Joe_r_wrist"));
HAnimHumanoid24.setJoints(&HAnimJoint200);

HAnimJoint& HAnimJoint201 =  HAnimJoint();
HAnimJoint201.setUSE(CString("Joe_sacroiliac"));
HAnimHumanoid24.setJoints(&HAnimJoint201);

HAnimJoint& HAnimJoint202 =  HAnimJoint();
HAnimJoint202.setUSE(CString("Joe_skullbase"));
HAnimHumanoid24.setJoints(&HAnimJoint202);

HAnimJoint& HAnimJoint203 =  HAnimJoint();
HAnimJoint203.setUSE(CString("Joe_temporomandibular"));
HAnimHumanoid24.setJoints(&HAnimJoint203);

HAnimJoint& HAnimJoint204 =  HAnimJoint();
HAnimJoint204.setUSE(CString("Joe_vc1"));
HAnimHumanoid24.setJoints(&HAnimJoint204);

HAnimJoint& HAnimJoint205 =  HAnimJoint();
HAnimJoint205.setUSE(CString("Joe_vc2"));
HAnimHumanoid24.setJoints(&HAnimJoint205);

HAnimJoint& HAnimJoint206 =  HAnimJoint();
HAnimJoint206.setUSE(CString("Joe_vc3"));
HAnimHumanoid24.setJoints(&HAnimJoint206);

HAnimJoint& HAnimJoint207 =  HAnimJoint();
HAnimJoint207.setUSE(CString("Joe_vc4"));
HAnimHumanoid24.setJoints(&HAnimJoint207);

HAnimJoint& HAnimJoint208 =  HAnimJoint();
HAnimJoint208.setUSE(CString("Joe_vc5"));
HAnimHumanoid24.setJoints(&HAnimJoint208);

HAnimJoint& HAnimJoint209 =  HAnimJoint();
HAnimJoint209.setUSE(CString("Joe_vc6"));
HAnimHumanoid24.setJoints(&HAnimJoint209);

HAnimJoint& HAnimJoint210 =  HAnimJoint();
HAnimJoint210.setUSE(CString("Joe_vc7"));
HAnimHumanoid24.setJoints(&HAnimJoint210);

HAnimJoint& HAnimJoint211 =  HAnimJoint();
HAnimJoint211.setUSE(CString("Joe_vl1"));
HAnimHumanoid24.setJoints(&HAnimJoint211);

HAnimJoint& HAnimJoint212 =  HAnimJoint();
HAnimJoint212.setUSE(CString("Joe_vl2"));
HAnimHumanoid24.setJoints(&HAnimJoint212);

HAnimJoint& HAnimJoint213 =  HAnimJoint();
HAnimJoint213.setUSE(CString("Joe_vl3"));
HAnimHumanoid24.setJoints(&HAnimJoint213);

HAnimJoint& HAnimJoint214 =  HAnimJoint();
HAnimJoint214.setUSE(CString("Joe_vl4"));
HAnimHumanoid24.setJoints(&HAnimJoint214);

HAnimJoint& HAnimJoint215 =  HAnimJoint();
HAnimJoint215.setUSE(CString("Joe_vl5"));
HAnimHumanoid24.setJoints(&HAnimJoint215);

HAnimJoint& HAnimJoint216 =  HAnimJoint();
HAnimJoint216.setUSE(CString("Joe_vt1"));
HAnimHumanoid24.setJoints(&HAnimJoint216);

HAnimJoint& HAnimJoint217 =  HAnimJoint();
HAnimJoint217.setUSE(CString("Joe_vt10"));
HAnimHumanoid24.setJoints(&HAnimJoint217);

HAnimJoint& HAnimJoint218 =  HAnimJoint();
HAnimJoint218.setUSE(CString("Joe_vt11"));
HAnimHumanoid24.setJoints(&HAnimJoint218);

HAnimJoint& HAnimJoint219 =  HAnimJoint();
HAnimJoint219.setUSE(CString("Joe_vt12"));
HAnimHumanoid24.setJoints(&HAnimJoint219);

HAnimJoint& HAnimJoint220 =  HAnimJoint();
HAnimJoint220.setUSE(CString("Joe_vt2"));
HAnimHumanoid24.setJoints(&HAnimJoint220);

HAnimJoint& HAnimJoint221 =  HAnimJoint();
HAnimJoint221.setUSE(CString("Joe_vt3"));
HAnimHumanoid24.setJoints(&HAnimJoint221);

HAnimJoint& HAnimJoint222 =  HAnimJoint();
HAnimJoint222.setUSE(CString("Joe_vt4"));
HAnimHumanoid24.setJoints(&HAnimJoint222);

HAnimJoint& HAnimJoint223 =  HAnimJoint();
HAnimJoint223.setUSE(CString("Joe_vt5"));
HAnimHumanoid24.setJoints(&HAnimJoint223);

HAnimJoint& HAnimJoint224 =  HAnimJoint();
HAnimJoint224.setUSE(CString("Joe_vt6"));
HAnimHumanoid24.setJoints(&HAnimJoint224);

HAnimJoint& HAnimJoint225 =  HAnimJoint();
HAnimJoint225.setUSE(CString("Joe_vt7"));
HAnimHumanoid24.setJoints(&HAnimJoint225);

HAnimJoint& HAnimJoint226 =  HAnimJoint();
HAnimJoint226.setUSE(CString("Joe_vt8"));
HAnimHumanoid24.setJoints(&HAnimJoint226);

HAnimJoint& HAnimJoint227 =  HAnimJoint();
HAnimJoint227.setUSE(CString("Joe_vt9"));
HAnimHumanoid24.setJoints(&HAnimJoint227);

Coordinate& Coordinate228 =  Coordinate();
Coordinate228.setDEF(CString("Joe_SkinCoord"));
Coordinate228.setPoint(new float[]{0,1.77,0,0,1.665,0.09,-0.033,1.62,0.087,0.033,1.62,0.087,0,1.55,0.097,-0.077,1.64,-0.01,-0.0527,1.58,0.015,0.077,1.64,-0.01,0.0527,1.58,0.015,0,1.625,-0.0925,-0.03,1.46,0.035,0,1.44,0.03,0.03,1.46,0.035,-0.1135,1.318,0.095,0.1135,1.318,0.095,0,1.25,0.113,-0.087,1.19,0.09,-0.0935,1.03,0.075,0.087,1.19,0.09,0.0935,1.03,0.075,-0.1425,1.065,0.0033,-0.15,0.9,-0.01,0.1425,1.065,0.0033,0.15,0.9,-0.01,0,1.53,-0.084,0.0049,1.1908,-0.1113,-0.0773,1.019,-0.12,0.0773,1.019,-0.12,0.005,1.0915,-0.1091,-0.178,1.4825,-0.0625,-0.17,1.38,0.007,-0.1884,0.8676,-0.036,-0.16,1.38,-0.127,-0.2,1.1388,-0.08,-0.244,1.1388,-0.04,-0.165,1.1388,-0.04,-0.23,1.133,-0.055,-0.1977,0.8169,-0.0177,-0.1941,0.6772,-0.0423,-0.2117,0.8562,-0.0584,-0.1929,0.789,-0.1064,0.175,1.4825,-0.06,0.17,1.38,0.007,0.1901,0.8645,-0.0415,0.16,1.38,-0.125,0.2,1.1388,-0.08,0.165,1.1388,-0.04,0.244,1.1388,-0.04,0.23,1.133,-0.055,0.2009,0.8139,-0.0237,0.2056,0.6743,-0.0482,0.2142,0.8529,-0.0648,0.1929,0.786,-0.1122,-0.1,0.4913,-0.03,-0.17,0.466,0,-0.05,0.466,0,-0.165,0.01,0.12,-0.15,0.07,0,-0.085,0.086,0.0125,-0.09,0.056,0.0125,-0.115,0.02,0.122,-0.115,0.04,-0.055,-0.11,0.011,0.19,0.0993,0.4881,-0.0309,0.17,0.466,0,0.05,0.4867,0,0.165,0.01,0.12,0.15,0.07,0,0.085,0.086,0.0125,0.09,0.056,0.0125,0.115,0.02,0.122,0.115,0.04,-0.055,0.11,0.011,0.19,0,0.875,0,-0.0646,1.5149,-0.038,0.0646,1.5149,-0.038,0,1.07225,0.09,-0.11,1.427,-0.1375,-0.235,1.42,-0.0625,0.11,1.427,-0.1375,0.235,1.42,-0.0625,0,1.41,-0.145,0,0.925,0.08,-0.087,1.19,-0.09,0.087,1.19,-0.09,0.172,1.32,-0.03,-0.172,1.32,-0.03,0.15,1.23,-0.015,-0.15,1.23,-0.015,0.079,0.92,-0.14,0.1,0.9,0.077,-0.079,0.92,-0.14,-0.1,0.9,0.075,0,0.87,0,0.171,0.65,0,0.02,0.65,0,0.1,0.65,-0.08,0.1,0.65,0.07,-0.171,0.65,0,-0.02,0.65,0,-0.1,0.65,-0.08,-0.1,0.65,0.07,0.25,1.27,-0.04,0.17,1.27,-0.04,0.2,1.27,-0.09,0.2,1.27,0.02,0.244,1.1388,-0.04,0.165,1.1388,-0.04,0.2,1.1388,-0.08,0.2,1.1388,-0.013,0.225,1,-0.01,0.225,1,-0.07,0.185,1,-0.01,0.185,1,-0.07,0.2,1.1388,-0.04,0.225,0.92,-0.04,0.175,0.92,-0.04,0.2,0.92,-0.065,0.2,0.92,-0.015,0.225,0.89,-0.04,0.175,0.89,-0.04,0.2,0.89,-0.065,0.2,0.89,-0.015,0.218,0.86,-0.04,0.184,0.86,-0.04,0.2,0.87,-0.07,0.2,0.87,0,0.21,0.85,0,0.1854,0.85,0,0.212,0.84,-0.015,0.183,0.84,-0.015,0.213,0.835,-0.04,0.19,0.835,-0.04,0.211,0.835,-0.065,0.192,0.835,-0.065,0.208,0.84,-0.085,0.19,0.84,-0.085,0.2,0.84,-0.095,0.215,0.82,0,0.193,0.815,0.005,0.198,0.8,0.012,0.21,0.82,0.03,0.19,0.82,0.03,0.2,0.835,0.039,0.212,0.8,0.05,0.188,0.8,0.05,0.2,0.807,0.057,0.2,0.793,0.035,0.2,0.774,0.076,0.212,0.78,0.07,0.188,0.78,0.07,0.2,0.785,0.075,0.2,0.77,0.062,0.215,0.793,-0.015,0.187,0.793,-0.015,0.2,0.793,-0.005,0.215,0.788,-0.04,0.187,0.788,-0.04,0.215,0.793,-0.065,0.187,0.793,-0.065,0.21,0.79,-0.085,0.19,0.79,-0.085,0.2,0.79,-0.095,0.19,0.77,-0.0275,0.19,0.77,-0.0525,0.19,0.78,-0.0775,0.212,0.745,-0.015,0.188,0.745,-0.02,0.2,0.745,-0.0255,0.2,0.745,-0.0045,0.211,0.72,-0.015,0.189,0.72,-0.015,0.2,0.72,-0.0252,0.2,0.72,-0.0048,0.21,0.695,-0.015,0.19,0.695,-0.015,0.2,0.695,-0.025,0.2,0.695,-0.005,0.2,0.685,-0.015,0.215,0.74,-0.04,0.185,0.74,-0.04,0.2,0.74,-0.055,0.2,0.74,-0.025,0.21,0.7142,-0.04,0.19,0.7142,-0.04,0.2,0.7142,-0.053,0.2,0.7142,-0.027,0.21,0.68,-0.04,0.19,0.68,-0.04,0.2,0.68,-0.05,0.2,0.68,-0.03,0.2,0.67,-0.04,0.212,0.74,-0.065,0.188,0.74,-0.065,0.2,0.74,-0.0756,0.2,0.74,-0.0542,0.21,0.7177,-0.065,0.19,0.7177,-0.065,0.2,0.7177,-0.0751,0.2,0.7177,-0.0549,0.21,0.695,-0.065,0.19,0.695,-0.065,0.2,0.695,-0.075,0.2,0.695,-0.055,0.2,0.685,-0.065,0.211,0.755,-0.085,0.189,0.755,-0.085,0.2,0.755,-0.0952,0.2,0.755,-0.0748,0.21,0.735,-0.085,0.19,0.735,-0.085,0.2,0.735,-0.0951,0.2,0.735,-0.0749,0.21,0.72,-0.085,0.19,0.72,-0.085,0.2,0.72,-0.095,0.2,0.72,-0.075,0.2,0.71,-0.085,-0.23,1.23,-0.04,-0.16,1.23,-0.04,-0.2,1.235,-0.105,-0.2,1.255,0.02,-0.244,1.1388,-0.04,-0.165,1.1388,-0.04,-0.2,1.1388,-0.08,-0.2,1.1388,0.013,-0.225,1,-0.01,-0.225,1,-0.07,-0.185,1,-0.01,-0.185,1,-0.07,-0.2,1.1388,-0.04,-0.225,0.92,-0.04,-0.175,0.92,-0.04,-0.2,0.92,-0.065,-0.2,0.92,-0.015,-0.225,0.89,-0.04,-0.175,0.89,-0.04,-0.2,0.89,-0.065,-0.2,0.89,-0.015,-0.218,0.86,-0.04,-0.184,0.86,-0.04,-0.2,0.87,-0.07,-0.2,0.87,0,-0.21,0.85,0,-0.1854,0.85,0,-0.212,0.84,-0.015,-0.183,0.84,-0.015,-0.213,0.835,-0.04,-0.19,0.835,-0.04,-0.211,0.835,-0.065,-0.192,0.835,-0.065,-0.208,0.84,-0.085,-0.19,0.84,-0.085,-0.2,0.84,-0.095,-0.215,0.82,0,-0.193,0.815,0.005,-0.198,0.8,0.012,-0.21,0.82,0.03,-0.19,0.82,0.03,-0.2,0.835,0.039,-0.212,0.8,0.05,-0.188,0.8,0.05,-0.2,0.807,0.057,-0.2,0.793,0.035,-0.2,0.774,0.076,-0.212,0.78,0.07,-0.188,0.78,0.07,-0.2,0.785,0.075,-0.2,0.77,0.062,-0.215,0.793,-0.015,-0.187,0.793,-0.015,-0.2,0.793,-0.005,-0.215,0.788,-0.04,-0.187,0.788,-0.04,-0.215,0.793,-0.065,-0.187,0.793,-0.065,-0.21,0.79,-0.085,-0.19,0.79,-0.085,-0.2,0.79,-0.095,-0.19,0.77,-0.0275,-0.19,0.77,-0.0525,-0.19,0.78,-0.0775,-0.212,0.745,-0.015,-0.188,0.745,-0.02,-0.2,0.745,-0.0255,-0.2,0.745,-0.0045,-0.211,0.72,-0.015,-0.189,0.72,-0.015,-0.2,0.72,-0.0252,-0.2,0.72,-0.0048,-0.21,0.695,-0.015,-0.19,0.695,-0.015,-0.2,0.695,-0.025,-0.2,0.695,-0.005,-0.2,0.685,-0.015,-0.215,0.74,-0.04,-0.185,0.74,-0.04,-0.2,0.74,-0.055,-0.2,0.74,-0.025,-0.21,0.7142,-0.04,-0.19,0.7142,-0.04,-0.2,0.7142,-0.053,-0.2,0.7142,-0.027,-0.21,0.68,-0.04,-0.19,0.68,-0.04,-0.2,0.68,-0.05,-0.2,0.68,-0.03,-0.2,0.67,-0.04,-0.212,0.74,-0.065,-0.188,0.74,-0.065,-0.2,0.74,-0.0756,-0.2,0.74,-0.0542,-0.21,0.7177,-0.065,-0.19,0.7177,-0.065,-0.2,0.7177,-0.0751,-0.2,0.7177,-0.0549,-0.21,0.695,-0.065,-0.19,0.695,-0.065,-0.2,0.695,-0.075,-0.2,0.695,-0.055,-0.2,0.685,-0.065,-0.211,0.755,-0.085,-0.189,0.755,-0.085,-0.2,0.755,-0.0952,-0.2,0.755,-0.0748,-0.21,0.735,-0.085,-0.19,0.735,-0.085,-0.2,0.735,-0.0951,-0.2,0.735,-0.0749,-0.21,0.72,-0.085,-0.19,0.72,-0.085,-0.2,0.72,-0.095,-0.2,0.72,-0.075,-0.2,0.71,-0.085,0.115,0.466,0.06,0.115,0.466,-0.055,0.15,0.466,0,0.05,0.466,0,0.17,0.3,0,0.06,0.3,0,0.1,0.3,-0.05,0.1,0.3,0.05,0.15,0.07,0,0.085,0.086,0.0125,0.115,0.069,-0.045,0.117,0.0975,0.0615,0.1375,0.006,-0.03,0.095,0.006,-0.03,0.115,0.015,-0.045,0.115,0.06,0.1,0.115,0,0.07,0.165,0,0.07,0.095,0,0.07,0.115,0.04,0.13,0.125,0,0.12,0.165,0,0.12,0.087,0,0.122,0.09,0.012,0.188,0.11,0.011,0.19,0.128,0.011,0.185,0.142,0.011,0.178,0.154,0.01,0.168,-0.115,0.466,0.06,-0.115,0.466,-0.055,-0.17,0.466,0,-0.05,0.466,0,-0.17,0.3,0,-0.06,0.3,0,-0.1,0.3,-0.05,-0.1,0.3,0.05,-0.15,0.07,0,-0.085,0.086,0.0125,-0.115,0.069,-0.045,-0.117,0.0975,0.0615,-0.1375,0.006,-0.03,-0.095,0.006,-0.03,-0.095,0.006,-0.03,-0.115,0.06,0.1,-0.115,0,0.07,-0.165,0,0.07,-0.095,0,0.07,-0.115,0.04,0.13,-0.125,0,0.12,-0.165,0,0.12,-0.087,0,0.122,-0.09,0.012,0.188,-0.11,0.011,0.19,-0.128,0.011,0.185,-0.142,0.011,0.178,-0.154,0.01,0.168}, 1170);
HAnimHumanoid24.setSkinCoord(&Coordinate228);

Shape& Shape229 =  Shape();
Shape229.setDEF(CString("Joe_Shape"));
Appearance& Appearance230 =  Appearance();
Appearance230.setDEF(CString("Joe_skin_Appearance"));
Material& Material231 =  Material();
Material231.setDEF(CString("Joe_skin_Material"));
Material231.setDiffuseColor(new float[]{0.3,0.3,0.6});
Material231.setEmissiveColor(new float[]{0.3,0.3,0.6});
Appearance230.addChild(&Material231);

ImageTexture& ImageTexture232 =  ImageTexture();
ImageTexture232.setDEF(CString("JoeSkinImageTexture"));
ImageTexture232.setUrl(new CString[]{CString("bodytexture28.png")}, 1);
Appearance230.addChild(&ImageTexture232);

TextureTransform& TextureTransform233 =  TextureTransform();
TextureTransform233.setDEF(CString("KickTexTrans"));
Appearance230.setTextureTransform(TextureTransform233);

Shape229.addChild(&Appearance230);

IndexedFaceSet& IndexedFaceSet234 =  IndexedFaceSet();
IndexedFaceSet234.setDEF(CString("Joe_skin_IndexedFaceSet"));
IndexedFaceSet234.setCreaseAngle(3.14);
IndexedFaceSet234.setCoordIndex(new int32_t[]{0,9,5,-1,0,7,9,-1,0,5,1,-1,1,5,2,-1,1,3,7,-1,2,4,3,-1,0,1,7,-1,1,2,3,-1,5,6,2,-1,7,3,8,-1,6,4,2,-1,3,4,8,-1,9,6,5,-1,9,7,8,-1,4,6,10,-1,4,10,12,-1,4,12,8,-1,10,11,12,-1,9,75,24,-1,9,24,74,-1,9,8,75,-1,9,74,6,-1,10,6,74,-1,12,75,8,-1,74,24,29,-1,24,77,29,-1,10,74,29,-1,77,32,29,-1,32,78,29,-1,78,30,29,-1,30,10,29,-1,41,24,75,-1,41,75,12,-1,41,12,42,-1,41,42,80,-1,41,80,44,-1,41,44,79,-1,41,79,24,-1,81,24,79,-1,81,77,24,-1,81,25,77,-1,81,79,25,-1,25,79,44,-1,25,32,77,-1,25,83,32,-1,25,26,83,-1,25,27,26,-1,25,84,27,-1,25,44,84,-1,11,10,30,-1,11,30,13,-1,11,13,15,-1,11,15,14,-1,11,14,42,-1,11,42,12,-1,15,13,16,-1,15,18,14,-1,15,16,76,-1,15,76,18,-1,76,16,17,-1,76,17,82,-1,76,82,19,-1,76,19,18,-1,22,18,19,-1,22,87,18,-1,22,27,84,-1,22,84,87,-1,87,84,85,-1,85,84,44,-1,85,42,14,-1,87,14,18,-1,87,85,14,-1,20,83,26,-1,20,17,16,-1,20,16,88,-1,20,88,83,-1,88,16,13,-1,88,13,86,-1,88,86,83,-1,86,13,30,-1,86,32,83,-1,23,89,22,-1,89,27,22,-1,89,91,27,-1,91,26,27,-1,91,20,26,-1,21,20,91,-1,21,17,20,-1,21,92,17,-1,82,17,92,-1,82,90,19,-1,23,22,19,-1,23,19,90,-1,82,92,101,-1,82,101,99,-1,82,99,93,-1,82,93,95,-1,82,95,97,-1,82,97,90,-1,23,90,97,-1,23,97,94,-1,23,94,89,-1,89,94,96,-1,89,96,95,-1,89,95,93,-1,89,93,91,-1,91,93,99,-1,91,99,100,-1,91,100,98,-1,21,91,98,-1,21,98,101,-1,21,101,92,-1,85,105,42,-1,85,103,105,-1,85,44,103,-1,103,44,104,-1,80,42,105,-1,80,105,102,-1,80,102,104,-1,80,104,44,-1,105,109,102,-1,102,109,47,-1,47,104,102,-1,104,47,45,-1,104,45,103,-1,103,45,46,-1,103,46,109,-1,103,109,105,-1,109,112,110,-1,109,110,47,-1,47,110,111,-1,47,111,45,-1,45,111,113,-1,113,46,45,-1,46,113,112,-1,112,109,46,-1,112,118,110,-1,110,118,115,-1,110,115,111,-1,111,115,117,-1,111,117,113,-1,113,117,116,-1,113,116,112,-1,112,116,118,-1,115,118,119,-1,119,118,122,-1,118,116,122,-1,122,116,120,-1,116,117,120,-1,120,117,121,-1,117,115,121,-1,115,119,121,-1,119,127,123,-1,119,122,127,-1,122,126,127,-1,122,128,126,-1,122,120,128,-1,120,124,128,-1,120,121,124,-1,121,125,124,-1,121,119,125,-1,119,123,125,-1,127,129,123,-1,127,126,129,-1,129,126,141,-1,141,126,143,-1,126,142,143,-1,126,128,142,-1,128,124,130,-1,142,128,130,-1,124,132,130,-1,124,134,132,-1,125,134,124,-1,125,136,134,-1,125,137,136,-1,125,135,137,-1,125,133,135,-1,125,123,133,-1,123,131,133,-1,123,129,131,-1,131,129,138,-1,129,141,138,-1,138,141,144,-1,141,143,144,-1,143,146,144,-1,142,146,143,-1,142,145,146,-1,139,145,142,-1,130,139,142,-1,139,130,132,-1,139,132,154,-1,132,157,154,-1,132,159,157,-1,132,134,159,-1,134,136,159,-1,136,161,159,-1,136,137,161,-1,137,162,161,-1,160,162,137,-1,135,160,137,-1,133,160,135,-1,133,158,160,-1,131,158,133,-1,156,158,131,-1,153,156,131,-1,131,138,153,-1,138,155,153,-1,140,155,138,-1,138,144,140,-1,144,147,140,-1,140,147,145,-1,140,145,139,-1,139,155,140,-1,154,155,139,-1,146,149,144,-1,146,151,149,-1,145,151,146,-1,150,151,145,-1,145,152,150,-1,147,152,145,-1,147,149,152,-1,147,144,149,-1,148,149,151,-1,148,152,149,-1,148,150,152,-1,148,151,150,-1,160,207,162,-1,160,205,207,-1,165,208,205,-1,160,165,205,-1,158,165,160,-1,161,162,207,-1,161,207,206,-1,165,206,208,-1,206,165,161,-1,161,165,159,-1,207,209,211,-1,205,209,207,-1,205,212,209,-1,205,208,212,-1,206,212,208,-1,206,210,212,-1,206,207,210,-1,207,211,210,-1,209,212,213,-1,212,216,213,-1,212,214,216,-1,210,214,212,-1,210,215,214,-1,210,211,215,-1,209,215,211,-1,209,213,215,-1,217,213,216,-1,217,215,213,-1,217,214,215,-1,217,216,214,-1,158,194,165,-1,192,194,158,-1,164,195,192,-1,158,164,192,-1,156,164,158,-1,159,194,165,-1,159,194,193,-1,159,193,195,-1,159,195,164,-1,159,164,157,-1,157,164,180,-1,192,198,194,-1,192,196,198,-1,192,195,196,-1,195,199,196,-1,196,199,200,-1,199,203,200,-1,193,199,195,-1,193,197,199,-1,193,198,197,-1,193,194,198,-1,199,201,203,-1,197,201,199,-1,197,198,201,-1,198,202,201,-1,196,202,198,-1,200,202,196,-1,204,202,200,-1,204,201,202,-1,204,203,201,-1,204,200,203,-1,156,181,164,-1,156,179,181,-1,156,182,179,-1,156,163,182,-1,163,180,182,-1,157,180,163,-1,164,181,180,-1,179,182,183,-1,182,186,183,-1,182,184,186,-1,180,184,182,-1,180,181,184,-1,181,185,184,-1,179,185,181,-1,183,185,179,-1,183,186,187,-1,186,190,187,-1,184,190,186,-1,184,188,190,-1,184,185,188,-1,185,189,188,-1,185,183,189,-1,183,187,189,-1,191,189,187,-1,191,188,189,-1,191,190,188,-1,191,187,190,-1,153,163,156,-1,153,168,163,-1,153,166,168,-1,153,169,166,-1,155,169,153,-1,155,167,169,-1,154,167,155,-1,154,163,167,-1,154,157,163,-1,163,168,167,-1,166,169,170,-1,169,173,170,-1,169,171,173,-1,169,167,171,-1,167,168,171,-1,168,172,171,-1,168,170,172,-1,170,168,166,-1,170,173,174,-1,173,177,174,-1,173,175,177,-1,173,171,175,-1,171,172,175,-1,172,176,175,-1,172,174,176,-1,170,174,172,-1,178,176,174,-1,178,175,176,-1,178,177,175,-1,178,174,177,-1,86,30,221,-1,86,221,219,-1,86,219,32,-1,32,219,220,-1,78,32,220,-1,78,220,218,-1,78,218,221,-1,78,221,30,-1,221,225,219,-1,219,225,35,-1,35,33,219,-1,33,220,219,-1,33,34,220,-1,220,34,218,-1,221,218,34,-1,34,225,221,-1,225,226,228,-1,225,228,35,-1,35,228,229,-1,35,229,33,-1,33,229,227,-1,33,227,34,-1,34,227,226,-1,34,226,225,-1,226,234,228,-1,228,234,232,-1,232,229,228,-1,232,233,229,-1,229,233,227,-1,227,233,231,-1,227,231,226,-1,226,231,234,-1,231,235,234,-1,235,238,234,-1,234,238,232,-1,238,236,232,-1,232,236,233,-1,236,237,233,-1,233,237,231,-1,231,237,235,-1,235,239,243,-1,235,243,238,-1,238,243,242,-1,238,242,244,-1,238,244,236,-1,236,244,240,-1,236,240,237,-1,237,240,241,-1,237,241,235,-1,235,241,239,-1,243,239,245,-1,243,245,242,-1,245,257,242,-1,257,259,242,-1,242,259,258,-1,242,258,244,-1,244,246,240,-1,258,246,244,-1,240,246,248,-1,240,248,250,-1,241,240,250,-1,241,250,252,-1,241,252,253,-1,241,253,251,-1,241,251,249,-1,241,249,239,-1,239,249,247,-1,239,247,245,-1,247,254,245,-1,245,254,257,-1,254,260,257,-1,257,260,259,-1,259,260,262,-1,258,259,262,-1,258,262,261,-1,255,258,261,-1,246,258,255,-1,255,248,246,-1,255,270,248,-1,248,270,273,-1,248,273,275,-1,248,275,250,-1,250,275,252,-1,252,275,277,-1,252,277,253,-1,253,277,278,-1,276,253,278,-1,251,253,276,-1,249,251,276,-1,249,276,274,-1,247,249,274,-1,272,247,274,-1,269,247,272,-1,247,269,254,-1,254,269,271,-1,256,254,271,-1,254,256,260,-1,260,256,263,-1,256,261,263,-1,256,255,261,-1,255,256,271,-1,270,255,271,-1,262,260,265,-1,262,265,267,-1,261,262,267,-1,266,261,267,-1,261,266,268,-1,263,261,268,-1,263,268,265,-1,263,265,260,-1,264,267,265,-1,264,265,268,-1,264,268,266,-1,264,266,267,-1,276,278,323,-1,276,323,321,-1,281,321,324,-1,276,321,281,-1,274,276,281,-1,277,323,278,-1,277,322,323,-1,281,324,322,-1,322,277,281,-1,277,275,281,-1,323,327,325,-1,321,323,325,-1,321,325,328,-1,321,328,324,-1,322,324,328,-1,322,328,326,-1,322,326,323,-1,323,326,327,-1,325,329,328,-1,328,329,332,-1,328,332,330,-1,326,328,330,-1,326,330,331,-1,326,331,327,-1,325,327,331,-1,325,331,329,-1,333,332,329,-1,333,329,331,-1,333,331,330,-1,333,330,332,-1,274,281,310,-1,308,274,310,-1,280,308,311,-1,274,308,280,-1,272,274,280,-1,275,310,281,-1,275,309,310,-1,275,311,309,-1,275,280,311,-1,275,273,280,-1,273,296,280,-1,308,310,314,-1,308,314,312,-1,308,312,311,-1,311,312,315,-1,312,316,315,-1,315,316,319,-1,309,311,315,-1,309,315,313,-1,309,313,314,-1,309,314,310,-1,315,319,317,-1,313,315,317,-1,313,317,314,-1,314,317,318,-1,312,314,318,-1,316,312,318,-1,320,316,318,-1,320,318,317,-1,320,317,319,-1,320,319,316,-1,272,280,297,-1,272,297,295,-1,272,295,298,-1,272,298,279,-1,279,298,296,-1,273,279,296,-1,280,296,297,-1,295,299,298,-1,298,299,302,-1,298,302,300,-1,296,298,300,-1,296,300,297,-1,297,300,301,-1,295,297,301,-1,299,295,301,-1,299,303,302,-1,302,303,306,-1,300,302,306,-1,300,306,304,-1,300,304,301,-1,301,304,305,-1,301,305,299,-1,299,305,303,-1,307,303,305,-1,307,305,304,-1,307,304,306,-1,307,306,303,-1,269,272,279,-1,269,279,284,-1,269,284,282,-1,269,282,285,-1,271,269,285,-1,271,285,283,-1,270,271,283,-1,270,283,279,-1,270,279,273,-1,279,283,284,-1,282,286,285,-1,285,286,289,-1,285,289,287,-1,285,287,283,-1,283,287,284,-1,284,287,288,-1,284,288,286,-1,286,282,284,-1,286,290,289,-1,289,290,293,-1,289,293,291,-1,289,291,287,-1,287,291,288,-1,288,291,292,-1,288,292,290,-1,286,288,290,-1,294,290,292,-1,294,292,291,-1,294,291,293,-1,294,293,290,-1,97,334,336,-1,97,336,94,-1,94,336,96,-1,336,335,96,-1,96,335,95,-1,95,335,337,-1,95,337,334,-1,95,334,97,-1,334,341,336,-1,336,341,338,-1,336,338,335,-1,335,338,340,-1,335,340,337,-1,337,340,339,-1,337,339,334,-1,334,339,341,-1,341,345,342,-1,341,342,338,-1,338,342,340,-1,340,342,344,-1,340,344,339,-1,339,344,343,-1,339,343,345,-1,339,345,341,-1,345,349,342,-1,342,349,351,-1,342,351,346,-1,342,346,344,-1,71,346,348,-1,71,344,346,-1,71,348,347,-1,71,347,344,-1,344,347,343,-1,343,347,352,-1,343,352,349,-1,343,349,345,-1,349,352,356,-1,349,356,353,-1,349,353,355,-1,349,355,351,-1,354,356,352,-1,354,352,350,-1,354,350,351,-1,354,351,355,-1,353,356,357,-1,353,357,358,-1,353,358,359,-1,353,359,360,-1,353,360,361,-1,353,361,355,-1,354,357,356,-1,350,346,351,-1,348,346,347,-1,350,347,346,-1,350,352,347,-1,354,358,357,-1,354,359,358,-1,354,360,359,-1,354,361,360,-1,354,355,361,-1,101,362,365,-1,101,365,99,-1,99,365,100,-1,100,365,363,-1,100,363,98,-1,98,363,364,-1,98,364,101,-1,101,364,362,-1,362,369,367,-1,362,367,365,-1,365,367,363,-1,363,367,368,-1,363,367,368,-1,363,368,366,-1,363,366,364,-1,364,366,362,-1,362,366,369,-1,369,373,371,-1,369,371,367,-1,367,371,368,-1,368,371,372,-1,368,372,366,-1,366,372,370,-1,366,370,369,-1,369,370,373,-1,373,377,380,-1,373,380,375,-1,373,375,371,-1,371,375,372,-1,372,375,376,-1,372,376,374,-1,372,374,370,-1,370,374,379,-1,373,370,379,-1,373,379,377,-1,377,379,383,-1,377,383,381,-1,377,381,384,-1,377,384,380,-1,381,383,389,-1,381,389,388,-1,381,388,387,-1,381,387,386,-1,381,386,385,-1,381,385,384,-1,376,375,374,-1,378,379,374,-1,378,374,375,-1,378,375,380,-1,382,386,387,-1,382,387,388,-1,382,388,389,-1,382,389,383,-1,382,383,379,-1,382,379,378,-1,382,378,380,-1,382,380,384,-1,382,384,385,-1,382,385,386,-1}, 2780);
TextureCoordinate& TextureCoordinate235 =  TextureCoordinate();
TextureCoordinate235.setPoint(new float[]{0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5}, 780);
IndexedFaceSet234.setTexCoord(&TextureCoordinate235);

Coordinate& Coordinate236 =  Coordinate();
Coordinate236.setUSE(CString("Joe_SkinCoord"));
IndexedFaceSet234.setCoord(&Coordinate236);

Shape229.setGeometry(&IndexedFaceSet234);

HAnimHumanoid24.setSkin(&Shape229);

Group23.addChild(&HAnimHumanoid24);

Scene12.addChild(&Group23);

Group& Group237 =  Group();
Group237.setDEF(CString("SkullDisplacerAnimationGroup"));
TimeSensor& TimeSensor238 =  TimeSensor();
TimeSensor238.setDEF(CString("skull_tipTimer"));
TimeSensor238.setCycleInterval(5.73);
TimeSensor238.setLoop(True);
Group237.addChild(&TimeSensor238);

ScalarInterpolator& ScalarInterpolator239 =  ScalarInterpolator();
ScalarInterpolator239.setDEF(CString("skull_tipInterp"));
ScalarInterpolator239.setKey(new float[]{0,0.1,0.2,0.35,0.6,0.7,0.85,0.88,0.94,0.97,1}, 11);
ScalarInterpolator239.setKeyValue(new float[]{0,0,0,0,0.2,0.4,1,0,1,0.4,0}, 11);
Group237.addChild(&ScalarInterpolator239);

Scene12.addChild(&Group237);

Group& Group240 =  Group();
Group240.setDEF(CString("Joe_L_finger_tipsDisplacerAnimationGroup"));
TimeSensor& TimeSensor241 =  TimeSensor();
TimeSensor241.setDEF(CString("L_finger_tipsTimer"));
TimeSensor241.setCycleInterval(4.73);
TimeSensor241.setLoop(True);
Group240.addChild(&TimeSensor241);

ScalarInterpolator& ScalarInterpolator242 =  ScalarInterpolator();
ScalarInterpolator242.setDEF(CString("L_finger_tipsInterp"));
ScalarInterpolator242.setKey(new float[]{0,0.1,0.2,0.35,0.6,0.7,0.85,0.88,0.94,0.97,1}, 11);
ScalarInterpolator242.setKeyValue(new float[]{0,0,0,0,0.2,0.4,1,0,1,0.4,0}, 11);
Group240.addChild(&ScalarInterpolator242);

OrientationInterpolator& OrientationInterpolator243 =  OrientationInterpolator();
OrientationInterpolator243.setDEF(CString("L_shoulderDispRotInterp"));
OrientationInterpolator243.setKey(new float[]{0,0.4,1}, 3);
OrientationInterpolator243.setKeyValue(new float[]{0,0,1,0,-1,0,0,1,0,0,1,0}, 12);
Group240.addChild(&OrientationInterpolator243);

Scene12.addChild(&Group240);

Group& Group244 =  Group();
Transform& Transform245 =  Transform();
Transform245.setScale(new float[]{0.2,0.2,0.2});
Shape& Shape246 =  Shape();
Shape246.setUSE(CString("AxisLinesShape"));
Transform245.addChild(&Shape246);

Group244.addChild(&Transform245);

Transform& Transform247 =  Transform();
Transform247.setDEF(CString("Circle0"));
Transform247.setScale(new float[]{1.175,1,1.175});
Shape& Shape248 =  Shape();
Shape248.setDEF(CString("circle_Shape"));
Appearance& Appearance249 =  Appearance();
Appearance249.setDEF(CString("circle0_Appearance"));
Material& Material250 =  Material();
Material250.setDEF(CString("circle0_Material"));
Material250.setAmbientIntensity(0.9);
Material250.setDiffuseColor(new float[]{0.9,0,0.7});
Material250.setEmissiveColor(new float[]{0.425,0.486,1});
Appearance249.addChild(&Material250);

Shape248.addChild(&Appearance249);

IndexedLineSet& IndexedLineSet251 =  IndexedLineSet();
IndexedLineSet251.setDEF(CString("Orbit1"));
IndexedLineSet251.setCoordIndex(new int32_t[]{0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,-1}, 62);
Coordinate& Coordinate252 =  Coordinate();
Coordinate252.setDEF(CString("circle_Coordinates"));
Coordinate252.setPoint(new float[]{1,0,0,0.995,0,-0.105,0.979,0,-0.208,0.951,0,-0.309,0.914,0,-0.407,0.866,0,-0.5,0.809,0,-0.588,0.743,0,-0.669,0.669,0,-0.743,0.588,0,-0.809,0.5,0,-0.866,0.407,0,-0.914,0.309,0,-0.951,0.208,0,-0.978,0.105,0,-0.995,0,0,-1,-0.105,0,-0.994522,-0.208,0,-0.978,-0.309,0,-0.951,-0.407,0,-0.914,-0.5,0,-0.866,-0.588,0,-0.809,-0.669,0,-0.743,-0.743,0,-0.669,-0.809,0,-0.588,-0.866,0,-0.5,-0.914,0,-0.407,-0.951,0,-0.309,-0.978,0,-0.208,-0.995,0,-0.105,-1,0,0,-0.995,0,0.105,-0.978,0,0.208,-0.951,0,0.309,-0.914,0,0.407,-0.866,0,0.5,-0.809,0,0.588,-0.743,0,0.669,-0.669,0,0.743,-0.588,0,0.809,-0.5,0,0.866,-0.407,0,0.914,-0.309,0,0.951,-0.208,0,0.978,-0.105,0,0.995,0,0,1,0.105,0,0.995,0.208,0,0.978,0.309,0,0.951,0.407,0,0.914,0.5,0,0.866,0.588,0,0.809,0.669,0,0.743,0.743,0,0.669,0.809,0,0.588,0.866,0,0.5,0.914,0,0.407,0.951,0,0.309,0.978,0,0.208,0.995,0,0.104,1,0,0}, 183);
IndexedLineSet251.setCoord(&Coordinate252);

Shape248.setGeometry(&IndexedLineSet251);

Transform247.addChild(&Shape248);

Group244.addChild(&Transform247);

Transform& Transform253 =  Transform();
Transform253.setDEF(CString("Circle1"));
Transform253.setScale(new float[]{0.5,1,0.5});
Shape& Shape254 =  Shape();
Shape254.setDEF(CString("circle1_Shape"));
Appearance& Appearance255 =  Appearance();
Appearance255.setDEF(CString("circle1_Appearance"));
Material& Material256 =  Material();
Material256.setDEF(CString("circle1_Material"));
Material256.setDiffuseColor(new float[]{0.9,0,0.7});
Material256.setEmissiveColor(new float[]{0.424956,0.483976,1});
Appearance255.addChild(&Material256);

Shape254.addChild(&Appearance255);

IndexedLineSet& IndexedLineSet257 =  IndexedLineSet();
IndexedLineSet257.setUSE(CString("Orbit1"));
Shape254.setGeometry(&IndexedLineSet257);

Transform253.addChild(&Shape254);

Group244.addChild(&Transform253);

Transform& Transform258 =  Transform();
Transform258.setDEF(CString("Circle2"));
Transform258.setScale(new float[]{0.25,1,0.25});
Shape& Shape259 =  Shape();
Shape259.setDEF(CString("circle2_Shape"));
Appearance& Appearance260 =  Appearance();
Appearance260.setDEF(CString("circle2_Appearance"));
Material& Material261 =  Material();
Material261.setDEF(CString("circle2_Material"));
Material261.setDiffuseColor(new float[]{0.9,0,0.7});
Material261.setEmissiveColor(new float[]{0.424956,0.483976,1});
Appearance260.addChild(&Material261);

Shape259.addChild(&Appearance260);

IndexedLineSet& IndexedLineSet262 =  IndexedLineSet();
IndexedLineSet262.setUSE(CString("Orbit1"));
Shape259.setGeometry(&IndexedLineSet262);

Transform258.addChild(&Shape259);

Group244.addChild(&Transform258);

Scene12.addChild(&Group244);

ROUTE& ROUTE263 =  ROUTE();
ROUTE263.setFromNode(CString("skull_tipTimer"));
ROUTE263.setFromField(CString("fraction_changed"));
ROUTE263.setToNode(CString("skull_tipInterp"));
ROUTE263.setToField(CString("set_fraction"));
Scene12.addChild(&ROUTE263);

ROUTE& ROUTE264 =  ROUTE();
ROUTE264.setFromNode(CString("skull_tipInterp"));
ROUTE264.setFromField(CString("value_changed"));
ROUTE264.setToNode(CString("Joe_skull_tip"));
ROUTE264.setToField(CString("set_weight"));
Scene12.addChild(&ROUTE264);

ROUTE& ROUTE265 =  ROUTE();
ROUTE265.setFromNode(CString("L_finger_tipsTimer"));
ROUTE265.setFromField(CString("fraction_changed"));
ROUTE265.setToNode(CString("L_finger_tipsInterp"));
ROUTE265.setToField(CString("set_fraction"));
Scene12.addChild(&ROUTE265);

ROUTE& ROUTE266 =  ROUTE();
ROUTE266.setFromNode(CString("L_finger_tipsInterp"));
ROUTE266.setFromField(CString("value_changed"));
ROUTE266.setToNode(CString("Joe_L_finger_tips"));
ROUTE266.setToField(CString("set_weight"));
Scene12.addChild(&ROUTE266);

ROUTE& ROUTE267 =  ROUTE();
ROUTE267.setFromNode(CString("L_finger_tipsTimer"));
ROUTE267.setFromField(CString("fraction_changed"));
ROUTE267.setToNode(CString("L_shoulderDispRotInterp"));
ROUTE267.setToField(CString("set_fraction"));
Scene12.addChild(&ROUTE267);

ROUTE& ROUTE268 =  ROUTE();
ROUTE268.setFromNode(CString("L_shoulderDispRotInterp"));
ROUTE268.setFromField(CString("value_changed"));
ROUTE268.setToNode(CString("Joe_l_shoulder"));
ROUTE268.setToField(CString("set_rotation"));
Scene12.addChild(&ROUTE268);

ROUTE& ROUTE269 =  ROUTE();
ROUTE269.setFromNode(CString("L_shoulderDispRotInterp"));
ROUTE269.setFromField(CString("value_changed"));
ROUTE269.setToNode(CString("Joe_r_shoulder"));
ROUTE269.setToField(CString("set_rotation"));
Scene12.addChild(&ROUTE269);

X3D0.setScene(&Scene12);

}
