
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
Someta2->setContent(QString("LOA1_KneelAnimation.x3d"));
Sohead1->addMeta(*Someta2);

Someta* Someta3 = new Someta();
Someta3->setName(QString("description"));
Someta3->setContent(QString("Humanoid animation prototype reusable by any Humanoid."));
Sohead1->addMeta(*Someta3);

Someta* Someta4 = new Someta();
Someta4->setName(QString("creator"));
Someta4->setContent(QString("Tom Miller"));
Sohead1->addMeta(*Someta4);

Someta* Someta5 = new Someta();
Someta5->setName(QString("translator"));
Someta5->setContent(QString("Curt Blais"));
Sohead1->addMeta(*Someta5);

Someta* Someta6 = new Someta();
Someta6->setName(QString("translated"));
Someta6->setContent(QString("1 December 2001"));
Sohead1->addMeta(*Someta6);

Someta* Someta7 = new Someta();
Someta7->setName(QString("modified"));
Someta7->setContent(QString("23 May 2020"));
Sohead1->addMeta(*Someta7);

Someta* Someta8 = new Someta();
Someta8->setName(QString("reference"));
Someta8->setContent(QString("https://www.ballreich.net/vrml/HAnim/nancy_HAnim.wrl"));
Sohead1->addMeta(*Someta8);

Someta* Someta9 = new Someta();
Someta9->setName(QString("reference"));
Someta9->setContent(QString("https://www.HAnim.org/Models/HAnim2001/boxman/protos/LOA1_WalkAnimation.wrl"));
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
Someta13->setContent(QString("Nancy kneel Animation HAnim 2001"));
Sohead1->addMeta(*Someta13);

