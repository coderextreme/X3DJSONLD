
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
//BS studio translation from .x3dv by Joe using BS Contact
Socomponent* Socomponent2 = new Socomponent();
Socomponent2->setName(QString("H-Anim"));
Socomponent2->setLevel(1);
Sohead1->addChild(*Socomponent2);

Someta* Someta3 = new Someta();
Someta3->setName(QString("title"));
Someta3->setContent(QString("JoeSkinTexcoordDisplacerKick.x3d"));
Sohead1->addMeta(*Someta3);

Someta* Someta4 = new Someta();
Someta4->setName(QString("info"));
Someta4->setContent(QString("Joe No Reservations 20200709 fix hier20161206 20161111 20160720 20121221 20040109 x3d/hanim"));
Sohead1->addMeta(*Someta4);

Someta* Someta5 = new Someta();
Someta5->setName(QString("description"));
Someta5->setContent(QString("The Joe model is a Humanoid with textured skin."));
Sohead1->addMeta(*Someta5);

Someta* Someta6 = new Someta();
Someta6->setName(QString("creator"));
Someta6->setContent(QString("Joe Williams"));
Sohead1->addMeta(*Someta6);

Someta* Someta7 = new Someta();
Someta7->setName(QString("created"));
Someta7->setContent(QString("9 January 2014"));
Sohead1->addMeta(*Someta7);

Someta* Someta8 = new Someta();
Someta8->setName(QString("translated"));
Someta8->setContent(QString("12 January 2017"));
Sohead1->addMeta(*Someta8);

Someta* Someta9 = new Someta();
Someta9->setName(QString("modified"));
Someta9->setContent(QString("09 July 2020"));
Sohead1->addMeta(*Someta9);

Someta* Someta10 = new Someta();
Someta10->setName(QString("TODO"));
Someta10->setContent(QString("Record information about skin coordinates (found in comment at end of scene) as a structured MetadataSet containing MetadataString nodes"));
Sohead1->addMeta(*Someta10);

Someta* Someta11 = new Someta();
Someta11->setName(QString("translators"));
Someta11->setContent(QString("Roy Walmsley and Don Brutzman"));
Sohead1->addMeta(*Someta11);

Someta* Someta12 = new Someta();
Someta12->setName(QString("identifier"));
Someta12->setContent(QString("https://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/JoeSkinTexcoordDisplacerKick.x3d"));
Sohead1->addMeta(*Someta12);

Someta* Someta13 = new Someta();
Someta13->setName(QString("generator"));
Someta13->setContent(QString("X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit"));
Sohead1->addMeta(*Someta13);

Someta* Someta14 = new Someta();
Someta14->setName(QString("license"));
Someta14->setContent(QString("../license.html"));
Sohead1->addMeta(*Someta14);

SoSceneManager0->setHead(*Sohead1);

SoNode* SoNode15 = new SoNode();
SoWorldInfo* SoWorldInfo16 = new SoWorldInfo();
SoWorldInfo16->setInfo(new QString[]{QString("X3D Humanoid V1 LOA3 skeleton"), QString("skin from hanim sites, surface features, and some added points"), QString("390 points")}, 3);
SoWorldInfo16->setTitle(QString("X3D HANIM LOA3 Skeleton, 390 point Skin, texcoords, Displacer, teTrans for Joe_ by Joe"));
SoNode15->addChild(*SoWorldInfo16);

SoNavigationInfo* SoNavigationInfo17 = new SoNavigationInfo();
SoNavigationInfo17->setDEF(QString("Start_NavigationInfo"));
SoNavigationInfo17->setHeadlight(false);
SoNavigationInfo17->setSpeed(2.5);
SoNode15->addChild(*SoNavigationInfo17);

SoBackground* SoBackground18 = new SoBackground();
SoBackground18->setDEF(QString("blue_Background"));
SoNode15->addChild(*SoBackground18);

SoSpotLight* SoSpotLight19 = new SoSpotLight();
SoSpotLight19->setDEF(QString("light1"));
SoSpotLight19->setAmbientIntensity(0.7);
SoSpotLight19->setBeamWidth(1.5);
SoSpotLight19->setColor(new float[]{0.8,0.8,1.0});
SoSpotLight19->setCutOffAngle(0.6);
SoSpotLight19->setDirection(new float[]{0.0,0.0,0.0});
SoSpotLight19->setLocation(new float[]{0.0,3.0,3.0});
SoSpotLight19->setRadius(10);
SoNode15->addChild(*SoSpotLight19);

SoPointLight* SoPointLight20 = new SoPointLight();
SoPointLight20->setDEF(QString("light2"));
SoPointLight20->setAmbientIntensity(0.7);
SoPointLight20->setColor(new float[]{0.8,0.8,1.0});
SoPointLight20->setLocation(new float[]{0.0,10.0,-7.0});
SoNode15->addChild(*SoPointLight20);

//External from the Humanoid viewpoints
SoViewpoint* SoViewpoint21 = new SoViewpoint();
SoViewpoint21->setDEF(QString("Scene_InclinedView"));
SoViewpoint21->setCenterOfRotation(new float[]{0.0,0.85,0.0});
SoViewpoint21->setDescription(QString("Scene_Inclined View"));
SoViewpoint21->setOrientation(new float[]{-0.113,0.993,0.0347,0.671});
SoViewpoint21->setPosition(new float[]{1.62,1.05,3.06});
SoNode15->addChild(*SoViewpoint21);

SoViewpoint* SoViewpoint22 = new SoViewpoint();
SoViewpoint22->setDEF(QString("Scene_IFrontView"));
SoViewpoint22->setCenterOfRotation(new float[]{0.0,0.8,0.0});
SoViewpoint22->setDescription(QString("Scene_Front View"));
SoViewpoint22->setPosition(new float[]{0.0,0.8,2.58});
SoNode15->addChild(*SoViewpoint22);

SoViewpoint* SoViewpoint23 = new SoViewpoint();
SoViewpoint23->setDEF(QString("Scene_ISideView"));
SoViewpoint23->setCenterOfRotation(new float[]{0.0,0.8,0.0});
SoViewpoint23->setDescription(QString("Scene_Side View"));
SoViewpoint23->setOrientation(new float[]{0.0,1.0,0.0,1.5708});
SoViewpoint23->setPosition(new float[]{2.6,0.5,0.0});
SoNode15->addChild(*SoViewpoint23);

SoViewpoint* SoViewpoint24 = new SoViewpoint();
SoViewpoint24->setDEF(QString("Scene_BackView"));
SoViewpoint24->setCenterOfRotation(new float[]{0.0,1.5,0.0});
SoViewpoint24->setDescription(QString("Scene_Back View"));
SoViewpoint24->setOrientation(new float[]{0.0,1.0,0.0,3.14});
SoViewpoint24->setPosition(new float[]{0.0,2.5,-3.0});
SoNode15->addChild(*SoViewpoint24);

SoViewpoint* SoViewpoint25 = new SoViewpoint();
SoViewpoint25->setDEF(QString("Scene_TopView"));
SoViewpoint25->setCenterOfRotation(new float[]{0.0,1.5,0.0});
SoViewpoint25->setDescription(QString("Scene_Top View"));
SoViewpoint25->setOrientation(new float[]{1.0,0.0,0.0,-1.5708});
SoViewpoint25->setPosition(new float[]{0.0,3.5,0.0});
SoNode15->addChild(*SoViewpoint25);

SoGroup* SoGroup26 = new SoGroup();
SoGroup26->setDEF(QString("Joe_Humanoid"));
SoHAnimHumanoid* SoHAnimHumanoid27 = new SoHAnimHumanoid();
SoHAnimHumanoid27->X3DNode::setName(QString("Human"));
SoHAnimHumanoid27->setDEF(QString("Joe_Human"));
SoHAnimHumanoid27->setVersion(QString("2.0"));
SoHAnimJoint* SoHAnimJoint28 = new SoHAnimJoint();
SoHAnimJoint28->X3DNode::setName(QString("HumanoidRoot"));
SoHAnimJoint28->setDEF(QString("Joe_HumanoidRoot"));
SoHAnimJoint28->setCenter(new float[]{0.0,0.875,0.0});
SoHAnimJoint28->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint28->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment29 = new SoHAnimSegment();
SoHAnimSegment29->X3DNode::setName(QString("sacrum"));
SoHAnimSegment29->setDEF(QString("Joe_sacrum"));
SoHAnimSite* SoHAnimSite30 = new SoHAnimSite();
SoHAnimSite30->X3DNode::setName(QString("RootFront"));
SoHAnimSite30->setDEF(QString("Joe_RootFront"));
SoTransform* SoTransform31 = new SoTransform();
SoTransform31->setDEF(QString("hanimcordsys"));
SoTransform31->setScale(new float[]{0.175,0.175,0.175});
SoViewpoint* SoViewpoint32 = new SoViewpoint();
SoViewpoint32->setDEF(QString("ViewBodyRootAxes"));
SoViewpoint32->setDescription(QString("Joe_HAnim Root Coordinate Axes View"));
SoTransform31->addChild(*SoViewpoint32);

SoShape* SoShape33 = new SoShape();
SoShape33->setDEF(QString("AxisLinesShape"));
SoIndexedLineSet* SoIndexedLineSet34 = new SoIndexedLineSet();
SoIndexedLineSet34->setColorIndex(new int[]{0,1,2}, 3);
SoIndexedLineSet34->setColorPerVertex(false);
SoIndexedLineSet34->setCoordIndex(new int32_t[]{0,1,-1,0,2,-1,0,3,-1}, 9);
SoCoordinate* SoCoordinate35 = new SoCoordinate();
SoCoordinate35->setPoint(new float[]{0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0}, 12);
SoIndexedLineSet34->setCoord(*SoCoordinate35);

SoColor* SoColor36 = new SoColor();
SoColor36->setColor(new float[]{1.0,0.0,0.0,0.0,0.6,0.0,0.0,0.0,1.0}, 9);
SoIndexedLineSet34->setColor(*SoColor36);

SoShape33->setGeometry(*SoIndexedLineSet34);

SoTransform31->addChild(*SoShape33);

SoHAnimSite30->addChild(*SoTransform31);

SoHAnimSegment29->addChild(*SoHAnimSite30);

SoHAnimJoint28->addChildren(*SoHAnimSegment29);

SoHAnimJoint* SoHAnimJoint37 = new SoHAnimJoint();
SoHAnimJoint37->X3DNode::setName(QString("sacroiliac"));
SoHAnimJoint37->setDEF(QString("Joe_sacroiliac"));
SoHAnimJoint37->setCenter(new float[]{0.0,0.92,0.0});
SoHAnimJoint37->setSkinCoordIndex(new int32_t[]{17,19,20,21,22,23,26,27,73,82,89,91,93}, 13);
SoHAnimJoint37->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,0.35,0.35,1.0}, 13);
SoHAnimJoint37->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint37->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint38 = new SoHAnimJoint();
SoHAnimJoint38->X3DNode::setName(QString("l_hip"));
SoHAnimJoint38->setDEF(QString("Joe_l_hip"));
SoHAnimJoint38->setCenter(new float[]{0.1,0.92,0.0});
SoHAnimJoint38->setSkinCoordIndex(new int32_t[]{89,90,94,95,96,97}, 6);
SoHAnimJoint38->setSkinCoordWeight(new float[]{0.65,1.0,1.0,1.0,1.0,1.0}, 6);
SoHAnimJoint38->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint38->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint39 = new SoHAnimJoint();
SoHAnimJoint39->X3DNode::setName(QString("l_knee"));
SoHAnimJoint39->setDEF(QString("Joe_l_knee"));
SoHAnimJoint39->setCenter(new float[]{0.115,0.466,0.0});
SoHAnimJoint39->setSkinCoordIndex(new int32_t[]{334,335,336,337,338,339,340,341}, 8);
SoHAnimJoint39->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 8);
SoHAnimJoint39->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint39->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint40 = new SoHAnimJoint();
SoHAnimJoint40->X3DNode::setName(QString("l_ankle"));
SoHAnimJoint40->setDEF(QString("Joe_l_ankle"));
SoHAnimJoint40->setCenter(new float[]{0.115,0.069,0.0});
SoHAnimJoint40->setSkinCoordIndex(new int32_t[]{342,343,344,345}, 4);
SoHAnimJoint40->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0}, 4);
SoHAnimJoint40->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint40->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint41 = new SoHAnimJoint();
SoHAnimJoint41->X3DNode::setName(QString("l_subtalar"));
SoHAnimJoint41->setDEF(QString("Joe_l_subtalar"));
SoHAnimJoint41->setCenter(new float[]{0.115,0.031,0.03});
SoHAnimJoint41->setSkinCoordIndex(new int32_t[]{346,347,348,71}, 4);
SoHAnimJoint41->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0}, 4);
SoHAnimJoint41->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint41->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint42 = new SoHAnimJoint();
SoHAnimJoint42->X3DNode::setName(QString("l_midtarsal"));
SoHAnimJoint42->setDEF(QString("Joe_l_midtarsal"));
SoHAnimJoint42->setCenter(new float[]{0.115,0.037,0.09});
SoHAnimJoint42->setSkinCoordIndex(new int32_t[]{349,350,351,352}, 4);
SoHAnimJoint42->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0}, 4);
SoHAnimJoint42->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint42->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint43 = new SoHAnimJoint();
SoHAnimJoint43->X3DNode::setName(QString("l_metatarsal"));
SoHAnimJoint43->setDEF(QString("Joe_l_metatarsal"));
SoHAnimJoint43->setCenter(new float[]{0.115,0.02,0.122});
SoHAnimJoint43->setSkinCoordIndex(new int32_t[]{353,354,355,356,357,358,359,360,361}, 9);
SoHAnimJoint43->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 9);
SoHAnimJoint43->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint43->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint42->addChildren(*SoHAnimJoint43);

SoHAnimJoint41->addChildren(*SoHAnimJoint42);

SoHAnimJoint40->addChildren(*SoHAnimJoint41);

SoHAnimJoint39->addChildren(*SoHAnimJoint40);

SoHAnimJoint38->addChildren(*SoHAnimJoint39);

SoHAnimJoint37->addChildren(*SoHAnimJoint38);

SoHAnimJoint* SoHAnimJoint44 = new SoHAnimJoint();
SoHAnimJoint44->X3DNode::setName(QString("r_hip"));
SoHAnimJoint44->setDEF(QString("Joe_r_hip"));
SoHAnimJoint44->setCenter(new float[]{-0.1,0.92,0.0});
SoHAnimJoint44->setSkinCoordIndex(new int32_t[]{91,92,98,99,100,101,362,363}, 8);
SoHAnimJoint44->setSkinCoordWeight(new float[]{0.65,1.0,0.8,1.0,1.0,1.0,0.4,0.8}, 8);
SoHAnimJoint44->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint44->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint45 = new SoHAnimJoint();
SoHAnimJoint45->X3DNode::setName(QString("r_knee"));
SoHAnimJoint45->setDEF(QString("Joe_r_knee"));
SoHAnimJoint45->setCenter(new float[]{-0.05,0.466,0.0});
SoHAnimJoint45->setSkinCoordIndex(new int32_t[]{362,363,364,365,366,367,368,369,98}, 9);
SoHAnimJoint45->setSkinCoordWeight(new float[]{0.6,0.2,1.0,1.0,1.0,1.0,1.0,1.0,0.2}, 9);
SoHAnimJoint45->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint45->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint46 = new SoHAnimJoint();
SoHAnimJoint46->X3DNode::setName(QString("r_ankle"));
SoHAnimJoint46->setDEF(QString("Joe_r_ankle"));
SoHAnimJoint46->setCenter(new float[]{-0.115,0.069,0.0});
SoHAnimJoint46->setSkinCoordIndex(new int32_t[]{370,371,372,373}, 4);
SoHAnimJoint46->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0}, 4);
SoHAnimJoint46->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint46->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint47 = new SoHAnimJoint();
SoHAnimJoint47->X3DNode::setName(QString("r_subtalar"));
SoHAnimJoint47->setDEF(QString("Joe_r_subtalar"));
SoHAnimJoint47->setCenter(new float[]{-0.1,0.015,-0.01});
SoHAnimJoint47->setSkinCoordIndex(new int32_t[]{374,375,376}, 3);
SoHAnimJoint47->setSkinCoordWeight(new float[]{1.0,1.0,1.0}, 3);
SoHAnimJoint47->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint47->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint48 = new SoHAnimJoint();
SoHAnimJoint48->X3DNode::setName(QString("r_midtarsal"));
SoHAnimJoint48->setDEF(QString("Joe_r_midtarsal"));
SoHAnimJoint48->setCenter(new float[]{-0.115,0.037,0.09});
SoHAnimJoint48->setSkinCoordIndex(new int32_t[]{377,378,379,380}, 4);
SoHAnimJoint48->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0}, 4);
SoHAnimJoint48->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint48->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint49 = new SoHAnimJoint();
SoHAnimJoint49->X3DNode::setName(QString("r_metatarsal"));
SoHAnimJoint49->setDEF(QString("Joe_r_metatarsal"));
SoHAnimJoint49->setCenter(new float[]{-0.1,0.01,0.14});
SoHAnimJoint49->setSkinCoordIndex(new int32_t[]{381,382,383,384,385,386,387,388,389}, 9);
SoHAnimJoint49->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 9);
SoHAnimJoint49->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint49->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint48->addChildren(*SoHAnimJoint49);

SoHAnimJoint47->addChildren(*SoHAnimJoint48);

SoHAnimJoint46->addChildren(*SoHAnimJoint47);

SoHAnimJoint45->addChildren(*SoHAnimJoint46);

SoHAnimJoint44->addChildren(*SoHAnimJoint45);

SoHAnimJoint37->addChildren(*SoHAnimJoint44);

SoHAnimJoint28->addChildren(*SoHAnimJoint37);

SoHAnimJoint* SoHAnimJoint50 = new SoHAnimJoint();
SoHAnimJoint50->X3DNode::setName(QString("vl5"));
SoHAnimJoint50->setDEF(QString("Joe_vl5"));
SoHAnimJoint50->setCenter(new float[]{0.0,1.045,-0.095});
SoHAnimJoint50->setSkinCoordIndex(new int32_t[]{28,76}, 2);
SoHAnimJoint50->setSkinCoordWeight(new float[]{1.0,1.0}, 2);
SoHAnimJoint50->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint50->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint51 = new SoHAnimJoint();
SoHAnimJoint51->X3DNode::setName(QString("vl4"));
SoHAnimJoint51->setDEF(QString("Joe_vl4"));
SoHAnimJoint51->setCenter(new float[]{0.0,1.068,-0.085});
SoHAnimJoint51->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint51->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint52 = new SoHAnimJoint();
SoHAnimJoint52->X3DNode::setName(QString("vl3"));
SoHAnimJoint52->setDEF(QString("Joe_vl3"));
SoHAnimJoint52->setCenter(new float[]{0.0,1.092,-0.0725});
SoHAnimJoint52->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint52->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint53 = new SoHAnimJoint();
SoHAnimJoint53->X3DNode::setName(QString("vl2"));
SoHAnimJoint53->setDEF(QString("Joe_vl2"));
SoHAnimJoint53->setCenter(new float[]{0.0,1.12,-0.065});
SoHAnimJoint53->setSkinCoordIndex(new int32_t[]{16,18,25,83,84,85,86,87,88}, 9);
SoHAnimJoint53->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,0.7,1.0,0.8}, 9);
SoHAnimJoint53->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint53->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint54 = new SoHAnimJoint();
SoHAnimJoint54->X3DNode::setName(QString("vl1"));
SoHAnimJoint54->setDEF(QString("Joe_vl1"));
SoHAnimJoint54->setCenter(new float[]{0.0,1.1459,-0.0625});
SoHAnimJoint54->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint54->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint55 = new SoHAnimJoint();
SoHAnimJoint55->X3DNode::setName(QString("vt12"));
SoHAnimJoint55->setDEF(QString("Joe_vt12"));
SoHAnimJoint55->setCenter(new float[]{0.0,1.179,-0.068});
SoHAnimJoint55->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint55->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint56 = new SoHAnimJoint();
SoHAnimJoint56->X3DNode::setName(QString("vt11"));
SoHAnimJoint56->setDEF(QString("Joe_vt11"));
SoHAnimJoint56->setCenter(new float[]{0.0,1.2679,-0.081});
SoHAnimJoint56->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint56->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint57 = new SoHAnimJoint();
SoHAnimJoint57->X3DNode::setName(QString("vt10"));
SoHAnimJoint57->setDEF(QString("Joe_vt10"));
SoHAnimJoint57->setCenter(new float[]{0.0,1.242,-0.09});
SoHAnimJoint57->setSkinCoordIndex(new int32_t[]{15}, 1);
SoHAnimJoint57->setSkinCoordWeight(new float[]{1.0}, 1);
SoHAnimJoint57->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint57->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint58 = new SoHAnimJoint();
SoHAnimJoint58->X3DNode::setName(QString("vt9"));
SoHAnimJoint58->setDEF(QString("Joe_vt9"));
SoHAnimJoint58->setCenter(new float[]{0.0,1.268,-0.1});
SoHAnimJoint58->setSkinCoordIndex(new int32_t[]{13,14}, 2);
SoHAnimJoint58->setSkinCoordWeight(new float[]{1.0,1.0}, 2);
SoHAnimJoint58->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint58->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint59 = new SoHAnimJoint();
SoHAnimJoint59->X3DNode::setName(QString("vt8"));
SoHAnimJoint59->setDEF(QString("Joe_vt8"));
SoHAnimJoint59->setCenter(new float[]{0.0,1.294,-0.11});
SoHAnimJoint59->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint59->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint60 = new SoHAnimJoint();
SoHAnimJoint60->X3DNode::setName(QString("vt7"));
SoHAnimJoint60->setDEF(QString("Joe_vt7"));
SoHAnimJoint60->setCenter(new float[]{0.0,1.323,-0.1155});
SoHAnimJoint60->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint60->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint61 = new SoHAnimJoint();
SoHAnimJoint61->X3DNode::setName(QString("vt6"));
SoHAnimJoint61->setDEF(QString("Joe_vt6"));
SoHAnimJoint61->setCenter(new float[]{0.0,1.352,-0.12});
SoHAnimJoint61->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint61->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint62 = new SoHAnimJoint();
SoHAnimJoint62->X3DNode::setName(QString("vt5"));
SoHAnimJoint62->setDEF(QString("Joe_vt5"));
SoHAnimJoint62->setCenter(new float[]{0.0,1.381,-0.1235});
SoHAnimJoint62->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint62->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint63 = new SoHAnimJoint();
SoHAnimJoint63->X3DNode::setName(QString("vt4"));
SoHAnimJoint63->setDEF(QString("Joe_vt4"));
SoHAnimJoint63->setCenter(new float[]{0.0,1.41,-0.1235});
SoHAnimJoint63->setSkinCoordIndex(new int32_t[]{81}, 1);
SoHAnimJoint63->setSkinCoordWeight(new float[]{1.0}, 1);
SoHAnimJoint63->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint63->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint64 = new SoHAnimJoint();
SoHAnimJoint64->X3DNode::setName(QString("vt3"));
SoHAnimJoint64->setDEF(QString("Joe_vt3"));
SoHAnimJoint64->setCenter(new float[]{0.0,1.438,-0.12});
SoHAnimJoint64->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint64->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint65 = new SoHAnimJoint();
SoHAnimJoint65->X3DNode::setName(QString("vt2"));
SoHAnimJoint65->setDEF(QString("Joe_vt2"));
SoHAnimJoint65->setCenter(new float[]{0.0,1.468,-0.105});
SoHAnimJoint65->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint65->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint66 = new SoHAnimJoint();
SoHAnimJoint66->X3DNode::setName(QString("vt1"));
SoHAnimJoint66->setDEF(QString("Joe_vt1"));
SoHAnimJoint66->setCenter(new float[]{0.0,1.497,-0.09});
SoHAnimJoint66->setSkinCoordIndex(new int32_t[]{11,24}, 2);
SoHAnimJoint66->setSkinCoordWeight(new float[]{1.0,1.0}, 2);
SoHAnimJoint66->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint66->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint67 = new SoHAnimJoint();
SoHAnimJoint67->X3DNode::setName(QString("vc7"));
SoHAnimJoint67->setDEF(QString("Joe_vc7"));
SoHAnimJoint67->setCenter(new float[]{0.0,1.525,-0.072});
SoHAnimJoint67->setSkinCoordIndex(new int32_t[]{74,75}, 2);
SoHAnimJoint67->setSkinCoordWeight(new float[]{1.0,1.0}, 2);
SoHAnimJoint67->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint67->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint68 = new SoHAnimJoint();
SoHAnimJoint68->X3DNode::setName(QString("vc6"));
SoHAnimJoint68->setDEF(QString("Joe_vc6"));
SoHAnimJoint68->setCenter(new float[]{0.0,1.54,-0.05});
SoHAnimJoint68->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint68->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint69 = new SoHAnimJoint();
SoHAnimJoint69->X3DNode::setName(QString("vc5"));
SoHAnimJoint69->setDEF(QString("Joe_vc5"));
SoHAnimJoint69->setCenter(new float[]{0.0,1.552,-0.035});
SoHAnimJoint69->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint69->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint70 = new SoHAnimJoint();
SoHAnimJoint70->X3DNode::setName(QString("vc4"));
SoHAnimJoint70->setDEF(QString("Joe_vc4"));
SoHAnimJoint70->setCenter(new float[]{0.0,1.5675,-0.0256});
SoHAnimJoint70->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint70->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint71 = new SoHAnimJoint();
SoHAnimJoint71->X3DNode::setName(QString("vc3"));
SoHAnimJoint71->setDEF(QString("Joe_vc3"));
SoHAnimJoint71->setCenter(new float[]{0.0,1.58225,-0.0185});
SoHAnimJoint71->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint71->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint72 = new SoHAnimJoint();
SoHAnimJoint72->X3DNode::setName(QString("vc2"));
SoHAnimJoint72->setDEF(QString("Joe_vc2"));
SoHAnimJoint72->setCenter(new float[]{0.0,1.595,-0.0175});
SoHAnimJoint72->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint72->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint73 = new SoHAnimJoint();
SoHAnimJoint73->X3DNode::setName(QString("vc1"));
SoHAnimJoint73->setDEF(QString("Joe_vc1"));
SoHAnimJoint73->setCenter(new float[]{0.0,1.61,-0.015});
SoHAnimJoint73->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint73->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint74 = new SoHAnimJoint();
SoHAnimJoint74->X3DNode::setName(QString("skullbase"));
SoHAnimJoint74->setDEF(QString("Joe_skullbase"));
SoHAnimJoint74->setCenter(new float[]{0.0,1.63,-0.01});
SoHAnimJoint74->setSkinCoordIndex(new int32_t[]{0,1,2,3,4,5,6,7,8,9}, 10);
SoHAnimJoint74->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 10);
SoHAnimJoint74->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint74->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimDisplacer* SoHAnimDisplacer75 = new SoHAnimDisplacer();
SoHAnimDisplacer75->X3DNode::setName(QString("skull_tip_raiser_action"));
SoHAnimDisplacer75->setDEF(QString("Joe_skull_tipTest"));
SoHAnimDisplacer75->setCoordIndex(new int32_t[]{0,1,2,3,4,5,6,7,8,9}, 10);
SoHAnimDisplacer75->setDisplacements(new float[]{0.0,0.15,0.0,0.0,0.0,0.15,-0.1,0.0,0.15,0.1,0.0,0.05,0.0,-0.02,0.05,-0.15,0.0,0.0,-0.05,0.0,0.0,0.15,0.0,0.0,0.05,0.0,0.0,0.0,0.0,-0.15}, 30);
SoHAnimJoint74->setDisplacers(SoHAnimDisplacer75);

