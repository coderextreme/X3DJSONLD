
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
SoSceneManager0->setVersion(QString("4.1"));
Sohead* Sohead1 = new Sohead();
Socomponent* Socomponent2 = new Socomponent();
Socomponent2->setName(QString("HAnim"));
Socomponent2->setLevel(1);
Sohead1->addChild(*Socomponent2);

Someta* Someta3 = new Someta();
Someta3->setName(QString("title"));
Someta3->setContent(QString("JoeDemo5JoeSkin5.x3d"));
Sohead1->addMeta(*Someta3);

Someta* Someta4 = new Someta();
Someta4->setName(QString("description"));
Someta4->setContent(QString("joe kick into std anims"));
Sohead1->addMeta(*Someta4);

SoSceneManager0->setHead(*Sohead1);

SoNode* SoNode5 = new SoNode();
SoWorldInfo* SoWorldInfo6 = new SoWorldInfo();
SoWorldInfo6->setTitle(QString("JoeDemo5JoeSkin.x3d, Only Skin"));
SoNode5->addChild(*SoWorldInfo6);

SoNavigationInfo* SoNavigationInfo7 = new SoNavigationInfo();
SoNavigationInfo7->setHeadlight(false);
SoNode5->addChild(*SoNavigationInfo7);

SoBackground* SoBackground8 = new SoBackground();
SoBackground8->setDEF(QString("Background1"));
SoBackground8->setSkyColor(new float[]{0.4,0.4,0.4}, 3);
SoBackground8->setGroundColor(new float[]{0.5,0.5,0.5}, 3);
SoNode5->addChild(*SoBackground8);

SoDirectionalLight* SoDirectionalLight9 = new SoDirectionalLight();
SoDirectionalLight9->setGlobal(true);
SoNode5->addChild(*SoDirectionalLight9);

SoDirectionalLight* SoDirectionalLight10 = new SoDirectionalLight();
SoDirectionalLight10->setDirection(new float[]{0.0,0.5,0.0});
SoDirectionalLight10->setGlobal(true);
SoDirectionalLight10->setIntensity(0.75);
SoNode5->addChild(*SoDirectionalLight10);

SoDirectionalLight* SoDirectionalLight11 = new SoDirectionalLight();
SoDirectionalLight11->setDirection(new float[]{0.0,0.0,1.0});
SoDirectionalLight11->setGlobal(true);
SoNode5->addChild(*SoDirectionalLight11);

SoGroup* SoGroup12 = new SoGroup();
SoGroup12->setDEF(QString("SceneViewpoints"));
SoViewpoint* SoViewpoint13 = new SoViewpoint();
SoViewpoint13->setCenterOfRotation(new float[]{0.0,1.0,0.0});
SoViewpoint13->setDescription(QString("JinLOA4"));
SoViewpoint13->setPosition(new float[]{0.0,1.0,3.0});
SoGroup12->addChild(*SoViewpoint13);

SoViewpoint* SoViewpoint14 = new SoViewpoint();
SoViewpoint14->setCenterOfRotation(new float[]{0.0,0.9,0.0016});
SoViewpoint14->setDescription(QString("JinLOA4 Front"));
SoViewpoint14->setPosition(new float[]{0.0,0.4,4.0});
SoGroup12->addChild(*SoViewpoint14);

SoViewpoint* SoViewpoint15 = new SoViewpoint();
SoViewpoint15->setCenterOfRotation(new float[]{0.0,0.9,0.0016});
SoViewpoint15->setDescription(QString("JinLOA4 Front Close"));
SoViewpoint15->setPosition(new float[]{0.0,0.8,2.0});
SoGroup12->addChild(*SoViewpoint15);

SoViewpoint* SoViewpoint16 = new SoViewpoint();
SoViewpoint16->setCenterOfRotation(new float[]{0.0,0.9,0.0016});
SoViewpoint16->setDescription(QString("JinLOA4 Front Closer"));
SoViewpoint16->setPosition(new float[]{0.0,1.2,1.0});
SoGroup12->addChild(*SoViewpoint16);

SoViewpoint* SoViewpoint17 = new SoViewpoint();
SoViewpoint17->setCenterOfRotation(new float[]{0.0,1.5,0.0016});
SoViewpoint17->setDescription(QString("JinLOA4 Front Face"));
SoViewpoint17->setPosition(new float[]{0.0,1.63,1.0});
SoGroup12->addChild(*SoViewpoint17);

SoViewpoint* SoViewpoint18 = new SoViewpoint();
SoViewpoint18->setCenterOfRotation(new float[]{0.0,0.9,0.0016});
SoViewpoint18->setDescription(QString("JinLOA4 Right Side"));
SoViewpoint18->setOrientation(new float[]{0.0,1.0,0.0,1.57});
SoViewpoint18->setPosition(new float[]{2.6,0.8,0.0});
SoGroup12->addChild(*SoViewpoint18);

SoViewpoint* SoViewpoint19 = new SoViewpoint();
SoViewpoint19->setCenterOfRotation(new float[]{0.0,0.9,0.0016});
SoViewpoint19->setDescription(QString("JinLOA4 Right Side Close"));
SoViewpoint19->setOrientation(new float[]{0.0,1.0,0.0,1.2});
SoViewpoint19->setPosition(new float[]{1.0,0.8,0.5});
SoGroup12->addChild(*SoViewpoint19);

SoViewpoint* SoViewpoint20 = new SoViewpoint();
SoViewpoint20->setCenterOfRotation(new float[]{0.0,0.9,0.0016});
SoViewpoint20->setDescription(QString("JinLOA4 Left Side Close"));
SoViewpoint20->setOrientation(new float[]{0.0,1.0,0.0,-1.2});
SoViewpoint20->setPosition(new float[]{-1.0,0.8,0.5});
SoGroup12->addChild(*SoViewpoint20);

SoViewpoint* SoViewpoint21 = new SoViewpoint();
SoViewpoint21->setCenterOfRotation(new float[]{0.0,0.9,0.0016});
SoViewpoint21->setDescription(QString("JinLOA4 Left Side"));
SoViewpoint21->setOrientation(new float[]{0.0,1.0,0.0,-1.57});
SoViewpoint21->setPosition(new float[]{-2.6,0.8,0.0});
SoGroup12->addChild(*SoViewpoint21);

SoViewpoint* SoViewpoint22 = new SoViewpoint();
SoViewpoint22->setCenterOfRotation(new float[]{0.0,0.9,0.0016});
SoViewpoint22->setDescription(QString("JinLOA4 Top"));
SoViewpoint22->setOrientation(new float[]{1.0,0.0,0.0,-1.5708});
SoViewpoint22->setPosition(new float[]{0.0,3.5,0.0});
SoGroup12->addChild(*SoViewpoint22);

SoNode5->addChild(*SoGroup12);

SoTransform* SoTransform23 = new SoTransform();
SoTransform23->setDEF(QString("HostCoordSys"));
SoTransform23->setScale(new float[]{0.17,0.17,0.17});
SoInline* SoInline24 = new SoInline();
SoInline24->setUrl(new QString[]{QString("JointCoordinateAxes.x3dv")}, 1);
SoTransform23->addChild(*SoInline24);

SoViewpoint* SoViewpoint25 = new SoViewpoint();
SoViewpoint25->setDEF(QString("HostCoordSysView"));
SoViewpoint25->setDescription(QString("Host 0 0 0 View"));
SoTransform23->addChild(*SoViewpoint25);

SoNode5->addChild(*SoTransform23);

SoGroup* SoGroup26 = new SoGroup();
SoGroup26->setDEF(QString("Joe_Humanoid"));
SoHAnimHumanoid* SoHAnimHumanoid27 = new SoHAnimHumanoid();
SoHAnimHumanoid27->setDEF(QString("JoeHuman"));
SoHAnimHumanoid27->setVersion(QString("2.0"));
SoHAnimJoint* SoHAnimJoint28 = new SoHAnimJoint();
SoHAnimJoint28->X3DNode::setName(QString("humanoid_root"));
SoHAnimJoint28->setDEF(QString("hanim_humanoid_root"));
SoHAnimJoint28->setCenter(new float[]{0.0,0.875,0.0});
SoHAnimJoint28->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint28->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSite* SoHAnimSite29 = new SoHAnimSite();
SoHAnimSite29->X3DNode::setName(QString("RootFront"));
SoHAnimSite29->setDEF(QString("Joe_RootView1"));
SoTransform* SoTransform30 = new SoTransform();
SoTransform30->setDEF(QString("HAnimCoordSys"));
SoTransform30->setScale(new float[]{0.17,0.17,0.17});
SoInline* SoInline31 = new SoInline();
SoInline31->setUrl(new QString[]{QString("JointCoordinateAxes.x3dv")}, 1);
SoTransform30->addChild(*SoInline31);

SoViewpoint* SoViewpoint32 = new SoViewpoint();
SoViewpoint32->setDEF(QString("HAnimCoordSysView"));
SoViewpoint32->setDescription(QString("HAnim 0 0 0 View"));
SoTransform30->addChild(*SoViewpoint32);

SoHAnimSite29->addChild(*SoTransform30);

SoHAnimJoint28->addChild(*SoHAnimSite29);

SoHAnimJoint* SoHAnimJoint33 = new SoHAnimJoint();
SoHAnimJoint33->X3DNode::setName(QString("sacroiliac"));
SoHAnimJoint33->setDEF(QString("Joe_sacroiliac"));
SoHAnimJoint33->setCenter(new float[]{0.0,0.920000016689301,0.0});
SoHAnimJoint33->setSkinCoordIndex(new int32_t[]{17,19,20,21,22,23,26,27,73,82,89,91,93}, 13);
SoHAnimJoint33->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,0.349999994039536,0.349999994039536,1.0}, 13);
SoHAnimJoint33->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint33->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint34 = new SoHAnimJoint();
SoHAnimJoint34->X3DNode::setName(QString("l_hip"));
SoHAnimJoint34->setDEF(QString("hanim_l_hip"));
SoHAnimJoint34->setCenter(new float[]{0.100000001490116,0.920000016689301,0.0});
SoHAnimJoint34->setSkinCoordIndex(new int32_t[]{89,90,94,95,96,97}, 6);
SoHAnimJoint34->setSkinCoordWeight(new float[]{0.649999976158142,1.0,1.0,1.0,1.0,1.0}, 6);
SoHAnimJoint34->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint34->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint35 = new SoHAnimJoint();
SoHAnimJoint35->X3DNode::setName(QString("l_knee"));
SoHAnimJoint35->setDEF(QString("hanim_l_knee"));
SoHAnimJoint35->setCenter(new float[]{0.115000002086163,0.465999990701675,0.0});
SoHAnimJoint35->setSkinCoordIndex(new int32_t[]{334,335,336,337,338,339,340,341}, 8);
SoHAnimJoint35->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 8);
SoHAnimJoint35->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint35->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint36 = new SoHAnimJoint();
SoHAnimJoint36->X3DNode::setName(QString("l_talocrural"));
SoHAnimJoint36->setDEF(QString("hanim_l_talocrural"));
SoHAnimJoint36->setCenter(new float[]{0.115000002086163,0.0689999982714653,0.0});
SoHAnimJoint36->setSkinCoordIndex(new int32_t[]{342,343,344,345}, 4);
SoHAnimJoint36->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0}, 4);
SoHAnimJoint36->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint36->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint37 = new SoHAnimJoint();
SoHAnimJoint37->X3DNode::setName(QString("l_tarsometatarsal_2"));
SoHAnimJoint37->setDEF(QString("Joe_l_tarsometatarsal_2"));
SoHAnimJoint37->setCenter(new float[]{0.115000002086163,0.0309999994933605,0.0299999993294477});
SoHAnimJoint37->setSkinCoordIndex(new int32_t[]{346,347,348,71}, 4);
SoHAnimJoint37->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0}, 4);
SoHAnimJoint37->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint37->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint38 = new SoHAnimJoint();
SoHAnimJoint38->X3DNode::setName(QString("l_metatarsophalangeal_2"));
SoHAnimJoint38->setDEF(QString("Joe_l_metatarsophalangeal_2"));
SoHAnimJoint38->setCenter(new float[]{0.115000002086163,0.0370000004768372,0.0900000035762787});
SoHAnimJoint38->setSkinCoordIndex(new int32_t[]{349,350,351,352}, 4);
SoHAnimJoint38->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0}, 4);
SoHAnimJoint38->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint38->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint39 = new SoHAnimJoint();
SoHAnimJoint39->X3DNode::setName(QString("l_metatarsal_2"));
SoHAnimJoint39->setDEF(QString("Joe_l_metatarsal_2"));
SoHAnimJoint39->setCenter(new float[]{0.115000002086163,0.0199999995529652,0.122000001370907});
SoHAnimJoint39->setSkinCoordIndex(new int32_t[]{353,354,355,356,357,358,359,360,361}, 9);
SoHAnimJoint39->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 9);
SoHAnimJoint39->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint39->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint38->addChildren(*SoHAnimJoint39);

SoHAnimJoint37->addChildren(*SoHAnimJoint38);

SoHAnimJoint36->addChildren(*SoHAnimJoint37);

SoHAnimJoint35->addChildren(*SoHAnimJoint36);

SoHAnimJoint34->addChildren(*SoHAnimJoint35);

SoHAnimJoint33->addChildren(*SoHAnimJoint34);

SoHAnimJoint* SoHAnimJoint40 = new SoHAnimJoint();
SoHAnimJoint40->X3DNode::setName(QString("r_hip"));
SoHAnimJoint40->setDEF(QString("hanim_r_hip"));
SoHAnimJoint40->setCenter(new float[]{-0.100000001490116,0.920000016689301,0.0});
SoHAnimJoint40->setSkinCoordIndex(new int32_t[]{91,92,98,99,100,101,362,363}, 8);
SoHAnimJoint40->setSkinCoordWeight(new float[]{0.649999976158142,1.0,0.800000011920929,1.0,1.0,1.0,0.400000005960464,0.800000011920929}, 8);
SoHAnimJoint40->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint40->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint41 = new SoHAnimJoint();
SoHAnimJoint41->X3DNode::setName(QString("r_knee"));
SoHAnimJoint41->setDEF(QString("hanim_r_knee"));
SoHAnimJoint41->setCenter(new float[]{-0.0500000007450581,0.465999990701675,0.0});
SoHAnimJoint41->setSkinCoordIndex(new int32_t[]{362,363,364,365,366,367,368,369,98}, 9);
SoHAnimJoint41->setSkinCoordWeight(new float[]{0.600000023841858,0.200000002980232,1.0,1.0,1.0,1.0,1.0,1.0,0.200000002980232}, 9);
SoHAnimJoint41->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint41->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint42 = new SoHAnimJoint();
SoHAnimJoint42->X3DNode::setName(QString("r_talocrural"));
SoHAnimJoint42->setDEF(QString("hanim_r_talocrural"));
SoHAnimJoint42->setCenter(new float[]{-0.115000002086163,0.0689999982714653,0.0});
SoHAnimJoint42->setSkinCoordIndex(new int32_t[]{370,371,372,373}, 4);
SoHAnimJoint42->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0}, 4);
SoHAnimJoint42->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint42->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint43 = new SoHAnimJoint();
SoHAnimJoint43->X3DNode::setName(QString("r_tarsometatarsal_2"));
SoHAnimJoint43->setDEF(QString("Joe_r_tarsometatarsal_2"));
SoHAnimJoint43->setCenter(new float[]{-0.100000001490116,0.0149999996647239,-0.00999999977648258});
SoHAnimJoint43->setSkinCoordIndex(new int32_t[]{374,375,376}, 3);
SoHAnimJoint43->setSkinCoordWeight(new float[]{1.0,1.0,1.0}, 3);
SoHAnimJoint43->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint43->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint44 = new SoHAnimJoint();
SoHAnimJoint44->X3DNode::setName(QString("r_metatarsophalangeal_2"));
SoHAnimJoint44->setDEF(QString("Joe_r_metatarsophalangeal_2"));
SoHAnimJoint44->setCenter(new float[]{-0.115000002086163,0.0370000004768372,0.0900000035762787});
SoHAnimJoint44->setSkinCoordIndex(new int32_t[]{377,378,379,380}, 4);
SoHAnimJoint44->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0}, 4);
SoHAnimJoint44->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint44->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint45 = new SoHAnimJoint();
SoHAnimJoint45->X3DNode::setName(QString("r_tarsal_distal_interphalangeal_2"));
SoHAnimJoint45->setDEF(QString("Joe_r_tarsal_distal_interphalangeal_2"));
SoHAnimJoint45->setCenter(new float[]{-0.100000001490116,0.00999999977648258,0.140000000596046});
SoHAnimJoint45->setSkinCoordIndex(new int32_t[]{381,382,383,384,385,386,387,388,389}, 9);
SoHAnimJoint45->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 9);
SoHAnimJoint45->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint45->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint44->addChildren(*SoHAnimJoint45);

SoHAnimJoint43->addChildren(*SoHAnimJoint44);

