
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
SoSceneManager0->setProfile(QString("Full"));
SoSceneManager0->setVersion(QString("4.0"));
Sohead* Sohead1 = new Sohead();
Someta* Someta2 = new Someta();
Someta2->setName(QString("title"));
Someta2->setContent(QString("HAnimPosePrototype.x3d"));
Sohead1->addMeta(*Someta2);

Someta* Someta3 = new Someta();
Someta3->setName(QString("description"));
Someta3->setContent(QString("Define an experimental new node to simply capture a single pose for an HAnimHumanoid model. Expected usage is to allow HAnimHumanoid to contain multiple Pose nodes which can be activated and composed."));
Sohead1->addMeta(*Someta3);

Someta* Someta4 = new Someta();
Someta4->setName(QString("info"));
Someta4->setContent(QString("This model also takes advantage of Inline/IMPORT capabilities (equivalent to USE node) and thus avoids fully copying a large, complex HAnimHumanoid model. Multiple HAnimHumanoid models have been tested satisfactorily, for HAnim version 1 (X3d 3) AND HAnim version 2 (X3D 4)."));
Sohead1->addMeta(*Someta4);

Someta* Someta5 = new Someta();
Someta5->setName(QString("created"));
Someta5->setContent(QString("2 October 2025"));
Sohead1->addMeta(*Someta5);

Someta* Someta6 = new Someta();
Someta6->setName(QString("modified"));
Someta6->setContent(QString("14 December 2025"));
Sohead1->addMeta(*Someta6);

Someta* Someta7 = new Someta();
Someta7->setName(QString("creator"));
Someta7->setContent(QString("Don Brutzman"));
Sohead1->addMeta(*Someta7);

Someta* Someta8 = new Someta();
Someta8->setName(QString("creator"));
Someta8->setContent(QString("Joe Williams"));
Sohead1->addMeta(*Someta8);

Someta* Someta9 = new Someta();
Someta9->setName(QString("contributor"));
Someta9->setContent(QString("Holger Seelig for X_ITE, Sunrize on Windows, scripting guidance, and Inline IMPORT functionality as node-reference equivalent to USE"));
Sohead1->addMeta(*Someta9);

Someta* Someta10 = new Someta();
Someta10->setName(QString("reference"));
Someta10->setContent(QString("HAnimPosePrototype.console.txt"));
Sohead1->addMeta(*Someta10);

Someta* Someta11 = new Someta();
Someta11->setName(QString("MovingImage"));
Someta11->setContent(QString("demonstration video https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Poses/HAnimPosePrototypeDemoVideo.mp4"));
Sohead1->addMeta(*Someta11);

Someta* Someta12 = new Someta();
Someta12->setName(QString("Image"));
Someta12->setContent(QString("HAnimPoseExampleTouchDown.png"));
Sohead1->addMeta(*Someta12);

Someta* Someta13 = new Someta();
Someta13->setName(QString("Image"));
Someta13->setContent(QString("HAnimPoseExampleTouchDownFaceLeftAPose.png"));
Sohead1->addMeta(*Someta13);

Someta* Someta14 = new Someta();
Someta14->setName(QString("Image"));
Someta14->setContent(QString("images/HAnimPoseExampleBoxMan1.png"));
Sohead1->addMeta(*Someta14);

Someta* Someta15 = new Someta();
Someta15->setName(QString("Image"));
Someta15->setContent(QString("images/HAnimPoseExampleBoxMan2.png"));
Sohead1->addMeta(*Someta15);

Someta* Someta16 = new Someta();
Someta16->setName(QString("Image"));
Someta16->setContent(QString("images/HAnimPoseExampleJoeKick.png"));
Sohead1->addMeta(*Someta16);

Someta* Someta17 = new Someta();
Someta17->setName(QString("Image"));
Someta17->setContent(QString("images/HAnimPoseExampleJoeSkeletonSkinSite.png"));
Sohead1->addMeta(*Someta17);

Someta* Someta18 = new Someta();
Someta18->setName(QString("Image"));
Someta18->setContent(QString("images/HAnimPoseExampleKoreanCharacter01Jin.png"));
Sohead1->addMeta(*Someta18);

Someta* Someta19 = new Someta();
Someta19->setName(QString("Image"));
Someta19->setContent(QString("images/HAnimPoseExampleKoreanCharacter02Chul.png"));
Sohead1->addMeta(*Someta19);

Someta* Someta20 = new Someta();
Someta20->setName(QString("Image"));
Someta20->setContent(QString("images/HAnimPoseExampleKoreanCharacter03Hyun.png"));
Sohead1->addMeta(*Someta20);

Someta* Someta21 = new Someta();
Someta21->setName(QString("Image"));
Someta21->setContent(QString("images/HAnimPoseExampleKoreanCharacter04Young.png"));
Sohead1->addMeta(*Someta21);

Someta* Someta22 = new Someta();
Someta22->setName(QString("Image"));
Someta22->setContent(QString("images/HAnimPoseExampleKoreanCharacter05Ju.png"));
Sohead1->addMeta(*Someta22);

Someta* Someta23 = new Someta();
Someta23->setName(QString("Image"));
Someta23->setContent(QString("images/HAnimPoseExampleKoreanCharacter06Ga.png"));
Sohead1->addMeta(*Someta23);

Someta* Someta24 = new Someta();
Someta24->setName(QString("Image"));
Someta24->setContent(QString("images/HAnimPoseExampleKoreanCharacter07No.png"));
Sohead1->addMeta(*Someta24);

Someta* Someta25 = new Someta();
Someta25->setName(QString("Image"));
Someta25->setContent(QString("images/HAnimPoseExampleKoreanCharacter08Da.png"));
Sohead1->addMeta(*Someta25);

Someta* Someta26 = new Someta();
Someta26->setName(QString("Image"));
Someta26->setContent(QString("images/HAnimPoseExampleKoreanCharacter09Ru.png"));
Sohead1->addMeta(*Someta26);

Someta* Someta27 = new Someta();
Someta27->setName(QString("Image"));
Someta27->setContent(QString("images/HAnimPoseExampleKoreanCharacter10Mi.png"));
Sohead1->addMeta(*Someta27);

Someta* Someta28 = new Someta();
Someta28->setName(QString("Image"));
Someta28->setContent(QString("images/HAnimPoseExampleKoreanCharacter11Min.png"));
Sohead1->addMeta(*Someta28);

Someta* Someta29 = new Someta();
Someta29->setName(QString("Image"));
Someta29->setContent(QString("images/HAnimPoseExampleKoreanCharacter12Sun.png"));
Sohead1->addMeta(*Someta29);

Someta* Someta30 = new Someta();
Someta30->setName(QString("specificationSection"));
Someta30->setContent(QString("HAnim Architecture volume 1 version 2.1 draft, clause 6 Object interfaces, section 6.4 Pose"));
Sohead1->addMeta(*Someta30);

Someta* Someta31 = new Someta();
Someta31->setName(QString("specificationUrl"));
Someta31->setContent(QString("https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19774/ISO-IEC19774-1/ISO-IEC19774-1v2.1/ISO-IEC19774-1v2.1-WD/Architecture/ObjectInterfaces.html#Pose"));
Sohead1->addMeta(*Someta31);

Someta* Someta32 = new Someta();
Someta32->setName(QString("specificationSection"));
Someta32->setContent(QString("HAnim Architecture volume 1 version 2.1 draft, clause 4 Concepts, section 4.8.2 Modelling of human-like HAnim figures"));
Sohead1->addMeta(*Someta32);

Someta* Someta33 = new Someta();
Someta33->setName(QString("specificationUrl"));
Someta33->setContent(QString("https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19774/ISO-IEC19774-1/ISO-IEC19774-1v2.1/ISO-IEC19774-1v2.1-WD/Architecture/concepts.html#ModellingHumanLikeHAnimFigures"));
Sohead1->addMeta(*Someta33);

Someta* Someta34 = new Someta();
Someta34->setName(QString("specificationSection"));
Someta34->setContent(QString("HAnim Architecture volume 1 version 2.1 draft, clause 4 Concepts, section 4.8.3 Poses"));
Sohead1->addMeta(*Someta34);

Someta* Someta35 = new Someta();
Someta35->setName(QString("specificationUrl"));
Someta35->setContent(QString("https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19774/ISO-IEC19774-1/ISO-IEC19774-1v2.1/ISO-IEC19774-1v2.1-WD/Architecture/concepts.html#Poses"));
Sohead1->addMeta(*Someta35);

Someta* Someta36 = new Someta();
Someta36->setName(QString("reference"));
Someta36->setContent(QString("Direct scene manipulations with Javascript, https://doc.instantreality.org/tutorial/direct-scene-manipulations-with-javascript"));
Sohead1->addMeta(*Someta36);

Someta* Someta37 = new Someta();
Someta37->setName(QString("reference"));
Someta37->setContent(QString("earlier version of this prototype: originals/HAnimPosePreliminary.x3d"));
Sohead1->addMeta(*Someta37);

Someta* Someta38 = new Someta();
Someta38->setName(QString("generator"));
Someta38->setContent(QString("X3D-Edit 4.0, https://www.web3d.org/x3d/tools/X3D-Edit"));
Sohead1->addMeta(*Someta38);

Someta* Someta39 = new Someta();
Someta39->setName(QString("generator"));
Someta39->setContent(QString("Sunrize X3D Editor V1.11.1, https://create3000.github.io/sunrize"));
Sohead1->addMeta(*Someta39);

