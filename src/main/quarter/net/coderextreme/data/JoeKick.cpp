
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
Someta8->setContent(QString("16 March 2026"));
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
Someta15->setContent(QString("X3D-Edit 4.0, https://www.web3d.org/x3d/tools/X3D-Edit"));
Sohead1->addMeta(*Someta15);

Someta* Someta16 = new Someta();
Someta16->setName(QString("generator"));
Someta16->setContent(QString("BS studio translation from .x3dv by Joe using BS Contact"));
Sohead1->addMeta(*Someta16);

Someta* Someta17 = new Someta();
Someta17->setName(QString("license"));
Someta17->setContent(QString("../license.html"));
Sohead1->addMeta(*Someta17);

SoSceneManager0->setHead(*Sohead1);

SoNode* SoNode18 = new SoNode();
SoWorldInfo* SoWorldInfo19 = new SoWorldInfo();
SoWorldInfo19->setInfo(new QString[]{QString("X3D Humanoid LOA3 skeleton"), QString("skin from hanim sites, surface features, and some added points"), QString("390 points")}, 3);
SoWorldInfo19->setTitle(QString("X3D HANIM LOA3 Skeleton, 390 point Skin, texcoords, Displacer, teTrans for Joe_ by Joe"));
SoNode18->addChild(*SoWorldInfo19);

SoNavigationInfo* SoNavigationInfo20 = new SoNavigationInfo();
SoNavigationInfo20->setDEF(QString("Start_NavigationInfo"));
SoNavigationInfo20->setSpeed(2.5);
SoNode18->addChild(*SoNavigationInfo20);

SoBackground* SoBackground21 = new SoBackground();
SoBackground21->setDEF(QString("blue_Background"));
SoNode18->addChild(*SoBackground21);

SoSpotLight* SoSpotLight22 = new SoSpotLight();
SoSpotLight22->setDEF(QString("light1"));
SoSpotLight22->setAmbientIntensity(0.7);
SoSpotLight22->setBeamWidth(1.5);
SoSpotLight22->setColor(new float[]{0.8,0.8,1.0});
SoSpotLight22->setCutOffAngle(0.6);
SoSpotLight22->setDirection(new float[]{0.0,0.0,0.0});
SoSpotLight22->setLocation(new float[]{0.0,3.0,3.0});
SoSpotLight22->setRadius(10);
SoNode18->addChild(*SoSpotLight22);

SoPointLight* SoPointLight23 = new SoPointLight();
SoPointLight23->setDEF(QString("light2"));
SoPointLight23->setAmbientIntensity(0.7);
SoPointLight23->setColor(new float[]{0.8,0.8,1.0});
SoPointLight23->setLocation(new float[]{0.0,10.0,-7.0});
SoNode18->addChild(*SoPointLight23);

//External from the Humanoid viewpoints
SoViewpoint* SoViewpoint24 = new SoViewpoint();
SoViewpoint24->setDEF(QString("Scene_InclinedView"));
SoViewpoint24->setCenterOfRotation(new float[]{0.0,0.85,0.0});
SoViewpoint24->setDescription(QString("Scene_Inclined View"));
SoViewpoint24->setOrientation(new float[]{-0.113,0.993,0.0347,0.671});
SoViewpoint24->setPosition(new float[]{1.62,1.05,3.06});
SoNode18->addChild(*SoViewpoint24);

SoViewpoint* SoViewpoint25 = new SoViewpoint();
SoViewpoint25->setDEF(QString("Scene_IFrontView"));
SoViewpoint25->setCenterOfRotation(new float[]{0.0,0.8,0.0});
SoViewpoint25->setDescription(QString("Scene_Front View"));
SoViewpoint25->setPosition(new float[]{0.0,0.8,2.58});
SoNode18->addChild(*SoViewpoint25);

SoViewpoint* SoViewpoint26 = new SoViewpoint();
SoViewpoint26->setDEF(QString("Scene_ISideView"));
SoViewpoint26->setCenterOfRotation(new float[]{0.0,0.8,0.0});
SoViewpoint26->setDescription(QString("Scene_Side View"));
SoViewpoint26->setOrientation(new float[]{0.0,1.0,0.0,1.5708});
SoViewpoint26->setPosition(new float[]{2.6,0.8,0.0});
SoNode18->addChild(*SoViewpoint26);

SoViewpoint* SoViewpoint27 = new SoViewpoint();
SoViewpoint27->setDEF(QString("Scene_BackView"));
SoViewpoint27->setCenterOfRotation(new float[]{0.0,1.5,0.0});
SoViewpoint27->setDescription(QString("Scene_Back View"));
SoViewpoint27->setOrientation(new float[]{0.0,1.0,0.0,3.14});
SoViewpoint27->setPosition(new float[]{0.0,1.5,-3.0});
SoNode18->addChild(*SoViewpoint27);

SoViewpoint* SoViewpoint28 = new SoViewpoint();
SoViewpoint28->setDEF(QString("Scene_TopView"));
SoViewpoint28->setCenterOfRotation(new float[]{0.0,1.5,0.0});
SoViewpoint28->setDescription(QString("Scene_Top View"));
SoViewpoint28->setOrientation(new float[]{1.0,0.0,0.0,-1.5708});
SoViewpoint28->setPosition(new float[]{0.0,3.5,0.0});
SoNode18->addChild(*SoViewpoint28);

SoGroup* SoGroup29 = new SoGroup();
SoGroup29->setDEF(QString("Joe_Humanoid"));
SoHAnimHumanoid* SoHAnimHumanoid30 = new SoHAnimHumanoid();
SoHAnimHumanoid30->X3DNode::setName(QString("Kick"));
SoHAnimHumanoid30->setDEF(QString("Joe_Kick"));
SoHAnimHumanoid30->setLoa(3);
SoHAnimHumanoid30->setVersion(QString("2.0"));
SoMetadataSet* SoMetadataSet31 = new SoMetadataSet();
SoMetadataSet31->X3DNode::setName(QString("warnings"));
SoMetadataSet31->X3DNode::setReference(QString("HAnim"));
SoMetadataString* SoMetadataString32 = new SoMetadataString();
SoMetadataString32->X3DNode::setName(QString("SymmetricalLeftRight"));
SoMetadataString32->X3DNode::setReference(QString("correction options: ignore, warn, average, left, right, largest, smallest"));
SoMetadataString32->setValue(new QString[]{QString("ignore")}, 1);
SoMetadataSet31->setValue((X3DNode *)&SoMetadataString32);

SoHAnimHumanoid30->setMetadata(*SoMetadataSet31);

SoHAnimJoint* SoHAnimJoint33 = new SoHAnimJoint();
SoHAnimJoint33->X3DNode::setName(QString("humanoid_root"));
SoHAnimJoint33->setDEF(QString("Joe_humanoid_root"));
SoHAnimJoint33->setCenter(new float[]{0.0,0.875,0.0});
SoHAnimSegment* SoHAnimSegment34 = new SoHAnimSegment();
SoHAnimSegment34->X3DNode::setName(QString("sacrum"));
SoHAnimSegment34->setDEF(QString("Joe_sacrum"));
SoHAnimSite* SoHAnimSite35 = new SoHAnimSite();
SoHAnimSite35->X3DNode::setName(QString("RootFront_view"));
SoHAnimSite35->setDEF(QString("Joe_RootFront_view"));
SoTransform* SoTransform36 = new SoTransform();
SoTransform36->setDEF(QString("hanimcordsys"));
SoTransform36->setScale(new float[]{0.175,0.175,0.175});
SoViewpoint* SoViewpoint37 = new SoViewpoint();
SoViewpoint37->setDEF(QString("ViewBodyRootAxes"));
SoViewpoint37->setDescription(QString("Joe_HAnim Root HAnimSite Coordinate Axes View"));
SoTransform36->addChild(*SoViewpoint37);

SoShape* SoShape38 = new SoShape();
SoShape38->setDEF(QString("AxisLinesShape"));
//removed: RGB lines showing XYZ axes
SoTransform36->addChild(*SoShape38);

SoHAnimSite35->addChild(*SoTransform36);

SoHAnimSegment34->addChild(*SoHAnimSite35);

SoHAnimJoint33->addChildren(*SoHAnimSegment34);

SoHAnimJoint* SoHAnimJoint39 = new SoHAnimJoint();
SoHAnimJoint39->X3DNode::setName(QString("sacroiliac"));
SoHAnimJoint39->setDEF(QString("Joe_sacroiliac"));
SoHAnimJoint39->setCenter(new float[]{0.0,0.92,0.0});
SoHAnimJoint39->setSkinCoordIndex(new int32_t[]{17,19,20,21,22,23,26,27,73,82,89,91,93}, 13);
SoHAnimJoint39->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,0.35,0.35,1.0}, 13);
SoHAnimJoint* SoHAnimJoint40 = new SoHAnimJoint();
SoHAnimJoint40->X3DNode::setName(QString("l_hip"));
SoHAnimJoint40->setDEF(QString("Joe_l_hip"));
SoHAnimJoint40->setCenter(new float[]{0.1,0.92,0.0});
SoHAnimJoint40->setSkinCoordIndex(new int32_t[]{89,90,94,95,96,97}, 6);
SoHAnimJoint40->setSkinCoordWeight(new float[]{0.65,1.0,1.0,1.0,1.0,1.0}, 6);
SoHAnimJoint* SoHAnimJoint41 = new SoHAnimJoint();
SoHAnimJoint41->X3DNode::setName(QString("l_knee"));
SoHAnimJoint41->setDEF(QString("Joe_l_knee"));
SoHAnimJoint41->setCenter(new float[]{0.115,0.466,0.0});
SoHAnimJoint41->setSkinCoordIndex(new int32_t[]{334,335,336,337,338,339,340,341}, 8);
SoHAnimJoint41->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 8);
SoHAnimJoint* SoHAnimJoint42 = new SoHAnimJoint();
SoHAnimJoint42->X3DNode::setName(QString("l_talocrural"));
SoHAnimJoint42->setDEF(QString("Joe_l_talocrural"));
SoHAnimJoint42->setCenter(new float[]{0.115,0.069,0.0});
SoHAnimJoint42->setSkinCoordIndex(new int32_t[]{342,343,344,345}, 4);
SoHAnimJoint42->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0}, 4);
SoHAnimJoint* SoHAnimJoint43 = new SoHAnimJoint();
SoHAnimJoint43->X3DNode::setName(QString("l_tarsometatarsal_2"));
SoHAnimJoint43->setDEF(QString("Joe_l_tarsometatarsal_2"));
SoHAnimJoint43->setCenter(new float[]{0.115,0.031,0.03});
SoHAnimJoint43->setSkinCoordIndex(new int32_t[]{346,347,348,71}, 4);
SoHAnimJoint43->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0}, 4);
SoHAnimJoint* SoHAnimJoint44 = new SoHAnimJoint();
SoHAnimJoint44->X3DNode::setName(QString("l_metatarsophalangeal_2"));
SoHAnimJoint44->setDEF(QString("Joe_l_metatarsophalangeal_2"));
SoHAnimJoint44->setCenter(new float[]{0.115,0.037,0.09});
SoHAnimJoint44->setSkinCoordIndex(new int32_t[]{349,350,351,352}, 4);
SoHAnimJoint44->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0}, 4);
SoHAnimJoint* SoHAnimJoint45 = new SoHAnimJoint();
SoHAnimJoint45->X3DNode::setName(QString("l_tarsal_distal_interphalangeal_2"));
SoHAnimJoint45->setDEF(QString("Joe_l_tarsal_distal_interphalangeal_2"));
SoHAnimJoint45->setCenter(new float[]{0.115,0.02,0.122});
SoHAnimJoint45->setSkinCoordIndex(new int32_t[]{353,354,355,356,357,358,359,360,361}, 9);
SoHAnimJoint45->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 9);
SoHAnimJoint44->addChildren(*SoHAnimJoint45);

SoHAnimJoint43->addChildren(*SoHAnimJoint44);

SoHAnimJoint42->addChildren(*SoHAnimJoint43);

SoHAnimJoint41->addChildren(*SoHAnimJoint42);

SoHAnimJoint40->addChildren(*SoHAnimJoint41);

SoHAnimJoint39->addChildren(*SoHAnimJoint40);

SoHAnimJoint* SoHAnimJoint46 = new SoHAnimJoint();
SoHAnimJoint46->X3DNode::setName(QString("r_hip"));
SoHAnimJoint46->setDEF(QString("Joe_r_hip"));
SoHAnimJoint46->setCenter(new float[]{-0.1,0.92,0.0});
SoHAnimJoint46->setSkinCoordIndex(new int32_t[]{91,92,98,99,100,101,362,363}, 8);
SoHAnimJoint46->setSkinCoordWeight(new float[]{0.65,1.0,0.8,1.0,1.0,1.0,0.4,0.8}, 8);
SoHAnimJoint* SoHAnimJoint47 = new SoHAnimJoint();
SoHAnimJoint47->X3DNode::setName(QString("r_knee"));
SoHAnimJoint47->setDEF(QString("Joe_r_knee"));
SoHAnimJoint47->setCenter(new float[]{-0.05,0.466,0.0});
SoHAnimJoint47->setSkinCoordIndex(new int32_t[]{362,363,364,365,366,367,368,369,98}, 9);
SoHAnimJoint47->setSkinCoordWeight(new float[]{0.6,0.2,1.0,1.0,1.0,1.0,1.0,1.0,0.2}, 9);
SoHAnimJoint* SoHAnimJoint48 = new SoHAnimJoint();
SoHAnimJoint48->X3DNode::setName(QString("r_talocrural"));
SoHAnimJoint48->setDEF(QString("Joe_r_talocrural"));
SoHAnimJoint48->setCenter(new float[]{-0.115,0.069,0.0});
SoHAnimJoint48->setSkinCoordIndex(new int32_t[]{370,371,372,373}, 4);
SoHAnimJoint48->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0}, 4);
SoHAnimJoint* SoHAnimJoint49 = new SoHAnimJoint();
SoHAnimJoint49->X3DNode::setName(QString("r_tarsometatarsal_2"));
SoHAnimJoint49->setDEF(QString("Joe_r_tarsometatarsal_2"));
SoHAnimJoint49->setCenter(new float[]{-0.1,0.015,-0.01});
SoHAnimJoint49->setSkinCoordIndex(new int32_t[]{374,375,376}, 3);
SoHAnimJoint49->setSkinCoordWeight(new float[]{1.0,1.0,1.0}, 3);
SoHAnimJoint* SoHAnimJoint50 = new SoHAnimJoint();
SoHAnimJoint50->X3DNode::setName(QString("r_metatarsophalangeal_2"));
SoHAnimJoint50->setDEF(QString("Joe_r_metatarsophalangeal_2"));
SoHAnimJoint50->setCenter(new float[]{-0.115,0.037,0.09});
SoHAnimJoint50->setSkinCoordIndex(new int32_t[]{377,378,379,380}, 4);
SoHAnimJoint50->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0}, 4);
SoHAnimJoint* SoHAnimJoint51 = new SoHAnimJoint();
SoHAnimJoint51->X3DNode::setName(QString("r_tarsal_distal_interphalangeal_2"));
SoHAnimJoint51->setDEF(QString("Joe_r_tarsal_distal_interphalangeal_2"));
SoHAnimJoint51->setCenter(new float[]{-0.1,0.01,0.14});
SoHAnimJoint51->setSkinCoordIndex(new int32_t[]{381,382,383,384,385,386,387,388,389}, 9);
SoHAnimJoint51->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 9);
SoHAnimJoint50->addChildren(*SoHAnimJoint51);

