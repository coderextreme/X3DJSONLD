
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
Someta3->setContent(QString("BoxMan4AnimationPanel.x3d"));
Sohead1->addMeta(*Someta3);

Someta* Someta4 = new Someta();
Someta4->setName(QString("description"));
Someta4->setContent(QString("A Seamless VRML Human, demonstrating the HAnim 2001 Specification, animation panel shows multiple behaviors."));
Sohead1->addMeta(*Someta4);

Someta* Someta5 = new Someta();
Someta5->setName(QString("creator"));
Someta5->setContent(QString("Joe Williams and James Smith - james@vapourtech.com"));
Sohead1->addMeta(*Someta5);

Someta* Someta6 = new Someta();
Someta6->setName(QString("translator"));
Someta6->setContent(QString("Joe Williams and Don Brutzman"));
Sohead1->addMeta(*Someta6);

Someta* Someta7 = new Someta();
Someta7->setName(QString("generator"));
Someta7->setContent(QString(".x3d to .x3d translation used BS Contact Geo 8.203"));
Sohead1->addMeta(*Someta7);

Someta* Someta8 = new Someta();
Someta8->setName(QString("generator"));
Someta8->setContent(QString("X3D-Edit 3.3, https://www.web3d.org/x3d/tools/X3D-Edit"));
Sohead1->addMeta(*Someta8);

Someta* Someta9 = new Someta();
Someta9->setName(QString("generator"));
Someta9->setContent(QString("x3d-tidy V2.2.1, https://www.npmjs.com/package/x3d-tidy"));
Sohead1->addMeta(*Someta9);

Someta* Someta10 = new Someta();
Someta10->setName(QString("created"));
Someta10->setContent(QString("1 March 2001"));
Sohead1->addMeta(*Someta10);

Someta* Someta11 = new Someta();
Someta11->setName(QString("revision"));
Someta11->setContent(QString("12 January 2017"));
Sohead1->addMeta(*Someta11);

Someta* Someta12 = new Someta();
Someta12->setName(QString("translated"));
Someta12->setContent(QString("14 January 2017"));
Sohead1->addMeta(*Someta12);

Someta* Someta13 = new Someta();
Someta13->setName(QString("modified"));
Someta13->setContent(QString("Tue, 09 Sep 2025 19:37:51 GMT"));
Sohead1->addMeta(*Someta13);

Someta* Someta14 = new Someta();
Someta14->setName(QString("Image"));
Someta14->setContent(QString("BoxManAnimationPanelInclined.png"));
Sohead1->addMeta(*Someta14);

Someta* Someta15 = new Someta();
Someta15->setName(QString("MovingImage"));
Someta15->setContent(QString("BoxManAnimationPanel.mp4"));
Sohead1->addMeta(*Someta15);

Someta* Someta16 = new Someta();
Someta16->setName(QString("MovingImage"));
Someta16->setContent(QString("https://www.youtube.com/watch?v=8tI83Rtg_DU"));
Sohead1->addMeta(*Someta16);

Someta* Someta17 = new Someta();
Someta17->setName(QString("reference"));
Someta17->setContent(QString("https://twitter.com/Web3DConsortium/status/820638047523913728"));
Sohead1->addMeta(*Someta17);

Someta* Someta18 = new Someta();
Someta18->setName(QString("reference"));
Someta18->setContent(QString("https://twitter.com/Web3DConsortium/status/820642726009978881"));
Sohead1->addMeta(*Someta18);

Someta* Someta19 = new Someta();
Someta19->setName(QString("reference"));
Someta19->setContent(QString("http://HAnim.org"));
Sohead1->addMeta(*Someta19);

Someta* Someta20 = new Someta();
Someta20->setName(QString("reference"));
Someta20->setContent(QString("../Legacy/originals/boxman.wrl"));
Sohead1->addMeta(*Someta20);

Someta* Someta21 = new Someta();
Someta21->setName(QString("reference"));
Someta21->setContent(QString("BoxMan4.x3d"));
Sohead1->addMeta(*Someta21);

Someta* Someta22 = new Someta();
Someta22->setName(QString("reference"));
Someta22->setContent(QString("http://HAnim.org/Models/HAnim2001/boxman"));
Sohead1->addMeta(*Someta22);

Someta* Someta23 = new Someta();
Someta23->setName(QString("reference"));
Someta23->setContent(QString("http://HAnim.org/Models/HAnim2001/boxman/boxman.wrl"));
Sohead1->addMeta(*Someta23);

Someta* Someta24 = new Someta();
Someta24->setName(QString("reference"));
Someta24->setContent(QString("http://www.vapourtech.com/team/james/boxman.wrl"));
Sohead1->addMeta(*Someta24);

Someta* Someta25 = new Someta();
Someta25->setName(QString("reference"));
Someta25->setContent(QString("http://HAnim.org/Specifications/HAnim2001"));
Sohead1->addMeta(*Someta25);

Someta* Someta26 = new Someta();
Someta26->setName(QString("reference"));
Someta26->setContent(QString("http://HAnim.org/Models"));
Sohead1->addMeta(*Someta26);

Someta* Someta27 = new Someta();
Someta27->setName(QString("reference"));
Someta27->setContent(QString("http://HAnim.org/Nodes"));
Sohead1->addMeta(*Someta27);

Someta* Someta28 = new Someta();
Someta28->setName(QString("reference"));
Someta28->setContent(QString("https://www.web3d.org/x3d/content/X3dToVrml97.xslt"));
Sohead1->addMeta(*Someta28);

Someta* Someta29 = new Someta();
Someta29->setName(QString("reference"));
Someta29->setContent(QString("http://www.vapourtech.com"));
Sohead1->addMeta(*Someta29);

Someta* Someta30 = new Someta();
Someta30->setName(QString("TODO"));
Someta30->setContent(QString("InstantReality Forum Issue: InstantReality is ignoring the Viewpoint nodes in the topmost HAnimSite. http://forum.instantreality.org"));
Sohead1->addMeta(*Someta30);

Someta* Someta31 = new Someta();
Someta31->setName(QString("rights"));
Someta31->setContent(QString("(C) 2000 James Smith - james@vapourtech.com"));
Sohead1->addMeta(*Someta31);

SoSceneManager0->setHead(*Sohead1);

SoNode* SoNode32 = new SoNode();
SoWorldInfo* SoWorldInfo33 = new SoWorldInfo();
SoWorldInfo33->setTitle(QString("BoxMan - A Seamless VRML Human"));
SoWorldInfo33->setInfo(new QString[]{QString("(C) 2000 James Smith - james@vapourtech.com"), QString("http://www.vapourtech.com/team/james/boxman.wrl"), QString("Blaxxun compatibility by Tu Lam - TuL@seamless-solutions.com")}, 3);
SoNode32->addChild(*SoWorldInfo33);

SoBackground* SoBackground34 = new SoBackground();
SoBackground34->setSkyColor(new float[]{0.75,0.75,0.75}, 3);
SoBackground34->setGroundColor(new float[]{0.6,0.6,0.6}, 3);
SoNode32->addChild(*SoBackground34);

SoHAnimHumanoid* SoHAnimHumanoid35 = new SoHAnimHumanoid();
SoHAnimHumanoid35->setDEF(QString("boxman_Humanoid"));
SoHAnimHumanoid35->X3DNode::setName(QString("Humanoid"));
SoHAnimHumanoid35->setInfo(new QString[]{QString("authorName=James Smith"), QString("authorEmail=james@vapourtech.com"), QString("copyright=(C) 2000 James Smith - james@vapourtech.com"), QString("humanoidVersion=1.0")}, 4);
SoHAnimHumanoid35->setVersion(QString("1.0"));
SoHAnimJoint* SoHAnimJoint36 = new SoHAnimJoint();
SoHAnimJoint36->setDEF(QString("boxman_humanoid_root"));
SoHAnimJoint36->X3DNode::setName(QString("humanoid_root"));
SoHAnimJoint36->setCenter(new float[]{0.0,0.9723,-0.0728});
SoHAnimJoint36->setSkinCoordIndex(new int32_t[]{0,1,2,3,4,5,6,7,8,9,10,11}, 12);
SoHAnimJoint36->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 12);
SoHAnimSegment* SoHAnimSegment37 = new SoHAnimSegment();
SoHAnimSegment37->setDEF(QString("boxman_sacrum"));
SoHAnimSegment37->X3DNode::setName(QString("sacrum"));
SoTransform* SoTransform38 = new SoTransform();
SoTransform38->setTranslation(new float[]{0.0,0.9723,-0.0728});
SoShape* SoShape39 = new SoShape();
SoShape39->setDEF(QString("SphereYellow"));
SoVRMLAppearance* SoVRMLAppearance40 = new SoVRMLAppearance();
SoMaterial* SoMaterial41 = new SoMaterial();
SoMaterial41->setDiffuseColor(new float[]{1.0,1.0,0.0});
SoVRMLAppearance40->addChild(*SoMaterial41);

SoShape39->addChild(*SoVRMLAppearance40);

SoSphere* SoSphere42 = new SoSphere();
SoSphere42->setRadius(0.02);
SoShape39->setGeometry(*SoSphere42);

SoTransform38->addChild(*SoShape39);

SoHAnimSegment37->addChild(*SoTransform38);

SoHAnimJoint36->addChildren(*SoHAnimSegment37);

SoHAnimJoint* SoHAnimJoint43 = new SoHAnimJoint();
SoHAnimJoint43->setDEF(QString("boxman_l_hip"));
SoHAnimJoint43->X3DNode::setName(QString("l_hip"));
SoHAnimJoint43->setCenter(new float[]{0.0956,0.9364,0.0});
SoHAnimJoint43->setSkinCoordIndex(new int32_t[]{12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43}, 32);
SoHAnimJoint43->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5}, 32);
SoHAnimSegment* SoHAnimSegment44 = new SoHAnimSegment();
SoHAnimSegment44->setDEF(QString("boxman_l_thigh"));
SoHAnimSegment44->X3DNode::setName(QString("l_thigh"));
SoTransform* SoTransform45 = new SoTransform();
SoTransform45->setTranslation(new float[]{0.0956,0.9364,0.0});
SoShape* SoShape46 = new SoShape();
SoShape46->setUSE(QString("SphereYellow"));
SoTransform45->addChild(*SoShape46);

SoHAnimSegment44->addChild(*SoTransform45);

SoHAnimJoint43->addChildren(*SoHAnimSegment44);

SoHAnimJoint* SoHAnimJoint47 = new SoHAnimJoint();
SoHAnimJoint47->setDEF(QString("boxman_l_knee"));
SoHAnimJoint47->X3DNode::setName(QString("l_knee"));
SoHAnimJoint47->setCenter(new float[]{0.0956,0.5095,-0.0036});
SoHAnimJoint47->setSkinCoordIndex(new int32_t[]{36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63}, 28);
SoHAnimJoint47->setSkinCoordWeight(new float[]{0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 28);
SoHAnimSegment* SoHAnimSegment48 = new SoHAnimSegment();
SoHAnimSegment48->setDEF(QString("boxman_l_calf"));
SoHAnimSegment48->X3DNode::setName(QString("l_calf"));
SoTransform* SoTransform49 = new SoTransform();
SoTransform49->setTranslation(new float[]{0.0956,0.5095,-0.0036});
SoShape* SoShape50 = new SoShape();
SoShape50->setUSE(QString("SphereYellow"));
SoTransform49->addChild(*SoShape50);

SoHAnimSegment48->addChild(*SoTransform49);

SoHAnimJoint47->addChildren(*SoHAnimSegment48);

SoHAnimJoint* SoHAnimJoint51 = new SoHAnimJoint();
SoHAnimJoint51->setDEF(QString("boxman_l_ankle"));
SoHAnimJoint51->X3DNode::setName(QString("l_ankle"));
SoHAnimJoint51->setRotation(new float[]{-1.0,0.0,0.0,0.888471427100471});
SoHAnimJoint51->setCenter(new float[]{0.0946,0.0762,-0.0261});
SoHAnimJoint51->setSkinCoordIndex(new int32_t[]{64,65,66,67,68,69,70,71}, 8);
SoHAnimJoint51->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 8);
SoHAnimSegment* SoHAnimSegment52 = new SoHAnimSegment();
SoHAnimSegment52->setDEF(QString("boxman_l_hindfoot"));
SoHAnimSegment52->X3DNode::setName(QString("l_hindfoot"));
SoTransform* SoTransform53 = new SoTransform();
SoTransform53->setTranslation(new float[]{0.0946,0.0762,-0.0261});
SoShape* SoShape54 = new SoShape();
SoShape54->setUSE(QString("SphereYellow"));
SoTransform53->addChild(*SoShape54);

SoHAnimSegment52->addChild(*SoTransform53);

SoHAnimJoint51->addChildren(*SoHAnimSegment52);

SoHAnimJoint* SoHAnimJoint55 = new SoHAnimJoint();
SoHAnimJoint55->setDEF(QString("boxman_l_midtarsal"));
SoHAnimJoint55->X3DNode::setName(QString("l_midtarsal"));
SoHAnimJoint55->setCenter(new float[]{0.1079,0.0317,0.067});
SoHAnimJoint55->setSkinCoordIndex(new int32_t[]{72,73,74,75,76,77,78,79}, 8);
SoHAnimJoint55->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 8);
SoHAnimSegment* SoHAnimSegment56 = new SoHAnimSegment();
SoHAnimSegment56->setDEF(QString("boxman_l_middistal"));
SoHAnimSegment56->X3DNode::setName(QString("l_middistal"));
SoTransform* SoTransform57 = new SoTransform();
SoTransform57->setTranslation(new float[]{0.1079,0.0317,0.067});
SoShape* SoShape58 = new SoShape();
SoShape58->setUSE(QString("SphereYellow"));
SoTransform57->addChild(*SoShape58);

SoHAnimSegment56->addChild(*SoTransform57);

SoHAnimSite* SoHAnimSite59 = new SoHAnimSite();
SoHAnimSite59->setDEF(QString("boxman_l_middistal_tip"));
SoHAnimSite59->X3DNode::setName(QString("l_middistal_tip"));
SoHAnimSite59->setTranslation(new float[]{0.095,0.0005,0.1924});
SoShape* SoShape60 = new SoShape();
SoShape60->setDEF(QString("SphereRed"));
SoVRMLAppearance* SoVRMLAppearance61 = new SoVRMLAppearance();
SoMaterial* SoMaterial62 = new SoMaterial();
SoMaterial62->setDiffuseColor(new float[]{1.0,0.0,0.0});
SoVRMLAppearance61->addChild(*SoMaterial62);

SoShape60->addChild(*SoVRMLAppearance61);

SoSphere* SoSphere63 = new SoSphere();
SoSphere63->setRadius(0.02);
SoShape60->setGeometry(*SoSphere63);

SoHAnimSite59->addChild(*SoShape60);

SoHAnimSegment56->addChild(*SoHAnimSite59);

SoHAnimJoint55->addChildren(*SoHAnimSegment56);

SoHAnimJoint51->addChildren(*SoHAnimJoint55);

SoHAnimJoint47->addChildren(*SoHAnimJoint51);

SoHAnimJoint43->addChildren(*SoHAnimJoint47);

SoHAnimJoint36->addChildren(*SoHAnimJoint43);

SoHAnimJoint* SoHAnimJoint64 = new SoHAnimJoint();
SoHAnimJoint64->setDEF(QString("boxman_r_hip"));
SoHAnimJoint64->X3DNode::setName(QString("r_hip"));
SoHAnimJoint64->setRotation(new float[]{-1.0,0.0,0.0,2.01809664178471});
SoHAnimJoint64->setCenter(new float[]{-0.0956,0.9364,0.0});
SoHAnimJoint64->setSkinCoordIndex(new int32_t[]{80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111}, 32);
SoHAnimJoint64->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5}, 32);
SoHAnimSegment* SoHAnimSegment65 = new SoHAnimSegment();
SoHAnimSegment65->setDEF(QString("boxman_r_thigh"));
SoHAnimSegment65->X3DNode::setName(QString("r_thigh"));
SoTransform* SoTransform66 = new SoTransform();
SoTransform66->setTranslation(new float[]{-0.0956,0.9364,0.0});
SoShape* SoShape67 = new SoShape();
SoShape67->setUSE(QString("SphereYellow"));
SoTransform66->addChild(*SoShape67);

SoHAnimSegment65->addChild(*SoTransform66);

SoHAnimJoint64->addChildren(*SoHAnimSegment65);

SoHAnimJoint* SoHAnimJoint68 = new SoHAnimJoint();
SoHAnimJoint68->setDEF(QString("boxman_r_knee"));
SoHAnimJoint68->X3DNode::setName(QString("r_knee"));
SoHAnimJoint68->setRotation(new float[]{1.0,0.0,0.0,1.67652764530233});
SoHAnimJoint68->setCenter(new float[]{-0.0956,0.5095,-0.0036});
SoHAnimJoint68->setSkinCoordIndex(new int32_t[]{104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,128,129,130,131}, 28);
SoHAnimJoint68->setSkinCoordWeight(new float[]{0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 28);
SoHAnimSegment* SoHAnimSegment69 = new SoHAnimSegment();
SoHAnimSegment69->setDEF(QString("boxman_r_calf"));
SoHAnimSegment69->X3DNode::setName(QString("r_calf"));
SoTransform* SoTransform70 = new SoTransform();
SoTransform70->setTranslation(new float[]{-0.0956,0.5095,-0.0036});
SoShape* SoShape71 = new SoShape();
SoShape71->setUSE(QString("SphereYellow"));
SoTransform70->addChild(*SoShape71);

SoHAnimSegment69->addChild(*SoTransform70);

SoHAnimJoint68->addChildren(*SoHAnimSegment69);

SoHAnimJoint* SoHAnimJoint72 = new SoHAnimJoint();
SoHAnimJoint72->setDEF(QString("boxman_r_ankle"));
SoHAnimJoint72->X3DNode::setName(QString("r_ankle"));
SoHAnimJoint72->setRotation(new float[]{-1.0,0.0,0.0,0.888471427100471});
SoHAnimJoint72->setCenter(new float[]{-0.0946,0.0762,-0.0261});
SoHAnimJoint72->setSkinCoordIndex(new int32_t[]{132,133,134,135,136,137,138,139}, 8);
SoHAnimJoint72->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 8);
SoHAnimSegment* SoHAnimSegment73 = new SoHAnimSegment();
SoHAnimSegment73->setDEF(QString("boxman_r_hindfoot"));
SoHAnimSegment73->X3DNode::setName(QString("r_hindfoot"));
SoTransform* SoTransform74 = new SoTransform();
SoTransform74->setTranslation(new float[]{-0.0946,0.0762,-0.0261});
SoShape* SoShape75 = new SoShape();
SoShape75->setUSE(QString("SphereYellow"));
SoTransform74->addChild(*SoShape75);

SoHAnimSegment73->addChild(*SoTransform74);

SoHAnimJoint72->addChildren(*SoHAnimSegment73);

SoHAnimJoint* SoHAnimJoint76 = new SoHAnimJoint();
SoHAnimJoint76->setDEF(QString("boxman_r_midtarsal"));
SoHAnimJoint76->X3DNode::setName(QString("r_midtarsal"));
SoHAnimJoint76->setCenter(new float[]{-0.1079,0.0317,0.067});
SoHAnimJoint76->setSkinCoordIndex(new int32_t[]{140,141,142,143,144,145,146,147}, 8);
SoHAnimJoint76->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 8);
SoHAnimSegment* SoHAnimSegment77 = new SoHAnimSegment();
SoHAnimSegment77->setDEF(QString("boxman_r_middistal"));
SoHAnimSegment77->X3DNode::setName(QString("r_middistal"));
SoTransform* SoTransform78 = new SoTransform();
SoTransform78->setTranslation(new float[]{-0.1079,0.0317,0.067});
SoShape* SoShape79 = new SoShape();
SoShape79->setUSE(QString("SphereYellow"));
SoTransform78->addChild(*SoShape79);

SoHAnimSegment77->addChild(*SoTransform78);

SoHAnimSite* SoHAnimSite80 = new SoHAnimSite();
SoHAnimSite80->setDEF(QString("boxman_r_middistal_tip"));
SoHAnimSite80->X3DNode::setName(QString("r_middistal_tip"));
SoHAnimSite80->setTranslation(new float[]{-0.095,0.0005,0.1924});
SoShape* SoShape81 = new SoShape();
SoShape81->setUSE(QString("SphereRed"));
SoHAnimSite80->addChild(*SoShape81);

SoHAnimSegment77->addChild(*SoHAnimSite80);

SoHAnimJoint76->addChildren(*SoHAnimSegment77);

SoHAnimJoint72->addChildren(*SoHAnimJoint76);

SoHAnimJoint68->addChildren(*SoHAnimJoint72);

SoHAnimJoint64->addChildren(*SoHAnimJoint68);

SoHAnimJoint36->addChildren(*SoHAnimJoint64);

SoHAnimJoint* SoHAnimJoint82 = new SoHAnimJoint();
SoHAnimJoint82->setDEF(QString("boxman_vl5"));
SoHAnimJoint82->X3DNode::setName(QString("vl5"));
SoHAnimJoint82->setCenter(new float[]{0.0,1.0817,-0.0728});
SoHAnimJoint82->setSkinCoordIndex(new int32_t[]{148,149,150,151,152,153,154,155,156,157,158,159,160,161,162,163,164,165,166,167}, 20);
SoHAnimJoint82->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 20);
SoHAnimSegment* SoHAnimSegment83 = new SoHAnimSegment();
SoHAnimSegment83->setDEF(QString("boxman_l5"));
SoHAnimSegment83->X3DNode::setName(QString("l5"));
SoTransform* SoTransform84 = new SoTransform();
SoTransform84->setTranslation(new float[]{0.0,1.0817,-0.0728});
SoShape* SoShape85 = new SoShape();
SoShape85->setUSE(QString("SphereYellow"));
SoTransform84->addChild(*SoShape85);

SoHAnimSegment83->addChild(*SoTransform84);

SoHAnimJoint82->addChildren(*SoHAnimSegment83);

SoHAnimJoint* SoHAnimJoint86 = new SoHAnimJoint();
SoHAnimJoint86->setDEF(QString("boxman_skullbase"));
SoHAnimJoint86->X3DNode::setName(QString("skullbase"));
SoHAnimJoint86->setRotation(new float[]{-0.999999999999998,0.0,0.0,0.447704477724534});
SoHAnimJoint86->setCenter(new float[]{0.0,1.644,0.036});
SoHAnimJoint86->setSkinCoordIndex(new int32_t[]{168,169,170,171,172,173,174,175}, 8);
SoHAnimJoint86->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 8);
SoHAnimSegment* SoHAnimSegment87 = new SoHAnimSegment();
SoHAnimSegment87->setDEF(QString("boxman_skull"));
SoHAnimSegment87->X3DNode::setName(QString("skull"));
SoTransform* SoTransform88 = new SoTransform();
SoTransform88->setTranslation(new float[]{0.0,1.644,0.036});
SoShape* SoShape89 = new SoShape();
SoShape89->setUSE(QString("SphereYellow"));
SoTransform88->addChild(*SoShape89);

SoHAnimSegment87->addChild(*SoTransform88);

SoHAnimSite* SoHAnimSite90 = new SoHAnimSite();
SoHAnimSite90->setDEF(QString("boxman_skull_tip"));
SoHAnimSite90->X3DNode::setName(QString("skull_tip"));
SoHAnimSite90->setTranslation(new float[]{-0.0029,1.7771,0.0274});
SoShape* SoShape91 = new SoShape();
SoShape91->setUSE(QString("SphereYellow"));
SoHAnimSite90->addChild(*SoShape91);

SoHAnimSegment87->addChild(*SoHAnimSite90);

SoHAnimJoint86->addChildren(*SoHAnimSegment87);

SoHAnimJoint82->addChildren(*SoHAnimJoint86);

SoHAnimJoint* SoHAnimJoint92 = new SoHAnimJoint();
SoHAnimJoint92->setDEF(QString("boxman_l_shoulder"));
SoHAnimJoint92->X3DNode::setName(QString("l_shoulder"));
SoHAnimJoint92->setRotation(new float[]{-0.235886128343184,0.0,0.971780702862154,1.74087617232715});
SoHAnimJoint92->setCenter(new float[]{0.1968,1.4642,-0.0265});
SoHAnimJoint92->setSkinCoordIndex(new int32_t[]{176,177,178,179,180,181,182,183}, 8);
SoHAnimJoint92->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 8);
SoHAnimSegment* SoHAnimSegment93 = new SoHAnimSegment();
SoHAnimSegment93->setDEF(QString("boxman_l_upperarm"));
SoHAnimSegment93->X3DNode::setName(QString("l_upperarm"));
SoTransform* SoTransform94 = new SoTransform();
SoTransform94->setTranslation(new float[]{0.1968,1.4642,-0.0265});
SoShape* SoShape95 = new SoShape();
SoShape95->setUSE(QString("SphereYellow"));
SoTransform94->addChild(*SoShape95);

SoHAnimSegment93->addChild(*SoTransform94);

SoHAnimJoint92->addChildren(*SoHAnimSegment93);

SoHAnimJoint* SoHAnimJoint96 = new SoHAnimJoint();
SoHAnimJoint96->setDEF(QString("boxman_l_elbow"));
SoHAnimJoint96->X3DNode::setName(QString("l_elbow"));
SoHAnimJoint96->setRotation(new float[]{-0.970142500145332,0.242535625036333,0.0,2.45770714065071});
SoHAnimJoint96->setCenter(new float[]{0.1982,1.1622,-0.0557});
SoHAnimJoint96->setSkinCoordIndex(new int32_t[]{184,185,186,187,188,189,190,191}, 8);
SoHAnimJoint96->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 8);
SoHAnimSegment* SoHAnimSegment97 = new SoHAnimSegment();
SoHAnimSegment97->setDEF(QString("boxman_l_forearm"));
SoHAnimSegment97->X3DNode::setName(QString("l_forearm"));
SoTransform* SoTransform98 = new SoTransform();
SoTransform98->setTranslation(new float[]{0.1982,1.1622,-0.0557});
SoShape* SoShape99 = new SoShape();
SoShape99->setUSE(QString("SphereYellow"));
SoTransform98->addChild(*SoShape99);

SoHAnimSegment97->addChild(*SoTransform98);

SoHAnimJoint96->addChildren(*SoHAnimSegment97);

SoHAnimJoint* SoHAnimJoint100 = new SoHAnimJoint();
SoHAnimJoint100->setDEF(QString("boxman_l_wrist"));
SoHAnimJoint100->X3DNode::setName(QString("l_wrist"));
SoHAnimJoint100->setRotation(new float[]{0.0,1.0,0.0,0.530093697003094});
SoHAnimJoint100->setCenter(new float[]{0.1972,0.8929,-0.069});
SoHAnimJoint100->setSkinCoordIndex(new int32_t[]{192,193,194,195,196,197,198,199}, 8);
SoHAnimJoint100->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 8);
SoHAnimSegment* SoHAnimSegment101 = new SoHAnimSegment();
SoHAnimSegment101->setDEF(QString("boxman_l_hand"));
SoHAnimSegment101->X3DNode::setName(QString("l_hand"));
SoTransform* SoTransform102 = new SoTransform();
SoTransform102->setTranslation(new float[]{0.1972,0.8929,-0.069});
SoShape* SoShape103 = new SoShape();
SoShape103->setUSE(QString("SphereYellow"));
SoTransform102->addChild(*SoShape103);

SoHAnimSegment101->addChild(*SoTransform102);

SoHAnimSite* SoHAnimSite104 = new SoHAnimSite();
SoHAnimSite104->setDEF(QString("boxman_l_hand_tip"));
SoHAnimSite104->X3DNode::setName(QString("l_hand_tip"));
SoHAnimSite104->setTranslation(new float[]{0.1912,0.6976,-0.071});
SoShape* SoShape105 = new SoShape();
SoShape105->setUSE(QString("SphereRed"));
SoHAnimSite104->addChild(*SoShape105);

SoHAnimSegment101->addChild(*SoHAnimSite104);

SoHAnimJoint100->addChildren(*SoHAnimSegment101);

SoHAnimJoint96->addChildren(*SoHAnimJoint100);

SoHAnimJoint92->addChildren(*SoHAnimJoint96);

SoHAnimJoint82->addChildren(*SoHAnimJoint92);

SoHAnimJoint* SoHAnimJoint106 = new SoHAnimJoint();
SoHAnimJoint106->setDEF(QString("boxman_r_shoulder"));
SoHAnimJoint106->X3DNode::setName(QString("r_shoulder"));
SoHAnimJoint106->setRotation(new float[]{0.235886128343184,0.0,0.971780702862155,4.54230913485243});
SoHAnimJoint106->setCenter(new float[]{-0.1968,1.4642,-0.0265});
SoHAnimJoint106->setSkinCoordIndex(new int32_t[]{200,201,202,203,204,205,206,207}, 8);
SoHAnimJoint106->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 8);
SoHAnimSegment* SoHAnimSegment107 = new SoHAnimSegment();
SoHAnimSegment107->setDEF(QString("boxman_r_upperarm"));
SoHAnimSegment107->X3DNode::setName(QString("r_upperarm"));
SoTransform* SoTransform108 = new SoTransform();
SoTransform108->setTranslation(new float[]{-0.1968,1.4642,-0.0265});
SoShape* SoShape109 = new SoShape();
SoShape109->setUSE(QString("SphereYellow"));
SoTransform108->addChild(*SoShape109);

SoHAnimSegment107->addChild(*SoTransform108);

SoHAnimJoint106->addChildren(*SoHAnimSegment107);

SoHAnimJoint* SoHAnimJoint110 = new SoHAnimJoint();
SoHAnimJoint110->setDEF(QString("boxman_r_elbow"));
SoHAnimJoint110->X3DNode::setName(QString("r_elbow"));
SoHAnimJoint110->setRotation(new float[]{0.970142500145332,0.242535625036333,0.0,3.82547816652888});
SoHAnimJoint110->setCenter(new float[]{-0.1982,1.1622,-0.0557});
SoHAnimJoint110->setSkinCoordIndex(new int32_t[]{208,209,210,211,212,213,214,215}, 8);
SoHAnimJoint110->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 8);
SoHAnimSegment* SoHAnimSegment111 = new SoHAnimSegment();
SoHAnimSegment111->setDEF(QString("boxman_r_forearm"));
SoHAnimSegment111->X3DNode::setName(QString("r_forearm"));
SoTransform* SoTransform112 = new SoTransform();
SoTransform112->setTranslation(new float[]{-0.1982,1.1622,-0.0557});
SoShape* SoShape113 = new SoShape();
SoShape113->setUSE(QString("SphereYellow"));
SoTransform112->addChild(*SoShape113);

SoHAnimSegment111->addChild(*SoTransform112);

SoHAnimJoint110->addChildren(*SoHAnimSegment111);

SoHAnimJoint* SoHAnimJoint114 = new SoHAnimJoint();
SoHAnimJoint114->setDEF(QString("boxman_r_wrist"));
SoHAnimJoint114->X3DNode::setName(QString("r_wrist"));
SoHAnimJoint114->setRotation(new float[]{0.0,1.0,0.0,5.75309161017649});
SoHAnimJoint114->setCenter(new float[]{-0.1972,0.8929,-0.069});
SoHAnimJoint114->setSkinCoordIndex(new int32_t[]{216,217,218,219,220,221,222,223}, 8);
SoHAnimJoint114->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 8);
SoHAnimSegment* SoHAnimSegment115 = new SoHAnimSegment();
SoHAnimSegment115->setDEF(QString("boxman_r_hand"));
SoHAnimSegment115->X3DNode::setName(QString("r_hand"));
SoTransform* SoTransform116 = new SoTransform();
SoTransform116->setTranslation(new float[]{-0.1972,0.8929,-0.069});
SoShape* SoShape117 = new SoShape();
SoShape117->setUSE(QString("SphereYellow"));
SoTransform116->addChild(*SoShape117);

SoHAnimSegment115->addChild(*SoTransform116);

SoHAnimSite* SoHAnimSite118 = new SoHAnimSite();
SoHAnimSite118->setDEF(QString("boxman_r_hand_tip"));
SoHAnimSite118->X3DNode::setName(QString("r_hand_tip"));
SoHAnimSite118->setTranslation(new float[]{-0.1912,0.6976,-0.071});
SoShape* SoShape119 = new SoShape();
SoShape119->setUSE(QString("SphereRed"));
SoHAnimSite118->addChild(*SoShape119);

SoHAnimSegment115->addChild(*SoHAnimSite118);

SoHAnimJoint114->addChildren(*SoHAnimSegment115);

SoHAnimJoint110->addChildren(*SoHAnimJoint114);

SoHAnimJoint106->addChildren(*SoHAnimJoint110);

SoHAnimJoint82->addChildren(*SoHAnimJoint106);

SoHAnimJoint36->addChildren(*SoHAnimJoint82);

SoHAnimHumanoid35->setSkeleton(*SoHAnimJoint36);

SoHAnimJoint* SoHAnimJoint120 = new SoHAnimJoint();
SoHAnimJoint120->setUSE(QString("boxman_humanoid_root"));
SoHAnimHumanoid35->setJoints(*SoHAnimJoint120);

SoHAnimJoint* SoHAnimJoint121 = new SoHAnimJoint();
SoHAnimJoint121->setUSE(QString("boxman_skullbase"));
SoHAnimHumanoid35->setJoints(*SoHAnimJoint121);

SoHAnimJoint* SoHAnimJoint122 = new SoHAnimJoint();
SoHAnimJoint122->setUSE(QString("boxman_vl5"));
SoHAnimHumanoid35->setJoints(*SoHAnimJoint122);

SoHAnimJoint* SoHAnimJoint123 = new SoHAnimJoint();
SoHAnimJoint123->setUSE(QString("boxman_r_ankle"));
SoHAnimHumanoid35->setJoints(*SoHAnimJoint123);

SoHAnimJoint* SoHAnimJoint124 = new SoHAnimJoint();
SoHAnimJoint124->setUSE(QString("boxman_l_ankle"));
SoHAnimHumanoid35->setJoints(*SoHAnimJoint124);

SoHAnimJoint* SoHAnimJoint125 = new SoHAnimJoint();
SoHAnimJoint125->setUSE(QString("boxman_r_elbow"));
SoHAnimHumanoid35->setJoints(*SoHAnimJoint125);

SoHAnimJoint* SoHAnimJoint126 = new SoHAnimJoint();
SoHAnimJoint126->setUSE(QString("boxman_l_elbow"));
SoHAnimHumanoid35->setJoints(*SoHAnimJoint126);

SoHAnimJoint* SoHAnimJoint127 = new SoHAnimJoint();
SoHAnimJoint127->setUSE(QString("boxman_r_hip"));
SoHAnimHumanoid35->setJoints(*SoHAnimJoint127);

SoHAnimJoint* SoHAnimJoint128 = new SoHAnimJoint();
SoHAnimJoint128->setUSE(QString("boxman_l_hip"));
SoHAnimHumanoid35->setJoints(*SoHAnimJoint128);

SoHAnimJoint* SoHAnimJoint129 = new SoHAnimJoint();
SoHAnimJoint129->setUSE(QString("boxman_r_knee"));
SoHAnimHumanoid35->setJoints(*SoHAnimJoint129);

SoHAnimJoint* SoHAnimJoint130 = new SoHAnimJoint();
SoHAnimJoint130->setUSE(QString("boxman_l_knee"));
SoHAnimHumanoid35->setJoints(*SoHAnimJoint130);

SoHAnimJoint* SoHAnimJoint131 = new SoHAnimJoint();
SoHAnimJoint131->setUSE(QString("boxman_r_midtarsal"));
SoHAnimHumanoid35->setJoints(*SoHAnimJoint131);

SoHAnimJoint* SoHAnimJoint132 = new SoHAnimJoint();
SoHAnimJoint132->setUSE(QString("boxman_l_midtarsal"));
SoHAnimHumanoid35->setJoints(*SoHAnimJoint132);

SoHAnimJoint* SoHAnimJoint133 = new SoHAnimJoint();
SoHAnimJoint133->setUSE(QString("boxman_r_shoulder"));
SoHAnimHumanoid35->setJoints(*SoHAnimJoint133);

SoHAnimJoint* SoHAnimJoint134 = new SoHAnimJoint();
SoHAnimJoint134->setUSE(QString("boxman_l_shoulder"));
SoHAnimHumanoid35->setJoints(*SoHAnimJoint134);

SoHAnimJoint* SoHAnimJoint135 = new SoHAnimJoint();
SoHAnimJoint135->setUSE(QString("boxman_r_wrist"));
SoHAnimHumanoid35->setJoints(*SoHAnimJoint135);

SoHAnimJoint* SoHAnimJoint136 = new SoHAnimJoint();
SoHAnimJoint136->setUSE(QString("boxman_l_wrist"));
SoHAnimHumanoid35->setJoints(*SoHAnimJoint136);

SoHAnimSegment* SoHAnimSegment137 = new SoHAnimSegment();
SoHAnimSegment137->setUSE(QString("boxman_sacrum"));
SoHAnimHumanoid35->setSegments(*SoHAnimSegment137);

SoHAnimSegment* SoHAnimSegment138 = new SoHAnimSegment();
SoHAnimSegment138->setUSE(QString("boxman_l5"));
SoHAnimHumanoid35->setSegments(*SoHAnimSegment138);

SoHAnimSegment* SoHAnimSegment139 = new SoHAnimSegment();
SoHAnimSegment139->setUSE(QString("boxman_skull"));
SoHAnimHumanoid35->setSegments(*SoHAnimSegment139);

SoHAnimSegment* SoHAnimSegment140 = new SoHAnimSegment();
SoHAnimSegment140->setUSE(QString("boxman_l_calf"));
SoHAnimHumanoid35->setSegments(*SoHAnimSegment140);

SoHAnimSegment* SoHAnimSegment141 = new SoHAnimSegment();
SoHAnimSegment141->setUSE(QString("boxman_r_calf"));
SoHAnimHumanoid35->setSegments(*SoHAnimSegment141);

SoHAnimSegment* SoHAnimSegment142 = new SoHAnimSegment();
SoHAnimSegment142->setUSE(QString("boxman_l_forearm"));
SoHAnimHumanoid35->setSegments(*SoHAnimSegment142);

SoHAnimSegment* SoHAnimSegment143 = new SoHAnimSegment();
SoHAnimSegment143->setUSE(QString("boxman_r_forearm"));
SoHAnimHumanoid35->setSegments(*SoHAnimSegment143);

SoHAnimSegment* SoHAnimSegment144 = new SoHAnimSegment();
SoHAnimSegment144->setUSE(QString("boxman_l_hand"));
SoHAnimHumanoid35->setSegments(*SoHAnimSegment144);

SoHAnimSegment* SoHAnimSegment145 = new SoHAnimSegment();
SoHAnimSegment145->setUSE(QString("boxman_r_hand"));
SoHAnimHumanoid35->setSegments(*SoHAnimSegment145);

SoHAnimSegment* SoHAnimSegment146 = new SoHAnimSegment();
SoHAnimSegment146->setUSE(QString("boxman_l_hindfoot"));
SoHAnimHumanoid35->setSegments(*SoHAnimSegment146);

SoHAnimSegment* SoHAnimSegment147 = new SoHAnimSegment();
SoHAnimSegment147->setUSE(QString("boxman_r_hindfoot"));
SoHAnimHumanoid35->setSegments(*SoHAnimSegment147);

SoHAnimSegment* SoHAnimSegment148 = new SoHAnimSegment();
SoHAnimSegment148->setUSE(QString("boxman_l_middistal"));
SoHAnimHumanoid35->setSegments(*SoHAnimSegment148);

SoHAnimSegment* SoHAnimSegment149 = new SoHAnimSegment();
SoHAnimSegment149->setUSE(QString("boxman_r_middistal"));
SoHAnimHumanoid35->setSegments(*SoHAnimSegment149);

SoHAnimSegment* SoHAnimSegment150 = new SoHAnimSegment();
SoHAnimSegment150->setUSE(QString("boxman_l_thigh"));
SoHAnimHumanoid35->setSegments(*SoHAnimSegment150);

SoHAnimSegment* SoHAnimSegment151 = new SoHAnimSegment();
SoHAnimSegment151->setUSE(QString("boxman_r_thigh"));
SoHAnimHumanoid35->setSegments(*SoHAnimSegment151);

SoHAnimSegment* SoHAnimSegment152 = new SoHAnimSegment();
SoHAnimSegment152->setUSE(QString("boxman_l_upperarm"));
SoHAnimHumanoid35->setSegments(*SoHAnimSegment152);

SoHAnimSegment* SoHAnimSegment153 = new SoHAnimSegment();
SoHAnimSegment153->setUSE(QString("boxman_r_upperarm"));
SoHAnimHumanoid35->setSegments(*SoHAnimSegment153);

SoHAnimSite* SoHAnimSite154 = new SoHAnimSite();
SoHAnimSite154->setUSE(QString("boxman_skull_tip"));
SoHAnimHumanoid35->setSites(*SoHAnimSite154);

SoHAnimSite* SoHAnimSite155 = new SoHAnimSite();
SoHAnimSite155->setUSE(QString("boxman_l_hand_tip"));
SoHAnimHumanoid35->setSites(*SoHAnimSite155);

SoHAnimSite* SoHAnimSite156 = new SoHAnimSite();
SoHAnimSite156->setUSE(QString("boxman_r_hand_tip"));
SoHAnimHumanoid35->setSites(*SoHAnimSite156);

SoHAnimSite* SoHAnimSite157 = new SoHAnimSite();
SoHAnimSite157->setUSE(QString("boxman_l_middistal_tip"));
SoHAnimHumanoid35->setSites(*SoHAnimSite157);

SoHAnimSite* SoHAnimSite158 = new SoHAnimSite();
SoHAnimSite158->setUSE(QString("boxman_r_middistal_tip"));
SoHAnimHumanoid35->setSites(*SoHAnimSite158);

SoHAnimSite* SoHAnimSite159 = new SoHAnimSite();
SoHAnimSite159->setDEF(QString("boxman_BoxMan_view"));
SoHAnimSite159->X3DNode::setName(QString("BoxMan_view"));
SoViewpoint* SoViewpoint160 = new SoViewpoint();
SoViewpoint160->setDEF(QString("Inclined_View"));
SoViewpoint160->setDescription(QString("Inclined View"));
SoViewpoint160->setPosition(new float[]{2.0,0.9,2.0});
SoViewpoint160->setOrientation(new float[]{0.0,1.0,0.0,0.78});
SoHAnimSite159->addChild(*SoViewpoint160);

SoViewpoint* SoViewpoint161 = new SoViewpoint();
SoViewpoint161->setDEF(QString("Front_View"));
SoViewpoint161->setDescription(QString("Front View"));
SoViewpoint161->setPosition(new float[]{0.0,1.0,3.0});
SoHAnimSite159->addChild(*SoViewpoint161);

SoViewpoint* SoViewpoint162 = new SoViewpoint();
SoViewpoint162->setDEF(QString("Best_View"));
SoViewpoint162->setDescription(QString("Right-side View"));
SoViewpoint162->setPosition(new float[]{-3.0,1.0,0.0});
SoViewpoint162->setOrientation(new float[]{0.0,1.0,0.0,-1.57});
SoHAnimSite159->addChild(*SoViewpoint162);

SoViewpoint* SoViewpoint163 = new SoViewpoint();
SoViewpoint163->setDEF(QString("Side_View"));
SoViewpoint163->setDescription(QString("Left-side View"));
SoViewpoint163->setPosition(new float[]{3.0,1.0,0.0});
SoViewpoint163->setOrientation(new float[]{0.0,1.0,0.0,1.57});
SoHAnimSite159->addChild(*SoViewpoint163);

SoViewpoint* SoViewpoint164 = new SoViewpoint();
SoViewpoint164->setDEF(QString("Top_View"));
SoViewpoint164->setDescription(QString("Top View"));
SoViewpoint164->setPosition(new float[]{0.0,3.0,0.0});
SoViewpoint164->setOrientation(new float[]{1.0,0.0,0.0,-1.57});
SoHAnimSite159->addChild(*SoViewpoint164);

SoHAnimHumanoid35->setViewpoints(*SoHAnimSite159);

SoCoordinate* SoCoordinate165 = new SoCoordinate();
SoCoordinate165->setDEF(QString("SKINCOORD"));
SoCoordinate165->setPoint(new float[]{-0.05,1.0,0.05,0.05,1.0,0.05,0.03,0.97,-0.1,-0.03,0.97,-0.1,0.03,0.94,-0.075,-0.03,0.94,-0.075,0.0,0.92,0.0,0.0,0.94,0.03,-0.12,1.06,0.05,0.12,1.06,0.05,0.12,1.06,-0.1,-0.12,1.06,-0.1,0.0456,0.9364,0.05,0.1456,0.9364,0.05,0.1456,0.9364,-0.05,0.0456,0.9364,-0.05,0.0456,0.9,0.05,0.1456,0.9,0.05,0.1456,0.9,-0.05,0.0456,0.9,-0.05,0.0456,0.8,0.05,0.1456,0.8,0.05,0.1456,0.8,-0.05,0.0456,0.8,-0.05,0.0456,0.7,0.05,0.1456,0.7,0.05,0.1456,0.7,-0.05,0.0456,0.7,-0.05,0.0456,0.6,0.05,0.1456,0.6,0.05,0.1456,0.6,-0.05,0.0456,0.6,-0.05,0.0456,0.55,0.05,0.1456,0.55,0.05,0.1456,0.55,-0.05,0.0456,0.55,-0.05,0.0456,0.52,0.05,0.1456,0.52,0.05,0.1456,0.52,-0.05,0.0456,0.52,-0.05,0.0456,0.5,0.05,0.1456,0.5,0.05,0.1456,0.5,-0.05,0.0456,0.5,-0.05,0.0454,0.43,0.045,0.1454,0.43,0.045,0.1454,0.43,-0.055,0.0454,0.43,-0.055,0.0452,0.36,0.04,0.1452,0.36,0.04,0.1452,0.36,-0.06,0.0452,0.36,-0.06,0.045,0.29,0.035,0.145,0.29,0.035,0.145,0.29,-0.065,0.045,0.29,-0.065,0.0448,0.21,0.03,0.1448,0.21,0.03,0.1448,0.21,-0.07,0.0448,0.21,-0.07,0.0446,0.1262,0.025,0.1446,0.1262,0.025,0.1446,0.1262,-0.075,0.0446,0.1262,-0.075,0.0446,0.0762,0.025,0.1446,0.0762,0.025,0.1446,0.0,-0.075,0.0446,0.0,-0.075,0.0446,0.0562,0.057,0.1446,0.0562,0.057,0.1446,0.0,0.057,0.0446,0.0,0.057,0.0446,0.0562,0.087,0.1446,0.0562,0.087,0.1446,0.0,0.087,0.0446,0.0,0.087,0.0446,0.0562,0.1924,0.1446,0.0562,0.1924,0.1446,0.0,0.1924,0.0446,0.0,0.1924,-0.0456,0.9364,0.05,-0.1456,0.9364,0.05,-0.1456,0.9364,-0.05,-0.0456,0.9364,-0.05,-0.0456,0.9,0.05,-0.1456,0.9,0.05,-0.1456,0.9,-0.05,-0.0456,0.9,-0.05,-0.0456,0.8,0.05,-0.1456,0.8,0.05,-0.1456,0.8,-0.05,-0.0456,0.8,-0.05,-0.0456,0.7,0.05,-0.1456,0.7,0.05,-0.1456,0.7,-0.05,-0.0456,0.7,-0.05,-0.0456,0.6,0.05,-0.1456,0.6,0.05,-0.1456,0.6,-0.05,-0.0456,0.6,-0.05,-0.0456,0.55,0.05,-0.1456,0.55,0.05,-0.1456,0.55,-0.05,-0.0456,0.55,-0.05,-0.0456,0.52,0.05,-0.1456,0.52,0.05,-0.1456,0.52,-0.05,-0.0456,0.52,-0.05,-0.0456,0.5,0.05,-0.1456,0.5,0.05,-0.1456,0.5,-0.05,-0.0456,0.5,-0.05,-0.0454,0.43,0.045,-0.1454,0.43,0.045,-0.1454,0.43,-0.055,-0.0454,0.43,-0.055,-0.0452,0.36,0.04,-0.1452,0.36,0.04,-0.1452,0.36,-0.06,-0.0452,0.36,-0.06,-0.045,0.29,0.035,-0.145,0.29,0.035,-0.145,0.29,-0.065,-0.045,0.29,-0.065,-0.0448,0.21,0.03,-0.1448,0.21,0.03,-0.1448,0.21,-0.07,-0.0448,0.21,-0.07,-0.0446,0.1262,0.025,-0.1446,0.1262,0.025,-0.1446,0.1262,-0.075,-0.0446,0.1262,-0.075,-0.0446,0.0762,0.025,-0.1446,0.0762,0.025,-0.1446,0.0,-0.075,-0.0446,0.0,-0.075,-0.0446,0.0562,0.057,-0.1446,0.0562,0.057,-0.1446,0.0,0.057,-0.0446,0.0,0.057,-0.0446,0.0562,0.087,-0.1446,0.0562,0.087,-0.1446,0.0,0.087,-0.0446,0.0,0.087,-0.0446,0.0562,0.1924,-0.1446,0.0562,0.1924,-0.1446,0.0,0.1924,-0.0446,0.0,0.1924,-0.12,1.1,0.05,0.12,1.1,0.05,0.12,1.1,-0.1,-0.12,1.1,-0.1,-0.14,1.42,0.045,0.14,1.42,0.045,0.14,1.42,-0.09,-0.14,1.42,-0.09,-0.24,1.52,0.035,0.24,1.52,0.035,0.24,1.52,-0.09,-0.24,1.52,-0.09,-0.05,1.56,0.03,0.05,1.56,0.03,0.05,1.56,-0.06,-0.05,1.56,-0.06,-0.05,1.6,0.06,0.05,1.6,0.06,0.05,1.62,-0.03,-0.05,1.62,-0.03,-0.07,1.777,0.13,0.07,1.777,0.13,0.07,1.777,-0.03,-0.07,1.777,-0.03,-0.07,1.6,0.13,0.07,1.6,0.13,0.07,1.66,-0.03,-0.07,1.66,-0.03,0.16,1.42,0.015,0.24,1.5,0.015,0.24,1.5,-0.075,0.16,1.42,-0.075,0.17,1.18,-0.025,0.23,1.18,-0.025,0.23,1.18,-0.085,0.17,1.18,-0.085,0.17,1.14,-0.025,0.23,1.14,-0.025,0.23,1.14,-0.085,0.17,1.14,-0.085,0.18,0.91,-0.05,0.22,0.91,-0.05,0.22,0.91,-0.09,0.18,0.91,-0.09,0.18,0.87,-0.02,0.22,0.87,-0.02,0.22,0.87,-0.1,0.18,0.87,-0.1,0.18,0.6976,-0.02,0.22,0.6976,-0.02,0.22,0.6976,-0.1,0.18,0.6976,-0.1,-0.16,1.42,0.015,-0.24,1.5,0.015,-0.24,1.5,-0.075,-0.16,1.42,-0.075,-0.17,1.18,-0.025,-0.23,1.18,-0.025,-0.23,1.18,-0.085,-0.17,1.18,-0.085,-0.17,1.14,-0.025,-0.23,1.14,-0.025,-0.23,1.14,-0.085,-0.17,1.14,-0.085,-0.18,0.91,-0.05,-0.22,0.91,-0.05,-0.22,0.91,-0.09,-0.18,0.91,-0.09,-0.18,0.87,-0.02,-0.22,0.87,-0.02,-0.22,0.87,-0.1,-0.18,0.87,-0.1,-0.18,0.6976,-0.02,-0.22,0.6976,-0.02,-0.22,0.6976,-0.1,-0.18,0.6976,-0.1}, 672);
SoHAnimHumanoid35->setSkinCoord(*SoCoordinate165);

SoGroup* SoGroup166 = new SoGroup();
SoShape* SoShape167 = new SoShape();
SoShape167->setDEF(QString("TrouserSkin"));
SoVRMLAppearance* SoVRMLAppearance168 = new SoVRMLAppearance();
SoMaterial* SoMaterial169 = new SoMaterial();
SoMaterial169->setDiffuseColor(new float[]{0.0,0.0,1.0});
SoMaterial169->setTransparency(0.5);
SoVRMLAppearance168->addChild(*SoMaterial169);

SoShape167->addChild(*SoVRMLAppearance168);

SoIndexedFaceSet* SoIndexedFaceSet170 = new SoIndexedFaceSet();
SoIndexedFaceSet170->setCoordIndex(new int32_t[]{0,7,1,-1,8,0,1,-1,1,9,8,-1,10,2,3,-1,3,11,10,-1,2,4,5,-1,5,3,2,-1,4,6,5,-1,7,12,1,-1,1,12,13,-1,13,9,1,-1,9,13,14,-1,14,10,9,-1,10,14,15,-1,15,2,10,-1,12,7,6,-1,6,15,12,-1,15,6,4,-1,4,2,15,-1,0,80,7,-1,81,80,0,-1,0,8,81,-1,82,81,8,-1,8,11,82,-1,83,82,11,-1,11,3,83,-1,6,7,80,-1,80,83,6,-1,5,6,83,-1,83,3,5,-1,12,16,17,-1,17,13,12,-1,13,17,18,-1,18,14,13,-1,14,18,19,-1,19,15,14,-1,15,19,16,-1,16,12,15,-1,16,20,21,-1,21,17,16,-1,17,21,22,-1,22,18,17,-1,18,22,23,-1,23,19,18,-1,19,23,20,-1,20,16,19,-1,20,24,25,-1,25,21,20,-1,21,25,26,-1,26,22,21,-1,22,26,27,-1,27,23,22,-1,23,27,24,-1,24,20,23,-1,24,28,29,-1,29,25,24,-1,25,29,30,-1,30,26,25,-1,26,30,31,-1,31,27,26,-1,27,31,28,-1,28,24,27,-1,28,32,33,-1,33,29,28,-1,29,33,34,-1,34,30,29,-1,30,34,35,-1,35,31,30,-1,31,35,32,-1,32,28,31,-1,32,36,37,-1,37,33,32,-1,33,37,38,-1,38,34,33,-1,34,38,39,-1,39,35,34,-1,35,39,36,-1,36,32,35,-1,36,40,41,-1,41,37,36,-1,37,41,42,-1,42,38,37,-1,38,42,43,-1,43,39,38,-1,39,43,40,-1,40,36,39,-1,40,44,45,-1,45,41,40,-1,41,45,46,-1,46,42,41,-1,42,46,47,-1,47,43,42,-1,43,47,44,-1,44,40,43,-1,44,48,49,-1,49,45,44,-1,45,49,50,-1,50,46,45,-1,46,50,51,-1,51,47,46,-1,47,51,48,-1,48,44,47,-1,48,52,53,-1,53,49,48,-1,49,53,54,-1,54,50,49,-1,50,54,55,-1,55,51,50,-1,51,55,52,-1,52,48,51,-1,52,56,57,-1,57,53,52,-1,53,57,58,-1,58,54,53,-1,54,58,59,-1,59,55,54,-1,55,59,56,-1,56,52,55,-1,56,60,61,-1,61,57,56,-1,57,61,62,-1,62,58,57,-1,58,62,63,-1,63,59,58,-1,59,63,60,-1,60,56,59,-1,81,85,84,-1,84,80,81,-1,82,86,85,-1,85,81,82,-1,83,87,86,-1,86,82,83,-1,80,84,87,-1,87,83,80,-1,85,89,88,-1,88,84,85,-1,86,90,89,-1,89,85,86,-1,87,91,90,-1,90,86,87,-1,84,88,91,-1,91,87,84,-1,89,93,92,-1,92,88,89,-1,90,94,93,-1,93,89,90,-1,91,95,94,-1,94,90,91,-1,88,92,95,-1,95,91,88,-1,93,97,96,-1,96,92,93,-1,94,98,97,-1,97,93,94,-1,95,99,98,-1,98,94,95,-1,92,96,99,-1,99,95,92,-1,97,101,100,-1,100,96,97,-1,98,102,101,-1,101,97,98,-1,99,103,102,-1,102,98,99,-1,96,100,103,-1,103,99,96,-1,101,105,104,-1,104,100,101,-1,102,106,105,-1,105,101,102,-1,103,107,106,-1,106,102,103,-1,100,104,107,-1,107,103,100,-1,105,109,108,-1,108,104,105,-1,106,110,109,-1,109,105,106,-1,107,111,110,-1,110,106,107,-1,104,108,111,-1,111,107,104,-1,109,113,112,-1,112,108,109,-1,110,114,113,-1,113,109,110,-1,111,115,114,-1,114,110,111,-1,108,112,115,-1,115,111,108,-1,113,117,116,-1,116,112,113,-1,114,118,117,-1,117,113,114,-1,115,119,118,-1,118,114,115,-1,112,116,119,-1,119,115,112,-1,117,121,120,-1,120,116,117,-1,118,122,121,-1,121,117,118,-1,119,123,122,-1,122,118,119,-1,116,120,123,-1,123,119,116,-1,121,125,124,-1,124,120,121,-1,122,126,125,-1,125,121,122,-1,123,127,126,-1,126,122,123,-1,120,124,127,-1,127,123,120,-1,125,129,128,-1,128,124,125,-1,126,130,129,-1,129,125,126,-1,127,131,130,-1,130,126,127,-1,124,128,131,-1,131,127,124,-1}, 888);
SoCoordinate* SoCoordinate171 = new SoCoordinate();
SoCoordinate171->setUSE(QString("SKINCOORD"));
SoIndexedFaceSet170->setCoord(*SoCoordinate171);

SoShape167->setGeometry(*SoIndexedFaceSet170);

SoGroup166->addChild(*SoShape167);

SoShape* SoShape172 = new SoShape();
SoShape172->setDEF(QString("ShoeSkin"));
SoVRMLAppearance* SoVRMLAppearance173 = new SoVRMLAppearance();
SoMaterial* SoMaterial174 = new SoMaterial();
SoMaterial174->setDiffuseColor(new float[]{0.0,0.0,0.0});
SoMaterial174->setTransparency(0.5);
SoVRMLAppearance173->addChild(*SoMaterial174);

SoShape172->addChild(*SoVRMLAppearance173);

SoIndexedFaceSet* SoIndexedFaceSet175 = new SoIndexedFaceSet();
SoIndexedFaceSet175->setCoordIndex(new int32_t[]{60,64,65,-1,65,61,60,-1,61,65,66,-1,66,62,61,-1,62,66,67,-1,67,63,62,-1,63,67,64,-1,64,60,63,-1,64,68,69,-1,69,65,64,-1,65,69,70,-1,70,66,65,-1,66,70,71,-1,71,67,66,-1,67,71,68,-1,68,64,67,-1,68,72,73,-1,73,69,68,-1,69,73,74,-1,74,70,69,-1,70,74,75,-1,75,71,70,-1,71,75,72,-1,72,68,71,-1,72,76,77,-1,77,73,72,-1,73,77,78,-1,78,74,73,-1,74,78,79,-1,79,75,74,-1,75,79,76,-1,76,72,75,-1,76,79,78,-1,78,77,76,-1,129,133,132,-1,132,128,129,-1,130,134,133,-1,133,129,130,-1,131,135,134,-1,134,130,131,-1,128,132,135,-1,135,131,128,-1,133,137,136,-1,136,132,133,-1,134,138,137,-1,137,133,134,-1,135,139,138,-1,138,134,135,-1,132,136,139,-1,139,135,132,-1,137,141,140,-1,140,136,137,-1,138,142,141,-1,141,137,138,-1,139,143,142,-1,142,138,139,-1,136,140,143,-1,143,139,136,-1,141,145,144,-1,144,140,141,-1,142,146,145,-1,145,141,142,-1,143,147,146,-1,146,142,143,-1,140,144,147,-1,147,143,140,-1,145,146,147,-1,147,144,145,-1}, 272);
SoCoordinate* SoCoordinate176 = new SoCoordinate();
SoCoordinate176->setUSE(QString("SKINCOORD"));
SoIndexedFaceSet175->setCoord(*SoCoordinate176);

SoShape172->setGeometry(*SoIndexedFaceSet175);

SoGroup166->addChild(*SoShape172);

SoShape* SoShape177 = new SoShape();
SoShape177->setDEF(QString("ShirtSkin"));
SoVRMLAppearance* SoVRMLAppearance178 = new SoVRMLAppearance();
SoMaterial* SoMaterial179 = new SoMaterial();
SoMaterial179->setDiffuseColor(new float[]{1.0,1.0,0.0});
SoMaterial179->setTransparency(0.5);
SoVRMLAppearance178->addChild(*SoMaterial179);

SoShape177->addChild(*SoVRMLAppearance178);

SoIndexedFaceSet* SoIndexedFaceSet180 = new SoIndexedFaceSet();
SoIndexedFaceSet180->setCoordIndex(new int32_t[]{148,8,9,-1,9,149,148,-1,149,9,10,-1,10,150,149,-1,150,10,11,-1,11,151,150,-1,151,11,8,-1,8,148,151,-1,152,148,149,-1,149,153,152,-1,153,149,150,-1,150,154,153,-1,154,150,151,-1,151,155,154,-1,155,151,148,-1,148,152,155,-1,156,152,153,-1,153,157,156,-1,158,154,155,-1,155,159,158,-1,160,156,157,-1,157,161,160,-1,161,157,158,-1,158,162,161,-1,162,158,159,-1,159,163,162,-1,163,159,156,-1,156,160,163,-1,164,160,161,-1,161,165,164,-1,165,161,162,-1,162,166,165,-1,166,162,163,-1,163,167,166,-1,167,163,160,-1,160,164,167,-1,153,176,177,-1,177,157,153,-1,157,177,178,-1,178,158,157,-1,158,178,179,-1,179,154,158,-1,154,179,176,-1,176,153,154,-1,176,180,181,-1,181,177,176,-1,177,181,182,-1,182,178,177,-1,178,182,183,-1,183,179,178,-1,179,183,180,-1,180,176,179,-1,180,184,185,-1,185,181,180,-1,181,185,186,-1,186,182,181,-1,182,186,187,-1,187,183,182,-1,183,187,184,-1,184,180,183,-1,184,188,189,-1,189,185,184,-1,185,189,190,-1,190,186,185,-1,186,190,191,-1,191,187,186,-1,187,191,188,-1,188,184,187,-1,152,156,201,-1,201,200,152,-1,156,159,202,-1,202,201,156,-1,159,155,203,-1,203,202,159,-1,155,152,200,-1,200,203,155,-1,201,205,204,-1,204,200,201,-1,202,206,205,-1,205,201,202,-1,203,207,206,-1,206,202,203,-1,200,204,207,-1,207,203,200,-1,205,209,208,-1,208,204,205,-1,206,210,209,-1,209,205,206,-1,207,211,210,-1,210,206,207,-1,204,208,211,-1,211,207,204,-1,209,213,212,-1,212,208,209,-1,210,214,213,-1,213,209,210,-1,211,215,214,-1,214,210,211,-1,208,212,215,-1,215,211,208,-1}, 400);
SoCoordinate* SoCoordinate181 = new SoCoordinate();
SoCoordinate181->setUSE(QString("SKINCOORD"));
SoIndexedFaceSet180->setCoord(*SoCoordinate181);

SoShape177->setGeometry(*SoIndexedFaceSet180);

SoGroup166->addChild(*SoShape177);

SoShape* SoShape182 = new SoShape();
SoShape182->setDEF(QString("HeadHandsFleshToneSkin"));
SoVRMLAppearance* SoVRMLAppearance183 = new SoVRMLAppearance();
SoMaterial* SoMaterial184 = new SoMaterial();
SoMaterial184->setDiffuseColor(new float[]{1.0,0.75,0.75});
SoMaterial184->setTransparency(0.5);
SoVRMLAppearance183->addChild(*SoMaterial184);

SoShape182->addChild(*SoVRMLAppearance183);

SoIndexedFaceSet* SoIndexedFaceSet185 = new SoIndexedFaceSet();
SoIndexedFaceSet185->setCoordIndex(new int32_t[]{172,164,165,-1,165,173,172,-1,173,165,166,-1,166,174,173,-1,174,166,167,-1,167,175,174,-1,175,167,164,-1,164,172,175,-1,168,172,173,-1,173,169,168,-1,169,173,174,-1,174,170,169,-1,170,174,175,-1,175,171,170,-1,171,175,172,-1,172,168,171,-1,171,168,169,-1,169,170,171,-1,188,192,193,-1,193,189,188,-1,189,193,194,-1,194,190,189,-1,190,194,195,-1,195,191,190,-1,191,195,192,-1,192,188,191,-1,192,196,197,-1,197,193,192,-1,193,197,198,-1,198,194,193,-1,194,198,199,-1,199,195,194,-1,195,199,196,-1,196,192,195,-1,196,199,198,-1,198,197,196,-1,213,217,216,-1,216,212,213,-1,214,218,217,-1,217,213,214,-1,215,219,218,-1,218,214,215,-1,212,216,219,-1,219,215,212,-1,217,221,220,-1,220,216,217,-1,218,222,221,-1,221,217,218,-1,219,223,222,-1,222,218,219,-1,216,220,223,-1,223,219,216,-1,221,222,223,-1,223,220,221,-1}, 216);
SoCoordinate* SoCoordinate186 = new SoCoordinate();
SoCoordinate186->setUSE(QString("SKINCOORD"));
SoIndexedFaceSet185->setCoord(*SoCoordinate186);

SoShape182->setGeometry(*SoIndexedFaceSet185);

SoGroup166->addChild(*SoShape182);

SoShape* SoShape187 = new SoShape();
SoShape187->setDEF(QString("SkinLines"));
SoVRMLAppearance* SoVRMLAppearance188 = new SoVRMLAppearance();
SoMaterial* SoMaterial189 = new SoMaterial();
SoMaterial189->setDiffuseColor(new float[]{0.0,0.0,0.0});
SoVRMLAppearance188->addChild(*SoMaterial189);

SoShape187->addChild(*SoVRMLAppearance188);

SoIndexedLineSet* SoIndexedLineSet190 = new SoIndexedLineSet();
SoIndexedLineSet190->setCoordIndex(new int32_t[]{0,7,1,-1,8,0,1,-1,1,9,8,-1,10,2,3,-1,3,11,10,-1,2,4,5,-1,5,3,2,-1,4,6,5,-1,7,12,1,-1,1,12,13,-1,13,9,1,-1,9,13,14,-1,14,10,9,-1,10,14,15,-1,15,2,10,-1,12,7,6,-1,6,15,12,-1,15,6,4,-1,4,2,15,-1,0,80,7,-1,81,80,0,-1,0,8,81,-1,82,81,8,-1,8,11,82,-1,83,82,11,-1,11,3,83,-1,6,7,80,-1,80,83,6,-1,5,6,83,-1,83,3,5,-1,12,16,17,-1,17,13,12,-1,13,17,18,-1,18,14,13,-1,14,18,19,-1,19,15,14,-1,15,19,16,-1,16,12,15,-1,16,20,21,-1,21,17,16,-1,17,21,22,-1,22,18,17,-1,18,22,23,-1,23,19,18,-1,19,23,20,-1,20,16,19,-1,20,24,25,-1,25,21,20,-1,21,25,26,-1,26,22,21,-1,22,26,27,-1,27,23,22,-1,23,27,24,-1,24,20,23,-1,24,28,29,-1,29,25,24,-1,25,29,30,-1,30,26,25,-1,26,30,31,-1,31,27,26,-1,27,31,28,-1,28,24,27,-1,28,32,33,-1,33,29,28,-1,29,33,34,-1,34,30,29,-1,30,34,35,-1,35,31,30,-1,31,35,32,-1,32,28,31,-1,32,36,37,-1,37,33,32,-1,33,37,38,-1,38,34,33,-1,34,38,39,-1,39,35,34,-1,35,39,36,-1,36,32,35,-1,36,40,41,-1,41,37,36,-1,37,41,42,-1,42,38,37,-1,38,42,43,-1,43,39,38,-1,39,43,40,-1,40,36,39,-1,40,44,45,-1,45,41,40,-1,41,45,46,-1,46,42,41,-1,42,46,47,-1,47,43,42,-1,43,47,44,-1,44,40,43,-1,44,48,49,-1,49,45,44,-1,45,49,50,-1,50,46,45,-1,46,50,51,-1,51,47,46,-1,47,51,48,-1,48,44,47,-1,48,52,53,-1,53,49,48,-1,49,53,54,-1,54,50,49,-1,50,54,55,-1,55,51,50,-1,51,55,52,-1,52,48,51,-1,52,56,57,-1,57,53,52,-1,53,57,58,-1,58,54,53,-1,54,58,59,-1,59,55,54,-1,55,59,56,-1,56,52,55,-1,56,60,61,-1,61,57,56,-1,57,61,62,-1,62,58,57,-1,58,62,63,-1,63,59,58,-1,59,63,60,-1,60,56,59,-1,81,85,84,-1,84,80,81,-1,82,86,85,-1,85,81,82,-1,83,87,86,-1,86,82,83,-1,80,84,87,-1,87,83,80,-1,85,89,88,-1,88,84,85,-1,86,90,89,-1,89,85,86,-1,87,91,90,-1,90,86,87,-1,84,88,91,-1,91,87,84,-1,89,93,92,-1,92,88,89,-1,90,94,93,-1,93,89,90,-1,91,95,94,-1,94,90,91,-1,88,92,95,-1,95,91,88,-1,93,97,96,-1,96,92,93,-1,94,98,97,-1,97,93,94,-1,95,99,98,-1,98,94,95,-1,92,96,99,-1,99,95,92,-1,97,101,100,-1,100,96,97,-1,98,102,101,-1,101,97,98,-1,99,103,102,-1,102,98,99,-1,96,100,103,-1,103,99,96,-1,101,105,104,-1,104,100,101,-1,102,106,105,-1,105,101,102,-1,103,107,106,-1,106,102,103,-1,100,104,107,-1,107,103,100,-1,105,109,108,-1,108,104,105,-1,106,110,109,-1,109,105,106,-1,107,111,110,-1,110,106,107,-1,104,108,111,-1,111,107,104,-1,109,113,112,-1,112,108,109,-1,110,114,113,-1,113,109,110,-1,111,115,114,-1,114,110,111,-1,108,112,115,-1,115,111,108,-1,113,117,116,-1,116,112,113,-1,114,118,117,-1,117,113,114,-1,115,119,118,-1,118,114,115,-1,112,116,119,-1,119,115,112,-1,117,121,120,-1,120,116,117,-1,118,122,121,-1,121,117,118,-1,119,123,122,-1,122,118,119,-1,116,120,123,-1,123,119,116,-1,121,125,124,-1,124,120,121,-1,122,126,125,-1,125,121,122,-1,123,127,126,-1,126,122,123,-1,120,124,127,-1,127,123,120,-1,125,129,128,-1,128,124,125,-1,126,130,129,-1,129,125,126,-1,127,131,130,-1,130,126,127,-1,124,128,131,-1,131,127,124,-1,60,64,65,-1,65,61,60,-1,61,65,66,-1,66,62,61,-1,62,66,67,-1,67,63,62,-1,63,67,64,-1,64,60,63,-1,64,68,69,-1,69,65,64,-1,65,69,70,-1,70,66,65,-1,66,70,71,-1,71,67,66,-1,67,71,68,-1,68,64,67,-1,68,72,73,-1,73,69,68,-1,69,73,74,-1,74,70,69,-1,70,74,75,-1,75,71,70,-1,71,75,72,-1,72,68,71,-1,72,76,77,-1,77,73,72,-1,73,77,78,-1,78,74,73,-1,74,78,79,-1,79,75,74,-1,75,79,76,-1,76,72,75,-1,76,79,78,-1,78,77,76,-1,129,133,132,-1,132,128,129,-1,130,134,133,-1,133,129,130,-1,131,135,134,-1,134,130,131,-1,128,132,135,-1,135,131,128,-1,133,137,136,-1,136,132,133,-1,134,138,137,-1,137,133,134,-1,135,139,138,-1,138,134,135,-1,132,136,139,-1,139,135,132,-1,137,141,140,-1,140,136,137,-1,138,142,141,-1,141,137,138,-1,139,143,142,-1,142,138,139,-1,136,140,143,-1,143,139,136,-1,141,145,144,-1,144,140,141,-1,142,146,145,-1,145,141,142,-1,143,147,146,-1,146,142,143,-1,140,144,147,-1,147,143,140,-1,145,146,147,-1,147,144,145,-1,148,8,9,-1,9,149,148,-1,149,9,10,-1,10,150,149,-1,150,10,11,-1,11,151,150,-1,151,11,8,-1,8,148,151,-1,152,148,149,-1,149,153,152,-1,153,149,150,-1,150,154,153,-1,154,150,151,-1,151,155,154,-1,155,151,148,-1,148,152,155,-1,156,152,153,-1,153,157,156,-1,158,154,155,-1,155,159,158,-1,160,156,157,-1,157,161,160,-1,161,157,158,-1,158,162,161,-1,162,158,159,-1,159,163,162,-1,163,159,156,-1,156,160,163,-1,164,160,161,-1,161,165,164,-1,165,161,162,-1,162,166,165,-1,166,162,163,-1,163,167,166,-1,167,163,160,-1,160,164,167,-1,153,176,177,-1,177,157,153,-1,157,177,178,-1,178,158,157,-1,158,178,179,-1,179,154,158,-1,154,179,176,-1,176,153,154,-1,176,180,181,-1,181,177,176,-1,177,181,182,-1,182,178,177,-1,178,182,183,-1,183,179,178,-1,179,183,180,-1,180,176,179,-1,180,184,185,-1,185,181,180,-1,181,185,186,-1,186,182,181,-1,182,186,187,-1,187,183,182,-1,183,187,184,-1,184,180,183,-1,184,188,189,-1,189,185,184,-1,185,189,190,-1,190,186,185,-1,186,190,191,-1,191,187,186,-1,187,191,188,-1,188,184,187,-1,152,156,201,-1,201,200,152,-1,156,159,202,-1,202,201,156,-1,159,155,203,-1,203,202,159,-1,155,152,200,-1,200,203,155,-1,201,205,204,-1,204,200,201,-1,202,206,205,-1,205,201,202,-1,203,207,206,-1,206,202,203,-1,200,204,207,-1,207,203,200,-1,205,209,208,-1,208,204,205,-1,206,210,209,-1,209,205,206,-1,207,211,210,-1,210,206,207,-1,204,208,211,-1,211,207,204,-1,209,213,212,-1,212,208,209,-1,210,214,213,-1,213,209,210,-1,211,215,214,-1,214,210,211,-1,208,212,215,-1,215,211,208,-1,172,164,165,-1,165,173,172,-1,173,165,166,-1,166,174,173,-1,174,166,167,-1,167,175,174,-1,175,167,164,-1,164,172,175,-1,168,172,173,-1,173,169,168,-1,169,173,174,-1,174,170,169,-1,170,174,175,-1,175,171,170,-1,171,175,172,-1,172,168,171,-1,171,168,169,-1,169,170,171,-1,188,192,193,-1,193,189,188,-1,189,193,194,-1,194,190,189,-1,190,194,195,-1,195,191,190,-1,191,195,192,-1,192,188,191,-1,192,196,197,-1,197,193,192,-1,193,197,198,-1,198,194,193,-1,194,198,199,-1,199,195,194,-1,195,199,196,-1,196,192,195,-1,196,199,198,-1,198,197,196,-1,213,217,216,-1,216,212,213,-1,214,218,217,-1,217,213,214,-1,215,219,218,-1,218,214,215,-1,212,216,219,-1,219,215,212,-1,217,221,220,-1,220,216,217,-1,218,222,221,-1,221,217,218,-1,219,223,222,-1,222,218,219,-1,216,220,223,-1,223,219,216,-1,221,222,223,-1,223,220,221,-1}, 1776);
SoCoordinate* SoCoordinate191 = new SoCoordinate();
SoCoordinate191->setUSE(QString("SKINCOORD"));
SoIndexedLineSet190->setCoord(*SoCoordinate191);

SoShape187->setGeometry(*SoIndexedLineSet190);

SoGroup166->addChild(*SoShape187);

SoHAnimHumanoid35->setSkin(SoGroup166);

SoNode32->addChild(*SoHAnimHumanoid35);

SoGroup* SoGroup192 = new SoGroup();
SoGroup192->setDEF(QString("StopAnimation"));
SoTimeSensor* SoTimeSensor193 = new SoTimeSensor();
SoTimeSensor193->setDEF(QString("StopTimer"));
SoTimeSensor193->setCycleInterval(5.73);
SoTimeSensor193->setLoop(true);
SoGroup192->addChild(*SoTimeSensor193);

SoPositionInterpolator* SoPositionInterpolator194 = new SoPositionInterpolator();
SoPositionInterpolator194->setDEF(QString("Stop_humanoid_root_TranslationInterpolator"));
SoPositionInterpolator194->setKey(new float[]{0.0,0.5,1.0}, 3);
SoPositionInterpolator194->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 9);
SoGroup192->addChild(*SoPositionInterpolator194);

SoOrientationInterpolator* SoOrientationInterpolator195 = new SoOrientationInterpolator();
SoOrientationInterpolator195->setDEF(QString("Stop_humanoid_root_RotationInterpolator"));
SoOrientationInterpolator195->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator195->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup192->addChild(*SoOrientationInterpolator195);

SoOrientationInterpolator* SoOrientationInterpolator196 = new SoOrientationInterpolator();
SoOrientationInterpolator196->setDEF(QString("Stop_sacroiliac_RotationInterpolator"));
SoOrientationInterpolator196->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator196->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup192->addChild(*SoOrientationInterpolator196);

SoOrientationInterpolator* SoOrientationInterpolator197 = new SoOrientationInterpolator();
SoOrientationInterpolator197->setDEF(QString("Stop_l_hip_RotationInterpolator"));
SoOrientationInterpolator197->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator197->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup192->addChild(*SoOrientationInterpolator197);

SoOrientationInterpolator* SoOrientationInterpolator198 = new SoOrientationInterpolator();
SoOrientationInterpolator198->setDEF(QString("Stop_l_knee_RotationInterpolator"));
SoOrientationInterpolator198->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator198->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup192->addChild(*SoOrientationInterpolator198);

SoOrientationInterpolator* SoOrientationInterpolator199 = new SoOrientationInterpolator();
SoOrientationInterpolator199->setDEF(QString("Stop_l_ankle_RotationInterpolator"));
SoOrientationInterpolator199->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator199->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup192->addChild(*SoOrientationInterpolator199);

SoOrientationInterpolator* SoOrientationInterpolator200 = new SoOrientationInterpolator();
SoOrientationInterpolator200->setDEF(QString("Stop_l_subtalar_RotationInterpolator"));
SoOrientationInterpolator200->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator200->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup192->addChild(*SoOrientationInterpolator200);

SoOrientationInterpolator* SoOrientationInterpolator201 = new SoOrientationInterpolator();
SoOrientationInterpolator201->setDEF(QString("Stop_l_midtarsal_RotationInterpolator"));
SoOrientationInterpolator201->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator201->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup192->addChild(*SoOrientationInterpolator201);

SoOrientationInterpolator* SoOrientationInterpolator202 = new SoOrientationInterpolator();
SoOrientationInterpolator202->setDEF(QString("Stop_l_metatarsal_RotationInterpolator"));
SoOrientationInterpolator202->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator202->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup192->addChild(*SoOrientationInterpolator202);

SoOrientationInterpolator* SoOrientationInterpolator203 = new SoOrientationInterpolator();
SoOrientationInterpolator203->setDEF(QString("Stop_r_hip_RotationInterpolator"));
SoOrientationInterpolator203->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator203->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup192->addChild(*SoOrientationInterpolator203);

SoOrientationInterpolator* SoOrientationInterpolator204 = new SoOrientationInterpolator();
SoOrientationInterpolator204->setDEF(QString("Stop_r_knee_RotationInterpolator"));
SoOrientationInterpolator204->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator204->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup192->addChild(*SoOrientationInterpolator204);

SoOrientationInterpolator* SoOrientationInterpolator205 = new SoOrientationInterpolator();
SoOrientationInterpolator205->setDEF(QString("Stop_r_ankle_RotationInterpolator"));
SoOrientationInterpolator205->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator205->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup192->addChild(*SoOrientationInterpolator205);

SoOrientationInterpolator* SoOrientationInterpolator206 = new SoOrientationInterpolator();
SoOrientationInterpolator206->setDEF(QString("Stop_r_subtalar_RotationInterpolator"));
SoOrientationInterpolator206->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator206->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup192->addChild(*SoOrientationInterpolator206);

SoOrientationInterpolator* SoOrientationInterpolator207 = new SoOrientationInterpolator();
SoOrientationInterpolator207->setDEF(QString("Stop_r_midtarsal_RotationInterpolator"));
SoOrientationInterpolator207->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator207->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup192->addChild(*SoOrientationInterpolator207);

SoOrientationInterpolator* SoOrientationInterpolator208 = new SoOrientationInterpolator();
SoOrientationInterpolator208->setDEF(QString("Stop_r_metatarsal_RotationInterpolator"));
SoOrientationInterpolator208->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator208->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup192->addChild(*SoOrientationInterpolator208);

SoOrientationInterpolator* SoOrientationInterpolator209 = new SoOrientationInterpolator();
SoOrientationInterpolator209->setDEF(QString("Stop_vl5_RotationInterpolator"));
SoOrientationInterpolator209->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator209->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup192->addChild(*SoOrientationInterpolator209);

SoOrientationInterpolator* SoOrientationInterpolator210 = new SoOrientationInterpolator();
SoOrientationInterpolator210->setDEF(QString("Stop_vl4_RotationInterpolator"));
SoOrientationInterpolator210->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator210->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup192->addChild(*SoOrientationInterpolator210);

SoOrientationInterpolator* SoOrientationInterpolator211 = new SoOrientationInterpolator();
SoOrientationInterpolator211->setDEF(QString("Stop_vl3_RotationInterpolator"));
SoOrientationInterpolator211->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator211->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup192->addChild(*SoOrientationInterpolator211);

SoOrientationInterpolator* SoOrientationInterpolator212 = new SoOrientationInterpolator();
SoOrientationInterpolator212->setDEF(QString("Stop_vl2_RotationInterpolator"));
SoOrientationInterpolator212->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator212->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup192->addChild(*SoOrientationInterpolator212);

SoOrientationInterpolator* SoOrientationInterpolator213 = new SoOrientationInterpolator();
SoOrientationInterpolator213->setDEF(QString("Stop_vl1_RotationInterpolator"));
SoOrientationInterpolator213->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator213->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup192->addChild(*SoOrientationInterpolator213);

SoOrientationInterpolator* SoOrientationInterpolator214 = new SoOrientationInterpolator();
SoOrientationInterpolator214->setDEF(QString("Stop_vt12_RotationInterpolator"));
SoOrientationInterpolator214->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator214->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup192->addChild(*SoOrientationInterpolator214);

SoOrientationInterpolator* SoOrientationInterpolator215 = new SoOrientationInterpolator();
SoOrientationInterpolator215->setDEF(QString("Stop_vt11_RotationInterpolator"));
SoOrientationInterpolator215->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator215->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup192->addChild(*SoOrientationInterpolator215);

SoOrientationInterpolator* SoOrientationInterpolator216 = new SoOrientationInterpolator();
SoOrientationInterpolator216->setDEF(QString("Stop_vt10_RotationInterpolator"));
SoOrientationInterpolator216->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator216->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup192->addChild(*SoOrientationInterpolator216);

SoOrientationInterpolator* SoOrientationInterpolator217 = new SoOrientationInterpolator();
SoOrientationInterpolator217->setDEF(QString("Stop_vt9_RotationInterpolator"));
SoOrientationInterpolator217->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator217->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup192->addChild(*SoOrientationInterpolator217);

SoOrientationInterpolator* SoOrientationInterpolator218 = new SoOrientationInterpolator();
SoOrientationInterpolator218->setDEF(QString("Stop_vt8_RotationInterpolator"));
SoOrientationInterpolator218->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator218->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup192->addChild(*SoOrientationInterpolator218);

SoOrientationInterpolator* SoOrientationInterpolator219 = new SoOrientationInterpolator();
SoOrientationInterpolator219->setDEF(QString("Stop_vt7_RotationInterpolator"));
SoOrientationInterpolator219->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator219->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup192->addChild(*SoOrientationInterpolator219);

SoOrientationInterpolator* SoOrientationInterpolator220 = new SoOrientationInterpolator();
SoOrientationInterpolator220->setDEF(QString("Stop_vt6_RotationInterpolator"));
SoOrientationInterpolator220->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator220->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup192->addChild(*SoOrientationInterpolator220);

SoOrientationInterpolator* SoOrientationInterpolator221 = new SoOrientationInterpolator();
SoOrientationInterpolator221->setDEF(QString("Stop_vt5_RotationInterpolator"));
SoOrientationInterpolator221->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator221->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup192->addChild(*SoOrientationInterpolator221);

SoOrientationInterpolator* SoOrientationInterpolator222 = new SoOrientationInterpolator();
SoOrientationInterpolator222->setDEF(QString("Stop_vt4_RotationInterpolator"));
SoOrientationInterpolator222->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator222->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup192->addChild(*SoOrientationInterpolator222);

SoOrientationInterpolator* SoOrientationInterpolator223 = new SoOrientationInterpolator();
SoOrientationInterpolator223->setDEF(QString("Stop_vt3_RotationInterpolator"));
SoOrientationInterpolator223->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator223->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup192->addChild(*SoOrientationInterpolator223);

SoOrientationInterpolator* SoOrientationInterpolator224 = new SoOrientationInterpolator();
SoOrientationInterpolator224->setDEF(QString("Stop_vt2_RotationInterpolator"));
SoOrientationInterpolator224->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator224->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup192->addChild(*SoOrientationInterpolator224);

SoOrientationInterpolator* SoOrientationInterpolator225 = new SoOrientationInterpolator();
SoOrientationInterpolator225->setDEF(QString("Stop_vt1_RotationInterpolator"));
SoOrientationInterpolator225->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator225->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup192->addChild(*SoOrientationInterpolator225);

SoOrientationInterpolator* SoOrientationInterpolator226 = new SoOrientationInterpolator();
SoOrientationInterpolator226->setDEF(QString("Stop_vc7_RotationInterpolator"));
SoOrientationInterpolator226->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator226->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup192->addChild(*SoOrientationInterpolator226);

SoOrientationInterpolator* SoOrientationInterpolator227 = new SoOrientationInterpolator();
SoOrientationInterpolator227->setDEF(QString("Stop_vc6_RotationInterpolator"));
SoOrientationInterpolator227->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator227->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup192->addChild(*SoOrientationInterpolator227);

SoOrientationInterpolator* SoOrientationInterpolator228 = new SoOrientationInterpolator();
SoOrientationInterpolator228->setDEF(QString("Stop_vc5_RotationInterpolator"));
SoOrientationInterpolator228->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator228->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup192->addChild(*SoOrientationInterpolator228);

SoOrientationInterpolator* SoOrientationInterpolator229 = new SoOrientationInterpolator();
SoOrientationInterpolator229->setDEF(QString("Stop_vc4_RotationInterpolator"));
SoOrientationInterpolator229->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator229->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup192->addChild(*SoOrientationInterpolator229);

SoOrientationInterpolator* SoOrientationInterpolator230 = new SoOrientationInterpolator();
SoOrientationInterpolator230->setDEF(QString("Stop_vc3_RotationInterpolator"));
SoOrientationInterpolator230->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator230->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup192->addChild(*SoOrientationInterpolator230);

SoOrientationInterpolator* SoOrientationInterpolator231 = new SoOrientationInterpolator();
SoOrientationInterpolator231->setDEF(QString("Stop_vc2_RotationInterpolator"));
SoOrientationInterpolator231->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator231->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup192->addChild(*SoOrientationInterpolator231);

SoOrientationInterpolator* SoOrientationInterpolator232 = new SoOrientationInterpolator();
SoOrientationInterpolator232->setDEF(QString("Stop_vc1_RotationInterpolator"));
SoOrientationInterpolator232->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator232->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup192->addChild(*SoOrientationInterpolator232);

SoOrientationInterpolator* SoOrientationInterpolator233 = new SoOrientationInterpolator();
SoOrientationInterpolator233->setDEF(QString("Stop_skullbase_RotationInterpolator"));
SoOrientationInterpolator233->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator233->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup192->addChild(*SoOrientationInterpolator233);

SoOrientationInterpolator* SoOrientationInterpolator234 = new SoOrientationInterpolator();
SoOrientationInterpolator234->setDEF(QString("Stop_l_eyeball_joint_RotationInterpolator"));
SoOrientationInterpolator234->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator234->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup192->addChild(*SoOrientationInterpolator234);

SoOrientationInterpolator* SoOrientationInterpolator235 = new SoOrientationInterpolator();
SoOrientationInterpolator235->setDEF(QString("Stop_r_eyeball_joint_RotationInterpolator"));
SoOrientationInterpolator235->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator235->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup192->addChild(*SoOrientationInterpolator235);

SoOrientationInterpolator* SoOrientationInterpolator236 = new SoOrientationInterpolator();
SoOrientationInterpolator236->setDEF(QString("Stop_l_sternoclavicular_RotationInterpolator"));
SoOrientationInterpolator236->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator236->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup192->addChild(*SoOrientationInterpolator236);

SoOrientationInterpolator* SoOrientationInterpolator237 = new SoOrientationInterpolator();
SoOrientationInterpolator237->setDEF(QString("Stop_l_acromioclavicular_RotationInterpolator"));
SoOrientationInterpolator237->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator237->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup192->addChild(*SoOrientationInterpolator237);

SoOrientationInterpolator* SoOrientationInterpolator238 = new SoOrientationInterpolator();
SoOrientationInterpolator238->setDEF(QString("Stop_l_shoulder_RotationInterpolator"));
SoOrientationInterpolator238->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator238->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup192->addChild(*SoOrientationInterpolator238);

SoOrientationInterpolator* SoOrientationInterpolator239 = new SoOrientationInterpolator();
SoOrientationInterpolator239->setDEF(QString("Stop_l_elbow_RotationInterpolator"));
SoOrientationInterpolator239->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator239->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup192->addChild(*SoOrientationInterpolator239);

SoOrientationInterpolator* SoOrientationInterpolator240 = new SoOrientationInterpolator();
SoOrientationInterpolator240->setDEF(QString("Stop_l_wrist_RotationInterpolator"));
SoOrientationInterpolator240->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator240->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup192->addChild(*SoOrientationInterpolator240);

SoOrientationInterpolator* SoOrientationInterpolator241 = new SoOrientationInterpolator();
SoOrientationInterpolator241->setDEF(QString("Stop_l_thumb1_RotationInterpolator"));
SoOrientationInterpolator241->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator241->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup192->addChild(*SoOrientationInterpolator241);

SoOrientationInterpolator* SoOrientationInterpolator242 = new SoOrientationInterpolator();
SoOrientationInterpolator242->setDEF(QString("Stop_l_thumb2_RotationInterpolator"));
SoOrientationInterpolator242->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator242->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup192->addChild(*SoOrientationInterpolator242);

SoOrientationInterpolator* SoOrientationInterpolator243 = new SoOrientationInterpolator();
SoOrientationInterpolator243->setDEF(QString("Stop_l_thumb3_RotationInterpolator"));
SoOrientationInterpolator243->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator243->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup192->addChild(*SoOrientationInterpolator243);

SoOrientationInterpolator* SoOrientationInterpolator244 = new SoOrientationInterpolator();
SoOrientationInterpolator244->setDEF(QString("Stop_l_index0_RotationInterpolator"));
SoOrientationInterpolator244->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator244->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup192->addChild(*SoOrientationInterpolator244);

SoOrientationInterpolator* SoOrientationInterpolator245 = new SoOrientationInterpolator();
SoOrientationInterpolator245->setDEF(QString("Stop_l_index1_RotationInterpolator"));
SoOrientationInterpolator245->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator245->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup192->addChild(*SoOrientationInterpolator245);

SoOrientationInterpolator* SoOrientationInterpolator246 = new SoOrientationInterpolator();
SoOrientationInterpolator246->setDEF(QString("Stop_l_index2_RotationInterpolator"));
SoOrientationInterpolator246->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator246->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup192->addChild(*SoOrientationInterpolator246);

SoOrientationInterpolator* SoOrientationInterpolator247 = new SoOrientationInterpolator();
SoOrientationInterpolator247->setDEF(QString("Stop_l_index3_RotationInterpolator"));
SoOrientationInterpolator247->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator247->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup192->addChild(*SoOrientationInterpolator247);

SoOrientationInterpolator* SoOrientationInterpolator248 = new SoOrientationInterpolator();
SoOrientationInterpolator248->setDEF(QString("Stop_l_middle0_RotationInterpolator"));
SoOrientationInterpolator248->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator248->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup192->addChild(*SoOrientationInterpolator248);

SoOrientationInterpolator* SoOrientationInterpolator249 = new SoOrientationInterpolator();
SoOrientationInterpolator249->setDEF(QString("Stop_l_middle1_RotationInterpolator"));
SoOrientationInterpolator249->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator249->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup192->addChild(*SoOrientationInterpolator249);

SoOrientationInterpolator* SoOrientationInterpolator250 = new SoOrientationInterpolator();
SoOrientationInterpolator250->setDEF(QString("Stop_l_middle2_RotationInterpolator"));
SoOrientationInterpolator250->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator250->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup192->addChild(*SoOrientationInterpolator250);

SoOrientationInterpolator* SoOrientationInterpolator251 = new SoOrientationInterpolator();
SoOrientationInterpolator251->setDEF(QString("Stop_l_middle3_RotationInterpolator"));
SoOrientationInterpolator251->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator251->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup192->addChild(*SoOrientationInterpolator251);

SoOrientationInterpolator* SoOrientationInterpolator252 = new SoOrientationInterpolator();
SoOrientationInterpolator252->setDEF(QString("Stop_l_ring0_RotationInterpolator"));
SoOrientationInterpolator252->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator252->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup192->addChild(*SoOrientationInterpolator252);

SoOrientationInterpolator* SoOrientationInterpolator253 = new SoOrientationInterpolator();
SoOrientationInterpolator253->setDEF(QString("Stop_l_ring1_RotationInterpolator"));
SoOrientationInterpolator253->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator253->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup192->addChild(*SoOrientationInterpolator253);

SoOrientationInterpolator* SoOrientationInterpolator254 = new SoOrientationInterpolator();
SoOrientationInterpolator254->setDEF(QString("Stop_l_ring2_RotationInterpolator"));
SoOrientationInterpolator254->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator254->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup192->addChild(*SoOrientationInterpolator254);

SoOrientationInterpolator* SoOrientationInterpolator255 = new SoOrientationInterpolator();
SoOrientationInterpolator255->setDEF(QString("Stop_l_ring3_RotationInterpolator"));
SoOrientationInterpolator255->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator255->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup192->addChild(*SoOrientationInterpolator255);

SoOrientationInterpolator* SoOrientationInterpolator256 = new SoOrientationInterpolator();
SoOrientationInterpolator256->setDEF(QString("Stop_l_pinky0_RotationInterpolator"));
SoOrientationInterpolator256->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator256->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup192->addChild(*SoOrientationInterpolator256);

SoOrientationInterpolator* SoOrientationInterpolator257 = new SoOrientationInterpolator();
SoOrientationInterpolator257->setDEF(QString("Stop_l_pinky1_RotationInterpolator"));
SoOrientationInterpolator257->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator257->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup192->addChild(*SoOrientationInterpolator257);

SoOrientationInterpolator* SoOrientationInterpolator258 = new SoOrientationInterpolator();
SoOrientationInterpolator258->setDEF(QString("Stop_l_pinky2_RotationInterpolator"));
SoOrientationInterpolator258->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator258->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup192->addChild(*SoOrientationInterpolator258);

SoOrientationInterpolator* SoOrientationInterpolator259 = new SoOrientationInterpolator();
SoOrientationInterpolator259->setDEF(QString("Stop_l_pinky3_RotationInterpolator"));
SoOrientationInterpolator259->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator259->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup192->addChild(*SoOrientationInterpolator259);

SoOrientationInterpolator* SoOrientationInterpolator260 = new SoOrientationInterpolator();
SoOrientationInterpolator260->setDEF(QString("Stop_r_sternoclavicular_RotationInterpolator"));
SoOrientationInterpolator260->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator260->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup192->addChild(*SoOrientationInterpolator260);

SoOrientationInterpolator* SoOrientationInterpolator261 = new SoOrientationInterpolator();
SoOrientationInterpolator261->setDEF(QString("Stop_r_acromioclavicular_RotationInterpolator"));
SoOrientationInterpolator261->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator261->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup192->addChild(*SoOrientationInterpolator261);

SoOrientationInterpolator* SoOrientationInterpolator262 = new SoOrientationInterpolator();
SoOrientationInterpolator262->setDEF(QString("Stop_r_shoulder_RotationInterpolator"));
SoOrientationInterpolator262->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator262->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup192->addChild(*SoOrientationInterpolator262);

SoOrientationInterpolator* SoOrientationInterpolator263 = new SoOrientationInterpolator();
SoOrientationInterpolator263->setDEF(QString("Stop_r_elbow_RotationInterpolator"));
SoOrientationInterpolator263->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator263->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup192->addChild(*SoOrientationInterpolator263);

SoOrientationInterpolator* SoOrientationInterpolator264 = new SoOrientationInterpolator();
SoOrientationInterpolator264->setDEF(QString("Stop_r_wrist_RotationInterpolator"));
SoOrientationInterpolator264->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator264->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup192->addChild(*SoOrientationInterpolator264);

SoOrientationInterpolator* SoOrientationInterpolator265 = new SoOrientationInterpolator();
SoOrientationInterpolator265->setDEF(QString("Stop_r_thumb1_RotationInterpolator"));
SoOrientationInterpolator265->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator265->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup192->addChild(*SoOrientationInterpolator265);

SoOrientationInterpolator* SoOrientationInterpolator266 = new SoOrientationInterpolator();
SoOrientationInterpolator266->setDEF(QString("Stop_r_thumb2_RotationInterpolator"));
SoOrientationInterpolator266->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator266->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup192->addChild(*SoOrientationInterpolator266);

SoOrientationInterpolator* SoOrientationInterpolator267 = new SoOrientationInterpolator();
SoOrientationInterpolator267->setDEF(QString("Stop_r_thumb3_RotationInterpolator"));
SoOrientationInterpolator267->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator267->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup192->addChild(*SoOrientationInterpolator267);

SoOrientationInterpolator* SoOrientationInterpolator268 = new SoOrientationInterpolator();
SoOrientationInterpolator268->setDEF(QString("Stop_r_index0_RotationInterpolator"));
SoOrientationInterpolator268->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator268->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup192->addChild(*SoOrientationInterpolator268);

SoOrientationInterpolator* SoOrientationInterpolator269 = new SoOrientationInterpolator();
SoOrientationInterpolator269->setDEF(QString("Stop_r_index1_RotationInterpolator"));
SoOrientationInterpolator269->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator269->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup192->addChild(*SoOrientationInterpolator269);

SoOrientationInterpolator* SoOrientationInterpolator270 = new SoOrientationInterpolator();
SoOrientationInterpolator270->setDEF(QString("Stop_r_index2_RotationInterpolator"));
SoOrientationInterpolator270->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator270->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup192->addChild(*SoOrientationInterpolator270);

SoOrientationInterpolator* SoOrientationInterpolator271 = new SoOrientationInterpolator();
SoOrientationInterpolator271->setDEF(QString("Stop_r_index3_RotationInterpolator"));
SoOrientationInterpolator271->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator271->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup192->addChild(*SoOrientationInterpolator271);

SoOrientationInterpolator* SoOrientationInterpolator272 = new SoOrientationInterpolator();
SoOrientationInterpolator272->setDEF(QString("Stop_r_middle0_RotationInterpolator"));
SoOrientationInterpolator272->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator272->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup192->addChild(*SoOrientationInterpolator272);

SoOrientationInterpolator* SoOrientationInterpolator273 = new SoOrientationInterpolator();
SoOrientationInterpolator273->setDEF(QString("Stop_r_middle1_RotationInterpolator"));
SoOrientationInterpolator273->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator273->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup192->addChild(*SoOrientationInterpolator273);

SoOrientationInterpolator* SoOrientationInterpolator274 = new SoOrientationInterpolator();
SoOrientationInterpolator274->setDEF(QString("Stop_r_middle2_RotationInterpolator"));
SoOrientationInterpolator274->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator274->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup192->addChild(*SoOrientationInterpolator274);

SoOrientationInterpolator* SoOrientationInterpolator275 = new SoOrientationInterpolator();
SoOrientationInterpolator275->setDEF(QString("Stop_r_middle3_RotationInterpolator"));
SoOrientationInterpolator275->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator275->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup192->addChild(*SoOrientationInterpolator275);

SoOrientationInterpolator* SoOrientationInterpolator276 = new SoOrientationInterpolator();
SoOrientationInterpolator276->setDEF(QString("Stop_r_ring0_RotationInterpolator"));
SoOrientationInterpolator276->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator276->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup192->addChild(*SoOrientationInterpolator276);

SoOrientationInterpolator* SoOrientationInterpolator277 = new SoOrientationInterpolator();
SoOrientationInterpolator277->setDEF(QString("Stop_r_ring1_RotationInterpolator"));
SoOrientationInterpolator277->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator277->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup192->addChild(*SoOrientationInterpolator277);

SoOrientationInterpolator* SoOrientationInterpolator278 = new SoOrientationInterpolator();
SoOrientationInterpolator278->setDEF(QString("Stop_r_ring2_RotationInterpolator"));
SoOrientationInterpolator278->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator278->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup192->addChild(*SoOrientationInterpolator278);

SoOrientationInterpolator* SoOrientationInterpolator279 = new SoOrientationInterpolator();
SoOrientationInterpolator279->setDEF(QString("Stop_r_ring3_RotationInterpolator"));
SoOrientationInterpolator279->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator279->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup192->addChild(*SoOrientationInterpolator279);

SoOrientationInterpolator* SoOrientationInterpolator280 = new SoOrientationInterpolator();
SoOrientationInterpolator280->setDEF(QString("Stop_r_pinky0_RotationInterpolator"));
SoOrientationInterpolator280->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator280->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup192->addChild(*SoOrientationInterpolator280);

SoOrientationInterpolator* SoOrientationInterpolator281 = new SoOrientationInterpolator();
SoOrientationInterpolator281->setDEF(QString("Stop_r_pinky1_RotationInterpolator"));
SoOrientationInterpolator281->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator281->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup192->addChild(*SoOrientationInterpolator281);

SoOrientationInterpolator* SoOrientationInterpolator282 = new SoOrientationInterpolator();
SoOrientationInterpolator282->setDEF(QString("Stop_r_pinky2_RotationInterpolator"));
SoOrientationInterpolator282->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator282->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup192->addChild(*SoOrientationInterpolator282);

SoOrientationInterpolator* SoOrientationInterpolator283 = new SoOrientationInterpolator();
SoOrientationInterpolator283->setDEF(QString("Stop_r_pinky3_RotationInterpolator"));
SoOrientationInterpolator283->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator283->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup192->addChild(*SoOrientationInterpolator283);

SoNode32->addChild(*SoGroup192);

SoGroup* SoGroup284 = new SoGroup();
SoGroup284->setDEF(QString("StandAnimation"));
SoTimeSensor* SoTimeSensor285 = new SoTimeSensor();
SoTimeSensor285->setDEF(QString("StandTimer"));
SoTimeSensor285->setCycleInterval(5.73);
SoTimeSensor285->setLoop(true);
SoGroup284->addChild(*SoTimeSensor285);

SoOrientationInterpolator* SoOrientationInterpolator286 = new SoOrientationInterpolator();
SoOrientationInterpolator286->setDEF(QString("Stand_r_metatarsal_PitchInterpolator"));
SoOrientationInterpolator286->setKey(new float[]{0.0,0.2,0.4,0.6,0.7,1.0}, 6);
SoOrientationInterpolator286->setKeyValue(new float[]{1.0,0.0,0.0,0.0,-1.0,0.0,0.0,0.015,1.0,0.0,0.0,0.17,-1.0,0.0,0.0,0.025,1.0,0.0,0.0,0.01,1.0,0.0,0.0,0.0}, 24);
SoGroup284->addChild(*SoOrientationInterpolator286);

SoOrientationInterpolator* SoOrientationInterpolator287 = new SoOrientationInterpolator();
SoOrientationInterpolator287->setDEF(QString("Stand_r_ankle_RotationInterpolator"));
SoOrientationInterpolator287->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator287->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup284->addChild(*SoOrientationInterpolator287);

SoOrientationInterpolator* SoOrientationInterpolator288 = new SoOrientationInterpolator();
SoOrientationInterpolator288->setDEF(QString("Stand_r_knee_RotationInterpolator"));
SoOrientationInterpolator288->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator288->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup284->addChild(*SoOrientationInterpolator288);

SoOrientationInterpolator* SoOrientationInterpolator289 = new SoOrientationInterpolator();
SoOrientationInterpolator289->setDEF(QString("Stand_r_hip_RotationInterpolator"));
SoOrientationInterpolator289->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator289->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup284->addChild(*SoOrientationInterpolator289);

SoOrientationInterpolator* SoOrientationInterpolator290 = new SoOrientationInterpolator();
SoOrientationInterpolator290->setDEF(QString("Stand_l_ankle_RotationInterpolator"));
SoOrientationInterpolator290->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator290->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup284->addChild(*SoOrientationInterpolator290);

SoOrientationInterpolator* SoOrientationInterpolator291 = new SoOrientationInterpolator();
SoOrientationInterpolator291->setDEF(QString("Stand_l_knee_RotationInterpolator"));
SoOrientationInterpolator291->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator291->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup284->addChild(*SoOrientationInterpolator291);

SoOrientationInterpolator* SoOrientationInterpolator292 = new SoOrientationInterpolator();
SoOrientationInterpolator292->setDEF(QString("Stand_l_hip_RotationInterpolator"));
SoOrientationInterpolator292->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator292->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup284->addChild(*SoOrientationInterpolator292);

SoOrientationInterpolator* SoOrientationInterpolator293 = new SoOrientationInterpolator();
SoOrientationInterpolator293->setDEF(QString("Stand_r_wrist_RotationInterpolator"));
SoOrientationInterpolator293->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator293->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,-1.0,0.25,0.0,0.0,1.0,0.0}, 12);
SoGroup284->addChild(*SoOrientationInterpolator293);

SoOrientationInterpolator* SoOrientationInterpolator294 = new SoOrientationInterpolator();
SoOrientationInterpolator294->setDEF(QString("Stand_r_elbow_RotationInterpolator"));
SoOrientationInterpolator294->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator294->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup284->addChild(*SoOrientationInterpolator294);

SoOrientationInterpolator* SoOrientationInterpolator295 = new SoOrientationInterpolator();
SoOrientationInterpolator295->setDEF(QString("Stand_r_shoulder_RotationInterpolator"));
SoOrientationInterpolator295->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator295->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup284->addChild(*SoOrientationInterpolator295);

SoOrientationInterpolator* SoOrientationInterpolator296 = new SoOrientationInterpolator();
SoOrientationInterpolator296->setDEF(QString("Stand_l_wrist_RotationInterpolator"));
SoOrientationInterpolator296->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator296->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup284->addChild(*SoOrientationInterpolator296);

SoOrientationInterpolator* SoOrientationInterpolator297 = new SoOrientationInterpolator();
SoOrientationInterpolator297->setDEF(QString("Stand_l_elbow_RotationInterpolator"));
SoOrientationInterpolator297->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator297->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup284->addChild(*SoOrientationInterpolator297);

SoOrientationInterpolator* SoOrientationInterpolator298 = new SoOrientationInterpolator();
SoOrientationInterpolator298->setDEF(QString("Stand_l_shoulder_RotationInterpolator"));
SoOrientationInterpolator298->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator298->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup284->addChild(*SoOrientationInterpolator298);

SoOrientationInterpolator* SoOrientationInterpolator299 = new SoOrientationInterpolator();
SoOrientationInterpolator299->setDEF(QString("Stand_head_RotationInterpolator"));
SoOrientationInterpolator299->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator299->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup284->addChild(*SoOrientationInterpolator299);

SoOrientationInterpolator* SoOrientationInterpolator300 = new SoOrientationInterpolator();
SoOrientationInterpolator300->setDEF(QString("Stand_neck_RotationInterpolator"));
SoOrientationInterpolator300->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator300->setKeyValue(new float[]{0.0,0.0,1.0,0.0,-1.0,0.0,0.0,0.5,0.0,0.0,1.0,0.0}, 12);
SoGroup284->addChild(*SoOrientationInterpolator300);

SoOrientationInterpolator* SoOrientationInterpolator301 = new SoOrientationInterpolator();
SoOrientationInterpolator301->setDEF(QString("Stand_l_eyeball_RotationInterpolator"));
SoOrientationInterpolator301->setKey(new float[]{0.0,0.4,0.7,1.0}, 4);
SoOrientationInterpolator301->setKeyValue(new float[]{0.0,0.0,1.0,0.0,-1.0,0.0,0.0,0.5,1.0,0.0,0.0,0.45,0.0,0.0,1.0,0.0}, 16);
SoGroup284->addChild(*SoOrientationInterpolator301);

SoOrientationInterpolator* SoOrientationInterpolator302 = new SoOrientationInterpolator();
SoOrientationInterpolator302->setDEF(QString("Stand_r_eyeball_RotationInterpolator"));
SoOrientationInterpolator302->setKey(new float[]{0.0,0.4,0.7,1.0}, 4);
SoOrientationInterpolator302->setKeyValue(new float[]{0.0,0.0,1.0,0.0,-1.0,0.0,0.0,0.5,1.0,0.0,0.0,0.45,0.0,0.0,1.0,0.0}, 16);
SoGroup284->addChild(*SoOrientationInterpolator302);

SoOrientationInterpolator* SoOrientationInterpolator303 = new SoOrientationInterpolator();
SoOrientationInterpolator303->setDEF(QString("Stand_lower_body_RotationInterpolator"));
SoOrientationInterpolator303->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator303->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup284->addChild(*SoOrientationInterpolator303);

SoOrientationInterpolator* SoOrientationInterpolator304 = new SoOrientationInterpolator();
SoOrientationInterpolator304->setDEF(QString("Stand_upper_body_RotationInterpolator"));
SoOrientationInterpolator304->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator304->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup284->addChild(*SoOrientationInterpolator304);

SoOrientationInterpolator* SoOrientationInterpolator305 = new SoOrientationInterpolator();
SoOrientationInterpolator305->setDEF(QString("Stand_whole_body_RotationInterpolator"));
SoOrientationInterpolator305->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator305->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup284->addChild(*SoOrientationInterpolator305);

SoPositionInterpolator* SoPositionInterpolator306 = new SoPositionInterpolator();
SoPositionInterpolator306->setDEF(QString("Stand_whole_body_TranslationInterpolator"));
SoPositionInterpolator306->setKey(new float[]{0.0,0.5,1.0}, 3);
SoPositionInterpolator306->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 9);
SoGroup284->addChild(*SoPositionInterpolator306);

SoOrientationInterpolator* SoOrientationInterpolator307 = new SoOrientationInterpolator();
SoOrientationInterpolator307->setDEF(QString("Stand_l_sternoclavicular_RollInterpolator"));
SoOrientationInterpolator307->setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator307->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 24);
SoGroup284->addChild(*SoOrientationInterpolator307);

SoOrientationInterpolator* SoOrientationInterpolator308 = new SoOrientationInterpolator();
SoOrientationInterpolator308->setDEF(QString("Stand_l_acromioclavicular_RollInterpolator"));
SoOrientationInterpolator308->setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator308->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 24);
SoGroup284->addChild(*SoOrientationInterpolator308);

SoOrientationInterpolator* SoOrientationInterpolator309 = new SoOrientationInterpolator();
SoOrientationInterpolator309->setDEF(QString("Stand_r_sternoclavicular_RollInterpolator"));
SoOrientationInterpolator309->setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator309->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 24);
SoGroup284->addChild(*SoOrientationInterpolator309);

SoOrientationInterpolator* SoOrientationInterpolator310 = new SoOrientationInterpolator();
SoOrientationInterpolator310->setDEF(QString("Stand_r_acromioclavicular_RollInterpolator"));
SoOrientationInterpolator310->setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator310->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 24);
SoGroup284->addChild(*SoOrientationInterpolator310);

SoOrientationInterpolator* SoOrientationInterpolator311 = new SoOrientationInterpolator();
SoOrientationInterpolator311->setDEF(QString("Stand_sacroiliac_YawInterpolator"));
SoOrientationInterpolator311->setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator311->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 24);
SoGroup284->addChild(*SoOrientationInterpolator311);

SoOrientationInterpolator* SoOrientationInterpolator312 = new SoOrientationInterpolator();
SoOrientationInterpolator312->setDEF(QString("Stand_vl5_YawInterpolator"));
SoOrientationInterpolator312->setKey(new float[]{0.0,0.2,0.4,0.5,0.6,0.8,1.0}, 7);
SoOrientationInterpolator312->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 28);
SoGroup284->addChild(*SoOrientationInterpolator312);

SoOrientationInterpolator* SoOrientationInterpolator313 = new SoOrientationInterpolator();
SoOrientationInterpolator313->setDEF(QString("Stand_vc6_YawInterpolator"));
SoOrientationInterpolator313->setKey(new float[]{0.0,0.2,0.4,0.5,0.6,0.8,1.0}, 7);
SoOrientationInterpolator313->setKeyValue(new float[]{0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,-1.0,0.0,0.0,0.0,0.0,-1.0,0.0,0.0,0.0,1.0,0.0,0.0}, 28);
SoGroup284->addChild(*SoOrientationInterpolator313);

SoOrientationInterpolator* SoOrientationInterpolator314 = new SoOrientationInterpolator();
SoOrientationInterpolator314->setDEF(QString("Stand_l_thumb1_PitchInterpolator"));
SoOrientationInterpolator314->setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator314->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 24);
SoGroup284->addChild(*SoOrientationInterpolator314);

SoOrientationInterpolator* SoOrientationInterpolator315 = new SoOrientationInterpolator();
SoOrientationInterpolator315->setDEF(QString("Stand_r_thumb1_PitchInterpolator"));
SoOrientationInterpolator315->setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator315->setKeyValue(new float[]{1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.5,1.0,0.0,0.0,0.1,1.0,0.0,0.0,0.27,1.0,0.0,0.0,0.2,1.0,0.0,0.0,0.0}, 24);
SoGroup284->addChild(*SoOrientationInterpolator315);

SoOrientationInterpolator* SoOrientationInterpolator316 = new SoOrientationInterpolator();
SoOrientationInterpolator316->setDEF(QString("Stand_r_index1_RollInterpolator"));
SoOrientationInterpolator316->setKey(new float[]{0.0,0.2,0.4,0.5,0.8,1.0}, 6);
SoOrientationInterpolator316->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.1,0.0,0.0,1.0,0.2,0.0,0.0,1.0,0.3,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 24);
SoGroup284->addChild(*SoOrientationInterpolator316);

SoOrientationInterpolator* SoOrientationInterpolator317 = new SoOrientationInterpolator();
SoOrientationInterpolator317->setDEF(QString("Stand_r_index2_RollInterpolator"));
SoOrientationInterpolator317->setKey(new float[]{0.0,0.2,0.4,0.5,0.8,1.0}, 6);
SoOrientationInterpolator317->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.4,0.0,0.0,1.0,0.32,0.0,0.0,1.0,0.25,0.0,0.0,1.0,0.2,0.0,0.0,1.0,0.0}, 24);
SoGroup284->addChild(*SoOrientationInterpolator317);

SoOrientationInterpolator* SoOrientationInterpolator318 = new SoOrientationInterpolator();
SoOrientationInterpolator318->setDEF(QString("Stand_r_index3_RollInterpolator"));
SoOrientationInterpolator318->setKey(new float[]{0.0,0.2,0.4,0.5,0.8,1.0}, 6);
SoOrientationInterpolator318->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.2,0.0,0.0,1.0,0.3,0.0,0.0,1.0,0.35,0.0,0.0,1.0,0.2,0.0,0.0,1.0,0.0}, 24);
SoGroup284->addChild(*SoOrientationInterpolator318);

SoNode32->addChild(*SoGroup284);

SoGroup* SoGroup319 = new SoGroup();
SoGroup319->setDEF(QString("PitchesAnimation"));
SoTimeSensor* SoTimeSensor320 = new SoTimeSensor();
SoTimeSensor320->setDEF(QString("PitchTimer"));
SoTimeSensor320->setCycleInterval(5.73);
SoTimeSensor320->setLoop(true);
SoGroup319->addChild(*SoTimeSensor320);

SoOrientationInterpolator* SoOrientationInterpolator321 = new SoOrientationInterpolator();
SoOrientationInterpolator321->setDEF(QString("Pitch_r_metatarsal_PitchInterpolator"));
SoOrientationInterpolator321->setKey(new float[]{0.0,0.2,0.4,0.6,0.7,1.0}, 6);
SoOrientationInterpolator321->setKeyValue(new float[]{1.0,0.0,0.0,0.0,-1.0,0.0,0.0,0.5,-1.0,0.0,0.0,0.7,1.0,0.0,0.0,0.75,-1.0,0.0,0.0,0.2,1.0,0.0,0.0,0.0}, 24);
SoGroup319->addChild(*SoOrientationInterpolator321);

SoOrientationInterpolator* SoOrientationInterpolator322 = new SoOrientationInterpolator();
SoOrientationInterpolator322->setDEF(QString("Pitches_r_ankle_RotationInterpolator"));
SoOrientationInterpolator322->setKey(new float[]{0.0,0.25,0.5,0.75,1.0}, 5);
SoOrientationInterpolator322->setKeyValue(new float[]{0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.5,0.0,0.0,1.0,0.0,-1.0,0.0,0.0,1.5,0.0,0.0,1.0,0.0}, 20);
SoGroup319->addChild(*SoOrientationInterpolator322);

SoOrientationInterpolator* SoOrientationInterpolator323 = new SoOrientationInterpolator();
SoOrientationInterpolator323->setDEF(QString("Pitches_r_knee_RotationInterpolator"));
SoOrientationInterpolator323->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator323->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup319->addChild(*SoOrientationInterpolator323);

SoOrientationInterpolator* SoOrientationInterpolator324 = new SoOrientationInterpolator();
SoOrientationInterpolator324->setDEF(QString("Pitches_r_hip_RotationInterpolator"));
SoOrientationInterpolator324->setKey(new float[]{0.0,0.25,0.5,0.75,1.0}, 5);
SoOrientationInterpolator324->setKeyValue(new float[]{0.0,0.0,1.0,0.0,-1.0,0.0,0.0,1.5,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.5,0.0,0.0,1.0,0.0}, 20);
SoGroup319->addChild(*SoOrientationInterpolator324);

SoOrientationInterpolator* SoOrientationInterpolator325 = new SoOrientationInterpolator();
SoOrientationInterpolator325->setDEF(QString("Pitches_l_ankle_RotationInterpolator"));
SoOrientationInterpolator325->setKey(new float[]{0.0,0.25,0.5,0.75,1.0}, 5);
SoOrientationInterpolator325->setKeyValue(new float[]{0.0,0.0,1.0,0.0,-1.0,0.0,0.0,1.5,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.5,0.0,0.0,1.0,0.0}, 20);
SoGroup319->addChild(*SoOrientationInterpolator325);

SoOrientationInterpolator* SoOrientationInterpolator326 = new SoOrientationInterpolator();
SoOrientationInterpolator326->setDEF(QString("Pitches_l_knee_RotationInterpolator"));
SoOrientationInterpolator326->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator326->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup319->addChild(*SoOrientationInterpolator326);

SoOrientationInterpolator* SoOrientationInterpolator327 = new SoOrientationInterpolator();
SoOrientationInterpolator327->setDEF(QString("Pitches_l_hip_RotationInterpolator"));
SoOrientationInterpolator327->setKey(new float[]{0.0,0.25,0.5,0.75,1.0}, 5);
SoOrientationInterpolator327->setKeyValue(new float[]{0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.5,0.0,0.0,1.0,0.0,-1.0,0.0,0.0,1.5,0.0,0.0,1.0,0.0}, 20);
SoGroup319->addChild(*SoOrientationInterpolator327);

SoOrientationInterpolator* SoOrientationInterpolator328 = new SoOrientationInterpolator();
SoOrientationInterpolator328->setDEF(QString("Pitches_r_wrist_RotationInterpolator"));
SoOrientationInterpolator328->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator328->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup319->addChild(*SoOrientationInterpolator328);

SoOrientationInterpolator* SoOrientationInterpolator329 = new SoOrientationInterpolator();
SoOrientationInterpolator329->setDEF(QString("Pitches_r_elbow_RotationInterpolator"));
SoOrientationInterpolator329->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator329->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup319->addChild(*SoOrientationInterpolator329);

SoOrientationInterpolator* SoOrientationInterpolator330 = new SoOrientationInterpolator();
SoOrientationInterpolator330->setDEF(QString("Pitches_r_shoulder_RotationInterpolator"));
SoOrientationInterpolator330->setKey(new float[]{0.0,0.25,0.5,0.75,1.0}, 5);
SoOrientationInterpolator330->setKeyValue(new float[]{0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.5,0.0,0.0,1.0,0.0,-1.0,0.0,0.0,1.5,0.0,0.0,1.0,0.0}, 20);
SoGroup319->addChild(*SoOrientationInterpolator330);

SoOrientationInterpolator* SoOrientationInterpolator331 = new SoOrientationInterpolator();
SoOrientationInterpolator331->setDEF(QString("Pitches_l_wrist_RotationInterpolator"));
SoOrientationInterpolator331->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator331->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup319->addChild(*SoOrientationInterpolator331);

SoOrientationInterpolator* SoOrientationInterpolator332 = new SoOrientationInterpolator();
SoOrientationInterpolator332->setDEF(QString("Pitches_l_elbow_RotationInterpolator"));
SoOrientationInterpolator332->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator332->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup319->addChild(*SoOrientationInterpolator332);

SoOrientationInterpolator* SoOrientationInterpolator333 = new SoOrientationInterpolator();
SoOrientationInterpolator333->setDEF(QString("Pitches_l_shoulder_RotationInterpolator"));
SoOrientationInterpolator333->setKey(new float[]{0.0,0.25,0.5,0.75,1.0}, 5);
SoOrientationInterpolator333->setKeyValue(new float[]{0.0,0.0,1.0,0.0,-1.0,0.0,0.0,1.5,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.5,0.0,0.0,1.0,0.0}, 20);
SoGroup319->addChild(*SoOrientationInterpolator333);

SoOrientationInterpolator* SoOrientationInterpolator334 = new SoOrientationInterpolator();
SoOrientationInterpolator334->setDEF(QString("Pitches_head_RotationInterpolator"));
SoOrientationInterpolator334->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator334->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup319->addChild(*SoOrientationInterpolator334);

SoOrientationInterpolator* SoOrientationInterpolator335 = new SoOrientationInterpolator();
SoOrientationInterpolator335->setDEF(QString("Pitches_neck_RotationInterpolator"));
SoOrientationInterpolator335->setKey(new float[]{0.0,0.25,0.55,1.0}, 4);
SoOrientationInterpolator335->setKeyValue(new float[]{0.0,0.0,1.0,0.0,1.0,0.0,0.0,0.55,-1.0,0.0,0.0,1.05,0.0,0.0,1.0,0.0}, 16);
SoGroup319->addChild(*SoOrientationInterpolator335);

SoOrientationInterpolator* SoOrientationInterpolator336 = new SoOrientationInterpolator();
SoOrientationInterpolator336->setDEF(QString("Pitches_lower_body_RotationInterpolator"));
SoOrientationInterpolator336->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator336->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup319->addChild(*SoOrientationInterpolator336);

SoOrientationInterpolator* SoOrientationInterpolator337 = new SoOrientationInterpolator();
SoOrientationInterpolator337->setDEF(QString("Pitches_upper_body_RotationInterpolator"));
SoOrientationInterpolator337->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator337->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup319->addChild(*SoOrientationInterpolator337);

SoOrientationInterpolator* SoOrientationInterpolator338 = new SoOrientationInterpolator();
SoOrientationInterpolator338->setDEF(QString("Pitches_whole_body_RotationInterpolator"));
SoOrientationInterpolator338->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator338->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup319->addChild(*SoOrientationInterpolator338);

SoPositionInterpolator* SoPositionInterpolator339 = new SoPositionInterpolator();
SoPositionInterpolator339->setDEF(QString("Pitches_whole_body_TranslationInterpolator"));
SoPositionInterpolator339->setKey(new float[]{0.0,0.125,0.25,0.375,0.5,0.625,0.75,0.875,1.0}, 9);
SoPositionInterpolator339->setKeyValue(new float[]{0.0,0.0,0.0,0.0,-0.15,0.0,0.0,-0.7,0.0,0.0,-0.15,0.0,0.0,0.0,0.0,0.0,-0.15,0.0,0.0,-0.7,0.0,0.0,-0.15,0.0,0.0,0.0,0.0}, 27);
SoGroup319->addChild(*SoPositionInterpolator339);

SoOrientationInterpolator* SoOrientationInterpolator340 = new SoOrientationInterpolator();
SoOrientationInterpolator340->setDEF(QString("Pitch_l_sternoclavicular_RollInterpolator"));
SoOrientationInterpolator340->setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator340->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 24);
SoGroup319->addChild(*SoOrientationInterpolator340);

SoOrientationInterpolator* SoOrientationInterpolator341 = new SoOrientationInterpolator();
SoOrientationInterpolator341->setDEF(QString("Pitch_l_acromioclavicular_RollInterpolator"));
SoOrientationInterpolator341->setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator341->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 24);
SoGroup319->addChild(*SoOrientationInterpolator341);

SoOrientationInterpolator* SoOrientationInterpolator342 = new SoOrientationInterpolator();
SoOrientationInterpolator342->setDEF(QString("Pitch_r_sternoclavicular_RollInterpolator"));
SoOrientationInterpolator342->setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator342->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 24);
SoGroup319->addChild(*SoOrientationInterpolator342);

SoOrientationInterpolator* SoOrientationInterpolator343 = new SoOrientationInterpolator();
SoOrientationInterpolator343->setDEF(QString("Pitch_r_acromioclavicular_RollInterpolator"));
SoOrientationInterpolator343->setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator343->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 24);
SoGroup319->addChild(*SoOrientationInterpolator343);

SoOrientationInterpolator* SoOrientationInterpolator344 = new SoOrientationInterpolator();
SoOrientationInterpolator344->setDEF(QString("Pitch_sacroiliac_YawInterpolator"));
SoOrientationInterpolator344->setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator344->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 24);
SoGroup319->addChild(*SoOrientationInterpolator344);

SoOrientationInterpolator* SoOrientationInterpolator345 = new SoOrientationInterpolator();
SoOrientationInterpolator345->setDEF(QString("Pitch_vl5_YawInterpolator"));
SoOrientationInterpolator345->setKey(new float[]{0.0,0.2,0.4,0.5,0.6,0.8,1.0}, 7);
SoOrientationInterpolator345->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 28);
SoGroup319->addChild(*SoOrientationInterpolator345);

SoOrientationInterpolator* SoOrientationInterpolator346 = new SoOrientationInterpolator();
SoOrientationInterpolator346->setDEF(QString("Pitch_vc6_YawInterpolator"));
SoOrientationInterpolator346->setKey(new float[]{0.0,0.2,0.4,0.5,0.6,0.8,1.0}, 7);
SoOrientationInterpolator346->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 28);
SoGroup319->addChild(*SoOrientationInterpolator346);

SoOrientationInterpolator* SoOrientationInterpolator347 = new SoOrientationInterpolator();
SoOrientationInterpolator347->setDEF(QString("Pitch_l_thumb1_PitchInterpolator"));
SoOrientationInterpolator347->setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator347->setKeyValue(new float[]{1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.25,1.0,0.0,0.0,0.3,1.0,0.0,0.0,0.27,1.0,0.0,0.0,0.2,1.0,0.0,0.0,0.0}, 24);
SoGroup319->addChild(*SoOrientationInterpolator347);

SoOrientationInterpolator* SoOrientationInterpolator348 = new SoOrientationInterpolator();
SoOrientationInterpolator348->setDEF(QString("Pitch_r_thumb1_PitchInterpolator"));
SoOrientationInterpolator348->setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator348->setKeyValue(new float[]{1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.25,1.0,0.0,0.0,0.3,1.0,0.0,0.0,0.27,1.0,0.0,0.0,0.2,1.0,0.0,0.0,0.0}, 24);
SoGroup319->addChild(*SoOrientationInterpolator348);

SoNode32->addChild(*SoGroup319);

SoGroup* SoGroup349 = new SoGroup();
SoGroup349->setDEF(QString("YawsAnimation"));
SoTimeSensor* SoTimeSensor350 = new SoTimeSensor();
SoTimeSensor350->setDEF(QString("YawTimer"));
SoTimeSensor350->setCycleInterval(5.73);
SoTimeSensor350->setLoop(true);
SoGroup349->addChild(*SoTimeSensor350);

SoOrientationInterpolator* SoOrientationInterpolator351 = new SoOrientationInterpolator();
SoOrientationInterpolator351->setDEF(QString("Yaw_r_metatarsal_PitchInterpolator"));
SoOrientationInterpolator351->setKey(new float[]{0.0,0.2,0.4,0.6,0.7,1.0}, 6);
SoOrientationInterpolator351->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 24);
SoGroup349->addChild(*SoOrientationInterpolator351);

SoOrientationInterpolator* SoOrientationInterpolator352 = new SoOrientationInterpolator();
SoOrientationInterpolator352->setDEF(QString("Yaws_r_ankle_RotationInterpolator"));
SoOrientationInterpolator352->setKey(new float[]{0.0,0.25,0.5,0.75,1.0}, 5);
SoOrientationInterpolator352->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,-1.0,0.0,1.5,0.0,0.0,1.0,0.0,0.0,1.0,0.0,1.5,0.0,0.0,1.0,0.0}, 20);
SoGroup349->addChild(*SoOrientationInterpolator352);

SoOrientationInterpolator* SoOrientationInterpolator353 = new SoOrientationInterpolator();
SoOrientationInterpolator353->setDEF(QString("Yaws_r_knee_RotationInterpolator"));
SoOrientationInterpolator353->setKey(new float[]{0.0,0.25,0.5,0.75,1.0}, 5);
SoOrientationInterpolator353->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,1.0,0.0,1.5,0.0,0.0,1.0,0.0,0.0,-1.0,0.0,1.5,0.0,0.0,1.0,0.0}, 20);
SoGroup349->addChild(*SoOrientationInterpolator353);

SoOrientationInterpolator* SoOrientationInterpolator354 = new SoOrientationInterpolator();
SoOrientationInterpolator354->setDEF(QString("Yaws_r_hip_RotationInterpolator"));
SoOrientationInterpolator354->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator354->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup349->addChild(*SoOrientationInterpolator354);

SoOrientationInterpolator* SoOrientationInterpolator355 = new SoOrientationInterpolator();
SoOrientationInterpolator355->setDEF(QString("Yaws_l_ankle_RotationInterpolator"));
SoOrientationInterpolator355->setKey(new float[]{0.0,0.25,0.5,0.75,1.0}, 5);
SoOrientationInterpolator355->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,1.0,0.0,1.5,0.0,0.0,1.0,0.0,0.0,-1.0,0.0,1.5,0.0,0.0,1.0,0.0}, 20);
SoGroup349->addChild(*SoOrientationInterpolator355);

SoOrientationInterpolator* SoOrientationInterpolator356 = new SoOrientationInterpolator();
SoOrientationInterpolator356->setDEF(QString("Yaws_l_knee_RotationInterpolator"));
SoOrientationInterpolator356->setKey(new float[]{0.0,0.25,0.5,0.75,1.0}, 5);
SoOrientationInterpolator356->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,-1.0,0.0,1.5,0.0,0.0,1.0,0.0,0.0,1.0,0.0,1.5,0.0,0.0,1.0,0.0}, 20);
SoGroup349->addChild(*SoOrientationInterpolator356);

SoOrientationInterpolator* SoOrientationInterpolator357 = new SoOrientationInterpolator();
SoOrientationInterpolator357->setDEF(QString("Yaws_l_hip_RotationInterpolator"));
SoOrientationInterpolator357->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator357->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup349->addChild(*SoOrientationInterpolator357);

SoOrientationInterpolator* SoOrientationInterpolator358 = new SoOrientationInterpolator();
SoOrientationInterpolator358->setDEF(QString("Yaws_r_wrist_RotationInterpolator"));
SoOrientationInterpolator358->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator358->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup349->addChild(*SoOrientationInterpolator358);

SoOrientationInterpolator* SoOrientationInterpolator359 = new SoOrientationInterpolator();
SoOrientationInterpolator359->setDEF(QString("Yaws_r_elbow_RotationInterpolator"));
SoOrientationInterpolator359->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator359->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup349->addChild(*SoOrientationInterpolator359);

SoOrientationInterpolator* SoOrientationInterpolator360 = new SoOrientationInterpolator();
SoOrientationInterpolator360->setDEF(QString("Yaws_r_shoulder_RotationInterpolator"));
SoOrientationInterpolator360->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator360->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup349->addChild(*SoOrientationInterpolator360);

SoOrientationInterpolator* SoOrientationInterpolator361 = new SoOrientationInterpolator();
SoOrientationInterpolator361->setDEF(QString("Yaws_l_wrist_RotationInterpolator"));
SoOrientationInterpolator361->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator361->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup349->addChild(*SoOrientationInterpolator361);

SoOrientationInterpolator* SoOrientationInterpolator362 = new SoOrientationInterpolator();
SoOrientationInterpolator362->setDEF(QString("Yaws_l_elbow_RotationInterpolator"));
SoOrientationInterpolator362->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator362->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup349->addChild(*SoOrientationInterpolator362);

SoOrientationInterpolator* SoOrientationInterpolator363 = new SoOrientationInterpolator();
SoOrientationInterpolator363->setDEF(QString("Yaws_l_shoulder_RotationInterpolator"));
SoOrientationInterpolator363->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator363->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup349->addChild(*SoOrientationInterpolator363);

SoOrientationInterpolator* SoOrientationInterpolator364 = new SoOrientationInterpolator();
SoOrientationInterpolator364->setDEF(QString("Yaws_head_RotationInterpolator"));
SoOrientationInterpolator364->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator364->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup349->addChild(*SoOrientationInterpolator364);

SoOrientationInterpolator* SoOrientationInterpolator365 = new SoOrientationInterpolator();
SoOrientationInterpolator365->setDEF(QString("Yaws_neck_RotationInterpolator"));
SoOrientationInterpolator365->setKey(new float[]{0.0,0.25,0.5,0.75,1.0}, 5);
SoOrientationInterpolator365->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,1.0,0.0,1.5,0.0,0.0,1.0,0.0,0.0,-1.0,0.0,1.5,0.0,0.0,1.0,0.0}, 20);
SoGroup349->addChild(*SoOrientationInterpolator365);

SoOrientationInterpolator* SoOrientationInterpolator366 = new SoOrientationInterpolator();
SoOrientationInterpolator366->setDEF(QString("Yaws_upper_body_RotationInterpolator"));
SoOrientationInterpolator366->setKey(new float[]{0.0,0.25,0.5,0.75,1.0}, 5);
SoOrientationInterpolator366->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,-1.0,0.0,1.5,0.0,0.0,1.0,0.0,0.0,1.0,0.0,1.5,0.0,0.0,1.0,0.0}, 20);
SoGroup349->addChild(*SoOrientationInterpolator366);

SoOrientationInterpolator* SoOrientationInterpolator367 = new SoOrientationInterpolator();
SoOrientationInterpolator367->setDEF(QString("Yaws_lower_body_RotationInterpolator"));
SoOrientationInterpolator367->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator367->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup349->addChild(*SoOrientationInterpolator367);

SoOrientationInterpolator* SoOrientationInterpolator368 = new SoOrientationInterpolator();
SoOrientationInterpolator368->setDEF(QString("Yaws_whole_body_RotationInterpolator"));
SoOrientationInterpolator368->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator368->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup349->addChild(*SoOrientationInterpolator368);

SoPositionInterpolator* SoPositionInterpolator369 = new SoPositionInterpolator();
SoPositionInterpolator369->setDEF(QString("Yaws_whole_body_TranslationInterpolator"));
SoPositionInterpolator369->setKey(new float[]{0.0,0.5,1.0}, 3);
SoPositionInterpolator369->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 9);
SoGroup349->addChild(*SoPositionInterpolator369);

SoOrientationInterpolator* SoOrientationInterpolator370 = new SoOrientationInterpolator();
SoOrientationInterpolator370->setDEF(QString("Yaw_l_sternoclavicular_RollInterpolator"));
SoOrientationInterpolator370->setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator370->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 24);
SoGroup349->addChild(*SoOrientationInterpolator370);

SoOrientationInterpolator* SoOrientationInterpolator371 = new SoOrientationInterpolator();
SoOrientationInterpolator371->setDEF(QString("Yaw_l_acromioclavicular_RollInterpolator"));
SoOrientationInterpolator371->setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator371->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 24);
SoGroup349->addChild(*SoOrientationInterpolator371);

SoOrientationInterpolator* SoOrientationInterpolator372 = new SoOrientationInterpolator();
SoOrientationInterpolator372->setDEF(QString("Yaw_r_sternoclavicular_RollInterpolator"));
SoOrientationInterpolator372->setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator372->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 24);
SoGroup349->addChild(*SoOrientationInterpolator372);

SoOrientationInterpolator* SoOrientationInterpolator373 = new SoOrientationInterpolator();
SoOrientationInterpolator373->setDEF(QString("Yaw_r_acromioclavicular_RollInterpolator"));
SoOrientationInterpolator373->setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator373->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 24);
SoGroup349->addChild(*SoOrientationInterpolator373);

SoOrientationInterpolator* SoOrientationInterpolator374 = new SoOrientationInterpolator();
SoOrientationInterpolator374->setDEF(QString("Yaw_sacroiliac_YawInterpolator"));
SoOrientationInterpolator374->setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator374->setKeyValue(new float[]{0.0,1.0,0.0,0.0,0.0,-1.0,0.0,0.1,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.24,0.0,-1.0,0.0,0.4,0.0,1.0,0.0,0.0}, 24);
SoGroup349->addChild(*SoOrientationInterpolator374);

SoOrientationInterpolator* SoOrientationInterpolator375 = new SoOrientationInterpolator();
SoOrientationInterpolator375->setDEF(QString("Yaw_vl5_YawInterpolator"));
SoOrientationInterpolator375->setKey(new float[]{0.0,0.2,0.4,0.5,0.6,0.8,1.0}, 7);
SoOrientationInterpolator375->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 28);
SoGroup349->addChild(*SoOrientationInterpolator375);

SoOrientationInterpolator* SoOrientationInterpolator376 = new SoOrientationInterpolator();
SoOrientationInterpolator376->setDEF(QString("Yaw_vc6_YawInterpolator"));
SoOrientationInterpolator376->setKey(new float[]{0.0,0.2,0.4,0.5,0.6,0.8,1.0}, 7);
SoOrientationInterpolator376->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 28);
SoGroup349->addChild(*SoOrientationInterpolator376);

SoOrientationInterpolator* SoOrientationInterpolator377 = new SoOrientationInterpolator();
SoOrientationInterpolator377->setDEF(QString("Yaw_l_thumb1_PitchInterpolator"));
SoOrientationInterpolator377->setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator377->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 24);
SoGroup349->addChild(*SoOrientationInterpolator377);

SoOrientationInterpolator* SoOrientationInterpolator378 = new SoOrientationInterpolator();
SoOrientationInterpolator378->setDEF(QString("Yaw_r_thumb1_PitchInterpolator"));
SoOrientationInterpolator378->setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator378->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 24);
SoGroup349->addChild(*SoOrientationInterpolator378);

SoNode32->addChild(*SoGroup349);

SoGroup* SoGroup379 = new SoGroup();
SoGroup379->setDEF(QString("RollsAnimation"));
SoTimeSensor* SoTimeSensor380 = new SoTimeSensor();
SoTimeSensor380->setDEF(QString("RollTimer"));
SoTimeSensor380->setCycleInterval(5.73);
SoTimeSensor380->setLoop(true);
SoGroup379->addChild(*SoTimeSensor380);

SoOrientationInterpolator* SoOrientationInterpolator381 = new SoOrientationInterpolator();
SoOrientationInterpolator381->setDEF(QString("Roll_r_metatarsal_PitchInterpolator"));
SoOrientationInterpolator381->setKey(new float[]{0.0,0.2,0.4,0.6,0.7,1.0}, 6);
SoOrientationInterpolator381->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 24);
SoGroup379->addChild(*SoOrientationInterpolator381);

SoOrientationInterpolator* SoOrientationInterpolator382 = new SoOrientationInterpolator();
SoOrientationInterpolator382->setDEF(QString("Rolls_r_ankle_RotationInterpolator"));
SoOrientationInterpolator382->setKey(new float[]{0.0,0.25,0.5,0.75,1.0}, 5);
SoOrientationInterpolator382->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.5,0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.5,0.0,0.0,1.0,0.0}, 20);
SoGroup379->addChild(*SoOrientationInterpolator382);

SoOrientationInterpolator* SoOrientationInterpolator383 = new SoOrientationInterpolator();
SoOrientationInterpolator383->setDEF(QString("Rolls_r_knee_RotationInterpolator"));
SoOrientationInterpolator383->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator383->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup379->addChild(*SoOrientationInterpolator383);

SoOrientationInterpolator* SoOrientationInterpolator384 = new SoOrientationInterpolator();
SoOrientationInterpolator384->setDEF(QString("Rolls_r_hip_RotationInterpolator"));
SoOrientationInterpolator384->setKey(new float[]{0.0,0.25,0.5,0.75,1.0}, 5);
SoOrientationInterpolator384->setKeyValue(new float[]{0.0,0.0,-1.0,0.0,0.0,0.0,-1.0,1.5,0.0,0.0,1.0,0.0,0.0,0.0,-1.0,1.5,0.0,0.0,1.0,0.0}, 20);
SoGroup379->addChild(*SoOrientationInterpolator384);

SoOrientationInterpolator* SoOrientationInterpolator385 = new SoOrientationInterpolator();
SoOrientationInterpolator385->setDEF(QString("Rolls_l_ankle_RotationInterpolator"));
SoOrientationInterpolator385->setKey(new float[]{0.0,0.25,0.5,0.75,1.0}, 5);
SoOrientationInterpolator385->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,-1.0,1.5,0.0,0.0,1.0,0.0,0.0,0.0,-1.0,1.5,0.0,0.0,1.0,0.0}, 20);
SoGroup379->addChild(*SoOrientationInterpolator385);

SoOrientationInterpolator* SoOrientationInterpolator386 = new SoOrientationInterpolator();
SoOrientationInterpolator386->setDEF(QString("Rolls_l_knee_RotationInterpolator"));
SoOrientationInterpolator386->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator386->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup379->addChild(*SoOrientationInterpolator386);

SoOrientationInterpolator* SoOrientationInterpolator387 = new SoOrientationInterpolator();
SoOrientationInterpolator387->setDEF(QString("Rolls_l_hip_RotationInterpolator"));
SoOrientationInterpolator387->setKey(new float[]{0.0,0.25,0.5,0.75,1.0}, 5);
SoOrientationInterpolator387->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.5,0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.5,0.0,0.0,1.0,0.0}, 20);
SoGroup379->addChild(*SoOrientationInterpolator387);

SoOrientationInterpolator* SoOrientationInterpolator388 = new SoOrientationInterpolator();
SoOrientationInterpolator388->setDEF(QString("Rolls_r_wrist_RotationInterpolator"));
SoOrientationInterpolator388->setKey(new float[]{0.0,0.25,0.5,0.75,1.0}, 5);
SoOrientationInterpolator388->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,-1.0,1.5,0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.5,0.0,0.0,1.0,0.0}, 20);
SoGroup379->addChild(*SoOrientationInterpolator388);

SoOrientationInterpolator* SoOrientationInterpolator389 = new SoOrientationInterpolator();
SoOrientationInterpolator389->setDEF(QString("Rolls_r_elbow_RotationInterpolator"));
SoOrientationInterpolator389->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator389->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup379->addChild(*SoOrientationInterpolator389);

SoOrientationInterpolator* SoOrientationInterpolator390 = new SoOrientationInterpolator();
SoOrientationInterpolator390->setDEF(QString("Rolls_r_shoulder_RotationInterpolator"));
SoOrientationInterpolator390->setKey(new float[]{0.0,0.25,0.5,0.75,1.0}, 5);
SoOrientationInterpolator390->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,-1.0,1.5,0.0,0.0,-1.0,3.0,0.0,0.0,-1.0,1.5,0.0,0.0,1.0,0.0}, 20);
SoGroup379->addChild(*SoOrientationInterpolator390);

SoOrientationInterpolator* SoOrientationInterpolator391 = new SoOrientationInterpolator();
SoOrientationInterpolator391->setDEF(QString("Rolls_l_wrist_RotationInterpolator"));
SoOrientationInterpolator391->setKey(new float[]{0.0,0.25,0.5,0.75,1.0}, 5);
SoOrientationInterpolator391->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.5,0.0,0.0,1.0,0.0,0.0,0.0,-1.0,1.5,0.0,0.0,1.0,0.0}, 20);
SoGroup379->addChild(*SoOrientationInterpolator391);

SoOrientationInterpolator* SoOrientationInterpolator392 = new SoOrientationInterpolator();
SoOrientationInterpolator392->setDEF(QString("Rolls_l_elbow_RotationInterpolator"));
SoOrientationInterpolator392->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator392->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup379->addChild(*SoOrientationInterpolator392);

SoOrientationInterpolator* SoOrientationInterpolator393 = new SoOrientationInterpolator();
SoOrientationInterpolator393->setDEF(QString("Rolls_l_shoulder_RotationInterpolator"));
SoOrientationInterpolator393->setKey(new float[]{0.0,0.25,0.5,0.75,1.0}, 5);
SoOrientationInterpolator393->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.5,0.0,0.0,1.0,3.0,0.0,0.0,1.0,1.5,0.0,0.0,1.0,0.0}, 20);
SoGroup379->addChild(*SoOrientationInterpolator393);

SoOrientationInterpolator* SoOrientationInterpolator394 = new SoOrientationInterpolator();
SoOrientationInterpolator394->setDEF(QString("Rolls_head_RotationInterpolator"));
SoOrientationInterpolator394->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator394->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup379->addChild(*SoOrientationInterpolator394);

SoOrientationInterpolator* SoOrientationInterpolator395 = new SoOrientationInterpolator();
SoOrientationInterpolator395->setDEF(QString("Rolls_neck_RotationInterpolator"));
SoOrientationInterpolator395->setKey(new float[]{0.0,0.25,0.5,0.75,1.0}, 5);
SoOrientationInterpolator395->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.25,0.0,0.0,1.0,0.0,0.0,0.0,-1.0,1.25,0.0,0.0,1.0,0.0}, 20);
SoGroup379->addChild(*SoOrientationInterpolator395);

SoOrientationInterpolator* SoOrientationInterpolator396 = new SoOrientationInterpolator();
SoOrientationInterpolator396->setDEF(QString("Rolls_lower_body_RotationInterpolator"));
SoOrientationInterpolator396->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator396->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup379->addChild(*SoOrientationInterpolator396);

SoOrientationInterpolator* SoOrientationInterpolator397 = new SoOrientationInterpolator();
SoOrientationInterpolator397->setDEF(QString("Rolls_upper_body_RotationInterpolator"));
SoOrientationInterpolator397->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator397->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup379->addChild(*SoOrientationInterpolator397);

SoOrientationInterpolator* SoOrientationInterpolator398 = new SoOrientationInterpolator();
SoOrientationInterpolator398->setDEF(QString("Rolls_whole_body_RotationInterpolator"));
SoOrientationInterpolator398->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator398->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup379->addChild(*SoOrientationInterpolator398);

SoPositionInterpolator* SoPositionInterpolator399 = new SoPositionInterpolator();
SoPositionInterpolator399->setDEF(QString("Rolls_whole_body_TranslationInterpolator"));
SoPositionInterpolator399->setKey(new float[]{0.0,0.125,0.25,0.375,0.5,0.625,0.75,0.875,1.0}, 9);
SoPositionInterpolator399->setKeyValue(new float[]{0.0,0.0,0.0,0.0,-0.25,0.0,0.0,-0.8,0.0,0.0,-0.25,0.0,0.0,0.0,0.0,0.0,-0.25,0.0,0.0,-0.8,0.0,0.0,-0.25,0.0,0.0,0.0,0.0}, 27);
SoGroup379->addChild(*SoPositionInterpolator399);

SoOrientationInterpolator* SoOrientationInterpolator400 = new SoOrientationInterpolator();
SoOrientationInterpolator400->setDEF(QString("Roll_l_sternoclavicular_RollInterpolator"));
SoOrientationInterpolator400->setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator400->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.2,0.0,0.0,1.0,0.22,0.0,0.0,1.0,0.2,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 24);
SoGroup379->addChild(*SoOrientationInterpolator400);

SoOrientationInterpolator* SoOrientationInterpolator401 = new SoOrientationInterpolator();
SoOrientationInterpolator401->setDEF(QString("Roll_l_acromioclavicular_RollInterpolator"));
SoOrientationInterpolator401->setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator401->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.05,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 24);
SoGroup379->addChild(*SoOrientationInterpolator401);

SoOrientationInterpolator* SoOrientationInterpolator402 = new SoOrientationInterpolator();
SoOrientationInterpolator402->setDEF(QString("Roll_r_sternoclavicular_RollInterpolator"));
SoOrientationInterpolator402->setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator402->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,-0.2,0.0,0.0,1.0,-0.22,0.0,0.0,1.0,-0.2,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 24);
SoGroup379->addChild(*SoOrientationInterpolator402);

SoOrientationInterpolator* SoOrientationInterpolator403 = new SoOrientationInterpolator();
SoOrientationInterpolator403->setDEF(QString("Roll_r_acromioclavicular_RollInterpolator"));
SoOrientationInterpolator403->setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator403->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,-0.05,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 24);
SoGroup379->addChild(*SoOrientationInterpolator403);

SoOrientationInterpolator* SoOrientationInterpolator404 = new SoOrientationInterpolator();
SoOrientationInterpolator404->setDEF(QString("Roll_sacroiliac_YawInterpolator"));
SoOrientationInterpolator404->setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator404->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 24);
SoGroup379->addChild(*SoOrientationInterpolator404);

SoOrientationInterpolator* SoOrientationInterpolator405 = new SoOrientationInterpolator();
SoOrientationInterpolator405->setDEF(QString("Roll_vl5_YawInterpolator"));
SoOrientationInterpolator405->setKey(new float[]{0.0,0.2,0.4,0.5,0.6,0.8,1.0}, 7);
SoOrientationInterpolator405->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 28);
SoGroup379->addChild(*SoOrientationInterpolator405);

SoOrientationInterpolator* SoOrientationInterpolator406 = new SoOrientationInterpolator();
SoOrientationInterpolator406->setDEF(QString("Roll_vc6_YawInterpolator"));
SoOrientationInterpolator406->setKey(new float[]{0.0,0.2,0.4,0.5,0.6,0.8,1.0}, 7);
SoOrientationInterpolator406->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 28);
SoGroup379->addChild(*SoOrientationInterpolator406);

SoOrientationInterpolator* SoOrientationInterpolator407 = new SoOrientationInterpolator();
SoOrientationInterpolator407->setDEF(QString("Roll_l_thumb1_PitchInterpolator"));
SoOrientationInterpolator407->setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator407->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 24);
SoGroup379->addChild(*SoOrientationInterpolator407);

SoOrientationInterpolator* SoOrientationInterpolator408 = new SoOrientationInterpolator();
SoOrientationInterpolator408->setDEF(QString("Roll_r_thumb1_PitchInterpolator"));
SoOrientationInterpolator408->setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator408->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 24);
SoGroup379->addChild(*SoOrientationInterpolator408);

SoNode32->addChild(*SoGroup379);

SoGroup* SoGroup409 = new SoGroup();
SoGroup409->setDEF(QString("WalkAnimation"));
SoTimeSensor* SoTimeSensor410 = new SoTimeSensor();
SoTimeSensor410->setDEF(QString("WalkTimer"));
SoTimeSensor410->setCycleInterval(1.73);
SoTimeSensor410->setLoop(true);
SoGroup409->addChild(*SoTimeSensor410);

SoOrientationInterpolator* SoOrientationInterpolator411 = new SoOrientationInterpolator();
SoOrientationInterpolator411->setDEF(QString("Walk_r_metatarsal_PitchInterpolator"));
SoOrientationInterpolator411->setKey(new float[]{0.0,0.2,0.4,0.6,0.7,1.0}, 6);
SoOrientationInterpolator411->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 24);
SoGroup409->addChild(*SoOrientationInterpolator411);

SoOrientationInterpolator* SoOrientationInterpolator412 = new SoOrientationInterpolator();
SoOrientationInterpolator412->setDEF(QString("Walk_r_ankle_RotationInterpolator"));
SoOrientationInterpolator412->setKey(new float[]{0.0,0.125,0.2083,0.375,0.4583,0.5,0.6667,0.75,0.7917,0.9167,1.0}, 11);
SoOrientationInterpolator412->setKeyValue(new float[]{0.0,0.0,1.0,0.0,-1.0,0.0,0.0,0.3533,-1.0,0.0,0.0,0.1072,1.0,0.0,0.0,0.2612,1.0,0.0,0.0,0.1268,-1.0,0.0,0.0,0.01793,-1.0,0.0,0.0,0.05824,-1.0,0.0,0.0,0.2398,-1.0,0.0,0.0,0.35,-1.0,0.0,0.0,0.3322,0.0,0.0,1.0,0.0}, 44);
SoGroup409->addChild(*SoOrientationInterpolator412);

SoOrientationInterpolator* SoOrientationInterpolator413 = new SoOrientationInterpolator();
SoOrientationInterpolator413->setDEF(QString("Walk_r_knee_RotationInterpolator"));
SoOrientationInterpolator413->setKey(new float[]{0.0,0.125,0.2083,0.2917,0.375,0.5,0.6667,0.7917,0.9167,1.0}, 10);
SoOrientationInterpolator413->setKeyValue(new float[]{1.0,0.0,0.0,0.8573,1.0,0.0,0.0,0.8926,1.0,0.0,0.0,0.5351,1.0,0.0,0.0,0.1756,1.0,0.0,0.0,0.1194,1.0,0.0,0.0,0.3153,1.0,0.0,0.0,0.09354,1.0,0.0,0.0,0.08558,1.0,0.0,0.0,0.2475,1.0,0.0,0.0,0.8573}, 40);
SoGroup409->addChild(*SoOrientationInterpolator413);

SoOrientationInterpolator* SoOrientationInterpolator414 = new SoOrientationInterpolator();
SoOrientationInterpolator414->setDEF(QString("Walk_r_hip_RotationInterpolator"));
SoOrientationInterpolator414->setKey(new float[]{0.0,0.125,0.2083,0.2917,0.375,0.5,0.6667,0.7917,0.9167,1.0}, 10);
SoOrientationInterpolator414->setKeyValue(new float[]{-0.5831,0.03511,0.8116,0.1481,-0.995,0.02296,0.09674,0.4683,-1.0,0.00192,0.007964,0.4732,-0.998,-0.0158,-0.06102,0.5079,-0.9911,-0.03541,-0.1286,0.5419,-0.9131,-0.06243,-0.403,0.3361,-0.4306,-0.07962,-0.899,0.07038,1.0,0.0,0.0,0.2571,0.9891,-0.02805,0.1444,0.3879,-0.5831,0.03511,0.8116,0.1481}, 40);
SoGroup409->addChild(*SoOrientationInterpolator414);

SoOrientationInterpolator* SoOrientationInterpolator415 = new SoOrientationInterpolator();
SoOrientationInterpolator415->setDEF(QString("Walk_l_ankle_RotationInterpolator"));
SoOrientationInterpolator415->setKey(new float[]{0.0,0.125,0.2083,0.375,0.6667,0.9167,1.0}, 7);
SoOrientationInterpolator415->setKeyValue(new float[]{-1.0,0.0,0.0,0.06714,-1.0,0.0,0.0,0.2152,-1.0,0.0,0.0,0.3184,-1.0,0.0,0.0,0.4717,-1.0,0.0,0.0,0.2912,1.0,0.0,0.0,0.1222,-1.0,0.0,0.0,0.06714}, 28);
SoGroup409->addChild(*SoOrientationInterpolator415);

SoOrientationInterpolator* SoOrientationInterpolator416 = new SoOrientationInterpolator();
SoOrientationInterpolator416->setDEF(QString("Walk_l_knee_RotationInterpolator"));
SoOrientationInterpolator416->setKey(new float[]{0.0,0.2083,0.375,0.5,0.6667,0.7917,0.9167,1.0}, 8);
SoOrientationInterpolator416->setKeyValue(new float[]{1.0,0.0,0.0,0.3226,1.0,0.0,0.0,0.1556,1.0,0.0,0.0,0.08678,1.0,0.0,0.0,0.8751,1.0,0.0,0.0,1.131,1.0,0.0,0.0,0.09961,1.0,0.0,0.0,0.3942,1.0,0.0,0.0,0.3226}, 32);
SoGroup409->addChild(*SoOrientationInterpolator416);

SoOrientationInterpolator* SoOrientationInterpolator417 = new SoOrientationInterpolator();
SoOrientationInterpolator417->setDEF(QString("Walk_l_hip_RotationInterpolator"));
SoOrientationInterpolator417->setKey(new float[]{0.0,0.25,0.375,0.5,0.6667,0.7917,0.9167,1.0}, 8);
SoOrientationInterpolator417->setKeyValue(new float[]{-0.873,0.06094,0.484,0.2865,0.9963,-0.01057,0.08481,0.2488,0.9965,0.01591,-0.08222,0.3836,-0.7018,-0.03223,-0.7117,0.1289,-1.0,0.0,0.0,0.5518,-0.9964,0.02231,0.0817,0.5351,-0.9809,0.04912,0.1881,0.5204,-0.873,0.06094,0.484,0.2865}, 32);
SoGroup409->addChild(*SoOrientationInterpolator417);

SoOrientationInterpolator* SoOrientationInterpolator418 = new SoOrientationInterpolator();
SoOrientationInterpolator418->setDEF(QString("Walk_lower_body_RotationInterpolator"));
SoOrientationInterpolator418->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator418->setKeyValue(new float[]{0.0,0.0,-1.0,0.1056,0.0,0.0,1.0,0.09018,0.0,0.0,-1.0,0.1056}, 12);
SoGroup409->addChild(*SoOrientationInterpolator418);

SoOrientationInterpolator* SoOrientationInterpolator419 = new SoOrientationInterpolator();
SoOrientationInterpolator419->setDEF(QString("Walk_r_wrist_RotationInterpolator"));
SoOrientationInterpolator419->setKey(new float[]{0.0,0.375,0.9167,1.0}, 4);
SoOrientationInterpolator419->setKeyValue(new float[]{-0.8129,0.4759,-0.3357,0.1346,0.1533,-0.9878,0.02582,0.3902,-0.5701,0.7604,-0.311,0.366,-0.8129,0.4759,-0.3357,0.1346}, 16);
SoGroup409->addChild(*SoOrientationInterpolator419);

SoOrientationInterpolator* SoOrientationInterpolator420 = new SoOrientationInterpolator();
SoOrientationInterpolator420->setDEF(QString("Walk_r_elbow_RotationInterpolator"));
SoOrientationInterpolator420->setKey(new float[]{0.0,0.375,0.9167,1.0}, 4);
SoOrientationInterpolator420->setKeyValue(new float[]{-1.0,0.0,0.0,0.411508,-1.0,0.0,0.0,0.0925011,-1.0,0.0,0.0,0.572568,-1.0,0.0,0.0,0.411508}, 16);
SoGroup409->addChild(*SoOrientationInterpolator420);

SoOrientationInterpolator* SoOrientationInterpolator421 = new SoOrientationInterpolator();
SoOrientationInterpolator421->setDEF(QString("Walk_r_shoulder_RotationInterpolator"));
SoOrientationInterpolator421->setKey(new float[]{0.0,0.375,0.9167,1.0}, 4);
SoOrientationInterpolator421->setKeyValue(new float[]{-1.0,0.0,0.0,0.09346,1.0,0.0,0.0,0.3197,-1.0,0.0,0.0,0.1564,-1.0,0.0,0.0,0.09346}, 16);
SoGroup409->addChild(*SoOrientationInterpolator421);

SoOrientationInterpolator* SoOrientationInterpolator422 = new SoOrientationInterpolator();
SoOrientationInterpolator422->setDEF(QString("Walk_l_wrist_RotationInterpolator"));
SoOrientationInterpolator422->setKey(new float[]{0.0,0.375,0.9167,1.0}, 4);
SoOrientationInterpolator422->setKeyValue(new float[]{0.0,-1.0,0.0,0.461076,-0.330195,-0.927451,0.175516,0.538852,0.0327774,-0.999314,-0.0172185,0.492033,0.0,-1.0,0.0,0.461076}, 16);
SoGroup409->addChild(*SoOrientationInterpolator422);

SoOrientationInterpolator* SoOrientationInterpolator423 = new SoOrientationInterpolator();
SoOrientationInterpolator423->setDEF(QString("Walk_l_elbow_RotationInterpolator"));
SoOrientationInterpolator423->setKey(new float[]{0.0,0.375,0.9167,1.0}, 4);
SoOrientationInterpolator423->setKeyValue(new float[]{-1.0,0.0,0.0,0.0659878,-1.0,0.0,0.0,0.488383,-1.0,0.0,0.0,0.0177536,-1.0,0.0,0.0,0.0659878}, 16);
SoGroup409->addChild(*SoOrientationInterpolator423);

SoOrientationInterpolator* SoOrientationInterpolator424 = new SoOrientationInterpolator();
SoOrientationInterpolator424->setDEF(QString("Walk_l_shoulder_RotationInterpolator"));
SoOrientationInterpolator424->setKey(new float[]{0.0,0.375,0.9167,1.0}, 4);
SoOrientationInterpolator424->setKeyValue(new float[]{1.0,0.0,0.0,0.1189,-1.0,0.0,0.0,0.1861,1.0,0.0,0.0,0.3357,1.0,0.0,0.0,0.1189}, 16);
SoGroup409->addChild(*SoOrientationInterpolator424);

SoOrientationInterpolator* SoOrientationInterpolator425 = new SoOrientationInterpolator();
SoOrientationInterpolator425->setDEF(QString("Walk_head_RotationInterpolator"));
SoOrientationInterpolator425->setKey(new float[]{0.0,0.375,0.4167,0.5,0.5833,0.6667,0.75,0.8333,0.9167,1.0}, 10);
SoOrientationInterpolator425->setKeyValue(new float[]{0.0,-1.0,0.0,0.08642,0.0,1.0,0.0,0.1825,0.0,1.0,0.0,0.1505,0.0,1.0,0.0,0.1053,0.0,1.0,0.0,0.04391,0.0,-1.0,0.0,0.03119,0.0,-1.0,0.0,0.07936,0.0,-1.0,0.0,0.1616,0.0,-1.0,0.0,0.155,0.0,-1.0,0.0,0.08642}, 40);
SoGroup409->addChild(*SoOrientationInterpolator425);

SoOrientationInterpolator* SoOrientationInterpolator426 = new SoOrientationInterpolator();
SoOrientationInterpolator426->setDEF(QString("Walk_neck_RotationInterpolator"));
SoOrientationInterpolator426->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator426->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 8);
SoGroup409->addChild(*SoOrientationInterpolator426);

SoOrientationInterpolator* SoOrientationInterpolator427 = new SoOrientationInterpolator();
SoOrientationInterpolator427->setDEF(QString("Walk_upper_body_RotationInterpolator"));
SoOrientationInterpolator427->setKey(new float[]{0.0,0.2083,0.375,0.75,0.8333,1.0}, 6);
SoOrientationInterpolator427->setKeyValue(new float[]{0.0,1.0,0.0,0.0826,-0.01972,-0.5974,0.8017,0.08231,0.009296,-0.9648,0.2627,0.1734,-0.01238,0.9549,-0.2968,0.08732,-0.008125,0.9691,-0.2463,0.158,0.0,1.0,0.0,0.0826}, 24);
SoGroup409->addChild(*SoOrientationInterpolator427);

SoOrientationInterpolator* SoOrientationInterpolator428 = new SoOrientationInterpolator();
SoOrientationInterpolator428->setDEF(QString("Walk_whole_body_RotationInterpolator"));
SoOrientationInterpolator428->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator428->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 8);
SoGroup409->addChild(*SoOrientationInterpolator428);

SoPositionInterpolator* SoPositionInterpolator429 = new SoPositionInterpolator();
SoPositionInterpolator429->setDEF(QString("Walk_whole_body_TranslationInterpolator"));
SoPositionInterpolator429->setKey(new float[]{0.0,0.04167,0.125,0.1667,0.2083,0.25,0.2917,0.375,0.4583,0.5,0.5417,0.5833,0.625,0.7083,0.75,0.7917,0.875,0.9167,1.0}, 19);
SoPositionInterpolator429->setKeyValue(new float[]{0.0,-0.00928,0.0,0.0,-0.003858,0.0,0.0,-0.008847,0.0,0.0,-0.01486,0.0,0.0,-0.02641,0.0,0.0,-0.03934,0.0,0.0,-0.0502,0.0,0.0,-0.07469,0.0,0.0,-0.02732,0.0,0.0,-0.01608,0.0,0.0,-0.01129,0.0,0.0,-0.005819,0.0,0.0,-0.002004,0.0,0.0,-0.002579,0.0,0.0,-0.0143,0.0,0.0,-0.03799,0.0,0.0,-0.05648,0.0,0.0,-0.045,0.0,0.0,-0.00928,0.0}, 57);
SoGroup409->addChild(*SoPositionInterpolator429);

SoOrientationInterpolator* SoOrientationInterpolator430 = new SoOrientationInterpolator();
SoOrientationInterpolator430->setDEF(QString("Walk_l_sternoclavicular_RollInterpolator"));
SoOrientationInterpolator430->setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator430->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 24);
SoGroup409->addChild(*SoOrientationInterpolator430);

SoOrientationInterpolator* SoOrientationInterpolator431 = new SoOrientationInterpolator();
SoOrientationInterpolator431->setDEF(QString("Walk_l_acromioclavicular_RollInterpolator"));
SoOrientationInterpolator431->setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator431->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 24);
SoGroup409->addChild(*SoOrientationInterpolator431);

SoOrientationInterpolator* SoOrientationInterpolator432 = new SoOrientationInterpolator();
SoOrientationInterpolator432->setDEF(QString("Walk_r_sternoclavicular_RollInterpolator"));
SoOrientationInterpolator432->setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator432->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 24);
SoGroup409->addChild(*SoOrientationInterpolator432);

SoOrientationInterpolator* SoOrientationInterpolator433 = new SoOrientationInterpolator();
SoOrientationInterpolator433->setDEF(QString("Walk_r_acromioclavicular_RollInterpolator"));
SoOrientationInterpolator433->setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator433->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 24);
SoGroup409->addChild(*SoOrientationInterpolator433);

SoOrientationInterpolator* SoOrientationInterpolator434 = new SoOrientationInterpolator();
SoOrientationInterpolator434->setDEF(QString("Walk_sacroiliac_YawInterpolator"));
SoOrientationInterpolator434->setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator434->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 24);
SoGroup409->addChild(*SoOrientationInterpolator434);

SoOrientationInterpolator* SoOrientationInterpolator435 = new SoOrientationInterpolator();
SoOrientationInterpolator435->setDEF(QString("Walk_vl5_YawInterpolator"));
SoOrientationInterpolator435->setKey(new float[]{0.0,0.2,0.4,0.5,0.6,0.8,1.0}, 7);
SoOrientationInterpolator435->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 28);
SoGroup409->addChild(*SoOrientationInterpolator435);

SoOrientationInterpolator* SoOrientationInterpolator436 = new SoOrientationInterpolator();
SoOrientationInterpolator436->setDEF(QString("Walk_vc6_YawInterpolator"));
SoOrientationInterpolator436->setKey(new float[]{0.0,0.2,0.4,0.5,0.6,0.8,1.0}, 7);
SoOrientationInterpolator436->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 28);
SoGroup409->addChild(*SoOrientationInterpolator436);

SoOrientationInterpolator* SoOrientationInterpolator437 = new SoOrientationInterpolator();
SoOrientationInterpolator437->setDEF(QString("Walk_l_thumb1_PitchInterpolator"));
SoOrientationInterpolator437->setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator437->setKeyValue(new float[]{1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.25,1.0,0.0,0.0,0.5,1.0,0.0,0.0,0.7,1.0,0.0,0.0,0.2,1.0,0.0,0.0,0.0}, 24);
SoGroup409->addChild(*SoOrientationInterpolator437);

SoOrientationInterpolator* SoOrientationInterpolator438 = new SoOrientationInterpolator();
SoOrientationInterpolator438->setDEF(QString("Walk_r_thumb1_PitchInterpolator"));
SoOrientationInterpolator438->setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator438->setKeyValue(new float[]{1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.25,1.0,0.0,0.0,0.5,1.0,0.0,0.0,0.7,1.0,0.0,0.0,0.2,1.0,0.0,0.0,0.0}, 24);
SoGroup409->addChild(*SoOrientationInterpolator438);

SoNode32->addChild(*SoGroup409);

SoGroup* SoGroup439 = new SoGroup();
SoGroup439->setDEF(QString("RunAnimation"));
SoTimeSensor* SoTimeSensor440 = new SoTimeSensor();
SoTimeSensor440->setDEF(QString("RunTimer"));
SoTimeSensor440->setCycleInterval(0.9);
SoTimeSensor440->setLoop(true);
SoGroup439->addChild(*SoTimeSensor440);

SoOrientationInterpolator* SoOrientationInterpolator441 = new SoOrientationInterpolator();
SoOrientationInterpolator441->setDEF(QString("Run_r_metatarsal_PitchInterpolator"));
SoOrientationInterpolator441->setKey(new float[]{0.0,0.2,0.4,0.6,0.7,1.0}, 6);
SoOrientationInterpolator441->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 24);
SoGroup439->addChild(*SoOrientationInterpolator441);

SoOrientationInterpolator* SoOrientationInterpolator442 = new SoOrientationInterpolator();
SoOrientationInterpolator442->setDEF(QString("Run_l_hip_RotationInterpolator_Run"));
SoOrientationInterpolator442->setKey(new float[]{0.0,0.2182,0.4909,0.7455,1.0}, 5);
SoOrientationInterpolator442->setKeyValue(new float[]{-0.99,0.033,0.04,1.42,-0.99,0.1328,0.067,0.42,0.99,0.014,0.009,0.9,-0.99,0.0703,0.05,0.7,-0.99,0.033,0.04,1.42}, 20);
SoGroup439->addChild(*SoOrientationInterpolator442);

SoOrientationInterpolator* SoOrientationInterpolator443 = new SoOrientationInterpolator();
SoOrientationInterpolator443->setDEF(QString("Run_l_knee_RotationInterpolator_Run"));
SoOrientationInterpolator443->setKey(new float[]{0.0,0.2182,0.4909,0.7455,1.0}, 5);
SoOrientationInterpolator443->setKeyValue(new float[]{1.0,0.0,0.0,1.01,1.0,0.0,0.0,0.426,1.0,0.0,0.0,0.705,1.0,0.0,0.0,2.179,1.0,0.0,0.0,1.01}, 20);
SoGroup439->addChild(*SoOrientationInterpolator443);

SoOrientationInterpolator* SoOrientationInterpolator444 = new SoOrientationInterpolator();
SoOrientationInterpolator444->setDEF(QString("Run_l_ankle_RotationInterpolator_Run"));
SoOrientationInterpolator444->setKey(new float[]{0.0,0.22,0.3,0.4,1.0}, 5);
SoOrientationInterpolator444->setKeyValue(new float[]{1.0,0.0,0.0,0.0374,-1.0,0.0,0.0,0.1037,-1.0,0.0,0.0,0.4328,1.0,0.0,0.0,0.1929,1.0,0.0,0.0,0.03574}, 20);
SoGroup439->addChild(*SoOrientationInterpolator444);

SoOrientationInterpolator* SoOrientationInterpolator445 = new SoOrientationInterpolator();
SoOrientationInterpolator445->setDEF(QString("Run_r_hip_RotationInterpolator_Run"));
SoOrientationInterpolator445->setKey(new float[]{0.0,0.2545,0.4909,0.7091,1.0}, 5);
SoOrientationInterpolator445->setKeyValue(new float[]{0.99,-0.014,0.009,0.9,-0.99,-0.0703,-0.05,0.7,-0.99,-0.033,0.04,1.42,-0.99,-0.1328,-0.067,0.42,0.99,-0.014,0.009,0.9}, 20);
SoGroup439->addChild(*SoOrientationInterpolator445);

SoOrientationInterpolator* SoOrientationInterpolator446 = new SoOrientationInterpolator();
SoOrientationInterpolator446->setDEF(QString("Run_r_knee_RotationInterpolator_Run"));
SoOrientationInterpolator446->setKey(new float[]{0.0,0.2545,0.4909,0.7091,1.0}, 5);
SoOrientationInterpolator446->setKeyValue(new float[]{1.0,0.0,0.0,0.705,1.0,0.0,0.0,2.179,1.0,0.0,0.0,1.01,1.0,0.0,0.0,0.426,1.0,0.0,0.0,0.705}, 20);
SoGroup439->addChild(*SoOrientationInterpolator446);

SoOrientationInterpolator* SoOrientationInterpolator447 = new SoOrientationInterpolator();
SoOrientationInterpolator447->setDEF(QString("Run_r_ankle_RotationInterpolator_Run"));
SoOrientationInterpolator447->setKey(new float[]{0.0,0.4,0.71,0.8,0.82,1.0}, 6);
SoOrientationInterpolator447->setKeyValue(new float[]{1.0,0.0,0.0,0.2323,-1.0,0.0,0.0,0.07843,-1.0,0.0,0.0,0.32,-1.0,0.0,0.0,0.374,-1.0,0.0,0.0,0.3478,1.0,0.0,0.0,0.2323}, 24);
SoGroup439->addChild(*SoOrientationInterpolator447);

SoOrientationInterpolator* SoOrientationInterpolator448 = new SoOrientationInterpolator();
SoOrientationInterpolator448->setDEF(QString("Run_l_shoulder_RotationInterpolator_Run"));
SoOrientationInterpolator448->setKey(new float[]{0.0,0.2182,0.4909,0.7455,1.0}, 5);
SoOrientationInterpolator448->setKeyValue(new float[]{0.99,-0.074,0.25,1.5,0.99,-0.092,0.44,0.3,-0.99,0.136,0.25,0.85,0.99,-0.081,0.38,0.4,0.99,-0.074,0.25,1.5}, 20);
SoGroup439->addChild(*SoOrientationInterpolator448);

SoOrientationInterpolator* SoOrientationInterpolator449 = new SoOrientationInterpolator();
SoOrientationInterpolator449->setDEF(QString("Run_l_elbow_RotationInterpolator_Run"));
SoOrientationInterpolator449->setKey(new float[]{0.0,0.2182,0.4909,0.7455,1.0}, 5);
SoOrientationInterpolator449->setKeyValue(new float[]{-1.0,0.0,0.0,1.85,-0.99,-0.19,0.18,1.35,-1.0,0.0,0.0,0.975,-0.99,-0.09,-0.02,1.55,-1.0,0.0,0.0,1.85}, 20);
SoGroup439->addChild(*SoOrientationInterpolator449);

SoOrientationInterpolator* SoOrientationInterpolator450 = new SoOrientationInterpolator();
SoOrientationInterpolator450->setDEF(QString("Run_l_wrist_RotationInterpolator_Run"));
SoOrientationInterpolator450->setKey(new float[]{0.0,0.25,0.5,0.75,1.0}, 5);
SoOrientationInterpolator450->setKeyValue(new float[]{-0.25,-1.0,0.08,0.14,0.25,1.0,0.08,0.14,0.0,0.0,1.0,0.0,-0.25,1.0,0.08,-0.14,-0.25,1.0,0.08,0.14}, 20);
SoGroup439->addChild(*SoOrientationInterpolator450);

SoOrientationInterpolator* SoOrientationInterpolator451 = new SoOrientationInterpolator();
SoOrientationInterpolator451->setDEF(QString("Run_r_shoulder_RotationInterpolator_Run"));
SoOrientationInterpolator451->setKey(new float[]{0.0,0.2545,0.4909,0.7091,1.0}, 5);
SoOrientationInterpolator451->setKeyValue(new float[]{-0.99,-0.136,-0.25,0.85,0.99,0.081,-0.38,0.4,0.99,0.074,-0.25,1.5,0.99,0.081,-0.38,0.4,-0.99,-0.136,-0.25,0.85}, 20);
SoGroup439->addChild(*SoOrientationInterpolator451);

SoOrientationInterpolator* SoOrientationInterpolator452 = new SoOrientationInterpolator();
SoOrientationInterpolator452->setDEF(QString("Run_r_elbow_RotationInterpolator_Run"));
SoOrientationInterpolator452->setKey(new float[]{0.0,0.2545,0.4909,0.7091,1.0}, 5);
SoOrientationInterpolator452->setKeyValue(new float[]{-1.0,0.0,0.0,0.975,-0.99,0.09,0.02,1.55,-1.0,0.0,0.0,1.85,-0.99,0.19,-0.18,1.35,-1.0,0.0,0.0,0.975}, 20);
SoGroup439->addChild(*SoOrientationInterpolator452);

SoOrientationInterpolator* SoOrientationInterpolator453 = new SoOrientationInterpolator();
SoOrientationInterpolator453->setDEF(QString("Run_r_wrist_RotationInterpolator_Run"));
SoOrientationInterpolator453->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator453->setKeyValue(new float[]{-0.917742,-0.237244,-0.318536,0.214273,-0.917742,-0.237244,-0.318536,0.214273}, 8);
SoGroup439->addChild(*SoOrientationInterpolator453);

SoOrientationInterpolator* SoOrientationInterpolator454 = new SoOrientationInterpolator();
SoOrientationInterpolator454->setDEF(QString("Run_lower_body_RotationInterpolator_Run"));
SoOrientationInterpolator454->setKey(new float[]{0.0,0.2182,0.4909,0.7455,1.0}, 5);
SoOrientationInterpolator454->setKeyValue(new float[]{0.0,-1.0,0.0,0.125,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.125,0.0,0.0,1.0,0.0,0.0,-1.0,0.0,0.125}, 20);
SoGroup439->addChild(*SoOrientationInterpolator454);

SoOrientationInterpolator* SoOrientationInterpolator455 = new SoOrientationInterpolator();
SoOrientationInterpolator455->setDEF(QString("Run_head_RotationInterpolator_Run"));
SoOrientationInterpolator455->setKey(new float[]{0.0,0.2545,0.4909,0.7091,1.0}, 5);
SoOrientationInterpolator455->setKeyValue(new float[]{1.0,0.0,0.0,0.08,1.0,0.0,0.0,0.12,1.0,0.0,0.0,0.3,1.0,0.0,0.0,0.3,1.0,0.0,0.0,0.08}, 20);
SoGroup439->addChild(*SoOrientationInterpolator455);

SoOrientationInterpolator* SoOrientationInterpolator456 = new SoOrientationInterpolator();
SoOrientationInterpolator456->setDEF(QString("Run_neck_RotationInterpolator_Run"));
SoOrientationInterpolator456->setKey(new float[]{0.0,0.2545,0.4909,0.7091,1.0}, 5);
SoOrientationInterpolator456->setKeyValue(new float[]{0.7,0.0,0.0,0.4,-0.7,-0.7,0.0,0.4,0.0,0.0,0.0,0.4,-0.7,0.7,0.0,0.4,0.7,0.0,0.0,0.4}, 20);
SoGroup439->addChild(*SoOrientationInterpolator456);

SoOrientationInterpolator* SoOrientationInterpolator457 = new SoOrientationInterpolator();
SoOrientationInterpolator457->setDEF(QString("Run_upper_body_RotationInterpolator_Run"));
SoOrientationInterpolator457->setKey(new float[]{0.0,0.2545,0.4909,0.7636,1.0}, 5);
SoOrientationInterpolator457->setKeyValue(new float[]{0.97,0.65,0.086,0.5,0.9,0.003,-0.02,0.38,0.95,-0.68,-0.086,0.5,0.9,0.004,-0.025,0.4,0.97,0.65,0.086,0.5}, 20);
SoGroup439->addChild(*SoOrientationInterpolator457);

SoOrientationInterpolator* SoOrientationInterpolator458 = new SoOrientationInterpolator();
SoOrientationInterpolator458->setDEF(QString("Run_whole_body_RotationInterpolator_Run"));
SoOrientationInterpolator458->setKey(new float[]{0.0,0.25,0.5,0.75,1.0}, 5);
SoOrientationInterpolator458->setKeyValue(new float[]{1.0,0.0,0.0,0.06,1.0,0.0,0.0,0.167,1.0,0.0,0.0,0.06,1.0,0.0,0.0,0.168,1.0,0.0,0.0,0.06}, 20);
SoGroup439->addChild(*SoOrientationInterpolator458);

SoPositionInterpolator* SoPositionInterpolator459 = new SoPositionInterpolator();
SoPositionInterpolator459->setDEF(QString("Run_whole_body_TranslationInterpolator_Run"));
SoPositionInterpolator459->setKey(new float[]{0.0,0.22,0.3,0.31,0.5,0.69,0.7,0.78,1.0}, 9);
SoPositionInterpolator459->setKeyValue(new float[]{0.0,-0.01,0.0,0.0,-0.037,0.0,0.0,-0.049,0.0,0.0,-0.037,0.0,0.0,-0.01,0.0,0.0,-0.037,0.0,0.0,-0.049,0.0,0.0,-0.037,0.0,0.0,-0.01,0.0}, 27);
SoGroup439->addChild(*SoPositionInterpolator459);

SoOrientationInterpolator* SoOrientationInterpolator460 = new SoOrientationInterpolator();
SoOrientationInterpolator460->setDEF(QString("Run_l_sternoclavicular_RollInterpolator"));
SoOrientationInterpolator460->setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator460->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 24);
SoGroup439->addChild(*SoOrientationInterpolator460);

SoOrientationInterpolator* SoOrientationInterpolator461 = new SoOrientationInterpolator();
SoOrientationInterpolator461->setDEF(QString("Run_l_acromioclavicular_RollInterpolator"));
SoOrientationInterpolator461->setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator461->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 24);
SoGroup439->addChild(*SoOrientationInterpolator461);

SoOrientationInterpolator* SoOrientationInterpolator462 = new SoOrientationInterpolator();
SoOrientationInterpolator462->setDEF(QString("Run_r_sternoclavicular_RollInterpolator"));
SoOrientationInterpolator462->setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator462->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 24);
SoGroup439->addChild(*SoOrientationInterpolator462);

SoOrientationInterpolator* SoOrientationInterpolator463 = new SoOrientationInterpolator();
SoOrientationInterpolator463->setDEF(QString("Run_r_acromioclavicular_RollInterpolator"));
SoOrientationInterpolator463->setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator463->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 24);
SoGroup439->addChild(*SoOrientationInterpolator463);

SoOrientationInterpolator* SoOrientationInterpolator464 = new SoOrientationInterpolator();
SoOrientationInterpolator464->setDEF(QString("Run_sacroiliac_YawInterpolator"));
SoOrientationInterpolator464->setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator464->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 24);
SoGroup439->addChild(*SoOrientationInterpolator464);

SoOrientationInterpolator* SoOrientationInterpolator465 = new SoOrientationInterpolator();
SoOrientationInterpolator465->setDEF(QString("Run_vl5_YawInterpolator"));
SoOrientationInterpolator465->setKey(new float[]{0.0,0.2,0.4,0.5,0.6,0.8,1.0}, 7);
SoOrientationInterpolator465->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 28);
SoGroup439->addChild(*SoOrientationInterpolator465);

SoOrientationInterpolator* SoOrientationInterpolator466 = new SoOrientationInterpolator();
SoOrientationInterpolator466->setDEF(QString("Run_vc6_YawInterpolator"));
SoOrientationInterpolator466->setKey(new float[]{0.0,0.2,0.4,0.5,0.6,0.8,1.0}, 7);
SoOrientationInterpolator466->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 28);
SoGroup439->addChild(*SoOrientationInterpolator466);

SoOrientationInterpolator* SoOrientationInterpolator467 = new SoOrientationInterpolator();
SoOrientationInterpolator467->setDEF(QString("Run_l_thumb1_PitchInterpolator"));
SoOrientationInterpolator467->setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator467->setKeyValue(new float[]{1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.25,1.0,0.0,0.0,0.7,1.0,0.0,0.0,0.27,1.0,0.0,0.0,0.2,1.0,0.0,0.0,0.0}, 24);
SoGroup439->addChild(*SoOrientationInterpolator467);

SoOrientationInterpolator* SoOrientationInterpolator468 = new SoOrientationInterpolator();
SoOrientationInterpolator468->setDEF(QString("Run_r_thumb1_PitchInterpolator"));
SoOrientationInterpolator468->setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator468->setKeyValue(new float[]{1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.25,1.0,0.0,0.0,0.7,1.0,0.0,0.0,0.27,1.0,0.0,0.0,0.2,1.0,0.0,0.0,0.0}, 24);
SoGroup439->addChild(*SoOrientationInterpolator468);

SoNode32->addChild(*SoGroup439);

SoGroup* SoGroup469 = new SoGroup();
SoGroup469->setDEF(QString("JumpAnimation"));
SoTimeSensor* SoTimeSensor470 = new SoTimeSensor();
SoTimeSensor470->setDEF(QString("JumpTimer"));
SoTimeSensor470->setCycleInterval(3.73);
SoTimeSensor470->setLoop(true);
SoGroup469->addChild(*SoTimeSensor470);

SoOrientationInterpolator* SoOrientationInterpolator471 = new SoOrientationInterpolator();
SoOrientationInterpolator471->setDEF(QString("Jump_r_metatarsal_PitchInterpolator"));
SoOrientationInterpolator471->setKey(new float[]{0.0,0.2,0.4,0.6,0.7,1.0}, 6);
SoOrientationInterpolator471->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 24);
SoGroup469->addChild(*SoOrientationInterpolator471);

SoOrientationInterpolator* SoOrientationInterpolator472 = new SoOrientationInterpolator();
SoOrientationInterpolator472->setDEF(QString("Jump_r_ankle_RotationInterpolator"));
SoOrientationInterpolator472->setKey(new float[]{0.0,0.1,0.15,0.25,0.28,0.32,0.35,0.64,0.76,0.84,0.88,0.92,0.96,1.0}, 14);
SoOrientationInterpolator472->setKeyValue(new float[]{0.0,0.0,1.0,0.0,-1.0,0.0,0.0,0.6735,-1.0,0.0,0.0,0.6735,-1.0,0.0,0.0,0.3527,-1.0,0.0,0.0,0.3038,-1.0,0.0,0.0,0.07964,1.0,0.0,0.0,1.3,1.0,0.0,0.0,0.6509,1.0,0.0,0.0,0.3001,-1.0,0.0,0.0,0.2087,-1.0,0.0,0.0,0.3756,-1.0,0.0,0.0,0.3279,-1.0,0.0,0.0,0.1193,0.0,0.0,1.0,0.0}, 56);
SoGroup469->addChild(*SoOrientationInterpolator472);

SoOrientationInterpolator* SoOrientationInterpolator473 = new SoOrientationInterpolator();
SoOrientationInterpolator473->setDEF(QString("Jump_r_knee_RotationInterpolator"));
SoOrientationInterpolator473->setKey(new float[]{0.0,0.2,0.25,0.3,0.64,0.76,0.88,1.0}, 8);
SoOrientationInterpolator473->setKeyValue(new float[]{0.0,0.0,1.0,0.0,1.0,0.0,0.0,2.5,1.0,0.0,0.0,1.7,0.0,0.0,1.0,0.0,1.0,0.0,0.0,0.9507,1.0,0.0,0.0,0.5845,1.0,0.0,0.0,0.9054,0.0,0.0,1.0,0.0}, 32);
SoGroup469->addChild(*SoOrientationInterpolator473);

SoOrientationInterpolator* SoOrientationInterpolator474 = new SoOrientationInterpolator();
SoOrientationInterpolator474->setDEF(QString("Jump_r_hip_RotationInterpolator"));
SoOrientationInterpolator474->setKey(new float[]{0.0,0.18,0.24,0.26,0.28,0.32,0.48,0.64,0.76,0.88,1.0}, 11);
SoOrientationInterpolator474->setKeyValue(new float[]{0.0,0.0,1.0,0.0,-1.0,0.0,0.0,1.63,-1.0,0.0,0.0,1.7,-1.0,0.0,0.0,1.55,-1.0,0.0,0.0,0.8943,-1.0,0.0,0.0,0.3698,0.0,0.0,1.0,0.0,-1.0,0.0,0.0,0.4963,-1.0,0.0,0.0,0.3829,-1.0,0.0,0.0,0.5169,0.0,0.0,1.0,0.0}, 44);
SoGroup469->addChild(*SoOrientationInterpolator474);

SoOrientationInterpolator* SoOrientationInterpolator475 = new SoOrientationInterpolator();
SoOrientationInterpolator475->setDEF(QString("Jump_l_ankle_RotationInterpolator"));
SoOrientationInterpolator475->setKey(new float[]{0.0,0.28,0.32,0.36,0.4,0.44,0.48,0.64,0.76,0.84,0.88,0.92,0.96,1.0}, 14);
SoOrientationInterpolator475->setKeyValue(new float[]{0.0,0.0,1.0,0.0,-1.0,0.0,0.0,0.625,-1.0,0.0,0.0,0.625,-1.0,0.0,0.0,0.3364,-1.0,0.0,0.0,0.2742,-1.0,0.0,0.0,0.05078,1.0,0.0,0.0,0.2833,1.0,0.0,0.0,0.6667,1.0,0.0,0.0,0.2833,-1.0,0.0,0.0,0.2108,-1.0,0.0,0.0,0.375,-1.0,0.0,0.0,0.3146,-1.0,0.0,0.0,0.1174,0.0,0.0,1.0,0.0}, 56);
SoGroup469->addChild(*SoOrientationInterpolator475);

SoOrientationInterpolator* SoOrientationInterpolator476 = new SoOrientationInterpolator();
SoOrientationInterpolator476->setDEF(QString("Jump_l_knee_RotationInterpolator"));
SoOrientationInterpolator476->setKey(new float[]{0.0,0.28,0.32,0.48,0.64,0.76,0.88,1.0}, 8);
SoOrientationInterpolator476->setKeyValue(new float[]{0.0,0.0,1.0,0.0,1.0,0.0,0.0,2.047,1.0,0.0,0.0,2.047,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.566,1.0,0.0,0.0,0.5913,1.0,0.0,0.0,0.9235,0.0,0.0,1.0,0.0}, 32);
SoGroup469->addChild(*SoOrientationInterpolator476);

SoOrientationInterpolator* SoOrientationInterpolator477 = new SoOrientationInterpolator();
SoOrientationInterpolator477->setDEF(QString("Jump_l_hip_RotationInterpolator"));
SoOrientationInterpolator477->setKey(new float[]{0.0,0.28,0.32,0.36,0.4,0.44,0.48,0.64,0.76,0.88,1.0}, 11);
SoOrientationInterpolator477->setKeyValue(new float[]{0.0,0.0,1.0,0.0,1.0,0.0,0.0,4.349,1.0,0.0,0.0,4.349,1.0,0.0,0.0,4.615,-1.0,0.0,0.0,0.9136,-1.0,0.0,0.0,0.3614,0.0,0.0,1.0,0.0,-1.0,0.0,0.0,0.7869,-1.0,0.0,0.0,0.3918,-1.0,0.0,0.0,0.5433,0.0,0.0,1.0,0.0}, 44);
SoGroup469->addChild(*SoOrientationInterpolator477);

SoOrientationInterpolator* SoOrientationInterpolator478 = new SoOrientationInterpolator();
SoOrientationInterpolator478->setDEF(QString("Jump_lower_body_RotationInterpolator"));
SoOrientationInterpolator478->setKey(new float[]{0.0,0.28,0.32,0.48,0.76,1.0}, 6);
SoOrientationInterpolator478->setKeyValue(new float[]{0.0,0.0,1.0,0.0,1.0,0.0,0.0,0.1892,1.0,0.0,0.0,0.1892,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 24);
SoGroup469->addChild(*SoOrientationInterpolator478);

SoOrientationInterpolator* SoOrientationInterpolator479 = new SoOrientationInterpolator();
SoOrientationInterpolator479->setDEF(QString("Jump_r_wrist_RotationInterpolator"));
SoOrientationInterpolator479->setKey(new float[]{0.0,0.28,0.32,0.64,0.76,1.0}, 6);
SoOrientationInterpolator479->setKeyValue(new float[]{0.0,0.0,1.0,0.0,-0.0585279,0.983903,-0.168849,1.85956,-0.0585279,0.983903,-0.168849,1.85956,-0.00222418,0.99801,-0.0630095,1.46072,0.0,1.0,0.0,0.497349,0.0,0.0,1.0,0.0}, 24);
SoGroup469->addChild(*SoOrientationInterpolator479);

SoOrientationInterpolator* SoOrientationInterpolator480 = new SoOrientationInterpolator();
SoOrientationInterpolator480->setDEF(QString("Jump_r_elbow_RotationInterpolator"));
SoOrientationInterpolator480->setKey(new float[]{0.0,0.28,0.32,0.64,0.76,1.0}, 6);
SoOrientationInterpolator480->setKeyValue(new float[]{0.0,0.0,1.0,0.0,-1.0,0.0,0.0,0.04151,-1.0,0.0,0.0,0.04151,-1.0,0.0,0.0,0.5855,-1.0,0.0,0.0,0.5852,0.0,0.0,1.0,0.0}, 24);
SoGroup469->addChild(*SoOrientationInterpolator480);

SoOrientationInterpolator* SoOrientationInterpolator481 = new SoOrientationInterpolator();
SoOrientationInterpolator481->setDEF(QString("Jump_r_shoulder_RotationInterpolator"));
SoOrientationInterpolator481->setKey(new float[]{0.0,0.28,0.32,0.64,0.76,0.88,1.0}, 7);
SoOrientationInterpolator481->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.9992,0.02042,0.03558,4.688,0.9992,0.02042,0.03558,4.688,0.9989,-0.04623,0.005159,4.079,-0.8687,-0.2525,-0.4261,1.501,-0.941,-0.2893,-0.1754,0.4788,0.0,0.0,1.0,0.0}, 28);
SoGroup469->addChild(*SoOrientationInterpolator481);

SoOrientationInterpolator* SoOrientationInterpolator482 = new SoOrientationInterpolator();
SoOrientationInterpolator482->setDEF(QString("Jump_l_wrist_RotationInterpolator"));
SoOrientationInterpolator482->setKey(new float[]{0.0,0.48,0.52,0.64,0.76,0.88,1.0}, 7);
SoOrientationInterpolator482->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0672928,0.989475,-0.128107,4.15574,0.0672928,0.989475,-0.128107,4.15574,0.00364942,0.999901,0.0135896,4.5822,0.0,-1.0,0.0,0.655922,-0.00050618,-0.999999,0.0012782,1.28397,0.0,0.0,1.0,0.0}, 28);
SoGroup469->addChild(*SoOrientationInterpolator482);

SoOrientationInterpolator* SoOrientationInterpolator483 = new SoOrientationInterpolator();
SoOrientationInterpolator483->setDEF(QString("Jump_l_elbow_RotationInterpolator"));
SoOrientationInterpolator483->setKey(new float[]{0.0,0.28,0.32,0.58,0.72,1.0}, 6);
SoOrientationInterpolator483->setKeyValue(new float[]{0.0,0.0,1.0,0.0,-1.0,0.0,0.0,1.13,-1.0,0.0,0.0,1.7,-1.0,0.0,0.0,1.7,-1.0,0.0,0.0,0.4,0.0,0.0,1.0,0.0}, 24);
SoGroup469->addChild(*SoOrientationInterpolator483);

SoOrientationInterpolator* SoOrientationInterpolator484 = new SoOrientationInterpolator();
SoOrientationInterpolator484->setDEF(QString("Jump_l_shoulder_RotationInterpolator"));
SoOrientationInterpolator484->setKey(new float[]{0.0,0.28,0.32,0.64,0.76,0.88,1.0}, 7);
SoOrientationInterpolator484->setKeyValue(new float[]{0.0,0.0,1.0,0.0,-0.9987,0.02554,0.04498,1.57,-0.9987,0.02554,0.04498,1.57,1.0,0.0004113,0.003055,4.114,-0.8413,0.3238,0.4329,1.453,-0.877,0.4198,0.2337,0.6009,0.0,0.0,1.0,0.0}, 28);
SoGroup469->addChild(*SoOrientationInterpolator484);

SoOrientationInterpolator* SoOrientationInterpolator485 = new SoOrientationInterpolator();
SoOrientationInterpolator485->setDEF(QString("Jump_head_RotationInterpolator"));
SoOrientationInterpolator485->setKey(new float[]{0.0,0.28,0.32,0.48,0.76,1.0}, 6);
SoOrientationInterpolator485->setKeyValue(new float[]{0.0,0.0,1.0,0.0,-1.0,0.0,0.0,0.5989,-1.0,0.0,0.0,0.5989,-1.0,0.0,0.0,0.3216,1.0,0.0,0.0,0.06503,0.0,0.0,1.0,0.0}, 24);
SoGroup469->addChild(*SoOrientationInterpolator485);

SoOrientationInterpolator* SoOrientationInterpolator486 = new SoOrientationInterpolator();
SoOrientationInterpolator486->setDEF(QString("Jump_neck_RotationInterpolator"));
SoOrientationInterpolator486->setKey(new float[]{0.0,0.28,0.32,0.48,0.76,1.0}, 6);
SoOrientationInterpolator486->setKeyValue(new float[]{0.0,0.0,1.0,0.0,-1.0,0.0,0.0,0.1942,-1.0,0.0,0.0,0.1942,0.0,0.0,1.0,0.0,1.0,0.0,0.0,0.2284,0.0,0.0,1.0,0.0}, 24);
SoGroup469->addChild(*SoOrientationInterpolator486);

SoOrientationInterpolator* SoOrientationInterpolator487 = new SoOrientationInterpolator();
SoOrientationInterpolator487->setDEF(QString("Jump_upper_body_RotationInterpolator"));
SoOrientationInterpolator487->setKey(new float[]{0.0,0.22,0.28,0.34,0.71,0.88,1.0}, 7);
SoOrientationInterpolator487->setKeyValue(new float[]{0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.05,1.0,0.0,0.0,1.051,-1.0,0.0,0.0,0.257,1.0,0.0,0.0,0.2171,1.0,0.0,0.0,0.3465,0.0,0.0,1.0,0.0}, 28);
SoGroup469->addChild(*SoOrientationInterpolator487);

SoOrientationInterpolator* SoOrientationInterpolator488 = new SoOrientationInterpolator();
SoOrientationInterpolator488->setDEF(QString("Jump_whole_body_RotationInterpolator"));
SoOrientationInterpolator488->setKey(new float[]{0.0,0.28,0.32,0.48,0.64,0.76,1.0}, 7);
SoOrientationInterpolator488->setKeyValue(new float[]{0.0,0.0,1.0,0.0,1.0,0.0,0.0,0.3273,1.0,0.0,0.0,0.3273,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 28);
SoGroup469->addChild(*SoOrientationInterpolator488);

SoPositionInterpolator* SoPositionInterpolator489 = new SoPositionInterpolator();
SoPositionInterpolator489->setDEF(QString("Jump_whole_body_TranslationInterpolator"));
SoPositionInterpolator489->setKey(new float[]{0.0,0.04,0.07,0.11,0.15,0.19,0.22,0.25,0.27,0.31,0.33,0.35,0.38,0.53,0.544,0.76,0.8,0.84,0.88,0.92,0.96,1.0}, 22);
SoPositionInterpolator489->setKeyValue(new float[]{0.0,0.0,0.0,0.0,-0.01264,-0.01289,0.0,-0.04712,-0.03738,-0.0003345,-0.1049,-0.05353,-0.0005712,-0.1892,-0.06561,-0.0008233,-0.286,-0.06276,-0.0009591,-0.3795,-0.05148,-0.00106,-0.4484,-0.03656,-0.00106,-0.4484,-0.03656,-0.001122,-0.25,-0.1499,-0.0008616,-0.05,-0.06358,-0.0005128,0.15,-0.05488,0.0004779,0.55,0.02732,0.0001728,1.385,0.006873,0.00017,1.395,0.0069,0.0,0.35,0.02148,0.0,-0.01299,-0.01057,0.0,-0.06932,-0.01064,0.0001365,-0.1037,-0.005059,0.0001279,-0.07198,-0.007596,0.000141,-0.01626,-0.004935,0.0,0.0,0.0}, 66);
SoGroup469->addChild(*SoPositionInterpolator489);

SoOrientationInterpolator* SoOrientationInterpolator490 = new SoOrientationInterpolator();
SoOrientationInterpolator490->setDEF(QString("Jump_l_sternoclavicular_RollInterpolator"));
SoOrientationInterpolator490->setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator490->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.2,0.0,0.0,1.0,0.22,0.0,0.0,1.0,0.2,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 24);
SoGroup469->addChild(*SoOrientationInterpolator490);

SoOrientationInterpolator* SoOrientationInterpolator491 = new SoOrientationInterpolator();
SoOrientationInterpolator491->setDEF(QString("Jump_l_acromioclavicular_RollInterpolator"));
SoOrientationInterpolator491->setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator491->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.05,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 24);
SoGroup469->addChild(*SoOrientationInterpolator491);

SoOrientationInterpolator* SoOrientationInterpolator492 = new SoOrientationInterpolator();
SoOrientationInterpolator492->setDEF(QString("Jump_r_sternoclavicular_RollInterpolator"));
SoOrientationInterpolator492->setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator492->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,-0.2,0.0,0.0,1.0,-0.22,0.0,0.0,1.0,-0.2,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 24);
SoGroup469->addChild(*SoOrientationInterpolator492);

SoOrientationInterpolator* SoOrientationInterpolator493 = new SoOrientationInterpolator();
SoOrientationInterpolator493->setDEF(QString("Jump_r_acromioclavicular_RollInterpolator"));
SoOrientationInterpolator493->setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator493->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,-0.05,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 24);
SoGroup469->addChild(*SoOrientationInterpolator493);

SoOrientationInterpolator* SoOrientationInterpolator494 = new SoOrientationInterpolator();
SoOrientationInterpolator494->setDEF(QString("Jump_sacroiliac_YawInterpolator"));
SoOrientationInterpolator494->setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator494->setKeyValue(new float[]{0.0,1.0,0.0,0.0,0.0,-1.0,0.0,0.1,0.0,1.0,0.0,0.0,0.0,1.0,-1.0,0.24,0.0,-1.0,0.0,0.4,0.0,1.0,0.0,0.0}, 24);
SoGroup469->addChild(*SoOrientationInterpolator494);

SoOrientationInterpolator* SoOrientationInterpolator495 = new SoOrientationInterpolator();
SoOrientationInterpolator495->setDEF(QString("Jump_vl5_YawInterpolator"));
SoOrientationInterpolator495->setKey(new float[]{0.0,0.2,0.4,0.5,0.6,0.8,1.0}, 7);
SoOrientationInterpolator495->setKeyValue(new float[]{0.0,1.0,0.0,0.0,0.0,1.0,0.0,-0.1,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,0.6,0.0,1.0,0.0,0.1,0.0,1.0,0.0,0.0}, 28);
SoGroup469->addChild(*SoOrientationInterpolator495);

SoOrientationInterpolator* SoOrientationInterpolator496 = new SoOrientationInterpolator();
SoOrientationInterpolator496->setDEF(QString("Jump_vc6_YawInterpolator"));
SoOrientationInterpolator496->setKey(new float[]{0.0,0.2,0.4,0.5,0.6,0.8,1.0}, 7);
SoOrientationInterpolator496->setKeyValue(new float[]{0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.8,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,-1.0,0.0,0.0,0.6,0.0,-1.0,0.0,0.8,0.0,1.0,0.0,0.0}, 28);
SoGroup469->addChild(*SoOrientationInterpolator496);

SoOrientationInterpolator* SoOrientationInterpolator497 = new SoOrientationInterpolator();
SoOrientationInterpolator497->setDEF(QString("Jump_l_thumb1_PitchInterpolator"));
SoOrientationInterpolator497->setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator497->setKeyValue(new float[]{1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.5,1.0,0.0,0.0,1.1,1.0,0.0,0.0,0.7,1.0,0.0,0.0,0.2,1.0,0.0,0.0,0.0}, 24);
SoGroup469->addChild(*SoOrientationInterpolator497);

SoOrientationInterpolator* SoOrientationInterpolator498 = new SoOrientationInterpolator();
SoOrientationInterpolator498->setDEF(QString("Jump_r_thumb1_PitchInterpolator"));
SoOrientationInterpolator498->setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator498->setKeyValue(new float[]{1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.5,1.0,0.0,0.0,1.1,1.0,0.0,0.0,0.7,1.0,0.0,0.0,0.2,1.0,0.0,0.0,0.0}, 24);
SoGroup469->addChild(*SoOrientationInterpolator498);

SoNode32->addChild(*SoGroup469);

SoGroup* SoGroup499 = new SoGroup();
SoGroup499->setDEF(QString("KickAnimation"));
SoTimeSensor* SoTimeSensor500 = new SoTimeSensor();
SoTimeSensor500->setDEF(QString("KickTimer"));
SoTimeSensor500->setCycleInterval(3.73);
SoTimeSensor500->setLoop(true);
SoGroup499->addChild(*SoTimeSensor500);

SoOrientationInterpolator* SoOrientationInterpolator501 = new SoOrientationInterpolator();
SoOrientationInterpolator501->setDEF(QString("Kick_l_sternoclavicular_RollInterpolator"));
SoOrientationInterpolator501->setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator501->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.2,0.0,0.0,1.0,0.22,0.0,0.0,1.0,0.2,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 24);
SoGroup499->addChild(*SoOrientationInterpolator501);

SoOrientationInterpolator* SoOrientationInterpolator502 = new SoOrientationInterpolator();
SoOrientationInterpolator502->setDEF(QString("Kick_l_acromioclavicular_RollInterpolator"));
SoOrientationInterpolator502->setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator502->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.05,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 24);
SoGroup499->addChild(*SoOrientationInterpolator502);

SoOrientationInterpolator* SoOrientationInterpolator503 = new SoOrientationInterpolator();
SoOrientationInterpolator503->setDEF(QString("Kick_l_shoulder_RollInterpolator"));
SoOrientationInterpolator503->setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator503->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.76,-0.25,0.0,1.0,1.76,0.0,0.0,1.0,1.256,0.0,0.0,1.0,0.05,0.0,0.0,1.0,0.0}, 24);
SoGroup499->addChild(*SoOrientationInterpolator503);

SoOrientationInterpolator* SoOrientationInterpolator504 = new SoOrientationInterpolator();
SoOrientationInterpolator504->setDEF(QString("Kick_l_ForeArm_PitchInterpolator"));
SoOrientationInterpolator504->setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator504->setKeyValue(new float[]{1.0,0.0,0.0,0.0,1.0,0.0,0.0,-0.55,-1.0,0.25,0.0,2.55,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0}, 24);
SoGroup499->addChild(*SoOrientationInterpolator504);

SoOrientationInterpolator* SoOrientationInterpolator505 = new SoOrientationInterpolator();
SoOrientationInterpolator505->setDEF(QString("Kick_l_wrist_RollInterpolator"));
SoOrientationInterpolator505->setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator505->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.55,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 24);
SoGroup499->addChild(*SoOrientationInterpolator505);

SoOrientationInterpolator* SoOrientationInterpolator506 = new SoOrientationInterpolator();
SoOrientationInterpolator506->setDEF(QString("Kick_l_thumb1_PitchInterpolator"));
SoOrientationInterpolator506->setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator506->setKeyValue(new float[]{1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.5,1.0,0.0,0.0,1.1,1.0,0.0,0.0,0.7,1.0,0.0,0.0,0.2,1.0,0.0,0.0,0.0}, 24);
SoGroup499->addChild(*SoOrientationInterpolator506);

SoOrientationInterpolator* SoOrientationInterpolator507 = new SoOrientationInterpolator();
SoOrientationInterpolator507->setDEF(QString("Kick_r_sternoclavicular_RollInterpolator"));
SoOrientationInterpolator507->setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator507->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,-0.2,0.0,0.0,1.0,-0.22,0.0,0.0,1.0,-0.2,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 24);
SoGroup499->addChild(*SoOrientationInterpolator507);

SoOrientationInterpolator* SoOrientationInterpolator508 = new SoOrientationInterpolator();
SoOrientationInterpolator508->setDEF(QString("Kick_r_acromioclavicular_RollInterpolator"));
SoOrientationInterpolator508->setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator508->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,-0.05,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 24);
SoGroup499->addChild(*SoOrientationInterpolator508);

SoOrientationInterpolator* SoOrientationInterpolator509 = new SoOrientationInterpolator();
SoOrientationInterpolator509->setDEF(QString("Kick_r_shoulder_RollInterpolator"));
SoOrientationInterpolator509->setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator509->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,-1.76,0.25,0.0,1.0,-1.76,0.0,0.0,1.0,-1.256,0.0,0.0,1.0,-0.05,0.0,0.0,1.0,0.0}, 24);
SoGroup499->addChild(*SoOrientationInterpolator509);

SoOrientationInterpolator* SoOrientationInterpolator510 = new SoOrientationInterpolator();
SoOrientationInterpolator510->setDEF(QString("Kick_r_ForeArm_PitchInterpolator"));
SoOrientationInterpolator510->setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator510->setKeyValue(new float[]{1.0,0.0,0.0,0.0,1.0,0.0,0.0,-0.55,1.0,0.25,0.0,-2.55,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0}, 24);
SoGroup499->addChild(*SoOrientationInterpolator510);

SoOrientationInterpolator* SoOrientationInterpolator511 = new SoOrientationInterpolator();
SoOrientationInterpolator511->setDEF(QString("Kick_r_wrist_RollInterpolator"));
SoOrientationInterpolator511->setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator511->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,-0.55,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 24);
SoGroup499->addChild(*SoOrientationInterpolator511);

SoOrientationInterpolator* SoOrientationInterpolator512 = new SoOrientationInterpolator();
SoOrientationInterpolator512->setDEF(QString("Kick_r_thumb1_PitchInterpolator"));
SoOrientationInterpolator512->setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator512->setKeyValue(new float[]{1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.5,1.0,0.0,0.0,1.1,1.0,0.0,0.0,0.7,1.0,0.0,0.0,0.2,1.0,0.0,0.0,0.0}, 24);
SoGroup499->addChild(*SoOrientationInterpolator512);

SoOrientationInterpolator* SoOrientationInterpolator513 = new SoOrientationInterpolator();
SoOrientationInterpolator513->setDEF(QString("Kick_r_hip_PitchInterpolator"));
SoOrientationInterpolator513->setKey(new float[]{0.0,0.2,0.3,0.5,0.6,0.9,1.0}, 7);
SoOrientationInterpolator513->setKeyValue(new float[]{1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.9,-1.0,0.0,0.0,1.75,-1.0,0.0,0.0,2.25,-1.0,0.0,0.0,2.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0}, 28);
SoGroup499->addChild(*SoOrientationInterpolator513);

SoOrientationInterpolator* SoOrientationInterpolator514 = new SoOrientationInterpolator();
SoOrientationInterpolator514->setDEF(QString("Kick_r_knee_PitchInterpolator"));
SoOrientationInterpolator514->setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator514->setKeyValue(new float[]{0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.95,1.0,0.0,0.0,1.75,-1.0,0.0,0.0,0.28,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0}, 24);
SoGroup499->addChild(*SoOrientationInterpolator514);

SoOrientationInterpolator* SoOrientationInterpolator515 = new SoOrientationInterpolator();
SoOrientationInterpolator515->setDEF(QString("Kick_l_hip_PitchInterpolator"));
SoOrientationInterpolator515->setKey(new float[]{0.0,0.2,0.3,0.5,0.6,0.9,1.0}, 7);
SoOrientationInterpolator515->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 28);
SoGroup499->addChild(*SoOrientationInterpolator515);

SoOrientationInterpolator* SoOrientationInterpolator516 = new SoOrientationInterpolator();
SoOrientationInterpolator516->setDEF(QString("Kick_l_knee_PitchInterpolator"));
SoOrientationInterpolator516->setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator516->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 24);
SoGroup499->addChild(*SoOrientationInterpolator516);

SoOrientationInterpolator* SoOrientationInterpolator517 = new SoOrientationInterpolator();
SoOrientationInterpolator517->setDEF(QString("Kick_r_ankle_PitchInterpolator"));
SoOrientationInterpolator517->setKey(new float[]{0.0,0.2,0.4,0.6,0.7,1.0}, 6);
SoOrientationInterpolator517->setKeyValue(new float[]{0.0,0.0,1.0,0.0,-1.0,0.0,0.0,0.9,-1.0,0.0,0.0,0.95,1.0,0.0,0.0,0.75,-1.0,0.0,0.0,0.05,1.0,0.0,0.0,0.0}, 24);
SoGroup499->addChild(*SoOrientationInterpolator517);

SoOrientationInterpolator* SoOrientationInterpolator518 = new SoOrientationInterpolator();
SoOrientationInterpolator518->setDEF(QString("Kick_r_metatarsal_PitchInterpolator"));
SoOrientationInterpolator518->setKey(new float[]{0.0,0.2,0.4,0.6,0.7,1.0}, 6);
SoOrientationInterpolator518->setKeyValue(new float[]{1.0,0.0,0.0,0.0,-1.0,0.0,0.0,0.5,-1.0,0.0,0.0,0.7,1.0,0.0,0.0,0.75,-1.0,0.0,0.0,0.2,1.0,0.0,0.0,0.0}, 24);
SoGroup499->addChild(*SoOrientationInterpolator518);

SoOrientationInterpolator* SoOrientationInterpolator519 = new SoOrientationInterpolator();
SoOrientationInterpolator519->setDEF(QString("Kick_sacroiliac_YawInterpolator"));
SoOrientationInterpolator519->setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator519->setKeyValue(new float[]{0.0,1.0,0.0,0.0,0.0,-1.0,0.0,0.1,0.0,1.0,0.0,0.0,0.0,1.0,-1.0,0.24,0.0,-1.0,0.0,0.4,0.0,1.0,0.0,0.0}, 24);
SoGroup499->addChild(*SoOrientationInterpolator519);

SoOrientationInterpolator* SoOrientationInterpolator520 = new SoOrientationInterpolator();
SoOrientationInterpolator520->setDEF(QString("Kick_vl5_YawInterpolator"));
SoOrientationInterpolator520->setKey(new float[]{0.0,0.2,0.4,0.5,0.6,0.8,1.0}, 7);
SoOrientationInterpolator520->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 28);
SoGroup499->addChild(*SoOrientationInterpolator520);

SoOrientationInterpolator* SoOrientationInterpolator521 = new SoOrientationInterpolator();
SoOrientationInterpolator521->setDEF(QString("Kick_vc6_YawInterpolator"));
SoOrientationInterpolator521->setKey(new float[]{0.0,0.2,0.4,0.5,0.6,0.8,1.0}, 7);
SoOrientationInterpolator521->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 28);
SoGroup499->addChild(*SoOrientationInterpolator521);

SoOrientationInterpolator* SoOrientationInterpolator522 = new SoOrientationInterpolator();
SoOrientationInterpolator522->setDEF(QString("Kick_lower_body_RotationInterpolator"));
SoOrientationInterpolator522->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator522->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup499->addChild(*SoOrientationInterpolator522);

SoOrientationInterpolator* SoOrientationInterpolator523 = new SoOrientationInterpolator();
SoOrientationInterpolator523->setDEF(QString("Kick_upper_body_RotationInterpolator"));
SoOrientationInterpolator523->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator523->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup499->addChild(*SoOrientationInterpolator523);

SoOrientationInterpolator* SoOrientationInterpolator524 = new SoOrientationInterpolator();
SoOrientationInterpolator524->setDEF(QString("Kick_whole_body_RotationInterpolator"));
SoOrientationInterpolator524->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator524->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup499->addChild(*SoOrientationInterpolator524);

SoPositionInterpolator* SoPositionInterpolator525 = new SoPositionInterpolator();
SoPositionInterpolator525->setDEF(QString("Kick_whole_body_TranslationInterpolator"));
SoPositionInterpolator525->setKey(new float[]{0.0,0.5,1.0}, 3);
SoPositionInterpolator525->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 9);
SoGroup499->addChild(*SoPositionInterpolator525);

SoOrientationInterpolator* SoOrientationInterpolator526 = new SoOrientationInterpolator();
SoOrientationInterpolator526->setDEF(QString("Kick_neck_RotationInterpolator"));
SoOrientationInterpolator526->setKey(new float[]{0.0,0.25,0.55,1.0}, 4);
SoOrientationInterpolator526->setKeyValue(new float[]{0.0,0.0,1.0,0.0,1.0,0.0,0.0,0.7,1.0,0.0,0.0,0.5,0.0,0.0,1.0,0.0}, 16);
SoGroup499->addChild(*SoOrientationInterpolator526);

SoNode32->addChild(*SoGroup499);

SoGroup* SoGroup527 = new SoGroup();
SoGroup527->setDEF(QString("Interface"));
SoTransform* SoTransform528 = new SoTransform();
SoTransform528->setDEF(QString("CoordinateSystemFloor"));
SoTransform528->setScale(new float[]{0.1,0.1,0.1});
SoShape* SoShape529 = new SoShape();
SoShape529->setDEF(QString("AxisLinesShape"));
SoIndexedLineSet* SoIndexedLineSet530 = new SoIndexedLineSet();
SoIndexedLineSet530->setColorPerVertex(false);
SoIndexedLineSet530->setColorIndex(new int[]{0,1,2}, 3);
SoIndexedLineSet530->setCoordIndex(new int32_t[]{0,1,-1,0,2,-1,0,3,-1}, 9);
SoColor* SoColor531 = new SoColor();
SoColor531->setColor(new float[]{1.0,0.0,0.0,0.0,0.6,0.0,0.0,0.0,1.0}, 9);
SoIndexedLineSet530->setColor(*SoColor531);

SoCoordinate* SoCoordinate532 = new SoCoordinate();
SoCoordinate532->setPoint(new float[]{0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0}, 12);
SoIndexedLineSet530->setCoord(*SoCoordinate532);

SoShape529->setGeometry(*SoIndexedLineSet530);

SoTransform528->addChild(*SoShape529);

SoGroup527->addChild(*SoTransform528);

SoProximitySensor* SoProximitySensor533 = new SoProximitySensor();
SoProximitySensor533->setDEF(QString("HudProx"));
SoProximitySensor533->setSize(new float[]{50.0,50.0,50.0});
SoGroup527->addChild(*SoProximitySensor533);

SoTransform* SoTransform534 = new SoTransform();
SoTransform534->setDEF(QString("HudXform"));
SoTransform534->setTranslation(new float[]{2.0,1.0,2.0});
SoTransform534->setRotation(new float[]{0.0,1.0,0.0,0.78});
SoTransform* SoTransform535 = new SoTransform();
SoTransform535->setTranslation(new float[]{-0.4,-0.01,-0.75});
SoTransform535->setScale(new float[]{0.02,0.02,0.02});
SoTransform* SoTransform536 = new SoTransform();
SoTransform536->setDEF(QString("Stand_Text"));
SoTransform536->setTranslation(new float[]{0.0,-0.9,0.0});
SoTouchSensor* SoTouchSensor537 = new SoTouchSensor();
SoTouchSensor537->setDEF(QString("Stand_Touch"));
SoTransform536->addChild(*SoTouchSensor537);

SoShape* SoShape538 = new SoShape();
SoShape538->setDEF(QString("StandText"));
SoVRMLAppearance* SoVRMLAppearance539 = new SoVRMLAppearance();
SoMaterial* SoMaterial540 = new SoMaterial();
SoMaterial540->setDEF(QString("text_color"));
SoMaterial540->setAmbientIntensity(1);
SoMaterial540->setDiffuseColor(new float[]{0.819,0.521,0.169});
SoMaterial540->setSpecularColor(new float[]{0.819,0.521,0.169});
SoMaterial540->setEmissiveColor(new float[]{0.819,0.521,0.169});
SoVRMLAppearance539->addChild(*SoMaterial540);

SoShape538->addChild(*SoVRMLAppearance539);

SoText* SoText541 = new SoText();
SoText541->setString(new QString[]{QString("Stand")}, 1);
SoFontStyle* SoFontStyle542 = new SoFontStyle();
SoFontStyle542->setFamily(new QString[]{QString("SANS")}, 1);
SoText541->setFontStyle(*SoFontStyle542);

SoShape538->setGeometry(*SoText541);

SoTransform536->addChild(*SoShape538);

SoShape* SoShape543 = new SoShape();
SoShape543->setDEF(QString("Stand_Back"));
SoVRMLAppearance* SoVRMLAppearance544 = new SoVRMLAppearance();
SoMaterial* SoMaterial545 = new SoMaterial();
SoMaterial545->setDEF(QString("Clear"));
SoMaterial545->setAmbientIntensity(1);
SoMaterial545->setDiffuseColor(new float[]{0.0,0.5,0.0});
SoMaterial545->setEmissiveColor(new float[]{0.0,0.5,0.0});
SoMaterial545->setTransparency(0.8);
SoVRMLAppearance544->addChild(*SoMaterial545);

SoShape543->addChild(*SoVRMLAppearance544);

SoIndexedFaceSet* SoIndexedFaceSet546 = new SoIndexedFaceSet();
SoIndexedFaceSet546->setDEF(QString("Backing"));
SoIndexedFaceSet546->setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
SoCoordinate* SoCoordinate547 = new SoCoordinate();
SoCoordinate547->setPoint(new float[]{-0.2,-0.25,-0.01,3.0,-0.25,-0.01,3.0,1.0,-0.01,-0.2,1.0,-0.01}, 12);
SoIndexedFaceSet546->setCoord(*SoCoordinate547);

SoShape543->setGeometry(*SoIndexedFaceSet546);

SoTransform536->addChild(*SoShape543);

SoTransform535->addChild(*SoTransform536);

SoTransform* SoTransform548 = new SoTransform();
SoTransform548->setDEF(QString("Pitch_Text"));
SoTransform548->setTranslation(new float[]{0.0,-2.4,0.0});
SoTouchSensor* SoTouchSensor549 = new SoTouchSensor();
SoTouchSensor549->setDEF(QString("Pitch_Touch"));
SoTransform548->addChild(*SoTouchSensor549);

SoShape* SoShape550 = new SoShape();
SoShape550->setDEF(QString("PitchText"));
SoVRMLAppearance* SoVRMLAppearance551 = new SoVRMLAppearance();
SoMaterial* SoMaterial552 = new SoMaterial();
SoMaterial552->setUSE(QString("text_color"));
SoVRMLAppearance551->addChild(*SoMaterial552);

SoShape550->addChild(*SoVRMLAppearance551);

SoText* SoText553 = new SoText();
SoText553->setString(new QString[]{QString("Pitch")}, 1);
SoFontStyle* SoFontStyle554 = new SoFontStyle();
SoFontStyle554->setFamily(new QString[]{QString("SANS")}, 1);
SoText553->setFontStyle(*SoFontStyle554);

SoShape550->setGeometry(*SoText553);

SoTransform548->addChild(*SoShape550);

SoShape* SoShape555 = new SoShape();
SoShape555->setDEF(QString("Pitch_Back"));
SoVRMLAppearance* SoVRMLAppearance556 = new SoVRMLAppearance();
SoMaterial* SoMaterial557 = new SoMaterial();
SoMaterial557->setUSE(QString("Clear"));
SoVRMLAppearance556->addChild(*SoMaterial557);

SoShape555->addChild(*SoVRMLAppearance556);

SoIndexedFaceSet* SoIndexedFaceSet558 = new SoIndexedFaceSet();
SoIndexedFaceSet558->setUSE(QString("Backing"));
SoShape555->setGeometry(*SoIndexedFaceSet558);

SoTransform548->addChild(*SoShape555);

SoTransform535->addChild(*SoTransform548);

SoTransform* SoTransform559 = new SoTransform();
SoTransform559->setDEF(QString("Yaw_Text"));
SoTransform559->setTranslation(new float[]{0.0,-3.8,0.0});
SoTouchSensor* SoTouchSensor560 = new SoTouchSensor();
SoTouchSensor560->setDEF(QString("Yaw_Touch"));
SoTransform559->addChild(*SoTouchSensor560);

SoShape* SoShape561 = new SoShape();
SoShape561->setDEF(QString("YawText"));
SoVRMLAppearance* SoVRMLAppearance562 = new SoVRMLAppearance();
SoMaterial* SoMaterial563 = new SoMaterial();
SoMaterial563->setUSE(QString("text_color"));
SoVRMLAppearance562->addChild(*SoMaterial563);

SoShape561->addChild(*SoVRMLAppearance562);

SoText* SoText564 = new SoText();
SoText564->setString(new QString[]{QString("Yaw")}, 1);
SoFontStyle* SoFontStyle565 = new SoFontStyle();
SoFontStyle565->setFamily(new QString[]{QString("SANS")}, 1);
SoText564->setFontStyle(*SoFontStyle565);

SoShape561->setGeometry(*SoText564);

SoTransform559->addChild(*SoShape561);

SoShape* SoShape566 = new SoShape();
SoShape566->setDEF(QString("Yaw_Back"));
SoVRMLAppearance* SoVRMLAppearance567 = new SoVRMLAppearance();
SoMaterial* SoMaterial568 = new SoMaterial();
SoMaterial568->setUSE(QString("Clear"));
SoVRMLAppearance567->addChild(*SoMaterial568);

SoShape566->addChild(*SoVRMLAppearance567);

SoIndexedFaceSet* SoIndexedFaceSet569 = new SoIndexedFaceSet();
SoIndexedFaceSet569->setUSE(QString("Backing"));
SoShape566->setGeometry(*SoIndexedFaceSet569);

SoTransform559->addChild(*SoShape566);

SoTransform535->addChild(*SoTransform559);

SoTransform* SoTransform570 = new SoTransform();
SoTransform570->setDEF(QString("Roll_Text"));
SoTransform570->setTranslation(new float[]{0.0,-5.2,0.0});
SoTouchSensor* SoTouchSensor571 = new SoTouchSensor();
SoTouchSensor571->setDEF(QString("Roll_Touch"));
SoTransform570->addChild(*SoTouchSensor571);

SoShape* SoShape572 = new SoShape();
SoShape572->setDEF(QString("RollText"));
SoVRMLAppearance* SoVRMLAppearance573 = new SoVRMLAppearance();
SoMaterial* SoMaterial574 = new SoMaterial();
SoMaterial574->setUSE(QString("text_color"));
SoVRMLAppearance573->addChild(*SoMaterial574);

SoShape572->addChild(*SoVRMLAppearance573);

SoText* SoText575 = new SoText();
SoText575->setString(new QString[]{QString("Roll")}, 1);
SoFontStyle* SoFontStyle576 = new SoFontStyle();
SoFontStyle576->setFamily(new QString[]{QString("SANS")}, 1);
SoText575->setFontStyle(*SoFontStyle576);

SoShape572->setGeometry(*SoText575);

SoTransform570->addChild(*SoShape572);

SoShape* SoShape577 = new SoShape();
SoShape577->setDEF(QString("Roll_Back"));
SoVRMLAppearance* SoVRMLAppearance578 = new SoVRMLAppearance();
SoMaterial* SoMaterial579 = new SoMaterial();
SoMaterial579->setUSE(QString("Clear"));
SoVRMLAppearance578->addChild(*SoMaterial579);

SoShape577->addChild(*SoVRMLAppearance578);

SoIndexedFaceSet* SoIndexedFaceSet580 = new SoIndexedFaceSet();
SoIndexedFaceSet580->setUSE(QString("Backing"));
SoShape577->setGeometry(*SoIndexedFaceSet580);

SoTransform570->addChild(*SoShape577);

SoTransform535->addChild(*SoTransform570);

SoTransform* SoTransform581 = new SoTransform();
SoTransform581->setDEF(QString("Walk_Text"));
SoTransform581->setTranslation(new float[]{0.0,-6.6,0.0});
SoTouchSensor* SoTouchSensor582 = new SoTouchSensor();
SoTouchSensor582->setDEF(QString("Walk_Touch"));
SoTransform581->addChild(*SoTouchSensor582);

SoShape* SoShape583 = new SoShape();
SoShape583->setDEF(QString("WalkText"));
SoVRMLAppearance* SoVRMLAppearance584 = new SoVRMLAppearance();
SoMaterial* SoMaterial585 = new SoMaterial();
SoMaterial585->setUSE(QString("text_color"));
SoVRMLAppearance584->addChild(*SoMaterial585);

SoShape583->addChild(*SoVRMLAppearance584);

SoText* SoText586 = new SoText();
SoText586->setString(new QString[]{QString("Walk")}, 1);
SoFontStyle* SoFontStyle587 = new SoFontStyle();
SoFontStyle587->setFamily(new QString[]{QString("SANS")}, 1);
SoText586->setFontStyle(*SoFontStyle587);

SoShape583->setGeometry(*SoText586);

SoTransform581->addChild(*SoShape583);

SoShape* SoShape588 = new SoShape();
SoShape588->setDEF(QString("Walk_Back"));
SoVRMLAppearance* SoVRMLAppearance589 = new SoVRMLAppearance();
SoMaterial* SoMaterial590 = new SoMaterial();
SoMaterial590->setUSE(QString("Clear"));
SoVRMLAppearance589->addChild(*SoMaterial590);

SoShape588->addChild(*SoVRMLAppearance589);

SoIndexedFaceSet* SoIndexedFaceSet591 = new SoIndexedFaceSet();
SoIndexedFaceSet591->setUSE(QString("Backing"));
SoShape588->setGeometry(*SoIndexedFaceSet591);

SoTransform581->addChild(*SoShape588);

SoTransform535->addChild(*SoTransform581);

SoTransform* SoTransform592 = new SoTransform();
SoTransform592->setDEF(QString("Run_Text"));
SoTransform592->setTranslation(new float[]{0.0,-8.0,0.0});
SoTouchSensor* SoTouchSensor593 = new SoTouchSensor();
SoTouchSensor593->setDEF(QString("Run_Touch"));
SoTransform592->addChild(*SoTouchSensor593);

SoShape* SoShape594 = new SoShape();
SoShape594->setDEF(QString("RunText"));
SoVRMLAppearance* SoVRMLAppearance595 = new SoVRMLAppearance();
SoMaterial* SoMaterial596 = new SoMaterial();
SoMaterial596->setUSE(QString("text_color"));
SoVRMLAppearance595->addChild(*SoMaterial596);

SoShape594->addChild(*SoVRMLAppearance595);

SoText* SoText597 = new SoText();
SoText597->setString(new QString[]{QString("Run")}, 1);
SoFontStyle* SoFontStyle598 = new SoFontStyle();
SoFontStyle598->setFamily(new QString[]{QString("SANS")}, 1);
SoText597->setFontStyle(*SoFontStyle598);

SoShape594->setGeometry(*SoText597);

SoTransform592->addChild(*SoShape594);

SoShape* SoShape599 = new SoShape();
SoShape599->setDEF(QString("Run_Back"));
SoVRMLAppearance* SoVRMLAppearance600 = new SoVRMLAppearance();
SoMaterial* SoMaterial601 = new SoMaterial();
SoMaterial601->setUSE(QString("Clear"));
SoVRMLAppearance600->addChild(*SoMaterial601);

SoShape599->addChild(*SoVRMLAppearance600);

SoIndexedFaceSet* SoIndexedFaceSet602 = new SoIndexedFaceSet();
SoIndexedFaceSet602->setUSE(QString("Backing"));
SoShape599->setGeometry(*SoIndexedFaceSet602);

SoTransform592->addChild(*SoShape599);

SoTransform535->addChild(*SoTransform592);

SoTransform* SoTransform603 = new SoTransform();
SoTransform603->setDEF(QString("Jump_Text"));
SoTransform603->setTranslation(new float[]{0.0,-9.4,0.0});
SoTouchSensor* SoTouchSensor604 = new SoTouchSensor();
SoTouchSensor604->setDEF(QString("Jump_Touch"));
SoTransform603->addChild(*SoTouchSensor604);

SoShape* SoShape605 = new SoShape();
SoShape605->setDEF(QString("JumpText"));
SoVRMLAppearance* SoVRMLAppearance606 = new SoVRMLAppearance();
SoMaterial* SoMaterial607 = new SoMaterial();
SoMaterial607->setUSE(QString("text_color"));
SoVRMLAppearance606->addChild(*SoMaterial607);

SoShape605->addChild(*SoVRMLAppearance606);

SoText* SoText608 = new SoText();
SoText608->setString(new QString[]{QString("Jump")}, 1);
SoFontStyle* SoFontStyle609 = new SoFontStyle();
SoFontStyle609->setFamily(new QString[]{QString("SANS")}, 1);
SoText608->setFontStyle(*SoFontStyle609);

SoShape605->setGeometry(*SoText608);

SoTransform603->addChild(*SoShape605);

SoShape* SoShape610 = new SoShape();
SoShape610->setDEF(QString("Jump_Back"));
SoVRMLAppearance* SoVRMLAppearance611 = new SoVRMLAppearance();
SoMaterial* SoMaterial612 = new SoMaterial();
SoMaterial612->setUSE(QString("Clear"));
SoVRMLAppearance611->addChild(*SoMaterial612);

SoShape610->addChild(*SoVRMLAppearance611);

SoIndexedFaceSet* SoIndexedFaceSet613 = new SoIndexedFaceSet();
SoIndexedFaceSet613->setUSE(QString("Backing"));
SoShape610->setGeometry(*SoIndexedFaceSet613);

SoTransform603->addChild(*SoShape610);

SoTransform535->addChild(*SoTransform603);

SoTransform* SoTransform614 = new SoTransform();
SoTransform614->setDEF(QString("Kick_Text"));
SoTransform614->setTranslation(new float[]{0.0,-10.8,0.0});
SoTouchSensor* SoTouchSensor615 = new SoTouchSensor();
SoTouchSensor615->setDEF(QString("Kick_Touch"));
SoTransform614->addChild(*SoTouchSensor615);

SoShape* SoShape616 = new SoShape();
SoShape616->setDEF(QString("KickText"));
SoVRMLAppearance* SoVRMLAppearance617 = new SoVRMLAppearance();
SoMaterial* SoMaterial618 = new SoMaterial();
SoMaterial618->setUSE(QString("text_color"));
SoVRMLAppearance617->addChild(*SoMaterial618);

SoShape616->addChild(*SoVRMLAppearance617);

SoText* SoText619 = new SoText();
SoText619->setString(new QString[]{QString("Kick")}, 1);
SoFontStyle* SoFontStyle620 = new SoFontStyle();
SoFontStyle620->setFamily(new QString[]{QString("SANS")}, 1);
SoText619->setFontStyle(*SoFontStyle620);

SoShape616->setGeometry(*SoText619);

SoTransform614->addChild(*SoShape616);

SoShape* SoShape621 = new SoShape();
SoShape621->setDEF(QString("Kick_Back"));
SoVRMLAppearance* SoVRMLAppearance622 = new SoVRMLAppearance();
SoMaterial* SoMaterial623 = new SoMaterial();
SoMaterial623->setUSE(QString("Clear"));
SoVRMLAppearance622->addChild(*SoMaterial623);

SoShape621->addChild(*SoVRMLAppearance622);

SoIndexedFaceSet* SoIndexedFaceSet624 = new SoIndexedFaceSet();
SoIndexedFaceSet624->setUSE(QString("Backing"));
SoShape621->setGeometry(*SoIndexedFaceSet624);

SoTransform614->addChild(*SoShape621);

SoTransform535->addChild(*SoTransform614);

SoTransform* SoTransform625 = new SoTransform();
SoTransform625->setDEF(QString("Stop_Text"));
SoTransform625->setTranslation(new float[]{0.0,0.4,0.0});
SoTouchSensor* SoTouchSensor626 = new SoTouchSensor();
SoTouchSensor626->setDEF(QString("Stop_Touch"));
SoTransform625->addChild(*SoTouchSensor626);

SoShape* SoShape627 = new SoShape();
SoShape627->setDEF(QString("StopText"));
SoVRMLAppearance* SoVRMLAppearance628 = new SoVRMLAppearance();
SoMaterial* SoMaterial629 = new SoMaterial();
SoMaterial629->setUSE(QString("text_color"));
SoVRMLAppearance628->addChild(*SoMaterial629);

SoShape627->addChild(*SoVRMLAppearance628);

SoText* SoText630 = new SoText();
SoText630->setString(new QString[]{QString("Default")}, 1);
SoFontStyle* SoFontStyle631 = new SoFontStyle();
SoFontStyle631->setFamily(new QString[]{QString("SANS")}, 1);
SoText630->setFontStyle(*SoFontStyle631);

SoShape627->setGeometry(*SoText630);

SoTransform625->addChild(*SoShape627);

SoShape* SoShape632 = new SoShape();
SoShape632->setDEF(QString("Stop_Back"));
SoVRMLAppearance* SoVRMLAppearance633 = new SoVRMLAppearance();
SoMaterial* SoMaterial634 = new SoMaterial();
SoMaterial634->setUSE(QString("Clear"));
SoVRMLAppearance633->addChild(*SoMaterial634);

SoShape632->addChild(*SoVRMLAppearance633);

SoIndexedFaceSet* SoIndexedFaceSet635 = new SoIndexedFaceSet();
SoIndexedFaceSet635->setUSE(QString("Backing"));
SoShape632->setGeometry(*SoIndexedFaceSet635);

SoTransform625->addChild(*SoShape632);

SoTransform535->addChild(*SoTransform625);

SoTransform* SoTransform636 = new SoTransform();
SoTransform636->setDEF(QString("SceneLabel"));
SoTransform636->setTranslation(new float[]{1.3,3.0,0.0});
SoShape* SoShape637 = new SoShape();
SoShape637->setDEF(QString("SceneLabelText"));
SoVRMLAppearance* SoVRMLAppearance638 = new SoVRMLAppearance();
SoMaterial* SoMaterial639 = new SoMaterial();
SoMaterial639->setUSE(QString("text_color"));
SoVRMLAppearance638->addChild(*SoMaterial639);

SoShape637->addChild(*SoVRMLAppearance638);

SoText* SoText640 = new SoText();
SoText640->setString(new QString[]{QString("BoxMan4"), QString("Animation")}, 2);
SoFontStyle* SoFontStyle641 = new SoFontStyle();
SoFontStyle641->setFamily(new QString[]{QString("SANS")}, 1);
SoFontStyle641->setJustify(new QString[]{QString("MIDDLE"), QString("MIDDLE")}, 2);
SoText640->setFontStyle(*SoFontStyle641);

SoShape637->setGeometry(*SoText640);

SoTransform636->addChild(*SoShape637);

SoTransform535->addChild(*SoTransform636);

SoTransform534->addChild(*SoTransform535);

SoGroup527->addChild(*SoTransform534);

SoNode32->addChild(*SoGroup527);

SoROUTE* SoROUTE642 = new SoROUTE();
SoROUTE642->setFromNode(QString("StopTimer"));
SoROUTE642->setFromField(QString("fraction_changed"));
SoROUTE642->setToNode(QString("Stop_humanoid_root_TranslationInterpolator"));
SoROUTE642->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE642);

SoROUTE* SoROUTE643 = new SoROUTE();
SoROUTE643->setFromNode(QString("StopTimer"));
SoROUTE643->setFromField(QString("fraction_changed"));
SoROUTE643->setToNode(QString("Stop_humanoid_root_RotationInterpolator"));
SoROUTE643->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE643);

SoROUTE* SoROUTE644 = new SoROUTE();
SoROUTE644->setFromNode(QString("StopTimer"));
SoROUTE644->setFromField(QString("fraction_changed"));
SoROUTE644->setToNode(QString("Stop_sacroiliac_RotationInterpolator"));
SoROUTE644->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE644);

SoROUTE* SoROUTE645 = new SoROUTE();
SoROUTE645->setFromNode(QString("StopTimer"));
SoROUTE645->setFromField(QString("fraction_changed"));
SoROUTE645->setToNode(QString("Stop_l_hip_RotationInterpolator"));
SoROUTE645->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE645);

SoROUTE* SoROUTE646 = new SoROUTE();
SoROUTE646->setFromNode(QString("StopTimer"));
SoROUTE646->setFromField(QString("fraction_changed"));
SoROUTE646->setToNode(QString("Stop_l_knee_RotationInterpolator"));
SoROUTE646->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE646);

SoROUTE* SoROUTE647 = new SoROUTE();
SoROUTE647->setFromNode(QString("StopTimer"));
SoROUTE647->setFromField(QString("fraction_changed"));
SoROUTE647->setToNode(QString("Stop_l_ankle_RotationInterpolator"));
SoROUTE647->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE647);

SoROUTE* SoROUTE648 = new SoROUTE();
SoROUTE648->setFromNode(QString("StopTimer"));
SoROUTE648->setFromField(QString("fraction_changed"));
SoROUTE648->setToNode(QString("Stop_l_subtalar_RotationInterpolator"));
SoROUTE648->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE648);

SoROUTE* SoROUTE649 = new SoROUTE();
SoROUTE649->setFromNode(QString("StopTimer"));
SoROUTE649->setFromField(QString("fraction_changed"));
SoROUTE649->setToNode(QString("Stop_l_midtarsal_RotationInterpolator"));
SoROUTE649->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE649);

SoROUTE* SoROUTE650 = new SoROUTE();
SoROUTE650->setFromNode(QString("StopTimer"));
SoROUTE650->setFromField(QString("fraction_changed"));
SoROUTE650->setToNode(QString("Stop_l_metatarsal_RotationInterpolator"));
SoROUTE650->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE650);

SoROUTE* SoROUTE651 = new SoROUTE();
SoROUTE651->setFromNode(QString("StopTimer"));
SoROUTE651->setFromField(QString("fraction_changed"));
SoROUTE651->setToNode(QString("Stop_r_hip_RotationInterpolator"));
SoROUTE651->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE651);

SoROUTE* SoROUTE652 = new SoROUTE();
SoROUTE652->setFromNode(QString("StopTimer"));
SoROUTE652->setFromField(QString("fraction_changed"));
SoROUTE652->setToNode(QString("Stop_r_knee_RotationInterpolator"));
SoROUTE652->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE652);

SoROUTE* SoROUTE653 = new SoROUTE();
SoROUTE653->setFromNode(QString("StopTimer"));
SoROUTE653->setFromField(QString("fraction_changed"));
SoROUTE653->setToNode(QString("Stop_r_ankle_RotationInterpolator"));
SoROUTE653->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE653);

SoROUTE* SoROUTE654 = new SoROUTE();
SoROUTE654->setFromNode(QString("StopTimer"));
SoROUTE654->setFromField(QString("fraction_changed"));
SoROUTE654->setToNode(QString("Stop_r_subtalar_RotationInterpolator"));
SoROUTE654->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE654);

SoROUTE* SoROUTE655 = new SoROUTE();
SoROUTE655->setFromNode(QString("StopTimer"));
SoROUTE655->setFromField(QString("fraction_changed"));
SoROUTE655->setToNode(QString("Stop_r_midtarsal_RotationInterpolator"));
SoROUTE655->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE655);

SoROUTE* SoROUTE656 = new SoROUTE();
SoROUTE656->setFromNode(QString("StopTimer"));
SoROUTE656->setFromField(QString("fraction_changed"));
SoROUTE656->setToNode(QString("Stop_r_metatarsal_RotationInterpolator"));
SoROUTE656->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE656);

SoROUTE* SoROUTE657 = new SoROUTE();
SoROUTE657->setFromNode(QString("StopTimer"));
SoROUTE657->setFromField(QString("fraction_changed"));
SoROUTE657->setToNode(QString("Stop_vl5_RotationInterpolator"));
SoROUTE657->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE657);

SoROUTE* SoROUTE658 = new SoROUTE();
SoROUTE658->setFromNode(QString("StopTimer"));
SoROUTE658->setFromField(QString("fraction_changed"));
SoROUTE658->setToNode(QString("Stop_vl4_RotationInterpolator"));
SoROUTE658->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE658);

SoROUTE* SoROUTE659 = new SoROUTE();
SoROUTE659->setFromNode(QString("StopTimer"));
SoROUTE659->setFromField(QString("fraction_changed"));
SoROUTE659->setToNode(QString("Stop_vl3_RotationInterpolator"));
SoROUTE659->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE659);

SoROUTE* SoROUTE660 = new SoROUTE();
SoROUTE660->setFromNode(QString("StopTimer"));
SoROUTE660->setFromField(QString("fraction_changed"));
SoROUTE660->setToNode(QString("Stop_vl2_RotationInterpolator"));
SoROUTE660->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE660);

SoROUTE* SoROUTE661 = new SoROUTE();
SoROUTE661->setFromNode(QString("StopTimer"));
SoROUTE661->setFromField(QString("fraction_changed"));
SoROUTE661->setToNode(QString("Stop_vl1_RotationInterpolator"));
SoROUTE661->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE661);

SoROUTE* SoROUTE662 = new SoROUTE();
SoROUTE662->setFromNode(QString("StopTimer"));
SoROUTE662->setFromField(QString("fraction_changed"));
SoROUTE662->setToNode(QString("Stop_vt12_RotationInterpolator"));
SoROUTE662->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE662);

SoROUTE* SoROUTE663 = new SoROUTE();
SoROUTE663->setFromNode(QString("StopTimer"));
SoROUTE663->setFromField(QString("fraction_changed"));
SoROUTE663->setToNode(QString("Stop_vt11_RotationInterpolator"));
SoROUTE663->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE663);

SoROUTE* SoROUTE664 = new SoROUTE();
SoROUTE664->setFromNode(QString("StopTimer"));
SoROUTE664->setFromField(QString("fraction_changed"));
SoROUTE664->setToNode(QString("Stop_vt10_RotationInterpolator"));
SoROUTE664->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE664);

SoROUTE* SoROUTE665 = new SoROUTE();
SoROUTE665->setFromNode(QString("StopTimer"));
SoROUTE665->setFromField(QString("fraction_changed"));
SoROUTE665->setToNode(QString("Stop_vt9_RotationInterpolator"));
SoROUTE665->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE665);

SoROUTE* SoROUTE666 = new SoROUTE();
SoROUTE666->setFromNode(QString("StopTimer"));
SoROUTE666->setFromField(QString("fraction_changed"));
SoROUTE666->setToNode(QString("Stop_vt8_RotationInterpolator"));
SoROUTE666->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE666);

SoROUTE* SoROUTE667 = new SoROUTE();
SoROUTE667->setFromNode(QString("StopTimer"));
SoROUTE667->setFromField(QString("fraction_changed"));
SoROUTE667->setToNode(QString("Stop_vt7_RotationInterpolator"));
SoROUTE667->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE667);

SoROUTE* SoROUTE668 = new SoROUTE();
SoROUTE668->setFromNode(QString("StopTimer"));
SoROUTE668->setFromField(QString("fraction_changed"));
SoROUTE668->setToNode(QString("Stop_vt6_RotationInterpolator"));
SoROUTE668->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE668);

SoROUTE* SoROUTE669 = new SoROUTE();
SoROUTE669->setFromNode(QString("StopTimer"));
SoROUTE669->setFromField(QString("fraction_changed"));
SoROUTE669->setToNode(QString("Stop_vt5_RotationInterpolator"));
SoROUTE669->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE669);

SoROUTE* SoROUTE670 = new SoROUTE();
SoROUTE670->setFromNode(QString("StopTimer"));
SoROUTE670->setFromField(QString("fraction_changed"));
SoROUTE670->setToNode(QString("Stop_vt4_RotationInterpolator"));
SoROUTE670->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE670);

SoROUTE* SoROUTE671 = new SoROUTE();
SoROUTE671->setFromNode(QString("StopTimer"));
SoROUTE671->setFromField(QString("fraction_changed"));
SoROUTE671->setToNode(QString("Stop_vt3_RotationInterpolator"));
SoROUTE671->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE671);

SoROUTE* SoROUTE672 = new SoROUTE();
SoROUTE672->setFromNode(QString("StopTimer"));
SoROUTE672->setFromField(QString("fraction_changed"));
SoROUTE672->setToNode(QString("Stop_vt2_RotationInterpolator"));
SoROUTE672->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE672);

SoROUTE* SoROUTE673 = new SoROUTE();
SoROUTE673->setFromNode(QString("StopTimer"));
SoROUTE673->setFromField(QString("fraction_changed"));
SoROUTE673->setToNode(QString("Stop_vt1_RotationInterpolator"));
SoROUTE673->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE673);

SoROUTE* SoROUTE674 = new SoROUTE();
SoROUTE674->setFromNode(QString("StopTimer"));
SoROUTE674->setFromField(QString("fraction_changed"));
SoROUTE674->setToNode(QString("Stop_vc7_RotationInterpolator"));
SoROUTE674->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE674);

SoROUTE* SoROUTE675 = new SoROUTE();
SoROUTE675->setFromNode(QString("StopTimer"));
SoROUTE675->setFromField(QString("fraction_changed"));
SoROUTE675->setToNode(QString("Stop_vc6_RotationInterpolator"));
SoROUTE675->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE675);

SoROUTE* SoROUTE676 = new SoROUTE();
SoROUTE676->setFromNode(QString("StopTimer"));
SoROUTE676->setFromField(QString("fraction_changed"));
SoROUTE676->setToNode(QString("Stop_vc5_RotationInterpolator"));
SoROUTE676->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE676);

SoROUTE* SoROUTE677 = new SoROUTE();
SoROUTE677->setFromNode(QString("StopTimer"));
SoROUTE677->setFromField(QString("fraction_changed"));
SoROUTE677->setToNode(QString("Stop_vc4_RotationInterpolator"));
SoROUTE677->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE677);

SoROUTE* SoROUTE678 = new SoROUTE();
SoROUTE678->setFromNode(QString("StopTimer"));
SoROUTE678->setFromField(QString("fraction_changed"));
SoROUTE678->setToNode(QString("Stop_vc3_RotationInterpolator"));
SoROUTE678->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE678);

SoROUTE* SoROUTE679 = new SoROUTE();
SoROUTE679->setFromNode(QString("StopTimer"));
SoROUTE679->setFromField(QString("fraction_changed"));
SoROUTE679->setToNode(QString("Stop_vc2_RotationInterpolator"));
SoROUTE679->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE679);

SoROUTE* SoROUTE680 = new SoROUTE();
SoROUTE680->setFromNode(QString("StopTimer"));
SoROUTE680->setFromField(QString("fraction_changed"));
SoROUTE680->setToNode(QString("Stop_vc1_RotationInterpolator"));
SoROUTE680->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE680);

SoROUTE* SoROUTE681 = new SoROUTE();
SoROUTE681->setFromNode(QString("StopTimer"));
SoROUTE681->setFromField(QString("fraction_changed"));
SoROUTE681->setToNode(QString("Stop_skullbase_RotationInterpolator"));
SoROUTE681->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE681);

SoROUTE* SoROUTE682 = new SoROUTE();
SoROUTE682->setFromNode(QString("StopTimer"));
SoROUTE682->setFromField(QString("fraction_changed"));
SoROUTE682->setToNode(QString("Stop_l_eyeball_joint_RotationInterpolator"));
SoROUTE682->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE682);

SoROUTE* SoROUTE683 = new SoROUTE();
SoROUTE683->setFromNode(QString("StopTimer"));
SoROUTE683->setFromField(QString("fraction_changed"));
SoROUTE683->setToNode(QString("Stop_r_eyeball_joint_RotationInterpolator"));
SoROUTE683->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE683);

SoROUTE* SoROUTE684 = new SoROUTE();
SoROUTE684->setFromNode(QString("StopTimer"));
SoROUTE684->setFromField(QString("fraction_changed"));
SoROUTE684->setToNode(QString("Stop_l_sternoclavicular_RotationInterpolator"));
SoROUTE684->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE684);

SoROUTE* SoROUTE685 = new SoROUTE();
SoROUTE685->setFromNode(QString("StopTimer"));
SoROUTE685->setFromField(QString("fraction_changed"));
SoROUTE685->setToNode(QString("Stop_l_acromioclavicular_RotationInterpolator"));
SoROUTE685->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE685);

SoROUTE* SoROUTE686 = new SoROUTE();
SoROUTE686->setFromNode(QString("StopTimer"));
SoROUTE686->setFromField(QString("fraction_changed"));
SoROUTE686->setToNode(QString("Stop_l_shoulder_RotationInterpolator"));
SoROUTE686->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE686);

SoROUTE* SoROUTE687 = new SoROUTE();
SoROUTE687->setFromNode(QString("StopTimer"));
SoROUTE687->setFromField(QString("fraction_changed"));
SoROUTE687->setToNode(QString("Stop_l_elbow_RotationInterpolator"));
SoROUTE687->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE687);

SoROUTE* SoROUTE688 = new SoROUTE();
SoROUTE688->setFromNode(QString("StopTimer"));
SoROUTE688->setFromField(QString("fraction_changed"));
SoROUTE688->setToNode(QString("Stop_l_wrist_RotationInterpolator"));
SoROUTE688->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE688);

SoROUTE* SoROUTE689 = new SoROUTE();
SoROUTE689->setFromNode(QString("StopTimer"));
SoROUTE689->setFromField(QString("fraction_changed"));
SoROUTE689->setToNode(QString("Stop_l_thumb1_RotationInterpolator"));
SoROUTE689->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE689);

SoROUTE* SoROUTE690 = new SoROUTE();
SoROUTE690->setFromNode(QString("StopTimer"));
SoROUTE690->setFromField(QString("fraction_changed"));
SoROUTE690->setToNode(QString("Stop_l_thumb2_RotationInterpolator"));
SoROUTE690->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE690);

SoROUTE* SoROUTE691 = new SoROUTE();
SoROUTE691->setFromNode(QString("StopTimer"));
SoROUTE691->setFromField(QString("fraction_changed"));
SoROUTE691->setToNode(QString("Stop_l_thumb3_RotationInterpolator"));
SoROUTE691->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE691);

SoROUTE* SoROUTE692 = new SoROUTE();
SoROUTE692->setFromNode(QString("StopTimer"));
SoROUTE692->setFromField(QString("fraction_changed"));
SoROUTE692->setToNode(QString("Stop_l_index0_RotationInterpolator"));
SoROUTE692->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE692);

SoROUTE* SoROUTE693 = new SoROUTE();
SoROUTE693->setFromNode(QString("StopTimer"));
SoROUTE693->setFromField(QString("fraction_changed"));
SoROUTE693->setToNode(QString("Stop_l_index1_RotationInterpolator"));
SoROUTE693->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE693);

SoROUTE* SoROUTE694 = new SoROUTE();
SoROUTE694->setFromNode(QString("StopTimer"));
SoROUTE694->setFromField(QString("fraction_changed"));
SoROUTE694->setToNode(QString("Stop_l_index2_RotationInterpolator"));
SoROUTE694->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE694);

SoROUTE* SoROUTE695 = new SoROUTE();
SoROUTE695->setFromNode(QString("StopTimer"));
SoROUTE695->setFromField(QString("fraction_changed"));
SoROUTE695->setToNode(QString("Stop_l_index3_RotationInterpolator"));
SoROUTE695->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE695);

SoROUTE* SoROUTE696 = new SoROUTE();
SoROUTE696->setFromNode(QString("StopTimer"));
SoROUTE696->setFromField(QString("fraction_changed"));
SoROUTE696->setToNode(QString("Stop_l_middle0_RotationInterpolator"));
SoROUTE696->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE696);

SoROUTE* SoROUTE697 = new SoROUTE();
SoROUTE697->setFromNode(QString("StopTimer"));
SoROUTE697->setFromField(QString("fraction_changed"));
SoROUTE697->setToNode(QString("Stop_l_middle1_RotationInterpolator"));
SoROUTE697->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE697);

SoROUTE* SoROUTE698 = new SoROUTE();
SoROUTE698->setFromNode(QString("StopTimer"));
SoROUTE698->setFromField(QString("fraction_changed"));
SoROUTE698->setToNode(QString("Stop_l_middle2_RotationInterpolator"));
SoROUTE698->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE698);

SoROUTE* SoROUTE699 = new SoROUTE();
SoROUTE699->setFromNode(QString("StopTimer"));
SoROUTE699->setFromField(QString("fraction_changed"));
SoROUTE699->setToNode(QString("Stop_l_middle3_RotationInterpolator"));
SoROUTE699->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE699);

SoROUTE* SoROUTE700 = new SoROUTE();
SoROUTE700->setFromNode(QString("StopTimer"));
SoROUTE700->setFromField(QString("fraction_changed"));
SoROUTE700->setToNode(QString("Stop_l_ring0_RotationInterpolator"));
SoROUTE700->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE700);

SoROUTE* SoROUTE701 = new SoROUTE();
SoROUTE701->setFromNode(QString("StopTimer"));
SoROUTE701->setFromField(QString("fraction_changed"));
SoROUTE701->setToNode(QString("Stop_l_ring1_RotationInterpolator"));
SoROUTE701->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE701);

SoROUTE* SoROUTE702 = new SoROUTE();
SoROUTE702->setFromNode(QString("StopTimer"));
SoROUTE702->setFromField(QString("fraction_changed"));
SoROUTE702->setToNode(QString("Stop_l_ring2_RotationInterpolator"));
SoROUTE702->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE702);

SoROUTE* SoROUTE703 = new SoROUTE();
SoROUTE703->setFromNode(QString("StopTimer"));
SoROUTE703->setFromField(QString("fraction_changed"));
SoROUTE703->setToNode(QString("Stop_l_ring3_RotationInterpolator"));
SoROUTE703->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE703);

SoROUTE* SoROUTE704 = new SoROUTE();
SoROUTE704->setFromNode(QString("StopTimer"));
SoROUTE704->setFromField(QString("fraction_changed"));
SoROUTE704->setToNode(QString("Stop_l_pinky0_RotationInterpolator"));
SoROUTE704->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE704);

SoROUTE* SoROUTE705 = new SoROUTE();
SoROUTE705->setFromNode(QString("StopTimer"));
SoROUTE705->setFromField(QString("fraction_changed"));
SoROUTE705->setToNode(QString("Stop_l_pinky1_RotationInterpolator"));
SoROUTE705->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE705);

SoROUTE* SoROUTE706 = new SoROUTE();
SoROUTE706->setFromNode(QString("StopTimer"));
SoROUTE706->setFromField(QString("fraction_changed"));
SoROUTE706->setToNode(QString("Stop_l_pinky2_RotationInterpolator"));
SoROUTE706->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE706);

SoROUTE* SoROUTE707 = new SoROUTE();
SoROUTE707->setFromNode(QString("StopTimer"));
SoROUTE707->setFromField(QString("fraction_changed"));
SoROUTE707->setToNode(QString("Stop_l_pinky3_RotationInterpolator"));
SoROUTE707->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE707);

SoROUTE* SoROUTE708 = new SoROUTE();
SoROUTE708->setFromNode(QString("StopTimer"));
SoROUTE708->setFromField(QString("fraction_changed"));
SoROUTE708->setToNode(QString("Stop_r_sternoclavicular_RotationInterpolator"));
SoROUTE708->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE708);

SoROUTE* SoROUTE709 = new SoROUTE();
SoROUTE709->setFromNode(QString("StopTimer"));
SoROUTE709->setFromField(QString("fraction_changed"));
SoROUTE709->setToNode(QString("Stop_r_acromioclavicular_RotationInterpolator"));
SoROUTE709->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE709);

SoROUTE* SoROUTE710 = new SoROUTE();
SoROUTE710->setFromNode(QString("StopTimer"));
SoROUTE710->setFromField(QString("fraction_changed"));
SoROUTE710->setToNode(QString("Stop_r_shoulder_RotationInterpolator"));
SoROUTE710->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE710);

SoROUTE* SoROUTE711 = new SoROUTE();
SoROUTE711->setFromNode(QString("StopTimer"));
SoROUTE711->setFromField(QString("fraction_changed"));
SoROUTE711->setToNode(QString("Stop_r_elbow_RotationInterpolator"));
SoROUTE711->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE711);

SoROUTE* SoROUTE712 = new SoROUTE();
SoROUTE712->setFromNode(QString("StopTimer"));
SoROUTE712->setFromField(QString("fraction_changed"));
SoROUTE712->setToNode(QString("Stop_r_wrist_RotationInterpolator"));
SoROUTE712->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE712);

SoROUTE* SoROUTE713 = new SoROUTE();
SoROUTE713->setFromNode(QString("StopTimer"));
SoROUTE713->setFromField(QString("fraction_changed"));
SoROUTE713->setToNode(QString("Stop_r_thumb1_RotationInterpolator"));
SoROUTE713->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE713);

SoROUTE* SoROUTE714 = new SoROUTE();
SoROUTE714->setFromNode(QString("StopTimer"));
SoROUTE714->setFromField(QString("fraction_changed"));
SoROUTE714->setToNode(QString("Stop_r_thumb2_RotationInterpolator"));
SoROUTE714->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE714);

SoROUTE* SoROUTE715 = new SoROUTE();
SoROUTE715->setFromNode(QString("StopTimer"));
SoROUTE715->setFromField(QString("fraction_changed"));
SoROUTE715->setToNode(QString("Stop_r_thumb3_RotationInterpolator"));
SoROUTE715->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE715);

SoROUTE* SoROUTE716 = new SoROUTE();
SoROUTE716->setFromNode(QString("StopTimer"));
SoROUTE716->setFromField(QString("fraction_changed"));
SoROUTE716->setToNode(QString("Stop_r_index0_RotationInterpolator"));
SoROUTE716->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE716);

SoROUTE* SoROUTE717 = new SoROUTE();
SoROUTE717->setFromNode(QString("StopTimer"));
SoROUTE717->setFromField(QString("fraction_changed"));
SoROUTE717->setToNode(QString("Stop_r_index1_RotationInterpolator"));
SoROUTE717->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE717);

SoROUTE* SoROUTE718 = new SoROUTE();
SoROUTE718->setFromNode(QString("StopTimer"));
SoROUTE718->setFromField(QString("fraction_changed"));
SoROUTE718->setToNode(QString("Stop_r_index2_RotationInterpolator"));
SoROUTE718->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE718);

SoROUTE* SoROUTE719 = new SoROUTE();
SoROUTE719->setFromNode(QString("StopTimer"));
SoROUTE719->setFromField(QString("fraction_changed"));
SoROUTE719->setToNode(QString("Stop_r_index3_RotationInterpolator"));
SoROUTE719->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE719);

SoROUTE* SoROUTE720 = new SoROUTE();
SoROUTE720->setFromNode(QString("StopTimer"));
SoROUTE720->setFromField(QString("fraction_changed"));
SoROUTE720->setToNode(QString("Stop_r_middle0_RotationInterpolator"));
SoROUTE720->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE720);

SoROUTE* SoROUTE721 = new SoROUTE();
SoROUTE721->setFromNode(QString("StopTimer"));
SoROUTE721->setFromField(QString("fraction_changed"));
SoROUTE721->setToNode(QString("Stop_r_middle1_RotationInterpolator"));
SoROUTE721->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE721);

SoROUTE* SoROUTE722 = new SoROUTE();
SoROUTE722->setFromNode(QString("StopTimer"));
SoROUTE722->setFromField(QString("fraction_changed"));
SoROUTE722->setToNode(QString("Stop_r_middle2_RotationInterpolator"));
SoROUTE722->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE722);

SoROUTE* SoROUTE723 = new SoROUTE();
SoROUTE723->setFromNode(QString("StopTimer"));
SoROUTE723->setFromField(QString("fraction_changed"));
SoROUTE723->setToNode(QString("Stop_r_middle3_RotationInterpolator"));
SoROUTE723->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE723);

SoROUTE* SoROUTE724 = new SoROUTE();
SoROUTE724->setFromNode(QString("StopTimer"));
SoROUTE724->setFromField(QString("fraction_changed"));
SoROUTE724->setToNode(QString("Stop_r_ring0_RotationInterpolator"));
SoROUTE724->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE724);

SoROUTE* SoROUTE725 = new SoROUTE();
SoROUTE725->setFromNode(QString("StopTimer"));
SoROUTE725->setFromField(QString("fraction_changed"));
SoROUTE725->setToNode(QString("Stop_r_ring1_RotationInterpolator"));
SoROUTE725->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE725);

SoROUTE* SoROUTE726 = new SoROUTE();
SoROUTE726->setFromNode(QString("StopTimer"));
SoROUTE726->setFromField(QString("fraction_changed"));
SoROUTE726->setToNode(QString("Stop_r_ring2_RotationInterpolator"));
SoROUTE726->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE726);

SoROUTE* SoROUTE727 = new SoROUTE();
SoROUTE727->setFromNode(QString("StopTimer"));
SoROUTE727->setFromField(QString("fraction_changed"));
SoROUTE727->setToNode(QString("Stop_r_ring3_RotationInterpolator"));
SoROUTE727->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE727);

SoROUTE* SoROUTE728 = new SoROUTE();
SoROUTE728->setFromNode(QString("StopTimer"));
SoROUTE728->setFromField(QString("fraction_changed"));
SoROUTE728->setToNode(QString("Stop_r_pinky0_RotationInterpolator"));
SoROUTE728->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE728);

SoROUTE* SoROUTE729 = new SoROUTE();
SoROUTE729->setFromNode(QString("StopTimer"));
SoROUTE729->setFromField(QString("fraction_changed"));
SoROUTE729->setToNode(QString("Stop_r_pinky1_RotationInterpolator"));
SoROUTE729->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE729);

SoROUTE* SoROUTE730 = new SoROUTE();
SoROUTE730->setFromNode(QString("StopTimer"));
SoROUTE730->setFromField(QString("fraction_changed"));
SoROUTE730->setToNode(QString("Stop_r_pinky2_RotationInterpolator"));
SoROUTE730->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE730);

SoROUTE* SoROUTE731 = new SoROUTE();
SoROUTE731->setFromNode(QString("StopTimer"));
SoROUTE731->setFromField(QString("fraction_changed"));
SoROUTE731->setToNode(QString("Stop_r_pinky3_RotationInterpolator"));
SoROUTE731->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE731);

SoROUTE* SoROUTE732 = new SoROUTE();
SoROUTE732->setFromNode(QString("Stop_humanoid_root_TranslationInterpolator"));
SoROUTE732->setFromField(QString("value_changed"));
SoROUTE732->setToNode(QString("boxman_humanoid_root"));
SoROUTE732->setToField(QString("set_translation"));
SoNode32->addChild(*SoROUTE732);

SoROUTE* SoROUTE733 = new SoROUTE();
SoROUTE733->setFromNode(QString("Stop_humanoid_root_RotationInterpolator"));
SoROUTE733->setFromField(QString("value_changed"));
SoROUTE733->setToNode(QString("boxman_humanoid_root"));
SoROUTE733->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE733);

SoROUTE* SoROUTE734 = new SoROUTE();
SoROUTE734->setFromNode(QString("Stop_l_hip_RotationInterpolator"));
SoROUTE734->setFromField(QString("value_changed"));
SoROUTE734->setToNode(QString("boxman_l_hip"));
SoROUTE734->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE734);

SoROUTE* SoROUTE735 = new SoROUTE();
SoROUTE735->setFromNode(QString("Stop_l_knee_RotationInterpolator"));
SoROUTE735->setFromField(QString("value_changed"));
SoROUTE735->setToNode(QString("boxman_l_knee"));
SoROUTE735->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE735);

SoROUTE* SoROUTE736 = new SoROUTE();
SoROUTE736->setFromNode(QString("Stop_l_ankle_RotationInterpolator"));
SoROUTE736->setFromField(QString("value_changed"));
SoROUTE736->setToNode(QString("boxman_l_ankle"));
SoROUTE736->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE736);

SoROUTE* SoROUTE737 = new SoROUTE();
SoROUTE737->setFromNode(QString("Stop_l_midtarsal_RotationInterpolator"));
SoROUTE737->setFromField(QString("value_changed"));
SoROUTE737->setToNode(QString("boxman_l_midtarsal"));
SoROUTE737->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE737);

SoROUTE* SoROUTE738 = new SoROUTE();
SoROUTE738->setFromNode(QString("Stop_r_hip_RotationInterpolator"));
SoROUTE738->setFromField(QString("value_changed"));
SoROUTE738->setToNode(QString("boxman_r_hip"));
SoROUTE738->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE738);

SoROUTE* SoROUTE739 = new SoROUTE();
SoROUTE739->setFromNode(QString("Stop_r_knee_RotationInterpolator"));
SoROUTE739->setFromField(QString("value_changed"));
SoROUTE739->setToNode(QString("boxman_r_knee"));
SoROUTE739->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE739);

SoROUTE* SoROUTE740 = new SoROUTE();
SoROUTE740->setFromNode(QString("Stop_r_ankle_RotationInterpolator"));
SoROUTE740->setFromField(QString("value_changed"));
SoROUTE740->setToNode(QString("boxman_r_ankle"));
SoROUTE740->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE740);

SoROUTE* SoROUTE741 = new SoROUTE();
SoROUTE741->setFromNode(QString("Stop_r_midtarsal_RotationInterpolator"));
SoROUTE741->setFromField(QString("value_changed"));
SoROUTE741->setToNode(QString("boxman_r_midtarsal"));
SoROUTE741->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE741);

SoROUTE* SoROUTE742 = new SoROUTE();
SoROUTE742->setFromNode(QString("Stop_vl5_RotationInterpolator"));
SoROUTE742->setFromField(QString("value_changed"));
SoROUTE742->setToNode(QString("boxman_vl5"));
SoROUTE742->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE742);

SoROUTE* SoROUTE743 = new SoROUTE();
SoROUTE743->setFromNode(QString("Stop_skullbase_RotationInterpolator"));
SoROUTE743->setFromField(QString("value_changed"));
SoROUTE743->setToNode(QString("boxman_skullbase"));
SoROUTE743->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE743);

SoROUTE* SoROUTE744 = new SoROUTE();
SoROUTE744->setFromNode(QString("Stop_l_shoulder_RotationInterpolator"));
SoROUTE744->setFromField(QString("value_changed"));
SoROUTE744->setToNode(QString("boxman_l_shoulder"));
SoROUTE744->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE744);

SoROUTE* SoROUTE745 = new SoROUTE();
SoROUTE745->setFromNode(QString("Stop_l_elbow_RotationInterpolator"));
SoROUTE745->setFromField(QString("value_changed"));
SoROUTE745->setToNode(QString("boxman_l_elbow"));
SoROUTE745->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE745);

SoROUTE* SoROUTE746 = new SoROUTE();
SoROUTE746->setFromNode(QString("Stop_l_wrist_RotationInterpolator"));
SoROUTE746->setFromField(QString("value_changed"));
SoROUTE746->setToNode(QString("boxman_l_wrist"));
SoROUTE746->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE746);

SoROUTE* SoROUTE747 = new SoROUTE();
SoROUTE747->setFromNode(QString("Stop_r_shoulder_RotationInterpolator"));
SoROUTE747->setFromField(QString("value_changed"));
SoROUTE747->setToNode(QString("boxman_r_shoulder"));
SoROUTE747->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE747);

SoROUTE* SoROUTE748 = new SoROUTE();
SoROUTE748->setFromNode(QString("Stop_r_elbow_RotationInterpolator"));
SoROUTE748->setFromField(QString("value_changed"));
SoROUTE748->setToNode(QString("boxman_r_elbow"));
SoROUTE748->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE748);

SoROUTE* SoROUTE749 = new SoROUTE();
SoROUTE749->setFromNode(QString("Stop_r_wrist_RotationInterpolator"));
SoROUTE749->setFromField(QString("value_changed"));
SoROUTE749->setToNode(QString("boxman_r_wrist"));
SoROUTE749->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE749);

SoROUTE* SoROUTE750 = new SoROUTE();
SoROUTE750->setFromNode(QString("StandTimer"));
SoROUTE750->setFromField(QString("fraction_changed"));
SoROUTE750->setToNode(QString("Stand_r_ankle_RotationInterpolator"));
SoROUTE750->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE750);

SoROUTE* SoROUTE751 = new SoROUTE();
SoROUTE751->setFromNode(QString("StandTimer"));
SoROUTE751->setFromField(QString("fraction_changed"));
SoROUTE751->setToNode(QString("Stand_r_knee_RotationInterpolator"));
SoROUTE751->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE751);

SoROUTE* SoROUTE752 = new SoROUTE();
SoROUTE752->setFromNode(QString("StandTimer"));
SoROUTE752->setFromField(QString("fraction_changed"));
SoROUTE752->setToNode(QString("Stand_r_hip_RotationInterpolator"));
SoROUTE752->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE752);

SoROUTE* SoROUTE753 = new SoROUTE();
SoROUTE753->setFromNode(QString("StandTimer"));
SoROUTE753->setFromField(QString("fraction_changed"));
SoROUTE753->setToNode(QString("Stand_l_ankle_RotationInterpolator"));
SoROUTE753->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE753);

SoROUTE* SoROUTE754 = new SoROUTE();
SoROUTE754->setFromNode(QString("StandTimer"));
SoROUTE754->setFromField(QString("fraction_changed"));
SoROUTE754->setToNode(QString("Stand_l_knee_RotationInterpolator"));
SoROUTE754->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE754);

SoROUTE* SoROUTE755 = new SoROUTE();
SoROUTE755->setFromNode(QString("StandTimer"));
SoROUTE755->setFromField(QString("fraction_changed"));
SoROUTE755->setToNode(QString("Stand_l_hip_RotationInterpolator"));
SoROUTE755->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE755);

SoROUTE* SoROUTE756 = new SoROUTE();
SoROUTE756->setFromNode(QString("StandTimer"));
SoROUTE756->setFromField(QString("fraction_changed"));
SoROUTE756->setToNode(QString("Stand_lower_body_RotationInterpolator"));
SoROUTE756->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE756);

SoROUTE* SoROUTE757 = new SoROUTE();
SoROUTE757->setFromNode(QString("StandTimer"));
SoROUTE757->setFromField(QString("fraction_changed"));
SoROUTE757->setToNode(QString("Stand_r_wrist_RotationInterpolator"));
SoROUTE757->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE757);

SoROUTE* SoROUTE758 = new SoROUTE();
SoROUTE758->setFromNode(QString("StandTimer"));
SoROUTE758->setFromField(QString("fraction_changed"));
SoROUTE758->setToNode(QString("Stand_r_elbow_RotationInterpolator"));
SoROUTE758->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE758);

SoROUTE* SoROUTE759 = new SoROUTE();
SoROUTE759->setFromNode(QString("StandTimer"));
SoROUTE759->setFromField(QString("fraction_changed"));
SoROUTE759->setToNode(QString("Stand_r_shoulder_RotationInterpolator"));
SoROUTE759->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE759);

SoROUTE* SoROUTE760 = new SoROUTE();
SoROUTE760->setFromNode(QString("StandTimer"));
SoROUTE760->setFromField(QString("fraction_changed"));
SoROUTE760->setToNode(QString("Stand_l_wrist_RotationInterpolator"));
SoROUTE760->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE760);

SoROUTE* SoROUTE761 = new SoROUTE();
SoROUTE761->setFromNode(QString("StandTimer"));
SoROUTE761->setFromField(QString("fraction_changed"));
SoROUTE761->setToNode(QString("Stand_l_elbow_RotationInterpolator"));
SoROUTE761->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE761);

SoROUTE* SoROUTE762 = new SoROUTE();
SoROUTE762->setFromNode(QString("StandTimer"));
SoROUTE762->setFromField(QString("fraction_changed"));
SoROUTE762->setToNode(QString("Stand_l_shoulder_RotationInterpolator"));
SoROUTE762->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE762);

SoROUTE* SoROUTE763 = new SoROUTE();
SoROUTE763->setFromNode(QString("StandTimer"));
SoROUTE763->setFromField(QString("fraction_changed"));
SoROUTE763->setToNode(QString("Stand_head_RotationInterpolator"));
SoROUTE763->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE763);

SoROUTE* SoROUTE764 = new SoROUTE();
SoROUTE764->setFromNode(QString("StandTimer"));
SoROUTE764->setFromField(QString("fraction_changed"));
SoROUTE764->setToNode(QString("Stand_neck_RotationInterpolator"));
SoROUTE764->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE764);

SoROUTE* SoROUTE765 = new SoROUTE();
SoROUTE765->setFromNode(QString("StandTimer"));
SoROUTE765->setFromField(QString("fraction_changed"));
SoROUTE765->setToNode(QString("Stand_l_eyeball_RotationInterpolator"));
SoROUTE765->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE765);

SoROUTE* SoROUTE766 = new SoROUTE();
SoROUTE766->setFromNode(QString("StandTimer"));
SoROUTE766->setFromField(QString("fraction_changed"));
SoROUTE766->setToNode(QString("Stand_r_eyeball_RotationInterpolator"));
SoROUTE766->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE766);

SoROUTE* SoROUTE767 = new SoROUTE();
SoROUTE767->setFromNode(QString("StandTimer"));
SoROUTE767->setFromField(QString("fraction_changed"));
SoROUTE767->setToNode(QString("Stand_upper_body_RotationInterpolator"));
SoROUTE767->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE767);

SoROUTE* SoROUTE768 = new SoROUTE();
SoROUTE768->setFromNode(QString("StandTimer"));
SoROUTE768->setFromField(QString("fraction_changed"));
SoROUTE768->setToNode(QString("Stand_whole_body_RotationInterpolator"));
SoROUTE768->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE768);

SoROUTE* SoROUTE769 = new SoROUTE();
SoROUTE769->setFromNode(QString("StandTimer"));
SoROUTE769->setFromField(QString("fraction_changed"));
SoROUTE769->setToNode(QString("Stand_whole_body_TranslationInterpolator"));
SoROUTE769->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE769);

SoROUTE* SoROUTE770 = new SoROUTE();
SoROUTE770->setFromNode(QString("StandTimer"));
SoROUTE770->setFromField(QString("fraction_changed"));
SoROUTE770->setToNode(QString("Stand_l_sternoclavicular_RollInterpolator"));
SoROUTE770->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE770);

SoROUTE* SoROUTE771 = new SoROUTE();
SoROUTE771->setFromNode(QString("StandTimer"));
SoROUTE771->setFromField(QString("fraction_changed"));
SoROUTE771->setToNode(QString("Stand_l_acromioclavicular_RollInterpolator"));
SoROUTE771->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE771);

SoROUTE* SoROUTE772 = new SoROUTE();
SoROUTE772->setFromNode(QString("StandTimer"));
SoROUTE772->setFromField(QString("fraction_changed"));
SoROUTE772->setToNode(QString("Stand_r_sternoclavicular_RollInterpolator"));
SoROUTE772->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE772);

SoROUTE* SoROUTE773 = new SoROUTE();
SoROUTE773->setFromNode(QString("StandTimer"));
SoROUTE773->setFromField(QString("fraction_changed"));
SoROUTE773->setToNode(QString("Stand_r_acromioclavicular_RollInterpolator"));
SoROUTE773->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE773);

SoROUTE* SoROUTE774 = new SoROUTE();
SoROUTE774->setFromNode(QString("StandTimer"));
SoROUTE774->setFromField(QString("fraction_changed"));
SoROUTE774->setToNode(QString("Stand_r_metatarsal_PitchInterpolator"));
SoROUTE774->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE774);

SoROUTE* SoROUTE775 = new SoROUTE();
SoROUTE775->setFromNode(QString("StandTimer"));
SoROUTE775->setFromField(QString("fraction_changed"));
SoROUTE775->setToNode(QString("Stand_sacroiliac_YawInterpolator"));
SoROUTE775->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE775);

SoROUTE* SoROUTE776 = new SoROUTE();
SoROUTE776->setFromNode(QString("StandTimer"));
SoROUTE776->setFromField(QString("fraction_changed"));
SoROUTE776->setToNode(QString("Stand_vl5_YawInterpolator"));
SoROUTE776->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE776);

SoROUTE* SoROUTE777 = new SoROUTE();
SoROUTE777->setFromNode(QString("StandTimer"));
SoROUTE777->setFromField(QString("fraction_changed"));
SoROUTE777->setToNode(QString("Stand_vc6_YawInterpolator"));
SoROUTE777->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE777);

SoROUTE* SoROUTE778 = new SoROUTE();
SoROUTE778->setFromNode(QString("StandTimer"));
SoROUTE778->setFromField(QString("fraction_changed"));
SoROUTE778->setToNode(QString("Stand_l_thumb1_PitchInterpolator"));
SoROUTE778->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE778);

SoROUTE* SoROUTE779 = new SoROUTE();
SoROUTE779->setFromNode(QString("StandTimer"));
SoROUTE779->setFromField(QString("fraction_changed"));
SoROUTE779->setToNode(QString("Stand_r_thumb1_PitchInterpolator"));
SoROUTE779->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE779);

SoROUTE* SoROUTE780 = new SoROUTE();
SoROUTE780->setFromNode(QString("StandTimer"));
SoROUTE780->setFromField(QString("fraction_changed"));
SoROUTE780->setToNode(QString("Stand_r_index1_RollInterpolator"));
SoROUTE780->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE780);

SoROUTE* SoROUTE781 = new SoROUTE();
SoROUTE781->setFromNode(QString("StandTimer"));
SoROUTE781->setFromField(QString("fraction_changed"));
SoROUTE781->setToNode(QString("Stand_r_index2_RollInterpolator"));
SoROUTE781->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE781);

SoROUTE* SoROUTE782 = new SoROUTE();
SoROUTE782->setFromNode(QString("StandTimer"));
SoROUTE782->setFromField(QString("fraction_changed"));
SoROUTE782->setToNode(QString("Stand_r_index3_RollInterpolator"));
SoROUTE782->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE782);

SoROUTE* SoROUTE783 = new SoROUTE();
SoROUTE783->setFromNode(QString("Stand_r_ankle_RotationInterpolator"));
SoROUTE783->setFromField(QString("value_changed"));
SoROUTE783->setToNode(QString("boxman_r_ankle"));
SoROUTE783->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE783);

SoROUTE* SoROUTE784 = new SoROUTE();
SoROUTE784->setFromNode(QString("Stand_r_knee_RotationInterpolator"));
SoROUTE784->setFromField(QString("value_changed"));
SoROUTE784->setToNode(QString("boxman_r_knee"));
SoROUTE784->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE784);

SoROUTE* SoROUTE785 = new SoROUTE();
SoROUTE785->setFromNode(QString("Stand_r_hip_RotationInterpolator"));
SoROUTE785->setFromField(QString("value_changed"));
SoROUTE785->setToNode(QString("boxman_r_hip"));
SoROUTE785->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE785);

SoROUTE* SoROUTE786 = new SoROUTE();
SoROUTE786->setFromNode(QString("Stand_l_ankle_RotationInterpolator"));
SoROUTE786->setFromField(QString("value_changed"));
SoROUTE786->setToNode(QString("boxman_l_ankle"));
SoROUTE786->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE786);

SoROUTE* SoROUTE787 = new SoROUTE();
SoROUTE787->setFromNode(QString("Stand_l_knee_RotationInterpolator"));
SoROUTE787->setFromField(QString("value_changed"));
SoROUTE787->setToNode(QString("boxman_l_knee"));
SoROUTE787->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE787);

SoROUTE* SoROUTE788 = new SoROUTE();
SoROUTE788->setFromNode(QString("Stand_l_hip_RotationInterpolator"));
SoROUTE788->setFromField(QString("value_changed"));
SoROUTE788->setToNode(QString("boxman_l_hip"));
SoROUTE788->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE788);

SoROUTE* SoROUTE789 = new SoROUTE();
SoROUTE789->setFromNode(QString("Stand_r_wrist_RotationInterpolator"));
SoROUTE789->setFromField(QString("value_changed"));
SoROUTE789->setToNode(QString("boxman_r_wrist"));
SoROUTE789->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE789);

SoROUTE* SoROUTE790 = new SoROUTE();
SoROUTE790->setFromNode(QString("Stand_r_elbow_RotationInterpolator"));
SoROUTE790->setFromField(QString("value_changed"));
SoROUTE790->setToNode(QString("boxman_r_elbow"));
SoROUTE790->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE790);

SoROUTE* SoROUTE791 = new SoROUTE();
SoROUTE791->setFromNode(QString("Stand_r_shoulder_RotationInterpolator"));
SoROUTE791->setFromField(QString("value_changed"));
SoROUTE791->setToNode(QString("boxman_r_shoulder"));
SoROUTE791->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE791);

SoROUTE* SoROUTE792 = new SoROUTE();
SoROUTE792->setFromNode(QString("Stand_l_wrist_RotationInterpolator"));
SoROUTE792->setFromField(QString("value_changed"));
SoROUTE792->setToNode(QString("boxman_l_wrist"));
SoROUTE792->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE792);

SoROUTE* SoROUTE793 = new SoROUTE();
SoROUTE793->setFromNode(QString("Stand_l_elbow_RotationInterpolator"));
SoROUTE793->setFromField(QString("value_changed"));
SoROUTE793->setToNode(QString("boxman_l_elbow"));
SoROUTE793->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE793);

SoROUTE* SoROUTE794 = new SoROUTE();
SoROUTE794->setFromNode(QString("Stand_l_shoulder_RotationInterpolator"));
SoROUTE794->setFromField(QString("value_changed"));
SoROUTE794->setToNode(QString("boxman_l_shoulder"));
SoROUTE794->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE794);

SoROUTE* SoROUTE795 = new SoROUTE();
SoROUTE795->setFromNode(QString("Stand_head_RotationInterpolator"));
SoROUTE795->setFromField(QString("value_changed"));
SoROUTE795->setToNode(QString("boxman_skullbase"));
SoROUTE795->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE795);

SoROUTE* SoROUTE796 = new SoROUTE();
SoROUTE796->setFromNode(QString("Stand_whole_body_RotationInterpolator"));
SoROUTE796->setFromField(QString("value_changed"));
SoROUTE796->setToNode(QString("boxman_humanoid_root"));
SoROUTE796->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE796);

SoROUTE* SoROUTE797 = new SoROUTE();
SoROUTE797->setFromNode(QString("Stand_whole_body_TranslationInterpolator"));
SoROUTE797->setFromField(QString("value_changed"));
SoROUTE797->setToNode(QString("boxman_humanoid_root"));
SoROUTE797->setToField(QString("set_translation"));
SoNode32->addChild(*SoROUTE797);

SoROUTE* SoROUTE798 = new SoROUTE();
SoROUTE798->setFromNode(QString("Stand_vl5_YawInterpolator"));
SoROUTE798->setFromField(QString("value_changed"));
SoROUTE798->setToNode(QString("boxman_vl5"));
SoROUTE798->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE798);

SoROUTE* SoROUTE799 = new SoROUTE();
SoROUTE799->setFromNode(QString("PitchTimer"));
SoROUTE799->setFromField(QString("fraction_changed"));
SoROUTE799->setToNode(QString("Pitches_r_ankle_RotationInterpolator"));
SoROUTE799->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE799);

SoROUTE* SoROUTE800 = new SoROUTE();
SoROUTE800->setFromNode(QString("PitchTimer"));
SoROUTE800->setFromField(QString("fraction_changed"));
SoROUTE800->setToNode(QString("Pitches_r_knee_RotationInterpolator"));
SoROUTE800->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE800);

SoROUTE* SoROUTE801 = new SoROUTE();
SoROUTE801->setFromNode(QString("PitchTimer"));
SoROUTE801->setFromField(QString("fraction_changed"));
SoROUTE801->setToNode(QString("Pitches_r_hip_RotationInterpolator"));
SoROUTE801->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE801);

SoROUTE* SoROUTE802 = new SoROUTE();
SoROUTE802->setFromNode(QString("PitchTimer"));
SoROUTE802->setFromField(QString("fraction_changed"));
SoROUTE802->setToNode(QString("Pitches_l_ankle_RotationInterpolator"));
SoROUTE802->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE802);

SoROUTE* SoROUTE803 = new SoROUTE();
SoROUTE803->setFromNode(QString("PitchTimer"));
SoROUTE803->setFromField(QString("fraction_changed"));
SoROUTE803->setToNode(QString("Pitches_l_knee_RotationInterpolator"));
SoROUTE803->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE803);

SoROUTE* SoROUTE804 = new SoROUTE();
SoROUTE804->setFromNode(QString("PitchTimer"));
SoROUTE804->setFromField(QString("fraction_changed"));
SoROUTE804->setToNode(QString("Pitches_l_hip_RotationInterpolator"));
SoROUTE804->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE804);

SoROUTE* SoROUTE805 = new SoROUTE();
SoROUTE805->setFromNode(QString("PitchTimer"));
SoROUTE805->setFromField(QString("fraction_changed"));
SoROUTE805->setToNode(QString("Pitches_lower_body_RotationInterpolator"));
SoROUTE805->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE805);

SoROUTE* SoROUTE806 = new SoROUTE();
SoROUTE806->setFromNode(QString("PitchTimer"));
SoROUTE806->setFromField(QString("fraction_changed"));
SoROUTE806->setToNode(QString("Pitches_r_wrist_RotationInterpolator"));
SoROUTE806->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE806);

SoROUTE* SoROUTE807 = new SoROUTE();
SoROUTE807->setFromNode(QString("PitchTimer"));
SoROUTE807->setFromField(QString("fraction_changed"));
SoROUTE807->setToNode(QString("Pitches_r_elbow_RotationInterpolator"));
SoROUTE807->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE807);

SoROUTE* SoROUTE808 = new SoROUTE();
SoROUTE808->setFromNode(QString("PitchTimer"));
SoROUTE808->setFromField(QString("fraction_changed"));
SoROUTE808->setToNode(QString("Pitches_r_shoulder_RotationInterpolator"));
SoROUTE808->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE808);

SoROUTE* SoROUTE809 = new SoROUTE();
SoROUTE809->setFromNode(QString("PitchTimer"));
SoROUTE809->setFromField(QString("fraction_changed"));
SoROUTE809->setToNode(QString("Pitches_l_wrist_RotationInterpolator"));
SoROUTE809->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE809);

SoROUTE* SoROUTE810 = new SoROUTE();
SoROUTE810->setFromNode(QString("PitchTimer"));
SoROUTE810->setFromField(QString("fraction_changed"));
SoROUTE810->setToNode(QString("Pitches_l_elbow_RotationInterpolator"));
SoROUTE810->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE810);

SoROUTE* SoROUTE811 = new SoROUTE();
SoROUTE811->setFromNode(QString("PitchTimer"));
SoROUTE811->setFromField(QString("fraction_changed"));
SoROUTE811->setToNode(QString("Pitches_l_shoulder_RotationInterpolator"));
SoROUTE811->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE811);

SoROUTE* SoROUTE812 = new SoROUTE();
SoROUTE812->setFromNode(QString("PitchTimer"));
SoROUTE812->setFromField(QString("fraction_changed"));
SoROUTE812->setToNode(QString("Pitches_head_RotationInterpolator"));
SoROUTE812->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE812);

SoROUTE* SoROUTE813 = new SoROUTE();
SoROUTE813->setFromNode(QString("PitchTimer"));
SoROUTE813->setFromField(QString("fraction_changed"));
SoROUTE813->setToNode(QString("Pitches_neck_RotationInterpolator"));
SoROUTE813->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE813);

SoROUTE* SoROUTE814 = new SoROUTE();
SoROUTE814->setFromNode(QString("PitchTimer"));
SoROUTE814->setFromField(QString("fraction_changed"));
SoROUTE814->setToNode(QString("Pitches_upper_body_RotationInterpolator"));
SoROUTE814->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE814);

SoROUTE* SoROUTE815 = new SoROUTE();
SoROUTE815->setFromNode(QString("PitchTimer"));
SoROUTE815->setFromField(QString("fraction_changed"));
SoROUTE815->setToNode(QString("Pitches_whole_body_RotationInterpolator"));
SoROUTE815->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE815);

SoROUTE* SoROUTE816 = new SoROUTE();
SoROUTE816->setFromNode(QString("PitchTimer"));
SoROUTE816->setFromField(QString("fraction_changed"));
SoROUTE816->setToNode(QString("Pitches_whole_body_TranslationInterpolator"));
SoROUTE816->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE816);

SoROUTE* SoROUTE817 = new SoROUTE();
SoROUTE817->setFromNode(QString("PitchTimer"));
SoROUTE817->setFromField(QString("fraction_changed"));
SoROUTE817->setToNode(QString("Pitch_l_sternoclavicular_RollInterpolator"));
SoROUTE817->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE817);

SoROUTE* SoROUTE818 = new SoROUTE();
SoROUTE818->setFromNode(QString("PitchTimer"));
SoROUTE818->setFromField(QString("fraction_changed"));
SoROUTE818->setToNode(QString("Pitch_l_acromioclavicular_RollInterpolator"));
SoROUTE818->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE818);

SoROUTE* SoROUTE819 = new SoROUTE();
SoROUTE819->setFromNode(QString("PitchTimer"));
SoROUTE819->setFromField(QString("fraction_changed"));
SoROUTE819->setToNode(QString("Pitch_r_sternoclavicular_RollInterpolator"));
SoROUTE819->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE819);

SoROUTE* SoROUTE820 = new SoROUTE();
SoROUTE820->setFromNode(QString("PitchTimer"));
SoROUTE820->setFromField(QString("fraction_changed"));
SoROUTE820->setToNode(QString("Pitch_r_acromioclavicular_RollInterpolator"));
SoROUTE820->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE820);

SoROUTE* SoROUTE821 = new SoROUTE();
SoROUTE821->setFromNode(QString("PitchTimer"));
SoROUTE821->setFromField(QString("fraction_changed"));
SoROUTE821->setToNode(QString("Pitch_r_metatarsal_PitchInterpolator"));
SoROUTE821->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE821);

SoROUTE* SoROUTE822 = new SoROUTE();
SoROUTE822->setFromNode(QString("PitchTimer"));
SoROUTE822->setFromField(QString("fraction_changed"));
SoROUTE822->setToNode(QString("Pitch_sacroiliac_YawInterpolator"));
SoROUTE822->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE822);

SoROUTE* SoROUTE823 = new SoROUTE();
SoROUTE823->setFromNode(QString("PitchTimer"));
SoROUTE823->setFromField(QString("fraction_changed"));
SoROUTE823->setToNode(QString("Pitch_vl5_YawInterpolator"));
SoROUTE823->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE823);

SoROUTE* SoROUTE824 = new SoROUTE();
SoROUTE824->setFromNode(QString("PitchTimer"));
SoROUTE824->setFromField(QString("fraction_changed"));
SoROUTE824->setToNode(QString("Pitch_vc6_YawInterpolator"));
SoROUTE824->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE824);

SoROUTE* SoROUTE825 = new SoROUTE();
SoROUTE825->setFromNode(QString("PitchTimer"));
SoROUTE825->setFromField(QString("fraction_changed"));
SoROUTE825->setToNode(QString("Pitch_l_thumb1_PitchInterpolator"));
SoROUTE825->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE825);

SoROUTE* SoROUTE826 = new SoROUTE();
SoROUTE826->setFromNode(QString("PitchTimer"));
SoROUTE826->setFromField(QString("fraction_changed"));
SoROUTE826->setToNode(QString("Pitch_r_thumb1_PitchInterpolator"));
SoROUTE826->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE826);

SoROUTE* SoROUTE827 = new SoROUTE();
SoROUTE827->setFromNode(QString("Pitches_r_ankle_RotationInterpolator"));
SoROUTE827->setFromField(QString("value_changed"));
SoROUTE827->setToNode(QString("boxman_r_ankle"));
SoROUTE827->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE827);

SoROUTE* SoROUTE828 = new SoROUTE();
SoROUTE828->setFromNode(QString("Pitches_r_knee_RotationInterpolator"));
SoROUTE828->setFromField(QString("value_changed"));
SoROUTE828->setToNode(QString("boxman_r_knee"));
SoROUTE828->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE828);

SoROUTE* SoROUTE829 = new SoROUTE();
SoROUTE829->setFromNode(QString("Pitches_r_hip_RotationInterpolator"));
SoROUTE829->setFromField(QString("value_changed"));
SoROUTE829->setToNode(QString("boxman_r_hip"));
SoROUTE829->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE829);

SoROUTE* SoROUTE830 = new SoROUTE();
SoROUTE830->setFromNode(QString("Pitches_l_ankle_RotationInterpolator"));
SoROUTE830->setFromField(QString("value_changed"));
SoROUTE830->setToNode(QString("boxman_l_ankle"));
SoROUTE830->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE830);

SoROUTE* SoROUTE831 = new SoROUTE();
SoROUTE831->setFromNode(QString("Pitches_l_knee_RotationInterpolator"));
SoROUTE831->setFromField(QString("value_changed"));
SoROUTE831->setToNode(QString("boxman_l_knee"));
SoROUTE831->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE831);

SoROUTE* SoROUTE832 = new SoROUTE();
SoROUTE832->setFromNode(QString("Pitches_l_hip_RotationInterpolator"));
SoROUTE832->setFromField(QString("value_changed"));
SoROUTE832->setToNode(QString("boxman_l_hip"));
SoROUTE832->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE832);

SoROUTE* SoROUTE833 = new SoROUTE();
SoROUTE833->setFromNode(QString("Pitches_r_wrist_RotationInterpolator"));
SoROUTE833->setFromField(QString("value_changed"));
SoROUTE833->setToNode(QString("boxman_r_wrist"));
SoROUTE833->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE833);

SoROUTE* SoROUTE834 = new SoROUTE();
SoROUTE834->setFromNode(QString("Pitches_r_elbow_RotationInterpolator"));
SoROUTE834->setFromField(QString("value_changed"));
SoROUTE834->setToNode(QString("boxman_r_elbow"));
SoROUTE834->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE834);

SoROUTE* SoROUTE835 = new SoROUTE();
SoROUTE835->setFromNode(QString("Pitches_r_shoulder_RotationInterpolator"));
SoROUTE835->setFromField(QString("value_changed"));
SoROUTE835->setToNode(QString("boxman_r_shoulder"));
SoROUTE835->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE835);

SoROUTE* SoROUTE836 = new SoROUTE();
SoROUTE836->setFromNode(QString("Pitches_l_wrist_RotationInterpolator"));
SoROUTE836->setFromField(QString("value_changed"));
SoROUTE836->setToNode(QString("boxman_l_wrist"));
SoROUTE836->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE836);

SoROUTE* SoROUTE837 = new SoROUTE();
SoROUTE837->setFromNode(QString("Pitches_l_elbow_RotationInterpolator"));
SoROUTE837->setFromField(QString("value_changed"));
SoROUTE837->setToNode(QString("boxman_l_elbow"));
SoROUTE837->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE837);

SoROUTE* SoROUTE838 = new SoROUTE();
SoROUTE838->setFromNode(QString("Pitches_l_shoulder_RotationInterpolator"));
SoROUTE838->setFromField(QString("value_changed"));
SoROUTE838->setToNode(QString("boxman_l_shoulder"));
SoROUTE838->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE838);

SoROUTE* SoROUTE839 = new SoROUTE();
SoROUTE839->setFromNode(QString("Pitches_head_RotationInterpolator"));
SoROUTE839->setFromField(QString("value_changed"));
SoROUTE839->setToNode(QString("boxman_skullbase"));
SoROUTE839->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE839);

SoROUTE* SoROUTE840 = new SoROUTE();
SoROUTE840->setFromNode(QString("Pitches_whole_body_RotationInterpolator"));
SoROUTE840->setFromField(QString("value_changed"));
SoROUTE840->setToNode(QString("boxman_humanoid_root"));
SoROUTE840->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE840);

SoROUTE* SoROUTE841 = new SoROUTE();
SoROUTE841->setFromNode(QString("Pitches_whole_body_TranslationInterpolator"));
SoROUTE841->setFromField(QString("value_changed"));
SoROUTE841->setToNode(QString("boxman_humanoid_root"));
SoROUTE841->setToField(QString("set_translation"));
SoNode32->addChild(*SoROUTE841);

SoROUTE* SoROUTE842 = new SoROUTE();
SoROUTE842->setFromNode(QString("Pitch_vl5_YawInterpolator"));
SoROUTE842->setFromField(QString("value_changed"));
SoROUTE842->setToNode(QString("boxman_vl5"));
SoROUTE842->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE842);

SoROUTE* SoROUTE843 = new SoROUTE();
SoROUTE843->setFromNode(QString("YawTimer"));
SoROUTE843->setFromField(QString("fraction_changed"));
SoROUTE843->setToNode(QString("Yaws_r_ankle_RotationInterpolator"));
SoROUTE843->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE843);

SoROUTE* SoROUTE844 = new SoROUTE();
SoROUTE844->setFromNode(QString("YawTimer"));
SoROUTE844->setFromField(QString("fraction_changed"));
SoROUTE844->setToNode(QString("Yaws_r_knee_RotationInterpolator"));
SoROUTE844->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE844);

SoROUTE* SoROUTE845 = new SoROUTE();
SoROUTE845->setFromNode(QString("YawTimer"));
SoROUTE845->setFromField(QString("fraction_changed"));
SoROUTE845->setToNode(QString("Yaws_r_hip_RotationInterpolator"));
SoROUTE845->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE845);

SoROUTE* SoROUTE846 = new SoROUTE();
SoROUTE846->setFromNode(QString("YawTimer"));
SoROUTE846->setFromField(QString("fraction_changed"));
SoROUTE846->setToNode(QString("Yaws_l_ankle_RotationInterpolator"));
SoROUTE846->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE846);

SoROUTE* SoROUTE847 = new SoROUTE();
SoROUTE847->setFromNode(QString("YawTimer"));
SoROUTE847->setFromField(QString("fraction_changed"));
SoROUTE847->setToNode(QString("Yaws_l_knee_RotationInterpolator"));
SoROUTE847->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE847);

SoROUTE* SoROUTE848 = new SoROUTE();
SoROUTE848->setFromNode(QString("YawTimer"));
SoROUTE848->setFromField(QString("fraction_changed"));
SoROUTE848->setToNode(QString("Yaws_l_hip_RotationInterpolator"));
SoROUTE848->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE848);

SoROUTE* SoROUTE849 = new SoROUTE();
SoROUTE849->setFromNode(QString("YawTimer"));
SoROUTE849->setFromField(QString("fraction_changed"));
SoROUTE849->setToNode(QString("Yaws_lower_body_RotationInterpolator"));
SoROUTE849->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE849);

SoROUTE* SoROUTE850 = new SoROUTE();
SoROUTE850->setFromNode(QString("YawTimer"));
SoROUTE850->setFromField(QString("fraction_changed"));
SoROUTE850->setToNode(QString("Yaws_r_wrist_RotationInterpolator"));
SoROUTE850->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE850);

SoROUTE* SoROUTE851 = new SoROUTE();
SoROUTE851->setFromNode(QString("YawTimer"));
SoROUTE851->setFromField(QString("fraction_changed"));
SoROUTE851->setToNode(QString("Yaws_r_elbow_RotationInterpolator"));
SoROUTE851->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE851);

SoROUTE* SoROUTE852 = new SoROUTE();
SoROUTE852->setFromNode(QString("YawTimer"));
SoROUTE852->setFromField(QString("fraction_changed"));
SoROUTE852->setToNode(QString("Yaws_r_shoulder_RotationInterpolator"));
SoROUTE852->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE852);

SoROUTE* SoROUTE853 = new SoROUTE();
SoROUTE853->setFromNode(QString("YawTimer"));
SoROUTE853->setFromField(QString("fraction_changed"));
SoROUTE853->setToNode(QString("Yaws_l_wrist_RotationInterpolator"));
SoROUTE853->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE853);

SoROUTE* SoROUTE854 = new SoROUTE();
SoROUTE854->setFromNode(QString("YawTimer"));
SoROUTE854->setFromField(QString("fraction_changed"));
SoROUTE854->setToNode(QString("Yaws_l_elbow_RotationInterpolator"));
SoROUTE854->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE854);

SoROUTE* SoROUTE855 = new SoROUTE();
SoROUTE855->setFromNode(QString("YawTimer"));
SoROUTE855->setFromField(QString("fraction_changed"));
SoROUTE855->setToNode(QString("Yaws_l_shoulder_RotationInterpolator"));
SoROUTE855->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE855);

SoROUTE* SoROUTE856 = new SoROUTE();
SoROUTE856->setFromNode(QString("YawTimer"));
SoROUTE856->setFromField(QString("fraction_changed"));
SoROUTE856->setToNode(QString("Yaws_head_RotationInterpolator"));
SoROUTE856->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE856);

SoROUTE* SoROUTE857 = new SoROUTE();
SoROUTE857->setFromNode(QString("YawTimer"));
SoROUTE857->setFromField(QString("fraction_changed"));
SoROUTE857->setToNode(QString("Yaws_neck_RotationInterpolator"));
SoROUTE857->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE857);

SoROUTE* SoROUTE858 = new SoROUTE();
SoROUTE858->setFromNode(QString("YawTimer"));
SoROUTE858->setFromField(QString("fraction_changed"));
SoROUTE858->setToNode(QString("Yaws_upper_body_RotationInterpolator"));
SoROUTE858->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE858);

SoROUTE* SoROUTE859 = new SoROUTE();
SoROUTE859->setFromNode(QString("YawTimer"));
SoROUTE859->setFromField(QString("fraction_changed"));
SoROUTE859->setToNode(QString("Yaws_whole_body_RotationInterpolator"));
SoROUTE859->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE859);

SoROUTE* SoROUTE860 = new SoROUTE();
SoROUTE860->setFromNode(QString("YawTimer"));
SoROUTE860->setFromField(QString("fraction_changed"));
SoROUTE860->setToNode(QString("Yaws_whole_body_TranslationInterpolator"));
SoROUTE860->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE860);

SoROUTE* SoROUTE861 = new SoROUTE();
SoROUTE861->setFromNode(QString("YawTimer"));
SoROUTE861->setFromField(QString("fraction_changed"));
SoROUTE861->setToNode(QString("Yaw_l_sternoclavicular_RollInterpolator"));
SoROUTE861->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE861);

SoROUTE* SoROUTE862 = new SoROUTE();
SoROUTE862->setFromNode(QString("YawTimer"));
SoROUTE862->setFromField(QString("fraction_changed"));
SoROUTE862->setToNode(QString("Yaw_l_acromioclavicular_RollInterpolator"));
SoROUTE862->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE862);

SoROUTE* SoROUTE863 = new SoROUTE();
SoROUTE863->setFromNode(QString("YawTimer"));
SoROUTE863->setFromField(QString("fraction_changed"));
SoROUTE863->setToNode(QString("Yaw_r_sternoclavicular_RollInterpolator"));
SoROUTE863->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE863);

SoROUTE* SoROUTE864 = new SoROUTE();
SoROUTE864->setFromNode(QString("YawTimer"));
SoROUTE864->setFromField(QString("fraction_changed"));
SoROUTE864->setToNode(QString("Yaw_r_acromioclavicular_RollInterpolator"));
SoROUTE864->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE864);

SoROUTE* SoROUTE865 = new SoROUTE();
SoROUTE865->setFromNode(QString("YawTimer"));
SoROUTE865->setFromField(QString("fraction_changed"));
SoROUTE865->setToNode(QString("Yaw_r_metatarsal_PitchInterpolator"));
SoROUTE865->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE865);

SoROUTE* SoROUTE866 = new SoROUTE();
SoROUTE866->setFromNode(QString("YawTimer"));
SoROUTE866->setFromField(QString("fraction_changed"));
SoROUTE866->setToNode(QString("Yaw_sacroiliac_YawInterpolator"));
SoROUTE866->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE866);

SoROUTE* SoROUTE867 = new SoROUTE();
SoROUTE867->setFromNode(QString("YawTimer"));
SoROUTE867->setFromField(QString("fraction_changed"));
SoROUTE867->setToNode(QString("Yaw_vl5_YawInterpolator"));
SoROUTE867->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE867);

SoROUTE* SoROUTE868 = new SoROUTE();
SoROUTE868->setFromNode(QString("YawTimer"));
SoROUTE868->setFromField(QString("fraction_changed"));
SoROUTE868->setToNode(QString("Yaw_vc6_YawInterpolator"));
SoROUTE868->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE868);

SoROUTE* SoROUTE869 = new SoROUTE();
SoROUTE869->setFromNode(QString("YawTimer"));
SoROUTE869->setFromField(QString("fraction_changed"));
SoROUTE869->setToNode(QString("Yaw_l_thumb1_PitchInterpolator"));
SoROUTE869->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE869);

SoROUTE* SoROUTE870 = new SoROUTE();
SoROUTE870->setFromNode(QString("YawTimer"));
SoROUTE870->setFromField(QString("fraction_changed"));
SoROUTE870->setToNode(QString("Yaw_r_thumb1_PitchInterpolator"));
SoROUTE870->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE870);

SoROUTE* SoROUTE871 = new SoROUTE();
SoROUTE871->setFromNode(QString("Yaws_r_ankle_RotationInterpolator"));
SoROUTE871->setFromField(QString("value_changed"));
SoROUTE871->setToNode(QString("boxman_r_ankle"));
SoROUTE871->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE871);

SoROUTE* SoROUTE872 = new SoROUTE();
SoROUTE872->setFromNode(QString("Yaws_r_knee_RotationInterpolator"));
SoROUTE872->setFromField(QString("value_changed"));
SoROUTE872->setToNode(QString("boxman_r_knee"));
SoROUTE872->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE872);

SoROUTE* SoROUTE873 = new SoROUTE();
SoROUTE873->setFromNode(QString("Yaws_r_hip_RotationInterpolator"));
SoROUTE873->setFromField(QString("value_changed"));
SoROUTE873->setToNode(QString("boxman_r_hip"));
SoROUTE873->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE873);

SoROUTE* SoROUTE874 = new SoROUTE();
SoROUTE874->setFromNode(QString("Yaws_l_ankle_RotationInterpolator"));
SoROUTE874->setFromField(QString("value_changed"));
SoROUTE874->setToNode(QString("boxman_l_ankle"));
SoROUTE874->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE874);

SoROUTE* SoROUTE875 = new SoROUTE();
SoROUTE875->setFromNode(QString("Yaws_l_knee_RotationInterpolator"));
SoROUTE875->setFromField(QString("value_changed"));
SoROUTE875->setToNode(QString("boxman_l_knee"));
SoROUTE875->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE875);

SoROUTE* SoROUTE876 = new SoROUTE();
SoROUTE876->setFromNode(QString("Yaws_l_hip_RotationInterpolator"));
SoROUTE876->setFromField(QString("value_changed"));
SoROUTE876->setToNode(QString("boxman_l_hip"));
SoROUTE876->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE876);

SoROUTE* SoROUTE877 = new SoROUTE();
SoROUTE877->setFromNode(QString("Yaws_r_wrist_RotationInterpolator"));
SoROUTE877->setFromField(QString("value_changed"));
SoROUTE877->setToNode(QString("boxman_r_wrist"));
SoROUTE877->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE877);

SoROUTE* SoROUTE878 = new SoROUTE();
SoROUTE878->setFromNode(QString("Yaws_r_elbow_RotationInterpolator"));
SoROUTE878->setFromField(QString("value_changed"));
SoROUTE878->setToNode(QString("boxman_r_elbow"));
SoROUTE878->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE878);

SoROUTE* SoROUTE879 = new SoROUTE();
SoROUTE879->setFromNode(QString("Yaws_r_shoulder_RotationInterpolator"));
SoROUTE879->setFromField(QString("value_changed"));
SoROUTE879->setToNode(QString("boxman_r_shoulder"));
SoROUTE879->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE879);

SoROUTE* SoROUTE880 = new SoROUTE();
SoROUTE880->setFromNode(QString("Yaws_l_wrist_RotationInterpolator"));
SoROUTE880->setFromField(QString("value_changed"));
SoROUTE880->setToNode(QString("boxman_l_wrist"));
SoROUTE880->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE880);

SoROUTE* SoROUTE881 = new SoROUTE();
SoROUTE881->setFromNode(QString("Yaws_l_elbow_RotationInterpolator"));
SoROUTE881->setFromField(QString("value_changed"));
SoROUTE881->setToNode(QString("boxman_l_elbow"));
SoROUTE881->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE881);

SoROUTE* SoROUTE882 = new SoROUTE();
SoROUTE882->setFromNode(QString("Yaws_l_shoulder_RotationInterpolator"));
SoROUTE882->setFromField(QString("value_changed"));
SoROUTE882->setToNode(QString("boxman_l_shoulder"));
SoROUTE882->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE882);

SoROUTE* SoROUTE883 = new SoROUTE();
SoROUTE883->setFromNode(QString("Yaws_head_RotationInterpolator"));
SoROUTE883->setFromField(QString("value_changed"));
SoROUTE883->setToNode(QString("boxman_skullbase"));
SoROUTE883->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE883);

SoROUTE* SoROUTE884 = new SoROUTE();
SoROUTE884->setFromNode(QString("Yaws_whole_body_RotationInterpolator"));
SoROUTE884->setFromField(QString("value_changed"));
SoROUTE884->setToNode(QString("boxman_humanoid_root"));
SoROUTE884->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE884);

SoROUTE* SoROUTE885 = new SoROUTE();
SoROUTE885->setFromNode(QString("Yaws_whole_body_TranslationInterpolator"));
SoROUTE885->setFromField(QString("value_changed"));
SoROUTE885->setToNode(QString("boxman_humanoid_root"));
SoROUTE885->setToField(QString("set_translation"));
SoNode32->addChild(*SoROUTE885);

SoROUTE* SoROUTE886 = new SoROUTE();
SoROUTE886->setFromNode(QString("Yaw_vl5_YawInterpolator"));
SoROUTE886->setFromField(QString("value_changed"));
SoROUTE886->setToNode(QString("boxman_vl5"));
SoROUTE886->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE886);

SoROUTE* SoROUTE887 = new SoROUTE();
SoROUTE887->setFromNode(QString("RollTimer"));
SoROUTE887->setFromField(QString("fraction_changed"));
SoROUTE887->setToNode(QString("Rolls_r_ankle_RotationInterpolator"));
SoROUTE887->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE887);

SoROUTE* SoROUTE888 = new SoROUTE();
SoROUTE888->setFromNode(QString("RollTimer"));
SoROUTE888->setFromField(QString("fraction_changed"));
SoROUTE888->setToNode(QString("Rolls_r_knee_RotationInterpolator"));
SoROUTE888->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE888);

SoROUTE* SoROUTE889 = new SoROUTE();
SoROUTE889->setFromNode(QString("RollTimer"));
SoROUTE889->setFromField(QString("fraction_changed"));
SoROUTE889->setToNode(QString("Rolls_r_hip_RotationInterpolator"));
SoROUTE889->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE889);

SoROUTE* SoROUTE890 = new SoROUTE();
SoROUTE890->setFromNode(QString("RollTimer"));
SoROUTE890->setFromField(QString("fraction_changed"));
SoROUTE890->setToNode(QString("Rolls_l_ankle_RotationInterpolator"));
SoROUTE890->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE890);

SoROUTE* SoROUTE891 = new SoROUTE();
SoROUTE891->setFromNode(QString("RollTimer"));
SoROUTE891->setFromField(QString("fraction_changed"));
SoROUTE891->setToNode(QString("Rolls_l_knee_RotationInterpolator"));
SoROUTE891->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE891);

SoROUTE* SoROUTE892 = new SoROUTE();
SoROUTE892->setFromNode(QString("RollTimer"));
SoROUTE892->setFromField(QString("fraction_changed"));
SoROUTE892->setToNode(QString("Rolls_l_hip_RotationInterpolator"));
SoROUTE892->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE892);

SoROUTE* SoROUTE893 = new SoROUTE();
SoROUTE893->setFromNode(QString("RollTimer"));
SoROUTE893->setFromField(QString("fraction_changed"));
SoROUTE893->setToNode(QString("Rolls_lower_body_RotationInterpolator"));
SoROUTE893->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE893);

SoROUTE* SoROUTE894 = new SoROUTE();
SoROUTE894->setFromNode(QString("RollTimer"));
SoROUTE894->setFromField(QString("fraction_changed"));
SoROUTE894->setToNode(QString("Rolls_r_wrist_RotationInterpolator"));
SoROUTE894->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE894);

SoROUTE* SoROUTE895 = new SoROUTE();
SoROUTE895->setFromNode(QString("RollTimer"));
SoROUTE895->setFromField(QString("fraction_changed"));
SoROUTE895->setToNode(QString("Rolls_r_elbow_RotationInterpolator"));
SoROUTE895->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE895);

SoROUTE* SoROUTE896 = new SoROUTE();
SoROUTE896->setFromNode(QString("RollTimer"));
SoROUTE896->setFromField(QString("fraction_changed"));
SoROUTE896->setToNode(QString("Rolls_r_shoulder_RotationInterpolator"));
SoROUTE896->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE896);

SoROUTE* SoROUTE897 = new SoROUTE();
SoROUTE897->setFromNode(QString("RollTimer"));
SoROUTE897->setFromField(QString("fraction_changed"));
SoROUTE897->setToNode(QString("Rolls_l_wrist_RotationInterpolator"));
SoROUTE897->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE897);

SoROUTE* SoROUTE898 = new SoROUTE();
SoROUTE898->setFromNode(QString("RollTimer"));
SoROUTE898->setFromField(QString("fraction_changed"));
SoROUTE898->setToNode(QString("Rolls_l_elbow_RotationInterpolator"));
SoROUTE898->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE898);

SoROUTE* SoROUTE899 = new SoROUTE();
SoROUTE899->setFromNode(QString("RollTimer"));
SoROUTE899->setFromField(QString("fraction_changed"));
SoROUTE899->setToNode(QString("Rolls_l_shoulder_RotationInterpolator"));
SoROUTE899->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE899);

SoROUTE* SoROUTE900 = new SoROUTE();
SoROUTE900->setFromNode(QString("RollTimer"));
SoROUTE900->setFromField(QString("fraction_changed"));
SoROUTE900->setToNode(QString("Rolls_head_RotationInterpolator"));
SoROUTE900->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE900);

SoROUTE* SoROUTE901 = new SoROUTE();
SoROUTE901->setFromNode(QString("RollTimer"));
SoROUTE901->setFromField(QString("fraction_changed"));
SoROUTE901->setToNode(QString("Rolls_neck_RotationInterpolator"));
SoROUTE901->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE901);

SoROUTE* SoROUTE902 = new SoROUTE();
SoROUTE902->setFromNode(QString("RollTimer"));
SoROUTE902->setFromField(QString("fraction_changed"));
SoROUTE902->setToNode(QString("Rolls_upper_body_RotationInterpolator"));
SoROUTE902->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE902);

SoROUTE* SoROUTE903 = new SoROUTE();
SoROUTE903->setFromNode(QString("RollTimer"));
SoROUTE903->setFromField(QString("fraction_changed"));
SoROUTE903->setToNode(QString("Rolls_whole_body_RotationInterpolator"));
SoROUTE903->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE903);

SoROUTE* SoROUTE904 = new SoROUTE();
SoROUTE904->setFromNode(QString("RollTimer"));
SoROUTE904->setFromField(QString("fraction_changed"));
SoROUTE904->setToNode(QString("Rolls_whole_body_TranslationInterpolator"));
SoROUTE904->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE904);

SoROUTE* SoROUTE905 = new SoROUTE();
SoROUTE905->setFromNode(QString("RollTimer"));
SoROUTE905->setFromField(QString("fraction_changed"));
SoROUTE905->setToNode(QString("Roll_l_sternoclavicular_RollInterpolator"));
SoROUTE905->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE905);

SoROUTE* SoROUTE906 = new SoROUTE();
SoROUTE906->setFromNode(QString("RollTimer"));
SoROUTE906->setFromField(QString("fraction_changed"));
SoROUTE906->setToNode(QString("Roll_l_acromioclavicular_RollInterpolator"));
SoROUTE906->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE906);

SoROUTE* SoROUTE907 = new SoROUTE();
SoROUTE907->setFromNode(QString("RollTimer"));
SoROUTE907->setFromField(QString("fraction_changed"));
SoROUTE907->setToNode(QString("Roll_r_sternoclavicular_RollInterpolator"));
SoROUTE907->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE907);

SoROUTE* SoROUTE908 = new SoROUTE();
SoROUTE908->setFromNode(QString("RollTimer"));
SoROUTE908->setFromField(QString("fraction_changed"));
SoROUTE908->setToNode(QString("Roll_r_acromioclavicular_RollInterpolator"));
SoROUTE908->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE908);

SoROUTE* SoROUTE909 = new SoROUTE();
SoROUTE909->setFromNode(QString("RollTimer"));
SoROUTE909->setFromField(QString("fraction_changed"));
SoROUTE909->setToNode(QString("Roll_r_metatarsal_PitchInterpolator"));
SoROUTE909->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE909);

SoROUTE* SoROUTE910 = new SoROUTE();
SoROUTE910->setFromNode(QString("RollTimer"));
SoROUTE910->setFromField(QString("fraction_changed"));
SoROUTE910->setToNode(QString("Roll_sacroiliac_YawInterpolator"));
SoROUTE910->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE910);

SoROUTE* SoROUTE911 = new SoROUTE();
SoROUTE911->setFromNode(QString("RollTimer"));
SoROUTE911->setFromField(QString("fraction_changed"));
SoROUTE911->setToNode(QString("Roll_vl5_YawInterpolator"));
SoROUTE911->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE911);

SoROUTE* SoROUTE912 = new SoROUTE();
SoROUTE912->setFromNode(QString("RollTimer"));
SoROUTE912->setFromField(QString("fraction_changed"));
SoROUTE912->setToNode(QString("Roll_vc6_YawInterpolator"));
SoROUTE912->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE912);

SoROUTE* SoROUTE913 = new SoROUTE();
SoROUTE913->setFromNode(QString("RollTimer"));
SoROUTE913->setFromField(QString("fraction_changed"));
SoROUTE913->setToNode(QString("Roll_l_thumb1_PitchInterpolator"));
SoROUTE913->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE913);

SoROUTE* SoROUTE914 = new SoROUTE();
SoROUTE914->setFromNode(QString("RollTimer"));
SoROUTE914->setFromField(QString("fraction_changed"));
SoROUTE914->setToNode(QString("Roll_r_thumb1_PitchInterpolator"));
SoROUTE914->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE914);

SoROUTE* SoROUTE915 = new SoROUTE();
SoROUTE915->setFromNode(QString("Rolls_r_ankle_RotationInterpolator"));
SoROUTE915->setFromField(QString("value_changed"));
SoROUTE915->setToNode(QString("boxman_r_ankle"));
SoROUTE915->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE915);

SoROUTE* SoROUTE916 = new SoROUTE();
SoROUTE916->setFromNode(QString("Rolls_r_knee_RotationInterpolator"));
SoROUTE916->setFromField(QString("value_changed"));
SoROUTE916->setToNode(QString("boxman_r_knee"));
SoROUTE916->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE916);

SoROUTE* SoROUTE917 = new SoROUTE();
SoROUTE917->setFromNode(QString("Rolls_r_hip_RotationInterpolator"));
SoROUTE917->setFromField(QString("value_changed"));
SoROUTE917->setToNode(QString("boxman_r_hip"));
SoROUTE917->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE917);

SoROUTE* SoROUTE918 = new SoROUTE();
SoROUTE918->setFromNode(QString("Rolls_l_ankle_RotationInterpolator"));
SoROUTE918->setFromField(QString("value_changed"));
SoROUTE918->setToNode(QString("boxman_l_ankle"));
SoROUTE918->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE918);

SoROUTE* SoROUTE919 = new SoROUTE();
SoROUTE919->setFromNode(QString("Rolls_l_knee_RotationInterpolator"));
SoROUTE919->setFromField(QString("value_changed"));
SoROUTE919->setToNode(QString("boxman_l_knee"));
SoROUTE919->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE919);

SoROUTE* SoROUTE920 = new SoROUTE();
SoROUTE920->setFromNode(QString("Rolls_l_hip_RotationInterpolator"));
SoROUTE920->setFromField(QString("value_changed"));
SoROUTE920->setToNode(QString("boxman_l_hip"));
SoROUTE920->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE920);

SoROUTE* SoROUTE921 = new SoROUTE();
SoROUTE921->setFromNode(QString("Rolls_r_wrist_RotationInterpolator"));
SoROUTE921->setFromField(QString("value_changed"));
SoROUTE921->setToNode(QString("boxman_r_wrist"));
SoROUTE921->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE921);

SoROUTE* SoROUTE922 = new SoROUTE();
SoROUTE922->setFromNode(QString("Rolls_r_elbow_RotationInterpolator"));
SoROUTE922->setFromField(QString("value_changed"));
SoROUTE922->setToNode(QString("boxman_r_elbow"));
SoROUTE922->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE922);

SoROUTE* SoROUTE923 = new SoROUTE();
SoROUTE923->setFromNode(QString("Rolls_r_shoulder_RotationInterpolator"));
SoROUTE923->setFromField(QString("value_changed"));
SoROUTE923->setToNode(QString("boxman_r_shoulder"));
SoROUTE923->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE923);

SoROUTE* SoROUTE924 = new SoROUTE();
SoROUTE924->setFromNode(QString("Rolls_l_wrist_RotationInterpolator"));
SoROUTE924->setFromField(QString("value_changed"));
SoROUTE924->setToNode(QString("boxman_l_wrist"));
SoROUTE924->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE924);

SoROUTE* SoROUTE925 = new SoROUTE();
SoROUTE925->setFromNode(QString("Rolls_l_elbow_RotationInterpolator"));
SoROUTE925->setFromField(QString("value_changed"));
SoROUTE925->setToNode(QString("boxman_l_elbow"));
SoROUTE925->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE925);

SoROUTE* SoROUTE926 = new SoROUTE();
SoROUTE926->setFromNode(QString("Rolls_l_shoulder_RotationInterpolator"));
SoROUTE926->setFromField(QString("value_changed"));
SoROUTE926->setToNode(QString("boxman_l_shoulder"));
SoROUTE926->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE926);

SoROUTE* SoROUTE927 = new SoROUTE();
SoROUTE927->setFromNode(QString("Rolls_head_RotationInterpolator"));
SoROUTE927->setFromField(QString("value_changed"));
SoROUTE927->setToNode(QString("boxman_skullbase"));
SoROUTE927->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE927);

SoROUTE* SoROUTE928 = new SoROUTE();
SoROUTE928->setFromNode(QString("Rolls_whole_body_RotationInterpolator"));
SoROUTE928->setFromField(QString("value_changed"));
SoROUTE928->setToNode(QString("boxman_humanoid_root"));
SoROUTE928->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE928);

SoROUTE* SoROUTE929 = new SoROUTE();
SoROUTE929->setFromNode(QString("Rolls_whole_body_TranslationInterpolator"));
SoROUTE929->setFromField(QString("value_changed"));
SoROUTE929->setToNode(QString("boxman_humanoid_root"));
SoROUTE929->setToField(QString("set_translation"));
SoNode32->addChild(*SoROUTE929);

SoROUTE* SoROUTE930 = new SoROUTE();
SoROUTE930->setFromNode(QString("Roll_vl5_YawInterpolator"));
SoROUTE930->setFromField(QString("value_changed"));
SoROUTE930->setToNode(QString("boxman_vl5"));
SoROUTE930->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE930);

SoROUTE* SoROUTE931 = new SoROUTE();
SoROUTE931->setFromNode(QString("WalkTimer"));
SoROUTE931->setFromField(QString("fraction_changed"));
SoROUTE931->setToNode(QString("Walk_r_ankle_RotationInterpolator"));
SoROUTE931->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE931);

SoROUTE* SoROUTE932 = new SoROUTE();
SoROUTE932->setFromNode(QString("WalkTimer"));
SoROUTE932->setFromField(QString("fraction_changed"));
SoROUTE932->setToNode(QString("Walk_r_knee_RotationInterpolator"));
SoROUTE932->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE932);

SoROUTE* SoROUTE933 = new SoROUTE();
SoROUTE933->setFromNode(QString("WalkTimer"));
SoROUTE933->setFromField(QString("fraction_changed"));
SoROUTE933->setToNode(QString("Walk_r_hip_RotationInterpolator"));
SoROUTE933->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE933);

SoROUTE* SoROUTE934 = new SoROUTE();
SoROUTE934->setFromNode(QString("WalkTimer"));
SoROUTE934->setFromField(QString("fraction_changed"));
SoROUTE934->setToNode(QString("Walk_l_ankle_RotationInterpolator"));
SoROUTE934->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE934);

SoROUTE* SoROUTE935 = new SoROUTE();
SoROUTE935->setFromNode(QString("WalkTimer"));
SoROUTE935->setFromField(QString("fraction_changed"));
SoROUTE935->setToNode(QString("Walk_l_knee_RotationInterpolator"));
SoROUTE935->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE935);

SoROUTE* SoROUTE936 = new SoROUTE();
SoROUTE936->setFromNode(QString("WalkTimer"));
SoROUTE936->setFromField(QString("fraction_changed"));
SoROUTE936->setToNode(QString("Walk_l_hip_RotationInterpolator"));
SoROUTE936->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE936);

SoROUTE* SoROUTE937 = new SoROUTE();
SoROUTE937->setFromNode(QString("WalkTimer"));
SoROUTE937->setFromField(QString("fraction_changed"));
SoROUTE937->setToNode(QString("Walk_lower_body_RotationInterpolator"));
SoROUTE937->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE937);

SoROUTE* SoROUTE938 = new SoROUTE();
SoROUTE938->setFromNode(QString("WalkTimer"));
SoROUTE938->setFromField(QString("fraction_changed"));
SoROUTE938->setToNode(QString("Walk_r_wrist_RotationInterpolator"));
SoROUTE938->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE938);

SoROUTE* SoROUTE939 = new SoROUTE();
SoROUTE939->setFromNode(QString("WalkTimer"));
SoROUTE939->setFromField(QString("fraction_changed"));
SoROUTE939->setToNode(QString("Walk_r_elbow_RotationInterpolator"));
SoROUTE939->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE939);

SoROUTE* SoROUTE940 = new SoROUTE();
SoROUTE940->setFromNode(QString("WalkTimer"));
SoROUTE940->setFromField(QString("fraction_changed"));
SoROUTE940->setToNode(QString("Walk_r_shoulder_RotationInterpolator"));
SoROUTE940->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE940);

SoROUTE* SoROUTE941 = new SoROUTE();
SoROUTE941->setFromNode(QString("WalkTimer"));
SoROUTE941->setFromField(QString("fraction_changed"));
SoROUTE941->setToNode(QString("Walk_l_wrist_RotationInterpolator"));
SoROUTE941->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE941);

SoROUTE* SoROUTE942 = new SoROUTE();
SoROUTE942->setFromNode(QString("WalkTimer"));
SoROUTE942->setFromField(QString("fraction_changed"));
SoROUTE942->setToNode(QString("Walk_l_elbow_RotationInterpolator"));
SoROUTE942->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE942);

SoROUTE* SoROUTE943 = new SoROUTE();
SoROUTE943->setFromNode(QString("WalkTimer"));
SoROUTE943->setFromField(QString("fraction_changed"));
SoROUTE943->setToNode(QString("Walk_l_shoulder_RotationInterpolator"));
SoROUTE943->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE943);

SoROUTE* SoROUTE944 = new SoROUTE();
SoROUTE944->setFromNode(QString("WalkTimer"));
SoROUTE944->setFromField(QString("fraction_changed"));
SoROUTE944->setToNode(QString("Walk_head_RotationInterpolator"));
SoROUTE944->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE944);

SoROUTE* SoROUTE945 = new SoROUTE();
SoROUTE945->setFromNode(QString("WalkTimer"));
SoROUTE945->setFromField(QString("fraction_changed"));
SoROUTE945->setToNode(QString("Walk_neck_RotationInterpolator"));
SoROUTE945->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE945);

SoROUTE* SoROUTE946 = new SoROUTE();
SoROUTE946->setFromNode(QString("WalkTimer"));
SoROUTE946->setFromField(QString("fraction_changed"));
SoROUTE946->setToNode(QString("Walk_upper_body_RotationInterpolator"));
SoROUTE946->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE946);

SoROUTE* SoROUTE947 = new SoROUTE();
SoROUTE947->setFromNode(QString("WalkTimer"));
SoROUTE947->setFromField(QString("fraction_changed"));
SoROUTE947->setToNode(QString("Walk_whole_body_RotationInterpolator"));
SoROUTE947->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE947);

SoROUTE* SoROUTE948 = new SoROUTE();
SoROUTE948->setFromNode(QString("WalkTimer"));
SoROUTE948->setFromField(QString("fraction_changed"));
SoROUTE948->setToNode(QString("Walk_whole_body_TranslationInterpolator"));
SoROUTE948->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE948);

SoROUTE* SoROUTE949 = new SoROUTE();
SoROUTE949->setFromNode(QString("WalkTimer"));
SoROUTE949->setFromField(QString("fraction_changed"));
SoROUTE949->setToNode(QString("Walk_l_sternoclavicular_RollInterpolator"));
SoROUTE949->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE949);

SoROUTE* SoROUTE950 = new SoROUTE();
SoROUTE950->setFromNode(QString("WalkTimer"));
SoROUTE950->setFromField(QString("fraction_changed"));
SoROUTE950->setToNode(QString("Walk_l_acromioclavicular_RollInterpolator"));
SoROUTE950->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE950);

SoROUTE* SoROUTE951 = new SoROUTE();
SoROUTE951->setFromNode(QString("WalkTimer"));
SoROUTE951->setFromField(QString("fraction_changed"));
SoROUTE951->setToNode(QString("Walk_r_sternoclavicular_RollInterpolator"));
SoROUTE951->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE951);

SoROUTE* SoROUTE952 = new SoROUTE();
SoROUTE952->setFromNode(QString("WalkTimer"));
SoROUTE952->setFromField(QString("fraction_changed"));
SoROUTE952->setToNode(QString("Walk_r_acromioclavicular_RollInterpolator"));
SoROUTE952->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE952);

SoROUTE* SoROUTE953 = new SoROUTE();
SoROUTE953->setFromNode(QString("WalkTimer"));
SoROUTE953->setFromField(QString("fraction_changed"));
SoROUTE953->setToNode(QString("Walk_r_metatarsal_PitchInterpolator"));
SoROUTE953->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE953);

SoROUTE* SoROUTE954 = new SoROUTE();
SoROUTE954->setFromNode(QString("WalkTimer"));
SoROUTE954->setFromField(QString("fraction_changed"));
SoROUTE954->setToNode(QString("Walk_sacroiliac_YawInterpolator"));
SoROUTE954->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE954);

SoROUTE* SoROUTE955 = new SoROUTE();
SoROUTE955->setFromNode(QString("WalkTimer"));
SoROUTE955->setFromField(QString("fraction_changed"));
SoROUTE955->setToNode(QString("Walk_vl5_YawInterpolator"));
SoROUTE955->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE955);

SoROUTE* SoROUTE956 = new SoROUTE();
SoROUTE956->setFromNode(QString("WalkTimer"));
SoROUTE956->setFromField(QString("fraction_changed"));
SoROUTE956->setToNode(QString("Walk_vc6_YawInterpolator"));
SoROUTE956->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE956);

SoROUTE* SoROUTE957 = new SoROUTE();
SoROUTE957->setFromNode(QString("WalkTimer"));
SoROUTE957->setFromField(QString("fraction_changed"));
SoROUTE957->setToNode(QString("Walk_l_thumb1_PitchInterpolator"));
SoROUTE957->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE957);

SoROUTE* SoROUTE958 = new SoROUTE();
SoROUTE958->setFromNode(QString("WalkTimer"));
SoROUTE958->setFromField(QString("fraction_changed"));
SoROUTE958->setToNode(QString("Walk_r_thumb1_PitchInterpolator"));
SoROUTE958->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE958);

SoROUTE* SoROUTE959 = new SoROUTE();
SoROUTE959->setFromNode(QString("Walk_r_ankle_RotationInterpolator"));
SoROUTE959->setFromField(QString("value_changed"));
SoROUTE959->setToNode(QString("boxman_r_ankle"));
SoROUTE959->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE959);

SoROUTE* SoROUTE960 = new SoROUTE();
SoROUTE960->setFromNode(QString("Walk_r_knee_RotationInterpolator"));
SoROUTE960->setFromField(QString("value_changed"));
SoROUTE960->setToNode(QString("boxman_r_knee"));
SoROUTE960->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE960);

SoROUTE* SoROUTE961 = new SoROUTE();
SoROUTE961->setFromNode(QString("Walk_r_hip_RotationInterpolator"));
SoROUTE961->setFromField(QString("value_changed"));
SoROUTE961->setToNode(QString("boxman_r_hip"));
SoROUTE961->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE961);

SoROUTE* SoROUTE962 = new SoROUTE();
SoROUTE962->setFromNode(QString("Walk_l_ankle_RotationInterpolator"));
SoROUTE962->setFromField(QString("value_changed"));
SoROUTE962->setToNode(QString("boxman_l_ankle"));
SoROUTE962->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE962);

SoROUTE* SoROUTE963 = new SoROUTE();
SoROUTE963->setFromNode(QString("Walk_l_knee_RotationInterpolator"));
SoROUTE963->setFromField(QString("value_changed"));
SoROUTE963->setToNode(QString("boxman_l_knee"));
SoROUTE963->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE963);

SoROUTE* SoROUTE964 = new SoROUTE();
SoROUTE964->setFromNode(QString("Walk_l_hip_RotationInterpolator"));
SoROUTE964->setFromField(QString("value_changed"));
SoROUTE964->setToNode(QString("boxman_l_hip"));
SoROUTE964->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE964);

SoROUTE* SoROUTE965 = new SoROUTE();
SoROUTE965->setFromNode(QString("Walk_r_wrist_RotationInterpolator"));
SoROUTE965->setFromField(QString("value_changed"));
SoROUTE965->setToNode(QString("boxman_r_wrist"));
SoROUTE965->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE965);

SoROUTE* SoROUTE966 = new SoROUTE();
SoROUTE966->setFromNode(QString("Walk_r_elbow_RotationInterpolator"));
SoROUTE966->setFromField(QString("value_changed"));
SoROUTE966->setToNode(QString("boxman_r_elbow"));
SoROUTE966->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE966);

SoROUTE* SoROUTE967 = new SoROUTE();
SoROUTE967->setFromNode(QString("Walk_r_shoulder_RotationInterpolator"));
SoROUTE967->setFromField(QString("value_changed"));
SoROUTE967->setToNode(QString("boxman_r_shoulder"));
SoROUTE967->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE967);

SoROUTE* SoROUTE968 = new SoROUTE();
SoROUTE968->setFromNode(QString("Walk_l_wrist_RotationInterpolator"));
SoROUTE968->setFromField(QString("value_changed"));
SoROUTE968->setToNode(QString("boxman_l_wrist"));
SoROUTE968->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE968);

SoROUTE* SoROUTE969 = new SoROUTE();
SoROUTE969->setFromNode(QString("Walk_l_elbow_RotationInterpolator"));
SoROUTE969->setFromField(QString("value_changed"));
SoROUTE969->setToNode(QString("boxman_l_elbow"));
SoROUTE969->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE969);

SoROUTE* SoROUTE970 = new SoROUTE();
SoROUTE970->setFromNode(QString("Walk_l_shoulder_RotationInterpolator"));
SoROUTE970->setFromField(QString("value_changed"));
SoROUTE970->setToNode(QString("boxman_l_shoulder"));
SoROUTE970->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE970);

SoROUTE* SoROUTE971 = new SoROUTE();
SoROUTE971->setFromNode(QString("Walk_head_RotationInterpolator"));
SoROUTE971->setFromField(QString("value_changed"));
SoROUTE971->setToNode(QString("boxman_skullbase"));
SoROUTE971->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE971);

SoROUTE* SoROUTE972 = new SoROUTE();
SoROUTE972->setFromNode(QString("Walk_whole_body_RotationInterpolator"));
SoROUTE972->setFromField(QString("value_changed"));
SoROUTE972->setToNode(QString("boxman_humanoid_root"));
SoROUTE972->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE972);

SoROUTE* SoROUTE973 = new SoROUTE();
SoROUTE973->setFromNode(QString("Walk_whole_body_TranslationInterpolator"));
SoROUTE973->setFromField(QString("value_changed"));
SoROUTE973->setToNode(QString("boxman_humanoid_root"));
SoROUTE973->setToField(QString("set_translation"));
SoNode32->addChild(*SoROUTE973);

SoROUTE* SoROUTE974 = new SoROUTE();
SoROUTE974->setFromNode(QString("Walk_vl5_YawInterpolator"));
SoROUTE974->setFromField(QString("value_changed"));
SoROUTE974->setToNode(QString("boxman_vl5"));
SoROUTE974->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE974);

SoROUTE* SoROUTE975 = new SoROUTE();
SoROUTE975->setFromNode(QString("RunTimer"));
SoROUTE975->setFromField(QString("fraction_changed"));
SoROUTE975->setToNode(QString("Run_r_ankle_RotationInterpolator_Run"));
SoROUTE975->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE975);

SoROUTE* SoROUTE976 = new SoROUTE();
SoROUTE976->setFromNode(QString("RunTimer"));
SoROUTE976->setFromField(QString("fraction_changed"));
SoROUTE976->setToNode(QString("Run_r_knee_RotationInterpolator_Run"));
SoROUTE976->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE976);

SoROUTE* SoROUTE977 = new SoROUTE();
SoROUTE977->setFromNode(QString("RunTimer"));
SoROUTE977->setFromField(QString("fraction_changed"));
SoROUTE977->setToNode(QString("Run_r_hip_RotationInterpolator_Run"));
SoROUTE977->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE977);

SoROUTE* SoROUTE978 = new SoROUTE();
SoROUTE978->setFromNode(QString("RunTimer"));
SoROUTE978->setFromField(QString("fraction_changed"));
SoROUTE978->setToNode(QString("Run_l_ankle_RotationInterpolator_Run"));
SoROUTE978->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE978);

SoROUTE* SoROUTE979 = new SoROUTE();
SoROUTE979->setFromNode(QString("RunTimer"));
SoROUTE979->setFromField(QString("fraction_changed"));
SoROUTE979->setToNode(QString("Run_l_knee_RotationInterpolator_Run"));
SoROUTE979->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE979);

SoROUTE* SoROUTE980 = new SoROUTE();
SoROUTE980->setFromNode(QString("RunTimer"));
SoROUTE980->setFromField(QString("fraction_changed"));
SoROUTE980->setToNode(QString("Run_l_hip_RotationInterpolator_Run"));
SoROUTE980->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE980);

SoROUTE* SoROUTE981 = new SoROUTE();
SoROUTE981->setFromNode(QString("RunTimer"));
SoROUTE981->setFromField(QString("fraction_changed"));
SoROUTE981->setToNode(QString("Run_lower_body_RotationInterpolator_Run"));
SoROUTE981->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE981);

SoROUTE* SoROUTE982 = new SoROUTE();
SoROUTE982->setFromNode(QString("RunTimer"));
SoROUTE982->setFromField(QString("fraction_changed"));
SoROUTE982->setToNode(QString("Run_r_wrist_RotationInterpolator_Run"));
SoROUTE982->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE982);

SoROUTE* SoROUTE983 = new SoROUTE();
SoROUTE983->setFromNode(QString("RunTimer"));
SoROUTE983->setFromField(QString("fraction_changed"));
SoROUTE983->setToNode(QString("Run_r_elbow_RotationInterpolator_Run"));
SoROUTE983->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE983);

SoROUTE* SoROUTE984 = new SoROUTE();
SoROUTE984->setFromNode(QString("RunTimer"));
SoROUTE984->setFromField(QString("fraction_changed"));
SoROUTE984->setToNode(QString("Run_r_shoulder_RotationInterpolator_Run"));
SoROUTE984->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE984);

SoROUTE* SoROUTE985 = new SoROUTE();
SoROUTE985->setFromNode(QString("RunTimer"));
SoROUTE985->setFromField(QString("fraction_changed"));
SoROUTE985->setToNode(QString("Run_l_wrist_RotationInterpolator_Run"));
SoROUTE985->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE985);

SoROUTE* SoROUTE986 = new SoROUTE();
SoROUTE986->setFromNode(QString("RunTimer"));
SoROUTE986->setFromField(QString("fraction_changed"));
SoROUTE986->setToNode(QString("Run_l_elbow_RotationInterpolator_Run"));
SoROUTE986->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE986);

SoROUTE* SoROUTE987 = new SoROUTE();
SoROUTE987->setFromNode(QString("RunTimer"));
SoROUTE987->setFromField(QString("fraction_changed"));
SoROUTE987->setToNode(QString("Run_l_shoulder_RotationInterpolator_Run"));
SoROUTE987->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE987);

SoROUTE* SoROUTE988 = new SoROUTE();
SoROUTE988->setFromNode(QString("RunTimer"));
SoROUTE988->setFromField(QString("fraction_changed"));
SoROUTE988->setToNode(QString("Run_head_RotationInterpolator_Run"));
SoROUTE988->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE988);

SoROUTE* SoROUTE989 = new SoROUTE();
SoROUTE989->setFromNode(QString("RunTimer"));
SoROUTE989->setFromField(QString("fraction_changed"));
SoROUTE989->setToNode(QString("Run_neck_RotationInterpolator_Run"));
SoROUTE989->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE989);

SoROUTE* SoROUTE990 = new SoROUTE();
SoROUTE990->setFromNode(QString("RunTimer"));
SoROUTE990->setFromField(QString("fraction_changed"));
SoROUTE990->setToNode(QString("Run_upper_body_RotationInterpolator_Run"));
SoROUTE990->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE990);

SoROUTE* SoROUTE991 = new SoROUTE();
SoROUTE991->setFromNode(QString("RunTimer"));
SoROUTE991->setFromField(QString("fraction_changed"));
SoROUTE991->setToNode(QString("Run_whole_body_RotationInterpolator_Run"));
SoROUTE991->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE991);

SoROUTE* SoROUTE992 = new SoROUTE();
SoROUTE992->setFromNode(QString("RunTimer"));
SoROUTE992->setFromField(QString("fraction_changed"));
SoROUTE992->setToNode(QString("Run_whole_body_TranslationInterpolator_Run"));
SoROUTE992->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE992);

SoROUTE* SoROUTE993 = new SoROUTE();
SoROUTE993->setFromNode(QString("RunTimer"));
SoROUTE993->setFromField(QString("fraction_changed"));
SoROUTE993->setToNode(QString("Run_l_sternoclavicular_RollInterpolator"));
SoROUTE993->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE993);

SoROUTE* SoROUTE994 = new SoROUTE();
SoROUTE994->setFromNode(QString("RunTimer"));
SoROUTE994->setFromField(QString("fraction_changed"));
SoROUTE994->setToNode(QString("Run_l_acromioclavicular_RollInterpolator"));
SoROUTE994->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE994);

SoROUTE* SoROUTE995 = new SoROUTE();
SoROUTE995->setFromNode(QString("RunTimer"));
SoROUTE995->setFromField(QString("fraction_changed"));
SoROUTE995->setToNode(QString("Run_r_sternoclavicular_RollInterpolator"));
SoROUTE995->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE995);

SoROUTE* SoROUTE996 = new SoROUTE();
SoROUTE996->setFromNode(QString("RunTimer"));
SoROUTE996->setFromField(QString("fraction_changed"));
SoROUTE996->setToNode(QString("Run_r_acromioclavicular_RollInterpolator"));
SoROUTE996->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE996);

SoROUTE* SoROUTE997 = new SoROUTE();
SoROUTE997->setFromNode(QString("RunTimer"));
SoROUTE997->setFromField(QString("fraction_changed"));
SoROUTE997->setToNode(QString("Run_r_metatarsal_PitchInterpolator"));
SoROUTE997->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE997);

SoROUTE* SoROUTE998 = new SoROUTE();
SoROUTE998->setFromNode(QString("RunTimer"));
SoROUTE998->setFromField(QString("fraction_changed"));
SoROUTE998->setToNode(QString("Run_sacroiliac_YawInterpolator"));
SoROUTE998->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE998);

SoROUTE* SoROUTE999 = new SoROUTE();
SoROUTE999->setFromNode(QString("RunTimer"));
SoROUTE999->setFromField(QString("fraction_changed"));
SoROUTE999->setToNode(QString("Run_vl5_YawInterpolator"));
SoROUTE999->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE999);

SoROUTE* SoROUTE1000 = new SoROUTE();
SoROUTE1000->setFromNode(QString("RunTimer"));
SoROUTE1000->setFromField(QString("fraction_changed"));
SoROUTE1000->setToNode(QString("Run_vc6_YawInterpolator"));
SoROUTE1000->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE1000);

SoROUTE* SoROUTE1001 = new SoROUTE();
SoROUTE1001->setFromNode(QString("RunTimer"));
SoROUTE1001->setFromField(QString("fraction_changed"));
SoROUTE1001->setToNode(QString("Run_l_thumb1_PitchInterpolator"));
SoROUTE1001->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE1001);

SoROUTE* SoROUTE1002 = new SoROUTE();
SoROUTE1002->setFromNode(QString("RunTimer"));
SoROUTE1002->setFromField(QString("fraction_changed"));
SoROUTE1002->setToNode(QString("Run_r_thumb1_PitchInterpolator"));
SoROUTE1002->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE1002);

SoROUTE* SoROUTE1003 = new SoROUTE();
SoROUTE1003->setFromNode(QString("Run_r_ankle_RotationInterpolator_Run"));
SoROUTE1003->setFromField(QString("value_changed"));
SoROUTE1003->setToNode(QString("boxman_r_ankle"));
SoROUTE1003->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE1003);

SoROUTE* SoROUTE1004 = new SoROUTE();
SoROUTE1004->setFromNode(QString("Run_r_knee_RotationInterpolator_Run"));
SoROUTE1004->setFromField(QString("value_changed"));
SoROUTE1004->setToNode(QString("boxman_r_knee"));
SoROUTE1004->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE1004);

SoROUTE* SoROUTE1005 = new SoROUTE();
SoROUTE1005->setFromNode(QString("Run_r_hip_RotationInterpolator_Run"));
SoROUTE1005->setFromField(QString("value_changed"));
SoROUTE1005->setToNode(QString("boxman_r_hip"));
SoROUTE1005->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE1005);

SoROUTE* SoROUTE1006 = new SoROUTE();
SoROUTE1006->setFromNode(QString("Run_l_ankle_RotationInterpolator_Run"));
SoROUTE1006->setFromField(QString("value_changed"));
SoROUTE1006->setToNode(QString("boxman_l_ankle"));
SoROUTE1006->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE1006);

SoROUTE* SoROUTE1007 = new SoROUTE();
SoROUTE1007->setFromNode(QString("Run_l_knee_RotationInterpolator_Run"));
SoROUTE1007->setFromField(QString("value_changed"));
SoROUTE1007->setToNode(QString("boxman_l_knee"));
SoROUTE1007->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE1007);

SoROUTE* SoROUTE1008 = new SoROUTE();
SoROUTE1008->setFromNode(QString("Run_l_hip_RotationInterpolator_Run"));
SoROUTE1008->setFromField(QString("value_changed"));
SoROUTE1008->setToNode(QString("boxman_l_hip"));
SoROUTE1008->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE1008);

SoROUTE* SoROUTE1009 = new SoROUTE();
SoROUTE1009->setFromNode(QString("Run_r_wrist_RotationInterpolator_Run"));
SoROUTE1009->setFromField(QString("value_changed"));
SoROUTE1009->setToNode(QString("boxman_r_wrist"));
SoROUTE1009->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE1009);

SoROUTE* SoROUTE1010 = new SoROUTE();
SoROUTE1010->setFromNode(QString("Run_r_elbow_RotationInterpolator_Run"));
SoROUTE1010->setFromField(QString("value_changed"));
SoROUTE1010->setToNode(QString("boxman_r_elbow"));
SoROUTE1010->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE1010);

SoROUTE* SoROUTE1011 = new SoROUTE();
SoROUTE1011->setFromNode(QString("Run_r_shoulder_RotationInterpolator_Run"));
SoROUTE1011->setFromField(QString("value_changed"));
SoROUTE1011->setToNode(QString("boxman_r_shoulder"));
SoROUTE1011->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE1011);

SoROUTE* SoROUTE1012 = new SoROUTE();
SoROUTE1012->setFromNode(QString("Run_l_wrist_RotationInterpolator_Run"));
SoROUTE1012->setFromField(QString("value_changed"));
SoROUTE1012->setToNode(QString("boxman_l_wrist"));
SoROUTE1012->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE1012);

SoROUTE* SoROUTE1013 = new SoROUTE();
SoROUTE1013->setFromNode(QString("Run_l_elbow_RotationInterpolator_Run"));
SoROUTE1013->setFromField(QString("value_changed"));
SoROUTE1013->setToNode(QString("boxman_l_elbow"));
SoROUTE1013->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE1013);

SoROUTE* SoROUTE1014 = new SoROUTE();
SoROUTE1014->setFromNode(QString("Run_l_shoulder_RotationInterpolator_Run"));
SoROUTE1014->setFromField(QString("value_changed"));
SoROUTE1014->setToNode(QString("boxman_l_shoulder"));
SoROUTE1014->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE1014);

SoROUTE* SoROUTE1015 = new SoROUTE();
SoROUTE1015->setFromNode(QString("Run_head_RotationInterpolator_Run"));
SoROUTE1015->setFromField(QString("value_changed"));
SoROUTE1015->setToNode(QString("boxman_skullbase"));
SoROUTE1015->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE1015);

SoROUTE* SoROUTE1016 = new SoROUTE();
SoROUTE1016->setFromNode(QString("Run_whole_body_RotationInterpolator_Run"));
SoROUTE1016->setFromField(QString("value_changed"));
SoROUTE1016->setToNode(QString("boxman_humanoid_root"));
SoROUTE1016->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE1016);

SoROUTE* SoROUTE1017 = new SoROUTE();
SoROUTE1017->setFromNode(QString("Run_whole_body_TranslationInterpolator_Run"));
SoROUTE1017->setFromField(QString("value_changed"));
SoROUTE1017->setToNode(QString("boxman_humanoid_root"));
SoROUTE1017->setToField(QString("set_translation"));
SoNode32->addChild(*SoROUTE1017);

SoROUTE* SoROUTE1018 = new SoROUTE();
SoROUTE1018->setFromNode(QString("Run_vl5_YawInterpolator"));
SoROUTE1018->setFromField(QString("value_changed"));
SoROUTE1018->setToNode(QString("boxman_vl5"));
SoROUTE1018->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE1018);

SoROUTE* SoROUTE1019 = new SoROUTE();
SoROUTE1019->setFromNode(QString("JumpTimer"));
SoROUTE1019->setFromField(QString("fraction_changed"));
SoROUTE1019->setToNode(QString("Jump_r_ankle_RotationInterpolator"));
SoROUTE1019->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE1019);

SoROUTE* SoROUTE1020 = new SoROUTE();
SoROUTE1020->setFromNode(QString("JumpTimer"));
SoROUTE1020->setFromField(QString("fraction_changed"));
SoROUTE1020->setToNode(QString("Jump_r_knee_RotationInterpolator"));
SoROUTE1020->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE1020);

SoROUTE* SoROUTE1021 = new SoROUTE();
SoROUTE1021->setFromNode(QString("JumpTimer"));
SoROUTE1021->setFromField(QString("fraction_changed"));
SoROUTE1021->setToNode(QString("Jump_r_hip_RotationInterpolator"));
SoROUTE1021->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE1021);

SoROUTE* SoROUTE1022 = new SoROUTE();
SoROUTE1022->setFromNode(QString("JumpTimer"));
SoROUTE1022->setFromField(QString("fraction_changed"));
SoROUTE1022->setToNode(QString("Jump_l_ankle_RotationInterpolator"));
SoROUTE1022->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE1022);

SoROUTE* SoROUTE1023 = new SoROUTE();
SoROUTE1023->setFromNode(QString("JumpTimer"));
SoROUTE1023->setFromField(QString("fraction_changed"));
SoROUTE1023->setToNode(QString("Jump_l_knee_RotationInterpolator"));
SoROUTE1023->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE1023);

SoROUTE* SoROUTE1024 = new SoROUTE();
SoROUTE1024->setFromNode(QString("JumpTimer"));
SoROUTE1024->setFromField(QString("fraction_changed"));
SoROUTE1024->setToNode(QString("Jump_l_hip_RotationInterpolator"));
SoROUTE1024->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE1024);

SoROUTE* SoROUTE1025 = new SoROUTE();
SoROUTE1025->setFromNode(QString("JumpTimer"));
SoROUTE1025->setFromField(QString("fraction_changed"));
SoROUTE1025->setToNode(QString("Jump_lower_body_RotationInterpolator"));
SoROUTE1025->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE1025);

SoROUTE* SoROUTE1026 = new SoROUTE();
SoROUTE1026->setFromNode(QString("JumpTimer"));
SoROUTE1026->setFromField(QString("fraction_changed"));
SoROUTE1026->setToNode(QString("Jump_r_wrist_RotationInterpolator"));
SoROUTE1026->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE1026);

SoROUTE* SoROUTE1027 = new SoROUTE();
SoROUTE1027->setFromNode(QString("JumpTimer"));
SoROUTE1027->setFromField(QString("fraction_changed"));
SoROUTE1027->setToNode(QString("Jump_r_elbow_RotationInterpolator"));
SoROUTE1027->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE1027);

SoROUTE* SoROUTE1028 = new SoROUTE();
SoROUTE1028->setFromNode(QString("JumpTimer"));
SoROUTE1028->setFromField(QString("fraction_changed"));
SoROUTE1028->setToNode(QString("Jump_r_shoulder_RotationInterpolator"));
SoROUTE1028->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE1028);

SoROUTE* SoROUTE1029 = new SoROUTE();
SoROUTE1029->setFromNode(QString("JumpTimer"));
SoROUTE1029->setFromField(QString("fraction_changed"));
SoROUTE1029->setToNode(QString("Jump_l_wrist_RotationInterpolator"));
SoROUTE1029->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE1029);

SoROUTE* SoROUTE1030 = new SoROUTE();
SoROUTE1030->setFromNode(QString("JumpTimer"));
SoROUTE1030->setFromField(QString("fraction_changed"));
SoROUTE1030->setToNode(QString("Jump_l_elbow_RotationInterpolator"));
SoROUTE1030->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE1030);

SoROUTE* SoROUTE1031 = new SoROUTE();
SoROUTE1031->setFromNode(QString("JumpTimer"));
SoROUTE1031->setFromField(QString("fraction_changed"));
SoROUTE1031->setToNode(QString("Jump_l_shoulder_RotationInterpolator"));
SoROUTE1031->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE1031);

SoROUTE* SoROUTE1032 = new SoROUTE();
SoROUTE1032->setFromNode(QString("JumpTimer"));
SoROUTE1032->setFromField(QString("fraction_changed"));
SoROUTE1032->setToNode(QString("Jump_head_RotationInterpolator"));
SoROUTE1032->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE1032);

SoROUTE* SoROUTE1033 = new SoROUTE();
SoROUTE1033->setFromNode(QString("JumpTimer"));
SoROUTE1033->setFromField(QString("fraction_changed"));
SoROUTE1033->setToNode(QString("Jump_neck_RotationInterpolator"));
SoROUTE1033->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE1033);

SoROUTE* SoROUTE1034 = new SoROUTE();
SoROUTE1034->setFromNode(QString("JumpTimer"));
SoROUTE1034->setFromField(QString("fraction_changed"));
SoROUTE1034->setToNode(QString("Jump_upper_body_RotationInterpolator"));
SoROUTE1034->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE1034);

SoROUTE* SoROUTE1035 = new SoROUTE();
SoROUTE1035->setFromNode(QString("JumpTimer"));
SoROUTE1035->setFromField(QString("fraction_changed"));
SoROUTE1035->setToNode(QString("Jump_whole_body_RotationInterpolator"));
SoROUTE1035->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE1035);

SoROUTE* SoROUTE1036 = new SoROUTE();
SoROUTE1036->setFromNode(QString("JumpTimer"));
SoROUTE1036->setFromField(QString("fraction_changed"));
SoROUTE1036->setToNode(QString("Jump_whole_body_TranslationInterpolator"));
SoROUTE1036->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE1036);

SoROUTE* SoROUTE1037 = new SoROUTE();
SoROUTE1037->setFromNode(QString("JumpTimer"));
SoROUTE1037->setFromField(QString("fraction_changed"));
SoROUTE1037->setToNode(QString("Jump_l_sternoclavicular_RollInterpolator"));
SoROUTE1037->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE1037);

SoROUTE* SoROUTE1038 = new SoROUTE();
SoROUTE1038->setFromNode(QString("JumpTimer"));
SoROUTE1038->setFromField(QString("fraction_changed"));
SoROUTE1038->setToNode(QString("Jump_l_acromioclavicular_RollInterpolator"));
SoROUTE1038->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE1038);

SoROUTE* SoROUTE1039 = new SoROUTE();
SoROUTE1039->setFromNode(QString("JumpTimer"));
SoROUTE1039->setFromField(QString("fraction_changed"));
SoROUTE1039->setToNode(QString("Jump_r_sternoclavicular_RollInterpolator"));
SoROUTE1039->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE1039);

SoROUTE* SoROUTE1040 = new SoROUTE();
SoROUTE1040->setFromNode(QString("JumpTimer"));
SoROUTE1040->setFromField(QString("fraction_changed"));
SoROUTE1040->setToNode(QString("Jump_r_acromioclavicular_RollInterpolator"));
SoROUTE1040->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE1040);

SoROUTE* SoROUTE1041 = new SoROUTE();
SoROUTE1041->setFromNode(QString("JumpTimer"));
SoROUTE1041->setFromField(QString("fraction_changed"));
SoROUTE1041->setToNode(QString("Jump_r_metatarsal_PitchInterpolator"));
SoROUTE1041->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE1041);

SoROUTE* SoROUTE1042 = new SoROUTE();
SoROUTE1042->setFromNode(QString("JumpTimer"));
SoROUTE1042->setFromField(QString("fraction_changed"));
SoROUTE1042->setToNode(QString("Jump_sacroiliac_YawInterpolator"));
SoROUTE1042->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE1042);

SoROUTE* SoROUTE1043 = new SoROUTE();
SoROUTE1043->setFromNode(QString("JumpTimer"));
SoROUTE1043->setFromField(QString("fraction_changed"));
SoROUTE1043->setToNode(QString("Jump_vl5_YawInterpolator"));
SoROUTE1043->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE1043);

SoROUTE* SoROUTE1044 = new SoROUTE();
SoROUTE1044->setFromNode(QString("JumpTimer"));
SoROUTE1044->setFromField(QString("fraction_changed"));
SoROUTE1044->setToNode(QString("Jump_vc6_YawInterpolator"));
SoROUTE1044->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE1044);

SoROUTE* SoROUTE1045 = new SoROUTE();
SoROUTE1045->setFromNode(QString("JumpTimer"));
SoROUTE1045->setFromField(QString("fraction_changed"));
SoROUTE1045->setToNode(QString("Jump_l_thumb1_PitchInterpolator"));
SoROUTE1045->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE1045);

SoROUTE* SoROUTE1046 = new SoROUTE();
SoROUTE1046->setFromNode(QString("JumpTimer"));
SoROUTE1046->setFromField(QString("fraction_changed"));
SoROUTE1046->setToNode(QString("Jump_r_thumb1_PitchInterpolator"));
SoROUTE1046->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE1046);

SoROUTE* SoROUTE1047 = new SoROUTE();
SoROUTE1047->setFromNode(QString("Jump_r_ankle_RotationInterpolator"));
SoROUTE1047->setFromField(QString("value_changed"));
SoROUTE1047->setToNode(QString("boxman_r_ankle"));
SoROUTE1047->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE1047);

SoROUTE* SoROUTE1048 = new SoROUTE();
SoROUTE1048->setFromNode(QString("Jump_r_knee_RotationInterpolator"));
SoROUTE1048->setFromField(QString("value_changed"));
SoROUTE1048->setToNode(QString("boxman_r_knee"));
SoROUTE1048->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE1048);

SoROUTE* SoROUTE1049 = new SoROUTE();
SoROUTE1049->setFromNode(QString("Jump_r_hip_RotationInterpolator"));
SoROUTE1049->setFromField(QString("value_changed"));
SoROUTE1049->setToNode(QString("boxman_r_hip"));
SoROUTE1049->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE1049);

SoROUTE* SoROUTE1050 = new SoROUTE();
SoROUTE1050->setFromNode(QString("Jump_l_ankle_RotationInterpolator"));
SoROUTE1050->setFromField(QString("value_changed"));
SoROUTE1050->setToNode(QString("boxman_l_ankle"));
SoROUTE1050->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE1050);

SoROUTE* SoROUTE1051 = new SoROUTE();
SoROUTE1051->setFromNode(QString("Jump_l_knee_RotationInterpolator"));
SoROUTE1051->setFromField(QString("value_changed"));
SoROUTE1051->setToNode(QString("boxman_l_knee"));
SoROUTE1051->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE1051);

SoROUTE* SoROUTE1052 = new SoROUTE();
SoROUTE1052->setFromNode(QString("Jump_l_hip_RotationInterpolator"));
SoROUTE1052->setFromField(QString("value_changed"));
SoROUTE1052->setToNode(QString("boxman_l_hip"));
SoROUTE1052->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE1052);

SoROUTE* SoROUTE1053 = new SoROUTE();
SoROUTE1053->setFromNode(QString("Jump_r_wrist_RotationInterpolator"));
SoROUTE1053->setFromField(QString("value_changed"));
SoROUTE1053->setToNode(QString("boxman_r_wrist"));
SoROUTE1053->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE1053);

SoROUTE* SoROUTE1054 = new SoROUTE();
SoROUTE1054->setFromNode(QString("Jump_r_elbow_RotationInterpolator"));
SoROUTE1054->setFromField(QString("value_changed"));
SoROUTE1054->setToNode(QString("boxman_r_elbow"));
SoROUTE1054->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE1054);

SoROUTE* SoROUTE1055 = new SoROUTE();
SoROUTE1055->setFromNode(QString("Jump_r_shoulder_RotationInterpolator"));
SoROUTE1055->setFromField(QString("value_changed"));
SoROUTE1055->setToNode(QString("boxman_r_shoulder"));
SoROUTE1055->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE1055);

SoROUTE* SoROUTE1056 = new SoROUTE();
SoROUTE1056->setFromNode(QString("Jump_l_wrist_RotationInterpolator"));
SoROUTE1056->setFromField(QString("value_changed"));
SoROUTE1056->setToNode(QString("boxman_l_wrist"));
SoROUTE1056->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE1056);

SoROUTE* SoROUTE1057 = new SoROUTE();
SoROUTE1057->setFromNode(QString("Jump_l_elbow_RotationInterpolator"));
SoROUTE1057->setFromField(QString("value_changed"));
SoROUTE1057->setToNode(QString("boxman_l_elbow"));
SoROUTE1057->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE1057);

SoROUTE* SoROUTE1058 = new SoROUTE();
SoROUTE1058->setFromNode(QString("Jump_l_shoulder_RotationInterpolator"));
SoROUTE1058->setFromField(QString("value_changed"));
SoROUTE1058->setToNode(QString("boxman_l_shoulder"));
SoROUTE1058->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE1058);

SoROUTE* SoROUTE1059 = new SoROUTE();
SoROUTE1059->setFromNode(QString("Jump_head_RotationInterpolator"));
SoROUTE1059->setFromField(QString("value_changed"));
SoROUTE1059->setToNode(QString("boxman_skullbase"));
SoROUTE1059->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE1059);

SoROUTE* SoROUTE1060 = new SoROUTE();
SoROUTE1060->setFromNode(QString("Jump_whole_body_RotationInterpolator"));
SoROUTE1060->setFromField(QString("value_changed"));
SoROUTE1060->setToNode(QString("boxman_humanoid_root"));
SoROUTE1060->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE1060);

SoROUTE* SoROUTE1061 = new SoROUTE();
SoROUTE1061->setFromNode(QString("Jump_whole_body_TranslationInterpolator"));
SoROUTE1061->setFromField(QString("value_changed"));
SoROUTE1061->setToNode(QString("boxman_humanoid_root"));
SoROUTE1061->setToField(QString("set_translation"));
SoNode32->addChild(*SoROUTE1061);

SoROUTE* SoROUTE1062 = new SoROUTE();
SoROUTE1062->setFromNode(QString("Jump_vl5_YawInterpolator"));
SoROUTE1062->setFromField(QString("value_changed"));
SoROUTE1062->setToNode(QString("boxman_vl5"));
SoROUTE1062->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE1062);

SoROUTE* SoROUTE1063 = new SoROUTE();
SoROUTE1063->setFromNode(QString("KickTimer"));
SoROUTE1063->setFromField(QString("fraction_changed"));
SoROUTE1063->setToNode(QString("Kick_l_sternoclavicular_RollInterpolator"));
SoROUTE1063->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE1063);

SoROUTE* SoROUTE1064 = new SoROUTE();
SoROUTE1064->setFromNode(QString("KickTimer"));
SoROUTE1064->setFromField(QString("fraction_changed"));
SoROUTE1064->setToNode(QString("Kick_l_acromioclavicular_RollInterpolator"));
SoROUTE1064->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE1064);

SoROUTE* SoROUTE1065 = new SoROUTE();
SoROUTE1065->setFromNode(QString("KickTimer"));
SoROUTE1065->setFromField(QString("fraction_changed"));
SoROUTE1065->setToNode(QString("Kick_l_shoulder_RollInterpolator"));
SoROUTE1065->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE1065);

SoROUTE* SoROUTE1066 = new SoROUTE();
SoROUTE1066->setFromNode(QString("KickTimer"));
SoROUTE1066->setFromField(QString("fraction_changed"));
SoROUTE1066->setToNode(QString("Kick_l_ForeArm_PitchInterpolator"));
SoROUTE1066->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE1066);

SoROUTE* SoROUTE1067 = new SoROUTE();
SoROUTE1067->setFromNode(QString("KickTimer"));
SoROUTE1067->setFromField(QString("fraction_changed"));
SoROUTE1067->setToNode(QString("Kick_l_wrist_RollInterpolator"));
SoROUTE1067->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE1067);

SoROUTE* SoROUTE1068 = new SoROUTE();
SoROUTE1068->setFromNode(QString("KickTimer"));
SoROUTE1068->setFromField(QString("fraction_changed"));
SoROUTE1068->setToNode(QString("Kick_l_thumb1_PitchInterpolator"));
SoROUTE1068->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE1068);

SoROUTE* SoROUTE1069 = new SoROUTE();
SoROUTE1069->setFromNode(QString("KickTimer"));
SoROUTE1069->setFromField(QString("fraction_changed"));
SoROUTE1069->setToNode(QString("Kick_r_sternoclavicular_RollInterpolator"));
SoROUTE1069->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE1069);

SoROUTE* SoROUTE1070 = new SoROUTE();
SoROUTE1070->setFromNode(QString("KickTimer"));
SoROUTE1070->setFromField(QString("fraction_changed"));
SoROUTE1070->setToNode(QString("Kick_r_acromioclavicular_RollInterpolator"));
SoROUTE1070->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE1070);

SoROUTE* SoROUTE1071 = new SoROUTE();
SoROUTE1071->setFromNode(QString("KickTimer"));
SoROUTE1071->setFromField(QString("fraction_changed"));
SoROUTE1071->setToNode(QString("Kick_r_shoulder_RollInterpolator"));
SoROUTE1071->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE1071);

SoROUTE* SoROUTE1072 = new SoROUTE();
SoROUTE1072->setFromNode(QString("KickTimer"));
SoROUTE1072->setFromField(QString("fraction_changed"));
SoROUTE1072->setToNode(QString("Kick_r_ForeArm_PitchInterpolator"));
SoROUTE1072->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE1072);

SoROUTE* SoROUTE1073 = new SoROUTE();
SoROUTE1073->setFromNode(QString("KickTimer"));
SoROUTE1073->setFromField(QString("fraction_changed"));
SoROUTE1073->setToNode(QString("Kick_r_wrist_RollInterpolator"));
SoROUTE1073->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE1073);

SoROUTE* SoROUTE1074 = new SoROUTE();
SoROUTE1074->setFromNode(QString("KickTimer"));
SoROUTE1074->setFromField(QString("fraction_changed"));
SoROUTE1074->setToNode(QString("Kick_r_thumb1_PitchInterpolator"));
SoROUTE1074->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE1074);

SoROUTE* SoROUTE1075 = new SoROUTE();
SoROUTE1075->setFromNode(QString("KickTimer"));
SoROUTE1075->setFromField(QString("fraction_changed"));
SoROUTE1075->setToNode(QString("Kick_r_hip_PitchInterpolator"));
SoROUTE1075->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE1075);

SoROUTE* SoROUTE1076 = new SoROUTE();
SoROUTE1076->setFromNode(QString("KickTimer"));
SoROUTE1076->setFromField(QString("fraction_changed"));
SoROUTE1076->setToNode(QString("Kick_r_knee_PitchInterpolator"));
SoROUTE1076->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE1076);

SoROUTE* SoROUTE1077 = new SoROUTE();
SoROUTE1077->setFromNode(QString("KickTimer"));
SoROUTE1077->setFromField(QString("fraction_changed"));
SoROUTE1077->setToNode(QString("Kick_l_hip_PitchInterpolator"));
SoROUTE1077->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE1077);

SoROUTE* SoROUTE1078 = new SoROUTE();
SoROUTE1078->setFromNode(QString("KickTimer"));
SoROUTE1078->setFromField(QString("fraction_changed"));
SoROUTE1078->setToNode(QString("Kick_l_knee_PitchInterpolator"));
SoROUTE1078->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE1078);

SoROUTE* SoROUTE1079 = new SoROUTE();
SoROUTE1079->setFromNode(QString("KickTimer"));
SoROUTE1079->setFromField(QString("fraction_changed"));
SoROUTE1079->setToNode(QString("Kick_r_ankle_PitchInterpolator"));
SoROUTE1079->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE1079);

SoROUTE* SoROUTE1080 = new SoROUTE();
SoROUTE1080->setFromNode(QString("KickTimer"));
SoROUTE1080->setFromField(QString("fraction_changed"));
SoROUTE1080->setToNode(QString("Kick_r_metatarsal_PitchInterpolator"));
SoROUTE1080->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE1080);

SoROUTE* SoROUTE1081 = new SoROUTE();
SoROUTE1081->setFromNode(QString("KickTimer"));
SoROUTE1081->setFromField(QString("fraction_changed"));
SoROUTE1081->setToNode(QString("Kick_sacroiliac_YawInterpolator"));
SoROUTE1081->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE1081);

SoROUTE* SoROUTE1082 = new SoROUTE();
SoROUTE1082->setFromNode(QString("KickTimer"));
SoROUTE1082->setFromField(QString("fraction_changed"));
SoROUTE1082->setToNode(QString("Kick_vl5_YawInterpolator"));
SoROUTE1082->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE1082);

SoROUTE* SoROUTE1083 = new SoROUTE();
SoROUTE1083->setFromNode(QString("KickTimer"));
SoROUTE1083->setFromField(QString("fraction_changed"));
SoROUTE1083->setToNode(QString("Kick_vc6_YawInterpolator"));
SoROUTE1083->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE1083);

SoROUTE* SoROUTE1084 = new SoROUTE();
SoROUTE1084->setFromNode(QString("KickTimer"));
SoROUTE1084->setFromField(QString("fraction_changed"));
SoROUTE1084->setToNode(QString("Kick_lower_body_RotationInterpolator"));
SoROUTE1084->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE1084);

SoROUTE* SoROUTE1085 = new SoROUTE();
SoROUTE1085->setFromNode(QString("KickTimer"));
SoROUTE1085->setFromField(QString("fraction_changed"));
SoROUTE1085->setToNode(QString("Kick_upper_body_RotationInterpolator"));
SoROUTE1085->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE1085);

SoROUTE* SoROUTE1086 = new SoROUTE();
SoROUTE1086->setFromNode(QString("KickTimer"));
SoROUTE1086->setFromField(QString("fraction_changed"));
SoROUTE1086->setToNode(QString("Kick_whole_body_RotationInterpolator"));
SoROUTE1086->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE1086);

SoROUTE* SoROUTE1087 = new SoROUTE();
SoROUTE1087->setFromNode(QString("KickTimer"));
SoROUTE1087->setFromField(QString("fraction_changed"));
SoROUTE1087->setToNode(QString("Kick_whole_body_TranslationInterpolator"));
SoROUTE1087->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE1087);

SoROUTE* SoROUTE1088 = new SoROUTE();
SoROUTE1088->setFromNode(QString("KickTimer"));
SoROUTE1088->setFromField(QString("fraction_changed"));
SoROUTE1088->setToNode(QString("Kick_neck_RotationInterpolator"));
SoROUTE1088->setToField(QString("set_fraction"));
SoNode32->addChild(*SoROUTE1088);

SoROUTE* SoROUTE1089 = new SoROUTE();
SoROUTE1089->setFromNode(QString("Kick_l_shoulder_RollInterpolator"));
SoROUTE1089->setFromField(QString("value_changed"));
SoROUTE1089->setToNode(QString("boxman_l_shoulder"));
SoROUTE1089->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE1089);

SoROUTE* SoROUTE1090 = new SoROUTE();
SoROUTE1090->setFromNode(QString("Kick_l_ForeArm_PitchInterpolator"));
SoROUTE1090->setFromField(QString("value_changed"));
SoROUTE1090->setToNode(QString("boxman_l_elbow"));
SoROUTE1090->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE1090);

SoROUTE* SoROUTE1091 = new SoROUTE();
SoROUTE1091->setFromNode(QString("Kick_l_wrist_RollInterpolator"));
SoROUTE1091->setFromField(QString("value_changed"));
SoROUTE1091->setToNode(QString("boxman_l_wrist"));
SoROUTE1091->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE1091);

SoROUTE* SoROUTE1092 = new SoROUTE();
SoROUTE1092->setFromNode(QString("Kick_r_shoulder_RollInterpolator"));
SoROUTE1092->setFromField(QString("value_changed"));
SoROUTE1092->setToNode(QString("boxman_r_shoulder"));
SoROUTE1092->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE1092);

SoROUTE* SoROUTE1093 = new SoROUTE();
SoROUTE1093->setFromNode(QString("Kick_r_ForeArm_PitchInterpolator"));
SoROUTE1093->setFromField(QString("value_changed"));
SoROUTE1093->setToNode(QString("boxman_r_elbow"));
SoROUTE1093->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE1093);

SoROUTE* SoROUTE1094 = new SoROUTE();
SoROUTE1094->setFromNode(QString("Kick_r_wrist_RollInterpolator"));
SoROUTE1094->setFromField(QString("value_changed"));
SoROUTE1094->setToNode(QString("boxman_r_wrist"));
SoROUTE1094->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE1094);

SoROUTE* SoROUTE1095 = new SoROUTE();
SoROUTE1095->setFromNode(QString("Kick_r_hip_PitchInterpolator"));
SoROUTE1095->setFromField(QString("value_changed"));
SoROUTE1095->setToNode(QString("boxman_r_hip"));
SoROUTE1095->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE1095);

SoROUTE* SoROUTE1096 = new SoROUTE();
SoROUTE1096->setFromNode(QString("Kick_r_knee_PitchInterpolator"));
SoROUTE1096->setFromField(QString("value_changed"));
SoROUTE1096->setToNode(QString("boxman_r_knee"));
SoROUTE1096->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE1096);

SoROUTE* SoROUTE1097 = new SoROUTE();
SoROUTE1097->setFromNode(QString("Kick_r_ankle_PitchInterpolator"));
SoROUTE1097->setFromField(QString("value_changed"));
SoROUTE1097->setToNode(QString("boxman_r_ankle"));
SoROUTE1097->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE1097);

SoROUTE* SoROUTE1098 = new SoROUTE();
SoROUTE1098->setFromNode(QString("Kick_l_hip_PitchInterpolator"));
SoROUTE1098->setFromField(QString("value_changed"));
SoROUTE1098->setToNode(QString("boxman_l_hip"));
SoROUTE1098->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE1098);

SoROUTE* SoROUTE1099 = new SoROUTE();
SoROUTE1099->setFromNode(QString("Kick_l_knee_PitchInterpolator"));
SoROUTE1099->setFromField(QString("value_changed"));
SoROUTE1099->setToNode(QString("boxman_l_knee"));
SoROUTE1099->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE1099);

SoROUTE* SoROUTE1100 = new SoROUTE();
SoROUTE1100->setFromNode(QString("Kick_r_ankle_PitchInterpolator"));
SoROUTE1100->setFromField(QString("value_changed"));
SoROUTE1100->setToNode(QString("boxman_l_ankle"));
SoROUTE1100->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE1100);

SoROUTE* SoROUTE1101 = new SoROUTE();
SoROUTE1101->setFromNode(QString("Kick_vl5_YawInterpolator"));
SoROUTE1101->setFromField(QString("value_changed"));
SoROUTE1101->setToNode(QString("boxman_vl5"));
SoROUTE1101->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE1101);

SoROUTE* SoROUTE1102 = new SoROUTE();
SoROUTE1102->setFromNode(QString("Kick_whole_body_RotationInterpolator"));
SoROUTE1102->setFromField(QString("value_changed"));
SoROUTE1102->setToNode(QString("boxman_humanoid_root"));
SoROUTE1102->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE1102);

SoROUTE* SoROUTE1103 = new SoROUTE();
SoROUTE1103->setFromNode(QString("Kick_whole_body_TranslationInterpolator"));
SoROUTE1103->setFromField(QString("value_changed"));
SoROUTE1103->setToNode(QString("boxman_humanoid_root"));
SoROUTE1103->setToField(QString("set_translation"));
SoNode32->addChild(*SoROUTE1103);

SoROUTE* SoROUTE1104 = new SoROUTE();
SoROUTE1104->setFromNode(QString("HudProx"));
SoROUTE1104->setFromField(QString("position_changed"));
SoROUTE1104->setToNode(QString("HudXform"));
SoROUTE1104->setToField(QString("set_translation"));
SoNode32->addChild(*SoROUTE1104);

SoROUTE* SoROUTE1105 = new SoROUTE();
SoROUTE1105->setFromNode(QString("HudProx"));
SoROUTE1105->setFromField(QString("orientation_changed"));
SoROUTE1105->setToNode(QString("HudXform"));
SoROUTE1105->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE1105);

SoROUTE* SoROUTE1106 = new SoROUTE();
SoROUTE1106->setFromNode(QString("Stand_Touch"));
SoROUTE1106->setFromField(QString("touchTime"));
SoROUTE1106->setToNode(QString("PitchTimer"));
SoROUTE1106->setToField(QString("set_stopTime"));
SoNode32->addChild(*SoROUTE1106);

SoROUTE* SoROUTE1107 = new SoROUTE();
SoROUTE1107->setFromNode(QString("Stand_Touch"));
SoROUTE1107->setFromField(QString("touchTime"));
SoROUTE1107->setToNode(QString("YawTimer"));
SoROUTE1107->setToField(QString("set_stopTime"));
SoNode32->addChild(*SoROUTE1107);

SoROUTE* SoROUTE1108 = new SoROUTE();
SoROUTE1108->setFromNode(QString("Stand_Touch"));
SoROUTE1108->setFromField(QString("touchTime"));
SoROUTE1108->setToNode(QString("RollTimer"));
SoROUTE1108->setToField(QString("set_stopTime"));
SoNode32->addChild(*SoROUTE1108);

SoROUTE* SoROUTE1109 = new SoROUTE();
SoROUTE1109->setFromNode(QString("Stand_Touch"));
SoROUTE1109->setFromField(QString("touchTime"));
SoROUTE1109->setToNode(QString("WalkTimer"));
SoROUTE1109->setToField(QString("set_stopTime"));
SoNode32->addChild(*SoROUTE1109);

SoROUTE* SoROUTE1110 = new SoROUTE();
SoROUTE1110->setFromNode(QString("Stand_Touch"));
SoROUTE1110->setFromField(QString("touchTime"));
SoROUTE1110->setToNode(QString("RunTimer"));
SoROUTE1110->setToField(QString("set_stopTime"));
SoNode32->addChild(*SoROUTE1110);

SoROUTE* SoROUTE1111 = new SoROUTE();
SoROUTE1111->setFromNode(QString("Stand_Touch"));
SoROUTE1111->setFromField(QString("touchTime"));
SoROUTE1111->setToNode(QString("JumpTimer"));
SoROUTE1111->setToField(QString("set_stopTime"));
SoNode32->addChild(*SoROUTE1111);

SoROUTE* SoROUTE1112 = new SoROUTE();
SoROUTE1112->setFromNode(QString("Stand_Touch"));
SoROUTE1112->setFromField(QString("touchTime"));
SoROUTE1112->setToNode(QString("KickTimer"));
SoROUTE1112->setToField(QString("set_stopTime"));
SoNode32->addChild(*SoROUTE1112);

SoROUTE* SoROUTE1113 = new SoROUTE();
SoROUTE1113->setFromNode(QString("Stand_Touch"));
SoROUTE1113->setFromField(QString("touchTime"));
SoROUTE1113->setToNode(QString("StopTimer"));
SoROUTE1113->setToField(QString("set_stopTime"));
SoNode32->addChild(*SoROUTE1113);

SoROUTE* SoROUTE1114 = new SoROUTE();
SoROUTE1114->setFromNode(QString("Stand_Touch"));
SoROUTE1114->setFromField(QString("touchTime"));
SoROUTE1114->setToNode(QString("StandTimer"));
SoROUTE1114->setToField(QString("set_startTime"));
SoNode32->addChild(*SoROUTE1114);

SoROUTE* SoROUTE1115 = new SoROUTE();
SoROUTE1115->setFromNode(QString("Pitch_Touch"));
SoROUTE1115->setFromField(QString("touchTime"));
SoROUTE1115->setToNode(QString("StandTimer"));
SoROUTE1115->setToField(QString("set_stopTime"));
SoNode32->addChild(*SoROUTE1115);

SoROUTE* SoROUTE1116 = new SoROUTE();
SoROUTE1116->setFromNode(QString("Pitch_Touch"));
SoROUTE1116->setFromField(QString("touchTime"));
SoROUTE1116->setToNode(QString("YawTimer"));
SoROUTE1116->setToField(QString("set_stopTime"));
SoNode32->addChild(*SoROUTE1116);

SoROUTE* SoROUTE1117 = new SoROUTE();
SoROUTE1117->setFromNode(QString("Pitch_Touch"));
SoROUTE1117->setFromField(QString("touchTime"));
SoROUTE1117->setToNode(QString("RollTimer"));
SoROUTE1117->setToField(QString("set_stopTime"));
SoNode32->addChild(*SoROUTE1117);

SoROUTE* SoROUTE1118 = new SoROUTE();
SoROUTE1118->setFromNode(QString("Pitch_Touch"));
SoROUTE1118->setFromField(QString("touchTime"));
SoROUTE1118->setToNode(QString("WalkTimer"));
SoROUTE1118->setToField(QString("set_stopTime"));
SoNode32->addChild(*SoROUTE1118);

SoROUTE* SoROUTE1119 = new SoROUTE();
SoROUTE1119->setFromNode(QString("Pitch_Touch"));
SoROUTE1119->setFromField(QString("touchTime"));
SoROUTE1119->setToNode(QString("RunTimer"));
SoROUTE1119->setToField(QString("set_stopTime"));
SoNode32->addChild(*SoROUTE1119);

SoROUTE* SoROUTE1120 = new SoROUTE();
SoROUTE1120->setFromNode(QString("Pitch_Touch"));
SoROUTE1120->setFromField(QString("touchTime"));
SoROUTE1120->setToNode(QString("JumpTimer"));
SoROUTE1120->setToField(QString("set_stopTime"));
SoNode32->addChild(*SoROUTE1120);

SoROUTE* SoROUTE1121 = new SoROUTE();
SoROUTE1121->setFromNode(QString("Pitch_Touch"));
SoROUTE1121->setFromField(QString("touchTime"));
SoROUTE1121->setToNode(QString("KickTimer"));
SoROUTE1121->setToField(QString("set_stopTime"));
SoNode32->addChild(*SoROUTE1121);

SoROUTE* SoROUTE1122 = new SoROUTE();
SoROUTE1122->setFromNode(QString("Pitch_Touch"));
SoROUTE1122->setFromField(QString("touchTime"));
SoROUTE1122->setToNode(QString("StopTimer"));
SoROUTE1122->setToField(QString("set_stopTime"));
SoNode32->addChild(*SoROUTE1122);

SoROUTE* SoROUTE1123 = new SoROUTE();
SoROUTE1123->setFromNode(QString("Pitch_Touch"));
SoROUTE1123->setFromField(QString("touchTime"));
SoROUTE1123->setToNode(QString("PitchTimer"));
SoROUTE1123->setToField(QString("set_startTime"));
SoNode32->addChild(*SoROUTE1123);

SoROUTE* SoROUTE1124 = new SoROUTE();
SoROUTE1124->setFromNode(QString("Yaw_Touch"));
SoROUTE1124->setFromField(QString("touchTime"));
SoROUTE1124->setToNode(QString("StandTimer"));
SoROUTE1124->setToField(QString("set_stopTime"));
SoNode32->addChild(*SoROUTE1124);

SoROUTE* SoROUTE1125 = new SoROUTE();
SoROUTE1125->setFromNode(QString("Yaw_Touch"));
SoROUTE1125->setFromField(QString("touchTime"));
SoROUTE1125->setToNode(QString("PitchTimer"));
SoROUTE1125->setToField(QString("set_stopTime"));
SoNode32->addChild(*SoROUTE1125);

SoROUTE* SoROUTE1126 = new SoROUTE();
SoROUTE1126->setFromNode(QString("Yaw_Touch"));
SoROUTE1126->setFromField(QString("touchTime"));
SoROUTE1126->setToNode(QString("RollTimer"));
SoROUTE1126->setToField(QString("set_stopTime"));
SoNode32->addChild(*SoROUTE1126);

SoROUTE* SoROUTE1127 = new SoROUTE();
SoROUTE1127->setFromNode(QString("Yaw_Touch"));
SoROUTE1127->setFromField(QString("touchTime"));
SoROUTE1127->setToNode(QString("WalkTimer"));
SoROUTE1127->setToField(QString("set_stopTime"));
SoNode32->addChild(*SoROUTE1127);

SoROUTE* SoROUTE1128 = new SoROUTE();
SoROUTE1128->setFromNode(QString("Yaw_Touch"));
SoROUTE1128->setFromField(QString("touchTime"));
SoROUTE1128->setToNode(QString("RunTimer"));
SoROUTE1128->setToField(QString("set_stopTime"));
SoNode32->addChild(*SoROUTE1128);

SoROUTE* SoROUTE1129 = new SoROUTE();
SoROUTE1129->setFromNode(QString("Yaw_Touch"));
SoROUTE1129->setFromField(QString("touchTime"));
SoROUTE1129->setToNode(QString("JumpTimer"));
SoROUTE1129->setToField(QString("set_stopTime"));
SoNode32->addChild(*SoROUTE1129);

SoROUTE* SoROUTE1130 = new SoROUTE();
SoROUTE1130->setFromNode(QString("Yaw_Touch"));
SoROUTE1130->setFromField(QString("touchTime"));
SoROUTE1130->setToNode(QString("KickTimer"));
SoROUTE1130->setToField(QString("set_stopTime"));
SoNode32->addChild(*SoROUTE1130);

SoROUTE* SoROUTE1131 = new SoROUTE();
SoROUTE1131->setFromNode(QString("Yaw_Touch"));
SoROUTE1131->setFromField(QString("touchTime"));
SoROUTE1131->setToNode(QString("StopTimer"));
SoROUTE1131->setToField(QString("set_stopTime"));
SoNode32->addChild(*SoROUTE1131);

SoROUTE* SoROUTE1132 = new SoROUTE();
SoROUTE1132->setFromNode(QString("Yaw_Touch"));
SoROUTE1132->setFromField(QString("touchTime"));
SoROUTE1132->setToNode(QString("YawTimer"));
SoROUTE1132->setToField(QString("set_startTime"));
SoNode32->addChild(*SoROUTE1132);

SoROUTE* SoROUTE1133 = new SoROUTE();
SoROUTE1133->setFromNode(QString("Walk_Touch"));
SoROUTE1133->setFromField(QString("touchTime"));
SoROUTE1133->setToNode(QString("StandTimer"));
SoROUTE1133->setToField(QString("set_stopTime"));
SoNode32->addChild(*SoROUTE1133);

SoROUTE* SoROUTE1134 = new SoROUTE();
SoROUTE1134->setFromNode(QString("Walk_Touch"));
SoROUTE1134->setFromField(QString("touchTime"));
SoROUTE1134->setToNode(QString("PitchTimer"));
SoROUTE1134->setToField(QString("set_stopTime"));
SoNode32->addChild(*SoROUTE1134);

SoROUTE* SoROUTE1135 = new SoROUTE();
SoROUTE1135->setFromNode(QString("Walk_Touch"));
SoROUTE1135->setFromField(QString("touchTime"));
SoROUTE1135->setToNode(QString("YawTimer"));
SoROUTE1135->setToField(QString("set_stopTime"));
SoNode32->addChild(*SoROUTE1135);

SoROUTE* SoROUTE1136 = new SoROUTE();
SoROUTE1136->setFromNode(QString("Walk_Touch"));
SoROUTE1136->setFromField(QString("touchTime"));
SoROUTE1136->setToNode(QString("RollTimer"));
SoROUTE1136->setToField(QString("set_stopTime"));
SoNode32->addChild(*SoROUTE1136);

SoROUTE* SoROUTE1137 = new SoROUTE();
SoROUTE1137->setFromNode(QString("Walk_Touch"));
SoROUTE1137->setFromField(QString("touchTime"));
SoROUTE1137->setToNode(QString("RunTimer"));
SoROUTE1137->setToField(QString("set_stopTime"));
SoNode32->addChild(*SoROUTE1137);

SoROUTE* SoROUTE1138 = new SoROUTE();
SoROUTE1138->setFromNode(QString("Walk_Touch"));
SoROUTE1138->setFromField(QString("touchTime"));
SoROUTE1138->setToNode(QString("JumpTimer"));
SoROUTE1138->setToField(QString("set_stopTime"));
SoNode32->addChild(*SoROUTE1138);

SoROUTE* SoROUTE1139 = new SoROUTE();
SoROUTE1139->setFromNode(QString("Walk_Touch"));
SoROUTE1139->setFromField(QString("touchTime"));
SoROUTE1139->setToNode(QString("KickTimer"));
SoROUTE1139->setToField(QString("set_stopTime"));
SoNode32->addChild(*SoROUTE1139);

SoROUTE* SoROUTE1140 = new SoROUTE();
SoROUTE1140->setFromNode(QString("Walk_Touch"));
SoROUTE1140->setFromField(QString("touchTime"));
SoROUTE1140->setToNode(QString("StopTimer"));
SoROUTE1140->setToField(QString("set_stopTime"));
SoNode32->addChild(*SoROUTE1140);

SoROUTE* SoROUTE1141 = new SoROUTE();
SoROUTE1141->setFromNode(QString("Walk_Touch"));
SoROUTE1141->setFromField(QString("touchTime"));
SoROUTE1141->setToNode(QString("WalkTimer"));
SoROUTE1141->setToField(QString("set_startTime"));
SoNode32->addChild(*SoROUTE1141);

SoROUTE* SoROUTE1142 = new SoROUTE();
SoROUTE1142->setFromNode(QString("Roll_Touch"));
SoROUTE1142->setFromField(QString("touchTime"));
SoROUTE1142->setToNode(QString("StandTimer"));
SoROUTE1142->setToField(QString("set_stopTime"));
SoNode32->addChild(*SoROUTE1142);

SoROUTE* SoROUTE1143 = new SoROUTE();
SoROUTE1143->setFromNode(QString("Roll_Touch"));
SoROUTE1143->setFromField(QString("touchTime"));
SoROUTE1143->setToNode(QString("PitchTimer"));
SoROUTE1143->setToField(QString("set_stopTime"));
SoNode32->addChild(*SoROUTE1143);

SoROUTE* SoROUTE1144 = new SoROUTE();
SoROUTE1144->setFromNode(QString("Roll_Touch"));
SoROUTE1144->setFromField(QString("touchTime"));
SoROUTE1144->setToNode(QString("YawTimer"));
SoROUTE1144->setToField(QString("set_stopTime"));
SoNode32->addChild(*SoROUTE1144);

SoROUTE* SoROUTE1145 = new SoROUTE();
SoROUTE1145->setFromNode(QString("Roll_Touch"));
SoROUTE1145->setFromField(QString("touchTime"));
SoROUTE1145->setToNode(QString("WalkTimer"));
SoROUTE1145->setToField(QString("set_stopTime"));
SoNode32->addChild(*SoROUTE1145);

SoROUTE* SoROUTE1146 = new SoROUTE();
SoROUTE1146->setFromNode(QString("Roll_Touch"));
SoROUTE1146->setFromField(QString("touchTime"));
SoROUTE1146->setToNode(QString("RunTimer"));
SoROUTE1146->setToField(QString("set_stopTime"));
SoNode32->addChild(*SoROUTE1146);

SoROUTE* SoROUTE1147 = new SoROUTE();
SoROUTE1147->setFromNode(QString("Roll_Touch"));
SoROUTE1147->setFromField(QString("touchTime"));
SoROUTE1147->setToNode(QString("JumpTimer"));
SoROUTE1147->setToField(QString("set_stopTime"));
SoNode32->addChild(*SoROUTE1147);

SoROUTE* SoROUTE1148 = new SoROUTE();
SoROUTE1148->setFromNode(QString("Roll_Touch"));
SoROUTE1148->setFromField(QString("touchTime"));
SoROUTE1148->setToNode(QString("KickTimer"));
SoROUTE1148->setToField(QString("set_stopTime"));
SoNode32->addChild(*SoROUTE1148);

SoROUTE* SoROUTE1149 = new SoROUTE();
SoROUTE1149->setFromNode(QString("Roll_Touch"));
SoROUTE1149->setFromField(QString("touchTime"));
SoROUTE1149->setToNode(QString("StopTimer"));
SoROUTE1149->setToField(QString("set_stopTime"));
SoNode32->addChild(*SoROUTE1149);

SoROUTE* SoROUTE1150 = new SoROUTE();
SoROUTE1150->setFromNode(QString("Roll_Touch"));
SoROUTE1150->setFromField(QString("touchTime"));
SoROUTE1150->setToNode(QString("RollTimer"));
SoROUTE1150->setToField(QString("set_startTime"));
SoNode32->addChild(*SoROUTE1150);

SoROUTE* SoROUTE1151 = new SoROUTE();
SoROUTE1151->setFromNode(QString("Run_Touch"));
SoROUTE1151->setFromField(QString("touchTime"));
SoROUTE1151->setToNode(QString("StandTimer"));
SoROUTE1151->setToField(QString("set_stopTime"));
SoNode32->addChild(*SoROUTE1151);

SoROUTE* SoROUTE1152 = new SoROUTE();
SoROUTE1152->setFromNode(QString("Run_Touch"));
SoROUTE1152->setFromField(QString("touchTime"));
SoROUTE1152->setToNode(QString("PitchTimer"));
SoROUTE1152->setToField(QString("set_stopTime"));
SoNode32->addChild(*SoROUTE1152);

SoROUTE* SoROUTE1153 = new SoROUTE();
SoROUTE1153->setFromNode(QString("Run_Touch"));
SoROUTE1153->setFromField(QString("touchTime"));
SoROUTE1153->setToNode(QString("YawTimer"));
SoROUTE1153->setToField(QString("set_stopTime"));
SoNode32->addChild(*SoROUTE1153);

SoROUTE* SoROUTE1154 = new SoROUTE();
SoROUTE1154->setFromNode(QString("Run_Touch"));
SoROUTE1154->setFromField(QString("touchTime"));
SoROUTE1154->setToNode(QString("RollTimer"));
SoROUTE1154->setToField(QString("set_stopTime"));
SoNode32->addChild(*SoROUTE1154);

SoROUTE* SoROUTE1155 = new SoROUTE();
SoROUTE1155->setFromNode(QString("Run_Touch"));
SoROUTE1155->setFromField(QString("touchTime"));
SoROUTE1155->setToNode(QString("WalkTimer"));
SoROUTE1155->setToField(QString("set_stopTime"));
SoNode32->addChild(*SoROUTE1155);

SoROUTE* SoROUTE1156 = new SoROUTE();
SoROUTE1156->setFromNode(QString("Run_Touch"));
SoROUTE1156->setFromField(QString("touchTime"));
SoROUTE1156->setToNode(QString("JumpTimer"));
SoROUTE1156->setToField(QString("set_stopTime"));
SoNode32->addChild(*SoROUTE1156);

SoROUTE* SoROUTE1157 = new SoROUTE();
SoROUTE1157->setFromNode(QString("Run_Touch"));
SoROUTE1157->setFromField(QString("touchTime"));
SoROUTE1157->setToNode(QString("KickTimer"));
SoROUTE1157->setToField(QString("set_stopTime"));
SoNode32->addChild(*SoROUTE1157);

SoROUTE* SoROUTE1158 = new SoROUTE();
SoROUTE1158->setFromNode(QString("Run_Touch"));
SoROUTE1158->setFromField(QString("touchTime"));
SoROUTE1158->setToNode(QString("StopTimer"));
SoROUTE1158->setToField(QString("set_stopTime"));
SoNode32->addChild(*SoROUTE1158);

SoROUTE* SoROUTE1159 = new SoROUTE();
SoROUTE1159->setFromNode(QString("Run_Touch"));
SoROUTE1159->setFromField(QString("touchTime"));
SoROUTE1159->setToNode(QString("RunTimer"));
SoROUTE1159->setToField(QString("set_startTime"));
SoNode32->addChild(*SoROUTE1159);

SoROUTE* SoROUTE1160 = new SoROUTE();
SoROUTE1160->setFromNode(QString("Jump_Touch"));
SoROUTE1160->setFromField(QString("touchTime"));
SoROUTE1160->setToNode(QString("StandTimer"));
SoROUTE1160->setToField(QString("set_stopTime"));
SoNode32->addChild(*SoROUTE1160);

SoROUTE* SoROUTE1161 = new SoROUTE();
SoROUTE1161->setFromNode(QString("Jump_Touch"));
SoROUTE1161->setFromField(QString("touchTime"));
SoROUTE1161->setToNode(QString("PitchTimer"));
SoROUTE1161->setToField(QString("set_stopTime"));
SoNode32->addChild(*SoROUTE1161);

SoROUTE* SoROUTE1162 = new SoROUTE();
SoROUTE1162->setFromNode(QString("Jump_Touch"));
SoROUTE1162->setFromField(QString("touchTime"));
SoROUTE1162->setToNode(QString("YawTimer"));
SoROUTE1162->setToField(QString("set_stopTime"));
SoNode32->addChild(*SoROUTE1162);

SoROUTE* SoROUTE1163 = new SoROUTE();
SoROUTE1163->setFromNode(QString("Jump_Touch"));
SoROUTE1163->setFromField(QString("touchTime"));
SoROUTE1163->setToNode(QString("RollTimer"));
SoROUTE1163->setToField(QString("set_stopTime"));
SoNode32->addChild(*SoROUTE1163);

SoROUTE* SoROUTE1164 = new SoROUTE();
SoROUTE1164->setFromNode(QString("Jump_Touch"));
SoROUTE1164->setFromField(QString("touchTime"));
SoROUTE1164->setToNode(QString("WalkTimer"));
SoROUTE1164->setToField(QString("set_stopTime"));
SoNode32->addChild(*SoROUTE1164);

SoROUTE* SoROUTE1165 = new SoROUTE();
SoROUTE1165->setFromNode(QString("Jump_Touch"));
SoROUTE1165->setFromField(QString("touchTime"));
SoROUTE1165->setToNode(QString("RunTimer"));
SoROUTE1165->setToField(QString("set_stopTime"));
SoNode32->addChild(*SoROUTE1165);

SoROUTE* SoROUTE1166 = new SoROUTE();
SoROUTE1166->setFromNode(QString("Jump_Touch"));
SoROUTE1166->setFromField(QString("touchTime"));
SoROUTE1166->setToNode(QString("KickTimer"));
SoROUTE1166->setToField(QString("set_stopTime"));
SoNode32->addChild(*SoROUTE1166);

SoROUTE* SoROUTE1167 = new SoROUTE();
SoROUTE1167->setFromNode(QString("Jump_Touch"));
SoROUTE1167->setFromField(QString("touchTime"));
SoROUTE1167->setToNode(QString("StopTimer"));
SoROUTE1167->setToField(QString("set_stopTime"));
SoNode32->addChild(*SoROUTE1167);

SoROUTE* SoROUTE1168 = new SoROUTE();
SoROUTE1168->setFromNode(QString("Jump_Touch"));
SoROUTE1168->setFromField(QString("touchTime"));
SoROUTE1168->setToNode(QString("JumpTimer"));
SoROUTE1168->setToField(QString("set_startTime"));
SoNode32->addChild(*SoROUTE1168);

SoROUTE* SoROUTE1169 = new SoROUTE();
SoROUTE1169->setFromNode(QString("Kick_Touch"));
SoROUTE1169->setFromField(QString("touchTime"));
SoROUTE1169->setToNode(QString("StandTimer"));
SoROUTE1169->setToField(QString("set_stopTime"));
SoNode32->addChild(*SoROUTE1169);

SoROUTE* SoROUTE1170 = new SoROUTE();
SoROUTE1170->setFromNode(QString("Kick_Touch"));
SoROUTE1170->setFromField(QString("touchTime"));
SoROUTE1170->setToNode(QString("PitchTimer"));
SoROUTE1170->setToField(QString("set_stopTime"));
SoNode32->addChild(*SoROUTE1170);

SoROUTE* SoROUTE1171 = new SoROUTE();
SoROUTE1171->setFromNode(QString("Kick_Touch"));
SoROUTE1171->setFromField(QString("touchTime"));
SoROUTE1171->setToNode(QString("YawTimer"));
SoROUTE1171->setToField(QString("set_stopTime"));
SoNode32->addChild(*SoROUTE1171);

SoROUTE* SoROUTE1172 = new SoROUTE();
SoROUTE1172->setFromNode(QString("Kick_Touch"));
SoROUTE1172->setFromField(QString("touchTime"));
SoROUTE1172->setToNode(QString("RollTimer"));
SoROUTE1172->setToField(QString("set_stopTime"));
SoNode32->addChild(*SoROUTE1172);

SoROUTE* SoROUTE1173 = new SoROUTE();
SoROUTE1173->setFromNode(QString("Kick_Touch"));
SoROUTE1173->setFromField(QString("touchTime"));
SoROUTE1173->setToNode(QString("WalkTimer"));
SoROUTE1173->setToField(QString("set_stopTime"));
SoNode32->addChild(*SoROUTE1173);

SoROUTE* SoROUTE1174 = new SoROUTE();
SoROUTE1174->setFromNode(QString("Kick_Touch"));
SoROUTE1174->setFromField(QString("touchTime"));
SoROUTE1174->setToNode(QString("RunTimer"));
SoROUTE1174->setToField(QString("set_stopTime"));
SoNode32->addChild(*SoROUTE1174);

SoROUTE* SoROUTE1175 = new SoROUTE();
SoROUTE1175->setFromNode(QString("Kick_Touch"));
SoROUTE1175->setFromField(QString("touchTime"));
SoROUTE1175->setToNode(QString("JumpTimer"));
SoROUTE1175->setToField(QString("set_stopTime"));
SoNode32->addChild(*SoROUTE1175);

SoROUTE* SoROUTE1176 = new SoROUTE();
SoROUTE1176->setFromNode(QString("Kick_Touch"));
SoROUTE1176->setFromField(QString("touchTime"));
SoROUTE1176->setToNode(QString("StopTimer"));
SoROUTE1176->setToField(QString("set_stopTime"));
SoNode32->addChild(*SoROUTE1176);

SoROUTE* SoROUTE1177 = new SoROUTE();
SoROUTE1177->setFromNode(QString("Kick_Touch"));
SoROUTE1177->setFromField(QString("touchTime"));
SoROUTE1177->setToNode(QString("KickTimer"));
SoROUTE1177->setToField(QString("set_startTime"));
SoNode32->addChild(*SoROUTE1177);

SoROUTE* SoROUTE1178 = new SoROUTE();
SoROUTE1178->setFromNode(QString("Stop_Touch"));
SoROUTE1178->setFromField(QString("touchTime"));
SoROUTE1178->setToNode(QString("StandTimer"));
SoROUTE1178->setToField(QString("set_stopTime"));
SoNode32->addChild(*SoROUTE1178);

SoROUTE* SoROUTE1179 = new SoROUTE();
SoROUTE1179->setFromNode(QString("Stop_Touch"));
SoROUTE1179->setFromField(QString("touchTime"));
SoROUTE1179->setToNode(QString("PitchTimer"));
SoROUTE1179->setToField(QString("set_stopTime"));
SoNode32->addChild(*SoROUTE1179);

SoROUTE* SoROUTE1180 = new SoROUTE();
SoROUTE1180->setFromNode(QString("Stop_Touch"));
SoROUTE1180->setFromField(QString("touchTime"));
SoROUTE1180->setToNode(QString("YawTimer"));
SoROUTE1180->setToField(QString("set_stopTime"));
SoNode32->addChild(*SoROUTE1180);

SoROUTE* SoROUTE1181 = new SoROUTE();
SoROUTE1181->setFromNode(QString("Stop_Touch"));
SoROUTE1181->setFromField(QString("touchTime"));
SoROUTE1181->setToNode(QString("RollTimer"));
SoROUTE1181->setToField(QString("set_stopTime"));
SoNode32->addChild(*SoROUTE1181);

SoROUTE* SoROUTE1182 = new SoROUTE();
SoROUTE1182->setFromNode(QString("Stop_Touch"));
SoROUTE1182->setFromField(QString("touchTime"));
SoROUTE1182->setToNode(QString("WalkTimer"));
SoROUTE1182->setToField(QString("set_stopTime"));
SoNode32->addChild(*SoROUTE1182);

SoROUTE* SoROUTE1183 = new SoROUTE();
SoROUTE1183->setFromNode(QString("Stop_Touch"));
SoROUTE1183->setFromField(QString("touchTime"));
SoROUTE1183->setToNode(QString("RunTimer"));
SoROUTE1183->setToField(QString("set_stopTime"));
SoNode32->addChild(*SoROUTE1183);

SoROUTE* SoROUTE1184 = new SoROUTE();
SoROUTE1184->setFromNode(QString("Stop_Touch"));
SoROUTE1184->setFromField(QString("touchTime"));
SoROUTE1184->setToNode(QString("JumpTimer"));
SoROUTE1184->setToField(QString("set_stopTime"));
SoNode32->addChild(*SoROUTE1184);

SoROUTE* SoROUTE1185 = new SoROUTE();
SoROUTE1185->setFromNode(QString("Stop_Touch"));
SoROUTE1185->setFromField(QString("touchTime"));
SoROUTE1185->setToNode(QString("KickTimer"));
SoROUTE1185->setToField(QString("set_stopTime"));
SoNode32->addChild(*SoROUTE1185);

SoROUTE* SoROUTE1186 = new SoROUTE();
SoROUTE1186->setFromNode(QString("Stop_Touch"));
SoROUTE1186->setFromField(QString("touchTime"));
SoROUTE1186->setToNode(QString("StopTimer"));
SoROUTE1186->setToField(QString("set_startTime"));
SoNode32->addChild(*SoROUTE1186);

SoSceneManager0->setSceneGraph(*SoNode32);

return 0;
}
