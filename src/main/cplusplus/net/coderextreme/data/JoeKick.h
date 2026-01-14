//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/pch.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/framework.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/glut.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/X3DLib.h"
//int main(int argc, char ** argv) 
//{
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
meta8.setContent(CString("Mon, 15 Sep 2025 05:20:39 GMT"));
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
meta14.setContent(CString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/JoeKick.x3d"));
head1.addMeta(&meta14);

meta& meta15 =  meta();
meta15.setName(CString("generator"));
meta15.setContent(CString("X3D-Edit 3.3, https://www.web3d.org/x3d/tools/X3D-Edit"));
head1.addMeta(&meta15);

X3D0.setHead(&head1);

Scene& Scene16 =  Scene();
WorldInfo& WorldInfo17 =  WorldInfo();
WorldInfo17.setTitle(CString("X3D HANIM LOA3 Skeleton, 390 point Skin, texcoords, Displacer, teTrans for Joe_ by Joe"));
WorldInfo17.setInfo(new CString[]{CString("X3D Humanoid LOA3 skeleton"), CString("skin from hanim sites, surface features, and some added points"), CString("390 points")}, 3);
Scene16.addChild(&WorldInfo17);

NavigationInfo& NavigationInfo18 =  NavigationInfo();
NavigationInfo18.setDEF(CString("Start_NavigationInfo"));
NavigationInfo18.setSpeed(2.5);
Scene16.addChild(&NavigationInfo18);

Background& Background19 =  Background();
Background19.setDEF(CString("blue_Background"));
Scene16.addChild(&Background19);

SpotLight& SpotLight20 =  SpotLight();
SpotLight20.setDEF(CString("light1"));
SpotLight20.setColor(new float[]{0.8,0.8,1.0});
SpotLight20.setAmbientIntensity(0.7);
SpotLight20.setLocation(new float[]{0.0,3.0,3.0});
SpotLight20.setDirection(new float[]{0.0,0.0,0.0});
SpotLight20.setRadius(10);
SpotLight20.setBeamWidth(1.5);
SpotLight20.setCutOffAngle(0.6);
Scene16.addChild(&SpotLight20);

PointLight& PointLight21 =  PointLight();
PointLight21.setDEF(CString("light2"));
PointLight21.setColor(new float[]{0.8,0.8,1.0});
PointLight21.setAmbientIntensity(0.7);
PointLight21.setLocation(new float[]{0.0,10.0,-7.0});
Scene16.addChild(&PointLight21);

Viewpoint& Viewpoint22 =  Viewpoint();
Viewpoint22.setDEF(CString("Scene_InclinedView"));
Viewpoint22.setDescription(CString("Scene_Inclined View"));
Viewpoint22.setPosition(new float[]{1.62,1.05,3.06});
Viewpoint22.setOrientation(new float[]{-0.113,0.993,0.0347,0.671});
Viewpoint22.setCenterOfRotation(new float[]{0.0,0.85,0.0});
Scene16.addChild(&Viewpoint22);

Viewpoint& Viewpoint23 =  Viewpoint();
Viewpoint23.setDEF(CString("Scene_IFrontView"));
Viewpoint23.setDescription(CString("Scene_Front View"));
Viewpoint23.setPosition(new float[]{0.0,0.8,2.58});
Viewpoint23.setCenterOfRotation(new float[]{0.0,0.8,0.0});
Scene16.addChild(&Viewpoint23);

Viewpoint& Viewpoint24 =  Viewpoint();
Viewpoint24.setDEF(CString("Scene_ISideView"));
Viewpoint24.setDescription(CString("Scene_Side View"));
Viewpoint24.setPosition(new float[]{2.6,0.8,0.0});
Viewpoint24.setOrientation(new float[]{0.0,1.0,0.0,1.5708});
Viewpoint24.setCenterOfRotation(new float[]{0.0,0.8,0.0});
Scene16.addChild(&Viewpoint24);

Viewpoint& Viewpoint25 =  Viewpoint();
Viewpoint25.setDEF(CString("Scene_BackView"));
Viewpoint25.setDescription(CString("Scene_Back View"));
Viewpoint25.setPosition(new float[]{0.0,1.5,-3.0});
Viewpoint25.setOrientation(new float[]{0.0,1.0,0.0,3.14});
Viewpoint25.setCenterOfRotation(new float[]{0.0,1.5,0.0});
Scene16.addChild(&Viewpoint25);

Viewpoint& Viewpoint26 =  Viewpoint();
Viewpoint26.setDEF(CString("Scene_TopView"));
Viewpoint26.setDescription(CString("Scene_Top View"));
Viewpoint26.setPosition(new float[]{0.0,3.5,0.0});
Viewpoint26.setOrientation(new float[]{1.0,0.0,0.0,-1.5708});
Viewpoint26.setCenterOfRotation(new float[]{0.0,1.5,0.0});
Scene16.addChild(&Viewpoint26);

Group& Group27 =  Group();
Group27.setDEF(CString("Joe_Humanoid"));
HAnimHumanoid& HAnimHumanoid28 =  HAnimHumanoid();
HAnimHumanoid28.setDEF(CString("Joe_Kick"));
HAnimHumanoid28.X3DNode::setName(CString("Kick"));
HAnimHumanoid28.setLoa(4);
MetadataSet& MetadataSet29 =  MetadataSet();
MetadataSet29.X3DNode::setName(CString("warnings"));
MetadataSet29.X3DNode::setReference(CString("HAnim"));
MetadataString& MetadataString30 =  MetadataString();
MetadataString30.X3DNode::setName(CString("SymmetricalLeftRight"));
MetadataString30.X3DNode::setReference(CString("correction options: ignore, warn, average, left, right, largest, smallest"));
MetadataString30.setValue(new CString[]{CString("ignore")}, 1);
MetadataSet29.setValue((X3DNode *)&MetadataString30);

HAnimHumanoid28.setMetadata(&MetadataSet29);

HAnimJoint& HAnimJoint31 =  HAnimJoint();
HAnimJoint31.setDEF(CString("Joe_humanoid_root"));
HAnimJoint31.X3DNode::setName(CString("humanoid_root"));
HAnimJoint31.setTranslation(new float[]{-0.1962198,0.1405496,0.1216488});
HAnimJoint31.setRotation(new float[]{-0.999999999999999,0.0,0.0,0.5});
HAnimJoint31.setCenter(new float[]{0.0,0.875,0.0});
HAnimSegment& HAnimSegment32 =  HAnimSegment();
HAnimSegment32.setDEF(CString("Joe_sacrum"));
HAnimSegment32.X3DNode::setName(CString("sacrum"));
HAnimSite& HAnimSite33 =  HAnimSite();
HAnimSite33.setDEF(CString("Joe_RootFront_view"));
HAnimSite33.X3DNode::setName(CString("RootFront_view"));
Transform& Transform34 =  Transform();
Transform34.setDEF(CString("hanimcordsys"));
Transform34.setScale(new float[]{0.175,0.175,0.175});
Viewpoint& Viewpoint35 =  Viewpoint();
Viewpoint35.setDEF(CString("ViewBodyRootAxes"));
Viewpoint35.setDescription(CString("Joe_HAnim Root HAnimSite Coordinate Axes View"));
Transform34.addChild(&Viewpoint35);

Shape& Shape36 =  Shape();
Shape36.setDEF(CString("AxisLinesShape"));
IndexedLineSet& IndexedLineSet37 =  IndexedLineSet();
IndexedLineSet37.setColorPerVertex(false);
IndexedLineSet37.setColorIndex(new int[]{0,1,2}, 3);
IndexedLineSet37.setCoordIndex(new int32_t[]{0,1,-1,0,2,-1,0,3,-1}, 9);
CColor& Color38 =  CColor();
Color38.setColor(new float[]{1.0,0.0,0.0,0.0,0.6,0.0,0.0,0.0,1.0}, 9);
IndexedLineSet37.setColor(&Color38);

Coordinate& Coordinate39 =  Coordinate();
Coordinate39.setPoint(new float[]{0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0}, 12);
IndexedLineSet37.setCoord(&Coordinate39);

Shape36.setGeometry(&IndexedLineSet37);

Transform34.addChild(&Shape36);

HAnimSite33.addChild(&Transform34);

HAnimSegment32.addChild(&HAnimSite33);

HAnimJoint31.addChildren(&HAnimSegment32);

HAnimJoint& HAnimJoint40 =  HAnimJoint();
HAnimJoint40.setDEF(CString("Joe_sacroiliac"));
HAnimJoint40.X3DNode::setName(CString("sacroiliac"));
HAnimJoint40.setCenter(new float[]{0.0,0.92,0.0});
HAnimJoint40.setSkinCoordIndex(new int32_t[]{17,19,20,21,22,23,26,27,73,82,89,91,93}, 13);
HAnimJoint40.setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,0.35,0.35,1.0}, 13);
HAnimJoint& HAnimJoint41 =  HAnimJoint();
HAnimJoint41.setDEF(CString("Joe_l_hip"));
HAnimJoint41.X3DNode::setName(CString("l_hip"));
HAnimJoint41.setRotation(new float[]{1.0,0.0,0.0,0.931269831413142});
HAnimJoint41.setCenter(new float[]{0.1,0.92,0.0});
HAnimJoint41.setSkinCoordIndex(new int32_t[]{89,90,94,95,96,97}, 6);
HAnimJoint41.setSkinCoordWeight(new float[]{0.65,1.0,1.0,1.0,1.0,1.0}, 6);
HAnimJoint& HAnimJoint42 =  HAnimJoint();
HAnimJoint42.setDEF(CString("Joe_l_knee"));
HAnimJoint42.X3DNode::setName(CString("l_knee"));
HAnimJoint42.setRotation(new float[]{0.998863602232125,0.0,0.0476602993681761,1.24505714055853});
HAnimJoint42.setCenter(new float[]{0.115,0.466,0.0});
HAnimJoint42.setSkinCoordIndex(new int32_t[]{334,335,336,337,338,339,340,341}, 8);
HAnimJoint42.setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 8);
HAnimJoint& HAnimJoint43 =  HAnimJoint();
HAnimJoint43.setDEF(CString("Joe_l_talocrural"));
HAnimJoint43.X3DNode::setName(CString("l_talocrural"));
HAnimJoint43.setRotation(new float[]{1.0,0.0,0.0,0.899195750554403});
HAnimJoint43.setCenter(new float[]{0.115,0.069,0.0});
HAnimJoint43.setSkinCoordIndex(new int32_t[]{342,343,344,345}, 4);
HAnimJoint43.setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0}, 4);
HAnimJoint& HAnimJoint44 =  HAnimJoint();
HAnimJoint44.setDEF(CString("Joe_l_tarsometatarsal_2"));
HAnimJoint44.X3DNode::setName(CString("l_tarsometatarsal_2"));
HAnimJoint44.setCenter(new float[]{0.115,0.031,0.03});
HAnimJoint44.setSkinCoordIndex(new int32_t[]{346,347,348,71}, 4);
HAnimJoint44.setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0}, 4);
HAnimJoint& HAnimJoint45 =  HAnimJoint();
HAnimJoint45.setDEF(CString("Joe_l_metatarsophalangeal_2"));
HAnimJoint45.X3DNode::setName(CString("l_metatarsophalangeal_2"));
HAnimJoint45.setCenter(new float[]{0.115,0.037,0.09});
HAnimJoint45.setSkinCoordIndex(new int32_t[]{349,350,351,352}, 4);
HAnimJoint45.setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0}, 4);
HAnimJoint& HAnimJoint46 =  HAnimJoint();
HAnimJoint46.setDEF(CString("Joe_l_tarsal_distal_interphalangeal_2"));
HAnimJoint46.X3DNode::setName(CString("l_tarsal_distal_interphalangeal_2"));
HAnimJoint46.setCenter(new float[]{0.115,0.02,0.122});
HAnimJoint46.setSkinCoordIndex(new int32_t[]{353,354,355,356,357,358,359,360,361}, 9);
HAnimJoint46.setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 9);
HAnimJoint45.addChildren(&HAnimJoint46);

HAnimJoint44.addChildren(&HAnimJoint45);

HAnimJoint43.addChildren(&HAnimJoint44);

HAnimJoint42.addChildren(&HAnimJoint43);

HAnimJoint41.addChildren(&HAnimJoint42);

HAnimJoint40.addChildren(&HAnimJoint41);

HAnimJoint& HAnimJoint47 =  HAnimJoint();
HAnimJoint47.setDEF(CString("Joe_r_hip"));
HAnimJoint47.X3DNode::setName(CString("r_hip"));
HAnimJoint47.setRotation(new float[]{-1.0,0.0,0.0,1.0});
HAnimJoint47.setCenter(new float[]{-0.1,0.92,0.0});
HAnimJoint47.setSkinCoordIndex(new int32_t[]{91,92,98,99,100,101,362,363}, 8);
HAnimJoint47.setSkinCoordWeight(new float[]{0.65,1.0,0.8,1.0,1.0,1.0,0.4,0.8}, 8);
HAnimJoint& HAnimJoint48 =  HAnimJoint();
HAnimJoint48.setDEF(CString("Joe_r_knee"));
HAnimJoint48.X3DNode::setName(CString("r_knee"));
HAnimJoint48.setRotation(new float[]{1.0,0.0,0.0,1.3487936258316});
HAnimJoint48.setCenter(new float[]{-0.05,0.466,0.0});
HAnimJoint48.setSkinCoordIndex(new int32_t[]{362,363,364,365,366,367,368,369,98}, 9);
HAnimJoint48.setSkinCoordWeight(new float[]{0.6,0.2,1.0,1.0,1.0,1.0,1.0,1.0,0.2}, 9);
HAnimJoint& HAnimJoint49 =  HAnimJoint();
HAnimJoint49.setDEF(CString("Joe_r_talocrural"));
HAnimJoint49.X3DNode::setName(CString("r_talocrural"));
HAnimJoint49.setRotation(new float[]{1.0,0.0,0.0,0.651206374168395});
HAnimJoint49.setCenter(new float[]{-0.115,0.069,0.0});
HAnimJoint49.setSkinCoordIndex(new int32_t[]{370,371,372,373}, 4);
HAnimJoint49.setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0}, 4);
HAnimJoint& HAnimJoint50 =  HAnimJoint();
HAnimJoint50.setDEF(CString("Joe_r_tarsometatarsal_2"));
HAnimJoint50.X3DNode::setName(CString("r_tarsometatarsal_2"));
HAnimJoint50.setCenter(new float[]{-0.1,0.015,-0.01});
HAnimJoint50.setSkinCoordIndex(new int32_t[]{374,375,376}, 3);
HAnimJoint50.setSkinCoordWeight(new float[]{1.0,1.0,1.0}, 3);
HAnimJoint& HAnimJoint51 =  HAnimJoint();
HAnimJoint51.setDEF(CString("Joe_r_metatarsophalangeal_2"));
HAnimJoint51.X3DNode::setName(CString("r_metatarsophalangeal_2"));
HAnimJoint51.setCenter(new float[]{-0.115,0.037,0.09});
HAnimJoint51.setSkinCoordIndex(new int32_t[]{377,378,379,380}, 4);
HAnimJoint51.setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0}, 4);
HAnimJoint& HAnimJoint52 =  HAnimJoint();
HAnimJoint52.setDEF(CString("Joe_r_tarsal_distal_interphalangeal_2"));
HAnimJoint52.X3DNode::setName(CString("r_tarsal_distal_interphalangeal_2"));
HAnimJoint52.setCenter(new float[]{-0.1,0.01,0.14});
HAnimJoint52.setSkinCoordIndex(new int32_t[]{381,382,383,384,385,386,387,388,389}, 9);
HAnimJoint52.setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 9);
HAnimJoint51.addChildren(&HAnimJoint52);

HAnimJoint50.addChildren(&HAnimJoint51);

HAnimJoint49.addChildren(&HAnimJoint50);

HAnimJoint48.addChildren(&HAnimJoint49);

HAnimJoint47.addChildren(&HAnimJoint48);

HAnimJoint40.addChildren(&HAnimJoint47);

HAnimJoint31.addChildren(&HAnimJoint40);

HAnimJoint& HAnimJoint53 =  HAnimJoint();
HAnimJoint53.setDEF(CString("Joe_vl5"));
HAnimJoint53.X3DNode::setName(CString("vl5"));
HAnimJoint53.setCenter(new float[]{0.0,1.045,-0.095});
HAnimJoint53.setSkinCoordIndex(new int32_t[]{28,76}, 2);
HAnimJoint53.setSkinCoordWeight(new float[]{1.0,1.0}, 2);
HAnimJoint& HAnimJoint54 =  HAnimJoint();
HAnimJoint54.setDEF(CString("Joe_vl4"));
HAnimJoint54.X3DNode::setName(CString("vl4"));
HAnimJoint54.setCenter(new float[]{0.0,1.068,-0.085});
HAnimJoint& HAnimJoint55 =  HAnimJoint();
HAnimJoint55.setDEF(CString("Joe_vl3"));
HAnimJoint55.X3DNode::setName(CString("vl3"));
HAnimJoint55.setCenter(new float[]{0.0,1.092,-0.0725});
HAnimJoint& HAnimJoint56 =  HAnimJoint();
HAnimJoint56.setDEF(CString("Joe_vl2"));
HAnimJoint56.X3DNode::setName(CString("vl2"));
HAnimJoint56.setCenter(new float[]{0.0,1.12,-0.065});
HAnimJoint56.setSkinCoordIndex(new int32_t[]{16,18,25,83,84,85,86,87,88}, 9);
HAnimJoint56.setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,0.7,1.0,0.8}, 9);
HAnimJoint& HAnimJoint57 =  HAnimJoint();
HAnimJoint57.setDEF(CString("Joe_vl1"));
HAnimJoint57.X3DNode::setName(CString("vl1"));
HAnimJoint57.setCenter(new float[]{0.0,1.1459,-0.0625});
HAnimJoint& HAnimJoint58 =  HAnimJoint();
HAnimJoint58.setDEF(CString("Joe_vt12"));
HAnimJoint58.X3DNode::setName(CString("vt12"));
HAnimJoint58.setCenter(new float[]{0.0,1.179,-0.068});
HAnimJoint& HAnimJoint59 =  HAnimJoint();
HAnimJoint59.setDEF(CString("Joe_vt11"));
HAnimJoint59.X3DNode::setName(CString("vt11"));
HAnimJoint59.setCenter(new float[]{0.0,1.2679,-0.081});
HAnimJoint& HAnimJoint60 =  HAnimJoint();
HAnimJoint60.setDEF(CString("Joe_vt10"));
HAnimJoint60.X3DNode::setName(CString("vt10"));
HAnimJoint60.setCenter(new float[]{0.0,1.242,-0.09});
HAnimJoint60.setSkinCoordIndex(new int32_t[]{15}, 1);
HAnimJoint60.setSkinCoordWeight(new float[]{1.0}, 1);
HAnimJoint& HAnimJoint61 =  HAnimJoint();
HAnimJoint61.setDEF(CString("Joe_vt9"));
HAnimJoint61.X3DNode::setName(CString("vt9"));
HAnimJoint61.setCenter(new float[]{0.0,1.268,-0.1});
HAnimJoint61.setSkinCoordIndex(new int32_t[]{13,14}, 2);
HAnimJoint61.setSkinCoordWeight(new float[]{1.0,1.0}, 2);
HAnimJoint& HAnimJoint62 =  HAnimJoint();
HAnimJoint62.setDEF(CString("Joe_vt8"));
HAnimJoint62.X3DNode::setName(CString("vt8"));
HAnimJoint62.setCenter(new float[]{0.0,1.294,-0.11});
HAnimJoint& HAnimJoint63 =  HAnimJoint();
HAnimJoint63.setDEF(CString("Joe_vt7"));
HAnimJoint63.X3DNode::setName(CString("vt7"));
HAnimJoint63.setCenter(new float[]{0.0,1.323,-0.1155});
HAnimJoint& HAnimJoint64 =  HAnimJoint();
HAnimJoint64.setDEF(CString("Joe_vt6"));
HAnimJoint64.X3DNode::setName(CString("vt6"));
HAnimJoint64.setCenter(new float[]{0.0,1.352,-0.12});
HAnimJoint& HAnimJoint65 =  HAnimJoint();
HAnimJoint65.setDEF(CString("Joe_vt5"));
HAnimJoint65.X3DNode::setName(CString("vt5"));
HAnimJoint65.setCenter(new float[]{0.0,1.381,-0.1235});
HAnimJoint& HAnimJoint66 =  HAnimJoint();
HAnimJoint66.setDEF(CString("Joe_vt4"));
HAnimJoint66.X3DNode::setName(CString("vt4"));
HAnimJoint66.setCenter(new float[]{0.0,1.41,-0.1235});
HAnimJoint66.setSkinCoordIndex(new int32_t[]{81}, 1);
HAnimJoint66.setSkinCoordWeight(new float[]{1.0}, 1);
HAnimJoint& HAnimJoint67 =  HAnimJoint();
HAnimJoint67.setDEF(CString("Joe_vt3"));
HAnimJoint67.X3DNode::setName(CString("vt3"));
HAnimJoint67.setCenter(new float[]{0.0,1.438,-0.12});
HAnimJoint& HAnimJoint68 =  HAnimJoint();
HAnimJoint68.setDEF(CString("Joe_vt2"));
HAnimJoint68.X3DNode::setName(CString("vt2"));
HAnimJoint68.setCenter(new float[]{0.0,1.468,-0.105});
HAnimJoint& HAnimJoint69 =  HAnimJoint();
HAnimJoint69.setDEF(CString("Joe_vt1"));
HAnimJoint69.X3DNode::setName(CString("vt1"));
HAnimJoint69.setCenter(new float[]{0.0,1.497,-0.09});
HAnimJoint69.setSkinCoordIndex(new int32_t[]{11,24}, 2);
HAnimJoint69.setSkinCoordWeight(new float[]{1.0,1.0}, 2);
HAnimJoint& HAnimJoint70 =  HAnimJoint();
HAnimJoint70.setDEF(CString("Joe_vc7"));
HAnimJoint70.X3DNode::setName(CString("vc7"));
HAnimJoint70.setCenter(new float[]{0.0,1.525,-0.072});
HAnimJoint70.setSkinCoordIndex(new int32_t[]{74,75}, 2);
HAnimJoint70.setSkinCoordWeight(new float[]{1.0,1.0}, 2);
HAnimJoint& HAnimJoint71 =  HAnimJoint();
HAnimJoint71.setDEF(CString("Joe_vc6"));
HAnimJoint71.X3DNode::setName(CString("vc6"));
HAnimJoint71.setCenter(new float[]{0.0,1.54,-0.05});
HAnimJoint& HAnimJoint72 =  HAnimJoint();
HAnimJoint72.setDEF(CString("Joe_vc5"));
HAnimJoint72.X3DNode::setName(CString("vc5"));
HAnimJoint72.setCenter(new float[]{0.0,1.552,-0.035});
HAnimJoint& HAnimJoint73 =  HAnimJoint();
HAnimJoint73.setDEF(CString("Joe_vc4"));
HAnimJoint73.X3DNode::setName(CString("vc4"));
HAnimJoint73.setRotation(new float[]{0.79363313197937,0.0,0.608396623778117,0.509491241300095});
HAnimJoint73.setCenter(new float[]{0.0,1.5675,-0.0256});
HAnimJoint& HAnimJoint74 =  HAnimJoint();
HAnimJoint74.setDEF(CString("Joe_vc3"));
HAnimJoint74.X3DNode::setName(CString("vc3"));
HAnimJoint74.setCenter(new float[]{0.0,1.58225,-0.0185});
HAnimJoint& HAnimJoint75 =  HAnimJoint();
HAnimJoint75.setDEF(CString("Joe_vc2"));
HAnimJoint75.X3DNode::setName(CString("vc2"));
HAnimJoint75.setCenter(new float[]{0.0,1.595,-0.0175});
HAnimJoint& HAnimJoint76 =  HAnimJoint();
HAnimJoint76.setDEF(CString("Joe_vc1"));
HAnimJoint76.X3DNode::setName(CString("vc1"));
HAnimJoint76.setCenter(new float[]{0.0,1.61,-0.015});
HAnimJoint& HAnimJoint77 =  HAnimJoint();
HAnimJoint77.setDEF(CString("Joe_skullbase"));
HAnimJoint77.X3DNode::setName(CString("skullbase"));
HAnimJoint77.setRotation(new float[]{0.0,0.999999999999988,0.0,0.244155538082126});
HAnimJoint77.setCenter(new float[]{0.0,1.63,-0.01});
HAnimJoint77.setSkinCoordIndex(new int32_t[]{0,1,2,3,4,5,6,7,8,9}, 10);
HAnimJoint77.setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 10);
HAnimDisplacer& HAnimDisplacer78 =  HAnimDisplacer();
HAnimDisplacer78.setDEF(CString("Joe_skull_tip_raiser_action"));
HAnimDisplacer78.X3DNode::setName(CString("skull_tip_raiser_action"));
HAnimDisplacer78.setWeight(0.7399469);
HAnimDisplacer78.setCoordIndex(new int32_t[]{0,1,2,3,4,5,6,7,8,9}, 10);
HAnimDisplacer78.setDisplacements(new float[]{0.0,0.15,0.0,0.0,0.0,0.15,-0.1,0.0,0.15,0.1,0.0,0.05,0.0,-0.02,0.05,-0.15,0.0,0.0,-0.05,0.0,0.0,0.15,0.0,0.0,0.05,0.0,0.0,0.0,0.0,-0.15}, 30);
HAnimJoint77.setDisplacers(HAnimDisplacer78);

HAnimJoint& HAnimJoint79 =  HAnimJoint();
HAnimJoint79.setDEF(CString("Joe_l_eyelid_joint"));
HAnimJoint79.X3DNode::setName(CString("l_eyelid_joint"));
HAnimJoint79.setCenter(new float[]{0.034,1.659,0.06});
HAnimJoint77.addChildren(&HAnimJoint79);

HAnimJoint& HAnimJoint80 =  HAnimJoint();
HAnimJoint80.setDEF(CString("Joe_l_eyeball_joint"));
HAnimJoint80.X3DNode::setName(CString("l_eyeball_joint"));
HAnimJoint80.setCenter(new float[]{0.034,1.659,0.06});
HAnimJoint77.addChildren(&HAnimJoint80);

HAnimJoint& HAnimJoint81 =  HAnimJoint();
HAnimJoint81.setDEF(CString("Joe_l_eyebrow_joint"));
HAnimJoint81.X3DNode::setName(CString("l_eyebrow_joint"));
HAnimJoint81.setCenter(new float[]{0.034,1.659,0.06});
HAnimJoint77.addChildren(&HAnimJoint81);

HAnimJoint& HAnimJoint82 =  HAnimJoint();
HAnimJoint82.setDEF(CString("Joe_r_eyelid_joint"));
HAnimJoint82.X3DNode::setName(CString("r_eyelid_joint"));
HAnimJoint82.setCenter(new float[]{-0.034,1.659,0.06});
HAnimJoint77.addChildren(&HAnimJoint82);

HAnimJoint& HAnimJoint83 =  HAnimJoint();
HAnimJoint83.setDEF(CString("Joe_r_eyeball_joint"));
HAnimJoint83.X3DNode::setName(CString("r_eyeball_joint"));
HAnimJoint83.setCenter(new float[]{-0.034,1.659,0.06});
HAnimJoint77.addChildren(&HAnimJoint83);

HAnimJoint& HAnimJoint84 =  HAnimJoint();
HAnimJoint84.setDEF(CString("Joe_r_eyebrow_joint"));
HAnimJoint84.X3DNode::setName(CString("r_eyebrow_joint"));
HAnimJoint84.setCenter(new float[]{-0.034,1.659,0.06});
HAnimJoint77.addChildren(&HAnimJoint84);

HAnimJoint& HAnimJoint85 =  HAnimJoint();
HAnimJoint85.setDEF(CString("Joe_temporomandibular"));
HAnimJoint85.X3DNode::setName(CString("temporomandibular"));
HAnimJoint85.setCenter(new float[]{0.034,1.659,0.06});
HAnimJoint77.addChildren(&HAnimJoint85);

HAnimJoint76.addChildren(&HAnimJoint77);

HAnimJoint75.addChildren(&HAnimJoint76);

HAnimJoint74.addChildren(&HAnimJoint75);

HAnimJoint73.addChildren(&HAnimJoint74);

HAnimJoint72.addChildren(&HAnimJoint73);

HAnimJoint71.addChildren(&HAnimJoint72);

HAnimJoint70.addChildren(&HAnimJoint71);

HAnimJoint69.addChildren(&HAnimJoint70);

