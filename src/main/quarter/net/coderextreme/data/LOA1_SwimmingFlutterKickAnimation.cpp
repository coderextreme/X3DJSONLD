
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
Someta2->setContent(QString("LOA1_SwimmingFlutterKickAnimation.x3d"));
Sohead1->addMeta(*Someta2);

Someta* Someta3 = new Someta();
Someta3->setName(QString("description"));
Someta3->setContent(QString("Humanoid animation prototype reusable by any Humanoid."));
Sohead1->addMeta(*Someta3);

Someta* Someta4 = new Someta();
Someta4->setName(QString("creator"));
Someta4->setContent(QString("Etsuko Lippi"));
Sohead1->addMeta(*Someta4);

Someta* Someta5 = new Someta();
Someta5->setName(QString("created"));
Someta5->setContent(QString("13 December 2001"));
Sohead1->addMeta(*Someta5);

Someta* Someta6 = new Someta();
Someta6->setName(QString("modified"));
Someta6->setContent(QString("23 May 2020"));
Sohead1->addMeta(*Someta6);

Someta* Someta7 = new Someta();
Someta7->setName(QString("warning"));
Someta7->setContent(QString("not yet tested, need to compare with NancyDivingExample interpolators"));
Sohead1->addMeta(*Someta7);

Someta* Someta8 = new Someta();
Someta8->setName(QString("reference"));
Someta8->setContent(QString("https://www.HAnim.org"));
Sohead1->addMeta(*Someta8);

Someta* Someta9 = new Someta();
Someta9->setName(QString("reference"));
Someta9->setContent(QString("https://HAnim.org/Models"));
Sohead1->addMeta(*Someta9);

Someta* Someta10 = new Someta();
Someta10->setName(QString("reference"));
Someta10->setContent(QString("https://HAnim.org/Nodes"));
Sohead1->addMeta(*Someta10);

Someta* Someta11 = new Someta();
Someta11->setName(QString("subject"));
Someta11->setContent(QString("Swimming flutter kick Animation HAnim 2001"));
Sohead1->addMeta(*Someta11);

