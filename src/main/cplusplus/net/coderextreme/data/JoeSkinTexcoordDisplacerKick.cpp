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
X3D0->setVersion("3.3");
head* head1 = new head();
component* component2 = new component();
component2->setName("HAnim");
component2->setLevel(1);
head1->addComponent(component2);

meta* meta3 = new meta();
meta3->setName("title");
meta3->setContent("JoeSkinTexcoordDisplacerKick.x3d");
head1->addMeta(meta3);

meta* meta4 = new meta();
meta4->setName("info");
meta4->setContent("Joe No Reservations 20200709 spec root and vc7 hier 20161206 ... 20121221 ... 20040109 x3d/hanim");
head1->addMeta(meta4);

meta* meta5 = new meta();
meta5->setName("description");
meta5->setContent("This Joe model is a V1 LOA3 Humanoid with textured skin composed mainly of V1 Site locations.");
head1->addMeta(meta5);

meta* meta6 = new meta();
meta6->setName("created");
meta6->setContent("15 January 2004");
head1->addMeta(meta6);

meta* meta7 = new meta();
meta7->setName("translated");
meta7->setContent("12 January 2017");
head1->addMeta(meta7);

meta* meta8 = new meta();
meta8->setName("modified");
meta8->setContent("27 January 2023");
head1->addMeta(meta8);

meta* meta9 = new meta();
meta9->setName("creator");
meta9->setContent("Joe D Williams");
head1->addMeta(meta9);

meta* meta10 = new meta();
meta10->setName("translators");
meta10->setContent("Roy Walmsley and Don Brutzman");
head1->addMeta(meta10);

meta* meta11 = new meta();
meta11->setName("info");
meta11->setContent("Transcoding from .vrml to .x3dv by Joe using BS studio circa 2012");
head1->addMeta(meta11);

meta* meta12 = new meta();
meta12->setName("info");
meta12->setContent("translated from .x3dv to .xml for web3d archive");
head1->addMeta(meta12);

meta* meta13 = new meta();
meta13->setName("TODO");
meta13->setContent("Record information relating a certain skin coordinate to a V1 Annex A Site name and location is now found in comment at end of this scene where each # number name string appears in the order of coordinate points in the skin mesh user code. Best organized to provide author data naming important HAnim humanoid skeletonspace to skinspace relations using structured MetadataSet containing MetadataString nodes");
head1->addMeta(meta13);

meta* meta14 = new meta();
meta14->setName("info");
meta14->setContent("modified to correct root and vc7 hierarchies");
head1->addMeta(meta14);

meta* meta15 = new meta();
meta15->setName("identifier");
meta15->setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/JoeSkinTexcoordDisplacerKick.x3d");
head1->addMeta(meta15);

meta* meta16 = new meta();
meta16->setName("generator");
meta16->setContent("BS studio translation from .x3dv by Joe using BS Contact");
head1->addMeta(meta16);

meta* meta17 = new meta();
meta17->setName("generator");
meta17->setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit");
head1->addMeta(meta17);

meta* meta18 = new meta();
meta18->setName("license");
meta18->setContent("../license.html");
head1->addMeta(meta18);

X3D0->setHead(head1);

Scene* Scene19 = new Scene();
WorldInfo* WorldInfo20 = new WorldInfo();
WorldInfo20->setInfo(new String[3]{"X3D Humanoid V1 LOA3 skeleton","skin from hanim sites, surface features, and some added points","390 points"}, 3);
WorldInfo20->setTitle("X3D HANIM LOA3 Skeleton, 390 point Skin, texcoords, Displacer, teTrans for Joe_ by Joe");
Scene19->addChild(WorldInfo20);

NavigationInfo* NavigationInfo21 = new NavigationInfo();
NavigationInfo21->setDEF("Start_NavigationInfo");
NavigationInfo21->setHeadlight(False);
NavigationInfo21->setSpeed(2.5);
Scene19->addChild(NavigationInfo21);

Background* Background22 = new Background();
Background22->setDEF("blue_Background");
Scene19->addChild(Background22);

SpotLight* SpotLight23 = new SpotLight();
SpotLight23->setDEF("light1");
SpotLight23->setAmbientIntensity(0.7);
SpotLight23->setBeamWidth(1.5);
SpotLight23->setColor(new float[3]{0.8,0.8,1});
SpotLight23->setCutOffAngle(0.6);
SpotLight23->setDirection(new float[3]{0,0,0});
SpotLight23->setLocation(new float[3]{0,3,3});
SpotLight23->setRadius(10);
Scene19->addChild(SpotLight23);

PointLight* PointLight24 = new PointLight();
PointLight24->setDEF("light2");
PointLight24->setAmbientIntensity(0.7);
PointLight24->setColor(new float[3]{0.8,0.8,1});
PointLight24->setLocation(new float[3]{0,10,-7});
Scene19->addChild(PointLight24);

//External from the Humanoid viewpoints
Viewpoint* Viewpoint25 = new Viewpoint();
Viewpoint25->setDEF("Scene_InclinedView");
Viewpoint25->setCenterOfRotation(new float[3]{0,0.85,0});
Viewpoint25->setDescription("Scene_Inclined View");
Viewpoint25->setOrientation(new float[4]{-0.113,0.993,0.0347,0.671});
Viewpoint25->setPosition(new float[3]{1.62,1.05,3.06});
Scene19->addChild(Viewpoint25);

Viewpoint* Viewpoint26 = new Viewpoint();
Viewpoint26->setDEF("Scene_FrontView");
Viewpoint26->setCenterOfRotation(new float[3]{0,0.8,0});
Viewpoint26->setDescription("Scene Front View");
Viewpoint26->setPosition(new float[3]{0,0.8,2.58});
Scene19->addChild(Viewpoint26);

Viewpoint* Viewpoint27 = new Viewpoint();
Viewpoint27->setDEF("Scene_SideView");
Viewpoint27->setCenterOfRotation(new float[3]{0,0.8,0});
Viewpoint27->setDescription("Scene Side View");
Viewpoint27->setOrientation(new float[4]{0,1,0,1.5708});
Viewpoint27->setPosition(new float[3]{2.6,0.5,0});
Scene19->addChild(Viewpoint27);

Viewpoint* Viewpoint28 = new Viewpoint();
Viewpoint28->setDEF("Scene_BackView");
Viewpoint28->setCenterOfRotation(new float[3]{0,1.5,0});
Viewpoint28->setDescription("Scene Back View");
Viewpoint28->setOrientation(new float[4]{0,1,0,3.14});
Viewpoint28->setPosition(new float[3]{0,2.5,-3});
Scene19->addChild(Viewpoint28);

Viewpoint* Viewpoint29 = new Viewpoint();
Viewpoint29->setDEF("Scene_TopView");
Viewpoint29->setCenterOfRotation(new float[3]{0,1.5,0});
Viewpoint29->setDescription("Scene Top View");
Viewpoint29->setOrientation(new float[4]{1,0,0,-1.5708});
Viewpoint29->setPosition(new float[3]{0,3.5,0});
Scene19->addChild(Viewpoint29);

Group* Group30 = new Group();
Group30->setDEF("Joe_Humanoid");
HAnimHumanoid* HAnimHumanoid31 = new HAnimHumanoid();
HAnimHumanoid31->setName("Human");
HAnimHumanoid31->setDEF("Joe_Human");
HAnimHumanoid31->setVersion("2.0");
HAnimJoint* HAnimJoint32 = new HAnimJoint();
HAnimJoint32->setName("HumanoidRoot");
HAnimJoint32->setDEF("Joe_HumanoidRoot");
HAnimJoint32->setCenter(new float[3]{0,0.875,0});
MetadataSet* MetadataSet33 = new MetadataSet();
MetadataSet33->setName("warnings");
MetadataSet33->setReference("HAnim");
//TODO experimental
MetadataString* MetadataString34 = new MetadataString();
MetadataString34->setName("SymmetricalLeftRight");
MetadataString34->setReference("correction options: ignore, warn, average, left, right, largest, smallest");
MetadataString34->setValue(new String[1]{"ignore"}, 1);
MetadataSet33->setValue(MetadataString34);

HAnimJoint32->setMetadata(MetadataSet33);

HAnimSegment* HAnimSegment35 = new HAnimSegment();
HAnimSegment35->setName("sacrum");
HAnimSegment35->setDEF("Joe_sacrum");
HAnimSite* HAnimSite36 = new HAnimSite();
HAnimSite36->setName("RootFront_view");
HAnimSite36->setDEF("Joe_RootFront_view");
Transform* Transform37 = new Transform();
Transform37->setDEF("hanimcordsys");
Transform37->setScale(new float[3]{0.175,0.175,0.175});
Viewpoint* Viewpoint38 = new Viewpoint();
Viewpoint38->setDEF("ViewBodyRootAxes");
Viewpoint38->setDescription("Joe_HAnim Root HAnimSite Coordinate Axes View");
Transform37->addChild(Viewpoint38);

Shape* Shape39 = new Shape();
Shape39->setDEF("AxisLinesShape");
//RGB lines showing XYZ axes
IndexedLineSet* IndexedLineSet40 = new IndexedLineSet();
IndexedLineSet40->setColorIndex(new int[3]{0,1,2});
IndexedLineSet40->setColorPerVertex(False);
IndexedLineSet40->setCoordIndex(new int[9]{0,1,-1,0,2,-1,0,3,-1});
Coordinate* Coordinate41 = new Coordinate();
Coordinate41->setPoint(new float[12]{0,0,0,1,0,0,0,1,0,0,0,1});
IndexedLineSet40->setCoord(Coordinate41);

Color* Color42 = new Color();
Color42->setColor(new float[9]{1,0,0,0,0.6,0,0,0,1});
IndexedLineSet40->setColor(Color42);

Shape39->setGeometry(IndexedLineSet40);

Transform37->addChild(Shape39);

HAnimSite36->addChild(Transform37);

HAnimSegment35->addChild(HAnimSite36);

HAnimJoint32->addChild(HAnimSegment35);

HAnimJoint* HAnimJoint43 = new HAnimJoint();
HAnimJoint43->setName("sacroiliac");
HAnimJoint43->setDEF("Joe_sacroiliac");
HAnimJoint43->setCenter(new float[3]{0,0.92,0});
HAnimJoint43->setSkinCoordIndex(new int[13]{17,19,20,21,22,23,26,27,73,82,89,91,93});
HAnimJoint43->setSkinCoordWeight(new float[13]{1,1,1,1,1,1,1,1,1,1,0.35,0.35,1}, 13);
HAnimJoint* HAnimJoint44 = new HAnimJoint();
HAnimJoint44->setName("l_hip");
HAnimJoint44->setDEF("Joe_l_hip");
HAnimJoint44->setCenter(new float[3]{0.1,0.92,0});
HAnimJoint44->setSkinCoordIndex(new int[6]{89,90,94,95,96,97});
HAnimJoint44->setSkinCoordWeight(new float[6]{0.65,1,1,1,1,1}, 6);
HAnimJoint* HAnimJoint45 = new HAnimJoint();
HAnimJoint45->setName("l_knee");
HAnimJoint45->setDEF("Joe_l_knee");
HAnimJoint45->setCenter(new float[3]{0.115,0.466,0});
HAnimJoint45->setSkinCoordIndex(new int[8]{334,335,336,337,338,339,340,341});
HAnimJoint45->setSkinCoordWeight(new float[8]{1,1,1,1,1,1,1,1}, 8);
HAnimJoint* HAnimJoint46 = new HAnimJoint();
HAnimJoint46->setName("l_ankle");
HAnimJoint46->setDEF("Joe_l_ankle");
HAnimJoint46->setCenter(new float[3]{0.115,0.069,0});
HAnimJoint46->setSkinCoordIndex(new int[4]{342,343,344,345});
HAnimJoint46->setSkinCoordWeight(new float[4]{1,1,1,1}, 4);
HAnimJoint* HAnimJoint47 = new HAnimJoint();
HAnimJoint47->setName("l_subtalar");
HAnimJoint47->setDEF("Joe_l_subtalar");
HAnimJoint47->setCenter(new float[3]{0.115,0.031,0.03});
HAnimJoint47->setSkinCoordIndex(new int[4]{346,347,348,71});
HAnimJoint47->setSkinCoordWeight(new float[4]{1,1,1,1}, 4);
HAnimJoint* HAnimJoint48 = new HAnimJoint();
HAnimJoint48->setName("l_midtarsal");
HAnimJoint48->setDEF("Joe_l_midtarsal");
HAnimJoint48->setCenter(new float[3]{0.115,0.037,0.09});
HAnimJoint48->setSkinCoordIndex(new int[4]{349,350,351,352});
HAnimJoint48->setSkinCoordWeight(new float[4]{1,1,1,1}, 4);
HAnimJoint* HAnimJoint49 = new HAnimJoint();
HAnimJoint49->setName("l_metatarsal");
HAnimJoint49->setDEF("Joe_l_metatarsal");
HAnimJoint49->setCenter(new float[3]{0.115,0.02,0.122});
HAnimJoint49->setSkinCoordIndex(new int[9]{353,354,355,356,357,358,359,360,361});
HAnimJoint49->setSkinCoordWeight(new float[9]{1,1,1,1,1,1,1,1,1}, 9);
HAnimJoint48->addChild(HAnimJoint49);

HAnimJoint47->addChild(HAnimJoint48);

HAnimJoint46->addChild(HAnimJoint47);

HAnimJoint45->addChild(HAnimJoint46);

HAnimJoint44->addChild(HAnimJoint45);

HAnimJoint43->addChild(HAnimJoint44);

HAnimJoint* HAnimJoint50 = new HAnimJoint();
HAnimJoint50->setName("r_hip");
HAnimJoint50->setDEF("Joe_r_hip");
HAnimJoint50->setCenter(new float[3]{-0.1,0.92,0});
HAnimJoint50->setSkinCoordIndex(new int[8]{91,92,98,99,100,101,362,363});
HAnimJoint50->setSkinCoordWeight(new float[8]{0.65,1,0.8,1,1,1,0.4,0.8}, 8);
HAnimJoint* HAnimJoint51 = new HAnimJoint();
HAnimJoint51->setName("r_knee");
HAnimJoint51->setDEF("Joe_r_knee");
HAnimJoint51->setCenter(new float[3]{-0.05,0.466,0});
HAnimJoint51->setSkinCoordIndex(new int[9]{362,363,364,365,366,367,368,369,98});
HAnimJoint51->setSkinCoordWeight(new float[9]{0.6,0.2,1,1,1,1,1,1,0.2}, 9);
HAnimJoint* HAnimJoint52 = new HAnimJoint();
HAnimJoint52->setName("r_ankle");
HAnimJoint52->setDEF("Joe_r_ankle");
HAnimJoint52->setCenter(new float[3]{-0.115,0.069,0});
HAnimJoint52->setSkinCoordIndex(new int[4]{370,371,372,373});
HAnimJoint52->setSkinCoordWeight(new float[4]{1,1,1,1}, 4);
HAnimJoint* HAnimJoint53 = new HAnimJoint();
HAnimJoint53->setName("r_subtalar");
HAnimJoint53->setDEF("Joe_r_subtalar");
HAnimJoint53->setCenter(new float[3]{-0.1,0.015,-0.01});
HAnimJoint53->setSkinCoordIndex(new int[3]{374,375,376});
HAnimJoint53->setSkinCoordWeight(new float[3]{1,1,1}, 3);
HAnimJoint* HAnimJoint54 = new HAnimJoint();
HAnimJoint54->setName("r_midtarsal");
HAnimJoint54->setDEF("Joe_r_midtarsal");
HAnimJoint54->setCenter(new float[3]{-0.115,0.037,0.09});
HAnimJoint54->setSkinCoordIndex(new int[4]{377,378,379,380});
HAnimJoint54->setSkinCoordWeight(new float[4]{1,1,1,1}, 4);
HAnimJoint* HAnimJoint55 = new HAnimJoint();
HAnimJoint55->setName("r_metatarsal");
HAnimJoint55->setDEF("Joe_r_metatarsal");
HAnimJoint55->setCenter(new float[3]{-0.1,0.01,0.14});
HAnimJoint55->setSkinCoordIndex(new int[9]{381,382,383,384,385,386,387,388,389});
HAnimJoint55->setSkinCoordWeight(new float[9]{1,1,1,1,1,1,1,1,1}, 9);
HAnimJoint54->addChild(HAnimJoint55);

HAnimJoint53->addChild(HAnimJoint54);

HAnimJoint52->addChild(HAnimJoint53);

HAnimJoint51->addChild(HAnimJoint52);

HAnimJoint50->addChild(HAnimJoint51);

HAnimJoint43->addChild(HAnimJoint50);

HAnimJoint32->addChild(HAnimJoint43);

HAnimJoint* HAnimJoint56 = new HAnimJoint();
HAnimJoint56->setName("vl5");
HAnimJoint56->setDEF("Joe_vl5");
HAnimJoint56->setCenter(new float[3]{0,1.045,-0.095});
HAnimJoint56->setSkinCoordIndex(new int[2]{28,76});
HAnimJoint56->setSkinCoordWeight(new float[2]{1,1}, 2);
HAnimJoint* HAnimJoint57 = new HAnimJoint();
HAnimJoint57->setName("vl4");
HAnimJoint57->setDEF("Joe_vl4");
HAnimJoint57->setCenter(new float[3]{0,1.068,-0.085});
HAnimJoint* HAnimJoint58 = new HAnimJoint();
HAnimJoint58->setName("vl3");
HAnimJoint58->setDEF("Joe_vl3");
HAnimJoint58->setCenter(new float[3]{0,1.092,-0.0725});
HAnimJoint* HAnimJoint59 = new HAnimJoint();
HAnimJoint59->setName("vl2");
HAnimJoint59->setDEF("Joe_vl2");
HAnimJoint59->setCenter(new float[3]{0,1.12,-0.065});
HAnimJoint59->setSkinCoordIndex(new int[9]{16,18,25,83,84,85,86,87,88});
HAnimJoint59->setSkinCoordWeight(new float[9]{1,1,1,1,1,1,0.7,1,0.8}, 9);
HAnimJoint* HAnimJoint60 = new HAnimJoint();
HAnimJoint60->setName("vl1");
HAnimJoint60->setDEF("Joe_vl1");
HAnimJoint60->setCenter(new float[3]{0,1.1459,-0.0625});
HAnimJoint* HAnimJoint61 = new HAnimJoint();
HAnimJoint61->setName("vt12");
HAnimJoint61->setDEF("Joe_vt12");
HAnimJoint61->setCenter(new float[3]{0,1.179,-0.068});
HAnimJoint* HAnimJoint62 = new HAnimJoint();
HAnimJoint62->setName("vt11");
HAnimJoint62->setDEF("Joe_vt11");
HAnimJoint62->setCenter(new float[3]{0,1.2679,-0.081});
HAnimJoint* HAnimJoint63 = new HAnimJoint();
HAnimJoint63->setName("vt10");
HAnimJoint63->setDEF("Joe_vt10");
HAnimJoint63->setCenter(new float[3]{0,1.242,-0.09});
HAnimJoint63->setSkinCoordIndex(new int[1]{15});
HAnimJoint63->setSkinCoordWeight(new float[1]{1}, 1);
HAnimJoint* HAnimJoint64 = new HAnimJoint();
HAnimJoint64->setName("vt9");
HAnimJoint64->setDEF("Joe_vt9");
HAnimJoint64->setCenter(new float[3]{0,1.268,-0.1});
HAnimJoint64->setSkinCoordIndex(new int[2]{13,14});
HAnimJoint64->setSkinCoordWeight(new float[2]{1,1}, 2);
HAnimJoint* HAnimJoint65 = new HAnimJoint();
HAnimJoint65->setName("vt8");
HAnimJoint65->setDEF("Joe_vt8");
HAnimJoint65->setCenter(new float[3]{0,1.294,-0.11});
HAnimJoint* HAnimJoint66 = new HAnimJoint();
HAnimJoint66->setName("vt7");
HAnimJoint66->setDEF("Joe_vt7");
HAnimJoint66->setCenter(new float[3]{0,1.323,-0.1155});
HAnimJoint* HAnimJoint67 = new HAnimJoint();
HAnimJoint67->setName("vt6");
HAnimJoint67->setDEF("Joe_vt6");
HAnimJoint67->setCenter(new float[3]{0,1.352,-0.12});
HAnimJoint* HAnimJoint68 = new HAnimJoint();
HAnimJoint68->setName("vt5");
HAnimJoint68->setDEF("Joe_vt5");
HAnimJoint68->setCenter(new float[3]{0,1.381,-0.1235});
HAnimJoint* HAnimJoint69 = new HAnimJoint();
HAnimJoint69->setName("vt4");
HAnimJoint69->setDEF("Joe_vt4");
HAnimJoint69->setCenter(new float[3]{0,1.41,-0.1235});
HAnimJoint69->setSkinCoordIndex(new int[1]{81});
HAnimJoint69->setSkinCoordWeight(new float[1]{1}, 1);
HAnimJoint* HAnimJoint70 = new HAnimJoint();
HAnimJoint70->setName("vt3");
HAnimJoint70->setDEF("Joe_vt3");
HAnimJoint70->setCenter(new float[3]{0,1.438,-0.12});
HAnimJoint* HAnimJoint71 = new HAnimJoint();
HAnimJoint71->setName("vt2");
HAnimJoint71->setDEF("Joe_vt2");
HAnimJoint71->setCenter(new float[3]{0,1.468,-0.105});
HAnimJoint* HAnimJoint72 = new HAnimJoint();
HAnimJoint72->setName("vt1");
HAnimJoint72->setDEF("Joe_vt1");
HAnimJoint72->setCenter(new float[3]{0,1.497,-0.09});
HAnimJoint72->setSkinCoordIndex(new int[2]{11,24});
HAnimJoint72->setSkinCoordWeight(new float[2]{1,1}, 2);
HAnimJoint* HAnimJoint73 = new HAnimJoint();
HAnimJoint73->setName("vc7");
HAnimJoint73->setDEF("Joe_vc7");
HAnimJoint73->setCenter(new float[3]{0,1.525,-0.072});
HAnimJoint73->setSkinCoordIndex(new int[2]{74,75});
HAnimJoint73->setSkinCoordWeight(new float[2]{1,1}, 2);
HAnimJoint* HAnimJoint74 = new HAnimJoint();
HAnimJoint74->setName("vc6");
HAnimJoint74->setDEF("Joe_vc6");
HAnimJoint74->setCenter(new float[3]{0,1.54,-0.05});
HAnimJoint* HAnimJoint75 = new HAnimJoint();
HAnimJoint75->setName("vc5");
HAnimJoint75->setDEF("Joe_vc5");
HAnimJoint75->setCenter(new float[3]{0,1.552,-0.035});
HAnimJoint* HAnimJoint76 = new HAnimJoint();
HAnimJoint76->setName("vc4");
HAnimJoint76->setDEF("Joe_vc4");
HAnimJoint76->setCenter(new float[3]{0,1.5675,-0.0256});
HAnimJoint* HAnimJoint77 = new HAnimJoint();
HAnimJoint77->setName("vc3");
HAnimJoint77->setDEF("Joe_vc3");
HAnimJoint77->setCenter(new float[3]{0,1.58225,-0.0185});
HAnimJoint* HAnimJoint78 = new HAnimJoint();
HAnimJoint78->setName("vc2");
HAnimJoint78->setDEF("Joe_vc2");
HAnimJoint78->setCenter(new float[3]{0,1.595,-0.0175});
HAnimJoint* HAnimJoint79 = new HAnimJoint();
HAnimJoint79->setName("vc1");
HAnimJoint79->setDEF("Joe_vc1");
HAnimJoint79->setCenter(new float[3]{0,1.61,-0.015});
HAnimJoint* HAnimJoint80 = new HAnimJoint();
HAnimJoint80->setName("skullbase");
HAnimJoint80->setDEF("Joe_skullbase");
HAnimJoint80->setCenter(new float[3]{0,1.63,-0.01});
HAnimJoint80->setSkinCoordIndex(new int[10]{0,1,2,3,4,5,6,7,8,9});
HAnimJoint80->setSkinCoordWeight(new float[10]{1,1,1,1,1,1,1,1,1,1}, 10);
HAnimDisplacer* HAnimDisplacer81 = new HAnimDisplacer();
HAnimDisplacer81->setName("skull_tip_raiser_action");
HAnimDisplacer81->setDEF("Joe_skull_tip_raiser_action");
HAnimDisplacer81->setCoordIndex(new int[10]{0,1,2,3,4,5,6,7,8,9});
HAnimDisplacer81->setDisplacements(new float[30]{0,0.15,0,0,0,0.15,-0.1,0,0.15,0.1,0,0.05,0,-0.02,0.05,-0.15,0,0,-0.05,0,0,0.15,0,0,0.05,0,0,0,0,-0.15});
HAnimJoint80->addDisplacers(HAnimDisplacer81);

HAnimJoint* HAnimJoint82 = new HAnimJoint();
HAnimJoint82->setName("l_eyelid_joint");
HAnimJoint82->setDEF("Joe_l_eyelid_joint");
HAnimJoint82->setCenter(new float[3]{0.034,1.659,0.06});
HAnimJoint80->addChild(HAnimJoint82);

HAnimJoint* HAnimJoint83 = new HAnimJoint();
HAnimJoint83->setName("l_eyeball_joint");
HAnimJoint83->setDEF("Joe_l_eyeball_joint");
HAnimJoint83->setCenter(new float[3]{0.034,1.659,0.06});
HAnimJoint80->addChild(HAnimJoint83);

HAnimJoint* HAnimJoint84 = new HAnimJoint();
HAnimJoint84->setName("l_eyebrow_joint");
HAnimJoint84->setDEF("Joe_l_eyebrow_joint");
HAnimJoint84->setCenter(new float[3]{0.034,1.659,0.06});
HAnimJoint80->addChild(HAnimJoint84);

