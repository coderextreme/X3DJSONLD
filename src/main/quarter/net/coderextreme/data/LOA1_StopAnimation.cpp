
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
Someta2->setContent(QString("LOA1_StopAnimation.x3d"));
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
Someta9->setName(QString("reference"));
Someta9->setContent(QString("https://www.ballreich.net/vrml/HAnim/nancy_HAnim.wrl"));
Sohead1->addMeta(*Someta9);

Someta* Someta10 = new Someta();
Someta10->setName(QString("reference"));
Someta10->setContent(QString("https://www.HAnim.org"));
Sohead1->addMeta(*Someta10);

Someta* Someta11 = new Someta();
Someta11->setName(QString("reference"));
Someta11->setContent(QString("https://HAnim.org/Models"));
Sohead1->addMeta(*Someta11);

Someta* Someta12 = new Someta();
Someta12->setName(QString("reference"));
Someta12->setContent(QString("https://HAnim.org/Nodes"));
Sohead1->addMeta(*Someta12);

Someta* Someta13 = new Someta();
Someta13->setName(QString("subject"));
Someta13->setContent(QString("Nancy Stand Animation HAnim 2001"));
Sohead1->addMeta(*Someta13);

Someta* Someta14 = new Someta();
Someta14->setName(QString("identifier"));
Someta14->setContent(QString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/LOA1_StopAnimation.x3d"));
Sohead1->addMeta(*Someta14);

Someta* Someta15 = new Someta();
Someta15->setName(QString("generator"));
Someta15->setContent(QString("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"));
Sohead1->addMeta(*Someta15);

Someta* Someta16 = new Someta();
Someta16->setName(QString("license"));
Someta16->setContent(QString("../license.html"));
Sohead1->addMeta(*Someta16);

SoSceneManager0->setHead(*Sohead1);

SoNode* SoNode17 = new SoNode();
SoWorldInfo* SoWorldInfo18 = new SoWorldInfo();
SoWorldInfo18->setTitle(QString("LOA1_StopAnimation.x3d"));
SoNode17->addChild(*SoWorldInfo18);

SoProtoDeclare* SoProtoDeclare19 = new SoProtoDeclare();
SoProtoDeclare19->setName(QString("LOA1_StopAnimation"));
SoProtoInterface* SoProtoInterface20 = new SoProtoInterface();
Sofield* Sofield21 = new Sofield();
Sofield21->setName(QString("cycleInterval"));
Sofield21->setAccessType(QString("inputOutput"));
Sofield21->setType(QString("SFTime"));
Sofield21->setValue(QString("0.009999999776482582"));
SoProtoInterface20->addChild(*Sofield21);

Sofield* Sofield22 = new Sofield();
Sofield22->setName(QString("enabled"));
Sofield22->setAccessType(QString("inputOutput"));
Sofield22->setType(QString("SFBool"));
Sofield22->setValue(QString("true"));
SoProtoInterface20->addChild(*Sofield22);

Sofield* Sofield23 = new Sofield();
Sofield23->setName(QString("loop"));
Sofield23->setAccessType(QString("inputOutput"));
Sofield23->setType(QString("SFBool"));
Sofield23->setValue(QString("true"));
SoProtoInterface20->addChild(*Sofield23);

Sofield* Sofield24 = new Sofield();
Sofield24->setName(QString("startTime"));
Sofield24->setAccessType(QString("inputOutput"));
Sofield24->setType(QString("SFTime"));
Sofield24->setValue(QString("0"));
SoProtoInterface20->addChild(*Sofield24);

Sofield* Sofield25 = new Sofield();
Sofield25->setName(QString("stopTime"));
Sofield25->setAccessType(QString("inputOutput"));
Sofield25->setType(QString("SFTime"));
Sofield25->setValue(QString("-1"));
SoProtoInterface20->addChild(*Sofield25);

Sofield* Sofield26 = new Sofield();
Sofield26->setName(QString("fraction_changed"));
Sofield26->setAccessType(QString("outputOnly"));
Sofield26->setType(QString("SFFloat"));
SoProtoInterface20->addChild(*Sofield26);

Sofield* Sofield27 = new Sofield();
Sofield27->setName(QString("isActive"));
Sofield27->setAccessType(QString("outputOnly"));
Sofield27->setType(QString("SFBool"));
SoProtoInterface20->addChild(*Sofield27);

Sofield* Sofield28 = new Sofield();
Sofield28->setName(QString("HumanoidRoot_translation_changed"));
Sofield28->setAccessType(QString("outputOnly"));
Sofield28->setType(QString("SFVec3f"));
SoProtoInterface20->addChild(*Sofield28);

Sofield* Sofield29 = new Sofield();
Sofield29->setName(QString("HumanoidRoot_rotation_changed"));
Sofield29->setAccessType(QString("outputOnly"));
Sofield29->setType(QString("SFRotation"));
SoProtoInterface20->addChild(*Sofield29);

Sofield* Sofield30 = new Sofield();
Sofield30->setName(QString("lower_body_rotation_changed"));
Sofield30->setAccessType(QString("outputOnly"));
Sofield30->setType(QString("SFRotation"));
SoProtoInterface20->addChild(*Sofield30);

Sofield* Sofield31 = new Sofield();
Sofield31->setName(QString("l_hip_rotation_changed"));
Sofield31->setAccessType(QString("outputOnly"));
Sofield31->setType(QString("SFRotation"));
SoProtoInterface20->addChild(*Sofield31);

Sofield* Sofield32 = new Sofield();
Sofield32->setName(QString("l_knee_rotation_changed"));
Sofield32->setAccessType(QString("outputOnly"));
Sofield32->setType(QString("SFRotation"));
SoProtoInterface20->addChild(*Sofield32);

Sofield* Sofield33 = new Sofield();
Sofield33->setName(QString("l_ankle_rotation_changed"));
Sofield33->setAccessType(QString("outputOnly"));
Sofield33->setType(QString("SFRotation"));
SoProtoInterface20->addChild(*Sofield33);

Sofield* Sofield34 = new Sofield();
Sofield34->setName(QString("l_midtarsal_rotation_changed"));
Sofield34->setAccessType(QString("outputOnly"));
Sofield34->setType(QString("SFRotation"));
SoProtoInterface20->addChild(*Sofield34);

Sofield* Sofield35 = new Sofield();
Sofield35->setName(QString("r_hip_rotation_changed"));
Sofield35->setAccessType(QString("outputOnly"));
Sofield35->setType(QString("SFRotation"));
SoProtoInterface20->addChild(*Sofield35);

Sofield* Sofield36 = new Sofield();
Sofield36->setName(QString("r_knee_rotation_changed"));
Sofield36->setAccessType(QString("outputOnly"));
Sofield36->setType(QString("SFRotation"));
SoProtoInterface20->addChild(*Sofield36);

Sofield* Sofield37 = new Sofield();
Sofield37->setName(QString("r_ankle_rotation_changed"));
Sofield37->setAccessType(QString("outputOnly"));
Sofield37->setType(QString("SFRotation"));
SoProtoInterface20->addChild(*Sofield37);

Sofield* Sofield38 = new Sofield();
Sofield38->setName(QString("r_midtarsal_rotation_changed"));
Sofield38->setAccessType(QString("outputOnly"));
Sofield38->setType(QString("SFRotation"));
SoProtoInterface20->addChild(*Sofield38);

Sofield* Sofield39 = new Sofield();
Sofield39->setName(QString("vl5_rotation_changed"));
Sofield39->setAccessType(QString("outputOnly"));
Sofield39->setType(QString("SFRotation"));
SoProtoInterface20->addChild(*Sofield39);

Sofield* Sofield40 = new Sofield();
Sofield40->setName(QString("skullbase_rotation_changed"));
Sofield40->setAccessType(QString("outputOnly"));
Sofield40->setType(QString("SFRotation"));
SoProtoInterface20->addChild(*Sofield40);

Sofield* Sofield41 = new Sofield();
Sofield41->setName(QString("l_shoulder_rotation_changed"));
Sofield41->setAccessType(QString("outputOnly"));
Sofield41->setType(QString("SFRotation"));
SoProtoInterface20->addChild(*Sofield41);

Sofield* Sofield42 = new Sofield();
Sofield42->setName(QString("l_elbow_rotation_changed"));
Sofield42->setAccessType(QString("outputOnly"));
Sofield42->setType(QString("SFRotation"));
SoProtoInterface20->addChild(*Sofield42);

Sofield* Sofield43 = new Sofield();
Sofield43->setName(QString("l_wrist_rotation_changed"));
Sofield43->setAccessType(QString("outputOnly"));
Sofield43->setType(QString("SFRotation"));
SoProtoInterface20->addChild(*Sofield43);

Sofield* Sofield44 = new Sofield();
Sofield44->setName(QString("r_shoulder_rotation_changed"));
Sofield44->setAccessType(QString("outputOnly"));
Sofield44->setType(QString("SFRotation"));
SoProtoInterface20->addChild(*Sofield44);

Sofield* Sofield45 = new Sofield();
Sofield45->setName(QString("r_elbow_rotation_changed"));
Sofield45->setAccessType(QString("outputOnly"));
Sofield45->setType(QString("SFRotation"));
SoProtoInterface20->addChild(*Sofield45);

Sofield* Sofield46 = new Sofield();
Sofield46->setName(QString("r_wrist_rotation_changed"));
Sofield46->setAccessType(QString("outputOnly"));
Sofield46->setType(QString("SFRotation"));
SoProtoInterface20->addChild(*Sofield46);

SoProtoDeclare19->addChild(*SoProtoInterface20);

SoProtoBody* SoProtoBody47 = new SoProtoBody();
SoGroup* SoGroup48 = new SoGroup();
SoTimeSensor* SoTimeSensor49 = new SoTimeSensor();
SoTimeSensor49->setDEF(QString("TIMER"));
SoIS* SoIS50 = new SoIS();
Soconnect* Soconnect51 = new Soconnect();
Soconnect51->setNodeField(QString("cycleInterval"));
Soconnect51->setProtoField(QString("cycleInterval"));
SoIS50->addChild(*Soconnect51);

Soconnect* Soconnect52 = new Soconnect();
Soconnect52->setNodeField(QString("enabled"));
Soconnect52->setProtoField(QString("enabled"));
SoIS50->addChild(*Soconnect52);

Soconnect* Soconnect53 = new Soconnect();
Soconnect53->setNodeField(QString("loop"));
Soconnect53->setProtoField(QString("loop"));
SoIS50->addChild(*Soconnect53);

Soconnect* Soconnect54 = new Soconnect();
Soconnect54->setNodeField(QString("startTime"));
Soconnect54->setProtoField(QString("startTime"));
SoIS50->addChild(*Soconnect54);

Soconnect* Soconnect55 = new Soconnect();
Soconnect55->setNodeField(QString("stopTime"));
Soconnect55->setProtoField(QString("stopTime"));
SoIS50->addChild(*Soconnect55);

Soconnect* Soconnect56 = new Soconnect();
Soconnect56->setNodeField(QString("fraction_changed"));
Soconnect56->setProtoField(QString("fraction_changed"));
SoIS50->addChild(*Soconnect56);

Soconnect* Soconnect57 = new Soconnect();
Soconnect57->setNodeField(QString("isActive"));
Soconnect57->setProtoField(QString("isActive"));
SoIS50->addChild(*Soconnect57);

SoTimeSensor49->addChild(*SoIS50);

SoGroup48->addChild(*SoTimeSensor49);

SoPositionInterpolator* SoPositionInterpolator58 = new SoPositionInterpolator();
SoPositionInterpolator58->setDEF(QString("HUMANOIDROOT_POSITION_ANIMATOR"));
SoPositionInterpolator58->setKey(new float[]{0.0,1.0}, 2);
SoPositionInterpolator58->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0}, 6);
SoIS* SoIS59 = new SoIS();
Soconnect* Soconnect60 = new Soconnect();
Soconnect60->setNodeField(QString("value_changed"));
Soconnect60->setProtoField(QString("HumanoidRoot_translation_changed"));
SoIS59->addChild(*Soconnect60);

