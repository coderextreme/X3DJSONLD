
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
Someta3->setContent(QString("HAnimBehaviorPrototypes.x3d"));
Sohead1->addMeta(*Someta3);

Someta* Someta4 = new Someta();
Someta4->setName(QString("description"));
Someta4->setContent(QString("Prototypes for HAnimBehavior node, which collects OrientationInterpolators for aggregate animation of an HAnim humanoid model, and HAnimBodyBehaviorChooser, which selects one body and enables/disables multiple aggregated behaviors."));
Sohead1->addMeta(*Someta4);

Someta* Someta5 = new Someta();
Someta5->setName(QString("creator"));
Someta5->setContent(QString("Don Brutzman, Jeff Weekley, MV4205 Advanced X3D Authoring class, and Keith Victor"));
Sohead1->addMeta(*Someta5);

Someta* Someta6 = new Someta();
Someta6->setName(QString("created"));
Someta6->setContent(QString("2 May 2006"));
Sohead1->addMeta(*Someta6);

Someta* Someta7 = new Someta();
Someta7->setName(QString("modified"));
Someta7->setContent(QString("4 July 2020"));
Sohead1->addMeta(*Someta7);

Someta* Someta8 = new Someta();
Someta8->setName(QString("reference"));
Someta8->setContent(QString("Web3D2007BlendedBehaviorsChangeableBodies.pdf"));
Sohead1->addMeta(*Someta8);

Someta* Someta9 = new Someta();
Someta9->setName(QString("reference"));
Someta9->setContent(QString("https://www.web3d.org/files/specifications/19774/V1.0"));
Sohead1->addMeta(*Someta9);

Someta* Someta10 = new Someta();
Someta10->setName(QString("reference"));
Someta10->setContent(QString("https://www.web3d.org/x3d/specifications/ISO-IEC-19775-X3DAbstractSpecification_Revision1_to_Part1/Part01/components/hanim.html"));
Sohead1->addMeta(*Someta10);

Someta* Someta11 = new Someta();
Someta11->setName(QString("reference"));
Someta11->setContent(QString("InterchangableActorsViaDynamicRoutingPrototypes.x3d"));
Sohead1->addMeta(*Someta11);

Someta* Someta12 = new Someta();
Someta12->setName(QString("reference"));
Someta12->setContent(QString("ApaydinThesis.pdf"));
Sohead1->addMeta(*Someta12);

Someta* Someta13 = new Someta();
Someta13->setName(QString("subject"));
Someta13->setContent(QString("X3D HAnim humanoid animation behaviors"));
Sohead1->addMeta(*Someta13);

Someta* Someta14 = new Someta();
Someta14->setName(QString("warning"));
Someta14->setContent(QString("under development. should joint translations be exposed? upgrade to HAnim v2.2"));
Sohead1->addMeta(*Someta14);

Someta* Someta15 = new Someta();
Someta15->setName(QString("identifier"));
Someta15->setContent(QString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/HAnimBehaviorPrototypes.x3d"));
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
SoWorldInfo19->setTitle(QString("HAnimBehaviorPrototypes.x3d"));
SoNode18->addChild(*SoWorldInfo19);

SoProtoDeclare* SoProtoDeclare20 = new SoProtoDeclare();
SoProtoDeclare20->setName(QString("HAnimBehavior"));
SoProtoDeclare20->setAppinfo(QString("The HAnimBehavior node models a single humanoid behavior either for an entire body or simply parts of a body. It collects a TimeSensor clock with a single PositionInterpolator and multiple OrientationInterpolator nodes to provide a single humanoid behavior."));
SoProtoDeclare20->setDocumentation(QString("https://www.web3d.org/files/specifications/19774/V1.0/"));
SoProtoInterface* SoProtoInterface21 = new SoProtoInterface();
//supported Level of Articulation (LOA)
//shared common input for single TimeSensor animating all interpolators, since different Behaviors may have different cycleInterval durations
//TODO: add other X3D 3.0 TimeSensor fields (pause etc.)
//Not supported: animated translation of individual joints
//pass in key/keyValue array pairs for single PositionInterpolator
//pass in key/keyValue array pairs and expose named output for each OrientationInterpolator, joint by joint
Sofield* Sofield22 = new Sofield();
Sofield22->setName(QString("supportedLOA"));
Sofield22->setAccessType(QString("inputOutput"));
Sofield22->setAppinfo(QString("Supported Level of Articulation (LOA) support needed by authored HAnimBehavior set of OrientationInterpolator values. Legal values 0 1 2 3."));
Sofield22->setType(QString("SFInt32"));
Sofield22->setValue(QString("-1"));
SoProtoInterface21->addChild(*Sofield22);

Sofield* Sofield23 = new Sofield();
Sofield23->setName(QString("enabled"));
Sofield23->setAccessType(QString("inputOutput"));
Sofield23->setAppinfo(QString("is this behavior enabled?"));
Sofield23->setType(QString("SFBool"));
Sofield23->setValue(QString("true"));
SoProtoInterface21->addChild(*Sofield23);

Sofield* Sofield24 = new Sofield();
Sofield24->setName(QString("cycleInterval"));
Sofield24->setAccessType(QString("inputOutput"));
Sofield24->setAppinfo(QString("how long do these interpolators take to execute?"));
Sofield24->setType(QString("SFTime"));
Sofield24->setValue(QString("1"));
SoProtoInterface21->addChild(*Sofield24);

Sofield* Sofield25 = new Sofield();
Sofield25->setName(QString("loop"));
Sofield25->setAccessType(QString("inputOutput"));
Sofield25->setAppinfo(QString("whether or not this behavior loops (e.g. walking) or is single shot (e.g. shake hands)."));
Sofield25->setType(QString("SFBool"));
Sofield25->setValue(QString("false"));
SoProtoInterface21->addChild(*Sofield25);

Sofield* Sofield26 = new Sofield();
Sofield26->setName(QString("startTime"));
Sofield26->setAccessType(QString("inputOutput"));
Sofield26->setAppinfo(QString("when time now >= startTime isActive becomes true and TimeSensor becomes active"));
Sofield26->setType(QString("SFTime"));
Sofield26->setValue(QString("0"));
SoProtoInterface21->addChild(*Sofield26);

Sofield* Sofield27 = new Sofield();
Sofield27->setName(QString("stopTime"));
Sofield27->setAccessType(QString("inputOutput"));
Sofield27->setAppinfo(QString("when stopTime becomes <= time now isActive becomes false and TimeSensor becomes inactive"));
Sofield27->setType(QString("SFTime"));
Sofield27->setValue(QString("0"));
SoProtoInterface21->addChild(*Sofield27);

Sofield* Sofield28 = new Sofield();
Sofield28->setName(QString("pauseTime"));
Sofield28->setAccessType(QString("inputOutput"));
Sofield28->setAppinfo(QString("when time now >= pauseTime isPaused becomes true and TimeSensor becomes paused"));
Sofield28->setType(QString("SFTime"));
Sofield28->setValue(QString("0"));
SoProtoInterface21->addChild(*Sofield28);

Sofield* Sofield29 = new Sofield();
Sofield29->setName(QString("resumeTime"));
Sofield29->setAccessType(QString("inputOutput"));
Sofield29->setAppinfo(QString("when resumeTime becomes <= time now isPaused becomes false and TimeSensor becomes inactive"));
Sofield29->setType(QString("SFTime"));
Sofield29->setValue(QString("0"));
SoProtoInterface21->addChild(*Sofield29);

Sofield* Sofield30 = new Sofield();
Sofield30->setName(QString("cycleTime"));
Sofield30->setAccessType(QString("outputOnly"));
Sofield30->setAppinfo(QString("cycleTime sends a time outputOnly at startTime and also at the beginning of each new cycle"));
Sofield30->setType(QString("SFTime"));
SoProtoInterface21->addChild(*Sofield30);

Sofield* Sofield31 = new Sofield();
Sofield31->setName(QString("isActive"));
Sofield31->setAccessType(QString("outputOnly"));
Sofield31->setAppinfo(QString("isActive true/false events are sent when TimeSensor starts/stops running"));
Sofield31->setType(QString("SFBool"));
SoProtoInterface21->addChild(*Sofield31);

Sofield* Sofield32 = new Sofield();
Sofield32->setName(QString("isPaused"));
Sofield32->setAccessType(QString("outputOnly"));
Sofield32->setAppinfo(QString("isPaused true/false events are sent when TimeSensor is paused/resumed"));
Sofield32->setType(QString("SFBool"));
SoProtoInterface21->addChild(*Sofield32);

Sofield* Sofield33 = new Sofield();
Sofield33->setName(QString("elapsedTime"));
Sofield33->setAccessType(QString("outputOnly"));
Sofield33->setAppinfo(QString("current elapsed time since TimeSensor activated/running cumulative in seconds and not counting any paused time"));
Sofield33->setType(QString("SFBool"));
SoProtoInterface21->addChild(*Sofield33);

Sofield* Sofield34 = new Sofield();
Sofield34->setName(QString("time"));
Sofield34->setAccessType(QString("outputOnly"));
Sofield34->setAppinfo(QString("continuously sends the absolute time (since January 1 1970)"));
Sofield34->setType(QString("SFBool"));
SoProtoInterface21->addChild(*Sofield34);

Sofield* Sofield35 = new Sofield();
Sofield35->setName(QString("fraction_changed"));
Sofield35->setAccessType(QString("outputOnly"));
Sofield35->setAppinfo(QString("fraction_changed continuously sends value in range [0 1] showing time progress in the current cycle."));
Sofield35->setType(QString("SFFloat"));
SoProtoInterface21->addChild(*Sofield35);

Sofield* Sofield36 = new Sofield();
Sofield36->setName(QString("HumanoidRoot_translation_key"));
Sofield36->setAccessType(QString("inputOutput"));
Sofield36->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield36);

Sofield* Sofield37 = new Sofield();
Sofield37->setName(QString("HumanoidRoot_translation_keyValue"));
Sofield37->setAccessType(QString("inputOutput"));
Sofield37->setType(QString("MFVec3f"));
//no default value
SoProtoInterface21->addChild(*Sofield37);

Sofield* Sofield38 = new Sofield();
Sofield38->setName(QString("HumanoidRoot_translation_changed"));
Sofield38->setAccessType(QString("outputOnly"));
Sofield38->setType(QString("SFVec3f"));
SoProtoInterface21->addChild(*Sofield38);

Sofield* Sofield39 = new Sofield();
Sofield39->setName(QString("HumanoidRoot_rotation_key"));
Sofield39->setAccessType(QString("inputOutput"));
Sofield39->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield39);

Sofield* Sofield40 = new Sofield();
Sofield40->setName(QString("HumanoidRoot_rotation_keyValue"));
Sofield40->setAccessType(QString("inputOutput"));
Sofield40->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield40);

Sofield* Sofield41 = new Sofield();
Sofield41->setName(QString("HumanoidRoot_rotation_changed"));
Sofield41->setAccessType(QString("outputOnly"));
Sofield41->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield41);

Sofield* Sofield42 = new Sofield();
Sofield42->setName(QString("c1_key"));
Sofield42->setAccessType(QString("inputOutput"));
Sofield42->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield42);

Sofield* Sofield43 = new Sofield();
Sofield43->setName(QString("c1_keyValue"));
Sofield43->setAccessType(QString("inputOutput"));
Sofield43->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield43);

Sofield* Sofield44 = new Sofield();
Sofield44->setName(QString("c1_changed"));
Sofield44->setAccessType(QString("outputOnly"));
Sofield44->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield44);

Sofield* Sofield45 = new Sofield();
Sofield45->setName(QString("c2_key"));
Sofield45->setAccessType(QString("inputOutput"));
Sofield45->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield45);

Sofield* Sofield46 = new Sofield();
Sofield46->setName(QString("c2_keyValue"));
Sofield46->setAccessType(QString("inputOutput"));
Sofield46->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield46);

Sofield* Sofield47 = new Sofield();
Sofield47->setName(QString("c2_changed"));
Sofield47->setAccessType(QString("outputOnly"));
Sofield47->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield47);

Sofield* Sofield48 = new Sofield();
Sofield48->setName(QString("c3_key"));
Sofield48->setAccessType(QString("inputOutput"));
Sofield48->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield48);

Sofield* Sofield49 = new Sofield();
Sofield49->setName(QString("c3_keyValue"));
Sofield49->setAccessType(QString("inputOutput"));
Sofield49->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield49);

Sofield* Sofield50 = new Sofield();
Sofield50->setName(QString("c3_changed"));
Sofield50->setAccessType(QString("outputOnly"));
Sofield50->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield50);

Sofield* Sofield51 = new Sofield();
Sofield51->setName(QString("c4_key"));
Sofield51->setAccessType(QString("inputOutput"));
Sofield51->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield51);

Sofield* Sofield52 = new Sofield();
Sofield52->setName(QString("c4_keyValue"));
Sofield52->setAccessType(QString("inputOutput"));
Sofield52->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield52);

Sofield* Sofield53 = new Sofield();
Sofield53->setName(QString("c4_changed"));
Sofield53->setAccessType(QString("outputOnly"));
Sofield53->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield53);

Sofield* Sofield54 = new Sofield();
Sofield54->setName(QString("c5_key"));
Sofield54->setAccessType(QString("inputOutput"));
Sofield54->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield54);

Sofield* Sofield55 = new Sofield();
Sofield55->setName(QString("c5_keyValue"));
Sofield55->setAccessType(QString("inputOutput"));
Sofield55->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield55);

Sofield* Sofield56 = new Sofield();
Sofield56->setName(QString("c5_changed"));
Sofield56->setAccessType(QString("outputOnly"));
Sofield56->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield56);

Sofield* Sofield57 = new Sofield();
Sofield57->setName(QString("c6_key"));
Sofield57->setAccessType(QString("inputOutput"));
Sofield57->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield57);

Sofield* Sofield58 = new Sofield();
Sofield58->setName(QString("c6_keyValue"));
Sofield58->setAccessType(QString("inputOutput"));
Sofield58->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield58);

Sofield* Sofield59 = new Sofield();
Sofield59->setName(QString("c6_changed"));
Sofield59->setAccessType(QString("outputOnly"));
Sofield59->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield59);

Sofield* Sofield60 = new Sofield();
Sofield60->setName(QString("c7_key"));
Sofield60->setAccessType(QString("inputOutput"));
Sofield60->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield60);

Sofield* Sofield61 = new Sofield();
Sofield61->setName(QString("c7_keyValue"));
Sofield61->setAccessType(QString("inputOutput"));
Sofield61->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield61);

Sofield* Sofield62 = new Sofield();
Sofield62->setName(QString("c7_changed"));
Sofield62->setAccessType(QString("outputOnly"));
Sofield62->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield62);

Sofield* Sofield63 = new Sofield();
Sofield63->setName(QString("jaw_key"));
Sofield63->setAccessType(QString("inputOutput"));
Sofield63->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield63);

Sofield* Sofield64 = new Sofield();
Sofield64->setName(QString("jaw_keyValue"));
Sofield64->setAccessType(QString("inputOutput"));
Sofield64->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield64);

Sofield* Sofield65 = new Sofield();
Sofield65->setName(QString("jaw_changed"));
Sofield65->setAccessType(QString("outputOnly"));
Sofield65->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield65);

Sofield* Sofield66 = new Sofield();
Sofield66->setName(QString("l1_key"));
Sofield66->setAccessType(QString("inputOutput"));
Sofield66->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield66);

Sofield* Sofield67 = new Sofield();
Sofield67->setName(QString("l1_keyValue"));
Sofield67->setAccessType(QString("inputOutput"));
Sofield67->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield67);

Sofield* Sofield68 = new Sofield();
Sofield68->setName(QString("l1_changed"));
Sofield68->setAccessType(QString("outputOnly"));
Sofield68->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield68);

Sofield* Sofield69 = new Sofield();
Sofield69->setName(QString("l2_key"));
Sofield69->setAccessType(QString("inputOutput"));
Sofield69->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield69);

Sofield* Sofield70 = new Sofield();
Sofield70->setName(QString("l2_keyValue"));
Sofield70->setAccessType(QString("inputOutput"));
Sofield70->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield70);

Sofield* Sofield71 = new Sofield();
Sofield71->setName(QString("l2_changed"));
Sofield71->setAccessType(QString("outputOnly"));
Sofield71->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield71);

Sofield* Sofield72 = new Sofield();
Sofield72->setName(QString("l3_key"));
Sofield72->setAccessType(QString("inputOutput"));
Sofield72->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield72);

Sofield* Sofield73 = new Sofield();
Sofield73->setName(QString("l3_keyValue"));
Sofield73->setAccessType(QString("inputOutput"));
Sofield73->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield73);

Sofield* Sofield74 = new Sofield();
Sofield74->setName(QString("l3_changed"));
Sofield74->setAccessType(QString("outputOnly"));
Sofield74->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield74);

Sofield* Sofield75 = new Sofield();
Sofield75->setName(QString("l4_key"));
Sofield75->setAccessType(QString("inputOutput"));
Sofield75->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield75);

Sofield* Sofield76 = new Sofield();
Sofield76->setName(QString("l4_keyValue"));
Sofield76->setAccessType(QString("inputOutput"));
Sofield76->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield76);

Sofield* Sofield77 = new Sofield();
Sofield77->setName(QString("l4_changed"));
Sofield77->setAccessType(QString("outputOnly"));
Sofield77->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield77);

Sofield* Sofield78 = new Sofield();
Sofield78->setName(QString("l5_key"));
Sofield78->setAccessType(QString("inputOutput"));
Sofield78->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield78);

Sofield* Sofield79 = new Sofield();
Sofield79->setName(QString("l5_keyValue"));
Sofield79->setAccessType(QString("inputOutput"));
Sofield79->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield79);

Sofield* Sofield80 = new Sofield();
Sofield80->setName(QString("l5_changed"));
Sofield80->setAccessType(QString("outputOnly"));
Sofield80->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield80);

Sofield* Sofield81 = new Sofield();
Sofield81->setName(QString("l_acromioclavicular_key"));
Sofield81->setAccessType(QString("inputOutput"));
Sofield81->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield81);

Sofield* Sofield82 = new Sofield();
Sofield82->setName(QString("l_acromioclavicular_keyValue"));
Sofield82->setAccessType(QString("inputOutput"));
Sofield82->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield82);

Sofield* Sofield83 = new Sofield();
Sofield83->setName(QString("l_acromioclavicular_changed"));
Sofield83->setAccessType(QString("outputOnly"));
Sofield83->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield83);

Sofield* Sofield84 = new Sofield();
Sofield84->setName(QString("l_ankle_key"));
Sofield84->setAccessType(QString("inputOutput"));
Sofield84->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield84);

Sofield* Sofield85 = new Sofield();
Sofield85->setName(QString("l_ankle_keyValue"));
Sofield85->setAccessType(QString("inputOutput"));
Sofield85->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield85);

Sofield* Sofield86 = new Sofield();
Sofield86->setName(QString("l_ankle_changed"));
Sofield86->setAccessType(QString("outputOnly"));
Sofield86->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield86);

Sofield* Sofield87 = new Sofield();
Sofield87->setName(QString("l_calf_key"));
Sofield87->setAccessType(QString("inputOutput"));
Sofield87->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield87);

Sofield* Sofield88 = new Sofield();
Sofield88->setName(QString("l_calf_keyValue"));
Sofield88->setAccessType(QString("inputOutput"));
Sofield88->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield88);

Sofield* Sofield89 = new Sofield();
Sofield89->setName(QString("l_calf_changed"));
Sofield89->setAccessType(QString("outputOnly"));
Sofield89->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield89);

Sofield* Sofield90 = new Sofield();
Sofield90->setName(QString("l_clavicle_key"));
Sofield90->setAccessType(QString("inputOutput"));
Sofield90->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield90);

Sofield* Sofield91 = new Sofield();
Sofield91->setName(QString("l_clavicle_keyValue"));
Sofield91->setAccessType(QString("inputOutput"));
Sofield91->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield91);

Sofield* Sofield92 = new Sofield();
Sofield92->setName(QString("l_clavicle_changed"));
Sofield92->setAccessType(QString("outputOnly"));
Sofield92->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield92);

Sofield* Sofield93 = new Sofield();
Sofield93->setName(QString("l_elbow_key"));
Sofield93->setAccessType(QString("inputOutput"));
Sofield93->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield93);

Sofield* Sofield94 = new Sofield();
Sofield94->setName(QString("l_elbow_keyValue"));
Sofield94->setAccessType(QString("inputOutput"));
Sofield94->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield94);

Sofield* Sofield95 = new Sofield();
Sofield95->setName(QString("l_elbow_changed"));
Sofield95->setAccessType(QString("outputOnly"));
Sofield95->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield95);

Sofield* Sofield96 = new Sofield();
Sofield96->setName(QString("l_eyeball_key"));
Sofield96->setAccessType(QString("inputOutput"));
Sofield96->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield96);

Sofield* Sofield97 = new Sofield();
Sofield97->setName(QString("l_eyeball_keyValue"));
Sofield97->setAccessType(QString("inputOutput"));
Sofield97->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield97);

Sofield* Sofield98 = new Sofield();
Sofield98->setName(QString("l_eyeball_changed"));
Sofield98->setAccessType(QString("outputOnly"));
Sofield98->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield98);

Sofield* Sofield99 = new Sofield();
Sofield99->setName(QString("l_eyeball_joint_key"));
Sofield99->setAccessType(QString("inputOutput"));
Sofield99->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield99);

Sofield* Sofield100 = new Sofield();
Sofield100->setName(QString("l_eyeball_joint_keyValue"));
Sofield100->setAccessType(QString("inputOutput"));
Sofield100->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield100);

Sofield* Sofield101 = new Sofield();
Sofield101->setName(QString("l_eyeball_joint_changed"));
Sofield101->setAccessType(QString("outputOnly"));
Sofield101->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield101);

Sofield* Sofield102 = new Sofield();
Sofield102->setName(QString("l_eyebrow_key"));
Sofield102->setAccessType(QString("inputOutput"));
Sofield102->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield102);

Sofield* Sofield103 = new Sofield();
Sofield103->setName(QString("l_eyebrow_keyValue"));
Sofield103->setAccessType(QString("inputOutput"));
Sofield103->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield103);

Sofield* Sofield104 = new Sofield();
Sofield104->setName(QString("l_eyebrow_changed"));
Sofield104->setAccessType(QString("outputOnly"));
Sofield104->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield104);

Sofield* Sofield105 = new Sofield();
Sofield105->setName(QString("l_eyebrow_joint_key"));
Sofield105->setAccessType(QString("inputOutput"));
Sofield105->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield105);

Sofield* Sofield106 = new Sofield();
Sofield106->setName(QString("l_eyebrow_joint_keyValue"));
Sofield106->setAccessType(QString("inputOutput"));
Sofield106->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield106);

Sofield* Sofield107 = new Sofield();
Sofield107->setName(QString("l_eyebrow_joint_changed"));
Sofield107->setAccessType(QString("outputOnly"));
Sofield107->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield107);

Sofield* Sofield108 = new Sofield();
Sofield108->setName(QString("l_eyelid_key"));
Sofield108->setAccessType(QString("inputOutput"));
Sofield108->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield108);

Sofield* Sofield109 = new Sofield();
Sofield109->setName(QString("l_eyelid_keyValue"));
Sofield109->setAccessType(QString("inputOutput"));
Sofield109->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield109);

Sofield* Sofield110 = new Sofield();
Sofield110->setName(QString("l_eyelid_changed"));
Sofield110->setAccessType(QString("outputOnly"));
Sofield110->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield110);

Sofield* Sofield111 = new Sofield();
Sofield111->setName(QString("l_eyelid_joint_key"));
Sofield111->setAccessType(QString("inputOutput"));
Sofield111->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield111);

Sofield* Sofield112 = new Sofield();
Sofield112->setName(QString("l_eyelid_joint_keyValue"));
Sofield112->setAccessType(QString("inputOutput"));
Sofield112->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield112);

Sofield* Sofield113 = new Sofield();
Sofield113->setName(QString("l_eyelid_joint_changed"));
Sofield113->setAccessType(QString("outputOnly"));
Sofield113->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield113);

Sofield* Sofield114 = new Sofield();
Sofield114->setName(QString("l_forearm_key"));
Sofield114->setAccessType(QString("inputOutput"));
Sofield114->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield114);

Sofield* Sofield115 = new Sofield();
Sofield115->setName(QString("l_forearm_keyValue"));
Sofield115->setAccessType(QString("inputOutput"));
Sofield115->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield115);

Sofield* Sofield116 = new Sofield();
Sofield116->setName(QString("l_forearm_changed"));
Sofield116->setAccessType(QString("outputOnly"));
Sofield116->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield116);

Sofield* Sofield117 = new Sofield();
Sofield117->setName(QString("l_forefoot_key"));
Sofield117->setAccessType(QString("inputOutput"));
Sofield117->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield117);

Sofield* Sofield118 = new Sofield();
Sofield118->setName(QString("l_forefoot_keyValue"));
Sofield118->setAccessType(QString("inputOutput"));
Sofield118->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield118);

Sofield* Sofield119 = new Sofield();
Sofield119->setName(QString("l_forefoot_changed"));
Sofield119->setAccessType(QString("outputOnly"));
Sofield119->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield119);

Sofield* Sofield120 = new Sofield();
Sofield120->setName(QString("l_hand_key"));
Sofield120->setAccessType(QString("inputOutput"));
Sofield120->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield120);

Sofield* Sofield121 = new Sofield();
Sofield121->setName(QString("l_hand_keyValue"));
Sofield121->setAccessType(QString("inputOutput"));
Sofield121->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield121);

Sofield* Sofield122 = new Sofield();
Sofield122->setName(QString("l_hand_changed"));
Sofield122->setAccessType(QString("outputOnly"));
Sofield122->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield122);

Sofield* Sofield123 = new Sofield();
Sofield123->setName(QString("l_hindfoot_key"));
Sofield123->setAccessType(QString("inputOutput"));
Sofield123->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield123);

Sofield* Sofield124 = new Sofield();
Sofield124->setName(QString("l_hindfoot_keyValue"));
Sofield124->setAccessType(QString("inputOutput"));
Sofield124->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield124);

Sofield* Sofield125 = new Sofield();
Sofield125->setName(QString("l_hindfoot_changed"));
Sofield125->setAccessType(QString("outputOnly"));
Sofield125->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield125);

Sofield* Sofield126 = new Sofield();
Sofield126->setName(QString("l_hip_key"));
Sofield126->setAccessType(QString("inputOutput"));
Sofield126->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield126);

Sofield* Sofield127 = new Sofield();
Sofield127->setName(QString("l_hip_keyValue"));
Sofield127->setAccessType(QString("inputOutput"));
Sofield127->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield127);

Sofield* Sofield128 = new Sofield();
Sofield128->setName(QString("l_hip_changed"));
Sofield128->setAccessType(QString("outputOnly"));
Sofield128->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield128);

Sofield* Sofield129 = new Sofield();
Sofield129->setName(QString("l_index0_key"));
Sofield129->setAccessType(QString("inputOutput"));
Sofield129->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield129);

Sofield* Sofield130 = new Sofield();
Sofield130->setName(QString("l_index0_keyValue"));
Sofield130->setAccessType(QString("inputOutput"));
Sofield130->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield130);

Sofield* Sofield131 = new Sofield();
Sofield131->setName(QString("l_index0_changed"));
Sofield131->setAccessType(QString("outputOnly"));
Sofield131->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield131);

Sofield* Sofield132 = new Sofield();
Sofield132->setName(QString("l_index1_key"));
Sofield132->setAccessType(QString("inputOutput"));
Sofield132->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield132);

Sofield* Sofield133 = new Sofield();
Sofield133->setName(QString("l_index1_keyValue"));
Sofield133->setAccessType(QString("inputOutput"));
Sofield133->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield133);

Sofield* Sofield134 = new Sofield();
Sofield134->setName(QString("l_index1_changed"));
Sofield134->setAccessType(QString("outputOnly"));
Sofield134->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield134);

Sofield* Sofield135 = new Sofield();
Sofield135->setName(QString("l_index2_key"));
Sofield135->setAccessType(QString("inputOutput"));
Sofield135->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield135);

Sofield* Sofield136 = new Sofield();
Sofield136->setName(QString("l_index2_keyValue"));
Sofield136->setAccessType(QString("inputOutput"));
Sofield136->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield136);

Sofield* Sofield137 = new Sofield();
Sofield137->setName(QString("l_index2_changed"));
Sofield137->setAccessType(QString("outputOnly"));
Sofield137->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield137);

Sofield* Sofield138 = new Sofield();
Sofield138->setName(QString("l_index3_key"));
Sofield138->setAccessType(QString("inputOutput"));
Sofield138->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield138);

Sofield* Sofield139 = new Sofield();
Sofield139->setName(QString("l_index3_keyValue"));
Sofield139->setAccessType(QString("inputOutput"));
Sofield139->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield139);

Sofield* Sofield140 = new Sofield();
Sofield140->setName(QString("l_index3_changed"));
Sofield140->setAccessType(QString("outputOnly"));
Sofield140->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield140);

Sofield* Sofield141 = new Sofield();
Sofield141->setName(QString("l_index_distal_key"));
Sofield141->setAccessType(QString("inputOutput"));
Sofield141->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield141);

Sofield* Sofield142 = new Sofield();
Sofield142->setName(QString("l_index_distal_keyValue"));
Sofield142->setAccessType(QString("inputOutput"));
Sofield142->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield142);

Sofield* Sofield143 = new Sofield();
Sofield143->setName(QString("l_index_distal_changed"));
Sofield143->setAccessType(QString("outputOnly"));
Sofield143->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield143);

Sofield* Sofield144 = new Sofield();
Sofield144->setName(QString("l_index_metacarpal_key"));
Sofield144->setAccessType(QString("inputOutput"));
Sofield144->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield144);

Sofield* Sofield145 = new Sofield();
Sofield145->setName(QString("l_index_metacarpal_keyValue"));
Sofield145->setAccessType(QString("inputOutput"));
Sofield145->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield145);

Sofield* Sofield146 = new Sofield();
Sofield146->setName(QString("l_index_metacarpal_changed"));
Sofield146->setAccessType(QString("outputOnly"));
Sofield146->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield146);

Sofield* Sofield147 = new Sofield();
Sofield147->setName(QString("l_index_middle_key"));
Sofield147->setAccessType(QString("inputOutput"));
Sofield147->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield147);

Sofield* Sofield148 = new Sofield();
Sofield148->setName(QString("l_index_middle_keyValue"));
Sofield148->setAccessType(QString("inputOutput"));
Sofield148->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield148);

Sofield* Sofield149 = new Sofield();
Sofield149->setName(QString("l_index_middle_changed"));
Sofield149->setAccessType(QString("outputOnly"));
Sofield149->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield149);

Sofield* Sofield150 = new Sofield();
Sofield150->setName(QString("l_index_proximal_key"));
Sofield150->setAccessType(QString("inputOutput"));
Sofield150->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield150);

Sofield* Sofield151 = new Sofield();
Sofield151->setName(QString("l_index_proximal_keyValue"));
Sofield151->setAccessType(QString("inputOutput"));
Sofield151->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield151);

Sofield* Sofield152 = new Sofield();
Sofield152->setName(QString("l_index_proximal_changed"));
Sofield152->setAccessType(QString("outputOnly"));
Sofield152->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield152);

Sofield* Sofield153 = new Sofield();
Sofield153->setName(QString("l_knee_key"));
Sofield153->setAccessType(QString("inputOutput"));
Sofield153->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield153);

Sofield* Sofield154 = new Sofield();
Sofield154->setName(QString("l_knee_keyValue"));
Sofield154->setAccessType(QString("inputOutput"));
Sofield154->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield154);

Sofield* Sofield155 = new Sofield();
Sofield155->setName(QString("l_knee_changed"));
Sofield155->setAccessType(QString("outputOnly"));
Sofield155->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield155);

Sofield* Sofield156 = new Sofield();
Sofield156->setName(QString("l_metatarsal_key"));
Sofield156->setAccessType(QString("inputOutput"));
Sofield156->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield156);

Sofield* Sofield157 = new Sofield();
Sofield157->setName(QString("l_metatarsal_keyValue"));
Sofield157->setAccessType(QString("inputOutput"));
Sofield157->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield157);

Sofield* Sofield158 = new Sofield();
Sofield158->setName(QString("l_metatarsal_changed"));
Sofield158->setAccessType(QString("outputOnly"));
Sofield158->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield158);

Sofield* Sofield159 = new Sofield();
Sofield159->setName(QString("l_middistal_key"));
Sofield159->setAccessType(QString("inputOutput"));
Sofield159->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield159);

Sofield* Sofield160 = new Sofield();
Sofield160->setName(QString("l_middistal_keyValue"));
Sofield160->setAccessType(QString("inputOutput"));
Sofield160->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield160);

Sofield* Sofield161 = new Sofield();
Sofield161->setName(QString("l_middistal_changed"));
Sofield161->setAccessType(QString("outputOnly"));
Sofield161->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield161);

Sofield* Sofield162 = new Sofield();
Sofield162->setName(QString("l_middle0_key"));
Sofield162->setAccessType(QString("inputOutput"));
Sofield162->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield162);

Sofield* Sofield163 = new Sofield();
Sofield163->setName(QString("l_middle0_keyValue"));
Sofield163->setAccessType(QString("inputOutput"));
Sofield163->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield163);

Sofield* Sofield164 = new Sofield();
Sofield164->setName(QString("l_middle0_changed"));
Sofield164->setAccessType(QString("outputOnly"));
Sofield164->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield164);

Sofield* Sofield165 = new Sofield();
Sofield165->setName(QString("l_middle1_key"));
Sofield165->setAccessType(QString("inputOutput"));
Sofield165->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield165);

Sofield* Sofield166 = new Sofield();
Sofield166->setName(QString("l_middle1_keyValue"));
Sofield166->setAccessType(QString("inputOutput"));
Sofield166->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield166);

Sofield* Sofield167 = new Sofield();
Sofield167->setName(QString("l_middle1_changed"));
Sofield167->setAccessType(QString("outputOnly"));
Sofield167->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield167);

Sofield* Sofield168 = new Sofield();
Sofield168->setName(QString("l_middle2_key"));
Sofield168->setAccessType(QString("inputOutput"));
Sofield168->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield168);

Sofield* Sofield169 = new Sofield();
Sofield169->setName(QString("l_middle2_keyValue"));
Sofield169->setAccessType(QString("inputOutput"));
Sofield169->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield169);

Sofield* Sofield170 = new Sofield();
Sofield170->setName(QString("l_middle2_changed"));
Sofield170->setAccessType(QString("outputOnly"));
Sofield170->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield170);

Sofield* Sofield171 = new Sofield();
Sofield171->setName(QString("l_middle3_key"));
Sofield171->setAccessType(QString("inputOutput"));
Sofield171->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield171);

Sofield* Sofield172 = new Sofield();
Sofield172->setName(QString("l_middle3_keyValue"));
Sofield172->setAccessType(QString("inputOutput"));
Sofield172->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield172);

Sofield* Sofield173 = new Sofield();
Sofield173->setName(QString("l_middle3_changed"));
Sofield173->setAccessType(QString("outputOnly"));
Sofield173->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield173);

Sofield* Sofield174 = new Sofield();
Sofield174->setName(QString("l_middle_distal_key"));
Sofield174->setAccessType(QString("inputOutput"));
Sofield174->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield174);

Sofield* Sofield175 = new Sofield();
Sofield175->setName(QString("l_middle_distal_keyValue"));
Sofield175->setAccessType(QString("inputOutput"));
Sofield175->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield175);

Sofield* Sofield176 = new Sofield();
Sofield176->setName(QString("l_middle_distal_changed"));
Sofield176->setAccessType(QString("outputOnly"));
Sofield176->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield176);

Sofield* Sofield177 = new Sofield();
Sofield177->setName(QString("l_middle_metacarpal_key"));
Sofield177->setAccessType(QString("inputOutput"));
Sofield177->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield177);

Sofield* Sofield178 = new Sofield();
Sofield178->setName(QString("l_middle_metacarpal_keyValue"));
Sofield178->setAccessType(QString("inputOutput"));
Sofield178->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield178);

Sofield* Sofield179 = new Sofield();
Sofield179->setName(QString("l_middle_metacarpal_changed"));
Sofield179->setAccessType(QString("outputOnly"));
Sofield179->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield179);

Sofield* Sofield180 = new Sofield();
Sofield180->setName(QString("l_middle_middle_key"));
Sofield180->setAccessType(QString("inputOutput"));
Sofield180->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield180);

Sofield* Sofield181 = new Sofield();
Sofield181->setName(QString("l_middle_middle_keyValue"));
Sofield181->setAccessType(QString("inputOutput"));
Sofield181->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield181);

Sofield* Sofield182 = new Sofield();
Sofield182->setName(QString("l_middle_middle_changed"));
Sofield182->setAccessType(QString("outputOnly"));
Sofield182->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield182);

Sofield* Sofield183 = new Sofield();
Sofield183->setName(QString("l_middle_proximal_key"));
Sofield183->setAccessType(QString("inputOutput"));
Sofield183->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield183);

Sofield* Sofield184 = new Sofield();
Sofield184->setName(QString("l_middle_proximal_keyValue"));
Sofield184->setAccessType(QString("inputOutput"));
Sofield184->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield184);

Sofield* Sofield185 = new Sofield();
Sofield185->setName(QString("l_middle_proximal_changed"));
Sofield185->setAccessType(QString("outputOnly"));
Sofield185->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield185);

Sofield* Sofield186 = new Sofield();
Sofield186->setName(QString("l_midproximal_key"));
Sofield186->setAccessType(QString("inputOutput"));
Sofield186->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield186);

Sofield* Sofield187 = new Sofield();
Sofield187->setName(QString("l_midproximal_keyValue"));
Sofield187->setAccessType(QString("inputOutput"));
Sofield187->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield187);

Sofield* Sofield188 = new Sofield();
Sofield188->setName(QString("l_midproximal_changed"));
Sofield188->setAccessType(QString("outputOnly"));
Sofield188->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield188);

Sofield* Sofield189 = new Sofield();
Sofield189->setName(QString("l_midtarsal_key"));
Sofield189->setAccessType(QString("inputOutput"));
Sofield189->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield189);

Sofield* Sofield190 = new Sofield();
Sofield190->setName(QString("l_midtarsal_keyValue"));
Sofield190->setAccessType(QString("inputOutput"));
Sofield190->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield190);

Sofield* Sofield191 = new Sofield();
Sofield191->setName(QString("l_midtarsal_changed"));
Sofield191->setAccessType(QString("outputOnly"));
Sofield191->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield191);

Sofield* Sofield192 = new Sofield();
Sofield192->setName(QString("l_pinky0_key"));
Sofield192->setAccessType(QString("inputOutput"));
Sofield192->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield192);

Sofield* Sofield193 = new Sofield();
Sofield193->setName(QString("l_pinky0_keyValue"));
Sofield193->setAccessType(QString("inputOutput"));
Sofield193->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield193);

Sofield* Sofield194 = new Sofield();
Sofield194->setName(QString("l_pinky0_changed"));
Sofield194->setAccessType(QString("outputOnly"));
Sofield194->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield194);

Sofield* Sofield195 = new Sofield();
Sofield195->setName(QString("l_pinky1_key"));
Sofield195->setAccessType(QString("inputOutput"));
Sofield195->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield195);

Sofield* Sofield196 = new Sofield();
Sofield196->setName(QString("l_pinky1_keyValue"));
Sofield196->setAccessType(QString("inputOutput"));
Sofield196->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield196);

Sofield* Sofield197 = new Sofield();
Sofield197->setName(QString("l_pinky1_changed"));
Sofield197->setAccessType(QString("outputOnly"));
Sofield197->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield197);

Sofield* Sofield198 = new Sofield();
Sofield198->setName(QString("l_pinky2_key"));
Sofield198->setAccessType(QString("inputOutput"));
Sofield198->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield198);

Sofield* Sofield199 = new Sofield();
Sofield199->setName(QString("l_pinky2_keyValue"));
Sofield199->setAccessType(QString("inputOutput"));
Sofield199->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield199);

Sofield* Sofield200 = new Sofield();
Sofield200->setName(QString("l_pinky2_changed"));
Sofield200->setAccessType(QString("outputOnly"));
Sofield200->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield200);

Sofield* Sofield201 = new Sofield();
Sofield201->setName(QString("l_pinky3_key"));
Sofield201->setAccessType(QString("inputOutput"));
Sofield201->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield201);

Sofield* Sofield202 = new Sofield();
Sofield202->setName(QString("l_pinky3_keyValue"));
Sofield202->setAccessType(QString("inputOutput"));
Sofield202->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield202);

Sofield* Sofield203 = new Sofield();
Sofield203->setName(QString("l_pinky3_changed"));
Sofield203->setAccessType(QString("outputOnly"));
Sofield203->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield203);

Sofield* Sofield204 = new Sofield();
Sofield204->setName(QString("l_pinky_distal_key"));
Sofield204->setAccessType(QString("inputOutput"));
Sofield204->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield204);

Sofield* Sofield205 = new Sofield();
Sofield205->setName(QString("l_pinky_distal_keyValue"));
Sofield205->setAccessType(QString("inputOutput"));
Sofield205->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield205);

Sofield* Sofield206 = new Sofield();
Sofield206->setName(QString("l_pinky_distal_changed"));
Sofield206->setAccessType(QString("outputOnly"));
Sofield206->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield206);

Sofield* Sofield207 = new Sofield();
Sofield207->setName(QString("l_pinky_metacarpal_key"));
Sofield207->setAccessType(QString("inputOutput"));
Sofield207->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield207);

Sofield* Sofield208 = new Sofield();
Sofield208->setName(QString("l_pinky_metacarpal_keyValue"));
Sofield208->setAccessType(QString("inputOutput"));
Sofield208->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield208);

Sofield* Sofield209 = new Sofield();
Sofield209->setName(QString("l_pinky_metacarpal_changed"));
Sofield209->setAccessType(QString("outputOnly"));
Sofield209->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield209);

Sofield* Sofield210 = new Sofield();
Sofield210->setName(QString("l_pinky_middle_key"));
Sofield210->setAccessType(QString("inputOutput"));
Sofield210->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield210);

Sofield* Sofield211 = new Sofield();
Sofield211->setName(QString("l_pinky_middle_keyValue"));
Sofield211->setAccessType(QString("inputOutput"));
Sofield211->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield211);

Sofield* Sofield212 = new Sofield();
Sofield212->setName(QString("l_pinky_middle_changed"));
Sofield212->setAccessType(QString("outputOnly"));
Sofield212->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield212);

Sofield* Sofield213 = new Sofield();
Sofield213->setName(QString("l_pinky_proximal_key"));
Sofield213->setAccessType(QString("inputOutput"));
Sofield213->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield213);

Sofield* Sofield214 = new Sofield();
Sofield214->setName(QString("l_pinky_proximal_keyValue"));
Sofield214->setAccessType(QString("inputOutput"));
Sofield214->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield214);

Sofield* Sofield215 = new Sofield();
Sofield215->setName(QString("l_pinky_proximal_changed"));
Sofield215->setAccessType(QString("outputOnly"));
Sofield215->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield215);

Sofield* Sofield216 = new Sofield();
Sofield216->setName(QString("l_ring0_key"));
Sofield216->setAccessType(QString("inputOutput"));
Sofield216->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield216);

Sofield* Sofield217 = new Sofield();
Sofield217->setName(QString("l_ring0_keyValue"));
Sofield217->setAccessType(QString("inputOutput"));
Sofield217->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield217);

Sofield* Sofield218 = new Sofield();
Sofield218->setName(QString("l_ring0_changed"));
Sofield218->setAccessType(QString("outputOnly"));
Sofield218->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield218);

Sofield* Sofield219 = new Sofield();
Sofield219->setName(QString("l_ring1_key"));
Sofield219->setAccessType(QString("inputOutput"));
Sofield219->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield219);

Sofield* Sofield220 = new Sofield();
Sofield220->setName(QString("l_ring1_keyValue"));
Sofield220->setAccessType(QString("inputOutput"));
Sofield220->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield220);

Sofield* Sofield221 = new Sofield();
Sofield221->setName(QString("l_ring1_changed"));
Sofield221->setAccessType(QString("outputOnly"));
Sofield221->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield221);

Sofield* Sofield222 = new Sofield();
Sofield222->setName(QString("l_ring2_key"));
Sofield222->setAccessType(QString("inputOutput"));
Sofield222->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield222);

Sofield* Sofield223 = new Sofield();
Sofield223->setName(QString("l_ring2_keyValue"));
Sofield223->setAccessType(QString("inputOutput"));
Sofield223->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield223);

Sofield* Sofield224 = new Sofield();
Sofield224->setName(QString("l_ring2_changed"));
Sofield224->setAccessType(QString("outputOnly"));
Sofield224->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield224);

Sofield* Sofield225 = new Sofield();
Sofield225->setName(QString("l_ring3_key"));
Sofield225->setAccessType(QString("inputOutput"));
Sofield225->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield225);

Sofield* Sofield226 = new Sofield();
Sofield226->setName(QString("l_ring3_keyValue"));
Sofield226->setAccessType(QString("inputOutput"));
Sofield226->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield226);

Sofield* Sofield227 = new Sofield();
Sofield227->setName(QString("l_ring3_changed"));
Sofield227->setAccessType(QString("outputOnly"));
Sofield227->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield227);

Sofield* Sofield228 = new Sofield();
Sofield228->setName(QString("l_ring_distal_key"));
Sofield228->setAccessType(QString("inputOutput"));
Sofield228->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield228);

Sofield* Sofield229 = new Sofield();
Sofield229->setName(QString("l_ring_distal_keyValue"));
Sofield229->setAccessType(QString("inputOutput"));
Sofield229->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield229);

Sofield* Sofield230 = new Sofield();
Sofield230->setName(QString("l_ring_distal_changed"));
Sofield230->setAccessType(QString("outputOnly"));
Sofield230->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield230);

Sofield* Sofield231 = new Sofield();
Sofield231->setName(QString("l_ring_metacarpal_key"));
Sofield231->setAccessType(QString("inputOutput"));
Sofield231->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield231);

Sofield* Sofield232 = new Sofield();
Sofield232->setName(QString("l_ring_metacarpal_keyValue"));
Sofield232->setAccessType(QString("inputOutput"));
Sofield232->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield232);

Sofield* Sofield233 = new Sofield();
Sofield233->setName(QString("l_ring_metacarpal_changed"));
Sofield233->setAccessType(QString("outputOnly"));
Sofield233->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield233);

Sofield* Sofield234 = new Sofield();
Sofield234->setName(QString("l_ring_middle_key"));
Sofield234->setAccessType(QString("inputOutput"));
Sofield234->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield234);

Sofield* Sofield235 = new Sofield();
Sofield235->setName(QString("l_ring_middle_keyValue"));
Sofield235->setAccessType(QString("inputOutput"));
Sofield235->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield235);

Sofield* Sofield236 = new Sofield();
Sofield236->setName(QString("l_ring_middle_changed"));
Sofield236->setAccessType(QString("outputOnly"));
Sofield236->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield236);

Sofield* Sofield237 = new Sofield();
Sofield237->setName(QString("l_ring_proximal_key"));
Sofield237->setAccessType(QString("inputOutput"));
Sofield237->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield237);

Sofield* Sofield238 = new Sofield();
Sofield238->setName(QString("l_ring_proximal_keyValue"));
Sofield238->setAccessType(QString("inputOutput"));
Sofield238->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield238);

Sofield* Sofield239 = new Sofield();
Sofield239->setName(QString("l_ring_proximal_changed"));
Sofield239->setAccessType(QString("outputOnly"));
Sofield239->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield239);

Sofield* Sofield240 = new Sofield();
Sofield240->setName(QString("l_scapula_key"));
Sofield240->setAccessType(QString("inputOutput"));
Sofield240->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield240);

Sofield* Sofield241 = new Sofield();
Sofield241->setName(QString("l_scapula_keyValue"));
Sofield241->setAccessType(QString("inputOutput"));
Sofield241->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield241);

Sofield* Sofield242 = new Sofield();
Sofield242->setName(QString("l_scapula_changed"));
Sofield242->setAccessType(QString("outputOnly"));
Sofield242->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield242);

Sofield* Sofield243 = new Sofield();
Sofield243->setName(QString("l_shoulder_key"));
Sofield243->setAccessType(QString("inputOutput"));
Sofield243->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield243);

Sofield* Sofield244 = new Sofield();
Sofield244->setName(QString("l_shoulder_keyValue"));
Sofield244->setAccessType(QString("inputOutput"));
Sofield244->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield244);

Sofield* Sofield245 = new Sofield();
Sofield245->setName(QString("l_shoulder_changed"));
Sofield245->setAccessType(QString("outputOnly"));
Sofield245->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield245);

Sofield* Sofield246 = new Sofield();
Sofield246->setName(QString("l_sternoclavicular_key"));
Sofield246->setAccessType(QString("inputOutput"));
Sofield246->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield246);

Sofield* Sofield247 = new Sofield();
Sofield247->setName(QString("l_sternoclavicular_keyValue"));
Sofield247->setAccessType(QString("inputOutput"));
Sofield247->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield247);

Sofield* Sofield248 = new Sofield();
Sofield248->setName(QString("l_sternoclavicular_changed"));
Sofield248->setAccessType(QString("outputOnly"));
Sofield248->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield248);

Sofield* Sofield249 = new Sofield();
Sofield249->setName(QString("l_subtalar_key"));
Sofield249->setAccessType(QString("inputOutput"));
Sofield249->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield249);

Sofield* Sofield250 = new Sofield();
Sofield250->setName(QString("l_subtalar_keyValue"));
Sofield250->setAccessType(QString("inputOutput"));
Sofield250->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield250);

Sofield* Sofield251 = new Sofield();
Sofield251->setName(QString("l_subtalar_changed"));
Sofield251->setAccessType(QString("outputOnly"));
Sofield251->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield251);

Sofield* Sofield252 = new Sofield();
Sofield252->setName(QString("l_thigh_key"));
Sofield252->setAccessType(QString("inputOutput"));
Sofield252->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield252);

Sofield* Sofield253 = new Sofield();
Sofield253->setName(QString("l_thigh_keyValue"));
Sofield253->setAccessType(QString("inputOutput"));
Sofield253->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield253);

Sofield* Sofield254 = new Sofield();
Sofield254->setName(QString("l_thigh_changed"));
Sofield254->setAccessType(QString("outputOnly"));
Sofield254->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield254);

Sofield* Sofield255 = new Sofield();
Sofield255->setName(QString("l_thumb1_key"));
Sofield255->setAccessType(QString("inputOutput"));
Sofield255->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield255);

Sofield* Sofield256 = new Sofield();
Sofield256->setName(QString("l_thumb1_keyValue"));
Sofield256->setAccessType(QString("inputOutput"));
Sofield256->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield256);

Sofield* Sofield257 = new Sofield();
Sofield257->setName(QString("l_thumb1_changed"));
Sofield257->setAccessType(QString("outputOnly"));
Sofield257->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield257);

Sofield* Sofield258 = new Sofield();
Sofield258->setName(QString("l_thumb2_key"));
Sofield258->setAccessType(QString("inputOutput"));
Sofield258->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield258);

Sofield* Sofield259 = new Sofield();
Sofield259->setName(QString("l_thumb2_keyValue"));
Sofield259->setAccessType(QString("inputOutput"));
Sofield259->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield259);

Sofield* Sofield260 = new Sofield();
Sofield260->setName(QString("l_thumb2_changed"));
Sofield260->setAccessType(QString("outputOnly"));
Sofield260->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield260);

Sofield* Sofield261 = new Sofield();
Sofield261->setName(QString("l_thumb3_key"));
Sofield261->setAccessType(QString("inputOutput"));
Sofield261->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield261);

Sofield* Sofield262 = new Sofield();
Sofield262->setName(QString("l_thumb3_keyValue"));
Sofield262->setAccessType(QString("inputOutput"));
Sofield262->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield262);

Sofield* Sofield263 = new Sofield();
Sofield263->setName(QString("l_thumb3_changed"));
Sofield263->setAccessType(QString("outputOnly"));
Sofield263->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield263);

Sofield* Sofield264 = new Sofield();
Sofield264->setName(QString("l_thumb_distal_key"));
Sofield264->setAccessType(QString("inputOutput"));
Sofield264->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield264);

Sofield* Sofield265 = new Sofield();
Sofield265->setName(QString("l_thumb_distal_keyValue"));
Sofield265->setAccessType(QString("inputOutput"));
Sofield265->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield265);

Sofield* Sofield266 = new Sofield();
Sofield266->setName(QString("l_thumb_distal_changed"));
Sofield266->setAccessType(QString("outputOnly"));
Sofield266->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield266);

Sofield* Sofield267 = new Sofield();
Sofield267->setName(QString("l_thumb_metacarpal_key"));
Sofield267->setAccessType(QString("inputOutput"));
Sofield267->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield267);

Sofield* Sofield268 = new Sofield();
Sofield268->setName(QString("l_thumb_metacarpal_keyValue"));
Sofield268->setAccessType(QString("inputOutput"));
Sofield268->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield268);

Sofield* Sofield269 = new Sofield();
Sofield269->setName(QString("l_thumb_metacarpal_changed"));
Sofield269->setAccessType(QString("outputOnly"));
Sofield269->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield269);

Sofield* Sofield270 = new Sofield();
Sofield270->setName(QString("l_thumb_proximal_key"));
Sofield270->setAccessType(QString("inputOutput"));
Sofield270->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield270);

Sofield* Sofield271 = new Sofield();
Sofield271->setName(QString("l_thumb_proximal_keyValue"));
Sofield271->setAccessType(QString("inputOutput"));
Sofield271->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield271);

Sofield* Sofield272 = new Sofield();
Sofield272->setName(QString("l_thumb_proximal_changed"));
Sofield272->setAccessType(QString("outputOnly"));
Sofield272->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield272);

Sofield* Sofield273 = new Sofield();
Sofield273->setName(QString("l_upperarm_key"));
Sofield273->setAccessType(QString("inputOutput"));
Sofield273->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield273);

Sofield* Sofield274 = new Sofield();
Sofield274->setName(QString("l_upperarm_keyValue"));
Sofield274->setAccessType(QString("inputOutput"));
Sofield274->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield274);

Sofield* Sofield275 = new Sofield();
Sofield275->setName(QString("l_upperarm_changed"));
Sofield275->setAccessType(QString("outputOnly"));
Sofield275->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield275);

Sofield* Sofield276 = new Sofield();
Sofield276->setName(QString("l_wrist_key"));
Sofield276->setAccessType(QString("inputOutput"));
Sofield276->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield276);

Sofield* Sofield277 = new Sofield();
Sofield277->setName(QString("l_wrist_keyValue"));
Sofield277->setAccessType(QString("inputOutput"));
Sofield277->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield277);

Sofield* Sofield278 = new Sofield();
Sofield278->setName(QString("l_wrist_changed"));
Sofield278->setAccessType(QString("outputOnly"));
Sofield278->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield278);

Sofield* Sofield279 = new Sofield();
Sofield279->setName(QString("pelvis_key"));
Sofield279->setAccessType(QString("inputOutput"));
Sofield279->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield279);

Sofield* Sofield280 = new Sofield();
Sofield280->setName(QString("pelvis_keyValue"));
Sofield280->setAccessType(QString("inputOutput"));
Sofield280->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield280);

Sofield* Sofield281 = new Sofield();
Sofield281->setName(QString("pelvis_changed"));
Sofield281->setAccessType(QString("outputOnly"));
Sofield281->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield281);

Sofield* Sofield282 = new Sofield();
Sofield282->setName(QString("r_acromioclavicular_key"));
Sofield282->setAccessType(QString("inputOutput"));
Sofield282->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield282);

Sofield* Sofield283 = new Sofield();
Sofield283->setName(QString("r_acromioclavicular_keyValue"));
Sofield283->setAccessType(QString("inputOutput"));
Sofield283->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield283);

Sofield* Sofield284 = new Sofield();
Sofield284->setName(QString("r_acromioclavicular_changed"));
Sofield284->setAccessType(QString("outputOnly"));
Sofield284->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield284);

Sofield* Sofield285 = new Sofield();
Sofield285->setName(QString("r_ankle_key"));
Sofield285->setAccessType(QString("inputOutput"));
Sofield285->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield285);

Sofield* Sofield286 = new Sofield();
Sofield286->setName(QString("r_ankle_keyValue"));
Sofield286->setAccessType(QString("inputOutput"));
Sofield286->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield286);

Sofield* Sofield287 = new Sofield();
Sofield287->setName(QString("r_ankle_changed"));
Sofield287->setAccessType(QString("outputOnly"));
Sofield287->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield287);

Sofield* Sofield288 = new Sofield();
Sofield288->setName(QString("r_calf_key"));
Sofield288->setAccessType(QString("inputOutput"));
Sofield288->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield288);

Sofield* Sofield289 = new Sofield();
Sofield289->setName(QString("r_calf_keyValue"));
Sofield289->setAccessType(QString("inputOutput"));
Sofield289->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield289);

Sofield* Sofield290 = new Sofield();
Sofield290->setName(QString("r_calf_changed"));
Sofield290->setAccessType(QString("outputOnly"));
Sofield290->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield290);

Sofield* Sofield291 = new Sofield();
Sofield291->setName(QString("r_clavicle_key"));
Sofield291->setAccessType(QString("inputOutput"));
Sofield291->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield291);

Sofield* Sofield292 = new Sofield();
Sofield292->setName(QString("r_clavicle_keyValue"));
Sofield292->setAccessType(QString("inputOutput"));
Sofield292->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield292);

Sofield* Sofield293 = new Sofield();
Sofield293->setName(QString("r_clavicle_changed"));
Sofield293->setAccessType(QString("outputOnly"));
Sofield293->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield293);

Sofield* Sofield294 = new Sofield();
Sofield294->setName(QString("r_elbow_key"));
Sofield294->setAccessType(QString("inputOutput"));
Sofield294->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield294);

Sofield* Sofield295 = new Sofield();
Sofield295->setName(QString("r_elbow_keyValue"));
Sofield295->setAccessType(QString("inputOutput"));
Sofield295->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield295);

Sofield* Sofield296 = new Sofield();
Sofield296->setName(QString("r_elbow_changed"));
Sofield296->setAccessType(QString("outputOnly"));
Sofield296->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield296);

Sofield* Sofield297 = new Sofield();
Sofield297->setName(QString("r_eyeball_key"));
Sofield297->setAccessType(QString("inputOutput"));
Sofield297->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield297);

Sofield* Sofield298 = new Sofield();
Sofield298->setName(QString("r_eyeball_keyValue"));
Sofield298->setAccessType(QString("inputOutput"));
Sofield298->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield298);

Sofield* Sofield299 = new Sofield();
Sofield299->setName(QString("r_eyeball_changed"));
Sofield299->setAccessType(QString("outputOnly"));
Sofield299->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield299);

Sofield* Sofield300 = new Sofield();
Sofield300->setName(QString("r_eyeball_joint_key"));
Sofield300->setAccessType(QString("inputOutput"));
Sofield300->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield300);

Sofield* Sofield301 = new Sofield();
Sofield301->setName(QString("r_eyeball_joint_keyValue"));
Sofield301->setAccessType(QString("inputOutput"));
Sofield301->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield301);

Sofield* Sofield302 = new Sofield();
Sofield302->setName(QString("r_eyeball_joint_changed"));
Sofield302->setAccessType(QString("outputOnly"));
Sofield302->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield302);

Sofield* Sofield303 = new Sofield();
Sofield303->setName(QString("r_eyebrow_key"));
Sofield303->setAccessType(QString("inputOutput"));
Sofield303->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield303);

Sofield* Sofield304 = new Sofield();
Sofield304->setName(QString("r_eyebrow_keyValue"));
Sofield304->setAccessType(QString("inputOutput"));
Sofield304->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield304);

Sofield* Sofield305 = new Sofield();
Sofield305->setName(QString("r_eyebrow_changed"));
Sofield305->setAccessType(QString("outputOnly"));
Sofield305->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield305);

Sofield* Sofield306 = new Sofield();
Sofield306->setName(QString("r_eyebrow_joint_key"));
Sofield306->setAccessType(QString("inputOutput"));
Sofield306->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield306);

Sofield* Sofield307 = new Sofield();
Sofield307->setName(QString("r_eyebrow_joint_keyValue"));
Sofield307->setAccessType(QString("inputOutput"));
Sofield307->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield307);

Sofield* Sofield308 = new Sofield();
Sofield308->setName(QString("r_eyebrow_joint_changed"));
Sofield308->setAccessType(QString("outputOnly"));
Sofield308->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield308);

Sofield* Sofield309 = new Sofield();
Sofield309->setName(QString("r_eyelid_key"));
Sofield309->setAccessType(QString("inputOutput"));
Sofield309->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield309);

Sofield* Sofield310 = new Sofield();
Sofield310->setName(QString("r_eyelid_keyValue"));
Sofield310->setAccessType(QString("inputOutput"));
Sofield310->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield310);

Sofield* Sofield311 = new Sofield();
Sofield311->setName(QString("r_eyelid_changed"));
Sofield311->setAccessType(QString("outputOnly"));
Sofield311->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield311);

Sofield* Sofield312 = new Sofield();
Sofield312->setName(QString("r_eyelid_joint_key"));
Sofield312->setAccessType(QString("inputOutput"));
Sofield312->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield312);

Sofield* Sofield313 = new Sofield();
Sofield313->setName(QString("r_eyelid_joint_keyValue"));
Sofield313->setAccessType(QString("inputOutput"));
Sofield313->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield313);

Sofield* Sofield314 = new Sofield();
Sofield314->setName(QString("r_eyelid_joint_changed"));
Sofield314->setAccessType(QString("outputOnly"));
Sofield314->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield314);

Sofield* Sofield315 = new Sofield();
Sofield315->setName(QString("r_forearm_key"));
Sofield315->setAccessType(QString("inputOutput"));
Sofield315->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield315);

Sofield* Sofield316 = new Sofield();
Sofield316->setName(QString("r_forearm_keyValue"));
Sofield316->setAccessType(QString("inputOutput"));
Sofield316->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield316);

Sofield* Sofield317 = new Sofield();
Sofield317->setName(QString("r_forearm_changed"));
Sofield317->setAccessType(QString("outputOnly"));
Sofield317->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield317);

Sofield* Sofield318 = new Sofield();
Sofield318->setName(QString("r_forefoot_key"));
Sofield318->setAccessType(QString("inputOutput"));
Sofield318->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield318);

Sofield* Sofield319 = new Sofield();
Sofield319->setName(QString("r_forefoot_keyValue"));
Sofield319->setAccessType(QString("inputOutput"));
Sofield319->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield319);

Sofield* Sofield320 = new Sofield();
Sofield320->setName(QString("r_forefoot_changed"));
Sofield320->setAccessType(QString("outputOnly"));
Sofield320->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield320);

Sofield* Sofield321 = new Sofield();
Sofield321->setName(QString("r_hand_key"));
Sofield321->setAccessType(QString("inputOutput"));
Sofield321->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield321);

Sofield* Sofield322 = new Sofield();
Sofield322->setName(QString("r_hand_keyValue"));
Sofield322->setAccessType(QString("inputOutput"));
Sofield322->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield322);

Sofield* Sofield323 = new Sofield();
Sofield323->setName(QString("r_hand_changed"));
Sofield323->setAccessType(QString("outputOnly"));
Sofield323->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield323);

Sofield* Sofield324 = new Sofield();
Sofield324->setName(QString("r_hindfoot_key"));
Sofield324->setAccessType(QString("inputOutput"));
Sofield324->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield324);

Sofield* Sofield325 = new Sofield();
Sofield325->setName(QString("r_hindfoot_keyValue"));
Sofield325->setAccessType(QString("inputOutput"));
Sofield325->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield325);

Sofield* Sofield326 = new Sofield();
Sofield326->setName(QString("r_hindfoot_changed"));
Sofield326->setAccessType(QString("outputOnly"));
Sofield326->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield326);

Sofield* Sofield327 = new Sofield();
Sofield327->setName(QString("r_hip_key"));
Sofield327->setAccessType(QString("inputOutput"));
Sofield327->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield327);

Sofield* Sofield328 = new Sofield();
Sofield328->setName(QString("r_hip_keyValue"));
Sofield328->setAccessType(QString("inputOutput"));
Sofield328->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield328);

Sofield* Sofield329 = new Sofield();
Sofield329->setName(QString("r_hip_changed"));
Sofield329->setAccessType(QString("outputOnly"));
Sofield329->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield329);

Sofield* Sofield330 = new Sofield();
Sofield330->setName(QString("r_index0_key"));
Sofield330->setAccessType(QString("inputOutput"));
Sofield330->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield330);

Sofield* Sofield331 = new Sofield();
Sofield331->setName(QString("r_index0_keyValue"));
Sofield331->setAccessType(QString("inputOutput"));
Sofield331->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield331);

Sofield* Sofield332 = new Sofield();
Sofield332->setName(QString("r_index0_changed"));
Sofield332->setAccessType(QString("outputOnly"));
Sofield332->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield332);

Sofield* Sofield333 = new Sofield();
Sofield333->setName(QString("r_index1_key"));
Sofield333->setAccessType(QString("inputOutput"));
Sofield333->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield333);

Sofield* Sofield334 = new Sofield();
Sofield334->setName(QString("r_index1_keyValue"));
Sofield334->setAccessType(QString("inputOutput"));
Sofield334->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield334);

Sofield* Sofield335 = new Sofield();
Sofield335->setName(QString("r_index1_changed"));
Sofield335->setAccessType(QString("outputOnly"));
Sofield335->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield335);

Sofield* Sofield336 = new Sofield();
Sofield336->setName(QString("r_index2_key"));
Sofield336->setAccessType(QString("inputOutput"));
Sofield336->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield336);

Sofield* Sofield337 = new Sofield();
Sofield337->setName(QString("r_index2_keyValue"));
Sofield337->setAccessType(QString("inputOutput"));
Sofield337->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield337);

Sofield* Sofield338 = new Sofield();
Sofield338->setName(QString("r_index2_changed"));
Sofield338->setAccessType(QString("outputOnly"));
Sofield338->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield338);

Sofield* Sofield339 = new Sofield();
Sofield339->setName(QString("r_index3_key"));
Sofield339->setAccessType(QString("inputOutput"));
Sofield339->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield339);

Sofield* Sofield340 = new Sofield();
Sofield340->setName(QString("r_index3_keyValue"));
Sofield340->setAccessType(QString("inputOutput"));
Sofield340->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield340);

Sofield* Sofield341 = new Sofield();
Sofield341->setName(QString("r_index3_changed"));
Sofield341->setAccessType(QString("outputOnly"));
Sofield341->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield341);

Sofield* Sofield342 = new Sofield();
Sofield342->setName(QString("r_index_distal_key"));
Sofield342->setAccessType(QString("inputOutput"));
Sofield342->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield342);

Sofield* Sofield343 = new Sofield();
Sofield343->setName(QString("r_index_distal_keyValue"));
Sofield343->setAccessType(QString("inputOutput"));
Sofield343->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield343);

Sofield* Sofield344 = new Sofield();
Sofield344->setName(QString("r_index_distal_changed"));
Sofield344->setAccessType(QString("outputOnly"));
Sofield344->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield344);

Sofield* Sofield345 = new Sofield();
Sofield345->setName(QString("r_index_metacarpal_key"));
Sofield345->setAccessType(QString("inputOutput"));
Sofield345->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield345);

Sofield* Sofield346 = new Sofield();
Sofield346->setName(QString("r_index_metacarpal_keyValue"));
Sofield346->setAccessType(QString("inputOutput"));
Sofield346->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield346);

Sofield* Sofield347 = new Sofield();
Sofield347->setName(QString("r_index_metacarpal_changed"));
Sofield347->setAccessType(QString("outputOnly"));
Sofield347->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield347);

Sofield* Sofield348 = new Sofield();
Sofield348->setName(QString("r_index_middle_key"));
Sofield348->setAccessType(QString("inputOutput"));
Sofield348->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield348);

Sofield* Sofield349 = new Sofield();
Sofield349->setName(QString("r_index_middle_keyValue"));
Sofield349->setAccessType(QString("inputOutput"));
Sofield349->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield349);

Sofield* Sofield350 = new Sofield();
Sofield350->setName(QString("r_index_middle_changed"));
Sofield350->setAccessType(QString("outputOnly"));
Sofield350->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield350);

Sofield* Sofield351 = new Sofield();
Sofield351->setName(QString("r_index_proximal_key"));
Sofield351->setAccessType(QString("inputOutput"));
Sofield351->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield351);

Sofield* Sofield352 = new Sofield();
Sofield352->setName(QString("r_index_proximal_keyValue"));
Sofield352->setAccessType(QString("inputOutput"));
Sofield352->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield352);

Sofield* Sofield353 = new Sofield();
Sofield353->setName(QString("r_index_proximal_changed"));
Sofield353->setAccessType(QString("outputOnly"));
Sofield353->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield353);

Sofield* Sofield354 = new Sofield();
Sofield354->setName(QString("r_knee_key"));
Sofield354->setAccessType(QString("inputOutput"));
Sofield354->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield354);

Sofield* Sofield355 = new Sofield();
Sofield355->setName(QString("r_knee_keyValue"));
Sofield355->setAccessType(QString("inputOutput"));
Sofield355->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield355);

Sofield* Sofield356 = new Sofield();
Sofield356->setName(QString("r_knee_changed"));
Sofield356->setAccessType(QString("outputOnly"));
Sofield356->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield356);

Sofield* Sofield357 = new Sofield();
Sofield357->setName(QString("r_metatarsal_key"));
Sofield357->setAccessType(QString("inputOutput"));
Sofield357->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield357);

Sofield* Sofield358 = new Sofield();
Sofield358->setName(QString("r_metatarsal_keyValue"));
Sofield358->setAccessType(QString("inputOutput"));
Sofield358->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield358);

Sofield* Sofield359 = new Sofield();
Sofield359->setName(QString("r_metatarsal_changed"));
Sofield359->setAccessType(QString("outputOnly"));
Sofield359->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield359);

Sofield* Sofield360 = new Sofield();
Sofield360->setName(QString("r_middistal_key"));
Sofield360->setAccessType(QString("inputOutput"));
Sofield360->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield360);

Sofield* Sofield361 = new Sofield();
Sofield361->setName(QString("r_middistal_keyValue"));
Sofield361->setAccessType(QString("inputOutput"));
Sofield361->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield361);

Sofield* Sofield362 = new Sofield();
Sofield362->setName(QString("r_middistal_changed"));
Sofield362->setAccessType(QString("outputOnly"));
Sofield362->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield362);

Sofield* Sofield363 = new Sofield();
Sofield363->setName(QString("r_middle0_key"));
Sofield363->setAccessType(QString("inputOutput"));
Sofield363->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield363);

Sofield* Sofield364 = new Sofield();
Sofield364->setName(QString("r_middle0_keyValue"));
Sofield364->setAccessType(QString("inputOutput"));
Sofield364->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield364);

Sofield* Sofield365 = new Sofield();
Sofield365->setName(QString("r_middle0_changed"));
Sofield365->setAccessType(QString("outputOnly"));
Sofield365->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield365);

Sofield* Sofield366 = new Sofield();
Sofield366->setName(QString("r_middle1_key"));
Sofield366->setAccessType(QString("inputOutput"));
Sofield366->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield366);

Sofield* Sofield367 = new Sofield();
Sofield367->setName(QString("r_middle1_keyValue"));
Sofield367->setAccessType(QString("inputOutput"));
Sofield367->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield367);

Sofield* Sofield368 = new Sofield();
Sofield368->setName(QString("r_middle1_changed"));
Sofield368->setAccessType(QString("outputOnly"));
Sofield368->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield368);

Sofield* Sofield369 = new Sofield();
Sofield369->setName(QString("r_middle2_key"));
Sofield369->setAccessType(QString("inputOutput"));
Sofield369->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield369);

Sofield* Sofield370 = new Sofield();
Sofield370->setName(QString("r_middle2_keyValue"));
Sofield370->setAccessType(QString("inputOutput"));
Sofield370->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield370);

Sofield* Sofield371 = new Sofield();
Sofield371->setName(QString("r_middle2_changed"));
Sofield371->setAccessType(QString("outputOnly"));
Sofield371->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield371);

Sofield* Sofield372 = new Sofield();
Sofield372->setName(QString("r_middle3_key"));
Sofield372->setAccessType(QString("inputOutput"));
Sofield372->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield372);

Sofield* Sofield373 = new Sofield();
Sofield373->setName(QString("r_middle3_keyValue"));
Sofield373->setAccessType(QString("inputOutput"));
Sofield373->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield373);

Sofield* Sofield374 = new Sofield();
Sofield374->setName(QString("r_middle3_changed"));
Sofield374->setAccessType(QString("outputOnly"));
Sofield374->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield374);

Sofield* Sofield375 = new Sofield();
Sofield375->setName(QString("r_middle_distal_key"));
Sofield375->setAccessType(QString("inputOutput"));
Sofield375->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield375);

Sofield* Sofield376 = new Sofield();
Sofield376->setName(QString("r_middle_distal_keyValue"));
Sofield376->setAccessType(QString("inputOutput"));
Sofield376->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield376);

Sofield* Sofield377 = new Sofield();
Sofield377->setName(QString("r_middle_distal_changed"));
Sofield377->setAccessType(QString("outputOnly"));
Sofield377->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield377);

Sofield* Sofield378 = new Sofield();
Sofield378->setName(QString("r_middle_metacarpal_key"));
Sofield378->setAccessType(QString("inputOutput"));
Sofield378->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield378);

Sofield* Sofield379 = new Sofield();
Sofield379->setName(QString("r_middle_metacarpal_keyValue"));
Sofield379->setAccessType(QString("inputOutput"));
Sofield379->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield379);

Sofield* Sofield380 = new Sofield();
Sofield380->setName(QString("r_middle_metacarpal_changed"));
Sofield380->setAccessType(QString("outputOnly"));
Sofield380->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield380);

Sofield* Sofield381 = new Sofield();
Sofield381->setName(QString("r_middle_middle_key"));
Sofield381->setAccessType(QString("inputOutput"));
Sofield381->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield381);

Sofield* Sofield382 = new Sofield();
Sofield382->setName(QString("r_middle_middle_keyValue"));
Sofield382->setAccessType(QString("inputOutput"));
Sofield382->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield382);

Sofield* Sofield383 = new Sofield();
Sofield383->setName(QString("r_middle_middle_changed"));
Sofield383->setAccessType(QString("outputOnly"));
Sofield383->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield383);

Sofield* Sofield384 = new Sofield();
Sofield384->setName(QString("r_middle_proximal_key"));
Sofield384->setAccessType(QString("inputOutput"));
Sofield384->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield384);

Sofield* Sofield385 = new Sofield();
Sofield385->setName(QString("r_middle_proximal_keyValue"));
Sofield385->setAccessType(QString("inputOutput"));
Sofield385->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield385);

Sofield* Sofield386 = new Sofield();
Sofield386->setName(QString("r_middle_proximal_changed"));
Sofield386->setAccessType(QString("outputOnly"));
Sofield386->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield386);

Sofield* Sofield387 = new Sofield();
Sofield387->setName(QString("r_midproximal_key"));
Sofield387->setAccessType(QString("inputOutput"));
Sofield387->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield387);

Sofield* Sofield388 = new Sofield();
Sofield388->setName(QString("r_midproximal_keyValue"));
Sofield388->setAccessType(QString("inputOutput"));
Sofield388->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield388);

Sofield* Sofield389 = new Sofield();
Sofield389->setName(QString("r_midproximal_changed"));
Sofield389->setAccessType(QString("outputOnly"));
Sofield389->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield389);

Sofield* Sofield390 = new Sofield();
Sofield390->setName(QString("r_midtarsal_key"));
Sofield390->setAccessType(QString("inputOutput"));
Sofield390->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield390);

Sofield* Sofield391 = new Sofield();
Sofield391->setName(QString("r_midtarsal_keyValue"));
Sofield391->setAccessType(QString("inputOutput"));
Sofield391->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield391);

Sofield* Sofield392 = new Sofield();
Sofield392->setName(QString("r_midtarsal_changed"));
Sofield392->setAccessType(QString("outputOnly"));
Sofield392->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield392);

Sofield* Sofield393 = new Sofield();
Sofield393->setName(QString("r_pinky0_key"));
Sofield393->setAccessType(QString("inputOutput"));
Sofield393->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield393);

Sofield* Sofield394 = new Sofield();
Sofield394->setName(QString("r_pinky0_keyValue"));
Sofield394->setAccessType(QString("inputOutput"));
Sofield394->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield394);

Sofield* Sofield395 = new Sofield();
Sofield395->setName(QString("r_pinky0_changed"));
Sofield395->setAccessType(QString("outputOnly"));
Sofield395->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield395);

Sofield* Sofield396 = new Sofield();
Sofield396->setName(QString("r_pinky1_key"));
Sofield396->setAccessType(QString("inputOutput"));
Sofield396->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield396);

Sofield* Sofield397 = new Sofield();
Sofield397->setName(QString("r_pinky1_keyValue"));
Sofield397->setAccessType(QString("inputOutput"));
Sofield397->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield397);

Sofield* Sofield398 = new Sofield();
Sofield398->setName(QString("r_pinky1_changed"));
Sofield398->setAccessType(QString("outputOnly"));
Sofield398->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield398);

Sofield* Sofield399 = new Sofield();
Sofield399->setName(QString("r_pinky2_key"));
Sofield399->setAccessType(QString("inputOutput"));
Sofield399->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield399);

Sofield* Sofield400 = new Sofield();
Sofield400->setName(QString("r_pinky2_keyValue"));
Sofield400->setAccessType(QString("inputOutput"));
Sofield400->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield400);

Sofield* Sofield401 = new Sofield();
Sofield401->setName(QString("r_pinky2_changed"));
Sofield401->setAccessType(QString("outputOnly"));
Sofield401->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield401);

Sofield* Sofield402 = new Sofield();
Sofield402->setName(QString("r_pinky3_key"));
Sofield402->setAccessType(QString("inputOutput"));
Sofield402->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield402);

Sofield* Sofield403 = new Sofield();
Sofield403->setName(QString("r_pinky3_keyValue"));
Sofield403->setAccessType(QString("inputOutput"));
Sofield403->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield403);

Sofield* Sofield404 = new Sofield();
Sofield404->setName(QString("r_pinky3_changed"));
Sofield404->setAccessType(QString("outputOnly"));
Sofield404->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield404);

Sofield* Sofield405 = new Sofield();
Sofield405->setName(QString("r_pinky_distal_key"));
Sofield405->setAccessType(QString("inputOutput"));
Sofield405->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield405);

Sofield* Sofield406 = new Sofield();
Sofield406->setName(QString("r_pinky_distal_keyValue"));
Sofield406->setAccessType(QString("inputOutput"));
Sofield406->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield406);

Sofield* Sofield407 = new Sofield();
Sofield407->setName(QString("r_pinky_distal_changed"));
Sofield407->setAccessType(QString("outputOnly"));
Sofield407->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield407);

Sofield* Sofield408 = new Sofield();
Sofield408->setName(QString("r_pinky_metacarpal_key"));
Sofield408->setAccessType(QString("inputOutput"));
Sofield408->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield408);

Sofield* Sofield409 = new Sofield();
Sofield409->setName(QString("r_pinky_metacarpal_keyValue"));
Sofield409->setAccessType(QString("inputOutput"));
Sofield409->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield409);

Sofield* Sofield410 = new Sofield();
Sofield410->setName(QString("r_pinky_metacarpal_changed"));
Sofield410->setAccessType(QString("outputOnly"));
Sofield410->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield410);

Sofield* Sofield411 = new Sofield();
Sofield411->setName(QString("r_pinky_middle_key"));
Sofield411->setAccessType(QString("inputOutput"));
Sofield411->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield411);

Sofield* Sofield412 = new Sofield();
Sofield412->setName(QString("r_pinky_middle_keyValue"));
Sofield412->setAccessType(QString("inputOutput"));
Sofield412->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield412);

Sofield* Sofield413 = new Sofield();
Sofield413->setName(QString("r_pinky_middle_changed"));
Sofield413->setAccessType(QString("outputOnly"));
Sofield413->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield413);

Sofield* Sofield414 = new Sofield();
Sofield414->setName(QString("r_pinky_proximal_key"));
Sofield414->setAccessType(QString("inputOutput"));
Sofield414->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield414);

Sofield* Sofield415 = new Sofield();
Sofield415->setName(QString("r_pinky_proximal_keyValue"));
Sofield415->setAccessType(QString("inputOutput"));
Sofield415->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield415);

Sofield* Sofield416 = new Sofield();
Sofield416->setName(QString("r_pinky_proximal_changed"));
Sofield416->setAccessType(QString("outputOnly"));
Sofield416->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield416);

Sofield* Sofield417 = new Sofield();
Sofield417->setName(QString("r_ring0_key"));
Sofield417->setAccessType(QString("inputOutput"));
Sofield417->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield417);

Sofield* Sofield418 = new Sofield();
Sofield418->setName(QString("r_ring0_keyValue"));
Sofield418->setAccessType(QString("inputOutput"));
Sofield418->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield418);

Sofield* Sofield419 = new Sofield();
Sofield419->setName(QString("r_ring0_changed"));
Sofield419->setAccessType(QString("outputOnly"));
Sofield419->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield419);

Sofield* Sofield420 = new Sofield();
Sofield420->setName(QString("r_ring1_key"));
Sofield420->setAccessType(QString("inputOutput"));
Sofield420->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield420);

Sofield* Sofield421 = new Sofield();
Sofield421->setName(QString("r_ring1_keyValue"));
Sofield421->setAccessType(QString("inputOutput"));
Sofield421->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield421);

Sofield* Sofield422 = new Sofield();
Sofield422->setName(QString("r_ring1_changed"));
Sofield422->setAccessType(QString("outputOnly"));
Sofield422->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield422);

Sofield* Sofield423 = new Sofield();
Sofield423->setName(QString("r_ring2_key"));
Sofield423->setAccessType(QString("inputOutput"));
Sofield423->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield423);

Sofield* Sofield424 = new Sofield();
Sofield424->setName(QString("r_ring2_keyValue"));
Sofield424->setAccessType(QString("inputOutput"));
Sofield424->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield424);

Sofield* Sofield425 = new Sofield();
Sofield425->setName(QString("r_ring2_changed"));
Sofield425->setAccessType(QString("outputOnly"));
Sofield425->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield425);

Sofield* Sofield426 = new Sofield();
Sofield426->setName(QString("r_ring3_key"));
Sofield426->setAccessType(QString("inputOutput"));
Sofield426->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield426);

Sofield* Sofield427 = new Sofield();
Sofield427->setName(QString("r_ring3_keyValue"));
Sofield427->setAccessType(QString("inputOutput"));
Sofield427->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield427);

Sofield* Sofield428 = new Sofield();
Sofield428->setName(QString("r_ring3_changed"));
Sofield428->setAccessType(QString("outputOnly"));
Sofield428->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield428);

Sofield* Sofield429 = new Sofield();
Sofield429->setName(QString("r_ring_distal_key"));
Sofield429->setAccessType(QString("inputOutput"));
Sofield429->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield429);

Sofield* Sofield430 = new Sofield();
Sofield430->setName(QString("r_ring_distal_keyValue"));
Sofield430->setAccessType(QString("inputOutput"));
Sofield430->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield430);

Sofield* Sofield431 = new Sofield();
Sofield431->setName(QString("r_ring_distal_changed"));
Sofield431->setAccessType(QString("outputOnly"));
Sofield431->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield431);

Sofield* Sofield432 = new Sofield();
Sofield432->setName(QString("r_ring_metacarpal_key"));
Sofield432->setAccessType(QString("inputOutput"));
Sofield432->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield432);

Sofield* Sofield433 = new Sofield();
Sofield433->setName(QString("r_ring_metacarpal_keyValue"));
Sofield433->setAccessType(QString("inputOutput"));
Sofield433->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield433);

Sofield* Sofield434 = new Sofield();
Sofield434->setName(QString("r_ring_metacarpal_changed"));
Sofield434->setAccessType(QString("outputOnly"));
Sofield434->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield434);

Sofield* Sofield435 = new Sofield();
Sofield435->setName(QString("r_ring_middle_key"));
Sofield435->setAccessType(QString("inputOutput"));
Sofield435->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield435);

Sofield* Sofield436 = new Sofield();
Sofield436->setName(QString("r_ring_middle_keyValue"));
Sofield436->setAccessType(QString("inputOutput"));
Sofield436->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield436);

Sofield* Sofield437 = new Sofield();
Sofield437->setName(QString("r_ring_middle_changed"));
Sofield437->setAccessType(QString("outputOnly"));
Sofield437->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield437);

Sofield* Sofield438 = new Sofield();
Sofield438->setName(QString("r_ring_proximal_key"));
Sofield438->setAccessType(QString("inputOutput"));
Sofield438->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield438);

Sofield* Sofield439 = new Sofield();
Sofield439->setName(QString("r_ring_proximal_keyValue"));
Sofield439->setAccessType(QString("inputOutput"));
Sofield439->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield439);

Sofield* Sofield440 = new Sofield();
Sofield440->setName(QString("r_ring_proximal_changed"));
Sofield440->setAccessType(QString("outputOnly"));
Sofield440->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield440);

Sofield* Sofield441 = new Sofield();
Sofield441->setName(QString("r_scapula_key"));
Sofield441->setAccessType(QString("inputOutput"));
Sofield441->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield441);

Sofield* Sofield442 = new Sofield();
Sofield442->setName(QString("r_scapula_keyValue"));
Sofield442->setAccessType(QString("inputOutput"));
Sofield442->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield442);

Sofield* Sofield443 = new Sofield();
Sofield443->setName(QString("r_scapula_changed"));
Sofield443->setAccessType(QString("outputOnly"));
Sofield443->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield443);

Sofield* Sofield444 = new Sofield();
Sofield444->setName(QString("r_shoulder_key"));
Sofield444->setAccessType(QString("inputOutput"));
Sofield444->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield444);

Sofield* Sofield445 = new Sofield();
Sofield445->setName(QString("r_shoulder_keyValue"));
Sofield445->setAccessType(QString("inputOutput"));
Sofield445->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield445);

Sofield* Sofield446 = new Sofield();
Sofield446->setName(QString("r_shoulder_changed"));
Sofield446->setAccessType(QString("outputOnly"));
Sofield446->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield446);

Sofield* Sofield447 = new Sofield();
Sofield447->setName(QString("r_sternoclavicular_key"));
Sofield447->setAccessType(QString("inputOutput"));
Sofield447->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield447);

Sofield* Sofield448 = new Sofield();
Sofield448->setName(QString("r_sternoclavicular_keyValue"));
Sofield448->setAccessType(QString("inputOutput"));
Sofield448->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield448);

Sofield* Sofield449 = new Sofield();
Sofield449->setName(QString("r_sternoclavicular_changed"));
Sofield449->setAccessType(QString("outputOnly"));
Sofield449->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield449);

Sofield* Sofield450 = new Sofield();
Sofield450->setName(QString("r_subtalar_key"));
Sofield450->setAccessType(QString("inputOutput"));
Sofield450->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield450);

Sofield* Sofield451 = new Sofield();
Sofield451->setName(QString("r_subtalar_keyValue"));
Sofield451->setAccessType(QString("inputOutput"));
Sofield451->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield451);

Sofield* Sofield452 = new Sofield();
Sofield452->setName(QString("r_subtalar_changed"));
Sofield452->setAccessType(QString("outputOnly"));
Sofield452->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield452);

Sofield* Sofield453 = new Sofield();
Sofield453->setName(QString("r_thigh_key"));
Sofield453->setAccessType(QString("inputOutput"));
Sofield453->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield453);

Sofield* Sofield454 = new Sofield();
Sofield454->setName(QString("r_thigh_keyValue"));
Sofield454->setAccessType(QString("inputOutput"));
Sofield454->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield454);

Sofield* Sofield455 = new Sofield();
Sofield455->setName(QString("r_thigh_changed"));
Sofield455->setAccessType(QString("outputOnly"));
Sofield455->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield455);

Sofield* Sofield456 = new Sofield();
Sofield456->setName(QString("r_thumb1_key"));
Sofield456->setAccessType(QString("inputOutput"));
Sofield456->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield456);

Sofield* Sofield457 = new Sofield();
Sofield457->setName(QString("r_thumb1_keyValue"));
Sofield457->setAccessType(QString("inputOutput"));
Sofield457->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield457);

Sofield* Sofield458 = new Sofield();
Sofield458->setName(QString("r_thumb1_changed"));
Sofield458->setAccessType(QString("outputOnly"));
Sofield458->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield458);

Sofield* Sofield459 = new Sofield();
Sofield459->setName(QString("r_thumb2_key"));
Sofield459->setAccessType(QString("inputOutput"));
Sofield459->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield459);

Sofield* Sofield460 = new Sofield();
Sofield460->setName(QString("r_thumb2_keyValue"));
Sofield460->setAccessType(QString("inputOutput"));
Sofield460->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield460);

Sofield* Sofield461 = new Sofield();
Sofield461->setName(QString("r_thumb2_changed"));
Sofield461->setAccessType(QString("outputOnly"));
Sofield461->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield461);

Sofield* Sofield462 = new Sofield();
Sofield462->setName(QString("r_thumb3_key"));
Sofield462->setAccessType(QString("inputOutput"));
Sofield462->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield462);

Sofield* Sofield463 = new Sofield();
Sofield463->setName(QString("r_thumb3_keyValue"));
Sofield463->setAccessType(QString("inputOutput"));
Sofield463->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield463);

Sofield* Sofield464 = new Sofield();
Sofield464->setName(QString("r_thumb3_changed"));
Sofield464->setAccessType(QString("outputOnly"));
Sofield464->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield464);

Sofield* Sofield465 = new Sofield();
Sofield465->setName(QString("r_thumb_distal_key"));
Sofield465->setAccessType(QString("inputOutput"));
Sofield465->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield465);

Sofield* Sofield466 = new Sofield();
Sofield466->setName(QString("r_thumb_distal_keyValue"));
Sofield466->setAccessType(QString("inputOutput"));
Sofield466->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield466);

Sofield* Sofield467 = new Sofield();
Sofield467->setName(QString("r_thumb_distal_changed"));
Sofield467->setAccessType(QString("outputOnly"));
Sofield467->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield467);

Sofield* Sofield468 = new Sofield();
Sofield468->setName(QString("r_thumb_metacarpal_key"));
Sofield468->setAccessType(QString("inputOutput"));
Sofield468->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield468);

Sofield* Sofield469 = new Sofield();
Sofield469->setName(QString("r_thumb_metacarpal_keyValue"));
Sofield469->setAccessType(QString("inputOutput"));
Sofield469->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield469);

Sofield* Sofield470 = new Sofield();
Sofield470->setName(QString("r_thumb_metacarpal_changed"));
Sofield470->setAccessType(QString("outputOnly"));
Sofield470->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield470);

Sofield* Sofield471 = new Sofield();
Sofield471->setName(QString("r_thumb_proximal_key"));
Sofield471->setAccessType(QString("inputOutput"));
Sofield471->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield471);

Sofield* Sofield472 = new Sofield();
Sofield472->setName(QString("r_thumb_proximal_keyValue"));
Sofield472->setAccessType(QString("inputOutput"));
Sofield472->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield472);

Sofield* Sofield473 = new Sofield();
Sofield473->setName(QString("r_thumb_proximal_changed"));
Sofield473->setAccessType(QString("outputOnly"));
Sofield473->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield473);

Sofield* Sofield474 = new Sofield();
Sofield474->setName(QString("r_upperarm_key"));
Sofield474->setAccessType(QString("inputOutput"));
Sofield474->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield474);

Sofield* Sofield475 = new Sofield();
Sofield475->setName(QString("r_upperarm_keyValue"));
Sofield475->setAccessType(QString("inputOutput"));
Sofield475->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield475);

Sofield* Sofield476 = new Sofield();
Sofield476->setName(QString("r_upperarm_changed"));
Sofield476->setAccessType(QString("outputOnly"));
Sofield476->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield476);

Sofield* Sofield477 = new Sofield();
Sofield477->setName(QString("r_wrist_key"));
Sofield477->setAccessType(QString("inputOutput"));
Sofield477->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield477);

Sofield* Sofield478 = new Sofield();
Sofield478->setName(QString("r_wrist_keyValue"));
Sofield478->setAccessType(QString("inputOutput"));
Sofield478->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield478);

Sofield* Sofield479 = new Sofield();
Sofield479->setName(QString("r_wrist_changed"));
Sofield479->setAccessType(QString("outputOnly"));
Sofield479->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield479);

Sofield* Sofield480 = new Sofield();
Sofield480->setName(QString("sacroiliac_key"));
Sofield480->setAccessType(QString("inputOutput"));
Sofield480->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield480);

Sofield* Sofield481 = new Sofield();
Sofield481->setName(QString("sacroiliac_keyValue"));
Sofield481->setAccessType(QString("inputOutput"));
Sofield481->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield481);

Sofield* Sofield482 = new Sofield();
Sofield482->setName(QString("sacroiliac_changed"));
Sofield482->setAccessType(QString("outputOnly"));
Sofield482->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield482);

Sofield* Sofield483 = new Sofield();
Sofield483->setName(QString("sacrum_key"));
Sofield483->setAccessType(QString("inputOutput"));
Sofield483->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield483);

Sofield* Sofield484 = new Sofield();
Sofield484->setName(QString("sacrum_keyValue"));
Sofield484->setAccessType(QString("inputOutput"));
Sofield484->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield484);

Sofield* Sofield485 = new Sofield();
Sofield485->setName(QString("sacrum_changed"));
Sofield485->setAccessType(QString("outputOnly"));
Sofield485->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield485);

Sofield* Sofield486 = new Sofield();
Sofield486->setName(QString("skull_key"));
Sofield486->setAccessType(QString("inputOutput"));
Sofield486->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield486);

Sofield* Sofield487 = new Sofield();
Sofield487->setName(QString("skull_keyValue"));
Sofield487->setAccessType(QString("inputOutput"));
Sofield487->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield487);

Sofield* Sofield488 = new Sofield();
Sofield488->setName(QString("skull_changed"));
Sofield488->setAccessType(QString("outputOnly"));
Sofield488->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield488);

Sofield* Sofield489 = new Sofield();
Sofield489->setName(QString("skullbase_key"));
Sofield489->setAccessType(QString("inputOutput"));
Sofield489->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield489);

Sofield* Sofield490 = new Sofield();
Sofield490->setName(QString("skullbase_keyValue"));
Sofield490->setAccessType(QString("inputOutput"));
Sofield490->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield490);

Sofield* Sofield491 = new Sofield();
Sofield491->setName(QString("skullbase_changed"));
Sofield491->setAccessType(QString("outputOnly"));
Sofield491->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield491);

Sofield* Sofield492 = new Sofield();
Sofield492->setName(QString("t10_key"));
Sofield492->setAccessType(QString("inputOutput"));
Sofield492->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield492);

Sofield* Sofield493 = new Sofield();
Sofield493->setName(QString("t10_keyValue"));
Sofield493->setAccessType(QString("inputOutput"));
Sofield493->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield493);

Sofield* Sofield494 = new Sofield();
Sofield494->setName(QString("t10_changed"));
Sofield494->setAccessType(QString("outputOnly"));
Sofield494->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield494);

Sofield* Sofield495 = new Sofield();
Sofield495->setName(QString("t11_key"));
Sofield495->setAccessType(QString("inputOutput"));
Sofield495->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield495);

Sofield* Sofield496 = new Sofield();
Sofield496->setName(QString("t11_keyValue"));
Sofield496->setAccessType(QString("inputOutput"));
Sofield496->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield496);

Sofield* Sofield497 = new Sofield();
Sofield497->setName(QString("t11_changed"));
Sofield497->setAccessType(QString("outputOnly"));
Sofield497->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield497);

Sofield* Sofield498 = new Sofield();
Sofield498->setName(QString("t12_key"));
Sofield498->setAccessType(QString("inputOutput"));
Sofield498->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield498);

Sofield* Sofield499 = new Sofield();
Sofield499->setName(QString("t12_keyValue"));
Sofield499->setAccessType(QString("inputOutput"));
Sofield499->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield499);

Sofield* Sofield500 = new Sofield();
Sofield500->setName(QString("t12_changed"));
Sofield500->setAccessType(QString("outputOnly"));
Sofield500->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield500);

Sofield* Sofield501 = new Sofield();
Sofield501->setName(QString("t1_key"));
Sofield501->setAccessType(QString("inputOutput"));
Sofield501->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield501);

Sofield* Sofield502 = new Sofield();
Sofield502->setName(QString("t1_keyValue"));
Sofield502->setAccessType(QString("inputOutput"));
Sofield502->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield502);

Sofield* Sofield503 = new Sofield();
Sofield503->setName(QString("t1_changed"));
Sofield503->setAccessType(QString("outputOnly"));
Sofield503->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield503);

Sofield* Sofield504 = new Sofield();
Sofield504->setName(QString("t2_key"));
Sofield504->setAccessType(QString("inputOutput"));
Sofield504->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield504);

Sofield* Sofield505 = new Sofield();
Sofield505->setName(QString("t2_keyValue"));
Sofield505->setAccessType(QString("inputOutput"));
Sofield505->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield505);

Sofield* Sofield506 = new Sofield();
Sofield506->setName(QString("t2_changed"));
Sofield506->setAccessType(QString("outputOnly"));
Sofield506->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield506);

Sofield* Sofield507 = new Sofield();
Sofield507->setName(QString("t3_key"));
Sofield507->setAccessType(QString("inputOutput"));
Sofield507->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield507);

Sofield* Sofield508 = new Sofield();
Sofield508->setName(QString("t3_keyValue"));
Sofield508->setAccessType(QString("inputOutput"));
Sofield508->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield508);

Sofield* Sofield509 = new Sofield();
Sofield509->setName(QString("t3_changed"));
Sofield509->setAccessType(QString("outputOnly"));
Sofield509->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield509);

Sofield* Sofield510 = new Sofield();
Sofield510->setName(QString("t4_key"));
Sofield510->setAccessType(QString("inputOutput"));
Sofield510->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield510);

Sofield* Sofield511 = new Sofield();
Sofield511->setName(QString("t4_keyValue"));
Sofield511->setAccessType(QString("inputOutput"));
Sofield511->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield511);

Sofield* Sofield512 = new Sofield();
Sofield512->setName(QString("t4_changed"));
Sofield512->setAccessType(QString("outputOnly"));
Sofield512->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield512);

Sofield* Sofield513 = new Sofield();
Sofield513->setName(QString("t5_key"));
Sofield513->setAccessType(QString("inputOutput"));
Sofield513->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield513);

Sofield* Sofield514 = new Sofield();
Sofield514->setName(QString("t5_keyValue"));
Sofield514->setAccessType(QString("inputOutput"));
Sofield514->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield514);

Sofield* Sofield515 = new Sofield();
Sofield515->setName(QString("t5_changed"));
Sofield515->setAccessType(QString("outputOnly"));
Sofield515->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield515);

Sofield* Sofield516 = new Sofield();
Sofield516->setName(QString("t6_key"));
Sofield516->setAccessType(QString("inputOutput"));
Sofield516->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield516);

Sofield* Sofield517 = new Sofield();
Sofield517->setName(QString("t6_keyValue"));
Sofield517->setAccessType(QString("inputOutput"));
Sofield517->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield517);

Sofield* Sofield518 = new Sofield();
Sofield518->setName(QString("t6_changed"));
Sofield518->setAccessType(QString("outputOnly"));
Sofield518->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield518);

Sofield* Sofield519 = new Sofield();
Sofield519->setName(QString("t7_key"));
Sofield519->setAccessType(QString("inputOutput"));
Sofield519->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield519);

Sofield* Sofield520 = new Sofield();
Sofield520->setName(QString("t7_keyValue"));
Sofield520->setAccessType(QString("inputOutput"));
Sofield520->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield520);

Sofield* Sofield521 = new Sofield();
Sofield521->setName(QString("t7_changed"));
Sofield521->setAccessType(QString("outputOnly"));
Sofield521->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield521);

Sofield* Sofield522 = new Sofield();
Sofield522->setName(QString("t8_key"));
Sofield522->setAccessType(QString("inputOutput"));
Sofield522->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield522);

Sofield* Sofield523 = new Sofield();
Sofield523->setName(QString("t8_keyValue"));
Sofield523->setAccessType(QString("inputOutput"));
Sofield523->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield523);

Sofield* Sofield524 = new Sofield();
Sofield524->setName(QString("t8_changed"));
Sofield524->setAccessType(QString("outputOnly"));
Sofield524->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield524);

Sofield* Sofield525 = new Sofield();
Sofield525->setName(QString("t9_key"));
Sofield525->setAccessType(QString("inputOutput"));
Sofield525->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield525);

Sofield* Sofield526 = new Sofield();
Sofield526->setName(QString("t9_keyValue"));
Sofield526->setAccessType(QString("inputOutput"));
Sofield526->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield526);

Sofield* Sofield527 = new Sofield();
Sofield527->setName(QString("t9_changed"));
Sofield527->setAccessType(QString("outputOnly"));
Sofield527->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield527);

Sofield* Sofield528 = new Sofield();
Sofield528->setName(QString("temporomandibular_key"));
Sofield528->setAccessType(QString("inputOutput"));
Sofield528->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield528);

Sofield* Sofield529 = new Sofield();
Sofield529->setName(QString("temporomandibular_keyValue"));
Sofield529->setAccessType(QString("inputOutput"));
Sofield529->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield529);

Sofield* Sofield530 = new Sofield();
Sofield530->setName(QString("temporomandibular_changed"));
Sofield530->setAccessType(QString("outputOnly"));
Sofield530->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield530);

Sofield* Sofield531 = new Sofield();
Sofield531->setName(QString("vc1_key"));
Sofield531->setAccessType(QString("inputOutput"));
Sofield531->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield531);

Sofield* Sofield532 = new Sofield();
Sofield532->setName(QString("vc1_keyValue"));
Sofield532->setAccessType(QString("inputOutput"));
Sofield532->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield532);

Sofield* Sofield533 = new Sofield();
Sofield533->setName(QString("vc1_changed"));
Sofield533->setAccessType(QString("outputOnly"));
Sofield533->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield533);

Sofield* Sofield534 = new Sofield();
Sofield534->setName(QString("vc2_key"));
Sofield534->setAccessType(QString("inputOutput"));
Sofield534->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield534);

Sofield* Sofield535 = new Sofield();
Sofield535->setName(QString("vc2_keyValue"));
Sofield535->setAccessType(QString("inputOutput"));
Sofield535->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield535);

Sofield* Sofield536 = new Sofield();
Sofield536->setName(QString("vc2_changed"));
Sofield536->setAccessType(QString("outputOnly"));
Sofield536->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield536);

Sofield* Sofield537 = new Sofield();
Sofield537->setName(QString("vc3_key"));
Sofield537->setAccessType(QString("inputOutput"));
Sofield537->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield537);

Sofield* Sofield538 = new Sofield();
Sofield538->setName(QString("vc3_keyValue"));
Sofield538->setAccessType(QString("inputOutput"));
Sofield538->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield538);

Sofield* Sofield539 = new Sofield();
Sofield539->setName(QString("vc3_changed"));
Sofield539->setAccessType(QString("outputOnly"));
Sofield539->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield539);

Sofield* Sofield540 = new Sofield();
Sofield540->setName(QString("vc4_key"));
Sofield540->setAccessType(QString("inputOutput"));
Sofield540->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield540);

Sofield* Sofield541 = new Sofield();
Sofield541->setName(QString("vc4_keyValue"));
Sofield541->setAccessType(QString("inputOutput"));
Sofield541->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield541);

Sofield* Sofield542 = new Sofield();
Sofield542->setName(QString("vc4_changed"));
Sofield542->setAccessType(QString("outputOnly"));
Sofield542->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield542);

Sofield* Sofield543 = new Sofield();
Sofield543->setName(QString("vc5_key"));
Sofield543->setAccessType(QString("inputOutput"));
Sofield543->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield543);

Sofield* Sofield544 = new Sofield();
Sofield544->setName(QString("vc5_keyValue"));
Sofield544->setAccessType(QString("inputOutput"));
Sofield544->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield544);

Sofield* Sofield545 = new Sofield();
Sofield545->setName(QString("vc5_changed"));
Sofield545->setAccessType(QString("outputOnly"));
Sofield545->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield545);

Sofield* Sofield546 = new Sofield();
Sofield546->setName(QString("vc6_key"));
Sofield546->setAccessType(QString("inputOutput"));
Sofield546->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield546);

Sofield* Sofield547 = new Sofield();
Sofield547->setName(QString("vc6_keyValue"));
Sofield547->setAccessType(QString("inputOutput"));
Sofield547->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield547);

Sofield* Sofield548 = new Sofield();
Sofield548->setName(QString("vc6_changed"));
Sofield548->setAccessType(QString("outputOnly"));
Sofield548->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield548);

Sofield* Sofield549 = new Sofield();
Sofield549->setName(QString("vc7_key"));
Sofield549->setAccessType(QString("inputOutput"));
Sofield549->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield549);

Sofield* Sofield550 = new Sofield();
Sofield550->setName(QString("vc7_keyValue"));
Sofield550->setAccessType(QString("inputOutput"));
Sofield550->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield550);

Sofield* Sofield551 = new Sofield();
Sofield551->setName(QString("vc7_changed"));
Sofield551->setAccessType(QString("outputOnly"));
Sofield551->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield551);

Sofield* Sofield552 = new Sofield();
Sofield552->setName(QString("vl1_key"));
Sofield552->setAccessType(QString("inputOutput"));
Sofield552->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield552);

Sofield* Sofield553 = new Sofield();
Sofield553->setName(QString("vl1_keyValue"));
Sofield553->setAccessType(QString("inputOutput"));
Sofield553->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield553);

Sofield* Sofield554 = new Sofield();
Sofield554->setName(QString("vl1_changed"));
Sofield554->setAccessType(QString("outputOnly"));
Sofield554->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield554);

Sofield* Sofield555 = new Sofield();
Sofield555->setName(QString("vl2_key"));
Sofield555->setAccessType(QString("inputOutput"));
Sofield555->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield555);

Sofield* Sofield556 = new Sofield();
Sofield556->setName(QString("vl2_keyValue"));
Sofield556->setAccessType(QString("inputOutput"));
Sofield556->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield556);

Sofield* Sofield557 = new Sofield();
Sofield557->setName(QString("vl2_changed"));
Sofield557->setAccessType(QString("outputOnly"));
Sofield557->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield557);

Sofield* Sofield558 = new Sofield();
Sofield558->setName(QString("vl3_key"));
Sofield558->setAccessType(QString("inputOutput"));
Sofield558->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield558);

Sofield* Sofield559 = new Sofield();
Sofield559->setName(QString("vl3_keyValue"));
Sofield559->setAccessType(QString("inputOutput"));
Sofield559->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield559);

Sofield* Sofield560 = new Sofield();
Sofield560->setName(QString("vl3_changed"));
Sofield560->setAccessType(QString("outputOnly"));
Sofield560->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield560);

Sofield* Sofield561 = new Sofield();
Sofield561->setName(QString("vl4_key"));
Sofield561->setAccessType(QString("inputOutput"));
Sofield561->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield561);

Sofield* Sofield562 = new Sofield();
Sofield562->setName(QString("vl4_keyValue"));
Sofield562->setAccessType(QString("inputOutput"));
Sofield562->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield562);

Sofield* Sofield563 = new Sofield();
Sofield563->setName(QString("vl4_changed"));
Sofield563->setAccessType(QString("outputOnly"));
Sofield563->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield563);

Sofield* Sofield564 = new Sofield();
Sofield564->setName(QString("vl5_key"));
Sofield564->setAccessType(QString("inputOutput"));
Sofield564->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield564);

Sofield* Sofield565 = new Sofield();
Sofield565->setName(QString("vl5_keyValue"));
Sofield565->setAccessType(QString("inputOutput"));
Sofield565->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield565);

Sofield* Sofield566 = new Sofield();
Sofield566->setName(QString("vl5_changed"));
Sofield566->setAccessType(QString("outputOnly"));
Sofield566->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield566);

Sofield* Sofield567 = new Sofield();
Sofield567->setName(QString("vt10_key"));
Sofield567->setAccessType(QString("inputOutput"));
Sofield567->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield567);

Sofield* Sofield568 = new Sofield();
Sofield568->setName(QString("vt10_keyValue"));
Sofield568->setAccessType(QString("inputOutput"));
Sofield568->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield568);

Sofield* Sofield569 = new Sofield();
Sofield569->setName(QString("vt10_changed"));
Sofield569->setAccessType(QString("outputOnly"));
Sofield569->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield569);

Sofield* Sofield570 = new Sofield();
Sofield570->setName(QString("vt11_key"));
Sofield570->setAccessType(QString("inputOutput"));
Sofield570->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield570);

Sofield* Sofield571 = new Sofield();
Sofield571->setName(QString("vt11_keyValue"));
Sofield571->setAccessType(QString("inputOutput"));
Sofield571->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield571);

Sofield* Sofield572 = new Sofield();
Sofield572->setName(QString("vt11_changed"));
Sofield572->setAccessType(QString("outputOnly"));
Sofield572->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield572);

Sofield* Sofield573 = new Sofield();
Sofield573->setName(QString("vt12_key"));
Sofield573->setAccessType(QString("inputOutput"));
Sofield573->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield573);

Sofield* Sofield574 = new Sofield();
Sofield574->setName(QString("vt12_keyValue"));
Sofield574->setAccessType(QString("inputOutput"));
Sofield574->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield574);

Sofield* Sofield575 = new Sofield();
Sofield575->setName(QString("vt12_changed"));
Sofield575->setAccessType(QString("outputOnly"));
Sofield575->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield575);

Sofield* Sofield576 = new Sofield();
Sofield576->setName(QString("vt1_key"));
Sofield576->setAccessType(QString("inputOutput"));
Sofield576->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield576);

Sofield* Sofield577 = new Sofield();
Sofield577->setName(QString("vt1_keyValue"));
Sofield577->setAccessType(QString("inputOutput"));
Sofield577->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield577);

Sofield* Sofield578 = new Sofield();
Sofield578->setName(QString("vt1_changed"));
Sofield578->setAccessType(QString("outputOnly"));
Sofield578->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield578);

Sofield* Sofield579 = new Sofield();
Sofield579->setName(QString("vt2_key"));
Sofield579->setAccessType(QString("inputOutput"));
Sofield579->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield579);

Sofield* Sofield580 = new Sofield();
Sofield580->setName(QString("vt2_keyValue"));
Sofield580->setAccessType(QString("inputOutput"));
Sofield580->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield580);

Sofield* Sofield581 = new Sofield();
Sofield581->setName(QString("vt2_changed"));
Sofield581->setAccessType(QString("outputOnly"));
Sofield581->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield581);

Sofield* Sofield582 = new Sofield();
Sofield582->setName(QString("vt3_key"));
Sofield582->setAccessType(QString("inputOutput"));
Sofield582->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield582);

Sofield* Sofield583 = new Sofield();
Sofield583->setName(QString("vt3_keyValue"));
Sofield583->setAccessType(QString("inputOutput"));
Sofield583->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield583);

Sofield* Sofield584 = new Sofield();
Sofield584->setName(QString("vt3_changed"));
Sofield584->setAccessType(QString("outputOnly"));
Sofield584->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield584);

Sofield* Sofield585 = new Sofield();
Sofield585->setName(QString("vt4_key"));
Sofield585->setAccessType(QString("inputOutput"));
Sofield585->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield585);

Sofield* Sofield586 = new Sofield();
Sofield586->setName(QString("vt4_keyValue"));
Sofield586->setAccessType(QString("inputOutput"));
Sofield586->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield586);

Sofield* Sofield587 = new Sofield();
Sofield587->setName(QString("vt4_changed"));
Sofield587->setAccessType(QString("outputOnly"));
Sofield587->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield587);

Sofield* Sofield588 = new Sofield();
Sofield588->setName(QString("vt5_key"));
Sofield588->setAccessType(QString("inputOutput"));
Sofield588->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield588);

Sofield* Sofield589 = new Sofield();
Sofield589->setName(QString("vt5_keyValue"));
Sofield589->setAccessType(QString("inputOutput"));
Sofield589->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield589);

Sofield* Sofield590 = new Sofield();
Sofield590->setName(QString("vt5_changed"));
Sofield590->setAccessType(QString("outputOnly"));
Sofield590->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield590);

Sofield* Sofield591 = new Sofield();
Sofield591->setName(QString("vt6_key"));
Sofield591->setAccessType(QString("inputOutput"));
Sofield591->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield591);

Sofield* Sofield592 = new Sofield();
Sofield592->setName(QString("vt6_keyValue"));
Sofield592->setAccessType(QString("inputOutput"));
Sofield592->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield592);

Sofield* Sofield593 = new Sofield();
Sofield593->setName(QString("vt6_changed"));
Sofield593->setAccessType(QString("outputOnly"));
Sofield593->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield593);

Sofield* Sofield594 = new Sofield();
Sofield594->setName(QString("vt7_key"));
Sofield594->setAccessType(QString("inputOutput"));
Sofield594->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield594);

Sofield* Sofield595 = new Sofield();
Sofield595->setName(QString("vt7_keyValue"));
Sofield595->setAccessType(QString("inputOutput"));
Sofield595->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield595);

Sofield* Sofield596 = new Sofield();
Sofield596->setName(QString("vt7_changed"));
Sofield596->setAccessType(QString("outputOnly"));
Sofield596->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield596);

Sofield* Sofield597 = new Sofield();
Sofield597->setName(QString("vt8_key"));
Sofield597->setAccessType(QString("inputOutput"));
Sofield597->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield597);

Sofield* Sofield598 = new Sofield();
Sofield598->setName(QString("vt8_keyValue"));
Sofield598->setAccessType(QString("inputOutput"));
Sofield598->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield598);

Sofield* Sofield599 = new Sofield();
Sofield599->setName(QString("vt8_changed"));
Sofield599->setAccessType(QString("outputOnly"));
Sofield599->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield599);

Sofield* Sofield600 = new Sofield();
Sofield600->setName(QString("vt9_key"));
Sofield600->setAccessType(QString("inputOutput"));
Sofield600->setType(QString("MFFloat"));
//no default value
SoProtoInterface21->addChild(*Sofield600);

Sofield* Sofield601 = new Sofield();
Sofield601->setName(QString("vt9_keyValue"));
Sofield601->setAccessType(QString("inputOutput"));
Sofield601->setType(QString("MFRotation"));
//no default value
SoProtoInterface21->addChild(*Sofield601);

Sofield* Sofield602 = new Sofield();
Sofield602->setName(QString("vt9_changed"));
Sofield602->setAccessType(QString("outputOnly"));
Sofield602->setType(QString("SFRotation"));
SoProtoInterface21->addChild(*Sofield602);

SoProtoDeclare20->addChild(*SoProtoInterface21);

SoProtoBody* SoProtoBody603 = new SoProtoBody();
//design alternative: move TimeSensor out of the prototype, instead expose set_fraction globally to all interpolators
SoTimeSensor* SoTimeSensor604 = new SoTimeSensor();
SoTimeSensor604->setDEF(QString("BehaviorClock"));
SoIS* SoIS605 = new SoIS();
Soconnect* Soconnect606 = new Soconnect();
Soconnect606->setNodeField(QString("enabled"));
Soconnect606->setProtoField(QString("enabled"));
SoIS605->addChild(*Soconnect606);

Soconnect* Soconnect607 = new Soconnect();
Soconnect607->setNodeField(QString("cycleInterval"));
Soconnect607->setProtoField(QString("cycleInterval"));
SoIS605->addChild(*Soconnect607);

Soconnect* Soconnect608 = new Soconnect();
Soconnect608->setNodeField(QString("loop"));
Soconnect608->setProtoField(QString("loop"));
SoIS605->addChild(*Soconnect608);

Soconnect* Soconnect609 = new Soconnect();
Soconnect609->setNodeField(QString("startTime"));
Soconnect609->setProtoField(QString("startTime"));
SoIS605->addChild(*Soconnect609);

Soconnect* Soconnect610 = new Soconnect();
Soconnect610->setNodeField(QString("stopTime"));
Soconnect610->setProtoField(QString("stopTime"));
SoIS605->addChild(*Soconnect610);

Soconnect* Soconnect611 = new Soconnect();
Soconnect611->setNodeField(QString("pauseTime"));
Soconnect611->setProtoField(QString("pauseTime"));
SoIS605->addChild(*Soconnect611);

Soconnect* Soconnect612 = new Soconnect();
Soconnect612->setNodeField(QString("resumeTime"));
Soconnect612->setProtoField(QString("resumeTime"));
SoIS605->addChild(*Soconnect612);

Soconnect* Soconnect613 = new Soconnect();
Soconnect613->setNodeField(QString("cycleTime"));
Soconnect613->setProtoField(QString("cycleTime"));
SoIS605->addChild(*Soconnect613);

Soconnect* Soconnect614 = new Soconnect();
Soconnect614->setNodeField(QString("isActive"));
Soconnect614->setProtoField(QString("isActive"));
SoIS605->addChild(*Soconnect614);

Soconnect* Soconnect615 = new Soconnect();
Soconnect615->setNodeField(QString("isPaused"));
Soconnect615->setProtoField(QString("isPaused"));
SoIS605->addChild(*Soconnect615);

Soconnect* Soconnect616 = new Soconnect();
Soconnect616->setNodeField(QString("elapsedTime"));
Soconnect616->setProtoField(QString("elapsedTime"));
SoIS605->addChild(*Soconnect616);

Soconnect* Soconnect617 = new Soconnect();
Soconnect617->setNodeField(QString("time"));
Soconnect617->setProtoField(QString("time"));
SoIS605->addChild(*Soconnect617);

Soconnect* Soconnect618 = new Soconnect();
Soconnect618->setNodeField(QString("fraction_changed"));
Soconnect618->setProtoField(QString("fraction_changed"));
SoIS605->addChild(*Soconnect618);

SoTimeSensor604->addChild(*SoIS605);

SoProtoBody603->addChild(*SoTimeSensor604);

//note that other nodes following the first node in the ProtoBody are not rendered but remain active nevertheless
SoSwitch* SoSwitch619 = new SoSwitch();
SoSwitch619->setDEF(QString("SupportedLoaHolder1"));
SoSwitch619->setWhichChoice(-1);
SoIS* SoIS620 = new SoIS();
Soconnect* Soconnect621 = new Soconnect();
Soconnect621->setNodeField(QString("whichChoice"));
Soconnect621->setProtoField(QString("supportedLOA"));
SoIS620->addChild(*Soconnect621);

SoSwitch619->addChild(*SoIS620);

SoProtoBody603->addChild(*SoSwitch619);

SoPositionInterpolator* SoPositionInterpolator622 = new SoPositionInterpolator();
SoPositionInterpolator622->setDEF(QString("HumanoidRootPI"));
SoIS* SoIS623 = new SoIS();
Soconnect* Soconnect624 = new Soconnect();
Soconnect624->setNodeField(QString("key"));
Soconnect624->setProtoField(QString("HumanoidRoot_translation_key"));
SoIS623->addChild(*Soconnect624);

Soconnect* Soconnect625 = new Soconnect();
Soconnect625->setNodeField(QString("keyValue"));
Soconnect625->setProtoField(QString("HumanoidRoot_translation_keyValue"));
SoIS623->addChild(*Soconnect625);

Soconnect* Soconnect626 = new Soconnect();
Soconnect626->setNodeField(QString("value_changed"));
Soconnect626->setProtoField(QString("HumanoidRoot_translation_changed"));
SoIS623->addChild(*Soconnect626);

SoPositionInterpolator622->addChild(*SoIS623);

SoProtoBody603->addChild(*SoPositionInterpolator622);

SoROUTE* SoROUTE627 = new SoROUTE();
SoROUTE627->setFromField(QString("fraction_changed"));
SoROUTE627->setFromNode(QString("BehaviorClock"));
SoROUTE627->setToField(QString("set_fraction"));
SoROUTE627->setToNode(QString("HumanoidRootPI"));
SoProtoBody603->addChild(*SoROUTE627);

SoOrientationInterpolator* SoOrientationInterpolator628 = new SoOrientationInterpolator();
SoOrientationInterpolator628->setDEF(QString("HumanoidRootOI"));
SoIS* SoIS629 = new SoIS();
Soconnect* Soconnect630 = new Soconnect();
Soconnect630->setNodeField(QString("key"));
Soconnect630->setProtoField(QString("HumanoidRoot_rotation_key"));
SoIS629->addChild(*Soconnect630);

Soconnect* Soconnect631 = new Soconnect();
Soconnect631->setNodeField(QString("keyValue"));
Soconnect631->setProtoField(QString("HumanoidRoot_rotation_keyValue"));
SoIS629->addChild(*Soconnect631);

Soconnect* Soconnect632 = new Soconnect();
Soconnect632->setNodeField(QString("value_changed"));
Soconnect632->setProtoField(QString("HumanoidRoot_rotation_changed"));
SoIS629->addChild(*Soconnect632);

SoOrientationInterpolator628->addChild(*SoIS629);

SoProtoBody603->addChild(*SoOrientationInterpolator628);

SoROUTE* SoROUTE633 = new SoROUTE();
SoROUTE633->setFromField(QString("fraction_changed"));
SoROUTE633->setFromNode(QString("BehaviorClock"));
SoROUTE633->setToField(QString("set_fraction"));
SoROUTE633->setToNode(QString("HumanoidRootOI"));
SoProtoBody603->addChild(*SoROUTE633);

SoOrientationInterpolator* SoOrientationInterpolator634 = new SoOrientationInterpolator();
SoOrientationInterpolator634->setDEF(QString("c1_OI"));
SoIS* SoIS635 = new SoIS();
Soconnect* Soconnect636 = new Soconnect();
Soconnect636->setNodeField(QString("key"));
Soconnect636->setProtoField(QString("c1_key"));
SoIS635->addChild(*Soconnect636);

Soconnect* Soconnect637 = new Soconnect();
Soconnect637->setNodeField(QString("keyValue"));
Soconnect637->setProtoField(QString("c1_keyValue"));
SoIS635->addChild(*Soconnect637);

Soconnect* Soconnect638 = new Soconnect();
Soconnect638->setNodeField(QString("value_changed"));
Soconnect638->setProtoField(QString("c1_changed"));
SoIS635->addChild(*Soconnect638);

SoOrientationInterpolator634->addChild(*SoIS635);

SoProtoBody603->addChild(*SoOrientationInterpolator634);

SoROUTE* SoROUTE639 = new SoROUTE();
SoROUTE639->setFromField(QString("fraction_changed"));
SoROUTE639->setFromNode(QString("BehaviorClock"));
SoROUTE639->setToField(QString("set_fraction"));
SoROUTE639->setToNode(QString("c1_OI"));
SoProtoBody603->addChild(*SoROUTE639);

SoOrientationInterpolator* SoOrientationInterpolator640 = new SoOrientationInterpolator();
SoOrientationInterpolator640->setDEF(QString("c2_OI"));
SoIS* SoIS641 = new SoIS();
Soconnect* Soconnect642 = new Soconnect();
Soconnect642->setNodeField(QString("key"));
Soconnect642->setProtoField(QString("c2_key"));
SoIS641->addChild(*Soconnect642);

Soconnect* Soconnect643 = new Soconnect();
Soconnect643->setNodeField(QString("keyValue"));
Soconnect643->setProtoField(QString("c2_keyValue"));
SoIS641->addChild(*Soconnect643);

Soconnect* Soconnect644 = new Soconnect();
Soconnect644->setNodeField(QString("value_changed"));
Soconnect644->setProtoField(QString("c2_changed"));
SoIS641->addChild(*Soconnect644);

SoOrientationInterpolator640->addChild(*SoIS641);

SoProtoBody603->addChild(*SoOrientationInterpolator640);

SoROUTE* SoROUTE645 = new SoROUTE();
SoROUTE645->setFromField(QString("fraction_changed"));
SoROUTE645->setFromNode(QString("BehaviorClock"));
SoROUTE645->setToField(QString("set_fraction"));
SoROUTE645->setToNode(QString("c2_OI"));
SoProtoBody603->addChild(*SoROUTE645);

SoOrientationInterpolator* SoOrientationInterpolator646 = new SoOrientationInterpolator();
SoOrientationInterpolator646->setDEF(QString("c3_OI"));
SoIS* SoIS647 = new SoIS();
Soconnect* Soconnect648 = new Soconnect();
Soconnect648->setNodeField(QString("key"));
Soconnect648->setProtoField(QString("c3_key"));
SoIS647->addChild(*Soconnect648);

Soconnect* Soconnect649 = new Soconnect();
Soconnect649->setNodeField(QString("keyValue"));
Soconnect649->setProtoField(QString("c3_keyValue"));
SoIS647->addChild(*Soconnect649);

Soconnect* Soconnect650 = new Soconnect();
Soconnect650->setNodeField(QString("value_changed"));
Soconnect650->setProtoField(QString("c3_changed"));
SoIS647->addChild(*Soconnect650);

SoOrientationInterpolator646->addChild(*SoIS647);

SoProtoBody603->addChild(*SoOrientationInterpolator646);

SoROUTE* SoROUTE651 = new SoROUTE();
SoROUTE651->setFromField(QString("fraction_changed"));
SoROUTE651->setFromNode(QString("BehaviorClock"));
SoROUTE651->setToField(QString("set_fraction"));
SoROUTE651->setToNode(QString("c3_OI"));
SoProtoBody603->addChild(*SoROUTE651);

SoOrientationInterpolator* SoOrientationInterpolator652 = new SoOrientationInterpolator();
SoOrientationInterpolator652->setDEF(QString("c4_OI"));
SoIS* SoIS653 = new SoIS();
Soconnect* Soconnect654 = new Soconnect();
Soconnect654->setNodeField(QString("key"));
Soconnect654->setProtoField(QString("c4_key"));
SoIS653->addChild(*Soconnect654);

Soconnect* Soconnect655 = new Soconnect();
Soconnect655->setNodeField(QString("keyValue"));
Soconnect655->setProtoField(QString("c4_keyValue"));
SoIS653->addChild(*Soconnect655);

Soconnect* Soconnect656 = new Soconnect();
Soconnect656->setNodeField(QString("value_changed"));
Soconnect656->setProtoField(QString("c4_changed"));
SoIS653->addChild(*Soconnect656);

SoOrientationInterpolator652->addChild(*SoIS653);

SoProtoBody603->addChild(*SoOrientationInterpolator652);

SoROUTE* SoROUTE657 = new SoROUTE();
SoROUTE657->setFromField(QString("fraction_changed"));
SoROUTE657->setFromNode(QString("BehaviorClock"));
SoROUTE657->setToField(QString("set_fraction"));
SoROUTE657->setToNode(QString("c4_OI"));
SoProtoBody603->addChild(*SoROUTE657);

SoOrientationInterpolator* SoOrientationInterpolator658 = new SoOrientationInterpolator();
SoOrientationInterpolator658->setDEF(QString("c5_OI"));
SoIS* SoIS659 = new SoIS();
Soconnect* Soconnect660 = new Soconnect();
Soconnect660->setNodeField(QString("key"));
Soconnect660->setProtoField(QString("c5_key"));
SoIS659->addChild(*Soconnect660);

Soconnect* Soconnect661 = new Soconnect();
Soconnect661->setNodeField(QString("keyValue"));
Soconnect661->setProtoField(QString("c5_keyValue"));
SoIS659->addChild(*Soconnect661);

Soconnect* Soconnect662 = new Soconnect();
Soconnect662->setNodeField(QString("value_changed"));
Soconnect662->setProtoField(QString("c5_changed"));
SoIS659->addChild(*Soconnect662);

SoOrientationInterpolator658->addChild(*SoIS659);

SoProtoBody603->addChild(*SoOrientationInterpolator658);

SoROUTE* SoROUTE663 = new SoROUTE();
SoROUTE663->setFromField(QString("fraction_changed"));
SoROUTE663->setFromNode(QString("BehaviorClock"));
SoROUTE663->setToField(QString("set_fraction"));
SoROUTE663->setToNode(QString("c5_OI"));
SoProtoBody603->addChild(*SoROUTE663);

SoOrientationInterpolator* SoOrientationInterpolator664 = new SoOrientationInterpolator();
SoOrientationInterpolator664->setDEF(QString("c6_OI"));
SoIS* SoIS665 = new SoIS();
Soconnect* Soconnect666 = new Soconnect();
Soconnect666->setNodeField(QString("key"));
Soconnect666->setProtoField(QString("c6_key"));
SoIS665->addChild(*Soconnect666);

Soconnect* Soconnect667 = new Soconnect();
Soconnect667->setNodeField(QString("keyValue"));
Soconnect667->setProtoField(QString("c6_keyValue"));
SoIS665->addChild(*Soconnect667);

Soconnect* Soconnect668 = new Soconnect();
Soconnect668->setNodeField(QString("value_changed"));
Soconnect668->setProtoField(QString("c6_changed"));
SoIS665->addChild(*Soconnect668);

SoOrientationInterpolator664->addChild(*SoIS665);

SoProtoBody603->addChild(*SoOrientationInterpolator664);

SoROUTE* SoROUTE669 = new SoROUTE();
SoROUTE669->setFromField(QString("fraction_changed"));
SoROUTE669->setFromNode(QString("BehaviorClock"));
SoROUTE669->setToField(QString("set_fraction"));
SoROUTE669->setToNode(QString("c6_OI"));
SoProtoBody603->addChild(*SoROUTE669);

SoOrientationInterpolator* SoOrientationInterpolator670 = new SoOrientationInterpolator();
SoOrientationInterpolator670->setDEF(QString("c7_OI"));
SoIS* SoIS671 = new SoIS();
Soconnect* Soconnect672 = new Soconnect();
Soconnect672->setNodeField(QString("key"));
Soconnect672->setProtoField(QString("c7_key"));
SoIS671->addChild(*Soconnect672);

Soconnect* Soconnect673 = new Soconnect();
Soconnect673->setNodeField(QString("keyValue"));
Soconnect673->setProtoField(QString("c7_keyValue"));
SoIS671->addChild(*Soconnect673);

Soconnect* Soconnect674 = new Soconnect();
Soconnect674->setNodeField(QString("value_changed"));
Soconnect674->setProtoField(QString("c7_changed"));
SoIS671->addChild(*Soconnect674);

SoOrientationInterpolator670->addChild(*SoIS671);

SoProtoBody603->addChild(*SoOrientationInterpolator670);

SoROUTE* SoROUTE675 = new SoROUTE();
SoROUTE675->setFromField(QString("fraction_changed"));
SoROUTE675->setFromNode(QString("BehaviorClock"));
SoROUTE675->setToField(QString("set_fraction"));
SoROUTE675->setToNode(QString("c7_OI"));
SoProtoBody603->addChild(*SoROUTE675);

SoOrientationInterpolator* SoOrientationInterpolator676 = new SoOrientationInterpolator();
SoOrientationInterpolator676->setDEF(QString("jaw_OI"));
SoIS* SoIS677 = new SoIS();
Soconnect* Soconnect678 = new Soconnect();
Soconnect678->setNodeField(QString("key"));
Soconnect678->setProtoField(QString("jaw_key"));
SoIS677->addChild(*Soconnect678);

Soconnect* Soconnect679 = new Soconnect();
Soconnect679->setNodeField(QString("keyValue"));
Soconnect679->setProtoField(QString("jaw_keyValue"));
SoIS677->addChild(*Soconnect679);

Soconnect* Soconnect680 = new Soconnect();
Soconnect680->setNodeField(QString("value_changed"));
Soconnect680->setProtoField(QString("jaw_changed"));
SoIS677->addChild(*Soconnect680);

SoOrientationInterpolator676->addChild(*SoIS677);

SoProtoBody603->addChild(*SoOrientationInterpolator676);

SoROUTE* SoROUTE681 = new SoROUTE();
SoROUTE681->setFromField(QString("fraction_changed"));
SoROUTE681->setFromNode(QString("BehaviorClock"));
SoROUTE681->setToField(QString("set_fraction"));
SoROUTE681->setToNode(QString("jaw_OI"));
SoProtoBody603->addChild(*SoROUTE681);

SoOrientationInterpolator* SoOrientationInterpolator682 = new SoOrientationInterpolator();
SoOrientationInterpolator682->setDEF(QString("l1_OI"));
SoIS* SoIS683 = new SoIS();
Soconnect* Soconnect684 = new Soconnect();
Soconnect684->setNodeField(QString("key"));
Soconnect684->setProtoField(QString("l1_key"));
SoIS683->addChild(*Soconnect684);

Soconnect* Soconnect685 = new Soconnect();
Soconnect685->setNodeField(QString("keyValue"));
Soconnect685->setProtoField(QString("l1_keyValue"));
SoIS683->addChild(*Soconnect685);

Soconnect* Soconnect686 = new Soconnect();
Soconnect686->setNodeField(QString("value_changed"));
Soconnect686->setProtoField(QString("l1_changed"));
SoIS683->addChild(*Soconnect686);

SoOrientationInterpolator682->addChild(*SoIS683);

SoProtoBody603->addChild(*SoOrientationInterpolator682);

SoROUTE* SoROUTE687 = new SoROUTE();
SoROUTE687->setFromField(QString("fraction_changed"));
SoROUTE687->setFromNode(QString("BehaviorClock"));
SoROUTE687->setToField(QString("set_fraction"));
SoROUTE687->setToNode(QString("l1_OI"));
SoProtoBody603->addChild(*SoROUTE687);

SoOrientationInterpolator* SoOrientationInterpolator688 = new SoOrientationInterpolator();
SoOrientationInterpolator688->setDEF(QString("l2_OI"));
SoIS* SoIS689 = new SoIS();
Soconnect* Soconnect690 = new Soconnect();
Soconnect690->setNodeField(QString("key"));
Soconnect690->setProtoField(QString("l2_key"));
SoIS689->addChild(*Soconnect690);

Soconnect* Soconnect691 = new Soconnect();
Soconnect691->setNodeField(QString("keyValue"));
Soconnect691->setProtoField(QString("l2_keyValue"));
SoIS689->addChild(*Soconnect691);

Soconnect* Soconnect692 = new Soconnect();
Soconnect692->setNodeField(QString("value_changed"));
Soconnect692->setProtoField(QString("l2_changed"));
SoIS689->addChild(*Soconnect692);

SoOrientationInterpolator688->addChild(*SoIS689);

SoProtoBody603->addChild(*SoOrientationInterpolator688);

SoROUTE* SoROUTE693 = new SoROUTE();
SoROUTE693->setFromField(QString("fraction_changed"));
SoROUTE693->setFromNode(QString("BehaviorClock"));
SoROUTE693->setToField(QString("set_fraction"));
SoROUTE693->setToNode(QString("l2_OI"));
SoProtoBody603->addChild(*SoROUTE693);

SoOrientationInterpolator* SoOrientationInterpolator694 = new SoOrientationInterpolator();
SoOrientationInterpolator694->setDEF(QString("l3_OI"));
SoIS* SoIS695 = new SoIS();
Soconnect* Soconnect696 = new Soconnect();
Soconnect696->setNodeField(QString("key"));
Soconnect696->setProtoField(QString("l3_key"));
SoIS695->addChild(*Soconnect696);

Soconnect* Soconnect697 = new Soconnect();
Soconnect697->setNodeField(QString("keyValue"));
Soconnect697->setProtoField(QString("l3_keyValue"));
SoIS695->addChild(*Soconnect697);

Soconnect* Soconnect698 = new Soconnect();
Soconnect698->setNodeField(QString("value_changed"));
Soconnect698->setProtoField(QString("l3_changed"));
SoIS695->addChild(*Soconnect698);

SoOrientationInterpolator694->addChild(*SoIS695);

SoProtoBody603->addChild(*SoOrientationInterpolator694);

SoROUTE* SoROUTE699 = new SoROUTE();
SoROUTE699->setFromField(QString("fraction_changed"));
SoROUTE699->setFromNode(QString("BehaviorClock"));
SoROUTE699->setToField(QString("set_fraction"));
SoROUTE699->setToNode(QString("l3_OI"));
SoProtoBody603->addChild(*SoROUTE699);

SoOrientationInterpolator* SoOrientationInterpolator700 = new SoOrientationInterpolator();
SoOrientationInterpolator700->setDEF(QString("l4_OI"));
SoIS* SoIS701 = new SoIS();
Soconnect* Soconnect702 = new Soconnect();
Soconnect702->setNodeField(QString("key"));
Soconnect702->setProtoField(QString("l4_key"));
SoIS701->addChild(*Soconnect702);

Soconnect* Soconnect703 = new Soconnect();
Soconnect703->setNodeField(QString("keyValue"));
Soconnect703->setProtoField(QString("l4_keyValue"));
SoIS701->addChild(*Soconnect703);

Soconnect* Soconnect704 = new Soconnect();
Soconnect704->setNodeField(QString("value_changed"));
Soconnect704->setProtoField(QString("l4_changed"));
SoIS701->addChild(*Soconnect704);

SoOrientationInterpolator700->addChild(*SoIS701);

SoProtoBody603->addChild(*SoOrientationInterpolator700);

SoROUTE* SoROUTE705 = new SoROUTE();
SoROUTE705->setFromField(QString("fraction_changed"));
SoROUTE705->setFromNode(QString("BehaviorClock"));
SoROUTE705->setToField(QString("set_fraction"));
SoROUTE705->setToNode(QString("l4_OI"));
SoProtoBody603->addChild(*SoROUTE705);

SoOrientationInterpolator* SoOrientationInterpolator706 = new SoOrientationInterpolator();
SoOrientationInterpolator706->setDEF(QString("l5_OI"));
SoIS* SoIS707 = new SoIS();
Soconnect* Soconnect708 = new Soconnect();
Soconnect708->setNodeField(QString("key"));
Soconnect708->setProtoField(QString("l5_key"));
SoIS707->addChild(*Soconnect708);

Soconnect* Soconnect709 = new Soconnect();
Soconnect709->setNodeField(QString("keyValue"));
Soconnect709->setProtoField(QString("l5_keyValue"));
SoIS707->addChild(*Soconnect709);

Soconnect* Soconnect710 = new Soconnect();
Soconnect710->setNodeField(QString("value_changed"));
Soconnect710->setProtoField(QString("l5_changed"));
SoIS707->addChild(*Soconnect710);

SoOrientationInterpolator706->addChild(*SoIS707);

SoProtoBody603->addChild(*SoOrientationInterpolator706);

SoROUTE* SoROUTE711 = new SoROUTE();
SoROUTE711->setFromField(QString("fraction_changed"));
SoROUTE711->setFromNode(QString("BehaviorClock"));
SoROUTE711->setToField(QString("set_fraction"));
SoROUTE711->setToNode(QString("l5_OI"));
SoProtoBody603->addChild(*SoROUTE711);

SoOrientationInterpolator* SoOrientationInterpolator712 = new SoOrientationInterpolator();
SoOrientationInterpolator712->setDEF(QString("l_acromioclavicular_OI"));
SoIS* SoIS713 = new SoIS();
Soconnect* Soconnect714 = new Soconnect();
Soconnect714->setNodeField(QString("key"));
Soconnect714->setProtoField(QString("l_acromioclavicular_key"));
SoIS713->addChild(*Soconnect714);

Soconnect* Soconnect715 = new Soconnect();
Soconnect715->setNodeField(QString("keyValue"));
Soconnect715->setProtoField(QString("l_acromioclavicular_keyValue"));
SoIS713->addChild(*Soconnect715);

Soconnect* Soconnect716 = new Soconnect();
Soconnect716->setNodeField(QString("value_changed"));
Soconnect716->setProtoField(QString("l_acromioclavicular_changed"));
SoIS713->addChild(*Soconnect716);

SoOrientationInterpolator712->addChild(*SoIS713);

SoProtoBody603->addChild(*SoOrientationInterpolator712);

SoROUTE* SoROUTE717 = new SoROUTE();
SoROUTE717->setFromField(QString("fraction_changed"));
SoROUTE717->setFromNode(QString("BehaviorClock"));
SoROUTE717->setToField(QString("set_fraction"));
SoROUTE717->setToNode(QString("l_acromioclavicular_OI"));
SoProtoBody603->addChild(*SoROUTE717);

SoOrientationInterpolator* SoOrientationInterpolator718 = new SoOrientationInterpolator();
SoOrientationInterpolator718->setDEF(QString("l_ankle_OI"));
SoIS* SoIS719 = new SoIS();
Soconnect* Soconnect720 = new Soconnect();
Soconnect720->setNodeField(QString("key"));
Soconnect720->setProtoField(QString("l_ankle_key"));
SoIS719->addChild(*Soconnect720);

Soconnect* Soconnect721 = new Soconnect();
Soconnect721->setNodeField(QString("keyValue"));
Soconnect721->setProtoField(QString("l_ankle_keyValue"));
SoIS719->addChild(*Soconnect721);

Soconnect* Soconnect722 = new Soconnect();
Soconnect722->setNodeField(QString("value_changed"));
Soconnect722->setProtoField(QString("l_ankle_changed"));
SoIS719->addChild(*Soconnect722);

SoOrientationInterpolator718->addChild(*SoIS719);

SoProtoBody603->addChild(*SoOrientationInterpolator718);

SoROUTE* SoROUTE723 = new SoROUTE();
SoROUTE723->setFromField(QString("fraction_changed"));
SoROUTE723->setFromNode(QString("BehaviorClock"));
SoROUTE723->setToField(QString("set_fraction"));
SoROUTE723->setToNode(QString("l_ankle_OI"));
SoProtoBody603->addChild(*SoROUTE723);

SoOrientationInterpolator* SoOrientationInterpolator724 = new SoOrientationInterpolator();
SoOrientationInterpolator724->setDEF(QString("l_calf_OI"));
SoIS* SoIS725 = new SoIS();
Soconnect* Soconnect726 = new Soconnect();
Soconnect726->setNodeField(QString("key"));
Soconnect726->setProtoField(QString("l_calf_key"));
SoIS725->addChild(*Soconnect726);

Soconnect* Soconnect727 = new Soconnect();
Soconnect727->setNodeField(QString("keyValue"));
Soconnect727->setProtoField(QString("l_calf_keyValue"));
SoIS725->addChild(*Soconnect727);

Soconnect* Soconnect728 = new Soconnect();
Soconnect728->setNodeField(QString("value_changed"));
Soconnect728->setProtoField(QString("l_calf_changed"));
SoIS725->addChild(*Soconnect728);

SoOrientationInterpolator724->addChild(*SoIS725);

SoProtoBody603->addChild(*SoOrientationInterpolator724);

SoROUTE* SoROUTE729 = new SoROUTE();
SoROUTE729->setFromField(QString("fraction_changed"));
SoROUTE729->setFromNode(QString("BehaviorClock"));
SoROUTE729->setToField(QString("set_fraction"));
SoROUTE729->setToNode(QString("l_calf_OI"));
SoProtoBody603->addChild(*SoROUTE729);

SoOrientationInterpolator* SoOrientationInterpolator730 = new SoOrientationInterpolator();
SoOrientationInterpolator730->setDEF(QString("l_clavicle_OI"));
SoIS* SoIS731 = new SoIS();
Soconnect* Soconnect732 = new Soconnect();
Soconnect732->setNodeField(QString("key"));
Soconnect732->setProtoField(QString("l_clavicle_key"));
SoIS731->addChild(*Soconnect732);

Soconnect* Soconnect733 = new Soconnect();
Soconnect733->setNodeField(QString("keyValue"));
Soconnect733->setProtoField(QString("l_clavicle_keyValue"));
SoIS731->addChild(*Soconnect733);

Soconnect* Soconnect734 = new Soconnect();
Soconnect734->setNodeField(QString("value_changed"));
Soconnect734->setProtoField(QString("l_clavicle_changed"));
SoIS731->addChild(*Soconnect734);

SoOrientationInterpolator730->addChild(*SoIS731);

SoProtoBody603->addChild(*SoOrientationInterpolator730);

SoROUTE* SoROUTE735 = new SoROUTE();
SoROUTE735->setFromField(QString("fraction_changed"));
SoROUTE735->setFromNode(QString("BehaviorClock"));
SoROUTE735->setToField(QString("set_fraction"));
SoROUTE735->setToNode(QString("l_clavicle_OI"));
SoProtoBody603->addChild(*SoROUTE735);

SoOrientationInterpolator* SoOrientationInterpolator736 = new SoOrientationInterpolator();
SoOrientationInterpolator736->setDEF(QString("l_elbow_OI"));
SoIS* SoIS737 = new SoIS();
Soconnect* Soconnect738 = new Soconnect();
Soconnect738->setNodeField(QString("key"));
Soconnect738->setProtoField(QString("l_elbow_key"));
SoIS737->addChild(*Soconnect738);

Soconnect* Soconnect739 = new Soconnect();
Soconnect739->setNodeField(QString("keyValue"));
Soconnect739->setProtoField(QString("l_elbow_keyValue"));
SoIS737->addChild(*Soconnect739);

Soconnect* Soconnect740 = new Soconnect();
Soconnect740->setNodeField(QString("value_changed"));
Soconnect740->setProtoField(QString("l_elbow_changed"));
SoIS737->addChild(*Soconnect740);

SoOrientationInterpolator736->addChild(*SoIS737);

SoProtoBody603->addChild(*SoOrientationInterpolator736);

SoROUTE* SoROUTE741 = new SoROUTE();
SoROUTE741->setFromField(QString("fraction_changed"));
SoROUTE741->setFromNode(QString("BehaviorClock"));
SoROUTE741->setToField(QString("set_fraction"));
SoROUTE741->setToNode(QString("l_elbow_OI"));
SoProtoBody603->addChild(*SoROUTE741);

SoOrientationInterpolator* SoOrientationInterpolator742 = new SoOrientationInterpolator();
SoOrientationInterpolator742->setDEF(QString("l_eyeball_OI"));
SoIS* SoIS743 = new SoIS();
Soconnect* Soconnect744 = new Soconnect();
Soconnect744->setNodeField(QString("key"));
Soconnect744->setProtoField(QString("l_eyeball_key"));
SoIS743->addChild(*Soconnect744);

Soconnect* Soconnect745 = new Soconnect();
Soconnect745->setNodeField(QString("keyValue"));
Soconnect745->setProtoField(QString("l_eyeball_keyValue"));
SoIS743->addChild(*Soconnect745);

Soconnect* Soconnect746 = new Soconnect();
Soconnect746->setNodeField(QString("value_changed"));
Soconnect746->setProtoField(QString("l_eyeball_changed"));
SoIS743->addChild(*Soconnect746);

SoOrientationInterpolator742->addChild(*SoIS743);

SoProtoBody603->addChild(*SoOrientationInterpolator742);

SoROUTE* SoROUTE747 = new SoROUTE();
SoROUTE747->setFromField(QString("fraction_changed"));
SoROUTE747->setFromNode(QString("BehaviorClock"));
SoROUTE747->setToField(QString("set_fraction"));
SoROUTE747->setToNode(QString("l_eyeball_OI"));
SoProtoBody603->addChild(*SoROUTE747);

SoOrientationInterpolator* SoOrientationInterpolator748 = new SoOrientationInterpolator();
SoOrientationInterpolator748->setDEF(QString("l_eyeball_joint_OI"));
SoIS* SoIS749 = new SoIS();
Soconnect* Soconnect750 = new Soconnect();
Soconnect750->setNodeField(QString("key"));
Soconnect750->setProtoField(QString("l_eyeball_joint_key"));
SoIS749->addChild(*Soconnect750);

Soconnect* Soconnect751 = new Soconnect();
Soconnect751->setNodeField(QString("keyValue"));
Soconnect751->setProtoField(QString("l_eyeball_joint_keyValue"));
SoIS749->addChild(*Soconnect751);

Soconnect* Soconnect752 = new Soconnect();
Soconnect752->setNodeField(QString("value_changed"));
Soconnect752->setProtoField(QString("l_eyeball_joint_changed"));
SoIS749->addChild(*Soconnect752);

SoOrientationInterpolator748->addChild(*SoIS749);

SoProtoBody603->addChild(*SoOrientationInterpolator748);

SoROUTE* SoROUTE753 = new SoROUTE();
SoROUTE753->setFromField(QString("fraction_changed"));
SoROUTE753->setFromNode(QString("BehaviorClock"));
SoROUTE753->setToField(QString("set_fraction"));
SoROUTE753->setToNode(QString("l_eyeball_joint_OI"));
SoProtoBody603->addChild(*SoROUTE753);

SoOrientationInterpolator* SoOrientationInterpolator754 = new SoOrientationInterpolator();
SoOrientationInterpolator754->setDEF(QString("l_eyebrow_OI"));
SoIS* SoIS755 = new SoIS();
Soconnect* Soconnect756 = new Soconnect();
Soconnect756->setNodeField(QString("key"));
Soconnect756->setProtoField(QString("l_eyebrow_key"));
SoIS755->addChild(*Soconnect756);

Soconnect* Soconnect757 = new Soconnect();
Soconnect757->setNodeField(QString("keyValue"));
Soconnect757->setProtoField(QString("l_eyebrow_keyValue"));
SoIS755->addChild(*Soconnect757);

Soconnect* Soconnect758 = new Soconnect();
Soconnect758->setNodeField(QString("value_changed"));
Soconnect758->setProtoField(QString("l_eyebrow_changed"));
SoIS755->addChild(*Soconnect758);

SoOrientationInterpolator754->addChild(*SoIS755);

SoProtoBody603->addChild(*SoOrientationInterpolator754);

SoROUTE* SoROUTE759 = new SoROUTE();
SoROUTE759->setFromField(QString("fraction_changed"));
SoROUTE759->setFromNode(QString("BehaviorClock"));
SoROUTE759->setToField(QString("set_fraction"));
SoROUTE759->setToNode(QString("l_eyebrow_OI"));
SoProtoBody603->addChild(*SoROUTE759);

SoOrientationInterpolator* SoOrientationInterpolator760 = new SoOrientationInterpolator();
SoOrientationInterpolator760->setDEF(QString("l_eyebrow_joint_OI"));
SoIS* SoIS761 = new SoIS();
Soconnect* Soconnect762 = new Soconnect();
Soconnect762->setNodeField(QString("key"));
Soconnect762->setProtoField(QString("l_eyebrow_joint_key"));
SoIS761->addChild(*Soconnect762);

Soconnect* Soconnect763 = new Soconnect();
Soconnect763->setNodeField(QString("keyValue"));
Soconnect763->setProtoField(QString("l_eyebrow_joint_keyValue"));
SoIS761->addChild(*Soconnect763);

Soconnect* Soconnect764 = new Soconnect();
Soconnect764->setNodeField(QString("value_changed"));
Soconnect764->setProtoField(QString("l_eyebrow_joint_changed"));
SoIS761->addChild(*Soconnect764);

SoOrientationInterpolator760->addChild(*SoIS761);

SoProtoBody603->addChild(*SoOrientationInterpolator760);

SoROUTE* SoROUTE765 = new SoROUTE();
SoROUTE765->setFromField(QString("fraction_changed"));
SoROUTE765->setFromNode(QString("BehaviorClock"));
SoROUTE765->setToField(QString("set_fraction"));
SoROUTE765->setToNode(QString("l_eyebrow_joint_OI"));
SoProtoBody603->addChild(*SoROUTE765);

SoOrientationInterpolator* SoOrientationInterpolator766 = new SoOrientationInterpolator();
SoOrientationInterpolator766->setDEF(QString("l_eyelid_OI"));
SoIS* SoIS767 = new SoIS();
Soconnect* Soconnect768 = new Soconnect();
Soconnect768->setNodeField(QString("key"));
Soconnect768->setProtoField(QString("l_eyelid_key"));
SoIS767->addChild(*Soconnect768);

Soconnect* Soconnect769 = new Soconnect();
Soconnect769->setNodeField(QString("keyValue"));
Soconnect769->setProtoField(QString("l_eyelid_keyValue"));
SoIS767->addChild(*Soconnect769);

Soconnect* Soconnect770 = new Soconnect();
Soconnect770->setNodeField(QString("value_changed"));
Soconnect770->setProtoField(QString("l_eyelid_changed"));
SoIS767->addChild(*Soconnect770);

SoOrientationInterpolator766->addChild(*SoIS767);

SoProtoBody603->addChild(*SoOrientationInterpolator766);

SoROUTE* SoROUTE771 = new SoROUTE();
SoROUTE771->setFromField(QString("fraction_changed"));
SoROUTE771->setFromNode(QString("BehaviorClock"));
SoROUTE771->setToField(QString("set_fraction"));
SoROUTE771->setToNode(QString("l_eyelid_OI"));
SoProtoBody603->addChild(*SoROUTE771);

SoOrientationInterpolator* SoOrientationInterpolator772 = new SoOrientationInterpolator();
SoOrientationInterpolator772->setDEF(QString("l_eyelid_joint_OI"));
SoIS* SoIS773 = new SoIS();
Soconnect* Soconnect774 = new Soconnect();
Soconnect774->setNodeField(QString("key"));
Soconnect774->setProtoField(QString("l_eyelid_joint_key"));
SoIS773->addChild(*Soconnect774);

Soconnect* Soconnect775 = new Soconnect();
Soconnect775->setNodeField(QString("keyValue"));
Soconnect775->setProtoField(QString("l_eyelid_joint_keyValue"));
SoIS773->addChild(*Soconnect775);

Soconnect* Soconnect776 = new Soconnect();
Soconnect776->setNodeField(QString("value_changed"));
Soconnect776->setProtoField(QString("l_eyelid_joint_changed"));
SoIS773->addChild(*Soconnect776);

SoOrientationInterpolator772->addChild(*SoIS773);

SoProtoBody603->addChild(*SoOrientationInterpolator772);

SoROUTE* SoROUTE777 = new SoROUTE();
SoROUTE777->setFromField(QString("fraction_changed"));
SoROUTE777->setFromNode(QString("BehaviorClock"));
SoROUTE777->setToField(QString("set_fraction"));
SoROUTE777->setToNode(QString("l_eyelid_joint_OI"));
SoProtoBody603->addChild(*SoROUTE777);

SoOrientationInterpolator* SoOrientationInterpolator778 = new SoOrientationInterpolator();
SoOrientationInterpolator778->setDEF(QString("l_forearm_OI"));
SoIS* SoIS779 = new SoIS();
Soconnect* Soconnect780 = new Soconnect();
Soconnect780->setNodeField(QString("key"));
Soconnect780->setProtoField(QString("l_forearm_key"));
SoIS779->addChild(*Soconnect780);

Soconnect* Soconnect781 = new Soconnect();
Soconnect781->setNodeField(QString("keyValue"));
Soconnect781->setProtoField(QString("l_forearm_keyValue"));
SoIS779->addChild(*Soconnect781);

Soconnect* Soconnect782 = new Soconnect();
Soconnect782->setNodeField(QString("value_changed"));
Soconnect782->setProtoField(QString("l_forearm_changed"));
SoIS779->addChild(*Soconnect782);

SoOrientationInterpolator778->addChild(*SoIS779);

SoProtoBody603->addChild(*SoOrientationInterpolator778);

SoROUTE* SoROUTE783 = new SoROUTE();
SoROUTE783->setFromField(QString("fraction_changed"));
SoROUTE783->setFromNode(QString("BehaviorClock"));
SoROUTE783->setToField(QString("set_fraction"));
SoROUTE783->setToNode(QString("l_forearm_OI"));
SoProtoBody603->addChild(*SoROUTE783);

SoOrientationInterpolator* SoOrientationInterpolator784 = new SoOrientationInterpolator();
SoOrientationInterpolator784->setDEF(QString("l_forefoot_OI"));
SoIS* SoIS785 = new SoIS();
Soconnect* Soconnect786 = new Soconnect();
Soconnect786->setNodeField(QString("key"));
Soconnect786->setProtoField(QString("l_forefoot_key"));
SoIS785->addChild(*Soconnect786);

Soconnect* Soconnect787 = new Soconnect();
Soconnect787->setNodeField(QString("keyValue"));
Soconnect787->setProtoField(QString("l_forefoot_keyValue"));
SoIS785->addChild(*Soconnect787);

Soconnect* Soconnect788 = new Soconnect();
Soconnect788->setNodeField(QString("value_changed"));
Soconnect788->setProtoField(QString("l_forefoot_changed"));
SoIS785->addChild(*Soconnect788);

SoOrientationInterpolator784->addChild(*SoIS785);

SoProtoBody603->addChild(*SoOrientationInterpolator784);

SoROUTE* SoROUTE789 = new SoROUTE();
SoROUTE789->setFromField(QString("fraction_changed"));
SoROUTE789->setFromNode(QString("BehaviorClock"));
SoROUTE789->setToField(QString("set_fraction"));
SoROUTE789->setToNode(QString("l_forefoot_OI"));
SoProtoBody603->addChild(*SoROUTE789);

SoOrientationInterpolator* SoOrientationInterpolator790 = new SoOrientationInterpolator();
SoOrientationInterpolator790->setDEF(QString("l_hand_OI"));
SoIS* SoIS791 = new SoIS();
Soconnect* Soconnect792 = new Soconnect();
Soconnect792->setNodeField(QString("key"));
Soconnect792->setProtoField(QString("l_hand_key"));
SoIS791->addChild(*Soconnect792);

Soconnect* Soconnect793 = new Soconnect();
Soconnect793->setNodeField(QString("keyValue"));
Soconnect793->setProtoField(QString("l_hand_keyValue"));
SoIS791->addChild(*Soconnect793);

Soconnect* Soconnect794 = new Soconnect();
Soconnect794->setNodeField(QString("value_changed"));
Soconnect794->setProtoField(QString("l_hand_changed"));
SoIS791->addChild(*Soconnect794);

SoOrientationInterpolator790->addChild(*SoIS791);

SoProtoBody603->addChild(*SoOrientationInterpolator790);

SoROUTE* SoROUTE795 = new SoROUTE();
SoROUTE795->setFromField(QString("fraction_changed"));
SoROUTE795->setFromNode(QString("BehaviorClock"));
SoROUTE795->setToField(QString("set_fraction"));
SoROUTE795->setToNode(QString("l_hand_OI"));
SoProtoBody603->addChild(*SoROUTE795);

SoOrientationInterpolator* SoOrientationInterpolator796 = new SoOrientationInterpolator();
SoOrientationInterpolator796->setDEF(QString("l_hindfoot_OI"));
SoIS* SoIS797 = new SoIS();
Soconnect* Soconnect798 = new Soconnect();
Soconnect798->setNodeField(QString("key"));
Soconnect798->setProtoField(QString("l_hindfoot_key"));
SoIS797->addChild(*Soconnect798);

Soconnect* Soconnect799 = new Soconnect();
Soconnect799->setNodeField(QString("keyValue"));
Soconnect799->setProtoField(QString("l_hindfoot_keyValue"));
SoIS797->addChild(*Soconnect799);

Soconnect* Soconnect800 = new Soconnect();
Soconnect800->setNodeField(QString("value_changed"));
Soconnect800->setProtoField(QString("l_hindfoot_changed"));
SoIS797->addChild(*Soconnect800);

SoOrientationInterpolator796->addChild(*SoIS797);

SoProtoBody603->addChild(*SoOrientationInterpolator796);

SoROUTE* SoROUTE801 = new SoROUTE();
SoROUTE801->setFromField(QString("fraction_changed"));
SoROUTE801->setFromNode(QString("BehaviorClock"));
SoROUTE801->setToField(QString("set_fraction"));
SoROUTE801->setToNode(QString("l_hindfoot_OI"));
SoProtoBody603->addChild(*SoROUTE801);

SoOrientationInterpolator* SoOrientationInterpolator802 = new SoOrientationInterpolator();
SoOrientationInterpolator802->setDEF(QString("l_hip_OI"));
SoIS* SoIS803 = new SoIS();
Soconnect* Soconnect804 = new Soconnect();
Soconnect804->setNodeField(QString("key"));
Soconnect804->setProtoField(QString("l_hip_key"));
SoIS803->addChild(*Soconnect804);

Soconnect* Soconnect805 = new Soconnect();
Soconnect805->setNodeField(QString("keyValue"));
Soconnect805->setProtoField(QString("l_hip_keyValue"));
SoIS803->addChild(*Soconnect805);

Soconnect* Soconnect806 = new Soconnect();
Soconnect806->setNodeField(QString("value_changed"));
Soconnect806->setProtoField(QString("l_hip_changed"));
SoIS803->addChild(*Soconnect806);

SoOrientationInterpolator802->addChild(*SoIS803);

SoProtoBody603->addChild(*SoOrientationInterpolator802);

SoROUTE* SoROUTE807 = new SoROUTE();
SoROUTE807->setFromField(QString("fraction_changed"));
SoROUTE807->setFromNode(QString("BehaviorClock"));
SoROUTE807->setToField(QString("set_fraction"));
SoROUTE807->setToNode(QString("l_hip_OI"));
SoProtoBody603->addChild(*SoROUTE807);

SoOrientationInterpolator* SoOrientationInterpolator808 = new SoOrientationInterpolator();
SoOrientationInterpolator808->setDEF(QString("l_index0_OI"));
SoIS* SoIS809 = new SoIS();
Soconnect* Soconnect810 = new Soconnect();
Soconnect810->setNodeField(QString("key"));
Soconnect810->setProtoField(QString("l_index0_key"));
SoIS809->addChild(*Soconnect810);

Soconnect* Soconnect811 = new Soconnect();
Soconnect811->setNodeField(QString("keyValue"));
Soconnect811->setProtoField(QString("l_index0_keyValue"));
SoIS809->addChild(*Soconnect811);

Soconnect* Soconnect812 = new Soconnect();
Soconnect812->setNodeField(QString("value_changed"));
Soconnect812->setProtoField(QString("l_index0_changed"));
SoIS809->addChild(*Soconnect812);

SoOrientationInterpolator808->addChild(*SoIS809);

SoProtoBody603->addChild(*SoOrientationInterpolator808);

SoROUTE* SoROUTE813 = new SoROUTE();
SoROUTE813->setFromField(QString("fraction_changed"));
SoROUTE813->setFromNode(QString("BehaviorClock"));
SoROUTE813->setToField(QString("set_fraction"));
SoROUTE813->setToNode(QString("l_index0_OI"));
SoProtoBody603->addChild(*SoROUTE813);

SoOrientationInterpolator* SoOrientationInterpolator814 = new SoOrientationInterpolator();
SoOrientationInterpolator814->setDEF(QString("l_index1_OI"));
SoIS* SoIS815 = new SoIS();
Soconnect* Soconnect816 = new Soconnect();
Soconnect816->setNodeField(QString("key"));
Soconnect816->setProtoField(QString("l_index1_key"));
SoIS815->addChild(*Soconnect816);

Soconnect* Soconnect817 = new Soconnect();
Soconnect817->setNodeField(QString("keyValue"));
Soconnect817->setProtoField(QString("l_index1_keyValue"));
SoIS815->addChild(*Soconnect817);

Soconnect* Soconnect818 = new Soconnect();
Soconnect818->setNodeField(QString("value_changed"));
Soconnect818->setProtoField(QString("l_index1_changed"));
SoIS815->addChild(*Soconnect818);

SoOrientationInterpolator814->addChild(*SoIS815);

SoProtoBody603->addChild(*SoOrientationInterpolator814);

SoROUTE* SoROUTE819 = new SoROUTE();
SoROUTE819->setFromField(QString("fraction_changed"));
SoROUTE819->setFromNode(QString("BehaviorClock"));
SoROUTE819->setToField(QString("set_fraction"));
SoROUTE819->setToNode(QString("l_index1_OI"));
SoProtoBody603->addChild(*SoROUTE819);

SoOrientationInterpolator* SoOrientationInterpolator820 = new SoOrientationInterpolator();
SoOrientationInterpolator820->setDEF(QString("l_index2_OI"));
SoIS* SoIS821 = new SoIS();
Soconnect* Soconnect822 = new Soconnect();
Soconnect822->setNodeField(QString("key"));
Soconnect822->setProtoField(QString("l_index2_key"));
SoIS821->addChild(*Soconnect822);

Soconnect* Soconnect823 = new Soconnect();
Soconnect823->setNodeField(QString("keyValue"));
Soconnect823->setProtoField(QString("l_index2_keyValue"));
SoIS821->addChild(*Soconnect823);

Soconnect* Soconnect824 = new Soconnect();
Soconnect824->setNodeField(QString("value_changed"));
Soconnect824->setProtoField(QString("l_index2_changed"));
SoIS821->addChild(*Soconnect824);

SoOrientationInterpolator820->addChild(*SoIS821);

SoProtoBody603->addChild(*SoOrientationInterpolator820);

SoROUTE* SoROUTE825 = new SoROUTE();
SoROUTE825->setFromField(QString("fraction_changed"));
SoROUTE825->setFromNode(QString("BehaviorClock"));
SoROUTE825->setToField(QString("set_fraction"));
SoROUTE825->setToNode(QString("l_index2_OI"));
SoProtoBody603->addChild(*SoROUTE825);

SoOrientationInterpolator* SoOrientationInterpolator826 = new SoOrientationInterpolator();
SoOrientationInterpolator826->setDEF(QString("l_index3_OI"));
SoIS* SoIS827 = new SoIS();
Soconnect* Soconnect828 = new Soconnect();
Soconnect828->setNodeField(QString("key"));
Soconnect828->setProtoField(QString("l_index3_key"));
SoIS827->addChild(*Soconnect828);

Soconnect* Soconnect829 = new Soconnect();
Soconnect829->setNodeField(QString("keyValue"));
Soconnect829->setProtoField(QString("l_index3_keyValue"));
SoIS827->addChild(*Soconnect829);

Soconnect* Soconnect830 = new Soconnect();
Soconnect830->setNodeField(QString("value_changed"));
Soconnect830->setProtoField(QString("l_index3_changed"));
SoIS827->addChild(*Soconnect830);

SoOrientationInterpolator826->addChild(*SoIS827);

SoProtoBody603->addChild(*SoOrientationInterpolator826);

SoROUTE* SoROUTE831 = new SoROUTE();
SoROUTE831->setFromField(QString("fraction_changed"));
SoROUTE831->setFromNode(QString("BehaviorClock"));
SoROUTE831->setToField(QString("set_fraction"));
SoROUTE831->setToNode(QString("l_index3_OI"));
SoProtoBody603->addChild(*SoROUTE831);

SoOrientationInterpolator* SoOrientationInterpolator832 = new SoOrientationInterpolator();
SoOrientationInterpolator832->setDEF(QString("l_index_distal_OI"));
SoIS* SoIS833 = new SoIS();
Soconnect* Soconnect834 = new Soconnect();
Soconnect834->setNodeField(QString("key"));
Soconnect834->setProtoField(QString("l_index_distal_key"));
SoIS833->addChild(*Soconnect834);

Soconnect* Soconnect835 = new Soconnect();
Soconnect835->setNodeField(QString("keyValue"));
Soconnect835->setProtoField(QString("l_index_distal_keyValue"));
SoIS833->addChild(*Soconnect835);

Soconnect* Soconnect836 = new Soconnect();
Soconnect836->setNodeField(QString("value_changed"));
Soconnect836->setProtoField(QString("l_index_distal_changed"));
SoIS833->addChild(*Soconnect836);

SoOrientationInterpolator832->addChild(*SoIS833);

SoProtoBody603->addChild(*SoOrientationInterpolator832);

SoROUTE* SoROUTE837 = new SoROUTE();
SoROUTE837->setFromField(QString("fraction_changed"));
SoROUTE837->setFromNode(QString("BehaviorClock"));
SoROUTE837->setToField(QString("set_fraction"));
SoROUTE837->setToNode(QString("l_index_distal_OI"));
SoProtoBody603->addChild(*SoROUTE837);

SoOrientationInterpolator* SoOrientationInterpolator838 = new SoOrientationInterpolator();
SoOrientationInterpolator838->setDEF(QString("l_index_metacarpal_OI"));
SoIS* SoIS839 = new SoIS();
Soconnect* Soconnect840 = new Soconnect();
Soconnect840->setNodeField(QString("key"));
Soconnect840->setProtoField(QString("l_index_metacarpal_key"));
SoIS839->addChild(*Soconnect840);

Soconnect* Soconnect841 = new Soconnect();
Soconnect841->setNodeField(QString("keyValue"));
Soconnect841->setProtoField(QString("l_index_metacarpal_keyValue"));
SoIS839->addChild(*Soconnect841);

Soconnect* Soconnect842 = new Soconnect();
Soconnect842->setNodeField(QString("value_changed"));
Soconnect842->setProtoField(QString("l_index_metacarpal_changed"));
SoIS839->addChild(*Soconnect842);

SoOrientationInterpolator838->addChild(*SoIS839);

SoProtoBody603->addChild(*SoOrientationInterpolator838);

SoROUTE* SoROUTE843 = new SoROUTE();
SoROUTE843->setFromField(QString("fraction_changed"));
SoROUTE843->setFromNode(QString("BehaviorClock"));
SoROUTE843->setToField(QString("set_fraction"));
SoROUTE843->setToNode(QString("l_index_metacarpal_OI"));
SoProtoBody603->addChild(*SoROUTE843);

SoOrientationInterpolator* SoOrientationInterpolator844 = new SoOrientationInterpolator();
SoOrientationInterpolator844->setDEF(QString("l_index_middle_OI"));
SoIS* SoIS845 = new SoIS();
Soconnect* Soconnect846 = new Soconnect();
Soconnect846->setNodeField(QString("key"));
Soconnect846->setProtoField(QString("l_index_middle_key"));
SoIS845->addChild(*Soconnect846);

Soconnect* Soconnect847 = new Soconnect();
Soconnect847->setNodeField(QString("keyValue"));
Soconnect847->setProtoField(QString("l_index_middle_keyValue"));
SoIS845->addChild(*Soconnect847);

Soconnect* Soconnect848 = new Soconnect();
Soconnect848->setNodeField(QString("value_changed"));
Soconnect848->setProtoField(QString("l_index_middle_changed"));
SoIS845->addChild(*Soconnect848);

SoOrientationInterpolator844->addChild(*SoIS845);

SoProtoBody603->addChild(*SoOrientationInterpolator844);

SoROUTE* SoROUTE849 = new SoROUTE();
SoROUTE849->setFromField(QString("fraction_changed"));
SoROUTE849->setFromNode(QString("BehaviorClock"));
SoROUTE849->setToField(QString("set_fraction"));
SoROUTE849->setToNode(QString("l_index_middle_OI"));
SoProtoBody603->addChild(*SoROUTE849);

SoOrientationInterpolator* SoOrientationInterpolator850 = new SoOrientationInterpolator();
SoOrientationInterpolator850->setDEF(QString("l_index_proximal_OI"));
SoIS* SoIS851 = new SoIS();
Soconnect* Soconnect852 = new Soconnect();
Soconnect852->setNodeField(QString("key"));
Soconnect852->setProtoField(QString("l_index_proximal_key"));
SoIS851->addChild(*Soconnect852);

Soconnect* Soconnect853 = new Soconnect();
Soconnect853->setNodeField(QString("keyValue"));
Soconnect853->setProtoField(QString("l_index_proximal_keyValue"));
SoIS851->addChild(*Soconnect853);

Soconnect* Soconnect854 = new Soconnect();
Soconnect854->setNodeField(QString("value_changed"));
Soconnect854->setProtoField(QString("l_index_proximal_changed"));
SoIS851->addChild(*Soconnect854);

SoOrientationInterpolator850->addChild(*SoIS851);

SoProtoBody603->addChild(*SoOrientationInterpolator850);

SoROUTE* SoROUTE855 = new SoROUTE();
SoROUTE855->setFromField(QString("fraction_changed"));
SoROUTE855->setFromNode(QString("BehaviorClock"));
SoROUTE855->setToField(QString("set_fraction"));
SoROUTE855->setToNode(QString("l_index_proximal_OI"));
SoProtoBody603->addChild(*SoROUTE855);

SoOrientationInterpolator* SoOrientationInterpolator856 = new SoOrientationInterpolator();
SoOrientationInterpolator856->setDEF(QString("l_knee_OI"));
SoIS* SoIS857 = new SoIS();
Soconnect* Soconnect858 = new Soconnect();
Soconnect858->setNodeField(QString("key"));
Soconnect858->setProtoField(QString("l_knee_key"));
SoIS857->addChild(*Soconnect858);

Soconnect* Soconnect859 = new Soconnect();
Soconnect859->setNodeField(QString("keyValue"));
Soconnect859->setProtoField(QString("l_knee_keyValue"));
SoIS857->addChild(*Soconnect859);

Soconnect* Soconnect860 = new Soconnect();
Soconnect860->setNodeField(QString("value_changed"));
Soconnect860->setProtoField(QString("l_knee_changed"));
SoIS857->addChild(*Soconnect860);

SoOrientationInterpolator856->addChild(*SoIS857);

SoProtoBody603->addChild(*SoOrientationInterpolator856);

SoROUTE* SoROUTE861 = new SoROUTE();
SoROUTE861->setFromField(QString("fraction_changed"));
SoROUTE861->setFromNode(QString("BehaviorClock"));
SoROUTE861->setToField(QString("set_fraction"));
SoROUTE861->setToNode(QString("l_knee_OI"));
SoProtoBody603->addChild(*SoROUTE861);

SoOrientationInterpolator* SoOrientationInterpolator862 = new SoOrientationInterpolator();
SoOrientationInterpolator862->setDEF(QString("l_metatarsal_OI"));
SoIS* SoIS863 = new SoIS();
Soconnect* Soconnect864 = new Soconnect();
Soconnect864->setNodeField(QString("key"));
Soconnect864->setProtoField(QString("l_metatarsal_key"));
SoIS863->addChild(*Soconnect864);

Soconnect* Soconnect865 = new Soconnect();
Soconnect865->setNodeField(QString("keyValue"));
Soconnect865->setProtoField(QString("l_metatarsal_keyValue"));
SoIS863->addChild(*Soconnect865);

Soconnect* Soconnect866 = new Soconnect();
Soconnect866->setNodeField(QString("value_changed"));
Soconnect866->setProtoField(QString("l_metatarsal_changed"));
SoIS863->addChild(*Soconnect866);

SoOrientationInterpolator862->addChild(*SoIS863);

SoProtoBody603->addChild(*SoOrientationInterpolator862);

SoROUTE* SoROUTE867 = new SoROUTE();
SoROUTE867->setFromField(QString("fraction_changed"));
SoROUTE867->setFromNode(QString("BehaviorClock"));
SoROUTE867->setToField(QString("set_fraction"));
SoROUTE867->setToNode(QString("l_metatarsal_OI"));
SoProtoBody603->addChild(*SoROUTE867);

SoOrientationInterpolator* SoOrientationInterpolator868 = new SoOrientationInterpolator();
SoOrientationInterpolator868->setDEF(QString("l_middistal_OI"));
SoIS* SoIS869 = new SoIS();
Soconnect* Soconnect870 = new Soconnect();
Soconnect870->setNodeField(QString("key"));
Soconnect870->setProtoField(QString("l_middistal_key"));
SoIS869->addChild(*Soconnect870);

Soconnect* Soconnect871 = new Soconnect();
Soconnect871->setNodeField(QString("keyValue"));
Soconnect871->setProtoField(QString("l_middistal_keyValue"));
SoIS869->addChild(*Soconnect871);

Soconnect* Soconnect872 = new Soconnect();
Soconnect872->setNodeField(QString("value_changed"));
Soconnect872->setProtoField(QString("l_middistal_changed"));
SoIS869->addChild(*Soconnect872);

SoOrientationInterpolator868->addChild(*SoIS869);

SoProtoBody603->addChild(*SoOrientationInterpolator868);

SoROUTE* SoROUTE873 = new SoROUTE();
SoROUTE873->setFromField(QString("fraction_changed"));
SoROUTE873->setFromNode(QString("BehaviorClock"));
SoROUTE873->setToField(QString("set_fraction"));
SoROUTE873->setToNode(QString("l_middistal_OI"));
SoProtoBody603->addChild(*SoROUTE873);

SoOrientationInterpolator* SoOrientationInterpolator874 = new SoOrientationInterpolator();
SoOrientationInterpolator874->setDEF(QString("l_middle0_OI"));
SoIS* SoIS875 = new SoIS();
Soconnect* Soconnect876 = new Soconnect();
Soconnect876->setNodeField(QString("key"));
Soconnect876->setProtoField(QString("l_middle0_key"));
SoIS875->addChild(*Soconnect876);

Soconnect* Soconnect877 = new Soconnect();
Soconnect877->setNodeField(QString("keyValue"));
Soconnect877->setProtoField(QString("l_middle0_keyValue"));
SoIS875->addChild(*Soconnect877);

Soconnect* Soconnect878 = new Soconnect();
Soconnect878->setNodeField(QString("value_changed"));
Soconnect878->setProtoField(QString("l_middle0_changed"));
SoIS875->addChild(*Soconnect878);

SoOrientationInterpolator874->addChild(*SoIS875);

SoProtoBody603->addChild(*SoOrientationInterpolator874);

SoROUTE* SoROUTE879 = new SoROUTE();
SoROUTE879->setFromField(QString("fraction_changed"));
SoROUTE879->setFromNode(QString("BehaviorClock"));
SoROUTE879->setToField(QString("set_fraction"));
SoROUTE879->setToNode(QString("l_middle0_OI"));
SoProtoBody603->addChild(*SoROUTE879);

SoOrientationInterpolator* SoOrientationInterpolator880 = new SoOrientationInterpolator();
SoOrientationInterpolator880->setDEF(QString("l_middle1_OI"));
SoIS* SoIS881 = new SoIS();
Soconnect* Soconnect882 = new Soconnect();
Soconnect882->setNodeField(QString("key"));
Soconnect882->setProtoField(QString("l_middle1_key"));
SoIS881->addChild(*Soconnect882);

Soconnect* Soconnect883 = new Soconnect();
Soconnect883->setNodeField(QString("keyValue"));
Soconnect883->setProtoField(QString("l_middle1_keyValue"));
SoIS881->addChild(*Soconnect883);

Soconnect* Soconnect884 = new Soconnect();
Soconnect884->setNodeField(QString("value_changed"));
Soconnect884->setProtoField(QString("l_middle1_changed"));
SoIS881->addChild(*Soconnect884);

SoOrientationInterpolator880->addChild(*SoIS881);

SoProtoBody603->addChild(*SoOrientationInterpolator880);

SoROUTE* SoROUTE885 = new SoROUTE();
SoROUTE885->setFromField(QString("fraction_changed"));
SoROUTE885->setFromNode(QString("BehaviorClock"));
SoROUTE885->setToField(QString("set_fraction"));
SoROUTE885->setToNode(QString("l_middle1_OI"));
SoProtoBody603->addChild(*SoROUTE885);

SoOrientationInterpolator* SoOrientationInterpolator886 = new SoOrientationInterpolator();
SoOrientationInterpolator886->setDEF(QString("l_middle2_OI"));
SoIS* SoIS887 = new SoIS();
Soconnect* Soconnect888 = new Soconnect();
Soconnect888->setNodeField(QString("key"));
Soconnect888->setProtoField(QString("l_middle2_key"));
SoIS887->addChild(*Soconnect888);

Soconnect* Soconnect889 = new Soconnect();
Soconnect889->setNodeField(QString("keyValue"));
Soconnect889->setProtoField(QString("l_middle2_keyValue"));
SoIS887->addChild(*Soconnect889);

Soconnect* Soconnect890 = new Soconnect();
Soconnect890->setNodeField(QString("value_changed"));
Soconnect890->setProtoField(QString("l_middle2_changed"));
SoIS887->addChild(*Soconnect890);

SoOrientationInterpolator886->addChild(*SoIS887);

SoProtoBody603->addChild(*SoOrientationInterpolator886);

SoROUTE* SoROUTE891 = new SoROUTE();
SoROUTE891->setFromField(QString("fraction_changed"));
SoROUTE891->setFromNode(QString("BehaviorClock"));
SoROUTE891->setToField(QString("set_fraction"));
SoROUTE891->setToNode(QString("l_middle2_OI"));
SoProtoBody603->addChild(*SoROUTE891);

SoOrientationInterpolator* SoOrientationInterpolator892 = new SoOrientationInterpolator();
SoOrientationInterpolator892->setDEF(QString("l_middle3_OI"));
SoIS* SoIS893 = new SoIS();
Soconnect* Soconnect894 = new Soconnect();
Soconnect894->setNodeField(QString("key"));
Soconnect894->setProtoField(QString("l_middle3_key"));
SoIS893->addChild(*Soconnect894);

Soconnect* Soconnect895 = new Soconnect();
Soconnect895->setNodeField(QString("keyValue"));
Soconnect895->setProtoField(QString("l_middle3_keyValue"));
SoIS893->addChild(*Soconnect895);

Soconnect* Soconnect896 = new Soconnect();
Soconnect896->setNodeField(QString("value_changed"));
Soconnect896->setProtoField(QString("l_middle3_changed"));
SoIS893->addChild(*Soconnect896);

SoOrientationInterpolator892->addChild(*SoIS893);

SoProtoBody603->addChild(*SoOrientationInterpolator892);

SoROUTE* SoROUTE897 = new SoROUTE();
SoROUTE897->setFromField(QString("fraction_changed"));
SoROUTE897->setFromNode(QString("BehaviorClock"));
SoROUTE897->setToField(QString("set_fraction"));
SoROUTE897->setToNode(QString("l_middle3_OI"));
SoProtoBody603->addChild(*SoROUTE897);

SoOrientationInterpolator* SoOrientationInterpolator898 = new SoOrientationInterpolator();
SoOrientationInterpolator898->setDEF(QString("l_middle_distal_OI"));
SoIS* SoIS899 = new SoIS();
Soconnect* Soconnect900 = new Soconnect();
Soconnect900->setNodeField(QString("key"));
Soconnect900->setProtoField(QString("l_middle_distal_key"));
SoIS899->addChild(*Soconnect900);

Soconnect* Soconnect901 = new Soconnect();
Soconnect901->setNodeField(QString("keyValue"));
Soconnect901->setProtoField(QString("l_middle_distal_keyValue"));
SoIS899->addChild(*Soconnect901);

Soconnect* Soconnect902 = new Soconnect();
Soconnect902->setNodeField(QString("value_changed"));
Soconnect902->setProtoField(QString("l_middle_distal_changed"));
SoIS899->addChild(*Soconnect902);

SoOrientationInterpolator898->addChild(*SoIS899);

SoProtoBody603->addChild(*SoOrientationInterpolator898);

SoROUTE* SoROUTE903 = new SoROUTE();
SoROUTE903->setFromField(QString("fraction_changed"));
SoROUTE903->setFromNode(QString("BehaviorClock"));
SoROUTE903->setToField(QString("set_fraction"));
SoROUTE903->setToNode(QString("l_middle_distal_OI"));
SoProtoBody603->addChild(*SoROUTE903);

SoOrientationInterpolator* SoOrientationInterpolator904 = new SoOrientationInterpolator();
SoOrientationInterpolator904->setDEF(QString("l_middle_metacarpal_OI"));
SoIS* SoIS905 = new SoIS();
Soconnect* Soconnect906 = new Soconnect();
Soconnect906->setNodeField(QString("key"));
Soconnect906->setProtoField(QString("l_middle_metacarpal_key"));
SoIS905->addChild(*Soconnect906);

Soconnect* Soconnect907 = new Soconnect();
Soconnect907->setNodeField(QString("keyValue"));
Soconnect907->setProtoField(QString("l_middle_metacarpal_keyValue"));
SoIS905->addChild(*Soconnect907);

Soconnect* Soconnect908 = new Soconnect();
Soconnect908->setNodeField(QString("value_changed"));
Soconnect908->setProtoField(QString("l_middle_metacarpal_changed"));
SoIS905->addChild(*Soconnect908);

SoOrientationInterpolator904->addChild(*SoIS905);

SoProtoBody603->addChild(*SoOrientationInterpolator904);

SoROUTE* SoROUTE909 = new SoROUTE();
SoROUTE909->setFromField(QString("fraction_changed"));
SoROUTE909->setFromNode(QString("BehaviorClock"));
SoROUTE909->setToField(QString("set_fraction"));
SoROUTE909->setToNode(QString("l_middle_metacarpal_OI"));
SoProtoBody603->addChild(*SoROUTE909);

SoOrientationInterpolator* SoOrientationInterpolator910 = new SoOrientationInterpolator();
SoOrientationInterpolator910->setDEF(QString("l_middle_middle_OI"));
SoIS* SoIS911 = new SoIS();
Soconnect* Soconnect912 = new Soconnect();
Soconnect912->setNodeField(QString("key"));
Soconnect912->setProtoField(QString("l_middle_middle_key"));
SoIS911->addChild(*Soconnect912);

Soconnect* Soconnect913 = new Soconnect();
Soconnect913->setNodeField(QString("keyValue"));
Soconnect913->setProtoField(QString("l_middle_middle_keyValue"));
SoIS911->addChild(*Soconnect913);

Soconnect* Soconnect914 = new Soconnect();
Soconnect914->setNodeField(QString("value_changed"));
Soconnect914->setProtoField(QString("l_middle_middle_changed"));
SoIS911->addChild(*Soconnect914);

SoOrientationInterpolator910->addChild(*SoIS911);

SoProtoBody603->addChild(*SoOrientationInterpolator910);

SoROUTE* SoROUTE915 = new SoROUTE();
SoROUTE915->setFromField(QString("fraction_changed"));
SoROUTE915->setFromNode(QString("BehaviorClock"));
SoROUTE915->setToField(QString("set_fraction"));
SoROUTE915->setToNode(QString("l_middle_middle_OI"));
SoProtoBody603->addChild(*SoROUTE915);

SoOrientationInterpolator* SoOrientationInterpolator916 = new SoOrientationInterpolator();
SoOrientationInterpolator916->setDEF(QString("l_middle_proximal_OI"));
SoIS* SoIS917 = new SoIS();
Soconnect* Soconnect918 = new Soconnect();
Soconnect918->setNodeField(QString("key"));
Soconnect918->setProtoField(QString("l_middle_proximal_key"));
SoIS917->addChild(*Soconnect918);

Soconnect* Soconnect919 = new Soconnect();
Soconnect919->setNodeField(QString("keyValue"));
Soconnect919->setProtoField(QString("l_middle_proximal_keyValue"));
SoIS917->addChild(*Soconnect919);

Soconnect* Soconnect920 = new Soconnect();
Soconnect920->setNodeField(QString("value_changed"));
Soconnect920->setProtoField(QString("l_middle_proximal_changed"));
SoIS917->addChild(*Soconnect920);

SoOrientationInterpolator916->addChild(*SoIS917);

SoProtoBody603->addChild(*SoOrientationInterpolator916);

SoROUTE* SoROUTE921 = new SoROUTE();
SoROUTE921->setFromField(QString("fraction_changed"));
SoROUTE921->setFromNode(QString("BehaviorClock"));
SoROUTE921->setToField(QString("set_fraction"));
SoROUTE921->setToNode(QString("l_middle_proximal_OI"));
SoProtoBody603->addChild(*SoROUTE921);

SoOrientationInterpolator* SoOrientationInterpolator922 = new SoOrientationInterpolator();
SoOrientationInterpolator922->setDEF(QString("l_midproximal_OI"));
SoIS* SoIS923 = new SoIS();
Soconnect* Soconnect924 = new Soconnect();
Soconnect924->setNodeField(QString("key"));
Soconnect924->setProtoField(QString("l_midproximal_key"));
SoIS923->addChild(*Soconnect924);

Soconnect* Soconnect925 = new Soconnect();
Soconnect925->setNodeField(QString("keyValue"));
Soconnect925->setProtoField(QString("l_midproximal_keyValue"));
SoIS923->addChild(*Soconnect925);

Soconnect* Soconnect926 = new Soconnect();
Soconnect926->setNodeField(QString("value_changed"));
Soconnect926->setProtoField(QString("l_midproximal_changed"));
SoIS923->addChild(*Soconnect926);

SoOrientationInterpolator922->addChild(*SoIS923);

SoProtoBody603->addChild(*SoOrientationInterpolator922);

SoROUTE* SoROUTE927 = new SoROUTE();
SoROUTE927->setFromField(QString("fraction_changed"));
SoROUTE927->setFromNode(QString("BehaviorClock"));
SoROUTE927->setToField(QString("set_fraction"));
SoROUTE927->setToNode(QString("l_midproximal_OI"));
SoProtoBody603->addChild(*SoROUTE927);

SoOrientationInterpolator* SoOrientationInterpolator928 = new SoOrientationInterpolator();
SoOrientationInterpolator928->setDEF(QString("l_midtarsal_OI"));
SoIS* SoIS929 = new SoIS();
Soconnect* Soconnect930 = new Soconnect();
Soconnect930->setNodeField(QString("key"));
Soconnect930->setProtoField(QString("l_midtarsal_key"));
SoIS929->addChild(*Soconnect930);

Soconnect* Soconnect931 = new Soconnect();
Soconnect931->setNodeField(QString("keyValue"));
Soconnect931->setProtoField(QString("l_midtarsal_keyValue"));
SoIS929->addChild(*Soconnect931);

Soconnect* Soconnect932 = new Soconnect();
Soconnect932->setNodeField(QString("value_changed"));
Soconnect932->setProtoField(QString("l_midtarsal_changed"));
SoIS929->addChild(*Soconnect932);

SoOrientationInterpolator928->addChild(*SoIS929);

SoProtoBody603->addChild(*SoOrientationInterpolator928);

SoROUTE* SoROUTE933 = new SoROUTE();
SoROUTE933->setFromField(QString("fraction_changed"));
SoROUTE933->setFromNode(QString("BehaviorClock"));
SoROUTE933->setToField(QString("set_fraction"));
SoROUTE933->setToNode(QString("l_midtarsal_OI"));
SoProtoBody603->addChild(*SoROUTE933);

SoOrientationInterpolator* SoOrientationInterpolator934 = new SoOrientationInterpolator();
SoOrientationInterpolator934->setDEF(QString("l_pinky0_OI"));
SoIS* SoIS935 = new SoIS();
Soconnect* Soconnect936 = new Soconnect();
Soconnect936->setNodeField(QString("key"));
Soconnect936->setProtoField(QString("l_pinky0_key"));
SoIS935->addChild(*Soconnect936);

Soconnect* Soconnect937 = new Soconnect();
Soconnect937->setNodeField(QString("keyValue"));
Soconnect937->setProtoField(QString("l_pinky0_keyValue"));
SoIS935->addChild(*Soconnect937);

Soconnect* Soconnect938 = new Soconnect();
Soconnect938->setNodeField(QString("value_changed"));
Soconnect938->setProtoField(QString("l_pinky0_changed"));
SoIS935->addChild(*Soconnect938);

SoOrientationInterpolator934->addChild(*SoIS935);

SoProtoBody603->addChild(*SoOrientationInterpolator934);

SoROUTE* SoROUTE939 = new SoROUTE();
SoROUTE939->setFromField(QString("fraction_changed"));
SoROUTE939->setFromNode(QString("BehaviorClock"));
SoROUTE939->setToField(QString("set_fraction"));
SoROUTE939->setToNode(QString("l_pinky0_OI"));
SoProtoBody603->addChild(*SoROUTE939);

SoOrientationInterpolator* SoOrientationInterpolator940 = new SoOrientationInterpolator();
SoOrientationInterpolator940->setDEF(QString("l_pinky1_OI"));
SoIS* SoIS941 = new SoIS();
Soconnect* Soconnect942 = new Soconnect();
Soconnect942->setNodeField(QString("key"));
Soconnect942->setProtoField(QString("l_pinky1_key"));
SoIS941->addChild(*Soconnect942);

Soconnect* Soconnect943 = new Soconnect();
Soconnect943->setNodeField(QString("keyValue"));
Soconnect943->setProtoField(QString("l_pinky1_keyValue"));
SoIS941->addChild(*Soconnect943);

Soconnect* Soconnect944 = new Soconnect();
Soconnect944->setNodeField(QString("value_changed"));
Soconnect944->setProtoField(QString("l_pinky1_changed"));
SoIS941->addChild(*Soconnect944);

SoOrientationInterpolator940->addChild(*SoIS941);

SoProtoBody603->addChild(*SoOrientationInterpolator940);

SoROUTE* SoROUTE945 = new SoROUTE();
SoROUTE945->setFromField(QString("fraction_changed"));
SoROUTE945->setFromNode(QString("BehaviorClock"));
SoROUTE945->setToField(QString("set_fraction"));
SoROUTE945->setToNode(QString("l_pinky1_OI"));
SoProtoBody603->addChild(*SoROUTE945);

SoOrientationInterpolator* SoOrientationInterpolator946 = new SoOrientationInterpolator();
SoOrientationInterpolator946->setDEF(QString("l_pinky2_OI"));
SoIS* SoIS947 = new SoIS();
Soconnect* Soconnect948 = new Soconnect();
Soconnect948->setNodeField(QString("key"));
Soconnect948->setProtoField(QString("l_pinky2_key"));
SoIS947->addChild(*Soconnect948);

Soconnect* Soconnect949 = new Soconnect();
Soconnect949->setNodeField(QString("keyValue"));
Soconnect949->setProtoField(QString("l_pinky2_keyValue"));
SoIS947->addChild(*Soconnect949);

Soconnect* Soconnect950 = new Soconnect();
Soconnect950->setNodeField(QString("value_changed"));
Soconnect950->setProtoField(QString("l_pinky2_changed"));
SoIS947->addChild(*Soconnect950);

SoOrientationInterpolator946->addChild(*SoIS947);

SoProtoBody603->addChild(*SoOrientationInterpolator946);

SoROUTE* SoROUTE951 = new SoROUTE();
SoROUTE951->setFromField(QString("fraction_changed"));
SoROUTE951->setFromNode(QString("BehaviorClock"));
SoROUTE951->setToField(QString("set_fraction"));
SoROUTE951->setToNode(QString("l_pinky2_OI"));
SoProtoBody603->addChild(*SoROUTE951);

SoOrientationInterpolator* SoOrientationInterpolator952 = new SoOrientationInterpolator();
SoOrientationInterpolator952->setDEF(QString("l_pinky3_OI"));
SoIS* SoIS953 = new SoIS();
Soconnect* Soconnect954 = new Soconnect();
Soconnect954->setNodeField(QString("key"));
Soconnect954->setProtoField(QString("l_pinky3_key"));
SoIS953->addChild(*Soconnect954);

Soconnect* Soconnect955 = new Soconnect();
Soconnect955->setNodeField(QString("keyValue"));
Soconnect955->setProtoField(QString("l_pinky3_keyValue"));
SoIS953->addChild(*Soconnect955);

Soconnect* Soconnect956 = new Soconnect();
Soconnect956->setNodeField(QString("value_changed"));
Soconnect956->setProtoField(QString("l_pinky3_changed"));
SoIS953->addChild(*Soconnect956);

SoOrientationInterpolator952->addChild(*SoIS953);

SoProtoBody603->addChild(*SoOrientationInterpolator952);

SoROUTE* SoROUTE957 = new SoROUTE();
SoROUTE957->setFromField(QString("fraction_changed"));
SoROUTE957->setFromNode(QString("BehaviorClock"));
SoROUTE957->setToField(QString("set_fraction"));
SoROUTE957->setToNode(QString("l_pinky3_OI"));
SoProtoBody603->addChild(*SoROUTE957);

SoOrientationInterpolator* SoOrientationInterpolator958 = new SoOrientationInterpolator();
SoOrientationInterpolator958->setDEF(QString("l_pinky_distal_OI"));
SoIS* SoIS959 = new SoIS();
Soconnect* Soconnect960 = new Soconnect();
Soconnect960->setNodeField(QString("key"));
Soconnect960->setProtoField(QString("l_pinky_distal_key"));
SoIS959->addChild(*Soconnect960);

Soconnect* Soconnect961 = new Soconnect();
Soconnect961->setNodeField(QString("keyValue"));
Soconnect961->setProtoField(QString("l_pinky_distal_keyValue"));
SoIS959->addChild(*Soconnect961);

Soconnect* Soconnect962 = new Soconnect();
Soconnect962->setNodeField(QString("value_changed"));
Soconnect962->setProtoField(QString("l_pinky_distal_changed"));
SoIS959->addChild(*Soconnect962);

SoOrientationInterpolator958->addChild(*SoIS959);

SoProtoBody603->addChild(*SoOrientationInterpolator958);

SoROUTE* SoROUTE963 = new SoROUTE();
SoROUTE963->setFromField(QString("fraction_changed"));
SoROUTE963->setFromNode(QString("BehaviorClock"));
SoROUTE963->setToField(QString("set_fraction"));
SoROUTE963->setToNode(QString("l_pinky_distal_OI"));
SoProtoBody603->addChild(*SoROUTE963);

SoOrientationInterpolator* SoOrientationInterpolator964 = new SoOrientationInterpolator();
SoOrientationInterpolator964->setDEF(QString("l_pinky_metacarpal_OI"));
SoIS* SoIS965 = new SoIS();
Soconnect* Soconnect966 = new Soconnect();
Soconnect966->setNodeField(QString("key"));
Soconnect966->setProtoField(QString("l_pinky_metacarpal_key"));
SoIS965->addChild(*Soconnect966);

Soconnect* Soconnect967 = new Soconnect();
Soconnect967->setNodeField(QString("keyValue"));
Soconnect967->setProtoField(QString("l_pinky_metacarpal_keyValue"));
SoIS965->addChild(*Soconnect967);

Soconnect* Soconnect968 = new Soconnect();
Soconnect968->setNodeField(QString("value_changed"));
Soconnect968->setProtoField(QString("l_pinky_metacarpal_changed"));
SoIS965->addChild(*Soconnect968);

SoOrientationInterpolator964->addChild(*SoIS965);

SoProtoBody603->addChild(*SoOrientationInterpolator964);

SoROUTE* SoROUTE969 = new SoROUTE();
SoROUTE969->setFromField(QString("fraction_changed"));
SoROUTE969->setFromNode(QString("BehaviorClock"));
SoROUTE969->setToField(QString("set_fraction"));
SoROUTE969->setToNode(QString("l_pinky_metacarpal_OI"));
SoProtoBody603->addChild(*SoROUTE969);

SoOrientationInterpolator* SoOrientationInterpolator970 = new SoOrientationInterpolator();
SoOrientationInterpolator970->setDEF(QString("l_pinky_middle_OI"));
SoIS* SoIS971 = new SoIS();
Soconnect* Soconnect972 = new Soconnect();
Soconnect972->setNodeField(QString("key"));
Soconnect972->setProtoField(QString("l_pinky_middle_key"));
SoIS971->addChild(*Soconnect972);

Soconnect* Soconnect973 = new Soconnect();
Soconnect973->setNodeField(QString("keyValue"));
Soconnect973->setProtoField(QString("l_pinky_middle_keyValue"));
SoIS971->addChild(*Soconnect973);

Soconnect* Soconnect974 = new Soconnect();
Soconnect974->setNodeField(QString("value_changed"));
Soconnect974->setProtoField(QString("l_pinky_middle_changed"));
SoIS971->addChild(*Soconnect974);

SoOrientationInterpolator970->addChild(*SoIS971);

SoProtoBody603->addChild(*SoOrientationInterpolator970);

SoROUTE* SoROUTE975 = new SoROUTE();
SoROUTE975->setFromField(QString("fraction_changed"));
SoROUTE975->setFromNode(QString("BehaviorClock"));
SoROUTE975->setToField(QString("set_fraction"));
SoROUTE975->setToNode(QString("l_pinky_middle_OI"));
SoProtoBody603->addChild(*SoROUTE975);

SoOrientationInterpolator* SoOrientationInterpolator976 = new SoOrientationInterpolator();
SoOrientationInterpolator976->setDEF(QString("l_pinky_proximal_OI"));
SoIS* SoIS977 = new SoIS();
Soconnect* Soconnect978 = new Soconnect();
Soconnect978->setNodeField(QString("key"));
Soconnect978->setProtoField(QString("l_pinky_proximal_key"));
SoIS977->addChild(*Soconnect978);

Soconnect* Soconnect979 = new Soconnect();
Soconnect979->setNodeField(QString("keyValue"));
Soconnect979->setProtoField(QString("l_pinky_proximal_keyValue"));
SoIS977->addChild(*Soconnect979);

Soconnect* Soconnect980 = new Soconnect();
Soconnect980->setNodeField(QString("value_changed"));
Soconnect980->setProtoField(QString("l_pinky_proximal_changed"));
SoIS977->addChild(*Soconnect980);

SoOrientationInterpolator976->addChild(*SoIS977);

SoProtoBody603->addChild(*SoOrientationInterpolator976);

SoROUTE* SoROUTE981 = new SoROUTE();
SoROUTE981->setFromField(QString("fraction_changed"));
SoROUTE981->setFromNode(QString("BehaviorClock"));
SoROUTE981->setToField(QString("set_fraction"));
SoROUTE981->setToNode(QString("l_pinky_proximal_OI"));
SoProtoBody603->addChild(*SoROUTE981);

SoOrientationInterpolator* SoOrientationInterpolator982 = new SoOrientationInterpolator();
SoOrientationInterpolator982->setDEF(QString("l_ring0_OI"));
SoIS* SoIS983 = new SoIS();
Soconnect* Soconnect984 = new Soconnect();
Soconnect984->setNodeField(QString("key"));
Soconnect984->setProtoField(QString("l_ring0_key"));
SoIS983->addChild(*Soconnect984);

Soconnect* Soconnect985 = new Soconnect();
Soconnect985->setNodeField(QString("keyValue"));
Soconnect985->setProtoField(QString("l_ring0_keyValue"));
SoIS983->addChild(*Soconnect985);

Soconnect* Soconnect986 = new Soconnect();
Soconnect986->setNodeField(QString("value_changed"));
Soconnect986->setProtoField(QString("l_ring0_changed"));
SoIS983->addChild(*Soconnect986);

SoOrientationInterpolator982->addChild(*SoIS983);

SoProtoBody603->addChild(*SoOrientationInterpolator982);

SoROUTE* SoROUTE987 = new SoROUTE();
SoROUTE987->setFromField(QString("fraction_changed"));
SoROUTE987->setFromNode(QString("BehaviorClock"));
SoROUTE987->setToField(QString("set_fraction"));
SoROUTE987->setToNode(QString("l_ring0_OI"));
SoProtoBody603->addChild(*SoROUTE987);

SoOrientationInterpolator* SoOrientationInterpolator988 = new SoOrientationInterpolator();
SoOrientationInterpolator988->setDEF(QString("l_ring1_OI"));
SoIS* SoIS989 = new SoIS();
Soconnect* Soconnect990 = new Soconnect();
Soconnect990->setNodeField(QString("key"));
Soconnect990->setProtoField(QString("l_ring1_key"));
SoIS989->addChild(*Soconnect990);

Soconnect* Soconnect991 = new Soconnect();
Soconnect991->setNodeField(QString("keyValue"));
Soconnect991->setProtoField(QString("l_ring1_keyValue"));
SoIS989->addChild(*Soconnect991);

Soconnect* Soconnect992 = new Soconnect();
Soconnect992->setNodeField(QString("value_changed"));
Soconnect992->setProtoField(QString("l_ring1_changed"));
SoIS989->addChild(*Soconnect992);

SoOrientationInterpolator988->addChild(*SoIS989);

SoProtoBody603->addChild(*SoOrientationInterpolator988);

SoROUTE* SoROUTE993 = new SoROUTE();
SoROUTE993->setFromField(QString("fraction_changed"));
SoROUTE993->setFromNode(QString("BehaviorClock"));
SoROUTE993->setToField(QString("set_fraction"));
SoROUTE993->setToNode(QString("l_ring1_OI"));
SoProtoBody603->addChild(*SoROUTE993);

SoOrientationInterpolator* SoOrientationInterpolator994 = new SoOrientationInterpolator();
SoOrientationInterpolator994->setDEF(QString("l_ring2_OI"));
SoIS* SoIS995 = new SoIS();
Soconnect* Soconnect996 = new Soconnect();
Soconnect996->setNodeField(QString("key"));
Soconnect996->setProtoField(QString("l_ring2_key"));
SoIS995->addChild(*Soconnect996);

Soconnect* Soconnect997 = new Soconnect();
Soconnect997->setNodeField(QString("keyValue"));
Soconnect997->setProtoField(QString("l_ring2_keyValue"));
SoIS995->addChild(*Soconnect997);

Soconnect* Soconnect998 = new Soconnect();
Soconnect998->setNodeField(QString("value_changed"));
Soconnect998->setProtoField(QString("l_ring2_changed"));
SoIS995->addChild(*Soconnect998);

SoOrientationInterpolator994->addChild(*SoIS995);

SoProtoBody603->addChild(*SoOrientationInterpolator994);

SoROUTE* SoROUTE999 = new SoROUTE();
SoROUTE999->setFromField(QString("fraction_changed"));
SoROUTE999->setFromNode(QString("BehaviorClock"));
SoROUTE999->setToField(QString("set_fraction"));
SoROUTE999->setToNode(QString("l_ring2_OI"));
SoProtoBody603->addChild(*SoROUTE999);

SoOrientationInterpolator* SoOrientationInterpolator1000 = new SoOrientationInterpolator();
SoOrientationInterpolator1000->setDEF(QString("l_ring3_OI"));
SoIS* SoIS1001 = new SoIS();
Soconnect* Soconnect1002 = new Soconnect();
Soconnect1002->setNodeField(QString("key"));
Soconnect1002->setProtoField(QString("l_ring3_key"));
SoIS1001->addChild(*Soconnect1002);

Soconnect* Soconnect1003 = new Soconnect();
Soconnect1003->setNodeField(QString("keyValue"));
Soconnect1003->setProtoField(QString("l_ring3_keyValue"));
SoIS1001->addChild(*Soconnect1003);

Soconnect* Soconnect1004 = new Soconnect();
Soconnect1004->setNodeField(QString("value_changed"));
Soconnect1004->setProtoField(QString("l_ring3_changed"));
SoIS1001->addChild(*Soconnect1004);

SoOrientationInterpolator1000->addChild(*SoIS1001);

SoProtoBody603->addChild(*SoOrientationInterpolator1000);

SoROUTE* SoROUTE1005 = new SoROUTE();
SoROUTE1005->setFromField(QString("fraction_changed"));
SoROUTE1005->setFromNode(QString("BehaviorClock"));
SoROUTE1005->setToField(QString("set_fraction"));
SoROUTE1005->setToNode(QString("l_ring3_OI"));
SoProtoBody603->addChild(*SoROUTE1005);

SoOrientationInterpolator* SoOrientationInterpolator1006 = new SoOrientationInterpolator();
SoOrientationInterpolator1006->setDEF(QString("l_ring_distal_OI"));
SoIS* SoIS1007 = new SoIS();
Soconnect* Soconnect1008 = new Soconnect();
Soconnect1008->setNodeField(QString("key"));
Soconnect1008->setProtoField(QString("l_ring_distal_key"));
SoIS1007->addChild(*Soconnect1008);

Soconnect* Soconnect1009 = new Soconnect();
Soconnect1009->setNodeField(QString("keyValue"));
Soconnect1009->setProtoField(QString("l_ring_distal_keyValue"));
SoIS1007->addChild(*Soconnect1009);

Soconnect* Soconnect1010 = new Soconnect();
Soconnect1010->setNodeField(QString("value_changed"));
Soconnect1010->setProtoField(QString("l_ring_distal_changed"));
SoIS1007->addChild(*Soconnect1010);

SoOrientationInterpolator1006->addChild(*SoIS1007);

SoProtoBody603->addChild(*SoOrientationInterpolator1006);

SoROUTE* SoROUTE1011 = new SoROUTE();
SoROUTE1011->setFromField(QString("fraction_changed"));
SoROUTE1011->setFromNode(QString("BehaviorClock"));
SoROUTE1011->setToField(QString("set_fraction"));
SoROUTE1011->setToNode(QString("l_ring_distal_OI"));
SoProtoBody603->addChild(*SoROUTE1011);

SoOrientationInterpolator* SoOrientationInterpolator1012 = new SoOrientationInterpolator();
SoOrientationInterpolator1012->setDEF(QString("l_ring_metacarpal_OI"));
SoIS* SoIS1013 = new SoIS();
Soconnect* Soconnect1014 = new Soconnect();
Soconnect1014->setNodeField(QString("key"));
Soconnect1014->setProtoField(QString("l_ring_metacarpal_key"));
SoIS1013->addChild(*Soconnect1014);

Soconnect* Soconnect1015 = new Soconnect();
Soconnect1015->setNodeField(QString("keyValue"));
Soconnect1015->setProtoField(QString("l_ring_metacarpal_keyValue"));
SoIS1013->addChild(*Soconnect1015);

Soconnect* Soconnect1016 = new Soconnect();
Soconnect1016->setNodeField(QString("value_changed"));
Soconnect1016->setProtoField(QString("l_ring_metacarpal_changed"));
SoIS1013->addChild(*Soconnect1016);

SoOrientationInterpolator1012->addChild(*SoIS1013);

SoProtoBody603->addChild(*SoOrientationInterpolator1012);

SoROUTE* SoROUTE1017 = new SoROUTE();
SoROUTE1017->setFromField(QString("fraction_changed"));
SoROUTE1017->setFromNode(QString("BehaviorClock"));
SoROUTE1017->setToField(QString("set_fraction"));
SoROUTE1017->setToNode(QString("l_ring_metacarpal_OI"));
SoProtoBody603->addChild(*SoROUTE1017);

SoOrientationInterpolator* SoOrientationInterpolator1018 = new SoOrientationInterpolator();
SoOrientationInterpolator1018->setDEF(QString("l_ring_middle_OI"));
SoIS* SoIS1019 = new SoIS();
Soconnect* Soconnect1020 = new Soconnect();
Soconnect1020->setNodeField(QString("key"));
Soconnect1020->setProtoField(QString("l_ring_middle_key"));
SoIS1019->addChild(*Soconnect1020);

Soconnect* Soconnect1021 = new Soconnect();
Soconnect1021->setNodeField(QString("keyValue"));
Soconnect1021->setProtoField(QString("l_ring_middle_keyValue"));
SoIS1019->addChild(*Soconnect1021);

Soconnect* Soconnect1022 = new Soconnect();
Soconnect1022->setNodeField(QString("value_changed"));
Soconnect1022->setProtoField(QString("l_ring_middle_changed"));
SoIS1019->addChild(*Soconnect1022);

SoOrientationInterpolator1018->addChild(*SoIS1019);

SoProtoBody603->addChild(*SoOrientationInterpolator1018);

SoROUTE* SoROUTE1023 = new SoROUTE();
SoROUTE1023->setFromField(QString("fraction_changed"));
SoROUTE1023->setFromNode(QString("BehaviorClock"));
SoROUTE1023->setToField(QString("set_fraction"));
SoROUTE1023->setToNode(QString("l_ring_middle_OI"));
SoProtoBody603->addChild(*SoROUTE1023);

SoOrientationInterpolator* SoOrientationInterpolator1024 = new SoOrientationInterpolator();
SoOrientationInterpolator1024->setDEF(QString("l_ring_proximal_OI"));
SoIS* SoIS1025 = new SoIS();
Soconnect* Soconnect1026 = new Soconnect();
Soconnect1026->setNodeField(QString("key"));
Soconnect1026->setProtoField(QString("l_ring_proximal_key"));
SoIS1025->addChild(*Soconnect1026);

Soconnect* Soconnect1027 = new Soconnect();
Soconnect1027->setNodeField(QString("keyValue"));
Soconnect1027->setProtoField(QString("l_ring_proximal_keyValue"));
SoIS1025->addChild(*Soconnect1027);

Soconnect* Soconnect1028 = new Soconnect();
Soconnect1028->setNodeField(QString("value_changed"));
Soconnect1028->setProtoField(QString("l_ring_proximal_changed"));
SoIS1025->addChild(*Soconnect1028);

SoOrientationInterpolator1024->addChild(*SoIS1025);

SoProtoBody603->addChild(*SoOrientationInterpolator1024);

SoROUTE* SoROUTE1029 = new SoROUTE();
SoROUTE1029->setFromField(QString("fraction_changed"));
SoROUTE1029->setFromNode(QString("BehaviorClock"));
SoROUTE1029->setToField(QString("set_fraction"));
SoROUTE1029->setToNode(QString("l_ring_proximal_OI"));
SoProtoBody603->addChild(*SoROUTE1029);

SoOrientationInterpolator* SoOrientationInterpolator1030 = new SoOrientationInterpolator();
SoOrientationInterpolator1030->setDEF(QString("l_scapula_OI"));
SoIS* SoIS1031 = new SoIS();
Soconnect* Soconnect1032 = new Soconnect();
Soconnect1032->setNodeField(QString("key"));
Soconnect1032->setProtoField(QString("l_scapula_key"));
SoIS1031->addChild(*Soconnect1032);

Soconnect* Soconnect1033 = new Soconnect();
Soconnect1033->setNodeField(QString("keyValue"));
Soconnect1033->setProtoField(QString("l_scapula_keyValue"));
SoIS1031->addChild(*Soconnect1033);

Soconnect* Soconnect1034 = new Soconnect();
Soconnect1034->setNodeField(QString("value_changed"));
Soconnect1034->setProtoField(QString("l_scapula_changed"));
SoIS1031->addChild(*Soconnect1034);

SoOrientationInterpolator1030->addChild(*SoIS1031);

SoProtoBody603->addChild(*SoOrientationInterpolator1030);

SoROUTE* SoROUTE1035 = new SoROUTE();
SoROUTE1035->setFromField(QString("fraction_changed"));
SoROUTE1035->setFromNode(QString("BehaviorClock"));
SoROUTE1035->setToField(QString("set_fraction"));
SoROUTE1035->setToNode(QString("l_scapula_OI"));
SoProtoBody603->addChild(*SoROUTE1035);

SoOrientationInterpolator* SoOrientationInterpolator1036 = new SoOrientationInterpolator();
SoOrientationInterpolator1036->setDEF(QString("l_shoulder_OI"));
SoIS* SoIS1037 = new SoIS();
Soconnect* Soconnect1038 = new Soconnect();
Soconnect1038->setNodeField(QString("key"));
Soconnect1038->setProtoField(QString("l_shoulder_key"));
SoIS1037->addChild(*Soconnect1038);

Soconnect* Soconnect1039 = new Soconnect();
Soconnect1039->setNodeField(QString("keyValue"));
Soconnect1039->setProtoField(QString("l_shoulder_keyValue"));
SoIS1037->addChild(*Soconnect1039);

Soconnect* Soconnect1040 = new Soconnect();
Soconnect1040->setNodeField(QString("value_changed"));
Soconnect1040->setProtoField(QString("l_shoulder_changed"));
SoIS1037->addChild(*Soconnect1040);

SoOrientationInterpolator1036->addChild(*SoIS1037);

SoProtoBody603->addChild(*SoOrientationInterpolator1036);

SoROUTE* SoROUTE1041 = new SoROUTE();
SoROUTE1041->setFromField(QString("fraction_changed"));
SoROUTE1041->setFromNode(QString("BehaviorClock"));
SoROUTE1041->setToField(QString("set_fraction"));
SoROUTE1041->setToNode(QString("l_shoulder_OI"));
SoProtoBody603->addChild(*SoROUTE1041);

SoOrientationInterpolator* SoOrientationInterpolator1042 = new SoOrientationInterpolator();
SoOrientationInterpolator1042->setDEF(QString("l_sternoclavicular_OI"));
SoIS* SoIS1043 = new SoIS();
Soconnect* Soconnect1044 = new Soconnect();
Soconnect1044->setNodeField(QString("key"));
Soconnect1044->setProtoField(QString("l_sternoclavicular_key"));
SoIS1043->addChild(*Soconnect1044);

Soconnect* Soconnect1045 = new Soconnect();
Soconnect1045->setNodeField(QString("keyValue"));
Soconnect1045->setProtoField(QString("l_sternoclavicular_keyValue"));
SoIS1043->addChild(*Soconnect1045);

Soconnect* Soconnect1046 = new Soconnect();
Soconnect1046->setNodeField(QString("value_changed"));
Soconnect1046->setProtoField(QString("l_sternoclavicular_changed"));
SoIS1043->addChild(*Soconnect1046);

SoOrientationInterpolator1042->addChild(*SoIS1043);

SoProtoBody603->addChild(*SoOrientationInterpolator1042);

SoROUTE* SoROUTE1047 = new SoROUTE();
SoROUTE1047->setFromField(QString("fraction_changed"));
SoROUTE1047->setFromNode(QString("BehaviorClock"));
SoROUTE1047->setToField(QString("set_fraction"));
SoROUTE1047->setToNode(QString("l_sternoclavicular_OI"));
SoProtoBody603->addChild(*SoROUTE1047);

SoOrientationInterpolator* SoOrientationInterpolator1048 = new SoOrientationInterpolator();
SoOrientationInterpolator1048->setDEF(QString("l_subtalar_OI"));
SoIS* SoIS1049 = new SoIS();
Soconnect* Soconnect1050 = new Soconnect();
Soconnect1050->setNodeField(QString("key"));
Soconnect1050->setProtoField(QString("l_subtalar_key"));
SoIS1049->addChild(*Soconnect1050);

Soconnect* Soconnect1051 = new Soconnect();
Soconnect1051->setNodeField(QString("keyValue"));
Soconnect1051->setProtoField(QString("l_subtalar_keyValue"));
SoIS1049->addChild(*Soconnect1051);

Soconnect* Soconnect1052 = new Soconnect();
Soconnect1052->setNodeField(QString("value_changed"));
Soconnect1052->setProtoField(QString("l_subtalar_changed"));
SoIS1049->addChild(*Soconnect1052);

SoOrientationInterpolator1048->addChild(*SoIS1049);

SoProtoBody603->addChild(*SoOrientationInterpolator1048);

SoROUTE* SoROUTE1053 = new SoROUTE();
SoROUTE1053->setFromField(QString("fraction_changed"));
SoROUTE1053->setFromNode(QString("BehaviorClock"));
SoROUTE1053->setToField(QString("set_fraction"));
SoROUTE1053->setToNode(QString("l_subtalar_OI"));
SoProtoBody603->addChild(*SoROUTE1053);

SoOrientationInterpolator* SoOrientationInterpolator1054 = new SoOrientationInterpolator();
SoOrientationInterpolator1054->setDEF(QString("l_thigh_OI"));
SoIS* SoIS1055 = new SoIS();
Soconnect* Soconnect1056 = new Soconnect();
Soconnect1056->setNodeField(QString("key"));
Soconnect1056->setProtoField(QString("l_thigh_key"));
SoIS1055->addChild(*Soconnect1056);

Soconnect* Soconnect1057 = new Soconnect();
Soconnect1057->setNodeField(QString("keyValue"));
Soconnect1057->setProtoField(QString("l_thigh_keyValue"));
SoIS1055->addChild(*Soconnect1057);

Soconnect* Soconnect1058 = new Soconnect();
Soconnect1058->setNodeField(QString("value_changed"));
Soconnect1058->setProtoField(QString("l_thigh_changed"));
SoIS1055->addChild(*Soconnect1058);

SoOrientationInterpolator1054->addChild(*SoIS1055);

SoProtoBody603->addChild(*SoOrientationInterpolator1054);

SoROUTE* SoROUTE1059 = new SoROUTE();
SoROUTE1059->setFromField(QString("fraction_changed"));
SoROUTE1059->setFromNode(QString("BehaviorClock"));
SoROUTE1059->setToField(QString("set_fraction"));
SoROUTE1059->setToNode(QString("l_thigh_OI"));
SoProtoBody603->addChild(*SoROUTE1059);

SoOrientationInterpolator* SoOrientationInterpolator1060 = new SoOrientationInterpolator();
SoOrientationInterpolator1060->setDEF(QString("l_thumb1_OI"));
SoIS* SoIS1061 = new SoIS();
Soconnect* Soconnect1062 = new Soconnect();
Soconnect1062->setNodeField(QString("key"));
Soconnect1062->setProtoField(QString("l_thumb1_key"));
SoIS1061->addChild(*Soconnect1062);

Soconnect* Soconnect1063 = new Soconnect();
Soconnect1063->setNodeField(QString("keyValue"));
Soconnect1063->setProtoField(QString("l_thumb1_keyValue"));
SoIS1061->addChild(*Soconnect1063);

Soconnect* Soconnect1064 = new Soconnect();
Soconnect1064->setNodeField(QString("value_changed"));
Soconnect1064->setProtoField(QString("l_thumb1_changed"));
SoIS1061->addChild(*Soconnect1064);

SoOrientationInterpolator1060->addChild(*SoIS1061);

SoProtoBody603->addChild(*SoOrientationInterpolator1060);

SoROUTE* SoROUTE1065 = new SoROUTE();
SoROUTE1065->setFromField(QString("fraction_changed"));
SoROUTE1065->setFromNode(QString("BehaviorClock"));
SoROUTE1065->setToField(QString("set_fraction"));
SoROUTE1065->setToNode(QString("l_thumb1_OI"));
SoProtoBody603->addChild(*SoROUTE1065);

SoOrientationInterpolator* SoOrientationInterpolator1066 = new SoOrientationInterpolator();
SoOrientationInterpolator1066->setDEF(QString("l_thumb2_OI"));
SoIS* SoIS1067 = new SoIS();
Soconnect* Soconnect1068 = new Soconnect();
Soconnect1068->setNodeField(QString("key"));
Soconnect1068->setProtoField(QString("l_thumb2_key"));
SoIS1067->addChild(*Soconnect1068);

Soconnect* Soconnect1069 = new Soconnect();
Soconnect1069->setNodeField(QString("keyValue"));
Soconnect1069->setProtoField(QString("l_thumb2_keyValue"));
SoIS1067->addChild(*Soconnect1069);

Soconnect* Soconnect1070 = new Soconnect();
Soconnect1070->setNodeField(QString("value_changed"));
Soconnect1070->setProtoField(QString("l_thumb2_changed"));
SoIS1067->addChild(*Soconnect1070);

SoOrientationInterpolator1066->addChild(*SoIS1067);

SoProtoBody603->addChild(*SoOrientationInterpolator1066);

SoROUTE* SoROUTE1071 = new SoROUTE();
SoROUTE1071->setFromField(QString("fraction_changed"));
SoROUTE1071->setFromNode(QString("BehaviorClock"));
SoROUTE1071->setToField(QString("set_fraction"));
SoROUTE1071->setToNode(QString("l_thumb2_OI"));
SoProtoBody603->addChild(*SoROUTE1071);

SoOrientationInterpolator* SoOrientationInterpolator1072 = new SoOrientationInterpolator();
SoOrientationInterpolator1072->setDEF(QString("l_thumb3_OI"));
SoIS* SoIS1073 = new SoIS();
Soconnect* Soconnect1074 = new Soconnect();
Soconnect1074->setNodeField(QString("key"));
Soconnect1074->setProtoField(QString("l_thumb3_key"));
SoIS1073->addChild(*Soconnect1074);

Soconnect* Soconnect1075 = new Soconnect();
Soconnect1075->setNodeField(QString("keyValue"));
Soconnect1075->setProtoField(QString("l_thumb3_keyValue"));
SoIS1073->addChild(*Soconnect1075);

Soconnect* Soconnect1076 = new Soconnect();
Soconnect1076->setNodeField(QString("value_changed"));
Soconnect1076->setProtoField(QString("l_thumb3_changed"));
SoIS1073->addChild(*Soconnect1076);

SoOrientationInterpolator1072->addChild(*SoIS1073);

SoProtoBody603->addChild(*SoOrientationInterpolator1072);

SoROUTE* SoROUTE1077 = new SoROUTE();
SoROUTE1077->setFromField(QString("fraction_changed"));
SoROUTE1077->setFromNode(QString("BehaviorClock"));
SoROUTE1077->setToField(QString("set_fraction"));
SoROUTE1077->setToNode(QString("l_thumb3_OI"));
SoProtoBody603->addChild(*SoROUTE1077);

SoOrientationInterpolator* SoOrientationInterpolator1078 = new SoOrientationInterpolator();
SoOrientationInterpolator1078->setDEF(QString("l_thumb_distal_OI"));
SoIS* SoIS1079 = new SoIS();
Soconnect* Soconnect1080 = new Soconnect();
Soconnect1080->setNodeField(QString("key"));
Soconnect1080->setProtoField(QString("l_thumb_distal_key"));
SoIS1079->addChild(*Soconnect1080);

Soconnect* Soconnect1081 = new Soconnect();
Soconnect1081->setNodeField(QString("keyValue"));
Soconnect1081->setProtoField(QString("l_thumb_distal_keyValue"));
SoIS1079->addChild(*Soconnect1081);

Soconnect* Soconnect1082 = new Soconnect();
Soconnect1082->setNodeField(QString("value_changed"));
Soconnect1082->setProtoField(QString("l_thumb_distal_changed"));
SoIS1079->addChild(*Soconnect1082);

SoOrientationInterpolator1078->addChild(*SoIS1079);

SoProtoBody603->addChild(*SoOrientationInterpolator1078);

SoROUTE* SoROUTE1083 = new SoROUTE();
SoROUTE1083->setFromField(QString("fraction_changed"));
SoROUTE1083->setFromNode(QString("BehaviorClock"));
SoROUTE1083->setToField(QString("set_fraction"));
SoROUTE1083->setToNode(QString("l_thumb_distal_OI"));
SoProtoBody603->addChild(*SoROUTE1083);

SoOrientationInterpolator* SoOrientationInterpolator1084 = new SoOrientationInterpolator();
SoOrientationInterpolator1084->setDEF(QString("l_thumb_metacarpal_OI"));
SoIS* SoIS1085 = new SoIS();
Soconnect* Soconnect1086 = new Soconnect();
Soconnect1086->setNodeField(QString("key"));
Soconnect1086->setProtoField(QString("l_thumb_metacarpal_key"));
SoIS1085->addChild(*Soconnect1086);

Soconnect* Soconnect1087 = new Soconnect();
Soconnect1087->setNodeField(QString("keyValue"));
Soconnect1087->setProtoField(QString("l_thumb_metacarpal_keyValue"));
SoIS1085->addChild(*Soconnect1087);

Soconnect* Soconnect1088 = new Soconnect();
Soconnect1088->setNodeField(QString("value_changed"));
Soconnect1088->setProtoField(QString("l_thumb_metacarpal_changed"));
SoIS1085->addChild(*Soconnect1088);

SoOrientationInterpolator1084->addChild(*SoIS1085);

SoProtoBody603->addChild(*SoOrientationInterpolator1084);

SoROUTE* SoROUTE1089 = new SoROUTE();
SoROUTE1089->setFromField(QString("fraction_changed"));
SoROUTE1089->setFromNode(QString("BehaviorClock"));
SoROUTE1089->setToField(QString("set_fraction"));
SoROUTE1089->setToNode(QString("l_thumb_metacarpal_OI"));
SoProtoBody603->addChild(*SoROUTE1089);

SoOrientationInterpolator* SoOrientationInterpolator1090 = new SoOrientationInterpolator();
SoOrientationInterpolator1090->setDEF(QString("l_thumb_proximal_OI"));
SoIS* SoIS1091 = new SoIS();
Soconnect* Soconnect1092 = new Soconnect();
Soconnect1092->setNodeField(QString("key"));
Soconnect1092->setProtoField(QString("l_thumb_proximal_key"));
SoIS1091->addChild(*Soconnect1092);

Soconnect* Soconnect1093 = new Soconnect();
Soconnect1093->setNodeField(QString("keyValue"));
Soconnect1093->setProtoField(QString("l_thumb_proximal_keyValue"));
SoIS1091->addChild(*Soconnect1093);

Soconnect* Soconnect1094 = new Soconnect();
Soconnect1094->setNodeField(QString("value_changed"));
Soconnect1094->setProtoField(QString("l_thumb_proximal_changed"));
SoIS1091->addChild(*Soconnect1094);

SoOrientationInterpolator1090->addChild(*SoIS1091);

SoProtoBody603->addChild(*SoOrientationInterpolator1090);

SoROUTE* SoROUTE1095 = new SoROUTE();
SoROUTE1095->setFromField(QString("fraction_changed"));
SoROUTE1095->setFromNode(QString("BehaviorClock"));
SoROUTE1095->setToField(QString("set_fraction"));
SoROUTE1095->setToNode(QString("l_thumb_proximal_OI"));
SoProtoBody603->addChild(*SoROUTE1095);

SoOrientationInterpolator* SoOrientationInterpolator1096 = new SoOrientationInterpolator();
SoOrientationInterpolator1096->setDEF(QString("l_upperarm_OI"));
SoIS* SoIS1097 = new SoIS();
Soconnect* Soconnect1098 = new Soconnect();
Soconnect1098->setNodeField(QString("key"));
Soconnect1098->setProtoField(QString("l_upperarm_key"));
SoIS1097->addChild(*Soconnect1098);

Soconnect* Soconnect1099 = new Soconnect();
Soconnect1099->setNodeField(QString("keyValue"));
Soconnect1099->setProtoField(QString("l_upperarm_keyValue"));
SoIS1097->addChild(*Soconnect1099);

Soconnect* Soconnect1100 = new Soconnect();
Soconnect1100->setNodeField(QString("value_changed"));
Soconnect1100->setProtoField(QString("l_upperarm_changed"));
SoIS1097->addChild(*Soconnect1100);

SoOrientationInterpolator1096->addChild(*SoIS1097);

SoProtoBody603->addChild(*SoOrientationInterpolator1096);

SoROUTE* SoROUTE1101 = new SoROUTE();
SoROUTE1101->setFromField(QString("fraction_changed"));
SoROUTE1101->setFromNode(QString("BehaviorClock"));
SoROUTE1101->setToField(QString("set_fraction"));
SoROUTE1101->setToNode(QString("l_upperarm_OI"));
SoProtoBody603->addChild(*SoROUTE1101);

SoOrientationInterpolator* SoOrientationInterpolator1102 = new SoOrientationInterpolator();
SoOrientationInterpolator1102->setDEF(QString("l_wrist_OI"));
SoIS* SoIS1103 = new SoIS();
Soconnect* Soconnect1104 = new Soconnect();
Soconnect1104->setNodeField(QString("key"));
Soconnect1104->setProtoField(QString("l_wrist_key"));
SoIS1103->addChild(*Soconnect1104);

Soconnect* Soconnect1105 = new Soconnect();
Soconnect1105->setNodeField(QString("keyValue"));
Soconnect1105->setProtoField(QString("l_wrist_keyValue"));
SoIS1103->addChild(*Soconnect1105);

Soconnect* Soconnect1106 = new Soconnect();
Soconnect1106->setNodeField(QString("value_changed"));
Soconnect1106->setProtoField(QString("l_wrist_changed"));
SoIS1103->addChild(*Soconnect1106);

SoOrientationInterpolator1102->addChild(*SoIS1103);

SoProtoBody603->addChild(*SoOrientationInterpolator1102);

SoROUTE* SoROUTE1107 = new SoROUTE();
SoROUTE1107->setFromField(QString("fraction_changed"));
SoROUTE1107->setFromNode(QString("BehaviorClock"));
SoROUTE1107->setToField(QString("set_fraction"));
SoROUTE1107->setToNode(QString("l_wrist_OI"));
SoProtoBody603->addChild(*SoROUTE1107);

SoOrientationInterpolator* SoOrientationInterpolator1108 = new SoOrientationInterpolator();
SoOrientationInterpolator1108->setDEF(QString("pelvis_OI"));
SoIS* SoIS1109 = new SoIS();
Soconnect* Soconnect1110 = new Soconnect();
Soconnect1110->setNodeField(QString("key"));
Soconnect1110->setProtoField(QString("pelvis_key"));
SoIS1109->addChild(*Soconnect1110);

Soconnect* Soconnect1111 = new Soconnect();
Soconnect1111->setNodeField(QString("keyValue"));
Soconnect1111->setProtoField(QString("pelvis_keyValue"));
SoIS1109->addChild(*Soconnect1111);

Soconnect* Soconnect1112 = new Soconnect();
Soconnect1112->setNodeField(QString("value_changed"));
Soconnect1112->setProtoField(QString("pelvis_changed"));
SoIS1109->addChild(*Soconnect1112);

SoOrientationInterpolator1108->addChild(*SoIS1109);

SoProtoBody603->addChild(*SoOrientationInterpolator1108);

SoROUTE* SoROUTE1113 = new SoROUTE();
SoROUTE1113->setFromField(QString("fraction_changed"));
SoROUTE1113->setFromNode(QString("BehaviorClock"));
SoROUTE1113->setToField(QString("set_fraction"));
SoROUTE1113->setToNode(QString("pelvis_OI"));
SoProtoBody603->addChild(*SoROUTE1113);

SoOrientationInterpolator* SoOrientationInterpolator1114 = new SoOrientationInterpolator();
SoOrientationInterpolator1114->setDEF(QString("r_acromioclavicular_OI"));
SoIS* SoIS1115 = new SoIS();
Soconnect* Soconnect1116 = new Soconnect();
Soconnect1116->setNodeField(QString("key"));
Soconnect1116->setProtoField(QString("r_acromioclavicular_key"));
SoIS1115->addChild(*Soconnect1116);

Soconnect* Soconnect1117 = new Soconnect();
Soconnect1117->setNodeField(QString("keyValue"));
Soconnect1117->setProtoField(QString("r_acromioclavicular_keyValue"));
SoIS1115->addChild(*Soconnect1117);

Soconnect* Soconnect1118 = new Soconnect();
Soconnect1118->setNodeField(QString("value_changed"));
Soconnect1118->setProtoField(QString("r_acromioclavicular_changed"));
SoIS1115->addChild(*Soconnect1118);

SoOrientationInterpolator1114->addChild(*SoIS1115);

SoProtoBody603->addChild(*SoOrientationInterpolator1114);

SoROUTE* SoROUTE1119 = new SoROUTE();
SoROUTE1119->setFromField(QString("fraction_changed"));
SoROUTE1119->setFromNode(QString("BehaviorClock"));
SoROUTE1119->setToField(QString("set_fraction"));
SoROUTE1119->setToNode(QString("r_acromioclavicular_OI"));
SoProtoBody603->addChild(*SoROUTE1119);

SoOrientationInterpolator* SoOrientationInterpolator1120 = new SoOrientationInterpolator();
SoOrientationInterpolator1120->setDEF(QString("r_ankle_OI"));
SoIS* SoIS1121 = new SoIS();
Soconnect* Soconnect1122 = new Soconnect();
Soconnect1122->setNodeField(QString("key"));
Soconnect1122->setProtoField(QString("r_ankle_key"));
SoIS1121->addChild(*Soconnect1122);

Soconnect* Soconnect1123 = new Soconnect();
Soconnect1123->setNodeField(QString("keyValue"));
Soconnect1123->setProtoField(QString("r_ankle_keyValue"));
SoIS1121->addChild(*Soconnect1123);

Soconnect* Soconnect1124 = new Soconnect();
Soconnect1124->setNodeField(QString("value_changed"));
Soconnect1124->setProtoField(QString("r_ankle_changed"));
SoIS1121->addChild(*Soconnect1124);

SoOrientationInterpolator1120->addChild(*SoIS1121);

SoProtoBody603->addChild(*SoOrientationInterpolator1120);

SoROUTE* SoROUTE1125 = new SoROUTE();
SoROUTE1125->setFromField(QString("fraction_changed"));
SoROUTE1125->setFromNode(QString("BehaviorClock"));
SoROUTE1125->setToField(QString("set_fraction"));
SoROUTE1125->setToNode(QString("r_ankle_OI"));
SoProtoBody603->addChild(*SoROUTE1125);

SoOrientationInterpolator* SoOrientationInterpolator1126 = new SoOrientationInterpolator();
SoOrientationInterpolator1126->setDEF(QString("r_calf_OI"));
SoIS* SoIS1127 = new SoIS();
Soconnect* Soconnect1128 = new Soconnect();
Soconnect1128->setNodeField(QString("key"));
Soconnect1128->setProtoField(QString("r_calf_key"));
SoIS1127->addChild(*Soconnect1128);

Soconnect* Soconnect1129 = new Soconnect();
Soconnect1129->setNodeField(QString("keyValue"));
Soconnect1129->setProtoField(QString("r_calf_keyValue"));
SoIS1127->addChild(*Soconnect1129);

Soconnect* Soconnect1130 = new Soconnect();
Soconnect1130->setNodeField(QString("value_changed"));
Soconnect1130->setProtoField(QString("r_calf_changed"));
SoIS1127->addChild(*Soconnect1130);

SoOrientationInterpolator1126->addChild(*SoIS1127);

SoProtoBody603->addChild(*SoOrientationInterpolator1126);

SoROUTE* SoROUTE1131 = new SoROUTE();
SoROUTE1131->setFromField(QString("fraction_changed"));
SoROUTE1131->setFromNode(QString("BehaviorClock"));
SoROUTE1131->setToField(QString("set_fraction"));
SoROUTE1131->setToNode(QString("r_calf_OI"));
SoProtoBody603->addChild(*SoROUTE1131);

SoOrientationInterpolator* SoOrientationInterpolator1132 = new SoOrientationInterpolator();
SoOrientationInterpolator1132->setDEF(QString("r_clavicle_OI"));
SoIS* SoIS1133 = new SoIS();
Soconnect* Soconnect1134 = new Soconnect();
Soconnect1134->setNodeField(QString("key"));
Soconnect1134->setProtoField(QString("r_clavicle_key"));
SoIS1133->addChild(*Soconnect1134);

Soconnect* Soconnect1135 = new Soconnect();
Soconnect1135->setNodeField(QString("keyValue"));
Soconnect1135->setProtoField(QString("r_clavicle_keyValue"));
SoIS1133->addChild(*Soconnect1135);

Soconnect* Soconnect1136 = new Soconnect();
Soconnect1136->setNodeField(QString("value_changed"));
Soconnect1136->setProtoField(QString("r_clavicle_changed"));
SoIS1133->addChild(*Soconnect1136);

SoOrientationInterpolator1132->addChild(*SoIS1133);

SoProtoBody603->addChild(*SoOrientationInterpolator1132);

SoROUTE* SoROUTE1137 = new SoROUTE();
SoROUTE1137->setFromField(QString("fraction_changed"));
SoROUTE1137->setFromNode(QString("BehaviorClock"));
SoROUTE1137->setToField(QString("set_fraction"));
SoROUTE1137->setToNode(QString("r_clavicle_OI"));
SoProtoBody603->addChild(*SoROUTE1137);

SoOrientationInterpolator* SoOrientationInterpolator1138 = new SoOrientationInterpolator();
SoOrientationInterpolator1138->setDEF(QString("r_elbow_OI"));
SoIS* SoIS1139 = new SoIS();
Soconnect* Soconnect1140 = new Soconnect();
Soconnect1140->setNodeField(QString("key"));
Soconnect1140->setProtoField(QString("r_elbow_key"));
SoIS1139->addChild(*Soconnect1140);

Soconnect* Soconnect1141 = new Soconnect();
Soconnect1141->setNodeField(QString("keyValue"));
Soconnect1141->setProtoField(QString("r_elbow_keyValue"));
SoIS1139->addChild(*Soconnect1141);

Soconnect* Soconnect1142 = new Soconnect();
Soconnect1142->setNodeField(QString("value_changed"));
Soconnect1142->setProtoField(QString("r_elbow_changed"));
SoIS1139->addChild(*Soconnect1142);

SoOrientationInterpolator1138->addChild(*SoIS1139);

SoProtoBody603->addChild(*SoOrientationInterpolator1138);

SoROUTE* SoROUTE1143 = new SoROUTE();
SoROUTE1143->setFromField(QString("fraction_changed"));
SoROUTE1143->setFromNode(QString("BehaviorClock"));
SoROUTE1143->setToField(QString("set_fraction"));
SoROUTE1143->setToNode(QString("r_elbow_OI"));
SoProtoBody603->addChild(*SoROUTE1143);

SoOrientationInterpolator* SoOrientationInterpolator1144 = new SoOrientationInterpolator();
SoOrientationInterpolator1144->setDEF(QString("r_eyeball_OI"));
SoIS* SoIS1145 = new SoIS();
Soconnect* Soconnect1146 = new Soconnect();
Soconnect1146->setNodeField(QString("key"));
Soconnect1146->setProtoField(QString("r_eyeball_key"));
SoIS1145->addChild(*Soconnect1146);

Soconnect* Soconnect1147 = new Soconnect();
Soconnect1147->setNodeField(QString("keyValue"));
Soconnect1147->setProtoField(QString("r_eyeball_keyValue"));
SoIS1145->addChild(*Soconnect1147);

Soconnect* Soconnect1148 = new Soconnect();
Soconnect1148->setNodeField(QString("value_changed"));
Soconnect1148->setProtoField(QString("r_eyeball_changed"));
SoIS1145->addChild(*Soconnect1148);

SoOrientationInterpolator1144->addChild(*SoIS1145);

SoProtoBody603->addChild(*SoOrientationInterpolator1144);

SoROUTE* SoROUTE1149 = new SoROUTE();
SoROUTE1149->setFromField(QString("fraction_changed"));
SoROUTE1149->setFromNode(QString("BehaviorClock"));
SoROUTE1149->setToField(QString("set_fraction"));
SoROUTE1149->setToNode(QString("r_eyeball_OI"));
SoProtoBody603->addChild(*SoROUTE1149);

SoOrientationInterpolator* SoOrientationInterpolator1150 = new SoOrientationInterpolator();
SoOrientationInterpolator1150->setDEF(QString("r_eyeball_joint_OI"));
SoIS* SoIS1151 = new SoIS();
Soconnect* Soconnect1152 = new Soconnect();
Soconnect1152->setNodeField(QString("key"));
Soconnect1152->setProtoField(QString("r_eyeball_joint_key"));
SoIS1151->addChild(*Soconnect1152);

Soconnect* Soconnect1153 = new Soconnect();
Soconnect1153->setNodeField(QString("keyValue"));
Soconnect1153->setProtoField(QString("r_eyeball_joint_keyValue"));
SoIS1151->addChild(*Soconnect1153);

Soconnect* Soconnect1154 = new Soconnect();
Soconnect1154->setNodeField(QString("value_changed"));
Soconnect1154->setProtoField(QString("r_eyeball_joint_changed"));
SoIS1151->addChild(*Soconnect1154);

SoOrientationInterpolator1150->addChild(*SoIS1151);

SoProtoBody603->addChild(*SoOrientationInterpolator1150);

SoROUTE* SoROUTE1155 = new SoROUTE();
SoROUTE1155->setFromField(QString("fraction_changed"));
SoROUTE1155->setFromNode(QString("BehaviorClock"));
SoROUTE1155->setToField(QString("set_fraction"));
SoROUTE1155->setToNode(QString("r_eyeball_joint_OI"));
SoProtoBody603->addChild(*SoROUTE1155);

SoOrientationInterpolator* SoOrientationInterpolator1156 = new SoOrientationInterpolator();
SoOrientationInterpolator1156->setDEF(QString("r_eyebrow_OI"));
SoIS* SoIS1157 = new SoIS();
Soconnect* Soconnect1158 = new Soconnect();
Soconnect1158->setNodeField(QString("key"));
Soconnect1158->setProtoField(QString("r_eyebrow_key"));
SoIS1157->addChild(*Soconnect1158);

Soconnect* Soconnect1159 = new Soconnect();
Soconnect1159->setNodeField(QString("keyValue"));
Soconnect1159->setProtoField(QString("r_eyebrow_keyValue"));
SoIS1157->addChild(*Soconnect1159);

Soconnect* Soconnect1160 = new Soconnect();
Soconnect1160->setNodeField(QString("value_changed"));
Soconnect1160->setProtoField(QString("r_eyebrow_changed"));
SoIS1157->addChild(*Soconnect1160);

SoOrientationInterpolator1156->addChild(*SoIS1157);

SoProtoBody603->addChild(*SoOrientationInterpolator1156);

SoROUTE* SoROUTE1161 = new SoROUTE();
SoROUTE1161->setFromField(QString("fraction_changed"));
SoROUTE1161->setFromNode(QString("BehaviorClock"));
SoROUTE1161->setToField(QString("set_fraction"));
SoROUTE1161->setToNode(QString("r_eyebrow_OI"));
SoProtoBody603->addChild(*SoROUTE1161);

SoOrientationInterpolator* SoOrientationInterpolator1162 = new SoOrientationInterpolator();
SoOrientationInterpolator1162->setDEF(QString("r_eyebrow_joint_OI"));
SoIS* SoIS1163 = new SoIS();
Soconnect* Soconnect1164 = new Soconnect();
Soconnect1164->setNodeField(QString("key"));
Soconnect1164->setProtoField(QString("r_eyebrow_joint_key"));
SoIS1163->addChild(*Soconnect1164);

Soconnect* Soconnect1165 = new Soconnect();
Soconnect1165->setNodeField(QString("keyValue"));
Soconnect1165->setProtoField(QString("r_eyebrow_joint_keyValue"));
SoIS1163->addChild(*Soconnect1165);

Soconnect* Soconnect1166 = new Soconnect();
Soconnect1166->setNodeField(QString("value_changed"));
Soconnect1166->setProtoField(QString("r_eyebrow_joint_changed"));
SoIS1163->addChild(*Soconnect1166);

SoOrientationInterpolator1162->addChild(*SoIS1163);

SoProtoBody603->addChild(*SoOrientationInterpolator1162);

SoROUTE* SoROUTE1167 = new SoROUTE();
SoROUTE1167->setFromField(QString("fraction_changed"));
SoROUTE1167->setFromNode(QString("BehaviorClock"));
SoROUTE1167->setToField(QString("set_fraction"));
SoROUTE1167->setToNode(QString("r_eyebrow_joint_OI"));
SoProtoBody603->addChild(*SoROUTE1167);

SoOrientationInterpolator* SoOrientationInterpolator1168 = new SoOrientationInterpolator();
SoOrientationInterpolator1168->setDEF(QString("r_eyelid_OI"));
SoIS* SoIS1169 = new SoIS();
Soconnect* Soconnect1170 = new Soconnect();
Soconnect1170->setNodeField(QString("key"));
Soconnect1170->setProtoField(QString("r_eyelid_key"));
SoIS1169->addChild(*Soconnect1170);

Soconnect* Soconnect1171 = new Soconnect();
Soconnect1171->setNodeField(QString("keyValue"));
Soconnect1171->setProtoField(QString("r_eyelid_keyValue"));
SoIS1169->addChild(*Soconnect1171);

Soconnect* Soconnect1172 = new Soconnect();
Soconnect1172->setNodeField(QString("value_changed"));
Soconnect1172->setProtoField(QString("r_eyelid_changed"));
SoIS1169->addChild(*Soconnect1172);

SoOrientationInterpolator1168->addChild(*SoIS1169);

SoProtoBody603->addChild(*SoOrientationInterpolator1168);

SoROUTE* SoROUTE1173 = new SoROUTE();
SoROUTE1173->setFromField(QString("fraction_changed"));
SoROUTE1173->setFromNode(QString("BehaviorClock"));
SoROUTE1173->setToField(QString("set_fraction"));
SoROUTE1173->setToNode(QString("r_eyelid_OI"));
SoProtoBody603->addChild(*SoROUTE1173);

SoOrientationInterpolator* SoOrientationInterpolator1174 = new SoOrientationInterpolator();
SoOrientationInterpolator1174->setDEF(QString("r_eyelid_joint_OI"));
SoIS* SoIS1175 = new SoIS();
Soconnect* Soconnect1176 = new Soconnect();
Soconnect1176->setNodeField(QString("key"));
Soconnect1176->setProtoField(QString("r_eyelid_joint_key"));
SoIS1175->addChild(*Soconnect1176);

Soconnect* Soconnect1177 = new Soconnect();
Soconnect1177->setNodeField(QString("keyValue"));
Soconnect1177->setProtoField(QString("r_eyelid_joint_keyValue"));
SoIS1175->addChild(*Soconnect1177);

Soconnect* Soconnect1178 = new Soconnect();
Soconnect1178->setNodeField(QString("value_changed"));
Soconnect1178->setProtoField(QString("r_eyelid_joint_changed"));
SoIS1175->addChild(*Soconnect1178);

SoOrientationInterpolator1174->addChild(*SoIS1175);

SoProtoBody603->addChild(*SoOrientationInterpolator1174);

SoROUTE* SoROUTE1179 = new SoROUTE();
SoROUTE1179->setFromField(QString("fraction_changed"));
SoROUTE1179->setFromNode(QString("BehaviorClock"));
SoROUTE1179->setToField(QString("set_fraction"));
SoROUTE1179->setToNode(QString("r_eyelid_joint_OI"));
SoProtoBody603->addChild(*SoROUTE1179);

SoOrientationInterpolator* SoOrientationInterpolator1180 = new SoOrientationInterpolator();
SoOrientationInterpolator1180->setDEF(QString("r_forearm_OI"));
SoIS* SoIS1181 = new SoIS();
Soconnect* Soconnect1182 = new Soconnect();
Soconnect1182->setNodeField(QString("key"));
Soconnect1182->setProtoField(QString("r_forearm_key"));
SoIS1181->addChild(*Soconnect1182);

Soconnect* Soconnect1183 = new Soconnect();
Soconnect1183->setNodeField(QString("keyValue"));
Soconnect1183->setProtoField(QString("r_forearm_keyValue"));
SoIS1181->addChild(*Soconnect1183);

Soconnect* Soconnect1184 = new Soconnect();
Soconnect1184->setNodeField(QString("value_changed"));
Soconnect1184->setProtoField(QString("r_forearm_changed"));
SoIS1181->addChild(*Soconnect1184);

SoOrientationInterpolator1180->addChild(*SoIS1181);

SoProtoBody603->addChild(*SoOrientationInterpolator1180);

SoROUTE* SoROUTE1185 = new SoROUTE();
SoROUTE1185->setFromField(QString("fraction_changed"));
SoROUTE1185->setFromNode(QString("BehaviorClock"));
SoROUTE1185->setToField(QString("set_fraction"));
SoROUTE1185->setToNode(QString("r_forearm_OI"));
SoProtoBody603->addChild(*SoROUTE1185);

SoOrientationInterpolator* SoOrientationInterpolator1186 = new SoOrientationInterpolator();
SoOrientationInterpolator1186->setDEF(QString("r_forefoot_OI"));
SoIS* SoIS1187 = new SoIS();
Soconnect* Soconnect1188 = new Soconnect();
Soconnect1188->setNodeField(QString("key"));
Soconnect1188->setProtoField(QString("r_forefoot_key"));
SoIS1187->addChild(*Soconnect1188);

Soconnect* Soconnect1189 = new Soconnect();
Soconnect1189->setNodeField(QString("keyValue"));
Soconnect1189->setProtoField(QString("r_forefoot_keyValue"));
SoIS1187->addChild(*Soconnect1189);

Soconnect* Soconnect1190 = new Soconnect();
Soconnect1190->setNodeField(QString("value_changed"));
Soconnect1190->setProtoField(QString("r_forefoot_changed"));
SoIS1187->addChild(*Soconnect1190);

SoOrientationInterpolator1186->addChild(*SoIS1187);

SoProtoBody603->addChild(*SoOrientationInterpolator1186);

SoROUTE* SoROUTE1191 = new SoROUTE();
SoROUTE1191->setFromField(QString("fraction_changed"));
SoROUTE1191->setFromNode(QString("BehaviorClock"));
SoROUTE1191->setToField(QString("set_fraction"));
SoROUTE1191->setToNode(QString("r_forefoot_OI"));
SoProtoBody603->addChild(*SoROUTE1191);

SoOrientationInterpolator* SoOrientationInterpolator1192 = new SoOrientationInterpolator();
SoOrientationInterpolator1192->setDEF(QString("r_hand_OI"));
SoIS* SoIS1193 = new SoIS();
Soconnect* Soconnect1194 = new Soconnect();
Soconnect1194->setNodeField(QString("key"));
Soconnect1194->setProtoField(QString("r_hand_key"));
SoIS1193->addChild(*Soconnect1194);

Soconnect* Soconnect1195 = new Soconnect();
Soconnect1195->setNodeField(QString("keyValue"));
Soconnect1195->setProtoField(QString("r_hand_keyValue"));
SoIS1193->addChild(*Soconnect1195);

Soconnect* Soconnect1196 = new Soconnect();
Soconnect1196->setNodeField(QString("value_changed"));
Soconnect1196->setProtoField(QString("r_hand_changed"));
SoIS1193->addChild(*Soconnect1196);

SoOrientationInterpolator1192->addChild(*SoIS1193);

SoProtoBody603->addChild(*SoOrientationInterpolator1192);

SoROUTE* SoROUTE1197 = new SoROUTE();
SoROUTE1197->setFromField(QString("fraction_changed"));
SoROUTE1197->setFromNode(QString("BehaviorClock"));
SoROUTE1197->setToField(QString("set_fraction"));
SoROUTE1197->setToNode(QString("r_hand_OI"));
SoProtoBody603->addChild(*SoROUTE1197);

SoOrientationInterpolator* SoOrientationInterpolator1198 = new SoOrientationInterpolator();
SoOrientationInterpolator1198->setDEF(QString("r_hindfoot_OI"));
SoIS* SoIS1199 = new SoIS();
Soconnect* Soconnect1200 = new Soconnect();
Soconnect1200->setNodeField(QString("key"));
Soconnect1200->setProtoField(QString("r_hindfoot_key"));
SoIS1199->addChild(*Soconnect1200);

Soconnect* Soconnect1201 = new Soconnect();
Soconnect1201->setNodeField(QString("keyValue"));
Soconnect1201->setProtoField(QString("r_hindfoot_keyValue"));
SoIS1199->addChild(*Soconnect1201);

Soconnect* Soconnect1202 = new Soconnect();
Soconnect1202->setNodeField(QString("value_changed"));
Soconnect1202->setProtoField(QString("r_hindfoot_changed"));
SoIS1199->addChild(*Soconnect1202);

SoOrientationInterpolator1198->addChild(*SoIS1199);

SoProtoBody603->addChild(*SoOrientationInterpolator1198);

SoROUTE* SoROUTE1203 = new SoROUTE();
SoROUTE1203->setFromField(QString("fraction_changed"));
SoROUTE1203->setFromNode(QString("BehaviorClock"));
SoROUTE1203->setToField(QString("set_fraction"));
SoROUTE1203->setToNode(QString("r_hindfoot_OI"));
SoProtoBody603->addChild(*SoROUTE1203);

SoOrientationInterpolator* SoOrientationInterpolator1204 = new SoOrientationInterpolator();
SoOrientationInterpolator1204->setDEF(QString("r_hip_OI"));
SoIS* SoIS1205 = new SoIS();
Soconnect* Soconnect1206 = new Soconnect();
Soconnect1206->setNodeField(QString("key"));
Soconnect1206->setProtoField(QString("r_hip_key"));
SoIS1205->addChild(*Soconnect1206);

Soconnect* Soconnect1207 = new Soconnect();
Soconnect1207->setNodeField(QString("keyValue"));
Soconnect1207->setProtoField(QString("r_hip_keyValue"));
SoIS1205->addChild(*Soconnect1207);

Soconnect* Soconnect1208 = new Soconnect();
Soconnect1208->setNodeField(QString("value_changed"));
Soconnect1208->setProtoField(QString("r_hip_changed"));
SoIS1205->addChild(*Soconnect1208);

SoOrientationInterpolator1204->addChild(*SoIS1205);

SoProtoBody603->addChild(*SoOrientationInterpolator1204);

SoROUTE* SoROUTE1209 = new SoROUTE();
SoROUTE1209->setFromField(QString("fraction_changed"));
SoROUTE1209->setFromNode(QString("BehaviorClock"));
SoROUTE1209->setToField(QString("set_fraction"));
SoROUTE1209->setToNode(QString("r_hip_OI"));
SoProtoBody603->addChild(*SoROUTE1209);

SoOrientationInterpolator* SoOrientationInterpolator1210 = new SoOrientationInterpolator();
SoOrientationInterpolator1210->setDEF(QString("r_index0_OI"));
SoIS* SoIS1211 = new SoIS();
Soconnect* Soconnect1212 = new Soconnect();
Soconnect1212->setNodeField(QString("key"));
Soconnect1212->setProtoField(QString("r_index0_key"));
SoIS1211->addChild(*Soconnect1212);

Soconnect* Soconnect1213 = new Soconnect();
Soconnect1213->setNodeField(QString("keyValue"));
Soconnect1213->setProtoField(QString("r_index0_keyValue"));
SoIS1211->addChild(*Soconnect1213);

Soconnect* Soconnect1214 = new Soconnect();
Soconnect1214->setNodeField(QString("value_changed"));
Soconnect1214->setProtoField(QString("r_index0_changed"));
SoIS1211->addChild(*Soconnect1214);

SoOrientationInterpolator1210->addChild(*SoIS1211);

SoProtoBody603->addChild(*SoOrientationInterpolator1210);

SoROUTE* SoROUTE1215 = new SoROUTE();
SoROUTE1215->setFromField(QString("fraction_changed"));
SoROUTE1215->setFromNode(QString("BehaviorClock"));
SoROUTE1215->setToField(QString("set_fraction"));
SoROUTE1215->setToNode(QString("r_index0_OI"));
SoProtoBody603->addChild(*SoROUTE1215);

SoOrientationInterpolator* SoOrientationInterpolator1216 = new SoOrientationInterpolator();
SoOrientationInterpolator1216->setDEF(QString("r_index1_OI"));
SoIS* SoIS1217 = new SoIS();
Soconnect* Soconnect1218 = new Soconnect();
Soconnect1218->setNodeField(QString("key"));
Soconnect1218->setProtoField(QString("r_index1_key"));
SoIS1217->addChild(*Soconnect1218);

Soconnect* Soconnect1219 = new Soconnect();
Soconnect1219->setNodeField(QString("keyValue"));
Soconnect1219->setProtoField(QString("r_index1_keyValue"));
SoIS1217->addChild(*Soconnect1219);

Soconnect* Soconnect1220 = new Soconnect();
Soconnect1220->setNodeField(QString("value_changed"));
Soconnect1220->setProtoField(QString("r_index1_changed"));
SoIS1217->addChild(*Soconnect1220);

SoOrientationInterpolator1216->addChild(*SoIS1217);

SoProtoBody603->addChild(*SoOrientationInterpolator1216);

SoROUTE* SoROUTE1221 = new SoROUTE();
SoROUTE1221->setFromField(QString("fraction_changed"));
SoROUTE1221->setFromNode(QString("BehaviorClock"));
SoROUTE1221->setToField(QString("set_fraction"));
SoROUTE1221->setToNode(QString("r_index1_OI"));
SoProtoBody603->addChild(*SoROUTE1221);

SoOrientationInterpolator* SoOrientationInterpolator1222 = new SoOrientationInterpolator();
SoOrientationInterpolator1222->setDEF(QString("r_index2_OI"));
SoIS* SoIS1223 = new SoIS();
Soconnect* Soconnect1224 = new Soconnect();
Soconnect1224->setNodeField(QString("key"));
Soconnect1224->setProtoField(QString("r_index2_key"));
SoIS1223->addChild(*Soconnect1224);

Soconnect* Soconnect1225 = new Soconnect();
Soconnect1225->setNodeField(QString("keyValue"));
Soconnect1225->setProtoField(QString("r_index2_keyValue"));
SoIS1223->addChild(*Soconnect1225);

Soconnect* Soconnect1226 = new Soconnect();
Soconnect1226->setNodeField(QString("value_changed"));
Soconnect1226->setProtoField(QString("r_index2_changed"));
SoIS1223->addChild(*Soconnect1226);

SoOrientationInterpolator1222->addChild(*SoIS1223);

SoProtoBody603->addChild(*SoOrientationInterpolator1222);

SoROUTE* SoROUTE1227 = new SoROUTE();
SoROUTE1227->setFromField(QString("fraction_changed"));
SoROUTE1227->setFromNode(QString("BehaviorClock"));
SoROUTE1227->setToField(QString("set_fraction"));
SoROUTE1227->setToNode(QString("r_index2_OI"));
SoProtoBody603->addChild(*SoROUTE1227);

SoOrientationInterpolator* SoOrientationInterpolator1228 = new SoOrientationInterpolator();
SoOrientationInterpolator1228->setDEF(QString("r_index3_OI"));
SoIS* SoIS1229 = new SoIS();
Soconnect* Soconnect1230 = new Soconnect();
Soconnect1230->setNodeField(QString("key"));
Soconnect1230->setProtoField(QString("r_index3_key"));
SoIS1229->addChild(*Soconnect1230);

Soconnect* Soconnect1231 = new Soconnect();
Soconnect1231->setNodeField(QString("keyValue"));
Soconnect1231->setProtoField(QString("r_index3_keyValue"));
SoIS1229->addChild(*Soconnect1231);

Soconnect* Soconnect1232 = new Soconnect();
Soconnect1232->setNodeField(QString("value_changed"));
Soconnect1232->setProtoField(QString("r_index3_changed"));
SoIS1229->addChild(*Soconnect1232);

SoOrientationInterpolator1228->addChild(*SoIS1229);

SoProtoBody603->addChild(*SoOrientationInterpolator1228);

SoROUTE* SoROUTE1233 = new SoROUTE();
SoROUTE1233->setFromField(QString("fraction_changed"));
SoROUTE1233->setFromNode(QString("BehaviorClock"));
SoROUTE1233->setToField(QString("set_fraction"));
SoROUTE1233->setToNode(QString("r_index3_OI"));
SoProtoBody603->addChild(*SoROUTE1233);

SoOrientationInterpolator* SoOrientationInterpolator1234 = new SoOrientationInterpolator();
SoOrientationInterpolator1234->setDEF(QString("r_index_distal_OI"));
SoIS* SoIS1235 = new SoIS();
Soconnect* Soconnect1236 = new Soconnect();
Soconnect1236->setNodeField(QString("key"));
Soconnect1236->setProtoField(QString("r_index_distal_key"));
SoIS1235->addChild(*Soconnect1236);

Soconnect* Soconnect1237 = new Soconnect();
Soconnect1237->setNodeField(QString("keyValue"));
Soconnect1237->setProtoField(QString("r_index_distal_keyValue"));
SoIS1235->addChild(*Soconnect1237);

Soconnect* Soconnect1238 = new Soconnect();
Soconnect1238->setNodeField(QString("value_changed"));
Soconnect1238->setProtoField(QString("r_index_distal_changed"));
SoIS1235->addChild(*Soconnect1238);

SoOrientationInterpolator1234->addChild(*SoIS1235);

SoProtoBody603->addChild(*SoOrientationInterpolator1234);

SoROUTE* SoROUTE1239 = new SoROUTE();
SoROUTE1239->setFromField(QString("fraction_changed"));
SoROUTE1239->setFromNode(QString("BehaviorClock"));
SoROUTE1239->setToField(QString("set_fraction"));
SoROUTE1239->setToNode(QString("r_index_distal_OI"));
SoProtoBody603->addChild(*SoROUTE1239);

SoOrientationInterpolator* SoOrientationInterpolator1240 = new SoOrientationInterpolator();
SoOrientationInterpolator1240->setDEF(QString("r_index_metacarpal_OI"));
SoIS* SoIS1241 = new SoIS();
Soconnect* Soconnect1242 = new Soconnect();
Soconnect1242->setNodeField(QString("key"));
Soconnect1242->setProtoField(QString("r_index_metacarpal_key"));
SoIS1241->addChild(*Soconnect1242);

Soconnect* Soconnect1243 = new Soconnect();
Soconnect1243->setNodeField(QString("keyValue"));
Soconnect1243->setProtoField(QString("r_index_metacarpal_keyValue"));
SoIS1241->addChild(*Soconnect1243);

Soconnect* Soconnect1244 = new Soconnect();
Soconnect1244->setNodeField(QString("value_changed"));
Soconnect1244->setProtoField(QString("r_index_metacarpal_changed"));
SoIS1241->addChild(*Soconnect1244);

SoOrientationInterpolator1240->addChild(*SoIS1241);

SoProtoBody603->addChild(*SoOrientationInterpolator1240);

SoROUTE* SoROUTE1245 = new SoROUTE();
SoROUTE1245->setFromField(QString("fraction_changed"));
SoROUTE1245->setFromNode(QString("BehaviorClock"));
SoROUTE1245->setToField(QString("set_fraction"));
SoROUTE1245->setToNode(QString("r_index_metacarpal_OI"));
SoProtoBody603->addChild(*SoROUTE1245);

SoOrientationInterpolator* SoOrientationInterpolator1246 = new SoOrientationInterpolator();
SoOrientationInterpolator1246->setDEF(QString("r_index_middle_OI"));
SoIS* SoIS1247 = new SoIS();
Soconnect* Soconnect1248 = new Soconnect();
Soconnect1248->setNodeField(QString("key"));
Soconnect1248->setProtoField(QString("r_index_middle_key"));
SoIS1247->addChild(*Soconnect1248);

Soconnect* Soconnect1249 = new Soconnect();
Soconnect1249->setNodeField(QString("keyValue"));
Soconnect1249->setProtoField(QString("r_index_middle_keyValue"));
SoIS1247->addChild(*Soconnect1249);

Soconnect* Soconnect1250 = new Soconnect();
Soconnect1250->setNodeField(QString("value_changed"));
Soconnect1250->setProtoField(QString("r_index_middle_changed"));
SoIS1247->addChild(*Soconnect1250);

SoOrientationInterpolator1246->addChild(*SoIS1247);

SoProtoBody603->addChild(*SoOrientationInterpolator1246);

SoROUTE* SoROUTE1251 = new SoROUTE();
SoROUTE1251->setFromField(QString("fraction_changed"));
SoROUTE1251->setFromNode(QString("BehaviorClock"));
SoROUTE1251->setToField(QString("set_fraction"));
SoROUTE1251->setToNode(QString("r_index_middle_OI"));
SoProtoBody603->addChild(*SoROUTE1251);

SoOrientationInterpolator* SoOrientationInterpolator1252 = new SoOrientationInterpolator();
SoOrientationInterpolator1252->setDEF(QString("r_index_proximal_OI"));
SoIS* SoIS1253 = new SoIS();
Soconnect* Soconnect1254 = new Soconnect();
Soconnect1254->setNodeField(QString("key"));
Soconnect1254->setProtoField(QString("r_index_proximal_key"));
SoIS1253->addChild(*Soconnect1254);

Soconnect* Soconnect1255 = new Soconnect();
Soconnect1255->setNodeField(QString("keyValue"));
Soconnect1255->setProtoField(QString("r_index_proximal_keyValue"));
SoIS1253->addChild(*Soconnect1255);

Soconnect* Soconnect1256 = new Soconnect();
Soconnect1256->setNodeField(QString("value_changed"));
Soconnect1256->setProtoField(QString("r_index_proximal_changed"));
SoIS1253->addChild(*Soconnect1256);

SoOrientationInterpolator1252->addChild(*SoIS1253);

SoProtoBody603->addChild(*SoOrientationInterpolator1252);

SoROUTE* SoROUTE1257 = new SoROUTE();
SoROUTE1257->setFromField(QString("fraction_changed"));
SoROUTE1257->setFromNode(QString("BehaviorClock"));
SoROUTE1257->setToField(QString("set_fraction"));
SoROUTE1257->setToNode(QString("r_index_proximal_OI"));
SoProtoBody603->addChild(*SoROUTE1257);

SoOrientationInterpolator* SoOrientationInterpolator1258 = new SoOrientationInterpolator();
SoOrientationInterpolator1258->setDEF(QString("r_knee_OI"));
SoIS* SoIS1259 = new SoIS();
Soconnect* Soconnect1260 = new Soconnect();
Soconnect1260->setNodeField(QString("key"));
Soconnect1260->setProtoField(QString("r_knee_key"));
SoIS1259->addChild(*Soconnect1260);

Soconnect* Soconnect1261 = new Soconnect();
Soconnect1261->setNodeField(QString("keyValue"));
Soconnect1261->setProtoField(QString("r_knee_keyValue"));
SoIS1259->addChild(*Soconnect1261);

Soconnect* Soconnect1262 = new Soconnect();
Soconnect1262->setNodeField(QString("value_changed"));
Soconnect1262->setProtoField(QString("r_knee_changed"));
SoIS1259->addChild(*Soconnect1262);

SoOrientationInterpolator1258->addChild(*SoIS1259);

SoProtoBody603->addChild(*SoOrientationInterpolator1258);

SoROUTE* SoROUTE1263 = new SoROUTE();
SoROUTE1263->setFromField(QString("fraction_changed"));
SoROUTE1263->setFromNode(QString("BehaviorClock"));
SoROUTE1263->setToField(QString("set_fraction"));
SoROUTE1263->setToNode(QString("r_knee_OI"));
SoProtoBody603->addChild(*SoROUTE1263);

SoOrientationInterpolator* SoOrientationInterpolator1264 = new SoOrientationInterpolator();
SoOrientationInterpolator1264->setDEF(QString("r_metatarsal_OI"));
SoIS* SoIS1265 = new SoIS();
Soconnect* Soconnect1266 = new Soconnect();
Soconnect1266->setNodeField(QString("key"));
Soconnect1266->setProtoField(QString("r_metatarsal_key"));
SoIS1265->addChild(*Soconnect1266);

Soconnect* Soconnect1267 = new Soconnect();
Soconnect1267->setNodeField(QString("keyValue"));
Soconnect1267->setProtoField(QString("r_metatarsal_keyValue"));
SoIS1265->addChild(*Soconnect1267);

Soconnect* Soconnect1268 = new Soconnect();
Soconnect1268->setNodeField(QString("value_changed"));
Soconnect1268->setProtoField(QString("r_metatarsal_changed"));
SoIS1265->addChild(*Soconnect1268);

SoOrientationInterpolator1264->addChild(*SoIS1265);

SoProtoBody603->addChild(*SoOrientationInterpolator1264);

SoROUTE* SoROUTE1269 = new SoROUTE();
SoROUTE1269->setFromField(QString("fraction_changed"));
SoROUTE1269->setFromNode(QString("BehaviorClock"));
SoROUTE1269->setToField(QString("set_fraction"));
SoROUTE1269->setToNode(QString("r_metatarsal_OI"));
SoProtoBody603->addChild(*SoROUTE1269);

SoOrientationInterpolator* SoOrientationInterpolator1270 = new SoOrientationInterpolator();
SoOrientationInterpolator1270->setDEF(QString("r_middistal_OI"));
SoIS* SoIS1271 = new SoIS();
Soconnect* Soconnect1272 = new Soconnect();
Soconnect1272->setNodeField(QString("key"));
Soconnect1272->setProtoField(QString("r_middistal_key"));
SoIS1271->addChild(*Soconnect1272);

Soconnect* Soconnect1273 = new Soconnect();
Soconnect1273->setNodeField(QString("keyValue"));
Soconnect1273->setProtoField(QString("r_middistal_keyValue"));
SoIS1271->addChild(*Soconnect1273);

Soconnect* Soconnect1274 = new Soconnect();
Soconnect1274->setNodeField(QString("value_changed"));
Soconnect1274->setProtoField(QString("r_middistal_changed"));
SoIS1271->addChild(*Soconnect1274);

SoOrientationInterpolator1270->addChild(*SoIS1271);

SoProtoBody603->addChild(*SoOrientationInterpolator1270);

SoROUTE* SoROUTE1275 = new SoROUTE();
SoROUTE1275->setFromField(QString("fraction_changed"));
SoROUTE1275->setFromNode(QString("BehaviorClock"));
SoROUTE1275->setToField(QString("set_fraction"));
SoROUTE1275->setToNode(QString("r_middistal_OI"));
SoProtoBody603->addChild(*SoROUTE1275);

SoOrientationInterpolator* SoOrientationInterpolator1276 = new SoOrientationInterpolator();
SoOrientationInterpolator1276->setDEF(QString("r_middle0_OI"));
SoIS* SoIS1277 = new SoIS();
Soconnect* Soconnect1278 = new Soconnect();
Soconnect1278->setNodeField(QString("key"));
Soconnect1278->setProtoField(QString("r_middle0_key"));
SoIS1277->addChild(*Soconnect1278);

Soconnect* Soconnect1279 = new Soconnect();
Soconnect1279->setNodeField(QString("keyValue"));
Soconnect1279->setProtoField(QString("r_middle0_keyValue"));
SoIS1277->addChild(*Soconnect1279);

Soconnect* Soconnect1280 = new Soconnect();
Soconnect1280->setNodeField(QString("value_changed"));
Soconnect1280->setProtoField(QString("r_middle0_changed"));
SoIS1277->addChild(*Soconnect1280);

SoOrientationInterpolator1276->addChild(*SoIS1277);

SoProtoBody603->addChild(*SoOrientationInterpolator1276);

SoROUTE* SoROUTE1281 = new SoROUTE();
SoROUTE1281->setFromField(QString("fraction_changed"));
SoROUTE1281->setFromNode(QString("BehaviorClock"));
SoROUTE1281->setToField(QString("set_fraction"));
SoROUTE1281->setToNode(QString("r_middle0_OI"));
SoProtoBody603->addChild(*SoROUTE1281);

SoOrientationInterpolator* SoOrientationInterpolator1282 = new SoOrientationInterpolator();
SoOrientationInterpolator1282->setDEF(QString("r_middle1_OI"));
SoIS* SoIS1283 = new SoIS();
Soconnect* Soconnect1284 = new Soconnect();
Soconnect1284->setNodeField(QString("key"));
Soconnect1284->setProtoField(QString("r_middle1_key"));
SoIS1283->addChild(*Soconnect1284);

Soconnect* Soconnect1285 = new Soconnect();
Soconnect1285->setNodeField(QString("keyValue"));
Soconnect1285->setProtoField(QString("r_middle1_keyValue"));
SoIS1283->addChild(*Soconnect1285);

Soconnect* Soconnect1286 = new Soconnect();
Soconnect1286->setNodeField(QString("value_changed"));
Soconnect1286->setProtoField(QString("r_middle1_changed"));
SoIS1283->addChild(*Soconnect1286);

SoOrientationInterpolator1282->addChild(*SoIS1283);

SoProtoBody603->addChild(*SoOrientationInterpolator1282);

SoROUTE* SoROUTE1287 = new SoROUTE();
SoROUTE1287->setFromField(QString("fraction_changed"));
SoROUTE1287->setFromNode(QString("BehaviorClock"));
SoROUTE1287->setToField(QString("set_fraction"));
SoROUTE1287->setToNode(QString("r_middle1_OI"));
SoProtoBody603->addChild(*SoROUTE1287);

SoOrientationInterpolator* SoOrientationInterpolator1288 = new SoOrientationInterpolator();
SoOrientationInterpolator1288->setDEF(QString("r_middle2_OI"));
SoIS* SoIS1289 = new SoIS();
Soconnect* Soconnect1290 = new Soconnect();
Soconnect1290->setNodeField(QString("key"));
Soconnect1290->setProtoField(QString("r_middle2_key"));
SoIS1289->addChild(*Soconnect1290);

Soconnect* Soconnect1291 = new Soconnect();
Soconnect1291->setNodeField(QString("keyValue"));
Soconnect1291->setProtoField(QString("r_middle2_keyValue"));
SoIS1289->addChild(*Soconnect1291);

Soconnect* Soconnect1292 = new Soconnect();
Soconnect1292->setNodeField(QString("value_changed"));
Soconnect1292->setProtoField(QString("r_middle2_changed"));
SoIS1289->addChild(*Soconnect1292);

SoOrientationInterpolator1288->addChild(*SoIS1289);

SoProtoBody603->addChild(*SoOrientationInterpolator1288);

SoROUTE* SoROUTE1293 = new SoROUTE();
SoROUTE1293->setFromField(QString("fraction_changed"));
SoROUTE1293->setFromNode(QString("BehaviorClock"));
SoROUTE1293->setToField(QString("set_fraction"));
SoROUTE1293->setToNode(QString("r_middle2_OI"));
SoProtoBody603->addChild(*SoROUTE1293);

SoOrientationInterpolator* SoOrientationInterpolator1294 = new SoOrientationInterpolator();
SoOrientationInterpolator1294->setDEF(QString("r_middle3_OI"));
SoIS* SoIS1295 = new SoIS();
Soconnect* Soconnect1296 = new Soconnect();
Soconnect1296->setNodeField(QString("key"));
Soconnect1296->setProtoField(QString("r_middle3_key"));
SoIS1295->addChild(*Soconnect1296);

Soconnect* Soconnect1297 = new Soconnect();
Soconnect1297->setNodeField(QString("keyValue"));
Soconnect1297->setProtoField(QString("r_middle3_keyValue"));
SoIS1295->addChild(*Soconnect1297);

Soconnect* Soconnect1298 = new Soconnect();
Soconnect1298->setNodeField(QString("value_changed"));
Soconnect1298->setProtoField(QString("r_middle3_changed"));
SoIS1295->addChild(*Soconnect1298);

SoOrientationInterpolator1294->addChild(*SoIS1295);

SoProtoBody603->addChild(*SoOrientationInterpolator1294);

SoROUTE* SoROUTE1299 = new SoROUTE();
SoROUTE1299->setFromField(QString("fraction_changed"));
SoROUTE1299->setFromNode(QString("BehaviorClock"));
SoROUTE1299->setToField(QString("set_fraction"));
SoROUTE1299->setToNode(QString("r_middle3_OI"));
SoProtoBody603->addChild(*SoROUTE1299);

SoOrientationInterpolator* SoOrientationInterpolator1300 = new SoOrientationInterpolator();
SoOrientationInterpolator1300->setDEF(QString("r_middle_distal_OI"));
SoIS* SoIS1301 = new SoIS();
Soconnect* Soconnect1302 = new Soconnect();
Soconnect1302->setNodeField(QString("key"));
Soconnect1302->setProtoField(QString("r_middle_distal_key"));
SoIS1301->addChild(*Soconnect1302);

Soconnect* Soconnect1303 = new Soconnect();
Soconnect1303->setNodeField(QString("keyValue"));
Soconnect1303->setProtoField(QString("r_middle_distal_keyValue"));
SoIS1301->addChild(*Soconnect1303);

Soconnect* Soconnect1304 = new Soconnect();
Soconnect1304->setNodeField(QString("value_changed"));
Soconnect1304->setProtoField(QString("r_middle_distal_changed"));
SoIS1301->addChild(*Soconnect1304);

SoOrientationInterpolator1300->addChild(*SoIS1301);

SoProtoBody603->addChild(*SoOrientationInterpolator1300);

SoROUTE* SoROUTE1305 = new SoROUTE();
SoROUTE1305->setFromField(QString("fraction_changed"));
SoROUTE1305->setFromNode(QString("BehaviorClock"));
SoROUTE1305->setToField(QString("set_fraction"));
SoROUTE1305->setToNode(QString("r_middle_distal_OI"));
SoProtoBody603->addChild(*SoROUTE1305);

SoOrientationInterpolator* SoOrientationInterpolator1306 = new SoOrientationInterpolator();
SoOrientationInterpolator1306->setDEF(QString("r_middle_metacarpal_OI"));
SoIS* SoIS1307 = new SoIS();
Soconnect* Soconnect1308 = new Soconnect();
Soconnect1308->setNodeField(QString("key"));
Soconnect1308->setProtoField(QString("r_middle_metacarpal_key"));
SoIS1307->addChild(*Soconnect1308);

Soconnect* Soconnect1309 = new Soconnect();
Soconnect1309->setNodeField(QString("keyValue"));
Soconnect1309->setProtoField(QString("r_middle_metacarpal_keyValue"));
SoIS1307->addChild(*Soconnect1309);

Soconnect* Soconnect1310 = new Soconnect();
Soconnect1310->setNodeField(QString("value_changed"));
Soconnect1310->setProtoField(QString("r_middle_metacarpal_changed"));
SoIS1307->addChild(*Soconnect1310);

SoOrientationInterpolator1306->addChild(*SoIS1307);

SoProtoBody603->addChild(*SoOrientationInterpolator1306);

SoROUTE* SoROUTE1311 = new SoROUTE();
SoROUTE1311->setFromField(QString("fraction_changed"));
SoROUTE1311->setFromNode(QString("BehaviorClock"));
SoROUTE1311->setToField(QString("set_fraction"));
SoROUTE1311->setToNode(QString("r_middle_metacarpal_OI"));
SoProtoBody603->addChild(*SoROUTE1311);

SoOrientationInterpolator* SoOrientationInterpolator1312 = new SoOrientationInterpolator();
SoOrientationInterpolator1312->setDEF(QString("r_middle_middle_OI"));
SoIS* SoIS1313 = new SoIS();
Soconnect* Soconnect1314 = new Soconnect();
Soconnect1314->setNodeField(QString("key"));
Soconnect1314->setProtoField(QString("r_middle_middle_key"));
SoIS1313->addChild(*Soconnect1314);

Soconnect* Soconnect1315 = new Soconnect();
Soconnect1315->setNodeField(QString("keyValue"));
Soconnect1315->setProtoField(QString("r_middle_middle_keyValue"));
SoIS1313->addChild(*Soconnect1315);

Soconnect* Soconnect1316 = new Soconnect();
Soconnect1316->setNodeField(QString("value_changed"));
Soconnect1316->setProtoField(QString("r_middle_middle_changed"));
SoIS1313->addChild(*Soconnect1316);

SoOrientationInterpolator1312->addChild(*SoIS1313);

SoProtoBody603->addChild(*SoOrientationInterpolator1312);

SoROUTE* SoROUTE1317 = new SoROUTE();
SoROUTE1317->setFromField(QString("fraction_changed"));
SoROUTE1317->setFromNode(QString("BehaviorClock"));
SoROUTE1317->setToField(QString("set_fraction"));
SoROUTE1317->setToNode(QString("r_middle_middle_OI"));
SoProtoBody603->addChild(*SoROUTE1317);

SoOrientationInterpolator* SoOrientationInterpolator1318 = new SoOrientationInterpolator();
SoOrientationInterpolator1318->setDEF(QString("r_middle_proximal_OI"));
SoIS* SoIS1319 = new SoIS();
Soconnect* Soconnect1320 = new Soconnect();
Soconnect1320->setNodeField(QString("key"));
Soconnect1320->setProtoField(QString("r_middle_proximal_key"));
SoIS1319->addChild(*Soconnect1320);

Soconnect* Soconnect1321 = new Soconnect();
Soconnect1321->setNodeField(QString("keyValue"));
Soconnect1321->setProtoField(QString("r_middle_proximal_keyValue"));
SoIS1319->addChild(*Soconnect1321);

Soconnect* Soconnect1322 = new Soconnect();
Soconnect1322->setNodeField(QString("value_changed"));
Soconnect1322->setProtoField(QString("r_middle_proximal_changed"));
SoIS1319->addChild(*Soconnect1322);

SoOrientationInterpolator1318->addChild(*SoIS1319);

SoProtoBody603->addChild(*SoOrientationInterpolator1318);

SoROUTE* SoROUTE1323 = new SoROUTE();
SoROUTE1323->setFromField(QString("fraction_changed"));
SoROUTE1323->setFromNode(QString("BehaviorClock"));
SoROUTE1323->setToField(QString("set_fraction"));
SoROUTE1323->setToNode(QString("r_middle_proximal_OI"));
SoProtoBody603->addChild(*SoROUTE1323);

SoOrientationInterpolator* SoOrientationInterpolator1324 = new SoOrientationInterpolator();
SoOrientationInterpolator1324->setDEF(QString("r_midproximal_OI"));
SoIS* SoIS1325 = new SoIS();
Soconnect* Soconnect1326 = new Soconnect();
Soconnect1326->setNodeField(QString("key"));
Soconnect1326->setProtoField(QString("r_midproximal_key"));
SoIS1325->addChild(*Soconnect1326);

Soconnect* Soconnect1327 = new Soconnect();
Soconnect1327->setNodeField(QString("keyValue"));
Soconnect1327->setProtoField(QString("r_midproximal_keyValue"));
SoIS1325->addChild(*Soconnect1327);

Soconnect* Soconnect1328 = new Soconnect();
Soconnect1328->setNodeField(QString("value_changed"));
Soconnect1328->setProtoField(QString("r_midproximal_changed"));
SoIS1325->addChild(*Soconnect1328);

SoOrientationInterpolator1324->addChild(*SoIS1325);

SoProtoBody603->addChild(*SoOrientationInterpolator1324);

SoROUTE* SoROUTE1329 = new SoROUTE();
SoROUTE1329->setFromField(QString("fraction_changed"));
SoROUTE1329->setFromNode(QString("BehaviorClock"));
SoROUTE1329->setToField(QString("set_fraction"));
SoROUTE1329->setToNode(QString("r_midproximal_OI"));
SoProtoBody603->addChild(*SoROUTE1329);

SoOrientationInterpolator* SoOrientationInterpolator1330 = new SoOrientationInterpolator();
SoOrientationInterpolator1330->setDEF(QString("r_midtarsal_OI"));
SoIS* SoIS1331 = new SoIS();
Soconnect* Soconnect1332 = new Soconnect();
Soconnect1332->setNodeField(QString("key"));
Soconnect1332->setProtoField(QString("r_midtarsal_key"));
SoIS1331->addChild(*Soconnect1332);

Soconnect* Soconnect1333 = new Soconnect();
Soconnect1333->setNodeField(QString("keyValue"));
Soconnect1333->setProtoField(QString("r_midtarsal_keyValue"));
SoIS1331->addChild(*Soconnect1333);

Soconnect* Soconnect1334 = new Soconnect();
Soconnect1334->setNodeField(QString("value_changed"));
Soconnect1334->setProtoField(QString("r_midtarsal_changed"));
SoIS1331->addChild(*Soconnect1334);

SoOrientationInterpolator1330->addChild(*SoIS1331);

SoProtoBody603->addChild(*SoOrientationInterpolator1330);

SoROUTE* SoROUTE1335 = new SoROUTE();
SoROUTE1335->setFromField(QString("fraction_changed"));
SoROUTE1335->setFromNode(QString("BehaviorClock"));
SoROUTE1335->setToField(QString("set_fraction"));
SoROUTE1335->setToNode(QString("r_midtarsal_OI"));
SoProtoBody603->addChild(*SoROUTE1335);

SoOrientationInterpolator* SoOrientationInterpolator1336 = new SoOrientationInterpolator();
SoOrientationInterpolator1336->setDEF(QString("r_pinky0_OI"));
SoIS* SoIS1337 = new SoIS();
Soconnect* Soconnect1338 = new Soconnect();
Soconnect1338->setNodeField(QString("key"));
Soconnect1338->setProtoField(QString("r_pinky0_key"));
SoIS1337->addChild(*Soconnect1338);

Soconnect* Soconnect1339 = new Soconnect();
Soconnect1339->setNodeField(QString("keyValue"));
Soconnect1339->setProtoField(QString("r_pinky0_keyValue"));
SoIS1337->addChild(*Soconnect1339);

Soconnect* Soconnect1340 = new Soconnect();
Soconnect1340->setNodeField(QString("value_changed"));
Soconnect1340->setProtoField(QString("r_pinky0_changed"));
SoIS1337->addChild(*Soconnect1340);

SoOrientationInterpolator1336->addChild(*SoIS1337);

SoProtoBody603->addChild(*SoOrientationInterpolator1336);

SoROUTE* SoROUTE1341 = new SoROUTE();
SoROUTE1341->setFromField(QString("fraction_changed"));
SoROUTE1341->setFromNode(QString("BehaviorClock"));
SoROUTE1341->setToField(QString("set_fraction"));
SoROUTE1341->setToNode(QString("r_pinky0_OI"));
SoProtoBody603->addChild(*SoROUTE1341);

SoOrientationInterpolator* SoOrientationInterpolator1342 = new SoOrientationInterpolator();
SoOrientationInterpolator1342->setDEF(QString("r_pinky1_OI"));
SoIS* SoIS1343 = new SoIS();
Soconnect* Soconnect1344 = new Soconnect();
Soconnect1344->setNodeField(QString("key"));
Soconnect1344->setProtoField(QString("r_pinky1_key"));
SoIS1343->addChild(*Soconnect1344);

Soconnect* Soconnect1345 = new Soconnect();
Soconnect1345->setNodeField(QString("keyValue"));
Soconnect1345->setProtoField(QString("r_pinky1_keyValue"));
SoIS1343->addChild(*Soconnect1345);

Soconnect* Soconnect1346 = new Soconnect();
Soconnect1346->setNodeField(QString("value_changed"));
Soconnect1346->setProtoField(QString("r_pinky1_changed"));
SoIS1343->addChild(*Soconnect1346);

SoOrientationInterpolator1342->addChild(*SoIS1343);

SoProtoBody603->addChild(*SoOrientationInterpolator1342);

SoROUTE* SoROUTE1347 = new SoROUTE();
SoROUTE1347->setFromField(QString("fraction_changed"));
SoROUTE1347->setFromNode(QString("BehaviorClock"));
SoROUTE1347->setToField(QString("set_fraction"));
SoROUTE1347->setToNode(QString("r_pinky1_OI"));
SoProtoBody603->addChild(*SoROUTE1347);

SoOrientationInterpolator* SoOrientationInterpolator1348 = new SoOrientationInterpolator();
SoOrientationInterpolator1348->setDEF(QString("r_pinky2_OI"));
SoIS* SoIS1349 = new SoIS();
Soconnect* Soconnect1350 = new Soconnect();
Soconnect1350->setNodeField(QString("key"));
Soconnect1350->setProtoField(QString("r_pinky2_key"));
SoIS1349->addChild(*Soconnect1350);

Soconnect* Soconnect1351 = new Soconnect();
Soconnect1351->setNodeField(QString("keyValue"));
Soconnect1351->setProtoField(QString("r_pinky2_keyValue"));
SoIS1349->addChild(*Soconnect1351);

Soconnect* Soconnect1352 = new Soconnect();
Soconnect1352->setNodeField(QString("value_changed"));
Soconnect1352->setProtoField(QString("r_pinky2_changed"));
SoIS1349->addChild(*Soconnect1352);

SoOrientationInterpolator1348->addChild(*SoIS1349);

SoProtoBody603->addChild(*SoOrientationInterpolator1348);

SoROUTE* SoROUTE1353 = new SoROUTE();
SoROUTE1353->setFromField(QString("fraction_changed"));
SoROUTE1353->setFromNode(QString("BehaviorClock"));
SoROUTE1353->setToField(QString("set_fraction"));
SoROUTE1353->setToNode(QString("r_pinky2_OI"));
SoProtoBody603->addChild(*SoROUTE1353);

SoOrientationInterpolator* SoOrientationInterpolator1354 = new SoOrientationInterpolator();
SoOrientationInterpolator1354->setDEF(QString("r_pinky3_OI"));
SoIS* SoIS1355 = new SoIS();
Soconnect* Soconnect1356 = new Soconnect();
Soconnect1356->setNodeField(QString("key"));
Soconnect1356->setProtoField(QString("r_pinky3_key"));
SoIS1355->addChild(*Soconnect1356);

Soconnect* Soconnect1357 = new Soconnect();
Soconnect1357->setNodeField(QString("keyValue"));
Soconnect1357->setProtoField(QString("r_pinky3_keyValue"));
SoIS1355->addChild(*Soconnect1357);

Soconnect* Soconnect1358 = new Soconnect();
Soconnect1358->setNodeField(QString("value_changed"));
Soconnect1358->setProtoField(QString("r_pinky3_changed"));
SoIS1355->addChild(*Soconnect1358);

SoOrientationInterpolator1354->addChild(*SoIS1355);

SoProtoBody603->addChild(*SoOrientationInterpolator1354);

SoROUTE* SoROUTE1359 = new SoROUTE();
SoROUTE1359->setFromField(QString("fraction_changed"));
SoROUTE1359->setFromNode(QString("BehaviorClock"));
SoROUTE1359->setToField(QString("set_fraction"));
SoROUTE1359->setToNode(QString("r_pinky3_OI"));
SoProtoBody603->addChild(*SoROUTE1359);

SoOrientationInterpolator* SoOrientationInterpolator1360 = new SoOrientationInterpolator();
SoOrientationInterpolator1360->setDEF(QString("r_pinky_distal_OI"));
SoIS* SoIS1361 = new SoIS();
Soconnect* Soconnect1362 = new Soconnect();
Soconnect1362->setNodeField(QString("key"));
Soconnect1362->setProtoField(QString("r_pinky_distal_key"));
SoIS1361->addChild(*Soconnect1362);

Soconnect* Soconnect1363 = new Soconnect();
Soconnect1363->setNodeField(QString("keyValue"));
Soconnect1363->setProtoField(QString("r_pinky_distal_keyValue"));
SoIS1361->addChild(*Soconnect1363);

Soconnect* Soconnect1364 = new Soconnect();
Soconnect1364->setNodeField(QString("value_changed"));
Soconnect1364->setProtoField(QString("r_pinky_distal_changed"));
SoIS1361->addChild(*Soconnect1364);

SoOrientationInterpolator1360->addChild(*SoIS1361);

SoProtoBody603->addChild(*SoOrientationInterpolator1360);

SoROUTE* SoROUTE1365 = new SoROUTE();
SoROUTE1365->setFromField(QString("fraction_changed"));
SoROUTE1365->setFromNode(QString("BehaviorClock"));
SoROUTE1365->setToField(QString("set_fraction"));
SoROUTE1365->setToNode(QString("r_pinky_distal_OI"));
SoProtoBody603->addChild(*SoROUTE1365);

SoOrientationInterpolator* SoOrientationInterpolator1366 = new SoOrientationInterpolator();
SoOrientationInterpolator1366->setDEF(QString("r_pinky_metacarpal_OI"));
SoIS* SoIS1367 = new SoIS();
Soconnect* Soconnect1368 = new Soconnect();
Soconnect1368->setNodeField(QString("key"));
Soconnect1368->setProtoField(QString("r_pinky_metacarpal_key"));
SoIS1367->addChild(*Soconnect1368);

Soconnect* Soconnect1369 = new Soconnect();
Soconnect1369->setNodeField(QString("keyValue"));
Soconnect1369->setProtoField(QString("r_pinky_metacarpal_keyValue"));
SoIS1367->addChild(*Soconnect1369);

Soconnect* Soconnect1370 = new Soconnect();
Soconnect1370->setNodeField(QString("value_changed"));
Soconnect1370->setProtoField(QString("r_pinky_metacarpal_changed"));
SoIS1367->addChild(*Soconnect1370);

SoOrientationInterpolator1366->addChild(*SoIS1367);

SoProtoBody603->addChild(*SoOrientationInterpolator1366);

SoROUTE* SoROUTE1371 = new SoROUTE();
SoROUTE1371->setFromField(QString("fraction_changed"));
SoROUTE1371->setFromNode(QString("BehaviorClock"));
SoROUTE1371->setToField(QString("set_fraction"));
SoROUTE1371->setToNode(QString("r_pinky_metacarpal_OI"));
SoProtoBody603->addChild(*SoROUTE1371);

SoOrientationInterpolator* SoOrientationInterpolator1372 = new SoOrientationInterpolator();
SoOrientationInterpolator1372->setDEF(QString("r_pinky_middle_OI"));
SoIS* SoIS1373 = new SoIS();
Soconnect* Soconnect1374 = new Soconnect();
Soconnect1374->setNodeField(QString("key"));
Soconnect1374->setProtoField(QString("r_pinky_middle_key"));
SoIS1373->addChild(*Soconnect1374);

Soconnect* Soconnect1375 = new Soconnect();
Soconnect1375->setNodeField(QString("keyValue"));
Soconnect1375->setProtoField(QString("r_pinky_middle_keyValue"));
SoIS1373->addChild(*Soconnect1375);

Soconnect* Soconnect1376 = new Soconnect();
Soconnect1376->setNodeField(QString("value_changed"));
Soconnect1376->setProtoField(QString("r_pinky_middle_changed"));
SoIS1373->addChild(*Soconnect1376);

SoOrientationInterpolator1372->addChild(*SoIS1373);

SoProtoBody603->addChild(*SoOrientationInterpolator1372);

SoROUTE* SoROUTE1377 = new SoROUTE();
SoROUTE1377->setFromField(QString("fraction_changed"));
SoROUTE1377->setFromNode(QString("BehaviorClock"));
SoROUTE1377->setToField(QString("set_fraction"));
SoROUTE1377->setToNode(QString("r_pinky_middle_OI"));
SoProtoBody603->addChild(*SoROUTE1377);

SoOrientationInterpolator* SoOrientationInterpolator1378 = new SoOrientationInterpolator();
SoOrientationInterpolator1378->setDEF(QString("r_pinky_proximal_OI"));
SoIS* SoIS1379 = new SoIS();
Soconnect* Soconnect1380 = new Soconnect();
Soconnect1380->setNodeField(QString("key"));
Soconnect1380->setProtoField(QString("r_pinky_proximal_key"));
SoIS1379->addChild(*Soconnect1380);

Soconnect* Soconnect1381 = new Soconnect();
Soconnect1381->setNodeField(QString("keyValue"));
Soconnect1381->setProtoField(QString("r_pinky_proximal_keyValue"));
SoIS1379->addChild(*Soconnect1381);

Soconnect* Soconnect1382 = new Soconnect();
Soconnect1382->setNodeField(QString("value_changed"));
Soconnect1382->setProtoField(QString("r_pinky_proximal_changed"));
SoIS1379->addChild(*Soconnect1382);

SoOrientationInterpolator1378->addChild(*SoIS1379);

SoProtoBody603->addChild(*SoOrientationInterpolator1378);

SoROUTE* SoROUTE1383 = new SoROUTE();
SoROUTE1383->setFromField(QString("fraction_changed"));
SoROUTE1383->setFromNode(QString("BehaviorClock"));
SoROUTE1383->setToField(QString("set_fraction"));
SoROUTE1383->setToNode(QString("r_pinky_proximal_OI"));
SoProtoBody603->addChild(*SoROUTE1383);

SoOrientationInterpolator* SoOrientationInterpolator1384 = new SoOrientationInterpolator();
SoOrientationInterpolator1384->setDEF(QString("r_ring0_OI"));
SoIS* SoIS1385 = new SoIS();
Soconnect* Soconnect1386 = new Soconnect();
Soconnect1386->setNodeField(QString("key"));
Soconnect1386->setProtoField(QString("r_ring0_key"));
SoIS1385->addChild(*Soconnect1386);

Soconnect* Soconnect1387 = new Soconnect();
Soconnect1387->setNodeField(QString("keyValue"));
Soconnect1387->setProtoField(QString("r_ring0_keyValue"));
SoIS1385->addChild(*Soconnect1387);

Soconnect* Soconnect1388 = new Soconnect();
Soconnect1388->setNodeField(QString("value_changed"));
Soconnect1388->setProtoField(QString("r_ring0_changed"));
SoIS1385->addChild(*Soconnect1388);

SoOrientationInterpolator1384->addChild(*SoIS1385);

SoProtoBody603->addChild(*SoOrientationInterpolator1384);

SoROUTE* SoROUTE1389 = new SoROUTE();
SoROUTE1389->setFromField(QString("fraction_changed"));
SoROUTE1389->setFromNode(QString("BehaviorClock"));
SoROUTE1389->setToField(QString("set_fraction"));
SoROUTE1389->setToNode(QString("r_ring0_OI"));
SoProtoBody603->addChild(*SoROUTE1389);

SoOrientationInterpolator* SoOrientationInterpolator1390 = new SoOrientationInterpolator();
SoOrientationInterpolator1390->setDEF(QString("r_ring1_OI"));
SoIS* SoIS1391 = new SoIS();
Soconnect* Soconnect1392 = new Soconnect();
Soconnect1392->setNodeField(QString("key"));
Soconnect1392->setProtoField(QString("r_ring1_key"));
SoIS1391->addChild(*Soconnect1392);

Soconnect* Soconnect1393 = new Soconnect();
Soconnect1393->setNodeField(QString("keyValue"));
Soconnect1393->setProtoField(QString("r_ring1_keyValue"));
SoIS1391->addChild(*Soconnect1393);

Soconnect* Soconnect1394 = new Soconnect();
Soconnect1394->setNodeField(QString("value_changed"));
Soconnect1394->setProtoField(QString("r_ring1_changed"));
SoIS1391->addChild(*Soconnect1394);

SoOrientationInterpolator1390->addChild(*SoIS1391);

SoProtoBody603->addChild(*SoOrientationInterpolator1390);

SoROUTE* SoROUTE1395 = new SoROUTE();
SoROUTE1395->setFromField(QString("fraction_changed"));
SoROUTE1395->setFromNode(QString("BehaviorClock"));
SoROUTE1395->setToField(QString("set_fraction"));
SoROUTE1395->setToNode(QString("r_ring1_OI"));
SoProtoBody603->addChild(*SoROUTE1395);

SoOrientationInterpolator* SoOrientationInterpolator1396 = new SoOrientationInterpolator();
SoOrientationInterpolator1396->setDEF(QString("r_ring2_OI"));
SoIS* SoIS1397 = new SoIS();
Soconnect* Soconnect1398 = new Soconnect();
Soconnect1398->setNodeField(QString("key"));
Soconnect1398->setProtoField(QString("r_ring2_key"));
SoIS1397->addChild(*Soconnect1398);

Soconnect* Soconnect1399 = new Soconnect();
Soconnect1399->setNodeField(QString("keyValue"));
Soconnect1399->setProtoField(QString("r_ring2_keyValue"));
SoIS1397->addChild(*Soconnect1399);

Soconnect* Soconnect1400 = new Soconnect();
Soconnect1400->setNodeField(QString("value_changed"));
Soconnect1400->setProtoField(QString("r_ring2_changed"));
SoIS1397->addChild(*Soconnect1400);

SoOrientationInterpolator1396->addChild(*SoIS1397);

SoProtoBody603->addChild(*SoOrientationInterpolator1396);

SoROUTE* SoROUTE1401 = new SoROUTE();
SoROUTE1401->setFromField(QString("fraction_changed"));
SoROUTE1401->setFromNode(QString("BehaviorClock"));
SoROUTE1401->setToField(QString("set_fraction"));
SoROUTE1401->setToNode(QString("r_ring2_OI"));
SoProtoBody603->addChild(*SoROUTE1401);

SoOrientationInterpolator* SoOrientationInterpolator1402 = new SoOrientationInterpolator();
SoOrientationInterpolator1402->setDEF(QString("r_ring3_OI"));
SoIS* SoIS1403 = new SoIS();
Soconnect* Soconnect1404 = new Soconnect();
Soconnect1404->setNodeField(QString("key"));
Soconnect1404->setProtoField(QString("r_ring3_key"));
SoIS1403->addChild(*Soconnect1404);

Soconnect* Soconnect1405 = new Soconnect();
Soconnect1405->setNodeField(QString("keyValue"));
Soconnect1405->setProtoField(QString("r_ring3_keyValue"));
SoIS1403->addChild(*Soconnect1405);

Soconnect* Soconnect1406 = new Soconnect();
Soconnect1406->setNodeField(QString("value_changed"));
Soconnect1406->setProtoField(QString("r_ring3_changed"));
SoIS1403->addChild(*Soconnect1406);

SoOrientationInterpolator1402->addChild(*SoIS1403);

SoProtoBody603->addChild(*SoOrientationInterpolator1402);

SoROUTE* SoROUTE1407 = new SoROUTE();
SoROUTE1407->setFromField(QString("fraction_changed"));
SoROUTE1407->setFromNode(QString("BehaviorClock"));
SoROUTE1407->setToField(QString("set_fraction"));
SoROUTE1407->setToNode(QString("r_ring3_OI"));
SoProtoBody603->addChild(*SoROUTE1407);

SoOrientationInterpolator* SoOrientationInterpolator1408 = new SoOrientationInterpolator();
SoOrientationInterpolator1408->setDEF(QString("r_ring_distal_OI"));
SoIS* SoIS1409 = new SoIS();
Soconnect* Soconnect1410 = new Soconnect();
Soconnect1410->setNodeField(QString("key"));
Soconnect1410->setProtoField(QString("r_ring_distal_key"));
SoIS1409->addChild(*Soconnect1410);

Soconnect* Soconnect1411 = new Soconnect();
Soconnect1411->setNodeField(QString("keyValue"));
Soconnect1411->setProtoField(QString("r_ring_distal_keyValue"));
SoIS1409->addChild(*Soconnect1411);

Soconnect* Soconnect1412 = new Soconnect();
Soconnect1412->setNodeField(QString("value_changed"));
Soconnect1412->setProtoField(QString("r_ring_distal_changed"));
SoIS1409->addChild(*Soconnect1412);

SoOrientationInterpolator1408->addChild(*SoIS1409);

SoProtoBody603->addChild(*SoOrientationInterpolator1408);

SoROUTE* SoROUTE1413 = new SoROUTE();
SoROUTE1413->setFromField(QString("fraction_changed"));
SoROUTE1413->setFromNode(QString("BehaviorClock"));
SoROUTE1413->setToField(QString("set_fraction"));
SoROUTE1413->setToNode(QString("r_ring_distal_OI"));
SoProtoBody603->addChild(*SoROUTE1413);

SoOrientationInterpolator* SoOrientationInterpolator1414 = new SoOrientationInterpolator();
SoOrientationInterpolator1414->setDEF(QString("r_ring_metacarpal_OI"));
SoIS* SoIS1415 = new SoIS();
Soconnect* Soconnect1416 = new Soconnect();
Soconnect1416->setNodeField(QString("key"));
Soconnect1416->setProtoField(QString("r_ring_metacarpal_key"));
SoIS1415->addChild(*Soconnect1416);

Soconnect* Soconnect1417 = new Soconnect();
Soconnect1417->setNodeField(QString("keyValue"));
Soconnect1417->setProtoField(QString("r_ring_metacarpal_keyValue"));
SoIS1415->addChild(*Soconnect1417);

Soconnect* Soconnect1418 = new Soconnect();
Soconnect1418->setNodeField(QString("value_changed"));
Soconnect1418->setProtoField(QString("r_ring_metacarpal_changed"));
SoIS1415->addChild(*Soconnect1418);

SoOrientationInterpolator1414->addChild(*SoIS1415);

SoProtoBody603->addChild(*SoOrientationInterpolator1414);

SoROUTE* SoROUTE1419 = new SoROUTE();
SoROUTE1419->setFromField(QString("fraction_changed"));
SoROUTE1419->setFromNode(QString("BehaviorClock"));
SoROUTE1419->setToField(QString("set_fraction"));
SoROUTE1419->setToNode(QString("r_ring_metacarpal_OI"));
SoProtoBody603->addChild(*SoROUTE1419);

SoOrientationInterpolator* SoOrientationInterpolator1420 = new SoOrientationInterpolator();
SoOrientationInterpolator1420->setDEF(QString("r_ring_middle_OI"));
SoIS* SoIS1421 = new SoIS();
Soconnect* Soconnect1422 = new Soconnect();
Soconnect1422->setNodeField(QString("key"));
Soconnect1422->setProtoField(QString("r_ring_middle_key"));
SoIS1421->addChild(*Soconnect1422);

Soconnect* Soconnect1423 = new Soconnect();
Soconnect1423->setNodeField(QString("keyValue"));
Soconnect1423->setProtoField(QString("r_ring_middle_keyValue"));
SoIS1421->addChild(*Soconnect1423);

Soconnect* Soconnect1424 = new Soconnect();
Soconnect1424->setNodeField(QString("value_changed"));
Soconnect1424->setProtoField(QString("r_ring_middle_changed"));
SoIS1421->addChild(*Soconnect1424);

SoOrientationInterpolator1420->addChild(*SoIS1421);

SoProtoBody603->addChild(*SoOrientationInterpolator1420);

SoROUTE* SoROUTE1425 = new SoROUTE();
SoROUTE1425->setFromField(QString("fraction_changed"));
SoROUTE1425->setFromNode(QString("BehaviorClock"));
SoROUTE1425->setToField(QString("set_fraction"));
SoROUTE1425->setToNode(QString("r_ring_middle_OI"));
SoProtoBody603->addChild(*SoROUTE1425);

SoOrientationInterpolator* SoOrientationInterpolator1426 = new SoOrientationInterpolator();
SoOrientationInterpolator1426->setDEF(QString("r_ring_proximal_OI"));
SoIS* SoIS1427 = new SoIS();
Soconnect* Soconnect1428 = new Soconnect();
Soconnect1428->setNodeField(QString("key"));
Soconnect1428->setProtoField(QString("r_ring_proximal_key"));
SoIS1427->addChild(*Soconnect1428);

Soconnect* Soconnect1429 = new Soconnect();
Soconnect1429->setNodeField(QString("keyValue"));
Soconnect1429->setProtoField(QString("r_ring_proximal_keyValue"));
SoIS1427->addChild(*Soconnect1429);

Soconnect* Soconnect1430 = new Soconnect();
Soconnect1430->setNodeField(QString("value_changed"));
Soconnect1430->setProtoField(QString("r_ring_proximal_changed"));
SoIS1427->addChild(*Soconnect1430);

SoOrientationInterpolator1426->addChild(*SoIS1427);

SoProtoBody603->addChild(*SoOrientationInterpolator1426);

SoROUTE* SoROUTE1431 = new SoROUTE();
SoROUTE1431->setFromField(QString("fraction_changed"));
SoROUTE1431->setFromNode(QString("BehaviorClock"));
SoROUTE1431->setToField(QString("set_fraction"));
SoROUTE1431->setToNode(QString("r_ring_proximal_OI"));
SoProtoBody603->addChild(*SoROUTE1431);

SoOrientationInterpolator* SoOrientationInterpolator1432 = new SoOrientationInterpolator();
SoOrientationInterpolator1432->setDEF(QString("r_scapula_OI"));
SoIS* SoIS1433 = new SoIS();
Soconnect* Soconnect1434 = new Soconnect();
Soconnect1434->setNodeField(QString("key"));
Soconnect1434->setProtoField(QString("r_scapula_key"));
SoIS1433->addChild(*Soconnect1434);

Soconnect* Soconnect1435 = new Soconnect();
Soconnect1435->setNodeField(QString("keyValue"));
Soconnect1435->setProtoField(QString("r_scapula_keyValue"));
SoIS1433->addChild(*Soconnect1435);

Soconnect* Soconnect1436 = new Soconnect();
Soconnect1436->setNodeField(QString("value_changed"));
Soconnect1436->setProtoField(QString("r_scapula_changed"));
SoIS1433->addChild(*Soconnect1436);

SoOrientationInterpolator1432->addChild(*SoIS1433);

SoProtoBody603->addChild(*SoOrientationInterpolator1432);

SoROUTE* SoROUTE1437 = new SoROUTE();
SoROUTE1437->setFromField(QString("fraction_changed"));
SoROUTE1437->setFromNode(QString("BehaviorClock"));
SoROUTE1437->setToField(QString("set_fraction"));
SoROUTE1437->setToNode(QString("r_scapula_OI"));
SoProtoBody603->addChild(*SoROUTE1437);

SoOrientationInterpolator* SoOrientationInterpolator1438 = new SoOrientationInterpolator();
SoOrientationInterpolator1438->setDEF(QString("r_shoulder_OI"));
SoIS* SoIS1439 = new SoIS();
Soconnect* Soconnect1440 = new Soconnect();
Soconnect1440->setNodeField(QString("key"));
Soconnect1440->setProtoField(QString("r_shoulder_key"));
SoIS1439->addChild(*Soconnect1440);

Soconnect* Soconnect1441 = new Soconnect();
Soconnect1441->setNodeField(QString("keyValue"));
Soconnect1441->setProtoField(QString("r_shoulder_keyValue"));
SoIS1439->addChild(*Soconnect1441);

Soconnect* Soconnect1442 = new Soconnect();
Soconnect1442->setNodeField(QString("value_changed"));
Soconnect1442->setProtoField(QString("r_shoulder_changed"));
SoIS1439->addChild(*Soconnect1442);

SoOrientationInterpolator1438->addChild(*SoIS1439);

SoProtoBody603->addChild(*SoOrientationInterpolator1438);

SoROUTE* SoROUTE1443 = new SoROUTE();
SoROUTE1443->setFromField(QString("fraction_changed"));
SoROUTE1443->setFromNode(QString("BehaviorClock"));
SoROUTE1443->setToField(QString("set_fraction"));
SoROUTE1443->setToNode(QString("r_shoulder_OI"));
SoProtoBody603->addChild(*SoROUTE1443);

SoOrientationInterpolator* SoOrientationInterpolator1444 = new SoOrientationInterpolator();
SoOrientationInterpolator1444->setDEF(QString("r_sternoclavicular_OI"));
SoIS* SoIS1445 = new SoIS();
Soconnect* Soconnect1446 = new Soconnect();
Soconnect1446->setNodeField(QString("key"));
Soconnect1446->setProtoField(QString("r_sternoclavicular_key"));
SoIS1445->addChild(*Soconnect1446);

Soconnect* Soconnect1447 = new Soconnect();
Soconnect1447->setNodeField(QString("keyValue"));
Soconnect1447->setProtoField(QString("r_sternoclavicular_keyValue"));
SoIS1445->addChild(*Soconnect1447);

Soconnect* Soconnect1448 = new Soconnect();
Soconnect1448->setNodeField(QString("value_changed"));
Soconnect1448->setProtoField(QString("r_sternoclavicular_changed"));
SoIS1445->addChild(*Soconnect1448);

SoOrientationInterpolator1444->addChild(*SoIS1445);

SoProtoBody603->addChild(*SoOrientationInterpolator1444);

SoROUTE* SoROUTE1449 = new SoROUTE();
SoROUTE1449->setFromField(QString("fraction_changed"));
SoROUTE1449->setFromNode(QString("BehaviorClock"));
SoROUTE1449->setToField(QString("set_fraction"));
SoROUTE1449->setToNode(QString("r_sternoclavicular_OI"));
SoProtoBody603->addChild(*SoROUTE1449);

SoOrientationInterpolator* SoOrientationInterpolator1450 = new SoOrientationInterpolator();
SoOrientationInterpolator1450->setDEF(QString("r_subtalar_OI"));
SoIS* SoIS1451 = new SoIS();
Soconnect* Soconnect1452 = new Soconnect();
Soconnect1452->setNodeField(QString("key"));
Soconnect1452->setProtoField(QString("r_subtalar_key"));
SoIS1451->addChild(*Soconnect1452);

Soconnect* Soconnect1453 = new Soconnect();
Soconnect1453->setNodeField(QString("keyValue"));
Soconnect1453->setProtoField(QString("r_subtalar_keyValue"));
SoIS1451->addChild(*Soconnect1453);

Soconnect* Soconnect1454 = new Soconnect();
Soconnect1454->setNodeField(QString("value_changed"));
Soconnect1454->setProtoField(QString("r_subtalar_changed"));
SoIS1451->addChild(*Soconnect1454);

SoOrientationInterpolator1450->addChild(*SoIS1451);

SoProtoBody603->addChild(*SoOrientationInterpolator1450);

SoROUTE* SoROUTE1455 = new SoROUTE();
SoROUTE1455->setFromField(QString("fraction_changed"));
SoROUTE1455->setFromNode(QString("BehaviorClock"));
SoROUTE1455->setToField(QString("set_fraction"));
SoROUTE1455->setToNode(QString("r_subtalar_OI"));
SoProtoBody603->addChild(*SoROUTE1455);

SoOrientationInterpolator* SoOrientationInterpolator1456 = new SoOrientationInterpolator();
SoOrientationInterpolator1456->setDEF(QString("r_thigh_OI"));
SoIS* SoIS1457 = new SoIS();
Soconnect* Soconnect1458 = new Soconnect();
Soconnect1458->setNodeField(QString("key"));
Soconnect1458->setProtoField(QString("r_thigh_key"));
SoIS1457->addChild(*Soconnect1458);

Soconnect* Soconnect1459 = new Soconnect();
Soconnect1459->setNodeField(QString("keyValue"));
Soconnect1459->setProtoField(QString("r_thigh_keyValue"));
SoIS1457->addChild(*Soconnect1459);

Soconnect* Soconnect1460 = new Soconnect();
Soconnect1460->setNodeField(QString("value_changed"));
Soconnect1460->setProtoField(QString("r_thigh_changed"));
SoIS1457->addChild(*Soconnect1460);

SoOrientationInterpolator1456->addChild(*SoIS1457);

SoProtoBody603->addChild(*SoOrientationInterpolator1456);

SoROUTE* SoROUTE1461 = new SoROUTE();
SoROUTE1461->setFromField(QString("fraction_changed"));
SoROUTE1461->setFromNode(QString("BehaviorClock"));
SoROUTE1461->setToField(QString("set_fraction"));
SoROUTE1461->setToNode(QString("r_thigh_OI"));
SoProtoBody603->addChild(*SoROUTE1461);

SoOrientationInterpolator* SoOrientationInterpolator1462 = new SoOrientationInterpolator();
SoOrientationInterpolator1462->setDEF(QString("r_thumb1_OI"));
SoIS* SoIS1463 = new SoIS();
Soconnect* Soconnect1464 = new Soconnect();
Soconnect1464->setNodeField(QString("key"));
Soconnect1464->setProtoField(QString("r_thumb1_key"));
SoIS1463->addChild(*Soconnect1464);

Soconnect* Soconnect1465 = new Soconnect();
Soconnect1465->setNodeField(QString("keyValue"));
Soconnect1465->setProtoField(QString("r_thumb1_keyValue"));
SoIS1463->addChild(*Soconnect1465);

Soconnect* Soconnect1466 = new Soconnect();
Soconnect1466->setNodeField(QString("value_changed"));
Soconnect1466->setProtoField(QString("r_thumb1_changed"));
SoIS1463->addChild(*Soconnect1466);

SoOrientationInterpolator1462->addChild(*SoIS1463);

SoProtoBody603->addChild(*SoOrientationInterpolator1462);

SoROUTE* SoROUTE1467 = new SoROUTE();
SoROUTE1467->setFromField(QString("fraction_changed"));
SoROUTE1467->setFromNode(QString("BehaviorClock"));
SoROUTE1467->setToField(QString("set_fraction"));
SoROUTE1467->setToNode(QString("r_thumb1_OI"));
SoProtoBody603->addChild(*SoROUTE1467);

SoOrientationInterpolator* SoOrientationInterpolator1468 = new SoOrientationInterpolator();
SoOrientationInterpolator1468->setDEF(QString("r_thumb2_OI"));
SoIS* SoIS1469 = new SoIS();
Soconnect* Soconnect1470 = new Soconnect();
Soconnect1470->setNodeField(QString("key"));
Soconnect1470->setProtoField(QString("r_thumb2_key"));
SoIS1469->addChild(*Soconnect1470);

Soconnect* Soconnect1471 = new Soconnect();
Soconnect1471->setNodeField(QString("keyValue"));
Soconnect1471->setProtoField(QString("r_thumb2_keyValue"));
SoIS1469->addChild(*Soconnect1471);

Soconnect* Soconnect1472 = new Soconnect();
Soconnect1472->setNodeField(QString("value_changed"));
Soconnect1472->setProtoField(QString("r_thumb2_changed"));
SoIS1469->addChild(*Soconnect1472);

SoOrientationInterpolator1468->addChild(*SoIS1469);

SoProtoBody603->addChild(*SoOrientationInterpolator1468);

SoROUTE* SoROUTE1473 = new SoROUTE();
SoROUTE1473->setFromField(QString("fraction_changed"));
SoROUTE1473->setFromNode(QString("BehaviorClock"));
SoROUTE1473->setToField(QString("set_fraction"));
SoROUTE1473->setToNode(QString("r_thumb2_OI"));
SoProtoBody603->addChild(*SoROUTE1473);

SoOrientationInterpolator* SoOrientationInterpolator1474 = new SoOrientationInterpolator();
SoOrientationInterpolator1474->setDEF(QString("r_thumb3_OI"));
SoIS* SoIS1475 = new SoIS();
Soconnect* Soconnect1476 = new Soconnect();
Soconnect1476->setNodeField(QString("key"));
Soconnect1476->setProtoField(QString("r_thumb3_key"));
SoIS1475->addChild(*Soconnect1476);

Soconnect* Soconnect1477 = new Soconnect();
Soconnect1477->setNodeField(QString("keyValue"));
Soconnect1477->setProtoField(QString("r_thumb3_keyValue"));
SoIS1475->addChild(*Soconnect1477);

Soconnect* Soconnect1478 = new Soconnect();
Soconnect1478->setNodeField(QString("value_changed"));
Soconnect1478->setProtoField(QString("r_thumb3_changed"));
SoIS1475->addChild(*Soconnect1478);

SoOrientationInterpolator1474->addChild(*SoIS1475);

SoProtoBody603->addChild(*SoOrientationInterpolator1474);

SoROUTE* SoROUTE1479 = new SoROUTE();
SoROUTE1479->setFromField(QString("fraction_changed"));
SoROUTE1479->setFromNode(QString("BehaviorClock"));
SoROUTE1479->setToField(QString("set_fraction"));
SoROUTE1479->setToNode(QString("r_thumb3_OI"));
SoProtoBody603->addChild(*SoROUTE1479);

SoOrientationInterpolator* SoOrientationInterpolator1480 = new SoOrientationInterpolator();
SoOrientationInterpolator1480->setDEF(QString("r_thumb_distal_OI"));
SoIS* SoIS1481 = new SoIS();
Soconnect* Soconnect1482 = new Soconnect();
Soconnect1482->setNodeField(QString("key"));
Soconnect1482->setProtoField(QString("r_thumb_distal_key"));
SoIS1481->addChild(*Soconnect1482);

Soconnect* Soconnect1483 = new Soconnect();
Soconnect1483->setNodeField(QString("keyValue"));
Soconnect1483->setProtoField(QString("r_thumb_distal_keyValue"));
SoIS1481->addChild(*Soconnect1483);

Soconnect* Soconnect1484 = new Soconnect();
Soconnect1484->setNodeField(QString("value_changed"));
Soconnect1484->setProtoField(QString("r_thumb_distal_changed"));
SoIS1481->addChild(*Soconnect1484);

SoOrientationInterpolator1480->addChild(*SoIS1481);

SoProtoBody603->addChild(*SoOrientationInterpolator1480);

SoROUTE* SoROUTE1485 = new SoROUTE();
SoROUTE1485->setFromField(QString("fraction_changed"));
SoROUTE1485->setFromNode(QString("BehaviorClock"));
SoROUTE1485->setToField(QString("set_fraction"));
SoROUTE1485->setToNode(QString("r_thumb_distal_OI"));
SoProtoBody603->addChild(*SoROUTE1485);

SoOrientationInterpolator* SoOrientationInterpolator1486 = new SoOrientationInterpolator();
SoOrientationInterpolator1486->setDEF(QString("r_thumb_metacarpal_OI"));
SoIS* SoIS1487 = new SoIS();
Soconnect* Soconnect1488 = new Soconnect();
Soconnect1488->setNodeField(QString("key"));
Soconnect1488->setProtoField(QString("r_thumb_metacarpal_key"));
SoIS1487->addChild(*Soconnect1488);

Soconnect* Soconnect1489 = new Soconnect();
Soconnect1489->setNodeField(QString("keyValue"));
Soconnect1489->setProtoField(QString("r_thumb_metacarpal_keyValue"));
SoIS1487->addChild(*Soconnect1489);

Soconnect* Soconnect1490 = new Soconnect();
Soconnect1490->setNodeField(QString("value_changed"));
Soconnect1490->setProtoField(QString("r_thumb_metacarpal_changed"));
SoIS1487->addChild(*Soconnect1490);

SoOrientationInterpolator1486->addChild(*SoIS1487);

SoProtoBody603->addChild(*SoOrientationInterpolator1486);

SoROUTE* SoROUTE1491 = new SoROUTE();
SoROUTE1491->setFromField(QString("fraction_changed"));
SoROUTE1491->setFromNode(QString("BehaviorClock"));
SoROUTE1491->setToField(QString("set_fraction"));
SoROUTE1491->setToNode(QString("r_thumb_metacarpal_OI"));
SoProtoBody603->addChild(*SoROUTE1491);

SoOrientationInterpolator* SoOrientationInterpolator1492 = new SoOrientationInterpolator();
SoOrientationInterpolator1492->setDEF(QString("r_thumb_proximal_OI"));
SoIS* SoIS1493 = new SoIS();
Soconnect* Soconnect1494 = new Soconnect();
Soconnect1494->setNodeField(QString("key"));
Soconnect1494->setProtoField(QString("r_thumb_proximal_key"));
SoIS1493->addChild(*Soconnect1494);

Soconnect* Soconnect1495 = new Soconnect();
Soconnect1495->setNodeField(QString("keyValue"));
Soconnect1495->setProtoField(QString("r_thumb_proximal_keyValue"));
SoIS1493->addChild(*Soconnect1495);

Soconnect* Soconnect1496 = new Soconnect();
Soconnect1496->setNodeField(QString("value_changed"));
Soconnect1496->setProtoField(QString("r_thumb_proximal_changed"));
SoIS1493->addChild(*Soconnect1496);

SoOrientationInterpolator1492->addChild(*SoIS1493);

SoProtoBody603->addChild(*SoOrientationInterpolator1492);

SoROUTE* SoROUTE1497 = new SoROUTE();
SoROUTE1497->setFromField(QString("fraction_changed"));
SoROUTE1497->setFromNode(QString("BehaviorClock"));
SoROUTE1497->setToField(QString("set_fraction"));
SoROUTE1497->setToNode(QString("r_thumb_proximal_OI"));
SoProtoBody603->addChild(*SoROUTE1497);

SoOrientationInterpolator* SoOrientationInterpolator1498 = new SoOrientationInterpolator();
SoOrientationInterpolator1498->setDEF(QString("r_upperarm_OI"));
SoIS* SoIS1499 = new SoIS();
Soconnect* Soconnect1500 = new Soconnect();
Soconnect1500->setNodeField(QString("key"));
Soconnect1500->setProtoField(QString("r_upperarm_key"));
SoIS1499->addChild(*Soconnect1500);

Soconnect* Soconnect1501 = new Soconnect();
Soconnect1501->setNodeField(QString("keyValue"));
Soconnect1501->setProtoField(QString("r_upperarm_keyValue"));
SoIS1499->addChild(*Soconnect1501);

Soconnect* Soconnect1502 = new Soconnect();
Soconnect1502->setNodeField(QString("value_changed"));
Soconnect1502->setProtoField(QString("r_upperarm_changed"));
SoIS1499->addChild(*Soconnect1502);

SoOrientationInterpolator1498->addChild(*SoIS1499);

SoProtoBody603->addChild(*SoOrientationInterpolator1498);

SoROUTE* SoROUTE1503 = new SoROUTE();
SoROUTE1503->setFromField(QString("fraction_changed"));
SoROUTE1503->setFromNode(QString("BehaviorClock"));
SoROUTE1503->setToField(QString("set_fraction"));
SoROUTE1503->setToNode(QString("r_upperarm_OI"));
SoProtoBody603->addChild(*SoROUTE1503);

SoOrientationInterpolator* SoOrientationInterpolator1504 = new SoOrientationInterpolator();
SoOrientationInterpolator1504->setDEF(QString("r_wrist_OI"));
SoIS* SoIS1505 = new SoIS();
Soconnect* Soconnect1506 = new Soconnect();
Soconnect1506->setNodeField(QString("key"));
Soconnect1506->setProtoField(QString("r_wrist_key"));
SoIS1505->addChild(*Soconnect1506);

Soconnect* Soconnect1507 = new Soconnect();
Soconnect1507->setNodeField(QString("keyValue"));
Soconnect1507->setProtoField(QString("r_wrist_keyValue"));
SoIS1505->addChild(*Soconnect1507);

Soconnect* Soconnect1508 = new Soconnect();
Soconnect1508->setNodeField(QString("value_changed"));
Soconnect1508->setProtoField(QString("r_wrist_changed"));
SoIS1505->addChild(*Soconnect1508);

SoOrientationInterpolator1504->addChild(*SoIS1505);

SoProtoBody603->addChild(*SoOrientationInterpolator1504);

SoROUTE* SoROUTE1509 = new SoROUTE();
SoROUTE1509->setFromField(QString("fraction_changed"));
SoROUTE1509->setFromNode(QString("BehaviorClock"));
SoROUTE1509->setToField(QString("set_fraction"));
SoROUTE1509->setToNode(QString("r_wrist_OI"));
SoProtoBody603->addChild(*SoROUTE1509);

SoOrientationInterpolator* SoOrientationInterpolator1510 = new SoOrientationInterpolator();
SoOrientationInterpolator1510->setDEF(QString("sacroiliac_OI"));
SoIS* SoIS1511 = new SoIS();
Soconnect* Soconnect1512 = new Soconnect();
Soconnect1512->setNodeField(QString("key"));
Soconnect1512->setProtoField(QString("sacroiliac_key"));
SoIS1511->addChild(*Soconnect1512);

Soconnect* Soconnect1513 = new Soconnect();
Soconnect1513->setNodeField(QString("keyValue"));
Soconnect1513->setProtoField(QString("sacroiliac_keyValue"));
SoIS1511->addChild(*Soconnect1513);

Soconnect* Soconnect1514 = new Soconnect();
Soconnect1514->setNodeField(QString("value_changed"));
Soconnect1514->setProtoField(QString("sacroiliac_changed"));
SoIS1511->addChild(*Soconnect1514);

SoOrientationInterpolator1510->addChild(*SoIS1511);

SoProtoBody603->addChild(*SoOrientationInterpolator1510);

SoROUTE* SoROUTE1515 = new SoROUTE();
SoROUTE1515->setFromField(QString("fraction_changed"));
SoROUTE1515->setFromNode(QString("BehaviorClock"));
SoROUTE1515->setToField(QString("set_fraction"));
SoROUTE1515->setToNode(QString("sacroiliac_OI"));
SoProtoBody603->addChild(*SoROUTE1515);

SoOrientationInterpolator* SoOrientationInterpolator1516 = new SoOrientationInterpolator();
SoOrientationInterpolator1516->setDEF(QString("sacrum_OI"));
SoIS* SoIS1517 = new SoIS();
Soconnect* Soconnect1518 = new Soconnect();
Soconnect1518->setNodeField(QString("key"));
Soconnect1518->setProtoField(QString("sacrum_key"));
SoIS1517->addChild(*Soconnect1518);

Soconnect* Soconnect1519 = new Soconnect();
Soconnect1519->setNodeField(QString("keyValue"));
Soconnect1519->setProtoField(QString("sacrum_keyValue"));
SoIS1517->addChild(*Soconnect1519);

Soconnect* Soconnect1520 = new Soconnect();
Soconnect1520->setNodeField(QString("value_changed"));
Soconnect1520->setProtoField(QString("sacrum_changed"));
SoIS1517->addChild(*Soconnect1520);

SoOrientationInterpolator1516->addChild(*SoIS1517);

SoProtoBody603->addChild(*SoOrientationInterpolator1516);

SoROUTE* SoROUTE1521 = new SoROUTE();
SoROUTE1521->setFromField(QString("fraction_changed"));
SoROUTE1521->setFromNode(QString("BehaviorClock"));
SoROUTE1521->setToField(QString("set_fraction"));
SoROUTE1521->setToNode(QString("sacrum_OI"));
SoProtoBody603->addChild(*SoROUTE1521);

SoOrientationInterpolator* SoOrientationInterpolator1522 = new SoOrientationInterpolator();
SoOrientationInterpolator1522->setDEF(QString("skull_OI"));
SoIS* SoIS1523 = new SoIS();
Soconnect* Soconnect1524 = new Soconnect();
Soconnect1524->setNodeField(QString("key"));
Soconnect1524->setProtoField(QString("skull_key"));
SoIS1523->addChild(*Soconnect1524);

Soconnect* Soconnect1525 = new Soconnect();
Soconnect1525->setNodeField(QString("keyValue"));
Soconnect1525->setProtoField(QString("skull_keyValue"));
SoIS1523->addChild(*Soconnect1525);

Soconnect* Soconnect1526 = new Soconnect();
Soconnect1526->setNodeField(QString("value_changed"));
Soconnect1526->setProtoField(QString("skull_changed"));
SoIS1523->addChild(*Soconnect1526);

SoOrientationInterpolator1522->addChild(*SoIS1523);

SoProtoBody603->addChild(*SoOrientationInterpolator1522);

SoROUTE* SoROUTE1527 = new SoROUTE();
SoROUTE1527->setFromField(QString("fraction_changed"));
SoROUTE1527->setFromNode(QString("BehaviorClock"));
SoROUTE1527->setToField(QString("set_fraction"));
SoROUTE1527->setToNode(QString("skull_OI"));
SoProtoBody603->addChild(*SoROUTE1527);

SoOrientationInterpolator* SoOrientationInterpolator1528 = new SoOrientationInterpolator();
SoOrientationInterpolator1528->setDEF(QString("skullbase_OI"));
SoIS* SoIS1529 = new SoIS();
Soconnect* Soconnect1530 = new Soconnect();
Soconnect1530->setNodeField(QString("key"));
Soconnect1530->setProtoField(QString("skullbase_key"));
SoIS1529->addChild(*Soconnect1530);

Soconnect* Soconnect1531 = new Soconnect();
Soconnect1531->setNodeField(QString("keyValue"));
Soconnect1531->setProtoField(QString("skullbase_keyValue"));
SoIS1529->addChild(*Soconnect1531);

Soconnect* Soconnect1532 = new Soconnect();
Soconnect1532->setNodeField(QString("value_changed"));
Soconnect1532->setProtoField(QString("skullbase_changed"));
SoIS1529->addChild(*Soconnect1532);

SoOrientationInterpolator1528->addChild(*SoIS1529);

SoProtoBody603->addChild(*SoOrientationInterpolator1528);

SoROUTE* SoROUTE1533 = new SoROUTE();
SoROUTE1533->setFromField(QString("fraction_changed"));
SoROUTE1533->setFromNode(QString("BehaviorClock"));
SoROUTE1533->setToField(QString("set_fraction"));
SoROUTE1533->setToNode(QString("skullbase_OI"));
SoProtoBody603->addChild(*SoROUTE1533);

SoOrientationInterpolator* SoOrientationInterpolator1534 = new SoOrientationInterpolator();
SoOrientationInterpolator1534->setDEF(QString("t1_OI"));
SoIS* SoIS1535 = new SoIS();
Soconnect* Soconnect1536 = new Soconnect();
Soconnect1536->setNodeField(QString("key"));
Soconnect1536->setProtoField(QString("t1_key"));
SoIS1535->addChild(*Soconnect1536);

Soconnect* Soconnect1537 = new Soconnect();
Soconnect1537->setNodeField(QString("keyValue"));
Soconnect1537->setProtoField(QString("t1_keyValue"));
SoIS1535->addChild(*Soconnect1537);

Soconnect* Soconnect1538 = new Soconnect();
Soconnect1538->setNodeField(QString("value_changed"));
Soconnect1538->setProtoField(QString("t1_changed"));
SoIS1535->addChild(*Soconnect1538);

SoOrientationInterpolator1534->addChild(*SoIS1535);

SoProtoBody603->addChild(*SoOrientationInterpolator1534);

SoROUTE* SoROUTE1539 = new SoROUTE();
SoROUTE1539->setFromField(QString("fraction_changed"));
SoROUTE1539->setFromNode(QString("BehaviorClock"));
SoROUTE1539->setToField(QString("set_fraction"));
SoROUTE1539->setToNode(QString("t1_OI"));
SoProtoBody603->addChild(*SoROUTE1539);

SoOrientationInterpolator* SoOrientationInterpolator1540 = new SoOrientationInterpolator();
SoOrientationInterpolator1540->setDEF(QString("t2_OI"));
SoIS* SoIS1541 = new SoIS();
Soconnect* Soconnect1542 = new Soconnect();
Soconnect1542->setNodeField(QString("key"));
Soconnect1542->setProtoField(QString("t2_key"));
SoIS1541->addChild(*Soconnect1542);

Soconnect* Soconnect1543 = new Soconnect();
Soconnect1543->setNodeField(QString("keyValue"));
Soconnect1543->setProtoField(QString("t2_keyValue"));
SoIS1541->addChild(*Soconnect1543);

Soconnect* Soconnect1544 = new Soconnect();
Soconnect1544->setNodeField(QString("value_changed"));
Soconnect1544->setProtoField(QString("t2_changed"));
SoIS1541->addChild(*Soconnect1544);

SoOrientationInterpolator1540->addChild(*SoIS1541);

SoProtoBody603->addChild(*SoOrientationInterpolator1540);

SoROUTE* SoROUTE1545 = new SoROUTE();
SoROUTE1545->setFromField(QString("fraction_changed"));
SoROUTE1545->setFromNode(QString("BehaviorClock"));
SoROUTE1545->setToField(QString("set_fraction"));
SoROUTE1545->setToNode(QString("t2_OI"));
SoProtoBody603->addChild(*SoROUTE1545);

SoOrientationInterpolator* SoOrientationInterpolator1546 = new SoOrientationInterpolator();
SoOrientationInterpolator1546->setDEF(QString("t3_OI"));
SoIS* SoIS1547 = new SoIS();
Soconnect* Soconnect1548 = new Soconnect();
Soconnect1548->setNodeField(QString("key"));
Soconnect1548->setProtoField(QString("t3_key"));
SoIS1547->addChild(*Soconnect1548);

Soconnect* Soconnect1549 = new Soconnect();
Soconnect1549->setNodeField(QString("keyValue"));
Soconnect1549->setProtoField(QString("t3_keyValue"));
SoIS1547->addChild(*Soconnect1549);

Soconnect* Soconnect1550 = new Soconnect();
Soconnect1550->setNodeField(QString("value_changed"));
Soconnect1550->setProtoField(QString("t3_changed"));
SoIS1547->addChild(*Soconnect1550);

SoOrientationInterpolator1546->addChild(*SoIS1547);

SoProtoBody603->addChild(*SoOrientationInterpolator1546);

SoROUTE* SoROUTE1551 = new SoROUTE();
SoROUTE1551->setFromField(QString("fraction_changed"));
SoROUTE1551->setFromNode(QString("BehaviorClock"));
SoROUTE1551->setToField(QString("set_fraction"));
SoROUTE1551->setToNode(QString("t3_OI"));
SoProtoBody603->addChild(*SoROUTE1551);

SoOrientationInterpolator* SoOrientationInterpolator1552 = new SoOrientationInterpolator();
SoOrientationInterpolator1552->setDEF(QString("t4_OI"));
SoIS* SoIS1553 = new SoIS();
Soconnect* Soconnect1554 = new Soconnect();
Soconnect1554->setNodeField(QString("key"));
Soconnect1554->setProtoField(QString("t4_key"));
SoIS1553->addChild(*Soconnect1554);

Soconnect* Soconnect1555 = new Soconnect();
Soconnect1555->setNodeField(QString("keyValue"));
Soconnect1555->setProtoField(QString("t4_keyValue"));
SoIS1553->addChild(*Soconnect1555);

Soconnect* Soconnect1556 = new Soconnect();
Soconnect1556->setNodeField(QString("value_changed"));
Soconnect1556->setProtoField(QString("t4_changed"));
SoIS1553->addChild(*Soconnect1556);

SoOrientationInterpolator1552->addChild(*SoIS1553);

SoProtoBody603->addChild(*SoOrientationInterpolator1552);

SoROUTE* SoROUTE1557 = new SoROUTE();
SoROUTE1557->setFromField(QString("fraction_changed"));
SoROUTE1557->setFromNode(QString("BehaviorClock"));
SoROUTE1557->setToField(QString("set_fraction"));
SoROUTE1557->setToNode(QString("t4_OI"));
SoProtoBody603->addChild(*SoROUTE1557);

SoOrientationInterpolator* SoOrientationInterpolator1558 = new SoOrientationInterpolator();
SoOrientationInterpolator1558->setDEF(QString("t5_OI"));
SoIS* SoIS1559 = new SoIS();
Soconnect* Soconnect1560 = new Soconnect();
Soconnect1560->setNodeField(QString("key"));
Soconnect1560->setProtoField(QString("t5_key"));
SoIS1559->addChild(*Soconnect1560);

Soconnect* Soconnect1561 = new Soconnect();
Soconnect1561->setNodeField(QString("keyValue"));
Soconnect1561->setProtoField(QString("t5_keyValue"));
SoIS1559->addChild(*Soconnect1561);

Soconnect* Soconnect1562 = new Soconnect();
Soconnect1562->setNodeField(QString("value_changed"));
Soconnect1562->setProtoField(QString("t5_changed"));
SoIS1559->addChild(*Soconnect1562);

SoOrientationInterpolator1558->addChild(*SoIS1559);

SoProtoBody603->addChild(*SoOrientationInterpolator1558);

SoROUTE* SoROUTE1563 = new SoROUTE();
SoROUTE1563->setFromField(QString("fraction_changed"));
SoROUTE1563->setFromNode(QString("BehaviorClock"));
SoROUTE1563->setToField(QString("set_fraction"));
SoROUTE1563->setToNode(QString("t5_OI"));
SoProtoBody603->addChild(*SoROUTE1563);

SoOrientationInterpolator* SoOrientationInterpolator1564 = new SoOrientationInterpolator();
SoOrientationInterpolator1564->setDEF(QString("t6_OI"));
SoIS* SoIS1565 = new SoIS();
Soconnect* Soconnect1566 = new Soconnect();
Soconnect1566->setNodeField(QString("key"));
Soconnect1566->setProtoField(QString("t6_key"));
SoIS1565->addChild(*Soconnect1566);

Soconnect* Soconnect1567 = new Soconnect();
Soconnect1567->setNodeField(QString("keyValue"));
Soconnect1567->setProtoField(QString("t6_keyValue"));
SoIS1565->addChild(*Soconnect1567);

Soconnect* Soconnect1568 = new Soconnect();
Soconnect1568->setNodeField(QString("value_changed"));
Soconnect1568->setProtoField(QString("t6_changed"));
SoIS1565->addChild(*Soconnect1568);

SoOrientationInterpolator1564->addChild(*SoIS1565);

SoProtoBody603->addChild(*SoOrientationInterpolator1564);

SoROUTE* SoROUTE1569 = new SoROUTE();
SoROUTE1569->setFromField(QString("fraction_changed"));
SoROUTE1569->setFromNode(QString("BehaviorClock"));
SoROUTE1569->setToField(QString("set_fraction"));
SoROUTE1569->setToNode(QString("t6_OI"));
SoProtoBody603->addChild(*SoROUTE1569);

SoOrientationInterpolator* SoOrientationInterpolator1570 = new SoOrientationInterpolator();
SoOrientationInterpolator1570->setDEF(QString("t7_OI"));
SoIS* SoIS1571 = new SoIS();
Soconnect* Soconnect1572 = new Soconnect();
Soconnect1572->setNodeField(QString("key"));
Soconnect1572->setProtoField(QString("t7_key"));
SoIS1571->addChild(*Soconnect1572);

Soconnect* Soconnect1573 = new Soconnect();
Soconnect1573->setNodeField(QString("keyValue"));
Soconnect1573->setProtoField(QString("t7_keyValue"));
SoIS1571->addChild(*Soconnect1573);

Soconnect* Soconnect1574 = new Soconnect();
Soconnect1574->setNodeField(QString("value_changed"));
Soconnect1574->setProtoField(QString("t7_changed"));
SoIS1571->addChild(*Soconnect1574);

SoOrientationInterpolator1570->addChild(*SoIS1571);

SoProtoBody603->addChild(*SoOrientationInterpolator1570);

SoROUTE* SoROUTE1575 = new SoROUTE();
SoROUTE1575->setFromField(QString("fraction_changed"));
SoROUTE1575->setFromNode(QString("BehaviorClock"));
SoROUTE1575->setToField(QString("set_fraction"));
SoROUTE1575->setToNode(QString("t7_OI"));
SoProtoBody603->addChild(*SoROUTE1575);

SoOrientationInterpolator* SoOrientationInterpolator1576 = new SoOrientationInterpolator();
SoOrientationInterpolator1576->setDEF(QString("t8_OI"));
SoIS* SoIS1577 = new SoIS();
Soconnect* Soconnect1578 = new Soconnect();
Soconnect1578->setNodeField(QString("key"));
Soconnect1578->setProtoField(QString("t8_key"));
SoIS1577->addChild(*Soconnect1578);

Soconnect* Soconnect1579 = new Soconnect();
Soconnect1579->setNodeField(QString("keyValue"));
Soconnect1579->setProtoField(QString("t8_keyValue"));
SoIS1577->addChild(*Soconnect1579);

Soconnect* Soconnect1580 = new Soconnect();
Soconnect1580->setNodeField(QString("value_changed"));
Soconnect1580->setProtoField(QString("t8_changed"));
SoIS1577->addChild(*Soconnect1580);

SoOrientationInterpolator1576->addChild(*SoIS1577);

SoProtoBody603->addChild(*SoOrientationInterpolator1576);

SoROUTE* SoROUTE1581 = new SoROUTE();
SoROUTE1581->setFromField(QString("fraction_changed"));
SoROUTE1581->setFromNode(QString("BehaviorClock"));
SoROUTE1581->setToField(QString("set_fraction"));
SoROUTE1581->setToNode(QString("t8_OI"));
SoProtoBody603->addChild(*SoROUTE1581);

SoOrientationInterpolator* SoOrientationInterpolator1582 = new SoOrientationInterpolator();
SoOrientationInterpolator1582->setDEF(QString("t9_OI"));
SoIS* SoIS1583 = new SoIS();
Soconnect* Soconnect1584 = new Soconnect();
Soconnect1584->setNodeField(QString("key"));
Soconnect1584->setProtoField(QString("t9_key"));
SoIS1583->addChild(*Soconnect1584);

Soconnect* Soconnect1585 = new Soconnect();
Soconnect1585->setNodeField(QString("keyValue"));
Soconnect1585->setProtoField(QString("t9_keyValue"));
SoIS1583->addChild(*Soconnect1585);

Soconnect* Soconnect1586 = new Soconnect();
Soconnect1586->setNodeField(QString("value_changed"));
Soconnect1586->setProtoField(QString("t9_changed"));
SoIS1583->addChild(*Soconnect1586);

SoOrientationInterpolator1582->addChild(*SoIS1583);

SoProtoBody603->addChild(*SoOrientationInterpolator1582);

SoROUTE* SoROUTE1587 = new SoROUTE();
SoROUTE1587->setFromField(QString("fraction_changed"));
SoROUTE1587->setFromNode(QString("BehaviorClock"));
SoROUTE1587->setToField(QString("set_fraction"));
SoROUTE1587->setToNode(QString("t9_OI"));
SoProtoBody603->addChild(*SoROUTE1587);

SoOrientationInterpolator* SoOrientationInterpolator1588 = new SoOrientationInterpolator();
SoOrientationInterpolator1588->setDEF(QString("t10_OI"));
SoIS* SoIS1589 = new SoIS();
Soconnect* Soconnect1590 = new Soconnect();
Soconnect1590->setNodeField(QString("key"));
Soconnect1590->setProtoField(QString("t10_key"));
SoIS1589->addChild(*Soconnect1590);

Soconnect* Soconnect1591 = new Soconnect();
Soconnect1591->setNodeField(QString("keyValue"));
Soconnect1591->setProtoField(QString("t10_keyValue"));
SoIS1589->addChild(*Soconnect1591);

Soconnect* Soconnect1592 = new Soconnect();
Soconnect1592->setNodeField(QString("value_changed"));
Soconnect1592->setProtoField(QString("t10_changed"));
SoIS1589->addChild(*Soconnect1592);

SoOrientationInterpolator1588->addChild(*SoIS1589);

SoProtoBody603->addChild(*SoOrientationInterpolator1588);

SoROUTE* SoROUTE1593 = new SoROUTE();
SoROUTE1593->setFromField(QString("fraction_changed"));
SoROUTE1593->setFromNode(QString("BehaviorClock"));
SoROUTE1593->setToField(QString("set_fraction"));
SoROUTE1593->setToNode(QString("t10_OI"));
SoProtoBody603->addChild(*SoROUTE1593);

SoOrientationInterpolator* SoOrientationInterpolator1594 = new SoOrientationInterpolator();
SoOrientationInterpolator1594->setDEF(QString("t11_OI"));
SoIS* SoIS1595 = new SoIS();
Soconnect* Soconnect1596 = new Soconnect();
Soconnect1596->setNodeField(QString("key"));
Soconnect1596->setProtoField(QString("t11_key"));
SoIS1595->addChild(*Soconnect1596);

Soconnect* Soconnect1597 = new Soconnect();
Soconnect1597->setNodeField(QString("keyValue"));
Soconnect1597->setProtoField(QString("t11_keyValue"));
SoIS1595->addChild(*Soconnect1597);

Soconnect* Soconnect1598 = new Soconnect();
Soconnect1598->setNodeField(QString("value_changed"));
Soconnect1598->setProtoField(QString("t11_changed"));
SoIS1595->addChild(*Soconnect1598);

SoOrientationInterpolator1594->addChild(*SoIS1595);

SoProtoBody603->addChild(*SoOrientationInterpolator1594);

SoROUTE* SoROUTE1599 = new SoROUTE();
SoROUTE1599->setFromField(QString("fraction_changed"));
SoROUTE1599->setFromNode(QString("BehaviorClock"));
SoROUTE1599->setToField(QString("set_fraction"));
SoROUTE1599->setToNode(QString("t11_OI"));
SoProtoBody603->addChild(*SoROUTE1599);

SoOrientationInterpolator* SoOrientationInterpolator1600 = new SoOrientationInterpolator();
SoOrientationInterpolator1600->setDEF(QString("t12_OI"));
SoIS* SoIS1601 = new SoIS();
Soconnect* Soconnect1602 = new Soconnect();
Soconnect1602->setNodeField(QString("key"));
Soconnect1602->setProtoField(QString("t12_key"));
SoIS1601->addChild(*Soconnect1602);

Soconnect* Soconnect1603 = new Soconnect();
Soconnect1603->setNodeField(QString("keyValue"));
Soconnect1603->setProtoField(QString("t12_keyValue"));
SoIS1601->addChild(*Soconnect1603);

Soconnect* Soconnect1604 = new Soconnect();
Soconnect1604->setNodeField(QString("value_changed"));
Soconnect1604->setProtoField(QString("t12_changed"));
SoIS1601->addChild(*Soconnect1604);

SoOrientationInterpolator1600->addChild(*SoIS1601);

SoProtoBody603->addChild(*SoOrientationInterpolator1600);

SoROUTE* SoROUTE1605 = new SoROUTE();
SoROUTE1605->setFromField(QString("fraction_changed"));
SoROUTE1605->setFromNode(QString("BehaviorClock"));
SoROUTE1605->setToField(QString("set_fraction"));
SoROUTE1605->setToNode(QString("t12_OI"));
SoProtoBody603->addChild(*SoROUTE1605);

SoOrientationInterpolator* SoOrientationInterpolator1606 = new SoOrientationInterpolator();
SoOrientationInterpolator1606->setDEF(QString("temporomandibular_OI"));
SoIS* SoIS1607 = new SoIS();
Soconnect* Soconnect1608 = new Soconnect();
Soconnect1608->setNodeField(QString("key"));
Soconnect1608->setProtoField(QString("temporomandibular_key"));
SoIS1607->addChild(*Soconnect1608);

Soconnect* Soconnect1609 = new Soconnect();
Soconnect1609->setNodeField(QString("keyValue"));
Soconnect1609->setProtoField(QString("temporomandibular_keyValue"));
SoIS1607->addChild(*Soconnect1609);

Soconnect* Soconnect1610 = new Soconnect();
Soconnect1610->setNodeField(QString("value_changed"));
Soconnect1610->setProtoField(QString("temporomandibular_changed"));
SoIS1607->addChild(*Soconnect1610);

SoOrientationInterpolator1606->addChild(*SoIS1607);

SoProtoBody603->addChild(*SoOrientationInterpolator1606);

SoROUTE* SoROUTE1611 = new SoROUTE();
SoROUTE1611->setFromField(QString("fraction_changed"));
SoROUTE1611->setFromNode(QString("BehaviorClock"));
SoROUTE1611->setToField(QString("set_fraction"));
SoROUTE1611->setToNode(QString("temporomandibular_OI"));
SoProtoBody603->addChild(*SoROUTE1611);

SoOrientationInterpolator* SoOrientationInterpolator1612 = new SoOrientationInterpolator();
SoOrientationInterpolator1612->setDEF(QString("vc1_OI"));
SoIS* SoIS1613 = new SoIS();
Soconnect* Soconnect1614 = new Soconnect();
Soconnect1614->setNodeField(QString("key"));
Soconnect1614->setProtoField(QString("vc1_key"));
SoIS1613->addChild(*Soconnect1614);

Soconnect* Soconnect1615 = new Soconnect();
Soconnect1615->setNodeField(QString("keyValue"));
Soconnect1615->setProtoField(QString("vc1_keyValue"));
SoIS1613->addChild(*Soconnect1615);

Soconnect* Soconnect1616 = new Soconnect();
Soconnect1616->setNodeField(QString("value_changed"));
Soconnect1616->setProtoField(QString("vc1_changed"));
SoIS1613->addChild(*Soconnect1616);

SoOrientationInterpolator1612->addChild(*SoIS1613);

SoProtoBody603->addChild(*SoOrientationInterpolator1612);

SoROUTE* SoROUTE1617 = new SoROUTE();
SoROUTE1617->setFromField(QString("fraction_changed"));
SoROUTE1617->setFromNode(QString("BehaviorClock"));
SoROUTE1617->setToField(QString("set_fraction"));
SoROUTE1617->setToNode(QString("vc1_OI"));
SoProtoBody603->addChild(*SoROUTE1617);

SoOrientationInterpolator* SoOrientationInterpolator1618 = new SoOrientationInterpolator();
SoOrientationInterpolator1618->setDEF(QString("vc2_OI"));
SoIS* SoIS1619 = new SoIS();
Soconnect* Soconnect1620 = new Soconnect();
Soconnect1620->setNodeField(QString("key"));
Soconnect1620->setProtoField(QString("vc2_key"));
SoIS1619->addChild(*Soconnect1620);

Soconnect* Soconnect1621 = new Soconnect();
Soconnect1621->setNodeField(QString("keyValue"));
Soconnect1621->setProtoField(QString("vc2_keyValue"));
SoIS1619->addChild(*Soconnect1621);

Soconnect* Soconnect1622 = new Soconnect();
Soconnect1622->setNodeField(QString("value_changed"));
Soconnect1622->setProtoField(QString("vc2_changed"));
SoIS1619->addChild(*Soconnect1622);

SoOrientationInterpolator1618->addChild(*SoIS1619);

SoProtoBody603->addChild(*SoOrientationInterpolator1618);

SoROUTE* SoROUTE1623 = new SoROUTE();
SoROUTE1623->setFromField(QString("fraction_changed"));
SoROUTE1623->setFromNode(QString("BehaviorClock"));
SoROUTE1623->setToField(QString("set_fraction"));
SoROUTE1623->setToNode(QString("vc2_OI"));
SoProtoBody603->addChild(*SoROUTE1623);

SoOrientationInterpolator* SoOrientationInterpolator1624 = new SoOrientationInterpolator();
SoOrientationInterpolator1624->setDEF(QString("vc3_OI"));
SoIS* SoIS1625 = new SoIS();
Soconnect* Soconnect1626 = new Soconnect();
Soconnect1626->setNodeField(QString("key"));
Soconnect1626->setProtoField(QString("vc3_key"));
SoIS1625->addChild(*Soconnect1626);

Soconnect* Soconnect1627 = new Soconnect();
Soconnect1627->setNodeField(QString("keyValue"));
Soconnect1627->setProtoField(QString("vc3_keyValue"));
SoIS1625->addChild(*Soconnect1627);

Soconnect* Soconnect1628 = new Soconnect();
Soconnect1628->setNodeField(QString("value_changed"));
Soconnect1628->setProtoField(QString("vc3_changed"));
SoIS1625->addChild(*Soconnect1628);

SoOrientationInterpolator1624->addChild(*SoIS1625);

SoProtoBody603->addChild(*SoOrientationInterpolator1624);

SoROUTE* SoROUTE1629 = new SoROUTE();
SoROUTE1629->setFromField(QString("fraction_changed"));
SoROUTE1629->setFromNode(QString("BehaviorClock"));
SoROUTE1629->setToField(QString("set_fraction"));
SoROUTE1629->setToNode(QString("vc3_OI"));
SoProtoBody603->addChild(*SoROUTE1629);

SoOrientationInterpolator* SoOrientationInterpolator1630 = new SoOrientationInterpolator();
SoOrientationInterpolator1630->setDEF(QString("vc4_OI"));
SoIS* SoIS1631 = new SoIS();
Soconnect* Soconnect1632 = new Soconnect();
Soconnect1632->setNodeField(QString("key"));
Soconnect1632->setProtoField(QString("vc4_key"));
SoIS1631->addChild(*Soconnect1632);

Soconnect* Soconnect1633 = new Soconnect();
Soconnect1633->setNodeField(QString("keyValue"));
Soconnect1633->setProtoField(QString("vc4_keyValue"));
SoIS1631->addChild(*Soconnect1633);

Soconnect* Soconnect1634 = new Soconnect();
Soconnect1634->setNodeField(QString("value_changed"));
Soconnect1634->setProtoField(QString("vc4_changed"));
SoIS1631->addChild(*Soconnect1634);

SoOrientationInterpolator1630->addChild(*SoIS1631);

SoProtoBody603->addChild(*SoOrientationInterpolator1630);

SoROUTE* SoROUTE1635 = new SoROUTE();
SoROUTE1635->setFromField(QString("fraction_changed"));
SoROUTE1635->setFromNode(QString("BehaviorClock"));
SoROUTE1635->setToField(QString("set_fraction"));
SoROUTE1635->setToNode(QString("vc4_OI"));
SoProtoBody603->addChild(*SoROUTE1635);

SoOrientationInterpolator* SoOrientationInterpolator1636 = new SoOrientationInterpolator();
SoOrientationInterpolator1636->setDEF(QString("vc5_OI"));
SoIS* SoIS1637 = new SoIS();
Soconnect* Soconnect1638 = new Soconnect();
Soconnect1638->setNodeField(QString("key"));
Soconnect1638->setProtoField(QString("vc5_key"));
SoIS1637->addChild(*Soconnect1638);

Soconnect* Soconnect1639 = new Soconnect();
Soconnect1639->setNodeField(QString("keyValue"));
Soconnect1639->setProtoField(QString("vc5_keyValue"));
SoIS1637->addChild(*Soconnect1639);

Soconnect* Soconnect1640 = new Soconnect();
Soconnect1640->setNodeField(QString("value_changed"));
Soconnect1640->setProtoField(QString("vc5_changed"));
SoIS1637->addChild(*Soconnect1640);

SoOrientationInterpolator1636->addChild(*SoIS1637);

SoProtoBody603->addChild(*SoOrientationInterpolator1636);

SoROUTE* SoROUTE1641 = new SoROUTE();
SoROUTE1641->setFromField(QString("fraction_changed"));
SoROUTE1641->setFromNode(QString("BehaviorClock"));
SoROUTE1641->setToField(QString("set_fraction"));
SoROUTE1641->setToNode(QString("vc5_OI"));
SoProtoBody603->addChild(*SoROUTE1641);

SoOrientationInterpolator* SoOrientationInterpolator1642 = new SoOrientationInterpolator();
SoOrientationInterpolator1642->setDEF(QString("vc6_OI"));
SoIS* SoIS1643 = new SoIS();
Soconnect* Soconnect1644 = new Soconnect();
Soconnect1644->setNodeField(QString("key"));
Soconnect1644->setProtoField(QString("vc6_key"));
SoIS1643->addChild(*Soconnect1644);

Soconnect* Soconnect1645 = new Soconnect();
Soconnect1645->setNodeField(QString("keyValue"));
Soconnect1645->setProtoField(QString("vc6_keyValue"));
SoIS1643->addChild(*Soconnect1645);

Soconnect* Soconnect1646 = new Soconnect();
Soconnect1646->setNodeField(QString("value_changed"));
Soconnect1646->setProtoField(QString("vc6_changed"));
SoIS1643->addChild(*Soconnect1646);

SoOrientationInterpolator1642->addChild(*SoIS1643);

SoProtoBody603->addChild(*SoOrientationInterpolator1642);

SoROUTE* SoROUTE1647 = new SoROUTE();
SoROUTE1647->setFromField(QString("fraction_changed"));
SoROUTE1647->setFromNode(QString("BehaviorClock"));
SoROUTE1647->setToField(QString("set_fraction"));
SoROUTE1647->setToNode(QString("vc6_OI"));
SoProtoBody603->addChild(*SoROUTE1647);

SoOrientationInterpolator* SoOrientationInterpolator1648 = new SoOrientationInterpolator();
SoOrientationInterpolator1648->setDEF(QString("vc7_OI"));
SoIS* SoIS1649 = new SoIS();
Soconnect* Soconnect1650 = new Soconnect();
Soconnect1650->setNodeField(QString("key"));
Soconnect1650->setProtoField(QString("vc7_key"));
SoIS1649->addChild(*Soconnect1650);

Soconnect* Soconnect1651 = new Soconnect();
Soconnect1651->setNodeField(QString("keyValue"));
Soconnect1651->setProtoField(QString("vc7_keyValue"));
SoIS1649->addChild(*Soconnect1651);

Soconnect* Soconnect1652 = new Soconnect();
Soconnect1652->setNodeField(QString("value_changed"));
Soconnect1652->setProtoField(QString("vc7_changed"));
SoIS1649->addChild(*Soconnect1652);

SoOrientationInterpolator1648->addChild(*SoIS1649);

SoProtoBody603->addChild(*SoOrientationInterpolator1648);

SoROUTE* SoROUTE1653 = new SoROUTE();
SoROUTE1653->setFromField(QString("fraction_changed"));
SoROUTE1653->setFromNode(QString("BehaviorClock"));
SoROUTE1653->setToField(QString("set_fraction"));
SoROUTE1653->setToNode(QString("vc7_OI"));
SoProtoBody603->addChild(*SoROUTE1653);

SoOrientationInterpolator* SoOrientationInterpolator1654 = new SoOrientationInterpolator();
SoOrientationInterpolator1654->setDEF(QString("vl1_OI"));
SoIS* SoIS1655 = new SoIS();
Soconnect* Soconnect1656 = new Soconnect();
Soconnect1656->setNodeField(QString("key"));
Soconnect1656->setProtoField(QString("vl1_key"));
SoIS1655->addChild(*Soconnect1656);

Soconnect* Soconnect1657 = new Soconnect();
Soconnect1657->setNodeField(QString("keyValue"));
Soconnect1657->setProtoField(QString("vl1_keyValue"));
SoIS1655->addChild(*Soconnect1657);

Soconnect* Soconnect1658 = new Soconnect();
Soconnect1658->setNodeField(QString("value_changed"));
Soconnect1658->setProtoField(QString("vl1_changed"));
SoIS1655->addChild(*Soconnect1658);

SoOrientationInterpolator1654->addChild(*SoIS1655);

SoProtoBody603->addChild(*SoOrientationInterpolator1654);

SoROUTE* SoROUTE1659 = new SoROUTE();
SoROUTE1659->setFromField(QString("fraction_changed"));
SoROUTE1659->setFromNode(QString("BehaviorClock"));
SoROUTE1659->setToField(QString("set_fraction"));
SoROUTE1659->setToNode(QString("vl1_OI"));
SoProtoBody603->addChild(*SoROUTE1659);

SoOrientationInterpolator* SoOrientationInterpolator1660 = new SoOrientationInterpolator();
SoOrientationInterpolator1660->setDEF(QString("vl2_OI"));
SoIS* SoIS1661 = new SoIS();
Soconnect* Soconnect1662 = new Soconnect();
Soconnect1662->setNodeField(QString("key"));
Soconnect1662->setProtoField(QString("vl2_key"));
SoIS1661->addChild(*Soconnect1662);

Soconnect* Soconnect1663 = new Soconnect();
Soconnect1663->setNodeField(QString("keyValue"));
Soconnect1663->setProtoField(QString("vl2_keyValue"));
SoIS1661->addChild(*Soconnect1663);

Soconnect* Soconnect1664 = new Soconnect();
Soconnect1664->setNodeField(QString("value_changed"));
Soconnect1664->setProtoField(QString("vl2_changed"));
SoIS1661->addChild(*Soconnect1664);

SoOrientationInterpolator1660->addChild(*SoIS1661);

SoProtoBody603->addChild(*SoOrientationInterpolator1660);

SoROUTE* SoROUTE1665 = new SoROUTE();
SoROUTE1665->setFromField(QString("fraction_changed"));
SoROUTE1665->setFromNode(QString("BehaviorClock"));
SoROUTE1665->setToField(QString("set_fraction"));
SoROUTE1665->setToNode(QString("vl2_OI"));
SoProtoBody603->addChild(*SoROUTE1665);

SoOrientationInterpolator* SoOrientationInterpolator1666 = new SoOrientationInterpolator();
SoOrientationInterpolator1666->setDEF(QString("vl3_OI"));
SoIS* SoIS1667 = new SoIS();
Soconnect* Soconnect1668 = new Soconnect();
Soconnect1668->setNodeField(QString("key"));
Soconnect1668->setProtoField(QString("vl3_key"));
SoIS1667->addChild(*Soconnect1668);

Soconnect* Soconnect1669 = new Soconnect();
Soconnect1669->setNodeField(QString("keyValue"));
Soconnect1669->setProtoField(QString("vl3_keyValue"));
SoIS1667->addChild(*Soconnect1669);

Soconnect* Soconnect1670 = new Soconnect();
Soconnect1670->setNodeField(QString("value_changed"));
Soconnect1670->setProtoField(QString("vl3_changed"));
SoIS1667->addChild(*Soconnect1670);

SoOrientationInterpolator1666->addChild(*SoIS1667);

SoProtoBody603->addChild(*SoOrientationInterpolator1666);

SoROUTE* SoROUTE1671 = new SoROUTE();
SoROUTE1671->setFromField(QString("fraction_changed"));
SoROUTE1671->setFromNode(QString("BehaviorClock"));
SoROUTE1671->setToField(QString("set_fraction"));
SoROUTE1671->setToNode(QString("vl3_OI"));
SoProtoBody603->addChild(*SoROUTE1671);

SoOrientationInterpolator* SoOrientationInterpolator1672 = new SoOrientationInterpolator();
SoOrientationInterpolator1672->setDEF(QString("vl4_OI"));
SoIS* SoIS1673 = new SoIS();
Soconnect* Soconnect1674 = new Soconnect();
Soconnect1674->setNodeField(QString("key"));
Soconnect1674->setProtoField(QString("vl4_key"));
SoIS1673->addChild(*Soconnect1674);

Soconnect* Soconnect1675 = new Soconnect();
Soconnect1675->setNodeField(QString("keyValue"));
Soconnect1675->setProtoField(QString("vl4_keyValue"));
SoIS1673->addChild(*Soconnect1675);

Soconnect* Soconnect1676 = new Soconnect();
Soconnect1676->setNodeField(QString("value_changed"));
Soconnect1676->setProtoField(QString("vl4_changed"));
SoIS1673->addChild(*Soconnect1676);

SoOrientationInterpolator1672->addChild(*SoIS1673);

SoProtoBody603->addChild(*SoOrientationInterpolator1672);

SoROUTE* SoROUTE1677 = new SoROUTE();
SoROUTE1677->setFromField(QString("fraction_changed"));
SoROUTE1677->setFromNode(QString("BehaviorClock"));
SoROUTE1677->setToField(QString("set_fraction"));
SoROUTE1677->setToNode(QString("vl4_OI"));
SoProtoBody603->addChild(*SoROUTE1677);

SoOrientationInterpolator* SoOrientationInterpolator1678 = new SoOrientationInterpolator();
SoOrientationInterpolator1678->setDEF(QString("vl5_OI"));
SoIS* SoIS1679 = new SoIS();
Soconnect* Soconnect1680 = new Soconnect();
Soconnect1680->setNodeField(QString("key"));
Soconnect1680->setProtoField(QString("vl5_key"));
SoIS1679->addChild(*Soconnect1680);

Soconnect* Soconnect1681 = new Soconnect();
Soconnect1681->setNodeField(QString("keyValue"));
Soconnect1681->setProtoField(QString("vl5_keyValue"));
SoIS1679->addChild(*Soconnect1681);

Soconnect* Soconnect1682 = new Soconnect();
Soconnect1682->setNodeField(QString("value_changed"));
Soconnect1682->setProtoField(QString("vl5_changed"));
SoIS1679->addChild(*Soconnect1682);

SoOrientationInterpolator1678->addChild(*SoIS1679);

SoProtoBody603->addChild(*SoOrientationInterpolator1678);

SoROUTE* SoROUTE1683 = new SoROUTE();
SoROUTE1683->setFromField(QString("fraction_changed"));
SoROUTE1683->setFromNode(QString("BehaviorClock"));
SoROUTE1683->setToField(QString("set_fraction"));
SoROUTE1683->setToNode(QString("vl5_OI"));
SoProtoBody603->addChild(*SoROUTE1683);

SoOrientationInterpolator* SoOrientationInterpolator1684 = new SoOrientationInterpolator();
SoOrientationInterpolator1684->setDEF(QString("vt1_OI"));
SoIS* SoIS1685 = new SoIS();
Soconnect* Soconnect1686 = new Soconnect();
Soconnect1686->setNodeField(QString("key"));
Soconnect1686->setProtoField(QString("vt1_key"));
SoIS1685->addChild(*Soconnect1686);

Soconnect* Soconnect1687 = new Soconnect();
Soconnect1687->setNodeField(QString("keyValue"));
Soconnect1687->setProtoField(QString("vt1_keyValue"));
SoIS1685->addChild(*Soconnect1687);

Soconnect* Soconnect1688 = new Soconnect();
Soconnect1688->setNodeField(QString("value_changed"));
Soconnect1688->setProtoField(QString("vt1_changed"));
SoIS1685->addChild(*Soconnect1688);

SoOrientationInterpolator1684->addChild(*SoIS1685);

SoProtoBody603->addChild(*SoOrientationInterpolator1684);

SoROUTE* SoROUTE1689 = new SoROUTE();
SoROUTE1689->setFromField(QString("fraction_changed"));
SoROUTE1689->setFromNode(QString("BehaviorClock"));
SoROUTE1689->setToField(QString("set_fraction"));
SoROUTE1689->setToNode(QString("vt1_OI"));
SoProtoBody603->addChild(*SoROUTE1689);

SoOrientationInterpolator* SoOrientationInterpolator1690 = new SoOrientationInterpolator();
SoOrientationInterpolator1690->setDEF(QString("vt2_OI"));
SoIS* SoIS1691 = new SoIS();
Soconnect* Soconnect1692 = new Soconnect();
Soconnect1692->setNodeField(QString("key"));
Soconnect1692->setProtoField(QString("vt2_key"));
SoIS1691->addChild(*Soconnect1692);

Soconnect* Soconnect1693 = new Soconnect();
Soconnect1693->setNodeField(QString("keyValue"));
Soconnect1693->setProtoField(QString("vt2_keyValue"));
SoIS1691->addChild(*Soconnect1693);

Soconnect* Soconnect1694 = new Soconnect();
Soconnect1694->setNodeField(QString("value_changed"));
Soconnect1694->setProtoField(QString("vt2_changed"));
SoIS1691->addChild(*Soconnect1694);

SoOrientationInterpolator1690->addChild(*SoIS1691);

SoProtoBody603->addChild(*SoOrientationInterpolator1690);

SoROUTE* SoROUTE1695 = new SoROUTE();
SoROUTE1695->setFromField(QString("fraction_changed"));
SoROUTE1695->setFromNode(QString("BehaviorClock"));
SoROUTE1695->setToField(QString("set_fraction"));
SoROUTE1695->setToNode(QString("vt2_OI"));
SoProtoBody603->addChild(*SoROUTE1695);

SoOrientationInterpolator* SoOrientationInterpolator1696 = new SoOrientationInterpolator();
SoOrientationInterpolator1696->setDEF(QString("vt3_OI"));
SoIS* SoIS1697 = new SoIS();
Soconnect* Soconnect1698 = new Soconnect();
Soconnect1698->setNodeField(QString("key"));
Soconnect1698->setProtoField(QString("vt3_key"));
SoIS1697->addChild(*Soconnect1698);

Soconnect* Soconnect1699 = new Soconnect();
Soconnect1699->setNodeField(QString("keyValue"));
Soconnect1699->setProtoField(QString("vt3_keyValue"));
SoIS1697->addChild(*Soconnect1699);

Soconnect* Soconnect1700 = new Soconnect();
Soconnect1700->setNodeField(QString("value_changed"));
Soconnect1700->setProtoField(QString("vt3_changed"));
SoIS1697->addChild(*Soconnect1700);

SoOrientationInterpolator1696->addChild(*SoIS1697);

SoProtoBody603->addChild(*SoOrientationInterpolator1696);

SoROUTE* SoROUTE1701 = new SoROUTE();
SoROUTE1701->setFromField(QString("fraction_changed"));
SoROUTE1701->setFromNode(QString("BehaviorClock"));
SoROUTE1701->setToField(QString("set_fraction"));
SoROUTE1701->setToNode(QString("vt3_OI"));
SoProtoBody603->addChild(*SoROUTE1701);

SoOrientationInterpolator* SoOrientationInterpolator1702 = new SoOrientationInterpolator();
SoOrientationInterpolator1702->setDEF(QString("vt4_OI"));
SoIS* SoIS1703 = new SoIS();
Soconnect* Soconnect1704 = new Soconnect();
Soconnect1704->setNodeField(QString("key"));
Soconnect1704->setProtoField(QString("vt4_key"));
SoIS1703->addChild(*Soconnect1704);

Soconnect* Soconnect1705 = new Soconnect();
Soconnect1705->setNodeField(QString("keyValue"));
Soconnect1705->setProtoField(QString("vt4_keyValue"));
SoIS1703->addChild(*Soconnect1705);

Soconnect* Soconnect1706 = new Soconnect();
Soconnect1706->setNodeField(QString("value_changed"));
Soconnect1706->setProtoField(QString("vt4_changed"));
SoIS1703->addChild(*Soconnect1706);

SoOrientationInterpolator1702->addChild(*SoIS1703);

SoProtoBody603->addChild(*SoOrientationInterpolator1702);

SoROUTE* SoROUTE1707 = new SoROUTE();
SoROUTE1707->setFromField(QString("fraction_changed"));
SoROUTE1707->setFromNode(QString("BehaviorClock"));
SoROUTE1707->setToField(QString("set_fraction"));
SoROUTE1707->setToNode(QString("vt4_OI"));
SoProtoBody603->addChild(*SoROUTE1707);

SoOrientationInterpolator* SoOrientationInterpolator1708 = new SoOrientationInterpolator();
SoOrientationInterpolator1708->setDEF(QString("vt5_OI"));
SoIS* SoIS1709 = new SoIS();
Soconnect* Soconnect1710 = new Soconnect();
Soconnect1710->setNodeField(QString("key"));
Soconnect1710->setProtoField(QString("vt5_key"));
SoIS1709->addChild(*Soconnect1710);

Soconnect* Soconnect1711 = new Soconnect();
Soconnect1711->setNodeField(QString("keyValue"));
Soconnect1711->setProtoField(QString("vt5_keyValue"));
SoIS1709->addChild(*Soconnect1711);

Soconnect* Soconnect1712 = new Soconnect();
Soconnect1712->setNodeField(QString("value_changed"));
Soconnect1712->setProtoField(QString("vt5_changed"));
SoIS1709->addChild(*Soconnect1712);

SoOrientationInterpolator1708->addChild(*SoIS1709);

SoProtoBody603->addChild(*SoOrientationInterpolator1708);

SoROUTE* SoROUTE1713 = new SoROUTE();
SoROUTE1713->setFromField(QString("fraction_changed"));
SoROUTE1713->setFromNode(QString("BehaviorClock"));
SoROUTE1713->setToField(QString("set_fraction"));
SoROUTE1713->setToNode(QString("vt5_OI"));
SoProtoBody603->addChild(*SoROUTE1713);

SoOrientationInterpolator* SoOrientationInterpolator1714 = new SoOrientationInterpolator();
SoOrientationInterpolator1714->setDEF(QString("vt6_OI"));
SoIS* SoIS1715 = new SoIS();
Soconnect* Soconnect1716 = new Soconnect();
Soconnect1716->setNodeField(QString("key"));
Soconnect1716->setProtoField(QString("vt6_key"));
SoIS1715->addChild(*Soconnect1716);

Soconnect* Soconnect1717 = new Soconnect();
Soconnect1717->setNodeField(QString("keyValue"));
Soconnect1717->setProtoField(QString("vt6_keyValue"));
SoIS1715->addChild(*Soconnect1717);

Soconnect* Soconnect1718 = new Soconnect();
Soconnect1718->setNodeField(QString("value_changed"));
Soconnect1718->setProtoField(QString("vt6_changed"));
SoIS1715->addChild(*Soconnect1718);

SoOrientationInterpolator1714->addChild(*SoIS1715);

SoProtoBody603->addChild(*SoOrientationInterpolator1714);

SoROUTE* SoROUTE1719 = new SoROUTE();
SoROUTE1719->setFromField(QString("fraction_changed"));
SoROUTE1719->setFromNode(QString("BehaviorClock"));
SoROUTE1719->setToField(QString("set_fraction"));
SoROUTE1719->setToNode(QString("vt6_OI"));
SoProtoBody603->addChild(*SoROUTE1719);

SoOrientationInterpolator* SoOrientationInterpolator1720 = new SoOrientationInterpolator();
SoOrientationInterpolator1720->setDEF(QString("vt7_OI"));
SoIS* SoIS1721 = new SoIS();
Soconnect* Soconnect1722 = new Soconnect();
Soconnect1722->setNodeField(QString("key"));
Soconnect1722->setProtoField(QString("vt7_key"));
SoIS1721->addChild(*Soconnect1722);

Soconnect* Soconnect1723 = new Soconnect();
Soconnect1723->setNodeField(QString("keyValue"));
Soconnect1723->setProtoField(QString("vt7_keyValue"));
SoIS1721->addChild(*Soconnect1723);

Soconnect* Soconnect1724 = new Soconnect();
Soconnect1724->setNodeField(QString("value_changed"));
Soconnect1724->setProtoField(QString("vt7_changed"));
SoIS1721->addChild(*Soconnect1724);

SoOrientationInterpolator1720->addChild(*SoIS1721);

SoProtoBody603->addChild(*SoOrientationInterpolator1720);

SoROUTE* SoROUTE1725 = new SoROUTE();
SoROUTE1725->setFromField(QString("fraction_changed"));
SoROUTE1725->setFromNode(QString("BehaviorClock"));
SoROUTE1725->setToField(QString("set_fraction"));
SoROUTE1725->setToNode(QString("vt7_OI"));
SoProtoBody603->addChild(*SoROUTE1725);

SoOrientationInterpolator* SoOrientationInterpolator1726 = new SoOrientationInterpolator();
SoOrientationInterpolator1726->setDEF(QString("vt8_OI"));
SoIS* SoIS1727 = new SoIS();
Soconnect* Soconnect1728 = new Soconnect();
Soconnect1728->setNodeField(QString("key"));
Soconnect1728->setProtoField(QString("vt8_key"));
SoIS1727->addChild(*Soconnect1728);

Soconnect* Soconnect1729 = new Soconnect();
Soconnect1729->setNodeField(QString("keyValue"));
Soconnect1729->setProtoField(QString("vt8_keyValue"));
SoIS1727->addChild(*Soconnect1729);

Soconnect* Soconnect1730 = new Soconnect();
Soconnect1730->setNodeField(QString("value_changed"));
Soconnect1730->setProtoField(QString("vt8_changed"));
SoIS1727->addChild(*Soconnect1730);

SoOrientationInterpolator1726->addChild(*SoIS1727);

SoProtoBody603->addChild(*SoOrientationInterpolator1726);

SoROUTE* SoROUTE1731 = new SoROUTE();
SoROUTE1731->setFromField(QString("fraction_changed"));
SoROUTE1731->setFromNode(QString("BehaviorClock"));
SoROUTE1731->setToField(QString("set_fraction"));
SoROUTE1731->setToNode(QString("vt8_OI"));
SoProtoBody603->addChild(*SoROUTE1731);

SoOrientationInterpolator* SoOrientationInterpolator1732 = new SoOrientationInterpolator();
SoOrientationInterpolator1732->setDEF(QString("vt9_OI"));
SoIS* SoIS1733 = new SoIS();
Soconnect* Soconnect1734 = new Soconnect();
Soconnect1734->setNodeField(QString("key"));
Soconnect1734->setProtoField(QString("vt9_key"));
SoIS1733->addChild(*Soconnect1734);

Soconnect* Soconnect1735 = new Soconnect();
Soconnect1735->setNodeField(QString("keyValue"));
Soconnect1735->setProtoField(QString("vt9_keyValue"));
SoIS1733->addChild(*Soconnect1735);

Soconnect* Soconnect1736 = new Soconnect();
Soconnect1736->setNodeField(QString("value_changed"));
Soconnect1736->setProtoField(QString("vt9_changed"));
SoIS1733->addChild(*Soconnect1736);

SoOrientationInterpolator1732->addChild(*SoIS1733);

SoProtoBody603->addChild(*SoOrientationInterpolator1732);

SoROUTE* SoROUTE1737 = new SoROUTE();
SoROUTE1737->setFromField(QString("fraction_changed"));
SoROUTE1737->setFromNode(QString("BehaviorClock"));
SoROUTE1737->setToField(QString("set_fraction"));
SoROUTE1737->setToNode(QString("vt9_OI"));
SoProtoBody603->addChild(*SoROUTE1737);

SoOrientationInterpolator* SoOrientationInterpolator1738 = new SoOrientationInterpolator();
SoOrientationInterpolator1738->setDEF(QString("vt10_OI"));
SoIS* SoIS1739 = new SoIS();
Soconnect* Soconnect1740 = new Soconnect();
Soconnect1740->setNodeField(QString("key"));
Soconnect1740->setProtoField(QString("vt10_key"));
SoIS1739->addChild(*Soconnect1740);

Soconnect* Soconnect1741 = new Soconnect();
Soconnect1741->setNodeField(QString("keyValue"));
Soconnect1741->setProtoField(QString("vt10_keyValue"));
SoIS1739->addChild(*Soconnect1741);

Soconnect* Soconnect1742 = new Soconnect();
Soconnect1742->setNodeField(QString("value_changed"));
Soconnect1742->setProtoField(QString("vt10_changed"));
SoIS1739->addChild(*Soconnect1742);

SoOrientationInterpolator1738->addChild(*SoIS1739);

SoProtoBody603->addChild(*SoOrientationInterpolator1738);

SoROUTE* SoROUTE1743 = new SoROUTE();
SoROUTE1743->setFromField(QString("fraction_changed"));
SoROUTE1743->setFromNode(QString("BehaviorClock"));
SoROUTE1743->setToField(QString("set_fraction"));
SoROUTE1743->setToNode(QString("vt10_OI"));
SoProtoBody603->addChild(*SoROUTE1743);

SoOrientationInterpolator* SoOrientationInterpolator1744 = new SoOrientationInterpolator();
SoOrientationInterpolator1744->setDEF(QString("vt11_OI"));
SoIS* SoIS1745 = new SoIS();
Soconnect* Soconnect1746 = new Soconnect();
Soconnect1746->setNodeField(QString("key"));
Soconnect1746->setProtoField(QString("vt11_key"));
SoIS1745->addChild(*Soconnect1746);

Soconnect* Soconnect1747 = new Soconnect();
Soconnect1747->setNodeField(QString("keyValue"));
Soconnect1747->setProtoField(QString("vt11_keyValue"));
SoIS1745->addChild(*Soconnect1747);

Soconnect* Soconnect1748 = new Soconnect();
Soconnect1748->setNodeField(QString("value_changed"));
Soconnect1748->setProtoField(QString("vt11_changed"));
SoIS1745->addChild(*Soconnect1748);

SoOrientationInterpolator1744->addChild(*SoIS1745);

SoProtoBody603->addChild(*SoOrientationInterpolator1744);

SoROUTE* SoROUTE1749 = new SoROUTE();
SoROUTE1749->setFromField(QString("fraction_changed"));
SoROUTE1749->setFromNode(QString("BehaviorClock"));
SoROUTE1749->setToField(QString("set_fraction"));
SoROUTE1749->setToNode(QString("vt11_OI"));
SoProtoBody603->addChild(*SoROUTE1749);

SoOrientationInterpolator* SoOrientationInterpolator1750 = new SoOrientationInterpolator();
SoOrientationInterpolator1750->setDEF(QString("vt12_OI"));
SoIS* SoIS1751 = new SoIS();
Soconnect* Soconnect1752 = new Soconnect();
Soconnect1752->setNodeField(QString("key"));
Soconnect1752->setProtoField(QString("vt12_key"));
SoIS1751->addChild(*Soconnect1752);

Soconnect* Soconnect1753 = new Soconnect();
Soconnect1753->setNodeField(QString("keyValue"));
Soconnect1753->setProtoField(QString("vt12_keyValue"));
SoIS1751->addChild(*Soconnect1753);

Soconnect* Soconnect1754 = new Soconnect();
Soconnect1754->setNodeField(QString("value_changed"));
Soconnect1754->setProtoField(QString("vt12_changed"));
SoIS1751->addChild(*Soconnect1754);

SoOrientationInterpolator1750->addChild(*SoIS1751);

SoProtoBody603->addChild(*SoOrientationInterpolator1750);

SoROUTE* SoROUTE1755 = new SoROUTE();
SoROUTE1755->setFromField(QString("fraction_changed"));
SoROUTE1755->setFromNode(QString("BehaviorClock"));
SoROUTE1755->setToField(QString("set_fraction"));
SoROUTE1755->setToNode(QString("vt12_OI"));
SoProtoBody603->addChild(*SoROUTE1755);

SoProtoDeclare20->addChild(*SoProtoBody603);

SoNode18->addChild(*SoProtoDeclare20);

SoProtoDeclare* SoProtoDeclare1756 = new SoProtoDeclare();
SoProtoDeclare1756->setName(QString("HAnimBodyBehaviorChooser"));
SoProtoDeclare1756->setAppinfo(QString("The HAnimBodyBehaviorChooser node allows an author to select one of several HAnimHumanoid bodies and simultaneously apply multiple HAnimBehavior animations to the active body. Individual behaviors may be enabled or disabled at any time."));
SoProtoInterface* SoProtoInterface1757 = new SoProtoInterface();
//TODO: supported Level of Articulation (LOA) might be adapted to more efficiently setup/teardown pertinent ROUTEs
//accessType=\"inputOutput\" avoided to maintain backwards compatilibility with VRML97 scripting constraints
//shared common TimeSensor inputs for all BehaviorAnimation nodes, connected via ROUTEs
//TODO: consider named accessors, e.g. enableBehaviorByName and disableBehaviorByName
//TODO: consider addBody, removeBody, addBehavior, removeBehavior
//TODO: consider startBehaviorByIndex, stopBehaviorByIndex, startBehaviorByName, stopBehaviorByName
Sofield* Sofield1758 = new Sofield();
Sofield1758->setName(QString("supportedLOA"));
Sofield1758->setAccessType(QString("inputOutput"));
Sofield1758->setAppinfo(QString("Level of Articulation (LOA) support needed by authored HAnimBehavior set of OrientationInterpolator values. Legal values 0 1 2 3."));
Sofield1758->setType(QString("SFInt32"));
Sofield1758->setValue(QString("-1"));
SoProtoInterface1757->addChild(*Sofield1758);

Sofield* Sofield1759 = new Sofield();
Sofield1759->setName(QString("HumanoidArray"));
Sofield1759->setAccessType(QString("initializeOnly"));
Sofield1759->setAppinfo(QString("[HAnimHumanoid] nodes only"));
Sofield1759->setType(QString("MFNode"));
//default NULL
SoProtoInterface1757->addChild(*Sofield1759);

Sofield* Sofield1760 = new Sofield();
Sofield1760->setName(QString("whichBody"));
Sofield1760->setAccessType(QString("initializeOnly"));
Sofield1760->setAppinfo(QString("whichBody is selected default is initial member of HumanoidArray"));
Sofield1760->setType(QString("SFInt32"));
Sofield1760->setValue(QString("-1"));
SoProtoInterface1757->addChild(*Sofield1760);

Sofield* Sofield1761 = new Sofield();
Sofield1761->setName(QString("set_whichBody"));
Sofield1761->setAccessType(QString("inputOnly"));
Sofield1761->setAppinfo(QString("whichBody is selected default is none"));
Sofield1761->setType(QString("SFInt32"));
SoProtoInterface1757->addChild(*Sofield1761);

Sofield* Sofield1762 = new Sofield();
Sofield1762->setName(QString("whichBody_changed"));
Sofield1762->setAccessType(QString("outputOnly"));
Sofield1762->setAppinfo(QString("whichBody is selected default is none"));
Sofield1762->setType(QString("SFInt32"));
SoProtoInterface1757->addChild(*Sofield1762);

Sofield* Sofield1763 = new Sofield();
Sofield1763->setName(QString("hAnimBehaviorNodes"));
Sofield1763->setAccessType(QString("initializeOnly"));
Sofield1763->setAppinfo(QString("[HAnimBehavior] nodes only some or all of which may be enabled. Warning: do not animate a single joint with more than one interpolator at a given time."));
Sofield1763->setType(QString("MFNode"));
//default NULL
SoProtoInterface1757->addChild(*Sofield1763);

Sofield* Sofield1764 = new Sofield();
Sofield1764->setName(QString("enabledBehaviorsArray"));
Sofield1764->setAccessType(QString("initializeOnly"));
Sofield1764->setAppinfo(QString("indicate which HAnimBehavior nodes are activated, empty indicates all enabled true"));
Sofield1764->setType(QString("MFBool"));
//no default values
SoProtoInterface1757->addChild(*Sofield1764);

Sofield* Sofield1765 = new Sofield();
Sofield1765->setName(QString("enableBehavior"));
Sofield1765->setAccessType(QString("inputOnly"));
Sofield1765->setAppinfo(QString("enable corresponding behavior identified by index number"));
Sofield1765->setType(QString("SFInt32"));
SoProtoInterface1757->addChild(*Sofield1765);

Sofield* Sofield1766 = new Sofield();
Sofield1766->setName(QString("disableBehavior"));
Sofield1766->setAccessType(QString("inputOnly"));
Sofield1766->setAppinfo(QString("disable corresponding behavior identified by index number"));
Sofield1766->setType(QString("SFInt32"));
SoProtoInterface1757->addChild(*Sofield1766);

Sofield* Sofield1767 = new Sofield();
Sofield1767->setName(QString("startTime"));
Sofield1767->setAccessType(QString("inputOutput"));
Sofield1767->setType(QString("SFTime"));
Sofield1767->setValue(QString("0"));
SoProtoInterface1757->addChild(*Sofield1767);

Sofield* Sofield1768 = new Sofield();
Sofield1768->setName(QString("stopTime"));
Sofield1768->setAccessType(QString("inputOutput"));
Sofield1768->setType(QString("SFTime"));
Sofield1768->setValue(QString("0"));
SoProtoInterface1757->addChild(*Sofield1768);

SoProtoDeclare1756->addChild(*SoProtoInterface1757);

SoProtoBody* SoProtoBody1769 = new SoProtoBody();
SoSwitch* SoSwitch1770 = new SoSwitch();
SoSwitch1770->setDEF(QString("BodySwitch"));
SoSwitch1770->setWhichChoice(-1);
SoIS* SoIS1771 = new SoIS();
Soconnect* Soconnect1772 = new Soconnect();
Soconnect1772->setNodeField(QString("whichChoice"));
Soconnect1772->setProtoField(QString("whichBody"));
SoIS1771->addChild(*Soconnect1772);

Soconnect* Soconnect1773 = new Soconnect();
Soconnect1773->setNodeField(QString("children"));
Soconnect1773->setProtoField(QString("HumanoidArray"));
SoIS1771->addChild(*Soconnect1773);

SoSwitch1770->addChild(*SoIS1771);

SoProtoBody1769->addChild(*SoSwitch1770);

//note that other nodes following the first node in the ProtoBody are not rendered but remain active nevertheless
SoGroup* SoGroup1774 = new SoGroup();
SoGroup1774->setDEF(QString("BehaviorArrayHolder"));
SoIS* SoIS1775 = new SoIS();
Soconnect* Soconnect1776 = new Soconnect();
Soconnect1776->setNodeField(QString("children"));
Soconnect1776->setProtoField(QString("hAnimBehaviorNodes"));
SoIS1775->addChild(*Soconnect1776);

SoGroup1774->addChild(*SoIS1775);

SoProtoBody1769->addChild(*SoGroup1774);

SoTimeSensor* SoTimeSensor1777 = new SoTimeSensor();
SoTimeSensor1777->setDEF(QString("TimeSensorHolderStartStopTimes"));
SoIS* SoIS1778 = new SoIS();
Soconnect* Soconnect1779 = new Soconnect();
Soconnect1779->setNodeField(QString("startTime"));
Soconnect1779->setProtoField(QString("startTime"));
SoIS1778->addChild(*Soconnect1779);

Soconnect* Soconnect1780 = new Soconnect();
Soconnect1780->setNodeField(QString("stopTime"));
Soconnect1780->setProtoField(QString("stopTime"));
SoIS1778->addChild(*Soconnect1780);

SoTimeSensor1777->addChild(*SoIS1778);

SoProtoBody1769->addChild(*SoTimeSensor1777);

SoSwitch* SoSwitch1781 = new SoSwitch();
SoSwitch1781->setDEF(QString("SupportedLoaHolder2"));
SoSwitch1781->setWhichChoice(-1);
SoIS* SoIS1782 = new SoIS();
Soconnect* Soconnect1783 = new Soconnect();
Soconnect1783->setNodeField(QString("whichChoice"));
Soconnect1783->setProtoField(QString("supportedLOA"));
SoIS1782->addChild(*Soconnect1783);

SoSwitch1781->addChild(*SoIS1782);

SoProtoBody1769->addChild(*SoSwitch1781);

SoScript* SoScript1784 = new SoScript();
SoScript1784->setDEF(QString("BehaviorSelectionScript"));
SoScript1784->setDirectOutput(true);
SoScript1784->setUrl(new QString[]{QString("HAnimBehaviorPrototypesScript.js"), QString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/HAnimBehaviorPrototypesScript.js")}, 2);
Sofield* Sofield1785 = new Sofield();
Sofield1785->setName(QString("HumanoidArray"));
Sofield1785->setAccessType(QString("initializeOnly"));
Sofield1785->setAppinfo(QString("[HAnimHumanoid] nodes only"));
Sofield1785->setType(QString("MFNode"));
SoScript1784->addChild(*Sofield1785);

Sofield* Sofield1786 = new Sofield();
Sofield1786->setName(QString("whichBody"));
Sofield1786->setAccessType(QString("initializeOnly"));
Sofield1786->setAppinfo(QString("whichBody is selected default is none"));
Sofield1786->setType(QString("SFInt32"));
SoScript1784->addChild(*Sofield1786);

Sofield* Sofield1787 = new Sofield();
Sofield1787->setName(QString("set_whichBody"));
Sofield1787->setAccessType(QString("inputOnly"));
Sofield1787->setAppinfo(QString("whichBody is selected default is none"));
Sofield1787->setType(QString("SFInt32"));
SoScript1784->addChild(*Sofield1787);

Sofield* Sofield1788 = new Sofield();
Sofield1788->setName(QString("whichBody_changed"));
Sofield1788->setAccessType(QString("outputOnly"));
Sofield1788->setAppinfo(QString("whichBody is selected default is none"));
Sofield1788->setType(QString("SFInt32"));
SoScript1784->addChild(*Sofield1788);

Sofield* Sofield1789 = new Sofield();
Sofield1789->setName(QString("hAnimBehaviorNodes"));
Sofield1789->setAccessType(QString("initializeOnly"));
Sofield1789->setAppinfo(QString("[HAnimBehavior] nodes only"));
Sofield1789->setType(QString("MFNode"));
//TODO: might consider accessType=\"inputOutput\" if VRML97 compatibility not needed
SoScript1784->addChild(*Sofield1789);

Sofield* Sofield1790 = new Sofield();
Sofield1790->setName(QString("enabledBehaviorsArray"));
Sofield1790->setAccessType(QString("initializeOnly"));
Sofield1790->setType(QString("MFBool"));
SoScript1784->addChild(*Sofield1790);

Sofield* Sofield1791 = new Sofield();
Sofield1791->setName(QString("enableBehavior"));
Sofield1791->setAccessType(QString("inputOnly"));
Sofield1791->setAppinfo(QString("enable corresponding behavior"));
Sofield1791->setType(QString("SFInt32"));
SoScript1784->addChild(*Sofield1791);

Sofield* Sofield1792 = new Sofield();
Sofield1792->setName(QString("disableBehavior"));
Sofield1792->setAccessType(QString("inputOnly"));
Sofield1792->setAppinfo(QString("enable corresponding behavior"));
Sofield1792->setType(QString("SFInt32"));
SoScript1784->addChild(*Sofield1792);

Sofield* Sofield1793 = new Sofield();
Sofield1793->setName(QString("timeSensorNode"));
Sofield1793->setAccessType(QString("initializeOnly"));
Sofield1793->setType(QString("SFNode"));
SoTimeSensor* SoTimeSensor1794 = new SoTimeSensor();
SoTimeSensor1794->setUSE(QString("TimeSensorHolderStartStopTimes"));
Sofield1793->addChild(*SoTimeSensor1794);

SoScript1784->addChild(*Sofield1793);

Sofield* Sofield1795 = new Sofield();
Sofield1795->setName(QString("previousBodyIndex"));
Sofield1795->setAccessType(QString("initializeOnly"));
Sofield1795->setAppinfo(QString("remember prior body index to avoid unnecessary ROUTE teardown and creation"));
Sofield1795->setType(QString("SFInt32"));
Sofield1795->setValue(QString("-1"));
SoScript1784->addChild(*Sofield1795);

Sofield* Sofield1796 = new Sofield();
Sofield1796->setName(QString("traceEnabled"));
Sofield1796->setAccessType(QString("initializeOnly"));
Sofield1796->setType(QString("SFBool"));
Sofield1796->setValue(QString("true"));
SoScript1784->addChild(*Sofield1796);

SoIS* SoIS1797 = new SoIS();
Soconnect* Soconnect1798 = new Soconnect();
Soconnect1798->setNodeField(QString("HumanoidArray"));
Soconnect1798->setProtoField(QString("HumanoidArray"));
SoIS1797->addChild(*Soconnect1798);

Soconnect* Soconnect1799 = new Soconnect();
Soconnect1799->setNodeField(QString("whichBody"));
Soconnect1799->setProtoField(QString("whichBody"));
SoIS1797->addChild(*Soconnect1799);

Soconnect* Soconnect1800 = new Soconnect();
Soconnect1800->setNodeField(QString("set_whichBody"));
Soconnect1800->setProtoField(QString("set_whichBody"));
SoIS1797->addChild(*Soconnect1800);

Soconnect* Soconnect1801 = new Soconnect();
Soconnect1801->setNodeField(QString("whichBody_changed"));
Soconnect1801->setProtoField(QString("whichBody_changed"));
SoIS1797->addChild(*Soconnect1801);

Soconnect* Soconnect1802 = new Soconnect();
Soconnect1802->setNodeField(QString("hAnimBehaviorNodes"));
Soconnect1802->setProtoField(QString("hAnimBehaviorNodes"));
SoIS1797->addChild(*Soconnect1802);

Soconnect* Soconnect1803 = new Soconnect();
Soconnect1803->setNodeField(QString("enabledBehaviorsArray"));
Soconnect1803->setProtoField(QString("enabledBehaviorsArray"));
SoIS1797->addChild(*Soconnect1803);

Soconnect* Soconnect1804 = new Soconnect();
Soconnect1804->setNodeField(QString("enableBehavior"));
Soconnect1804->setProtoField(QString("enableBehavior"));
SoIS1797->addChild(*Soconnect1804);

Soconnect* Soconnect1805 = new Soconnect();
Soconnect1805->setNodeField(QString("disableBehavior"));
Soconnect1805->setProtoField(QString("disableBehavior"));
SoIS1797->addChild(*Soconnect1805);

SoScript1784->addChild(*SoIS1797);

SoProtoBody1769->addChild(*SoScript1784);

SoProtoDeclare1756->addChild(*SoProtoBody1769);

SoNode18->addChild(*SoProtoDeclare1756);

//TODO: Goal is to have 3 different ways to present a body: local creation, Inline with IMPORT/EXPORT, or external prototype.
SoProtoInstance* SoProtoInstance1806 = new SoProtoInstance();
SoProtoInstance1806->setName(QString("HAnimBehavior"));
SoProtoInstance1806->setDEF(QString("BehaviorTest1"));
//only one PositionInterpolator key/keyValue definition for entire humanoid - optional
//must have paired overrides of each key/keyValue array being defined
SoField* SoField1807 = new SoField();
SoField1807->setName(QString("HumanoidRoot_translation_key"));
SoField1807->setValue(QString("0 0.25 0.5 0.75 1"));
SoProtoInstance1806->addChild(*SoField1807);

SoField* SoField1808 = new SoField();
SoField1808->setName(QString("HumanoidRoot_translation_keyValue"));
SoField1808->setValue(QString("0 0 0 0 0 10 0 0 20 0 0 30 0 0 40 0 0 50"));
SoProtoInstance1806->addChild(*SoField1808);

SoField* SoField1809 = new SoField();
SoField1809->setName(QString("r_ankle_key"));
SoField1809->setValue(QString("0 0.5 1"));
SoProtoInstance1806->addChild(*SoField1809);

SoField* SoField1810 = new SoField();
SoField1810->setName(QString("r_ankle_keyValue"));
SoField1810->setValue(QString("0 1 0 0 0 1 0 0.2 0 1 0 0.4"));
SoProtoInstance1806->addChild(*SoField1810);

SoNode18->addChild(*SoProtoInstance1806);

SoProtoInstance* SoProtoInstance1811 = new SoProtoInstance();
SoProtoInstance1811->setName(QString("HAnimBodyBehaviorChooser"));
SoProtoInstance1811->setDEF(QString("ChooserTest"));
SoField* SoField1812 = new SoField();
SoField1812->setName(QString("HumanoidArray"));
SoHAnimHumanoid* SoHAnimHumanoid1813 = new SoHAnimHumanoid();
SoHAnimHumanoid1813->X3DNode::setName(QString("DiamondManLOA-1"));
SoHAnimHumanoid1813->setDEF(QString("hanim_DiamondManLOA-1"));
SoHAnimHumanoid1813->setVersion(QString("2.0"));
SoField1812->addChild(*SoHAnimHumanoid1813);

SoProtoInstance1811->addChild(*SoField1812);

SoField* SoField1814 = new SoField();
SoField1814->setName(QString("whichBody"));
SoField1814->setValue(QString("0"));
SoProtoInstance1811->addChild(*SoField1814);

SoField* SoField1815 = new SoField();
SoField1815->setName(QString("hAnimBehaviorNodes"));
SoProtoInstance* SoProtoInstance1816 = new SoProtoInstance();
SoProtoInstance1816->setName(QString("HAnimBehavior"));
SoProtoInstance1816->setUSE(QString("BehaviorTest1"));
SoField1815->addChild(*SoProtoInstance1816);

SoProtoInstance1811->addChild(*SoField1815);

SoField* SoField1817 = new SoField();
SoField1817->setName(QString("enabledBehaviorsArray"));
SoField1817->setValue(QString("true"));
SoProtoInstance1811->addChild(*SoField1817);

SoNode18->addChild(*SoProtoInstance1811);

SoSceneManager0->setSceneGraph(*SoNode18);

return 0;
}