HAnimJoint* HAnimJoint85 = new HAnimJoint();
HAnimJoint85->setName("r_eyelid_joint");
HAnimJoint85->setDEF("Joe_r_eyelid_joint");
HAnimJoint85->setCenter(new float[3]{-0.034,1.659,0.06});
HAnimJoint80->addChild(HAnimJoint85);

HAnimJoint* HAnimJoint86 = new HAnimJoint();
HAnimJoint86->setName("r_eyeball_joint");
HAnimJoint86->setDEF("Joe_r_eyeball_joint");
HAnimJoint86->setCenter(new float[3]{-0.034,1.659,0.06});
HAnimJoint80->addChild(HAnimJoint86);

HAnimJoint* HAnimJoint87 = new HAnimJoint();
HAnimJoint87->setName("r_eyebrow_joint");
HAnimJoint87->setDEF("Joe_r_eyebrow_joint");
HAnimJoint87->setCenter(new float[3]{-0.034,1.659,0.06});
HAnimJoint80->addChild(HAnimJoint87);

HAnimJoint* HAnimJoint88 = new HAnimJoint();
HAnimJoint88->setName("temporomandibular");
HAnimJoint88->setDEF("Joe_temporomandibular");
HAnimJoint88->setCenter(new float[3]{0.034,1.659,0.06});
HAnimJoint80->addChild(HAnimJoint88);

HAnimJoint79->addChild(HAnimJoint80);

HAnimJoint78->addChild(HAnimJoint79);

HAnimJoint77->addChild(HAnimJoint78);

HAnimJoint76->addChild(HAnimJoint77);

HAnimJoint75->addChild(HAnimJoint76);

HAnimJoint74->addChild(HAnimJoint75);

HAnimJoint73->addChild(HAnimJoint74);

HAnimJoint72->addChild(HAnimJoint73);