SoHAnimJoint42->addChildren(*SoHAnimJoint43);

SoHAnimJoint41->addChildren(*SoHAnimJoint42);

SoHAnimJoint40->addChildren(*SoHAnimJoint41);

SoHAnimJoint33->addChildren(*SoHAnimJoint40);

SoHAnimJoint28->addChildren(*SoHAnimJoint33);

SoHAnimJoint* SoHAnimJoint46 = new SoHAnimJoint();
SoHAnimJoint46->X3DNode::setName(QString("vl5"));
SoHAnimJoint46->setDEF(QString("hanim_vl5"));
SoHAnimJoint46->setCenter(new float[]{0.0,1.04499995708466,-0.0949999988079071});
SoHAnimJoint46->setSkinCoordIndex(new int32_t[]{28,76}, 2);
SoHAnimJoint46->setSkinCoordWeight(new float[]{1.0,1.0}, 2);
SoHAnimJoint46->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint46->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint47 = new SoHAnimJoint();
SoHAnimJoint47->X3DNode::setName(QString("vl4"));
SoHAnimJoint47->setDEF(QString("hanim_vl4"));
SoHAnimJoint47->setCenter(new float[]{0.0,1.067999958992,-0.0850000008940697});
SoHAnimJoint47->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint47->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint48 = new SoHAnimJoint();
SoHAnimJoint48->X3DNode::setName(QString("vl3"));
SoHAnimJoint48->setDEF(QString("hanim_vl3"));
SoHAnimJoint48->setCenter(new float[]{0.0,1.09200000762939,-0.0724999979138374});
SoHAnimJoint48->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint48->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint49 = new SoHAnimJoint();
SoHAnimJoint49->X3DNode::setName(QString("vl2"));
SoHAnimJoint49->setDEF(QString("hanim_vl2"));
SoHAnimJoint49->setCenter(new float[]{0.0,1.12000000476837,-0.0649999976158142});
SoHAnimJoint49->setSkinCoordIndex(new int32_t[]{16,18,25,83,84,85,86,87,88}, 9);
SoHAnimJoint49->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,0.699999988079071,1.0,0.800000011920929}, 9);
SoHAnimJoint49->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint49->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint50 = new SoHAnimJoint();
SoHAnimJoint50->X3DNode::setName(QString("vl1"));
SoHAnimJoint50->setDEF(QString("hanim_vl1"));
SoHAnimJoint50->setCenter(new float[]{0.0,1.14590001106262,-0.0625});
SoHAnimJoint50->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint50->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint51 = new SoHAnimJoint();
SoHAnimJoint51->X3DNode::setName(QString("vt12"));
SoHAnimJoint51->setDEF(QString("hanim_vt12"));
SoHAnimJoint51->setCenter(new float[]{0.0,1.17900002002716,-0.068000003695488});
SoHAnimJoint51->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint51->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint52 = new SoHAnimJoint();
SoHAnimJoint52->X3DNode::setName(QString("vt11"));
SoHAnimJoint52->setDEF(QString("hanim_vt11"));
SoHAnimJoint52->setCenter(new float[]{0.0,1.26789999008179,-0.0810000002384186});
SoHAnimJoint52->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint52->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint53 = new SoHAnimJoint();
SoHAnimJoint53->X3DNode::setName(QString("vt10"));
SoHAnimJoint53->setDEF(QString("hanim_vt10"));
SoHAnimJoint53->setCenter(new float[]{0.0,1.24199998378754,-0.0900000035762787});
SoHAnimJoint53->setSkinCoordIndex(new int32_t[]{15}, 1);
SoHAnimJoint53->setSkinCoordWeight(new float[]{1.0}, 1);
SoHAnimJoint53->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint53->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint54 = new SoHAnimJoint();
SoHAnimJoint54->X3DNode::setName(QString("vt9"));
SoHAnimJoint54->setDEF(QString("hanim_vt9"));
SoHAnimJoint54->setCenter(new float[]{0.0,1.26800000667572,-0.100000001490116});
SoHAnimJoint54->setSkinCoordIndex(new int32_t[]{13,14}, 2);
SoHAnimJoint54->setSkinCoordWeight(new float[]{1.0,1.0}, 2);
SoHAnimJoint54->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint54->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint55 = new SoHAnimJoint();
SoHAnimJoint55->X3DNode::setName(QString("vt8"));
SoHAnimJoint55->setDEF(QString("hanim_vt8"));
SoHAnimJoint55->setCenter(new float[]{0.0,1.2940000295639,-0.109999999403954});
SoHAnimJoint55->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint55->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint56 = new SoHAnimJoint();
SoHAnimJoint56->X3DNode::setName(QString("vt7"));
SoHAnimJoint56->setDEF(QString("hanim_vt7"));
SoHAnimJoint56->setCenter(new float[]{0.0,1.32299995422363,-0.115500003099442});
SoHAnimJoint56->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint56->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint57 = new SoHAnimJoint();
SoHAnimJoint57->X3DNode::setName(QString("vt6"));
SoHAnimJoint57->setDEF(QString("hanim_vt6"));
SoHAnimJoint57->setCenter(new float[]{0.0,1.35199999809265,-0.119999997317791});
SoHAnimJoint57->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint57->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint58 = new SoHAnimJoint();
SoHAnimJoint58->X3DNode::setName(QString("vt5"));
SoHAnimJoint58->setDEF(QString("hanim_vt5"));
SoHAnimJoint58->setCenter(new float[]{0.0,1.38100004196167,-0.123499996960163});
SoHAnimJoint58->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint58->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint59 = new SoHAnimJoint();
SoHAnimJoint59->X3DNode::setName(QString("vt4"));
SoHAnimJoint59->setDEF(QString("hanim_vt4"));
SoHAnimJoint59->setCenter(new float[]{0.0,1.4099999666214,-0.123499996960163});
SoHAnimJoint59->setSkinCoordIndex(new int32_t[]{81}, 1);
SoHAnimJoint59->setSkinCoordWeight(new float[]{1.0}, 1);
SoHAnimJoint59->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint59->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint60 = new SoHAnimJoint();
SoHAnimJoint60->X3DNode::setName(QString("vt3"));
SoHAnimJoint60->setDEF(QString("hanim_vt3"));
SoHAnimJoint60->setCenter(new float[]{0.0,1.43799996376038,-0.119999997317791});
SoHAnimJoint60->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint60->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint61 = new SoHAnimJoint();
SoHAnimJoint61->X3DNode::setName(QString("vt2"));
SoHAnimJoint61->setDEF(QString("hanim_vt2"));
SoHAnimJoint61->setCenter(new float[]{0.0,1.46800005435944,-0.104999996721745});
SoHAnimJoint61->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint61->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint62 = new SoHAnimJoint();
SoHAnimJoint62->X3DNode::setName(QString("vt1"));
SoHAnimJoint62->setDEF(QString("hanim_vt1"));
SoHAnimJoint62->setCenter(new float[]{0.0,1.49699997901917,-0.0900000035762787});
SoHAnimJoint62->setSkinCoordIndex(new int32_t[]{11,24}, 2);
SoHAnimJoint62->setSkinCoordWeight(new float[]{1.0,1.0}, 2);
SoHAnimJoint62->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint62->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint63 = new SoHAnimJoint();
SoHAnimJoint63->X3DNode::setName(QString("vc7"));
SoHAnimJoint63->setDEF(QString("hanim_vc7"));
SoHAnimJoint63->setCenter(new float[]{0.0,1.52499997615814,-0.0719999969005585});
SoHAnimJoint63->setSkinCoordIndex(new int32_t[]{74,75}, 2);
SoHAnimJoint63->setSkinCoordWeight(new float[]{1.0,1.0}, 2);
SoHAnimJoint63->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint63->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint64 = new SoHAnimJoint();
SoHAnimJoint64->X3DNode::setName(QString("vc6"));
SoHAnimJoint64->setDEF(QString("hanim_vc6"));
SoHAnimJoint64->setCenter(new float[]{0.0,1.53999996185303,-0.0500000007450581});
SoHAnimJoint64->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint64->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint65 = new SoHAnimJoint();
SoHAnimJoint65->X3DNode::setName(QString("vc5"));
SoHAnimJoint65->setDEF(QString("hanim_vc5"));
SoHAnimJoint65->setCenter(new float[]{0.0,1.55200004577637,-0.0350000001490116});
SoHAnimJoint65->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint65->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint66 = new SoHAnimJoint();
SoHAnimJoint66->X3DNode::setName(QString("vc4"));
SoHAnimJoint66->setDEF(QString("hanim_vc4"));
SoHAnimJoint66->setCenter(new float[]{0.0,1.56749999523163,-0.0255999993532896});
SoHAnimJoint66->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint66->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint67 = new SoHAnimJoint();
SoHAnimJoint67->X3DNode::setName(QString("vc3"));
SoHAnimJoint67->setDEF(QString("hanim_vc3"));
SoHAnimJoint67->setCenter(new float[]{0.0,1.58224999904633,-0.0185000002384186});
SoHAnimJoint67->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint67->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint68 = new SoHAnimJoint();
SoHAnimJoint68->X3DNode::setName(QString("vc2"));
SoHAnimJoint68->setDEF(QString("hanim_vc2"));
SoHAnimJoint68->setCenter(new float[]{0.0,1.59500002861023,-0.0175000000745058});
SoHAnimJoint68->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint68->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint69 = new SoHAnimJoint();
SoHAnimJoint69->X3DNode::setName(QString("vc1"));
SoHAnimJoint69->setDEF(QString("hanim_vc1"));
SoHAnimJoint69->setCenter(new float[]{0.0,1.61000001430511,-0.0149999996647239});
SoHAnimJoint69->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint69->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint70 = new SoHAnimJoint();
SoHAnimJoint70->X3DNode::setName(QString("skullbase"));
SoHAnimJoint70->setDEF(QString("hanim_skullbase"));
SoHAnimJoint70->setCenter(new float[]{0.0,1.62999999523163,-0.00999999977648258});
SoHAnimJoint70->setSkinCoordIndex(new int32_t[]{0,1,2,3,4,5,6,7,8,9}, 10);
SoHAnimJoint70->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 10);
SoHAnimJoint70->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint70->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint71 = new SoHAnimJoint();
SoHAnimJoint71->X3DNode::setName(QString("l_eyeball_joint"));
SoHAnimJoint71->setDEF(QString("hanim_l_eyeball_joint"));
SoHAnimJoint71->setCenter(new float[]{0.034000001847744,1.65900003910065,0.0599999986588955});
SoHAnimJoint71->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint71->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint70->addChildren(*SoHAnimJoint71);

SoHAnimJoint* SoHAnimJoint72 = new SoHAnimJoint();
SoHAnimJoint72->X3DNode::setName(QString("r_eyeball_joint"));
SoHAnimJoint72->setDEF(QString("hanim_r_eyeball_joint"));
SoHAnimJoint72->setCenter(new float[]{-0.034000001847744,1.65900003910065,0.0599999986588955});
SoHAnimJoint72->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint72->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint70->addChildren(*SoHAnimJoint72);

SoHAnimJoint69->addChildren(*SoHAnimJoint70);

SoHAnimJoint68->addChildren(*SoHAnimJoint69);

SoHAnimJoint67->addChildren(*SoHAnimJoint68);

SoHAnimJoint66->addChildren(*SoHAnimJoint67);

SoHAnimJoint65->addChildren(*SoHAnimJoint66);

SoHAnimJoint64->addChildren(*SoHAnimJoint65);

SoHAnimJoint63->addChildren(*SoHAnimJoint64);

SoHAnimJoint* SoHAnimJoint73 = new SoHAnimJoint();
SoHAnimJoint73->X3DNode::setName(QString("l_sternoclavicular"));
SoHAnimJoint73->setDEF(QString("hanim_l_sternoclavicular"));
SoHAnimJoint73->setCenter(new float[]{0.0820000022649765,1.44879996776581,-0.035300001502037});
SoHAnimJoint73->setSkinCoordIndex(new int32_t[]{12}, 1);
SoHAnimJoint73->setSkinCoordWeight(new float[]{1.0}, 1);
SoHAnimJoint73->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint73->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint74 = new SoHAnimJoint();
SoHAnimJoint74->X3DNode::setName(QString("l_acromioclavicular"));
SoHAnimJoint74->setDEF(QString("hanim_l_acromioclavicular"));
SoHAnimJoint74->setCenter(new float[]{0.0961999967694283,1.42690002918243,-0.0423999987542629});
SoHAnimJoint74->setSkinCoordIndex(new int32_t[]{79}, 1);
SoHAnimJoint74->setSkinCoordWeight(new float[]{1.0}, 1);
SoHAnimJoint74->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint74->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint75 = new SoHAnimJoint();
SoHAnimJoint75->X3DNode::setName(QString("l_shoulder"));
SoHAnimJoint75->setDEF(QString("hanim_l_shoulder"));
SoHAnimJoint75->setCenter(new float[]{0.200000002980232,1.44000005722046,-0.0399999991059303});
SoHAnimJoint75->setSkinCoordIndex(new int32_t[]{41,42,44,80,102,103,104,105}, 8);
SoHAnimJoint75->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 8);
SoHAnimJoint75->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint75->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint76 = new SoHAnimJoint();
SoHAnimJoint76->X3DNode::setName(QString("l_elbow"));
SoHAnimJoint76->setDEF(QString("hanim_l_elbow"));
SoHAnimJoint76->setCenter(new float[]{0.200000002980232,1.13880002498627,-0.0399999991059303});
SoHAnimJoint76->setSkinCoordIndex(new int32_t[]{45,46,47,109,110,111,112,113,115,116,117,118}, 12);
SoHAnimJoint76->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 15);
SoHAnimJoint76->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint76->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint77 = new SoHAnimJoint();
SoHAnimJoint77->X3DNode::setName(QString("l_radiocarpal"));
SoHAnimJoint77->setDEF(QString("Joe_l_radiocarpal"));
SoHAnimJoint77->setCenter(new float[]{0.200000002980232,0.870000004768372,-0.0399999991059303});
SoHAnimJoint77->setSkinCoordIndex(new int32_t[]{119,120,121,122,123,124,125,126}, 8);
SoHAnimJoint77->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 8);
SoHAnimJoint77->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint77->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint78 = new SoHAnimJoint();
SoHAnimJoint78->X3DNode::setName(QString("l_carpometacarpal_1"));
SoHAnimJoint78->setDEF(QString("Joe_l_carpometacarpal_1"));
SoHAnimJoint78->setCenter(new float[]{0.192399993538857,0.847199976444244,-0.0533999986946583});
SoHAnimJoint78->setSkinCoordIndex(new int32_t[]{127,128}, 2);
SoHAnimJoint78->setSkinCoordWeight(new float[]{1.0,1.0}, 2);
SoHAnimJoint78->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint78->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint79 = new SoHAnimJoint();
SoHAnimJoint79->X3DNode::setName(QString("l_metacarpophalangeal_1"));
SoHAnimJoint79->setDEF(QString("Joe_l_metacarpophalangeal_1"));
SoHAnimJoint79->setCenter(new float[]{0.195099994540215,0.82260000705719,0.0245999991893768});
SoHAnimJoint79->setSkinCoordIndex(new int32_t[]{138,139,140,141,142,143}, 6);
SoHAnimJoint79->setSkinCoordWeight(new float[]{0.5,0.5,0.5,1.0,1.0,1.0}, 6);
SoHAnimJoint79->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint79->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint80 = new SoHAnimJoint();
SoHAnimJoint80->X3DNode::setName(QString("l_carpal_interphalangeal_1"));
SoHAnimJoint80->setDEF(QString("Joe_l_carpal_interphalangeal_1"));
SoHAnimJoint80->setCenter(new float[]{0.195500001311302,0.815900027751923,0.046399999409914});
SoHAnimJoint80->setSkinCoordIndex(new int32_t[]{144,145,146,147,148,149,150,151,152}, 9);
SoHAnimJoint80->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 9);
SoHAnimJoint80->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint80->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint79->addChildren(*SoHAnimJoint80);

SoHAnimJoint78->addChildren(*SoHAnimJoint79);

SoHAnimJoint77->addChildren(*SoHAnimJoint78);

