
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
Someta3->setContent(QString("BoxMan3.x3d"));
Sohead1->addMeta(*Someta3);

Someta* Someta4 = new Someta();
Someta4->setName(QString("description"));
Someta4->setContent(QString("A Seamless VRML Human, demonstrating the HAnim 2001 Specification, animation scripting via an external prototype (ExternProtoDeclare)."));
Sohead1->addMeta(*Someta4);

Someta* Someta5 = new Someta();
Someta5->setName(QString("creator"));
Someta5->setContent(QString("James Smith - james@vapourtech.com"));
Sohead1->addMeta(*Someta5);

Someta* Someta6 = new Someta();
Someta6->setName(QString("translator"));
Someta6->setContent(QString("Don Brutzman and Matt Beitler"));
Sohead1->addMeta(*Someta6);

Someta* Someta7 = new Someta();
Someta7->setName(QString("created"));
Someta7->setContent(QString("1 March 2001"));
Sohead1->addMeta(*Someta7);

Someta* Someta8 = new Someta();
Someta8->setName(QString("translated"));
Someta8->setContent(QString("19 October 2001"));
Sohead1->addMeta(*Someta8);

Someta* Someta9 = new Someta();
Someta9->setName(QString("modified"));
Someta9->setContent(QString("Tue, 09 Sep 2025 19:37:50 GMT"));
Sohead1->addMeta(*Someta9);

Someta* Someta10 = new Someta();
Someta10->setName(QString("error"));
Someta10->setContent(QString("Legacy model, not valid as X3D4 HAnim version 2.0 since HAnim version 1.0 has significant differences and is no longer directly supported"));
Sohead1->addMeta(*Someta10);

Someta* Someta11 = new Someta();
Someta11->setName(QString("reference"));
Someta11->setContent(QString("http://HAnim.org"));
Sohead1->addMeta(*Someta11);

Someta* Someta12 = new Someta();
Someta12->setName(QString("reference"));
Someta12->setContent(QString("originals/boxman.wrl"));
Sohead1->addMeta(*Someta12);

Someta* Someta13 = new Someta();
Someta13->setName(QString("reference"));
Someta13->setContent(QString("BoxMan3.js"));
Sohead1->addMeta(*Someta13);

Someta* Someta14 = new Someta();
Someta14->setName(QString("reference"));
Someta14->setContent(QString("BoxManAnimationPanel.x3d"));
Sohead1->addMeta(*Someta14);

Someta* Someta15 = new Someta();
Someta15->setName(QString("reference"));
Someta15->setContent(QString("http://HAnim.org/Models/HAnim2001/boxman/boxman.wrl"));
Sohead1->addMeta(*Someta15);

Someta* Someta16 = new Someta();
Someta16->setName(QString("reference"));
Someta16->setContent(QString("http://www.vapourtech.com/team/james/boxman.wrl"));
Sohead1->addMeta(*Someta16);

Someta* Someta17 = new Someta();
Someta17->setName(QString("reference"));
Someta17->setContent(QString("http://HAnim.org/Specifications/HAnim2001"));
Sohead1->addMeta(*Someta17);

Someta* Someta18 = new Someta();
Someta18->setName(QString("reference"));
Someta18->setContent(QString("http://HAnim.org/Models"));
Sohead1->addMeta(*Someta18);

Someta* Someta19 = new Someta();
Someta19->setName(QString("reference"));
Someta19->setContent(QString("http://HAnim.org/Nodes"));
Sohead1->addMeta(*Someta19);

Someta* Someta20 = new Someta();
Someta20->setName(QString("reference"));
Someta20->setContent(QString("https://www.web3d.org/x3d/content/X3dToVrml97.xslt"));
Sohead1->addMeta(*Someta20);

Someta* Someta21 = new Someta();
Someta21->setName(QString("reference"));
Someta21->setContent(QString("http://www.vapourtech.com"));
Sohead1->addMeta(*Someta21);

Someta* Someta22 = new Someta();
Someta22->setName(QString("warning"));
Someta22->setContent(QString("Skin mesh is split across multiple shapes within a Group, should that be allowed?"));
Sohead1->addMeta(*Someta22);

Someta* Someta23 = new Someta();
Someta23->setName(QString("TODO"));
Someta23->setContent(QString("What does the original animation script accomplish? It is not hooked up, script source contains errors..."));
Sohead1->addMeta(*Someta23);

Someta* Someta24 = new Someta();
Someta24->setName(QString("TODO"));
Someta24->setContent(QString("InstantReality Forum Issue: InstantReality is ignoring the Viewpoint nodes in the topmost HAnimSite. http://forum.instantreality.org"));
Sohead1->addMeta(*Someta24);

Someta* Someta25 = new Someta();
Someta25->setName(QString("Image"));
Someta25->setContent(QString("BoxManViewInclined.png"));
Sohead1->addMeta(*Someta25);

Someta* Someta26 = new Someta();
Someta26->setName(QString("Image"));
Someta26->setContent(QString("BoxManViewFront.png"));
Sohead1->addMeta(*Someta26);

Someta* Someta27 = new Someta();
Someta27->setName(QString("Image"));
Someta27->setContent(QString("BoxManViewRight.png"));
Sohead1->addMeta(*Someta27);

Someta* Someta28 = new Someta();
Someta28->setName(QString("Image"));
Someta28->setContent(QString("BoxManViewLeft.png"));
Sohead1->addMeta(*Someta28);

Someta* Someta29 = new Someta();
Someta29->setName(QString("Image"));
Someta29->setContent(QString("BoxManViewTop.png"));
Sohead1->addMeta(*Someta29);

Someta* Someta30 = new Someta();
Someta30->setName(QString("rights"));
Someta30->setContent(QString("(C) 2000 James Smith - james@vapourtech.com"));
Sohead1->addMeta(*Someta30);

Someta* Someta31 = new Someta();
Someta31->setName(QString("subject"));
Someta31->setContent(QString("BoxMan HAnim 2.0"));
Sohead1->addMeta(*Someta31);

