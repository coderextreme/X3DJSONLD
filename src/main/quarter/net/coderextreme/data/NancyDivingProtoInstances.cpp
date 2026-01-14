
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
Someta2->setContent(QString("NancyDivingProtoInstances.x3d"));
Sohead1->addMeta(*Someta2);

Someta* Someta3 = new Someta();
Someta3->setName(QString("description"));
Someta3->setContent(QString("Nancy having fun scuba diving - developmental model using ProtoInstance instead of HAnim native tags, do not use this pattern."));
Sohead1->addMeta(*Someta3);

Someta* Someta4 = new Someta();
Someta4->setName(QString("warning"));
Someta4->setContent(QString("This is a developmental example, use HAnim native tags as shown in other examples instead of the prototypes and ProtoInstances shown here."));
Sohead1->addMeta(*Someta4);

Someta* Someta5 = new Someta();
Someta5->setName(QString("creator"));
Someta5->setContent(QString("Etsuko Lippi"));
Sohead1->addMeta(*Someta5);

Someta* Someta6 = new Someta();
Someta6->setName(QString("creator"));
Someta6->setContent(QString("Cindy Ballreich cindy@ballreich.net 3Name3D"));
Sohead1->addMeta(*Someta6);

Someta* Someta7 = new Someta();
Someta7->setName(QString("translator"));
Someta7->setContent(QString("Tom Miller"));
Sohead1->addMeta(*Someta7);

Someta* Someta8 = new Someta();
Someta8->setName(QString("translator"));
Someta8->setContent(QString("Don Brutzman"));
Sohead1->addMeta(*Someta8);

Someta* Someta9 = new Someta();
Someta9->setName(QString("created"));
Someta9->setContent(QString("19 November 2001"));
Sohead1->addMeta(*Someta9);

Someta* Someta10 = new Someta();
Someta10->setName(QString("modified"));
Someta10->setContent(QString("Mon, 15 Sep 2025 05:20:50 GMT"));
Sohead1->addMeta(*Someta10);

Someta* Someta11 = new Someta();
Someta11->setName(QString("TODO"));
Someta11->setContent(QString("left arm motion still has a problem"));
Sohead1->addMeta(*Someta11);

Someta* Someta12 = new Someta();
Someta12->setName(QString("rights"));
Someta12->setContent(QString("1997 3Name3D / Yglesias, Wallock, Divekar, Inc., all rights reserved."));
Sohead1->addMeta(*Someta12);