HAnimJoint& HAnimJoint86 =  HAnimJoint();
HAnimJoint86.setDEF(CString("Joe_l_acromioclavicular"));
HAnimJoint86.X3DNode::setName(CString("l_acromioclavicular"));
HAnimJoint86.setCenter(new float[]{0.082,1.4488,-0.0353});
HAnimJoint86.setSkinCoordIndex(new int32_t[]{12}, 1);
HAnimJoint86.setSkinCoordWeight(new float[]{1.0}, 1);
HAnimJoint& HAnimJoint87 =  HAnimJoint();
HAnimJoint87.setDEF(CString("Joe_l_sternoclavicular"));
HAnimJoint87.X3DNode::setName(CString("l_sternoclavicular"));
HAnimJoint87.setCenter(new float[]{0.0962,1.4269,-0.0424});
HAnimJoint87.setSkinCoordIndex(new int32_t[]{79}, 1);
HAnimJoint87.setSkinCoordWeight(new float[]{1.0}, 1);
HAnimJoint& HAnimJoint88 =  HAnimJoint();
HAnimJoint88.setDEF(CString("Joe_l_shoulder"));
HAnimJoint88.X3DNode::setName(CString("l_shoulder"));
HAnimJoint88.setRotation(new float[]{-0.643733224193946,0.0,0.765249982730394,1.6862643538567});
HAnimJoint88.setCenter(new float[]{0.2,1.44,-0.04});
HAnimJoint88.setSkinCoordIndex(new int32_t[]{41,42,44,80,102,103,104,105}, 8);
HAnimJoint88.setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 8);
HAnimJoint& HAnimJoint89 =  HAnimJoint();
HAnimJoint89.setDEF(CString("Joe_l_elbow"));
HAnimJoint89.X3DNode::setName(CString("l_elbow"));
HAnimJoint89.setRotation(new float[]{-0.80893714343502,-0.587895141986384,0.0,0.512375525586369});
HAnimJoint89.setCenter(new float[]{0.2,1.1388,-0.04});
HAnimJoint89.setSkinCoordIndex(new int32_t[]{45,46,47,109,110,111,112,113,115,116,117,118}, 12);
HAnimJoint89.setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 15);
HAnimJoint& HAnimJoint90 =  HAnimJoint();
HAnimJoint90.setDEF(CString("Joe_l_radiocarpal"));
HAnimJoint90.X3DNode::setName(CString("l_radiocarpal"));
HAnimJoint90.setRotation(new float[]{0.0,-0.447213595499958,0.894427190999917,0.491420745338246});
HAnimJoint90.setCenter(new float[]{0.2,0.87,-0.04});
HAnimJoint90.setSkinCoordIndex(new int32_t[]{119,120,121,122,123,124,125,126}, 8);
HAnimJoint90.setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 8);
HAnimJoint& HAnimJoint91 =  HAnimJoint();
HAnimJoint91.setDEF(CString("Joe_l_carpometacarpal_1"));
HAnimJoint91.X3DNode::setName(CString("l_carpometacarpal_1"));
HAnimJoint91.setCenter(new float[]{0.1924,0.8472,-0.0534});
HAnimJoint91.setSkinCoordIndex(new int32_t[]{127,128}, 2);
HAnimJoint91.setSkinCoordWeight(new float[]{1.0,1.0}, 2);
HAnimJoint& HAnimJoint92 =  HAnimJoint();
HAnimJoint92.setDEF(CString("Joe_l_metacarpophalangeal_1"));
HAnimJoint92.X3DNode::setName(CString("l_metacarpophalangeal_1"));
HAnimJoint92.setCenter(new float[]{0.1951,0.8226,0.0246});
HAnimJoint92.setSkinCoordIndex(new int32_t[]{138,139,140,141,142,143}, 6);
HAnimJoint92.setSkinCoordWeight(new float[]{0.5,0.5,0.5,1.0,1.0,1.0}, 6);
HAnimJoint& HAnimJoint93 =  HAnimJoint();
HAnimJoint93.setDEF(CString("Joe_l_carpal_interphalangeal_1"));
HAnimJoint93.X3DNode::setName(CString("l_carpal_interphalangeal_1"));
HAnimJoint93.setCenter(new float[]{0.1955,0.8159,0.0464});
HAnimJoint93.setSkinCoordIndex(new int32_t[]{144,145,146,147,148,149,150,151,152}, 9);
HAnimJoint93.setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 9);
HAnimJoint92.addChildren(&HAnimJoint93);

HAnimJoint91.addChildren(&HAnimJoint92);

HAnimJoint90.addChildren(&HAnimJoint91);

HAnimJoint& HAnimJoint94 =  HAnimJoint();
HAnimJoint94.setDEF(CString("Joe_l_carpometacarpal_2"));
HAnimJoint94.X3DNode::setName(CString("l_carpometacarpal_2"));
HAnimJoint94.setCenter(new float[]{0.1983,0.8024,-0.028});
HAnimJoint94.setSkinCoordIndex(new int32_t[]{129,130}, 2);
HAnimJoint94.setSkinCoordWeight(new float[]{1.0,1.0}, 2);
HAnimJoint& HAnimJoint95 =  HAnimJoint();
HAnimJoint95.setDEF(CString("Joe_l_metacarpophalangeal_2"));
HAnimJoint95.X3DNode::setName(CString("l_metacarpophalangeal_2"));
HAnimJoint95.setCenter(new float[]{0.1983,0.7815,-0.028});
HAnimJoint95.setSkinCoordIndex(new int32_t[]{138,139,140,153,154,155,163}, 7);
HAnimJoint95.setSkinCoordWeight(new float[]{0.5,0.5,0.5,1.0,1.0,1.0,0.5}, 7);
HAnimJoint& HAnimJoint96 =  HAnimJoint();
HAnimJoint96.setDEF(CString("Joe_l_carpal_proximal_interphalangeal_2"));
HAnimJoint96.X3DNode::setName(CString("l_carpal_proximal_interphalangeal_2"));
HAnimJoint96.setCenter(new float[]{0.2017,0.7363,-0.0248});
HAnimJoint96.setSkinCoordIndex(new int32_t[]{166,167,168,169}, 4);
HAnimJoint96.setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0}, 4);
HAnimJoint& HAnimJoint97 =  HAnimJoint();
HAnimJoint97.setDEF(CString("Joe_l_carpal_distal_interphalangeal_2"));
HAnimJoint97.X3DNode::setName(CString("l_carpal_distal_interphalangeal_2"));
HAnimJoint97.setCenter(new float[]{0.2028,0.7139,-0.0236});
HAnimJoint97.setSkinCoordIndex(new int32_t[]{170,171,172,173,174,175,176,177,178}, 9);
HAnimJoint97.setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 9);
HAnimJoint96.addChildren(&HAnimJoint97);

HAnimJoint95.addChildren(&HAnimJoint96);

HAnimJoint94.addChildren(&HAnimJoint95);

HAnimJoint90.addChildren(&HAnimJoint94);

HAnimJoint& HAnimJoint98 =  HAnimJoint();
HAnimJoint98.setDEF(CString("Joe_l_carpometacarpal_3"));
HAnimJoint98.X3DNode::setName(CString("l_carpometacarpal_3"));
HAnimJoint98.setCenter(new float[]{0.1987,0.8029,-0.053});
HAnimJoint98.setSkinCoordIndex(new int32_t[]{131,132}, 2);
HAnimJoint98.setSkinCoordWeight(new float[]{1.0,1.0}, 2);
HAnimJoint& HAnimJoint99 =  HAnimJoint();
HAnimJoint99.setDEF(CString("Joe_l_metacarpophalangeal_3"));
HAnimJoint99.X3DNode::setName(CString("l_metacarpophalangeal_3"));
HAnimJoint99.setCenter(new float[]{0.1987,0.7818,-0.053});
HAnimJoint99.setSkinCoordIndex(new int32_t[]{156,157,163,164}, 4);
HAnimJoint99.setSkinCoordWeight(new float[]{1.0,1.0,0.5,0.5}, 4);
HAnimJoint& HAnimJoint100 =  HAnimJoint();
HAnimJoint100.setDEF(CString("Joe_l_carpal_proximal_interphalangeal_3"));
HAnimJoint100.X3DNode::setName(CString("l_carpal_proximal_interphalangeal_3"));
HAnimJoint100.setCenter(new float[]{0.2013,0.7273,-0.0503});
HAnimJoint100.setSkinCoordIndex(new int32_t[]{179,180,181,182}, 4);
HAnimJoint100.setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0}, 4);
HAnimJoint& HAnimJoint101 =  HAnimJoint();
HAnimJoint101.setDEF(CString("Joe_l_carpal_distal_interphalangeal_3"));
HAnimJoint101.X3DNode::setName(CString("l_carpal_distal_interphalangeal_3"));
HAnimJoint101.setCenter(new float[]{0.2026,0.7011,-0.0494});
HAnimJoint101.setSkinCoordIndex(new int32_t[]{183,184,185,186,187,188,189,190,191}, 9);
HAnimJoint101.setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 9);
HAnimJoint100.addChildren(&HAnimJoint101);

HAnimJoint99.addChildren(&HAnimJoint100);

HAnimJoint98.addChildren(&HAnimJoint99);

HAnimJoint90.addChildren(&HAnimJoint98);

HAnimJoint& HAnimJoint102 =  HAnimJoint();
HAnimJoint102.setDEF(CString("Joe_l_carpometacarpal_4"));
HAnimJoint102.X3DNode::setName(CString("l_carpometacarpal_4"));
HAnimJoint102.setCenter(new float[]{0.1956,0.8019,-0.0794});
HAnimJoint102.setSkinCoordIndex(new int32_t[]{133,134}, 2);
HAnimJoint102.setSkinCoordWeight(new float[]{1.0,1.0}, 2);
HAnimJoint& HAnimJoint103 =  HAnimJoint();
HAnimJoint103.setDEF(CString("Joe_l_metacarpophalangeal_4"));
HAnimJoint103.X3DNode::setName(CString("l_metacarpophalangeal_4"));
HAnimJoint103.setCenter(new float[]{0.1956,0.7815,-0.0794});
HAnimJoint103.setSkinCoordIndex(new int32_t[]{158,159,164,165}, 4);
HAnimJoint103.setSkinCoordWeight(new float[]{1.0,1.0,0.5,0.5}, 4);
HAnimJoint& HAnimJoint104 =  HAnimJoint();
HAnimJoint104.setDEF(CString("Joe_l_carpal_proximal_interphalangeal_4"));
HAnimJoint104.X3DNode::setName(CString("l_carpal_proximal_interphalangeal_4"));
HAnimJoint104.setCenter(new float[]{0.1973,0.7287,-0.0777});
HAnimJoint104.setSkinCoordIndex(new int32_t[]{192,193,194,195}, 4);
HAnimJoint104.setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0}, 4);
HAnimJoint& HAnimJoint105 =  HAnimJoint();
HAnimJoint105.setDEF(CString("Joe_l_carpal_distal_interphalangeal_4"));
HAnimJoint105.X3DNode::setName(CString("l_carpal_distal_interphalangeal_4"));
HAnimJoint105.setCenter(new float[]{0.1983,0.7045,-0.0767});
HAnimJoint105.setSkinCoordIndex(new int32_t[]{196,197,198,199,200,201,202,203,204}, 9);
HAnimJoint105.setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 9);
HAnimJoint104.addChildren(&HAnimJoint105);

HAnimJoint103.addChildren(&HAnimJoint104);

HAnimJoint102.addChildren(&HAnimJoint103);

HAnimJoint90.addChildren(&HAnimJoint102);

HAnimJoint& HAnimJoint106 =  HAnimJoint();
HAnimJoint106.setDEF(CString("Joe_l_carpometacarpal_5"));
HAnimJoint106.X3DNode::setName(CString("l_carpometacarpal_5"));
HAnimJoint106.setCenter(new float[]{0.1925,0.8066,-0.1036});
HAnimJoint106.setSkinCoordIndex(new int32_t[]{135,136,137,165}, 4);
HAnimJoint106.setSkinCoordWeight(new float[]{1.0,1.0,1.0,0.5}, 4);
HAnimJoint& HAnimJoint107 =  HAnimJoint();
HAnimJoint107.setDEF(CString("Joe_l_metacarpophalangeal_5"));
HAnimJoint107.X3DNode::setName(CString("l_metacarpophalangeal_5"));
HAnimJoint107.setCenter(new float[]{0.1925,0.7866,-0.1036});
HAnimJoint107.setSkinCoordIndex(new int32_t[]{160,161,162}, 3);
HAnimJoint107.setSkinCoordWeight(new float[]{1.0,1.0,1.0}, 3);
HAnimJoint& HAnimJoint108 =  HAnimJoint();
HAnimJoint108.setDEF(CString("Joe_l_carpal_proximal_interphalangeal_5"));
HAnimJoint108.X3DNode::setName(CString("l_carpal_proximal_interphalangeal_5"));
HAnimJoint108.setCenter(new float[]{0.1938,0.7452,-0.1024});
HAnimJoint108.setSkinCoordIndex(new int32_t[]{205,206,207,208}, 4);
HAnimJoint108.setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0}, 4);
HAnimJoint& HAnimJoint109 =  HAnimJoint();
HAnimJoint109.setDEF(CString("Joe_l_carpal_distal_interphalangeal_5"));
HAnimJoint109.X3DNode::setName(CString("l_carpal_distal_interphalangeal_5"));
HAnimJoint109.setCenter(new float[]{0.1948,0.7277,-0.1017});
HAnimJoint109.setSkinCoordIndex(new int32_t[]{209,210,211,212,213,214,215,216,217}, 9);
HAnimJoint109.setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 9);
HAnimJoint108.addChildren(&HAnimJoint109);

HAnimJoint107.addChildren(&HAnimJoint108);

HAnimJoint106.addChildren(&HAnimJoint107);

HAnimJoint90.addChildren(&HAnimJoint106);

HAnimJoint89.addChildren(&HAnimJoint90);

HAnimJoint88.addChildren(&HAnimJoint89);

HAnimJoint87.addChildren(&HAnimJoint88);

HAnimJoint86.addChildren(&HAnimJoint87);

HAnimJoint69.addChildren(&HAnimJoint86);

HAnimJoint& HAnimJoint110 =  HAnimJoint();
HAnimJoint110.setDEF(CString("Joe_r_sternoclavicular"));
HAnimJoint110.X3DNode::setName(CString("r_sternoclavicular"));
HAnimJoint110.setCenter(new float[]{-0.03,1.46,0.0});
HAnimJoint110.setSkinCoordIndex(new int32_t[]{10}, 1);
HAnimJoint110.setSkinCoordWeight(new float[]{1.0}, 1);
HAnimJoint& HAnimJoint111 =  HAnimJoint();
HAnimJoint111.setDEF(CString("Joe_r_acromioclavicular"));
HAnimJoint111.X3DNode::setName(CString("r_acromioclavicular"));
HAnimJoint111.setCenter(new float[]{-0.09,1.41,-0.11});
HAnimJoint111.setSkinCoordIndex(new int32_t[]{77,29}, 2);
HAnimJoint111.setSkinCoordWeight(new float[]{1.0,0.9}, 2);
HAnimJoint& HAnimJoint112 =  HAnimJoint();
HAnimJoint112.setDEF(CString("Joe_r_shoulder"));
HAnimJoint112.X3DNode::setName(CString("r_shoulder"));
HAnimJoint112.setRotation(new float[]{0.0,0.0,-1.0,1.7121984064579});
HAnimJoint112.setCenter(new float[]{-0.2,1.44,-0.04});
HAnimJoint112.setSkinCoordIndex(new int32_t[]{29,30,32,78,218,219,220,221,86,88}, 10);
HAnimJoint112.setSkinCoordWeight(new float[]{0.1,1.0,1.0,1.0,1.0,1.0,1.0,1.0,0.3,0.2}, 10);
HAnimJoint& HAnimJoint113 =  HAnimJoint();
HAnimJoint113.setDEF(CString("Joe_r_elbow"));
HAnimJoint113.X3DNode::setName(CString("r_elbow"));
HAnimJoint113.setRotation(new float[]{-0.80893714343502,-0.587895141986384,0.0,0.512375525586369});
HAnimJoint113.setCenter(new float[]{-0.2,1.1388,-0.04});
HAnimJoint113.setSkinCoordIndex(new int32_t[]{33,34,35,225,226,227,228,229,231,232,233,234}, 12);
HAnimJoint113.setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 12);
HAnimJoint& HAnimJoint114 =  HAnimJoint();
HAnimJoint114.setDEF(CString("Joe_r_radiocarpal"));
HAnimJoint114.X3DNode::setName(CString("r_radiocarpal"));
HAnimJoint114.setRotation(new float[]{0.0,-0.670839596599646,-0.741602478174135,0.341691938879626});
HAnimJoint114.setCenter(new float[]{-0.2,0.89,-0.04});
HAnimJoint114.setSkinCoordIndex(new int32_t[]{235,236,237,238,239,240,241,242}, 8);
HAnimJoint114.setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 8);
HAnimJoint& HAnimJoint115 =  HAnimJoint();
HAnimJoint115.setDEF(CString("Joe_r_carpometacarpal_1"));
HAnimJoint115.X3DNode::setName(CString("r_carpometacarpal_1"));
HAnimJoint115.setCenter(new float[]{-0.2,0.85,0.0});
HAnimJoint115.setSkinCoordIndex(new int32_t[]{243,244}, 2);
HAnimJoint115.setSkinCoordWeight(new float[]{1.0,1.0}, 2);
HAnimJoint& HAnimJoint116 =  HAnimJoint();
HAnimJoint116.setDEF(CString("Joe_r_metacarpophalangeal_1"));
HAnimJoint116.X3DNode::setName(CString("r_metacarpophalangeal_1"));
HAnimJoint116.setCenter(new float[]{-0.2,0.82,0.03});
HAnimJoint116.setSkinCoordIndex(new int32_t[]{254,255,256,257,258,259}, 6);
HAnimJoint116.setSkinCoordWeight(new float[]{0.5,0.5,0.5,1.0,1.0,1.0}, 6);
HAnimJoint& HAnimJoint117 =  HAnimJoint();
HAnimJoint117.setDEF(CString("Joe_r_carpal_interphalangeal_1"));
HAnimJoint117.X3DNode::setName(CString("r_carpal_interphalangeal_1"));
HAnimJoint117.setCenter(new float[]{-0.2,0.8,0.05});
HAnimJoint117.setSkinCoordIndex(new int32_t[]{260,261,262,263,264,265,266,267,268}, 9);
HAnimJoint117.setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 9);
HAnimJoint116.addChildren(&HAnimJoint117);

HAnimJoint115.addChildren(&HAnimJoint116);

HAnimJoint114.addChildren(&HAnimJoint115);

HAnimJoint& HAnimJoint118 =  HAnimJoint();
HAnimJoint118.setDEF(CString("Joe_r_carpometacarpal_2"));
HAnimJoint118.X3DNode::setName(CString("r_carpometacarpal_2"));
HAnimJoint118.setRotation(new float[]{0.0,0.0,1.0,0.302412748336791});
HAnimJoint118.setCenter(new float[]{-0.2,0.84,-0.015});
HAnimJoint118.setSkinCoordIndex(new int32_t[]{245,246}, 2);
HAnimJoint118.setSkinCoordWeight(new float[]{1.0,1.0}, 2);
HAnimJoint& HAnimJoint119 =  HAnimJoint();
HAnimJoint119.setDEF(CString("Joe_r_metacarpophalangeal_2"));
HAnimJoint119.X3DNode::setName(CString("r_metacarpophalangeal_2"));
HAnimJoint119.setRotation(new float[]{0.0,0.0,1.0,0.453619122505188});
HAnimJoint119.setCenter(new float[]{-0.2,0.793,-0.015});
HAnimJoint119.setSkinCoordIndex(new int32_t[]{254,255,256,269,270,271,279}, 7);
HAnimJoint119.setSkinCoordWeight(new float[]{0.5,0.5,0.5,1.0,1.0,1.0,0.5}, 7);
HAnimJoint& HAnimJoint120 =  HAnimJoint();
HAnimJoint120.setDEF(CString("Joe_r_carpal_proximal_interphalangeal_2"));
HAnimJoint120.X3DNode::setName(CString("r_carpal_proximal_interphalangeal_2"));
HAnimJoint120.setRotation(new float[]{0.0,0.0,1.0,0.453619122505188});
HAnimJoint120.setCenter(new float[]{-0.2,0.745,-0.015});
HAnimJoint120.setSkinCoordIndex(new int32_t[]{282,283,284,285}, 4);
HAnimJoint120.setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0}, 4);
HAnimJoint& HAnimJoint121 =  HAnimJoint();
HAnimJoint121.setDEF(CString("Joe_r_carpal_distal_interphalangeal_2"));
HAnimJoint121.X3DNode::setName(CString("r_carpal_distal_interphalangeal_2"));
HAnimJoint121.setRotation(new float[]{0.0,0.0,1.0,0.453619122505188});
HAnimJoint121.setCenter(new float[]{-0.2,0.72,-0.015});
HAnimJoint121.setSkinCoordIndex(new int32_t[]{286,287,288,289,290,291,292,293,294}, 9);
HAnimJoint121.setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 9);
HAnimJoint120.addChildren(&HAnimJoint121);

HAnimJoint119.addChildren(&HAnimJoint120);

HAnimJoint118.addChildren(&HAnimJoint119);

HAnimJoint114.addChildren(&HAnimJoint118);

HAnimJoint& HAnimJoint122 =  HAnimJoint();
HAnimJoint122.setDEF(CString("Joe_r_carpometacarpal_3"));
HAnimJoint122.X3DNode::setName(CString("r_carpometacarpal_3"));
HAnimJoint122.setRotation(new float[]{0.0,0.0,1.0,0.302412748336791});
HAnimJoint122.setCenter(new float[]{-0.2,0.835,-0.04});
HAnimJoint122.setSkinCoordIndex(new int32_t[]{247,248}, 2);
HAnimJoint122.setSkinCoordWeight(new float[]{1.0,1.0}, 2);
HAnimJoint& HAnimJoint123 =  HAnimJoint();
HAnimJoint123.setDEF(CString("Joe_r_metacarpophalangeal_3"));
HAnimJoint123.X3DNode::setName(CString("r_metacarpophalangeal_3"));
HAnimJoint123.setRotation(new float[]{0.0,0.0,1.0,0.453619122505188});
HAnimJoint123.setCenter(new float[]{-0.2,0.788,-0.04});
HAnimJoint123.setSkinCoordIndex(new int32_t[]{272,273,279,280}, 4);
HAnimJoint123.setSkinCoordWeight(new float[]{1.0,1.0,0.5,0.5}, 4);
HAnimJoint& HAnimJoint124 =  HAnimJoint();
HAnimJoint124.setDEF(CString("Joe_r_carpal_proximal_interphalangeal_3"));
HAnimJoint124.X3DNode::setName(CString("r_carpal_proximal_interphalangeal_3"));
HAnimJoint124.setRotation(new float[]{0.0,0.0,1.0,0.453619122505188});
HAnimJoint124.setCenter(new float[]{-0.2,0.74,-0.04});
HAnimJoint124.setSkinCoordIndex(new int32_t[]{295,296,297,298}, 4);
HAnimJoint124.setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0}, 4);
HAnimJoint& HAnimJoint125 =  HAnimJoint();
HAnimJoint125.setDEF(CString("Joe_r_carpal_distal_interphalangeal_3"));
HAnimJoint125.X3DNode::setName(CString("r_carpal_distal_interphalangeal_3"));
HAnimJoint125.setRotation(new float[]{0.0,0.0,1.0,0.453619122505188});
HAnimJoint125.setCenter(new float[]{-0.2,0.7142,-0.04});
HAnimJoint125.setSkinCoordIndex(new int32_t[]{299,300,301,302,303,304,305,306,307}, 9);
HAnimJoint125.setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 9);
HAnimJoint124.addChildren(&HAnimJoint125);

HAnimJoint123.addChildren(&HAnimJoint124);

HAnimJoint122.addChildren(&HAnimJoint123);

HAnimJoint114.addChildren(&HAnimJoint122);

HAnimJoint& HAnimJoint126 =  HAnimJoint();
HAnimJoint126.setDEF(CString("Joe_r_carpometacarpal_4"));
HAnimJoint126.X3DNode::setName(CString("r_carpometacarpal_4"));
HAnimJoint126.setRotation(new float[]{0.0,0.0,1.0,0.302412748336791});
HAnimJoint126.setCenter(new float[]{-0.2,0.835,-0.065});
HAnimJoint126.setSkinCoordIndex(new int32_t[]{249,250}, 2);
HAnimJoint126.setSkinCoordWeight(new float[]{1.0,1.0}, 2);
HAnimJoint& HAnimJoint127 =  HAnimJoint();
HAnimJoint127.setDEF(CString("Joe_r_metacarpophalangeal_4"));
HAnimJoint127.X3DNode::setName(CString("r_metacarpophalangeal_4"));
HAnimJoint127.setRotation(new float[]{0.0,0.0,1.0,0.453619122505188});
HAnimJoint127.setCenter(new float[]{-0.2,0.793,-0.065});
HAnimJoint127.setSkinCoordIndex(new int32_t[]{274,275,280,281}, 4);
HAnimJoint127.setSkinCoordWeight(new float[]{1.0,1.0,0.5,0.5}, 4);
HAnimJoint& HAnimJoint128 =  HAnimJoint();
HAnimJoint128.setDEF(CString("Joe_r_carpal_proximal_interphalangeal_4"));
HAnimJoint128.X3DNode::setName(CString("r_carpal_proximal_interphalangeal_4"));
HAnimJoint128.setRotation(new float[]{0.0,0.0,1.0,0.453619122505188});
HAnimJoint128.setCenter(new float[]{-0.2,0.74,-0.065});
HAnimJoint128.setSkinCoordIndex(new int32_t[]{308,309,310,311}, 4);
HAnimJoint128.setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0}, 4);
HAnimJoint& HAnimJoint129 =  HAnimJoint();
HAnimJoint129.setDEF(CString("Joe_r_carpal_distal_interphalangeal_4"));
HAnimJoint129.X3DNode::setName(CString("r_carpal_distal_interphalangeal_4"));
HAnimJoint129.setRotation(new float[]{0.0,0.0,1.0,0.453619122505188});
HAnimJoint129.setCenter(new float[]{-0.2,0.7177,-0.065});
HAnimJoint129.setSkinCoordIndex(new int32_t[]{312,313,314,315,316,317,318,319,320}, 9);
HAnimJoint129.setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 9);
HAnimJoint128.addChildren(&HAnimJoint129);

HAnimJoint127.addChildren(&HAnimJoint128);

HAnimJoint126.addChildren(&HAnimJoint127);

HAnimJoint114.addChildren(&HAnimJoint126);

HAnimJoint& HAnimJoint130 =  HAnimJoint();
HAnimJoint130.setDEF(CString("Joe_r_carpometacarpal_5"));
HAnimJoint130.X3DNode::setName(CString("r_carpometacarpal_5"));
HAnimJoint130.setRotation(new float[]{0.0,0.0,1.0,0.302412748336791});
HAnimJoint130.setCenter(new float[]{-0.2,0.84,-0.085});
HAnimJoint130.setSkinCoordIndex(new int32_t[]{251,252,253,281}, 4);
HAnimJoint130.setSkinCoordWeight(new float[]{1.0,1.0,1.0,0.5}, 4);
HAnimJoint& HAnimJoint131 =  HAnimJoint();
HAnimJoint131.setDEF(CString("Joe_r_metacarpophalangeal_5"));
HAnimJoint131.X3DNode::setName(CString("r_metacarpophalangeal_5"));
HAnimJoint131.setRotation(new float[]{0.0,0.0,1.0,0.453619122505188});
HAnimJoint131.setCenter(new float[]{-0.2,0.79,-0.085});
HAnimJoint131.setSkinCoordIndex(new int32_t[]{276,277,278}, 3);
HAnimJoint131.setSkinCoordWeight(new float[]{1.0,1.0,1.0}, 3);
HAnimJoint& HAnimJoint132 =  HAnimJoint();
HAnimJoint132.setDEF(CString("Joe_r_carpal_proximal_interphalangeal_5"));
HAnimJoint132.X3DNode::setName(CString("r_carpal_proximal_interphalangeal_5"));
HAnimJoint132.setRotation(new float[]{0.0,0.0,1.0,0.453619122505188});
HAnimJoint132.setCenter(new float[]{-0.2,0.755,-0.085});
HAnimJoint132.setSkinCoordIndex(new int32_t[]{321,322,323,324}, 4);
HAnimJoint132.setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0}, 4);
HAnimJoint& HAnimJoint133 =  HAnimJoint();
HAnimJoint133.setDEF(CString("Joe_r_carpal_distal_interphalangeal_5"));
HAnimJoint133.X3DNode::setName(CString("r_carpal_distal_interphalangeal_5"));
HAnimJoint133.setRotation(new float[]{0.0,0.0,1.0,0.453619122505188});
HAnimJoint133.setCenter(new float[]{-0.2,0.735,-0.09});
HAnimJoint133.setSkinCoordIndex(new int32_t[]{325,326,327,328,329,330,331,332,333}, 9);
HAnimJoint133.setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 9);
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

