
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
Someta2->setContent(QString("NancyPrototypes.x3d"));
Sohead1->addMeta(*Someta2);

Someta* Someta3 = new Someta();
Someta3->setName(QString("creator"));
Someta3->setContent(QString("Cindy Ballreich"));
Sohead1->addMeta(*Someta3);

Someta* Someta4 = new Someta();
Someta4->setName(QString("translator"));
Someta4->setContent(QString("Tom Miller"));
Sohead1->addMeta(*Someta4);

Someta* Someta5 = new Someta();
Someta5->setName(QString("translator"));
Someta5->setContent(QString("Don Brutzman"));
Sohead1->addMeta(*Someta5);

Someta* Someta6 = new Someta();
Someta6->setName(QString("created"));
Someta6->setContent(QString("9 July 2000"));
Sohead1->addMeta(*Someta6);

Someta* Someta7 = new Someta();
Someta7->setName(QString("modified"));
Someta7->setContent(QString("Mon, 15 Sep 2025 05:20:50 GMT"));
Sohead1->addMeta(*Someta7);

Someta* Someta8 = new Someta();
Someta8->setName(QString("description"));
Someta8->setContent(QString("Canonical HAnim 1.1 specification example, using ProtoDeclaration and ProtoInstance instead of native X3D tags. Prototype definitions are a compatible combination of version 1.0 and 2.0 prototype interfaces."));
Sohead1->addMeta(*Someta8);

Someta* Someta9 = new Someta();
Someta9->setName(QString("warning"));
Someta9->setContent(QString("using ProtoDeclare is only for developmental experimentation, use X3D native tags for Humanoids instead"));
Sohead1->addMeta(*Someta9);

Someta* Someta10 = new Someta();
Someta10->setName(QString("reference"));
Someta10->setContent(QString("NancyNativeTags.x3d"));
Sohead1->addMeta(*Someta10);

Someta* Someta11 = new Someta();
Someta11->setName(QString("TODO"));
Someta11->setContent(QString("Material color of neck and arms is ignored/incorrect in Xj3D, possily DEF/USE problem."));
Sohead1->addMeta(*Someta11);