HAnimJoint* HAnimJoint89 = new HAnimJoint();
HAnimJoint89->setName("l_sternoclavicular");
HAnimJoint89->setDEF("Joe_l_sternoclavicular");
HAnimJoint89->setCenter(new float[3]{0.082,1.4488,-0.0353});
HAnimJoint89->setSkinCoordIndex(new int[1]{12});
HAnimJoint89->setSkinCoordWeight(new float[1]{1}, 1);
HAnimJoint* HAnimJoint90 = new HAnimJoint();
HAnimJoint90->setName("l_acromioclavicular");
HAnimJoint90->setDEF("Joe_l_acromioclavicular");
HAnimJoint90->setCenter(new float[3]{0.0962,1.4269,-0.0424});
HAnimJoint90->setSkinCoordIndex(new int[1]{79});
HAnimJoint90->setSkinCoordWeight(new float[1]{1}, 1);
HAnimJoint* HAnimJoint91 = new HAnimJoint();
HAnimJoint91->setName("l_shoulder");
HAnimJoint91->setDEF("Joe_l_shoulder");
HAnimJoint91->setCenter(new float[3]{0.2,1.44,-0.04});
HAnimJoint91->setSkinCoordIndex(new int[8]{41,42,44,80,102,103,104,105});
HAnimJoint91->setSkinCoordWeight(new float[8]{1,1,1,1,1,1,1,1}, 8);
HAnimJoint* HAnimJoint92 = new HAnimJoint();
HAnimJoint92->setName("l_elbow");
HAnimJoint92->setDEF("Joe_l_elbow");
HAnimJoint92->setCenter(new float[3]{0.2,1.1388,-0.04});
HAnimJoint92->setSkinCoordIndex(new int[12]{45,46,47,109,110,111,112,113,115,116,117,118});
HAnimJoint92->setSkinCoordWeight(new float[15]{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, 15);
HAnimJoint* HAnimJoint93 = new HAnimJoint();
HAnimJoint93->setName("l_wrist");
HAnimJoint93->setDEF("Joe_l_wrist");
HAnimJoint93->setCenter(new float[3]{0.2,0.87,-0.04});
HAnimJoint93->setSkinCoordIndex(new int[8]{119,120,121,122,123,124,125,126});
HAnimJoint93->setSkinCoordWeight(new float[8]{1,1,1,1,1,1,1,1}, 8);
HAnimJoint* HAnimJoint94 = new HAnimJoint();
HAnimJoint94->setName("l_thumb1");
HAnimJoint94->setDEF("Joe_l_thumb1");
HAnimJoint94->setCenter(new float[3]{0.1924,0.8472,-0.0534});
HAnimJoint94->setSkinCoordIndex(new int[2]{127,128});
HAnimJoint94->setSkinCoordWeight(new float[2]{1,1}, 2);
HAnimJoint* HAnimJoint95 = new HAnimJoint();
HAnimJoint95->setName("l_thumb2");
HAnimJoint95->setDEF("Joe_l_thumb2");
HAnimJoint95->setCenter(new float[3]{0.1951,0.8226,0.0246});
HAnimJoint95->setSkinCoordIndex(new int[6]{138,139,140,141,142,143});
HAnimJoint95->setSkinCoordWeight(new float[6]{0.5,0.5,0.5,1,1,1}, 6);
HAnimJoint* HAnimJoint96 = new HAnimJoint();
HAnimJoint96->setName("l_thumb3");
HAnimJoint96->setDEF("Joe_l_thumb3");
HAnimJoint96->setCenter(new float[3]{0.1955,0.8159,0.0464});
HAnimJoint96->setSkinCoordIndex(new int[9]{144,145,146,147,148,149,150,151,152});
HAnimJoint96->setSkinCoordWeight(new float[9]{1,1,1,1,1,1,1,1,1}, 9);
HAnimJoint95->addChild(HAnimJoint96);

HAnimJoint94->addChild(HAnimJoint95);

HAnimJoint93->addChild(HAnimJoint94);

HAnimJoint* HAnimJoint97 = new HAnimJoint();
HAnimJoint97->setName("l_index0");
HAnimJoint97->setDEF("Joe_l_index0");
HAnimJoint97->setCenter(new float[3]{0.1983,0.8024,-0.028});
HAnimJoint97->setSkinCoordIndex(new int[2]{129,130});
HAnimJoint97->setSkinCoordWeight(new float[2]{1,1}, 2);
HAnimJoint* HAnimJoint98 = new HAnimJoint();
HAnimJoint98->setName("l_index1");
HAnimJoint98->setDEF("Joe_l_index1");
HAnimJoint98->setCenter(new float[3]{0.1983,0.7815,-0.028});
HAnimJoint98->setSkinCoordIndex(new int[7]{138,139,140,153,154,155,163});
HAnimJoint98->setSkinCoordWeight(new float[7]{0.5,0.5,0.5,1,1,1,0.5}, 7);
HAnimJoint* HAnimJoint99 = new HAnimJoint();
HAnimJoint99->setName("l_index2");
HAnimJoint99->setDEF("Joe_l_index2");
HAnimJoint99->setCenter(new float[3]{0.2017,0.7363,-0.0248});
HAnimJoint99->setSkinCoordIndex(new int[4]{166,167,168,169});
HAnimJoint99->setSkinCoordWeight(new float[4]{1,1,1,1}, 4);
HAnimJoint* HAnimJoint100 = new HAnimJoint();
HAnimJoint100->setName("l_index3");
HAnimJoint100->setDEF("Joe_l_index3");
HAnimJoint100->setCenter(new float[3]{0.2028,0.7139,-0.0236});
HAnimJoint100->setSkinCoordIndex(new int[9]{170,171,172,173,174,175,176,177,178});
HAnimJoint100->setSkinCoordWeight(new float[9]{1,1,1,1,1,1,1,1,1}, 9);
HAnimJoint99->addChild(HAnimJoint100);

HAnimJoint98->addChild(HAnimJoint99);

HAnimJoint97->addChild(HAnimJoint98);

HAnimJoint93->addChild(HAnimJoint97);

HAnimJoint* HAnimJoint101 = new HAnimJoint();
HAnimJoint101->setName("l_middle0");
HAnimJoint101->setDEF("Joe_l_middle0");
HAnimJoint101->setCenter(new float[3]{0.1987,0.8029,-0.053});
HAnimJoint101->setSkinCoordIndex(new int[2]{131,132});
HAnimJoint101->setSkinCoordWeight(new float[2]{1,1}, 2);
HAnimJoint* HAnimJoint102 = new HAnimJoint();
HAnimJoint102->setName("l_middle1");
HAnimJoint102->setDEF("Joe_l_middle1");
HAnimJoint102->setCenter(new float[3]{0.1987,0.7818,-0.053});
HAnimJoint102->setSkinCoordIndex(new int[4]{156,157,163,164});
HAnimJoint102->setSkinCoordWeight(new float[4]{1,1,0.5,0.5}, 4);
HAnimJoint* HAnimJoint103 = new HAnimJoint();
HAnimJoint103->setName("l_middle2");
HAnimJoint103->setDEF("Joe_l_middle2");
HAnimJoint103->setCenter(new float[3]{0.2013,0.7273,-0.0503});
HAnimJoint103->setSkinCoordIndex(new int[4]{179,180,181,182});
HAnimJoint103->setSkinCoordWeight(new float[4]{1,1,1,1}, 4);
HAnimJoint* HAnimJoint104 = new HAnimJoint();
HAnimJoint104->setName("l_middle3");
HAnimJoint104->setDEF("Joe_l_middle3");
HAnimJoint104->setCenter(new float[3]{0.2026,0.7011,-0.0494});
HAnimJoint104->setSkinCoordIndex(new int[9]{183,184,185,186,187,188,189,190,191});
HAnimJoint104->setSkinCoordWeight(new float[9]{1,1,1,1,1,1,1,1,1}, 9);
HAnimJoint103->addChild(HAnimJoint104);

HAnimJoint102->addChild(HAnimJoint103);

HAnimJoint101->addChild(HAnimJoint102);

HAnimJoint93->addChild(HAnimJoint101);

HAnimJoint* HAnimJoint105 = new HAnimJoint();
HAnimJoint105->setName("l_ring0");
HAnimJoint105->setDEF("Joe_l_ring0");
HAnimJoint105->setCenter(new float[3]{0.1956,0.8019,-0.0794});
HAnimJoint105->setSkinCoordIndex(new int[2]{133,134});
HAnimJoint105->setSkinCoordWeight(new float[2]{1,1}, 2);
HAnimJoint* HAnimJoint106 = new HAnimJoint();
HAnimJoint106->setName("l_ring1");
HAnimJoint106->setDEF("Joe_l_ring1");
HAnimJoint106->setCenter(new float[3]{0.1956,0.7815,-0.0794});
HAnimJoint106->setSkinCoordIndex(new int[4]{158,159,164,165});
HAnimJoint106->setSkinCoordWeight(new float[4]{1,1,0.5,0.5}, 4);
HAnimJoint* HAnimJoint107 = new HAnimJoint();
HAnimJoint107->setName("l_ring2");
HAnimJoint107->setDEF("Joe_l_ring2");
HAnimJoint107->setCenter(new float[3]{0.1973,0.7287,-0.0777});
HAnimJoint107->setSkinCoordIndex(new int[4]{192,193,194,195});
HAnimJoint107->setSkinCoordWeight(new float[4]{1,1,1,1}, 4);
HAnimJoint* HAnimJoint108 = new HAnimJoint();
HAnimJoint108->setName("l_ring3");
HAnimJoint108->setDEF("Joe_l_ring3");
HAnimJoint108->setCenter(new float[3]{0.1983,0.7045,-0.0767});
HAnimJoint108->setSkinCoordIndex(new int[9]{196,197,198,199,200,201,202,203,204});
HAnimJoint108->setSkinCoordWeight(new float[9]{1,1,1,1,1,1,1,1,1}, 9);
HAnimJoint107->addChild(HAnimJoint108);

HAnimJoint106->addChild(HAnimJoint107);

HAnimJoint105->addChild(HAnimJoint106);

HAnimJoint93->addChild(HAnimJoint105);

HAnimJoint* HAnimJoint109 = new HAnimJoint();
HAnimJoint109->setName("l_pinky0");
HAnimJoint109->setDEF("Joe_l_pinky0");
HAnimJoint109->setCenter(new float[3]{0.1925,0.8066,-0.1036});
HAnimJoint109->setSkinCoordIndex(new int[4]{135,136,137,165});
HAnimJoint109->setSkinCoordWeight(new float[4]{1,1,1,0.5}, 4);
HAnimJoint* HAnimJoint110 = new HAnimJoint();
HAnimJoint110->setName("l_pinky1");
HAnimJoint110->setDEF("Joe_l_pinky1");
HAnimJoint110->setCenter(new float[3]{0.1925,0.7866,-0.1036});
HAnimJoint110->setSkinCoordIndex(new int[3]{160,161,162});
HAnimJoint110->setSkinCoordWeight(new float[3]{1,1,1}, 3);
HAnimJoint* HAnimJoint111 = new HAnimJoint();
HAnimJoint111->setName("l_pinky2");
HAnimJoint111->setDEF("Joe_l_pinky2");
HAnimJoint111->setCenter(new float[3]{0.1938,0.7452,-0.1024});
HAnimJoint111->setSkinCoordIndex(new int[4]{205,206,207,208});
HAnimJoint111->setSkinCoordWeight(new float[4]{1,1,1,1}, 4);
HAnimJoint* HAnimJoint112 = new HAnimJoint();
HAnimJoint112->setName("l_pinky3");
HAnimJoint112->setDEF("Joe_l_pinky3");
HAnimJoint112->setCenter(new float[3]{0.1948,0.7277,-0.1017});
HAnimJoint112->setSkinCoordIndex(new int[9]{209,210,211,212,213,214,215,216,217});
HAnimJoint112->setSkinCoordWeight(new float[9]{1,1,1,1,1,1,1,1,1}, 9);
HAnimJoint111->addChild(HAnimJoint112);

HAnimJoint110->addChild(HAnimJoint111);

HAnimJoint109->addChild(HAnimJoint110);

HAnimJoint93->addChild(HAnimJoint109);

HAnimJoint92->addChild(HAnimJoint93);

HAnimJoint91->addChild(HAnimJoint92);

HAnimJoint90->addChild(HAnimJoint91);

HAnimJoint89->addChild(HAnimJoint90);

HAnimJoint72->addChild(HAnimJoint89);

HAnimJoint* HAnimJoint113 = new HAnimJoint();
HAnimJoint113->setName("r_sternoclavicular");
HAnimJoint113->setDEF("Joe_r_sternoclavicular");
HAnimJoint113->setCenter(new float[3]{-0.03,1.46,0});
HAnimJoint113->setSkinCoordIndex(new int[1]{10});
HAnimJoint113->setSkinCoordWeight(new float[1]{1}, 1);
HAnimJoint* HAnimJoint114 = new HAnimJoint();
HAnimJoint114->setName("r_acromioclavicular");
HAnimJoint114->setDEF("Joe_r_acromioclavicular");
HAnimJoint114->setCenter(new float[3]{-0.09,1.41,-0.11});
HAnimJoint114->setSkinCoordIndex(new int[2]{77,29});
HAnimJoint114->setSkinCoordWeight(new float[2]{1,0.9}, 2);
HAnimJoint* HAnimJoint115 = new HAnimJoint();
HAnimJoint115->setName("r_shoulder");
HAnimJoint115->setDEF("Joe_r_shoulder");
HAnimJoint115->setCenter(new float[3]{-0.2,1.44,-0.04});
HAnimJoint115->setSkinCoordIndex(new int[10]{29,30,32,78,218,219,220,221,86,88});
HAnimJoint115->setSkinCoordWeight(new float[10]{0.1,1,1,1,1,1,1,1,0.3,0.2}, 10);
HAnimJoint* HAnimJoint116 = new HAnimJoint();
HAnimJoint116->setName("r_elbow");
HAnimJoint116->setDEF("Joe_r_elbow");
HAnimJoint116->setCenter(new float[3]{-0.2,1.1388,-0.04});
HAnimJoint116->setSkinCoordIndex(new int[12]{33,34,35,225,226,227,228,229,231,232,233,234});
HAnimJoint116->setSkinCoordWeight(new float[12]{1,1,1,1,1,1,1,1,1,1,1,1}, 12);
HAnimJoint* HAnimJoint117 = new HAnimJoint();
HAnimJoint117->setName("r_wrist");
HAnimJoint117->setDEF("Joe_r_wrist");
HAnimJoint117->setCenter(new float[3]{-0.2,0.89,-0.04});
HAnimJoint117->setSkinCoordIndex(new int[8]{235,236,237,238,239,240,241,242});
HAnimJoint117->setSkinCoordWeight(new float[8]{1,1,1,1,1,1,1,1}, 8);
HAnimJoint* HAnimJoint118 = new HAnimJoint();
HAnimJoint118->setName("r_thumb1");
HAnimJoint118->setDEF("Joe_r_thumb1");
HAnimJoint118->setCenter(new float[3]{-0.2,0.85,0});
HAnimJoint118->setSkinCoordIndex(new int[2]{243,244});
HAnimJoint118->setSkinCoordWeight(new float[2]{1,1}, 2);
HAnimJoint* HAnimJoint119 = new HAnimJoint();
HAnimJoint119->setName("r_thumb2");
HAnimJoint119->setDEF("Joe_r_thumb2");
HAnimJoint119->setCenter(new float[3]{-0.2,0.82,0.03});
HAnimJoint119->setSkinCoordIndex(new int[6]{254,255,256,257,258,259});
HAnimJoint119->setSkinCoordWeight(new float[6]{0.5,0.5,0.5,1,1,1}, 6);
HAnimJoint* HAnimJoint120 = new HAnimJoint();
HAnimJoint120->setName("r_thumb3");
HAnimJoint120->setDEF("Joe_r_thumb3");
HAnimJoint120->setCenter(new float[3]{-0.2,0.8,0.05});
HAnimJoint120->setSkinCoordIndex(new int[9]{260,261,262,263,264,265,266,267,268});
HAnimJoint120->setSkinCoordWeight(new float[9]{1,1,1,1,1,1,1,1,1}, 9);
HAnimJoint119->addChild(HAnimJoint120);

HAnimJoint118->addChild(HAnimJoint119);

HAnimJoint117->addChild(HAnimJoint118);

HAnimJoint* HAnimJoint121 = new HAnimJoint();
HAnimJoint121->setName("r_index0");
HAnimJoint121->setDEF("Joe_r_index0");
HAnimJoint121->setCenter(new float[3]{-0.2,0.84,-0.015});
HAnimJoint121->setSkinCoordIndex(new int[2]{245,246});
HAnimJoint121->setSkinCoordWeight(new float[2]{1,1}, 2);
HAnimJoint* HAnimJoint122 = new HAnimJoint();
HAnimJoint122->setName("r_index1");
HAnimJoint122->setDEF("Joe_r_index1");
HAnimJoint122->setCenter(new float[3]{-0.2,0.793,-0.015});
HAnimJoint122->setSkinCoordIndex(new int[7]{254,255,256,269,270,271,279});
HAnimJoint122->setSkinCoordWeight(new float[7]{0.5,0.5,0.5,1,1,1,0.5}, 7);
HAnimJoint* HAnimJoint123 = new HAnimJoint();
HAnimJoint123->setName("r_index2");
HAnimJoint123->setDEF("Joe_r_index2");
HAnimJoint123->setCenter(new float[3]{-0.2,0.745,-0.015});
HAnimJoint123->setSkinCoordIndex(new int[4]{282,283,284,285});
HAnimJoint123->setSkinCoordWeight(new float[4]{1,1,1,1}, 4);
HAnimJoint* HAnimJoint124 = new HAnimJoint();
HAnimJoint124->setName("r_index3");
HAnimJoint124->setDEF("Joe_r_index3");
HAnimJoint124->setCenter(new float[3]{-0.2,0.72,-0.015});
HAnimJoint124->setSkinCoordIndex(new int[9]{286,287,288,289,290,291,292,293,294});
HAnimJoint124->setSkinCoordWeight(new float[9]{1,1,1,1,1,1,1,1,1}, 9);
HAnimJoint123->addChild(HAnimJoint124);

HAnimJoint122->addChild(HAnimJoint123);

HAnimJoint121->addChild(HAnimJoint122);

HAnimJoint117->addChild(HAnimJoint121);

HAnimJoint* HAnimJoint125 = new HAnimJoint();
HAnimJoint125->setName("r_middle0");
HAnimJoint125->setDEF("Joe_r_middle0");
HAnimJoint125->setCenter(new float[3]{-0.2,0.835,-0.04});
HAnimJoint125->setSkinCoordIndex(new int[2]{247,248});
HAnimJoint125->setSkinCoordWeight(new float[2]{1,1}, 2);
HAnimJoint* HAnimJoint126 = new HAnimJoint();
HAnimJoint126->setName("r_middle1");
HAnimJoint126->setDEF("Joe_r_middle1");
HAnimJoint126->setCenter(new float[3]{-0.2,0.788,-0.04});
HAnimJoint126->setSkinCoordIndex(new int[4]{272,273,279,280});
HAnimJoint126->setSkinCoordWeight(new float[4]{1,1,0.5,0.5}, 4);
HAnimJoint* HAnimJoint127 = new HAnimJoint();
HAnimJoint127->setName("r_middle2");
HAnimJoint127->setDEF("Joe_r_middle2");
HAnimJoint127->setCenter(new float[3]{-0.2,0.74,-0.04});
HAnimJoint127->setSkinCoordIndex(new int[4]{295,296,297,298});
HAnimJoint127->setSkinCoordWeight(new float[4]{1,1,1,1}, 4);
HAnimJoint* HAnimJoint128 = new HAnimJoint();
HAnimJoint128->setName("r_middle3");
HAnimJoint128->setDEF("Joe_r_middle3");
HAnimJoint128->setCenter(new float[3]{-0.2,0.7142,-0.04});
HAnimJoint128->setSkinCoordIndex(new int[9]{299,300,301,302,303,304,305,306,307});
HAnimJoint128->setSkinCoordWeight(new float[9]{1,1,1,1,1,1,1,1,1}, 9);
HAnimJoint127->addChild(HAnimJoint128);

HAnimJoint126->addChild(HAnimJoint127);

HAnimJoint125->addChild(HAnimJoint126);

HAnimJoint117->addChild(HAnimJoint125);

HAnimJoint* HAnimJoint129 = new HAnimJoint();
HAnimJoint129->setName("r_ring0");
HAnimJoint129->setDEF("Joe_r_ring0");
HAnimJoint129->setCenter(new float[3]{-0.2,0.835,-0.065});
HAnimJoint129->setSkinCoordIndex(new int[2]{249,250});
HAnimJoint129->setSkinCoordWeight(new float[2]{1,1}, 2);
HAnimJoint* HAnimJoint130 = new HAnimJoint();
HAnimJoint130->setName("r_ring1");
HAnimJoint130->setDEF("Joe_r_ring1");
HAnimJoint130->setCenter(new float[3]{-0.2,0.793,-0.065});
HAnimJoint130->setSkinCoordIndex(new int[4]{274,275,280,281});
HAnimJoint130->setSkinCoordWeight(new float[4]{1,1,0.5,0.5}, 4);
HAnimJoint* HAnimJoint131 = new HAnimJoint();
HAnimJoint131->setName("r_ring2");
HAnimJoint131->setDEF("Joe_r_ring2");
HAnimJoint131->setCenter(new float[3]{-0.2,0.74,-0.065});
HAnimJoint131->setSkinCoordIndex(new int[4]{308,309,310,311});
HAnimJoint131->setSkinCoordWeight(new float[4]{1,1,1,1}, 4);
HAnimJoint* HAnimJoint132 = new HAnimJoint();
HAnimJoint132->setName("r_ring3");
HAnimJoint132->setDEF("Joe_r_ring3");
HAnimJoint132->setCenter(new float[3]{-0.2,0.7177,-0.065});
HAnimJoint132->setSkinCoordIndex(new int[9]{312,313,314,315,316,317,318,319,320});
HAnimJoint132->setSkinCoordWeight(new float[9]{1,1,1,1,1,1,1,1,1}, 9);
HAnimJoint131->addChild(HAnimJoint132);

HAnimJoint130->addChild(HAnimJoint131);

HAnimJoint129->addChild(HAnimJoint130);

HAnimJoint117->addChild(HAnimJoint129);

HAnimJoint* HAnimJoint133 = new HAnimJoint();
HAnimJoint133->setName("r_pinky0");
HAnimJoint133->setDEF("Joe_r_pinky0");
HAnimJoint133->setCenter(new float[3]{-0.2,0.84,-0.085});
HAnimJoint133->setSkinCoordIndex(new int[4]{251,252,253,281});
HAnimJoint133->setSkinCoordWeight(new float[4]{1,1,1,0.5}, 4);
HAnimJoint* HAnimJoint134 = new HAnimJoint();
HAnimJoint134->setName("r_pinky1");
HAnimJoint134->setDEF("Joe_r_pinky1");
HAnimJoint134->setCenter(new float[3]{-0.2,0.79,-0.085});
HAnimJoint134->setSkinCoordIndex(new int[3]{276,277,278});
HAnimJoint134->setSkinCoordWeight(new float[3]{1,1,1}, 3);
HAnimJoint* HAnimJoint135 = new HAnimJoint();
HAnimJoint135->setName("r_pinky2");
HAnimJoint135->setDEF("Joe_r_pinky2");
HAnimJoint135->setCenter(new float[3]{-0.2,0.755,-0.085});
HAnimJoint135->setSkinCoordIndex(new int[4]{321,322,323,324});
HAnimJoint135->setSkinCoordWeight(new float[4]{1,1,1,1}, 4);
HAnimJoint* HAnimJoint136 = new HAnimJoint();
HAnimJoint136->setName("r_pinky3");
HAnimJoint136->setDEF("Joe_r_pinky3");
HAnimJoint136->setCenter(new float[3]{-0.2,0.735,-0.09});
HAnimJoint136->setSkinCoordIndex(new int[9]{325,326,327,328,329,330,331,332,333});
HAnimJoint136->setSkinCoordWeight(new float[9]{1,1,1,1,1,1,1,1,1}, 9);
HAnimJoint135->addChild(HAnimJoint136);

HAnimJoint134->addChild(HAnimJoint135);

HAnimJoint133->addChild(HAnimJoint134);

HAnimJoint117->addChild(HAnimJoint133);

HAnimJoint116->addChild(HAnimJoint117);

HAnimJoint115->addChild(HAnimJoint116);

HAnimJoint114->addChild(HAnimJoint115);

HAnimJoint113->addChild(HAnimJoint114);

HAnimJoint72->addChild(HAnimJoint113);

HAnimJoint71->addChild(HAnimJoint72);

HAnimJoint70->addChild(HAnimJoint71);

HAnimJoint69->addChild(HAnimJoint70);

HAnimJoint68->addChild(HAnimJoint69);

HAnimJoint67->addChild(HAnimJoint68);

HAnimJoint66->addChild(HAnimJoint67);

HAnimJoint65->addChild(HAnimJoint66);

HAnimJoint64->addChild(HAnimJoint65);

HAnimJoint63->addChild(HAnimJoint64);

HAnimJoint62->addChild(HAnimJoint63);

HAnimJoint61->addChild(HAnimJoint62);

HAnimJoint60->addChild(HAnimJoint61);

HAnimJoint59->addChild(HAnimJoint60);

HAnimJoint58->addChild(HAnimJoint59);

HAnimJoint57->addChild(HAnimJoint58);

HAnimJoint56->addChild(HAnimJoint57);

HAnimJoint32->addChild(HAnimJoint56);

HAnimHumanoid31->setSkeleton(HAnimJoint32);

Shape* Shape137 = new Shape();
Shape137->setDEF("Joe_Shape");
Appearance* Appearance138 = new Appearance();
Appearance138->setDEF("Joe_skin_Appearance");
Material* Material139 = new Material();
Material139->setDEF("Joe_skin_Material");
Material139->setDiffuseColor(new float[3]{0.3,0.3,0.6});
Material139->setEmissiveColor(new float[3]{0.3,0.3,0.6});
Appearance138->setMaterial(Material139);

ImageTexture* ImageTexture140 = new ImageTexture();
ImageTexture140->setDEF("JoeSkinImageTexture");
ImageTexture140->setUrl(new String[2]{"JoeBodyTexture29.png","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/JoeBodyTexture29.png"}, 2);
Appearance138->setTexture(ImageTexture140);

TextureTransform* TextureTransform141 = new TextureTransform();
TextureTransform141->setDEF("KickTextureTransform");
Appearance138->setTextureTransform(TextureTransform141);

Shape137->setAppearance(Appearance138);

IndexedFaceSet* IndexedFaceSet142 = new IndexedFaceSet();
IndexedFaceSet142->setDEF("Joe_skin_IndexedFaceSet");
IndexedFaceSet142->setCoordIndex(new int[2780]{0,9,5,-1,0,7,9,-1,0,5,1,-1,1,5,2,-1,1,3,7,-1,2,4,3,-1,0,1,7,-1,1,2,3,-1,5,6,2,-1,7,3,8,-1,6,4,2,-1,3,4,8,-1,9,6,5,-1,9,7,8,-1,4,6,10,-1,4,10,12,-1,4,12,8,-1,10,11,12,-1,9,75,24,-1,9,24,74,-1,9,8,75,-1,9,74,6,-1,10,6,74,-1,12,75,8,-1,74,24,29,-1,24,77,29,-1,10,74,29,-1,77,32,29,-1,32,78,29,-1,78,30,29,-1,30,10,29,-1,41,24,75,-1,41,75,12,-1,41,12,42,-1,41,42,80,-1,41,80,44,-1,41,44,79,-1,41,79,24,-1,81,24,79,-1,81,77,24,-1,81,25,77,-1,81,79,25,-1,25,79,44,-1,25,32,77,-1,25,83,32,-1,25,26,83,-1,25,27,26,-1,25,84,27,-1,25,44,84,-1,11,10,30,-1,11,30,13,-1,11,13,15,-1,11,15,14,-1,11,14,42,-1,11,42,12,-1,15,13,16,-1,15,18,14,-1,15,16,76,-1,15,76,18,-1,76,16,17,-1,76,17,82,-1,76,82,19,-1,76,19,18,-1,22,18,19,-1,22,87,18,-1,22,27,84,-1,22,84,87,-1,87,84,85,-1,85,84,44,-1,85,42,14,-1,87,14,18,-1,87,85,14,-1,20,83,26,-1,20,17,16,-1,20,16,88,-1,20,88,83,-1,88,16,13,-1,88,13,86,-1,88,86,83,-1,86,13,30,-1,86,32,83,-1,23,89,22,-1,89,27,22,-1,89,91,27,-1,91,26,27,-1,91,20,26,-1,21,20,91,-1,21,17,20,-1,21,92,17,-1,82,17,92,-1,82,90,19,-1,23,22,19,-1,23,19,90,-1,82,92,101,-1,82,101,99,-1,82,99,93,-1,82,93,95,-1,82,95,97,-1,82,97,90,-1,23,90,97,-1,23,97,94,-1,23,94,89,-1,89,94,96,-1,89,96,95,-1,89,95,93,-1,89,93,91,-1,91,93,99,-1,91,99,100,-1,91,100,98,-1,21,91,98,-1,21,98,101,-1,21,101,92,-1,85,105,42,-1,85,103,105,-1,85,44,103,-1,103,44,104,-1,80,42,105,-1,80,105,102,-1,80,102,104,-1,80,104,44,-1,105,109,102,-1,102,109,47,-1,47,104,102,-1,104,47,45,-1,104,45,103,-1,103,45,46,-1,103,46,109,-1,103,109,105,-1,109,112,110,-1,109,110,47,-1,47,110,111,-1,47,111,45,-1,45,111,113,-1,113,46,45,-1,46,113,112,-1,112,109,46,-1,112,118,110,-1,110,118,115,-1,110,115,111,-1,111,115,117,-1,111,117,113,-1,113,117,116,-1,113,116,112,-1,112,116,118,-1,115,118,119,-1,119,118,122,-1,118,116,122,-1,122,116,120,-1,116,117,120,-1,120,117,121,-1,117,115,121,-1,115,119,121,-1,119,127,123,-1,119,122,127,-1,122,126,127,-1,122,128,126,-1,122,120,128,-1,120,124,128,-1,120,121,124,-1,121,125,124,-1,121,119,125,-1,119,123,125,-1,127,129,123,-1,127,126,129,-1,129,126,141,-1,141,126,143,-1,126,142,143,-1,126,128,142,-1,128,124,130,-1,142,128,130,-1,124,132,130,-1,124,134,132,-1,125,134,124,-1,125,136,134,-1,125,137,136,-1,125,135,137,-1,125,133,135,-1,125,123,133,-1,123,131,133,-1,123,129,131,-1,131,129,138,-1,129,141,138,-1,138,141,144,-1,141,143,144,-1,143,146,144,-1,142,146,143,-1,142,145,146,-1,139,145,142,-1,130,139,142,-1,139,130,132,-1,139,132,154,-1,132,157,154,-1,132,159,157,-1,132,134,159,-1,134,136,159,-1,136,161,159,-1,136,137,161,-1,137,162,161,-1,160,162,137,-1,135,160,137,-1,133,160,135,-1,133,158,160,-1,131,158,133,-1,156,158,131,-1,153,156,131,-1,131,138,153,-1,138,155,153,-1,140,155,138,-1,138,144,140,-1,144,147,140,-1,140,147,145,-1,140,145,139,-1,139,155,140,-1,154,155,139,-1,146,149,144,-1,146,151,149,-1,145,151,146,-1,150,151,145,-1,145,152,150,-1,147,152,145,-1,147,149,152,-1,147,144,149,-1,148,149,151,-1,148,152,149,-1,148,150,152,-1,148,151,150,-1,160,207,162,-1,160,205,207,-1,165,208,205,-1,160,165,205,-1,158,165,160,-1,161,162,207,-1,161,207,206,-1,165,206,208,-1,206,165,161,-1,161,165,159,-1,207,209,211,-1,205,209,207,-1,205,212,209,-1,205,208,212,-1,206,212,208,-1,206,210,212,-1,206,207,210,-1,207,211,210,-1,209,212,213,-1,212,216,213,-1,212,214,216,-1,210,214,212,-1,210,215,214,-1,210,211,215,-1,209,215,211,-1,209,213,215,-1,217,213,216,-1,217,215,213,-1,217,214,215,-1,217,216,214,-1,158,194,165,-1,192,194,158,-1,164,195,192,-1,158,164,192,-1,156,164,158,-1,159,194,165,-1,159,194,193,-1,159,193,195,-1,159,195,164,-1,159,164,157,-1,157,164,180,-1,192,198,194,-1,192,196,198,-1,192,195,196,-1,195,199,196,-1,196,199,200,-1,199,203,200,-1,193,199,195,-1,193,197,199,-1,193,198,197,-1,193,194,198,-1,199,201,203,-1,197,201,199,-1,197,198,201,-1,198,202,201,-1,196,202,198,-1,200,202,196,-1,204,202,200,-1,204,201,202,-1,204,203,201,-1,204,200,203,-1,156,181,164,-1,156,179,181,-1,156,182,179,-1,156,163,182,-1,163,180,182,-1,157,180,163,-1,164,181,180,-1,179,182,183,-1,182,186,183,-1,182,184,186,-1,180,184,182,-1,180,181,184,-1,181,185,184,-1,179,185,181,-1,183,185,179,-1,183,186,187,-1,186,190,187,-1,184,190,186,-1,184,188,190,-1,184,185,188,-1,185,189,188,-1,185,183,189,-1,183,187,189,-1,191,189,187,-1,191,188,189,-1,191,190,188,-1,191,187,190,-1,153,163,156,-1,153,168,163,-1,153,166,168,-1,153,169,166,-1,155,169,153,-1,155,167,169,-1,154,167,155,-1,154,163,167,-1,154,157,163,-1,163,168,167,-1,166,169,170,-1,169,173,170,-1,169,171,173,-1,169,167,171,-1,167,168,171,-1,168,172,171,-1,168,170,172,-1,170,168,166,-1,170,173,174,-1,173,177,174,-1,173,175,177,-1,173,171,175,-1,171,172,175,-1,172,176,175,-1,172,174,176,-1,170,174,172,-1,178,176,174,-1,178,175,176,-1,178,177,175,-1,178,174,177,-1,86,30,221,-1,86,221,219,-1,86,219,32,-1,32,219,220,-1,78,32,220,-1,78,220,218,-1,78,218,221,-1,78,221,30,-1,221,225,219,-1,219,225,35,-1,35,33,219,-1,33,220,219,-1,33,34,220,-1,220,34,218,-1,221,218,34,-1,34,225,221,-1,225,226,228,-1,225,228,35,-1,35,228,229,-1,35,229,33,-1,33,229,227,-1,33,227,34,-1,34,227,226,-1,34,226,225,-1,226,234,228,-1,228,234,232,-1,232,229,228,-1,232,233,229,-1,229,233,227,-1,227,233,231,-1,227,231,226,-1,226,231,234,-1,231,235,234,-1,235,238,234,-1,234,238,232,-1,238,236,232,-1,232,236,233,-1,236,237,233,-1,233,237,231,-1,231,237,235,-1,235,239,243,-1,235,243,238,-1,238,243,242,-1,238,242,244,-1,238,244,236,-1,236,244,240,-1,236,240,237,-1,237,240,241,-1,237,241,235,-1,235,241,239,-1,243,239,245,-1,243,245,242,-1,245,257,242,-1,257,259,242,-1,242,259,258,-1,242,258,244,-1,244,246,240,-1,258,246,244,-1,240,246,248,-1,240,248,250,-1,241,240,250,-1,241,250,252,-1,241,252,253,-1,241,253,251,-1,241,251,249,-1,241,249,239,-1,239,249,247,-1,239,247,245,-1,247,254,245,-1,245,254,257,-1,254,260,257,-1,257,260,259,-1,259,260,262,-1,258,259,262,-1,258,262,261,-1,255,258,261,-1,246,258,255,-1,255,248,246,-1,255,270,248,-1,248,270,273,-1,248,273,275,-1,248,275,250,-1,250,275,252,-1,252,275,277,-1,252,277,253,-1,253,277,278,-1,276,253,278,-1,251,253,276,-1,249,251,276,-1,249,276,274,-1,247,249,274,-1,272,247,274,-1,269,247,272,-1,247,269,254,-1,254,269,271,-1,256,254,271,-1,254,256,260,-1,260,256,263,-1,256,261,263,-1,256,255,261,-1,255,256,271,-1,270,255,271,-1,262,260,265,-1,262,265,267,-1,261,262,267,-1,266,261,267,-1,261,266,268,-1,263,261,268,-1,263,268,265,-1,263,265,260,-1,264,267,265,-1,264,265,268,-1,264,268,266,-1,264,266,267,-1,276,278,323,-1,276,323,321,-1,281,321,324,-1,276,321,281,-1,274,276,281,-1,277,323,278,-1,277,322,323,-1,281,324,322,-1,322,277,281,-1,277,275,281,-1,323,327,325,-1,321,323,325,-1,321,325,328,-1,321,328,324,-1,322,324,328,-1,322,328,326,-1,322,326,323,-1,323,326,327,-1,325,329,328,-1,328,329,332,-1,328,332,330,-1,326,328,330,-1,326,330,331,-1,326,331,327,-1,325,327,331,-1,325,331,329,-1,333,332,329,-1,333,329,331,-1,333,331,330,-1,333,330,332,-1,274,281,310,-1,308,274,310,-1,280,308,311,-1,274,308,280,-1,272,274,280,-1,275,310,281,-1,275,309,310,-1,275,311,309,-1,275,280,311,-1,275,273,280,-1,273,296,280,-1,308,310,314,-1,308,314,312,-1,308,312,311,-1,311,312,315,-1,312,316,315,-1,315,316,319,-1,309,311,315,-1,309,315,313,-1,309,313,314,-1,309,314,310,-1,315,319,317,-1,313,315,317,-1,313,317,314,-1,314,317,318,-1,312,314,318,-1,316,312,318,-1,320,316,318,-1,320,318,317,-1,320,317,319,-1,320,319,316,-1,272,280,297,-1,272,297,295,-1,272,295,298,-1,272,298,279,-1,279,298,296,-1,273,279,296,-1,280,296,297,-1,295,299,298,-1,298,299,302,-1,298,302,300,-1,296,298,300,-1,296,300,297,-1,297,300,301,-1,295,297,301,-1,299,295,301,-1,299,303,302,-1,302,303,306,-1,300,302,306,-1,300,306,304,-1,300,304,301,-1,301,304,305,-1,301,305,299,-1,299,305,303,-1,307,303,305,-1,307,305,304,-1,307,304,306,-1,307,306,303,-1,269,272,279,-1,269,279,284,-1,269,284,282,-1,269,282,285,-1,271,269,285,-1,271,285,283,-1,270,271,283,-1,270,283,279,-1,270,279,273,-1,279,283,284,-1,282,286,285,-1,285,286,289,-1,285,289,287,-1,285,287,283,-1,283,287,284,-1,284,287,288,-1,284,288,286,-1,286,282,284,-1,286,290,289,-1,289,290,293,-1,289,293,291,-1,289,291,287,-1,287,291,288,-1,288,291,292,-1,288,292,290,-1,286,288,290,-1,294,290,292,-1,294,292,291,-1,294,291,293,-1,294,293,290,-1,97,334,336,-1,97,336,94,-1,94,336,96,-1,336,335,96,-1,96,335,95,-1,95,335,337,-1,95,337,334,-1,95,334,97,-1,334,341,336,-1,336,341,338,-1,336,338,335,-1,335,338,340,-1,335,340,337,-1,337,340,339,-1,337,339,334,-1,334,339,341,-1,341,345,342,-1,341,342,338,-1,338,342,340,-1,340,342,344,-1,340,344,339,-1,339,344,343,-1,339,343,345,-1,339,345,341,-1,345,349,342,-1,342,349,351,-1,342,351,346,-1,342,346,344,-1,71,346,348,-1,71,344,346,-1,71,348,347,-1,71,347,344,-1,344,347,343,-1,343,347,352,-1,343,352,349,-1,343,349,345,-1,349,352,356,-1,349,356,353,-1,349,353,355,-1,349,355,351,-1,354,356,352,-1,354,352,350,-1,354,350,351,-1,354,351,355,-1,353,356,357,-1,353,357,358,-1,353,358,359,-1,353,359,360,-1,353,360,361,-1,353,361,355,-1,354,357,356,-1,350,346,351,-1,348,346,347,-1,350,347,346,-1,350,352,347,-1,354,358,357,-1,354,359,358,-1,354,360,359,-1,354,361,360,-1,354,355,361,-1,101,362,365,-1,101,365,99,-1,99,365,100,-1,100,365,363,-1,100,363,98,-1,98,363,364,-1,98,364,101,-1,101,364,362,-1,362,369,367,-1,362,367,365,-1,365,367,363,-1,363,367,368,-1,363,367,368,-1,363,368,366,-1,363,366,364,-1,364,366,362,-1,362,366,369,-1,369,373,371,-1,369,371,367,-1,367,371,368,-1,368,371,372,-1,368,372,366,-1,366,372,370,-1,366,370,369,-1,369,370,373,-1,373,377,380,-1,373,380,375,-1,373,375,371,-1,371,375,372,-1,372,375,376,-1,372,376,374,-1,372,374,370,-1,370,374,379,-1,373,370,379,-1,373,379,377,-1,377,379,383,-1,377,383,381,-1,377,381,384,-1,377,384,380,-1,381,383,389,-1,381,389,388,-1,381,388,387,-1,381,387,386,-1,381,386,385,-1,381,385,384,-1,376,375,374,-1,378,379,374,-1,378,374,375,-1,378,375,380,-1,382,386,387,-1,382,387,388,-1,382,388,389,-1,382,389,383,-1,382,383,379,-1,382,379,378,-1,382,378,380,-1,382,380,384,-1,382,384,385,-1,382,385,386,-1});
IndexedFaceSet142->setCreaseAngle(3.14);
Coordinate* Coordinate143 = new Coordinate();
Coordinate143->setDEF("Joe_SkinCoord");
Coordinate143->setPoint(new float[1170]{0,1.77,0,0,1.665,0.09,-0.033,1.62,0.087,0.033,1.62,0.087,0,1.55,0.097,-0.077,1.64,-0.01,-0.0527,1.58,0.015,0.077,1.64,-0.01,0.0527,1.58,0.015,0,1.625,-0.0925,-0.03,1.46,0.035,0,1.44,0.03,0.03,1.46,0.035,-0.1135,1.318,0.095,0.1135,1.318,0.095,0,1.25,0.113,-0.087,1.19,0.09,-0.0935,1.03,0.075,0.087,1.19,0.09,0.0935,1.03,0.075,-0.1425,1.065,0.0033,-0.15,0.9,-0.01,0.1425,1.065,0.0033,0.15,0.9,-0.01,0,1.53,-0.084,0.0049,1.1908,-0.1113,-0.0773,1.019,-0.12,0.0773,1.019,-0.12,0.005,1.0915,-0.1091,-0.178,1.4825,-0.0625,-0.17,1.38,0.007,-0.1884,0.8676,-0.036,-0.16,1.38,-0.127,-0.2,1.1388,-0.08,-0.244,1.1388,-0.04,-0.165,1.1388,-0.04,-0.23,1.133,-0.055,-0.1977,0.8169,-0.0177,-0.1941,0.6772,-0.0423,-0.2117,0.8562,-0.0584,-0.1929,0.789,-0.1064,0.175,1.4825,-0.06,0.17,1.38,0.007,0.1901,0.8645,-0.0415,0.16,1.38,-0.125,0.2,1.1388,-0.08,0.165,1.1388,-0.04,0.244,1.1388,-0.04,0.23,1.133,-0.055,0.2009,0.8139,-0.0237,0.2056,0.6743,-0.0482,0.2142,0.8529,-0.0648,0.1929,0.786,-0.1122,-0.1,0.4913,-0.03,-0.17,0.466,0,-0.05,0.466,0,-0.165,0.01,0.12,-0.15,0.07,0,-0.085,0.086,0.0125,-0.09,0.056,0.0125,-0.115,0.02,0.122,-0.115,0.04,-0.055,-0.11,0.011,0.19,0.0993,0.4881,-0.0309,0.17,0.466,0,0.05,0.4867,0,0.165,0.01,0.12,0.15,0.07,0,0.085,0.086,0.0125,0.09,0.056,0.0125,0.115,0.02,0.122,0.115,0.04,-0.055,0.11,0.011,0.19,0,0.875,0,-0.0646,1.5149,-0.038,0.0646,1.5149,-0.038,0,1.07225,0.09,-0.11,1.427,-0.1375,-0.235,1.42,-0.0625,0.11,1.427,-0.1375,0.235,1.42,-0.0625,0,1.41,-0.145,0,0.925,0.08,-0.087,1.19,-0.09,0.087,1.19,-0.09,0.172,1.32,-0.03,-0.172,1.32,-0.03,0.15,1.23,-0.015,-0.15,1.23,-0.015,0.079,0.92,-0.14,0.1,0.9,0.077,-0.079,0.92,-0.14,-0.1,0.9,0.075,0,0.87,0,0.171,0.65,0,0.02,0.65,0,0.1,0.65,-0.08,0.1,0.65,0.07,-0.171,0.65,0,-0.02,0.65,0,-0.1,0.65,-0.08,-0.1,0.65,0.07,0.25,1.27,-0.04,0.17,1.27,-0.04,0.2,1.27,-0.09,0.2,1.27,0.02,0.244,1.1388,-0.04,0.165,1.1388,-0.04,0.2,1.1388,-0.08,0.2,1.1388,-0.013,0.225,1,-0.01,0.225,1,-0.07,0.185,1,-0.01,0.185,1,-0.07,0.2,1.1388,-0.04,0.225,0.92,-0.04,0.175,0.92,-0.04,0.2,0.92,-0.065,0.2,0.92,-0.015,0.225,0.89,-0.04,0.175,0.89,-0.04,0.2,0.89,-0.065,0.2,0.89,-0.015,0.218,0.86,-0.04,0.184,0.86,-0.04,0.2,0.87,-0.07,0.2,0.87,0,0.21,0.85,0,0.1854,0.85,0,0.212,0.84,-0.015,0.183,0.84,-0.015,0.213,0.835,-0.04,0.19,0.835,-0.04,0.211,0.835,-0.065,0.192,0.835,-0.065,0.208,0.84,-0.085,0.19,0.84,-0.085,0.2,0.84,-0.095,0.215,0.82,0,0.193,0.815,0.005,0.198,0.8,0.012,0.21,0.82,0.03,0.19,0.82,0.03,0.2,0.835,0.039,0.212,0.8,0.05,0.188,0.8,0.05,0.2,0.807,0.057,0.2,0.793,0.035,0.2,0.774,0.076,0.212,0.78,0.07,0.188,0.78,0.07,0.2,0.785,0.075,0.2,0.77,0.062,0.215,0.793,-0.015,0.187,0.793,-0.015,0.2,0.793,-0.005,0.215,0.788,-0.04,0.187,0.788,-0.04,0.215,0.793,-0.065,0.187,0.793,-0.065,0.21,0.79,-0.085,0.19,0.79,-0.085,0.2,0.79,-0.095,0.19,0.77,-0.0275,0.19,0.77,-0.0525,0.19,0.78,-0.0775,0.212,0.745,-0.015,0.188,0.745,-0.02,0.2,0.745,-0.0255,0.2,0.745,-0.0045,0.211,0.72,-0.015,0.189,0.72,-0.015,0.2,0.72,-0.0252,0.2,0.72,-0.0048,0.21,0.695,-0.015,0.19,0.695,-0.015,0.2,0.695,-0.025,0.2,0.695,-0.005,0.2,0.685,-0.015,0.215,0.74,-0.04,0.185,0.74,-0.04,0.2,0.74,-0.055,0.2,0.74,-0.025,0.21,0.7142,-0.04,0.19,0.7142,-0.04,0.2,0.7142,-0.053,0.2,0.7142,-0.027,0.21,0.68,-0.04,0.19,0.68,-0.04,0.2,0.68,-0.05,0.2,0.68,-0.03,0.2,0.67,-0.04,0.212,0.74,-0.065,0.188,0.74,-0.065,0.2,0.74,-0.0756,0.2,0.74,-0.0542,0.21,0.7177,-0.065,0.19,0.7177,-0.065,0.2,0.7177,-0.0751,0.2,0.7177,-0.0549,0.21,0.695,-0.065,0.19,0.695,-0.065,0.2,0.695,-0.075,0.2,0.695,-0.055,0.2,0.685,-0.065,0.211,0.755,-0.085,0.189,0.755,-0.085,0.2,0.755,-0.0952,0.2,0.755,-0.0748,0.21,0.735,-0.085,0.19,0.735,-0.085,0.2,0.735,-0.0951,0.2,0.735,-0.0749,0.21,0.72,-0.085,0.19,0.72,-0.085,0.2,0.72,-0.095,0.2,0.72,-0.075,0.2,0.71,-0.085,-0.23,1.23,-0.04,-0.16,1.23,-0.04,-0.2,1.235,-0.105,-0.2,1.255,0.02,-0.244,1.1388,-0.04,-0.165,1.1388,-0.04,-0.2,1.1388,-0.08,-0.2,1.1388,0.013,-0.225,1,-0.01,-0.225,1,-0.07,-0.185,1,-0.01,-0.185,1,-0.07,-0.2,1.1388,-0.04,-0.225,0.92,-0.04,-0.175,0.92,-0.04,-0.2,0.92,-0.065,-0.2,0.92,-0.015,-0.225,0.89,-0.04,-0.175,0.89,-0.04,-0.2,0.89,-0.065,-0.2,0.89,-0.015,-0.218,0.86,-0.04,-0.184,0.86,-0.04,-0.2,0.87,-0.07,-0.2,0.87,0,-0.21,0.85,0,-0.1854,0.85,0,-0.212,0.84,-0.015,-0.183,0.84,-0.015,-0.213,0.835,-0.04,-0.19,0.835,-0.04,-0.211,0.835,-0.065,-0.192,0.835,-0.065,-0.208,0.84,-0.085,-0.19,0.84,-0.085,-0.2,0.84,-0.095,-0.215,0.82,0,-0.193,0.815,0.005,-0.198,0.8,0.012,-0.21,0.82,0.03,-0.19,0.82,0.03,-0.2,0.835,0.039,-0.212,0.8,0.05,-0.188,0.8,0.05,-0.2,0.807,0.057,-0.2,0.793,0.035,-0.2,0.774,0.076,-0.212,0.78,0.07,-0.188,0.78,0.07,-0.2,0.785,0.075,-0.2,0.77,0.062,-0.215,0.793,-0.015,-0.187,0.793,-0.015,-0.2,0.793,-0.005,-0.215,0.788,-0.04,-0.187,0.788,-0.04,-0.215,0.793,-0.065,-0.187,0.793,-0.065,-0.21,0.79,-0.085,-0.19,0.79,-0.085,-0.2,0.79,-0.095,-0.19,0.77,-0.0275,-0.19,0.77,-0.0525,-0.19,0.78,-0.0775,-0.212,0.745,-0.015,-0.188,0.745,-0.02,-0.2,0.745,-0.0255,-0.2,0.745,-0.0045,-0.211,0.72,-0.015,-0.189,0.72,-0.015,-0.2,0.72,-0.0252,-0.2,0.72,-0.0048,-0.21,0.695,-0.015,-0.19,0.695,-0.015,-0.2,0.695,-0.025,-0.2,0.695,-0.005,-0.2,0.685,-0.015,-0.215,0.74,-0.04,-0.185,0.74,-0.04,-0.2,0.74,-0.055,-0.2,0.74,-0.025,-0.21,0.7142,-0.04,-0.19,0.7142,-0.04,-0.2,0.7142,-0.053,-0.2,0.7142,-0.027,-0.21,0.68,-0.04,-0.19,0.68,-0.04,-0.2,0.68,-0.05,-0.2,0.68,-0.03,-0.2,0.67,-0.04,-0.212,0.74,-0.065,-0.188,0.74,-0.065,-0.2,0.74,-0.0756,-0.2,0.74,-0.0542,-0.21,0.7177,-0.065,-0.19,0.7177,-0.065,-0.2,0.7177,-0.0751,-0.2,0.7177,-0.0549,-0.21,0.695,-0.065,-0.19,0.695,-0.065,-0.2,0.695,-0.075,-0.2,0.695,-0.055,-0.2,0.685,-0.065,-0.211,0.755,-0.085,-0.189,0.755,-0.085,-0.2,0.755,-0.0952,-0.2,0.755,-0.0748,-0.21,0.735,-0.085,-0.19,0.735,-0.085,-0.2,0.735,-0.0951,-0.2,0.735,-0.0749,-0.21,0.72,-0.085,-0.19,0.72,-0.085,-0.2,0.72,-0.095,-0.2,0.72,-0.075,-0.2,0.71,-0.085,0.115,0.466,0.06,0.115,0.466,-0.055,0.15,0.466,0,0.05,0.466,0,0.17,0.3,0,0.06,0.3,0,0.1,0.3,-0.05,0.1,0.3,0.05,0.15,0.07,0,0.085,0.086,0.0125,0.115,0.069,-0.045,0.117,0.0975,0.0615,0.1375,0.006,-0.03,0.095,0.006,-0.03,0.115,0.015,-0.045,0.115,0.06,0.1,0.115,0,0.07,0.165,0,0.07,0.095,0,0.07,0.115,0.04,0.13,0.125,0,0.12,0.165,0,0.12,0.087,0,0.122,0.09,0.012,0.188,0.11,0.011,0.19,0.128,0.011,0.185,0.142,0.011,0.178,0.154,0.01,0.168,-0.115,0.466,0.06,-0.115,0.466,-0.055,-0.17,0.466,0,-0.05,0.466,0,-0.17,0.3,0,-0.06,0.3,0,-0.1,0.3,-0.05,-0.1,0.3,0.05,-0.15,0.07,0,-0.085,0.086,0.0125,-0.115,0.069,-0.045,-0.117,0.0975,0.0615,-0.1375,0.006,-0.03,-0.095,0.006,-0.03,-0.095,0.006,-0.03,-0.115,0.06,0.1,-0.115,0,0.07,-0.165,0,0.07,-0.095,0,0.07,-0.115,0.04,0.13,-0.125,0,0.12,-0.165,0,0.12,-0.087,0,0.122,-0.09,0.012,0.188,-0.11,0.011,0.19,-0.128,0.011,0.185,-0.142,0.011,0.178,-0.154,0.01,0.168});
IndexedFaceSet142->setCoord(Coordinate143);

TextureCoordinate* TextureCoordinate144 = new TextureCoordinate();
TextureCoordinate144->setPoint(new float[780]{0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5});
IndexedFaceSet142->setTexCoord(TextureCoordinate144);

Shape137->setGeometry(IndexedFaceSet142);

HAnimHumanoid31->setSkin(Shape137);

Coordinate* Coordinate145 = new Coordinate();
Coordinate145->setUSE("Joe_SkinCoord");
HAnimHumanoid31->setSkinCoord(Coordinate145);

HAnimJoint* HAnimJoint146 = new HAnimJoint();
HAnimJoint146->setUSE("Joe_HumanoidRoot");
HAnimHumanoid31->addJoints(HAnimJoint146);

HAnimJoint* HAnimJoint147 = new HAnimJoint();
HAnimJoint147->setUSE("Joe_sacroiliac");
HAnimHumanoid31->addJoints(HAnimJoint147);

HAnimJoint* HAnimJoint148 = new HAnimJoint();
HAnimJoint148->setUSE("Joe_vl5");
HAnimHumanoid31->addJoints(HAnimJoint148);

HAnimJoint* HAnimJoint149 = new HAnimJoint();
HAnimJoint149->setUSE("Joe_vl4");
HAnimHumanoid31->addJoints(HAnimJoint149);

HAnimJoint* HAnimJoint150 = new HAnimJoint();
HAnimJoint150->setUSE("Joe_vl3");
HAnimHumanoid31->addJoints(HAnimJoint150);

HAnimJoint* HAnimJoint151 = new HAnimJoint();
HAnimJoint151->setUSE("Joe_vl2");
HAnimHumanoid31->addJoints(HAnimJoint151);

HAnimJoint* HAnimJoint152 = new HAnimJoint();
HAnimJoint152->setUSE("Joe_vl1");
HAnimHumanoid31->addJoints(HAnimJoint152);

HAnimJoint* HAnimJoint153 = new HAnimJoint();
HAnimJoint153->setUSE("Joe_vt12");
HAnimHumanoid31->addJoints(HAnimJoint153);

HAnimJoint* HAnimJoint154 = new HAnimJoint();
HAnimJoint154->setUSE("Joe_vt11");
HAnimHumanoid31->addJoints(HAnimJoint154);

HAnimJoint* HAnimJoint155 = new HAnimJoint();
HAnimJoint155->setUSE("Joe_vt10");
HAnimHumanoid31->addJoints(HAnimJoint155);

HAnimJoint* HAnimJoint156 = new HAnimJoint();
HAnimJoint156->setUSE("Joe_vt9");
HAnimHumanoid31->addJoints(HAnimJoint156);

HAnimJoint* HAnimJoint157 = new HAnimJoint();
HAnimJoint157->setUSE("Joe_vt8");
HAnimHumanoid31->addJoints(HAnimJoint157);

HAnimJoint* HAnimJoint158 = new HAnimJoint();
HAnimJoint158->setUSE("Joe_vt7");
HAnimHumanoid31->addJoints(HAnimJoint158);

HAnimJoint* HAnimJoint159 = new HAnimJoint();
HAnimJoint159->setUSE("Joe_vt6");
HAnimHumanoid31->addJoints(HAnimJoint159);

HAnimJoint* HAnimJoint160 = new HAnimJoint();
HAnimJoint160->setUSE("Joe_vt5");
HAnimHumanoid31->addJoints(HAnimJoint160);

HAnimJoint* HAnimJoint161 = new HAnimJoint();
HAnimJoint161->setUSE("Joe_vt4");
HAnimHumanoid31->addJoints(HAnimJoint161);

HAnimJoint* HAnimJoint162 = new HAnimJoint();
HAnimJoint162->setUSE("Joe_vt3");
HAnimHumanoid31->addJoints(HAnimJoint162);

HAnimJoint* HAnimJoint163 = new HAnimJoint();
HAnimJoint163->setUSE("Joe_vt2");
HAnimHumanoid31->addJoints(HAnimJoint163);

HAnimJoint* HAnimJoint164 = new HAnimJoint();
HAnimJoint164->setUSE("Joe_vt1");
HAnimHumanoid31->addJoints(HAnimJoint164);

HAnimJoint* HAnimJoint165 = new HAnimJoint();
HAnimJoint165->setUSE("Joe_vc7");
HAnimHumanoid31->addJoints(HAnimJoint165);

HAnimJoint* HAnimJoint166 = new HAnimJoint();
HAnimJoint166->setUSE("Joe_vc6");
HAnimHumanoid31->addJoints(HAnimJoint166);

HAnimJoint* HAnimJoint167 = new HAnimJoint();
HAnimJoint167->setUSE("Joe_vc5");
HAnimHumanoid31->addJoints(HAnimJoint167);

HAnimJoint* HAnimJoint168 = new HAnimJoint();
HAnimJoint168->setUSE("Joe_vc4");
HAnimHumanoid31->addJoints(HAnimJoint168);

HAnimJoint* HAnimJoint169 = new HAnimJoint();
HAnimJoint169->setUSE("Joe_vc3");
HAnimHumanoid31->addJoints(HAnimJoint169);

HAnimJoint* HAnimJoint170 = new HAnimJoint();
HAnimJoint170->setUSE("Joe_vc2");
HAnimHumanoid31->addJoints(HAnimJoint170);

HAnimJoint* HAnimJoint171 = new HAnimJoint();
HAnimJoint171->setUSE("Joe_vc1");
HAnimHumanoid31->addJoints(HAnimJoint171);

HAnimJoint* HAnimJoint172 = new HAnimJoint();
HAnimJoint172->setUSE("Joe_skullbase");
HAnimHumanoid31->addJoints(HAnimJoint172);

HAnimJoint* HAnimJoint173 = new HAnimJoint();
HAnimJoint173->setUSE("Joe_temporomandibular");
HAnimHumanoid31->addJoints(HAnimJoint173);

HAnimJoint* HAnimJoint174 = new HAnimJoint();
HAnimJoint174->setUSE("Joe_l_acromioclavicular");
HAnimHumanoid31->addJoints(HAnimJoint174);

HAnimJoint* HAnimJoint175 = new HAnimJoint();
HAnimJoint175->setUSE("Joe_r_acromioclavicular");
HAnimHumanoid31->addJoints(HAnimJoint175);

HAnimJoint* HAnimJoint176 = new HAnimJoint();
HAnimJoint176->setUSE("Joe_l_ankle");
HAnimHumanoid31->addJoints(HAnimJoint176);

HAnimJoint* HAnimJoint177 = new HAnimJoint();
HAnimJoint177->setUSE("Joe_r_ankle");
HAnimHumanoid31->addJoints(HAnimJoint177);

HAnimJoint* HAnimJoint178 = new HAnimJoint();
HAnimJoint178->setUSE("Joe_l_elbow");
HAnimHumanoid31->addJoints(HAnimJoint178);

HAnimJoint* HAnimJoint179 = new HAnimJoint();
HAnimJoint179->setUSE("Joe_r_elbow");
HAnimHumanoid31->addJoints(HAnimJoint179);

HAnimJoint* HAnimJoint180 = new HAnimJoint();
HAnimJoint180->setUSE("Joe_l_eyeball_joint");
HAnimHumanoid31->addJoints(HAnimJoint180);

HAnimJoint* HAnimJoint181 = new HAnimJoint();
HAnimJoint181->setUSE("Joe_r_eyeball_joint");
HAnimHumanoid31->addJoints(HAnimJoint181);

HAnimJoint* HAnimJoint182 = new HAnimJoint();
HAnimJoint182->setUSE("Joe_l_eyebrow_joint");
HAnimHumanoid31->addJoints(HAnimJoint182);

HAnimJoint* HAnimJoint183 = new HAnimJoint();
HAnimJoint183->setUSE("Joe_r_eyebrow_joint");
HAnimHumanoid31->addJoints(HAnimJoint183);

HAnimJoint* HAnimJoint184 = new HAnimJoint();
HAnimJoint184->setUSE("Joe_l_eyelid_joint");
HAnimHumanoid31->addJoints(HAnimJoint184);

HAnimJoint* HAnimJoint185 = new HAnimJoint();
HAnimJoint185->setUSE("Joe_r_eyelid_joint");
HAnimHumanoid31->addJoints(HAnimJoint185);

HAnimJoint* HAnimJoint186 = new HAnimJoint();
HAnimJoint186->setUSE("Joe_l_hip");
HAnimHumanoid31->addJoints(HAnimJoint186);

HAnimJoint* HAnimJoint187 = new HAnimJoint();
HAnimJoint187->setUSE("Joe_r_hip");
HAnimHumanoid31->addJoints(HAnimJoint187);

HAnimJoint* HAnimJoint188 = new HAnimJoint();
HAnimJoint188->setUSE("Joe_l_index0");
HAnimHumanoid31->addJoints(HAnimJoint188);

HAnimJoint* HAnimJoint189 = new HAnimJoint();
HAnimJoint189->setUSE("Joe_r_index0");
HAnimHumanoid31->addJoints(HAnimJoint189);

HAnimJoint* HAnimJoint190 = new HAnimJoint();
HAnimJoint190->setUSE("Joe_l_index1");
HAnimHumanoid31->addJoints(HAnimJoint190);

HAnimJoint* HAnimJoint191 = new HAnimJoint();
HAnimJoint191->setUSE("Joe_r_index1");
HAnimHumanoid31->addJoints(HAnimJoint191);

HAnimJoint* HAnimJoint192 = new HAnimJoint();
HAnimJoint192->setUSE("Joe_l_index2");
HAnimHumanoid31->addJoints(HAnimJoint192);

HAnimJoint* HAnimJoint193 = new HAnimJoint();
HAnimJoint193->setUSE("Joe_r_index2");
HAnimHumanoid31->addJoints(HAnimJoint193);

HAnimJoint* HAnimJoint194 = new HAnimJoint();
HAnimJoint194->setUSE("Joe_l_index3");
HAnimHumanoid31->addJoints(HAnimJoint194);

HAnimJoint* HAnimJoint195 = new HAnimJoint();
HAnimJoint195->setUSE("Joe_r_index3");
HAnimHumanoid31->addJoints(HAnimJoint195);

HAnimJoint* HAnimJoint196 = new HAnimJoint();
HAnimJoint196->setUSE("Joe_l_knee");
HAnimHumanoid31->addJoints(HAnimJoint196);

HAnimJoint* HAnimJoint197 = new HAnimJoint();
HAnimJoint197->setUSE("Joe_r_knee");
HAnimHumanoid31->addJoints(HAnimJoint197);

HAnimJoint* HAnimJoint198 = new HAnimJoint();
HAnimJoint198->setUSE("Joe_l_metatarsal");
HAnimHumanoid31->addJoints(HAnimJoint198);

HAnimJoint* HAnimJoint199 = new HAnimJoint();
HAnimJoint199->setUSE("Joe_r_metatarsal");
HAnimHumanoid31->addJoints(HAnimJoint199);

HAnimJoint* HAnimJoint200 = new HAnimJoint();
HAnimJoint200->setUSE("Joe_l_middle0");
HAnimHumanoid31->addJoints(HAnimJoint200);

HAnimJoint* HAnimJoint201 = new HAnimJoint();
HAnimJoint201->setUSE("Joe_r_middle0");
HAnimHumanoid31->addJoints(HAnimJoint201);

HAnimJoint* HAnimJoint202 = new HAnimJoint();
HAnimJoint202->setUSE("Joe_l_middle1");
HAnimHumanoid31->addJoints(HAnimJoint202);

HAnimJoint* HAnimJoint203 = new HAnimJoint();
HAnimJoint203->setUSE("Joe_r_middle1");
HAnimHumanoid31->addJoints(HAnimJoint203);

HAnimJoint* HAnimJoint204 = new HAnimJoint();
HAnimJoint204->setUSE("Joe_l_middle2");
HAnimHumanoid31->addJoints(HAnimJoint204);

HAnimJoint* HAnimJoint205 = new HAnimJoint();
HAnimJoint205->setUSE("Joe_r_middle2");
HAnimHumanoid31->addJoints(HAnimJoint205);

HAnimJoint* HAnimJoint206 = new HAnimJoint();
HAnimJoint206->setUSE("Joe_l_middle3");
HAnimHumanoid31->addJoints(HAnimJoint206);

HAnimJoint* HAnimJoint207 = new HAnimJoint();
HAnimJoint207->setUSE("Joe_r_middle3");
HAnimHumanoid31->addJoints(HAnimJoint207);

HAnimJoint* HAnimJoint208 = new HAnimJoint();
HAnimJoint208->setUSE("Joe_l_midtarsal");
HAnimHumanoid31->addJoints(HAnimJoint208);

HAnimJoint* HAnimJoint209 = new HAnimJoint();
HAnimJoint209->setUSE("Joe_r_midtarsal");
HAnimHumanoid31->addJoints(HAnimJoint209);

HAnimJoint* HAnimJoint210 = new HAnimJoint();
HAnimJoint210->setUSE("Joe_l_pinky0");
HAnimHumanoid31->addJoints(HAnimJoint210);

HAnimJoint* HAnimJoint211 = new HAnimJoint();
HAnimJoint211->setUSE("Joe_r_pinky0");
HAnimHumanoid31->addJoints(HAnimJoint211);

HAnimJoint* HAnimJoint212 = new HAnimJoint();
HAnimJoint212->setUSE("Joe_l_pinky1");
HAnimHumanoid31->addJoints(HAnimJoint212);

HAnimJoint* HAnimJoint213 = new HAnimJoint();
HAnimJoint213->setUSE("Joe_r_pinky1");
HAnimHumanoid31->addJoints(HAnimJoint213);

HAnimJoint* HAnimJoint214 = new HAnimJoint();
HAnimJoint214->setUSE("Joe_l_pinky2");
HAnimHumanoid31->addJoints(HAnimJoint214);

HAnimJoint* HAnimJoint215 = new HAnimJoint();
HAnimJoint215->setUSE("Joe_r_pinky2");
HAnimHumanoid31->addJoints(HAnimJoint215);

HAnimJoint* HAnimJoint216 = new HAnimJoint();
HAnimJoint216->setUSE("Joe_l_pinky3");
HAnimHumanoid31->addJoints(HAnimJoint216);

HAnimJoint* HAnimJoint217 = new HAnimJoint();
HAnimJoint217->setUSE("Joe_r_pinky3");
HAnimHumanoid31->addJoints(HAnimJoint217);

HAnimJoint* HAnimJoint218 = new HAnimJoint();
HAnimJoint218->setUSE("Joe_l_ring0");
HAnimHumanoid31->addJoints(HAnimJoint218);

HAnimJoint* HAnimJoint219 = new HAnimJoint();
HAnimJoint219->setUSE("Joe_r_ring0");
HAnimHumanoid31->addJoints(HAnimJoint219);

HAnimJoint* HAnimJoint220 = new HAnimJoint();
HAnimJoint220->setUSE("Joe_l_ring1");
HAnimHumanoid31->addJoints(HAnimJoint220);

HAnimJoint* HAnimJoint221 = new HAnimJoint();
HAnimJoint221->setUSE("Joe_r_ring1");
HAnimHumanoid31->addJoints(HAnimJoint221);

HAnimJoint* HAnimJoint222 = new HAnimJoint();
HAnimJoint222->setUSE("Joe_l_ring2");
HAnimHumanoid31->addJoints(HAnimJoint222);

HAnimJoint* HAnimJoint223 = new HAnimJoint();
HAnimJoint223->setUSE("Joe_r_ring2");
HAnimHumanoid31->addJoints(HAnimJoint223);

HAnimJoint* HAnimJoint224 = new HAnimJoint();
HAnimJoint224->setUSE("Joe_l_ring3");
HAnimHumanoid31->addJoints(HAnimJoint224);

HAnimJoint* HAnimJoint225 = new HAnimJoint();
HAnimJoint225->setUSE("Joe_r_ring3");
HAnimHumanoid31->addJoints(HAnimJoint225);

HAnimJoint* HAnimJoint226 = new HAnimJoint();
HAnimJoint226->setUSE("Joe_l_shoulder");
HAnimHumanoid31->addJoints(HAnimJoint226);

HAnimJoint* HAnimJoint227 = new HAnimJoint();
HAnimJoint227->setUSE("Joe_r_shoulder");
HAnimHumanoid31->addJoints(HAnimJoint227);

HAnimJoint* HAnimJoint228 = new HAnimJoint();
HAnimJoint228->setUSE("Joe_l_sternoclavicular");
HAnimHumanoid31->addJoints(HAnimJoint228);

HAnimJoint* HAnimJoint229 = new HAnimJoint();
HAnimJoint229->setUSE("Joe_r_sternoclavicular");
HAnimHumanoid31->addJoints(HAnimJoint229);

HAnimJoint* HAnimJoint230 = new HAnimJoint();
HAnimJoint230->setUSE("Joe_l_subtalar");
HAnimHumanoid31->addJoints(HAnimJoint230);

HAnimJoint* HAnimJoint231 = new HAnimJoint();
HAnimJoint231->setUSE("Joe_r_subtalar");
HAnimHumanoid31->addJoints(HAnimJoint231);

HAnimJoint* HAnimJoint232 = new HAnimJoint();
HAnimJoint232->setUSE("Joe_l_thumb1");
HAnimHumanoid31->addJoints(HAnimJoint232);

HAnimJoint* HAnimJoint233 = new HAnimJoint();
HAnimJoint233->setUSE("Joe_r_thumb1");
HAnimHumanoid31->addJoints(HAnimJoint233);

HAnimJoint* HAnimJoint234 = new HAnimJoint();
HAnimJoint234->setUSE("Joe_l_thumb2");
HAnimHumanoid31->addJoints(HAnimJoint234);

HAnimJoint* HAnimJoint235 = new HAnimJoint();
HAnimJoint235->setUSE("Joe_r_thumb2");
HAnimHumanoid31->addJoints(HAnimJoint235);

HAnimJoint* HAnimJoint236 = new HAnimJoint();
HAnimJoint236->setUSE("Joe_l_thumb3");
HAnimHumanoid31->addJoints(HAnimJoint236);

HAnimJoint* HAnimJoint237 = new HAnimJoint();
HAnimJoint237->setUSE("Joe_r_thumb3");
HAnimHumanoid31->addJoints(HAnimJoint237);

HAnimJoint* HAnimJoint238 = new HAnimJoint();
HAnimJoint238->setUSE("Joe_l_wrist");
HAnimHumanoid31->addJoints(HAnimJoint238);

HAnimJoint* HAnimJoint239 = new HAnimJoint();
HAnimJoint239->setUSE("Joe_r_wrist");
HAnimHumanoid31->addJoints(HAnimJoint239);

HAnimSegment* HAnimSegment240 = new HAnimSegment();
HAnimSegment240->setUSE("Joe_sacrum");
HAnimHumanoid31->setSegments(HAnimSegment240);

HAnimSite* HAnimSite241 = new HAnimSite();
HAnimSite241->setUSE("Joe_RootFront_view");
HAnimHumanoid31->setSites(HAnimSite241);

Group30->addChild(HAnimHumanoid31);

Scene19->addChild(Group30);

Group* Group242 = new Group();
TimeSensor* TimeSensor243 = new TimeSensor();
TimeSensor243->setDEF("KickTimer");
TimeSensor243->setCycleInterval(3.73);
TimeSensor243->setLoop(True);
Group242->addChild(TimeSensor243);

//Interpolators
OrientationInterpolator* OrientationInterpolator244 = new OrientationInterpolator();
OrientationInterpolator244->setDEF("HumanoidRoot_RotationInterpolator");
OrientationInterpolator244->setKey(new float[5]{0,0.1,0.4,0.6,1}, 5);
OrientationInterpolator244->setKeyValue(new float[20]{1,0,0,0.5,1,0,0,0.5,-1,0,0,0.1,-1,0,0,0.5,-1,0,0,0.5});
Group242->addChild(OrientationInterpolator244);

PositionInterpolator* PositionInterpolator245 = new PositionInterpolator();
PositionInterpolator245->setDEF("HumanoidRoot_TranslationInterpolator");
PositionInterpolator245->setKey(new float[4]{0,0.2,0.6,1}, 4);
PositionInterpolator245->setKeyValue(new float[12]{1,0.3,-1,0.4,-0.04,-0.4,-0.18,0.1,0,-0.2,0.15,0.15});
Group242->addChild(PositionInterpolator245);

OrientationInterpolator* OrientationInterpolator246 = new OrientationInterpolator();
OrientationInterpolator246->setDEF("sacroiliac_RotationInterpolator");
OrientationInterpolator246->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator246->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group242->addChild(OrientationInterpolator246);

OrientationInterpolator* OrientationInterpolator247 = new OrientationInterpolator();
OrientationInterpolator247->setDEF("l_hip_RotationInterpolator");
OrientationInterpolator247->setKey(new float[5]{0,0.1,0.3,0.45,1}, 5);
OrientationInterpolator247->setKeyValue(new float[20]{-1,0,0,1.5,-1,0,0,1,0,0,1,0,1,0,0,0.5,1,0,0,1});
Group242->addChild(OrientationInterpolator247);

OrientationInterpolator* OrientationInterpolator248 = new OrientationInterpolator();
OrientationInterpolator248->setDEF("l_knee_RotationInterpolator");
OrientationInterpolator248->setKey(new float[5]{0,0.2,0.35,0.5,1}, 5);
OrientationInterpolator248->setKeyValue(new float[20]{1,0,0,1,0,0,1,0,0,0,1,0.2,1,0,1,0.5,1,0,0,1.4});
Group242->addChild(OrientationInterpolator248);

OrientationInterpolator* OrientationInterpolator249 = new OrientationInterpolator();
OrientationInterpolator249->setDEF("l_ankle_RotationInterpolator");
OrientationInterpolator249->setKey(new float[3]{0,0.25,1}, 3);
OrientationInterpolator249->setKeyValue(new float[12]{-1,0,0,1,0,0,1,0,1,0,0,1});
Group242->addChild(OrientationInterpolator249);

OrientationInterpolator* OrientationInterpolator250 = new OrientationInterpolator();
OrientationInterpolator250->setDEF("l_subtalar_RotationInterpolator");
OrientationInterpolator250->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator250->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group242->addChild(OrientationInterpolator250);

OrientationInterpolator* OrientationInterpolator251 = new OrientationInterpolator();
OrientationInterpolator251->setDEF("l_midtarsal_RotationInterpolator");
OrientationInterpolator251->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator251->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group242->addChild(OrientationInterpolator251);

OrientationInterpolator* OrientationInterpolator252 = new OrientationInterpolator();
OrientationInterpolator252->setDEF("l_metatarsal_RotationInterpolator");
OrientationInterpolator252->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator252->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group242->addChild(OrientationInterpolator252);

OrientationInterpolator* OrientationInterpolator253 = new OrientationInterpolator();
OrientationInterpolator253->setDEF("r_hip_RotationInterpolator");
OrientationInterpolator253->setKey(new float[5]{0,0.25,0.5,0.75,1}, 5);
OrientationInterpolator253->setKeyValue(new float[20]{1,0,0,1,1,0,0,1,-1,0,0,1,-1,0,0,1,-1,0,0,1});
Group242->addChild(OrientationInterpolator253);

OrientationInterpolator* OrientationInterpolator254 = new OrientationInterpolator();
OrientationInterpolator254->setDEF("r_knee_RotationInterpolator");
OrientationInterpolator254->setKey(new float[5]{0,0.25,0.5,0.75,1}, 5);
OrientationInterpolator254->setKeyValue(new float[20]{1,0,0,0.1,0,0,1,0,1,0,0,1,1,0,0,1,1,0,0,1.5});
Group242->addChild(OrientationInterpolator254);

OrientationInterpolator* OrientationInterpolator255 = new OrientationInterpolator();
OrientationInterpolator255->setDEF("r_ankle_RotationInterpolator");
OrientationInterpolator255->setKey(new float[5]{0,0.25,0.5,0.75,1}, 5);
OrientationInterpolator255->setKeyValue(new float[20]{-1,0,0,1,0,0,1,0,1,0,0,1,1,0,0,1,1,0,0,0.5});
Group242->addChild(OrientationInterpolator255);

OrientationInterpolator* OrientationInterpolator256 = new OrientationInterpolator();
OrientationInterpolator256->setDEF("r_subtalar_RotationInterpolator");
OrientationInterpolator256->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator256->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group242->addChild(OrientationInterpolator256);

OrientationInterpolator* OrientationInterpolator257 = new OrientationInterpolator();
OrientationInterpolator257->setDEF("r_midtarsal_RotationInterpolator");
OrientationInterpolator257->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator257->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group242->addChild(OrientationInterpolator257);

OrientationInterpolator* OrientationInterpolator258 = new OrientationInterpolator();
OrientationInterpolator258->setDEF("r_metatarsal_RotationInterpolator");
OrientationInterpolator258->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator258->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group242->addChild(OrientationInterpolator258);

OrientationInterpolator* OrientationInterpolator259 = new OrientationInterpolator();
OrientationInterpolator259->setDEF("vl5_RotationInterpolator");
OrientationInterpolator259->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator259->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group242->addChild(OrientationInterpolator259);

OrientationInterpolator* OrientationInterpolator260 = new OrientationInterpolator();
OrientationInterpolator260->setDEF("vl4_RotationInterpolator");
OrientationInterpolator260->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator260->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group242->addChild(OrientationInterpolator260);

OrientationInterpolator* OrientationInterpolator261 = new OrientationInterpolator();
OrientationInterpolator261->setDEF("vl3_RotationInterpolator");
OrientationInterpolator261->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator261->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group242->addChild(OrientationInterpolator261);

OrientationInterpolator* OrientationInterpolator262 = new OrientationInterpolator();
OrientationInterpolator262->setDEF("vl2_RotationInterpolator");
OrientationInterpolator262->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator262->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group242->addChild(OrientationInterpolator262);

OrientationInterpolator* OrientationInterpolator263 = new OrientationInterpolator();
OrientationInterpolator263->setDEF("vl1_RotationInterpolator");
OrientationInterpolator263->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator263->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group242->addChild(OrientationInterpolator263);

OrientationInterpolator* OrientationInterpolator264 = new OrientationInterpolator();
OrientationInterpolator264->setDEF("vt12_RotationInterpolator");
OrientationInterpolator264->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator264->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group242->addChild(OrientationInterpolator264);

OrientationInterpolator* OrientationInterpolator265 = new OrientationInterpolator();
OrientationInterpolator265->setDEF("vt11_RotationInterpolator");
OrientationInterpolator265->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator265->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group242->addChild(OrientationInterpolator265);

OrientationInterpolator* OrientationInterpolator266 = new OrientationInterpolator();
OrientationInterpolator266->setDEF("vt10_RotationInterpolator");
OrientationInterpolator266->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator266->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group242->addChild(OrientationInterpolator266);

OrientationInterpolator* OrientationInterpolator267 = new OrientationInterpolator();
OrientationInterpolator267->setDEF("vt9_RotationInterpolator");
OrientationInterpolator267->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator267->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group242->addChild(OrientationInterpolator267);

OrientationInterpolator* OrientationInterpolator268 = new OrientationInterpolator();
OrientationInterpolator268->setDEF("vt8_RotationInterpolator");
OrientationInterpolator268->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator268->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group242->addChild(OrientationInterpolator268);

OrientationInterpolator* OrientationInterpolator269 = new OrientationInterpolator();
OrientationInterpolator269->setDEF("vt7_RotationInterpolator");
OrientationInterpolator269->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator269->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group242->addChild(OrientationInterpolator269);

OrientationInterpolator* OrientationInterpolator270 = new OrientationInterpolator();
OrientationInterpolator270->setDEF("vt6_RotationInterpolator");
OrientationInterpolator270->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator270->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group242->addChild(OrientationInterpolator270);

OrientationInterpolator* OrientationInterpolator271 = new OrientationInterpolator();
OrientationInterpolator271->setDEF("vt5_RotationInterpolator");
OrientationInterpolator271->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator271->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group242->addChild(OrientationInterpolator271);

OrientationInterpolator* OrientationInterpolator272 = new OrientationInterpolator();
OrientationInterpolator272->setDEF("vt4_RotationInterpolator");
OrientationInterpolator272->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator272->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group242->addChild(OrientationInterpolator272);

OrientationInterpolator* OrientationInterpolator273 = new OrientationInterpolator();
OrientationInterpolator273->setDEF("vt3_RotationInterpolator");
OrientationInterpolator273->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator273->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group242->addChild(OrientationInterpolator273);

OrientationInterpolator* OrientationInterpolator274 = new OrientationInterpolator();
OrientationInterpolator274->setDEF("vt2_RotationInterpolator");
OrientationInterpolator274->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator274->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group242->addChild(OrientationInterpolator274);

OrientationInterpolator* OrientationInterpolator275 = new OrientationInterpolator();
OrientationInterpolator275->setDEF("vt1_RotationInterpolator");
OrientationInterpolator275->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator275->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group242->addChild(OrientationInterpolator275);

OrientationInterpolator* OrientationInterpolator276 = new OrientationInterpolator();
OrientationInterpolator276->setDEF("vc7_RotationInterpolator");
OrientationInterpolator276->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator276->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group242->addChild(OrientationInterpolator276);

OrientationInterpolator* OrientationInterpolator277 = new OrientationInterpolator();
OrientationInterpolator277->setDEF("vc6_RotationInterpolator");
OrientationInterpolator277->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator277->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group242->addChild(OrientationInterpolator277);

OrientationInterpolator* OrientationInterpolator278 = new OrientationInterpolator();
OrientationInterpolator278->setDEF("vc5_RotationInterpolator");
OrientationInterpolator278->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator278->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group242->addChild(OrientationInterpolator278);

OrientationInterpolator* OrientationInterpolator279 = new OrientationInterpolator();
OrientationInterpolator279->setDEF("vc4_RotationInterpolator");
OrientationInterpolator279->setKey(new float[4]{0,0.3,0.4,1}, 4);
OrientationInterpolator279->setKeyValue(new float[16]{1,0,1,0.25,-1,0,-1,0.35,1,0,0,0.75,1,0,1,0.5});
Group242->addChild(OrientationInterpolator279);

OrientationInterpolator* OrientationInterpolator280 = new OrientationInterpolator();
OrientationInterpolator280->setDEF("vc3_RotationInterpolator");
OrientationInterpolator280->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator280->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group242->addChild(OrientationInterpolator280);

OrientationInterpolator* OrientationInterpolator281 = new OrientationInterpolator();
OrientationInterpolator281->setDEF("vc2_RotationInterpolator");
OrientationInterpolator281->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator281->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group242->addChild(OrientationInterpolator281);

OrientationInterpolator* OrientationInterpolator282 = new OrientationInterpolator();
OrientationInterpolator282->setDEF("vc1_RotationInterpolator");
OrientationInterpolator282->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator282->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group242->addChild(OrientationInterpolator282);

OrientationInterpolator* OrientationInterpolator283 = new OrientationInterpolator();
OrientationInterpolator283->setDEF("skullbase_RotationInterpolator");
OrientationInterpolator283->setKey(new float[4]{0,0.2,0.75,1}, 4);
OrientationInterpolator283->setKeyValue(new float[16]{0,-1,0,0.5,0,0,1,0,0,0,1,0,0,1,0,0.35});
Group242->addChild(OrientationInterpolator283);

OrientationInterpolator* OrientationInterpolator284 = new OrientationInterpolator();
OrientationInterpolator284->setDEF("l_eyelid_joint_RotationInterpolator");
OrientationInterpolator284->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator284->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group242->addChild(OrientationInterpolator284);

OrientationInterpolator* OrientationInterpolator285 = new OrientationInterpolator();
OrientationInterpolator285->setDEF("l_eyeball_joint_RotationInterpolator");
OrientationInterpolator285->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator285->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group242->addChild(OrientationInterpolator285);

OrientationInterpolator* OrientationInterpolator286 = new OrientationInterpolator();
OrientationInterpolator286->setDEF("l_eyebrow_joint_RotationInterpolator");
OrientationInterpolator286->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator286->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group242->addChild(OrientationInterpolator286);

OrientationInterpolator* OrientationInterpolator287 = new OrientationInterpolator();
OrientationInterpolator287->setDEF("r_eyelid_joint_RotationInterpolator");
OrientationInterpolator287->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator287->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group242->addChild(OrientationInterpolator287);

OrientationInterpolator* OrientationInterpolator288 = new OrientationInterpolator();
OrientationInterpolator288->setDEF("r_eyeball_joint_RotationInterpolator");
OrientationInterpolator288->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator288->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group242->addChild(OrientationInterpolator288);

OrientationInterpolator* OrientationInterpolator289 = new OrientationInterpolator();
OrientationInterpolator289->setDEF("r_eyebrow_joint_RotationInterpolator");
OrientationInterpolator289->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator289->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group242->addChild(OrientationInterpolator289);

OrientationInterpolator* OrientationInterpolator290 = new OrientationInterpolator();
OrientationInterpolator290->setDEF("temporomandibular_RotationInterpolator");
OrientationInterpolator290->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator290->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group242->addChild(OrientationInterpolator290);

OrientationInterpolator* OrientationInterpolator291 = new OrientationInterpolator();
OrientationInterpolator291->setDEF("l_sternoclavicular_RotationInterpolator");
OrientationInterpolator291->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator291->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group242->addChild(OrientationInterpolator291);

OrientationInterpolator* OrientationInterpolator292 = new OrientationInterpolator();
OrientationInterpolator292->setDEF("l_acromioclavicular_RotationInterpolator");
OrientationInterpolator292->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator292->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group242->addChild(OrientationInterpolator292);

OrientationInterpolator* OrientationInterpolator293 = new OrientationInterpolator();
OrientationInterpolator293->setDEF("l_shoulder_RotationInterpolator");
OrientationInterpolator293->setKey(new float[3]{0,0.4,1}, 3);
OrientationInterpolator293->setKeyValue(new float[12]{0,0,1,0,0,0,1,1.5,-1,0,1,1.75});
Group242->addChild(OrientationInterpolator293);

OrientationInterpolator* OrientationInterpolator294 = new OrientationInterpolator();
OrientationInterpolator294->setDEF("l_elbow_RotationInterpolator");
OrientationInterpolator294->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator294->setKeyValue(new float[12]{-1,0,0,3,-1,0,0,0.75,-1,-1,0,0.5});
Group242->addChild(OrientationInterpolator294);

OrientationInterpolator* OrientationInterpolator295 = new OrientationInterpolator();
OrientationInterpolator295->setDEF("l_wrist_RotationInterpolator");
OrientationInterpolator295->setKey(new float[4]{0,0.4,0.8,1}, 4);
OrientationInterpolator295->setKeyValue(new float[16]{0,0,1,0,0,1,0,1.3,0,-0.5,1,1.3,0,0,1,0});
Group242->addChild(OrientationInterpolator295);

OrientationInterpolator* OrientationInterpolator296 = new OrientationInterpolator();
OrientationInterpolator296->setDEF("l_thumb1_RotationInterpolator");
OrientationInterpolator296->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator296->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group242->addChild(OrientationInterpolator296);

OrientationInterpolator* OrientationInterpolator297 = new OrientationInterpolator();
OrientationInterpolator297->setDEF("l_thumb2_RotationInterpolator");
OrientationInterpolator297->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator297->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group242->addChild(OrientationInterpolator297);

OrientationInterpolator* OrientationInterpolator298 = new OrientationInterpolator();
OrientationInterpolator298->setDEF("l_thumb3_RotationInterpolator");
OrientationInterpolator298->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator298->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group242->addChild(OrientationInterpolator298);

OrientationInterpolator* OrientationInterpolator299 = new OrientationInterpolator();
OrientationInterpolator299->setDEF("l_index0_RotationInterpolator");
OrientationInterpolator299->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator299->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group242->addChild(OrientationInterpolator299);

OrientationInterpolator* OrientationInterpolator300 = new OrientationInterpolator();
OrientationInterpolator300->setDEF("l_index1_RotationInterpolator");
OrientationInterpolator300->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator300->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group242->addChild(OrientationInterpolator300);

OrientationInterpolator* OrientationInterpolator301 = new OrientationInterpolator();
OrientationInterpolator301->setDEF("l_index2_RotationInterpolator");
OrientationInterpolator301->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator301->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group242->addChild(OrientationInterpolator301);

OrientationInterpolator* OrientationInterpolator302 = new OrientationInterpolator();
OrientationInterpolator302->setDEF("l_index3_RotationInterpolator");
OrientationInterpolator302->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator302->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group242->addChild(OrientationInterpolator302);

OrientationInterpolator* OrientationInterpolator303 = new OrientationInterpolator();
OrientationInterpolator303->setDEF("l_middle0_RotationInterpolator");
OrientationInterpolator303->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator303->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group242->addChild(OrientationInterpolator303);

OrientationInterpolator* OrientationInterpolator304 = new OrientationInterpolator();
OrientationInterpolator304->setDEF("l_middle1_RotationInterpolator");
OrientationInterpolator304->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator304->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group242->addChild(OrientationInterpolator304);

OrientationInterpolator* OrientationInterpolator305 = new OrientationInterpolator();
OrientationInterpolator305->setDEF("l_middle2_RotationInterpolator");
OrientationInterpolator305->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator305->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group242->addChild(OrientationInterpolator305);

OrientationInterpolator* OrientationInterpolator306 = new OrientationInterpolator();
OrientationInterpolator306->setDEF("l_middle3_RotationInterpolator");
OrientationInterpolator306->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator306->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group242->addChild(OrientationInterpolator306);

OrientationInterpolator* OrientationInterpolator307 = new OrientationInterpolator();
OrientationInterpolator307->setDEF("l_ring0_RotationInterpolator");
OrientationInterpolator307->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator307->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group242->addChild(OrientationInterpolator307);

OrientationInterpolator* OrientationInterpolator308 = new OrientationInterpolator();
OrientationInterpolator308->setDEF("l_ring1_RotationInterpolator");
OrientationInterpolator308->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator308->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group242->addChild(OrientationInterpolator308);

OrientationInterpolator* OrientationInterpolator309 = new OrientationInterpolator();
OrientationInterpolator309->setDEF("l_ring2_RotationInterpolator");
OrientationInterpolator309->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator309->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group242->addChild(OrientationInterpolator309);

OrientationInterpolator* OrientationInterpolator310 = new OrientationInterpolator();
OrientationInterpolator310->setDEF("l_ring3_RotationInterpolator");
OrientationInterpolator310->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator310->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group242->addChild(OrientationInterpolator310);

OrientationInterpolator* OrientationInterpolator311 = new OrientationInterpolator();
OrientationInterpolator311->setDEF("l_pinky0_RotationInterpolator");
OrientationInterpolator311->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator311->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group242->addChild(OrientationInterpolator311);

OrientationInterpolator* OrientationInterpolator312 = new OrientationInterpolator();
OrientationInterpolator312->setDEF("l_pinky1_RotationInterpolator");
OrientationInterpolator312->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator312->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group242->addChild(OrientationInterpolator312);

OrientationInterpolator* OrientationInterpolator313 = new OrientationInterpolator();
OrientationInterpolator313->setDEF("l_pinky2_RotationInterpolator");
OrientationInterpolator313->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator313->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group242->addChild(OrientationInterpolator313);

OrientationInterpolator* OrientationInterpolator314 = new OrientationInterpolator();
OrientationInterpolator314->setDEF("l_pinky3_RotationInterpolator");
OrientationInterpolator314->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator314->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group242->addChild(OrientationInterpolator314);

OrientationInterpolator* OrientationInterpolator315 = new OrientationInterpolator();
OrientationInterpolator315->setDEF("r_sternoclavicular_RotationInterpolator");
OrientationInterpolator315->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator315->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group242->addChild(OrientationInterpolator315);

OrientationInterpolator* OrientationInterpolator316 = new OrientationInterpolator();
OrientationInterpolator316->setDEF("r_acromioclavicular_RotationInterpolator");
OrientationInterpolator316->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator316->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group242->addChild(OrientationInterpolator316);

OrientationInterpolator* OrientationInterpolator317 = new OrientationInterpolator();
OrientationInterpolator317->setDEF("r_shoulder_RotationInterpolator");
OrientationInterpolator317->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator317->setKeyValue(new float[12]{0,0,-1,2.5,0,0,-1,1.5,0,0,-1,1.75});
Group242->addChild(OrientationInterpolator317);

OrientationInterpolator* OrientationInterpolator318 = new OrientationInterpolator();
OrientationInterpolator318->setDEF("r_elbow_RotationInterpolator");
OrientationInterpolator318->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator318->setKeyValue(new float[12]{-1,0,0,3,-1,0,0,0.75,-1,-1,0,0.5});
Group242->addChild(OrientationInterpolator318);

OrientationInterpolator* OrientationInterpolator319 = new OrientationInterpolator();
OrientationInterpolator319->setDEF("r_wrist_RotationInterpolator");
OrientationInterpolator319->setKey(new float[4]{0,0.5,0.7,1}, 4);
OrientationInterpolator319->setKeyValue(new float[16]{0,1,0,0.3,0,0,1,0,0,0,-1,1,0,-1,0,0.3});
Group242->addChild(OrientationInterpolator319);

OrientationInterpolator* OrientationInterpolator320 = new OrientationInterpolator();
OrientationInterpolator320->setDEF("r_thumb1_RotationInterpolator");
OrientationInterpolator320->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator320->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group242->addChild(OrientationInterpolator320);

OrientationInterpolator* OrientationInterpolator321 = new OrientationInterpolator();
OrientationInterpolator321->setDEF("r_thumb2_RotationInterpolator");
OrientationInterpolator321->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator321->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group242->addChild(OrientationInterpolator321);

OrientationInterpolator* OrientationInterpolator322 = new OrientationInterpolator();
OrientationInterpolator322->setDEF("r_thumb3_RotationInterpolator");
OrientationInterpolator322->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator322->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group242->addChild(OrientationInterpolator322);

OrientationInterpolator* OrientationInterpolator323 = new OrientationInterpolator();
OrientationInterpolator323->setDEF("r_index0_RotationInterpolator");
OrientationInterpolator323->setKey(new float[4]{0,0.5,0.75,1}, 4);
OrientationInterpolator323->setKeyValue(new float[16]{0,0,1,0,0,0,1,0,0,0,1,1,0,0,1,0});
Group242->addChild(OrientationInterpolator323);

OrientationInterpolator* OrientationInterpolator324 = new OrientationInterpolator();
OrientationInterpolator324->setDEF("r_index1_RotationInterpolator");
OrientationInterpolator324->setKey(new float[4]{0,0.5,0.75,1}, 4);
OrientationInterpolator324->setKeyValue(new float[16]{0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0});
Group242->addChild(OrientationInterpolator324);

OrientationInterpolator* OrientationInterpolator325 = new OrientationInterpolator();
OrientationInterpolator325->setDEF("r_index2_RotationInterpolator");
OrientationInterpolator325->setKey(new float[4]{0,0.5,0.75,1}, 4);
OrientationInterpolator325->setKeyValue(new float[16]{0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0});
Group242->addChild(OrientationInterpolator325);

OrientationInterpolator* OrientationInterpolator326 = new OrientationInterpolator();
OrientationInterpolator326->setDEF("r_index3_RotationInterpolator");
OrientationInterpolator326->setKey(new float[4]{0,0.5,0.75,1}, 4);
OrientationInterpolator326->setKeyValue(new float[16]{0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0});
Group242->addChild(OrientationInterpolator326);

OrientationInterpolator* OrientationInterpolator327 = new OrientationInterpolator();
OrientationInterpolator327->setDEF("r_middle0_RotationInterpolator");
OrientationInterpolator327->setKey(new float[4]{0,0.5,0.75,1}, 4);
OrientationInterpolator327->setKeyValue(new float[16]{0,0,1,0,0,0,1,0,0,0,1,1,0,0,1,0});
Group242->addChild(OrientationInterpolator327);

OrientationInterpolator* OrientationInterpolator328 = new OrientationInterpolator();
OrientationInterpolator328->setDEF("r_middle1_RotationInterpolator");
OrientationInterpolator328->setKey(new float[4]{0,0.5,0.75,1}, 4);
OrientationInterpolator328->setKeyValue(new float[16]{0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0});
Group242->addChild(OrientationInterpolator328);

OrientationInterpolator* OrientationInterpolator329 = new OrientationInterpolator();
OrientationInterpolator329->setDEF("r_middle2_RotationInterpolator");
OrientationInterpolator329->setKey(new float[4]{0,0.5,0.75,1}, 4);
OrientationInterpolator329->setKeyValue(new float[16]{0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0});
Group242->addChild(OrientationInterpolator329);

OrientationInterpolator* OrientationInterpolator330 = new OrientationInterpolator();
OrientationInterpolator330->setDEF("r_middle3_RotationInterpolator");
OrientationInterpolator330->setKey(new float[4]{0,0.5,0.75,1}, 4);
OrientationInterpolator330->setKeyValue(new float[16]{0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0});
Group242->addChild(OrientationInterpolator330);

OrientationInterpolator* OrientationInterpolator331 = new OrientationInterpolator();
OrientationInterpolator331->setDEF("r_ring0_RotationInterpolator");
OrientationInterpolator331->setKey(new float[4]{0,0.5,0.75,1}, 4);
OrientationInterpolator331->setKeyValue(new float[16]{0,0,1,0,0,0,1,0,0,0,1,1,0,0,1,0});
Group242->addChild(OrientationInterpolator331);

OrientationInterpolator* OrientationInterpolator332 = new OrientationInterpolator();
OrientationInterpolator332->setDEF("r_ring1_RotationInterpolator");
OrientationInterpolator332->setKey(new float[4]{0,0.5,0.75,1}, 4);
OrientationInterpolator332->setKeyValue(new float[16]{0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0});
Group242->addChild(OrientationInterpolator332);

OrientationInterpolator* OrientationInterpolator333 = new OrientationInterpolator();
OrientationInterpolator333->setDEF("r_ring2_RotationInterpolator");
OrientationInterpolator333->setKey(new float[4]{0,0.5,0.75,1}, 4);
OrientationInterpolator333->setKeyValue(new float[16]{0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0});
Group242->addChild(OrientationInterpolator333);

OrientationInterpolator* OrientationInterpolator334 = new OrientationInterpolator();
OrientationInterpolator334->setDEF("r_ring3_RotationInterpolator");
OrientationInterpolator334->setKey(new float[4]{0,0.5,0.75,1}, 4);
OrientationInterpolator334->setKeyValue(new float[16]{0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0});
Group242->addChild(OrientationInterpolator334);

OrientationInterpolator* OrientationInterpolator335 = new OrientationInterpolator();
OrientationInterpolator335->setDEF("r_pinky0_RotationInterpolator");
OrientationInterpolator335->setKey(new float[4]{0,0.5,0.75,1}, 4);
OrientationInterpolator335->setKeyValue(new float[16]{0,0,1,0,0,0,1,0,0,0,1,1,0,0,1,0});
Group242->addChild(OrientationInterpolator335);

OrientationInterpolator* OrientationInterpolator336 = new OrientationInterpolator();
OrientationInterpolator336->setDEF("r_pinky1_RotationInterpolator");
OrientationInterpolator336->setKey(new float[4]{0,0.5,0.75,1}, 4);
OrientationInterpolator336->setKeyValue(new float[16]{0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0});
Group242->addChild(OrientationInterpolator336);

OrientationInterpolator* OrientationInterpolator337 = new OrientationInterpolator();
OrientationInterpolator337->setDEF("r_pinky2_RotationInterpolator");
OrientationInterpolator337->setKey(new float[4]{0,0.5,0.75,1}, 4);
OrientationInterpolator337->setKeyValue(new float[16]{0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0});
Group242->addChild(OrientationInterpolator337);

OrientationInterpolator* OrientationInterpolator338 = new OrientationInterpolator();
OrientationInterpolator338->setDEF("r_pinky3_RotationInterpolator");
OrientationInterpolator338->setKey(new float[4]{0,0.5,0.75,1}, 4);
OrientationInterpolator338->setKeyValue(new float[16]{0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0});
Group242->addChild(OrientationInterpolator338);

Scene19->addChild(Group242);

//TimeSensor to Interpolators
ROUTE* ROUTE339 = new ROUTE();
ROUTE339->setFromField("fraction_changed");
ROUTE339->setFromNode("KickTimer");
ROUTE339->setToField("set_fraction");
ROUTE339->setToNode("HumanoidRoot_RotationInterpolator");
Scene19->addChild(ROUTE339);

ROUTE* ROUTE340 = new ROUTE();
ROUTE340->setFromField("fraction_changed");
ROUTE340->setFromNode("KickTimer");
ROUTE340->setToField("set_fraction");
ROUTE340->setToNode("HumanoidRoot_TranslationInterpolator");
Scene19->addChild(ROUTE340);

ROUTE* ROUTE341 = new ROUTE();
ROUTE341->setFromField("fraction_changed");
ROUTE341->setFromNode("KickTimer");
ROUTE341->setToField("set_fraction");
ROUTE341->setToNode("sacroiliac_RotationInterpolator");
Scene19->addChild(ROUTE341);

ROUTE* ROUTE342 = new ROUTE();
ROUTE342->setFromField("fraction_changed");
ROUTE342->setFromNode("KickTimer");
ROUTE342->setToField("set_fraction");
ROUTE342->setToNode("l_hip_RotationInterpolator");
Scene19->addChild(ROUTE342);

ROUTE* ROUTE343 = new ROUTE();
ROUTE343->setFromField("fraction_changed");
ROUTE343->setFromNode("KickTimer");
ROUTE343->setToField("set_fraction");
ROUTE343->setToNode("l_knee_RotationInterpolator");
Scene19->addChild(ROUTE343);

ROUTE* ROUTE344 = new ROUTE();
ROUTE344->setFromField("fraction_changed");
ROUTE344->setFromNode("KickTimer");
ROUTE344->setToField("set_fraction");
ROUTE344->setToNode("l_ankle_RotationInterpolator");
Scene19->addChild(ROUTE344);

ROUTE* ROUTE345 = new ROUTE();
ROUTE345->setFromField("fraction_changed");
ROUTE345->setFromNode("KickTimer");
ROUTE345->setToField("set_fraction");
ROUTE345->setToNode("l_subtalar_RotationInterpolator");
Scene19->addChild(ROUTE345);

ROUTE* ROUTE346 = new ROUTE();
ROUTE346->setFromField("fraction_changed");
ROUTE346->setFromNode("KickTimer");
ROUTE346->setToField("set_fraction");
ROUTE346->setToNode("l_midtarsal_RotationInterpolator");
Scene19->addChild(ROUTE346);

ROUTE* ROUTE347 = new ROUTE();
ROUTE347->setFromField("fraction_changed");
ROUTE347->setFromNode("KickTimer");
ROUTE347->setToField("set_fraction");
ROUTE347->setToNode("l_metatarsal_RotationInterpolator");
Scene19->addChild(ROUTE347);

ROUTE* ROUTE348 = new ROUTE();
ROUTE348->setFromField("fraction_changed");
ROUTE348->setFromNode("KickTimer");
ROUTE348->setToField("set_fraction");
ROUTE348->setToNode("r_hip_RotationInterpolator");
Scene19->addChild(ROUTE348);

ROUTE* ROUTE349 = new ROUTE();
ROUTE349->setFromField("fraction_changed");
ROUTE349->setFromNode("KickTimer");
ROUTE349->setToField("set_fraction");
ROUTE349->setToNode("r_knee_RotationInterpolator");
Scene19->addChild(ROUTE349);

ROUTE* ROUTE350 = new ROUTE();
ROUTE350->setFromField("fraction_changed");
ROUTE350->setFromNode("KickTimer");
ROUTE350->setToField("set_fraction");
ROUTE350->setToNode("r_ankle_RotationInterpolator");
Scene19->addChild(ROUTE350);

ROUTE* ROUTE351 = new ROUTE();
ROUTE351->setFromField("fraction_changed");
ROUTE351->setFromNode("KickTimer");
ROUTE351->setToField("set_fraction");
ROUTE351->setToNode("r_subtalar_RotationInterpolator");
Scene19->addChild(ROUTE351);

ROUTE* ROUTE352 = new ROUTE();
ROUTE352->setFromField("fraction_changed");
ROUTE352->setFromNode("KickTimer");
ROUTE352->setToField("set_fraction");
ROUTE352->setToNode("r_midtarsal_RotationInterpolator");
Scene19->addChild(ROUTE352);

ROUTE* ROUTE353 = new ROUTE();
ROUTE353->setFromField("fraction_changed");
ROUTE353->setFromNode("KickTimer");
ROUTE353->setToField("set_fraction");
ROUTE353->setToNode("r_metatarsal_RotationInterpolator");
Scene19->addChild(ROUTE353);

ROUTE* ROUTE354 = new ROUTE();
ROUTE354->setFromField("fraction_changed");
ROUTE354->setFromNode("KickTimer");
ROUTE354->setToField("set_fraction");
ROUTE354->setToNode("vl5_RotationInterpolator");
Scene19->addChild(ROUTE354);

ROUTE* ROUTE355 = new ROUTE();
ROUTE355->setFromField("fraction_changed");
ROUTE355->setFromNode("KickTimer");
ROUTE355->setToField("set_fraction");
ROUTE355->setToNode("vl4_RotationInterpolator");
Scene19->addChild(ROUTE355);

ROUTE* ROUTE356 = new ROUTE();
ROUTE356->setFromField("fraction_changed");
ROUTE356->setFromNode("KickTimer");
ROUTE356->setToField("set_fraction");
ROUTE356->setToNode("vl3_RotationInterpolator");
Scene19->addChild(ROUTE356);

ROUTE* ROUTE357 = new ROUTE();
ROUTE357->setFromField("fraction_changed");
ROUTE357->setFromNode("KickTimer");
ROUTE357->setToField("set_fraction");
ROUTE357->setToNode("vl2_RotationInterpolator");
Scene19->addChild(ROUTE357);

ROUTE* ROUTE358 = new ROUTE();
ROUTE358->setFromField("fraction_changed");
ROUTE358->setFromNode("KickTimer");
ROUTE358->setToField("set_fraction");
ROUTE358->setToNode("vl1_RotationInterpolator");
Scene19->addChild(ROUTE358);

ROUTE* ROUTE359 = new ROUTE();
ROUTE359->setFromField("fraction_changed");
ROUTE359->setFromNode("KickTimer");
ROUTE359->setToField("set_fraction");
ROUTE359->setToNode("vt12_RotationInterpolator");
Scene19->addChild(ROUTE359);

ROUTE* ROUTE360 = new ROUTE();
ROUTE360->setFromField("fraction_changed");
ROUTE360->setFromNode("KickTimer");
ROUTE360->setToField("set_fraction");
ROUTE360->setToNode("vt11_RotationInterpolator");
Scene19->addChild(ROUTE360);

ROUTE* ROUTE361 = new ROUTE();
ROUTE361->setFromField("fraction_changed");
ROUTE361->setFromNode("KickTimer");
ROUTE361->setToField("set_fraction");
ROUTE361->setToNode("vt10_RotationInterpolator");
Scene19->addChild(ROUTE361);

ROUTE* ROUTE362 = new ROUTE();
ROUTE362->setFromField("fraction_changed");
ROUTE362->setFromNode("KickTimer");
ROUTE362->setToField("set_fraction");
ROUTE362->setToNode("vt9_RotationInterpolator");
Scene19->addChild(ROUTE362);

ROUTE* ROUTE363 = new ROUTE();
ROUTE363->setFromField("fraction_changed");
ROUTE363->setFromNode("KickTimer");
ROUTE363->setToField("set_fraction");
ROUTE363->setToNode("vt8_RotationInterpolator");
Scene19->addChild(ROUTE363);

ROUTE* ROUTE364 = new ROUTE();
ROUTE364->setFromField("fraction_changed");
ROUTE364->setFromNode("KickTimer");
ROUTE364->setToField("set_fraction");
ROUTE364->setToNode("vt7_RotationInterpolator");
Scene19->addChild(ROUTE364);

ROUTE* ROUTE365 = new ROUTE();
ROUTE365->setFromField("fraction_changed");
ROUTE365->setFromNode("KickTimer");
ROUTE365->setToField("set_fraction");
ROUTE365->setToNode("vt6_RotationInterpolator");
Scene19->addChild(ROUTE365);

ROUTE* ROUTE366 = new ROUTE();
ROUTE366->setFromField("fraction_changed");
ROUTE366->setFromNode("KickTimer");
ROUTE366->setToField("set_fraction");
ROUTE366->setToNode("vt5_RotationInterpolator");
Scene19->addChild(ROUTE366);

ROUTE* ROUTE367 = new ROUTE();
ROUTE367->setFromField("fraction_changed");
ROUTE367->setFromNode("KickTimer");
ROUTE367->setToField("set_fraction");
ROUTE367->setToNode("vt4_RotationInterpolator");
Scene19->addChild(ROUTE367);

ROUTE* ROUTE368 = new ROUTE();
ROUTE368->setFromField("fraction_changed");
ROUTE368->setFromNode("KickTimer");
ROUTE368->setToField("set_fraction");
ROUTE368->setToNode("vt3_RotationInterpolator");
Scene19->addChild(ROUTE368);

ROUTE* ROUTE369 = new ROUTE();
ROUTE369->setFromField("fraction_changed");
ROUTE369->setFromNode("KickTimer");
ROUTE369->setToField("set_fraction");
ROUTE369->setToNode("vt2_RotationInterpolator");
Scene19->addChild(ROUTE369);

ROUTE* ROUTE370 = new ROUTE();
ROUTE370->setFromField("fraction_changed");
ROUTE370->setFromNode("KickTimer");
ROUTE370->setToField("set_fraction");
ROUTE370->setToNode("vt1_RotationInterpolator");
Scene19->addChild(ROUTE370);

ROUTE* ROUTE371 = new ROUTE();
ROUTE371->setFromField("fraction_changed");
ROUTE371->setFromNode("KickTimer");
ROUTE371->setToField("set_fraction");
ROUTE371->setToNode("vc7_RotationInterpolator");
Scene19->addChild(ROUTE371);

ROUTE* ROUTE372 = new ROUTE();
ROUTE372->setFromField("fraction_changed");
ROUTE372->setFromNode("KickTimer");
ROUTE372->setToField("set_fraction");
ROUTE372->setToNode("vc6_RotationInterpolator");
Scene19->addChild(ROUTE372);

ROUTE* ROUTE373 = new ROUTE();
ROUTE373->setFromField("fraction_changed");
ROUTE373->setFromNode("KickTimer");
ROUTE373->setToField("set_fraction");
ROUTE373->setToNode("vc5_RotationInterpolator");
Scene19->addChild(ROUTE373);

ROUTE* ROUTE374 = new ROUTE();
ROUTE374->setFromField("fraction_changed");
ROUTE374->setFromNode("KickTimer");
ROUTE374->setToField("set_fraction");
ROUTE374->setToNode("vc4_RotationInterpolator");
Scene19->addChild(ROUTE374);

ROUTE* ROUTE375 = new ROUTE();
ROUTE375->setFromField("fraction_changed");
ROUTE375->setFromNode("KickTimer");
ROUTE375->setToField("set_fraction");
ROUTE375->setToNode("vc3_RotationInterpolator");
Scene19->addChild(ROUTE375);

ROUTE* ROUTE376 = new ROUTE();
ROUTE376->setFromField("fraction_changed");
ROUTE376->setFromNode("KickTimer");
ROUTE376->setToField("set_fraction");
ROUTE376->setToNode("vc2_RotationInterpolator");
Scene19->addChild(ROUTE376);

ROUTE* ROUTE377 = new ROUTE();
ROUTE377->setFromField("fraction_changed");
ROUTE377->setFromNode("KickTimer");
ROUTE377->setToField("set_fraction");
ROUTE377->setToNode("vc1_RotationInterpolator");
Scene19->addChild(ROUTE377);

ROUTE* ROUTE378 = new ROUTE();
ROUTE378->setFromField("fraction_changed");
ROUTE378->setFromNode("KickTimer");
ROUTE378->setToField("set_fraction");
ROUTE378->setToNode("skullbase_RotationInterpolator");
Scene19->addChild(ROUTE378);

ROUTE* ROUTE379 = new ROUTE();
ROUTE379->setFromField("fraction_changed");
ROUTE379->setFromNode("KickTimer");
ROUTE379->setToField("set_fraction");
ROUTE379->setToNode("l_eyelid_joint_RotationInterpolator");
Scene19->addChild(ROUTE379);

ROUTE* ROUTE380 = new ROUTE();
ROUTE380->setFromField("fraction_changed");
ROUTE380->setFromNode("KickTimer");
ROUTE380->setToField("set_fraction");
ROUTE380->setToNode("l_eyeball_joint_RotationInterpolator");
Scene19->addChild(ROUTE380);

ROUTE* ROUTE381 = new ROUTE();
ROUTE381->setFromField("fraction_changed");
ROUTE381->setFromNode("KickTimer");
ROUTE381->setToField("set_fraction");
ROUTE381->setToNode("l_eyebrow_joint_RotationInterpolator");
Scene19->addChild(ROUTE381);

ROUTE* ROUTE382 = new ROUTE();
ROUTE382->setFromField("fraction_changed");
ROUTE382->setFromNode("KickTimer");
ROUTE382->setToField("set_fraction");
ROUTE382->setToNode("r_eyelid_joint_RotationInterpolator");
Scene19->addChild(ROUTE382);

ROUTE* ROUTE383 = new ROUTE();
ROUTE383->setFromField("fraction_changed");
ROUTE383->setFromNode("KickTimer");
ROUTE383->setToField("set_fraction");
ROUTE383->setToNode("r_eyeball_joint_RotationInterpolator");
Scene19->addChild(ROUTE383);

ROUTE* ROUTE384 = new ROUTE();
ROUTE384->setFromField("fraction_changed");
ROUTE384->setFromNode("KickTimer");
ROUTE384->setToField("set_fraction");
ROUTE384->setToNode("r_eyebrow_joint_RotationInterpolator");
Scene19->addChild(ROUTE384);

ROUTE* ROUTE385 = new ROUTE();
ROUTE385->setFromField("fraction_changed");
ROUTE385->setFromNode("KickTimer");
ROUTE385->setToField("set_fraction");
ROUTE385->setToNode("temporomandibular_RotationInterpolator");
Scene19->addChild(ROUTE385);

ROUTE* ROUTE386 = new ROUTE();
ROUTE386->setFromField("fraction_changed");
ROUTE386->setFromNode("KickTimer");
ROUTE386->setToField("set_fraction");
ROUTE386->setToNode("l_sternoclavicular_RotationInterpolator");
Scene19->addChild(ROUTE386);

ROUTE* ROUTE387 = new ROUTE();
ROUTE387->setFromField("fraction_changed");
ROUTE387->setFromNode("KickTimer");
ROUTE387->setToField("set_fraction");
ROUTE387->setToNode("l_acromioclavicular_RotationInterpolator");
Scene19->addChild(ROUTE387);

ROUTE* ROUTE388 = new ROUTE();
ROUTE388->setFromField("fraction_changed");
ROUTE388->setFromNode("KickTimer");
ROUTE388->setToField("set_fraction");
ROUTE388->setToNode("l_shoulder_RotationInterpolator");
Scene19->addChild(ROUTE388);

ROUTE* ROUTE389 = new ROUTE();
ROUTE389->setFromField("fraction_changed");
ROUTE389->setFromNode("KickTimer");
ROUTE389->setToField("set_fraction");
ROUTE389->setToNode("l_elbow_RotationInterpolator");
Scene19->addChild(ROUTE389);

ROUTE* ROUTE390 = new ROUTE();
ROUTE390->setFromField("fraction_changed");
ROUTE390->setFromNode("KickTimer");
ROUTE390->setToField("set_fraction");
ROUTE390->setToNode("l_wrist_RotationInterpolator");
Scene19->addChild(ROUTE390);

ROUTE* ROUTE391 = new ROUTE();
ROUTE391->setFromField("fraction_changed");
ROUTE391->setFromNode("KickTimer");
ROUTE391->setToField("set_fraction");
ROUTE391->setToNode("l_thumb1_RotationInterpolator");
Scene19->addChild(ROUTE391);

ROUTE* ROUTE392 = new ROUTE();
ROUTE392->setFromField("fraction_changed");
ROUTE392->setFromNode("KickTimer");
ROUTE392->setToField("set_fraction");
ROUTE392->setToNode("l_thumb2_RotationInterpolator");
Scene19->addChild(ROUTE392);

ROUTE* ROUTE393 = new ROUTE();
ROUTE393->setFromField("fraction_changed");
ROUTE393->setFromNode("KickTimer");
ROUTE393->setToField("set_fraction");
ROUTE393->setToNode("l_thumb3_RotationInterpolator");
Scene19->addChild(ROUTE393);

ROUTE* ROUTE394 = new ROUTE();
ROUTE394->setFromField("fraction_changed");
ROUTE394->setFromNode("KickTimer");
ROUTE394->setToField("set_fraction");
ROUTE394->setToNode("l_index0_RotationInterpolator");
Scene19->addChild(ROUTE394);

ROUTE* ROUTE395 = new ROUTE();
ROUTE395->setFromField("fraction_changed");
ROUTE395->setFromNode("KickTimer");
ROUTE395->setToField("set_fraction");
ROUTE395->setToNode("l_index1_RotationInterpolator");
Scene19->addChild(ROUTE395);

ROUTE* ROUTE396 = new ROUTE();
ROUTE396->setFromField("fraction_changed");
ROUTE396->setFromNode("KickTimer");
ROUTE396->setToField("set_fraction");
ROUTE396->setToNode("l_index2_RotationInterpolator");
Scene19->addChild(ROUTE396);

ROUTE* ROUTE397 = new ROUTE();
ROUTE397->setFromField("fraction_changed");
ROUTE397->setFromNode("KickTimer");
ROUTE397->setToField("set_fraction");
ROUTE397->setToNode("l_index3_RotationInterpolator");
Scene19->addChild(ROUTE397);

ROUTE* ROUTE398 = new ROUTE();
ROUTE398->setFromField("fraction_changed");
ROUTE398->setFromNode("KickTimer");
ROUTE398->setToField("set_fraction");
ROUTE398->setToNode("l_middle0_RotationInterpolator");
Scene19->addChild(ROUTE398);

ROUTE* ROUTE399 = new ROUTE();
ROUTE399->setFromField("fraction_changed");
ROUTE399->setFromNode("KickTimer");
ROUTE399->setToField("set_fraction");
ROUTE399->setToNode("l_middle1_RotationInterpolator");
Scene19->addChild(ROUTE399);

ROUTE* ROUTE400 = new ROUTE();
ROUTE400->setFromField("fraction_changed");
ROUTE400->setFromNode("KickTimer");
ROUTE400->setToField("set_fraction");
ROUTE400->setToNode("l_middle2_RotationInterpolator");
Scene19->addChild(ROUTE400);

ROUTE* ROUTE401 = new ROUTE();
ROUTE401->setFromField("fraction_changed");
ROUTE401->setFromNode("KickTimer");
ROUTE401->setToField("set_fraction");
ROUTE401->setToNode("l_middle3_RotationInterpolator");
Scene19->addChild(ROUTE401);

ROUTE* ROUTE402 = new ROUTE();
ROUTE402->setFromField("fraction_changed");
ROUTE402->setFromNode("KickTimer");
ROUTE402->setToField("set_fraction");
ROUTE402->setToNode("l_ring0_RotationInterpolator");
Scene19->addChild(ROUTE402);

ROUTE* ROUTE403 = new ROUTE();
ROUTE403->setFromField("fraction_changed");
ROUTE403->setFromNode("KickTimer");
ROUTE403->setToField("set_fraction");
ROUTE403->setToNode("l_ring1_RotationInterpolator");
Scene19->addChild(ROUTE403);

ROUTE* ROUTE404 = new ROUTE();
ROUTE404->setFromField("fraction_changed");
ROUTE404->setFromNode("KickTimer");
ROUTE404->setToField("set_fraction");
ROUTE404->setToNode("l_ring2_RotationInterpolator");
Scene19->addChild(ROUTE404);

ROUTE* ROUTE405 = new ROUTE();
ROUTE405->setFromField("fraction_changed");
ROUTE405->setFromNode("KickTimer");
ROUTE405->setToField("set_fraction");
ROUTE405->setToNode("l_ring3_RotationInterpolator");
Scene19->addChild(ROUTE405);

ROUTE* ROUTE406 = new ROUTE();
ROUTE406->setFromField("fraction_changed");
ROUTE406->setFromNode("KickTimer");
ROUTE406->setToField("set_fraction");
ROUTE406->setToNode("l_pinky0_RotationInterpolator");
Scene19->addChild(ROUTE406);

ROUTE* ROUTE407 = new ROUTE();
ROUTE407->setFromField("fraction_changed");
ROUTE407->setFromNode("KickTimer");
ROUTE407->setToField("set_fraction");
ROUTE407->setToNode("l_pinky1_RotationInterpolator");
Scene19->addChild(ROUTE407);

ROUTE* ROUTE408 = new ROUTE();
ROUTE408->setFromField("fraction_changed");
ROUTE408->setFromNode("KickTimer");
ROUTE408->setToField("set_fraction");
ROUTE408->setToNode("l_pinky2_RotationInterpolator");
Scene19->addChild(ROUTE408);

ROUTE* ROUTE409 = new ROUTE();
ROUTE409->setFromField("fraction_changed");
ROUTE409->setFromNode("KickTimer");
ROUTE409->setToField("set_fraction");
ROUTE409->setToNode("l_pinky3_RotationInterpolator");
Scene19->addChild(ROUTE409);

ROUTE* ROUTE410 = new ROUTE();
ROUTE410->setFromField("fraction_changed");
ROUTE410->setFromNode("KickTimer");
ROUTE410->setToField("set_fraction");
ROUTE410->setToNode("r_sternoclavicular_RotationInterpolator");
Scene19->addChild(ROUTE410);

ROUTE* ROUTE411 = new ROUTE();
ROUTE411->setFromField("fraction_changed");
ROUTE411->setFromNode("KickTimer");
ROUTE411->setToField("set_fraction");
ROUTE411->setToNode("r_acromioclavicular_RotationInterpolator");
Scene19->addChild(ROUTE411);

ROUTE* ROUTE412 = new ROUTE();
ROUTE412->setFromField("fraction_changed");
ROUTE412->setFromNode("KickTimer");
ROUTE412->setToField("set_fraction");
ROUTE412->setToNode("r_shoulder_RotationInterpolator");
Scene19->addChild(ROUTE412);

ROUTE* ROUTE413 = new ROUTE();
ROUTE413->setFromField("fraction_changed");
ROUTE413->setFromNode("KickTimer");
ROUTE413->setToField("set_fraction");
ROUTE413->setToNode("r_elbow_RotationInterpolator");
Scene19->addChild(ROUTE413);

ROUTE* ROUTE414 = new ROUTE();
ROUTE414->setFromField("fraction_changed");
ROUTE414->setFromNode("KickTimer");
ROUTE414->setToField("set_fraction");
ROUTE414->setToNode("r_wrist_RotationInterpolator");
Scene19->addChild(ROUTE414);

ROUTE* ROUTE415 = new ROUTE();
ROUTE415->setFromField("fraction_changed");
ROUTE415->setFromNode("KickTimer");
ROUTE415->setToField("set_fraction");
ROUTE415->setToNode("r_thumb1_RotationInterpolator");
Scene19->addChild(ROUTE415);

ROUTE* ROUTE416 = new ROUTE();
ROUTE416->setFromField("fraction_changed");
ROUTE416->setFromNode("KickTimer");
ROUTE416->setToField("set_fraction");
ROUTE416->setToNode("r_thumb2_RotationInterpolator");
Scene19->addChild(ROUTE416);

ROUTE* ROUTE417 = new ROUTE();
ROUTE417->setFromField("fraction_changed");
ROUTE417->setFromNode("KickTimer");
ROUTE417->setToField("set_fraction");
ROUTE417->setToNode("r_thumb3_RotationInterpolator");
Scene19->addChild(ROUTE417);

ROUTE* ROUTE418 = new ROUTE();
ROUTE418->setFromField("fraction_changed");
ROUTE418->setFromNode("KickTimer");
ROUTE418->setToField("set_fraction");
ROUTE418->setToNode("r_index0_RotationInterpolator");
Scene19->addChild(ROUTE418);

ROUTE* ROUTE419 = new ROUTE();
ROUTE419->setFromField("fraction_changed");
ROUTE419->setFromNode("KickTimer");
ROUTE419->setToField("set_fraction");
ROUTE419->setToNode("r_index1_RotationInterpolator");
Scene19->addChild(ROUTE419);

ROUTE* ROUTE420 = new ROUTE();
ROUTE420->setFromField("fraction_changed");
ROUTE420->setFromNode("KickTimer");
ROUTE420->setToField("set_fraction");
ROUTE420->setToNode("r_index2_RotationInterpolator");
Scene19->addChild(ROUTE420);

ROUTE* ROUTE421 = new ROUTE();
ROUTE421->setFromField("fraction_changed");
ROUTE421->setFromNode("KickTimer");
ROUTE421->setToField("set_fraction");
ROUTE421->setToNode("r_index3_RotationInterpolator");
Scene19->addChild(ROUTE421);

ROUTE* ROUTE422 = new ROUTE();
ROUTE422->setFromField("fraction_changed");
ROUTE422->setFromNode("KickTimer");
ROUTE422->setToField("set_fraction");
ROUTE422->setToNode("r_middle0_RotationInterpolator");
Scene19->addChild(ROUTE422);

ROUTE* ROUTE423 = new ROUTE();
ROUTE423->setFromField("fraction_changed");
ROUTE423->setFromNode("KickTimer");
ROUTE423->setToField("set_fraction");
ROUTE423->setToNode("r_middle1_RotationInterpolator");
Scene19->addChild(ROUTE423);

ROUTE* ROUTE424 = new ROUTE();
ROUTE424->setFromField("fraction_changed");
ROUTE424->setFromNode("KickTimer");
ROUTE424->setToField("set_fraction");
ROUTE424->setToNode("r_middle2_RotationInterpolator");
Scene19->addChild(ROUTE424);

ROUTE* ROUTE425 = new ROUTE();
ROUTE425->setFromField("fraction_changed");
ROUTE425->setFromNode("KickTimer");
ROUTE425->setToField("set_fraction");
ROUTE425->setToNode("r_middle3_RotationInterpolator");
Scene19->addChild(ROUTE425);

ROUTE* ROUTE426 = new ROUTE();
ROUTE426->setFromField("fraction_changed");
ROUTE426->setFromNode("KickTimer");
ROUTE426->setToField("set_fraction");
ROUTE426->setToNode("r_ring0_RotationInterpolator");
Scene19->addChild(ROUTE426);

ROUTE* ROUTE427 = new ROUTE();
ROUTE427->setFromField("fraction_changed");
ROUTE427->setFromNode("KickTimer");
ROUTE427->setToField("set_fraction");
ROUTE427->setToNode("r_ring1_RotationInterpolator");
Scene19->addChild(ROUTE427);

ROUTE* ROUTE428 = new ROUTE();
ROUTE428->setFromField("fraction_changed");
ROUTE428->setFromNode("KickTimer");
ROUTE428->setToField("set_fraction");
ROUTE428->setToNode("r_ring2_RotationInterpolator");
Scene19->addChild(ROUTE428);

ROUTE* ROUTE429 = new ROUTE();
ROUTE429->setFromField("fraction_changed");
ROUTE429->setFromNode("KickTimer");
ROUTE429->setToField("set_fraction");
ROUTE429->setToNode("r_ring3_RotationInterpolator");
Scene19->addChild(ROUTE429);

ROUTE* ROUTE430 = new ROUTE();
ROUTE430->setFromField("fraction_changed");
ROUTE430->setFromNode("KickTimer");
ROUTE430->setToField("set_fraction");
ROUTE430->setToNode("r_pinky0_RotationInterpolator");
Scene19->addChild(ROUTE430);

ROUTE* ROUTE431 = new ROUTE();
ROUTE431->setFromField("fraction_changed");
ROUTE431->setFromNode("KickTimer");
ROUTE431->setToField("set_fraction");
ROUTE431->setToNode("r_pinky1_RotationInterpolator");
Scene19->addChild(ROUTE431);

ROUTE* ROUTE432 = new ROUTE();
ROUTE432->setFromField("fraction_changed");
ROUTE432->setFromNode("KickTimer");
ROUTE432->setToField("set_fraction");
ROUTE432->setToNode("r_pinky2_RotationInterpolator");
Scene19->addChild(ROUTE432);

ROUTE* ROUTE433 = new ROUTE();
ROUTE433->setFromField("fraction_changed");
ROUTE433->setFromNode("KickTimer");
ROUTE433->setToField("set_fraction");
ROUTE433->setToNode("r_pinky3_RotationInterpolator");
Scene19->addChild(ROUTE433);

//Routes from Interpolators to Joe_ model Joints
ROUTE* ROUTE434 = new ROUTE();
ROUTE434->setFromField("value_changed");
ROUTE434->setFromNode("HumanoidRoot_RotationInterpolator");
ROUTE434->setToField("set_rotation");
ROUTE434->setToNode("Joe_HumanoidRoot");
Scene19->addChild(ROUTE434);

ROUTE* ROUTE435 = new ROUTE();
ROUTE435->setFromField("value_changed");
ROUTE435->setFromNode("HumanoidRoot_TranslationInterpolator");
ROUTE435->setToField("set_translation");
ROUTE435->setToNode("Joe_HumanoidRoot");
Scene19->addChild(ROUTE435);

ROUTE* ROUTE436 = new ROUTE();
ROUTE436->setFromField("value_changed");
ROUTE436->setFromNode("sacroiliac_RotationInterpolator");
ROUTE436->setToField("set_rotation");
ROUTE436->setToNode("Joe_sacroiliac");
Scene19->addChild(ROUTE436);

ROUTE* ROUTE437 = new ROUTE();
ROUTE437->setFromField("value_changed");
ROUTE437->setFromNode("l_hip_RotationInterpolator");
ROUTE437->setToField("set_rotation");
ROUTE437->setToNode("Joe_l_hip");
Scene19->addChild(ROUTE437);

ROUTE* ROUTE438 = new ROUTE();
ROUTE438->setFromField("value_changed");
ROUTE438->setFromNode("l_knee_RotationInterpolator");
ROUTE438->setToField("set_rotation");
ROUTE438->setToNode("Joe_l_knee");
Scene19->addChild(ROUTE438);

ROUTE* ROUTE439 = new ROUTE();
ROUTE439->setFromField("value_changed");
ROUTE439->setFromNode("l_ankle_RotationInterpolator");
ROUTE439->setToField("set_rotation");
ROUTE439->setToNode("Joe_l_ankle");
Scene19->addChild(ROUTE439);

ROUTE* ROUTE440 = new ROUTE();
ROUTE440->setFromField("value_changed");
ROUTE440->setFromNode("l_subtalar_RotationInterpolator");
ROUTE440->setToField("set_rotation");
ROUTE440->setToNode("Joe_l_subtalar");
Scene19->addChild(ROUTE440);

ROUTE* ROUTE441 = new ROUTE();
ROUTE441->setFromField("value_changed");
ROUTE441->setFromNode("l_midtarsal_RotationInterpolator");
ROUTE441->setToField("set_rotation");
ROUTE441->setToNode("Joe_l_midtarsal");
Scene19->addChild(ROUTE441);

ROUTE* ROUTE442 = new ROUTE();
ROUTE442->setFromField("value_changed");
ROUTE442->setFromNode("l_metatarsal_RotationInterpolator");
ROUTE442->setToField("set_rotation");
ROUTE442->setToNode("Joe_l_metatarsal");
Scene19->addChild(ROUTE442);

ROUTE* ROUTE443 = new ROUTE();
ROUTE443->setFromField("value_changed");
ROUTE443->setFromNode("r_hip_RotationInterpolator");
ROUTE443->setToField("set_rotation");
ROUTE443->setToNode("Joe_r_hip");
Scene19->addChild(ROUTE443);

ROUTE* ROUTE444 = new ROUTE();
ROUTE444->setFromField("value_changed");
ROUTE444->setFromNode("r_knee_RotationInterpolator");
ROUTE444->setToField("set_rotation");
ROUTE444->setToNode("Joe_r_knee");
Scene19->addChild(ROUTE444);

ROUTE* ROUTE445 = new ROUTE();
ROUTE445->setFromField("value_changed");
ROUTE445->setFromNode("r_ankle_RotationInterpolator");
ROUTE445->setToField("set_rotation");
ROUTE445->setToNode("Joe_r_ankle");
Scene19->addChild(ROUTE445);

ROUTE* ROUTE446 = new ROUTE();
ROUTE446->setFromField("value_changed");
ROUTE446->setFromNode("r_subtalar_RotationInterpolator");
ROUTE446->setToField("set_rotation");
ROUTE446->setToNode("Joe_r_subtalar");
Scene19->addChild(ROUTE446);

ROUTE* ROUTE447 = new ROUTE();
ROUTE447->setFromField("value_changed");
ROUTE447->setFromNode("r_midtarsal_RotationInterpolator");
ROUTE447->setToField("set_rotation");
ROUTE447->setToNode("Joe_r_midtarsal");
Scene19->addChild(ROUTE447);

ROUTE* ROUTE448 = new ROUTE();
ROUTE448->setFromField("value_changed");
ROUTE448->setFromNode("r_metatarsal_RotationInterpolator");
ROUTE448->setToField("set_rotation");
ROUTE448->setToNode("Joe_r_metatarsal");
Scene19->addChild(ROUTE448);

ROUTE* ROUTE449 = new ROUTE();
ROUTE449->setFromField("value_changed");
ROUTE449->setFromNode("vl5_RotationInterpolator");
ROUTE449->setToField("set_rotation");
ROUTE449->setToNode("Joe_vl5");
Scene19->addChild(ROUTE449);

ROUTE* ROUTE450 = new ROUTE();
ROUTE450->setFromField("value_changed");
ROUTE450->setFromNode("vl4_RotationInterpolator");
ROUTE450->setToField("set_rotation");
ROUTE450->setToNode("Joe_vl4");
Scene19->addChild(ROUTE450);

ROUTE* ROUTE451 = new ROUTE();
ROUTE451->setFromField("value_changed");
ROUTE451->setFromNode("vl3_RotationInterpolator");
ROUTE451->setToField("set_rotation");
ROUTE451->setToNode("Joe_vl3");
Scene19->addChild(ROUTE451);

ROUTE* ROUTE452 = new ROUTE();
ROUTE452->setFromField("value_changed");
ROUTE452->setFromNode("vl2_RotationInterpolator");
ROUTE452->setToField("set_rotation");
ROUTE452->setToNode("Joe_vl2");
Scene19->addChild(ROUTE452);

ROUTE* ROUTE453 = new ROUTE();
ROUTE453->setFromField("value_changed");
ROUTE453->setFromNode("vl1_RotationInterpolator");
ROUTE453->setToField("set_rotation");
ROUTE453->setToNode("Joe_vl1");
Scene19->addChild(ROUTE453);

ROUTE* ROUTE454 = new ROUTE();
ROUTE454->setFromField("value_changed");
ROUTE454->setFromNode("vt12_RotationInterpolator");
ROUTE454->setToField("set_rotation");
ROUTE454->setToNode("Joe_vt12");
Scene19->addChild(ROUTE454);

ROUTE* ROUTE455 = new ROUTE();
ROUTE455->setFromField("value_changed");
ROUTE455->setFromNode("vt11_RotationInterpolator");
ROUTE455->setToField("set_rotation");
ROUTE455->setToNode("Joe_vt11");
Scene19->addChild(ROUTE455);

ROUTE* ROUTE456 = new ROUTE();
ROUTE456->setFromField("value_changed");
ROUTE456->setFromNode("vt10_RotationInterpolator");
ROUTE456->setToField("set_rotation");
ROUTE456->setToNode("Joe_vt10");
Scene19->addChild(ROUTE456);

ROUTE* ROUTE457 = new ROUTE();
ROUTE457->setFromField("value_changed");
ROUTE457->setFromNode("vt9_RotationInterpolator");
ROUTE457->setToField("set_rotation");
ROUTE457->setToNode("Joe_vt9");
Scene19->addChild(ROUTE457);

ROUTE* ROUTE458 = new ROUTE();
ROUTE458->setFromField("value_changed");
ROUTE458->setFromNode("vt8_RotationInterpolator");
ROUTE458->setToField("set_rotation");
ROUTE458->setToNode("Joe_vt8");
Scene19->addChild(ROUTE458);

ROUTE* ROUTE459 = new ROUTE();
ROUTE459->setFromField("value_changed");
ROUTE459->setFromNode("vt7_RotationInterpolator");
ROUTE459->setToField("set_rotation");
ROUTE459->setToNode("Joe_vt7");
Scene19->addChild(ROUTE459);

ROUTE* ROUTE460 = new ROUTE();
ROUTE460->setFromField("value_changed");
ROUTE460->setFromNode("vt6_RotationInterpolator");
ROUTE460->setToField("set_rotation");
ROUTE460->setToNode("Joe_vt6");
Scene19->addChild(ROUTE460);

ROUTE* ROUTE461 = new ROUTE();
ROUTE461->setFromField("value_changed");
ROUTE461->setFromNode("vt5_RotationInterpolator");
ROUTE461->setToField("set_rotation");
ROUTE461->setToNode("Joe_vt5");
Scene19->addChild(ROUTE461);

ROUTE* ROUTE462 = new ROUTE();
ROUTE462->setFromField("value_changed");
ROUTE462->setFromNode("vt4_RotationInterpolator");
ROUTE462->setToField("set_rotation");
ROUTE462->setToNode("Joe_vt4");
Scene19->addChild(ROUTE462);

ROUTE* ROUTE463 = new ROUTE();
ROUTE463->setFromField("value_changed");
ROUTE463->setFromNode("vt3_RotationInterpolator");
ROUTE463->setToField("set_rotation");
ROUTE463->setToNode("Joe_vt3");
Scene19->addChild(ROUTE463);

ROUTE* ROUTE464 = new ROUTE();
ROUTE464->setFromField("value_changed");
ROUTE464->setFromNode("vt2_RotationInterpolator");
ROUTE464->setToField("set_rotation");
ROUTE464->setToNode("Joe_vt2");
Scene19->addChild(ROUTE464);

ROUTE* ROUTE465 = new ROUTE();
ROUTE465->setFromField("value_changed");
ROUTE465->setFromNode("vt1_RotationInterpolator");
ROUTE465->setToField("set_rotation");
ROUTE465->setToNode("Joe_vt1");
Scene19->addChild(ROUTE465);

ROUTE* ROUTE466 = new ROUTE();
ROUTE466->setFromField("value_changed");
ROUTE466->setFromNode("vc7_RotationInterpolator");
ROUTE466->setToField("set_rotation");
ROUTE466->setToNode("Joe_vc7");
Scene19->addChild(ROUTE466);

ROUTE* ROUTE467 = new ROUTE();
ROUTE467->setFromField("value_changed");
ROUTE467->setFromNode("vc6_RotationInterpolator");
ROUTE467->setToField("set_rotation");
ROUTE467->setToNode("Joe_vc6");
Scene19->addChild(ROUTE467);

ROUTE* ROUTE468 = new ROUTE();
ROUTE468->setFromField("value_changed");
ROUTE468->setFromNode("vc5_RotationInterpolator");
ROUTE468->setToField("set_rotation");
ROUTE468->setToNode("Joe_vc5");
Scene19->addChild(ROUTE468);

ROUTE* ROUTE469 = new ROUTE();
ROUTE469->setFromField("value_changed");
ROUTE469->setFromNode("vc4_RotationInterpolator");
ROUTE469->setToField("set_rotation");
ROUTE469->setToNode("Joe_vc4");
Scene19->addChild(ROUTE469);

ROUTE* ROUTE470 = new ROUTE();
ROUTE470->setFromField("value_changed");
ROUTE470->setFromNode("vc3_RotationInterpolator");
ROUTE470->setToField("set_rotation");
ROUTE470->setToNode("Joe_vc3");
Scene19->addChild(ROUTE470);

ROUTE* ROUTE471 = new ROUTE();
ROUTE471->setFromField("value_changed");
ROUTE471->setFromNode("vc2_RotationInterpolator");
ROUTE471->setToField("set_rotation");
ROUTE471->setToNode("Joe_vc2");
Scene19->addChild(ROUTE471);

ROUTE* ROUTE472 = new ROUTE();
ROUTE472->setFromField("value_changed");
ROUTE472->setFromNode("vc1_RotationInterpolator");
ROUTE472->setToField("set_rotation");
ROUTE472->setToNode("Joe_vc1");
Scene19->addChild(ROUTE472);

ROUTE* ROUTE473 = new ROUTE();
ROUTE473->setFromField("value_changed");
ROUTE473->setFromNode("skullbase_RotationInterpolator");
ROUTE473->setToField("set_rotation");
ROUTE473->setToNode("Joe_skullbase");
Scene19->addChild(ROUTE473);

ROUTE* ROUTE474 = new ROUTE();
ROUTE474->setFromField("value_changed");
ROUTE474->setFromNode("l_eyelid_joint_RotationInterpolator");
ROUTE474->setToField("set_rotation");
ROUTE474->setToNode("Joe_l_eyelid_joint");
Scene19->addChild(ROUTE474);

ROUTE* ROUTE475 = new ROUTE();
ROUTE475->setFromField("value_changed");
ROUTE475->setFromNode("l_eyeball_joint_RotationInterpolator");
ROUTE475->setToField("set_rotation");
ROUTE475->setToNode("Joe_l_eyeball_joint");
Scene19->addChild(ROUTE475);

ROUTE* ROUTE476 = new ROUTE();
ROUTE476->setFromField("value_changed");
ROUTE476->setFromNode("l_eyebrow_joint_RotationInterpolator");
ROUTE476->setToField("set_rotation");
ROUTE476->setToNode("Joe_l_eyebrow_joint");
Scene19->addChild(ROUTE476);

ROUTE* ROUTE477 = new ROUTE();
ROUTE477->setFromField("value_changed");
ROUTE477->setFromNode("r_eyelid_joint_RotationInterpolator");
ROUTE477->setToField("set_rotation");
ROUTE477->setToNode("Joe_r_eyelid_joint");
Scene19->addChild(ROUTE477);

ROUTE* ROUTE478 = new ROUTE();
ROUTE478->setFromField("value_changed");
ROUTE478->setFromNode("r_eyeball_joint_RotationInterpolator");
ROUTE478->setToField("set_rotation");
ROUTE478->setToNode("Joe_r_eyeball_joint");
Scene19->addChild(ROUTE478);

ROUTE* ROUTE479 = new ROUTE();
ROUTE479->setFromField("value_changed");
ROUTE479->setFromNode("r_eyebrow_joint_RotationInterpolator");
ROUTE479->setToField("set_rotation");
ROUTE479->setToNode("Joe_r_eyebrow_joint");
Scene19->addChild(ROUTE479);

ROUTE* ROUTE480 = new ROUTE();
ROUTE480->setFromField("value_changed");
ROUTE480->setFromNode("temporomandibular_RotationInterpolator");
ROUTE480->setToField("set_rotation");
ROUTE480->setToNode("Joe_temporomandibular");
Scene19->addChild(ROUTE480);

ROUTE* ROUTE481 = new ROUTE();
ROUTE481->setFromField("value_changed");
ROUTE481->setFromNode("l_sternoclavicular_RotationInterpolator");
ROUTE481->setToField("set_rotation");
ROUTE481->setToNode("Joe_l_sternoclavicular");
Scene19->addChild(ROUTE481);

ROUTE* ROUTE482 = new ROUTE();
ROUTE482->setFromField("value_changed");
ROUTE482->setFromNode("l_acromioclavicular_RotationInterpolator");
ROUTE482->setToField("set_rotation");
ROUTE482->setToNode("Joe_l_acromioclavicular");
Scene19->addChild(ROUTE482);

ROUTE* ROUTE483 = new ROUTE();
ROUTE483->setFromField("value_changed");
ROUTE483->setFromNode("l_shoulder_RotationInterpolator");
ROUTE483->setToField("set_rotation");
ROUTE483->setToNode("Joe_l_shoulder");
Scene19->addChild(ROUTE483);

ROUTE* ROUTE484 = new ROUTE();
ROUTE484->setFromField("value_changed");
ROUTE484->setFromNode("l_elbow_RotationInterpolator");
ROUTE484->setToField("set_rotation");
ROUTE484->setToNode("Joe_l_elbow");
Scene19->addChild(ROUTE484);

ROUTE* ROUTE485 = new ROUTE();
ROUTE485->setFromField("value_changed");
ROUTE485->setFromNode("l_wrist_RotationInterpolator");
ROUTE485->setToField("set_rotation");
ROUTE485->setToNode("Joe_l_wrist");
Scene19->addChild(ROUTE485);

ROUTE* ROUTE486 = new ROUTE();
ROUTE486->setFromField("value_changed");
ROUTE486->setFromNode("l_thumb1_RotationInterpolator");
ROUTE486->setToField("set_rotation");
ROUTE486->setToNode("Joe_l_thumb1");
Scene19->addChild(ROUTE486);

ROUTE* ROUTE487 = new ROUTE();
ROUTE487->setFromField("value_changed");
ROUTE487->setFromNode("l_thumb2_RotationInterpolator");
ROUTE487->setToField("set_rotation");
ROUTE487->setToNode("Joe_l_thumb2");
Scene19->addChild(ROUTE487);

ROUTE* ROUTE488 = new ROUTE();
ROUTE488->setFromField("value_changed");
ROUTE488->setFromNode("l_thumb3_RotationInterpolator");
ROUTE488->setToField("set_rotation");
ROUTE488->setToNode("Joe_l_thumb3");
Scene19->addChild(ROUTE488);

ROUTE* ROUTE489 = new ROUTE();
ROUTE489->setFromField("value_changed");
ROUTE489->setFromNode("l_index0_RotationInterpolator");
ROUTE489->setToField("set_rotation");
ROUTE489->setToNode("Joe_l_index0");
Scene19->addChild(ROUTE489);

ROUTE* ROUTE490 = new ROUTE();
ROUTE490->setFromField("value_changed");
ROUTE490->setFromNode("l_index1_RotationInterpolator");
ROUTE490->setToField("set_rotation");
ROUTE490->setToNode("Joe_l_index1");
Scene19->addChild(ROUTE490);

ROUTE* ROUTE491 = new ROUTE();
ROUTE491->setFromField("value_changed");
ROUTE491->setFromNode("l_index2_RotationInterpolator");
ROUTE491->setToField("set_rotation");
ROUTE491->setToNode("Joe_l_index2");
Scene19->addChild(ROUTE491);

ROUTE* ROUTE492 = new ROUTE();
ROUTE492->setFromField("value_changed");
ROUTE492->setFromNode("l_index3_RotationInterpolator");
ROUTE492->setToField("set_rotation");
ROUTE492->setToNode("Joe_l_index3");
Scene19->addChild(ROUTE492);

ROUTE* ROUTE493 = new ROUTE();
ROUTE493->setFromField("value_changed");
ROUTE493->setFromNode("l_middle0_RotationInterpolator");
ROUTE493->setToField("set_rotation");
ROUTE493->setToNode("Joe_l_middle0");
Scene19->addChild(ROUTE493);

ROUTE* ROUTE494 = new ROUTE();
ROUTE494->setFromField("value_changed");
ROUTE494->setFromNode("l_middle1_RotationInterpolator");
ROUTE494->setToField("set_rotation");
ROUTE494->setToNode("Joe_l_middle1");
Scene19->addChild(ROUTE494);

ROUTE* ROUTE495 = new ROUTE();
ROUTE495->setFromField("value_changed");
ROUTE495->setFromNode("l_middle2_RotationInterpolator");
ROUTE495->setToField("set_rotation");
ROUTE495->setToNode("Joe_l_middle2");
Scene19->addChild(ROUTE495);

ROUTE* ROUTE496 = new ROUTE();
ROUTE496->setFromField("value_changed");
ROUTE496->setFromNode("l_middle3_RotationInterpolator");
ROUTE496->setToField("set_rotation");
ROUTE496->setToNode("Joe_l_middle3");
Scene19->addChild(ROUTE496);

ROUTE* ROUTE497 = new ROUTE();
ROUTE497->setFromField("value_changed");
ROUTE497->setFromNode("l_ring0_RotationInterpolator");
ROUTE497->setToField("set_rotation");
ROUTE497->setToNode("Joe_l_ring0");
Scene19->addChild(ROUTE497);

ROUTE* ROUTE498 = new ROUTE();
ROUTE498->setFromField("value_changed");
ROUTE498->setFromNode("l_ring1_RotationInterpolator");
ROUTE498->setToField("set_rotation");
ROUTE498->setToNode("Joe_l_ring1");
Scene19->addChild(ROUTE498);

ROUTE* ROUTE499 = new ROUTE();
ROUTE499->setFromField("value_changed");
ROUTE499->setFromNode("l_ring2_RotationInterpolator");
ROUTE499->setToField("set_rotation");
ROUTE499->setToNode("Joe_l_ring2");
Scene19->addChild(ROUTE499);

ROUTE* ROUTE500 = new ROUTE();
ROUTE500->setFromField("value_changed");
ROUTE500->setFromNode("l_ring3_RotationInterpolator");
ROUTE500->setToField("set_rotation");
ROUTE500->setToNode("Joe_l_ring3");
Scene19->addChild(ROUTE500);

ROUTE* ROUTE501 = new ROUTE();
ROUTE501->setFromField("value_changed");
ROUTE501->setFromNode("l_pinky0_RotationInterpolator");
ROUTE501->setToField("set_rotation");
ROUTE501->setToNode("Joe_l_pinky0");
Scene19->addChild(ROUTE501);

ROUTE* ROUTE502 = new ROUTE();
ROUTE502->setFromField("value_changed");
ROUTE502->setFromNode("l_pinky1_RotationInterpolator");
ROUTE502->setToField("set_rotation");
ROUTE502->setToNode("Joe_l_pinky1");
Scene19->addChild(ROUTE502);

ROUTE* ROUTE503 = new ROUTE();
ROUTE503->setFromField("value_changed");
ROUTE503->setFromNode("l_pinky2_RotationInterpolator");
ROUTE503->setToField("set_rotation");
ROUTE503->setToNode("Joe_l_pinky2");
Scene19->addChild(ROUTE503);

ROUTE* ROUTE504 = new ROUTE();
ROUTE504->setFromField("value_changed");
ROUTE504->setFromNode("l_pinky3_RotationInterpolator");
ROUTE504->setToField("set_rotation");
ROUTE504->setToNode("Joe_l_pinky3");
Scene19->addChild(ROUTE504);

ROUTE* ROUTE505 = new ROUTE();
ROUTE505->setFromField("value_changed");
ROUTE505->setFromNode("r_sternoclavicular_RotationInterpolator");
ROUTE505->setToField("set_rotation");
ROUTE505->setToNode("Joe_r_sternoclavicular");
Scene19->addChild(ROUTE505);

ROUTE* ROUTE506 = new ROUTE();
ROUTE506->setFromField("value_changed");
ROUTE506->setFromNode("r_acromioclavicular_RotationInterpolator");
ROUTE506->setToField("set_rotation");
ROUTE506->setToNode("Joe_r_acromioclavicular");
Scene19->addChild(ROUTE506);

ROUTE* ROUTE507 = new ROUTE();
ROUTE507->setFromField("value_changed");
ROUTE507->setFromNode("r_shoulder_RotationInterpolator");
ROUTE507->setToField("set_rotation");
ROUTE507->setToNode("Joe_r_shoulder");
Scene19->addChild(ROUTE507);

ROUTE* ROUTE508 = new ROUTE();
ROUTE508->setFromField("value_changed");
ROUTE508->setFromNode("r_elbow_RotationInterpolator");
ROUTE508->setToField("set_rotation");
ROUTE508->setToNode("Joe_r_elbow");
Scene19->addChild(ROUTE508);

ROUTE* ROUTE509 = new ROUTE();
ROUTE509->setFromField("value_changed");
ROUTE509->setFromNode("r_wrist_RotationInterpolator");
ROUTE509->setToField("set_rotation");
ROUTE509->setToNode("Joe_r_wrist");
Scene19->addChild(ROUTE509);

ROUTE* ROUTE510 = new ROUTE();
ROUTE510->setFromField("value_changed");
ROUTE510->setFromNode("r_thumb1_RotationInterpolator");
ROUTE510->setToField("set_rotation");
ROUTE510->setToNode("Joe_r_thumb1");
Scene19->addChild(ROUTE510);

ROUTE* ROUTE511 = new ROUTE();
ROUTE511->setFromField("value_changed");
ROUTE511->setFromNode("r_thumb2_RotationInterpolator");
ROUTE511->setToField("set_rotation");
ROUTE511->setToNode("Joe_r_thumb2");
Scene19->addChild(ROUTE511);

ROUTE* ROUTE512 = new ROUTE();
ROUTE512->setFromField("value_changed");
ROUTE512->setFromNode("r_thumb3_RotationInterpolator");
ROUTE512->setToField("set_rotation");
ROUTE512->setToNode("Joe_r_thumb3");
Scene19->addChild(ROUTE512);

ROUTE* ROUTE513 = new ROUTE();
ROUTE513->setFromField("value_changed");
ROUTE513->setFromNode("r_index0_RotationInterpolator");
ROUTE513->setToField("set_rotation");
ROUTE513->setToNode("Joe_r_index0");
Scene19->addChild(ROUTE513);

ROUTE* ROUTE514 = new ROUTE();
ROUTE514->setFromField("value_changed");
ROUTE514->setFromNode("r_index1_RotationInterpolator");
ROUTE514->setToField("set_rotation");
ROUTE514->setToNode("Joe_r_index1");
Scene19->addChild(ROUTE514);

ROUTE* ROUTE515 = new ROUTE();
ROUTE515->setFromField("value_changed");
ROUTE515->setFromNode("r_index2_RotationInterpolator");
ROUTE515->setToField("set_rotation");
ROUTE515->setToNode("Joe_r_index2");
Scene19->addChild(ROUTE515);

ROUTE* ROUTE516 = new ROUTE();
ROUTE516->setFromField("value_changed");
ROUTE516->setFromNode("r_index3_RotationInterpolator");
ROUTE516->setToField("set_rotation");
ROUTE516->setToNode("Joe_r_index3");
Scene19->addChild(ROUTE516);

ROUTE* ROUTE517 = new ROUTE();
ROUTE517->setFromField("value_changed");
ROUTE517->setFromNode("r_middle0_RotationInterpolator");
ROUTE517->setToField("set_rotation");
ROUTE517->setToNode("Joe_r_middle0");
Scene19->addChild(ROUTE517);

ROUTE* ROUTE518 = new ROUTE();
ROUTE518->setFromField("value_changed");
ROUTE518->setFromNode("r_middle1_RotationInterpolator");
ROUTE518->setToField("set_rotation");
ROUTE518->setToNode("Joe_r_middle1");
Scene19->addChild(ROUTE518);

ROUTE* ROUTE519 = new ROUTE();
ROUTE519->setFromField("value_changed");
ROUTE519->setFromNode("r_middle2_RotationInterpolator");
ROUTE519->setToField("set_rotation");
ROUTE519->setToNode("Joe_r_middle2");
Scene19->addChild(ROUTE519);

ROUTE* ROUTE520 = new ROUTE();
ROUTE520->setFromField("value_changed");
ROUTE520->setFromNode("r_middle3_RotationInterpolator");
ROUTE520->setToField("set_rotation");
ROUTE520->setToNode("Joe_r_middle3");
Scene19->addChild(ROUTE520);

ROUTE* ROUTE521 = new ROUTE();
ROUTE521->setFromField("value_changed");
ROUTE521->setFromNode("r_ring0_RotationInterpolator");
ROUTE521->setToField("set_rotation");
ROUTE521->setToNode("Joe_r_ring0");
Scene19->addChild(ROUTE521);

ROUTE* ROUTE522 = new ROUTE();
ROUTE522->setFromField("value_changed");
ROUTE522->setFromNode("r_ring1_RotationInterpolator");
ROUTE522->setToField("set_rotation");
ROUTE522->setToNode("Joe_r_ring1");
Scene19->addChild(ROUTE522);

ROUTE* ROUTE523 = new ROUTE();
ROUTE523->setFromField("value_changed");
ROUTE523->setFromNode("r_ring2_RotationInterpolator");
ROUTE523->setToField("set_rotation");
ROUTE523->setToNode("Joe_r_ring2");
Scene19->addChild(ROUTE523);

ROUTE* ROUTE524 = new ROUTE();
ROUTE524->setFromField("value_changed");
ROUTE524->setFromNode("r_ring3_RotationInterpolator");
ROUTE524->setToField("set_rotation");
ROUTE524->setToNode("Joe_r_ring3");
Scene19->addChild(ROUTE524);

ROUTE* ROUTE525 = new ROUTE();
ROUTE525->setFromField("value_changed");
ROUTE525->setFromNode("r_pinky0_RotationInterpolator");
ROUTE525->setToField("set_rotation");
ROUTE525->setToNode("Joe_r_pinky0");
Scene19->addChild(ROUTE525);

ROUTE* ROUTE526 = new ROUTE();
ROUTE526->setFromField("value_changed");
ROUTE526->setFromNode("r_pinky1_RotationInterpolator");
ROUTE526->setToField("set_rotation");
ROUTE526->setToNode("Joe_r_pinky1");
Scene19->addChild(ROUTE526);

ROUTE* ROUTE527 = new ROUTE();
ROUTE527->setFromField("value_changed");
ROUTE527->setFromNode("r_pinky2_RotationInterpolator");
ROUTE527->setToField("set_rotation");
ROUTE527->setToNode("Joe_r_pinky2");
Scene19->addChild(ROUTE527);

ROUTE* ROUTE528 = new ROUTE();
ROUTE528->setFromField("value_changed");
ROUTE528->setFromNode("r_pinky3_RotationInterpolator");
ROUTE528->setToField("set_rotation");
ROUTE528->setToNode("Joe_r_pinky3");
Scene19->addChild(ROUTE528);

Group* Group529 = new Group();
Group529->setDEF("DisplacersAnimationGroup");
//TimeSensor DEF='skull_tipInterpolatorTimer' cycleInterval='5.73' loop='true' enabled='true'></TimeSensor
ScalarInterpolator* ScalarInterpolator530 = new ScalarInterpolator();
ScalarInterpolator530->setDEF("skull_tipInterpolator");
ScalarInterpolator530->setKey(new float[11]{0,0.1,0.2,0.35,0.6,0.7,0.85,0.88,0.94,0.97,1}, 11);
ScalarInterpolator530->setKeyValue(new float[11]{0,0,0,0,0.2,0.4,1,0,1,0.4,0}, 11);
Group529->addChild(ScalarInterpolator530);

ROUTE* ROUTE531 = new ROUTE();
ROUTE531->setFromField("fraction_changed");
ROUTE531->setFromNode("KickTimer");
ROUTE531->setToField("set_fraction");
ROUTE531->setToNode("skull_tipInterpolator");
Group529->addChild(ROUTE531);

ROUTE* ROUTE532 = new ROUTE();
ROUTE532->setFromField("value_changed");
ROUTE532->setFromNode("skull_tipInterpolator");
ROUTE532->setToField("weight");
ROUTE532->setToNode("Joe_skull_tip_raiser_action");
Group529->addChild(ROUTE532);

Scene19->addChild(Group529);

Group* Group533 = new Group();
Group533->setDEF("SkinTextureTransformAnimationGroup");
ScalarInterpolator* ScalarInterpolator534 = new ScalarInterpolator();
ScalarInterpolator534->setDEF("SkinTextureTransformInterpolator");
ScalarInterpolator534->setKey(new float[8]{0,0.2,0.4,0.5,0.6,0.7,0.8,1}, 8);
ScalarInterpolator534->setKeyValue(new float[8]{0,0,0,0,0,1,2,0}, 8);
Group533->addChild(ScalarInterpolator534);

ROUTE* ROUTE535 = new ROUTE();
ROUTE535->setFromField("fraction_changed");
ROUTE535->setFromNode("KickTimer");
ROUTE535->setToField("set_fraction");
ROUTE535->setToNode("SkinTextureTransformInterpolator");
Group533->addChild(ROUTE535);

ROUTE* ROUTE536 = new ROUTE();
ROUTE536->setFromField("value_changed");
ROUTE536->setFromNode("SkinTextureTransformInterpolator");
ROUTE536->setToField("rotation");
ROUTE536->setToNode("KickTextureTransform");
Group533->addChild(ROUTE536);

Scene19->addChild(Group533);

Group* Group537 = new Group();
Transform* Transform538 = new Transform();
Transform538->setDEF("SBall");
Transform538->setRotation(new float[4]{0.7,0,0.7,0.1});
Transform538->setScale(new float[3]{0.23,0.23,0.23});
Transform538->setTranslation(new float[3]{-0.916,0.37,-0.92});
Shape* Shape539 = new Shape();
Shape539->setDEF("ball_Shape");
Appearance* Appearance540 = new Appearance();
Appearance540->setDEF("ball_Appearance");
Material* Material541 = new Material();
Material541->setDEF("ball_Material");
Material541->setDiffuseColor(new float[3]{0.3,0.3,1});
Material541->setEmissiveColor(new float[3]{0.3,0.3,0.33});
Appearance540->setMaterial(Material541);

ImageTexture* ImageTexture542 = new ImageTexture();
ImageTexture542->setUSE("JoeSkinImageTexture");
Appearance540->setTexture(ImageTexture542);

Shape539->setAppearance(Appearance540);

IndexedFaceSet* IndexedFaceSet543 = new IndexedFaceSet();
IndexedFaceSet543->setDEF("ball_IndexedFaceSet");
IndexedFaceSet543->setCoordIndex(new int[480]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,1,-1,1,13,14,-1,1,14,2,-1,2,14,15,-1,2,15,3,-1,3,15,16,-1,3,16,4,-1,4,16,17,-1,4,17,5,-1,5,17,18,-1,5,18,6,-1,6,18,19,-1,6,19,7,-1,7,19,20,-1,7,20,8,-1,8,20,21,-1,8,21,9,-1,9,21,22,-1,9,22,10,-1,10,22,23,-1,10,23,11,-1,11,23,24,-1,11,24,12,-1,12,24,13,-1,12,13,1,-1,13,25,26,-1,13,26,14,-1,14,26,27,-1,14,27,15,-1,15,27,28,-1,15,28,16,-1,16,28,29,-1,16,29,17,-1,17,29,30,-1,17,30,18,-1,18,30,31,-1,18,31,19,-1,19,31,32,-1,19,32,20,-1,20,32,33,-1,20,33,21,-1,21,33,34,-1,21,34,22,-1,22,34,35,-1,22,35,23,-1,23,35,36,-1,23,36,24,-1,24,36,25,-1,24,25,13,-1,25,37,38,-1,25,38,26,-1,26,38,39,-1,26,39,27,-1,27,39,40,-1,27,40,28,-1,28,40,41,-1,28,41,29,-1,29,41,42,-1,29,42,30,-1,30,42,43,-1,30,43,31,-1,31,43,44,-1,31,44,32,-1,32,44,45,-1,32,45,33,-1,33,45,46,-1,33,46,34,-1,34,46,47,-1,34,47,35,-1,35,47,48,-1,35,48,36,-1,36,48,37,-1,36,37,25,-1,37,49,50,-1,37,50,38,-1,38,50,51,-1,38,51,39,-1,39,51,52,-1,39,52,40,-1,40,52,53,-1,40,53,41,-1,41,53,54,-1,41,54,42,-1,42,54,55,-1,42,55,43,-1,43,55,56,-1,43,56,44,-1,44,56,57,-1,44,57,45,-1,45,57,58,-1,45,58,46,-1,46,58,59,-1,46,59,47,-1,47,59,60,-1,47,60,48,-1,48,60,49,-1,48,49,37,-1,61,50,49,-1,61,51,50,-1,61,52,51,-1,61,53,52,-1,61,54,53,-1,61,55,54,-1,61,56,55,-1,61,57,56,-1,61,58,57,-1,61,59,58,-1,61,60,59,-1,61,49,60,-1});
Coordinate* Coordinate544 = new Coordinate();
Coordinate544->setDEF("Ball_Coordinates");
Coordinate544->setPoint(new float[186]{0,0.4675,0,0,0.4049,-0.2338,-0.1169,0.4049,-0.2024,-0.2024,0.4049,-0.1169,-0.2338,0.4049,0,-0.2024,0.4049,0.1169,-0.1169,0.4049,0.2024,0,0.4049,0.2338,0.1169,0.4049,0.2024,0.2024,0.4049,0.1169,0.2338,0.4049,0,0.2024,0.4049,-0.1169,0.1169,0.4049,-0.2024,0,0.2338,-0.4049,-0.2024,0.2338,-0.3506,-0.3506,0.2338,-0.2024,-0.4049,0.2338,0,-0.3506,0.2338,0.2024,-0.2024,0.2338,0.3506,0,0.2338,0.4049,0.2024,0.2338,0.3506,0.3506,0.2338,0.2024,0.4049,0.2338,0,0.3506,0.2338,-0.2024,0.2024,0.2338,-0.3506,0,0,-0.4675,-0.2338,0,-0.4049,-0.4049,0,-0.2338,-0.4675,0,0,-0.4049,0,0.2338,-0.2338,0,0.4049,0,0,0.4675,0.2338,0,0.4049,0.4049,0,0.2338,0.4675,0,0,0.4049,0,-0.2338,0.2338,0,-0.4049,0,-0.2338,-0.4049,-0.2024,-0.2338,-0.3506,-0.3506,-0.2338,-0.2024,-0.4049,-0.2338,0,-0.3506,-0.2338,0.2024,-0.2024,-0.2338,0.3506,0,-0.2338,0.4049,0.2024,-0.2338,0.3506,0.3506,-0.2338,0.2024,0.4049,-0.2338,0,0.3506,-0.2338,-0.2024,0.2024,-0.2338,-0.3506,0,-0.4049,-0.2338,-0.1169,-0.4049,-0.2024,-0.2024,-0.4049,-0.1169,-0.2338,-0.4049,0,-0.2024,-0.4049,0.1169,-0.1169,-0.4049,0.2024,0,-0.4049,0.2338,0.1169,-0.4049,0.2024,0.2024,-0.4049,0.1169,0.2338,-0.4049,0,0.2024,-0.4049,-0.1169,0.1169,-0.4049,-0.2024,0,-0.4675,0});
IndexedFaceSet543->setCoord(Coordinate544);

