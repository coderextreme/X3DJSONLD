
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
Someta3->setContent(QString("BoxMan.x3d"));
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
Someta9->setContent(QString("Tue, 09 Sep 2025 19:37:51 GMT"));
Sohead1->addMeta(*Someta9);

Someta* Someta10 = new Someta();
Someta10->setName(QString("reference"));
Someta10->setContent(QString("Original site http://HAnim.org"));
Sohead1->addMeta(*Someta10);

Someta* Someta11 = new Someta();
Someta11->setName(QString("reference"));
Someta11->setContent(QString("../Legacy/originals/boxman.wrl"));
Sohead1->addMeta(*Someta11);

Someta* Someta12 = new Someta();
Someta12->setName(QString("reference"));
Someta12->setContent(QString("BoxMan.js"));
Sohead1->addMeta(*Someta12);

Someta* Someta13 = new Someta();
Someta13->setName(QString("reference"));
Someta13->setContent(QString("BoxManAnimationPanel.x3d"));
Sohead1->addMeta(*Someta13);

Someta* Someta14 = new Someta();
Someta14->setName(QString("reference"));
Someta14->setContent(QString("http://HAnim.org/Models/HAnim2001/boxman/boxman.wrl"));
Sohead1->addMeta(*Someta14);

Someta* Someta15 = new Someta();
Someta15->setName(QString("reference"));
Someta15->setContent(QString("http://www.vapourtech.com/team/james/boxman.wrl"));
Sohead1->addMeta(*Someta15);

Someta* Someta16 = new Someta();
Someta16->setName(QString("reference"));
Someta16->setContent(QString("http://HAnim.org/Specifications/HAnim2001"));
Sohead1->addMeta(*Someta16);

Someta* Someta17 = new Someta();
Someta17->setName(QString("reference"));
Someta17->setContent(QString("http://HAnim.org/Models"));
Sohead1->addMeta(*Someta17);

Someta* Someta18 = new Someta();
Someta18->setName(QString("reference"));
Someta18->setContent(QString("http://HAnim.org/Nodes"));
Sohead1->addMeta(*Someta18);

Someta* Someta19 = new Someta();
Someta19->setName(QString("reference"));
Someta19->setContent(QString("https://www.web3d.org/x3d/content/X3dToVrml97.xslt"));
Sohead1->addMeta(*Someta19);

Someta* Someta20 = new Someta();
Someta20->setName(QString("reference"));
Someta20->setContent(QString("http://www.vapourtech.com"));
Sohead1->addMeta(*Someta20);

Someta* Someta21 = new Someta();
Someta21->setName(QString("warning"));
Someta21->setContent(QString("Skin mesh is split across multiple shapes within a Group, should that be allowed?"));
Sohead1->addMeta(*Someta21);

Someta* Someta22 = new Someta();
Someta22->setName(QString("TODO"));
Someta22->setContent(QString("What does the original animation script accomplish? It is not hooked up, script source contains errors..."));
Sohead1->addMeta(*Someta22);

Someta* Someta23 = new Someta();
Someta23->setName(QString("TODO"));
Someta23->setContent(QString("InstantReality Forum Issue: InstantReality is ignoring the Viewpoint nodes in the topmost HAnimSite. http://forum.instantreality.org"));
Sohead1->addMeta(*Someta23);

Someta* Someta24 = new Someta();
Someta24->setName(QString("Image"));
Someta24->setContent(QString("BoxManViewInclined.png"));
Sohead1->addMeta(*Someta24);

Someta* Someta25 = new Someta();
Someta25->setName(QString("Image"));
Someta25->setContent(QString("BoxManViewFront.png"));
Sohead1->addMeta(*Someta25);

Someta* Someta26 = new Someta();
Someta26->setName(QString("Image"));
Someta26->setContent(QString("BoxManViewRight.png"));
Sohead1->addMeta(*Someta26);

Someta* Someta27 = new Someta();
Someta27->setName(QString("Image"));
Someta27->setContent(QString("BoxManViewLeft.png"));
Sohead1->addMeta(*Someta27);

Someta* Someta28 = new Someta();
Someta28->setName(QString("Image"));
Someta28->setContent(QString("BoxManViewTop.png"));
Sohead1->addMeta(*Someta28);

Someta* Someta29 = new Someta();
Someta29->setName(QString("rights"));
Someta29->setContent(QString("(C) 2000 James Smith - james@vapourtech.com"));
Sohead1->addMeta(*Someta29);

Someta* Someta30 = new Someta();
Someta30->setName(QString("subject"));
Someta30->setContent(QString("BoxMan HAnim 2.0"));
Sohead1->addMeta(*Someta30);

Someta* Someta31 = new Someta();
Someta31->setName(QString("identifier"));
Someta31->setContent(QString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/BoxMan.x3d"));
Sohead1->addMeta(*Someta31);

SoSceneManager0->setHead(*Sohead1);

SoNode* SoNode32 = new SoNode();
SoExternProtoDeclare* SoExternProtoDeclare33 = new SoExternProtoDeclare();
SoExternProtoDeclare33->setName(QString("LOA1_WalkAnimation"));
SoExternProtoDeclare33->setUrl(new QString[]{QString("../Prototypes/LOA1_WalkAnimation.x3d#LOA1_WalkAnimation"), QString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/LOA1_WalkAnimation.x3d#LOA1_WalkAnimation"), QString("../Prototypes/LOA1_WalkAnimation.wrl#LOA1_WalkAnimation"), QString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/LOA1_WalkAnimation.wrl#LOA1_WalkAnimation")}, 4);
Sofield* Sofield34 = new Sofield();
Sofield34->setAccessType(QString("inputOutput"));
Sofield34->setType(QString("SFTime"));
Sofield34->setName(QString("cycleInterval"));
SoExternProtoDeclare33->addChild(*Sofield34);

Sofield* Sofield35 = new Sofield();
Sofield35->setAccessType(QString("inputOutput"));
Sofield35->setType(QString("SFBool"));
Sofield35->setName(QString("enabled"));
SoExternProtoDeclare33->addChild(*Sofield35);

Sofield* Sofield36 = new Sofield();
Sofield36->setAccessType(QString("inputOutput"));
Sofield36->setType(QString("SFBool"));
Sofield36->setName(QString("loop"));
SoExternProtoDeclare33->addChild(*Sofield36);

Sofield* Sofield37 = new Sofield();
Sofield37->setAccessType(QString("inputOutput"));
Sofield37->setType(QString("SFTime"));
Sofield37->setName(QString("startTime"));
SoExternProtoDeclare33->addChild(*Sofield37);

Sofield* Sofield38 = new Sofield();
Sofield38->setAccessType(QString("inputOutput"));
Sofield38->setType(QString("SFTime"));
Sofield38->setName(QString("stopTime"));
SoExternProtoDeclare33->addChild(*Sofield38);

Sofield* Sofield39 = new Sofield();
Sofield39->setAccessType(QString("outputOnly"));
Sofield39->setType(QString("SFFloat"));
Sofield39->setName(QString("fraction_changed"));
SoExternProtoDeclare33->addChild(*Sofield39);

Sofield* Sofield40 = new Sofield();
Sofield40->setAccessType(QString("outputOnly"));
Sofield40->setType(QString("SFVec3f"));
Sofield40->setName(QString("HumanoidRoot_translation_changed"));
SoExternProtoDeclare33->addChild(*Sofield40);

Sofield* Sofield41 = new Sofield();
Sofield41->setAccessType(QString("outputOnly"));
Sofield41->setType(QString("SFRotation"));
Sofield41->setName(QString("HumanoidRoot_rotation_changed"));
SoExternProtoDeclare33->addChild(*Sofield41);

Sofield* Sofield42 = new Sofield();
Sofield42->setAccessType(QString("outputOnly"));
Sofield42->setType(QString("SFRotation"));
Sofield42->setName(QString("l_hip_rotation_changed"));
SoExternProtoDeclare33->addChild(*Sofield42);

Sofield* Sofield43 = new Sofield();
Sofield43->setAccessType(QString("outputOnly"));
Sofield43->setType(QString("SFRotation"));
Sofield43->setName(QString("l_knee_rotation_changed"));
SoExternProtoDeclare33->addChild(*Sofield43);

Sofield* Sofield44 = new Sofield();
Sofield44->setAccessType(QString("outputOnly"));
Sofield44->setType(QString("SFRotation"));
Sofield44->setName(QString("l_ankle_rotation_changed"));
SoExternProtoDeclare33->addChild(*Sofield44);

Sofield* Sofield45 = new Sofield();
Sofield45->setAccessType(QString("outputOnly"));
Sofield45->setType(QString("SFRotation"));
Sofield45->setName(QString("l_midtarsal_rotation_changed"));
SoExternProtoDeclare33->addChild(*Sofield45);

Sofield* Sofield46 = new Sofield();
Sofield46->setAccessType(QString("outputOnly"));
Sofield46->setType(QString("SFRotation"));
Sofield46->setName(QString("r_hip_rotation_changed"));
SoExternProtoDeclare33->addChild(*Sofield46);

Sofield* Sofield47 = new Sofield();
Sofield47->setAccessType(QString("outputOnly"));
Sofield47->setType(QString("SFRotation"));
Sofield47->setName(QString("r_knee_rotation_changed"));
SoExternProtoDeclare33->addChild(*Sofield47);

Sofield* Sofield48 = new Sofield();
Sofield48->setAccessType(QString("outputOnly"));
Sofield48->setType(QString("SFRotation"));
Sofield48->setName(QString("r_ankle_rotation_changed"));
SoExternProtoDeclare33->addChild(*Sofield48);

Sofield* Sofield49 = new Sofield();
Sofield49->setAccessType(QString("outputOnly"));
Sofield49->setType(QString("SFRotation"));
Sofield49->setName(QString("r_midtarsal_rotation_changed"));
SoExternProtoDeclare33->addChild(*Sofield49);

Sofield* Sofield50 = new Sofield();
Sofield50->setAccessType(QString("outputOnly"));
Sofield50->setType(QString("SFRotation"));
Sofield50->setName(QString("vl5_rotation_changed"));
SoExternProtoDeclare33->addChild(*Sofield50);

Sofield* Sofield51 = new Sofield();
Sofield51->setAccessType(QString("outputOnly"));
Sofield51->setType(QString("SFRotation"));
Sofield51->setName(QString("skullbase_rotation_changed"));
SoExternProtoDeclare33->addChild(*Sofield51);

Sofield* Sofield52 = new Sofield();
Sofield52->setAccessType(QString("outputOnly"));
Sofield52->setType(QString("SFRotation"));
Sofield52->setName(QString("l_shoulder_rotation_changed"));
SoExternProtoDeclare33->addChild(*Sofield52);

Sofield* Sofield53 = new Sofield();
Sofield53->setAccessType(QString("outputOnly"));
Sofield53->setType(QString("SFRotation"));
Sofield53->setName(QString("l_elbow_rotation_changed"));
SoExternProtoDeclare33->addChild(*Sofield53);

Sofield* Sofield54 = new Sofield();
Sofield54->setAccessType(QString("outputOnly"));
Sofield54->setType(QString("SFRotation"));
Sofield54->setName(QString("l_wrist_rotation_changed"));
SoExternProtoDeclare33->addChild(*Sofield54);

Sofield* Sofield55 = new Sofield();
Sofield55->setAccessType(QString("outputOnly"));
Sofield55->setType(QString("SFRotation"));
Sofield55->setName(QString("r_shoulder_rotation_changed"));
SoExternProtoDeclare33->addChild(*Sofield55);

Sofield* Sofield56 = new Sofield();
Sofield56->setAccessType(QString("outputOnly"));
Sofield56->setType(QString("SFRotation"));
Sofield56->setName(QString("r_elbow_rotation_changed"));
SoExternProtoDeclare33->addChild(*Sofield56);

Sofield* Sofield57 = new Sofield();
Sofield57->setAccessType(QString("outputOnly"));
Sofield57->setType(QString("SFRotation"));
Sofield57->setName(QString("r_wrist_rotation_changed"));
SoExternProtoDeclare33->addChild(*Sofield57);

Sofield* Sofield58 = new Sofield();
Sofield58->setAccessType(QString("outputOnly"));
Sofield58->setType(QString("SFBool"));
Sofield58->setName(QString("isActive"));
SoExternProtoDeclare33->addChild(*Sofield58);

SoNode32->addChild(*SoExternProtoDeclare33);

SoWorldInfo* SoWorldInfo59 = new SoWorldInfo();
SoWorldInfo59->setTitle(QString("BoxMan - A Seamless VRML Human"));
SoWorldInfo59->setInfo(new QString[]{QString("(C) 2000 James Smith - james@vapourtech.com"), QString("http://www.vapourtech.com/team/james/boxman.wrl"), QString("Blaxxun compatibility by Tu Lam - TuL@seamless-solutions.com")}, 3);
SoNode32->addChild(*SoWorldInfo59);

SoBackground* SoBackground60 = new SoBackground();
SoBackground60->setSkyColor(new float[]{0.75,0.75,0.75}, 3);
SoBackground60->setGroundColor(new float[]{0.6,0.6,0.6}, 3);
SoNode32->addChild(*SoBackground60);

SoHAnimHumanoid* SoHAnimHumanoid61 = new SoHAnimHumanoid();
SoHAnimHumanoid61->setDEF(QString("boxman_Humanoid"));
SoHAnimHumanoid61->X3DNode::setName(QString("Humanoid"));
SoHAnimHumanoid61->setInfo(new QString[]{QString("authorName=James Smith"), QString("authorEmail=james@vapourtech.com"), QString("copyright=(C) 2000 James Smith - james@vapourtech.com"), QString("humanoidVersion=1.0")}, 4);
SoHAnimHumanoid61->setVersion(QString("1.0"));
SoHAnimJoint* SoHAnimJoint62 = new SoHAnimJoint();
SoHAnimJoint62->setDEF(QString("boxman_humanoid_root"));
SoHAnimJoint62->X3DNode::setName(QString("humanoid_root"));
SoHAnimJoint62->setCenter(new float[]{0.0,0.9723,-0.0728});
SoHAnimJoint62->setSkinCoordIndex(new int32_t[]{0,1,2,3,4,5,6,7,8,9,10,11}, 12);
SoHAnimJoint62->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 12);
SoHAnimSegment* SoHAnimSegment63 = new SoHAnimSegment();
SoHAnimSegment63->setDEF(QString("boxman_sacrum"));
SoHAnimSegment63->X3DNode::setName(QString("sacrum"));
SoTransform* SoTransform64 = new SoTransform();
SoTransform64->setTranslation(new float[]{0.0,0.9723,-0.0728});
SoShape* SoShape65 = new SoShape();
SoShape65->setDEF(QString("SphereYellow"));
SoVRMLAppearance* SoVRMLAppearance66 = new SoVRMLAppearance();
SoMaterial* SoMaterial67 = new SoMaterial();
SoMaterial67->setDiffuseColor(new float[]{1.0,1.0,0.0});
SoVRMLAppearance66->addChild(*SoMaterial67);

SoShape65->addChild(*SoVRMLAppearance66);

SoSphere* SoSphere68 = new SoSphere();
SoSphere68->setRadius(0.02);
SoShape65->setGeometry(*SoSphere68);

SoTransform64->addChild(*SoShape65);

SoHAnimSegment63->addChild(*SoTransform64);

SoHAnimJoint62->addChildren(*SoHAnimSegment63);

SoHAnimJoint* SoHAnimJoint69 = new SoHAnimJoint();
SoHAnimJoint69->setDEF(QString("boxman_l_hip"));
SoHAnimJoint69->X3DNode::setName(QString("l_hip"));
SoHAnimJoint69->setCenter(new float[]{0.0956,0.9364,0.0});
SoHAnimJoint69->setSkinCoordIndex(new int32_t[]{12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43}, 32);
SoHAnimJoint69->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5}, 32);
SoHAnimSegment* SoHAnimSegment70 = new SoHAnimSegment();
SoHAnimSegment70->setDEF(QString("boxman_l_thigh"));
SoHAnimSegment70->X3DNode::setName(QString("l_thigh"));
SoTransform* SoTransform71 = new SoTransform();
SoTransform71->setTranslation(new float[]{0.0956,0.9364,0.0});
SoShape* SoShape72 = new SoShape();
SoShape72->setUSE(QString("SphereYellow"));
SoTransform71->addChild(*SoShape72);

