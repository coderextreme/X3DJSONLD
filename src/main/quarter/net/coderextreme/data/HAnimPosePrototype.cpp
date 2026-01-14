
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
Someta2->setContent(QString("HAnimPosePrototype.x3d"));
Sohead1->addMeta(*Someta2);

Someta* Someta3 = new Someta();
Someta3->setName(QString("description"));
Someta3->setContent(QString("Define an experimental new node to simply capture a single pose for an HAnimHumanoid model."));
Sohead1->addMeta(*Someta3);

Someta* Someta4 = new Someta();
Someta4->setName(QString("created"));
Someta4->setContent(QString("4 April 2025"));
Sohead1->addMeta(*Someta4);

Someta* Someta5 = new Someta();
Someta5->setName(QString("modified"));
Someta5->setContent(QString("Mon, 15 Sep 2025 05:20:09 GMT"));
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
Someta8->setName(QString("warning"));
Someta8->setContent(QString("under development"));
Sohead1->addMeta(*Someta8);

Someta* Someta9 = new Someta();
Someta9->setName(QString("reference"));
Someta9->setContent(QString("HAnimPoseDesignNotes19MAR2025.pdf"));
Sohead1->addMeta(*Someta9);

Someta* Someta10 = new Someta();
Someta10->setName(QString("reference"));
Someta10->setContent(QString("HAnim Architecture volume 1 version 2.0, clause 4.8.2 Modelling of human-like HAnim figures, https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#ModellingOfHumanLikeHAnimFigures"));
Sohead1->addMeta(*Someta10);

Someta* Someta11 = new Someta();
Someta11->setName(QString("reference"));
Someta11->setContent(QString("HAnim Architecture volume 1 version 2.0, clause 4.8.3 Poses, https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#Poses"));
Sohead1->addMeta(*Someta11);

Someta* Someta12 = new Someta();
Someta12->setName(QString("identifier"));
Someta12->setContent(QString("https://www.web3d.org/x3d/content/examples/X3dForAdvancedModeling/HelloWorldScenes/HAnimPosePrototype.x3d"));
Sohead1->addMeta(*Someta12);

SoSceneManager0->setHead(*Sohead1);

SoNode* SoNode13 = new SoNode();
SoProtoDeclare* SoProtoDeclare14 = new SoProtoDeclare();
SoProtoDeclare14->setName(QString("HAnimPose"));
SoProtoDeclare14->setAppinfo(QString("Assumes HAnimHumanoid configuration must be in I pose, which can be achieved by resetting every HAnimJoint to default values"));
SoProtoInterface* SoProtoInterface15 = new SoProtoInterface();
Sofield* Sofield16 = new Sofield();
Sofield16->setAccessType(QString("inputOutput"));
Sofield16->setType(QString("SFBool"));
Sofield16->setName(QString("enabled"));
Sofield16->setValue(QString("true"));
Sofield16->setAppinfo(QString("default value true"));
SoProtoInterface15->addChild(*Sofield16);

Sofield* Sofield17 = new Sofield();
Sofield17->setAccessType(QString("inputOnly"));
Sofield17->setType(QString("SFBool"));
Sofield17->setName(QString("setPose"));
Sofield17->setAppinfo(QString("this event tells the HAnimPose node to do it's thing!"));
SoProtoInterface15->addChild(*Sofield17);

Sofield* Sofield18 = new Sofield();
Sofield18->setAccessType(QString("inputOutput"));
Sofield18->setType(QString("SFString"));
Sofield18->setName(QString("name"));
Sofield18->setValue(QString("PoseName"));
Sofield18->setAppinfo(QString("name of this pose"));
SoProtoInterface15->addChild(*Sofield18);

Sofield* Sofield19 = new Sofield();
Sofield19->setAccessType(QString("inputOutput"));
Sofield19->setType(QString("MFString"));
Sofield19->setName(QString("namesPoseJoints"));
Sofield19->setValue(QString("\"nameJoint1\" \"nameJoint2\" \"nameJoint3\" \"nameJoint4\""));
Sofield19->setAppinfo(QString("names of joints in pose"));
SoProtoInterface15->addChild(*Sofield19);

Sofield* Sofield20 = new Sofield();
Sofield20->setAccessType(QString("inputOutput"));
Sofield20->setType(QString("MFVec3f"));
Sofield20->setName(QString("positionsPoseJoints"));
Sofield20->setAppinfo(QString("positions of joints in pose"));
SoProtoInterface15->addChild(*Sofield20);