Shape539->setGeometry(IndexedFaceSet543);

Transform538->addChild(Shape539);

Viewpoint* Viewpoint545 = new Viewpoint();
Viewpoint545->setDEF("ballView_1");
Viewpoint545->setDescription("Ball View");
Transform538->addChild(Viewpoint545);

Group537->addChild(Transform538);

//Ball Animation interpolators
PositionInterpolator* PositionInterpolator546 = new PositionInterpolator();
PositionInterpolator546->setDEF("ball_TranslationInterpolator");
PositionInterpolator546->setKey(new float[4]{0,0.4,0.409,1}, 4);
PositionInterpolator546->setKeyValue(new float[12]{-1,0.4,-1,0,0.07,0,0.05,0.06,0.05,2,4,10});
Group537->addChild(PositionInterpolator546);

OrientationInterpolator* OrientationInterpolator547 = new OrientationInterpolator();
OrientationInterpolator547->setDEF("ball_RotationInterpolator");
OrientationInterpolator547->setKey(new float[5]{0,0.4,0.41,0.71,1}, 5);
OrientationInterpolator547->setKeyValue(new float[20]{1,0,1,0.25,-1,0,-1,1.35,-1,1,-1,3.35,-1,0.2,-1,3,-1,0.2,-1,3});
Group537->addChild(OrientationInterpolator547);