Someta* Someta12 = new Someta();
Someta12->setName(QString("identifier"));
Someta12->setContent(QString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/LOA1_SwimmingFlutterKickAnimation.x3d"));
Sohead1->addMeta(*Someta12);

Someta* Someta13 = new Someta();
Someta13->setName(QString("generator"));
Someta13->setContent(QString("X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit"));
Sohead1->addMeta(*Someta13);

Someta* Someta14 = new Someta();
Someta14->setName(QString("license"));
Someta14->setContent(QString("../license.html"));
Sohead1->addMeta(*Someta14);

SoSceneManager0->setHead(*Sohead1);

SoNode* SoNode15 = new SoNode();
SoWorldInfo* SoWorldInfo16 = new SoWorldInfo();
SoWorldInfo16->setTitle(QString("LOA1_SwimmingFlutterKickAnimation.x3d"));
SoNode15->addChild(*SoWorldInfo16);

SoProtoDeclare* SoProtoDeclare17 = new SoProtoDeclare();
SoProtoDeclare17->setName(QString("LOA1_DivingAnimation"));
SoProtoInterface* SoProtoInterface18 = new SoProtoInterface();
Sofield* Sofield19 = new Sofield();
Sofield19->setName(QString("cycleInterval"));
Sofield19->setAccessType(QString("inputOutput"));
Sofield19->setType(QString("SFTime"));
Sofield19->setValue(QString("7"));
SoProtoInterface18->addChild(*Sofield19);

Sofield* Sofield20 = new Sofield();
Sofield20->setName(QString("enabled"));
Sofield20->setAccessType(QString("inputOutput"));
Sofield20->setType(QString("SFBool"));
Sofield20->setValue(QString("true"));
SoProtoInterface18->addChild(*Sofield20);

Sofield* Sofield21 = new Sofield();
Sofield21->setName(QString("loop"));
Sofield21->setAccessType(QString("inputOutput"));
Sofield21->setType(QString("SFBool"));
Sofield21->setValue(QString("true"));
SoProtoInterface18->addChild(*Sofield21);

Sofield* Sofield22 = new Sofield();
Sofield22->setName(QString("startTime"));
Sofield22->setAccessType(QString("inputOutput"));
Sofield22->setType(QString("SFTime"));
Sofield22->setValue(QString("0"));
SoProtoInterface18->addChild(*Sofield22);

Sofield* Sofield23 = new Sofield();
Sofield23->setName(QString("stopTime"));
Sofield23->setAccessType(QString("inputOutput"));
Sofield23->setType(QString("SFTime"));
Sofield23->setValue(QString("-1"));
SoProtoInterface18->addChild(*Sofield23);

Sofield* Sofield24 = new Sofield();
Sofield24->setName(QString("fraction_changed"));
Sofield24->setAccessType(QString("outputOnly"));
Sofield24->setType(QString("SFFloat"));
SoProtoInterface18->addChild(*Sofield24);

Sofield* Sofield25 = new Sofield();
Sofield25->setName(QString("isActive"));
Sofield25->setAccessType(QString("outputOnly"));
Sofield25->setType(QString("SFBool"));
SoProtoInterface18->addChild(*Sofield25);

Sofield* Sofield26 = new Sofield();
Sofield26->setName(QString("HumanoidRoot_translation_changed"));
Sofield26->setAccessType(QString("outputOnly"));
Sofield26->setType(QString("SFVec3f"));
SoProtoInterface18->addChild(*Sofield26);

Sofield* Sofield27 = new Sofield();
Sofield27->setName(QString("HumanoidRoot_rotation_changed"));
Sofield27->setAccessType(QString("outputOnly"));
Sofield27->setType(QString("SFRotation"));
SoProtoInterface18->addChild(*Sofield27);

Sofield* Sofield28 = new Sofield();
Sofield28->setName(QString("lower_body_rotation_changed"));
Sofield28->setAccessType(QString("outputOnly"));
Sofield28->setType(QString("SFRotation"));
SoProtoInterface18->addChild(*Sofield28);

Sofield* Sofield29 = new Sofield();
Sofield29->setName(QString("l_hip_rotation_changed"));
Sofield29->setAccessType(QString("outputOnly"));
Sofield29->setType(QString("SFRotation"));
SoProtoInterface18->addChild(*Sofield29);

Sofield* Sofield30 = new Sofield();
Sofield30->setName(QString("l_knee_rotation_changed"));
Sofield30->setAccessType(QString("outputOnly"));
Sofield30->setType(QString("SFRotation"));
SoProtoInterface18->addChild(*Sofield30);

Sofield* Sofield31 = new Sofield();
Sofield31->setName(QString("l_ankle_rotation_changed"));
Sofield31->setAccessType(QString("outputOnly"));
Sofield31->setType(QString("SFRotation"));
SoProtoInterface18->addChild(*Sofield31);

Sofield* Sofield32 = new Sofield();
Sofield32->setName(QString("l_midtarsal_rotation_changed"));
Sofield32->setAccessType(QString("outputOnly"));
Sofield32->setType(QString("SFRotation"));
SoProtoInterface18->addChild(*Sofield32);

Sofield* Sofield33 = new Sofield();
Sofield33->setName(QString("r_hip_rotation_changed"));
Sofield33->setAccessType(QString("outputOnly"));
Sofield33->setType(QString("SFRotation"));
SoProtoInterface18->addChild(*Sofield33);

Sofield* Sofield34 = new Sofield();
Sofield34->setName(QString("r_knee_rotation_changed"));
Sofield34->setAccessType(QString("outputOnly"));
Sofield34->setType(QString("SFRotation"));
SoProtoInterface18->addChild(*Sofield34);

Sofield* Sofield35 = new Sofield();
Sofield35->setName(QString("r_ankle_rotation_changed"));
Sofield35->setAccessType(QString("outputOnly"));
Sofield35->setType(QString("SFRotation"));
SoProtoInterface18->addChild(*Sofield35);

Sofield* Sofield36 = new Sofield();
Sofield36->setName(QString("r_midtarsal_rotation_changed"));
Sofield36->setAccessType(QString("outputOnly"));
Sofield36->setType(QString("SFRotation"));
SoProtoInterface18->addChild(*Sofield36);

Sofield* Sofield37 = new Sofield();
Sofield37->setName(QString("vl5_rotation_changed"));
Sofield37->setAccessType(QString("outputOnly"));
Sofield37->setType(QString("SFRotation"));
SoProtoInterface18->addChild(*Sofield37);

Sofield* Sofield38 = new Sofield();
Sofield38->setName(QString("skullbase_rotation_changed"));
Sofield38->setAccessType(QString("outputOnly"));
Sofield38->setType(QString("SFRotation"));
SoProtoInterface18->addChild(*Sofield38);

Sofield* Sofield39 = new Sofield();
Sofield39->setName(QString("l_shoulder_rotation_changed"));
Sofield39->setAccessType(QString("outputOnly"));
Sofield39->setType(QString("SFRotation"));
SoProtoInterface18->addChild(*Sofield39);

Sofield* Sofield40 = new Sofield();
Sofield40->setName(QString("l_elbow_rotation_changed"));
Sofield40->setAccessType(QString("outputOnly"));
Sofield40->setType(QString("SFRotation"));
SoProtoInterface18->addChild(*Sofield40);

Sofield* Sofield41 = new Sofield();
Sofield41->setName(QString("l_wrist_rotation_changed"));
Sofield41->setAccessType(QString("outputOnly"));
Sofield41->setType(QString("SFRotation"));
SoProtoInterface18->addChild(*Sofield41);

Sofield* Sofield42 = new Sofield();
Sofield42->setName(QString("r_shoulder_rotation_changed"));
Sofield42->setAccessType(QString("outputOnly"));
Sofield42->setType(QString("SFRotation"));
SoProtoInterface18->addChild(*Sofield42);

Sofield* Sofield43 = new Sofield();
Sofield43->setName(QString("r_elbow_rotation_changed"));
Sofield43->setAccessType(QString("outputOnly"));
Sofield43->setType(QString("SFRotation"));
SoProtoInterface18->addChild(*Sofield43);

Sofield* Sofield44 = new Sofield();
Sofield44->setName(QString("r_wrist_rotation_changed"));
Sofield44->setAccessType(QString("outputOnly"));
Sofield44->setType(QString("SFRotation"));
SoProtoInterface18->addChild(*Sofield44);

SoProtoDeclare17->addChild(*SoProtoInterface18);

SoProtoBody* SoProtoBody45 = new SoProtoBody();
SoGroup* SoGroup46 = new SoGroup();
SoTimeSensor* SoTimeSensor47 = new SoTimeSensor();
SoTimeSensor47->setDEF(QString("TIMER"));
SoTimeSensor47->setLoop(true);
SoIS* SoIS48 = new SoIS();
Soconnect* Soconnect49 = new Soconnect();
Soconnect49->setNodeField(QString("cycleInterval"));
Soconnect49->setProtoField(QString("cycleInterval"));
SoIS48->addChild(*Soconnect49);

Soconnect* Soconnect50 = new Soconnect();
Soconnect50->setNodeField(QString("enabled"));
Soconnect50->setProtoField(QString("enabled"));
SoIS48->addChild(*Soconnect50);

Soconnect* Soconnect51 = new Soconnect();
Soconnect51->setNodeField(QString("loop"));
Soconnect51->setProtoField(QString("loop"));
SoIS48->addChild(*Soconnect51);

Soconnect* Soconnect52 = new Soconnect();
Soconnect52->setNodeField(QString("startTime"));
Soconnect52->setProtoField(QString("startTime"));
SoIS48->addChild(*Soconnect52);

Soconnect* Soconnect53 = new Soconnect();
Soconnect53->setNodeField(QString("stopTime"));
Soconnect53->setProtoField(QString("stopTime"));
SoIS48->addChild(*Soconnect53);

Soconnect* Soconnect54 = new Soconnect();
Soconnect54->setNodeField(QString("fraction_changed"));
Soconnect54->setProtoField(QString("fraction_changed"));
SoIS48->addChild(*Soconnect54);

Soconnect* Soconnect55 = new Soconnect();
Soconnect55->setNodeField(QString("isActive"));
Soconnect55->setProtoField(QString("isActive"));
SoIS48->addChild(*Soconnect55);

SoTimeSensor47->addChild(*SoIS48);

SoGroup46->addChild(*SoTimeSensor47);

SoPositionInterpolator* SoPositionInterpolator56 = new SoPositionInterpolator();
SoPositionInterpolator56->setDEF(QString("HUMANOIDROOT_POSITION_ANIMATOR"));
SoPositionInterpolator56->setKey(new float[]{0.0,0.04167,0.125,0.1667,0.2083,0.25,0.2917,0.375,0.4583,0.5,0.5417,0.5833,0.625,0.7083,0.75,0.7917,0.875,0.9167,1.0}, 19);
SoPositionInterpolator56->setKeyValue(new float[]{0.0,-0.00928,0.0,0.0,-0.003858,0.0,0.0,-0.008847,0.0,0.0,-0.01486,0.0,0.0,-0.02641,0.0,0.0,-0.03934,0.0,0.0,-0.0502,0.0,0.0,-0.07469,0.0,0.0,-0.02732,0.0,0.0,-0.01608,0.0,0.0,-0.01129,0.0,0.0,-0.005819,0.0,0.0,-0.002004,0.0,0.0,-0.002579,0.0,0.0,-0.0143,0.0,0.0,-0.03799,0.0,0.0,-0.05648,0.0,0.0,-0.045,0.0,0.0,-0.00928,0.0}, 57);
SoIS* SoIS57 = new SoIS();
Soconnect* Soconnect58 = new Soconnect();
Soconnect58->setNodeField(QString("value_changed"));
Soconnect58->setProtoField(QString("HumanoidRoot_translation_changed"));
SoIS57->addChild(*Soconnect58);

SoPositionInterpolator56->addChild(*SoIS57);

SoGroup46->addChild(*SoPositionInterpolator56);

SoOrientationInterpolator* SoOrientationInterpolator59 = new SoOrientationInterpolator();
SoOrientationInterpolator59->setDEF(QString("HUMANOIDROOT_ANIMATOR"));
SoOrientationInterpolator59->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator59->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 8);
SoIS* SoIS60 = new SoIS();
Soconnect* Soconnect61 = new Soconnect();
Soconnect61->setNodeField(QString("value_changed"));
Soconnect61->setProtoField(QString("HumanoidRoot_rotation_changed"));
SoIS60->addChild(*Soconnect61);