Someta* Someta32 = new Someta();
Someta32->setName(QString("identifier"));
Someta32->setContent(QString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/BoxMan3.x3d"));
Sohead1->addMeta(*Someta32);

SoSceneManager0->setHead(*Sohead1);

SoNode* SoNode33 = new SoNode();
SoExternProtoDeclare* SoExternProtoDeclare34 = new SoExternProtoDeclare();
SoExternProtoDeclare34->setName(QString("LOA1_WalkAnimation"));
SoExternProtoDeclare34->setUrl(new QString[]{QString("../Prototypes/LOA1_WalkAnimation.x3d#LOA1_WalkAnimation"), QString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/LOA1_WalkAnimation.x3d#LOA1_WalkAnimation"), QString("../Prototypes/LOA1_WalkAnimation.wrl#LOA1_WalkAnimation"), QString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/LOA1_WalkAnimation.wrl#LOA1_WalkAnimation")}, 4);
Sofield* Sofield35 = new Sofield();
Sofield35->setAccessType(QString("inputOutput"));
Sofield35->setType(QString("SFTime"));
Sofield35->setName(QString("cycleInterval"));
SoExternProtoDeclare34->addChild(*Sofield35);

Sofield* Sofield36 = new Sofield();
Sofield36->setAccessType(QString("inputOutput"));
Sofield36->setType(QString("SFBool"));
Sofield36->setName(QString("enabled"));
SoExternProtoDeclare34->addChild(*Sofield36);

Sofield* Sofield37 = new Sofield();
Sofield37->setAccessType(QString("inputOutput"));
Sofield37->setType(QString("SFBool"));
Sofield37->setName(QString("loop"));
SoExternProtoDeclare34->addChild(*Sofield37);

Sofield* Sofield38 = new Sofield();
Sofield38->setAccessType(QString("inputOutput"));
Sofield38->setType(QString("SFTime"));
Sofield38->setName(QString("startTime"));
SoExternProtoDeclare34->addChild(*Sofield38);

Sofield* Sofield39 = new Sofield();
Sofield39->setAccessType(QString("inputOutput"));
Sofield39->setType(QString("SFTime"));
Sofield39->setName(QString("stopTime"));
SoExternProtoDeclare34->addChild(*Sofield39);

Sofield* Sofield40 = new Sofield();
Sofield40->setAccessType(QString("outputOnly"));
Sofield40->setType(QString("SFFloat"));
Sofield40->setName(QString("fraction_changed"));
SoExternProtoDeclare34->addChild(*Sofield40);

Sofield* Sofield41 = new Sofield();
Sofield41->setAccessType(QString("outputOnly"));
Sofield41->setType(QString("SFVec3f"));
Sofield41->setName(QString("HumanoidRoot_translation_changed"));
SoExternProtoDeclare34->addChild(*Sofield41);

Sofield* Sofield42 = new Sofield();
Sofield42->setAccessType(QString("outputOnly"));
Sofield42->setType(QString("SFRotation"));
Sofield42->setName(QString("HumanoidRoot_rotation_changed"));
SoExternProtoDeclare34->addChild(*Sofield42);

Sofield* Sofield43 = new Sofield();
Sofield43->setAccessType(QString("outputOnly"));
Sofield43->setType(QString("SFRotation"));
Sofield43->setName(QString("l_hip_rotation_changed"));
SoExternProtoDeclare34->addChild(*Sofield43);

Sofield* Sofield44 = new Sofield();
Sofield44->setAccessType(QString("outputOnly"));
Sofield44->setType(QString("SFRotation"));
Sofield44->setName(QString("l_knee_rotation_changed"));
SoExternProtoDeclare34->addChild(*Sofield44);

Sofield* Sofield45 = new Sofield();
Sofield45->setAccessType(QString("outputOnly"));
Sofield45->setType(QString("SFRotation"));
Sofield45->setName(QString("l_ankle_rotation_changed"));
SoExternProtoDeclare34->addChild(*Sofield45);

Sofield* Sofield46 = new Sofield();
Sofield46->setAccessType(QString("outputOnly"));
Sofield46->setType(QString("SFRotation"));
Sofield46->setName(QString("l_midtarsal_rotation_changed"));
SoExternProtoDeclare34->addChild(*Sofield46);

Sofield* Sofield47 = new Sofield();
Sofield47->setAccessType(QString("outputOnly"));
Sofield47->setType(QString("SFRotation"));
Sofield47->setName(QString("r_hip_rotation_changed"));
SoExternProtoDeclare34->addChild(*Sofield47);

Sofield* Sofield48 = new Sofield();
Sofield48->setAccessType(QString("outputOnly"));
Sofield48->setType(QString("SFRotation"));
Sofield48->setName(QString("r_knee_rotation_changed"));
SoExternProtoDeclare34->addChild(*Sofield48);

Sofield* Sofield49 = new Sofield();
Sofield49->setAccessType(QString("outputOnly"));
Sofield49->setType(QString("SFRotation"));
Sofield49->setName(QString("r_ankle_rotation_changed"));
SoExternProtoDeclare34->addChild(*Sofield49);

Sofield* Sofield50 = new Sofield();
Sofield50->setAccessType(QString("outputOnly"));
Sofield50->setType(QString("SFRotation"));
Sofield50->setName(QString("r_midtarsal_rotation_changed"));
SoExternProtoDeclare34->addChild(*Sofield50);

Sofield* Sofield51 = new Sofield();
Sofield51->setAccessType(QString("outputOnly"));
Sofield51->setType(QString("SFRotation"));
Sofield51->setName(QString("vl5_rotation_changed"));
SoExternProtoDeclare34->addChild(*Sofield51);

Sofield* Sofield52 = new Sofield();
Sofield52->setAccessType(QString("outputOnly"));
Sofield52->setType(QString("SFRotation"));
Sofield52->setName(QString("skullbase_rotation_changed"));
SoExternProtoDeclare34->addChild(*Sofield52);

Sofield* Sofield53 = new Sofield();
Sofield53->setAccessType(QString("outputOnly"));
Sofield53->setType(QString("SFRotation"));
Sofield53->setName(QString("l_shoulder_rotation_changed"));
SoExternProtoDeclare34->addChild(*Sofield53);

Sofield* Sofield54 = new Sofield();
Sofield54->setAccessType(QString("outputOnly"));
Sofield54->setType(QString("SFRotation"));
Sofield54->setName(QString("l_elbow_rotation_changed"));
SoExternProtoDeclare34->addChild(*Sofield54);

Sofield* Sofield55 = new Sofield();
Sofield55->setAccessType(QString("outputOnly"));
Sofield55->setType(QString("SFRotation"));
Sofield55->setName(QString("l_wrist_rotation_changed"));
SoExternProtoDeclare34->addChild(*Sofield55);

Sofield* Sofield56 = new Sofield();
Sofield56->setAccessType(QString("outputOnly"));
Sofield56->setType(QString("SFRotation"));
Sofield56->setName(QString("r_shoulder_rotation_changed"));
SoExternProtoDeclare34->addChild(*Sofield56);

Sofield* Sofield57 = new Sofield();
Sofield57->setAccessType(QString("outputOnly"));
Sofield57->setType(QString("SFRotation"));
Sofield57->setName(QString("r_elbow_rotation_changed"));
SoExternProtoDeclare34->addChild(*Sofield57);

Sofield* Sofield58 = new Sofield();
Sofield58->setAccessType(QString("outputOnly"));
Sofield58->setType(QString("SFRotation"));
Sofield58->setName(QString("r_wrist_rotation_changed"));
SoExternProtoDeclare34->addChild(*Sofield58);

Sofield* Sofield59 = new Sofield();
Sofield59->setAccessType(QString("outputOnly"));
Sofield59->setType(QString("SFBool"));
Sofield59->setName(QString("isActive"));
SoExternProtoDeclare34->addChild(*Sofield59);

Sofield* Sofield60 = new Sofield();
Sofield60->setAccessType(QString("outputOnly"));
Sofield60->setType(QString("SFRotation"));
Sofield60->setName(QString("lower_body_rotation_changed"));
SoExternProtoDeclare34->addChild(*Sofield60);

SoNode33->addChild(*SoExternProtoDeclare34);

SoWorldInfo* SoWorldInfo61 = new SoWorldInfo();
SoWorldInfo61->setTitle(QString("BoxMan3 - A Seamless VRML Human"));
SoWorldInfo61->setInfo(new QString[]{QString("(C) 2000 James Smith - james@vapourtech.com"), QString("http://www.vapourtech.com/team/james/boxman.wrl"), QString("Blaxxun compatibility by Tu Lam - TuL@seamless-solutions.com")}, 3);
SoNode33->addChild(*SoWorldInfo61);

SoBackground* SoBackground62 = new SoBackground();
SoBackground62->setSkyColor(new float[]{0.75,0.75,0.75}, 3);
SoBackground62->setGroundColor(new float[]{0.6,0.6,0.6}, 3);
SoNode33->addChild(*SoBackground62);

SoHAnimHumanoid* SoHAnimHumanoid63 = new SoHAnimHumanoid();
SoHAnimHumanoid63->setDEF(QString("boxman_Humanoid"));
SoHAnimHumanoid63->X3DNode::setName(QString("Humanoid"));
SoHAnimHumanoid63->setInfo(new QString[]{QString("authorName=James Smith"), QString("authorEmail=james@vapourtech.com"), QString("copyright=(C) 2000 James Smith - james@vapourtech.com"), QString("humanoidVersion=1.0")}, 4);
SoHAnimHumanoid63->setVersion(QString("1.0"));
SoHAnimJoint* SoHAnimJoint64 = new SoHAnimJoint();
SoHAnimJoint64->setDEF(QString("boxman_humanoid_root"));
SoHAnimJoint64->X3DNode::setName(QString("humanoid_root"));
SoHAnimJoint64->setCenter(new float[]{0.0,0.9723,-0.0728});
SoHAnimJoint64->setSkinCoordIndex(new int32_t[]{0,1,2,3,4,5,6,7,8,9,10,11}, 12);
SoHAnimJoint64->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 12);
SoHAnimSegment* SoHAnimSegment65 = new SoHAnimSegment();
SoHAnimSegment65->setDEF(QString("boxman_sacrum"));
SoHAnimSegment65->X3DNode::setName(QString("sacrum"));
SoTransform* SoTransform66 = new SoTransform();
SoTransform66->setTranslation(new float[]{0.0,0.9723,-0.0728});
SoShape* SoShape67 = new SoShape();
SoShape67->setDEF(QString("SphereYellow"));
SoVRMLAppearance* SoVRMLAppearance68 = new SoVRMLAppearance();
SoMaterial* SoMaterial69 = new SoMaterial();
SoMaterial69->setDiffuseColor(new float[]{1.0,1.0,0.0});
SoVRMLAppearance68->addChild(*SoMaterial69);

SoShape67->addChild(*SoVRMLAppearance68);

SoSphere* SoSphere70 = new SoSphere();
SoSphere70->setRadius(0.02);
SoShape67->setGeometry(*SoSphere70);

SoTransform66->addChild(*SoShape67);

SoHAnimSegment65->addChild(*SoTransform66);

SoHAnimJoint64->addChildren(*SoHAnimSegment65);

SoHAnimJoint* SoHAnimJoint71 = new SoHAnimJoint();
SoHAnimJoint71->setDEF(QString("boxman_l_hip"));
SoHAnimJoint71->X3DNode::setName(QString("l_hip"));
SoHAnimJoint71->setCenter(new float[]{0.0956,0.9364,0.0});
SoHAnimJoint71->setSkinCoordIndex(new int32_t[]{12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43}, 32);
SoHAnimJoint71->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5}, 32);
SoHAnimSegment* SoHAnimSegment72 = new SoHAnimSegment();
SoHAnimSegment72->setDEF(QString("boxman_l_thigh"));
SoHAnimSegment72->X3DNode::setName(QString("l_thigh"));
SoTransform* SoTransform73 = new SoTransform();
SoTransform73->setTranslation(new float[]{0.0956,0.9364,0.0});
SoShape* SoShape74 = new SoShape();
SoShape74->setUSE(QString("SphereYellow"));
SoTransform73->addChild(*SoShape74);

SoHAnimSegment72->addChild(*SoTransform73);

SoHAnimJoint71->addChildren(*SoHAnimSegment72);

SoHAnimJoint* SoHAnimJoint75 = new SoHAnimJoint();
SoHAnimJoint75->setDEF(QString("boxman_l_knee"));
SoHAnimJoint75->X3DNode::setName(QString("l_knee"));
SoHAnimJoint75->setCenter(new float[]{0.0956,0.5095,-0.0036});
SoHAnimJoint75->setSkinCoordIndex(new int32_t[]{36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63}, 28);
SoHAnimJoint75->setSkinCoordWeight(new float[]{0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 28);
SoHAnimSegment* SoHAnimSegment76 = new SoHAnimSegment();
SoHAnimSegment76->setDEF(QString("boxman_l_calf"));
SoHAnimSegment76->X3DNode::setName(QString("l_calf"));
SoTransform* SoTransform77 = new SoTransform();
SoTransform77->setTranslation(new float[]{0.0956,0.5095,-0.0036});
SoShape* SoShape78 = new SoShape();
SoShape78->setUSE(QString("SphereYellow"));
SoTransform77->addChild(*SoShape78);

SoHAnimSegment76->addChild(*SoTransform77);

SoHAnimJoint75->addChildren(*SoHAnimSegment76);

SoHAnimJoint* SoHAnimJoint79 = new SoHAnimJoint();
SoHAnimJoint79->setDEF(QString("boxman_l_ankle"));
SoHAnimJoint79->X3DNode::setName(QString("l_ankle"));
SoHAnimJoint79->setCenter(new float[]{0.0946,0.0762,-0.0261});
SoHAnimJoint79->setSkinCoordIndex(new int32_t[]{64,65,66,67,68,69,70,71}, 8);
SoHAnimJoint79->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 8);
SoHAnimSegment* SoHAnimSegment80 = new SoHAnimSegment();
SoHAnimSegment80->setDEF(QString("boxman_l_hindfoot"));
SoHAnimSegment80->X3DNode::setName(QString("l_hindfoot"));
SoTransform* SoTransform81 = new SoTransform();
SoTransform81->setTranslation(new float[]{0.0946,0.0762,-0.0261});
SoShape* SoShape82 = new SoShape();
SoShape82->setUSE(QString("SphereYellow"));
SoTransform81->addChild(*SoShape82);

SoHAnimSegment80->addChild(*SoTransform81);

SoHAnimJoint79->addChildren(*SoHAnimSegment80);

SoHAnimJoint* SoHAnimJoint83 = new SoHAnimJoint();
SoHAnimJoint83->setDEF(QString("boxman_l_midtarsal"));
SoHAnimJoint83->X3DNode::setName(QString("l_midtarsal"));
SoHAnimJoint83->setCenter(new float[]{0.1079,0.0317,0.067});
SoHAnimJoint83->setSkinCoordIndex(new int32_t[]{72,73,74,75,76,77,78,79}, 8);
SoHAnimJoint83->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 8);
SoHAnimSegment* SoHAnimSegment84 = new SoHAnimSegment();
SoHAnimSegment84->setDEF(QString("boxman_l_middistal"));
SoHAnimSegment84->X3DNode::setName(QString("l_middistal"));
SoTransform* SoTransform85 = new SoTransform();
SoTransform85->setTranslation(new float[]{0.1079,0.0317,0.067});
SoShape* SoShape86 = new SoShape();
SoShape86->setUSE(QString("SphereYellow"));
SoTransform85->addChild(*SoShape86);

SoHAnimSegment84->addChild(*SoTransform85);

SoHAnimSite* SoHAnimSite87 = new SoHAnimSite();
SoHAnimSite87->setDEF(QString("boxman_l_middistal_tip"));
SoHAnimSite87->X3DNode::setName(QString("l_middistal_tip"));
SoHAnimSite87->setTranslation(new float[]{0.095,0.0005,0.1924});
SoShape* SoShape88 = new SoShape();
SoShape88->setDEF(QString("SphereRed"));
SoVRMLAppearance* SoVRMLAppearance89 = new SoVRMLAppearance();
SoMaterial* SoMaterial90 = new SoMaterial();
SoMaterial90->setDiffuseColor(new float[]{1.0,0.0,0.0});
SoVRMLAppearance89->addChild(*SoMaterial90);

SoShape88->addChild(*SoVRMLAppearance89);

SoSphere* SoSphere91 = new SoSphere();
SoSphere91->setRadius(0.02);
SoShape88->setGeometry(*SoSphere91);

SoHAnimSite87->addChild(*SoShape88);

SoHAnimSegment84->addChild(*SoHAnimSite87);

SoHAnimJoint83->addChildren(*SoHAnimSegment84);

SoHAnimJoint79->addChildren(*SoHAnimJoint83);

SoHAnimJoint75->addChildren(*SoHAnimJoint79);

SoHAnimJoint71->addChildren(*SoHAnimJoint75);

SoHAnimJoint64->addChildren(*SoHAnimJoint71);

