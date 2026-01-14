
#include <Inventor/nodes/SoCone.h>
#include <Inventor/nodes/SoBaseColor.h>
#include <Inventor/nodes/SoSeparator.h>
#include <Inventor/nodes/SoShape.h>
#include <Inventor/nodes/SoTransform.h>
#include <Inventor/nodes/SoSphere.h>
#include <Inventor/nodes/SoMaterial.h>
#include <Inventor/misc/SoProtoInstance.h>
#include <Inventor/VRMLnodes/SoVRMLAppearance.h>
#include <Quarter/Quarter.h>
#include <Quarter/QuarterWidget.h>
#include <QApplication>
#include <QMainWindow>

using namespace SIM::Coin3D::Quarter;
int main(int argc, char ** argv) 
{

  QApplication app(argc, argv);
  Quarter::init();

  SoSeparator * root = new SoSeparator;
  root->ref();

  SoBaseColor * col = new SoBaseColor;
  col->rgb = SbColor(1, 1, 0);
  root->addChild(col);

  root->addChild(new SoCone);

  QMainWindow * mainwin = new QMainWindow();

  QuarterWidget * viewer = new QuarterWidget(mainwin);
  viewer->setNavigationModeFile();
  mainwin->setCentralWidget(viewer);
  viewer->setSceneGraph(root);

  mainwin->show();
  app.exec();
  root->unref();
  delete viewer;

  Quarter::clean();
SoSceneManager* SoSceneManager0 = new SoSceneManager();
SoSceneManager0->setProfile(QString("Immersive"));
SoSceneManager0->setVersion(QString("4.0"));
Sohead* Sohead1 = new Sohead();
Socomponent* Socomponent2 = new Socomponent();
Socomponent2->setName(QString("HAnim"));
Socomponent2->setLevel(1);
Sohead1->addChild(*Socomponent2);

Someta* Someta3 = new Someta();
Someta3->setName(QString("title"));
Someta3->setContent(QString("JoeKick.x3d"));
Sohead1->addMeta(*Someta3);

Someta* Someta4 = new Someta();
Someta4->setName(QString("description"));
Someta4->setContent(QString("This Joe model is a HAnim version 2 LOA-3 Humanoid with textured skin based on the original HAnim Specification and data from CAESAR models."));
Sohead1->addMeta(*Someta4);

Someta* Someta5 = new Someta();
Someta5->setName(QString("creator"));
Someta5->setContent(QString("Joe D. Williams"));
Sohead1->addMeta(*Someta5);

Someta* Someta6 = new Someta();
Someta6->setName(QString("created"));
Someta6->setContent(QString("9 January 2004"));
Sohead1->addMeta(*Someta6);

Someta* Someta7 = new Someta();
Someta7->setName(QString("translated"));
Someta7->setContent(QString("12 January 2017"));
Sohead1->addMeta(*Someta7);

Someta* Someta8 = new Someta();
Someta8->setName(QString("modified"));
Someta8->setContent(QString("Mon, 15 Sep 2025 05:20:39 GMT"));
Sohead1->addMeta(*Someta8);

Someta* Someta9 = new Someta();
Someta9->setName(QString("TODO"));
Someta9->setContent(QString("Record information about skin coordinates (found in comment at end of scene) as a structured MetadataSet containing MetadataString nodes"));
Sohead1->addMeta(*Someta9);

Someta* Someta10 = new Someta();
Someta10->setName(QString("translator"));
Someta10->setContent(QString("Roy Walmsley"));
Sohead1->addMeta(*Someta10);

Someta* Someta11 = new Someta();
Someta11->setName(QString("translator"));
Someta11->setContent(QString("Don Brutzman"));
Sohead1->addMeta(*Someta11);

Someta* Someta12 = new Someta();
Someta12->setName(QString("translator"));
Someta12->setContent(QString("John Carlson"));
Sohead1->addMeta(*Someta12);

Someta* Someta13 = new Someta();
Someta13->setName(QString("reference"));
Someta13->setContent(QString("../Characters/JoeSkinTexcoordDisplacerKick.x3d"));
Sohead1->addMeta(*Someta13);

Someta* Someta14 = new Someta();
Someta14->setName(QString("identifier"));
Someta14->setContent(QString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/JoeKick.x3d"));
Sohead1->addMeta(*Someta14);

Someta* Someta15 = new Someta();
Someta15->setName(QString("generator"));
Someta15->setContent(QString("X3D-Edit 3.3, https://www.web3d.org/x3d/tools/X3D-Edit"));
Sohead1->addMeta(*Someta15);

SoSceneManager0->setHead(*Sohead1);

SoNode* SoNode16 = new SoNode();
SoWorldInfo* SoWorldInfo17 = new SoWorldInfo();
SoWorldInfo17->setTitle(QString("X3D HANIM LOA3 Skeleton, 390 point Skin, texcoords, Displacer, teTrans for Joe_ by Joe"));
SoWorldInfo17->setInfo(new QString[]{QString("X3D Humanoid LOA3 skeleton"), QString("skin from hanim sites, surface features, and some added points"), QString("390 points")}, 3);
SoNode16->addChild(*SoWorldInfo17);

SoNavigationInfo* SoNavigationInfo18 = new SoNavigationInfo();
SoNavigationInfo18->setDEF(QString("Start_NavigationInfo"));
SoNavigationInfo18->setSpeed(2.5);
SoNode16->addChild(*SoNavigationInfo18);

SoBackground* SoBackground19 = new SoBackground();
SoBackground19->setDEF(QString("blue_Background"));
SoNode16->addChild(*SoBackground19);

SoSpotLight* SoSpotLight20 = new SoSpotLight();
SoSpotLight20->setDEF(QString("light1"));
SoSpotLight20->setColor(new float[]{0.8,0.8,1.0});
SoSpotLight20->setAmbientIntensity(0.7);
SoSpotLight20->setLocation(new float[]{0.0,3.0,3.0});
SoSpotLight20->setDirection(new float[]{0.0,0.0,0.0});
SoSpotLight20->setRadius(10);
SoSpotLight20->setBeamWidth(1.5);
SoSpotLight20->setCutOffAngle(0.6);
SoNode16->addChild(*SoSpotLight20);

SoPointLight* SoPointLight21 = new SoPointLight();
SoPointLight21->setDEF(QString("light2"));
SoPointLight21->setColor(new float[]{0.8,0.8,1.0});
SoPointLight21->setAmbientIntensity(0.7);
SoPointLight21->setLocation(new float[]{0.0,10.0,-7.0});
SoNode16->addChild(*SoPointLight21);

SoViewpoint* SoViewpoint22 = new SoViewpoint();
SoViewpoint22->setDEF(QString("Scene_InclinedView"));
SoViewpoint22->setDescription(QString("Scene_Inclined View"));
SoViewpoint22->setPosition(new float[]{1.62,1.05,3.06});
SoViewpoint22->setOrientation(new float[]{-0.113,0.993,0.0347,0.671});
SoViewpoint22->setCenterOfRotation(new float[]{0.0,0.85,0.0});
SoNode16->addChild(*SoViewpoint22);

SoViewpoint* SoViewpoint23 = new SoViewpoint();
SoViewpoint23->setDEF(QString("Scene_IFrontView"));
SoViewpoint23->setDescription(QString("Scene_Front View"));
SoViewpoint23->setPosition(new float[]{0.0,0.8,2.58});
SoViewpoint23->setCenterOfRotation(new float[]{0.0,0.8,0.0});
SoNode16->addChild(*SoViewpoint23);

SoViewpoint* SoViewpoint24 = new SoViewpoint();
SoViewpoint24->setDEF(QString("Scene_ISideView"));
SoViewpoint24->setDescription(QString("Scene_Side View"));
SoViewpoint24->setPosition(new float[]{2.6,0.8,0.0});
SoViewpoint24->setOrientation(new float[]{0.0,1.0,0.0,1.5708});
SoViewpoint24->setCenterOfRotation(new float[]{0.0,0.8,0.0});
SoNode16->addChild(*SoViewpoint24);

SoViewpoint* SoViewpoint25 = new SoViewpoint();
SoViewpoint25->setDEF(QString("Scene_BackView"));
SoViewpoint25->setDescription(QString("Scene_Back View"));
SoViewpoint25->setPosition(new float[]{0.0,1.5,-3.0});
SoViewpoint25->setOrientation(new float[]{0.0,1.0,0.0,3.14});
SoViewpoint25->setCenterOfRotation(new float[]{0.0,1.5,0.0});
SoNode16->addChild(*SoViewpoint25);

SoViewpoint* SoViewpoint26 = new SoViewpoint();
SoViewpoint26->setDEF(QString("Scene_TopView"));
SoViewpoint26->setDescription(QString("Scene_Top View"));
SoViewpoint26->setPosition(new float[]{0.0,3.5,0.0});
SoViewpoint26->setOrientation(new float[]{1.0,0.0,0.0,-1.5708});
SoViewpoint26->setCenterOfRotation(new float[]{0.0,1.5,0.0});
SoNode16->addChild(*SoViewpoint26);

SoGroup* SoGroup27 = new SoGroup();
SoGroup27->setDEF(QString("Joe_Humanoid"));
SoHAnimHumanoid* SoHAnimHumanoid28 = new SoHAnimHumanoid();
SoHAnimHumanoid28->setDEF(QString("Joe_Kick"));
SoHAnimHumanoid28->X3DNode::setName(QString("Kick"));
SoHAnimHumanoid28->setLoa(4);
SoMetadataSet* SoMetadataSet29 = new SoMetadataSet();
SoMetadataSet29->X3DNode::setName(QString("warnings"));
SoMetadataSet29->X3DNode::setReference(QString("HAnim"));
SoMetadataString* SoMetadataString30 = new SoMetadataString();
SoMetadataString30->X3DNode::setName(QString("SymmetricalLeftRight"));
SoMetadataString30->X3DNode::setReference(QString("correction options: ignore, warn, average, left, right, largest, smallest"));
SoMetadataString30->setValue(new QString[]{QString("ignore")}, 1);
SoMetadataSet29->setValue((X3DNode *)&SoMetadataString30);

SoHAnimHumanoid28->setMetadata(*SoMetadataSet29);

SoHAnimJoint* SoHAnimJoint31 = new SoHAnimJoint();
SoHAnimJoint31->setDEF(QString("Joe_humanoid_root"));
SoHAnimJoint31->X3DNode::setName(QString("humanoid_root"));
SoHAnimJoint31->setTranslation(new float[]{-0.1962198,0.1405496,0.1216488});
SoHAnimJoint31->setRotation(new float[]{-0.999999999999999,0.0,0.0,0.5});
SoHAnimJoint31->setCenter(new float[]{0.0,0.875,0.0});
SoHAnimSegment* SoHAnimSegment32 = new SoHAnimSegment();
SoHAnimSegment32->setDEF(QString("Joe_sacrum"));
SoHAnimSegment32->X3DNode::setName(QString("sacrum"));
SoHAnimSite* SoHAnimSite33 = new SoHAnimSite();
SoHAnimSite33->setDEF(QString("Joe_RootFront_view"));
SoHAnimSite33->X3DNode::setName(QString("RootFront_view"));
SoTransform* SoTransform34 = new SoTransform();
SoTransform34->setDEF(QString("hanimcordsys"));
SoTransform34->setScale(new float[]{0.175,0.175,0.175});
SoViewpoint* SoViewpoint35 = new SoViewpoint();
SoViewpoint35->setDEF(QString("ViewBodyRootAxes"));
SoViewpoint35->setDescription(QString("Joe_HAnim Root HAnimSite Coordinate Axes View"));
SoTransform34->addChild(*SoViewpoint35);

SoShape* SoShape36 = new SoShape();
SoShape36->setDEF(QString("AxisLinesShape"));
SoIndexedLineSet* SoIndexedLineSet37 = new SoIndexedLineSet();
SoIndexedLineSet37->setColorPerVertex(false);
SoIndexedLineSet37->setColorIndex(new int[]{0,1,2}, 3);
SoIndexedLineSet37->setCoordIndex(new int32_t[]{0,1,-1,0,2,-1,0,3,-1}, 9);
SoColor* SoColor38 = new SoColor();
SoColor38->setColor(new float[]{1.0,0.0,0.0,0.0,0.6,0.0,0.0,0.0,1.0}, 9);
SoIndexedLineSet37->setColor(*SoColor38);

SoCoordinate* SoCoordinate39 = new SoCoordinate();
SoCoordinate39->setPoint(new float[]{0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0}, 12);
SoIndexedLineSet37->setCoord(*SoCoordinate39);

SoShape36->setGeometry(*SoIndexedLineSet37);

SoTransform34->addChild(*SoShape36);

SoHAnimSite33->addChild(*SoTransform34);

SoHAnimSegment32->addChild(*SoHAnimSite33);

SoHAnimJoint31->addChildren(*SoHAnimSegment32);

SoHAnimJoint* SoHAnimJoint40 = new SoHAnimJoint();
SoHAnimJoint40->setDEF(QString("Joe_sacroiliac"));
SoHAnimJoint40->X3DNode::setName(QString("sacroiliac"));
SoHAnimJoint40->setCenter(new float[]{0.0,0.92,0.0});
SoHAnimJoint40->setSkinCoordIndex(new int32_t[]{17,19,20,21,22,23,26,27,73,82,89,91,93}, 13);
SoHAnimJoint40->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,0.35,0.35,1.0}, 13);
SoHAnimJoint* SoHAnimJoint41 = new SoHAnimJoint();
SoHAnimJoint41->setDEF(QString("Joe_l_hip"));
SoHAnimJoint41->X3DNode::setName(QString("l_hip"));
SoHAnimJoint41->setRotation(new float[]{1.0,0.0,0.0,0.931269831413142});
SoHAnimJoint41->setCenter(new float[]{0.1,0.92,0.0});
SoHAnimJoint41->setSkinCoordIndex(new int32_t[]{89,90,94,95,96,97}, 6);
SoHAnimJoint41->setSkinCoordWeight(new float[]{0.65,1.0,1.0,1.0,1.0,1.0}, 6);
SoHAnimJoint* SoHAnimJoint42 = new SoHAnimJoint();
SoHAnimJoint42->setDEF(QString("Joe_l_knee"));
SoHAnimJoint42->X3DNode::setName(QString("l_knee"));
SoHAnimJoint42->setRotation(new float[]{0.998863602232125,0.0,0.0476602993681761,1.24505714055853});
SoHAnimJoint42->setCenter(new float[]{0.115,0.466,0.0});
SoHAnimJoint42->setSkinCoordIndex(new int32_t[]{334,335,336,337,338,339,340,341}, 8);
SoHAnimJoint42->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 8);
SoHAnimJoint* SoHAnimJoint43 = new SoHAnimJoint();
SoHAnimJoint43->setDEF(QString("Joe_l_talocrural"));
SoHAnimJoint43->X3DNode::setName(QString("l_talocrural"));
SoHAnimJoint43->setRotation(new float[]{1.0,0.0,0.0,0.899195750554403});
SoHAnimJoint43->setCenter(new float[]{0.115,0.069,0.0});
SoHAnimJoint43->setSkinCoordIndex(new int32_t[]{342,343,344,345}, 4);
SoHAnimJoint43->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0}, 4);
SoHAnimJoint* SoHAnimJoint44 = new SoHAnimJoint();
SoHAnimJoint44->setDEF(QString("Joe_l_tarsometatarsal_2"));
SoHAnimJoint44->X3DNode::setName(QString("l_tarsometatarsal_2"));
SoHAnimJoint44->setCenter(new float[]{0.115,0.031,0.03});
SoHAnimJoint44->setSkinCoordIndex(new int32_t[]{346,347,348,71}, 4);
SoHAnimJoint44->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0}, 4);
SoHAnimJoint* SoHAnimJoint45 = new SoHAnimJoint();
SoHAnimJoint45->setDEF(QString("Joe_l_metatarsophalangeal_2"));
SoHAnimJoint45->X3DNode::setName(QString("l_metatarsophalangeal_2"));
SoHAnimJoint45->setCenter(new float[]{0.115,0.037,0.09});
SoHAnimJoint45->setSkinCoordIndex(new int32_t[]{349,350,351,352}, 4);
SoHAnimJoint45->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0}, 4);
SoHAnimJoint* SoHAnimJoint46 = new SoHAnimJoint();
SoHAnimJoint46->setDEF(QString("Joe_l_tarsal_distal_interphalangeal_2"));
SoHAnimJoint46->X3DNode::setName(QString("l_tarsal_distal_interphalangeal_2"));
SoHAnimJoint46->setCenter(new float[]{0.115,0.02,0.122});
SoHAnimJoint46->setSkinCoordIndex(new int32_t[]{353,354,355,356,357,358,359,360,361}, 9);
SoHAnimJoint46->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 9);
SoHAnimJoint45->addChildren(*SoHAnimJoint46);

SoHAnimJoint44->addChildren(*SoHAnimJoint45);

SoHAnimJoint43->addChildren(*SoHAnimJoint44);

SoHAnimJoint42->addChildren(*SoHAnimJoint43);

SoHAnimJoint41->addChildren(*SoHAnimJoint42);

SoHAnimJoint40->addChildren(*SoHAnimJoint41);

SoHAnimJoint* SoHAnimJoint47 = new SoHAnimJoint();
SoHAnimJoint47->setDEF(QString("Joe_r_hip"));
SoHAnimJoint47->X3DNode::setName(QString("r_hip"));
SoHAnimJoint47->setRotation(new float[]{-1.0,0.0,0.0,1.0});
SoHAnimJoint47->setCenter(new float[]{-0.1,0.92,0.0});
SoHAnimJoint47->setSkinCoordIndex(new int32_t[]{91,92,98,99,100,101,362,363}, 8);
SoHAnimJoint47->setSkinCoordWeight(new float[]{0.65,1.0,0.8,1.0,1.0,1.0,0.4,0.8}, 8);
SoHAnimJoint* SoHAnimJoint48 = new SoHAnimJoint();
SoHAnimJoint48->setDEF(QString("Joe_r_knee"));
SoHAnimJoint48->X3DNode::setName(QString("r_knee"));
SoHAnimJoint48->setRotation(new float[]{1.0,0.0,0.0,1.3487936258316});
SoHAnimJoint48->setCenter(new float[]{-0.05,0.466,0.0});
SoHAnimJoint48->setSkinCoordIndex(new int32_t[]{362,363,364,365,366,367,368,369,98}, 9);
SoHAnimJoint48->setSkinCoordWeight(new float[]{0.6,0.2,1.0,1.0,1.0,1.0,1.0,1.0,0.2}, 9);
SoHAnimJoint* SoHAnimJoint49 = new SoHAnimJoint();
SoHAnimJoint49->setDEF(QString("Joe_r_talocrural"));
SoHAnimJoint49->X3DNode::setName(QString("r_talocrural"));
SoHAnimJoint49->setRotation(new float[]{1.0,0.0,0.0,0.651206374168395});
SoHAnimJoint49->setCenter(new float[]{-0.115,0.069,0.0});
SoHAnimJoint49->setSkinCoordIndex(new int32_t[]{370,371,372,373}, 4);
SoHAnimJoint49->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0}, 4);
SoHAnimJoint* SoHAnimJoint50 = new SoHAnimJoint();
SoHAnimJoint50->setDEF(QString("Joe_r_tarsometatarsal_2"));
SoHAnimJoint50->X3DNode::setName(QString("r_tarsometatarsal_2"));
SoHAnimJoint50->setCenter(new float[]{-0.1,0.015,-0.01});
SoHAnimJoint50->setSkinCoordIndex(new int32_t[]{374,375,376}, 3);
SoHAnimJoint50->setSkinCoordWeight(new float[]{1.0,1.0,1.0}, 3);
SoHAnimJoint* SoHAnimJoint51 = new SoHAnimJoint();
SoHAnimJoint51->setDEF(QString("Joe_r_metatarsophalangeal_2"));
SoHAnimJoint51->X3DNode::setName(QString("r_metatarsophalangeal_2"));
SoHAnimJoint51->setCenter(new float[]{-0.115,0.037,0.09});
SoHAnimJoint51->setSkinCoordIndex(new int32_t[]{377,378,379,380}, 4);
SoHAnimJoint51->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0}, 4);
SoHAnimJoint* SoHAnimJoint52 = new SoHAnimJoint();
SoHAnimJoint52->setDEF(QString("Joe_r_tarsal_distal_interphalangeal_2"));
SoHAnimJoint52->X3DNode::setName(QString("r_tarsal_distal_interphalangeal_2"));
SoHAnimJoint52->setCenter(new float[]{-0.1,0.01,0.14});
SoHAnimJoint52->setSkinCoordIndex(new int32_t[]{381,382,383,384,385,386,387,388,389}, 9);
SoHAnimJoint52->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 9);
SoHAnimJoint51->addChildren(*SoHAnimJoint52);

SoHAnimJoint50->addChildren(*SoHAnimJoint51);

SoHAnimJoint49->addChildren(*SoHAnimJoint50);

SoHAnimJoint48->addChildren(*SoHAnimJoint49);

SoHAnimJoint47->addChildren(*SoHAnimJoint48);

SoHAnimJoint40->addChildren(*SoHAnimJoint47);

SoHAnimJoint31->addChildren(*SoHAnimJoint40);

SoHAnimJoint* SoHAnimJoint53 = new SoHAnimJoint();
SoHAnimJoint53->setDEF(QString("Joe_vl5"));
SoHAnimJoint53->X3DNode::setName(QString("vl5"));
SoHAnimJoint53->setCenter(new float[]{0.0,1.045,-0.095});
SoHAnimJoint53->setSkinCoordIndex(new int32_t[]{28,76}, 2);
SoHAnimJoint53->setSkinCoordWeight(new float[]{1.0,1.0}, 2);
SoHAnimJoint* SoHAnimJoint54 = new SoHAnimJoint();
SoHAnimJoint54->setDEF(QString("Joe_vl4"));
SoHAnimJoint54->X3DNode::setName(QString("vl4"));
SoHAnimJoint54->setCenter(new float[]{0.0,1.068,-0.085});
SoHAnimJoint* SoHAnimJoint55 = new SoHAnimJoint();
SoHAnimJoint55->setDEF(QString("Joe_vl3"));
SoHAnimJoint55->X3DNode::setName(QString("vl3"));
SoHAnimJoint55->setCenter(new float[]{0.0,1.092,-0.0725});
SoHAnimJoint* SoHAnimJoint56 = new SoHAnimJoint();
SoHAnimJoint56->setDEF(QString("Joe_vl2"));
SoHAnimJoint56->X3DNode::setName(QString("vl2"));
SoHAnimJoint56->setCenter(new float[]{0.0,1.12,-0.065});
SoHAnimJoint56->setSkinCoordIndex(new int32_t[]{16,18,25,83,84,85,86,87,88}, 9);
SoHAnimJoint56->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,0.7,1.0,0.8}, 9);
SoHAnimJoint* SoHAnimJoint57 = new SoHAnimJoint();
SoHAnimJoint57->setDEF(QString("Joe_vl1"));
SoHAnimJoint57->X3DNode::setName(QString("vl1"));
SoHAnimJoint57->setCenter(new float[]{0.0,1.1459,-0.0625});
SoHAnimJoint* SoHAnimJoint58 = new SoHAnimJoint();
SoHAnimJoint58->setDEF(QString("Joe_vt12"));
SoHAnimJoint58->X3DNode::setName(QString("vt12"));
SoHAnimJoint58->setCenter(new float[]{0.0,1.179,-0.068});
SoHAnimJoint* SoHAnimJoint59 = new SoHAnimJoint();
SoHAnimJoint59->setDEF(QString("Joe_vt11"));
SoHAnimJoint59->X3DNode::setName(QString("vt11"));
SoHAnimJoint59->setCenter(new float[]{0.0,1.2679,-0.081});
SoHAnimJoint* SoHAnimJoint60 = new SoHAnimJoint();
SoHAnimJoint60->setDEF(QString("Joe_vt10"));
SoHAnimJoint60->X3DNode::setName(QString("vt10"));
SoHAnimJoint60->setCenter(new float[]{0.0,1.242,-0.09});
SoHAnimJoint60->setSkinCoordIndex(new int32_t[]{15}, 1);
SoHAnimJoint60->setSkinCoordWeight(new float[]{1.0}, 1);
SoHAnimJoint* SoHAnimJoint61 = new SoHAnimJoint();
SoHAnimJoint61->setDEF(QString("Joe_vt9"));
SoHAnimJoint61->X3DNode::setName(QString("vt9"));
SoHAnimJoint61->setCenter(new float[]{0.0,1.268,-0.1});
SoHAnimJoint61->setSkinCoordIndex(new int32_t[]{13,14}, 2);
SoHAnimJoint61->setSkinCoordWeight(new float[]{1.0,1.0}, 2);
SoHAnimJoint* SoHAnimJoint62 = new SoHAnimJoint();
SoHAnimJoint62->setDEF(QString("Joe_vt8"));
SoHAnimJoint62->X3DNode::setName(QString("vt8"));
SoHAnimJoint62->setCenter(new float[]{0.0,1.294,-0.11});
SoHAnimJoint* SoHAnimJoint63 = new SoHAnimJoint();
SoHAnimJoint63->setDEF(QString("Joe_vt7"));
SoHAnimJoint63->X3DNode::setName(QString("vt7"));
SoHAnimJoint63->setCenter(new float[]{0.0,1.323,-0.1155});
SoHAnimJoint* SoHAnimJoint64 = new SoHAnimJoint();
SoHAnimJoint64->setDEF(QString("Joe_vt6"));
SoHAnimJoint64->X3DNode::setName(QString("vt6"));
SoHAnimJoint64->setCenter(new float[]{0.0,1.352,-0.12});
SoHAnimJoint* SoHAnimJoint65 = new SoHAnimJoint();
SoHAnimJoint65->setDEF(QString("Joe_vt5"));
SoHAnimJoint65->X3DNode::setName(QString("vt5"));
SoHAnimJoint65->setCenter(new float[]{0.0,1.381,-0.1235});
SoHAnimJoint* SoHAnimJoint66 = new SoHAnimJoint();
SoHAnimJoint66->setDEF(QString("Joe_vt4"));
SoHAnimJoint66->X3DNode::setName(QString("vt4"));
SoHAnimJoint66->setCenter(new float[]{0.0,1.41,-0.1235});
SoHAnimJoint66->setSkinCoordIndex(new int32_t[]{81}, 1);
SoHAnimJoint66->setSkinCoordWeight(new float[]{1.0}, 1);
SoHAnimJoint* SoHAnimJoint67 = new SoHAnimJoint();
SoHAnimJoint67->setDEF(QString("Joe_vt3"));
SoHAnimJoint67->X3DNode::setName(QString("vt3"));
SoHAnimJoint67->setCenter(new float[]{0.0,1.438,-0.12});
SoHAnimJoint* SoHAnimJoint68 = new SoHAnimJoint();
SoHAnimJoint68->setDEF(QString("Joe_vt2"));
SoHAnimJoint68->X3DNode::setName(QString("vt2"));
SoHAnimJoint68->setCenter(new float[]{0.0,1.468,-0.105});
SoHAnimJoint* SoHAnimJoint69 = new SoHAnimJoint();
SoHAnimJoint69->setDEF(QString("Joe_vt1"));
SoHAnimJoint69->X3DNode::setName(QString("vt1"));
SoHAnimJoint69->setCenter(new float[]{0.0,1.497,-0.09});
SoHAnimJoint69->setSkinCoordIndex(new int32_t[]{11,24}, 2);
SoHAnimJoint69->setSkinCoordWeight(new float[]{1.0,1.0}, 2);
SoHAnimJoint* SoHAnimJoint70 = new SoHAnimJoint();
SoHAnimJoint70->setDEF(QString("Joe_vc7"));
SoHAnimJoint70->X3DNode::setName(QString("vc7"));
SoHAnimJoint70->setCenter(new float[]{0.0,1.525,-0.072});
SoHAnimJoint70->setSkinCoordIndex(new int32_t[]{74,75}, 2);
SoHAnimJoint70->setSkinCoordWeight(new float[]{1.0,1.0}, 2);
SoHAnimJoint* SoHAnimJoint71 = new SoHAnimJoint();
SoHAnimJoint71->setDEF(QString("Joe_vc6"));
SoHAnimJoint71->X3DNode::setName(QString("vc6"));
SoHAnimJoint71->setCenter(new float[]{0.0,1.54,-0.05});
SoHAnimJoint* SoHAnimJoint72 = new SoHAnimJoint();
SoHAnimJoint72->setDEF(QString("Joe_vc5"));
SoHAnimJoint72->X3DNode::setName(QString("vc5"));
SoHAnimJoint72->setCenter(new float[]{0.0,1.552,-0.035});
SoHAnimJoint* SoHAnimJoint73 = new SoHAnimJoint();
SoHAnimJoint73->setDEF(QString("Joe_vc4"));
SoHAnimJoint73->X3DNode::setName(QString("vc4"));
SoHAnimJoint73->setRotation(new float[]{0.79363313197937,0.0,0.608396623778117,0.509491241300095});
SoHAnimJoint73->setCenter(new float[]{0.0,1.5675,-0.0256});
SoHAnimJoint* SoHAnimJoint74 = new SoHAnimJoint();
SoHAnimJoint74->setDEF(QString("Joe_vc3"));
SoHAnimJoint74->X3DNode::setName(QString("vc3"));
SoHAnimJoint74->setCenter(new float[]{0.0,1.58225,-0.0185});
SoHAnimJoint* SoHAnimJoint75 = new SoHAnimJoint();
SoHAnimJoint75->setDEF(QString("Joe_vc2"));
SoHAnimJoint75->X3DNode::setName(QString("vc2"));
SoHAnimJoint75->setCenter(new float[]{0.0,1.595,-0.0175});
SoHAnimJoint* SoHAnimJoint76 = new SoHAnimJoint();
SoHAnimJoint76->setDEF(QString("Joe_vc1"));
SoHAnimJoint76->X3DNode::setName(QString("vc1"));
SoHAnimJoint76->setCenter(new float[]{0.0,1.61,-0.015});
SoHAnimJoint* SoHAnimJoint77 = new SoHAnimJoint();
SoHAnimJoint77->setDEF(QString("Joe_skullbase"));
SoHAnimJoint77->X3DNode::setName(QString("skullbase"));
SoHAnimJoint77->setRotation(new float[]{0.0,0.999999999999988,0.0,0.244155538082126});
SoHAnimJoint77->setCenter(new float[]{0.0,1.63,-0.01});
SoHAnimJoint77->setSkinCoordIndex(new int32_t[]{0,1,2,3,4,5,6,7,8,9}, 10);
SoHAnimJoint77->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 10);
SoHAnimDisplacer* SoHAnimDisplacer78 = new SoHAnimDisplacer();
SoHAnimDisplacer78->setDEF(QString("Joe_skull_tip_raiser_action"));
SoHAnimDisplacer78->X3DNode::setName(QString("skull_tip_raiser_action"));
SoHAnimDisplacer78->setWeight(0.7399469);
SoHAnimDisplacer78->setCoordIndex(new int32_t[]{0,1,2,3,4,5,6,7,8,9}, 10);
SoHAnimDisplacer78->setDisplacements(new float[]{0.0,0.15,0.0,0.0,0.0,0.15,-0.1,0.0,0.15,0.1,0.0,0.05,0.0,-0.02,0.05,-0.15,0.0,0.0,-0.05,0.0,0.0,0.15,0.0,0.0,0.05,0.0,0.0,0.0,0.0,-0.15}, 30);
SoHAnimJoint77->setDisplacers(SoHAnimDisplacer78);