SoOrientationInterpolator59->addChild(*SoIS60);

SoGroup46->addChild(*SoOrientationInterpolator59);

//no SACROILIAC_ANIMATOR
SoOrientationInterpolator* SoOrientationInterpolator62 = new SoOrientationInterpolator();
SoOrientationInterpolator62->setDEF(QString("L_HIP_ANIMATOR"));
SoOrientationInterpolator62->setKey(new float[]{0.0,0.25,0.375,0.6667,0.7917,0.9167,1.0}, 7);
SoOrientationInterpolator62->setKeyValue(new float[]{-0.873,0.06094,0.484,0.2865,0.9963,-0.01057,0.08481,0.2488,0.9965,0.01591,-0.08222,0.3836,-1.0,0.0,0.0,0.5518,-0.9964,0.02231,0.0817,0.5351,-0.9809,0.04912,0.1881,0.5204,-0.873,0.06094,0.484,0.2865}, 28);
SoIS* SoIS63 = new SoIS();
Soconnect* Soconnect64 = new Soconnect();
Soconnect64->setNodeField(QString("value_changed"));
Soconnect64->setProtoField(QString("l_hip_rotation_changed"));
SoIS63->addChild(*Soconnect64);

SoOrientationInterpolator62->addChild(*SoIS63);

