
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
Someta* Someta2 = new Someta();
Someta2->setName(QString("title"));
Someta2->setContent(QString("LOA1_StandAnimation.x3d"));
Sohead1->addMeta(*Someta2);

Someta* Someta3 = new Someta();
Someta3->setName(QString("description"));
Someta3->setContent(QString("Humanoid animation prototype reusable by any Humanoid."));
Sohead1->addMeta(*Someta3);

Someta* Someta4 = new Someta();
Someta4->setName(QString("creator"));
Someta4->setContent(QString("Cindy Ballreich cindy@ballreich.net 3Name3D, Joe Williams, Don Brutzman"));
Sohead1->addMeta(*Someta4);

Someta* Someta5 = new Someta();
Someta5->setName(QString("rights"));
Someta5->setContent(QString("1997 3Name3D / Yglesias, Wallock, Divekar, Inc., all rights reserved."));
Sohead1->addMeta(*Someta5);

Someta* Someta6 = new Someta();
Someta6->setName(QString("translator"));
Someta6->setContent(QString("Ozan APAYDIN"));
Sohead1->addMeta(*Someta6);

Someta* Someta7 = new Someta();
Someta7->setName(QString("created"));
Someta7->setContent(QString("1 December 2001"));
Sohead1->addMeta(*Someta7);

Someta* Someta8 = new Someta();
Someta8->setName(QString("modified"));
Someta8->setContent(QString("23 May 2020"));
Sohead1->addMeta(*Someta8);

Someta* Someta9 = new Someta();
Someta9->setName(QString("TODO"));
Someta9->setContent(QString("consider adding eyeball animation"));
Sohead1->addMeta(*Someta9);

Someta* Someta10 = new Someta();
Someta10->setName(QString("reference"));
Someta10->setContent(QString("http://www.ballreich.net/vrml/HAnim/nancy_HAnim.wrl"));
Sohead1->addMeta(*Someta10);

Someta* Someta11 = new Someta();
Someta11->setName(QString("reference"));
Someta11->setContent(QString("http://www.HAnim.org"));
Sohead1->addMeta(*Someta11);

Someta* Someta12 = new Someta();
Someta12->setName(QString("reference"));
Someta12->setContent(QString("http://HAnim.org/Models"));
Sohead1->addMeta(*Someta12);

Someta* Someta13 = new Someta();
Someta13->setName(QString("reference"));
Someta13->setContent(QString("http://HAnim.org/Nodes"));
Sohead1->addMeta(*Someta13);

Someta* Someta14 = new Someta();
Someta14->setName(QString("subject"));
Someta14->setContent(QString("Nancy Stand Animation HAnim 2001"));
Sohead1->addMeta(*Someta14);