SoHAnimSegment70->addChild(*SoTransform71);

SoHAnimJoint69->addChildren(*SoHAnimSegment70);

SoHAnimJoint* SoHAnimJoint73 = new SoHAnimJoint();
SoHAnimJoint73->setDEF(QString("boxman_l_knee"));
SoHAnimJoint73->X3DNode::setName(QString("l_knee"));
SoHAnimJoint73->setCenter(new float[]{0.0956,0.5095,-0.0036});
SoHAnimJoint73->setSkinCoordIndex(new int32_t[]{36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63}, 28);
SoHAnimJoint73->setSkinCoordWeight(new float[]{0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 28);
SoHAnimSegment* SoHAnimSegment74 = new SoHAnimSegment();
SoHAnimSegment74->setDEF(QString("boxman_l_calf"));
SoHAnimSegment74->X3DNode::setName(QString("l_calf"));
SoTransform* SoTransform75 = new SoTransform();
SoTransform75->setTranslation(new float[]{0.0956,0.5095,-0.0036});
SoShape* SoShape76 = new SoShape();
SoShape76->setUSE(QString("SphereYellow"));
SoTransform75->addChild(*SoShape76);

SoHAnimSegment74->addChild(*SoTransform75);

SoHAnimJoint73->addChildren(*SoHAnimSegment74);

SoHAnimJoint* SoHAnimJoint77 = new SoHAnimJoint();
SoHAnimJoint77->setDEF(QString("boxman_l_ankle"));
SoHAnimJoint77->X3DNode::setName(QString("l_ankle"));
SoHAnimJoint77->setCenter(new float[]{0.0946,0.0762,-0.0261});
SoHAnimJoint77->setSkinCoordIndex(new int32_t[]{64,65,66,67,68,69,70,71}, 8);
SoHAnimJoint77->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 8);
SoHAnimSegment* SoHAnimSegment78 = new SoHAnimSegment();
SoHAnimSegment78->setDEF(QString("boxman_l_hindfoot"));
SoHAnimSegment78->X3DNode::setName(QString("l_hindfoot"));
SoTransform* SoTransform79 = new SoTransform();
SoTransform79->setTranslation(new float[]{0.0946,0.0762,-0.0261});
SoShape* SoShape80 = new SoShape();
SoShape80->setUSE(QString("SphereYellow"));
SoTransform79->addChild(*SoShape80);

SoHAnimSegment78->addChild(*SoTransform79);

SoHAnimJoint77->addChildren(*SoHAnimSegment78);

SoHAnimJoint* SoHAnimJoint81 = new SoHAnimJoint();
SoHAnimJoint81->setDEF(QString("boxman_l_midtarsal"));
SoHAnimJoint81->X3DNode::setName(QString("l_midtarsal"));
SoHAnimJoint81->setCenter(new float[]{0.1079,0.0317,0.067});
SoHAnimJoint81->setSkinCoordIndex(new int32_t[]{72,73,74,75,76,77,78,79}, 8);
SoHAnimJoint81->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 8);
SoHAnimSegment* SoHAnimSegment82 = new SoHAnimSegment();
SoHAnimSegment82->setDEF(QString("boxman_l_middistal"));
SoHAnimSegment82->X3DNode::setName(QString("l_middistal"));
SoTransform* SoTransform83 = new SoTransform();
SoTransform83->setTranslation(new float[]{0.1079,0.0317,0.067});
SoShape* SoShape84 = new SoShape();
SoShape84->setUSE(QString("SphereYellow"));
SoTransform83->addChild(*SoShape84);

SoHAnimSegment82->addChild(*SoTransform83);

SoHAnimSite* SoHAnimSite85 = new SoHAnimSite();
SoHAnimSite85->setDEF(QString("boxman_l_middistal_tip"));
SoHAnimSite85->X3DNode::setName(QString("l_middistal_tip"));
SoHAnimSite85->setTranslation(new float[]{0.095,0.0005,0.1924});
SoShape* SoShape86 = new SoShape();
SoShape86->setDEF(QString("SphereRed"));
SoVRMLAppearance* SoVRMLAppearance87 = new SoVRMLAppearance();
SoMaterial* SoMaterial88 = new SoMaterial();
SoMaterial88->setDiffuseColor(new float[]{1.0,0.0,0.0});
SoVRMLAppearance87->addChild(*SoMaterial88);

SoShape86->addChild(*SoVRMLAppearance87);

SoSphere* SoSphere89 = new SoSphere();
SoSphere89->setRadius(0.02);
SoShape86->setGeometry(*SoSphere89);

SoHAnimSite85->addChild(*SoShape86);

SoHAnimSegment82->addChild(*SoHAnimSite85);

SoHAnimJoint81->addChildren(*SoHAnimSegment82);

SoHAnimJoint77->addChildren(*SoHAnimJoint81);

SoHAnimJoint73->addChildren(*SoHAnimJoint77);

SoHAnimJoint69->addChildren(*SoHAnimJoint73);

SoHAnimJoint62->addChildren(*SoHAnimJoint69);

SoHAnimJoint* SoHAnimJoint90 = new SoHAnimJoint();
SoHAnimJoint90->setDEF(QString("boxman_r_hip"));
SoHAnimJoint90->X3DNode::setName(QString("r_hip"));
SoHAnimJoint90->setCenter(new float[]{-0.0956,0.9364,0.0});
SoHAnimJoint90->setSkinCoordIndex(new int32_t[]{80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111}, 32);
SoHAnimJoint90->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5}, 32);
SoHAnimSegment* SoHAnimSegment91 = new SoHAnimSegment();
SoHAnimSegment91->setDEF(QString("boxman_r_thigh"));
SoHAnimSegment91->X3DNode::setName(QString("r_thigh"));
SoTransform* SoTransform92 = new SoTransform();
SoTransform92->setTranslation(new float[]{-0.0956,0.9364,0.0});
SoShape* SoShape93 = new SoShape();
SoShape93->setUSE(QString("SphereYellow"));
SoTransform92->addChild(*SoShape93);

SoHAnimSegment91->addChild(*SoTransform92);

SoHAnimJoint90->addChildren(*SoHAnimSegment91);