SoHAnimJoint* SoHAnimJoint92 = new SoHAnimJoint();
SoHAnimJoint92->setDEF(QString("boxman_r_hip"));
SoHAnimJoint92->X3DNode::setName(QString("r_hip"));
SoHAnimJoint92->setCenter(new float[]{-0.0956,0.9364,0.0});
SoHAnimJoint92->setSkinCoordIndex(new int32_t[]{80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111}, 32);
SoHAnimJoint92->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5}, 32);
SoHAnimSegment* SoHAnimSegment93 = new SoHAnimSegment();
SoHAnimSegment93->setDEF(QString("boxman_r_thigh"));
SoHAnimSegment93->X3DNode::setName(QString("r_thigh"));
SoTransform* SoTransform94 = new SoTransform();
SoTransform94->setTranslation(new float[]{-0.0956,0.9364,0.0});
SoShape* SoShape95 = new SoShape();
SoShape95->setUSE(QString("SphereYellow"));
SoTransform94->addChild(*SoShape95);

SoHAnimSegment93->addChild(*SoTransform94);

SoHAnimJoint92->addChildren(*SoHAnimSegment93);

SoHAnimJoint* SoHAnimJoint96 = new SoHAnimJoint();
SoHAnimJoint96->setDEF(QString("boxman_r_knee"));
SoHAnimJoint96->X3DNode::setName(QString("r_knee"));
SoHAnimJoint96->setCenter(new float[]{-0.0956,0.5095,-0.0036});
SoHAnimJoint96->setSkinCoordIndex(new int32_t[]{104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,128,129,130,131}, 28);
SoHAnimJoint96->setSkinCoordWeight(new float[]{0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 28);
SoHAnimSegment* SoHAnimSegment97 = new SoHAnimSegment();
SoHAnimSegment97->setDEF(QString("boxman_r_calf"));
SoHAnimSegment97->X3DNode::setName(QString("r_calf"));
SoTransform* SoTransform98 = new SoTransform();
SoTransform98->setTranslation(new float[]{-0.0956,0.5095,-0.0036});
SoShape* SoShape99 = new SoShape();
SoShape99->setUSE(QString("SphereYellow"));
SoTransform98->addChild(*SoShape99);

SoHAnimSegment97->addChild(*SoTransform98);

SoHAnimJoint96->addChildren(*SoHAnimSegment97);

SoHAnimJoint* SoHAnimJoint100 = new SoHAnimJoint();
SoHAnimJoint100->setDEF(QString("boxman_r_ankle"));
SoHAnimJoint100->X3DNode::setName(QString("r_ankle"));
SoHAnimJoint100->setCenter(new float[]{-0.0946,0.0762,-0.0261});
SoHAnimJoint100->setSkinCoordIndex(new int32_t[]{132,133,134,135,136,137,138,139}, 8);
SoHAnimJoint100->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 8);
SoHAnimSegment* SoHAnimSegment101 = new SoHAnimSegment();
SoHAnimSegment101->setDEF(QString("boxman_r_hindfoot"));
SoHAnimSegment101->X3DNode::setName(QString("r_hindfoot"));
SoTransform* SoTransform102 = new SoTransform();
SoTransform102->setTranslation(new float[]{-0.0946,0.0762,-0.0261});
SoShape* SoShape103 = new SoShape();
SoShape103->setUSE(QString("SphereYellow"));
SoTransform102->addChild(*SoShape103);

SoHAnimSegment101->addChild(*SoTransform102);

SoHAnimJoint100->addChildren(*SoHAnimSegment101);

SoHAnimJoint* SoHAnimJoint104 = new SoHAnimJoint();
SoHAnimJoint104->setDEF(QString("boxman_r_midtarsal"));
SoHAnimJoint104->X3DNode::setName(QString("r_midtarsal"));
SoHAnimJoint104->setCenter(new float[]{-0.1079,0.0317,0.067});
SoHAnimJoint104->setSkinCoordIndex(new int32_t[]{140,141,142,143,144,145,146,147}, 8);
SoHAnimJoint104->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 8);
SoHAnimSegment* SoHAnimSegment105 = new SoHAnimSegment();
SoHAnimSegment105->setDEF(QString("boxman_r_middistal"));
SoHAnimSegment105->X3DNode::setName(QString("r_middistal"));
SoTransform* SoTransform106 = new SoTransform();
SoTransform106->setTranslation(new float[]{-0.1079,0.0317,0.067});
SoShape* SoShape107 = new SoShape();
SoShape107->setUSE(QString("SphereYellow"));
SoTransform106->addChild(*SoShape107);

SoHAnimSegment105->addChild(*SoTransform106);

SoHAnimSite* SoHAnimSite108 = new SoHAnimSite();
SoHAnimSite108->setDEF(QString("boxman_r_middistal_tip"));
SoHAnimSite108->X3DNode::setName(QString("r_middistal_tip"));
SoHAnimSite108->setTranslation(new float[]{-0.095,0.0005,0.1924});
SoShape* SoShape109 = new SoShape();
SoShape109->setUSE(QString("SphereRed"));
SoHAnimSite108->addChild(*SoShape109);

SoHAnimSegment105->addChild(*SoHAnimSite108);

SoHAnimJoint104->addChildren(*SoHAnimSegment105);

SoHAnimJoint100->addChildren(*SoHAnimJoint104);

SoHAnimJoint96->addChildren(*SoHAnimJoint100);

SoHAnimJoint92->addChildren(*SoHAnimJoint96);

SoHAnimJoint64->addChildren(*SoHAnimJoint92);

SoHAnimJoint* SoHAnimJoint110 = new SoHAnimJoint();
SoHAnimJoint110->setDEF(QString("boxman_vl5"));
SoHAnimJoint110->X3DNode::setName(QString("vl5"));
SoHAnimJoint110->setCenter(new float[]{0.0,1.0817,-0.0728});
SoHAnimJoint110->setSkinCoordIndex(new int32_t[]{148,149,150,151,152,153,154,155,156,157,158,159,160,161,162,163,164,165,166,167}, 20);
SoHAnimJoint110->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 20);
SoHAnimSegment* SoHAnimSegment111 = new SoHAnimSegment();
SoHAnimSegment111->setDEF(QString("boxman_l5"));
SoHAnimSegment111->X3DNode::setName(QString("l5"));
SoTransform* SoTransform112 = new SoTransform();
SoTransform112->setTranslation(new float[]{0.0,1.0817,-0.0728});
SoShape* SoShape113 = new SoShape();
SoShape113->setUSE(QString("SphereYellow"));
SoTransform112->addChild(*SoShape113);

SoHAnimSegment111->addChild(*SoTransform112);

SoHAnimJoint110->addChildren(*SoHAnimSegment111);

SoHAnimJoint* SoHAnimJoint114 = new SoHAnimJoint();
SoHAnimJoint114->setDEF(QString("boxman_skullbase"));
SoHAnimJoint114->X3DNode::setName(QString("skullbase"));
SoHAnimJoint114->setCenter(new float[]{0.0,1.644,0.036});
SoHAnimJoint114->setSkinCoordIndex(new int32_t[]{168,169,170,171,172,173,174,175}, 8);
SoHAnimJoint114->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 8);
SoHAnimSegment* SoHAnimSegment115 = new SoHAnimSegment();
SoHAnimSegment115->setDEF(QString("boxman_skull"));
SoHAnimSegment115->X3DNode::setName(QString("skull"));
SoTransform* SoTransform116 = new SoTransform();
SoTransform116->setTranslation(new float[]{0.0,1.644,0.036});
SoShape* SoShape117 = new SoShape();
SoShape117->setUSE(QString("SphereYellow"));
SoTransform116->addChild(*SoShape117);

SoHAnimSegment115->addChild(*SoTransform116);

SoHAnimSite* SoHAnimSite118 = new SoHAnimSite();
SoHAnimSite118->setDEF(QString("boxman_skull_tip"));
SoHAnimSite118->X3DNode::setName(QString("skull_tip"));
SoHAnimSite118->setTranslation(new float[]{-0.0029,1.7771,0.0274});
SoShape* SoShape119 = new SoShape();
SoShape119->setUSE(QString("SphereYellow"));
SoHAnimSite118->addChild(*SoShape119);

SoHAnimSegment115->addChild(*SoHAnimSite118);

SoHAnimJoint114->addChildren(*SoHAnimSegment115);

SoHAnimJoint110->addChildren(*SoHAnimJoint114);

SoHAnimJoint* SoHAnimJoint120 = new SoHAnimJoint();
SoHAnimJoint120->setDEF(QString("boxman_l_shoulder"));
SoHAnimJoint120->X3DNode::setName(QString("l_shoulder"));
SoHAnimJoint120->setCenter(new float[]{0.1968,1.4642,-0.0265});
SoHAnimJoint120->setSkinCoordIndex(new int32_t[]{176,177,178,179,180,181,182,183}, 8);
SoHAnimJoint120->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 8);
SoHAnimSegment* SoHAnimSegment121 = new SoHAnimSegment();
SoHAnimSegment121->setDEF(QString("boxman_l_upperarm"));
SoHAnimSegment121->X3DNode::setName(QString("l_upperarm"));
SoTransform* SoTransform122 = new SoTransform();
SoTransform122->setTranslation(new float[]{0.1968,1.4642,-0.0265});
SoShape* SoShape123 = new SoShape();
SoShape123->setUSE(QString("SphereYellow"));
SoTransform122->addChild(*SoShape123);

SoHAnimSegment121->addChild(*SoTransform122);

SoHAnimJoint120->addChildren(*SoHAnimSegment121);

SoHAnimJoint* SoHAnimJoint124 = new SoHAnimJoint();
SoHAnimJoint124->setDEF(QString("boxman_l_elbow"));
SoHAnimJoint124->X3DNode::setName(QString("l_elbow"));
SoHAnimJoint124->setCenter(new float[]{0.1982,1.1622,-0.0557});
SoHAnimJoint124->setSkinCoordIndex(new int32_t[]{184,185,186,187,188,189,190,191}, 8);
SoHAnimJoint124->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 8);
SoHAnimSegment* SoHAnimSegment125 = new SoHAnimSegment();
SoHAnimSegment125->setDEF(QString("boxman_l_forearm"));
SoHAnimSegment125->X3DNode::setName(QString("l_forearm"));
SoTransform* SoTransform126 = new SoTransform();
SoTransform126->setTranslation(new float[]{0.1982,1.1622,-0.0557});
SoShape* SoShape127 = new SoShape();
SoShape127->setUSE(QString("SphereYellow"));
SoTransform126->addChild(*SoShape127);

SoHAnimSegment125->addChild(*SoTransform126);

SoHAnimJoint124->addChildren(*SoHAnimSegment125);

SoHAnimJoint* SoHAnimJoint128 = new SoHAnimJoint();
SoHAnimJoint128->setDEF(QString("boxman_l_wrist"));
SoHAnimJoint128->X3DNode::setName(QString("l_wrist"));
SoHAnimJoint128->setCenter(new float[]{0.1972,0.8929,-0.069});
SoHAnimJoint128->setSkinCoordIndex(new int32_t[]{192,193,194,195,196,197,198,199}, 8);
SoHAnimJoint128->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 8);
SoHAnimSegment* SoHAnimSegment129 = new SoHAnimSegment();
SoHAnimSegment129->setDEF(QString("boxman_l_hand"));
SoHAnimSegment129->X3DNode::setName(QString("l_hand"));
SoTransform* SoTransform130 = new SoTransform();
SoTransform130->setTranslation(new float[]{0.1972,0.8929,-0.069});
SoShape* SoShape131 = new SoShape();
SoShape131->setUSE(QString("SphereYellow"));
SoTransform130->addChild(*SoShape131);

SoHAnimSegment129->addChild(*SoTransform130);

SoHAnimSite* SoHAnimSite132 = new SoHAnimSite();
SoHAnimSite132->setDEF(QString("boxman_l_hand_tip"));
SoHAnimSite132->X3DNode::setName(QString("l_hand_tip"));
SoHAnimSite132->setTranslation(new float[]{0.1912,0.6976,-0.071});
SoShape* SoShape133 = new SoShape();
SoShape133->setUSE(QString("SphereRed"));
SoHAnimSite132->addChild(*SoShape133);