SoHAnimJoint* SoHAnimJoint81 = new SoHAnimJoint();
SoHAnimJoint81->X3DNode::setName(QString("l_carpometacarpal_2"));
SoHAnimJoint81->setDEF(QString("Joe_l_carpometacarpal_2"));
SoHAnimJoint81->setCenter(new float[]{0.198300004005432,0.80239999294281,-0.0280000008642673});
SoHAnimJoint81->setSkinCoordIndex(new int32_t[]{129,130}, 2);
SoHAnimJoint81->setSkinCoordWeight(new float[]{1.0,1.0}, 2);
SoHAnimJoint81->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint81->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint82 = new SoHAnimJoint();
SoHAnimJoint82->X3DNode::setName(QString("l_metacarpophalangeal_2"));
SoHAnimJoint82->setDEF(QString("Joe_l_metacarpophalangeal_2"));
SoHAnimJoint82->setCenter(new float[]{0.198300004005432,0.781499981880188,-0.0280000008642673});
SoHAnimJoint82->setSkinCoordIndex(new int32_t[]{138,139,140,153,154,155,163}, 7);
SoHAnimJoint82->setSkinCoordWeight(new float[]{0.5,0.5,0.5,1.0,1.0,1.0,0.5}, 7);
SoHAnimJoint82->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint82->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint83 = new SoHAnimJoint();
SoHAnimJoint83->X3DNode::setName(QString("l_carpal_proximal_interphalangeal_2"));
SoHAnimJoint83->setDEF(QString("Joe_l_carpal_proximal_interphalangeal_2"));
SoHAnimJoint83->setCenter(new float[]{0.201700001955032,0.736299991607666,-0.0248000007122755});
SoHAnimJoint83->setSkinCoordIndex(new int32_t[]{166,167,168,169}, 4);
SoHAnimJoint83->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0}, 4);
SoHAnimJoint83->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint83->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint84 = new SoHAnimJoint();
SoHAnimJoint84->X3DNode::setName(QString("l_carpal_distal_interphalangeal_2"));
SoHAnimJoint84->setDEF(QString("Joe_l_carpal_distal_interphalangeal_2"));
SoHAnimJoint84->setCenter(new float[]{0.202800005674362,0.713900029659271,-0.0236000008881092});
SoHAnimJoint84->setSkinCoordIndex(new int32_t[]{170,171,172,173,174,175,176,177,178}, 9);
SoHAnimJoint84->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 9);
SoHAnimJoint84->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint84->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint83->addChildren(*SoHAnimJoint84);

SoHAnimJoint82->addChildren(*SoHAnimJoint83);

SoHAnimJoint81->addChildren(*SoHAnimJoint82);

SoHAnimJoint77->addChildren(*SoHAnimJoint81);

SoHAnimJoint* SoHAnimJoint85 = new SoHAnimJoint();
SoHAnimJoint85->X3DNode::setName(QString("l_carpometacarpal_3"));
SoHAnimJoint85->setDEF(QString("Joe_l_carpometacarpal_3"));
SoHAnimJoint85->setCenter(new float[]{0.198699995875359,0.802900016307831,-0.0529999993741512});
SoHAnimJoint85->setSkinCoordIndex(new int32_t[]{131,132}, 2);
SoHAnimJoint85->setSkinCoordWeight(new float[]{1.0,1.0}, 2);
SoHAnimJoint85->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint85->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint86 = new SoHAnimJoint();
SoHAnimJoint86->X3DNode::setName(QString("l_metacarpophalangeal_3"));
SoHAnimJoint86->setDEF(QString("Joe_l_metacarpophalangeal_3"));
SoHAnimJoint86->setCenter(new float[]{0.198699995875359,0.781799972057343,-0.0529999993741512});
SoHAnimJoint86->setSkinCoordIndex(new int32_t[]{156,157,163,164}, 4);
SoHAnimJoint86->setSkinCoordWeight(new float[]{1.0,1.0,0.5,0.5}, 4);
SoHAnimJoint86->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint86->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint87 = new SoHAnimJoint();
SoHAnimJoint87->X3DNode::setName(QString("l_carpal_proximal_interphalangeal_3"));
SoHAnimJoint87->setDEF(QString("Joe_l_carpal_proximal_interphalangeal_3"));
SoHAnimJoint87->setCenter(new float[]{0.201299995183945,0.727299988269806,-0.0502999983727932});
SoHAnimJoint87->setSkinCoordIndex(new int32_t[]{179,180,181,182}, 4);
SoHAnimJoint87->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0}, 4);
SoHAnimJoint87->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint87->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint88 = new SoHAnimJoint();
SoHAnimJoint88->X3DNode::setName(QString("l_carpal_distal_interphalangeal_3"));
SoHAnimJoint88->setDEF(QString("Joe_l_carpal_distal_interphalangeal_3"));
SoHAnimJoint88->setCenter(new float[]{0.202600002288818,0.701099991798401,-0.0494000017642975});
SoHAnimJoint88->setSkinCoordIndex(new int32_t[]{183,184,185,186,187,188,189,190,191}, 9);
SoHAnimJoint88->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 9);
SoHAnimJoint88->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint88->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint87->addChildren(*SoHAnimJoint88);

SoHAnimJoint86->addChildren(*SoHAnimJoint87);

SoHAnimJoint85->addChildren(*SoHAnimJoint86);

SoHAnimJoint77->addChildren(*SoHAnimJoint85);

SoHAnimJoint* SoHAnimJoint89 = new SoHAnimJoint();
SoHAnimJoint89->X3DNode::setName(QString("l_carpometacarpal_4"));
SoHAnimJoint89->setDEF(QString("Joe_l_carpometacarpal_4"));
SoHAnimJoint89->setCenter(new float[]{0.195600003004074,0.801900029182434,-0.0794000029563904});
SoHAnimJoint89->setSkinCoordIndex(new int32_t[]{133,134}, 2);
SoHAnimJoint89->setSkinCoordWeight(new float[]{1.0,1.0}, 2);
SoHAnimJoint89->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint89->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint90 = new SoHAnimJoint();
SoHAnimJoint90->X3DNode::setName(QString("l_metacarpophalangeal_4"));
SoHAnimJoint90->setDEF(QString("Joe_l_metacarpophalangeal_4"));
SoHAnimJoint90->setCenter(new float[]{0.195600003004074,0.781499981880188,-0.0794000029563904});
SoHAnimJoint90->setSkinCoordIndex(new int32_t[]{158,159,164,165}, 4);
SoHAnimJoint90->setSkinCoordWeight(new float[]{1.0,1.0,0.5,0.5}, 4);
SoHAnimJoint90->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint90->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint91 = new SoHAnimJoint();
SoHAnimJoint91->X3DNode::setName(QString("l_carpal_proximal_interphalangeal_4"));
SoHAnimJoint91->setDEF(QString("Joe_l_carpal_proximal_interphalangeal_4"));
SoHAnimJoint91->setCenter(new float[]{0.197300001978874,0.72869998216629,-0.0776999965310097});
SoHAnimJoint91->setSkinCoordIndex(new int32_t[]{192,193,194,195}, 4);
SoHAnimJoint91->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0}, 4);
SoHAnimJoint91->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint91->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint92 = new SoHAnimJoint();
SoHAnimJoint92->X3DNode::setName(QString("l_carpal_distal_interphalangeal_4"));
SoHAnimJoint92->setDEF(QString("Joe_l_carpal_distal_interphalangeal_4"));
SoHAnimJoint92->setCenter(new float[]{0.198300004005432,0.704500019550323,-0.0767000019550323});
SoHAnimJoint92->setSkinCoordIndex(new int32_t[]{196,197,198,199,200,201,202,203,204}, 9);
SoHAnimJoint92->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 9);
SoHAnimJoint92->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint92->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint91->addChildren(*SoHAnimJoint92);

SoHAnimJoint90->addChildren(*SoHAnimJoint91);

SoHAnimJoint89->addChildren(*SoHAnimJoint90);

SoHAnimJoint77->addChildren(*SoHAnimJoint89);

SoHAnimJoint* SoHAnimJoint93 = new SoHAnimJoint();
SoHAnimJoint93->X3DNode::setName(QString("l_carpometacarpal_5"));
SoHAnimJoint93->setDEF(QString("Joe_l_carpometacarpal_5"));
SoHAnimJoint93->setCenter(new float[]{0.192499995231628,0.806599974632263,-0.10360000282526});
SoHAnimJoint93->setSkinCoordIndex(new int32_t[]{135,136,137,165}, 4);
SoHAnimJoint93->setSkinCoordWeight(new float[]{1.0,1.0,1.0,0.5}, 4);
SoHAnimJoint93->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint93->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint94 = new SoHAnimJoint();
SoHAnimJoint94->X3DNode::setName(QString("l_metacarpophalangeal_5"));
SoHAnimJoint94->setDEF(QString("Joe_l_metacarpophalangeal_5"));
SoHAnimJoint94->setCenter(new float[]{0.192499995231628,0.78659999370575,-0.10360000282526});
SoHAnimJoint94->setSkinCoordIndex(new int32_t[]{160,161,162}, 3);
SoHAnimJoint94->setSkinCoordWeight(new float[]{1.0,1.0,1.0}, 3);
SoHAnimJoint94->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint94->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint95 = new SoHAnimJoint();
SoHAnimJoint95->X3DNode::setName(QString("l_carpal_proximal_interphalangeal_5"));
SoHAnimJoint95->setDEF(QString("Joe_l_carpal_proximal_interphalangeal_5"));
SoHAnimJoint95->setCenter(new float[]{0.193800002336502,0.745199978351593,-0.102399997413158});
SoHAnimJoint95->setSkinCoordIndex(new int32_t[]{205,206,207,208}, 4);
SoHAnimJoint95->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0}, 4);
SoHAnimJoint95->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint95->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint96 = new SoHAnimJoint();
SoHAnimJoint96->X3DNode::setName(QString("l_carpal_distal_interphalangeal_5"));
SoHAnimJoint96->setDEF(QString("Joe_l_carpal_distal_interphalangeal_5"));
SoHAnimJoint96->setCenter(new float[]{0.19480000436306,0.727699995040894,-0.101700000464916});
SoHAnimJoint96->setSkinCoordIndex(new int32_t[]{209,210,211,212,213,214,215,216,217}, 9);
SoHAnimJoint96->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 9);
SoHAnimJoint96->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint96->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint95->addChildren(*SoHAnimJoint96);

SoHAnimJoint94->addChildren(*SoHAnimJoint95);

SoHAnimJoint93->addChildren(*SoHAnimJoint94);

SoHAnimJoint77->addChildren(*SoHAnimJoint93);

SoHAnimJoint76->addChildren(*SoHAnimJoint77);

SoHAnimJoint75->addChildren(*SoHAnimJoint76);

SoHAnimJoint74->addChildren(*SoHAnimJoint75);

SoHAnimJoint73->addChildren(*SoHAnimJoint74);

SoHAnimJoint63->addChildren(*SoHAnimJoint73);

SoHAnimJoint* SoHAnimJoint97 = new SoHAnimJoint();
SoHAnimJoint97->X3DNode::setName(QString("r_sternoclavicular"));
SoHAnimJoint97->setDEF(QString("hanim_r_sternoclavicular"));
SoHAnimJoint97->setCenter(new float[]{-0.0299999993294477,1.46000003814697,0.0});
SoHAnimJoint97->setSkinCoordIndex(new int32_t[]{10}, 1);
SoHAnimJoint97->setSkinCoordWeight(new float[]{1.0}, 1);
SoHAnimJoint97->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint97->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint98 = new SoHAnimJoint();
SoHAnimJoint98->X3DNode::setName(QString("r_acromioclavicular"));
SoHAnimJoint98->setDEF(QString("hanim_r_acromioclavicular"));
SoHAnimJoint98->setCenter(new float[]{-0.0900000035762787,1.4099999666214,-0.109999999403954});
SoHAnimJoint98->setSkinCoordIndex(new int32_t[]{77,29}, 2);
SoHAnimJoint98->setSkinCoordWeight(new float[]{1.0,0.899999976158142}, 2);
SoHAnimJoint98->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint98->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint99 = new SoHAnimJoint();
SoHAnimJoint99->X3DNode::setName(QString("r_shoulder"));
SoHAnimJoint99->setDEF(QString("hanim_r_shoulder"));
SoHAnimJoint99->setCenter(new float[]{-0.200000002980232,1.44000005722046,-0.0399999991059303});
SoHAnimJoint99->setSkinCoordIndex(new int32_t[]{29,30,32,78,218,219,220,221,86,88}, 10);
SoHAnimJoint99->setSkinCoordWeight(new float[]{0.100000001490116,1.0,1.0,1.0,1.0,1.0,1.0,1.0,0.300000011920929,0.200000002980232}, 10);
SoHAnimJoint99->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint99->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint100 = new SoHAnimJoint();
SoHAnimJoint100->X3DNode::setName(QString("r_elbow"));
SoHAnimJoint100->setDEF(QString("hanim_r_elbow"));
SoHAnimJoint100->setCenter(new float[]{-0.200000002980232,1.13880002498627,-0.0399999991059303});
SoHAnimJoint100->setSkinCoordIndex(new int32_t[]{33,34,35,225,226,227,228,229,231,232,233,234}, 12);
SoHAnimJoint100->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 12);
SoHAnimJoint100->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint100->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint101 = new SoHAnimJoint();
SoHAnimJoint101->X3DNode::setName(QString("r_radiocarpal"));
SoHAnimJoint101->setDEF(QString("Joe_r_radiocarpal"));
SoHAnimJoint101->setCenter(new float[]{-0.200000002980232,0.889999985694885,-0.0399999991059303});
SoHAnimJoint101->setSkinCoordIndex(new int32_t[]{235,236,237,238,239,240,241,242}, 8);
SoHAnimJoint101->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 8);
SoHAnimJoint101->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint101->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint102 = new SoHAnimJoint();
SoHAnimJoint102->X3DNode::setName(QString("r_carpometacarpal_1"));
SoHAnimJoint102->setDEF(QString("Joe_r_carpometacarpal_1"));
SoHAnimJoint102->setCenter(new float[]{-0.200000002980232,0.850000023841858,0.0});
SoHAnimJoint102->setSkinCoordIndex(new int32_t[]{243,244}, 2);
SoHAnimJoint102->setSkinCoordWeight(new float[]{1.0,1.0}, 2);
SoHAnimJoint102->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint102->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint103 = new SoHAnimJoint();
SoHAnimJoint103->X3DNode::setName(QString("r_metacarpophalangeal_1"));
SoHAnimJoint103->setDEF(QString("Joe_r_metacarpophalangeal_1"));
SoHAnimJoint103->setCenter(new float[]{-0.200000002980232,0.819999992847443,0.0299999993294477});
SoHAnimJoint103->setSkinCoordIndex(new int32_t[]{254,255,256,257,258,259}, 6);
SoHAnimJoint103->setSkinCoordWeight(new float[]{0.5,0.5,0.5,1.0,1.0,1.0}, 6);
SoHAnimJoint103->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint103->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint104 = new SoHAnimJoint();
SoHAnimJoint104->X3DNode::setName(QString("r_carpal_interphalangeal_1"));
SoHAnimJoint104->setDEF(QString("Joe_r_carpal_interphalangeal_1"));
SoHAnimJoint104->setCenter(new float[]{-0.200000002980232,0.800000011920929,0.0500000007450581});
SoHAnimJoint104->setSkinCoordIndex(new int32_t[]{260,261,262,263,264,265,266,267,268}, 9);
SoHAnimJoint104->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 9);
SoHAnimJoint104->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint104->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint103->addChildren(*SoHAnimJoint104);

SoHAnimJoint102->addChildren(*SoHAnimJoint103);

SoHAnimJoint101->addChildren(*SoHAnimJoint102);

SoHAnimJoint* SoHAnimJoint105 = new SoHAnimJoint();
SoHAnimJoint105->X3DNode::setName(QString("r_carpometacarpal_2"));
SoHAnimJoint105->setDEF(QString("Joe_r_carpometacarpal_2"));
SoHAnimJoint105->setCenter(new float[]{-0.200000002980232,0.839999973773956,-0.0149999996647239});
SoHAnimJoint105->setSkinCoordIndex(new int32_t[]{245,246}, 2);
SoHAnimJoint105->setSkinCoordWeight(new float[]{1.0,1.0}, 2);
SoHAnimJoint105->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint105->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint106 = new SoHAnimJoint();
SoHAnimJoint106->X3DNode::setName(QString("r_metacarpophalangeal_2"));
SoHAnimJoint106->setDEF(QString("Joe_r_metacarpophalangeal_2"));
SoHAnimJoint106->setCenter(new float[]{-0.200000002980232,0.792999982833862,-0.0149999996647239});
SoHAnimJoint106->setSkinCoordIndex(new int32_t[]{254,255,256,269,270,271,279}, 7);
SoHAnimJoint106->setSkinCoordWeight(new float[]{0.5,0.5,0.5,1.0,1.0,1.0,0.5}, 7);
SoHAnimJoint106->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint106->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint107 = new SoHAnimJoint();
SoHAnimJoint107->X3DNode::setName(QString("r_carpal_proximal_interphalangeal_2"));
SoHAnimJoint107->setDEF(QString("Joe_r_carpal_proximal_interphalangeal_2"));
SoHAnimJoint107->setCenter(new float[]{-0.200000002980232,0.745000004768372,-0.0149999996647239});
SoHAnimJoint107->setSkinCoordIndex(new int32_t[]{282,283,284,285}, 4);
SoHAnimJoint107->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0}, 4);
SoHAnimJoint107->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint107->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint108 = new SoHAnimJoint();
SoHAnimJoint108->X3DNode::setName(QString("r_carpal_distal_interphalangeal_2"));
SoHAnimJoint108->setDEF(QString("Joe_r_carpal_distal_interphalangeal_2"));
SoHAnimJoint108->setCenter(new float[]{-0.200000002980232,0.720000028610229,-0.0149999996647239});
SoHAnimJoint108->setSkinCoordIndex(new int32_t[]{286,287,288,289,290,291,292,293,294}, 9);
SoHAnimJoint108->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 9);
SoHAnimJoint108->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint108->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint107->addChildren(*SoHAnimJoint108);