SoHAnimJoint* SoHAnimJoint79 = new SoHAnimJoint();
SoHAnimJoint79->setDEF(QString("Joe_l_eyelid_joint"));
SoHAnimJoint79->X3DNode::setName(QString("l_eyelid_joint"));
SoHAnimJoint79->setCenter(new float[]{0.034,1.659,0.06});
SoHAnimJoint77->addChildren(*SoHAnimJoint79);

SoHAnimJoint* SoHAnimJoint80 = new SoHAnimJoint();
SoHAnimJoint80->setDEF(QString("Joe_l_eyeball_joint"));
SoHAnimJoint80->X3DNode::setName(QString("l_eyeball_joint"));
SoHAnimJoint80->setCenter(new float[]{0.034,1.659,0.06});
SoHAnimJoint77->addChildren(*SoHAnimJoint80);

SoHAnimJoint* SoHAnimJoint81 = new SoHAnimJoint();
SoHAnimJoint81->setDEF(QString("Joe_l_eyebrow_joint"));
SoHAnimJoint81->X3DNode::setName(QString("l_eyebrow_joint"));
SoHAnimJoint81->setCenter(new float[]{0.034,1.659,0.06});
SoHAnimJoint77->addChildren(*SoHAnimJoint81);

SoHAnimJoint* SoHAnimJoint82 = new SoHAnimJoint();
SoHAnimJoint82->setDEF(QString("Joe_r_eyelid_joint"));
SoHAnimJoint82->X3DNode::setName(QString("r_eyelid_joint"));
SoHAnimJoint82->setCenter(new float[]{-0.034,1.659,0.06});
SoHAnimJoint77->addChildren(*SoHAnimJoint82);

SoHAnimJoint* SoHAnimJoint83 = new SoHAnimJoint();
SoHAnimJoint83->setDEF(QString("Joe_r_eyeball_joint"));
SoHAnimJoint83->X3DNode::setName(QString("r_eyeball_joint"));
SoHAnimJoint83->setCenter(new float[]{-0.034,1.659,0.06});
SoHAnimJoint77->addChildren(*SoHAnimJoint83);

SoHAnimJoint* SoHAnimJoint84 = new SoHAnimJoint();
SoHAnimJoint84->setDEF(QString("Joe_r_eyebrow_joint"));
SoHAnimJoint84->X3DNode::setName(QString("r_eyebrow_joint"));
SoHAnimJoint84->setCenter(new float[]{-0.034,1.659,0.06});
SoHAnimJoint77->addChildren(*SoHAnimJoint84);

SoHAnimJoint* SoHAnimJoint85 = new SoHAnimJoint();
SoHAnimJoint85->setDEF(QString("Joe_temporomandibular"));
SoHAnimJoint85->X3DNode::setName(QString("temporomandibular"));
SoHAnimJoint85->setCenter(new float[]{0.034,1.659,0.06});
SoHAnimJoint77->addChildren(*SoHAnimJoint85);

SoHAnimJoint76->addChildren(*SoHAnimJoint77);

SoHAnimJoint75->addChildren(*SoHAnimJoint76);

SoHAnimJoint74->addChildren(*SoHAnimJoint75);

SoHAnimJoint73->addChildren(*SoHAnimJoint74);

SoHAnimJoint72->addChildren(*SoHAnimJoint73);

SoHAnimJoint71->addChildren(*SoHAnimJoint72);

SoHAnimJoint70->addChildren(*SoHAnimJoint71);

SoHAnimJoint69->addChildren(*SoHAnimJoint70);

SoHAnimJoint* SoHAnimJoint86 = new SoHAnimJoint();
SoHAnimJoint86->setDEF(QString("Joe_l_acromioclavicular"));
SoHAnimJoint86->X3DNode::setName(QString("l_acromioclavicular"));
SoHAnimJoint86->setCenter(new float[]{0.082,1.4488,-0.0353});
SoHAnimJoint86->setSkinCoordIndex(new int32_t[]{12}, 1);
SoHAnimJoint86->setSkinCoordWeight(new float[]{1.0}, 1);
SoHAnimJoint* SoHAnimJoint87 = new SoHAnimJoint();
SoHAnimJoint87->setDEF(QString("Joe_l_sternoclavicular"));
SoHAnimJoint87->X3DNode::setName(QString("l_sternoclavicular"));
SoHAnimJoint87->setCenter(new float[]{0.0962,1.4269,-0.0424});
SoHAnimJoint87->setSkinCoordIndex(new int32_t[]{79}, 1);
SoHAnimJoint87->setSkinCoordWeight(new float[]{1.0}, 1);
SoHAnimJoint* SoHAnimJoint88 = new SoHAnimJoint();
SoHAnimJoint88->setDEF(QString("Joe_l_shoulder"));
SoHAnimJoint88->X3DNode::setName(QString("l_shoulder"));
SoHAnimJoint88->setRotation(new float[]{-0.643733224193946,0.0,0.765249982730394,1.6862643538567});
SoHAnimJoint88->setCenter(new float[]{0.2,1.44,-0.04});
SoHAnimJoint88->setSkinCoordIndex(new int32_t[]{41,42,44,80,102,103,104,105}, 8);
SoHAnimJoint88->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 8);
SoHAnimJoint* SoHAnimJoint89 = new SoHAnimJoint();
SoHAnimJoint89->setDEF(QString("Joe_l_elbow"));
SoHAnimJoint89->X3DNode::setName(QString("l_elbow"));
SoHAnimJoint89->setRotation(new float[]{-0.80893714343502,-0.587895141986384,0.0,0.512375525586369});
SoHAnimJoint89->setCenter(new float[]{0.2,1.1388,-0.04});
SoHAnimJoint89->setSkinCoordIndex(new int32_t[]{45,46,47,109,110,111,112,113,115,116,117,118}, 12);
SoHAnimJoint89->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 15);
SoHAnimJoint* SoHAnimJoint90 = new SoHAnimJoint();
SoHAnimJoint90->setDEF(QString("Joe_l_radiocarpal"));
SoHAnimJoint90->X3DNode::setName(QString("l_radiocarpal"));
SoHAnimJoint90->setRotation(new float[]{0.0,-0.447213595499958,0.894427190999917,0.491420745338246});
SoHAnimJoint90->setCenter(new float[]{0.2,0.87,-0.04});
SoHAnimJoint90->setSkinCoordIndex(new int32_t[]{119,120,121,122,123,124,125,126}, 8);
SoHAnimJoint90->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 8);
SoHAnimJoint* SoHAnimJoint91 = new SoHAnimJoint();
SoHAnimJoint91->setDEF(QString("Joe_l_carpometacarpal_1"));
SoHAnimJoint91->X3DNode::setName(QString("l_carpometacarpal_1"));
SoHAnimJoint91->setCenter(new float[]{0.1924,0.8472,-0.0534});
SoHAnimJoint91->setSkinCoordIndex(new int32_t[]{127,128}, 2);
SoHAnimJoint91->setSkinCoordWeight(new float[]{1.0,1.0}, 2);
SoHAnimJoint* SoHAnimJoint92 = new SoHAnimJoint();
SoHAnimJoint92->setDEF(QString("Joe_l_metacarpophalangeal_1"));
SoHAnimJoint92->X3DNode::setName(QString("l_metacarpophalangeal_1"));
SoHAnimJoint92->setCenter(new float[]{0.1951,0.8226,0.0246});
SoHAnimJoint92->setSkinCoordIndex(new int32_t[]{138,139,140,141,142,143}, 6);
SoHAnimJoint92->setSkinCoordWeight(new float[]{0.5,0.5,0.5,1.0,1.0,1.0}, 6);
SoHAnimJoint* SoHAnimJoint93 = new SoHAnimJoint();
SoHAnimJoint93->setDEF(QString("Joe_l_carpal_interphalangeal_1"));
SoHAnimJoint93->X3DNode::setName(QString("l_carpal_interphalangeal_1"));
SoHAnimJoint93->setCenter(new float[]{0.1955,0.8159,0.0464});
SoHAnimJoint93->setSkinCoordIndex(new int32_t[]{144,145,146,147,148,149,150,151,152}, 9);
SoHAnimJoint93->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 9);
SoHAnimJoint92->addChildren(*SoHAnimJoint93);

SoHAnimJoint91->addChildren(*SoHAnimJoint92);

SoHAnimJoint90->addChildren(*SoHAnimJoint91);

SoHAnimJoint* SoHAnimJoint94 = new SoHAnimJoint();
SoHAnimJoint94->setDEF(QString("Joe_l_carpometacarpal_2"));
SoHAnimJoint94->X3DNode::setName(QString("l_carpometacarpal_2"));
SoHAnimJoint94->setCenter(new float[]{0.1983,0.8024,-0.028});
SoHAnimJoint94->setSkinCoordIndex(new int32_t[]{129,130}, 2);
SoHAnimJoint94->setSkinCoordWeight(new float[]{1.0,1.0}, 2);
SoHAnimJoint* SoHAnimJoint95 = new SoHAnimJoint();
SoHAnimJoint95->setDEF(QString("Joe_l_metacarpophalangeal_2"));
SoHAnimJoint95->X3DNode::setName(QString("l_metacarpophalangeal_2"));
SoHAnimJoint95->setCenter(new float[]{0.1983,0.7815,-0.028});
SoHAnimJoint95->setSkinCoordIndex(new int32_t[]{138,139,140,153,154,155,163}, 7);
SoHAnimJoint95->setSkinCoordWeight(new float[]{0.5,0.5,0.5,1.0,1.0,1.0,0.5}, 7);
SoHAnimJoint* SoHAnimJoint96 = new SoHAnimJoint();
SoHAnimJoint96->setDEF(QString("Joe_l_carpal_proximal_interphalangeal_2"));
SoHAnimJoint96->X3DNode::setName(QString("l_carpal_proximal_interphalangeal_2"));
SoHAnimJoint96->setCenter(new float[]{0.2017,0.7363,-0.0248});
SoHAnimJoint96->setSkinCoordIndex(new int32_t[]{166,167,168,169}, 4);
SoHAnimJoint96->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0}, 4);
SoHAnimJoint* SoHAnimJoint97 = new SoHAnimJoint();
SoHAnimJoint97->setDEF(QString("Joe_l_carpal_distal_interphalangeal_2"));
SoHAnimJoint97->X3DNode::setName(QString("l_carpal_distal_interphalangeal_2"));
SoHAnimJoint97->setCenter(new float[]{0.2028,0.7139,-0.0236});
SoHAnimJoint97->setSkinCoordIndex(new int32_t[]{170,171,172,173,174,175,176,177,178}, 9);
SoHAnimJoint97->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 9);
SoHAnimJoint96->addChildren(*SoHAnimJoint97);

SoHAnimJoint95->addChildren(*SoHAnimJoint96);

SoHAnimJoint94->addChildren(*SoHAnimJoint95);

SoHAnimJoint90->addChildren(*SoHAnimJoint94);

SoHAnimJoint* SoHAnimJoint98 = new SoHAnimJoint();
SoHAnimJoint98->setDEF(QString("Joe_l_carpometacarpal_3"));
SoHAnimJoint98->X3DNode::setName(QString("l_carpometacarpal_3"));
SoHAnimJoint98->setCenter(new float[]{0.1987,0.8029,-0.053});
SoHAnimJoint98->setSkinCoordIndex(new int32_t[]{131,132}, 2);
SoHAnimJoint98->setSkinCoordWeight(new float[]{1.0,1.0}, 2);
SoHAnimJoint* SoHAnimJoint99 = new SoHAnimJoint();
SoHAnimJoint99->setDEF(QString("Joe_l_metacarpophalangeal_3"));
SoHAnimJoint99->X3DNode::setName(QString("l_metacarpophalangeal_3"));
SoHAnimJoint99->setCenter(new float[]{0.1987,0.7818,-0.053});
SoHAnimJoint99->setSkinCoordIndex(new int32_t[]{156,157,163,164}, 4);
SoHAnimJoint99->setSkinCoordWeight(new float[]{1.0,1.0,0.5,0.5}, 4);
SoHAnimJoint* SoHAnimJoint100 = new SoHAnimJoint();
SoHAnimJoint100->setDEF(QString("Joe_l_carpal_proximal_interphalangeal_3"));
SoHAnimJoint100->X3DNode::setName(QString("l_carpal_proximal_interphalangeal_3"));
SoHAnimJoint100->setCenter(new float[]{0.2013,0.7273,-0.0503});
SoHAnimJoint100->setSkinCoordIndex(new int32_t[]{179,180,181,182}, 4);
SoHAnimJoint100->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0}, 4);
SoHAnimJoint* SoHAnimJoint101 = new SoHAnimJoint();
SoHAnimJoint101->setDEF(QString("Joe_l_carpal_distal_interphalangeal_3"));
SoHAnimJoint101->X3DNode::setName(QString("l_carpal_distal_interphalangeal_3"));
SoHAnimJoint101->setCenter(new float[]{0.2026,0.7011,-0.0494});
SoHAnimJoint101->setSkinCoordIndex(new int32_t[]{183,184,185,186,187,188,189,190,191}, 9);
SoHAnimJoint101->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 9);
SoHAnimJoint100->addChildren(*SoHAnimJoint101);

SoHAnimJoint99->addChildren(*SoHAnimJoint100);

SoHAnimJoint98->addChildren(*SoHAnimJoint99);

SoHAnimJoint90->addChildren(*SoHAnimJoint98);

SoHAnimJoint* SoHAnimJoint102 = new SoHAnimJoint();
SoHAnimJoint102->setDEF(QString("Joe_l_carpometacarpal_4"));
SoHAnimJoint102->X3DNode::setName(QString("l_carpometacarpal_4"));
SoHAnimJoint102->setCenter(new float[]{0.1956,0.8019,-0.0794});
SoHAnimJoint102->setSkinCoordIndex(new int32_t[]{133,134}, 2);
SoHAnimJoint102->setSkinCoordWeight(new float[]{1.0,1.0}, 2);
SoHAnimJoint* SoHAnimJoint103 = new SoHAnimJoint();
SoHAnimJoint103->setDEF(QString("Joe_l_metacarpophalangeal_4"));
SoHAnimJoint103->X3DNode::setName(QString("l_metacarpophalangeal_4"));
SoHAnimJoint103->setCenter(new float[]{0.1956,0.7815,-0.0794});
SoHAnimJoint103->setSkinCoordIndex(new int32_t[]{158,159,164,165}, 4);
SoHAnimJoint103->setSkinCoordWeight(new float[]{1.0,1.0,0.5,0.5}, 4);
SoHAnimJoint* SoHAnimJoint104 = new SoHAnimJoint();
SoHAnimJoint104->setDEF(QString("Joe_l_carpal_proximal_interphalangeal_4"));
SoHAnimJoint104->X3DNode::setName(QString("l_carpal_proximal_interphalangeal_4"));
SoHAnimJoint104->setCenter(new float[]{0.1973,0.7287,-0.0777});
SoHAnimJoint104->setSkinCoordIndex(new int32_t[]{192,193,194,195}, 4);
SoHAnimJoint104->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0}, 4);
SoHAnimJoint* SoHAnimJoint105 = new SoHAnimJoint();
SoHAnimJoint105->setDEF(QString("Joe_l_carpal_distal_interphalangeal_4"));
SoHAnimJoint105->X3DNode::setName(QString("l_carpal_distal_interphalangeal_4"));
SoHAnimJoint105->setCenter(new float[]{0.1983,0.7045,-0.0767});
SoHAnimJoint105->setSkinCoordIndex(new int32_t[]{196,197,198,199,200,201,202,203,204}, 9);
SoHAnimJoint105->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 9);
SoHAnimJoint104->addChildren(*SoHAnimJoint105);

SoHAnimJoint103->addChildren(*SoHAnimJoint104);

SoHAnimJoint102->addChildren(*SoHAnimJoint103);

SoHAnimJoint90->addChildren(*SoHAnimJoint102);

SoHAnimJoint* SoHAnimJoint106 = new SoHAnimJoint();
SoHAnimJoint106->setDEF(QString("Joe_l_carpometacarpal_5"));
SoHAnimJoint106->X3DNode::setName(QString("l_carpometacarpal_5"));
SoHAnimJoint106->setCenter(new float[]{0.1925,0.8066,-0.1036});
SoHAnimJoint106->setSkinCoordIndex(new int32_t[]{135,136,137,165}, 4);
SoHAnimJoint106->setSkinCoordWeight(new float[]{1.0,1.0,1.0,0.5}, 4);
SoHAnimJoint* SoHAnimJoint107 = new SoHAnimJoint();
SoHAnimJoint107->setDEF(QString("Joe_l_metacarpophalangeal_5"));
SoHAnimJoint107->X3DNode::setName(QString("l_metacarpophalangeal_5"));
SoHAnimJoint107->setCenter(new float[]{0.1925,0.7866,-0.1036});
SoHAnimJoint107->setSkinCoordIndex(new int32_t[]{160,161,162}, 3);
SoHAnimJoint107->setSkinCoordWeight(new float[]{1.0,1.0,1.0}, 3);
SoHAnimJoint* SoHAnimJoint108 = new SoHAnimJoint();
SoHAnimJoint108->setDEF(QString("Joe_l_carpal_proximal_interphalangeal_5"));
SoHAnimJoint108->X3DNode::setName(QString("l_carpal_proximal_interphalangeal_5"));
SoHAnimJoint108->setCenter(new float[]{0.1938,0.7452,-0.1024});
SoHAnimJoint108->setSkinCoordIndex(new int32_t[]{205,206,207,208}, 4);
SoHAnimJoint108->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0}, 4);
SoHAnimJoint* SoHAnimJoint109 = new SoHAnimJoint();
SoHAnimJoint109->setDEF(QString("Joe_l_carpal_distal_interphalangeal_5"));
SoHAnimJoint109->X3DNode::setName(QString("l_carpal_distal_interphalangeal_5"));
SoHAnimJoint109->setCenter(new float[]{0.1948,0.7277,-0.1017});
SoHAnimJoint109->setSkinCoordIndex(new int32_t[]{209,210,211,212,213,214,215,216,217}, 9);
SoHAnimJoint109->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 9);
SoHAnimJoint108->addChildren(*SoHAnimJoint109);

SoHAnimJoint107->addChildren(*SoHAnimJoint108);

SoHAnimJoint106->addChildren(*SoHAnimJoint107);

SoHAnimJoint90->addChildren(*SoHAnimJoint106);

SoHAnimJoint89->addChildren(*SoHAnimJoint90);

SoHAnimJoint88->addChildren(*SoHAnimJoint89);

SoHAnimJoint87->addChildren(*SoHAnimJoint88);

SoHAnimJoint86->addChildren(*SoHAnimJoint87);

SoHAnimJoint69->addChildren(*SoHAnimJoint86);

SoHAnimJoint* SoHAnimJoint110 = new SoHAnimJoint();
SoHAnimJoint110->setDEF(QString("Joe_r_sternoclavicular"));
SoHAnimJoint110->X3DNode::setName(QString("r_sternoclavicular"));
SoHAnimJoint110->setCenter(new float[]{-0.03,1.46,0.0});
SoHAnimJoint110->setSkinCoordIndex(new int32_t[]{10}, 1);
SoHAnimJoint110->setSkinCoordWeight(new float[]{1.0}, 1);
SoHAnimJoint* SoHAnimJoint111 = new SoHAnimJoint();
SoHAnimJoint111->setDEF(QString("Joe_r_acromioclavicular"));
SoHAnimJoint111->X3DNode::setName(QString("r_acromioclavicular"));
SoHAnimJoint111->setCenter(new float[]{-0.09,1.41,-0.11});
SoHAnimJoint111->setSkinCoordIndex(new int32_t[]{77,29}, 2);
SoHAnimJoint111->setSkinCoordWeight(new float[]{1.0,0.9}, 2);
SoHAnimJoint* SoHAnimJoint112 = new SoHAnimJoint();
SoHAnimJoint112->setDEF(QString("Joe_r_shoulder"));
SoHAnimJoint112->X3DNode::setName(QString("r_shoulder"));
SoHAnimJoint112->setRotation(new float[]{0.0,0.0,-1.0,1.7121984064579});
SoHAnimJoint112->setCenter(new float[]{-0.2,1.44,-0.04});
SoHAnimJoint112->setSkinCoordIndex(new int32_t[]{29,30,32,78,218,219,220,221,86,88}, 10);
SoHAnimJoint112->setSkinCoordWeight(new float[]{0.1,1.0,1.0,1.0,1.0,1.0,1.0,1.0,0.3,0.2}, 10);
SoHAnimJoint* SoHAnimJoint113 = new SoHAnimJoint();
SoHAnimJoint113->setDEF(QString("Joe_r_elbow"));
SoHAnimJoint113->X3DNode::setName(QString("r_elbow"));
SoHAnimJoint113->setRotation(new float[]{-0.80893714343502,-0.587895141986384,0.0,0.512375525586369});
SoHAnimJoint113->setCenter(new float[]{-0.2,1.1388,-0.04});
SoHAnimJoint113->setSkinCoordIndex(new int32_t[]{33,34,35,225,226,227,228,229,231,232,233,234}, 12);
SoHAnimJoint113->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 12);
SoHAnimJoint* SoHAnimJoint114 = new SoHAnimJoint();
SoHAnimJoint114->setDEF(QString("Joe_r_radiocarpal"));
SoHAnimJoint114->X3DNode::setName(QString("r_radiocarpal"));
SoHAnimJoint114->setRotation(new float[]{0.0,-0.670839596599646,-0.741602478174135,0.341691938879626});
SoHAnimJoint114->setCenter(new float[]{-0.2,0.89,-0.04});
SoHAnimJoint114->setSkinCoordIndex(new int32_t[]{235,236,237,238,239,240,241,242}, 8);
SoHAnimJoint114->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 8);
SoHAnimJoint* SoHAnimJoint115 = new SoHAnimJoint();
SoHAnimJoint115->setDEF(QString("Joe_r_carpometacarpal_1"));
SoHAnimJoint115->X3DNode::setName(QString("r_carpometacarpal_1"));
SoHAnimJoint115->setCenter(new float[]{-0.2,0.85,0.0});
SoHAnimJoint115->setSkinCoordIndex(new int32_t[]{243,244}, 2);
SoHAnimJoint115->setSkinCoordWeight(new float[]{1.0,1.0}, 2);
SoHAnimJoint* SoHAnimJoint116 = new SoHAnimJoint();
SoHAnimJoint116->setDEF(QString("Joe_r_metacarpophalangeal_1"));
SoHAnimJoint116->X3DNode::setName(QString("r_metacarpophalangeal_1"));
SoHAnimJoint116->setCenter(new float[]{-0.2,0.82,0.03});
SoHAnimJoint116->setSkinCoordIndex(new int32_t[]{254,255,256,257,258,259}, 6);
SoHAnimJoint116->setSkinCoordWeight(new float[]{0.5,0.5,0.5,1.0,1.0,1.0}, 6);
SoHAnimJoint* SoHAnimJoint117 = new SoHAnimJoint();
SoHAnimJoint117->setDEF(QString("Joe_r_carpal_interphalangeal_1"));
SoHAnimJoint117->X3DNode::setName(QString("r_carpal_interphalangeal_1"));
SoHAnimJoint117->setCenter(new float[]{-0.2,0.8,0.05});
SoHAnimJoint117->setSkinCoordIndex(new int32_t[]{260,261,262,263,264,265,266,267,268}, 9);
SoHAnimJoint117->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 9);
SoHAnimJoint116->addChildren(*SoHAnimJoint117);

SoHAnimJoint115->addChildren(*SoHAnimJoint116);

SoHAnimJoint114->addChildren(*SoHAnimJoint115);

SoHAnimJoint* SoHAnimJoint118 = new SoHAnimJoint();
SoHAnimJoint118->setDEF(QString("Joe_r_carpometacarpal_2"));
SoHAnimJoint118->X3DNode::setName(QString("r_carpometacarpal_2"));
SoHAnimJoint118->setRotation(new float[]{0.0,0.0,1.0,0.302412748336791});
SoHAnimJoint118->setCenter(new float[]{-0.2,0.84,-0.015});
SoHAnimJoint118->setSkinCoordIndex(new int32_t[]{245,246}, 2);
SoHAnimJoint118->setSkinCoordWeight(new float[]{1.0,1.0}, 2);
SoHAnimJoint* SoHAnimJoint119 = new SoHAnimJoint();
SoHAnimJoint119->setDEF(QString("Joe_r_metacarpophalangeal_2"));
SoHAnimJoint119->X3DNode::setName(QString("r_metacarpophalangeal_2"));
SoHAnimJoint119->setRotation(new float[]{0.0,0.0,1.0,0.453619122505188});
SoHAnimJoint119->setCenter(new float[]{-0.2,0.793,-0.015});
SoHAnimJoint119->setSkinCoordIndex(new int32_t[]{254,255,256,269,270,271,279}, 7);
SoHAnimJoint119->setSkinCoordWeight(new float[]{0.5,0.5,0.5,1.0,1.0,1.0,0.5}, 7);
SoHAnimJoint* SoHAnimJoint120 = new SoHAnimJoint();
SoHAnimJoint120->setDEF(QString("Joe_r_carpal_proximal_interphalangeal_2"));
SoHAnimJoint120->X3DNode::setName(QString("r_carpal_proximal_interphalangeal_2"));
SoHAnimJoint120->setRotation(new float[]{0.0,0.0,1.0,0.453619122505188});
SoHAnimJoint120->setCenter(new float[]{-0.2,0.745,-0.015});
SoHAnimJoint120->setSkinCoordIndex(new int32_t[]{282,283,284,285}, 4);
SoHAnimJoint120->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0}, 4);
SoHAnimJoint* SoHAnimJoint121 = new SoHAnimJoint();
SoHAnimJoint121->setDEF(QString("Joe_r_carpal_distal_interphalangeal_2"));
SoHAnimJoint121->X3DNode::setName(QString("r_carpal_distal_interphalangeal_2"));
SoHAnimJoint121->setRotation(new float[]{0.0,0.0,1.0,0.453619122505188});
SoHAnimJoint121->setCenter(new float[]{-0.2,0.72,-0.015});
SoHAnimJoint121->setSkinCoordIndex(new int32_t[]{286,287,288,289,290,291,292,293,294}, 9);
SoHAnimJoint121->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 9);
SoHAnimJoint120->addChildren(*SoHAnimJoint121);

SoHAnimJoint119->addChildren(*SoHAnimJoint120);

SoHAnimJoint118->addChildren(*SoHAnimJoint119);

SoHAnimJoint114->addChildren(*SoHAnimJoint118);

SoHAnimJoint* SoHAnimJoint122 = new SoHAnimJoint();
SoHAnimJoint122->setDEF(QString("Joe_r_carpometacarpal_3"));
SoHAnimJoint122->X3DNode::setName(QString("r_carpometacarpal_3"));
SoHAnimJoint122->setRotation(new float[]{0.0,0.0,1.0,0.302412748336791});
SoHAnimJoint122->setCenter(new float[]{-0.2,0.835,-0.04});
SoHAnimJoint122->setSkinCoordIndex(new int32_t[]{247,248}, 2);
SoHAnimJoint122->setSkinCoordWeight(new float[]{1.0,1.0}, 2);
SoHAnimJoint* SoHAnimJoint123 = new SoHAnimJoint();
SoHAnimJoint123->setDEF(QString("Joe_r_metacarpophalangeal_3"));
SoHAnimJoint123->X3DNode::setName(QString("r_metacarpophalangeal_3"));
SoHAnimJoint123->setRotation(new float[]{0.0,0.0,1.0,0.453619122505188});
SoHAnimJoint123->setCenter(new float[]{-0.2,0.788,-0.04});
SoHAnimJoint123->setSkinCoordIndex(new int32_t[]{272,273,279,280}, 4);
SoHAnimJoint123->setSkinCoordWeight(new float[]{1.0,1.0,0.5,0.5}, 4);
SoHAnimJoint* SoHAnimJoint124 = new SoHAnimJoint();
SoHAnimJoint124->setDEF(QString("Joe_r_carpal_proximal_interphalangeal_3"));
SoHAnimJoint124->X3DNode::setName(QString("r_carpal_proximal_interphalangeal_3"));
SoHAnimJoint124->setRotation(new float[]{0.0,0.0,1.0,0.453619122505188});
SoHAnimJoint124->setCenter(new float[]{-0.2,0.74,-0.04});
SoHAnimJoint124->setSkinCoordIndex(new int32_t[]{295,296,297,298}, 4);
SoHAnimJoint124->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0}, 4);
SoHAnimJoint* SoHAnimJoint125 = new SoHAnimJoint();
SoHAnimJoint125->setDEF(QString("Joe_r_carpal_distal_interphalangeal_3"));
SoHAnimJoint125->X3DNode::setName(QString("r_carpal_distal_interphalangeal_3"));
SoHAnimJoint125->setRotation(new float[]{0.0,0.0,1.0,0.453619122505188});
SoHAnimJoint125->setCenter(new float[]{-0.2,0.7142,-0.04});
SoHAnimJoint125->setSkinCoordIndex(new int32_t[]{299,300,301,302,303,304,305,306,307}, 9);
SoHAnimJoint125->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 9);
SoHAnimJoint124->addChildren(*SoHAnimJoint125);

SoHAnimJoint123->addChildren(*SoHAnimJoint124);

SoHAnimJoint122->addChildren(*SoHAnimJoint123);

SoHAnimJoint114->addChildren(*SoHAnimJoint122);