HAnimJoint31.addChildren(&HAnimJoint53);

HAnimHumanoid28.setSkeleton(&HAnimJoint31);

HAnimJoint& HAnimJoint134 =  HAnimJoint();
HAnimJoint134.setUSE(CString("Joe_humanoid_root"));
HAnimHumanoid28.setJoints(&HAnimJoint134);

HAnimJoint& HAnimJoint135 =  HAnimJoint();
HAnimJoint135.setUSE(CString("Joe_sacroiliac"));
HAnimHumanoid28.setJoints(&HAnimJoint135);

HAnimJoint& HAnimJoint136 =  HAnimJoint();
HAnimJoint136.setUSE(CString("Joe_skullbase"));
HAnimHumanoid28.setJoints(&HAnimJoint136);

HAnimJoint& HAnimJoint137 =  HAnimJoint();
HAnimJoint137.setUSE(CString("Joe_temporomandibular"));
HAnimHumanoid28.setJoints(&HAnimJoint137);

HAnimJoint& HAnimJoint138 =  HAnimJoint();
HAnimJoint138.setUSE(CString("Joe_vc1"));
HAnimHumanoid28.setJoints(&HAnimJoint138);

HAnimJoint& HAnimJoint139 =  HAnimJoint();
HAnimJoint139.setUSE(CString("Joe_vc2"));
HAnimHumanoid28.setJoints(&HAnimJoint139);

HAnimJoint& HAnimJoint140 =  HAnimJoint();
HAnimJoint140.setUSE(CString("Joe_vc3"));
HAnimHumanoid28.setJoints(&HAnimJoint140);

HAnimJoint& HAnimJoint141 =  HAnimJoint();
HAnimJoint141.setUSE(CString("Joe_vc4"));
HAnimHumanoid28.setJoints(&HAnimJoint141);

HAnimJoint& HAnimJoint142 =  HAnimJoint();
HAnimJoint142.setUSE(CString("Joe_vc5"));
HAnimHumanoid28.setJoints(&HAnimJoint142);

HAnimJoint& HAnimJoint143 =  HAnimJoint();
HAnimJoint143.setUSE(CString("Joe_vc6"));
HAnimHumanoid28.setJoints(&HAnimJoint143);

HAnimJoint& HAnimJoint144 =  HAnimJoint();
HAnimJoint144.setUSE(CString("Joe_vc7"));
HAnimHumanoid28.setJoints(&HAnimJoint144);

HAnimJoint& HAnimJoint145 =  HAnimJoint();
HAnimJoint145.setUSE(CString("Joe_vl1"));
HAnimHumanoid28.setJoints(&HAnimJoint145);

HAnimJoint& HAnimJoint146 =  HAnimJoint();
HAnimJoint146.setUSE(CString("Joe_vl2"));
HAnimHumanoid28.setJoints(&HAnimJoint146);

HAnimJoint& HAnimJoint147 =  HAnimJoint();
HAnimJoint147.setUSE(CString("Joe_vl3"));
HAnimHumanoid28.setJoints(&HAnimJoint147);

HAnimJoint& HAnimJoint148 =  HAnimJoint();
HAnimJoint148.setUSE(CString("Joe_vl4"));
HAnimHumanoid28.setJoints(&HAnimJoint148);

HAnimJoint& HAnimJoint149 =  HAnimJoint();
HAnimJoint149.setUSE(CString("Joe_vl5"));
HAnimHumanoid28.setJoints(&HAnimJoint149);

HAnimJoint& HAnimJoint150 =  HAnimJoint();
HAnimJoint150.setUSE(CString("Joe_vt1"));
HAnimHumanoid28.setJoints(&HAnimJoint150);

HAnimJoint& HAnimJoint151 =  HAnimJoint();
HAnimJoint151.setUSE(CString("Joe_vt10"));
HAnimHumanoid28.setJoints(&HAnimJoint151);

HAnimJoint& HAnimJoint152 =  HAnimJoint();
HAnimJoint152.setUSE(CString("Joe_vt11"));
HAnimHumanoid28.setJoints(&HAnimJoint152);

HAnimJoint& HAnimJoint153 =  HAnimJoint();
HAnimJoint153.setUSE(CString("Joe_vt12"));
HAnimHumanoid28.setJoints(&HAnimJoint153);

HAnimJoint& HAnimJoint154 =  HAnimJoint();
HAnimJoint154.setUSE(CString("Joe_vt2"));
HAnimHumanoid28.setJoints(&HAnimJoint154);

HAnimJoint& HAnimJoint155 =  HAnimJoint();
HAnimJoint155.setUSE(CString("Joe_vt3"));
HAnimHumanoid28.setJoints(&HAnimJoint155);

HAnimJoint& HAnimJoint156 =  HAnimJoint();
HAnimJoint156.setUSE(CString("Joe_vt4"));
HAnimHumanoid28.setJoints(&HAnimJoint156);

HAnimJoint& HAnimJoint157 =  HAnimJoint();
HAnimJoint157.setUSE(CString("Joe_vt5"));
HAnimHumanoid28.setJoints(&HAnimJoint157);

HAnimJoint& HAnimJoint158 =  HAnimJoint();
HAnimJoint158.setUSE(CString("Joe_vt6"));
HAnimHumanoid28.setJoints(&HAnimJoint158);

HAnimJoint& HAnimJoint159 =  HAnimJoint();
HAnimJoint159.setUSE(CString("Joe_vt7"));
HAnimHumanoid28.setJoints(&HAnimJoint159);

HAnimJoint& HAnimJoint160 =  HAnimJoint();
HAnimJoint160.setUSE(CString("Joe_vt8"));
HAnimHumanoid28.setJoints(&HAnimJoint160);

HAnimJoint& HAnimJoint161 =  HAnimJoint();
HAnimJoint161.setUSE(CString("Joe_vt9"));
HAnimHumanoid28.setJoints(&HAnimJoint161);

HAnimJoint& HAnimJoint162 =  HAnimJoint();
HAnimJoint162.setUSE(CString("Joe_l_acromioclavicular"));
HAnimHumanoid28.setJoints(&HAnimJoint162);

HAnimJoint& HAnimJoint163 =  HAnimJoint();
HAnimJoint163.setUSE(CString("Joe_r_acromioclavicular"));
HAnimHumanoid28.setJoints(&HAnimJoint163);

HAnimJoint& HAnimJoint164 =  HAnimJoint();
HAnimJoint164.setUSE(CString("Joe_l_carpal_distal_interphalangeal_2"));
HAnimHumanoid28.setJoints(&HAnimJoint164);

HAnimJoint& HAnimJoint165 =  HAnimJoint();
HAnimJoint165.setUSE(CString("Joe_r_carpal_distal_interphalangeal_2"));
HAnimHumanoid28.setJoints(&HAnimJoint165);

HAnimJoint& HAnimJoint166 =  HAnimJoint();
HAnimJoint166.setUSE(CString("Joe_l_carpal_distal_interphalangeal_3"));
HAnimHumanoid28.setJoints(&HAnimJoint166);

HAnimJoint& HAnimJoint167 =  HAnimJoint();
HAnimJoint167.setUSE(CString("Joe_r_carpal_distal_interphalangeal_3"));
HAnimHumanoid28.setJoints(&HAnimJoint167);

HAnimJoint& HAnimJoint168 =  HAnimJoint();
HAnimJoint168.setUSE(CString("Joe_l_carpal_distal_interphalangeal_4"));
HAnimHumanoid28.setJoints(&HAnimJoint168);

HAnimJoint& HAnimJoint169 =  HAnimJoint();
HAnimJoint169.setUSE(CString("Joe_r_carpal_distal_interphalangeal_4"));
HAnimHumanoid28.setJoints(&HAnimJoint169);

HAnimJoint& HAnimJoint170 =  HAnimJoint();
HAnimJoint170.setUSE(CString("Joe_l_carpal_distal_interphalangeal_5"));
HAnimHumanoid28.setJoints(&HAnimJoint170);

HAnimJoint& HAnimJoint171 =  HAnimJoint();
HAnimJoint171.setUSE(CString("Joe_r_carpal_distal_interphalangeal_5"));
HAnimHumanoid28.setJoints(&HAnimJoint171);

HAnimJoint& HAnimJoint172 =  HAnimJoint();
HAnimJoint172.setUSE(CString("Joe_l_carpal_interphalangeal_1"));
HAnimHumanoid28.setJoints(&HAnimJoint172);

HAnimJoint& HAnimJoint173 =  HAnimJoint();
HAnimJoint173.setUSE(CString("Joe_r_carpal_interphalangeal_1"));
HAnimHumanoid28.setJoints(&HAnimJoint173);

HAnimJoint& HAnimJoint174 =  HAnimJoint();
HAnimJoint174.setUSE(CString("Joe_l_carpal_proximal_interphalangeal_2"));
HAnimHumanoid28.setJoints(&HAnimJoint174);

HAnimJoint& HAnimJoint175 =  HAnimJoint();
HAnimJoint175.setUSE(CString("Joe_r_carpal_proximal_interphalangeal_2"));
HAnimHumanoid28.setJoints(&HAnimJoint175);

HAnimJoint& HAnimJoint176 =  HAnimJoint();
HAnimJoint176.setUSE(CString("Joe_l_carpal_proximal_interphalangeal_3"));
HAnimHumanoid28.setJoints(&HAnimJoint176);

HAnimJoint& HAnimJoint177 =  HAnimJoint();
HAnimJoint177.setUSE(CString("Joe_r_carpal_proximal_interphalangeal_3"));
HAnimHumanoid28.setJoints(&HAnimJoint177);

HAnimJoint& HAnimJoint178 =  HAnimJoint();
HAnimJoint178.setUSE(CString("Joe_l_carpal_proximal_interphalangeal_4"));
HAnimHumanoid28.setJoints(&HAnimJoint178);

HAnimJoint& HAnimJoint179 =  HAnimJoint();
HAnimJoint179.setUSE(CString("Joe_r_carpal_proximal_interphalangeal_4"));
HAnimHumanoid28.setJoints(&HAnimJoint179);

HAnimJoint& HAnimJoint180 =  HAnimJoint();
HAnimJoint180.setUSE(CString("Joe_l_carpal_proximal_interphalangeal_5"));
HAnimHumanoid28.setJoints(&HAnimJoint180);

HAnimJoint& HAnimJoint181 =  HAnimJoint();
HAnimJoint181.setUSE(CString("Joe_r_carpal_proximal_interphalangeal_5"));
HAnimHumanoid28.setJoints(&HAnimJoint181);

HAnimJoint& HAnimJoint182 =  HAnimJoint();
HAnimJoint182.setUSE(CString("Joe_l_carpometacarpal_1"));
HAnimHumanoid28.setJoints(&HAnimJoint182);

HAnimJoint& HAnimJoint183 =  HAnimJoint();
HAnimJoint183.setUSE(CString("Joe_r_carpometacarpal_1"));
HAnimHumanoid28.setJoints(&HAnimJoint183);

HAnimJoint& HAnimJoint184 =  HAnimJoint();
HAnimJoint184.setUSE(CString("Joe_l_carpometacarpal_2"));
HAnimHumanoid28.setJoints(&HAnimJoint184);

HAnimJoint& HAnimJoint185 =  HAnimJoint();
HAnimJoint185.setUSE(CString("Joe_r_carpometacarpal_2"));
HAnimHumanoid28.setJoints(&HAnimJoint185);

HAnimJoint& HAnimJoint186 =  HAnimJoint();
HAnimJoint186.setUSE(CString("Joe_l_carpometacarpal_3"));
HAnimHumanoid28.setJoints(&HAnimJoint186);

HAnimJoint& HAnimJoint187 =  HAnimJoint();
HAnimJoint187.setUSE(CString("Joe_r_carpometacarpal_3"));
HAnimHumanoid28.setJoints(&HAnimJoint187);

HAnimJoint& HAnimJoint188 =  HAnimJoint();
HAnimJoint188.setUSE(CString("Joe_l_carpometacarpal_4"));
HAnimHumanoid28.setJoints(&HAnimJoint188);

HAnimJoint& HAnimJoint189 =  HAnimJoint();
HAnimJoint189.setUSE(CString("Joe_r_carpometacarpal_4"));
HAnimHumanoid28.setJoints(&HAnimJoint189);

HAnimJoint& HAnimJoint190 =  HAnimJoint();
HAnimJoint190.setUSE(CString("Joe_l_carpometacarpal_5"));
HAnimHumanoid28.setJoints(&HAnimJoint190);

HAnimJoint& HAnimJoint191 =  HAnimJoint();
HAnimJoint191.setUSE(CString("Joe_r_carpometacarpal_5"));
HAnimHumanoid28.setJoints(&HAnimJoint191);

HAnimJoint& HAnimJoint192 =  HAnimJoint();
HAnimJoint192.setUSE(CString("Joe_l_elbow"));
HAnimHumanoid28.setJoints(&HAnimJoint192);

HAnimJoint& HAnimJoint193 =  HAnimJoint();
HAnimJoint193.setUSE(CString("Joe_r_elbow"));
HAnimHumanoid28.setJoints(&HAnimJoint193);

HAnimJoint& HAnimJoint194 =  HAnimJoint();
HAnimJoint194.setUSE(CString("Joe_l_eyeball_joint"));
HAnimHumanoid28.setJoints(&HAnimJoint194);

HAnimJoint& HAnimJoint195 =  HAnimJoint();
HAnimJoint195.setUSE(CString("Joe_r_eyeball_joint"));
HAnimHumanoid28.setJoints(&HAnimJoint195);

HAnimJoint& HAnimJoint196 =  HAnimJoint();
HAnimJoint196.setUSE(CString("Joe_l_eyebrow_joint"));
HAnimHumanoid28.setJoints(&HAnimJoint196);

HAnimJoint& HAnimJoint197 =  HAnimJoint();
HAnimJoint197.setUSE(CString("Joe_r_eyebrow_joint"));
HAnimHumanoid28.setJoints(&HAnimJoint197);

HAnimJoint& HAnimJoint198 =  HAnimJoint();
HAnimJoint198.setUSE(CString("Joe_l_eyelid_joint"));
HAnimHumanoid28.setJoints(&HAnimJoint198);

HAnimJoint& HAnimJoint199 =  HAnimJoint();
HAnimJoint199.setUSE(CString("Joe_r_eyelid_joint"));
HAnimHumanoid28.setJoints(&HAnimJoint199);

HAnimJoint& HAnimJoint200 =  HAnimJoint();
HAnimJoint200.setUSE(CString("Joe_l_hip"));
HAnimHumanoid28.setJoints(&HAnimJoint200);

HAnimJoint& HAnimJoint201 =  HAnimJoint();
HAnimJoint201.setUSE(CString("Joe_r_hip"));
HAnimHumanoid28.setJoints(&HAnimJoint201);

HAnimJoint& HAnimJoint202 =  HAnimJoint();
HAnimJoint202.setUSE(CString("Joe_l_knee"));
HAnimHumanoid28.setJoints(&HAnimJoint202);

HAnimJoint& HAnimJoint203 =  HAnimJoint();
HAnimJoint203.setUSE(CString("Joe_r_knee"));
HAnimHumanoid28.setJoints(&HAnimJoint203);

HAnimJoint& HAnimJoint204 =  HAnimJoint();
HAnimJoint204.setUSE(CString("Joe_l_metacarpophalangeal_1"));
HAnimHumanoid28.setJoints(&HAnimJoint204);

HAnimJoint& HAnimJoint205 =  HAnimJoint();
HAnimJoint205.setUSE(CString("Joe_r_metacarpophalangeal_1"));
HAnimHumanoid28.setJoints(&HAnimJoint205);

HAnimJoint& HAnimJoint206 =  HAnimJoint();
HAnimJoint206.setUSE(CString("Joe_l_metacarpophalangeal_2"));
HAnimHumanoid28.setJoints(&HAnimJoint206);

HAnimJoint& HAnimJoint207 =  HAnimJoint();
HAnimJoint207.setUSE(CString("Joe_r_metacarpophalangeal_2"));
HAnimHumanoid28.setJoints(&HAnimJoint207);

HAnimJoint& HAnimJoint208 =  HAnimJoint();
HAnimJoint208.setUSE(CString("Joe_l_metacarpophalangeal_3"));
HAnimHumanoid28.setJoints(&HAnimJoint208);

HAnimJoint& HAnimJoint209 =  HAnimJoint();
HAnimJoint209.setUSE(CString("Joe_r_metacarpophalangeal_3"));
HAnimHumanoid28.setJoints(&HAnimJoint209);

HAnimJoint& HAnimJoint210 =  HAnimJoint();
HAnimJoint210.setUSE(CString("Joe_l_metacarpophalangeal_4"));
HAnimHumanoid28.setJoints(&HAnimJoint210);

HAnimJoint& HAnimJoint211 =  HAnimJoint();
HAnimJoint211.setUSE(CString("Joe_r_metacarpophalangeal_4"));
HAnimHumanoid28.setJoints(&HAnimJoint211);

HAnimJoint& HAnimJoint212 =  HAnimJoint();
HAnimJoint212.setUSE(CString("Joe_l_metacarpophalangeal_5"));
HAnimHumanoid28.setJoints(&HAnimJoint212);

HAnimJoint& HAnimJoint213 =  HAnimJoint();
HAnimJoint213.setUSE(CString("Joe_r_metacarpophalangeal_5"));
HAnimHumanoid28.setJoints(&HAnimJoint213);

HAnimJoint& HAnimJoint214 =  HAnimJoint();
HAnimJoint214.setUSE(CString("Joe_l_metatarsophalangeal_2"));
HAnimHumanoid28.setJoints(&HAnimJoint214);

HAnimJoint& HAnimJoint215 =  HAnimJoint();
HAnimJoint215.setUSE(CString("Joe_r_metatarsophalangeal_2"));
HAnimHumanoid28.setJoints(&HAnimJoint215);

HAnimJoint& HAnimJoint216 =  HAnimJoint();
HAnimJoint216.setUSE(CString("Joe_l_radiocarpal"));
HAnimHumanoid28.setJoints(&HAnimJoint216);

HAnimJoint& HAnimJoint217 =  HAnimJoint();
HAnimJoint217.setUSE(CString("Joe_r_radiocarpal"));
HAnimHumanoid28.setJoints(&HAnimJoint217);

HAnimJoint& HAnimJoint218 =  HAnimJoint();
HAnimJoint218.setUSE(CString("Joe_l_shoulder"));
HAnimHumanoid28.setJoints(&HAnimJoint218);

HAnimJoint& HAnimJoint219 =  HAnimJoint();
HAnimJoint219.setUSE(CString("Joe_r_shoulder"));
HAnimHumanoid28.setJoints(&HAnimJoint219);

HAnimJoint& HAnimJoint220 =  HAnimJoint();
HAnimJoint220.setUSE(CString("Joe_l_sternoclavicular"));
HAnimHumanoid28.setJoints(&HAnimJoint220);

HAnimJoint& HAnimJoint221 =  HAnimJoint();
HAnimJoint221.setUSE(CString("Joe_r_sternoclavicular"));
HAnimHumanoid28.setJoints(&HAnimJoint221);

HAnimJoint& HAnimJoint222 =  HAnimJoint();
HAnimJoint222.setUSE(CString("Joe_l_talocrural"));
HAnimHumanoid28.setJoints(&HAnimJoint222);

HAnimJoint& HAnimJoint223 =  HAnimJoint();
HAnimJoint223.setUSE(CString("Joe_r_talocrural"));
HAnimHumanoid28.setJoints(&HAnimJoint223);

HAnimJoint& HAnimJoint224 =  HAnimJoint();
HAnimJoint224.setUSE(CString("Joe_l_tarsal_distal_interphalangeal_2"));
HAnimHumanoid28.setJoints(&HAnimJoint224);

HAnimJoint& HAnimJoint225 =  HAnimJoint();
HAnimJoint225.setUSE(CString("Joe_r_tarsal_distal_interphalangeal_2"));
HAnimHumanoid28.setJoints(&HAnimJoint225);

HAnimJoint& HAnimJoint226 =  HAnimJoint();
HAnimJoint226.setUSE(CString("Joe_l_tarsometatarsal_2"));
HAnimHumanoid28.setJoints(&HAnimJoint226);

HAnimJoint& HAnimJoint227 =  HAnimJoint();
HAnimJoint227.setUSE(CString("Joe_r_tarsometatarsal_2"));
HAnimHumanoid28.setJoints(&HAnimJoint227);

HAnimSegment& HAnimSegment228 =  HAnimSegment();
HAnimSegment228.setUSE(CString("Joe_sacrum"));
HAnimHumanoid28.setSegments(&HAnimSegment228);

HAnimSite& HAnimSite229 =  HAnimSite();
HAnimSite229.setUSE(CString("Joe_RootFront_view"));
HAnimHumanoid28.setSites(&HAnimSite229);

Coordinate& Coordinate230 =  Coordinate();
Coordinate230.setDEF(CString("Joe_SkinCoord"));
Coordinate230.setPoint(new float[]{0.0,1.77,0.0,0.0,1.665,0.09,-0.033,1.62,0.087,0.033,1.62,0.087,0.0,1.55,0.097,-0.077,1.64,-0.01,-0.0527,1.58,0.015,0.077,1.64,-0.01,0.0527,1.58,0.015,0.0,1.625,-0.0925,-0.03,1.46,0.035,0.0,1.44,0.03,0.03,1.46,0.035,-0.1135,1.318,0.095,0.1135,1.318,0.095,0.0,1.25,0.113,-0.087,1.19,0.09,-0.0935,1.03,0.075,0.087,1.19,0.09,0.0935,1.03,0.075,-0.1425,1.065,0.0033,-0.15,0.9,-0.01,0.1425,1.065,0.0033,0.15,0.9,-0.01,0.0,1.53,-0.084,0.0049,1.1908,-0.1113,-0.0773,1.019,-0.12,0.0773,1.019,-0.12,0.005,1.0915,-0.1091,-0.178,1.4825,-0.0625,-0.17,1.38,0.007,-0.1884,0.8676,-0.036,-0.16,1.38,-0.127,-0.2,1.1388,-0.08,-0.244,1.1388,-0.04,-0.165,1.1388,-0.04,-0.23,1.133,-0.055,-0.1977,0.8169,-0.0177,-0.1941,0.6772,-0.0423,-0.2117,0.8562,-0.0584,-0.1929,0.789,-0.1064,0.175,1.4825,-0.06,0.17,1.38,0.007,0.1901,0.8645,-0.0415,0.16,1.38,-0.125,0.2,1.1388,-0.08,0.165,1.1388,-0.04,0.244,1.1388,-0.04,0.23,1.133,-0.055,0.2009,0.8139,-0.0237,0.2056,0.6743,-0.0482,0.2142,0.8529,-0.0648,0.1929,0.786,-0.1122,-0.1,0.4913,-0.03,-0.17,0.466,0.0,-0.05,0.466,0.0,-0.165,0.01,0.12,-0.15,0.07,0.0,-0.085,0.086,0.0125,-0.09,0.056,0.0125,-0.115,0.02,0.122,-0.115,0.04,-0.055,-0.11,0.011,0.19,0.0993,0.4881,-0.0309,0.17,0.466,0.0,0.05,0.4867,0.0,0.165,0.01,0.12,0.15,0.07,0.0,0.085,0.086,0.0125,0.09,0.056,0.0125,0.115,0.02,0.122,0.115,0.04,-0.055,0.11,0.011,0.19,0.0,0.875,0.0,-0.0646,1.5149,-0.038,0.0646,1.5149,-0.038,0.0,1.07225,0.09,-0.11,1.427,-0.1375,-0.235,1.42,-0.0625,0.11,1.427,-0.1375,0.235,1.42,-0.0625,0.0,1.41,-0.145,0.0,0.925,0.08,-0.087,1.19,-0.09,0.087,1.19,-0.09,0.172,1.32,-0.03,-0.172,1.32,-0.03,0.15,1.23,-0.015,-0.15,1.23,-0.015,0.079,0.92,-0.14,0.1,0.9,0.077,-0.079,0.92,-0.14,-0.1,0.9,0.075,0.0,0.87,0.0,0.171,0.65,0.0,0.02,0.65,0.0,0.1,0.65,-0.08,0.1,0.65,0.07,-0.171,0.65,0.0,-0.02,0.65,0.0,-0.1,0.65,-0.08,-0.1,0.65,0.07,0.25,1.27,-0.04,0.17,1.27,-0.04,0.2,1.27,-0.09,0.2,1.27,0.02,0.244,1.1388,-0.04,0.165,1.1388,-0.04,0.2,1.1388,-0.08,0.2,1.1388,-0.013,0.225,1.0,-0.01,0.225,1.0,-0.07,0.185,1.0,-0.01,0.185,1.0,-0.07,0.2,1.1388,-0.04,0.225,0.92,-0.04,0.175,0.92,-0.04,0.2,0.92,-0.065,0.2,0.92,-0.015,0.225,0.89,-0.04,0.175,0.89,-0.04,0.2,0.89,-0.065,0.2,0.89,-0.015,0.218,0.86,-0.04,0.184,0.86,-0.04,0.2,0.87,-0.07,0.2,0.87,0.0,0.21,0.85,0.0,0.1854,0.85,0.0,0.212,0.84,-0.015,0.183,0.84,-0.015,0.213,0.835,-0.04,0.19,0.835,-0.04,0.211,0.835,-0.065,0.192,0.835,-0.065,0.208,0.84,-0.085,0.19,0.84,-0.085,0.2,0.84,-0.095,0.215,0.82,0.0,0.193,0.815,0.005,0.198,0.8,0.012,0.21,0.82,0.03,0.19,0.82,0.03,0.2,0.835,0.039,0.212,0.8,0.05,0.188,0.8,0.05,0.2,0.807,0.057,0.2,0.793,0.035,0.2,0.774,0.076,0.212,0.78,0.07,0.188,0.78,0.07,0.2,0.785,0.075,0.2,0.77,0.062,0.215,0.793,-0.015,0.187,0.793,-0.015,0.2,0.793,-0.005,0.215,0.788,-0.04,0.187,0.788,-0.04,0.215,0.793,-0.065,0.187,0.793,-0.065,0.21,0.79,-0.085,0.19,0.79,-0.085,0.2,0.79,-0.095,0.19,0.77,-0.0275,0.19,0.77,-0.0525,0.19,0.78,-0.0775,0.212,0.745,-0.015,0.188,0.745,-0.02,0.2,0.745,-0.0255,0.2,0.745,-0.0045,0.211,0.72,-0.015,0.189,0.72,-0.015,0.2,0.72,-0.0252,0.2,0.72,-0.0048,0.21,0.695,-0.015,0.19,0.695,-0.015,0.2,0.695,-0.025,0.2,0.695,-0.005,0.2,0.685,-0.015,0.215,0.74,-0.04,0.185,0.74,-0.04,0.2,0.74,-0.055,0.2,0.74,-0.025,0.21,0.7142,-0.04,0.19,0.7142,-0.04,0.2,0.7142,-0.053,0.2,0.7142,-0.027,0.21,0.68,-0.04,0.19,0.68,-0.04,0.2,0.68,-0.05,0.2,0.68,-0.03,0.2,0.67,-0.04,0.212,0.74,-0.065,0.188,0.74,-0.065,0.2,0.74,-0.0756,0.2,0.74,-0.0542,0.21,0.7177,-0.065,0.19,0.7177,-0.065,0.2,0.7177,-0.0751,0.2,0.7177,-0.0549,0.21,0.695,-0.065,0.19,0.695,-0.065,0.2,0.695,-0.075,0.2,0.695,-0.055,0.2,0.685,-0.065,0.211,0.755,-0.085,0.189,0.755,-0.085,0.2,0.755,-0.0952,0.2,0.755,-0.0748,0.21,0.735,-0.085,0.19,0.735,-0.085,0.2,0.735,-0.0951,0.2,0.735,-0.0749,0.21,0.72,-0.085,0.19,0.72,-0.085,0.2,0.72,-0.095,0.2,0.72,-0.075,0.2,0.71,-0.085,-0.23,1.23,-0.04,-0.16,1.23,-0.04,-0.2,1.235,-0.105,-0.2,1.255,0.02,-0.244,1.1388,-0.04,-0.165,1.1388,-0.04,-0.2,1.1388,-0.08,-0.2,1.1388,0.013,-0.225,1.0,-0.01,-0.225,1.0,-0.07,-0.185,1.0,-0.01,-0.185,1.0,-0.07,-0.2,1.1388,-0.04,-0.225,0.92,-0.04,-0.175,0.92,-0.04,-0.2,0.92,-0.065,-0.2,0.92,-0.015,-0.225,0.89,-0.04,-0.175,0.89,-0.04,-0.2,0.89,-0.065,-0.2,0.89,-0.015,-0.218,0.86,-0.04,-0.184,0.86,-0.04,-0.2,0.87,-0.07,-0.2,0.87,0.0,-0.21,0.85,0.0,-0.1854,0.85,0.0,-0.212,0.84,-0.015,-0.183,0.84,-0.015,-0.213,0.835,-0.04,-0.19,0.835,-0.04,-0.211,0.835,-0.065,-0.192,0.835,-0.065,-0.208,0.84,-0.085,-0.19,0.84,-0.085,-0.2,0.84,-0.095,-0.215,0.82,0.0,-0.193,0.815,0.005,-0.198,0.8,0.012,-0.21,0.82,0.03,-0.19,0.82,0.03,-0.2,0.835,0.039,-0.212,0.8,0.05,-0.188,0.8,0.05,-0.2,0.807,0.057,-0.2,0.793,0.035,-0.2,0.774,0.076,-0.212,0.78,0.07,-0.188,0.78,0.07,-0.2,0.785,0.075,-0.2,0.77,0.062,-0.215,0.793,-0.015,-0.187,0.793,-0.015,-0.2,0.793,-0.005,-0.215,0.788,-0.04,-0.187,0.788,-0.04,-0.215,0.793,-0.065,-0.187,0.793,-0.065,-0.21,0.79,-0.085,-0.19,0.79,-0.085,-0.2,0.79,-0.095,-0.19,0.77,-0.0275,-0.19,0.77,-0.0525,-0.19,0.78,-0.0775,-0.212,0.745,-0.015,-0.188,0.745,-0.02,-0.2,0.745,-0.0255,-0.2,0.745,-0.0045,-0.211,0.72,-0.015,-0.189,0.72,-0.015,-0.2,0.72,-0.0252,-0.2,0.72,-0.0048,-0.21,0.695,-0.015,-0.19,0.695,-0.015,-0.2,0.695,-0.025,-0.2,0.695,-0.005,-0.2,0.685,-0.015,-0.215,0.74,-0.04,-0.185,0.74,-0.04,-0.2,0.74,-0.055,-0.2,0.74,-0.025,-0.21,0.7142,-0.04,-0.19,0.7142,-0.04,-0.2,0.7142,-0.053,-0.2,0.7142,-0.027,-0.21,0.68,-0.04,-0.19,0.68,-0.04,-0.2,0.68,-0.05,-0.2,0.68,-0.03,-0.2,0.67,-0.04,-0.212,0.74,-0.065,-0.188,0.74,-0.065,-0.2,0.74,-0.0756,-0.2,0.74,-0.0542,-0.21,0.7177,-0.065,-0.19,0.7177,-0.065,-0.2,0.7177,-0.0751,-0.2,0.7177,-0.0549,-0.21,0.695,-0.065,-0.19,0.695,-0.065,-0.2,0.695,-0.075,-0.2,0.695,-0.055,-0.2,0.685,-0.065,-0.211,0.755,-0.085,-0.189,0.755,-0.085,-0.2,0.755,-0.0952,-0.2,0.755,-0.0748,-0.21,0.735,-0.085,-0.19,0.735,-0.085,-0.2,0.735,-0.0951,-0.2,0.735,-0.0749,-0.21,0.72,-0.085,-0.19,0.72,-0.085,-0.2,0.72,-0.095,-0.2,0.72,-0.075,-0.2,0.71,-0.085,0.115,0.466,0.06,0.115,0.466,-0.055,0.15,0.466,0.0,0.05,0.466,0.0,0.17,0.3,0.0,0.06,0.3,0.0,0.1,0.3,-0.05,0.1,0.3,0.05,0.15,0.07,0.0,0.085,0.086,0.0125,0.115,0.069,-0.045,0.117,0.0975,0.0615,0.1375,0.006,-0.03,0.095,0.006,-0.03,0.115,0.015,-0.045,0.115,0.06,0.1,0.115,0.0,0.07,0.165,0.0,0.07,0.095,0.0,0.07,0.115,0.04,0.13,0.125,0.0,0.12,0.165,0.0,0.12,0.087,0.0,0.122,0.09,0.012,0.188,0.11,0.011,0.19,0.128,0.011,0.185,0.142,0.011,0.178,0.154,0.01,0.168,-0.115,0.466,0.06,-0.115,0.466,-0.055,-0.17,0.466,0.0,-0.05,0.466,0.0,-0.17,0.3,0.0,-0.06,0.3,0.0,-0.1,0.3,-0.05,-0.1,0.3,0.05,-0.15,0.07,0.0,-0.085,0.086,0.0125,-0.115,0.069,-0.045,-0.117,0.0975,0.0615,-0.1375,0.006,-0.03,-0.095,0.006,-0.03,-0.095,0.006,-0.03,-0.115,0.06,0.1,-0.115,0.0,0.07,-0.165,0.0,0.07,-0.095,0.0,0.07,-0.115,0.04,0.13,-0.125,0.0,0.12,-0.165,0.0,0.12,-0.087,0.0,0.122,-0.09,0.012,0.188,-0.11,0.011,0.19,-0.128,0.011,0.185,-0.142,0.011,0.178,-0.154,0.01,0.168}, 1170);
HAnimHumanoid28.setSkinCoord(&Coordinate230);