SoHAnimJoint* SoHAnimJoint76 = new SoHAnimJoint();
SoHAnimJoint76->X3DNode::setName(QString("l_eyelid_joint"));
SoHAnimJoint76->setDEF(QString("Joe_l_eyelid_joint"));
SoHAnimJoint76->setCenter(new float[]{0.034,1.659,0.06});
SoHAnimJoint76->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint76->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint74->addChildren(*SoHAnimJoint76);

SoHAnimJoint* SoHAnimJoint77 = new SoHAnimJoint();
SoHAnimJoint77->X3DNode::setName(QString("l_eyeball_joint"));
SoHAnimJoint77->setDEF(QString("Joe_l_eyeball_joint"));
SoHAnimJoint77->setCenter(new float[]{0.034,1.659,0.06});
SoHAnimJoint77->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint77->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint74->addChildren(*SoHAnimJoint77);

SoHAnimJoint* SoHAnimJoint78 = new SoHAnimJoint();
SoHAnimJoint78->X3DNode::setName(QString("l_eyebrow_joint"));
SoHAnimJoint78->setDEF(QString("Joe_l_eyebrow_joint"));
SoHAnimJoint78->setCenter(new float[]{0.034,1.659,0.06});
SoHAnimJoint78->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint78->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint74->addChildren(*SoHAnimJoint78);

SoHAnimJoint* SoHAnimJoint79 = new SoHAnimJoint();
SoHAnimJoint79->X3DNode::setName(QString("l_eyelid_joint"));
SoHAnimJoint79->setDEF(QString("Joe_r_eyelid_joint"));
SoHAnimJoint79->setCenter(new float[]{-0.034,1.659,0.06});
SoHAnimJoint79->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint79->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint74->addChildren(*SoHAnimJoint79);

SoHAnimJoint* SoHAnimJoint80 = new SoHAnimJoint();
SoHAnimJoint80->X3DNode::setName(QString("l_eyeball_joint"));
SoHAnimJoint80->setDEF(QString("Joe_r_eyeball_joint"));
SoHAnimJoint80->setCenter(new float[]{-0.034,1.659,0.06});
SoHAnimJoint80->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint80->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint74->addChildren(*SoHAnimJoint80);

SoHAnimJoint* SoHAnimJoint81 = new SoHAnimJoint();
SoHAnimJoint81->X3DNode::setName(QString("l_eyebrow_joint"));
SoHAnimJoint81->setDEF(QString("Joe_r_eyebrow_joint"));
SoHAnimJoint81->setCenter(new float[]{-0.034,1.659,0.06});
SoHAnimJoint81->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint81->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint74->addChildren(*SoHAnimJoint81);

SoHAnimJoint* SoHAnimJoint82 = new SoHAnimJoint();
SoHAnimJoint82->X3DNode::setName(QString("temporomandibular"));
SoHAnimJoint82->setDEF(QString("Joe_temporomandibular"));
SoHAnimJoint82->setCenter(new float[]{0.034,1.659,0.06});
SoHAnimJoint82->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint82->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint74->addChildren(*SoHAnimJoint82);

SoHAnimJoint73->addChildren(*SoHAnimJoint74);

SoHAnimJoint72->addChildren(*SoHAnimJoint73);

SoHAnimJoint71->addChildren(*SoHAnimJoint72);

SoHAnimJoint70->addChildren(*SoHAnimJoint71);

SoHAnimJoint69->addChildren(*SoHAnimJoint70);

SoHAnimJoint68->addChildren(*SoHAnimJoint69);

SoHAnimJoint67->addChildren(*SoHAnimJoint68);

SoHAnimJoint* SoHAnimJoint83 = new SoHAnimJoint();
SoHAnimJoint83->X3DNode::setName(QString("l_sternoclavicular"));
SoHAnimJoint83->setDEF(QString("Joe_l_sternoclavicular"));
SoHAnimJoint83->setCenter(new float[]{0.082,1.4488,-0.0353});
SoHAnimJoint83->setSkinCoordIndex(new int32_t[]{12}, 1);
SoHAnimJoint83->setSkinCoordWeight(new float[]{1.0}, 1);
SoHAnimJoint83->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint83->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint84 = new SoHAnimJoint();
SoHAnimJoint84->X3DNode::setName(QString("l_acromioclavicular"));
SoHAnimJoint84->setDEF(QString("Joe_l_acromioclavicular"));
SoHAnimJoint84->setCenter(new float[]{0.0962,1.4269,-0.0424});
SoHAnimJoint84->setSkinCoordIndex(new int32_t[]{79}, 1);
SoHAnimJoint84->setSkinCoordWeight(new float[]{1.0}, 1);
SoHAnimJoint84->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint84->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint85 = new SoHAnimJoint();
SoHAnimJoint85->X3DNode::setName(QString("l_shoulder"));
SoHAnimJoint85->setDEF(QString("Joe_l_shoulder"));
SoHAnimJoint85->setCenter(new float[]{0.2,1.44,-0.04});
SoHAnimJoint85->setSkinCoordIndex(new int32_t[]{41,42,44,80,102,103,104,105}, 8);
SoHAnimJoint85->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 8);
SoHAnimJoint85->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint85->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint86 = new SoHAnimJoint();
SoHAnimJoint86->X3DNode::setName(QString("l_elbow"));
SoHAnimJoint86->setDEF(QString("Joe_l_elbow"));
SoHAnimJoint86->setCenter(new float[]{0.2,1.1388,-0.04});
SoHAnimJoint86->setSkinCoordIndex(new int32_t[]{45,46,47,109,110,111,112,113,115,116,117,118}, 12);
SoHAnimJoint86->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 15);
SoHAnimJoint86->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint86->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint87 = new SoHAnimJoint();
SoHAnimJoint87->X3DNode::setName(QString("l_wrist"));
SoHAnimJoint87->setDEF(QString("Joe_l_wrist"));
SoHAnimJoint87->setCenter(new float[]{0.2,0.87,-0.04});
SoHAnimJoint87->setSkinCoordIndex(new int32_t[]{119,120,121,122,123,124,125,126}, 8);
SoHAnimJoint87->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 8);
SoHAnimJoint87->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint87->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint88 = new SoHAnimJoint();
SoHAnimJoint88->X3DNode::setName(QString("l_thumb1"));
SoHAnimJoint88->setDEF(QString("Joe_l_thumb1"));
SoHAnimJoint88->setCenter(new float[]{0.1924,0.8472,-0.0534});
SoHAnimJoint88->setSkinCoordIndex(new int32_t[]{127,128}, 2);
SoHAnimJoint88->setSkinCoordWeight(new float[]{1.0,1.0}, 2);
SoHAnimJoint88->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint88->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint89 = new SoHAnimJoint();
SoHAnimJoint89->X3DNode::setName(QString("l_thumb2"));
SoHAnimJoint89->setDEF(QString("Joe_l_thumb2"));
SoHAnimJoint89->setCenter(new float[]{0.1951,0.8226,0.0246});
SoHAnimJoint89->setSkinCoordIndex(new int32_t[]{138,139,140,141,142,143}, 6);
SoHAnimJoint89->setSkinCoordWeight(new float[]{0.5,0.5,0.5,1.0,1.0,1.0}, 6);
SoHAnimJoint89->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint89->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint90 = new SoHAnimJoint();
SoHAnimJoint90->X3DNode::setName(QString("l_thumb3"));
SoHAnimJoint90->setDEF(QString("Joe_l_thumb3"));
SoHAnimJoint90->setCenter(new float[]{0.1955,0.8159,0.0464});
SoHAnimJoint90->setSkinCoordIndex(new int32_t[]{144,145,146,147,148,149,150,151,152}, 9);
SoHAnimJoint90->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 9);
SoHAnimJoint90->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint90->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint89->addChildren(*SoHAnimJoint90);

SoHAnimJoint88->addChildren(*SoHAnimJoint89);

SoHAnimJoint87->addChildren(*SoHAnimJoint88);

SoHAnimJoint* SoHAnimJoint91 = new SoHAnimJoint();
SoHAnimJoint91->X3DNode::setName(QString("l_index0"));
SoHAnimJoint91->setDEF(QString("Joe_l_index0"));
SoHAnimJoint91->setCenter(new float[]{0.1983,0.8024,-0.028});
SoHAnimJoint91->setSkinCoordIndex(new int32_t[]{129,130}, 2);
SoHAnimJoint91->setSkinCoordWeight(new float[]{1.0,1.0}, 2);
SoHAnimJoint91->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint91->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint92 = new SoHAnimJoint();
SoHAnimJoint92->X3DNode::setName(QString("l_index1"));
SoHAnimJoint92->setDEF(QString("Joe_l_index1"));
SoHAnimJoint92->setCenter(new float[]{0.1983,0.7815,-0.028});
SoHAnimJoint92->setSkinCoordIndex(new int32_t[]{138,139,140,153,154,155,163}, 7);
SoHAnimJoint92->setSkinCoordWeight(new float[]{0.5,0.5,0.5,1.0,1.0,1.0,0.5}, 7);
SoHAnimJoint92->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint92->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint93 = new SoHAnimJoint();
SoHAnimJoint93->X3DNode::setName(QString("l_index2"));
SoHAnimJoint93->setDEF(QString("Joe_l_index2"));
SoHAnimJoint93->setCenter(new float[]{0.2017,0.7363,-0.0248});
SoHAnimJoint93->setSkinCoordIndex(new int32_t[]{166,167,168,169}, 4);
SoHAnimJoint93->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0}, 4);
SoHAnimJoint93->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint93->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint94 = new SoHAnimJoint();
SoHAnimJoint94->X3DNode::setName(QString("l_index3"));
SoHAnimJoint94->setDEF(QString("Joe_l_index3"));
SoHAnimJoint94->setCenter(new float[]{0.2028,0.7139,-0.0236});
SoHAnimJoint94->setSkinCoordIndex(new int32_t[]{170,171,172,173,174,175,176,177,178}, 9);
SoHAnimJoint94->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 9);
SoHAnimJoint94->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint94->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint93->addChildren(*SoHAnimJoint94);

SoHAnimJoint92->addChildren(*SoHAnimJoint93);

SoHAnimJoint91->addChildren(*SoHAnimJoint92);

SoHAnimJoint87->addChildren(*SoHAnimJoint91);

SoHAnimJoint* SoHAnimJoint95 = new SoHAnimJoint();
SoHAnimJoint95->X3DNode::setName(QString("l_middle0"));
SoHAnimJoint95->setDEF(QString("Joe_l_middle0"));
SoHAnimJoint95->setCenter(new float[]{0.1987,0.8029,-0.053});
SoHAnimJoint95->setSkinCoordIndex(new int32_t[]{131,132}, 2);
SoHAnimJoint95->setSkinCoordWeight(new float[]{1.0,1.0}, 2);
SoHAnimJoint95->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint95->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint96 = new SoHAnimJoint();
SoHAnimJoint96->X3DNode::setName(QString("l_middle1"));
SoHAnimJoint96->setDEF(QString("Joe_l_middle1"));
SoHAnimJoint96->setCenter(new float[]{0.1987,0.7818,-0.053});
SoHAnimJoint96->setSkinCoordIndex(new int32_t[]{156,157,163,164}, 4);
SoHAnimJoint96->setSkinCoordWeight(new float[]{1.0,1.0,0.5,0.5}, 4);
SoHAnimJoint96->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint96->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint97 = new SoHAnimJoint();
SoHAnimJoint97->X3DNode::setName(QString("l_middle2"));
SoHAnimJoint97->setDEF(QString("Joe_l_middle2"));
SoHAnimJoint97->setCenter(new float[]{0.2013,0.7273,-0.0503});
SoHAnimJoint97->setSkinCoordIndex(new int32_t[]{179,180,181,182}, 4);
SoHAnimJoint97->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0}, 4);
SoHAnimJoint97->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint97->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint98 = new SoHAnimJoint();
SoHAnimJoint98->X3DNode::setName(QString("l_middle3"));
SoHAnimJoint98->setDEF(QString("Joe_l_middle3"));
SoHAnimJoint98->setCenter(new float[]{0.2026,0.7011,-0.0494});
SoHAnimJoint98->setSkinCoordIndex(new int32_t[]{183,184,185,186,187,188,189,190,191}, 9);
SoHAnimJoint98->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 9);
SoHAnimJoint98->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint98->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint97->addChildren(*SoHAnimJoint98);

SoHAnimJoint96->addChildren(*SoHAnimJoint97);

SoHAnimJoint95->addChildren(*SoHAnimJoint96);

SoHAnimJoint87->addChildren(*SoHAnimJoint95);

SoHAnimJoint* SoHAnimJoint99 = new SoHAnimJoint();
SoHAnimJoint99->X3DNode::setName(QString("l_ring0"));
SoHAnimJoint99->setDEF(QString("Joe_l_ring0"));
SoHAnimJoint99->setCenter(new float[]{0.1956,0.8019,-0.0794});
SoHAnimJoint99->setSkinCoordIndex(new int32_t[]{133,134}, 2);
SoHAnimJoint99->setSkinCoordWeight(new float[]{1.0,1.0}, 2);
SoHAnimJoint99->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint99->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint100 = new SoHAnimJoint();
SoHAnimJoint100->X3DNode::setName(QString("l_ring1"));
SoHAnimJoint100->setDEF(QString("Joe_l_ring1"));
SoHAnimJoint100->setCenter(new float[]{0.1956,0.7815,-0.0794});
SoHAnimJoint100->setSkinCoordIndex(new int32_t[]{158,159,164,165}, 4);
SoHAnimJoint100->setSkinCoordWeight(new float[]{1.0,1.0,0.5,0.5}, 4);
SoHAnimJoint100->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint100->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint101 = new SoHAnimJoint();
SoHAnimJoint101->X3DNode::setName(QString("l_ring2"));
SoHAnimJoint101->setDEF(QString("Joe_l_ring2"));
SoHAnimJoint101->setCenter(new float[]{0.1973,0.7287,-0.0777});
SoHAnimJoint101->setSkinCoordIndex(new int32_t[]{192,193,194,195}, 4);
SoHAnimJoint101->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0}, 4);
SoHAnimJoint101->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint101->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint102 = new SoHAnimJoint();
SoHAnimJoint102->X3DNode::setName(QString("l_ring3"));
SoHAnimJoint102->setDEF(QString("Joe_l_ring3"));
SoHAnimJoint102->setCenter(new float[]{0.1983,0.7045,-0.0767});
SoHAnimJoint102->setSkinCoordIndex(new int32_t[]{196,197,198,199,200,201,202,203,204}, 9);
SoHAnimJoint102->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 9);
SoHAnimJoint102->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint102->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint101->addChildren(*SoHAnimJoint102);

SoHAnimJoint100->addChildren(*SoHAnimJoint101);

SoHAnimJoint99->addChildren(*SoHAnimJoint100);

SoHAnimJoint87->addChildren(*SoHAnimJoint99);

SoHAnimJoint* SoHAnimJoint103 = new SoHAnimJoint();
SoHAnimJoint103->X3DNode::setName(QString("l_pinky0"));
SoHAnimJoint103->setDEF(QString("Joe_l_pinky0"));
SoHAnimJoint103->setCenter(new float[]{0.1925,0.8066,-0.1036});
SoHAnimJoint103->setSkinCoordIndex(new int32_t[]{135,136,137,165}, 4);
SoHAnimJoint103->setSkinCoordWeight(new float[]{1.0,1.0,1.0,0.5}, 4);
SoHAnimJoint103->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint103->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint104 = new SoHAnimJoint();
SoHAnimJoint104->X3DNode::setName(QString("l_pinky1"));
SoHAnimJoint104->setDEF(QString("Joe_l_pinky1"));
SoHAnimJoint104->setCenter(new float[]{0.1925,0.7866,-0.1036});
SoHAnimJoint104->setSkinCoordIndex(new int32_t[]{160,161,162}, 3);
SoHAnimJoint104->setSkinCoordWeight(new float[]{1.0,1.0,1.0}, 3);
SoHAnimJoint104->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint104->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint105 = new SoHAnimJoint();
SoHAnimJoint105->X3DNode::setName(QString("l_pinky2"));
SoHAnimJoint105->setDEF(QString("Joe_l_pinky2"));
SoHAnimJoint105->setCenter(new float[]{0.1938,0.7452,-0.1024});
SoHAnimJoint105->setSkinCoordIndex(new int32_t[]{205,206,207,208}, 4);
SoHAnimJoint105->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0}, 4);
SoHAnimJoint105->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint105->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint106 = new SoHAnimJoint();
SoHAnimJoint106->X3DNode::setName(QString("l_pinky3"));
SoHAnimJoint106->setDEF(QString("Joe_l_pinky3"));
SoHAnimJoint106->setCenter(new float[]{0.1948,0.7277,-0.1017});
SoHAnimJoint106->setSkinCoordIndex(new int32_t[]{209,210,211,212,213,214,215,216,217}, 9);
SoHAnimJoint106->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 9);
SoHAnimJoint106->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint106->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint105->addChildren(*SoHAnimJoint106);

SoHAnimJoint104->addChildren(*SoHAnimJoint105);

SoHAnimJoint103->addChildren(*SoHAnimJoint104);

SoHAnimJoint87->addChildren(*SoHAnimJoint103);

SoHAnimJoint86->addChildren(*SoHAnimJoint87);

SoHAnimJoint85->addChildren(*SoHAnimJoint86);

SoHAnimJoint84->addChildren(*SoHAnimJoint85);

SoHAnimJoint83->addChildren(*SoHAnimJoint84);

SoHAnimJoint67->addChildren(*SoHAnimJoint83);

SoHAnimJoint* SoHAnimJoint107 = new SoHAnimJoint();
SoHAnimJoint107->X3DNode::setName(QString("r_sternoclavicular"));
SoHAnimJoint107->setDEF(QString("Joe_r_sternoclavicular"));
SoHAnimJoint107->setCenter(new float[]{-0.03,1.46,0.0});
SoHAnimJoint107->setSkinCoordIndex(new int32_t[]{10}, 1);
SoHAnimJoint107->setSkinCoordWeight(new float[]{1.0}, 1);
SoHAnimJoint107->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint107->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint108 = new SoHAnimJoint();
SoHAnimJoint108->X3DNode::setName(QString("r_acromioclavicular"));
SoHAnimJoint108->setDEF(QString("Joe_r_acromioclavicular"));
SoHAnimJoint108->setCenter(new float[]{-0.09,1.41,-0.11});
SoHAnimJoint108->setSkinCoordIndex(new int32_t[]{77,29}, 2);
SoHAnimJoint108->setSkinCoordWeight(new float[]{1.0,0.9}, 2);
SoHAnimJoint108->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint108->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint109 = new SoHAnimJoint();
SoHAnimJoint109->X3DNode::setName(QString("r_shoulder"));
SoHAnimJoint109->setDEF(QString("Joe_r_shoulder"));
SoHAnimJoint109->setCenter(new float[]{-0.2,1.44,-0.04});
SoHAnimJoint109->setSkinCoordIndex(new int32_t[]{29,30,32,78,218,219,220,221,86,88}, 10);
SoHAnimJoint109->setSkinCoordWeight(new float[]{0.1,1.0,1.0,1.0,1.0,1.0,1.0,1.0,0.3,0.2}, 10);
SoHAnimJoint109->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint109->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint110 = new SoHAnimJoint();
SoHAnimJoint110->X3DNode::setName(QString("r_elbow"));
SoHAnimJoint110->setDEF(QString("Joe_r_elbow"));
SoHAnimJoint110->setCenter(new float[]{-0.2,1.1388,-0.04});
SoHAnimJoint110->setSkinCoordIndex(new int32_t[]{33,34,35,225,226,227,228,229,231,232,233,234}, 12);
SoHAnimJoint110->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 12);
SoHAnimJoint110->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint110->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint111 = new SoHAnimJoint();
SoHAnimJoint111->X3DNode::setName(QString("r_wrist"));
SoHAnimJoint111->setDEF(QString("Joe_r_wrist"));
SoHAnimJoint111->setCenter(new float[]{-0.2,0.89,-0.04});
SoHAnimJoint111->setSkinCoordIndex(new int32_t[]{235,236,237,238,239,240,241,242}, 8);
SoHAnimJoint111->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 8);
SoHAnimJoint111->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint111->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint112 = new SoHAnimJoint();
SoHAnimJoint112->X3DNode::setName(QString("r_thumb1"));
SoHAnimJoint112->setDEF(QString("Joe_r_thumb1"));
SoHAnimJoint112->setCenter(new float[]{-0.2,0.85,0.0});
SoHAnimJoint112->setSkinCoordIndex(new int32_t[]{243,244}, 2);
SoHAnimJoint112->setSkinCoordWeight(new float[]{1.0,1.0}, 2);
SoHAnimJoint112->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint112->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint113 = new SoHAnimJoint();
SoHAnimJoint113->X3DNode::setName(QString("r_thumb2"));
SoHAnimJoint113->setDEF(QString("Joe_r_thumb2"));
SoHAnimJoint113->setCenter(new float[]{-0.2,0.82,0.03});
SoHAnimJoint113->setSkinCoordIndex(new int32_t[]{254,255,256,257,258,259}, 6);
SoHAnimJoint113->setSkinCoordWeight(new float[]{0.5,0.5,0.5,1.0,1.0,1.0}, 6);
SoHAnimJoint113->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint113->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint114 = new SoHAnimJoint();
SoHAnimJoint114->X3DNode::setName(QString("r_thumb3"));
SoHAnimJoint114->setDEF(QString("Joe_r_thumb3"));
SoHAnimJoint114->setCenter(new float[]{-0.2,0.8,0.05});
SoHAnimJoint114->setSkinCoordIndex(new int32_t[]{260,261,262,263,264,265,266,267,268}, 9);
SoHAnimJoint114->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 9);
SoHAnimJoint114->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint114->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint113->addChildren(*SoHAnimJoint114);

SoHAnimJoint112->addChildren(*SoHAnimJoint113);

SoHAnimJoint111->addChildren(*SoHAnimJoint112);

SoHAnimJoint* SoHAnimJoint115 = new SoHAnimJoint();
SoHAnimJoint115->X3DNode::setName(QString("r_index0"));
SoHAnimJoint115->setDEF(QString("Joe_r_index0"));
SoHAnimJoint115->setCenter(new float[]{-0.2,0.84,-0.015});
SoHAnimJoint115->setSkinCoordIndex(new int32_t[]{245,246}, 2);
SoHAnimJoint115->setSkinCoordWeight(new float[]{1.0,1.0}, 2);
SoHAnimJoint115->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint115->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint116 = new SoHAnimJoint();
SoHAnimJoint116->X3DNode::setName(QString("r_index1"));
SoHAnimJoint116->setDEF(QString("Joe_r_index1"));
SoHAnimJoint116->setCenter(new float[]{-0.2,0.793,-0.015});
SoHAnimJoint116->setSkinCoordIndex(new int32_t[]{254,255,256,269,270,271,279}, 7);
SoHAnimJoint116->setSkinCoordWeight(new float[]{0.5,0.5,0.5,1.0,1.0,1.0,0.5}, 7);
SoHAnimJoint116->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint116->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint117 = new SoHAnimJoint();
SoHAnimJoint117->X3DNode::setName(QString("r_index2"));
SoHAnimJoint117->setDEF(QString("Joe_r_index2"));
SoHAnimJoint117->setCenter(new float[]{-0.2,0.745,-0.015});
SoHAnimJoint117->setSkinCoordIndex(new int32_t[]{282,283,284,285}, 4);
SoHAnimJoint117->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0}, 4);
SoHAnimJoint117->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint117->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint118 = new SoHAnimJoint();
SoHAnimJoint118->X3DNode::setName(QString("r_index3"));
SoHAnimJoint118->setDEF(QString("Joe_r_index3"));
SoHAnimJoint118->setCenter(new float[]{-0.2,0.72,-0.015});
SoHAnimJoint118->setSkinCoordIndex(new int32_t[]{286,287,288,289,290,291,292,293,294}, 9);
SoHAnimJoint118->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 9);
SoHAnimJoint118->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint118->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint117->addChildren(*SoHAnimJoint118);

SoHAnimJoint116->addChildren(*SoHAnimJoint117);

SoHAnimJoint115->addChildren(*SoHAnimJoint116);

SoHAnimJoint111->addChildren(*SoHAnimJoint115);

SoHAnimJoint* SoHAnimJoint119 = new SoHAnimJoint();
SoHAnimJoint119->X3DNode::setName(QString("r_middle0"));
SoHAnimJoint119->setDEF(QString("Joe_r_middle0"));
SoHAnimJoint119->setCenter(new float[]{-0.2,0.835,-0.04});
SoHAnimJoint119->setSkinCoordIndex(new int32_t[]{247,248}, 2);
SoHAnimJoint119->setSkinCoordWeight(new float[]{1.0,1.0}, 2);
SoHAnimJoint119->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint119->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint120 = new SoHAnimJoint();
SoHAnimJoint120->X3DNode::setName(QString("r_middle1"));
SoHAnimJoint120->setDEF(QString("Joe_r_middle1"));
SoHAnimJoint120->setCenter(new float[]{-0.2,0.788,-0.04});
SoHAnimJoint120->setSkinCoordIndex(new int32_t[]{272,273,279,280}, 4);
SoHAnimJoint120->setSkinCoordWeight(new float[]{1.0,1.0,0.5,0.5}, 4);
SoHAnimJoint120->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint120->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint121 = new SoHAnimJoint();
SoHAnimJoint121->X3DNode::setName(QString("r_middle2"));
SoHAnimJoint121->setDEF(QString("Joe_r_middle2"));
SoHAnimJoint121->setCenter(new float[]{-0.2,0.74,-0.04});
SoHAnimJoint121->setSkinCoordIndex(new int32_t[]{295,296,297,298}, 4);
SoHAnimJoint121->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0}, 4);
SoHAnimJoint121->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint121->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint122 = new SoHAnimJoint();
SoHAnimJoint122->X3DNode::setName(QString("r_middle3"));
SoHAnimJoint122->setDEF(QString("Joe_r_middle3"));
SoHAnimJoint122->setCenter(new float[]{-0.2,0.7142,-0.04});
SoHAnimJoint122->setSkinCoordIndex(new int32_t[]{299,300,301,302,303,304,305,306,307}, 9);
SoHAnimJoint122->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 9);
SoHAnimJoint122->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint122->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint121->addChildren(*SoHAnimJoint122);

SoHAnimJoint120->addChildren(*SoHAnimJoint121);

SoHAnimJoint119->addChildren(*SoHAnimJoint120);

SoHAnimJoint111->addChildren(*SoHAnimJoint119);