SoHAnimJoint* SoHAnimJoint126 = new SoHAnimJoint();
SoHAnimJoint126->setDEF(QString("Joe_r_carpometacarpal_4"));
SoHAnimJoint126->X3DNode::setName(QString("r_carpometacarpal_4"));
SoHAnimJoint126->setRotation(new float[]{0.0,0.0,1.0,0.302412748336791});
SoHAnimJoint126->setCenter(new float[]{-0.2,0.835,-0.065});
SoHAnimJoint126->setSkinCoordIndex(new int32_t[]{249,250}, 2);
SoHAnimJoint126->setSkinCoordWeight(new float[]{1.0,1.0}, 2);
SoHAnimJoint* SoHAnimJoint127 = new SoHAnimJoint();
SoHAnimJoint127->setDEF(QString("Joe_r_metacarpophalangeal_4"));
SoHAnimJoint127->X3DNode::setName(QString("r_metacarpophalangeal_4"));
SoHAnimJoint127->setRotation(new float[]{0.0,0.0,1.0,0.453619122505188});
SoHAnimJoint127->setCenter(new float[]{-0.2,0.793,-0.065});
SoHAnimJoint127->setSkinCoordIndex(new int32_t[]{274,275,280,281}, 4);
SoHAnimJoint127->setSkinCoordWeight(new float[]{1.0,1.0,0.5,0.5}, 4);
SoHAnimJoint* SoHAnimJoint128 = new SoHAnimJoint();
SoHAnimJoint128->setDEF(QString("Joe_r_carpal_proximal_interphalangeal_4"));
SoHAnimJoint128->X3DNode::setName(QString("r_carpal_proximal_interphalangeal_4"));
SoHAnimJoint128->setRotation(new float[]{0.0,0.0,1.0,0.453619122505188});
SoHAnimJoint128->setCenter(new float[]{-0.2,0.74,-0.065});
SoHAnimJoint128->setSkinCoordIndex(new int32_t[]{308,309,310,311}, 4);
SoHAnimJoint128->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0}, 4);
SoHAnimJoint* SoHAnimJoint129 = new SoHAnimJoint();
SoHAnimJoint129->setDEF(QString("Joe_r_carpal_distal_interphalangeal_4"));
SoHAnimJoint129->X3DNode::setName(QString("r_carpal_distal_interphalangeal_4"));
SoHAnimJoint129->setRotation(new float[]{0.0,0.0,1.0,0.453619122505188});
SoHAnimJoint129->setCenter(new float[]{-0.2,0.7177,-0.065});
SoHAnimJoint129->setSkinCoordIndex(new int32_t[]{312,313,314,315,316,317,318,319,320}, 9);
SoHAnimJoint129->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 9);
SoHAnimJoint128->addChildren(*SoHAnimJoint129);

SoHAnimJoint127->addChildren(*SoHAnimJoint128);

SoHAnimJoint126->addChildren(*SoHAnimJoint127);

SoHAnimJoint114->addChildren(*SoHAnimJoint126);

SoHAnimJoint* SoHAnimJoint130 = new SoHAnimJoint();
SoHAnimJoint130->setDEF(QString("Joe_r_carpometacarpal_5"));
SoHAnimJoint130->X3DNode::setName(QString("r_carpometacarpal_5"));
SoHAnimJoint130->setRotation(new float[]{0.0,0.0,1.0,0.302412748336791});
SoHAnimJoint130->setCenter(new float[]{-0.2,0.84,-0.085});
SoHAnimJoint130->setSkinCoordIndex(new int32_t[]{251,252,253,281}, 4);
SoHAnimJoint130->setSkinCoordWeight(new float[]{1.0,1.0,1.0,0.5}, 4);
SoHAnimJoint* SoHAnimJoint131 = new SoHAnimJoint();
SoHAnimJoint131->setDEF(QString("Joe_r_metacarpophalangeal_5"));
SoHAnimJoint131->X3DNode::setName(QString("r_metacarpophalangeal_5"));
SoHAnimJoint131->setRotation(new float[]{0.0,0.0,1.0,0.453619122505188});
SoHAnimJoint131->setCenter(new float[]{-0.2,0.79,-0.085});
SoHAnimJoint131->setSkinCoordIndex(new int32_t[]{276,277,278}, 3);
SoHAnimJoint131->setSkinCoordWeight(new float[]{1.0,1.0,1.0}, 3);
SoHAnimJoint* SoHAnimJoint132 = new SoHAnimJoint();
SoHAnimJoint132->setDEF(QString("Joe_r_carpal_proximal_interphalangeal_5"));
SoHAnimJoint132->X3DNode::setName(QString("r_carpal_proximal_interphalangeal_5"));
SoHAnimJoint132->setRotation(new float[]{0.0,0.0,1.0,0.453619122505188});
SoHAnimJoint132->setCenter(new float[]{-0.2,0.755,-0.085});
SoHAnimJoint132->setSkinCoordIndex(new int32_t[]{321,322,323,324}, 4);
SoHAnimJoint132->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0}, 4);
SoHAnimJoint* SoHAnimJoint133 = new SoHAnimJoint();
SoHAnimJoint133->setDEF(QString("Joe_r_carpal_distal_interphalangeal_5"));
SoHAnimJoint133->X3DNode::setName(QString("r_carpal_distal_interphalangeal_5"));
SoHAnimJoint133->setRotation(new float[]{0.0,0.0,1.0,0.453619122505188});
SoHAnimJoint133->setCenter(new float[]{-0.2,0.735,-0.09});
SoHAnimJoint133->setSkinCoordIndex(new int32_t[]{325,326,327,328,329,330,331,332,333}, 9);
SoHAnimJoint133->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 9);
SoHAnimJoint132->addChildren(*SoHAnimJoint133);

SoHAnimJoint131->addChildren(*SoHAnimJoint132);

SoHAnimJoint130->addChildren(*SoHAnimJoint131);

SoHAnimJoint114->addChildren(*SoHAnimJoint130);

SoHAnimJoint113->addChildren(*SoHAnimJoint114);

SoHAnimJoint112->addChildren(*SoHAnimJoint113);

SoHAnimJoint111->addChildren(*SoHAnimJoint112);

SoHAnimJoint110->addChildren(*SoHAnimJoint111);

SoHAnimJoint69->addChildren(*SoHAnimJoint110);

SoHAnimJoint68->addChildren(*SoHAnimJoint69);

SoHAnimJoint67->addChildren(*SoHAnimJoint68);

SoHAnimJoint66->addChildren(*SoHAnimJoint67);

SoHAnimJoint65->addChildren(*SoHAnimJoint66);

SoHAnimJoint64->addChildren(*SoHAnimJoint65);

SoHAnimJoint63->addChildren(*SoHAnimJoint64);

SoHAnimJoint62->addChildren(*SoHAnimJoint63);

SoHAnimJoint61->addChildren(*SoHAnimJoint62);

SoHAnimJoint60->addChildren(*SoHAnimJoint61);

SoHAnimJoint59->addChildren(*SoHAnimJoint60);

SoHAnimJoint58->addChildren(*SoHAnimJoint59);

SoHAnimJoint57->addChildren(*SoHAnimJoint58);

SoHAnimJoint56->addChildren(*SoHAnimJoint57);

SoHAnimJoint55->addChildren(*SoHAnimJoint56);

SoHAnimJoint54->addChildren(*SoHAnimJoint55);

SoHAnimJoint53->addChildren(*SoHAnimJoint54);

SoHAnimJoint31->addChildren(*SoHAnimJoint53);

SoHAnimHumanoid28->setSkeleton(*SoHAnimJoint31);

SoHAnimJoint* SoHAnimJoint134 = new SoHAnimJoint();
SoHAnimJoint134->setUSE(QString("Joe_humanoid_root"));
SoHAnimHumanoid28->setJoints(*SoHAnimJoint134);

SoHAnimJoint* SoHAnimJoint135 = new SoHAnimJoint();
SoHAnimJoint135->setUSE(QString("Joe_sacroiliac"));
SoHAnimHumanoid28->setJoints(*SoHAnimJoint135);

SoHAnimJoint* SoHAnimJoint136 = new SoHAnimJoint();
SoHAnimJoint136->setUSE(QString("Joe_skullbase"));
SoHAnimHumanoid28->setJoints(*SoHAnimJoint136);

SoHAnimJoint* SoHAnimJoint137 = new SoHAnimJoint();
SoHAnimJoint137->setUSE(QString("Joe_temporomandibular"));
SoHAnimHumanoid28->setJoints(*SoHAnimJoint137);

SoHAnimJoint* SoHAnimJoint138 = new SoHAnimJoint();
SoHAnimJoint138->setUSE(QString("Joe_vc1"));
SoHAnimHumanoid28->setJoints(*SoHAnimJoint138);

SoHAnimJoint* SoHAnimJoint139 = new SoHAnimJoint();
SoHAnimJoint139->setUSE(QString("Joe_vc2"));
SoHAnimHumanoid28->setJoints(*SoHAnimJoint139);

SoHAnimJoint* SoHAnimJoint140 = new SoHAnimJoint();
SoHAnimJoint140->setUSE(QString("Joe_vc3"));
SoHAnimHumanoid28->setJoints(*SoHAnimJoint140);

SoHAnimJoint* SoHAnimJoint141 = new SoHAnimJoint();
SoHAnimJoint141->setUSE(QString("Joe_vc4"));
SoHAnimHumanoid28->setJoints(*SoHAnimJoint141);

SoHAnimJoint* SoHAnimJoint142 = new SoHAnimJoint();
SoHAnimJoint142->setUSE(QString("Joe_vc5"));
SoHAnimHumanoid28->setJoints(*SoHAnimJoint142);

SoHAnimJoint* SoHAnimJoint143 = new SoHAnimJoint();
SoHAnimJoint143->setUSE(QString("Joe_vc6"));
SoHAnimHumanoid28->setJoints(*SoHAnimJoint143);

SoHAnimJoint* SoHAnimJoint144 = new SoHAnimJoint();
SoHAnimJoint144->setUSE(QString("Joe_vc7"));
SoHAnimHumanoid28->setJoints(*SoHAnimJoint144);

SoHAnimJoint* SoHAnimJoint145 = new SoHAnimJoint();
SoHAnimJoint145->setUSE(QString("Joe_vl1"));
SoHAnimHumanoid28->setJoints(*SoHAnimJoint145);

SoHAnimJoint* SoHAnimJoint146 = new SoHAnimJoint();
SoHAnimJoint146->setUSE(QString("Joe_vl2"));
SoHAnimHumanoid28->setJoints(*SoHAnimJoint146);

SoHAnimJoint* SoHAnimJoint147 = new SoHAnimJoint();
SoHAnimJoint147->setUSE(QString("Joe_vl3"));
SoHAnimHumanoid28->setJoints(*SoHAnimJoint147);

SoHAnimJoint* SoHAnimJoint148 = new SoHAnimJoint();
SoHAnimJoint148->setUSE(QString("Joe_vl4"));
SoHAnimHumanoid28->setJoints(*SoHAnimJoint148);

SoHAnimJoint* SoHAnimJoint149 = new SoHAnimJoint();
SoHAnimJoint149->setUSE(QString("Joe_vl5"));
SoHAnimHumanoid28->setJoints(*SoHAnimJoint149);

SoHAnimJoint* SoHAnimJoint150 = new SoHAnimJoint();
SoHAnimJoint150->setUSE(QString("Joe_vt1"));
SoHAnimHumanoid28->setJoints(*SoHAnimJoint150);

SoHAnimJoint* SoHAnimJoint151 = new SoHAnimJoint();
SoHAnimJoint151->setUSE(QString("Joe_vt10"));
SoHAnimHumanoid28->setJoints(*SoHAnimJoint151);

SoHAnimJoint* SoHAnimJoint152 = new SoHAnimJoint();
SoHAnimJoint152->setUSE(QString("Joe_vt11"));
SoHAnimHumanoid28->setJoints(*SoHAnimJoint152);

SoHAnimJoint* SoHAnimJoint153 = new SoHAnimJoint();
SoHAnimJoint153->setUSE(QString("Joe_vt12"));
SoHAnimHumanoid28->setJoints(*SoHAnimJoint153);

SoHAnimJoint* SoHAnimJoint154 = new SoHAnimJoint();
SoHAnimJoint154->setUSE(QString("Joe_vt2"));
SoHAnimHumanoid28->setJoints(*SoHAnimJoint154);

SoHAnimJoint* SoHAnimJoint155 = new SoHAnimJoint();
SoHAnimJoint155->setUSE(QString("Joe_vt3"));
SoHAnimHumanoid28->setJoints(*SoHAnimJoint155);

SoHAnimJoint* SoHAnimJoint156 = new SoHAnimJoint();
SoHAnimJoint156->setUSE(QString("Joe_vt4"));
SoHAnimHumanoid28->setJoints(*SoHAnimJoint156);

SoHAnimJoint* SoHAnimJoint157 = new SoHAnimJoint();
SoHAnimJoint157->setUSE(QString("Joe_vt5"));
SoHAnimHumanoid28->setJoints(*SoHAnimJoint157);

SoHAnimJoint* SoHAnimJoint158 = new SoHAnimJoint();
SoHAnimJoint158->setUSE(QString("Joe_vt6"));
SoHAnimHumanoid28->setJoints(*SoHAnimJoint158);

SoHAnimJoint* SoHAnimJoint159 = new SoHAnimJoint();
SoHAnimJoint159->setUSE(QString("Joe_vt7"));
SoHAnimHumanoid28->setJoints(*SoHAnimJoint159);

SoHAnimJoint* SoHAnimJoint160 = new SoHAnimJoint();
SoHAnimJoint160->setUSE(QString("Joe_vt8"));
SoHAnimHumanoid28->setJoints(*SoHAnimJoint160);

SoHAnimJoint* SoHAnimJoint161 = new SoHAnimJoint();
SoHAnimJoint161->setUSE(QString("Joe_vt9"));
SoHAnimHumanoid28->setJoints(*SoHAnimJoint161);

SoHAnimJoint* SoHAnimJoint162 = new SoHAnimJoint();
SoHAnimJoint162->setUSE(QString("Joe_l_acromioclavicular"));
SoHAnimHumanoid28->setJoints(*SoHAnimJoint162);

SoHAnimJoint* SoHAnimJoint163 = new SoHAnimJoint();
SoHAnimJoint163->setUSE(QString("Joe_r_acromioclavicular"));
SoHAnimHumanoid28->setJoints(*SoHAnimJoint163);

SoHAnimJoint* SoHAnimJoint164 = new SoHAnimJoint();
SoHAnimJoint164->setUSE(QString("Joe_l_carpal_distal_interphalangeal_2"));
SoHAnimHumanoid28->setJoints(*SoHAnimJoint164);

SoHAnimJoint* SoHAnimJoint165 = new SoHAnimJoint();
SoHAnimJoint165->setUSE(QString("Joe_r_carpal_distal_interphalangeal_2"));
SoHAnimHumanoid28->setJoints(*SoHAnimJoint165);

SoHAnimJoint* SoHAnimJoint166 = new SoHAnimJoint();
SoHAnimJoint166->setUSE(QString("Joe_l_carpal_distal_interphalangeal_3"));
SoHAnimHumanoid28->setJoints(*SoHAnimJoint166);

SoHAnimJoint* SoHAnimJoint167 = new SoHAnimJoint();
SoHAnimJoint167->setUSE(QString("Joe_r_carpal_distal_interphalangeal_3"));
SoHAnimHumanoid28->setJoints(*SoHAnimJoint167);

SoHAnimJoint* SoHAnimJoint168 = new SoHAnimJoint();
SoHAnimJoint168->setUSE(QString("Joe_l_carpal_distal_interphalangeal_4"));
SoHAnimHumanoid28->setJoints(*SoHAnimJoint168);

SoHAnimJoint* SoHAnimJoint169 = new SoHAnimJoint();
SoHAnimJoint169->setUSE(QString("Joe_r_carpal_distal_interphalangeal_4"));
SoHAnimHumanoid28->setJoints(*SoHAnimJoint169);

SoHAnimJoint* SoHAnimJoint170 = new SoHAnimJoint();
SoHAnimJoint170->setUSE(QString("Joe_l_carpal_distal_interphalangeal_5"));
SoHAnimHumanoid28->setJoints(*SoHAnimJoint170);

SoHAnimJoint* SoHAnimJoint171 = new SoHAnimJoint();
SoHAnimJoint171->setUSE(QString("Joe_r_carpal_distal_interphalangeal_5"));
SoHAnimHumanoid28->setJoints(*SoHAnimJoint171);

SoHAnimJoint* SoHAnimJoint172 = new SoHAnimJoint();
SoHAnimJoint172->setUSE(QString("Joe_l_carpal_interphalangeal_1"));
SoHAnimHumanoid28->setJoints(*SoHAnimJoint172);

SoHAnimJoint* SoHAnimJoint173 = new SoHAnimJoint();
SoHAnimJoint173->setUSE(QString("Joe_r_carpal_interphalangeal_1"));
SoHAnimHumanoid28->setJoints(*SoHAnimJoint173);

SoHAnimJoint* SoHAnimJoint174 = new SoHAnimJoint();
SoHAnimJoint174->setUSE(QString("Joe_l_carpal_proximal_interphalangeal_2"));
SoHAnimHumanoid28->setJoints(*SoHAnimJoint174);

SoHAnimJoint* SoHAnimJoint175 = new SoHAnimJoint();
SoHAnimJoint175->setUSE(QString("Joe_r_carpal_proximal_interphalangeal_2"));
SoHAnimHumanoid28->setJoints(*SoHAnimJoint175);

SoHAnimJoint* SoHAnimJoint176 = new SoHAnimJoint();
SoHAnimJoint176->setUSE(QString("Joe_l_carpal_proximal_interphalangeal_3"));
SoHAnimHumanoid28->setJoints(*SoHAnimJoint176);

SoHAnimJoint* SoHAnimJoint177 = new SoHAnimJoint();
SoHAnimJoint177->setUSE(QString("Joe_r_carpal_proximal_interphalangeal_3"));
SoHAnimHumanoid28->setJoints(*SoHAnimJoint177);

SoHAnimJoint* SoHAnimJoint178 = new SoHAnimJoint();
SoHAnimJoint178->setUSE(QString("Joe_l_carpal_proximal_interphalangeal_4"));
SoHAnimHumanoid28->setJoints(*SoHAnimJoint178);

SoHAnimJoint* SoHAnimJoint179 = new SoHAnimJoint();
SoHAnimJoint179->setUSE(QString("Joe_r_carpal_proximal_interphalangeal_4"));
SoHAnimHumanoid28->setJoints(*SoHAnimJoint179);

SoHAnimJoint* SoHAnimJoint180 = new SoHAnimJoint();
SoHAnimJoint180->setUSE(QString("Joe_l_carpal_proximal_interphalangeal_5"));
SoHAnimHumanoid28->setJoints(*SoHAnimJoint180);

SoHAnimJoint* SoHAnimJoint181 = new SoHAnimJoint();
SoHAnimJoint181->setUSE(QString("Joe_r_carpal_proximal_interphalangeal_5"));
SoHAnimHumanoid28->setJoints(*SoHAnimJoint181);

SoHAnimJoint* SoHAnimJoint182 = new SoHAnimJoint();
SoHAnimJoint182->setUSE(QString("Joe_l_carpometacarpal_1"));
SoHAnimHumanoid28->setJoints(*SoHAnimJoint182);

SoHAnimJoint* SoHAnimJoint183 = new SoHAnimJoint();
SoHAnimJoint183->setUSE(QString("Joe_r_carpometacarpal_1"));
SoHAnimHumanoid28->setJoints(*SoHAnimJoint183);

SoHAnimJoint* SoHAnimJoint184 = new SoHAnimJoint();
SoHAnimJoint184->setUSE(QString("Joe_l_carpometacarpal_2"));
SoHAnimHumanoid28->setJoints(*SoHAnimJoint184);

SoHAnimJoint* SoHAnimJoint185 = new SoHAnimJoint();
SoHAnimJoint185->setUSE(QString("Joe_r_carpometacarpal_2"));
SoHAnimHumanoid28->setJoints(*SoHAnimJoint185);

SoHAnimJoint* SoHAnimJoint186 = new SoHAnimJoint();
SoHAnimJoint186->setUSE(QString("Joe_l_carpometacarpal_3"));
SoHAnimHumanoid28->setJoints(*SoHAnimJoint186);

SoHAnimJoint* SoHAnimJoint187 = new SoHAnimJoint();
SoHAnimJoint187->setUSE(QString("Joe_r_carpometacarpal_3"));
SoHAnimHumanoid28->setJoints(*SoHAnimJoint187);

SoHAnimJoint* SoHAnimJoint188 = new SoHAnimJoint();
SoHAnimJoint188->setUSE(QString("Joe_l_carpometacarpal_4"));
SoHAnimHumanoid28->setJoints(*SoHAnimJoint188);

SoHAnimJoint* SoHAnimJoint189 = new SoHAnimJoint();
SoHAnimJoint189->setUSE(QString("Joe_r_carpometacarpal_4"));
SoHAnimHumanoid28->setJoints(*SoHAnimJoint189);

SoHAnimJoint* SoHAnimJoint190 = new SoHAnimJoint();
SoHAnimJoint190->setUSE(QString("Joe_l_carpometacarpal_5"));
SoHAnimHumanoid28->setJoints(*SoHAnimJoint190);

SoHAnimJoint* SoHAnimJoint191 = new SoHAnimJoint();
SoHAnimJoint191->setUSE(QString("Joe_r_carpometacarpal_5"));
SoHAnimHumanoid28->setJoints(*SoHAnimJoint191);

SoHAnimJoint* SoHAnimJoint192 = new SoHAnimJoint();
SoHAnimJoint192->setUSE(QString("Joe_l_elbow"));
SoHAnimHumanoid28->setJoints(*SoHAnimJoint192);

SoHAnimJoint* SoHAnimJoint193 = new SoHAnimJoint();
SoHAnimJoint193->setUSE(QString("Joe_r_elbow"));
SoHAnimHumanoid28->setJoints(*SoHAnimJoint193);

SoHAnimJoint* SoHAnimJoint194 = new SoHAnimJoint();
SoHAnimJoint194->setUSE(QString("Joe_l_eyeball_joint"));
SoHAnimHumanoid28->setJoints(*SoHAnimJoint194);

SoHAnimJoint* SoHAnimJoint195 = new SoHAnimJoint();
SoHAnimJoint195->setUSE(QString("Joe_r_eyeball_joint"));
SoHAnimHumanoid28->setJoints(*SoHAnimJoint195);

SoHAnimJoint* SoHAnimJoint196 = new SoHAnimJoint();
SoHAnimJoint196->setUSE(QString("Joe_l_eyebrow_joint"));
SoHAnimHumanoid28->setJoints(*SoHAnimJoint196);

SoHAnimJoint* SoHAnimJoint197 = new SoHAnimJoint();
SoHAnimJoint197->setUSE(QString("Joe_r_eyebrow_joint"));
SoHAnimHumanoid28->setJoints(*SoHAnimJoint197);

SoHAnimJoint* SoHAnimJoint198 = new SoHAnimJoint();
SoHAnimJoint198->setUSE(QString("Joe_l_eyelid_joint"));
SoHAnimHumanoid28->setJoints(*SoHAnimJoint198);

SoHAnimJoint* SoHAnimJoint199 = new SoHAnimJoint();
SoHAnimJoint199->setUSE(QString("Joe_r_eyelid_joint"));
SoHAnimHumanoid28->setJoints(*SoHAnimJoint199);

SoHAnimJoint* SoHAnimJoint200 = new SoHAnimJoint();
SoHAnimJoint200->setUSE(QString("Joe_l_hip"));
SoHAnimHumanoid28->setJoints(*SoHAnimJoint200);

SoHAnimJoint* SoHAnimJoint201 = new SoHAnimJoint();
SoHAnimJoint201->setUSE(QString("Joe_r_hip"));
SoHAnimHumanoid28->setJoints(*SoHAnimJoint201);

SoHAnimJoint* SoHAnimJoint202 = new SoHAnimJoint();
SoHAnimJoint202->setUSE(QString("Joe_l_knee"));
SoHAnimHumanoid28->setJoints(*SoHAnimJoint202);

SoHAnimJoint* SoHAnimJoint203 = new SoHAnimJoint();
SoHAnimJoint203->setUSE(QString("Joe_r_knee"));
SoHAnimHumanoid28->setJoints(*SoHAnimJoint203);

SoHAnimJoint* SoHAnimJoint204 = new SoHAnimJoint();
SoHAnimJoint204->setUSE(QString("Joe_l_metacarpophalangeal_1"));
SoHAnimHumanoid28->setJoints(*SoHAnimJoint204);

SoHAnimJoint* SoHAnimJoint205 = new SoHAnimJoint();
SoHAnimJoint205->setUSE(QString("Joe_r_metacarpophalangeal_1"));
SoHAnimHumanoid28->setJoints(*SoHAnimJoint205);

SoHAnimJoint* SoHAnimJoint206 = new SoHAnimJoint();
SoHAnimJoint206->setUSE(QString("Joe_l_metacarpophalangeal_2"));
SoHAnimHumanoid28->setJoints(*SoHAnimJoint206);

SoHAnimJoint* SoHAnimJoint207 = new SoHAnimJoint();
SoHAnimJoint207->setUSE(QString("Joe_r_metacarpophalangeal_2"));
SoHAnimHumanoid28->setJoints(*SoHAnimJoint207);

SoHAnimJoint* SoHAnimJoint208 = new SoHAnimJoint();
SoHAnimJoint208->setUSE(QString("Joe_l_metacarpophalangeal_3"));
SoHAnimHumanoid28->setJoints(*SoHAnimJoint208);

SoHAnimJoint* SoHAnimJoint209 = new SoHAnimJoint();
SoHAnimJoint209->setUSE(QString("Joe_r_metacarpophalangeal_3"));
SoHAnimHumanoid28->setJoints(*SoHAnimJoint209);

SoHAnimJoint* SoHAnimJoint210 = new SoHAnimJoint();
SoHAnimJoint210->setUSE(QString("Joe_l_metacarpophalangeal_4"));
SoHAnimHumanoid28->setJoints(*SoHAnimJoint210);

SoHAnimJoint* SoHAnimJoint211 = new SoHAnimJoint();
SoHAnimJoint211->setUSE(QString("Joe_r_metacarpophalangeal_4"));
SoHAnimHumanoid28->setJoints(*SoHAnimJoint211);

SoHAnimJoint* SoHAnimJoint212 = new SoHAnimJoint();
SoHAnimJoint212->setUSE(QString("Joe_l_metacarpophalangeal_5"));
SoHAnimHumanoid28->setJoints(*SoHAnimJoint212);

SoHAnimJoint* SoHAnimJoint213 = new SoHAnimJoint();
SoHAnimJoint213->setUSE(QString("Joe_r_metacarpophalangeal_5"));
SoHAnimHumanoid28->setJoints(*SoHAnimJoint213);

SoHAnimJoint* SoHAnimJoint214 = new SoHAnimJoint();
SoHAnimJoint214->setUSE(QString("Joe_l_metatarsophalangeal_2"));
SoHAnimHumanoid28->setJoints(*SoHAnimJoint214);

SoHAnimJoint* SoHAnimJoint215 = new SoHAnimJoint();
SoHAnimJoint215->setUSE(QString("Joe_r_metatarsophalangeal_2"));
SoHAnimHumanoid28->setJoints(*SoHAnimJoint215);

SoHAnimJoint* SoHAnimJoint216 = new SoHAnimJoint();
SoHAnimJoint216->setUSE(QString("Joe_l_radiocarpal"));
SoHAnimHumanoid28->setJoints(*SoHAnimJoint216);

SoHAnimJoint* SoHAnimJoint217 = new SoHAnimJoint();
SoHAnimJoint217->setUSE(QString("Joe_r_radiocarpal"));
SoHAnimHumanoid28->setJoints(*SoHAnimJoint217);

SoHAnimJoint* SoHAnimJoint218 = new SoHAnimJoint();
SoHAnimJoint218->setUSE(QString("Joe_l_shoulder"));
SoHAnimHumanoid28->setJoints(*SoHAnimJoint218);

SoHAnimJoint* SoHAnimJoint219 = new SoHAnimJoint();
SoHAnimJoint219->setUSE(QString("Joe_r_shoulder"));
SoHAnimHumanoid28->setJoints(*SoHAnimJoint219);

SoHAnimJoint* SoHAnimJoint220 = new SoHAnimJoint();
SoHAnimJoint220->setUSE(QString("Joe_l_sternoclavicular"));
SoHAnimHumanoid28->setJoints(*SoHAnimJoint220);

SoHAnimJoint* SoHAnimJoint221 = new SoHAnimJoint();
SoHAnimJoint221->setUSE(QString("Joe_r_sternoclavicular"));
SoHAnimHumanoid28->setJoints(*SoHAnimJoint221);

SoHAnimJoint* SoHAnimJoint222 = new SoHAnimJoint();
SoHAnimJoint222->setUSE(QString("Joe_l_talocrural"));
SoHAnimHumanoid28->setJoints(*SoHAnimJoint222);

SoHAnimJoint* SoHAnimJoint223 = new SoHAnimJoint();
SoHAnimJoint223->setUSE(QString("Joe_r_talocrural"));
SoHAnimHumanoid28->setJoints(*SoHAnimJoint223);

SoHAnimJoint* SoHAnimJoint224 = new SoHAnimJoint();
SoHAnimJoint224->setUSE(QString("Joe_l_tarsal_distal_interphalangeal_2"));
SoHAnimHumanoid28->setJoints(*SoHAnimJoint224);

SoHAnimJoint* SoHAnimJoint225 = new SoHAnimJoint();
SoHAnimJoint225->setUSE(QString("Joe_r_tarsal_distal_interphalangeal_2"));
SoHAnimHumanoid28->setJoints(*SoHAnimJoint225);

SoHAnimJoint* SoHAnimJoint226 = new SoHAnimJoint();
SoHAnimJoint226->setUSE(QString("Joe_l_tarsometatarsal_2"));
SoHAnimHumanoid28->setJoints(*SoHAnimJoint226);

SoHAnimJoint* SoHAnimJoint227 = new SoHAnimJoint();
SoHAnimJoint227->setUSE(QString("Joe_r_tarsometatarsal_2"));
SoHAnimHumanoid28->setJoints(*SoHAnimJoint227);

SoHAnimSegment* SoHAnimSegment228 = new SoHAnimSegment();
SoHAnimSegment228->setUSE(QString("Joe_sacrum"));
SoHAnimHumanoid28->setSegments(*SoHAnimSegment228);

SoHAnimSite* SoHAnimSite229 = new SoHAnimSite();
SoHAnimSite229->setUSE(QString("Joe_RootFront_view"));
SoHAnimHumanoid28->setSites(*SoHAnimSite229);