SoHAnimJoint* SoHAnimJoint94 = new SoHAnimJoint();
SoHAnimJoint94->setDEF(QString("boxman_r_knee"));
SoHAnimJoint94->X3DNode::setName(QString("r_knee"));
SoHAnimJoint94->setCenter(new float[]{-0.0956,0.5095,-0.0036});
SoHAnimJoint94->setSkinCoordIndex(new int32_t[]{104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,128,129,130,131}, 28);
SoHAnimJoint94->setSkinCoordWeight(new float[]{0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 28);
SoHAnimSegment* SoHAnimSegment95 = new SoHAnimSegment();
SoHAnimSegment95->setDEF(QString("boxman_r_calf"));
SoHAnimSegment95->X3DNode::setName(QString("r_calf"));
SoTransform* SoTransform96 = new SoTransform();
SoTransform96->setTranslation(new float[]{-0.0956,0.5095,-0.0036});
SoShape* SoShape97 = new SoShape();
SoShape97->setUSE(QString("SphereYellow"));
SoTransform96->addChild(*SoShape97);

SoHAnimSegment95->addChild(*SoTransform96);

SoHAnimJoint94->addChildren(*SoHAnimSegment95);

SoHAnimJoint* SoHAnimJoint98 = new SoHAnimJoint();
SoHAnimJoint98->setDEF(QString("boxman_r_ankle"));
SoHAnimJoint98->X3DNode::setName(QString("r_ankle"));
SoHAnimJoint98->setCenter(new float[]{-0.0946,0.0762,-0.0261});
SoHAnimJoint98->setSkinCoordIndex(new int32_t[]{132,133,134,135,136,137,138,139}, 8);
SoHAnimJoint98->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 8);
SoHAnimSegment* SoHAnimSegment99 = new SoHAnimSegment();
SoHAnimSegment99->setDEF(QString("boxman_r_hindfoot"));
SoHAnimSegment99->X3DNode::setName(QString("r_hindfoot"));
SoTransform* SoTransform100 = new SoTransform();
SoTransform100->setTranslation(new float[]{-0.0946,0.0762,-0.0261});
SoShape* SoShape101 = new SoShape();
SoShape101->setUSE(QString("SphereYellow"));
SoTransform100->addChild(*SoShape101);

SoHAnimSegment99->addChild(*SoTransform100);

SoHAnimJoint98->addChildren(*SoHAnimSegment99);

SoHAnimJoint* SoHAnimJoint102 = new SoHAnimJoint();
SoHAnimJoint102->setDEF(QString("boxman_r_midtarsal"));
SoHAnimJoint102->X3DNode::setName(QString("r_midtarsal"));
SoHAnimJoint102->setCenter(new float[]{-0.1079,0.0317,0.067});
SoHAnimJoint102->setSkinCoordIndex(new int32_t[]{140,141,142,143,144,145,146,147}, 8);
SoHAnimJoint102->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 8);
SoHAnimSegment* SoHAnimSegment103 = new SoHAnimSegment();
SoHAnimSegment103->setDEF(QString("boxman_r_middistal"));
SoHAnimSegment103->X3DNode::setName(QString("r_middistal"));
SoTransform* SoTransform104 = new SoTransform();
SoTransform104->setTranslation(new float[]{-0.1079,0.0317,0.067});
SoShape* SoShape105 = new SoShape();
SoShape105->setUSE(QString("SphereYellow"));
SoTransform104->addChild(*SoShape105);

SoHAnimSegment103->addChild(*SoTransform104);

SoHAnimSite* SoHAnimSite106 = new SoHAnimSite();
SoHAnimSite106->setDEF(QString("boxman_r_middistal_tip"));
SoHAnimSite106->X3DNode::setName(QString("r_middistal_tip"));
SoHAnimSite106->setTranslation(new float[]{-0.095,0.0005,0.1924});
SoShape* SoShape107 = new SoShape();
SoShape107->setUSE(QString("SphereRed"));
SoHAnimSite106->addChild(*SoShape107);

SoHAnimSegment103->addChild(*SoHAnimSite106);

SoHAnimJoint102->addChildren(*SoHAnimSegment103);

SoHAnimJoint98->addChildren(*SoHAnimJoint102);

SoHAnimJoint94->addChildren(*SoHAnimJoint98);

SoHAnimJoint90->addChildren(*SoHAnimJoint94);

SoHAnimJoint62->addChildren(*SoHAnimJoint90);

SoHAnimJoint* SoHAnimJoint108 = new SoHAnimJoint();
SoHAnimJoint108->setDEF(QString("boxman_vl5"));
SoHAnimJoint108->X3DNode::setName(QString("vl5"));
SoHAnimJoint108->setCenter(new float[]{0.0,1.0817,-0.0728});
SoHAnimJoint108->setSkinCoordIndex(new int32_t[]{148,149,150,151,152,153,154,155,156,157,158,159,160,161,162,163,164,165,166,167}, 20);
SoHAnimJoint108->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 20);
SoHAnimSegment* SoHAnimSegment109 = new SoHAnimSegment();
SoHAnimSegment109->setDEF(QString("boxman_l5"));
SoHAnimSegment109->X3DNode::setName(QString("l5"));
SoTransform* SoTransform110 = new SoTransform();
SoTransform110->setTranslation(new float[]{0.0,1.0817,-0.0728});
SoShape* SoShape111 = new SoShape();
SoShape111->setUSE(QString("SphereYellow"));
SoTransform110->addChild(*SoShape111);

SoHAnimSegment109->addChild(*SoTransform110);

SoHAnimJoint108->addChildren(*SoHAnimSegment109);

SoHAnimJoint* SoHAnimJoint112 = new SoHAnimJoint();
SoHAnimJoint112->setDEF(QString("boxman_skullbase"));
SoHAnimJoint112->X3DNode::setName(QString("skullbase"));
SoHAnimJoint112->setCenter(new float[]{0.0,1.644,0.036});
SoHAnimJoint112->setSkinCoordIndex(new int32_t[]{168,169,170,171,172,173,174,175}, 8);
SoHAnimJoint112->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 8);
SoHAnimSegment* SoHAnimSegment113 = new SoHAnimSegment();
SoHAnimSegment113->setDEF(QString("boxman_skull"));
SoHAnimSegment113->X3DNode::setName(QString("skull"));
SoTransform* SoTransform114 = new SoTransform();
SoTransform114->setTranslation(new float[]{0.0,1.644,0.036});
SoShape* SoShape115 = new SoShape();
SoShape115->setUSE(QString("SphereYellow"));
SoTransform114->addChild(*SoShape115);

SoHAnimSegment113->addChild(*SoTransform114);

SoHAnimSite* SoHAnimSite116 = new SoHAnimSite();
SoHAnimSite116->setDEF(QString("boxman_skull_tip"));
SoHAnimSite116->X3DNode::setName(QString("skull_tip"));
SoHAnimSite116->setTranslation(new float[]{-0.0029,1.7771,0.0274});
SoShape* SoShape117 = new SoShape();
SoShape117->setUSE(QString("SphereYellow"));
SoHAnimSite116->addChild(*SoShape117);

SoHAnimSegment113->addChild(*SoHAnimSite116);

SoHAnimJoint112->addChildren(*SoHAnimSegment113);

SoHAnimJoint108->addChildren(*SoHAnimJoint112);

SoHAnimJoint* SoHAnimJoint118 = new SoHAnimJoint();
SoHAnimJoint118->setDEF(QString("boxman_l_shoulder"));
SoHAnimJoint118->X3DNode::setName(QString("l_shoulder"));
SoHAnimJoint118->setCenter(new float[]{0.1968,1.4642,-0.0265});
SoHAnimJoint118->setSkinCoordIndex(new int32_t[]{176,177,178,179,180,181,182,183}, 8);
SoHAnimJoint118->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 8);
SoHAnimSegment* SoHAnimSegment119 = new SoHAnimSegment();
SoHAnimSegment119->setDEF(QString("boxman_l_upperarm"));
SoHAnimSegment119->X3DNode::setName(QString("l_upperarm"));
SoTransform* SoTransform120 = new SoTransform();
SoTransform120->setTranslation(new float[]{0.1968,1.4642,-0.0265});
SoShape* SoShape121 = new SoShape();
SoShape121->setUSE(QString("SphereYellow"));
SoTransform120->addChild(*SoShape121);

SoHAnimSegment119->addChild(*SoTransform120);

SoHAnimJoint118->addChildren(*SoHAnimSegment119);

SoHAnimJoint* SoHAnimJoint122 = new SoHAnimJoint();
SoHAnimJoint122->setDEF(QString("boxman_l_elbow"));
SoHAnimJoint122->X3DNode::setName(QString("l_elbow"));
SoHAnimJoint122->setCenter(new float[]{0.1982,1.1622,-0.0557});
SoHAnimJoint122->setSkinCoordIndex(new int32_t[]{184,185,186,187,188,189,190,191}, 8);
SoHAnimJoint122->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 8);
SoHAnimSegment* SoHAnimSegment123 = new SoHAnimSegment();
SoHAnimSegment123->setDEF(QString("boxman_l_forearm"));
SoHAnimSegment123->X3DNode::setName(QString("l_forearm"));
SoTransform* SoTransform124 = new SoTransform();
SoTransform124->setTranslation(new float[]{0.1982,1.1622,-0.0557});
SoShape* SoShape125 = new SoShape();
SoShape125->setUSE(QString("SphereYellow"));
SoTransform124->addChild(*SoShape125);

SoHAnimSegment123->addChild(*SoTransform124);

SoHAnimJoint122->addChildren(*SoHAnimSegment123);

SoHAnimJoint* SoHAnimJoint126 = new SoHAnimJoint();
SoHAnimJoint126->setDEF(QString("boxman_l_wrist"));
SoHAnimJoint126->X3DNode::setName(QString("l_wrist"));
SoHAnimJoint126->setCenter(new float[]{0.1972,0.8929,-0.069});
SoHAnimJoint126->setSkinCoordIndex(new int32_t[]{192,193,194,195,196,197,198,199}, 8);
SoHAnimJoint126->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 8);
SoHAnimSegment* SoHAnimSegment127 = new SoHAnimSegment();
SoHAnimSegment127->setDEF(QString("boxman_l_hand"));
SoHAnimSegment127->X3DNode::setName(QString("l_hand"));
SoTransform* SoTransform128 = new SoTransform();
SoTransform128->setTranslation(new float[]{0.1972,0.8929,-0.069});
SoShape* SoShape129 = new SoShape();
SoShape129->setUSE(QString("SphereYellow"));
SoTransform128->addChild(*SoShape129);

SoHAnimSegment127->addChild(*SoTransform128);

SoHAnimSite* SoHAnimSite130 = new SoHAnimSite();
SoHAnimSite130->setDEF(QString("boxman_l_hand_tip"));
SoHAnimSite130->X3DNode::setName(QString("l_hand_tip"));
SoHAnimSite130->setTranslation(new float[]{0.1912,0.6976,-0.071});
SoShape* SoShape131 = new SoShape();
SoShape131->setUSE(QString("SphereRed"));
SoHAnimSite130->addChild(*SoShape131);

SoHAnimSegment127->addChild(*SoHAnimSite130);

SoHAnimJoint126->addChildren(*SoHAnimSegment127);

SoHAnimJoint122->addChildren(*SoHAnimJoint126);

SoHAnimJoint118->addChildren(*SoHAnimJoint122);

SoHAnimJoint108->addChildren(*SoHAnimJoint118);