SoGroup46->addChild(*SoOrientationInterpolator62);

SoOrientationInterpolator* SoOrientationInterpolator65 = new SoOrientationInterpolator();
SoOrientationInterpolator65->setDEF(QString("L_KNEE_ANIMATOR"));
SoOrientationInterpolator65->setKey(new float[]{0.0,0.2083,0.375,0.5,0.6667,0.7917,0.9167,1.0}, 8);
SoOrientationInterpolator65->setKeyValue(new float[]{1.0,0.0,0.0,0.3226,1.0,0.0,0.0,0.1556,1.0,0.0,0.0,0.08678,1.0,0.0,0.0,0.8751,1.0,0.0,0.0,1.131,1.0,0.0,0.0,0.09961,1.0,0.0,0.0,0.3942,1.0,0.0,0.0,0.3226}, 32);
SoIS* SoIS66 = new SoIS();
Soconnect* Soconnect67 = new Soconnect();
Soconnect67->setNodeField(QString("value_changed"));
Soconnect67->setProtoField(QString("l_knee_rotation_changed"));
SoIS66->addChild(*Soconnect67);

SoOrientationInterpolator65->addChild(*SoIS66);

SoGroup46->addChild(*SoOrientationInterpolator65);

SoOrientationInterpolator* SoOrientationInterpolator68 = new SoOrientationInterpolator();
SoOrientationInterpolator68->setDEF(QString("L_ANKLE_ANIMATOR"));
SoOrientationInterpolator68->setKey(new float[]{0.0,0.125,0.2083,0.375,0.4583,0.5,0.6667,0.75,0.7917,0.9167,1.0}, 11);
SoOrientationInterpolator68->setKeyValue(new float[]{1.0,0.0,0.0,0.6001,1.0,0.0,0.0,0.6509,1.0,0.0,0.0,0.6001,1.0,0.0,0.0,0.6001,1.0,0.0,0.0,0.6509,1.0,0.0,0.0,0.6001,1.0,0.0,0.0,0.6001,1.0,0.0,0.0,0.6509,1.0,0.0,0.0,0.6001,1.0,0.0,0.0,0.6509,1.0,0.0,0.0,0.6001}, 44);
SoIS* SoIS69 = new SoIS();
Soconnect* Soconnect70 = new Soconnect();
Soconnect70->setNodeField(QString("value_changed"));
Soconnect70->setProtoField(QString("l_ankle_rotation_changed"));
SoIS69->addChild(*Soconnect70);

SoOrientationInterpolator68->addChild(*SoIS69);

SoGroup46->addChild(*SoOrientationInterpolator68);

//no L_MIDTARSAL_ANIMATOR
SoOrientationInterpolator* SoOrientationInterpolator71 = new SoOrientationInterpolator();
SoOrientationInterpolator71->setDEF(QString("R_HIP_ANIMATOR"));
SoOrientationInterpolator71->setKey(new float[]{0.0,0.125,0.2083,0.2917,0.5,0.7917,0.9167,1.0}, 8);
SoOrientationInterpolator71->setKeyValue(new float[]{-0.5831,0.03511,0.8116,0.1481,-0.995,0.02296,0.09674,0.4683,-1.0,0.00192,0.007964,0.4732,-0.998,-0.0158,-0.06102,0.5079,-0.9131,-0.06243,-0.403,0.3361,1.0,0.0,0.0,0.2571,0.9891,-0.02805,0.1444,0.3879,-0.5831,0.03511,0.8116,0.1481}, 32);
SoIS* SoIS72 = new SoIS();
Soconnect* Soconnect73 = new Soconnect();
Soconnect73->setNodeField(QString("value_changed"));
Soconnect73->setProtoField(QString("r_hip_rotation_changed"));
SoIS72->addChild(*Soconnect73);

SoOrientationInterpolator71->addChild(*SoIS72);