SoCoordinate* SoCoordinate230 = new SoCoordinate();
SoCoordinate230->setDEF(QString("Joe_SkinCoord"));
SoCoordinate230->setPoint(new float[]{0.0,1.77,0.0,0.0,1.665,0.09,-0.033,1.62,0.087,0.033,1.62,0.087,0.0,1.55,0.097,-0.077,1.64,-0.01,-0.0527,1.58,0.015,0.077,1.64,-0.01,0.0527,1.58,0.015,0.0,1.625,-0.0925,-0.03,1.46,0.035,0.0,1.44,0.03,0.03,1.46,0.035,-0.1135,1.318,0.095,0.1135,1.318,0.095,0.0,1.25,0.113,-0.087,1.19,0.09,-0.0935,1.03,0.075,0.087,1.19,0.09,0.0935,1.03,0.075,-0.1425,1.065,0.0033,-0.15,0.9,-0.01,0.1425,1.065,0.0033,0.15,0.9,-0.01,0.0,1.53,-0.084,0.0049,1.1908,-0.1113,-0.0773,1.019,-0.12,0.0773,1.019,-0.12,0.005,1.0915,-0.1091,-0.178,1.4825,-0.0625,-0.17,1.38,0.007,-0.1884,0.8676,-0.036,-0.16,1.38,-0.127,-0.2,1.1388,-0.08,-0.244,1.1388,-0.04,-0.165,1.1388,-0.04,-0.23,1.133,-0.055,-0.1977,0.8169,-0.0177,-0.1941,0.6772,-0.0423,-0.2117,0.8562,-0.0584,-0.1929,0.789,-0.1064,0.175,1.4825,-0.06,0.17,1.38,0.007,0.1901,0.8645,-0.0415,0.16,1.38,-0.125,0.2,1.1388,-0.08,0.165,1.1388,-0.04,0.244,1.1388,-0.04,0.23,1.133,-0.055,0.2009,0.8139,-0.0237,0.2056,0.6743,-0.0482,0.2142,0.8529,-0.0648,0.1929,0.786,-0.1122,-0.1,0.4913,-0.03,-0.17,0.466,0.0,-0.05,0.466,0.0,-0.165,0.01,0.12,-0.15,0.07,0.0,-0.085,0.086,0.0125,-0.09,0.056,0.0125,-0.115,0.02,0.122,-0.115,0.04,-0.055,-0.11,0.011,0.19,0.0993,0.4881,-0.0309,0.17,0.466,0.0,0.05,0.4867,0.0,0.165,0.01,0.12,0.15,0.07,0.0,0.085,0.086,0.0125,0.09,0.056,0.0125,0.115,0.02,0.122,0.115,0.04,-0.055,0.11,0.011,0.19,0.0,0.875,0.0,-0.0646,1.5149,-0.038,0.0646,1.5149,-0.038,0.0,1.07225,0.09,-0.11,1.427,-0.1375,-0.235,1.42,-0.0625,0.11,1.427,-0.1375,0.235,1.42,-0.0625,0.0,1.41,-0.145,0.0,0.925,0.08,-0.087,1.19,-0.09,0.087,1.19,-0.09,0.172,1.32,-0.03,-0.172,1.32,-0.03,0.15,1.23,-0.015,-0.15,1.23,-0.015,0.079,0.92,-0.14,0.1,0.9,0.077,-0.079,0.92,-0.14,-0.1,0.9,0.075,0.0,0.87,0.0,0.171,0.65,0.0,0.02,0.65,0.0,0.1,0.65,-0.08,0.1,0.65,0.07,-0.171,0.65,0.0,-0.02,0.65,0.0,-0.1,0.65,-0.08,-0.1,0.65,0.07,0.25,1.27,-0.04,0.17,1.27,-0.04,0.2,1.27,-0.09,0.2,1.27,0.02,0.244,1.1388,-0.04,0.165,1.1388,-0.04,0.2,1.1388,-0.08,0.2,1.1388,-0.013,0.225,1.0,-0.01,0.225,1.0,-0.07,0.185,1.0,-0.01,0.185,1.0,-0.07,0.2,1.1388,-0.04,0.225,0.92,-0.04,0.175,0.92,-0.04,0.2,0.92,-0.065,0.2,0.92,-0.015,0.225,0.89,-0.04,0.175,0.89,-0.04,0.2,0.89,-0.065,0.2,0.89,-0.015,0.218,0.86,-0.04,0.184,0.86,-0.04,0.2,0.87,-0.07,0.2,0.87,0.0,0.21,0.85,0.0,0.1854,0.85,0.0,0.212,0.84,-0.015,0.183,0.84,-0.015,0.213,0.835,-0.04,0.19,0.835,-0.04,0.211,0.835,-0.065,0.192,0.835,-0.065,0.208,0.84,-0.085,0.19,0.84,-0.085,0.2,0.84,-0.095,0.215,0.82,0.0,0.193,0.815,0.005,0.198,0.8,0.012,0.21,0.82,0.03,0.19,0.82,0.03,0.2,0.835,0.039,0.212,0.8,0.05,0.188,0.8,0.05,0.2,0.807,0.057,0.2,0.793,0.035,0.2,0.774,0.076,0.212,0.78,0.07,0.188,0.78,0.07,0.2,0.785,0.075,0.2,0.77,0.062,0.215,0.793,-0.015,0.187,0.793,-0.015,0.2,0.793,-0.005,0.215,0.788,-0.04,0.187,0.788,-0.04,0.215,0.793,-0.065,0.187,0.793,-0.065,0.21,0.79,-0.085,0.19,0.79,-0.085,0.2,0.79,-0.095,0.19,0.77,-0.0275,0.19,0.77,-0.0525,0.19,0.78,-0.0775,0.212,0.745,-0.015,0.188,0.745,-0.02,0.2,0.745,-0.0255,0.2,0.745,-0.0045,0.211,0.72,-0.015,0.189,0.72,-0.015,0.2,0.72,-0.0252,0.2,0.72,-0.0048,0.21,0.695,-0.015,0.19,0.695,-0.015,0.2,0.695,-0.025,0.2,0.695,-0.005,0.2,0.685,-0.015,0.215,0.74,-0.04,0.185,0.74,-0.04,0.2,0.74,-0.055,0.2,0.74,-0.025,0.21,0.7142,-0.04,0.19,0.7142,-0.04,0.2,0.7142,-0.053,0.2,0.7142,-0.027,0.21,0.68,-0.04,0.19,0.68,-0.04,0.2,0.68,-0.05,0.2,0.68,-0.03,0.2,0.67,-0.04,0.212,0.74,-0.065,0.188,0.74,-0.065,0.2,0.74,-0.0756,0.2,0.74,-0.0542,0.21,0.7177,-0.065,0.19,0.7177,-0.065,0.2,0.7177,-0.0751,0.2,0.7177,-0.0549,0.21,0.695,-0.065,0.19,0.695,-0.065,0.2,0.695,-0.075,0.2,0.695,-0.055,0.2,0.685,-0.065,0.211,0.755,-0.085,0.189,0.755,-0.085,0.2,0.755,-0.0952,0.2,0.755,-0.0748,0.21,0.735,-0.085,0.19,0.735,-0.085,0.2,0.735,-0.0951,0.2,0.735,-0.0749,0.21,0.72,-0.085,0.19,0.72,-0.085,0.2,0.72,-0.095,0.2,0.72,-0.075,0.2,0.71,-0.085,-0.23,1.23,-0.04,-0.16,1.23,-0.04,-0.2,1.235,-0.105,-0.2,1.255,0.02,-0.244,1.1388,-0.04,-0.165,1.1388,-0.04,-0.2,1.1388,-0.08,-0.2,1.1388,0.013,-0.225,1.0,-0.01,-0.225,1.0,-0.07,-0.185,1.0,-0.01,-0.185,1.0,-0.07,-0.2,1.1388,-0.04,-0.225,0.92,-0.04,-0.175,0.92,-0.04,-0.2,0.92,-0.065,-0.2,0.92,-0.015,-0.225,0.89,-0.04,-0.175,0.89,-0.04,-0.2,0.89,-0.065,-0.2,0.89,-0.015,-0.218,0.86,-0.04,-0.184,0.86,-0.04,-0.2,0.87,-0.07,-0.2,0.87,0.0,-0.21,0.85,0.0,-0.1854,0.85,0.0,-0.212,0.84,-0.015,-0.183,0.84,-0.015,-0.213,0.835,-0.04,-0.19,0.835,-0.04,-0.211,0.835,-0.065,-0.192,0.835,-0.065,-0.208,0.84,-0.085,-0.19,0.84,-0.085,-0.2,0.84,-0.095,-0.215,0.82,0.0,-0.193,0.815,0.005,-0.198,0.8,0.012,-0.21,0.82,0.03,-0.19,0.82,0.03,-0.2,0.835,0.039,-0.212,0.8,0.05,-0.188,0.8,0.05,-0.2,0.807,0.057,-0.2,0.793,0.035,-0.2,0.774,0.076,-0.212,0.78,0.07,-0.188,0.78,0.07,-0.2,0.785,0.075,-0.2,0.77,0.062,-0.215,0.793,-0.015,-0.187,0.793,-0.015,-0.2,0.793,-0.005,-0.215,0.788,-0.04,-0.187,0.788,-0.04,-0.215,0.793,-0.065,-0.187,0.793,-0.065,-0.21,0.79,-0.085,-0.19,0.79,-0.085,-0.2,0.79,-0.095,-0.19,0.77,-0.0275,-0.19,0.77,-0.0525,-0.19,0.78,-0.0775,-0.212,0.745,-0.015,-0.188,0.745,-0.02,-0.2,0.745,-0.0255,-0.2,0.745,-0.0045,-0.211,0.72,-0.015,-0.189,0.72,-0.015,-0.2,0.72,-0.0252,-0.2,0.72,-0.0048,-0.21,0.695,-0.015,-0.19,0.695,-0.015,-0.2,0.695,-0.025,-0.2,0.695,-0.005,-0.2,0.685,-0.015,-0.215,0.74,-0.04,-0.185,0.74,-0.04,-0.2,0.74,-0.055,-0.2,0.74,-0.025,-0.21,0.7142,-0.04,-0.19,0.7142,-0.04,-0.2,0.7142,-0.053,-0.2,0.7142,-0.027,-0.21,0.68,-0.04,-0.19,0.68,-0.04,-0.2,0.68,-0.05,-0.2,0.68,-0.03,-0.2,0.67,-0.04,-0.212,0.74,-0.065,-0.188,0.74,-0.065,-0.2,0.74,-0.0756,-0.2,0.74,-0.0542,-0.21,0.7177,-0.065,-0.19,0.7177,-0.065,-0.2,0.7177,-0.0751,-0.2,0.7177,-0.0549,-0.21,0.695,-0.065,-0.19,0.695,-0.065,-0.2,0.695,-0.075,-0.2,0.695,-0.055,-0.2,0.685,-0.065,-0.211,0.755,-0.085,-0.189,0.755,-0.085,-0.2,0.755,-0.0952,-0.2,0.755,-0.0748,-0.21,0.735,-0.085,-0.19,0.735,-0.085,-0.2,0.735,-0.0951,-0.2,0.735,-0.0749,-0.21,0.72,-0.085,-0.19,0.72,-0.085,-0.2,0.72,-0.095,-0.2,0.72,-0.075,-0.2,0.71,-0.085,0.115,0.466,0.06,0.115,0.466,-0.055,0.15,0.466,0.0,0.05,0.466,0.0,0.17,0.3,0.0,0.06,0.3,0.0,0.1,0.3,-0.05,0.1,0.3,0.05,0.15,0.07,0.0,0.085,0.086,0.0125,0.115,0.069,-0.045,0.117,0.0975,0.0615,0.1375,0.006,-0.03,0.095,0.006,-0.03,0.115,0.015,-0.045,0.115,0.06,0.1,0.115,0.0,0.07,0.165,0.0,0.07,0.095,0.0,0.07,0.115,0.04,0.13,0.125,0.0,0.12,0.165,0.0,0.12,0.087,0.0,0.122,0.09,0.012,0.188,0.11,0.011,0.19,0.128,0.011,0.185,0.142,0.011,0.178,0.154,0.01,0.168,-0.115,0.466,0.06,-0.115,0.466,-0.055,-0.17,0.466,0.0,-0.05,0.466,0.0,-0.17,0.3,0.0,-0.06,0.3,0.0,-0.1,0.3,-0.05,-0.1,0.3,0.05,-0.15,0.07,0.0,-0.085,0.086,0.0125,-0.115,0.069,-0.045,-0.117,0.0975,0.0615,-0.1375,0.006,-0.03,-0.095,0.006,-0.03,-0.095,0.006,-0.03,-0.115,0.06,0.1,-0.115,0.0,0.07,-0.165,0.0,0.07,-0.095,0.0,0.07,-0.115,0.04,0.13,-0.125,0.0,0.12,-0.165,0.0,0.12,-0.087,0.0,0.122,-0.09,0.012,0.188,-0.11,0.011,0.19,-0.128,0.011,0.185,-0.142,0.011,0.178,-0.154,0.01,0.168}, 1170);
SoHAnimHumanoid28->setSkinCoord(*SoCoordinate230);

SoShape* SoShape231 = new SoShape();
SoShape231->setDEF(QString("Joe_Shape"));
SoVRMLAppearance* SoVRMLAppearance232 = new SoVRMLAppearance();
SoVRMLAppearance232->setDEF(QString("Joe_skin_Appearance"));
SoMaterial* SoMaterial233 = new SoMaterial();
SoMaterial233->setDEF(QString("Joe_skin_Material"));
SoMaterial233->setDiffuseColor(new float[]{0.3,0.3,0.6});
SoMaterial233->setEmissiveColor(new float[]{0.3,0.3,0.6});
SoVRMLAppearance232->addChild(*SoMaterial233);

SoImageTexture* SoImageTexture234 = new SoImageTexture();
SoImageTexture234->setDEF(QString("JoeSkinImageTexture"));
SoImageTexture234->setUrl(new QString[]{QString("JoeBodyTexture29.png"), QString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/JoeBodyTexture29.png")}, 2);
SoVRMLAppearance232->addChild(*SoImageTexture234);

SoTextureTransform* SoTextureTransform235 = new SoTextureTransform();
SoTextureTransform235->setDEF(QString("KickTextureTransform"));
SoTextureTransform235->setRotation(0.7560319);
SoVRMLAppearance232->setTextureTransform(SoTextureTransform235);

SoShape231->addChild(*SoVRMLAppearance232);

SoIndexedFaceSet* SoIndexedFaceSet236 = new SoIndexedFaceSet();
SoIndexedFaceSet236->setDEF(QString("Joe_skin_IndexedFaceSet"));
SoIndexedFaceSet236->setCreaseAngle(3.14);
SoIndexedFaceSet236->setCoordIndex(new int32_t[]{0,9,5,-1,0,7,9,-1,0,5,1,-1,1,5,2,-1,1,3,7,-1,2,4,3,-1,0,1,7,-1,1,2,3,-1,5,6,2,-1,7,3,8,-1,6,4,2,-1,3,4,8,-1,9,6,5,-1,9,7,8,-1,4,6,10,-1,4,10,12,-1,4,12,8,-1,10,11,12,-1,9,75,24,-1,9,24,74,-1,9,8,75,-1,9,74,6,-1,10,6,74,-1,12,75,8,-1,74,24,29,-1,24,77,29,-1,10,74,29,-1,77,32,29,-1,32,78,29,-1,78,30,29,-1,30,10,29,-1,41,24,75,-1,41,75,12,-1,41,12,42,-1,41,42,80,-1,41,80,44,-1,41,44,79,-1,41,79,24,-1,81,24,79,-1,81,77,24,-1,81,25,77,-1,81,79,25,-1,25,79,44,-1,25,32,77,-1,25,83,32,-1,25,26,83,-1,25,27,26,-1,25,84,27,-1,25,44,84,-1,11,10,30,-1,11,30,13,-1,11,13,15,-1,11,15,14,-1,11,14,42,-1,11,42,12,-1,15,13,16,-1,15,18,14,-1,15,16,76,-1,15,76,18,-1,76,16,17,-1,76,17,82,-1,76,82,19,-1,76,19,18,-1,22,18,19,-1,22,87,18,-1,22,27,84,-1,22,84,87,-1,87,84,85,-1,85,84,44,-1,85,42,14,-1,87,14,18,-1,87,85,14,-1,20,83,26,-1,20,17,16,-1,20,16,88,-1,20,88,83,-1,88,16,13,-1,88,13,86,-1,88,86,83,-1,86,13,30,-1,86,32,83,-1,23,89,22,-1,89,27,22,-1,89,91,27,-1,91,26,27,-1,91,20,26,-1,21,20,91,-1,21,17,20,-1,21,92,17,-1,82,17,92,-1,82,90,19,-1,23,22,19,-1,23,19,90,-1,82,92,101,-1,82,101,99,-1,82,99,93,-1,82,93,95,-1,82,95,97,-1,82,97,90,-1,23,90,97,-1,23,97,94,-1,23,94,89,-1,89,94,96,-1,89,96,95,-1,89,95,93,-1,89,93,91,-1,91,93,99,-1,91,99,100,-1,91,100,98,-1,21,91,98,-1,21,98,101,-1,21,101,92,-1,85,105,42,-1,85,103,105,-1,85,44,103,-1,103,44,104,-1,80,42,105,-1,80,105,102,-1,80,102,104,-1,80,104,44,-1,105,109,102,-1,102,109,47,-1,47,104,102,-1,104,47,45,-1,104,45,103,-1,103,45,46,-1,103,46,109,-1,103,109,105,-1,109,112,110,-1,109,110,47,-1,47,110,111,-1,47,111,45,-1,45,111,113,-1,113,46,45,-1,46,113,112,-1,112,109,46,-1,112,118,110,-1,110,118,115,-1,110,115,111,-1,111,115,117,-1,111,117,113,-1,113,117,116,-1,113,116,112,-1,112,116,118,-1,115,118,119,-1,119,118,122,-1,118,116,122,-1,122,116,120,-1,116,117,120,-1,120,117,121,-1,117,115,121,-1,115,119,121,-1,119,127,123,-1,119,122,127,-1,122,126,127,-1,122,128,126,-1,122,120,128,-1,120,124,128,-1,120,121,124,-1,121,125,124,-1,121,119,125,-1,119,123,125,-1,127,129,123,-1,127,126,129,-1,129,126,141,-1,141,126,143,-1,126,142,143,-1,126,128,142,-1,128,124,130,-1,142,128,130,-1,124,132,130,-1,124,134,132,-1,125,134,124,-1,125,136,134,-1,125,137,136,-1,125,135,137,-1,125,133,135,-1,125,123,133,-1,123,131,133,-1,123,129,131,-1,131,129,138,-1,129,141,138,-1,138,141,144,-1,141,143,144,-1,143,146,144,-1,142,146,143,-1,142,145,146,-1,139,145,142,-1,130,139,142,-1,139,130,132,-1,139,132,154,-1,132,157,154,-1,132,159,157,-1,132,134,159,-1,134,136,159,-1,136,161,159,-1,136,137,161,-1,137,162,161,-1,160,162,137,-1,135,160,137,-1,133,160,135,-1,133,158,160,-1,131,158,133,-1,156,158,131,-1,153,156,131,-1,131,138,153,-1,138,155,153,-1,140,155,138,-1,138,144,140,-1,144,147,140,-1,140,147,145,-1,140,145,139,-1,139,155,140,-1,154,155,139,-1,146,149,144,-1,146,151,149,-1,145,151,146,-1,150,151,145,-1,145,152,150,-1,147,152,145,-1,147,149,152,-1,147,144,149,-1,148,149,151,-1,148,152,149,-1,148,150,152,-1,148,151,150,-1,160,207,162,-1,160,205,207,-1,165,208,205,-1,160,165,205,-1,158,165,160,-1,161,162,207,-1,161,207,206,-1,165,206,208,-1,206,165,161,-1,161,165,159,-1,207,209,211,-1,205,209,207,-1,205,212,209,-1,205,208,212,-1,206,212,208,-1,206,210,212,-1,206,207,210,-1,207,211,210,-1,209,212,213,-1,212,216,213,-1,212,214,216,-1,210,214,212,-1,210,215,214,-1,210,211,215,-1,209,215,211,-1,209,213,215,-1,217,213,216,-1,217,215,213,-1,217,214,215,-1,217,216,214,-1,158,194,165,-1,192,194,158,-1,164,195,192,-1,158,164,192,-1,156,164,158,-1,159,194,165,-1,159,194,193,-1,159,193,195,-1,159,195,164,-1,159,164,157,-1,157,164,180,-1,192,198,194,-1,192,196,198,-1,192,195,196,-1,195,199,196,-1,196,199,200,-1,199,203,200,-1,193,199,195,-1,193,197,199,-1,193,198,197,-1,193,194,198,-1,199,201,203,-1,197,201,199,-1,197,198,201,-1,198,202,201,-1,196,202,198,-1,200,202,196,-1,204,202,200,-1,204,201,202,-1,204,203,201,-1,204,200,203,-1,156,181,164,-1,156,179,181,-1,156,182,179,-1,156,163,182,-1,163,180,182,-1,157,180,163,-1,164,181,180,-1,179,182,183,-1,182,186,183,-1,182,184,186,-1,180,184,182,-1,180,181,184,-1,181,185,184,-1,179,185,181,-1,183,185,179,-1,183,186,187,-1,186,190,187,-1,184,190,186,-1,184,188,190,-1,184,185,188,-1,185,189,188,-1,185,183,189,-1,183,187,189,-1,191,189,187,-1,191,188,189,-1,191,190,188,-1,191,187,190,-1,153,163,156,-1,153,168,163,-1,153,166,168,-1,153,169,166,-1,155,169,153,-1,155,167,169,-1,154,167,155,-1,154,163,167,-1,154,157,163,-1,163,168,167,-1,166,169,170,-1,169,173,170,-1,169,171,173,-1,169,167,171,-1,167,168,171,-1,168,172,171,-1,168,170,172,-1,170,168,166,-1,170,173,174,-1,173,177,174,-1,173,175,177,-1,173,171,175,-1,171,172,175,-1,172,176,175,-1,172,174,176,-1,170,174,172,-1,178,176,174,-1,178,175,176,-1,178,177,175,-1,178,174,177,-1,86,30,221,-1,86,221,219,-1,86,219,32,-1,32,219,220,-1,78,32,220,-1,78,220,218,-1,78,218,221,-1,78,221,30,-1,221,225,219,-1,219,225,35,-1,35,33,219,-1,33,220,219,-1,33,34,220,-1,220,34,218,-1,221,218,34,-1,34,225,221,-1,225,226,228,-1,225,228,35,-1,35,228,229,-1,35,229,33,-1,33,229,227,-1,33,227,34,-1,34,227,226,-1,34,226,225,-1,226,234,228,-1,228,234,232,-1,232,229,228,-1,232,233,229,-1,229,233,227,-1,227,233,231,-1,227,231,226,-1,226,231,234,-1,231,235,234,-1,235,238,234,-1,234,238,232,-1,238,236,232,-1,232,236,233,-1,236,237,233,-1,233,237,231,-1,231,237,235,-1,235,239,243,-1,235,243,238,-1,238,243,242,-1,238,242,244,-1,238,244,236,-1,236,244,240,-1,236,240,237,-1,237,240,241,-1,237,241,235,-1,235,241,239,-1,243,239,245,-1,243,245,242,-1,245,257,242,-1,257,259,242,-1,242,259,258,-1,242,258,244,-1,244,246,240,-1,258,246,244,-1,240,246,248,-1,240,248,250,-1,241,240,250,-1,241,250,252,-1,241,252,253,-1,241,253,251,-1,241,251,249,-1,241,249,239,-1,239,249,247,-1,239,247,245,-1,247,254,245,-1,245,254,257,-1,254,260,257,-1,257,260,259,-1,259,260,262,-1,258,259,262,-1,258,262,261,-1,255,258,261,-1,246,258,255,-1,255,248,246,-1,255,270,248,-1,248,270,273,-1,248,273,275,-1,248,275,250,-1,250,275,252,-1,252,275,277,-1,252,277,253,-1,253,277,278,-1,276,253,278,-1,251,253,276,-1,249,251,276,-1,249,276,274,-1,247,249,274,-1,272,247,274,-1,269,247,272,-1,247,269,254,-1,254,269,271,-1,256,254,271,-1,254,256,260,-1,260,256,263,-1,256,261,263,-1,256,255,261,-1,255,256,271,-1,270,255,271,-1,262,260,265,-1,262,265,267,-1,261,262,267,-1,266,261,267,-1,261,266,268,-1,263,261,268,-1,263,268,265,-1,263,265,260,-1,264,267,265,-1,264,265,268,-1,264,268,266,-1,264,266,267,-1,276,278,323,-1,276,323,321,-1,281,321,324,-1,276,321,281,-1,274,276,281,-1,277,323,278,-1,277,322,323,-1,281,324,322,-1,322,277,281,-1,277,275,281,-1,323,327,325,-1,321,323,325,-1,321,325,328,-1,321,328,324,-1,322,324,328,-1,322,328,326,-1,322,326,323,-1,323,326,327,-1,325,329,328,-1,328,329,332,-1,328,332,330,-1,326,328,330,-1,326,330,331,-1,326,331,327,-1,325,327,331,-1,325,331,329,-1,333,332,329,-1,333,329,331,-1,333,331,330,-1,333,330,332,-1,274,281,310,-1,308,274,310,-1,280,308,311,-1,274,308,280,-1,272,274,280,-1,275,310,281,-1,275,309,310,-1,275,311,309,-1,275,280,311,-1,275,273,280,-1,273,296,280,-1,308,310,314,-1,308,314,312,-1,308,312,311,-1,311,312,315,-1,312,316,315,-1,315,316,319,-1,309,311,315,-1,309,315,313,-1,309,313,314,-1,309,314,310,-1,315,319,317,-1,313,315,317,-1,313,317,314,-1,314,317,318,-1,312,314,318,-1,316,312,318,-1,320,316,318,-1,320,318,317,-1,320,317,319,-1,320,319,316,-1,272,280,297,-1,272,297,295,-1,272,295,298,-1,272,298,279,-1,279,298,296,-1,273,279,296,-1,280,296,297,-1,295,299,298,-1,298,299,302,-1,298,302,300,-1,296,298,300,-1,296,300,297,-1,297,300,301,-1,295,297,301,-1,299,295,301,-1,299,303,302,-1,302,303,306,-1,300,302,306,-1,300,306,304,-1,300,304,301,-1,301,304,305,-1,301,305,299,-1,299,305,303,-1,307,303,305,-1,307,305,304,-1,307,304,306,-1,307,306,303,-1,269,272,279,-1,269,279,284,-1,269,284,282,-1,269,282,285,-1,271,269,285,-1,271,285,283,-1,270,271,283,-1,270,283,279,-1,270,279,273,-1,279,283,284,-1,282,286,285,-1,285,286,289,-1,285,289,287,-1,285,287,283,-1,283,287,284,-1,284,287,288,-1,284,288,286,-1,286,282,284,-1,286,290,289,-1,289,290,293,-1,289,293,291,-1,289,291,287,-1,287,291,288,-1,288,291,292,-1,288,292,290,-1,286,288,290,-1,294,290,292,-1,294,292,291,-1,294,291,293,-1,294,293,290,-1,97,334,336,-1,97,336,94,-1,94,336,96,-1,336,335,96,-1,96,335,95,-1,95,335,337,-1,95,337,334,-1,95,334,97,-1,334,341,336,-1,336,341,338,-1,336,338,335,-1,335,338,340,-1,335,340,337,-1,337,340,339,-1,337,339,334,-1,334,339,341,-1,341,345,342,-1,341,342,338,-1,338,342,340,-1,340,342,344,-1,340,344,339,-1,339,344,343,-1,339,343,345,-1,339,345,341,-1,345,349,342,-1,342,349,351,-1,342,351,346,-1,342,346,344,-1,71,346,348,-1,71,344,346,-1,71,348,347,-1,71,347,344,-1,344,347,343,-1,343,347,352,-1,343,352,349,-1,343,349,345,-1,349,352,356,-1,349,356,353,-1,349,353,355,-1,349,355,351,-1,354,356,352,-1,354,352,350,-1,354,350,351,-1,354,351,355,-1,353,356,357,-1,353,357,358,-1,353,358,359,-1,353,359,360,-1,353,360,361,-1,353,361,355,-1,354,357,356,-1,350,346,351,-1,348,346,347,-1,350,347,346,-1,350,352,347,-1,354,358,357,-1,354,359,358,-1,354,360,359,-1,354,361,360,-1,354,355,361,-1,101,362,365,-1,101,365,99,-1,99,365,100,-1,100,365,363,-1,100,363,98,-1,98,363,364,-1,98,364,101,-1,101,364,362,-1,362,369,367,-1,362,367,365,-1,365,367,363,-1,363,367,368,-1,363,367,368,-1,363,368,366,-1,363,366,364,-1,364,366,362,-1,362,366,369,-1,369,373,371,-1,369,371,367,-1,367,371,368,-1,368,371,372,-1,368,372,366,-1,366,372,370,-1,366,370,369,-1,369,370,373,-1,373,377,380,-1,373,380,375,-1,373,375,371,-1,371,375,372,-1,372,375,376,-1,372,376,374,-1,372,374,370,-1,370,374,379,-1,373,370,379,-1,373,379,377,-1,377,379,383,-1,377,383,381,-1,377,381,384,-1,377,384,380,-1,381,383,389,-1,381,389,388,-1,381,388,387,-1,381,387,386,-1,381,386,385,-1,381,385,384,-1,376,375,374,-1,378,379,374,-1,378,374,375,-1,378,375,380,-1,382,386,387,-1,382,387,388,-1,382,388,389,-1,382,389,383,-1,382,383,379,-1,382,379,378,-1,382,378,380,-1,382,380,384,-1,382,384,385,-1,382,385,386,-1}, 2780);
SoTextureCoordinate* SoTextureCoordinate237 = new SoTextureCoordinate();
SoTextureCoordinate237->setPoint(new float[]{0.0,0.0,0.5,0.5,0.5,0.0,0.0,0.5}, 8);
SoIndexedFaceSet236->setTexCoord(*SoTextureCoordinate237);

SoCoordinate* SoCoordinate238 = new SoCoordinate();
SoCoordinate238->setUSE(QString("Joe_SkinCoord"));
SoIndexedFaceSet236->setCoord(*SoCoordinate238);

SoShape231->setGeometry(*SoIndexedFaceSet236);

SoHAnimHumanoid28->setSkin(*SoShape231);

SoGroup27->addChild(*SoHAnimHumanoid28);

SoNode16->addChild(*SoGroup27);

SoGroup* SoGroup239 = new SoGroup();
SoTimeSensor* SoTimeSensor240 = new SoTimeSensor();
SoTimeSensor240->setDEF(QString("KickTimer"));
SoTimeSensor240->setCycleInterval(3.73);
SoTimeSensor240->setLoop(true);
SoGroup239->addChild(*SoTimeSensor240);

SoOrientationInterpolator* SoOrientationInterpolator241 = new SoOrientationInterpolator();
SoOrientationInterpolator241->setDEF(QString("HumanoidRoot_RotationInterpolator"));
SoOrientationInterpolator241->setKey(new float[]{0.0,0.1,0.4,0.6,1.0}, 5);
SoOrientationInterpolator241->setKeyValue(new float[]{1.0,0.0,0.0,0.5,1.0,0.0,0.0,0.5,-1.0,0.0,0.0,0.1,-1.0,0.0,0.0,0.5,-1.0,0.0,0.0,0.5}, 20);
SoGroup239->addChild(*SoOrientationInterpolator241);

SoPositionInterpolator* SoPositionInterpolator242 = new SoPositionInterpolator();
SoPositionInterpolator242->setDEF(QString("HumanoidRoot_TranslationInterpolator"));
SoPositionInterpolator242->setKey(new float[]{0.0,0.2,0.6,1.0}, 4);
SoPositionInterpolator242->setKeyValue(new float[]{1.0,0.3,-1.0,0.4,-0.04,-0.4,-0.18,0.1,0.0,-0.2,0.15,0.15}, 12);
SoGroup239->addChild(*SoPositionInterpolator242);

SoOrientationInterpolator* SoOrientationInterpolator243 = new SoOrientationInterpolator();
SoOrientationInterpolator243->setDEF(QString("sacroiliac_RotationInterpolator"));
SoOrientationInterpolator243->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator243->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup239->addChild(*SoOrientationInterpolator243);

SoOrientationInterpolator* SoOrientationInterpolator244 = new SoOrientationInterpolator();
SoOrientationInterpolator244->setDEF(QString("l_hip_RotationInterpolator"));
SoOrientationInterpolator244->setKey(new float[]{0.0,0.1,0.3,0.45,1.0}, 5);
SoOrientationInterpolator244->setKeyValue(new float[]{-1.0,0.0,0.0,1.5,-1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,0.5,1.0,0.0,0.0,1.0}, 20);
SoGroup239->addChild(*SoOrientationInterpolator244);

SoOrientationInterpolator* SoOrientationInterpolator245 = new SoOrientationInterpolator();
SoOrientationInterpolator245->setDEF(QString("l_knee_RotationInterpolator"));
SoOrientationInterpolator245->setKey(new float[]{0.0,0.2,0.35,0.5,1.0}, 5);
SoOrientationInterpolator245->setKeyValue(new float[]{1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.2,1.0,0.0,1.0,0.5,1.0,0.0,0.0,1.4}, 20);
SoGroup239->addChild(*SoOrientationInterpolator245);

SoOrientationInterpolator* SoOrientationInterpolator246 = new SoOrientationInterpolator();
SoOrientationInterpolator246->setDEF(QString("l_ankle_RotationInterpolator"));
SoOrientationInterpolator246->setKey(new float[]{0.0,0.25,1.0}, 3);
SoOrientationInterpolator246->setKeyValue(new float[]{-1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0}, 12);
SoGroup239->addChild(*SoOrientationInterpolator246);

SoOrientationInterpolator* SoOrientationInterpolator247 = new SoOrientationInterpolator();
SoOrientationInterpolator247->setDEF(QString("l_subtalar_RotationInterpolator"));
SoOrientationInterpolator247->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator247->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup239->addChild(*SoOrientationInterpolator247);

SoOrientationInterpolator* SoOrientationInterpolator248 = new SoOrientationInterpolator();
SoOrientationInterpolator248->setDEF(QString("l_midtarsal_RotationInterpolator"));
SoOrientationInterpolator248->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator248->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup239->addChild(*SoOrientationInterpolator248);

SoOrientationInterpolator* SoOrientationInterpolator249 = new SoOrientationInterpolator();
SoOrientationInterpolator249->setDEF(QString("l_metatarsal_RotationInterpolator"));
SoOrientationInterpolator249->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator249->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup239->addChild(*SoOrientationInterpolator249);

SoOrientationInterpolator* SoOrientationInterpolator250 = new SoOrientationInterpolator();
SoOrientationInterpolator250->setDEF(QString("r_hip_RotationInterpolator"));
SoOrientationInterpolator250->setKey(new float[]{0.0,0.25,0.5,0.75,1.0}, 5);
SoOrientationInterpolator250->setKeyValue(new float[]{1.0,0.0,0.0,1.0,1.0,0.0,0.0,1.0,-1.0,0.0,0.0,1.0,-1.0,0.0,0.0,1.0,-1.0,0.0,0.0,1.0}, 20);
SoGroup239->addChild(*SoOrientationInterpolator250);

SoOrientationInterpolator* SoOrientationInterpolator251 = new SoOrientationInterpolator();
SoOrientationInterpolator251->setDEF(QString("r_knee_RotationInterpolator"));
SoOrientationInterpolator251->setKey(new float[]{0.0,0.25,0.5,0.75,1.0}, 5);
SoOrientationInterpolator251->setKeyValue(new float[]{1.0,0.0,0.0,0.1,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,1.0,0.0,0.0,1.0,1.0,0.0,0.0,1.5}, 20);
SoGroup239->addChild(*SoOrientationInterpolator251);

SoOrientationInterpolator* SoOrientationInterpolator252 = new SoOrientationInterpolator();
SoOrientationInterpolator252->setDEF(QString("r_ankle_RotationInterpolator"));
SoOrientationInterpolator252->setKey(new float[]{0.0,0.25,0.5,0.75,1.0}, 5);
SoOrientationInterpolator252->setKeyValue(new float[]{-1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,1.0,0.0,0.0,1.0,1.0,0.0,0.0,0.5}, 20);
SoGroup239->addChild(*SoOrientationInterpolator252);

SoOrientationInterpolator* SoOrientationInterpolator253 = new SoOrientationInterpolator();
SoOrientationInterpolator253->setDEF(QString("r_subtalar_RotationInterpolator"));
SoOrientationInterpolator253->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator253->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup239->addChild(*SoOrientationInterpolator253);

SoOrientationInterpolator* SoOrientationInterpolator254 = new SoOrientationInterpolator();
SoOrientationInterpolator254->setDEF(QString("r_midtarsal_RotationInterpolator"));
SoOrientationInterpolator254->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator254->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup239->addChild(*SoOrientationInterpolator254);

SoOrientationInterpolator* SoOrientationInterpolator255 = new SoOrientationInterpolator();
SoOrientationInterpolator255->setDEF(QString("r_metatarsal_RotationInterpolator"));
SoOrientationInterpolator255->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator255->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup239->addChild(*SoOrientationInterpolator255);

SoOrientationInterpolator* SoOrientationInterpolator256 = new SoOrientationInterpolator();
SoOrientationInterpolator256->setDEF(QString("vl5_RotationInterpolator"));
SoOrientationInterpolator256->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator256->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup239->addChild(*SoOrientationInterpolator256);

SoOrientationInterpolator* SoOrientationInterpolator257 = new SoOrientationInterpolator();
SoOrientationInterpolator257->setDEF(QString("vl4_RotationInterpolator"));
SoOrientationInterpolator257->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator257->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup239->addChild(*SoOrientationInterpolator257);

SoOrientationInterpolator* SoOrientationInterpolator258 = new SoOrientationInterpolator();
SoOrientationInterpolator258->setDEF(QString("vl3_RotationInterpolator"));
SoOrientationInterpolator258->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator258->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup239->addChild(*SoOrientationInterpolator258);

SoOrientationInterpolator* SoOrientationInterpolator259 = new SoOrientationInterpolator();
SoOrientationInterpolator259->setDEF(QString("vl2_RotationInterpolator"));
SoOrientationInterpolator259->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator259->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup239->addChild(*SoOrientationInterpolator259);

SoOrientationInterpolator* SoOrientationInterpolator260 = new SoOrientationInterpolator();
SoOrientationInterpolator260->setDEF(QString("vl1_RotationInterpolator"));
SoOrientationInterpolator260->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator260->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup239->addChild(*SoOrientationInterpolator260);

SoOrientationInterpolator* SoOrientationInterpolator261 = new SoOrientationInterpolator();
SoOrientationInterpolator261->setDEF(QString("vt12_RotationInterpolator"));
SoOrientationInterpolator261->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator261->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup239->addChild(*SoOrientationInterpolator261);

SoOrientationInterpolator* SoOrientationInterpolator262 = new SoOrientationInterpolator();
SoOrientationInterpolator262->setDEF(QString("vt11_RotationInterpolator"));
SoOrientationInterpolator262->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator262->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup239->addChild(*SoOrientationInterpolator262);

SoOrientationInterpolator* SoOrientationInterpolator263 = new SoOrientationInterpolator();
SoOrientationInterpolator263->setDEF(QString("vt10_RotationInterpolator"));
SoOrientationInterpolator263->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator263->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup239->addChild(*SoOrientationInterpolator263);

SoOrientationInterpolator* SoOrientationInterpolator264 = new SoOrientationInterpolator();
SoOrientationInterpolator264->setDEF(QString("vt9_RotationInterpolator"));
SoOrientationInterpolator264->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator264->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup239->addChild(*SoOrientationInterpolator264);

SoOrientationInterpolator* SoOrientationInterpolator265 = new SoOrientationInterpolator();
SoOrientationInterpolator265->setDEF(QString("vt8_RotationInterpolator"));
SoOrientationInterpolator265->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator265->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup239->addChild(*SoOrientationInterpolator265);

SoOrientationInterpolator* SoOrientationInterpolator266 = new SoOrientationInterpolator();
SoOrientationInterpolator266->setDEF(QString("vt7_RotationInterpolator"));
SoOrientationInterpolator266->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator266->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup239->addChild(*SoOrientationInterpolator266);

SoOrientationInterpolator* SoOrientationInterpolator267 = new SoOrientationInterpolator();
SoOrientationInterpolator267->setDEF(QString("vt6_RotationInterpolator"));
SoOrientationInterpolator267->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator267->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup239->addChild(*SoOrientationInterpolator267);

SoOrientationInterpolator* SoOrientationInterpolator268 = new SoOrientationInterpolator();
SoOrientationInterpolator268->setDEF(QString("vt5_RotationInterpolator"));
SoOrientationInterpolator268->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator268->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup239->addChild(*SoOrientationInterpolator268);

SoOrientationInterpolator* SoOrientationInterpolator269 = new SoOrientationInterpolator();
SoOrientationInterpolator269->setDEF(QString("vt4_RotationInterpolator"));
SoOrientationInterpolator269->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator269->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup239->addChild(*SoOrientationInterpolator269);

SoOrientationInterpolator* SoOrientationInterpolator270 = new SoOrientationInterpolator();
SoOrientationInterpolator270->setDEF(QString("vt3_RotationInterpolator"));
SoOrientationInterpolator270->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator270->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup239->addChild(*SoOrientationInterpolator270);

SoOrientationInterpolator* SoOrientationInterpolator271 = new SoOrientationInterpolator();
SoOrientationInterpolator271->setDEF(QString("vt2_RotationInterpolator"));
SoOrientationInterpolator271->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator271->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup239->addChild(*SoOrientationInterpolator271);

SoOrientationInterpolator* SoOrientationInterpolator272 = new SoOrientationInterpolator();
SoOrientationInterpolator272->setDEF(QString("vt1_RotationInterpolator"));
SoOrientationInterpolator272->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator272->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup239->addChild(*SoOrientationInterpolator272);

SoOrientationInterpolator* SoOrientationInterpolator273 = new SoOrientationInterpolator();
SoOrientationInterpolator273->setDEF(QString("vc7_RotationInterpolator"));
SoOrientationInterpolator273->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator273->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup239->addChild(*SoOrientationInterpolator273);

SoOrientationInterpolator* SoOrientationInterpolator274 = new SoOrientationInterpolator();
SoOrientationInterpolator274->setDEF(QString("vc6_RotationInterpolator"));
SoOrientationInterpolator274->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator274->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup239->addChild(*SoOrientationInterpolator274);

SoOrientationInterpolator* SoOrientationInterpolator275 = new SoOrientationInterpolator();
SoOrientationInterpolator275->setDEF(QString("vc5_RotationInterpolator"));
SoOrientationInterpolator275->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator275->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup239->addChild(*SoOrientationInterpolator275);

SoOrientationInterpolator* SoOrientationInterpolator276 = new SoOrientationInterpolator();
SoOrientationInterpolator276->setDEF(QString("vc4_RotationInterpolator"));
SoOrientationInterpolator276->setKey(new float[]{0.0,0.3,0.4,1.0}, 4);
SoOrientationInterpolator276->setKeyValue(new float[]{1.0,0.0,1.0,0.25,-1.0,0.0,-1.0,0.35,1.0,0.0,0.0,0.75,1.0,0.0,1.0,0.5}, 16);
SoGroup239->addChild(*SoOrientationInterpolator276);

SoOrientationInterpolator* SoOrientationInterpolator277 = new SoOrientationInterpolator();
SoOrientationInterpolator277->setDEF(QString("vc3_RotationInterpolator"));
SoOrientationInterpolator277->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator277->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup239->addChild(*SoOrientationInterpolator277);

SoOrientationInterpolator* SoOrientationInterpolator278 = new SoOrientationInterpolator();
SoOrientationInterpolator278->setDEF(QString("vc2_RotationInterpolator"));
SoOrientationInterpolator278->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator278->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup239->addChild(*SoOrientationInterpolator278);

SoOrientationInterpolator* SoOrientationInterpolator279 = new SoOrientationInterpolator();
SoOrientationInterpolator279->setDEF(QString("vc1_RotationInterpolator"));
SoOrientationInterpolator279->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator279->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup239->addChild(*SoOrientationInterpolator279);

SoOrientationInterpolator* SoOrientationInterpolator280 = new SoOrientationInterpolator();
SoOrientationInterpolator280->setDEF(QString("skullbase_RotationInterpolator"));
SoOrientationInterpolator280->setKey(new float[]{0.0,0.2,0.75,1.0}, 4);
SoOrientationInterpolator280->setKeyValue(new float[]{0.0,-1.0,0.0,0.5,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.35}, 16);
SoGroup239->addChild(*SoOrientationInterpolator280);

SoOrientationInterpolator* SoOrientationInterpolator281 = new SoOrientationInterpolator();
SoOrientationInterpolator281->setDEF(QString("l_eyelid_joint_RotationInterpolator"));
SoOrientationInterpolator281->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator281->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup239->addChild(*SoOrientationInterpolator281);

SoOrientationInterpolator* SoOrientationInterpolator282 = new SoOrientationInterpolator();
SoOrientationInterpolator282->setDEF(QString("l_eyeball_joint_RotationInterpolator"));
SoOrientationInterpolator282->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator282->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup239->addChild(*SoOrientationInterpolator282);

SoOrientationInterpolator* SoOrientationInterpolator283 = new SoOrientationInterpolator();
SoOrientationInterpolator283->setDEF(QString("l_eyebrow_joint_RotationInterpolator"));
SoOrientationInterpolator283->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator283->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup239->addChild(*SoOrientationInterpolator283);

SoOrientationInterpolator* SoOrientationInterpolator284 = new SoOrientationInterpolator();
SoOrientationInterpolator284->setDEF(QString("r_eyelid_joint_RotationInterpolator"));
SoOrientationInterpolator284->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator284->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup239->addChild(*SoOrientationInterpolator284);

SoOrientationInterpolator* SoOrientationInterpolator285 = new SoOrientationInterpolator();
SoOrientationInterpolator285->setDEF(QString("r_eyeball_joint_RotationInterpolator"));
SoOrientationInterpolator285->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator285->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup239->addChild(*SoOrientationInterpolator285);

SoOrientationInterpolator* SoOrientationInterpolator286 = new SoOrientationInterpolator();
SoOrientationInterpolator286->setDEF(QString("r_eyebrow_joint_RotationInterpolator"));
SoOrientationInterpolator286->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator286->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup239->addChild(*SoOrientationInterpolator286);

SoOrientationInterpolator* SoOrientationInterpolator287 = new SoOrientationInterpolator();
SoOrientationInterpolator287->setDEF(QString("temporomandibular_RotationInterpolator"));
SoOrientationInterpolator287->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator287->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup239->addChild(*SoOrientationInterpolator287);

SoOrientationInterpolator* SoOrientationInterpolator288 = new SoOrientationInterpolator();
SoOrientationInterpolator288->setDEF(QString("l_sternoclavicular_RotationInterpolator"));
SoOrientationInterpolator288->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator288->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup239->addChild(*SoOrientationInterpolator288);

SoOrientationInterpolator* SoOrientationInterpolator289 = new SoOrientationInterpolator();
SoOrientationInterpolator289->setDEF(QString("l_acromioclavicular_RotationInterpolator"));
SoOrientationInterpolator289->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator289->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup239->addChild(*SoOrientationInterpolator289);

SoOrientationInterpolator* SoOrientationInterpolator290 = new SoOrientationInterpolator();
SoOrientationInterpolator290->setDEF(QString("l_shoulder_RotationInterpolator"));
SoOrientationInterpolator290->setKey(new float[]{0.0,0.4,1.0}, 3);
SoOrientationInterpolator290->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.5,-1.0,0.0,1.0,1.75}, 12);
SoGroup239->addChild(*SoOrientationInterpolator290);