Someta* Someta15 = new Someta();
Someta15->setName(QString("identifier"));
Someta15->setContent(QString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/LOA1_StandAnimation.x3d"));
Sohead1->addMeta(*Someta15);

Someta* Someta16 = new Someta();
Someta16->setName(QString("generator"));
Someta16->setContent(QString("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"));
Sohead1->addMeta(*Someta16);

Someta* Someta17 = new Someta();
Someta17->setName(QString("license"));
Someta17->setContent(QString("../license.html"));
Sohead1->addMeta(*Someta17);

SoSceneManager0->setHead(*Sohead1);

SoNode* SoNode18 = new SoNode();
SoWorldInfo* SoWorldInfo19 = new SoWorldInfo();
SoWorldInfo19->setTitle(QString("LOA1_StandAnimation.x3d"));
SoNode18->addChild(*SoWorldInfo19);

SoProtoDeclare* SoProtoDeclare20 = new SoProtoDeclare();
SoProtoDeclare20->setName(QString("LOA1_StandAnimation"));
SoProtoInterface* SoProtoInterface21 = new SoProtoInterface();
Sofield* Sofield22 = new Sofield();
Sofield22->setName(QString("cycleInterval"));
Sofield22->setAccessType(QString("inputOutput"));
Sofield22->setType(QString("SFTime"));
Sofield22->setValue(QString("0.009999999776482582"));
SoProtoInterface21->addChild(*Sofield22);

Sofield* Sofield23 = new Sofield();
Sofield23->setName(QString("enabled"));
Sofield23->setAccessType(QString("inputOutput"));
Sofield23->setType(QString("SFBool"));
Sofield23->setValue(QString("true"));
SoProtoInterface21->addChild(*Sofield23);

Sofield* Sofield24 = new Sofield();
Sofield24->setName(QString("loop"));
Sofield24->setAccessType(QString("inputOutput"));
Sofield24->setType(QString("SFBool"));
Sofield24->setValue(QString("true"));
SoProtoInterface21->addChild(*Sofield24);

Sofield* Sofield25 = new Sofield();
Sofield25->setName(QString("startTime"));
Sofield25->setAccessType(QString("inputOutput"));
Sofield25->setType(QString("SFTime"));
Sofield25->setValue(QString("0"));
SoProtoInterface21->addChild(*Sofield25);

Sofield* Sofield26 = new Sofield();
Sofield26->setName(QString("stopTime"));
Sofield26->setAccessType(QString("inputOutput"));
Sofield26->setType(QString("SFTime"));
Sofield26->setValue(QString("-1"));
SoProtoInterface21->addChild(*Sofield26);

Sofield* Sofield27 = new Sofield();
Sofield27->setName(QString("fraction_changed"));
Sofield27->setAccessType(QString("outputOnly"));
Sofield27->setType(QString("SFFloat"));
SoProtoInterface21->addChild(*Sofield27);

Sofield* Sofield28 = new Sofield();
Sofield28->setName(QString("isActive"));
Sofield28->setAccessType(QString("outputOnly"));
Sofield28->setType(QString("SFBool"));
SoProtoInterface21->addChild(*Sofield28);

Sofield* Sofield29 = new Sofield();
Sofield29->setName(QString("HumanoidRoot_translation_changed"));
Sofield29->setAccessType(QString("outputOnly"));
Sofield29->setType(QString("SFVec3f"));
SoProtoInterface21->addChild(*Sofield29);

Sofield* Sofield30 = new Sofield();
Sofield30->setName(QString("HumanoidRoot_rotation_changed"));
Sofield30->setAccessType(QString("outputOnly"));
Sofield30->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield30);

Sofield* Sofield31 = new Sofield();
Sofield31->setName(QString("lower_body_rotation_changed"));
Sofield31->setAccessType(QString("outputOnly"));
Sofield31->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield31);

Sofield* Sofield32 = new Sofield();
Sofield32->setName(QString("l_hip_rotation_changed"));
Sofield32->setAccessType(QString("outputOnly"));
Sofield32->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield32);

Sofield* Sofield33 = new Sofield();
Sofield33->setName(QString("l_knee_rotation_changed"));
Sofield33->setAccessType(QString("outputOnly"));
Sofield33->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield33);

Sofield* Sofield34 = new Sofield();
Sofield34->setName(QString("l_ankle_rotation_changed"));
Sofield34->setAccessType(QString("outputOnly"));
Sofield34->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield34);

Sofield* Sofield35 = new Sofield();
Sofield35->setName(QString("l_midtarsal_rotation_changed"));
Sofield35->setAccessType(QString("outputOnly"));
Sofield35->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield35);

Sofield* Sofield36 = new Sofield();
Sofield36->setName(QString("r_hip_rotation_changed"));
Sofield36->setAccessType(QString("outputOnly"));
Sofield36->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield36);

Sofield* Sofield37 = new Sofield();
Sofield37->setName(QString("r_knee_rotation_changed"));
Sofield37->setAccessType(QString("outputOnly"));
Sofield37->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield37);

Sofield* Sofield38 = new Sofield();
Sofield38->setName(QString("r_ankle_rotation_changed"));
Sofield38->setAccessType(QString("outputOnly"));
Sofield38->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield38);

Sofield* Sofield39 = new Sofield();
Sofield39->setName(QString("r_midtarsal_rotation_changed"));
Sofield39->setAccessType(QString("outputOnly"));
Sofield39->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield39);

Sofield* Sofield40 = new Sofield();
Sofield40->setName(QString("vl5_rotation_changed"));
Sofield40->setAccessType(QString("outputOnly"));
Sofield40->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield40);

Sofield* Sofield41 = new Sofield();
Sofield41->setName(QString("skullbase_rotation_changed"));
Sofield41->setAccessType(QString("outputOnly"));
Sofield41->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield41);