SoPositionInterpolator58->addChild(*SoIS59);

SoGroup48->addChild(*SoPositionInterpolator58);

SoOrientationInterpolator* SoOrientationInterpolator61 = new SoOrientationInterpolator();
SoOrientationInterpolator61->setDEF(QString("HUMANOIDROOT_ANIMATOR"));
SoOrientationInterpolator61->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator61->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 8);
SoIS* SoIS62 = new SoIS();
Soconnect* Soconnect63 = new Soconnect();
Soconnect63->setNodeField(QString("value_changed"));
Soconnect63->setProtoField(QString("HumanoidRoot_rotation_changed"));
SoIS62->addChild(*Soconnect63);

SoOrientationInterpolator61->addChild(*SoIS62);

SoGroup48->addChild(*SoOrientationInterpolator61);

SoOrientationInterpolator* SoOrientationInterpolator64 = new SoOrientationInterpolator();
SoOrientationInterpolator64->setDEF(QString("SACROILIAC_ANIMATOR"));
SoOrientationInterpolator64->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator64->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 8);
SoIS* SoIS65 = new SoIS();
Soconnect* Soconnect66 = new Soconnect();
Soconnect66->setNodeField(QString("value_changed"));
Soconnect66->setProtoField(QString("lower_body_rotation_changed"));
SoIS65->addChild(*Soconnect66);