SoGroup46->addChild(*SoOrientationInterpolator71);

SoOrientationInterpolator* SoOrientationInterpolator74 = new SoOrientationInterpolator();
SoOrientationInterpolator74->setDEF(QString("R_KNEE_ANIMATOR"));
SoOrientationInterpolator74->setKey(new float[]{0.0,0.125,0.2083,0.375,0.5,0.6667,0.9167,1.0}, 8);
SoOrientationInterpolator74->setKeyValue(new float[]{1.0,0.0,0.0,0.8573,1.0,0.0,0.0,0.5351,1.0,0.0,0.0,0.1756,1.0,0.0,0.0,0.1194,1.0,0.0,0.0,0.3153,1.0,0.0,0.0,0.09354,1.0,0.0,0.0,0.08558,1.0,0.0,0.0,0.8573}, 32);
SoIS* SoIS75 = new SoIS();
Soconnect* Soconnect76 = new Soconnect();
Soconnect76->setNodeField(QString("value_changed"));
Soconnect76->setProtoField(QString("r_knee_rotation_changed"));
SoIS75->addChild(*Soconnect76);

SoOrientationInterpolator74->addChild(*SoIS75);

SoGroup46->addChild(*SoOrientationInterpolator74);

SoOrientationInterpolator* SoOrientationInterpolator77 = new SoOrientationInterpolator();
SoOrientationInterpolator77->setDEF(QString("R_ANKLE_ANIMATOR"));
SoOrientationInterpolator77->setKey(new float[]{0.0,0.125,0.2083,0.375,0.4583,0.5,0.6667,0.75,0.7917,0.9167,1.0}, 11);
SoOrientationInterpolator77->setKeyValue(new float[]{1.0,0.0,0.0,0.8001,1.0,0.0,0.0,0.8509,1.0,0.0,0.0,0.8001,1.0,0.0,0.0,0.8001,1.0,0.0,0.0,0.8509,1.0,0.0,0.0,0.8001,1.0,0.0,0.0,0.8001,1.0,0.0,0.0,0.8001,1.0,0.0,0.0,0.8001,1.0,0.0,0.0,0.8509,1.0,0.0,0.0,0.86001}, 44);
SoIS* SoIS78 = new SoIS();
Soconnect* Soconnect79 = new Soconnect();
Soconnect79->setNodeField(QString("value_changed"));
Soconnect79->setProtoField(QString("r_ankle_rotation_changed"));
SoIS78->addChild(*Soconnect79);

SoOrientationInterpolator77->addChild(*SoIS78);

SoGroup46->addChild(*SoOrientationInterpolator77);

//no L_MIDTARSAL_ANIMATOR
SoOrientationInterpolator* SoOrientationInterpolator80 = new SoOrientationInterpolator();
SoOrientationInterpolator80->setDEF(QString("VL5_ANIMATOR"));
SoOrientationInterpolator80->setKey(new float[]{0.0,0.2083,0.375,0.75,0.8333,1.0}, 6);
SoOrientationInterpolator80->setKeyValue(new float[]{0.0,1.0,0.0,0.0826,-0.01972,-0.5974,0.8017,0.08231,0.009296,-0.9648,0.2627,0.1734,-0.01238,0.9549,-0.2968,0.08732,-0.008125,0.9691,-0.2463,0.158,0.0,1.0,0.0,0.0826}, 24);
SoIS* SoIS81 = new SoIS();
Soconnect* Soconnect82 = new Soconnect();
Soconnect82->setNodeField(QString("value_changed"));
Soconnect82->setProtoField(QString("vl5_rotation_changed"));
SoIS81->addChild(*Soconnect82);

SoOrientationInterpolator80->addChild(*SoIS81);

SoGroup46->addChild(*SoOrientationInterpolator80);

SoOrientationInterpolator* SoOrientationInterpolator83 = new SoOrientationInterpolator();
SoOrientationInterpolator83->setDEF(QString("SKULLBASE_ANIMATOR"));
SoOrientationInterpolator83->setKey(new float[]{0.0,0.28,0.3,0.32,0.4,0.45,0.6,0.65,0.7,0.75,0.85,0.9,0.95,1.0}, 14);
SoOrientationInterpolator83->setKeyValue(new float[]{-1.0,0.0,0.0,1.0,-1.0,0.0,0.0,1.0,-1.0,0.0,0.0,0.999,-1.0,0.0,0.0,0.99,-1.0,0.0,0.0,0.99,-1.0,0.0,0.0,0.9,-1.0,0.0,0.0,0.9,-1.0,0.0,0.0,0.9,-1.0,0.0,0.0,0.9,-1.0,0.0,0.0,0.9,-1.0,0.0,0.0,0.9,-1.0,0.0,0.0,0.9,-1.0,0.0,0.0,0.9,-1.0,0.0,0.0,1.0}, 56);
SoIS* SoIS84 = new SoIS();
Soconnect* Soconnect85 = new Soconnect();
Soconnect85->setNodeField(QString("value_changed"));
Soconnect85->setProtoField(QString("skullbase_rotation_changed"));
SoIS84->addChild(*Soconnect85);