Sofield* Sofield42 = new Sofield();
Sofield42->setName(QString("l_shoulder_rotation_changed"));
Sofield42->setAccessType(QString("outputOnly"));
Sofield42->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield42);

Sofield* Sofield43 = new Sofield();
Sofield43->setName(QString("l_elbow_rotation_changed"));
Sofield43->setAccessType(QString("outputOnly"));
Sofield43->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield43);

Sofield* Sofield44 = new Sofield();
Sofield44->setName(QString("l_wrist_rotation_changed"));
Sofield44->setAccessType(QString("outputOnly"));
Sofield44->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield44);

Sofield* Sofield45 = new Sofield();
Sofield45->setName(QString("r_shoulder_rotation_changed"));
Sofield45->setAccessType(QString("outputOnly"));
Sofield45->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield45);

Sofield* Sofield46 = new Sofield();
Sofield46->setName(QString("r_elbow_rotation_changed"));
Sofield46->setAccessType(QString("outputOnly"));
Sofield46->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield46);

Sofield* Sofield47 = new Sofield();
Sofield47->setName(QString("r_wrist_rotation_changed"));
Sofield47->setAccessType(QString("outputOnly"));
Sofield47->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield47);

SoProtoDeclare20->addChild(*SoProtoInterface21);

SoProtoBody* SoProtoBody48 = new SoProtoBody();
SoGroup* SoGroup49 = new SoGroup();
SoTimeSensor* SoTimeSensor50 = new SoTimeSensor();
SoTimeSensor50->setDEF(QString("TIMER"));
SoIS* SoIS51 = new SoIS();
Soconnect* Soconnect52 = new Soconnect();
Soconnect52->setNodeField(QString("cycleInterval"));
Soconnect52->setProtoField(QString("cycleInterval"));
SoIS51->addChild(*Soconnect52);

Soconnect* Soconnect53 = new Soconnect();
Soconnect53->setNodeField(QString("enabled"));
Soconnect53->setProtoField(QString("enabled"));
SoIS51->addChild(*Soconnect53);

Soconnect* Soconnect54 = new Soconnect();
Soconnect54->setNodeField(QString("loop"));
Soconnect54->setProtoField(QString("loop"));
SoIS51->addChild(*Soconnect54);

Soconnect* Soconnect55 = new Soconnect();
Soconnect55->setNodeField(QString("startTime"));
Soconnect55->setProtoField(QString("startTime"));
SoIS51->addChild(*Soconnect55);

Soconnect* Soconnect56 = new Soconnect();
Soconnect56->setNodeField(QString("stopTime"));
Soconnect56->setProtoField(QString("stopTime"));
SoIS51->addChild(*Soconnect56);

Soconnect* Soconnect57 = new Soconnect();
Soconnect57->setNodeField(QString("fraction_changed"));
Soconnect57->setProtoField(QString("fraction_changed"));
SoIS51->addChild(*Soconnect57);

Soconnect* Soconnect58 = new Soconnect();
Soconnect58->setNodeField(QString("isActive"));
Soconnect58->setProtoField(QString("isActive"));
SoIS51->addChild(*Soconnect58);

SoTimeSensor50->addChild(*SoIS51);

SoGroup49->addChild(*SoTimeSensor50);

SoPositionInterpolator* SoPositionInterpolator59 = new SoPositionInterpolator();
SoPositionInterpolator59->setDEF(QString("HUMANOIDROOT_POSITION_ANIMATOR"));
SoPositionInterpolator59->setKey(new float[]{0.0,1.0}, 2);
SoPositionInterpolator59->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0}, 6);
SoIS* SoIS60 = new SoIS();
Soconnect* Soconnect61 = new Soconnect();
Soconnect61->setNodeField(QString("value_changed"));
Soconnect61->setProtoField(QString("HumanoidRoot_translation_changed"));
SoIS60->addChild(*Soconnect61);

SoPositionInterpolator59->addChild(*SoIS60);

SoGroup49->addChild(*SoPositionInterpolator59);