SoHAnimJoint106->addChildren(*SoHAnimJoint107);

SoHAnimJoint105->addChildren(*SoHAnimJoint106);

SoHAnimJoint101->addChildren(*SoHAnimJoint105);

SoHAnimJoint* SoHAnimJoint109 = new SoHAnimJoint();
SoHAnimJoint109->X3DNode::setName(QString("r_carpometacarpal_3"));
SoHAnimJoint109->setDEF(QString("Joe_r_carpometacarpal_3"));
SoHAnimJoint109->setCenter(new float[]{-0.200000002980232,0.834999978542328,-0.0399999991059303});
SoHAnimJoint109->setSkinCoordIndex(new int32_t[]{247,248}, 2);
SoHAnimJoint109->setSkinCoordWeight(new float[]{1.0,1.0}, 2);
SoHAnimJoint109->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint109->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint110 = new SoHAnimJoint();
SoHAnimJoint110->X3DNode::setName(QString("r_metacarpophalangeal_3"));
SoHAnimJoint110->setDEF(QString("Joe_r_metacarpophalangeal_3"));
SoHAnimJoint110->setCenter(new float[]{-0.200000002980232,0.787999987602234,-0.0399999991059303});
SoHAnimJoint110->setSkinCoordIndex(new int32_t[]{272,273,279,280}, 4);
SoHAnimJoint110->setSkinCoordWeight(new float[]{1.0,1.0,0.5,0.5}, 4);
SoHAnimJoint110->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint110->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint111 = new SoHAnimJoint();
SoHAnimJoint111->X3DNode::setName(QString("r_carpal_proximal_interphalangeal_3"));
SoHAnimJoint111->setDEF(QString("Joe_r_carpal_proximal_interphalangeal_3"));
SoHAnimJoint111->setCenter(new float[]{-0.200000002980232,0.740000009536743,-0.0399999991059303});
SoHAnimJoint111->setSkinCoordIndex(new int32_t[]{295,296,297,298}, 4);
SoHAnimJoint111->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0}, 4);
SoHAnimJoint111->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint111->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint112 = new SoHAnimJoint();
SoHAnimJoint112->X3DNode::setName(QString("r_carpal_distal_interphalangeal_3"));
SoHAnimJoint112->setDEF(QString("Joe_r_carpal_distal_interphalangeal_3"));
SoHAnimJoint112->setCenter(new float[]{-0.200000002980232,0.714200019836426,-0.0399999991059303});
SoHAnimJoint112->setSkinCoordIndex(new int32_t[]{299,300,301,302,303,304,305,306,307}, 9);
SoHAnimJoint112->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 9);
SoHAnimJoint112->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint112->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint111->addChildren(*SoHAnimJoint112);

SoHAnimJoint110->addChildren(*SoHAnimJoint111);

SoHAnimJoint109->addChildren(*SoHAnimJoint110);

SoHAnimJoint101->addChildren(*SoHAnimJoint109);

SoHAnimJoint* SoHAnimJoint113 = new SoHAnimJoint();
SoHAnimJoint113->X3DNode::setName(QString("r_carpometacarpal_4"));
SoHAnimJoint113->setDEF(QString("Joe_r_carpometacarpal_4"));
SoHAnimJoint113->setCenter(new float[]{-0.200000002980232,0.834999978542328,-0.0649999976158142});
SoHAnimJoint113->setSkinCoordIndex(new int32_t[]{249,250}, 2);
SoHAnimJoint113->setSkinCoordWeight(new float[]{1.0,1.0}, 2);
SoHAnimJoint113->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint113->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint114 = new SoHAnimJoint();
SoHAnimJoint114->X3DNode::setName(QString("r_metacarpophalangeal_4"));
SoHAnimJoint114->setDEF(QString("Joe_r_metacarpophalangeal_4"));
SoHAnimJoint114->setCenter(new float[]{-0.200000002980232,0.792999982833862,-0.0649999976158142});
SoHAnimJoint114->setSkinCoordIndex(new int32_t[]{274,275,280,281}, 4);
SoHAnimJoint114->setSkinCoordWeight(new float[]{1.0,1.0,0.5,0.5}, 4);
SoHAnimJoint114->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint114->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint115 = new SoHAnimJoint();
SoHAnimJoint115->X3DNode::setName(QString("r_carpal_proximal_interphalangeal_4"));
SoHAnimJoint115->setDEF(QString("Joe_r_carpal_proximal_interphalangeal_4"));
SoHAnimJoint115->setCenter(new float[]{-0.200000002980232,0.740000009536743,-0.0649999976158142});
SoHAnimJoint115->setSkinCoordIndex(new int32_t[]{308,309,310,311}, 4);
SoHAnimJoint115->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0}, 4);
SoHAnimJoint115->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint115->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint116 = new SoHAnimJoint();
SoHAnimJoint116->X3DNode::setName(QString("r_carpal_distal_interphalangeal_4"));
SoHAnimJoint116->setDEF(QString("Joe_r_carpal_distal_interphalangeal_4"));
SoHAnimJoint116->setCenter(new float[]{-0.200000002980232,0.717700004577637,-0.0649999976158142});
SoHAnimJoint116->setSkinCoordIndex(new int32_t[]{312,313,314,315,316,317,318,319,320}, 9);
SoHAnimJoint116->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 9);
SoHAnimJoint116->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint116->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint115->addChildren(*SoHAnimJoint116);

SoHAnimJoint114->addChildren(*SoHAnimJoint115);

SoHAnimJoint113->addChildren(*SoHAnimJoint114);

SoHAnimJoint101->addChildren(*SoHAnimJoint113);

SoHAnimJoint* SoHAnimJoint117 = new SoHAnimJoint();
SoHAnimJoint117->X3DNode::setName(QString("r_carpometacarpal_5"));
SoHAnimJoint117->setDEF(QString("Joe_r_carpometacarpal_5"));
SoHAnimJoint117->setCenter(new float[]{-0.200000002980232,0.839999973773956,-0.0850000008940697});
SoHAnimJoint117->setSkinCoordIndex(new int32_t[]{251,252,253,281}, 4);
SoHAnimJoint117->setSkinCoordWeight(new float[]{1.0,1.0,1.0,0.5}, 4);
SoHAnimJoint117->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint117->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint118 = new SoHAnimJoint();
SoHAnimJoint118->X3DNode::setName(QString("r_metacarpophalangeal_5"));
SoHAnimJoint118->setDEF(QString("Joe_r_metacarpophalangeal_5"));
SoHAnimJoint118->setCenter(new float[]{-0.200000002980232,0.790000021457672,-0.0850000008940697});
SoHAnimJoint118->setSkinCoordIndex(new int32_t[]{276,277,278}, 3);
SoHAnimJoint118->setSkinCoordWeight(new float[]{1.0,1.0,1.0}, 3);
SoHAnimJoint118->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint118->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint119 = new SoHAnimJoint();
SoHAnimJoint119->X3DNode::setName(QString("r_carpal_proximal_interphalangeal_5"));
SoHAnimJoint119->setDEF(QString("Joe_r_carpal_proximal_interphalangeal_5"));
SoHAnimJoint119->setCenter(new float[]{-0.200000002980232,0.754999995231628,-0.0850000008940697});
SoHAnimJoint119->setSkinCoordIndex(new int32_t[]{321,322,323,324}, 4);
SoHAnimJoint119->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0}, 4);
SoHAnimJoint119->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint119->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint120 = new SoHAnimJoint();
SoHAnimJoint120->X3DNode::setName(QString("r_carpal_distal_interphalangeal_5"));
SoHAnimJoint120->setDEF(QString("Joe_r_carpal_distal_interphalangeal_5"));
SoHAnimJoint120->setCenter(new float[]{-0.200000002980232,0.735000014305115,-0.0900000035762787});
SoHAnimJoint120->setSkinCoordIndex(new int32_t[]{325,326,327,328,329,330,331,332,333}, 9);
SoHAnimJoint120->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 9);
SoHAnimJoint120->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint120->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint119->addChildren(*SoHAnimJoint120);

SoHAnimJoint118->addChildren(*SoHAnimJoint119);

SoHAnimJoint117->addChildren(*SoHAnimJoint118);

SoHAnimJoint101->addChildren(*SoHAnimJoint117);

SoHAnimJoint100->addChildren(*SoHAnimJoint101);

SoHAnimJoint99->addChildren(*SoHAnimJoint100);

SoHAnimJoint98->addChildren(*SoHAnimJoint99);

SoHAnimJoint97->addChildren(*SoHAnimJoint98);

SoHAnimJoint63->addChildren(*SoHAnimJoint97);

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

SoHAnimJoint49->addChildren(*SoHAnimJoint50);

SoHAnimJoint48->addChildren(*SoHAnimJoint49);

SoHAnimJoint47->addChildren(*SoHAnimJoint48);

SoHAnimJoint46->addChildren(*SoHAnimJoint47);

SoHAnimJoint28->addChildren(*SoHAnimJoint46);

SoHAnimHumanoid27->setJoints(*SoHAnimJoint28);

SoHAnimJoint* SoHAnimJoint121 = new SoHAnimJoint();
SoHAnimJoint121->setUSE(QString("Joe_sacroiliac"));
SoHAnimHumanoid27->setJoints(*SoHAnimJoint121);

SoHAnimJoint* SoHAnimJoint122 = new SoHAnimJoint();
SoHAnimJoint122->setUSE(QString("hanim_l_hip"));
SoHAnimHumanoid27->setJoints(*SoHAnimJoint122);

SoHAnimJoint* SoHAnimJoint123 = new SoHAnimJoint();
SoHAnimJoint123->setUSE(QString("hanim_l_knee"));
SoHAnimHumanoid27->setJoints(*SoHAnimJoint123);

SoHAnimJoint* SoHAnimJoint124 = new SoHAnimJoint();
SoHAnimJoint124->setUSE(QString("hanim_l_talocrural"));
SoHAnimHumanoid27->setJoints(*SoHAnimJoint124);

SoHAnimJoint* SoHAnimJoint125 = new SoHAnimJoint();
SoHAnimJoint125->setUSE(QString("Joe_l_tarsometatarsal_2"));
SoHAnimHumanoid27->setJoints(*SoHAnimJoint125);

SoHAnimJoint* SoHAnimJoint126 = new SoHAnimJoint();
SoHAnimJoint126->setUSE(QString("Joe_l_metatarsophalangeal_2"));
SoHAnimHumanoid27->setJoints(*SoHAnimJoint126);

SoHAnimJoint* SoHAnimJoint127 = new SoHAnimJoint();
SoHAnimJoint127->setUSE(QString("Joe_l_metatarsal_2"));
SoHAnimHumanoid27->setJoints(*SoHAnimJoint127);

SoHAnimJoint* SoHAnimJoint128 = new SoHAnimJoint();
SoHAnimJoint128->setUSE(QString("hanim_r_hip"));
SoHAnimHumanoid27->setJoints(*SoHAnimJoint128);

SoHAnimJoint* SoHAnimJoint129 = new SoHAnimJoint();
SoHAnimJoint129->setUSE(QString("hanim_r_knee"));
SoHAnimHumanoid27->setJoints(*SoHAnimJoint129);

SoHAnimJoint* SoHAnimJoint130 = new SoHAnimJoint();
SoHAnimJoint130->setUSE(QString("hanim_r_talocrural"));
SoHAnimHumanoid27->setJoints(*SoHAnimJoint130);

SoHAnimJoint* SoHAnimJoint131 = new SoHAnimJoint();
SoHAnimJoint131->setUSE(QString("Joe_r_tarsometatarsal_2"));
SoHAnimHumanoid27->setJoints(*SoHAnimJoint131);

SoHAnimJoint* SoHAnimJoint132 = new SoHAnimJoint();
SoHAnimJoint132->setUSE(QString("Joe_r_metatarsophalangeal_2"));
SoHAnimHumanoid27->setJoints(*SoHAnimJoint132);

SoHAnimJoint* SoHAnimJoint133 = new SoHAnimJoint();
SoHAnimJoint133->setUSE(QString("Joe_r_tarsal_distal_interphalangeal_2"));
SoHAnimHumanoid27->setJoints(*SoHAnimJoint133);

SoHAnimJoint* SoHAnimJoint134 = new SoHAnimJoint();
SoHAnimJoint134->setUSE(QString("hanim_vl5"));
SoHAnimHumanoid27->setJoints(*SoHAnimJoint134);

SoHAnimJoint* SoHAnimJoint135 = new SoHAnimJoint();
SoHAnimJoint135->setUSE(QString("hanim_vl4"));
SoHAnimHumanoid27->setJoints(*SoHAnimJoint135);

SoHAnimJoint* SoHAnimJoint136 = new SoHAnimJoint();
SoHAnimJoint136->setUSE(QString("hanim_vl3"));
SoHAnimHumanoid27->setJoints(*SoHAnimJoint136);

SoHAnimJoint* SoHAnimJoint137 = new SoHAnimJoint();
SoHAnimJoint137->setUSE(QString("hanim_vl2"));
SoHAnimHumanoid27->setJoints(*SoHAnimJoint137);

SoHAnimJoint* SoHAnimJoint138 = new SoHAnimJoint();
SoHAnimJoint138->setUSE(QString("hanim_vl1"));
SoHAnimHumanoid27->setJoints(*SoHAnimJoint138);

SoHAnimJoint* SoHAnimJoint139 = new SoHAnimJoint();
SoHAnimJoint139->setUSE(QString("hanim_vt12"));
SoHAnimHumanoid27->setJoints(*SoHAnimJoint139);

SoHAnimJoint* SoHAnimJoint140 = new SoHAnimJoint();
SoHAnimJoint140->setUSE(QString("hanim_vt11"));
SoHAnimHumanoid27->setJoints(*SoHAnimJoint140);

SoHAnimJoint* SoHAnimJoint141 = new SoHAnimJoint();
SoHAnimJoint141->setUSE(QString("hanim_vt10"));
SoHAnimHumanoid27->setJoints(*SoHAnimJoint141);

SoHAnimJoint* SoHAnimJoint142 = new SoHAnimJoint();
SoHAnimJoint142->setUSE(QString("hanim_vt9"));
SoHAnimHumanoid27->setJoints(*SoHAnimJoint142);

SoHAnimJoint* SoHAnimJoint143 = new SoHAnimJoint();
SoHAnimJoint143->setUSE(QString("hanim_vt8"));
SoHAnimHumanoid27->setJoints(*SoHAnimJoint143);

SoHAnimJoint* SoHAnimJoint144 = new SoHAnimJoint();
SoHAnimJoint144->setUSE(QString("hanim_vt7"));
SoHAnimHumanoid27->setJoints(*SoHAnimJoint144);

SoHAnimJoint* SoHAnimJoint145 = new SoHAnimJoint();
SoHAnimJoint145->setUSE(QString("hanim_vt6"));
SoHAnimHumanoid27->setJoints(*SoHAnimJoint145);

SoHAnimJoint* SoHAnimJoint146 = new SoHAnimJoint();
SoHAnimJoint146->setUSE(QString("hanim_vt5"));
SoHAnimHumanoid27->setJoints(*SoHAnimJoint146);

SoHAnimJoint* SoHAnimJoint147 = new SoHAnimJoint();
SoHAnimJoint147->setUSE(QString("hanim_vt4"));
SoHAnimHumanoid27->setJoints(*SoHAnimJoint147);

SoHAnimJoint* SoHAnimJoint148 = new SoHAnimJoint();
SoHAnimJoint148->setUSE(QString("hanim_vt3"));
SoHAnimHumanoid27->setJoints(*SoHAnimJoint148);

SoHAnimJoint* SoHAnimJoint149 = new SoHAnimJoint();
SoHAnimJoint149->setUSE(QString("hanim_vt2"));
SoHAnimHumanoid27->setJoints(*SoHAnimJoint149);

SoHAnimJoint* SoHAnimJoint150 = new SoHAnimJoint();
SoHAnimJoint150->setUSE(QString("hanim_vt1"));
SoHAnimHumanoid27->setJoints(*SoHAnimJoint150);

SoHAnimJoint* SoHAnimJoint151 = new SoHAnimJoint();
SoHAnimJoint151->setUSE(QString("hanim_vc7"));
SoHAnimHumanoid27->setJoints(*SoHAnimJoint151);

SoHAnimJoint* SoHAnimJoint152 = new SoHAnimJoint();
SoHAnimJoint152->setUSE(QString("hanim_vc6"));
SoHAnimHumanoid27->setJoints(*SoHAnimJoint152);

SoHAnimJoint* SoHAnimJoint153 = new SoHAnimJoint();
SoHAnimJoint153->setUSE(QString("hanim_vc5"));
SoHAnimHumanoid27->setJoints(*SoHAnimJoint153);