Shape& Shape231 =  Shape();
Shape231.setDEF(CString("Joe_Shape"));
Appearance& Appearance232 =  Appearance();
Appearance232.setDEF(CString("Joe_skin_Appearance"));
Material& Material233 =  Material();
Material233.setDEF(CString("Joe_skin_Material"));
Material233.setDiffuseColor(new float[]{0.3,0.3,0.6});
Material233.setEmissiveColor(new float[]{0.3,0.3,0.6});
Appearance232.addChild(&Material233);

ImageTexture& ImageTexture234 =  ImageTexture();
ImageTexture234.setDEF(CString("JoeSkinImageTexture"));
ImageTexture234.setUrl(new CString[]{CString("JoeBodyTexture29.png"), CString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/JoeBodyTexture29.png")}, 2);
Appearance232.addChild(&ImageTexture234);

TextureTransform& TextureTransform235 =  TextureTransform();
TextureTransform235.setDEF(CString("KickTextureTransform"));
TextureTransform235.setRotation(0.7560319);
Appearance232.setTextureTransform(TextureTransform235);

Shape231.addChild(&Appearance232);

IndexedFaceSet& IndexedFaceSet236 =  IndexedFaceSet();
IndexedFaceSet236.setDEF(CString("Joe_skin_IndexedFaceSet"));
IndexedFaceSet236.setCreaseAngle(3.14);
IndexedFaceSet236.setCoordIndex(new int32_t[]{0,9,5,-1,0,7,9,-1,0,5,1,-1,1,5,2,-1,1,3,7,-1,2,4,3,-1,0,1,7,-1,1,2,3,-1,5,6,2,-1,7,3,8,-1,6,4,2,-1,3,4,8,-1,9,6,5,-1,9,7,8,-1,4,6,10,-1,4,10,12,-1,4,12,8,-1,10,11,12,-1,9,75,24,-1,9,24,74,-1,9,8,75,-1,9,74,6,-1,10,6,74,-1,12,75,8,-1,74,24,29,-1,24,77,29,-1,10,74,29,-1,77,32,29,-1,32,78,29,-1,78,30,29,-1,30,10,29,-1,41,24,75,-1,41,75,12,-1,41,12,42,-1,41,42,80,-1,41,80,44,-1,41,44,79,-1,41,79,24,-1,81,24,79,-1,81,77,24,-1,81,25,77,-1,81,79,25,-1,25,79,44,-1,25,32,77,-1,25,83,32,-1,25,26,83,-1,25,27,26,-1,25,84,27,-1,25,44,84,-1,11,10,30,-1,11,30,13,-1,11,13,15,-1,11,15,14,-1,11,14,42,-1,11,42,12,-1,15,13,16,-1,15,18,14,-1,15,16,76,-1,15,76,18,-1,76,16,17,-1,76,17,82,-1,76,82,19,-1,76,19,18,-1,22,18,19,-1,22,87,18,-1,22,27,84,-1,22,84,87,-1,87,84,85,-1,85,84,44,-1,85,42,14,-1,87,14,18,-1,87,85,14,-1,20,83,26,-1,20,17,16,-1,20,16,88,-1,20,88,83,-1,88,16,13,-1,88,13,86,-1,88,86,83,-1,86,13,30,-1,86,32,83,-1,23,89,22,-1,89,27,22,-1,89,91,27,-1,91,26,27,-1,91,20,26,-1,21,20,91,-1,21,17,20,-1,21,92,17,-1,82,17,92,-1,82,90,19,-1,23,22,19,-1,23,19,90,-1,82,92,101,-1,82,101,99,-1,82,99,93,-1,82,93,95,-1,82,95,97,-1,82,97,90,-1,23,90,97,-1,23,97,94,-1,23,94,89,-1,89,94,96,-1,89,96,95,-1,89,95,93,-1,89,93,91,-1,91,93,99,-1,91,99,100,-1,91,100,98,-1,21,91,98,-1,21,98,101,-1,21,101,92,-1,85,105,42,-1,85,103,105,-1,85,44,103,-1,103,44,104,-1,80,42,105,-1,80,105,102,-1,80,102,104,-1,80,104,44,-1,105,109,102,-1,102,109,47,-1,47,104,102,-1,104,47,45,-1,104,45,103,-1,103,45,46,-1,103,46,109,-1,103,109,105,-1,109,112,110,-1,109,110,47,-1,47,110,111,-1,47,111,45,-1,45,111,113,-1,113,46,45,-1,46,113,112,-1,112,109,46,-1,112,118,110,-1,110,118,115,-1,110,115,111,-1,111,115,117,-1,111,117,113,-1,113,117,116,-1,113,116,112,-1,112,116,118,-1,115,118,119,-1,119,118,122,-1,118,116,122,-1,122,116,120,-1,116,117,120,-1,120,117,121,-1,117,115,121,-1,115,119,121,-1,119,127,123,-1,119,122,127,-1,122,126,127,-1,122,128,126,-1,122,120,128,-1,120,124,128,-1,120,121,124,-1,121,125,124,-1,121,119,125,-1,119,123,125,-1,127,129,123,-1,127,126,129,-1,129,126,141,-1,141,126,143,-1,126,142,143,-1,126,128,142,-1,128,124,130,-1,142,128,130,-1,124,132,130,-1,124,134,132,-1,125,134,124,-1,125,136,134,-1,125,137,136,-1,125,135,137,-1,125,133,135,-1,125,123,133,-1,123,131,133,-1,123,129,131,-1,131,129,138,-1,129,141,138,-1,138,141,144,-1,141,143,144,-1,143,146,144,-1,142,146,143,-1,142,145,146,-1,139,145,142,-1,130,139,142,-1,139,130,132,-1,139,132,154,-1,132,157,154,-1,132,159,157,-1,132,134,159,-1,134,136,159,-1,136,161,159,-1,136,137,161,-1,137,162,161,-1,160,162,137,-1,135,160,137,-1,133,160,135,-1,133,158,160,-1,131,158,133,-1,156,158,131,-1,153,156,131,-1,131,138,153,-1,138,155,153,-1,140,155,138,-1,138,144,140,-1,144,147,140,-1,140,147,145,-1,140,145,139,-1,139,155,140,-1,154,155,139,-1,146,149,144,-1,146,151,149,-1,145,151,146,-1,150,151,145,-1,145,152,150,-1,147,152,145,-1,147,149,152,-1,147,144,149,-1,148,149,151,-1,148,152,149,-1,148,150,152,-1,148,151,150,-1,160,207,162,-1,160,205,207,-1,165,208,205,-1,160,165,205,-1,158,165,160,-1,161,162,207,-1,161,207,206,-1,165,206,208,-1,206,165,161,-1,161,165,159,-1,207,209,211,-1,205,209,207,-1,205,212,209,-1,205,208,212,-1,206,212,208,-1,206,210,212,-1,206,207,210,-1,207,211,210,-1,209,212,213,-1,212,216,213,-1,212,214,216,-1,210,214,212,-1,210,215,214,-1,210,211,215,-1,209,215,211,-1,209,213,215,-1,217,213,216,-1,217,215,213,-1,217,214,215,-1,217,216,214,-1,158,194,165,-1,192,194,158,-1,164,195,192,-1,158,164,192,-1,156,164,158,-1,159,194,165,-1,159,194,193,-1,159,193,195,-1,159,195,164,-1,159,164,157,-1,157,164,180,-1,192,198,194,-1,192,196,198,-1,192,195,196,-1,195,199,196,-1,196,199,200,-1,199,203,200,-1,193,199,195,-1,193,197,199,-1,193,198,197,-1,193,194,198,-1,199,201,203,-1,197,201,199,-1,197,198,201,-1,198,202,201,-1,196,202,198,-1,200,202,196,-1,204,202,200,-1,204,201,202,-1,204,203,201,-1,204,200,203,-1,156,181,164,-1,156,179,181,-1,156,182,179,-1,156,163,182,-1,163,180,182,-1,157,180,163,-1,164,181,180,-1,179,182,183,-1,182,186,183,-1,182,184,186,-1,180,184,182,-1,180,181,184,-1,181,185,184,-1,179,185,181,-1,183,185,179,-1,183,186,187,-1,186,190,187,-1,184,190,186,-1,184,188,190,-1,184,185,188,-1,185,189,188,-1,185,183,189,-1,183,187,189,-1,191,189,187,-1,191,188,189,-1,191,190,188,-1,191,187,190,-1,153,163,156,-1,153,168,163,-1,153,166,168,-1,153,169,166,-1,155,169,153,-1,155,167,169,-1,154,167,155,-1,154,163,167,-1,154,157,163,-1,163,168,167,-1,166,169,170,-1,169,173,170,-1,169,171,173,-1,169,167,171,-1,167,168,171,-1,168,172,171,-1,168,170,172,-1,170,168,166,-1,170,173,174,-1,173,177,174,-1,173,175,177,-1,173,171,175,-1,171,172,175,-1,172,176,175,-1,172,174,176,-1,170,174,172,-1,178,176,174,-1,178,175,176,-1,178,177,175,-1,178,174,177,-1,86,30,221,-1,86,221,219,-1,86,219,32,-1,32,219,220,-1,78,32,220,-1,78,220,218,-1,78,218,221,-1,78,221,30,-1,221,225,219,-1,219,225,35,-1,35,33,219,-1,33,220,219,-1,33,34,220,-1,220,34,218,-1,221,218,34,-1,34,225,221,-1,225,226,228,-1,225,228,35,-1,35,228,229,-1,35,229,33,-1,33,229,227,-1,33,227,34,-1,34,227,226,-1,34,226,225,-1,226,234,228,-1,228,234,232,-1,232,229,228,-1,232,233,229,-1,229,233,227,-1,227,233,231,-1,227,231,226,-1,226,231,234,-1,231,235,234,-1,235,238,234,-1,234,238,232,-1,238,236,232,-1,232,236,233,-1,236,237,233,-1,233,237,231,-1,231,237,235,-1,235,239,243,-1,235,243,238,-1,238,243,242,-1,238,242,244,-1,238,244,236,-1,236,244,240,-1,236,240,237,-1,237,240,241,-1,237,241,235,-1,235,241,239,-1,243,239,245,-1,243,245,242,-1,245,257,242,-1,257,259,242,-1,242,259,258,-1,242,258,244,-1,244,246,240,-1,258,246,244,-1,240,246,248,-1,240,248,250,-1,241,240,250,-1,241,250,252,-1,241,252,253,-1,241,253,251,-1,241,251,249,-1,241,249,239,-1,239,249,247,-1,239,247,245,-1,247,254,245,-1,245,254,257,-1,254,260,257,-1,257,260,259,-1,259,260,262,-1,258,259,262,-1,258,262,261,-1,255,258,261,-1,246,258,255,-1,255,248,246,-1,255,270,248,-1,248,270,273,-1,248,273,275,-1,248,275,250,-1,250,275,252,-1,252,275,277,-1,252,277,253,-1,253,277,278,-1,276,253,278,-1,251,253,276,-1,249,251,276,-1,249,276,274,-1,247,249,274,-1,272,247,274,-1,269,247,272,-1,247,269,254,-1,254,269,271,-1,256,254,271,-1,254,256,260,-1,260,256,263,-1,256,261,263,-1,256,255,261,-1,255,256,271,-1,270,255,271,-1,262,260,265,-1,262,265,267,-1,261,262,267,-1,266,261,267,-1,261,266,268,-1,263,261,268,-1,263,268,265,-1,263,265,260,-1,264,267,265,-1,264,265,268,-1,264,268,266,-1,264,266,267,-1,276,278,323,-1,276,323,321,-1,281,321,324,-1,276,321,281,-1,274,276,281,-1,277,323,278,-1,277,322,323,-1,281,324,322,-1,322,277,281,-1,277,275,281,-1,323,327,325,-1,321,323,325,-1,321,325,328,-1,321,328,324,-1,322,324,328,-1,322,328,326,-1,322,326,323,-1,323,326,327,-1,325,329,328,-1,328,329,332,-1,328,332,330,-1,326,328,330,-1,326,330,331,-1,326,331,327,-1,325,327,331,-1,325,331,329,-1,333,332,329,-1,333,329,331,-1,333,331,330,-1,333,330,332,-1,274,281,310,-1,308,274,310,-1,280,308,311,-1,274,308,280,-1,272,274,280,-1,275,310,281,-1,275,309,310,-1,275,311,309,-1,275,280,311,-1,275,273,280,-1,273,296,280,-1,308,310,314,-1,308,314,312,-1,308,312,311,-1,311,312,315,-1,312,316,315,-1,315,316,319,-1,309,311,315,-1,309,315,313,-1,309,313,314,-1,309,314,310,-1,315,319,317,-1,313,315,317,-1,313,317,314,-1,314,317,318,-1,312,314,318,-1,316,312,318,-1,320,316,318,-1,320,318,317,-1,320,317,319,-1,320,319,316,-1,272,280,297,-1,272,297,295,-1,272,295,298,-1,272,298,279,-1,279,298,296,-1,273,279,296,-1,280,296,297,-1,295,299,298,-1,298,299,302,-1,298,302,300,-1,296,298,300,-1,296,300,297,-1,297,300,301,-1,295,297,301,-1,299,295,301,-1,299,303,302,-1,302,303,306,-1,300,302,306,-1,300,306,304,-1,300,304,301,-1,301,304,305,-1,301,305,299,-1,299,305,303,-1,307,303,305,-1,307,305,304,-1,307,304,306,-1,307,306,303,-1,269,272,279,-1,269,279,284,-1,269,284,282,-1,269,282,285,-1,271,269,285,-1,271,285,283,-1,270,271,283,-1,270,283,279,-1,270,279,273,-1,279,283,284,-1,282,286,285,-1,285,286,289,-1,285,289,287,-1,285,287,283,-1,283,287,284,-1,284,287,288,-1,284,288,286,-1,286,282,284,-1,286,290,289,-1,289,290,293,-1,289,293,291,-1,289,291,287,-1,287,291,288,-1,288,291,292,-1,288,292,290,-1,286,288,290,-1,294,290,292,-1,294,292,291,-1,294,291,293,-1,294,293,290,-1,97,334,336,-1,97,336,94,-1,94,336,96,-1,336,335,96,-1,96,335,95,-1,95,335,337,-1,95,337,334,-1,95,334,97,-1,334,341,336,-1,336,341,338,-1,336,338,335,-1,335,338,340,-1,335,340,337,-1,337,340,339,-1,337,339,334,-1,334,339,341,-1,341,345,342,-1,341,342,338,-1,338,342,340,-1,340,342,344,-1,340,344,339,-1,339,344,343,-1,339,343,345,-1,339,345,341,-1,345,349,342,-1,342,349,351,-1,342,351,346,-1,342,346,344,-1,71,346,348,-1,71,344,346,-1,71,348,347,-1,71,347,344,-1,344,347,343,-1,343,347,352,-1,343,352,349,-1,343,349,345,-1,349,352,356,-1,349,356,353,-1,349,353,355,-1,349,355,351,-1,354,356,352,-1,354,352,350,-1,354,350,351,-1,354,351,355,-1,353,356,357,-1,353,357,358,-1,353,358,359,-1,353,359,360,-1,353,360,361,-1,353,361,355,-1,354,357,356,-1,350,346,351,-1,348,346,347,-1,350,347,346,-1,350,352,347,-1,354,358,357,-1,354,359,358,-1,354,360,359,-1,354,361,360,-1,354,355,361,-1,101,362,365,-1,101,365,99,-1,99,365,100,-1,100,365,363,-1,100,363,98,-1,98,363,364,-1,98,364,101,-1,101,364,362,-1,362,369,367,-1,362,367,365,-1,365,367,363,-1,363,367,368,-1,363,367,368,-1,363,368,366,-1,363,366,364,-1,364,366,362,-1,362,366,369,-1,369,373,371,-1,369,371,367,-1,367,371,368,-1,368,371,372,-1,368,372,366,-1,366,372,370,-1,366,370,369,-1,369,370,373,-1,373,377,380,-1,373,380,375,-1,373,375,371,-1,371,375,372,-1,372,375,376,-1,372,376,374,-1,372,374,370,-1,370,374,379,-1,373,370,379,-1,373,379,377,-1,377,379,383,-1,377,383,381,-1,377,381,384,-1,377,384,380,-1,381,383,389,-1,381,389,388,-1,381,388,387,-1,381,387,386,-1,381,386,385,-1,381,385,384,-1,376,375,374,-1,378,379,374,-1,378,374,375,-1,378,375,380,-1,382,386,387,-1,382,387,388,-1,382,388,389,-1,382,389,383,-1,382,383,379,-1,382,379,378,-1,382,378,380,-1,382,380,384,-1,382,384,385,-1,382,385,386,-1}, 2780);
TextureCoordinate& TextureCoordinate237 =  TextureCoordinate();
TextureCoordinate237.setPoint(new float[]{0.0,0.0,0.5,0.5,0.5,0.0,0.0,0.5}, 8);
IndexedFaceSet236.setTexCoord(&TextureCoordinate237);

Coordinate& Coordinate238 =  Coordinate();
Coordinate238.setUSE(CString("Joe_SkinCoord"));
IndexedFaceSet236.setCoord(&Coordinate238);

Shape231.setGeometry(&IndexedFaceSet236);

HAnimHumanoid28.setSkin(&Shape231);

Group27.addChild(&HAnimHumanoid28);

Scene16.addChild(&Group27);

Group& Group239 =  Group();
TimeSensor& TimeSensor240 =  TimeSensor();
TimeSensor240.setDEF(CString("KickTimer"));
TimeSensor240.setCycleInterval(3.73);
TimeSensor240.setLoop(true);
Group239.addChild(&TimeSensor240);

OrientationInterpolator& OrientationInterpolator241 =  OrientationInterpolator();
OrientationInterpolator241.setDEF(CString("HumanoidRoot_RotationInterpolator"));
OrientationInterpolator241.setKey(new float[]{0.0,0.1,0.4,0.6,1.0}, 5);
OrientationInterpolator241.setKeyValue(new float[]{1.0,0.0,0.0,0.5,1.0,0.0,0.0,0.5,-1.0,0.0,0.0,0.1,-1.0,0.0,0.0,0.5,-1.0,0.0,0.0,0.5}, 20);
Group239.addChild(&OrientationInterpolator241);

PositionInterpolator& PositionInterpolator242 =  PositionInterpolator();
PositionInterpolator242.setDEF(CString("HumanoidRoot_TranslationInterpolator"));
PositionInterpolator242.setKey(new float[]{0.0,0.2,0.6,1.0}, 4);
PositionInterpolator242.setKeyValue(new float[]{1.0,0.3,-1.0,0.4,-0.04,-0.4,-0.18,0.1,0.0,-0.2,0.15,0.15}, 12);
Group239.addChild(&PositionInterpolator242);

OrientationInterpolator& OrientationInterpolator243 =  OrientationInterpolator();
OrientationInterpolator243.setDEF(CString("sacroiliac_RotationInterpolator"));
OrientationInterpolator243.setKey(new float[]{0.0,0.5,1.0}, 3);
OrientationInterpolator243.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
Group239.addChild(&OrientationInterpolator243);

OrientationInterpolator& OrientationInterpolator244 =  OrientationInterpolator();
OrientationInterpolator244.setDEF(CString("l_hip_RotationInterpolator"));
OrientationInterpolator244.setKey(new float[]{0.0,0.1,0.3,0.45,1.0}, 5);
OrientationInterpolator244.setKeyValue(new float[]{-1.0,0.0,0.0,1.5,-1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,0.5,1.0,0.0,0.0,1.0}, 20);
Group239.addChild(&OrientationInterpolator244);

OrientationInterpolator& OrientationInterpolator245 =  OrientationInterpolator();
OrientationInterpolator245.setDEF(CString("l_knee_RotationInterpolator"));
OrientationInterpolator245.setKey(new float[]{0.0,0.2,0.35,0.5,1.0}, 5);
OrientationInterpolator245.setKeyValue(new float[]{1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.2,1.0,0.0,1.0,0.5,1.0,0.0,0.0,1.4}, 20);
Group239.addChild(&OrientationInterpolator245);

OrientationInterpolator& OrientationInterpolator246 =  OrientationInterpolator();
OrientationInterpolator246.setDEF(CString("l_ankle_RotationInterpolator"));
OrientationInterpolator246.setKey(new float[]{0.0,0.25,1.0}, 3);
OrientationInterpolator246.setKeyValue(new float[]{-1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0}, 12);
Group239.addChild(&OrientationInterpolator246);

OrientationInterpolator& OrientationInterpolator247 =  OrientationInterpolator();
OrientationInterpolator247.setDEF(CString("l_subtalar_RotationInterpolator"));
OrientationInterpolator247.setKey(new float[]{0.0,0.5,1.0}, 3);
OrientationInterpolator247.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
Group239.addChild(&OrientationInterpolator247);

OrientationInterpolator& OrientationInterpolator248 =  OrientationInterpolator();
OrientationInterpolator248.setDEF(CString("l_midtarsal_RotationInterpolator"));
OrientationInterpolator248.setKey(new float[]{0.0,0.5,1.0}, 3);
OrientationInterpolator248.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
Group239.addChild(&OrientationInterpolator248);

OrientationInterpolator& OrientationInterpolator249 =  OrientationInterpolator();
OrientationInterpolator249.setDEF(CString("l_metatarsal_RotationInterpolator"));
OrientationInterpolator249.setKey(new float[]{0.0,0.5,1.0}, 3);
OrientationInterpolator249.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
Group239.addChild(&OrientationInterpolator249);

OrientationInterpolator& OrientationInterpolator250 =  OrientationInterpolator();
OrientationInterpolator250.setDEF(CString("r_hip_RotationInterpolator"));
OrientationInterpolator250.setKey(new float[]{0.0,0.25,0.5,0.75,1.0}, 5);
OrientationInterpolator250.setKeyValue(new float[]{1.0,0.0,0.0,1.0,1.0,0.0,0.0,1.0,-1.0,0.0,0.0,1.0,-1.0,0.0,0.0,1.0,-1.0,0.0,0.0,1.0}, 20);
Group239.addChild(&OrientationInterpolator250);

OrientationInterpolator& OrientationInterpolator251 =  OrientationInterpolator();
OrientationInterpolator251.setDEF(CString("r_knee_RotationInterpolator"));
OrientationInterpolator251.setKey(new float[]{0.0,0.25,0.5,0.75,1.0}, 5);
OrientationInterpolator251.setKeyValue(new float[]{1.0,0.0,0.0,0.1,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,1.0,0.0,0.0,1.0,1.0,0.0,0.0,1.5}, 20);
Group239.addChild(&OrientationInterpolator251);

OrientationInterpolator& OrientationInterpolator252 =  OrientationInterpolator();
OrientationInterpolator252.setDEF(CString("r_ankle_RotationInterpolator"));
OrientationInterpolator252.setKey(new float[]{0.0,0.25,0.5,0.75,1.0}, 5);
OrientationInterpolator252.setKeyValue(new float[]{-1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,1.0,0.0,0.0,1.0,1.0,0.0,0.0,0.5}, 20);
Group239.addChild(&OrientationInterpolator252);

OrientationInterpolator& OrientationInterpolator253 =  OrientationInterpolator();
OrientationInterpolator253.setDEF(CString("r_subtalar_RotationInterpolator"));
OrientationInterpolator253.setKey(new float[]{0.0,0.5,1.0}, 3);
OrientationInterpolator253.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
Group239.addChild(&OrientationInterpolator253);

OrientationInterpolator& OrientationInterpolator254 =  OrientationInterpolator();
OrientationInterpolator254.setDEF(CString("r_midtarsal_RotationInterpolator"));
OrientationInterpolator254.setKey(new float[]{0.0,0.5,1.0}, 3);
OrientationInterpolator254.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
Group239.addChild(&OrientationInterpolator254);

OrientationInterpolator& OrientationInterpolator255 =  OrientationInterpolator();
OrientationInterpolator255.setDEF(CString("r_metatarsal_RotationInterpolator"));
OrientationInterpolator255.setKey(new float[]{0.0,0.5,1.0}, 3);
OrientationInterpolator255.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
Group239.addChild(&OrientationInterpolator255);

OrientationInterpolator& OrientationInterpolator256 =  OrientationInterpolator();
OrientationInterpolator256.setDEF(CString("vl5_RotationInterpolator"));
OrientationInterpolator256.setKey(new float[]{0.0,0.5,1.0}, 3);
OrientationInterpolator256.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
Group239.addChild(&OrientationInterpolator256);

OrientationInterpolator& OrientationInterpolator257 =  OrientationInterpolator();
OrientationInterpolator257.setDEF(CString("vl4_RotationInterpolator"));
OrientationInterpolator257.setKey(new float[]{0.0,0.5,1.0}, 3);
OrientationInterpolator257.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
Group239.addChild(&OrientationInterpolator257);

OrientationInterpolator& OrientationInterpolator258 =  OrientationInterpolator();
OrientationInterpolator258.setDEF(CString("vl3_RotationInterpolator"));
OrientationInterpolator258.setKey(new float[]{0.0,0.5,1.0}, 3);
OrientationInterpolator258.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
Group239.addChild(&OrientationInterpolator258);

OrientationInterpolator& OrientationInterpolator259 =  OrientationInterpolator();
OrientationInterpolator259.setDEF(CString("vl2_RotationInterpolator"));
OrientationInterpolator259.setKey(new float[]{0.0,0.5,1.0}, 3);
OrientationInterpolator259.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
Group239.addChild(&OrientationInterpolator259);

OrientationInterpolator& OrientationInterpolator260 =  OrientationInterpolator();
OrientationInterpolator260.setDEF(CString("vl1_RotationInterpolator"));
OrientationInterpolator260.setKey(new float[]{0.0,0.5,1.0}, 3);
OrientationInterpolator260.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
Group239.addChild(&OrientationInterpolator260);

OrientationInterpolator& OrientationInterpolator261 =  OrientationInterpolator();
OrientationInterpolator261.setDEF(CString("vt12_RotationInterpolator"));
OrientationInterpolator261.setKey(new float[]{0.0,0.5,1.0}, 3);
OrientationInterpolator261.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
Group239.addChild(&OrientationInterpolator261);

OrientationInterpolator& OrientationInterpolator262 =  OrientationInterpolator();
OrientationInterpolator262.setDEF(CString("vt11_RotationInterpolator"));
OrientationInterpolator262.setKey(new float[]{0.0,0.5,1.0}, 3);
OrientationInterpolator262.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
Group239.addChild(&OrientationInterpolator262);

OrientationInterpolator& OrientationInterpolator263 =  OrientationInterpolator();
OrientationInterpolator263.setDEF(CString("vt10_RotationInterpolator"));
OrientationInterpolator263.setKey(new float[]{0.0,0.5,1.0}, 3);
OrientationInterpolator263.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
Group239.addChild(&OrientationInterpolator263);

OrientationInterpolator& OrientationInterpolator264 =  OrientationInterpolator();
OrientationInterpolator264.setDEF(CString("vt9_RotationInterpolator"));
OrientationInterpolator264.setKey(new float[]{0.0,0.5,1.0}, 3);
OrientationInterpolator264.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
Group239.addChild(&OrientationInterpolator264);

OrientationInterpolator& OrientationInterpolator265 =  OrientationInterpolator();
OrientationInterpolator265.setDEF(CString("vt8_RotationInterpolator"));
OrientationInterpolator265.setKey(new float[]{0.0,0.5,1.0}, 3);
OrientationInterpolator265.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
Group239.addChild(&OrientationInterpolator265);

OrientationInterpolator& OrientationInterpolator266 =  OrientationInterpolator();
OrientationInterpolator266.setDEF(CString("vt7_RotationInterpolator"));
OrientationInterpolator266.setKey(new float[]{0.0,0.5,1.0}, 3);
OrientationInterpolator266.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
Group239.addChild(&OrientationInterpolator266);

OrientationInterpolator& OrientationInterpolator267 =  OrientationInterpolator();
OrientationInterpolator267.setDEF(CString("vt6_RotationInterpolator"));
OrientationInterpolator267.setKey(new float[]{0.0,0.5,1.0}, 3);
OrientationInterpolator267.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
Group239.addChild(&OrientationInterpolator267);

OrientationInterpolator& OrientationInterpolator268 =  OrientationInterpolator();
OrientationInterpolator268.setDEF(CString("vt5_RotationInterpolator"));
OrientationInterpolator268.setKey(new float[]{0.0,0.5,1.0}, 3);
OrientationInterpolator268.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
Group239.addChild(&OrientationInterpolator268);

OrientationInterpolator& OrientationInterpolator269 =  OrientationInterpolator();
OrientationInterpolator269.setDEF(CString("vt4_RotationInterpolator"));
OrientationInterpolator269.setKey(new float[]{0.0,0.5,1.0}, 3);
OrientationInterpolator269.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
Group239.addChild(&OrientationInterpolator269);

OrientationInterpolator& OrientationInterpolator270 =  OrientationInterpolator();
OrientationInterpolator270.setDEF(CString("vt3_RotationInterpolator"));
OrientationInterpolator270.setKey(new float[]{0.0,0.5,1.0}, 3);
OrientationInterpolator270.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
Group239.addChild(&OrientationInterpolator270);

OrientationInterpolator& OrientationInterpolator271 =  OrientationInterpolator();
OrientationInterpolator271.setDEF(CString("vt2_RotationInterpolator"));
OrientationInterpolator271.setKey(new float[]{0.0,0.5,1.0}, 3);
OrientationInterpolator271.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
Group239.addChild(&OrientationInterpolator271);

OrientationInterpolator& OrientationInterpolator272 =  OrientationInterpolator();
OrientationInterpolator272.setDEF(CString("vt1_RotationInterpolator"));
OrientationInterpolator272.setKey(new float[]{0.0,0.5,1.0}, 3);
OrientationInterpolator272.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
Group239.addChild(&OrientationInterpolator272);

OrientationInterpolator& OrientationInterpolator273 =  OrientationInterpolator();
OrientationInterpolator273.setDEF(CString("vc7_RotationInterpolator"));
OrientationInterpolator273.setKey(new float[]{0.0,0.5,1.0}, 3);
OrientationInterpolator273.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
Group239.addChild(&OrientationInterpolator273);

OrientationInterpolator& OrientationInterpolator274 =  OrientationInterpolator();
OrientationInterpolator274.setDEF(CString("vc6_RotationInterpolator"));
OrientationInterpolator274.setKey(new float[]{0.0,0.5,1.0}, 3);
OrientationInterpolator274.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
Group239.addChild(&OrientationInterpolator274);

OrientationInterpolator& OrientationInterpolator275 =  OrientationInterpolator();
OrientationInterpolator275.setDEF(CString("vc5_RotationInterpolator"));
OrientationInterpolator275.setKey(new float[]{0.0,0.5,1.0}, 3);
OrientationInterpolator275.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
Group239.addChild(&OrientationInterpolator275);

OrientationInterpolator& OrientationInterpolator276 =  OrientationInterpolator();
OrientationInterpolator276.setDEF(CString("vc4_RotationInterpolator"));
OrientationInterpolator276.setKey(new float[]{0.0,0.3,0.4,1.0}, 4);
OrientationInterpolator276.setKeyValue(new float[]{1.0,0.0,1.0,0.25,-1.0,0.0,-1.0,0.35,1.0,0.0,0.0,0.75,1.0,0.0,1.0,0.5}, 16);
Group239.addChild(&OrientationInterpolator276);

OrientationInterpolator& OrientationInterpolator277 =  OrientationInterpolator();
OrientationInterpolator277.setDEF(CString("vc3_RotationInterpolator"));
OrientationInterpolator277.setKey(new float[]{0.0,0.5,1.0}, 3);
OrientationInterpolator277.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
Group239.addChild(&OrientationInterpolator277);

OrientationInterpolator& OrientationInterpolator278 =  OrientationInterpolator();
OrientationInterpolator278.setDEF(CString("vc2_RotationInterpolator"));
OrientationInterpolator278.setKey(new float[]{0.0,0.5,1.0}, 3);
OrientationInterpolator278.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
Group239.addChild(&OrientationInterpolator278);

OrientationInterpolator& OrientationInterpolator279 =  OrientationInterpolator();
OrientationInterpolator279.setDEF(CString("vc1_RotationInterpolator"));
OrientationInterpolator279.setKey(new float[]{0.0,0.5,1.0}, 3);
OrientationInterpolator279.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
Group239.addChild(&OrientationInterpolator279);

OrientationInterpolator& OrientationInterpolator280 =  OrientationInterpolator();
OrientationInterpolator280.setDEF(CString("skullbase_RotationInterpolator"));
OrientationInterpolator280.setKey(new float[]{0.0,0.2,0.75,1.0}, 4);
OrientationInterpolator280.setKeyValue(new float[]{0.0,-1.0,0.0,0.5,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.35}, 16);
Group239.addChild(&OrientationInterpolator280);

OrientationInterpolator& OrientationInterpolator281 =  OrientationInterpolator();
OrientationInterpolator281.setDEF(CString("l_eyelid_joint_RotationInterpolator"));
OrientationInterpolator281.setKey(new float[]{0.0,0.5,1.0}, 3);
OrientationInterpolator281.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
Group239.addChild(&OrientationInterpolator281);

OrientationInterpolator& OrientationInterpolator282 =  OrientationInterpolator();
OrientationInterpolator282.setDEF(CString("l_eyeball_joint_RotationInterpolator"));
OrientationInterpolator282.setKey(new float[]{0.0,0.5,1.0}, 3);
OrientationInterpolator282.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
Group239.addChild(&OrientationInterpolator282);

OrientationInterpolator& OrientationInterpolator283 =  OrientationInterpolator();
OrientationInterpolator283.setDEF(CString("l_eyebrow_joint_RotationInterpolator"));
OrientationInterpolator283.setKey(new float[]{0.0,0.5,1.0}, 3);
OrientationInterpolator283.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
Group239.addChild(&OrientationInterpolator283);

OrientationInterpolator& OrientationInterpolator284 =  OrientationInterpolator();
OrientationInterpolator284.setDEF(CString("r_eyelid_joint_RotationInterpolator"));
OrientationInterpolator284.setKey(new float[]{0.0,0.5,1.0}, 3);
OrientationInterpolator284.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
Group239.addChild(&OrientationInterpolator284);

OrientationInterpolator& OrientationInterpolator285 =  OrientationInterpolator();
OrientationInterpolator285.setDEF(CString("r_eyeball_joint_RotationInterpolator"));
OrientationInterpolator285.setKey(new float[]{0.0,0.5,1.0}, 3);
OrientationInterpolator285.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
Group239.addChild(&OrientationInterpolator285);

OrientationInterpolator& OrientationInterpolator286 =  OrientationInterpolator();
OrientationInterpolator286.setDEF(CString("r_eyebrow_joint_RotationInterpolator"));
OrientationInterpolator286.setKey(new float[]{0.0,0.5,1.0}, 3);
OrientationInterpolator286.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
Group239.addChild(&OrientationInterpolator286);

OrientationInterpolator& OrientationInterpolator287 =  OrientationInterpolator();
OrientationInterpolator287.setDEF(CString("temporomandibular_RotationInterpolator"));
OrientationInterpolator287.setKey(new float[]{0.0,0.5,1.0}, 3);
OrientationInterpolator287.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
Group239.addChild(&OrientationInterpolator287);

OrientationInterpolator& OrientationInterpolator288 =  OrientationInterpolator();
OrientationInterpolator288.setDEF(CString("l_sternoclavicular_RotationInterpolator"));
OrientationInterpolator288.setKey(new float[]{0.0,0.5,1.0}, 3);
OrientationInterpolator288.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
Group239.addChild(&OrientationInterpolator288);

OrientationInterpolator& OrientationInterpolator289 =  OrientationInterpolator();
OrientationInterpolator289.setDEF(CString("l_acromioclavicular_RotationInterpolator"));
OrientationInterpolator289.setKey(new float[]{0.0,0.5,1.0}, 3);
OrientationInterpolator289.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
Group239.addChild(&OrientationInterpolator289);

OrientationInterpolator& OrientationInterpolator290 =  OrientationInterpolator();
OrientationInterpolator290.setDEF(CString("l_shoulder_RotationInterpolator"));
OrientationInterpolator290.setKey(new float[]{0.0,0.4,1.0}, 3);
OrientationInterpolator290.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.5,-1.0,0.0,1.0,1.75}, 12);
Group239.addChild(&OrientationInterpolator290);