SoOrientationInterpolator64->addChild(*SoIS65);

SoGroup48->addChild(*SoOrientationInterpolator64);

SoOrientationInterpolator* SoOrientationInterpolator67 = new SoOrientationInterpolator();
SoOrientationInterpolator67->setDEF(QString("L_HIP_ANIMATOR"));
SoOrientationInterpolator67->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator67->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 8);
SoIS* SoIS68 = new SoIS();
Soconnect* Soconnect69 = new Soconnect();
Soconnect69->setNodeField(QString("value_changed"));
Soconnect69->setProtoField(QString("l_hip_rotation_changed"));
SoIS68->addChild(*Soconnect69);

SoOrientationInterpolator67->addChild(*SoIS68);

SoGroup48->addChild(*SoOrientationInterpolator67);

SoOrientationInterpolator* SoOrientationInterpolator70 = new SoOrientationInterpolator();
SoOrientationInterpolator70->setDEF(QString("L_KNEE_ANIMATOR"));
SoOrientationInterpolator70->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator70->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 8);
SoIS* SoIS71 = new SoIS();
Soconnect* Soconnect72 = new Soconnect();
Soconnect72->setNodeField(QString("value_changed"));
Soconnect72->setProtoField(QString("l_knee_rotation_changed"));
SoIS71->addChild(*Soconnect72);