SoHAnimJoint* SoHAnimJoint154 = new SoHAnimJoint();
SoHAnimJoint154->setUSE(QString("hanim_vc4"));
SoHAnimHumanoid27->setJoints(*SoHAnimJoint154);

SoHAnimJoint* SoHAnimJoint155 = new SoHAnimJoint();
SoHAnimJoint155->setUSE(QString("hanim_vc3"));
SoHAnimHumanoid27->setJoints(*SoHAnimJoint155);

SoHAnimJoint* SoHAnimJoint156 = new SoHAnimJoint();
SoHAnimJoint156->setUSE(QString("hanim_vc2"));
SoHAnimHumanoid27->setJoints(*SoHAnimJoint156);

SoHAnimJoint* SoHAnimJoint157 = new SoHAnimJoint();
SoHAnimJoint157->setUSE(QString("hanim_vc1"));
SoHAnimHumanoid27->setJoints(*SoHAnimJoint157);

SoHAnimJoint* SoHAnimJoint158 = new SoHAnimJoint();
SoHAnimJoint158->setUSE(QString("hanim_skullbase"));
SoHAnimHumanoid27->setJoints(*SoHAnimJoint158);

SoHAnimJoint* SoHAnimJoint159 = new SoHAnimJoint();
SoHAnimJoint159->setUSE(QString("hanim_l_eyeball_joint"));
SoHAnimHumanoid27->setJoints(*SoHAnimJoint159);

SoHAnimJoint* SoHAnimJoint160 = new SoHAnimJoint();
SoHAnimJoint160->setUSE(QString("hanim_r_eyeball_joint"));
SoHAnimHumanoid27->setJoints(*SoHAnimJoint160);

SoHAnimJoint* SoHAnimJoint161 = new SoHAnimJoint();
SoHAnimJoint161->setUSE(QString("hanim_l_sternoclavicular"));
SoHAnimHumanoid27->setJoints(*SoHAnimJoint161);

SoHAnimJoint* SoHAnimJoint162 = new SoHAnimJoint();
SoHAnimJoint162->setUSE(QString("hanim_l_acromioclavicular"));
SoHAnimHumanoid27->setJoints(*SoHAnimJoint162);

SoHAnimJoint* SoHAnimJoint163 = new SoHAnimJoint();
SoHAnimJoint163->setUSE(QString("hanim_l_shoulder"));
SoHAnimHumanoid27->setJoints(*SoHAnimJoint163);

SoHAnimJoint* SoHAnimJoint164 = new SoHAnimJoint();
SoHAnimJoint164->setUSE(QString("hanim_l_elbow"));
SoHAnimHumanoid27->setJoints(*SoHAnimJoint164);

SoHAnimJoint* SoHAnimJoint165 = new SoHAnimJoint();
SoHAnimJoint165->setUSE(QString("Joe_l_radiocarpal"));
SoHAnimHumanoid27->setJoints(*SoHAnimJoint165);

SoHAnimJoint* SoHAnimJoint166 = new SoHAnimJoint();
SoHAnimJoint166->setUSE(QString("Joe_l_carpometacarpal_1"));
SoHAnimHumanoid27->setJoints(*SoHAnimJoint166);

SoHAnimJoint* SoHAnimJoint167 = new SoHAnimJoint();
SoHAnimJoint167->setUSE(QString("Joe_l_metacarpophalangeal_1"));
SoHAnimHumanoid27->setJoints(*SoHAnimJoint167);

SoHAnimJoint* SoHAnimJoint168 = new SoHAnimJoint();
SoHAnimJoint168->setUSE(QString("Joe_l_carpal_interphalangeal_1"));
SoHAnimHumanoid27->setJoints(*SoHAnimJoint168);

SoHAnimJoint* SoHAnimJoint169 = new SoHAnimJoint();
SoHAnimJoint169->setUSE(QString("Joe_l_carpometacarpal_2"));
SoHAnimHumanoid27->setJoints(*SoHAnimJoint169);

SoHAnimJoint* SoHAnimJoint170 = new SoHAnimJoint();
SoHAnimJoint170->setUSE(QString("Joe_l_metacarpophalangeal_2"));
SoHAnimHumanoid27->setJoints(*SoHAnimJoint170);

SoHAnimJoint* SoHAnimJoint171 = new SoHAnimJoint();
SoHAnimJoint171->setUSE(QString("Joe_l_carpal_proximal_interphalangeal_2"));
SoHAnimHumanoid27->setJoints(*SoHAnimJoint171);

SoHAnimJoint* SoHAnimJoint172 = new SoHAnimJoint();
SoHAnimJoint172->setUSE(QString("Joe_l_carpal_distal_interphalangeal_2"));
SoHAnimHumanoid27->setJoints(*SoHAnimJoint172);

SoHAnimJoint* SoHAnimJoint173 = new SoHAnimJoint();
SoHAnimJoint173->setUSE(QString("Joe_l_carpometacarpal_3"));
SoHAnimHumanoid27->setJoints(*SoHAnimJoint173);

SoHAnimJoint* SoHAnimJoint174 = new SoHAnimJoint();
SoHAnimJoint174->setUSE(QString("Joe_l_metacarpophalangeal_3"));
SoHAnimHumanoid27->setJoints(*SoHAnimJoint174);

SoHAnimJoint* SoHAnimJoint175 = new SoHAnimJoint();
SoHAnimJoint175->setUSE(QString("Joe_l_carpal_proximal_interphalangeal_3"));
SoHAnimHumanoid27->setJoints(*SoHAnimJoint175);

SoHAnimJoint* SoHAnimJoint176 = new SoHAnimJoint();
SoHAnimJoint176->setUSE(QString("Joe_l_carpal_distal_interphalangeal_3"));
SoHAnimHumanoid27->setJoints(*SoHAnimJoint176);

SoHAnimJoint* SoHAnimJoint177 = new SoHAnimJoint();
SoHAnimJoint177->setUSE(QString("Joe_l_carpometacarpal_4"));
SoHAnimHumanoid27->setJoints(*SoHAnimJoint177);

SoHAnimJoint* SoHAnimJoint178 = new SoHAnimJoint();
SoHAnimJoint178->setUSE(QString("Joe_l_metacarpophalangeal_4"));
SoHAnimHumanoid27->setJoints(*SoHAnimJoint178);

SoHAnimJoint* SoHAnimJoint179 = new SoHAnimJoint();
SoHAnimJoint179->setUSE(QString("Joe_l_carpal_proximal_interphalangeal_4"));
SoHAnimHumanoid27->setJoints(*SoHAnimJoint179);

SoHAnimJoint* SoHAnimJoint180 = new SoHAnimJoint();
SoHAnimJoint180->setUSE(QString("Joe_l_carpal_distal_interphalangeal_4"));
SoHAnimHumanoid27->setJoints(*SoHAnimJoint180);

SoHAnimJoint* SoHAnimJoint181 = new SoHAnimJoint();
SoHAnimJoint181->setUSE(QString("Joe_l_carpometacarpal_5"));
SoHAnimHumanoid27->setJoints(*SoHAnimJoint181);

SoHAnimJoint* SoHAnimJoint182 = new SoHAnimJoint();
SoHAnimJoint182->setUSE(QString("Joe_l_metacarpophalangeal_5"));
SoHAnimHumanoid27->setJoints(*SoHAnimJoint182);

SoHAnimJoint* SoHAnimJoint183 = new SoHAnimJoint();
SoHAnimJoint183->setUSE(QString("Joe_l_carpal_proximal_interphalangeal_5"));
SoHAnimHumanoid27->setJoints(*SoHAnimJoint183);

SoHAnimJoint* SoHAnimJoint184 = new SoHAnimJoint();
SoHAnimJoint184->setUSE(QString("Joe_l_carpal_distal_interphalangeal_5"));
SoHAnimHumanoid27->setJoints(*SoHAnimJoint184);

SoHAnimJoint* SoHAnimJoint185 = new SoHAnimJoint();
SoHAnimJoint185->setUSE(QString("hanim_r_sternoclavicular"));
SoHAnimHumanoid27->setJoints(*SoHAnimJoint185);

SoHAnimJoint* SoHAnimJoint186 = new SoHAnimJoint();
SoHAnimJoint186->setUSE(QString("hanim_r_acromioclavicular"));
SoHAnimHumanoid27->setJoints(*SoHAnimJoint186);

SoHAnimJoint* SoHAnimJoint187 = new SoHAnimJoint();
SoHAnimJoint187->setUSE(QString("hanim_r_shoulder"));
SoHAnimHumanoid27->setJoints(*SoHAnimJoint187);

SoHAnimJoint* SoHAnimJoint188 = new SoHAnimJoint();
SoHAnimJoint188->setUSE(QString("hanim_r_elbow"));
SoHAnimHumanoid27->setJoints(*SoHAnimJoint188);

SoHAnimJoint* SoHAnimJoint189 = new SoHAnimJoint();
SoHAnimJoint189->setUSE(QString("Joe_r_radiocarpal"));
SoHAnimHumanoid27->setJoints(*SoHAnimJoint189);

SoHAnimJoint* SoHAnimJoint190 = new SoHAnimJoint();
SoHAnimJoint190->setUSE(QString("Joe_r_carpometacarpal_1"));
SoHAnimHumanoid27->setJoints(*SoHAnimJoint190);

SoHAnimJoint* SoHAnimJoint191 = new SoHAnimJoint();
SoHAnimJoint191->setUSE(QString("Joe_r_metacarpophalangeal_1"));
SoHAnimHumanoid27->setJoints(*SoHAnimJoint191);

SoHAnimJoint* SoHAnimJoint192 = new SoHAnimJoint();
SoHAnimJoint192->setUSE(QString("Joe_r_carpal_interphalangeal_1"));
SoHAnimHumanoid27->setJoints(*SoHAnimJoint192);

SoHAnimJoint* SoHAnimJoint193 = new SoHAnimJoint();
SoHAnimJoint193->setUSE(QString("Joe_r_carpometacarpal_2"));
SoHAnimHumanoid27->setJoints(*SoHAnimJoint193);

SoHAnimJoint* SoHAnimJoint194 = new SoHAnimJoint();
SoHAnimJoint194->setUSE(QString("Joe_r_metacarpophalangeal_2"));
SoHAnimHumanoid27->setJoints(*SoHAnimJoint194);

SoHAnimJoint* SoHAnimJoint195 = new SoHAnimJoint();
SoHAnimJoint195->setUSE(QString("Joe_r_carpal_proximal_interphalangeal_2"));
SoHAnimHumanoid27->setJoints(*SoHAnimJoint195);

SoHAnimJoint* SoHAnimJoint196 = new SoHAnimJoint();
SoHAnimJoint196->setUSE(QString("Joe_r_carpal_distal_interphalangeal_2"));
SoHAnimHumanoid27->setJoints(*SoHAnimJoint196);

SoHAnimJoint* SoHAnimJoint197 = new SoHAnimJoint();
SoHAnimJoint197->setUSE(QString("Joe_r_carpometacarpal_3"));
SoHAnimHumanoid27->setJoints(*SoHAnimJoint197);

SoHAnimJoint* SoHAnimJoint198 = new SoHAnimJoint();
SoHAnimJoint198->setUSE(QString("Joe_r_metacarpophalangeal_3"));
SoHAnimHumanoid27->setJoints(*SoHAnimJoint198);

SoHAnimJoint* SoHAnimJoint199 = new SoHAnimJoint();
SoHAnimJoint199->setUSE(QString("Joe_r_carpal_proximal_interphalangeal_3"));
SoHAnimHumanoid27->setJoints(*SoHAnimJoint199);

SoHAnimJoint* SoHAnimJoint200 = new SoHAnimJoint();
SoHAnimJoint200->setUSE(QString("Joe_r_carpal_distal_interphalangeal_3"));
SoHAnimHumanoid27->setJoints(*SoHAnimJoint200);

SoHAnimJoint* SoHAnimJoint201 = new SoHAnimJoint();
SoHAnimJoint201->setUSE(QString("Joe_r_carpometacarpal_4"));
SoHAnimHumanoid27->setJoints(*SoHAnimJoint201);

SoHAnimJoint* SoHAnimJoint202 = new SoHAnimJoint();
SoHAnimJoint202->setUSE(QString("Joe_r_metacarpophalangeal_4"));
SoHAnimHumanoid27->setJoints(*SoHAnimJoint202);

SoHAnimJoint* SoHAnimJoint203 = new SoHAnimJoint();
SoHAnimJoint203->setUSE(QString("Joe_r_carpal_proximal_interphalangeal_4"));
SoHAnimHumanoid27->setJoints(*SoHAnimJoint203);

SoHAnimJoint* SoHAnimJoint204 = new SoHAnimJoint();
SoHAnimJoint204->setUSE(QString("Joe_r_carpal_distal_interphalangeal_4"));
SoHAnimHumanoid27->setJoints(*SoHAnimJoint204);

SoHAnimJoint* SoHAnimJoint205 = new SoHAnimJoint();
SoHAnimJoint205->setUSE(QString("Joe_r_carpometacarpal_5"));
SoHAnimHumanoid27->setJoints(*SoHAnimJoint205);

SoHAnimJoint* SoHAnimJoint206 = new SoHAnimJoint();
SoHAnimJoint206->setUSE(QString("Joe_r_metacarpophalangeal_5"));
SoHAnimHumanoid27->setJoints(*SoHAnimJoint206);

SoHAnimJoint* SoHAnimJoint207 = new SoHAnimJoint();
SoHAnimJoint207->setUSE(QString("Joe_r_carpal_proximal_interphalangeal_5"));
SoHAnimHumanoid27->setJoints(*SoHAnimJoint207);

SoHAnimJoint* SoHAnimJoint208 = new SoHAnimJoint();
SoHAnimJoint208->setUSE(QString("Joe_r_carpal_distal_interphalangeal_5"));
SoHAnimHumanoid27->setJoints(*SoHAnimJoint208);

SoHAnimJoint* SoHAnimJoint209 = new SoHAnimJoint();
SoHAnimJoint209->setUSE(QString("hanim_humanoid_root"));
SoHAnimHumanoid27->setJoints(*SoHAnimJoint209);

