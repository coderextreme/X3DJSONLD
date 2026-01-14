
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
Someta2->setContent(QString("HAnimPrototypes.x3d"));
Sohead1->addMeta(*Someta2);

Someta* Someta3 = new Someta();
Someta3->setName(QString("description"));
Someta3->setContent(QString("Example implementation of X3D Humanoid Animation (HAnim) nodes using X3D prototypes."));
Sohead1->addMeta(*Someta3);

Someta* Someta4 = new Someta();
Someta4->setName(QString("warning"));
Someta4->setContent(QString("These are developmental examples that can assist X3D player implementations and support interoperability. They are not intended for author use in regular X3D scenes."));
Sohead1->addMeta(*Someta4);

Someta* Someta5 = new Someta();
Someta5->setName(QString("warning"));
Someta5->setContent(QString("Developer note: names for these HAnim Prototypes need to be corrected if used internally in an X3D player implementation (e.g. Joint to HAnimJoint)."));
Sohead1->addMeta(*Someta5);

Someta* Someta6 = new Someta();
Someta6->setName(QString("warning"));
Someta6->setContent(QString("Need support for skin"));
Sohead1->addMeta(*Someta6);

Someta* Someta7 = new Someta();
Someta7->setName(QString("creator"));
Someta7->setContent(QString("Ozan APAYDIN, Don Brutzman"));
Sohead1->addMeta(*Someta7);

Someta* Someta8 = new Someta();
Someta8->setName(QString("translator"));
Someta8->setContent(QString("Ozan APAYDIN, Don Brutzman"));
Sohead1->addMeta(*Someta8);

Someta* Someta9 = new Someta();
Someta9->setName(QString("created"));
Someta9->setContent(QString("15 November 2001"));
Sohead1->addMeta(*Someta9);

Someta* Someta10 = new Someta();
Someta10->setName(QString("modified"));
Someta10->setContent(QString("Mon, 15 Sep 2025 05:20:09 GMT"));
Sohead1->addMeta(*Someta10);

Someta* Someta11 = new Someta();
Someta11->setName(QString("TODO"));
Someta11->setContent(QString("upgrade to match support requirements for HAnim 2.2"));
Sohead1->addMeta(*Someta11);

Someta* Someta12 = new Someta();
Someta12->setName(QString("reference"));
Someta12->setContent(QString("https://www.web3d.org/files/specifications/19774/V1.0/HAnim/HAnim.html"));
Sohead1->addMeta(*Someta12);

Someta* Someta13 = new Someta();
Someta13->setName(QString("reference"));
Someta13->setContent(QString("https://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/hanim.html"));
Sohead1->addMeta(*Someta13);

Someta* Someta14 = new Someta();
Someta14->setName(QString("reference"));
Someta14->setContent(QString("http://HAnim.org/Models/HAnim2001/boxman/boxman.wrl"));
Sohead1->addMeta(*Someta14);

Someta* Someta15 = new Someta();
Someta15->setName(QString("reference"));
Someta15->setContent(QString("http://HAnim.org/Specifications/HAnim2001"));
Sohead1->addMeta(*Someta15);

Someta* Someta16 = new Someta();
Someta16->setName(QString("reference"));
Someta16->setContent(QString("http://www.HAnim.org"));
Sohead1->addMeta(*Someta16);

Someta* Someta17 = new Someta();
Someta17->setName(QString("reference"));
Someta17->setContent(QString("http://HAnim.org/Models"));
Sohead1->addMeta(*Someta17);

Someta* Someta18 = new Someta();
Someta18->setName(QString("reference"));
Someta18->setContent(QString("http://HAnim.org/Specifications"));
Sohead1->addMeta(*Someta18);

Someta* Someta19 = new Someta();
Someta19->setName(QString("reference"));
Someta19->setContent(QString("InterchangableActorsViaDynamicRoutingPrototypes.x3d"));
Sohead1->addMeta(*Someta19);