Someta* Someta12 = new Someta();
Someta12->setName(QString("identifier"));
Someta12->setContent(QString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/NancyPrototypes.x3d"));
Sohead1->addMeta(*Someta12);

SoSceneManager0->setHead(*Sohead1);

SoNode* SoNode13 = new SoNode();
SoProtoDeclare* SoProtoDeclare14 = new SoProtoDeclare();
SoProtoDeclare14->setName(QString("Displacer"));
SoProtoDeclare14->setAppinfo(QString("A Displacer can be used in three different ways: (a) identify the vertices corresponding to a particular feature on a Segment (b) represent a particular muscular action which displaces the vertices in various directions (linearly or radially) and (c) represent a complete configuration of the vertices in a Segment."));
SoProtoDeclare14->setDocumentation(QString("http://HAnim.org/Specifications/HAnim2001/part1/Displacer.html"));
SoProtoInterface* SoProtoInterface15 = new SoProtoInterface();
Sofield* Sofield16 = new Sofield();
Sofield16->setAccessType(QString("inputOutput"));
Sofield16->setType(QString("SFString"));
Sofield16->setName(QString("name"));
SoProtoInterface15->addChild(*Sofield16);

Sofield* Sofield17 = new Sofield();
Sofield17->setAccessType(QString("inputOutput"));
Sofield17->setType(QString("MFInt32"));
Sofield17->setName(QString("coordIndex"));
SoProtoInterface15->addChild(*Sofield17);

Sofield* Sofield18 = new Sofield();
Sofield18->setAccessType(QString("inputOutput"));
Sofield18->setType(QString("MFVec3f"));
Sofield18->setName(QString("displacements"));
SoProtoInterface15->addChild(*Sofield18);

SoProtoDeclare14->addChild(*SoProtoInterface15);

SoProtoBody* SoProtoBody19 = new SoProtoBody();
SoWorldInfo* SoWorldInfo20 = new SoWorldInfo();
SoWorldInfo20->setInfo(new QString[]{QString("null body node")}, 1);
SoProtoBody19->addChild(*SoWorldInfo20);

SoProtoDeclare14->addChild(*SoProtoBody19);

SoNode13->addChild(*SoProtoDeclare14);

SoProtoDeclare* SoProtoDeclare21 = new SoProtoDeclare();
SoProtoDeclare21->setName(QString("Humanoid"));
SoProtoDeclare21->setAppinfo(QString("The Humanoid node serves as overall container for the Joint Segment Site and Viewpoint nodes which define the skeleton geometry and landmarks of the humanoid figure. Additionally the node provides a means for defining information about the author copyright and usage restrictions of the model."));
SoProtoDeclare21->setDocumentation(QString("http://HAnim.org/Specifications/HAnim2001/part1/Humanoid.html"));
SoProtoInterface* SoProtoInterface22 = new SoProtoInterface();
Sofield* Sofield23 = new Sofield();
Sofield23->setAccessType(QString("inputOutput"));
Sofield23->setType(QString("SFString"));
Sofield23->setName(QString("name"));
SoProtoInterface22->addChild(*Sofield23);

Sofield* Sofield24 = new Sofield();
Sofield24->setAccessType(QString("inputOutput"));
Sofield24->setType(QString("SFString"));
Sofield24->setName(QString("version"));
Sofield24->setValue(QString("1.1"));
Sofield24->setAppinfo(QString("legal values: 1.1 or 2.0"));
SoProtoInterface22->addChild(*Sofield24);

Sofield* Sofield25 = new Sofield();
Sofield25->setAccessType(QString("inputOutput"));
Sofield25->setType(QString("SFString"));
Sofield25->setName(QString("humanoidVersion"));
Sofield25->setAppinfo(QString("Version of the humanoid being modeled. Hint: HAnim version 2.0"));
SoProtoInterface22->addChild(*Sofield25);

Sofield* Sofield26 = new Sofield();
Sofield26->setAccessType(QString("inputOutput"));
Sofield26->setType(QString("MFString"));
Sofield26->setName(QString("info"));
SoProtoInterface22->addChild(*Sofield26);

Sofield* Sofield27 = new Sofield();
Sofield27->setAccessType(QString("inputOutput"));
Sofield27->setType(QString("SFVec3f"));
Sofield27->setName(QString("translation"));
SoProtoInterface22->addChild(*Sofield27);

Sofield* Sofield28 = new Sofield();
Sofield28->setAccessType(QString("inputOutput"));
Sofield28->setType(QString("SFRotation"));
Sofield28->setName(QString("rotation"));
SoProtoInterface22->addChild(*Sofield28);

Sofield* Sofield29 = new Sofield();
Sofield29->setAccessType(QString("inputOutput"));
Sofield29->setType(QString("SFVec3f"));
Sofield29->setName(QString("center"));
SoProtoInterface22->addChild(*Sofield29);

Sofield* Sofield30 = new Sofield();
Sofield30->setAccessType(QString("inputOutput"));
Sofield30->setType(QString("SFVec3f"));
Sofield30->setName(QString("scale"));
Sofield30->setValue(QString("1 1 1"));
SoProtoInterface22->addChild(*Sofield30);

Sofield* Sofield31 = new Sofield();
Sofield31->setAccessType(QString("inputOutput"));
Sofield31->setType(QString("SFRotation"));
Sofield31->setName(QString("scaleOrientation"));
SoProtoInterface22->addChild(*Sofield31);

Sofield* Sofield32 = new Sofield();
Sofield32->setAccessType(QString("initializeOnly"));
Sofield32->setType(QString("SFVec3f"));
Sofield32->setName(QString("bboxCenter"));
SoProtoInterface22->addChild(*Sofield32);

Sofield* Sofield33 = new Sofield();
Sofield33->setAccessType(QString("initializeOnly"));
Sofield33->setType(QString("SFVec3f"));
Sofield33->setName(QString("bboxSize"));
Sofield33->setValue(QString("-1 -1 -1"));
SoProtoInterface22->addChild(*Sofield33);

Sofield* Sofield34 = new Sofield();
Sofield34->setAccessType(QString("inputOutput"));
Sofield34->setType(QString("MFNode"));
Sofield34->setName(QString("humanoidBody"));
Sofield34->setAppinfo(QString("HAnim 1.1 field container for body geometry Hint: replaced by 2.0 skeleton"));
Sofield34->setDocumentation(QString("http://HAnim.org/Specifications/HAnim1.1/#humanoid"));
SoProtoInterface22->addChild(*Sofield34);

Sofield* Sofield35 = new Sofield();
Sofield35->setAccessType(QString("inputOutput"));
Sofield35->setType(QString("MFNode"));
Sofield35->setName(QString("skeleton"));
Sofield35->setAppinfo(QString("HAnim 2.0 field container for body geometry Hint: replaces 1.1 humanoidBody"));
Sofield35->setDocumentation(QString("http://HAnim.org/Specifications/HAnim2001/part1/Humanoid.html"));
SoProtoInterface22->addChild(*Sofield35);

Sofield* Sofield36 = new Sofield();
Sofield36->setAccessType(QString("inputOutput"));
Sofield36->setType(QString("MFNode"));
Sofield36->setName(QString("joints"));
Sofield36->setAppinfo(QString("Container field for Joint nodes"));
SoProtoInterface22->addChild(*Sofield36);

Sofield* Sofield37 = new Sofield();
Sofield37->setAccessType(QString("inputOutput"));
Sofield37->setType(QString("MFNode"));
Sofield37->setName(QString("segments"));
Sofield37->setAppinfo(QString("Container field for Segment nodes"));
SoProtoInterface22->addChild(*Sofield37);

Sofield* Sofield38 = new Sofield();
Sofield38->setAccessType(QString("inputOutput"));
Sofield38->setType(QString("MFNode"));
Sofield38->setName(QString("sites"));
Sofield38->setAppinfo(QString("Container field for Site nodes"));
SoProtoInterface22->addChild(*Sofield38);

Sofield* Sofield39 = new Sofield();
Sofield39->setAccessType(QString("inputOutput"));
Sofield39->setType(QString("MFNode"));
Sofield39->setName(QString("viewpoints"));
Sofield39->setAppinfo(QString("Container field for Viewpoint nodes"));
SoProtoInterface22->addChild(*Sofield39);

Sofield* Sofield40 = new Sofield();
Sofield40->setAccessType(QString("inputOutput"));
Sofield40->setType(QString("SFNode"));
Sofield40->setName(QString("skinCoord"));
Sofield40->setAppinfo(QString("Hint: HAnim version 2.0"));
SoProtoInterface22->addChild(*Sofield40);

Sofield* Sofield41 = new Sofield();
Sofield41->setAccessType(QString("inputOutput"));
Sofield41->setType(QString("SFNode"));
Sofield41->setName(QString("skinNormal"));
Sofield41->setAppinfo(QString("Hint: HAnim version 2.0"));
SoProtoInterface22->addChild(*Sofield41);

SoProtoDeclare21->addChild(*SoProtoInterface22);

SoProtoBody* SoProtoBody42 = new SoProtoBody();
SoTransform* SoTransform43 = new SoTransform();
SoTransform43->setDEF(QString("HumanoidTransform"));
SoGroup* SoGroup44 = new SoGroup();
SoGroup44->setDEF(QString("HumanoidGroup1"));
SoIS* SoIS45 = new SoIS();
Soconnect* Soconnect46 = new Soconnect();
Soconnect46->setNodeField(QString("children"));
Soconnect46->setProtoField(QString("humanoidBody"));
SoIS45->addChild(*Soconnect46);

SoGroup44->addChild(*SoIS45);

SoTransform43->addChild(*SoGroup44);

SoGroup* SoGroup47 = new SoGroup();
SoGroup47->setDEF(QString("HumanoidGroup2"));
SoIS* SoIS48 = new SoIS();
Soconnect* Soconnect49 = new Soconnect();
Soconnect49->setNodeField(QString("children"));
Soconnect49->setProtoField(QString("skeleton"));
SoIS48->addChild(*Soconnect49);

SoGroup47->addChild(*SoIS48);

SoTransform43->addChild(*SoGroup47);

SoGroup* SoGroup50 = new SoGroup();
SoGroup50->setDEF(QString("HumanoidGroup3"));
SoIS* SoIS51 = new SoIS();
Soconnect* Soconnect52 = new Soconnect();
Soconnect52->setNodeField(QString("children"));
Soconnect52->setProtoField(QString("viewpoints"));
SoIS51->addChild(*Soconnect52);

SoGroup50->addChild(*SoIS51);

SoTransform43->addChild(*SoGroup50);

SoIS* SoIS53 = new SoIS();
Soconnect* Soconnect54 = new Soconnect();
Soconnect54->setNodeField(QString("translation"));
Soconnect54->setProtoField(QString("translation"));
SoIS53->addChild(*Soconnect54);

Soconnect* Soconnect55 = new Soconnect();
Soconnect55->setNodeField(QString("rotation"));
Soconnect55->setProtoField(QString("rotation"));
SoIS53->addChild(*Soconnect55);

Soconnect* Soconnect56 = new Soconnect();
Soconnect56->setNodeField(QString("scale"));
Soconnect56->setProtoField(QString("scale"));
SoIS53->addChild(*Soconnect56);

Soconnect* Soconnect57 = new Soconnect();
Soconnect57->setNodeField(QString("scaleOrientation"));
Soconnect57->setProtoField(QString("scaleOrientation"));
SoIS53->addChild(*Soconnect57);

Soconnect* Soconnect58 = new Soconnect();
Soconnect58->setNodeField(QString("center"));
Soconnect58->setProtoField(QString("center"));
SoIS53->addChild(*Soconnect58);

Soconnect* Soconnect59 = new Soconnect();
Soconnect59->setNodeField(QString("bboxSize"));
Soconnect59->setProtoField(QString("bboxSize"));
SoIS53->addChild(*Soconnect59);

Soconnect* Soconnect60 = new Soconnect();
Soconnect60->setNodeField(QString("bboxCenter"));
Soconnect60->setProtoField(QString("bboxCenter"));
SoIS53->addChild(*Soconnect60);

SoTransform43->addChild(*SoIS53);

SoProtoBody42->addChild(*SoTransform43);

SoProtoDeclare21->addChild(*SoProtoBody42);

SoNode13->addChild(*SoProtoDeclare21);

SoProtoDeclare* SoProtoDeclare61 = new SoProtoDeclare();
SoProtoDeclare61->setName(QString("Joint"));
SoProtoDeclare61->setAppinfo(QString("The Joint node is used as a building block to describe the articulations of the humanoid figure. Each articulation of the humanoid figure is represented by a Joint node each of which is organized into a hierarchy that describes the overall skeleton of the humanoid."));
SoProtoDeclare61->setDocumentation(QString("http://HAnim.org/Specifications/HAnim2001/part1/Joint.html"));
SoProtoInterface* SoProtoInterface62 = new SoProtoInterface();
Sofield* Sofield63 = new Sofield();
Sofield63->setAccessType(QString("inputOutput"));
Sofield63->setType(QString("SFString"));
Sofield63->setName(QString("name"));
SoProtoInterface62->addChild(*Sofield63);

Sofield* Sofield64 = new Sofield();
Sofield64->setAccessType(QString("inputOutput"));
Sofield64->setType(QString("MFFloat"));
Sofield64->setName(QString("ulimit"));
SoProtoInterface62->addChild(*Sofield64);

Sofield* Sofield65 = new Sofield();
Sofield65->setAccessType(QString("inputOutput"));
Sofield65->setType(QString("MFFloat"));
Sofield65->setName(QString("llimit"));
SoProtoInterface62->addChild(*Sofield65);

Sofield* Sofield66 = new Sofield();
Sofield66->setAccessType(QString("inputOutput"));
Sofield66->setType(QString("SFRotation"));
Sofield66->setName(QString("limitOrientation"));
SoProtoInterface62->addChild(*Sofield66);

Sofield* Sofield67 = new Sofield();
Sofield67->setAccessType(QString("inputOutput"));
Sofield67->setType(QString("MFInt32"));
Sofield67->setName(QString("skinCoordIndex"));
SoProtoInterface62->addChild(*Sofield67);

Sofield* Sofield68 = new Sofield();
Sofield68->setAccessType(QString("inputOutput"));
Sofield68->setType(QString("MFFloat"));
Sofield68->setName(QString("skinCoordWeight"));
SoProtoInterface62->addChild(*Sofield68);

Sofield* Sofield69 = new Sofield();
Sofield69->setAccessType(QString("inputOutput"));
Sofield69->setType(QString("MFFloat"));
Sofield69->setName(QString("stiffness"));
Sofield69->setValue(QString("0 0 0"));
SoProtoInterface62->addChild(*Sofield69);

Sofield* Sofield70 = new Sofield();
Sofield70->setAccessType(QString("inputOutput"));
Sofield70->setType(QString("SFVec3f"));
Sofield70->setName(QString("translation"));
SoProtoInterface62->addChild(*Sofield70);

Sofield* Sofield71 = new Sofield();
Sofield71->setAccessType(QString("inputOutput"));
Sofield71->setType(QString("SFRotation"));
Sofield71->setName(QString("rotation"));
SoProtoInterface62->addChild(*Sofield71);

Sofield* Sofield72 = new Sofield();
Sofield72->setAccessType(QString("inputOutput"));
Sofield72->setType(QString("SFVec3f"));
Sofield72->setName(QString("scale"));
Sofield72->setValue(QString("1 1 1"));
SoProtoInterface62->addChild(*Sofield72);

Sofield* Sofield73 = new Sofield();
Sofield73->setAccessType(QString("inputOutput"));
Sofield73->setType(QString("SFRotation"));
Sofield73->setName(QString("scaleOrientation"));
SoProtoInterface62->addChild(*Sofield73);

Sofield* Sofield74 = new Sofield();
Sofield74->setAccessType(QString("inputOutput"));
Sofield74->setType(QString("SFVec3f"));
Sofield74->setName(QString("center"));
SoProtoInterface62->addChild(*Sofield74);

Sofield* Sofield75 = new Sofield();
Sofield75->setAccessType(QString("initializeOnly"));
Sofield75->setType(QString("SFVec3f"));
Sofield75->setName(QString("bboxCenter"));
SoProtoInterface62->addChild(*Sofield75);

Sofield* Sofield76 = new Sofield();
Sofield76->setAccessType(QString("initializeOnly"));
Sofield76->setType(QString("SFVec3f"));
Sofield76->setName(QString("bboxSize"));
Sofield76->setValue(QString("-1 -1 -1"));
SoProtoInterface62->addChild(*Sofield76);

Sofield* Sofield77 = new Sofield();
Sofield77->setAccessType(QString("inputOutput"));
Sofield77->setType(QString("MFNode"));
Sofield77->setName(QString("children"));
SoProtoInterface62->addChild(*Sofield77);

Sofield* Sofield78 = new Sofield();
Sofield78->setAccessType(QString("inputOnly"));
Sofield78->setType(QString("MFNode"));
Sofield78->setName(QString("addChildren"));
SoProtoInterface62->addChild(*Sofield78);

Sofield* Sofield79 = new Sofield();
Sofield79->setAccessType(QString("inputOnly"));
Sofield79->setType(QString("MFNode"));
Sofield79->setName(QString("removeChildren"));
SoProtoInterface62->addChild(*Sofield79);

SoProtoDeclare61->addChild(*SoProtoInterface62);

SoProtoBody* SoProtoBody80 = new SoProtoBody();
SoTransform* SoTransform81 = new SoTransform();
SoTransform81->setDEF(QString("JointTransform"));
SoIS* SoIS82 = new SoIS();
Soconnect* Soconnect83 = new Soconnect();
Soconnect83->setNodeField(QString("translation"));
Soconnect83->setProtoField(QString("translation"));
SoIS82->addChild(*Soconnect83);

Soconnect* Soconnect84 = new Soconnect();
Soconnect84->setNodeField(QString("rotation"));
Soconnect84->setProtoField(QString("rotation"));
SoIS82->addChild(*Soconnect84);

Soconnect* Soconnect85 = new Soconnect();
Soconnect85->setNodeField(QString("scale"));
Soconnect85->setProtoField(QString("scale"));
SoIS82->addChild(*Soconnect85);

Soconnect* Soconnect86 = new Soconnect();
Soconnect86->setNodeField(QString("scaleOrientation"));
Soconnect86->setProtoField(QString("scaleOrientation"));
SoIS82->addChild(*Soconnect86);

Soconnect* Soconnect87 = new Soconnect();
Soconnect87->setNodeField(QString("center"));
Soconnect87->setProtoField(QString("center"));
SoIS82->addChild(*Soconnect87);

Soconnect* Soconnect88 = new Soconnect();
Soconnect88->setNodeField(QString("bboxSize"));
Soconnect88->setProtoField(QString("bboxSize"));
SoIS82->addChild(*Soconnect88);

Soconnect* Soconnect89 = new Soconnect();
Soconnect89->setNodeField(QString("bboxCenter"));
Soconnect89->setProtoField(QString("bboxCenter"));
SoIS82->addChild(*Soconnect89);

Soconnect* Soconnect90 = new Soconnect();
Soconnect90->setNodeField(QString("addChildren"));
Soconnect90->setProtoField(QString("addChildren"));
SoIS82->addChild(*Soconnect90);

Soconnect* Soconnect91 = new Soconnect();
Soconnect91->setNodeField(QString("removeChildren"));
Soconnect91->setProtoField(QString("removeChildren"));
SoIS82->addChild(*Soconnect91);

Soconnect* Soconnect92 = new Soconnect();
Soconnect92->setNodeField(QString("children"));
Soconnect92->setProtoField(QString("children"));
SoIS82->addChild(*Soconnect92);

SoTransform81->addChild(*SoIS82);

SoProtoBody80->addChild(*SoTransform81);

SoProtoDeclare61->addChild(*SoProtoBody80);

SoNode13->addChild(*SoProtoDeclare61);

SoProtoDeclare* SoProtoDeclare93 = new SoProtoDeclare();
SoProtoDeclare93->setName(QString("Segment"));
SoProtoDeclare93->setAppinfo(QString("The Segment node is used describe the attributes of the physical links between the joints of the humanoid figure. Each body part (pelvis thigh calf etc) of the humanoid figure is represented by a Segment node."));
SoProtoDeclare93->setDocumentation(QString("http://HAnim.org/Specifications/HAnim2001/part1/Segment.html"));
SoProtoInterface* SoProtoInterface94 = new SoProtoInterface();
Sofield* Sofield95 = new Sofield();
Sofield95->setAccessType(QString("inputOutput"));
Sofield95->setType(QString("SFString"));
Sofield95->setName(QString("name"));
SoProtoInterface94->addChild(*Sofield95);

Sofield* Sofield96 = new Sofield();
Sofield96->setAccessType(QString("inputOutput"));
Sofield96->setType(QString("SFFloat"));
Sofield96->setName(QString("mass"));
SoProtoInterface94->addChild(*Sofield96);

Sofield* Sofield97 = new Sofield();
Sofield97->setAccessType(QString("inputOutput"));
Sofield97->setType(QString("SFVec3f"));
Sofield97->setName(QString("centerOfMass"));
SoProtoInterface94->addChild(*Sofield97);

Sofield* Sofield98 = new Sofield();
Sofield98->setAccessType(QString("inputOutput"));
Sofield98->setType(QString("MFFloat"));
Sofield98->setName(QString("momentsOfInertia"));
Sofield98->setValue(QString("0 0 0 0 0 0 0 0 0"));
SoProtoInterface94->addChild(*Sofield98);

Sofield* Sofield99 = new Sofield();
Sofield99->setAccessType(QString("initializeOnly"));
Sofield99->setType(QString("SFVec3f"));
Sofield99->setName(QString("bboxCenter"));
SoProtoInterface94->addChild(*Sofield99);

Sofield* Sofield100 = new Sofield();
Sofield100->setAccessType(QString("initializeOnly"));
Sofield100->setType(QString("SFVec3f"));
Sofield100->setName(QString("bboxSize"));
Sofield100->setValue(QString("-1 -1 -1"));
SoProtoInterface94->addChild(*Sofield100);

Sofield* Sofield101 = new Sofield();
Sofield101->setAccessType(QString("inputOutput"));
Sofield101->setType(QString("MFNode"));
Sofield101->setName(QString("children"));
SoProtoInterface94->addChild(*Sofield101);

Sofield* Sofield102 = new Sofield();
Sofield102->setAccessType(QString("inputOnly"));
Sofield102->setType(QString("MFNode"));
Sofield102->setName(QString("addChildren"));
SoProtoInterface94->addChild(*Sofield102);

Sofield* Sofield103 = new Sofield();
Sofield103->setAccessType(QString("inputOnly"));
Sofield103->setType(QString("MFNode"));
Sofield103->setName(QString("removeChildren"));
SoProtoInterface94->addChild(*Sofield103);

Sofield* Sofield104 = new Sofield();
Sofield104->setAccessType(QString("inputOutput"));
Sofield104->setType(QString("SFNode"));
Sofield104->setName(QString("coord"));
Sofield104->setAppinfo(QString("contains Coordinate nodes"));
SoProtoInterface94->addChild(*Sofield104);

Sofield* Sofield105 = new Sofield();
Sofield105->setAccessType(QString("inputOutput"));
Sofield105->setType(QString("MFNode"));
Sofield105->setName(QString("displacers"));
Sofield105->setAppinfo(QString("contains Displacer nodes"));
SoProtoInterface94->addChild(*Sofield105);

SoProtoDeclare93->addChild(*SoProtoInterface94);

SoProtoBody* SoProtoBody106 = new SoProtoBody();
SoGroup* SoGroup107 = new SoGroup();
SoGroup107->setDEF(QString("SegmentGroup"));
SoIS* SoIS108 = new SoIS();
Soconnect* Soconnect109 = new Soconnect();
Soconnect109->setNodeField(QString("bboxSize"));
Soconnect109->setProtoField(QString("bboxSize"));
SoIS108->addChild(*Soconnect109);

Soconnect* Soconnect110 = new Soconnect();
Soconnect110->setNodeField(QString("bboxCenter"));
Soconnect110->setProtoField(QString("bboxCenter"));
SoIS108->addChild(*Soconnect110);

Soconnect* Soconnect111 = new Soconnect();
Soconnect111->setNodeField(QString("addChildren"));
Soconnect111->setProtoField(QString("addChildren"));
SoIS108->addChild(*Soconnect111);

Soconnect* Soconnect112 = new Soconnect();
Soconnect112->setNodeField(QString("removeChildren"));
Soconnect112->setProtoField(QString("removeChildren"));
SoIS108->addChild(*Soconnect112);

Soconnect* Soconnect113 = new Soconnect();
Soconnect113->setNodeField(QString("children"));
Soconnect113->setProtoField(QString("children"));
SoIS108->addChild(*Soconnect113);

SoGroup107->addChild(*SoIS108);

SoProtoBody106->addChild(*SoGroup107);

SoProtoDeclare93->addChild(*SoProtoBody106);

SoNode13->addChild(*SoProtoDeclare93);

SoProtoDeclare* SoProtoDeclare114 = new SoProtoDeclare();
SoProtoDeclare114->setName(QString("Site"));
SoProtoDeclare114->setAppinfo(QString("The Site node can be used for three purposes: (a) to define an \"end effector\" location which can be used by an inverse kinematics system (b) to define an attachment point for accessories such as jewelry and clothing and (c) to define a location for a virtual camera in the reference frame of a Segment node (such as a view \"through the eyes\" of the humanoid for use in multi-user worlds)."));
SoProtoDeclare114->setDocumentation(QString("http://HAnim.org/Specifications/HAnim2001/part1/Site.html"));
SoProtoInterface* SoProtoInterface115 = new SoProtoInterface();
Sofield* Sofield116 = new Sofield();
Sofield116->setAccessType(QString("inputOutput"));
Sofield116->setType(QString("SFString"));
Sofield116->setName(QString("name"));
SoProtoInterface115->addChild(*Sofield116);

Sofield* Sofield117 = new Sofield();
Sofield117->setAccessType(QString("inputOutput"));
Sofield117->setType(QString("SFVec3f"));
Sofield117->setName(QString("translation"));
SoProtoInterface115->addChild(*Sofield117);

Sofield* Sofield118 = new Sofield();
Sofield118->setAccessType(QString("inputOutput"));
Sofield118->setType(QString("SFRotation"));
Sofield118->setName(QString("rotation"));
SoProtoInterface115->addChild(*Sofield118);

Sofield* Sofield119 = new Sofield();
Sofield119->setAccessType(QString("inputOutput"));
Sofield119->setType(QString("SFVec3f"));
Sofield119->setName(QString("scale"));
Sofield119->setValue(QString("1 1 1"));
SoProtoInterface115->addChild(*Sofield119);

Sofield* Sofield120 = new Sofield();
Sofield120->setAccessType(QString("inputOutput"));
Sofield120->setType(QString("SFRotation"));
Sofield120->setName(QString("scaleOrientation"));
SoProtoInterface115->addChild(*Sofield120);

Sofield* Sofield121 = new Sofield();
Sofield121->setAccessType(QString("inputOutput"));
Sofield121->setType(QString("SFVec3f"));
Sofield121->setName(QString("center"));
SoProtoInterface115->addChild(*Sofield121);

Sofield* Sofield122 = new Sofield();
Sofield122->setAccessType(QString("initializeOnly"));
Sofield122->setType(QString("SFVec3f"));
Sofield122->setName(QString("bboxCenter"));
SoProtoInterface115->addChild(*Sofield122);

Sofield* Sofield123 = new Sofield();
Sofield123->setAccessType(QString("initializeOnly"));
Sofield123->setType(QString("SFVec3f"));
Sofield123->setName(QString("bboxSize"));
Sofield123->setValue(QString("-1 -1 -1"));
SoProtoInterface115->addChild(*Sofield123);

Sofield* Sofield124 = new Sofield();
Sofield124->setAccessType(QString("inputOutput"));
Sofield124->setType(QString("MFNode"));
Sofield124->setName(QString("children"));
SoProtoInterface115->addChild(*Sofield124);

Sofield* Sofield125 = new Sofield();
Sofield125->setAccessType(QString("inputOnly"));
Sofield125->setType(QString("MFNode"));
Sofield125->setName(QString("addChildren"));
SoProtoInterface115->addChild(*Sofield125);

Sofield* Sofield126 = new Sofield();
Sofield126->setAccessType(QString("inputOnly"));
Sofield126->setType(QString("MFNode"));
Sofield126->setName(QString("removeChildren"));
SoProtoInterface115->addChild(*Sofield126);

SoProtoDeclare114->addChild(*SoProtoInterface115);

SoProtoBody* SoProtoBody127 = new SoProtoBody();
SoTransform* SoTransform128 = new SoTransform();
SoTransform128->setDEF(QString("SiteTransform"));
SoIS* SoIS129 = new SoIS();
Soconnect* Soconnect130 = new Soconnect();
Soconnect130->setNodeField(QString("translation"));
Soconnect130->setProtoField(QString("translation"));
SoIS129->addChild(*Soconnect130);

Soconnect* Soconnect131 = new Soconnect();
Soconnect131->setNodeField(QString("rotation"));
Soconnect131->setProtoField(QString("rotation"));
SoIS129->addChild(*Soconnect131);

Soconnect* Soconnect132 = new Soconnect();
Soconnect132->setNodeField(QString("scale"));
Soconnect132->setProtoField(QString("scale"));
SoIS129->addChild(*Soconnect132);

Soconnect* Soconnect133 = new Soconnect();
Soconnect133->setNodeField(QString("scaleOrientation"));
Soconnect133->setProtoField(QString("scaleOrientation"));
SoIS129->addChild(*Soconnect133);

Soconnect* Soconnect134 = new Soconnect();
Soconnect134->setNodeField(QString("center"));
Soconnect134->setProtoField(QString("center"));
SoIS129->addChild(*Soconnect134);

Soconnect* Soconnect135 = new Soconnect();
Soconnect135->setNodeField(QString("bboxSize"));
Soconnect135->setProtoField(QString("bboxSize"));
SoIS129->addChild(*Soconnect135);

Soconnect* Soconnect136 = new Soconnect();
Soconnect136->setNodeField(QString("bboxCenter"));
Soconnect136->setProtoField(QString("bboxCenter"));
SoIS129->addChild(*Soconnect136);

Soconnect* Soconnect137 = new Soconnect();
Soconnect137->setNodeField(QString("addChildren"));
Soconnect137->setProtoField(QString("addChildren"));
SoIS129->addChild(*Soconnect137);

Soconnect* Soconnect138 = new Soconnect();
Soconnect138->setNodeField(QString("removeChildren"));
Soconnect138->setProtoField(QString("removeChildren"));
SoIS129->addChild(*Soconnect138);

Soconnect* Soconnect139 = new Soconnect();
Soconnect139->setNodeField(QString("children"));
Soconnect139->setProtoField(QString("children"));
SoIS129->addChild(*Soconnect139);

SoTransform128->addChild(*SoIS129);

SoProtoBody127->addChild(*SoTransform128);

SoProtoDeclare114->addChild(*SoProtoBody127);

SoNode13->addChild(*SoProtoDeclare114);

SoProtoInstance* SoProtoInstance140 = new SoProtoInstance();
SoProtoInstance140->setDEF(QString("Humanoid"));
SoProtoInstance140->setName(QString("Humanoid"));
SoField* SoField141 = new SoField();
SoField141->setName(QString("name"));
SoField141->setValue(QString("nancy"));
SoProtoInstance140->addChild(*SoField141);

SoField* SoField142 = new SoField();
SoField142->setName(QString("info"));
SoField142->setValue(QString("\"humanoidVersion=Nancy V1.2b\" \"authorName=Cindy Ballreich\" \"authorEmail=cindy@ballreich.net\" \"copyright=1997 3Name3D / Yglesias Wallock Divekar Inc. all rights reserved.\" \"creationDate=Tue Dec 30 08:30:08 PST 1997\" \"usageRestrictions=Noncommercial usage is ok if 3Name3D name and logo www.ballreich.net/vrml/HAnim/small_logo.gif is present and proper credit is given.\""));
SoProtoInstance140->addChild(*SoField142);

SoField* SoField143 = new SoField();
SoField143->setName(QString("humanoidBody"));
SoProtoInstance* SoProtoInstance144 = new SoProtoInstance();
SoProtoInstance144->setDEF(QString("hanim_humanoid_root"));
SoProtoInstance144->setName(QString("Joint"));
SoField* SoField145 = new SoField();
SoField145->setName(QString("name"));
SoField145->setValue(QString("humanoid_root"));
SoProtoInstance144->addChild(*SoField145);

SoField* SoField146 = new SoField();
SoField146->setName(QString("center"));
SoField146->setValue(QString("-0.00405 0.855 -0.000113"));
SoProtoInstance144->addChild(*SoField146);

SoField* SoField147 = new SoField();
SoField147->setName(QString("children"));
SoProtoInstance* SoProtoInstance148 = new SoProtoInstance();
SoProtoInstance148->setDEF(QString("hanim_sacroiliac"));
SoProtoInstance148->setName(QString("Joint"));
SoField* SoField149 = new SoField();
SoField149->setName(QString("name"));
SoField149->setValue(QString("sacroiliac"));
SoProtoInstance148->addChild(*SoField149);

SoField* SoField150 = new SoField();
SoField150->setName(QString("center"));
SoField150->setValue(QString("0 1.01 -0.0204"));
SoProtoInstance148->addChild(*SoField150);

SoField* SoField151 = new SoField();
SoField151->setName(QString("children"));
SoProtoInstance* SoProtoInstance152 = new SoProtoInstance();
SoProtoInstance152->setDEF(QString("hanim_pelvis"));
SoProtoInstance152->setName(QString("Segment"));
SoField* SoField153 = new SoField();
SoField153->setName(QString("name"));
SoField153->setValue(QString("pelvis"));
SoProtoInstance152->addChild(*SoField153);

SoField* SoField154 = new SoField();
SoField154->setName(QString("children"));
SoShape* SoShape155 = new SoShape();
SoShape155->setDEF(QString("_1"));
SoVRMLAppearance* SoVRMLAppearance156 = new SoVRMLAppearance();
SoMaterial* SoMaterial157 = new SoMaterial();
SoMaterial157->setDEF(QString("Pants_Color"));
SoMaterial157->setAmbientIntensity(0.25);
SoMaterial157->setDiffuseColor(new float[]{0.054,0.233,0.39});
SoVRMLAppearance156->addChild(*SoMaterial157);

SoShape155->addChild(*SoVRMLAppearance156);

SoIndexedFaceSet* SoIndexedFaceSet158 = new SoIndexedFaceSet();
SoIndexedFaceSet158->setCreaseAngle(1.14);
SoIndexedFaceSet158->setCoordIndex(new int32_t[]{0,1,40,-1,1,2,40,-1,2,3,40,-1,3,4,40,-1,4,5,40,-1,5,4,9,-1,4,3,8,-1,3,2,8,-1,2,1,6,-1,0,7,1,-1,7,6,1,-1,6,8,2,-1,9,4,10,-1,4,8,10,-1,8,6,12,-1,7,0,47,-1,50,5,9,-1,7,47,55,-1,55,13,7,-1,50,9,56,-1,9,10,14,-1,10,11,15,-1,11,12,16,-1,12,13,19,-1,13,55,17,-1,60,17,55,-1,17,19,13,-1,19,16,12,-1,16,15,11,-1,15,18,10,-1,14,56,9,-1,56,14,64,-1,17,60,20,-1,20,19,17,-1,21,64,14,-1,14,22,21,-1,15,16,24,-1,16,19,24,-1,19,20,26,-1,24,23,15,-1,64,21,69,-1,21,22,29,-1,19,26,25,-1,20,63,27,-1,27,26,20,-1,25,24,19,-1,30,29,22,-1,29,28,21,-1,28,69,21,-1,27,34,26,-1,69,28,79,-1,29,30,32,-1,30,23,33,-1,23,24,37,-1,25,26,34,-1,83,27,77,-1,37,33,23,-1,33,32,30,-1,31,79,28,-1,79,31,84,-1,32,33,36,-1,24,25,37,-1,34,27,83,-1,83,38,34,-1,34,37,25,-1,37,36,33,-1,36,35,32,-1,84,31,89,-1,31,35,89,-1,35,36,39,-1,36,37,39,-1,38,83,89,-1,89,39,38,-1,39,89,35,-1,40,41,0,-1,40,42,41,-1,40,43,42,-1,40,44,43,-1,40,45,44,-1,49,44,45,-1,48,43,44,-1,48,42,43,-1,46,41,42,-1,41,47,0,-1,41,46,47,-1,42,48,46,-1,51,44,49,-1,51,48,44,-1,48,52,53,-1,49,45,50,-1,56,49,50,-1,57,51,49,-1,58,53,52,-1,59,54,53,-1,62,55,54,-1,55,62,60,-1,54,59,62,-1,53,58,59,-1,51,61,58,-1,49,56,57,-1,64,57,56,-1,67,59,58,-1,68,62,59,-1,60,63,20,-1,60,62,63,-1,59,67,68,-1,58,61,67,-1,57,64,65,-1,65,66,57,-1,71,63,62,-1,69,65,64,-1,74,66,65,-1,78,68,67,-1,70,71,62,-1,63,72,27,-1,63,71,72,-1,68,78,76,-1,67,75,78,-1,66,74,75,-1,65,73,74,-1,65,69,73,-1,77,27,72,-1,71,82,72,-1,79,73,69,-1,81,75,74,-1,82,71,70,-1,77,72,83,-1,73,79,80,-1,84,80,79,-1,86,75,81,-1,83,72,82,-1,82,88,83,-1,70,87,82,-1,81,85,86,-1,89,80,84,-1,89,85,80,-1,90,86,85,-1,90,87,86,-1,89,83,88,-1,88,90,89,-1,85,89,90,-1,50,45,5,-1,45,40,5,-1,10,8,11,-1,8,12,11,-1,18,22,10,-1,22,14,10,-1,57,66,51,-1,66,61,51,-1,51,58,48,-1,58,52,48,-1,48,53,46,-1,53,54,46,-1,76,70,68,-1,70,62,68,-1,29,32,28,-1,28,32,31,-1,32,35,31,-1,85,81,80,-1,81,73,80,-1,81,74,73,-1,39,37,38,-1,37,34,38,-1,82,87,88,-1,87,90,88,-1,87,78,86,-1,78,75,86,-1,61,66,67,-1,66,75,67,-1,22,18,15,-1,23,30,15,-1,30,22,15,-1,13,12,7,-1,12,6,7,-1,46,54,47,-1,54,55,47,-1,87,76,78,-1,87,70,76,-1}, 712);
SoCoordinate* SoCoordinate159 = new SoCoordinate();
SoCoordinate159->setPoint(new float[]{0.0,1.06,0.0218,0.0561,1.07,0.00726,0.0851,1.07,-0.0115,0.104,1.07,-0.0497,0.0851,1.07,-0.0851,0.032,1.06,-0.0985,0.0873,1.04,0.0078,0.033,1.04,0.0395,0.123,1.05,-0.0405,0.0609,1.02,-0.106,0.0894,0.996,-0.106,0.143,1.0,-0.0309,0.117,1.0,0.0164,0.0314,0.999,0.0502,0.0314,0.96,-0.13,0.156,0.966,-0.0405,0.156,0.968,-0.00724,0.0341,0.954,0.0513,0.115,0.96,-0.0916,0.121,0.926,0.0352,0.0357,0.92,0.0497,0.0314,0.91,-0.146,0.0991,0.91,-0.131,0.169,0.883,-0.0448,0.169,0.885,-0.00939,0.123,0.873,0.0384,0.0926,0.872,0.047,0.0325,0.873,0.0287,0.0293,0.866,-0.142,0.102,0.869,-0.131,0.129,0.868,-0.103,0.0314,0.84,-0.125,0.101,0.844,-0.122,0.133,0.846,-0.0878,0.0653,0.835,0.0132,0.0615,0.824,-0.111,0.0985,0.823,-0.101,0.132,0.826,-0.0448,0.0609,0.821,-0.0158,0.0599,0.812,-0.0545,0.0,1.08,-0.0266,-0.0561,1.07,0.00726,-0.0851,1.07,-0.0115,-0.104,1.07,-0.0497,-0.0851,1.07,-0.0851,-0.032,1.06,-0.0985,-0.0873,1.04,0.0078,-0.033,1.04,0.0395,-0.123,1.05,-0.0405,-0.0609,1.02,-0.106,0.0,1.02,-0.108,-0.0894,0.996,-0.106,-0.143,1.0,-0.0309,-0.144,1.0,-0.011,-0.117,1.0,0.0164,-0.0314,0.999,0.0502,0.0,0.961,-0.123,-0.0314,0.96,-0.13,-0.156,0.966,-0.0405,-0.156,0.968,-0.00724,-0.0341,0.954,0.0513,-0.115,0.96,-0.0916,-0.121,0.926,0.0352,-0.0357,0.92,0.0497,0.0,0.91,-0.127,-0.0314,0.91,-0.146,-0.0991,0.91,-0.131,-0.167,0.911,-0.0448,-0.167,0.912,-0.00671,0.0,0.883,-0.129,-0.123,0.873,0.0384,-0.0926,0.872,0.047,-0.0325,0.873,0.0287,-0.0293,0.866,-0.142,-0.102,0.869,-0.131,-0.129,0.868,-0.103,-0.166,0.863,-0.0148,0.0,0.863,-0.00456,-0.166,0.862,-0.0459,0.0,0.858,-0.1,-0.0314,0.84,-0.125,-0.101,0.844,-0.122,-0.0653,0.835,0.0132,0.0,0.839,-0.0217,0.0,0.835,-0.0867,-0.0615,0.824,-0.111,-0.0985,0.823,-0.101,-0.132,0.826,-0.0448,-0.0609,0.821,-0.0158,0.0,0.831,-0.0626,-0.0599,0.812,-0.0545}, 273);
SoIndexedFaceSet158->setCoord(*SoCoordinate159);

SoShape155->setGeometry(*SoIndexedFaceSet158);

SoField154->addChild(*SoShape155);

SoProtoInstance152->addChild(*SoField154);

SoField151->addChild(*SoProtoInstance152);

SoProtoInstance* SoProtoInstance160 = new SoProtoInstance();
SoProtoInstance160->setDEF(QString("hanim_l_hip"));
SoProtoInstance160->setName(QString("Joint"));
SoField* SoField161 = new SoField();
SoField161->setName(QString("name"));
SoField161->setValue(QString("l_hip"));
SoProtoInstance160->addChild(*SoField161);

SoField* SoField162 = new SoField();
SoField162->setName(QString("center"));
SoField162->setValue(QString("0.122 0.888271 -0.0693267"));
SoProtoInstance160->addChild(*SoField162);

SoField* SoField163 = new SoField();
SoField163->setName(QString("children"));
SoProtoInstance* SoProtoInstance164 = new SoProtoInstance();
SoProtoInstance164->setDEF(QString("hanim_l_thigh"));
SoProtoInstance164->setName(QString("Segment"));
SoField* SoField165 = new SoField();
SoField165->setName(QString("name"));
SoField165->setValue(QString("l_thigh"));
SoProtoInstance164->addChild(*SoField165);

SoField* SoField166 = new SoField();
SoField166->setName(QString("children"));
SoShape* SoShape167 = new SoShape();
SoShape167->setDEF(QString("_2"));
SoVRMLAppearance* SoVRMLAppearance168 = new SoVRMLAppearance();
SoMaterial* SoMaterial169 = new SoMaterial();
SoMaterial169->setUSE(QString("Pants_Color"));
SoVRMLAppearance168->addChild(*SoMaterial169);

SoShape167->addChild(*SoVRMLAppearance168);

SoIndexedFaceSet* SoIndexedFaceSet170 = new SoIndexedFaceSet();
SoIndexedFaceSet170->setCreaseAngle(1.32);
SoIndexedFaceSet170->setCoordIndex(new int32_t[]{0,4,5,-1,3,4,0,-1,0,7,1,-1,0,8,7,-1,0,6,8,-1,0,5,6,-1,0,2,3,-1,0,1,2,-1,9,2,1,-1,10,3,2,-1,11,4,3,-1,12,5,4,-1,13,6,5,-1,15,7,8,-1,9,1,7,-1,7,15,9,-1,8,14,15,-1,5,16,13,-1,5,12,16,-1,4,11,12,-1,3,10,11,-1,2,9,10,-1,20,13,16,-1,18,11,10,-1,19,12,11,-1,20,16,12,-1,23,15,14,-1,15,23,24,-1,12,19,20,-1,11,18,19,-1,10,17,18,-1,26,18,17,-1,27,19,18,-1,27,20,19,-1,28,21,20,-1,29,23,22,-1,23,29,30,-1,20,32,28,-1,20,27,32,-1,18,26,27,-1,17,25,26,-1,25,31,30,-1,30,29,26,-1,30,26,25,-1,29,28,27,-1,29,27,26,-1,28,32,27,-1,22,23,14,-1,20,21,13,-1,21,22,13,-1,22,14,13,-1,9,15,24,-1,10,9,17,-1,9,24,17,-1,6,13,8,-1,13,14,8,-1,28,29,21,-1,29,22,21,-1,24,31,17,-1,31,25,17,-1,30,31,23,-1,31,24,23,-1}, 248);
SoCoordinate* SoCoordinate171 = new SoCoordinate();
SoCoordinate171->setPoint(new float[]{0.0969,0.804,-0.0486,0.101,0.876,0.0336,0.17,0.894,-0.00778,0.17,0.891,-0.076,0.124,0.858,-0.129,0.076,0.843,-0.143,0.025,0.819,-0.0889,0.0507,0.847,0.0196,0.00349,0.826,-0.0287,0.0991,0.808,0.0406,0.161,0.814,-0.00187,0.165,0.808,-0.0755,0.122,0.788,-0.126,0.00993,0.762,-0.0937,0.00993,0.762,-0.0309,0.0491,0.777,0.0185,0.0755,0.766,-0.139,0.13,0.597,-0.00618,0.132,0.6,-0.0593,0.108,0.603,-0.105,0.0722,0.601,-0.118,0.0314,0.59,-0.0953,0.0239,0.566,-0.0427,0.047,0.566,0.0051,0.0878,0.581,0.0217,0.114,0.499,-0.0132,0.116,0.488,-0.061,0.103,0.567,-0.0991,0.0362,0.557,-0.0926,0.025,0.486,-0.047,0.0507,0.497,-0.00188,0.0862,0.513,0.018,0.0733,0.579,-0.108}, 99);
SoIndexedFaceSet170->setCoord(*SoCoordinate171);

SoShape167->setGeometry(*SoIndexedFaceSet170);

SoField166->addChild(*SoShape167);

SoProtoInstance164->addChild(*SoField166);

SoField163->addChild(*SoProtoInstance164);

SoProtoInstance* SoProtoInstance172 = new SoProtoInstance();
SoProtoInstance172->setDEF(QString("hanim_l_knee"));
SoProtoInstance172->setName(QString("Joint"));
SoField* SoField173 = new SoField();
SoField173->setName(QString("name"));
SoField173->setValue(QString("l_knee"));
SoProtoInstance172->addChild(*SoField173);

SoField* SoField174 = new SoField();
SoField174->setName(QString("center"));
SoField174->setValue(QString("0.0738 0.517 -0.0284"));
SoProtoInstance172->addChild(*SoField174);

SoField* SoField175 = new SoField();
SoField175->setName(QString("children"));
SoProtoInstance* SoProtoInstance176 = new SoProtoInstance();
SoProtoInstance176->setDEF(QString("hanim_l_calf"));
SoProtoInstance176->setName(QString("Segment"));
SoField* SoField177 = new SoField();
SoField177->setName(QString("name"));
SoField177->setValue(QString("l_calf"));
SoProtoInstance176->addChild(*SoField177);

SoField* SoField178 = new SoField();
SoField178->setName(QString("children"));
SoShape* SoShape179 = new SoShape();
SoShape179->setDEF(QString("_3"));
SoVRMLAppearance* SoVRMLAppearance180 = new SoVRMLAppearance();
SoMaterial* SoMaterial181 = new SoMaterial();
SoMaterial181->setUSE(QString("Pants_Color"));
SoVRMLAppearance180->addChild(*SoMaterial181);

SoShape179->addChild(*SoVRMLAppearance180);

SoIndexedFaceSet* SoIndexedFaceSet182 = new SoIndexedFaceSet();
SoIndexedFaceSet182->setCreaseAngle(1.57);
SoIndexedFaceSet182->setCoordIndex(new int32_t[]{2,1,0,-1,2,3,1,-1,2,4,3,-1,2,5,4,-1,2,6,5,-1,2,7,6,-1,2,8,7,-1,2,0,8,-1,9,8,0,-1,10,6,7,-1,11,5,6,-1,12,4,5,-1,12,3,4,-1,13,1,3,-1,1,13,14,-1,3,12,13,-1,5,11,12,-1,6,10,11,-1,8,9,15,-1,22,13,12,-1,13,22,14,-1,17,15,9,-1,20,12,11,-1,21,22,12,-1,23,9,14,-1,9,23,16,-1,14,22,23,-1,12,20,21,-1,15,17,18,-1,9,16,17,-1,24,17,16,-1,25,18,17,-1,26,19,18,-1,27,20,19,-1,28,21,20,-1,29,22,21,-1,30,23,22,-1,31,16,23,-1,23,30,31,-1,22,29,30,-1,21,28,29,-1,20,27,28,-1,19,26,27,-1,18,25,26,-1,17,24,25,-1,16,31,24,-1,33,26,25,-1,36,29,28,-1,37,31,30,-1,29,36,30,-1,25,24,33,-1,31,37,24,-1,32,33,24,-1,24,37,32,-1,38,37,30,-1,30,36,38,-1,41,33,32,-1,42,39,34,-1,44,36,35,-1,45,38,36,-1,46,37,38,-1,38,45,46,-1,36,44,45,-1,35,43,44,-1,39,42,47,-1,32,40,41,-1,40,46,45,-1,41,40,45,-1,41,45,44,-1,44,43,42,-1,44,42,41,-1,43,47,42,-1,39,35,28,-1,35,36,28,-1,34,39,27,-1,39,28,27,-1,33,34,26,-1,34,27,26,-1,33,41,34,-1,41,42,34,-1,40,32,46,-1,32,37,46,-1,10,19,11,-1,19,20,11,-1,14,9,1,-1,9,0,1,-1,8,15,7,-1,7,15,10,-1,15,19,10,-1,15,18,19,-1,43,35,47,-1,35,39,47,-1}, 368);
SoCoordinate* SoCoordinate183 = new SoCoordinate();
SoCoordinate183->setPoint(new float[]{0.0883,0.532,-0.00349,0.0609,0.533,-0.00833,0.0814,0.55,-0.0395,0.0529,0.536,-0.0368,0.0577,0.544,-0.0577,0.0722,0.546,-0.0717,0.0975,0.54,-0.0647,0.105,0.539,-0.0438,0.104,0.539,-0.0223,0.0862,0.506,0.0158,0.101,0.51,-0.0798,0.0706,0.51,-0.101,0.0406,0.513,-0.0744,0.0368,0.51,-0.0357,0.0556,0.506,-0.000272,0.117,0.508,-0.0169,0.0878,0.361,-0.0126,0.123,0.363,-0.04,0.123,0.363,-0.0663,0.107,0.367,-0.107,0.0588,0.365,-0.122,0.0228,0.358,-0.0926,0.0239,0.358,-0.0475,0.0497,0.358,-0.0234,0.118,0.311,-0.0411,0.118,0.309,-0.0685,0.105,0.31,-0.108,0.0572,0.308,-0.123,0.0201,0.309,-0.0937,0.0191,0.311,-0.0508,0.0475,0.307,-0.0282,0.0883,0.309,-0.018,0.0959,0.124,-0.04,0.0905,0.12,-0.0647,0.0738,0.117,-0.0814,0.0373,0.121,-0.0636,0.0416,0.124,-0.0416,0.0744,0.13,-0.0212,0.0561,0.13,-0.0245,0.0529,0.121,-0.0873,0.0948,0.0897,-0.0368,0.0916,0.0779,-0.0604,0.0717,0.0854,-0.0765,0.0406,0.0918,-0.0626,0.0384,0.0881,-0.0363,0.054,0.0972,-0.0175,0.0765,0.11,-0.0169,0.0486,0.0999,-0.0835}, 144);
SoIndexedFaceSet182->setCoord(*SoCoordinate183);

SoShape179->setGeometry(*SoIndexedFaceSet182);

SoField178->addChild(*SoShape179);

SoProtoInstance176->addChild(*SoField178);

SoField175->addChild(*SoProtoInstance176);

SoProtoInstance* SoProtoInstance184 = new SoProtoInstance();
SoProtoInstance184->setDEF(QString("hanim_l_ankle"));
SoProtoInstance184->setName(QString("Joint"));
SoField* SoField185 = new SoField();
SoField185->setName(QString("name"));
SoField185->setValue(QString("l_ankle"));
SoProtoInstance184->addChild(*SoField185);

SoField* SoField186 = new SoField();
SoField186->setName(QString("center"));
SoField186->setValue(QString("0.0645 0.0719 -0.048"));
SoProtoInstance184->addChild(*SoField186);

SoField* SoField187 = new SoField();
SoField187->setName(QString("children"));
SoProtoInstance* SoProtoInstance188 = new SoProtoInstance();
SoProtoInstance188->setDEF(QString("hanim_l_hindfoot"));
SoProtoInstance188->setName(QString("Segment"));
SoField* SoField189 = new SoField();
SoField189->setName(QString("name"));
SoField189->setValue(QString("l_hindfoot"));
SoProtoInstance188->addChild(*SoField189);

SoField* SoField190 = new SoField();
SoField190->setName(QString("children"));
SoShape* SoShape191 = new SoShape();
SoShape191->setDEF(QString("_4"));
SoVRMLAppearance* SoVRMLAppearance192 = new SoVRMLAppearance();
SoMaterial* SoMaterial193 = new SoMaterial();
SoMaterial193->setDEF(QString("Shoe_Color"));
SoMaterial193->setAmbientIntensity(0.25);
SoVRMLAppearance192->addChild(*SoMaterial193);

SoShape191->addChild(*SoVRMLAppearance192);

SoIndexedFaceSet* SoIndexedFaceSet194 = new SoIndexedFaceSet();
SoIndexedFaceSet194->setCreaseAngle(1.57);
SoIndexedFaceSet194->setCoordIndex(new int32_t[]{2,1,0,-1,4,3,1,-1,2,4,1,-1,3,6,5,-1,1,3,5,-1,6,8,7,-1,5,6,7,-1,8,10,9,-1,7,8,9,-1,10,12,11,-1,9,10,11,-1,12,14,13,-1,11,12,13,-1,14,16,15,-1,13,14,15,-1,16,18,17,-1,15,16,17,-1,18,20,19,-1,17,18,19,-1,20,22,21,-1,19,20,21,-1,22,24,23,-1,21,22,23,-1,24,25,0,-1,23,24,0,-1,25,4,2,-1,0,25,2,-1,18,26,20,-1,16,26,18,-1,27,26,16,-1,14,27,16,-1,12,27,14,-1,28,27,12,-1,29,28,12,-1,10,29,12,-1,8,29,10,-1,6,37,8,-1,24,30,25,-1,31,30,24,-1,22,31,24,-1,32,31,22,-1,20,32,22,-1,33,32,20,-1,26,33,20,-1,34,33,26,-1,27,34,26,-1,35,34,27,-1,28,35,27,-1,29,35,28,-1,36,35,29,-1,8,36,29,-1,37,36,8,-1,6,38,37,-1,3,38,6,-1,39,38,3,-1,30,39,25,-1,41,40,30,-1,31,41,30,-1,42,41,31,-1,32,42,31,-1,43,42,32,-1,33,43,32,-1,44,43,33,-1,34,44,33,-1,45,44,34,-1,35,45,34,-1,46,45,35,-1,36,46,35,-1,47,46,36,-1,37,47,36,-1,38,47,37,-1,48,47,38,-1,49,48,38,-1,39,49,38,-1,40,49,39,-1,30,40,39,-1,48,49,50,-1,47,48,50,-1,46,47,50,-1,45,46,50,-1,44,45,50,-1,43,44,50,-1,42,43,50,-1,41,42,50,-1,40,41,50,-1,49,40,50,-1,11,13,15,-1,11,15,17,-1,9,11,17,-1,9,17,19,-1,7,9,19,-1,7,19,21,-1,5,7,21,-1,5,21,23,-1,5,23,0,-1,1,5,0,-1,3,4,39,-1,4,25,39,-1}, 392);
SoCoordinate* SoCoordinate195 = new SoCoordinate();
SoCoordinate195->setPoint(new float[]{0.0529,0.0,-0.0923,0.0863,0.0,-0.0862,0.0727,0.0,-0.0994,0.0863,0.0219,-0.0862,0.0727,0.0219,-0.0994,0.1,0.0,-0.0594,0.1,0.0219,-0.0594,0.113,0.0,0.0645,0.113,0.0219,0.0645,0.112,0.0,0.117,0.112,0.0156,0.117,0.0701,0.0,0.146,0.0701,0.0156,0.146,0.0468,0.0,0.153,0.0468,0.0156,0.153,0.0215,0.0,0.146,0.0215,0.0156,0.146,0.0165,0.0,0.125,0.0165,0.0156,0.125,0.0211,0.0,0.0377,0.0211,0.0219,0.0377,0.0393,0.0,-0.0129,0.0393,0.0219,-0.0129,0.0433,0.0,-0.0534,0.0433,0.0219,-0.0534,0.0529,0.0219,-0.0923,0.0305,0.0253,0.0938,0.0505,0.0253,0.099,0.0854,0.0253,0.0834,0.102,0.0253,0.0707,0.0568,0.0573,-0.0918,0.0492,0.0573,-0.0497,0.0435,0.0573,-0.0225,0.0442,0.0573,0.0235,0.0623,0.0573,0.0366,0.0911,0.0573,0.0159,0.0962,0.0573,-0.0121,0.0911,0.0573,-0.0482,0.0758,0.0573,-0.0899,0.0676,0.0573,-0.0962,0.0578,0.0953,-0.0896,0.0489,0.0953,-0.0757,0.0447,0.0953,-0.0432,0.0451,0.0953,-0.0128,0.0624,0.0953,-0.00466,0.0857,0.0953,-0.0134,0.0953,0.0953,-0.038,0.0843,0.0953,-0.0803,0.0761,0.0953,-0.0889,0.0682,0.0953,-0.0929,0.0675,0.13,-0.0608}, 153);
SoIndexedFaceSet194->setCoord(*SoCoordinate195);

SoShape191->setGeometry(*SoIndexedFaceSet194);

SoField190->addChild(*SoShape191);

SoProtoInstance188->addChild(*SoField190);

SoField187->addChild(*SoProtoInstance188);

SoProtoInstance184->addChild(*SoField187);

SoField175->addChild(*SoProtoInstance184);

SoProtoInstance172->addChild(*SoField175);

SoField163->addChild(*SoProtoInstance172);

SoProtoInstance160->addChild(*SoField163);

SoField151->addChild(*SoProtoInstance160);

SoProtoInstance* SoProtoInstance196 = new SoProtoInstance();
SoProtoInstance196->setDEF(QString("hanim_r_hip"));
SoProtoInstance196->setName(QString("Joint"));
SoField* SoField197 = new SoField();
SoField197->setName(QString("name"));
SoField197->setValue(QString("r_hip"));
SoProtoInstance196->addChild(*SoField197);

SoField* SoField198 = new SoField();
SoField198->setName(QString("center"));
SoField198->setValue(QString("-0.11 0.892362 -0.0732533"));
SoProtoInstance196->addChild(*SoField198);

SoField* SoField199 = new SoField();
SoField199->setName(QString("children"));
SoProtoInstance* SoProtoInstance200 = new SoProtoInstance();
SoProtoInstance200->setDEF(QString("hanim_r_thigh"));
SoProtoInstance200->setName(QString("Segment"));
SoField* SoField201 = new SoField();
SoField201->setName(QString("name"));
SoField201->setValue(QString("r_thigh"));
SoProtoInstance200->addChild(*SoField201);

SoField* SoField202 = new SoField();
SoField202->setName(QString("children"));
SoShape* SoShape203 = new SoShape();
SoShape203->setDEF(QString("_5"));
SoVRMLAppearance* SoVRMLAppearance204 = new SoVRMLAppearance();
SoMaterial* SoMaterial205 = new SoMaterial();
SoMaterial205->setUSE(QString("Pants_Color"));
SoVRMLAppearance204->addChild(*SoMaterial205);

SoShape203->addChild(*SoVRMLAppearance204);

SoIndexedFaceSet* SoIndexedFaceSet206 = new SoIndexedFaceSet();
SoIndexedFaceSet206->setCreaseAngle(1.61);
SoIndexedFaceSet206->setCoordIndex(new int32_t[]{5,4,0,-1,0,4,3,-1,1,7,0,-1,7,8,0,-1,8,6,0,-1,6,5,0,-1,3,2,0,-1,2,1,0,-1,1,2,9,-1,2,3,10,-1,3,4,11,-1,4,5,12,-1,5,6,13,-1,8,7,15,-1,7,1,9,-1,9,15,7,-1,15,14,8,-1,13,16,5,-1,16,12,5,-1,12,11,4,-1,11,10,3,-1,10,9,2,-1,12,16,20,-1,13,14,22,-1,14,15,23,-1,24,23,15,-1,23,22,14,-1,20,19,12,-1,17,18,26,-1,18,19,27,-1,19,20,27,-1,20,21,28,-1,22,23,29,-1,30,29,23,-1,27,26,18,-1,26,25,17,-1,30,31,25,-1,25,26,29,-1,25,29,30,-1,26,27,28,-1,26,28,29,-1,27,20,28,-1,24,15,9,-1,22,21,13,-1,29,28,22,-1,28,21,22,-1,24,31,23,-1,31,30,23,-1,25,31,17,-1,31,24,17,-1,17,24,10,-1,24,9,10,-1,18,10,11,-1,18,17,10,-1,18,12,19,-1,18,11,12,-1,21,20,13,-1,20,16,13,-1,14,13,8,-1,13,6,8,-1}, 240);
SoCoordinate* SoCoordinate207 = new SoCoordinate();
SoCoordinate207->setPoint(new float[]{-0.0969,0.804,-0.0486,-0.101,0.876,0.0336,-0.17,0.894,-0.00778,-0.17,0.891,-0.076,-0.124,0.858,-0.129,-0.076,0.843,-0.143,-0.025,0.819,-0.0889,-0.0507,0.847,0.0196,-0.00349,0.826,-0.0287,-0.0991,0.808,0.0406,-0.161,0.814,-0.00187,-0.165,0.808,-0.0755,-0.122,0.788,-0.126,-0.00993,0.762,-0.0937,-0.00993,0.762,-0.0309,-0.0491,0.777,0.0185,-0.0755,0.766,-0.139,-0.13,0.597,-0.00618,-0.132,0.6,-0.0593,-0.108,0.603,-0.105,-0.0722,0.601,-0.118,-0.0314,0.59,-0.0953,-0.0239,0.566,-0.0427,-0.047,0.566,0.0051,-0.0878,0.581,0.0217,-0.114,0.499,-0.0132,-0.116,0.488,-0.061,-0.103,0.567,-0.0991,-0.0362,0.557,-0.0926,-0.025,0.486,-0.047,-0.0507,0.497,-0.00188,-0.0862,0.513,0.018}, 96);
SoIndexedFaceSet206->setCoord(*SoCoordinate207);

SoShape203->setGeometry(*SoIndexedFaceSet206);

SoField202->addChild(*SoShape203);

SoProtoInstance200->addChild(*SoField202);

SoField199->addChild(*SoProtoInstance200);

SoProtoInstance* SoProtoInstance208 = new SoProtoInstance();
SoProtoInstance208->setDEF(QString("hanim_r_knee"));
SoProtoInstance208->setName(QString("Joint"));
SoField* SoField209 = new SoField();
SoField209->setName(QString("name"));
SoField209->setValue(QString("r_knee"));
SoProtoInstance208->addChild(*SoField209);

SoField* SoField210 = new SoField();
SoField210->setName(QString("center"));
SoField210->setValue(QString("-0.0699 0.51 -0.0166"));
SoProtoInstance208->addChild(*SoField210);

SoField* SoField211 = new SoField();
SoField211->setName(QString("children"));
SoProtoInstance* SoProtoInstance212 = new SoProtoInstance();
SoProtoInstance212->setDEF(QString("hanim_r_calf"));
SoProtoInstance212->setName(QString("Segment"));
SoField* SoField213 = new SoField();
SoField213->setName(QString("name"));
SoField213->setValue(QString("r_calf"));
SoProtoInstance212->addChild(*SoField213);

SoField* SoField214 = new SoField();
SoField214->setName(QString("children"));
SoShape* SoShape215 = new SoShape();
SoShape215->setDEF(QString("_6"));
SoVRMLAppearance* SoVRMLAppearance216 = new SoVRMLAppearance();
SoMaterial* SoMaterial217 = new SoMaterial();
SoMaterial217->setUSE(QString("Pants_Color"));
SoVRMLAppearance216->addChild(*SoMaterial217);

SoShape215->addChild(*SoVRMLAppearance216);

SoIndexedFaceSet* SoIndexedFaceSet218 = new SoIndexedFaceSet();
SoIndexedFaceSet218->setCreaseAngle(1.57);
SoIndexedFaceSet218->setCoordIndex(new int32_t[]{14,25,18,-1,25,32,18,-1,32,27,18,-1,27,22,18,-1,22,10,18,-1,10,6,18,-1,6,8,18,-1,8,14,18,-1,14,8,17,-1,6,10,9,-1,10,22,24,-1,22,27,39,-1,27,32,39,-1,32,25,42,-1,25,14,30,-1,17,30,14,-1,30,42,25,-1,42,39,32,-1,39,24,22,-1,24,9,10,-1,4,17,8,-1,39,42,43,-1,30,43,42,-1,17,4,1,-1,24,39,26,-1,39,43,44,-1,30,17,34,-1,16,34,17,-1,34,43,30,-1,44,26,39,-1,0,1,4,-1,1,16,17,-1,16,1,3,-1,1,0,2,-1,0,5,7,-1,5,26,28,-1,26,44,45,-1,44,43,46,-1,43,34,36,-1,34,16,15,-1,15,36,34,-1,36,46,43,-1,46,45,44,-1,45,28,26,-1,28,7,5,-1,7,2,0,-1,2,3,1,-1,3,15,16,-1,45,46,37,-1,36,15,20,-1,36,37,46,-1,13,2,7,-1,3,20,15,-1,3,2,13,-1,36,20,29,-1,29,37,36,-1,13,21,23,-1,21,33,23,-1,41,37,40,-1,37,29,31,-1,29,20,19,-1,19,31,29,-1,31,40,37,-1,40,38,41,-1,35,23,33,-1,23,12,13,-1,12,11,13,-1,31,19,11,-1,40,31,11,-1,40,11,12,-1,12,23,38,-1,12,38,40,-1,23,35,38,-1,28,21,7,-1,21,13,7,-1,45,33,28,-1,33,21,28,-1,33,45,41,-1,45,37,41,-1,33,41,35,-1,41,38,35,-1,20,3,47,-1,11,19,47,-1,19,20,47,-1,13,47,3,-1,13,11,47,-1,4,8,6,-1,26,5,24,-1,5,9,24,-1,6,9,4,-1,9,0,4,-1,9,5,0,-1}, 368);
SoCoordinate* SoCoordinate219 = new SoCoordinate();
SoCoordinate219->setPoint(new float[]{-0.123,0.363,-0.0663,-0.123,0.363,-0.04,-0.118,0.309,-0.0685,-0.118,0.311,-0.0411,-0.117,0.508,-0.0169,-0.107,0.367,-0.107,-0.105,0.539,-0.0438,-0.105,0.31,-0.108,-0.104,0.539,-0.0223,-0.101,0.51,-0.0798,-0.0975,0.54,-0.0647,-0.0948,0.0897,-0.0368,-0.0916,0.0779,-0.0604,-0.0905,0.12,-0.0647,-0.0883,0.532,-0.00349,-0.0883,0.309,-0.018,-0.0878,0.361,-0.0126,-0.0862,0.506,0.0158,-0.0814,0.55,-0.0395,-0.0765,0.11,-0.0169,-0.0744,0.13,-0.0212,-0.0738,0.117,-0.0814,-0.0722,0.546,-0.0717,-0.0717,0.0854,-0.0765,-0.0706,0.51,-0.101,-0.0609,0.533,-0.00833,-0.0588,0.365,-0.122,-0.0577,0.544,-0.0577,-0.0572,0.308,-0.123,-0.0561,0.13,-0.0245,-0.0556,0.506,-0.000272,-0.054,0.0972,-0.0175,-0.0529,0.536,-0.0368,-0.0529,0.121,-0.0873,-0.0497,0.358,-0.0234,-0.0486,0.0999,-0.0835,-0.0475,0.307,-0.0282,-0.0416,0.124,-0.0416,-0.0406,0.0918,-0.0626,-0.0406,0.513,-0.0744,-0.0384,0.0881,-0.0363,-0.0373,0.121,-0.0636,-0.0368,0.51,-0.0357,-0.0239,0.358,-0.0475,-0.0228,0.358,-0.0926,-0.0201,0.309,-0.0937,-0.0191,0.311,-0.0508,-0.0985,0.125,-0.0375}, 144);
SoIndexedFaceSet218->setCoord(*SoCoordinate219);

SoShape215->setGeometry(*SoIndexedFaceSet218);

SoField214->addChild(*SoShape215);

SoProtoInstance212->addChild(*SoField214);

SoField211->addChild(*SoProtoInstance212);

SoProtoInstance* SoProtoInstance220 = new SoProtoInstance();
SoProtoInstance220->setDEF(QString("hanim_r_ankle"));
SoProtoInstance220->setName(QString("Joint"));
SoField* SoField221 = new SoField();
SoField221->setName(QString("name"));
SoField221->setValue(QString("r_ankle"));
SoProtoInstance220->addChild(*SoField221);

SoField* SoField222 = new SoField();
SoField222->setName(QString("center"));
SoField222->setValue(QString("-0.064 0.0753 -0.0412"));
SoProtoInstance220->addChild(*SoField222);

SoField* SoField223 = new SoField();
SoField223->setName(QString("children"));
SoProtoInstance* SoProtoInstance224 = new SoProtoInstance();
SoProtoInstance224->setDEF(QString("hanim_r_hindfoot"));
SoProtoInstance224->setName(QString("Segment"));
SoField* SoField225 = new SoField();
SoField225->setName(QString("name"));
SoField225->setValue(QString("r_hindfoot"));
SoProtoInstance224->addChild(*SoField225);

SoField* SoField226 = new SoField();
SoField226->setName(QString("children"));
SoShape* SoShape227 = new SoShape();
SoShape227->setDEF(QString("_7"));
SoVRMLAppearance* SoVRMLAppearance228 = new SoVRMLAppearance();
SoMaterial* SoMaterial229 = new SoMaterial();
SoMaterial229->setUSE(QString("Shoe_Color"));
SoVRMLAppearance228->addChild(*SoMaterial229);

SoShape227->addChild(*SoVRMLAppearance228);

SoIndexedFaceSet* SoIndexedFaceSet230 = new SoIndexedFaceSet();
SoIndexedFaceSet230->setCreaseAngle(1.57);
SoIndexedFaceSet230->setCoordIndex(new int32_t[]{6,50,0,-1,50,8,7,-1,50,7,0,-1,1,9,8,-1,1,8,50,-1,49,10,9,-1,49,9,1,-1,46,11,10,-1,46,10,49,-1,2,12,11,-1,2,11,46,-1,3,13,12,-1,3,12,2,-1,4,14,13,-1,4,13,3,-1,45,14,4,-1,47,15,45,-1,19,15,47,-1,48,18,19,-1,5,16,18,-1,5,18,48,-1,6,17,16,-1,6,16,5,-1,0,7,17,-1,0,17,6,-1,14,20,21,-1,14,21,13,-1,13,21,12,-1,12,21,22,-1,12,22,11,-1,11,22,10,-1,17,23,16,-1,16,23,24,-1,16,24,18,-1,18,24,25,-1,18,25,19,-1,19,25,26,-1,19,26,15,-1,15,26,20,-1,20,26,27,-1,20,27,21,-1,21,27,28,-1,21,28,22,-1,22,28,29,-1,10,30,9,-1,9,30,31,-1,9,31,8,-1,8,31,32,-1,17,32,23,-1,23,33,34,-1,23,34,35,-1,23,35,24,-1,24,35,36,-1,24,36,25,-1,25,36,37,-1,25,37,26,-1,26,37,38,-1,26,38,27,-1,27,38,39,-1,27,39,28,-1,28,39,40,-1,28,40,29,-1,29,40,41,-1,29,41,30,-1,30,41,42,-1,30,42,31,-1,31,42,43,-1,31,43,32,-1,32,43,33,-1,32,33,23,-1,44,43,42,-1,44,42,41,-1,44,41,40,-1,44,40,39,-1,44,39,38,-1,44,38,37,-1,44,37,36,-1,44,36,35,-1,44,35,34,-1,44,34,33,-1,44,33,43,-1,4,3,2,-1,45,4,2,-1,45,2,46,-1,47,45,46,-1,48,46,49,-1,5,48,49,-1,5,49,1,-1,6,5,1,-1,6,1,50,-1,30,10,29,-1,10,22,29,-1,17,7,32,-1,7,8,32,-1,19,47,48,-1,47,46,48,-1,20,14,15,-1,14,45,15,-1}, 392);
SoCoordinate* SoCoordinate231 = new SoCoordinate();
SoCoordinate231->setPoint(new float[]{-0.0727,0.0,-0.0994,-0.1,0.0,-0.0594,-0.0701,0.0,0.146,-0.0468,0.0,0.153,-0.0215,0.0,0.146,-0.0433,0.0,-0.0534,-0.0529,0.0,-0.0923,-0.0727,0.0219,-0.0994,-0.0863,0.0219,-0.0862,-0.1,0.0219,-0.0594,-0.108,0.0219,-0.00479,-0.112,0.0156,0.117,-0.0701,0.0156,0.146,-0.0468,0.0156,0.153,-0.0215,0.0156,0.146,-0.0165,0.017,0.0777,-0.0433,0.0219,-0.0534,-0.0529,0.0219,-0.0923,-0.0445,0.0273,-0.0189,-0.0265,0.0253,0.0549,-0.0305,0.0253,0.0938,-0.069,0.0253,0.0938,-0.102,0.0253,0.0707,-0.0568,0.0573,-0.0918,-0.0492,0.0573,-0.0497,-0.0424,0.0573,-0.00142,-0.0478,0.0573,0.0341,-0.0623,0.0573,0.0366,-0.0864,0.0573,0.0245,-0.0962,0.0573,-0.0121,-0.0845,0.0573,-0.0764,-0.0758,0.0573,-0.0899,-0.0676,0.0573,-0.0962,-0.0578,0.0953,-0.0896,-0.0489,0.0953,-0.0757,-0.0459,0.0953,-0.0615,-0.0435,0.0953,-0.0292,-0.0485,0.0953,-0.00582,-0.0624,0.0953,-0.00466,-0.0857,0.0953,-0.0134,-0.0953,0.0953,-0.038,-0.0843,0.0953,-0.0803,-0.0761,0.0953,-0.0889,-0.0682,0.0953,-0.0929,-0.0675,0.13,-0.0608,-0.0165,0.0,0.125,-0.112,0.0,0.117,-0.0165,0.0,0.0777,-0.0393,0.0,-0.0129,-0.108,0.0,-0.00479,-0.0863,0.0,-0.0862}, 153);
SoIndexedFaceSet230->setCoord(*SoCoordinate231);

SoShape227->setGeometry(*SoIndexedFaceSet230);

SoField226->addChild(*SoShape227);

SoProtoInstance224->addChild(*SoField226);

SoField223->addChild(*SoProtoInstance224);

SoProtoInstance220->addChild(*SoField223);

SoField211->addChild(*SoProtoInstance220);

SoProtoInstance208->addChild(*SoField211);

SoField199->addChild(*SoProtoInstance208);

SoProtoInstance196->addChild(*SoField199);

SoField151->addChild(*SoProtoInstance196);

SoProtoInstance148->addChild(*SoField151);

SoField147->addChild(*SoProtoInstance148);

SoProtoInstance* SoProtoInstance232 = new SoProtoInstance();
SoProtoInstance232->setDEF(QString("hanim_vl1"));
SoProtoInstance232->setName(QString("Joint"));
SoField* SoField233 = new SoField();
SoField233->setName(QString("name"));
SoField233->setValue(QString("vl1"));
SoProtoInstance232->addChild(*SoField233);

SoField* SoField234 = new SoField();
SoField234->setName(QString("center"));
SoField234->setValue(QString("-0.00405 1.07 -0.0275"));
SoProtoInstance232->addChild(*SoField234);

SoField* SoField235 = new SoField();
SoField235->setName(QString("children"));
SoProtoInstance* SoProtoInstance236 = new SoProtoInstance();
SoProtoInstance236->setDEF(QString("hanim_c7"));
SoProtoInstance236->setName(QString("Segment"));
SoField* SoField237 = new SoField();
SoField237->setName(QString("name"));
SoField237->setValue(QString("l1"));
SoProtoInstance236->addChild(*SoField237);

SoField* SoField238 = new SoField();
SoField238->setName(QString("children"));
SoShape* SoShape239 = new SoShape();
SoShape239->setDEF(QString("_8"));
SoVRMLAppearance* SoVRMLAppearance240 = new SoVRMLAppearance();
SoMaterial* SoMaterial241 = new SoMaterial();
SoMaterial241->setDEF(QString("Shirt_Color"));
SoMaterial241->setAmbientIntensity(0.25);
SoMaterial241->setDiffuseColor(new float[]{0.6,0.0745,0.1137});
SoVRMLAppearance240->addChild(*SoMaterial241);

SoImageTexture* SoImageTexture242 = new SoImageTexture();
SoImageTexture242->setDEF(QString("small_logo_Tex"));
SoImageTexture242->setUrl(new QString[]{QString("small_logo.gif"), QString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/small_logo.gif")}, 2);
SoVRMLAppearance240->addChild(*SoImageTexture242);

SoShape239->addChild(*SoVRMLAppearance240);

SoIndexedFaceSet* SoIndexedFaceSet243 = new SoIndexedFaceSet();
SoIndexedFaceSet243->setCreaseAngle(1.59);
SoIndexedFaceSet243->setCoordIndex(new int32_t[]{0,1,2,-1,3,0,2,-1,4,5,6,-1,6,7,4,-1,8,7,6,-1,6,9,8,-1,9,10,8,-1,6,5,11,-1,9,6,12,-1,11,12,6,-1,12,10,9,-1,7,8,13,-1,13,4,7,-1,14,15,16,-1,15,17,13,-1,4,13,17,-1,17,15,18,-1,13,19,15,-1,19,13,8,-1,19,16,15,-1,16,19,8,-1,17,20,4,-1,5,4,20,-1,18,21,17,-1,20,17,21,-1,16,22,14,-1,22,16,23,-1,8,23,16,-1,23,8,10,-1,24,25,26,-1,26,27,24,-1,25,28,26,-1,28,29,30,-1,30,26,28,-1,31,32,33,-1,32,25,33,-1,25,24,34,-1,33,25,34,-1,24,35,34,-1,27,35,24,-1,33,36,31,-1,27,26,37,-1,37,26,30,-1,38,37,30,-1,33,34,39,-1,39,34,35,-1,39,35,40,-1,41,38,30,-1,35,27,42,-1,37,42,27,-1,40,35,42,-1,42,37,43,-1,37,38,44,-1,44,43,37,-1,36,45,46,-1,36,33,45,-1,40,42,47,-1,43,47,42,-1,47,48,40,-1,39,40,48,-1,47,43,49,-1,43,44,49,-1,50,49,44,-1,51,46,52,-1,46,45,52,-1,52,45,53,-1,33,53,45,-1,33,39,53,-1,49,54,47,-1,48,47,54,-1,55,56,52,-1,57,52,53,-1,57,55,52,-1,58,57,53,-1,59,58,53,-1,53,39,59,-1,39,48,59,-1,59,48,54,-1,58,59,60,-1,54,49,61,-1,59,54,61,-1,60,59,61,-1,49,50,62,-1,63,62,50,-1,62,61,49,-1,64,63,50,-1,63,64,65,-1,65,62,63,-1,66,60,61,-1,62,65,67,-1,68,67,65,-1,64,69,70,-1,64,70,65,-1,70,68,65,-1,69,71,72,-1,72,70,69,-1,73,74,75,-1,66,76,60,-1,67,77,62,-1,62,77,61,-1,77,66,61,-1,66,77,78,-1,77,67,79,-1,79,67,68,-1,79,78,77,-1,68,70,80,-1,70,72,80,-1,80,79,68,-1,74,73,81,-1,73,76,82,-1,82,81,73,-1,76,66,83,-1,78,83,66,-1,83,82,76,-1,78,79,84,-1,79,80,84,-1,84,85,78,-1,86,84,80,-1,81,82,87,-1,87,88,81,-1,82,83,89,-1,83,78,89,-1,89,87,82,-1,78,85,89,-1,90,91,92,-1,92,93,90,-1,90,94,91,-1,95,96,94,-1,94,90,95,-1,29,96,97,-1,96,95,97,-1,97,30,29,-1,30,97,41,-1,41,97,95,-1,98,99,100,-1,98,91,99,-1,101,92,91,-1,98,101,91,-1,101,102,92,-1,92,102,93,-1,36,103,31,-1,51,103,36,46,-1,103,100,31,-1,100,103,98,-1,104,90,93,-1,90,104,95,-1,95,105,41,-1,104,105,95,-1,106,101,98,-1,102,101,106,-1,107,93,102,-1,93,107,104,-1,108,104,107,-1,107,109,108,-1,110,105,104,-1,104,108,110,-1,109,107,111,-1,107,102,111,-1,111,102,106,-1,111,112,109,-1,106,112,111,-1,113,110,108,-1,110,113,114,-1,51,52,115,-1,116,115,117,-1,117,106,116,-1,118,109,112,-1,119,108,109,-1,108,119,113,-1,109,118,119,-1,120,113,119,-1,119,121,120,-1,52,56,122,-1,122,115,52,-1,115,122,123,-1,117,124,125,-1,106,117,125,-1,118,112,106,125,-1,119,118,125,-1,121,119,125,-1,126,124,123,-1,127,114,113,-1,114,127,128,-1,113,120,127,-1,114,128,129,-1,130,126,123,-1,122,130,123,-1,131,120,121,-1,131,127,120,-1,132,129,128,-1,128,127,132,-1,74,81,133,-1,81,134,133,-1,121,135,131,-1,136,132,127,-1,132,136,137,-1,138,71,129,-1,138,129,132,-1,137,138,132,-1,139,72,71,-1,72,139,80,-1,71,138,139,-1,140,135,121,-1,140,121,125,-1,141,127,131,-1,127,141,136,-1,131,135,141,-1,142,141,135,-1,143,136,141,-1,136,143,137,-1,141,142,143,-1,144,138,137,-1,144,139,138,-1,143,144,137,-1,145,146,134,-1,145,140,146,-1,134,81,145,-1,147,135,140,-1,135,147,142,-1,140,145,147,-1,148,80,139,-1,80,148,86,-1,139,144,148,-1,149,143,142,-1,149,144,143,-1,142,150,149,-1,151,148,144,-1,144,149,151,-1,152,145,81,-1,81,88,152,-1,153,147,145,-1,153,142,147,-1,145,152,153,-1,153,150,142,-1,154,86,148,-1,148,151,154,-1,155,28,25,-1,155,29,28,-1,155,25,32,-1,155,32,31,-1,155,31,100,-1,155,100,99,-1,155,99,91,-1,155,91,94,-1,155,94,96,-1,155,96,29,-1,156,151,149,-1,156,154,151,-1,156,149,150,-1,156,150,153,-1,156,153,152,-1,156,152,88,-1,156,88,87,-1,156,87,89,-1,156,89,85,-1,156,85,84,-1,156,84,86,-1,156,86,154,-1,76,157,60,-1,76,73,158,157,-1,159,158,73,75,160,-1,161,56,55,-1,60,162,58,-1,162,60,157,-1,161,55,163,-1,57,164,163,55,-1,160,163,164,-1,160,164,159,-1,164,57,165,-1,164,165,159,-1,57,58,166,165,-1,166,58,162,-1,165,166,159,-1,166,162,157,158,159,-1,140,125,167,-1,124,168,125,-1,168,167,125,-1,124,169,168,-1,146,140,167,170,-1,168,170,167,-1,168,169,170,-1,146,170,171,-1,169,171,170,-1,172,134,146,171,-1,134,172,130,-1,169,124,126,173,-1,173,126,130,-1,169,173,172,171,-1,173,130,172,-1,122,74,133,174,-1,133,134,174,-1,130,122,174,-1,134,130,174,-1,122,56,175,74,-1,74,175,176,-1,175,56,161,176,-1,74,176,75,-1,176,161,163,-1,176,160,75,-1,176,163,160,-1,115,116,177,51,-1,106,98,177,116,-1,51,177,103,-1,177,98,103,-1}, 1234);
SoTextureCoordinate* SoTextureCoordinate244 = new SoTextureCoordinate();
SoTextureCoordinate244->setPoint(new float[]{0.1611,-0.02056,0.9468,-0.02056,0.9739,0.9344,-0.137,1.094,0.1973,0.6424,0.2231,0.04876,0.5054,0.2466,0.5054,0.5929,0.8135,0.6424,0.6282,0.1972,0.7876,0.04876,0.5054,-0.05018,0.6282,-0.05018,0.5054,0.8403,0.7989,1.038,0.5054,1.038,0.8248,0.7908,0.186,0.7908,0.2118,1.038,0.6427,0.7908,-0.01977,0.5929,-0.03324,0.7908,1.044,0.7908,1.031,0.5929,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 356);
SoIndexedFaceSet243->setTexCoord(*SoTextureCoordinate244);

SoCoordinate* SoCoordinate245 = new SoCoordinate();
SoCoordinate245->setPoint(new float[]{0.043,1.25,0.0614,0.101,1.25,0.0614,0.103,1.31,0.0195,0.021,1.32,0.0276,0.0572,1.27,-0.153,0.0524,1.15,-0.134,0.0,1.19,-0.14,0.0,1.26,-0.147,-0.0572,1.27,-0.153,-0.0228,1.18,-0.14,-0.0524,1.15,-0.134,0.0,1.13,-0.126,-0.0228,1.13,-0.124,0.0,1.31,-0.146,-0.0545,1.35,-0.138,0.0,1.35,-0.136,-0.0593,1.3,-0.151,0.0593,1.3,-0.151,0.0545,1.35,-0.138,-0.0255,1.3,-0.146,0.0975,1.26,-0.15,0.1,1.3,-0.148,-0.1,1.3,-0.148,-0.0975,1.26,-0.15,-0.117,1.41,-0.0395,-0.0674,1.45,-0.0314,-0.0926,1.41,-0.0937,-0.124,1.4,-0.0706,-0.0583,1.44,-0.0615,-0.0228,1.46,-0.0872,-0.0534,1.42,-0.112,-0.0228,1.42,0.00351,-0.0593,1.43,-0.0185,-0.0787,1.39,-0.00293,-0.112,1.4,-0.0131,-0.164,1.39,-0.0373,-0.0153,1.39,0.0159,-0.0953,1.35,-0.136,-0.0545,1.35,-0.138,-0.139,1.34,0.00297,-0.137,1.34,-0.0368,0.0,1.35,-0.136,-0.156,1.35,-0.0915,-0.132,1.29,-0.127,-0.1,1.3,-0.148,-0.0418,1.35,0.0168,-0.013,1.37,0.0167,-0.151,1.28,-0.0878,-0.136,1.32,-0.0406,-0.124,1.26,-0.125,-0.0975,1.26,-0.15,0.00228,1.37,0.0167,-0.00959,1.32,0.0276,-0.0918,1.31,0.0195,-0.141,1.25,-0.0744,-0.0316,1.25,0.0614,-0.00261,1.25,0.0458,-0.0611,1.25,0.0668,-0.0896,1.25,0.0614,-0.126,1.24,0.012,-0.126,1.22,0.0141,-0.129,1.17,-0.0523,-0.115,1.16,-0.105,-0.0851,1.18,-0.134,-0.0524,1.15,-0.134,-0.083,1.13,-0.122,-0.117,1.15,-0.018,-0.11,1.1,-0.0846,-0.0808,1.1,-0.111,-0.0228,1.13,-0.124,-0.0524,1.1,-0.119,0.0,1.13,-0.126,-0.0228,1.1,-0.116,-0.0563,1.15,0.0377,-0.00476,1.18,0.0458,-0.0343,1.18,0.0485,-0.0966,1.15,-0.00413,-0.12,1.1,-0.0373,-0.121,1.07,-0.0356,-0.106,1.07,-0.0711,-0.0475,1.06,-0.105,0.0,1.08,0.0556,-0.0787,1.08,0.0347,-0.103,1.08,0.00296,-0.0975,1.01,-0.0873,-0.134,0.998,-0.0314,-0.0475,1.02,-0.109,-0.0325,1.02,0.0529,0.0,1.02,0.0422,-0.0975,1.02,0.0132,0.0926,1.41,-0.0937,0.0674,1.45,-0.0314,0.117,1.41,-0.0395,0.124,1.4,-0.0706,0.0583,1.44,-0.0615,0.0534,1.42,-0.112,0.0228,1.46,-0.0872,0.0,1.4,-0.112,0.0787,1.39,-0.00293,0.0593,1.43,-0.0185,0.0228,1.42,0.00351,0.112,1.4,-0.0131,0.164,1.39,-0.0373,0.0153,1.39,0.0159,0.0953,1.35,-0.136,0.0545,1.35,-0.138,0.139,1.34,0.00297,0.156,1.35,-0.0915,0.132,1.29,-0.127,0.151,1.28,-0.0878,0.1,1.3,-0.148,0.137,1.34,-0.0368,0.147,1.32,-0.0406,0.124,1.26,-0.125,0.0975,1.26,-0.15,0.021,1.32,0.0276,0.0532,1.35,0.0168,0.103,1.31,0.0195,0.135,1.29,-0.0406,0.141,1.25,-0.0744,0.132,1.18,-0.083,0.134,1.19,-0.0572,0.014,1.25,0.0458,0.043,1.25,0.0614,0.101,1.25,0.0614,0.138,1.24,0.012,0.065,1.23,0.0743,0.115,1.16,-0.105,0.0851,1.18,-0.134,0.0524,1.15,-0.134,0.043,1.2,0.0641,0.127,1.14,-0.0427,0.083,1.13,-0.122,0.0162,1.18,0.0458,0.0457,1.18,0.0485,0.117,1.15,-0.018,0.11,1.1,-0.0846,0.0808,1.1,-0.111,0.0524,1.1,-0.119,0.0228,1.1,-0.116,0.108,1.15,-0.00413,0.12,1.1,-0.0373,0.121,1.07,-0.0356,0.106,1.07,-0.0711,0.0475,1.06,-0.105,0.0787,1.08,0.0347,0.0844,1.15,0.0297,0.103,1.08,0.00296,0.0,1.07,-0.11,0.0975,1.01,-0.0873,0.134,0.998,-0.0475,0.0475,1.02,-0.109,0.0325,1.02,0.0529,0.0975,1.02,0.0132,0.0,1.02,-0.117,0.0,1.44,-0.0389,0.0,1.01,-0.0259,-0.104,1.19,0.0423,-0.0778,1.19,0.0642,-0.078,1.19,0.0644,-0.0493,1.2,0.0664,-0.0281,1.22,0.0587,-0.104,1.2,0.0568,-0.0484,1.21,0.0692,-0.0549,1.21,0.0708,-0.0806,1.21,0.0713,-0.0852,1.21,0.0703,0.116,1.19,0.043,0.114,1.21,0.0572,0.0967,1.21,0.0701,0.11,1.19,0.0502,0.093,1.19,0.0622,0.0832,1.19,0.0662,0.0863,1.21,0.0728,0.0154,1.21,0.0458,-0.00393,1.21,0.0458,-0.0145,1.2,0.0512,0.0534,1.35,0.0168}, 534);
SoIndexedFaceSet243->setCoord(*SoCoordinate245);

SoShape239->setGeometry(*SoIndexedFaceSet243);

SoField238->addChild(*SoShape239);

SoProtoInstance236->addChild(*SoField238);

SoField235->addChild(*SoProtoInstance236);

SoProtoInstance* SoProtoInstance246 = new SoProtoInstance();
SoProtoInstance246->setDEF(QString("hanim_l_shoulder"));
SoProtoInstance246->setName(QString("Joint"));
SoField* SoField247 = new SoField();
SoField247->setName(QString("name"));
SoField247->setValue(QString("l_shoulder"));
SoProtoInstance246->addChild(*SoField247);

SoField* SoField248 = new SoField();
SoField248->setName(QString("center"));
SoField248->setValue(QString("0.167 1.36 -0.0518"));
SoProtoInstance246->addChild(*SoField248);

SoField* SoField249 = new SoField();
SoField249->setName(QString("children"));
SoProtoInstance* SoProtoInstance250 = new SoProtoInstance();
SoProtoInstance250->setDEF(QString("hanim_l_upperarm"));
SoProtoInstance250->setName(QString("Segment"));
SoField* SoField251 = new SoField();
SoField251->setName(QString("name"));
SoField251->setValue(QString("l_upperarm"));
SoProtoInstance250->addChild(*SoField251);

SoField* SoField252 = new SoField();
SoField252->setName(QString("children"));
SoTransform* SoTransform253 = new SoTransform();
SoTransform253->setDEF(QString("l_upperarm_adjust"));
SoTransform253->setTranslation(new float[]{0.0,0.0004203,-0.01665});
SoTransform253->setRotation(new float[]{1.0,0.0,0.0,0.119});
SoTransform253->setCenter(new float[]{0.182,1.22,-0.047});
SoShape* SoShape254 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance255 = new SoVRMLAppearance();
SoMaterial* SoMaterial256 = new SoMaterial();
SoMaterial256->setDEF(QString("Skin_Color"));
SoMaterial256->setAmbientIntensity(0.25);
SoMaterial256->setDiffuseColor(new float[]{0.749,0.601,0.462});
SoVRMLAppearance255->addChild(*SoMaterial256);

SoShape254->addChild(*SoVRMLAppearance255);

SoIndexedFaceSet* SoIndexedFaceSet257 = new SoIndexedFaceSet();
SoIndexedFaceSet257->setCreaseAngle(1.65);
SoIndexedFaceSet257->setCoordIndex(new int32_t[]{2,1,0,-1,2,3,1,-1,2,4,3,-1,2,0,5,-1,6,5,0,-1,7,2,5,-1,8,4,2,-1,8,3,4,-1,9,1,3,-1,10,0,1,-1,0,10,6,-1,1,9,10,-1,3,8,9,-1,2,7,8,-1,5,6,7,-1,11,7,6,-1,14,9,8,-1,15,10,9,-1,11,6,10,-1,10,15,11,-1,9,14,15,-1,8,13,14,-1,8,16,13,-1,7,11,12,-1,21,15,14,-1,15,17,11,-1,15,21,17,-1,16,19,13,-1,13,19,20,-1,21,14,20,-1,14,13,20,-1,12,17,18,-1,12,11,17,-1,12,18,16,-1,18,19,16,-1,12,16,7,-1,16,8,7,-1,19,18,17,-1,20,19,21,-1,19,17,21,-1}, 160);
SoCoordinate* SoCoordinate258 = new SoCoordinate();
SoCoordinate258->setPoint(new float[]{0.174,1.37,-0.0625,0.185,1.38,-0.0395,0.156,1.39,-0.0464,0.174,1.37,-0.0158,0.154,1.37,-0.0185,0.157,1.38,-0.0733,0.182,1.33,-0.0728,0.151,1.33,-0.0937,0.15,1.34,-0.000787,0.185,1.33,-0.00025,0.201,1.33,-0.0411,0.189,1.26,-0.0808,0.155,1.26,-0.0867,0.151,1.26,-0.000789,0.19,1.26,-0.00401,0.209,1.26,-0.0427,0.141,1.26,-0.0421,0.203,1.08,-0.0744,0.162,1.05,-0.0561,0.169,1.08,-0.00885,0.208,1.07,-0.00133,0.221,1.08,-0.0352}, 66);
SoIndexedFaceSet257->setCoord(*SoCoordinate258);

SoShape254->setGeometry(*SoIndexedFaceSet257);

SoTransform253->addChild(*SoShape254);

SoField252->addChild(*SoTransform253);

SoProtoInstance250->addChild(*SoField252);

SoField249->addChild(*SoProtoInstance250);

SoProtoInstance* SoProtoInstance259 = new SoProtoInstance();
SoProtoInstance259->setDEF(QString("hanim_l_elbow"));
SoProtoInstance259->setName(QString("Joint"));
SoField* SoField260 = new SoField();
SoField260->setName(QString("name"));
SoField260->setValue(QString("l_elbow"));
SoProtoInstance259->addChild(*SoField260);

SoField* SoField261 = new SoField();
SoField261->setName(QString("center"));
SoField261->setValue(QString("0.196 1.07 -0.0518"));
SoProtoInstance259->addChild(*SoField261);

SoField* SoField262 = new SoField();
SoField262->setName(QString("children"));
SoProtoInstance* SoProtoInstance263 = new SoProtoInstance();
SoProtoInstance263->setDEF(QString("hanim_l_forearm"));
SoProtoInstance263->setName(QString("Segment"));
SoField* SoField264 = new SoField();
SoField264->setName(QString("name"));
SoField264->setValue(QString("l_forearm"));
SoProtoInstance263->addChild(*SoField264);

SoField* SoField265 = new SoField();
SoField265->setName(QString("children"));
SoTransform* SoTransform266 = new SoTransform();
SoTransform266->setDEF(QString("l_forearm_adjust"));
SoTransform266->setTranslation(new float[]{0.0,0.003724,-0.0236});
SoTransform266->setRotation(new float[]{-1.0,0.0,0.0,0.1});
SoTransform266->setCenter(new float[]{0.198,0.961,-0.0405});
SoShape* SoShape267 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance268 = new SoVRMLAppearance();
SoMaterial* SoMaterial269 = new SoMaterial();
SoMaterial269->setUSE(QString("Skin_Color"));
SoVRMLAppearance268->addChild(*SoMaterial269);

SoShape267->addChild(*SoVRMLAppearance268);

SoIndexedFaceSet* SoIndexedFaceSet270 = new SoIndexedFaceSet();
SoIndexedFaceSet270->setCreaseAngle(1.75);
SoIndexedFaceSet270->setCoordIndex(new int32_t[]{2,1,0,-1,2,3,1,-1,2,4,3,-1,2,5,4,-1,2,6,5,-1,2,0,6,-1,7,6,0,-1,8,5,6,-1,9,4,5,-1,9,3,4,-1,10,1,3,-1,11,0,1,-1,0,11,7,-1,1,10,11,-1,3,9,10,-1,5,12,9,-1,5,8,12,-1,6,7,8,-1,17,16,15,-1,14,17,15,-1,14,18,17,-1,13,18,14,-1,16,17,10,-1,16,10,9,-1,15,16,9,-1,15,9,12,-1,18,13,7,-1,18,7,11,-1,13,14,8,-1,13,8,7,-1,14,15,8,-1,15,12,8,-1,17,18,10,-1,18,11,10,-1}, 136);
SoCoordinate* SoCoordinate271 = new SoCoordinate();
SoCoordinate271->setPoint(new float[]{0.177,1.09,-0.0609,0.202,1.1,-0.0566,0.189,1.1,-0.0395,0.213,1.1,-0.025,0.203,1.1,-0.0158,0.182,1.09,-0.00563,0.167,1.09,-0.0325,0.176,1.08,-0.0781,0.16,1.06,-0.0373,0.214,1.07,-0.00402,0.228,1.07,-0.0319,0.208,1.08,-0.0765,0.179,1.07,-0.00294,0.21,0.818,-0.0615,0.201,0.82,-0.0405,0.205,0.819,-0.00832,0.224,0.818,-0.00778,0.237,0.82,-0.0282,0.231,0.819,-0.0609}, 57);
SoIndexedFaceSet270->setCoord(*SoCoordinate271);

SoShape267->setGeometry(*SoIndexedFaceSet270);

SoTransform266->addChild(*SoShape267);

SoField265->addChild(*SoTransform266);

SoProtoInstance263->addChild(*SoField265);

SoField262->addChild(*SoProtoInstance263);

SoProtoInstance* SoProtoInstance272 = new SoProtoInstance();
SoProtoInstance272->setDEF(QString("hanim_l_wrist"));
SoProtoInstance272->setName(QString("Joint"));
SoField* SoField273 = new SoField();
SoField273->setName(QString("name"));
SoField273->setValue(QString("l_wrist"));
SoProtoInstance272->addChild(*SoField273);

SoField* SoField274 = new SoField();
SoField274->setName(QString("center"));
SoField274->setValue(QString("0.213 0.811 -0.0338"));
SoProtoInstance272->addChild(*SoField274);

SoField* SoField275 = new SoField();
SoField275->setName(QString("children"));
SoProtoInstance* SoProtoInstance276 = new SoProtoInstance();
SoProtoInstance276->setDEF(QString("hanim_l_hand"));
SoProtoInstance276->setName(QString("Segment"));
SoField* SoField277 = new SoField();
SoField277->setName(QString("name"));
SoField277->setValue(QString("l_hand"));
SoProtoInstance276->addChild(*SoField277);

SoField* SoField278 = new SoField();
SoField278->setName(QString("children"));
SoTransform* SoTransform279 = new SoTransform();
SoTransform279->setDEF(QString("l_hand_adjust"));
SoTransform279->setTranslation(new float[]{0.0,0.005142,-0.008662});
SoTransform279->setRotation(new float[]{-0.06361,-0.9967,0.04988,1.333});
SoTransform279->setCenter(new float[]{0.213,0.811,-0.0338});
SoShape* SoShape280 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance281 = new SoVRMLAppearance();
SoMaterial* SoMaterial282 = new SoMaterial();
SoMaterial282->setUSE(QString("Skin_Color"));
SoVRMLAppearance281->addChild(*SoMaterial282);

SoShape280->addChild(*SoVRMLAppearance281);

SoIndexedFaceSet* SoIndexedFaceSet283 = new SoIndexedFaceSet();
SoIndexedFaceSet283->setCreaseAngle(1.48);
SoIndexedFaceSet283->setCoordIndex(new int32_t[]{2,1,0,-1,5,4,3,-1,3,7,6,-1,2,3,6,-1,7,9,8,-1,6,7,8,-1,9,11,10,-1,8,9,10,-1,11,13,12,-1,10,11,12,-1,13,15,14,-1,12,13,14,-1,15,17,16,-1,14,15,16,-1,17,19,18,-1,16,17,18,-1,19,21,20,-1,18,19,20,-1,31,4,1,-1,4,5,0,-1,1,4,0,-1,5,3,2,-1,0,5,2,-1,26,25,24,-1,26,24,23,-1,27,26,23,-1,28,27,23,-1,28,23,22,-1,29,28,22,-1,29,22,21,-1,30,29,21,-1,15,13,11,-1,17,15,11,-1,19,17,11,-1,19,11,9,-1,31,19,9,-1,31,9,7,-1,4,31,7,-1,4,7,3,-1,30,21,19,-1,31,30,19,-1,12,14,16,-1,10,12,16,-1,10,16,18,-1,8,10,18,-1,6,8,1,-1,2,6,1,-1,39,38,37,-1,37,38,40,-1,37,40,36,-1,36,40,41,-1,36,41,35,-1,35,41,42,-1,35,42,34,-1,34,42,43,-1,34,43,33,-1,33,43,44,-1,33,44,32,-1,20,32,44,-1,20,44,45,-1,20,45,46,-1,47,8,18,-1,47,18,20,-1,47,20,46,-1,8,47,1,-1,22,33,32,-1,23,35,34,-1,23,36,35,-1,37,24,25,-1,40,38,27,-1,29,43,42,-1,45,44,30,-1,47,31,1,-1,47,46,31,-1,29,30,43,-1,30,44,43,-1,45,31,46,-1,45,30,31,-1,28,29,41,-1,29,42,41,-1,28,40,27,-1,28,41,40,-1,26,27,39,-1,27,38,39,-1,25,39,37,-1,25,26,39,-1,24,36,23,-1,24,37,36,-1,23,34,22,-1,34,33,22,-1,22,32,21,-1,32,20,21,-1}, 368);
SoCoordinate* SoCoordinate284 = new SoCoordinate();
SoCoordinate284->setPoint(new float[]{0.211,0.828,-0.0434,0.194,0.81,-0.0445,0.237,0.82,-0.0425,0.236,0.82,-0.0237,0.194,0.81,-0.0254,0.21,0.828,-0.0247,0.252,0.801,-0.0424,0.252,0.801,-0.0231,0.269,0.765,-0.0426,0.268,0.765,-0.0225,0.273,0.732,-0.0395,0.272,0.732,-0.0223,0.27,0.704,-0.0342,0.27,0.704,-0.0224,0.262,0.703,-0.0345,0.261,0.703,-0.0227,0.256,0.717,-0.0389,0.256,0.717,-0.023,0.255,0.738,-0.0408,0.255,0.738,-0.023,0.251,0.734,-0.0406,0.251,0.734,-0.0232,0.251,0.692,-0.0232,0.248,0.657,-0.0233,0.24,0.645,-0.0236,0.226,0.637,-0.0241,0.213,0.639,-0.0246,0.197,0.652,-0.0253,0.188,0.669,-0.0256,0.184,0.697,-0.0258,0.183,0.73,-0.0258,0.187,0.77,-0.0257,0.244,0.696,-0.0375,0.244,0.692,-0.0372,0.242,0.661,-0.0345,0.241,0.658,-0.0343,0.241,0.656,-0.0341,0.231,0.646,-0.0336,0.206,0.65,-0.0349,0.218,0.644,-0.034,0.205,0.652,-0.0352,0.198,0.667,-0.0367,0.195,0.691,-0.039,0.194,0.696,-0.0395,0.193,0.725,-0.042,0.193,0.731,-0.0425,0.197,0.765,-0.0449,0.197,0.77,-0.0453}, 144);
SoIndexedFaceSet283->setCoord(*SoCoordinate284);

SoShape280->setGeometry(*SoIndexedFaceSet283);

SoTransform279->addChild(*SoShape280);

SoField278->addChild(*SoTransform279);

SoProtoInstance276->addChild(*SoField278);

SoField275->addChild(*SoProtoInstance276);

SoProtoInstance272->addChild(*SoField275);

SoField262->addChild(*SoProtoInstance272);

SoProtoInstance259->addChild(*SoField262);

SoField249->addChild(*SoProtoInstance259);

SoProtoInstance246->addChild(*SoField249);

SoField235->addChild(*SoProtoInstance246);

SoProtoInstance* SoProtoInstance285 = new SoProtoInstance();
SoProtoInstance285->setDEF(QString("hanim_r_shoulder"));
SoProtoInstance285->setName(QString("Joint"));
SoField* SoField286 = new SoField();
SoField286->setName(QString("name"));
SoField286->setValue(QString("r_shoulder"));
SoProtoInstance285->addChild(*SoField286);

SoField* SoField287 = new SoField();
SoField287->setName(QString("center"));
SoField287->setValue(QString("-0.167 1.36 -0.0458"));
SoProtoInstance285->addChild(*SoField287);

SoField* SoField288 = new SoField();
SoField288->setName(QString("children"));
SoProtoInstance* SoProtoInstance289 = new SoProtoInstance();
SoProtoInstance289->setDEF(QString("hanim_r_upperarm"));
SoProtoInstance289->setName(QString("Segment"));
SoField* SoField290 = new SoField();
SoField290->setName(QString("name"));
SoField290->setValue(QString("r_upperarm"));
SoProtoInstance289->addChild(*SoField290);

SoField* SoField291 = new SoField();
SoField291->setName(QString("children"));
SoTransform* SoTransform292 = new SoTransform();
SoTransform292->setDEF(QString("r_upperarm_adjust"));
SoTransform292->setTranslation(new float[]{0.0,0.000589,-0.01169});
SoTransform292->setRotation(new float[]{1.0,0.0,0.0,0.0836});
SoTransform292->setCenter(new float[]{-0.182,1.22,-0.047});
SoShape* SoShape293 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance294 = new SoVRMLAppearance();
SoMaterial* SoMaterial295 = new SoMaterial();
SoMaterial295->setUSE(QString("Skin_Color"));
SoVRMLAppearance294->addChild(*SoMaterial295);

SoShape293->addChild(*SoVRMLAppearance294);

SoIndexedFaceSet* SoIndexedFaceSet296 = new SoIndexedFaceSet();
SoIndexedFaceSet296->setCreaseAngle(1.53);
SoIndexedFaceSet296->setCoordIndex(new int32_t[]{14,10,20,-1,10,13,20,-1,13,22,20,-1,19,14,20,-1,14,19,12,-1,19,20,24,-1,20,22,25,-1,22,13,25,-1,13,10,11,-1,10,14,5,-1,12,5,14,-1,5,11,10,-1,11,25,13,-1,25,24,20,-1,24,12,19,-1,12,24,9,-1,25,11,8,-1,11,5,2,-1,5,12,9,-1,9,2,5,-1,2,8,11,-1,8,23,25,-1,23,27,25,-1,21,9,24,-1,9,21,7,-1,27,23,18,-1,23,8,18,-1,8,2,6,-1,2,9,7,-1,7,1,2,-1,1,6,2,-1,6,18,8,-1,18,26,27,-1,16,7,21,-1,7,16,4,-1,16,26,17,-1,26,18,15,-1,18,6,3,-1,6,1,0,-1,1,7,0,-1,4,0,7,-1,0,3,6,-1,3,15,18,-1,15,17,26,-1,17,4,16,-1,3,0,15,-1,15,0,4,-1,15,4,17,-1,25,27,24,-1,27,21,24,-1,27,26,21,-1,26,16,21,-1}, 208);
SoCoordinate* SoCoordinate297 = new SoCoordinate();
SoCoordinate297->setPoint(new float[]{-0.221,1.08,-0.0352,-0.214,1.14,-0.0405,-0.209,1.26,-0.0427,-0.208,1.07,-0.00133,-0.203,1.08,-0.0744,-0.201,1.33,-0.0411,-0.198,1.14,-0.0024,-0.198,1.13,-0.076,-0.19,1.26,-0.00401,-0.189,1.26,-0.0808,-0.185,1.38,-0.0395,-0.185,1.33,-0.00025,-0.182,1.33,-0.0728,-0.174,1.37,-0.0158,-0.174,1.37,-0.0625,-0.169,1.08,-0.00885,-0.167,1.13,-0.0744,-0.162,1.05,-0.0561,-0.16,1.13,-0.000793,-0.157,1.38,-0.0733,-0.156,1.39,-0.0464,-0.155,1.26,-0.0867,-0.154,1.37,-0.0185,-0.151,1.26,-0.000789,-0.151,1.33,-0.0937,-0.15,1.34,-0.000787,-0.15,1.13,-0.0411,-0.141,1.26,-0.0421}, 84);
SoIndexedFaceSet296->setCoord(*SoCoordinate297);

SoShape293->setGeometry(*SoIndexedFaceSet296);

SoTransform292->addChild(*SoShape293);

SoField291->addChild(*SoTransform292);

SoProtoInstance289->addChild(*SoField291);

SoField288->addChild(*SoProtoInstance289);

SoProtoInstance* SoProtoInstance298 = new SoProtoInstance();
SoProtoInstance298->setDEF(QString("hanim_r_elbow"));
SoProtoInstance298->setName(QString("Joint"));
SoField* SoField299 = new SoField();
SoField299->setName(QString("name"));
SoField299->setValue(QString("r_elbow"));
SoProtoInstance298->addChild(*SoField299);

SoField* SoField300 = new SoField();
SoField300->setName(QString("center"));
SoField300->setValue(QString("-0.192 1.07 -0.0498"));
SoProtoInstance298->addChild(*SoField300);

SoField* SoField301 = new SoField();
SoField301->setName(QString("children"));
SoProtoInstance* SoProtoInstance302 = new SoProtoInstance();
SoProtoInstance302->setDEF(QString("hanim_r_forearm"));
SoProtoInstance302->setName(QString("Segment"));
SoField* SoField303 = new SoField();
SoField303->setName(QString("name"));
SoField303->setValue(QString("r_forearm"));
SoProtoInstance302->addChild(*SoField303);

SoField* SoField304 = new SoField();
SoField304->setName(QString("children"));
SoTransform* SoTransform305 = new SoTransform();
SoTransform305->setDEF(QString("r_forearm_adjust"));
SoTransform305->setTranslation(new float[]{0.0,0.003466,-0.01065});
SoTransform305->setRotation(new float[]{-1.0,0.0,0.0,0.1254});
SoTransform305->setCenter(new float[]{-0.198,0.961,-0.0397});
SoShape* SoShape306 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance307 = new SoVRMLAppearance();
SoMaterial* SoMaterial308 = new SoMaterial();
SoMaterial308->setUSE(QString("Skin_Color"));
SoVRMLAppearance307->addChild(*SoMaterial308);

SoShape306->addChild(*SoVRMLAppearance307);

SoIndexedFaceSet* SoIndexedFaceSet309 = new SoIndexedFaceSet();
SoIndexedFaceSet309->setCreaseAngle(1.73);
SoIndexedFaceSet309->setCoordIndex(new int32_t[]{20,13,15,-1,13,8,15,-1,8,12,15,-1,12,18,15,-1,18,22,15,-1,22,20,15,-1,20,22,21,-1,22,18,24,-1,18,12,7,-1,12,8,7,-1,8,13,3,-1,13,20,10,-1,21,10,20,-1,10,3,13,-1,3,7,8,-1,7,19,18,-1,19,24,18,-1,24,21,22,-1,21,24,23,-1,24,19,16,-1,19,7,6,-1,7,3,1,-1,3,10,5,-1,10,21,17,-1,17,5,10,-1,5,1,3,-1,1,6,7,-1,6,16,19,-1,16,23,24,-1,23,17,21,-1,1,5,2,-1,5,17,9,-1,9,2,5,-1,1,4,6,-1,4,16,6,-1,23,9,17,-1,9,23,14,-1,23,16,11,-1,4,11,16,-1,11,14,23,-1,11,4,0,-1,11,0,14,-1,0,2,14,-1,14,2,9,-1,2,0,1,-1,0,4,1,-1}, 184);
SoCoordinate* SoCoordinate310 = new SoCoordinate();
SoCoordinate310->setPoint(new float[]{-0.237,0.82,-0.0282,-0.235,1.02,-0.033,-0.231,0.819,-0.0609,-0.228,1.07,-0.0319,-0.224,0.818,-0.00778,-0.221,1.01,-0.0744,-0.218,1.01,-0.00133,-0.214,1.07,-0.00402,-0.213,1.1,-0.025,-0.21,0.818,-0.0615,-0.208,1.08,-0.0765,-0.205,0.819,-0.00832,-0.203,1.1,-0.0158,-0.202,1.1,-0.0566,-0.201,0.82,-0.0405,-0.189,1.1,-0.0395,-0.183,1.01,-0.00831,-0.183,1.01,-0.0781,-0.182,1.09,-0.00563,-0.179,1.07,-0.00294,-0.177,1.09,-0.0609,-0.176,1.08,-0.0781,-0.167,1.09,-0.0325,-0.166,1.0,-0.0405,-0.16,1.06,-0.0373}, 75);
SoIndexedFaceSet309->setCoord(*SoCoordinate310);

SoShape306->setGeometry(*SoIndexedFaceSet309);

SoTransform305->addChild(*SoShape306);

SoField304->addChild(*SoTransform305);

SoProtoInstance302->addChild(*SoField304);

SoField301->addChild(*SoProtoInstance302);

SoProtoInstance* SoProtoInstance311 = new SoProtoInstance();
SoProtoInstance311->setDEF(QString("hanim_r_wrist"));
SoProtoInstance311->setName(QString("Joint"));
SoField* SoField312 = new SoField();
SoField312->setName(QString("name"));
SoField312->setValue(QString("r_wrist"));
SoProtoInstance311->addChild(*SoField312);

SoField* SoField313 = new SoField();
SoField313->setName(QString("center"));
SoField313->setValue(QString("-0.217 0.811 -0.0338"));
SoProtoInstance311->addChild(*SoField313);

SoField* SoField314 = new SoField();
SoField314->setName(QString("children"));
SoProtoInstance* SoProtoInstance315 = new SoProtoInstance();
SoProtoInstance315->setDEF(QString("hanim_r_hand"));
SoProtoInstance315->setName(QString("Segment"));
SoField* SoField316 = new SoField();
SoField316->setName(QString("name"));
SoField316->setValue(QString("r_hand"));
SoProtoInstance315->addChild(*SoField316);

SoField* SoField317 = new SoField();
SoField317->setName(QString("children"));
SoTransform* SoTransform318 = new SoTransform();
SoTransform318->setDEF(QString("r_hand_adjust"));
SoTransform318->setRotation(new float[]{-0.09024,0.994,-0.0624,1.216});
SoTransform318->setCenter(new float[]{-0.217,0.811,-0.0338});
SoShape* SoShape319 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance320 = new SoVRMLAppearance();
SoMaterial* SoMaterial321 = new SoMaterial();
SoMaterial321->setUSE(QString("Skin_Color"));
SoVRMLAppearance320->addChild(*SoMaterial321);

SoShape319->addChild(*SoVRMLAppearance320);

SoIndexedFaceSet* SoIndexedFaceSet322 = new SoIndexedFaceSet();
SoIndexedFaceSet322->setCreaseAngle(1.57);
SoIndexedFaceSet322->setCoordIndex(new int32_t[]{10,9,0,-1,11,30,31,-1,1,12,11,-1,1,11,0,-1,2,13,12,-1,2,12,1,-1,3,14,13,-1,3,13,2,-1,4,15,14,-1,4,14,3,-1,5,16,15,-1,5,15,4,-1,6,17,16,-1,6,16,5,-1,7,18,17,-1,7,17,6,-1,8,19,18,-1,8,18,7,-1,10,31,30,-1,10,30,9,-1,0,11,31,-1,0,31,10,-1,22,23,24,-1,21,22,24,-1,21,24,25,-1,21,25,26,-1,20,21,26,-1,20,26,27,-1,19,20,27,-1,19,27,28,-1,14,15,16,-1,14,16,17,-1,14,17,18,-1,13,14,18,-1,13,18,29,-1,12,13,29,-1,12,29,30,-1,11,12,30,-1,18,19,28,-1,18,28,29,-1,6,5,4,-1,6,4,3,-1,7,6,3,-1,7,3,2,-1,9,2,1,-1,9,1,0,-1,32,38,33,-1,33,38,39,-1,33,39,34,-1,34,39,40,-1,34,40,35,-1,35,40,41,-1,35,41,36,-1,36,41,42,-1,36,42,37,-1,37,42,43,-1,37,43,44,-1,44,43,8,-1,44,8,45,-1,45,8,46,-1,46,8,7,-1,46,7,2,-1,46,2,47,-1,9,47,2,-1,25,34,35,-1,25,33,34,-1,25,24,33,-1,24,32,33,-1,32,24,23,-1,40,39,21,-1,41,40,21,-1,43,19,8,-1,43,20,19,-1,43,42,20,-1,21,20,41,-1,20,42,41,-1,38,22,39,-1,22,21,39,-1,32,23,38,-1,23,22,38,-1,26,25,35,-1,27,36,37,-1,27,37,28,-1,37,44,28,-1,26,35,27,-1,35,36,27,-1,28,44,45,-1,29,46,47,-1,29,9,30,-1,29,47,9,-1,28,45,29,-1,45,46,29,-1}, 368);
SoCoordinate* SoCoordinate323 = new SoCoordinate();
SoCoordinate323->setPoint(new float[]{-0.237,0.82,-0.0425,-0.252,0.801,-0.0424,-0.269,0.765,-0.0426,-0.273,0.732,-0.0395,-0.27,0.704,-0.0342,-0.262,0.703,-0.0345,-0.256,0.717,-0.0389,-0.255,0.738,-0.0408,-0.251,0.734,-0.0406,-0.194,0.81,-0.0445,-0.211,0.828,-0.0434,-0.236,0.82,-0.0237,-0.252,0.801,-0.0231,-0.268,0.765,-0.0225,-0.272,0.732,-0.0223,-0.27,0.704,-0.0224,-0.261,0.703,-0.0227,-0.256,0.717,-0.023,-0.255,0.738,-0.023,-0.251,0.734,-0.0232,-0.251,0.692,-0.0232,-0.248,0.657,-0.0233,-0.24,0.645,-0.0236,-0.226,0.637,-0.0241,-0.213,0.639,-0.0246,-0.197,0.652,-0.0253,-0.188,0.669,-0.0256,-0.184,0.697,-0.0258,-0.183,0.73,-0.0258,-0.187,0.77,-0.0257,-0.194,0.81,-0.0254,-0.21,0.828,-0.0247,-0.221,0.641,-0.0336,-0.21,0.65,-0.0348,-0.206,0.652,-0.0352,-0.198,0.667,-0.0368,-0.193,0.692,-0.0392,-0.192,0.696,-0.0396,-0.231,0.646,-0.0336,-0.238,0.656,-0.0342,-0.24,0.658,-0.0344,-0.24,0.662,-0.0347,-0.243,0.692,-0.0372,-0.243,0.696,-0.0376,-0.192,0.725,-0.0421,-0.192,0.73,-0.0426,-0.195,0.766,-0.0451,-0.196,0.77,-0.0454}, 144);
SoIndexedFaceSet322->setCoord(*SoCoordinate323);

SoShape319->setGeometry(*SoIndexedFaceSet322);

SoTransform318->addChild(*SoShape319);

SoField317->addChild(*SoTransform318);

SoProtoInstance315->addChild(*SoField317);

SoField314->addChild(*SoProtoInstance315);

SoProtoInstance311->addChild(*SoField314);

SoField301->addChild(*SoProtoInstance311);

SoProtoInstance298->addChild(*SoField301);

SoField288->addChild(*SoProtoInstance298);

SoProtoInstance285->addChild(*SoField288);

SoField235->addChild(*SoProtoInstance285);

SoProtoInstance* SoProtoInstance324 = new SoProtoInstance();
SoProtoInstance324->setDEF(QString("hanim_vc4"));
SoProtoInstance324->setName(QString("Joint"));
SoField* SoField325 = new SoField();
SoField325->setName(QString("name"));
SoField325->setValue(QString("vc4"));
SoProtoInstance324->addChild(*SoField325);

SoField* SoField326 = new SoField();
SoField326->setName(QString("center"));
SoField326->setValue(QString("0 1.43 -0.0458"));
SoProtoInstance324->addChild(*SoField326);

SoField* SoField327 = new SoField();
SoField327->setName(QString("children"));
SoProtoInstance* SoProtoInstance328 = new SoProtoInstance();
SoProtoInstance328->setDEF(QString("hanim_c4"));
SoProtoInstance328->setName(QString("Segment"));
SoField* SoField329 = new SoField();
SoField329->setName(QString("name"));
SoField329->setValue(QString("c4"));
SoProtoInstance328->addChild(*SoField329);

SoField* SoField330 = new SoField();
SoField330->setName(QString("children"));
SoShape* SoShape331 = new SoShape();
SoShape331->setDEF(QString("_9"));
SoVRMLAppearance* SoVRMLAppearance332 = new SoVRMLAppearance();
SoMaterial* SoMaterial333 = new SoMaterial();
SoMaterial333->setUSE(QString("Skin_Color"));
SoVRMLAppearance332->addChild(*SoMaterial333);

SoShape331->addChild(*SoVRMLAppearance332);

SoIndexedFaceSet* SoIndexedFaceSet334 = new SoIndexedFaceSet();
SoIndexedFaceSet334->setDEF(QString("neck"));
SoIndexedFaceSet334->setCreaseAngle(1.91);
SoIndexedFaceSet334->setCoordIndex(new int32_t[]{6,5,2,-1,6,2,3,-1,5,4,1,-1,5,1,2,-1,4,7,0,-1,4,0,1,-1,11,10,9,-1,11,9,8,-1,10,13,12,-1,10,12,9,-1,13,15,14,-1,13,14,12,-1,6,3,11,-1,6,11,8,-1,7,14,15,-1,7,15,0,-1,2,10,11,-1,2,11,3,-1,2,1,13,-1,2,13,10,-1,1,0,15,-1,1,15,13,-1,9,5,6,-1,9,6,8,-1,9,12,4,-1,9,4,5,-1,12,14,7,-1,12,7,4,-1}, 112);
SoCoordinate* SoCoordinate335 = new SoCoordinate();
SoCoordinate335->setPoint(new float[]{0.0105,1.54,-0.1,0.0357,1.54,-0.0685,0.0382,1.55,-0.0474,0.0105,1.55,-0.0204,0.0373,1.4,-0.0593,0.0577,1.4,-0.0266,0.0158,1.4,0.00512,0.0132,1.41,-0.0824,-0.0158,1.4,0.00512,-0.0577,1.4,-0.0266,-0.0382,1.55,-0.0474,-0.0105,1.55,-0.0204,-0.0373,1.4,-0.0593,-0.0357,1.54,-0.0685,-0.0132,1.41,-0.0824,-0.0105,1.54,-0.1}, 48);
SoIndexedFaceSet334->setCoord(*SoCoordinate335);

SoShape331->setGeometry(*SoIndexedFaceSet334);

SoField330->addChild(*SoShape331);

SoProtoInstance328->addChild(*SoField330);

SoField327->addChild(*SoProtoInstance328);

SoProtoInstance* SoProtoInstance336 = new SoProtoInstance();
SoProtoInstance336->setDEF(QString("hanim_skullbase"));
SoProtoInstance336->setName(QString("Joint"));
SoField* SoField337 = new SoField();
SoField337->setName(QString("name"));
SoField337->setValue(QString("skullbase"));
SoProtoInstance336->addChild(*SoField337);

SoField* SoField338 = new SoField();
SoField338->setName(QString("center"));
SoField338->setValue(QString("0 1.54 -0.0409"));
SoProtoInstance336->addChild(*SoField338);

SoField* SoField339 = new SoField();
SoField339->setName(QString("children"));
SoProtoInstance* SoProtoInstance340 = new SoProtoInstance();
SoProtoInstance340->setDEF(QString("hanim_skull"));
SoProtoInstance340->setName(QString("Segment"));
SoField* SoField341 = new SoField();
SoField341->setName(QString("name"));
SoField341->setValue(QString("skull"));
SoProtoInstance340->addChild(*SoField341);

SoField* SoField342 = new SoField();
SoField342->setName(QString("children"));
SoShape* SoShape343 = new SoShape();
SoShape343->setDEF(QString("_10"));
SoVRMLAppearance* SoVRMLAppearance344 = new SoVRMLAppearance();
SoMaterial* SoMaterial345 = new SoMaterial();
SoMaterial345->setUSE(QString("Skin_Color"));
SoVRMLAppearance344->addChild(*SoMaterial345);

SoShape343->addChild(*SoVRMLAppearance344);

SoIndexedFaceSet* SoIndexedFaceSet346 = new SoIndexedFaceSet();
SoIndexedFaceSet346->setDEF(QString("headIFS"));
SoIndexedFaceSet346->setCreaseAngle(0.7854);
SoIndexedFaceSet346->setColorIndex(new int[]{1,1,1,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,1,1,1,-1,1,1,1,-1,0,0,0,-1,1,1,1,-1,1,1,1,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,1,1,1,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,1,1,1,-1,1,1,1,-1,1,1,1,-1,1,1,1,-1,1,1,1,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,3,3,3,-1,3,3,3,-1,0,0,0,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,3,3,3,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,3,3,3,-1,3,3,3,-1,0,0,0,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,3,3,3,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1}, 1640);
SoIndexedFaceSet346->setCoordIndex(new int32_t[]{48,87,58,-1,91,92,59,-1,59,92,88,-1,88,93,231,-1,232,86,233,-1,86,89,233,-1,89,57,56,-1,49,55,57,-1,102,86,96,-1,86,90,96,-1,97,95,96,-1,97,127,95,-1,41,96,154,-1,41,102,96,-1,99,102,41,-1,153,99,41,-1,102,40,86,-1,234,235,236,-1,87,237,58,-1,56,57,91,-1,87,234,237,-1,234,236,237,-1,89,49,57,-1,49,50,55,-1,40,89,86,-1,89,56,233,-1,232,90,86,-1,90,97,96,-1,92,93,88,-1,93,94,231,-1,232,231,94,-1,97,90,232,-1,96,42,154,-1,95,42,96,-1,53,46,45,-1,53,45,51,-1,53,51,92,-1,92,51,52,-1,92,52,93,-1,94,93,52,-1,94,52,4,-1,97,232,94,-1,54,47,46,-1,54,46,53,-1,55,47,54,-1,50,47,55,-1,34,33,50,-1,34,50,49,-1,35,34,49,-1,35,49,89,-1,35,89,40,-1,99,39,102,-1,39,35,40,-1,31,34,35,-1,31,35,32,-1,14,32,35,-1,14,35,39,-1,14,39,98,-1,137,38,153,-1,38,99,153,-1,38,98,99,-1,37,238,239,-1,11,238,37,-1,101,37,36,-1,241,141,242,-1,10,12,242,-1,12,13,14,-1,12,14,243,-1,13,15,32,-1,13,32,14,-1,15,16,31,-1,15,31,32,-1,2,70,10,-1,2,10,141,-1,70,69,12,-1,70,12,10,-1,69,68,13,-1,69,13,12,-1,68,67,15,-1,68,15,13,-1,67,66,16,-1,67,16,15,-1,98,39,99,-1,101,11,37,-1,100,101,36,-1,36,244,240,-1,141,10,242,-1,12,243,242,-1,36,37,239,-1,36,239,244,-1,57,55,91,-1,55,54,91,-1,39,40,102,-1,123,103,120,-1,114,122,104,-1,115,122,114,-1,208,105,115,-1,210,119,211,-1,210,106,119,-1,116,107,106,-1,107,108,117,-1,126,119,109,-1,126,110,119,-1,126,95,125,-1,95,127,125,-1,154,126,111,-1,126,109,111,-1,111,109,112,-1,111,112,153,-1,119,113,109,-1,207,213,214,-1,123,209,103,-1,213,212,214,-1,209,214,103,-1,209,207,214,-1,107,117,106,-1,108,118,117,-1,119,106,113,-1,210,116,106,-1,119,110,211,-1,126,125,110,-1,115,105,122,-1,208,124,105,-1,124,208,211,-1,211,110,125,-1,154,42,126,-1,126,42,95,-1,168,128,121,-1,170,168,121,-1,122,170,121,-1,172,170,122,-1,105,172,122,-1,172,105,124,-1,4,172,124,-1,124,211,125,-1,128,130,129,-1,121,128,129,-1,129,130,108,-1,108,130,118,-1,118,131,132,-1,117,118,132,-1,117,132,133,-1,106,117,133,-1,113,106,133,-1,109,152,112,-1,113,133,152,-1,133,132,134,-1,135,133,134,-1,133,135,136,-1,152,133,136,-1,148,152,136,-1,153,138,137,-1,153,112,138,-1,112,148,138,-1,219,217,139,-1,36,240,149,-1,139,217,140,-1,149,139,151,-1,36,149,100,-1,220,141,241,-1,220,150,142,-1,136,143,150,-1,221,136,150,-1,135,144,143,-1,136,135,143,-1,134,158,144,-1,135,134,144,-1,142,161,2,-1,141,142,2,-1,150,145,161,-1,142,150,161,-1,143,146,145,-1,150,143,145,-1,144,147,146,-1,143,144,146,-1,158,160,147,-1,144,158,147,-1,112,152,148,-1,139,140,151,-1,149,151,100,-1,240,218,149,-1,220,142,141,-1,220,221,150,-1,219,139,149,-1,218,219,149,-1,104,108,107,-1,104,129,108,-1,109,113,152,-1,153,41,111,-1,129,104,122,-1,129,122,121,-1,91,54,92,-1,54,53,92,-1,97,94,127,-1,127,94,4,-1,125,127,124,-1,127,4,124,-1,154,111,41,-1,31,30,33,-1,31,33,34,-1,16,17,30,-1,16,30,31,-1,66,65,17,-1,66,17,16,-1,2,73,156,-1,2,156,70,-1,156,72,66,-1,156,66,67,-1,156,67,68,-1,156,68,69,-1,156,69,70,-1,72,71,65,-1,72,65,66,-1,17,18,30,-1,45,44,51,-1,51,44,43,-1,51,43,52,-1,52,43,1,-1,52,1,4,-1,245,246,27,-1,245,27,3,-1,246,247,28,-1,246,28,27,-1,248,22,29,-1,248,29,28,-1,248,28,247,-1,27,26,0,-1,27,0,3,-1,27,28,25,-1,27,25,26,-1,29,24,25,-1,29,25,28,-1,22,23,24,-1,22,24,29,-1,249,250,22,-1,249,22,248,-1,250,60,23,-1,250,23,22,-1,17,254,18,-1,65,254,17,-1,71,64,65,-1,63,74,75,-1,63,75,61,-1,64,255,254,-1,75,62,61,-1,62,76,60,-1,76,77,23,-1,76,23,60,-1,77,24,23,-1,77,78,25,-1,77,25,24,-1,78,84,26,-1,78,26,25,-1,84,192,0,-1,84,0,26,-1,84,83,193,-1,84,193,192,-1,79,83,84,-1,79,84,78,-1,76,79,78,-1,76,78,77,-1,80,83,79,-1,80,204,83,-1,75,81,80,-1,81,85,204,-1,81,204,80,-1,74,81,75,-1,74,82,81,-1,82,5,85,-1,82,85,81,-1,155,8,71,-1,155,71,72,-1,8,6,64,-1,8,64,71,-1,6,7,255,-1,6,255,64,-1,7,9,256,-1,7,256,255,-1,9,257,256,-1,73,155,156,-1,155,72,156,-1,204,193,83,-1,64,254,65,-1,131,157,134,-1,132,131,134,-1,157,159,158,-1,134,157,158,-1,159,206,160,-1,158,159,160,-1,203,73,2,-1,161,203,2,-1,160,162,203,-1,147,160,203,-1,146,147,203,-1,145,146,203,-1,161,145,203,-1,206,163,162,-1,160,206,162,-1,157,164,159,-1,170,169,168,-1,171,169,170,-1,172,171,170,-1,1,171,172,-1,4,1,172,-1,173,227,245,-1,3,173,245,-1,174,226,227,-1,173,174,227,-1,176,175,215,-1,174,176,215,-1,226,174,215,-1,0,177,173,-1,3,0,173,-1,178,174,173,-1,177,178,173,-1,178,179,176,-1,174,178,176,-1,179,180,175,-1,176,179,175,-1,175,225,216,-1,215,175,216,-1,180,181,225,-1,175,180,225,-1,164,228,159,-1,159,228,206,-1,206,185,163,-1,187,186,184,-1,183,187,184,-1,228,229,185,-1,183,182,187,-1,181,188,182,-1,180,189,188,-1,181,180,188,-1,180,179,189,-1,178,190,189,-1,179,178,189,-1,177,191,190,-1,178,177,190,-1,0,192,191,-1,177,0,191,-1,193,205,191,-1,192,193,191,-1,191,205,194,-1,190,191,194,-1,190,194,188,-1,189,190,188,-1,194,205,195,-1,205,204,195,-1,195,196,187,-1,204,85,196,-1,195,204,196,-1,187,196,186,-1,196,197,186,-1,85,5,197,-1,196,85,197,-1,163,198,202,-1,162,163,202,-1,185,199,198,-1,163,185,198,-1,229,200,199,-1,185,229,199,-1,230,201,200,-1,229,230,200,-1,230,257,201,-1,203,202,73,-1,203,162,202,-1,205,193,204,-1,206,228,185,-1,198,8,155,-1,198,155,202,-1,155,73,202,-1,199,6,8,-1,199,8,198,-1,7,6,199,-1,7,199,200,-1,201,9,7,-1,201,7,200,-1,201,257,9,-1,188,194,195,-1,188,195,182,-1,195,187,182,-1,80,79,76,-1,80,62,75,-1,80,76,62,-1,47,50,33,-1,131,118,130,-1,20,21,47,-1,21,46,47,-1,20,33,19,-1,20,47,33,-1,33,30,19,-1,30,18,19,-1,62,60,251,-1,60,250,251,-1,252,61,251,-1,61,62,251,-1,252,63,61,-1,252,253,63,-1,166,130,167,-1,130,128,167,-1,166,131,130,-1,166,165,131,-1,165,157,131,-1,165,164,157,-1,224,181,182,-1,224,225,181,-1,224,183,223,-1,224,182,183,-1,183,184,223,-1,184,222,223,-1}, 1640);
SoColor* SoColor347 = new SoColor();
SoColor347->setColor(new float[]{0.749,0.601,0.462,0.1735,0.2602,0.749,0.6364,0.133,0.1526,0.4545,0.2759,0.1902}, 12);
SoIndexedFaceSet346->setColor(*SoColor347);

SoCoordinate* SoCoordinate348 = new SoCoordinate();
SoCoordinate348->setDEF(QString("Face"));
SoCoordinate348->setPoint(new float[]{0.0,1.708,-0.0435,0.0,1.655,0.04322,0.0,1.486,0.02335,0.0,1.694,0.007789,0.0,1.631,0.051,0.0,1.524,-0.102,0.04,1.51,-0.07278,0.04029,1.514,-0.08254,0.03528,1.502,-0.05013,0.03479,1.517,-0.09269,0.0116,1.494,0.03382,0.01946,1.52,0.03421,0.02204,1.494,0.0272,0.02734,1.498,0.02215,0.02788,1.528,0.03084,0.0338,1.503,0.0124,0.04008,1.509,0.002821,0.05122,1.518,-0.02784,0.05867,1.544,-0.03316,0.06433,1.563,-0.03678,0.06732,1.583,-0.03683,0.06769,1.617,-0.03436,0.06641,1.637,-0.03046,0.06818,1.637,-0.04285,0.06308,1.666,-0.04036,0.05305,1.685,-0.03987,0.03136,1.7,-0.0413,0.02919,1.688,0.0091,0.05272,1.674,-0.001657,0.06061,1.66,-0.0101,0.05254,1.541,-0.01363,0.04099,1.527,0.008832,0.03528,1.524,0.02097,0.05792,1.557,-0.004307,0.04413,1.539,0.0149,0.03746,1.539,0.02656,0.003407,1.524,0.04155,0.01481,1.526,0.03912,0.005112,1.532,0.04358,0.02438,1.542,0.03578,0.02636,1.55,0.03808,0.006135,1.55,0.0545,0.0,1.559,0.05502,0.02958,1.651,0.03965,0.04847,1.643,0.02895,0.05856,1.63,0.01803,0.06182,1.614,0.008199,0.06194,1.6,0.002668,0.01489,1.583,0.04109,0.05282,1.569,0.02821,0.05767,1.58,0.0184,0.04643,1.625,0.03705,0.0264,1.628,0.04807,0.0556,1.609,0.02579,0.05467,1.599,0.02153,0.05316,1.589,0.0207,0.03603,1.58,0.03536,0.04597,1.586,0.02904,0.02106,1.592,0.03748,0.03428,1.595,0.03294,0.06808,1.617,-0.06112,0.06714,1.564,-0.07003,0.06993,1.594,-0.08238,0.05324,1.536,-0.05922,0.04904,1.521,-0.05132,0.04758,1.514,-0.03107,0.03539,1.503,-0.00093,0.02999,1.498,0.006194,0.02308,1.492,0.01628,0.01772,1.488,0.02135,0.01378,1.488,0.02484,0.04349,1.512,-0.03987,0.02308,1.499,-0.02088,0.0,1.487,-0.018,0.04795,1.531,-0.08973,0.05739,1.555,-0.0982,0.06815,1.622,-0.107,0.06872,1.655,-0.08466,0.05233,1.678,-0.09642,0.05334,1.631,-0.1239,0.05011,1.581,-0.1193,0.04359,1.551,-0.1067,0.03839,1.528,-0.09652,0.03399,1.636,-0.1304,0.03224,1.685,-0.1024,0.0,1.557,-0.1126,0.01864,1.566,0.04105,0.0249,1.58,0.0387,0.02735,1.596,0.03552,0.04317,1.564,0.03643,0.01246,1.577,0.04276,0.04354,1.59,0.02822,0.04557,1.601,0.03652,0.0291,1.603,0.04274,0.01856,1.6,0.04349,0.0,1.579,0.04893,0.01064,1.558,0.04476,0.005501,1.578,0.04574,0.01405,1.531,0.04152,0.01037,1.544,0.04266,0.0,1.515,0.03836,0.00797,1.515,0.03774,0.01824,1.55,0.04063,-0.0249,1.58,0.0387,-0.04354,1.59,0.02822,-0.0291,1.603,0.04274,-0.04317,1.564,0.03643,-0.04597,1.586,0.02904,-0.05316,1.589,0.0207,-0.01824,1.55,0.04063,-0.01246,1.577,0.04276,-0.006135,1.55,0.0545,-0.01037,1.544,0.04266,-0.02636,1.55,0.03808,-0.03428,1.595,0.03294,-0.02735,1.596,0.03552,-0.03603,1.58,0.03536,-0.05282,1.569,0.02821,-0.05767,1.58,0.0184,-0.01864,1.566,0.04105,-0.01489,1.583,0.04109,-0.0556,1.609,0.02579,-0.04557,1.601,0.03652,-0.02106,1.592,0.03748,-0.01856,1.6,0.04349,-0.005501,1.578,0.04574,-0.01064,1.558,0.04476,0.0,1.592,0.04694,-0.06182,1.614,0.008199,-0.05467,1.599,0.02153,-0.06194,1.6,0.002668,-0.05792,1.557,-0.004307,-0.04413,1.539,0.0149,-0.03746,1.539,0.02656,-0.04099,1.527,0.008832,-0.03528,1.524,0.02097,-0.02788,1.528,0.03084,0.0,1.53,0.04236,-0.005112,1.532,0.04358,-0.01481,1.526,0.03912,-0.01946,1.52,0.03421,0.0,1.495,0.0348,-0.0116,1.494,0.03382,-0.02734,1.498,0.02215,-0.0338,1.503,0.0124,-0.01772,1.488,0.02135,-0.02308,1.492,0.01628,-0.02999,1.498,0.006194,-0.01405,1.531,0.04152,-0.003407,1.524,0.04155,-0.02204,1.494,0.0272,-0.00797,1.515,0.03774,-0.02438,1.542,0.03578,0.0,1.543,0.04432,0.0,1.555,0.05692,0.02295,1.492,-0.02694,0.007322,1.489,-0.01677,-0.05254,1.541,-0.01363,-0.04008,1.509,0.002821,-0.05122,1.518,-0.02784,-0.03539,1.503,-0.00093,-0.01378,1.488,0.02484,-0.02308,1.499,-0.02088,-0.04349,1.512,-0.03987,-0.05867,1.544,-0.03316,-0.06433,1.563,-0.03678,-0.06732,1.583,-0.03683,-0.06769,1.617,-0.03436,-0.05856,1.63,0.01803,-0.04847,1.643,0.02895,-0.04643,1.625,0.03705,-0.02958,1.651,0.03965,-0.0264,1.628,0.04807,-0.02919,1.688,0.0091,-0.05272,1.674,-0.001657,-0.06641,1.637,-0.03046,-0.06061,1.66,-0.0101,-0.03136,1.7,-0.0413,-0.05305,1.685,-0.03987,-0.06308,1.666,-0.04036,-0.06818,1.637,-0.04285,-0.06808,1.617,-0.06112,-0.06993,1.594,-0.08238,-0.06714,1.564,-0.07003,-0.05324,1.536,-0.05922,-0.04904,1.521,-0.05132,-0.04795,1.531,-0.08973,-0.05739,1.555,-0.0982,-0.06815,1.622,-0.107,-0.06872,1.655,-0.08466,-0.05233,1.678,-0.09642,-0.03224,1.685,-0.1024,0.0,1.69,-0.1047,0.0,1.64,-0.1342,-0.05334,1.631,-0.1239,-0.05011,1.581,-0.1193,-0.04359,1.551,-0.1067,-0.03839,1.528,-0.09652,-0.03528,1.502,-0.05013,-0.04,1.51,-0.07278,-0.04029,1.514,-0.08254,-0.03479,1.517,-0.09269,-0.02295,1.492,-0.02694,-0.007322,1.489,-0.01677,0.0,1.588,-0.1329,-0.03399,1.636,-0.1304,-0.04758,1.514,-0.03107,-0.03428,1.595,0.03294,-0.02106,1.592,0.03748,-0.02735,1.596,0.03552,-0.0249,1.58,0.0387,-0.01489,1.583,0.04109,-0.04597,1.586,0.02904,-0.04354,1.59,0.02822,-0.03603,1.58,0.03536,-0.05856,1.63,0.01803,-0.06182,1.614,0.008199,-0.02788,1.528,0.03084,-0.005112,1.532,0.04358,-0.01405,1.531,0.04152,-0.00797,1.515,0.03774,-0.01946,1.52,0.03421,-0.05867,1.544,-0.03316,-0.06433,1.563,-0.03678,-0.06732,1.583,-0.03683,-0.06769,1.617,-0.03436,-0.04847,1.643,0.02895,-0.02958,1.651,0.03965,-0.05324,1.536,-0.05922,-0.04795,1.531,-0.08973,-0.03839,1.528,-0.09652,0.02106,1.592,0.03748,0.01489,1.583,0.04109,0.0249,1.58,0.0387,0.03603,1.58,0.03536,0.04354,1.59,0.02822,0.03428,1.595,0.03294,0.02735,1.596,0.03552,0.02788,1.528,0.03084,0.01405,1.531,0.04152,0.0,1.53,0.04236,0.0,1.515,0.03836,0.00797,1.515,0.03774,0.01946,1.52,0.03421,0.005112,1.532,0.04358,0.0,1.655,0.04322,0.02958,1.651,0.03965,0.04847,1.643,0.02895,0.05856,1.63,0.01803,0.06182,1.614,0.008199,0.06769,1.617,-0.03436,0.06732,1.583,-0.03683,0.06433,1.563,-0.03678,0.05867,1.544,-0.03316,0.05324,1.536,-0.05922,0.04795,1.531,-0.08973,0.03839,1.528,-0.09652,0.0,1.524,-0.102}, 774);
SoIndexedFaceSet346->setCoord(*SoCoordinate348);

SoShape343->setGeometry(*SoIndexedFaceSet346);

SoField342->addChild(*SoShape343);

SoProtoInstance340->addChild(*SoField342);

SoField339->addChild(*SoProtoInstance340);

SoProtoInstance336->addChild(*SoField339);

SoField327->addChild(*SoProtoInstance336);

SoProtoInstance324->addChild(*SoField327);

SoField235->addChild(*SoProtoInstance324);

SoProtoInstance232->addChild(*SoField235);

SoField147->addChild(*SoProtoInstance232);

SoProtoInstance144->addChild(*SoField147);

SoField143->addChild(*SoProtoInstance144);

SoGroup* SoGroup349 = new SoGroup();
SoGroup349->setDEF(QString("_11"));
SoField143->addChild(*SoGroup349);

SoProtoInstance140->addChild(*SoField143);

SoField* SoField350 = new SoField();
SoField350->setName(QString("joints"));
SoProtoInstance* SoProtoInstance351 = new SoProtoInstance();
SoProtoInstance351->setName(QString("Joint"));
SoProtoInstance351->setUSE(QString("hanim_humanoid_root"));
SoField350->addChild(*SoProtoInstance351);

SoProtoInstance* SoProtoInstance352 = new SoProtoInstance();
SoProtoInstance352->setName(QString("Joint"));
SoProtoInstance352->setUSE(QString("hanim_sacroiliac"));
SoField350->addChild(*SoProtoInstance352);

SoProtoInstance* SoProtoInstance353 = new SoProtoInstance();
SoProtoInstance353->setName(QString("Joint"));
SoProtoInstance353->setUSE(QString("hanim_l_hip"));
SoField350->addChild(*SoProtoInstance353);

SoProtoInstance* SoProtoInstance354 = new SoProtoInstance();
SoProtoInstance354->setName(QString("Joint"));
SoProtoInstance354->setUSE(QString("hanim_l_knee"));
SoField350->addChild(*SoProtoInstance354);

SoProtoInstance* SoProtoInstance355 = new SoProtoInstance();
SoProtoInstance355->setName(QString("Joint"));
SoProtoInstance355->setUSE(QString("hanim_l_ankle"));
SoField350->addChild(*SoProtoInstance355);

SoProtoInstance* SoProtoInstance356 = new SoProtoInstance();
SoProtoInstance356->setName(QString("Joint"));
SoProtoInstance356->setUSE(QString("hanim_r_hip"));
SoField350->addChild(*SoProtoInstance356);

SoProtoInstance* SoProtoInstance357 = new SoProtoInstance();
SoProtoInstance357->setName(QString("Joint"));
SoProtoInstance357->setUSE(QString("hanim_r_knee"));
SoField350->addChild(*SoProtoInstance357);

SoProtoInstance* SoProtoInstance358 = new SoProtoInstance();
SoProtoInstance358->setName(QString("Joint"));
SoProtoInstance358->setUSE(QString("hanim_r_ankle"));
SoField350->addChild(*SoProtoInstance358);

SoProtoInstance* SoProtoInstance359 = new SoProtoInstance();
SoProtoInstance359->setName(QString("Joint"));
SoProtoInstance359->setUSE(QString("hanim_vl1"));
SoField350->addChild(*SoProtoInstance359);

SoProtoInstance* SoProtoInstance360 = new SoProtoInstance();
SoProtoInstance360->setName(QString("Joint"));
SoProtoInstance360->setUSE(QString("hanim_l_shoulder"));
SoField350->addChild(*SoProtoInstance360);

SoProtoInstance* SoProtoInstance361 = new SoProtoInstance();
SoProtoInstance361->setName(QString("Joint"));
SoProtoInstance361->setUSE(QString("hanim_l_elbow"));
SoField350->addChild(*SoProtoInstance361);

SoProtoInstance* SoProtoInstance362 = new SoProtoInstance();
SoProtoInstance362->setName(QString("Joint"));
SoProtoInstance362->setUSE(QString("hanim_l_wrist"));
SoField350->addChild(*SoProtoInstance362);

SoProtoInstance* SoProtoInstance363 = new SoProtoInstance();
SoProtoInstance363->setName(QString("Joint"));
SoProtoInstance363->setUSE(QString("hanim_r_shoulder"));
SoField350->addChild(*SoProtoInstance363);

SoProtoInstance* SoProtoInstance364 = new SoProtoInstance();
SoProtoInstance364->setName(QString("Joint"));
SoProtoInstance364->setUSE(QString("hanim_r_elbow"));
SoField350->addChild(*SoProtoInstance364);

SoProtoInstance* SoProtoInstance365 = new SoProtoInstance();
SoProtoInstance365->setName(QString("Joint"));
SoProtoInstance365->setUSE(QString("hanim_r_wrist"));
SoField350->addChild(*SoProtoInstance365);

SoProtoInstance* SoProtoInstance366 = new SoProtoInstance();
SoProtoInstance366->setName(QString("Joint"));
SoProtoInstance366->setUSE(QString("hanim_vc4"));
SoField350->addChild(*SoProtoInstance366);

SoProtoInstance* SoProtoInstance367 = new SoProtoInstance();
SoProtoInstance367->setName(QString("Joint"));
SoProtoInstance367->setUSE(QString("hanim_skullbase"));
SoField350->addChild(*SoProtoInstance367);

SoProtoInstance140->addChild(*SoField350);

SoField* SoField368 = new SoField();
SoField368->setName(QString("segments"));
SoProtoInstance* SoProtoInstance369 = new SoProtoInstance();
SoProtoInstance369->setName(QString("Segment"));
SoProtoInstance369->setUSE(QString("hanim_pelvis"));
SoField368->addChild(*SoProtoInstance369);

SoProtoInstance* SoProtoInstance370 = new SoProtoInstance();
SoProtoInstance370->setName(QString("Segment"));
SoProtoInstance370->setUSE(QString("hanim_l_thigh"));
SoField368->addChild(*SoProtoInstance370);

SoProtoInstance* SoProtoInstance371 = new SoProtoInstance();
SoProtoInstance371->setName(QString("Segment"));
SoProtoInstance371->setUSE(QString("hanim_l_calf"));
SoField368->addChild(*SoProtoInstance371);

SoProtoInstance* SoProtoInstance372 = new SoProtoInstance();
SoProtoInstance372->setName(QString("Segment"));
SoProtoInstance372->setUSE(QString("hanim_l_hindfoot"));
SoField368->addChild(*SoProtoInstance372);

SoProtoInstance* SoProtoInstance373 = new SoProtoInstance();
SoProtoInstance373->setName(QString("Segment"));
SoProtoInstance373->setUSE(QString("hanim_r_thigh"));
SoField368->addChild(*SoProtoInstance373);

SoProtoInstance* SoProtoInstance374 = new SoProtoInstance();
SoProtoInstance374->setName(QString("Segment"));
SoProtoInstance374->setUSE(QString("hanim_r_calf"));
SoField368->addChild(*SoProtoInstance374);

SoProtoInstance* SoProtoInstance375 = new SoProtoInstance();
SoProtoInstance375->setName(QString("Segment"));
SoProtoInstance375->setUSE(QString("hanim_r_hindfoot"));
SoField368->addChild(*SoProtoInstance375);

SoProtoInstance* SoProtoInstance376 = new SoProtoInstance();
SoProtoInstance376->setName(QString("Segment"));
SoProtoInstance376->setUSE(QString("hanim_c7"));
SoField368->addChild(*SoProtoInstance376);

SoProtoInstance* SoProtoInstance377 = new SoProtoInstance();
SoProtoInstance377->setName(QString("Segment"));
SoProtoInstance377->setUSE(QString("hanim_l_upperarm"));
SoField368->addChild(*SoProtoInstance377);

SoProtoInstance* SoProtoInstance378 = new SoProtoInstance();
SoProtoInstance378->setName(QString("Segment"));
SoProtoInstance378->setUSE(QString("hanim_l_forearm"));
SoField368->addChild(*SoProtoInstance378);

SoProtoInstance* SoProtoInstance379 = new SoProtoInstance();
SoProtoInstance379->setName(QString("Segment"));
SoProtoInstance379->setUSE(QString("hanim_l_hand"));
SoField368->addChild(*SoProtoInstance379);

SoProtoInstance* SoProtoInstance380 = new SoProtoInstance();
SoProtoInstance380->setName(QString("Segment"));
SoProtoInstance380->setUSE(QString("hanim_r_upperarm"));
SoField368->addChild(*SoProtoInstance380);

SoProtoInstance* SoProtoInstance381 = new SoProtoInstance();
SoProtoInstance381->setName(QString("Segment"));
SoProtoInstance381->setUSE(QString("hanim_r_forearm"));
SoField368->addChild(*SoProtoInstance381);

SoProtoInstance* SoProtoInstance382 = new SoProtoInstance();
SoProtoInstance382->setName(QString("Segment"));
SoProtoInstance382->setUSE(QString("hanim_r_hand"));
SoField368->addChild(*SoProtoInstance382);

SoProtoInstance* SoProtoInstance383 = new SoProtoInstance();
SoProtoInstance383->setName(QString("Segment"));
SoProtoInstance383->setUSE(QString("hanim_c4"));
SoField368->addChild(*SoProtoInstance383);

SoProtoInstance* SoProtoInstance384 = new SoProtoInstance();
SoProtoInstance384->setName(QString("Segment"));
SoProtoInstance384->setUSE(QString("hanim_skull"));
SoField368->addChild(*SoProtoInstance384);

SoProtoInstance140->addChild(*SoField368);

SoField* SoField385 = new SoField();
SoField385->setName(QString("viewpoints"));
SoViewpoint* SoViewpoint386 = new SoViewpoint();
SoViewpoint386->setDEF(QString("InclinedView"));
SoViewpoint386->setDescription(QString("Inclined View"));
SoViewpoint386->setPosition(new float[]{1.62,1.05,2.06});
SoViewpoint386->setOrientation(new float[]{-0.113,0.993,0.0347,0.671});
SoField385->addChild(*SoViewpoint386);

SoViewpoint* SoViewpoint387 = new SoViewpoint();
SoViewpoint387->setDEF(QString("FrontView"));
SoViewpoint387->setDescription(QString("Front View"));
SoViewpoint387->setPosition(new float[]{0.0,0.854,2.57665});
SoField385->addChild(*SoViewpoint387);

SoViewpoint* SoViewpoint388 = new SoViewpoint();
SoViewpoint388->setDEF(QString("SideView"));
SoViewpoint388->setDescription(QString("Side View"));
SoViewpoint388->setPosition(new float[]{2.5929,0.854,0.0});
SoViewpoint388->setOrientation(new float[]{0.0,1.0,0.0,1.57079});
SoField385->addChild(*SoViewpoint388);

SoViewpoint* SoViewpoint389 = new SoViewpoint();
SoViewpoint389->setDEF(QString("TopView"));
SoViewpoint389->setDescription(QString("Top View"));
SoViewpoint389->setPosition(new float[]{0.0,3.4495,0.0});
SoViewpoint389->setOrientation(new float[]{1.0,0.0,0.0,-1.57079});
SoField385->addChild(*SoViewpoint389);

SoProtoInstance140->addChild(*SoField385);

SoNode13->addChild(*SoProtoInstance140);

SoWorldInfo* SoWorldInfo390 = new SoWorldInfo();
SoWorldInfo390->setTitle(QString("Nancy - an HAnim compliant avatar by 3Name3D"));
SoWorldInfo390->setInfo(new QString[]{QString("Copyright (c) 1997. 3Name3D / Yglesias Wallock Divekar, Inc.")}, 1);
SoNode13->addChild(*SoWorldInfo390);

SoNavigationInfo* SoNavigationInfo391 = new SoNavigationInfo();
SoNavigationInfo391->setType(new QString[]{QString("EXAMINE")}, 1);
SoNavigationInfo391->setAvatarSize(new float[]{0.15,1.53,0.75}, 3);
SoNavigationInfo391->setSpeed(0.5);
SoNode13->addChild(*SoNavigationInfo391);

SoGroup* SoGroup392 = new SoGroup();
SoGroup392->setDEF(QString("Interface"));
SoTransform* SoTransform393 = new SoTransform();
SoProximitySensor* SoProximitySensor394 = new SoProximitySensor();
SoProximitySensor394->setDEF(QString("HudProx"));
SoProximitySensor394->setSize(new float[]{500.0,100.0,500.0});
SoProximitySensor394->setCenter(new float[]{0.0,20.0,0.0});
SoTransform393->addChild(*SoProximitySensor394);

SoGroup392->addChild(*SoTransform393);

SoCollision* SoCollision395 = new SoCollision();
SoCollision395->setDEF(QString("HUD"));
SoCollision395->setEnabled(false);
SoTransform* SoTransform396 = new SoTransform();
SoTransform396->setDEF(QString("HudXform"));
SoTransform* SoTransform397 = new SoTransform();
SoTransform397->setTranslation(new float[]{0.01107,-0.025,-0.08});
SoTransform397->setScale(new float[]{0.012,0.012,0.012});
SoTransform* SoTransform398 = new SoTransform();
SoTransform398->setDEF(QString("Stand_Text"));
SoTouchSensor* SoTouchSensor399 = new SoTouchSensor();
SoTouchSensor399->setDEF(QString("Stand_Touch"));
SoTouchSensor399->setDescription(QString("click for behavior"));
SoTransform398->addChild(*SoTouchSensor399);

SoShape* SoShape400 = new SoShape();
SoShape400->setDEF(QString("Stand"));
SoVRMLAppearance* SoVRMLAppearance401 = new SoVRMLAppearance();
SoMaterial* SoMaterial402 = new SoMaterial();
SoMaterial402->setDEF(QString("text_color"));
SoMaterial402->setAmbientIntensity(0);
SoMaterial402->setDiffuseColor(new float[]{0.0,0.0,0.0});
SoMaterial402->setEmissiveColor(new float[]{0.819,0.521,0.169});
SoVRMLAppearance401->addChild(*SoMaterial402);

SoShape400->addChild(*SoVRMLAppearance401);

SoIndexedFaceSet* SoIndexedFaceSet403 = new SoIndexedFaceSet();
SoIndexedFaceSet403->setCoordIndex(new int32_t[]{1,30,29,-1,1,29,2,-1,31,47,46,-1,31,46,32,-1,78,77,80,-1,78,80,79,-1,96,113,112,-1,96,112,95,-1,95,112,111,-1,95,111,94,-1,94,111,110,-1,94,110,93,-1,93,110,109,-1,93,109,108,-1,93,108,100,-1,107,99,100,-1,107,100,108,-1,107,106,99,-1,106,105,98,-1,106,98,99,-1,104,97,98,-1,104,98,105,-1,103,102,104,-1,104,102,101,-1,104,101,97,-1,101,96,97,-1,101,97,101,-1,101,101,96,-1,96,101,113,-1,113,101,114,-1,115,86,85,-1,115,85,116,-1,117,87,84,-1,117,84,118,-1,119,83,120,-1,121,88,82,-1,121,82,122,-1,123,89,81,-1,123,81,124,-1,125,90,126,-1,127,92,128,-1,129,91,130,-1,54,49,50,-1,54,50,55,-1,76,75,74,-1,76,74,54,-1,54,74,73,-1,54,73,49,-1,49,73,48,-1,48,73,62,-1,48,62,61,-1,48,61,60,-1,48,60,53,-1,53,60,59,-1,53,59,53,-1,53,59,58,-1,53,58,52,-1,52,58,57,-1,52,57,51,-1,56,51,57,-1,56,55,50,-1,56,50,51,-1,62,73,72,-1,62,72,63,-1,63,72,71,-1,63,71,64,-1,64,71,70,-1,64,70,69,-1,64,69,65,-1,65,69,68,-1,65,68,67,-1,65,67,66,-1,131,40,39,-1,131,39,132,-1,133,43,42,-1,133,42,134,-1,135,37,36,-1,135,36,136,-1,137,41,38,-1,137,38,138,-1,139,44,35,-1,139,35,140,-1,141,34,142,-1,143,45,33,-1,143,33,144,-1,145,16,15,-1,145,15,146,-1,147,14,148,-1,149,17,13,-1,149,13,150,-1,151,18,12,-1,151,12,152,-1,153,19,11,-1,153,11,154,-1,155,20,10,-1,155,10,156,-1,157,9,158,-1,159,21,8,-1,159,8,160,-1,161,22,7,-1,161,7,162,-1,163,23,164,-1,165,24,6,-1,165,6,166,-1,167,25,5,-1,167,5,168,-1,169,26,170,-1,171,27,4,-1,171,4,172,-1,173,28,3,-1,173,3,174,-1,175,0,176,-1}, 448);
SoCoordinate* SoCoordinate404 = new SoCoordinate();
SoCoordinate404->setPoint(new float[]{-3.21,-0.0154,0.0,-3.15,-0.0154,0.0,-3.14,-0.0467,0.0,-3.1,-0.0601,0.0,-3.05,-0.051,0.0,-3.04,-0.0254,0.0,-3.05,-0.00248,0.0,-3.1,0.0122,0.0,-3.16,0.03,0.0,-3.2,0.0684,0.0,-3.2,0.133,0.0,-3.16,0.17,0.0,-3.1,0.182,0.0,-3.04,0.171,0.0,-3.01,0.136,0.0,-3.0,0.095,0.0,-3.05,0.095,0.0,-3.06,0.125,0.0,-3.1,0.136,0.0,-3.14,0.126,0.0,-3.15,0.103,0.0,-3.14,0.0815,0.0,-3.1,0.0689,0.0,-3.04,0.0512,0.0,-3.0,0.0249,0.0,-2.99,-0.0195,0.0,-3.0,-0.0708,0.0,-3.05,-0.104,0.0,-3.1,-0.108,0.0,-3.16,-0.0947,0.0,-3.2,-0.0586,0.0,-2.86,-0.102,0.0,-2.9,-0.102,0.0,-2.94,-0.0832,0.0,-2.94,-0.0457,0.0,-2.94,0.0645,0.0,-2.97,0.0645,0.0,-2.97,0.103,0.0,-2.94,0.103,0.0,-2.94,0.158,0.0,-2.89,0.158,0.0,-2.89,0.103,0.0,-2.86,0.103,0.0,-2.86,0.0645,0.0,-2.89,0.0645,0.0,-2.89,-0.0483,0.0,-2.88,-0.0608,0.0,-2.86,-0.0612,0.0,-2.71,-0.000798,0.0,-2.71,-0.0373,0.0,-2.74,-0.0637,0.0,-2.77,-0.0624,0.0,-2.78,-0.0416,0.0,-2.77,-0.0195,0.0,-2.71,-0.0754,0.0,-2.74,-0.103,0.0,-2.79,-0.106,0.0,-2.82,-0.0865,0.0,-2.84,-0.0431,0.0,-2.82,0.000177,0.0,-2.78,0.0201,0.0,-2.73,0.0275,0.0,-2.71,0.0446,0.0,-2.72,0.0614,0.0,-2.74,0.0675,0.0,-2.77,0.0573,0.0,-2.78,0.039,0.0,-2.83,0.039,0.0,-2.82,0.0765,0.0,-2.78,0.105,0.0,-2.74,0.11,0.0,-2.71,0.107,0.0,-2.67,0.0849,0.0,-2.66,0.0526,0.0,-2.66,-0.0763,0.0,-2.65,-0.101,0.0,-2.7,-0.101,0.0,-2.61,-0.101,0.0,-2.61,0.103,0.0,-2.56,0.103,0.0,-2.56,0.0787,0.0,-2.52,0.104,0.0,-2.47,0.105,0.0,-2.43,0.0743,0.0,-2.43,0.038,0.0,-2.43,-0.101,0.0,-2.48,-0.101,0.0,-2.48,0.0224,0.0,-2.49,0.0514,0.0,-2.52,0.0627,0.0,-2.54,0.0505,0.0,-2.55,0.02,0.0,-2.55,-0.101,0.0,-2.33,0.0279,0.0,-2.31,0.0587,0.0,-2.27,0.0589,0.0,-2.25,0.0281,0.0,-2.25,-0.0232,0.0,-2.27,-0.0563,0.0,-2.31,-0.057,0.0,-2.33,-0.0245,0.0,-2.19,0.175,0.0,-2.19,-0.101,0.0,-2.25,-0.101,0.0,-2.25,-0.073,0.0,-2.26,-0.0913,0.0,-2.31,-0.108,0.0,-2.35,-0.0915,0.0,-2.38,-0.0424,0.0,-2.39,0.0243,0.0,-2.37,0.0809,0.0,-2.32,0.108,0.0,-2.28,0.106,0.0,-2.25,0.0776,0.0,-2.25,0.175,0.0,-2.48,0.0224,0.0,-2.43,0.038,0.0,-2.49,0.0514,0.0,-2.43,0.0743,0.0,-2.49,0.0514,0.0,-2.47,0.105,0.0,-2.52,0.0627,0.0,-2.52,0.104,0.0,-2.54,0.0505,0.0,-2.56,0.0787,0.0,-2.55,0.02,0.0,-2.56,0.0787,0.0,-2.61,-0.101,0.0,-2.55,0.02,0.0,-2.61,-0.101,0.0,-2.56,0.0787,0.0,-2.89,0.103,0.0,-2.94,0.103,0.0,-2.89,0.0645,0.0,-2.89,0.103,0.0,-2.94,0.103,0.0,-2.94,0.0645,0.0,-2.89,0.0645,0.0,-2.94,0.0645,0.0,-2.89,-0.0483,0.0,-2.94,-0.0457,0.0,-2.89,-0.0483,0.0,-2.94,-0.0832,0.0,-2.88,-0.0608,0.0,-2.9,-0.102,0.0,-3.06,0.125,0.0,-3.01,0.136,0.0,-3.06,0.125,0.0,-3.04,0.171,0.0,-3.1,0.136,0.0,-3.1,0.182,0.0,-3.14,0.126,0.0,-3.16,0.17,0.0,-3.15,0.103,0.0,-3.2,0.133,0.0,-3.14,0.0815,0.0,-3.2,0.0684,0.0,-3.14,0.0815,0.0,-3.16,0.03,0.0,-3.1,0.0689,0.0,-3.1,0.0122,0.0,-3.04,0.0512,0.0,-3.05,-0.00248,0.0,-3.0,0.0249,0.0,-3.05,-0.00248,0.0,-2.99,-0.0195,0.0,-3.04,-0.0254,0.0,-3.0,-0.0708,0.0,-3.05,-0.051,0.0,-3.05,-0.104,0.0,-3.05,-0.051,0.0,-3.1,-0.108,0.0,-3.1,-0.0601,0.0,-3.16,-0.0947,0.0,-3.14,-0.0467,0.0,-3.15,-0.0154,0.0,-3.2,-0.0586,0.0}, 531);
SoIndexedFaceSet403->setCoord(*SoCoordinate404);

SoShape400->setGeometry(*SoIndexedFaceSet403);

SoTransform398->addChild(*SoShape400);

SoTransform* SoTransform405 = new SoTransform();
SoTransform405->setTranslation(new float[]{0.04092,1.843,3.826});
SoTransform405->setScale(new float[]{84.89,77.52,77.52});
SoShape* SoShape406 = new SoShape();
SoShape406->setDEF(QString("Stand_Back"));
SoVRMLAppearance* SoVRMLAppearance407 = new SoVRMLAppearance();
SoMaterial* SoMaterial408 = new SoMaterial();
SoMaterial408->setDEF(QString("Clear"));
SoMaterial408->setAmbientIntensity(0);
SoMaterial408->setDiffuseColor(new float[]{0.0,0.0,0.0});
SoMaterial408->setTransparency(1);
SoVRMLAppearance407->addChild(*SoMaterial408);

SoShape406->addChild(*SoVRMLAppearance407);

SoIndexedFaceSet* SoIndexedFaceSet409 = new SoIndexedFaceSet();
SoIndexedFaceSet409->setCoordIndex(new int32_t[]{0,2,3,-1,2,0,1,-1}, 8);
SoCoordinate* SoCoordinate410 = new SoCoordinate();
SoCoordinate410->setPoint(new float[]{-0.02572,-0.02535,-0.05,-0.02578,-0.02131,-0.05,-0.03871,-0.02131,-0.05,-0.03877,-0.02541,-0.05}, 12);
SoIndexedFaceSet409->setCoord(*SoCoordinate410);

SoShape406->setGeometry(*SoIndexedFaceSet409);

SoTransform405->addChild(*SoShape406);

SoTransform398->addChild(*SoTransform405);

SoTransform397->addChild(*SoTransform398);

SoTransform* SoTransform411 = new SoTransform();
SoTransform411->setDEF(QString("Walk_Text"));
SoTouchSensor* SoTouchSensor412 = new SoTouchSensor();
SoTouchSensor412->setDEF(QString("Walk_Touch"));
SoTouchSensor412->setDescription(QString("click for behavior"));
SoTransform411->addChild(*SoTouchSensor412);

SoShape* SoShape413 = new SoShape();
SoShape413->setDEF(QString("WALK"));
SoVRMLAppearance* SoVRMLAppearance414 = new SoVRMLAppearance();
SoMaterial* SoMaterial415 = new SoMaterial();
SoMaterial415->setUSE(QString("text_color"));
SoVRMLAppearance414->addChild(*SoMaterial415);

SoShape413->addChild(*SoVRMLAppearance414);

SoIndexedFaceSet* SoIndexedFaceSet416 = new SoIndexedFaceSet();
SoIndexedFaceSet416->setCoordIndex(new int32_t[]{0,2,1,-1,3,2,0,-1,12,3,0,-1,4,3,12,-1,11,4,12,-1,5,4,11,-1,10,5,11,-1,6,5,10,-1,9,6,10,-1,7,6,9,-1,8,7,9,-1,15,14,13,-1,16,15,13,-1,19,18,17,-1,20,19,17,-1,27,20,17,-1,28,27,17,-1,26,20,27,-1,23,20,26,-1,21,20,23,-1,25,23,26,-1,22,21,23,-1,24,23,25,-1,29,30,31,-1,29,31,32,-1,33,34,35,-1,33,35,29,-1,29,35,36,-1,29,36,30,-1,30,36,37,-1,37,36,38,-1,37,38,39,-1,37,39,40,-1,37,40,41,-1,41,40,42,-1,41,42,41,-1,41,42,43,-1,41,43,44,-1,44,43,45,-1,44,45,46,-1,47,46,45,-1,47,32,31,-1,47,31,46,-1,38,36,48,-1,38,48,49,-1,49,48,50,-1,49,50,51,-1,51,50,52,-1,51,52,53,-1,51,53,54,-1,54,53,55,-1,54,55,56,-1,54,56,57,-1}, 212);
SoCoordinate* SoCoordinate417 = new SoCoordinate();
SoCoordinate417->setPoint(new float[]{-1.88,-0.101,0.0,-1.96,0.175,0.0,-1.91,0.175,0.0,-1.86,-0.0195,0.0,-1.82,0.175,0.0,-1.76,0.175,0.0,-1.72,-0.0195,0.0,-1.67,0.175,0.0,-1.61,0.175,0.0,-1.69,-0.101,0.0,-1.75,-0.101,0.0,-1.79,0.111,0.0,-1.83,-0.101,0.0,-1.38,-0.101,0.0,-1.38,0.175,0.0,-1.32,0.175,0.0,-1.32,-0.101,0.0,-1.27,-0.101,0.0,-1.27,0.175,0.0,-1.22,0.175,0.0,-1.22,0.0304,0.0,-1.16,0.103,0.0,-1.09,0.103,0.0,-1.16,0.0272,0.0,-1.09,-0.101,0.0,-1.15,-0.101,0.0,-1.2,-0.0141,0.0,-1.22,-0.0363,0.0,-1.22,-0.101,0.0,-1.48,-0.0754,0.0,-1.48,-0.0373,0.0,-1.51,-0.0637,0.0,-1.51,-0.103,0.0,-1.47,-0.101,0.0,-1.42,-0.101,0.0,-1.43,-0.0763,0.0,-1.43,0.0526,0.0,-1.48,-0.000798,0.0,-1.48,0.0446,0.0,-1.5,0.0275,0.0,-1.55,0.0201,0.0,-1.54,-0.0195,0.0,-1.59,0.000177,0.0,-1.61,-0.0431,0.0,-1.55,-0.0416,0.0,-1.59,-0.0865,0.0,-1.54,-0.0624,0.0,-1.56,-0.106,0.0,-1.44,0.0849,0.0,-1.49,0.0614,0.0,-1.48,0.107,0.0,-1.51,0.0675,0.0,-1.52,0.11,0.0,-1.55,0.105,0.0,-1.54,0.0573,0.0,-1.59,0.0765,0.0,-1.6,0.039,0.0,-1.55,0.039,0.0}, 174);
SoIndexedFaceSet416->setCoord(*SoCoordinate417);

SoShape413->setGeometry(*SoIndexedFaceSet416);

SoTransform411->addChild(*SoShape413);

SoTransform* SoTransform418 = new SoTransform();
SoTransform418->setTranslation(new float[]{-0.0414,1.941,4.015});
SoTransform418->setScale(new float[]{81.3,81.3,81.31});
SoShape* SoShape419 = new SoShape();
SoShape419->setDEF(QString("Walk_Back"));
SoVRMLAppearance* SoVRMLAppearance420 = new SoVRMLAppearance();
SoMaterial* SoMaterial421 = new SoMaterial();
SoMaterial421->setUSE(QString("Clear"));
SoVRMLAppearance420->addChild(*SoMaterial421);

SoShape419->addChild(*SoVRMLAppearance420);

SoIndexedFaceSet* SoIndexedFaceSet422 = new SoIndexedFaceSet();
SoIndexedFaceSet422->setCoordIndex(new int32_t[]{1,3,0,-1,3,1,2,-1}, 8);
SoCoordinate* SoCoordinate423 = new SoCoordinate();
SoCoordinate423->setPoint(new float[]{-0.02381,-0.02541,-0.05,-0.0127,-0.02541,-0.05,-0.01263,-0.02139,-0.05,-0.02381,-0.02146,-0.05}, 12);
SoIndexedFaceSet422->setCoord(*SoCoordinate423);

SoShape419->setGeometry(*SoIndexedFaceSet422);

SoTransform418->addChild(*SoShape419);

SoTransform411->addChild(*SoTransform418);

SoTransform397->addChild(*SoTransform411);

SoTransform* SoTransform424 = new SoTransform();
SoTransform424->setDEF(QString("Run_Text"));
SoTouchSensor* SoTouchSensor425 = new SoTouchSensor();
SoTouchSensor425->setDEF(QString("Run_Touch"));
SoTouchSensor425->setDescription(QString("click for behavior"));
SoTransform424->addChild(*SoTouchSensor425);

SoShape* SoShape426 = new SoShape();
SoShape426->setDEF(QString("Run"));
SoVRMLAppearance* SoVRMLAppearance427 = new SoVRMLAppearance();
SoMaterial* SoMaterial428 = new SoMaterial();
SoMaterial428->setUSE(QString("text_color"));
SoVRMLAppearance427->addChild(*SoMaterial428);

SoShape426->addChild(*SoVRMLAppearance427);

SoIndexedFaceSet* SoIndexedFaceSet429 = new SoIndexedFaceSet();
SoIndexedFaceSet429->setCoordIndex(new int32_t[]{24,26,25,-1,53,39,54,-1,17,1,0,-1,17,0,16,-1,0,14,16,-1,0,15,14,-1,14,13,22,-1,14,22,16,-1,13,12,21,-1,13,21,22,-1,12,6,21,-1,12,11,7,-1,12,7,6,-1,11,8,7,-1,10,8,11,-1,10,9,8,-1,6,5,21,-1,5,4,20,-1,5,20,21,-1,4,3,19,-1,4,19,20,-1,3,2,18,-1,3,18,19,-1,18,2,1,-1,18,1,17,-1,55,32,31,-1,55,31,56,-1,57,33,30,-1,57,30,58,-1,59,29,60,-1,61,34,28,-1,61,28,62,-1,63,35,27,-1,63,27,64,-1,65,36,66,-1,67,38,68,-1,69,37,70,-1,71,23,72,-1,73,48,47,-1,73,47,74,-1,75,49,46,-1,75,46,76,-1,77,45,78,-1,79,50,44,-1,79,44,80,-1,81,51,43,-1,81,43,82,-1,83,41,84,-1,85,40,86,-1,87,52,88,-1,89,42,90,-1}, 204);
SoCoordinate* SoCoordinate430 = new SoCoordinate();
SoCoordinate430->setPoint(new float[]{-0.829,-0.101,0.0,-0.829,0.175,0.0,-0.662,0.172,0.0,-0.622,0.148,0.0,-0.607,0.103,0.0,-0.62,0.0501,0.0,-0.648,0.0316,0.0,-0.615,-0.0063,0.0,-0.611,-0.0764,0.0,-0.601,-0.101,0.0,-0.664,-0.101,0.0,-0.671,-0.0373,0.0,-0.68,-0.00372,0.0,-0.712,0.00648,0.0,-0.772,0.00648,0.0,-0.772,-0.101,0.0,-0.772,0.0546,0.0,-0.772,0.127,0.0,-0.703,0.127,0.0,-0.673,0.118,0.0,-0.663,0.091,0.0,-0.674,0.063,0.0,-0.705,0.0546,0.0,-0.379,0.103,0.0,-0.379,-0.101,0.0,-0.432,-0.101,0.0,-0.432,-0.0764,0.0,-0.466,-0.101,0.0,-0.518,-0.102,0.0,-0.555,-0.072,0.0,-0.56,-0.0357,0.0,-0.56,0.103,0.0,-0.506,0.103,0.0,-0.506,-0.0201,0.0,-0.5,-0.0491,0.0,-0.472,-0.0604,0.0,-0.443,-0.0482,0.0,-0.433,-0.0177,0.0,-0.433,0.103,0.0,-0.331,-0.101,0.0,-0.331,0.103,0.0,-0.278,0.103,0.0,-0.278,0.0787,0.0,-0.244,0.104,0.0,-0.192,0.105,0.0,-0.154,0.0743,0.0,-0.149,0.038,0.0,-0.149,-0.101,0.0,-0.203,-0.101,0.0,-0.203,0.0224,0.0,-0.209,0.0514,0.0,-0.238,0.0627,0.0,-0.266,0.0505,0.0,-0.277,0.02,0.0,-0.277,-0.101,0.0,-0.506,-0.0201,0.0,-0.56,-0.0357,0.0,-0.5,-0.0491,0.0,-0.555,-0.072,0.0,-0.5,-0.0491,0.0,-0.518,-0.102,0.0,-0.472,-0.0604,0.0,-0.466,-0.101,0.0,-0.443,-0.0482,0.0,-0.432,-0.0764,0.0,-0.433,-0.0177,0.0,-0.432,-0.0764,0.0,-0.379,0.103,0.0,-0.433,-0.0177,0.0,-0.379,0.103,0.0,-0.432,-0.0764,0.0,-0.379,-0.101,0.0,-0.432,-0.0764,0.0,-0.203,0.0224,0.0,-0.149,0.038,0.0,-0.209,0.0514,0.0,-0.154,0.0743,0.0,-0.209,0.0514,0.0,-0.192,0.105,0.0,-0.238,0.0627,0.0,-0.244,0.104,0.0,-0.266,0.0505,0.0,-0.278,0.0787,0.0,-0.278,0.0787,0.0,-0.331,0.103,0.0,-0.277,0.02,0.0,-0.331,-0.101,0.0,-0.277,0.02,0.0,-0.278,0.0787,0.0,-0.277,0.02,0.0,-0.331,0.103,0.0}, 273);
SoIndexedFaceSet429->setCoord(*SoCoordinate430);

SoShape426->setGeometry(*SoIndexedFaceSet429);

SoTransform424->addChild(*SoShape426);

SoTransform* SoTransform431 = new SoTransform();
SoTransform431->setTranslation(new float[]{-0.01579,1.968,4.074});
SoTransform431->setScale(new float[]{82.47,82.47,82.48});
SoShape* SoShape432 = new SoShape();
SoShape432->setDEF(QString("Run_Back"));
SoVRMLAppearance* SoVRMLAppearance433 = new SoVRMLAppearance();
SoMaterial* SoMaterial434 = new SoMaterial();
SoMaterial434->setUSE(QString("Clear"));
SoVRMLAppearance433->addChild(*SoMaterial434);

SoShape432->addChild(*SoVRMLAppearance433);

SoIndexedFaceSet* SoIndexedFaceSet435 = new SoIndexedFaceSet();
SoIndexedFaceSet435->setCoordIndex(new int32_t[]{0,2,3,-1,2,0,1,-1}, 8);
SoCoordinate* SoCoordinate436 = new SoCoordinate();
SoCoordinate436->setPoint(new float[]{-0.01009,-0.02534,-0.05,-0.001382,-0.02541,-0.05,-0.001315,-0.02146,-0.05,-0.01022,-0.02146,-0.05}, 12);
SoIndexedFaceSet435->setCoord(*SoCoordinate436);

SoShape432->setGeometry(*SoIndexedFaceSet435);

SoTransform431->addChild(*SoShape432);

SoTransform424->addChild(*SoTransform431);

SoTransform397->addChild(*SoTransform424);

SoTransform* SoTransform437 = new SoTransform();
SoTransform437->setDEF(QString("Jump_Text"));
SoTouchSensor* SoTouchSensor438 = new SoTouchSensor();
SoTouchSensor438->setDEF(QString("Jump_Touch"));
SoTouchSensor438->setDescription(QString("click for behavior"));
SoTransform437->addChild(*SoTouchSensor438);

SoShape* SoShape439 = new SoShape();
SoShape439->setDEF(QString("Jump"));
SoVRMLAppearance* SoVRMLAppearance440 = new SoVRMLAppearance();
SoMaterial* SoMaterial441 = new SoMaterial();
SoMaterial441->setUSE(QString("text_color"));
SoVRMLAppearance440->addChild(*SoMaterial441);

SoShape439->addChild(*SoVRMLAppearance440);

SoIndexedFaceSet* SoIndexedFaceSet442 = new SoIndexedFaceSet();
SoIndexedFaceSet442->setCoordIndex(new int32_t[]{1,0,14,-1,1,14,2,-1,16,15,18,-1,16,18,17,-1,64,65,66,-1,67,68,69,-1,67,69,70,-1,71,72,73,-1,71,73,74,-1,75,76,77,-1,78,79,80,-1,78,80,81,-1,82,83,84,-1,82,84,85,-1,86,87,88,-1,89,90,91,-1,92,93,94,-1,95,96,97,-1,98,7,6,-1,98,6,99,-1,100,8,5,-1,100,5,101,-1,102,9,4,-1,102,4,103,-1,104,10,105,-1,106,11,3,-1,106,3,107,-1,108,12,109,-1,110,13,111,-1,112,27,26,-1,112,26,113,-1,114,28,25,-1,114,25,115,-1,116,24,117,-1,118,29,23,-1,118,23,119,-1,120,30,22,-1,120,22,121,-1,122,31,123,-1,124,34,33,-1,124,33,125,-1,126,35,32,-1,126,32,127,-1,128,21,129,-1,130,36,20,-1,130,20,131,-1,132,37,19,-1,132,19,133,-1,134,38,135,-1,136,40,137,-1,138,39,139,-1,53,58,59,-1,53,59,54,-1,53,52,58,-1,52,51,57,-1,52,57,58,-1,51,50,56,-1,51,56,57,-1,50,49,56,-1,49,48,63,-1,49,63,56,-1,48,47,63,-1,63,47,46,-1,63,46,62,-1,62,46,45,-1,62,45,44,-1,62,44,61,-1,61,44,60,-1,54,59,60,-1,44,43,42,-1,60,44,42,-1,41,55,54,-1,41,54,60,-1,41,60,42,-1}, 296);
SoCoordinate* SoCoordinate443 = new SoCoordinate();
SoCoordinate443->setPoint(new float[]{0.108,0.00195,0.0,0.163,0.00195,0.0,0.166,-0.0473,0.0,0.194,-0.0608,0.0,0.222,-0.0492,0.0,0.228,-0.017,0.0,0.228,0.175,0.0,0.284,0.175,0.0,0.284,-0.02,0.0,0.271,-0.0798,0.0,0.23,-0.104,0.0,0.193,-0.108,0.0,0.155,-0.102,0.0,0.117,-0.0714,0.0,0.108,-0.0357,0.0,0.563,-0.101,0.0,0.563,0.103,0.0,0.615,0.103,0.0,0.615,0.0803,0.0,0.649,0.105,0.0,0.696,0.105,0.0,0.728,0.0788,0.0,0.76,0.104,0.0,0.811,0.104,0.0,0.842,0.081,0.0,0.853,0.0416,0.0,0.853,-0.101,0.0,0.799,-0.101,0.0,0.799,0.0305,0.0,0.79,0.0544,0.0,0.767,0.0616,0.0,0.743,0.0507,0.0,0.734,0.0228,0.0,0.734,-0.101,0.0,0.681,-0.101,0.0,0.681,0.0301,0.0,0.673,0.0532,0.0,0.65,0.0611,0.0,0.626,0.0506,0.0,0.617,0.0224,0.0,0.617,-0.101,0.0,0.9,-0.182,0.0,0.9,0.103,0.0,0.952,0.103,0.0,0.952,0.0751,0.0,0.968,0.0934,0.0,1.01,0.11,0.0,1.05,0.103,0.0,1.07,0.0796,0.0,1.1,0.0251,0.0,1.1,-0.0222,0.0,1.07,-0.0788,0.0,1.03,-0.106,0.0,0.988,-0.103,0.0,0.953,-0.0755,0.0,0.953,-0.182,0.0,1.04,-0.000177,0.0,1.03,-0.0446,0.0,0.999,-0.0603,0.0,0.966,-0.0453,0.0,0.953,-0.000177,0.0,0.963,0.045,0.0,0.998,0.063,0.0,1.03,0.0462,0.0,0.515,-0.101,0.0,0.462,-0.0764,0.0,0.462,-0.101,0.0,0.388,-0.0201,0.0,0.388,0.103,0.0,0.334,0.103,0.0,0.334,-0.0357,0.0,0.394,-0.0491,0.0,0.388,-0.0201,0.0,0.334,-0.0357,0.0,0.339,-0.072,0.0,0.394,-0.0491,0.0,0.339,-0.072,0.0,0.376,-0.102,0.0,0.422,-0.0604,0.0,0.394,-0.0491,0.0,0.376,-0.102,0.0,0.428,-0.101,0.0,0.451,-0.0482,0.0,0.422,-0.0604,0.0,0.428,-0.101,0.0,0.462,-0.0764,0.0,0.461,-0.0177,0.0,0.451,-0.0482,0.0,0.462,-0.0764,0.0,0.515,0.103,0.0,0.461,0.103,0.0,0.461,-0.0177,0.0,0.515,0.103,0.0,0.461,-0.0177,0.0,0.462,-0.0764,0.0,0.515,-0.101,0.0,0.515,0.103,0.0,0.462,-0.0764,0.0,0.284,-0.02,0.0,0.228,-0.017,0.0,0.271,-0.0798,0.0,0.222,-0.0492,0.0,0.23,-0.104,0.0,0.194,-0.0608,0.0,0.193,-0.108,0.0,0.194,-0.0608,0.0,0.155,-0.102,0.0,0.166,-0.0473,0.0,0.117,-0.0714,0.0,0.166,-0.0473,0.0,0.108,-0.0357,0.0,0.166,-0.0473,0.0,0.799,0.0305,0.0,0.853,0.0416,0.0,0.79,0.0544,0.0,0.842,0.081,0.0,0.79,0.0544,0.0,0.811,0.104,0.0,0.767,0.0616,0.0,0.76,0.104,0.0,0.743,0.0507,0.0,0.728,0.0788,0.0,0.734,0.0228,0.0,0.728,0.0788,0.0,0.681,0.0301,0.0,0.734,0.0228,0.0,0.673,0.0532,0.0,0.728,0.0788,0.0,0.673,0.0532,0.0,0.696,0.105,0.0,0.65,0.0611,0.0,0.649,0.105,0.0,0.626,0.0506,0.0,0.615,0.0803,0.0,0.617,0.0224,0.0,0.615,0.0803,0.0,0.563,-0.101,0.0,0.617,0.0224,0.0,0.563,-0.101,0.0,0.615,0.0803,0.0}, 420);
SoIndexedFaceSet442->setCoord(*SoCoordinate443);

SoShape439->setGeometry(*SoIndexedFaceSet442);

SoTransform437->addChild(*SoShape439);

SoTransform* SoTransform444 = new SoTransform();
SoTransform444->setTranslation(new float[]{-0.008979,1.99,4.14});
SoTransform444->setScale(new float[]{83.79,83.79,83.79});
SoShape* SoShape445 = new SoShape();
SoShape445->setDEF(QString("Jump_Back"));
SoVRMLAppearance* SoVRMLAppearance446 = new SoVRMLAppearance();
SoMaterial* SoMaterial447 = new SoMaterial();
SoMaterial447->setUSE(QString("Clear"));
SoVRMLAppearance446->addChild(*SoMaterial447);

SoShape445->addChild(*SoVRMLAppearance446);

SoIndexedFaceSet* SoIndexedFaceSet448 = new SoIndexedFaceSet();
SoIndexedFaceSet448->setCoordIndex(new int32_t[]{0,2,3,-1,2,0,1,-1}, 8);
SoCoordinate* SoCoordinate449 = new SoCoordinate();
SoCoordinate449->setPoint(new float[]{0.001296,-0.02541,-0.05,0.01335,-0.02527,-0.05,0.01328,-0.02152,-0.05,0.001229,-0.02146,-0.05}, 12);
SoIndexedFaceSet448->setCoord(*SoCoordinate449);

SoShape445->setGeometry(*SoIndexedFaceSet448);

SoTransform444->addChild(*SoShape445);

SoTransform437->addChild(*SoTransform444);

SoTransform397->addChild(*SoTransform437);

SoTransform396->addChild(*SoTransform397);

SoCollision395->addChildren(*SoTransform396);

SoGroup392->addChild(*SoCollision395);

SoTransform* SoTransform450 = new SoTransform();
SoTransform450->setDEF(QString("Floor"));
SoTransform450->setTranslation(new float[]{0.0,-0.0125,0.0});
SoTransform450->setScale(new float[]{1.0,0.0125,1.0});
SoShape* SoShape451 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance452 = new SoVRMLAppearance();
SoMaterial* SoMaterial453 = new SoMaterial();
SoVRMLAppearance452->addChild(*SoMaterial453);

SoShape451->addChild(*SoVRMLAppearance452);

SoBox* SoBox454 = new SoBox();
SoShape451->setGeometry(*SoBox454);

SoTransform450->addChild(*SoShape451);

SoGroup392->addChild(*SoTransform450);

SoNode13->addChild(*SoGroup392);

SoGroup* SoGroup455 = new SoGroup();
SoGroup455->setDEF(QString("Animations"));
SoGroup* SoGroup456 = new SoGroup();
SoGroup456->setDEF(QString("Stand_Animation"));
SoOrientationInterpolator* SoOrientationInterpolator457 = new SoOrientationInterpolator();
SoOrientationInterpolator457->setDEF(QString("r_ankle_RotationInterpolator_Stand"));
SoOrientationInterpolator457->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator457->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 8);
SoGroup456->addChild(*SoOrientationInterpolator457);

SoOrientationInterpolator* SoOrientationInterpolator458 = new SoOrientationInterpolator();
SoOrientationInterpolator458->setDEF(QString("r_knee_RotationInterpolator_Stand"));
SoOrientationInterpolator458->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator458->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 8);
SoGroup456->addChild(*SoOrientationInterpolator458);

SoOrientationInterpolator* SoOrientationInterpolator459 = new SoOrientationInterpolator();
SoOrientationInterpolator459->setDEF(QString("r_hip_RotationInterpolator_Stand"));
SoOrientationInterpolator459->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator459->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 8);
SoGroup456->addChild(*SoOrientationInterpolator459);

SoOrientationInterpolator* SoOrientationInterpolator460 = new SoOrientationInterpolator();
SoOrientationInterpolator460->setDEF(QString("l_ankle_RotationInterpolator_Stand"));
SoOrientationInterpolator460->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator460->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 8);
SoGroup456->addChild(*SoOrientationInterpolator460);