Someta* Someta14 = new Someta();
Someta14->setName(QString("identifier"));
Someta14->setContent(QString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/LOA1_KneelAnimation.x3d"));
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
SoWorldInfo18->setTitle(QString("LOA1_KneelAnimation.x3d"));
SoNode17->addChild(*SoWorldInfo18);

SoProtoDeclare* SoProtoDeclare19 = new SoProtoDeclare();
SoProtoDeclare19->setName(QString("LOA1_KneelAnimation"));
SoProtoInterface* SoProtoInterface20 = new SoProtoInterface();
Sofield* Sofield21 = new Sofield();
Sofield21->setName(QString("cycleInterval"));
Sofield21->setAccessType(QString("inputOutput"));
Sofield21->setType(QString("SFTime"));
Sofield21->setValue(QString("2"));
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
Sofield23->setValue(QString("false"));
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
SoPositionInterpolator58->setKey(new float[]{0.0,0.3125,0.625,1.0}, 4);
SoPositionInterpolator58->setKeyValue(new float[]{0.0,0.0,0.0,0.0,-0.049999,0.0,0.0,-0.195,0.0,0.0,-0.439997,0.0}, 12);
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
SoOrientationInterpolator61->setKeyValue(new float[]{0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0}, 8);
SoIS* SoIS62 = new SoIS();
Soconnect* Soconnect63 = new Soconnect();
Soconnect63->setNodeField(QString("value_changed"));
Soconnect63->setProtoField(QString("HumanoidRoot_rotation_changed"));
SoIS62->addChild(*Soconnect63);

SoOrientationInterpolator61->addChild(*SoIS62);

SoGroup48->addChild(*SoOrientationInterpolator61);

//no SACROILIAC_ANIMATOR
SoOrientationInterpolator* SoOrientationInterpolator64 = new SoOrientationInterpolator();
SoOrientationInterpolator64->setDEF(QString("L_HIP_ANIMATOR"));
SoOrientationInterpolator64->setKey(new float[]{0.0,0.3125,0.625,1.0}, 4);
SoOrientationInterpolator64->setKeyValue(new float[]{1.0,0.0,0.0,0.0,-1.0,0.0,0.0,0.619393,-1.0,0.0,0.0,1.069302,-1.0,0.0,0.0,1.937315}, 16);
SoIS* SoIS65 = new SoIS();
Soconnect* Soconnect66 = new Soconnect();
Soconnect66->setNodeField(QString("value_changed"));
Soconnect66->setProtoField(QString("l_hip_rotation_changed"));
SoIS65->addChild(*Soconnect66);

SoOrientationInterpolator64->addChild(*SoIS65);

SoGroup48->addChild(*SoOrientationInterpolator64);

SoOrientationInterpolator* SoOrientationInterpolator67 = new SoOrientationInterpolator();
SoOrientationInterpolator67->setDEF(QString("L_KNEE_ANIMATOR"));
SoOrientationInterpolator67->setKey(new float[]{0.0,0.3125,0.625,1.0}, 4);
SoOrientationInterpolator67->setKeyValue(new float[]{1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.615228,1.0,0.0,0.0,0.984524,1.0,0.0,0.0,2.076941}, 16);
SoIS* SoIS68 = new SoIS();
Soconnect* Soconnect69 = new Soconnect();
Soconnect69->setNodeField(QString("value_changed"));
Soconnect69->setProtoField(QString("l_knee_rotation_changed"));
SoIS68->addChild(*Soconnect69);

SoOrientationInterpolator67->addChild(*SoIS68);

SoGroup48->addChild(*SoOrientationInterpolator67);

SoOrientationInterpolator* SoOrientationInterpolator70 = new SoOrientationInterpolator();
SoOrientationInterpolator70->setDEF(QString("L_ANKLE_ANIMATOR"));
SoOrientationInterpolator70->setKey(new float[]{0.0,0.3125,0.625,1.0}, 4);
SoOrientationInterpolator70->setKeyValue(new float[]{1.0,0.0,0.0,0.0,-1.0,0.0,0.0,0.017453,-1.0,0.0,0.0,0.069812,1.0,0.0,0.0,0.261799}, 16);
SoIS* SoIS71 = new SoIS();
Soconnect* Soconnect72 = new Soconnect();
Soconnect72->setNodeField(QString("value_changed"));
Soconnect72->setProtoField(QString("l_ankle_rotation_changed"));
SoIS71->addChild(*Soconnect72);

SoOrientationInterpolator70->addChild(*SoIS71);

SoGroup48->addChild(*SoOrientationInterpolator70);

//no L_MIDTARSAL_ANIMATOR
SoOrientationInterpolator* SoOrientationInterpolator73 = new SoOrientationInterpolator();
SoOrientationInterpolator73->setDEF(QString("R_HIP_ANIMATOR"));
SoOrientationInterpolator73->setKey(new float[]{0.0,0.3125,1.0}, 3);
SoOrientationInterpolator73->setKeyValue(new float[]{1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.523598,-1.0,0.0,0.0,0.157079}, 12);
SoIS* SoIS74 = new SoIS();
Soconnect* Soconnect75 = new Soconnect();
Soconnect75->setNodeField(QString("value_changed"));
Soconnect75->setProtoField(QString("r_hip_rotation_changed"));
SoIS74->addChild(*Soconnect75);

SoOrientationInterpolator73->addChild(*SoIS74);

SoGroup48->addChild(*SoOrientationInterpolator73);

SoOrientationInterpolator* SoOrientationInterpolator76 = new SoOrientationInterpolator();
SoOrientationInterpolator76->setDEF(QString("R_KNEE_ANIMATOR"));
SoOrientationInterpolator76->setKey(new float[]{0.0,0.3125,0.625,1.0}, 4);
SoOrientationInterpolator76->setKeyValue(new float[]{1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.349065,1.0,0.0,0.0,1.023397,0.999934,0.008043,0.008185,1.727938}, 16);
SoIS* SoIS77 = new SoIS();
Soconnect* Soconnect78 = new Soconnect();
Soconnect78->setNodeField(QString("value_changed"));
Soconnect78->setProtoField(QString("r_knee_rotation_changed"));
SoIS77->addChild(*Soconnect78);

SoOrientationInterpolator76->addChild(*SoIS77);

SoGroup48->addChild(*SoOrientationInterpolator76);

SoOrientationInterpolator* SoOrientationInterpolator79 = new SoOrientationInterpolator();
SoOrientationInterpolator79->setDEF(QString("R_ANKLE_ANIMATOR"));
SoOrientationInterpolator79->setKey(new float[]{0.0,0.3125,0.625,1.0}, 4);
SoOrientationInterpolator79->setKeyValue(new float[]{1.0,0.0,0.0,0.0,-0.991692,-0.072372,0.106338,0.205053,-0.981083,-0.103267,0.163741,0.272231,-1.0,0.0,0.0,0.349065}, 16);
SoIS* SoIS80 = new SoIS();
Soconnect* Soconnect81 = new Soconnect();
Soconnect81->setNodeField(QString("value_changed"));
Soconnect81->setProtoField(QString("r_ankle_rotation_changed"));
SoIS80->addChild(*Soconnect81);

SoOrientationInterpolator79->addChild(*SoIS80);

SoGroup48->addChild(*SoOrientationInterpolator79);

//no R_MIDTARSAL_ANIMATOR
SoOrientationInterpolator* SoOrientationInterpolator82 = new SoOrientationInterpolator();
SoOrientationInterpolator82->setDEF(QString("VL5_ANIMATOR"));
SoOrientationInterpolator82->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator82->setKeyValue(new float[]{1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.174533}, 8);
SoIS* SoIS83 = new SoIS();
Soconnect* Soconnect84 = new Soconnect();
Soconnect84->setNodeField(QString("value_changed"));
Soconnect84->setProtoField(QString("vl5_rotation_changed"));
SoIS83->addChild(*Soconnect84);

SoOrientationInterpolator82->addChild(*SoIS83);

SoGroup48->addChild(*SoOrientationInterpolator82);

//no SKULLBASE_ANIMATOR
SoOrientationInterpolator* SoOrientationInterpolator85 = new SoOrientationInterpolator();
SoOrientationInterpolator85->setDEF(QString("L_SHOULDER_ANIMATOR"));
SoOrientationInterpolator85->setKey(new float[]{0.0,0.3125,0.625,1.0}, 4);
SoOrientationInterpolator85->setKeyValue(new float[]{1.0,0.0,0.0,0.0,-1.0,0.0,0.0,0.279252,-1.0,0.0,0.0,0.506145,-1.0,0.0,0.0,0.191986}, 16);
SoIS* SoIS86 = new SoIS();
Soconnect* Soconnect87 = new Soconnect();
Soconnect87->setNodeField(QString("value_changed"));
Soconnect87->setProtoField(QString("l_shoulder_rotation_changed"));
SoIS86->addChild(*Soconnect87);

SoOrientationInterpolator85->addChild(*SoIS86);

SoGroup48->addChild(*SoOrientationInterpolator85);

SoOrientationInterpolator* SoOrientationInterpolator88 = new SoOrientationInterpolator();
SoOrientationInterpolator88->setDEF(QString("L_ELBOW_ANIMATOR"));
SoOrientationInterpolator88->setKey(new float[]{0.0,0.3125,0.625,1.0}, 4);
SoOrientationInterpolator88->setKeyValue(new float[]{1.0,0.0,0.0,0.0,-1.0,0.0,0.0,0.052359,-1.0,0.0,0.0,0.296706,-1.0,0.0,0.0,1.431169}, 16);
SoIS* SoIS89 = new SoIS();
Soconnect* Soconnect90 = new Soconnect();
Soconnect90->setNodeField(QString("value_changed"));
Soconnect90->setProtoField(QString("l_elbow_rotation_changed"));
SoIS89->addChild(*Soconnect90);

SoOrientationInterpolator88->addChild(*SoIS89);

SoGroup48->addChild(*SoOrientationInterpolator88);

//no L_WRIST_ANIMATOR
SoOrientationInterpolator* SoOrientationInterpolator91 = new SoOrientationInterpolator();
SoOrientationInterpolator91->setDEF(QString("R_SHOULDER_ANIMATOR"));
SoOrientationInterpolator91->setKey(new float[]{0.0,0.3125,0.625,1.0}, 4);
SoOrientationInterpolator91->setKeyValue(new float[]{1.0,0.0,0.0,0.0,-1.0,0.0,0.0,0.104719,-1.0,0.0,0.0,0.157079,1.0,0.0,0.0,0.314159}, 16);
SoIS* SoIS92 = new SoIS();
Soconnect* Soconnect93 = new Soconnect();
Soconnect93->setNodeField(QString("value_changed"));
Soconnect93->setProtoField(QString("r_shoulder_rotation_changed"));
SoIS92->addChild(*Soconnect93);

SoOrientationInterpolator91->addChild(*SoIS92);

SoGroup48->addChild(*SoOrientationInterpolator91);

SoOrientationInterpolator* SoOrientationInterpolator94 = new SoOrientationInterpolator();
SoOrientationInterpolator94->setDEF(QString("R_ELBOW_ANIMATOR"));
SoOrientationInterpolator94->setKey(new float[]{0.0,0.3125,0.625,1.0}, 4);
SoOrientationInterpolator94->setKeyValue(new float[]{1.0,0.0,0.0,0.0,-1.0,0.0,0.0,0.837757,-1.0,0.0,0.0,1.239183,-1.0,0.0,0.0,1.500983}, 16);
SoIS* SoIS95 = new SoIS();
Soconnect* Soconnect96 = new Soconnect();
Soconnect96->setNodeField(QString("value_changed"));
Soconnect96->setProtoField(QString("r_elbow_rotation_changed"));
SoIS95->addChild(*Soconnect96);

SoOrientationInterpolator94->addChild(*SoIS95);

SoGroup48->addChild(*SoOrientationInterpolator94);

//no R_WRIST_ANIMATOR
SoProtoBody47->addChild(*SoGroup48);

SoROUTE* SoROUTE97 = new SoROUTE();
SoROUTE97->setFromField(QString("fraction_changed"));
SoROUTE97->setFromNode(QString("TIMER"));
SoROUTE97->setToField(QString("set_fraction"));
SoROUTE97->setToNode(QString("HUMANOIDROOT_POSITION_ANIMATOR"));
SoProtoBody47->addChild(*SoROUTE97);

SoROUTE* SoROUTE98 = new SoROUTE();
SoROUTE98->setFromField(QString("fraction_changed"));
SoROUTE98->setFromNode(QString("TIMER"));
SoROUTE98->setToField(QString("set_fraction"));
SoROUTE98->setToNode(QString("HUMANOIDROOT_ANIMATOR"));
SoProtoBody47->addChild(*SoROUTE98);

SoROUTE* SoROUTE99 = new SoROUTE();
SoROUTE99->setFromField(QString("fraction_changed"));
SoROUTE99->setFromNode(QString("TIMER"));
SoROUTE99->setToField(QString("set_fraction"));
SoROUTE99->setToNode(QString("L_HIP_ANIMATOR"));
SoProtoBody47->addChild(*SoROUTE99);

SoROUTE* SoROUTE100 = new SoROUTE();
SoROUTE100->setFromField(QString("fraction_changed"));
SoROUTE100->setFromNode(QString("TIMER"));
SoROUTE100->setToField(QString("set_fraction"));
SoROUTE100->setToNode(QString("L_KNEE_ANIMATOR"));
SoProtoBody47->addChild(*SoROUTE100);

SoROUTE* SoROUTE101 = new SoROUTE();
SoROUTE101->setFromField(QString("fraction_changed"));
SoROUTE101->setFromNode(QString("TIMER"));
SoROUTE101->setToField(QString("set_fraction"));
SoROUTE101->setToNode(QString("L_ANKLE_ANIMATOR"));
SoProtoBody47->addChild(*SoROUTE101);

SoROUTE* SoROUTE102 = new SoROUTE();
SoROUTE102->setFromField(QString("fraction_changed"));
SoROUTE102->setFromNode(QString("TIMER"));
SoROUTE102->setToField(QString("set_fraction"));
SoROUTE102->setToNode(QString("R_HIP_ANIMATOR"));
SoProtoBody47->addChild(*SoROUTE102);

SoROUTE* SoROUTE103 = new SoROUTE();
SoROUTE103->setFromField(QString("fraction_changed"));
SoROUTE103->setFromNode(QString("TIMER"));
SoROUTE103->setToField(QString("set_fraction"));
SoROUTE103->setToNode(QString("R_KNEE_ANIMATOR"));
SoProtoBody47->addChild(*SoROUTE103);

SoROUTE* SoROUTE104 = new SoROUTE();
SoROUTE104->setFromField(QString("fraction_changed"));
SoROUTE104->setFromNode(QString("TIMER"));
SoROUTE104->setToField(QString("set_fraction"));
SoROUTE104->setToNode(QString("R_ANKLE_ANIMATOR"));
SoProtoBody47->addChild(*SoROUTE104);

SoROUTE* SoROUTE105 = new SoROUTE();
SoROUTE105->setFromField(QString("fraction_changed"));
SoROUTE105->setFromNode(QString("TIMER"));
SoROUTE105->setToField(QString("set_fraction"));
SoROUTE105->setToNode(QString("VL5_ANIMATOR"));
SoProtoBody47->addChild(*SoROUTE105);

SoROUTE* SoROUTE106 = new SoROUTE();
SoROUTE106->setFromField(QString("fraction_changed"));
SoROUTE106->setFromNode(QString("TIMER"));
SoROUTE106->setToField(QString("set_fraction"));
SoROUTE106->setToNode(QString("L_SHOULDER_ANIMATOR"));
SoProtoBody47->addChild(*SoROUTE106);

SoROUTE* SoROUTE107 = new SoROUTE();
SoROUTE107->setFromField(QString("fraction_changed"));
SoROUTE107->setFromNode(QString("TIMER"));
SoROUTE107->setToField(QString("set_fraction"));
SoROUTE107->setToNode(QString("L_ELBOW_ANIMATOR"));
SoProtoBody47->addChild(*SoROUTE107);

SoROUTE* SoROUTE108 = new SoROUTE();
SoROUTE108->setFromField(QString("fraction_changed"));
SoROUTE108->setFromNode(QString("TIMER"));
SoROUTE108->setToField(QString("set_fraction"));
SoROUTE108->setToNode(QString("R_SHOULDER_ANIMATOR"));
SoProtoBody47->addChild(*SoROUTE108);

SoROUTE* SoROUTE109 = new SoROUTE();
SoROUTE109->setFromField(QString("fraction_changed"));
SoROUTE109->setFromNode(QString("TIMER"));
SoROUTE109->setToField(QString("set_fraction"));
SoROUTE109->setToNode(QString("R_ELBOW_ANIMATOR"));
SoProtoBody47->addChild(*SoROUTE109);

SoProtoDeclare19->addChild(*SoProtoBody47);

SoNode17->addChild(*SoProtoDeclare19);

SoAnchor* SoAnchor110 = new SoAnchor();
SoAnchor110->setDescription(QString("InterchangableActorsViaDynamicRouting"));
SoAnchor110->setParameter(new QString[]{QString("target=_blank")}, 1);
SoAnchor110->setUrl(new QString[]{QString("InterchangableActorsViaDynamicRouting.x3d"), QString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.x3d"), QString("InterchangableActorsViaDynamicRouting.wrl"), QString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.wrl")}, 4);
SoShape* SoShape111 = new SoShape();
SoText* SoText112 = new SoText();
SoText112->setString(new QString[]{QString("LOA1_KneelAnimation.x3d"), QString("defines a prototype"), QString("for animating a humanoid."), QString(""), QString("Click this text to see"), QString("InterchangableActorsViaDynamicRouting example.")}, 6);
SoFontStyle* SoFontStyle113 = new SoFontStyle();
SoFontStyle113->setJustify(new QString[]{QString("MIDDLE"), QString("MIDDLE")}, 2);
SoFontStyle113->setSize(0.8);
SoText112->setFontStyle(*SoFontStyle113);

SoShape111->setGeometry(*SoText112);

SoVRMLAppearance* SoVRMLAppearance114 = new SoVRMLAppearance();
SoMaterial* SoMaterial115 = new SoMaterial();
SoMaterial115->setDiffuseColor(new float[]{1.0,1.0,0.2});
SoVRMLAppearance114->addChild(*SoMaterial115);

SoShape111->addChild(*SoVRMLAppearance114);

SoAnchor110->addChild(*SoShape111);

SoNode17->addChild(*SoAnchor110);

SoSceneManager0->setSceneGraph(*SoNode17);

return 0;
}
