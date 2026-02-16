
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
Someta2->setContent(QString("HAnimPoseExternProtoDeclare.x3d"));
Sohead1->addMeta(*Someta2);

Someta* Someta3 = new Someta();
Someta3->setName(QString("description"));
Someta3->setContent(QString("Define ExternProtoDeclare for an experimental new node to simply capture a single pose for an HAnimHumanoid model. Expected usage is to allow HAnimHumanoid to contain multiple Pose nodes which can be activated and composed."));
Sohead1->addMeta(*Someta3);

Someta* Someta4 = new Someta();
Someta4->setName(QString("created"));
Someta4->setContent(QString("1 November 2025"));
Sohead1->addMeta(*Someta4);

Someta* Someta5 = new Someta();
Someta5->setName(QString("modified"));
Someta5->setContent(QString("14 December 2025"));
Sohead1->addMeta(*Someta5);

Someta* Someta6 = new Someta();
Someta6->setName(QString("creator"));
Someta6->setContent(QString("Don Brutzman"));
Sohead1->addMeta(*Someta6);

Someta* Someta7 = new Someta();
Someta7->setName(QString("creator"));
Someta7->setContent(QString("Joe Williams"));
Sohead1->addMeta(*Someta7);

Someta* Someta8 = new Someta();
Someta8->setName(QString("contributor"));
Someta8->setContent(QString("Holger Seelig for X_ITE, Sunrize on Windows, scripting guidance, and Inline IMPORT functionality as node-reference equivalent to USE"));
Sohead1->addMeta(*Someta8);

Someta* Someta9 = new Someta();
Someta9->setName(QString("specificationSection"));
Someta9->setContent(QString("HAnim Architecture volume 1 version 2.1 draft, clause 6 Object interfaces, section 6.4 Pose"));
Sohead1->addMeta(*Someta9);

Someta* Someta10 = new Someta();
Someta10->setName(QString("specificationUrl"));
Someta10->setContent(QString("https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19774/ISO-IEC19774-1/ISO-IEC19774-1v2.1/ISO-IEC19774-1v2.1-WD/Architecture/ObjectInterfaces.html#Pose"));
Sohead1->addMeta(*Someta10);

Someta* Someta11 = new Someta();
Someta11->setName(QString("specificationSection"));
Someta11->setContent(QString("HAnim Architecture volume 1 version 2.1 draft, clause 4 Concepts, section 4.8.2 Modelling of human-like HAnim figures"));
Sohead1->addMeta(*Someta11);

Someta* Someta12 = new Someta();
Someta12->setName(QString("specificationUrl"));
Someta12->setContent(QString("https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19774/ISO-IEC19774-1/ISO-IEC19774-1v2.1/ISO-IEC19774-1v2.1-WD/Architecture/concepts.html#ModellingHumanLikeHAnimFigures"));
Sohead1->addMeta(*Someta12);

Someta* Someta13 = new Someta();
Someta13->setName(QString("specificationSection"));
Someta13->setContent(QString("HAnim Architecture volume 1 version 2.1 draft, clause 4 Concepts, section 4.8.3 Poses"));
Sohead1->addMeta(*Someta13);

Someta* Someta14 = new Someta();
Someta14->setName(QString("specificationUrl"));
Someta14->setContent(QString("https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19774/ISO-IEC19774-1/ISO-IEC19774-1v2.1/ISO-IEC19774-1v2.1-WD/Architecture/concepts.html#Poses"));
Sohead1->addMeta(*Someta14);

Someta* Someta15 = new Someta();
Someta15->setName(QString("reference"));
Someta15->setContent(QString("Direct scene manipulations with Javascript, https://doc.instantreality.org/tutorial/direct-scene-manipulations-with-javascript"));
Sohead1->addMeta(*Someta15);

Someta* Someta16 = new Someta();
Someta16->setName(QString("generator"));
Someta16->setContent(QString("X3D-Edit 4.0, https://www.web3d.org/x3d/tools/X3D-Edit"));
Sohead1->addMeta(*Someta16);