SoHAnimJoint49->addChildren(*SoHAnimJoint50);

SoHAnimJoint48->addChildren(*SoHAnimJoint49);

SoHAnimJoint47->addChildren(*SoHAnimJoint48);

SoHAnimJoint46->addChildren(*SoHAnimJoint47);

SoHAnimJoint39->addChildren(*SoHAnimJoint46);

SoHAnimJoint33->addChildren(*SoHAnimJoint39);

SoHAnimJoint* SoHAnimJoint52 = new SoHAnimJoint();
SoHAnimJoint52->X3DNode::setName(QString("vl5"));
SoHAnimJoint52->setDEF(QString("Joe_vl5"));
SoHAnimJoint52->setCenter(new float[]{0.0,1.045,-0.095});
SoHAnimJoint52->setSkinCoordIndex(new int32_t[]{28,76}, 2);
SoHAnimJoint52->setSkinCoordWeight(new float[]{1.0,1.0}, 2);
SoHAnimJoint* SoHAnimJoint53 = new SoHAnimJoint();
SoHAnimJoint53->X3DNode::setName(QString("vl4"));
SoHAnimJoint53->setDEF(QString("Joe_vl4"));
SoHAnimJoint53->setCenter(new float[]{0.0,1.068,-0.085});
SoHAnimJoint* SoHAnimJoint54 = new SoHAnimJoint();
SoHAnimJoint54->X3DNode::setName(QString("vl3"));
SoHAnimJoint54->setDEF(QString("Joe_vl3"));
SoHAnimJoint54->setCenter(new float[]{0.0,1.092,-0.0725});
SoHAnimJoint* SoHAnimJoint55 = new SoHAnimJoint();
SoHAnimJoint55->X3DNode::setName(QString("vl2"));
SoHAnimJoint55->setDEF(QString("Joe_vl2"));
SoHAnimJoint55->setCenter(new float[]{0.0,1.12,-0.065});
SoHAnimJoint55->setSkinCoordIndex(new int32_t[]{16,18,25,83,84,85,86,87,88}, 9);
SoHAnimJoint55->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,0.7,1.0,0.8}, 9);
SoHAnimJoint* SoHAnimJoint56 = new SoHAnimJoint();
SoHAnimJoint56->X3DNode::setName(QString("vl1"));
SoHAnimJoint56->setDEF(QString("Joe_vl1"));
SoHAnimJoint56->setCenter(new float[]{0.0,1.1459,-0.0625});
SoHAnimJoint* SoHAnimJoint57 = new SoHAnimJoint();
SoHAnimJoint57->X3DNode::setName(QString("vt12"));
SoHAnimJoint57->setDEF(QString("Joe_vt12"));
SoHAnimJoint57->setCenter(new float[]{0.0,1.179,-0.068});
SoHAnimJoint* SoHAnimJoint58 = new SoHAnimJoint();
SoHAnimJoint58->X3DNode::setName(QString("vt11"));
SoHAnimJoint58->setDEF(QString("Joe_vt11"));
SoHAnimJoint58->setCenter(new float[]{0.0,1.2679,-0.081});
SoHAnimJoint* SoHAnimJoint59 = new SoHAnimJoint();
SoHAnimJoint59->X3DNode::setName(QString("vt10"));
SoHAnimJoint59->setDEF(QString("Joe_vt10"));
SoHAnimJoint59->setCenter(new float[]{0.0,1.242,-0.09});
SoHAnimJoint59->setSkinCoordIndex(new int32_t[]{15}, 1);
SoHAnimJoint59->setSkinCoordWeight(new float[]{1.0}, 1);
SoHAnimJoint* SoHAnimJoint60 = new SoHAnimJoint();
SoHAnimJoint60->X3DNode::setName(QString("vt9"));
SoHAnimJoint60->setDEF(QString("Joe_vt9"));
SoHAnimJoint60->setCenter(new float[]{0.0,1.268,-0.1});
SoHAnimJoint60->setSkinCoordIndex(new int32_t[]{13,14}, 2);
SoHAnimJoint60->setSkinCoordWeight(new float[]{1.0,1.0}, 2);
SoHAnimJoint* SoHAnimJoint61 = new SoHAnimJoint();
SoHAnimJoint61->X3DNode::setName(QString("vt8"));
SoHAnimJoint61->setDEF(QString("Joe_vt8"));
SoHAnimJoint61->setCenter(new float[]{0.0,1.294,-0.11});
SoHAnimJoint* SoHAnimJoint62 = new SoHAnimJoint();
SoHAnimJoint62->X3DNode::setName(QString("vt7"));
SoHAnimJoint62->setDEF(QString("Joe_vt7"));
SoHAnimJoint62->setCenter(new float[]{0.0,1.323,-0.1155});
SoHAnimJoint* SoHAnimJoint63 = new SoHAnimJoint();
SoHAnimJoint63->X3DNode::setName(QString("vt6"));
SoHAnimJoint63->setDEF(QString("Joe_vt6"));
SoHAnimJoint63->setCenter(new float[]{0.0,1.352,-0.12});
SoHAnimJoint* SoHAnimJoint64 = new SoHAnimJoint();
SoHAnimJoint64->X3DNode::setName(QString("vt5"));
SoHAnimJoint64->setDEF(QString("Joe_vt5"));
SoHAnimJoint64->setCenter(new float[]{0.0,1.381,-0.1235});
SoHAnimJoint* SoHAnimJoint65 = new SoHAnimJoint();
SoHAnimJoint65->X3DNode::setName(QString("vt4"));
SoHAnimJoint65->setDEF(QString("Joe_vt4"));
SoHAnimJoint65->setCenter(new float[]{0.0,1.41,-0.1235});
SoHAnimJoint65->setSkinCoordIndex(new int32_t[]{81}, 1);
SoHAnimJoint65->setSkinCoordWeight(new float[]{1.0}, 1);
SoHAnimJoint* SoHAnimJoint66 = new SoHAnimJoint();
SoHAnimJoint66->X3DNode::setName(QString("vt3"));
SoHAnimJoint66->setDEF(QString("Joe_vt3"));
SoHAnimJoint66->setCenter(new float[]{0.0,1.438,-0.12});
SoHAnimJoint* SoHAnimJoint67 = new SoHAnimJoint();
SoHAnimJoint67->X3DNode::setName(QString("vt2"));
SoHAnimJoint67->setDEF(QString("Joe_vt2"));
SoHAnimJoint67->setCenter(new float[]{0.0,1.468,-0.105});
SoHAnimJoint* SoHAnimJoint68 = new SoHAnimJoint();
SoHAnimJoint68->X3DNode::setName(QString("vt1"));
SoHAnimJoint68->setDEF(QString("Joe_vt1"));
SoHAnimJoint68->setCenter(new float[]{0.0,1.497,-0.09});
SoHAnimJoint68->setSkinCoordIndex(new int32_t[]{11,24}, 2);
SoHAnimJoint68->setSkinCoordWeight(new float[]{1.0,1.0}, 2);
SoHAnimJoint* SoHAnimJoint69 = new SoHAnimJoint();
SoHAnimJoint69->X3DNode::setName(QString("vc7"));
SoHAnimJoint69->setDEF(QString("Joe_vc7"));
SoHAnimJoint69->setCenter(new float[]{0.0,1.525,-0.072});
SoHAnimJoint69->setSkinCoordIndex(new int32_t[]{74,75}, 2);
SoHAnimJoint69->setSkinCoordWeight(new float[]{1.0,1.0}, 2);
SoHAnimJoint* SoHAnimJoint70 = new SoHAnimJoint();
SoHAnimJoint70->X3DNode::setName(QString("vc6"));
SoHAnimJoint70->setDEF(QString("Joe_vc6"));
SoHAnimJoint70->setCenter(new float[]{0.0,1.54,-0.05});
SoHAnimJoint* SoHAnimJoint71 = new SoHAnimJoint();
SoHAnimJoint71->X3DNode::setName(QString("vc5"));
SoHAnimJoint71->setDEF(QString("Joe_vc5"));
SoHAnimJoint71->setCenter(new float[]{0.0,1.552,-0.035});
SoHAnimJoint* SoHAnimJoint72 = new SoHAnimJoint();
SoHAnimJoint72->X3DNode::setName(QString("vc4"));
SoHAnimJoint72->setDEF(QString("Joe_vc4"));
SoHAnimJoint72->setCenter(new float[]{0.0,1.5675,-0.0256});
SoHAnimJoint* SoHAnimJoint73 = new SoHAnimJoint();
SoHAnimJoint73->X3DNode::setName(QString("vc3"));
SoHAnimJoint73->setDEF(QString("Joe_vc3"));
SoHAnimJoint73->setCenter(new float[]{0.0,1.5823,-0.0185});
SoHAnimJoint* SoHAnimJoint74 = new SoHAnimJoint();
SoHAnimJoint74->X3DNode::setName(QString("vc2"));
SoHAnimJoint74->setDEF(QString("Joe_vc2"));
SoHAnimJoint74->setCenter(new float[]{0.0,1.595,-0.0175});
SoHAnimJoint* SoHAnimJoint75 = new SoHAnimJoint();
SoHAnimJoint75->X3DNode::setName(QString("vc1"));
SoHAnimJoint75->setDEF(QString("Joe_vc1"));
SoHAnimJoint75->setCenter(new float[]{0.0,1.61,-0.015});
SoHAnimJoint* SoHAnimJoint76 = new SoHAnimJoint();
SoHAnimJoint76->X3DNode::setName(QString("skullbase"));
SoHAnimJoint76->setDEF(QString("Joe_skullbase"));
SoHAnimJoint76->setCenter(new float[]{0.0,1.63,-0.01});
SoHAnimJoint76->setSkinCoordIndex(new int32_t[]{0,1,2,3,4,5,6,7,8,9}, 10);
SoHAnimJoint76->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 10);
SoHAnimDisplacer* SoHAnimDisplacer77 = new SoHAnimDisplacer();
SoHAnimDisplacer77->X3DNode::setName(QString("skull_tip_raiser_action"));
SoHAnimDisplacer77->setDEF(QString("Joe_skull_tip_raiser_action"));
SoHAnimDisplacer77->setCoordIndex(new int32_t[]{0,1,2,3,4,5,6,7,8,9}, 10);
SoHAnimDisplacer77->setDisplacements(new float[]{0.0,0.15,0.0,0.0,0.0,0.15,-0.1,0.0,0.15,0.1,0.0,0.05,0.0,-0.02,0.05,-0.15,0.0,0.0,-0.05,0.0,0.0,0.15,0.0,0.0,0.05,0.0,0.0,0.0,0.0,-0.15}, 30);
SoHAnimJoint76->setDisplacers(SoHAnimDisplacer77);

SoHAnimJoint* SoHAnimJoint78 = new SoHAnimJoint();
SoHAnimJoint78->X3DNode::setName(QString("l_eyelid_joint"));
SoHAnimJoint78->setDEF(QString("Joe_l_eyelid_joint"));
SoHAnimJoint78->setCenter(new float[]{0.034,1.659,0.06});
SoHAnimJoint76->addChildren(*SoHAnimJoint78);

SoHAnimJoint* SoHAnimJoint79 = new SoHAnimJoint();
SoHAnimJoint79->X3DNode::setName(QString("l_eyeball_joint"));
SoHAnimJoint79->setDEF(QString("Joe_l_eyeball_joint"));
SoHAnimJoint79->setCenter(new float[]{0.034,1.659,0.06});
SoHAnimJoint76->addChildren(*SoHAnimJoint79);

SoHAnimJoint* SoHAnimJoint80 = new SoHAnimJoint();
SoHAnimJoint80->X3DNode::setName(QString("l_eyebrow_joint"));
SoHAnimJoint80->setDEF(QString("Joe_l_eyebrow_joint"));
SoHAnimJoint80->setCenter(new float[]{0.034,1.659,0.06});
SoHAnimJoint76->addChildren(*SoHAnimJoint80);

SoHAnimJoint* SoHAnimJoint81 = new SoHAnimJoint();
SoHAnimJoint81->X3DNode::setName(QString("r_eyelid_joint"));
SoHAnimJoint81->setDEF(QString("Joe_r_eyelid_joint"));
SoHAnimJoint81->setCenter(new float[]{-0.034,1.659,0.06});
SoHAnimJoint76->addChildren(*SoHAnimJoint81);

SoHAnimJoint* SoHAnimJoint82 = new SoHAnimJoint();
SoHAnimJoint82->X3DNode::setName(QString("r_eyeball_joint"));
SoHAnimJoint82->setDEF(QString("Joe_r_eyeball_joint"));
SoHAnimJoint82->setCenter(new float[]{-0.034,1.659,0.06});
SoHAnimJoint76->addChildren(*SoHAnimJoint82);

SoHAnimJoint* SoHAnimJoint83 = new SoHAnimJoint();
SoHAnimJoint83->X3DNode::setName(QString("r_eyebrow_joint"));
SoHAnimJoint83->setDEF(QString("Joe_r_eyebrow_joint"));
SoHAnimJoint83->setCenter(new float[]{-0.034,1.659,0.06});
SoHAnimJoint76->addChildren(*SoHAnimJoint83);