SoHAnimJoint* SoHAnimJoint132 = new SoHAnimJoint();
SoHAnimJoint132->setDEF(QString("boxman_r_shoulder"));
SoHAnimJoint132->X3DNode::setName(QString("r_shoulder"));
SoHAnimJoint132->setCenter(new float[]{-0.1968,1.4642,-0.0265});
SoHAnimJoint132->setSkinCoordIndex(new int32_t[]{200,201,202,203,204,205,206,207}, 8);
SoHAnimJoint132->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 8);
SoHAnimSegment* SoHAnimSegment133 = new SoHAnimSegment();
SoHAnimSegment133->setDEF(QString("boxman_r_upperarm"));
SoHAnimSegment133->X3DNode::setName(QString("r_upperarm"));
SoTransform* SoTransform134 = new SoTransform();
SoTransform134->setTranslation(new float[]{-0.1968,1.4642,-0.0265});
SoShape* SoShape135 = new SoShape();
SoShape135->setUSE(QString("SphereYellow"));
SoTransform134->addChild(*SoShape135);

SoHAnimSegment133->addChild(*SoTransform134);

SoHAnimJoint132->addChildren(*SoHAnimSegment133);

SoHAnimJoint* SoHAnimJoint136 = new SoHAnimJoint();
SoHAnimJoint136->setDEF(QString("boxman_r_elbow"));
SoHAnimJoint136->X3DNode::setName(QString("r_elbow"));
SoHAnimJoint136->setCenter(new float[]{-0.1982,1.1622,-0.0557});
SoHAnimJoint136->setSkinCoordIndex(new int32_t[]{208,209,210,211,212,213,214,215}, 8);
SoHAnimJoint136->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 8);
SoHAnimSegment* SoHAnimSegment137 = new SoHAnimSegment();
SoHAnimSegment137->setDEF(QString("boxman_r_forearm"));
SoHAnimSegment137->X3DNode::setName(QString("r_forearm"));
SoTransform* SoTransform138 = new SoTransform();
SoTransform138->setTranslation(new float[]{-0.1982,1.1622,-0.0557});
SoShape* SoShape139 = new SoShape();
SoShape139->setUSE(QString("SphereYellow"));
SoTransform138->addChild(*SoShape139);

SoHAnimSegment137->addChild(*SoTransform138);

SoHAnimJoint136->addChildren(*SoHAnimSegment137);

SoHAnimJoint* SoHAnimJoint140 = new SoHAnimJoint();
SoHAnimJoint140->setDEF(QString("boxman_r_wrist"));
SoHAnimJoint140->X3DNode::setName(QString("r_wrist"));
SoHAnimJoint140->setCenter(new float[]{-0.1972,0.8929,-0.069});
SoHAnimJoint140->setSkinCoordIndex(new int32_t[]{216,217,218,219,220,221,222,223}, 8);
SoHAnimJoint140->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 8);
SoHAnimSegment* SoHAnimSegment141 = new SoHAnimSegment();
SoHAnimSegment141->setDEF(QString("boxman_r_hand"));
SoHAnimSegment141->X3DNode::setName(QString("r_hand"));
SoTransform* SoTransform142 = new SoTransform();
SoTransform142->setTranslation(new float[]{-0.1972,0.8929,-0.069});
SoShape* SoShape143 = new SoShape();
SoShape143->setUSE(QString("SphereYellow"));
SoTransform142->addChild(*SoShape143);

SoHAnimSegment141->addChild(*SoTransform142);

SoHAnimSite* SoHAnimSite144 = new SoHAnimSite();
SoHAnimSite144->setDEF(QString("boxman_r_hand_tip"));
SoHAnimSite144->X3DNode::setName(QString("r_hand_tip"));
SoHAnimSite144->setTranslation(new float[]{-0.1912,0.6976,-0.071});
SoShape* SoShape145 = new SoShape();
SoShape145->setUSE(QString("SphereRed"));
SoHAnimSite144->addChild(*SoShape145);

SoHAnimSegment141->addChild(*SoHAnimSite144);

SoHAnimJoint140->addChildren(*SoHAnimSegment141);

SoHAnimJoint136->addChildren(*SoHAnimJoint140);

SoHAnimJoint132->addChildren(*SoHAnimJoint136);

SoHAnimJoint108->addChildren(*SoHAnimJoint132);

SoHAnimJoint62->addChildren(*SoHAnimJoint108);

SoHAnimHumanoid61->setSkeleton(*SoHAnimJoint62);

SoHAnimJoint* SoHAnimJoint146 = new SoHAnimJoint();
SoHAnimJoint146->setUSE(QString("boxman_humanoid_root"));
SoHAnimHumanoid61->setJoints(*SoHAnimJoint146);

SoHAnimJoint* SoHAnimJoint147 = new SoHAnimJoint();
SoHAnimJoint147->setUSE(QString("boxman_skullbase"));
SoHAnimHumanoid61->setJoints(*SoHAnimJoint147);

SoHAnimJoint* SoHAnimJoint148 = new SoHAnimJoint();
SoHAnimJoint148->setUSE(QString("boxman_vl5"));
SoHAnimHumanoid61->setJoints(*SoHAnimJoint148);

SoHAnimJoint* SoHAnimJoint149 = new SoHAnimJoint();
SoHAnimJoint149->setUSE(QString("boxman_l_ankle"));
SoHAnimHumanoid61->setJoints(*SoHAnimJoint149);

SoHAnimJoint* SoHAnimJoint150 = new SoHAnimJoint();
SoHAnimJoint150->setUSE(QString("boxman_r_ankle"));
SoHAnimHumanoid61->setJoints(*SoHAnimJoint150);

SoHAnimJoint* SoHAnimJoint151 = new SoHAnimJoint();
SoHAnimJoint151->setUSE(QString("boxman_l_elbow"));
SoHAnimHumanoid61->setJoints(*SoHAnimJoint151);

SoHAnimJoint* SoHAnimJoint152 = new SoHAnimJoint();
SoHAnimJoint152->setUSE(QString("boxman_r_elbow"));
SoHAnimHumanoid61->setJoints(*SoHAnimJoint152);

SoHAnimJoint* SoHAnimJoint153 = new SoHAnimJoint();
SoHAnimJoint153->setUSE(QString("boxman_l_hip"));
SoHAnimHumanoid61->setJoints(*SoHAnimJoint153);

SoHAnimJoint* SoHAnimJoint154 = new SoHAnimJoint();
SoHAnimJoint154->setUSE(QString("boxman_r_hip"));
SoHAnimHumanoid61->setJoints(*SoHAnimJoint154);

SoHAnimJoint* SoHAnimJoint155 = new SoHAnimJoint();
SoHAnimJoint155->setUSE(QString("boxman_l_knee"));
SoHAnimHumanoid61->setJoints(*SoHAnimJoint155);

SoHAnimJoint* SoHAnimJoint156 = new SoHAnimJoint();
SoHAnimJoint156->setUSE(QString("boxman_r_knee"));
SoHAnimHumanoid61->setJoints(*SoHAnimJoint156);

SoHAnimJoint* SoHAnimJoint157 = new SoHAnimJoint();
SoHAnimJoint157->setUSE(QString("boxman_l_midtarsal"));
SoHAnimHumanoid61->setJoints(*SoHAnimJoint157);

SoHAnimJoint* SoHAnimJoint158 = new SoHAnimJoint();
SoHAnimJoint158->setUSE(QString("boxman_r_midtarsal"));
SoHAnimHumanoid61->setJoints(*SoHAnimJoint158);

SoHAnimJoint* SoHAnimJoint159 = new SoHAnimJoint();
SoHAnimJoint159->setUSE(QString("boxman_l_shoulder"));
SoHAnimHumanoid61->setJoints(*SoHAnimJoint159);

SoHAnimJoint* SoHAnimJoint160 = new SoHAnimJoint();
SoHAnimJoint160->setUSE(QString("boxman_r_shoulder"));
SoHAnimHumanoid61->setJoints(*SoHAnimJoint160);

SoHAnimJoint* SoHAnimJoint161 = new SoHAnimJoint();
SoHAnimJoint161->setUSE(QString("boxman_l_wrist"));
SoHAnimHumanoid61->setJoints(*SoHAnimJoint161);

SoHAnimJoint* SoHAnimJoint162 = new SoHAnimJoint();
SoHAnimJoint162->setUSE(QString("boxman_r_wrist"));
SoHAnimHumanoid61->setJoints(*SoHAnimJoint162);

SoHAnimSegment* SoHAnimSegment163 = new SoHAnimSegment();
SoHAnimSegment163->setUSE(QString("boxman_l5"));
SoHAnimHumanoid61->setSegments(*SoHAnimSegment163);

SoHAnimSegment* SoHAnimSegment164 = new SoHAnimSegment();
SoHAnimSegment164->setUSE(QString("boxman_sacrum"));
SoHAnimHumanoid61->setSegments(*SoHAnimSegment164);

SoHAnimSegment* SoHAnimSegment165 = new SoHAnimSegment();
SoHAnimSegment165->setUSE(QString("boxman_skull"));
SoHAnimHumanoid61->setSegments(*SoHAnimSegment165);

SoHAnimSegment* SoHAnimSegment166 = new SoHAnimSegment();
SoHAnimSegment166->setUSE(QString("boxman_l_calf"));
SoHAnimHumanoid61->setSegments(*SoHAnimSegment166);

SoHAnimSegment* SoHAnimSegment167 = new SoHAnimSegment();
SoHAnimSegment167->setUSE(QString("boxman_r_calf"));
SoHAnimHumanoid61->setSegments(*SoHAnimSegment167);

SoHAnimSegment* SoHAnimSegment168 = new SoHAnimSegment();
SoHAnimSegment168->setUSE(QString("boxman_l_forearm"));
SoHAnimHumanoid61->setSegments(*SoHAnimSegment168);

SoHAnimSegment* SoHAnimSegment169 = new SoHAnimSegment();
SoHAnimSegment169->setUSE(QString("boxman_r_forearm"));
SoHAnimHumanoid61->setSegments(*SoHAnimSegment169);

SoHAnimSegment* SoHAnimSegment170 = new SoHAnimSegment();
SoHAnimSegment170->setUSE(QString("boxman_l_hand"));
SoHAnimHumanoid61->setSegments(*SoHAnimSegment170);

SoHAnimSegment* SoHAnimSegment171 = new SoHAnimSegment();
SoHAnimSegment171->setUSE(QString("boxman_r_hand"));
SoHAnimHumanoid61->setSegments(*SoHAnimSegment171);

SoHAnimSegment* SoHAnimSegment172 = new SoHAnimSegment();
SoHAnimSegment172->setUSE(QString("boxman_l_hindfoot"));
SoHAnimHumanoid61->setSegments(*SoHAnimSegment172);

SoHAnimSegment* SoHAnimSegment173 = new SoHAnimSegment();
SoHAnimSegment173->setUSE(QString("boxman_r_hindfoot"));
SoHAnimHumanoid61->setSegments(*SoHAnimSegment173);

SoHAnimSegment* SoHAnimSegment174 = new SoHAnimSegment();
SoHAnimSegment174->setUSE(QString("boxman_l_middistal"));
SoHAnimHumanoid61->setSegments(*SoHAnimSegment174);

SoHAnimSegment* SoHAnimSegment175 = new SoHAnimSegment();
SoHAnimSegment175->setUSE(QString("boxman_r_middistal"));
SoHAnimHumanoid61->setSegments(*SoHAnimSegment175);