SoOrientationInterpolator* SoOrientationInterpolator62 = new SoOrientationInterpolator();
SoOrientationInterpolator62->setDEF(QString("HUMANOIDROOT_ANIMATOR"));
SoOrientationInterpolator62->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator62->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 8);
SoIS* SoIS63 = new SoIS();
Soconnect* Soconnect64 = new Soconnect();
Soconnect64->setNodeField(QString("value_changed"));
Soconnect64->setProtoField(QString("HumanoidRoot_rotation_changed"));
SoIS63->addChild(*Soconnect64);

SoOrientationInterpolator62->addChild(*SoIS63);

SoGroup49->addChild(*SoOrientationInterpolator62);

SoOrientationInterpolator* SoOrientationInterpolator65 = new SoOrientationInterpolator();
SoOrientationInterpolator65->setDEF(QString("SACROILIAC_ANIMATOR"));
SoOrientationInterpolator65->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator65->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 8);
SoIS* SoIS66 = new SoIS();
Soconnect* Soconnect67 = new Soconnect();
Soconnect67->setNodeField(QString("value_changed"));
Soconnect67->setProtoField(QString("lower_body_rotation_changed"));
SoIS66->addChild(*Soconnect67);

SoOrientationInterpolator65->addChild(*SoIS66);

SoGroup49->addChild(*SoOrientationInterpolator65);

SoOrientationInterpolator* SoOrientationInterpolator68 = new SoOrientationInterpolator();
SoOrientationInterpolator68->setDEF(QString("L_HIP_ANIMATOR"));
SoOrientationInterpolator68->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator68->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 8);
SoIS* SoIS69 = new SoIS();
Soconnect* Soconnect70 = new Soconnect();
Soconnect70->setNodeField(QString("value_changed"));
Soconnect70->setProtoField(QString("l_hip_rotation_changed"));
SoIS69->addChild(*Soconnect70);

SoOrientationInterpolator68->addChild(*SoIS69);

SoGroup49->addChild(*SoOrientationInterpolator68);

SoOrientationInterpolator* SoOrientationInterpolator71 = new SoOrientationInterpolator();
SoOrientationInterpolator71->setDEF(QString("L_KNEE_ANIMATOR"));
SoOrientationInterpolator71->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator71->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 8);
SoIS* SoIS72 = new SoIS();
Soconnect* Soconnect73 = new Soconnect();
Soconnect73->setNodeField(QString("value_changed"));
Soconnect73->setProtoField(QString("l_knee_rotation_changed"));
SoIS72->addChild(*Soconnect73);

SoOrientationInterpolator71->addChild(*SoIS72);

SoGroup49->addChild(*SoOrientationInterpolator71);

SoOrientationInterpolator* SoOrientationInterpolator74 = new SoOrientationInterpolator();
SoOrientationInterpolator74->setDEF(QString("L_ANKLE_ANIMATOR"));
SoOrientationInterpolator74->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator74->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 8);
SoIS* SoIS75 = new SoIS();
Soconnect* Soconnect76 = new Soconnect();
Soconnect76->setNodeField(QString("value_changed"));
Soconnect76->setProtoField(QString("l_ankle_rotation_changed"));
SoIS75->addChild(*Soconnect76);

SoOrientationInterpolator74->addChild(*SoIS75);

SoGroup49->addChild(*SoOrientationInterpolator74);

SoOrientationInterpolator* SoOrientationInterpolator77 = new SoOrientationInterpolator();
SoOrientationInterpolator77->setDEF(QString("L_MIDTARSAL_ANIMATOR"));
SoOrientationInterpolator77->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator77->setKeyValue(new float[]{1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0}, 8);
SoIS* SoIS78 = new SoIS();
Soconnect* Soconnect79 = new Soconnect();
Soconnect79->setNodeField(QString("value_changed"));
Soconnect79->setProtoField(QString("l_midtarsal_rotation_changed"));
SoIS78->addChild(*Soconnect79);

SoOrientationInterpolator77->addChild(*SoIS78);

SoGroup49->addChild(*SoOrientationInterpolator77);

SoOrientationInterpolator* SoOrientationInterpolator80 = new SoOrientationInterpolator();
SoOrientationInterpolator80->setDEF(QString("R_HIP_ANIMATOR"));
SoOrientationInterpolator80->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator80->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 8);
SoIS* SoIS81 = new SoIS();
Soconnect* Soconnect82 = new Soconnect();
Soconnect82->setNodeField(QString("value_changed"));
Soconnect82->setProtoField(QString("r_hip_rotation_changed"));
SoIS81->addChild(*Soconnect82);