SoHAnimSegment129->addChild(*SoHAnimSite132);

SoHAnimJoint128->addChildren(*SoHAnimSegment129);

SoHAnimJoint124->addChildren(*SoHAnimJoint128);

SoHAnimJoint120->addChildren(*SoHAnimJoint124);

SoHAnimJoint110->addChildren(*SoHAnimJoint120);

SoHAnimJoint* SoHAnimJoint134 = new SoHAnimJoint();
SoHAnimJoint134->setDEF(QString("boxman_r_shoulder"));
SoHAnimJoint134->X3DNode::setName(QString("r_shoulder"));
SoHAnimJoint134->setCenter(new float[]{-0.1968,1.4642,-0.0265});
SoHAnimJoint134->setSkinCoordIndex(new int32_t[]{200,201,202,203,204,205,206,207}, 8);
SoHAnimJoint134->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 8);
SoHAnimSegment* SoHAnimSegment135 = new SoHAnimSegment();
SoHAnimSegment135->setDEF(QString("boxman_r_upperarm"));
SoHAnimSegment135->X3DNode::setName(QString("r_upperarm"));
SoTransform* SoTransform136 = new SoTransform();
SoTransform136->setTranslation(new float[]{-0.1968,1.4642,-0.0265});
SoShape* SoShape137 = new SoShape();
SoShape137->setUSE(QString("SphereYellow"));
SoTransform136->addChild(*SoShape137);

SoHAnimSegment135->addChild(*SoTransform136);

SoHAnimJoint134->addChildren(*SoHAnimSegment135);

SoHAnimJoint* SoHAnimJoint138 = new SoHAnimJoint();
SoHAnimJoint138->setDEF(QString("boxman_r_elbow"));
SoHAnimJoint138->X3DNode::setName(QString("r_elbow"));
SoHAnimJoint138->setCenter(new float[]{-0.1982,1.1622,-0.0557});
SoHAnimJoint138->setSkinCoordIndex(new int32_t[]{208,209,210,211,212,213,214,215}, 8);
SoHAnimJoint138->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 8);
SoHAnimSegment* SoHAnimSegment139 = new SoHAnimSegment();
SoHAnimSegment139->setDEF(QString("boxman_r_forearm"));
SoHAnimSegment139->X3DNode::setName(QString("r_forearm"));
SoTransform* SoTransform140 = new SoTransform();
SoTransform140->setTranslation(new float[]{-0.1982,1.1622,-0.0557});
SoShape* SoShape141 = new SoShape();
SoShape141->setUSE(QString("SphereYellow"));
SoTransform140->addChild(*SoShape141);

SoHAnimSegment139->addChild(*SoTransform140);

SoHAnimJoint138->addChildren(*SoHAnimSegment139);

SoHAnimJoint* SoHAnimJoint142 = new SoHAnimJoint();
SoHAnimJoint142->setDEF(QString("boxman_r_wrist"));
SoHAnimJoint142->X3DNode::setName(QString("r_wrist"));
SoHAnimJoint142->setCenter(new float[]{-0.1972,0.8929,-0.069});
SoHAnimJoint142->setSkinCoordIndex(new int32_t[]{216,217,218,219,220,221,222,223}, 8);
SoHAnimJoint142->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 8);
SoHAnimSegment* SoHAnimSegment143 = new SoHAnimSegment();
SoHAnimSegment143->setDEF(QString("boxman_r_hand"));
SoHAnimSegment143->X3DNode::setName(QString("r_hand"));
SoTransform* SoTransform144 = new SoTransform();
SoTransform144->setTranslation(new float[]{-0.1972,0.8929,-0.069});
SoShape* SoShape145 = new SoShape();
SoShape145->setUSE(QString("SphereYellow"));
SoTransform144->addChild(*SoShape145);

SoHAnimSegment143->addChild(*SoTransform144);

SoHAnimSite* SoHAnimSite146 = new SoHAnimSite();
SoHAnimSite146->setDEF(QString("boxman_r_hand_tip"));
SoHAnimSite146->X3DNode::setName(QString("r_hand_tip"));
SoHAnimSite146->setTranslation(new float[]{-0.1912,0.6976,-0.071});
SoShape* SoShape147 = new SoShape();
SoShape147->setUSE(QString("SphereRed"));
SoHAnimSite146->addChild(*SoShape147);

SoHAnimSegment143->addChild(*SoHAnimSite146);

SoHAnimJoint142->addChildren(*SoHAnimSegment143);

SoHAnimJoint138->addChildren(*SoHAnimJoint142);

SoHAnimJoint134->addChildren(*SoHAnimJoint138);

SoHAnimJoint110->addChildren(*SoHAnimJoint134);

SoHAnimJoint64->addChildren(*SoHAnimJoint110);

SoHAnimHumanoid63->setSkeleton(*SoHAnimJoint64);

SoHAnimJoint* SoHAnimJoint148 = new SoHAnimJoint();
SoHAnimJoint148->setUSE(QString("boxman_humanoid_root"));
SoHAnimHumanoid63->setJoints(*SoHAnimJoint148);

SoHAnimJoint* SoHAnimJoint149 = new SoHAnimJoint();
SoHAnimJoint149->setUSE(QString("boxman_skullbase"));
SoHAnimHumanoid63->setJoints(*SoHAnimJoint149);

SoHAnimJoint* SoHAnimJoint150 = new SoHAnimJoint();
SoHAnimJoint150->setUSE(QString("boxman_vl5"));
SoHAnimHumanoid63->setJoints(*SoHAnimJoint150);

SoHAnimJoint* SoHAnimJoint151 = new SoHAnimJoint();
SoHAnimJoint151->setUSE(QString("boxman_l_ankle"));
SoHAnimHumanoid63->setJoints(*SoHAnimJoint151);

SoHAnimJoint* SoHAnimJoint152 = new SoHAnimJoint();
SoHAnimJoint152->setUSE(QString("boxman_r_ankle"));
SoHAnimHumanoid63->setJoints(*SoHAnimJoint152);

SoHAnimJoint* SoHAnimJoint153 = new SoHAnimJoint();
SoHAnimJoint153->setUSE(QString("boxman_l_elbow"));
SoHAnimHumanoid63->setJoints(*SoHAnimJoint153);

SoHAnimJoint* SoHAnimJoint154 = new SoHAnimJoint();
SoHAnimJoint154->setUSE(QString("boxman_r_elbow"));
SoHAnimHumanoid63->setJoints(*SoHAnimJoint154);

SoHAnimJoint* SoHAnimJoint155 = new SoHAnimJoint();
SoHAnimJoint155->setUSE(QString("boxman_l_hip"));
SoHAnimHumanoid63->setJoints(*SoHAnimJoint155);

SoHAnimJoint* SoHAnimJoint156 = new SoHAnimJoint();
SoHAnimJoint156->setUSE(QString("boxman_r_hip"));
SoHAnimHumanoid63->setJoints(*SoHAnimJoint156);

SoHAnimJoint* SoHAnimJoint157 = new SoHAnimJoint();
SoHAnimJoint157->setUSE(QString("boxman_l_knee"));
SoHAnimHumanoid63->setJoints(*SoHAnimJoint157);

SoHAnimJoint* SoHAnimJoint158 = new SoHAnimJoint();
SoHAnimJoint158->setUSE(QString("boxman_r_knee"));
SoHAnimHumanoid63->setJoints(*SoHAnimJoint158);

SoHAnimJoint* SoHAnimJoint159 = new SoHAnimJoint();
SoHAnimJoint159->setUSE(QString("boxman_l_midtarsal"));
SoHAnimHumanoid63->setJoints(*SoHAnimJoint159);

SoHAnimJoint* SoHAnimJoint160 = new SoHAnimJoint();
SoHAnimJoint160->setUSE(QString("boxman_r_midtarsal"));
SoHAnimHumanoid63->setJoints(*SoHAnimJoint160);

SoHAnimJoint* SoHAnimJoint161 = new SoHAnimJoint();
SoHAnimJoint161->setUSE(QString("boxman_l_shoulder"));
SoHAnimHumanoid63->setJoints(*SoHAnimJoint161);

SoHAnimJoint* SoHAnimJoint162 = new SoHAnimJoint();
SoHAnimJoint162->setUSE(QString("boxman_r_shoulder"));
SoHAnimHumanoid63->setJoints(*SoHAnimJoint162);

SoHAnimJoint* SoHAnimJoint163 = new SoHAnimJoint();
SoHAnimJoint163->setUSE(QString("boxman_l_wrist"));
SoHAnimHumanoid63->setJoints(*SoHAnimJoint163);

SoHAnimJoint* SoHAnimJoint164 = new SoHAnimJoint();
SoHAnimJoint164->setUSE(QString("boxman_r_wrist"));
SoHAnimHumanoid63->setJoints(*SoHAnimJoint164);

SoHAnimSegment* SoHAnimSegment165 = new SoHAnimSegment();
SoHAnimSegment165->setUSE(QString("boxman_l5"));
SoHAnimHumanoid63->setSegments(*SoHAnimSegment165);

SoHAnimSegment* SoHAnimSegment166 = new SoHAnimSegment();
SoHAnimSegment166->setUSE(QString("boxman_sacrum"));
SoHAnimHumanoid63->setSegments(*SoHAnimSegment166);

SoHAnimSegment* SoHAnimSegment167 = new SoHAnimSegment();
SoHAnimSegment167->setUSE(QString("boxman_skull"));
SoHAnimHumanoid63->setSegments(*SoHAnimSegment167);

SoHAnimSegment* SoHAnimSegment168 = new SoHAnimSegment();
SoHAnimSegment168->setUSE(QString("boxman_l_calf"));
SoHAnimHumanoid63->setSegments(*SoHAnimSegment168);

SoHAnimSegment* SoHAnimSegment169 = new SoHAnimSegment();
SoHAnimSegment169->setUSE(QString("boxman_r_calf"));
SoHAnimHumanoid63->setSegments(*SoHAnimSegment169);

SoHAnimSegment* SoHAnimSegment170 = new SoHAnimSegment();
SoHAnimSegment170->setUSE(QString("boxman_l_forearm"));
SoHAnimHumanoid63->setSegments(*SoHAnimSegment170);

SoHAnimSegment* SoHAnimSegment171 = new SoHAnimSegment();
SoHAnimSegment171->setUSE(QString("boxman_r_forearm"));
SoHAnimHumanoid63->setSegments(*SoHAnimSegment171);

SoHAnimSegment* SoHAnimSegment172 = new SoHAnimSegment();
SoHAnimSegment172->setUSE(QString("boxman_l_hand"));
SoHAnimHumanoid63->setSegments(*SoHAnimSegment172);

SoHAnimSegment* SoHAnimSegment173 = new SoHAnimSegment();
SoHAnimSegment173->setUSE(QString("boxman_r_hand"));
SoHAnimHumanoid63->setSegments(*SoHAnimSegment173);

SoHAnimSegment* SoHAnimSegment174 = new SoHAnimSegment();
SoHAnimSegment174->setUSE(QString("boxman_l_hindfoot"));
SoHAnimHumanoid63->setSegments(*SoHAnimSegment174);

SoHAnimSegment* SoHAnimSegment175 = new SoHAnimSegment();
SoHAnimSegment175->setUSE(QString("boxman_r_hindfoot"));
SoHAnimHumanoid63->setSegments(*SoHAnimSegment175);

SoHAnimSegment* SoHAnimSegment176 = new SoHAnimSegment();
SoHAnimSegment176->setUSE(QString("boxman_l_middistal"));
SoHAnimHumanoid63->setSegments(*SoHAnimSegment176);