SoOrientationInterpolator* SoOrientationInterpolator291 = new SoOrientationInterpolator();
SoOrientationInterpolator291->setDEF(QString("l_elbow_RotationInterpolator"));
SoOrientationInterpolator291->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator291->setKeyValue(new float[]{-1.0,0.0,0.0,3.0,-1.0,0.0,0.0,0.75,-1.0,-1.0,0.0,0.5}, 12);
SoGroup239->addChild(*SoOrientationInterpolator291);

SoOrientationInterpolator* SoOrientationInterpolator292 = new SoOrientationInterpolator();
SoOrientationInterpolator292->setDEF(QString("l_wrist_RotationInterpolator"));
SoOrientationInterpolator292->setKey(new float[]{0.0,0.4,0.8,1.0}, 4);
SoOrientationInterpolator292->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,1.0,0.0,1.3,0.0,-0.5,1.0,1.3,0.0,0.0,1.0,0.0}, 16);
SoGroup239->addChild(*SoOrientationInterpolator292);

SoOrientationInterpolator* SoOrientationInterpolator293 = new SoOrientationInterpolator();
SoOrientationInterpolator293->setDEF(QString("l_thumb1_RotationInterpolator"));
SoOrientationInterpolator293->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator293->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup239->addChild(*SoOrientationInterpolator293);

SoOrientationInterpolator* SoOrientationInterpolator294 = new SoOrientationInterpolator();
SoOrientationInterpolator294->setDEF(QString("l_thumb2_RotationInterpolator"));
SoOrientationInterpolator294->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator294->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup239->addChild(*SoOrientationInterpolator294);

SoOrientationInterpolator* SoOrientationInterpolator295 = new SoOrientationInterpolator();
SoOrientationInterpolator295->setDEF(QString("l_thumb3_RotationInterpolator"));
SoOrientationInterpolator295->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator295->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup239->addChild(*SoOrientationInterpolator295);

SoOrientationInterpolator* SoOrientationInterpolator296 = new SoOrientationInterpolator();
SoOrientationInterpolator296->setDEF(QString("l_index0_RotationInterpolator"));
SoOrientationInterpolator296->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator296->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup239->addChild(*SoOrientationInterpolator296);

SoOrientationInterpolator* SoOrientationInterpolator297 = new SoOrientationInterpolator();
SoOrientationInterpolator297->setDEF(QString("l_index1_RotationInterpolator"));
SoOrientationInterpolator297->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator297->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup239->addChild(*SoOrientationInterpolator297);

SoOrientationInterpolator* SoOrientationInterpolator298 = new SoOrientationInterpolator();
SoOrientationInterpolator298->setDEF(QString("l_index2_RotationInterpolator"));
SoOrientationInterpolator298->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator298->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup239->addChild(*SoOrientationInterpolator298);

SoOrientationInterpolator* SoOrientationInterpolator299 = new SoOrientationInterpolator();
SoOrientationInterpolator299->setDEF(QString("l_index3_RotationInterpolator"));
SoOrientationInterpolator299->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator299->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup239->addChild(*SoOrientationInterpolator299);

SoOrientationInterpolator* SoOrientationInterpolator300 = new SoOrientationInterpolator();
SoOrientationInterpolator300->setDEF(QString("l_middle0_RotationInterpolator"));
SoOrientationInterpolator300->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator300->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup239->addChild(*SoOrientationInterpolator300);

SoOrientationInterpolator* SoOrientationInterpolator301 = new SoOrientationInterpolator();
SoOrientationInterpolator301->setDEF(QString("l_middle1_RotationInterpolator"));
SoOrientationInterpolator301->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator301->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup239->addChild(*SoOrientationInterpolator301);

SoOrientationInterpolator* SoOrientationInterpolator302 = new SoOrientationInterpolator();
SoOrientationInterpolator302->setDEF(QString("l_middle2_RotationInterpolator"));
SoOrientationInterpolator302->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator302->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup239->addChild(*SoOrientationInterpolator302);

SoOrientationInterpolator* SoOrientationInterpolator303 = new SoOrientationInterpolator();
SoOrientationInterpolator303->setDEF(QString("l_middle3_RotationInterpolator"));
SoOrientationInterpolator303->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator303->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup239->addChild(*SoOrientationInterpolator303);

SoOrientationInterpolator* SoOrientationInterpolator304 = new SoOrientationInterpolator();
SoOrientationInterpolator304->setDEF(QString("l_ring0_RotationInterpolator"));
SoOrientationInterpolator304->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator304->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup239->addChild(*SoOrientationInterpolator304);

SoOrientationInterpolator* SoOrientationInterpolator305 = new SoOrientationInterpolator();
SoOrientationInterpolator305->setDEF(QString("l_ring1_RotationInterpolator"));
SoOrientationInterpolator305->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator305->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup239->addChild(*SoOrientationInterpolator305);

SoOrientationInterpolator* SoOrientationInterpolator306 = new SoOrientationInterpolator();
SoOrientationInterpolator306->setDEF(QString("l_ring2_RotationInterpolator"));
SoOrientationInterpolator306->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator306->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup239->addChild(*SoOrientationInterpolator306);

SoOrientationInterpolator* SoOrientationInterpolator307 = new SoOrientationInterpolator();
SoOrientationInterpolator307->setDEF(QString("l_ring3_RotationInterpolator"));
SoOrientationInterpolator307->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator307->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup239->addChild(*SoOrientationInterpolator307);

SoOrientationInterpolator* SoOrientationInterpolator308 = new SoOrientationInterpolator();
SoOrientationInterpolator308->setDEF(QString("l_pinky0_RotationInterpolator"));
SoOrientationInterpolator308->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator308->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup239->addChild(*SoOrientationInterpolator308);

SoOrientationInterpolator* SoOrientationInterpolator309 = new SoOrientationInterpolator();
SoOrientationInterpolator309->setDEF(QString("l_pinky1_RotationInterpolator"));
SoOrientationInterpolator309->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator309->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup239->addChild(*SoOrientationInterpolator309);

SoOrientationInterpolator* SoOrientationInterpolator310 = new SoOrientationInterpolator();
SoOrientationInterpolator310->setDEF(QString("l_pinky2_RotationInterpolator"));
SoOrientationInterpolator310->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator310->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup239->addChild(*SoOrientationInterpolator310);

SoOrientationInterpolator* SoOrientationInterpolator311 = new SoOrientationInterpolator();
SoOrientationInterpolator311->setDEF(QString("l_pinky3_RotationInterpolator"));
SoOrientationInterpolator311->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator311->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup239->addChild(*SoOrientationInterpolator311);

SoOrientationInterpolator* SoOrientationInterpolator312 = new SoOrientationInterpolator();
SoOrientationInterpolator312->setDEF(QString("r_sternoclavicular_RotationInterpolator"));
SoOrientationInterpolator312->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator312->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup239->addChild(*SoOrientationInterpolator312);

SoOrientationInterpolator* SoOrientationInterpolator313 = new SoOrientationInterpolator();
SoOrientationInterpolator313->setDEF(QString("r_acromioclavicular_RotationInterpolator"));
SoOrientationInterpolator313->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator313->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup239->addChild(*SoOrientationInterpolator313);

SoOrientationInterpolator* SoOrientationInterpolator314 = new SoOrientationInterpolator();
SoOrientationInterpolator314->setDEF(QString("r_shoulder_RotationInterpolator"));
SoOrientationInterpolator314->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator314->setKeyValue(new float[]{0.0,0.0,-1.0,2.5,0.0,0.0,-1.0,1.5,0.0,0.0,-1.0,1.75}, 12);
SoGroup239->addChild(*SoOrientationInterpolator314);

SoOrientationInterpolator* SoOrientationInterpolator315 = new SoOrientationInterpolator();
SoOrientationInterpolator315->setDEF(QString("r_elbow_RotationInterpolator"));
SoOrientationInterpolator315->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator315->setKeyValue(new float[]{-1.0,0.0,0.0,3.0,-1.0,0.0,0.0,0.75,-1.0,-1.0,0.0,0.5}, 12);
SoGroup239->addChild(*SoOrientationInterpolator315);

SoOrientationInterpolator* SoOrientationInterpolator316 = new SoOrientationInterpolator();
SoOrientationInterpolator316->setDEF(QString("r_wrist_RotationInterpolator"));
SoOrientationInterpolator316->setKey(new float[]{0.0,0.5,0.7,1.0}, 4);
SoOrientationInterpolator316->setKeyValue(new float[]{0.0,1.0,0.0,0.3,0.0,0.0,1.0,0.0,0.0,0.0,-1.0,1.0,0.0,-1.0,0.0,0.3}, 16);
SoGroup239->addChild(*SoOrientationInterpolator316);

SoOrientationInterpolator* SoOrientationInterpolator317 = new SoOrientationInterpolator();
SoOrientationInterpolator317->setDEF(QString("r_thumb1_RotationInterpolator"));
SoOrientationInterpolator317->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator317->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup239->addChild(*SoOrientationInterpolator317);

SoOrientationInterpolator* SoOrientationInterpolator318 = new SoOrientationInterpolator();
SoOrientationInterpolator318->setDEF(QString("r_thumb2_RotationInterpolator"));
SoOrientationInterpolator318->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator318->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup239->addChild(*SoOrientationInterpolator318);

SoOrientationInterpolator* SoOrientationInterpolator319 = new SoOrientationInterpolator();
SoOrientationInterpolator319->setDEF(QString("r_thumb3_RotationInterpolator"));
SoOrientationInterpolator319->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator319->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup239->addChild(*SoOrientationInterpolator319);

SoOrientationInterpolator* SoOrientationInterpolator320 = new SoOrientationInterpolator();
SoOrientationInterpolator320->setDEF(QString("r_index0_RotationInterpolator"));
SoOrientationInterpolator320->setKey(new float[]{0.0,0.5,0.75,1.0}, 4);
SoOrientationInterpolator320->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0}, 16);
SoGroup239->addChild(*SoOrientationInterpolator320);

SoOrientationInterpolator* SoOrientationInterpolator321 = new SoOrientationInterpolator();
SoOrientationInterpolator321->setDEF(QString("r_index1_RotationInterpolator"));
SoOrientationInterpolator321->setKey(new float[]{0.0,0.5,0.75,1.0}, 4);
SoOrientationInterpolator321->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.5,0.0,0.0,1.0,0.0}, 16);
SoGroup239->addChild(*SoOrientationInterpolator321);

SoOrientationInterpolator* SoOrientationInterpolator322 = new SoOrientationInterpolator();
SoOrientationInterpolator322->setDEF(QString("r_index2_RotationInterpolator"));
SoOrientationInterpolator322->setKey(new float[]{0.0,0.5,0.75,1.0}, 4);
SoOrientationInterpolator322->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.5,0.0,0.0,1.0,0.0}, 16);
SoGroup239->addChild(*SoOrientationInterpolator322);

SoOrientationInterpolator* SoOrientationInterpolator323 = new SoOrientationInterpolator();
SoOrientationInterpolator323->setDEF(QString("r_index3_RotationInterpolator"));
SoOrientationInterpolator323->setKey(new float[]{0.0,0.5,0.75,1.0}, 4);
SoOrientationInterpolator323->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.5,0.0,0.0,1.0,0.0}, 16);
SoGroup239->addChild(*SoOrientationInterpolator323);

SoOrientationInterpolator* SoOrientationInterpolator324 = new SoOrientationInterpolator();
SoOrientationInterpolator324->setDEF(QString("r_middle0_RotationInterpolator"));
SoOrientationInterpolator324->setKey(new float[]{0.0,0.5,0.75,1.0}, 4);
SoOrientationInterpolator324->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0}, 16);
SoGroup239->addChild(*SoOrientationInterpolator324);

SoOrientationInterpolator* SoOrientationInterpolator325 = new SoOrientationInterpolator();
SoOrientationInterpolator325->setDEF(QString("r_middle1_RotationInterpolator"));
SoOrientationInterpolator325->setKey(new float[]{0.0,0.5,0.75,1.0}, 4);
SoOrientationInterpolator325->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.5,0.0,0.0,1.0,0.0}, 16);
SoGroup239->addChild(*SoOrientationInterpolator325);

SoOrientationInterpolator* SoOrientationInterpolator326 = new SoOrientationInterpolator();
SoOrientationInterpolator326->setDEF(QString("r_middle2_RotationInterpolator"));
SoOrientationInterpolator326->setKey(new float[]{0.0,0.5,0.75,1.0}, 4);
SoOrientationInterpolator326->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.5,0.0,0.0,1.0,0.0}, 16);
SoGroup239->addChild(*SoOrientationInterpolator326);

SoOrientationInterpolator* SoOrientationInterpolator327 = new SoOrientationInterpolator();
SoOrientationInterpolator327->setDEF(QString("r_middle3_RotationInterpolator"));
SoOrientationInterpolator327->setKey(new float[]{0.0,0.5,0.75,1.0}, 4);
SoOrientationInterpolator327->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.5,0.0,0.0,1.0,0.0}, 16);
SoGroup239->addChild(*SoOrientationInterpolator327);

SoOrientationInterpolator* SoOrientationInterpolator328 = new SoOrientationInterpolator();
SoOrientationInterpolator328->setDEF(QString("r_ring0_RotationInterpolator"));
SoOrientationInterpolator328->setKey(new float[]{0.0,0.5,0.75,1.0}, 4);
SoOrientationInterpolator328->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0}, 16);
SoGroup239->addChild(*SoOrientationInterpolator328);

SoOrientationInterpolator* SoOrientationInterpolator329 = new SoOrientationInterpolator();
SoOrientationInterpolator329->setDEF(QString("r_ring1_RotationInterpolator"));
SoOrientationInterpolator329->setKey(new float[]{0.0,0.5,0.75,1.0}, 4);
SoOrientationInterpolator329->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.5,0.0,0.0,1.0,0.0}, 16);
SoGroup239->addChild(*SoOrientationInterpolator329);