Someta* Someta17 = new Someta();
Someta17->setName(QString("generator"));
Someta17->setContent(QString("Sunrize X3D Editor V1.11.1, https://create3000.github.io/sunrize"));
Sohead1->addMeta(*Someta17);

Someta* Someta18 = new Someta();
Someta18->setName(QString("identifier"));
Someta18->setContent(QString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Poses/HAnimPoseExternProtoDeclare.x3d"));
Sohead1->addMeta(*Someta18);

Someta* Someta19 = new Someta();
Someta19->setName(QString("license"));
Someta19->setContent(QString("https://www.web3d.org/x3d/content/examples/license.html"));
Sohead1->addMeta(*Someta19);

SoSceneManager0->setHead(*Sohead1);

SoNode* SoNode20 = new SoNode();
SoWorldInfo* SoWorldInfo21 = new SoWorldInfo();
SoWorldInfo21->setDEF(QString("ModelInfo"));
SoWorldInfo21->setInfo(new QString[]{QString("Design to illustrate a potential HAnimPose node")}, 1);
SoWorldInfo21->setTitle(QString("HAnimPoseExternProtoDeclare"));
SoNode20->addChild(*SoWorldInfo21);

SoBackground* SoBackground22 = new SoBackground();
SoBackground22->setSkyColor(new float[]{0.6,0.6,0.8}, 3);
SoNode20->addChild(*SoBackground22);

SoNavigationInfo* SoNavigationInfo23 = new SoNavigationInfo();
SoNode20->addChild(*SoNavigationInfo23);

SoExternProtoDeclare* SoExternProtoDeclare24 = new SoExternProtoDeclare();
SoExternProtoDeclare24->setName(QString("HAnimPose"));
SoExternProtoDeclare24->setAppinfo(QString("Experimental node to assign joint values to a humanoid and assume a pose. Assumes that baseline HAnimHumanoid configuration must be I pose, which can be achieved by resetting every HAnimJoint to default values."));
SoExternProtoDeclare24->setUrl(new QString[]{QString("Filename.x3d#HAnimPose"), QString("https://some.address.org/Filename.x3d#HAnimPose")}, 2);
Sofield* Sofield25 = new Sofield();
Sofield25->setName(QString("parentHAnimHumanoid"));
Sofield25->setAccessType(QString("inputOutput"));
Sofield25->setAppinfo(QString("HAnimHumanoid for this Pose to act upon"));
Sofield25->setType(QString("SFNode"));
SoExternProtoDeclare24->addChild(*Sofield25);

Sofield* Sofield26 = new Sofield();
Sofield26->setName(QString("name"));
Sofield26->setAccessType(QString("inputOutput"));
Sofield26->setAppinfo(QString("name of this pose"));
Sofield26->setType(QString("SFString"));
SoExternProtoDeclare24->addChild(*Sofield26);

Sofield* Sofield27 = new Sofield();
Sofield27->setName(QString("children"));
Sofield27->setAccessType(QString("inputOutput"));
Sofield27->setAppinfo(QString("joint values to apply to HAnimHumanoid"));
Sofield27->setType(QString("MFNode"));
//initializating Joint nodes (if any) go here
SoExternProtoDeclare24->addChild(*Sofield27);

Sofield* Sofield28 = new Sofield();
Sofield28->setName(QString("description"));
Sofield28->setAccessType(QString("inputOutput"));
Sofield28->setAppinfo(QString("explanation of purpose"));
Sofield28->setType(QString("SFString"));
SoExternProtoDeclare24->addChild(*Sofield28);

Sofield* Sofield29 = new Sofield();
Sofield29->setName(QString("enabled"));
Sofield29->setAccessType(QString("inputOutput"));
Sofield29->setAppinfo(QString("default value true"));
Sofield29->setType(QString("SFBool"));
SoExternProtoDeclare24->addChild(*Sofield29);

Sofield* Sofield30 = new Sofield();
Sofield30->setName(QString("loa"));
Sofield30->setAccessType(QString("initializeOnly"));
Sofield30->setAppinfo(QString("default is no loa"));
Sofield30->setType(QString("SFInt32"));
SoExternProtoDeclare24->addChild(*Sofield30);

Sofield* Sofield31 = new Sofield();
Sofield31->setName(QString("transitionDuration"));
Sofield31->setAccessType(QString("inputOutput"));
Sofield31->setAppinfo(QString("how many seconds to achieve the pose"));
Sofield31->setType(QString("SFTime"));
SoExternProtoDeclare24->addChild(*Sofield31);

Sofield* Sofield32 = new Sofield();
Sofield32->setName(QString("metadata"));
Sofield32->setAccessType(QString("inputOutput"));
Sofield32->setAppinfo(QString("single Metadata* node"));
Sofield32->setType(QString("SFNode"));
SoExternProtoDeclare24->addChild(*Sofield32);

Sofield* Sofield33 = new Sofield();
Sofield33->setName(QString("isActive"));
Sofield33->setAccessType(QString("outputOnly"));
Sofield33->setAppinfo(QString("event indicating when pose transition is active"));
Sofield33->setType(QString("SFBool"));
SoExternProtoDeclare24->addChild(*Sofield33);

Sofield* Sofield34 = new Sofield();
Sofield34->setName(QString("commencePose"));
Sofield34->setAccessType(QString("inputOnly"));
Sofield34->setAppinfo(QString("this event tells the HAnimPose node to fully transition, equivalent to set_fraction=1"));
Sofield34->setType(QString("SFBool"));
SoExternProtoDeclare24->addChild(*Sofield34);

Sofield* Sofield35 = new Sofield();
Sofield35->setName(QString("resetAllJoints"));
Sofield35->setAccessType(QString("inputOnly"));
Sofield35->setAppinfo(QString("reset the skeleton to I pose with all joints zeroed"));
Sofield35->setType(QString("SFBool"));
SoExternProtoDeclare24->addChild(*Sofield35);

Sofield* Sofield36 = new Sofield();
Sofield36->setName(QString("set_fraction"));
Sofield36->setAccessType(QString("inputOnly"));
Sofield36->setAppinfo(QString("allows transition to proceed incrementally from fraction [0..10"));
Sofield36->setType(QString("SFFloat"));
SoExternProtoDeclare24->addChild(*Sofield36);

Sofield* Sofield37 = new Sofield();
Sofield37->setName(QString("set_startTime"));
Sofield37->setAccessType(QString("inputOnly"));
Sofield37->setAppinfo(QString("starts the animation clock"));
Sofield37->setType(QString("SFTime"));
SoExternProtoDeclare24->addChild(*Sofield37);

Sofield* Sofield38 = new Sofield();
Sofield38->setName(QString("isLoaded"));
Sofield38->setAccessType(QString("inputOnly"));
Sofield38->setAppinfo(QString("possible notification from LoadSensor if using HAnimHumanoid Inline/IMPORT AS/USE"));
Sofield38->setType(QString("SFBool"));
SoExternProtoDeclare24->addChild(*Sofield38);

Sofield* Sofield39 = new Sofield();
Sofield39->setName(QString("traceEnabled"));
Sofield39->setAccessType(QString("inputOutput"));
Sofield39->setAppinfo(QString("debug trace to Browser output console this is a local prototype field"));
Sofield39->setType(QString("SFBool"));
SoExternProtoDeclare24->addChild(*Sofield39);

SoNode20->addChild(*SoExternProtoDeclare24);

SoViewpoint* SoViewpoint40 = new SoViewpoint();
SoViewpoint40->setDescription(QString("HAnimPoseExternProtoDeclare description"));
SoViewpoint40->setPosition(new float[]{0.0,1.0,4.0});
SoNode20->addChild(*SoViewpoint40);

SoTransform* SoTransform41 = new SoTransform();
SoTransform41->setDEF(QString("DisplayHeader1"));
SoTransform41->setTranslation(new float[]{0.0,1.5,0.0});
SoAnchor* SoAnchor42 = new SoAnchor();
SoAnchor42->setDescription(QString("go to HAnimPoseExternProtoDeclareIndex page"));
SoAnchor42->setParameter(new QString[]{QString("target=_blank")}, 1);
SoAnchor42->setUrl(new QString[]{QString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Poses/HAnimPoseExternProtoDeclareIndex.html")}, 1);
SoShape* SoShape43 = new SoShape();
SoText* SoText44 = new SoText();
SoText44->setString(new QString[]{QString("Utility scene"), QString("HAnimPoseExternProtoDeclare.x3d")}, 2);
SoFontStyle* SoFontStyle45 = new SoFontStyle();
SoFontStyle45->setDEF(QString("HeaderFont"));
SoFontStyle45->setFamily(new QString[]{QString("SANS")}, 1);
SoFontStyle45->setJustify(new QString[]{QString("MIDDLE"), QString("MIDDLE")}, 2);
SoFontStyle45->setSize(0.15);
SoFontStyle45->setStyle(QString("BOLD"));
SoText44->setFontStyle(*SoFontStyle45);

SoShape43->setGeometry(*SoText44);

SoVRMLAppearance* SoVRMLAppearance46 = new SoVRMLAppearance();
SoVRMLAppearance46->setDEF(QString("PoseTextAppearance"));
SoMaterial* SoMaterial47 = new SoMaterial();
SoMaterial47->setDiffuseColor(new float[]{0.1,0.3,0.5});
SoVRMLAppearance46->addChild(*SoMaterial47);

SoShape43->addChild(*SoVRMLAppearance46);

SoAnchor42->addChild(*SoShape43);

SoShape* SoShape48 = new SoShape();
SoBox* SoBox49 = new SoBox();
SoBox49->setSize(new float[]{3.5,0.5,0.001});
SoShape48->setGeometry(*SoBox49);

SoVRMLAppearance* SoVRMLAppearance50 = new SoVRMLAppearance();
SoVRMLAppearance50->setDEF(QString("TransparentAppearance"));
SoMaterial* SoMaterial51 = new SoMaterial();
SoMaterial51->setTransparency(1);
SoVRMLAppearance50->addChild(*SoMaterial51);

SoShape48->addChild(*SoVRMLAppearance50);

SoAnchor42->addChild(*SoShape48);

SoTransform41->addChild(*SoAnchor42);

SoNode20->addChild(*SoTransform41);

SoTransform* SoTransform52 = new SoTransform();
SoTransform52->setDEF(QString("DisplayHeader2"));
SoTransform52->setTranslation(new float[]{0.0,0.5,0.0});
SoAnchor* SoAnchor53 = new SoAnchor();
SoAnchor53->setDescription(QString("go to HAnimPosePrototypeIndex page"));
SoAnchor53->setParameter(new QString[]{QString("target=_blank")}, 1);
SoAnchor53->setUrl(new QString[]{QString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Poses/HAnimPosePrototypeIndex.html")}, 1);
SoShape* SoShape54 = new SoShape();
SoText* SoText55 = new SoText();
SoText55->setString(new QString[]{QString("This model supports"), QString("HAnimPosePrototype.x3d")}, 2);
SoFontStyle* SoFontStyle56 = new SoFontStyle();
SoFontStyle56->setUSE(QString("HeaderFont"));
SoText55->setFontStyle(*SoFontStyle56);

SoShape54->setGeometry(*SoText55);

SoVRMLAppearance* SoVRMLAppearance57 = new SoVRMLAppearance();
SoVRMLAppearance57->setUSE(QString("PoseTextAppearance"));
SoShape54->addChild(*SoVRMLAppearance57);

SoAnchor53->addChild(*SoShape54);

SoTransform52->addChild(*SoAnchor53);

SoShape* SoShape58 = new SoShape();
SoBox* SoBox59 = new SoBox();
SoBox59->setSize(new float[]{2.6,0.5,0.001});
SoShape58->setGeometry(*SoBox59);

SoVRMLAppearance* SoVRMLAppearance60 = new SoVRMLAppearance();
SoVRMLAppearance60->setUSE(QString("TransparentAppearance"));
SoShape58->addChild(*SoVRMLAppearance60);

SoTransform52->addChild(*SoShape58);

SoNode20->addChild(*SoTransform52);

SoSceneManager0->setSceneGraph(*SoNode20);

return 0;
}