SoOrientationInterpolator83->addChild(*SoIS84);

SoGroup46->addChild(*SoOrientationInterpolator83);

SoOrientationInterpolator* SoOrientationInterpolator86 = new SoOrientationInterpolator();
SoOrientationInterpolator86->setDEF(QString("L_SHOULDER_ANIMATOR"));
SoOrientationInterpolator86->setKey(new float[]{0.0,0.25,0.375,0.6667,0.7917,0.9167,1.0}, 7);
SoOrientationInterpolator86->setKeyValue(new float[]{0.0,0.0,1.0,0.1,0.0,0.0,1.0,0.2,0.0,0.0,1.0,0.2,0.86,0.25,0.42,0.5,0.86,0.25,0.42,0.8,0.86,0.25,0.42,0.4,0.86,0.25,0.42,0.2}, 28);
SoIS* SoIS87 = new SoIS();
Soconnect* Soconnect88 = new Soconnect();
Soconnect88->setNodeField(QString("value_changed"));
Soconnect88->setProtoField(QString("l_shoulder_rotation_changed"));
SoIS87->addChild(*Soconnect88);

SoOrientationInterpolator86->addChild(*SoIS87);

SoGroup46->addChild(*SoOrientationInterpolator86);

SoOrientationInterpolator* SoOrientationInterpolator89 = new SoOrientationInterpolator();
SoOrientationInterpolator89->setDEF(QString("L_ELBOW_ANIMATOR"));
SoOrientationInterpolator89->setKey(new float[]{0.0,0.28,0.32,0.64,0.76,1.0}, 6);
SoOrientationInterpolator89->setKeyValue(new float[]{0.0,0.0,1.0,0.0,-1.0,0.0,0.0,0.1229,-1.0,0.0,0.0,0.1229,-1.0,0.0,0.0,0.5976,-1.0,0.0,0.0,0.3917,0.0,0.0,1.0,0.0}, 24);
SoIS* SoIS90 = new SoIS();
Soconnect* Soconnect91 = new Soconnect();
Soconnect91->setNodeField(QString("value_changed"));
Soconnect91->setProtoField(QString("l_elbow_rotation_changed"));
SoIS90->addChild(*Soconnect91);

SoOrientationInterpolator89->addChild(*SoIS90);

SoGroup46->addChild(*SoOrientationInterpolator89);

SoOrientationInterpolator* SoOrientationInterpolator92 = new SoOrientationInterpolator();
SoOrientationInterpolator92->setDEF(QString("L_WRIST_ANIMATOR"));
SoOrientationInterpolator92->setKey(new float[]{0.0,0.32,0.64,0.88,1.0}, 5);
SoOrientationInterpolator92->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.067,0.98,-0.128,4.15,0.067,0.98,-0.128,4.15,0.067,0.98,-0.128,4.15,0.0,0.0,1.0,0.0}, 20);
SoIS* SoIS93 = new SoIS();
Soconnect* Soconnect94 = new Soconnect();
Soconnect94->setNodeField(QString("value_changed"));
Soconnect94->setProtoField(QString("l_wrist_rotation_changed"));
SoIS93->addChild(*Soconnect94);

SoOrientationInterpolator92->addChild(*SoIS93);

SoGroup46->addChild(*SoOrientationInterpolator92);

SoOrientationInterpolator* SoOrientationInterpolator95 = new SoOrientationInterpolator();
SoOrientationInterpolator95->setDEF(QString("R_SHOULDER_ANIMATOR"));
SoOrientationInterpolator95->setKey(new float[]{0.0,0.45,0.64,0.76,0.88,1.0}, 6);
SoOrientationInterpolator95->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.9992,0.02042,0.03558,7.2,0.9989,-0.04623,0.005159,4.079,-0.8687,-0.2525,-0.4261,1.501,-0.941,-0.2893,-0.1754,0.4788,0.0,0.0,1.0,0.0}, 24);
SoIS* SoIS96 = new SoIS();
Soconnect* Soconnect97 = new Soconnect();
Soconnect97->setNodeField(QString("value_changed"));
Soconnect97->setProtoField(QString("r_shoulder_rotation_changed"));
SoIS96->addChild(*Soconnect97);

SoOrientationInterpolator95->addChild(*SoIS96);

SoGroup46->addChild(*SoOrientationInterpolator95);

SoOrientationInterpolator* SoOrientationInterpolator98 = new SoOrientationInterpolator();
SoOrientationInterpolator98->setDEF(QString("R_ELBOW_ANIMATOR"));
SoOrientationInterpolator98->setKey(new float[]{0.0,0.28,0.32,0.64,0.76,1.0}, 6);
SoOrientationInterpolator98->setKeyValue(new float[]{0.0,0.0,1.0,0.0,-1.0,0.0,0.0,0.04151,-1.0,0.0,0.0,0.04151,-1.0,0.0,0.0,0.5855,-1.0,0.0,0.0,0.5852,0.0,0.0,1.0,0.0}, 24);
SoIS* SoIS99 = new SoIS();
Soconnect* Soconnect100 = new Soconnect();
Soconnect100->setNodeField(QString("value_changed"));
Soconnect100->setProtoField(QString("r_elbow_rotation_changed"));
SoIS99->addChild(*Soconnect100);