SoOrientationInterpolator* SoOrientationInterpolator461 = new SoOrientationInterpolator();
SoOrientationInterpolator461->setDEF(QString("l_knee_RotationInterpolator_Stand"));
SoOrientationInterpolator461->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator461->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 8);
SoGroup456->addChild(*SoOrientationInterpolator461);

SoOrientationInterpolator* SoOrientationInterpolator462 = new SoOrientationInterpolator();
SoOrientationInterpolator462->setDEF(QString("l_hip_RotationInterpolator_Stand"));
SoOrientationInterpolator462->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator462->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 8);
SoGroup456->addChild(*SoOrientationInterpolator462);

SoOrientationInterpolator* SoOrientationInterpolator463 = new SoOrientationInterpolator();
SoOrientationInterpolator463->setDEF(QString("lower_body_RotationInterpolator_Stand"));
SoOrientationInterpolator463->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator463->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 8);
SoGroup456->addChild(*SoOrientationInterpolator463);

SoOrientationInterpolator* SoOrientationInterpolator464 = new SoOrientationInterpolator();
SoOrientationInterpolator464->setDEF(QString("r_wrist_RotationInterpolator_Stand"));
SoOrientationInterpolator464->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator464->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 8);
SoGroup456->addChild(*SoOrientationInterpolator464);