SoHAnimJoint* SoHAnimJoint84 = new SoHAnimJoint();
SoHAnimJoint84->X3DNode::setName(QString("temporomandibular"));
SoHAnimJoint84->setDEF(QString("Joe_temporomandibular"));
SoHAnimJoint84->setCenter(new float[]{0.034,1.659,0.06});
SoHAnimJoint76->addChildren(*SoHAnimJoint84);

SoHAnimJoint75->addChildren(*SoHAnimJoint76);

SoHAnimJoint74->addChildren(*SoHAnimJoint75);

SoHAnimJoint73->addChildren(*SoHAnimJoint74);

SoHAnimJoint72->addChildren(*SoHAnimJoint73);

SoHAnimJoint71->addChildren(*SoHAnimJoint72);

SoHAnimJoint70->addChildren(*SoHAnimJoint71);

SoHAnimJoint69->addChildren(*SoHAnimJoint70);

SoHAnimJoint68->addChildren(*SoHAnimJoint69);

SoHAnimJoint* SoHAnimJoint85 = new SoHAnimJoint();
SoHAnimJoint85->X3DNode::setName(QString("l_acromioclavicular"));
SoHAnimJoint85->setDEF(QString("Joe_l_acromioclavicular"));
SoHAnimJoint85->setCenter(new float[]{0.082,1.4488,-0.0353});
SoHAnimJoint85->setSkinCoordIndex(new int32_t[]{12}, 1);
SoHAnimJoint85->setSkinCoordWeight(new float[]{1.0}, 1);
SoHAnimJoint* SoHAnimJoint86 = new SoHAnimJoint();
SoHAnimJoint86->X3DNode::setName(QString("l_sternoclavicular"));
SoHAnimJoint86->setDEF(QString("Joe_l_sternoclavicular"));
SoHAnimJoint86->setCenter(new float[]{0.0962,1.4269,-0.0424});
SoHAnimJoint86->setSkinCoordIndex(new int32_t[]{79}, 1);
SoHAnimJoint86->setSkinCoordWeight(new float[]{1.0}, 1);
SoHAnimJoint* SoHAnimJoint87 = new SoHAnimJoint();
SoHAnimJoint87->X3DNode::setName(QString("l_shoulder"));
SoHAnimJoint87->setDEF(QString("Joe_l_shoulder"));
SoHAnimJoint87->setCenter(new float[]{0.2,1.44,-0.04});
SoHAnimJoint87->setSkinCoordIndex(new int32_t[]{41,42,44,80,102,103,104,105}, 8);
SoHAnimJoint87->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 8);
SoHAnimJoint* SoHAnimJoint88 = new SoHAnimJoint();
SoHAnimJoint88->X3DNode::setName(QString("l_elbow"));
SoHAnimJoint88->setDEF(QString("Joe_l_elbow"));
SoHAnimJoint88->setCenter(new float[]{0.2,1.1388,-0.04});
SoHAnimJoint88->setSkinCoordIndex(new int32_t[]{45,46,47,109,110,111,112,113,115,116,117,118}, 12);
SoHAnimJoint88->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 15);
SoHAnimJoint* SoHAnimJoint89 = new SoHAnimJoint();
SoHAnimJoint89->X3DNode::setName(QString("l_radiocarpal"));
SoHAnimJoint89->setDEF(QString("Joe_l_radiocarpal"));
SoHAnimJoint89->setCenter(new float[]{0.2,0.87,-0.04});
SoHAnimJoint89->setSkinCoordIndex(new int32_t[]{119,120,121,122,123,124,125,126}, 8);
SoHAnimJoint89->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 8);
SoHAnimJoint* SoHAnimJoint90 = new SoHAnimJoint();
SoHAnimJoint90->X3DNode::setName(QString("l_carpometacarpal_1"));
SoHAnimJoint90->setDEF(QString("Joe_l_carpometacarpal_1"));
SoHAnimJoint90->setCenter(new float[]{0.1924,0.8472,-0.0534});
SoHAnimJoint90->setSkinCoordIndex(new int32_t[]{127,128}, 2);
SoHAnimJoint90->setSkinCoordWeight(new float[]{1.0,1.0}, 2);
SoHAnimJoint* SoHAnimJoint91 = new SoHAnimJoint();
SoHAnimJoint91->X3DNode::setName(QString("l_metacarpophalangeal_1"));
SoHAnimJoint91->setDEF(QString("Joe_l_metacarpophalangeal_1"));
SoHAnimJoint91->setCenter(new float[]{0.1951,0.8226,0.0246});
SoHAnimJoint91->setSkinCoordIndex(new int32_t[]{138,139,140,141,142,143}, 6);
SoHAnimJoint91->setSkinCoordWeight(new float[]{0.5,0.5,0.5,1.0,1.0,1.0}, 6);
SoHAnimJoint* SoHAnimJoint92 = new SoHAnimJoint();
SoHAnimJoint92->X3DNode::setName(QString("l_carpal_interphalangeal_1"));
SoHAnimJoint92->setDEF(QString("Joe_l_carpal_interphalangeal_1"));
SoHAnimJoint92->setCenter(new float[]{0.1955,0.8159,0.0464});
SoHAnimJoint92->setSkinCoordIndex(new int32_t[]{144,145,146,147,148,149,150,151,152}, 9);
SoHAnimJoint92->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 9);
SoHAnimJoint91->addChildren(*SoHAnimJoint92);

SoHAnimJoint90->addChildren(*SoHAnimJoint91);

SoHAnimJoint89->addChildren(*SoHAnimJoint90);

SoHAnimJoint* SoHAnimJoint93 = new SoHAnimJoint();
SoHAnimJoint93->X3DNode::setName(QString("l_carpometacarpal_2"));
SoHAnimJoint93->setDEF(QString("Joe_l_carpometacarpal_2"));
SoHAnimJoint93->setCenter(new float[]{0.1983,0.8024,-0.028});
SoHAnimJoint93->setSkinCoordIndex(new int32_t[]{129,130}, 2);
SoHAnimJoint93->setSkinCoordWeight(new float[]{1.0,1.0}, 2);
SoHAnimJoint* SoHAnimJoint94 = new SoHAnimJoint();
SoHAnimJoint94->X3DNode::setName(QString("l_metacarpophalangeal_2"));
SoHAnimJoint94->setDEF(QString("Joe_l_metacarpophalangeal_2"));
SoHAnimJoint94->setCenter(new float[]{0.1983,0.7815,-0.028});
SoHAnimJoint94->setSkinCoordIndex(new int32_t[]{138,139,140,153,154,155,163}, 7);
SoHAnimJoint94->setSkinCoordWeight(new float[]{0.5,0.5,0.5,1.0,1.0,1.0,0.5}, 7);
SoHAnimJoint* SoHAnimJoint95 = new SoHAnimJoint();
SoHAnimJoint95->X3DNode::setName(QString("l_carpal_proximal_interphalangeal_2"));
SoHAnimJoint95->setDEF(QString("Joe_l_carpal_proximal_interphalangeal_2"));
SoHAnimJoint95->setCenter(new float[]{0.2017,0.7363,-0.0248});
SoHAnimJoint95->setSkinCoordIndex(new int32_t[]{166,167,168,169}, 4);
SoHAnimJoint95->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0}, 4);
SoHAnimJoint* SoHAnimJoint96 = new SoHAnimJoint();
SoHAnimJoint96->X3DNode::setName(QString("l_carpal_distal_interphalangeal_2"));
SoHAnimJoint96->setDEF(QString("Joe_l_carpal_distal_interphalangeal_2"));
SoHAnimJoint96->setCenter(new float[]{0.2028,0.7139,-0.0236});
SoHAnimJoint96->setSkinCoordIndex(new int32_t[]{170,171,172,173,174,175,176,177,178}, 9);
SoHAnimJoint96->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 9);
SoHAnimJoint95->addChildren(*SoHAnimJoint96);

SoHAnimJoint94->addChildren(*SoHAnimJoint95);

SoHAnimJoint93->addChildren(*SoHAnimJoint94);

SoHAnimJoint89->addChildren(*SoHAnimJoint93);

SoHAnimJoint* SoHAnimJoint97 = new SoHAnimJoint();
SoHAnimJoint97->X3DNode::setName(QString("l_carpometacarpal_3"));
SoHAnimJoint97->setDEF(QString("Joe_l_carpometacarpal_3"));
SoHAnimJoint97->setCenter(new float[]{0.1987,0.8029,-0.053});
SoHAnimJoint97->setSkinCoordIndex(new int32_t[]{131,132}, 2);
SoHAnimJoint97->setSkinCoordWeight(new float[]{1.0,1.0}, 2);
SoHAnimJoint* SoHAnimJoint98 = new SoHAnimJoint();
SoHAnimJoint98->X3DNode::setName(QString("l_metacarpophalangeal_3"));
SoHAnimJoint98->setDEF(QString("Joe_l_metacarpophalangeal_3"));
SoHAnimJoint98->setCenter(new float[]{0.1987,0.7818,-0.053});
SoHAnimJoint98->setSkinCoordIndex(new int32_t[]{156,157,163,164}, 4);
SoHAnimJoint98->setSkinCoordWeight(new float[]{1.0,1.0,0.5,0.5}, 4);
SoHAnimJoint* SoHAnimJoint99 = new SoHAnimJoint();
SoHAnimJoint99->X3DNode::setName(QString("l_carpal_proximal_interphalangeal_3"));
SoHAnimJoint99->setDEF(QString("Joe_l_carpal_proximal_interphalangeal_3"));
SoHAnimJoint99->setCenter(new float[]{0.2013,0.7273,-0.0503});
SoHAnimJoint99->setSkinCoordIndex(new int32_t[]{179,180,181,182}, 4);
SoHAnimJoint99->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0}, 4);
SoHAnimJoint* SoHAnimJoint100 = new SoHAnimJoint();
SoHAnimJoint100->X3DNode::setName(QString("l_carpal_distal_interphalangeal_3"));
SoHAnimJoint100->setDEF(QString("Joe_l_carpal_distal_interphalangeal_3"));
SoHAnimJoint100->setCenter(new float[]{0.2026,0.7011,-0.0494});
SoHAnimJoint100->setSkinCoordIndex(new int32_t[]{183,184,185,186,187,188,189,190,191}, 9);
SoHAnimJoint100->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 9);
SoHAnimJoint99->addChildren(*SoHAnimJoint100);

SoHAnimJoint98->addChildren(*SoHAnimJoint99);

SoHAnimJoint97->addChildren(*SoHAnimJoint98);

SoHAnimJoint89->addChildren(*SoHAnimJoint97);

SoHAnimJoint* SoHAnimJoint101 = new SoHAnimJoint();
SoHAnimJoint101->X3DNode::setName(QString("l_carpometacarpal_4"));
SoHAnimJoint101->setDEF(QString("Joe_l_carpometacarpal_4"));
SoHAnimJoint101->setCenter(new float[]{0.1956,0.8019,-0.0794});
SoHAnimJoint101->setSkinCoordIndex(new int32_t[]{133,134}, 2);
SoHAnimJoint101->setSkinCoordWeight(new float[]{1.0,1.0}, 2);
SoHAnimJoint* SoHAnimJoint102 = new SoHAnimJoint();
SoHAnimJoint102->X3DNode::setName(QString("l_metacarpophalangeal_4"));
SoHAnimJoint102->setDEF(QString("Joe_l_metacarpophalangeal_4"));
SoHAnimJoint102->setCenter(new float[]{0.1956,0.7815,-0.0794});
SoHAnimJoint102->setSkinCoordIndex(new int32_t[]{158,159,164,165}, 4);
SoHAnimJoint102->setSkinCoordWeight(new float[]{1.0,1.0,0.5,0.5}, 4);
SoHAnimJoint* SoHAnimJoint103 = new SoHAnimJoint();
SoHAnimJoint103->X3DNode::setName(QString("l_carpal_proximal_interphalangeal_4"));
SoHAnimJoint103->setDEF(QString("Joe_l_carpal_proximal_interphalangeal_4"));
SoHAnimJoint103->setCenter(new float[]{0.1973,0.7287,-0.0777});
SoHAnimJoint103->setSkinCoordIndex(new int32_t[]{192,193,194,195}, 4);
SoHAnimJoint103->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0}, 4);
SoHAnimJoint* SoHAnimJoint104 = new SoHAnimJoint();
SoHAnimJoint104->X3DNode::setName(QString("l_carpal_distal_interphalangeal_4"));
SoHAnimJoint104->setDEF(QString("Joe_l_carpal_distal_interphalangeal_4"));
SoHAnimJoint104->setCenter(new float[]{0.1983,0.7045,-0.0767});
SoHAnimJoint104->setSkinCoordIndex(new int32_t[]{196,197,198,199,200,201,202,203,204}, 9);
SoHAnimJoint104->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 9);
SoHAnimJoint103->addChildren(*SoHAnimJoint104);

SoHAnimJoint102->addChildren(*SoHAnimJoint103);

SoHAnimJoint101->addChildren(*SoHAnimJoint102);

SoHAnimJoint89->addChildren(*SoHAnimJoint101);

SoHAnimJoint* SoHAnimJoint105 = new SoHAnimJoint();
SoHAnimJoint105->X3DNode::setName(QString("l_carpometacarpal_5"));
SoHAnimJoint105->setDEF(QString("Joe_l_carpometacarpal_5"));
SoHAnimJoint105->setCenter(new float[]{0.1925,0.8066,-0.1036});
SoHAnimJoint105->setSkinCoordIndex(new int32_t[]{135,136,137,165}, 4);
SoHAnimJoint105->setSkinCoordWeight(new float[]{1.0,1.0,1.0,0.5}, 4);
SoHAnimJoint* SoHAnimJoint106 = new SoHAnimJoint();
SoHAnimJoint106->X3DNode::setName(QString("l_metacarpophalangeal_5"));
SoHAnimJoint106->setDEF(QString("Joe_l_metacarpophalangeal_5"));
SoHAnimJoint106->setCenter(new float[]{0.1925,0.7866,-0.1036});
SoHAnimJoint106->setSkinCoordIndex(new int32_t[]{160,161,162}, 3);
SoHAnimJoint106->setSkinCoordWeight(new float[]{1.0,1.0,1.0}, 3);
SoHAnimJoint* SoHAnimJoint107 = new SoHAnimJoint();
SoHAnimJoint107->X3DNode::setName(QString("l_carpal_proximal_interphalangeal_5"));
SoHAnimJoint107->setDEF(QString("Joe_l_carpal_proximal_interphalangeal_5"));
SoHAnimJoint107->setCenter(new float[]{0.1938,0.7452,-0.1024});
SoHAnimJoint107->setSkinCoordIndex(new int32_t[]{205,206,207,208}, 4);
SoHAnimJoint107->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0}, 4);
SoHAnimJoint* SoHAnimJoint108 = new SoHAnimJoint();
SoHAnimJoint108->X3DNode::setName(QString("l_carpal_distal_interphalangeal_5"));
SoHAnimJoint108->setDEF(QString("Joe_l_carpal_distal_interphalangeal_5"));
SoHAnimJoint108->setCenter(new float[]{0.1948,0.7277,-0.1017});
SoHAnimJoint108->setSkinCoordIndex(new int32_t[]{209,210,211,212,213,214,215,216,217}, 9);
SoHAnimJoint108->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 9);
SoHAnimJoint107->addChildren(*SoHAnimJoint108);