SoHAnimSegment* SoHAnimSegment177 = new SoHAnimSegment();
SoHAnimSegment177->setUSE(QString("boxman_r_middistal"));
SoHAnimHumanoid63->setSegments(*SoHAnimSegment177);

SoHAnimSegment* SoHAnimSegment178 = new SoHAnimSegment();
SoHAnimSegment178->setUSE(QString("boxman_l_thigh"));
SoHAnimHumanoid63->setSegments(*SoHAnimSegment178);

SoHAnimSegment* SoHAnimSegment179 = new SoHAnimSegment();
SoHAnimSegment179->setUSE(QString("boxman_r_thigh"));
SoHAnimHumanoid63->setSegments(*SoHAnimSegment179);

SoHAnimSegment* SoHAnimSegment180 = new SoHAnimSegment();
SoHAnimSegment180->setUSE(QString("boxman_l_upperarm"));
SoHAnimHumanoid63->setSegments(*SoHAnimSegment180);

SoHAnimSegment* SoHAnimSegment181 = new SoHAnimSegment();
SoHAnimSegment181->setUSE(QString("boxman_r_upperarm"));
SoHAnimHumanoid63->setSegments(*SoHAnimSegment181);

SoHAnimSite* SoHAnimSite182 = new SoHAnimSite();
SoHAnimSite182->setUSE(QString("boxman_skull_tip"));
SoHAnimHumanoid63->setSites(*SoHAnimSite182);

SoHAnimSite* SoHAnimSite183 = new SoHAnimSite();
SoHAnimSite183->setUSE(QString("boxman_l_hand_tip"));
SoHAnimHumanoid63->setSites(*SoHAnimSite183);

SoHAnimSite* SoHAnimSite184 = new SoHAnimSite();
SoHAnimSite184->setUSE(QString("boxman_r_hand_tip"));
SoHAnimHumanoid63->setSites(*SoHAnimSite184);

SoHAnimSite* SoHAnimSite185 = new SoHAnimSite();
SoHAnimSite185->setUSE(QString("boxman_l_middistal_tip"));
SoHAnimHumanoid63->setSites(*SoHAnimSite185);

SoHAnimSite* SoHAnimSite186 = new SoHAnimSite();
SoHAnimSite186->setUSE(QString("boxman_r_middistal_tip"));
SoHAnimHumanoid63->setSites(*SoHAnimSite186);

SoHAnimSite* SoHAnimSite187 = new SoHAnimSite();
SoHAnimSite187->setDEF(QString("boxman_BoxMan_view"));
SoHAnimSite187->X3DNode::setName(QString("BoxMan_view"));
SoViewpoint* SoViewpoint188 = new SoViewpoint();
SoViewpoint188->setDEF(QString("Inclined_View"));
SoViewpoint188->setDescription(QString("Inclined View"));
SoViewpoint188->setPosition(new float[]{2.0,0.9,2.0});
SoViewpoint188->setOrientation(new float[]{0.0,1.0,0.0,0.78});
SoHAnimSite187->addChild(*SoViewpoint188);

SoViewpoint* SoViewpoint189 = new SoViewpoint();
SoViewpoint189->setDEF(QString("Front_View"));
SoViewpoint189->setDescription(QString("Front View"));
SoViewpoint189->setPosition(new float[]{0.0,1.0,3.0});
SoHAnimSite187->addChild(*SoViewpoint189);

SoViewpoint* SoViewpoint190 = new SoViewpoint();
SoViewpoint190->setDEF(QString("Right_View"));
SoViewpoint190->setDescription(QString("Right-side View"));
SoViewpoint190->setPosition(new float[]{-3.0,1.0,0.0});
SoViewpoint190->setOrientation(new float[]{0.0,1.0,0.0,-1.57});
SoHAnimSite187->addChild(*SoViewpoint190);

SoViewpoint* SoViewpoint191 = new SoViewpoint();
SoViewpoint191->setDEF(QString("Left_View"));
SoViewpoint191->setDescription(QString("Left-side View"));
SoViewpoint191->setPosition(new float[]{3.0,1.0,0.0});
SoViewpoint191->setOrientation(new float[]{0.0,1.0,0.0,1.57});
SoHAnimSite187->addChild(*SoViewpoint191);

SoViewpoint* SoViewpoint192 = new SoViewpoint();
SoViewpoint192->setDEF(QString("Top_View"));
SoViewpoint192->setDescription(QString("Top View"));
SoViewpoint192->setPosition(new float[]{0.0,3.0,0.0});
SoViewpoint192->setOrientation(new float[]{1.0,0.0,0.0,-1.57});
SoHAnimSite187->addChild(*SoViewpoint192);

SoHAnimHumanoid63->setViewpoints(*SoHAnimSite187);

SoCoordinate* SoCoordinate193 = new SoCoordinate();
SoCoordinate193->setDEF(QString("SKINCOORD"));
SoCoordinate193->setPoint(new float[]{-0.05,1.0,0.05,0.05,1.0,0.05,0.03,0.97,-0.1,-0.03,0.97,-0.1,0.03,0.94,-0.075,-0.03,0.94,-0.075,0.0,0.92,0.0,0.0,0.94,0.03,-0.12,1.06,0.05,0.12,1.06,0.05,0.12,1.06,-0.1,-0.12,1.06,-0.1,0.0456,0.9364,0.05,0.1456,0.9364,0.05,0.1456,0.9364,-0.05,0.0456,0.9364,-0.05,0.0456,0.9,0.05,0.1456,0.9,0.05,0.1456,0.9,-0.05,0.0456,0.9,-0.05,0.0456,0.8,0.05,0.1456,0.8,0.05,0.1456,0.8,-0.05,0.0456,0.8,-0.05,0.0456,0.7,0.05,0.1456,0.7,0.05,0.1456,0.7,-0.05,0.0456,0.7,-0.05,0.0456,0.6,0.05,0.1456,0.6,0.05,0.1456,0.6,-0.05,0.0456,0.6,-0.05,0.0456,0.55,0.05,0.1456,0.55,0.05,0.1456,0.55,-0.05,0.0456,0.55,-0.05,0.0456,0.52,0.05,0.1456,0.52,0.05,0.1456,0.52,-0.05,0.0456,0.52,-0.05,0.0456,0.5,0.05,0.1456,0.5,0.05,0.1456,0.5,-0.05,0.0456,0.5,-0.05,0.0454,0.43,0.045,0.1454,0.43,0.045,0.1454,0.43,-0.055,0.0454,0.43,-0.055,0.0452,0.36,0.04,0.1452,0.36,0.04,0.1452,0.36,-0.06,0.0452,0.36,-0.06,0.045,0.29,0.035,0.145,0.29,0.035,0.145,0.29,-0.065,0.045,0.29,-0.065,0.0448,0.21,0.03,0.1448,0.21,0.03,0.1448,0.21,-0.07,0.0448,0.21,-0.07,0.0446,0.1262,0.025,0.1446,0.1262,0.025,0.1446,0.1262,-0.075,0.0446,0.1262,-0.075,0.0446,0.0762,0.025,0.1446,0.0762,0.025,0.1446,0.0,-0.075,0.0446,0.0,-0.075,0.0446,0.0562,0.057,0.1446,0.0562,0.057,0.1446,0.0,0.057,0.0446,0.0,0.057,0.0446,0.0562,0.087,0.1446,0.0562,0.087,0.1446,0.0,0.087,0.0446,0.0,0.087,0.0446,0.0562,0.1924,0.1446,0.0562,0.1924,0.1446,0.0,0.1924,0.0446,0.0,0.1924,-0.0456,0.9364,0.05,-0.1456,0.9364,0.05,-0.1456,0.9364,-0.05,-0.0456,0.9364,-0.05,-0.0456,0.9,0.05,-0.1456,0.9,0.05,-0.1456,0.9,-0.05,-0.0456,0.9,-0.05,-0.0456,0.8,0.05,-0.1456,0.8,0.05,-0.1456,0.8,-0.05,-0.0456,0.8,-0.05,-0.0456,0.7,0.05,-0.1456,0.7,0.05,-0.1456,0.7,-0.05,-0.0456,0.7,-0.05,-0.0456,0.6,0.05,-0.1456,0.6,0.05,-0.1456,0.6,-0.05,-0.0456,0.6,-0.05,-0.0456,0.55,0.05,-0.1456,0.55,0.05,-0.1456,0.55,-0.05,-0.0456,0.55,-0.05,-0.0456,0.52,0.05,-0.1456,0.52,0.05,-0.1456,0.52,-0.05,-0.0456,0.52,-0.05,-0.0456,0.5,0.05,-0.1456,0.5,0.05,-0.1456,0.5,-0.05,-0.0456,0.5,-0.05,-0.0454,0.43,0.045,-0.1454,0.43,0.045,-0.1454,0.43,-0.055,-0.0454,0.43,-0.055,-0.0452,0.36,0.04,-0.1452,0.36,0.04,-0.1452,0.36,-0.06,-0.0452,0.36,-0.06,-0.045,0.29,0.035,-0.145,0.29,0.035,-0.145,0.29,-0.065,-0.045,0.29,-0.065,-0.0448,0.21,0.03,-0.1448,0.21,0.03,-0.1448,0.21,-0.07,-0.0448,0.21,-0.07,-0.0446,0.1262,0.025,-0.1446,0.1262,0.025,-0.1446,0.1262,-0.075,-0.0446,0.1262,-0.075,-0.0446,0.0762,0.025,-0.1446,0.0762,0.025,-0.1446,0.0,-0.075,-0.0446,0.0,-0.075,-0.0446,0.0562,0.057,-0.1446,0.0562,0.057,-0.1446,0.0,0.057,-0.0446,0.0,0.057,-0.0446,0.0562,0.087,-0.1446,0.0562,0.087,-0.1446,0.0,0.087,-0.0446,0.0,0.087,-0.0446,0.0562,0.1924,-0.1446,0.0562,0.1924,-0.1446,0.0,0.1924,-0.0446,0.0,0.1924,-0.12,1.1,0.05,0.12,1.1,0.05,0.12,1.1,-0.1,-0.12,1.1,-0.1,-0.14,1.42,0.045,0.14,1.42,0.045,0.14,1.42,-0.09,-0.14,1.42,-0.09,-0.24,1.52,0.035,0.24,1.52,0.035,0.24,1.52,-0.09,-0.24,1.52,-0.09,-0.05,1.56,0.03,0.05,1.56,0.03,0.05,1.56,-0.06,-0.05,1.56,-0.06,-0.05,1.6,0.06,0.05,1.6,0.06,0.05,1.62,-0.03,-0.05,1.62,-0.03,-0.07,1.777,0.13,0.07,1.777,0.13,0.07,1.777,-0.03,-0.07,1.777,-0.03,-0.07,1.6,0.13,0.07,1.6,0.13,0.07,1.66,-0.03,-0.07,1.66,-0.03,0.16,1.42,0.015,0.24,1.5,0.015,0.24,1.5,-0.075,0.16,1.42,-0.075,0.17,1.18,-0.025,0.23,1.18,-0.025,0.23,1.18,-0.085,0.17,1.18,-0.085,0.17,1.14,-0.025,0.23,1.14,-0.025,0.23,1.14,-0.085,0.17,1.14,-0.085,0.18,0.91,-0.05,0.22,0.91,-0.05,0.22,0.91,-0.09,0.18,0.91,-0.09,0.18,0.87,-0.02,0.22,0.87,-0.02,0.22,0.87,-0.1,0.18,0.87,-0.1,0.18,0.6976,-0.02,0.22,0.6976,-0.02,0.22,0.6976,-0.1,0.18,0.6976,-0.1,-0.16,1.42,0.015,-0.24,1.5,0.015,-0.24,1.5,-0.075,-0.16,1.42,-0.075,-0.17,1.18,-0.025,-0.23,1.18,-0.025,-0.23,1.18,-0.085,-0.17,1.18,-0.085,-0.17,1.14,-0.025,-0.23,1.14,-0.025,-0.23,1.14,-0.085,-0.17,1.14,-0.085,-0.18,0.91,-0.05,-0.22,0.91,-0.05,-0.22,0.91,-0.09,-0.18,0.91,-0.09,-0.18,0.87,-0.02,-0.22,0.87,-0.02,-0.22,0.87,-0.1,-0.18,0.87,-0.1,-0.18,0.6976,-0.02,-0.22,0.6976,-0.02,-0.22,0.6976,-0.1,-0.18,0.6976,-0.1}, 672);
SoHAnimHumanoid63->setSkinCoord(*SoCoordinate193);