SoOrientationInterpolator80->addChild(*SoIS81);

SoGroup49->addChild(*SoOrientationInterpolator80);

SoOrientationInterpolator* SoOrientationInterpolator83 = new SoOrientationInterpolator();
SoOrientationInterpolator83->setDEF(QString("R_KNEE_ANIMATOR"));
SoOrientationInterpolator83->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator83->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 8);
SoIS* SoIS84 = new SoIS();
Soconnect* Soconnect85 = new Soconnect();
Soconnect85->setNodeField(QString("value_changed"));
Soconnect85->setProtoField(QString("r_knee_rotation_changed"));
SoIS84->addChild(*Soconnect85);

SoOrientationInterpolator83->addChild(*SoIS84);

SoGroup49->addChild(*SoOrientationInterpolator83);

SoOrientationInterpolator* SoOrientationInterpolator86 = new SoOrientationInterpolator();
SoOrientationInterpolator86->setDEF(QString("R_ANKLE_ANIMATOR"));
SoOrientationInterpolator86->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator86->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 8);
SoIS* SoIS87 = new SoIS();
Soconnect* Soconnect88 = new Soconnect();
Soconnect88->setNodeField(QString("value_changed"));
Soconnect88->setProtoField(QString("r_ankle_rotation_changed"));
SoIS87->addChild(*Soconnect88);

SoOrientationInterpolator86->addChild(*SoIS87);

SoGroup49->addChild(*SoOrientationInterpolator86);

SoOrientationInterpolator* SoOrientationInterpolator89 = new SoOrientationInterpolator();
SoOrientationInterpolator89->setDEF(QString("R_MIDTARSAL_ANIMATOR"));
SoOrientationInterpolator89->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator89->setKeyValue(new float[]{1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0}, 8);
SoIS* SoIS90 = new SoIS();
Soconnect* Soconnect91 = new Soconnect();
Soconnect91->setNodeField(QString("value_changed"));
Soconnect91->setProtoField(QString("r_midtarsal_rotation_changed"));
SoIS90->addChild(*Soconnect91);

SoOrientationInterpolator89->addChild(*SoIS90);

SoGroup49->addChild(*SoOrientationInterpolator89);

SoOrientationInterpolator* SoOrientationInterpolator92 = new SoOrientationInterpolator();
SoOrientationInterpolator92->setDEF(QString("VL5_ANIMATOR"));
SoOrientationInterpolator92->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator92->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 8);
SoIS* SoIS93 = new SoIS();
Soconnect* Soconnect94 = new Soconnect();
Soconnect94->setNodeField(QString("value_changed"));
Soconnect94->setProtoField(QString("vl5_rotation_changed"));
SoIS93->addChild(*Soconnect94);

SoOrientationInterpolator92->addChild(*SoIS93);

SoGroup49->addChild(*SoOrientationInterpolator92);

SoOrientationInterpolator* SoOrientationInterpolator95 = new SoOrientationInterpolator();
SoOrientationInterpolator95->setDEF(QString("SKULLBASE_ANIMATOR"));
SoOrientationInterpolator95->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator95->setKeyValue(new float[]{0.0,0.0,1.0,0.0,-1.0,0.0,0.0,0.5,0.0,0.0,1.0,0.0}, 12);
SoIS* SoIS96 = new SoIS();
Soconnect* Soconnect97 = new Soconnect();
Soconnect97->setNodeField(QString("value_changed"));
Soconnect97->setProtoField(QString("skullbase_rotation_changed"));
SoIS96->addChild(*Soconnect97);

SoOrientationInterpolator95->addChild(*SoIS96);

SoGroup49->addChild(*SoOrientationInterpolator95);

SoOrientationInterpolator* SoOrientationInterpolator98 = new SoOrientationInterpolator();
SoOrientationInterpolator98->setDEF(QString("L_SHOULDER_ANIMATOR"));
SoOrientationInterpolator98->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator98->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 8);
SoIS* SoIS99 = new SoIS();
Soconnect* Soconnect100 = new Soconnect();
Soconnect100->setNodeField(QString("value_changed"));
Soconnect100->setProtoField(QString("l_shoulder_rotation_changed"));
SoIS99->addChild(*Soconnect100);