Someta* Someta20 = new Someta();
Someta20->setName(QString("identifier"));
Someta20->setContent(QString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/HAnimPrototypes.x3d"));
Sohead1->addMeta(*Someta20);

SoSceneManager0->setHead(*Sohead1);

SoNode* SoNode21 = new SoNode();
SoProtoDeclare* SoProtoDeclare22 = new SoProtoDeclare();
SoProtoDeclare22->setName(QString("Humanoid1_1"));
SoProtoDeclare22->setAppinfo(QString("The Humanoid node serves as overall container for the Joint Segment Site and Viewpoint nodes which define the skeleton geometry and landmarks of the humanoid figure. Additionally the node provides a means for defining information about the author copyright and usage restrictions of the model."));
SoProtoDeclare22->setDocumentation(QString("http://HAnim.org/Specifications/HAnim2001/part1/Humanoid.html"));
SoProtoInterface* SoProtoInterface23 = new SoProtoInterface();
Sofield* Sofield24 = new Sofield();
Sofield24->setAccessType(QString("inputOutput"));
Sofield24->setType(QString("SFString"));
Sofield24->setName(QString("name"));
SoProtoInterface23->addChild(*Sofield24);

Sofield* Sofield25 = new Sofield();
Sofield25->setAccessType(QString("inputOutput"));
Sofield25->setType(QString("SFString"));
Sofield25->setName(QString("version"));
Sofield25->setValue(QString("1.1"));
Sofield25->setAppinfo(QString("legal values: 1.1 or 2.0"));
SoProtoInterface23->addChild(*Sofield25);

Sofield* Sofield26 = new Sofield();
Sofield26->setAccessType(QString("inputOutput"));
Sofield26->setType(QString("SFString"));
Sofield26->setName(QString("humanoidVersion"));
Sofield26->setAppinfo(QString("Version of the humanoid being modeled. Hint: HAnim version 2.0"));
SoProtoInterface23->addChild(*Sofield26);

Sofield* Sofield27 = new Sofield();
Sofield27->setAccessType(QString("inputOutput"));
Sofield27->setType(QString("MFString"));
Sofield27->setName(QString("info"));
SoProtoInterface23->addChild(*Sofield27);

Sofield* Sofield28 = new Sofield();
Sofield28->setAccessType(QString("inputOutput"));
Sofield28->setType(QString("SFVec3f"));
Sofield28->setName(QString("translation"));
SoProtoInterface23->addChild(*Sofield28);

Sofield* Sofield29 = new Sofield();
Sofield29->setAccessType(QString("inputOutput"));
Sofield29->setType(QString("SFRotation"));
Sofield29->setName(QString("rotation"));
SoProtoInterface23->addChild(*Sofield29);

Sofield* Sofield30 = new Sofield();
Sofield30->setAccessType(QString("inputOutput"));
Sofield30->setType(QString("SFVec3f"));
Sofield30->setName(QString("center"));
SoProtoInterface23->addChild(*Sofield30);

Sofield* Sofield31 = new Sofield();
Sofield31->setAccessType(QString("inputOutput"));
Sofield31->setType(QString("SFVec3f"));
Sofield31->setName(QString("scale"));
Sofield31->setValue(QString("1 1 1"));
SoProtoInterface23->addChild(*Sofield31);

Sofield* Sofield32 = new Sofield();
Sofield32->setAccessType(QString("inputOutput"));
Sofield32->setType(QString("SFRotation"));
Sofield32->setName(QString("scaleOrientation"));
SoProtoInterface23->addChild(*Sofield32);

Sofield* Sofield33 = new Sofield();
Sofield33->setAccessType(QString("initializeOnly"));
Sofield33->setType(QString("SFVec3f"));
Sofield33->setName(QString("bboxCenter"));
SoProtoInterface23->addChild(*Sofield33);

Sofield* Sofield34 = new Sofield();
Sofield34->setAccessType(QString("initializeOnly"));
Sofield34->setType(QString("SFVec3f"));
Sofield34->setName(QString("bboxSize"));
Sofield34->setValue(QString("-1 -1 -1"));
SoProtoInterface23->addChild(*Sofield34);

Sofield* Sofield35 = new Sofield();
Sofield35->setAccessType(QString("inputOutput"));
Sofield35->setType(QString("MFNode"));
Sofield35->setName(QString("humanoidBody"));
Sofield35->setAppinfo(QString("HAnim 1.1 field container for body head. Hint: replaced by 2.0 skeleton."));
Sofield35->setDocumentation(QString("http://HAnim.org/Specifications/HAnim1.1/#humanoid"));
SoProtoInterface23->addChild(*Sofield35);

Sofield* Sofield36 = new Sofield();
Sofield36->setAccessType(QString("inputOutput"));
Sofield36->setType(QString("MFNode"));
Sofield36->setName(QString("skeleton"));
Sofield36->setAppinfo(QString("HAnim 2.0 field container for body geometry Hint: replaces 1.1 humanoidBody"));
Sofield36->setDocumentation(QString("http://HAnim.org/Specifications/HAnim2001/part1/Humanoid.html"));
SoProtoInterface23->addChild(*Sofield36);

Sofield* Sofield37 = new Sofield();
Sofield37->setAccessType(QString("inputOutput"));
Sofield37->setType(QString("MFNode"));
Sofield37->setName(QString("joints"));
Sofield37->setAppinfo(QString("Container field for Joint nodes"));
SoProtoInterface23->addChild(*Sofield37);

Sofield* Sofield38 = new Sofield();
Sofield38->setAccessType(QString("inputOutput"));
Sofield38->setType(QString("MFNode"));
Sofield38->setName(QString("segments"));
Sofield38->setAppinfo(QString("Container field for Segment nodes"));
SoProtoInterface23->addChild(*Sofield38);

Sofield* Sofield39 = new Sofield();
Sofield39->setAccessType(QString("inputOutput"));
Sofield39->setType(QString("MFNode"));
Sofield39->setName(QString("sites"));
Sofield39->setAppinfo(QString("Container field for Site nodes"));
SoProtoInterface23->addChild(*Sofield39);

Sofield* Sofield40 = new Sofield();
Sofield40->setAccessType(QString("inputOutput"));
Sofield40->setType(QString("MFNode"));
Sofield40->setName(QString("viewpoints"));
Sofield40->setAppinfo(QString("Container field for Viewpoint nodes"));
SoProtoInterface23->addChild(*Sofield40);

Sofield* Sofield41 = new Sofield();
Sofield41->setAccessType(QString("inputOutput"));
Sofield41->setType(QString("SFNode"));
Sofield41->setName(QString("skinCoord"));
Sofield41->setAppinfo(QString("Hint: HAnim version 2.0"));
SoProtoInterface23->addChild(*Sofield41);

Sofield* Sofield42 = new Sofield();
Sofield42->setAccessType(QString("inputOutput"));
Sofield42->setType(QString("SFNode"));
Sofield42->setName(QString("skinNormal"));
Sofield42->setAppinfo(QString("Hint: HAnim version 2.0"));
SoProtoInterface23->addChild(*Sofield42);

SoProtoDeclare22->addChild(*SoProtoInterface23);

SoProtoBody* SoProtoBody43 = new SoProtoBody();
SoTransform* SoTransform44 = new SoTransform();
SoTransform44->setDEF(QString("HumanoidTransform"));
SoGroup* SoGroup45 = new SoGroup();
SoGroup45->setDEF(QString("HumanoidGroup1"));
SoIS* SoIS46 = new SoIS();
Soconnect* Soconnect47 = new Soconnect();
Soconnect47->setNodeField(QString("children"));
Soconnect47->setProtoField(QString("humanoidBody"));
SoIS46->addChild(*Soconnect47);

SoGroup45->addChild(*SoIS46);

SoTransform44->addChild(*SoGroup45);

SoGroup* SoGroup48 = new SoGroup();
SoGroup48->setDEF(QString("HumanoidGroup2"));
SoIS* SoIS49 = new SoIS();
Soconnect* Soconnect50 = new Soconnect();
Soconnect50->setNodeField(QString("children"));
Soconnect50->setProtoField(QString("skeleton"));
SoIS49->addChild(*Soconnect50);

SoGroup48->addChild(*SoIS49);

SoTransform44->addChild(*SoGroup48);

SoGroup* SoGroup51 = new SoGroup();
SoGroup51->setDEF(QString("HumanoidGroup3"));
SoIS* SoIS52 = new SoIS();
Soconnect* Soconnect53 = new Soconnect();
Soconnect53->setNodeField(QString("children"));
Soconnect53->setProtoField(QString("viewpoints"));
SoIS52->addChild(*Soconnect53);

SoGroup51->addChild(*SoIS52);

SoTransform44->addChild(*SoGroup51);

SoIS* SoIS54 = new SoIS();
Soconnect* Soconnect55 = new Soconnect();
Soconnect55->setNodeField(QString("translation"));
Soconnect55->setProtoField(QString("translation"));
SoIS54->addChild(*Soconnect55);

Soconnect* Soconnect56 = new Soconnect();
Soconnect56->setNodeField(QString("rotation"));
Soconnect56->setProtoField(QString("rotation"));
SoIS54->addChild(*Soconnect56);

Soconnect* Soconnect57 = new Soconnect();
Soconnect57->setNodeField(QString("scale"));
Soconnect57->setProtoField(QString("scale"));
SoIS54->addChild(*Soconnect57);

Soconnect* Soconnect58 = new Soconnect();
Soconnect58->setNodeField(QString("scaleOrientation"));
Soconnect58->setProtoField(QString("scaleOrientation"));
SoIS54->addChild(*Soconnect58);

Soconnect* Soconnect59 = new Soconnect();
Soconnect59->setNodeField(QString("center"));
Soconnect59->setProtoField(QString("center"));
SoIS54->addChild(*Soconnect59);

Soconnect* Soconnect60 = new Soconnect();
Soconnect60->setNodeField(QString("bboxSize"));
Soconnect60->setProtoField(QString("bboxSize"));
SoIS54->addChild(*Soconnect60);

Soconnect* Soconnect61 = new Soconnect();
Soconnect61->setNodeField(QString("bboxCenter"));
Soconnect61->setProtoField(QString("bboxCenter"));
SoIS54->addChild(*Soconnect61);

SoTransform44->addChild(*SoIS54);

SoProtoBody43->addChild(*SoTransform44);

SoProtoDeclare22->addChild(*SoProtoBody43);

SoNode21->addChild(*SoProtoDeclare22);

SoProtoDeclare* SoProtoDeclare62 = new SoProtoDeclare();
SoProtoDeclare62->setName(QString("Joint"));
SoProtoDeclare62->setAppinfo(QString("The Joint node is used as a building block to describe the articulations of the humanoid figure. Each articulation of the humanoid figure is represented by a Joint node each of which is organized into a hierarchy that describes the overall skeleton of the humanoid."));
SoProtoDeclare62->setDocumentation(QString("http://HAnim.org/Specifications/HAnim2001/part1/Joint.html"));
SoProtoInterface* SoProtoInterface63 = new SoProtoInterface();
Sofield* Sofield64 = new Sofield();
Sofield64->setAccessType(QString("inputOutput"));
Sofield64->setType(QString("SFString"));
Sofield64->setName(QString("name"));
SoProtoInterface63->addChild(*Sofield64);

Sofield* Sofield65 = new Sofield();
Sofield65->setAccessType(QString("inputOutput"));
Sofield65->setType(QString("MFFloat"));
Sofield65->setName(QString("ulimit"));
SoProtoInterface63->addChild(*Sofield65);

Sofield* Sofield66 = new Sofield();
Sofield66->setAccessType(QString("inputOutput"));
Sofield66->setType(QString("MFFloat"));
Sofield66->setName(QString("llimit"));
SoProtoInterface63->addChild(*Sofield66);

Sofield* Sofield67 = new Sofield();
Sofield67->setAccessType(QString("inputOutput"));
Sofield67->setType(QString("SFRotation"));
Sofield67->setName(QString("limitOrientation"));
SoProtoInterface63->addChild(*Sofield67);

Sofield* Sofield68 = new Sofield();
Sofield68->setAccessType(QString("inputOutput"));
Sofield68->setType(QString("MFInt32"));
Sofield68->setName(QString("skinCoordIndex"));
SoProtoInterface63->addChild(*Sofield68);

Sofield* Sofield69 = new Sofield();
Sofield69->setAccessType(QString("inputOutput"));
Sofield69->setType(QString("MFFloat"));
Sofield69->setName(QString("skinCoordWeight"));
SoProtoInterface63->addChild(*Sofield69);

Sofield* Sofield70 = new Sofield();
Sofield70->setAccessType(QString("inputOutput"));
Sofield70->setType(QString("MFFloat"));
Sofield70->setName(QString("stiffness"));
Sofield70->setValue(QString("0 0 0"));
SoProtoInterface63->addChild(*Sofield70);

Sofield* Sofield71 = new Sofield();
Sofield71->setAccessType(QString("inputOutput"));
Sofield71->setType(QString("SFVec3f"));
Sofield71->setName(QString("translation"));
SoProtoInterface63->addChild(*Sofield71);

Sofield* Sofield72 = new Sofield();
Sofield72->setAccessType(QString("inputOutput"));
Sofield72->setType(QString("SFRotation"));
Sofield72->setName(QString("rotation"));
SoProtoInterface63->addChild(*Sofield72);

Sofield* Sofield73 = new Sofield();
Sofield73->setAccessType(QString("inputOutput"));
Sofield73->setType(QString("SFVec3f"));
Sofield73->setName(QString("scale"));
Sofield73->setValue(QString("1 1 1"));
SoProtoInterface63->addChild(*Sofield73);

Sofield* Sofield74 = new Sofield();
Sofield74->setAccessType(QString("inputOutput"));
Sofield74->setType(QString("SFRotation"));
Sofield74->setName(QString("scaleOrientation"));
SoProtoInterface63->addChild(*Sofield74);

Sofield* Sofield75 = new Sofield();
Sofield75->setAccessType(QString("inputOutput"));
Sofield75->setType(QString("SFVec3f"));
Sofield75->setName(QString("center"));
SoProtoInterface63->addChild(*Sofield75);

Sofield* Sofield76 = new Sofield();
Sofield76->setAccessType(QString("initializeOnly"));
Sofield76->setType(QString("SFVec3f"));
Sofield76->setName(QString("bboxCenter"));
SoProtoInterface63->addChild(*Sofield76);

Sofield* Sofield77 = new Sofield();
Sofield77->setAccessType(QString("initializeOnly"));
Sofield77->setType(QString("SFVec3f"));
Sofield77->setName(QString("bboxSize"));
Sofield77->setValue(QString("-1 -1 -1"));
SoProtoInterface63->addChild(*Sofield77);

Sofield* Sofield78 = new Sofield();
Sofield78->setAccessType(QString("inputOutput"));
Sofield78->setType(QString("MFNode"));
Sofield78->setName(QString("children"));
SoProtoInterface63->addChild(*Sofield78);

Sofield* Sofield79 = new Sofield();
Sofield79->setAccessType(QString("inputOnly"));
Sofield79->setType(QString("MFNode"));
Sofield79->setName(QString("addChildren"));
SoProtoInterface63->addChild(*Sofield79);

Sofield* Sofield80 = new Sofield();
Sofield80->setAccessType(QString("inputOnly"));
Sofield80->setType(QString("MFNode"));
Sofield80->setName(QString("removeChildren"));
SoProtoInterface63->addChild(*Sofield80);

SoProtoDeclare62->addChild(*SoProtoInterface63);

SoProtoBody* SoProtoBody81 = new SoProtoBody();
SoTransform* SoTransform82 = new SoTransform();
SoTransform82->setDEF(QString("JointTransform"));
SoIS* SoIS83 = new SoIS();
Soconnect* Soconnect84 = new Soconnect();
Soconnect84->setNodeField(QString("translation"));
Soconnect84->setProtoField(QString("translation"));
SoIS83->addChild(*Soconnect84);

Soconnect* Soconnect85 = new Soconnect();
Soconnect85->setNodeField(QString("rotation"));
Soconnect85->setProtoField(QString("rotation"));
SoIS83->addChild(*Soconnect85);

Soconnect* Soconnect86 = new Soconnect();
Soconnect86->setNodeField(QString("scale"));
Soconnect86->setProtoField(QString("scale"));
SoIS83->addChild(*Soconnect86);

Soconnect* Soconnect87 = new Soconnect();
Soconnect87->setNodeField(QString("scaleOrientation"));
Soconnect87->setProtoField(QString("scaleOrientation"));
SoIS83->addChild(*Soconnect87);

Soconnect* Soconnect88 = new Soconnect();
Soconnect88->setNodeField(QString("center"));
Soconnect88->setProtoField(QString("center"));
SoIS83->addChild(*Soconnect88);

Soconnect* Soconnect89 = new Soconnect();
Soconnect89->setNodeField(QString("bboxSize"));
Soconnect89->setProtoField(QString("bboxSize"));
SoIS83->addChild(*Soconnect89);

Soconnect* Soconnect90 = new Soconnect();
Soconnect90->setNodeField(QString("bboxCenter"));
Soconnect90->setProtoField(QString("bboxCenter"));
SoIS83->addChild(*Soconnect90);

Soconnect* Soconnect91 = new Soconnect();
Soconnect91->setNodeField(QString("addChildren"));
Soconnect91->setProtoField(QString("addChildren"));
SoIS83->addChild(*Soconnect91);

Soconnect* Soconnect92 = new Soconnect();
Soconnect92->setNodeField(QString("removeChildren"));
Soconnect92->setProtoField(QString("removeChildren"));
SoIS83->addChild(*Soconnect92);

Soconnect* Soconnect93 = new Soconnect();
Soconnect93->setNodeField(QString("children"));
Soconnect93->setProtoField(QString("children"));
SoIS83->addChild(*Soconnect93);

SoTransform82->addChild(*SoIS83);

SoProtoBody81->addChild(*SoTransform82);

SoProtoDeclare62->addChild(*SoProtoBody81);

SoNode21->addChild(*SoProtoDeclare62);

SoProtoDeclare* SoProtoDeclare94 = new SoProtoDeclare();
SoProtoDeclare94->setName(QString("Segment"));
SoProtoDeclare94->setAppinfo(QString("The Segment node is used describe the attributes of the physical links between the joints of the humanoid figure. Each body part (pelvis thigh calf etc.) of the humanoid figure is represented by a Segment node."));
SoProtoDeclare94->setDocumentation(QString("http://HAnim.org/Specifications/HAnim2001/part1/Segment.html"));
SoProtoInterface* SoProtoInterface95 = new SoProtoInterface();
Sofield* Sofield96 = new Sofield();
Sofield96->setAccessType(QString("inputOutput"));
Sofield96->setType(QString("SFString"));
Sofield96->setName(QString("name"));
SoProtoInterface95->addChild(*Sofield96);

Sofield* Sofield97 = new Sofield();
Sofield97->setAccessType(QString("inputOutput"));
Sofield97->setType(QString("SFFloat"));
Sofield97->setName(QString("mass"));
SoProtoInterface95->addChild(*Sofield97);

Sofield* Sofield98 = new Sofield();
Sofield98->setAccessType(QString("inputOutput"));
Sofield98->setType(QString("SFVec3f"));
Sofield98->setName(QString("centerOfMass"));
SoProtoInterface95->addChild(*Sofield98);

Sofield* Sofield99 = new Sofield();
Sofield99->setAccessType(QString("inputOutput"));
Sofield99->setType(QString("MFFloat"));
Sofield99->setName(QString("momentsOfInertia"));
Sofield99->setValue(QString("0 0 0 0 0 0 0 0 0"));
SoProtoInterface95->addChild(*Sofield99);

Sofield* Sofield100 = new Sofield();
Sofield100->setAccessType(QString("initializeOnly"));
Sofield100->setType(QString("SFVec3f"));
Sofield100->setName(QString("bboxCenter"));
SoProtoInterface95->addChild(*Sofield100);

Sofield* Sofield101 = new Sofield();
Sofield101->setAccessType(QString("initializeOnly"));
Sofield101->setType(QString("SFVec3f"));
Sofield101->setName(QString("bboxSize"));
Sofield101->setValue(QString("-1 -1 -1"));
SoProtoInterface95->addChild(*Sofield101);

Sofield* Sofield102 = new Sofield();
Sofield102->setAccessType(QString("inputOutput"));
Sofield102->setType(QString("MFNode"));
Sofield102->setName(QString("children"));
SoProtoInterface95->addChild(*Sofield102);

Sofield* Sofield103 = new Sofield();
Sofield103->setAccessType(QString("inputOnly"));
Sofield103->setType(QString("MFNode"));
Sofield103->setName(QString("addChildren"));
SoProtoInterface95->addChild(*Sofield103);

Sofield* Sofield104 = new Sofield();
Sofield104->setAccessType(QString("inputOnly"));
Sofield104->setType(QString("MFNode"));
Sofield104->setName(QString("removeChildren"));
SoProtoInterface95->addChild(*Sofield104);

Sofield* Sofield105 = new Sofield();
Sofield105->setAccessType(QString("inputOutput"));
Sofield105->setType(QString("SFNode"));
Sofield105->setName(QString("coord"));
Sofield105->setAppinfo(QString("contains Coordinate nodes"));
SoProtoInterface95->addChild(*Sofield105);

Sofield* Sofield106 = new Sofield();
Sofield106->setAccessType(QString("inputOutput"));
Sofield106->setType(QString("MFNode"));
Sofield106->setName(QString("displacers"));
Sofield106->setAppinfo(QString("contains Displacer nodes"));
SoProtoInterface95->addChild(*Sofield106);

SoProtoDeclare94->addChild(*SoProtoInterface95);

SoProtoBody* SoProtoBody107 = new SoProtoBody();
SoGroup* SoGroup108 = new SoGroup();
SoGroup108->setDEF(QString("SegmentGroup"));
SoIS* SoIS109 = new SoIS();
Soconnect* Soconnect110 = new Soconnect();
Soconnect110->setNodeField(QString("bboxSize"));
Soconnect110->setProtoField(QString("bboxSize"));
SoIS109->addChild(*Soconnect110);

Soconnect* Soconnect111 = new Soconnect();
Soconnect111->setNodeField(QString("bboxCenter"));
Soconnect111->setProtoField(QString("bboxCenter"));
SoIS109->addChild(*Soconnect111);

Soconnect* Soconnect112 = new Soconnect();
Soconnect112->setNodeField(QString("addChildren"));
Soconnect112->setProtoField(QString("addChildren"));
SoIS109->addChild(*Soconnect112);

Soconnect* Soconnect113 = new Soconnect();
Soconnect113->setNodeField(QString("removeChildren"));
Soconnect113->setProtoField(QString("removeChildren"));
SoIS109->addChild(*Soconnect113);

Soconnect* Soconnect114 = new Soconnect();
Soconnect114->setNodeField(QString("children"));
Soconnect114->setProtoField(QString("children"));
SoIS109->addChild(*Soconnect114);

SoGroup108->addChild(*SoIS109);

SoProtoBody107->addChild(*SoGroup108);

SoProtoDeclare94->addChild(*SoProtoBody107);

SoNode21->addChild(*SoProtoDeclare94);

SoProtoDeclare* SoProtoDeclare115 = new SoProtoDeclare();
SoProtoDeclare115->setName(QString("Site"));
SoProtoDeclare115->setAppinfo(QString("The Site node can be used for three purposes: (a) to define an \"end effector\" location which can be used by an inverse kinematics system (b) to define an attachment point for accessories such as jewelry and clothing and (c) to define a location for a virtual camera in the reference frame of a Segment node (such as a view \"through the eyes\" of the humanoid for use in multi-user worlds)."));
SoProtoDeclare115->setDocumentation(QString("http://HAnim.org/Specifications/HAnim2001/part1/Site.html"));
SoProtoInterface* SoProtoInterface116 = new SoProtoInterface();
Sofield* Sofield117 = new Sofield();
Sofield117->setAccessType(QString("inputOutput"));
Sofield117->setType(QString("SFString"));
Sofield117->setName(QString("name"));
SoProtoInterface116->addChild(*Sofield117);

Sofield* Sofield118 = new Sofield();
Sofield118->setAccessType(QString("inputOutput"));
Sofield118->setType(QString("SFVec3f"));
Sofield118->setName(QString("translation"));
SoProtoInterface116->addChild(*Sofield118);

Sofield* Sofield119 = new Sofield();
Sofield119->setAccessType(QString("inputOutput"));
Sofield119->setType(QString("SFRotation"));
Sofield119->setName(QString("rotation"));
SoProtoInterface116->addChild(*Sofield119);

Sofield* Sofield120 = new Sofield();
Sofield120->setAccessType(QString("inputOutput"));
Sofield120->setType(QString("SFVec3f"));
Sofield120->setName(QString("scale"));
Sofield120->setValue(QString("1 1 1"));
SoProtoInterface116->addChild(*Sofield120);

Sofield* Sofield121 = new Sofield();
Sofield121->setAccessType(QString("inputOutput"));
Sofield121->setType(QString("SFRotation"));
Sofield121->setName(QString("scaleOrientation"));
SoProtoInterface116->addChild(*Sofield121);

Sofield* Sofield122 = new Sofield();
Sofield122->setAccessType(QString("inputOutput"));
Sofield122->setType(QString("SFVec3f"));
Sofield122->setName(QString("center"));
SoProtoInterface116->addChild(*Sofield122);

Sofield* Sofield123 = new Sofield();
Sofield123->setAccessType(QString("initializeOnly"));
Sofield123->setType(QString("SFVec3f"));
Sofield123->setName(QString("bboxCenter"));
SoProtoInterface116->addChild(*Sofield123);

Sofield* Sofield124 = new Sofield();
Sofield124->setAccessType(QString("initializeOnly"));
Sofield124->setType(QString("SFVec3f"));
Sofield124->setName(QString("bboxSize"));
Sofield124->setValue(QString("-1 -1 -1"));
SoProtoInterface116->addChild(*Sofield124);

Sofield* Sofield125 = new Sofield();
Sofield125->setAccessType(QString("inputOutput"));
Sofield125->setType(QString("MFNode"));
Sofield125->setName(QString("children"));
SoProtoInterface116->addChild(*Sofield125);

Sofield* Sofield126 = new Sofield();
Sofield126->setAccessType(QString("inputOnly"));
Sofield126->setType(QString("MFNode"));
Sofield126->setName(QString("addChildren"));
SoProtoInterface116->addChild(*Sofield126);

Sofield* Sofield127 = new Sofield();
Sofield127->setAccessType(QString("inputOnly"));
Sofield127->setType(QString("MFNode"));
Sofield127->setName(QString("removeChildren"));
SoProtoInterface116->addChild(*Sofield127);

SoProtoDeclare115->addChild(*SoProtoInterface116);

SoProtoBody* SoProtoBody128 = new SoProtoBody();
SoTransform* SoTransform129 = new SoTransform();
SoTransform129->setDEF(QString("SiteTransform"));
SoIS* SoIS130 = new SoIS();
Soconnect* Soconnect131 = new Soconnect();
Soconnect131->setNodeField(QString("translation"));
Soconnect131->setProtoField(QString("translation"));
SoIS130->addChild(*Soconnect131);

Soconnect* Soconnect132 = new Soconnect();
Soconnect132->setNodeField(QString("rotation"));
Soconnect132->setProtoField(QString("rotation"));
SoIS130->addChild(*Soconnect132);

Soconnect* Soconnect133 = new Soconnect();
Soconnect133->setNodeField(QString("scale"));
Soconnect133->setProtoField(QString("scale"));
SoIS130->addChild(*Soconnect133);

Soconnect* Soconnect134 = new Soconnect();
Soconnect134->setNodeField(QString("scaleOrientation"));
Soconnect134->setProtoField(QString("scaleOrientation"));
SoIS130->addChild(*Soconnect134);

Soconnect* Soconnect135 = new Soconnect();
Soconnect135->setNodeField(QString("center"));
Soconnect135->setProtoField(QString("center"));
SoIS130->addChild(*Soconnect135);

Soconnect* Soconnect136 = new Soconnect();
Soconnect136->setNodeField(QString("bboxSize"));
Soconnect136->setProtoField(QString("bboxSize"));
SoIS130->addChild(*Soconnect136);

Soconnect* Soconnect137 = new Soconnect();
Soconnect137->setNodeField(QString("bboxCenter"));
Soconnect137->setProtoField(QString("bboxCenter"));
SoIS130->addChild(*Soconnect137);

Soconnect* Soconnect138 = new Soconnect();
Soconnect138->setNodeField(QString("addChildren"));
Soconnect138->setProtoField(QString("addChildren"));
SoIS130->addChild(*Soconnect138);

Soconnect* Soconnect139 = new Soconnect();
Soconnect139->setNodeField(QString("removeChildren"));
Soconnect139->setProtoField(QString("removeChildren"));
SoIS130->addChild(*Soconnect139);

Soconnect* Soconnect140 = new Soconnect();
Soconnect140->setNodeField(QString("children"));
Soconnect140->setProtoField(QString("children"));
SoIS130->addChild(*Soconnect140);

SoTransform129->addChild(*SoIS130);

SoProtoBody128->addChild(*SoTransform129);

SoProtoDeclare115->addChild(*SoProtoBody128);

SoNode21->addChild(*SoProtoDeclare115);

SoProtoDeclare* SoProtoDeclare141 = new SoProtoDeclare();
SoProtoDeclare141->setName(QString("Displacer"));
SoProtoDeclare141->setAppinfo(QString("A Displacer can be used in three different ways: (a) identify the vertices corresponding to a particular feature on a Segment (b) represent a particular muscular action which displaces the vertices in various directions (linearly or radially) and (c) represent a complete configuration of the vertices in a Segment."));
SoProtoDeclare141->setDocumentation(QString("http://HAnim.org/Specifications/HAnim2001/part1/Displacer.html"));
SoProtoInterface* SoProtoInterface142 = new SoProtoInterface();
Sofield* Sofield143 = new Sofield();
Sofield143->setAccessType(QString("inputOutput"));
Sofield143->setType(QString("SFString"));
Sofield143->setName(QString("name"));
SoProtoInterface142->addChild(*Sofield143);

Sofield* Sofield144 = new Sofield();
Sofield144->setAccessType(QString("inputOutput"));
Sofield144->setType(QString("MFInt32"));
Sofield144->setName(QString("coordIndex"));
SoProtoInterface142->addChild(*Sofield144);

Sofield* Sofield145 = new Sofield();
Sofield145->setAccessType(QString("inputOutput"));
Sofield145->setType(QString("MFVec3f"));
Sofield145->setName(QString("displacements"));
SoProtoInterface142->addChild(*Sofield145);

SoProtoDeclare141->addChild(*SoProtoInterface142);

SoProtoBody* SoProtoBody146 = new SoProtoBody();
SoWorldInfo* SoWorldInfo147 = new SoWorldInfo();
SoWorldInfo147->setInfo(new QString[]{QString("null body node")}, 1);
SoProtoBody146->addChild(*SoWorldInfo147);

SoProtoDeclare141->addChild(*SoProtoBody146);

SoNode21->addChild(*SoProtoDeclare141);

SoShape* SoShape148 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance149 = new SoVRMLAppearance();
SoMaterial* SoMaterial150 = new SoMaterial();
SoMaterial150->setAmbientIntensity(0.25);
SoMaterial150->setDiffuseColor(new float[]{0.795918,0.505869,0.093315});
SoMaterial150->setSpecularColor(new float[]{0.923469,0.428866,0.006369});
SoMaterial150->setShininess(0.39);
SoVRMLAppearance149->addChild(*SoMaterial150);

SoShape148->addChild(*SoVRMLAppearance149);

SoText* SoText151 = new SoText();
SoText151->setString(new QString[]{QString("Humanoid Animation"), QString("(HAnim) prototype"), QString("implementations")}, 3);
SoFontStyle* SoFontStyle152 = new SoFontStyle();
SoFontStyle152->setJustify(new QString[]{QString("MIDDLE"), QString("MIDDLE")}, 2);
SoText151->setFontStyle(*SoFontStyle152);

SoShape148->setGeometry(*SoText151);

SoNode21->addChild(*SoShape148);

SoSceneManager0->setSceneGraph(*SoNode21);

return 0;
}