SoOrientationInterpolator70->addChild(*SoIS71);

SoGroup48->addChild(*SoOrientationInterpolator70);

SoOrientationInterpolator* SoOrientationInterpolator73 = new SoOrientationInterpolator();
SoOrientationInterpolator73->setDEF(QString("L_ANKLE_ANIMATOR"));
SoOrientationInterpolator73->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator73->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 8);
SoIS* SoIS74 = new SoIS();
Soconnect* Soconnect75 = new Soconnect();
Soconnect75->setNodeField(QString("value_changed"));
Soconnect75->setProtoField(QString("l_ankle_rotation_changed"));
SoIS74->addChild(*Soconnect75);

SoOrientationInterpolator73->addChild(*SoIS74);

SoGroup48->addChild(*SoOrientationInterpolator73);

SoOrientationInterpolator* SoOrientationInterpolator76 = new SoOrientationInterpolator();
SoOrientationInterpolator76->setDEF(QString("L_MIDTARSAL_ANIMATOR"));
SoOrientationInterpolator76->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator76->setKeyValue(new float[]{1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0}, 8);
SoIS* SoIS77 = new SoIS();
Soconnect* Soconnect78 = new Soconnect();
Soconnect78->setNodeField(QString("value_changed"));
Soconnect78->setProtoField(QString("l_midtarsal_rotation_changed"));
SoIS77->addChild(*Soconnect78);

SoOrientationInterpolator76->addChild(*SoIS77);

SoGroup48->addChild(*SoOrientationInterpolator76);

SoOrientationInterpolator* SoOrientationInterpolator79 = new SoOrientationInterpolator();
SoOrientationInterpolator79->setDEF(QString("R_HIP_ANIMATOR"));
SoOrientationInterpolator79->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator79->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 8);
SoIS* SoIS80 = new SoIS();
Soconnect* Soconnect81 = new Soconnect();
Soconnect81->setNodeField(QString("value_changed"));
Soconnect81->setProtoField(QString("r_hip_rotation_changed"));
SoIS80->addChild(*Soconnect81);