SoOrientationInterpolator* SoOrientationInterpolator465 = new SoOrientationInterpolator();
SoOrientationInterpolator465->setDEF(QString("r_elbow_RotationInterpolator_Stand"));
SoOrientationInterpolator465->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator465->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 8);
SoGroup456->addChild(*SoOrientationInterpolator465);

SoOrientationInterpolator* SoOrientationInterpolator466 = new SoOrientationInterpolator();
SoOrientationInterpolator466->setDEF(QString("r_shoulder_RotationInterpolator_Stand"));
SoOrientationInterpolator466->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator466->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 8);
SoGroup456->addChild(*SoOrientationInterpolator466);

SoOrientationInterpolator* SoOrientationInterpolator467 = new SoOrientationInterpolator();
SoOrientationInterpolator467->setDEF(QString("l_wrist_RotationInterpolator_Stand"));
SoOrientationInterpolator467->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator467->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 8);
SoGroup456->addChild(*SoOrientationInterpolator467);

SoOrientationInterpolator* SoOrientationInterpolator468 = new SoOrientationInterpolator();
SoOrientationInterpolator468->setDEF(QString("l_elbow_RotationInterpolator_Stand"));
SoOrientationInterpolator468->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator468->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 8);
SoGroup456->addChild(*SoOrientationInterpolator468);