SoHAnimJoint* SoHAnimJoint123 = new SoHAnimJoint();
SoHAnimJoint123->X3DNode::setName(QString("r_ring0"));
SoHAnimJoint123->setDEF(QString("Joe_r_ring0"));
SoHAnimJoint123->setCenter(new float[]{-0.2,0.835,-0.065});
SoHAnimJoint123->setSkinCoordIndex(new int32_t[]{249,250}, 2);
SoHAnimJoint123->setSkinCoordWeight(new float[]{1.0,1.0}, 2);
SoHAnimJoint123->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint123->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint124 = new SoHAnimJoint();
SoHAnimJoint124->X3DNode::setName(QString("r_ring1"));
SoHAnimJoint124->setDEF(QString("Joe_r_ring1"));
SoHAnimJoint124->setCenter(new float[]{-0.2,0.793,-0.065});
SoHAnimJoint124->setSkinCoordIndex(new int32_t[]{274,275,280,281}, 4);
SoHAnimJoint124->setSkinCoordWeight(new float[]{1.0,1.0,0.5,0.5}, 4);
SoHAnimJoint124->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint124->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint125 = new SoHAnimJoint();
SoHAnimJoint125->X3DNode::setName(QString("r_ring2"));
SoHAnimJoint125->setDEF(QString("Joe_r_ring2"));
SoHAnimJoint125->setCenter(new float[]{-0.2,0.74,-0.065});
SoHAnimJoint125->setSkinCoordIndex(new int32_t[]{308,309,310,311}, 4);
SoHAnimJoint125->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0}, 4);
SoHAnimJoint125->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint125->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint126 = new SoHAnimJoint();
SoHAnimJoint126->X3DNode::setName(QString("r_ring3"));
SoHAnimJoint126->setDEF(QString("Joe_r_ring3"));
SoHAnimJoint126->setCenter(new float[]{-0.2,0.7177,-0.065});
SoHAnimJoint126->setSkinCoordIndex(new int32_t[]{312,313,314,315,316,317,318,319,320}, 9);
SoHAnimJoint126->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 9);
SoHAnimJoint126->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint126->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint125->addChildren(*SoHAnimJoint126);

SoHAnimJoint124->addChildren(*SoHAnimJoint125);

SoHAnimJoint123->addChildren(*SoHAnimJoint124);

SoHAnimJoint111->addChildren(*SoHAnimJoint123);

SoHAnimJoint* SoHAnimJoint127 = new SoHAnimJoint();
SoHAnimJoint127->X3DNode::setName(QString("r_pinky0"));
SoHAnimJoint127->setDEF(QString("Joe_r_pinky0"));
SoHAnimJoint127->setCenter(new float[]{-0.2,0.84,-0.085});
SoHAnimJoint127->setSkinCoordIndex(new int32_t[]{251,252,253,281}, 4);
SoHAnimJoint127->setSkinCoordWeight(new float[]{1.0,1.0,1.0,0.5}, 4);
SoHAnimJoint127->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint127->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint128 = new SoHAnimJoint();
SoHAnimJoint128->X3DNode::setName(QString("r_pinky1"));
SoHAnimJoint128->setDEF(QString("Joe_r_pinky1"));
SoHAnimJoint128->setCenter(new float[]{-0.2,0.79,-0.085});
SoHAnimJoint128->setSkinCoordIndex(new int32_t[]{276,277,278}, 3);
SoHAnimJoint128->setSkinCoordWeight(new float[]{1.0,1.0,1.0}, 3);
SoHAnimJoint128->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint128->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint129 = new SoHAnimJoint();
SoHAnimJoint129->X3DNode::setName(QString("r_pinky2"));
SoHAnimJoint129->setDEF(QString("Joe_r_pinky2"));
SoHAnimJoint129->setCenter(new float[]{-0.2,0.755,-0.085});
SoHAnimJoint129->setSkinCoordIndex(new int32_t[]{321,322,323,324}, 4);
SoHAnimJoint129->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0}, 4);
SoHAnimJoint129->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint129->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint130 = new SoHAnimJoint();
SoHAnimJoint130->X3DNode::setName(QString("r_pinky3"));
SoHAnimJoint130->setDEF(QString("Joe_r_pinky3"));
SoHAnimJoint130->setCenter(new float[]{-0.2,0.735,-0.09});
SoHAnimJoint130->setSkinCoordIndex(new int32_t[]{325,326,327,328,329,330,331,332,333}, 9);
SoHAnimJoint130->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 9);
SoHAnimJoint130->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint130->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint129->addChildren(*SoHAnimJoint130);

SoHAnimJoint128->addChildren(*SoHAnimJoint129);

SoHAnimJoint127->addChildren(*SoHAnimJoint128);

SoHAnimJoint111->addChildren(*SoHAnimJoint127);

SoHAnimJoint110->addChildren(*SoHAnimJoint111);

SoHAnimJoint109->addChildren(*SoHAnimJoint110);

SoHAnimJoint108->addChildren(*SoHAnimJoint109);

SoHAnimJoint107->addChildren(*SoHAnimJoint108);

SoHAnimJoint67->addChildren(*SoHAnimJoint107);

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

SoHAnimJoint51->addChildren(*SoHAnimJoint52);

SoHAnimJoint50->addChildren(*SoHAnimJoint51);

SoHAnimJoint28->addChildren(*SoHAnimJoint50);

SoHAnimHumanoid27->setSkeleton(*SoHAnimJoint28);

SoShape* SoShape131 = new SoShape();
SoShape131->setDEF(QString("Joe_Shape"));
SoVRMLAppearance* SoVRMLAppearance132 = new SoVRMLAppearance();
SoVRMLAppearance132->setDEF(QString("Joe_skin_Appearance"));
SoMaterial* SoMaterial133 = new SoMaterial();
SoMaterial133->setDEF(QString("Joe_skin_Material"));
SoMaterial133->setDiffuseColor(new float[]{0.3,0.3,0.6});
SoMaterial133->setEmissiveColor(new float[]{0.3,0.3,0.6});
SoVRMLAppearance132->addChild(*SoMaterial133);

SoImageTexture* SoImageTexture134 = new SoImageTexture();
SoImageTexture134->setDEF(QString("JoeSkinImageTexture"));
SoImageTexture134->setUrl(new QString[]{QString("bodytexture28.png")}, 1);
SoVRMLAppearance132->addChild(*SoImageTexture134);

SoTextureTransform* SoTextureTransform135 = new SoTextureTransform();
SoTextureTransform135->setDEF(QString("kicktextrans"));
SoVRMLAppearance132->setTextureTransform(SoTextureTransform135);

SoShape131->addChild(*SoVRMLAppearance132);

SoIndexedFaceSet* SoIndexedFaceSet136 = new SoIndexedFaceSet();
SoIndexedFaceSet136->setDEF(QString("Joe_skin_IndexedFaceSet"));
SoIndexedFaceSet136->setCoordIndex(new int32_t[]{0,9,5,-1,0,7,9,-1,0,5,1,-1,1,5,2,-1,1,3,7,-1,2,4,3,-1,0,1,7,-1,1,2,3,-1,5,6,2,-1,7,3,8,-1,6,4,2,-1,3,4,8,-1,9,6,5,-1,9,7,8,-1,4,6,10,-1,4,10,12,-1,4,12,8,-1,10,11,12,-1,9,75,24,-1,9,24,74,-1,9,8,75,-1,9,74,6,-1,10,6,74,-1,12,75,8,-1,74,24,29,-1,24,77,29,-1,10,74,29,-1,77,32,29,-1,32,78,29,-1,78,30,29,-1,30,10,29,-1,41,24,75,-1,41,75,12,-1,41,12,42,-1,41,42,80,-1,41,80,44,-1,41,44,79,-1,41,79,24,-1,81,24,79,-1,81,77,24,-1,81,25,77,-1,81,79,25,-1,25,79,44,-1,25,32,77,-1,25,83,32,-1,25,26,83,-1,25,27,26,-1,25,84,27,-1,25,44,84,-1,11,10,30,-1,11,30,13,-1,11,13,15,-1,11,15,14,-1,11,14,42,-1,11,42,12,-1,15,13,16,-1,15,18,14,-1,15,16,76,-1,15,76,18,-1,76,16,17,-1,76,17,82,-1,76,82,19,-1,76,19,18,-1,22,18,19,-1,22,87,18,-1,22,27,84,-1,22,84,87,-1,87,84,85,-1,85,84,44,-1,85,42,14,-1,87,14,18,-1,87,85,14,-1,20,83,26,-1,20,17,16,-1,20,16,88,-1,20,88,83,-1,88,16,13,-1,88,13,86,-1,88,86,83,-1,86,13,30,-1,86,32,83,-1,23,89,22,-1,89,27,22,-1,89,91,27,-1,91,26,27,-1,91,20,26,-1,21,20,91,-1,21,17,20,-1,21,92,17,-1,82,17,92,-1,82,90,19,-1,23,22,19,-1,23,19,90,-1,82,92,101,-1,82,101,99,-1,82,99,93,-1,82,93,95,-1,82,95,97,-1,82,97,90,-1,23,90,97,-1,23,97,94,-1,23,94,89,-1,89,94,96,-1,89,96,95,-1,89,95,93,-1,89,93,91,-1,91,93,99,-1,91,99,100,-1,91,100,98,-1,21,91,98,-1,21,98,101,-1,21,101,92,-1,85,105,42,-1,85,103,105,-1,85,44,103,-1,103,44,104,-1,80,42,105,-1,80,105,102,-1,80,102,104,-1,80,104,44,-1,105,109,102,-1,102,109,47,-1,47,104,102,-1,104,47,45,-1,104,45,103,-1,103,45,46,-1,103,46,109,-1,103,109,105,-1,109,112,110,-1,109,110,47,-1,47,110,111,-1,47,111,45,-1,45,111,113,-1,113,46,45,-1,46,113,112,-1,112,109,46,-1,112,118,110,-1,110,118,115,-1,110,115,111,-1,111,115,117,-1,111,117,113,-1,113,117,116,-1,113,116,112,-1,112,116,118,-1,115,118,119,-1,119,118,122,-1,118,116,122,-1,122,116,120,-1,116,117,120,-1,120,117,121,-1,117,115,121,-1,115,119,121,-1,119,127,123,-1,119,122,127,-1,122,126,127,-1,122,128,126,-1,122,120,128,-1,120,124,128,-1,120,121,124,-1,121,125,124,-1,121,119,125,-1,119,123,125,-1,127,129,123,-1,127,126,129,-1,129,126,141,-1,141,126,143,-1,126,142,143,-1,126,128,142,-1,128,124,130,-1,142,128,130,-1,124,132,130,-1,124,134,132,-1,125,134,124,-1,125,136,134,-1,125,137,136,-1,125,135,137,-1,125,133,135,-1,125,123,133,-1,123,131,133,-1,123,129,131,-1,131,129,138,-1,129,141,138,-1,138,141,144,-1,141,143,144,-1,143,146,144,-1,142,146,143,-1,142,145,146,-1,139,145,142,-1,130,139,142,-1,139,130,132,-1,139,132,154,-1,132,157,154,-1,132,159,157,-1,132,134,159,-1,134,136,159,-1,136,161,159,-1,136,137,161,-1,137,162,161,-1,160,162,137,-1,135,160,137,-1,133,160,135,-1,133,158,160,-1,131,158,133,-1,156,158,131,-1,153,156,131,-1,131,138,153,-1,138,155,153,-1,140,155,138,-1,138,144,140,-1,144,147,140,-1,140,147,145,-1,140,145,139,-1,139,155,140,-1,154,155,139,-1,146,149,144,-1,146,151,149,-1,145,151,146,-1,150,151,145,-1,145,152,150,-1,147,152,145,-1,147,149,152,-1,147,144,149,-1,148,149,151,-1,148,152,149,-1,148,150,152,-1,148,151,150,-1,160,207,162,-1,160,205,207,-1,165,208,205,-1,160,165,205,-1,158,165,160,-1,161,162,207,-1,161,207,206,-1,165,206,208,-1,206,165,161,-1,161,165,159,-1,207,209,211,-1,205,209,207,-1,205,212,209,-1,205,208,212,-1,206,212,208,-1,206,210,212,-1,206,207,210,-1,207,211,210,-1,209,212,213,-1,212,216,213,-1,212,214,216,-1,210,214,212,-1,210,215,214,-1,210,211,215,-1,209,215,211,-1,209,213,215,-1,217,213,216,-1,217,215,213,-1,217,214,215,-1,217,216,214,-1,158,194,165,-1,192,194,158,-1,164,195,192,-1,158,164,192,-1,156,164,158,-1,159,194,165,-1,159,194,193,-1,159,193,195,-1,159,195,164,-1,159,164,157,-1,157,164,180,-1,192,198,194,-1,192,196,198,-1,192,195,196,-1,195,199,196,-1,196,199,200,-1,199,203,200,-1,193,199,195,-1,193,197,199,-1,193,198,197,-1,193,194,198,-1,199,201,203,-1,197,201,199,-1,197,198,201,-1,198,202,201,-1,196,202,198,-1,200,202,196,-1,204,202,200,-1,204,201,202,-1,204,203,201,-1,204,200,203,-1,156,181,164,-1,156,179,181,-1,156,182,179,-1,156,163,182,-1,163,180,182,-1,157,180,163,-1,164,181,180,-1,179,182,183,-1,182,186,183,-1,182,184,186,-1,180,184,182,-1,180,181,184,-1,181,185,184,-1,179,185,181,-1,183,185,179,-1,183,186,187,-1,186,190,187,-1,184,190,186,-1,184,188,190,-1,184,185,188,-1,185,189,188,-1,185,183,189,-1,183,187,189,-1,191,189,187,-1,191,188,189,-1,191,190,188,-1,191,187,190,-1,153,163,156,-1,153,168,163,-1,153,166,168,-1,153,169,166,-1,155,169,153,-1,155,167,169,-1,154,167,155,-1,154,163,167,-1,154,157,163,-1,163,168,167,-1,166,169,170,-1,169,173,170,-1,169,171,173,-1,169,167,171,-1,167,168,171,-1,168,172,171,-1,168,170,172,-1,170,168,166,-1,170,173,174,-1,173,177,174,-1,173,175,177,-1,173,171,175,-1,171,172,175,-1,172,176,175,-1,172,174,176,-1,170,174,172,-1,178,176,174,-1,178,175,176,-1,178,177,175,-1,178,174,177,-1,86,30,221,-1,86,221,219,-1,86,219,32,-1,32,219,220,-1,78,32,220,-1,78,220,218,-1,78,218,221,-1,78,221,30,-1,221,225,219,-1,219,225,35,-1,35,33,219,-1,33,220,219,-1,33,34,220,-1,220,34,218,-1,221,218,34,-1,34,225,221,-1,225,226,228,-1,225,228,35,-1,35,228,229,-1,35,229,33,-1,33,229,227,-1,33,227,34,-1,34,227,226,-1,34,226,225,-1,226,234,228,-1,228,234,232,-1,232,229,228,-1,232,233,229,-1,229,233,227,-1,227,233,231,-1,227,231,226,-1,226,231,234,-1,231,235,234,-1,235,238,234,-1,234,238,232,-1,238,236,232,-1,232,236,233,-1,236,237,233,-1,233,237,231,-1,231,237,235,-1,235,239,243,-1,235,243,238,-1,238,243,242,-1,238,242,244,-1,238,244,236,-1,236,244,240,-1,236,240,237,-1,237,240,241,-1,237,241,235,-1,235,241,239,-1,243,239,245,-1,243,245,242,-1,245,257,242,-1,257,259,242,-1,242,259,258,-1,242,258,244,-1,244,246,240,-1,258,246,244,-1,240,246,248,-1,240,248,250,-1,241,240,250,-1,241,250,252,-1,241,252,253,-1,241,253,251,-1,241,251,249,-1,241,249,239,-1,239,249,247,-1,239,247,245,-1,247,254,245,-1,245,254,257,-1,254,260,257,-1,257,260,259,-1,259,260,262,-1,258,259,262,-1,258,262,261,-1,255,258,261,-1,246,258,255,-1,255,248,246,-1,255,270,248,-1,248,270,273,-1,248,273,275,-1,248,275,250,-1,250,275,252,-1,252,275,277,-1,252,277,253,-1,253,277,278,-1,276,253,278,-1,251,253,276,-1,249,251,276,-1,249,276,274,-1,247,249,274,-1,272,247,274,-1,269,247,272,-1,247,269,254,-1,254,269,271,-1,256,254,271,-1,254,256,260,-1,260,256,263,-1,256,261,263,-1,256,255,261,-1,255,256,271,-1,270,255,271,-1,262,260,265,-1,262,265,267,-1,261,262,267,-1,266,261,267,-1,261,266,268,-1,263,261,268,-1,263,268,265,-1,263,265,260,-1,264,267,265,-1,264,265,268,-1,264,268,266,-1,264,266,267,-1,276,278,323,-1,276,323,321,-1,281,321,324,-1,276,321,281,-1,274,276,281,-1,277,323,278,-1,277,322,323,-1,281,324,322,-1,322,277,281,-1,277,275,281,-1,323,327,325,-1,321,323,325,-1,321,325,328,-1,321,328,324,-1,322,324,328,-1,322,328,326,-1,322,326,323,-1,323,326,327,-1,325,329,328,-1,328,329,332,-1,328,332,330,-1,326,328,330,-1,326,330,331,-1,326,331,327,-1,325,327,331,-1,325,331,329,-1,333,332,329,-1,333,329,331,-1,333,331,330,-1,333,330,332,-1,274,281,310,-1,308,274,310,-1,280,308,311,-1,274,308,280,-1,272,274,280,-1,275,310,281,-1,275,309,310,-1,275,311,309,-1,275,280,311,-1,275,273,280,-1,273,296,280,-1,308,310,314,-1,308,314,312,-1,308,312,311,-1,311,312,315,-1,312,316,315,-1,315,316,319,-1,309,311,315,-1,309,315,313,-1,309,313,314,-1,309,314,310,-1,315,319,317,-1,313,315,317,-1,313,317,314,-1,314,317,318,-1,312,314,318,-1,316,312,318,-1,320,316,318,-1,320,318,317,-1,320,317,319,-1,320,319,316,-1,272,280,297,-1,272,297,295,-1,272,295,298,-1,272,298,279,-1,279,298,296,-1,273,279,296,-1,280,296,297,-1,295,299,298,-1,298,299,302,-1,298,302,300,-1,296,298,300,-1,296,300,297,-1,297,300,301,-1,295,297,301,-1,299,295,301,-1,299,303,302,-1,302,303,306,-1,300,302,306,-1,300,306,304,-1,300,304,301,-1,301,304,305,-1,301,305,299,-1,299,305,303,-1,307,303,305,-1,307,305,304,-1,307,304,306,-1,307,306,303,-1,269,272,279,-1,269,279,284,-1,269,284,282,-1,269,282,285,-1,271,269,285,-1,271,285,283,-1,270,271,283,-1,270,283,279,-1,270,279,273,-1,279,283,284,-1,282,286,285,-1,285,286,289,-1,285,289,287,-1,285,287,283,-1,283,287,284,-1,284,287,288,-1,284,288,286,-1,286,282,284,-1,286,290,289,-1,289,290,293,-1,289,293,291,-1,289,291,287,-1,287,291,288,-1,288,291,292,-1,288,292,290,-1,286,288,290,-1,294,290,292,-1,294,292,291,-1,294,291,293,-1,294,293,290,-1,97,334,336,-1,97,336,94,-1,94,336,96,-1,336,335,96,-1,96,335,95,-1,95,335,337,-1,95,337,334,-1,95,334,97,-1,334,341,336,-1,336,341,338,-1,336,338,335,-1,335,338,340,-1,335,340,337,-1,337,340,339,-1,337,339,334,-1,334,339,341,-1,341,345,342,-1,341,342,338,-1,338,342,340,-1,340,342,344,-1,340,344,339,-1,339,344,343,-1,339,343,345,-1,339,345,341,-1,345,349,342,-1,342,349,351,-1,342,351,346,-1,342,346,344,-1,71,346,348,-1,71,344,346,-1,71,348,347,-1,71,347,344,-1,344,347,343,-1,343,347,352,-1,343,352,349,-1,343,349,345,-1,349,352,356,-1,349,356,353,-1,349,353,355,-1,349,355,351,-1,354,356,352,-1,354,352,350,-1,354,350,351,-1,354,351,355,-1,353,356,357,-1,353,357,358,-1,353,358,359,-1,353,359,360,-1,353,360,361,-1,353,361,355,-1,354,357,356,-1,350,346,351,-1,348,346,347,-1,350,347,346,-1,350,352,347,-1,354,358,357,-1,354,359,358,-1,354,360,359,-1,354,361,360,-1,354,355,361,-1,101,362,365,-1,101,365,99,-1,99,365,100,-1,100,365,363,-1,100,363,98,-1,98,363,364,-1,98,364,101,-1,101,364,362,-1,362,369,367,-1,362,367,365,-1,365,367,363,-1,363,367,368,-1,363,367,368,-1,363,368,366,-1,363,366,364,-1,364,366,362,-1,362,366,369,-1,369,373,371,-1,369,371,367,-1,367,371,368,-1,368,371,372,-1,368,372,366,-1,366,372,370,-1,366,370,369,-1,369,370,373,-1,373,377,380,-1,373,380,375,-1,373,375,371,-1,371,375,372,-1,372,375,376,-1,372,376,374,-1,372,374,370,-1,370,374,379,-1,373,370,379,-1,373,379,377,-1,377,379,383,-1,377,383,381,-1,377,381,384,-1,377,384,380,-1,381,383,389,-1,381,389,388,-1,381,388,387,-1,381,387,386,-1,381,386,385,-1,381,385,384,-1,376,375,374,-1,378,379,374,-1,378,374,375,-1,378,375,380,-1,382,386,387,-1,382,387,388,-1,382,388,389,-1,382,389,383,-1,382,383,379,-1,382,379,378,-1,382,378,380,-1,382,380,384,-1,382,384,385,-1,382,385,386,-1}, 2780);
SoIndexedFaceSet136->setCreaseAngle(3.14);
SoCoordinate* SoCoordinate137 = new SoCoordinate();
SoCoordinate137->setDEF(QString("Joe_SkinCoord"));
SoCoordinate137->setPoint(new float[]{0.0,1.77,0.0,0.0,1.665,0.09,-0.033,1.62,0.087,0.033,1.62,0.087,0.0,1.55,0.097,-0.077,1.64,-0.01,-0.0527,1.58,0.015,0.077,1.64,-0.01,0.0527,1.58,0.015,0.0,1.625,-0.0925,-0.03,1.46,0.035,0.0,1.44,0.03,0.03,1.46,0.035,-0.1135,1.318,0.095,0.1135,1.318,0.095,0.0,1.25,0.113,-0.087,1.19,0.09,-0.0935,1.03,0.075,0.087,1.19,0.09,0.0935,1.03,0.075,-0.1425,1.065,0.0033,-0.15,0.9,-0.01,0.1425,1.065,0.0033,0.15,0.9,-0.01,0.0,1.53,-0.084,0.0049,1.1908,-0.1113,-0.0773,1.019,-0.12,0.0773,1.019,-0.12,0.005,1.0915,-0.1091,-0.178,1.4825,-0.0625,-0.17,1.38,0.007,-0.1884,0.8676,-0.036,-0.16,1.38,-0.127,-0.2,1.1388,-0.08,-0.244,1.1388,-0.04,-0.165,1.1388,-0.04,-0.23,1.133,-0.055,-0.1977,0.8169,-0.0177,-0.1941,0.6772,-0.0423,-0.2117,0.8562,-0.0584,-0.1929,0.789,-0.1064,0.175,1.4825,-0.06,0.17,1.38,0.007,0.1901,0.8645,-0.0415,0.16,1.38,-0.125,0.2,1.1388,-0.08,0.165,1.1388,-0.04,0.244,1.1388,-0.04,0.23,1.133,-0.055,0.2009,0.8139,-0.0237,0.2056,0.6743,-0.0482,0.2142,0.8529,-0.0648,0.1929,0.786,-0.1122,-0.1,0.4913,-0.03,-0.17,0.466,0.0,-0.05,0.466,0.0,-0.165,0.01,0.12,-0.15,0.07,0.0,-0.085,0.086,0.0125,-0.09,0.056,0.0125,-0.115,0.02,0.122,-0.115,0.04,-0.055,-0.11,0.011,0.19,0.0993,0.4881,-0.0309,0.17,0.466,0.0,0.05,0.4867,0.0,0.165,0.01,0.12,0.15,0.07,0.0,0.085,0.086,0.0125,0.09,0.056,0.0125,0.115,0.02,0.122,0.115,0.04,-0.055,0.11,0.011,0.19,0.0,0.875,0.0,-0.0646,1.5149,-0.038,0.0646,1.5149,-0.038,0.0,1.07225,0.09,-0.11,1.427,-0.1375,-0.235,1.42,-0.0625,0.11,1.427,-0.1375,0.235,1.42,-0.0625,0.0,1.41,-0.145,0.0,0.925,0.08,-0.087,1.19,-0.09,0.087,1.19,-0.09,0.172,1.32,-0.03,-0.172,1.32,-0.03,0.15,1.23,-0.015,-0.15,1.23,-0.015,0.079,0.92,-0.14,0.1,0.9,0.077,-0.079,0.92,-0.14,-0.1,0.9,0.075,0.0,0.87,0.0,0.171,0.65,0.0,0.02,0.65,0.0,0.1,0.65,-0.08,0.1,0.65,0.07,-0.171,0.65,0.0,-0.02,0.65,0.0,-0.1,0.65,-0.08,-0.1,0.65,0.07,0.25,1.27,-0.04,0.17,1.27,-0.04,0.2,1.27,-0.09,0.2,1.27,0.02,0.244,1.1388,-0.04,0.165,1.1388,-0.04,0.2,1.1388,-0.08,0.2,1.1388,-0.013,0.225,1.0,-0.01,0.225,1.0,-0.07,0.185,1.0,-0.01,0.185,1.0,-0.07,0.2,1.1388,-0.04,0.225,0.92,-0.04,0.175,0.92,-0.04,0.2,0.92,-0.065,0.2,0.92,-0.015,0.225,0.89,-0.04,0.175,0.89,-0.04,0.2,0.89,-0.065,0.2,0.89,-0.015,0.218,0.86,-0.04,0.184,0.86,-0.04,0.2,0.87,-0.07,0.2,0.87,0.0,0.21,0.85,0.0,0.1854,0.85,0.0,0.212,0.84,-0.015,0.183,0.84,-0.015,0.213,0.835,-0.04,0.19,0.835,-0.04,0.211,0.835,-0.065,0.192,0.835,-0.065,0.208,0.84,-0.085,0.19,0.84,-0.085,0.2,0.84,-0.095,0.215,0.82,0.0,0.193,0.815,0.005,0.198,0.8,0.012,0.21,0.82,0.03,0.19,0.82,0.03,0.2,0.835,0.039,0.212,0.8,0.05,0.188,0.8,0.05,0.2,0.807,0.057,0.2,0.793,0.035,0.2,0.774,0.076,0.212,0.78,0.07,0.188,0.78,0.07,0.2,0.785,0.075,0.2,0.77,0.062,0.215,0.793,-0.015,0.187,0.793,-0.015,0.2,0.793,-0.005,0.215,0.788,-0.04,0.187,0.788,-0.04,0.215,0.793,-0.065,0.187,0.793,-0.065,0.21,0.79,-0.085,0.19,0.79,-0.085,0.2,0.79,-0.095,0.19,0.77,-0.0275,0.19,0.77,-0.0525,0.19,0.78,-0.0775,0.212,0.745,-0.015,0.188,0.745,-0.02,0.2,0.745,-0.0255,0.2,0.745,-0.0045,0.211,0.72,-0.015,0.189,0.72,-0.015,0.2,0.72,-0.0252,0.2,0.72,-0.0048,0.21,0.695,-0.015,0.19,0.695,-0.015,0.2,0.695,-0.025,0.2,0.695,-0.005,0.2,0.685,-0.015,0.215,0.74,-0.04,0.185,0.74,-0.04,0.2,0.74,-0.055,0.2,0.74,-0.025,0.21,0.7142,-0.04,0.19,0.7142,-0.04,0.2,0.7142,-0.053,0.2,0.7142,-0.027,0.21,0.68,-0.04,0.19,0.68,-0.04,0.2,0.68,-0.05,0.2,0.68,-0.03,0.2,0.67,-0.04,0.212,0.74,-0.065,0.188,0.74,-0.065,0.2,0.74,-0.0756,0.2,0.74,-0.0542,0.21,0.7177,-0.065,0.19,0.7177,-0.065,0.2,0.7177,-0.0751,0.2,0.7177,-0.0549,0.21,0.695,-0.065,0.19,0.695,-0.065,0.2,0.695,-0.075,0.2,0.695,-0.055,0.2,0.685,-0.065,0.211,0.755,-0.085,0.189,0.755,-0.085,0.2,0.755,-0.0952,0.2,0.755,-0.0748,0.21,0.735,-0.085,0.19,0.735,-0.085,0.2,0.735,-0.0951,0.2,0.735,-0.0749,0.21,0.72,-0.085,0.19,0.72,-0.085,0.2,0.72,-0.095,0.2,0.72,-0.075,0.2,0.71,-0.085,-0.23,1.23,-0.04,-0.16,1.23,-0.04,-0.2,1.235,-0.105,-0.2,1.255,0.02,-0.244,1.1388,-0.04,-0.165,1.1388,-0.04,-0.2,1.1388,-0.08,-0.2,1.1388,0.013,-0.225,1.0,-0.01,-0.225,1.0,-0.07,-0.185,1.0,-0.01,-0.185,1.0,-0.07,-0.2,1.1388,-0.04,-0.225,0.92,-0.04,-0.175,0.92,-0.04,-0.2,0.92,-0.065,-0.2,0.92,-0.015,-0.225,0.89,-0.04,-0.175,0.89,-0.04,-0.2,0.89,-0.065,-0.2,0.89,-0.015,-0.218,0.86,-0.04,-0.184,0.86,-0.04,-0.2,0.87,-0.07,-0.2,0.87,0.0,-0.21,0.85,0.0,-0.1854,0.85,0.0,-0.212,0.84,-0.015,-0.183,0.84,-0.015,-0.213,0.835,-0.04,-0.19,0.835,-0.04,-0.211,0.835,-0.065,-0.192,0.835,-0.065,-0.208,0.84,-0.085,-0.19,0.84,-0.085,-0.2,0.84,-0.095,-0.215,0.82,0.0,-0.193,0.815,0.005,-0.198,0.8,0.012,-0.21,0.82,0.03,-0.19,0.82,0.03,-0.2,0.835,0.039,-0.212,0.8,0.05,-0.188,0.8,0.05,-0.2,0.807,0.057,-0.2,0.793,0.035,-0.2,0.774,0.076,-0.212,0.78,0.07,-0.188,0.78,0.07,-0.2,0.785,0.075,-0.2,0.77,0.062,-0.215,0.793,-0.015,-0.187,0.793,-0.015,-0.2,0.793,-0.005,-0.215,0.788,-0.04,-0.187,0.788,-0.04,-0.215,0.793,-0.065,-0.187,0.793,-0.065,-0.21,0.79,-0.085,-0.19,0.79,-0.085,-0.2,0.79,-0.095,-0.19,0.77,-0.0275,-0.19,0.77,-0.0525,-0.19,0.78,-0.0775,-0.212,0.745,-0.015,-0.188,0.745,-0.02,-0.2,0.745,-0.0255,-0.2,0.745,-0.0045,-0.211,0.72,-0.015,-0.189,0.72,-0.015,-0.2,0.72,-0.0252,-0.2,0.72,-0.0048,-0.21,0.695,-0.015,-0.19,0.695,-0.015,-0.2,0.695,-0.025,-0.2,0.695,-0.005,-0.2,0.685,-0.015,-0.215,0.74,-0.04,-0.185,0.74,-0.04,-0.2,0.74,-0.055,-0.2,0.74,-0.025,-0.21,0.7142,-0.04,-0.19,0.7142,-0.04,-0.2,0.7142,-0.053,-0.2,0.7142,-0.027,-0.21,0.68,-0.04,-0.19,0.68,-0.04,-0.2,0.68,-0.05,-0.2,0.68,-0.03,-0.2,0.67,-0.04,-0.212,0.74,-0.065,-0.188,0.74,-0.065,-0.2,0.74,-0.0756,-0.2,0.74,-0.0542,-0.21,0.7177,-0.065,-0.19,0.7177,-0.065,-0.2,0.7177,-0.0751,-0.2,0.7177,-0.0549,-0.21,0.695,-0.065,-0.19,0.695,-0.065,-0.2,0.695,-0.075,-0.2,0.695,-0.055,-0.2,0.685,-0.065,-0.211,0.755,-0.085,-0.189,0.755,-0.085,-0.2,0.755,-0.0952,-0.2,0.755,-0.0748,-0.21,0.735,-0.085,-0.19,0.735,-0.085,-0.2,0.735,-0.0951,-0.2,0.735,-0.0749,-0.21,0.72,-0.085,-0.19,0.72,-0.085,-0.2,0.72,-0.095,-0.2,0.72,-0.075,-0.2,0.71,-0.085,0.115,0.466,0.06,0.115,0.466,-0.055,0.15,0.466,0.0,0.05,0.466,0.0,0.17,0.3,0.0,0.06,0.3,0.0,0.1,0.3,-0.05,0.1,0.3,0.05,0.15,0.07,0.0,0.085,0.086,0.0125,0.115,0.069,-0.045,0.117,0.0975,0.0615,0.1375,0.006,-0.03,0.095,0.006,-0.03,0.115,0.015,-0.045,0.115,0.06,0.1,0.115,0.0,0.07,0.165,0.0,0.07,0.095,0.0,0.07,0.115,0.04,0.13,0.125,0.0,0.12,0.165,0.0,0.12,0.087,0.0,0.122,0.09,0.012,0.188,0.11,0.011,0.19,0.128,0.011,0.185,0.142,0.011,0.178,0.154,0.01,0.168,-0.115,0.466,0.06,-0.115,0.466,-0.055,-0.17,0.466,0.0,-0.05,0.466,0.0,-0.17,0.3,0.0,-0.06,0.3,0.0,-0.1,0.3,-0.05,-0.1,0.3,0.05,-0.15,0.07,0.0,-0.085,0.086,0.0125,-0.115,0.069,-0.045,-0.117,0.0975,0.0615,-0.1375,0.006,-0.03,-0.095,0.006,-0.03,-0.095,0.006,-0.03,-0.115,0.06,0.1,-0.115,0.0,0.07,-0.165,0.0,0.07,-0.095,0.0,0.07,-0.115,0.04,0.13,-0.125,0.0,0.12,-0.165,0.0,0.12,-0.087,0.0,0.122,-0.09,0.012,0.188,-0.11,0.011,0.19,-0.128,0.011,0.185,-0.142,0.011,0.178,-0.154,0.01,0.168}, 1170);
SoIndexedFaceSet136->setCoord(*SoCoordinate137);