SoOrientationInterpolator* SoOrientationInterpolator330 = new SoOrientationInterpolator();
SoOrientationInterpolator330->setDEF(QString("r_ring2_RotationInterpolator"));
SoOrientationInterpolator330->setKey(new float[]{0.0,0.5,0.75,1.0}, 4);
SoOrientationInterpolator330->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.5,0.0,0.0,1.0,0.0}, 16);
SoGroup239->addChild(*SoOrientationInterpolator330);

SoOrientationInterpolator* SoOrientationInterpolator331 = new SoOrientationInterpolator();
SoOrientationInterpolator331->setDEF(QString("r_ring3_RotationInterpolator"));
SoOrientationInterpolator331->setKey(new float[]{0.0,0.5,0.75,1.0}, 4);
SoOrientationInterpolator331->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.5,0.0,0.0,1.0,0.0}, 16);
SoGroup239->addChild(*SoOrientationInterpolator331);

SoOrientationInterpolator* SoOrientationInterpolator332 = new SoOrientationInterpolator();
SoOrientationInterpolator332->setDEF(QString("r_pinky0_RotationInterpolator"));
SoOrientationInterpolator332->setKey(new float[]{0.0,0.5,0.75,1.0}, 4);
SoOrientationInterpolator332->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0}, 16);
SoGroup239->addChild(*SoOrientationInterpolator332);

SoOrientationInterpolator* SoOrientationInterpolator333 = new SoOrientationInterpolator();
SoOrientationInterpolator333->setDEF(QString("r_pinky1_RotationInterpolator"));
SoOrientationInterpolator333->setKey(new float[]{0.0,0.5,0.75,1.0}, 4);
SoOrientationInterpolator333->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.5,0.0,0.0,1.0,0.0}, 16);
SoGroup239->addChild(*SoOrientationInterpolator333);

SoOrientationInterpolator* SoOrientationInterpolator334 = new SoOrientationInterpolator();
SoOrientationInterpolator334->setDEF(QString("r_pinky2_RotationInterpolator"));
SoOrientationInterpolator334->setKey(new float[]{0.0,0.5,0.75,1.0}, 4);
SoOrientationInterpolator334->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.5,0.0,0.0,1.0,0.0}, 16);
SoGroup239->addChild(*SoOrientationInterpolator334);

SoOrientationInterpolator* SoOrientationInterpolator335 = new SoOrientationInterpolator();
SoOrientationInterpolator335->setDEF(QString("r_pinky3_RotationInterpolator"));
SoOrientationInterpolator335->setKey(new float[]{0.0,0.5,0.75,1.0}, 4);
SoOrientationInterpolator335->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.5,0.0,0.0,1.0,0.0}, 16);
SoGroup239->addChild(*SoOrientationInterpolator335);

SoNode16->addChild(*SoGroup239);

SoGroup* SoGroup336 = new SoGroup();
SoGroup336->setDEF(QString("DisplacersAnimationGroup"));
SoScalarInterpolator* SoScalarInterpolator337 = new SoScalarInterpolator();
SoScalarInterpolator337->setDEF(QString("skull_tipInterpolator"));
SoScalarInterpolator337->setKey(new float[]{0.0,0.1,0.2,0.35,0.6,0.7,0.85,0.88,0.94,0.97,1.0}, 11);
SoScalarInterpolator337->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.2,0.4,1.0,0.0,1.0,0.4,0.0}, 11);
SoGroup336->addChild(*SoScalarInterpolator337);

SoNode16->addChild(*SoGroup336);

SoGroup* SoGroup338 = new SoGroup();
SoGroup338->setDEF(QString("SkinTextureTransformAnimationGroup"));
SoScalarInterpolator* SoScalarInterpolator339 = new SoScalarInterpolator();
SoScalarInterpolator339->setDEF(QString("SkinInterpolator"));
SoScalarInterpolator339->setKey(new float[]{0.0,0.2,0.4,0.5,0.6,0.7,0.8,1.0}, 8);
SoScalarInterpolator339->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,1.0,2.0,0.0}, 8);
SoGroup338->addChild(*SoScalarInterpolator339);

SoNode16->addChild(*SoGroup338);

SoGroup* SoGroup340 = new SoGroup();
SoTransform* SoTransform341 = new SoTransform();
SoTransform341->setDEF(QString("SBall"));
SoTransform341->setTranslation(new float[]{1.750548,3.495979,8.727154});
SoTransform341->setRotation(new float[]{-0.700140042014005,0.140028008402801,-0.700140042014005,3.0});
SoTransform341->setScale(new float[]{0.23,0.23,0.23});
SoShape* SoShape342 = new SoShape();
SoShape342->setDEF(QString("ball_Shape"));
SoVRMLAppearance* SoVRMLAppearance343 = new SoVRMLAppearance();
SoVRMLAppearance343->setDEF(QString("ball_Appearance"));
SoMaterial* SoMaterial344 = new SoMaterial();
SoMaterial344->setDEF(QString("ball_Material"));
SoMaterial344->setDiffuseColor(new float[]{0.3,0.3,1.0});
SoMaterial344->setEmissiveColor(new float[]{0.3,0.3,0.33});
SoVRMLAppearance343->addChild(*SoMaterial344);

SoImageTexture* SoImageTexture345 = new SoImageTexture();
SoImageTexture345->setUSE(QString("JoeSkinImageTexture"));
SoVRMLAppearance343->addChild(*SoImageTexture345);

SoShape342->addChild(*SoVRMLAppearance343);

SoIndexedFaceSet* SoIndexedFaceSet346 = new SoIndexedFaceSet();
SoIndexedFaceSet346->setDEF(QString("ball_IndexedFaceSet"));
SoIndexedFaceSet346->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,1,-1,1,13,14,-1,1,14,2,-1,2,14,15,-1,2,15,3,-1,3,15,16,-1,3,16,4,-1,4,16,17,-1,4,17,5,-1,5,17,18,-1,5,18,6,-1,6,18,19,-1,6,19,7,-1,7,19,20,-1,7,20,8,-1,8,20,21,-1,8,21,9,-1,9,21,22,-1,9,22,10,-1,10,22,23,-1,10,23,11,-1,11,23,24,-1,11,24,12,-1,12,24,13,-1,12,13,1,-1,13,25,26,-1,13,26,14,-1,14,26,27,-1,14,27,15,-1,15,27,28,-1,15,28,16,-1,16,28,29,-1,16,29,17,-1,17,29,30,-1,17,30,18,-1,18,30,31,-1,18,31,19,-1,19,31,32,-1,19,32,20,-1,20,32,33,-1,20,33,21,-1,21,33,34,-1,21,34,22,-1,22,34,35,-1,22,35,23,-1,23,35,36,-1,23,36,24,-1,24,36,25,-1,24,25,13,-1,25,37,38,-1,25,38,26,-1,26,38,39,-1,26,39,27,-1,27,39,40,-1,27,40,28,-1,28,40,41,-1,28,41,29,-1,29,41,42,-1,29,42,30,-1,30,42,43,-1,30,43,31,-1,31,43,44,-1,31,44,32,-1,32,44,45,-1,32,45,33,-1,33,45,46,-1,33,46,34,-1,34,46,47,-1,34,47,35,-1,35,47,48,-1,35,48,36,-1,36,48,37,-1,36,37,25,-1,37,49,50,-1,37,50,38,-1,38,50,51,-1,38,51,39,-1,39,51,52,-1,39,52,40,-1,40,52,53,-1,40,53,41,-1,41,53,54,-1,41,54,42,-1,42,54,55,-1,42,55,43,-1,43,55,56,-1,43,56,44,-1,44,56,57,-1,44,57,45,-1,45,57,58,-1,45,58,46,-1,46,58,59,-1,46,59,47,-1,47,59,60,-1,47,60,48,-1,48,60,49,-1,48,49,37,-1,61,50,49,-1,61,51,50,-1,61,52,51,-1,61,53,52,-1,61,54,53,-1,61,55,54,-1,61,56,55,-1,61,57,56,-1,61,58,57,-1,61,59,58,-1,61,60,59,-1,61,49,60,-1}, 480);
SoCoordinate* SoCoordinate347 = new SoCoordinate();
SoCoordinate347->setDEF(QString("Ball_Coordinates"));
SoCoordinate347->setPoint(new float[]{0.0,0.4675,0.0,0.0,0.4049,-0.2338,-0.1169,0.4049,-0.2024,-0.2024,0.4049,-0.1169,-0.2338,0.4049,0.0,-0.2024,0.4049,0.1169,-0.1169,0.4049,0.2024,0.0,0.4049,0.2338,0.1169,0.4049,0.2024,0.2024,0.4049,0.1169,0.2338,0.4049,0.0,0.2024,0.4049,-0.1169,0.1169,0.4049,-0.2024,0.0,0.2338,-0.4049,-0.2024,0.2338,-0.3506,-0.3506,0.2338,-0.2024,-0.4049,0.2338,0.0,-0.3506,0.2338,0.2024,-0.2024,0.2338,0.3506,0.0,0.2338,0.4049,0.2024,0.2338,0.3506,0.3506,0.2338,0.2024,0.4049,0.2338,0.0,0.3506,0.2338,-0.2024,0.2024,0.2338,-0.3506,0.0,0.0,-0.4675,-0.2338,0.0,-0.4049,-0.4049,0.0,-0.2338,-0.4675,0.0,0.0,-0.4049,0.0,0.2338,-0.2338,0.0,0.4049,0.0,0.0,0.4675,0.2338,0.0,0.4049,0.4049,0.0,0.2338,0.4675,0.0,0.0,0.4049,0.0,-0.2338,0.2338,0.0,-0.4049,0.0,-0.2338,-0.4049,-0.2024,-0.2338,-0.3506,-0.3506,-0.2338,-0.2024,-0.4049,-0.2338,0.0,-0.3506,-0.2338,0.2024,-0.2024,-0.2338,0.3506,0.0,-0.2338,0.4049,0.2024,-0.2338,0.3506,0.3506,-0.2338,0.2024,0.4049,-0.2338,0.0,0.3506,-0.2338,-0.2024,0.2024,-0.2338,-0.3506,0.0,-0.4049,-0.2338,-0.1169,-0.4049,-0.2024,-0.2024,-0.4049,-0.1169,-0.2338,-0.4049,0.0,-0.2024,-0.4049,0.1169,-0.1169,-0.4049,0.2024,0.0,-0.4049,0.2338,0.1169,-0.4049,0.2024,0.2024,-0.4049,0.1169,0.2338,-0.4049,0.0,0.2024,-0.4049,-0.1169,0.1169,-0.4049,-0.2024,0.0,-0.4675,0.0}, 186);
SoIndexedFaceSet346->setCoord(*SoCoordinate347);

SoShape342->setGeometry(*SoIndexedFaceSet346);

SoTransform341->addChild(*SoShape342);

SoViewpoint* SoViewpoint348 = new SoViewpoint();
SoViewpoint348->setDEF(QString("ballView_1"));
SoViewpoint348->setDescription(QString("Ball View"));
SoTransform341->addChild(*SoViewpoint348);

SoGroup340->addChild(*SoTransform341);

SoPositionInterpolator* SoPositionInterpolator349 = new SoPositionInterpolator();
SoPositionInterpolator349->setDEF(QString("ball_TranslationInterpolator"));
SoPositionInterpolator349->setKey(new float[]{0.0,0.4,0.409,1.0}, 4);
SoPositionInterpolator349->setKeyValue(new float[]{-1.0,0.4,-1.0,0.0,0.07,0.0,0.05,0.06,0.05,2.0,4.0,10.0}, 12);
SoGroup340->addChild(*SoPositionInterpolator349);

SoOrientationInterpolator* SoOrientationInterpolator350 = new SoOrientationInterpolator();
SoOrientationInterpolator350->setDEF(QString("ball_RotationInterpolator"));
SoOrientationInterpolator350->setKey(new float[]{0.0,0.4,0.41,0.71,1.0}, 5);
SoOrientationInterpolator350->setKeyValue(new float[]{1.0,0.0,1.0,0.25,-1.0,0.0,-1.0,1.35,-1.0,1.0,-1.0,3.35,-1.0,0.2,-1.0,3.0,-1.0,0.2,-1.0,3.0}, 20);
SoGroup340->addChild(*SoOrientationInterpolator350);

SoNode16->addChild(*SoGroup340);

SoGroup* SoGroup351 = new SoGroup();
SoTransform* SoTransform352 = new SoTransform();
SoTransform352->setScale(new float[]{0.2,0.2,0.2});
SoShape* SoShape353 = new SoShape();
SoShape353->setUSE(QString("AxisLinesShape"));
SoTransform352->addChild(*SoShape353);

SoGroup351->addChild(*SoTransform352);

SoTransform* SoTransform354 = new SoTransform();
SoTransform354->setDEF(QString("Circle0"));
SoTransform354->setScale(new float[]{1.175,1.0,1.175});
SoShape* SoShape355 = new SoShape();
SoShape355->setDEF(QString("circle_Shape"));
SoVRMLAppearance* SoVRMLAppearance356 = new SoVRMLAppearance();
SoVRMLAppearance356->setDEF(QString("circle0_Appearance"));
SoMaterial* SoMaterial357 = new SoMaterial();
SoMaterial357->setDEF(QString("circle0_Material"));
SoMaterial357->setAmbientIntensity(0.9);
SoMaterial357->setDiffuseColor(new float[]{0.9,0.0,0.7});
SoMaterial357->setEmissiveColor(new float[]{0.425,0.486,1.0});
SoVRMLAppearance356->addChild(*SoMaterial357);

SoShape355->addChild(*SoVRMLAppearance356);

SoIndexedLineSet* SoIndexedLineSet358 = new SoIndexedLineSet();
SoIndexedLineSet358->setDEF(QString("Orbit1"));
SoIndexedLineSet358->setCoordIndex(new int32_t[]{0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,-1}, 62);
SoCoordinate* SoCoordinate359 = new SoCoordinate();
SoCoordinate359->setDEF(QString("circle_Coordinates"));
SoCoordinate359->setPoint(new float[]{1.0,0.0,0.0,0.995,0.0,-0.105,0.979,0.0,-0.208,0.951,0.0,-0.309,0.914,0.0,-0.407,0.866,0.0,-0.5,0.809,0.0,-0.588,0.743,0.0,-0.669,0.669,0.0,-0.743,0.588,0.0,-0.809,0.5,0.0,-0.866,0.407,0.0,-0.914,0.309,0.0,-0.951,0.208,0.0,-0.978,0.105,0.0,-0.995,0.0,0.0,-1.0,-0.105,0.0,-0.994522,-0.208,0.0,-0.978,-0.309,0.0,-0.951,-0.407,0.0,-0.914,-0.5,0.0,-0.866,-0.588,0.0,-0.809,-0.669,0.0,-0.743,-0.743,0.0,-0.669,-0.809,0.0,-0.588,-0.866,0.0,-0.5,-0.914,0.0,-0.407,-0.951,0.0,-0.309,-0.978,0.0,-0.208,-0.995,0.0,-0.105,-1.0,0.0,0.0,-0.995,0.0,0.105,-0.978,0.0,0.208,-0.951,0.0,0.309,-0.914,0.0,0.407,-0.866,0.0,0.5,-0.809,0.0,0.588,-0.743,0.0,0.669,-0.669,0.0,0.743,-0.588,0.0,0.809,-0.5,0.0,0.866,-0.407,0.0,0.914,-0.309,0.0,0.951,-0.208,0.0,0.978,-0.105,0.0,0.995,0.0,0.0,1.0,0.105,0.0,0.995,0.208,0.0,0.978,0.309,0.0,0.951,0.407,0.0,0.914,0.5,0.0,0.866,0.588,0.0,0.809,0.669,0.0,0.743,0.743,0.0,0.669,0.809,0.0,0.588,0.866,0.0,0.5,0.914,0.0,0.407,0.951,0.0,0.309,0.978,0.0,0.208,0.995,0.0,0.104,1.0,0.0,0.0}, 183);
SoIndexedLineSet358->setCoord(*SoCoordinate359);

SoShape355->setGeometry(*SoIndexedLineSet358);

SoTransform354->addChild(*SoShape355);

SoGroup351->addChild(*SoTransform354);

SoTransform* SoTransform360 = new SoTransform();
SoTransform360->setDEF(QString("Circle1"));
SoTransform360->setScale(new float[]{0.5,1.0,0.5});
SoShape* SoShape361 = new SoShape();
SoShape361->setDEF(QString("circle1_Shape"));
SoVRMLAppearance* SoVRMLAppearance362 = new SoVRMLAppearance();
SoVRMLAppearance362->setDEF(QString("circle1_Appearance"));
SoMaterial* SoMaterial363 = new SoMaterial();
SoMaterial363->setDEF(QString("circle1_Material"));
SoMaterial363->setDiffuseColor(new float[]{0.9,0.0,0.7});
SoMaterial363->setEmissiveColor(new float[]{0.424956,0.483976,1.0});
SoVRMLAppearance362->addChild(*SoMaterial363);

SoShape361->addChild(*SoVRMLAppearance362);

SoIndexedLineSet* SoIndexedLineSet364 = new SoIndexedLineSet();
SoIndexedLineSet364->setUSE(QString("Orbit1"));
SoShape361->setGeometry(*SoIndexedLineSet364);

SoTransform360->addChild(*SoShape361);

SoGroup351->addChild(*SoTransform360);

SoTransform* SoTransform365 = new SoTransform();
SoTransform365->setDEF(QString("Circle2"));
SoTransform365->setScale(new float[]{0.25,1.0,0.25});
SoShape* SoShape366 = new SoShape();
SoShape366->setDEF(QString("circle2_Shape"));
SoVRMLAppearance* SoVRMLAppearance367 = new SoVRMLAppearance();
SoVRMLAppearance367->setDEF(QString("circle2_Appearance"));
SoMaterial* SoMaterial368 = new SoMaterial();
SoMaterial368->setDEF(QString("circle2_Material"));
SoMaterial368->setDiffuseColor(new float[]{0.9,0.0,0.7});
SoMaterial368->setEmissiveColor(new float[]{0.424956,0.483976,1.0});
SoVRMLAppearance367->addChild(*SoMaterial368);

SoShape366->addChild(*SoVRMLAppearance367);

SoIndexedLineSet* SoIndexedLineSet369 = new SoIndexedLineSet();
SoIndexedLineSet369->setUSE(QString("Orbit1"));
SoShape366->setGeometry(*SoIndexedLineSet369);

SoTransform365->addChild(*SoShape366);

SoGroup351->addChild(*SoTransform365);

SoNode16->addChild(*SoGroup351);

SoROUTE* SoROUTE370 = new SoROUTE();
SoROUTE370->setFromNode(QString("KickTimer"));
SoROUTE370->setFromField(QString("fraction_changed"));
SoROUTE370->setToNode(QString("HumanoidRoot_RotationInterpolator"));
SoROUTE370->setToField(QString("set_fraction"));
SoNode16->addChild(*SoROUTE370);

SoROUTE* SoROUTE371 = new SoROUTE();
SoROUTE371->setFromNode(QString("KickTimer"));
SoROUTE371->setFromField(QString("fraction_changed"));
SoROUTE371->setToNode(QString("HumanoidRoot_TranslationInterpolator"));
SoROUTE371->setToField(QString("set_fraction"));
SoNode16->addChild(*SoROUTE371);

SoROUTE* SoROUTE372 = new SoROUTE();
SoROUTE372->setFromNode(QString("KickTimer"));
SoROUTE372->setFromField(QString("fraction_changed"));
SoROUTE372->setToNode(QString("sacroiliac_RotationInterpolator"));
SoROUTE372->setToField(QString("set_fraction"));
SoNode16->addChild(*SoROUTE372);

SoROUTE* SoROUTE373 = new SoROUTE();
SoROUTE373->setFromNode(QString("KickTimer"));
SoROUTE373->setFromField(QString("fraction_changed"));
SoROUTE373->setToNode(QString("l_hip_RotationInterpolator"));
SoROUTE373->setToField(QString("set_fraction"));
SoNode16->addChild(*SoROUTE373);

SoROUTE* SoROUTE374 = new SoROUTE();
SoROUTE374->setFromNode(QString("KickTimer"));
SoROUTE374->setFromField(QString("fraction_changed"));
SoROUTE374->setToNode(QString("l_knee_RotationInterpolator"));
SoROUTE374->setToField(QString("set_fraction"));
SoNode16->addChild(*SoROUTE374);

SoROUTE* SoROUTE375 = new SoROUTE();
SoROUTE375->setFromNode(QString("KickTimer"));
SoROUTE375->setFromField(QString("fraction_changed"));
SoROUTE375->setToNode(QString("l_ankle_RotationInterpolator"));
SoROUTE375->setToField(QString("set_fraction"));
SoNode16->addChild(*SoROUTE375);

SoROUTE* SoROUTE376 = new SoROUTE();
SoROUTE376->setFromNode(QString("KickTimer"));
SoROUTE376->setFromField(QString("fraction_changed"));
SoROUTE376->setToNode(QString("l_subtalar_RotationInterpolator"));
SoROUTE376->setToField(QString("set_fraction"));
SoNode16->addChild(*SoROUTE376);

SoROUTE* SoROUTE377 = new SoROUTE();
SoROUTE377->setFromNode(QString("KickTimer"));
SoROUTE377->setFromField(QString("fraction_changed"));
SoROUTE377->setToNode(QString("l_midtarsal_RotationInterpolator"));
SoROUTE377->setToField(QString("set_fraction"));
SoNode16->addChild(*SoROUTE377);

SoROUTE* SoROUTE378 = new SoROUTE();
SoROUTE378->setFromNode(QString("KickTimer"));
SoROUTE378->setFromField(QString("fraction_changed"));
SoROUTE378->setToNode(QString("l_metatarsal_RotationInterpolator"));
SoROUTE378->setToField(QString("set_fraction"));
SoNode16->addChild(*SoROUTE378);

SoROUTE* SoROUTE379 = new SoROUTE();
SoROUTE379->setFromNode(QString("KickTimer"));
SoROUTE379->setFromField(QString("fraction_changed"));
SoROUTE379->setToNode(QString("r_hip_RotationInterpolator"));
SoROUTE379->setToField(QString("set_fraction"));
SoNode16->addChild(*SoROUTE379);

SoROUTE* SoROUTE380 = new SoROUTE();
SoROUTE380->setFromNode(QString("KickTimer"));
SoROUTE380->setFromField(QString("fraction_changed"));
SoROUTE380->setToNode(QString("r_knee_RotationInterpolator"));
SoROUTE380->setToField(QString("set_fraction"));
SoNode16->addChild(*SoROUTE380);

SoROUTE* SoROUTE381 = new SoROUTE();
SoROUTE381->setFromNode(QString("KickTimer"));
SoROUTE381->setFromField(QString("fraction_changed"));
SoROUTE381->setToNode(QString("r_ankle_RotationInterpolator"));
SoROUTE381->setToField(QString("set_fraction"));
SoNode16->addChild(*SoROUTE381);

SoROUTE* SoROUTE382 = new SoROUTE();
SoROUTE382->setFromNode(QString("KickTimer"));
SoROUTE382->setFromField(QString("fraction_changed"));
SoROUTE382->setToNode(QString("r_subtalar_RotationInterpolator"));
SoROUTE382->setToField(QString("set_fraction"));
SoNode16->addChild(*SoROUTE382);

SoROUTE* SoROUTE383 = new SoROUTE();
SoROUTE383->setFromNode(QString("KickTimer"));
SoROUTE383->setFromField(QString("fraction_changed"));
SoROUTE383->setToNode(QString("r_midtarsal_RotationInterpolator"));
SoROUTE383->setToField(QString("set_fraction"));
SoNode16->addChild(*SoROUTE383);

SoROUTE* SoROUTE384 = new SoROUTE();
SoROUTE384->setFromNode(QString("KickTimer"));
SoROUTE384->setFromField(QString("fraction_changed"));
SoROUTE384->setToNode(QString("r_metatarsal_RotationInterpolator"));
SoROUTE384->setToField(QString("set_fraction"));
SoNode16->addChild(*SoROUTE384);

SoROUTE* SoROUTE385 = new SoROUTE();
SoROUTE385->setFromNode(QString("KickTimer"));
SoROUTE385->setFromField(QString("fraction_changed"));
SoROUTE385->setToNode(QString("vl5_RotationInterpolator"));
SoROUTE385->setToField(QString("set_fraction"));
SoNode16->addChild(*SoROUTE385);

SoROUTE* SoROUTE386 = new SoROUTE();
SoROUTE386->setFromNode(QString("KickTimer"));
SoROUTE386->setFromField(QString("fraction_changed"));
SoROUTE386->setToNode(QString("vl4_RotationInterpolator"));
SoROUTE386->setToField(QString("set_fraction"));
SoNode16->addChild(*SoROUTE386);

SoROUTE* SoROUTE387 = new SoROUTE();
SoROUTE387->setFromNode(QString("KickTimer"));
SoROUTE387->setFromField(QString("fraction_changed"));
SoROUTE387->setToNode(QString("vl3_RotationInterpolator"));
SoROUTE387->setToField(QString("set_fraction"));
SoNode16->addChild(*SoROUTE387);

SoROUTE* SoROUTE388 = new SoROUTE();
SoROUTE388->setFromNode(QString("KickTimer"));
SoROUTE388->setFromField(QString("fraction_changed"));
SoROUTE388->setToNode(QString("vl2_RotationInterpolator"));
SoROUTE388->setToField(QString("set_fraction"));
SoNode16->addChild(*SoROUTE388);

SoROUTE* SoROUTE389 = new SoROUTE();
SoROUTE389->setFromNode(QString("KickTimer"));
SoROUTE389->setFromField(QString("fraction_changed"));
SoROUTE389->setToNode(QString("vl1_RotationInterpolator"));
SoROUTE389->setToField(QString("set_fraction"));
SoNode16->addChild(*SoROUTE389);

SoROUTE* SoROUTE390 = new SoROUTE();
SoROUTE390->setFromNode(QString("KickTimer"));
SoROUTE390->setFromField(QString("fraction_changed"));
SoROUTE390->setToNode(QString("vt12_RotationInterpolator"));
SoROUTE390->setToField(QString("set_fraction"));
SoNode16->addChild(*SoROUTE390);

SoROUTE* SoROUTE391 = new SoROUTE();
SoROUTE391->setFromNode(QString("KickTimer"));
SoROUTE391->setFromField(QString("fraction_changed"));
SoROUTE391->setToNode(QString("vt11_RotationInterpolator"));
SoROUTE391->setToField(QString("set_fraction"));
SoNode16->addChild(*SoROUTE391);

SoROUTE* SoROUTE392 = new SoROUTE();
SoROUTE392->setFromNode(QString("KickTimer"));
SoROUTE392->setFromField(QString("fraction_changed"));
SoROUTE392->setToNode(QString("vt10_RotationInterpolator"));
SoROUTE392->setToField(QString("set_fraction"));
SoNode16->addChild(*SoROUTE392);

SoROUTE* SoROUTE393 = new SoROUTE();
SoROUTE393->setFromNode(QString("KickTimer"));
SoROUTE393->setFromField(QString("fraction_changed"));
SoROUTE393->setToNode(QString("vt9_RotationInterpolator"));
SoROUTE393->setToField(QString("set_fraction"));
SoNode16->addChild(*SoROUTE393);

SoROUTE* SoROUTE394 = new SoROUTE();
SoROUTE394->setFromNode(QString("KickTimer"));
SoROUTE394->setFromField(QString("fraction_changed"));
SoROUTE394->setToNode(QString("vt8_RotationInterpolator"));
SoROUTE394->setToField(QString("set_fraction"));
SoNode16->addChild(*SoROUTE394);

SoROUTE* SoROUTE395 = new SoROUTE();
SoROUTE395->setFromNode(QString("KickTimer"));
SoROUTE395->setFromField(QString("fraction_changed"));
SoROUTE395->setToNode(QString("vt7_RotationInterpolator"));
SoROUTE395->setToField(QString("set_fraction"));
SoNode16->addChild(*SoROUTE395);

SoROUTE* SoROUTE396 = new SoROUTE();
SoROUTE396->setFromNode(QString("KickTimer"));
SoROUTE396->setFromField(QString("fraction_changed"));
SoROUTE396->setToNode(QString("vt6_RotationInterpolator"));
SoROUTE396->setToField(QString("set_fraction"));
SoNode16->addChild(*SoROUTE396);

SoROUTE* SoROUTE397 = new SoROUTE();
SoROUTE397->setFromNode(QString("KickTimer"));
SoROUTE397->setFromField(QString("fraction_changed"));
SoROUTE397->setToNode(QString("vt5_RotationInterpolator"));
SoROUTE397->setToField(QString("set_fraction"));
SoNode16->addChild(*SoROUTE397);

SoROUTE* SoROUTE398 = new SoROUTE();
SoROUTE398->setFromNode(QString("KickTimer"));
SoROUTE398->setFromField(QString("fraction_changed"));
SoROUTE398->setToNode(QString("vt4_RotationInterpolator"));
SoROUTE398->setToField(QString("set_fraction"));
SoNode16->addChild(*SoROUTE398);

SoROUTE* SoROUTE399 = new SoROUTE();
SoROUTE399->setFromNode(QString("KickTimer"));
SoROUTE399->setFromField(QString("fraction_changed"));
SoROUTE399->setToNode(QString("vt3_RotationInterpolator"));
SoROUTE399->setToField(QString("set_fraction"));
SoNode16->addChild(*SoROUTE399);

SoROUTE* SoROUTE400 = new SoROUTE();
SoROUTE400->setFromNode(QString("KickTimer"));
SoROUTE400->setFromField(QString("fraction_changed"));
SoROUTE400->setToNode(QString("vt2_RotationInterpolator"));
SoROUTE400->setToField(QString("set_fraction"));
SoNode16->addChild(*SoROUTE400);

SoROUTE* SoROUTE401 = new SoROUTE();
SoROUTE401->setFromNode(QString("KickTimer"));
SoROUTE401->setFromField(QString("fraction_changed"));
SoROUTE401->setToNode(QString("vt1_RotationInterpolator"));
SoROUTE401->setToField(QString("set_fraction"));
SoNode16->addChild(*SoROUTE401);

SoROUTE* SoROUTE402 = new SoROUTE();
SoROUTE402->setFromNode(QString("KickTimer"));
SoROUTE402->setFromField(QString("fraction_changed"));
SoROUTE402->setToNode(QString("vc7_RotationInterpolator"));
SoROUTE402->setToField(QString("set_fraction"));
SoNode16->addChild(*SoROUTE402);

SoROUTE* SoROUTE403 = new SoROUTE();
SoROUTE403->setFromNode(QString("KickTimer"));
SoROUTE403->setFromField(QString("fraction_changed"));
SoROUTE403->setToNode(QString("vc6_RotationInterpolator"));
SoROUTE403->setToField(QString("set_fraction"));
SoNode16->addChild(*SoROUTE403);