//Ball Animation Routes
ROUTE* ROUTE548 = new ROUTE();
ROUTE548->setFromField("fraction_changed");
ROUTE548->setFromNode("KickTimer");
ROUTE548->setToField("set_fraction");
ROUTE548->setToNode("ball_TranslationInterpolator");
Group537->addChild(ROUTE548);

ROUTE* ROUTE549 = new ROUTE();
ROUTE549->setFromField("value_changed");
ROUTE549->setFromNode("ball_TranslationInterpolator");
ROUTE549->setToField("set_translation");
ROUTE549->setToNode("SBall");
Group537->addChild(ROUTE549);

ROUTE* ROUTE550 = new ROUTE();
ROUTE550->setFromField("fraction_changed");
ROUTE550->setFromNode("KickTimer");
ROUTE550->setToField("set_fraction");
ROUTE550->setToNode("ball_RotationInterpolator");
Group537->addChild(ROUTE550);

ROUTE* ROUTE551 = new ROUTE();
ROUTE551->setFromField("value_changed");
ROUTE551->setFromNode("ball_RotationInterpolator");
ROUTE551->setToField("set_rotation");
ROUTE551->setToNode("SBall");
Group537->addChild(ROUTE551);

Scene19->addChild(Group537);

Group* Group552 = new Group();
Transform* Transform553 = new Transform();
Transform553->setScale(new float[3]{0.2,0.2,0.2});
Shape* Shape554 = new Shape();
Shape554->setUSE("AxisLinesShape");
Transform553->addChild(Shape554);