SoTextureCoordinate* SoTextureCoordinate138 = new SoTextureCoordinate();
SoTextureCoordinate138->setPoint(new float[]{0.0,0.0,0.5,0.5,0.5,0.0,0.0,0.5,0.0,0.0,0.5,0.5,0.5,0.0,0.0,0.5,0.0,0.0,0.5,0.5,0.5,0.0,0.0,0.5,0.0,0.0,0.5,0.5,0.5,0.0,0.0,0.5,0.0,0.0,0.5,0.5,0.5,0.0,0.0,0.5,0.0,0.0,0.5,0.5,0.5,0.0,0.0,0.5,0.0,0.0,0.5,0.5,0.5,0.0,0.0,0.5,0.0,0.0,0.5,0.5,0.5,0.0,0.0,0.5,0.0,0.0,0.5,0.5,0.5,0.0,0.0,0.5,0.0,0.0,0.5,0.5,0.5,0.0,0.0,0.5,0.0,0.0,0.5,0.5,0.5,0.0,0.0,0.5,0.0,0.0,0.5,0.5,0.5,0.0,0.0,0.5,0.0,0.0,0.5,0.5,0.5,0.0,0.0,0.5,0.0,0.0,0.5,0.5,0.5,0.0,0.0,0.5,0.0,0.0,0.5,0.5,0.5,0.0,0.0,0.5,0.0,0.0,0.5,0.5,0.5,0.0,0.0,0.5,0.0,0.0,0.5,0.5,0.5,0.0,0.0,0.5,0.0,0.0,0.5,0.5,0.5,0.0,0.0,0.5,0.0,0.0,0.5,0.5,0.5,0.0,0.0,0.5,0.0,0.0,0.5,0.5,0.5,0.0,0.0,0.5,0.0,0.0,0.5,0.5,0.5,0.0,0.0,0.5,0.0,0.0,0.5,0.5,0.5,0.0,0.0,0.5,0.0,0.0,0.5,0.5,0.5,0.0,0.0,0.5,0.0,0.0,0.5,0.5,0.5,0.0,0.0,0.5,0.0,0.0,0.5,0.5,0.5,0.0,0.0,0.5,0.0,0.0,0.5,0.5,0.5,0.0,0.0,0.5,0.0,0.0,0.5,0.5,0.5,0.0,0.0,0.5,0.0,0.0,0.5,0.5,0.5,0.0,0.0,0.5,0.0,0.0,0.5,0.5,0.5,0.0,0.0,0.5,0.0,0.0,0.5,0.5,0.5,0.0,0.0,0.5,0.0,0.0,0.5,0.5,0.5,0.0,0.0,0.5,0.0,0.0,0.5,0.5,0.5,0.0,0.0,0.5,0.0,0.0,0.5,0.5,0.5,0.0,0.0,0.5,0.0,0.0,0.5,0.5,0.5,0.0,0.0,0.5,0.0,0.0,0.5,0.5,0.5,0.0,0.0,0.5,0.0,0.0,0.5,0.5,0.5,0.0,0.0,0.5,0.0,0.0,0.5,0.5,0.5,0.0,0.0,0.5,0.0,0.0,0.5,0.5,0.5,0.0,0.0,0.5,0.0,0.0,0.5,0.5,0.5,0.0,0.0,0.5,0.0,0.0,0.5,0.5,0.5,0.0,0.0,0.5,0.0,0.0,0.5,0.5,0.5,0.0,0.0,0.5,0.0,0.0,0.5,0.5,0.5,0.0,0.0,0.5,0.0,0.0,0.5,0.5,0.5,0.0,0.0,0.5,0.0,0.0,0.5,0.5,0.5,0.0,0.0,0.5,0.0,0.0,0.5,0.5,0.5,0.0,0.0,0.5,0.0,0.0,0.5,0.5,0.5,0.0,0.0,0.5,0.0,0.0,0.5,0.5,0.5,0.0,0.0,0.5,0.0,0.0,0.5,0.5,0.5,0.0,0.0,0.5,0.0,0.0,0.5,0.5,0.5,0.0,0.0,0.5,0.0,0.0,0.5,0.5,0.5,0.0,0.0,0.5,0.0,0.0,0.5,0.5,0.5,0.0,0.0,0.5,0.0,0.0,0.5,0.5,0.5,0.0,0.0,0.5,0.0,0.0,0.5,0.5,0.5,0.0,0.0,0.5,0.0,0.0,0.5,0.5,0.5,0.0,0.0,0.5,0.0,0.0,0.5,0.5,0.5,0.0,0.0,0.5,0.0,0.0,0.5,0.5,0.5,0.0,0.0,0.5,0.0,0.0,0.5,0.5,0.5,0.0,0.0,0.5,0.0,0.0,0.5,0.5,0.5,0.0,0.0,0.5,0.0,0.0,0.5,0.5,0.5,0.0,0.0,0.5,0.0,0.0,0.5,0.5,0.5,0.0,0.0,0.5,0.0,0.0,0.5,0.5,0.5,0.0,0.0,0.5,0.0,0.0,0.5,0.5,0.5,0.0,0.0,0.5,0.0,0.0,0.5,0.5,0.5,0.0,0.0,0.5,0.0,0.0,0.5,0.5,0.5,0.0,0.0,0.5,0.0,0.0,0.5,0.5,0.5,0.0,0.0,0.5,0.0,0.0,0.5,0.5,0.5,0.0,0.0,0.5,0.0,0.0,0.5,0.5,0.5,0.0,0.0,0.5,0.0,0.0,0.5,0.5,0.5,0.0,0.0,0.5,0.0,0.0,0.5,0.5,0.5,0.0,0.0,0.5,0.0,0.0,0.5,0.5,0.5,0.0,0.0,0.5,0.0,0.0,0.5,0.5,0.5,0.0,0.0,0.5,0.0,0.0,0.5,0.5,0.5,0.0,0.0,0.5,0.0,0.0,0.5,0.5,0.5,0.0,0.0,0.5,0.0,0.0,0.5,0.5,0.5,0.0,0.0,0.5,0.0,0.0,0.5,0.5,0.5,0.0,0.0,0.5,0.0,0.0,0.5,0.5,0.5,0.0,0.0,0.5,0.0,0.0,0.5,0.5,0.5,0.0,0.0,0.5,0.0,0.0,0.5,0.5,0.5,0.0,0.0,0.5,0.0,0.0,0.5,0.5,0.5,0.0,0.0,0.5,0.0,0.0,0.5,0.5,0.5,0.0,0.0,0.5,0.0,0.0,0.5,0.5,0.5,0.0,0.0,0.5,0.0,0.0,0.5,0.5,0.5,0.0,0.0,0.5,0.0,0.0,0.5,0.5,0.5,0.0,0.0,0.5,0.0,0.0,0.5,0.5,0.5,0.0,0.0,0.5,0.0,0.0,0.5,0.5,0.5,0.0,0.0,0.5,0.0,0.0,0.5,0.5,0.5,0.0,0.0,0.5,0.0,0.0,0.5,0.5,0.5,0.0,0.0,0.5,0.0,0.0,0.5,0.5,0.5,0.0,0.0,0.5,0.0,0.0,0.5,0.5,0.5,0.0,0.0,0.5,0.0,0.0,0.5,0.5,0.5,0.0,0.0,0.5,0.0,0.0,0.5,0.5,0.5,0.0,0.0,0.5,0.0,0.0,0.5,0.5,0.5,0.0,0.0,0.5,0.0,0.0,0.5,0.5,0.5,0.0,0.0,0.5,0.0,0.0,0.5,0.5,0.5,0.0,0.0,0.5,0.0,0.0,0.5,0.5,0.5,0.0,0.0,0.5,0.0,0.0,0.5,0.5,0.5,0.0,0.0,0.5,0.0,0.0,0.5,0.5,0.5,0.0,0.0,0.5,0.0,0.0,0.5,0.5}, 780);
SoIndexedFaceSet136->setTexCoord(*SoTextureCoordinate138);

SoShape131->setGeometry(*SoIndexedFaceSet136);

SoHAnimHumanoid27->setSkin(*SoShape131);

SoCoordinate* SoCoordinate139 = new SoCoordinate();
SoCoordinate139->setUSE(QString("Joe_SkinCoord"));
SoHAnimHumanoid27->setSkinCoord(*SoCoordinate139);

SoGroup26->addChild(*SoHAnimHumanoid27);

SoNode15->addChild(*SoGroup26);

SoGroup* SoGroup140 = new SoGroup();
SoTimeSensor* SoTimeSensor141 = new SoTimeSensor();
SoTimeSensor141->setDEF(QString("KickTimer"));
SoTimeSensor141->setCycleInterval(3.73);
SoTimeSensor141->setLoop(true);
SoGroup140->addChild(*SoTimeSensor141);

//Interpolators
SoOrientationInterpolator* SoOrientationInterpolator142 = new SoOrientationInterpolator();
SoOrientationInterpolator142->setDEF(QString("HumanoidRootRotInterp"));
SoOrientationInterpolator142->setKey(new float[]{0.0,0.1,0.4,0.6,1.0}, 5);
SoOrientationInterpolator142->setKeyValue(new float[]{1.0,0.0,0.0,0.5,1.0,0.0,0.0,0.5,-1.0,0.0,0.0,0.1,-1.0,0.0,0.0,0.5,-1.0,0.0,0.0,0.5}, 20);
SoGroup140->addChild(*SoOrientationInterpolator142);

SoPositionInterpolator* SoPositionInterpolator143 = new SoPositionInterpolator();
SoPositionInterpolator143->setDEF(QString("HumanoidRootTransInterp"));
SoPositionInterpolator143->setKey(new float[]{0.0,0.2,0.6,1.0}, 4);
SoPositionInterpolator143->setKeyValue(new float[]{1.0,0.3,-1.0,0.4,-0.04,-0.4,-0.18,0.1,0.0,-0.2,0.15,0.15}, 12);
SoGroup140->addChild(*SoPositionInterpolator143);

SoOrientationInterpolator* SoOrientationInterpolator144 = new SoOrientationInterpolator();
SoOrientationInterpolator144->setDEF(QString("sacroiliacRotInterp"));
SoOrientationInterpolator144->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator144->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup140->addChild(*SoOrientationInterpolator144);

SoOrientationInterpolator* SoOrientationInterpolator145 = new SoOrientationInterpolator();
SoOrientationInterpolator145->setDEF(QString("l_hipRotInterp"));
SoOrientationInterpolator145->setKey(new float[]{0.0,0.1,0.3,0.45,1.0}, 5);
SoOrientationInterpolator145->setKeyValue(new float[]{-1.0,0.0,0.0,1.5,-1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,0.5,1.0,0.0,0.0,1.0}, 20);
SoGroup140->addChild(*SoOrientationInterpolator145);

SoOrientationInterpolator* SoOrientationInterpolator146 = new SoOrientationInterpolator();
SoOrientationInterpolator146->setDEF(QString("l_kneeRotInterp"));
SoOrientationInterpolator146->setKey(new float[]{0.0,0.2,0.35,0.5,1.0}, 5);
SoOrientationInterpolator146->setKeyValue(new float[]{1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.2,1.0,0.0,1.0,0.5,1.0,0.0,0.0,1.4}, 20);
SoGroup140->addChild(*SoOrientationInterpolator146);

SoOrientationInterpolator* SoOrientationInterpolator147 = new SoOrientationInterpolator();
SoOrientationInterpolator147->setDEF(QString("l_ankleRotInterp"));
SoOrientationInterpolator147->setKey(new float[]{0.0,0.25,1.0}, 3);
SoOrientationInterpolator147->setKeyValue(new float[]{-1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0}, 12);
SoGroup140->addChild(*SoOrientationInterpolator147);

SoOrientationInterpolator* SoOrientationInterpolator148 = new SoOrientationInterpolator();
SoOrientationInterpolator148->setDEF(QString("l_subtalarRotInterp"));
SoOrientationInterpolator148->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator148->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup140->addChild(*SoOrientationInterpolator148);

SoOrientationInterpolator* SoOrientationInterpolator149 = new SoOrientationInterpolator();
SoOrientationInterpolator149->setDEF(QString("l_midtarsalRotInterp"));
SoOrientationInterpolator149->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator149->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup140->addChild(*SoOrientationInterpolator149);

SoOrientationInterpolator* SoOrientationInterpolator150 = new SoOrientationInterpolator();
SoOrientationInterpolator150->setDEF(QString("l_metatarsalRotInterp"));
SoOrientationInterpolator150->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator150->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup140->addChild(*SoOrientationInterpolator150);

SoOrientationInterpolator* SoOrientationInterpolator151 = new SoOrientationInterpolator();
SoOrientationInterpolator151->setDEF(QString("r_hipRotInterp"));
SoOrientationInterpolator151->setKey(new float[]{0.0,0.25,0.5,0.75,1.0}, 5);
SoOrientationInterpolator151->setKeyValue(new float[]{1.0,0.0,0.0,1.0,1.0,0.0,0.0,1.0,-1.0,0.0,0.0,1.0,-1.0,0.0,0.0,1.0,-1.0,0.0,0.0,1.0}, 20);
SoGroup140->addChild(*SoOrientationInterpolator151);

SoOrientationInterpolator* SoOrientationInterpolator152 = new SoOrientationInterpolator();
SoOrientationInterpolator152->setDEF(QString("r_kneeRotInterp"));
SoOrientationInterpolator152->setKey(new float[]{0.0,0.25,0.5,0.75,1.0}, 5);
SoOrientationInterpolator152->setKeyValue(new float[]{1.0,0.0,0.0,0.1,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,1.0,0.0,0.0,1.0,1.0,0.0,0.0,1.5}, 20);
SoGroup140->addChild(*SoOrientationInterpolator152);

SoOrientationInterpolator* SoOrientationInterpolator153 = new SoOrientationInterpolator();
SoOrientationInterpolator153->setDEF(QString("r_ankleRotInterp"));
SoOrientationInterpolator153->setKey(new float[]{0.0,0.25,0.5,0.75,1.0}, 5);
SoOrientationInterpolator153->setKeyValue(new float[]{-1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,1.0,0.0,0.0,1.0,1.0,0.0,0.0,0.5}, 20);
SoGroup140->addChild(*SoOrientationInterpolator153);

SoOrientationInterpolator* SoOrientationInterpolator154 = new SoOrientationInterpolator();
SoOrientationInterpolator154->setDEF(QString("r_subtalarRotInterp"));
SoOrientationInterpolator154->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator154->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup140->addChild(*SoOrientationInterpolator154);

SoOrientationInterpolator* SoOrientationInterpolator155 = new SoOrientationInterpolator();
SoOrientationInterpolator155->setDEF(QString("r_midtarsalRotInterp"));
SoOrientationInterpolator155->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator155->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup140->addChild(*SoOrientationInterpolator155);

SoOrientationInterpolator* SoOrientationInterpolator156 = new SoOrientationInterpolator();
SoOrientationInterpolator156->setDEF(QString("r_metatarsalRotInterp"));
SoOrientationInterpolator156->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator156->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup140->addChild(*SoOrientationInterpolator156);

SoOrientationInterpolator* SoOrientationInterpolator157 = new SoOrientationInterpolator();
SoOrientationInterpolator157->setDEF(QString("vl5RotInterp"));
SoOrientationInterpolator157->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator157->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup140->addChild(*SoOrientationInterpolator157);

SoOrientationInterpolator* SoOrientationInterpolator158 = new SoOrientationInterpolator();
SoOrientationInterpolator158->setDEF(QString("vl4RotInterp"));
SoOrientationInterpolator158->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator158->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup140->addChild(*SoOrientationInterpolator158);

SoOrientationInterpolator* SoOrientationInterpolator159 = new SoOrientationInterpolator();
SoOrientationInterpolator159->setDEF(QString("vl3RotInterp"));
SoOrientationInterpolator159->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator159->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup140->addChild(*SoOrientationInterpolator159);

SoOrientationInterpolator* SoOrientationInterpolator160 = new SoOrientationInterpolator();
SoOrientationInterpolator160->setDEF(QString("vl2RotInterp"));
SoOrientationInterpolator160->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator160->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup140->addChild(*SoOrientationInterpolator160);

SoOrientationInterpolator* SoOrientationInterpolator161 = new SoOrientationInterpolator();
SoOrientationInterpolator161->setDEF(QString("vl1RotInterp"));
SoOrientationInterpolator161->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator161->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup140->addChild(*SoOrientationInterpolator161);

SoOrientationInterpolator* SoOrientationInterpolator162 = new SoOrientationInterpolator();
SoOrientationInterpolator162->setDEF(QString("vt12RotInterp"));
SoOrientationInterpolator162->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator162->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup140->addChild(*SoOrientationInterpolator162);

SoOrientationInterpolator* SoOrientationInterpolator163 = new SoOrientationInterpolator();
SoOrientationInterpolator163->setDEF(QString("vt11RotInterp"));
SoOrientationInterpolator163->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator163->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup140->addChild(*SoOrientationInterpolator163);

SoOrientationInterpolator* SoOrientationInterpolator164 = new SoOrientationInterpolator();
SoOrientationInterpolator164->setDEF(QString("vt10RotInterp"));
SoOrientationInterpolator164->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator164->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup140->addChild(*SoOrientationInterpolator164);

SoOrientationInterpolator* SoOrientationInterpolator165 = new SoOrientationInterpolator();
SoOrientationInterpolator165->setDEF(QString("vt9RotInterp"));
SoOrientationInterpolator165->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator165->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup140->addChild(*SoOrientationInterpolator165);

SoOrientationInterpolator* SoOrientationInterpolator166 = new SoOrientationInterpolator();
SoOrientationInterpolator166->setDEF(QString("vt8RotInterp"));
SoOrientationInterpolator166->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator166->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup140->addChild(*SoOrientationInterpolator166);

SoOrientationInterpolator* SoOrientationInterpolator167 = new SoOrientationInterpolator();
SoOrientationInterpolator167->setDEF(QString("vt7RotInterp"));
SoOrientationInterpolator167->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator167->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup140->addChild(*SoOrientationInterpolator167);

SoOrientationInterpolator* SoOrientationInterpolator168 = new SoOrientationInterpolator();
SoOrientationInterpolator168->setDEF(QString("vt6RotInterp"));
SoOrientationInterpolator168->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator168->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup140->addChild(*SoOrientationInterpolator168);

SoOrientationInterpolator* SoOrientationInterpolator169 = new SoOrientationInterpolator();
SoOrientationInterpolator169->setDEF(QString("vt5RotInterp"));
SoOrientationInterpolator169->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator169->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup140->addChild(*SoOrientationInterpolator169);

SoOrientationInterpolator* SoOrientationInterpolator170 = new SoOrientationInterpolator();
SoOrientationInterpolator170->setDEF(QString("vt4RotInterp"));
SoOrientationInterpolator170->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator170->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup140->addChild(*SoOrientationInterpolator170);

SoOrientationInterpolator* SoOrientationInterpolator171 = new SoOrientationInterpolator();
SoOrientationInterpolator171->setDEF(QString("vt3RotInterp"));
SoOrientationInterpolator171->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator171->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup140->addChild(*SoOrientationInterpolator171);

SoOrientationInterpolator* SoOrientationInterpolator172 = new SoOrientationInterpolator();
SoOrientationInterpolator172->setDEF(QString("vt2RotInterp"));
SoOrientationInterpolator172->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator172->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup140->addChild(*SoOrientationInterpolator172);

SoOrientationInterpolator* SoOrientationInterpolator173 = new SoOrientationInterpolator();
SoOrientationInterpolator173->setDEF(QString("vt1RotInterp"));
SoOrientationInterpolator173->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator173->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup140->addChild(*SoOrientationInterpolator173);