SoHAnimJoint106->addChildren(*SoHAnimJoint107);

SoHAnimJoint105->addChildren(*SoHAnimJoint106);

SoHAnimJoint89->addChildren(*SoHAnimJoint105);

SoHAnimJoint88->addChildren(*SoHAnimJoint89);

SoHAnimJoint87->addChildren(*SoHAnimJoint88);

SoHAnimJoint86->addChildren(*SoHAnimJoint87);

SoHAnimJoint85->addChildren(*SoHAnimJoint86);

SoHAnimJoint68->addChildren(*SoHAnimJoint85);

SoHAnimJoint* SoHAnimJoint109 = new SoHAnimJoint();
SoHAnimJoint109->X3DNode::setName(QString("r_sternoclavicular"));
SoHAnimJoint109->setDEF(QString("Joe_r_sternoclavicular"));
SoHAnimJoint109->setCenter(new float[]{-0.03,1.46,0.0});
SoHAnimJoint109->setSkinCoordIndex(new int32_t[]{10}, 1);
SoHAnimJoint109->setSkinCoordWeight(new float[]{1.0}, 1);
SoHAnimJoint* SoHAnimJoint110 = new SoHAnimJoint();
SoHAnimJoint110->X3DNode::setName(QString("r_acromioclavicular"));
SoHAnimJoint110->setDEF(QString("Joe_r_acromioclavicular"));
SoHAnimJoint110->setCenter(new float[]{-0.09,1.41,-0.11});
SoHAnimJoint110->setSkinCoordIndex(new int32_t[]{77,29}, 2);
SoHAnimJoint110->setSkinCoordWeight(new float[]{1.0,0.9}, 2);
SoHAnimJoint* SoHAnimJoint111 = new SoHAnimJoint();
SoHAnimJoint111->X3DNode::setName(QString("r_shoulder"));
SoHAnimJoint111->setDEF(QString("Joe_r_shoulder"));
SoHAnimJoint111->setCenter(new float[]{-0.2,1.44,-0.04});
SoHAnimJoint111->setSkinCoordIndex(new int32_t[]{29,30,32,78,218,219,220,221,86,88}, 10);
SoHAnimJoint111->setSkinCoordWeight(new float[]{0.1,1.0,1.0,1.0,1.0,1.0,1.0,1.0,0.3,0.2}, 10);
SoHAnimJoint* SoHAnimJoint112 = new SoHAnimJoint();
SoHAnimJoint112->X3DNode::setName(QString("r_elbow"));
SoHAnimJoint112->setDEF(QString("Joe_r_elbow"));
SoHAnimJoint112->setCenter(new float[]{-0.2,1.1388,-0.04});
SoHAnimJoint112->setSkinCoordIndex(new int32_t[]{33,34,35,225,226,227,228,229,231,232,233,234}, 12);
SoHAnimJoint112->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 12);
SoHAnimJoint* SoHAnimJoint113 = new SoHAnimJoint();
SoHAnimJoint113->X3DNode::setName(QString("r_radiocarpal"));
SoHAnimJoint113->setDEF(QString("Joe_r_radiocarpal"));
SoHAnimJoint113->setCenter(new float[]{-0.2,0.89,-0.04});
SoHAnimJoint113->setSkinCoordIndex(new int32_t[]{235,236,237,238,239,240,241,242}, 8);
SoHAnimJoint113->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 8);
SoHAnimJoint* SoHAnimJoint114 = new SoHAnimJoint();
SoHAnimJoint114->X3DNode::setName(QString("r_carpometacarpal_1"));
SoHAnimJoint114->setDEF(QString("Joe_r_carpometacarpal_1"));
SoHAnimJoint114->setCenter(new float[]{-0.2,0.85,0.0});
SoHAnimJoint114->setSkinCoordIndex(new int32_t[]{243,244}, 2);
SoHAnimJoint114->setSkinCoordWeight(new float[]{1.0,1.0}, 2);
SoHAnimJoint* SoHAnimJoint115 = new SoHAnimJoint();
SoHAnimJoint115->X3DNode::setName(QString("r_metacarpophalangeal_1"));
SoHAnimJoint115->setDEF(QString("Joe_r_metacarpophalangeal_1"));
SoHAnimJoint115->setCenter(new float[]{-0.2,0.82,0.03});
SoHAnimJoint115->setSkinCoordIndex(new int32_t[]{254,255,256,257,258,259}, 6);
SoHAnimJoint115->setSkinCoordWeight(new float[]{0.5,0.5,0.5,1.0,1.0,1.0}, 6);
SoHAnimJoint* SoHAnimJoint116 = new SoHAnimJoint();
SoHAnimJoint116->X3DNode::setName(QString("r_carpal_interphalangeal_1"));
SoHAnimJoint116->setDEF(QString("Joe_r_carpal_interphalangeal_1"));
SoHAnimJoint116->setCenter(new float[]{-0.2,0.8,0.05});
SoHAnimJoint116->setSkinCoordIndex(new int32_t[]{260,261,262,263,264,265,266,267,268}, 9);
SoHAnimJoint116->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 9);
SoHAnimJoint115->addChildren(*SoHAnimJoint116);

SoHAnimJoint114->addChildren(*SoHAnimJoint115);

SoHAnimJoint113->addChildren(*SoHAnimJoint114);

SoHAnimJoint* SoHAnimJoint117 = new SoHAnimJoint();
SoHAnimJoint117->X3DNode::setName(QString("r_carpometacarpal_2"));
SoHAnimJoint117->setDEF(QString("Joe_r_carpometacarpal_2"));
SoHAnimJoint117->setCenter(new float[]{-0.2,0.84,-0.015});
SoHAnimJoint117->setSkinCoordIndex(new int32_t[]{245,246}, 2);
SoHAnimJoint117->setSkinCoordWeight(new float[]{1.0,1.0}, 2);
SoHAnimJoint* SoHAnimJoint118 = new SoHAnimJoint();
SoHAnimJoint118->X3DNode::setName(QString("r_metacarpophalangeal_2"));
SoHAnimJoint118->setDEF(QString("Joe_r_metacarpophalangeal_2"));
SoHAnimJoint118->setCenter(new float[]{-0.2,0.793,-0.015});
SoHAnimJoint118->setSkinCoordIndex(new int32_t[]{254,255,256,269,270,271,279}, 7);
SoHAnimJoint118->setSkinCoordWeight(new float[]{0.5,0.5,0.5,1.0,1.0,1.0,0.5}, 7);
SoHAnimJoint* SoHAnimJoint119 = new SoHAnimJoint();
SoHAnimJoint119->X3DNode::setName(QString("r_carpal_proximal_interphalangeal_2"));
SoHAnimJoint119->setDEF(QString("Joe_r_carpal_proximal_interphalangeal_2"));
SoHAnimJoint119->setCenter(new float[]{-0.2,0.745,-0.015});
SoHAnimJoint119->setSkinCoordIndex(new int32_t[]{282,283,284,285}, 4);
SoHAnimJoint119->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0}, 4);
SoHAnimJoint* SoHAnimJoint120 = new SoHAnimJoint();
SoHAnimJoint120->X3DNode::setName(QString("r_carpal_distal_interphalangeal_2"));
SoHAnimJoint120->setDEF(QString("Joe_r_carpal_distal_interphalangeal_2"));
SoHAnimJoint120->setCenter(new float[]{-0.2,0.72,-0.015});
SoHAnimJoint120->setSkinCoordIndex(new int32_t[]{286,287,288,289,290,291,292,293,294}, 9);
SoHAnimJoint120->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 9);
SoHAnimJoint119->addChildren(*SoHAnimJoint120);

SoHAnimJoint118->addChildren(*SoHAnimJoint119);

SoHAnimJoint117->addChildren(*SoHAnimJoint118);

SoHAnimJoint113->addChildren(*SoHAnimJoint117);

SoHAnimJoint* SoHAnimJoint121 = new SoHAnimJoint();
SoHAnimJoint121->X3DNode::setName(QString("r_carpometacarpal_3"));
SoHAnimJoint121->setDEF(QString("Joe_r_carpometacarpal_3"));
SoHAnimJoint121->setCenter(new float[]{-0.2,0.835,-0.04});
SoHAnimJoint121->setSkinCoordIndex(new int32_t[]{247,248}, 2);
SoHAnimJoint121->setSkinCoordWeight(new float[]{1.0,1.0}, 2);
SoHAnimJoint* SoHAnimJoint122 = new SoHAnimJoint();
SoHAnimJoint122->X3DNode::setName(QString("r_metacarpophalangeal_3"));
SoHAnimJoint122->setDEF(QString("Joe_r_metacarpophalangeal_3"));
SoHAnimJoint122->setCenter(new float[]{-0.2,0.788,-0.04});
SoHAnimJoint122->setSkinCoordIndex(new int32_t[]{272,273,279,280}, 4);
SoHAnimJoint122->setSkinCoordWeight(new float[]{1.0,1.0,0.5,0.5}, 4);
SoHAnimJoint* SoHAnimJoint123 = new SoHAnimJoint();
SoHAnimJoint123->X3DNode::setName(QString("r_carpal_proximal_interphalangeal_3"));
SoHAnimJoint123->setDEF(QString("Joe_r_carpal_proximal_interphalangeal_3"));
SoHAnimJoint123->setCenter(new float[]{-0.2,0.74,-0.04});
SoHAnimJoint123->setSkinCoordIndex(new int32_t[]{295,296,297,298}, 4);
SoHAnimJoint123->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0}, 4);
SoHAnimJoint* SoHAnimJoint124 = new SoHAnimJoint();
SoHAnimJoint124->X3DNode::setName(QString("r_carpal_distal_interphalangeal_3"));
SoHAnimJoint124->setDEF(QString("Joe_r_carpal_distal_interphalangeal_3"));
SoHAnimJoint124->setCenter(new float[]{-0.2,0.7142,-0.04});
SoHAnimJoint124->setSkinCoordIndex(new int32_t[]{299,300,301,302,303,304,305,306,307}, 9);
SoHAnimJoint124->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 9);
SoHAnimJoint123->addChildren(*SoHAnimJoint124);

SoHAnimJoint122->addChildren(*SoHAnimJoint123);

SoHAnimJoint121->addChildren(*SoHAnimJoint122);

SoHAnimJoint113->addChildren(*SoHAnimJoint121);

SoHAnimJoint* SoHAnimJoint125 = new SoHAnimJoint();
SoHAnimJoint125->X3DNode::setName(QString("r_carpometacarpal_4"));
SoHAnimJoint125->setDEF(QString("Joe_r_carpometacarpal_4"));
SoHAnimJoint125->setCenter(new float[]{-0.2,0.835,-0.065});
SoHAnimJoint125->setSkinCoordIndex(new int32_t[]{249,250}, 2);
SoHAnimJoint125->setSkinCoordWeight(new float[]{1.0,1.0}, 2);
SoHAnimJoint* SoHAnimJoint126 = new SoHAnimJoint();
SoHAnimJoint126->X3DNode::setName(QString("r_metacarpophalangeal_4"));
SoHAnimJoint126->setDEF(QString("Joe_r_metacarpophalangeal_4"));
SoHAnimJoint126->setCenter(new float[]{-0.2,0.793,-0.065});
SoHAnimJoint126->setSkinCoordIndex(new int32_t[]{274,275,280,281}, 4);
SoHAnimJoint126->setSkinCoordWeight(new float[]{1.0,1.0,0.5,0.5}, 4);
SoHAnimJoint* SoHAnimJoint127 = new SoHAnimJoint();
SoHAnimJoint127->X3DNode::setName(QString("r_carpal_proximal_interphalangeal_4"));
SoHAnimJoint127->setDEF(QString("Joe_r_carpal_proximal_interphalangeal_4"));
SoHAnimJoint127->setCenter(new float[]{-0.2,0.74,-0.065});
SoHAnimJoint127->setSkinCoordIndex(new int32_t[]{308,309,310,311}, 4);
SoHAnimJoint127->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0}, 4);
SoHAnimJoint* SoHAnimJoint128 = new SoHAnimJoint();
SoHAnimJoint128->X3DNode::setName(QString("r_carpal_distal_interphalangeal_4"));
SoHAnimJoint128->setDEF(QString("Joe_r_carpal_distal_interphalangeal_4"));
SoHAnimJoint128->setCenter(new float[]{-0.2,0.7177,-0.065});
SoHAnimJoint128->setSkinCoordIndex(new int32_t[]{312,313,314,315,316,317,318,319,320}, 9);
SoHAnimJoint128->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 9);
SoHAnimJoint127->addChildren(*SoHAnimJoint128);

SoHAnimJoint126->addChildren(*SoHAnimJoint127);

SoHAnimJoint125->addChildren(*SoHAnimJoint126);

SoHAnimJoint113->addChildren(*SoHAnimJoint125);