Sofield* Sofield21 = new Sofield();
Sofield21->setAccessType(QString("inputOutput"));
Sofield21->setType(QString("MFRotation"));
Sofield21->setName(QString("rotationsPoseJoints"));
Sofield21->setAppinfo(QString("rotations of joints in pose"));
SoProtoInterface15->addChild(*Sofield21);

Sofield* Sofield22 = new Sofield();
Sofield22->setAccessType(QString("inputOutput"));
Sofield22->setType(QString("SFInt32"));
Sofield22->setName(QString("whichChoice"));
Sofield22->setAppinfo(QString("selects one of the HAnimHumanoid nodes"));
SoProtoInterface15->addChild(*Sofield22);

Sofield* Sofield23 = new Sofield();
Sofield23->setAccessType(QString("inputOutput"));
Sofield23->setType(QString("MFNode"));
Sofield23->setName(QString("children"));
Sofield23->setAppinfo(QString("references one or more HAnimHumanoid nodes, typically via USE references"));
SoProtoInterface15->addChild(*Sofield23);

Sofield* Sofield24 = new Sofield();
Sofield24->setAccessType(QString("inputOnly"));
Sofield24->setType(QString("MFNode"));
Sofield24->setName(QString("addChildren"));
Sofield24->setAppinfo(QString("references one or more HAnimHumanoid nodes, typically via USE references"));
SoProtoInterface15->addChild(*Sofield24);

Sofield* Sofield25 = new Sofield();
Sofield25->setAccessType(QString("inputOnly"));
Sofield25->setType(QString("MFNode"));
Sofield25->setName(QString("removeChildren"));
Sofield25->setAppinfo(QString("references one or more HAnimHumanoid nodes, typically via USE references"));
SoProtoInterface15->addChild(*Sofield25);

Sofield* Sofield26 = new Sofield();
Sofield26->setAccessType(QString("inputOutput"));
Sofield26->setType(QString("SFBool"));
Sofield26->setName(QString("traceEnabled"));
Sofield26->setValue(QString("true"));
Sofield26->setAppinfo(QString("debug trace to Browser output console"));
SoProtoInterface15->addChild(*Sofield26);

SoProtoDeclare14->addChild(*SoProtoInterface15);

SoProtoBody* SoProtoBody27 = new SoProtoBody();
SoSwitch* SoSwitch28 = new SoSwitch();
SoSwitch28->setDEF(QString("PrototypeRootNode"));
SoIS* SoIS29 = new SoIS();
Soconnect* Soconnect30 = new Soconnect();
Soconnect30->setNodeField(QString("whichChoice"));
Soconnect30->setProtoField(QString("whichChoice"));
SoIS29->addChild(*Soconnect30);

Soconnect* Soconnect31 = new Soconnect();
Soconnect31->setNodeField(QString("addChildren"));
Soconnect31->setProtoField(QString("addChildren"));
SoIS29->addChild(*Soconnect31);

Soconnect* Soconnect32 = new Soconnect();
Soconnect32->setNodeField(QString("removeChildren"));
Soconnect32->setProtoField(QString("removeChildren"));
SoIS29->addChild(*Soconnect32);

Soconnect* Soconnect33 = new Soconnect();
Soconnect33->setNodeField(QString("children"));
Soconnect33->setProtoField(QString("children"));
SoIS29->addChild(*Soconnect33);

SoSwitch28->addChild(*SoIS29);

SoProtoBody27->addChild(*SoSwitch28);

SoMetadataString* SoMetadataString34 = new SoMetadataString();
SoMetadataString34->X3DNode::setName(QString("interface"));
SoMetadataString34->X3DNode::setReference(QString("https://www.web3d.org/specifications/X3Dv4/ISO-IEC19775-1v4-IS/Part01/concepts.html#InterfaceHierarchy"));
SoMetadataString34->setValue(new QString[]{QString("X3DGroupingNode")}, 1);
SoProtoBody27->addChild(*SoMetadataString34);

SoScript* SoScript35 = new SoScript();
SoScript35->setDEF(QString("HAnimPoseScriptOperations"));
SoScript35->setDirectOutput(true);
Sofield* Sofield36 = new Sofield();
Sofield36->setAccessType(QString("inputOutput"));
Sofield36->setType(QString("SFBool"));
Sofield36->setName(QString("enabled"));
Sofield36->setAppinfo(QString("default value true"));
SoScript35->addChild(*Sofield36);