SoOrientationInterpolator* SoOrientationInterpolator469 = new SoOrientationInterpolator();
SoOrientationInterpolator469->setDEF(QString("l_shoulder_RotationInterpolator_Stand"));
SoOrientationInterpolator469->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator469->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 8);
SoGroup456->addChild(*SoOrientationInterpolator469);

SoOrientationInterpolator* SoOrientationInterpolator470 = new SoOrientationInterpolator();
SoOrientationInterpolator470->setDEF(QString("head_RotationInterpolator_Stand"));
SoOrientationInterpolator470->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator470->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 8);
SoGroup456->addChild(*SoOrientationInterpolator470);

SoOrientationInterpolator* SoOrientationInterpolator471 = new SoOrientationInterpolator();
SoOrientationInterpolator471->setDEF(QString("neck_RotationInterpolator_Stand"));
SoOrientationInterpolator471->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator471->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 8);
SoGroup456->addChild(*SoOrientationInterpolator471);

SoOrientationInterpolator* SoOrientationInterpolator472 = new SoOrientationInterpolator();
SoOrientationInterpolator472->setDEF(QString("upper_body_RotationInterpolator_Stand"));
SoOrientationInterpolator472->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator472->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 8);
SoGroup456->addChild(*SoOrientationInterpolator472);