SoHAnimSegment* SoHAnimSegment176 = new SoHAnimSegment();
SoHAnimSegment176->setUSE(QString("boxman_l_thigh"));
SoHAnimHumanoid61->setSegments(*SoHAnimSegment176);

SoHAnimSegment* SoHAnimSegment177 = new SoHAnimSegment();
SoHAnimSegment177->setUSE(QString("boxman_r_thigh"));
SoHAnimHumanoid61->setSegments(*SoHAnimSegment177);

SoHAnimSegment* SoHAnimSegment178 = new SoHAnimSegment();
SoHAnimSegment178->setUSE(QString("boxman_l_upperarm"));
SoHAnimHumanoid61->setSegments(*SoHAnimSegment178);

SoHAnimSegment* SoHAnimSegment179 = new SoHAnimSegment();
SoHAnimSegment179->setUSE(QString("boxman_r_upperarm"));
SoHAnimHumanoid61->setSegments(*SoHAnimSegment179);

SoHAnimSite* SoHAnimSite180 = new SoHAnimSite();
SoHAnimSite180->setUSE(QString("boxman_skull_tip"));
SoHAnimHumanoid61->setSites(*SoHAnimSite180);

SoHAnimSite* SoHAnimSite181 = new SoHAnimSite();
SoHAnimSite181->setUSE(QString("boxman_l_hand_tip"));
SoHAnimHumanoid61->setSites(*SoHAnimSite181);

SoHAnimSite* SoHAnimSite182 = new SoHAnimSite();
SoHAnimSite182->setUSE(QString("boxman_r_hand_tip"));
SoHAnimHumanoid61->setSites(*SoHAnimSite182);

SoHAnimSite* SoHAnimSite183 = new SoHAnimSite();
SoHAnimSite183->setUSE(QString("boxman_l_middistal_tip"));
SoHAnimHumanoid61->setSites(*SoHAnimSite183);

SoHAnimSite* SoHAnimSite184 = new SoHAnimSite();
SoHAnimSite184->setUSE(QString("boxman_r_middistal_tip"));
SoHAnimHumanoid61->setSites(*SoHAnimSite184);

SoHAnimSite* SoHAnimSite185 = new SoHAnimSite();
SoHAnimSite185->setDEF(QString("boxman_BoxMan_view"));
SoHAnimSite185->X3DNode::setName(QString("BoxMan_view"));
SoViewpoint* SoViewpoint186 = new SoViewpoint();
SoViewpoint186->setDEF(QString("Inclined_View"));
SoViewpoint186->setDescription(QString("Inclined View"));
SoViewpoint186->setPosition(new float[]{2.0,0.9,2.0});
SoViewpoint186->setOrientation(new float[]{0.0,1.0,0.0,0.78});
SoHAnimSite185->addChild(*SoViewpoint186);

SoViewpoint* SoViewpoint187 = new SoViewpoint();
SoViewpoint187->setDEF(QString("Front_View"));
SoViewpoint187->setDescription(QString("Front View"));
SoViewpoint187->setPosition(new float[]{0.0,1.0,3.0});
SoHAnimSite185->addChild(*SoViewpoint187);

SoViewpoint* SoViewpoint188 = new SoViewpoint();
SoViewpoint188->setDEF(QString("Right_View"));
SoViewpoint188->setDescription(QString("Right-side View"));
SoViewpoint188->setPosition(new float[]{-3.0,1.0,0.0});
SoViewpoint188->setOrientation(new float[]{0.0,1.0,0.0,-1.57});
SoHAnimSite185->addChild(*SoViewpoint188);

SoViewpoint* SoViewpoint189 = new SoViewpoint();
SoViewpoint189->setDEF(QString("Left_View"));
SoViewpoint189->setDescription(QString("Left-side View"));
SoViewpoint189->setPosition(new float[]{3.0,1.0,0.0});
SoViewpoint189->setOrientation(new float[]{0.0,1.0,0.0,1.57});
SoHAnimSite185->addChild(*SoViewpoint189);

SoViewpoint* SoViewpoint190 = new SoViewpoint();
SoViewpoint190->setDEF(QString("Top_View"));
SoViewpoint190->setDescription(QString("Top View"));
SoViewpoint190->setPosition(new float[]{0.0,3.0,0.0});
SoViewpoint190->setOrientation(new float[]{1.0,0.0,0.0,-1.57});
SoHAnimSite185->addChild(*SoViewpoint190);

SoHAnimHumanoid61->setViewpoints(*SoHAnimSite185);

SoCoordinate* SoCoordinate191 = new SoCoordinate();
SoCoordinate191->setDEF(QString("SKINCOORD"));
SoCoordinate191->setPoint(new float[]{-0.05,1.0,0.05,0.05,1.0,0.05,0.03,0.97,-0.1,-0.03,0.97,-0.1,0.03,0.94,-0.075,-0.03,0.94,-0.075,0.0,0.92,0.0,0.0,0.94,0.03,-0.12,1.06,0.05,0.12,1.06,0.05,0.12,1.06,-0.1,-0.12,1.06,-0.1,0.0456,0.9364,0.05,0.1456,0.9364,0.05,0.1456,0.9364,-0.05,0.0456,0.9364,-0.05,0.0456,0.9,0.05,0.1456,0.9,0.05,0.1456,0.9,-0.05,0.0456,0.9,-0.05,0.0456,0.8,0.05,0.1456,0.8,0.05,0.1456,0.8,-0.05,0.0456,0.8,-0.05,0.0456,0.7,0.05,0.1456,0.7,0.05,0.1456,0.7,-0.05,0.0456,0.7,-0.05,0.0456,0.6,0.05,0.1456,0.6,0.05,0.1456,0.6,-0.05,0.0456,0.6,-0.05,0.0456,0.55,0.05,0.1456,0.55,0.05,0.1456,0.55,-0.05,0.0456,0.55,-0.05,0.0456,0.52,0.05,0.1456,0.52,0.05,0.1456,0.52,-0.05,0.0456,0.52,-0.05,0.0456,0.5,0.05,0.1456,0.5,0.05,0.1456,0.5,-0.05,0.0456,0.5,-0.05,0.0454,0.43,0.045,0.1454,0.43,0.045,0.1454,0.43,-0.055,0.0454,0.43,-0.055,0.0452,0.36,0.04,0.1452,0.36,0.04,0.1452,0.36,-0.06,0.0452,0.36,-0.06,0.045,0.29,0.035,0.145,0.29,0.035,0.145,0.29,-0.065,0.045,0.29,-0.065,0.0448,0.21,0.03,0.1448,0.21,0.03,0.1448,0.21,-0.07,0.0448,0.21,-0.07,0.0446,0.1262,0.025,0.1446,0.1262,0.025,0.1446,0.1262,-0.075,0.0446,0.1262,-0.075,0.0446,0.0762,0.025,0.1446,0.0762,0.025,0.1446,0.0,-0.075,0.0446,0.0,-0.075,0.0446,0.0562,0.057,0.1446,0.0562,0.057,0.1446,0.0,0.057,0.0446,0.0,0.057,0.0446,0.0562,0.087,0.1446,0.0562,0.087,0.1446,0.0,0.087,0.0446,0.0,0.087,0.0446,0.0562,0.1924,0.1446,0.0562,0.1924,0.1446,0.0,0.1924,0.0446,0.0,0.1924,-0.0456,0.9364,0.05,-0.1456,0.9364,0.05,-0.1456,0.9364,-0.05,-0.0456,0.9364,-0.05,-0.0456,0.9,0.05,-0.1456,0.9,0.05,-0.1456,0.9,-0.05,-0.0456,0.9,-0.05,-0.0456,0.8,0.05,-0.1456,0.8,0.05,-0.1456,0.8,-0.05,-0.0456,0.8,-0.05,-0.0456,0.7,0.05,-0.1456,0.7,0.05,-0.1456,0.7,-0.05,-0.0456,0.7,-0.05,-0.0456,0.6,0.05,-0.1456,0.6,0.05,-0.1456,0.6,-0.05,-0.0456,0.6,-0.05,-0.0456,0.55,0.05,-0.1456,0.55,0.05,-0.1456,0.55,-0.05,-0.0456,0.55,-0.05,-0.0456,0.52,0.05,-0.1456,0.52,0.05,-0.1456,0.52,-0.05,-0.0456,0.52,-0.05,-0.0456,0.5,0.05,-0.1456,0.5,0.05,-0.1456,0.5,-0.05,-0.0456,0.5,-0.05,-0.0454,0.43,0.045,-0.1454,0.43,0.045,-0.1454,0.43,-0.055,-0.0454,0.43,-0.055,-0.0452,0.36,0.04,-0.1452,0.36,0.04,-0.1452,0.36,-0.06,-0.0452,0.36,-0.06,-0.045,0.29,0.035,-0.145,0.29,0.035,-0.145,0.29,-0.065,-0.045,0.29,-0.065,-0.0448,0.21,0.03,-0.1448,0.21,0.03,-0.1448,0.21,-0.07,-0.0448,0.21,-0.07,-0.0446,0.1262,0.025,-0.1446,0.1262,0.025,-0.1446,0.1262,-0.075,-0.0446,0.1262,-0.075,-0.0446,0.0762,0.025,-0.1446,0.0762,0.025,-0.1446,0.0,-0.075,-0.0446,0.0,-0.075,-0.0446,0.0562,0.057,-0.1446,0.0562,0.057,-0.1446,0.0,0.057,-0.0446,0.0,0.057,-0.0446,0.0562,0.087,-0.1446,0.0562,0.087,-0.1446,0.0,0.087,-0.0446,0.0,0.087,-0.0446,0.0562,0.1924,-0.1446,0.0562,0.1924,-0.1446,0.0,0.1924,-0.0446,0.0,0.1924,-0.12,1.1,0.05,0.12,1.1,0.05,0.12,1.1,-0.1,-0.12,1.1,-0.1,-0.14,1.42,0.045,0.14,1.42,0.045,0.14,1.42,-0.09,-0.14,1.42,-0.09,-0.24,1.52,0.035,0.24,1.52,0.035,0.24,1.52,-0.09,-0.24,1.52,-0.09,-0.05,1.56,0.03,0.05,1.56,0.03,0.05,1.56,-0.06,-0.05,1.56,-0.06,-0.05,1.6,0.06,0.05,1.6,0.06,0.05,1.62,-0.03,-0.05,1.62,-0.03,-0.07,1.777,0.13,0.07,1.777,0.13,0.07,1.777,-0.03,-0.07,1.777,-0.03,-0.07,1.6,0.13,0.07,1.6,0.13,0.07,1.66,-0.03,-0.07,1.66,-0.03,0.16,1.42,0.015,0.24,1.5,0.015,0.24,1.5,-0.075,0.16,1.42,-0.075,0.17,1.18,-0.025,0.23,1.18,-0.025,0.23,1.18,-0.085,0.17,1.18,-0.085,0.17,1.14,-0.025,0.23,1.14,-0.025,0.23,1.14,-0.085,0.17,1.14,-0.085,0.18,0.91,-0.05,0.22,0.91,-0.05,0.22,0.91,-0.09,0.18,0.91,-0.09,0.18,0.87,-0.02,0.22,0.87,-0.02,0.22,0.87,-0.1,0.18,0.87,-0.1,0.18,0.6976,-0.02,0.22,0.6976,-0.02,0.22,0.6976,-0.1,0.18,0.6976,-0.1,-0.16,1.42,0.015,-0.24,1.5,0.015,-0.24,1.5,-0.075,-0.16,1.42,-0.075,-0.17,1.18,-0.025,-0.23,1.18,-0.025,-0.23,1.18,-0.085,-0.17,1.18,-0.085,-0.17,1.14,-0.025,-0.23,1.14,-0.025,-0.23,1.14,-0.085,-0.17,1.14,-0.085,-0.18,0.91,-0.05,-0.22,0.91,-0.05,-0.22,0.91,-0.09,-0.18,0.91,-0.09,-0.18,0.87,-0.02,-0.22,0.87,-0.02,-0.22,0.87,-0.1,-0.18,0.87,-0.1,-0.18,0.6976,-0.02,-0.22,0.6976,-0.02,-0.22,0.6976,-0.1,-0.18,0.6976,-0.1}, 672);
SoHAnimHumanoid61->setSkinCoord(*SoCoordinate191);