SoOrientationInterpolator98->addChild(*SoIS99);

SoGroup49->addChild(*SoOrientationInterpolator98);

SoOrientationInterpolator* SoOrientationInterpolator101 = new SoOrientationInterpolator();
SoOrientationInterpolator101->setDEF(QString("L_ELBOW_ANIMATOR"));
SoOrientationInterpolator101->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator101->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 8);
SoIS* SoIS102 = new SoIS();
Soconnect* Soconnect103 = new Soconnect();
Soconnect103->setNodeField(QString("value_changed"));
Soconnect103->setProtoField(QString("l_elbow_rotation_changed"));
SoIS102->addChild(*Soconnect103);

SoOrientationInterpolator101->addChild(*SoIS102);

SoGroup49->addChild(*SoOrientationInterpolator101);

SoOrientationInterpolator* SoOrientationInterpolator104 = new SoOrientationInterpolator();
SoOrientationInterpolator104->setDEF(QString("L_WRIST_ANIMATOR"));
SoOrientationInterpolator104->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator104->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 8);
SoIS* SoIS105 = new SoIS();
Soconnect* Soconnect106 = new Soconnect();
Soconnect106->setNodeField(QString("value_changed"));
Soconnect106->setProtoField(QString("l_wrist_rotation_changed"));
SoIS105->addChild(*Soconnect106);

SoOrientationInterpolator104->addChild(*SoIS105);

SoGroup49->addChild(*SoOrientationInterpolator104);

SoOrientationInterpolator* SoOrientationInterpolator107 = new SoOrientationInterpolator();
SoOrientationInterpolator107->setDEF(QString("R_SHOULDER_ANIMATOR"));
SoOrientationInterpolator107->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator107->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 8);
SoIS* SoIS108 = new SoIS();
Soconnect* Soconnect109 = new Soconnect();
Soconnect109->setNodeField(QString("value_changed"));
Soconnect109->setProtoField(QString("r_shoulder_rotation_changed"));
SoIS108->addChild(*Soconnect109);

SoOrientationInterpolator107->addChild(*SoIS108);

SoGroup49->addChild(*SoOrientationInterpolator107);

SoOrientationInterpolator* SoOrientationInterpolator110 = new SoOrientationInterpolator();
SoOrientationInterpolator110->setDEF(QString("R_ELBOW_ANIMATOR"));
SoOrientationInterpolator110->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator110->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 8);
SoIS* SoIS111 = new SoIS();
Soconnect* Soconnect112 = new Soconnect();
Soconnect112->setNodeField(QString("value_changed"));
Soconnect112->setProtoField(QString("r_elbow_rotation_changed"));
SoIS111->addChild(*Soconnect112);

SoOrientationInterpolator110->addChild(*SoIS111);

SoGroup49->addChild(*SoOrientationInterpolator110);

SoOrientationInterpolator* SoOrientationInterpolator113 = new SoOrientationInterpolator();
SoOrientationInterpolator113->setDEF(QString("R_WRIST_ANIMATOR"));
SoOrientationInterpolator113->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator113->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 8);
SoIS* SoIS114 = new SoIS();
Soconnect* Soconnect115 = new Soconnect();
Soconnect115->setNodeField(QString("value_changed"));
Soconnect115->setProtoField(QString("r_wrist_rotation_changed"));
SoIS114->addChild(*Soconnect115);

SoOrientationInterpolator113->addChild(*SoIS114);

SoGroup49->addChild(*SoOrientationInterpolator113);

SoProtoBody48->addChild(*SoGroup49);

SoROUTE* SoROUTE116 = new SoROUTE();
SoROUTE116->setFromField(QString("fraction_changed"));
SoROUTE116->setFromNode(QString("TIMER"));
SoROUTE116->setToField(QString("set_fraction"));
SoROUTE116->setToNode(QString("HUMANOIDROOT_POSITION_ANIMATOR"));
SoProtoBody48->addChild(*SoROUTE116);

SoROUTE* SoROUTE117 = new SoROUTE();
SoROUTE117->setFromField(QString("fraction_changed"));
SoROUTE117->setFromNode(QString("TIMER"));
SoROUTE117->setToField(QString("set_fraction"));
SoROUTE117->setToNode(QString("HUMANOIDROOT_ANIMATOR"));
SoProtoBody48->addChild(*SoROUTE117);