Group552->addChild(Transform553);

Transform* Transform555 = new Transform();
Transform555->setDEF("Circle0");
Transform555->setScale(new float[3]{1.175,1,1.175});
Shape* Shape556 = new Shape();
Shape556->setDEF("circle_Shape");
Appearance* Appearance557 = new Appearance();
Appearance557->setDEF("circle0_Appearance");
Material* Material558 = new Material();
Material558->setDEF("circle0_Material");
Material558->setAmbientIntensity(0.9);
Material558->setDiffuseColor(new float[3]{0.9,0,0.7});
Material558->setEmissiveColor(new float[3]{0.425,0.486,1});
Appearance557->setMaterial(Material558);

Shape556->setAppearance(Appearance557);

IndexedLineSet* IndexedLineSet559 = new IndexedLineSet();
IndexedLineSet559->setDEF("Orbit1");
IndexedLineSet559->setCoordIndex(new int[62]{0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,-1});
Coordinate* Coordinate560 = new Coordinate();
Coordinate560->setDEF("circle_Coordinates");
Coordinate560->setPoint(new float[183]{1,0,0,0.995,0,-0.105,0.979,0,-0.208,0.951,0,-0.309,0.914,0,-0.407,0.866,0,-0.5,0.809,0,-0.588,0.743,0,-0.669,0.669,0,-0.743,0.588,0,-0.809,0.5,0,-0.866,0.407,0,-0.914,0.309,0,-0.951,0.208,0,-0.978,0.105,0,-0.995,0,0,-1,-0.105,0,-0.994522,-0.208,0,-0.978,-0.309,0,-0.951,-0.407,0,-0.914,-0.5,0,-0.866,-0.588,0,-0.809,-0.669,0,-0.743,-0.743,0,-0.669,-0.809,0,-0.588,-0.866,0,-0.5,-0.914,0,-0.407,-0.951,0,-0.309,-0.978,0,-0.208,-0.995,0,-0.105,-1,0,0,-0.995,0,0.105,-0.978,0,0.208,-0.951,0,0.309,-0.914,0,0.407,-0.866,0,0.5,-0.809,0,0.588,-0.743,0,0.669,-0.669,0,0.743,-0.588,0,0.809,-0.5,0,0.866,-0.407,0,0.914,-0.309,0,0.951,-0.208,0,0.978,-0.105,0,0.995,0,0,1,0.105,0,0.995,0.208,0,0.978,0.309,0,0.951,0.407,0,0.914,0.5,0,0.866,0.588,0,0.809,0.669,0,0.743,0.743,0,0.669,0.809,0,0.588,0.866,0,0.5,0.914,0,0.407,0.951,0,0.309,0.978,0,0.208,0.995,0,0.104,1,0,0});
IndexedLineSet559->setCoord(Coordinate560);