SoOrientationInterpolator98->addChild(*SoIS99);

SoGroup46->addChild(*SoOrientationInterpolator98);

SoOrientationInterpolator* SoOrientationInterpolator101 = new SoOrientationInterpolator();
SoOrientationInterpolator101->setDEF(QString("R_WRIST_ANIMATOR"));
SoOrientationInterpolator101->setKey(new float[]{0.0,0.28,0.32,0.64,0.76,1.0}, 6);
SoOrientationInterpolator101->setKeyValue(new float[]{0.0,0.0,1.0,0.0,-0.0585279,0.983903,-0.168849,1.85956,-0.0585279,0.983903,-0.168849,1.85956,-0.00222418,0.99801,-0.0630095,1.46072,0.0,1.0,0.0,0.497349,0.0,0.0,1.0,0.0}, 24);
SoIS* SoIS102 = new SoIS();
Soconnect* Soconnect103 = new Soconnect();
Soconnect103->setNodeField(QString("value_changed"));
Soconnect103->setProtoField(QString("r_wrist_rotation_changed"));
SoIS102->addChild(*Soconnect103);

SoOrientationInterpolator101->addChild(*SoIS102);

SoGroup46->addChild(*SoOrientationInterpolator101);

SoProtoBody45->addChild(*SoGroup46);

SoROUTE* SoROUTE104 = new SoROUTE();
SoROUTE104->setFromField(QString("fraction_changed"));
SoROUTE104->setFromNode(QString("TIMER"));
SoROUTE104->setToField(QString("set_fraction"));
SoROUTE104->setToNode(QString("HUMANOIDROOT_POSITION_ANIMATOR"));
SoProtoBody45->addChild(*SoROUTE104);

SoROUTE* SoROUTE105 = new SoROUTE();
SoROUTE105->setFromField(QString("fraction_changed"));
SoROUTE105->setFromNode(QString("TIMER"));
SoROUTE105->setToField(QString("set_fraction"));
SoROUTE105->setToNode(QString("HUMANOIDROOT_ANIMATOR"));
SoProtoBody45->addChild(*SoROUTE105);

SoROUTE* SoROUTE106 = new SoROUTE();
SoROUTE106->setFromField(QString("fraction_changed"));
SoROUTE106->setFromNode(QString("TIMER"));
SoROUTE106->setToField(QString("set_fraction"));
SoROUTE106->setToNode(QString("SKULLBASE_ANIMATOR"));
SoProtoBody45->addChild(*SoROUTE106);

SoROUTE* SoROUTE107 = new SoROUTE();
SoROUTE107->setFromField(QString("fraction_changed"));
SoROUTE107->setFromNode(QString("TIMER"));
SoROUTE107->setToField(QString("set_fraction"));
SoROUTE107->setToNode(QString("VL5_ANIMATOR"));
SoProtoBody45->addChild(*SoROUTE107);

SoROUTE* SoROUTE108 = new SoROUTE();
SoROUTE108->setFromField(QString("fraction_changed"));
SoROUTE108->setFromNode(QString("TIMER"));
SoROUTE108->setToField(QString("set_fraction"));
SoROUTE108->setToNode(QString("L_HIP_ANIMATOR"));
SoProtoBody45->addChild(*SoROUTE108);

SoROUTE* SoROUTE109 = new SoROUTE();
SoROUTE109->setFromField(QString("fraction_changed"));
SoROUTE109->setFromNode(QString("TIMER"));
SoROUTE109->setToField(QString("set_fraction"));
SoROUTE109->setToNode(QString("L_KNEE_ANIMATOR"));
SoProtoBody45->addChild(*SoROUTE109);

SoROUTE* SoROUTE110 = new SoROUTE();
SoROUTE110->setFromField(QString("fraction_changed"));
SoROUTE110->setFromNode(QString("TIMER"));
SoROUTE110->setToField(QString("set_fraction"));
SoROUTE110->setToNode(QString("L_ANKLE_ANIMATOR"));
SoProtoBody45->addChild(*SoROUTE110);

SoROUTE* SoROUTE111 = new SoROUTE();
SoROUTE111->setFromField(QString("fraction_changed"));
SoROUTE111->setFromNode(QString("TIMER"));
SoROUTE111->setToField(QString("set_fraction"));
SoROUTE111->setToNode(QString("R_HIP_ANIMATOR"));
SoProtoBody45->addChild(*SoROUTE111);