OrientationInterpolator& OrientationInterpolator291 =  OrientationInterpolator();
OrientationInterpolator291.setDEF(CString("l_elbow_RotationInterpolator"));
OrientationInterpolator291.setKey(new float[]{0.0,0.5,1.0}, 3);
OrientationInterpolator291.setKeyValue(new float[]{-1.0,0.0,0.0,3.0,-1.0,0.0,0.0,0.75,-1.0,-1.0,0.0,0.5}, 12);
Group239.addChild(&OrientationInterpolator291);

OrientationInterpolator& OrientationInterpolator292 =  OrientationInterpolator();
OrientationInterpolator292.setDEF(CString("l_wrist_RotationInterpolator"));
OrientationInterpolator292.setKey(new float[]{0.0,0.4,0.8,1.0}, 4);
OrientationInterpolator292.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,1.0,0.0,1.3,0.0,-0.5,1.0,1.3,0.0,0.0,1.0,0.0}, 16);
Group239.addChild(&OrientationInterpolator292);

OrientationInterpolator& OrientationInterpolator293 =  OrientationInterpolator();
OrientationInterpolator293.setDEF(CString("l_thumb1_RotationInterpolator"));
OrientationInterpolator293.setKey(new float[]{0.0,0.5,1.0}, 3);
OrientationInterpolator293.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
Group239.addChild(&OrientationInterpolator293);

OrientationInterpolator& OrientationInterpolator294 =  OrientationInterpolator();
OrientationInterpolator294.setDEF(CString("l_thumb2_RotationInterpolator"));
OrientationInterpolator294.setKey(new float[]{0.0,0.5,1.0}, 3);
OrientationInterpolator294.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
Group239.addChild(&OrientationInterpolator294);

OrientationInterpolator& OrientationInterpolator295 =  OrientationInterpolator();
OrientationInterpolator295.setDEF(CString("l_thumb3_RotationInterpolator"));
OrientationInterpolator295.setKey(new float[]{0.0,0.5,1.0}, 3);
OrientationInterpolator295.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
Group239.addChild(&OrientationInterpolator295);

OrientationInterpolator& OrientationInterpolator296 =  OrientationInterpolator();
OrientationInterpolator296.setDEF(CString("l_index0_RotationInterpolator"));
OrientationInterpolator296.setKey(new float[]{0.0,0.5,1.0}, 3);
OrientationInterpolator296.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
Group239.addChild(&OrientationInterpolator296);

OrientationInterpolator& OrientationInterpolator297 =  OrientationInterpolator();
OrientationInterpolator297.setDEF(CString("l_index1_RotationInterpolator"));
OrientationInterpolator297.setKey(new float[]{0.0,0.5,1.0}, 3);
OrientationInterpolator297.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
Group239.addChild(&OrientationInterpolator297);

OrientationInterpolator& OrientationInterpolator298 =  OrientationInterpolator();
OrientationInterpolator298.setDEF(CString("l_index2_RotationInterpolator"));
OrientationInterpolator298.setKey(new float[]{0.0,0.5,1.0}, 3);
OrientationInterpolator298.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
Group239.addChild(&OrientationInterpolator298);

OrientationInterpolator& OrientationInterpolator299 =  OrientationInterpolator();
OrientationInterpolator299.setDEF(CString("l_index3_RotationInterpolator"));
OrientationInterpolator299.setKey(new float[]{0.0,0.5,1.0}, 3);
OrientationInterpolator299.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
Group239.addChild(&OrientationInterpolator299);

OrientationInterpolator& OrientationInterpolator300 =  OrientationInterpolator();
OrientationInterpolator300.setDEF(CString("l_middle0_RotationInterpolator"));
OrientationInterpolator300.setKey(new float[]{0.0,0.5,1.0}, 3);
OrientationInterpolator300.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
Group239.addChild(&OrientationInterpolator300);

OrientationInterpolator& OrientationInterpolator301 =  OrientationInterpolator();
OrientationInterpolator301.setDEF(CString("l_middle1_RotationInterpolator"));
OrientationInterpolator301.setKey(new float[]{0.0,0.5,1.0}, 3);
OrientationInterpolator301.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
Group239.addChild(&OrientationInterpolator301);

OrientationInterpolator& OrientationInterpolator302 =  OrientationInterpolator();
OrientationInterpolator302.setDEF(CString("l_middle2_RotationInterpolator"));
OrientationInterpolator302.setKey(new float[]{0.0,0.5,1.0}, 3);
OrientationInterpolator302.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
Group239.addChild(&OrientationInterpolator302);

OrientationInterpolator& OrientationInterpolator303 =  OrientationInterpolator();
OrientationInterpolator303.setDEF(CString("l_middle3_RotationInterpolator"));
OrientationInterpolator303.setKey(new float[]{0.0,0.5,1.0}, 3);
OrientationInterpolator303.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
Group239.addChild(&OrientationInterpolator303);

OrientationInterpolator& OrientationInterpolator304 =  OrientationInterpolator();
OrientationInterpolator304.setDEF(CString("l_ring0_RotationInterpolator"));
OrientationInterpolator304.setKey(new float[]{0.0,0.5,1.0}, 3);
OrientationInterpolator304.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
Group239.addChild(&OrientationInterpolator304);

OrientationInterpolator& OrientationInterpolator305 =  OrientationInterpolator();
OrientationInterpolator305.setDEF(CString("l_ring1_RotationInterpolator"));
OrientationInterpolator305.setKey(new float[]{0.0,0.5,1.0}, 3);
OrientationInterpolator305.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
Group239.addChild(&OrientationInterpolator305);

OrientationInterpolator& OrientationInterpolator306 =  OrientationInterpolator();
OrientationInterpolator306.setDEF(CString("l_ring2_RotationInterpolator"));
OrientationInterpolator306.setKey(new float[]{0.0,0.5,1.0}, 3);
OrientationInterpolator306.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
Group239.addChild(&OrientationInterpolator306);

OrientationInterpolator& OrientationInterpolator307 =  OrientationInterpolator();
OrientationInterpolator307.setDEF(CString("l_ring3_RotationInterpolator"));
OrientationInterpolator307.setKey(new float[]{0.0,0.5,1.0}, 3);
OrientationInterpolator307.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
Group239.addChild(&OrientationInterpolator307);

OrientationInterpolator& OrientationInterpolator308 =  OrientationInterpolator();
OrientationInterpolator308.setDEF(CString("l_pinky0_RotationInterpolator"));
OrientationInterpolator308.setKey(new float[]{0.0,0.5,1.0}, 3);
OrientationInterpolator308.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
Group239.addChild(&OrientationInterpolator308);

OrientationInterpolator& OrientationInterpolator309 =  OrientationInterpolator();
OrientationInterpolator309.setDEF(CString("l_pinky1_RotationInterpolator"));
OrientationInterpolator309.setKey(new float[]{0.0,0.5,1.0}, 3);
OrientationInterpolator309.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
Group239.addChild(&OrientationInterpolator309);

OrientationInterpolator& OrientationInterpolator310 =  OrientationInterpolator();
OrientationInterpolator310.setDEF(CString("l_pinky2_RotationInterpolator"));
OrientationInterpolator310.setKey(new float[]{0.0,0.5,1.0}, 3);
OrientationInterpolator310.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
Group239.addChild(&OrientationInterpolator310);

OrientationInterpolator& OrientationInterpolator311 =  OrientationInterpolator();
OrientationInterpolator311.setDEF(CString("l_pinky3_RotationInterpolator"));
OrientationInterpolator311.setKey(new float[]{0.0,0.5,1.0}, 3);
OrientationInterpolator311.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
Group239.addChild(&OrientationInterpolator311);

OrientationInterpolator& OrientationInterpolator312 =  OrientationInterpolator();
OrientationInterpolator312.setDEF(CString("r_sternoclavicular_RotationInterpolator"));
OrientationInterpolator312.setKey(new float[]{0.0,0.5,1.0}, 3);
OrientationInterpolator312.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
Group239.addChild(&OrientationInterpolator312);

OrientationInterpolator& OrientationInterpolator313 =  OrientationInterpolator();
OrientationInterpolator313.setDEF(CString("r_acromioclavicular_RotationInterpolator"));
OrientationInterpolator313.setKey(new float[]{0.0,0.5,1.0}, 3);
OrientationInterpolator313.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
Group239.addChild(&OrientationInterpolator313);

OrientationInterpolator& OrientationInterpolator314 =  OrientationInterpolator();
OrientationInterpolator314.setDEF(CString("r_shoulder_RotationInterpolator"));
OrientationInterpolator314.setKey(new float[]{0.0,0.5,1.0}, 3);
OrientationInterpolator314.setKeyValue(new float[]{0.0,0.0,-1.0,2.5,0.0,0.0,-1.0,1.5,0.0,0.0,-1.0,1.75}, 12);
Group239.addChild(&OrientationInterpolator314);

OrientationInterpolator& OrientationInterpolator315 =  OrientationInterpolator();
OrientationInterpolator315.setDEF(CString("r_elbow_RotationInterpolator"));
OrientationInterpolator315.setKey(new float[]{0.0,0.5,1.0}, 3);
OrientationInterpolator315.setKeyValue(new float[]{-1.0,0.0,0.0,3.0,-1.0,0.0,0.0,0.75,-1.0,-1.0,0.0,0.5}, 12);
Group239.addChild(&OrientationInterpolator315);

OrientationInterpolator& OrientationInterpolator316 =  OrientationInterpolator();
OrientationInterpolator316.setDEF(CString("r_wrist_RotationInterpolator"));
OrientationInterpolator316.setKey(new float[]{0.0,0.5,0.7,1.0}, 4);
OrientationInterpolator316.setKeyValue(new float[]{0.0,1.0,0.0,0.3,0.0,0.0,1.0,0.0,0.0,0.0,-1.0,1.0,0.0,-1.0,0.0,0.3}, 16);
Group239.addChild(&OrientationInterpolator316);

OrientationInterpolator& OrientationInterpolator317 =  OrientationInterpolator();
OrientationInterpolator317.setDEF(CString("r_thumb1_RotationInterpolator"));
OrientationInterpolator317.setKey(new float[]{0.0,0.5,1.0}, 3);
OrientationInterpolator317.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
Group239.addChild(&OrientationInterpolator317);

OrientationInterpolator& OrientationInterpolator318 =  OrientationInterpolator();
OrientationInterpolator318.setDEF(CString("r_thumb2_RotationInterpolator"));
OrientationInterpolator318.setKey(new float[]{0.0,0.5,1.0}, 3);
OrientationInterpolator318.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
Group239.addChild(&OrientationInterpolator318);

OrientationInterpolator& OrientationInterpolator319 =  OrientationInterpolator();
OrientationInterpolator319.setDEF(CString("r_thumb3_RotationInterpolator"));
OrientationInterpolator319.setKey(new float[]{0.0,0.5,1.0}, 3);
OrientationInterpolator319.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
Group239.addChild(&OrientationInterpolator319);

OrientationInterpolator& OrientationInterpolator320 =  OrientationInterpolator();
OrientationInterpolator320.setDEF(CString("r_index0_RotationInterpolator"));
OrientationInterpolator320.setKey(new float[]{0.0,0.5,0.75,1.0}, 4);
OrientationInterpolator320.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0}, 16);
Group239.addChild(&OrientationInterpolator320);

OrientationInterpolator& OrientationInterpolator321 =  OrientationInterpolator();
OrientationInterpolator321.setDEF(CString("r_index1_RotationInterpolator"));
OrientationInterpolator321.setKey(new float[]{0.0,0.5,0.75,1.0}, 4);
OrientationInterpolator321.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.5,0.0,0.0,1.0,0.0}, 16);
Group239.addChild(&OrientationInterpolator321);

OrientationInterpolator& OrientationInterpolator322 =  OrientationInterpolator();
OrientationInterpolator322.setDEF(CString("r_index2_RotationInterpolator"));
OrientationInterpolator322.setKey(new float[]{0.0,0.5,0.75,1.0}, 4);
OrientationInterpolator322.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.5,0.0,0.0,1.0,0.0}, 16);
Group239.addChild(&OrientationInterpolator322);

OrientationInterpolator& OrientationInterpolator323 =  OrientationInterpolator();
OrientationInterpolator323.setDEF(CString("r_index3_RotationInterpolator"));
OrientationInterpolator323.setKey(new float[]{0.0,0.5,0.75,1.0}, 4);
OrientationInterpolator323.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.5,0.0,0.0,1.0,0.0}, 16);
Group239.addChild(&OrientationInterpolator323);

OrientationInterpolator& OrientationInterpolator324 =  OrientationInterpolator();
OrientationInterpolator324.setDEF(CString("r_middle0_RotationInterpolator"));
OrientationInterpolator324.setKey(new float[]{0.0,0.5,0.75,1.0}, 4);
OrientationInterpolator324.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0}, 16);
Group239.addChild(&OrientationInterpolator324);

OrientationInterpolator& OrientationInterpolator325 =  OrientationInterpolator();
OrientationInterpolator325.setDEF(CString("r_middle1_RotationInterpolator"));
OrientationInterpolator325.setKey(new float[]{0.0,0.5,0.75,1.0}, 4);
OrientationInterpolator325.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.5,0.0,0.0,1.0,0.0}, 16);
Group239.addChild(&OrientationInterpolator325);

OrientationInterpolator& OrientationInterpolator326 =  OrientationInterpolator();
OrientationInterpolator326.setDEF(CString("r_middle2_RotationInterpolator"));
OrientationInterpolator326.setKey(new float[]{0.0,0.5,0.75,1.0}, 4);
OrientationInterpolator326.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.5,0.0,0.0,1.0,0.0}, 16);
Group239.addChild(&OrientationInterpolator326);

OrientationInterpolator& OrientationInterpolator327 =  OrientationInterpolator();
OrientationInterpolator327.setDEF(CString("r_middle3_RotationInterpolator"));
OrientationInterpolator327.setKey(new float[]{0.0,0.5,0.75,1.0}, 4);
OrientationInterpolator327.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.5,0.0,0.0,1.0,0.0}, 16);
Group239.addChild(&OrientationInterpolator327);

OrientationInterpolator& OrientationInterpolator328 =  OrientationInterpolator();
OrientationInterpolator328.setDEF(CString("r_ring0_RotationInterpolator"));
OrientationInterpolator328.setKey(new float[]{0.0,0.5,0.75,1.0}, 4);
OrientationInterpolator328.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0}, 16);
Group239.addChild(&OrientationInterpolator328);

OrientationInterpolator& OrientationInterpolator329 =  OrientationInterpolator();
OrientationInterpolator329.setDEF(CString("r_ring1_RotationInterpolator"));
OrientationInterpolator329.setKey(new float[]{0.0,0.5,0.75,1.0}, 4);
OrientationInterpolator329.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.5,0.0,0.0,1.0,0.0}, 16);
Group239.addChild(&OrientationInterpolator329);

OrientationInterpolator& OrientationInterpolator330 =  OrientationInterpolator();
OrientationInterpolator330.setDEF(CString("r_ring2_RotationInterpolator"));
OrientationInterpolator330.setKey(new float[]{0.0,0.5,0.75,1.0}, 4);
OrientationInterpolator330.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.5,0.0,0.0,1.0,0.0}, 16);
Group239.addChild(&OrientationInterpolator330);

OrientationInterpolator& OrientationInterpolator331 =  OrientationInterpolator();
OrientationInterpolator331.setDEF(CString("r_ring3_RotationInterpolator"));
OrientationInterpolator331.setKey(new float[]{0.0,0.5,0.75,1.0}, 4);
OrientationInterpolator331.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.5,0.0,0.0,1.0,0.0}, 16);
Group239.addChild(&OrientationInterpolator331);