SoOrientationInterpolator* SoOrientationInterpolator174 = new SoOrientationInterpolator();
SoOrientationInterpolator174->setDEF(QString("vc7RotInterp"));
SoOrientationInterpolator174->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator174->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup140->addChild(*SoOrientationInterpolator174);

SoOrientationInterpolator* SoOrientationInterpolator175 = new SoOrientationInterpolator();
SoOrientationInterpolator175->setDEF(QString("vc6RotInterp"));
SoOrientationInterpolator175->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator175->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup140->addChild(*SoOrientationInterpolator175);

SoOrientationInterpolator* SoOrientationInterpolator176 = new SoOrientationInterpolator();
SoOrientationInterpolator176->setDEF(QString("vc5RotInterp"));
SoOrientationInterpolator176->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator176->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup140->addChild(*SoOrientationInterpolator176);

SoOrientationInterpolator* SoOrientationInterpolator177 = new SoOrientationInterpolator();
SoOrientationInterpolator177->setDEF(QString("vc4RotInterp"));
SoOrientationInterpolator177->setKey(new float[]{0.0,0.3,0.4,1.0}, 4);
SoOrientationInterpolator177->setKeyValue(new float[]{1.0,0.0,1.0,0.25,-1.0,0.0,-1.0,0.35,1.0,0.0,0.0,0.75,1.0,0.0,1.0,0.5}, 16);
SoGroup140->addChild(*SoOrientationInterpolator177);

SoOrientationInterpolator* SoOrientationInterpolator178 = new SoOrientationInterpolator();
SoOrientationInterpolator178->setDEF(QString("vc3RotInterp"));
SoOrientationInterpolator178->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator178->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup140->addChild(*SoOrientationInterpolator178);

SoOrientationInterpolator* SoOrientationInterpolator179 = new SoOrientationInterpolator();
SoOrientationInterpolator179->setDEF(QString("vc2RotInterp"));
SoOrientationInterpolator179->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator179->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup140->addChild(*SoOrientationInterpolator179);

SoOrientationInterpolator* SoOrientationInterpolator180 = new SoOrientationInterpolator();
SoOrientationInterpolator180->setDEF(QString("vc1RotInterp"));
SoOrientationInterpolator180->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator180->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup140->addChild(*SoOrientationInterpolator180);

SoOrientationInterpolator* SoOrientationInterpolator181 = new SoOrientationInterpolator();
SoOrientationInterpolator181->setDEF(QString("skullbaseRotInterp"));
SoOrientationInterpolator181->setKey(new float[]{0.0,0.2,0.75,1.0}, 4);
SoOrientationInterpolator181->setKeyValue(new float[]{0.0,-1.0,0.0,0.5,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.35}, 16);
SoGroup140->addChild(*SoOrientationInterpolator181);

SoOrientationInterpolator* SoOrientationInterpolator182 = new SoOrientationInterpolator();
SoOrientationInterpolator182->setDEF(QString("l_eyelid_jointRotInterp"));
SoOrientationInterpolator182->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator182->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup140->addChild(*SoOrientationInterpolator182);

SoOrientationInterpolator* SoOrientationInterpolator183 = new SoOrientationInterpolator();
SoOrientationInterpolator183->setDEF(QString("l_eyeball_jointRotInterp"));
SoOrientationInterpolator183->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator183->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup140->addChild(*SoOrientationInterpolator183);

SoOrientationInterpolator* SoOrientationInterpolator184 = new SoOrientationInterpolator();
SoOrientationInterpolator184->setDEF(QString("l_eyebrow_jointRotInterp"));
SoOrientationInterpolator184->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator184->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup140->addChild(*SoOrientationInterpolator184);

SoOrientationInterpolator* SoOrientationInterpolator185 = new SoOrientationInterpolator();
SoOrientationInterpolator185->setDEF(QString("r_eyelid_jointRotInterp"));
SoOrientationInterpolator185->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator185->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup140->addChild(*SoOrientationInterpolator185);

SoOrientationInterpolator* SoOrientationInterpolator186 = new SoOrientationInterpolator();
SoOrientationInterpolator186->setDEF(QString("r_eyeball_jointRotInterp"));
SoOrientationInterpolator186->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator186->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup140->addChild(*SoOrientationInterpolator186);

SoOrientationInterpolator* SoOrientationInterpolator187 = new SoOrientationInterpolator();
SoOrientationInterpolator187->setDEF(QString("r_eyebrow_jointRotInterp"));
SoOrientationInterpolator187->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator187->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup140->addChild(*SoOrientationInterpolator187);

SoOrientationInterpolator* SoOrientationInterpolator188 = new SoOrientationInterpolator();
SoOrientationInterpolator188->setDEF(QString("temporomandibularRotInterp"));
SoOrientationInterpolator188->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator188->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup140->addChild(*SoOrientationInterpolator188);

SoOrientationInterpolator* SoOrientationInterpolator189 = new SoOrientationInterpolator();
SoOrientationInterpolator189->setDEF(QString("l_sternoclavicularRotInterp"));
SoOrientationInterpolator189->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator189->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup140->addChild(*SoOrientationInterpolator189);

SoOrientationInterpolator* SoOrientationInterpolator190 = new SoOrientationInterpolator();
SoOrientationInterpolator190->setDEF(QString("l_acromioclavicularRotInterp"));
SoOrientationInterpolator190->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator190->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup140->addChild(*SoOrientationInterpolator190);

SoOrientationInterpolator* SoOrientationInterpolator191 = new SoOrientationInterpolator();
SoOrientationInterpolator191->setDEF(QString("l_shoulderRotInterp"));
SoOrientationInterpolator191->setKey(new float[]{0.0,0.4,1.0}, 3);
SoOrientationInterpolator191->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.5,-1.0,0.0,1.0,1.75}, 12);
SoGroup140->addChild(*SoOrientationInterpolator191);

SoOrientationInterpolator* SoOrientationInterpolator192 = new SoOrientationInterpolator();
SoOrientationInterpolator192->setDEF(QString("l_elbowRotInterp"));
SoOrientationInterpolator192->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator192->setKeyValue(new float[]{-1.0,0.0,0.0,3.0,-1.0,0.0,0.0,0.75,-1.0,-1.0,0.0,0.5}, 12);
SoGroup140->addChild(*SoOrientationInterpolator192);

SoOrientationInterpolator* SoOrientationInterpolator193 = new SoOrientationInterpolator();
SoOrientationInterpolator193->setDEF(QString("l_wristRotInterp"));
SoOrientationInterpolator193->setKey(new float[]{0.0,0.4,0.8,1.0}, 4);
SoOrientationInterpolator193->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,1.0,0.0,1.3,0.0,-0.5,1.0,1.3,0.0,0.0,1.0,0.0}, 16);
SoGroup140->addChild(*SoOrientationInterpolator193);

SoOrientationInterpolator* SoOrientationInterpolator194 = new SoOrientationInterpolator();
SoOrientationInterpolator194->setDEF(QString("l_thumb1RotInterp"));
SoOrientationInterpolator194->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator194->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup140->addChild(*SoOrientationInterpolator194);

SoOrientationInterpolator* SoOrientationInterpolator195 = new SoOrientationInterpolator();
SoOrientationInterpolator195->setDEF(QString("l_thumb2RotInterp"));
SoOrientationInterpolator195->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator195->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup140->addChild(*SoOrientationInterpolator195);

SoOrientationInterpolator* SoOrientationInterpolator196 = new SoOrientationInterpolator();
SoOrientationInterpolator196->setDEF(QString("l_thumb3RotInterp"));
SoOrientationInterpolator196->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator196->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup140->addChild(*SoOrientationInterpolator196);

SoOrientationInterpolator* SoOrientationInterpolator197 = new SoOrientationInterpolator();
SoOrientationInterpolator197->setDEF(QString("l_index0RotInterp"));
SoOrientationInterpolator197->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator197->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup140->addChild(*SoOrientationInterpolator197);

SoOrientationInterpolator* SoOrientationInterpolator198 = new SoOrientationInterpolator();
SoOrientationInterpolator198->setDEF(QString("l_index1RotInterp"));
SoOrientationInterpolator198->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator198->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup140->addChild(*SoOrientationInterpolator198);

SoOrientationInterpolator* SoOrientationInterpolator199 = new SoOrientationInterpolator();
SoOrientationInterpolator199->setDEF(QString("l_index2RotInterp"));
SoOrientationInterpolator199->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator199->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup140->addChild(*SoOrientationInterpolator199);

SoOrientationInterpolator* SoOrientationInterpolator200 = new SoOrientationInterpolator();
SoOrientationInterpolator200->setDEF(QString("l_index3RotInterp"));
SoOrientationInterpolator200->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator200->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup140->addChild(*SoOrientationInterpolator200);

SoOrientationInterpolator* SoOrientationInterpolator201 = new SoOrientationInterpolator();
SoOrientationInterpolator201->setDEF(QString("l_middle0RotInterp"));
SoOrientationInterpolator201->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator201->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup140->addChild(*SoOrientationInterpolator201);

SoOrientationInterpolator* SoOrientationInterpolator202 = new SoOrientationInterpolator();
SoOrientationInterpolator202->setDEF(QString("l_middle1RotInterp"));
SoOrientationInterpolator202->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator202->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup140->addChild(*SoOrientationInterpolator202);

SoOrientationInterpolator* SoOrientationInterpolator203 = new SoOrientationInterpolator();
SoOrientationInterpolator203->setDEF(QString("l_middle2RotInterp"));
SoOrientationInterpolator203->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator203->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup140->addChild(*SoOrientationInterpolator203);

SoOrientationInterpolator* SoOrientationInterpolator204 = new SoOrientationInterpolator();
SoOrientationInterpolator204->setDEF(QString("l_middle3RotInterp"));
SoOrientationInterpolator204->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator204->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup140->addChild(*SoOrientationInterpolator204);

SoOrientationInterpolator* SoOrientationInterpolator205 = new SoOrientationInterpolator();
SoOrientationInterpolator205->setDEF(QString("l_ring0RotInterp"));
SoOrientationInterpolator205->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator205->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup140->addChild(*SoOrientationInterpolator205);

SoOrientationInterpolator* SoOrientationInterpolator206 = new SoOrientationInterpolator();
SoOrientationInterpolator206->setDEF(QString("l_ring1RotInterp"));
SoOrientationInterpolator206->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator206->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup140->addChild(*SoOrientationInterpolator206);

SoOrientationInterpolator* SoOrientationInterpolator207 = new SoOrientationInterpolator();
SoOrientationInterpolator207->setDEF(QString("l_ring2RotInterp"));
SoOrientationInterpolator207->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator207->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup140->addChild(*SoOrientationInterpolator207);

SoOrientationInterpolator* SoOrientationInterpolator208 = new SoOrientationInterpolator();
SoOrientationInterpolator208->setDEF(QString("l_ring3RotInterp"));
SoOrientationInterpolator208->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator208->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup140->addChild(*SoOrientationInterpolator208);

SoOrientationInterpolator* SoOrientationInterpolator209 = new SoOrientationInterpolator();
SoOrientationInterpolator209->setDEF(QString("l_pinky0RotInterp"));
SoOrientationInterpolator209->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator209->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup140->addChild(*SoOrientationInterpolator209);

SoOrientationInterpolator* SoOrientationInterpolator210 = new SoOrientationInterpolator();
SoOrientationInterpolator210->setDEF(QString("l_pinky1RotInterp"));
SoOrientationInterpolator210->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator210->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup140->addChild(*SoOrientationInterpolator210);

SoOrientationInterpolator* SoOrientationInterpolator211 = new SoOrientationInterpolator();
SoOrientationInterpolator211->setDEF(QString("l_pinky2RotInterp"));
SoOrientationInterpolator211->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator211->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup140->addChild(*SoOrientationInterpolator211);

SoOrientationInterpolator* SoOrientationInterpolator212 = new SoOrientationInterpolator();
SoOrientationInterpolator212->setDEF(QString("l_pinky3RotInterp"));
SoOrientationInterpolator212->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator212->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup140->addChild(*SoOrientationInterpolator212);

SoOrientationInterpolator* SoOrientationInterpolator213 = new SoOrientationInterpolator();
SoOrientationInterpolator213->setDEF(QString("r_sternoclavicularRotInterp"));
SoOrientationInterpolator213->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator213->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup140->addChild(*SoOrientationInterpolator213);

SoOrientationInterpolator* SoOrientationInterpolator214 = new SoOrientationInterpolator();
SoOrientationInterpolator214->setDEF(QString("r_acromioclavicularRotInterp"));
SoOrientationInterpolator214->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator214->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup140->addChild(*SoOrientationInterpolator214);

SoOrientationInterpolator* SoOrientationInterpolator215 = new SoOrientationInterpolator();
SoOrientationInterpolator215->setDEF(QString("r_shoulderRotInterp"));
SoOrientationInterpolator215->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator215->setKeyValue(new float[]{0.0,0.0,-1.0,2.5,0.0,0.0,-1.0,1.5,0.0,0.0,-1.0,1.75}, 12);
SoGroup140->addChild(*SoOrientationInterpolator215);

SoOrientationInterpolator* SoOrientationInterpolator216 = new SoOrientationInterpolator();
SoOrientationInterpolator216->setDEF(QString("r_elbowRotInterp"));
SoOrientationInterpolator216->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator216->setKeyValue(new float[]{-1.0,0.0,0.0,3.0,-1.0,0.0,0.0,0.75,-1.0,-1.0,0.0,0.5}, 12);
SoGroup140->addChild(*SoOrientationInterpolator216);

SoOrientationInterpolator* SoOrientationInterpolator217 = new SoOrientationInterpolator();
SoOrientationInterpolator217->setDEF(QString("r_wristRotInterp"));
SoOrientationInterpolator217->setKey(new float[]{0.0,0.5,0.7,1.0}, 4);
SoOrientationInterpolator217->setKeyValue(new float[]{0.0,1.0,0.0,0.3,0.0,0.0,1.0,0.0,0.0,0.0,-1.0,1.0,0.0,-1.0,0.0,0.3}, 16);
SoGroup140->addChild(*SoOrientationInterpolator217);

SoOrientationInterpolator* SoOrientationInterpolator218 = new SoOrientationInterpolator();
SoOrientationInterpolator218->setDEF(QString("r_thumb1RotInterp"));
SoOrientationInterpolator218->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator218->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup140->addChild(*SoOrientationInterpolator218);

SoOrientationInterpolator* SoOrientationInterpolator219 = new SoOrientationInterpolator();
SoOrientationInterpolator219->setDEF(QString("r_thumb2RotInterp"));
SoOrientationInterpolator219->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator219->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup140->addChild(*SoOrientationInterpolator219);

SoOrientationInterpolator* SoOrientationInterpolator220 = new SoOrientationInterpolator();
SoOrientationInterpolator220->setDEF(QString("r_thumb3RotInterp"));
SoOrientationInterpolator220->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator220->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup140->addChild(*SoOrientationInterpolator220);

SoOrientationInterpolator* SoOrientationInterpolator221 = new SoOrientationInterpolator();
SoOrientationInterpolator221->setDEF(QString("r_index0RotInterp"));
SoOrientationInterpolator221->setKey(new float[]{0.0,0.5,0.75,1.0}, 4);
SoOrientationInterpolator221->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0}, 16);
SoGroup140->addChild(*SoOrientationInterpolator221);

SoOrientationInterpolator* SoOrientationInterpolator222 = new SoOrientationInterpolator();
SoOrientationInterpolator222->setDEF(QString("r_index1RotInterp"));
SoOrientationInterpolator222->setKey(new float[]{0.0,0.5,0.75,1.0}, 4);
SoOrientationInterpolator222->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.5,0.0,0.0,1.0,0.0}, 16);
SoGroup140->addChild(*SoOrientationInterpolator222);

SoOrientationInterpolator* SoOrientationInterpolator223 = new SoOrientationInterpolator();
SoOrientationInterpolator223->setDEF(QString("r_index2RotInterp"));
SoOrientationInterpolator223->setKey(new float[]{0.0,0.5,0.75,1.0}, 4);
SoOrientationInterpolator223->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.5,0.0,0.0,1.0,0.0}, 16);
SoGroup140->addChild(*SoOrientationInterpolator223);

SoOrientationInterpolator* SoOrientationInterpolator224 = new SoOrientationInterpolator();
SoOrientationInterpolator224->setDEF(QString("r_index3RotInterp"));
SoOrientationInterpolator224->setKey(new float[]{0.0,0.5,0.75,1.0}, 4);
SoOrientationInterpolator224->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.5,0.0,0.0,1.0,0.0}, 16);
SoGroup140->addChild(*SoOrientationInterpolator224);

SoOrientationInterpolator* SoOrientationInterpolator225 = new SoOrientationInterpolator();
SoOrientationInterpolator225->setDEF(QString("r_middle0RotInterp"));
SoOrientationInterpolator225->setKey(new float[]{0.0,0.5,0.75,1.0}, 4);
SoOrientationInterpolator225->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0}, 16);
SoGroup140->addChild(*SoOrientationInterpolator225);

SoOrientationInterpolator* SoOrientationInterpolator226 = new SoOrientationInterpolator();
SoOrientationInterpolator226->setDEF(QString("r_middle1RotInterp"));
SoOrientationInterpolator226->setKey(new float[]{0.0,0.5,0.75,1.0}, 4);
SoOrientationInterpolator226->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.5,0.0,0.0,1.0,0.0}, 16);
SoGroup140->addChild(*SoOrientationInterpolator226);

SoOrientationInterpolator* SoOrientationInterpolator227 = new SoOrientationInterpolator();
SoOrientationInterpolator227->setDEF(QString("r_middle2RotInterp"));
SoOrientationInterpolator227->setKey(new float[]{0.0,0.5,0.75,1.0}, 4);
SoOrientationInterpolator227->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.5,0.0,0.0,1.0,0.0}, 16);
SoGroup140->addChild(*SoOrientationInterpolator227);

SoOrientationInterpolator* SoOrientationInterpolator228 = new SoOrientationInterpolator();
SoOrientationInterpolator228->setDEF(QString("r_middle3RotInterp"));
SoOrientationInterpolator228->setKey(new float[]{0.0,0.5,0.75,1.0}, 4);
SoOrientationInterpolator228->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.5,0.0,0.0,1.0,0.0}, 16);
SoGroup140->addChild(*SoOrientationInterpolator228);

SoOrientationInterpolator* SoOrientationInterpolator229 = new SoOrientationInterpolator();
SoOrientationInterpolator229->setDEF(QString("r_ring0RotInterp"));
SoOrientationInterpolator229->setKey(new float[]{0.0,0.5,0.75,1.0}, 4);
SoOrientationInterpolator229->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0}, 16);
SoGroup140->addChild(*SoOrientationInterpolator229);

SoOrientationInterpolator* SoOrientationInterpolator230 = new SoOrientationInterpolator();
SoOrientationInterpolator230->setDEF(QString("r_ring1RotInterp"));
SoOrientationInterpolator230->setKey(new float[]{0.0,0.5,0.75,1.0}, 4);
SoOrientationInterpolator230->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.5,0.0,0.0,1.0,0.0}, 16);
SoGroup140->addChild(*SoOrientationInterpolator230);

SoOrientationInterpolator* SoOrientationInterpolator231 = new SoOrientationInterpolator();
SoOrientationInterpolator231->setDEF(QString("r_ring2RotInterp"));
SoOrientationInterpolator231->setKey(new float[]{0.0,0.5,0.75,1.0}, 4);
SoOrientationInterpolator231->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.5,0.0,0.0,1.0,0.0}, 16);
SoGroup140->addChild(*SoOrientationInterpolator231);

SoOrientationInterpolator* SoOrientationInterpolator232 = new SoOrientationInterpolator();
SoOrientationInterpolator232->setDEF(QString("r_ring3RotInterp"));
SoOrientationInterpolator232->setKey(new float[]{0.0,0.5,0.75,1.0}, 4);
SoOrientationInterpolator232->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.5,0.0,0.0,1.0,0.0}, 16);
SoGroup140->addChild(*SoOrientationInterpolator232);

SoOrientationInterpolator* SoOrientationInterpolator233 = new SoOrientationInterpolator();
SoOrientationInterpolator233->setDEF(QString("r_pinky0RotInterp"));
SoOrientationInterpolator233->setKey(new float[]{0.0,0.5,0.75,1.0}, 4);
SoOrientationInterpolator233->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0}, 16);
SoGroup140->addChild(*SoOrientationInterpolator233);

SoOrientationInterpolator* SoOrientationInterpolator234 = new SoOrientationInterpolator();
SoOrientationInterpolator234->setDEF(QString("r_pinky1RotInterp"));
SoOrientationInterpolator234->setKey(new float[]{0.0,0.5,0.75,1.0}, 4);
SoOrientationInterpolator234->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.5,0.0,0.0,1.0,0.0}, 16);
SoGroup140->addChild(*SoOrientationInterpolator234);

SoOrientationInterpolator* SoOrientationInterpolator235 = new SoOrientationInterpolator();
SoOrientationInterpolator235->setDEF(QString("r_pinky2RotInterp"));
SoOrientationInterpolator235->setKey(new float[]{0.0,0.5,0.75,1.0}, 4);
SoOrientationInterpolator235->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.5,0.0,0.0,1.0,0.0}, 16);
SoGroup140->addChild(*SoOrientationInterpolator235);

SoOrientationInterpolator* SoOrientationInterpolator236 = new SoOrientationInterpolator();
SoOrientationInterpolator236->setDEF(QString("r_pinky3RotInterp"));
SoOrientationInterpolator236->setKey(new float[]{0.0,0.5,0.75,1.0}, 4);
SoOrientationInterpolator236->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.5,0.0,0.0,1.0,0.0}, 16);
SoGroup140->addChild(*SoOrientationInterpolator236);

SoNode15->addChild(*SoGroup140);

//TimeSensor to Interpolators
SoROUTE* SoROUTE237 = new SoROUTE();
SoROUTE237->setFromField(QString("fraction_changed"));
SoROUTE237->setFromNode(QString("KickTimer"));
SoROUTE237->setToField(QString("set_fraction"));
SoROUTE237->setToNode(QString("HumanoidRootRotInterp"));
SoNode15->addChild(*SoROUTE237);

SoROUTE* SoROUTE238 = new SoROUTE();
SoROUTE238->setFromField(QString("fraction_changed"));
SoROUTE238->setFromNode(QString("KickTimer"));
SoROUTE238->setToField(QString("set_fraction"));
SoROUTE238->setToNode(QString("HumanoidRootTransInterp"));
SoNode15->addChild(*SoROUTE238);

SoROUTE* SoROUTE239 = new SoROUTE();
SoROUTE239->setFromField(QString("fraction_changed"));
SoROUTE239->setFromNode(QString("KickTimer"));
SoROUTE239->setToField(QString("set_fraction"));
SoROUTE239->setToNode(QString("sacroiliacRotInterp"));
SoNode15->addChild(*SoROUTE239);

SoROUTE* SoROUTE240 = new SoROUTE();
SoROUTE240->setFromField(QString("fraction_changed"));
SoROUTE240->setFromNode(QString("KickTimer"));
SoROUTE240->setToField(QString("set_fraction"));
SoROUTE240->setToNode(QString("l_hipRotInterp"));
SoNode15->addChild(*SoROUTE240);

SoROUTE* SoROUTE241 = new SoROUTE();
SoROUTE241->setFromField(QString("fraction_changed"));
SoROUTE241->setFromNode(QString("KickTimer"));
SoROUTE241->setToField(QString("set_fraction"));
SoROUTE241->setToNode(QString("l_kneeRotInterp"));
SoNode15->addChild(*SoROUTE241);

SoROUTE* SoROUTE242 = new SoROUTE();
SoROUTE242->setFromField(QString("fraction_changed"));
SoROUTE242->setFromNode(QString("KickTimer"));
SoROUTE242->setToField(QString("set_fraction"));
SoROUTE242->setToNode(QString("l_ankleRotInterp"));
SoNode15->addChild(*SoROUTE242);

SoROUTE* SoROUTE243 = new SoROUTE();
SoROUTE243->setFromField(QString("fraction_changed"));
SoROUTE243->setFromNode(QString("KickTimer"));
SoROUTE243->setToField(QString("set_fraction"));
SoROUTE243->setToNode(QString("l_subtalarRotInterp"));
SoNode15->addChild(*SoROUTE243);

SoROUTE* SoROUTE244 = new SoROUTE();
SoROUTE244->setFromField(QString("fraction_changed"));
SoROUTE244->setFromNode(QString("KickTimer"));
SoROUTE244->setToField(QString("set_fraction"));
SoROUTE244->setToNode(QString("l_midtarsalRotInterp"));
SoNode15->addChild(*SoROUTE244);

SoROUTE* SoROUTE245 = new SoROUTE();
SoROUTE245->setFromField(QString("fraction_changed"));
SoROUTE245->setFromNode(QString("KickTimer"));
SoROUTE245->setToField(QString("set_fraction"));
SoROUTE245->setToNode(QString("l_metatarsalRotInterp"));
SoNode15->addChild(*SoROUTE245);

SoROUTE* SoROUTE246 = new SoROUTE();
SoROUTE246->setFromField(QString("fraction_changed"));
SoROUTE246->setFromNode(QString("KickTimer"));
SoROUTE246->setToField(QString("set_fraction"));
SoROUTE246->setToNode(QString("r_hipRotInterp"));
SoNode15->addChild(*SoROUTE246);

SoROUTE* SoROUTE247 = new SoROUTE();
SoROUTE247->setFromField(QString("fraction_changed"));
SoROUTE247->setFromNode(QString("KickTimer"));
SoROUTE247->setToField(QString("set_fraction"));
SoROUTE247->setToNode(QString("r_kneeRotInterp"));
SoNode15->addChild(*SoROUTE247);

SoROUTE* SoROUTE248 = new SoROUTE();
SoROUTE248->setFromField(QString("fraction_changed"));
SoROUTE248->setFromNode(QString("KickTimer"));
SoROUTE248->setToField(QString("set_fraction"));
SoROUTE248->setToNode(QString("r_ankleRotInterp"));
SoNode15->addChild(*SoROUTE248);

SoROUTE* SoROUTE249 = new SoROUTE();
SoROUTE249->setFromField(QString("fraction_changed"));
SoROUTE249->setFromNode(QString("KickTimer"));
SoROUTE249->setToField(QString("set_fraction"));
SoROUTE249->setToNode(QString("r_subtalarRotInterp"));
SoNode15->addChild(*SoROUTE249);

SoROUTE* SoROUTE250 = new SoROUTE();
SoROUTE250->setFromField(QString("fraction_changed"));
SoROUTE250->setFromNode(QString("KickTimer"));
SoROUTE250->setToField(QString("set_fraction"));
SoROUTE250->setToNode(QString("r_midtarsalRotInterp"));
SoNode15->addChild(*SoROUTE250);

SoROUTE* SoROUTE251 = new SoROUTE();
SoROUTE251->setFromField(QString("fraction_changed"));
SoROUTE251->setFromNode(QString("KickTimer"));
SoROUTE251->setToField(QString("set_fraction"));
SoROUTE251->setToNode(QString("r_metatarsalRotInterp"));
SoNode15->addChild(*SoROUTE251);