SoShape* SoShape210 = new SoShape();
SoIndexedFaceSet* SoIndexedFaceSet211 = new SoIndexedFaceSet();
SoIndexedFaceSet211->setCoordIndex(new int32_t[]{0,9,5,-1,0,7,9,-1,0,5,1,-1,1,5,2,-1,1,3,7,-1,2,4,3,-1,0,1,7,-1,1,2,3,-1,5,6,2,-1,7,3,8,-1,6,4,2,-1,3,4,8,-1,9,6,5,-1,9,7,8,-1,4,6,10,-1,4,10,12,-1,4,12,8,-1,10,11,12,-1,9,75,24,-1,9,24,74,-1,9,8,75,-1,9,74,6,-1,10,6,74,-1,12,75,8,-1,74,24,29,-1,24,77,29,-1,10,74,29,-1,77,32,29,-1,32,78,29,-1,78,30,29,-1,30,10,29,-1,41,24,75,-1,41,75,12,-1,41,12,42,-1,41,42,80,-1,41,80,44,-1,41,44,79,-1,41,79,24,-1,81,24,79,-1,81,77,24,-1,81,25,77,-1,81,79,25,-1,25,79,44,-1,25,32,77,-1,25,83,32,-1,25,26,83,-1,25,27,26,-1,25,84,27,-1,25,44,84,-1,11,10,30,-1,11,30,13,-1,11,13,15,-1,11,15,14,-1,11,14,42,-1,11,42,12,-1,15,13,16,-1,15,18,14,-1,15,16,76,-1,15,76,18,-1,76,16,17,-1,76,17,82,-1,76,82,19,-1,76,19,18,-1,22,18,19,-1,22,87,18,-1,22,27,84,-1,22,84,87,-1,87,84,85,-1,85,84,44,-1,85,42,14,-1,87,14,18,-1,87,85,14,-1,20,83,26,-1,20,17,16,-1,20,16,88,-1,20,88,83,-1,88,16,13,-1,88,13,86,-1,88,86,83,-1,86,13,30,-1,86,32,83,-1,23,89,22,-1,89,27,22,-1,89,91,27,-1,91,26,27,-1,91,20,26,-1,21,20,91,-1,21,17,20,-1,21,92,17,-1,82,17,92,-1,82,90,19,-1,23,22,19,-1,23,19,90,-1,82,92,101,-1,82,101,99,-1,82,99,93,-1,82,93,95,-1,82,95,97,-1,82,97,90,-1,23,90,97,-1,23,97,94,-1,23,94,89,-1,89,94,96,-1,89,96,95,-1,89,95,93,-1,89,93,91,-1,91,93,99,-1,91,99,100,-1,91,100,98,-1,21,91,98,-1,21,98,101,-1,21,101,92,-1,85,105,42,-1,85,103,105,-1,85,44,103,-1,103,44,104,-1,80,42,105,-1,80,105,102,-1,80,102,104,-1,80,104,44,-1,105,109,102,-1,102,109,47,-1,47,104,102,-1,104,47,45,-1,104,45,103,-1,103,45,46,-1,103,46,109,-1,103,109,105,-1,109,112,110,-1,109,110,47,-1,47,110,111,-1,47,111,45,-1,45,111,113,-1,113,46,45,-1,46,113,112,-1,112,109,46,-1,112,118,110,-1,110,118,115,-1,110,115,111,-1,111,115,117,-1,111,117,113,-1,113,117,116,-1,113,116,112,-1,112,116,118,-1,115,118,119,-1,119,118,122,-1,118,116,122,-1,122,116,120,-1,116,117,120,-1,120,117,121,-1,117,115,121,-1,115,119,121,-1,119,127,123,-1,119,122,127,-1,122,126,127,-1,122,128,126,-1,122,120,128,-1,120,124,128,-1,120,121,124,-1,121,125,124,-1,121,119,125,-1,119,123,125,-1,127,129,123,-1,127,126,129,-1,129,126,141,-1,141,126,143,-1,126,142,143,-1,126,128,142,-1,128,124,130,-1,142,128,130,-1,124,132,130,-1,124,134,132,-1,125,134,124,-1,125,136,134,-1,125,137,136,-1,125,135,137,-1,125,133,135,-1,125,123,133,-1,123,131,133,-1,123,129,131,-1,131,129,138,-1,129,141,138,-1,138,141,144,-1,141,143,144,-1,143,146,144,-1,142,146,143,-1,142,145,146,-1,139,145,142,-1,130,139,142,-1,139,130,132,-1,139,132,154,-1,132,157,154,-1,132,159,157,-1,132,134,159,-1,134,136,159,-1,136,161,159,-1,136,137,161,-1,137,162,161,-1,160,162,137,-1,135,160,137,-1,133,160,135,-1,133,158,160,-1,131,158,133,-1,156,158,131,-1,153,156,131,-1,131,138,153,-1,138,155,153,-1,140,155,138,-1,138,144,140,-1,144,147,140,-1,140,147,145,-1,140,145,139,-1,139,155,140,-1,154,155,139,-1,146,149,144,-1,146,151,149,-1,145,151,146,-1,150,151,145,-1,145,152,150,-1,147,152,145,-1,147,149,152,-1,147,144,149,-1,148,149,151,-1,148,152,149,-1,148,150,152,-1,148,151,150,-1,160,207,162,-1,160,205,207,-1,165,208,205,-1,160,165,205,-1,158,165,160,-1,161,162,207,-1,161,207,206,-1,165,206,208,-1,206,165,161,-1,161,165,159,-1,207,209,211,-1,205,209,207,-1,205,212,209,-1,205,208,212,-1,206,212,208,-1,206,210,212,-1,206,207,210,-1,207,211,210,-1,209,212,213,-1,212,216,213,-1,212,214,216,-1,210,214,212,-1,210,215,214,-1,210,211,215,-1,209,215,211,-1,209,213,215,-1,217,213,216,-1,217,215,213,-1,217,214,215,-1,217,216,214,-1,158,194,165,-1,192,194,158,-1,164,195,192,-1,158,164,192,-1,156,164,158,-1,159,194,165,-1,159,194,193,-1,159,193,195,-1,159,195,164,-1,159,164,157,-1,157,164,180,-1,192,198,194,-1,192,196,198,-1,192,195,196,-1,195,199,196,-1,196,199,200,-1,199,203,200,-1,193,199,195,-1,193,197,199,-1,193,198,197,-1,193,194,198,-1,199,201,203,-1,197,201,199,-1,197,198,201,-1,198,202,201,-1,196,202,198,-1,200,202,196,-1,204,202,200,-1,204,201,202,-1,204,203,201,-1,204,200,203,-1,156,181,164,-1,156,179,181,-1,156,182,179,-1,156,163,182,-1,163,180,182,-1,157,180,163,-1,164,181,180,-1,179,182,183,-1,182,186,183,-1,182,184,186,-1,180,184,182,-1,180,181,184,-1,181,185,184,-1,179,185,181,-1,183,185,179,-1,183,186,187,-1,186,190,187,-1,184,190,186,-1,184,188,190,-1,184,185,188,-1,185,189,188,-1,185,183,189,-1,183,187,189,-1,191,189,187,-1,191,188,189,-1,191,190,188,-1,191,187,190,-1,153,163,156,-1,153,168,163,-1,153,166,168,-1,153,169,166,-1,155,169,153,-1,155,167,169,-1,154,167,155,-1,154,163,167,-1,154,157,163,-1,163,168,167,-1,166,169,170,-1,169,173,170,-1,169,171,173,-1,169,167,171,-1,167,168,171,-1,168,172,171,-1,168,170,172,-1,170,168,166,-1,170,173,174,-1,173,177,174,-1,173,175,177,-1,173,171,175,-1,171,172,175,-1,172,176,175,-1,172,174,176,-1,170,174,172,-1,178,176,174,-1,178,175,176,-1,178,177,175,-1,178,174,177,-1,86,30,221,-1,86,221,219,-1,86,219,32,-1,32,219,220,-1,78,32,220,-1,78,220,218,-1,78,218,221,-1,78,221,30,-1,221,225,219,-1,219,225,35,-1,35,33,219,-1,33,220,219,-1,33,34,220,-1,220,34,218,-1,221,218,34,-1,34,225,221,-1,225,226,228,-1,225,228,35,-1,35,228,229,-1,35,229,33,-1,33,229,227,-1,33,227,34,-1,34,227,226,-1,34,226,225,-1,226,234,228,-1,228,234,232,-1,232,229,228,-1,232,233,229,-1,229,233,227,-1,227,233,231,-1,227,231,226,-1,226,231,234,-1,231,235,234,-1,235,238,234,-1,234,238,232,-1,238,236,232,-1,232,236,233,-1,236,237,233,-1,233,237,231,-1,231,237,235,-1,235,239,243,-1,235,243,238,-1,238,243,242,-1,238,242,244,-1,238,244,236,-1,236,244,240,-1,236,240,237,-1,237,240,241,-1,237,241,235,-1,235,241,239,-1,243,239,245,-1,243,245,242,-1,245,257,242,-1,257,259,242,-1,242,259,258,-1,242,258,244,-1,244,246,240,-1,258,246,244,-1,240,246,248,-1,240,248,250,-1,241,240,250,-1,241,250,252,-1,241,252,253,-1,241,253,251,-1,241,251,249,-1,241,249,239,-1,239,249,247,-1,239,247,245,-1,247,254,245,-1,245,254,257,-1,254,260,257,-1,257,260,259,-1,259,260,262,-1,258,259,262,-1,258,262,261,-1,255,258,261,-1,246,258,255,-1,255,248,246,-1,255,270,248,-1,248,270,273,-1,248,273,275,-1,248,275,250,-1,250,275,252,-1,252,275,277,-1,252,277,253,-1,253,277,278,-1,276,253,278,-1,251,253,276,-1,249,251,276,-1,249,276,274,-1,247,249,274,-1,272,247,274,-1,269,247,272,-1,247,269,254,-1,254,269,271,-1,256,254,271,-1,254,256,260,-1,260,256,263,-1,256,261,263,-1,256,255,261,-1,255,256,271,-1,270,255,271,-1,262,260,265,-1,262,265,267,-1,261,262,267,-1,266,261,267,-1,261,266,268,-1,263,261,268,-1,263,268,265,-1,263,265,260,-1,264,267,265,-1,264,265,268,-1,264,268,266,-1,264,266,267,-1,276,278,323,-1,276,323,321,-1,281,321,324,-1,276,321,281,-1,274,276,281,-1,277,323,278,-1,277,322,323,-1,281,324,322,-1,322,277,281,-1,277,275,281,-1,323,327,325,-1,321,323,325,-1,321,325,328,-1,321,328,324,-1,322,324,328,-1,322,328,326,-1,322,326,323,-1,323,326,327,-1,325,329,328,-1,328,329,332,-1,328,332,330,-1,326,328,330,-1,326,330,331,-1,326,331,327,-1,325,327,331,-1,325,331,329,-1,333,332,329,-1,333,329,331,-1,333,331,330,-1,333,330,332,-1,274,281,310,-1,308,274,310,-1,280,308,311,-1,274,308,280,-1,272,274,280,-1,275,310,281,-1,275,309,310,-1,275,311,309,-1,275,280,311,-1,275,273,280,-1,273,296,280,-1,308,310,314,-1,308,314,312,-1,308,312,311,-1,311,312,315,-1,312,316,315,-1,315,316,319,-1,309,311,315,-1,309,315,313,-1,309,313,314,-1,309,314,310,-1,315,319,317,-1,313,315,317,-1,313,317,314,-1,314,317,318,-1,312,314,318,-1,316,312,318,-1,320,316,318,-1,320,318,317,-1,320,317,319,-1,320,319,316,-1,272,280,297,-1,272,297,295,-1,272,295,298,-1,272,298,279,-1,279,298,296,-1,273,279,296,-1,280,296,297,-1,295,299,298,-1,298,299,302,-1,298,302,300,-1,296,298,300,-1,296,300,297,-1,297,300,301,-1,295,297,301,-1,299,295,301,-1,299,303,302,-1,302,303,306,-1,300,302,306,-1,300,306,304,-1,300,304,301,-1,301,304,305,-1,301,305,299,-1,299,305,303,-1,307,303,305,-1,307,305,304,-1,307,304,306,-1,307,306,303,-1,269,272,279,-1,269,279,284,-1,269,284,282,-1,269,282,285,-1,271,269,285,-1,271,285,283,-1,270,271,283,-1,270,283,279,-1,270,279,273,-1,279,283,284,-1,282,286,285,-1,285,286,289,-1,285,289,287,-1,285,287,283,-1,283,287,284,-1,284,287,288,-1,284,288,286,-1,286,282,284,-1,286,290,289,-1,289,290,293,-1,289,293,291,-1,289,291,287,-1,287,291,288,-1,288,291,292,-1,288,292,290,-1,286,288,290,-1,294,290,292,-1,294,292,291,-1,294,291,293,-1,294,293,290,-1,97,334,336,-1,97,336,94,-1,94,336,96,-1,336,335,96,-1,96,335,95,-1,95,335,337,-1,95,337,334,-1,95,334,97,-1,334,341,336,-1,336,341,338,-1,336,338,335,-1,335,338,340,-1,335,340,337,-1,337,340,339,-1,337,339,334,-1,334,339,341,-1,341,345,342,-1,341,342,338,-1,338,342,340,-1,340,342,344,-1,340,344,339,-1,339,344,343,-1,339,343,345,-1,339,345,341,-1,345,349,342,-1,342,349,351,-1,342,351,346,-1,342,346,344,-1,71,346,348,-1,71,344,346,-1,71,348,347,-1,71,347,344,-1,344,347,343,-1,343,347,352,-1,343,352,349,-1,343,349,345,-1,349,352,356,-1,349,356,353,-1,349,353,355,-1,349,355,351,-1,354,356,352,-1,354,352,350,-1,354,350,351,-1,354,351,355,-1,353,356,357,-1,353,357,358,-1,353,358,359,-1,353,359,360,-1,353,360,361,-1,353,361,355,-1,354,357,356,-1,350,346,351,-1,348,346,347,-1,350,347,346,-1,350,352,347,-1,354,358,357,-1,354,359,358,-1,354,360,359,-1,354,361,360,-1,354,355,361,-1,101,362,365,-1,101,365,99,-1,99,365,100,-1,100,365,363,-1,100,363,98,-1,98,363,364,-1,98,364,101,-1,101,364,362,-1,362,369,367,-1,362,367,365,-1,365,367,363,-1,363,367,368,-1,363,367,368,-1,363,368,366,-1,363,366,364,-1,364,366,362,-1,362,366,369,-1,369,373,371,-1,369,371,367,-1,367,371,368,-1,368,371,372,-1,368,372,366,-1,366,372,370,-1,366,370,369,-1,369,370,373,-1,373,377,380,-1,373,380,375,-1,373,375,371,-1,371,375,372,-1,372,375,376,-1,372,376,374,-1,372,374,370,-1,370,374,379,-1,373,370,379,-1,373,379,377,-1,377,379,383,-1,377,383,381,-1,377,381,384,-1,377,384,380,-1,381,383,389,-1,381,389,388,-1,381,388,387,-1,381,387,386,-1,381,386,385,-1,381,385,384,-1,376,375,374,-1,378,379,374,-1,378,374,375,-1,378,375,380,-1,382,386,387,-1,382,387,388,-1,382,388,389,-1,382,389,383,-1,382,383,379,-1,382,379,378,-1,382,378,380,-1,382,380,384,-1,382,384,385,-1,382,385,386,-1}, 2780);
SoIndexedFaceSet211->setCreaseAngle(3.09999990463257);
SoIndexedFaceSet211->setColorPerVertex(false);
SoCoordinate* SoCoordinate212 = new SoCoordinate();
SoCoordinate212->setDEF(QString("JoeSkinCoord"));
SoCoordinate212->setPoint(new float[]{0.0,1.76999998092651,0.0,0.0,1.66499996185303,0.0900000035762787,-0.0329999998211861,1.62000000476837,0.0869999974966049,0.0329999998211861,1.62000000476837,0.0869999974966049,0.0,1.54999995231628,0.0970000028610229,-0.0769999995827675,1.63999998569489,-0.00999999977648258,-0.0527000017464161,1.58000004291534,0.0149999996647239,0.0769999995827675,1.63999998569489,-0.00999999977648258,0.0527000017464161,1.58000004291534,0.0149999996647239,0.0,1.625,-0.0925000011920929,-0.0299999993294477,1.46000003814697,0.0350000001490116,0.0,1.44000005722046,0.0299999993294477,0.0299999993294477,1.46000003814697,0.0350000001490116,-0.113499999046326,1.317999958992,0.0949999988079071,0.113499999046326,1.317999958992,0.0949999988079071,0.0,1.25,0.112999998033047,-0.0869999974966049,1.19000005722046,0.0900000035762787,-0.0935000032186508,1.02999997138977,0.0750000029802322,0.0869999974966049,1.19000005722046,0.0900000035762787,0.0935000032186508,1.02999997138977,0.0750000029802322,-0.142499998211861,1.06500005722046,0.00329999998211861,-0.150000005960464,0.899999976158142,-0.00999999977648258,0.142499998211861,1.06500005722046,0.00329999998211861,0.150000005960464,0.899999976158142,-0.00999999977648258,0.0,1.52999997138977,-0.0839999988675117,0.00490000005811453,1.19079995155334,-0.111299999058247,-0.0772999972105026,1.01900005340576,-0.119999997317791,0.0772999972105026,1.01900005340576,-0.119999997317791,0.00499999988824129,1.09150004386902,-0.109099999070168,-0.178000003099442,1.48249995708466,-0.0625,-0.170000001788139,1.37999999523163,0.00700000021606684,-0.188400000333786,0.86760002374649,-0.0359999984502792,-0.159999996423721,1.37999999523163,-0.127000004053116,-0.200000002980232,1.13880002498627,-0.0799999982118607,-0.244000002741814,1.13880002498627,-0.0399999991059303,-0.165000006556511,1.13880002498627,-0.0399999991059303,-0.230000004172325,1.13300001621246,-0.0549999997019768,-0.197699993848801,0.816900014877319,-0.0176999997347593,-0.194100007414818,0.677200019359589,-0.0423000007867813,-0.21170000731945,0.856199979782104,-0.0584000013768673,-0.192900002002716,0.788999974727631,-0.10639999806881,0.174999997019768,1.48249995708466,-0.0599999986588955,0.170000001788139,1.37999999523163,0.00700000021606684,0.190099999308586,0.864499986171722,-0.0414999984204769,0.159999996423721,1.37999999523163,-0.125,0.200000002980232,1.13880002498627,-0.0799999982118607,0.165000006556511,1.13880002498627,-0.0399999991059303,0.244000002741814,1.13880002498627,-0.0399999991059303,0.230000004172325,1.13300001621246,-0.0549999997019768,0.200900003314018,0.813899993896484,-0.023700000718236,0.205599993467331,0.674300014972687,-0.048200000077486,0.214200004935265,0.85290002822876,-0.064800001680851,0.192900002002716,0.78600001335144,-0.112199999392033,-0.100000001490116,0.491299986839294,-0.0299999993294477,-0.170000001788139,0.465999990701675,0.0,-0.0500000007450581,0.465999990701675,0.0,-0.165000006556511,0.00999999977648258,0.119999997317791,-0.150000005960464,0.0700000002980232,0.0,-0.0850000008940697,0.0860000029206276,0.0125000001862645,-0.0900000035762787,0.0560000017285347,0.0125000001862645,-0.115000002086163,0.0199999995529652,0.122000001370907,-0.115000002086163,0.0399999991059303,-0.0549999997019768,-0.109999999403954,0.0109999999403954,0.189999997615814,0.0992999970912933,0.488099992275238,-0.0308999996632338,0.170000001788139,0.465999990701675,0.0,0.0500000007450581,0.486699998378754,0.0,0.165000006556511,0.00999999977648258,0.119999997317791,0.150000005960464,0.0700000002980232,0.0,0.0850000008940697,0.0860000029206276,0.0125000001862645,0.0900000035762787,0.0560000017285347,0.0125000001862645,0.115000002086163,0.0199999995529652,0.122000001370907,0.115000002086163,0.0399999991059303,-0.0549999997019768,0.109999999403954,0.0109999999403954,0.189999997615814,0.0,0.875,0.0,-0.0645999982953072,1.51489996910095,-0.0379999987781048,0.0645999982953072,1.51489996910095,-0.0379999987781048,0.0,1.07225000858307,0.0900000035762787,-0.109999999403954,1.42700004577637,-0.137500002980232,-0.234999999403954,1.41999995708466,-0.0625,0.109999999403954,1.42700004577637,-0.137500002980232,0.234999999403954,1.41999995708466,-0.0625,0.0,1.4099999666214,-0.144999995827675,0.0,0.925000011920929,0.0799999982118607,-0.0869999974966049,1.19000005722046,-0.0900000035762787,0.0869999974966049,1.19000005722046,-0.0900000035762787,0.172000005841255,1.32000005245209,-0.0299999993294477,-0.172000005841255,1.32000005245209,-0.0300000011920929,0.150000005960464,1.23000001907349,-0.0149999996647239,-0.150000005960464,1.23000001907349,-0.0150000005960464,0.0790000036358833,0.919999957084656,-0.140000000596046,0.100000001490116,0.899999976158142,0.0769999995827675,-0.0790000036358833,0.919999957084656,-0.140000000596046,-0.100000001490116,0.899999976158142,0.0750000029802322,0.0,0.870000004768372,0.0,0.171000003814697,0.649999976158142,0.0,0.0199999995529652,0.649999976158142,0.0,0.100000001490116,0.649999976158142,-0.0799999982118607,0.100000001490116,0.649999976158142,0.0700000002980232,-0.171000003814697,0.649999976158142,0.0,-0.0199999995529652,0.649999976158142,0.0,-0.100000001490116,0.649999976158142,-0.0799999982118607,-0.100000001490116,0.649999976158142,0.0700000002980232,0.25,1.26999998092651,-0.0399999991059303,0.170000001788139,1.26999998092651,-0.0399999991059303,0.200000002980232,1.26999998092651,-0.0900000035762787,0.200000002980232,1.26999998092651,0.0199999995529652,0.244000002741814,1.13880002498627,-0.0399999991059303,0.165000006556511,1.13880002498627,-0.0399999991059303,0.200000002980232,1.13880002498627,-0.0799999982118607,0.200000002980232,1.13880002498627,-0.0130000002682209,0.224999994039536,1.0,-0.00999999977648258,0.224999994039536,1.0,-0.0700000002980232,0.185000002384186,1.0,-0.00999999977648258,0.185000002384186,1.0,-0.0700000002980232,0.200000002980232,1.13880002498627,-0.0399999991059303,0.224999994039536,0.920000016689301,-0.0399999991059303,0.174999997019768,0.920000016689301,-0.0399999991059303,0.200000002980232,0.920000016689301,-0.0649999976158142,0.200000002980232,0.920000016689301,-0.0149999996647239,0.224999994039536,0.889999985694885,-0.0399999991059303,0.174999997019768,0.889999985694885,-0.0399999991059303,0.200000002980232,0.889999985694885,-0.0649999976158142,0.200000002980232,0.889999985694885,-0.0149999996647239,0.217999994754791,0.860000014305115,-0.0399999991059303,0.184000000357628,0.860000014305115,-0.0399999991059303,0.200000002980232,0.870000004768372,-0.0700000002980232,0.200000002980232,0.870000004768372,0.0,0.209999993443489,0.850000023841858,0.0,0.185399994254112,0.850000023841858,0.0,0.211999997496605,0.839999973773956,-0.0149999996647239,0.18299999833107,0.839999973773956,-0.0149999996647239,0.212999999523163,0.834999978542328,-0.0399999991059303,0.189999997615814,0.834999978542328,-0.0399999991059303,0.210999995470047,0.834999978542328,-0.0649999976158142,0.19200000166893,0.834999978542328,-0.0649999976158142,0.208000004291534,0.839999973773956,-0.0850000008940697,0.189999997615814,0.839999973773956,-0.0850000008940697,0.200000002980232,0.839999973773956,-0.0949999988079071,0.215000003576279,0.819999992847443,0.0,0.193000003695488,0.814999997615814,0.00499999988824129,0.197999998927116,0.800000011920929,0.0120000001043081,0.209999993443489,0.819999992847443,0.0299999993294477,0.189999997615814,0.819999992847443,0.0299999993294477,0.200000002980232,0.834999978542328,0.0390000008046627,0.211999997496605,0.800000011920929,0.0500000007450581,0.187999993562698,0.800000011920929,0.0500000007450581,0.200000002980232,0.806999981403351,0.0570000000298023,0.200000002980232,0.792999982833862,0.0350000001490116,0.200000002980232,0.773999989032745,0.0759999975562096,0.211999997496605,0.779999971389771,0.0700000002980232,0.187999993562698,0.779999971389771,0.0700000002980232,0.200000002980232,0.785000026226044,0.0750000029802322,0.200000002980232,0.769999980926514,0.061999998986721,0.215000003576279,0.792999982833862,-0.0149999996647239,0.187000006437302,0.792999982833862,-0.0149999996647239,0.200000002980232,0.792999982833862,-0.00499999988824129,0.215000003576279,0.787999987602234,-0.0399999991059303,0.187000006437302,0.787999987602234,-0.0399999991059303,0.215000003576279,0.792999982833862,-0.0649999976158142,0.187000006437302,0.792999982833862,-0.0649999976158142,0.209999993443489,0.790000021457672,-0.0850000008940697,0.189999997615814,0.790000021457672,-0.0850000008940697,0.200000002980232,0.790000021457672,-0.0949999988079071,0.189999997615814,0.769999980926514,-0.0274999998509884,0.189999997615814,0.769999980926514,-0.0524999983608723,0.189999997615814,0.779999971389771,-0.0775000005960464,0.211999997496605,0.745000004768372,-0.0149999996647239,0.187999993562698,0.745000004768372,-0.0199999995529652,0.200000002980232,0.745000004768372,-0.0254999995231628,0.200000002980232,0.745000004768372,-0.0044999998062849,0.210999995470047,0.720000028610229,-0.0149999996647239,0.188999995589256,0.720000028610229,-0.0149999996647239,0.200000002980232,0.720000028610229,-0.0252000000327826,0.200000002980232,0.720000028610229,-0.00480000022798777,0.209999993443489,0.694999992847443,-0.0149999996647239,0.189999997615814,0.694999992847443,-0.0149999996647239,0.200000002980232,0.694999992847443,-0.025000000372529,0.200000002980232,0.694999992847443,-0.00499999988824129,0.200000002980232,0.685000002384186,-0.0149999996647239,0.215000003576279,0.740000009536743,-0.0399999991059303,0.185000002384186,0.740000009536743,-0.0399999991059303,0.200000002980232,0.740000009536743,-0.0549999997019768,0.200000002980232,0.740000009536743,-0.025000000372529,0.209999993443489,0.714200019836426,-0.0399999991059303,0.189999997615814,0.714200019836426,-0.0399999991059303,0.200000002980232,0.714200019836426,-0.0529999993741512,0.200000002980232,0.714200019836426,-0.0270000007003546,0.209999993443489,0.680000007152557,-0.0399999991059303,0.189999997615814,0.680000007152557,-0.0399999991059303,0.200000002980232,0.680000007152557,-0.0500000007450581,0.200000002980232,0.680000007152557,-0.0299999993294477,0.200000002980232,0.670000016689301,-0.0399999991059303,0.211999997496605,0.740000009536743,-0.0649999976158142,0.187999993562698,0.740000009536743,-0.0649999976158142,0.200000002980232,0.740000009536743,-0.0755999982357025,0.200000002980232,0.740000009536743,-0.0542000010609627,0.209999993443489,0.717700004577637,-0.0649999976158142,0.189999997615814,0.717700004577637,-0.0649999976158142,0.200000002980232,0.717700004577637,-0.0750999972224236,0.200000002980232,0.717700004577637,-0.0549000017344952,0.209999993443489,0.694999992847443,-0.0649999976158142,0.189999997615814,0.694999992847443,-0.0649999976158142,0.200000002980232,0.694999992847443,-0.0750000029802322,0.200000002980232,0.694999992847443,-0.0549999997019768,0.200000002980232,0.685000002384186,-0.0649999976158142,0.210999995470047,0.754999995231628,-0.0850000008940697,0.188999995589256,0.754999995231628,-0.0850000008940697,0.200000002980232,0.754999995231628,-0.0952000021934509,0.200000002980232,0.754999995231628,-0.0747999995946884,0.209999993443489,0.735000014305115,-0.0850000008940697,0.189999997615814,0.735000014305115,-0.0850000008940697,0.200000002980232,0.735000014305115,-0.095100000500679,0.200000002980232,0.735000014305115,-0.0749000012874603,0.209999993443489,0.720000028610229,-0.0850000008940697,0.189999997615814,0.720000028610229,-0.0850000008940697,0.200000002980232,0.720000028610229,-0.0949999988079071,0.200000002980232,0.720000028610229,-0.0750000029802322,0.200000002980232,0.709999978542328,-0.0850000008940697,-0.230000004172325,1.23000001907349,-0.0399999991059303,-0.159999996423721,1.23000001907349,-0.0399999991059303,-0.200000002980232,1.23500001430511,-0.104999996721745,-0.200000002980232,1.25499999523163,0.0199999995529652,-0.244000002741814,1.13880002498627,-0.0399999991059303,-0.165000006556511,1.13880002498627,-0.0399999991059303,-0.200000002980232,1.13880002498627,-0.0799999982118607,-0.200000002980232,1.13880002498627,0.0130000002682209,-0.224999994039536,1.0,-0.00999999977648258,-0.224999994039536,1.0,-0.0700000002980232,-0.185000002384186,1.0,-0.00999999977648258,-0.185000002384186,1.0,-0.0700000002980232,-0.200000002980232,1.13880002498627,-0.0399999991059303,-0.224999994039536,0.920000016689301,-0.0399999991059303,-0.174999997019768,0.920000016689301,-0.0399999991059303,-0.200000002980232,0.920000016689301,-0.0649999976158142,-0.200000002980232,0.920000016689301,-0.0149999996647239,-0.224999994039536,0.889999985694885,-0.0399999991059303,-0.174999997019768,0.889999985694885,-0.0399999991059303,-0.200000002980232,0.889999985694885,-0.0649999976158142,-0.200000002980232,0.889999985694885,-0.0149999996647239,-0.217999994754791,0.860000014305115,-0.0399999991059303,-0.184000000357628,0.860000014305115,-0.0399999991059303,-0.200000002980232,0.870000004768372,-0.0700000002980232,-0.200000002980232,0.870000004768372,0.0,-0.209999993443489,0.850000023841858,0.0,-0.185399994254112,0.850000023841858,0.0,-0.211999997496605,0.839999973773956,-0.0149999996647239,-0.18299999833107,0.839999973773956,-0.0149999996647239,-0.212999999523163,0.834999978542328,-0.0399999991059303,-0.189999997615814,0.834999978542328,-0.0399999991059303,-0.210999995470047,0.834999978542328,-0.0649999976158142,-0.19200000166893,0.834999978542328,-0.0649999976158142,-0.208000004291534,0.839999973773956,-0.0850000008940697,-0.189999997615814,0.839999973773956,-0.0850000008940697,-0.200000002980232,0.839999973773956,-0.0949999988079071,-0.215000003576279,0.819999992847443,0.0,-0.193000003695488,0.814999997615814,0.00499999988824129,-0.197999998927116,0.800000011920929,0.0120000001043081,-0.209999993443489,0.819999992847443,0.0299999993294477,-0.189999997615814,0.819999992847443,0.0299999993294477,-0.200000002980232,0.834999978542328,0.0390000008046627,-0.211999997496605,0.800000011920929,0.0500000007450581,-0.187999993562698,0.800000011920929,0.0500000007450581,-0.200000002980232,0.806999981403351,0.0570000000298023,-0.200000002980232,0.792999982833862,0.0350000001490116,-0.200000002980232,0.773999989032745,0.0759999975562096,-0.211999997496605,0.779999971389771,0.0700000002980232,-0.187999993562698,0.779999971389771,0.0700000002980232,-0.200000002980232,0.785000026226044,0.0750000029802322,-0.200000002980232,0.769999980926514,0.061999998986721,-0.215000003576279,0.792999982833862,-0.0149999996647239,-0.187000006437302,0.792999982833862,-0.0149999996647239,-0.200000002980232,0.792999982833862,-0.00499999988824129,-0.215000003576279,0.787999987602234,-0.0399999991059303,-0.187000006437302,0.787999987602234,-0.0399999991059303,-0.215000003576279,0.792999982833862,-0.0649999976158142,-0.187000006437302,0.792999982833862,-0.0649999976158142,-0.209999993443489,0.790000021457672,-0.0850000008940697,-0.189999997615814,0.790000021457672,-0.0850000008940697,-0.200000002980232,0.790000021457672,-0.0949999988079071,-0.189999997615814,0.769999980926514,-0.0274999998509884,-0.189999997615814,0.769999980926514,-0.0524999983608723,-0.189999997615814,0.779999971389771,-0.0775000005960464,-0.211999997496605,0.745000004768372,-0.0149999996647239,-0.187999993562698,0.745000004768372,-0.0199999995529652,-0.200000002980232,0.745000004768372,-0.0254999995231628,-0.200000002980232,0.745000004768372,-0.0044999998062849,-0.210999995470047,0.720000028610229,-0.0149999996647239,-0.188999995589256,0.720000028610229,-0.0149999996647239,-0.200000002980232,0.720000028610229,-0.0252000000327826,-0.200000002980232,0.720000028610229,-0.00480000022798777,-0.209999993443489,0.694999992847443,-0.0149999996647239,-0.189999997615814,0.694999992847443,-0.0149999996647239,-0.200000002980232,0.694999992847443,-0.025000000372529,-0.200000002980232,0.694999992847443,-0.00499999988824129,-0.200000002980232,0.685000002384186,-0.0149999996647239,-0.215000003576279,0.740000009536743,-0.0399999991059303,-0.185000002384186,0.740000009536743,-0.0399999991059303,-0.200000002980232,0.740000009536743,-0.0549999997019768,-0.200000002980232,0.740000009536743,-0.025000000372529,-0.209999993443489,0.714200019836426,-0.0399999991059303,-0.189999997615814,0.714200019836426,-0.0399999991059303,-0.200000002980232,0.714200019836426,-0.0529999993741512,-0.200000002980232,0.714200019836426,-0.0270000007003546,-0.209999993443489,0.680000007152557,-0.0399999991059303,-0.189999997615814,0.680000007152557,-0.0399999991059303,-0.200000002980232,0.680000007152557,-0.0500000007450581,-0.200000002980232,0.680000007152557,-0.0299999993294477,-0.200000002980232,0.670000016689301,-0.0399999991059303,-0.211999997496605,0.740000009536743,-0.0649999976158142,-0.187999993562698,0.740000009536743,-0.0649999976158142,-0.200000002980232,0.740000009536743,-0.0755999982357025,-0.200000002980232,0.740000009536743,-0.0542000010609627,-0.209999993443489,0.717700004577637,-0.0649999976158142,-0.189999997615814,0.717700004577637,-0.0649999976158142,-0.200000002980232,0.717700004577637,-0.0750999972224236,-0.200000002980232,0.717700004577637,-0.0549000017344952,-0.209999993443489,0.694999992847443,-0.0649999976158142,-0.189999997615814,0.694999992847443,-0.0649999976158142,-0.200000002980232,0.694999992847443,-0.0750000029802322,-0.200000002980232,0.694999992847443,-0.0549999997019768,-0.200000002980232,0.685000002384186,-0.0649999976158142,-0.210999995470047,0.754999995231628,-0.0850000008940697,-0.188999995589256,0.754999995231628,-0.0850000008940697,-0.200000002980232,0.754999995231628,-0.0952000021934509,-0.200000002980232,0.754999995231628,-0.0747999995946884,-0.209999993443489,0.735000014305115,-0.0850000008940697,-0.189999997615814,0.735000014305115,-0.0850000008940697,-0.200000002980232,0.735000014305115,-0.095100000500679,-0.200000002980232,0.735000014305115,-0.0749000012874603,-0.209999993443489,0.720000028610229,-0.0850000008940697,-0.189999997615814,0.720000028610229,-0.0850000008940697,-0.200000002980232,0.720000028610229,-0.0949999988079071,-0.200000002980232,0.720000028610229,-0.0750000029802322,-0.200000002980232,0.709999978542328,-0.0850000008940697,0.115000002086163,0.465999990701675,0.0599999986588955,0.115000002086163,0.465999990701675,-0.0549999997019768,0.150000005960464,0.465999990701675,0.0,0.0500000007450581,0.465999990701675,0.0,0.170000001788139,0.300000011920929,0.0,0.0599999986588955,0.300000011920929,0.0,0.100000001490116,0.300000011920929,-0.0500000007450581,0.100000001490116,0.300000011920929,0.0500000007450581,0.150000005960464,0.0700000002980232,0.0,0.0850000008940697,0.0860000029206276,0.0125000001862645,0.115000002086163,0.0689999982714653,-0.0450000017881393,0.116999998688698,0.0974999964237213,0.0615000016987324,0.137500002980232,0.00600000005215406,-0.0299999993294477,0.0949999988079071,0.00600000005215406,-0.0299999993294477,0.115000002086163,0.0149999996647239,-0.0450000017881393,0.115000002086163,0.0599999986588955,0.100000001490116,0.115000002086163,0.0,0.0700000002980232,0.165000006556511,0.0,0.0700000002980232,0.0949999988079071,0.0,0.0700000002980232,0.115000002086163,0.0399999991059303,0.129999995231628,0.125,0.0,0.119999997317791,0.165000006556511,0.0,0.119999997317791,0.0869999974966049,0.0,0.122000001370907,0.0900000035762787,0.0120000001043081,0.187999993562698,0.109999999403954,0.0109999999403954,0.189999997615814,0.128000006079674,0.0109999999403954,0.185000002384186,0.142000004649162,0.0109999999403954,0.178000003099442,0.153999999165535,0.00999999977648258,0.167999997735024,-0.115000009536743,0.465999990701675,0.0600000023841858,-0.115000002086163,0.465999990701675,-0.0549999997019768,-0.170000001788139,0.465999990701675,0.0,-0.0500000007450581,0.465999990701675,0.0,-0.170000001788139,0.300000011920929,0.0,-0.0599999986588955,0.300000011920929,0.0,-0.100000001490116,0.300000011920929,-0.0500000007450581,-0.100000001490116,0.300000011920929,0.0500000007450581,-0.150000005960464,0.0700000002980232,0.0,-0.0850000008940697,0.0860000029206276,0.0125000001862645,-0.115000002086163,0.0689999982714653,-0.0450000017881393,-0.116999998688698,0.0974999964237213,0.0615000016987324,-0.137500002980232,0.00600000005215406,-0.0299999993294477,-0.0949999988079071,0.00600000005215406,-0.0299999993294477,-0.0949999988079071,0.00600000005215406,-0.0299999993294477,-0.115000002086163,0.0599999986588955,0.100000001490116,-0.115000002086163,0.0,0.0700000002980232,-0.165000006556511,0.0,0.0700000002980232,-0.0949999988079071,0.0,0.0700000002980232,-0.115000002086163,0.0399999991059303,0.129999995231628,-0.125,0.0,0.119999997317791,-0.165000006556511,0.0,0.119999997317791,-0.0869999974966049,0.0,0.122000001370907,-0.0900000035762787,0.0120000001043081,0.187999993562698,-0.109999999403954,0.0109999999403954,0.189999997615814,-0.128000006079674,0.0109999999403954,0.185000002384186,-0.142000004649162,0.0109999999403954,0.178000003099442,-0.153999999165535,0.00999999977648258,0.167999997735024}, 1170);
SoIndexedFaceSet211->setCoord(*SoCoordinate212);