SoGroup* SoGroup194 = new SoGroup();
SoShape* SoShape195 = new SoShape();
SoShape195->setDEF(QString("TrouserSkin"));
SoVRMLAppearance* SoVRMLAppearance196 = new SoVRMLAppearance();
SoMaterial* SoMaterial197 = new SoMaterial();
SoMaterial197->setDiffuseColor(new float[]{0.0,0.0,1.0});
SoMaterial197->setTransparency(0.5);
SoVRMLAppearance196->addChild(*SoMaterial197);

SoShape195->addChild(*SoVRMLAppearance196);

SoIndexedFaceSet* SoIndexedFaceSet198 = new SoIndexedFaceSet();
SoIndexedFaceSet198->setCoordIndex(new int32_t[]{0,7,1,-1,8,0,1,-1,1,9,8,-1,10,2,3,-1,3,11,10,-1,2,4,5,-1,5,3,2,-1,4,6,5,-1,7,12,1,-1,1,12,13,-1,13,9,1,-1,9,13,14,-1,14,10,9,-1,10,14,15,-1,15,2,10,-1,12,7,6,-1,6,15,12,-1,15,6,4,-1,4,2,15,-1,0,80,7,-1,81,80,0,-1,0,8,81,-1,82,81,8,-1,8,11,82,-1,83,82,11,-1,11,3,83,-1,6,7,80,-1,80,83,6,-1,5,6,83,-1,83,3,5,-1,12,16,17,-1,17,13,12,-1,13,17,18,-1,18,14,13,-1,14,18,19,-1,19,15,14,-1,15,19,16,-1,16,12,15,-1,16,20,21,-1,21,17,16,-1,17,21,22,-1,22,18,17,-1,18,22,23,-1,23,19,18,-1,19,23,20,-1,20,16,19,-1,20,24,25,-1,25,21,20,-1,21,25,26,-1,26,22,21,-1,22,26,27,-1,27,23,22,-1,23,27,24,-1,24,20,23,-1,24,28,29,-1,29,25,24,-1,25,29,30,-1,30,26,25,-1,26,30,31,-1,31,27,26,-1,27,31,28,-1,28,24,27,-1,28,32,33,-1,33,29,28,-1,29,33,34,-1,34,30,29,-1,30,34,35,-1,35,31,30,-1,31,35,32,-1,32,28,31,-1,32,36,37,-1,37,33,32,-1,33,37,38,-1,38,34,33,-1,34,38,39,-1,39,35,34,-1,35,39,36,-1,36,32,35,-1,36,40,41,-1,41,37,36,-1,37,41,42,-1,42,38,37,-1,38,42,43,-1,43,39,38,-1,39,43,40,-1,40,36,39,-1,40,44,45,-1,45,41,40,-1,41,45,46,-1,46,42,41,-1,42,46,47,-1,47,43,42,-1,43,47,44,-1,44,40,43,-1,44,48,49,-1,49,45,44,-1,45,49,50,-1,50,46,45,-1,46,50,51,-1,51,47,46,-1,47,51,48,-1,48,44,47,-1,48,52,53,-1,53,49,48,-1,49,53,54,-1,54,50,49,-1,50,54,55,-1,55,51,50,-1,51,55,52,-1,52,48,51,-1,52,56,57,-1,57,53,52,-1,53,57,58,-1,58,54,53,-1,54,58,59,-1,59,55,54,-1,55,59,56,-1,56,52,55,-1,56,60,61,-1,61,57,56,-1,57,61,62,-1,62,58,57,-1,58,62,63,-1,63,59,58,-1,59,63,60,-1,60,56,59,-1,81,85,84,-1,84,80,81,-1,82,86,85,-1,85,81,82,-1,83,87,86,-1,86,82,83,-1,80,84,87,-1,87,83,80,-1,85,89,88,-1,88,84,85,-1,86,90,89,-1,89,85,86,-1,87,91,90,-1,90,86,87,-1,84,88,91,-1,91,87,84,-1,89,93,92,-1,92,88,89,-1,90,94,93,-1,93,89,90,-1,91,95,94,-1,94,90,91,-1,88,92,95,-1,95,91,88,-1,93,97,96,-1,96,92,93,-1,94,98,97,-1,97,93,94,-1,95,99,98,-1,98,94,95,-1,92,96,99,-1,99,95,92,-1,97,101,100,-1,100,96,97,-1,98,102,101,-1,101,97,98,-1,99,103,102,-1,102,98,99,-1,96,100,103,-1,103,99,96,-1,101,105,104,-1,104,100,101,-1,102,106,105,-1,105,101,102,-1,103,107,106,-1,106,102,103,-1,100,104,107,-1,107,103,100,-1,105,109,108,-1,108,104,105,-1,106,110,109,-1,109,105,106,-1,107,111,110,-1,110,106,107,-1,104,108,111,-1,111,107,104,-1,109,113,112,-1,112,108,109,-1,110,114,113,-1,113,109,110,-1,111,115,114,-1,114,110,111,-1,108,112,115,-1,115,111,108,-1,113,117,116,-1,116,112,113,-1,114,118,117,-1,117,113,114,-1,115,119,118,-1,118,114,115,-1,112,116,119,-1,119,115,112,-1,117,121,120,-1,120,116,117,-1,118,122,121,-1,121,117,118,-1,119,123,122,-1,122,118,119,-1,116,120,123,-1,123,119,116,-1,121,125,124,-1,124,120,121,-1,122,126,125,-1,125,121,122,-1,123,127,126,-1,126,122,123,-1,120,124,127,-1,127,123,120,-1,125,129,128,-1,128,124,125,-1,126,130,129,-1,129,125,126,-1,127,131,130,-1,130,126,127,-1,124,128,131,-1,131,127,124,-1}, 888);
SoCoordinate* SoCoordinate199 = new SoCoordinate();
SoCoordinate199->setUSE(QString("SKINCOORD"));
SoIndexedFaceSet198->setCoord(*SoCoordinate199);

SoShape195->setGeometry(*SoIndexedFaceSet198);

SoGroup194->addChild(*SoShape195);

SoShape* SoShape200 = new SoShape();
SoShape200->setDEF(QString("ShoeSkin"));
SoVRMLAppearance* SoVRMLAppearance201 = new SoVRMLAppearance();
SoMaterial* SoMaterial202 = new SoMaterial();
SoMaterial202->setDiffuseColor(new float[]{0.0,0.0,0.0});
SoMaterial202->setTransparency(0.5);
SoVRMLAppearance201->addChild(*SoMaterial202);

SoShape200->addChild(*SoVRMLAppearance201);

SoIndexedFaceSet* SoIndexedFaceSet203 = new SoIndexedFaceSet();
SoIndexedFaceSet203->setCoordIndex(new int32_t[]{60,64,65,-1,65,61,60,-1,61,65,66,-1,66,62,61,-1,62,66,67,-1,67,63,62,-1,63,67,64,-1,64,60,63,-1,64,68,69,-1,69,65,64,-1,65,69,70,-1,70,66,65,-1,66,70,71,-1,71,67,66,-1,67,71,68,-1,68,64,67,-1,68,72,73,-1,73,69,68,-1,69,73,74,-1,74,70,69,-1,70,74,75,-1,75,71,70,-1,71,75,72,-1,72,68,71,-1,72,76,77,-1,77,73,72,-1,73,77,78,-1,78,74,73,-1,74,78,79,-1,79,75,74,-1,75,79,76,-1,76,72,75,-1,76,79,78,-1,78,77,76,-1,129,133,132,-1,132,128,129,-1,130,134,133,-1,133,129,130,-1,131,135,134,-1,134,130,131,-1,128,132,135,-1,135,131,128,-1,133,137,136,-1,136,132,133,-1,134,138,137,-1,137,133,134,-1,135,139,138,-1,138,134,135,-1,132,136,139,-1,139,135,132,-1,137,141,140,-1,140,136,137,-1,138,142,141,-1,141,137,138,-1,139,143,142,-1,142,138,139,-1,136,140,143,-1,143,139,136,-1,141,145,144,-1,144,140,141,-1,142,146,145,-1,145,141,142,-1,143,147,146,-1,146,142,143,-1,140,144,147,-1,147,143,140,-1,145,146,147,-1,147,144,145,-1}, 272);
SoCoordinate* SoCoordinate204 = new SoCoordinate();
SoCoordinate204->setUSE(QString("SKINCOORD"));
SoIndexedFaceSet203->setCoord(*SoCoordinate204);

SoShape200->setGeometry(*SoIndexedFaceSet203);

SoGroup194->addChild(*SoShape200);

SoShape* SoShape205 = new SoShape();
SoShape205->setDEF(QString("ShirtSkin"));
SoVRMLAppearance* SoVRMLAppearance206 = new SoVRMLAppearance();
SoMaterial* SoMaterial207 = new SoMaterial();
SoMaterial207->setDiffuseColor(new float[]{1.0,1.0,0.0});
SoMaterial207->setTransparency(0.5);
SoVRMLAppearance206->addChild(*SoMaterial207);

SoShape205->addChild(*SoVRMLAppearance206);

SoIndexedFaceSet* SoIndexedFaceSet208 = new SoIndexedFaceSet();
SoIndexedFaceSet208->setCoordIndex(new int32_t[]{148,8,9,-1,9,149,148,-1,149,9,10,-1,10,150,149,-1,150,10,11,-1,11,151,150,-1,151,11,8,-1,8,148,151,-1,152,148,149,-1,149,153,152,-1,153,149,150,-1,150,154,153,-1,154,150,151,-1,151,155,154,-1,155,151,148,-1,148,152,155,-1,156,152,153,-1,153,157,156,-1,158,154,155,-1,155,159,158,-1,160,156,157,-1,157,161,160,-1,161,157,158,-1,158,162,161,-1,162,158,159,-1,159,163,162,-1,163,159,156,-1,156,160,163,-1,164,160,161,-1,161,165,164,-1,165,161,162,-1,162,166,165,-1,166,162,163,-1,163,167,166,-1,167,163,160,-1,160,164,167,-1,153,176,177,-1,177,157,153,-1,157,177,178,-1,178,158,157,-1,158,178,179,-1,179,154,158,-1,154,179,176,-1,176,153,154,-1,176,180,181,-1,181,177,176,-1,177,181,182,-1,182,178,177,-1,178,182,183,-1,183,179,178,-1,179,183,180,-1,180,176,179,-1,180,184,185,-1,185,181,180,-1,181,185,186,-1,186,182,181,-1,182,186,187,-1,187,183,182,-1,183,187,184,-1,184,180,183,-1,184,188,189,-1,189,185,184,-1,185,189,190,-1,190,186,185,-1,186,190,191,-1,191,187,186,-1,187,191,188,-1,188,184,187,-1,152,156,201,-1,201,200,152,-1,156,159,202,-1,202,201,156,-1,159,155,203,-1,203,202,159,-1,155,152,200,-1,200,203,155,-1,201,205,204,-1,204,200,201,-1,202,206,205,-1,205,201,202,-1,203,207,206,-1,206,202,203,-1,200,204,207,-1,207,203,200,-1,205,209,208,-1,208,204,205,-1,206,210,209,-1,209,205,206,-1,207,211,210,-1,210,206,207,-1,204,208,211,-1,211,207,204,-1,209,213,212,-1,212,208,209,-1,210,214,213,-1,213,209,210,-1,211,215,214,-1,214,210,211,-1,208,212,215,-1,215,211,208,-1}, 400);
SoCoordinate* SoCoordinate209 = new SoCoordinate();
SoCoordinate209->setUSE(QString("SKINCOORD"));
SoIndexedFaceSet208->setCoord(*SoCoordinate209);