Someta* Someta40 = new Someta();
Someta40->setName(QString("identifier"));
Someta40->setContent(QString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Poses/HAnimPosePrototype.x3d"));
Sohead1->addMeta(*Someta40);

Someta* Someta41 = new Someta();
Someta41->setName(QString("license"));
Someta41->setContent(QString("https://www.web3d.org/x3d/content/examples/license.html"));
Sohead1->addMeta(*Someta41);

SoSceneManager0->setHead(*Sohead1);

SoNode* SoNode42 = new SoNode();
SoWorldInfo* SoWorldInfo43 = new SoWorldInfo();
SoWorldInfo43->setDEF(QString("ModelInfo"));
SoWorldInfo43->setInfo(new QString[]{QString("Design to illustrate a potential HAnimPose node")}, 1);
SoWorldInfo43->setTitle(QString("HAnimPosePrototype.x3d"));
SoNode42->addChild(*SoWorldInfo43);

SoBackground* SoBackground44 = new SoBackground();
SoBackground44->setSkyColor(new float[]{0.8,0.8,1.0}, 3);
SoNode42->addChild(*SoBackground44);

SoNavigationInfo* SoNavigationInfo45 = new SoNavigationInfo();
SoNode42->addChild(*SoNavigationInfo45);

SoGroup* SoGroup46 = new SoGroup();
SoGroup46->setDEF(QString("HandleInlineLoading"));
//Multiple HAnimHumanoid Inline/IMPORT models are available to support testing: Characters/ JinLOA1 JinLOA2 JinLOA3 JinLOA4 ../Skin/JoeKick ../Skin/JoeSkeletonSkinSite ../Skin/BoxMan1 ../Skin/BoxMan2
//Also tested satisfactorily: KoreanCharacter01Jin KoreanCharacter02Chul KoreanCharacter03Hyun KoreanCharacter04Young KoreanCharacter05Ju KoreanCharacter06Ga KoreanCharacter07No KoreanCharacter08Da KoreanCharacter09Ru KoreanCharacter10Mi KoreanCharacter11Min KoreanCharacter12Sun
SoInline* SoInline47 = new SoInline();
SoInline47->setDEF(QString("HumanoidInline"));
SoInline47->setDescription(QString("remote HAnimHumanoid for IMPORT"));
SoInline47->setUrl(new QString[]{QString("../Skin/BoxMan2.x3d"), QString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/BoxMan2.x3d")}, 2);
SoGroup46->addChild(*SoInline47);

//Note that the following importedDEF must match the EXPORT name found in remote file
SoIMPORT* SoIMPORT48 = new SoIMPORT();
SoIMPORT48->setAS(QString("HumanoidImported"));
SoIMPORT48->setImportedDEF(QString("BoxMan2"));
SoIMPORT48->setInlineDEF(QString("HumanoidInline"));
SoGroup46->addChild(*SoIMPORT48);

SoLoadSensor* SoLoadSensor49 = new SoLoadSensor();
SoLoadSensor49->setDEF(QString("HumanoidInlineLoadSensor"));
SoLoadSensor49->setTimeOut(2);
SoInline* SoInline50 = new SoInline();
SoInline50->setUSE(QString("HumanoidInline"));
SoLoadSensor49->addChildren(SoInline50);

SoGroup46->addChild(*SoLoadSensor49);

SoNode42->addChild(*SoGroup46);

SoProtoDeclare* SoProtoDeclare51 = new SoProtoDeclare();
SoProtoDeclare51->setName(QString("HAnimPose"));
SoProtoDeclare51->setAppinfo(QString("Experimental node to assign joint values to a humanoid and assume a pose. Assumes that baseline HAnimHumanoid configuration must be I pose, which can be achieved by resetting every HAnimJoint to default values."));
SoProtoInterface* SoProtoInterface52 = new SoProtoInterface();
Sofield* Sofield53 = new Sofield();
Sofield53->setName(QString("parentHAnimHumanoid"));
Sofield53->setAccessType(QString("inputOutput"));
Sofield53->setAppinfo(QString("HAnimHumanoid for this Pose to act upon"));
Sofield53->setType(QString("SFNode"));
//HAnimHumanoid initialization node goes here, this field is only used in the prototype implementation
SoProtoInterface52->addChild(*Sofield53);

Sofield* Sofield54 = new Sofield();
Sofield54->setName(QString("name"));
Sofield54->setAccessType(QString("inputOutput"));
Sofield54->setAppinfo(QString("name of this pose"));
Sofield54->setType(QString("SFString"));
Sofield54->setValue(QString("newPoseName"));
SoProtoInterface52->addChild(*Sofield54);

Sofield* Sofield55 = new Sofield();
Sofield55->setName(QString("children"));
Sofield55->setAccessType(QString("inputOutput"));
Sofield55->setAppinfo(QString("joint values to apply to HAnimHumanoid"));
Sofield55->setType(QString("MFNode"));
//initializating Joint nodes (if any) go here
SoProtoInterface52->addChild(*Sofield55);

Sofield* Sofield56 = new Sofield();
Sofield56->setName(QString("description"));
Sofield56->setAccessType(QString("inputOutput"));
Sofield56->setAppinfo(QString("explanation of purpose"));
Sofield56->setType(QString("SFString"));
SoProtoInterface52->addChild(*Sofield56);

Sofield* Sofield57 = new Sofield();
Sofield57->setName(QString("enabled"));
Sofield57->setAccessType(QString("inputOutput"));
Sofield57->setAppinfo(QString("default value true"));
Sofield57->setType(QString("SFBool"));
Sofield57->setValue(QString("true"));
SoProtoInterface52->addChild(*Sofield57);

Sofield* Sofield58 = new Sofield();
Sofield58->setName(QString("loa"));
Sofield58->setAccessType(QString("initializeOnly"));
Sofield58->setAppinfo(QString("default is no loa"));
Sofield58->setType(QString("SFInt32"));
Sofield58->setValue(QString("-1"));
SoProtoInterface52->addChild(*Sofield58);

Sofield* Sofield59 = new Sofield();
Sofield59->setName(QString("transitionDuration"));
Sofield59->setAccessType(QString("inputOutput"));
Sofield59->setAppinfo(QString("how many seconds to achieve the pose"));
Sofield59->setType(QString("SFTime"));
Sofield59->setValue(QString("0"));
SoProtoInterface52->addChild(*Sofield59);

Sofield* Sofield60 = new Sofield();
Sofield60->setName(QString("metadata"));
Sofield60->setAccessType(QString("inputOutput"));
Sofield60->setAppinfo(QString("single Metadata* node"));
Sofield60->setType(QString("SFNode"));
SoProtoInterface52->addChild(*Sofield60);

Sofield* Sofield61 = new Sofield();
Sofield61->setName(QString("isActive"));
Sofield61->setAccessType(QString("outputOnly"));
Sofield61->setAppinfo(QString("event indicating when pose transition is active"));
Sofield61->setType(QString("SFBool"));
SoProtoInterface52->addChild(*Sofield61);

Sofield* Sofield62 = new Sofield();
Sofield62->setName(QString("commencePose"));
Sofield62->setAccessType(QString("inputOnly"));
Sofield62->setAppinfo(QString("this event tells the HAnimPose node to fully transition, equivalent to set_fraction=1"));
Sofield62->setType(QString("SFBool"));
SoProtoInterface52->addChild(*Sofield62);

Sofield* Sofield63 = new Sofield();
Sofield63->setName(QString("resetAllJoints"));
Sofield63->setAccessType(QString("inputOnly"));
Sofield63->setAppinfo(QString("reset the skeleton to I pose with all joints zeroed"));
Sofield63->setType(QString("SFBool"));
SoProtoInterface52->addChild(*Sofield63);

Sofield* Sofield64 = new Sofield();
Sofield64->setName(QString("set_fraction"));
Sofield64->setAccessType(QString("inputOnly"));
Sofield64->setAppinfo(QString("allows transition to proceed incrementally from fraction [0..10"));
Sofield64->setType(QString("SFFloat"));
SoProtoInterface52->addChild(*Sofield64);

Sofield* Sofield65 = new Sofield();
Sofield65->setName(QString("set_startTime"));
Sofield65->setAccessType(QString("inputOnly"));
Sofield65->setAppinfo(QString("starts the animation clock"));
Sofield65->setType(QString("SFTime"));
SoProtoInterface52->addChild(*Sofield65);

Sofield* Sofield66 = new Sofield();
Sofield66->setName(QString("isLoaded"));
Sofield66->setAccessType(QString("inputOnly"));
Sofield66->setAppinfo(QString("possible notification from LoadSensor if using HAnimHumanoid Inline/IMPORT AS/USE"));
Sofield66->setType(QString("SFBool"));
SoProtoInterface52->addChild(*Sofield66);

Sofield* Sofield67 = new Sofield();
Sofield67->setName(QString("traceEnabled"));
Sofield67->setAccessType(QString("inputOutput"));
Sofield67->setAppinfo(QString("debug trace to Browser output console this is a local prototype field"));
Sofield67->setType(QString("SFBool"));
Sofield67->setValue(QString("true"));
SoProtoInterface52->addChild(*Sofield67);

SoProtoDeclare51->addChild(*SoProtoInterface52);

SoProtoBody* SoProtoBody68 = new SoProtoBody();
SoTimeSensor* SoTimeSensor69 = new SoTimeSensor();
SoTimeSensor69->setDEF(QString("ClockTimeSensor"));
SoTimeSensor69->setDescription(QString("control timing of pose animation when triggered"));
SoIS* SoIS70 = new SoIS();
Soconnect* Soconnect71 = new Soconnect();
Soconnect71->setNodeField(QString("enabled"));
Soconnect71->setProtoField(QString("enabled"));
SoIS70->addChild(*Soconnect71);

Soconnect* Soconnect72 = new Soconnect();
Soconnect72->setNodeField(QString("cycleInterval"));
Soconnect72->setProtoField(QString("transitionDuration"));
SoIS70->addChild(*Soconnect72);

Soconnect* Soconnect73 = new Soconnect();
Soconnect73->setNodeField(QString("isActive"));
Soconnect73->setProtoField(QString("isActive"));
SoIS70->addChild(*Soconnect73);

Soconnect* Soconnect74 = new Soconnect();
Soconnect74->setNodeField(QString("startTime"));
Soconnect74->setProtoField(QString("set_startTime"));
SoIS70->addChild(*Soconnect74);

Soconnect* Soconnect75 = new Soconnect();
Soconnect75->setNodeField(QString("metadata"));
Soconnect75->setProtoField(QString("metadata"));
SoIS70->addChild(*Soconnect75);

SoTimeSensor69->addChild(*SoIS70);

SoProtoBody68->addChild(*SoTimeSensor69);

SoTimeSensor* SoTimeSensor76 = new SoTimeSensor();
SoTimeSensor76->setDEF(QString("ResetTimeSensor"));
SoTimeSensor76->setDescription(QString("control timing of skeleton reset to \"A\" pose when triggered"));
SoIS* SoIS77 = new SoIS();
Soconnect* Soconnect78 = new Soconnect();
Soconnect78->setNodeField(QString("enabled"));
Soconnect78->setProtoField(QString("enabled"));
SoIS77->addChild(*Soconnect78);

Soconnect* Soconnect79 = new Soconnect();
Soconnect79->setNodeField(QString("cycleInterval"));
Soconnect79->setProtoField(QString("transitionDuration"));
SoIS77->addChild(*Soconnect79);

Soconnect* Soconnect80 = new Soconnect();
Soconnect80->setNodeField(QString("startTime"));
Soconnect80->setProtoField(QString("set_startTime"));
SoIS77->addChild(*Soconnect80);

//no need to report isActive since that would be duplicative
SoTimeSensor76->addChild(*SoIS77);

SoProtoBody68->addChild(*SoTimeSensor76);

SoGroup* SoGroup81 = new SoGroup();
SoGroup81->setDEF(QString("PoseInterpolatorGroup"));
//interpolators generated by prototype script appear here at runtime
SoProtoBody68->addChild(*SoGroup81);

SoGroup* SoGroup82 = new SoGroup();
SoGroup82->setDEF(QString("ResetInterpolatorGroup"));
//interpolators generated by prototype script appear here at runtime
SoProtoBody68->addChild(*SoGroup82);

SoScript* SoScript83 = new SoScript();
SoScript83->setDEF(QString("HAnimPoseScript"));
SoScript83->setDirectOutput(true);
SoScript83->setUrl(new QString[]{QString("HAnimPosePrototypeScript.js"), QString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Poses/HAnimPosePrototypeScript.js")}, 2);
Sofield* Sofield84 = new Sofield();
Sofield84->setName(QString("parentHAnimHumanoid"));
Sofield84->setAccessType(QString("inputOutput"));
Sofield84->setAppinfo(QString("Humanoid for this Pose to act upon"));
Sofield84->setType(QString("SFNode"));
//initialization node (if any) goes here
SoScript83->addChild(*Sofield84);

Sofield* Sofield85 = new Sofield();
Sofield85->setName(QString("name"));
Sofield85->setAccessType(QString("inputOutput"));
Sofield85->setAppinfo(QString("name of this pose"));
Sofield85->setType(QString("SFString"));
SoScript83->addChild(*Sofield85);

Sofield* Sofield86 = new Sofield();
Sofield86->setName(QString("loa"));
Sofield86->setAccessType(QString("initializeOnly"));
Sofield86->setAppinfo(QString("default is no loa"));
Sofield86->setType(QString("SFInt32"));
SoScript83->addChild(*Sofield86);

Sofield* Sofield87 = new Sofield();
Sofield87->setName(QString("description"));
Sofield87->setAccessType(QString("inputOutput"));
Sofield87->setAppinfo(QString("explanation of purpose"));
Sofield87->setType(QString("SFString"));
SoScript83->addChild(*Sofield87);

Sofield* Sofield88 = new Sofield();
Sofield88->setName(QString("enabled"));
Sofield88->setAccessType(QString("inputOutput"));
Sofield88->setAppinfo(QString("default value true"));
Sofield88->setType(QString("SFBool"));
SoScript83->addChild(*Sofield88);

Sofield* Sofield89 = new Sofield();
Sofield89->setName(QString("resetAllJoints"));
Sofield89->setAccessType(QString("inputOnly"));
Sofield89->setAppinfo(QString("reset the skeleton to I pose with all joints zeroed"));
Sofield89->setType(QString("SFBool"));
SoScript83->addChild(*Sofield89);

Sofield* Sofield90 = new Sofield();
Sofield90->setName(QString("children"));
Sofield90->setAccessType(QString("inputOutput"));
Sofield90->setAppinfo(QString("joint values to apply to HAnimHumanoid"));
Sofield90->setType(QString("MFNode"));
//initializating Joint nodes (if any) go here
SoScript83->addChild(*Sofield90);

Sofield* Sofield91 = new Sofield();
Sofield91->setName(QString("transitionDuration"));
Sofield91->setAccessType(QString("inputOutput"));
Sofield91->setAppinfo(QString("how many seconds to achieve the pose"));
Sofield91->setType(QString("SFTime"));
SoScript83->addChild(*Sofield91);

Sofield* Sofield92 = new Sofield();
Sofield92->setName(QString("commencePose"));
Sofield92->setAccessType(QString("inputOnly"));
Sofield92->setAppinfo(QString("this event tells the HAnimPose node to fully transition, equivalent to set_fraction=1"));
Sofield92->setType(QString("SFBool"));
SoScript83->addChild(*Sofield92);

Sofield* Sofield93 = new Sofield();
Sofield93->setName(QString("set_fraction"));
Sofield93->setAccessType(QString("inputOnly"));
Sofield93->setAppinfo(QString("allows transition to proceed incrementally from fraction [0..10"));
Sofield93->setType(QString("SFFloat"));
SoScript83->addChild(*Sofield93);

Sofield* Sofield94 = new Sofield();
Sofield94->setName(QString("set_startTime"));
Sofield94->setAccessType(QString("inputOnly"));
Sofield94->setAppinfo(QString("starts the animation clock"));
Sofield94->setType(QString("SFTime"));
SoScript83->addChild(*Sofield94);

Sofield* Sofield95 = new Sofield();
Sofield95->setName(QString("isLoaded"));
Sofield95->setAccessType(QString("inputOnly"));
Sofield95->setAppinfo(QString("possible notification from LoadSensor if using HAnimHumanoid Inline/IMPORT AS/USE"));
Sofield95->setType(QString("SFBool"));
SoScript83->addChild(*Sofield95);

Sofield* Sofield96 = new Sofield();
Sofield96->setName(QString("traceEnabled"));
Sofield96->setAccessType(QString("inputOutput"));
Sofield96->setAppinfo(QString("debug trace to Browser output console"));
Sofield96->setType(QString("SFBool"));
SoScript83->addChild(*Sofield96);

Sofield* Sofield97 = new Sofield();
Sofield97->setName(QString("numberPoseJoints"));
Sofield97->setAccessType(QString("initializeOnly"));
Sofield97->setAppinfo(QString("number of joints found in children field"));
Sofield97->setType(QString("SFInt32"));
Sofield97->setValue(QString("0"));
SoScript83->addChild(*Sofield97);

Sofield* Sofield98 = new Sofield();
Sofield98->setName(QString("numberSkeletonJoints"));
Sofield98->setAccessType(QString("initializeOnly"));
Sofield98->setAppinfo(QString("number of joints found in Humanoid"));
Sofield98->setType(QString("SFInt32"));
Sofield98->setValue(QString("0"));
SoScript83->addChild(*Sofield98);

Sofield* Sofield99 = new Sofield();
Sofield99->setName(QString("jointOrientationInterpolators"));
Sofield99->setAccessType(QString("initializeOnly"));
Sofield99->setAppinfo(QString("OrientationInterpolator node array matching number of children"));
Sofield99->setType(QString("MFNode"));
//initializating Joint nodes (if any) go here
SoScript83->addChild(*Sofield99);

SoIS* SoIS100 = new SoIS();
Soconnect* Soconnect101 = new Soconnect();
Soconnect101->setNodeField(QString("parentHAnimHumanoid"));
Soconnect101->setProtoField(QString("parentHAnimHumanoid"));
SoIS100->addChild(*Soconnect101);

Soconnect* Soconnect102 = new Soconnect();
Soconnect102->setNodeField(QString("name"));
Soconnect102->setProtoField(QString("name"));
SoIS100->addChild(*Soconnect102);

Soconnect* Soconnect103 = new Soconnect();
Soconnect103->setNodeField(QString("loa"));
Soconnect103->setProtoField(QString("loa"));
SoIS100->addChild(*Soconnect103);

Soconnect* Soconnect104 = new Soconnect();
Soconnect104->setNodeField(QString("description"));
Soconnect104->setProtoField(QString("description"));
SoIS100->addChild(*Soconnect104);

Soconnect* Soconnect105 = new Soconnect();
Soconnect105->setNodeField(QString("enabled"));
Soconnect105->setProtoField(QString("enabled"));
SoIS100->addChild(*Soconnect105);

Soconnect* Soconnect106 = new Soconnect();
Soconnect106->setNodeField(QString("resetAllJoints"));
Soconnect106->setProtoField(QString("resetAllJoints"));
SoIS100->addChild(*Soconnect106);

Soconnect* Soconnect107 = new Soconnect();
Soconnect107->setNodeField(QString("children"));
Soconnect107->setProtoField(QString("children"));
SoIS100->addChild(*Soconnect107);

Soconnect* Soconnect108 = new Soconnect();
Soconnect108->setNodeField(QString("transitionDuration"));
Soconnect108->setProtoField(QString("transitionDuration"));
SoIS100->addChild(*Soconnect108);

Soconnect* Soconnect109 = new Soconnect();
Soconnect109->setNodeField(QString("commencePose"));
Soconnect109->setProtoField(QString("commencePose"));
SoIS100->addChild(*Soconnect109);

Soconnect* Soconnect110 = new Soconnect();
Soconnect110->setNodeField(QString("set_fraction"));
Soconnect110->setProtoField(QString("set_fraction"));
SoIS100->addChild(*Soconnect110);

Soconnect* Soconnect111 = new Soconnect();
Soconnect111->setNodeField(QString("set_startTime"));
Soconnect111->setProtoField(QString("set_startTime"));
SoIS100->addChild(*Soconnect111);

Soconnect* Soconnect112 = new Soconnect();
Soconnect112->setNodeField(QString("isLoaded"));
Soconnect112->setProtoField(QString("isLoaded"));
SoIS100->addChild(*Soconnect112);

Soconnect* Soconnect113 = new Soconnect();
Soconnect113->setNodeField(QString("traceEnabled"));
Soconnect113->setProtoField(QString("traceEnabled"));
SoIS100->addChild(*Soconnect113);

SoScript83->addChild(*SoIS100);

SoProtoBody68->addChild(*SoScript83);

SoProtoDeclare51->addChild(*SoProtoBody68);

SoNode42->addChild(*SoProtoDeclare51);

SoViewpoint* SoViewpoint114 = new SoViewpoint();
SoViewpoint114->setDescription(QString("HAnimPose for HumanoidInline IMPORT model"));
SoViewpoint114->setPosition(new float[]{0.0,1.0,4.0});
SoNode42->addChild(*SoViewpoint114);

//no longer required: including full model <HAnimHumanoid DEF='hanim_JinLOA1' loa='2' name='JinLOA1' scale='0.0225 0.0225 0.0225'> etc...
SoProtoInstance* SoProtoInstance115 = new SoProtoInstance();
SoProtoInstance115->setName(QString("HAnimPose"));
SoProtoInstance115->setDEF(QString("T_Pose"));
SoField* SoField116 = new SoField();
SoField116->setName(QString("name"));
SoField116->setValue(QString("T"));
SoProtoInstance115->addChild(*SoField116);

SoField* SoField117 = new SoField();
SoField117->setName(QString("enabled"));
SoField117->setValue(QString("true"));
SoProtoInstance115->addChild(*SoField117);

SoField* SoField118 = new SoField();
SoField118->setName(QString("parentHAnimHumanoid"));
//HumanoidImported for Inline/IMPORT (or else USE='hanim_JinLOA1' if copy of original HAnimHumanoid is embedded in this model)
//debug test case for incorrect node type: <HAnimJoint DEF=\"ErrorDiagnosticsTest\" USE='HumanoidImported'/>
SoHAnimHumanoid* SoHAnimHumanoid119 = new SoHAnimHumanoid();
SoHAnimHumanoid119->setUSE(QString("HumanoidImported"));
SoField118->addChild(*SoHAnimHumanoid119);

SoProtoInstance115->addChild(*SoField118);

SoField* SoField120 = new SoField();
SoField120->setName(QString("loa"));
SoField120->setValue(QString("1"));
SoProtoInstance115->addChild(*SoField120);

SoField* SoField121 = new SoField();
SoField121->setName(QString("description"));
SoField121->setValue(QString("arms stretched outward and level similar to letter T"));
SoProtoInstance115->addChild(*SoField121);

SoField* SoField122 = new SoField();
SoField122->setName(QString("children"));
SoHAnimJoint* SoHAnimJoint123 = new SoHAnimJoint();
SoHAnimJoint123->X3DNode::setName(QString("l_shoulder"));
SoHAnimJoint123->setDEF(QString("PoseJoint_l_shoulder_1"));
SoHAnimJoint123->setDescription(QString("left shoulder"));
SoHAnimJoint123->setRotation(new float[]{0.0,0.0,1.0,1.57});
SoHAnimJoint123->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint123->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoField122->addChild(*SoHAnimJoint123);

SoHAnimJoint* SoHAnimJoint124 = new SoHAnimJoint();
SoHAnimJoint124->X3DNode::setName(QString("r_shoulder"));
SoHAnimJoint124->setDEF(QString("PoseJoint_r_shoulder_1"));
SoHAnimJoint124->setDescription(QString("right shoulder"));
SoHAnimJoint124->setRotation(new float[]{0.0,0.0,-1.0,1.57});
SoHAnimJoint124->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint124->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoField122->addChild(*SoHAnimJoint124);

//test case for illegal child triggers validation reports without problem: HAnimSegment DEF='TestCase' description='confirm type checking' name='specialTestCase'/
SoProtoInstance115->addChild(*SoField122);

SoField* SoField125 = new SoField();
SoField125->setName(QString("transitionDuration"));
SoField125->setValue(QString("1.3"));
SoProtoInstance115->addChild(*SoField125);

SoNode42->addChild(*SoProtoInstance115);

SoProtoInstance* SoProtoInstance126 = new SoProtoInstance();
SoProtoInstance126->setName(QString("HAnimPose"));
SoProtoInstance126->setDEF(QString("A_Pose"));
SoField* SoField127 = new SoField();
SoField127->setName(QString("name"));
SoField127->setValue(QString("A"));
SoProtoInstance126->addChild(*SoField127);

SoField* SoField128 = new SoField();
SoField128->setName(QString("enabled"));
SoField128->setValue(QString("true"));
SoProtoInstance126->addChild(*SoField128);

SoField* SoField129 = new SoField();
SoField129->setName(QString("parentHAnimHumanoid"));
//HumanoidImported for Inline/IMPORT (or else USE='hanim_JinLOA1' if copy of original HAnimHumanoid is embedded in this model)
SoHAnimHumanoid* SoHAnimHumanoid130 = new SoHAnimHumanoid();
SoHAnimHumanoid130->setUSE(QString("HumanoidImported"));
SoField129->addChild(*SoHAnimHumanoid130);

SoProtoInstance126->addChild(*SoField129);

SoField* SoField131 = new SoField();
SoField131->setName(QString("loa"));
SoField131->setValue(QString("1"));
SoProtoInstance126->addChild(*SoField131);

SoField* SoField132 = new SoField();
SoField132->setName(QString("description"));
SoField132->setValue(QString("arms stretched outward and downward similar to letter A"));
SoProtoInstance126->addChild(*SoField132);

SoField* SoField133 = new SoField();
SoField133->setName(QString("children"));
SoHAnimJoint* SoHAnimJoint134 = new SoHAnimJoint();
SoHAnimJoint134->X3DNode::setName(QString("l_shoulder"));
SoHAnimJoint134->setDEF(QString("PoseJoint_l_shoulder"));
SoHAnimJoint134->setDescription(QString("left shoulder"));
SoHAnimJoint134->setRotation(new float[]{0.0,0.0,1.0,0.5});
SoHAnimJoint134->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint134->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoField133->addChild(*SoHAnimJoint134);

SoHAnimJoint* SoHAnimJoint135 = new SoHAnimJoint();
SoHAnimJoint135->X3DNode::setName(QString("r_shoulder"));
SoHAnimJoint135->setDEF(QString("PoseJoint_r_shoulder"));
SoHAnimJoint135->setDescription(QString("right shoulder"));
SoHAnimJoint135->setRotation(new float[]{0.0,0.0,-1.0,0.5});
SoHAnimJoint135->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint135->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoField133->addChild(*SoHAnimJoint135);

SoProtoInstance126->addChild(*SoField133);

SoField* SoField136 = new SoField();
SoField136->setName(QString("transitionDuration"));
SoField136->setValue(QString("1.2"));
SoProtoInstance126->addChild(*SoField136);

SoField* SoField137 = new SoField();
SoField137->setName(QString("traceEnabled"));
SoField137->setValue(QString("true"));
SoProtoInstance126->addChild(*SoField137);

SoNode42->addChild(*SoProtoInstance126);

SoProtoInstance* SoProtoInstance138 = new SoProtoInstance();
SoProtoInstance138->setName(QString("HAnimPose"));
SoProtoInstance138->setDEF(QString("TouchDown_Pose"));
//thanks Joe
SoField* SoField139 = new SoField();
SoField139->setName(QString("name"));
SoField139->setValue(QString("TouchDown"));
SoProtoInstance138->addChild(*SoField139);

SoField* SoField140 = new SoField();
SoField140->setName(QString("enabled"));
SoField140->setValue(QString("true"));
SoProtoInstance138->addChild(*SoField140);

SoField* SoField141 = new SoField();
SoField141->setName(QString("parentHAnimHumanoid"));
//HumanoidImported for Inline/IMPORT (or else USE='hanim_JinLOA1' if copy of original HAnimHumanoid is embedded in this model)
SoHAnimHumanoid* SoHAnimHumanoid142 = new SoHAnimHumanoid();
SoHAnimHumanoid142->setUSE(QString("HumanoidImported"));
SoField141->addChild(*SoHAnimHumanoid142);

SoProtoInstance138->addChild(*SoField141);

SoField* SoField143 = new SoField();
SoField143->setName(QString("loa"));
SoField143->setValue(QString("1"));
SoProtoInstance138->addChild(*SoField143);

SoField* SoField144 = new SoField();
SoField144->setName(QString("description"));
SoField144->setValue(QString("arms and legs stretched outward providing a TouchDown gesture"));
SoProtoInstance138->addChild(*SoField144);

SoField* SoField145 = new SoField();
SoField145->setName(QString("children"));
SoHAnimJoint* SoHAnimJoint146 = new SoHAnimJoint();
SoHAnimJoint146->X3DNode::setName(QString("humanoid_root"));
SoHAnimJoint146->setRotation(new float[]{0.0,1.0,0.0,-0.698132});
SoHAnimJoint146->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint146->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoField145->addChild(*SoHAnimJoint146);

SoHAnimJoint* SoHAnimJoint147 = new SoHAnimJoint();
SoHAnimJoint147->X3DNode::setName(QString("l_hip"));
SoHAnimJoint147->setRotation(new float[]{-1.0,1.0,1.0,1.0});
SoHAnimJoint147->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint147->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoField145->addChild(*SoHAnimJoint147);

SoHAnimJoint* SoHAnimJoint148 = new SoHAnimJoint();
SoHAnimJoint148->X3DNode::setName(QString("l_knee"));
SoHAnimJoint148->setRotation(new float[]{1.0,0.0,0.0,1.0});
SoHAnimJoint148->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint148->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoField145->addChild(*SoHAnimJoint148);

SoHAnimJoint* SoHAnimJoint149 = new SoHAnimJoint();
SoHAnimJoint149->X3DNode::setName(QString("l_talocrural"));
SoHAnimJoint149->setRotation(new float[]{-0.2,0.0,0.1,0.225});
SoHAnimJoint149->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint149->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoField145->addChild(*SoHAnimJoint149);

SoHAnimJoint* SoHAnimJoint150 = new SoHAnimJoint();
SoHAnimJoint150->X3DNode::setName(QString("r_hip"));
SoHAnimJoint150->setRotation(new float[]{-1.0,-1.0,-1.0,1.0});
SoHAnimJoint150->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint150->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoField145->addChild(*SoHAnimJoint150);

SoHAnimJoint* SoHAnimJoint151 = new SoHAnimJoint();
SoHAnimJoint151->X3DNode::setName(QString("r_knee"));
SoHAnimJoint151->setRotation(new float[]{1.0,0.0,0.0,1.0});
SoHAnimJoint151->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint151->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoField145->addChild(*SoHAnimJoint151);

SoHAnimJoint* SoHAnimJoint152 = new SoHAnimJoint();
SoHAnimJoint152->X3DNode::setName(QString("r_talocrural"));
SoHAnimJoint152->setRotation(new float[]{-0.2,0.0,0.1,0.25});
SoHAnimJoint152->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint152->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoField145->addChild(*SoHAnimJoint152);

SoHAnimJoint* SoHAnimJoint153 = new SoHAnimJoint();
SoHAnimJoint153->X3DNode::setName(QString("vl5"));
SoHAnimJoint153->setRotation(new float[]{0.0,0.0,0.01,0.2});
SoHAnimJoint153->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint153->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoField145->addChild(*SoHAnimJoint153);

SoHAnimJoint* SoHAnimJoint154 = new SoHAnimJoint();
SoHAnimJoint154->X3DNode::setName(QString("vt10"));
SoHAnimJoint154->setRotation(new float[]{0.0,0.0,0.01,0.1});
SoHAnimJoint154->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint154->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoField145->addChild(*SoHAnimJoint154);

SoHAnimJoint* SoHAnimJoint155 = new SoHAnimJoint();
SoHAnimJoint155->X3DNode::setName(QString("vc4"));
SoHAnimJoint155->setRotation(new float[]{0.0,0.0,-0.01,0.15});
SoHAnimJoint155->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint155->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoField145->addChild(*SoHAnimJoint155);

SoHAnimJoint* SoHAnimJoint156 = new SoHAnimJoint();
SoHAnimJoint156->X3DNode::setName(QString("l_shoulder"));
SoHAnimJoint156->setRotation(new float[]{-1.0,0.5,1.0,2.0});
SoHAnimJoint156->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint156->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoField145->addChild(*SoHAnimJoint156);

SoHAnimJoint* SoHAnimJoint157 = new SoHAnimJoint();
SoHAnimJoint157->X3DNode::setName(QString("l_elbow"));
SoHAnimJoint157->setRotation(new float[]{-1.0,0.0,0.0,1.0});
SoHAnimJoint157->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint157->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoField145->addChild(*SoHAnimJoint157);

SoHAnimJoint* SoHAnimJoint158 = new SoHAnimJoint();
SoHAnimJoint158->X3DNode::setName(QString("l_radiocarpal"));
SoHAnimJoint158->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint158->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoField145->addChild(*SoHAnimJoint158);

SoHAnimJoint* SoHAnimJoint159 = new SoHAnimJoint();
SoHAnimJoint159->X3DNode::setName(QString("r_shoulder"));
SoHAnimJoint159->setRotation(new float[]{-1.0,-0.5,-1.0,2.6});
SoHAnimJoint159->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint159->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoField145->addChild(*SoHAnimJoint159);

SoHAnimJoint* SoHAnimJoint160 = new SoHAnimJoint();
SoHAnimJoint160->X3DNode::setName(QString("r_elbow"));
SoHAnimJoint160->setRotation(new float[]{-1.0,0.0,0.0,1.0});
SoHAnimJoint160->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint160->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoField145->addChild(*SoHAnimJoint160);

SoHAnimJoint* SoHAnimJoint161 = new SoHAnimJoint();
SoHAnimJoint161->X3DNode::setName(QString("r_radiocarpal"));
SoHAnimJoint161->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint161->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoField145->addChild(*SoHAnimJoint161);

SoProtoInstance138->addChild(*SoField145);

SoField* SoField162 = new SoField();
SoField162->setName(QString("transitionDuration"));
SoField162->setValue(QString("1.2"));
SoProtoInstance138->addChild(*SoField162);

SoField* SoField163 = new SoField();
SoField163->setName(QString("traceEnabled"));
SoField163->setValue(QString("true"));
SoProtoInstance138->addChild(*SoField163);

SoNode42->addChild(*SoProtoInstance138);

SoProtoInstance* SoProtoInstance164 = new SoProtoInstance();
SoProtoInstance164->setName(QString("HAnimPose"));
SoProtoInstance164->setDEF(QString("I_Pose"));
SoField* SoField165 = new SoField();
SoField165->setName(QString("name"));
SoField165->setValue(QString("I"));
SoProtoInstance164->addChild(*SoField165);

SoField* SoField166 = new SoField();
SoField166->setName(QString("enabled"));
SoField166->setValue(QString("true"));
SoProtoInstance164->addChild(*SoField166);

SoField* SoField167 = new SoField();
SoField167->setName(QString("parentHAnimHumanoid"));
//HumanoidImported for Inline/IMPORT (or else USE='hanim_JinLOA1' if copy of original HAnimHumanoid is embedded in this model)
SoHAnimHumanoid* SoHAnimHumanoid168 = new SoHAnimHumanoid();
SoHAnimHumanoid168->setUSE(QString("HumanoidImported"));
SoField167->addChild(*SoHAnimHumanoid168);

SoProtoInstance164->addChild(*SoField167);

SoField* SoField169 = new SoField();
SoField169->setName(QString("loa"));
SoField169->setValue(QString("1"));
SoProtoInstance164->addChild(*SoField169);

SoField* SoField170 = new SoField();
SoField170->setName(QString("description"));
SoField170->setValue(QString("arms and legs straight down default binding pose for baseline Humanoid"));
SoProtoInstance164->addChild(*SoField170);

SoField* SoField171 = new SoField();
SoField171->setName(QString("children"));
//not defining any children equals the default \"I\" pose
SoProtoInstance164->addChild(*SoField171);

SoField* SoField172 = new SoField();
SoField172->setName(QString("transitionDuration"));
SoField172->setValue(QString("1.5"));
SoProtoInstance164->addChild(*SoField172);

SoField* SoField173 = new SoField();
SoField173->setName(QString("traceEnabled"));
SoField173->setValue(QString("true"));
SoProtoInstance164->addChild(*SoField173);

SoNode42->addChild(*SoProtoInstance164);

SoProtoInstance* SoProtoInstance174 = new SoProtoInstance();
SoProtoInstance174->setName(QString("HAnimPose"));
SoProtoInstance174->setDEF(QString("H_Pose"));
SoField* SoField175 = new SoField();
SoField175->setName(QString("name"));
SoField175->setValue(QString("H"));
SoProtoInstance174->addChild(*SoField175);

SoField* SoField176 = new SoField();
SoField176->setName(QString("enabled"));
SoField176->setValue(QString("false"));
SoProtoInstance174->addChild(*SoField176);

SoField* SoField177 = new SoField();
SoField177->setName(QString("description"));
SoField177->setValue(QString("TODO experimental pose not yet implemented"));
SoProtoInstance174->addChild(*SoField177);

SoField* SoField178 = new SoField();
SoField178->setName(QString("transitionDuration"));
SoField178->setValue(QString("1.4"));
SoProtoInstance174->addChild(*SoField178);

SoField* SoField179 = new SoField();
SoField179->setName(QString("traceEnabled"));
SoField179->setValue(QString("true"));
SoProtoInstance174->addChild(*SoField179);

//<fieldValue name='loa' value='1'/>
SoNode42->addChild(*SoProtoInstance174);

SoProtoInstance* SoProtoInstance180 = new SoProtoInstance();
SoProtoInstance180->setName(QString("HAnimPose"));
SoProtoInstance180->setDEF(QString("FaceLeft_Pose"));
SoField* SoField181 = new SoField();
SoField181->setName(QString("name"));
SoField181->setValue(QString("FaceLeft"));
SoProtoInstance180->addChild(*SoField181);

SoField* SoField182 = new SoField();
SoField182->setName(QString("enabled"));
SoField182->setValue(QString("true"));
SoProtoInstance180->addChild(*SoField182);

SoField* SoField183 = new SoField();
SoField183->setName(QString("parentHAnimHumanoid"));
//HumanoidImported for Inline/IMPORT (or else USE='hanim_JinLOA1' if copy of original HAnimHumanoid is embedded in this model)
SoHAnimHumanoid* SoHAnimHumanoid184 = new SoHAnimHumanoid();
SoHAnimHumanoid184->setUSE(QString("HumanoidImported"));
SoField183->addChild(*SoHAnimHumanoid184);

SoProtoInstance180->addChild(*SoField183);

SoField* SoField185 = new SoField();
SoField185->setName(QString("loa"));
SoField185->setValue(QString("0"));
SoProtoInstance180->addChild(*SoField185);

SoField* SoField186 = new SoField();
SoField186->setName(QString("description"));
SoField186->setValue(QString("Only modify humanoid_root Joint node to face left"));
SoProtoInstance180->addChild(*SoField186);

SoField* SoField187 = new SoField();
SoField187->setName(QString("children"));
SoHAnimJoint* SoHAnimJoint188 = new SoHAnimJoint();
SoHAnimJoint188->X3DNode::setName(QString("humanoid_root"));
SoHAnimJoint188->setDEF(QString("FaceLeft_humanoid_root"));
SoHAnimJoint188->setDescription(QString("Only rotate the model"));
SoHAnimJoint188->setRotation(new float[]{0.0,1.0,0.0,1.570796});
SoHAnimJoint188->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint188->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoField187->addChild(*SoHAnimJoint188);

SoProtoInstance180->addChild(*SoField187);

SoField* SoField189 = new SoField();
SoField189->setName(QString("transitionDuration"));
SoField189->setValue(QString("1.1"));
SoProtoInstance180->addChild(*SoField189);

SoField* SoField190 = new SoField();
SoField190->setName(QString("traceEnabled"));
SoField190->setValue(QString("true"));
SoProtoInstance180->addChild(*SoField190);

SoNode42->addChild(*SoProtoInstance180);

SoProtoInstance* SoProtoInstance191 = new SoProtoInstance();
SoProtoInstance191->setName(QString("HAnimPose"));
SoProtoInstance191->setDEF(QString("FaceRight_Pose"));
SoField* SoField192 = new SoField();
SoField192->setName(QString("name"));
SoField192->setValue(QString("FaceRight"));
SoProtoInstance191->addChild(*SoField192);

SoField* SoField193 = new SoField();
SoField193->setName(QString("enabled"));
SoField193->setValue(QString("true"));
SoProtoInstance191->addChild(*SoField193);

SoField* SoField194 = new SoField();
SoField194->setName(QString("parentHAnimHumanoid"));
//HumanoidImported for Inline/IMPORT (or else USE='hanim_JinLOA1' if copy of original HAnimHumanoid is embedded in this model)
SoHAnimHumanoid* SoHAnimHumanoid195 = new SoHAnimHumanoid();
SoHAnimHumanoid195->setUSE(QString("HumanoidImported"));
SoField194->addChild(*SoHAnimHumanoid195);

SoProtoInstance191->addChild(*SoField194);

SoField* SoField196 = new SoField();
SoField196->setName(QString("loa"));
SoField196->setValue(QString("0"));
SoProtoInstance191->addChild(*SoField196);

SoField* SoField197 = new SoField();
SoField197->setName(QString("description"));
SoField197->setValue(QString("Only modify humanoid_root Joint node to face right"));
SoProtoInstance191->addChild(*SoField197);

SoField* SoField198 = new SoField();
SoField198->setName(QString("children"));
SoHAnimJoint* SoHAnimJoint199 = new SoHAnimJoint();
SoHAnimJoint199->X3DNode::setName(QString("humanoid_root"));
SoHAnimJoint199->setDEF(QString("FaceRight_humanoid_root"));
SoHAnimJoint199->setDescription(QString("Only rotate the model"));
SoHAnimJoint199->setRotation(new float[]{0.0,1.0,0.0,-1.570796});
SoHAnimJoint199->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint199->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoField198->addChild(*SoHAnimJoint199);

SoProtoInstance191->addChild(*SoField198);

SoField* SoField200 = new SoField();
SoField200->setName(QString("transitionDuration"));
SoField200->setValue(QString("1.1"));
SoProtoInstance191->addChild(*SoField200);

SoField* SoField201 = new SoField();
SoField201->setName(QString("traceEnabled"));
SoField201->setValue(QString("true"));
SoProtoInstance191->addChild(*SoField201);

SoNode42->addChild(*SoProtoInstance191);

SoGroup* SoGroup202 = new SoGroup();
SoGroup202->setDEF(QString("InterfaceButtonsGroup"));
SoTransform* SoTransform203 = new SoTransform();
SoTransform203->setDEF(QString("DisplayHeader"));
SoTransform203->setTranslation(new float[]{0.0,2.0,0.0});
SoShape* SoShape204 = new SoShape();
SoText* SoText205 = new SoText();
SoText205->setString(new QString[]{QString("HAnimPosePrototype example implementation")}, 1);
SoFontStyle* SoFontStyle206 = new SoFontStyle();
SoFontStyle206->setDEF(QString("HeaderFont"));
SoFontStyle206->setFamily(new QString[]{QString("SANS")}, 1);
SoFontStyle206->setJustify(new QString[]{QString("MIDDLE"), QString("MIDDLE")}, 2);
SoFontStyle206->setSize(0.15);
SoFontStyle206->setStyle(QString("BOLD"));
SoText205->setFontStyle(*SoFontStyle206);

SoShape204->setGeometry(*SoText205);

SoVRMLAppearance* SoVRMLAppearance207 = new SoVRMLAppearance();
SoVRMLAppearance207->setDEF(QString("PoseTextAppearance"));
SoMaterial* SoMaterial208 = new SoMaterial();
SoMaterial208->setDiffuseColor(new float[]{0.1,0.5,0.3});
SoVRMLAppearance207->addChild(*SoMaterial208);

SoShape204->addChild(*SoVRMLAppearance207);

SoTransform203->addChild(*SoShape204);

SoGroup202->addChild(*SoTransform203);

SoTransform* SoTransform209 = new SoTransform();
SoTransform209->setDEF(QString("T_PoseInterface"));
SoTransform209->setTranslation(new float[]{-1.5,1.5,0.0});
SoShape* SoShape210 = new SoShape();
SoText* SoText211 = new SoText();
SoText211->setString(new QString[]{QString("\"T\" Pose")}, 1);
SoFontStyle* SoFontStyle212 = new SoFontStyle();
SoFontStyle212->setDEF(QString("SharedFont"));
SoFontStyle212->setFamily(new QString[]{QString("SANS")}, 1);
SoFontStyle212->setJustify(new QString[]{QString("MIDDLE"), QString("MIDDLE")}, 2);
SoFontStyle212->setSize(0.1);
SoFontStyle212->setStyle(QString("BOLD"));
SoText211->setFontStyle(*SoFontStyle212);

SoShape210->setGeometry(*SoText211);

SoVRMLAppearance* SoVRMLAppearance213 = new SoVRMLAppearance();
SoVRMLAppearance213->setUSE(QString("PoseTextAppearance"));
SoShape210->addChild(*SoVRMLAppearance213);

SoTransform209->addChild(*SoShape210);

SoShape* SoShape214 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance215 = new SoVRMLAppearance();
SoVRMLAppearance215->setDEF(QString("TransparentAppearance"));
SoMaterial* SoMaterial216 = new SoMaterial();
SoMaterial216->setTransparency(0.8);
SoVRMLAppearance215->addChild(*SoMaterial216);

SoShape214->addChild(*SoVRMLAppearance215);

SoBox* SoBox217 = new SoBox();
SoBox217->setSize(new float[]{0.45,0.2,0.001});
SoShape214->setGeometry(*SoBox217);

SoTransform209->addChild(*SoShape214);

SoTouchSensor* SoTouchSensor218 = new SoTouchSensor();
SoTouchSensor218->setDEF(QString("T_PoseTouchSensor"));
SoTouchSensor218->setDescription(QString("select to move shoulders to \"T\" pose, leave other joints unchanged"));
SoTransform209->addChild(*SoTouchSensor218);

SoROUTE* SoROUTE219 = new SoROUTE();
SoROUTE219->setFromField(QString("isActive"));
SoROUTE219->setFromNode(QString("T_PoseTouchSensor"));
SoROUTE219->setToField(QString("commencePose"));
SoROUTE219->setToNode(QString("T_Pose"));
SoTransform209->addChild(*SoROUTE219);

SoGroup202->addChild(*SoTransform209);

SoTransform* SoTransform220 = new SoTransform();
SoTransform220->setDEF(QString("A_PoseInterface"));
SoTransform220->setTranslation(new float[]{-1.5,1.0,0.0});
SoShape* SoShape221 = new SoShape();
SoText* SoText222 = new SoText();
SoText222->setString(new QString[]{QString("\"A\" Pose")}, 1);
SoFontStyle* SoFontStyle223 = new SoFontStyle();
SoFontStyle223->setUSE(QString("SharedFont"));
SoText222->setFontStyle(*SoFontStyle223);

SoShape221->setGeometry(*SoText222);

SoVRMLAppearance* SoVRMLAppearance224 = new SoVRMLAppearance();
SoVRMLAppearance224->setUSE(QString("PoseTextAppearance"));
SoShape221->addChild(*SoVRMLAppearance224);

SoTransform220->addChild(*SoShape221);

SoShape* SoShape225 = new SoShape();
//Selectable Text transparent Box for easy user selection
SoVRMLAppearance* SoVRMLAppearance226 = new SoVRMLAppearance();
SoVRMLAppearance226->setUSE(QString("TransparentAppearance"));
SoShape225->addChild(*SoVRMLAppearance226);

SoBox* SoBox227 = new SoBox();
SoBox227->setSize(new float[]{0.45,0.2,0.001});
SoShape225->setGeometry(*SoBox227);

SoTransform220->addChild(*SoShape225);

SoTouchSensor* SoTouchSensor228 = new SoTouchSensor();
SoTouchSensor228->setDEF(QString("A_PoseTouchSensor"));
SoTouchSensor228->setDescription(QString("select to move shoulders to \"A\" pose, leave other joints unchanged"));
SoTransform220->addChild(*SoTouchSensor228);

SoROUTE* SoROUTE229 = new SoROUTE();
SoROUTE229->setFromField(QString("isActive"));
SoROUTE229->setFromNode(QString("A_PoseTouchSensor"));
SoROUTE229->setToField(QString("commencePose"));
SoROUTE229->setToNode(QString("A_Pose"));
SoTransform220->addChild(*SoROUTE229);

SoGroup202->addChild(*SoTransform220);

SoTransform* SoTransform230 = new SoTransform();
SoTransform230->setDEF(QString("TouchDown_PoseInterface"));
SoTransform230->setTranslation(new float[]{-1.5,0.5,0.0});
SoShape* SoShape231 = new SoShape();
SoText* SoText232 = new SoText();
SoText232->setString(new QString[]{QString("TouchDown Pose")}, 1);
SoFontStyle* SoFontStyle233 = new SoFontStyle();
SoFontStyle233->setUSE(QString("SharedFont"));
SoText232->setFontStyle(*SoFontStyle233);

SoShape231->setGeometry(*SoText232);

SoVRMLAppearance* SoVRMLAppearance234 = new SoVRMLAppearance();
SoVRMLAppearance234->setUSE(QString("PoseTextAppearance"));
SoShape231->addChild(*SoVRMLAppearance234);

SoTransform230->addChild(*SoShape231);

SoShape* SoShape235 = new SoShape();
//Selectable Text transparent Box for easy user selection
SoVRMLAppearance* SoVRMLAppearance236 = new SoVRMLAppearance();
SoVRMLAppearance236->setUSE(QString("TransparentAppearance"));
SoShape235->addChild(*SoVRMLAppearance236);

SoBox* SoBox237 = new SoBox();
SoBox237->setSize(new float[]{0.85,0.2,0.001});
SoShape235->setGeometry(*SoBox237);

SoTransform230->addChild(*SoShape235);

SoTouchSensor* SoTouchSensor238 = new SoTouchSensor();
SoTouchSensor238->setDEF(QString("TouchDown_PoseTouchSensor"));
SoTouchSensor238->setDescription(QString("select to transition all joints to TouchDown pose"));
SoTransform230->addChild(*SoTouchSensor238);

SoROUTE* SoROUTE239 = new SoROUTE();
SoROUTE239->setFromField(QString("isActive"));
SoROUTE239->setFromNode(QString("TouchDown_PoseTouchSensor"));
SoROUTE239->setToField(QString("commencePose"));
SoROUTE239->setToNode(QString("TouchDown_Pose"));
SoTransform230->addChild(*SoROUTE239);

SoGroup202->addChild(*SoTransform230);

SoTransform* SoTransform240 = new SoTransform();
SoTransform240->setDEF(QString("I_PoseInterface"));
SoTransform240->setTranslation(new float[]{-1.5,0.0,0.0});
SoShape* SoShape241 = new SoShape();
SoText* SoText242 = new SoText();
SoText242->setString(new QString[]{QString("\"I\" Pose")}, 1);
SoFontStyle* SoFontStyle243 = new SoFontStyle();
SoFontStyle243->setUSE(QString("SharedFont"));
SoText242->setFontStyle(*SoFontStyle243);

SoShape241->setGeometry(*SoText242);

SoVRMLAppearance* SoVRMLAppearance244 = new SoVRMLAppearance();
SoVRMLAppearance244->setUSE(QString("PoseTextAppearance"));
SoShape241->addChild(*SoVRMLAppearance244);

SoTransform240->addChild(*SoShape241);

SoShape* SoShape245 = new SoShape();
//Selectable Text transparent Box for easy user selection
SoVRMLAppearance* SoVRMLAppearance246 = new SoVRMLAppearance();
SoVRMLAppearance246->setUSE(QString("TransparentAppearance"));
SoShape245->addChild(*SoVRMLAppearance246);

SoBox* SoBox247 = new SoBox();
SoBox247->setSize(new float[]{0.45,0.2,0.001});
SoShape245->setGeometry(*SoBox247);

SoTransform240->addChild(*SoShape245);

SoTouchSensor* SoTouchSensor248 = new SoTouchSensor();
SoTouchSensor248->setDEF(QString("I_PoseTouchSensor"));
SoTouchSensor248->setDescription(QString("select to transition all joints to \"I\" pose"));
SoTransform240->addChild(*SoTouchSensor248);

SoROUTE* SoROUTE249 = new SoROUTE();
SoROUTE249->setFromField(QString("isActive"));
SoROUTE249->setFromNode(QString("I_PoseTouchSensor"));
SoROUTE249->setToField(QString("commencePose"));
SoROUTE249->setToNode(QString("I_Pose"));
SoTransform240->addChild(*SoROUTE249);

SoGroup202->addChild(*SoTransform240);

SoTransform* SoTransform250 = new SoTransform();
SoTransform250->setDEF(QString("FaceLeftPoseInterface"));
SoTransform250->setTranslation(new float[]{1.5,1.5,0.0});
SoShape* SoShape251 = new SoShape();
SoText* SoText252 = new SoText();
SoText252->setString(new QString[]{QString("Face Left Pose")}, 1);
SoFontStyle* SoFontStyle253 = new SoFontStyle();
SoFontStyle253->setUSE(QString("SharedFont"));
SoText252->setFontStyle(*SoFontStyle253);

SoShape251->setGeometry(*SoText252);

SoVRMLAppearance* SoVRMLAppearance254 = new SoVRMLAppearance();
SoVRMLAppearance254->setUSE(QString("PoseTextAppearance"));
SoShape251->addChild(*SoVRMLAppearance254);

SoTransform250->addChild(*SoShape251);

SoShape* SoShape255 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance256 = new SoVRMLAppearance();
SoVRMLAppearance256->setUSE(QString("TransparentAppearance"));
SoShape255->addChild(*SoVRMLAppearance256);

SoBox* SoBox257 = new SoBox();
SoBox257->setSize(new float[]{0.9,0.2,0.001});
SoShape255->setGeometry(*SoBox257);

SoTransform250->addChild(*SoShape255);

SoTouchSensor* SoTouchSensor258 = new SoTouchSensor();
SoTouchSensor258->setDEF(QString("FaceLeftTouchSensor"));
SoTouchSensor258->setDescription(QString("select to rotate body and Face Left, leave other joints unchanged"));
SoTransform250->addChild(*SoTouchSensor258);

SoROUTE* SoROUTE259 = new SoROUTE();
SoROUTE259->setFromField(QString("isActive"));
SoROUTE259->setFromNode(QString("FaceLeftTouchSensor"));
SoROUTE259->setToField(QString("commencePose"));
SoROUTE259->setToNode(QString("FaceLeft_Pose"));
SoTransform250->addChild(*SoROUTE259);

SoGroup202->addChild(*SoTransform250);

SoTransform* SoTransform260 = new SoTransform();
SoTransform260->setDEF(QString("FaceRightPoseInterface"));
SoTransform260->setTranslation(new float[]{1.5,1.0,0.0});
SoShape* SoShape261 = new SoShape();
SoText* SoText262 = new SoText();
SoText262->setString(new QString[]{QString("Face Right Pose")}, 1);
SoFontStyle* SoFontStyle263 = new SoFontStyle();
SoFontStyle263->setUSE(QString("SharedFont"));
SoText262->setFontStyle(*SoFontStyle263);

SoShape261->setGeometry(*SoText262);

SoVRMLAppearance* SoVRMLAppearance264 = new SoVRMLAppearance();
SoVRMLAppearance264->setUSE(QString("PoseTextAppearance"));
SoShape261->addChild(*SoVRMLAppearance264);

SoTransform260->addChild(*SoShape261);

SoShape* SoShape265 = new SoShape();
//Selectable Text transparent Box for easy user selection
SoVRMLAppearance* SoVRMLAppearance266 = new SoVRMLAppearance();
SoVRMLAppearance266->setUSE(QString("TransparentAppearance"));
SoShape265->addChild(*SoVRMLAppearance266);

SoBox* SoBox267 = new SoBox();
SoBox267->setSize(new float[]{0.9,0.2,0.001});
SoShape265->setGeometry(*SoBox267);

SoTransform260->addChild(*SoShape265);

SoTouchSensor* SoTouchSensor268 = new SoTouchSensor();
SoTouchSensor268->setDEF(QString("FaceRightTouchSensor"));
SoTouchSensor268->setDescription(QString("select to rotate body and Face Right, leave other joints unchanged"));
SoTransform260->addChild(*SoTouchSensor268);

SoROUTE* SoROUTE269 = new SoROUTE();
SoROUTE269->setFromField(QString("isActive"));
SoROUTE269->setFromNode(QString("FaceRightTouchSensor"));
SoROUTE269->setToField(QString("commencePose"));
SoROUTE269->setToNode(QString("FaceRight_Pose"));
SoTransform260->addChild(*SoROUTE269);

SoGroup202->addChild(*SoTransform260);

SoTransform* SoTransform270 = new SoTransform();
SoTransform270->setDEF(QString("AnimatePosesInterface"));
SoTransform270->setTranslation(new float[]{1.5,0.5,0.0});
SoShape* SoShape271 = new SoShape();
SoText* SoText272 = new SoText();
SoText272->setString(new QString[]{QString("Direct animation"), QString("to, from \"I\" Pose")}, 2);
SoFontStyle* SoFontStyle273 = new SoFontStyle();
SoFontStyle273->setUSE(QString("SharedFont"));
SoText272->setFontStyle(*SoFontStyle273);

SoShape271->setGeometry(*SoText272);

SoVRMLAppearance* SoVRMLAppearance274 = new SoVRMLAppearance();
SoVRMLAppearance274->setDEF(QString("AnimationTextAppearance"));
SoMaterial* SoMaterial275 = new SoMaterial();
SoMaterial275->setDiffuseColor(new float[]{0.1,0.2,0.3});
SoVRMLAppearance274->addChild(*SoMaterial275);

SoShape271->addChild(*SoVRMLAppearance274);

SoTransform270->addChild(*SoShape271);

SoShape* SoShape276 = new SoShape();
//Selectable Text transparent Box for easy user selection
SoVRMLAppearance* SoVRMLAppearance277 = new SoVRMLAppearance();
SoVRMLAppearance277->setUSE(QString("TransparentAppearance"));
SoShape276->addChild(*SoVRMLAppearance277);

SoBox* SoBox278 = new SoBox();
SoBox278->setSize(new float[]{0.9,0.25,0.001});
SoShape276->setGeometry(*SoBox278);

SoTransform270->addChild(*SoShape276);

SoTouchSensor* SoTouchSensor279 = new SoTouchSensor();
SoTouchSensor279->setDEF(QString("AnimatePosesTouchSensor"));
SoTouchSensor279->setDescription(QString("select to animate current pose to \"I\" pose, then back to original pose, using TimeSensor events"));
SoTransform270->addChild(*SoTouchSensor279);

//cycleInterval=4 also hard-coded in script execution message
SoTimeSensor* SoTimeSensor280 = new SoTimeSensor();
SoTimeSensor280->setDEF(QString("AnimatePosesClock"));
SoTimeSensor280->setCycleInterval(4);
SoTimeSensor280->setDescription(QString("directly animate several poses"));
SoTransform270->addChild(*SoTimeSensor280);

SoScalarInterpolator* SoScalarInterpolator281 = new SoScalarInterpolator();
SoScalarInterpolator281->setDEF(QString("AnimatePosesLoopInterpolator"));
SoScalarInterpolator281->setKey(new float[]{0.0,0.05,0.45,0.55,0.95,1.0}, 6);
SoScalarInterpolator281->setKeyValue(new float[]{0.0,0.0,1.0,1.0,0.0,0.0}, 6);
SoTransform270->addChild(*SoScalarInterpolator281);

SoROUTE* SoROUTE282 = new SoROUTE();
SoROUTE282->setFromField(QString("touchTime"));
SoROUTE282->setFromNode(QString("AnimatePosesTouchSensor"));
SoROUTE282->setToField(QString("startTime"));
SoROUTE282->setToNode(QString("AnimatePosesClock"));
SoTransform270->addChild(*SoROUTE282);

SoROUTE* SoROUTE283 = new SoROUTE();
SoROUTE283->setFromField(QString("fraction_changed"));
SoROUTE283->setFromNode(QString("AnimatePosesClock"));
SoROUTE283->setToField(QString("set_fraction"));
SoROUTE283->setToNode(QString("AnimatePosesLoopInterpolator"));
SoTransform270->addChild(*SoROUTE283);

SoROUTE* SoROUTE284 = new SoROUTE();
SoROUTE284->setFromField(QString("value_changed"));
SoROUTE284->setFromNode(QString("AnimatePosesLoopInterpolator"));
SoROUTE284->setToField(QString("set_fraction"));
SoROUTE284->setToNode(QString("I_Pose"));
SoTransform270->addChild(*SoROUTE284);

SoGroup202->addChild(*SoTransform270);

SoTransform* SoTransform285 = new SoTransform();
SoTransform285->setDEF(QString("ResetDefaultPoseInterface"));
SoTransform285->setTranslation(new float[]{1.5,0.0,0.0});
SoShape* SoShape286 = new SoShape();
SoText* SoText287 = new SoText();
SoText287->setString(new QString[]{QString("Reset All Joints"), QString("to Default \"I\" Pose")}, 2);
SoFontStyle* SoFontStyle288 = new SoFontStyle();
SoFontStyle288->setUSE(QString("SharedFont"));
SoText287->setFontStyle(*SoFontStyle288);

SoShape286->setGeometry(*SoText287);

SoVRMLAppearance* SoVRMLAppearance289 = new SoVRMLAppearance();
SoVRMLAppearance289->setUSE(QString("AnimationTextAppearance"));
SoShape286->addChild(*SoVRMLAppearance289);

SoTransform285->addChild(*SoShape286);

SoShape* SoShape290 = new SoShape();
//Selectable Text transparent Box for easy user selection
SoVRMLAppearance* SoVRMLAppearance291 = new SoVRMLAppearance();
SoVRMLAppearance291->setUSE(QString("TransparentAppearance"));
SoShape290->addChild(*SoVRMLAppearance291);

SoBox* SoBox292 = new SoBox();
SoBox292->setSize(new float[]{0.9,0.25,0.001});
SoShape290->setGeometry(*SoBox292);

SoTransform285->addChild(*SoShape290);

SoTouchSensor* SoTouchSensor293 = new SoTouchSensor();
SoTouchSensor293->setDEF(QString("ResetPoseTouchSensor"));
SoTouchSensor293->setDescription(QString("select to immediately Rezero All Joints (to default \"I\" Pose) by sending resetAllJoints event"));
SoTransform285->addChild(*SoTouchSensor293);

SoROUTE* SoROUTE294 = new SoROUTE();
SoROUTE294->setFromField(QString("isActive"));
SoROUTE294->setFromNode(QString("ResetPoseTouchSensor"));
SoROUTE294->setToField(QString("resetAllJoints"));
SoROUTE294->setToNode(QString("FaceLeft_Pose"));
SoTransform285->addChild(*SoROUTE294);

SoGroup202->addChild(*SoTransform285);

SoNode42->addChild(*SoGroup202);

SoGroup* SoGroup295 = new SoGroup();
SoGroup295->setDEF(QString("HandleInlineLoadsensorRouting"));
SoROUTE* SoROUTE296 = new SoROUTE();
SoROUTE296->setFromField(QString("isLoaded"));
SoROUTE296->setFromNode(QString("HumanoidInlineLoadSensor"));
SoROUTE296->setToField(QString("isLoaded"));
SoROUTE296->setToNode(QString("A_Pose"));
SoGroup295->addChild(*SoROUTE296);

SoROUTE* SoROUTE297 = new SoROUTE();
SoROUTE297->setFromField(QString("isLoaded"));
SoROUTE297->setFromNode(QString("HumanoidInlineLoadSensor"));
SoROUTE297->setToField(QString("isLoaded"));
SoROUTE297->setToNode(QString("H_Pose"));
SoGroup295->addChild(*SoROUTE297);

SoROUTE* SoROUTE298 = new SoROUTE();
SoROUTE298->setFromField(QString("isLoaded"));
SoROUTE298->setFromNode(QString("HumanoidInlineLoadSensor"));
SoROUTE298->setToField(QString("isLoaded"));
SoROUTE298->setToNode(QString("I_Pose"));
SoGroup295->addChild(*SoROUTE298);

SoROUTE* SoROUTE299 = new SoROUTE();
SoROUTE299->setFromField(QString("isLoaded"));
SoROUTE299->setFromNode(QString("HumanoidInlineLoadSensor"));
SoROUTE299->setToField(QString("isLoaded"));
SoROUTE299->setToNode(QString("T_Pose"));
SoGroup295->addChild(*SoROUTE299);

SoROUTE* SoROUTE300 = new SoROUTE();
SoROUTE300->setFromField(QString("isLoaded"));
SoROUTE300->setFromNode(QString("HumanoidInlineLoadSensor"));
SoROUTE300->setToField(QString("isLoaded"));
SoROUTE300->setToNode(QString("FaceLeft_Pose"));
SoGroup295->addChild(*SoROUTE300);

SoROUTE* SoROUTE301 = new SoROUTE();
SoROUTE301->setFromField(QString("isLoaded"));
SoROUTE301->setFromNode(QString("HumanoidInlineLoadSensor"));
SoROUTE301->setToField(QString("isLoaded"));
SoROUTE301->setToNode(QString("FaceRight_Pose"));
SoGroup295->addChild(*SoROUTE301);

SoROUTE* SoROUTE302 = new SoROUTE();
SoROUTE302->setFromField(QString("isLoaded"));
SoROUTE302->setFromNode(QString("HumanoidInlineLoadSensor"));
SoROUTE302->setToField(QString("isLoaded"));
SoROUTE302->setToNode(QString("TouchDown_Pose"));
SoGroup295->addChild(*SoROUTE302);

SoNode42->addChild(*SoGroup295);

SoSceneManager0->setSceneGraph(*SoNode42);

return 0;
}