SoOrientationInterpolator79->addChild(*SoIS80);

SoGroup48->addChild(*SoOrientationInterpolator79);

SoOrientationInterpolator* SoOrientationInterpolator82 = new SoOrientationInterpolator();
SoOrientationInterpolator82->setDEF(QString("R_KNEE_ANIMATOR"));
SoOrientationInterpolator82->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator82->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 8);
SoIS* SoIS83 = new SoIS();
Soconnect* Soconnect84 = new Soconnect();
Soconnect84->setNodeField(QString("value_changed"));
Soconnect84->setProtoField(QString("r_knee_rotation_changed"));
SoIS83->addChild(*Soconnect84);

SoOrientationInterpolator82->addChild(*SoIS83);

SoGroup48->addChild(*SoOrientationInterpolator82);

SoOrientationInterpolator* SoOrientationInterpolator85 = new SoOrientationInterpolator();
SoOrientationInterpolator85->setDEF(QString("R_ANKLE_ANIMATOR"));
SoOrientationInterpolator85->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator85->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 8);
SoIS* SoIS86 = new SoIS();
Soconnect* Soconnect87 = new Soconnect();
Soconnect87->setNodeField(QString("value_changed"));
Soconnect87->setProtoField(QString("r_ankle_rotation_changed"));
SoIS86->addChild(*Soconnect87);

SoOrientationInterpolator85->addChild(*SoIS86);

SoGroup48->addChild(*SoOrientationInterpolator85);

SoOrientationInterpolator* SoOrientationInterpolator88 = new SoOrientationInterpolator();
SoOrientationInterpolator88->setDEF(QString("R_MIDTARSAL_ANIMATOR"));
SoOrientationInterpolator88->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator88->setKeyValue(new float[]{1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0}, 8);
SoIS* SoIS89 = new SoIS();
Soconnect* Soconnect90 = new Soconnect();
Soconnect90->setNodeField(QString("value_changed"));
Soconnect90->setProtoField(QString("r_midtarsal_rotation_changed"));
SoIS89->addChild(*Soconnect90);

SoOrientationInterpolator88->addChild(*SoIS89);

SoGroup48->addChild(*SoOrientationInterpolator88);

SoOrientationInterpolator* SoOrientationInterpolator91 = new SoOrientationInterpolator();
SoOrientationInterpolator91->setDEF(QString("VL5_ANIMATOR"));
SoOrientationInterpolator91->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator91->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 8);
SoIS* SoIS92 = new SoIS();
Soconnect* Soconnect93 = new Soconnect();
Soconnect93->setNodeField(QString("value_changed"));
Soconnect93->setProtoField(QString("vl5_rotation_changed"));
SoIS92->addChild(*Soconnect93);

SoOrientationInterpolator91->addChild(*SoIS92);

SoGroup48->addChild(*SoOrientationInterpolator91);

SoOrientationInterpolator* SoOrientationInterpolator94 = new SoOrientationInterpolator();
SoOrientationInterpolator94->setDEF(QString("SKULLBASE_ANIMATOR"));
SoOrientationInterpolator94->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator94->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 8);
SoIS* SoIS95 = new SoIS();
Soconnect* Soconnect96 = new Soconnect();
Soconnect96->setNodeField(QString("value_changed"));
Soconnect96->setProtoField(QString("skullbase_rotation_changed"));
SoIS95->addChild(*Soconnect96);

SoOrientationInterpolator94->addChild(*SoIS95);

SoGroup48->addChild(*SoOrientationInterpolator94);

SoOrientationInterpolator* SoOrientationInterpolator97 = new SoOrientationInterpolator();
SoOrientationInterpolator97->setDEF(QString("L_SHOULDER_ANIMATOR"));
SoOrientationInterpolator97->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator97->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 8);
SoIS* SoIS98 = new SoIS();
Soconnect* Soconnect99 = new Soconnect();
Soconnect99->setNodeField(QString("value_changed"));
Soconnect99->setProtoField(QString("l_shoulder_rotation_changed"));
SoIS98->addChild(*Soconnect99);

SoOrientationInterpolator97->addChild(*SoIS98);