SoROUTE* SoROUTE118 = new SoROUTE();
SoROUTE118->setFromField(QString("fraction_changed"));
SoROUTE118->setFromNode(QString("TIMER"));
SoROUTE118->setToField(QString("set_fraction"));
SoROUTE118->setToNode(QString("SACROILIAC_ANIMATOR"));
SoProtoBody48->addChild(*SoROUTE118);

SoROUTE* SoROUTE119 = new SoROUTE();
SoROUTE119->setFromField(QString("fraction_changed"));
SoROUTE119->setFromNode(QString("TIMER"));
SoROUTE119->setToField(QString("set_fraction"));
SoROUTE119->setToNode(QString("L_HIP_ANIMATOR"));
SoProtoBody48->addChild(*SoROUTE119);

SoROUTE* SoROUTE120 = new SoROUTE();
SoROUTE120->setFromField(QString("fraction_changed"));
SoROUTE120->setFromNode(QString("TIMER"));
SoROUTE120->setToField(QString("set_fraction"));
SoROUTE120->setToNode(QString("L_KNEE_ANIMATOR"));
SoProtoBody48->addChild(*SoROUTE120);

SoROUTE* SoROUTE121 = new SoROUTE();
SoROUTE121->setFromField(QString("fraction_changed"));
SoROUTE121->setFromNode(QString("TIMER"));
SoROUTE121->setToField(QString("set_fraction"));
SoROUTE121->setToNode(QString("L_ANKLE_ANIMATOR"));
SoProtoBody48->addChild(*SoROUTE121);

SoROUTE* SoROUTE122 = new SoROUTE();
SoROUTE122->setFromField(QString("fraction_changed"));
SoROUTE122->setFromNode(QString("TIMER"));
SoROUTE122->setToField(QString("set_fraction"));
SoROUTE122->setToNode(QString("L_MIDTARSAL_ANIMATOR"));
SoProtoBody48->addChild(*SoROUTE122);

SoROUTE* SoROUTE123 = new SoROUTE();
SoROUTE123->setFromField(QString("fraction_changed"));
SoROUTE123->setFromNode(QString("TIMER"));
SoROUTE123->setToField(QString("set_fraction"));
SoROUTE123->setToNode(QString("R_HIP_ANIMATOR"));
SoProtoBody48->addChild(*SoROUTE123);

SoROUTE* SoROUTE124 = new SoROUTE();
SoROUTE124->setFromField(QString("fraction_changed"));
SoROUTE124->setFromNode(QString("TIMER"));
SoROUTE124->setToField(QString("set_fraction"));
SoROUTE124->setToNode(QString("R_KNEE_ANIMATOR"));
SoProtoBody48->addChild(*SoROUTE124);

SoROUTE* SoROUTE125 = new SoROUTE();
SoROUTE125->setFromField(QString("fraction_changed"));
SoROUTE125->setFromNode(QString("TIMER"));
SoROUTE125->setToField(QString("set_fraction"));
SoROUTE125->setToNode(QString("R_ANKLE_ANIMATOR"));
SoProtoBody48->addChild(*SoROUTE125);

SoROUTE* SoROUTE126 = new SoROUTE();
SoROUTE126->setFromField(QString("fraction_changed"));
SoROUTE126->setFromNode(QString("TIMER"));
SoROUTE126->setToField(QString("set_fraction"));
SoROUTE126->setToNode(QString("R_MIDTARSAL_ANIMATOR"));
SoProtoBody48->addChild(*SoROUTE126);

SoROUTE* SoROUTE127 = new SoROUTE();
SoROUTE127->setFromField(QString("fraction_changed"));
SoROUTE127->setFromNode(QString("TIMER"));
SoROUTE127->setToField(QString("set_fraction"));
SoROUTE127->setToNode(QString("VL5_ANIMATOR"));
SoProtoBody48->addChild(*SoROUTE127);

SoROUTE* SoROUTE128 = new SoROUTE();
SoROUTE128->setFromField(QString("fraction_changed"));
SoROUTE128->setFromNode(QString("TIMER"));
SoROUTE128->setToField(QString("set_fraction"));
SoROUTE128->setToNode(QString("SKULLBASE_ANIMATOR"));
SoProtoBody48->addChild(*SoROUTE128);