SoHAnimJoint* SoHAnimJoint129 = new SoHAnimJoint();
SoHAnimJoint129->X3DNode::setName(QString("r_carpometacarpal_5"));
SoHAnimJoint129->setDEF(QString("Joe_r_carpometacarpal_5"));
SoHAnimJoint129->setCenter(new float[]{-0.2,0.84,-0.085});
SoHAnimJoint129->setSkinCoordIndex(new int32_t[]{251,252,253,281}, 4);
SoHAnimJoint129->setSkinCoordWeight(new float[]{1.0,1.0,1.0,0.5}, 4);
SoHAnimJoint* SoHAnimJoint130 = new SoHAnimJoint();
SoHAnimJoint130->X3DNode::setName(QString("r_metacarpophalangeal_5"));
SoHAnimJoint130->setDEF(QString("Joe_r_metacarpophalangeal_5"));
SoHAnimJoint130->setCenter(new float[]{-0.2,0.79,-0.085});
SoHAnimJoint130->setSkinCoordIndex(new int32_t[]{276,277,278}, 3);
SoHAnimJoint130->setSkinCoordWeight(new float[]{1.0,1.0,1.0}, 3);
SoHAnimJoint* SoHAnimJoint131 = new SoHAnimJoint();
SoHAnimJoint131->X3DNode::setName(QString("r_carpal_proximal_interphalangeal_5"));
SoHAnimJoint131->setDEF(QString("Joe_r_carpal_proximal_interphalangeal_5"));
SoHAnimJoint131->setCenter(new float[]{-0.2,0.755,-0.085});
SoHAnimJoint131->setSkinCoordIndex(new int32_t[]{321,322,323,324}, 4);
SoHAnimJoint131->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0}, 4);
SoHAnimJoint* SoHAnimJoint132 = new SoHAnimJoint();
SoHAnimJoint132->X3DNode::setName(QString("r_carpal_distal_interphalangeal_5"));
SoHAnimJoint132->setDEF(QString("Joe_r_carpal_distal_interphalangeal_5"));
SoHAnimJoint132->setCenter(new float[]{-0.2,0.735,-0.09});
SoHAnimJoint132->setSkinCoordIndex(new int32_t[]{325,326,327,328,329,330,331,332,333}, 9);
SoHAnimJoint132->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 9);
SoHAnimJoint131->addChildren(*SoHAnimJoint132);

SoHAnimJoint130->addChildren(*SoHAnimJoint131);

SoHAnimJoint129->addChildren(*SoHAnimJoint130);

SoHAnimJoint113->addChildren(*SoHAnimJoint129);

SoHAnimJoint112->addChildren(*SoHAnimJoint113);

SoHAnimJoint111->addChildren(*SoHAnimJoint112);

SoHAnimJoint110->addChildren(*SoHAnimJoint111);

SoHAnimJoint109->addChildren(*SoHAnimJoint110);

SoHAnimJoint68->addChildren(*SoHAnimJoint109);

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

SoHAnimJoint52->addChildren(*SoHAnimJoint53);

SoHAnimJoint33->addChildren(*SoHAnimJoint52);

SoHAnimHumanoid30->setSkeleton(*SoHAnimJoint33);

SoShape* SoShape133 = new SoShape();
SoShape133->setDEF(QString("Joe_Shape"));
SoVRMLAppearance* SoVRMLAppearance134 = new SoVRMLAppearance();
SoVRMLAppearance134->setDEF(QString("Joe_skin_Appearance"));
SoMaterial* SoMaterial135 = new SoMaterial();
SoMaterial135->setDEF(QString("Joe_skin_Material"));
SoMaterial135->setDiffuseColor(new float[]{0.3,0.3,0.6});
SoMaterial135->setEmissiveColor(new float[]{0.3,0.3,0.6});
SoVRMLAppearance134->addChild(*SoMaterial135);