SoGroup48->addChild(*SoOrientationInterpolator97);

SoOrientationInterpolator* SoOrientationInterpolator100 = new SoOrientationInterpolator();
SoOrientationInterpolator100->setDEF(QString("L_ELBOW_ANIMATOR"));
SoOrientationInterpolator100->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator100->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 8);
SoIS* SoIS101 = new SoIS();
Soconnect* Soconnect102 = new Soconnect();
Soconnect102->setNodeField(QString("value_changed"));
Soconnect102->setProtoField(QString("l_elbow_rotation_changed"));
SoIS101->addChild(*Soconnect102);

SoOrientationInterpolator100->addChild(*SoIS101);

SoGroup48->addChild(*SoOrientationInterpolator100);

SoOrientationInterpolator* SoOrientationInterpolator103 = new SoOrientationInterpolator();
SoOrientationInterpolator103->setDEF(QString("L_WRIST_ANIMATOR"));
SoOrientationInterpolator103->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator103->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 8);
SoIS* SoIS104 = new SoIS();
Soconnect* Soconnect105 = new Soconnect();
Soconnect105->setNodeField(QString("value_changed"));
Soconnect105->setProtoField(QString("l_wrist_rotation_changed"));
SoIS104->addChild(*Soconnect105);

SoOrientationInterpolator103->addChild(*SoIS104);

SoGroup48->addChild(*SoOrientationInterpolator103);

SoOrientationInterpolator* SoOrientationInterpolator106 = new SoOrientationInterpolator();
SoOrientationInterpolator106->setDEF(QString("R_SHOULDER_ANIMATOR"));
SoOrientationInterpolator106->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator106->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 8);
SoIS* SoIS107 = new SoIS();
Soconnect* Soconnect108 = new Soconnect();
Soconnect108->setNodeField(QString("value_changed"));
Soconnect108->setProtoField(QString("r_shoulder_rotation_changed"));
SoIS107->addChild(*Soconnect108);

SoOrientationInterpolator106->addChild(*SoIS107);

SoGroup48->addChild(*SoOrientationInterpolator106);

SoOrientationInterpolator* SoOrientationInterpolator109 = new SoOrientationInterpolator();
SoOrientationInterpolator109->setDEF(QString("R_ELBOW_ANIMATOR"));
SoOrientationInterpolator109->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator109->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 8);
SoIS* SoIS110 = new SoIS();
Soconnect* Soconnect111 = new Soconnect();
Soconnect111->setNodeField(QString("value_changed"));
Soconnect111->setProtoField(QString("r_elbow_rotation_changed"));
SoIS110->addChild(*Soconnect111);

SoOrientationInterpolator109->addChild(*SoIS110);

SoGroup48->addChild(*SoOrientationInterpolator109);

SoOrientationInterpolator* SoOrientationInterpolator112 = new SoOrientationInterpolator();
SoOrientationInterpolator112->setDEF(QString("R_WRIST_ANIMATOR"));
SoOrientationInterpolator112->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator112->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 8);
SoIS* SoIS113 = new SoIS();
Soconnect* Soconnect114 = new Soconnect();
Soconnect114->setNodeField(QString("value_changed"));
Soconnect114->setProtoField(QString("r_wrist_rotation_changed"));
SoIS113->addChild(*Soconnect114);

SoOrientationInterpolator112->addChild(*SoIS113);

SoGroup48->addChild(*SoOrientationInterpolator112);

SoProtoBody47->addChild(*SoGroup48);

SoROUTE* SoROUTE115 = new SoROUTE();
SoROUTE115->setFromField(QString("fraction_changed"));
SoROUTE115->setFromNode(QString("TIMER"));
SoROUTE115->setToField(QString("set_fraction"));
SoROUTE115->setToNode(QString("HUMANOIDROOT_POSITION_ANIMATOR"));
SoProtoBody47->addChild(*SoROUTE115);

SoROUTE* SoROUTE116 = new SoROUTE();
SoROUTE116->setFromField(QString("fraction_changed"));
SoROUTE116->setFromNode(QString("TIMER"));
SoROUTE116->setToField(QString("set_fraction"));
SoROUTE116->setToNode(QString("HUMANOIDROOT_ANIMATOR"));
SoProtoBody47->addChild(*SoROUTE116);