SoROUTE* SoROUTE252 = new SoROUTE();
SoROUTE252->setFromField(QString("fraction_changed"));
SoROUTE252->setFromNode(QString("KickTimer"));
SoROUTE252->setToField(QString("set_fraction"));
SoROUTE252->setToNode(QString("vl5RotInterp"));
SoNode15->addChild(*SoROUTE252);

SoROUTE* SoROUTE253 = new SoROUTE();
SoROUTE253->setFromField(QString("fraction_changed"));
SoROUTE253->setFromNode(QString("KickTimer"));
SoROUTE253->setToField(QString("set_fraction"));
SoROUTE253->setToNode(QString("vl4RotInterp"));
SoNode15->addChild(*SoROUTE253);

SoROUTE* SoROUTE254 = new SoROUTE();
SoROUTE254->setFromField(QString("fraction_changed"));
SoROUTE254->setFromNode(QString("KickTimer"));
SoROUTE254->setToField(QString("set_fraction"));
SoROUTE254->setToNode(QString("vl3RotInterp"));
SoNode15->addChild(*SoROUTE254);

SoROUTE* SoROUTE255 = new SoROUTE();
SoROUTE255->setFromField(QString("fraction_changed"));
SoROUTE255->setFromNode(QString("KickTimer"));
SoROUTE255->setToField(QString("set_fraction"));
SoROUTE255->setToNode(QString("vl2RotInterp"));
SoNode15->addChild(*SoROUTE255);

SoROUTE* SoROUTE256 = new SoROUTE();
SoROUTE256->setFromField(QString("fraction_changed"));
SoROUTE256->setFromNode(QString("KickTimer"));
SoROUTE256->setToField(QString("set_fraction"));
SoROUTE256->setToNode(QString("vl1RotInterp"));
SoNode15->addChild(*SoROUTE256);

SoROUTE* SoROUTE257 = new SoROUTE();
SoROUTE257->setFromField(QString("fraction_changed"));
SoROUTE257->setFromNode(QString("KickTimer"));
SoROUTE257->setToField(QString("set_fraction"));
SoROUTE257->setToNode(QString("vt12RotInterp"));
SoNode15->addChild(*SoROUTE257);

SoROUTE* SoROUTE258 = new SoROUTE();
SoROUTE258->setFromField(QString("fraction_changed"));
SoROUTE258->setFromNode(QString("KickTimer"));
SoROUTE258->setToField(QString("set_fraction"));
SoROUTE258->setToNode(QString("vt11RotInterp"));
SoNode15->addChild(*SoROUTE258);

SoROUTE* SoROUTE259 = new SoROUTE();
SoROUTE259->setFromField(QString("fraction_changed"));
SoROUTE259->setFromNode(QString("KickTimer"));
SoROUTE259->setToField(QString("set_fraction"));
SoROUTE259->setToNode(QString("vt10RotInterp"));
SoNode15->addChild(*SoROUTE259);

SoROUTE* SoROUTE260 = new SoROUTE();
SoROUTE260->setFromField(QString("fraction_changed"));
SoROUTE260->setFromNode(QString("KickTimer"));
SoROUTE260->setToField(QString("set_fraction"));
SoROUTE260->setToNode(QString("vt9RotInterp"));
SoNode15->addChild(*SoROUTE260);

SoROUTE* SoROUTE261 = new SoROUTE();
SoROUTE261->setFromField(QString("fraction_changed"));
SoROUTE261->setFromNode(QString("KickTimer"));
SoROUTE261->setToField(QString("set_fraction"));
SoROUTE261->setToNode(QString("vt8RotInterp"));
SoNode15->addChild(*SoROUTE261);

SoROUTE* SoROUTE262 = new SoROUTE();
SoROUTE262->setFromField(QString("fraction_changed"));
SoROUTE262->setFromNode(QString("KickTimer"));
SoROUTE262->setToField(QString("set_fraction"));
SoROUTE262->setToNode(QString("vt7RotInterp"));
SoNode15->addChild(*SoROUTE262);

SoROUTE* SoROUTE263 = new SoROUTE();
SoROUTE263->setFromField(QString("fraction_changed"));
SoROUTE263->setFromNode(QString("KickTimer"));
SoROUTE263->setToField(QString("set_fraction"));
SoROUTE263->setToNode(QString("vt6RotInterp"));
SoNode15->addChild(*SoROUTE263);

SoROUTE* SoROUTE264 = new SoROUTE();
SoROUTE264->setFromField(QString("fraction_changed"));
SoROUTE264->setFromNode(QString("KickTimer"));
SoROUTE264->setToField(QString("set_fraction"));
SoROUTE264->setToNode(QString("vt5RotInterp"));
SoNode15->addChild(*SoROUTE264);

SoROUTE* SoROUTE265 = new SoROUTE();
SoROUTE265->setFromField(QString("fraction_changed"));
SoROUTE265->setFromNode(QString("KickTimer"));
SoROUTE265->setToField(QString("set_fraction"));
SoROUTE265->setToNode(QString("vt4RotInterp"));
SoNode15->addChild(*SoROUTE265);

SoROUTE* SoROUTE266 = new SoROUTE();
SoROUTE266->setFromField(QString("fraction_changed"));
SoROUTE266->setFromNode(QString("KickTimer"));
SoROUTE266->setToField(QString("set_fraction"));
SoROUTE266->setToNode(QString("vt3RotInterp"));
SoNode15->addChild(*SoROUTE266);

SoROUTE* SoROUTE267 = new SoROUTE();
SoROUTE267->setFromField(QString("fraction_changed"));
SoROUTE267->setFromNode(QString("KickTimer"));
SoROUTE267->setToField(QString("set_fraction"));
SoROUTE267->setToNode(QString("vt2RotInterp"));
SoNode15->addChild(*SoROUTE267);

SoROUTE* SoROUTE268 = new SoROUTE();
SoROUTE268->setFromField(QString("fraction_changed"));
SoROUTE268->setFromNode(QString("KickTimer"));
SoROUTE268->setToField(QString("set_fraction"));
SoROUTE268->setToNode(QString("vt1RotInterp"));
SoNode15->addChild(*SoROUTE268);

SoROUTE* SoROUTE269 = new SoROUTE();
SoROUTE269->setFromField(QString("fraction_changed"));
SoROUTE269->setFromNode(QString("KickTimer"));
SoROUTE269->setToField(QString("set_fraction"));
SoROUTE269->setToNode(QString("vc7RotInterp"));
SoNode15->addChild(*SoROUTE269);

SoROUTE* SoROUTE270 = new SoROUTE();
SoROUTE270->setFromField(QString("fraction_changed"));
SoROUTE270->setFromNode(QString("KickTimer"));
SoROUTE270->setToField(QString("set_fraction"));
SoROUTE270->setToNode(QString("vc6RotInterp"));
SoNode15->addChild(*SoROUTE270);

SoROUTE* SoROUTE271 = new SoROUTE();
SoROUTE271->setFromField(QString("fraction_changed"));
SoROUTE271->setFromNode(QString("KickTimer"));
SoROUTE271->setToField(QString("set_fraction"));
SoROUTE271->setToNode(QString("vc5RotInterp"));
SoNode15->addChild(*SoROUTE271);

SoROUTE* SoROUTE272 = new SoROUTE();
SoROUTE272->setFromField(QString("fraction_changed"));
SoROUTE272->setFromNode(QString("KickTimer"));
SoROUTE272->setToField(QString("set_fraction"));
SoROUTE272->setToNode(QString("vc4RotInterp"));
SoNode15->addChild(*SoROUTE272);

SoROUTE* SoROUTE273 = new SoROUTE();
SoROUTE273->setFromField(QString("fraction_changed"));
SoROUTE273->setFromNode(QString("KickTimer"));
SoROUTE273->setToField(QString("set_fraction"));
SoROUTE273->setToNode(QString("vc3RotInterp"));
SoNode15->addChild(*SoROUTE273);

SoROUTE* SoROUTE274 = new SoROUTE();
SoROUTE274->setFromField(QString("fraction_changed"));
SoROUTE274->setFromNode(QString("KickTimer"));
SoROUTE274->setToField(QString("set_fraction"));
SoROUTE274->setToNode(QString("vc2RotInterp"));
SoNode15->addChild(*SoROUTE274);

SoROUTE* SoROUTE275 = new SoROUTE();
SoROUTE275->setFromField(QString("fraction_changed"));
SoROUTE275->setFromNode(QString("KickTimer"));
SoROUTE275->setToField(QString("set_fraction"));
SoROUTE275->setToNode(QString("vc1RotInterp"));
SoNode15->addChild(*SoROUTE275);

SoROUTE* SoROUTE276 = new SoROUTE();
SoROUTE276->setFromField(QString("fraction_changed"));
SoROUTE276->setFromNode(QString("KickTimer"));
SoROUTE276->setToField(QString("set_fraction"));
SoROUTE276->setToNode(QString("skullbaseRotInterp"));
SoNode15->addChild(*SoROUTE276);

SoROUTE* SoROUTE277 = new SoROUTE();
SoROUTE277->setFromField(QString("fraction_changed"));
SoROUTE277->setFromNode(QString("KickTimer"));
SoROUTE277->setToField(QString("set_fraction"));
SoROUTE277->setToNode(QString("l_eyelid_jointRotInterp"));
SoNode15->addChild(*SoROUTE277);

SoROUTE* SoROUTE278 = new SoROUTE();
SoROUTE278->setFromField(QString("fraction_changed"));
SoROUTE278->setFromNode(QString("KickTimer"));
SoROUTE278->setToField(QString("set_fraction"));
SoROUTE278->setToNode(QString("l_eyeball_jointRotInterp"));
SoNode15->addChild(*SoROUTE278);

SoROUTE* SoROUTE279 = new SoROUTE();
SoROUTE279->setFromField(QString("fraction_changed"));
SoROUTE279->setFromNode(QString("KickTimer"));
SoROUTE279->setToField(QString("set_fraction"));
SoROUTE279->setToNode(QString("l_eyebrow_jointRotInterp"));
SoNode15->addChild(*SoROUTE279);

SoROUTE* SoROUTE280 = new SoROUTE();
SoROUTE280->setFromField(QString("fraction_changed"));
SoROUTE280->setFromNode(QString("KickTimer"));
SoROUTE280->setToField(QString("set_fraction"));
SoROUTE280->setToNode(QString("r_eyelid_jointRotInterp"));
SoNode15->addChild(*SoROUTE280);

SoROUTE* SoROUTE281 = new SoROUTE();
SoROUTE281->setFromField(QString("fraction_changed"));
SoROUTE281->setFromNode(QString("KickTimer"));
SoROUTE281->setToField(QString("set_fraction"));
SoROUTE281->setToNode(QString("r_eyeball_jointRotInterp"));
SoNode15->addChild(*SoROUTE281);

SoROUTE* SoROUTE282 = new SoROUTE();
SoROUTE282->setFromField(QString("fraction_changed"));
SoROUTE282->setFromNode(QString("KickTimer"));
SoROUTE282->setToField(QString("set_fraction"));
SoROUTE282->setToNode(QString("r_eyebrow_jointRotInterp"));
SoNode15->addChild(*SoROUTE282);

SoROUTE* SoROUTE283 = new SoROUTE();
SoROUTE283->setFromField(QString("fraction_changed"));
SoROUTE283->setFromNode(QString("KickTimer"));
SoROUTE283->setToField(QString("set_fraction"));
SoROUTE283->setToNode(QString("temporomandibularRotInterp"));
SoNode15->addChild(*SoROUTE283);

SoROUTE* SoROUTE284 = new SoROUTE();
SoROUTE284->setFromField(QString("fraction_changed"));
SoROUTE284->setFromNode(QString("KickTimer"));
SoROUTE284->setToField(QString("set_fraction"));
SoROUTE284->setToNode(QString("l_sternoclavicularRotInterp"));
SoNode15->addChild(*SoROUTE284);

SoROUTE* SoROUTE285 = new SoROUTE();
SoROUTE285->setFromField(QString("fraction_changed"));
SoROUTE285->setFromNode(QString("KickTimer"));
SoROUTE285->setToField(QString("set_fraction"));
SoROUTE285->setToNode(QString("l_acromioclavicularRotInterp"));
SoNode15->addChild(*SoROUTE285);

SoROUTE* SoROUTE286 = new SoROUTE();
SoROUTE286->setFromField(QString("fraction_changed"));
SoROUTE286->setFromNode(QString("KickTimer"));
SoROUTE286->setToField(QString("set_fraction"));
SoROUTE286->setToNode(QString("l_shoulderRotInterp"));
SoNode15->addChild(*SoROUTE286);

SoROUTE* SoROUTE287 = new SoROUTE();
SoROUTE287->setFromField(QString("fraction_changed"));
SoROUTE287->setFromNode(QString("KickTimer"));
SoROUTE287->setToField(QString("set_fraction"));
SoROUTE287->setToNode(QString("l_elbowRotInterp"));
SoNode15->addChild(*SoROUTE287);

SoROUTE* SoROUTE288 = new SoROUTE();
SoROUTE288->setFromField(QString("fraction_changed"));
SoROUTE288->setFromNode(QString("KickTimer"));
SoROUTE288->setToField(QString("set_fraction"));
SoROUTE288->setToNode(QString("l_wristRotInterp"));
SoNode15->addChild(*SoROUTE288);

SoROUTE* SoROUTE289 = new SoROUTE();
SoROUTE289->setFromField(QString("fraction_changed"));
SoROUTE289->setFromNode(QString("KickTimer"));
SoROUTE289->setToField(QString("set_fraction"));
SoROUTE289->setToNode(QString("l_thumb1RotInterp"));
SoNode15->addChild(*SoROUTE289);

SoROUTE* SoROUTE290 = new SoROUTE();
SoROUTE290->setFromField(QString("fraction_changed"));
SoROUTE290->setFromNode(QString("KickTimer"));
SoROUTE290->setToField(QString("set_fraction"));
SoROUTE290->setToNode(QString("l_thumb2RotInterp"));
SoNode15->addChild(*SoROUTE290);

SoROUTE* SoROUTE291 = new SoROUTE();
SoROUTE291->setFromField(QString("fraction_changed"));
SoROUTE291->setFromNode(QString("KickTimer"));
SoROUTE291->setToField(QString("set_fraction"));
SoROUTE291->setToNode(QString("l_thumb3RotInterp"));
SoNode15->addChild(*SoROUTE291);

SoROUTE* SoROUTE292 = new SoROUTE();
SoROUTE292->setFromField(QString("fraction_changed"));
SoROUTE292->setFromNode(QString("KickTimer"));
SoROUTE292->setToField(QString("set_fraction"));
SoROUTE292->setToNode(QString("l_index0RotInterp"));
SoNode15->addChild(*SoROUTE292);

SoROUTE* SoROUTE293 = new SoROUTE();
SoROUTE293->setFromField(QString("fraction_changed"));
SoROUTE293->setFromNode(QString("KickTimer"));
SoROUTE293->setToField(QString("set_fraction"));
SoROUTE293->setToNode(QString("l_index1RotInterp"));
SoNode15->addChild(*SoROUTE293);

SoROUTE* SoROUTE294 = new SoROUTE();
SoROUTE294->setFromField(QString("fraction_changed"));
SoROUTE294->setFromNode(QString("KickTimer"));
SoROUTE294->setToField(QString("set_fraction"));
SoROUTE294->setToNode(QString("l_index2RotInterp"));
SoNode15->addChild(*SoROUTE294);

SoROUTE* SoROUTE295 = new SoROUTE();
SoROUTE295->setFromField(QString("fraction_changed"));
SoROUTE295->setFromNode(QString("KickTimer"));
SoROUTE295->setToField(QString("set_fraction"));
SoROUTE295->setToNode(QString("l_index3RotInterp"));
SoNode15->addChild(*SoROUTE295);

SoROUTE* SoROUTE296 = new SoROUTE();
SoROUTE296->setFromField(QString("fraction_changed"));
SoROUTE296->setFromNode(QString("KickTimer"));
SoROUTE296->setToField(QString("set_fraction"));
SoROUTE296->setToNode(QString("l_middle0RotInterp"));
SoNode15->addChild(*SoROUTE296);

SoROUTE* SoROUTE297 = new SoROUTE();
SoROUTE297->setFromField(QString("fraction_changed"));
SoROUTE297->setFromNode(QString("KickTimer"));
SoROUTE297->setToField(QString("set_fraction"));
SoROUTE297->setToNode(QString("l_middle1RotInterp"));
SoNode15->addChild(*SoROUTE297);

SoROUTE* SoROUTE298 = new SoROUTE();
SoROUTE298->setFromField(QString("fraction_changed"));
SoROUTE298->setFromNode(QString("KickTimer"));
SoROUTE298->setToField(QString("set_fraction"));
SoROUTE298->setToNode(QString("l_middle2RotInterp"));
SoNode15->addChild(*SoROUTE298);

SoROUTE* SoROUTE299 = new SoROUTE();
SoROUTE299->setFromField(QString("fraction_changed"));
SoROUTE299->setFromNode(QString("KickTimer"));
SoROUTE299->setToField(QString("set_fraction"));
SoROUTE299->setToNode(QString("l_middle3RotInterp"));
SoNode15->addChild(*SoROUTE299);

SoROUTE* SoROUTE300 = new SoROUTE();
SoROUTE300->setFromField(QString("fraction_changed"));
SoROUTE300->setFromNode(QString("KickTimer"));
SoROUTE300->setToField(QString("set_fraction"));
SoROUTE300->setToNode(QString("l_ring0RotInterp"));
SoNode15->addChild(*SoROUTE300);

SoROUTE* SoROUTE301 = new SoROUTE();
SoROUTE301->setFromField(QString("fraction_changed"));
SoROUTE301->setFromNode(QString("KickTimer"));
SoROUTE301->setToField(QString("set_fraction"));
SoROUTE301->setToNode(QString("l_ring1RotInterp"));
SoNode15->addChild(*SoROUTE301);

SoROUTE* SoROUTE302 = new SoROUTE();
SoROUTE302->setFromField(QString("fraction_changed"));
SoROUTE302->setFromNode(QString("KickTimer"));
SoROUTE302->setToField(QString("set_fraction"));
SoROUTE302->setToNode(QString("l_ring2RotInterp"));
SoNode15->addChild(*SoROUTE302);

SoROUTE* SoROUTE303 = new SoROUTE();
SoROUTE303->setFromField(QString("fraction_changed"));
SoROUTE303->setFromNode(QString("KickTimer"));
SoROUTE303->setToField(QString("set_fraction"));
SoROUTE303->setToNode(QString("l_ring3RotInterp"));
SoNode15->addChild(*SoROUTE303);

SoROUTE* SoROUTE304 = new SoROUTE();
SoROUTE304->setFromField(QString("fraction_changed"));
SoROUTE304->setFromNode(QString("KickTimer"));
SoROUTE304->setToField(QString("set_fraction"));
SoROUTE304->setToNode(QString("l_pinky0RotInterp"));
SoNode15->addChild(*SoROUTE304);

SoROUTE* SoROUTE305 = new SoROUTE();
SoROUTE305->setFromField(QString("fraction_changed"));
SoROUTE305->setFromNode(QString("KickTimer"));
SoROUTE305->setToField(QString("set_fraction"));
SoROUTE305->setToNode(QString("l_pinky1RotInterp"));
SoNode15->addChild(*SoROUTE305);

SoROUTE* SoROUTE306 = new SoROUTE();
SoROUTE306->setFromField(QString("fraction_changed"));
SoROUTE306->setFromNode(QString("KickTimer"));
SoROUTE306->setToField(QString("set_fraction"));
SoROUTE306->setToNode(QString("l_pinky2RotInterp"));
SoNode15->addChild(*SoROUTE306);

SoROUTE* SoROUTE307 = new SoROUTE();
SoROUTE307->setFromField(QString("fraction_changed"));
SoROUTE307->setFromNode(QString("KickTimer"));
SoROUTE307->setToField(QString("set_fraction"));
SoROUTE307->setToNode(QString("l_pinky3RotInterp"));
SoNode15->addChild(*SoROUTE307);

SoROUTE* SoROUTE308 = new SoROUTE();
SoROUTE308->setFromField(QString("fraction_changed"));
SoROUTE308->setFromNode(QString("KickTimer"));
SoROUTE308->setToField(QString("set_fraction"));
SoROUTE308->setToNode(QString("r_sternoclavicularRotInterp"));
SoNode15->addChild(*SoROUTE308);

SoROUTE* SoROUTE309 = new SoROUTE();
SoROUTE309->setFromField(QString("fraction_changed"));
SoROUTE309->setFromNode(QString("KickTimer"));
SoROUTE309->setToField(QString("set_fraction"));
SoROUTE309->setToNode(QString("r_acromioclavicularRotInterp"));
SoNode15->addChild(*SoROUTE309);

SoROUTE* SoROUTE310 = new SoROUTE();
SoROUTE310->setFromField(QString("fraction_changed"));
SoROUTE310->setFromNode(QString("KickTimer"));
SoROUTE310->setToField(QString("set_fraction"));
SoROUTE310->setToNode(QString("r_shoulderRotInterp"));
SoNode15->addChild(*SoROUTE310);

SoROUTE* SoROUTE311 = new SoROUTE();
SoROUTE311->setFromField(QString("fraction_changed"));
SoROUTE311->setFromNode(QString("KickTimer"));
SoROUTE311->setToField(QString("set_fraction"));
SoROUTE311->setToNode(QString("r_elbowRotInterp"));
SoNode15->addChild(*SoROUTE311);

SoROUTE* SoROUTE312 = new SoROUTE();
SoROUTE312->setFromField(QString("fraction_changed"));
SoROUTE312->setFromNode(QString("KickTimer"));
SoROUTE312->setToField(QString("set_fraction"));
SoROUTE312->setToNode(QString("r_wristRotInterp"));
SoNode15->addChild(*SoROUTE312);

SoROUTE* SoROUTE313 = new SoROUTE();
SoROUTE313->setFromField(QString("fraction_changed"));
SoROUTE313->setFromNode(QString("KickTimer"));
SoROUTE313->setToField(QString("set_fraction"));
SoROUTE313->setToNode(QString("r_thumb1RotInterp"));
SoNode15->addChild(*SoROUTE313);

SoROUTE* SoROUTE314 = new SoROUTE();
SoROUTE314->setFromField(QString("fraction_changed"));
SoROUTE314->setFromNode(QString("KickTimer"));
SoROUTE314->setToField(QString("set_fraction"));
SoROUTE314->setToNode(QString("r_thumb2RotInterp"));
SoNode15->addChild(*SoROUTE314);

SoROUTE* SoROUTE315 = new SoROUTE();
SoROUTE315->setFromField(QString("fraction_changed"));
SoROUTE315->setFromNode(QString("KickTimer"));
SoROUTE315->setToField(QString("set_fraction"));
SoROUTE315->setToNode(QString("r_thumb3RotInterp"));
SoNode15->addChild(*SoROUTE315);

SoROUTE* SoROUTE316 = new SoROUTE();
SoROUTE316->setFromField(QString("fraction_changed"));
SoROUTE316->setFromNode(QString("KickTimer"));
SoROUTE316->setToField(QString("set_fraction"));
SoROUTE316->setToNode(QString("r_index0RotInterp"));
SoNode15->addChild(*SoROUTE316);

SoROUTE* SoROUTE317 = new SoROUTE();
SoROUTE317->setFromField(QString("fraction_changed"));
SoROUTE317->setFromNode(QString("KickTimer"));
SoROUTE317->setToField(QString("set_fraction"));
SoROUTE317->setToNode(QString("r_index1RotInterp"));
SoNode15->addChild(*SoROUTE317);

SoROUTE* SoROUTE318 = new SoROUTE();
SoROUTE318->setFromField(QString("fraction_changed"));
SoROUTE318->setFromNode(QString("KickTimer"));
SoROUTE318->setToField(QString("set_fraction"));
SoROUTE318->setToNode(QString("r_index2RotInterp"));
SoNode15->addChild(*SoROUTE318);

SoROUTE* SoROUTE319 = new SoROUTE();
SoROUTE319->setFromField(QString("fraction_changed"));
SoROUTE319->setFromNode(QString("KickTimer"));
SoROUTE319->setToField(QString("set_fraction"));
SoROUTE319->setToNode(QString("r_index3RotInterp"));
SoNode15->addChild(*SoROUTE319);

SoROUTE* SoROUTE320 = new SoROUTE();
SoROUTE320->setFromField(QString("fraction_changed"));
SoROUTE320->setFromNode(QString("KickTimer"));
SoROUTE320->setToField(QString("set_fraction"));
SoROUTE320->setToNode(QString("r_middle0RotInterp"));
SoNode15->addChild(*SoROUTE320);

SoROUTE* SoROUTE321 = new SoROUTE();
SoROUTE321->setFromField(QString("fraction_changed"));
SoROUTE321->setFromNode(QString("KickTimer"));
SoROUTE321->setToField(QString("set_fraction"));
SoROUTE321->setToNode(QString("r_middle1RotInterp"));
SoNode15->addChild(*SoROUTE321);

SoROUTE* SoROUTE322 = new SoROUTE();
SoROUTE322->setFromField(QString("fraction_changed"));
SoROUTE322->setFromNode(QString("KickTimer"));
SoROUTE322->setToField(QString("set_fraction"));
SoROUTE322->setToNode(QString("r_middle2RotInterp"));
SoNode15->addChild(*SoROUTE322);

SoROUTE* SoROUTE323 = new SoROUTE();
SoROUTE323->setFromField(QString("fraction_changed"));
SoROUTE323->setFromNode(QString("KickTimer"));
SoROUTE323->setToField(QString("set_fraction"));
SoROUTE323->setToNode(QString("r_middle3RotInterp"));
SoNode15->addChild(*SoROUTE323);

SoROUTE* SoROUTE324 = new SoROUTE();
SoROUTE324->setFromField(QString("fraction_changed"));
SoROUTE324->setFromNode(QString("KickTimer"));
SoROUTE324->setToField(QString("set_fraction"));
SoROUTE324->setToNode(QString("r_ring0RotInterp"));
SoNode15->addChild(*SoROUTE324);

SoROUTE* SoROUTE325 = new SoROUTE();
SoROUTE325->setFromField(QString("fraction_changed"));
SoROUTE325->setFromNode(QString("KickTimer"));
SoROUTE325->setToField(QString("set_fraction"));
SoROUTE325->setToNode(QString("r_ring1RotInterp"));
SoNode15->addChild(*SoROUTE325);

SoROUTE* SoROUTE326 = new SoROUTE();
SoROUTE326->setFromField(QString("fraction_changed"));
SoROUTE326->setFromNode(QString("KickTimer"));
SoROUTE326->setToField(QString("set_fraction"));
SoROUTE326->setToNode(QString("r_ring2RotInterp"));
SoNode15->addChild(*SoROUTE326);

SoROUTE* SoROUTE327 = new SoROUTE();
SoROUTE327->setFromField(QString("fraction_changed"));
SoROUTE327->setFromNode(QString("KickTimer"));
SoROUTE327->setToField(QString("set_fraction"));
SoROUTE327->setToNode(QString("r_ring3RotInterp"));
SoNode15->addChild(*SoROUTE327);