SoOrientationInterpolator* SoOrientationInterpolator473 = new SoOrientationInterpolator();
SoOrientationInterpolator473->setDEF(QString("whole_body_RotationInterpolator_Stand"));
SoOrientationInterpolator473->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator473->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 8);
SoGroup456->addChild(*SoOrientationInterpolator473);

SoPositionInterpolator* SoPositionInterpolator474 = new SoPositionInterpolator();
SoPositionInterpolator474->setDEF(QString("whole_body_TranslationInterpolator_Stand"));
SoPositionInterpolator474->setKey(new float[]{0.0,1.0}, 2);
SoPositionInterpolator474->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0}, 6);
SoGroup456->addChild(*SoPositionInterpolator474);

SoTimeSensor* SoTimeSensor475 = new SoTimeSensor();
SoTimeSensor475->setDEF(QString("Stand_Time"));
SoTimeSensor475->setCycleInterval(0.00999999977648258);
SoGroup456->addChild(*SoTimeSensor475);

SoGroup455->addChild(*SoGroup456);

SoGroup* SoGroup476 = new SoGroup();
SoGroup476->setDEF(QString("Walk_Animation"));
SoOrientationInterpolator* SoOrientationInterpolator477 = new SoOrientationInterpolator();
SoOrientationInterpolator477->setDEF(QString("r_ankle_RotationInterpolator_BasicWalk"));
SoOrientationInterpolator477->setKey(new float[]{0.0,0.125,0.2083,0.375,0.4583,0.5,0.6667,0.75,0.7917,0.9167,1.0}, 11);
SoOrientationInterpolator477->setKeyValue(new float[]{0.0,0.0,1.0,0.0,-1.0,0.0,0.0,0.3533,-1.0,0.0,0.0,0.1072,1.0,0.0,0.0,0.2612,1.0,0.0,0.0,0.1268,-1.0,0.0,0.0,0.01793,-1.0,0.0,0.0,0.05824,-1.0,0.0,0.0,0.2398,-1.0,0.0,0.0,0.35,-1.0,0.0,0.0,0.3322,0.0,0.0,1.0,0.0}, 44);
SoGroup476->addChild(*SoOrientationInterpolator477);

SoOrientationInterpolator* SoOrientationInterpolator478 = new SoOrientationInterpolator();
SoOrientationInterpolator478->setDEF(QString("r_knee_RotationInterpolator_BasicWalk"));
SoOrientationInterpolator478->setKey(new float[]{0.0,0.125,0.2083,0.2917,0.375,0.5,0.6667,0.7917,0.9167,1.0}, 10);
SoOrientationInterpolator478->setKeyValue(new float[]{1.0,0.0,0.0,0.8573,1.0,0.0,0.0,0.8926,1.0,0.0,0.0,0.5351,1.0,0.0,0.0,0.1756,1.0,0.0,0.0,0.1194,1.0,0.0,0.0,0.3153,1.0,0.0,0.0,0.09354,1.0,0.0,0.0,0.08558,1.0,0.0,0.0,0.2475,1.0,0.0,0.0,0.8573}, 40);
SoGroup476->addChild(*SoOrientationInterpolator478);

SoOrientationInterpolator* SoOrientationInterpolator479 = new SoOrientationInterpolator();
SoOrientationInterpolator479->setDEF(QString("r_hip_RotationInterpolator_BasicWalk"));
SoOrientationInterpolator479->setKey(new float[]{0.0,0.125,0.2083,0.2917,0.375,0.5,0.6667,0.7917,0.9167,1.0}, 10);
SoOrientationInterpolator479->setKeyValue(new float[]{-0.5831,0.03511,0.8116,0.1481,-0.995,0.02296,0.09674,0.4683,-1.0,0.00192,0.007964,0.4732,-0.998,-0.0158,-0.06102,0.5079,-0.9911,-0.03541,-0.1286,0.5419,-0.9131,-0.06243,-0.403,0.3361,-0.4306,-0.07962,-0.899,0.07038,1.0,0.0,0.0,0.2571,0.9891,-0.02805,0.1444,0.3879,-0.5831,0.03511,0.8116,0.1481}, 40);
SoGroup476->addChild(*SoOrientationInterpolator479);

SoOrientationInterpolator* SoOrientationInterpolator480 = new SoOrientationInterpolator();
SoOrientationInterpolator480->setDEF(QString("l_ankle_RotationInterpolator_BasicWalk"));
SoOrientationInterpolator480->setKey(new float[]{0.0,0.125,0.2083,0.375,0.6667,0.9167,1.0}, 7);
SoOrientationInterpolator480->setKeyValue(new float[]{-1.0,0.0,0.0,0.06714,-1.0,0.0,0.0,0.2152,-1.0,0.0,0.0,0.3184,-1.0,0.0,0.0,0.4717,-1.0,0.0,0.0,0.2912,1.0,0.0,0.0,0.1222,-1.0,0.0,0.0,0.06714}, 28);
SoGroup476->addChild(*SoOrientationInterpolator480);

SoOrientationInterpolator* SoOrientationInterpolator481 = new SoOrientationInterpolator();
SoOrientationInterpolator481->setDEF(QString("l_knee_RotationInterpolator_BasicWalk"));
SoOrientationInterpolator481->setKey(new float[]{0.0,0.2083,0.375,0.5,0.6667,0.7917,0.9167,1.0}, 8);
SoOrientationInterpolator481->setKeyValue(new float[]{1.0,0.0,0.0,0.3226,1.0,0.0,0.0,0.1556,1.0,0.0,0.0,0.08678,1.0,0.0,0.0,0.8751,1.0,0.0,0.0,1.131,1.0,0.0,0.0,0.09961,1.0,0.0,0.0,0.3942,1.0,0.0,0.0,0.3226}, 32);
SoGroup476->addChild(*SoOrientationInterpolator481);

SoOrientationInterpolator* SoOrientationInterpolator482 = new SoOrientationInterpolator();
SoOrientationInterpolator482->setDEF(QString("l_hip_RotationInterpolator_BasicWalk"));
SoOrientationInterpolator482->setKey(new float[]{0.0,0.25,0.375,0.5,0.6667,0.7917,0.9167,1.0}, 8);
SoOrientationInterpolator482->setKeyValue(new float[]{-0.873,0.06094,0.484,0.2865,0.9963,-0.01057,0.08481,0.2488,0.9965,0.01591,-0.08222,0.3836,-0.7018,-0.03223,-0.7117,0.1289,-1.0,0.0,0.0,0.5518,-0.9964,0.02231,0.0817,0.5351,-0.9809,0.04912,0.1881,0.5204,-0.873,0.06094,0.484,0.2865}, 32);
SoGroup476->addChild(*SoOrientationInterpolator482);

SoOrientationInterpolator* SoOrientationInterpolator483 = new SoOrientationInterpolator();
SoOrientationInterpolator483->setDEF(QString("lower_body_RotationInterpolator_BasicWalk"));
SoOrientationInterpolator483->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator483->setKeyValue(new float[]{0.0,0.0,-1.0,0.1056,0.0,0.0,1.0,0.09018,0.0,0.0,-1.0,0.1056}, 12);
SoGroup476->addChild(*SoOrientationInterpolator483);

SoOrientationInterpolator* SoOrientationInterpolator484 = new SoOrientationInterpolator();
SoOrientationInterpolator484->setDEF(QString("r_wrist_RotationInterpolator_BasicWalk"));
SoOrientationInterpolator484->setKey(new float[]{0.0,0.375,0.9167,1.0}, 4);
SoOrientationInterpolator484->setKeyValue(new float[]{-0.8129,0.4759,-0.3357,0.1346,0.1533,-0.9878,0.02582,0.3902,-0.5701,0.7604,-0.311,0.366,-0.8129,0.4759,-0.3357,0.1346}, 16);
SoGroup476->addChild(*SoOrientationInterpolator484);

SoOrientationInterpolator* SoOrientationInterpolator485 = new SoOrientationInterpolator();
SoOrientationInterpolator485->setDEF(QString("r_elbow_RotationInterpolator_BasicWalk"));
SoOrientationInterpolator485->setKey(new float[]{0.0,0.375,0.9167,1.0}, 4);
SoOrientationInterpolator485->setKeyValue(new float[]{-1.0,0.0,0.0,0.411508,-1.0,0.0,0.0,0.0925011,-1.0,0.0,0.0,0.572568,-1.0,0.0,0.0,0.411508}, 16);
SoGroup476->addChild(*SoOrientationInterpolator485);

SoOrientationInterpolator* SoOrientationInterpolator486 = new SoOrientationInterpolator();
SoOrientationInterpolator486->setDEF(QString("r_shoulder_RotationInterpolator_BasicWalk"));
SoOrientationInterpolator486->setKey(new float[]{0.0,0.375,0.9167,1.0}, 4);
SoOrientationInterpolator486->setKeyValue(new float[]{-1.0,0.0,0.0,0.09346,1.0,0.0,0.0,0.3197,-1.0,0.0,0.0,0.1564,-1.0,0.0,0.0,0.09346}, 16);
SoGroup476->addChild(*SoOrientationInterpolator486);

SoOrientationInterpolator* SoOrientationInterpolator487 = new SoOrientationInterpolator();
SoOrientationInterpolator487->setDEF(QString("l_wrist_RotationInterpolator_BasicWalk"));
SoOrientationInterpolator487->setKey(new float[]{0.0,0.375,0.9167,1.0}, 4);
SoOrientationInterpolator487->setKeyValue(new float[]{0.0,-1.0,0.0,0.461076,-0.330195,-0.927451,0.175516,0.538852,0.0327774,-0.999314,-0.0172185,0.492033,0.0,-1.0,0.0,0.461076}, 16);
SoGroup476->addChild(*SoOrientationInterpolator487);

SoOrientationInterpolator* SoOrientationInterpolator488 = new SoOrientationInterpolator();
SoOrientationInterpolator488->setDEF(QString("l_elbow_RotationInterpolator_BasicWalk"));
SoOrientationInterpolator488->setKey(new float[]{0.0,0.375,0.9167,1.0}, 4);
SoOrientationInterpolator488->setKeyValue(new float[]{-1.0,0.0,0.0,0.0659878,-1.0,0.0,0.0,0.488383,-1.0,0.0,0.0,0.0177536,-1.0,0.0,0.0,0.0659878}, 16);
SoGroup476->addChild(*SoOrientationInterpolator488);

SoOrientationInterpolator* SoOrientationInterpolator489 = new SoOrientationInterpolator();
SoOrientationInterpolator489->setDEF(QString("l_shoulder_RotationInterpolator_BasicWalk"));
SoOrientationInterpolator489->setKey(new float[]{0.0,0.375,0.9167,1.0}, 4);
SoOrientationInterpolator489->setKeyValue(new float[]{1.0,0.0,0.0,0.1189,-1.0,0.0,0.0,0.1861,1.0,0.0,0.0,0.3357,1.0,0.0,0.0,0.1189}, 16);
SoGroup476->addChild(*SoOrientationInterpolator489);

SoOrientationInterpolator* SoOrientationInterpolator490 = new SoOrientationInterpolator();
SoOrientationInterpolator490->setDEF(QString("head_RotationInterpolator_BasicWalk"));
SoOrientationInterpolator490->setKey(new float[]{0.0,0.375,0.4167,0.5,0.5833,0.6667,0.75,0.8333,0.9167,1.0}, 10);
SoOrientationInterpolator490->setKeyValue(new float[]{0.0,-1.0,0.0,0.08642,0.0,1.0,0.0,0.1825,0.0,1.0,0.0,0.1505,0.0,1.0,0.0,0.1053,0.0,1.0,0.0,0.04391,0.0,-1.0,0.0,0.03119,0.0,-1.0,0.0,0.07936,0.0,-1.0,0.0,0.1616,0.0,-1.0,0.0,0.155,0.0,-1.0,0.0,0.08642}, 40);
SoGroup476->addChild(*SoOrientationInterpolator490);

SoOrientationInterpolator* SoOrientationInterpolator491 = new SoOrientationInterpolator();
SoOrientationInterpolator491->setDEF(QString("neck_RotationInterpolator_BasicWalk"));
SoOrientationInterpolator491->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator491->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 8);
SoGroup476->addChild(*SoOrientationInterpolator491);

SoOrientationInterpolator* SoOrientationInterpolator492 = new SoOrientationInterpolator();
SoOrientationInterpolator492->setDEF(QString("upper_body_RotationInterpolator_BasicWalk"));
SoOrientationInterpolator492->setKey(new float[]{0.0,0.2083,0.375,0.75,0.8333,1.0}, 6);
SoOrientationInterpolator492->setKeyValue(new float[]{0.0,1.0,0.0,0.0826,-0.01972,-0.5974,0.8017,0.08231,0.009296,-0.9648,0.2627,0.1734,-0.01238,0.9549,-0.2968,0.08732,-0.008125,0.9691,-0.2463,0.158,0.0,1.0,0.0,0.0826}, 24);
SoGroup476->addChild(*SoOrientationInterpolator492);

SoOrientationInterpolator* SoOrientationInterpolator493 = new SoOrientationInterpolator();
SoOrientationInterpolator493->setDEF(QString("whole_body_RotationInterpolator_BasicWalk"));
SoOrientationInterpolator493->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator493->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 8);
SoGroup476->addChild(*SoOrientationInterpolator493);

SoPositionInterpolator* SoPositionInterpolator494 = new SoPositionInterpolator();
SoPositionInterpolator494->setDEF(QString("whole_body_TranslationInterpolator_BasicWalk"));
SoPositionInterpolator494->setKey(new float[]{0.0,0.04167,0.125,0.1667,0.2083,0.25,0.2917,0.375,0.4583,0.5,0.5417,0.5833,0.625,0.7083,0.75,0.7917,0.875,0.9167,1.0}, 19);
SoPositionInterpolator494->setKeyValue(new float[]{0.0,-0.00928,0.0,0.0,-0.003858,0.0,0.0,-0.008847,0.0,0.0,-0.01486,0.0,0.0,-0.02641,0.0,0.0,-0.03934,0.0,0.0,-0.0502,0.0,0.0,-0.07469,0.0,0.0,-0.02732,0.0,0.0,-0.01608,0.0,0.0,-0.01129,0.0,0.0,-0.005819,0.0,0.0,-0.002004,0.0,0.0,-0.002579,0.0,0.0,-0.0143,0.0,0.0,-0.03799,0.0,0.0,-0.05648,0.0,0.0,-0.045,0.0,0.0,-0.00928,0.0}, 57);
SoGroup476->addChild(*SoPositionInterpolator494);

SoTimeSensor* SoTimeSensor495 = new SoTimeSensor();
SoTimeSensor495->setDEF(QString("Walk_Time"));
SoTimeSensor495->setCycleInterval(2);
SoTimeSensor495->setLoop(true);
SoTimeSensor495->setStartTime(-1);
SoGroup476->addChild(*SoTimeSensor495);

SoGroup455->addChild(*SoGroup476);

SoGroup* SoGroup496 = new SoGroup();
SoGroup496->setDEF(QString("Run_Animation"));
SoOrientationInterpolator* SoOrientationInterpolator497 = new SoOrientationInterpolator();
SoOrientationInterpolator497->setDEF(QString("r_ankle_RotationInterpolator_Run"));
SoOrientationInterpolator497->setKey(new float[]{0.0,0.4909,0.7091,0.8,0.8182,1.0}, 6);
SoOrientationInterpolator497->setKeyValue(new float[]{1.0,0.0,0.0,0.2323,-1.0,0.0,0.0,0.07843,-1.0,0.0,0.0,0.09676,-1.0,0.0,0.0,0.3274,-1.0,0.0,0.0,0.3278,1.0,0.0,0.0,0.2323}, 24);
SoGroup496->addChild(*SoOrientationInterpolator497);

SoOrientationInterpolator* SoOrientationInterpolator498 = new SoOrientationInterpolator();
SoOrientationInterpolator498->setDEF(QString("r_knee_RotationInterpolator_Run"));
SoOrientationInterpolator498->setKey(new float[]{0.0,0.03636,0.2182,0.4909,0.7455,1.0}, 6);
SoOrientationInterpolator498->setKeyValue(new float[]{1.0,0.0,0.0,0.7004,1.0,0.0,0.0,1.011,1.0,0.0,0.0,1.892,1.0,0.0,0.0,1.188,1.0,0.0,0.0,0.3964,1.0,0.0,0.0,0.7004}, 24);
SoGroup496->addChild(*SoOrientationInterpolator498);

SoOrientationInterpolator* SoOrientationInterpolator499 = new SoOrientationInterpolator();
SoOrientationInterpolator499->setDEF(QString("r_hip_RotationInterpolator_Run"));
SoOrientationInterpolator499->setKey(new float[]{0.0,0.2182,0.4909,0.7455,1.0}, 5);
SoOrientationInterpolator499->setKeyValue(new float[]{0.9999,0.00293,-0.00989,0.402,-1.0,0.004977,-0.00497,0.5943,-1.0,0.003265,-0.001752,1.178,-0.9999,0.00815,-0.01093,0.3031,0.9999,0.00293,-0.00989,0.402}, 20);
SoGroup496->addChild(*SoOrientationInterpolator499);

SoOrientationInterpolator* SoOrientationInterpolator500 = new SoOrientationInterpolator();
SoOrientationInterpolator500->setDEF(QString("l_ankle_RotationInterpolator_Run"));
SoOrientationInterpolator500->setKey(new float[]{0.0,0.2182,0.3091,0.4909,1.0}, 5);
SoOrientationInterpolator500->setKeyValue(new float[]{1.0,0.0,0.0,0.03543,-1.0,0.0,0.0,0.1037,-1.0,0.0,0.0,0.4328,1.0,0.0,0.0,0.1929,1.0,0.0,0.0,0.03543}, 20);
SoGroup496->addChild(*SoOrientationInterpolator500);

SoOrientationInterpolator* SoOrientationInterpolator501 = new SoOrientationInterpolator();
SoOrientationInterpolator501->setDEF(QString("l_knee_RotationInterpolator_Run"));
SoOrientationInterpolator501->setKey(new float[]{0.0,0.2182,0.4909,0.7455,1.0}, 5);
SoOrientationInterpolator501->setKeyValue(new float[]{1.0,0.0,0.0,1.108,1.0,0.0,0.0,0.4265,1.0,0.0,0.0,0.7052,1.0,0.0,0.0,2.179,1.0,0.0,0.0,1.108}, 20);
SoGroup496->addChild(*SoOrientationInterpolator501);

SoOrientationInterpolator* SoOrientationInterpolator502 = new SoOrientationInterpolator();
SoOrientationInterpolator502->setDEF(QString("l_hip_RotationInterpolator_Run"));
SoOrientationInterpolator502->setKey(new float[]{0.0,0.2182,0.4909,0.7455,1.0}, 5);
SoOrientationInterpolator502->setKeyValue(new float[]{-0.9986,0.03354,0.04001,1.212,-0.9889,0.1328,0.06696,0.4025,0.9894,0.1453,0.009351,0.4114,-0.9963,0.07032,0.05003,0.7035,-0.9986,0.03354,0.04001,1.212}, 20);
SoGroup496->addChild(*SoOrientationInterpolator502);

SoOrientationInterpolator* SoOrientationInterpolator503 = new SoOrientationInterpolator();
SoOrientationInterpolator503->setDEF(QString("lower_body_RotationInterpolator_Run"));
SoOrientationInterpolator503->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator503->setKeyValue(new float[]{0.9969,-0.05444,0.05596,0.07687,0.9969,-0.05444,0.05596,0.07687}, 8);
SoGroup496->addChild(*SoOrientationInterpolator503);

SoOrientationInterpolator* SoOrientationInterpolator504 = new SoOrientationInterpolator();
SoOrientationInterpolator504->setDEF(QString("r_wrist_RotationInterpolator_Run"));
SoOrientationInterpolator504->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator504->setKeyValue(new float[]{-0.917742,-0.237244,-0.318536,0.214273,-0.917742,-0.237244,-0.318536,0.214273}, 8);
SoGroup496->addChild(*SoOrientationInterpolator504);

SoOrientationInterpolator* SoOrientationInterpolator505 = new SoOrientationInterpolator();
SoOrientationInterpolator505->setDEF(QString("r_elbow_RotationInterpolator_Run"));
SoOrientationInterpolator505->setKey(new float[]{0.0,0.2182,0.4909,0.7455,1.0}, 5);
SoOrientationInterpolator505->setKeyValue(new float[]{0.9353,-0.2978,-0.191,4.222,-0.9362,0.2924,-0.1952,1.05,0.9941,-0.09719,-0.04725,4.512,-0.9594,0.2653,0.09579,1.525,0.9353,-0.2978,-0.191,4.222}, 20);
SoGroup496->addChild(*SoOrientationInterpolator505);

SoOrientationInterpolator* SoOrientationInterpolator506 = new SoOrientationInterpolator();
SoOrientationInterpolator506->setDEF(QString("r_shoulder_RotationInterpolator_Run"));
SoOrientationInterpolator506->setKey(new float[]{0.0,0.2182,0.4909,0.7455,1.0}, 5);
SoOrientationInterpolator506->setKeyValue(new float[]{-1.0,0.0,0.0,0.6979,0.9094,0.2062,-0.3613,0.4157,0.9637,0.1537,-0.2185,1.353,0.4864,0.08841,-0.8693,0.1716,-1.0,0.0,0.0,0.6979}, 20);
SoGroup496->addChild(*SoOrientationInterpolator506);

SoOrientationInterpolator* SoOrientationInterpolator507 = new SoOrientationInterpolator();
SoOrientationInterpolator507->setDEF(QString("l_wrist_RotationInterpolator_Run"));
SoOrientationInterpolator507->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator507->setKeyValue(new float[]{-0.0240995,-0.999682,0.00741506,0.120409,-0.0240995,-0.999682,0.00741506,0.120409}, 8);
SoGroup496->addChild(*SoOrientationInterpolator507);

SoOrientationInterpolator* SoOrientationInterpolator508 = new SoOrientationInterpolator();
SoOrientationInterpolator508->setDEF(QString("l_elbow_RotationInterpolator_Run"));
SoOrientationInterpolator508->setKey(new float[]{0.0,0.2182,0.4909,0.7455,1.0}, 5);
SoOrientationInterpolator508->setKeyValue(new float[]{0.9985,0.03887,0.03802,4.689,-0.965,-0.1889,-0.1821,1.415,0.9758,0.1563,0.1529,4.666,-0.9956,-0.0936,0.009826,1.126,0.9985,0.03887,0.03802,4.689}, 20);
SoGroup496->addChild(*SoOrientationInterpolator508);

SoOrientationInterpolator* SoOrientationInterpolator509 = new SoOrientationInterpolator();
SoOrientationInterpolator509->setDEF(QString("l_shoulder_RotationInterpolator_Run"));
SoOrientationInterpolator509->setKey(new float[]{0.0,0.2182,0.4909,0.7455,1.0}, 5);
SoOrientationInterpolator509->setKeyValue(new float[]{0.9907,-0.07264,0.115,1.135,0.9291,-0.1222,0.349,0.1695,-0.9892,0.1364,-0.05394,0.5112,0.9942,-0.0002052,0.1073,0.4975,0.9907,-0.07264,0.115,1.135}, 20);
SoGroup496->addChild(*SoOrientationInterpolator509);

SoOrientationInterpolator* SoOrientationInterpolator510 = new SoOrientationInterpolator();
SoOrientationInterpolator510->setDEF(QString("head_RotationInterpolator_Run"));
SoOrientationInterpolator510->setKey(new float[]{0.0,0.4909,1.0}, 3);
SoOrientationInterpolator510->setKeyValue(new float[]{0.6517,-0.7559,0.06211,0.2508,0.6467,0.7527,-0.1238,0.2344,0.6517,-0.7559,0.06211,0.2508}, 12);
SoGroup496->addChild(*SoOrientationInterpolator510);

SoOrientationInterpolator* SoOrientationInterpolator511 = new SoOrientationInterpolator();
SoOrientationInterpolator511->setDEF(QString("neck_RotationInterpolator_Run"));
SoOrientationInterpolator511->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator511->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 8);
SoGroup496->addChild(*SoOrientationInterpolator511);

SoOrientationInterpolator* SoOrientationInterpolator512 = new SoOrientationInterpolator();
SoOrientationInterpolator512->setDEF(QString("upper_body_RotationInterpolator_Run"));
SoOrientationInterpolator512->setKey(new float[]{0.0,0.2545,0.4909,0.7636,1.0}, 5);
SoOrientationInterpolator512->setKeyValue(new float[]{0.7651,0.6382,0.08586,0.2712,0.9999,0.002845,-0.01547,0.3756,0.7459,-0.6505,-0.1432,0.2416,0.9984,0.05536,-0.01154,0.3488,0.7651,0.6382,0.08586,0.2712}, 20);
SoGroup496->addChild(*SoOrientationInterpolator512);

SoOrientationInterpolator* SoOrientationInterpolator513 = new SoOrientationInterpolator();
SoOrientationInterpolator513->setDEF(QString("whole_body_RotationInterpolator_Run"));
SoOrientationInterpolator513->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator513->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 8);
SoGroup496->addChild(*SoOrientationInterpolator513);

SoPositionInterpolator* SoPositionInterpolator514 = new SoPositionInterpolator();
SoPositionInterpolator514->setDEF(QString("whole_body_TranslationInterpolator_Run"));
SoPositionInterpolator514->setKey(new float[]{0.0,0.2182,0.2909,0.3091,0.7091,0.8,0.8182,1.0}, 8);
SoPositionInterpolator514->setKeyValue(new float[]{0.0,-0.0351,0.0,0.0,-0.0351,0.0,0.0,-0.04087,0.0,0.0,-0.04886,0.0,0.0,-0.04051,0.0,0.0,-0.03666,0.0,0.0,-0.03666,0.0,0.0,-0.0351,0.0}, 24);
SoGroup496->addChild(*SoPositionInterpolator514);

SoTimeSensor* SoTimeSensor515 = new SoTimeSensor();
SoTimeSensor515->setDEF(QString("Run_Time"));
SoTimeSensor515->setLoop(true);
SoTimeSensor515->setStartTime(-1);
SoGroup496->addChild(*SoTimeSensor515);

SoGroup455->addChild(*SoGroup496);