SoROUTE* SoROUTE129 = new SoROUTE();
SoROUTE129->setFromField(QString("fraction_changed"));
SoROUTE129->setFromNode(QString("TIMER"));
SoROUTE129->setToField(QString("set_fraction"));
SoROUTE129->setToNode(QString("L_SHOULDER_ANIMATOR"));
SoProtoBody48->addChild(*SoROUTE129);

SoROUTE* SoROUTE130 = new SoROUTE();
SoROUTE130->setFromField(QString("fraction_changed"));
SoROUTE130->setFromNode(QString("TIMER"));
SoROUTE130->setToField(QString("set_fraction"));
SoROUTE130->setToNode(QString("L_ELBOW_ANIMATOR"));
SoProtoBody48->addChild(*SoROUTE130);

SoROUTE* SoROUTE131 = new SoROUTE();
SoROUTE131->setFromField(QString("fraction_changed"));
SoROUTE131->setFromNode(QString("TIMER"));
SoROUTE131->setToField(QString("set_fraction"));
SoROUTE131->setToNode(QString("L_WRIST_ANIMATOR"));
SoProtoBody48->addChild(*SoROUTE131);

SoROUTE* SoROUTE132 = new SoROUTE();
SoROUTE132->setFromField(QString("fraction_changed"));
SoROUTE132->setFromNode(QString("TIMER"));
SoROUTE132->setToField(QString("set_fraction"));
SoROUTE132->setToNode(QString("R_SHOULDER_ANIMATOR"));
SoProtoBody48->addChild(*SoROUTE132);

SoROUTE* SoROUTE133 = new SoROUTE();
SoROUTE133->setFromField(QString("fraction_changed"));
SoROUTE133->setFromNode(QString("TIMER"));
SoROUTE133->setToField(QString("set_fraction"));
SoROUTE133->setToNode(QString("R_ELBOW_ANIMATOR"));
SoProtoBody48->addChild(*SoROUTE133);

SoROUTE* SoROUTE134 = new SoROUTE();
SoROUTE134->setFromField(QString("fraction_changed"));
SoROUTE134->setFromNode(QString("TIMER"));
SoROUTE134->setToField(QString("set_fraction"));
SoROUTE134->setToNode(QString("R_WRIST_ANIMATOR"));
SoProtoBody48->addChild(*SoROUTE134);

SoProtoDeclare20->addChild(*SoProtoBody48);

SoNode18->addChild(*SoProtoDeclare20);

//======================================
//Point to example use in case someone inspects this file
SoAnchor* SoAnchor135 = new SoAnchor();
SoAnchor135->setDescription(QString("InterchangableActorsViaDynamicRouting"));
SoAnchor135->setParameter(new QString[]{QString("target=_blank")}, 1);
SoAnchor135->setUrl(new QString[]{QString("InterchangableActorsViaDynamicRouting.x3d"), QString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.x3d"), QString("InterchangableActorsViaDynamicRouting.wrl"), QString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.wrl")}, 4);
SoShape* SoShape136 = new SoShape();
SoText* SoText137 = new SoText();
SoText137->setString(new QString[]{QString("LOA1_StandAnimation.x3d"), QString("defines a prototype"), QString("for animating a humanoid."), QString(""), QString("Click this text to see"), QString("InterchangableActorsViaDynamicRouting example.")}, 6);
SoFontStyle* SoFontStyle138 = new SoFontStyle();
SoFontStyle138->setJustify(new QString[]{QString("MIDDLE"), QString("MIDDLE")}, 2);
SoFontStyle138->setSize(0.8);
SoText137->setFontStyle(*SoFontStyle138);

SoShape136->setGeometry(*SoText137);

SoVRMLAppearance* SoVRMLAppearance139 = new SoVRMLAppearance();
SoMaterial* SoMaterial140 = new SoMaterial();
SoMaterial140->setDiffuseColor(new float[]{1.0,1.0,0.2});
SoVRMLAppearance139->addChild(*SoMaterial140);

SoShape136->addChild(*SoVRMLAppearance139);

SoAnchor135->addChild(*SoShape136);

SoNode18->addChild(*SoAnchor135);

SoSceneManager0->setSceneGraph(*SoNode18);

return 0;
}