SoROUTE* SoROUTE328 = new SoROUTE();
SoROUTE328->setFromField(QString("fraction_changed"));
SoROUTE328->setFromNode(QString("KickTimer"));
SoROUTE328->setToField(QString("set_fraction"));
SoROUTE328->setToNode(QString("r_pinky0RotInterp"));
SoNode15->addChild(*SoROUTE328);

SoROUTE* SoROUTE329 = new SoROUTE();
SoROUTE329->setFromField(QString("fraction_changed"));
SoROUTE329->setFromNode(QString("KickTimer"));
SoROUTE329->setToField(QString("set_fraction"));
SoROUTE329->setToNode(QString("r_pinky1RotInterp"));
SoNode15->addChild(*SoROUTE329);

SoROUTE* SoROUTE330 = new SoROUTE();
SoROUTE330->setFromField(QString("fraction_changed"));
SoROUTE330->setFromNode(QString("KickTimer"));
SoROUTE330->setToField(QString("set_fraction"));
SoROUTE330->setToNode(QString("r_pinky2RotInterp"));
SoNode15->addChild(*SoROUTE330);

SoROUTE* SoROUTE331 = new SoROUTE();
SoROUTE331->setFromField(QString("fraction_changed"));
SoROUTE331->setFromNode(QString("KickTimer"));
SoROUTE331->setToField(QString("set_fraction"));
SoROUTE331->setToNode(QString("r_pinky3RotInterp"));
SoNode15->addChild(*SoROUTE331);

//Routes from Interpolators to Joe_ model Joints
SoROUTE* SoROUTE332 = new SoROUTE();
SoROUTE332->setFromField(QString("value_changed"));
SoROUTE332->setFromNode(QString("HumanoidRootRotInterp"));
SoROUTE332->setToField(QString("set_rotation"));
SoROUTE332->setToNode(QString("Joe_HumanoidRoot"));
SoNode15->addChild(*SoROUTE332);

SoROUTE* SoROUTE333 = new SoROUTE();
SoROUTE333->setFromField(QString("value_changed"));
SoROUTE333->setFromNode(QString("HumanoidRootTransInterp"));
SoROUTE333->setToField(QString("set_translation"));
SoROUTE333->setToNode(QString("Joe_HumanoidRoot"));
SoNode15->addChild(*SoROUTE333);

SoROUTE* SoROUTE334 = new SoROUTE();
SoROUTE334->setFromField(QString("value_changed"));
SoROUTE334->setFromNode(QString("sacroiliacRotInterp"));
SoROUTE334->setToField(QString("set_rotation"));
SoROUTE334->setToNode(QString("Joe_sacroiliac"));
SoNode15->addChild(*SoROUTE334);

SoROUTE* SoROUTE335 = new SoROUTE();
SoROUTE335->setFromField(QString("value_changed"));
SoROUTE335->setFromNode(QString("l_hipRotInterp"));
SoROUTE335->setToField(QString("set_rotation"));
SoROUTE335->setToNode(QString("Joe_l_hip"));
SoNode15->addChild(*SoROUTE335);

SoROUTE* SoROUTE336 = new SoROUTE();
SoROUTE336->setFromField(QString("value_changed"));
SoROUTE336->setFromNode(QString("l_kneeRotInterp"));
SoROUTE336->setToField(QString("set_rotation"));
SoROUTE336->setToNode(QString("Joe_l_knee"));
SoNode15->addChild(*SoROUTE336);

SoROUTE* SoROUTE337 = new SoROUTE();
SoROUTE337->setFromField(QString("value_changed"));
SoROUTE337->setFromNode(QString("l_ankleRotInterp"));
SoROUTE337->setToField(QString("set_rotation"));
SoROUTE337->setToNode(QString("Joe_l_ankle"));
SoNode15->addChild(*SoROUTE337);

SoROUTE* SoROUTE338 = new SoROUTE();
SoROUTE338->setFromField(QString("value_changed"));
SoROUTE338->setFromNode(QString("l_subtalarRotInterp"));
SoROUTE338->setToField(QString("set_rotation"));
SoROUTE338->setToNode(QString("Joe_l_subtalar"));
SoNode15->addChild(*SoROUTE338);

SoROUTE* SoROUTE339 = new SoROUTE();
SoROUTE339->setFromField(QString("value_changed"));
SoROUTE339->setFromNode(QString("l_midtarsalRotInterp"));
SoROUTE339->setToField(QString("set_rotation"));
SoROUTE339->setToNode(QString("Joe_l_midtarsal"));
SoNode15->addChild(*SoROUTE339);

SoROUTE* SoROUTE340 = new SoROUTE();
SoROUTE340->setFromField(QString("value_changed"));
SoROUTE340->setFromNode(QString("l_metatarsalRotInterp"));
SoROUTE340->setToField(QString("set_rotation"));
SoROUTE340->setToNode(QString("Joe_l_metatarsal"));
SoNode15->addChild(*SoROUTE340);

SoROUTE* SoROUTE341 = new SoROUTE();
SoROUTE341->setFromField(QString("value_changed"));
SoROUTE341->setFromNode(QString("r_hipRotInterp"));
SoROUTE341->setToField(QString("set_rotation"));
SoROUTE341->setToNode(QString("Joe_r_hip"));
SoNode15->addChild(*SoROUTE341);

SoROUTE* SoROUTE342 = new SoROUTE();
SoROUTE342->setFromField(QString("value_changed"));
SoROUTE342->setFromNode(QString("r_kneeRotInterp"));
SoROUTE342->setToField(QString("set_rotation"));
SoROUTE342->setToNode(QString("Joe_r_knee"));
SoNode15->addChild(*SoROUTE342);

SoROUTE* SoROUTE343 = new SoROUTE();
SoROUTE343->setFromField(QString("value_changed"));
SoROUTE343->setFromNode(QString("r_ankleRotInterp"));
SoROUTE343->setToField(QString("set_rotation"));
SoROUTE343->setToNode(QString("Joe_r_ankle"));
SoNode15->addChild(*SoROUTE343);

SoROUTE* SoROUTE344 = new SoROUTE();
SoROUTE344->setFromField(QString("value_changed"));
SoROUTE344->setFromNode(QString("r_subtalarRotInterp"));
SoROUTE344->setToField(QString("set_rotation"));
SoROUTE344->setToNode(QString("Joe_r_subtalar"));
SoNode15->addChild(*SoROUTE344);

SoROUTE* SoROUTE345 = new SoROUTE();
SoROUTE345->setFromField(QString("value_changed"));
SoROUTE345->setFromNode(QString("r_midtarsalRotInterp"));
SoROUTE345->setToField(QString("set_rotation"));
SoROUTE345->setToNode(QString("Joe_r_midtarsal"));
SoNode15->addChild(*SoROUTE345);

SoROUTE* SoROUTE346 = new SoROUTE();
SoROUTE346->setFromField(QString("value_changed"));
SoROUTE346->setFromNode(QString("r_metatarsalRotInterp"));
SoROUTE346->setToField(QString("set_rotation"));
SoROUTE346->setToNode(QString("Joe_r_metatarsal"));
SoNode15->addChild(*SoROUTE346);

SoROUTE* SoROUTE347 = new SoROUTE();
SoROUTE347->setFromField(QString("value_changed"));
SoROUTE347->setFromNode(QString("vl5RotInterp"));
SoROUTE347->setToField(QString("set_rotation"));
SoROUTE347->setToNode(QString("Joe_vl5"));
SoNode15->addChild(*SoROUTE347);

SoROUTE* SoROUTE348 = new SoROUTE();
SoROUTE348->setFromField(QString("value_changed"));
SoROUTE348->setFromNode(QString("vl4RotInterp"));
SoROUTE348->setToField(QString("set_rotation"));
SoROUTE348->setToNode(QString("Joe_vl4"));
SoNode15->addChild(*SoROUTE348);

SoROUTE* SoROUTE349 = new SoROUTE();
SoROUTE349->setFromField(QString("value_changed"));
SoROUTE349->setFromNode(QString("vl3RotInterp"));
SoROUTE349->setToField(QString("set_rotation"));
SoROUTE349->setToNode(QString("Joe_vl3"));
SoNode15->addChild(*SoROUTE349);

SoROUTE* SoROUTE350 = new SoROUTE();
SoROUTE350->setFromField(QString("value_changed"));
SoROUTE350->setFromNode(QString("vl2RotInterp"));
SoROUTE350->setToField(QString("set_rotation"));
SoROUTE350->setToNode(QString("Joe_vl2"));
SoNode15->addChild(*SoROUTE350);

SoROUTE* SoROUTE351 = new SoROUTE();
SoROUTE351->setFromField(QString("value_changed"));
SoROUTE351->setFromNode(QString("vl1RotInterp"));
SoROUTE351->setToField(QString("set_rotation"));
SoROUTE351->setToNode(QString("Joe_vl1"));
SoNode15->addChild(*SoROUTE351);

SoROUTE* SoROUTE352 = new SoROUTE();
SoROUTE352->setFromField(QString("value_changed"));
SoROUTE352->setFromNode(QString("vt12RotInterp"));
SoROUTE352->setToField(QString("set_rotation"));
SoROUTE352->setToNode(QString("Joe_vt12"));
SoNode15->addChild(*SoROUTE352);

SoROUTE* SoROUTE353 = new SoROUTE();
SoROUTE353->setFromField(QString("value_changed"));
SoROUTE353->setFromNode(QString("vt11RotInterp"));
SoROUTE353->setToField(QString("set_rotation"));
SoROUTE353->setToNode(QString("Joe_vt11"));
SoNode15->addChild(*SoROUTE353);

SoROUTE* SoROUTE354 = new SoROUTE();
SoROUTE354->setFromField(QString("value_changed"));
SoROUTE354->setFromNode(QString("vt10RotInterp"));
SoROUTE354->setToField(QString("set_rotation"));
SoROUTE354->setToNode(QString("Joe_vt10"));
SoNode15->addChild(*SoROUTE354);

SoROUTE* SoROUTE355 = new SoROUTE();
SoROUTE355->setFromField(QString("value_changed"));
SoROUTE355->setFromNode(QString("vt9RotInterp"));
SoROUTE355->setToField(QString("set_rotation"));
SoROUTE355->setToNode(QString("Joe_vt9"));
SoNode15->addChild(*SoROUTE355);

SoROUTE* SoROUTE356 = new SoROUTE();
SoROUTE356->setFromField(QString("value_changed"));
SoROUTE356->setFromNode(QString("vt8RotInterp"));
SoROUTE356->setToField(QString("set_rotation"));
SoROUTE356->setToNode(QString("Joe_vt8"));
SoNode15->addChild(*SoROUTE356);

SoROUTE* SoROUTE357 = new SoROUTE();
SoROUTE357->setFromField(QString("value_changed"));
SoROUTE357->setFromNode(QString("vt7RotInterp"));
SoROUTE357->setToField(QString("set_rotation"));
SoROUTE357->setToNode(QString("Joe_vt7"));
SoNode15->addChild(*SoROUTE357);

SoROUTE* SoROUTE358 = new SoROUTE();
SoROUTE358->setFromField(QString("value_changed"));
SoROUTE358->setFromNode(QString("vt6RotInterp"));
SoROUTE358->setToField(QString("set_rotation"));
SoROUTE358->setToNode(QString("Joe_vt6"));
SoNode15->addChild(*SoROUTE358);

SoROUTE* SoROUTE359 = new SoROUTE();
SoROUTE359->setFromField(QString("value_changed"));
SoROUTE359->setFromNode(QString("vt5RotInterp"));
SoROUTE359->setToField(QString("set_rotation"));
SoROUTE359->setToNode(QString("Joe_vt5"));
SoNode15->addChild(*SoROUTE359);

SoROUTE* SoROUTE360 = new SoROUTE();
SoROUTE360->setFromField(QString("value_changed"));
SoROUTE360->setFromNode(QString("vt4RotInterp"));
SoROUTE360->setToField(QString("set_rotation"));
SoROUTE360->setToNode(QString("Joe_vt4"));
SoNode15->addChild(*SoROUTE360);

SoROUTE* SoROUTE361 = new SoROUTE();
SoROUTE361->setFromField(QString("value_changed"));
SoROUTE361->setFromNode(QString("vt3RotInterp"));
SoROUTE361->setToField(QString("set_rotation"));
SoROUTE361->setToNode(QString("Joe_vt3"));
SoNode15->addChild(*SoROUTE361);

SoROUTE* SoROUTE362 = new SoROUTE();
SoROUTE362->setFromField(QString("value_changed"));
SoROUTE362->setFromNode(QString("vt2RotInterp"));
SoROUTE362->setToField(QString("set_rotation"));
SoROUTE362->setToNode(QString("Joe_vt2"));
SoNode15->addChild(*SoROUTE362);

SoROUTE* SoROUTE363 = new SoROUTE();
SoROUTE363->setFromField(QString("value_changed"));
SoROUTE363->setFromNode(QString("vt1RotInterp"));
SoROUTE363->setToField(QString("set_rotation"));
SoROUTE363->setToNode(QString("Joe_vt1"));
SoNode15->addChild(*SoROUTE363);

SoROUTE* SoROUTE364 = new SoROUTE();
SoROUTE364->setFromField(QString("value_changed"));
SoROUTE364->setFromNode(QString("vc7RotInterp"));
SoROUTE364->setToField(QString("set_rotation"));
SoROUTE364->setToNode(QString("Joe_vc7"));
SoNode15->addChild(*SoROUTE364);

SoROUTE* SoROUTE365 = new SoROUTE();
SoROUTE365->setFromField(QString("value_changed"));
SoROUTE365->setFromNode(QString("vc6RotInterp"));
SoROUTE365->setToField(QString("set_rotation"));
SoROUTE365->setToNode(QString("Joe_vc6"));
SoNode15->addChild(*SoROUTE365);

SoROUTE* SoROUTE366 = new SoROUTE();
SoROUTE366->setFromField(QString("value_changed"));
SoROUTE366->setFromNode(QString("vc5RotInterp"));
SoROUTE366->setToField(QString("set_rotation"));
SoROUTE366->setToNode(QString("Joe_vc5"));
SoNode15->addChild(*SoROUTE366);

SoROUTE* SoROUTE367 = new SoROUTE();
SoROUTE367->setFromField(QString("value_changed"));
SoROUTE367->setFromNode(QString("vc4RotInterp"));
SoROUTE367->setToField(QString("set_rotation"));
SoROUTE367->setToNode(QString("Joe_vc4"));
SoNode15->addChild(*SoROUTE367);

SoROUTE* SoROUTE368 = new SoROUTE();
SoROUTE368->setFromField(QString("value_changed"));
SoROUTE368->setFromNode(QString("vc3RotInterp"));
SoROUTE368->setToField(QString("set_rotation"));
SoROUTE368->setToNode(QString("Joe_vc3"));
SoNode15->addChild(*SoROUTE368);

SoROUTE* SoROUTE369 = new SoROUTE();
SoROUTE369->setFromField(QString("value_changed"));
SoROUTE369->setFromNode(QString("vc2RotInterp"));
SoROUTE369->setToField(QString("set_rotation"));
SoROUTE369->setToNode(QString("Joe_vc2"));
SoNode15->addChild(*SoROUTE369);

SoROUTE* SoROUTE370 = new SoROUTE();
SoROUTE370->setFromField(QString("value_changed"));
SoROUTE370->setFromNode(QString("vc1RotInterp"));
SoROUTE370->setToField(QString("set_rotation"));
SoROUTE370->setToNode(QString("Joe_vc1"));
SoNode15->addChild(*SoROUTE370);

SoROUTE* SoROUTE371 = new SoROUTE();
SoROUTE371->setFromField(QString("value_changed"));
SoROUTE371->setFromNode(QString("skullbaseRotInterp"));
SoROUTE371->setToField(QString("set_rotation"));
SoROUTE371->setToNode(QString("Joe_skullbase"));
SoNode15->addChild(*SoROUTE371);

SoROUTE* SoROUTE372 = new SoROUTE();
SoROUTE372->setFromField(QString("value_changed"));
SoROUTE372->setFromNode(QString("l_eyelid_jointRotInterp"));
SoROUTE372->setToField(QString("set_rotation"));
SoROUTE372->setToNode(QString("Joe_l_eyelid_joint"));
SoNode15->addChild(*SoROUTE372);

SoROUTE* SoROUTE373 = new SoROUTE();
SoROUTE373->setFromField(QString("value_changed"));
SoROUTE373->setFromNode(QString("l_eyeball_jointRotInterp"));
SoROUTE373->setToField(QString("set_rotation"));
SoROUTE373->setToNode(QString("Joe_l_eyeball_joint"));
SoNode15->addChild(*SoROUTE373);

SoROUTE* SoROUTE374 = new SoROUTE();
SoROUTE374->setFromField(QString("value_changed"));
SoROUTE374->setFromNode(QString("l_eyebrow_jointRotInterp"));
SoROUTE374->setToField(QString("set_rotation"));
SoROUTE374->setToNode(QString("Joe_l_eyebrow_joint"));
SoNode15->addChild(*SoROUTE374);

SoROUTE* SoROUTE375 = new SoROUTE();
SoROUTE375->setFromField(QString("value_changed"));
SoROUTE375->setFromNode(QString("r_eyelid_jointRotInterp"));
SoROUTE375->setToField(QString("set_rotation"));
SoROUTE375->setToNode(QString("Joe_r_eyelid_joint"));
SoNode15->addChild(*SoROUTE375);

SoROUTE* SoROUTE376 = new SoROUTE();
SoROUTE376->setFromField(QString("value_changed"));
SoROUTE376->setFromNode(QString("r_eyeball_jointRotInterp"));
SoROUTE376->setToField(QString("set_rotation"));
SoROUTE376->setToNode(QString("Joe_r_eyeball_joint"));
SoNode15->addChild(*SoROUTE376);

SoROUTE* SoROUTE377 = new SoROUTE();
SoROUTE377->setFromField(QString("value_changed"));
SoROUTE377->setFromNode(QString("r_eyebrow_jointRotInterp"));
SoROUTE377->setToField(QString("set_rotation"));
SoROUTE377->setToNode(QString("Joe_r_eyebrow_joint"));
SoNode15->addChild(*SoROUTE377);

SoROUTE* SoROUTE378 = new SoROUTE();
SoROUTE378->setFromField(QString("value_changed"));
SoROUTE378->setFromNode(QString("temporomandibularRotInterp"));
SoROUTE378->setToField(QString("set_rotation"));
SoROUTE378->setToNode(QString("Joe_temporomandibular"));
SoNode15->addChild(*SoROUTE378);

SoROUTE* SoROUTE379 = new SoROUTE();
SoROUTE379->setFromField(QString("value_changed"));
SoROUTE379->setFromNode(QString("l_sternoclavicularRotInterp"));
SoROUTE379->setToField(QString("set_rotation"));
SoROUTE379->setToNode(QString("Joe_l_sternoclavicular"));
SoNode15->addChild(*SoROUTE379);

SoROUTE* SoROUTE380 = new SoROUTE();
SoROUTE380->setFromField(QString("value_changed"));
SoROUTE380->setFromNode(QString("l_acromioclavicularRotInterp"));
SoROUTE380->setToField(QString("set_rotation"));
SoROUTE380->setToNode(QString("Joe_l_acromioclavicular"));
SoNode15->addChild(*SoROUTE380);

SoROUTE* SoROUTE381 = new SoROUTE();
SoROUTE381->setFromField(QString("value_changed"));
SoROUTE381->setFromNode(QString("l_shoulderRotInterp"));
SoROUTE381->setToField(QString("set_rotation"));
SoROUTE381->setToNode(QString("Joe_l_shoulder"));
SoNode15->addChild(*SoROUTE381);

SoROUTE* SoROUTE382 = new SoROUTE();
SoROUTE382->setFromField(QString("value_changed"));
SoROUTE382->setFromNode(QString("l_elbowRotInterp"));
SoROUTE382->setToField(QString("set_rotation"));
SoROUTE382->setToNode(QString("Joe_l_elbow"));
SoNode15->addChild(*SoROUTE382);

SoROUTE* SoROUTE383 = new SoROUTE();
SoROUTE383->setFromField(QString("value_changed"));
SoROUTE383->setFromNode(QString("l_wristRotInterp"));
SoROUTE383->setToField(QString("set_rotation"));
SoROUTE383->setToNode(QString("Joe_l_wrist"));
SoNode15->addChild(*SoROUTE383);

SoROUTE* SoROUTE384 = new SoROUTE();
SoROUTE384->setFromField(QString("value_changed"));
SoROUTE384->setFromNode(QString("l_thumb1RotInterp"));
SoROUTE384->setToField(QString("set_rotation"));
SoROUTE384->setToNode(QString("Joe_l_thumb1"));
SoNode15->addChild(*SoROUTE384);

SoROUTE* SoROUTE385 = new SoROUTE();
SoROUTE385->setFromField(QString("value_changed"));
SoROUTE385->setFromNode(QString("l_thumb2RotInterp"));
SoROUTE385->setToField(QString("set_rotation"));
SoROUTE385->setToNode(QString("Joe_l_thumb2"));
SoNode15->addChild(*SoROUTE385);

SoROUTE* SoROUTE386 = new SoROUTE();
SoROUTE386->setFromField(QString("value_changed"));
SoROUTE386->setFromNode(QString("l_thumb3RotInterp"));
SoROUTE386->setToField(QString("set_rotation"));
SoROUTE386->setToNode(QString("Joe_l_thumb3"));
SoNode15->addChild(*SoROUTE386);

SoROUTE* SoROUTE387 = new SoROUTE();
SoROUTE387->setFromField(QString("value_changed"));
SoROUTE387->setFromNode(QString("l_index0RotInterp"));
SoROUTE387->setToField(QString("set_rotation"));
SoROUTE387->setToNode(QString("Joe_l_index0"));
SoNode15->addChild(*SoROUTE387);

SoROUTE* SoROUTE388 = new SoROUTE();
SoROUTE388->setFromField(QString("value_changed"));
SoROUTE388->setFromNode(QString("l_index1RotInterp"));
SoROUTE388->setToField(QString("set_rotation"));
SoROUTE388->setToNode(QString("Joe_l_index1"));
SoNode15->addChild(*SoROUTE388);

SoROUTE* SoROUTE389 = new SoROUTE();
SoROUTE389->setFromField(QString("value_changed"));
SoROUTE389->setFromNode(QString("l_index2RotInterp"));
SoROUTE389->setToField(QString("set_rotation"));
SoROUTE389->setToNode(QString("Joe_l_index2"));
SoNode15->addChild(*SoROUTE389);

SoROUTE* SoROUTE390 = new SoROUTE();
SoROUTE390->setFromField(QString("value_changed"));
SoROUTE390->setFromNode(QString("l_index3RotInterp"));
SoROUTE390->setToField(QString("set_rotation"));
SoROUTE390->setToNode(QString("Joe_l_index3"));
SoNode15->addChild(*SoROUTE390);

SoROUTE* SoROUTE391 = new SoROUTE();
SoROUTE391->setFromField(QString("value_changed"));
SoROUTE391->setFromNode(QString("l_middle0RotInterp"));
SoROUTE391->setToField(QString("set_rotation"));
SoROUTE391->setToNode(QString("Joe_l_middle0"));
SoNode15->addChild(*SoROUTE391);

SoROUTE* SoROUTE392 = new SoROUTE();
SoROUTE392->setFromField(QString("value_changed"));
SoROUTE392->setFromNode(QString("l_middle1RotInterp"));
SoROUTE392->setToField(QString("set_rotation"));
SoROUTE392->setToNode(QString("Joe_l_middle1"));
SoNode15->addChild(*SoROUTE392);

SoROUTE* SoROUTE393 = new SoROUTE();
SoROUTE393->setFromField(QString("value_changed"));
SoROUTE393->setFromNode(QString("l_middle2RotInterp"));
SoROUTE393->setToField(QString("set_rotation"));
SoROUTE393->setToNode(QString("Joe_l_middle2"));
SoNode15->addChild(*SoROUTE393);

SoROUTE* SoROUTE394 = new SoROUTE();
SoROUTE394->setFromField(QString("value_changed"));
SoROUTE394->setFromNode(QString("l_middle3RotInterp"));
SoROUTE394->setToField(QString("set_rotation"));
SoROUTE394->setToNode(QString("Joe_l_middle3"));
SoNode15->addChild(*SoROUTE394);

SoROUTE* SoROUTE395 = new SoROUTE();
SoROUTE395->setFromField(QString("value_changed"));
SoROUTE395->setFromNode(QString("l_ring0RotInterp"));
SoROUTE395->setToField(QString("set_rotation"));
SoROUTE395->setToNode(QString("Joe_l_ring0"));
SoNode15->addChild(*SoROUTE395);

SoROUTE* SoROUTE396 = new SoROUTE();
SoROUTE396->setFromField(QString("value_changed"));
SoROUTE396->setFromNode(QString("l_ring1RotInterp"));
SoROUTE396->setToField(QString("set_rotation"));
SoROUTE396->setToNode(QString("Joe_l_ring1"));
SoNode15->addChild(*SoROUTE396);

SoROUTE* SoROUTE397 = new SoROUTE();
SoROUTE397->setFromField(QString("value_changed"));
SoROUTE397->setFromNode(QString("l_ring2RotInterp"));
SoROUTE397->setToField(QString("set_rotation"));
SoROUTE397->setToNode(QString("Joe_l_ring2"));
SoNode15->addChild(*SoROUTE397);

SoROUTE* SoROUTE398 = new SoROUTE();
SoROUTE398->setFromField(QString("value_changed"));
SoROUTE398->setFromNode(QString("l_ring3RotInterp"));
SoROUTE398->setToField(QString("set_rotation"));
SoROUTE398->setToNode(QString("Joe_l_ring3"));
SoNode15->addChild(*SoROUTE398);

SoROUTE* SoROUTE399 = new SoROUTE();
SoROUTE399->setFromField(QString("value_changed"));
SoROUTE399->setFromNode(QString("l_pinky0RotInterp"));
SoROUTE399->setToField(QString("set_rotation"));
SoROUTE399->setToNode(QString("Joe_l_pinky0"));
SoNode15->addChild(*SoROUTE399);

SoROUTE* SoROUTE400 = new SoROUTE();
SoROUTE400->setFromField(QString("value_changed"));
SoROUTE400->setFromNode(QString("l_pinky1RotInterp"));
SoROUTE400->setToField(QString("set_rotation"));
SoROUTE400->setToNode(QString("Joe_l_pinky1"));
SoNode15->addChild(*SoROUTE400);

SoROUTE* SoROUTE401 = new SoROUTE();
SoROUTE401->setFromField(QString("value_changed"));
SoROUTE401->setFromNode(QString("l_pinky2RotInterp"));
SoROUTE401->setToField(QString("set_rotation"));
SoROUTE401->setToNode(QString("Joe_l_pinky2"));
SoNode15->addChild(*SoROUTE401);

SoROUTE* SoROUTE402 = new SoROUTE();
SoROUTE402->setFromField(QString("value_changed"));
SoROUTE402->setFromNode(QString("l_pinky3RotInterp"));
SoROUTE402->setToField(QString("set_rotation"));
SoROUTE402->setToNode(QString("Joe_l_pinky3"));
SoNode15->addChild(*SoROUTE402);

SoROUTE* SoROUTE403 = new SoROUTE();
SoROUTE403->setFromField(QString("value_changed"));
SoROUTE403->setFromNode(QString("r_sternoclavicularRotInterp"));
SoROUTE403->setToField(QString("set_rotation"));
SoROUTE403->setToNode(QString("Joe_r_sternoclavicular"));
SoNode15->addChild(*SoROUTE403);