SoGroup* SoGroup192 = new SoGroup();
SoShape* SoShape193 = new SoShape();
SoShape193->setDEF(QString("TrouserSkin"));
SoVRMLAppearance* SoVRMLAppearance194 = new SoVRMLAppearance();
SoMaterial* SoMaterial195 = new SoMaterial();
SoMaterial195->setDiffuseColor(new float[]{0.0,0.0,1.0});
SoMaterial195->setTransparency(0.5);
SoVRMLAppearance194->addChild(*SoMaterial195);

SoShape193->addChild(*SoVRMLAppearance194);

SoIndexedFaceSet* SoIndexedFaceSet196 = new SoIndexedFaceSet();
SoIndexedFaceSet196->setCoordIndex(new int32_t[]{0,7,1,-1,8,0,1,-1,1,9,8,-1,10,2,3,-1,3,11,10,-1,2,4,5,-1,5,3,2,-1,4,6,5,-1,7,12,1,-1,1,12,13,-1,13,9,1,-1,9,13,14,-1,14,10,9,-1,10,14,15,-1,15,2,10,-1,12,7,6,-1,6,15,12,-1,15,6,4,-1,4,2,15,-1,0,80,7,-1,81,80,0,-1,0,8,81,-1,82,81,8,-1,8,11,82,-1,83,82,11,-1,11,3,83,-1,6,7,80,-1,80,83,6,-1,5,6,83,-1,83,3,5,-1,12,16,17,-1,17,13,12,-1,13,17,18,-1,18,14,13,-1,14,18,19,-1,19,15,14,-1,15,19,16,-1,16,12,15,-1,16,20,21,-1,21,17,16,-1,17,21,22,-1,22,18,17,-1,18,22,23,-1,23,19,18,-1,19,23,20,-1,20,16,19,-1,20,24,25,-1,25,21,20,-1,21,25,26,-1,26,22,21,-1,22,26,27,-1,27,23,22,-1,23,27,24,-1,24,20,23,-1,24,28,29,-1,29,25,24,-1,25,29,30,-1,30,26,25,-1,26,30,31,-1,31,27,26,-1,27,31,28,-1,28,24,27,-1,28,32,33,-1,33,29,28,-1,29,33,34,-1,34,30,29,-1,30,34,35,-1,35,31,30,-1,31,35,32,-1,32,28,31,-1,32,36,37,-1,37,33,32,-1,33,37,38,-1,38,34,33,-1,34,38,39,-1,39,35,34,-1,35,39,36,-1,36,32,35,-1,36,40,41,-1,41,37,36,-1,37,41,42,-1,42,38,37,-1,38,42,43,-1,43,39,38,-1,39,43,40,-1,40,36,39,-1,40,44,45,-1,45,41,40,-1,41,45,46,-1,46,42,41,-1,42,46,47,-1,47,43,42,-1,43,47,44,-1,44,40,43,-1,44,48,49,-1,49,45,44,-1,45,49,50,-1,50,46,45,-1,46,50,51,-1,51,47,46,-1,47,51,48,-1,48,44,47,-1,48,52,53,-1,53,49,48,-1,49,53,54,-1,54,50,49,-1,50,54,55,-1,55,51,50,-1,51,55,52,-1,52,48,51,-1,52,56,57,-1,57,53,52,-1,53,57,58,-1,58,54,53,-1,54,58,59,-1,59,55,54,-1,55,59,56,-1,56,52,55,-1,56,60,61,-1,61,57,56,-1,57,61,62,-1,62,58,57,-1,58,62,63,-1,63,59,58,-1,59,63,60,-1,60,56,59,-1,81,85,84,-1,84,80,81,-1,82,86,85,-1,85,81,82,-1,83,87,86,-1,86,82,83,-1,80,84,87,-1,87,83,80,-1,85,89,88,-1,88,84,85,-1,86,90,89,-1,89,85,86,-1,87,91,90,-1,90,86,87,-1,84,88,91,-1,91,87,84,-1,89,93,92,-1,92,88,89,-1,90,94,93,-1,93,89,90,-1,91,95,94,-1,94,90,91,-1,88,92,95,-1,95,91,88,-1,93,97,96,-1,96,92,93,-1,94,98,97,-1,97,93,94,-1,95,99,98,-1,98,94,95,-1,92,96,99,-1,99,95,92,-1,97,101,100,-1,100,96,97,-1,98,102,101,-1,101,97,98,-1,99,103,102,-1,102,98,99,-1,96,100,103,-1,103,99,96,-1,101,105,104,-1,104,100,101,-1,102,106,105,-1,105,101,102,-1,103,107,106,-1,106,102,103,-1,100,104,107,-1,107,103,100,-1,105,109,108,-1,108,104,105,-1,106,110,109,-1,109,105,106,-1,107,111,110,-1,110,106,107,-1,104,108,111,-1,111,107,104,-1,109,113,112,-1,112,108,109,-1,110,114,113,-1,113,109,110,-1,111,115,114,-1,114,110,111,-1,108,112,115,-1,115,111,108,-1,113,117,116,-1,116,112,113,-1,114,118,117,-1,117,113,114,-1,115,119,118,-1,118,114,115,-1,112,116,119,-1,119,115,112,-1,117,121,120,-1,120,116,117,-1,118,122,121,-1,121,117,118,-1,119,123,122,-1,122,118,119,-1,116,120,123,-1,123,119,116,-1,121,125,124,-1,124,120,121,-1,122,126,125,-1,125,121,122,-1,123,127,126,-1,126,122,123,-1,120,124,127,-1,127,123,120,-1,125,129,128,-1,128,124,125,-1,126,130,129,-1,129,125,126,-1,127,131,130,-1,130,126,127,-1,124,128,131,-1,131,127,124,-1}, 888);
SoCoordinate* SoCoordinate197 = new SoCoordinate();
SoCoordinate197->setUSE(QString("SKINCOORD"));
SoIndexedFaceSet196->setCoord(*SoCoordinate197);

SoShape193->setGeometry(*SoIndexedFaceSet196);

SoGroup192->addChild(*SoShape193);

SoShape* SoShape198 = new SoShape();
SoShape198->setDEF(QString("ShoeSkin"));
SoVRMLAppearance* SoVRMLAppearance199 = new SoVRMLAppearance();
SoMaterial* SoMaterial200 = new SoMaterial();
SoMaterial200->setDiffuseColor(new float[]{0.0,0.0,0.0});
SoMaterial200->setTransparency(0.5);
SoVRMLAppearance199->addChild(*SoMaterial200);

SoShape198->addChild(*SoVRMLAppearance199);

SoIndexedFaceSet* SoIndexedFaceSet201 = new SoIndexedFaceSet();
SoIndexedFaceSet201->setCoordIndex(new int32_t[]{60,64,65,-1,65,61,60,-1,61,65,66,-1,66,62,61,-1,62,66,67,-1,67,63,62,-1,63,67,64,-1,64,60,63,-1,64,68,69,-1,69,65,64,-1,65,69,70,-1,70,66,65,-1,66,70,71,-1,71,67,66,-1,67,71,68,-1,68,64,67,-1,68,72,73,-1,73,69,68,-1,69,73,74,-1,74,70,69,-1,70,74,75,-1,75,71,70,-1,71,75,72,-1,72,68,71,-1,72,76,77,-1,77,73,72,-1,73,77,78,-1,78,74,73,-1,74,78,79,-1,79,75,74,-1,75,79,76,-1,76,72,75,-1,76,79,78,-1,78,77,76,-1,129,133,132,-1,132,128,129,-1,130,134,133,-1,133,129,130,-1,131,135,134,-1,134,130,131,-1,128,132,135,-1,135,131,128,-1,133,137,136,-1,136,132,133,-1,134,138,137,-1,137,133,134,-1,135,139,138,-1,138,134,135,-1,132,136,139,-1,139,135,132,-1,137,141,140,-1,140,136,137,-1,138,142,141,-1,141,137,138,-1,139,143,142,-1,142,138,139,-1,136,140,143,-1,143,139,136,-1,141,145,144,-1,144,140,141,-1,142,146,145,-1,145,141,142,-1,143,147,146,-1,146,142,143,-1,140,144,147,-1,147,143,140,-1,145,146,147,-1,147,144,145,-1}, 272);
SoCoordinate* SoCoordinate202 = new SoCoordinate();
SoCoordinate202->setUSE(QString("SKINCOORD"));
SoIndexedFaceSet201->setCoord(*SoCoordinate202);

SoShape198->setGeometry(*SoIndexedFaceSet201);

SoGroup192->addChild(*SoShape198);

SoShape* SoShape203 = new SoShape();
SoShape203->setDEF(QString("ShirtSkin"));
SoVRMLAppearance* SoVRMLAppearance204 = new SoVRMLAppearance();
SoMaterial* SoMaterial205 = new SoMaterial();
SoMaterial205->setDiffuseColor(new float[]{1.0,1.0,0.0});
SoMaterial205->setTransparency(0.5);
SoVRMLAppearance204->addChild(*SoMaterial205);

SoShape203->addChild(*SoVRMLAppearance204);

SoIndexedFaceSet* SoIndexedFaceSet206 = new SoIndexedFaceSet();
SoIndexedFaceSet206->setCoordIndex(new int32_t[]{148,8,9,-1,9,149,148,-1,149,9,10,-1,10,150,149,-1,150,10,11,-1,11,151,150,-1,151,11,8,-1,8,148,151,-1,152,148,149,-1,149,153,152,-1,153,149,150,-1,150,154,153,-1,154,150,151,-1,151,155,154,-1,155,151,148,-1,148,152,155,-1,156,152,153,-1,153,157,156,-1,158,154,155,-1,155,159,158,-1,160,156,157,-1,157,161,160,-1,161,157,158,-1,158,162,161,-1,162,158,159,-1,159,163,162,-1,163,159,156,-1,156,160,163,-1,164,160,161,-1,161,165,164,-1,165,161,162,-1,162,166,165,-1,166,162,163,-1,163,167,166,-1,167,163,160,-1,160,164,167,-1,153,176,177,-1,177,157,153,-1,157,177,178,-1,178,158,157,-1,158,178,179,-1,179,154,158,-1,154,179,176,-1,176,153,154,-1,176,180,181,-1,181,177,176,-1,177,181,182,-1,182,178,177,-1,178,182,183,-1,183,179,178,-1,179,183,180,-1,180,176,179,-1,180,184,185,-1,185,181,180,-1,181,185,186,-1,186,182,181,-1,182,186,187,-1,187,183,182,-1,183,187,184,-1,184,180,183,-1,184,188,189,-1,189,185,184,-1,185,189,190,-1,190,186,185,-1,186,190,191,-1,191,187,186,-1,187,191,188,-1,188,184,187,-1,152,156,201,-1,201,200,152,-1,156,159,202,-1,202,201,156,-1,159,155,203,-1,203,202,159,-1,155,152,200,-1,200,203,155,-1,201,205,204,-1,204,200,201,-1,202,206,205,-1,205,201,202,-1,203,207,206,-1,206,202,203,-1,200,204,207,-1,207,203,200,-1,205,209,208,-1,208,204,205,-1,206,210,209,-1,209,205,206,-1,207,211,210,-1,210,206,207,-1,204,208,211,-1,211,207,204,-1,209,213,212,-1,212,208,209,-1,210,214,213,-1,213,209,210,-1,211,215,214,-1,214,210,211,-1,208,212,215,-1,215,211,208,-1}, 400);
SoCoordinate* SoCoordinate207 = new SoCoordinate();
SoCoordinate207->setUSE(QString("SKINCOORD"));
SoIndexedFaceSet206->setCoord(*SoCoordinate207);