Shape556->setGeometry(IndexedLineSet559);

Transform555->addChild(Shape556);

Group552->addChild(Transform555);

Transform* Transform561 = new Transform();
Transform561->setDEF("Circle1");
Transform561->setScale(new float[3]{0.5,1,0.5});
Shape* Shape562 = new Shape();
Shape562->setDEF("circle1_Shape");
Appearance* Appearance563 = new Appearance();
Appearance563->setDEF("circle1_Appearance");
Material* Material564 = new Material();
Material564->setDEF("circle1_Material");
Material564->setDiffuseColor(new float[3]{0.9,0,0.7});
Material564->setEmissiveColor(new float[3]{0.424956,0.483976,1});
Appearance563->setMaterial(Material564);

Shape562->setAppearance(Appearance563);

IndexedLineSet* IndexedLineSet565 = new IndexedLineSet();
IndexedLineSet565->setUSE("Orbit1");
Shape562->setGeometry(IndexedLineSet565);

Transform561->addChild(Shape562);

Group552->addChild(Transform561);

Transform* Transform566 = new Transform();
Transform566->setDEF("Circle2");
Transform566->setScale(new float[3]{0.25,1,0.25});
Shape* Shape567 = new Shape();
Shape567->setDEF("circle2_Shape");
Appearance* Appearance568 = new Appearance();
Appearance568->setDEF("circle2_Appearance");
Material* Material569 = new Material();
Material569->setDEF("circle2_Material");
Material569->setDiffuseColor(new float[3]{0.9,0,0.7});
Material569->setEmissiveColor(new float[3]{0.424956,0.483976,1});
Appearance568->setMaterial(Material569);

Shape567->setAppearance(Appearance568);

IndexedLineSet* IndexedLineSet570 = new IndexedLineSet();
IndexedLineSet570->setUSE("Orbit1");
Shape567->setGeometry(IndexedLineSet570);

Transform566->addChild(Shape567);

Group552->addChild(Transform566);

Scene19->addChild(Group552);

X3D0->setScene(Scene19);

X3D0->toXMLString();
}