SoGroup* SoGroup516 = new SoGroup();
SoGroup516->setDEF(QString("Jump_Animation"));
SoOrientationInterpolator* SoOrientationInterpolator517 = new SoOrientationInterpolator();
SoOrientationInterpolator517->setDEF(QString("r_ankle_RotationInterpolator_Jump"));
SoOrientationInterpolator517->setKey(new float[]{0.0,0.28,0.32,0.36,0.4,0.44,0.48,0.64,0.76,0.84,0.88,0.92,0.96,1.0}, 14);
SoOrientationInterpolator517->setKeyValue(new float[]{0.0,0.0,1.0,0.0,-1.0,0.0,0.0,0.6735,-1.0,0.0,0.0,0.6735,-1.0,0.0,0.0,0.3527,-1.0,0.0,0.0,0.3038,-1.0,0.0,0.0,0.07964,1.0,0.0,0.0,0.3001,1.0,0.0,0.0,0.6509,1.0,0.0,0.0,0.3001,-1.0,0.0,0.0,0.2087,-1.0,0.0,0.0,0.3756,-1.0,0.0,0.0,0.3279,-1.0,0.0,0.0,0.1193,0.0,0.0,1.0,0.0}, 56);
SoGroup516->addChild(*SoOrientationInterpolator517);

SoOrientationInterpolator* SoOrientationInterpolator518 = new SoOrientationInterpolator();
SoOrientationInterpolator518->setDEF(QString("r_knee_RotationInterpolator_Jump"));
SoOrientationInterpolator518->setKey(new float[]{0.0,0.28,0.32,0.48,0.64,0.76,0.88,1.0}, 8);
SoOrientationInterpolator518->setKeyValue(new float[]{0.0,0.0,1.0,0.0,1.0,0.0,0.0,2.005,1.0,0.0,0.0,2.005,0.0,0.0,1.0,0.0,1.0,0.0,0.0,0.9507,1.0,0.0,0.0,0.5845,1.0,0.0,0.0,0.9054,0.0,0.0,1.0,0.0}, 32);
SoGroup516->addChild(*SoOrientationInterpolator518);

SoOrientationInterpolator* SoOrientationInterpolator519 = new SoOrientationInterpolator();
SoOrientationInterpolator519->setDEF(QString("r_hip_RotationInterpolator_Jump"));
SoOrientationInterpolator519->setKey(new float[]{0.0,0.28,0.32,0.36,0.4,0.44,0.48,0.64,0.76,0.88,1.0}, 11);
SoOrientationInterpolator519->setKeyValue(new float[]{0.0,0.0,1.0,0.0,1.0,0.0,0.0,4.433,1.0,0.0,0.0,4.433,1.0,0.0,0.0,4.647,-1.0,0.0,0.0,0.8943,-1.0,0.0,0.0,0.3698,0.0,0.0,1.0,0.0,-1.0,0.0,0.0,0.4963,-1.0,0.0,0.0,0.3829,-1.0,0.0,0.0,0.5169,0.0,0.0,1.0,0.0}, 44);
SoGroup516->addChild(*SoOrientationInterpolator519);

SoOrientationInterpolator* SoOrientationInterpolator520 = new SoOrientationInterpolator();
SoOrientationInterpolator520->setDEF(QString("l_ankle_RotationInterpolator_Jump"));
SoOrientationInterpolator520->setKey(new float[]{0.0,0.28,0.32,0.36,0.4,0.44,0.48,0.64,0.76,0.84,0.88,0.92,0.96,1.0}, 14);
SoOrientationInterpolator520->setKeyValue(new float[]{0.0,0.0,1.0,0.0,-1.0,0.0,0.0,0.625,-1.0,0.0,0.0,0.625,-1.0,0.0,0.0,0.3364,-1.0,0.0,0.0,0.2742,-1.0,0.0,0.0,0.05078,1.0,0.0,0.0,0.2833,1.0,0.0,0.0,0.6667,1.0,0.0,0.0,0.2833,-1.0,0.0,0.0,0.2108,-1.0,0.0,0.0,0.375,-1.0,0.0,0.0,0.3146,-1.0,0.0,0.0,0.1174,0.0,0.0,1.0,0.0}, 56);
SoGroup516->addChild(*SoOrientationInterpolator520);

SoOrientationInterpolator* SoOrientationInterpolator521 = new SoOrientationInterpolator();
SoOrientationInterpolator521->setDEF(QString("l_knee_RotationInterpolator_Jump"));
SoOrientationInterpolator521->setKey(new float[]{0.0,0.28,0.32,0.48,0.64,0.76,0.88,1.0}, 8);
SoOrientationInterpolator521->setKeyValue(new float[]{0.0,0.0,1.0,0.0,1.0,0.0,0.0,2.047,1.0,0.0,0.0,2.047,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.566,1.0,0.0,0.0,0.5913,1.0,0.0,0.0,0.9235,0.0,0.0,1.0,0.0}, 32);
SoGroup516->addChild(*SoOrientationInterpolator521);

SoOrientationInterpolator* SoOrientationInterpolator522 = new SoOrientationInterpolator();
SoOrientationInterpolator522->setDEF(QString("l_hip_RotationInterpolator_Jump"));
SoOrientationInterpolator522->setKey(new float[]{0.0,0.28,0.32,0.36,0.4,0.44,0.48,0.64,0.76,0.88,1.0}, 11);
SoOrientationInterpolator522->setKeyValue(new float[]{0.0,0.0,1.0,0.0,1.0,0.0,0.0,4.349,1.0,0.0,0.0,4.349,1.0,0.0,0.0,4.615,-1.0,0.0,0.0,0.9136,-1.0,0.0,0.0,0.3614,0.0,0.0,1.0,0.0,-1.0,0.0,0.0,0.7869,-1.0,0.0,0.0,0.3918,-1.0,0.0,0.0,0.5433,0.0,0.0,1.0,0.0}, 44);
SoGroup516->addChild(*SoOrientationInterpolator522);

SoOrientationInterpolator* SoOrientationInterpolator523 = new SoOrientationInterpolator();
SoOrientationInterpolator523->setDEF(QString("lower_body_RotationInterpolator_Jump"));
SoOrientationInterpolator523->setKey(new float[]{0.0,0.28,0.32,0.48,0.76,1.0}, 6);
SoOrientationInterpolator523->setKeyValue(new float[]{0.0,0.0,1.0,0.0,1.0,0.0,0.0,0.1892,1.0,0.0,0.0,0.1892,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 24);
SoGroup516->addChild(*SoOrientationInterpolator523);

SoOrientationInterpolator* SoOrientationInterpolator524 = new SoOrientationInterpolator();
SoOrientationInterpolator524->setDEF(QString("r_wrist_RotationInterpolator_Jump"));
SoOrientationInterpolator524->setKey(new float[]{0.0,0.28,0.32,0.64,0.76,1.0}, 6);
SoOrientationInterpolator524->setKeyValue(new float[]{0.0,0.0,1.0,0.0,-0.0585279,0.983903,-0.168849,1.85956,-0.0585279,0.983903,-0.168849,1.85956,-0.00222418,0.99801,-0.0630095,1.46072,0.0,1.0,0.0,0.497349,0.0,0.0,1.0,0.0}, 24);
SoGroup516->addChild(*SoOrientationInterpolator524);

SoOrientationInterpolator* SoOrientationInterpolator525 = new SoOrientationInterpolator();
SoOrientationInterpolator525->setDEF(QString("r_elbow_RotationInterpolator_Jump"));
SoOrientationInterpolator525->setKey(new float[]{0.0,0.28,0.32,0.64,0.76,1.0}, 6);
SoOrientationInterpolator525->setKeyValue(new float[]{0.0,0.0,1.0,0.0,-1.0,0.0,0.0,0.04151,-1.0,0.0,0.0,0.04151,-1.0,0.0,0.0,0.5855,-1.0,0.0,0.0,0.5852,0.0,0.0,1.0,0.0}, 24);
SoGroup516->addChild(*SoOrientationInterpolator525);

SoOrientationInterpolator* SoOrientationInterpolator526 = new SoOrientationInterpolator();
SoOrientationInterpolator526->setDEF(QString("r_shoulder_RotationInterpolator_Jump"));
SoOrientationInterpolator526->setKey(new float[]{0.0,0.28,0.32,0.64,0.76,0.88,1.0}, 7);
SoOrientationInterpolator526->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.9992,0.02042,0.03558,4.688,0.9992,0.02042,0.03558,4.688,0.9989,-0.04623,0.005159,4.079,-0.8687,-0.2525,-0.4261,1.501,-0.941,-0.2893,-0.1754,0.4788,0.0,0.0,1.0,0.0}, 28);
SoGroup516->addChild(*SoOrientationInterpolator526);

SoOrientationInterpolator* SoOrientationInterpolator527 = new SoOrientationInterpolator();
SoOrientationInterpolator527->setDEF(QString("l_wrist_RotationInterpolator_Jump"));
SoOrientationInterpolator527->setKey(new float[]{0.0,0.28,0.32,0.64,0.76,0.88,1.0}, 7);
SoOrientationInterpolator527->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0672928,0.989475,-0.128107,4.15574,0.0672928,0.989475,-0.128107,4.15574,0.00364942,0.999901,0.0135896,4.5822,0.0,-1.0,0.0,0.655922,-0.00050618,-0.999999,0.0012782,1.28397,0.0,0.0,1.0,0.0}, 28);
SoGroup516->addChild(*SoOrientationInterpolator527);

SoOrientationInterpolator* SoOrientationInterpolator528 = new SoOrientationInterpolator();
SoOrientationInterpolator528->setDEF(QString("l_elbow_RotationInterpolator_Jump"));
SoOrientationInterpolator528->setKey(new float[]{0.0,0.28,0.32,0.64,0.76,1.0}, 6);
SoOrientationInterpolator528->setKeyValue(new float[]{0.0,0.0,1.0,0.0,-1.0,0.0,0.0,0.1229,-1.0,0.0,0.0,0.1229,-1.0,0.0,0.0,0.5976,-1.0,0.0,0.0,0.3917,0.0,0.0,1.0,0.0}, 24);
SoGroup516->addChild(*SoOrientationInterpolator528);

SoOrientationInterpolator* SoOrientationInterpolator529 = new SoOrientationInterpolator();
SoOrientationInterpolator529->setDEF(QString("l_shoulder_RotationInterpolator_Jump"));
SoOrientationInterpolator529->setKey(new float[]{0.0,0.28,0.32,0.64,0.76,0.88,1.0}, 7);
SoOrientationInterpolator529->setKeyValue(new float[]{0.0,0.0,1.0,0.0,-0.9987,0.02554,0.04498,1.57,-0.9987,0.02554,0.04498,1.57,1.0,0.0004113,0.003055,4.114,-0.8413,0.3238,0.4329,1.453,-0.877,0.4198,0.2337,0.6009,0.0,0.0,1.0,0.0}, 28);
SoGroup516->addChild(*SoOrientationInterpolator529);

SoOrientationInterpolator* SoOrientationInterpolator530 = new SoOrientationInterpolator();
SoOrientationInterpolator530->setDEF(QString("head_RotationInterpolator_Jump"));
SoOrientationInterpolator530->setKey(new float[]{0.0,0.28,0.32,0.48,0.76,1.0}, 6);
SoOrientationInterpolator530->setKeyValue(new float[]{0.0,0.0,1.0,0.0,-1.0,0.0,0.0,0.5989,-1.0,0.0,0.0,0.5989,-1.0,0.0,0.0,0.3216,1.0,0.0,0.0,0.06503,0.0,0.0,1.0,0.0}, 24);
SoGroup516->addChild(*SoOrientationInterpolator530);

SoOrientationInterpolator* SoOrientationInterpolator531 = new SoOrientationInterpolator();
SoOrientationInterpolator531->setDEF(QString("neck_RotationInterpolator_Jump"));
SoOrientationInterpolator531->setKey(new float[]{0.0,0.28,0.32,0.48,0.76,1.0}, 6);
SoOrientationInterpolator531->setKeyValue(new float[]{0.0,0.0,1.0,0.0,-1.0,0.0,0.0,0.1942,-1.0,0.0,0.0,0.1942,0.0,0.0,1.0,0.0,1.0,0.0,0.0,0.2284,0.0,0.0,1.0,0.0}, 24);
SoGroup516->addChild(*SoOrientationInterpolator531);

SoOrientationInterpolator* SoOrientationInterpolator532 = new SoOrientationInterpolator();
SoOrientationInterpolator532->setDEF(QString("upper_body_RotationInterpolator_Jump"));
SoOrientationInterpolator532->setKey(new float[]{0.0,0.28,0.32,0.48,0.76,0.88,1.0}, 7);
SoOrientationInterpolator532->setKeyValue(new float[]{0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.038,1.0,0.0,0.0,1.038,-1.0,0.0,0.0,0.1057,1.0,0.0,0.0,0.2171,1.0,0.0,0.0,0.3465,0.0,0.0,1.0,0.0}, 28);
SoGroup516->addChild(*SoOrientationInterpolator532);