Sofield* Sofield37 = new Sofield();
Sofield37->setAccessType(QString("inputOnly"));
Sofield37->setType(QString("SFBool"));
Sofield37->setName(QString("setPose"));
Sofield37->setAppinfo(QString("this event tells the HAnimPose node to do it's thing!"));
SoScript35->addChild(*Sofield37);

Sofield* Sofield38 = new Sofield();
Sofield38->setAccessType(QString("inputOutput"));
Sofield38->setType(QString("SFString"));
Sofield38->setName(QString("name"));
Sofield38->setAppinfo(QString("name of this pose"));
SoScript35->addChild(*Sofield38);

Sofield* Sofield39 = new Sofield();
Sofield39->setAccessType(QString("inputOutput"));
Sofield39->setType(QString("MFString"));
Sofield39->setName(QString("namesPoseJoints"));
Sofield39->setAppinfo(QString("names of joints in pose"));
SoScript35->addChild(*Sofield39);

Sofield* Sofield40 = new Sofield();
Sofield40->setAccessType(QString("inputOutput"));
Sofield40->setType(QString("MFVec3f"));
Sofield40->setName(QString("positionsPoseJoints"));
Sofield40->setAppinfo(QString("positions of joints in pose"));
SoScript35->addChild(*Sofield40);

Sofield* Sofield41 = new Sofield();
Sofield41->setAccessType(QString("inputOutput"));
Sofield41->setType(QString("MFRotation"));
Sofield41->setName(QString("rotationsPoseJoints"));
Sofield41->setAppinfo(QString("rotations of joints in pose"));
SoScript35->addChild(*Sofield41);

Sofield* Sofield42 = new Sofield();
Sofield42->setAccessType(QString("inputOutput"));
Sofield42->setType(QString("SFInt32"));
Sofield42->setName(QString("whichChoice"));
Sofield42->setAppinfo(QString("selects one of the HAnimHumanoid nodes"));
SoScript35->addChild(*Sofield42);

Sofield* Sofield43 = new Sofield();
Sofield43->setAccessType(QString("inputOutput"));
Sofield43->setType(QString("MFNode"));
Sofield43->setName(QString("children"));
Sofield43->setAppinfo(QString("references one or more HAnimHumanoid nodes, typically via USE references"));
SoScript35->addChild(*Sofield43);

Sofield* Sofield44 = new Sofield();
Sofield44->setAccessType(QString("inputOnly"));
Sofield44->setType(QString("MFNode"));
Sofield44->setName(QString("addChildren"));
Sofield44->setAppinfo(QString("references one or more HAnimHumanoid nodes, typically via USE references"));
SoScript35->addChild(*Sofield44);

Sofield* Sofield45 = new Sofield();
Sofield45->setAccessType(QString("inputOnly"));
Sofield45->setType(QString("MFNode"));
Sofield45->setName(QString("removeChildren"));
Sofield45->setAppinfo(QString("references one or more HAnimHumanoid nodes, typically via USE references"));
SoScript35->addChild(*Sofield45);

Sofield* Sofield46 = new Sofield();
Sofield46->setAccessType(QString("inputOutput"));
Sofield46->setType(QString("SFBool"));
Sofield46->setName(QString("traceEnabled"));
Sofield46->setAppinfo(QString("debug trace to Browser output console"));
SoScript35->addChild(*Sofield46);