OrientationInterpolator& OrientationInterpolator332 =  OrientationInterpolator();
OrientationInterpolator332.setDEF(CString("r_pinky0_RotationInterpolator"));
OrientationInterpolator332.setKey(new float[]{0.0,0.5,0.75,1.0}, 4);
OrientationInterpolator332.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0}, 16);
Group239.addChild(&OrientationInterpolator332);

OrientationInterpolator& OrientationInterpolator333 =  OrientationInterpolator();
OrientationInterpolator333.setDEF(CString("r_pinky1_RotationInterpolator"));
OrientationInterpolator333.setKey(new float[]{0.0,0.5,0.75,1.0}, 4);
OrientationInterpolator333.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.5,0.0,0.0,1.0,0.0}, 16);
Group239.addChild(&OrientationInterpolator333);

OrientationInterpolator& OrientationInterpolator334 =  OrientationInterpolator();
OrientationInterpolator334.setDEF(CString("r_pinky2_RotationInterpolator"));
OrientationInterpolator334.setKey(new float[]{0.0,0.5,0.75,1.0}, 4);
OrientationInterpolator334.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.5,0.0,0.0,1.0,0.0}, 16);
Group239.addChild(&OrientationInterpolator334);

OrientationInterpolator& OrientationInterpolator335 =  OrientationInterpolator();
OrientationInterpolator335.setDEF(CString("r_pinky3_RotationInterpolator"));
OrientationInterpolator335.setKey(new float[]{0.0,0.5,0.75,1.0}, 4);
OrientationInterpolator335.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.5,0.0,0.0,1.0,0.0}, 16);
Group239.addChild(&OrientationInterpolator335);

Scene16.addChild(&Group239);

Group& Group336 =  Group();
Group336.setDEF(CString("DisplacersAnimationGroup"));
ScalarInterpolator& ScalarInterpolator337 =  ScalarInterpolator();
ScalarInterpolator337.setDEF(CString("skull_tipInterpolator"));
ScalarInterpolator337.setKey(new float[]{0.0,0.1,0.2,0.35,0.6,0.7,0.85,0.88,0.94,0.97,1.0}, 11);
ScalarInterpolator337.setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.2,0.4,1.0,0.0,1.0,0.4,0.0}, 11);
Group336.addChild(&ScalarInterpolator337);

Scene16.addChild(&Group336);

Group& Group338 =  Group();
Group338.setDEF(CString("SkinTextureTransformAnimationGroup"));
ScalarInterpolator& ScalarInterpolator339 =  ScalarInterpolator();
ScalarInterpolator339.setDEF(CString("SkinInterpolator"));
ScalarInterpolator339.setKey(new float[]{0.0,0.2,0.4,0.5,0.6,0.7,0.8,1.0}, 8);
ScalarInterpolator339.setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,1.0,2.0,0.0}, 8);
Group338.addChild(&ScalarInterpolator339);

Scene16.addChild(&Group338);

Group& Group340 =  Group();
Transform& Transform341 =  Transform();
Transform341.setDEF(CString("SBall"));
Transform341.setTranslation(new float[]{1.750548,3.495979,8.727154});
Transform341.setRotation(new float[]{-0.700140042014005,0.140028008402801,-0.700140042014005,3.0});
Transform341.setScale(new float[]{0.23,0.23,0.23});
Shape& Shape342 =  Shape();
Shape342.setDEF(CString("ball_Shape"));
Appearance& Appearance343 =  Appearance();
Appearance343.setDEF(CString("ball_Appearance"));
Material& Material344 =  Material();
Material344.setDEF(CString("ball_Material"));
Material344.setDiffuseColor(new float[]{0.3,0.3,1.0});
Material344.setEmissiveColor(new float[]{0.3,0.3,0.33});
Appearance343.addChild(&Material344);

ImageTexture& ImageTexture345 =  ImageTexture();
ImageTexture345.setUSE(CString("JoeSkinImageTexture"));
Appearance343.addChild(&ImageTexture345);

Shape342.addChild(&Appearance343);

IndexedFaceSet& IndexedFaceSet346 =  IndexedFaceSet();
IndexedFaceSet346.setDEF(CString("ball_IndexedFaceSet"));
IndexedFaceSet346.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,1,-1,1,13,14,-1,1,14,2,-1,2,14,15,-1,2,15,3,-1,3,15,16,-1,3,16,4,-1,4,16,17,-1,4,17,5,-1,5,17,18,-1,5,18,6,-1,6,18,19,-1,6,19,7,-1,7,19,20,-1,7,20,8,-1,8,20,21,-1,8,21,9,-1,9,21,22,-1,9,22,10,-1,10,22,23,-1,10,23,11,-1,11,23,24,-1,11,24,12,-1,12,24,13,-1,12,13,1,-1,13,25,26,-1,13,26,14,-1,14,26,27,-1,14,27,15,-1,15,27,28,-1,15,28,16,-1,16,28,29,-1,16,29,17,-1,17,29,30,-1,17,30,18,-1,18,30,31,-1,18,31,19,-1,19,31,32,-1,19,32,20,-1,20,32,33,-1,20,33,21,-1,21,33,34,-1,21,34,22,-1,22,34,35,-1,22,35,23,-1,23,35,36,-1,23,36,24,-1,24,36,25,-1,24,25,13,-1,25,37,38,-1,25,38,26,-1,26,38,39,-1,26,39,27,-1,27,39,40,-1,27,40,28,-1,28,40,41,-1,28,41,29,-1,29,41,42,-1,29,42,30,-1,30,42,43,-1,30,43,31,-1,31,43,44,-1,31,44,32,-1,32,44,45,-1,32,45,33,-1,33,45,46,-1,33,46,34,-1,34,46,47,-1,34,47,35,-1,35,47,48,-1,35,48,36,-1,36,48,37,-1,36,37,25,-1,37,49,50,-1,37,50,38,-1,38,50,51,-1,38,51,39,-1,39,51,52,-1,39,52,40,-1,40,52,53,-1,40,53,41,-1,41,53,54,-1,41,54,42,-1,42,54,55,-1,42,55,43,-1,43,55,56,-1,43,56,44,-1,44,56,57,-1,44,57,45,-1,45,57,58,-1,45,58,46,-1,46,58,59,-1,46,59,47,-1,47,59,60,-1,47,60,48,-1,48,60,49,-1,48,49,37,-1,61,50,49,-1,61,51,50,-1,61,52,51,-1,61,53,52,-1,61,54,53,-1,61,55,54,-1,61,56,55,-1,61,57,56,-1,61,58,57,-1,61,59,58,-1,61,60,59,-1,61,49,60,-1}, 480);
Coordinate& Coordinate347 =  Coordinate();
Coordinate347.setDEF(CString("Ball_Coordinates"));
Coordinate347.setPoint(new float[]{0.0,0.4675,0.0,0.0,0.4049,-0.2338,-0.1169,0.4049,-0.2024,-0.2024,0.4049,-0.1169,-0.2338,0.4049,0.0,-0.2024,0.4049,0.1169,-0.1169,0.4049,0.2024,0.0,0.4049,0.2338,0.1169,0.4049,0.2024,0.2024,0.4049,0.1169,0.2338,0.4049,0.0,0.2024,0.4049,-0.1169,0.1169,0.4049,-0.2024,0.0,0.2338,-0.4049,-0.2024,0.2338,-0.3506,-0.3506,0.2338,-0.2024,-0.4049,0.2338,0.0,-0.3506,0.2338,0.2024,-0.2024,0.2338,0.3506,0.0,0.2338,0.4049,0.2024,0.2338,0.3506,0.3506,0.2338,0.2024,0.4049,0.2338,0.0,0.3506,0.2338,-0.2024,0.2024,0.2338,-0.3506,0.0,0.0,-0.4675,-0.2338,0.0,-0.4049,-0.4049,0.0,-0.2338,-0.4675,0.0,0.0,-0.4049,0.0,0.2338,-0.2338,0.0,0.4049,0.0,0.0,0.4675,0.2338,0.0,0.4049,0.4049,0.0,0.2338,0.4675,0.0,0.0,0.4049,0.0,-0.2338,0.2338,0.0,-0.4049,0.0,-0.2338,-0.4049,-0.2024,-0.2338,-0.3506,-0.3506,-0.2338,-0.2024,-0.4049,-0.2338,0.0,-0.3506,-0.2338,0.2024,-0.2024,-0.2338,0.3506,0.0,-0.2338,0.4049,0.2024,-0.2338,0.3506,0.3506,-0.2338,0.2024,0.4049,-0.2338,0.0,0.3506,-0.2338,-0.2024,0.2024,-0.2338,-0.3506,0.0,-0.4049,-0.2338,-0.1169,-0.4049,-0.2024,-0.2024,-0.4049,-0.1169,-0.2338,-0.4049,0.0,-0.2024,-0.4049,0.1169,-0.1169,-0.4049,0.2024,0.0,-0.4049,0.2338,0.1169,-0.4049,0.2024,0.2024,-0.4049,0.1169,0.2338,-0.4049,0.0,0.2024,-0.4049,-0.1169,0.1169,-0.4049,-0.2024,0.0,-0.4675,0.0}, 186);
IndexedFaceSet346.setCoord(&Coordinate347);

Shape342.setGeometry(&IndexedFaceSet346);

Transform341.addChild(&Shape342);

Viewpoint& Viewpoint348 =  Viewpoint();
Viewpoint348.setDEF(CString("ballView_1"));
Viewpoint348.setDescription(CString("Ball View"));
Transform341.addChild(&Viewpoint348);

Group340.addChild(&Transform341);

PositionInterpolator& PositionInterpolator349 =  PositionInterpolator();
PositionInterpolator349.setDEF(CString("ball_TranslationInterpolator"));
PositionInterpolator349.setKey(new float[]{0.0,0.4,0.409,1.0}, 4);
PositionInterpolator349.setKeyValue(new float[]{-1.0,0.4,-1.0,0.0,0.07,0.0,0.05,0.06,0.05,2.0,4.0,10.0}, 12);
Group340.addChild(&PositionInterpolator349);

OrientationInterpolator& OrientationInterpolator350 =  OrientationInterpolator();
OrientationInterpolator350.setDEF(CString("ball_RotationInterpolator"));
OrientationInterpolator350.setKey(new float[]{0.0,0.4,0.41,0.71,1.0}, 5);
OrientationInterpolator350.setKeyValue(new float[]{1.0,0.0,1.0,0.25,-1.0,0.0,-1.0,1.35,-1.0,1.0,-1.0,3.35,-1.0,0.2,-1.0,3.0,-1.0,0.2,-1.0,3.0}, 20);
Group340.addChild(&OrientationInterpolator350);

Scene16.addChild(&Group340);

Group& Group351 =  Group();
Transform& Transform352 =  Transform();
Transform352.setScale(new float[]{0.2,0.2,0.2});
Shape& Shape353 =  Shape();
Shape353.setUSE(CString("AxisLinesShape"));
Transform352.addChild(&Shape353);

Group351.addChild(&Transform352);

Transform& Transform354 =  Transform();
Transform354.setDEF(CString("Circle0"));
Transform354.setScale(new float[]{1.175,1.0,1.175});
Shape& Shape355 =  Shape();
Shape355.setDEF(CString("circle_Shape"));
Appearance& Appearance356 =  Appearance();
Appearance356.setDEF(CString("circle0_Appearance"));
Material& Material357 =  Material();
Material357.setDEF(CString("circle0_Material"));
Material357.setAmbientIntensity(0.9);
Material357.setDiffuseColor(new float[]{0.9,0.0,0.7});
Material357.setEmissiveColor(new float[]{0.425,0.486,1.0});
Appearance356.addChild(&Material357);

Shape355.addChild(&Appearance356);

IndexedLineSet& IndexedLineSet358 =  IndexedLineSet();
IndexedLineSet358.setDEF(CString("Orbit1"));
IndexedLineSet358.setCoordIndex(new int32_t[]{0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,-1}, 62);
Coordinate& Coordinate359 =  Coordinate();
Coordinate359.setDEF(CString("circle_Coordinates"));
Coordinate359.setPoint(new float[]{1.0,0.0,0.0,0.995,0.0,-0.105,0.979,0.0,-0.208,0.951,0.0,-0.309,0.914,0.0,-0.407,0.866,0.0,-0.5,0.809,0.0,-0.588,0.743,0.0,-0.669,0.669,0.0,-0.743,0.588,0.0,-0.809,0.5,0.0,-0.866,0.407,0.0,-0.914,0.309,0.0,-0.951,0.208,0.0,-0.978,0.105,0.0,-0.995,0.0,0.0,-1.0,-0.105,0.0,-0.994522,-0.208,0.0,-0.978,-0.309,0.0,-0.951,-0.407,0.0,-0.914,-0.5,0.0,-0.866,-0.588,0.0,-0.809,-0.669,0.0,-0.743,-0.743,0.0,-0.669,-0.809,0.0,-0.588,-0.866,0.0,-0.5,-0.914,0.0,-0.407,-0.951,0.0,-0.309,-0.978,0.0,-0.208,-0.995,0.0,-0.105,-1.0,0.0,0.0,-0.995,0.0,0.105,-0.978,0.0,0.208,-0.951,0.0,0.309,-0.914,0.0,0.407,-0.866,0.0,0.5,-0.809,0.0,0.588,-0.743,0.0,0.669,-0.669,0.0,0.743,-0.588,0.0,0.809,-0.5,0.0,0.866,-0.407,0.0,0.914,-0.309,0.0,0.951,-0.208,0.0,0.978,-0.105,0.0,0.995,0.0,0.0,1.0,0.105,0.0,0.995,0.208,0.0,0.978,0.309,0.0,0.951,0.407,0.0,0.914,0.5,0.0,0.866,0.588,0.0,0.809,0.669,0.0,0.743,0.743,0.0,0.669,0.809,0.0,0.588,0.866,0.0,0.5,0.914,0.0,0.407,0.951,0.0,0.309,0.978,0.0,0.208,0.995,0.0,0.104,1.0,0.0,0.0}, 183);
IndexedLineSet358.setCoord(&Coordinate359);

Shape355.setGeometry(&IndexedLineSet358);

Transform354.addChild(&Shape355);

Group351.addChild(&Transform354);

Transform& Transform360 =  Transform();
Transform360.setDEF(CString("Circle1"));
Transform360.setScale(new float[]{0.5,1.0,0.5});
Shape& Shape361 =  Shape();
Shape361.setDEF(CString("circle1_Shape"));
Appearance& Appearance362 =  Appearance();
Appearance362.setDEF(CString("circle1_Appearance"));
Material& Material363 =  Material();
Material363.setDEF(CString("circle1_Material"));
Material363.setDiffuseColor(new float[]{0.9,0.0,0.7});
Material363.setEmissiveColor(new float[]{0.424956,0.483976,1.0});
Appearance362.addChild(&Material363);

Shape361.addChild(&Appearance362);

IndexedLineSet& IndexedLineSet364 =  IndexedLineSet();
IndexedLineSet364.setUSE(CString("Orbit1"));
Shape361.setGeometry(&IndexedLineSet364);

Transform360.addChild(&Shape361);

Group351.addChild(&Transform360);

Transform& Transform365 =  Transform();
Transform365.setDEF(CString("Circle2"));
Transform365.setScale(new float[]{0.25,1.0,0.25});
Shape& Shape366 =  Shape();
Shape366.setDEF(CString("circle2_Shape"));
Appearance& Appearance367 =  Appearance();
Appearance367.setDEF(CString("circle2_Appearance"));
Material& Material368 =  Material();
Material368.setDEF(CString("circle2_Material"));
Material368.setDiffuseColor(new float[]{0.9,0.0,0.7});
Material368.setEmissiveColor(new float[]{0.424956,0.483976,1.0});
Appearance367.addChild(&Material368);

Shape366.addChild(&Appearance367);

IndexedLineSet& IndexedLineSet369 =  IndexedLineSet();
IndexedLineSet369.setUSE(CString("Orbit1"));
Shape366.setGeometry(&IndexedLineSet369);

Transform365.addChild(&Shape366);

Group351.addChild(&Transform365);

Scene16.addChild(&Group351);

ROUTE& ROUTE370 =  ROUTE();
ROUTE370.setFromNode(CString("KickTimer"));
ROUTE370.setFromField(CString("fraction_changed"));
ROUTE370.setToNode(CString("HumanoidRoot_RotationInterpolator"));
ROUTE370.setToField(CString("set_fraction"));
Scene16.addChild(&ROUTE370);

ROUTE& ROUTE371 =  ROUTE();
ROUTE371.setFromNode(CString("KickTimer"));
ROUTE371.setFromField(CString("fraction_changed"));
ROUTE371.setToNode(CString("HumanoidRoot_TranslationInterpolator"));
ROUTE371.setToField(CString("set_fraction"));
Scene16.addChild(&ROUTE371);

ROUTE& ROUTE372 =  ROUTE();
ROUTE372.setFromNode(CString("KickTimer"));
ROUTE372.setFromField(CString("fraction_changed"));
ROUTE372.setToNode(CString("sacroiliac_RotationInterpolator"));
ROUTE372.setToField(CString("set_fraction"));
Scene16.addChild(&ROUTE372);

ROUTE& ROUTE373 =  ROUTE();
ROUTE373.setFromNode(CString("KickTimer"));
ROUTE373.setFromField(CString("fraction_changed"));
ROUTE373.setToNode(CString("l_hip_RotationInterpolator"));
ROUTE373.setToField(CString("set_fraction"));
Scene16.addChild(&ROUTE373);

ROUTE& ROUTE374 =  ROUTE();
ROUTE374.setFromNode(CString("KickTimer"));
ROUTE374.setFromField(CString("fraction_changed"));
ROUTE374.setToNode(CString("l_knee_RotationInterpolator"));
ROUTE374.setToField(CString("set_fraction"));
Scene16.addChild(&ROUTE374);

ROUTE& ROUTE375 =  ROUTE();
ROUTE375.setFromNode(CString("KickTimer"));
ROUTE375.setFromField(CString("fraction_changed"));
ROUTE375.setToNode(CString("l_ankle_RotationInterpolator"));
ROUTE375.setToField(CString("set_fraction"));
Scene16.addChild(&ROUTE375);

ROUTE& ROUTE376 =  ROUTE();
ROUTE376.setFromNode(CString("KickTimer"));
ROUTE376.setFromField(CString("fraction_changed"));
ROUTE376.setToNode(CString("l_subtalar_RotationInterpolator"));
ROUTE376.setToField(CString("set_fraction"));
Scene16.addChild(&ROUTE376);

ROUTE& ROUTE377 =  ROUTE();
ROUTE377.setFromNode(CString("KickTimer"));
ROUTE377.setFromField(CString("fraction_changed"));
ROUTE377.setToNode(CString("l_midtarsal_RotationInterpolator"));
ROUTE377.setToField(CString("set_fraction"));
Scene16.addChild(&ROUTE377);

ROUTE& ROUTE378 =  ROUTE();
ROUTE378.setFromNode(CString("KickTimer"));
ROUTE378.setFromField(CString("fraction_changed"));
ROUTE378.setToNode(CString("l_metatarsal_RotationInterpolator"));
ROUTE378.setToField(CString("set_fraction"));
Scene16.addChild(&ROUTE378);

ROUTE& ROUTE379 =  ROUTE();
ROUTE379.setFromNode(CString("KickTimer"));
ROUTE379.setFromField(CString("fraction_changed"));
ROUTE379.setToNode(CString("r_hip_RotationInterpolator"));
ROUTE379.setToField(CString("set_fraction"));
Scene16.addChild(&ROUTE379);

ROUTE& ROUTE380 =  ROUTE();
ROUTE380.setFromNode(CString("KickTimer"));
ROUTE380.setFromField(CString("fraction_changed"));
ROUTE380.setToNode(CString("r_knee_RotationInterpolator"));
ROUTE380.setToField(CString("set_fraction"));
Scene16.addChild(&ROUTE380);

ROUTE& ROUTE381 =  ROUTE();
ROUTE381.setFromNode(CString("KickTimer"));
ROUTE381.setFromField(CString("fraction_changed"));
ROUTE381.setToNode(CString("r_ankle_RotationInterpolator"));
ROUTE381.setToField(CString("set_fraction"));
Scene16.addChild(&ROUTE381);

ROUTE& ROUTE382 =  ROUTE();
ROUTE382.setFromNode(CString("KickTimer"));
ROUTE382.setFromField(CString("fraction_changed"));
ROUTE382.setToNode(CString("r_subtalar_RotationInterpolator"));
ROUTE382.setToField(CString("set_fraction"));
Scene16.addChild(&ROUTE382);

ROUTE& ROUTE383 =  ROUTE();
ROUTE383.setFromNode(CString("KickTimer"));
ROUTE383.setFromField(CString("fraction_changed"));
ROUTE383.setToNode(CString("r_midtarsal_RotationInterpolator"));
ROUTE383.setToField(CString("set_fraction"));
Scene16.addChild(&ROUTE383);

ROUTE& ROUTE384 =  ROUTE();
ROUTE384.setFromNode(CString("KickTimer"));
ROUTE384.setFromField(CString("fraction_changed"));
ROUTE384.setToNode(CString("r_metatarsal_RotationInterpolator"));
ROUTE384.setToField(CString("set_fraction"));
Scene16.addChild(&ROUTE384);

ROUTE& ROUTE385 =  ROUTE();
ROUTE385.setFromNode(CString("KickTimer"));
ROUTE385.setFromField(CString("fraction_changed"));
ROUTE385.setToNode(CString("vl5_RotationInterpolator"));
ROUTE385.setToField(CString("set_fraction"));
Scene16.addChild(&ROUTE385);

ROUTE& ROUTE386 =  ROUTE();
ROUTE386.setFromNode(CString("KickTimer"));
ROUTE386.setFromField(CString("fraction_changed"));
ROUTE386.setToNode(CString("vl4_RotationInterpolator"));
ROUTE386.setToField(CString("set_fraction"));
Scene16.addChild(&ROUTE386);

ROUTE& ROUTE387 =  ROUTE();
ROUTE387.setFromNode(CString("KickTimer"));
ROUTE387.setFromField(CString("fraction_changed"));
ROUTE387.setToNode(CString("vl3_RotationInterpolator"));
ROUTE387.setToField(CString("set_fraction"));
Scene16.addChild(&ROUTE387);

ROUTE& ROUTE388 =  ROUTE();
ROUTE388.setFromNode(CString("KickTimer"));
ROUTE388.setFromField(CString("fraction_changed"));
ROUTE388.setToNode(CString("vl2_RotationInterpolator"));
ROUTE388.setToField(CString("set_fraction"));
Scene16.addChild(&ROUTE388);

ROUTE& ROUTE389 =  ROUTE();
ROUTE389.setFromNode(CString("KickTimer"));
ROUTE389.setFromField(CString("fraction_changed"));
ROUTE389.setToNode(CString("vl1_RotationInterpolator"));
ROUTE389.setToField(CString("set_fraction"));
Scene16.addChild(&ROUTE389);

ROUTE& ROUTE390 =  ROUTE();
ROUTE390.setFromNode(CString("KickTimer"));
ROUTE390.setFromField(CString("fraction_changed"));
ROUTE390.setToNode(CString("vt12_RotationInterpolator"));
ROUTE390.setToField(CString("set_fraction"));
Scene16.addChild(&ROUTE390);

ROUTE& ROUTE391 =  ROUTE();
ROUTE391.setFromNode(CString("KickTimer"));
ROUTE391.setFromField(CString("fraction_changed"));
ROUTE391.setToNode(CString("vt11_RotationInterpolator"));
ROUTE391.setToField(CString("set_fraction"));
Scene16.addChild(&ROUTE391);

ROUTE& ROUTE392 =  ROUTE();
ROUTE392.setFromNode(CString("KickTimer"));
ROUTE392.setFromField(CString("fraction_changed"));
ROUTE392.setToNode(CString("vt10_RotationInterpolator"));
ROUTE392.setToField(CString("set_fraction"));
Scene16.addChild(&ROUTE392);

ROUTE& ROUTE393 =  ROUTE();
ROUTE393.setFromNode(CString("KickTimer"));
ROUTE393.setFromField(CString("fraction_changed"));
ROUTE393.setToNode(CString("vt9_RotationInterpolator"));
ROUTE393.setToField(CString("set_fraction"));
Scene16.addChild(&ROUTE393);

ROUTE& ROUTE394 =  ROUTE();
ROUTE394.setFromNode(CString("KickTimer"));
ROUTE394.setFromField(CString("fraction_changed"));
ROUTE394.setToNode(CString("vt8_RotationInterpolator"));
ROUTE394.setToField(CString("set_fraction"));
Scene16.addChild(&ROUTE394);

ROUTE& ROUTE395 =  ROUTE();
ROUTE395.setFromNode(CString("KickTimer"));
ROUTE395.setFromField(CString("fraction_changed"));
ROUTE395.setToNode(CString("vt7_RotationInterpolator"));
ROUTE395.setToField(CString("set_fraction"));
Scene16.addChild(&ROUTE395);

ROUTE& ROUTE396 =  ROUTE();
ROUTE396.setFromNode(CString("KickTimer"));
ROUTE396.setFromField(CString("fraction_changed"));
ROUTE396.setToNode(CString("vt6_RotationInterpolator"));
ROUTE396.setToField(CString("set_fraction"));
Scene16.addChild(&ROUTE396);

ROUTE& ROUTE397 =  ROUTE();
ROUTE397.setFromNode(CString("KickTimer"));
ROUTE397.setFromField(CString("fraction_changed"));
ROUTE397.setToNode(CString("vt5_RotationInterpolator"));
ROUTE397.setToField(CString("set_fraction"));
Scene16.addChild(&ROUTE397);

ROUTE& ROUTE398 =  ROUTE();
ROUTE398.setFromNode(CString("KickTimer"));
ROUTE398.setFromField(CString("fraction_changed"));
ROUTE398.setToNode(CString("vt4_RotationInterpolator"));
ROUTE398.setToField(CString("set_fraction"));
Scene16.addChild(&ROUTE398);

ROUTE& ROUTE399 =  ROUTE();
ROUTE399.setFromNode(CString("KickTimer"));
ROUTE399.setFromField(CString("fraction_changed"));
ROUTE399.setToNode(CString("vt3_RotationInterpolator"));
ROUTE399.setToField(CString("set_fraction"));
Scene16.addChild(&ROUTE399);

ROUTE& ROUTE400 =  ROUTE();
ROUTE400.setFromNode(CString("KickTimer"));
ROUTE400.setFromField(CString("fraction_changed"));
ROUTE400.setToNode(CString("vt2_RotationInterpolator"));
ROUTE400.setToField(CString("set_fraction"));
Scene16.addChild(&ROUTE400);

ROUTE& ROUTE401 =  ROUTE();
ROUTE401.setFromNode(CString("KickTimer"));
ROUTE401.setFromField(CString("fraction_changed"));
ROUTE401.setToNode(CString("vt1_RotationInterpolator"));
ROUTE401.setToField(CString("set_fraction"));
Scene16.addChild(&ROUTE401);

ROUTE& ROUTE402 =  ROUTE();
ROUTE402.setFromNode(CString("KickTimer"));
ROUTE402.setFromField(CString("fraction_changed"));
ROUTE402.setToNode(CString("vc7_RotationInterpolator"));
ROUTE402.setToField(CString("set_fraction"));
Scene16.addChild(&ROUTE402);

ROUTE& ROUTE403 =  ROUTE();
ROUTE403.setFromNode(CString("KickTimer"));
ROUTE403.setFromField(CString("fraction_changed"));
ROUTE403.setToNode(CString("vc6_RotationInterpolator"));
ROUTE403.setToField(CString("set_fraction"));
Scene16.addChild(&ROUTE403);

ROUTE& ROUTE404 =  ROUTE();
ROUTE404.setFromNode(CString("KickTimer"));
ROUTE404.setFromField(CString("fraction_changed"));
ROUTE404.setToNode(CString("vc5_RotationInterpolator"));
ROUTE404.setToField(CString("set_fraction"));
Scene16.addChild(&ROUTE404);

ROUTE& ROUTE405 =  ROUTE();
ROUTE405.setFromNode(CString("KickTimer"));
ROUTE405.setFromField(CString("fraction_changed"));
ROUTE405.setToNode(CString("vc4_RotationInterpolator"));
ROUTE405.setToField(CString("set_fraction"));
Scene16.addChild(&ROUTE405);