SoROUTE* SoROUTE112 = new SoROUTE();
SoROUTE112->setFromField(QString("fraction_changed"));
SoROUTE112->setFromNode(QString("TIMER"));
SoROUTE112->setToField(QString("set_fraction"));
SoROUTE112->setToNode(QString("R_KNEE_ANIMATOR"));
SoProtoBody45->addChild(*SoROUTE112);

SoROUTE* SoROUTE113 = new SoROUTE();
SoROUTE113->setFromField(QString("fraction_changed"));
SoROUTE113->setFromNode(QString("TIMER"));
SoROUTE113->setToField(QString("set_fraction"));
SoROUTE113->setToNode(QString("R_ANKLE_ANIMATOR"));
SoProtoBody45->addChild(*SoROUTE113);

SoROUTE* SoROUTE114 = new SoROUTE();
SoROUTE114->setFromField(QString("fraction_changed"));
SoROUTE114->setFromNode(QString("TIMER"));
SoROUTE114->setToField(QString("set_fraction"));
SoROUTE114->setToNode(QString("L_SHOULDER_ANIMATOR"));
SoProtoBody45->addChild(*SoROUTE114);

SoROUTE* SoROUTE115 = new SoROUTE();
SoROUTE115->setFromField(QString("fraction_changed"));
SoROUTE115->setFromNode(QString("TIMER"));
SoROUTE115->setToField(QString("set_fraction"));
SoROUTE115->setToNode(QString("L_ELBOW_ANIMATOR"));
SoProtoBody45->addChild(*SoROUTE115);

SoROUTE* SoROUTE116 = new SoROUTE();
SoROUTE116->setFromField(QString("fraction_changed"));
SoROUTE116->setFromNode(QString("TIMER"));
SoROUTE116->setToField(QString("set_fraction"));
SoROUTE116->setToNode(QString("L_WRIST_ANIMATOR"));
SoProtoBody45->addChild(*SoROUTE116);

SoROUTE* SoROUTE117 = new SoROUTE();
SoROUTE117->setFromField(QString("fraction_changed"));
SoROUTE117->setFromNode(QString("TIMER"));
SoROUTE117->setToField(QString("set_fraction"));
SoROUTE117->setToNode(QString("R_SHOULDER_ANIMATOR"));
SoProtoBody45->addChild(*SoROUTE117);

SoROUTE* SoROUTE118 = new SoROUTE();
SoROUTE118->setFromField(QString("fraction_changed"));
SoROUTE118->setFromNode(QString("TIMER"));
SoROUTE118->setToField(QString("set_fraction"));
SoROUTE118->setToNode(QString("R_ELBOW_ANIMATOR"));
SoProtoBody45->addChild(*SoROUTE118);

SoROUTE* SoROUTE119 = new SoROUTE();
SoROUTE119->setFromField(QString("fraction_changed"));
SoROUTE119->setFromNode(QString("TIMER"));
SoROUTE119->setToField(QString("set_fraction"));
SoROUTE119->setToNode(QString("R_WRIST_ANIMATOR"));
SoProtoBody45->addChild(*SoROUTE119);

SoProtoDeclare17->addChild(*SoProtoBody45);

SoNode15->addChild(*SoProtoDeclare17);

SoViewpoint* SoViewpoint120 = new SoViewpoint();
SoViewpoint120->setDescription(QString("LOA1_SwimmingFlutterKickAnimation scene"));
SoViewpoint120->setPosition(new float[]{0.0,0.0,12.0});
SoNode15->addChild(*SoViewpoint120);

SoAnchor* SoAnchor121 = new SoAnchor();
SoAnchor121->setDescription(QString("Nancy Diving"));
SoAnchor121->setParameter(new QString[]{QString("target=_blank")}, 1);
SoAnchor121->setUrl(new QString[]{QString("NancyDiving.x3d"), QString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/NancyDiving.x3d"), QString("NancyDiving.wrl"), QString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/NancyDiving.wrl")}, 4);
SoShape* SoShape122 = new SoShape();
SoText* SoText123 = new SoText();
SoText123->setString(new QString[]{QString("LOA1_SwimmingFlutterKickAnimation.x3d"), QString("defines a prototype"), QString("for animating a humanoid."), QString(""), QString("Click text to see example.")}, 5);
SoFontStyle* SoFontStyle124 = new SoFontStyle();
SoFontStyle124->setJustify(new QString[]{QString("MIDDLE"), QString("MIDDLE")}, 2);
SoFontStyle124->setSize(0.8);
SoText123->setFontStyle(*SoFontStyle124);

SoShape122->setGeometry(*SoText123);

SoVRMLAppearance* SoVRMLAppearance125 = new SoVRMLAppearance();
SoMaterial* SoMaterial126 = new SoMaterial();
SoMaterial126->setDiffuseColor(new float[]{1.0,1.0,0.2});
SoVRMLAppearance125->addChild(*SoMaterial126);

SoShape122->addChild(*SoVRMLAppearance125);

SoAnchor121->addChild(*SoShape122);

SoNode15->addChild(*SoAnchor121);

SoSceneManager0->setSceneGraph(*SoNode15);

return 0;
}