//SoScript35->setSourceCode(QString("ecmascript:")+
//_T("// Needed functionality:")+
//_T("// a. get access to a humanoid")+
//_T("// b. confirm skeletalConfiguration = 'BASIC' so we know that it has a valid default pose")+
//_T("// c. walk the tree for all joints, then set transation, scale, rotation to default values")+
//_T("// d. for each name/position/rotation triplet in the pose arrays, update the appropriate")+
//_T("//    HAnimJoint nodes to that corresponding set of values")+
//_T("var scriptName='HAnimPoseScript';")+
//_T("function initialize ()")+
//_T("{")+
//_T("    // TODO author initialization code (if any) goes here")+
//_T("    ")+
//_T("    // check that array sizes are identical for namesPoseJoints, positionsPoseJoints, rotationsPoseJoints")+
//_T("    ")+
//_T("    // check humanoid connectivity")+
//_T("    tracePrint ('initialization() successful');")+
//_T("}")+
//_T("function set_enabled (eventValue)")+
//_T("{")+
//_T("    // input eventValue received for inputOutput field enabled")+
//_T("    enabled = eventValue;")+
//_T("    tracePrint ('enabled = ' + enabled);")+
//_T("    // TODO author code (if any) goes here")+
//_T("}")+
//_T("function setPose (eventValue)")+
//_T("{")+
//_T("    // input eventValue received for inputOnly field setPose")+
//_T("    setPose = eventValue;")+
//_T("    tracePrint ('setPose = ' + setPose);")+
//_T("    // TODO author code (if any) goes here")+
//_T("}")+
//_T("function set_name (eventValue)")+
//_T("{")+
//_T("    // input eventValue received for inputOutput field name")+
//_T("    name = eventValue;")+
//_T("    tracePrint ('name = ' + name);")+
//_T("    // TODO author code (if any) goes here")+
//_T("}")+
//_T("function set_namesPoseJoints (eventValue)")+
//_T("{")+
//_T("    // input eventValue received for inputOutput field namesPoseJoints")+
//_T("    namesPoseJoints = eventValue;")+
//_T("    tracePrint ('namesPoseJoints = ' + namesPoseJoints);")+
//_T("    // TODO author code (if any) goes here")+
//_T("}")+
//_T("function set_positionsPoseJoints (eventValue)")+
//_T("{")+
//_T("    // input eventValue received for inputOutput field positionsPoseJoints")+
//_T("    positionsPoseJoints = eventValue;")+
//_T("    tracePrint ('positionsPoseJoints = ' + positionsPoseJoints);")+
//_T("    // TODO author code (if any) goes here")+
//_T("}")+
//_T("function set_rotationsPoseJoints (eventValue)")+
//_T("{")+
//_T("    // input eventValue received for inputOutput field rotationsPoseJoints")+
//_T("    rotationsPoseJoints = eventValue;")+
//_T("    tracePrint ('rotationsPoseJoints = ' + rotationsPoseJoints);")+
//_T("    // TODO author code (if any) goes here")+
//_T("}")+
//_T("function set_humanoid (eventValue)")+
//_T("{")+
//_T("    // input eventValue received for inputOutput field humanoid")+
//_T("    humanoid = eventValue;")+
//_T("    tracePrint ('humanoid = ' + humanoid);")+
//_T("    // TODO author code (if any) goes here")+
//_T("}")+
//_T("// ================== Trace output functions ==================")+
//_T("function tracePrint (outputString)")+
//_T("{")+
//_T("   // if traceEnabled is true, print outputString on X3D browser console")+
//_T("   if (traceEnabled)")+
//_T("      Browser.println ('[' + scriptName.toString()' ' + name.toString()': ' + outputString.toString() + ']');")+
//_T("}")+
//_T("function alwaysPrint (outputString)")+
//_T("{")+
//_T("      // always print outputString on X3D browser console")+
//_T("      Browser.println ('[' + scriptName.toString()' ' + name.toString()': ' + outputString.toString() + ']');")+
//_T("}")+
//_T("function set_traceEnabled (eventValue)")+
//_T("{")+
//_T("      // input eventValue received for inputOutput field")+
//_T("      traceEnabled = eventValue;")+
//_T("}")+
//_T("// ==========================================================="));
SoIS* SoIS47 = new SoIS();
Soconnect* Soconnect48 = new Soconnect();
Soconnect48->setNodeField(QString("enabled"));
Soconnect48->setProtoField(QString("enabled"));
SoIS47->addChild(*Soconnect48);

Soconnect* Soconnect49 = new Soconnect();
Soconnect49->setNodeField(QString("setPose"));
Soconnect49->setProtoField(QString("setPose"));
SoIS47->addChild(*Soconnect49);

Soconnect* Soconnect50 = new Soconnect();
Soconnect50->setNodeField(QString("name"));
Soconnect50->setProtoField(QString("name"));
SoIS47->addChild(*Soconnect50);

Soconnect* Soconnect51 = new Soconnect();
Soconnect51->setNodeField(QString("namesPoseJoints"));
Soconnect51->setProtoField(QString("namesPoseJoints"));
SoIS47->addChild(*Soconnect51);

Soconnect* Soconnect52 = new Soconnect();
Soconnect52->setNodeField(QString("positionsPoseJoints"));
Soconnect52->setProtoField(QString("positionsPoseJoints"));
SoIS47->addChild(*Soconnect52);