ROUTE& ROUTE406 =  ROUTE();
ROUTE406.setFromNode(CString("KickTimer"));
ROUTE406.setFromField(CString("fraction_changed"));
ROUTE406.setToNode(CString("vc3_RotationInterpolator"));
ROUTE406.setToField(CString("set_fraction"));
Scene16.addChild(&ROUTE406);

ROUTE& ROUTE407 =  ROUTE();
ROUTE407.setFromNode(CString("KickTimer"));
ROUTE407.setFromField(CString("fraction_changed"));
ROUTE407.setToNode(CString("vc2_RotationInterpolator"));
ROUTE407.setToField(CString("set_fraction"));
Scene16.addChild(&ROUTE407);

ROUTE& ROUTE408 =  ROUTE();
ROUTE408.setFromNode(CString("KickTimer"));
ROUTE408.setFromField(CString("fraction_changed"));
ROUTE408.setToNode(CString("vc1_RotationInterpolator"));
ROUTE408.setToField(CString("set_fraction"));
Scene16.addChild(&ROUTE408);

ROUTE& ROUTE409 =  ROUTE();
ROUTE409.setFromNode(CString("KickTimer"));
ROUTE409.setFromField(CString("fraction_changed"));
ROUTE409.setToNode(CString("skullbase_RotationInterpolator"));
ROUTE409.setToField(CString("set_fraction"));
Scene16.addChild(&ROUTE409);

ROUTE& ROUTE410 =  ROUTE();
ROUTE410.setFromNode(CString("KickTimer"));
ROUTE410.setFromField(CString("fraction_changed"));
ROUTE410.setToNode(CString("l_eyelid_joint_RotationInterpolator"));
ROUTE410.setToField(CString("set_fraction"));
Scene16.addChild(&ROUTE410);

ROUTE& ROUTE411 =  ROUTE();
ROUTE411.setFromNode(CString("KickTimer"));
ROUTE411.setFromField(CString("fraction_changed"));
ROUTE411.setToNode(CString("l_eyeball_joint_RotationInterpolator"));
ROUTE411.setToField(CString("set_fraction"));
Scene16.addChild(&ROUTE411);

ROUTE& ROUTE412 =  ROUTE();
ROUTE412.setFromNode(CString("KickTimer"));
ROUTE412.setFromField(CString("fraction_changed"));
ROUTE412.setToNode(CString("l_eyebrow_joint_RotationInterpolator"));
ROUTE412.setToField(CString("set_fraction"));
Scene16.addChild(&ROUTE412);

ROUTE& ROUTE413 =  ROUTE();
ROUTE413.setFromNode(CString("KickTimer"));
ROUTE413.setFromField(CString("fraction_changed"));
ROUTE413.setToNode(CString("r_eyelid_joint_RotationInterpolator"));
ROUTE413.setToField(CString("set_fraction"));
Scene16.addChild(&ROUTE413);

ROUTE& ROUTE414 =  ROUTE();
ROUTE414.setFromNode(CString("KickTimer"));
ROUTE414.setFromField(CString("fraction_changed"));
ROUTE414.setToNode(CString("r_eyeball_joint_RotationInterpolator"));
ROUTE414.setToField(CString("set_fraction"));
Scene16.addChild(&ROUTE414);

ROUTE& ROUTE415 =  ROUTE();
ROUTE415.setFromNode(CString("KickTimer"));
ROUTE415.setFromField(CString("fraction_changed"));
ROUTE415.setToNode(CString("r_eyebrow_joint_RotationInterpolator"));
ROUTE415.setToField(CString("set_fraction"));
Scene16.addChild(&ROUTE415);

ROUTE& ROUTE416 =  ROUTE();
ROUTE416.setFromNode(CString("KickTimer"));
ROUTE416.setFromField(CString("fraction_changed"));
ROUTE416.setToNode(CString("temporomandibular_RotationInterpolator"));
ROUTE416.setToField(CString("set_fraction"));
Scene16.addChild(&ROUTE416);

ROUTE& ROUTE417 =  ROUTE();
ROUTE417.setFromNode(CString("KickTimer"));
ROUTE417.setFromField(CString("fraction_changed"));
ROUTE417.setToNode(CString("l_sternoclavicular_RotationInterpolator"));
ROUTE417.setToField(CString("set_fraction"));
Scene16.addChild(&ROUTE417);

ROUTE& ROUTE418 =  ROUTE();
ROUTE418.setFromNode(CString("KickTimer"));
ROUTE418.setFromField(CString("fraction_changed"));
ROUTE418.setToNode(CString("l_acromioclavicular_RotationInterpolator"));
ROUTE418.setToField(CString("set_fraction"));
Scene16.addChild(&ROUTE418);

ROUTE& ROUTE419 =  ROUTE();
ROUTE419.setFromNode(CString("KickTimer"));
ROUTE419.setFromField(CString("fraction_changed"));
ROUTE419.setToNode(CString("l_shoulder_RotationInterpolator"));
ROUTE419.setToField(CString("set_fraction"));
Scene16.addChild(&ROUTE419);

ROUTE& ROUTE420 =  ROUTE();
ROUTE420.setFromNode(CString("KickTimer"));
ROUTE420.setFromField(CString("fraction_changed"));
ROUTE420.setToNode(CString("l_elbow_RotationInterpolator"));
ROUTE420.setToField(CString("set_fraction"));
Scene16.addChild(&ROUTE420);

ROUTE& ROUTE421 =  ROUTE();
ROUTE421.setFromNode(CString("KickTimer"));
ROUTE421.setFromField(CString("fraction_changed"));
ROUTE421.setToNode(CString("l_wrist_RotationInterpolator"));
ROUTE421.setToField(CString("set_fraction"));
Scene16.addChild(&ROUTE421);

ROUTE& ROUTE422 =  ROUTE();
ROUTE422.setFromNode(CString("KickTimer"));
ROUTE422.setFromField(CString("fraction_changed"));
ROUTE422.setToNode(CString("l_thumb1_RotationInterpolator"));
ROUTE422.setToField(CString("set_fraction"));
Scene16.addChild(&ROUTE422);

ROUTE& ROUTE423 =  ROUTE();
ROUTE423.setFromNode(CString("KickTimer"));
ROUTE423.setFromField(CString("fraction_changed"));
ROUTE423.setToNode(CString("l_thumb2_RotationInterpolator"));
ROUTE423.setToField(CString("set_fraction"));
Scene16.addChild(&ROUTE423);

ROUTE& ROUTE424 =  ROUTE();
ROUTE424.setFromNode(CString("KickTimer"));
ROUTE424.setFromField(CString("fraction_changed"));
ROUTE424.setToNode(CString("l_thumb3_RotationInterpolator"));
ROUTE424.setToField(CString("set_fraction"));
Scene16.addChild(&ROUTE424);

ROUTE& ROUTE425 =  ROUTE();
ROUTE425.setFromNode(CString("KickTimer"));
ROUTE425.setFromField(CString("fraction_changed"));
ROUTE425.setToNode(CString("l_index0_RotationInterpolator"));
ROUTE425.setToField(CString("set_fraction"));
Scene16.addChild(&ROUTE425);

ROUTE& ROUTE426 =  ROUTE();
ROUTE426.setFromNode(CString("KickTimer"));
ROUTE426.setFromField(CString("fraction_changed"));
ROUTE426.setToNode(CString("l_index1_RotationInterpolator"));
ROUTE426.setToField(CString("set_fraction"));
Scene16.addChild(&ROUTE426);

ROUTE& ROUTE427 =  ROUTE();
ROUTE427.setFromNode(CString("KickTimer"));
ROUTE427.setFromField(CString("fraction_changed"));
ROUTE427.setToNode(CString("l_index2_RotationInterpolator"));
ROUTE427.setToField(CString("set_fraction"));
Scene16.addChild(&ROUTE427);

ROUTE& ROUTE428 =  ROUTE();
ROUTE428.setFromNode(CString("KickTimer"));
ROUTE428.setFromField(CString("fraction_changed"));
ROUTE428.setToNode(CString("l_index3_RotationInterpolator"));
ROUTE428.setToField(CString("set_fraction"));
Scene16.addChild(&ROUTE428);

ROUTE& ROUTE429 =  ROUTE();
ROUTE429.setFromNode(CString("KickTimer"));
ROUTE429.setFromField(CString("fraction_changed"));
ROUTE429.setToNode(CString("l_middle0_RotationInterpolator"));
ROUTE429.setToField(CString("set_fraction"));
Scene16.addChild(&ROUTE429);

ROUTE& ROUTE430 =  ROUTE();
ROUTE430.setFromNode(CString("KickTimer"));
ROUTE430.setFromField(CString("fraction_changed"));
ROUTE430.setToNode(CString("l_middle1_RotationInterpolator"));
ROUTE430.setToField(CString("set_fraction"));
Scene16.addChild(&ROUTE430);

ROUTE& ROUTE431 =  ROUTE();
ROUTE431.setFromNode(CString("KickTimer"));
ROUTE431.setFromField(CString("fraction_changed"));
ROUTE431.setToNode(CString("l_middle2_RotationInterpolator"));
ROUTE431.setToField(CString("set_fraction"));
Scene16.addChild(&ROUTE431);

ROUTE& ROUTE432 =  ROUTE();
ROUTE432.setFromNode(CString("KickTimer"));
ROUTE432.setFromField(CString("fraction_changed"));
ROUTE432.setToNode(CString("l_middle3_RotationInterpolator"));
ROUTE432.setToField(CString("set_fraction"));
Scene16.addChild(&ROUTE432);

ROUTE& ROUTE433 =  ROUTE();
ROUTE433.setFromNode(CString("KickTimer"));
ROUTE433.setFromField(CString("fraction_changed"));
ROUTE433.setToNode(CString("l_ring0_RotationInterpolator"));
ROUTE433.setToField(CString("set_fraction"));
Scene16.addChild(&ROUTE433);

ROUTE& ROUTE434 =  ROUTE();
ROUTE434.setFromNode(CString("KickTimer"));
ROUTE434.setFromField(CString("fraction_changed"));
ROUTE434.setToNode(CString("l_ring1_RotationInterpolator"));
ROUTE434.setToField(CString("set_fraction"));
Scene16.addChild(&ROUTE434);

ROUTE& ROUTE435 =  ROUTE();
ROUTE435.setFromNode(CString("KickTimer"));
ROUTE435.setFromField(CString("fraction_changed"));
ROUTE435.setToNode(CString("l_ring2_RotationInterpolator"));
ROUTE435.setToField(CString("set_fraction"));
Scene16.addChild(&ROUTE435);

ROUTE& ROUTE436 =  ROUTE();
ROUTE436.setFromNode(CString("KickTimer"));
ROUTE436.setFromField(CString("fraction_changed"));
ROUTE436.setToNode(CString("l_ring3_RotationInterpolator"));
ROUTE436.setToField(CString("set_fraction"));
Scene16.addChild(&ROUTE436);

ROUTE& ROUTE437 =  ROUTE();
ROUTE437.setFromNode(CString("KickTimer"));
ROUTE437.setFromField(CString("fraction_changed"));
ROUTE437.setToNode(CString("l_pinky0_RotationInterpolator"));
ROUTE437.setToField(CString("set_fraction"));
Scene16.addChild(&ROUTE437);

ROUTE& ROUTE438 =  ROUTE();
ROUTE438.setFromNode(CString("KickTimer"));
ROUTE438.setFromField(CString("fraction_changed"));
ROUTE438.setToNode(CString("l_pinky1_RotationInterpolator"));
ROUTE438.setToField(CString("set_fraction"));
Scene16.addChild(&ROUTE438);

ROUTE& ROUTE439 =  ROUTE();
ROUTE439.setFromNode(CString("KickTimer"));
ROUTE439.setFromField(CString("fraction_changed"));
ROUTE439.setToNode(CString("l_pinky2_RotationInterpolator"));
ROUTE439.setToField(CString("set_fraction"));
Scene16.addChild(&ROUTE439);

ROUTE& ROUTE440 =  ROUTE();
ROUTE440.setFromNode(CString("KickTimer"));
ROUTE440.setFromField(CString("fraction_changed"));
ROUTE440.setToNode(CString("l_pinky3_RotationInterpolator"));
ROUTE440.setToField(CString("set_fraction"));
Scene16.addChild(&ROUTE440);

ROUTE& ROUTE441 =  ROUTE();
ROUTE441.setFromNode(CString("KickTimer"));
ROUTE441.setFromField(CString("fraction_changed"));
ROUTE441.setToNode(CString("r_sternoclavicular_RotationInterpolator"));
ROUTE441.setToField(CString("set_fraction"));
Scene16.addChild(&ROUTE441);

ROUTE& ROUTE442 =  ROUTE();
ROUTE442.setFromNode(CString("KickTimer"));
ROUTE442.setFromField(CString("fraction_changed"));
ROUTE442.setToNode(CString("r_acromioclavicular_RotationInterpolator"));
ROUTE442.setToField(CString("set_fraction"));
Scene16.addChild(&ROUTE442);

ROUTE& ROUTE443 =  ROUTE();
ROUTE443.setFromNode(CString("KickTimer"));
ROUTE443.setFromField(CString("fraction_changed"));
ROUTE443.setToNode(CString("r_shoulder_RotationInterpolator"));
ROUTE443.setToField(CString("set_fraction"));
Scene16.addChild(&ROUTE443);

ROUTE& ROUTE444 =  ROUTE();
ROUTE444.setFromNode(CString("KickTimer"));
ROUTE444.setFromField(CString("fraction_changed"));
ROUTE444.setToNode(CString("r_elbow_RotationInterpolator"));
ROUTE444.setToField(CString("set_fraction"));
Scene16.addChild(&ROUTE444);

ROUTE& ROUTE445 =  ROUTE();
ROUTE445.setFromNode(CString("KickTimer"));
ROUTE445.setFromField(CString("fraction_changed"));
ROUTE445.setToNode(CString("r_wrist_RotationInterpolator"));
ROUTE445.setToField(CString("set_fraction"));
Scene16.addChild(&ROUTE445);

ROUTE& ROUTE446 =  ROUTE();
ROUTE446.setFromNode(CString("KickTimer"));
ROUTE446.setFromField(CString("fraction_changed"));
ROUTE446.setToNode(CString("r_thumb1_RotationInterpolator"));
ROUTE446.setToField(CString("set_fraction"));
Scene16.addChild(&ROUTE446);

ROUTE& ROUTE447 =  ROUTE();
ROUTE447.setFromNode(CString("KickTimer"));
ROUTE447.setFromField(CString("fraction_changed"));
ROUTE447.setToNode(CString("r_thumb2_RotationInterpolator"));
ROUTE447.setToField(CString("set_fraction"));
Scene16.addChild(&ROUTE447);

ROUTE& ROUTE448 =  ROUTE();
ROUTE448.setFromNode(CString("KickTimer"));
ROUTE448.setFromField(CString("fraction_changed"));
ROUTE448.setToNode(CString("r_thumb3_RotationInterpolator"));
ROUTE448.setToField(CString("set_fraction"));
Scene16.addChild(&ROUTE448);

ROUTE& ROUTE449 =  ROUTE();
ROUTE449.setFromNode(CString("KickTimer"));
ROUTE449.setFromField(CString("fraction_changed"));
ROUTE449.setToNode(CString("r_index0_RotationInterpolator"));
ROUTE449.setToField(CString("set_fraction"));
Scene16.addChild(&ROUTE449);

ROUTE& ROUTE450 =  ROUTE();
ROUTE450.setFromNode(CString("KickTimer"));
ROUTE450.setFromField(CString("fraction_changed"));
ROUTE450.setToNode(CString("r_index1_RotationInterpolator"));
ROUTE450.setToField(CString("set_fraction"));
Scene16.addChild(&ROUTE450);

ROUTE& ROUTE451 =  ROUTE();
ROUTE451.setFromNode(CString("KickTimer"));
ROUTE451.setFromField(CString("fraction_changed"));
ROUTE451.setToNode(CString("r_index2_RotationInterpolator"));
ROUTE451.setToField(CString("set_fraction"));
Scene16.addChild(&ROUTE451);

ROUTE& ROUTE452 =  ROUTE();
ROUTE452.setFromNode(CString("KickTimer"));
ROUTE452.setFromField(CString("fraction_changed"));
ROUTE452.setToNode(CString("r_index3_RotationInterpolator"));
ROUTE452.setToField(CString("set_fraction"));
Scene16.addChild(&ROUTE452);

ROUTE& ROUTE453 =  ROUTE();
ROUTE453.setFromNode(CString("KickTimer"));
ROUTE453.setFromField(CString("fraction_changed"));
ROUTE453.setToNode(CString("r_middle0_RotationInterpolator"));
ROUTE453.setToField(CString("set_fraction"));
Scene16.addChild(&ROUTE453);

ROUTE& ROUTE454 =  ROUTE();
ROUTE454.setFromNode(CString("KickTimer"));
ROUTE454.setFromField(CString("fraction_changed"));
ROUTE454.setToNode(CString("r_middle1_RotationInterpolator"));
ROUTE454.setToField(CString("set_fraction"));
Scene16.addChild(&ROUTE454);

ROUTE& ROUTE455 =  ROUTE();
ROUTE455.setFromNode(CString("KickTimer"));
ROUTE455.setFromField(CString("fraction_changed"));
ROUTE455.setToNode(CString("r_middle2_RotationInterpolator"));
ROUTE455.setToField(CString("set_fraction"));
Scene16.addChild(&ROUTE455);

ROUTE& ROUTE456 =  ROUTE();
ROUTE456.setFromNode(CString("KickTimer"));
ROUTE456.setFromField(CString("fraction_changed"));
ROUTE456.setToNode(CString("r_middle3_RotationInterpolator"));
ROUTE456.setToField(CString("set_fraction"));
Scene16.addChild(&ROUTE456);

ROUTE& ROUTE457 =  ROUTE();
ROUTE457.setFromNode(CString("KickTimer"));
ROUTE457.setFromField(CString("fraction_changed"));
ROUTE457.setToNode(CString("r_ring0_RotationInterpolator"));
ROUTE457.setToField(CString("set_fraction"));
Scene16.addChild(&ROUTE457);

ROUTE& ROUTE458 =  ROUTE();
ROUTE458.setFromNode(CString("KickTimer"));
ROUTE458.setFromField(CString("fraction_changed"));
ROUTE458.setToNode(CString("r_ring1_RotationInterpolator"));
ROUTE458.setToField(CString("set_fraction"));
Scene16.addChild(&ROUTE458);

ROUTE& ROUTE459 =  ROUTE();
ROUTE459.setFromNode(CString("KickTimer"));
ROUTE459.setFromField(CString("fraction_changed"));
ROUTE459.setToNode(CString("r_ring2_RotationInterpolator"));
ROUTE459.setToField(CString("set_fraction"));
Scene16.addChild(&ROUTE459);

ROUTE& ROUTE460 =  ROUTE();
ROUTE460.setFromNode(CString("KickTimer"));
ROUTE460.setFromField(CString("fraction_changed"));
ROUTE460.setToNode(CString("r_ring3_RotationInterpolator"));
ROUTE460.setToField(CString("set_fraction"));
Scene16.addChild(&ROUTE460);

ROUTE& ROUTE461 =  ROUTE();
ROUTE461.setFromNode(CString("KickTimer"));
ROUTE461.setFromField(CString("fraction_changed"));
ROUTE461.setToNode(CString("r_pinky0_RotationInterpolator"));
ROUTE461.setToField(CString("set_fraction"));
Scene16.addChild(&ROUTE461);

ROUTE& ROUTE462 =  ROUTE();
ROUTE462.setFromNode(CString("KickTimer"));
ROUTE462.setFromField(CString("fraction_changed"));
ROUTE462.setToNode(CString("r_pinky1_RotationInterpolator"));
ROUTE462.setToField(CString("set_fraction"));
Scene16.addChild(&ROUTE462);

ROUTE& ROUTE463 =  ROUTE();
ROUTE463.setFromNode(CString("KickTimer"));
ROUTE463.setFromField(CString("fraction_changed"));
ROUTE463.setToNode(CString("r_pinky2_RotationInterpolator"));
ROUTE463.setToField(CString("set_fraction"));
Scene16.addChild(&ROUTE463);

ROUTE& ROUTE464 =  ROUTE();
ROUTE464.setFromNode(CString("KickTimer"));
ROUTE464.setFromField(CString("fraction_changed"));
ROUTE464.setToNode(CString("r_pinky3_RotationInterpolator"));
ROUTE464.setToField(CString("set_fraction"));
Scene16.addChild(&ROUTE464);

ROUTE& ROUTE465 =  ROUTE();
ROUTE465.setFromNode(CString("HumanoidRoot_RotationInterpolator"));
ROUTE465.setFromField(CString("value_changed"));
ROUTE465.setToNode(CString("Joe_humanoid_root"));
ROUTE465.setToField(CString("set_rotation"));
Scene16.addChild(&ROUTE465);

ROUTE& ROUTE466 =  ROUTE();
ROUTE466.setFromNode(CString("HumanoidRoot_TranslationInterpolator"));
ROUTE466.setFromField(CString("value_changed"));
ROUTE466.setToNode(CString("Joe_humanoid_root"));
ROUTE466.setToField(CString("set_translation"));
Scene16.addChild(&ROUTE466);

ROUTE& ROUTE467 =  ROUTE();
ROUTE467.setFromNode(CString("sacroiliac_RotationInterpolator"));
ROUTE467.setFromField(CString("value_changed"));
ROUTE467.setToNode(CString("Joe_sacroiliac"));
ROUTE467.setToField(CString("set_rotation"));
Scene16.addChild(&ROUTE467);

ROUTE& ROUTE468 =  ROUTE();
ROUTE468.setFromNode(CString("l_hip_RotationInterpolator"));
ROUTE468.setFromField(CString("value_changed"));
ROUTE468.setToNode(CString("Joe_l_hip"));
ROUTE468.setToField(CString("set_rotation"));
Scene16.addChild(&ROUTE468);

ROUTE& ROUTE469 =  ROUTE();
ROUTE469.setFromNode(CString("l_knee_RotationInterpolator"));
ROUTE469.setFromField(CString("value_changed"));
ROUTE469.setToNode(CString("Joe_l_knee"));
ROUTE469.setToField(CString("set_rotation"));
Scene16.addChild(&ROUTE469);

ROUTE& ROUTE470 =  ROUTE();
ROUTE470.setFromNode(CString("l_ankle_RotationInterpolator"));
ROUTE470.setFromField(CString("value_changed"));
ROUTE470.setToNode(CString("Joe_l_talocrural"));
ROUTE470.setToField(CString("set_rotation"));
Scene16.addChild(&ROUTE470);

ROUTE& ROUTE471 =  ROUTE();
ROUTE471.setFromNode(CString("l_subtalar_RotationInterpolator"));
ROUTE471.setFromField(CString("value_changed"));
ROUTE471.setToNode(CString("Joe_l_tarsometatarsal_2"));
ROUTE471.setToField(CString("set_rotation"));
Scene16.addChild(&ROUTE471);

ROUTE& ROUTE472 =  ROUTE();
ROUTE472.setFromNode(CString("l_midtarsal_RotationInterpolator"));
ROUTE472.setFromField(CString("value_changed"));
ROUTE472.setToNode(CString("Joe_l_metatarsophalangeal_2"));
ROUTE472.setToField(CString("set_rotation"));
Scene16.addChild(&ROUTE472);

ROUTE& ROUTE473 =  ROUTE();
ROUTE473.setFromNode(CString("l_metatarsal_RotationInterpolator"));
ROUTE473.setFromField(CString("value_changed"));
ROUTE473.setToNode(CString("Joe_l_tarsal_distal_interphalangeal_2"));
ROUTE473.setToField(CString("set_rotation"));
Scene16.addChild(&ROUTE473);

ROUTE& ROUTE474 =  ROUTE();
ROUTE474.setFromNode(CString("r_hip_RotationInterpolator"));
ROUTE474.setFromField(CString("value_changed"));
ROUTE474.setToNode(CString("Joe_r_hip"));
ROUTE474.setToField(CString("set_rotation"));
Scene16.addChild(&ROUTE474);

ROUTE& ROUTE475 =  ROUTE();
ROUTE475.setFromNode(CString("r_knee_RotationInterpolator"));
ROUTE475.setFromField(CString("value_changed"));
ROUTE475.setToNode(CString("Joe_r_knee"));
ROUTE475.setToField(CString("set_rotation"));
Scene16.addChild(&ROUTE475);

ROUTE& ROUTE476 =  ROUTE();
ROUTE476.setFromNode(CString("r_ankle_RotationInterpolator"));
ROUTE476.setFromField(CString("value_changed"));
ROUTE476.setToNode(CString("Joe_r_talocrural"));
ROUTE476.setToField(CString("set_rotation"));
Scene16.addChild(&ROUTE476);

ROUTE& ROUTE477 =  ROUTE();
ROUTE477.setFromNode(CString("r_subtalar_RotationInterpolator"));
ROUTE477.setFromField(CString("value_changed"));
ROUTE477.setToNode(CString("Joe_r_tarsometatarsal_2"));
ROUTE477.setToField(CString("set_rotation"));
Scene16.addChild(&ROUTE477);

ROUTE& ROUTE478 =  ROUTE();
ROUTE478.setFromNode(CString("r_midtarsal_RotationInterpolator"));
ROUTE478.setFromField(CString("value_changed"));
ROUTE478.setToNode(CString("Joe_r_metatarsophalangeal_2"));
ROUTE478.setToField(CString("set_rotation"));
Scene16.addChild(&ROUTE478);

ROUTE& ROUTE479 =  ROUTE();
ROUTE479.setFromNode(CString("r_metatarsal_RotationInterpolator"));
ROUTE479.setFromField(CString("value_changed"));
ROUTE479.setToNode(CString("Joe_r_tarsal_distal_interphalangeal_2"));
ROUTE479.setToField(CString("set_rotation"));
Scene16.addChild(&ROUTE479);

ROUTE& ROUTE480 =  ROUTE();
ROUTE480.setFromNode(CString("vl5_RotationInterpolator"));
ROUTE480.setFromField(CString("value_changed"));
ROUTE480.setToNode(CString("Joe_vl5"));
ROUTE480.setToField(CString("set_rotation"));
Scene16.addChild(&ROUTE480);

ROUTE& ROUTE481 =  ROUTE();
ROUTE481.setFromNode(CString("vl4_RotationInterpolator"));
ROUTE481.setFromField(CString("value_changed"));
ROUTE481.setToNode(CString("Joe_vl4"));
ROUTE481.setToField(CString("set_rotation"));
Scene16.addChild(&ROUTE481);

ROUTE& ROUTE482 =  ROUTE();
ROUTE482.setFromNode(CString("vl3_RotationInterpolator"));
ROUTE482.setFromField(CString("value_changed"));
ROUTE482.setToNode(CString("Joe_vl3"));
ROUTE482.setToField(CString("set_rotation"));
Scene16.addChild(&ROUTE482);

ROUTE& ROUTE483 =  ROUTE();
ROUTE483.setFromNode(CString("vl2_RotationInterpolator"));
ROUTE483.setFromField(CString("value_changed"));
ROUTE483.setToNode(CString("Joe_vl2"));
ROUTE483.setToField(CString("set_rotation"));
Scene16.addChild(&ROUTE483);

ROUTE& ROUTE484 =  ROUTE();
ROUTE484.setFromNode(CString("vl1_RotationInterpolator"));
ROUTE484.setFromField(CString("value_changed"));
ROUTE484.setToNode(CString("Joe_vl1"));
ROUTE484.setToField(CString("set_rotation"));
Scene16.addChild(&ROUTE484);

ROUTE& ROUTE485 =  ROUTE();
ROUTE485.setFromNode(CString("vt12_RotationInterpolator"));
ROUTE485.setFromField(CString("value_changed"));
ROUTE485.setToNode(CString("Joe_vt12"));
ROUTE485.setToField(CString("set_rotation"));
Scene16.addChild(&ROUTE485);

ROUTE& ROUTE486 =  ROUTE();
ROUTE486.setFromNode(CString("vt11_RotationInterpolator"));
ROUTE486.setFromField(CString("value_changed"));
ROUTE486.setToNode(CString("Joe_vt11"));
ROUTE486.setToField(CString("set_rotation"));
Scene16.addChild(&ROUTE486);

ROUTE& ROUTE487 =  ROUTE();
ROUTE487.setFromNode(CString("vt10_RotationInterpolator"));
ROUTE487.setFromField(CString("value_changed"));
ROUTE487.setToNode(CString("Joe_vt10"));
ROUTE487.setToField(CString("set_rotation"));
Scene16.addChild(&ROUTE487);

ROUTE& ROUTE488 =  ROUTE();
ROUTE488.setFromNode(CString("vt9_RotationInterpolator"));
ROUTE488.setFromField(CString("value_changed"));
ROUTE488.setToNode(CString("Joe_vt9"));
ROUTE488.setToField(CString("set_rotation"));
Scene16.addChild(&ROUTE488);