SoROUTE* SoROUTE117 = new SoROUTE();
SoROUTE117->setFromField(QString("fraction_changed"));
SoROUTE117->setFromNode(QString("TIMER"));
SoROUTE117->setToField(QString("set_fraction"));
SoROUTE117->setToNode(QString("SACROILIAC_ANIMATOR"));
SoProtoBody47->addChild(*SoROUTE117);

SoROUTE* SoROUTE118 = new SoROUTE();
SoROUTE118->setFromField(QString("fraction_changed"));
SoROUTE118->setFromNode(QString("TIMER"));
SoROUTE118->setToField(QString("set_fraction"));
SoROUTE118->setToNode(QString("L_HIP_ANIMATOR"));
SoProtoBody47->addChild(*SoROUTE118);

SoROUTE* SoROUTE119 = new SoROUTE();
SoROUTE119->setFromField(QString("fraction_changed"));
SoROUTE119->setFromNode(QString("TIMER"));
SoROUTE119->setToField(QString("set_fraction"));
SoROUTE119->setToNode(QString("L_KNEE_ANIMATOR"));
SoProtoBody47->addChild(*SoROUTE119);

SoROUTE* SoROUTE120 = new SoROUTE();
SoROUTE120->setFromField(QString("fraction_changed"));
SoROUTE120->setFromNode(QString("TIMER"));
SoROUTE120->setToField(QString("set_fraction"));
SoROUTE120->setToNode(QString("L_ANKLE_ANIMATOR"));
SoProtoBody47->addChild(*SoROUTE120);

SoROUTE* SoROUTE121 = new SoROUTE();
SoROUTE121->setFromField(QString("fraction_changed"));
SoROUTE121->setFromNode(QString("TIMER"));
SoROUTE121->setToField(QString("set_fraction"));
SoROUTE121->setToNode(QString("L_MIDTARSAL_ANIMATOR"));
SoProtoBody47->addChild(*SoROUTE121);

SoROUTE* SoROUTE122 = new SoROUTE();
SoROUTE122->setFromField(QString("fraction_changed"));
SoROUTE122->setFromNode(QString("TIMER"));
SoROUTE122->setToField(QString("set_fraction"));
SoROUTE122->setToNode(QString("R_HIP_ANIMATOR"));
SoProtoBody47->addChild(*SoROUTE122);

SoROUTE* SoROUTE123 = new SoROUTE();
SoROUTE123->setFromField(QString("fraction_changed"));
SoROUTE123->setFromNode(QString("TIMER"));
SoROUTE123->setToField(QString("set_fraction"));
SoROUTE123->setToNode(QString("R_KNEE_ANIMATOR"));
SoProtoBody47->addChild(*SoROUTE123);

SoROUTE* SoROUTE124 = new SoROUTE();
SoROUTE124->setFromField(QString("fraction_changed"));
SoROUTE124->setFromNode(QString("TIMER"));
SoROUTE124->setToField(QString("set_fraction"));
SoROUTE124->setToNode(QString("R_ANKLE_ANIMATOR"));
SoProtoBody47->addChild(*SoROUTE124);

SoROUTE* SoROUTE125 = new SoROUTE();
SoROUTE125->setFromField(QString("fraction_changed"));
SoROUTE125->setFromNode(QString("TIMER"));
SoROUTE125->setToField(QString("set_fraction"));
SoROUTE125->setToNode(QString("R_MIDTARSAL_ANIMATOR"));
SoProtoBody47->addChild(*SoROUTE125);

SoROUTE* SoROUTE126 = new SoROUTE();
SoROUTE126->setFromField(QString("fraction_changed"));
SoROUTE126->setFromNode(QString("TIMER"));
SoROUTE126->setToField(QString("set_fraction"));
SoROUTE126->setToNode(QString("VL5_ANIMATOR"));
SoProtoBody47->addChild(*SoROUTE126);

SoROUTE* SoROUTE127 = new SoROUTE();
SoROUTE127->setFromField(QString("fraction_changed"));
SoROUTE127->setFromNode(QString("TIMER"));
SoROUTE127->setToField(QString("set_fraction"));
SoROUTE127->setToNode(QString("SKULLBASE_ANIMATOR"));
SoProtoBody47->addChild(*SoROUTE127);