SoShape210->setGeometry(*SoIndexedFaceSet211);

SoVRMLAppearance* SoVRMLAppearance213 = new SoVRMLAppearance();
SoImageTexture* SoImageTexture214 = new SoImageTexture();
SoImageTexture214->setUrl(new QString[]{QString("bodytexture28.png")}, 1);
SoVRMLAppearance213->addChild(*SoImageTexture214);

SoMaterial* SoMaterial215 = new SoMaterial();
SoMaterial215->setAmbientIntensity(0.699999988079071);
SoMaterial215->setShininess(0.600000023841858);
SoMaterial215->setDiffuseColor(new float[]{0.5,0.0,0.5});
SoMaterial215->setSpecularColor(new float[]{1.0,1.0,1.0});
SoMaterial215->setEmissiveColor(new float[]{0.129999995231628,0.349999994039536,0.129999995231628});
SoVRMLAppearance213->addChild(*SoMaterial215);

SoShape210->addChild(*SoVRMLAppearance213);

SoHAnimHumanoid27->setSkin(*SoShape210);

SoCoordinate* SoCoordinate216 = new SoCoordinate();
SoCoordinate216->setUSE(QString("JoeSkinCoord"));
SoHAnimHumanoid27->setSkinCoord(*SoCoordinate216);