ROUTE& ROUTE489 =  ROUTE();
ROUTE489.setFromNode(CString("vt8_RotationInterpolator"));
ROUTE489.setFromField(CString("value_changed"));
ROUTE489.setToNode(CString("Joe_vt8"));
ROUTE489.setToField(CString("set_rotation"));
Scene16.addChild(&ROUTE489);

ROUTE& ROUTE490 =  ROUTE();
ROUTE490.setFromNode(CString("vt7_RotationInterpolator"));
ROUTE490.setFromField(CString("value_changed"));
ROUTE490.setToNode(CString("Joe_vt7"));
ROUTE490.setToField(CString("set_rotation"));
Scene16.addChild(&ROUTE490);

ROUTE& ROUTE491 =  ROUTE();
ROUTE491.setFromNode(CString("vt6_RotationInterpolator"));
ROUTE491.setFromField(CString("value_changed"));
ROUTE491.setToNode(CString("Joe_vt6"));
ROUTE491.setToField(CString("set_rotation"));
Scene16.addChild(&ROUTE491);

ROUTE& ROUTE492 =  ROUTE();
ROUTE492.setFromNode(CString("vt5_RotationInterpolator"));
ROUTE492.setFromField(CString("value_changed"));
ROUTE492.setToNode(CString("Joe_vt5"));
ROUTE492.setToField(CString("set_rotation"));
Scene16.addChild(&ROUTE492);

ROUTE& ROUTE493 =  ROUTE();
ROUTE493.setFromNode(CString("vt4_RotationInterpolator"));
ROUTE493.setFromField(CString("value_changed"));
ROUTE493.setToNode(CString("Joe_vt4"));
ROUTE493.setToField(CString("set_rotation"));
Scene16.addChild(&ROUTE493);

ROUTE& ROUTE494 =  ROUTE();
ROUTE494.setFromNode(CString("vt3_RotationInterpolator"));
ROUTE494.setFromField(CString("value_changed"));
ROUTE494.setToNode(CString("Joe_vt3"));
ROUTE494.setToField(CString("set_rotation"));
Scene16.addChild(&ROUTE494);

ROUTE& ROUTE495 =  ROUTE();
ROUTE495.setFromNode(CString("vt2_RotationInterpolator"));
ROUTE495.setFromField(CString("value_changed"));
ROUTE495.setToNode(CString("Joe_vt2"));
ROUTE495.setToField(CString("set_rotation"));
Scene16.addChild(&ROUTE495);

ROUTE& ROUTE496 =  ROUTE();
ROUTE496.setFromNode(CString("vt1_RotationInterpolator"));
ROUTE496.setFromField(CString("value_changed"));
ROUTE496.setToNode(CString("Joe_vt1"));
ROUTE496.setToField(CString("set_rotation"));
Scene16.addChild(&ROUTE496);

ROUTE& ROUTE497 =  ROUTE();
ROUTE497.setFromNode(CString("vc7_RotationInterpolator"));
ROUTE497.setFromField(CString("value_changed"));
ROUTE497.setToNode(CString("Joe_vc7"));
ROUTE497.setToField(CString("set_rotation"));
Scene16.addChild(&ROUTE497);

ROUTE& ROUTE498 =  ROUTE();
ROUTE498.setFromNode(CString("vc6_RotationInterpolator"));
ROUTE498.setFromField(CString("value_changed"));
ROUTE498.setToNode(CString("Joe_vc6"));
ROUTE498.setToField(CString("set_rotation"));
Scene16.addChild(&ROUTE498);

ROUTE& ROUTE499 =  ROUTE();
ROUTE499.setFromNode(CString("vc5_RotationInterpolator"));
ROUTE499.setFromField(CString("value_changed"));
ROUTE499.setToNode(CString("Joe_vc5"));
ROUTE499.setToField(CString("set_rotation"));
Scene16.addChild(&ROUTE499);

ROUTE& ROUTE500 =  ROUTE();
ROUTE500.setFromNode(CString("vc4_RotationInterpolator"));
ROUTE500.setFromField(CString("value_changed"));
ROUTE500.setToNode(CString("Joe_vc4"));
ROUTE500.setToField(CString("set_rotation"));
Scene16.addChild(&ROUTE500);

ROUTE& ROUTE501 =  ROUTE();
ROUTE501.setFromNode(CString("vc3_RotationInterpolator"));
ROUTE501.setFromField(CString("value_changed"));
ROUTE501.setToNode(CString("Joe_vc3"));
ROUTE501.setToField(CString("set_rotation"));
Scene16.addChild(&ROUTE501);

ROUTE& ROUTE502 =  ROUTE();
ROUTE502.setFromNode(CString("vc2_RotationInterpolator"));
ROUTE502.setFromField(CString("value_changed"));
ROUTE502.setToNode(CString("Joe_vc2"));
ROUTE502.setToField(CString("set_rotation"));
Scene16.addChild(&ROUTE502);

ROUTE& ROUTE503 =  ROUTE();
ROUTE503.setFromNode(CString("vc1_RotationInterpolator"));
ROUTE503.setFromField(CString("value_changed"));
ROUTE503.setToNode(CString("Joe_vc1"));
ROUTE503.setToField(CString("set_rotation"));
Scene16.addChild(&ROUTE503);

ROUTE& ROUTE504 =  ROUTE();
ROUTE504.setFromNode(CString("skullbase_RotationInterpolator"));
ROUTE504.setFromField(CString("value_changed"));
ROUTE504.setToNode(CString("Joe_skullbase"));
ROUTE504.setToField(CString("set_rotation"));
Scene16.addChild(&ROUTE504);

ROUTE& ROUTE505 =  ROUTE();
ROUTE505.setFromNode(CString("l_eyelid_joint_RotationInterpolator"));
ROUTE505.setFromField(CString("value_changed"));
ROUTE505.setToNode(CString("Joe_l_eyelid_joint"));
ROUTE505.setToField(CString("set_rotation"));
Scene16.addChild(&ROUTE505);

ROUTE& ROUTE506 =  ROUTE();
ROUTE506.setFromNode(CString("l_eyeball_joint_RotationInterpolator"));
ROUTE506.setFromField(CString("value_changed"));
ROUTE506.setToNode(CString("Joe_l_eyeball_joint"));
ROUTE506.setToField(CString("set_rotation"));
Scene16.addChild(&ROUTE506);

ROUTE& ROUTE507 =  ROUTE();
ROUTE507.setFromNode(CString("l_eyebrow_joint_RotationInterpolator"));
ROUTE507.setFromField(CString("value_changed"));
ROUTE507.setToNode(CString("Joe_l_eyebrow_joint"));
ROUTE507.setToField(CString("set_rotation"));
Scene16.addChild(&ROUTE507);

ROUTE& ROUTE508 =  ROUTE();
ROUTE508.setFromNode(CString("r_eyelid_joint_RotationInterpolator"));
ROUTE508.setFromField(CString("value_changed"));
ROUTE508.setToNode(CString("Joe_r_eyelid_joint"));
ROUTE508.setToField(CString("set_rotation"));
Scene16.addChild(&ROUTE508);

ROUTE& ROUTE509 =  ROUTE();
ROUTE509.setFromNode(CString("r_eyeball_joint_RotationInterpolator"));
ROUTE509.setFromField(CString("value_changed"));
ROUTE509.setToNode(CString("Joe_r_eyeball_joint"));
ROUTE509.setToField(CString("set_rotation"));
Scene16.addChild(&ROUTE509);

ROUTE& ROUTE510 =  ROUTE();
ROUTE510.setFromNode(CString("r_eyebrow_joint_RotationInterpolator"));
ROUTE510.setFromField(CString("value_changed"));
ROUTE510.setToNode(CString("Joe_r_eyebrow_joint"));
ROUTE510.setToField(CString("set_rotation"));
Scene16.addChild(&ROUTE510);

ROUTE& ROUTE511 =  ROUTE();
ROUTE511.setFromNode(CString("temporomandibular_RotationInterpolator"));
ROUTE511.setFromField(CString("value_changed"));
ROUTE511.setToNode(CString("Joe_temporomandibular"));
ROUTE511.setToField(CString("set_rotation"));
Scene16.addChild(&ROUTE511);

ROUTE& ROUTE512 =  ROUTE();
ROUTE512.setFromNode(CString("l_sternoclavicular_RotationInterpolator"));
ROUTE512.setFromField(CString("value_changed"));
ROUTE512.setToNode(CString("Joe_l_sternoclavicular"));
ROUTE512.setToField(CString("set_rotation"));
Scene16.addChild(&ROUTE512);

ROUTE& ROUTE513 =  ROUTE();
ROUTE513.setFromNode(CString("l_acromioclavicular_RotationInterpolator"));
ROUTE513.setFromField(CString("value_changed"));
ROUTE513.setToNode(CString("Joe_l_acromioclavicular"));
ROUTE513.setToField(CString("set_rotation"));
Scene16.addChild(&ROUTE513);

ROUTE& ROUTE514 =  ROUTE();
ROUTE514.setFromNode(CString("l_shoulder_RotationInterpolator"));
ROUTE514.setFromField(CString("value_changed"));
ROUTE514.setToNode(CString("Joe_l_shoulder"));
ROUTE514.setToField(CString("set_rotation"));
Scene16.addChild(&ROUTE514);

ROUTE& ROUTE515 =  ROUTE();
ROUTE515.setFromNode(CString("l_elbow_RotationInterpolator"));
ROUTE515.setFromField(CString("value_changed"));
ROUTE515.setToNode(CString("Joe_l_elbow"));
ROUTE515.setToField(CString("set_rotation"));
Scene16.addChild(&ROUTE515);

ROUTE& ROUTE516 =  ROUTE();
ROUTE516.setFromNode(CString("l_wrist_RotationInterpolator"));
ROUTE516.setFromField(CString("value_changed"));
ROUTE516.setToNode(CString("Joe_l_radiocarpal"));
ROUTE516.setToField(CString("set_rotation"));
Scene16.addChild(&ROUTE516);

ROUTE& ROUTE517 =  ROUTE();
ROUTE517.setFromNode(CString("l_thumb1_RotationInterpolator"));
ROUTE517.setFromField(CString("value_changed"));
ROUTE517.setToNode(CString("Joe_l_carpometacarpal_1"));
ROUTE517.setToField(CString("set_rotation"));
Scene16.addChild(&ROUTE517);

ROUTE& ROUTE518 =  ROUTE();
ROUTE518.setFromNode(CString("l_thumb2_RotationInterpolator"));
ROUTE518.setFromField(CString("value_changed"));
ROUTE518.setToNode(CString("Joe_l_metacarpophalangeal_1"));
ROUTE518.setToField(CString("set_rotation"));
Scene16.addChild(&ROUTE518);

ROUTE& ROUTE519 =  ROUTE();
ROUTE519.setFromNode(CString("l_thumb3_RotationInterpolator"));
ROUTE519.setFromField(CString("value_changed"));
ROUTE519.setToNode(CString("Joe_l_carpal_interphalangeal_1"));
ROUTE519.setToField(CString("set_rotation"));
Scene16.addChild(&ROUTE519);

ROUTE& ROUTE520 =  ROUTE();
ROUTE520.setFromNode(CString("l_index0_RotationInterpolator"));
ROUTE520.setFromField(CString("value_changed"));
ROUTE520.setToNode(CString("Joe_l_carpometacarpal_2"));
ROUTE520.setToField(CString("set_rotation"));
Scene16.addChild(&ROUTE520);

ROUTE& ROUTE521 =  ROUTE();
ROUTE521.setFromNode(CString("l_index1_RotationInterpolator"));
ROUTE521.setFromField(CString("value_changed"));
ROUTE521.setToNode(CString("Joe_l_metacarpophalangeal_2"));
ROUTE521.setToField(CString("set_rotation"));
Scene16.addChild(&ROUTE521);

ROUTE& ROUTE522 =  ROUTE();
ROUTE522.setFromNode(CString("l_index2_RotationInterpolator"));
ROUTE522.setFromField(CString("value_changed"));
ROUTE522.setToNode(CString("Joe_l_carpal_proximal_interphalangeal_2"));
ROUTE522.setToField(CString("set_rotation"));
Scene16.addChild(&ROUTE522);

ROUTE& ROUTE523 =  ROUTE();
ROUTE523.setFromNode(CString("l_index3_RotationInterpolator"));
ROUTE523.setFromField(CString("value_changed"));
ROUTE523.setToNode(CString("Joe_l_carpal_distal_interphalangeal_2"));
ROUTE523.setToField(CString("set_rotation"));
Scene16.addChild(&ROUTE523);

ROUTE& ROUTE524 =  ROUTE();
ROUTE524.setFromNode(CString("l_middle0_RotationInterpolator"));
ROUTE524.setFromField(CString("value_changed"));
ROUTE524.setToNode(CString("Joe_l_carpometacarpal_3"));
ROUTE524.setToField(CString("set_rotation"));
Scene16.addChild(&ROUTE524);

ROUTE& ROUTE525 =  ROUTE();
ROUTE525.setFromNode(CString("l_middle1_RotationInterpolator"));
ROUTE525.setFromField(CString("value_changed"));
ROUTE525.setToNode(CString("Joe_l_metacarpophalangeal_3"));
ROUTE525.setToField(CString("set_rotation"));
Scene16.addChild(&ROUTE525);

ROUTE& ROUTE526 =  ROUTE();
ROUTE526.setFromNode(CString("l_middle2_RotationInterpolator"));
ROUTE526.setFromField(CString("value_changed"));
ROUTE526.setToNode(CString("Joe_l_carpal_proximal_interphalangeal_3"));
ROUTE526.setToField(CString("set_rotation"));
Scene16.addChild(&ROUTE526);

ROUTE& ROUTE527 =  ROUTE();
ROUTE527.setFromNode(CString("l_middle3_RotationInterpolator"));
ROUTE527.setFromField(CString("value_changed"));
ROUTE527.setToNode(CString("Joe_l_carpal_distal_interphalangeal_3"));
ROUTE527.setToField(CString("set_rotation"));
Scene16.addChild(&ROUTE527);

ROUTE& ROUTE528 =  ROUTE();
ROUTE528.setFromNode(CString("l_ring0_RotationInterpolator"));
ROUTE528.setFromField(CString("value_changed"));
ROUTE528.setToNode(CString("Joe_l_carpometacarpal_4"));
ROUTE528.setToField(CString("set_rotation"));
Scene16.addChild(&ROUTE528);

ROUTE& ROUTE529 =  ROUTE();
ROUTE529.setFromNode(CString("l_ring1_RotationInterpolator"));
ROUTE529.setFromField(CString("value_changed"));
ROUTE529.setToNode(CString("Joe_l_metacarpophalangeal_4"));
ROUTE529.setToField(CString("set_rotation"));
Scene16.addChild(&ROUTE529);

ROUTE& ROUTE530 =  ROUTE();
ROUTE530.setFromNode(CString("l_ring2_RotationInterpolator"));
ROUTE530.setFromField(CString("value_changed"));
ROUTE530.setToNode(CString("Joe_l_carpal_proximal_interphalangeal_4"));
ROUTE530.setToField(CString("set_rotation"));
Scene16.addChild(&ROUTE530);

ROUTE& ROUTE531 =  ROUTE();
ROUTE531.setFromNode(CString("l_ring3_RotationInterpolator"));
ROUTE531.setFromField(CString("value_changed"));
ROUTE531.setToNode(CString("Joe_l_carpal_distal_interphalangeal_4"));
ROUTE531.setToField(CString("set_rotation"));
Scene16.addChild(&ROUTE531);

ROUTE& ROUTE532 =  ROUTE();
ROUTE532.setFromNode(CString("l_pinky0_RotationInterpolator"));
ROUTE532.setFromField(CString("value_changed"));
ROUTE532.setToNode(CString("Joe_l_carpometacarpal_5"));
ROUTE532.setToField(CString("set_rotation"));
Scene16.addChild(&ROUTE532);

ROUTE& ROUTE533 =  ROUTE();
ROUTE533.setFromNode(CString("l_pinky1_RotationInterpolator"));
ROUTE533.setFromField(CString("value_changed"));
ROUTE533.setToNode(CString("Joe_l_metacarpophalangeal_5"));
ROUTE533.setToField(CString("set_rotation"));
Scene16.addChild(&ROUTE533);

ROUTE& ROUTE534 =  ROUTE();
ROUTE534.setFromNode(CString("l_pinky2_RotationInterpolator"));
ROUTE534.setFromField(CString("value_changed"));
ROUTE534.setToNode(CString("Joe_l_carpal_proximal_interphalangeal_5"));
ROUTE534.setToField(CString("set_rotation"));
Scene16.addChild(&ROUTE534);

ROUTE& ROUTE535 =  ROUTE();
ROUTE535.setFromNode(CString("l_pinky3_RotationInterpolator"));
ROUTE535.setFromField(CString("value_changed"));
ROUTE535.setToNode(CString("Joe_l_carpal_distal_interphalangeal_5"));
ROUTE535.setToField(CString("set_rotation"));
Scene16.addChild(&ROUTE535);

ROUTE& ROUTE536 =  ROUTE();
ROUTE536.setFromNode(CString("r_sternoclavicular_RotationInterpolator"));
ROUTE536.setFromField(CString("value_changed"));
ROUTE536.setToNode(CString("Joe_r_sternoclavicular"));
ROUTE536.setToField(CString("set_rotation"));
Scene16.addChild(&ROUTE536);

ROUTE& ROUTE537 =  ROUTE();
ROUTE537.setFromNode(CString("r_acromioclavicular_RotationInterpolator"));
ROUTE537.setFromField(CString("value_changed"));
ROUTE537.setToNode(CString("Joe_r_acromioclavicular"));
ROUTE537.setToField(CString("set_rotation"));
Scene16.addChild(&ROUTE537);

ROUTE& ROUTE538 =  ROUTE();
ROUTE538.setFromNode(CString("r_shoulder_RotationInterpolator"));
ROUTE538.setFromField(CString("value_changed"));
ROUTE538.setToNode(CString("Joe_r_shoulder"));
ROUTE538.setToField(CString("set_rotation"));
Scene16.addChild(&ROUTE538);

ROUTE& ROUTE539 =  ROUTE();
ROUTE539.setFromNode(CString("r_elbow_RotationInterpolator"));
ROUTE539.setFromField(CString("value_changed"));
ROUTE539.setToNode(CString("Joe_r_elbow"));
ROUTE539.setToField(CString("set_rotation"));
Scene16.addChild(&ROUTE539);

ROUTE& ROUTE540 =  ROUTE();
ROUTE540.setFromNode(CString("r_wrist_RotationInterpolator"));
ROUTE540.setFromField(CString("value_changed"));
ROUTE540.setToNode(CString("Joe_r_radiocarpal"));
ROUTE540.setToField(CString("set_rotation"));
Scene16.addChild(&ROUTE540);

ROUTE& ROUTE541 =  ROUTE();
ROUTE541.setFromNode(CString("r_thumb1_RotationInterpolator"));
ROUTE541.setFromField(CString("value_changed"));
ROUTE541.setToNode(CString("Joe_r_carpometacarpal_1"));
ROUTE541.setToField(CString("set_rotation"));
Scene16.addChild(&ROUTE541);

ROUTE& ROUTE542 =  ROUTE();
ROUTE542.setFromNode(CString("r_thumb2_RotationInterpolator"));
ROUTE542.setFromField(CString("value_changed"));
ROUTE542.setToNode(CString("Joe_r_metacarpophalangeal_1"));
ROUTE542.setToField(CString("set_rotation"));
Scene16.addChild(&ROUTE542);

ROUTE& ROUTE543 =  ROUTE();
ROUTE543.setFromNode(CString("r_thumb3_RotationInterpolator"));
ROUTE543.setFromField(CString("value_changed"));
ROUTE543.setToNode(CString("Joe_r_carpal_interphalangeal_1"));
ROUTE543.setToField(CString("set_rotation"));
Scene16.addChild(&ROUTE543);

ROUTE& ROUTE544 =  ROUTE();
ROUTE544.setFromNode(CString("r_index0_RotationInterpolator"));
ROUTE544.setFromField(CString("value_changed"));
ROUTE544.setToNode(CString("Joe_r_carpometacarpal_2"));
ROUTE544.setToField(CString("set_rotation"));
Scene16.addChild(&ROUTE544);

ROUTE& ROUTE545 =  ROUTE();
ROUTE545.setFromNode(CString("r_index1_RotationInterpolator"));
ROUTE545.setFromField(CString("value_changed"));
ROUTE545.setToNode(CString("Joe_r_metacarpophalangeal_2"));
ROUTE545.setToField(CString("set_rotation"));
Scene16.addChild(&ROUTE545);

ROUTE& ROUTE546 =  ROUTE();
ROUTE546.setFromNode(CString("r_index2_RotationInterpolator"));
ROUTE546.setFromField(CString("value_changed"));
ROUTE546.setToNode(CString("Joe_r_carpal_proximal_interphalangeal_2"));
ROUTE546.setToField(CString("set_rotation"));
Scene16.addChild(&ROUTE546);

ROUTE& ROUTE547 =  ROUTE();
ROUTE547.setFromNode(CString("r_index3_RotationInterpolator"));
ROUTE547.setFromField(CString("value_changed"));
ROUTE547.setToNode(CString("Joe_r_carpal_distal_interphalangeal_2"));
ROUTE547.setToField(CString("set_rotation"));
Scene16.addChild(&ROUTE547);

ROUTE& ROUTE548 =  ROUTE();
ROUTE548.setFromNode(CString("r_middle0_RotationInterpolator"));
ROUTE548.setFromField(CString("value_changed"));
ROUTE548.setToNode(CString("Joe_r_carpometacarpal_3"));
ROUTE548.setToField(CString("set_rotation"));
Scene16.addChild(&ROUTE548);

ROUTE& ROUTE549 =  ROUTE();
ROUTE549.setFromNode(CString("r_middle1_RotationInterpolator"));
ROUTE549.setFromField(CString("value_changed"));
ROUTE549.setToNode(CString("Joe_r_metacarpophalangeal_3"));
ROUTE549.setToField(CString("set_rotation"));
Scene16.addChild(&ROUTE549);

ROUTE& ROUTE550 =  ROUTE();
ROUTE550.setFromNode(CString("r_middle2_RotationInterpolator"));
ROUTE550.setFromField(CString("value_changed"));
ROUTE550.setToNode(CString("Joe_r_carpal_proximal_interphalangeal_3"));
ROUTE550.setToField(CString("set_rotation"));
Scene16.addChild(&ROUTE550);

ROUTE& ROUTE551 =  ROUTE();
ROUTE551.setFromNode(CString("r_middle3_RotationInterpolator"));
ROUTE551.setFromField(CString("value_changed"));
ROUTE551.setToNode(CString("Joe_r_carpal_distal_interphalangeal_3"));
ROUTE551.setToField(CString("set_rotation"));
Scene16.addChild(&ROUTE551);

ROUTE& ROUTE552 =  ROUTE();
ROUTE552.setFromNode(CString("r_ring0_RotationInterpolator"));
ROUTE552.setFromField(CString("value_changed"));
ROUTE552.setToNode(CString("Joe_r_carpometacarpal_4"));
ROUTE552.setToField(CString("set_rotation"));
Scene16.addChild(&ROUTE552);

ROUTE& ROUTE553 =  ROUTE();
ROUTE553.setFromNode(CString("r_ring1_RotationInterpolator"));
ROUTE553.setFromField(CString("value_changed"));
ROUTE553.setToNode(CString("Joe_r_metacarpophalangeal_4"));
ROUTE553.setToField(CString("set_rotation"));
Scene16.addChild(&ROUTE553);

ROUTE& ROUTE554 =  ROUTE();
ROUTE554.setFromNode(CString("r_ring2_RotationInterpolator"));
ROUTE554.setFromField(CString("value_changed"));
ROUTE554.setToNode(CString("Joe_r_carpal_proximal_interphalangeal_4"));
ROUTE554.setToField(CString("set_rotation"));
Scene16.addChild(&ROUTE554);

ROUTE& ROUTE555 =  ROUTE();
ROUTE555.setFromNode(CString("r_ring3_RotationInterpolator"));
ROUTE555.setFromField(CString("value_changed"));
ROUTE555.setToNode(CString("Joe_r_carpal_distal_interphalangeal_4"));
ROUTE555.setToField(CString("set_rotation"));
Scene16.addChild(&ROUTE555);

ROUTE& ROUTE556 =  ROUTE();
ROUTE556.setFromNode(CString("r_pinky0_RotationInterpolator"));
ROUTE556.setFromField(CString("value_changed"));
ROUTE556.setToNode(CString("Joe_r_carpometacarpal_5"));
ROUTE556.setToField(CString("set_rotation"));
Scene16.addChild(&ROUTE556);

ROUTE& ROUTE557 =  ROUTE();
ROUTE557.setFromNode(CString("r_pinky1_RotationInterpolator"));
ROUTE557.setFromField(CString("value_changed"));
ROUTE557.setToNode(CString("Joe_r_metacarpophalangeal_5"));
ROUTE557.setToField(CString("set_rotation"));
Scene16.addChild(&ROUTE557);

ROUTE& ROUTE558 =  ROUTE();
ROUTE558.setFromNode(CString("r_pinky2_RotationInterpolator"));
ROUTE558.setFromField(CString("value_changed"));
ROUTE558.setToNode(CString("Joe_r_carpal_proximal_interphalangeal_5"));
ROUTE558.setToField(CString("set_rotation"));
Scene16.addChild(&ROUTE558);

ROUTE& ROUTE559 =  ROUTE();
ROUTE559.setFromNode(CString("r_pinky3_RotationInterpolator"));
ROUTE559.setFromField(CString("value_changed"));
ROUTE559.setToNode(CString("Joe_r_carpal_distal_interphalangeal_5"));
ROUTE559.setToField(CString("set_rotation"));
Scene16.addChild(&ROUTE559);

ROUTE& ROUTE560 =  ROUTE();
ROUTE560.setFromNode(CString("KickTimer"));
ROUTE560.setFromField(CString("fraction_changed"));
ROUTE560.setToNode(CString("skull_tipInterpolator"));
ROUTE560.setToField(CString("set_fraction"));
Scene16.addChild(&ROUTE560);

ROUTE& ROUTE561 =  ROUTE();
ROUTE561.setFromNode(CString("skull_tipInterpolator"));
ROUTE561.setFromField(CString("value_changed"));
ROUTE561.setToNode(CString("Joe_skull_tip_raiser_action"));
ROUTE561.setToField(CString("set_weight"));
Scene16.addChild(&ROUTE561);

ROUTE& ROUTE562 =  ROUTE();
ROUTE562.setFromNode(CString("KickTimer"));
ROUTE562.setFromField(CString("fraction_changed"));
ROUTE562.setToNode(CString("SkinInterpolator"));
ROUTE562.setToField(CString("set_fraction"));
Scene16.addChild(&ROUTE562);

ROUTE& ROUTE563 =  ROUTE();
ROUTE563.setFromNode(CString("SkinInterpolator"));
ROUTE563.setFromField(CString("value_changed"));
ROUTE563.setToNode(CString("KickTextureTransform"));
ROUTE563.setToField(CString("set_rotation"));
Scene16.addChild(&ROUTE563);

ROUTE& ROUTE564 =  ROUTE();
ROUTE564.setFromNode(CString("KickTimer"));
ROUTE564.setFromField(CString("fraction_changed"));
ROUTE564.setToNode(CString("ball_TranslationInterpolator"));
ROUTE564.setToField(CString("set_fraction"));
Scene16.addChild(&ROUTE564);

ROUTE& ROUTE565 =  ROUTE();
ROUTE565.setFromNode(CString("ball_TranslationInterpolator"));
ROUTE565.setFromField(CString("value_changed"));
ROUTE565.setToNode(CString("SBall"));
ROUTE565.setToField(CString("set_translation"));
Scene16.addChild(&ROUTE565);

ROUTE& ROUTE566 =  ROUTE();
ROUTE566.setFromNode(CString("KickTimer"));
ROUTE566.setFromField(CString("fraction_changed"));
ROUTE566.setToNode(CString("ball_RotationInterpolator"));
ROUTE566.setToField(CString("set_fraction"));
Scene16.addChild(&ROUTE566);

ROUTE& ROUTE567 =  ROUTE();
ROUTE567.setFromNode(CString("ball_RotationInterpolator"));
ROUTE567.setFromField(CString("value_changed"));
ROUTE567.setToNode(CString("SBall"));
ROUTE567.setToField(CString("set_rotation"));
Scene16.addChild(&ROUTE567);

X3D0.setScene(&Scene16);

//}