SoShape205->setGeometry(*SoIndexedFaceSet208);

SoGroup194->addChild(*SoShape205);

SoShape* SoShape210 = new SoShape();
SoShape210->setDEF(QString("HeadHandsFleshToneSkin"));
SoVRMLAppearance* SoVRMLAppearance211 = new SoVRMLAppearance();
SoMaterial* SoMaterial212 = new SoMaterial();
SoMaterial212->setDiffuseColor(new float[]{1.0,0.75,0.75});
SoMaterial212->setTransparency(0.5);
SoVRMLAppearance211->addChild(*SoMaterial212);

SoShape210->addChild(*SoVRMLAppearance211);

SoIndexedFaceSet* SoIndexedFaceSet213 = new SoIndexedFaceSet();
SoIndexedFaceSet213->setCoordIndex(new int32_t[]{172,164,165,-1,165,173,172,-1,173,165,166,-1,166,174,173,-1,174,166,167,-1,167,175,174,-1,175,167,164,-1,164,172,175,-1,168,172,173,-1,173,169,168,-1,169,173,174,-1,174,170,169,-1,170,174,175,-1,175,171,170,-1,171,175,172,-1,172,168,171,-1,171,168,169,-1,169,170,171,-1,188,192,193,-1,193,189,188,-1,189,193,194,-1,194,190,189,-1,190,194,195,-1,195,191,190,-1,191,195,192,-1,192,188,191,-1,192,196,197,-1,197,193,192,-1,193,197,198,-1,198,194,193,-1,194,198,199,-1,199,195,194,-1,195,199,196,-1,196,192,195,-1,196,199,198,-1,198,197,196,-1,213,217,216,-1,216,212,213,-1,214,218,217,-1,217,213,214,-1,215,219,218,-1,218,214,215,-1,212,216,219,-1,219,215,212,-1,217,221,220,-1,220,216,217,-1,218,222,221,-1,221,217,218,-1,219,223,222,-1,222,218,219,-1,216,220,223,-1,223,219,216,-1,221,222,223,-1,223,220,221,-1}, 216);
SoCoordinate* SoCoordinate214 = new SoCoordinate();
SoCoordinate214->setUSE(QString("SKINCOORD"));
SoIndexedFaceSet213->setCoord(*SoCoordinate214);

SoShape210->setGeometry(*SoIndexedFaceSet213);

SoGroup194->addChild(*SoShape210);

SoShape* SoShape215 = new SoShape();
SoShape215->setDEF(QString("SkinLines"));
SoVRMLAppearance* SoVRMLAppearance216 = new SoVRMLAppearance();
SoMaterial* SoMaterial217 = new SoMaterial();
SoMaterial217->setDiffuseColor(new float[]{0.0,0.0,0.0});
SoVRMLAppearance216->addChild(*SoMaterial217);

SoShape215->addChild(*SoVRMLAppearance216);

SoIndexedLineSet* SoIndexedLineSet218 = new SoIndexedLineSet();
SoIndexedLineSet218->setCoordIndex(new int32_t[]{0,7,1,-1,8,0,1,-1,1,9,8,-1,10,2,3,-1,3,11,10,-1,2,4,5,-1,5,3,2,-1,4,6,5,-1,7,12,1,-1,1,12,13,-1,13,9,1,-1,9,13,14,-1,14,10,9,-1,10,14,15,-1,15,2,10,-1,12,7,6,-1,6,15,12,-1,15,6,4,-1,4,2,15,-1,0,80,7,-1,81,80,0,-1,0,8,81,-1,82,81,8,-1,8,11,82,-1,83,82,11,-1,11,3,83,-1,6,7,80,-1,80,83,6,-1,5,6,83,-1,83,3,5,-1,12,16,17,-1,17,13,12,-1,13,17,18,-1,18,14,13,-1,14,18,19,-1,19,15,14,-1,15,19,16,-1,16,12,15,-1,16,20,21,-1,21,17,16,-1,17,21,22,-1,22,18,17,-1,18,22,23,-1,23,19,18,-1,19,23,20,-1,20,16,19,-1,20,24,25,-1,25,21,20,-1,21,25,26,-1,26,22,21,-1,22,26,27,-1,27,23,22,-1,23,27,24,-1,24,20,23,-1,24,28,29,-1,29,25,24,-1,25,29,30,-1,30,26,25,-1,26,30,31,-1,31,27,26,-1,27,31,28,-1,28,24,27,-1,28,32,33,-1,33,29,28,-1,29,33,34,-1,34,30,29,-1,30,34,35,-1,35,31,30,-1,31,35,32,-1,32,28,31,-1,32,36,37,-1,37,33,32,-1,33,37,38,-1,38,34,33,-1,34,38,39,-1,39,35,34,-1,35,39,36,-1,36,32,35,-1,36,40,41,-1,41,37,36,-1,37,41,42,-1,42,38,37,-1,38,42,43,-1,43,39,38,-1,39,43,40,-1,40,36,39,-1,40,44,45,-1,45,41,40,-1,41,45,46,-1,46,42,41,-1,42,46,47,-1,47,43,42,-1,43,47,44,-1,44,40,43,-1,44,48,49,-1,49,45,44,-1,45,49,50,-1,50,46,45,-1,46,50,51,-1,51,47,46,-1,47,51,48,-1,48,44,47,-1,48,52,53,-1,53,49,48,-1,49,53,54,-1,54,50,49,-1,50,54,55,-1,55,51,50,-1,51,55,52,-1,52,48,51,-1,52,56,57,-1,57,53,52,-1,53,57,58,-1,58,54,53,-1,54,58,59,-1,59,55,54,-1,55,59,56,-1,56,52,55,-1,56,60,61,-1,61,57,56,-1,57,61,62,-1,62,58,57,-1,58,62,63,-1,63,59,58,-1,59,63,60,-1,60,56,59,-1,81,85,84,-1,84,80,81,-1,82,86,85,-1,85,81,82,-1,83,87,86,-1,86,82,83,-1,80,84,87,-1,87,83,80,-1,85,89,88,-1,88,84,85,-1,86,90,89,-1,89,85,86,-1,87,91,90,-1,90,86,87,-1,84,88,91,-1,91,87,84,-1,89,93,92,-1,92,88,89,-1,90,94,93,-1,93,89,90,-1,91,95,94,-1,94,90,91,-1,88,92,95,-1,95,91,88,-1,93,97,96,-1,96,92,93,-1,94,98,97,-1,97,93,94,-1,95,99,98,-1,98,94,95,-1,92,96,99,-1,99,95,92,-1,97,101,100,-1,100,96,97,-1,98,102,101,-1,101,97,98,-1,99,103,102,-1,102,98,99,-1,96,100,103,-1,103,99,96,-1,101,105,104,-1,104,100,101,-1,102,106,105,-1,105,101,102,-1,103,107,106,-1,106,102,103,-1,100,104,107,-1,107,103,100,-1,105,109,108,-1,108,104,105,-1,106,110,109,-1,109,105,106,-1,107,111,110,-1,110,106,107,-1,104,108,111,-1,111,107,104,-1,109,113,112,-1,112,108,109,-1,110,114,113,-1,113,109,110,-1,111,115,114,-1,114,110,111,-1,108,112,115,-1,115,111,108,-1,113,117,116,-1,116,112,113,-1,114,118,117,-1,117,113,114,-1,115,119,118,-1,118,114,115,-1,112,116,119,-1,119,115,112,-1,117,121,120,-1,120,116,117,-1,118,122,121,-1,121,117,118,-1,119,123,122,-1,122,118,119,-1,116,120,123,-1,123,119,116,-1,121,125,124,-1,124,120,121,-1,122,126,125,-1,125,121,122,-1,123,127,126,-1,126,122,123,-1,120,124,127,-1,127,123,120,-1,125,129,128,-1,128,124,125,-1,126,130,129,-1,129,125,126,-1,127,131,130,-1,130,126,127,-1,124,128,131,-1,131,127,124,-1,60,64,65,-1,65,61,60,-1,61,65,66,-1,66,62,61,-1,62,66,67,-1,67,63,62,-1,63,67,64,-1,64,60,63,-1,64,68,69,-1,69,65,64,-1,65,69,70,-1,70,66,65,-1,66,70,71,-1,71,67,66,-1,67,71,68,-1,68,64,67,-1,68,72,73,-1,73,69,68,-1,69,73,74,-1,74,70,69,-1,70,74,75,-1,75,71,70,-1,71,75,72,-1,72,68,71,-1,72,76,77,-1,77,73,72,-1,73,77,78,-1,78,74,73,-1,74,78,79,-1,79,75,74,-1,75,79,76,-1,76,72,75,-1,76,79,78,-1,78,77,76,-1,129,133,132,-1,132,128,129,-1,130,134,133,-1,133,129,130,-1,131,135,134,-1,134,130,131,-1,128,132,135,-1,135,131,128,-1,133,137,136,-1,136,132,133,-1,134,138,137,-1,137,133,134,-1,135,139,138,-1,138,134,135,-1,132,136,139,-1,139,135,132,-1,137,141,140,-1,140,136,137,-1,138,142,141,-1,141,137,138,-1,139,143,142,-1,142,138,139,-1,136,140,143,-1,143,139,136,-1,141,145,144,-1,144,140,141,-1,142,146,145,-1,145,141,142,-1,143,147,146,-1,146,142,143,-1,140,144,147,-1,147,143,140,-1,145,146,147,-1,147,144,145,-1,148,8,9,-1,9,149,148,-1,149,9,10,-1,10,150,149,-1,150,10,11,-1,11,151,150,-1,151,11,8,-1,8,148,151,-1,152,148,149,-1,149,153,152,-1,153,149,150,-1,150,154,153,-1,154,150,151,-1,151,155,154,-1,155,151,148,-1,148,152,155,-1,156,152,153,-1,153,157,156,-1,158,154,155,-1,155,159,158,-1,160,156,157,-1,157,161,160,-1,161,157,158,-1,158,162,161,-1,162,158,159,-1,159,163,162,-1,163,159,156,-1,156,160,163,-1,164,160,161,-1,161,165,164,-1,165,161,162,-1,162,166,165,-1,166,162,163,-1,163,167,166,-1,167,163,160,-1,160,164,167,-1,153,176,177,-1,177,157,153,-1,157,177,178,-1,178,158,157,-1,158,178,179,-1,179,154,158,-1,154,179,176,-1,176,153,154,-1,176,180,181,-1,181,177,176,-1,177,181,182,-1,182,178,177,-1,178,182,183,-1,183,179,178,-1,179,183,180,-1,180,176,179,-1,180,184,185,-1,185,181,180,-1,181,185,186,-1,186,182,181,-1,182,186,187,-1,187,183,182,-1,183,187,184,-1,184,180,183,-1,184,188,189,-1,189,185,184,-1,185,189,190,-1,190,186,185,-1,186,190,191,-1,191,187,186,-1,187,191,188,-1,188,184,187,-1,152,156,201,-1,201,200,152,-1,156,159,202,-1,202,201,156,-1,159,155,203,-1,203,202,159,-1,155,152,200,-1,200,203,155,-1,201,205,204,-1,204,200,201,-1,202,206,205,-1,205,201,202,-1,203,207,206,-1,206,202,203,-1,200,204,207,-1,207,203,200,-1,205,209,208,-1,208,204,205,-1,206,210,209,-1,209,205,206,-1,207,211,210,-1,210,206,207,-1,204,208,211,-1,211,207,204,-1,209,213,212,-1,212,208,209,-1,210,214,213,-1,213,209,210,-1,211,215,214,-1,214,210,211,-1,208,212,215,-1,215,211,208,-1,172,164,165,-1,165,173,172,-1,173,165,166,-1,166,174,173,-1,174,166,167,-1,167,175,174,-1,175,167,164,-1,164,172,175,-1,168,172,173,-1,173,169,168,-1,169,173,174,-1,174,170,169,-1,170,174,175,-1,175,171,170,-1,171,175,172,-1,172,168,171,-1,171,168,169,-1,169,170,171,-1,188,192,193,-1,193,189,188,-1,189,193,194,-1,194,190,189,-1,190,194,195,-1,195,191,190,-1,191,195,192,-1,192,188,191,-1,192,196,197,-1,197,193,192,-1,193,197,198,-1,198,194,193,-1,194,198,199,-1,199,195,194,-1,195,199,196,-1,196,192,195,-1,196,199,198,-1,198,197,196,-1,213,217,216,-1,216,212,213,-1,214,218,217,-1,217,213,214,-1,215,219,218,-1,218,214,215,-1,212,216,219,-1,219,215,212,-1,217,221,220,-1,220,216,217,-1,218,222,221,-1,221,217,218,-1,219,223,222,-1,222,218,219,-1,216,220,223,-1,223,219,216,-1,221,222,223,-1,223,220,221,-1}, 1776);
SoCoordinate* SoCoordinate219 = new SoCoordinate();
SoCoordinate219->setUSE(QString("SKINCOORD"));
SoIndexedLineSet218->setCoord(*SoCoordinate219);