Someta* Someta13 = new Someta();
Someta13->setName(QString("identifier"));
Someta13->setContent(QString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/NancyDivingProtoInstances.x3d"));
Sohead1->addMeta(*Someta13);

SoSceneManager0->setHead(*Sohead1);

SoNode* SoNode14 = new SoNode();
SoExternProtoDeclare* SoExternProtoDeclare15 = new SoExternProtoDeclare();
SoExternProtoDeclare15->setName(QString("Joint"));
SoExternProtoDeclare15->setAppinfo(QString("The Joint node is used as a building block to describe the articulations of the humanoid figure. Each articulation of the humanoid figure is represented by a Joint node each of which is organized into a hierarchy that describes the overall skeleton of the humanoid."));
SoExternProtoDeclare15->setDocumentation(QString("http://HAnim.org/Specifications/HAnim2001/part1/Joint.html"));
SoExternProtoDeclare15->setUrl(new QString[]{QString("NancyPrototypes.x3d#Joint"), QString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/NancyPrototypes.x3d#Joint"), QString("NancyPrototypes.wrl#Joint"), QString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/NancyPrototypes.wrl#Joint")}, 4);
Sofield* Sofield16 = new Sofield();
Sofield16->setAccessType(QString("inputOutput"));
Sofield16->setType(QString("SFVec3f"));
Sofield16->setName(QString("center"));
SoExternProtoDeclare15->addChild(*Sofield16);

Sofield* Sofield17 = new Sofield();
Sofield17->setAccessType(QString("inputOutput"));
Sofield17->setType(QString("MFNode"));
Sofield17->setName(QString("children"));
SoExternProtoDeclare15->addChild(*Sofield17);

Sofield* Sofield18 = new Sofield();
Sofield18->setAccessType(QString("inputOutput"));
Sofield18->setType(QString("MFFloat"));
Sofield18->setName(QString("llimit"));
SoExternProtoDeclare15->addChild(*Sofield18);

Sofield* Sofield19 = new Sofield();
Sofield19->setAccessType(QString("inputOutput"));
Sofield19->setType(QString("SFRotation"));
Sofield19->setName(QString("limitOrientation"));
SoExternProtoDeclare15->addChild(*Sofield19);

Sofield* Sofield20 = new Sofield();
Sofield20->setAccessType(QString("inputOutput"));
Sofield20->setType(QString("SFString"));
Sofield20->setName(QString("name"));
SoExternProtoDeclare15->addChild(*Sofield20);

Sofield* Sofield21 = new Sofield();
Sofield21->setAccessType(QString("inputOutput"));
Sofield21->setType(QString("SFRotation"));
Sofield21->setName(QString("rotation"));
SoExternProtoDeclare15->addChild(*Sofield21);

Sofield* Sofield22 = new Sofield();
Sofield22->setAccessType(QString("inputOutput"));
Sofield22->setType(QString("SFVec3f"));
Sofield22->setName(QString("scale"));
SoExternProtoDeclare15->addChild(*Sofield22);

Sofield* Sofield23 = new Sofield();
Sofield23->setAccessType(QString("inputOutput"));
Sofield23->setType(QString("SFRotation"));
Sofield23->setName(QString("scaleOrientation"));
SoExternProtoDeclare15->addChild(*Sofield23);

Sofield* Sofield24 = new Sofield();
Sofield24->setAccessType(QString("inputOutput"));
Sofield24->setType(QString("MFFloat"));
Sofield24->setName(QString("stiffness"));
SoExternProtoDeclare15->addChild(*Sofield24);

Sofield* Sofield25 = new Sofield();
Sofield25->setAccessType(QString("inputOutput"));
Sofield25->setType(QString("SFVec3f"));
Sofield25->setName(QString("translation"));
SoExternProtoDeclare15->addChild(*Sofield25);

Sofield* Sofield26 = new Sofield();
Sofield26->setAccessType(QString("inputOutput"));
Sofield26->setType(QString("MFFloat"));
Sofield26->setName(QString("ulimit"));
SoExternProtoDeclare15->addChild(*Sofield26);

Sofield* Sofield27 = new Sofield();
Sofield27->setAccessType(QString("inputOnly"));
Sofield27->setType(QString("MFNode"));
Sofield27->setName(QString("removeChildren"));
SoExternProtoDeclare15->addChild(*Sofield27);

Sofield* Sofield28 = new Sofield();
Sofield28->setAccessType(QString("initializeOnly"));
Sofield28->setType(QString("SFVec3f"));
Sofield28->setName(QString("bboxSize"));
SoExternProtoDeclare15->addChild(*Sofield28);

Sofield* Sofield29 = new Sofield();
Sofield29->setAccessType(QString("inputOutput"));
Sofield29->setType(QString("MFInt32"));
Sofield29->setName(QString("skinCoordIndex"));
SoExternProtoDeclare15->addChild(*Sofield29);

Sofield* Sofield30 = new Sofield();
Sofield30->setAccessType(QString("initializeOnly"));
Sofield30->setType(QString("SFVec3f"));
Sofield30->setName(QString("bboxCenter"));
SoExternProtoDeclare15->addChild(*Sofield30);

Sofield* Sofield31 = new Sofield();
Sofield31->setAccessType(QString("inputOutput"));
Sofield31->setType(QString("MFFloat"));
Sofield31->setName(QString("skinCoordWeight"));
SoExternProtoDeclare15->addChild(*Sofield31);

Sofield* Sofield32 = new Sofield();
Sofield32->setAccessType(QString("inputOnly"));
Sofield32->setType(QString("MFNode"));
Sofield32->setName(QString("addChildren"));
SoExternProtoDeclare15->addChild(*Sofield32);

SoNode14->addChild(*SoExternProtoDeclare15);

SoExternProtoDeclare* SoExternProtoDeclare33 = new SoExternProtoDeclare();
SoExternProtoDeclare33->setName(QString("Segment"));
SoExternProtoDeclare33->setAppinfo(QString("The Segment node is used describe the attributes of the physical links between the joints of the humanoid figure. Each body part (pelvis thigh calf etc) of the humanoid figure is represented by a Segment node."));
SoExternProtoDeclare33->setDocumentation(QString("http://HAnim.org/Specifications/HAnim2001/part1/Segment.html"));
SoExternProtoDeclare33->setUrl(new QString[]{QString("NancyPrototypes.x3d#Segment"), QString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/NancyPrototypes.x3d#Segment"), QString("NancyPrototypes.wrl#Segment"), QString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/NancyPrototypes.wrl#Segment")}, 4);
Sofield* Sofield34 = new Sofield();
Sofield34->setAccessType(QString("initializeOnly"));
Sofield34->setType(QString("SFVec3f"));
Sofield34->setName(QString("bboxCenter"));
SoExternProtoDeclare33->addChild(*Sofield34);

Sofield* Sofield35 = new Sofield();
Sofield35->setAccessType(QString("initializeOnly"));
Sofield35->setType(QString("SFVec3f"));
Sofield35->setName(QString("bboxSize"));
SoExternProtoDeclare33->addChild(*Sofield35);

Sofield* Sofield36 = new Sofield();
Sofield36->setAccessType(QString("inputOutput"));
Sofield36->setType(QString("SFVec3f"));
Sofield36->setName(QString("centerOfMass"));
SoExternProtoDeclare33->addChild(*Sofield36);

Sofield* Sofield37 = new Sofield();
Sofield37->setAccessType(QString("inputOutput"));
Sofield37->setType(QString("MFNode"));
Sofield37->setName(QString("children"));
SoExternProtoDeclare33->addChild(*Sofield37);

Sofield* Sofield38 = new Sofield();
Sofield38->setAccessType(QString("inputOutput"));
Sofield38->setType(QString("SFNode"));
Sofield38->setName(QString("coord"));
Sofield38->setAppinfo(QString("contains Coordinate nodes"));
SoExternProtoDeclare33->addChild(*Sofield38);

Sofield* Sofield39 = new Sofield();
Sofield39->setAccessType(QString("inputOutput"));
Sofield39->setType(QString("MFNode"));
Sofield39->setName(QString("displacers"));
Sofield39->setAppinfo(QString("contains Displacer nodes"));
SoExternProtoDeclare33->addChild(*Sofield39);

Sofield* Sofield40 = new Sofield();
Sofield40->setAccessType(QString("inputOutput"));
Sofield40->setType(QString("SFFloat"));
Sofield40->setName(QString("mass"));
SoExternProtoDeclare33->addChild(*Sofield40);

Sofield* Sofield41 = new Sofield();
Sofield41->setAccessType(QString("inputOutput"));
Sofield41->setType(QString("MFFloat"));
Sofield41->setName(QString("momentsOfInertia"));
SoExternProtoDeclare33->addChild(*Sofield41);

Sofield* Sofield42 = new Sofield();
Sofield42->setAccessType(QString("inputOutput"));
Sofield42->setType(QString("SFString"));
Sofield42->setName(QString("name"));
SoExternProtoDeclare33->addChild(*Sofield42);

Sofield* Sofield43 = new Sofield();
Sofield43->setAccessType(QString("inputOnly"));
Sofield43->setType(QString("MFNode"));
Sofield43->setName(QString("addChildren"));
SoExternProtoDeclare33->addChild(*Sofield43);

Sofield* Sofield44 = new Sofield();
Sofield44->setAccessType(QString("inputOnly"));
Sofield44->setType(QString("MFNode"));
Sofield44->setName(QString("removeChildren"));
SoExternProtoDeclare33->addChild(*Sofield44);

SoNode14->addChild(*SoExternProtoDeclare33);

SoExternProtoDeclare* SoExternProtoDeclare45 = new SoExternProtoDeclare();
SoExternProtoDeclare45->setName(QString("Humanoid"));
SoExternProtoDeclare45->setAppinfo(QString("The Humanoid node serves as overall container for the Joint Segment Site and Viewpoint nodes which define the skeleton geometry and landmarks of the humanoid figure. Additionally the node provides a means for defining information about the author copyright and usage restrictions of the model."));
SoExternProtoDeclare45->setDocumentation(QString("http://HAnim.org/Specifications/HAnim2001/part1/Humanoid.html"));
SoExternProtoDeclare45->setUrl(new QString[]{QString("NancyPrototypes.x3d#Humanoid"), QString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/NancyPrototypes.x3d#Humanoid"), QString("NancyPrototypes.wrl#Humanoid"), QString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/NancyPrototypes.wrl#Humanoid")}, 4);
Sofield* Sofield46 = new Sofield();
Sofield46->setAccessType(QString("initializeOnly"));
Sofield46->setType(QString("SFVec3f"));
Sofield46->setName(QString("bboxCenter"));
SoExternProtoDeclare45->addChild(*Sofield46);

Sofield* Sofield47 = new Sofield();
Sofield47->setAccessType(QString("initializeOnly"));
Sofield47->setType(QString("SFVec3f"));
Sofield47->setName(QString("bboxSize"));
SoExternProtoDeclare45->addChild(*Sofield47);

Sofield* Sofield48 = new Sofield();
Sofield48->setAccessType(QString("inputOutput"));
Sofield48->setType(QString("SFVec3f"));
Sofield48->setName(QString("center"));
SoExternProtoDeclare45->addChild(*Sofield48);

Sofield* Sofield49 = new Sofield();
Sofield49->setAccessType(QString("inputOutput"));
Sofield49->setType(QString("MFNode"));
Sofield49->setName(QString("humanoidBody"));
Sofield49->setAppinfo(QString("HAnim 1.1 field container for body geometry Hint: replaced by 2.0 skeleton"));
Sofield49->setDocumentation(QString("http://HAnim.org/Specifications/HAnim1.1/#humanoid"));
SoExternProtoDeclare45->addChild(*Sofield49);

Sofield* Sofield50 = new Sofield();
Sofield50->setAccessType(QString("inputOutput"));
Sofield50->setType(QString("MFString"));
Sofield50->setName(QString("info"));
SoExternProtoDeclare45->addChild(*Sofield50);

Sofield* Sofield51 = new Sofield();
Sofield51->setAccessType(QString("inputOutput"));
Sofield51->setType(QString("MFNode"));
Sofield51->setName(QString("joints"));
Sofield51->setAppinfo(QString("Container field for Joint nodes"));
SoExternProtoDeclare45->addChild(*Sofield51);

Sofield* Sofield52 = new Sofield();
Sofield52->setAccessType(QString("inputOutput"));
Sofield52->setType(QString("SFString"));
Sofield52->setName(QString("name"));
SoExternProtoDeclare45->addChild(*Sofield52);

Sofield* Sofield53 = new Sofield();
Sofield53->setAccessType(QString("inputOutput"));
Sofield53->setType(QString("SFRotation"));
Sofield53->setName(QString("rotation"));
SoExternProtoDeclare45->addChild(*Sofield53);

Sofield* Sofield54 = new Sofield();
Sofield54->setAccessType(QString("inputOutput"));
Sofield54->setType(QString("SFVec3f"));
Sofield54->setName(QString("scale"));
SoExternProtoDeclare45->addChild(*Sofield54);

Sofield* Sofield55 = new Sofield();
Sofield55->setAccessType(QString("inputOutput"));
Sofield55->setType(QString("SFRotation"));
Sofield55->setName(QString("scaleOrientation"));
SoExternProtoDeclare45->addChild(*Sofield55);

Sofield* Sofield56 = new Sofield();
Sofield56->setAccessType(QString("inputOutput"));
Sofield56->setType(QString("MFNode"));
Sofield56->setName(QString("segments"));
Sofield56->setAppinfo(QString("Container field for Segment nodes"));
SoExternProtoDeclare45->addChild(*Sofield56);

Sofield* Sofield57 = new Sofield();
Sofield57->setAccessType(QString("inputOutput"));
Sofield57->setType(QString("MFNode"));
Sofield57->setName(QString("sites"));
Sofield57->setAppinfo(QString("Container field for Site nodes"));
SoExternProtoDeclare45->addChild(*Sofield57);

Sofield* Sofield58 = new Sofield();
Sofield58->setAccessType(QString("inputOutput"));
Sofield58->setType(QString("SFVec3f"));
Sofield58->setName(QString("translation"));
SoExternProtoDeclare45->addChild(*Sofield58);

Sofield* Sofield59 = new Sofield();
Sofield59->setAccessType(QString("inputOutput"));
Sofield59->setType(QString("SFString"));
Sofield59->setName(QString("version"));
Sofield59->setAppinfo(QString("legal values: 1.1 or 2.0"));
SoExternProtoDeclare45->addChild(*Sofield59);

Sofield* Sofield60 = new Sofield();
Sofield60->setAccessType(QString("inputOutput"));
Sofield60->setType(QString("MFNode"));
Sofield60->setName(QString("viewpoints"));
Sofield60->setAppinfo(QString("Container field for Viewpoint nodes"));
SoExternProtoDeclare45->addChild(*Sofield60);

Sofield* Sofield61 = new Sofield();
Sofield61->setAccessType(QString("inputOutput"));
Sofield61->setType(QString("SFNode"));
Sofield61->setName(QString("skinNormal"));
Sofield61->setAppinfo(QString("Hint: HAnim version 2.0"));
SoExternProtoDeclare45->addChild(*Sofield61);

Sofield* Sofield62 = new Sofield();
Sofield62->setAccessType(QString("inputOutput"));
Sofield62->setType(QString("SFString"));
Sofield62->setName(QString("humanoidVersion"));
Sofield62->setAppinfo(QString("Version of the humanoid being modeled. Hint: HAnim version 2.0"));
SoExternProtoDeclare45->addChild(*Sofield62);

Sofield* Sofield63 = new Sofield();
Sofield63->setAccessType(QString("inputOutput"));
Sofield63->setType(QString("MFNode"));
Sofield63->setName(QString("skeleton"));
Sofield63->setAppinfo(QString("HAnim 2.0 field container for body geometry Hint: replaces 1.1 humanoidBody"));
Sofield63->setDocumentation(QString("http://HAnim.org/Specifications/HAnim2001/part1/Humanoid.html"));
SoExternProtoDeclare45->addChild(*Sofield63);

Sofield* Sofield64 = new Sofield();
Sofield64->setAccessType(QString("inputOutput"));
Sofield64->setType(QString("SFNode"));
Sofield64->setName(QString("skinCoord"));
Sofield64->setAppinfo(QString("Hint: HAnim version 2.0"));
SoExternProtoDeclare45->addChild(*Sofield64);

SoNode14->addChild(*SoExternProtoDeclare45);

SoExternProtoDeclare* SoExternProtoDeclare65 = new SoExternProtoDeclare();
SoExternProtoDeclare65->setName(QString("ViewPositionOrientation"));
SoExternProtoDeclare65->setAppinfo(QString("ViewPositionOrientation provides provides console output of local position and orientation as user navigates"));
SoExternProtoDeclare65->setUrl(new QString[]{QString("../../Savage/Tools/Authoring/ViewPositionOrientationPrototype.x3d#ViewPositionOrientation"), QString("../../Savage/Tools/Authoring/ViewPositionOrientationPrototype.x3d#ViewPositionOrientation"), QString("https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationPrototype.x3d#ViewPositionOrientation"), QString("../../Savage/Tools/Authoring/ViewPositionOrientationPrototype.wrl#ViewPositionOrientation"), QString("../../Savage/Tools/Authoring/ViewPositionOrientationPrototype.wrl#ViewPositionOrientation"), QString("https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationPrototype.wrl#ViewPositionOrientation")}, 6);
Sofield* Sofield66 = new Sofield();
Sofield66->setAccessType(QString("inputOutput"));
Sofield66->setType(QString("SFBool"));
Sofield66->setName(QString("enabled"));
Sofield66->setAppinfo(QString("Whether or not ViewPositionOrientation sends output to console"));
SoExternProtoDeclare65->addChild(*Sofield66);

Sofield* Sofield67 = new Sofield();
Sofield67->setAccessType(QString("initializeOnly"));
Sofield67->setType(QString("SFBool"));
Sofield67->setName(QString("traceEnabled"));
Sofield67->setAppinfo(QString("Output internal trace messages for debugging this node, intended for developer use only"));
SoExternProtoDeclare65->addChild(*Sofield67);

Sofield* Sofield68 = new Sofield();
Sofield68->setAccessType(QString("inputOnly"));
Sofield68->setType(QString("SFBool"));
Sofield68->setName(QString("set_traceEnabled"));
Sofield68->setAppinfo(QString("Ability to turn output tracing on/off at runtime"));
SoExternProtoDeclare65->addChild(*Sofield68);

Sofield* Sofield69 = new Sofield();
Sofield69->setAccessType(QString("outputOnly"));
Sofield69->setType(QString("SFVec3f"));
Sofield69->setName(QString("position_changed"));
Sofield69->setAppinfo(QString("Output local position"));
SoExternProtoDeclare65->addChild(*Sofield69);

Sofield* Sofield70 = new Sofield();
Sofield70->setAccessType(QString("outputOnly"));
Sofield70->setType(QString("SFRotation"));
Sofield70->setName(QString("orientation_changed"));
Sofield70->setAppinfo(QString("Output local orientation"));
SoExternProtoDeclare65->addChild(*Sofield70);

Sofield* Sofield71 = new Sofield();
Sofield71->setAccessType(QString("outputOnly"));
Sofield71->setType(QString("MFString"));
Sofield71->setName(QString("outputViewpointString"));
Sofield71->setAppinfo(QString("MFString value of new Viewpoint, suitable for use in string field of a Text node"));
SoExternProtoDeclare65->addChild(*Sofield71);

SoNode14->addChild(*SoExternProtoDeclare65);

SoProtoInstance* SoProtoInstance72 = new SoProtoInstance();
SoProtoInstance72->setDEF(QString("ExampleViewPositionOrientation"));
SoProtoInstance72->setName(QString("ViewPositionOrientation"));
SoField* SoField73 = new SoField();
SoField73->setName(QString("enabled"));
SoField73->setValue(QString("true"));
SoProtoInstance72->addChild(*SoField73);

SoNode14->addChild(*SoProtoInstance72);

SoProtoInstance* SoProtoInstance74 = new SoProtoInstance();
SoProtoInstance74->setDEF(QString("ConsoleOutputViewPositionOrientation"));
SoProtoInstance74->setName(QString("ViewPositionOrientation"));
SoField* SoField75 = new SoField();
SoField75->setName(QString("enabled"));
SoField75->setValue(QString("true"));
SoProtoInstance74->addChild(*SoField75);

SoNode14->addChild(*SoProtoInstance74);

SoBackground* SoBackground76 = new SoBackground();
SoBackground76->setSkyColor(new float[]{0.0,0.4,1.0}, 3);
SoNode14->addChild(*SoBackground76);

SoNavigationInfo* SoNavigationInfo77 = new SoNavigationInfo();
SoNavigationInfo77->setType(new QString[]{QString("EXAMINE")}, 1);
SoNavigationInfo77->setAvatarSize(new float[]{0.15,1.53,0.75}, 3);
SoNavigationInfo77->setSpeed(0.5);
SoNode14->addChild(*SoNavigationInfo77);

SoViewpoint* SoViewpoint78 = new SoViewpoint();
SoViewpoint78->setDescription(QString("Nancy diving default viewpoint"));
SoViewpoint78->setPosition(new float[]{-0.8,0.0,3.1});
SoNode14->addChild(*SoViewpoint78);

SoLOD* SoLOD79 = new SoLOD();
SoGroup* SoGroup80 = new SoGroup();
SoGroup80->setDEF(QString("Viewpoint"));
SoViewpoint* SoViewpoint81 = new SoViewpoint();
SoViewpoint81->setDescription(QString("Nancy front viewpoint"));
SoViewpoint81->setPosition(new float[]{-2.2,-0.7,0.0});
SoViewpoint81->setOrientation(new float[]{-0.354,0.878,-0.321,4.5485});
SoGroup80->addChild(*SoViewpoint81);

SoViewpoint* SoViewpoint82 = new SoViewpoint();
SoViewpoint82->setDescription(QString("Nancy above viewpoint"));
SoViewpoint82->setPosition(new float[]{-3.0,0.5,0.0});
SoViewpoint82->setOrientation(new float[]{-0.126,-0.978,-0.168,1.5385});
SoGroup80->addChild(*SoViewpoint82);

SoViewpoint* SoViewpoint83 = new SoViewpoint();
SoViewpoint83->setDescription(QString("Nancy back viewpoint"));
SoViewpoint83->setPosition(new float[]{0.7,0.1,0.0});
SoViewpoint83->setOrientation(new float[]{0.037,0.999,-0.011,1.572});
SoGroup80->addChild(*SoViewpoint83);

SoViewpoint* SoViewpoint84 = new SoViewpoint();
SoViewpoint84->setDescription(QString("Nancy side viewpoint"));
SoViewpoint84->setPosition(new float[]{-1.2,-0.2,-1.5});
SoViewpoint84->setOrientation(new float[]{0.121,0.987,-0.105,3.2682});
SoGroup80->addChild(*SoViewpoint84);

SoViewpoint* SoViewpoint85 = new SoViewpoint();
SoViewpoint85->setDescription(QString("Nancy viewpoint through her goggles"));
SoViewpoint85->setPosition(new float[]{-1.5,0.1,0.0});
SoViewpoint85->setOrientation(new float[]{-0.357,0.872,0.335,1.5225});
SoGroup80->addChild(*SoViewpoint85);

SoGroup* SoGroup86 = new SoGroup();
SoGroup86->setDEF(QString("HighResolution"));
SoTransform* SoTransform87 = new SoTransform();
SoTransform87->setRotation(new float[]{1.0,0.0,0.0,1.57});
SoTransform* SoTransform88 = new SoTransform();
SoTransform88->setRotation(new float[]{0.0,0.0,1.0,1.57});
SoWorldInfo* SoWorldInfo89 = new SoWorldInfo();
SoWorldInfo89->setTitle(QString("Nancy - an HAnim compliant avatar by 3Name3D"));
SoWorldInfo89->setInfo(new QString[]{QString("Copyright (c) 1997. 3Name3D / Yglesias Wallock Divekar, Inc.")}, 1);
SoTransform88->addChild(*SoWorldInfo89);

SoProtoInstance* SoProtoInstance90 = new SoProtoInstance();
SoProtoInstance90->setDEF(QString("Humanoid"));
SoProtoInstance90->setName(QString("Humanoid"));
SoField* SoField91 = new SoField();
SoField91->setName(QString("humanoidBody"));
SoProtoInstance* SoProtoInstance92 = new SoProtoInstance();
SoProtoInstance92->setDEF(QString("hanim_humanoid_root"));
SoProtoInstance92->setName(QString("Joint"));
SoField* SoField93 = new SoField();
SoField93->setName(QString("center"));
SoField93->setValue(QString("-0.00405 0.855 -0.000113"));
SoProtoInstance92->addChild(*SoField93);

SoField* SoField94 = new SoField();
SoField94->setName(QString("children"));
SoProtoInstance* SoProtoInstance95 = new SoProtoInstance();
SoProtoInstance95->setDEF(QString("hanim_sacroiliac"));
SoProtoInstance95->setName(QString("Joint"));
SoField* SoField96 = new SoField();
SoField96->setName(QString("center"));
SoField96->setValue(QString("0 1.01 -0.0204"));
SoProtoInstance95->addChild(*SoField96);

SoField* SoField97 = new SoField();
SoField97->setName(QString("children"));
SoProtoInstance* SoProtoInstance98 = new SoProtoInstance();
SoProtoInstance98->setDEF(QString("hanim_pelvis"));
SoProtoInstance98->setName(QString("Segment"));
SoField* SoField99 = new SoField();
SoField99->setName(QString("children"));
SoShape* SoShape100 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance101 = new SoVRMLAppearance();
SoMaterial* SoMaterial102 = new SoMaterial();
SoMaterial102->setDEF(QString("Pants_Color"));
SoMaterial102->setDiffuseColor(new float[]{0.0,0.0,0.502});
SoVRMLAppearance101->addChild(*SoMaterial102);

SoShape100->addChild(*SoVRMLAppearance101);

SoIndexedFaceSet* SoIndexedFaceSet103 = new SoIndexedFaceSet();
SoIndexedFaceSet103->setCreaseAngle(1.14);
SoIndexedFaceSet103->setCoordIndex(new int32_t[]{0,1,40,-1,1,2,40,-1,2,3,40,-1,3,4,40,-1,4,5,40,-1,5,4,9,-1,4,3,8,-1,3,2,8,-1,2,1,6,-1,0,7,1,-1,7,6,1,-1,6,8,2,-1,9,4,10,-1,4,8,10,-1,8,6,12,-1,7,0,47,-1,50,5,9,-1,7,47,55,-1,55,13,7,-1,50,9,56,-1,9,10,14,-1,10,11,15,-1,11,12,16,-1,12,13,19,-1,13,55,17,-1,60,17,55,-1,17,19,13,-1,19,16,12,-1,16,15,11,-1,15,18,10,-1,14,56,9,-1,56,14,64,-1,17,60,20,-1,20,19,17,-1,21,64,14,-1,14,22,21,-1,15,16,24,-1,16,19,24,-1,19,20,26,-1,24,23,15,-1,64,21,69,-1,21,22,29,-1,19,26,25,-1,20,63,27,-1,27,26,20,-1,25,24,19,-1,30,29,22,-1,29,28,21,-1,28,69,21,-1,27,34,26,-1,69,28,79,-1,29,30,32,-1,30,23,33,-1,23,24,37,-1,25,26,34,-1,83,27,77,-1,37,33,23,-1,33,32,30,-1,31,79,28,-1,79,31,84,-1,32,33,36,-1,24,25,37,-1,34,27,83,-1,83,38,34,-1,34,37,25,-1,37,36,33,-1,36,35,32,-1,84,31,89,-1,31,35,89,-1,35,36,39,-1,36,37,39,-1,38,83,89,-1,89,39,38,-1,39,89,35,-1,40,41,0,-1,40,42,41,-1,40,43,42,-1,40,44,43,-1,40,45,44,-1,49,44,45,-1,48,43,44,-1,48,42,43,-1,46,41,42,-1,41,47,0,-1,41,46,47,-1,42,48,46,-1,51,44,49,-1,51,48,44,-1,48,52,53,-1,49,45,50,-1,56,49,50,-1,57,51,49,-1,58,53,52,-1,59,54,53,-1,62,55,54,-1,55,62,60,-1,54,59,62,-1,53,58,59,-1,51,61,58,-1,49,56,57,-1,64,57,56,-1,67,59,58,-1,68,62,59,-1,60,63,20,-1,60,62,63,-1,59,67,68,-1,58,61,67,-1,57,64,65,-1,65,66,57,-1,71,63,62,-1,69,65,64,-1,74,66,65,-1,78,68,67,-1,70,71,62,-1,63,72,27,-1,63,71,72,-1,68,78,76,-1,67,75,78,-1,66,74,75,-1,65,73,74,-1,65,69,73,-1,77,27,72,-1,71,82,72,-1,79,73,69,-1,81,75,74,-1,82,71,70,-1,77,72,83,-1,73,79,80,-1,84,80,79,-1,86,75,81,-1,83,72,82,-1,82,88,83,-1,70,87,82,-1,81,85,86,-1,89,80,84,-1,89,85,80,-1,90,86,85,-1,90,87,86,-1,89,83,88,-1,88,90,89,-1,85,89,90,-1,50,45,5,-1,45,40,5,-1,10,8,11,-1,8,12,11,-1,18,22,10,-1,22,14,10,-1,57,66,51,-1,66,61,51,-1,51,58,48,-1,58,52,48,-1,48,53,46,-1,53,54,46,-1,76,70,68,-1,70,62,68,-1,29,32,28,-1,28,32,31,-1,32,35,31,-1,85,81,80,-1,81,73,80,-1,81,74,73,-1,39,37,38,-1,37,34,38,-1,82,87,88,-1,87,90,88,-1,87,78,86,-1,78,75,86,-1,61,66,67,-1,66,75,67,-1,22,18,15,-1,23,30,15,-1,30,22,15,-1,13,12,7,-1,12,6,7,-1,46,54,47,-1,54,55,47,-1,87,76,78,-1,87,70,76,-1}, 712);
SoCoordinate* SoCoordinate104 = new SoCoordinate();
SoCoordinate104->setPoint(new float[]{0.0,1.06,0.0218,0.0561,1.07,0.00726,0.0851,1.07,-0.0115,0.104,1.07,-0.0497,0.0851,1.07,-0.0851,0.032,1.06,-0.0985,0.0873,1.04,0.0078,0.033,1.04,0.0395,0.123,1.05,-0.0405,0.0609,1.02,-0.106,0.0894,0.996,-0.106,0.143,1.0,-0.0309,0.117,1.0,0.0164,0.0314,0.999,0.0502,0.0314,0.96,-0.13,0.156,0.966,-0.0405,0.156,0.968,-0.00724,0.0341,0.954,0.0513,0.115,0.96,-0.0916,0.121,0.926,0.0352,0.0357,0.92,0.0497,0.0314,0.91,-0.146,0.0991,0.91,-0.131,0.169,0.883,-0.0448,0.169,0.885,-0.00939,0.123,0.873,0.0384,0.0926,0.872,0.047,0.0325,0.873,0.0287,0.0293,0.866,-0.142,0.102,0.869,-0.131,0.129,0.868,-0.103,0.0314,0.84,-0.125,0.101,0.844,-0.122,0.133,0.846,-0.0878,0.0653,0.835,0.0132,0.0615,0.824,-0.111,0.0985,0.823,-0.101,0.132,0.826,-0.0448,0.0609,0.821,-0.0158,0.0599,0.812,-0.0545,0.0,1.08,-0.0266,-0.0561,1.07,0.00726,-0.0851,1.07,-0.0115,-0.104,1.07,-0.0497,-0.0851,1.07,-0.0851,-0.032,1.06,-0.0985,-0.0873,1.04,0.0078,-0.033,1.04,0.0395,-0.123,1.05,-0.0405,-0.0609,1.02,-0.106,0.0,1.02,-0.108,-0.0894,0.996,-0.106,-0.143,1.0,-0.0309,-0.144,1.0,-0.011,-0.117,1.0,0.0164,-0.0314,0.999,0.0502,0.0,0.961,-0.123,-0.0314,0.96,-0.13,-0.156,0.966,-0.0405,-0.156,0.968,-0.00724,-0.0341,0.954,0.0513,-0.115,0.96,-0.0916,-0.121,0.926,0.0352,-0.0357,0.92,0.0497,0.0,0.91,-0.127,-0.0314,0.91,-0.146,-0.0991,0.91,-0.131,-0.167,0.911,-0.0448,-0.167,0.912,-0.00671,0.0,0.883,-0.129,-0.123,0.873,0.0384,-0.0926,0.872,0.047,-0.0325,0.873,0.0287,-0.0293,0.866,-0.142,-0.102,0.869,-0.131,-0.129,0.868,-0.103,-0.166,0.863,-0.0148,0.0,0.863,-0.00456,-0.166,0.862,-0.0459,0.0,0.858,-0.1,-0.0314,0.84,-0.125,-0.101,0.844,-0.122,-0.0653,0.835,0.0132,0.0,0.839,-0.0217,0.0,0.835,-0.0867,-0.0615,0.824,-0.111,-0.0985,0.823,-0.101,-0.132,0.826,-0.0448,-0.0609,0.821,-0.0158,0.0,0.831,-0.0626,-0.0599,0.812,-0.0545}, 273);
SoIndexedFaceSet103->setCoord(*SoCoordinate104);

SoShape100->setGeometry(*SoIndexedFaceSet103);

SoField99->addChild(*SoShape100);

SoProtoInstance98->addChild(*SoField99);

SoField* SoField105 = new SoField();
SoField105->setName(QString("name"));
SoField105->setValue(QString("pelvis"));
SoProtoInstance98->addChild(*SoField105);

SoField97->addChild(*SoProtoInstance98);

SoProtoInstance* SoProtoInstance106 = new SoProtoInstance();
SoProtoInstance106->setDEF(QString("hanim_l_hip"));
SoProtoInstance106->setName(QString("Joint"));
SoField* SoField107 = new SoField();
SoField107->setName(QString("center"));
SoField107->setValue(QString("0.122 0.888271 -0.0693267"));
SoProtoInstance106->addChild(*SoField107);

SoField* SoField108 = new SoField();
SoField108->setName(QString("children"));
SoProtoInstance* SoProtoInstance109 = new SoProtoInstance();
SoProtoInstance109->setDEF(QString("hanim_l_thigh"));
SoProtoInstance109->setName(QString("Segment"));
SoField* SoField110 = new SoField();
SoField110->setName(QString("children"));
SoShape* SoShape111 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance112 = new SoVRMLAppearance();
SoMaterial* SoMaterial113 = new SoMaterial();
SoMaterial113->setUSE(QString("Pants_Color"));
SoVRMLAppearance112->addChild(*SoMaterial113);

SoShape111->addChild(*SoVRMLAppearance112);

SoIndexedFaceSet* SoIndexedFaceSet114 = new SoIndexedFaceSet();
SoIndexedFaceSet114->setCreaseAngle(1.32);
SoIndexedFaceSet114->setCoordIndex(new int32_t[]{0,4,5,-1,3,4,0,-1,0,7,1,-1,0,8,7,-1,0,6,8,-1,0,5,6,-1,0,2,3,-1,0,1,2,-1,9,2,1,-1,10,3,2,-1,11,4,3,-1,12,5,4,-1,13,6,5,-1,15,7,8,-1,9,1,7,-1,7,15,9,-1,8,14,15,-1,5,16,13,-1,5,12,16,-1,4,11,12,-1,3,10,11,-1,2,9,10,-1,20,13,16,-1,18,11,10,-1,19,12,11,-1,20,16,12,-1,23,15,14,-1,15,23,24,-1,12,19,20,-1,11,18,19,-1,10,17,18,-1,26,18,17,-1,27,19,18,-1,27,20,19,-1,28,21,20,-1,29,23,22,-1,23,29,30,-1,20,32,28,-1,20,27,32,-1,18,26,27,-1,17,25,26,-1,25,31,30,-1,30,29,26,-1,30,26,25,-1,29,28,27,-1,29,27,26,-1,28,32,27,-1,22,23,14,-1,20,21,13,-1,21,22,13,-1,22,14,13,-1,9,15,24,-1,10,9,17,-1,9,24,17,-1,6,13,8,-1,13,14,8,-1,28,29,21,-1,29,22,21,-1,24,31,17,-1,31,25,17,-1,30,31,23,-1,31,24,23,-1}, 248);
SoCoordinate* SoCoordinate115 = new SoCoordinate();
SoCoordinate115->setPoint(new float[]{0.0969,0.804,-0.0486,0.101,0.876,0.0336,0.17,0.894,-0.00778,0.17,0.891,-0.076,0.124,0.858,-0.129,0.076,0.843,-0.143,0.025,0.819,-0.0889,0.0507,0.847,0.0196,0.00349,0.826,-0.0287,0.0991,0.808,0.0406,0.161,0.814,-0.00187,0.165,0.808,-0.0755,0.122,0.788,-0.126,0.00993,0.762,-0.0937,0.00993,0.762,-0.0309,0.0491,0.777,0.0185,0.0755,0.766,-0.139,0.13,0.597,-0.00618,0.132,0.6,-0.0593,0.108,0.603,-0.105,0.0722,0.601,-0.118,0.0314,0.59,-0.0953,0.0239,0.566,-0.0427,0.047,0.566,0.0051,0.0878,0.581,0.0217,0.114,0.499,-0.0132,0.116,0.488,-0.061,0.103,0.567,-0.0991,0.0362,0.557,-0.0926,0.025,0.486,-0.047,0.0507,0.497,-0.00188,0.0862,0.513,0.018,0.0733,0.579,-0.108}, 99);
SoIndexedFaceSet114->setCoord(*SoCoordinate115);

SoShape111->setGeometry(*SoIndexedFaceSet114);

SoField110->addChild(*SoShape111);

SoProtoInstance109->addChild(*SoField110);

SoField* SoField116 = new SoField();
SoField116->setName(QString("name"));
SoField116->setValue(QString("l_thigh"));
SoProtoInstance109->addChild(*SoField116);

SoField108->addChild(*SoProtoInstance109);

SoProtoInstance* SoProtoInstance117 = new SoProtoInstance();
SoProtoInstance117->setDEF(QString("hanim_l_knee"));
SoProtoInstance117->setName(QString("Joint"));
SoField* SoField118 = new SoField();
SoField118->setName(QString("center"));
SoField118->setValue(QString("0.0738 0.517 -0.0284"));
SoProtoInstance117->addChild(*SoField118);

SoField* SoField119 = new SoField();
SoField119->setName(QString("children"));
SoProtoInstance* SoProtoInstance120 = new SoProtoInstance();
SoProtoInstance120->setDEF(QString("hanim_l_calf"));
SoProtoInstance120->setName(QString("Segment"));
SoField* SoField121 = new SoField();
SoField121->setName(QString("children"));
SoShape* SoShape122 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance123 = new SoVRMLAppearance();
SoMaterial* SoMaterial124 = new SoMaterial();
SoMaterial124->setUSE(QString("Pants_Color"));
SoVRMLAppearance123->addChild(*SoMaterial124);

SoShape122->addChild(*SoVRMLAppearance123);

SoIndexedFaceSet* SoIndexedFaceSet125 = new SoIndexedFaceSet();
SoIndexedFaceSet125->setCreaseAngle(1.57);
SoIndexedFaceSet125->setCoordIndex(new int32_t[]{2,1,0,-1,2,3,1,-1,2,4,3,-1,2,5,4,-1,2,6,5,-1,2,7,6,-1,2,8,7,-1,2,0,8,-1,9,8,0,-1,10,6,7,-1,11,5,6,-1,12,4,5,-1,12,3,4,-1,13,1,3,-1,1,13,14,-1,3,12,13,-1,5,11,12,-1,6,10,11,-1,8,9,15,-1,22,13,12,-1,13,22,14,-1,17,15,9,-1,20,12,11,-1,21,22,12,-1,23,9,14,-1,9,23,16,-1,14,22,23,-1,12,20,21,-1,15,17,18,-1,9,16,17,-1,24,17,16,-1,25,18,17,-1,26,19,18,-1,27,20,19,-1,28,21,20,-1,29,22,21,-1,30,23,22,-1,31,16,23,-1,23,30,31,-1,22,29,30,-1,21,28,29,-1,20,27,28,-1,19,26,27,-1,18,25,26,-1,17,24,25,-1,16,31,24,-1,33,26,25,-1,36,29,28,-1,37,31,30,-1,29,36,30,-1,25,24,33,-1,31,37,24,-1,32,33,24,-1,24,37,32,-1,38,37,30,-1,30,36,38,-1,41,33,32,-1,42,39,34,-1,44,36,35,-1,45,38,36,-1,46,37,38,-1,38,45,46,-1,36,44,45,-1,35,43,44,-1,39,42,47,-1,32,40,41,-1,40,46,45,-1,41,40,45,-1,41,45,44,-1,44,43,42,-1,44,42,41,-1,43,47,42,-1,39,35,28,-1,35,36,28,-1,34,39,27,-1,39,28,27,-1,33,34,26,-1,34,27,26,-1,33,41,34,-1,41,42,34,-1,40,32,46,-1,32,37,46,-1,10,19,11,-1,19,20,11,-1,14,9,1,-1,9,0,1,-1,8,15,7,-1,7,15,10,-1,15,19,10,-1,15,18,19,-1,43,35,47,-1,35,39,47,-1}, 368);
SoCoordinate* SoCoordinate126 = new SoCoordinate();
SoCoordinate126->setPoint(new float[]{0.0883,0.532,-0.00349,0.0609,0.533,-0.00833,0.0814,0.55,-0.0395,0.0529,0.536,-0.0368,0.0577,0.544,-0.0577,0.0722,0.546,-0.0717,0.0975,0.54,-0.0647,0.105,0.539,-0.0438,0.104,0.539,-0.0223,0.0862,0.506,0.0158,0.101,0.51,-0.0798,0.0706,0.51,-0.101,0.0406,0.513,-0.0744,0.0368,0.51,-0.0357,0.0556,0.506,-0.000272,0.117,0.508,-0.0169,0.0878,0.361,-0.0126,0.123,0.363,-0.04,0.123,0.363,-0.0663,0.107,0.367,-0.107,0.0588,0.365,-0.122,0.0228,0.358,-0.0926,0.0239,0.358,-0.0475,0.0497,0.358,-0.0234,0.118,0.311,-0.0411,0.118,0.309,-0.0685,0.105,0.31,-0.108,0.0572,0.308,-0.123,0.0201,0.309,-0.0937,0.0191,0.311,-0.0508,0.0475,0.307,-0.0282,0.0883,0.309,-0.018,0.0959,0.124,-0.04,0.0905,0.12,-0.0647,0.0738,0.117,-0.0814,0.0373,0.121,-0.0636,0.0416,0.124,-0.0416,0.0744,0.13,-0.0212,0.0561,0.13,-0.0245,0.0529,0.121,-0.0873,0.0948,0.0897,-0.0368,0.0916,0.0779,-0.0604,0.0717,0.0854,-0.0765,0.0406,0.0918,-0.0626,0.0384,0.0881,-0.0363,0.054,0.0972,-0.0175,0.0765,0.11,-0.0169,0.0486,0.0999,-0.0835}, 144);
SoIndexedFaceSet125->setCoord(*SoCoordinate126);

SoShape122->setGeometry(*SoIndexedFaceSet125);

SoField121->addChild(*SoShape122);

SoProtoInstance120->addChild(*SoField121);

SoField* SoField127 = new SoField();
SoField127->setName(QString("name"));
SoField127->setValue(QString("l_calf"));
SoProtoInstance120->addChild(*SoField127);

SoField119->addChild(*SoProtoInstance120);

SoProtoInstance* SoProtoInstance128 = new SoProtoInstance();
SoProtoInstance128->setDEF(QString("hanim_l_ankle"));
SoProtoInstance128->setName(QString("Joint"));
SoField* SoField129 = new SoField();
SoField129->setName(QString("center"));
SoField129->setValue(QString("0.0645 0.0719 -0.048"));
SoProtoInstance128->addChild(*SoField129);

SoField* SoField130 = new SoField();
SoField130->setName(QString("children"));
SoProtoInstance* SoProtoInstance131 = new SoProtoInstance();
SoProtoInstance131->setDEF(QString("hanim_l_hindfoot"));
SoProtoInstance131->setName(QString("Segment"));
SoField* SoField132 = new SoField();
SoField132->setName(QString("children"));
SoShape* SoShape133 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance134 = new SoVRMLAppearance();
SoMaterial* SoMaterial135 = new SoMaterial();
SoMaterial135->setDEF(QString("Shoe_Color"));
SoMaterial135->setAmbientIntensity(0.25);
SoMaterial135->setDiffuseColor(new float[]{0.753,1.0,0.243});
SoVRMLAppearance134->addChild(*SoMaterial135);

SoShape133->addChild(*SoVRMLAppearance134);

SoIndexedFaceSet* SoIndexedFaceSet136 = new SoIndexedFaceSet();
SoIndexedFaceSet136->setCreaseAngle(1.57);
SoIndexedFaceSet136->setCoordIndex(new int32_t[]{2,1,0,-1,4,3,1,-1,2,4,1,-1,3,6,5,-1,1,3,5,-1,6,8,7,-1,5,6,7,-1,8,10,9,-1,7,8,9,-1,10,12,11,-1,9,10,11,-1,12,14,13,-1,11,12,13,-1,14,16,15,-1,13,14,15,-1,16,18,17,-1,15,16,17,-1,18,20,19,-1,17,18,19,-1,20,22,21,-1,19,20,21,-1,22,24,23,-1,21,22,23,-1,24,25,0,-1,23,24,0,-1,25,4,2,-1,0,25,2,-1,18,26,20,-1,16,26,18,-1,27,26,16,-1,14,27,16,-1,12,27,14,-1,28,27,12,-1,29,28,12,-1,10,29,12,-1,8,29,10,-1,6,37,8,-1,24,30,25,-1,31,30,24,-1,22,31,24,-1,32,31,22,-1,20,32,22,-1,33,32,20,-1,26,33,20,-1,34,33,26,-1,27,34,26,-1,35,34,27,-1,28,35,27,-1,29,35,28,-1,36,35,29,-1,8,36,29,-1,37,36,8,-1,6,38,37,-1,3,38,6,-1,39,38,3,-1,30,39,25,-1,41,40,30,-1,31,41,30,-1,42,41,31,-1,32,42,31,-1,43,42,32,-1,33,43,32,-1,44,43,33,-1,34,44,33,-1,45,44,34,-1,35,45,34,-1,46,45,35,-1,36,46,35,-1,47,46,36,-1,37,47,36,-1,38,47,37,-1,48,47,38,-1,49,48,38,-1,39,49,38,-1,40,49,39,-1,30,40,39,-1,48,49,50,-1,47,48,50,-1,46,47,50,-1,45,46,50,-1,44,45,50,-1,43,44,50,-1,42,43,50,-1,41,42,50,-1,40,41,50,-1,49,40,50,-1,11,13,15,-1,11,15,17,-1,9,11,17,-1,9,17,19,-1,7,9,19,-1,7,19,21,-1,5,7,21,-1,5,21,23,-1,5,23,0,-1,1,5,0,-1,3,4,39,-1,4,25,39,-1}, 392);
SoCoordinate* SoCoordinate137 = new SoCoordinate();
SoCoordinate137->setPoint(new float[]{0.0529,0.0,-0.0923,0.0863,0.0,-0.0862,0.0727,0.0,-0.0994,0.0863,0.0219,-0.0862,0.0727,0.0219,-0.0994,0.1,0.0,-0.0594,0.1,0.0219,-0.0594,0.113,0.0,0.0645,0.113,0.0219,0.0645,0.112,0.0,0.117,0.112,0.0156,0.117,0.0701,0.0,0.146,0.0701,0.0156,0.146,0.0468,0.0,0.153,0.0468,0.0156,0.153,0.0215,0.0,0.146,0.0215,0.0156,0.146,0.0165,0.0,0.125,0.0165,0.0156,0.125,0.0211,0.0,0.0377,0.0211,0.0219,0.0377,0.0393,0.0,-0.0129,0.0393,0.0219,-0.0129,0.0433,0.0,-0.0534,0.0433,0.0219,-0.0534,0.0529,0.0219,-0.0923,0.0305,0.0253,0.0938,0.0505,0.0253,0.099,0.0854,0.0253,0.0834,0.102,0.0253,0.0707,0.0568,0.0573,-0.0918,0.0492,0.0573,-0.0497,0.0435,0.0573,-0.0225,0.0442,0.0573,0.0235,0.0623,0.0573,0.0366,0.0911,0.0573,0.0159,0.0962,0.0573,-0.0121,0.0911,0.0573,-0.0482,0.0758,0.0573,-0.0899,0.0676,0.0573,-0.0962,0.0578,0.0953,-0.0896,0.0489,0.0953,-0.0757,0.0447,0.0953,-0.0432,0.0451,0.0953,-0.0128,0.0624,0.0953,-0.00466,0.0857,0.0953,-0.0134,0.0953,0.0953,-0.038,0.0843,0.0953,-0.0803,0.0761,0.0953,-0.0889,0.0682,0.0953,-0.0929,0.0675,0.13,-0.0608}, 153);
SoIndexedFaceSet136->setCoord(*SoCoordinate137);

SoShape133->setGeometry(*SoIndexedFaceSet136);

SoField132->addChild(*SoShape133);

SoTransform* SoTransform138 = new SoTransform();
SoTransform138->setScale(new float[]{0.015,0.015,0.015});
SoTransform* SoTransform139 = new SoTransform();
SoTransform139->setTranslation(new float[]{6.0,-0.5,-7.5});
SoTransform139->setRotation(new float[]{0.0,0.0,1.0,1.57});
SoShape* SoShape140 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance141 = new SoVRMLAppearance();
SoMaterial* SoMaterial142 = new SoMaterial();
SoMaterial142->setDiffuseColor(new float[]{0.753,1.0,0.243});
SoVRMLAppearance141->addChild(*SoMaterial142);

SoShape140->addChild(*SoVRMLAppearance141);

SoExtrusion* SoExtrusion143 = new SoExtrusion();
SoExtrusion143->setDEF(QString("Finl"));
SoExtrusion143->setCcw(false);
SoExtrusion143->setCreaseAngle(3.14);
SoExtrusion143->setCrossSection(new float[]{-1.0,0.0,-0.8,2.0,-0.7,3.0,0.0,5.2,0.7,3.0,0.8,2.0,1.0,0.0,0.8,-2.0,0.7,-3.0,0.0,-5.2,-0.7,-3.0,-0.8,-2.0,-1.0,0.0}, 26);
SoExtrusion143->setScale(new float[]{0.25,0.25,0.5,0.75,0.5,1.2,0.5,1.35,0.5,1.35,0.5,1.35,0.5,1.35,0.5,1.35,0.5,1.35}, 18);
SoExtrusion143->setSpine(new float[]{0.0,0.0,1.0,0.0,0.0,5.0,0.0,0.0,8.0,0.0,0.0,12.0,0.0,0.0,15.0,0.5,0.0,18.0,1.5,0.0,25.0,2.5,0.0,30.0,4.0,0.0,34.0}, 27);
SoShape140->setGeometry(*SoExtrusion143);

SoTransform139->addChild(*SoShape140);

SoTransform138->addChild(*SoTransform139);

SoField132->addChild(*SoTransform138);

SoProtoInstance131->addChild(*SoField132);

SoField* SoField144 = new SoField();
SoField144->setName(QString("name"));
SoField144->setValue(QString("l_hindfoot"));
SoProtoInstance131->addChild(*SoField144);

SoField130->addChild(*SoProtoInstance131);

SoProtoInstance128->addChild(*SoField130);

SoField* SoField145 = new SoField();
SoField145->setName(QString("name"));
SoField145->setValue(QString("l_ankle"));
SoProtoInstance128->addChild(*SoField145);

SoField119->addChild(*SoProtoInstance128);

SoProtoInstance117->addChild(*SoField119);

SoField* SoField146 = new SoField();
SoField146->setName(QString("name"));
SoField146->setValue(QString("l_knee"));
SoProtoInstance117->addChild(*SoField146);

SoField108->addChild(*SoProtoInstance117);

SoProtoInstance106->addChild(*SoField108);

SoField* SoField147 = new SoField();
SoField147->setName(QString("name"));
SoField147->setValue(QString("l_hip"));
SoProtoInstance106->addChild(*SoField147);

SoField97->addChild(*SoProtoInstance106);

SoProtoInstance* SoProtoInstance148 = new SoProtoInstance();
SoProtoInstance148->setDEF(QString("hanim_r_hip"));
SoProtoInstance148->setName(QString("Joint"));
SoField* SoField149 = new SoField();
SoField149->setName(QString("center"));
SoField149->setValue(QString("-0.11 0.892362 -0.0732533"));
SoProtoInstance148->addChild(*SoField149);

SoField* SoField150 = new SoField();
SoField150->setName(QString("children"));
SoProtoInstance* SoProtoInstance151 = new SoProtoInstance();
SoProtoInstance151->setDEF(QString("hanim_r_thigh"));
SoProtoInstance151->setName(QString("Segment"));
SoField* SoField152 = new SoField();
SoField152->setName(QString("children"));
SoShape* SoShape153 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance154 = new SoVRMLAppearance();
SoMaterial* SoMaterial155 = new SoMaterial();
SoMaterial155->setUSE(QString("Pants_Color"));
SoVRMLAppearance154->addChild(*SoMaterial155);

SoShape153->addChild(*SoVRMLAppearance154);

SoIndexedFaceSet* SoIndexedFaceSet156 = new SoIndexedFaceSet();
SoIndexedFaceSet156->setCreaseAngle(1.61);
SoIndexedFaceSet156->setCoordIndex(new int32_t[]{5,4,0,-1,0,4,3,-1,1,7,0,-1,7,8,0,-1,8,6,0,-1,6,5,0,-1,3,2,0,-1,2,1,0,-1,1,2,9,-1,2,3,10,-1,3,4,11,-1,4,5,12,-1,5,6,13,-1,8,7,15,-1,7,1,9,-1,9,15,7,-1,15,14,8,-1,13,16,5,-1,16,12,5,-1,12,11,4,-1,11,10,3,-1,10,9,2,-1,12,16,20,-1,13,14,22,-1,14,15,23,-1,24,23,15,-1,23,22,14,-1,20,19,12,-1,17,18,26,-1,18,19,27,-1,19,20,27,-1,20,21,28,-1,22,23,29,-1,30,29,23,-1,27,26,18,-1,26,25,17,-1,30,31,25,-1,25,26,29,-1,25,29,30,-1,26,27,28,-1,26,28,29,-1,27,20,28,-1,24,15,9,-1,22,21,13,-1,29,28,22,-1,28,21,22,-1,24,31,23,-1,31,30,23,-1,25,31,17,-1,31,24,17,-1,17,24,10,-1,24,9,10,-1,18,10,11,-1,18,17,10,-1,18,12,19,-1,18,11,12,-1,21,20,13,-1,20,16,13,-1,14,13,8,-1,13,6,8,-1}, 240);
SoCoordinate* SoCoordinate157 = new SoCoordinate();
SoCoordinate157->setPoint(new float[]{-0.0969,0.804,-0.0486,-0.101,0.876,0.0336,-0.17,0.894,-0.00778,-0.17,0.891,-0.076,-0.124,0.858,-0.129,-0.076,0.843,-0.143,-0.025,0.819,-0.0889,-0.0507,0.847,0.0196,-0.00349,0.826,-0.0287,-0.0991,0.808,0.0406,-0.161,0.814,-0.00187,-0.165,0.808,-0.0755,-0.122,0.788,-0.126,-0.00993,0.762,-0.0937,-0.00993,0.762,-0.0309,-0.0491,0.777,0.0185,-0.0755,0.766,-0.139,-0.13,0.597,-0.00618,-0.132,0.6,-0.0593,-0.108,0.603,-0.105,-0.0722,0.601,-0.118,-0.0314,0.59,-0.0953,-0.0239,0.566,-0.0427,-0.047,0.566,0.0051,-0.0878,0.581,0.0217,-0.114,0.499,-0.0132,-0.116,0.488,-0.061,-0.103,0.567,-0.0991,-0.0362,0.557,-0.0926,-0.025,0.486,-0.047,-0.0507,0.497,-0.00188,-0.0862,0.513,0.018}, 96);
SoIndexedFaceSet156->setCoord(*SoCoordinate157);

SoShape153->setGeometry(*SoIndexedFaceSet156);

SoField152->addChild(*SoShape153);

SoProtoInstance151->addChild(*SoField152);

SoField* SoField158 = new SoField();
SoField158->setName(QString("name"));
SoField158->setValue(QString("r_thigh"));
SoProtoInstance151->addChild(*SoField158);

SoField150->addChild(*SoProtoInstance151);

SoProtoInstance* SoProtoInstance159 = new SoProtoInstance();
SoProtoInstance159->setDEF(QString("hanim_r_knee"));
SoProtoInstance159->setName(QString("Joint"));
SoField* SoField160 = new SoField();
SoField160->setName(QString("center"));
SoField160->setValue(QString("-0.0699 0.51 -0.0166"));
SoProtoInstance159->addChild(*SoField160);

SoField* SoField161 = new SoField();
SoField161->setName(QString("children"));
SoProtoInstance* SoProtoInstance162 = new SoProtoInstance();
SoProtoInstance162->setDEF(QString("hanim_r_calf"));
SoProtoInstance162->setName(QString("Segment"));
SoField* SoField163 = new SoField();
SoField163->setName(QString("children"));
SoShape* SoShape164 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance165 = new SoVRMLAppearance();
SoMaterial* SoMaterial166 = new SoMaterial();
SoMaterial166->setUSE(QString("Pants_Color"));
SoVRMLAppearance165->addChild(*SoMaterial166);

SoShape164->addChild(*SoVRMLAppearance165);

SoIndexedFaceSet* SoIndexedFaceSet167 = new SoIndexedFaceSet();
SoIndexedFaceSet167->setCreaseAngle(1.57);
SoIndexedFaceSet167->setCoordIndex(new int32_t[]{14,25,18,-1,25,32,18,-1,32,27,18,-1,27,22,18,-1,22,10,18,-1,10,6,18,-1,6,8,18,-1,8,14,18,-1,14,8,17,-1,6,10,9,-1,10,22,24,-1,22,27,39,-1,27,32,39,-1,32,25,42,-1,25,14,30,-1,17,30,14,-1,30,42,25,-1,42,39,32,-1,39,24,22,-1,24,9,10,-1,4,17,8,-1,39,42,43,-1,30,43,42,-1,17,4,1,-1,24,39,26,-1,39,43,44,-1,30,17,34,-1,16,34,17,-1,34,43,30,-1,44,26,39,-1,0,1,4,-1,1,16,17,-1,16,1,3,-1,1,0,2,-1,0,5,7,-1,5,26,28,-1,26,44,45,-1,44,43,46,-1,43,34,36,-1,34,16,15,-1,15,36,34,-1,36,46,43,-1,46,45,44,-1,45,28,26,-1,28,7,5,-1,7,2,0,-1,2,3,1,-1,3,15,16,-1,45,46,37,-1,36,15,20,-1,36,37,46,-1,13,2,7,-1,3,20,15,-1,3,2,13,-1,36,20,29,-1,29,37,36,-1,13,21,23,-1,21,33,23,-1,41,37,40,-1,37,29,31,-1,29,20,19,-1,19,31,29,-1,31,40,37,-1,40,38,41,-1,35,23,33,-1,23,12,13,-1,12,11,13,-1,31,19,11,-1,40,31,11,-1,40,11,12,-1,12,23,38,-1,12,38,40,-1,23,35,38,-1,28,21,7,-1,21,13,7,-1,45,33,28,-1,33,21,28,-1,33,45,41,-1,45,37,41,-1,33,41,35,-1,41,38,35,-1,20,3,47,-1,11,19,47,-1,19,20,47,-1,13,47,3,-1,13,11,47,-1,4,8,6,-1,26,5,24,-1,5,9,24,-1,6,9,4,-1,9,0,4,-1,9,5,0,-1}, 368);
SoCoordinate* SoCoordinate168 = new SoCoordinate();
SoCoordinate168->setPoint(new float[]{-0.123,0.363,-0.0663,-0.123,0.363,-0.04,-0.118,0.309,-0.0685,-0.118,0.311,-0.0411,-0.117,0.508,-0.0169,-0.107,0.367,-0.107,-0.105,0.539,-0.0438,-0.105,0.31,-0.108,-0.104,0.539,-0.0223,-0.101,0.51,-0.0798,-0.0975,0.54,-0.0647,-0.0948,0.0897,-0.0368,-0.0916,0.0779,-0.0604,-0.0905,0.12,-0.0647,-0.0883,0.532,-0.00349,-0.0883,0.309,-0.018,-0.0878,0.361,-0.0126,-0.0862,0.506,0.0158,-0.0814,0.55,-0.0395,-0.0765,0.11,-0.0169,-0.0744,0.13,-0.0212,-0.0738,0.117,-0.0814,-0.0722,0.546,-0.0717,-0.0717,0.0854,-0.0765,-0.0706,0.51,-0.101,-0.0609,0.533,-0.00833,-0.0588,0.365,-0.122,-0.0577,0.544,-0.0577,-0.0572,0.308,-0.123,-0.0561,0.13,-0.0245,-0.0556,0.506,-0.000272,-0.054,0.0972,-0.0175,-0.0529,0.536,-0.0368,-0.0529,0.121,-0.0873,-0.0497,0.358,-0.0234,-0.0486,0.0999,-0.0835,-0.0475,0.307,-0.0282,-0.0416,0.124,-0.0416,-0.0406,0.0918,-0.0626,-0.0406,0.513,-0.0744,-0.0384,0.0881,-0.0363,-0.0373,0.121,-0.0636,-0.0368,0.51,-0.0357,-0.0239,0.358,-0.0475,-0.0228,0.358,-0.0926,-0.0201,0.309,-0.0937,-0.0191,0.311,-0.0508,-0.0985,0.125,-0.0375}, 144);
SoIndexedFaceSet167->setCoord(*SoCoordinate168);

SoShape164->setGeometry(*SoIndexedFaceSet167);

SoField163->addChild(*SoShape164);

SoProtoInstance162->addChild(*SoField163);

SoField* SoField169 = new SoField();
SoField169->setName(QString("name"));
SoField169->setValue(QString("r_calf"));
SoProtoInstance162->addChild(*SoField169);

SoField161->addChild(*SoProtoInstance162);

SoProtoInstance* SoProtoInstance170 = new SoProtoInstance();
SoProtoInstance170->setDEF(QString("hanim_r_ankle"));
SoProtoInstance170->setName(QString("Joint"));
SoField* SoField171 = new SoField();
SoField171->setName(QString("center"));
SoField171->setValue(QString("-0.064 0.0753 -0.0412"));
SoProtoInstance170->addChild(*SoField171);

SoField* SoField172 = new SoField();
SoField172->setName(QString("children"));
SoProtoInstance* SoProtoInstance173 = new SoProtoInstance();
SoProtoInstance173->setDEF(QString("hanim_r_hindfoot"));
SoProtoInstance173->setName(QString("Segment"));
SoField* SoField174 = new SoField();
SoField174->setName(QString("children"));
SoShape* SoShape175 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance176 = new SoVRMLAppearance();
SoMaterial* SoMaterial177 = new SoMaterial();
SoMaterial177->setUSE(QString("Shoe_Color"));
SoVRMLAppearance176->addChild(*SoMaterial177);

SoShape175->addChild(*SoVRMLAppearance176);

SoIndexedFaceSet* SoIndexedFaceSet178 = new SoIndexedFaceSet();
SoIndexedFaceSet178->setCreaseAngle(1.57);
SoIndexedFaceSet178->setCoordIndex(new int32_t[]{6,50,0,-1,50,8,7,-1,50,7,0,-1,1,9,8,-1,1,8,50,-1,49,10,9,-1,49,9,1,-1,46,11,10,-1,46,10,49,-1,2,12,11,-1,2,11,46,-1,3,13,12,-1,3,12,2,-1,4,14,13,-1,4,13,3,-1,45,14,4,-1,47,15,45,-1,19,15,47,-1,48,18,19,-1,5,16,18,-1,5,18,48,-1,6,17,16,-1,6,16,5,-1,0,7,17,-1,0,17,6,-1,14,20,21,-1,14,21,13,-1,13,21,12,-1,12,21,22,-1,12,22,11,-1,11,22,10,-1,17,23,16,-1,16,23,24,-1,16,24,18,-1,18,24,25,-1,18,25,19,-1,19,25,26,-1,19,26,15,-1,15,26,20,-1,20,26,27,-1,20,27,21,-1,21,27,28,-1,21,28,22,-1,22,28,29,-1,10,30,9,-1,9,30,31,-1,9,31,8,-1,8,31,32,-1,17,32,23,-1,23,33,34,-1,23,34,35,-1,23,35,24,-1,24,35,36,-1,24,36,25,-1,25,36,37,-1,25,37,26,-1,26,37,38,-1,26,38,27,-1,27,38,39,-1,27,39,28,-1,28,39,40,-1,28,40,29,-1,29,40,41,-1,29,41,30,-1,30,41,42,-1,30,42,31,-1,31,42,43,-1,31,43,32,-1,32,43,33,-1,32,33,23,-1,44,43,42,-1,44,42,41,-1,44,41,40,-1,44,40,39,-1,44,39,38,-1,44,38,37,-1,44,37,36,-1,44,36,35,-1,44,35,34,-1,44,34,33,-1,44,33,43,-1,4,3,2,-1,45,4,2,-1,45,2,46,-1,47,45,46,-1,48,46,49,-1,5,48,49,-1,5,49,1,-1,6,5,1,-1,6,1,50,-1,30,10,29,-1,10,22,29,-1,17,7,32,-1,7,8,32,-1,19,47,48,-1,47,46,48,-1,20,14,15,-1,14,45,15,-1}, 392);
SoCoordinate* SoCoordinate179 = new SoCoordinate();
SoCoordinate179->setPoint(new float[]{-0.0727,0.0,-0.0994,-0.1,0.0,-0.0594,-0.0701,0.0,0.146,-0.0468,0.0,0.153,-0.0215,0.0,0.146,-0.0433,0.0,-0.0534,-0.0529,0.0,-0.0923,-0.0727,0.0219,-0.0994,-0.0863,0.0219,-0.0862,-0.1,0.0219,-0.0594,-0.108,0.0219,-0.00479,-0.112,0.0156,0.117,-0.0701,0.0156,0.146,-0.0468,0.0156,0.153,-0.0215,0.0156,0.146,-0.0165,0.017,0.0777,-0.0433,0.0219,-0.0534,-0.0529,0.0219,-0.0923,-0.0445,0.0273,-0.0189,-0.0265,0.0253,0.0549,-0.0305,0.0253,0.0938,-0.069,0.0253,0.0938,-0.102,0.0253,0.0707,-0.0568,0.0573,-0.0918,-0.0492,0.0573,-0.0497,-0.0424,0.0573,-0.00142,-0.0478,0.0573,0.0341,-0.0623,0.0573,0.0366,-0.0864,0.0573,0.0245,-0.0962,0.0573,-0.0121,-0.0845,0.0573,-0.0764,-0.0758,0.0573,-0.0899,-0.0676,0.0573,-0.0962,-0.0578,0.0953,-0.0896,-0.0489,0.0953,-0.0757,-0.0459,0.0953,-0.0615,-0.0435,0.0953,-0.0292,-0.0485,0.0953,-0.00582,-0.0624,0.0953,-0.00466,-0.0857,0.0953,-0.0134,-0.0953,0.0953,-0.038,-0.0843,0.0953,-0.0803,-0.0761,0.0953,-0.0889,-0.0682,0.0953,-0.0929,-0.0675,0.13,-0.0608,-0.0165,0.0,0.125,-0.112,0.0,0.117,-0.0165,0.0,0.0777,-0.0393,0.0,-0.0129,-0.108,0.0,-0.00479,-0.0863,0.0,-0.0862}, 153);
SoIndexedFaceSet178->setCoord(*SoCoordinate179);

SoShape175->setGeometry(*SoIndexedFaceSet178);

SoField174->addChild(*SoShape175);

SoTransform* SoTransform180 = new SoTransform();
SoTransform180->setScale(new float[]{0.015,0.015,0.015});
SoTransform* SoTransform181 = new SoTransform();
SoTransform181->setTranslation(new float[]{-5.0,-0.5,-7.5});
SoTransform181->setRotation(new float[]{0.0,0.0,1.0,1.57});
SoShape* SoShape182 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance183 = new SoVRMLAppearance();
SoMaterial* SoMaterial184 = new SoMaterial();
SoMaterial184->setDiffuseColor(new float[]{0.753,1.0,0.243});
SoVRMLAppearance183->addChild(*SoMaterial184);

SoShape182->addChild(*SoVRMLAppearance183);

SoExtrusion* SoExtrusion185 = new SoExtrusion();
SoExtrusion185->setDEF(QString("Finr"));
SoExtrusion185->setCcw(false);
SoExtrusion185->setCreaseAngle(3.14);
SoExtrusion185->setCrossSection(new float[]{-1.0,0.0,-0.8,2.0,-0.7,3.0,0.0,5.2,0.7,3.0,0.8,2.0,1.0,0.0,0.8,-2.0,0.7,-3.0,0.0,-5.2,-0.7,-3.0,-0.8,-2.0,-1.0,0.0}, 26);
SoExtrusion185->setScale(new float[]{0.25,0.25,0.5,0.75,0.5,1.2,0.5,1.35,0.5,1.35,0.5,1.35,0.5,1.35,0.5,1.35,0.5,1.35}, 18);
SoExtrusion185->setSpine(new float[]{0.0,0.0,1.0,0.0,0.0,5.0,0.0,0.0,8.0,0.0,0.0,12.0,0.0,0.0,15.0,0.5,0.0,18.0,1.5,0.0,25.0,2.5,0.0,30.0,4.0,0.0,34.0}, 27);
SoShape182->setGeometry(*SoExtrusion185);

SoTransform181->addChild(*SoShape182);

SoTransform180->addChild(*SoTransform181);

SoField174->addChild(*SoTransform180);

SoProtoInstance173->addChild(*SoField174);

SoField* SoField186 = new SoField();
SoField186->setName(QString("name"));
SoField186->setValue(QString("r_hindfoot"));
SoProtoInstance173->addChild(*SoField186);

SoField172->addChild(*SoProtoInstance173);

SoProtoInstance170->addChild(*SoField172);

SoField* SoField187 = new SoField();
SoField187->setName(QString("name"));
SoField187->setValue(QString("r_ankle"));
SoProtoInstance170->addChild(*SoField187);

SoField161->addChild(*SoProtoInstance170);

SoProtoInstance159->addChild(*SoField161);

SoField* SoField188 = new SoField();
SoField188->setName(QString("name"));
SoField188->setValue(QString("r_knee"));
SoProtoInstance159->addChild(*SoField188);

SoField150->addChild(*SoProtoInstance159);

SoProtoInstance148->addChild(*SoField150);

SoField* SoField189 = new SoField();
SoField189->setName(QString("name"));
SoField189->setValue(QString("r_hip"));
SoProtoInstance148->addChild(*SoField189);

SoField97->addChild(*SoProtoInstance148);

SoProtoInstance95->addChild(*SoField97);

SoField* SoField190 = new SoField();
SoField190->setName(QString("name"));
SoField190->setValue(QString("sacroiliac"));
SoProtoInstance95->addChild(*SoField190);

SoField94->addChild(*SoProtoInstance95);

SoProximitySensor* SoProximitySensor191 = new SoProximitySensor();
SoProximitySensor191->setDEF(QString("FinTriggerProximitySensor"));
SoProximitySensor191->setSize(new float[]{5.0,5.0,5.0});
SoField94->addChild(*SoProximitySensor191);

SoTimeSensor* SoTimeSensor192 = new SoTimeSensor();
SoTimeSensor192->setDEF(QString("FinClock"));
SoTimeSensor192->setCycleInterval(7);
SoTimeSensor192->setLoop(true);
SoField94->addChild(*SoTimeSensor192);

SoGroup* SoGroup193 = new SoGroup();
SoScript* SoScript194 = new SoScript();
SoScript194->setDEF(QString("FinScript"));
Sofield* Sofield195 = new Sofield();
Sofield195->setAccessType(QString("outputOnly"));
Sofield195->setType(QString("MFVec3f"));
Sofield195->setName(QString("keyValueR"));
SoScript194->addChild(*Sofield195);

Sofield* Sofield196 = new Sofield();
Sofield196->setAccessType(QString("outputOnly"));
Sofield196->setType(QString("MFVec3f"));
Sofield196->setName(QString("keyValueL"));
SoScript194->addChild(*Sofield196);

Sofield* Sofield197 = new Sofield();
Sofield197->setAccessType(QString("inputOnly"));
Sofield197->setType(QString("SFFloat"));
Sofield197->setName(QString("set_fraction"));
SoScript194->addChild(*Sofield197);

Sofield* Sofield198 = new Sofield();
Sofield198->setAccessType(QString("inputOnly"));
Sofield198->setType(QString("SFBool"));
Sofield198->setName(QString("finL"));
SoScript194->addChild(*Sofield198);

Sofield* Sofield199 = new Sofield();
Sofield199->setAccessType(QString("inputOnly"));
Sofield199->setType(QString("SFBool"));
Sofield199->setName(QString("finR"));
SoScript194->addChild(*Sofield199);

Sofield* Sofield200 = new Sofield();
Sofield200->setAccessType(QString("initializeOnly"));
Sofield200->setType(QString("SFBool"));
Sofield200->setName(QString("traceEnabled"));
Sofield200->setValue(QString("true"));
SoScript194->addChild(*Sofield200);


//SoScript194->setSourceCode(QString("ecmascript:")+
//_T("var finWarpL;")+
//_T("var finWarpR;")+
//_T("function initialize ()")+
//_T("{")+
//_T("	finWarpL = 0;")+
//_T("	finWarpR = 0;")+
//_T("}")+
//_T("function finL(value, timeStamp)")+
//_T("{")+
//_T("	if (value == 0)")+
//_T("	{")+
//_T("		finWarpL = 0;")+
//_T("	}")+
//_T("	else")+
//_T("	{")+
//_T("		finWarpL = 1;")+
//_T("	}")+
//_T("	//print ('finWarpL' + finWarpL);")+
//_T("}			 ")+
//_T("function finR(value, timeStamp)")+
//_T("{")+
//_T("	if (value == 0)")+
//_T("	{")+
//_T("		finWarpR = 0;")+
//_T("	}")+
//_T("	else")+
//_T("	{")+
//_T("		finWarpR = 1;")+
//_T("	}")+
//_T("	//print ('finWarpR' + finWarpR);")+
//_T("}")+
//_T("function finMove(fraction, timeStamp)")+
//_T(" {  	")+
//_T("	if (finWarpL == 1)")+
//_T("	{")+
//_T("		// level 3 (warp outside) Left					")+
//_T("		kVL7 = new SFVec3f(1.25, 0, 25);  ")+
//_T("     		kVL8 = new SFVec3f(2.5, 0, 30);")+
//_T("      		kVL9 = new SFVec3f(3.25, 0, 34);			")+
//_T("	}	")+
//_T("	else ")+
//_T("	{		")+
//_T("		// level -2 (warp inside) Left					")+
//_T("		kVL7 = new SFVec3f(-1.25, 0, 25);  ")+
//_T("     		kVL8 = new SFVec3f(-2.5, 0, 30);")+
//_T("      		kVL9 = new SFVec3f(-3.25, 0, 34);	")+
//_T("	}")+
//_T("	if (finWarpR == 0)")+
//_T("	{		")+
//_T("		// level  1 (warp outside ) Right    			")+
//_T("		kVR7 = new SFVec3f(1.25, 0, 25);  ")+
//_T("     		kVR8 = new SFVec3f(2.5, 0, 30);")+
//_T("      		kVR9 = new SFVec3f(3.25, 0, 34);	  	")+
//_T("	")+
//_T("	}	")+
//_T("	else ")+
//_T("	{		")+
//_T("		// level  -2 ( warp inside) Right      				")+
//_T("		kVR7 = new SFVec3f(-1.25, 0, 25);  ")+
//_T("     		kVR8 = new SFVec3f(-2.5, 0, 30);")+
//_T("      		kVR9 = new SFVec3f(-3.25, 0, 34);")+
//_T("	}")+
//_T("	// Left Fin (fixed spine)")+
//_T("	kVL1 = new SFVec3f(0, 0, 1);  ")+
//_T("     	kVL2 = new SFVec3f(0, 0, 5);")+
//_T("      	kVL3 = new SFVec3f(0, 0, 8);")+
//_T("	kVL4 = new SFVec3f(0, 0, 12); ")+
//_T("	kVL5 = new SFVec3f(0, 0, 15); 	")+
//_T("	kVL6 = new SFVec3f(0, 0, 18);			")+
//_T("      	keyValueL = new MFVec3f(kVL1, kVL2, kVL3, kVL4, kVL5, kVL6, kVL7, kVL8, kVL9);  ")+
//_T("	")+
//_T("	// Right Fin (fixed spine)")+
//_T("	kVR1 = new SFVec3f(0, 0, 1);  ")+
//_T("     	kVR2 = new SFVec3f(0, 0, 5);")+
//_T("      	kVR3 = new SFVec3f(0, 0, 8);")+
//_T("	kVR4 = new SFVec3f(0, 0, 12);  	")+
//_T("	kVR5 = new SFVec3f(0, 0, 15);")+
//_T("	kVR6 = new SFVec3f(0, 0, 18);			")+
//_T("      	keyValueR = new MFVec3f(kVR1, kVR2, kVR3, kVR4, kVR5, kVR6, kVR7, kVR8, kVR9);  ")+
//_T("      	")+
//_T("	//tracePrint ('[keyValueL = ]' + keyValueL);     ")+
//_T("	//tracePrint ('[keyValueR = ]' + keyValueR);     ")+
//_T("			")+
//_T("}")+
//_T("function set_fraction (value, timeStamp)")+
//_T("{")+
//_T("	finMove(value);")+
//_T("	//tracePrint('time fraction =' + value);")+
//_T("	")+
//_T("}")+
//_T("function tracePrint (outputString)")+
//_T("{")+
//_T("	if (traceEnabled) Browser.println ('[Fin Move]' + outputString);")+
//_T("}"));
SoGroup193->addChild(*SoScript194);

SoField94->addChild(*SoGroup193);

SoProtoInstance* SoProtoInstance201 = new SoProtoInstance();
SoProtoInstance201->setDEF(QString("hanim_vl1"));
SoProtoInstance201->setName(QString("Joint"));
SoField* SoField202 = new SoField();
SoField202->setName(QString("center"));
SoField202->setValue(QString("-0.00405 1.07 -0.0275"));
SoProtoInstance201->addChild(*SoField202);

SoField* SoField203 = new SoField();
SoField203->setName(QString("children"));
SoProtoInstance* SoProtoInstance204 = new SoProtoInstance();
SoProtoInstance204->setDEF(QString("hanim_c7"));
SoProtoInstance204->setName(QString("Segment"));
SoField* SoField205 = new SoField();
SoField205->setName(QString("children"));
SoTransform* SoTransform206 = new SoTransform();
SoTransform206->setTranslation(new float[]{0.0,-0.09,0.0});
SoTransform206->setScale(new float[]{1.05,1.05,1.05});
SoShape* SoShape207 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance208 = new SoVRMLAppearance();
SoMaterial* SoMaterial209 = new SoMaterial();
SoMaterial209->setDEF(QString("WetShirtColor"));
SoMaterial209->setAmbientIntensity(0.25);
SoMaterial209->setDiffuseColor(new float[]{0.0,0.0,0.502});
SoVRMLAppearance208->addChild(*SoMaterial209);

SoImageTexture* SoImageTexture210 = new SoImageTexture();
SoImageTexture210->setDEF(QString("small_logo_Tex"));
SoImageTexture210->setUrl(new QString[]{QString("small_logo.gif"), QString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/small_logo.gif")}, 2);
SoVRMLAppearance208->addChild(*SoImageTexture210);

SoShape207->addChild(*SoVRMLAppearance208);

SoIndexedFaceSet* SoIndexedFaceSet211 = new SoIndexedFaceSet();
SoIndexedFaceSet211->setCreaseAngle(1.59);
SoIndexedFaceSet211->setCoordIndex(new int32_t[]{0,1,2,-1,3,0,2,-1,4,5,6,-1,6,7,4,-1,8,7,6,-1,6,9,8,-1,9,10,8,-1,6,5,11,-1,9,6,12,-1,11,12,6,-1,12,10,9,-1,7,8,13,-1,13,4,7,-1,14,15,16,-1,15,17,13,-1,4,13,17,-1,17,15,18,-1,13,19,15,-1,19,13,8,-1,19,16,15,-1,16,19,8,-1,17,20,4,-1,5,4,20,-1,18,21,17,-1,20,17,21,-1,16,22,14,-1,22,16,23,-1,8,23,16,-1,23,8,10,-1,24,25,26,-1,26,27,24,-1,25,28,26,-1,28,29,30,-1,30,26,28,-1,31,32,33,-1,32,25,33,-1,25,24,34,-1,33,25,34,-1,24,35,34,-1,27,35,24,-1,33,36,31,-1,27,26,37,-1,37,26,30,-1,38,37,30,-1,33,34,39,-1,39,34,35,-1,39,35,40,-1,41,38,30,-1,35,27,42,-1,37,42,27,-1,40,35,42,-1,42,37,43,-1,37,38,44,-1,44,43,37,-1,36,45,46,-1,36,33,45,-1,40,42,47,-1,43,47,42,-1,47,48,40,-1,39,40,48,-1,47,43,49,-1,43,44,49,-1,50,49,44,-1,51,46,52,-1,46,45,52,-1,52,45,53,-1,33,53,45,-1,33,39,53,-1,49,54,47,-1,48,47,54,-1,55,56,52,-1,57,52,53,-1,57,55,52,-1,58,57,53,-1,59,58,53,-1,53,39,59,-1,39,48,59,-1,59,48,54,-1,58,59,60,-1,54,49,61,-1,59,54,61,-1,60,59,61,-1,49,50,62,-1,63,62,50,-1,62,61,49,-1,64,63,50,-1,63,64,65,-1,65,62,63,-1,66,60,61,-1,62,65,67,-1,68,67,65,-1,64,69,70,-1,64,70,65,-1,70,68,65,-1,69,71,72,-1,72,70,69,-1,73,74,75,-1,66,76,60,-1,67,77,62,-1,62,77,61,-1,77,66,61,-1,66,77,78,-1,77,67,79,-1,79,67,68,-1,79,78,77,-1,68,70,80,-1,70,72,80,-1,80,79,68,-1,74,73,81,-1,73,76,82,-1,82,81,73,-1,76,66,83,-1,78,83,66,-1,83,82,76,-1,78,79,84,-1,79,80,84,-1,84,85,78,-1,86,84,80,-1,81,82,87,-1,87,88,81,-1,82,83,89,-1,83,78,89,-1,89,87,82,-1,78,85,89,-1,90,91,92,-1,92,93,90,-1,90,94,91,-1,95,96,94,-1,94,90,95,-1,29,96,97,-1,96,95,97,-1,97,30,29,-1,30,97,41,-1,41,97,95,-1,98,99,100,-1,98,91,99,-1,101,92,91,-1,98,101,91,-1,101,102,92,-1,92,102,93,-1,36,103,31,-1,51,103,36,46,-1,103,100,31,-1,100,103,98,-1,104,90,93,-1,90,104,95,-1,95,105,41,-1,104,105,95,-1,106,101,98,-1,102,101,106,-1,107,93,102,-1,93,107,104,-1,108,104,107,-1,107,109,108,-1,110,105,104,-1,104,108,110,-1,109,107,111,-1,107,102,111,-1,111,102,106,-1,111,112,109,-1,106,112,111,-1,113,110,108,-1,110,113,114,-1,51,52,115,-1,116,115,117,-1,117,106,116,-1,118,109,112,-1,119,108,109,-1,108,119,113,-1,109,118,119,-1,120,113,119,-1,119,121,120,-1,52,56,122,-1,122,115,52,-1,115,122,123,-1,117,124,125,-1,106,117,125,-1,118,112,106,125,-1,119,118,125,-1,121,119,125,-1,126,124,123,-1,127,114,113,-1,114,127,128,-1,113,120,127,-1,114,128,129,-1,130,126,123,-1,122,130,123,-1,131,120,121,-1,131,127,120,-1,132,129,128,-1,128,127,132,-1,74,81,133,-1,81,134,133,-1,121,135,131,-1,136,132,127,-1,132,136,137,-1,138,71,129,-1,138,129,132,-1,137,138,132,-1,139,72,71,-1,72,139,80,-1,71,138,139,-1,140,135,121,-1,140,121,125,-1,141,127,131,-1,127,141,136,-1,131,135,141,-1,142,141,135,-1,143,136,141,-1,136,143,137,-1,141,142,143,-1,144,138,137,-1,144,139,138,-1,143,144,137,-1,145,146,134,-1,145,140,146,-1,134,81,145,-1,147,135,140,-1,135,147,142,-1,140,145,147,-1,148,80,139,-1,80,148,86,-1,139,144,148,-1,149,143,142,-1,149,144,143,-1,142,150,149,-1,151,148,144,-1,144,149,151,-1,152,145,81,-1,81,88,152,-1,153,147,145,-1,153,142,147,-1,145,152,153,-1,153,150,142,-1,154,86,148,-1,148,151,154,-1,155,28,25,-1,155,29,28,-1,155,25,32,-1,155,32,31,-1,155,31,100,-1,155,100,99,-1,155,99,91,-1,155,91,94,-1,155,94,96,-1,155,96,29,-1,156,151,149,-1,156,154,151,-1,156,149,150,-1,156,150,153,-1,156,153,152,-1,156,152,88,-1,156,88,87,-1,156,87,89,-1,156,89,85,-1,156,85,84,-1,156,84,86,-1,156,86,154,-1,76,157,60,-1,76,73,158,157,-1,159,158,73,75,160,-1,161,56,55,-1,60,162,58,-1,162,60,157,-1,161,55,163,-1,57,164,163,55,-1,160,163,164,-1,160,164,159,-1,164,57,165,-1,164,165,159,-1,57,58,166,165,-1,166,58,162,-1,165,166,159,-1,166,162,157,158,159,-1,140,125,167,-1,124,168,125,-1,168,167,125,-1,124,169,168,-1,146,140,167,170,-1,168,170,167,-1,168,169,170,-1,146,170,171,-1,169,171,170,-1,172,134,146,171,-1,134,172,130,-1,169,124,126,173,-1,173,126,130,-1,169,173,172,171,-1,173,130,172,-1,122,74,133,174,-1,133,134,174,-1,130,122,174,-1,134,130,174,-1,122,56,175,74,-1,74,175,176,-1,175,56,161,176,-1,74,176,75,-1,176,161,163,-1,176,160,75,-1,176,163,160,-1,115,116,177,51,-1,106,98,177,116,-1,51,177,103,-1,177,98,103,-1}, 1234);
SoTextureCoordinate* SoTextureCoordinate212 = new SoTextureCoordinate();
SoTextureCoordinate212->setPoint(new float[]{0.1611,-0.02056,0.9468,-0.02056,0.9739,0.9344,-0.137,1.094,0.1973,0.6424,0.2231,0.04876,0.5054,0.2466,0.5054,0.5929,0.8135,0.6424,0.6282,0.1972,0.7876,0.04876,0.5054,-0.05018,0.6282,-0.05018,0.5054,0.8403,0.7989,1.038,0.5054,1.038,0.8248,0.7908,0.186,0.7908,0.2118,1.038,0.6427,0.7908,-0.01977,0.5929,-0.03324,0.7908,1.044,0.7908,1.031,0.5929,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 356);
SoIndexedFaceSet211->setTexCoord(*SoTextureCoordinate212);

SoCoordinate* SoCoordinate213 = new SoCoordinate();
SoCoordinate213->setPoint(new float[]{0.043,1.25,0.0614,0.101,1.25,0.0614,0.103,1.31,0.0195,0.021,1.32,0.0276,0.0572,1.27,-0.153,0.0524,1.15,-0.134,0.0,1.19,-0.14,0.0,1.26,-0.147,-0.0572,1.27,-0.153,-0.0228,1.18,-0.14,-0.0524,1.15,-0.134,0.0,1.13,-0.126,-0.0228,1.13,-0.124,0.0,1.31,-0.146,-0.0545,1.35,-0.138,0.0,1.35,-0.136,-0.0593,1.3,-0.151,0.0593,1.3,-0.151,0.0545,1.35,-0.138,-0.0255,1.3,-0.146,0.0975,1.26,-0.15,0.1,1.3,-0.148,-0.1,1.3,-0.148,-0.0975,1.26,-0.15,-0.117,1.41,-0.0395,-0.0674,1.45,-0.0314,-0.0926,1.41,-0.0937,-0.124,1.4,-0.0706,-0.0583,1.44,-0.0615,-0.0228,1.46,-0.0872,-0.0534,1.42,-0.112,-0.0228,1.42,0.00351,-0.0593,1.43,-0.0185,-0.0787,1.39,-0.00293,-0.112,1.4,-0.0131,-0.164,1.39,-0.0373,-0.0153,1.39,0.0159,-0.0953,1.35,-0.136,-0.0545,1.35,-0.138,-0.139,1.34,0.00297,-0.137,1.34,-0.0368,0.0,1.35,-0.136,-0.156,1.35,-0.0915,-0.132,1.29,-0.127,-0.1,1.3,-0.148,-0.0418,1.35,0.0168,-0.013,1.37,0.0167,-0.151,1.28,-0.0878,-0.136,1.32,-0.0406,-0.124,1.26,-0.125,-0.0975,1.26,-0.15,0.00228,1.37,0.0167,-0.00959,1.32,0.0276,-0.0918,1.31,0.0195,-0.141,1.25,-0.0744,-0.0316,1.25,0.0614,-0.00261,1.25,0.0458,-0.0611,1.25,0.0668,-0.0896,1.25,0.0614,-0.126,1.24,0.012,-0.126,1.22,0.0141,-0.129,1.17,-0.0523,-0.115,1.16,-0.105,-0.0851,1.18,-0.134,-0.0524,1.15,-0.134,-0.083,1.13,-0.122,-0.117,1.15,-0.018,-0.11,1.1,-0.0846,-0.0808,1.1,-0.111,-0.0228,1.13,-0.124,-0.0524,1.1,-0.119,0.0,1.13,-0.126,-0.0228,1.1,-0.116,-0.0563,1.15,0.0377,-0.00476,1.18,0.0458,-0.0343,1.18,0.0485,-0.0966,1.15,-0.00413,-0.12,1.1,-0.0373,-0.121,1.07,-0.0356,-0.106,1.07,-0.0711,-0.0475,1.06,-0.105,0.0,1.08,0.0556,-0.0787,1.08,0.0347,-0.103,1.08,0.00296,-0.0975,1.01,-0.0873,-0.134,0.998,-0.0314,-0.0475,1.02,-0.109,-0.0325,1.02,0.0529,0.0,1.02,0.0422,-0.0975,1.02,0.0132,0.0926,1.41,-0.0937,0.0674,1.45,-0.0314,0.117,1.41,-0.0395,0.124,1.4,-0.0706,0.0583,1.44,-0.0615,0.0534,1.42,-0.112,0.0228,1.46,-0.0872,0.0,1.4,-0.112,0.0787,1.39,-0.00293,0.0593,1.43,-0.0185,0.0228,1.42,0.00351,0.112,1.4,-0.0131,0.164,1.39,-0.0373,0.0153,1.39,0.0159,0.0953,1.35,-0.136,0.0545,1.35,-0.138,0.139,1.34,0.00297,0.156,1.35,-0.0915,0.132,1.29,-0.127,0.151,1.28,-0.0878,0.1,1.3,-0.148,0.137,1.34,-0.0368,0.147,1.32,-0.0406,0.124,1.26,-0.125,0.0975,1.26,-0.15,0.021,1.32,0.0276,0.0532,1.35,0.0168,0.103,1.31,0.0195,0.135,1.29,-0.0406,0.141,1.25,-0.0744,0.132,1.18,-0.083,0.134,1.19,-0.0572,0.014,1.25,0.0458,0.043,1.25,0.0614,0.101,1.25,0.0614,0.138,1.24,0.012,0.065,1.23,0.0743,0.115,1.16,-0.105,0.0851,1.18,-0.134,0.0524,1.15,-0.134,0.043,1.2,0.0641,0.127,1.14,-0.0427,0.083,1.13,-0.122,0.0162,1.18,0.0458,0.0457,1.18,0.0485,0.117,1.15,-0.018,0.11,1.1,-0.0846,0.0808,1.1,-0.111,0.0524,1.1,-0.119,0.0228,1.1,-0.116,0.108,1.15,-0.00413,0.12,1.1,-0.0373,0.121,1.07,-0.0356,0.106,1.07,-0.0711,0.0475,1.06,-0.105,0.0787,1.08,0.0347,0.0844,1.15,0.0297,0.103,1.08,0.00296,0.0,1.07,-0.11,0.0975,1.01,-0.0873,0.134,0.998,-0.0475,0.0475,1.02,-0.109,0.0325,1.02,0.0529,0.0975,1.02,0.0132,0.0,1.02,-0.117,0.0,1.44,-0.0389,0.0,1.01,-0.0259,-0.104,1.19,0.0423,-0.0778,1.19,0.0642,-0.078,1.19,0.0644,-0.0493,1.2,0.0664,-0.0281,1.22,0.0587,-0.104,1.2,0.0568,-0.0484,1.21,0.0692,-0.0549,1.21,0.0708,-0.0806,1.21,0.0713,-0.0852,1.21,0.0703,0.116,1.19,0.043,0.114,1.21,0.0572,0.0967,1.21,0.0701,0.11,1.19,0.0502,0.093,1.19,0.0622,0.0832,1.19,0.0662,0.0863,1.21,0.0728,0.0154,1.21,0.0458,-0.00393,1.21,0.0458,-0.0145,1.2,0.0512,0.0534,1.35,0.0168}, 534);
SoIndexedFaceSet211->setCoord(*SoCoordinate213);

SoShape207->setGeometry(*SoIndexedFaceSet211);

SoTransform206->addChild(*SoShape207);

SoField205->addChild(*SoTransform206);

SoTransform* SoTransform214 = new SoTransform();
SoTransform214->setTranslation(new float[]{0.0,1.18,0.015});
SoTransform214->setScale(new float[]{1.25,1.1,1.3});
SoGroup* SoGroup215 = new SoGroup();
SoTransform* SoTransform216 = new SoTransform();
SoTransform216->setTranslation(new float[]{0.0,-1.2,0.0});
SoShape* SoShape217 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance218 = new SoVRMLAppearance();
SoMaterial* SoMaterial219 = new SoMaterial();
SoMaterial219->setDEF(QString("BCLColor"));
SoMaterial219->setAmbientIntensity(0.25);
SoMaterial219->setDiffuseColor(new float[]{0.0588,0.0588,0.0588});
SoMaterial219->setShininess(0.5);
SoVRMLAppearance218->addChild(*SoMaterial219);

SoShape217->addChild(*SoVRMLAppearance218);

SoIndexedFaceSet* SoIndexedFaceSet220 = new SoIndexedFaceSet();
SoIndexedFaceSet220->setSolid(false);
SoIndexedFaceSet220->setCreaseAngle(1.59);
SoIndexedFaceSet220->setCoordIndex(new int32_t[]{4,5,6,-1,6,7,4,-1,8,7,6,-1,6,9,8,-1,9,10,8,-1,6,5,11,-1,9,6,12,-1,11,12,6,-1,12,10,9,-1,7,8,13,-1,13,4,7,-1,14,15,16,-1,15,17,13,-1,4,13,17,-1,17,15,18,-1,13,19,15,-1,19,13,8,-1,19,16,15,-1,16,19,8,-1,17,20,4,-1,5,4,20,-1,18,21,17,-1,20,17,21,-1,16,22,14,-1,22,16,23,-1,8,23,16,-1,23,8,10,-1,24,25,26,-1,26,27,24,-1,25,28,26,-1,28,29,30,-1,30,26,28,-1,25,24,34,-1,33,25,34,-1,24,35,34,-1,27,35,24,-1,27,26,37,-1,37,26,30,-1,38,37,30,-1,33,34,39,-1,39,34,35,-1,41,38,30,-1,35,27,42,-1,37,42,27,-1,42,37,43,-1,37,38,44,-1,44,43,37,-1,43,47,42,-1,47,43,49,-1,43,44,49,-1,50,49,44,-1,33,39,53,-1,49,54,47,-1,59,58,53,-1,53,39,59,-1,58,59,60,-1,54,49,61,-1,49,50,62,-1,63,62,50,-1,62,61,49,-1,64,63,50,-1,63,64,65,-1,65,62,63,-1,66,60,61,-1,62,65,67,-1,68,67,65,-1,64,69,70,-1,64,70,65,-1,70,68,65,-1,69,71,72,-1,72,70,69,-1,66,76,60,-1,67,77,62,-1,62,77,61,-1,77,66,61,-1,66,77,78,-1,77,67,79,-1,79,67,68,-1,79,78,77,-1,68,70,80,-1,70,72,80,-1,80,79,68,-1,73,76,82,-1,76,66,83,-1,78,83,66,-1,83,82,76,-1,78,79,84,-1,79,80,84,-1,84,85,78,-1,86,84,80,-1,82,83,89,-1,83,78,89,-1,89,87,82,-1,78,85,89,-1,90,91,92,-1,92,93,90,-1,90,94,91,-1,95,96,94,-1,94,90,95,-1,29,96,97,-1,96,95,97,-1,97,30,29,-1,30,97,41,-1,41,97,95,-1,101,92,91,-1,98,101,91,-1,101,102,92,-1,92,102,93,-1,104,90,93,-1,90,104,95,-1,95,105,41,-1,104,105,95,-1,106,101,98,-1,102,101,106,-1,107,93,102,-1,93,107,104,-1,108,104,107,-1,107,109,108,-1,110,105,104,-1,104,108,110,-1,113,110,108,-1,110,113,114,-1,119,108,109,-1,108,119,113,-1,120,113,119,-1,119,121,120,-1,117,124,125,-1,106,117,125,-1,127,114,113,-1,114,127,128,-1,113,120,127,-1,114,128,129,-1,131,120,121,-1,131,127,120,-1,132,129,128,-1,128,127,132,-1,121,135,131,-1,136,132,127,-1,132,136,137,-1,138,71,129,-1,138,129,132,-1,137,138,132,-1,139,72,71,-1,72,139,80,-1,71,138,139,-1,140,135,121,-1,140,121,125,-1,141,127,131,-1,127,141,136,-1,131,135,141,-1,142,141,135,-1,143,136,141,-1,136,143,137,-1,141,142,143,-1,144,138,137,-1,144,139,138,-1,143,144,137,-1,145,140,146,-1,147,135,140,-1,135,147,142,-1,140,145,147,-1,148,80,139,-1,80,148,86,-1,139,144,148,-1,149,143,142,-1,149,144,143,-1,142,150,149,-1,151,148,144,-1,144,149,151,-1,153,147,145,-1,153,142,147,-1,145,152,153,-1,153,150,142,-1,154,86,148,-1,148,151,154,-1,76,157,60,-1,76,73,158,157,-1,60,162,58,-1,162,60,157,-1,166,58,162,-1,165,166,159,-1,166,162,157,158,159,-1,140,125,167,-1,124,168,125,-1,168,167,125,-1,124,169,168,-1,146,140,167,170,-1,168,170,167,-1,168,169,170,-1,146,170,171,-1,169,171,170,-1,98,117,106,-1}, 772);
SoTextureCoordinate* SoTextureCoordinate221 = new SoTextureCoordinate();
SoTextureCoordinate221->setPoint(new float[]{0.1611,-0.02056,0.9468,-0.02056,0.9739,0.9344,-0.137,1.094,0.1973,0.6424,0.2231,0.04876,0.5054,0.2466,0.5054,0.5929,0.8135,0.6424,0.6282,0.1972,0.7876,0.04876,0.5054,-0.05018,0.6282,-0.05018,0.5054,0.8403,0.7989,1.038,0.5054,1.038,0.8248,0.7908,0.186,0.7908,0.2118,1.038,0.6427,0.7908,-0.01977,0.5929,-0.03324,0.7908,1.044,0.7908,1.031,0.5929,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 356);
SoIndexedFaceSet220->setTexCoord(*SoTextureCoordinate221);

SoCoordinate* SoCoordinate222 = new SoCoordinate();
SoCoordinate222->setPoint(new float[]{0.043,1.25,0.0614,0.101,1.25,0.0614,0.103,1.31,0.0195,0.021,1.32,0.0276,0.0572,1.27,-0.153,0.0524,1.15,-0.134,0.0,1.19,-0.14,0.0,1.26,-0.147,-0.0572,1.27,-0.153,-0.0228,1.18,-0.14,-0.0524,1.15,-0.134,0.0,1.13,-0.126,-0.0228,1.13,-0.124,0.0,1.31,-0.146,-0.0545,1.35,-0.138,0.0,1.35,-0.136,-0.0593,1.3,-0.151,0.0593,1.3,-0.151,0.0545,1.35,-0.138,-0.0255,1.3,-0.146,0.0975,1.26,-0.15,0.1,1.3,-0.148,-0.1,1.3,-0.148,-0.0975,1.26,-0.15,-0.117,1.41,-0.0395,-0.0674,1.45,-0.0314,-0.0926,1.41,-0.0937,-0.124,1.4,-0.0706,-0.0583,1.44,-0.0615,-0.0228,1.46,-0.0872,-0.0534,1.42,-0.112,-0.0228,1.42,0.00351,-0.0593,1.43,-0.0185,-0.0787,1.39,-0.00293,-0.112,1.4,-0.0131,-0.164,1.39,-0.0373,-0.0153,1.39,0.0159,-0.0953,1.35,-0.136,-0.0545,1.35,-0.138,-0.139,1.34,0.00297,-0.137,1.34,-0.0368,0.0,1.35,-0.136,-0.156,1.35,-0.0915,-0.132,1.29,-0.127,-0.1,1.3,-0.148,-0.0418,1.35,0.0168,-0.013,1.37,0.0167,-0.151,1.28,-0.0878,-0.136,1.32,-0.0406,-0.124,1.26,-0.125,-0.0975,1.26,-0.15,0.00228,1.37,0.0167,-0.00959,1.32,0.0276,-0.0918,1.31,0.0195,-0.141,1.25,-0.0744,-0.0316,1.25,0.0614,-0.00261,1.25,0.0458,-0.0611,1.25,0.0668,-0.0896,1.25,0.0614,-0.126,1.24,0.012,-0.126,1.22,0.0141,-0.129,1.17,-0.0523,-0.115,1.16,-0.105,-0.0851,1.18,-0.134,-0.0524,1.15,-0.134,-0.083,1.13,-0.122,-0.117,1.15,-0.018,-0.11,1.1,-0.0846,-0.0808,1.1,-0.111,-0.0228,1.13,-0.124,-0.0524,1.1,-0.119,0.0,1.13,-0.126,-0.0228,1.1,-0.116,-0.0563,1.15,0.0377,-0.00476,1.18,0.0458,-0.0343,1.18,0.0485,-0.0966,1.15,-0.00413,-0.12,1.1,-0.0373,-0.121,1.07,-0.0356,-0.106,1.07,-0.0711,-0.0475,1.06,-0.105,0.0,1.08,0.0556,-0.0787,1.08,0.0347,-0.103,1.08,0.00296,-0.0975,1.01,-0.0873,-0.134,0.998,-0.0314,-0.0475,1.02,-0.109,-0.0325,1.02,0.0529,0.0,1.02,0.0422,-0.0975,1.02,0.0132,0.0926,1.41,-0.0937,0.0674,1.45,-0.0314,0.117,1.41,-0.0395,0.124,1.4,-0.0706,0.0583,1.44,-0.0615,0.0534,1.42,-0.112,0.0228,1.46,-0.0872,0.0,1.4,-0.112,0.0787,1.39,-0.00293,0.0593,1.43,-0.0185,0.0228,1.42,0.00351,0.112,1.4,-0.0131,0.164,1.39,-0.0373,0.0153,1.39,0.0159,0.0953,1.35,-0.136,0.0545,1.35,-0.138,0.139,1.34,0.00297,0.156,1.35,-0.0915,0.132,1.29,-0.127,0.151,1.28,-0.0878,0.1,1.3,-0.148,0.137,1.34,-0.0368,0.147,1.32,-0.0406,0.124,1.26,-0.125,0.0975,1.26,-0.15,0.021,1.32,0.0276,0.0532,1.35,0.0168,0.103,1.31,0.0195,0.135,1.29,-0.0406,0.141,1.25,-0.0744,0.132,1.18,-0.083,0.134,1.19,-0.0572,0.014,1.25,0.0458,0.043,1.25,0.0614,0.101,1.25,0.0614,0.138,1.24,0.012,0.065,1.23,0.0743,0.115,1.16,-0.105,0.0851,1.18,-0.134,0.0524,1.15,-0.134,0.043,1.2,0.0641,0.127,1.14,-0.0427,0.083,1.13,-0.122,0.0162,1.18,0.0458,0.0457,1.18,0.0485,0.117,1.15,-0.018,0.11,1.1,-0.0846,0.0808,1.1,-0.111,0.0524,1.1,-0.119,0.0228,1.1,-0.116,0.108,1.15,-0.00413,0.12,1.1,-0.0373,0.121,1.07,-0.0356,0.106,1.07,-0.0711,0.0475,1.06,-0.105,0.0787,1.08,0.0347,0.0844,1.15,0.0297,0.103,1.08,0.00296,0.0,1.07,-0.11,0.0975,1.01,-0.0873,0.134,0.998,-0.0475,0.0475,1.02,-0.109,0.0325,1.02,0.0529,0.0975,1.02,0.0132,0.0,1.02,-0.117,0.0,1.44,-0.0389,0.0,1.01,-0.0259,-0.104,1.19,0.0423,-0.0778,1.19,0.0642,-0.078,1.19,0.0644,-0.0493,1.2,0.0664,-0.0281,1.22,0.0587,-0.104,1.2,0.0568,-0.0484,1.21,0.0692,-0.0549,1.21,0.0708,-0.0806,1.21,0.0713,-0.0852,1.21,0.0703,0.116,1.19,0.043,0.114,1.21,0.0572,0.0967,1.21,0.0701,0.11,1.19,0.0502,0.093,1.19,0.0622,0.0832,1.19,0.0662,0.0863,1.21,0.0728,0.0154,1.21,0.0458,-0.00393,1.21,0.0458,-0.0145,1.2,0.0512,0.0534,1.35,0.0168}, 534);
SoIndexedFaceSet220->setCoord(*SoCoordinate222);

SoShape217->setGeometry(*SoIndexedFaceSet220);

SoTransform216->addChild(*SoShape217);

SoGroup215->addChild(*SoTransform216);

SoTransform* SoTransform223 = new SoTransform();
SoTransform223->setTranslation(new float[]{0.13,0.22,-0.1});
SoTransform223->setRotation(new float[]{0.0,0.0,1.0,1.57});
SoTransform223->setScale(new float[]{2.0,1.5,1.5});
SoTransform* SoTransform224 = new SoTransform();
SoTransform224->setRotation(new float[]{1.0,0.0,0.0,1.4});
SoShape* SoShape225 = new SoShape();
SoShape225->setDEF(QString("BCLSnorkelPad"));
SoVRMLAppearance* SoVRMLAppearance226 = new SoVRMLAppearance();
SoMaterial* SoMaterial227 = new SoMaterial();
SoMaterial227->setUSE(QString("BCLColor"));
SoVRMLAppearance226->addChild(*SoMaterial227);

SoShape225->addChild(*SoVRMLAppearance226);

SoExtrusion* SoExtrusion228 = new SoExtrusion();
SoExtrusion228->setCrossSection(new float[]{0.0,0.013,0.00494,0.01196,0.00923,0.00923,0.01196,0.00494,0.013,0.0,0.01196,-0.00494,0.00923,-0.00923,0.00494,-0.01196,0.0,0.013}, 18);
SoExtrusion228->setSpine(new float[]{-0.03,0.01,0.0,-0.005,0.04,0.0,0.0,0.06,0.0,-0.01,0.075,0.0}, 12);
SoShape225->setGeometry(*SoExtrusion228);

SoTransform224->addChild(*SoShape225);

SoTransform223->addChild(*SoTransform224);

SoGroup215->addChild(*SoTransform223);

SoTransform* SoTransform229 = new SoTransform();
SoTransform229->setTranslation(new float[]{0.07,0.08,0.125});
SoTransform229->setRotation(new float[]{-1.0,0.0,0.0,0.8});
SoShape* SoShape230 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance231 = new SoVRMLAppearance();
SoMaterial* SoMaterial232 = new SoMaterial();
SoMaterial232->setDEF(QString("BCLSnorkel"));
SoMaterial232->setDiffuseColor(new float[]{0.25,0.25,0.25});
SoMaterial232->setShininess(0.5);
SoMaterial232->setTransparency(0.1);
SoVRMLAppearance231->addChild(*SoMaterial232);

SoShape230->addChild(*SoVRMLAppearance231);

SoExtrusion* SoExtrusion233 = new SoExtrusion();
SoExtrusion233->setCrossSection(new float[]{0.0,0.013,0.00494,0.01196,0.00923,0.00923,0.01196,0.00494,0.013,0.0,0.01196,-0.00494,0.00923,-0.00923,0.00494,-0.01196,0.0,0.013,-0.00494,-0.01196,-0.00923,-0.00923,-0.01196,-0.00494,-0.013,0.0,-0.01196,0.00494,-0.00923,0.00923,-0.00494,0.01196,0.0,0.013}, 34);
SoExtrusion233->setScale(new float[]{0.8,0.8,1.0,1.0}, 4);
SoExtrusion233->setSpine(new float[]{0.03,0.03,-0.05,0.05,0.2,0.0}, 6);
SoShape230->setGeometry(*SoExtrusion233);

SoTransform229->addChild(*SoShape230);

SoGroup215->addChild(*SoTransform229);

SoGroup* SoGroup234 = new SoGroup();
SoGroup234->setDEF(QString("buckle"));
SoTransform* SoTransform235 = new SoTransform();
SoTransform235->setTranslation(new float[]{-0.08,0.1,0.029});
SoTransform235->setRotation(new float[]{-1.0,0.0,0.0,0.68});
SoShape* SoShape236 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance237 = new SoVRMLAppearance();
SoVRMLAppearance237->setDEF(QString("buckleHolder"));
SoMaterial* SoMaterial238 = new SoMaterial();
SoMaterial238->setDiffuseColor(new float[]{0.25,0.25,0.25});
SoVRMLAppearance237->addChild(*SoMaterial238);

SoShape236->addChild(*SoVRMLAppearance237);

SoBox* SoBox239 = new SoBox();
SoBox239->setSize(new float[]{0.03,0.03,0.005});
SoShape236->setGeometry(*SoBox239);

SoTransform235->addChild(*SoShape236);

SoGroup234->addChild(*SoTransform235);

SoTransform* SoTransform240 = new SoTransform();
SoTransform240->setTranslation(new float[]{0.03,0.1,0.027});
SoTransform240->setRotation(new float[]{-1.0,0.0,0.0,0.68});
SoShape* SoShape241 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance242 = new SoVRMLAppearance();
SoVRMLAppearance242->setUSE(QString("buckleHolder"));
SoShape241->addChild(*SoVRMLAppearance242);

SoBox* SoBox243 = new SoBox();
SoBox243->setSize(new float[]{0.15,0.03,0.001});
SoShape241->setGeometry(*SoBox243);

SoTransform240->addChild(*SoShape241);

SoGroup234->addChild(*SoTransform240);

SoTransform* SoTransform244 = new SoTransform();
SoTransform244->setTranslation(new float[]{-0.045,0.1,0.028});
SoTransform244->setRotation(new float[]{-1.0,0.0,0.0,0.68});
SoShape* SoShape245 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance246 = new SoVRMLAppearance();
SoVRMLAppearance246->setDEF(QString("pin"));
SoMaterial* SoMaterial247 = new SoMaterial();
SoVRMLAppearance246->addChild(*SoMaterial247);

SoShape245->addChild(*SoVRMLAppearance246);

SoBox* SoBox248 = new SoBox();
SoBox248->setSize(new float[]{0.02,0.028,0.005});
SoShape245->setGeometry(*SoBox248);

SoTransform244->addChild(*SoShape245);

SoGroup234->addChild(*SoTransform244);

SoTransform* SoTransform249 = new SoTransform();
SoTransform249->setTranslation(new float[]{-0.06,0.1,0.029});
SoTransform249->setRotation(new float[]{0.0,0.0,1.0,1.57});
SoShape* SoShape250 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance251 = new SoVRMLAppearance();
SoVRMLAppearance251->setUSE(QString("pin"));
SoShape250->addChild(*SoVRMLAppearance251);

SoCylinder* SoCylinder252 = new SoCylinder();
SoCylinder252->setHeight(0.02);
SoCylinder252->setRadius(0.0024);
SoShape250->setGeometry(*SoCylinder252);

SoTransform249->addChild(*SoShape250);

SoGroup234->addChild(*SoTransform249);

SoTransform* SoTransform253 = new SoTransform();
SoTransform253->setTranslation(new float[]{-0.06,0.109,0.0217});
SoTransform253->setRotation(new float[]{0.0,0.0,1.0,1.57});
SoShape* SoShape254 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance255 = new SoVRMLAppearance();
SoVRMLAppearance255->setUSE(QString("pin"));
SoShape254->addChild(*SoVRMLAppearance255);

SoCylinder* SoCylinder256 = new SoCylinder();
SoCylinder256->setHeight(0.02);
SoCylinder256->setRadius(0.0024);
SoShape254->setGeometry(*SoCylinder256);

SoTransform253->addChild(*SoShape254);

SoGroup234->addChild(*SoTransform253);

SoTransform* SoTransform257 = new SoTransform();
SoTransform257->setTranslation(new float[]{-0.06,0.091,0.036});
SoTransform257->setRotation(new float[]{0.0,0.0,1.0,1.57});
SoShape* SoShape258 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance259 = new SoVRMLAppearance();
SoVRMLAppearance259->setUSE(QString("pin"));
SoShape258->addChild(*SoVRMLAppearance259);

SoCylinder* SoCylinder260 = new SoCylinder();
SoCylinder260->setHeight(0.02);
SoCylinder260->setRadius(0.0024);
SoShape258->setGeometry(*SoCylinder260);

SoTransform257->addChild(*SoShape258);

SoGroup234->addChild(*SoTransform257);

SoGroup215->addChild(*SoGroup234);

SoGroup* SoGroup261 = new SoGroup();
SoGroup261->setDEF(QString("buckleBelt"));
SoTransform* SoTransform262 = new SoTransform();
SoTransform262->setTranslation(new float[]{-0.07,-0.12,0.038});
SoTransform262->setRotation(new float[]{0.0,1.0,0.0,-0.68});
SoShape* SoShape263 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance264 = new SoVRMLAppearance();
SoVRMLAppearance264->setUSE(QString("buckleHolder"));
SoShape263->addChild(*SoVRMLAppearance264);

SoBox* SoBox265 = new SoBox();
SoBox265->setSize(new float[]{0.04,0.1,0.005});
SoShape263->setGeometry(*SoBox265);

SoTransform262->addChild(*SoShape263);

SoGroup261->addChild(*SoTransform262);

SoTransform* SoTransform266 = new SoTransform();
SoTransform266->setTranslation(new float[]{0.005,-0.12,0.053});
SoShape* SoShape267 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance268 = new SoVRMLAppearance();
SoVRMLAppearance268->setUSE(QString("buckleHolder"));
SoShape267->addChild(*SoVRMLAppearance268);

SoBox* SoBox269 = new SoBox();
SoBox269->setSize(new float[]{0.12,0.11,0.001});
SoShape267->setGeometry(*SoBox269);

SoTransform266->addChild(*SoShape267);

SoGroup261->addChild(*SoTransform266);

SoTransform* SoTransform270 = new SoTransform();
SoTransform270->setTranslation(new float[]{0.075,-0.12,0.038});
SoTransform270->setRotation(new float[]{0.0,1.0,0.0,0.68});
SoShape* SoShape271 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance272 = new SoVRMLAppearance();
SoVRMLAppearance272->setUSE(QString("buckleHolder"));
SoShape271->addChild(*SoVRMLAppearance272);

SoBox* SoBox273 = new SoBox();
SoBox273->setSize(new float[]{0.04,0.1,0.005});
SoShape271->setGeometry(*SoBox273);

SoTransform270->addChild(*SoShape271);

SoGroup261->addChild(*SoTransform270);

SoGroup215->addChild(*SoGroup261);

SoTransform214->addChild(*SoGroup215);

SoField205->addChild(*SoTransform214);

SoTransform* SoTransform274 = new SoTransform();
SoTransform274->setDEF(QString("ScubaTank"));
SoTransform274->setTranslation(new float[]{0.0,1.1,-0.23});
SoTransform274->setRotation(new float[]{0.0,1.0,0.0,3.14});
SoTransform274->setScale(new float[]{0.8,0.8,0.8});
SoTransform* SoTransform275 = new SoTransform();
SoShape* SoShape276 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance277 = new SoVRMLAppearance();
SoMaterial* SoMaterial278 = new SoMaterial();
SoMaterial278->setDEF(QString("tank"));
SoMaterial278->setAmbientIntensity(0.3);
SoMaterial278->setDiffuseColor(new float[]{0.3,0.3,0.5});
SoMaterial278->setSpecularColor(new float[]{0.7,0.7,0.8});
SoMaterial278->setShininess(0.1);
SoVRMLAppearance277->addChild(*SoMaterial278);

SoShape276->addChild(*SoVRMLAppearance277);

SoCylinder* SoCylinder279 = new SoCylinder();
SoCylinder279->setHeight(0.7);
SoCylinder279->setRadius(0.1);
SoShape276->setGeometry(*SoCylinder279);

SoTransform275->addChild(*SoShape276);

SoTransform274->addChild(*SoTransform275);

SoTransform* SoTransform280 = new SoTransform();
SoTransform280->setTranslation(new float[]{0.0,0.35,0.0});
SoShape* SoShape281 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance282 = new SoVRMLAppearance();
SoMaterial* SoMaterial283 = new SoMaterial();
SoMaterial283->setUSE(QString("tank"));
SoVRMLAppearance282->addChild(*SoMaterial283);

SoShape281->addChild(*SoVRMLAppearance282);

SoSphere* SoSphere284 = new SoSphere();
SoSphere284->setRadius(0.098);
SoShape281->setGeometry(*SoSphere284);

SoTransform280->addChild(*SoShape281);

SoTransform274->addChild(*SoTransform280);

SoTransform* SoTransform285 = new SoTransform();
SoTransform285->setTranslation(new float[]{0.0,-0.35,0.0});
SoShape* SoShape286 = new SoShape();
SoShape286->setDEF(QString("tankBottom"));
SoVRMLAppearance* SoVRMLAppearance287 = new SoVRMLAppearance();
SoMaterial* SoMaterial288 = new SoMaterial();
SoMaterial288->setAmbientIntensity(0.3);
SoMaterial288->setDiffuseColor(new float[]{0.0,0.0,0.0});
SoVRMLAppearance287->addChild(*SoMaterial288);

SoShape286->addChild(*SoVRMLAppearance287);

SoCylinder* SoCylinder289 = new SoCylinder();
SoCylinder289->setHeight(0.06);
SoCylinder289->setRadius(0.101);
SoShape286->setGeometry(*SoCylinder289);

SoTransform285->addChild(*SoShape286);

SoTransform274->addChild(*SoTransform285);

SoGroup* SoGroup290 = new SoGroup();
SoGroup290->setDEF(QString("tankNozzle"));
SoTransform* SoTransform291 = new SoTransform();
SoTransform* SoTransform292 = new SoTransform();
SoTransform292->setTranslation(new float[]{0.0,0.45,0.0});
SoShape* SoShape293 = new SoShape();
SoShape293->setDEF(QString("pressure"));
SoVRMLAppearance* SoVRMLAppearance294 = new SoVRMLAppearance();
SoMaterial* SoMaterial295 = new SoMaterial();
SoMaterial295->setDEF(QString("pressureColor"));
SoMaterial295->setAmbientIntensity(0.4);
SoMaterial295->setDiffuseColor(new float[]{0.91,0.91,0.91});
SoMaterial295->setSpecularColor(new float[]{0.91,0.9,0.91});
SoMaterial295->setShininess(0.16);
SoVRMLAppearance294->addChild(*SoMaterial295);

SoShape293->addChild(*SoVRMLAppearance294);

SoCylinder* SoCylinder296 = new SoCylinder();
SoCylinder296->setHeight(0.1);
SoCylinder296->setRadius(0.015);
SoShape293->setGeometry(*SoCylinder296);

SoTransform292->addChild(*SoShape293);

SoTransform291->addChild(*SoTransform292);

SoTransform* SoTransform297 = new SoTransform();
SoTransform297->setTranslation(new float[]{0.0,0.5,0.0});
SoShape* SoShape298 = new SoShape();
SoShape298->setDEF(QString("pressureTop"));
SoVRMLAppearance* SoVRMLAppearance299 = new SoVRMLAppearance();
SoMaterial* SoMaterial300 = new SoMaterial();
SoMaterial300->setDEF(QString("top"));
SoMaterial300->setDiffuseColor(new float[]{0.0,0.0,0.0});
SoVRMLAppearance299->addChild(*SoMaterial300);

SoShape298->addChild(*SoVRMLAppearance299);

SoCylinder* SoCylinder301 = new SoCylinder();
SoCylinder301->setHeight(0.02);
SoCylinder301->setRadius(0.025);
SoShape298->setGeometry(*SoCylinder301);

SoTransform297->addChild(*SoShape298);

SoTransform291->addChild(*SoTransform297);

SoTransform* SoTransform302 = new SoTransform();
SoTransform302->setTranslation(new float[]{-0.028,0.462,0.0});
SoTransform302->setRotation(new float[]{0.0,0.0,1.0,1.57});
SoTransform* SoTransform303 = new SoTransform();
SoShape* SoShape304 = new SoShape();
SoShape304->setDEF(QString("connectorToRegulator"));
SoVRMLAppearance* SoVRMLAppearance305 = new SoVRMLAppearance();
SoMaterial* SoMaterial306 = new SoMaterial();
SoMaterial306->setUSE(QString("pressureColor"));
SoVRMLAppearance305->addChild(*SoMaterial306);

SoShape304->addChild(*SoVRMLAppearance305);

SoCylinder* SoCylinder307 = new SoCylinder();
SoCylinder307->setHeight(0.03);
SoCylinder307->setRadius(0.01);
SoShape304->setGeometry(*SoCylinder307);

SoTransform303->addChild(*SoShape304);

SoTransform302->addChild(*SoTransform303);

SoTransform* SoTransform308 = new SoTransform();
SoTransform308->setTranslation(new float[]{0.0,0.02,0.0});
SoShape* SoShape309 = new SoShape();
SoShape309->setDEF(QString("connectorToRegulatorTop"));
SoVRMLAppearance* SoVRMLAppearance310 = new SoVRMLAppearance();
SoMaterial* SoMaterial311 = new SoMaterial();
SoMaterial311->setUSE(QString("top"));
SoVRMLAppearance310->addChild(*SoMaterial311);

SoShape309->addChild(*SoVRMLAppearance310);

SoCylinder* SoCylinder312 = new SoCylinder();
SoCylinder312->setHeight(0.02);
SoCylinder312->setRadius(0.02);
SoShape309->setGeometry(*SoCylinder312);

SoTransform308->addChild(*SoShape309);

SoTransform302->addChild(*SoTransform308);

SoTransform291->addChild(*SoTransform302);

SoGroup290->addChild(*SoTransform291);

SoTransform274->addChild(*SoGroup290);

SoTransform* SoTransform313 = new SoTransform();
SoTransform313->setTranslation(new float[]{0.0,0.2,0.0});
SoShape* SoShape314 = new SoShape();
SoShape314->setDEF(QString("tankHoldBelt"));
SoVRMLAppearance* SoVRMLAppearance315 = new SoVRMLAppearance();
SoMaterial* SoMaterial316 = new SoMaterial();
SoMaterial316->setAmbientIntensity(0.3);
SoMaterial316->setDiffuseColor(new float[]{0.0,0.0,0.0});
SoVRMLAppearance315->addChild(*SoMaterial316);

SoShape314->addChild(*SoVRMLAppearance315);

SoCylinder* SoCylinder317 = new SoCylinder();
SoCylinder317->setHeight(0.1);
SoCylinder317->setRadius(0.115);
SoShape314->setGeometry(*SoCylinder317);

SoTransform313->addChild(*SoShape314);

SoTransform274->addChild(*SoTransform313);

SoField205->addChild(*SoTransform274);

SoProtoInstance204->addChild(*SoField205);

SoField* SoField318 = new SoField();
SoField318->setName(QString("name"));
SoField318->setValue(QString("l1"));
SoProtoInstance204->addChild(*SoField318);

SoField203->addChild(*SoProtoInstance204);

SoProtoInstance* SoProtoInstance319 = new SoProtoInstance();
SoProtoInstance319->setDEF(QString("hanim_l_shoulder"));
SoProtoInstance319->setName(QString("Joint"));
SoField* SoField320 = new SoField();
SoField320->setName(QString("center"));
SoField320->setValue(QString("0.167 1.36 -0.0518"));
SoProtoInstance319->addChild(*SoField320);

SoField* SoField321 = new SoField();
SoField321->setName(QString("children"));
SoProtoInstance* SoProtoInstance322 = new SoProtoInstance();
SoProtoInstance322->setDEF(QString("hanim_l_upperarm"));
SoProtoInstance322->setName(QString("Segment"));
SoField* SoField323 = new SoField();
SoField323->setName(QString("children"));
SoTransform* SoTransform324 = new SoTransform();
SoTransform324->setDEF(QString("l_upperarm_adjust"));
SoTransform324->setTranslation(new float[]{0.0,0.0004203,-0.01665});
SoTransform324->setRotation(new float[]{1.0,0.0,0.0,0.119});
SoTransform324->setCenter(new float[]{0.182,1.22,-0.047});
SoShape* SoShape325 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance326 = new SoVRMLAppearance();
SoMaterial* SoMaterial327 = new SoMaterial();
SoMaterial327->setUSE(QString("WetShirtColor"));
SoVRMLAppearance326->addChild(*SoMaterial327);

SoShape325->addChild(*SoVRMLAppearance326);

SoIndexedFaceSet* SoIndexedFaceSet328 = new SoIndexedFaceSet();
SoIndexedFaceSet328->setCreaseAngle(1.65);
SoIndexedFaceSet328->setCoordIndex(new int32_t[]{2,1,0,-1,2,3,1,-1,2,4,3,-1,2,0,5,-1,6,5,0,-1,7,2,5,-1,8,4,2,-1,8,3,4,-1,9,1,3,-1,10,0,1,-1,0,10,6,-1,1,9,10,-1,3,8,9,-1,2,7,8,-1,5,6,7,-1,11,7,6,-1,14,9,8,-1,15,10,9,-1,11,6,10,-1,10,15,11,-1,9,14,15,-1,8,13,14,-1,8,16,13,-1,7,11,12,-1,21,15,14,-1,15,17,11,-1,15,21,17,-1,16,19,13,-1,13,19,20,-1,21,14,20,-1,14,13,20,-1,12,17,18,-1,12,11,17,-1,12,18,16,-1,18,19,16,-1,12,16,7,-1,16,8,7,-1,19,18,17,-1,20,19,21,-1,19,17,21,-1}, 160);
SoCoordinate* SoCoordinate329 = new SoCoordinate();
SoCoordinate329->setPoint(new float[]{0.174,1.37,-0.0625,0.185,1.38,-0.0395,0.156,1.39,-0.0464,0.174,1.37,-0.0158,0.154,1.37,-0.0185,0.157,1.38,-0.0733,0.182,1.33,-0.0728,0.151,1.33,-0.0937,0.15,1.34,-0.000787,0.185,1.33,-0.00025,0.201,1.33,-0.0411,0.189,1.26,-0.0808,0.155,1.26,-0.0867,0.151,1.26,-0.000789,0.19,1.26,-0.00401,0.209,1.26,-0.0427,0.141,1.26,-0.0421,0.203,1.08,-0.0744,0.162,1.05,-0.0561,0.169,1.08,-0.00885,0.208,1.07,-0.00133,0.221,1.08,-0.0352}, 66);
SoIndexedFaceSet328->setCoord(*SoCoordinate329);

SoShape325->setGeometry(*SoIndexedFaceSet328);

SoTransform324->addChild(*SoShape325);

SoField323->addChild(*SoTransform324);

SoProtoInstance322->addChild(*SoField323);

SoField* SoField330 = new SoField();
SoField330->setName(QString("name"));
SoField330->setValue(QString("l_upperarm"));
SoProtoInstance322->addChild(*SoField330);

SoField321->addChild(*SoProtoInstance322);

SoProtoInstance* SoProtoInstance331 = new SoProtoInstance();
SoProtoInstance331->setDEF(QString("hanim_l_elbow"));
SoProtoInstance331->setName(QString("Joint"));
SoField* SoField332 = new SoField();
SoField332->setName(QString("center"));
SoField332->setValue(QString("0.196 1.07 -0.0518"));
SoProtoInstance331->addChild(*SoField332);

SoField* SoField333 = new SoField();
SoField333->setName(QString("children"));
SoProtoInstance* SoProtoInstance334 = new SoProtoInstance();
SoProtoInstance334->setDEF(QString("hanim_l_forearm"));
SoProtoInstance334->setName(QString("Segment"));
SoField* SoField335 = new SoField();
SoField335->setName(QString("children"));
SoTransform* SoTransform336 = new SoTransform();
SoTransform336->setDEF(QString("l_forearm_adjust"));
SoTransform336->setTranslation(new float[]{0.0,0.003724,-0.0236});
SoTransform336->setRotation(new float[]{-1.0,0.0,0.0,0.1});
SoTransform336->setCenter(new float[]{0.198,0.961,-0.0405});
SoShape* SoShape337 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance338 = new SoVRMLAppearance();
SoMaterial* SoMaterial339 = new SoMaterial();
SoMaterial339->setUSE(QString("WetShirtColor"));
SoVRMLAppearance338->addChild(*SoMaterial339);

SoShape337->addChild(*SoVRMLAppearance338);

SoIndexedFaceSet* SoIndexedFaceSet340 = new SoIndexedFaceSet();
SoIndexedFaceSet340->setCreaseAngle(1.75);
SoIndexedFaceSet340->setCoordIndex(new int32_t[]{2,1,0,-1,2,3,1,-1,2,4,3,-1,2,5,4,-1,2,6,5,-1,2,0,6,-1,7,6,0,-1,8,5,6,-1,9,4,5,-1,9,3,4,-1,10,1,3,-1,11,0,1,-1,0,11,7,-1,1,10,11,-1,3,9,10,-1,5,12,9,-1,5,8,12,-1,6,7,8,-1,17,16,15,-1,14,17,15,-1,14,18,17,-1,13,18,14,-1,16,17,10,-1,16,10,9,-1,15,16,9,-1,15,9,12,-1,18,13,7,-1,18,7,11,-1,13,14,8,-1,13,8,7,-1,14,15,8,-1,15,12,8,-1,17,18,10,-1,18,11,10,-1}, 136);
SoCoordinate* SoCoordinate341 = new SoCoordinate();
SoCoordinate341->setPoint(new float[]{0.177,1.09,-0.0609,0.202,1.1,-0.0566,0.189,1.1,-0.0395,0.213,1.1,-0.025,0.203,1.1,-0.0158,0.182,1.09,-0.00563,0.167,1.09,-0.0325,0.176,1.08,-0.0781,0.16,1.06,-0.0373,0.214,1.07,-0.00402,0.228,1.07,-0.0319,0.208,1.08,-0.0765,0.179,1.07,-0.00294,0.21,0.818,-0.0615,0.201,0.82,-0.0405,0.205,0.819,-0.00832,0.224,0.818,-0.00778,0.237,0.82,-0.0282,0.231,0.819,-0.0609}, 57);
SoIndexedFaceSet340->setCoord(*SoCoordinate341);

SoShape337->setGeometry(*SoIndexedFaceSet340);

SoTransform336->addChild(*SoShape337);

SoField335->addChild(*SoTransform336);

SoProtoInstance334->addChild(*SoField335);

SoField* SoField342 = new SoField();
SoField342->setName(QString("name"));
SoField342->setValue(QString("l_forearm"));
SoProtoInstance334->addChild(*SoField342);

SoField333->addChild(*SoProtoInstance334);

SoProtoInstance* SoProtoInstance343 = new SoProtoInstance();
SoProtoInstance343->setDEF(QString("hanim_l_wrist"));
SoProtoInstance343->setName(QString("Joint"));
SoField* SoField344 = new SoField();
SoField344->setName(QString("center"));
SoField344->setValue(QString("0.213 0.811 -0.0338"));
SoProtoInstance343->addChild(*SoField344);

SoField* SoField345 = new SoField();
SoField345->setName(QString("children"));
SoProtoInstance* SoProtoInstance346 = new SoProtoInstance();
SoProtoInstance346->setDEF(QString("hanim_l_hand"));
SoProtoInstance346->setName(QString("Segment"));
SoField* SoField347 = new SoField();
SoField347->setName(QString("children"));
SoTransform* SoTransform348 = new SoTransform();
SoTransform348->setDEF(QString("l_hand_adjust"));
SoTransform348->setTranslation(new float[]{0.0,0.005142,-0.008662});
SoTransform348->setRotation(new float[]{-0.06361,-0.9967,0.04988,1.333});
SoTransform348->setCenter(new float[]{0.213,0.811,-0.0338});
SoShape* SoShape349 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance350 = new SoVRMLAppearance();
SoMaterial* SoMaterial351 = new SoMaterial();
SoMaterial351->setDEF(QString("Skin_Color"));
SoMaterial351->setAmbientIntensity(0.25);
SoMaterial351->setDiffuseColor(new float[]{0.749,0.601,0.462});
SoVRMLAppearance350->addChild(*SoMaterial351);

SoShape349->addChild(*SoVRMLAppearance350);

SoIndexedFaceSet* SoIndexedFaceSet352 = new SoIndexedFaceSet();
SoIndexedFaceSet352->setCreaseAngle(1.48);
SoIndexedFaceSet352->setCoordIndex(new int32_t[]{2,1,0,-1,5,4,3,-1,3,7,6,-1,2,3,6,-1,7,9,8,-1,6,7,8,-1,9,11,10,-1,8,9,10,-1,11,13,12,-1,10,11,12,-1,13,15,14,-1,12,13,14,-1,15,17,16,-1,14,15,16,-1,17,19,18,-1,16,17,18,-1,19,21,20,-1,18,19,20,-1,31,4,1,-1,4,5,0,-1,1,4,0,-1,5,3,2,-1,0,5,2,-1,26,25,24,-1,26,24,23,-1,27,26,23,-1,28,27,23,-1,28,23,22,-1,29,28,22,-1,29,22,21,-1,30,29,21,-1,15,13,11,-1,17,15,11,-1,19,17,11,-1,19,11,9,-1,31,19,9,-1,31,9,7,-1,4,31,7,-1,4,7,3,-1,30,21,19,-1,31,30,19,-1,12,14,16,-1,10,12,16,-1,10,16,18,-1,8,10,18,-1,6,8,1,-1,2,6,1,-1,39,38,37,-1,37,38,40,-1,37,40,36,-1,36,40,41,-1,36,41,35,-1,35,41,42,-1,35,42,34,-1,34,42,43,-1,34,43,33,-1,33,43,44,-1,33,44,32,-1,20,32,44,-1,20,44,45,-1,20,45,46,-1,47,8,18,-1,47,18,20,-1,47,20,46,-1,8,47,1,-1,22,33,32,-1,23,35,34,-1,23,36,35,-1,37,24,25,-1,40,38,27,-1,29,43,42,-1,45,44,30,-1,47,31,1,-1,47,46,31,-1,29,30,43,-1,30,44,43,-1,45,31,46,-1,45,30,31,-1,28,29,41,-1,29,42,41,-1,28,40,27,-1,28,41,40,-1,26,27,39,-1,27,38,39,-1,25,39,37,-1,25,26,39,-1,24,36,23,-1,24,37,36,-1,23,34,22,-1,34,33,22,-1,22,32,21,-1,32,20,21,-1}, 368);
SoCoordinate* SoCoordinate353 = new SoCoordinate();
SoCoordinate353->setPoint(new float[]{0.211,0.828,-0.0434,0.194,0.81,-0.0445,0.237,0.82,-0.0425,0.236,0.82,-0.0237,0.194,0.81,-0.0254,0.21,0.828,-0.0247,0.252,0.801,-0.0424,0.252,0.801,-0.0231,0.269,0.765,-0.0426,0.268,0.765,-0.0225,0.273,0.732,-0.0395,0.272,0.732,-0.0223,0.27,0.704,-0.0342,0.27,0.704,-0.0224,0.262,0.703,-0.0345,0.261,0.703,-0.0227,0.256,0.717,-0.0389,0.256,0.717,-0.023,0.255,0.738,-0.0408,0.255,0.738,-0.023,0.251,0.734,-0.0406,0.251,0.734,-0.0232,0.251,0.692,-0.0232,0.248,0.657,-0.0233,0.24,0.645,-0.0236,0.226,0.637,-0.0241,0.213,0.639,-0.0246,0.197,0.652,-0.0253,0.188,0.669,-0.0256,0.184,0.697,-0.0258,0.183,0.73,-0.0258,0.187,0.77,-0.0257,0.244,0.696,-0.0375,0.244,0.692,-0.0372,0.242,0.661,-0.0345,0.241,0.658,-0.0343,0.241,0.656,-0.0341,0.231,0.646,-0.0336,0.206,0.65,-0.0349,0.218,0.644,-0.034,0.205,0.652,-0.0352,0.198,0.667,-0.0367,0.195,0.691,-0.039,0.194,0.696,-0.0395,0.193,0.725,-0.042,0.193,0.731,-0.0425,0.197,0.765,-0.0449,0.197,0.77,-0.0453}, 144);
SoIndexedFaceSet352->setCoord(*SoCoordinate353);

SoShape349->setGeometry(*SoIndexedFaceSet352);

SoTransform348->addChild(*SoShape349);

SoField347->addChild(*SoTransform348);

SoProtoInstance346->addChild(*SoField347);

SoField* SoField354 = new SoField();
SoField354->setName(QString("name"));
SoField354->setValue(QString("l_hand"));
SoProtoInstance346->addChild(*SoField354);

SoField345->addChild(*SoProtoInstance346);

SoProtoInstance343->addChild(*SoField345);

SoField* SoField355 = new SoField();
SoField355->setName(QString("name"));
SoField355->setValue(QString("l_wrist"));
SoProtoInstance343->addChild(*SoField355);

SoField333->addChild(*SoProtoInstance343);

SoProtoInstance331->addChild(*SoField333);

SoField* SoField356 = new SoField();
SoField356->setName(QString("name"));
SoField356->setValue(QString("l_elbow"));
SoProtoInstance331->addChild(*SoField356);

SoField321->addChild(*SoProtoInstance331);

SoProtoInstance319->addChild(*SoField321);

SoField* SoField357 = new SoField();
SoField357->setName(QString("name"));
SoField357->setValue(QString("l_shoulder"));
SoProtoInstance319->addChild(*SoField357);

SoField203->addChild(*SoProtoInstance319);

SoProtoInstance* SoProtoInstance358 = new SoProtoInstance();
SoProtoInstance358->setDEF(QString("hanim_r_shoulder"));
SoProtoInstance358->setName(QString("Joint"));
SoField* SoField359 = new SoField();
SoField359->setName(QString("center"));
SoField359->setValue(QString("-0.167 1.36 -0.0458"));
SoProtoInstance358->addChild(*SoField359);

SoField* SoField360 = new SoField();
SoField360->setName(QString("children"));
SoProtoInstance* SoProtoInstance361 = new SoProtoInstance();
SoProtoInstance361->setDEF(QString("hanim_r_upperarm"));
SoProtoInstance361->setName(QString("Segment"));
SoField* SoField362 = new SoField();
SoField362->setName(QString("children"));
SoTransform* SoTransform363 = new SoTransform();
SoTransform363->setDEF(QString("r_upperarm_adjust"));
SoTransform363->setTranslation(new float[]{0.0,0.000589,-0.01169});
SoTransform363->setRotation(new float[]{1.0,0.0,0.0,0.0836});
SoTransform363->setCenter(new float[]{-0.182,1.22,-0.047});
SoShape* SoShape364 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance365 = new SoVRMLAppearance();
SoMaterial* SoMaterial366 = new SoMaterial();
SoMaterial366->setUSE(QString("WetShirtColor"));
SoVRMLAppearance365->addChild(*SoMaterial366);

SoShape364->addChild(*SoVRMLAppearance365);

SoIndexedFaceSet* SoIndexedFaceSet367 = new SoIndexedFaceSet();
SoIndexedFaceSet367->setCreaseAngle(1.53);
SoIndexedFaceSet367->setCoordIndex(new int32_t[]{14,10,20,-1,10,13,20,-1,13,22,20,-1,19,14,20,-1,14,19,12,-1,19,20,24,-1,20,22,25,-1,22,13,25,-1,13,10,11,-1,10,14,5,-1,12,5,14,-1,5,11,10,-1,11,25,13,-1,25,24,20,-1,24,12,19,-1,12,24,9,-1,25,11,8,-1,11,5,2,-1,5,12,9,-1,9,2,5,-1,2,8,11,-1,8,23,25,-1,23,27,25,-1,21,9,24,-1,9,21,7,-1,27,23,18,-1,23,8,18,-1,8,2,6,-1,2,9,7,-1,7,1,2,-1,1,6,2,-1,6,18,8,-1,18,26,27,-1,16,7,21,-1,7,16,4,-1,16,26,17,-1,26,18,15,-1,18,6,3,-1,6,1,0,-1,1,7,0,-1,4,0,7,-1,0,3,6,-1,3,15,18,-1,15,17,26,-1,17,4,16,-1,3,0,15,-1,15,0,4,-1,15,4,17,-1,25,27,24,-1,27,21,24,-1,27,26,21,-1,26,16,21,-1}, 208);
SoCoordinate* SoCoordinate368 = new SoCoordinate();
SoCoordinate368->setPoint(new float[]{-0.221,1.08,-0.0352,-0.214,1.14,-0.0405,-0.209,1.26,-0.0427,-0.208,1.07,-0.00133,-0.203,1.08,-0.0744,-0.201,1.33,-0.0411,-0.198,1.14,-0.0024,-0.198,1.13,-0.076,-0.19,1.26,-0.00401,-0.189,1.26,-0.0808,-0.185,1.38,-0.0395,-0.185,1.33,-0.00025,-0.182,1.33,-0.0728,-0.174,1.37,-0.0158,-0.174,1.37,-0.0625,-0.169,1.08,-0.00885,-0.167,1.13,-0.0744,-0.162,1.05,-0.0561,-0.16,1.13,-0.000793,-0.157,1.38,-0.0733,-0.156,1.39,-0.0464,-0.155,1.26,-0.0867,-0.154,1.37,-0.0185,-0.151,1.26,-0.000789,-0.151,1.33,-0.0937,-0.15,1.34,-0.000787,-0.15,1.13,-0.0411,-0.141,1.26,-0.0421}, 84);
SoIndexedFaceSet367->setCoord(*SoCoordinate368);

SoShape364->setGeometry(*SoIndexedFaceSet367);

SoTransform363->addChild(*SoShape364);

SoField362->addChild(*SoTransform363);

SoProtoInstance361->addChild(*SoField362);

SoField* SoField369 = new SoField();
SoField369->setName(QString("name"));
SoField369->setValue(QString("r_upperarm"));
SoProtoInstance361->addChild(*SoField369);

SoField360->addChild(*SoProtoInstance361);

SoProtoInstance* SoProtoInstance370 = new SoProtoInstance();
SoProtoInstance370->setDEF(QString("hanim_r_elbow"));
SoProtoInstance370->setName(QString("Joint"));
SoField* SoField371 = new SoField();
SoField371->setName(QString("center"));
SoField371->setValue(QString("-0.192 1.07 -0.0498"));
SoProtoInstance370->addChild(*SoField371);

SoField* SoField372 = new SoField();
SoField372->setName(QString("children"));
SoProtoInstance* SoProtoInstance373 = new SoProtoInstance();
SoProtoInstance373->setDEF(QString("hanim_r_forearm"));
SoProtoInstance373->setName(QString("Segment"));
SoField* SoField374 = new SoField();
SoField374->setName(QString("children"));
SoTransform* SoTransform375 = new SoTransform();
SoTransform375->setDEF(QString("r_forearm_adjust"));
SoTransform375->setTranslation(new float[]{0.0,0.003466,-0.01065});
SoTransform375->setRotation(new float[]{-1.0,0.0,0.0,0.1254});
SoTransform375->setCenter(new float[]{-0.198,0.961,-0.0397});
SoShape* SoShape376 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance377 = new SoVRMLAppearance();
SoMaterial* SoMaterial378 = new SoMaterial();
SoMaterial378->setUSE(QString("WetShirtColor"));
SoVRMLAppearance377->addChild(*SoMaterial378);

SoShape376->addChild(*SoVRMLAppearance377);

SoIndexedFaceSet* SoIndexedFaceSet379 = new SoIndexedFaceSet();
SoIndexedFaceSet379->setCreaseAngle(1.73);
SoIndexedFaceSet379->setCoordIndex(new int32_t[]{20,13,15,-1,13,8,15,-1,8,12,15,-1,12,18,15,-1,18,22,15,-1,22,20,15,-1,20,22,21,-1,22,18,24,-1,18,12,7,-1,12,8,7,-1,8,13,3,-1,13,20,10,-1,21,10,20,-1,10,3,13,-1,3,7,8,-1,7,19,18,-1,19,24,18,-1,24,21,22,-1,21,24,23,-1,24,19,16,-1,19,7,6,-1,7,3,1,-1,3,10,5,-1,10,21,17,-1,17,5,10,-1,5,1,3,-1,1,6,7,-1,6,16,19,-1,16,23,24,-1,23,17,21,-1,1,5,2,-1,5,17,9,-1,9,2,5,-1,1,4,6,-1,4,16,6,-1,23,9,17,-1,9,23,14,-1,23,16,11,-1,4,11,16,-1,11,14,23,-1,11,4,0,-1,11,0,14,-1,0,2,14,-1,14,2,9,-1,2,0,1,-1,0,4,1,-1}, 184);
SoCoordinate* SoCoordinate380 = new SoCoordinate();
SoCoordinate380->setPoint(new float[]{-0.237,0.82,-0.0282,-0.235,1.02,-0.033,-0.231,0.819,-0.0609,-0.228,1.07,-0.0319,-0.224,0.818,-0.00778,-0.221,1.01,-0.0744,-0.218,1.01,-0.00133,-0.214,1.07,-0.00402,-0.213,1.1,-0.025,-0.21,0.818,-0.0615,-0.208,1.08,-0.0765,-0.205,0.819,-0.00832,-0.203,1.1,-0.0158,-0.202,1.1,-0.0566,-0.201,0.82,-0.0405,-0.189,1.1,-0.0395,-0.183,1.01,-0.00831,-0.183,1.01,-0.0781,-0.182,1.09,-0.00563,-0.179,1.07,-0.00294,-0.177,1.09,-0.0609,-0.176,1.08,-0.0781,-0.167,1.09,-0.0325,-0.166,1.0,-0.0405,-0.16,1.06,-0.0373}, 75);
SoIndexedFaceSet379->setCoord(*SoCoordinate380);

SoShape376->setGeometry(*SoIndexedFaceSet379);

SoTransform375->addChild(*SoShape376);

SoField374->addChild(*SoTransform375);

SoProtoInstance373->addChild(*SoField374);

SoField* SoField381 = new SoField();
SoField381->setName(QString("name"));
SoField381->setValue(QString("r_forearm"));
SoProtoInstance373->addChild(*SoField381);

SoField372->addChild(*SoProtoInstance373);

SoProtoInstance* SoProtoInstance382 = new SoProtoInstance();
SoProtoInstance382->setDEF(QString("hanim_r_wrist"));
SoProtoInstance382->setName(QString("Joint"));
SoField* SoField383 = new SoField();
SoField383->setName(QString("center"));
SoField383->setValue(QString("-0.217 0.811 -0.0338"));
SoProtoInstance382->addChild(*SoField383);

SoField* SoField384 = new SoField();
SoField384->setName(QString("children"));
SoProtoInstance* SoProtoInstance385 = new SoProtoInstance();
SoProtoInstance385->setDEF(QString("hanim_r_hand"));
SoProtoInstance385->setName(QString("Segment"));
SoField* SoField386 = new SoField();
SoField386->setName(QString("children"));
SoTransform* SoTransform387 = new SoTransform();
SoTransform387->setDEF(QString("r_hand_adjust"));
SoTransform387->setRotation(new float[]{-0.09024,0.994,-0.0624,1.216});
SoTransform387->setCenter(new float[]{-0.217,0.811,-0.0338});
SoShape* SoShape388 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance389 = new SoVRMLAppearance();
SoMaterial* SoMaterial390 = new SoMaterial();
SoMaterial390->setUSE(QString("Skin_Color"));
SoVRMLAppearance389->addChild(*SoMaterial390);

SoShape388->addChild(*SoVRMLAppearance389);

SoIndexedFaceSet* SoIndexedFaceSet391 = new SoIndexedFaceSet();
SoIndexedFaceSet391->setCreaseAngle(1.57);
SoIndexedFaceSet391->setCoordIndex(new int32_t[]{10,9,0,-1,11,30,31,-1,1,12,11,-1,1,11,0,-1,2,13,12,-1,2,12,1,-1,3,14,13,-1,3,13,2,-1,4,15,14,-1,4,14,3,-1,5,16,15,-1,5,15,4,-1,6,17,16,-1,6,16,5,-1,7,18,17,-1,7,17,6,-1,8,19,18,-1,8,18,7,-1,10,31,30,-1,10,30,9,-1,0,11,31,-1,0,31,10,-1,22,23,24,-1,21,22,24,-1,21,24,25,-1,21,25,26,-1,20,21,26,-1,20,26,27,-1,19,20,27,-1,19,27,28,-1,14,15,16,-1,14,16,17,-1,14,17,18,-1,13,14,18,-1,13,18,29,-1,12,13,29,-1,12,29,30,-1,11,12,30,-1,18,19,28,-1,18,28,29,-1,6,5,4,-1,6,4,3,-1,7,6,3,-1,7,3,2,-1,9,2,1,-1,9,1,0,-1,32,38,33,-1,33,38,39,-1,33,39,34,-1,34,39,40,-1,34,40,35,-1,35,40,41,-1,35,41,36,-1,36,41,42,-1,36,42,37,-1,37,42,43,-1,37,43,44,-1,44,43,8,-1,44,8,45,-1,45,8,46,-1,46,8,7,-1,46,7,2,-1,46,2,47,-1,9,47,2,-1,25,34,35,-1,25,33,34,-1,25,24,33,-1,24,32,33,-1,32,24,23,-1,40,39,21,-1,41,40,21,-1,43,19,8,-1,43,20,19,-1,43,42,20,-1,21,20,41,-1,20,42,41,-1,38,22,39,-1,22,21,39,-1,32,23,38,-1,23,22,38,-1,26,25,35,-1,27,36,37,-1,27,37,28,-1,37,44,28,-1,26,35,27,-1,35,36,27,-1,28,44,45,-1,29,46,47,-1,29,9,30,-1,29,47,9,-1,28,45,29,-1,45,46,29,-1}, 368);
SoCoordinate* SoCoordinate392 = new SoCoordinate();
SoCoordinate392->setPoint(new float[]{-0.237,0.82,-0.0425,-0.252,0.801,-0.0424,-0.269,0.765,-0.0426,-0.273,0.732,-0.0395,-0.27,0.704,-0.0342,-0.262,0.703,-0.0345,-0.256,0.717,-0.0389,-0.255,0.738,-0.0408,-0.251,0.734,-0.0406,-0.194,0.81,-0.0445,-0.211,0.828,-0.0434,-0.236,0.82,-0.0237,-0.252,0.801,-0.0231,-0.268,0.765,-0.0225,-0.272,0.732,-0.0223,-0.27,0.704,-0.0224,-0.261,0.703,-0.0227,-0.256,0.717,-0.023,-0.255,0.738,-0.023,-0.251,0.734,-0.0232,-0.251,0.692,-0.0232,-0.248,0.657,-0.0233,-0.24,0.645,-0.0236,-0.226,0.637,-0.0241,-0.213,0.639,-0.0246,-0.197,0.652,-0.0253,-0.188,0.669,-0.0256,-0.184,0.697,-0.0258,-0.183,0.73,-0.0258,-0.187,0.77,-0.0257,-0.194,0.81,-0.0254,-0.21,0.828,-0.0247,-0.221,0.641,-0.0336,-0.21,0.65,-0.0348,-0.206,0.652,-0.0352,-0.198,0.667,-0.0368,-0.193,0.692,-0.0392,-0.192,0.696,-0.0396,-0.231,0.646,-0.0336,-0.238,0.656,-0.0342,-0.24,0.658,-0.0344,-0.24,0.662,-0.0347,-0.243,0.692,-0.0372,-0.243,0.696,-0.0376,-0.192,0.725,-0.0421,-0.192,0.73,-0.0426,-0.195,0.766,-0.0451,-0.196,0.77,-0.0454}, 144);
SoIndexedFaceSet391->setCoord(*SoCoordinate392);

SoShape388->setGeometry(*SoIndexedFaceSet391);

SoTransform387->addChild(*SoShape388);

SoField386->addChild(*SoTransform387);

SoProtoInstance385->addChild(*SoField386);

SoField* SoField393 = new SoField();
SoField393->setName(QString("name"));
SoField393->setValue(QString("r_hand"));
SoProtoInstance385->addChild(*SoField393);

SoField384->addChild(*SoProtoInstance385);

SoProtoInstance382->addChild(*SoField384);

SoField* SoField394 = new SoField();
SoField394->setName(QString("name"));
SoField394->setValue(QString("r_wrist"));
SoProtoInstance382->addChild(*SoField394);

SoField372->addChild(*SoProtoInstance382);

SoProtoInstance370->addChild(*SoField372);

SoField* SoField395 = new SoField();
SoField395->setName(QString("name"));
SoField395->setValue(QString("r_elbow"));
SoProtoInstance370->addChild(*SoField395);

SoField360->addChild(*SoProtoInstance370);

SoProtoInstance358->addChild(*SoField360);

SoField* SoField396 = new SoField();
SoField396->setName(QString("name"));
SoField396->setValue(QString("r_shoulder"));
SoProtoInstance358->addChild(*SoField396);

SoField203->addChild(*SoProtoInstance358);

SoProtoInstance* SoProtoInstance397 = new SoProtoInstance();
SoProtoInstance397->setDEF(QString("hanim_vc4"));
SoProtoInstance397->setName(QString("Joint"));
SoField* SoField398 = new SoField();
SoField398->setName(QString("center"));
SoField398->setValue(QString("0 1.43 -0.0458"));
SoProtoInstance397->addChild(*SoField398);

SoField* SoField399 = new SoField();
SoField399->setName(QString("children"));
SoProtoInstance* SoProtoInstance400 = new SoProtoInstance();
SoProtoInstance400->setDEF(QString("hanim_c4"));
SoProtoInstance400->setName(QString("Segment"));
SoField* SoField401 = new SoField();
SoField401->setName(QString("children"));
SoShape* SoShape402 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance403 = new SoVRMLAppearance();
SoMaterial* SoMaterial404 = new SoMaterial();
SoMaterial404->setUSE(QString("WetShirtColor"));
SoVRMLAppearance403->addChild(*SoMaterial404);

SoShape402->addChild(*SoVRMLAppearance403);

SoIndexedFaceSet* SoIndexedFaceSet405 = new SoIndexedFaceSet();
SoIndexedFaceSet405->setDEF(QString("neck"));
SoIndexedFaceSet405->setCreaseAngle(1.91);
SoIndexedFaceSet405->setCoordIndex(new int32_t[]{6,5,2,-1,6,2,3,-1,5,4,1,-1,5,1,2,-1,4,7,0,-1,4,0,1,-1,11,10,9,-1,11,9,8,-1,10,13,12,-1,10,12,9,-1,13,15,14,-1,13,14,12,-1,6,3,11,-1,6,11,8,-1,7,14,15,-1,7,15,0,-1,2,10,11,-1,2,11,3,-1,2,1,13,-1,2,13,10,-1,1,0,15,-1,1,15,13,-1,9,5,6,-1,9,6,8,-1,9,12,4,-1,9,4,5,-1,12,14,7,-1,12,7,4,-1}, 112);
SoCoordinate* SoCoordinate406 = new SoCoordinate();
SoCoordinate406->setPoint(new float[]{0.0105,1.54,-0.1,0.0357,1.54,-0.0685,0.0382,1.55,-0.0474,0.0105,1.55,-0.0204,0.0373,1.4,-0.0593,0.0577,1.4,-0.0266,0.0158,1.4,0.00512,0.0132,1.41,-0.0824,-0.0158,1.4,0.00512,-0.0577,1.4,-0.0266,-0.0382,1.55,-0.0474,-0.0105,1.55,-0.0204,-0.0373,1.4,-0.0593,-0.0357,1.54,-0.0685,-0.0132,1.41,-0.0824,-0.0105,1.54,-0.1}, 48);
SoIndexedFaceSet405->setCoord(*SoCoordinate406);

SoShape402->setGeometry(*SoIndexedFaceSet405);

SoField401->addChild(*SoShape402);

SoProtoInstance400->addChild(*SoField401);

SoField* SoField407 = new SoField();
SoField407->setName(QString("name"));
SoField407->setValue(QString("c4"));
SoProtoInstance400->addChild(*SoField407);

SoField399->addChild(*SoProtoInstance400);

SoProtoInstance* SoProtoInstance408 = new SoProtoInstance();
SoProtoInstance408->setDEF(QString("hanim_skullbase"));
SoProtoInstance408->setName(QString("Joint"));
SoField* SoField409 = new SoField();
SoField409->setName(QString("center"));
SoField409->setValue(QString("0 1.54 -0.0409"));
SoProtoInstance408->addChild(*SoField409);

SoField* SoField410 = new SoField();
SoField410->setName(QString("children"));
SoProtoInstance* SoProtoInstance411 = new SoProtoInstance();
SoProtoInstance411->setDEF(QString("hanim_skull"));
SoProtoInstance411->setName(QString("Segment"));
SoField* SoField412 = new SoField();
SoField412->setName(QString("children"));
SoShape* SoShape413 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance414 = new SoVRMLAppearance();
SoMaterial* SoMaterial415 = new SoMaterial();
SoMaterial415->setUSE(QString("Skin_Color"));
SoVRMLAppearance414->addChild(*SoMaterial415);

SoShape413->addChild(*SoVRMLAppearance414);

SoIndexedFaceSet* SoIndexedFaceSet416 = new SoIndexedFaceSet();
SoIndexedFaceSet416->setDEF(QString("headIFS"));
SoIndexedFaceSet416->setCreaseAngle(0.7854);
SoIndexedFaceSet416->setColorIndex(new int[]{1,1,1,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,1,1,1,-1,1,1,1,-1,0,0,0,-1,1,1,1,-1,1,1,1,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,1,1,1,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,1,1,1,-1,1,1,1,-1,1,1,1,-1,1,1,1,-1,1,1,1,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,4,4,4,-1,0,0,0,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,0,0,0,-1,0,0,0,-1,4,4,4,-1,0,0,0,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,0,0,0,-1,0,0,0,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1}, 1640);
SoIndexedFaceSet416->setCoordIndex(new int32_t[]{48,87,58,-1,91,92,59,-1,59,92,88,-1,88,93,231,-1,232,86,233,-1,86,89,233,-1,89,57,56,-1,49,55,57,-1,102,86,96,-1,86,90,96,-1,97,95,96,-1,97,127,95,-1,41,96,154,-1,41,102,96,-1,99,102,41,-1,153,99,41,-1,102,40,86,-1,234,235,236,-1,87,237,58,-1,56,57,91,-1,87,234,237,-1,234,236,237,-1,89,49,57,-1,49,50,55,-1,40,89,86,-1,89,56,233,-1,232,90,86,-1,90,97,96,-1,92,93,88,-1,93,94,231,-1,232,231,94,-1,97,90,232,-1,96,42,154,-1,95,42,96,-1,53,46,45,-1,53,45,51,-1,53,51,92,-1,92,51,52,-1,92,52,93,-1,94,93,52,-1,94,52,4,-1,97,232,94,-1,54,47,46,-1,54,46,53,-1,55,47,54,-1,50,47,55,-1,34,33,50,-1,34,50,49,-1,35,34,49,-1,35,49,89,-1,35,89,40,-1,99,39,102,-1,39,35,40,-1,31,34,35,-1,31,35,32,-1,14,32,35,-1,14,35,39,-1,14,39,98,-1,137,38,153,-1,38,99,153,-1,38,98,99,-1,37,238,239,-1,11,238,37,-1,101,37,36,-1,241,141,242,-1,10,12,242,-1,12,13,14,-1,12,14,243,-1,13,15,32,-1,13,32,14,-1,15,16,31,-1,15,31,32,-1,2,70,10,-1,2,10,141,-1,70,69,12,-1,70,12,10,-1,69,68,13,-1,69,13,12,-1,68,67,15,-1,68,15,13,-1,67,66,16,-1,67,16,15,-1,98,39,99,-1,101,11,37,-1,100,101,36,-1,36,244,240,-1,141,10,242,-1,12,243,242,-1,36,37,239,-1,36,239,244,-1,57,55,91,-1,55,54,91,-1,39,40,102,-1,123,103,120,-1,114,122,104,-1,115,122,114,-1,208,105,115,-1,210,119,211,-1,210,106,119,-1,116,107,106,-1,107,108,117,-1,126,119,109,-1,126,110,119,-1,126,95,125,-1,95,127,125,-1,154,126,111,-1,126,109,111,-1,111,109,112,-1,111,112,153,-1,119,113,109,-1,207,213,214,-1,123,209,103,-1,213,212,214,-1,209,214,103,-1,209,207,214,-1,107,117,106,-1,108,118,117,-1,119,106,113,-1,210,116,106,-1,119,110,211,-1,126,125,110,-1,115,105,122,-1,208,124,105,-1,124,208,211,-1,211,110,125,-1,154,42,126,-1,126,42,95,-1,168,128,121,-1,170,168,121,-1,122,170,121,-1,172,170,122,-1,105,172,122,-1,172,105,124,-1,4,172,124,-1,124,211,125,-1,128,130,129,-1,121,128,129,-1,129,130,108,-1,108,130,118,-1,118,131,132,-1,117,118,132,-1,117,132,133,-1,106,117,133,-1,113,106,133,-1,109,152,112,-1,113,133,152,-1,133,132,134,-1,135,133,134,-1,133,135,136,-1,152,133,136,-1,148,152,136,-1,153,138,137,-1,153,112,138,-1,112,148,138,-1,219,217,139,-1,36,240,149,-1,139,217,140,-1,149,139,151,-1,36,149,100,-1,220,141,241,-1,220,150,142,-1,136,143,150,-1,221,136,150,-1,135,144,143,-1,136,135,143,-1,134,158,144,-1,135,134,144,-1,142,161,2,-1,141,142,2,-1,150,145,161,-1,142,150,161,-1,143,146,145,-1,150,143,145,-1,144,147,146,-1,143,144,146,-1,158,160,147,-1,144,158,147,-1,112,152,148,-1,139,140,151,-1,149,151,100,-1,240,218,149,-1,220,142,141,-1,220,221,150,-1,219,139,149,-1,218,219,149,-1,104,108,107,-1,104,129,108,-1,109,113,152,-1,153,41,111,-1,129,104,122,-1,129,122,121,-1,91,54,92,-1,54,53,92,-1,97,94,127,-1,127,94,4,-1,125,127,124,-1,127,4,124,-1,154,111,41,-1,31,30,33,-1,31,33,34,-1,16,17,30,-1,16,30,31,-1,66,65,17,-1,66,17,16,-1,2,73,156,-1,2,156,70,-1,156,72,66,-1,156,66,67,-1,156,67,68,-1,156,68,69,-1,156,69,70,-1,72,71,65,-1,72,65,66,-1,17,18,30,-1,45,44,51,-1,51,44,43,-1,51,43,52,-1,52,43,1,-1,52,1,4,-1,245,246,27,-1,245,27,3,-1,246,247,28,-1,246,28,27,-1,248,22,29,-1,248,29,28,-1,248,28,247,-1,27,26,0,-1,27,0,3,-1,27,28,25,-1,27,25,26,-1,29,24,25,-1,29,25,28,-1,22,23,24,-1,22,24,29,-1,249,250,22,-1,249,22,248,-1,250,60,23,-1,250,23,22,-1,17,254,18,-1,65,254,17,-1,71,64,65,-1,63,74,75,-1,63,75,61,-1,64,255,254,-1,75,62,61,-1,62,76,60,-1,76,77,23,-1,76,23,60,-1,77,24,23,-1,77,78,25,-1,77,25,24,-1,78,84,26,-1,78,26,25,-1,84,192,0,-1,84,0,26,-1,84,83,193,-1,84,193,192,-1,79,83,84,-1,79,84,78,-1,76,79,78,-1,76,78,77,-1,80,83,79,-1,80,204,83,-1,75,81,80,-1,81,85,204,-1,81,204,80,-1,74,81,75,-1,74,82,81,-1,82,5,85,-1,82,85,81,-1,155,8,71,-1,155,71,72,-1,8,6,64,-1,8,64,71,-1,6,7,255,-1,6,255,64,-1,7,9,256,-1,7,256,255,-1,9,257,256,-1,73,155,156,-1,155,72,156,-1,204,193,83,-1,64,254,65,-1,131,157,134,-1,132,131,134,-1,157,159,158,-1,134,157,158,-1,159,206,160,-1,158,159,160,-1,203,73,2,-1,161,203,2,-1,160,162,203,-1,147,160,203,-1,146,147,203,-1,145,146,203,-1,161,145,203,-1,206,163,162,-1,160,206,162,-1,157,164,159,-1,170,169,168,-1,171,169,170,-1,172,171,170,-1,1,171,172,-1,4,1,172,-1,173,227,245,-1,3,173,245,-1,174,226,227,-1,173,174,227,-1,176,175,215,-1,174,176,215,-1,226,174,215,-1,0,177,173,-1,3,0,173,-1,178,174,173,-1,177,178,173,-1,178,179,176,-1,174,178,176,-1,179,180,175,-1,176,179,175,-1,175,225,216,-1,215,175,216,-1,180,181,225,-1,175,180,225,-1,164,228,159,-1,159,228,206,-1,206,185,163,-1,187,186,184,-1,183,187,184,-1,228,229,185,-1,183,182,187,-1,181,188,182,-1,180,189,188,-1,181,180,188,-1,180,179,189,-1,178,190,189,-1,179,178,189,-1,177,191,190,-1,178,177,190,-1,0,192,191,-1,177,0,191,-1,193,205,191,-1,192,193,191,-1,191,205,194,-1,190,191,194,-1,190,194,188,-1,189,190,188,-1,194,205,195,-1,205,204,195,-1,195,196,187,-1,204,85,196,-1,195,204,196,-1,187,196,186,-1,196,197,186,-1,85,5,197,-1,196,85,197,-1,163,198,202,-1,162,163,202,-1,185,199,198,-1,163,185,198,-1,229,200,199,-1,185,229,199,-1,230,201,200,-1,229,230,200,-1,230,257,201,-1,203,202,73,-1,203,162,202,-1,205,193,204,-1,206,228,185,-1,198,8,155,-1,198,155,202,-1,155,73,202,-1,199,6,8,-1,199,8,198,-1,7,6,199,-1,7,199,200,-1,201,9,7,-1,201,7,200,-1,201,257,9,-1,188,194,195,-1,188,195,182,-1,195,187,182,-1,80,79,76,-1,80,62,75,-1,80,76,62,-1,47,50,33,-1,131,118,130,-1,20,21,47,-1,21,46,47,-1,20,33,19,-1,20,47,33,-1,33,30,19,-1,30,18,19,-1,62,60,251,-1,60,250,251,-1,252,61,251,-1,61,62,251,-1,252,63,61,-1,252,253,63,-1,166,130,167,-1,130,128,167,-1,166,131,130,-1,166,165,131,-1,165,157,131,-1,165,164,157,-1,224,181,182,-1,224,225,181,-1,224,183,223,-1,224,182,183,-1,183,184,223,-1,184,222,223,-1}, 1640);
SoColor* SoColor417 = new SoColor();
SoColor417->setColor(new float[]{0.749,0.601,0.462,0.1735,0.2602,0.749,0.6364,0.133,0.1526,0.4545,0.2759,0.1902,0.0,0.0,0.502}, 15);
SoIndexedFaceSet416->setColor(*SoColor417);

SoCoordinate* SoCoordinate418 = new SoCoordinate();
SoCoordinate418->setDEF(QString("Face"));
SoCoordinate418->setPoint(new float[]{0.0,1.708,-0.0435,0.0,1.655,0.04322,0.0,1.486,0.02335,0.0,1.694,0.007789,0.0,1.631,0.051,0.0,1.524,-0.102,0.04,1.51,-0.07278,0.04029,1.514,-0.08254,0.03528,1.502,-0.05013,0.03479,1.517,-0.09269,0.0116,1.494,0.03382,0.01946,1.52,0.03421,0.02204,1.494,0.0272,0.02734,1.498,0.02215,0.02788,1.528,0.03084,0.0338,1.503,0.0124,0.04008,1.509,0.002821,0.05122,1.518,-0.02784,0.05867,1.544,-0.03316,0.06433,1.563,-0.03678,0.06732,1.583,-0.03683,0.06769,1.617,-0.03436,0.06641,1.637,-0.03046,0.06818,1.637,-0.04285,0.06308,1.666,-0.04036,0.05305,1.685,-0.03987,0.03136,1.7,-0.0413,0.02919,1.688,0.0091,0.05272,1.674,-0.001657,0.06061,1.66,-0.0101,0.05254,1.541,-0.01363,0.04099,1.527,0.008832,0.03528,1.524,0.02097,0.05792,1.557,-0.004307,0.04413,1.539,0.0149,0.03746,1.539,0.02656,0.003407,1.524,0.04155,0.01481,1.526,0.03912,0.005112,1.532,0.04358,0.02438,1.542,0.03578,0.02636,1.55,0.03808,0.006135,1.55,0.0545,0.0,1.559,0.05502,0.02958,1.651,0.03965,0.04847,1.643,0.02895,0.05856,1.63,0.01803,0.06182,1.614,0.008199,0.06194,1.6,0.002668,0.01489,1.583,0.04109,0.05282,1.569,0.02821,0.05767,1.58,0.0184,0.04643,1.625,0.03705,0.0264,1.628,0.04807,0.0556,1.609,0.02579,0.05467,1.599,0.02153,0.05316,1.589,0.0207,0.03603,1.58,0.03536,0.04597,1.586,0.02904,0.02106,1.592,0.03748,0.03428,1.595,0.03294,0.06808,1.617,-0.06112,0.06714,1.564,-0.07003,0.06993,1.594,-0.08238,0.05324,1.536,-0.05922,0.04904,1.521,-0.05132,0.04758,1.514,-0.03107,0.03539,1.503,-0.00093,0.02999,1.498,0.006194,0.02308,1.492,0.01628,0.01772,1.488,0.02135,0.01378,1.488,0.02484,0.04349,1.512,-0.03987,0.02308,1.499,-0.02088,0.0,1.487,-0.018,0.04795,1.531,-0.08973,0.05739,1.555,-0.0982,0.06815,1.622,-0.107,0.06872,1.655,-0.08466,0.05233,1.678,-0.09642,0.05334,1.631,-0.1239,0.05011,1.581,-0.1193,0.04359,1.551,-0.1067,0.03839,1.528,-0.09652,0.03399,1.636,-0.1304,0.03224,1.685,-0.1024,0.0,1.557,-0.1126,0.01864,1.566,0.04105,0.0249,1.58,0.0387,0.02735,1.596,0.03552,0.04317,1.564,0.03643,0.01246,1.577,0.04276,0.04354,1.59,0.02822,0.04557,1.601,0.03652,0.0291,1.603,0.04274,0.01856,1.6,0.04349,0.0,1.579,0.04893,0.01064,1.558,0.04476,0.005501,1.578,0.04574,0.01405,1.531,0.04152,0.01037,1.544,0.04266,0.0,1.515,0.03836,0.00797,1.515,0.03774,0.01824,1.55,0.04063,-0.0249,1.58,0.0387,-0.04354,1.59,0.02822,-0.0291,1.603,0.04274,-0.04317,1.564,0.03643,-0.04597,1.586,0.02904,-0.05316,1.589,0.0207,-0.01824,1.55,0.04063,-0.01246,1.577,0.04276,-0.006135,1.55,0.0545,-0.01037,1.544,0.04266,-0.02636,1.55,0.03808,-0.03428,1.595,0.03294,-0.02735,1.596,0.03552,-0.03603,1.58,0.03536,-0.05282,1.569,0.02821,-0.05767,1.58,0.0184,-0.01864,1.566,0.04105,-0.01489,1.583,0.04109,-0.0556,1.609,0.02579,-0.04557,1.601,0.03652,-0.02106,1.592,0.03748,-0.01856,1.6,0.04349,-0.005501,1.578,0.04574,-0.01064,1.558,0.04476,0.0,1.592,0.04694,-0.06182,1.614,0.008199,-0.05467,1.599,0.02153,-0.06194,1.6,0.002668,-0.05792,1.557,-0.004307,-0.04413,1.539,0.0149,-0.03746,1.539,0.02656,-0.04099,1.527,0.008832,-0.03528,1.524,0.02097,-0.02788,1.528,0.03084,0.0,1.53,0.04236,-0.005112,1.532,0.04358,-0.01481,1.526,0.03912,-0.01946,1.52,0.03421,0.0,1.495,0.0348,-0.0116,1.494,0.03382,-0.02734,1.498,0.02215,-0.0338,1.503,0.0124,-0.01772,1.488,0.02135,-0.02308,1.492,0.01628,-0.02999,1.498,0.006194,-0.01405,1.531,0.04152,-0.003407,1.524,0.04155,-0.02204,1.494,0.0272,-0.00797,1.515,0.03774,-0.02438,1.542,0.03578,0.0,1.543,0.04432,0.0,1.555,0.05692,0.02295,1.492,-0.02694,0.007322,1.489,-0.01677,-0.05254,1.541,-0.01363,-0.04008,1.509,0.002821,-0.05122,1.518,-0.02784,-0.03539,1.503,-0.00093,-0.01378,1.488,0.02484,-0.02308,1.499,-0.02088,-0.04349,1.512,-0.03987,-0.05867,1.544,-0.03316,-0.06433,1.563,-0.03678,-0.06732,1.583,-0.03683,-0.06769,1.617,-0.03436,-0.05856,1.63,0.01803,-0.04847,1.643,0.02895,-0.04643,1.625,0.03705,-0.02958,1.651,0.03965,-0.0264,1.628,0.04807,-0.02919,1.688,0.0091,-0.05272,1.674,-0.001657,-0.06641,1.637,-0.03046,-0.06061,1.66,-0.0101,-0.03136,1.7,-0.0413,-0.05305,1.685,-0.03987,-0.06308,1.666,-0.04036,-0.06818,1.637,-0.04285,-0.06808,1.617,-0.06112,-0.06993,1.594,-0.08238,-0.06714,1.564,-0.07003,-0.05324,1.536,-0.05922,-0.04904,1.521,-0.05132,-0.04795,1.531,-0.08973,-0.05739,1.555,-0.0982,-0.06815,1.622,-0.107,-0.06872,1.655,-0.08466,-0.05233,1.678,-0.09642,-0.03224,1.685,-0.1024,0.0,1.69,-0.1047,0.0,1.64,-0.1342,-0.05334,1.631,-0.1239,-0.05011,1.581,-0.1193,-0.04359,1.551,-0.1067,-0.03839,1.528,-0.09652,-0.03528,1.502,-0.05013,-0.04,1.51,-0.07278,-0.04029,1.514,-0.08254,-0.03479,1.517,-0.09269,-0.02295,1.492,-0.02694,-0.007322,1.489,-0.01677,0.0,1.588,-0.1329,-0.03399,1.636,-0.1304,-0.04758,1.514,-0.03107,-0.03428,1.595,0.03294,-0.02106,1.592,0.03748,-0.02735,1.596,0.03552,-0.0249,1.58,0.0387,-0.01489,1.583,0.04109,-0.04597,1.586,0.02904,-0.04354,1.59,0.02822,-0.03603,1.58,0.03536,-0.05856,1.63,0.01803,-0.06182,1.614,0.008199,-0.02788,1.528,0.03084,-0.005112,1.532,0.04358,-0.01405,1.531,0.04152,-0.00797,1.515,0.03774,-0.01946,1.52,0.03421,-0.05867,1.544,-0.03316,-0.06433,1.563,-0.03678,-0.06732,1.583,-0.03683,-0.06769,1.617,-0.03436,-0.04847,1.643,0.02895,-0.02958,1.651,0.03965,-0.05324,1.536,-0.05922,-0.04795,1.531,-0.08973,-0.03839,1.528,-0.09652,0.02106,1.592,0.03748,0.01489,1.583,0.04109,0.0249,1.58,0.0387,0.03603,1.58,0.03536,0.04354,1.59,0.02822,0.03428,1.595,0.03294,0.02735,1.596,0.03552,0.02788,1.528,0.03084,0.01405,1.531,0.04152,0.0,1.53,0.04236,0.0,1.515,0.03836,0.00797,1.515,0.03774,0.01946,1.52,0.03421,0.005112,1.532,0.04358,0.0,1.655,0.04322,0.02958,1.651,0.03965,0.04847,1.643,0.02895,0.05856,1.63,0.01803,0.06182,1.614,0.008199,0.06769,1.617,-0.03436,0.06732,1.583,-0.03683,0.06433,1.563,-0.03678,0.05867,1.544,-0.03316,0.05324,1.536,-0.05922,0.04795,1.531,-0.08973,0.03839,1.528,-0.09652,0.0,1.524,-0.102}, 774);
SoIndexedFaceSet416->setCoord(*SoCoordinate418);

SoShape413->setGeometry(*SoIndexedFaceSet416);

SoField412->addChild(*SoShape413);

SoTransform* SoTransform419 = new SoTransform();
SoTransform419->setDEF(QString("maskAndSnorkel"));
SoTransform419->setTranslation(new float[]{0.0,1.505,0.05});
SoTransform* SoTransform420 = new SoTransform();
SoShape* SoShape421 = new SoShape();
SoShape421->setDEF(QString("maskFrame"));
SoVRMLAppearance* SoVRMLAppearance422 = new SoVRMLAppearance();
SoMaterial* SoMaterial423 = new SoMaterial();
SoMaterial423->setDEF(QString("frameColor"));
SoMaterial423->setDiffuseColor(new float[]{0.0,0.0,0.0});
SoVRMLAppearance422->addChild(*SoMaterial423);

SoShape421->addChild(*SoVRMLAppearance422);

SoIndexedFaceSet* SoIndexedFaceSet424 = new SoIndexedFaceSet();
SoIndexedFaceSet424->setSolid(false);
SoIndexedFaceSet424->setCreaseAngle(1.45);
SoIndexedFaceSet424->setCoordIndex(new int32_t[]{0,1,13,12,0,-1,1,2,14,13,1,-1,2,3,15,14,2,-1,3,4,16,15,3,-1,4,5,17,16,4,-1,5,6,18,17,5,-1,18,6,25,19,0,12,18,-1,0,19,20,11,0,-1,10,11,20,21,10,-1,9,10,21,22,9,-1,8,9,22,23,8,-1,23,24,7,8,23,-1,6,7,24,25,6,-1}, 80);
SoCoordinate* SoCoordinate425 = new SoCoordinate();
SoCoordinate425->setPoint(new float[]{0.0,0.08,0.0,0.02,0.05,0.0,0.05,0.05,0.0,0.06,0.06,0.0,0.06,0.09,0.0,0.05,0.1,0.0,0.0,0.1,0.0,-0.05,0.1,0.0,-0.06,0.09,0.0,-0.06,0.06,0.0,-0.05,0.05,0.0,-0.02,0.05,0.0,0.005,0.08,0.0,0.02,0.055,0.0,0.05,0.055,0.0,0.055,0.06,0.0,0.055,0.09,0.0,0.045,0.095,0.0,0.005,0.095,0.0,-0.005,0.08,0.0,-0.02,0.055,0.0,-0.05,0.055,0.0,-0.055,0.06,0.0,-0.055,0.09,0.0,-0.045,0.095,0.0,-0.005,0.095,0.0}, 78);
SoIndexedFaceSet424->setCoord(*SoCoordinate425);

SoShape421->setGeometry(*SoIndexedFaceSet424);

SoTransform420->addChild(*SoShape421);

SoTransform419->addChild(*SoTransform420);

SoTransform* SoTransform426 = new SoTransform();
SoTransform426->setDEF(QString("snorkelHoldRing"));
SoTransform426->setTranslation(new float[]{0.075,0.075,-0.02});
SoShape* SoShape427 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance428 = new SoVRMLAppearance();
SoMaterial* SoMaterial429 = new SoMaterial();
SoMaterial429->setUSE(QString("frameColor"));
SoVRMLAppearance428->addChild(*SoMaterial429);

SoShape427->addChild(*SoVRMLAppearance428);

SoCylinder* SoCylinder430 = new SoCylinder();
SoCylinder430->setHeight(0.003);
SoCylinder430->setRadius(0.015);
SoShape427->setGeometry(*SoCylinder430);

SoTransform426->addChild(*SoShape427);

SoTransform419->addChild(*SoTransform426);

SoGroup* SoGroup431 = new SoGroup();
SoGroup431->setDEF(QString("snorkel"));
SoTransform* SoTransform432 = new SoTransform();
SoTransform432->setTranslation(new float[]{0.0,-0.02,0.0});
SoTransform* SoTransform433 = new SoTransform();
SoTransform433->setTranslation(new float[]{0.035,-0.07,-0.02});
SoTransform433->setScale(new float[]{0.9,0.9,0.9});
SoShape* SoShape434 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance435 = new SoVRMLAppearance();
SoMaterial* SoMaterial436 = new SoMaterial();
SoMaterial436->setDEF(QString("snorkelTube"));
SoMaterial436->setDiffuseColor(new float[]{0.678,1.0,0.184});
SoMaterial436->setTransparency(0.4);
SoVRMLAppearance435->addChild(*SoMaterial436);

SoShape434->addChild(*SoVRMLAppearance435);

SoExtrusion* SoExtrusion437 = new SoExtrusion();
SoExtrusion437->setCrossSection(new float[]{0.0,0.013,0.00494,0.01196,0.00923,0.00923,0.01196,0.00494,0.013,0.0,0.01196,-0.00494,0.00923,-0.00923,0.00494,-0.01196,0.0,0.013,-0.00494,-0.01196,-0.00923,-0.00923,-0.01196,-0.00494,-0.013,0.0,-0.01196,0.00494,-0.00923,0.00923,-0.00494,0.01196,0.0,0.013}, 34);
SoExtrusion437->setSpine(new float[]{-0.01,-0.04,0.0,0.0,0.0,0.0,0.03,0.05,0.0,0.05,0.2,0.0,0.03,0.4,0.03}, 15);
SoShape434->setGeometry(*SoExtrusion437);

SoTransform433->addChild(*SoShape434);

SoTransform432->addChild(*SoTransform433);

SoTransform* SoTransform438 = new SoTransform();
SoTransform438->setTranslation(new float[]{0.01,-0.04,-0.02});
SoTransform438->setRotation(new float[]{0.0,0.0,1.0,1.57});
SoTransform438->setScale(new float[]{0.9,0.9,0.9});
SoShape* SoShape439 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance440 = new SoVRMLAppearance();
SoMaterial* SoMaterial441 = new SoMaterial();
SoMaterial441->setDEF(QString("Mouthpiece"));
SoMaterial441->setDiffuseColor(new float[]{0.678,1.0,0.8});
SoMaterial441->setTransparency(0.4);
SoVRMLAppearance440->addChild(*SoMaterial441);

SoShape439->addChild(*SoVRMLAppearance440);

SoExtrusion* SoExtrusion442 = new SoExtrusion();
SoExtrusion442->setCrossSection(new float[]{0.0,0.013,0.00494,0.01196,0.00923,0.00923,0.01196,0.00494,0.013,0.0,0.01196,-0.00494,0.00923,-0.00923,0.00494,-0.01196,0.0,0.013,-0.00494,-0.01196,-0.00923,-0.00923,-0.01196,-0.00494,-0.013,0.0,-0.01196,0.00494,-0.00923,0.00923,-0.00494,0.01196,0.0,0.013}, 34);
SoExtrusion442->setSpine(new float[]{-0.01,-0.03,0.0,0.0,0.0,0.0,0.02,0.01,0.0}, 9);
SoShape439->setGeometry(*SoExtrusion442);

SoTransform438->addChild(*SoShape439);

SoTransform432->addChild(*SoTransform438);

SoTransform* SoTransform443 = new SoTransform();
SoTransform443->setTranslation(new float[]{0.005,-0.01,-0.02});
SoTransform443->setRotation(new float[]{0.0,0.0,1.0,-0.85});
SoTransform443->setScale(new float[]{0.9,0.9,0.9});
SoShape* SoShape444 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance445 = new SoVRMLAppearance();
SoMaterial* SoMaterial446 = new SoMaterial();
SoMaterial446->setUSE(QString("Mouthpiece"));
SoVRMLAppearance445->addChild(*SoMaterial446);

SoShape444->addChild(*SoVRMLAppearance445);

SoExtrusion* SoExtrusion447 = new SoExtrusion();
SoExtrusion447->setCrossSection(new float[]{0.0,0.013,0.00494,0.01196,0.00923,0.00923,0.01196,0.00494,0.013,0.0,0.01196,-0.00494,0.00923,-0.00923,0.00494,-0.01196,0.0,0.013}, 18);
SoExtrusion447->setSpine(new float[]{-0.02,-0.03,0.0,-0.01,-0.03,0.0,0.0,-0.0175,0.0,0.0,-0.0135,0.0,-0.01,0.0,0.0,-0.02,0.0,0.0}, 18);
SoShape444->setGeometry(*SoExtrusion447);

SoTransform443->addChild(*SoShape444);

SoTransform432->addChild(*SoTransform443);

SoGroup431->addChild(*SoTransform432);

SoTransform419->addChild(*SoGroup431);

SoTransform* SoTransform448 = new SoTransform();
SoShape* SoShape449 = new SoShape();
SoShape449->setDEF(QString("maskLensR"));
SoVRMLAppearance* SoVRMLAppearance450 = new SoVRMLAppearance();
SoMaterial* SoMaterial451 = new SoMaterial();
SoMaterial451->setDEF(QString("plastic"));
SoMaterial451->setDiffuseColor(new float[]{0.941,0.973,1.0});
SoMaterial451->setTransparency(0.8);
SoVRMLAppearance450->addChild(*SoMaterial451);

SoShape449->addChild(*SoVRMLAppearance450);

SoIndexedFaceSet* SoIndexedFaceSet452 = new SoIndexedFaceSet();
SoIndexedFaceSet452->setSolid(false);
SoIndexedFaceSet452->setCreaseAngle(1.45);
SoIndexedFaceSet452->setCoordIndex(new int32_t[]{12,1314,15,16,17,18,12,-1}, 8);
SoCoordinate* SoCoordinate453 = new SoCoordinate();
SoCoordinate453->setPoint(new float[]{0.0,0.08,0.0,0.02,0.05,0.0,0.05,0.05,0.0,0.06,0.06,0.0,0.06,0.09,0.0,0.05,0.1,0.0,0.0,0.1,0.0,-0.05,0.1,0.0,-0.06,0.09,0.0,-0.06,0.06,0.0,-0.05,0.05,0.0,-0.02,0.05,0.0,0.005,0.08,0.0,0.02,0.055,0.0,0.05,0.055,0.0,0.055,0.06,0.0,0.055,0.09,0.0,0.045,0.095,0.0,0.005,0.095,0.0,-0.005,0.08,0.0,-0.02,0.055,0.0,-0.05,0.055,0.0,-0.055,0.06,0.0,-0.055,0.09,0.0,-0.045,0.095,0.0,-0.005,0.095,0.0}, 78);
SoIndexedFaceSet452->setCoord(*SoCoordinate453);

SoShape449->setGeometry(*SoIndexedFaceSet452);

SoTransform448->addChild(*SoShape449);

SoTransform419->addChild(*SoTransform448);

SoTransform* SoTransform454 = new SoTransform();
SoShape* SoShape455 = new SoShape();
SoShape455->setDEF(QString("maskLensL"));
SoVRMLAppearance* SoVRMLAppearance456 = new SoVRMLAppearance();
SoMaterial* SoMaterial457 = new SoMaterial();
SoMaterial457->setUSE(QString("plastic"));
SoVRMLAppearance456->addChild(*SoMaterial457);

SoShape455->addChild(*SoVRMLAppearance456);

SoIndexedFaceSet* SoIndexedFaceSet458 = new SoIndexedFaceSet();
SoIndexedFaceSet458->setSolid(false);
SoIndexedFaceSet458->setCreaseAngle(1.45);
SoIndexedFaceSet458->setCoordIndex(new int32_t[]{19,20,21,22,23,24,25,19,-1}, 9);
SoCoordinate* SoCoordinate459 = new SoCoordinate();
SoCoordinate459->setPoint(new float[]{0.0,0.08,0.0,0.02,0.05,0.0,0.05,0.05,0.0,0.06,0.06,0.0,0.06,0.09,0.0,0.05,0.1,0.0,0.0,0.1,0.0,-0.05,0.1,0.0,-0.06,0.09,0.0,-0.06,0.06,0.0,-0.05,0.05,0.0,-0.02,0.05,0.0,0.005,0.08,0.0,0.02,0.055,0.0,0.05,0.055,0.0,0.055,0.06,0.0,0.055,0.09,0.0,0.045,0.095,0.0,0.005,0.095,0.0,-0.005,0.08,0.0,-0.02,0.055,0.0,-0.05,0.055,0.0,-0.055,0.06,0.0,-0.055,0.09,0.0,-0.045,0.095,0.0,-0.005,0.095,0.0}, 78);
SoIndexedFaceSet458->setCoord(*SoCoordinate459);

SoShape455->setGeometry(*SoIndexedFaceSet458);

SoTransform454->addChild(*SoShape455);

SoTransform419->addChild(*SoTransform454);

SoTransform* SoTransform460 = new SoTransform();
SoShape* SoShape461 = new SoShape();
SoShape461->setDEF(QString("nose"));
SoVRMLAppearance* SoVRMLAppearance462 = new SoVRMLAppearance();
SoMaterial* SoMaterial463 = new SoMaterial();
SoMaterial463->setDEF(QString("plasticFit"));
SoMaterial463->setDiffuseColor(new float[]{0.678,1.0,0.184});
SoMaterial463->setTransparency(0.7);
SoVRMLAppearance462->addChild(*SoMaterial463);

SoShape461->addChild(*SoVRMLAppearance462);

SoIndexedFaceSet* SoIndexedFaceSet464 = new SoIndexedFaceSet();
SoIndexedFaceSet464->setSolid(false);
SoIndexedFaceSet464->setCreaseAngle(1.45);
SoIndexedFaceSet464->setCoordIndex(new int32_t[]{0,37,26,0,-1,0,36,26,0,-1,36,37,26,36,-1,0,1,37,0,-1,0,11,36,0,-1}, 25);
SoCoordinate* SoCoordinate465 = new SoCoordinate();
SoCoordinate465->setPoint(new float[]{0.0,0.08,0.0,0.02,0.05,0.0,0.05,0.05,0.0,0.06,0.06,0.0,0.06,0.09,0.0,0.05,0.1,0.0,0.0,0.1,0.0,-0.05,0.1,0.0,-0.06,0.09,0.0,-0.06,0.06,0.0,-0.05,0.05,0.0,-0.02,0.05,0.0,0.005,0.08,0.0,0.02,0.055,0.0,0.05,0.055,0.0,0.055,0.06,0.0,0.055,0.09,0.0,0.045,0.095,0.0,0.005,0.095,0.0,-0.005,0.08,0.0,-0.02,0.055,0.0,-0.05,0.055,0.0,-0.055,0.06,0.0,-0.055,0.09,0.0,-0.045,0.095,0.0,-0.005,0.095,0.0,0.0,0.04,0.015,0.05,0.04,-0.03,0.06,0.05,-0.03,0.07,0.095,-0.03,0.055,0.11,-0.03,0.0,0.11,-0.02,-0.055,0.11,-0.03,-0.07,0.095,-0.03,-0.06,0.05,-0.03,-0.05,0.04,-0.03,-0.02,0.04,-0.02,0.02,0.04,-0.02}, 114);
SoIndexedFaceSet464->setCoord(*SoCoordinate465);

SoShape461->setGeometry(*SoIndexedFaceSet464);

SoTransform460->addChild(*SoShape461);

SoTransform419->addChild(*SoTransform460);

SoTransform* SoTransform466 = new SoTransform();
SoShape* SoShape467 = new SoShape();
SoShape467->setDEF(QString("faceFit"));
SoVRMLAppearance* SoVRMLAppearance468 = new SoVRMLAppearance();
SoMaterial* SoMaterial469 = new SoMaterial();
SoMaterial469->setUSE(QString("plasticFit"));
SoVRMLAppearance468->addChild(*SoMaterial469);

SoShape467->addChild(*SoVRMLAppearance468);

SoIndexedFaceSet* SoIndexedFaceSet470 = new SoIndexedFaceSet();
SoIndexedFaceSet470->setSolid(false);
SoIndexedFaceSet470->setCreaseAngle(1.45);
SoIndexedFaceSet470->setCoordIndex(new int32_t[]{1,2,27,37,1,-1,2,3,28,27,2,-1,3,4,29,28,3,-1,4,5,30,29,4,-1,5,6,31,30,5,-1,6,7,32,31,6,-1,7,8,33,32,7,-1,8,9,34,33,8,-1,9,10,35,34,9,-1,10,11,36,35,10,-1}, 60);
SoCoordinate* SoCoordinate471 = new SoCoordinate();
SoCoordinate471->setPoint(new float[]{0.0,0.08,0.0,0.02,0.05,0.0,0.05,0.05,0.0,0.06,0.06,0.0,0.06,0.09,0.0,0.05,0.1,0.0,0.0,0.1,0.0,-0.05,0.1,0.0,-0.06,0.09,0.0,-0.06,0.06,0.0,-0.05,0.05,0.0,-0.02,0.05,0.0,0.005,0.08,0.0,0.02,0.055,0.0,0.05,0.055,0.0,0.055,0.06,0.0,0.055,0.09,0.0,0.045,0.095,0.0,0.005,0.095,0.0,-0.005,0.08,0.0,-0.02,0.055,0.0,-0.05,0.055,0.0,-0.055,0.06,0.0,-0.055,0.09,0.0,-0.045,0.095,0.0,-0.005,0.095,0.0,0.0,0.05,0.015,0.05,0.04,-0.03,0.06,0.05,-0.03,0.07,0.095,-0.03,0.055,0.11,-0.03,0.0,0.11,-0.02,-0.055,0.11,-0.03,-0.07,0.095,-0.03,-0.06,0.05,-0.03,-0.05,0.04,-0.03,-0.02,0.04,-0.02,0.02,0.04,-0.02}, 114);
SoIndexedFaceSet470->setCoord(*SoCoordinate471);

SoShape467->setGeometry(*SoIndexedFaceSet470);

SoTransform466->addChild(*SoShape467);

SoTransform419->addChild(*SoTransform466);

SoTransform* SoTransform472 = new SoTransform();
SoShape* SoShape473 = new SoShape();
SoShape473->setDEF(QString("belt"));
SoVRMLAppearance* SoVRMLAppearance474 = new SoVRMLAppearance();
SoMaterial* SoMaterial475 = new SoMaterial();
SoMaterial475->setUSE(QString("plastic"));
SoVRMLAppearance474->addChild(*SoMaterial475);

SoShape473->addChild(*SoVRMLAppearance474);

SoIndexedFaceSet* SoIndexedFaceSet476 = new SoIndexedFaceSet();
SoIndexedFaceSet476->setSolid(false);
SoIndexedFaceSet476->setCreaseAngle(1.45);
SoIndexedFaceSet476->setCoordIndex(new int32_t[]{3,4,39,38,3,-1,8,9,40,41,8,-1,38,39,42,43,38,-1,40,41,44,45,40,-1,42,43,47,46,42,-1,44,45,47,46,44,-1}, 36);
SoCoordinate* SoCoordinate477 = new SoCoordinate();
SoCoordinate477->setPoint(new float[]{0.0,0.08,0.0,0.02,0.05,0.0,0.05,0.05,0.0,0.06,0.06,0.0,0.06,0.09,0.0,0.05,0.1,0.0,0.0,0.1,0.0,-0.05,0.1,0.0,-0.06,0.09,0.0,-0.06,0.06,0.0,-0.05,0.05,0.0,-0.02,0.05,0.0,0.005,0.08,0.0,0.02,0.055,0.0,0.05,0.055,0.0,0.055,0.06,0.0,0.055,0.09,0.0,0.045,0.095,0.0,0.005,0.095,0.0,-0.005,0.08,0.0,-0.02,0.055,0.0,-0.05,0.055,0.0,-0.055,0.06,0.0,-0.055,0.09,0.0,-0.045,0.095,0.0,-0.005,0.095,0.0,0.0,0.05,0.015,0.05,0.04,-0.03,0.06,0.05,-0.03,0.07,0.095,-0.03,0.055,0.11,-0.03,0.0,0.11,-0.02,-0.055,0.11,-0.03,-0.07,0.095,-0.03,-0.06,0.05,-0.03,-0.05,0.04,-0.03,-0.02,0.04,-0.02,0.02,0.04,-0.02,0.075,0.06,-0.135,0.075,0.09,-0.135,-0.075,0.06,-0.135,-0.075,0.09,-0.135,0.06,0.09,-0.165,0.06,0.06,-0.165,-0.06,0.09,-0.165,-0.06,0.06,-0.165,0.0,0.09,-0.2,0.0,0.06,-0.175}, 144);
SoIndexedFaceSet476->setCoord(*SoCoordinate477);

SoShape473->setGeometry(*SoIndexedFaceSet476);

SoTransform472->addChild(*SoShape473);

SoTransform419->addChild(*SoTransform472);

SoField412->addChild(*SoTransform419);

SoTransform* SoTransform478 = new SoTransform();
SoTransform478->setDEF(QString("mouthpiece"));
SoTransform478->setTranslation(new float[]{0.0,1.508,0.05});
SoTransform478->setRotation(new float[]{0.86,-0.58,-0.58,2.09});
SoTransform* SoTransform479 = new SoTransform();
SoTransform479->setTranslation(new float[]{0.0,0.0018,0.0});
SoShape* SoShape480 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance481 = new SoVRMLAppearance();
SoMaterial* SoMaterial482 = new SoMaterial();
SoMaterial482->setDEF(QString("gray"));
SoMaterial482->setAmbientIntensity(0.3);
SoMaterial482->setDiffuseColor(new float[]{0.9,0.9,0.89});
SoMaterial482->setSpecularColor(new float[]{0.5,0.5,0.5});
SoMaterial482->setShininess(0.1);
SoVRMLAppearance481->addChild(*SoMaterial482);

SoShape480->addChild(*SoVRMLAppearance481);

SoCylinder* SoCylinder483 = new SoCylinder();
SoCylinder483->setHeight(0.006);
SoCylinder483->setRadius(0.015);
SoShape480->setGeometry(*SoCylinder483);

SoTransform479->addChild(*SoShape480);

SoTransform478->addChild(*SoTransform479);

SoTransform* SoTransform484 = new SoTransform();
SoShape* SoShape485 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance486 = new SoVRMLAppearance();
SoMaterial* SoMaterial487 = new SoMaterial();
SoMaterial487->setDEF(QString("black"));
SoMaterial487->setDiffuseColor(new float[]{0.0,0.0,0.0});
SoVRMLAppearance486->addChild(*SoMaterial487);

SoShape485->addChild(*SoVRMLAppearance486);

SoCone* SoCone488 = new SoCone();
SoCone488->setHeight(0.01);
SoCone488->setBottomRadius(0.03);
SoShape485->setGeometry(*SoCone488);

SoTransform484->addChild(*SoShape485);

SoTransform478->addChild(*SoTransform484);

SoTransform* SoTransform489 = new SoTransform();
SoTransform489->setTranslation(new float[]{0.0,-0.015,0.0});
SoShape* SoShape490 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance491 = new SoVRMLAppearance();
SoMaterial* SoMaterial492 = new SoMaterial();
SoMaterial492->setUSE(QString("black"));
SoVRMLAppearance491->addChild(*SoMaterial492);

SoShape490->addChild(*SoVRMLAppearance491);

SoCylinder* SoCylinder493 = new SoCylinder();
SoCylinder493->setHeight(0.02);
SoCylinder493->setRadius(0.03);
SoShape490->setGeometry(*SoCylinder493);

SoTransform489->addChild(*SoShape490);

SoTransform478->addChild(*SoTransform489);

SoTransform* SoTransform494 = new SoTransform();
SoTransform494->setTranslation(new float[]{0.0,-0.025,0.0});
SoShape* SoShape495 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance496 = new SoVRMLAppearance();
SoMaterial* SoMaterial497 = new SoMaterial();
SoMaterial497->setUSE(QString("black"));
SoVRMLAppearance496->addChild(*SoMaterial497);

SoShape495->addChild(*SoVRMLAppearance496);

SoCylinder* SoCylinder498 = new SoCylinder();
SoCylinder498->setHeight(0.02);
SoCylinder498->setRadius(0.015);
SoShape495->setGeometry(*SoCylinder498);

SoTransform494->addChild(*SoShape495);

SoTransform478->addChild(*SoTransform494);

SoTransform* SoTransform499 = new SoTransform();
SoTransform499->setTranslation(new float[]{0.0,-0.04,0.0});
SoTransform499->setRotation(new float[]{0.0,0.0,1.0,0.9});
SoShape* SoShape500 = new SoShape();
SoShape500->setDEF(QString("mouthpiecePlastic"));
SoVRMLAppearance* SoVRMLAppearance501 = new SoVRMLAppearance();
SoMaterial* SoMaterial502 = new SoMaterial();
SoMaterial502->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoMaterial502->setEmissiveColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance501->addChild(*SoMaterial502);

SoShape500->addChild(*SoVRMLAppearance501);

SoBox* SoBox503 = new SoBox();
SoBox503->setSize(new float[]{0.002,0.03,0.018});
SoShape500->setGeometry(*SoBox503);

SoTransform499->addChild(*SoShape500);

SoTransform478->addChild(*SoTransform499);

SoTransform* SoTransform504 = new SoTransform();
SoTransform504->setTranslation(new float[]{0.0,-0.04,0.0});
SoTransform504->setRotation(new float[]{0.0,0.0,1.0,-0.9});
SoShape* SoShape505 = new SoShape();
SoShape505->setUSE(QString("mouthpiecePlastic"));
SoTransform504->addChild(*SoShape505);

SoTransform478->addChild(*SoTransform504);

SoTransform* SoTransform506 = new SoTransform();
SoTransform506->setTranslation(new float[]{0.0,-0.015,0.03});
SoTransform506->setRotation(new float[]{1.0,0.0,0.0,1.57});
SoShape* SoShape507 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance508 = new SoVRMLAppearance();
SoMaterial* SoMaterial509 = new SoMaterial();
SoMaterial509->setUSE(QString("gray"));
SoVRMLAppearance508->addChild(*SoMaterial509);

SoShape507->addChild(*SoVRMLAppearance508);

SoCylinder* SoCylinder510 = new SoCylinder();
SoCylinder510->setHeight(0.02);
SoCylinder510->setRadius(0.0075);
SoShape507->setGeometry(*SoCylinder510);

SoTransform506->addChild(*SoShape507);

SoTransform478->addChild(*SoTransform506);

SoTransform* SoTransform511 = new SoTransform();
SoTransform511->setDEF(QString("airTube"));
SoTransform511->setTranslation(new float[]{0.0,-0.02,0.055});
SoTransform511->setRotation(new float[]{0.0,1.0,0.0,1.57});
SoTransform511->setScale(new float[]{0.7,0.7,0.7});
SoTransform* SoTransform512 = new SoTransform();
SoTransform512->setRotation(new float[]{-0.21,0.21,-0.95,4.67});
SoShape* SoShape513 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance514 = new SoVRMLAppearance();
SoMaterial* SoMaterial515 = new SoMaterial();
SoMaterial515->setDiffuseColor(new float[]{0.0,0.0,0.0});
SoVRMLAppearance514->addChild(*SoMaterial515);

SoShape513->addChild(*SoVRMLAppearance514);

SoExtrusion* SoExtrusion516 = new SoExtrusion();
SoExtrusion516->setCrossSection(new float[]{0.0,0.013,0.00494,0.01196,0.00923,0.00923,0.01196,0.00494,0.013,0.0,0.01196,-0.00494,0.00923,-0.00923,0.00494,-0.01196,0.0,0.013,-0.00494,-0.01196,-0.00923,-0.00923,-0.01196,-0.00494,-0.013,0.0,-0.01196,0.00494,-0.00923,0.00923,-0.00494,0.01196,0.0,0.013}, 34);
SoExtrusion516->setSpine(new float[]{0.005,-0.03,0.0,-0.01,0.02,0.0,-0.03,0.08,0.0,-0.05,0.14,0.0,-0.08,0.19,0.0,-0.1,0.22,0.0,-0.12,0.25,0.0,-0.15,0.27,0.0,-0.18,0.28,0.0,-0.21,0.29,0.0,-0.26,0.28,0.0,-0.28,0.26,0.0,-0.305,0.23,0.0,-0.32,0.2,0.0,-0.34,0.16,0.0,-0.35,0.12,0.0,-0.37,0.04,0.0,-0.385,0.0,0.0,-0.39,-0.07,0.0}, 57);
SoShape513->setGeometry(*SoExtrusion516);

SoTransform512->addChild(*SoShape513);

SoTransform511->addChild(*SoTransform512);

SoTransform478->addChild(*SoTransform511);

SoField412->addChild(*SoTransform478);

SoTransform* SoTransform517 = new SoTransform();
SoTransform517->setDEF(QString("Bubbles"));
SoTransform517->setTranslation(new float[]{0.0,1.508,0.05});
SoTransform517->setScale(new float[]{0.35,0.35,0.35});
SoGroup* SoGroup518 = new SoGroup();
SoGroup518->setDEF(QString("Bubble"));
SoTimeSensor* SoTimeSensor519 = new SoTimeSensor();
SoTimeSensor519->setDEF(QString("BubbleClock"));
SoTimeSensor519->setCycleInterval(6);
SoTimeSensor519->setLoop(true);
SoGroup518->addChild(*SoTimeSensor519);

SoPositionInterpolator* SoPositionInterpolator520 = new SoPositionInterpolator();
SoPositionInterpolator520->setDEF(QString("BubblePath1"));
SoPositionInterpolator520->setKey(new float[]{0.0,0.5,0.8,0.9,1.0}, 5);
SoPositionInterpolator520->setKeyValue(new float[]{0.0,0.0,0.0,0.75,0.75,0.75,0.86,0.86,0.86,0.99,0.998,0.9876,1.272,1.9044,0.9509}, 15);
SoGroup518->addChild(*SoPositionInterpolator520);

SoPositionInterpolator* SoPositionInterpolator521 = new SoPositionInterpolator();
SoPositionInterpolator521->setDEF(QString("BubblePath2"));
SoPositionInterpolator521->setKey(new float[]{0.0,0.3,0.64,0.85,1.0}, 5);
SoPositionInterpolator521->setKeyValue(new float[]{0.1,0.1,0.1,0.2,0.4,0.25,0.3,0.5,0.46,0.75,0.5,0.575,0.03848348,1.989,1.098373}, 15);
SoGroup518->addChild(*SoPositionInterpolator521);

SoPositionInterpolator* SoPositionInterpolator522 = new SoPositionInterpolator();
SoPositionInterpolator522->setDEF(QString("BubblePath3"));
SoPositionInterpolator522->setKey(new float[]{0.0,0.1,0.45,0.7,1.0}, 5);
SoPositionInterpolator522->setKeyValue(new float[]{0.01,0.01,0.01,0.25,0.35,0.0045,0.55,0.6,0.0055,0.66,0.665,0.00655,1.555,1.09043,0.005734}, 15);
SoGroup518->addChild(*SoPositionInterpolator522);

SoPositionInterpolator* SoPositionInterpolator523 = new SoPositionInterpolator();
SoPositionInterpolator523->setDEF(QString("BubblePath4"));
SoPositionInterpolator523->setKey(new float[]{0.0,0.5,0.6,0.8,1.0}, 5);
SoPositionInterpolator523->setKeyValue(new float[]{0.0,0.0,0.0,0.5,0.5,0.005,0.6,0.6,0.006,0.75,0.75,0.0075,1.948594,1.3983,0.009009349}, 15);
SoGroup518->addChild(*SoPositionInterpolator523);

SoPositionInterpolator* SoPositionInterpolator524 = new SoPositionInterpolator();
SoPositionInterpolator524->setDEF(QString("BubblePath5"));
SoPositionInterpolator524->setKey(new float[]{0.0,0.25,0.35,0.65,1.0}, 5);
SoPositionInterpolator524->setKeyValue(new float[]{0.0,0.0,0.0,0.5,0.5,0.005,0.6,0.6,0.006,0.75,0.75,0.0075,1.84444,1.22222,0.1}, 15);
SoGroup518->addChild(*SoPositionInterpolator524);

SoPositionInterpolator* SoPositionInterpolator525 = new SoPositionInterpolator();
SoPositionInterpolator525->setDEF(QString("BubblePath6"));
SoPositionInterpolator525->setKey(new float[]{0.0,0.15,0.22235,0.55565,1.0}, 5);
SoPositionInterpolator525->setKeyValue(new float[]{0.0,0.0,0.0,0.235,0.3455,0.0055,0.356,0.676,0.00456,0.5675,0.75,0.0074565,1.098,1.0343,0.14}, 15);
SoGroup518->addChild(*SoPositionInterpolator525);

SoPositionInterpolator* SoPositionInterpolator526 = new SoPositionInterpolator();
SoPositionInterpolator526->setDEF(QString("BubblePath7"));
SoPositionInterpolator526->setKey(new float[]{0.0,0.2425,0.4535,0.6775,1.0}, 5);
SoPositionInterpolator526->setKeyValue(new float[]{0.0,0.0,0.0,0.12345,0.2225,0.00335,0.786,0.456,0.00666,0.74555,0.7335,0.00234575,0.08787,1.022,0.12}, 15);
SoGroup518->addChild(*SoPositionInterpolator526);

SoPositionInterpolator* SoPositionInterpolator527 = new SoPositionInterpolator();
SoPositionInterpolator527->setDEF(QString("BubblePath8"));
SoPositionInterpolator527->setKey(new float[]{0.0,0.1125,0.5535,0.97865,1.0}, 5);
SoPositionInterpolator527->setKeyValue(new float[]{0.0,0.0,0.0,0.1235,0.05,0.00125,0.5666,0.4346,0.005556,0.8975,0.34575,0.0098775,1.8787,1.686,0.86}, 15);
SoGroup518->addChild(*SoPositionInterpolator527);

SoPositionInterpolator* SoPositionInterpolator528 = new SoPositionInterpolator();
SoPositionInterpolator528->setDEF(QString("BubblePath9"));
SoPositionInterpolator528->setKey(new float[]{0.0,0.0025,0.035,0.65,1.0}, 5);
SoPositionInterpolator528->setKeyValue(new float[]{0.0,0.0,0.0,0.522,0.5445,0.0057,0.6543,0.226,0.0055,0.45575,0.4375,0.0067,1.8787,2.0,0.1545}, 15);
SoGroup518->addChild(*SoPositionInterpolator528);

SoPositionInterpolator* SoPositionInterpolator529 = new SoPositionInterpolator();
SoPositionInterpolator529->setDEF(QString("BubblePath10"));
SoPositionInterpolator529->setKey(new float[]{0.0,0.00025,0.035,0.6895,1.0}, 5);
SoPositionInterpolator529->setKeyValue(new float[]{0.0,0.0,0.0,0.8765,0.445,0.00335,0.3336,0.4446,0.005556,0.765,0.75,0.0075,1.0,1.0,0.1}, 15);
SoGroup518->addChild(*SoPositionInterpolator529);

SoTransform* SoTransform530 = new SoTransform();
SoTransform* SoTransform531 = new SoTransform();
SoTransform531->setDEF(QString("bubble1"));
SoTransform531->setTranslation(new float[]{0.5045,0.5045,0.5045});
SoShape* SoShape532 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance533 = new SoVRMLAppearance();
SoVRMLAppearance533->setDEF(QString("BubbleAppearance"));
SoMaterial* SoMaterial534 = new SoMaterial();
SoMaterial534->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoMaterial534->setTransparency(0.8);
SoVRMLAppearance533->addChild(*SoMaterial534);

SoShape532->addChild(*SoVRMLAppearance533);

SoSphere* SoSphere535 = new SoSphere();
SoSphere535->setRadius(0.025);
SoShape532->setGeometry(*SoSphere535);

SoTransform531->addChild(*SoShape532);

SoTransform530->addChild(*SoTransform531);

SoTransform* SoTransform536 = new SoTransform();
SoTransform536->setDEF(QString("bubble2"));
SoTransform536->setTranslation(new float[]{0.2106863,0.4106863,0.2724412});
SoShape* SoShape537 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance538 = new SoVRMLAppearance();
SoVRMLAppearance538->setUSE(QString("BubbleAppearance"));
SoShape537->addChild(*SoVRMLAppearance538);

SoSphere* SoSphere539 = new SoSphere();
SoSphere539->setRadius(0.055);
SoShape537->setGeometry(*SoSphere539);

SoTransform536->addChild(*SoShape537);

SoTransform530->addChild(*SoTransform536);

SoTransform* SoTransform540 = new SoTransform();
SoTransform540->setDEF(QString("bubble3"));
SoTransform540->setTranslation(new float[]{0.4525714,0.5188095,0.005175238});
SoShape* SoShape541 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance542 = new SoVRMLAppearance();
SoVRMLAppearance542->setUSE(QString("BubbleAppearance"));
SoShape541->addChild(*SoVRMLAppearance542);

SoSphere* SoSphere543 = new SoSphere();
SoSphere543->setRadius(0.065);
SoShape541->setGeometry(*SoSphere543);

SoTransform540->addChild(*SoShape541);

SoTransform530->addChild(*SoTransform540);

SoTransform* SoTransform544 = new SoTransform();
SoTransform544->setDEF(QString("bubble4"));
SoTransform544->setTranslation(new float[]{0.3363333,0.3363333,0.003363333});
SoShape* SoShape545 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance546 = new SoVRMLAppearance();
SoVRMLAppearance546->setUSE(QString("BubbleAppearance"));
SoShape545->addChild(*SoVRMLAppearance546);

SoSphere* SoSphere547 = new SoSphere();
SoSphere547->setRadius(0.015);
SoShape545->setGeometry(*SoSphere547);

SoTransform544->addChild(*SoShape545);

SoTransform530->addChild(*SoTransform544);

SoTransform* SoTransform548 = new SoTransform();
SoTransform548->setDEF(QString("bubble5"));
SoTransform548->setTranslation(new float[]{0.5863334,0.5863334,0.005863333});
SoShape* SoShape549 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance550 = new SoVRMLAppearance();
SoVRMLAppearance550->setUSE(QString("BubbleAppearance"));
SoShape549->addChild(*SoVRMLAppearance550);

SoSphere* SoSphere551 = new SoSphere();
SoSphere551->setRadius(0.075);
SoShape549->setGeometry(*SoSphere551);

SoTransform548->addChild(*SoShape549);

SoTransform530->addChild(*SoTransform548);

SoTransform* SoTransform552 = new SoTransform();
SoTransform552->setDEF(QString("bubble6"));
SoTransform552->setTranslation(new float[]{0.4283297,0.7013068,0.005550557});
SoShape* SoShape553 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance554 = new SoVRMLAppearance();
SoVRMLAppearance554->setUSE(QString("BubbleAppearance"));
SoShape553->addChild(*SoVRMLAppearance554);

SoSphere* SoSphere555 = new SoSphere();
SoSphere555->setRadius(0.005);
SoShape553->setGeometry(*SoSphere555);

SoTransform552->addChild(*SoShape553);

SoTransform530->addChild(*SoTransform552);

SoTransform* SoTransform556 = new SoTransform();
SoTransform556->setDEF(QString("bubble7"));
SoTransform556->setTranslation(new float[]{0.4180911,0.3263393,0.004821982});
SoShape* SoShape557 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance558 = new SoVRMLAppearance();
SoVRMLAppearance558->setUSE(QString("BubbleAppearance"));
SoShape557->addChild(*SoVRMLAppearance558);

SoSphere* SoSphere559 = new SoSphere();
SoSphere559->setRadius(0.035);
SoShape557->setGeometry(*SoSphere559);

SoTransform556->addChild(*SoShape557);

SoTransform530->addChild(*SoTransform556);

SoTransform* SoTransform560 = new SoTransform();
SoTransform560->setDEF(QString("bubble8"));
SoTransform560->setTranslation(new float[]{0.3483992,0.245207,0.003435547});
SoShape* SoShape561 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance562 = new SoVRMLAppearance();
SoVRMLAppearance562->setUSE(QString("BubbleAppearance"));
SoShape561->addChild(*SoVRMLAppearance562);

SoSphere* SoSphere563 = new SoSphere();
SoSphere563->setRadius(0.05);
SoShape561->setGeometry(*SoSphere563);

SoTransform560->addChild(*SoShape561);

SoTransform530->addChild(*SoTransform560);

SoTransform* SoTransform564 = new SoTransform();
SoTransform564->setDEF(QString("bubble9"));
SoTransform564->setTranslation(new float[]{0.5570159,0.3296293,0.006087967});
SoShape* SoShape565 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance566 = new SoVRMLAppearance();
SoVRMLAppearance566->setUSE(QString("BubbleAppearance"));
SoShape565->addChild(*SoVRMLAppearance566);

SoSphere* SoSphere567 = new SoSphere();
SoSphere567->setRadius(0.045);
SoShape565->setGeometry(*SoSphere567);

SoTransform564->addChild(*SoShape565);

SoTransform530->addChild(*SoTransform564);

SoTransform* SoTransform568 = new SoTransform();
SoTransform568->setDEF(QString("bubble10"));
SoTransform568->setTranslation(new float[]{0.5322176,0.5852069,0.006451022});
SoShape* SoShape569 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance570 = new SoVRMLAppearance();
SoVRMLAppearance570->setUSE(QString("BubbleAppearance"));
SoShape569->addChild(*SoVRMLAppearance570);

SoSphere* SoSphere571 = new SoSphere();
SoSphere571->setRadius(0.035);
SoShape569->setGeometry(*SoSphere571);

SoTransform568->addChild(*SoShape569);

SoTransform530->addChild(*SoTransform568);

SoGroup518->addChild(*SoTransform530);

SoTransform517->addChild(*SoGroup518);

SoField412->addChild(*SoTransform517);

SoProtoInstance411->addChild(*SoField412);

SoField* SoField572 = new SoField();
SoField572->setName(QString("name"));
SoField572->setValue(QString("skull"));
SoProtoInstance411->addChild(*SoField572);

SoField410->addChild(*SoProtoInstance411);

SoProtoInstance408->addChild(*SoField410);

SoField* SoField573 = new SoField();
SoField573->setName(QString("name"));
SoField573->setValue(QString("skullbase"));
SoProtoInstance408->addChild(*SoField573);

SoField399->addChild(*SoProtoInstance408);

SoProtoInstance397->addChild(*SoField399);

SoField* SoField574 = new SoField();
SoField574->setName(QString("name"));
SoField574->setValue(QString("vc4"));
SoProtoInstance397->addChild(*SoField574);

SoField203->addChild(*SoProtoInstance397);

SoProtoInstance201->addChild(*SoField203);

SoField* SoField575 = new SoField();
SoField575->setName(QString("name"));
SoField575->setValue(QString("vl1"));
SoProtoInstance201->addChild(*SoField575);

SoField94->addChild(*SoProtoInstance201);

SoProtoInstance92->addChild(*SoField94);

SoField* SoField576 = new SoField();
SoField576->setName(QString("name"));
SoField576->setValue(QString("humanoid_root"));
SoProtoInstance92->addChild(*SoField576);

SoField91->addChild(*SoProtoInstance92);

SoProtoInstance90->addChild(*SoField91);

SoTransform88->addChild(*SoProtoInstance90);

SoTransform87->addChild(*SoTransform88);

SoGroup86->addChild(*SoTransform87);

SoGroup80->addChild(*SoGroup86);

SoLOD79->addChildren(*SoGroup80);

SoNode14->addChild(*SoLOD79);

SoScript* SoScript577 = new SoScript();
SoScript577->setDEF(QString("finWarpScript"));
Sofield* Sofield578 = new Sofield();
Sofield578->setAccessType(QString("inputOnly"));
Sofield578->setType(QString("SFRotation"));
Sofield578->setName(QString("set_rotationL"));
SoScript577->addChild(*Sofield578);

Sofield* Sofield579 = new Sofield();
Sofield579->setAccessType(QString("inputOnly"));
Sofield579->setType(QString("SFRotation"));
Sofield579->setName(QString("set_rotationR"));
SoScript577->addChild(*Sofield579);

Sofield* Sofield580 = new Sofield();
Sofield580->setAccessType(QString("outputOnly"));
Sofield580->setType(QString("SFBool"));
Sofield580->setName(QString("fin_warpL"));
SoScript577->addChild(*Sofield580);

Sofield* Sofield581 = new Sofield();
Sofield581->setAccessType(QString("outputOnly"));
Sofield581->setType(QString("SFBool"));
Sofield581->setName(QString("fin_warpR"));
SoScript577->addChild(*Sofield581);


//SoScript577->setSourceCode(QString("ecmascript:")+
//_T("var positionX;")+
//_T("var positionY;")+
//_T("var positionZ;")+
//_T("var rotation;")+
//_T("function initialize()")+
//_T("{")+
//_T("    	positionX = 0.0;")+
//_T("	positionY = 0.0;")+
//_T("	positionZ = 0.0;")+
//_T("	rotation = 0.0;")+
//_T("}")+
//_T("function set_rotationL( value, timeStamp)")+
//_T("{")+
//_T("	rotationFinL = new SFRotation(positionX, positionY, positionZ, rotation);")+
//_T("	rotationFinL = value;")+
//_T("	//print ('rotationFinL[0] ' + rotationFinL[0]);")+
//_T("	if (rotationFinL[0] <= 0)")+
//_T("	{")+
//_T("		fin_warpL = 0;")+
//_T("	}")+
//_T("	else")+
//_T("	{")+
//_T("		fin_warpL = 1;")+
//_T("	}")+
//_T("	")+
//_T("}")+
//_T("function set_rotationR( value, timeStamp)")+
//_T("{")+
//_T("	rotationFinR = new SFRotation(positionX, positionY, positionZ, rotation);")+
//_T("	rotationFinR = value;")+
//_T("	//print ('rotationFin[0] ' + rotationFinR[0]);")+
//_T("	if (rotationFinR[0] <= 0)")+
//_T("	{")+
//_T("		fin_warpR = 0;")+
//_T("	}")+
//_T("	else")+
//_T("	{")+
//_T("		fin_warpR = 1;")+
//_T("	}")+
//_T("	")+
//_T("}"));
SoNode14->addChild(*SoScript577);

SoGroup* SoGroup582 = new SoGroup();
SoGroup582->setDEF(QString("Animations"));
SoGroup* SoGroup583 = new SoGroup();
SoGroup583->setDEF(QString("Dive_Animation"));
SoOrientationInterpolator* SoOrientationInterpolator584 = new SoOrientationInterpolator();
SoOrientationInterpolator584->setDEF(QString("r_ankle_RotationInterpolator_BasicDive"));
SoOrientationInterpolator584->setKey(new float[]{0.0,0.125,0.2083,0.375,0.4583,0.5,0.6667,0.75,0.7917,0.9167,1.0}, 11);
SoOrientationInterpolator584->setKeyValue(new float[]{1.0,0.0,0.0,0.8001,1.0,0.0,0.0,0.8509,1.0,0.0,0.0,0.8001,1.0,0.0,0.0,0.8001,1.0,0.0,0.0,0.8509,1.0,0.0,0.0,0.8001,1.0,0.0,0.0,0.8001,1.0,0.0,0.0,0.8001,1.0,0.0,0.0,0.8001,1.0,0.0,0.0,0.8509,1.0,0.0,0.0,0.86001}, 44);
SoGroup583->addChild(*SoOrientationInterpolator584);

SoOrientationInterpolator* SoOrientationInterpolator585 = new SoOrientationInterpolator();
SoOrientationInterpolator585->setDEF(QString("r_knee_RotationInterpolator_BasicDive"));
SoOrientationInterpolator585->setKey(new float[]{0.0,0.125,0.2083,0.375,0.5,0.6667,0.9167,1.0}, 8);
SoOrientationInterpolator585->setKeyValue(new float[]{1.0,0.0,0.0,0.8573,1.0,0.0,0.0,0.5351,1.0,0.0,0.0,0.1756,1.0,0.0,0.0,0.1194,1.0,0.0,0.0,0.3153,1.0,0.0,0.0,0.09354,1.0,0.0,0.0,0.08558,1.0,0.0,0.0,0.8573}, 32);
SoGroup583->addChild(*SoOrientationInterpolator585);

SoOrientationInterpolator* SoOrientationInterpolator586 = new SoOrientationInterpolator();
SoOrientationInterpolator586->setDEF(QString("r_hip_RotationInterpolator_BasicDive"));
SoOrientationInterpolator586->setKey(new float[]{0.0,0.125,0.2083,0.2917,0.5,0.7917,0.9167,1.0}, 8);
SoOrientationInterpolator586->setKeyValue(new float[]{-0.5831,0.03511,0.8116,0.1481,-0.995,0.02296,0.09674,0.4683,-1.0,0.00192,0.007964,0.4732,-0.998,-0.0158,-0.06102,0.5079,-0.9131,-0.06243,-0.403,0.3361,1.0,0.0,0.0,0.2571,0.9891,-0.02805,0.1444,0.3879,-0.5831,0.03511,0.8116,0.1481}, 32);
SoGroup583->addChild(*SoOrientationInterpolator586);

SoOrientationInterpolator* SoOrientationInterpolator587 = new SoOrientationInterpolator();
SoOrientationInterpolator587->setDEF(QString("l_ankle_RotationInterpolator_BasicDive"));
SoOrientationInterpolator587->setKey(new float[]{0.0,0.125,0.2083,0.375,0.4583,0.5,0.6667,0.75,0.7917,0.9167,1.0}, 11);
SoOrientationInterpolator587->setKeyValue(new float[]{1.0,0.0,0.0,0.6001,1.0,0.0,0.0,0.6509,1.0,0.0,0.0,0.6001,1.0,0.0,0.0,0.6001,1.0,0.0,0.0,0.6509,1.0,0.0,0.0,0.6001,1.0,0.0,0.0,0.6001,1.0,0.0,0.0,0.6509,1.0,0.0,0.0,0.6001,1.0,0.0,0.0,0.6509,1.0,0.0,0.0,0.6001}, 44);
SoGroup583->addChild(*SoOrientationInterpolator587);

SoOrientationInterpolator* SoOrientationInterpolator588 = new SoOrientationInterpolator();
SoOrientationInterpolator588->setDEF(QString("l_knee_RotationInterpolator_BasicDive"));
SoOrientationInterpolator588->setKey(new float[]{0.0,0.2083,0.375,0.5,0.6667,0.7917,0.9167,1.0}, 8);
SoOrientationInterpolator588->setKeyValue(new float[]{1.0,0.0,0.0,0.3226,1.0,0.0,0.0,0.1556,1.0,0.0,0.0,0.08678,1.0,0.0,0.0,0.8751,1.0,0.0,0.0,1.131,1.0,0.0,0.0,0.09961,1.0,0.0,0.0,0.3942,1.0,0.0,0.0,0.3226}, 32);
SoGroup583->addChild(*SoOrientationInterpolator588);

SoOrientationInterpolator* SoOrientationInterpolator589 = new SoOrientationInterpolator();
SoOrientationInterpolator589->setDEF(QString("l_hip_RotationInterpolator_BasicDive"));
SoOrientationInterpolator589->setKey(new float[]{0.0,0.25,0.375,0.6667,0.7917,0.9167,1.0}, 7);
SoOrientationInterpolator589->setKeyValue(new float[]{-0.873,0.06094,0.484,0.2865,0.9963,-0.01057,0.08481,0.2488,0.9965,0.01591,-0.08222,0.3836,-1.0,0.0,0.0,0.5518,-0.9964,0.02231,0.0817,0.5351,-0.9809,0.04912,0.1881,0.5204,-0.873,0.06094,0.484,0.2865}, 28);
SoGroup583->addChild(*SoOrientationInterpolator589);

SoOrientationInterpolator* SoOrientationInterpolator590 = new SoOrientationInterpolator();
SoOrientationInterpolator590->setDEF(QString("lower_body_RotationInterpolator_BasicDive"));
SoOrientationInterpolator590->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator590->setKeyValue(new float[]{0.0,0.0,-1.0,0.1056,0.0,0.0,1.0,0.09018,0.0,0.0,-1.0,0.1056}, 12);
SoGroup583->addChild(*SoOrientationInterpolator590);

SoOrientationInterpolator* SoOrientationInterpolator591 = new SoOrientationInterpolator();
SoOrientationInterpolator591->setDEF(QString("r_wrist_RotationInterpolator_BasicDive"));
SoOrientationInterpolator591->setKey(new float[]{0.0,0.28,0.32,0.64,0.76,1.0}, 6);
SoOrientationInterpolator591->setKeyValue(new float[]{0.0,0.0,1.0,0.0,-0.0585279,0.983903,-0.168849,1.85956,-0.0585279,0.983903,-0.168849,1.85956,-0.00222418,0.99801,-0.0630095,1.46072,0.0,1.0,0.0,0.497349,0.0,0.0,1.0,0.0}, 24);
SoGroup583->addChild(*SoOrientationInterpolator591);

SoOrientationInterpolator* SoOrientationInterpolator592 = new SoOrientationInterpolator();
SoOrientationInterpolator592->setDEF(QString("r_elbow_RotationInterpolator_BasicDive"));
SoOrientationInterpolator592->setKey(new float[]{0.0,0.28,0.32,0.64,0.76,1.0}, 6);
SoOrientationInterpolator592->setKeyValue(new float[]{0.0,0.0,1.0,0.0,-1.0,0.0,0.0,0.04151,-1.0,0.0,0.0,0.04151,-1.0,0.0,0.0,0.5855,-1.0,0.0,0.0,0.5852,0.0,0.0,1.0,0.0}, 24);
SoGroup583->addChild(*SoOrientationInterpolator592);

SoOrientationInterpolator* SoOrientationInterpolator593 = new SoOrientationInterpolator();
SoOrientationInterpolator593->setDEF(QString("r_shoulder_RotationInterpolator_BasicDive"));
SoOrientationInterpolator593->setKey(new float[]{0.0,0.45,0.64,0.76,0.88,1.0}, 6);
SoOrientationInterpolator593->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.9992,0.02042,0.03558,7.2,0.9989,-0.04623,0.005159,4.079,-0.8687,-0.2525,-0.4261,1.501,-0.941,-0.2893,-0.1754,0.4788,0.0,0.0,1.0,0.0}, 24);
SoGroup583->addChild(*SoOrientationInterpolator593);

SoOrientationInterpolator* SoOrientationInterpolator594 = new SoOrientationInterpolator();
SoOrientationInterpolator594->setDEF(QString("l_wrist_RotationInterpolator_BasicDive"));
SoOrientationInterpolator594->setKey(new float[]{0.0,0.32,0.64,0.88,1.0}, 5);
SoOrientationInterpolator594->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.067,0.98,-0.128,4.15,0.067,0.98,-0.128,4.15,0.067,0.98,-0.128,4.15,0.0,0.0,1.0,0.0}, 20);
SoGroup583->addChild(*SoOrientationInterpolator594);

SoOrientationInterpolator* SoOrientationInterpolator595 = new SoOrientationInterpolator();
SoOrientationInterpolator595->setDEF(QString("l_elbow_RotationInterpolator_BasicDive"));
SoOrientationInterpolator595->setKey(new float[]{0.0,0.28,0.32,0.64,0.76,1.0}, 6);
SoOrientationInterpolator595->setKeyValue(new float[]{0.0,0.0,1.0,0.0,-1.0,0.0,0.0,0.1229,-1.0,0.0,0.0,0.1229,-1.0,0.0,0.0,0.5976,-1.0,0.0,0.0,0.3917,0.0,0.0,1.0,0.0}, 24);
SoGroup583->addChild(*SoOrientationInterpolator595);

SoOrientationInterpolator* SoOrientationInterpolator596 = new SoOrientationInterpolator();
SoOrientationInterpolator596->setDEF(QString("l_shoulder_RotationInterpolator_BasicDive"));
SoOrientationInterpolator596->setKey(new float[]{0.0,0.25,0.375,0.6667,0.7917,0.9167,1.0}, 7);
SoOrientationInterpolator596->setKeyValue(new float[]{0.0,0.0,1.0,0.1,0.0,0.0,1.0,0.2,0.0,0.0,1.0,0.2,0.86,0.25,0.42,0.5,0.86,0.25,0.42,0.8,0.86,0.25,0.42,0.4,0.86,0.25,0.42,0.2}, 28);
SoGroup583->addChild(*SoOrientationInterpolator596);

SoOrientationInterpolator* SoOrientationInterpolator597 = new SoOrientationInterpolator();
SoOrientationInterpolator597->setDEF(QString("head_RotationInterpolator_BasicDive"));
SoOrientationInterpolator597->setKey(new float[]{0.0,0.28,0.3,0.32,0.4,0.45,0.6,0.65,0.7,0.75,0.85,0.9,0.95,1.0}, 14);
SoOrientationInterpolator597->setKeyValue(new float[]{-1.0,0.0,0.0,1.0,-1.0,0.0,0.0,1.0,-1.0,0.0,0.0,0.999,-1.0,0.0,0.0,0.99,-1.0,0.0,0.0,0.99,-1.0,0.0,0.0,0.9,-1.0,0.0,0.0,0.9,-1.0,0.0,0.0,0.9,-1.0,0.0,0.0,0.9,-1.0,0.0,0.0,0.9,-1.0,0.0,0.0,0.9,-1.0,0.0,0.0,0.9,-1.0,0.0,0.0,0.9,-1.0,0.0,0.0,1.0}, 56);
SoGroup583->addChild(*SoOrientationInterpolator597);

SoOrientationInterpolator* SoOrientationInterpolator598 = new SoOrientationInterpolator();
SoOrientationInterpolator598->setDEF(QString("neck_RotationInterpolator_BasicDive"));
SoOrientationInterpolator598->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator598->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 8);
SoGroup583->addChild(*SoOrientationInterpolator598);

SoOrientationInterpolator* SoOrientationInterpolator599 = new SoOrientationInterpolator();
SoOrientationInterpolator599->setDEF(QString("upper_body_RotationInterpolator_BasicDive"));
SoOrientationInterpolator599->setKey(new float[]{0.0,0.2083,0.375,0.75,0.8333,1.0}, 6);
SoOrientationInterpolator599->setKeyValue(new float[]{0.0,1.0,0.0,0.0826,-0.01972,-0.5974,0.8017,0.08231,0.009296,-0.9648,0.2627,0.1734,-0.01238,0.9549,-0.2968,0.08732,-0.008125,0.9691,-0.2463,0.158,0.0,1.0,0.0,0.0826}, 24);
SoGroup583->addChild(*SoOrientationInterpolator599);

SoOrientationInterpolator* SoOrientationInterpolator600 = new SoOrientationInterpolator();
SoOrientationInterpolator600->setDEF(QString("whole_body_RotationInterpolator_BasicDive"));
SoOrientationInterpolator600->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator600->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 8);
SoGroup583->addChild(*SoOrientationInterpolator600);

SoPositionInterpolator* SoPositionInterpolator601 = new SoPositionInterpolator();
SoPositionInterpolator601->setDEF(QString("whole_body_TranslationInterpolator_BasicDive"));
SoPositionInterpolator601->setKey(new float[]{0.0,0.04167,0.125,0.1667,0.2083,0.25,0.2917,0.375,0.4583,0.5,0.5417,0.5833,0.625,0.7083,0.75,0.7917,0.875,0.9167,1.0}, 19);
SoPositionInterpolator601->setKeyValue(new float[]{0.0,-0.00928,0.0,0.0,-0.003858,0.0,0.0,-0.008847,0.0,0.0,-0.01486,0.0,0.0,-0.02641,0.0,0.0,-0.03934,0.0,0.0,-0.0502,0.0,0.0,-0.07469,0.0,0.0,-0.02732,0.0,0.0,-0.01608,0.0,0.0,-0.01129,0.0,0.0,-0.005819,0.0,0.0,-0.002004,0.0,0.0,-0.002579,0.0,0.0,-0.0143,0.0,0.0,-0.03799,0.0,0.0,-0.05648,0.0,0.0,-0.045,0.0,0.0,-0.00928,0.0}, 57);
SoGroup583->addChild(*SoPositionInterpolator601);

SoTimeSensor* SoTimeSensor602 = new SoTimeSensor();
SoTimeSensor602->setDEF(QString("Dive_Time"));
SoTimeSensor602->setCycleInterval(7);
SoTimeSensor602->setLoop(true);
SoTimeSensor602->setStartTime(-1);
SoGroup583->addChild(*SoTimeSensor602);

SoProximitySensor* SoProximitySensor603 = new SoProximitySensor();
SoProximitySensor603->setDEF(QString("TriggerProximitySensor"));
SoProximitySensor603->setSize(new float[]{50.0,50.0,50.0});
SoGroup583->addChild(*SoProximitySensor603);

SoGroup582->addChild(*SoGroup583);

SoNode14->addChild(*SoGroup582);

SoROUTE* SoROUTE604 = new SoROUTE();
SoROUTE604->setFromNode(QString("FinTriggerProximitySensor"));
SoROUTE604->setFromField(QString("isActive"));
SoROUTE604->setToNode(QString("FinClock"));
SoROUTE604->setToField(QString("set_enabled"));
SoNode14->addChild(*SoROUTE604);

SoROUTE* SoROUTE605 = new SoROUTE();
SoROUTE605->setFromNode(QString("FinClock"));
SoROUTE605->setFromField(QString("fraction_changed"));
SoROUTE605->setToNode(QString("FinScript"));
SoROUTE605->setToField(QString("set_fraction"));
SoNode14->addChild(*SoROUTE605);

SoROUTE* SoROUTE606 = new SoROUTE();
SoROUTE606->setFromNode(QString("FinScript"));
SoROUTE606->setFromField(QString("keyValueR"));
SoROUTE606->setToNode(QString("Finr"));
SoROUTE606->setToField(QString("set_spine"));
SoNode14->addChild(*SoROUTE606);

SoROUTE* SoROUTE607 = new SoROUTE();
SoROUTE607->setFromNode(QString("FinScript"));
SoROUTE607->setFromField(QString("keyValueL"));
SoROUTE607->setToNode(QString("Finl"));
SoROUTE607->setToField(QString("set_spine"));
SoNode14->addChild(*SoROUTE607);

SoROUTE* SoROUTE608 = new SoROUTE();
SoROUTE608->setFromNode(QString("BubbleClock"));
SoROUTE608->setFromField(QString("fraction_changed"));
SoROUTE608->setToNode(QString("BubblePath1"));
SoROUTE608->setToField(QString("set_fraction"));
SoNode14->addChild(*SoROUTE608);

SoROUTE* SoROUTE609 = new SoROUTE();
SoROUTE609->setFromNode(QString("BubbleClock"));
SoROUTE609->setFromField(QString("fraction_changed"));
SoROUTE609->setToNode(QString("BubblePath2"));
SoROUTE609->setToField(QString("set_fraction"));
SoNode14->addChild(*SoROUTE609);

SoROUTE* SoROUTE610 = new SoROUTE();
SoROUTE610->setFromNode(QString("BubbleClock"));
SoROUTE610->setFromField(QString("fraction_changed"));
SoROUTE610->setToNode(QString("BubblePath3"));
SoROUTE610->setToField(QString("set_fraction"));
SoNode14->addChild(*SoROUTE610);

SoROUTE* SoROUTE611 = new SoROUTE();
SoROUTE611->setFromNode(QString("BubbleClock"));
SoROUTE611->setFromField(QString("fraction_changed"));
SoROUTE611->setToNode(QString("BubblePath4"));
SoROUTE611->setToField(QString("set_fraction"));
SoNode14->addChild(*SoROUTE611);

SoROUTE* SoROUTE612 = new SoROUTE();
SoROUTE612->setFromNode(QString("BubbleClock"));
SoROUTE612->setFromField(QString("fraction_changed"));
SoROUTE612->setToNode(QString("BubblePath5"));
SoROUTE612->setToField(QString("set_fraction"));
SoNode14->addChild(*SoROUTE612);

SoROUTE* SoROUTE613 = new SoROUTE();
SoROUTE613->setFromNode(QString("BubbleClock"));
SoROUTE613->setFromField(QString("fraction_changed"));
SoROUTE613->setToNode(QString("BubblePath6"));
SoROUTE613->setToField(QString("set_fraction"));
SoNode14->addChild(*SoROUTE613);

SoROUTE* SoROUTE614 = new SoROUTE();
SoROUTE614->setFromNode(QString("BubbleClock"));
SoROUTE614->setFromField(QString("fraction_changed"));
SoROUTE614->setToNode(QString("BubblePath7"));
SoROUTE614->setToField(QString("set_fraction"));
SoNode14->addChild(*SoROUTE614);

SoROUTE* SoROUTE615 = new SoROUTE();
SoROUTE615->setFromNode(QString("BubbleClock"));
SoROUTE615->setFromField(QString("fraction_changed"));
SoROUTE615->setToNode(QString("BubblePath8"));
SoROUTE615->setToField(QString("set_fraction"));
SoNode14->addChild(*SoROUTE615);

SoROUTE* SoROUTE616 = new SoROUTE();
SoROUTE616->setFromNode(QString("BubbleClock"));
SoROUTE616->setFromField(QString("fraction_changed"));
SoROUTE616->setToNode(QString("BubblePath9"));
SoROUTE616->setToField(QString("set_fraction"));
SoNode14->addChild(*SoROUTE616);

SoROUTE* SoROUTE617 = new SoROUTE();
SoROUTE617->setFromNode(QString("BubbleClock"));
SoROUTE617->setFromField(QString("fraction_changed"));
SoROUTE617->setToNode(QString("BubblePath10"));
SoROUTE617->setToField(QString("set_fraction"));
SoNode14->addChild(*SoROUTE617);

SoROUTE* SoROUTE618 = new SoROUTE();
SoROUTE618->setFromNode(QString("BubblePath1"));
SoROUTE618->setFromField(QString("value_changed"));
SoROUTE618->setToNode(QString("bubble1"));
SoROUTE618->setToField(QString("set_translation"));
SoNode14->addChild(*SoROUTE618);

SoROUTE* SoROUTE619 = new SoROUTE();
SoROUTE619->setFromNode(QString("BubblePath2"));
SoROUTE619->setFromField(QString("value_changed"));
SoROUTE619->setToNode(QString("bubble2"));
SoROUTE619->setToField(QString("set_translation"));
SoNode14->addChild(*SoROUTE619);

SoROUTE* SoROUTE620 = new SoROUTE();
SoROUTE620->setFromNode(QString("BubblePath3"));
SoROUTE620->setFromField(QString("value_changed"));
SoROUTE620->setToNode(QString("bubble3"));
SoROUTE620->setToField(QString("set_translation"));
SoNode14->addChild(*SoROUTE620);

SoROUTE* SoROUTE621 = new SoROUTE();
SoROUTE621->setFromNode(QString("BubblePath4"));
SoROUTE621->setFromField(QString("value_changed"));
SoROUTE621->setToNode(QString("bubble4"));
SoROUTE621->setToField(QString("set_translation"));
SoNode14->addChild(*SoROUTE621);

SoROUTE* SoROUTE622 = new SoROUTE();
SoROUTE622->setFromNode(QString("BubblePath5"));
SoROUTE622->setFromField(QString("value_changed"));
SoROUTE622->setToNode(QString("bubble5"));
SoROUTE622->setToField(QString("set_translation"));
SoNode14->addChild(*SoROUTE622);

SoROUTE* SoROUTE623 = new SoROUTE();
SoROUTE623->setFromNode(QString("BubblePath6"));
SoROUTE623->setFromField(QString("value_changed"));
SoROUTE623->setToNode(QString("bubble6"));
SoROUTE623->setToField(QString("set_translation"));
SoNode14->addChild(*SoROUTE623);

SoROUTE* SoROUTE624 = new SoROUTE();
SoROUTE624->setFromNode(QString("BubblePath7"));
SoROUTE624->setFromField(QString("value_changed"));
SoROUTE624->setToNode(QString("bubble7"));
SoROUTE624->setToField(QString("set_translation"));
SoNode14->addChild(*SoROUTE624);

SoROUTE* SoROUTE625 = new SoROUTE();
SoROUTE625->setFromNode(QString("BubblePath8"));
SoROUTE625->setFromField(QString("value_changed"));
SoROUTE625->setToNode(QString("bubble8"));
SoROUTE625->setToField(QString("set_translation"));
SoNode14->addChild(*SoROUTE625);

SoROUTE* SoROUTE626 = new SoROUTE();
SoROUTE626->setFromNode(QString("BubblePath9"));
SoROUTE626->setFromField(QString("value_changed"));
SoROUTE626->setToNode(QString("bubble9"));
SoROUTE626->setToField(QString("set_translation"));
SoNode14->addChild(*SoROUTE626);

SoROUTE* SoROUTE627 = new SoROUTE();
SoROUTE627->setFromNode(QString("BubblePath10"));
SoROUTE627->setFromField(QString("value_changed"));
SoROUTE627->setToNode(QString("bubble10"));
SoROUTE627->setToField(QString("set_translation"));
SoNode14->addChild(*SoROUTE627);

SoROUTE* SoROUTE628 = new SoROUTE();
SoROUTE628->setFromNode(QString("TriggerProximitySensor"));
SoROUTE628->setFromField(QString("enterTime"));
SoROUTE628->setToNode(QString("Dive_Time"));
SoROUTE628->setToField(QString("set_startTime"));
SoNode14->addChild(*SoROUTE628);

SoROUTE* SoROUTE629 = new SoROUTE();
SoROUTE629->setFromNode(QString("Dive_Time"));
SoROUTE629->setFromField(QString("fraction_changed"));
SoROUTE629->setToNode(QString("r_ankle_RotationInterpolator_BasicDive"));
SoROUTE629->setToField(QString("set_fraction"));
SoNode14->addChild(*SoROUTE629);

SoROUTE* SoROUTE630 = new SoROUTE();
SoROUTE630->setFromNode(QString("Dive_Time"));
SoROUTE630->setFromField(QString("fraction_changed"));
SoROUTE630->setToNode(QString("r_knee_RotationInterpolator_BasicDive"));
SoROUTE630->setToField(QString("set_fraction"));
SoNode14->addChild(*SoROUTE630);

SoROUTE* SoROUTE631 = new SoROUTE();
SoROUTE631->setFromNode(QString("Dive_Time"));
SoROUTE631->setFromField(QString("fraction_changed"));
SoROUTE631->setToNode(QString("r_hip_RotationInterpolator_BasicDive"));
SoROUTE631->setToField(QString("set_fraction"));
SoNode14->addChild(*SoROUTE631);

SoROUTE* SoROUTE632 = new SoROUTE();
SoROUTE632->setFromNode(QString("Dive_Time"));
SoROUTE632->setFromField(QString("fraction_changed"));
SoROUTE632->setToNode(QString("l_ankle_RotationInterpolator_BasicDive"));
SoROUTE632->setToField(QString("set_fraction"));
SoNode14->addChild(*SoROUTE632);

SoROUTE* SoROUTE633 = new SoROUTE();
SoROUTE633->setFromNode(QString("Dive_Time"));
SoROUTE633->setFromField(QString("fraction_changed"));
SoROUTE633->setToNode(QString("l_knee_RotationInterpolator_BasicDive"));
SoROUTE633->setToField(QString("set_fraction"));
SoNode14->addChild(*SoROUTE633);

SoROUTE* SoROUTE634 = new SoROUTE();
SoROUTE634->setFromNode(QString("Dive_Time"));
SoROUTE634->setFromField(QString("fraction_changed"));
SoROUTE634->setToNode(QString("l_hip_RotationInterpolator_BasicDive"));
SoROUTE634->setToField(QString("set_fraction"));
SoNode14->addChild(*SoROUTE634);

SoROUTE* SoROUTE635 = new SoROUTE();
SoROUTE635->setFromNode(QString("Dive_Time"));
SoROUTE635->setFromField(QString("fraction_changed"));
SoROUTE635->setToNode(QString("lower_body_RotationInterpolator_BasicDive"));
SoROUTE635->setToField(QString("set_fraction"));
SoNode14->addChild(*SoROUTE635);

SoROUTE* SoROUTE636 = new SoROUTE();
SoROUTE636->setFromNode(QString("Dive_Time"));
SoROUTE636->setFromField(QString("fraction_changed"));
SoROUTE636->setToNode(QString("head_RotationInterpolator_BasicDive"));
SoROUTE636->setToField(QString("set_fraction"));
SoNode14->addChild(*SoROUTE636);

SoROUTE* SoROUTE637 = new SoROUTE();
SoROUTE637->setFromNode(QString("Dive_Time"));
SoROUTE637->setFromField(QString("fraction_changed"));
SoROUTE637->setToNode(QString("neck_RotationInterpolator_BasicDive"));
SoROUTE637->setToField(QString("set_fraction"));
SoNode14->addChild(*SoROUTE637);

SoROUTE* SoROUTE638 = new SoROUTE();
SoROUTE638->setFromNode(QString("Dive_Time"));
SoROUTE638->setFromField(QString("fraction_changed"));
SoROUTE638->setToNode(QString("upper_body_RotationInterpolator_BasicDive"));
SoROUTE638->setToField(QString("set_fraction"));
SoNode14->addChild(*SoROUTE638);

SoROUTE* SoROUTE639 = new SoROUTE();
SoROUTE639->setFromNode(QString("Dive_Time"));
SoROUTE639->setFromField(QString("fraction_changed"));
SoROUTE639->setToNode(QString("whole_body_RotationInterpolator_BasicDive"));
SoROUTE639->setToField(QString("set_fraction"));
SoNode14->addChild(*SoROUTE639);

SoROUTE* SoROUTE640 = new SoROUTE();
SoROUTE640->setFromNode(QString("Dive_Time"));
SoROUTE640->setFromField(QString("fraction_changed"));
SoROUTE640->setToNode(QString("whole_body_TranslationInterpolator_BasicDive"));
SoROUTE640->setToField(QString("set_fraction"));
SoNode14->addChild(*SoROUTE640);

SoROUTE* SoROUTE641 = new SoROUTE();
SoROUTE641->setFromNode(QString("r_ankle_RotationInterpolator_BasicDive"));
SoROUTE641->setFromField(QString("value_changed"));
SoROUTE641->setToNode(QString("hanim_r_ankle"));
SoROUTE641->setToField(QString("set_rotation"));
SoNode14->addChild(*SoROUTE641);

SoROUTE* SoROUTE642 = new SoROUTE();
SoROUTE642->setFromNode(QString("r_knee_RotationInterpolator_BasicDive"));
SoROUTE642->setFromField(QString("value_changed"));
SoROUTE642->setToNode(QString("hanim_r_knee"));
SoROUTE642->setToField(QString("set_rotation"));
SoNode14->addChild(*SoROUTE642);

SoROUTE* SoROUTE643 = new SoROUTE();
SoROUTE643->setFromNode(QString("r_hip_RotationInterpolator_BasicDive"));
SoROUTE643->setFromField(QString("value_changed"));
SoROUTE643->setToNode(QString("hanim_r_hip"));
SoROUTE643->setToField(QString("set_rotation"));
SoNode14->addChild(*SoROUTE643);

SoROUTE* SoROUTE644 = new SoROUTE();
SoROUTE644->setFromNode(QString("l_ankle_RotationInterpolator_BasicDive"));
SoROUTE644->setFromField(QString("value_changed"));
SoROUTE644->setToNode(QString("hanim_l_ankle"));
SoROUTE644->setToField(QString("set_rotation"));
SoNode14->addChild(*SoROUTE644);

SoROUTE* SoROUTE645 = new SoROUTE();
SoROUTE645->setFromNode(QString("l_knee_RotationInterpolator_BasicDive"));
SoROUTE645->setFromField(QString("value_changed"));
SoROUTE645->setToNode(QString("hanim_l_knee"));
SoROUTE645->setToField(QString("set_rotation"));
SoNode14->addChild(*SoROUTE645);

SoROUTE* SoROUTE646 = new SoROUTE();
SoROUTE646->setFromNode(QString("l_hip_RotationInterpolator_BasicDive"));
SoROUTE646->setFromField(QString("value_changed"));
SoROUTE646->setToNode(QString("finWarpScript"));
SoROUTE646->setToField(QString("set_rotationL"));
SoNode14->addChild(*SoROUTE646);

SoROUTE* SoROUTE647 = new SoROUTE();
SoROUTE647->setFromNode(QString("l_hip_RotationInterpolator_BasicDive"));
SoROUTE647->setFromField(QString("value_changed"));
SoROUTE647->setToNode(QString("finWarpScript"));
SoROUTE647->setToField(QString("set_rotationR"));
SoNode14->addChild(*SoROUTE647);

SoROUTE* SoROUTE648 = new SoROUTE();
SoROUTE648->setFromNode(QString("finWarpScript"));
SoROUTE648->setFromField(QString("fin_warpL"));
SoROUTE648->setToNode(QString("FinScript"));
SoROUTE648->setToField(QString("finL"));
SoNode14->addChild(*SoROUTE648);

SoROUTE* SoROUTE649 = new SoROUTE();
SoROUTE649->setFromNode(QString("finWarpScript"));
SoROUTE649->setFromField(QString("fin_warpR"));
SoROUTE649->setToNode(QString("FinScript"));
SoROUTE649->setToField(QString("finR"));
SoNode14->addChild(*SoROUTE649);

SoROUTE* SoROUTE650 = new SoROUTE();
SoROUTE650->setFromNode(QString("l_hip_RotationInterpolator_BasicDive"));
SoROUTE650->setFromField(QString("value_changed"));
SoROUTE650->setToNode(QString("hanim_l_hip"));
SoROUTE650->setToField(QString("set_rotation"));
SoNode14->addChild(*SoROUTE650);

SoROUTE* SoROUTE651 = new SoROUTE();
SoROUTE651->setFromNode(QString("lower_body_RotationInterpolator_BasicDive"));
SoROUTE651->setFromField(QString("value_changed"));
SoROUTE651->setToNode(QString("hanim_sacroiliac"));
SoROUTE651->setToField(QString("set_rotation"));
SoNode14->addChild(*SoROUTE651);

SoROUTE* SoROUTE652 = new SoROUTE();
SoROUTE652->setFromNode(QString("head_RotationInterpolator_BasicDive"));
SoROUTE652->setFromField(QString("value_changed"));
SoROUTE652->setToNode(QString("hanim_skullbase"));
SoROUTE652->setToField(QString("set_rotation"));
SoNode14->addChild(*SoROUTE652);

SoROUTE* SoROUTE653 = new SoROUTE();
SoROUTE653->setFromNode(QString("neck_RotationInterpolator_BasicDive"));
SoROUTE653->setFromField(QString("value_changed"));
SoROUTE653->setToNode(QString("hanim_vc4"));
SoROUTE653->setToField(QString("set_rotation"));
SoNode14->addChild(*SoROUTE653);

SoROUTE* SoROUTE654 = new SoROUTE();
SoROUTE654->setFromNode(QString("upper_body_RotationInterpolator_BasicDive"));
SoROUTE654->setFromField(QString("value_changed"));
SoROUTE654->setToNode(QString("hanim_vl1"));
SoROUTE654->setToField(QString("set_rotation"));
SoNode14->addChild(*SoROUTE654);

SoROUTE* SoROUTE655 = new SoROUTE();
SoROUTE655->setFromNode(QString("whole_body_RotationInterpolator_BasicDive"));
SoROUTE655->setFromField(QString("value_changed"));
SoROUTE655->setToNode(QString("hanim_humanoid_root"));
SoROUTE655->setToField(QString("set_rotation"));
SoNode14->addChild(*SoROUTE655);

SoROUTE* SoROUTE656 = new SoROUTE();
SoROUTE656->setFromNode(QString("whole_body_TranslationInterpolator_BasicDive"));
SoROUTE656->setFromField(QString("value_changed"));
SoROUTE656->setToNode(QString("hanim_humanoid_root"));
SoROUTE656->setToField(QString("set_translation"));
SoNode14->addChild(*SoROUTE656);

SoROUTE* SoROUTE657 = new SoROUTE();
SoROUTE657->setFromNode(QString("Dive_Time"));
SoROUTE657->setFromField(QString("fraction_changed"));
SoROUTE657->setToNode(QString("r_wrist_RotationInterpolator_BasicDive"));
SoROUTE657->setToField(QString("set_fraction"));
SoNode14->addChild(*SoROUTE657);

SoROUTE* SoROUTE658 = new SoROUTE();
SoROUTE658->setFromNode(QString("Dive_Time"));
SoROUTE658->setFromField(QString("fraction_changed"));
SoROUTE658->setToNode(QString("r_elbow_RotationInterpolator_BasicDive"));
SoROUTE658->setToField(QString("set_fraction"));
SoNode14->addChild(*SoROUTE658);

SoROUTE* SoROUTE659 = new SoROUTE();
SoROUTE659->setFromNode(QString("Dive_Time"));
SoROUTE659->setFromField(QString("fraction_changed"));
SoROUTE659->setToNode(QString("r_shoulder_RotationInterpolator_BasicDive"));
SoROUTE659->setToField(QString("set_fraction"));
SoNode14->addChild(*SoROUTE659);

SoROUTE* SoROUTE660 = new SoROUTE();
SoROUTE660->setFromNode(QString("Dive_Time"));
SoROUTE660->setFromField(QString("fraction_changed"));
SoROUTE660->setToNode(QString("l_wrist_RotationInterpolator_BasicDive"));
SoROUTE660->setToField(QString("set_fraction"));
SoNode14->addChild(*SoROUTE660);

SoROUTE* SoROUTE661 = new SoROUTE();
SoROUTE661->setFromNode(QString("Dive_Time"));
SoROUTE661->setFromField(QString("fraction_changed"));
SoROUTE661->setToNode(QString("l_elbow_RotationInterpolator_BasicDive"));
SoROUTE661->setToField(QString("set_fraction"));
SoNode14->addChild(*SoROUTE661);

SoROUTE* SoROUTE662 = new SoROUTE();
SoROUTE662->setFromNode(QString("Dive_Time"));
SoROUTE662->setFromField(QString("fraction_changed"));
SoROUTE662->setToNode(QString("l_shoulder_RotationInterpolator_BasicDive"));
SoROUTE662->setToField(QString("set_fraction"));
SoNode14->addChild(*SoROUTE662);

SoROUTE* SoROUTE663 = new SoROUTE();
SoROUTE663->setFromNode(QString("r_wrist_RotationInterpolator_BasicDive"));
SoROUTE663->setFromField(QString("value_changed"));
SoROUTE663->setToNode(QString("hanim_r_wrist"));
SoROUTE663->setToField(QString("set_rotation"));
SoNode14->addChild(*SoROUTE663);

SoROUTE* SoROUTE664 = new SoROUTE();
SoROUTE664->setFromNode(QString("r_elbow_RotationInterpolator_BasicDive"));
SoROUTE664->setFromField(QString("value_changed"));
SoROUTE664->setToNode(QString("hanim_r_elbow"));
SoROUTE664->setToField(QString("set_rotation"));
SoNode14->addChild(*SoROUTE664);

SoROUTE* SoROUTE665 = new SoROUTE();
SoROUTE665->setFromNode(QString("r_shoulder_RotationInterpolator_BasicDive"));
SoROUTE665->setFromField(QString("value_changed"));
SoROUTE665->setToNode(QString("hanim_r_shoulder"));
SoROUTE665->setToField(QString("set_rotation"));
SoNode14->addChild(*SoROUTE665);

SoROUTE* SoROUTE666 = new SoROUTE();
SoROUTE666->setFromNode(QString("l_wrist_RotationInterpolator_BasicDive"));
SoROUTE666->setFromField(QString("value_changed"));
SoROUTE666->setToNode(QString("hanim_l_wrist"));
SoROUTE666->setToField(QString("set_rotation"));
SoNode14->addChild(*SoROUTE666);

SoROUTE* SoROUTE667 = new SoROUTE();
SoROUTE667->setFromNode(QString("l_elbow_RotationInterpolator_BasicDive"));
SoROUTE667->setFromField(QString("value_changed"));
SoROUTE667->setToNode(QString("hanim_l_elbow"));
SoROUTE667->setToField(QString("set_rotation"));
SoNode14->addChild(*SoROUTE667);

SoROUTE* SoROUTE668 = new SoROUTE();
SoROUTE668->setFromNode(QString("l_shoulder_RotationInterpolator_BasicDive"));
SoROUTE668->setFromField(QString("value_changed"));
SoROUTE668->setToNode(QString("hanim_l_shoulder"));
SoROUTE668->setToField(QString("set_rotation"));
SoNode14->addChild(*SoROUTE668);

SoSceneManager0->setSceneGraph(*SoNode14);

return 0;
}