SoOrientationInterpolator* SoOrientationInterpolator533 = new SoOrientationInterpolator();
SoOrientationInterpolator533->setDEF(QString("whole_body_RotationInterpolator_Jump"));
SoOrientationInterpolator533->setKey(new float[]{0.0,0.28,0.32,0.48,0.64,0.76,1.0}, 7);
SoOrientationInterpolator533->setKeyValue(new float[]{0.0,0.0,1.0,0.0,1.0,0.0,0.0,0.3273,1.0,0.0,0.0,0.3273,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 28);
SoGroup516->addChild(*SoOrientationInterpolator533);

SoPositionInterpolator* SoPositionInterpolator534 = new SoPositionInterpolator();
SoPositionInterpolator534->setDEF(QString("whole_body_TranslationInterpolator_Jump"));
SoPositionInterpolator534->setKey(new float[]{0.0,0.04,0.08,0.12,0.16,0.2,0.24,0.28,0.32,0.36,0.4,0.44,0.48,0.64,0.76,0.8,0.84,0.88,0.92,0.96,1.0}, 21);
SoPositionInterpolator534->setKeyValue(new float[]{0.0,0.0,0.0,0.0,-0.01264,-0.01289,0.0,-0.04712,-0.03738,-0.0003345,-0.1049,-0.05353,-0.0005712,-0.1892,-0.06561,-0.0008233,-0.286,-0.06276,-0.0009591,-0.3795,-0.05148,-0.00106,-0.4484,-0.03656,-0.00106,-0.4484,-0.03656,-0.001122,-0.3269,-0.1499,-0.0008616,-0.13,-0.06358,-0.0005128,-0.03123,-0.05488,0.0004779,0.053,0.02732,0.0001728,0.4148,0.006873,0.0,0.03045,0.02148,0.0,-0.01299,-0.01057,0.0,-0.06932,-0.01064,0.0001365,-0.1037,-0.005059,0.0001279,-0.07198,-0.007596,0.000141,-0.01626,-0.004935,0.0,0.0,0.0}, 63);
SoGroup516->addChild(*SoPositionInterpolator534);

SoTimeSensor* SoTimeSensor535 = new SoTimeSensor();
SoTimeSensor535->setDEF(QString("Jump_Time"));
SoTimeSensor535->setCycleInterval(2);
SoTimeSensor535->setStartTime(-1);
SoGroup516->addChild(*SoTimeSensor535);

SoGroup455->addChild(*SoGroup516);

SoNode13->addChild(*SoGroup455);

SoROUTE* SoROUTE536 = new SoROUTE();
SoROUTE536->setFromNode(QString("HudProx"));
SoROUTE536->setFromField(QString("position_changed"));
SoROUTE536->setToNode(QString("HudXform"));
SoROUTE536->setToField(QString("set_translation"));
SoNode13->addChild(*SoROUTE536);

SoROUTE* SoROUTE537 = new SoROUTE();
SoROUTE537->setFromNode(QString("HudProx"));
SoROUTE537->setFromField(QString("orientation_changed"));
SoROUTE537->setToNode(QString("HudXform"));
SoROUTE537->setToField(QString("set_rotation"));
SoNode13->addChild(*SoROUTE537);

SoROUTE* SoROUTE538 = new SoROUTE();
SoROUTE538->setFromNode(QString("Stand_Touch"));
SoROUTE538->setFromField(QString("touchTime"));
SoROUTE538->setToNode(QString("Walk_Time"));
SoROUTE538->setToField(QString("set_stopTime"));
SoNode13->addChild(*SoROUTE538);

SoROUTE* SoROUTE539 = new SoROUTE();
SoROUTE539->setFromNode(QString("Stand_Touch"));
SoROUTE539->setFromField(QString("touchTime"));
SoROUTE539->setToNode(QString("Run_Time"));
SoROUTE539->setToField(QString("set_stopTime"));
SoNode13->addChild(*SoROUTE539);

SoROUTE* SoROUTE540 = new SoROUTE();
SoROUTE540->setFromNode(QString("Stand_Touch"));
SoROUTE540->setFromField(QString("touchTime"));
SoROUTE540->setToNode(QString("Jump_Time"));
SoROUTE540->setToField(QString("set_stopTime"));
SoNode13->addChild(*SoROUTE540);

SoROUTE* SoROUTE541 = new SoROUTE();
SoROUTE541->setFromNode(QString("Stand_Touch"));
SoROUTE541->setFromField(QString("touchTime"));
SoROUTE541->setToNode(QString("Stand_Time"));
SoROUTE541->setToField(QString("set_startTime"));
SoNode13->addChild(*SoROUTE541);

SoROUTE* SoROUTE542 = new SoROUTE();
SoROUTE542->setFromNode(QString("Walk_Touch"));
SoROUTE542->setFromField(QString("touchTime"));
SoROUTE542->setToNode(QString("Stand_Time"));
SoROUTE542->setToField(QString("set_stopTime"));
SoNode13->addChild(*SoROUTE542);

SoROUTE* SoROUTE543 = new SoROUTE();
SoROUTE543->setFromNode(QString("Walk_Touch"));
SoROUTE543->setFromField(QString("touchTime"));
SoROUTE543->setToNode(QString("Run_Time"));
SoROUTE543->setToField(QString("set_stopTime"));
SoNode13->addChild(*SoROUTE543);

SoROUTE* SoROUTE544 = new SoROUTE();
SoROUTE544->setFromNode(QString("Walk_Touch"));
SoROUTE544->setFromField(QString("touchTime"));
SoROUTE544->setToNode(QString("Jump_Time"));
SoROUTE544->setToField(QString("set_stopTime"));
SoNode13->addChild(*SoROUTE544);

SoROUTE* SoROUTE545 = new SoROUTE();
SoROUTE545->setFromNode(QString("Walk_Touch"));
SoROUTE545->setFromField(QString("touchTime"));
SoROUTE545->setToNode(QString("Walk_Time"));
SoROUTE545->setToField(QString("set_startTime"));
SoNode13->addChild(*SoROUTE545);

SoROUTE* SoROUTE546 = new SoROUTE();
SoROUTE546->setFromNode(QString("Run_Touch"));
SoROUTE546->setFromField(QString("touchTime"));
SoROUTE546->setToNode(QString("Stand_Time"));
SoROUTE546->setToField(QString("set_stopTime"));
SoNode13->addChild(*SoROUTE546);

SoROUTE* SoROUTE547 = new SoROUTE();
SoROUTE547->setFromNode(QString("Run_Touch"));
SoROUTE547->setFromField(QString("touchTime"));
SoROUTE547->setToNode(QString("Walk_Time"));
SoROUTE547->setToField(QString("set_stopTime"));
SoNode13->addChild(*SoROUTE547);

SoROUTE* SoROUTE548 = new SoROUTE();
SoROUTE548->setFromNode(QString("Run_Touch"));
SoROUTE548->setFromField(QString("touchTime"));
SoROUTE548->setToNode(QString("Jump_Time"));
SoROUTE548->setToField(QString("set_stopTime"));
SoNode13->addChild(*SoROUTE548);

SoROUTE* SoROUTE549 = new SoROUTE();
SoROUTE549->setFromNode(QString("Run_Touch"));
SoROUTE549->setFromField(QString("touchTime"));
SoROUTE549->setToNode(QString("Run_Time"));
SoROUTE549->setToField(QString("set_startTime"));
SoNode13->addChild(*SoROUTE549);

SoROUTE* SoROUTE550 = new SoROUTE();
SoROUTE550->setFromNode(QString("Jump_Touch"));
SoROUTE550->setFromField(QString("touchTime"));
SoROUTE550->setToNode(QString("Stand_Time"));
SoROUTE550->setToField(QString("set_stopTime"));
SoNode13->addChild(*SoROUTE550);

SoROUTE* SoROUTE551 = new SoROUTE();
SoROUTE551->setFromNode(QString("Jump_Touch"));
SoROUTE551->setFromField(QString("touchTime"));
SoROUTE551->setToNode(QString("Walk_Time"));
SoROUTE551->setToField(QString("set_stopTime"));
SoNode13->addChild(*SoROUTE551);

SoROUTE* SoROUTE552 = new SoROUTE();
SoROUTE552->setFromNode(QString("Jump_Touch"));
SoROUTE552->setFromField(QString("touchTime"));
SoROUTE552->setToNode(QString("Run_Time"));
SoROUTE552->setToField(QString("set_stopTime"));
SoNode13->addChild(*SoROUTE552);

SoROUTE* SoROUTE553 = new SoROUTE();
SoROUTE553->setFromNode(QString("Jump_Touch"));
SoROUTE553->setFromField(QString("touchTime"));
SoROUTE553->setToNode(QString("Jump_Time"));
SoROUTE553->setToField(QString("set_startTime"));
SoNode13->addChild(*SoROUTE553);

SoROUTE* SoROUTE554 = new SoROUTE();
SoROUTE554->setFromNode(QString("Stand_Time"));
SoROUTE554->setFromField(QString("fraction_changed"));
SoROUTE554->setToNode(QString("r_ankle_RotationInterpolator_Stand"));
SoROUTE554->setToField(QString("set_fraction"));
SoNode13->addChild(*SoROUTE554);

SoROUTE* SoROUTE555 = new SoROUTE();
SoROUTE555->setFromNode(QString("Stand_Time"));
SoROUTE555->setFromField(QString("fraction_changed"));
SoROUTE555->setToNode(QString("r_knee_RotationInterpolator_Stand"));
SoROUTE555->setToField(QString("set_fraction"));
SoNode13->addChild(*SoROUTE555);

SoROUTE* SoROUTE556 = new SoROUTE();
SoROUTE556->setFromNode(QString("Stand_Time"));
SoROUTE556->setFromField(QString("fraction_changed"));
SoROUTE556->setToNode(QString("r_hip_RotationInterpolator_Stand"));
SoROUTE556->setToField(QString("set_fraction"));
SoNode13->addChild(*SoROUTE556);

SoROUTE* SoROUTE557 = new SoROUTE();
SoROUTE557->setFromNode(QString("Stand_Time"));
SoROUTE557->setFromField(QString("fraction_changed"));
SoROUTE557->setToNode(QString("l_ankle_RotationInterpolator_Stand"));
SoROUTE557->setToField(QString("set_fraction"));
SoNode13->addChild(*SoROUTE557);

SoROUTE* SoROUTE558 = new SoROUTE();
SoROUTE558->setFromNode(QString("Stand_Time"));
SoROUTE558->setFromField(QString("fraction_changed"));
SoROUTE558->setToNode(QString("l_knee_RotationInterpolator_Stand"));
SoROUTE558->setToField(QString("set_fraction"));
SoNode13->addChild(*SoROUTE558);

SoROUTE* SoROUTE559 = new SoROUTE();
SoROUTE559->setFromNode(QString("Stand_Time"));
SoROUTE559->setFromField(QString("fraction_changed"));
SoROUTE559->setToNode(QString("l_hip_RotationInterpolator_Stand"));
SoROUTE559->setToField(QString("set_fraction"));
SoNode13->addChild(*SoROUTE559);

SoROUTE* SoROUTE560 = new SoROUTE();
SoROUTE560->setFromNode(QString("Stand_Time"));
SoROUTE560->setFromField(QString("fraction_changed"));
SoROUTE560->setToNode(QString("lower_body_RotationInterpolator_Stand"));
SoROUTE560->setToField(QString("set_fraction"));
SoNode13->addChild(*SoROUTE560);

SoROUTE* SoROUTE561 = new SoROUTE();
SoROUTE561->setFromNode(QString("Stand_Time"));
SoROUTE561->setFromField(QString("fraction_changed"));
SoROUTE561->setToNode(QString("r_wrist_RotationInterpolator_Stand"));
SoROUTE561->setToField(QString("set_fraction"));
SoNode13->addChild(*SoROUTE561);

SoROUTE* SoROUTE562 = new SoROUTE();
SoROUTE562->setFromNode(QString("Stand_Time"));
SoROUTE562->setFromField(QString("fraction_changed"));
SoROUTE562->setToNode(QString("r_elbow_RotationInterpolator_Stand"));
SoROUTE562->setToField(QString("set_fraction"));
SoNode13->addChild(*SoROUTE562);

SoROUTE* SoROUTE563 = new SoROUTE();
SoROUTE563->setFromNode(QString("Stand_Time"));
SoROUTE563->setFromField(QString("fraction_changed"));
SoROUTE563->setToNode(QString("r_shoulder_RotationInterpolator_Stand"));
SoROUTE563->setToField(QString("set_fraction"));
SoNode13->addChild(*SoROUTE563);

SoROUTE* SoROUTE564 = new SoROUTE();
SoROUTE564->setFromNode(QString("Stand_Time"));
SoROUTE564->setFromField(QString("fraction_changed"));
SoROUTE564->setToNode(QString("l_wrist_RotationInterpolator_Stand"));
SoROUTE564->setToField(QString("set_fraction"));
SoNode13->addChild(*SoROUTE564);

SoROUTE* SoROUTE565 = new SoROUTE();
SoROUTE565->setFromNode(QString("Stand_Time"));
SoROUTE565->setFromField(QString("fraction_changed"));
SoROUTE565->setToNode(QString("l_elbow_RotationInterpolator_Stand"));
SoROUTE565->setToField(QString("set_fraction"));
SoNode13->addChild(*SoROUTE565);

SoROUTE* SoROUTE566 = new SoROUTE();
SoROUTE566->setFromNode(QString("Stand_Time"));
SoROUTE566->setFromField(QString("fraction_changed"));
SoROUTE566->setToNode(QString("l_shoulder_RotationInterpolator_Stand"));
SoROUTE566->setToField(QString("set_fraction"));
SoNode13->addChild(*SoROUTE566);

SoROUTE* SoROUTE567 = new SoROUTE();
SoROUTE567->setFromNode(QString("Stand_Time"));
SoROUTE567->setFromField(QString("fraction_changed"));
SoROUTE567->setToNode(QString("head_RotationInterpolator_Stand"));
SoROUTE567->setToField(QString("set_fraction"));
SoNode13->addChild(*SoROUTE567);

SoROUTE* SoROUTE568 = new SoROUTE();
SoROUTE568->setFromNode(QString("Stand_Time"));
SoROUTE568->setFromField(QString("fraction_changed"));
SoROUTE568->setToNode(QString("neck_RotationInterpolator_Stand"));
SoROUTE568->setToField(QString("set_fraction"));
SoNode13->addChild(*SoROUTE568);

SoROUTE* SoROUTE569 = new SoROUTE();
SoROUTE569->setFromNode(QString("Stand_Time"));
SoROUTE569->setFromField(QString("fraction_changed"));
SoROUTE569->setToNode(QString("upper_body_RotationInterpolator_Stand"));
SoROUTE569->setToField(QString("set_fraction"));
SoNode13->addChild(*SoROUTE569);

SoROUTE* SoROUTE570 = new SoROUTE();
SoROUTE570->setFromNode(QString("Stand_Time"));
SoROUTE570->setFromField(QString("fraction_changed"));
SoROUTE570->setToNode(QString("whole_body_RotationInterpolator_Stand"));
SoROUTE570->setToField(QString("set_fraction"));
SoNode13->addChild(*SoROUTE570);

SoROUTE* SoROUTE571 = new SoROUTE();
SoROUTE571->setFromNode(QString("Stand_Time"));
SoROUTE571->setFromField(QString("fraction_changed"));
SoROUTE571->setToNode(QString("whole_body_TranslationInterpolator_Stand"));
SoROUTE571->setToField(QString("set_fraction"));
SoNode13->addChild(*SoROUTE571);

SoROUTE* SoROUTE572 = new SoROUTE();
SoROUTE572->setFromNode(QString("r_ankle_RotationInterpolator_Stand"));
SoROUTE572->setFromField(QString("value_changed"));
SoROUTE572->setToNode(QString("hanim_r_ankle"));
SoROUTE572->setToField(QString("set_rotation"));
SoNode13->addChild(*SoROUTE572);

SoROUTE* SoROUTE573 = new SoROUTE();
SoROUTE573->setFromNode(QString("r_knee_RotationInterpolator_Stand"));
SoROUTE573->setFromField(QString("value_changed"));
SoROUTE573->setToNode(QString("hanim_r_knee"));
SoROUTE573->setToField(QString("set_rotation"));
SoNode13->addChild(*SoROUTE573);

SoROUTE* SoROUTE574 = new SoROUTE();
SoROUTE574->setFromNode(QString("r_hip_RotationInterpolator_Stand"));
SoROUTE574->setFromField(QString("value_changed"));
SoROUTE574->setToNode(QString("hanim_r_hip"));
SoROUTE574->setToField(QString("set_rotation"));
SoNode13->addChild(*SoROUTE574);

SoROUTE* SoROUTE575 = new SoROUTE();
SoROUTE575->setFromNode(QString("l_ankle_RotationInterpolator_Stand"));
SoROUTE575->setFromField(QString("value_changed"));
SoROUTE575->setToNode(QString("hanim_l_ankle"));
SoROUTE575->setToField(QString("set_rotation"));
SoNode13->addChild(*SoROUTE575);

SoROUTE* SoROUTE576 = new SoROUTE();
SoROUTE576->setFromNode(QString("l_knee_RotationInterpolator_Stand"));
SoROUTE576->setFromField(QString("value_changed"));
SoROUTE576->setToNode(QString("hanim_l_knee"));
SoROUTE576->setToField(QString("set_rotation"));
SoNode13->addChild(*SoROUTE576);

SoROUTE* SoROUTE577 = new SoROUTE();
SoROUTE577->setFromNode(QString("l_hip_RotationInterpolator_Stand"));
SoROUTE577->setFromField(QString("value_changed"));
SoROUTE577->setToNode(QString("hanim_l_hip"));
SoROUTE577->setToField(QString("set_rotation"));
SoNode13->addChild(*SoROUTE577);

SoROUTE* SoROUTE578 = new SoROUTE();
SoROUTE578->setFromNode(QString("lower_body_RotationInterpolator_Stand"));
SoROUTE578->setFromField(QString("value_changed"));
SoROUTE578->setToNode(QString("hanim_sacroiliac"));
SoROUTE578->setToField(QString("set_rotation"));
SoNode13->addChild(*SoROUTE578);

SoROUTE* SoROUTE579 = new SoROUTE();
SoROUTE579->setFromNode(QString("r_wrist_RotationInterpolator_Stand"));
SoROUTE579->setFromField(QString("value_changed"));
SoROUTE579->setToNode(QString("hanim_r_wrist"));
SoROUTE579->setToField(QString("set_rotation"));
SoNode13->addChild(*SoROUTE579);

SoROUTE* SoROUTE580 = new SoROUTE();
SoROUTE580->setFromNode(QString("r_elbow_RotationInterpolator_Stand"));
SoROUTE580->setFromField(QString("value_changed"));
SoROUTE580->setToNode(QString("hanim_r_elbow"));
SoROUTE580->setToField(QString("set_rotation"));
SoNode13->addChild(*SoROUTE580);

SoROUTE* SoROUTE581 = new SoROUTE();
SoROUTE581->setFromNode(QString("r_shoulder_RotationInterpolator_Stand"));
SoROUTE581->setFromField(QString("value_changed"));
SoROUTE581->setToNode(QString("hanim_r_shoulder"));
SoROUTE581->setToField(QString("set_rotation"));
SoNode13->addChild(*SoROUTE581);

SoROUTE* SoROUTE582 = new SoROUTE();
SoROUTE582->setFromNode(QString("l_wrist_RotationInterpolator_Stand"));
SoROUTE582->setFromField(QString("value_changed"));
SoROUTE582->setToNode(QString("hanim_l_wrist"));
SoROUTE582->setToField(QString("set_rotation"));
SoNode13->addChild(*SoROUTE582);

SoROUTE* SoROUTE583 = new SoROUTE();
SoROUTE583->setFromNode(QString("l_elbow_RotationInterpolator_Stand"));
SoROUTE583->setFromField(QString("value_changed"));
SoROUTE583->setToNode(QString("hanim_l_elbow"));
SoROUTE583->setToField(QString("set_rotation"));
SoNode13->addChild(*SoROUTE583);

SoROUTE* SoROUTE584 = new SoROUTE();
SoROUTE584->setFromNode(QString("l_shoulder_RotationInterpolator_Stand"));
SoROUTE584->setFromField(QString("value_changed"));
SoROUTE584->setToNode(QString("hanim_l_shoulder"));
SoROUTE584->setToField(QString("set_rotation"));
SoNode13->addChild(*SoROUTE584);

SoROUTE* SoROUTE585 = new SoROUTE();
SoROUTE585->setFromNode(QString("head_RotationInterpolator_Stand"));
SoROUTE585->setFromField(QString("value_changed"));
SoROUTE585->setToNode(QString("hanim_skullbase"));
SoROUTE585->setToField(QString("set_rotation"));
SoNode13->addChild(*SoROUTE585);

SoROUTE* SoROUTE586 = new SoROUTE();
SoROUTE586->setFromNode(QString("neck_RotationInterpolator_Stand"));
SoROUTE586->setFromField(QString("value_changed"));
SoROUTE586->setToNode(QString("hanim_vc4"));
SoROUTE586->setToField(QString("set_rotation"));
SoNode13->addChild(*SoROUTE586);

SoROUTE* SoROUTE587 = new SoROUTE();
SoROUTE587->setFromNode(QString("upper_body_RotationInterpolator_Stand"));
SoROUTE587->setFromField(QString("value_changed"));
SoROUTE587->setToNode(QString("hanim_vl1"));
SoROUTE587->setToField(QString("set_rotation"));
SoNode13->addChild(*SoROUTE587);

SoROUTE* SoROUTE588 = new SoROUTE();
SoROUTE588->setFromNode(QString("whole_body_RotationInterpolator_Stand"));
SoROUTE588->setFromField(QString("value_changed"));
SoROUTE588->setToNode(QString("hanim_humanoid_root"));
SoROUTE588->setToField(QString("set_rotation"));
SoNode13->addChild(*SoROUTE588);

SoROUTE* SoROUTE589 = new SoROUTE();
SoROUTE589->setFromNode(QString("whole_body_TranslationInterpolator_Stand"));
SoROUTE589->setFromField(QString("value_changed"));
SoROUTE589->setToNode(QString("hanim_humanoid_root"));
SoROUTE589->setToField(QString("set_translation"));
SoNode13->addChild(*SoROUTE589);

SoROUTE* SoROUTE590 = new SoROUTE();
SoROUTE590->setFromNode(QString("Walk_Time"));
SoROUTE590->setFromField(QString("fraction_changed"));
SoROUTE590->setToNode(QString("r_ankle_RotationInterpolator_BasicWalk"));
SoROUTE590->setToField(QString("set_fraction"));
SoNode13->addChild(*SoROUTE590);

SoROUTE* SoROUTE591 = new SoROUTE();
SoROUTE591->setFromNode(QString("Walk_Time"));
SoROUTE591->setFromField(QString("fraction_changed"));
SoROUTE591->setToNode(QString("r_knee_RotationInterpolator_BasicWalk"));
SoROUTE591->setToField(QString("set_fraction"));
SoNode13->addChild(*SoROUTE591);

SoROUTE* SoROUTE592 = new SoROUTE();
SoROUTE592->setFromNode(QString("Walk_Time"));
SoROUTE592->setFromField(QString("fraction_changed"));
SoROUTE592->setToNode(QString("r_hip_RotationInterpolator_BasicWalk"));
SoROUTE592->setToField(QString("set_fraction"));
SoNode13->addChild(*SoROUTE592);

SoROUTE* SoROUTE593 = new SoROUTE();
SoROUTE593->setFromNode(QString("Walk_Time"));
SoROUTE593->setFromField(QString("fraction_changed"));
SoROUTE593->setToNode(QString("l_ankle_RotationInterpolator_BasicWalk"));
SoROUTE593->setToField(QString("set_fraction"));
SoNode13->addChild(*SoROUTE593);

SoROUTE* SoROUTE594 = new SoROUTE();
SoROUTE594->setFromNode(QString("Walk_Time"));
SoROUTE594->setFromField(QString("fraction_changed"));
SoROUTE594->setToNode(QString("l_knee_RotationInterpolator_BasicWalk"));
SoROUTE594->setToField(QString("set_fraction"));
SoNode13->addChild(*SoROUTE594);

SoROUTE* SoROUTE595 = new SoROUTE();
SoROUTE595->setFromNode(QString("Walk_Time"));
SoROUTE595->setFromField(QString("fraction_changed"));
SoROUTE595->setToNode(QString("l_hip_RotationInterpolator_BasicWalk"));
SoROUTE595->setToField(QString("set_fraction"));
SoNode13->addChild(*SoROUTE595);

SoROUTE* SoROUTE596 = new SoROUTE();
SoROUTE596->setFromNode(QString("Walk_Time"));
SoROUTE596->setFromField(QString("fraction_changed"));
SoROUTE596->setToNode(QString("lower_body_RotationInterpolator_BasicWalk"));
SoROUTE596->setToField(QString("set_fraction"));
SoNode13->addChild(*SoROUTE596);

SoROUTE* SoROUTE597 = new SoROUTE();
SoROUTE597->setFromNode(QString("Walk_Time"));
SoROUTE597->setFromField(QString("fraction_changed"));
SoROUTE597->setToNode(QString("r_wrist_RotationInterpolator_BasicWalk"));
SoROUTE597->setToField(QString("set_fraction"));
SoNode13->addChild(*SoROUTE597);

SoROUTE* SoROUTE598 = new SoROUTE();
SoROUTE598->setFromNode(QString("Walk_Time"));
SoROUTE598->setFromField(QString("fraction_changed"));
SoROUTE598->setToNode(QString("r_elbow_RotationInterpolator_BasicWalk"));
SoROUTE598->setToField(QString("set_fraction"));
SoNode13->addChild(*SoROUTE598);

SoROUTE* SoROUTE599 = new SoROUTE();
SoROUTE599->setFromNode(QString("Walk_Time"));
SoROUTE599->setFromField(QString("fraction_changed"));
SoROUTE599->setToNode(QString("r_shoulder_RotationInterpolator_BasicWalk"));
SoROUTE599->setToField(QString("set_fraction"));
SoNode13->addChild(*SoROUTE599);

SoROUTE* SoROUTE600 = new SoROUTE();
SoROUTE600->setFromNode(QString("Walk_Time"));
SoROUTE600->setFromField(QString("fraction_changed"));
SoROUTE600->setToNode(QString("l_wrist_RotationInterpolator_BasicWalk"));
SoROUTE600->setToField(QString("set_fraction"));
SoNode13->addChild(*SoROUTE600);

SoROUTE* SoROUTE601 = new SoROUTE();
SoROUTE601->setFromNode(QString("Walk_Time"));
SoROUTE601->setFromField(QString("fraction_changed"));
SoROUTE601->setToNode(QString("l_elbow_RotationInterpolator_BasicWalk"));
SoROUTE601->setToField(QString("set_fraction"));
SoNode13->addChild(*SoROUTE601);

SoROUTE* SoROUTE602 = new SoROUTE();
SoROUTE602->setFromNode(QString("Walk_Time"));
SoROUTE602->setFromField(QString("fraction_changed"));
SoROUTE602->setToNode(QString("l_shoulder_RotationInterpolator_BasicWalk"));
SoROUTE602->setToField(QString("set_fraction"));
SoNode13->addChild(*SoROUTE602);

SoROUTE* SoROUTE603 = new SoROUTE();
SoROUTE603->setFromNode(QString("Walk_Time"));
SoROUTE603->setFromField(QString("fraction_changed"));
SoROUTE603->setToNode(QString("head_RotationInterpolator_BasicWalk"));
SoROUTE603->setToField(QString("set_fraction"));
SoNode13->addChild(*SoROUTE603);

SoROUTE* SoROUTE604 = new SoROUTE();
SoROUTE604->setFromNode(QString("Walk_Time"));
SoROUTE604->setFromField(QString("fraction_changed"));
SoROUTE604->setToNode(QString("neck_RotationInterpolator_BasicWalk"));
SoROUTE604->setToField(QString("set_fraction"));
SoNode13->addChild(*SoROUTE604);

SoROUTE* SoROUTE605 = new SoROUTE();
SoROUTE605->setFromNode(QString("Walk_Time"));
SoROUTE605->setFromField(QString("fraction_changed"));
SoROUTE605->setToNode(QString("upper_body_RotationInterpolator_BasicWalk"));
SoROUTE605->setToField(QString("set_fraction"));
SoNode13->addChild(*SoROUTE605);

SoROUTE* SoROUTE606 = new SoROUTE();
SoROUTE606->setFromNode(QString("Walk_Time"));
SoROUTE606->setFromField(QString("fraction_changed"));
SoROUTE606->setToNode(QString("whole_body_RotationInterpolator_BasicWalk"));
SoROUTE606->setToField(QString("set_fraction"));
SoNode13->addChild(*SoROUTE606);

SoROUTE* SoROUTE607 = new SoROUTE();
SoROUTE607->setFromNode(QString("Walk_Time"));
SoROUTE607->setFromField(QString("fraction_changed"));
SoROUTE607->setToNode(QString("whole_body_TranslationInterpolator_BasicWalk"));
SoROUTE607->setToField(QString("set_fraction"));
SoNode13->addChild(*SoROUTE607);

SoROUTE* SoROUTE608 = new SoROUTE();
SoROUTE608->setFromNode(QString("r_ankle_RotationInterpolator_BasicWalk"));
SoROUTE608->setFromField(QString("value_changed"));
SoROUTE608->setToNode(QString("hanim_r_ankle"));
SoROUTE608->setToField(QString("set_rotation"));
SoNode13->addChild(*SoROUTE608);

SoROUTE* SoROUTE609 = new SoROUTE();
SoROUTE609->setFromNode(QString("r_knee_RotationInterpolator_BasicWalk"));
SoROUTE609->setFromField(QString("value_changed"));
SoROUTE609->setToNode(QString("hanim_r_knee"));
SoROUTE609->setToField(QString("set_rotation"));
SoNode13->addChild(*SoROUTE609);

SoROUTE* SoROUTE610 = new SoROUTE();
SoROUTE610->setFromNode(QString("r_hip_RotationInterpolator_BasicWalk"));
SoROUTE610->setFromField(QString("value_changed"));
SoROUTE610->setToNode(QString("hanim_r_hip"));
SoROUTE610->setToField(QString("set_rotation"));
SoNode13->addChild(*SoROUTE610);

SoROUTE* SoROUTE611 = new SoROUTE();
SoROUTE611->setFromNode(QString("l_ankle_RotationInterpolator_BasicWalk"));
SoROUTE611->setFromField(QString("value_changed"));
SoROUTE611->setToNode(QString("hanim_l_ankle"));
SoROUTE611->setToField(QString("set_rotation"));
SoNode13->addChild(*SoROUTE611);

SoROUTE* SoROUTE612 = new SoROUTE();
SoROUTE612->setFromNode(QString("l_knee_RotationInterpolator_BasicWalk"));
SoROUTE612->setFromField(QString("value_changed"));
SoROUTE612->setToNode(QString("hanim_l_knee"));
SoROUTE612->setToField(QString("set_rotation"));
SoNode13->addChild(*SoROUTE612);

SoROUTE* SoROUTE613 = new SoROUTE();
SoROUTE613->setFromNode(QString("l_hip_RotationInterpolator_BasicWalk"));
SoROUTE613->setFromField(QString("value_changed"));
SoROUTE613->setToNode(QString("hanim_l_hip"));
SoROUTE613->setToField(QString("set_rotation"));
SoNode13->addChild(*SoROUTE613);

SoROUTE* SoROUTE614 = new SoROUTE();
SoROUTE614->setFromNode(QString("lower_body_RotationInterpolator_BasicWalk"));
SoROUTE614->setFromField(QString("value_changed"));
SoROUTE614->setToNode(QString("hanim_sacroiliac"));
SoROUTE614->setToField(QString("set_rotation"));
SoNode13->addChild(*SoROUTE614);

SoROUTE* SoROUTE615 = new SoROUTE();
SoROUTE615->setFromNode(QString("r_wrist_RotationInterpolator_BasicWalk"));
SoROUTE615->setFromField(QString("value_changed"));
SoROUTE615->setToNode(QString("hanim_r_wrist"));
SoROUTE615->setToField(QString("set_rotation"));
SoNode13->addChild(*SoROUTE615);

SoROUTE* SoROUTE616 = new SoROUTE();
SoROUTE616->setFromNode(QString("r_elbow_RotationInterpolator_BasicWalk"));
SoROUTE616->setFromField(QString("value_changed"));
SoROUTE616->setToNode(QString("hanim_r_elbow"));
SoROUTE616->setToField(QString("set_rotation"));
SoNode13->addChild(*SoROUTE616);

SoROUTE* SoROUTE617 = new SoROUTE();
SoROUTE617->setFromNode(QString("r_shoulder_RotationInterpolator_BasicWalk"));
SoROUTE617->setFromField(QString("value_changed"));
SoROUTE617->setToNode(QString("hanim_r_shoulder"));
SoROUTE617->setToField(QString("set_rotation"));
SoNode13->addChild(*SoROUTE617);

SoROUTE* SoROUTE618 = new SoROUTE();
SoROUTE618->setFromNode(QString("l_wrist_RotationInterpolator_BasicWalk"));
SoROUTE618->setFromField(QString("value_changed"));
SoROUTE618->setToNode(QString("hanim_l_wrist"));
SoROUTE618->setToField(QString("set_rotation"));
SoNode13->addChild(*SoROUTE618);

SoROUTE* SoROUTE619 = new SoROUTE();
SoROUTE619->setFromNode(QString("l_elbow_RotationInterpolator_BasicWalk"));
SoROUTE619->setFromField(QString("value_changed"));
SoROUTE619->setToNode(QString("hanim_l_elbow"));
SoROUTE619->setToField(QString("set_rotation"));
SoNode13->addChild(*SoROUTE619);

SoROUTE* SoROUTE620 = new SoROUTE();
SoROUTE620->setFromNode(QString("l_shoulder_RotationInterpolator_BasicWalk"));
SoROUTE620->setFromField(QString("value_changed"));
SoROUTE620->setToNode(QString("hanim_l_shoulder"));
SoROUTE620->setToField(QString("set_rotation"));
SoNode13->addChild(*SoROUTE620);

SoROUTE* SoROUTE621 = new SoROUTE();
SoROUTE621->setFromNode(QString("head_RotationInterpolator_BasicWalk"));
SoROUTE621->setFromField(QString("value_changed"));
SoROUTE621->setToNode(QString("hanim_skullbase"));
SoROUTE621->setToField(QString("set_rotation"));
SoNode13->addChild(*SoROUTE621);

SoROUTE* SoROUTE622 = new SoROUTE();
SoROUTE622->setFromNode(QString("neck_RotationInterpolator_BasicWalk"));
SoROUTE622->setFromField(QString("value_changed"));
SoROUTE622->setToNode(QString("hanim_vc4"));
SoROUTE622->setToField(QString("set_rotation"));
SoNode13->addChild(*SoROUTE622);

SoROUTE* SoROUTE623 = new SoROUTE();
SoROUTE623->setFromNode(QString("upper_body_RotationInterpolator_BasicWalk"));
SoROUTE623->setFromField(QString("value_changed"));
SoROUTE623->setToNode(QString("hanim_vl1"));
SoROUTE623->setToField(QString("set_rotation"));
SoNode13->addChild(*SoROUTE623);

SoROUTE* SoROUTE624 = new SoROUTE();
SoROUTE624->setFromNode(QString("whole_body_RotationInterpolator_BasicWalk"));
SoROUTE624->setFromField(QString("value_changed"));
SoROUTE624->setToNode(QString("hanim_humanoid_root"));
SoROUTE624->setToField(QString("set_rotation"));
SoNode13->addChild(*SoROUTE624);

SoROUTE* SoROUTE625 = new SoROUTE();
SoROUTE625->setFromNode(QString("whole_body_TranslationInterpolator_BasicWalk"));
SoROUTE625->setFromField(QString("value_changed"));
SoROUTE625->setToNode(QString("hanim_humanoid_root"));
SoROUTE625->setToField(QString("set_translation"));
SoNode13->addChild(*SoROUTE625);

SoROUTE* SoROUTE626 = new SoROUTE();
SoROUTE626->setFromNode(QString("Run_Time"));
SoROUTE626->setFromField(QString("fraction_changed"));
SoROUTE626->setToNode(QString("r_ankle_RotationInterpolator_Run"));
SoROUTE626->setToField(QString("set_fraction"));
SoNode13->addChild(*SoROUTE626);

SoROUTE* SoROUTE627 = new SoROUTE();
SoROUTE627->setFromNode(QString("Run_Time"));
SoROUTE627->setFromField(QString("fraction_changed"));
SoROUTE627->setToNode(QString("r_knee_RotationInterpolator_Run"));
SoROUTE627->setToField(QString("set_fraction"));
SoNode13->addChild(*SoROUTE627);

SoROUTE* SoROUTE628 = new SoROUTE();
SoROUTE628->setFromNode(QString("Run_Time"));
SoROUTE628->setFromField(QString("fraction_changed"));
SoROUTE628->setToNode(QString("r_hip_RotationInterpolator_Run"));
SoROUTE628->setToField(QString("set_fraction"));
SoNode13->addChild(*SoROUTE628);

SoROUTE* SoROUTE629 = new SoROUTE();
SoROUTE629->setFromNode(QString("Run_Time"));
SoROUTE629->setFromField(QString("fraction_changed"));
SoROUTE629->setToNode(QString("l_ankle_RotationInterpolator_Run"));
SoROUTE629->setToField(QString("set_fraction"));
SoNode13->addChild(*SoROUTE629);

SoROUTE* SoROUTE630 = new SoROUTE();
SoROUTE630->setFromNode(QString("Run_Time"));
SoROUTE630->setFromField(QString("fraction_changed"));
SoROUTE630->setToNode(QString("l_knee_RotationInterpolator_Run"));
SoROUTE630->setToField(QString("set_fraction"));
SoNode13->addChild(*SoROUTE630);

SoROUTE* SoROUTE631 = new SoROUTE();
SoROUTE631->setFromNode(QString("Run_Time"));
SoROUTE631->setFromField(QString("fraction_changed"));
SoROUTE631->setToNode(QString("l_hip_RotationInterpolator_Run"));
SoROUTE631->setToField(QString("set_fraction"));
SoNode13->addChild(*SoROUTE631);

SoROUTE* SoROUTE632 = new SoROUTE();
SoROUTE632->setFromNode(QString("Run_Time"));
SoROUTE632->setFromField(QString("fraction_changed"));
SoROUTE632->setToNode(QString("lower_body_RotationInterpolator_Run"));
SoROUTE632->setToField(QString("set_fraction"));
SoNode13->addChild(*SoROUTE632);

SoROUTE* SoROUTE633 = new SoROUTE();
SoROUTE633->setFromNode(QString("Run_Time"));
SoROUTE633->setFromField(QString("fraction_changed"));
SoROUTE633->setToNode(QString("r_wrist_RotationInterpolator_Run"));
SoROUTE633->setToField(QString("set_fraction"));
SoNode13->addChild(*SoROUTE633);

SoROUTE* SoROUTE634 = new SoROUTE();
SoROUTE634->setFromNode(QString("Run_Time"));
SoROUTE634->setFromField(QString("fraction_changed"));
SoROUTE634->setToNode(QString("r_elbow_RotationInterpolator_Run"));
SoROUTE634->setToField(QString("set_fraction"));
SoNode13->addChild(*SoROUTE634);

SoROUTE* SoROUTE635 = new SoROUTE();
SoROUTE635->setFromNode(QString("Run_Time"));
SoROUTE635->setFromField(QString("fraction_changed"));
SoROUTE635->setToNode(QString("r_shoulder_RotationInterpolator_Run"));
SoROUTE635->setToField(QString("set_fraction"));
SoNode13->addChild(*SoROUTE635);

SoROUTE* SoROUTE636 = new SoROUTE();
SoROUTE636->setFromNode(QString("Run_Time"));
SoROUTE636->setFromField(QString("fraction_changed"));
SoROUTE636->setToNode(QString("l_wrist_RotationInterpolator_Run"));
SoROUTE636->setToField(QString("set_fraction"));
SoNode13->addChild(*SoROUTE636);

SoROUTE* SoROUTE637 = new SoROUTE();
SoROUTE637->setFromNode(QString("Run_Time"));
SoROUTE637->setFromField(QString("fraction_changed"));
SoROUTE637->setToNode(QString("l_elbow_RotationInterpolator_Run"));
SoROUTE637->setToField(QString("set_fraction"));
SoNode13->addChild(*SoROUTE637);

SoROUTE* SoROUTE638 = new SoROUTE();
SoROUTE638->setFromNode(QString("Run_Time"));
SoROUTE638->setFromField(QString("fraction_changed"));
SoROUTE638->setToNode(QString("l_shoulder_RotationInterpolator_Run"));
SoROUTE638->setToField(QString("set_fraction"));
SoNode13->addChild(*SoROUTE638);

SoROUTE* SoROUTE639 = new SoROUTE();
SoROUTE639->setFromNode(QString("Run_Time"));
SoROUTE639->setFromField(QString("fraction_changed"));
SoROUTE639->setToNode(QString("head_RotationInterpolator_Run"));
SoROUTE639->setToField(QString("set_fraction"));
SoNode13->addChild(*SoROUTE639);

SoROUTE* SoROUTE640 = new SoROUTE();
SoROUTE640->setFromNode(QString("Run_Time"));
SoROUTE640->setFromField(QString("fraction_changed"));
SoROUTE640->setToNode(QString("neck_RotationInterpolator_Run"));
SoROUTE640->setToField(QString("set_fraction"));
SoNode13->addChild(*SoROUTE640);

SoROUTE* SoROUTE641 = new SoROUTE();
SoROUTE641->setFromNode(QString("Run_Time"));
SoROUTE641->setFromField(QString("fraction_changed"));
SoROUTE641->setToNode(QString("upper_body_RotationInterpolator_Run"));
SoROUTE641->setToField(QString("set_fraction"));
SoNode13->addChild(*SoROUTE641);

SoROUTE* SoROUTE642 = new SoROUTE();
SoROUTE642->setFromNode(QString("Run_Time"));
SoROUTE642->setFromField(QString("fraction_changed"));
SoROUTE642->setToNode(QString("whole_body_RotationInterpolator_Run"));
SoROUTE642->setToField(QString("set_fraction"));
SoNode13->addChild(*SoROUTE642);

SoROUTE* SoROUTE643 = new SoROUTE();
SoROUTE643->setFromNode(QString("Run_Time"));
SoROUTE643->setFromField(QString("fraction_changed"));
SoROUTE643->setToNode(QString("whole_body_TranslationInterpolator_Run"));
SoROUTE643->setToField(QString("set_fraction"));
SoNode13->addChild(*SoROUTE643);

SoROUTE* SoROUTE644 = new SoROUTE();
SoROUTE644->setFromNode(QString("r_ankle_RotationInterpolator_Run"));
SoROUTE644->setFromField(QString("value_changed"));
SoROUTE644->setToNode(QString("hanim_r_ankle"));
SoROUTE644->setToField(QString("set_rotation"));
SoNode13->addChild(*SoROUTE644);

SoROUTE* SoROUTE645 = new SoROUTE();
SoROUTE645->setFromNode(QString("r_knee_RotationInterpolator_Run"));
SoROUTE645->setFromField(QString("value_changed"));
SoROUTE645->setToNode(QString("hanim_r_knee"));
SoROUTE645->setToField(QString("set_rotation"));
SoNode13->addChild(*SoROUTE645);

SoROUTE* SoROUTE646 = new SoROUTE();
SoROUTE646->setFromNode(QString("r_hip_RotationInterpolator_Run"));
SoROUTE646->setFromField(QString("value_changed"));
SoROUTE646->setToNode(QString("hanim_r_hip"));
SoROUTE646->setToField(QString("set_rotation"));
SoNode13->addChild(*SoROUTE646);

SoROUTE* SoROUTE647 = new SoROUTE();
SoROUTE647->setFromNode(QString("l_ankle_RotationInterpolator_Run"));
SoROUTE647->setFromField(QString("value_changed"));
SoROUTE647->setToNode(QString("hanim_l_ankle"));
SoROUTE647->setToField(QString("set_rotation"));
SoNode13->addChild(*SoROUTE647);

SoROUTE* SoROUTE648 = new SoROUTE();
SoROUTE648->setFromNode(QString("l_knee_RotationInterpolator_Run"));
SoROUTE648->setFromField(QString("value_changed"));
SoROUTE648->setToNode(QString("hanim_l_knee"));
SoROUTE648->setToField(QString("set_rotation"));
SoNode13->addChild(*SoROUTE648);

SoROUTE* SoROUTE649 = new SoROUTE();
SoROUTE649->setFromNode(QString("l_hip_RotationInterpolator_Run"));
SoROUTE649->setFromField(QString("value_changed"));
SoROUTE649->setToNode(QString("hanim_l_hip"));
SoROUTE649->setToField(QString("set_rotation"));
SoNode13->addChild(*SoROUTE649);

SoROUTE* SoROUTE650 = new SoROUTE();
SoROUTE650->setFromNode(QString("lower_body_RotationInterpolator_Run"));
SoROUTE650->setFromField(QString("value_changed"));
SoROUTE650->setToNode(QString("hanim_sacroiliac"));
SoROUTE650->setToField(QString("set_rotation"));
SoNode13->addChild(*SoROUTE650);

SoROUTE* SoROUTE651 = new SoROUTE();
SoROUTE651->setFromNode(QString("r_wrist_RotationInterpolator_Run"));
SoROUTE651->setFromField(QString("value_changed"));
SoROUTE651->setToNode(QString("hanim_r_wrist"));
SoROUTE651->setToField(QString("set_rotation"));
SoNode13->addChild(*SoROUTE651);

SoROUTE* SoROUTE652 = new SoROUTE();
SoROUTE652->setFromNode(QString("r_elbow_RotationInterpolator_Run"));
SoROUTE652->setFromField(QString("value_changed"));
SoROUTE652->setToNode(QString("hanim_r_elbow"));
SoROUTE652->setToField(QString("set_rotation"));
SoNode13->addChild(*SoROUTE652);

SoROUTE* SoROUTE653 = new SoROUTE();
SoROUTE653->setFromNode(QString("r_shoulder_RotationInterpolator_Run"));
SoROUTE653->setFromField(QString("value_changed"));
SoROUTE653->setToNode(QString("hanim_r_shoulder"));
SoROUTE653->setToField(QString("set_rotation"));
SoNode13->addChild(*SoROUTE653);

SoROUTE* SoROUTE654 = new SoROUTE();
SoROUTE654->setFromNode(QString("l_wrist_RotationInterpolator_Run"));
SoROUTE654->setFromField(QString("value_changed"));
SoROUTE654->setToNode(QString("hanim_l_wrist"));
SoROUTE654->setToField(QString("set_rotation"));
SoNode13->addChild(*SoROUTE654);

SoROUTE* SoROUTE655 = new SoROUTE();
SoROUTE655->setFromNode(QString("l_elbow_RotationInterpolator_Run"));
SoROUTE655->setFromField(QString("value_changed"));
SoROUTE655->setToNode(QString("hanim_l_elbow"));
SoROUTE655->setToField(QString("set_rotation"));
SoNode13->addChild(*SoROUTE655);

SoROUTE* SoROUTE656 = new SoROUTE();
SoROUTE656->setFromNode(QString("l_shoulder_RotationInterpolator_Run"));
SoROUTE656->setFromField(QString("value_changed"));
SoROUTE656->setToNode(QString("hanim_l_shoulder"));
SoROUTE656->setToField(QString("set_rotation"));
SoNode13->addChild(*SoROUTE656);

SoROUTE* SoROUTE657 = new SoROUTE();
SoROUTE657->setFromNode(QString("head_RotationInterpolator_Run"));
SoROUTE657->setFromField(QString("value_changed"));
SoROUTE657->setToNode(QString("hanim_skullbase"));
SoROUTE657->setToField(QString("set_rotation"));
SoNode13->addChild(*SoROUTE657);

SoROUTE* SoROUTE658 = new SoROUTE();
SoROUTE658->setFromNode(QString("neck_RotationInterpolator_Run"));
SoROUTE658->setFromField(QString("value_changed"));
SoROUTE658->setToNode(QString("hanim_vc4"));
SoROUTE658->setToField(QString("set_rotation"));
SoNode13->addChild(*SoROUTE658);

SoROUTE* SoROUTE659 = new SoROUTE();
SoROUTE659->setFromNode(QString("upper_body_RotationInterpolator_Run"));
SoROUTE659->setFromField(QString("value_changed"));
SoROUTE659->setToNode(QString("hanim_vl1"));
SoROUTE659->setToField(QString("set_rotation"));
SoNode13->addChild(*SoROUTE659);

SoROUTE* SoROUTE660 = new SoROUTE();
SoROUTE660->setFromNode(QString("whole_body_RotationInterpolator_Run"));
SoROUTE660->setFromField(QString("value_changed"));
SoROUTE660->setToNode(QString("hanim_humanoid_root"));
SoROUTE660->setToField(QString("set_rotation"));
SoNode13->addChild(*SoROUTE660);

SoROUTE* SoROUTE661 = new SoROUTE();
SoROUTE661->setFromNode(QString("whole_body_TranslationInterpolator_Run"));
SoROUTE661->setFromField(QString("value_changed"));
SoROUTE661->setToNode(QString("hanim_humanoid_root"));
SoROUTE661->setToField(QString("set_translation"));
SoNode13->addChild(*SoROUTE661);

SoROUTE* SoROUTE662 = new SoROUTE();
SoROUTE662->setFromNode(QString("Jump_Time"));
SoROUTE662->setFromField(QString("fraction_changed"));
SoROUTE662->setToNode(QString("r_ankle_RotationInterpolator_Jump"));
SoROUTE662->setToField(QString("set_fraction"));
SoNode13->addChild(*SoROUTE662);

SoROUTE* SoROUTE663 = new SoROUTE();
SoROUTE663->setFromNode(QString("Jump_Time"));
SoROUTE663->setFromField(QString("fraction_changed"));
SoROUTE663->setToNode(QString("r_knee_RotationInterpolator_Jump"));
SoROUTE663->setToField(QString("set_fraction"));
SoNode13->addChild(*SoROUTE663);

SoROUTE* SoROUTE664 = new SoROUTE();
SoROUTE664->setFromNode(QString("Jump_Time"));
SoROUTE664->setFromField(QString("fraction_changed"));
SoROUTE664->setToNode(QString("r_hip_RotationInterpolator_Jump"));
SoROUTE664->setToField(QString("set_fraction"));
SoNode13->addChild(*SoROUTE664);

SoROUTE* SoROUTE665 = new SoROUTE();
SoROUTE665->setFromNode(QString("Jump_Time"));
SoROUTE665->setFromField(QString("fraction_changed"));
SoROUTE665->setToNode(QString("l_ankle_RotationInterpolator_Jump"));
SoROUTE665->setToField(QString("set_fraction"));
SoNode13->addChild(*SoROUTE665);

SoROUTE* SoROUTE666 = new SoROUTE();
SoROUTE666->setFromNode(QString("Jump_Time"));
SoROUTE666->setFromField(QString("fraction_changed"));
SoROUTE666->setToNode(QString("l_knee_RotationInterpolator_Jump"));
SoROUTE666->setToField(QString("set_fraction"));
SoNode13->addChild(*SoROUTE666);

SoROUTE* SoROUTE667 = new SoROUTE();
SoROUTE667->setFromNode(QString("Jump_Time"));
SoROUTE667->setFromField(QString("fraction_changed"));
SoROUTE667->setToNode(QString("l_hip_RotationInterpolator_Jump"));
SoROUTE667->setToField(QString("set_fraction"));
SoNode13->addChild(*SoROUTE667);

SoROUTE* SoROUTE668 = new SoROUTE();
SoROUTE668->setFromNode(QString("Jump_Time"));
SoROUTE668->setFromField(QString("fraction_changed"));
SoROUTE668->setToNode(QString("lower_body_RotationInterpolator_Jump"));
SoROUTE668->setToField(QString("set_fraction"));
SoNode13->addChild(*SoROUTE668);

SoROUTE* SoROUTE669 = new SoROUTE();
SoROUTE669->setFromNode(QString("Jump_Time"));
SoROUTE669->setFromField(QString("fraction_changed"));
SoROUTE669->setToNode(QString("r_wrist_RotationInterpolator_Jump"));
SoROUTE669->setToField(QString("set_fraction"));
SoNode13->addChild(*SoROUTE669);

SoROUTE* SoROUTE670 = new SoROUTE();
SoROUTE670->setFromNode(QString("Jump_Time"));
SoROUTE670->setFromField(QString("fraction_changed"));
SoROUTE670->setToNode(QString("r_elbow_RotationInterpolator_Jump"));
SoROUTE670->setToField(QString("set_fraction"));
SoNode13->addChild(*SoROUTE670);

SoROUTE* SoROUTE671 = new SoROUTE();
SoROUTE671->setFromNode(QString("Jump_Time"));
SoROUTE671->setFromField(QString("fraction_changed"));
SoROUTE671->setToNode(QString("r_shoulder_RotationInterpolator_Jump"));
SoROUTE671->setToField(QString("set_fraction"));
SoNode13->addChild(*SoROUTE671);

SoROUTE* SoROUTE672 = new SoROUTE();
SoROUTE672->setFromNode(QString("Jump_Time"));
SoROUTE672->setFromField(QString("fraction_changed"));
SoROUTE672->setToNode(QString("l_wrist_RotationInterpolator_Jump"));
SoROUTE672->setToField(QString("set_fraction"));
SoNode13->addChild(*SoROUTE672);

SoROUTE* SoROUTE673 = new SoROUTE();
SoROUTE673->setFromNode(QString("Jump_Time"));
SoROUTE673->setFromField(QString("fraction_changed"));
SoROUTE673->setToNode(QString("l_elbow_RotationInterpolator_Jump"));
SoROUTE673->setToField(QString("set_fraction"));
SoNode13->addChild(*SoROUTE673);

SoROUTE* SoROUTE674 = new SoROUTE();
SoROUTE674->setFromNode(QString("Jump_Time"));
SoROUTE674->setFromField(QString("fraction_changed"));
SoROUTE674->setToNode(QString("l_shoulder_RotationInterpolator_Jump"));
SoROUTE674->setToField(QString("set_fraction"));
SoNode13->addChild(*SoROUTE674);

SoROUTE* SoROUTE675 = new SoROUTE();
SoROUTE675->setFromNode(QString("Jump_Time"));
SoROUTE675->setFromField(QString("fraction_changed"));
SoROUTE675->setToNode(QString("head_RotationInterpolator_Jump"));
SoROUTE675->setToField(QString("set_fraction"));
SoNode13->addChild(*SoROUTE675);

SoROUTE* SoROUTE676 = new SoROUTE();
SoROUTE676->setFromNode(QString("Jump_Time"));
SoROUTE676->setFromField(QString("fraction_changed"));
SoROUTE676->setToNode(QString("neck_RotationInterpolator_Jump"));
SoROUTE676->setToField(QString("set_fraction"));
SoNode13->addChild(*SoROUTE676);

SoROUTE* SoROUTE677 = new SoROUTE();
SoROUTE677->setFromNode(QString("Jump_Time"));
SoROUTE677->setFromField(QString("fraction_changed"));
SoROUTE677->setToNode(QString("upper_body_RotationInterpolator_Jump"));
SoROUTE677->setToField(QString("set_fraction"));
SoNode13->addChild(*SoROUTE677);

SoROUTE* SoROUTE678 = new SoROUTE();
SoROUTE678->setFromNode(QString("Jump_Time"));
SoROUTE678->setFromField(QString("fraction_changed"));
SoROUTE678->setToNode(QString("whole_body_RotationInterpolator_Jump"));
SoROUTE678->setToField(QString("set_fraction"));
SoNode13->addChild(*SoROUTE678);

SoROUTE* SoROUTE679 = new SoROUTE();
SoROUTE679->setFromNode(QString("Jump_Time"));
SoROUTE679->setFromField(QString("fraction_changed"));
SoROUTE679->setToNode(QString("whole_body_TranslationInterpolator_Jump"));
SoROUTE679->setToField(QString("set_fraction"));
SoNode13->addChild(*SoROUTE679);

SoROUTE* SoROUTE680 = new SoROUTE();
SoROUTE680->setFromNode(QString("r_ankle_RotationInterpolator_Jump"));
SoROUTE680->setFromField(QString("value_changed"));
SoROUTE680->setToNode(QString("hanim_r_ankle"));
SoROUTE680->setToField(QString("set_rotation"));
SoNode13->addChild(*SoROUTE680);

SoROUTE* SoROUTE681 = new SoROUTE();
SoROUTE681->setFromNode(QString("r_knee_RotationInterpolator_Jump"));
SoROUTE681->setFromField(QString("value_changed"));
SoROUTE681->setToNode(QString("hanim_r_knee"));
SoROUTE681->setToField(QString("set_rotation"));
SoNode13->addChild(*SoROUTE681);

SoROUTE* SoROUTE682 = new SoROUTE();
SoROUTE682->setFromNode(QString("r_hip_RotationInterpolator_Jump"));
SoROUTE682->setFromField(QString("value_changed"));
SoROUTE682->setToNode(QString("hanim_r_hip"));
SoROUTE682->setToField(QString("set_rotation"));
SoNode13->addChild(*SoROUTE682);

SoROUTE* SoROUTE683 = new SoROUTE();
SoROUTE683->setFromNode(QString("l_ankle_RotationInterpolator_Jump"));
SoROUTE683->setFromField(QString("value_changed"));
SoROUTE683->setToNode(QString("hanim_l_ankle"));
SoROUTE683->setToField(QString("set_rotation"));
SoNode13->addChild(*SoROUTE683);

SoROUTE* SoROUTE684 = new SoROUTE();
SoROUTE684->setFromNode(QString("l_knee_RotationInterpolator_Jump"));
SoROUTE684->setFromField(QString("value_changed"));
SoROUTE684->setToNode(QString("hanim_l_knee"));
SoROUTE684->setToField(QString("set_rotation"));
SoNode13->addChild(*SoROUTE684);

SoROUTE* SoROUTE685 = new SoROUTE();
SoROUTE685->setFromNode(QString("l_hip_RotationInterpolator_Jump"));
SoROUTE685->setFromField(QString("value_changed"));
SoROUTE685->setToNode(QString("hanim_l_hip"));
SoROUTE685->setToField(QString("set_rotation"));
SoNode13->addChild(*SoROUTE685);

SoROUTE* SoROUTE686 = new SoROUTE();
SoROUTE686->setFromNode(QString("lower_body_RotationInterpolator_Jump"));
SoROUTE686->setFromField(QString("value_changed"));
SoROUTE686->setToNode(QString("hanim_sacroiliac"));
SoROUTE686->setToField(QString("set_rotation"));
SoNode13->addChild(*SoROUTE686);

SoROUTE* SoROUTE687 = new SoROUTE();
SoROUTE687->setFromNode(QString("r_wrist_RotationInterpolator_Jump"));
SoROUTE687->setFromField(QString("value_changed"));
SoROUTE687->setToNode(QString("hanim_r_wrist"));
SoROUTE687->setToField(QString("set_rotation"));
SoNode13->addChild(*SoROUTE687);

SoROUTE* SoROUTE688 = new SoROUTE();
SoROUTE688->setFromNode(QString("r_elbow_RotationInterpolator_Jump"));
SoROUTE688->setFromField(QString("value_changed"));
SoROUTE688->setToNode(QString("hanim_r_elbow"));
SoROUTE688->setToField(QString("set_rotation"));
SoNode13->addChild(*SoROUTE688);

SoROUTE* SoROUTE689 = new SoROUTE();
SoROUTE689->setFromNode(QString("r_shoulder_RotationInterpolator_Jump"));
SoROUTE689->setFromField(QString("value_changed"));
SoROUTE689->setToNode(QString("hanim_r_shoulder"));
SoROUTE689->setToField(QString("set_rotation"));
SoNode13->addChild(*SoROUTE689);

SoROUTE* SoROUTE690 = new SoROUTE();
SoROUTE690->setFromNode(QString("l_wrist_RotationInterpolator_Jump"));
SoROUTE690->setFromField(QString("value_changed"));
SoROUTE690->setToNode(QString("hanim_l_wrist"));
SoROUTE690->setToField(QString("set_rotation"));
SoNode13->addChild(*SoROUTE690);

SoROUTE* SoROUTE691 = new SoROUTE();
SoROUTE691->setFromNode(QString("l_elbow_RotationInterpolator_Jump"));
SoROUTE691->setFromField(QString("value_changed"));
SoROUTE691->setToNode(QString("hanim_l_elbow"));
SoROUTE691->setToField(QString("set_rotation"));
SoNode13->addChild(*SoROUTE691);

SoROUTE* SoROUTE692 = new SoROUTE();
SoROUTE692->setFromNode(QString("l_shoulder_RotationInterpolator_Jump"));
SoROUTE692->setFromField(QString("value_changed"));
SoROUTE692->setToNode(QString("hanim_l_shoulder"));
SoROUTE692->setToField(QString("set_rotation"));
SoNode13->addChild(*SoROUTE692);

SoROUTE* SoROUTE693 = new SoROUTE();
SoROUTE693->setFromNode(QString("head_RotationInterpolator_Jump"));
SoROUTE693->setFromField(QString("value_changed"));
SoROUTE693->setToNode(QString("hanim_skullbase"));
SoROUTE693->setToField(QString("set_rotation"));
SoNode13->addChild(*SoROUTE693);

SoROUTE* SoROUTE694 = new SoROUTE();
SoROUTE694->setFromNode(QString("neck_RotationInterpolator_Jump"));
SoROUTE694->setFromField(QString("value_changed"));
SoROUTE694->setToNode(QString("hanim_vc4"));
SoROUTE694->setToField(QString("set_rotation"));
SoNode13->addChild(*SoROUTE694);

SoROUTE* SoROUTE695 = new SoROUTE();
SoROUTE695->setFromNode(QString("upper_body_RotationInterpolator_Jump"));
SoROUTE695->setFromField(QString("value_changed"));
SoROUTE695->setToNode(QString("hanim_vl1"));
SoROUTE695->setToField(QString("set_rotation"));
SoNode13->addChild(*SoROUTE695);

SoROUTE* SoROUTE696 = new SoROUTE();
SoROUTE696->setFromNode(QString("whole_body_RotationInterpolator_Jump"));
SoROUTE696->setFromField(QString("value_changed"));
SoROUTE696->setToNode(QString("hanim_humanoid_root"));
SoROUTE696->setToField(QString("set_rotation"));
SoNode13->addChild(*SoROUTE696);

SoROUTE* SoROUTE697 = new SoROUTE();
SoROUTE697->setFromNode(QString("whole_body_TranslationInterpolator_Jump"));
SoROUTE697->setFromField(QString("value_changed"));
SoROUTE697->setToNode(QString("hanim_humanoid_root"));
SoROUTE697->setToField(QString("set_translation"));
SoNode13->addChild(*SoROUTE697);

SoSceneManager0->setSceneGraph(*SoNode13);

return 0;
}