Soconnect* Soconnect53 = new Soconnect();
Soconnect53->setNodeField(QString("rotationsPoseJoints"));
Soconnect53->setProtoField(QString("rotationsPoseJoints"));
SoIS47->addChild(*Soconnect53);

Soconnect* Soconnect54 = new Soconnect();
Soconnect54->setNodeField(QString("whichChoice"));
Soconnect54->setProtoField(QString("whichChoice"));
SoIS47->addChild(*Soconnect54);

Soconnect* Soconnect55 = new Soconnect();
Soconnect55->setNodeField(QString("children"));
Soconnect55->setProtoField(QString("children"));
SoIS47->addChild(*Soconnect55);

Soconnect* Soconnect56 = new Soconnect();
Soconnect56->setNodeField(QString("addChildren"));
Soconnect56->setProtoField(QString("addChildren"));
SoIS47->addChild(*Soconnect56);

Soconnect* Soconnect57 = new Soconnect();
Soconnect57->setNodeField(QString("removeChildren"));
Soconnect57->setProtoField(QString("removeChildren"));
SoIS47->addChild(*Soconnect57);

Soconnect* Soconnect58 = new Soconnect();
Soconnect58->setNodeField(QString("traceEnabled"));
Soconnect58->setProtoField(QString("traceEnabled"));
SoIS47->addChild(*Soconnect58);

SoScript35->addChild(*SoIS47);

SoProtoBody27->addChild(*SoScript35);

SoProtoDeclare14->addChild(*SoProtoBody27);

SoNode13->addChild(*SoProtoDeclare14);

SoWorldInfo* SoWorldInfo59 = new SoWorldInfo();
SoWorldInfo59->setDEF(QString("ModelInfo"));
SoWorldInfo59->setTitle(QString("HAnimPose Prototype"));
SoWorldInfo59->setInfo(new QString[]{QString("Design to illustrate a potential HAnimPose node")}, 1);
SoNode13->addChild(*SoWorldInfo59);

SoNavigationInfo* SoNavigationInfo60 = new SoNavigationInfo();
SoNode13->addChild(*SoNavigationInfo60);

SoProtoInstance* SoProtoInstance61 = new SoProtoInstance();
SoProtoInstance61->setName(QString("HAnimPose"));
SoField* SoField62 = new SoField();
SoField62->setName(QString("name"));
SoField62->setValue(QString("A"));
SoProtoInstance61->addChild(*SoField62);

SoField* SoField63 = new SoField();
SoField63->setName(QString("namesPoseJoints"));
SoField63->setValue(QString("\"l_hip\" \"r_hip\""));
SoProtoInstance61->addChild(*SoField63);

SoField* SoField64 = new SoField();
SoField64->setName(QString("positionsPoseJoints"));
SoField64->setValue(QString("0 0 0 0 0 0"));
SoProtoInstance61->addChild(*SoField64);

SoField* SoField65 = new SoField();
SoField65->setName(QString("rotationsPoseJoints"));
SoField65->setValue(QString("0 0 1 0.2 0 0 1 -0.2"));
SoProtoInstance61->addChild(*SoField65);

SoNode13->addChild(*SoProtoInstance61);

SoProtoInstance* SoProtoInstance66 = new SoProtoInstance();
SoProtoInstance66->setName(QString("HAnimPose"));
SoField* SoField67 = new SoField();
SoField67->setName(QString("name"));
SoField67->setValue(QString("T"));
SoProtoInstance66->addChild(*SoField67);

SoField* SoField68 = new SoField();
SoField68->setName(QString("namesPoseJoints"));
SoField68->setValue(QString("\"l_shoulder\" \"r_shoulder\""));
SoProtoInstance66->addChild(*SoField68);

SoField* SoField69 = new SoField();
SoField69->setName(QString("positionsPoseJoints"));
SoField69->setValue(QString("0 0 0 0 0 0"));
SoProtoInstance66->addChild(*SoField69);

SoField* SoField70 = new SoField();
SoField70->setName(QString("rotationsPoseJoints"));
SoField70->setValue(QString("0 0 1 1.57 0 0 1 -1.57"));
SoProtoInstance66->addChild(*SoField70);

SoNode13->addChild(*SoProtoInstance66);

SoSceneManager0->setSceneGraph(*SoNode13);

return 0;
}