SoROUTE* SoROUTE404 = new SoROUTE();
SoROUTE404->setFromNode(QString("KickTimer"));
SoROUTE404->setFromField(QString("fraction_changed"));
SoROUTE404->setToNode(QString("vc5_RotationInterpolator"));
SoROUTE404->setToField(QString("set_fraction"));
SoNode16->addChild(*SoROUTE404);

SoROUTE* SoROUTE405 = new SoROUTE();
SoROUTE405->setFromNode(QString("KickTimer"));
SoROUTE405->setFromField(QString("fraction_changed"));
SoROUTE405->setToNode(QString("vc4_RotationInterpolator"));
SoROUTE405->setToField(QString("set_fraction"));
SoNode16->addChild(*SoROUTE405);

SoROUTE* SoROUTE406 = new SoROUTE();
SoROUTE406->setFromNode(QString("KickTimer"));
SoROUTE406->setFromField(QString("fraction_changed"));
SoROUTE406->setToNode(QString("vc3_RotationInterpolator"));
SoROUTE406->setToField(QString("set_fraction"));
SoNode16->addChild(*SoROUTE406);

SoROUTE* SoROUTE407 = new SoROUTE();
SoROUTE407->setFromNode(QString("KickTimer"));
SoROUTE407->setFromField(QString("fraction_changed"));
SoROUTE407->setToNode(QString("vc2_RotationInterpolator"));
SoROUTE407->setToField(QString("set_fraction"));
SoNode16->addChild(*SoROUTE407);

SoROUTE* SoROUTE408 = new SoROUTE();
SoROUTE408->setFromNode(QString("KickTimer"));
SoROUTE408->setFromField(QString("fraction_changed"));
SoROUTE408->setToNode(QString("vc1_RotationInterpolator"));
SoROUTE408->setToField(QString("set_fraction"));
SoNode16->addChild(*SoROUTE408);

SoROUTE* SoROUTE409 = new SoROUTE();
SoROUTE409->setFromNode(QString("KickTimer"));
SoROUTE409->setFromField(QString("fraction_changed"));
SoROUTE409->setToNode(QString("skullbase_RotationInterpolator"));
SoROUTE409->setToField(QString("set_fraction"));
SoNode16->addChild(*SoROUTE409);

SoROUTE* SoROUTE410 = new SoROUTE();
SoROUTE410->setFromNode(QString("KickTimer"));
SoROUTE410->setFromField(QString("fraction_changed"));
SoROUTE410->setToNode(QString("l_eyelid_joint_RotationInterpolator"));
SoROUTE410->setToField(QString("set_fraction"));
SoNode16->addChild(*SoROUTE410);

SoROUTE* SoROUTE411 = new SoROUTE();
SoROUTE411->setFromNode(QString("KickTimer"));
SoROUTE411->setFromField(QString("fraction_changed"));
SoROUTE411->setToNode(QString("l_eyeball_joint_RotationInterpolator"));
SoROUTE411->setToField(QString("set_fraction"));
SoNode16->addChild(*SoROUTE411);

SoROUTE* SoROUTE412 = new SoROUTE();
SoROUTE412->setFromNode(QString("KickTimer"));
SoROUTE412->setFromField(QString("fraction_changed"));
SoROUTE412->setToNode(QString("l_eyebrow_joint_RotationInterpolator"));
SoROUTE412->setToField(QString("set_fraction"));
SoNode16->addChild(*SoROUTE412);

SoROUTE* SoROUTE413 = new SoROUTE();
SoROUTE413->setFromNode(QString("KickTimer"));
SoROUTE413->setFromField(QString("fraction_changed"));
SoROUTE413->setToNode(QString("r_eyelid_joint_RotationInterpolator"));
SoROUTE413->setToField(QString("set_fraction"));
SoNode16->addChild(*SoROUTE413);

SoROUTE* SoROUTE414 = new SoROUTE();
SoROUTE414->setFromNode(QString("KickTimer"));
SoROUTE414->setFromField(QString("fraction_changed"));
SoROUTE414->setToNode(QString("r_eyeball_joint_RotationInterpolator"));
SoROUTE414->setToField(QString("set_fraction"));
SoNode16->addChild(*SoROUTE414);

SoROUTE* SoROUTE415 = new SoROUTE();
SoROUTE415->setFromNode(QString("KickTimer"));
SoROUTE415->setFromField(QString("fraction_changed"));
SoROUTE415->setToNode(QString("r_eyebrow_joint_RotationInterpolator"));
SoROUTE415->setToField(QString("set_fraction"));
SoNode16->addChild(*SoROUTE415);

SoROUTE* SoROUTE416 = new SoROUTE();
SoROUTE416->setFromNode(QString("KickTimer"));
SoROUTE416->setFromField(QString("fraction_changed"));
SoROUTE416->setToNode(QString("temporomandibular_RotationInterpolator"));
SoROUTE416->setToField(QString("set_fraction"));
SoNode16->addChild(*SoROUTE416);

SoROUTE* SoROUTE417 = new SoROUTE();
SoROUTE417->setFromNode(QString("KickTimer"));
SoROUTE417->setFromField(QString("fraction_changed"));
SoROUTE417->setToNode(QString("l_sternoclavicular_RotationInterpolator"));
SoROUTE417->setToField(QString("set_fraction"));
SoNode16->addChild(*SoROUTE417);

SoROUTE* SoROUTE418 = new SoROUTE();
SoROUTE418->setFromNode(QString("KickTimer"));
SoROUTE418->setFromField(QString("fraction_changed"));
SoROUTE418->setToNode(QString("l_acromioclavicular_RotationInterpolator"));
SoROUTE418->setToField(QString("set_fraction"));
SoNode16->addChild(*SoROUTE418);

SoROUTE* SoROUTE419 = new SoROUTE();
SoROUTE419->setFromNode(QString("KickTimer"));
SoROUTE419->setFromField(QString("fraction_changed"));
SoROUTE419->setToNode(QString("l_shoulder_RotationInterpolator"));
SoROUTE419->setToField(QString("set_fraction"));
SoNode16->addChild(*SoROUTE419);

SoROUTE* SoROUTE420 = new SoROUTE();
SoROUTE420->setFromNode(QString("KickTimer"));
SoROUTE420->setFromField(QString("fraction_changed"));
SoROUTE420->setToNode(QString("l_elbow_RotationInterpolator"));
SoROUTE420->setToField(QString("set_fraction"));
SoNode16->addChild(*SoROUTE420);

SoROUTE* SoROUTE421 = new SoROUTE();
SoROUTE421->setFromNode(QString("KickTimer"));
SoROUTE421->setFromField(QString("fraction_changed"));
SoROUTE421->setToNode(QString("l_wrist_RotationInterpolator"));
SoROUTE421->setToField(QString("set_fraction"));
SoNode16->addChild(*SoROUTE421);

SoROUTE* SoROUTE422 = new SoROUTE();
SoROUTE422->setFromNode(QString("KickTimer"));
SoROUTE422->setFromField(QString("fraction_changed"));
SoROUTE422->setToNode(QString("l_thumb1_RotationInterpolator"));
SoROUTE422->setToField(QString("set_fraction"));
SoNode16->addChild(*SoROUTE422);

SoROUTE* SoROUTE423 = new SoROUTE();
SoROUTE423->setFromNode(QString("KickTimer"));
SoROUTE423->setFromField(QString("fraction_changed"));
SoROUTE423->setToNode(QString("l_thumb2_RotationInterpolator"));
SoROUTE423->setToField(QString("set_fraction"));
SoNode16->addChild(*SoROUTE423);

SoROUTE* SoROUTE424 = new SoROUTE();
SoROUTE424->setFromNode(QString("KickTimer"));
SoROUTE424->setFromField(QString("fraction_changed"));
SoROUTE424->setToNode(QString("l_thumb3_RotationInterpolator"));
SoROUTE424->setToField(QString("set_fraction"));
SoNode16->addChild(*SoROUTE424);

SoROUTE* SoROUTE425 = new SoROUTE();
SoROUTE425->setFromNode(QString("KickTimer"));
SoROUTE425->setFromField(QString("fraction_changed"));
SoROUTE425->setToNode(QString("l_index0_RotationInterpolator"));
SoROUTE425->setToField(QString("set_fraction"));
SoNode16->addChild(*SoROUTE425);

SoROUTE* SoROUTE426 = new SoROUTE();
SoROUTE426->setFromNode(QString("KickTimer"));
SoROUTE426->setFromField(QString("fraction_changed"));
SoROUTE426->setToNode(QString("l_index1_RotationInterpolator"));
SoROUTE426->setToField(QString("set_fraction"));
SoNode16->addChild(*SoROUTE426);

SoROUTE* SoROUTE427 = new SoROUTE();
SoROUTE427->setFromNode(QString("KickTimer"));
SoROUTE427->setFromField(QString("fraction_changed"));
SoROUTE427->setToNode(QString("l_index2_RotationInterpolator"));
SoROUTE427->setToField(QString("set_fraction"));
SoNode16->addChild(*SoROUTE427);

SoROUTE* SoROUTE428 = new SoROUTE();
SoROUTE428->setFromNode(QString("KickTimer"));
SoROUTE428->setFromField(QString("fraction_changed"));
SoROUTE428->setToNode(QString("l_index3_RotationInterpolator"));
SoROUTE428->setToField(QString("set_fraction"));
SoNode16->addChild(*SoROUTE428);

SoROUTE* SoROUTE429 = new SoROUTE();
SoROUTE429->setFromNode(QString("KickTimer"));
SoROUTE429->setFromField(QString("fraction_changed"));
SoROUTE429->setToNode(QString("l_middle0_RotationInterpolator"));
SoROUTE429->setToField(QString("set_fraction"));
SoNode16->addChild(*SoROUTE429);

SoROUTE* SoROUTE430 = new SoROUTE();
SoROUTE430->setFromNode(QString("KickTimer"));
SoROUTE430->setFromField(QString("fraction_changed"));
SoROUTE430->setToNode(QString("l_middle1_RotationInterpolator"));
SoROUTE430->setToField(QString("set_fraction"));
SoNode16->addChild(*SoROUTE430);

SoROUTE* SoROUTE431 = new SoROUTE();
SoROUTE431->setFromNode(QString("KickTimer"));
SoROUTE431->setFromField(QString("fraction_changed"));
SoROUTE431->setToNode(QString("l_middle2_RotationInterpolator"));
SoROUTE431->setToField(QString("set_fraction"));
SoNode16->addChild(*SoROUTE431);

SoROUTE* SoROUTE432 = new SoROUTE();
SoROUTE432->setFromNode(QString("KickTimer"));
SoROUTE432->setFromField(QString("fraction_changed"));
SoROUTE432->setToNode(QString("l_middle3_RotationInterpolator"));
SoROUTE432->setToField(QString("set_fraction"));
SoNode16->addChild(*SoROUTE432);

SoROUTE* SoROUTE433 = new SoROUTE();
SoROUTE433->setFromNode(QString("KickTimer"));
SoROUTE433->setFromField(QString("fraction_changed"));
SoROUTE433->setToNode(QString("l_ring0_RotationInterpolator"));
SoROUTE433->setToField(QString("set_fraction"));
SoNode16->addChild(*SoROUTE433);

SoROUTE* SoROUTE434 = new SoROUTE();
SoROUTE434->setFromNode(QString("KickTimer"));
SoROUTE434->setFromField(QString("fraction_changed"));
SoROUTE434->setToNode(QString("l_ring1_RotationInterpolator"));
SoROUTE434->setToField(QString("set_fraction"));
SoNode16->addChild(*SoROUTE434);

SoROUTE* SoROUTE435 = new SoROUTE();
SoROUTE435->setFromNode(QString("KickTimer"));
SoROUTE435->setFromField(QString("fraction_changed"));
SoROUTE435->setToNode(QString("l_ring2_RotationInterpolator"));
SoROUTE435->setToField(QString("set_fraction"));
SoNode16->addChild(*SoROUTE435);

SoROUTE* SoROUTE436 = new SoROUTE();
SoROUTE436->setFromNode(QString("KickTimer"));
SoROUTE436->setFromField(QString("fraction_changed"));
SoROUTE436->setToNode(QString("l_ring3_RotationInterpolator"));
SoROUTE436->setToField(QString("set_fraction"));
SoNode16->addChild(*SoROUTE436);

SoROUTE* SoROUTE437 = new SoROUTE();
SoROUTE437->setFromNode(QString("KickTimer"));
SoROUTE437->setFromField(QString("fraction_changed"));
SoROUTE437->setToNode(QString("l_pinky0_RotationInterpolator"));
SoROUTE437->setToField(QString("set_fraction"));
SoNode16->addChild(*SoROUTE437);

SoROUTE* SoROUTE438 = new SoROUTE();
SoROUTE438->setFromNode(QString("KickTimer"));
SoROUTE438->setFromField(QString("fraction_changed"));
SoROUTE438->setToNode(QString("l_pinky1_RotationInterpolator"));
SoROUTE438->setToField(QString("set_fraction"));
SoNode16->addChild(*SoROUTE438);

SoROUTE* SoROUTE439 = new SoROUTE();
SoROUTE439->setFromNode(QString("KickTimer"));
SoROUTE439->setFromField(QString("fraction_changed"));
SoROUTE439->setToNode(QString("l_pinky2_RotationInterpolator"));
SoROUTE439->setToField(QString("set_fraction"));
SoNode16->addChild(*SoROUTE439);

SoROUTE* SoROUTE440 = new SoROUTE();
SoROUTE440->setFromNode(QString("KickTimer"));
SoROUTE440->setFromField(QString("fraction_changed"));
SoROUTE440->setToNode(QString("l_pinky3_RotationInterpolator"));
SoROUTE440->setToField(QString("set_fraction"));
SoNode16->addChild(*SoROUTE440);

SoROUTE* SoROUTE441 = new SoROUTE();
SoROUTE441->setFromNode(QString("KickTimer"));
SoROUTE441->setFromField(QString("fraction_changed"));
SoROUTE441->setToNode(QString("r_sternoclavicular_RotationInterpolator"));
SoROUTE441->setToField(QString("set_fraction"));
SoNode16->addChild(*SoROUTE441);

SoROUTE* SoROUTE442 = new SoROUTE();
SoROUTE442->setFromNode(QString("KickTimer"));
SoROUTE442->setFromField(QString("fraction_changed"));
SoROUTE442->setToNode(QString("r_acromioclavicular_RotationInterpolator"));
SoROUTE442->setToField(QString("set_fraction"));
SoNode16->addChild(*SoROUTE442);

SoROUTE* SoROUTE443 = new SoROUTE();
SoROUTE443->setFromNode(QString("KickTimer"));
SoROUTE443->setFromField(QString("fraction_changed"));
SoROUTE443->setToNode(QString("r_shoulder_RotationInterpolator"));
SoROUTE443->setToField(QString("set_fraction"));
SoNode16->addChild(*SoROUTE443);

SoROUTE* SoROUTE444 = new SoROUTE();
SoROUTE444->setFromNode(QString("KickTimer"));
SoROUTE444->setFromField(QString("fraction_changed"));
SoROUTE444->setToNode(QString("r_elbow_RotationInterpolator"));
SoROUTE444->setToField(QString("set_fraction"));
SoNode16->addChild(*SoROUTE444);

SoROUTE* SoROUTE445 = new SoROUTE();
SoROUTE445->setFromNode(QString("KickTimer"));
SoROUTE445->setFromField(QString("fraction_changed"));
SoROUTE445->setToNode(QString("r_wrist_RotationInterpolator"));
SoROUTE445->setToField(QString("set_fraction"));
SoNode16->addChild(*SoROUTE445);

SoROUTE* SoROUTE446 = new SoROUTE();
SoROUTE446->setFromNode(QString("KickTimer"));
SoROUTE446->setFromField(QString("fraction_changed"));
SoROUTE446->setToNode(QString("r_thumb1_RotationInterpolator"));
SoROUTE446->setToField(QString("set_fraction"));
SoNode16->addChild(*SoROUTE446);

SoROUTE* SoROUTE447 = new SoROUTE();
SoROUTE447->setFromNode(QString("KickTimer"));
SoROUTE447->setFromField(QString("fraction_changed"));
SoROUTE447->setToNode(QString("r_thumb2_RotationInterpolator"));
SoROUTE447->setToField(QString("set_fraction"));
SoNode16->addChild(*SoROUTE447);

SoROUTE* SoROUTE448 = new SoROUTE();
SoROUTE448->setFromNode(QString("KickTimer"));
SoROUTE448->setFromField(QString("fraction_changed"));
SoROUTE448->setToNode(QString("r_thumb3_RotationInterpolator"));
SoROUTE448->setToField(QString("set_fraction"));
SoNode16->addChild(*SoROUTE448);

SoROUTE* SoROUTE449 = new SoROUTE();
SoROUTE449->setFromNode(QString("KickTimer"));
SoROUTE449->setFromField(QString("fraction_changed"));
SoROUTE449->setToNode(QString("r_index0_RotationInterpolator"));
SoROUTE449->setToField(QString("set_fraction"));
SoNode16->addChild(*SoROUTE449);

SoROUTE* SoROUTE450 = new SoROUTE();
SoROUTE450->setFromNode(QString("KickTimer"));
SoROUTE450->setFromField(QString("fraction_changed"));
SoROUTE450->setToNode(QString("r_index1_RotationInterpolator"));
SoROUTE450->setToField(QString("set_fraction"));
SoNode16->addChild(*SoROUTE450);

SoROUTE* SoROUTE451 = new SoROUTE();
SoROUTE451->setFromNode(QString("KickTimer"));
SoROUTE451->setFromField(QString("fraction_changed"));
SoROUTE451->setToNode(QString("r_index2_RotationInterpolator"));
SoROUTE451->setToField(QString("set_fraction"));
SoNode16->addChild(*SoROUTE451);

SoROUTE* SoROUTE452 = new SoROUTE();
SoROUTE452->setFromNode(QString("KickTimer"));
SoROUTE452->setFromField(QString("fraction_changed"));
SoROUTE452->setToNode(QString("r_index3_RotationInterpolator"));
SoROUTE452->setToField(QString("set_fraction"));
SoNode16->addChild(*SoROUTE452);

SoROUTE* SoROUTE453 = new SoROUTE();
SoROUTE453->setFromNode(QString("KickTimer"));
SoROUTE453->setFromField(QString("fraction_changed"));
SoROUTE453->setToNode(QString("r_middle0_RotationInterpolator"));
SoROUTE453->setToField(QString("set_fraction"));
SoNode16->addChild(*SoROUTE453);

SoROUTE* SoROUTE454 = new SoROUTE();
SoROUTE454->setFromNode(QString("KickTimer"));
SoROUTE454->setFromField(QString("fraction_changed"));
SoROUTE454->setToNode(QString("r_middle1_RotationInterpolator"));
SoROUTE454->setToField(QString("set_fraction"));
SoNode16->addChild(*SoROUTE454);

SoROUTE* SoROUTE455 = new SoROUTE();
SoROUTE455->setFromNode(QString("KickTimer"));
SoROUTE455->setFromField(QString("fraction_changed"));
SoROUTE455->setToNode(QString("r_middle2_RotationInterpolator"));
SoROUTE455->setToField(QString("set_fraction"));
SoNode16->addChild(*SoROUTE455);

SoROUTE* SoROUTE456 = new SoROUTE();
SoROUTE456->setFromNode(QString("KickTimer"));
SoROUTE456->setFromField(QString("fraction_changed"));
SoROUTE456->setToNode(QString("r_middle3_RotationInterpolator"));
SoROUTE456->setToField(QString("set_fraction"));
SoNode16->addChild(*SoROUTE456);

SoROUTE* SoROUTE457 = new SoROUTE();
SoROUTE457->setFromNode(QString("KickTimer"));
SoROUTE457->setFromField(QString("fraction_changed"));
SoROUTE457->setToNode(QString("r_ring0_RotationInterpolator"));
SoROUTE457->setToField(QString("set_fraction"));
SoNode16->addChild(*SoROUTE457);

SoROUTE* SoROUTE458 = new SoROUTE();
SoROUTE458->setFromNode(QString("KickTimer"));
SoROUTE458->setFromField(QString("fraction_changed"));
SoROUTE458->setToNode(QString("r_ring1_RotationInterpolator"));
SoROUTE458->setToField(QString("set_fraction"));
SoNode16->addChild(*SoROUTE458);

SoROUTE* SoROUTE459 = new SoROUTE();
SoROUTE459->setFromNode(QString("KickTimer"));
SoROUTE459->setFromField(QString("fraction_changed"));
SoROUTE459->setToNode(QString("r_ring2_RotationInterpolator"));
SoROUTE459->setToField(QString("set_fraction"));
SoNode16->addChild(*SoROUTE459);

SoROUTE* SoROUTE460 = new SoROUTE();
SoROUTE460->setFromNode(QString("KickTimer"));
SoROUTE460->setFromField(QString("fraction_changed"));
SoROUTE460->setToNode(QString("r_ring3_RotationInterpolator"));
SoROUTE460->setToField(QString("set_fraction"));
SoNode16->addChild(*SoROUTE460);

SoROUTE* SoROUTE461 = new SoROUTE();
SoROUTE461->setFromNode(QString("KickTimer"));
SoROUTE461->setFromField(QString("fraction_changed"));
SoROUTE461->setToNode(QString("r_pinky0_RotationInterpolator"));
SoROUTE461->setToField(QString("set_fraction"));
SoNode16->addChild(*SoROUTE461);

SoROUTE* SoROUTE462 = new SoROUTE();
SoROUTE462->setFromNode(QString("KickTimer"));
SoROUTE462->setFromField(QString("fraction_changed"));
SoROUTE462->setToNode(QString("r_pinky1_RotationInterpolator"));
SoROUTE462->setToField(QString("set_fraction"));
SoNode16->addChild(*SoROUTE462);

SoROUTE* SoROUTE463 = new SoROUTE();
SoROUTE463->setFromNode(QString("KickTimer"));
SoROUTE463->setFromField(QString("fraction_changed"));
SoROUTE463->setToNode(QString("r_pinky2_RotationInterpolator"));
SoROUTE463->setToField(QString("set_fraction"));
SoNode16->addChild(*SoROUTE463);

SoROUTE* SoROUTE464 = new SoROUTE();
SoROUTE464->setFromNode(QString("KickTimer"));
SoROUTE464->setFromField(QString("fraction_changed"));
SoROUTE464->setToNode(QString("r_pinky3_RotationInterpolator"));
SoROUTE464->setToField(QString("set_fraction"));
SoNode16->addChild(*SoROUTE464);

SoROUTE* SoROUTE465 = new SoROUTE();
SoROUTE465->setFromNode(QString("HumanoidRoot_RotationInterpolator"));
SoROUTE465->setFromField(QString("value_changed"));
SoROUTE465->setToNode(QString("Joe_humanoid_root"));
SoROUTE465->setToField(QString("set_rotation"));
SoNode16->addChild(*SoROUTE465);

SoROUTE* SoROUTE466 = new SoROUTE();
SoROUTE466->setFromNode(QString("HumanoidRoot_TranslationInterpolator"));
SoROUTE466->setFromField(QString("value_changed"));
SoROUTE466->setToNode(QString("Joe_humanoid_root"));
SoROUTE466->setToField(QString("set_translation"));
SoNode16->addChild(*SoROUTE466);

SoROUTE* SoROUTE467 = new SoROUTE();
SoROUTE467->setFromNode(QString("sacroiliac_RotationInterpolator"));
SoROUTE467->setFromField(QString("value_changed"));
SoROUTE467->setToNode(QString("Joe_sacroiliac"));
SoROUTE467->setToField(QString("set_rotation"));
SoNode16->addChild(*SoROUTE467);

SoROUTE* SoROUTE468 = new SoROUTE();
SoROUTE468->setFromNode(QString("l_hip_RotationInterpolator"));
SoROUTE468->setFromField(QString("value_changed"));
SoROUTE468->setToNode(QString("Joe_l_hip"));
SoROUTE468->setToField(QString("set_rotation"));
SoNode16->addChild(*SoROUTE468);

SoROUTE* SoROUTE469 = new SoROUTE();
SoROUTE469->setFromNode(QString("l_knee_RotationInterpolator"));
SoROUTE469->setFromField(QString("value_changed"));
SoROUTE469->setToNode(QString("Joe_l_knee"));
SoROUTE469->setToField(QString("set_rotation"));
SoNode16->addChild(*SoROUTE469);

SoROUTE* SoROUTE470 = new SoROUTE();
SoROUTE470->setFromNode(QString("l_ankle_RotationInterpolator"));
SoROUTE470->setFromField(QString("value_changed"));
SoROUTE470->setToNode(QString("Joe_l_talocrural"));
SoROUTE470->setToField(QString("set_rotation"));
SoNode16->addChild(*SoROUTE470);

SoROUTE* SoROUTE471 = new SoROUTE();
SoROUTE471->setFromNode(QString("l_subtalar_RotationInterpolator"));
SoROUTE471->setFromField(QString("value_changed"));
SoROUTE471->setToNode(QString("Joe_l_tarsometatarsal_2"));
SoROUTE471->setToField(QString("set_rotation"));
SoNode16->addChild(*SoROUTE471);

SoROUTE* SoROUTE472 = new SoROUTE();
SoROUTE472->setFromNode(QString("l_midtarsal_RotationInterpolator"));
SoROUTE472->setFromField(QString("value_changed"));
SoROUTE472->setToNode(QString("Joe_l_metatarsophalangeal_2"));
SoROUTE472->setToField(QString("set_rotation"));
SoNode16->addChild(*SoROUTE472);

SoROUTE* SoROUTE473 = new SoROUTE();
SoROUTE473->setFromNode(QString("l_metatarsal_RotationInterpolator"));
SoROUTE473->setFromField(QString("value_changed"));
SoROUTE473->setToNode(QString("Joe_l_tarsal_distal_interphalangeal_2"));
SoROUTE473->setToField(QString("set_rotation"));
SoNode16->addChild(*SoROUTE473);

SoROUTE* SoROUTE474 = new SoROUTE();
SoROUTE474->setFromNode(QString("r_hip_RotationInterpolator"));
SoROUTE474->setFromField(QString("value_changed"));
SoROUTE474->setToNode(QString("Joe_r_hip"));
SoROUTE474->setToField(QString("set_rotation"));
SoNode16->addChild(*SoROUTE474);

SoROUTE* SoROUTE475 = new SoROUTE();
SoROUTE475->setFromNode(QString("r_knee_RotationInterpolator"));
SoROUTE475->setFromField(QString("value_changed"));
SoROUTE475->setToNode(QString("Joe_r_knee"));
SoROUTE475->setToField(QString("set_rotation"));
SoNode16->addChild(*SoROUTE475);

SoROUTE* SoROUTE476 = new SoROUTE();
SoROUTE476->setFromNode(QString("r_ankle_RotationInterpolator"));
SoROUTE476->setFromField(QString("value_changed"));
SoROUTE476->setToNode(QString("Joe_r_talocrural"));
SoROUTE476->setToField(QString("set_rotation"));
SoNode16->addChild(*SoROUTE476);

SoROUTE* SoROUTE477 = new SoROUTE();
SoROUTE477->setFromNode(QString("r_subtalar_RotationInterpolator"));
SoROUTE477->setFromField(QString("value_changed"));
SoROUTE477->setToNode(QString("Joe_r_tarsometatarsal_2"));
SoROUTE477->setToField(QString("set_rotation"));
SoNode16->addChild(*SoROUTE477);

SoROUTE* SoROUTE478 = new SoROUTE();
SoROUTE478->setFromNode(QString("r_midtarsal_RotationInterpolator"));
SoROUTE478->setFromField(QString("value_changed"));
SoROUTE478->setToNode(QString("Joe_r_metatarsophalangeal_2"));
SoROUTE478->setToField(QString("set_rotation"));
SoNode16->addChild(*SoROUTE478);

SoROUTE* SoROUTE479 = new SoROUTE();
SoROUTE479->setFromNode(QString("r_metatarsal_RotationInterpolator"));
SoROUTE479->setFromField(QString("value_changed"));
SoROUTE479->setToNode(QString("Joe_r_tarsal_distal_interphalangeal_2"));
SoROUTE479->setToField(QString("set_rotation"));
SoNode16->addChild(*SoROUTE479);

SoROUTE* SoROUTE480 = new SoROUTE();
SoROUTE480->setFromNode(QString("vl5_RotationInterpolator"));
SoROUTE480->setFromField(QString("value_changed"));
SoROUTE480->setToNode(QString("Joe_vl5"));
SoROUTE480->setToField(QString("set_rotation"));
SoNode16->addChild(*SoROUTE480);

SoROUTE* SoROUTE481 = new SoROUTE();
SoROUTE481->setFromNode(QString("vl4_RotationInterpolator"));
SoROUTE481->setFromField(QString("value_changed"));
SoROUTE481->setToNode(QString("Joe_vl4"));
SoROUTE481->setToField(QString("set_rotation"));
SoNode16->addChild(*SoROUTE481);

SoROUTE* SoROUTE482 = new SoROUTE();
SoROUTE482->setFromNode(QString("vl3_RotationInterpolator"));
SoROUTE482->setFromField(QString("value_changed"));
SoROUTE482->setToNode(QString("Joe_vl3"));
SoROUTE482->setToField(QString("set_rotation"));
SoNode16->addChild(*SoROUTE482);

SoROUTE* SoROUTE483 = new SoROUTE();
SoROUTE483->setFromNode(QString("vl2_RotationInterpolator"));
SoROUTE483->setFromField(QString("value_changed"));
SoROUTE483->setToNode(QString("Joe_vl2"));
SoROUTE483->setToField(QString("set_rotation"));
SoNode16->addChild(*SoROUTE483);

SoROUTE* SoROUTE484 = new SoROUTE();
SoROUTE484->setFromNode(QString("vl1_RotationInterpolator"));
SoROUTE484->setFromField(QString("value_changed"));
SoROUTE484->setToNode(QString("Joe_vl1"));
SoROUTE484->setToField(QString("set_rotation"));
SoNode16->addChild(*SoROUTE484);

SoROUTE* SoROUTE485 = new SoROUTE();
SoROUTE485->setFromNode(QString("vt12_RotationInterpolator"));
SoROUTE485->setFromField(QString("value_changed"));
SoROUTE485->setToNode(QString("Joe_vt12"));
SoROUTE485->setToField(QString("set_rotation"));
SoNode16->addChild(*SoROUTE485);

SoROUTE* SoROUTE486 = new SoROUTE();
SoROUTE486->setFromNode(QString("vt11_RotationInterpolator"));
SoROUTE486->setFromField(QString("value_changed"));
SoROUTE486->setToNode(QString("Joe_vt11"));
SoROUTE486->setToField(QString("set_rotation"));
SoNode16->addChild(*SoROUTE486);

SoROUTE* SoROUTE487 = new SoROUTE();
SoROUTE487->setFromNode(QString("vt10_RotationInterpolator"));
SoROUTE487->setFromField(QString("value_changed"));
SoROUTE487->setToNode(QString("Joe_vt10"));
SoROUTE487->setToField(QString("set_rotation"));
SoNode16->addChild(*SoROUTE487);