SoROUTE* SoROUTE404 = new SoROUTE();
SoROUTE404->setFromField(QString("value_changed"));
SoROUTE404->setFromNode(QString("r_acromioclavicularRotInterp"));
SoROUTE404->setToField(QString("set_rotation"));
SoROUTE404->setToNode(QString("Joe_r_acromioclavicular"));
SoNode15->addChild(*SoROUTE404);

SoROUTE* SoROUTE405 = new SoROUTE();
SoROUTE405->setFromField(QString("value_changed"));
SoROUTE405->setFromNode(QString("r_shoulderRotInterp"));
SoROUTE405->setToField(QString("set_rotation"));
SoROUTE405->setToNode(QString("Joe_r_shoulder"));
SoNode15->addChild(*SoROUTE405);

SoROUTE* SoROUTE406 = new SoROUTE();
SoROUTE406->setFromField(QString("value_changed"));
SoROUTE406->setFromNode(QString("r_elbowRotInterp"));
SoROUTE406->setToField(QString("set_rotation"));
SoROUTE406->setToNode(QString("Joe_r_elbow"));
SoNode15->addChild(*SoROUTE406);

SoROUTE* SoROUTE407 = new SoROUTE();
SoROUTE407->setFromField(QString("value_changed"));
SoROUTE407->setFromNode(QString("r_wristRotInterp"));
SoROUTE407->setToField(QString("set_rotation"));
SoROUTE407->setToNode(QString("Joe_r_wrist"));
SoNode15->addChild(*SoROUTE407);

SoROUTE* SoROUTE408 = new SoROUTE();
SoROUTE408->setFromField(QString("value_changed"));
SoROUTE408->setFromNode(QString("r_thumb1RotInterp"));
SoROUTE408->setToField(QString("set_rotation"));
SoROUTE408->setToNode(QString("Joe_r_thumb1"));
SoNode15->addChild(*SoROUTE408);

SoROUTE* SoROUTE409 = new SoROUTE();
SoROUTE409->setFromField(QString("value_changed"));
SoROUTE409->setFromNode(QString("r_thumb2RotInterp"));
SoROUTE409->setToField(QString("set_rotation"));
SoROUTE409->setToNode(QString("Joe_r_thumb2"));
SoNode15->addChild(*SoROUTE409);

SoROUTE* SoROUTE410 = new SoROUTE();
SoROUTE410->setFromField(QString("value_changed"));
SoROUTE410->setFromNode(QString("r_thumb3RotInterp"));
SoROUTE410->setToField(QString("set_rotation"));
SoROUTE410->setToNode(QString("Joe_r_thumb3"));
SoNode15->addChild(*SoROUTE410);

SoROUTE* SoROUTE411 = new SoROUTE();
SoROUTE411->setFromField(QString("value_changed"));
SoROUTE411->setFromNode(QString("r_index0RotInterp"));
SoROUTE411->setToField(QString("set_rotation"));
SoROUTE411->setToNode(QString("Joe_r_index0"));
SoNode15->addChild(*SoROUTE411);

SoROUTE* SoROUTE412 = new SoROUTE();
SoROUTE412->setFromField(QString("value_changed"));
SoROUTE412->setFromNode(QString("r_index1RotInterp"));
SoROUTE412->setToField(QString("set_rotation"));
SoROUTE412->setToNode(QString("Joe_r_index1"));
SoNode15->addChild(*SoROUTE412);

SoROUTE* SoROUTE413 = new SoROUTE();
SoROUTE413->setFromField(QString("value_changed"));
SoROUTE413->setFromNode(QString("r_index2RotInterp"));
SoROUTE413->setToField(QString("set_rotation"));
SoROUTE413->setToNode(QString("Joe_r_index2"));
SoNode15->addChild(*SoROUTE413);

SoROUTE* SoROUTE414 = new SoROUTE();
SoROUTE414->setFromField(QString("value_changed"));
SoROUTE414->setFromNode(QString("r_index3RotInterp"));
SoROUTE414->setToField(QString("set_rotation"));
SoROUTE414->setToNode(QString("Joe_r_index3"));
SoNode15->addChild(*SoROUTE414);

SoROUTE* SoROUTE415 = new SoROUTE();
SoROUTE415->setFromField(QString("value_changed"));
SoROUTE415->setFromNode(QString("r_middle0RotInterp"));
SoROUTE415->setToField(QString("set_rotation"));
SoROUTE415->setToNode(QString("Joe_r_middle0"));
SoNode15->addChild(*SoROUTE415);

SoROUTE* SoROUTE416 = new SoROUTE();
SoROUTE416->setFromField(QString("value_changed"));
SoROUTE416->setFromNode(QString("r_middle1RotInterp"));
SoROUTE416->setToField(QString("set_rotation"));
SoROUTE416->setToNode(QString("Joe_r_middle1"));
SoNode15->addChild(*SoROUTE416);

SoROUTE* SoROUTE417 = new SoROUTE();
SoROUTE417->setFromField(QString("value_changed"));
SoROUTE417->setFromNode(QString("r_middle2RotInterp"));
SoROUTE417->setToField(QString("set_rotation"));
SoROUTE417->setToNode(QString("Joe_r_middle2"));
SoNode15->addChild(*SoROUTE417);

SoROUTE* SoROUTE418 = new SoROUTE();
SoROUTE418->setFromField(QString("value_changed"));
SoROUTE418->setFromNode(QString("r_middle3RotInterp"));
SoROUTE418->setToField(QString("set_rotation"));
SoROUTE418->setToNode(QString("Joe_r_middle3"));
SoNode15->addChild(*SoROUTE418);

SoROUTE* SoROUTE419 = new SoROUTE();
SoROUTE419->setFromField(QString("value_changed"));
SoROUTE419->setFromNode(QString("r_ring0RotInterp"));
SoROUTE419->setToField(QString("set_rotation"));
SoROUTE419->setToNode(QString("Joe_r_ring0"));
SoNode15->addChild(*SoROUTE419);

SoROUTE* SoROUTE420 = new SoROUTE();
SoROUTE420->setFromField(QString("value_changed"));
SoROUTE420->setFromNode(QString("r_ring1RotInterp"));
SoROUTE420->setToField(QString("set_rotation"));
SoROUTE420->setToNode(QString("Joe_r_ring1"));
SoNode15->addChild(*SoROUTE420);

SoROUTE* SoROUTE421 = new SoROUTE();
SoROUTE421->setFromField(QString("value_changed"));
SoROUTE421->setFromNode(QString("r_ring2RotInterp"));
SoROUTE421->setToField(QString("set_rotation"));
SoROUTE421->setToNode(QString("Joe_r_ring2"));
SoNode15->addChild(*SoROUTE421);

SoROUTE* SoROUTE422 = new SoROUTE();
SoROUTE422->setFromField(QString("value_changed"));
SoROUTE422->setFromNode(QString("r_ring3RotInterp"));
SoROUTE422->setToField(QString("set_rotation"));
SoROUTE422->setToNode(QString("Joe_r_ring3"));
SoNode15->addChild(*SoROUTE422);

SoROUTE* SoROUTE423 = new SoROUTE();
SoROUTE423->setFromField(QString("value_changed"));
SoROUTE423->setFromNode(QString("r_pinky0RotInterp"));
SoROUTE423->setToField(QString("set_rotation"));
SoROUTE423->setToNode(QString("Joe_r_pinky0"));
SoNode15->addChild(*SoROUTE423);

SoROUTE* SoROUTE424 = new SoROUTE();
SoROUTE424->setFromField(QString("value_changed"));
SoROUTE424->setFromNode(QString("r_pinky1RotInterp"));
SoROUTE424->setToField(QString("set_rotation"));
SoROUTE424->setToNode(QString("Joe_r_pinky1"));
SoNode15->addChild(*SoROUTE424);

SoROUTE* SoROUTE425 = new SoROUTE();
SoROUTE425->setFromField(QString("value_changed"));
SoROUTE425->setFromNode(QString("r_pinky2RotInterp"));
SoROUTE425->setToField(QString("set_rotation"));
SoROUTE425->setToNode(QString("Joe_r_pinky2"));
SoNode15->addChild(*SoROUTE425);

SoROUTE* SoROUTE426 = new SoROUTE();
SoROUTE426->setFromField(QString("value_changed"));
SoROUTE426->setFromNode(QString("r_pinky3RotInterp"));
SoROUTE426->setToField(QString("set_rotation"));
SoROUTE426->setToNode(QString("Joe_r_pinky3"));
SoNode15->addChild(*SoROUTE426);

SoGroup* SoGroup427 = new SoGroup();
SoGroup427->setDEF(QString("DisplacersAnimationGroup"));
//TimeSensor DEF='skull_tipTestTimer' cycleInterval='5.73' loop='true' enabled='true'></TimeSensor
SoScalarInterpolator* SoScalarInterpolator428 = new SoScalarInterpolator();
SoScalarInterpolator428->setDEF(QString("skull_tipTest"));
SoScalarInterpolator428->setKey(new float[]{0.0,0.1,0.2,0.35,0.6,0.7,0.85,0.88,0.94,0.97,1.0}, 11);
SoScalarInterpolator428->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.2,0.4,1.0,0.0,1.0,0.4,0.0}, 11);
SoGroup427->addChild(*SoScalarInterpolator428);

SoROUTE* SoROUTE429 = new SoROUTE();
SoROUTE429->setFromField(QString("fraction_changed"));
SoROUTE429->setFromNode(QString("KickTimer"));
SoROUTE429->setToField(QString("set_fraction"));
SoROUTE429->setToNode(QString("skull_tipTest"));
SoGroup427->addChild(*SoROUTE429);

SoROUTE* SoROUTE430 = new SoROUTE();
SoROUTE430->setFromField(QString("value_changed"));
SoROUTE430->setFromNode(QString("skull_tipTest"));
SoROUTE430->setToField(QString("weight"));
SoROUTE430->setToNode(QString("Joe_skull_tipTest"));
SoGroup427->addChild(*SoROUTE430);

SoNode15->addChild(*SoGroup427);

SoGroup* SoGroup431 = new SoGroup();
SoGroup431->setDEF(QString("skintexturetransform_animation"));
SoScalarInterpolator* SoScalarInterpolator432 = new SoScalarInterpolator();
SoScalarInterpolator432->setDEF(QString("skinTexTransTest"));
SoScalarInterpolator432->setKey(new float[]{0.0,0.2,0.4,0.5,0.6,0.7,0.8,1.0}, 8);
SoScalarInterpolator432->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,1.0,2.0,0.0}, 8);
SoGroup431->addChild(*SoScalarInterpolator432);

SoROUTE* SoROUTE433 = new SoROUTE();
SoROUTE433->setFromField(QString("fraction_changed"));
SoROUTE433->setFromNode(QString("KickTimer"));
SoROUTE433->setToField(QString("set_fraction"));
SoROUTE433->setToNode(QString("skinTexTransTest"));
SoGroup431->addChild(*SoROUTE433);

SoROUTE* SoROUTE434 = new SoROUTE();
SoROUTE434->setFromField(QString("value_changed"));
SoROUTE434->setFromNode(QString("skinTexTransTest"));
SoROUTE434->setToField(QString("rotation"));
SoROUTE434->setToNode(QString("kicktextrans"));
SoGroup431->addChild(*SoROUTE434);

SoNode15->addChild(*SoGroup431);

SoGroup* SoGroup435 = new SoGroup();
SoTransform* SoTransform436 = new SoTransform();
SoTransform436->setDEF(QString("SBall"));
SoTransform436->setRotation(new float[]{0.7,0.0,0.7,0.1});
SoTransform436->setScale(new float[]{0.23,0.23,0.23});
SoTransform436->setTranslation(new float[]{-0.916,0.37,-0.92});
SoShape* SoShape437 = new SoShape();
SoShape437->setDEF(QString("ball_Shape"));
SoVRMLAppearance* SoVRMLAppearance438 = new SoVRMLAppearance();
SoVRMLAppearance438->setDEF(QString("ball_Appearance"));
SoMaterial* SoMaterial439 = new SoMaterial();
SoMaterial439->setDEF(QString("ball_Material"));
SoMaterial439->setDiffuseColor(new float[]{0.3,0.3,1.0});
SoMaterial439->setEmissiveColor(new float[]{0.3,0.3,0.33});
SoVRMLAppearance438->addChild(*SoMaterial439);

SoImageTexture* SoImageTexture440 = new SoImageTexture();
SoImageTexture440->setUSE(QString("JoeSkinImageTexture"));
SoVRMLAppearance438->addChild(*SoImageTexture440);

SoShape437->addChild(*SoVRMLAppearance438);

SoIndexedFaceSet* SoIndexedFaceSet441 = new SoIndexedFaceSet();
SoIndexedFaceSet441->setDEF(QString("ball_IndexedFaceSet"));
SoIndexedFaceSet441->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,1,-1,1,13,14,-1,1,14,2,-1,2,14,15,-1,2,15,3,-1,3,15,16,-1,3,16,4,-1,4,16,17,-1,4,17,5,-1,5,17,18,-1,5,18,6,-1,6,18,19,-1,6,19,7,-1,7,19,20,-1,7,20,8,-1,8,20,21,-1,8,21,9,-1,9,21,22,-1,9,22,10,-1,10,22,23,-1,10,23,11,-1,11,23,24,-1,11,24,12,-1,12,24,13,-1,12,13,1,-1,13,25,26,-1,13,26,14,-1,14,26,27,-1,14,27,15,-1,15,27,28,-1,15,28,16,-1,16,28,29,-1,16,29,17,-1,17,29,30,-1,17,30,18,-1,18,30,31,-1,18,31,19,-1,19,31,32,-1,19,32,20,-1,20,32,33,-1,20,33,21,-1,21,33,34,-1,21,34,22,-1,22,34,35,-1,22,35,23,-1,23,35,36,-1,23,36,24,-1,24,36,25,-1,24,25,13,-1,25,37,38,-1,25,38,26,-1,26,38,39,-1,26,39,27,-1,27,39,40,-1,27,40,28,-1,28,40,41,-1,28,41,29,-1,29,41,42,-1,29,42,30,-1,30,42,43,-1,30,43,31,-1,31,43,44,-1,31,44,32,-1,32,44,45,-1,32,45,33,-1,33,45,46,-1,33,46,34,-1,34,46,47,-1,34,47,35,-1,35,47,48,-1,35,48,36,-1,36,48,37,-1,36,37,25,-1,37,49,50,-1,37,50,38,-1,38,50,51,-1,38,51,39,-1,39,51,52,-1,39,52,40,-1,40,52,53,-1,40,53,41,-1,41,53,54,-1,41,54,42,-1,42,54,55,-1,42,55,43,-1,43,55,56,-1,43,56,44,-1,44,56,57,-1,44,57,45,-1,45,57,58,-1,45,58,46,-1,46,58,59,-1,46,59,47,-1,47,59,60,-1,47,60,48,-1,48,60,49,-1,48,49,37,-1,61,50,49,-1,61,51,50,-1,61,52,51,-1,61,53,52,-1,61,54,53,-1,61,55,54,-1,61,56,55,-1,61,57,56,-1,61,58,57,-1,61,59,58,-1,61,60,59,-1,61,49,60,-1}, 480);
SoCoordinate* SoCoordinate442 = new SoCoordinate();
SoCoordinate442->setDEF(QString("Ball_Coordinates"));
SoCoordinate442->setPoint(new float[]{0.0,0.4675,0.0,0.0,0.4049,-0.2338,-0.1169,0.4049,-0.2024,-0.2024,0.4049,-0.1169,-0.2338,0.4049,0.0,-0.2024,0.4049,0.1169,-0.1169,0.4049,0.2024,0.0,0.4049,0.2338,0.1169,0.4049,0.2024,0.2024,0.4049,0.1169,0.2338,0.4049,0.0,0.2024,0.4049,-0.1169,0.1169,0.4049,-0.2024,0.0,0.2338,-0.4049,-0.2024,0.2338,-0.3506,-0.3506,0.2338,-0.2024,-0.4049,0.2338,0.0,-0.3506,0.2338,0.2024,-0.2024,0.2338,0.3506,0.0,0.2338,0.4049,0.2024,0.2338,0.3506,0.3506,0.2338,0.2024,0.4049,0.2338,0.0,0.3506,0.2338,-0.2024,0.2024,0.2338,-0.3506,0.0,0.0,-0.4675,-0.2338,0.0,-0.4049,-0.4049,0.0,-0.2338,-0.4675,0.0,0.0,-0.4049,0.0,0.2338,-0.2338,0.0,0.4049,0.0,0.0,0.4675,0.2338,0.0,0.4049,0.4049,0.0,0.2338,0.4675,0.0,0.0,0.4049,0.0,-0.2338,0.2338,0.0,-0.4049,0.0,-0.2338,-0.4049,-0.2024,-0.2338,-0.3506,-0.3506,-0.2338,-0.2024,-0.4049,-0.2338,0.0,-0.3506,-0.2338,0.2024,-0.2024,-0.2338,0.3506,0.0,-0.2338,0.4049,0.2024,-0.2338,0.3506,0.3506,-0.2338,0.2024,0.4049,-0.2338,0.0,0.3506,-0.2338,-0.2024,0.2024,-0.2338,-0.3506,0.0,-0.4049,-0.2338,-0.1169,-0.4049,-0.2024,-0.2024,-0.4049,-0.1169,-0.2338,-0.4049,0.0,-0.2024,-0.4049,0.1169,-0.1169,-0.4049,0.2024,0.0,-0.4049,0.2338,0.1169,-0.4049,0.2024,0.2024,-0.4049,0.1169,0.2338,-0.4049,0.0,0.2024,-0.4049,-0.1169,0.1169,-0.4049,-0.2024,0.0,-0.4675,0.0}, 186);
SoIndexedFaceSet441->setCoord(*SoCoordinate442);

SoShape437->setGeometry(*SoIndexedFaceSet441);

SoTransform436->addChild(*SoShape437);

SoViewpoint* SoViewpoint443 = new SoViewpoint();
SoViewpoint443->setDEF(QString("ballView_1"));
SoViewpoint443->setDescription(QString("Ball View"));
SoTransform436->addChild(*SoViewpoint443);

SoGroup435->addChild(*SoTransform436);

//Ball Animation interpolators
SoPositionInterpolator* SoPositionInterpolator444 = new SoPositionInterpolator();
SoPositionInterpolator444->setDEF(QString("ballTransInterp"));
SoPositionInterpolator444->setKey(new float[]{0.0,0.4,0.409,1.0}, 4);
SoPositionInterpolator444->setKeyValue(new float[]{-1.0,0.4,-1.0,0.0,0.07,0.0,0.05,0.06,0.05,2.0,4.0,10.0}, 12);
SoGroup435->addChild(*SoPositionInterpolator444);

SoOrientationInterpolator* SoOrientationInterpolator445 = new SoOrientationInterpolator();
SoOrientationInterpolator445->setDEF(QString("ballRotInterp"));
SoOrientationInterpolator445->setKey(new float[]{0.0,0.4,0.41,0.71,1.0}, 5);
SoOrientationInterpolator445->setKeyValue(new float[]{1.0,0.0,1.0,0.25,-1.0,0.0,-1.0,1.35,-1.0,1.0,-1.0,3.35,-1.0,0.2,-1.0,3.0,-1.0,0.2,-1.0,3.0}, 20);
SoGroup435->addChild(*SoOrientationInterpolator445);

//Ball Animation Routes
SoROUTE* SoROUTE446 = new SoROUTE();
SoROUTE446->setFromField(QString("fraction_changed"));
SoROUTE446->setFromNode(QString("KickTimer"));
SoROUTE446->setToField(QString("set_fraction"));
SoROUTE446->setToNode(QString("ballTransInterp"));
SoGroup435->addChild(*SoROUTE446);

SoROUTE* SoROUTE447 = new SoROUTE();
SoROUTE447->setFromField(QString("value_changed"));
SoROUTE447->setFromNode(QString("ballTransInterp"));
SoROUTE447->setToField(QString("set_translation"));
SoROUTE447->setToNode(QString("SBall"));
SoGroup435->addChild(*SoROUTE447);

SoROUTE* SoROUTE448 = new SoROUTE();
SoROUTE448->setFromField(QString("fraction_changed"));
SoROUTE448->setFromNode(QString("KickTimer"));
SoROUTE448->setToField(QString("set_fraction"));
SoROUTE448->setToNode(QString("ballRotInterp"));
SoGroup435->addChild(*SoROUTE448);

SoROUTE* SoROUTE449 = new SoROUTE();
SoROUTE449->setFromField(QString("value_changed"));
SoROUTE449->setFromNode(QString("ballRotInterp"));
SoROUTE449->setToField(QString("set_rotation"));
SoROUTE449->setToNode(QString("SBall"));
SoGroup435->addChild(*SoROUTE449);

SoNode15->addChild(*SoGroup435);

SoGroup* SoGroup450 = new SoGroup();
SoTransform* SoTransform451 = new SoTransform();
SoTransform451->setScale(new float[]{0.2,0.2,0.2});
SoShape* SoShape452 = new SoShape();
SoShape452->setUSE(QString("AxisLinesShape"));
SoTransform451->addChild(*SoShape452);

SoGroup450->addChild(*SoTransform451);

SoTransform* SoTransform453 = new SoTransform();
SoTransform453->setDEF(QString("Circle0"));
SoTransform453->setScale(new float[]{1.175,1.0,1.175});
SoShape* SoShape454 = new SoShape();
SoShape454->setDEF(QString("circle_Shape"));
SoVRMLAppearance* SoVRMLAppearance455 = new SoVRMLAppearance();
SoVRMLAppearance455->setDEF(QString("circle0_Appearance"));
SoMaterial* SoMaterial456 = new SoMaterial();
SoMaterial456->setDEF(QString("circle0_Material"));
SoMaterial456->setAmbientIntensity(0.9);
SoMaterial456->setDiffuseColor(new float[]{0.9,0.0,0.7});
SoMaterial456->setEmissiveColor(new float[]{0.425,0.486,1.0});
SoVRMLAppearance455->addChild(*SoMaterial456);

SoShape454->addChild(*SoVRMLAppearance455);

SoIndexedLineSet* SoIndexedLineSet457 = new SoIndexedLineSet();
SoIndexedLineSet457->setDEF(QString("Orbit1"));
SoIndexedLineSet457->setCoordIndex(new int32_t[]{0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,-1}, 62);
SoCoordinate* SoCoordinate458 = new SoCoordinate();
SoCoordinate458->setDEF(QString("circle_Coordinates"));
SoCoordinate458->setPoint(new float[]{1.0,0.0,0.0,0.995,0.0,-0.105,0.979,0.0,-0.208,0.951,0.0,-0.309,0.914,0.0,-0.407,0.866,0.0,-0.5,0.809,0.0,-0.588,0.743,0.0,-0.669,0.669,0.0,-0.743,0.588,0.0,-0.809,0.5,0.0,-0.866,0.407,0.0,-0.914,0.309,0.0,-0.951,0.208,0.0,-0.978,0.105,0.0,-0.995,0.0,0.0,-1.0,-0.105,0.0,-0.994522,-0.208,0.0,-0.978,-0.309,0.0,-0.951,-0.407,0.0,-0.914,-0.5,0.0,-0.866,-0.588,0.0,-0.809,-0.669,0.0,-0.743,-0.743,0.0,-0.669,-0.809,0.0,-0.588,-0.866,0.0,-0.5,-0.914,0.0,-0.407,-0.951,0.0,-0.309,-0.978,0.0,-0.208,-0.995,0.0,-0.105,-1.0,0.0,0.0,-0.995,0.0,0.105,-0.978,0.0,0.208,-0.951,0.0,0.309,-0.914,0.0,0.407,-0.866,0.0,0.5,-0.809,0.0,0.588,-0.743,0.0,0.669,-0.669,0.0,0.743,-0.588,0.0,0.809,-0.5,0.0,0.866,-0.407,0.0,0.914,-0.309,0.0,0.951,-0.208,0.0,0.978,-0.105,0.0,0.995,0.0,0.0,1.0,0.105,0.0,0.995,0.208,0.0,0.978,0.309,0.0,0.951,0.407,0.0,0.914,0.5,0.0,0.866,0.588,0.0,0.809,0.669,0.0,0.743,0.743,0.0,0.669,0.809,0.0,0.588,0.866,0.0,0.5,0.914,0.0,0.407,0.951,0.0,0.309,0.978,0.0,0.208,0.995,0.0,0.104,1.0,0.0,0.0}, 183);
SoIndexedLineSet457->setCoord(*SoCoordinate458);

SoShape454->setGeometry(*SoIndexedLineSet457);

SoTransform453->addChild(*SoShape454);

SoGroup450->addChild(*SoTransform453);

SoTransform* SoTransform459 = new SoTransform();
SoTransform459->setDEF(QString("Circle1"));
SoTransform459->setScale(new float[]{0.5,1.0,0.5});
SoShape* SoShape460 = new SoShape();
SoShape460->setDEF(QString("circle1_Shape"));
SoVRMLAppearance* SoVRMLAppearance461 = new SoVRMLAppearance();
SoVRMLAppearance461->setDEF(QString("circle1_Appearance"));
SoMaterial* SoMaterial462 = new SoMaterial();
SoMaterial462->setDEF(QString("circle1_Material"));
SoMaterial462->setDiffuseColor(new float[]{0.9,0.0,0.7});
SoMaterial462->setEmissiveColor(new float[]{0.424956,0.483976,1.0});
SoVRMLAppearance461->addChild(*SoMaterial462);

SoShape460->addChild(*SoVRMLAppearance461);

SoIndexedLineSet* SoIndexedLineSet463 = new SoIndexedLineSet();
SoIndexedLineSet463->setUSE(QString("Orbit1"));
SoShape460->setGeometry(*SoIndexedLineSet463);

SoTransform459->addChild(*SoShape460);

SoGroup450->addChild(*SoTransform459);

SoTransform* SoTransform464 = new SoTransform();
SoTransform464->setDEF(QString("Circle2"));
SoTransform464->setScale(new float[]{0.25,1.0,0.25});
SoShape* SoShape465 = new SoShape();
SoShape465->setDEF(QString("circle2_Shape"));
SoVRMLAppearance* SoVRMLAppearance466 = new SoVRMLAppearance();
SoVRMLAppearance466->setDEF(QString("circle2_Appearance"));
SoMaterial* SoMaterial467 = new SoMaterial();
SoMaterial467->setDEF(QString("circle2_Material"));
SoMaterial467->setDiffuseColor(new float[]{0.9,0.0,0.7});
SoMaterial467->setEmissiveColor(new float[]{0.424956,0.483976,1.0});
SoVRMLAppearance466->addChild(*SoMaterial467);

SoShape465->addChild(*SoVRMLAppearance466);

SoIndexedLineSet* SoIndexedLineSet468 = new SoIndexedLineSet();
SoIndexedLineSet468->setUSE(QString("Orbit1"));
SoShape465->setGeometry(*SoIndexedLineSet468);

SoTransform464->addChild(*SoShape465);

SoGroup450->addChild(*SoTransform464);

SoNode15->addChild(*SoGroup450);

SoSceneManager0->setSceneGraph(*SoNode15);

return 0;
}