SoShape215->setGeometry(*SoIndexedLineSet218);

SoGroup194->addChild(*SoShape215);

SoHAnimHumanoid63->setSkin(SoGroup194);

SoNode33->addChild(*SoHAnimHumanoid63);

SoProtoInstance* SoProtoInstance220 = new SoProtoInstance();
SoProtoInstance220->setDEF(QString("ANIMATOR"));
SoProtoInstance220->setName(QString("LOA1_WalkAnimation"));
SoNode33->addChild(*SoProtoInstance220);

SoScript* SoScript221 = new SoScript();
SoScript221->setDEF(QString("ENGINE"));
SoScript221->setUrl(new QString[]{QString("BoxMan3.js"), QString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/BoxMan3.js")}, 2);
SoScript221->setDirectOutput(true);
Sofield* Sofield222 = new Sofield();
Sofield222->setAccessType(QString("inputOnly"));
Sofield222->setType(QString("SFRotation"));
Sofield222->setName(QString("update"));
SoScript221->addChild(*Sofield222);

Sofield* Sofield223 = new Sofield();
Sofield223->setAccessType(QString("initializeOnly"));
Sofield223->setType(QString("SFNode"));
Sofield223->setName(QString("humanoid"));
SoHAnimHumanoid* SoHAnimHumanoid224 = new SoHAnimHumanoid();
SoHAnimHumanoid224->setUSE(QString("boxman_Humanoid"));
Sofield223->addChild(*SoHAnimHumanoid224);

SoScript221->addChild(*Sofield223);

Sofield* Sofield225 = new Sofield();
Sofield225->setAccessType(QString("initializeOnly"));
Sofield225->setType(QString("MFVec3f"));
Sofield225->setName(QString("coordList"));
SoScript221->addChild(*Sofield225);

Sofield* Sofield226 = new Sofield();
Sofield226->setAccessType(QString("initializeOnly"));
Sofield226->setType(QString("SFNode"));
Sofield226->setName(QString("joint"));
SoScript221->addChild(*Sofield226);

Sofield* Sofield227 = new Sofield();
Sofield227->setAccessType(QString("initializeOnly"));
Sofield227->setType(QString("SFVec3f"));
Sofield227->setName(QString("translation"));
SoScript221->addChild(*Sofield227);

Sofield* Sofield228 = new Sofield();
Sofield228->setAccessType(QString("initializeOnly"));
Sofield228->setType(QString("SFRotation"));
Sofield228->setName(QString("rotation"));
SoScript221->addChild(*Sofield228);

Sofield* Sofield229 = new Sofield();
Sofield229->setAccessType(QString("initializeOnly"));
Sofield229->setType(QString("SFVec3f"));
Sofield229->setName(QString("scale"));
Sofield229->setValue(QString("1 1 1"));
SoScript221->addChild(*Sofield229);

SoNode33->addChild(*SoScript221);

SoROUTE* SoROUTE230 = new SoROUTE();
SoROUTE230->setFromNode(QString("ANIMATOR"));
SoROUTE230->setFromField(QString("HumanoidRoot_translation_changed"));
SoROUTE230->setToNode(QString("boxman_humanoid_root"));
SoROUTE230->setToField(QString("set_translation"));
SoNode33->addChild(*SoROUTE230);

SoROUTE* SoROUTE231 = new SoROUTE();
SoROUTE231->setFromNode(QString("ANIMATOR"));
SoROUTE231->setFromField(QString("HumanoidRoot_rotation_changed"));
SoROUTE231->setToNode(QString("boxman_humanoid_root"));
SoROUTE231->setToField(QString("set_rotation"));
SoNode33->addChild(*SoROUTE231);

SoROUTE* SoROUTE232 = new SoROUTE();
SoROUTE232->setFromNode(QString("ANIMATOR"));
SoROUTE232->setFromField(QString("l_hip_rotation_changed"));
SoROUTE232->setToNode(QString("boxman_l_hip"));
SoROUTE232->setToField(QString("set_rotation"));
SoNode33->addChild(*SoROUTE232);

SoROUTE* SoROUTE233 = new SoROUTE();
SoROUTE233->setFromNode(QString("ANIMATOR"));
SoROUTE233->setFromField(QString("l_knee_rotation_changed"));
SoROUTE233->setToNode(QString("boxman_l_knee"));
SoROUTE233->setToField(QString("set_rotation"));
SoNode33->addChild(*SoROUTE233);

SoROUTE* SoROUTE234 = new SoROUTE();
SoROUTE234->setFromNode(QString("ANIMATOR"));
SoROUTE234->setFromField(QString("l_ankle_rotation_changed"));
SoROUTE234->setToNode(QString("boxman_l_ankle"));
SoROUTE234->setToField(QString("set_rotation"));
SoNode33->addChild(*SoROUTE234);

SoROUTE* SoROUTE235 = new SoROUTE();
SoROUTE235->setFromNode(QString("ANIMATOR"));
SoROUTE235->setFromField(QString("l_midtarsal_rotation_changed"));
SoROUTE235->setToNode(QString("boxman_l_midtarsal"));
SoROUTE235->setToField(QString("set_rotation"));
SoNode33->addChild(*SoROUTE235);

SoROUTE* SoROUTE236 = new SoROUTE();
SoROUTE236->setFromNode(QString("ANIMATOR"));
SoROUTE236->setFromField(QString("r_hip_rotation_changed"));
SoROUTE236->setToNode(QString("boxman_r_hip"));
SoROUTE236->setToField(QString("set_rotation"));
SoNode33->addChild(*SoROUTE236);

SoROUTE* SoROUTE237 = new SoROUTE();
SoROUTE237->setFromNode(QString("ANIMATOR"));
SoROUTE237->setFromField(QString("r_knee_rotation_changed"));
SoROUTE237->setToNode(QString("boxman_r_knee"));
SoROUTE237->setToField(QString("set_rotation"));
SoNode33->addChild(*SoROUTE237);

SoROUTE* SoROUTE238 = new SoROUTE();
SoROUTE238->setFromNode(QString("ANIMATOR"));
SoROUTE238->setFromField(QString("r_ankle_rotation_changed"));
SoROUTE238->setToNode(QString("boxman_r_ankle"));
SoROUTE238->setToField(QString("set_rotation"));
SoNode33->addChild(*SoROUTE238);

SoROUTE* SoROUTE239 = new SoROUTE();
SoROUTE239->setFromNode(QString("ANIMATOR"));
SoROUTE239->setFromField(QString("r_midtarsal_rotation_changed"));
SoROUTE239->setToNode(QString("boxman_r_midtarsal"));
SoROUTE239->setToField(QString("set_rotation"));
SoNode33->addChild(*SoROUTE239);

SoROUTE* SoROUTE240 = new SoROUTE();
SoROUTE240->setFromNode(QString("ANIMATOR"));
SoROUTE240->setFromField(QString("vl5_rotation_changed"));
SoROUTE240->setToNode(QString("boxman_vl5"));
SoROUTE240->setToField(QString("set_rotation"));
SoNode33->addChild(*SoROUTE240);

SoROUTE* SoROUTE241 = new SoROUTE();
SoROUTE241->setFromNode(QString("ANIMATOR"));
SoROUTE241->setFromField(QString("skullbase_rotation_changed"));
SoROUTE241->setToNode(QString("boxman_skullbase"));
SoROUTE241->setToField(QString("set_rotation"));
SoNode33->addChild(*SoROUTE241);

SoROUTE* SoROUTE242 = new SoROUTE();
SoROUTE242->setFromNode(QString("ANIMATOR"));
SoROUTE242->setFromField(QString("l_shoulder_rotation_changed"));
SoROUTE242->setToNode(QString("boxman_l_shoulder"));
SoROUTE242->setToField(QString("set_rotation"));
SoNode33->addChild(*SoROUTE242);

SoROUTE* SoROUTE243 = new SoROUTE();
SoROUTE243->setFromNode(QString("ANIMATOR"));
SoROUTE243->setFromField(QString("l_elbow_rotation_changed"));
SoROUTE243->setToNode(QString("boxman_l_elbow"));
SoROUTE243->setToField(QString("set_rotation"));
SoNode33->addChild(*SoROUTE243);

SoROUTE* SoROUTE244 = new SoROUTE();
SoROUTE244->setFromNode(QString("ANIMATOR"));
SoROUTE244->setFromField(QString("l_wrist_rotation_changed"));
SoROUTE244->setToNode(QString("boxman_l_wrist"));
SoROUTE244->setToField(QString("set_rotation"));
SoNode33->addChild(*SoROUTE244);

SoROUTE* SoROUTE245 = new SoROUTE();
SoROUTE245->setFromNode(QString("ANIMATOR"));
SoROUTE245->setFromField(QString("r_shoulder_rotation_changed"));
SoROUTE245->setToNode(QString("boxman_r_shoulder"));
SoROUTE245->setToField(QString("set_rotation"));
SoNode33->addChild(*SoROUTE245);

SoROUTE* SoROUTE246 = new SoROUTE();
SoROUTE246->setFromNode(QString("ANIMATOR"));
SoROUTE246->setFromField(QString("r_elbow_rotation_changed"));
SoROUTE246->setToNode(QString("boxman_r_elbow"));
SoROUTE246->setToField(QString("set_rotation"));
SoNode33->addChild(*SoROUTE246);

SoROUTE* SoROUTE247 = new SoROUTE();
SoROUTE247->setFromNode(QString("ANIMATOR"));
SoROUTE247->setFromField(QString("r_wrist_rotation_changed"));
SoROUTE247->setToNode(QString("boxman_r_wrist"));
SoROUTE247->setToField(QString("set_rotation"));
SoNode33->addChild(*SoROUTE247);

SoSceneManager0->setSceneGraph(*SoNode33);

return 0;
}