SoImageTexture* SoImageTexture136 = new SoImageTexture();
SoImageTexture136->setDEF(QString("JoeSkinImageTexture"));
SoImageTexture136->setUrl(new QString[]{QString("JoeBodyTexture29.png"), QString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/JoeBodyTexture29.png")}, 2);
SoVRMLAppearance134->addChild(*SoImageTexture136);

SoTextureTransform* SoTextureTransform137 = new SoTextureTransform();
SoTextureTransform137->setDEF(QString("KickTextureTransform"));
SoVRMLAppearance134->setTextureTransform(SoTextureTransform137);

SoShape133->addChild(*SoVRMLAppearance134);

SoIndexedFaceSet* SoIndexedFaceSet138 = new SoIndexedFaceSet();
SoIndexedFaceSet138->setDEF(QString("Joe_skin_IndexedFaceSet"));
SoIndexedFaceSet138->setCoordIndex(new int32_t[]{0,9,5,-1,0,7,9,-1,0,5,1,-1,1,5,2,-1,1,3,7,-1,2,4,3,-1,0,1,7,-1,1,2,3,-1,5,6,2,-1,7,3,8,-1,6,4,2,-1,3,4,8,-1,9,6,5,-1,9,7,8,-1,4,6,10,-1,4,10,12,-1,4,12,8,-1,10,11,12,-1,9,75,24,-1,9,24,74,-1,9,8,75,-1,9,74,6,-1,10,6,74,-1,12,75,8,-1,74,24,29,-1,24,77,29,-1,10,74,29,-1,77,32,29,-1,32,78,29,-1,78,30,29,-1,30,10,29,-1,41,24,75,-1,41,75,12,-1,41,12,42,-1,41,42,80,-1,41,80,44,-1,41,44,79,-1,41,79,24,-1,81,24,79,-1,81,77,24,-1,81,25,77,-1,81,79,25,-1,25,79,44,-1,25,32,77,-1,25,83,32,-1,25,26,83,-1,25,27,26,-1,25,84,27,-1,25,44,84,-1,11,10,30,-1,11,30,13,-1,11,13,15,-1,11,15,14,-1,11,14,42,-1,11,42,12,-1,15,13,16,-1,15,18,14,-1,15,16,76,-1,15,76,18,-1,76,16,17,-1,76,17,82,-1,76,82,19,-1,76,19,18,-1,22,18,19,-1,22,87,18,-1,22,27,84,-1,22,84,87,-1,87,84,85,-1,85,84,44,-1,85,42,14,-1,87,14,18,-1,87,85,14,-1,20,83,26,-1,20,17,16,-1,20,16,88,-1,20,88,83,-1,88,16,13,-1,88,13,86,-1,88,86,83,-1,86,13,30,-1,86,32,83,-1,23,89,22,-1,89,27,22,-1,89,91,27,-1,91,26,27,-1,91,20,26,-1,21,20,91,-1,21,17,20,-1,21,92,17,-1,82,17,92,-1,82,90,19,-1,23,22,19,-1,23,19,90,-1,82,92,101,-1,82,101,99,-1,82,99,93,-1,82,93,95,-1,82,95,97,-1,82,97,90,-1,23,90,97,-1,23,97,94,-1,23,94,89,-1,89,94,96,-1,89,96,95,-1,89,95,93,-1,89,93,91,-1,91,93,99,-1,91,99,100,-1,91,100,98,-1,21,91,98,-1,21,98,101,-1,21,101,92,-1,85,105,42,-1,85,103,105,-1,85,44,103,-1,103,44,104,-1,80,42,105,-1,80,105,102,-1,80,102,104,-1,80,104,44,-1,105,109,102,-1,102,109,47,-1,47,104,102,-1,104,47,45,-1,104,45,103,-1,103,45,46,-1,103,46,109,-1,103,109,105,-1,109,112,110,-1,109,110,47,-1,47,110,111,-1,47,111,45,-1,45,111,113,-1,113,46,45,-1,46,113,112,-1,112,109,46,-1,112,118,110,-1,110,118,115,-1,110,115,111,-1,111,115,117,-1,111,117,113,-1,113,117,116,-1,113,116,112,-1,112,116,118,-1,115,118,119,-1,119,118,122,-1,118,116,122,-1,122,116,120,-1,116,117,120,-1,120,117,121,-1,117,115,121,-1,115,119,121,-1,119,127,123,-1,119,122,127,-1,122,126,127,-1,122,128,126,-1,122,120,128,-1,120,124,128,-1,120,121,124,-1,121,125,124,-1,121,119,125,-1,119,123,125,-1,127,129,123,-1,127,126,129,-1,129,126,141,-1,141,126,143,-1,126,142,143,-1,126,128,142,-1,128,124,130,-1,142,128,130,-1,124,132,130,-1,124,134,132,-1,125,134,124,-1,125,136,134,-1,125,137,136,-1,125,135,137,-1,125,133,135,-1,125,123,133,-1,123,131,133,-1,123,129,131,-1,131,129,138,-1,129,141,138,-1,138,141,144,-1,141,143,144,-1,143,146,144,-1,142,146,143,-1,142,145,146,-1,139,145,142,-1,130,139,142,-1,139,130,132,-1,139,132,154,-1,132,157,154,-1,132,159,157,-1,132,134,159,-1,134,136,159,-1,136,161,159,-1,136,137,161,-1,137,162,161,-1,160,162,137,-1,135,160,137,-1,133,160,135,-1,133,158,160,-1,131,158,133,-1,156,158,131,-1,153,156,131,-1,131,138,153,-1,138,155,153,-1,140,155,138,-1,138,144,140,-1,144,147,140,-1,140,147,145,-1,140,145,139,-1,139,155,140,-1,154,155,139,-1,146,149,144,-1,146,151,149,-1,145,151,146,-1,150,151,145,-1,145,152,150,-1,147,152,145,-1,147,149,152,-1,147,144,149,-1,148,149,151,-1,148,152,149,-1,148,150,152,-1,148,151,150,-1,160,207,162,-1,160,205,207,-1,165,208,205,-1,160,165,205,-1,158,165,160,-1,161,162,207,-1,161,207,206,-1,165,206,208,-1,206,165,161,-1,161,165,159,-1,207,209,211,-1,205,209,207,-1,205,212,209,-1,205,208,212,-1,206,212,208,-1,206,210,212,-1,206,207,210,-1,207,211,210,-1,209,212,213,-1,212,216,213,-1,212,214,216,-1,210,214,212,-1,210,215,214,-1,210,211,215,-1,209,215,211,-1,209,213,215,-1,217,213,216,-1,217,215,213,-1,217,214,215,-1,217,216,214,-1,158,194,165,-1,192,194,158,-1,164,195,192,-1,158,164,192,-1,156,164,158,-1,159,194,165,-1,159,194,193,-1,159,193,195,-1,159,195,164,-1,159,164,157,-1,157,164,180,-1,192,198,194,-1,192,196,198,-1,192,195,196,-1,195,199,196,-1,196,199,200,-1,199,203,200,-1,193,199,195,-1,193,197,199,-1,193,198,197,-1,193,194,198,-1,199,201,203,-1,197,201,199,-1,197,198,201,-1,198,202,201,-1,196,202,198,-1,200,202,196,-1,204,202,200,-1,204,201,202,-1,204,203,201,-1,204,200,203,-1,156,181,164,-1,156,179,181,-1,156,182,179,-1,156,163,182,-1,163,180,182,-1,157,180,163,-1,164,181,180,-1,179,182,183,-1,182,186,183,-1,182,184,186,-1,180,184,182,-1,180,181,184,-1,181,185,184,-1,179,185,181,-1,183,185,179,-1,183,186,187,-1,186,190,187,-1,184,190,186,-1,184,188,190,-1,184,185,188,-1,185,189,188,-1,185,183,189,-1,183,187,189,-1,191,189,187,-1,191,188,189,-1,191,190,188,-1,191,187,190,-1,153,163,156,-1,153,168,163,-1,153,166,168,-1,153,169,166,-1,155,169,153,-1,155,167,169,-1,154,167,155,-1,154,163,167,-1,154,157,163,-1,163,168,167,-1,166,169,170,-1,169,173,170,-1,169,171,173,-1,169,167,171,-1,167,168,171,-1,168,172,171,-1,168,170,172,-1,170,168,166,-1,170,173,174,-1,173,177,174,-1,173,175,177,-1,173,171,175,-1,171,172,175,-1,172,176,175,-1,172,174,176,-1,170,174,172,-1,178,176,174,-1,178,175,176,-1,178,177,175,-1,178,174,177,-1,86,30,221,-1,86,221,219,-1,86,219,32,-1,32,219,220,-1,78,32,220,-1,78,220,218,-1,78,218,221,-1,78,221,30,-1,221,225,219,-1,219,225,35,-1,35,33,219,-1,33,220,219,-1,33,34,220,-1,220,34,218,-1,221,218,34,-1,34,225,221,-1,225,226,228,-1,225,228,35,-1,35,228,229,-1,35,229,33,-1,33,229,227,-1,33,227,34,-1,34,227,226,-1,34,226,225,-1,226,234,228,-1,228,234,232,-1,232,229,228,-1,232,233,229,-1,229,233,227,-1,227,233,231,-1,227,231,226,-1,226,231,234,-1,231,235,234,-1,235,238,234,-1,234,238,232,-1,238,236,232,-1,232,236,233,-1,236,237,233,-1,233,237,231,-1,231,237,235,-1,235,239,243,-1,235,243,238,-1,238,243,242,-1,238,242,244,-1,238,244,236,-1,236,244,240,-1,236,240,237,-1,237,240,241,-1,237,241,235,-1,235,241,239,-1,243,239,245,-1,243,245,242,-1,245,257,242,-1,257,259,242,-1,242,259,258,-1,242,258,244,-1,244,246,240,-1,258,246,244,-1,240,246,248,-1,240,248,250,-1,241,240,250,-1,241,250,252,-1,241,252,253,-1,241,253,251,-1,241,251,249,-1,241,249,239,-1,239,249,247,-1,239,247,245,-1,247,254,245,-1,245,254,257,-1,254,260,257,-1,257,260,259,-1,259,260,262,-1,258,259,262,-1,258,262,261,-1,255,258,261,-1,246,258,255,-1,255,248,246,-1,255,270,248,-1,248,270,273,-1,248,273,275,-1,248,275,250,-1,250,275,252,-1,252,275,277,-1,252,277,253,-1,253,277,278,-1,276,253,278,-1,251,253,276,-1,249,251,276,-1,249,276,274,-1,247,249,274,-1,272,247,274,-1,269,247,272,-1,247,269,254,-1,254,269,271,-1,256,254,271,-1,254,256,260,-1,260,256,263,-1,256,261,263,-1,256,255,261,-1,255,256,271,-1,270,255,271,-1,262,260,265,-1,262,265,267,-1,261,262,267,-1,266,261,267,-1,261,266,268,-1,263,261,268,-1,263,268,265,-1,263,265,260,-1,264,267,265,-1,264,265,268,-1,264,268,266,-1,264,266,267,-1,276,278,323,-1,276,323,321,-1,281,321,324,-1,276,321,281,-1,274,276,281,-1,277,323,278,-1,277,322,323,-1,281,324,322,-1,322,277,281,-1,277,275,281,-1,323,327,325,-1,321,323,325,-1,321,325,328,-1,321,328,324,-1,322,324,328,-1,322,328,326,-1,322,326,323,-1,323,326,327,-1,325,329,328,-1,328,329,332,-1,328,332,330,-1,326,328,330,-1,326,330,331,-1,326,331,327,-1,325,327,331,-1,325,331,329,-1,333,332,329,-1,333,329,331,-1,333,331,330,-1,333,330,332,-1,274,281,310,-1,308,274,310,-1,280,308,311,-1,274,308,280,-1,272,274,280,-1,275,310,281,-1,275,309,310,-1,275,311,309,-1,275,280,311,-1,275,273,280,-1,273,296,280,-1,308,310,314,-1,308,314,312,-1,308,312,311,-1,311,312,315,-1,312,316,315,-1,315,316,319,-1,309,311,315,-1,309,315,313,-1,309,313,314,-1,309,314,310,-1,315,319,317,-1,313,315,317,-1,313,317,314,-1,314,317,318,-1,312,314,318,-1,316,312,318,-1,320,316,318,-1,320,318,317,-1,320,317,319,-1,320,319,316,-1,272,280,297,-1,272,297,295,-1,272,295,298,-1,272,298,279,-1,279,298,296,-1,273,279,296,-1,280,296,297,-1,295,299,298,-1,298,299,302,-1,298,302,300,-1,296,298,300,-1,296,300,297,-1,297,300,301,-1,295,297,301,-1,299,295,301,-1,299,303,302,-1,302,303,306,-1,300,302,306,-1,300,306,304,-1,300,304,301,-1,301,304,305,-1,301,305,299,-1,299,305,303,-1,307,303,305,-1,307,305,304,-1,307,304,306,-1,307,306,303,-1,269,272,279,-1,269,279,284,-1,269,284,282,-1,269,282,285,-1,271,269,285,-1,271,285,283,-1,270,271,283,-1,270,283,279,-1,270,279,273,-1,279,283,284,-1,282,286,285,-1,285,286,289,-1,285,289,287,-1,285,287,283,-1,283,287,284,-1,284,287,288,-1,284,288,286,-1,286,282,284,-1,286,290,289,-1,289,290,293,-1,289,293,291,-1,289,291,287,-1,287,291,288,-1,288,291,292,-1,288,292,290,-1,286,288,290,-1,294,290,292,-1,294,292,291,-1,294,291,293,-1,294,293,290,-1,97,334,336,-1,97,336,94,-1,94,336,96,-1,336,335,96,-1,96,335,95,-1,95,335,337,-1,95,337,334,-1,95,334,97,-1,334,341,336,-1,336,341,338,-1,336,338,335,-1,335,338,340,-1,335,340,337,-1,337,340,339,-1,337,339,334,-1,334,339,341,-1,341,345,342,-1,341,342,338,-1,338,342,340,-1,340,342,344,-1,340,344,339,-1,339,344,343,-1,339,343,345,-1,339,345,341,-1,345,349,342,-1,342,349,351,-1,342,351,346,-1,342,346,344,-1,71,346,348,-1,71,344,346,-1,71,348,347,-1,71,347,344,-1,344,347,343,-1,343,347,352,-1,343,352,349,-1,343,349,345,-1,349,352,356,-1,349,356,353,-1,349,353,355,-1,349,355,351,-1,354,356,352,-1,354,352,350,-1,354,350,351,-1,354,351,355,-1,353,356,357,-1,353,357,358,-1,353,358,359,-1,353,359,360,-1,353,360,361,-1,353,361,355,-1,354,357,356,-1,350,346,351,-1,348,346,347,-1,350,347,346,-1,350,352,347,-1,354,358,357,-1,354,359,358,-1,354,360,359,-1,354,361,360,-1,354,355,361,-1,101,362,365,-1,101,365,99,-1,99,365,100,-1,100,365,363,-1,100,363,98,-1,98,363,364,-1,98,364,101,-1,101,364,362,-1,362,369,367,-1,362,367,365,-1,365,367,363,-1,363,367,368,-1,363,367,368,-1,363,368,366,-1,363,366,364,-1,364,366,362,-1,362,366,369,-1,369,373,371,-1,369,371,367,-1,367,371,368,-1,368,371,372,-1,368,372,366,-1,366,372,370,-1,366,370,369,-1,369,370,373,-1,373,377,380,-1,373,380,375,-1,373,375,371,-1,371,375,372,-1,372,375,376,-1,372,376,374,-1,372,374,370,-1,370,374,379,-1,373,370,379,-1,373,379,377,-1,377,379,383,-1,377,383,381,-1,377,381,384,-1,377,384,380,-1,381,383,389,-1,381,389,388,-1,381,388,387,-1,381,387,386,-1,381,386,385,-1,381,385,384,-1,376,375,374,-1,378,379,374,-1,378,374,375,-1,378,375,380,-1,382,386,387,-1,382,387,388,-1,382,388,389,-1,382,389,383,-1,382,383,379,-1,382,379,378,-1,382,378,380,-1,382,380,384,-1,382,384,385,-1,382,385,386,-1}, 2780);
SoIndexedFaceSet138->setCreaseAngle(3.14);
SoCoordinate* SoCoordinate139 = new SoCoordinate();
SoCoordinate139->setDEF(QString("Joe_SkinCoord"));
SoCoordinate139->setPoint(new float[]{0.0,1.77,0.0,0.0,1.665,0.09,-0.033,1.62,0.087,0.033,1.62,0.087,0.0,1.55,0.097,-0.077,1.64,-0.01,-0.0527,1.58,0.015,0.077,1.64,-0.01,0.0527,1.58,0.015,0.0,1.625,-0.0925,-0.03,1.46,0.035,0.0,1.44,0.03,0.03,1.46,0.035,-0.1135,1.318,0.095,0.1135,1.318,0.095,0.0,1.25,0.113,-0.087,1.19,0.09,-0.0935,1.03,0.075,0.087,1.19,0.09,0.0935,1.03,0.075,-0.1425,1.065,0.0033,-0.15,0.9,-0.01,0.1425,1.065,0.0033,0.15,0.9,-0.01,0.0,1.53,-0.084,0.0049,1.1908,-0.1113,-0.0773,1.019,-0.12,0.0773,1.019,-0.12,0.005,1.0915,-0.1091,-0.178,1.4825,-0.0625,-0.17,1.38,0.007,-0.1884,0.8676,-0.036,-0.16,1.38,-0.127,-0.2,1.1388,-0.08,-0.244,1.1388,-0.04,-0.165,1.1388,-0.04,-0.23,1.133,-0.055,-0.1977,0.8169,-0.0177,-0.1941,0.6772,-0.0423,-0.2117,0.8562,-0.0584,-0.1929,0.789,-0.1064,0.175,1.4825,-0.06,0.17,1.38,0.007,0.1901,0.8645,-0.0415,0.16,1.38,-0.125,0.2,1.1388,-0.08,0.165,1.1388,-0.04,0.244,1.1388,-0.04,0.23,1.133,-0.055,0.2009,0.8139,-0.0237,0.2056,0.6743,-0.0482,0.2142,0.8529,-0.0648,0.1929,0.786,-0.1122,-0.1,0.4913,-0.03,-0.17,0.466,0.0,-0.05,0.466,0.0,-0.165,0.01,0.12,-0.15,0.07,0.0,-0.085,0.086,0.0125,-0.09,0.056,0.0125,-0.115,0.02,0.122,-0.115,0.04,-0.055,-0.11,0.011,0.19,0.0993,0.4881,-0.0309,0.17,0.466,0.0,0.05,0.4867,0.0,0.165,0.01,0.12,0.15,0.07,0.0,0.085,0.086,0.0125,0.09,0.056,0.0125,0.115,0.02,0.122,0.115,0.04,-0.055,0.11,0.011,0.19,0.0,0.875,0.0,-0.0646,1.5149,-0.038,0.0646,1.5149,-0.038,0.0,1.0723,0.09,-0.11,1.427,-0.1375,-0.235,1.42,-0.0625,0.11,1.427,-0.1375,0.235,1.42,-0.0625,0.0,1.41,-0.145,0.0,0.925,0.08,-0.087,1.19,-0.09,0.087,1.19,-0.09,0.172,1.32,-0.03,-0.172,1.32,-0.03,0.15,1.23,-0.015,-0.15,1.23,-0.015,0.079,0.92,-0.14,0.1,0.9,0.077,-0.079,0.92,-0.14,-0.1,0.9,0.075,0.0,0.87,0.0,0.171,0.65,0.0,0.02,0.65,0.0,0.1,0.65,-0.08,0.1,0.65,0.07,-0.171,0.65,0.0,-0.02,0.65,0.0,-0.1,0.65,-0.08,-0.1,0.65,0.07,0.25,1.27,-0.04,0.17,1.27,-0.04,0.2,1.27,-0.09,0.2,1.27,0.02,0.244,1.1388,-0.04,0.165,1.1388,-0.04,0.2,1.1388,-0.08,0.2,1.1388,-0.013,0.225,1.0,-0.01,0.225,1.0,-0.07,0.185,1.0,-0.01,0.185,1.0,-0.07,0.2,1.1388,-0.04,0.225,0.92,-0.04,0.175,0.92,-0.04,0.2,0.92,-0.065,0.2,0.92,-0.015,0.225,0.89,-0.04,0.175,0.89,-0.04,0.2,0.89,-0.065,0.2,0.89,-0.015,0.218,0.86,-0.04,0.184,0.86,-0.04,0.2,0.87,-0.07,0.2,0.87,0.0,0.21,0.85,0.0,0.1854,0.85,0.0,0.212,0.84,-0.015,0.183,0.84,-0.015,0.213,0.835,-0.04,0.19,0.835,-0.04,0.211,0.835,-0.065,0.192,0.835,-0.065,0.208,0.84,-0.085,0.19,0.84,-0.085,0.2,0.84,-0.095,0.215,0.82,0.0,0.193,0.815,0.005,0.198,0.8,0.012,0.21,0.82,0.03,0.19,0.82,0.03,0.2,0.835,0.039,0.212,0.8,0.05,0.188,0.8,0.05,0.2,0.807,0.057,0.2,0.793,0.035,0.2,0.774,0.076,0.212,0.78,0.07,0.188,0.78,0.07,0.2,0.785,0.075,0.2,0.77,0.062,0.215,0.793,-0.015,0.187,0.793,-0.015,0.2,0.793,-0.005,0.215,0.788,-0.04,0.187,0.788,-0.04,0.215,0.793,-0.065,0.187,0.793,-0.065,0.21,0.79,-0.085,0.19,0.79,-0.085,0.2,0.79,-0.095,0.19,0.77,-0.0275,0.19,0.77,-0.0525,0.19,0.78,-0.0775,0.212,0.745,-0.015,0.188,0.745,-0.02,0.2,0.745,-0.0255,0.2,0.745,-0.0045,0.211,0.72,-0.015,0.189,0.72,-0.015,0.2,0.72,-0.0252,0.2,0.72,-0.0048,0.21,0.695,-0.015,0.19,0.695,-0.015,0.2,0.695,-0.025,0.2,0.695,-0.005,0.2,0.685,-0.015,0.215,0.74,-0.04,0.185,0.74,-0.04,0.2,0.74,-0.055,0.2,0.74,-0.025,0.21,0.7142,-0.04,0.19,0.7142,-0.04,0.2,0.7142,-0.053,0.2,0.7142,-0.027,0.21,0.68,-0.04,0.19,0.68,-0.04,0.2,0.68,-0.05,0.2,0.68,-0.03,0.2,0.67,-0.04,0.212,0.74,-0.065,0.188,0.74,-0.065,0.2,0.74,-0.0756,0.2,0.74,-0.0542,0.21,0.7177,-0.065,0.19,0.7177,-0.065,0.2,0.7177,-0.0751,0.2,0.7177,-0.0549,0.21,0.695,-0.065,0.19,0.695,-0.065,0.2,0.695,-0.075,0.2,0.695,-0.055,0.2,0.685,-0.065,0.211,0.755,-0.085,0.189,0.755,-0.085,0.2,0.755,-0.0952,0.2,0.755,-0.0748,0.21,0.735,-0.085,0.19,0.735,-0.085,0.2,0.735,-0.0951,0.2,0.735,-0.0749,0.21,0.72,-0.085,0.19,0.72,-0.085,0.2,0.72,-0.095,0.2,0.72,-0.075,0.2,0.71,-0.085,-0.23,1.23,-0.04,-0.16,1.23,-0.04,-0.2,1.235,-0.105,-0.2,1.255,0.02,-0.244,1.1388,-0.04,-0.165,1.1388,-0.04,-0.2,1.1388,-0.08,-0.2,1.1388,0.013,-0.225,1.0,-0.01,-0.225,1.0,-0.07,-0.185,1.0,-0.01,-0.185,1.0,-0.07,-0.2,1.1388,-0.04,-0.225,0.92,-0.04,-0.175,0.92,-0.04,-0.2,0.92,-0.065,-0.2,0.92,-0.015,-0.225,0.89,-0.04,-0.175,0.89,-0.04,-0.2,0.89,-0.065,-0.2,0.89,-0.015,-0.218,0.86,-0.04,-0.184,0.86,-0.04,-0.2,0.87,-0.07,-0.2,0.87,0.0,-0.21,0.85,0.0,-0.1854,0.85,0.0,-0.212,0.84,-0.015,-0.183,0.84,-0.015,-0.213,0.835,-0.04,-0.19,0.835,-0.04,-0.211,0.835,-0.065,-0.192,0.835,-0.065,-0.208,0.84,-0.085,-0.19,0.84,-0.085,-0.2,0.84,-0.095,-0.215,0.82,0.0,-0.193,0.815,0.005,-0.198,0.8,0.012,-0.21,0.82,0.03,-0.19,0.82,0.03,-0.2,0.835,0.039,-0.212,0.8,0.05,-0.188,0.8,0.05,-0.2,0.807,0.057,-0.2,0.793,0.035,-0.2,0.774,0.076,-0.212,0.78,0.07,-0.188,0.78,0.07,-0.2,0.785,0.075,-0.2,0.77,0.062,-0.215,0.793,-0.015,-0.187,0.793,-0.015,-0.2,0.793,-0.005,-0.215,0.788,-0.04,-0.187,0.788,-0.04,-0.215,0.793,-0.065,-0.187,0.793,-0.065,-0.21,0.79,-0.085,-0.19,0.79,-0.085,-0.2,0.79,-0.095,-0.19,0.77,-0.0275,-0.19,0.77,-0.0525,-0.19,0.78,-0.0775,-0.212,0.745,-0.015,-0.188,0.745,-0.02,-0.2,0.745,-0.0255,-0.2,0.745,-0.0045,-0.211,0.72,-0.015,-0.189,0.72,-0.015,-0.2,0.72,-0.0252,-0.2,0.72,-0.0048,-0.21,0.695,-0.015,-0.19,0.695,-0.015,-0.2,0.695,-0.025,-0.2,0.695,-0.005,-0.2,0.685,-0.015,-0.215,0.74,-0.04,-0.185,0.74,-0.04,-0.2,0.74,-0.055,-0.2,0.74,-0.025,-0.21,0.7142,-0.04,-0.19,0.7142,-0.04,-0.2,0.7142,-0.053,-0.2,0.7142,-0.027,-0.21,0.68,-0.04,-0.19,0.68,-0.04,-0.2,0.68,-0.05,-0.2,0.68,-0.03,-0.2,0.67,-0.04,-0.212,0.74,-0.065,-0.188,0.74,-0.065,-0.2,0.74,-0.0756,-0.2,0.74,-0.0542,-0.21,0.7177,-0.065,-0.19,0.7177,-0.065,-0.2,0.7177,-0.0751,-0.2,0.7177,-0.0549,-0.21,0.695,-0.065,-0.19,0.695,-0.065,-0.2,0.695,-0.075,-0.2,0.695,-0.055,-0.2,0.685,-0.065,-0.211,0.755,-0.085,-0.189,0.755,-0.085,-0.2,0.755,-0.0952,-0.2,0.755,-0.0748,-0.21,0.735,-0.085,-0.19,0.735,-0.085,-0.2,0.735,-0.0951,-0.2,0.735,-0.0749,-0.21,0.72,-0.085,-0.19,0.72,-0.085,-0.2,0.72,-0.095,-0.2,0.72,-0.075,-0.2,0.71,-0.085,0.115,0.466,0.06,0.115,0.466,-0.055,0.15,0.466,0.0,0.05,0.466,0.0,0.17,0.3,0.0,0.06,0.3,0.0,0.1,0.3,-0.05,0.1,0.3,0.05,0.15,0.07,0.0,0.085,0.086,0.0125,0.115,0.069,-0.045,0.117,0.0975,0.0615,0.1375,0.006,-0.03,0.095,0.006,-0.03,0.115,0.015,-0.045,0.115,0.06,0.1,0.115,0.0,0.07,0.165,0.0,0.07,0.095,0.0,0.07,0.115,0.04,0.13,0.125,0.0,0.12,0.165,0.0,0.12,0.087,0.0,0.122,0.09,0.012,0.188,0.11,0.011,0.19,0.128,0.011,0.185,0.142,0.011,0.178,0.154,0.01,0.168,-0.115,0.466,0.06,-0.115,0.466,-0.055,-0.17,0.466,0.0,-0.05,0.466,0.0,-0.17,0.3,0.0,-0.06,0.3,0.0,-0.1,0.3,-0.05,-0.1,0.3,0.05,-0.15,0.07,0.0,-0.085,0.086,0.0125,-0.115,0.069,-0.045,-0.117,0.0975,0.0615,-0.1375,0.006,-0.03,-0.095,0.006,-0.03,-0.095,0.006,-0.03,-0.115,0.06,0.1,-0.115,0.0,0.07,-0.165,0.0,0.07,-0.095,0.0,0.07,-0.115,0.04,0.13,-0.125,0.0,0.12,-0.165,0.0,0.12,-0.087,0.0,0.122,-0.09,0.012,0.188,-0.11,0.011,0.19,-0.128,0.011,0.185,-0.142,0.011,0.178,-0.154,0.01,0.168}, 1170);
SoIndexedFaceSet138->setCoord(*SoCoordinate139);

SoTextureCoordinate* SoTextureCoordinate140 = new SoTextureCoordinate();
SoTextureCoordinate140->setPoint(new float[]{0.0,0.0,0.5,0.5,0.5,0.0,0.0,0.5}, 8);
SoIndexedFaceSet138->setTexCoord(*SoTextureCoordinate140);

SoShape133->setGeometry(*SoIndexedFaceSet138);

SoHAnimHumanoid30->setSkin(*SoShape133);

SoCoordinate* SoCoordinate141 = new SoCoordinate();
SoCoordinate141->setUSE(QString("Joe_SkinCoord"));
SoHAnimHumanoid30->setSkinCoord(*SoCoordinate141);

SoHAnimJoint* SoHAnimJoint142 = new SoHAnimJoint();
SoHAnimJoint142->setUSE(QString("Joe_humanoid_root"));
SoHAnimHumanoid30->setJoints(*SoHAnimJoint142);

SoHAnimJoint* SoHAnimJoint143 = new SoHAnimJoint();
SoHAnimJoint143->setUSE(QString("Joe_sacroiliac"));
SoHAnimHumanoid30->setJoints(*SoHAnimJoint143);

SoHAnimJoint* SoHAnimJoint144 = new SoHAnimJoint();
SoHAnimJoint144->setUSE(QString("Joe_skullbase"));
SoHAnimHumanoid30->setJoints(*SoHAnimJoint144);

SoHAnimJoint* SoHAnimJoint145 = new SoHAnimJoint();
SoHAnimJoint145->setUSE(QString("Joe_temporomandibular"));
SoHAnimHumanoid30->setJoints(*SoHAnimJoint145);

SoHAnimJoint* SoHAnimJoint146 = new SoHAnimJoint();
SoHAnimJoint146->setUSE(QString("Joe_vc1"));
SoHAnimHumanoid30->setJoints(*SoHAnimJoint146);

SoHAnimJoint* SoHAnimJoint147 = new SoHAnimJoint();
SoHAnimJoint147->setUSE(QString("Joe_vc2"));
SoHAnimHumanoid30->setJoints(*SoHAnimJoint147);

SoHAnimJoint* SoHAnimJoint148 = new SoHAnimJoint();
SoHAnimJoint148->setUSE(QString("Joe_vc3"));
SoHAnimHumanoid30->setJoints(*SoHAnimJoint148);

SoHAnimJoint* SoHAnimJoint149 = new SoHAnimJoint();
SoHAnimJoint149->setUSE(QString("Joe_vc4"));
SoHAnimHumanoid30->setJoints(*SoHAnimJoint149);

SoHAnimJoint* SoHAnimJoint150 = new SoHAnimJoint();
SoHAnimJoint150->setUSE(QString("Joe_vc5"));
SoHAnimHumanoid30->setJoints(*SoHAnimJoint150);

SoHAnimJoint* SoHAnimJoint151 = new SoHAnimJoint();
SoHAnimJoint151->setUSE(QString("Joe_vc6"));
SoHAnimHumanoid30->setJoints(*SoHAnimJoint151);

SoHAnimJoint* SoHAnimJoint152 = new SoHAnimJoint();
SoHAnimJoint152->setUSE(QString("Joe_vc7"));
SoHAnimHumanoid30->setJoints(*SoHAnimJoint152);

SoHAnimJoint* SoHAnimJoint153 = new SoHAnimJoint();
SoHAnimJoint153->setUSE(QString("Joe_vl1"));
SoHAnimHumanoid30->setJoints(*SoHAnimJoint153);

SoHAnimJoint* SoHAnimJoint154 = new SoHAnimJoint();
SoHAnimJoint154->setUSE(QString("Joe_vl2"));
SoHAnimHumanoid30->setJoints(*SoHAnimJoint154);

SoHAnimJoint* SoHAnimJoint155 = new SoHAnimJoint();
SoHAnimJoint155->setUSE(QString("Joe_vl3"));
SoHAnimHumanoid30->setJoints(*SoHAnimJoint155);

SoHAnimJoint* SoHAnimJoint156 = new SoHAnimJoint();
SoHAnimJoint156->setUSE(QString("Joe_vl4"));
SoHAnimHumanoid30->setJoints(*SoHAnimJoint156);

SoHAnimJoint* SoHAnimJoint157 = new SoHAnimJoint();
SoHAnimJoint157->setUSE(QString("Joe_vl5"));
SoHAnimHumanoid30->setJoints(*SoHAnimJoint157);

SoHAnimJoint* SoHAnimJoint158 = new SoHAnimJoint();
SoHAnimJoint158->setUSE(QString("Joe_vt1"));
SoHAnimHumanoid30->setJoints(*SoHAnimJoint158);

SoHAnimJoint* SoHAnimJoint159 = new SoHAnimJoint();
SoHAnimJoint159->setUSE(QString("Joe_vt10"));
SoHAnimHumanoid30->setJoints(*SoHAnimJoint159);

SoHAnimJoint* SoHAnimJoint160 = new SoHAnimJoint();
SoHAnimJoint160->setUSE(QString("Joe_vt11"));
SoHAnimHumanoid30->setJoints(*SoHAnimJoint160);

SoHAnimJoint* SoHAnimJoint161 = new SoHAnimJoint();
SoHAnimJoint161->setUSE(QString("Joe_vt12"));
SoHAnimHumanoid30->setJoints(*SoHAnimJoint161);

SoHAnimJoint* SoHAnimJoint162 = new SoHAnimJoint();
SoHAnimJoint162->setUSE(QString("Joe_vt2"));
SoHAnimHumanoid30->setJoints(*SoHAnimJoint162);

SoHAnimJoint* SoHAnimJoint163 = new SoHAnimJoint();
SoHAnimJoint163->setUSE(QString("Joe_vt3"));
SoHAnimHumanoid30->setJoints(*SoHAnimJoint163);

SoHAnimJoint* SoHAnimJoint164 = new SoHAnimJoint();
SoHAnimJoint164->setUSE(QString("Joe_vt4"));
SoHAnimHumanoid30->setJoints(*SoHAnimJoint164);

SoHAnimJoint* SoHAnimJoint165 = new SoHAnimJoint();
SoHAnimJoint165->setUSE(QString("Joe_vt5"));
SoHAnimHumanoid30->setJoints(*SoHAnimJoint165);

SoHAnimJoint* SoHAnimJoint166 = new SoHAnimJoint();
SoHAnimJoint166->setUSE(QString("Joe_vt6"));
SoHAnimHumanoid30->setJoints(*SoHAnimJoint166);

SoHAnimJoint* SoHAnimJoint167 = new SoHAnimJoint();
SoHAnimJoint167->setUSE(QString("Joe_vt7"));
SoHAnimHumanoid30->setJoints(*SoHAnimJoint167);

SoHAnimJoint* SoHAnimJoint168 = new SoHAnimJoint();
SoHAnimJoint168->setUSE(QString("Joe_vt8"));
SoHAnimHumanoid30->setJoints(*SoHAnimJoint168);

SoHAnimJoint* SoHAnimJoint169 = new SoHAnimJoint();
SoHAnimJoint169->setUSE(QString("Joe_vt9"));
SoHAnimHumanoid30->setJoints(*SoHAnimJoint169);

SoHAnimJoint* SoHAnimJoint170 = new SoHAnimJoint();
SoHAnimJoint170->setUSE(QString("Joe_l_acromioclavicular"));
SoHAnimHumanoid30->setJoints(*SoHAnimJoint170);

SoHAnimJoint* SoHAnimJoint171 = new SoHAnimJoint();
SoHAnimJoint171->setUSE(QString("Joe_r_acromioclavicular"));
SoHAnimHumanoid30->setJoints(*SoHAnimJoint171);

SoHAnimJoint* SoHAnimJoint172 = new SoHAnimJoint();
SoHAnimJoint172->setUSE(QString("Joe_l_carpal_distal_interphalangeal_2"));
SoHAnimHumanoid30->setJoints(*SoHAnimJoint172);

SoHAnimJoint* SoHAnimJoint173 = new SoHAnimJoint();
SoHAnimJoint173->setUSE(QString("Joe_r_carpal_distal_interphalangeal_2"));
SoHAnimHumanoid30->setJoints(*SoHAnimJoint173);

SoHAnimJoint* SoHAnimJoint174 = new SoHAnimJoint();
SoHAnimJoint174->setUSE(QString("Joe_l_carpal_distal_interphalangeal_3"));
SoHAnimHumanoid30->setJoints(*SoHAnimJoint174);

SoHAnimJoint* SoHAnimJoint175 = new SoHAnimJoint();
SoHAnimJoint175->setUSE(QString("Joe_r_carpal_distal_interphalangeal_3"));
SoHAnimHumanoid30->setJoints(*SoHAnimJoint175);

SoHAnimJoint* SoHAnimJoint176 = new SoHAnimJoint();
SoHAnimJoint176->setUSE(QString("Joe_l_carpal_distal_interphalangeal_4"));
SoHAnimHumanoid30->setJoints(*SoHAnimJoint176);

SoHAnimJoint* SoHAnimJoint177 = new SoHAnimJoint();
SoHAnimJoint177->setUSE(QString("Joe_r_carpal_distal_interphalangeal_4"));
SoHAnimHumanoid30->setJoints(*SoHAnimJoint177);

SoHAnimJoint* SoHAnimJoint178 = new SoHAnimJoint();
SoHAnimJoint178->setUSE(QString("Joe_l_carpal_distal_interphalangeal_5"));
SoHAnimHumanoid30->setJoints(*SoHAnimJoint178);

SoHAnimJoint* SoHAnimJoint179 = new SoHAnimJoint();
SoHAnimJoint179->setUSE(QString("Joe_r_carpal_distal_interphalangeal_5"));
SoHAnimHumanoid30->setJoints(*SoHAnimJoint179);

SoHAnimJoint* SoHAnimJoint180 = new SoHAnimJoint();
SoHAnimJoint180->setUSE(QString("Joe_l_carpal_interphalangeal_1"));
SoHAnimHumanoid30->setJoints(*SoHAnimJoint180);

SoHAnimJoint* SoHAnimJoint181 = new SoHAnimJoint();
SoHAnimJoint181->setUSE(QString("Joe_r_carpal_interphalangeal_1"));
SoHAnimHumanoid30->setJoints(*SoHAnimJoint181);

SoHAnimJoint* SoHAnimJoint182 = new SoHAnimJoint();
SoHAnimJoint182->setUSE(QString("Joe_l_carpal_proximal_interphalangeal_2"));
SoHAnimHumanoid30->setJoints(*SoHAnimJoint182);

SoHAnimJoint* SoHAnimJoint183 = new SoHAnimJoint();
SoHAnimJoint183->setUSE(QString("Joe_r_carpal_proximal_interphalangeal_2"));
SoHAnimHumanoid30->setJoints(*SoHAnimJoint183);

SoHAnimJoint* SoHAnimJoint184 = new SoHAnimJoint();
SoHAnimJoint184->setUSE(QString("Joe_l_carpal_proximal_interphalangeal_3"));
SoHAnimHumanoid30->setJoints(*SoHAnimJoint184);

SoHAnimJoint* SoHAnimJoint185 = new SoHAnimJoint();
SoHAnimJoint185->setUSE(QString("Joe_r_carpal_proximal_interphalangeal_3"));
SoHAnimHumanoid30->setJoints(*SoHAnimJoint185);

SoHAnimJoint* SoHAnimJoint186 = new SoHAnimJoint();
SoHAnimJoint186->setUSE(QString("Joe_l_carpal_proximal_interphalangeal_4"));
SoHAnimHumanoid30->setJoints(*SoHAnimJoint186);

SoHAnimJoint* SoHAnimJoint187 = new SoHAnimJoint();
SoHAnimJoint187->setUSE(QString("Joe_r_carpal_proximal_interphalangeal_4"));
SoHAnimHumanoid30->setJoints(*SoHAnimJoint187);

SoHAnimJoint* SoHAnimJoint188 = new SoHAnimJoint();
SoHAnimJoint188->setUSE(QString("Joe_l_carpal_proximal_interphalangeal_5"));
SoHAnimHumanoid30->setJoints(*SoHAnimJoint188);

SoHAnimJoint* SoHAnimJoint189 = new SoHAnimJoint();
SoHAnimJoint189->setUSE(QString("Joe_r_carpal_proximal_interphalangeal_5"));
SoHAnimHumanoid30->setJoints(*SoHAnimJoint189);

SoHAnimJoint* SoHAnimJoint190 = new SoHAnimJoint();
SoHAnimJoint190->setUSE(QString("Joe_l_carpometacarpal_1"));
SoHAnimHumanoid30->setJoints(*SoHAnimJoint190);

SoHAnimJoint* SoHAnimJoint191 = new SoHAnimJoint();
SoHAnimJoint191->setUSE(QString("Joe_r_carpometacarpal_1"));
SoHAnimHumanoid30->setJoints(*SoHAnimJoint191);

SoHAnimJoint* SoHAnimJoint192 = new SoHAnimJoint();
SoHAnimJoint192->setUSE(QString("Joe_l_carpometacarpal_2"));
SoHAnimHumanoid30->setJoints(*SoHAnimJoint192);

SoHAnimJoint* SoHAnimJoint193 = new SoHAnimJoint();
SoHAnimJoint193->setUSE(QString("Joe_r_carpometacarpal_2"));
SoHAnimHumanoid30->setJoints(*SoHAnimJoint193);

SoHAnimJoint* SoHAnimJoint194 = new SoHAnimJoint();
SoHAnimJoint194->setUSE(QString("Joe_l_carpometacarpal_3"));
SoHAnimHumanoid30->setJoints(*SoHAnimJoint194);

SoHAnimJoint* SoHAnimJoint195 = new SoHAnimJoint();
SoHAnimJoint195->setUSE(QString("Joe_r_carpometacarpal_3"));
SoHAnimHumanoid30->setJoints(*SoHAnimJoint195);

SoHAnimJoint* SoHAnimJoint196 = new SoHAnimJoint();
SoHAnimJoint196->setUSE(QString("Joe_l_carpometacarpal_4"));
SoHAnimHumanoid30->setJoints(*SoHAnimJoint196);

SoHAnimJoint* SoHAnimJoint197 = new SoHAnimJoint();
SoHAnimJoint197->setUSE(QString("Joe_r_carpometacarpal_4"));
SoHAnimHumanoid30->setJoints(*SoHAnimJoint197);

SoHAnimJoint* SoHAnimJoint198 = new SoHAnimJoint();
SoHAnimJoint198->setUSE(QString("Joe_l_carpometacarpal_5"));
SoHAnimHumanoid30->setJoints(*SoHAnimJoint198);

SoHAnimJoint* SoHAnimJoint199 = new SoHAnimJoint();
SoHAnimJoint199->setUSE(QString("Joe_r_carpometacarpal_5"));
SoHAnimHumanoid30->setJoints(*SoHAnimJoint199);

SoHAnimJoint* SoHAnimJoint200 = new SoHAnimJoint();
SoHAnimJoint200->setUSE(QString("Joe_l_elbow"));
SoHAnimHumanoid30->setJoints(*SoHAnimJoint200);

SoHAnimJoint* SoHAnimJoint201 = new SoHAnimJoint();
SoHAnimJoint201->setUSE(QString("Joe_r_elbow"));
SoHAnimHumanoid30->setJoints(*SoHAnimJoint201);

SoHAnimJoint* SoHAnimJoint202 = new SoHAnimJoint();
SoHAnimJoint202->setUSE(QString("Joe_l_eyeball_joint"));
SoHAnimHumanoid30->setJoints(*SoHAnimJoint202);

SoHAnimJoint* SoHAnimJoint203 = new SoHAnimJoint();
SoHAnimJoint203->setUSE(QString("Joe_r_eyeball_joint"));
SoHAnimHumanoid30->setJoints(*SoHAnimJoint203);

SoHAnimJoint* SoHAnimJoint204 = new SoHAnimJoint();
SoHAnimJoint204->setUSE(QString("Joe_l_eyebrow_joint"));
SoHAnimHumanoid30->setJoints(*SoHAnimJoint204);

SoHAnimJoint* SoHAnimJoint205 = new SoHAnimJoint();
SoHAnimJoint205->setUSE(QString("Joe_r_eyebrow_joint"));
SoHAnimHumanoid30->setJoints(*SoHAnimJoint205);

SoHAnimJoint* SoHAnimJoint206 = new SoHAnimJoint();
SoHAnimJoint206->setUSE(QString("Joe_l_eyelid_joint"));
SoHAnimHumanoid30->setJoints(*SoHAnimJoint206);

SoHAnimJoint* SoHAnimJoint207 = new SoHAnimJoint();
SoHAnimJoint207->setUSE(QString("Joe_r_eyelid_joint"));
SoHAnimHumanoid30->setJoints(*SoHAnimJoint207);

SoHAnimJoint* SoHAnimJoint208 = new SoHAnimJoint();
SoHAnimJoint208->setUSE(QString("Joe_l_hip"));
SoHAnimHumanoid30->setJoints(*SoHAnimJoint208);

SoHAnimJoint* SoHAnimJoint209 = new SoHAnimJoint();
SoHAnimJoint209->setUSE(QString("Joe_r_hip"));
SoHAnimHumanoid30->setJoints(*SoHAnimJoint209);

SoHAnimJoint* SoHAnimJoint210 = new SoHAnimJoint();
SoHAnimJoint210->setUSE(QString("Joe_l_knee"));
SoHAnimHumanoid30->setJoints(*SoHAnimJoint210);

SoHAnimJoint* SoHAnimJoint211 = new SoHAnimJoint();
SoHAnimJoint211->setUSE(QString("Joe_r_knee"));
SoHAnimHumanoid30->setJoints(*SoHAnimJoint211);

SoHAnimJoint* SoHAnimJoint212 = new SoHAnimJoint();
SoHAnimJoint212->setUSE(QString("Joe_l_metacarpophalangeal_1"));
SoHAnimHumanoid30->setJoints(*SoHAnimJoint212);

SoHAnimJoint* SoHAnimJoint213 = new SoHAnimJoint();
SoHAnimJoint213->setUSE(QString("Joe_r_metacarpophalangeal_1"));
SoHAnimHumanoid30->setJoints(*SoHAnimJoint213);

SoHAnimJoint* SoHAnimJoint214 = new SoHAnimJoint();
SoHAnimJoint214->setUSE(QString("Joe_l_metacarpophalangeal_2"));
SoHAnimHumanoid30->setJoints(*SoHAnimJoint214);

SoHAnimJoint* SoHAnimJoint215 = new SoHAnimJoint();
SoHAnimJoint215->setUSE(QString("Joe_r_metacarpophalangeal_2"));
SoHAnimHumanoid30->setJoints(*SoHAnimJoint215);

SoHAnimJoint* SoHAnimJoint216 = new SoHAnimJoint();
SoHAnimJoint216->setUSE(QString("Joe_l_metacarpophalangeal_3"));
SoHAnimHumanoid30->setJoints(*SoHAnimJoint216);

SoHAnimJoint* SoHAnimJoint217 = new SoHAnimJoint();
SoHAnimJoint217->setUSE(QString("Joe_r_metacarpophalangeal_3"));
SoHAnimHumanoid30->setJoints(*SoHAnimJoint217);

SoHAnimJoint* SoHAnimJoint218 = new SoHAnimJoint();
SoHAnimJoint218->setUSE(QString("Joe_l_metacarpophalangeal_4"));
SoHAnimHumanoid30->setJoints(*SoHAnimJoint218);

SoHAnimJoint* SoHAnimJoint219 = new SoHAnimJoint();
SoHAnimJoint219->setUSE(QString("Joe_r_metacarpophalangeal_4"));
SoHAnimHumanoid30->setJoints(*SoHAnimJoint219);

SoHAnimJoint* SoHAnimJoint220 = new SoHAnimJoint();
SoHAnimJoint220->setUSE(QString("Joe_l_metacarpophalangeal_5"));
SoHAnimHumanoid30->setJoints(*SoHAnimJoint220);

SoHAnimJoint* SoHAnimJoint221 = new SoHAnimJoint();
SoHAnimJoint221->setUSE(QString("Joe_r_metacarpophalangeal_5"));
SoHAnimHumanoid30->setJoints(*SoHAnimJoint221);

SoHAnimJoint* SoHAnimJoint222 = new SoHAnimJoint();
SoHAnimJoint222->setUSE(QString("Joe_l_metatarsophalangeal_2"));
SoHAnimHumanoid30->setJoints(*SoHAnimJoint222);

SoHAnimJoint* SoHAnimJoint223 = new SoHAnimJoint();
SoHAnimJoint223->setUSE(QString("Joe_r_metatarsophalangeal_2"));
SoHAnimHumanoid30->setJoints(*SoHAnimJoint223);

SoHAnimJoint* SoHAnimJoint224 = new SoHAnimJoint();
SoHAnimJoint224->setUSE(QString("Joe_l_radiocarpal"));
SoHAnimHumanoid30->setJoints(*SoHAnimJoint224);

SoHAnimJoint* SoHAnimJoint225 = new SoHAnimJoint();
SoHAnimJoint225->setUSE(QString("Joe_r_radiocarpal"));
SoHAnimHumanoid30->setJoints(*SoHAnimJoint225);

SoHAnimJoint* SoHAnimJoint226 = new SoHAnimJoint();
SoHAnimJoint226->setUSE(QString("Joe_l_shoulder"));
SoHAnimHumanoid30->setJoints(*SoHAnimJoint226);

SoHAnimJoint* SoHAnimJoint227 = new SoHAnimJoint();
SoHAnimJoint227->setUSE(QString("Joe_r_shoulder"));
SoHAnimHumanoid30->setJoints(*SoHAnimJoint227);

SoHAnimJoint* SoHAnimJoint228 = new SoHAnimJoint();
SoHAnimJoint228->setUSE(QString("Joe_l_sternoclavicular"));
SoHAnimHumanoid30->setJoints(*SoHAnimJoint228);

SoHAnimJoint* SoHAnimJoint229 = new SoHAnimJoint();
SoHAnimJoint229->setUSE(QString("Joe_r_sternoclavicular"));
SoHAnimHumanoid30->setJoints(*SoHAnimJoint229);

SoHAnimJoint* SoHAnimJoint230 = new SoHAnimJoint();
SoHAnimJoint230->setUSE(QString("Joe_l_talocrural"));
SoHAnimHumanoid30->setJoints(*SoHAnimJoint230);

SoHAnimJoint* SoHAnimJoint231 = new SoHAnimJoint();
SoHAnimJoint231->setUSE(QString("Joe_r_talocrural"));
SoHAnimHumanoid30->setJoints(*SoHAnimJoint231);

SoHAnimJoint* SoHAnimJoint232 = new SoHAnimJoint();
SoHAnimJoint232->setUSE(QString("Joe_l_tarsal_distal_interphalangeal_2"));
SoHAnimHumanoid30->setJoints(*SoHAnimJoint232);

SoHAnimJoint* SoHAnimJoint233 = new SoHAnimJoint();
SoHAnimJoint233->setUSE(QString("Joe_r_tarsal_distal_interphalangeal_2"));
SoHAnimHumanoid30->setJoints(*SoHAnimJoint233);

SoHAnimJoint* SoHAnimJoint234 = new SoHAnimJoint();
SoHAnimJoint234->setUSE(QString("Joe_l_tarsometatarsal_2"));
SoHAnimHumanoid30->setJoints(*SoHAnimJoint234);

SoHAnimJoint* SoHAnimJoint235 = new SoHAnimJoint();
SoHAnimJoint235->setUSE(QString("Joe_r_tarsometatarsal_2"));
SoHAnimHumanoid30->setJoints(*SoHAnimJoint235);

SoHAnimSegment* SoHAnimSegment236 = new SoHAnimSegment();
SoHAnimSegment236->setUSE(QString("Joe_sacrum"));
SoHAnimHumanoid30->setSegments(*SoHAnimSegment236);

SoHAnimSite* SoHAnimSite237 = new SoHAnimSite();
SoHAnimSite237->setUSE(QString("Joe_RootFront_view"));
SoHAnimHumanoid30->setSites(*SoHAnimSite237);

SoGroup29->addChild(*SoHAnimHumanoid30);

//expected best practice: EXPORT AS='fileName' for clarity
SoEXPORT* SoEXPORT238 = new SoEXPORT();
SoEXPORT238->setAS(QString("JoeKick"));
SoEXPORT238->setLocalDEF(QString("Joe_Kick"));
SoGroup29->addChild(*SoEXPORT238);

SoNode18->addChild(*SoGroup29);

SoSceneManager0->setSceneGraph(*SoNode18);

return 0;
}