SoROUTE* SoROUTE128 = new SoROUTE();
SoROUTE128->setFromField(QString("fraction_changed"));
SoROUTE128->setFromNode(QString("TIMER"));
SoROUTE128->setToField(QString("set_fraction"));
SoROUTE128->setToNode(QString("L_SHOULDER_ANIMATOR"));
SoProtoBody47->addChild(*SoROUTE128);

SoROUTE* SoROUTE129 = new SoROUTE();
SoROUTE129->setFromField(QString("fraction_changed"));
SoROUTE129->setFromNode(QString("TIMER"));
SoROUTE129->setToField(QString("set_fraction"));
SoROUTE129->setToNode(QString("L_ELBOW_ANIMATOR"));
SoProtoBody47->addChild(*SoROUTE129);

SoROUTE* SoROUTE130 = new SoROUTE();
SoROUTE130->setFromField(QString("fraction_changed"));
SoROUTE130->setFromNode(QString("TIMER"));
SoROUTE130->setToField(QString("set_fraction"));
SoROUTE130->setToNode(QString("L_WRIST_ANIMATOR"));
SoProtoBody47->addChild(*SoROUTE130);

SoROUTE* SoROUTE131 = new SoROUTE();
SoROUTE131->setFromField(QString("fraction_changed"));
SoROUTE131->setFromNode(QString("TIMER"));
SoROUTE131->setToField(QString("set_fraction"));
SoROUTE131->setToNode(QString("R_SHOULDER_ANIMATOR"));
SoProtoBody47->addChild(*SoROUTE131);

SoROUTE* SoROUTE132 = new SoROUTE();
SoROUTE132->setFromField(QString("fraction_changed"));
SoROUTE132->setFromNode(QString("TIMER"));
SoROUTE132->setToField(QString("set_fraction"));
SoROUTE132->setToNode(QString("R_ELBOW_ANIMATOR"));
SoProtoBody47->addChild(*SoROUTE132);

SoROUTE* SoROUTE133 = new SoROUTE();
SoROUTE133->setFromField(QString("fraction_changed"));
SoROUTE133->setFromNode(QString("TIMER"));
SoROUTE133->setToField(QString("set_fraction"));
SoROUTE133->setToNode(QString("R_WRIST_ANIMATOR"));
SoProtoBody47->addChild(*SoROUTE133);

SoProtoDeclare19->addChild(*SoProtoBody47);

SoNode17->addChild(*SoProtoDeclare19);

//======================================
//Point to example use in case someone inspects this file
SoAnchor* SoAnchor134 = new SoAnchor();
SoAnchor134->setDescription(QString("InterchangableActorsViaDynamicRouting"));
SoAnchor134->setParameter(new QString[]{QString("target=_blank")}, 1);
SoAnchor134->setUrl(new QString[]{QString("InterchangableActorsViaDynamicRouting.x3d"), QString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.x3d"), QString("InterchangableActorsViaDynamicRouting.wrl"), QString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.wrl")}, 4);
SoShape* SoShape135 = new SoShape();
SoText* SoText136 = new SoText();
SoText136->setString(new QString[]{QString("LOA1_StopAnimation.x3d"), QString("defines a prototype"), QString("for animating a humanoid."), QString(""), QString("Click this text to see"), QString("InterchangableActorsViaDynamicRouting example.")}, 6);
SoFontStyle* SoFontStyle137 = new SoFontStyle();
SoFontStyle137->setJustify(new QString[]{QString("MIDDLE"), QString("MIDDLE")}, 2);
SoFontStyle137->setSize(0.8);
SoText136->setFontStyle(*SoFontStyle137);

SoShape135->setGeometry(*SoText136);

SoVRMLAppearance* SoVRMLAppearance138 = new SoVRMLAppearance();
SoMaterial* SoMaterial139 = new SoMaterial();
SoMaterial139->setDiffuseColor(new float[]{1.0,1.0,0.2});
SoVRMLAppearance138->addChild(*SoMaterial139);

SoShape135->addChild(*SoVRMLAppearance138);

SoAnchor134->addChild(*SoShape135);

SoNode17->addChild(*SoAnchor134);

SoSceneManager0->setSceneGraph(*SoNode17);

return 0;
}