SoROUTE* SoROUTE488 = new SoROUTE();
SoROUTE488->setFromNode(QString("vt9_RotationInterpolator"));
SoROUTE488->setFromField(QString("value_changed"));
SoROUTE488->setToNode(QString("Joe_vt9"));
SoROUTE488->setToField(QString("set_rotation"));
SoNode16->addChild(*SoROUTE488);

SoROUTE* SoROUTE489 = new SoROUTE();
SoROUTE489->setFromNode(QString("vt8_RotationInterpolator"));
SoROUTE489->setFromField(QString("value_changed"));
SoROUTE489->setToNode(QString("Joe_vt8"));
SoROUTE489->setToField(QString("set_rotation"));
SoNode16->addChild(*SoROUTE489);

SoROUTE* SoROUTE490 = new SoROUTE();
SoROUTE490->setFromNode(QString("vt7_RotationInterpolator"));
SoROUTE490->setFromField(QString("value_changed"));
SoROUTE490->setToNode(QString("Joe_vt7"));
SoROUTE490->setToField(QString("set_rotation"));
SoNode16->addChild(*SoROUTE490);

SoROUTE* SoROUTE491 = new SoROUTE();
SoROUTE491->setFromNode(QString("vt6_RotationInterpolator"));
SoROUTE491->setFromField(QString("value_changed"));
SoROUTE491->setToNode(QString("Joe_vt6"));
SoROUTE491->setToField(QString("set_rotation"));
SoNode16->addChild(*SoROUTE491);

SoROUTE* SoROUTE492 = new SoROUTE();
SoROUTE492->setFromNode(QString("vt5_RotationInterpolator"));
SoROUTE492->setFromField(QString("value_changed"));
SoROUTE492->setToNode(QString("Joe_vt5"));
SoROUTE492->setToField(QString("set_rotation"));
SoNode16->addChild(*SoROUTE492);

SoROUTE* SoROUTE493 = new SoROUTE();
SoROUTE493->setFromNode(QString("vt4_RotationInterpolator"));
SoROUTE493->setFromField(QString("value_changed"));
SoROUTE493->setToNode(QString("Joe_vt4"));
SoROUTE493->setToField(QString("set_rotation"));
SoNode16->addChild(*SoROUTE493);

SoROUTE* SoROUTE494 = new SoROUTE();
SoROUTE494->setFromNode(QString("vt3_RotationInterpolator"));
SoROUTE494->setFromField(QString("value_changed"));
SoROUTE494->setToNode(QString("Joe_vt3"));
SoROUTE494->setToField(QString("set_rotation"));
SoNode16->addChild(*SoROUTE494);

SoROUTE* SoROUTE495 = new SoROUTE();
SoROUTE495->setFromNode(QString("vt2_RotationInterpolator"));
SoROUTE495->setFromField(QString("value_changed"));
SoROUTE495->setToNode(QString("Joe_vt2"));
SoROUTE495->setToField(QString("set_rotation"));
SoNode16->addChild(*SoROUTE495);

SoROUTE* SoROUTE496 = new SoROUTE();
SoROUTE496->setFromNode(QString("vt1_RotationInterpolator"));
SoROUTE496->setFromField(QString("value_changed"));
SoROUTE496->setToNode(QString("Joe_vt1"));
SoROUTE496->setToField(QString("set_rotation"));
SoNode16->addChild(*SoROUTE496);

SoROUTE* SoROUTE497 = new SoROUTE();
SoROUTE497->setFromNode(QString("vc7_RotationInterpolator"));
SoROUTE497->setFromField(QString("value_changed"));
SoROUTE497->setToNode(QString("Joe_vc7"));
SoROUTE497->setToField(QString("set_rotation"));
SoNode16->addChild(*SoROUTE497);

SoROUTE* SoROUTE498 = new SoROUTE();
SoROUTE498->setFromNode(QString("vc6_RotationInterpolator"));
SoROUTE498->setFromField(QString("value_changed"));
SoROUTE498->setToNode(QString("Joe_vc6"));
SoROUTE498->setToField(QString("set_rotation"));
SoNode16->addChild(*SoROUTE498);

SoROUTE* SoROUTE499 = new SoROUTE();
SoROUTE499->setFromNode(QString("vc5_RotationInterpolator"));
SoROUTE499->setFromField(QString("value_changed"));
SoROUTE499->setToNode(QString("Joe_vc5"));
SoROUTE499->setToField(QString("set_rotation"));
SoNode16->addChild(*SoROUTE499);

SoROUTE* SoROUTE500 = new SoROUTE();
SoROUTE500->setFromNode(QString("vc4_RotationInterpolator"));
SoROUTE500->setFromField(QString("value_changed"));
SoROUTE500->setToNode(QString("Joe_vc4"));
SoROUTE500->setToField(QString("set_rotation"));
SoNode16->addChild(*SoROUTE500);

SoROUTE* SoROUTE501 = new SoROUTE();
SoROUTE501->setFromNode(QString("vc3_RotationInterpolator"));
SoROUTE501->setFromField(QString("value_changed"));
SoROUTE501->setToNode(QString("Joe_vc3"));
SoROUTE501->setToField(QString("set_rotation"));
SoNode16->addChild(*SoROUTE501);

SoROUTE* SoROUTE502 = new SoROUTE();
SoROUTE502->setFromNode(QString("vc2_RotationInterpolator"));
SoROUTE502->setFromField(QString("value_changed"));
SoROUTE502->setToNode(QString("Joe_vc2"));
SoROUTE502->setToField(QString("set_rotation"));
SoNode16->addChild(*SoROUTE502);

SoROUTE* SoROUTE503 = new SoROUTE();
SoROUTE503->setFromNode(QString("vc1_RotationInterpolator"));
SoROUTE503->setFromField(QString("value_changed"));
SoROUTE503->setToNode(QString("Joe_vc1"));
SoROUTE503->setToField(QString("set_rotation"));
SoNode16->addChild(*SoROUTE503);

SoROUTE* SoROUTE504 = new SoROUTE();
SoROUTE504->setFromNode(QString("skullbase_RotationInterpolator"));
SoROUTE504->setFromField(QString("value_changed"));
SoROUTE504->setToNode(QString("Joe_skullbase"));
SoROUTE504->setToField(QString("set_rotation"));
SoNode16->addChild(*SoROUTE504);

SoROUTE* SoROUTE505 = new SoROUTE();
SoROUTE505->setFromNode(QString("l_eyelid_joint_RotationInterpolator"));
SoROUTE505->setFromField(QString("value_changed"));
SoROUTE505->setToNode(QString("Joe_l_eyelid_joint"));
SoROUTE505->setToField(QString("set_rotation"));
SoNode16->addChild(*SoROUTE505);

SoROUTE* SoROUTE506 = new SoROUTE();
SoROUTE506->setFromNode(QString("l_eyeball_joint_RotationInterpolator"));
SoROUTE506->setFromField(QString("value_changed"));
SoROUTE506->setToNode(QString("Joe_l_eyeball_joint"));
SoROUTE506->setToField(QString("set_rotation"));
SoNode16->addChild(*SoROUTE506);

SoROUTE* SoROUTE507 = new SoROUTE();
SoROUTE507->setFromNode(QString("l_eyebrow_joint_RotationInterpolator"));
SoROUTE507->setFromField(QString("value_changed"));
SoROUTE507->setToNode(QString("Joe_l_eyebrow_joint"));
SoROUTE507->setToField(QString("set_rotation"));
SoNode16->addChild(*SoROUTE507);

SoROUTE* SoROUTE508 = new SoROUTE();
SoROUTE508->setFromNode(QString("r_eyelid_joint_RotationInterpolator"));
SoROUTE508->setFromField(QString("value_changed"));
SoROUTE508->setToNode(QString("Joe_r_eyelid_joint"));
SoROUTE508->setToField(QString("set_rotation"));
SoNode16->addChild(*SoROUTE508);

SoROUTE* SoROUTE509 = new SoROUTE();
SoROUTE509->setFromNode(QString("r_eyeball_joint_RotationInterpolator"));
SoROUTE509->setFromField(QString("value_changed"));
SoROUTE509->setToNode(QString("Joe_r_eyeball_joint"));
SoROUTE509->setToField(QString("set_rotation"));
SoNode16->addChild(*SoROUTE509);

SoROUTE* SoROUTE510 = new SoROUTE();
SoROUTE510->setFromNode(QString("r_eyebrow_joint_RotationInterpolator"));
SoROUTE510->setFromField(QString("value_changed"));
SoROUTE510->setToNode(QString("Joe_r_eyebrow_joint"));
SoROUTE510->setToField(QString("set_rotation"));
SoNode16->addChild(*SoROUTE510);

SoROUTE* SoROUTE511 = new SoROUTE();
SoROUTE511->setFromNode(QString("temporomandibular_RotationInterpolator"));
SoROUTE511->setFromField(QString("value_changed"));
SoROUTE511->setToNode(QString("Joe_temporomandibular"));
SoROUTE511->setToField(QString("set_rotation"));
SoNode16->addChild(*SoROUTE511);

SoROUTE* SoROUTE512 = new SoROUTE();
SoROUTE512->setFromNode(QString("l_sternoclavicular_RotationInterpolator"));
SoROUTE512->setFromField(QString("value_changed"));
SoROUTE512->setToNode(QString("Joe_l_sternoclavicular"));
SoROUTE512->setToField(QString("set_rotation"));
SoNode16->addChild(*SoROUTE512);

SoROUTE* SoROUTE513 = new SoROUTE();
SoROUTE513->setFromNode(QString("l_acromioclavicular_RotationInterpolator"));
SoROUTE513->setFromField(QString("value_changed"));
SoROUTE513->setToNode(QString("Joe_l_acromioclavicular"));
SoROUTE513->setToField(QString("set_rotation"));
SoNode16->addChild(*SoROUTE513);

SoROUTE* SoROUTE514 = new SoROUTE();
SoROUTE514->setFromNode(QString("l_shoulder_RotationInterpolator"));
SoROUTE514->setFromField(QString("value_changed"));
SoROUTE514->setToNode(QString("Joe_l_shoulder"));
SoROUTE514->setToField(QString("set_rotation"));
SoNode16->addChild(*SoROUTE514);

SoROUTE* SoROUTE515 = new SoROUTE();
SoROUTE515->setFromNode(QString("l_elbow_RotationInterpolator"));
SoROUTE515->setFromField(QString("value_changed"));
SoROUTE515->setToNode(QString("Joe_l_elbow"));
SoROUTE515->setToField(QString("set_rotation"));
SoNode16->addChild(*SoROUTE515);

SoROUTE* SoROUTE516 = new SoROUTE();
SoROUTE516->setFromNode(QString("l_wrist_RotationInterpolator"));
SoROUTE516->setFromField(QString("value_changed"));
SoROUTE516->setToNode(QString("Joe_l_radiocarpal"));
SoROUTE516->setToField(QString("set_rotation"));
SoNode16->addChild(*SoROUTE516);

SoROUTE* SoROUTE517 = new SoROUTE();
SoROUTE517->setFromNode(QString("l_thumb1_RotationInterpolator"));
SoROUTE517->setFromField(QString("value_changed"));
SoROUTE517->setToNode(QString("Joe_l_carpometacarpal_1"));
SoROUTE517->setToField(QString("set_rotation"));
SoNode16->addChild(*SoROUTE517);

SoROUTE* SoROUTE518 = new SoROUTE();
SoROUTE518->setFromNode(QString("l_thumb2_RotationInterpolator"));
SoROUTE518->setFromField(QString("value_changed"));
SoROUTE518->setToNode(QString("Joe_l_metacarpophalangeal_1"));
SoROUTE518->setToField(QString("set_rotation"));
SoNode16->addChild(*SoROUTE518);

SoROUTE* SoROUTE519 = new SoROUTE();
SoROUTE519->setFromNode(QString("l_thumb3_RotationInterpolator"));
SoROUTE519->setFromField(QString("value_changed"));
SoROUTE519->setToNode(QString("Joe_l_carpal_interphalangeal_1"));
SoROUTE519->setToField(QString("set_rotation"));
SoNode16->addChild(*SoROUTE519);

SoROUTE* SoROUTE520 = new SoROUTE();
SoROUTE520->setFromNode(QString("l_index0_RotationInterpolator"));
SoROUTE520->setFromField(QString("value_changed"));
SoROUTE520->setToNode(QString("Joe_l_carpometacarpal_2"));
SoROUTE520->setToField(QString("set_rotation"));
SoNode16->addChild(*SoROUTE520);

SoROUTE* SoROUTE521 = new SoROUTE();
SoROUTE521->setFromNode(QString("l_index1_RotationInterpolator"));
SoROUTE521->setFromField(QString("value_changed"));
SoROUTE521->setToNode(QString("Joe_l_metacarpophalangeal_2"));
SoROUTE521->setToField(QString("set_rotation"));
SoNode16->addChild(*SoROUTE521);

SoROUTE* SoROUTE522 = new SoROUTE();
SoROUTE522->setFromNode(QString("l_index2_RotationInterpolator"));
SoROUTE522->setFromField(QString("value_changed"));
SoROUTE522->setToNode(QString("Joe_l_carpal_proximal_interphalangeal_2"));
SoROUTE522->setToField(QString("set_rotation"));
SoNode16->addChild(*SoROUTE522);

SoROUTE* SoROUTE523 = new SoROUTE();
SoROUTE523->setFromNode(QString("l_index3_RotationInterpolator"));
SoROUTE523->setFromField(QString("value_changed"));
SoROUTE523->setToNode(QString("Joe_l_carpal_distal_interphalangeal_2"));
SoROUTE523->setToField(QString("set_rotation"));
SoNode16->addChild(*SoROUTE523);

SoROUTE* SoROUTE524 = new SoROUTE();
SoROUTE524->setFromNode(QString("l_middle0_RotationInterpolator"));
SoROUTE524->setFromField(QString("value_changed"));
SoROUTE524->setToNode(QString("Joe_l_carpometacarpal_3"));
SoROUTE524->setToField(QString("set_rotation"));
SoNode16->addChild(*SoROUTE524);

SoROUTE* SoROUTE525 = new SoROUTE();
SoROUTE525->setFromNode(QString("l_middle1_RotationInterpolator"));
SoROUTE525->setFromField(QString("value_changed"));
SoROUTE525->setToNode(QString("Joe_l_metacarpophalangeal_3"));
SoROUTE525->setToField(QString("set_rotation"));
SoNode16->addChild(*SoROUTE525);

SoROUTE* SoROUTE526 = new SoROUTE();
SoROUTE526->setFromNode(QString("l_middle2_RotationInterpolator"));
SoROUTE526->setFromField(QString("value_changed"));
SoROUTE526->setToNode(QString("Joe_l_carpal_proximal_interphalangeal_3"));
SoROUTE526->setToField(QString("set_rotation"));
SoNode16->addChild(*SoROUTE526);

SoROUTE* SoROUTE527 = new SoROUTE();
SoROUTE527->setFromNode(QString("l_middle3_RotationInterpolator"));
SoROUTE527->setFromField(QString("value_changed"));
SoROUTE527->setToNode(QString("Joe_l_carpal_distal_interphalangeal_3"));
SoROUTE527->setToField(QString("set_rotation"));
SoNode16->addChild(*SoROUTE527);

SoROUTE* SoROUTE528 = new SoROUTE();
SoROUTE528->setFromNode(QString("l_ring0_RotationInterpolator"));
SoROUTE528->setFromField(QString("value_changed"));
SoROUTE528->setToNode(QString("Joe_l_carpometacarpal_4"));
SoROUTE528->setToField(QString("set_rotation"));
SoNode16->addChild(*SoROUTE528);

SoROUTE* SoROUTE529 = new SoROUTE();
SoROUTE529->setFromNode(QString("l_ring1_RotationInterpolator"));
SoROUTE529->setFromField(QString("value_changed"));
SoROUTE529->setToNode(QString("Joe_l_metacarpophalangeal_4"));
SoROUTE529->setToField(QString("set_rotation"));
SoNode16->addChild(*SoROUTE529);

SoROUTE* SoROUTE530 = new SoROUTE();
SoROUTE530->setFromNode(QString("l_ring2_RotationInterpolator"));
SoROUTE530->setFromField(QString("value_changed"));
SoROUTE530->setToNode(QString("Joe_l_carpal_proximal_interphalangeal_4"));
SoROUTE530->setToField(QString("set_rotation"));
SoNode16->addChild(*SoROUTE530);

SoROUTE* SoROUTE531 = new SoROUTE();
SoROUTE531->setFromNode(QString("l_ring3_RotationInterpolator"));
SoROUTE531->setFromField(QString("value_changed"));
SoROUTE531->setToNode(QString("Joe_l_carpal_distal_interphalangeal_4"));
SoROUTE531->setToField(QString("set_rotation"));
SoNode16->addChild(*SoROUTE531);

SoROUTE* SoROUTE532 = new SoROUTE();
SoROUTE532->setFromNode(QString("l_pinky0_RotationInterpolator"));
SoROUTE532->setFromField(QString("value_changed"));
SoROUTE532->setToNode(QString("Joe_l_carpometacarpal_5"));
SoROUTE532->setToField(QString("set_rotation"));
SoNode16->addChild(*SoROUTE532);

SoROUTE* SoROUTE533 = new SoROUTE();
SoROUTE533->setFromNode(QString("l_pinky1_RotationInterpolator"));
SoROUTE533->setFromField(QString("value_changed"));
SoROUTE533->setToNode(QString("Joe_l_metacarpophalangeal_5"));
SoROUTE533->setToField(QString("set_rotation"));
SoNode16->addChild(*SoROUTE533);

SoROUTE* SoROUTE534 = new SoROUTE();
SoROUTE534->setFromNode(QString("l_pinky2_RotationInterpolator"));
SoROUTE534->setFromField(QString("value_changed"));
SoROUTE534->setToNode(QString("Joe_l_carpal_proximal_interphalangeal_5"));
SoROUTE534->setToField(QString("set_rotation"));
SoNode16->addChild(*SoROUTE534);

SoROUTE* SoROUTE535 = new SoROUTE();
SoROUTE535->setFromNode(QString("l_pinky3_RotationInterpolator"));
SoROUTE535->setFromField(QString("value_changed"));
SoROUTE535->setToNode(QString("Joe_l_carpal_distal_interphalangeal_5"));
SoROUTE535->setToField(QString("set_rotation"));
SoNode16->addChild(*SoROUTE535);

SoROUTE* SoROUTE536 = new SoROUTE();
SoROUTE536->setFromNode(QString("r_sternoclavicular_RotationInterpolator"));
SoROUTE536->setFromField(QString("value_changed"));
SoROUTE536->setToNode(QString("Joe_r_sternoclavicular"));
SoROUTE536->setToField(QString("set_rotation"));
SoNode16->addChild(*SoROUTE536);

SoROUTE* SoROUTE537 = new SoROUTE();
SoROUTE537->setFromNode(QString("r_acromioclavicular_RotationInterpolator"));
SoROUTE537->setFromField(QString("value_changed"));
SoROUTE537->setToNode(QString("Joe_r_acromioclavicular"));
SoROUTE537->setToField(QString("set_rotation"));
SoNode16->addChild(*SoROUTE537);

SoROUTE* SoROUTE538 = new SoROUTE();
SoROUTE538->setFromNode(QString("r_shoulder_RotationInterpolator"));
SoROUTE538->setFromField(QString("value_changed"));
SoROUTE538->setToNode(QString("Joe_r_shoulder"));
SoROUTE538->setToField(QString("set_rotation"));
SoNode16->addChild(*SoROUTE538);

SoROUTE* SoROUTE539 = new SoROUTE();
SoROUTE539->setFromNode(QString("r_elbow_RotationInterpolator"));
SoROUTE539->setFromField(QString("value_changed"));
SoROUTE539->setToNode(QString("Joe_r_elbow"));
SoROUTE539->setToField(QString("set_rotation"));
SoNode16->addChild(*SoROUTE539);

SoROUTE* SoROUTE540 = new SoROUTE();
SoROUTE540->setFromNode(QString("r_wrist_RotationInterpolator"));
SoROUTE540->setFromField(QString("value_changed"));
SoROUTE540->setToNode(QString("Joe_r_radiocarpal"));
SoROUTE540->setToField(QString("set_rotation"));
SoNode16->addChild(*SoROUTE540);

SoROUTE* SoROUTE541 = new SoROUTE();
SoROUTE541->setFromNode(QString("r_thumb1_RotationInterpolator"));
SoROUTE541->setFromField(QString("value_changed"));
SoROUTE541->setToNode(QString("Joe_r_carpometacarpal_1"));
SoROUTE541->setToField(QString("set_rotation"));
SoNode16->addChild(*SoROUTE541);

SoROUTE* SoROUTE542 = new SoROUTE();
SoROUTE542->setFromNode(QString("r_thumb2_RotationInterpolator"));
SoROUTE542->setFromField(QString("value_changed"));
SoROUTE542->setToNode(QString("Joe_r_metacarpophalangeal_1"));
SoROUTE542->setToField(QString("set_rotation"));
SoNode16->addChild(*SoROUTE542);

SoROUTE* SoROUTE543 = new SoROUTE();
SoROUTE543->setFromNode(QString("r_thumb3_RotationInterpolator"));
SoROUTE543->setFromField(QString("value_changed"));
SoROUTE543->setToNode(QString("Joe_r_carpal_interphalangeal_1"));
SoROUTE543->setToField(QString("set_rotation"));
SoNode16->addChild(*SoROUTE543);

SoROUTE* SoROUTE544 = new SoROUTE();
SoROUTE544->setFromNode(QString("r_index0_RotationInterpolator"));
SoROUTE544->setFromField(QString("value_changed"));
SoROUTE544->setToNode(QString("Joe_r_carpometacarpal_2"));
SoROUTE544->setToField(QString("set_rotation"));
SoNode16->addChild(*SoROUTE544);

SoROUTE* SoROUTE545 = new SoROUTE();
SoROUTE545->setFromNode(QString("r_index1_RotationInterpolator"));
SoROUTE545->setFromField(QString("value_changed"));
SoROUTE545->setToNode(QString("Joe_r_metacarpophalangeal_2"));
SoROUTE545->setToField(QString("set_rotation"));
SoNode16->addChild(*SoROUTE545);

SoROUTE* SoROUTE546 = new SoROUTE();
SoROUTE546->setFromNode(QString("r_index2_RotationInterpolator"));
SoROUTE546->setFromField(QString("value_changed"));
SoROUTE546->setToNode(QString("Joe_r_carpal_proximal_interphalangeal_2"));
SoROUTE546->setToField(QString("set_rotation"));
SoNode16->addChild(*SoROUTE546);

SoROUTE* SoROUTE547 = new SoROUTE();
SoROUTE547->setFromNode(QString("r_index3_RotationInterpolator"));
SoROUTE547->setFromField(QString("value_changed"));
SoROUTE547->setToNode(QString("Joe_r_carpal_distal_interphalangeal_2"));
SoROUTE547->setToField(QString("set_rotation"));
SoNode16->addChild(*SoROUTE547);

SoROUTE* SoROUTE548 = new SoROUTE();
SoROUTE548->setFromNode(QString("r_middle0_RotationInterpolator"));
SoROUTE548->setFromField(QString("value_changed"));
SoROUTE548->setToNode(QString("Joe_r_carpometacarpal_3"));
SoROUTE548->setToField(QString("set_rotation"));
SoNode16->addChild(*SoROUTE548);

SoROUTE* SoROUTE549 = new SoROUTE();
SoROUTE549->setFromNode(QString("r_middle1_RotationInterpolator"));
SoROUTE549->setFromField(QString("value_changed"));
SoROUTE549->setToNode(QString("Joe_r_metacarpophalangeal_3"));
SoROUTE549->setToField(QString("set_rotation"));
SoNode16->addChild(*SoROUTE549);

SoROUTE* SoROUTE550 = new SoROUTE();
SoROUTE550->setFromNode(QString("r_middle2_RotationInterpolator"));
SoROUTE550->setFromField(QString("value_changed"));
SoROUTE550->setToNode(QString("Joe_r_carpal_proximal_interphalangeal_3"));
SoROUTE550->setToField(QString("set_rotation"));
SoNode16->addChild(*SoROUTE550);

SoROUTE* SoROUTE551 = new SoROUTE();
SoROUTE551->setFromNode(QString("r_middle3_RotationInterpolator"));
SoROUTE551->setFromField(QString("value_changed"));
SoROUTE551->setToNode(QString("Joe_r_carpal_distal_interphalangeal_3"));
SoROUTE551->setToField(QString("set_rotation"));
SoNode16->addChild(*SoROUTE551);

SoROUTE* SoROUTE552 = new SoROUTE();
SoROUTE552->setFromNode(QString("r_ring0_RotationInterpolator"));
SoROUTE552->setFromField(QString("value_changed"));
SoROUTE552->setToNode(QString("Joe_r_carpometacarpal_4"));
SoROUTE552->setToField(QString("set_rotation"));
SoNode16->addChild(*SoROUTE552);

SoROUTE* SoROUTE553 = new SoROUTE();
SoROUTE553->setFromNode(QString("r_ring1_RotationInterpolator"));
SoROUTE553->setFromField(QString("value_changed"));
SoROUTE553->setToNode(QString("Joe_r_metacarpophalangeal_4"));
SoROUTE553->setToField(QString("set_rotation"));
SoNode16->addChild(*SoROUTE553);

SoROUTE* SoROUTE554 = new SoROUTE();
SoROUTE554->setFromNode(QString("r_ring2_RotationInterpolator"));
SoROUTE554->setFromField(QString("value_changed"));
SoROUTE554->setToNode(QString("Joe_r_carpal_proximal_interphalangeal_4"));
SoROUTE554->setToField(QString("set_rotation"));
SoNode16->addChild(*SoROUTE554);

SoROUTE* SoROUTE555 = new SoROUTE();
SoROUTE555->setFromNode(QString("r_ring3_RotationInterpolator"));
SoROUTE555->setFromField(QString("value_changed"));
SoROUTE555->setToNode(QString("Joe_r_carpal_distal_interphalangeal_4"));
SoROUTE555->setToField(QString("set_rotation"));
SoNode16->addChild(*SoROUTE555);

SoROUTE* SoROUTE556 = new SoROUTE();
SoROUTE556->setFromNode(QString("r_pinky0_RotationInterpolator"));
SoROUTE556->setFromField(QString("value_changed"));
SoROUTE556->setToNode(QString("Joe_r_carpometacarpal_5"));
SoROUTE556->setToField(QString("set_rotation"));
SoNode16->addChild(*SoROUTE556);

SoROUTE* SoROUTE557 = new SoROUTE();
SoROUTE557->setFromNode(QString("r_pinky1_RotationInterpolator"));
SoROUTE557->setFromField(QString("value_changed"));
SoROUTE557->setToNode(QString("Joe_r_metacarpophalangeal_5"));
SoROUTE557->setToField(QString("set_rotation"));
SoNode16->addChild(*SoROUTE557);

SoROUTE* SoROUTE558 = new SoROUTE();
SoROUTE558->setFromNode(QString("r_pinky2_RotationInterpolator"));
SoROUTE558->setFromField(QString("value_changed"));
SoROUTE558->setToNode(QString("Joe_r_carpal_proximal_interphalangeal_5"));
SoROUTE558->setToField(QString("set_rotation"));
SoNode16->addChild(*SoROUTE558);

SoROUTE* SoROUTE559 = new SoROUTE();
SoROUTE559->setFromNode(QString("r_pinky3_RotationInterpolator"));
SoROUTE559->setFromField(QString("value_changed"));
SoROUTE559->setToNode(QString("Joe_r_carpal_distal_interphalangeal_5"));
SoROUTE559->setToField(QString("set_rotation"));
SoNode16->addChild(*SoROUTE559);

SoROUTE* SoROUTE560 = new SoROUTE();
SoROUTE560->setFromNode(QString("KickTimer"));
SoROUTE560->setFromField(QString("fraction_changed"));
SoROUTE560->setToNode(QString("skull_tipInterpolator"));
SoROUTE560->setToField(QString("set_fraction"));
SoNode16->addChild(*SoROUTE560);

SoROUTE* SoROUTE561 = new SoROUTE();
SoROUTE561->setFromNode(QString("skull_tipInterpolator"));
SoROUTE561->setFromField(QString("value_changed"));
SoROUTE561->setToNode(QString("Joe_skull_tip_raiser_action"));
SoROUTE561->setToField(QString("set_weight"));
SoNode16->addChild(*SoROUTE561);

SoROUTE* SoROUTE562 = new SoROUTE();
SoROUTE562->setFromNode(QString("KickTimer"));
SoROUTE562->setFromField(QString("fraction_changed"));
SoROUTE562->setToNode(QString("SkinInterpolator"));
SoROUTE562->setToField(QString("set_fraction"));
SoNode16->addChild(*SoROUTE562);

SoROUTE* SoROUTE563 = new SoROUTE();
SoROUTE563->setFromNode(QString("SkinInterpolator"));
SoROUTE563->setFromField(QString("value_changed"));
SoROUTE563->setToNode(QString("KickTextureTransform"));
SoROUTE563->setToField(QString("set_rotation"));
SoNode16->addChild(*SoROUTE563);

SoROUTE* SoROUTE564 = new SoROUTE();
SoROUTE564->setFromNode(QString("KickTimer"));
SoROUTE564->setFromField(QString("fraction_changed"));
SoROUTE564->setToNode(QString("ball_TranslationInterpolator"));
SoROUTE564->setToField(QString("set_fraction"));
SoNode16->addChild(*SoROUTE564);

SoROUTE* SoROUTE565 = new SoROUTE();
SoROUTE565->setFromNode(QString("ball_TranslationInterpolator"));
SoROUTE565->setFromField(QString("value_changed"));
SoROUTE565->setToNode(QString("SBall"));
SoROUTE565->setToField(QString("set_translation"));
SoNode16->addChild(*SoROUTE565);

SoROUTE* SoROUTE566 = new SoROUTE();
SoROUTE566->setFromNode(QString("KickTimer"));
SoROUTE566->setFromField(QString("fraction_changed"));
SoROUTE566->setToNode(QString("ball_RotationInterpolator"));
SoROUTE566->setToField(QString("set_fraction"));
SoNode16->addChild(*SoROUTE566);

SoROUTE* SoROUTE567 = new SoROUTE();
SoROUTE567->setFromNode(QString("ball_RotationInterpolator"));
SoROUTE567->setFromField(QString("value_changed"));
SoROUTE567->setToNode(QString("SBall"));
SoROUTE567->setToField(QString("set_rotation"));
SoNode16->addChild(*SoROUTE567);

SoSceneManager0->setSceneGraph(*SoNode16);

return 0;
}