SoShape203->setGeometry(*SoIndexedFaceSet206);

SoGroup192->addChild(*SoShape203);

SoShape* SoShape208 = new SoShape();
SoShape208->setDEF(QString("HeadHandsFleshToneSkin"));
SoVRMLAppearance* SoVRMLAppearance209 = new SoVRMLAppearance();
SoMaterial* SoMaterial210 = new SoMaterial();
SoMaterial210->setDiffuseColor(new float[]{1.0,0.75,0.75});
SoMaterial210->setTransparency(0.5);
SoVRMLAppearance209->addChild(*SoMaterial210);

SoShape208->addChild(*SoVRMLAppearance209);

SoIndexedFaceSet* SoIndexedFaceSet211 = new SoIndexedFaceSet();
SoIndexedFaceSet211->setCoordIndex(new int32_t[]{172,164,165,-1,165,173,172,-1,173,165,166,-1,166,174,173,-1,174,166,167,-1,167,175,174,-1,175,167,164,-1,164,172,175,-1,168,172,173,-1,173,169,168,-1,169,173,174,-1,174,170,169,-1,170,174,175,-1,175,171,170,-1,171,175,172,-1,172,168,171,-1,171,168,169,-1,169,170,171,-1,188,192,193,-1,193,189,188,-1,189,193,194,-1,194,190,189,-1,190,194,195,-1,195,191,190,-1,191,195,192,-1,192,188,191,-1,192,196,197,-1,197,193,192,-1,193,197,198,-1,198,194,193,-1,194,198,199,-1,199,195,194,-1,195,199,196,-1,196,192,195,-1,196,199,198,-1,198,197,196,-1,213,217,216,-1,216,212,213,-1,214,218,217,-1,217,213,214,-1,215,219,218,-1,218,214,215,-1,212,216,219,-1,219,215,212,-1,217,221,220,-1,220,216,217,-1,218,222,221,-1,221,217,218,-1,219,223,222,-1,222,218,219,-1,216,220,223,-1,223,219,216,-1,221,222,223,-1,223,220,221,-1}, 216);
SoCoordinate* SoCoordinate212 = new SoCoordinate();
SoCoordinate212->setUSE(QString("SKINCOORD"));
SoIndexedFaceSet211->setCoord(*SoCoordinate212);

SoShape208->setGeometry(*SoIndexedFaceSet211);

SoGroup192->addChild(*SoShape208);

SoShape* SoShape213 = new SoShape();
SoShape213->setDEF(QString("SkinLines"));
SoVRMLAppearance* SoVRMLAppearance214 = new SoVRMLAppearance();
SoMaterial* SoMaterial215 = new SoMaterial();
SoMaterial215->setDiffuseColor(new float[]{0.0,0.0,0.0});
SoVRMLAppearance214->addChild(*SoMaterial215);

SoShape213->addChild(*SoVRMLAppearance214);

SoIndexedLineSet* SoIndexedLineSet216 = new SoIndexedLineSet();
SoIndexedLineSet216->setCoordIndex(new int32_t[]{0,7,1,-1,8,0,1,-1,1,9,8,-1,10,2,3,-1,3,11,10,-1,2,4,5,-1,5,3,2,-1,4,6,5,-1,7,12,1,-1,1,12,13,-1,13,9,1,-1,9,13,14,-1,14,10,9,-1,10,14,15,-1,15,2,10,-1,12,7,6,-1,6,15,12,-1,15,6,4,-1,4,2,15,-1,0,80,7,-1,81,80,0,-1,0,8,81,-1,82,81,8,-1,8,11,82,-1,83,82,11,-1,11,3,83,-1,6,7,80,-1,80,83,6,-1,5,6,83,-1,83,3,5,-1,12,16,17,-1,17,13,12,-1,13,17,18,-1,18,14,13,-1,14,18,19,-1,19,15,14,-1,15,19,16,-1,16,12,15,-1,16,20,21,-1,21,17,16,-1,17,21,22,-1,22,18,17,-1,18,22,23,-1,23,19,18,-1,19,23,20,-1,20,16,19,-1,20,24,25,-1,25,21,20,-1,21,25,26,-1,26,22,21,-1,22,26,27,-1,27,23,22,-1,23,27,24,-1,24,20,23,-1,24,28,29,-1,29,25,24,-1,25,29,30,-1,30,26,25,-1,26,30,31,-1,31,27,26,-1,27,31,28,-1,28,24,27,-1,28,32,33,-1,33,29,28,-1,29,33,34,-1,34,30,29,-1,30,34,35,-1,35,31,30,-1,31,35,32,-1,32,28,31,-1,32,36,37,-1,37,33,32,-1,33,37,38,-1,38,34,33,-1,34,38,39,-1,39,35,34,-1,35,39,36,-1,36,32,35,-1,36,40,41,-1,41,37,36,-1,37,41,42,-1,42,38,37,-1,38,42,43,-1,43,39,38,-1,39,43,40,-1,40,36,39,-1,40,44,45,-1,45,41,40,-1,41,45,46,-1,46,42,41,-1,42,46,47,-1,47,43,42,-1,43,47,44,-1,44,40,43,-1,44,48,49,-1,49,45,44,-1,45,49,50,-1,50,46,45,-1,46,50,51,-1,51,47,46,-1,47,51,48,-1,48,44,47,-1,48,52,53,-1,53,49,48,-1,49,53,54,-1,54,50,49,-1,50,54,55,-1,55,51,50,-1,51,55,52,-1,52,48,51,-1,52,56,57,-1,57,53,52,-1,53,57,58,-1,58,54,53,-1,54,58,59,-1,59,55,54,-1,55,59,56,-1,56,52,55,-1,56,60,61,-1,61,57,56,-1,57,61,62,-1,62,58,57,-1,58,62,63,-1,63,59,58,-1,59,63,60,-1,60,56,59,-1,81,85,84,-1,84,80,81,-1,82,86,85,-1,85,81,82,-1,83,87,86,-1,86,82,83,-1,80,84,87,-1,87,83,80,-1,85,89,88,-1,88,84,85,-1,86,90,89,-1,89,85,86,-1,87,91,90,-1,90,86,87,-1,84,88,91,-1,91,87,84,-1,89,93,92,-1,92,88,89,-1,90,94,93,-1,93,89,90,-1,91,95,94,-1,94,90,91,-1,88,92,95,-1,95,91,88,-1,93,97,96,-1,96,92,93,-1,94,98,97,-1,97,93,94,-1,95,99,98,-1,98,94,95,-1,92,96,99,-1,99,95,92,-1,97,101,100,-1,100,96,97,-1,98,102,101,-1,101,97,98,-1,99,103,102,-1,102,98,99,-1,96,100,103,-1,103,99,96,-1,101,105,104,-1,104,100,101,-1,102,106,105,-1,105,101,102,-1,103,107,106,-1,106,102,103,-1,100,104,107,-1,107,103,100,-1,105,109,108,-1,108,104,105,-1,106,110,109,-1,109,105,106,-1,107,111,110,-1,110,106,107,-1,104,108,111,-1,111,107,104,-1,109,113,112,-1,112,108,109,-1,110,114,113,-1,113,109,110,-1,111,115,114,-1,114,110,111,-1,108,112,115,-1,115,111,108,-1,113,117,116,-1,116,112,113,-1,114,118,117,-1,117,113,114,-1,115,119,118,-1,118,114,115,-1,112,116,119,-1,119,115,112,-1,117,121,120,-1,120,116,117,-1,118,122,121,-1,121,117,118,-1,119,123,122,-1,122,118,119,-1,116,120,123,-1,123,119,116,-1,121,125,124,-1,124,120,121,-1,122,126,125,-1,125,121,122,-1,123,127,126,-1,126,122,123,-1,120,124,127,-1,127,123,120,-1,125,129,128,-1,128,124,125,-1,126,130,129,-1,129,125,126,-1,127,131,130,-1,130,126,127,-1,124,128,131,-1,131,127,124,-1,60,64,65,-1,65,61,60,-1,61,65,66,-1,66,62,61,-1,62,66,67,-1,67,63,62,-1,63,67,64,-1,64,60,63,-1,64,68,69,-1,69,65,64,-1,65,69,70,-1,70,66,65,-1,66,70,71,-1,71,67,66,-1,67,71,68,-1,68,64,67,-1,68,72,73,-1,73,69,68,-1,69,73,74,-1,74,70,69,-1,70,74,75,-1,75,71,70,-1,71,75,72,-1,72,68,71,-1,72,76,77,-1,77,73,72,-1,73,77,78,-1,78,74,73,-1,74,78,79,-1,79,75,74,-1,75,79,76,-1,76,72,75,-1,76,79,78,-1,78,77,76,-1,129,133,132,-1,132,128,129,-1,130,134,133,-1,133,129,130,-1,131,135,134,-1,134,130,131,-1,128,132,135,-1,135,131,128,-1,133,137,136,-1,136,132,133,-1,134,138,137,-1,137,133,134,-1,135,139,138,-1,138,134,135,-1,132,136,139,-1,139,135,132,-1,137,141,140,-1,140,136,137,-1,138,142,141,-1,141,137,138,-1,139,143,142,-1,142,138,139,-1,136,140,143,-1,143,139,136,-1,141,145,144,-1,144,140,141,-1,142,146,145,-1,145,141,142,-1,143,147,146,-1,146,142,143,-1,140,144,147,-1,147,143,140,-1,145,146,147,-1,147,144,145,-1,148,8,9,-1,9,149,148,-1,149,9,10,-1,10,150,149,-1,150,10,11,-1,11,151,150,-1,151,11,8,-1,8,148,151,-1,152,148,149,-1,149,153,152,-1,153,149,150,-1,150,154,153,-1,154,150,151,-1,151,155,154,-1,155,151,148,-1,148,152,155,-1,156,152,153,-1,153,157,156,-1,158,154,155,-1,155,159,158,-1,160,156,157,-1,157,161,160,-1,161,157,158,-1,158,162,161,-1,162,158,159,-1,159,163,162,-1,163,159,156,-1,156,160,163,-1,164,160,161,-1,161,165,164,-1,165,161,162,-1,162,166,165,-1,166,162,163,-1,163,167,166,-1,167,163,160,-1,160,164,167,-1,153,176,177,-1,177,157,153,-1,157,177,178,-1,178,158,157,-1,158,178,179,-1,179,154,158,-1,154,179,176,-1,176,153,154,-1,176,180,181,-1,181,177,176,-1,177,181,182,-1,182,178,177,-1,178,182,183,-1,183,179,178,-1,179,183,180,-1,180,176,179,-1,180,184,185,-1,185,181,180,-1,181,185,186,-1,186,182,181,-1,182,186,187,-1,187,183,182,-1,183,187,184,-1,184,180,183,-1,184,188,189,-1,189,185,184,-1,185,189,190,-1,190,186,185,-1,186,190,191,-1,191,187,186,-1,187,191,188,-1,188,184,187,-1,152,156,201,-1,201,200,152,-1,156,159,202,-1,202,201,156,-1,159,155,203,-1,203,202,159,-1,155,152,200,-1,200,203,155,-1,201,205,204,-1,204,200,201,-1,202,206,205,-1,205,201,202,-1,203,207,206,-1,206,202,203,-1,200,204,207,-1,207,203,200,-1,205,209,208,-1,208,204,205,-1,206,210,209,-1,209,205,206,-1,207,211,210,-1,210,206,207,-1,204,208,211,-1,211,207,204,-1,209,213,212,-1,212,208,209,-1,210,214,213,-1,213,209,210,-1,211,215,214,-1,214,210,211,-1,208,212,215,-1,215,211,208,-1,172,164,165,-1,165,173,172,-1,173,165,166,-1,166,174,173,-1,174,166,167,-1,167,175,174,-1,175,167,164,-1,164,172,175,-1,168,172,173,-1,173,169,168,-1,169,173,174,-1,174,170,169,-1,170,174,175,-1,175,171,170,-1,171,175,172,-1,172,168,171,-1,171,168,169,-1,169,170,171,-1,188,192,193,-1,193,189,188,-1,189,193,194,-1,194,190,189,-1,190,194,195,-1,195,191,190,-1,191,195,192,-1,192,188,191,-1,192,196,197,-1,197,193,192,-1,193,197,198,-1,198,194,193,-1,194,198,199,-1,199,195,194,-1,195,199,196,-1,196,192,195,-1,196,199,198,-1,198,197,196,-1,213,217,216,-1,216,212,213,-1,214,218,217,-1,217,213,214,-1,215,219,218,-1,218,214,215,-1,212,216,219,-1,219,215,212,-1,217,221,220,-1,220,216,217,-1,218,222,221,-1,221,217,218,-1,219,223,222,-1,222,218,219,-1,216,220,223,-1,223,219,216,-1,221,222,223,-1,223,220,221,-1}, 1776);
SoCoordinate* SoCoordinate217 = new SoCoordinate();
SoCoordinate217->setUSE(QString("SKINCOORD"));
SoIndexedLineSet216->setCoord(*SoCoordinate217);