SoGroup26->addChild(*SoHAnimHumanoid27);

SoNode5->addChild(*SoGroup26);

SoTransform* SoTransform217 = new SoTransform();
SoTransform217->setDEF(QString("SBall"));
SoTransform217->setTranslation(new float[]{-0.42091,0.2089,-0.42091});
SoTransform217->setRotation(new float[]{-0.70711,0.0,-0.70711,0.67654});
SoTransform217->setScale(new float[]{0.23,0.23,0.23});
SoShape* SoShape218 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance219 = new SoVRMLAppearance();
SoMaterial* SoMaterial220 = new SoMaterial();
SoMaterial220->setDiffuseColor(new float[]{0.0,0.8353,0.0});
SoMaterial220->setSpecularColor(new float[]{0.0,0.6849,0.0});
SoMaterial220->setEmissiveColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance219->addChild(*SoMaterial220);

SoImageTexture* SoImageTexture221 = new SoImageTexture();
SoImageTexture221->setUrl(new QString[]{QString("bodytexture28.png")}, 1);
SoVRMLAppearance219->addChild(*SoImageTexture221);

SoShape218->addChild(*SoVRMLAppearance219);

SoIndexedFaceSet* SoIndexedFaceSet222 = new SoIndexedFaceSet();
SoIndexedFaceSet222->setDEF(QString("ball"));
SoIndexedFaceSet222->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,1,-1,1,13,14,-1,1,14,2,-1,2,14,15,-1,2,15,3,-1,3,15,16,-1,3,16,4,-1,4,16,17,-1,4,17,5,-1,5,17,18,-1,5,18,6,-1,6,18,19,-1,6,19,7,-1,7,19,20,-1,7,20,8,-1,8,20,21,-1,8,21,9,-1,9,21,22,-1,9,22,10,-1,10,22,23,-1,10,23,11,-1,11,23,24,-1,11,24,12,-1,12,24,13,-1,12,13,1,-1,13,25,26,-1,13,26,14,-1,14,26,27,-1,14,27,15,-1,15,27,28,-1,15,28,16,-1,16,28,29,-1,16,29,17,-1,17,29,30,-1,17,30,18,-1,18,30,31,-1,18,31,19,-1,19,31,32,-1,19,32,20,-1,20,32,33,-1,20,33,21,-1,21,33,34,-1,21,34,22,-1,22,34,35,-1,22,35,23,-1,23,35,36,-1,23,36,24,-1,24,36,25,-1,24,25,13,-1,25,37,38,-1,25,38,26,-1,26,38,39,-1,26,39,27,-1,27,39,40,-1,27,40,28,-1,28,40,41,-1,28,41,29,-1,29,41,42,-1,29,42,30,-1,30,42,43,-1,30,43,31,-1,31,43,44,-1,31,44,32,-1,32,44,45,-1,32,45,33,-1,33,45,46,-1,33,46,34,-1,34,46,47,-1,34,47,35,-1,35,47,48,-1,35,48,36,-1,36,48,37,-1,36,37,25,-1,37,49,50,-1,37,50,38,-1,38,50,51,-1,38,51,39,-1,39,51,52,-1,39,52,40,-1,40,52,53,-1,40,53,41,-1,41,53,54,-1,41,54,42,-1,42,54,55,-1,42,55,43,-1,43,55,56,-1,43,56,44,-1,44,56,57,-1,44,57,45,-1,45,57,58,-1,45,58,46,-1,46,58,59,-1,46,59,47,-1,47,59,60,-1,47,60,48,-1,48,60,49,-1,48,49,37,-1,61,50,49,-1,61,51,50,-1,61,52,51,-1,61,53,52,-1,61,54,53,-1,61,55,54,-1,61,56,55,-1,61,57,56,-1,61,58,57,-1,61,59,58,-1,61,60,59,-1,61,49,60,-1}, 480);
SoCoordinate* SoCoordinate223 = new SoCoordinate();
SoCoordinate223->setPoint(new float[]{0.0,0.4675,0.0,0.0,0.4049,-0.2338,-0.1169,0.4049,-0.2024,-0.2024,0.4049,-0.1169,-0.2338,0.4049,0.0,-0.2024,0.4049,0.1169,-0.1169,0.4049,0.2024,0.0,0.4049,0.2338,0.1169,0.4049,0.2024,0.2024,0.4049,0.1169,0.2338,0.4049,0.0,0.2024,0.4049,-0.1169,0.1169,0.4049,-0.2024,0.0,0.2338,-0.4049,-0.2024,0.2338,-0.3506,-0.3506,0.2338,-0.2024,-0.4049,0.2338,0.0,-0.3506,0.2338,0.2024,-0.2024,0.2338,0.3506,0.0,0.2338,0.4049,0.2024,0.2338,0.3506,0.3506,0.2338,0.2024,0.4049,0.2338,0.0,0.3506,0.2338,-0.2024,0.2024,0.2338,-0.3506,0.0,0.0,-0.4675,-0.2338,0.0,-0.4049,-0.4049,0.0,-0.2338,-0.4675,0.0,0.0,-0.4049,0.0,0.2338,-0.2338,0.0,0.4049,0.0,0.0,0.4675,0.2338,0.0,0.4049,0.4049,0.0,0.2338,0.4675,0.0,0.0,0.4049,0.0,-0.2338,0.2338,0.0,-0.4049,0.0,-0.2338,-0.4049,-0.2024,-0.2338,-0.3506,-0.3506,-0.2338,-0.2024,-0.4049,-0.2338,0.0,-0.3506,-0.2338,0.2024,-0.2024,-0.2338,0.3506,0.0,-0.2338,0.4049,0.2024,-0.2338,0.3506,0.3506,-0.2338,0.2024,0.4049,-0.2338,0.0,0.3506,-0.2338,-0.2024,0.2024,-0.2338,-0.3506,0.0,-0.4049,-0.2338,-0.1169,-0.4049,-0.2024,-0.2024,-0.4049,-0.1169,-0.2338,-0.4049,0.0,-0.2024,-0.4049,0.1169,-0.1169,-0.4049,0.2024,0.0,-0.4049,0.2338,0.1169,-0.4049,0.2024,0.2024,-0.4049,0.1169,0.2338,-0.4049,0.0,0.2024,-0.4049,-0.1169,0.1169,-0.4049,-0.2024,0.0,-0.4675,0.0}, 186);
SoIndexedFaceSet222->setCoord(*SoCoordinate223);

SoShape218->setGeometry(*SoIndexedFaceSet222);

SoTransform217->addChild(*SoShape218);

SoViewpoint* SoViewpoint224 = new SoViewpoint();
SoViewpoint224->setDEF(QString("ballView"));
SoViewpoint224->setDescription(QString("ball View"));
SoTransform217->addChild(*SoViewpoint224);

SoNode5->addChild(*SoTransform217);

SoTransform* SoTransform225 = new SoTransform();
SoTransform225->setDEF(QString("scenecordsys"));
SoTransform225->setScale(new float[]{0.275,0.275,0.275});
SoInline* SoInline226 = new SoInline();
SoInline226->setGlobal(true);
SoInline226->setUrl(new QString[]{QString("JointCoordinateAxes.x3dv")}, 1);
SoTransform225->addChild(*SoInline226);

SoNode5->addChild(*SoTransform225);

SoTransform* SoTransform227 = new SoTransform();
SoTransform227->setDEF(QString("Circle0"));
SoTransform227->setScale(new float[]{1.175,1.0,1.175});
SoShape* SoShape228 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance229 = new SoVRMLAppearance();
SoMaterial* SoMaterial230 = new SoMaterial();
SoMaterial230->setDiffuseColor(new float[]{0.9,0.0,0.7});
SoMaterial230->setEmissiveColor(new float[]{0.42496,0.48398,1.0});
SoVRMLAppearance229->addChild(*SoMaterial230);

SoShape228->addChild(*SoVRMLAppearance229);

SoIndexedLineSet* SoIndexedLineSet231 = new SoIndexedLineSet();
SoIndexedLineSet231->setDEF(QString("Orbit1"));
SoIndexedLineSet231->setCoordIndex(new int32_t[]{0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,-1}, 62);
SoCoordinate* SoCoordinate232 = new SoCoordinate();
SoCoordinate232->setPoint(new float[]{1.0,0.0,0.0,0.995,0.0,-0.105,0.979,0.0,-0.208,0.951,0.0,-0.309,0.914,0.0,-0.407,0.866,0.0,-0.5,0.809,0.0,-0.588,0.743,0.0,-0.669,0.669,0.0,-0.743,0.588,0.0,-0.809,0.5,0.0,-0.866,0.407,0.0,-0.914,0.309,0.0,-0.951,0.208,0.0,-0.978,0.105,0.0,-0.995,0.0,0.0,-1.0,-0.105,0.0,-0.99452,-0.208,0.0,-0.978,-0.309,0.0,-0.951,-0.407,0.0,-0.914,-0.5,0.0,-0.866,-0.588,0.0,-0.809,-0.669,0.0,-0.743,-0.743,0.0,-0.669,-0.809,0.0,-0.588,-0.866,0.0,-0.5,-0.914,0.0,-0.407,-0.951,0.0,-0.309,-0.978,0.0,-0.208,-0.995,0.0,-0.105,-1.0,0.0,0.0,-0.995,0.0,0.105,-0.978,0.0,0.208,-0.951,0.0,0.309,-0.914,0.0,0.407,-0.866,0.0,0.5,-0.809,0.0,0.588,-0.743,0.0,0.669,-0.669,0.0,0.743,-0.588,0.0,0.809,-0.5,0.0,0.866,-0.407,0.0,0.914,-0.309,0.0,0.951,-0.208,0.0,0.978,-0.105,0.0,0.995,0.0,0.0,1.0,0.105,0.0,0.995,0.208,0.0,0.978,0.309,0.0,0.951,0.407,0.0,0.914,0.5,0.0,0.866,0.588,0.0,0.809,0.669,0.0,0.743,0.743,0.0,0.669,0.809,0.0,0.588,0.866,0.0,0.5,0.914,0.0,0.407,0.951,0.0,0.309,0.978,0.0,0.208,0.995,0.0,0.104,1.0,0.0,0.0}, 183);
SoIndexedLineSet231->setCoord(*SoCoordinate232);

SoShape228->setGeometry(*SoIndexedLineSet231);

SoTransform227->addChild(*SoShape228);

SoNode5->addChild(*SoTransform227);

SoTransform* SoTransform233 = new SoTransform();
SoTransform233->setDEF(QString("Circle1"));
SoTransform233->setScale(new float[]{0.5,1.0,0.5});
SoShape* SoShape234 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance235 = new SoVRMLAppearance();
SoMaterial* SoMaterial236 = new SoMaterial();
SoMaterial236->setDiffuseColor(new float[]{0.9,0.0,0.7});
SoMaterial236->setEmissiveColor(new float[]{0.42496,0.48398,1.0});
SoVRMLAppearance235->addChild(*SoMaterial236);

SoShape234->addChild(*SoVRMLAppearance235);

SoIndexedLineSet* SoIndexedLineSet237 = new SoIndexedLineSet();
SoIndexedLineSet237->setUSE(QString("Orbit1"));
SoShape234->setGeometry(*SoIndexedLineSet237);

SoTransform233->addChild(*SoShape234);

SoNode5->addChild(*SoTransform233);

SoTransform* SoTransform238 = new SoTransform();
SoTransform238->setDEF(QString("Circle2"));
SoTransform238->setScale(new float[]{0.25,1.0,0.25});
SoShape* SoShape239 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance240 = new SoVRMLAppearance();
SoMaterial* SoMaterial241 = new SoMaterial();
SoMaterial241->setDiffuseColor(new float[]{0.9,0.0,0.7});
SoMaterial241->setEmissiveColor(new float[]{0.42496,0.48398,1.0});
SoVRMLAppearance240->addChild(*SoMaterial241);

SoShape239->addChild(*SoVRMLAppearance240);

SoIndexedLineSet* SoIndexedLineSet242 = new SoIndexedLineSet();
SoIndexedLineSet242->setUSE(QString("Orbit1"));
SoShape239->setGeometry(*SoIndexedLineSet242);

SoTransform238->addChild(*SoShape239);

SoNode5->addChild(*SoTransform238);

SoSceneManager0->setSceneGraph(*SoNode5);

return 0;
}