SoShape213->setGeometry(*SoIndexedLineSet216);

SoGroup192->addChild(*SoShape213);

SoHAnimHumanoid61->setSkin(SoGroup192);

SoNode32->addChild(*SoHAnimHumanoid61);

SoProtoInstance* SoProtoInstance218 = new SoProtoInstance();
SoProtoInstance218->setDEF(QString("ANIMATOR"));
SoProtoInstance218->setName(QString("LOA1_WalkAnimation"));
SoNode32->addChild(*SoProtoInstance218);

SoScript* SoScript219 = new SoScript();
SoScript219->setDEF(QString("ENGINE"));
SoScript219->setUrl(new QString[]{QString("BoxMan.js"), QString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/BoxMan.js")}, 2);
SoScript219->setDirectOutput(true);
Sofield* Sofield220 = new Sofield();
Sofield220->setAccessType(QString("inputOnly"));
Sofield220->setType(QString("SFRotation"));
Sofield220->setName(QString("update"));
SoScript219->addChild(*Sofield220);

Sofield* Sofield221 = new Sofield();
Sofield221->setAccessType(QString("initializeOnly"));
Sofield221->setType(QString("SFNode"));
Sofield221->setName(QString("humanoid"));
SoHAnimHumanoid* SoHAnimHumanoid222 = new SoHAnimHumanoid();
SoHAnimHumanoid222->setUSE(QString("boxman_Humanoid"));
Sofield221->addChild(*SoHAnimHumanoid222);

SoScript219->addChild(*Sofield221);

Sofield* Sofield223 = new Sofield();
Sofield223->setAccessType(QString("initializeOnly"));
Sofield223->setType(QString("MFVec3f"));
Sofield223->setName(QString("coordList"));
SoScript219->addChild(*Sofield223);

Sofield* Sofield224 = new Sofield();
Sofield224->setAccessType(QString("initializeOnly"));
Sofield224->setType(QString("SFNode"));
Sofield224->setName(QString("joint"));
SoScript219->addChild(*Sofield224);

Sofield* Sofield225 = new Sofield();
Sofield225->setAccessType(QString("initializeOnly"));
Sofield225->setType(QString("SFVec3f"));
Sofield225->setName(QString("translation"));
SoScript219->addChild(*Sofield225);

Sofield* Sofield226 = new Sofield();
Sofield226->setAccessType(QString("initializeOnly"));
Sofield226->setType(QString("SFRotation"));
Sofield226->setName(QString("rotation"));
SoScript219->addChild(*Sofield226);

Sofield* Sofield227 = new Sofield();
Sofield227->setAccessType(QString("initializeOnly"));
Sofield227->setType(QString("SFVec3f"));
Sofield227->setName(QString("scale"));
Sofield227->setValue(QString("1 1 1"));
SoScript219->addChild(*Sofield227);

SoNode32->addChild(*SoScript219);

SoROUTE* SoROUTE228 = new SoROUTE();
SoROUTE228->setFromNode(QString("ANIMATOR"));
SoROUTE228->setFromField(QString("HumanoidRoot_translation_changed"));
SoROUTE228->setToNode(QString("boxman_humanoid_root"));
SoROUTE228->setToField(QString("set_translation"));
SoNode32->addChild(*SoROUTE228);

SoROUTE* SoROUTE229 = new SoROUTE();
SoROUTE229->setFromNode(QString("ANIMATOR"));
SoROUTE229->setFromField(QString("HumanoidRoot_rotation_changed"));
SoROUTE229->setToNode(QString("boxman_humanoid_root"));
SoROUTE229->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE229);

SoROUTE* SoROUTE230 = new SoROUTE();
SoROUTE230->setFromNode(QString("ANIMATOR"));
SoROUTE230->setFromField(QString("l_hip_rotation_changed"));
SoROUTE230->setToNode(QString("boxman_l_hip"));
SoROUTE230->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE230);

SoROUTE* SoROUTE231 = new SoROUTE();
SoROUTE231->setFromNode(QString("ANIMATOR"));
SoROUTE231->setFromField(QString("l_knee_rotation_changed"));
SoROUTE231->setToNode(QString("boxman_l_knee"));
SoROUTE231->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE231);

SoROUTE* SoROUTE232 = new SoROUTE();
SoROUTE232->setFromNode(QString("ANIMATOR"));
SoROUTE232->setFromField(QString("l_ankle_rotation_changed"));
SoROUTE232->setToNode(QString("boxman_l_ankle"));
SoROUTE232->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE232);

SoROUTE* SoROUTE233 = new SoROUTE();
SoROUTE233->setFromNode(QString("ANIMATOR"));
SoROUTE233->setFromField(QString("l_midtarsal_rotation_changed"));
SoROUTE233->setToNode(QString("boxman_l_midtarsal"));
SoROUTE233->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE233);

SoROUTE* SoROUTE234 = new SoROUTE();
SoROUTE234->setFromNode(QString("ANIMATOR"));
SoROUTE234->setFromField(QString("r_hip_rotation_changed"));
SoROUTE234->setToNode(QString("boxman_r_hip"));
SoROUTE234->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE234);

SoROUTE* SoROUTE235 = new SoROUTE();
SoROUTE235->setFromNode(QString("ANIMATOR"));
SoROUTE235->setFromField(QString("r_knee_rotation_changed"));
SoROUTE235->setToNode(QString("boxman_r_knee"));
SoROUTE235->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE235);

SoROUTE* SoROUTE236 = new SoROUTE();
SoROUTE236->setFromNode(QString("ANIMATOR"));
SoROUTE236->setFromField(QString("r_ankle_rotation_changed"));
SoROUTE236->setToNode(QString("boxman_r_ankle"));
SoROUTE236->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE236);

SoROUTE* SoROUTE237 = new SoROUTE();
SoROUTE237->setFromNode(QString("ANIMATOR"));
SoROUTE237->setFromField(QString("r_midtarsal_rotation_changed"));
SoROUTE237->setToNode(QString("boxman_r_midtarsal"));
SoROUTE237->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE237);

SoROUTE* SoROUTE238 = new SoROUTE();
SoROUTE238->setFromNode(QString("ANIMATOR"));
SoROUTE238->setFromField(QString("vl5_rotation_changed"));
SoROUTE238->setToNode(QString("boxman_vl5"));
SoROUTE238->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE238);

SoROUTE* SoROUTE239 = new SoROUTE();
SoROUTE239->setFromNode(QString("ANIMATOR"));
SoROUTE239->setFromField(QString("skullbase_rotation_changed"));
SoROUTE239->setToNode(QString("boxman_skullbase"));
SoROUTE239->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE239);

SoROUTE* SoROUTE240 = new SoROUTE();
SoROUTE240->setFromNode(QString("ANIMATOR"));
SoROUTE240->setFromField(QString("l_shoulder_rotation_changed"));
SoROUTE240->setToNode(QString("boxman_l_shoulder"));
SoROUTE240->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE240);

SoROUTE* SoROUTE241 = new SoROUTE();
SoROUTE241->setFromNode(QString("ANIMATOR"));
SoROUTE241->setFromField(QString("l_elbow_rotation_changed"));
SoROUTE241->setToNode(QString("boxman_l_elbow"));
SoROUTE241->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE241);

SoROUTE* SoROUTE242 = new SoROUTE();
SoROUTE242->setFromNode(QString("ANIMATOR"));
SoROUTE242->setFromField(QString("l_wrist_rotation_changed"));
SoROUTE242->setToNode(QString("boxman_l_wrist"));
SoROUTE242->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE242);

SoROUTE* SoROUTE243 = new SoROUTE();
SoROUTE243->setFromNode(QString("ANIMATOR"));
SoROUTE243->setFromField(QString("r_shoulder_rotation_changed"));
SoROUTE243->setToNode(QString("boxman_r_shoulder"));
SoROUTE243->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE243);

SoROUTE* SoROUTE244 = new SoROUTE();
SoROUTE244->setFromNode(QString("ANIMATOR"));
SoROUTE244->setFromField(QString("r_elbow_rotation_changed"));
SoROUTE244->setToNode(QString("boxman_r_elbow"));
SoROUTE244->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE244);

SoROUTE* SoROUTE245 = new SoROUTE();
SoROUTE245->setFromNode(QString("ANIMATOR"));
SoROUTE245->setFromField(QString("r_wrist_rotation_changed"));
SoROUTE245->setToNode(QString("boxman_r_wrist"));
SoROUTE245->setToField(QString("set_rotation"));
SoNode32->addChild(*SoROUTE245);

SoSceneManager0->setSceneGraph(*SoNode32);

return 0;
}
