
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
Socomponent2->setName(QString("Scripting"));
Socomponent2->setLevel(1);
Sohead1->addChild(*Socomponent2);

Someta* Someta3 = new Someta();
Someta3->setName(QString("creator"));
Someta3->setContent(QString("John W Carlson"));
Sohead1->addMeta(*Someta3);

Someta* Someta4 = new Someta();
Someta4->setName(QString("created"));
Someta4->setContent(QString("December 13 2015"));
Sohead1->addMeta(*Someta4);

Someta* Someta5 = new Someta();
Someta5->setName(QString("modified"));
Someta5->setContent(QString("July 14 2025"));
Sohead1->addMeta(*Someta5);

Someta* Someta6 = new Someta();
Someta6->setName(QString("title"));
Someta6->setContent(QString("fors2.x3d"));
Sohead1->addMeta(*Someta6);

Someta* Someta7 = new Someta();
Someta7->setName(QString("identifier"));
Someta7->setContent(QString("https://coderextreme.net/X3DJSONLD/src/main/data/fors2.x3d"));
Sohead1->addMeta(*Someta7);

Someta* Someta8 = new Someta();
Someta8->setName(QString("description"));
Someta8->setContent(QString("beginnings of a force directed graph in 3D"));
Sohead1->addMeta(*Someta8);

Someta* Someta9 = new Someta();
Someta9->setName(QString("generator"));
Someta9->setContent(QString("Vim, X3D-Edit, https://savage.nps.edu/X3D-Edit"));
Sohead1->addMeta(*Someta9);

SoSceneManager0->setHead(*Sohead1);

SoNode* SoNode10 = new SoNode();
SoProtoDeclare* SoProtoDeclare11 = new SoProtoDeclare();
SoProtoDeclare11->setName(QString("node"));
SoProtoInterface* SoProtoInterface12 = new SoProtoInterface();
Sofield* Sofield13 = new Sofield();
Sofield13->setName(QString("position"));
Sofield13->setAccessType(QString("inputOutput"));
Sofield13->setType(QString("SFVec3f"));
Sofield13->setValue(QString("0 0 0"));
SoProtoInterface12->addChild(*Sofield13);

SoProtoDeclare11->addChild(*SoProtoInterface12);

SoProtoBody* SoProtoBody14 = new SoProtoBody();
SoGroup* SoGroup15 = new SoGroup();
SoTransform* SoTransform16 = new SoTransform();
SoTransform16->setDEF(QString("transform"));
SoIS* SoIS17 = new SoIS();
Soconnect* Soconnect18 = new Soconnect();
Soconnect18->setNodeField(QString("translation"));
Soconnect18->setProtoField(QString("position"));
SoIS17->addChild(*Soconnect18);

SoTransform16->addChild(*SoIS17);

SoShape* SoShape19 = new SoShape();
//comment before Sphere
//comment after Sphere
//comment after Appearance
SoSphere* SoSphere20 = new SoSphere();
SoShape19->setGeometry(*SoSphere20);

SoVRMLAppearance* SoVRMLAppearance21 = new SoVRMLAppearance();
//comment before Material
//comment after Material
SoMaterial* SoMaterial22 = new SoMaterial();
SoMaterial22->setDiffuseColor(new float[]{1.0,0.0,0.0});
SoVRMLAppearance21->addChild(*SoMaterial22);

SoShape19->addChild(*SoVRMLAppearance21);

SoTransform16->addChild(*SoShape19);

SoGroup15->addChild(*SoTransform16);

SoPositionInterpolator* SoPositionInterpolator23 = new SoPositionInterpolator();
SoPositionInterpolator23->setDEF(QString("NodePosition"));
SoPositionInterpolator23->setKey(new float[]{0.0,1.0}, 2);
SoPositionInterpolator23->setKeyValue(new float[]{0.0,0.0,0.0,0.0,5.0,0.0}, 6);
SoGroup15->addChild(*SoPositionInterpolator23);

SoScript* SoScript24 = new SoScript();
SoScript24->setDEF(QString("MoveBall"));
Sofield* Sofield25 = new Sofield();
Sofield25->setName(QString("translation"));
Sofield25->setAccessType(QString("inputOutput"));
Sofield25->setType(QString("SFVec3f"));
Sofield25->setValue(QString("50 50 0"));
SoScript24->addChild(*Sofield25);

Sofield* Sofield26 = new Sofield();
Sofield26->setName(QString("old"));
Sofield26->setAccessType(QString("inputOutput"));
Sofield26->setType(QString("SFVec3f"));
Sofield26->setValue(QString("0 0 0"));
SoScript24->addChild(*Sofield26);

Sofield* Sofield27 = new Sofield();
Sofield27->setName(QString("set_cycle"));
Sofield27->setAccessType(QString("inputOnly"));
Sofield27->setType(QString("SFTime"));
SoScript24->addChild(*Sofield27);

Sofield* Sofield28 = new Sofield();
Sofield28->setName(QString("keyValue"));
Sofield28->setAccessType(QString("outputOnly"));
Sofield28->setType(QString("MFVec3f"));
SoScript24->addChild(*Sofield28);


//SoScript24->setSourceCode(QString("ecmascript:")+
//_T("			function set_cycle(value) {")+
//_T("				old = translation;")+
//_T("				translation = new SFVec3f(Math.random()*100-50, Math.random()*100-50, Math.random()*100-50);")+
//_T("				keyValue = new MFVec3f(old, translation);")+
//_T("			}"));
SoGroup15->addChild(*SoScript24);

SoTimeSensor* SoTimeSensor29 = new SoTimeSensor();
SoTimeSensor29->setDEF(QString("nodeClock"));
SoTimeSensor29->setCycleInterval(3);
SoTimeSensor29->setLoop(true);
SoGroup15->addChild(*SoTimeSensor29);

SoROUTE* SoROUTE30 = new SoROUTE();
SoROUTE30->setFromNode(QString("nodeClock"));
SoROUTE30->setFromField(QString("cycleTime"));
SoROUTE30->setToNode(QString("MoveBall"));
SoROUTE30->setToField(QString("set_cycle"));
SoGroup15->addChild(*SoROUTE30);

SoROUTE* SoROUTE31 = new SoROUTE();
SoROUTE31->setFromNode(QString("nodeClock"));
SoROUTE31->setFromField(QString("fraction_changed"));
SoROUTE31->setToNode(QString("NodePosition"));
SoROUTE31->setToField(QString("set_fraction"));
SoGroup15->addChild(*SoROUTE31);

SoROUTE* SoROUTE32 = new SoROUTE();
SoROUTE32->setFromNode(QString("MoveBall"));
SoROUTE32->setFromField(QString("keyValue"));
SoROUTE32->setToNode(QString("NodePosition"));
SoROUTE32->setToField(QString("keyValue"));
SoGroup15->addChild(*SoROUTE32);

SoROUTE* SoROUTE33 = new SoROUTE();
SoROUTE33->setFromNode(QString("NodePosition"));
SoROUTE33->setFromField(QString("value_changed"));
SoROUTE33->setToNode(QString("transform"));
SoROUTE33->setToField(QString("set_translation"));
SoGroup15->addChild(*SoROUTE33);

SoProtoBody14->addChild(*SoGroup15);

SoProtoDeclare11->addChild(*SoProtoBody14);

SoNode10->addChild(*SoProtoDeclare11);

SoProtoDeclare* SoProtoDeclare34 = new SoProtoDeclare();
SoProtoDeclare34->setName(QString("cyl"));
SoProtoInterface* SoProtoInterface35 = new SoProtoInterface();
Sofield* Sofield36 = new Sofield();
Sofield36->setName(QString("positionA"));
Sofield36->setAccessType(QString("inputOutput"));
Sofield36->setType(QString("SFVec3f"));
SoProtoInterface35->addChild(*Sofield36);

Sofield* Sofield37 = new Sofield();
Sofield37->setName(QString("positionB"));
Sofield37->setAccessType(QString("inputOutput"));
Sofield37->setType(QString("SFVec3f"));
SoProtoInterface35->addChild(*Sofield37);

SoProtoDeclare34->addChild(*SoProtoInterface35);

SoProtoBody* SoProtoBody38 = new SoProtoBody();
SoGroup* SoGroup39 = new SoGroup();
SoShape* SoShape40 = new SoShape();
SoExtrusion* SoExtrusion41 = new SoExtrusion();
SoExtrusion41->setDEF(QString("extrusion"));
SoExtrusion41->setCreaseAngle(0.785);
SoExtrusion41->setCrossSection(new float[]{1.0,0.0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0.0,-1.0,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1.0,0.0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0.0,1.0,0.38,0.92,0.71,0.71,0.92,0.38,1.0,0.0}, 34);
SoExtrusion41->setSpine(new float[]{0.0,-50.0,0.0,0.0,0.0,0.0,0.0,50.0,0.0}, 9);
SoShape40->setGeometry(*SoExtrusion41);

SoVRMLAppearance* SoVRMLAppearance42 = new SoVRMLAppearance();
SoMaterial* SoMaterial43 = new SoMaterial();
SoMaterial43->setDiffuseColor(new float[]{0.0,1.0,0.0});
SoVRMLAppearance42->addChild(*SoMaterial43);

SoShape40->addChild(*SoVRMLAppearance42);

SoGroup39->addChild(*SoShape40);

SoScript* SoScript44 = new SoScript();
SoScript44->setDEF(QString("MoveCylinder"));
Sofield* Sofield45 = new Sofield();
Sofield45->setName(QString("spine"));
Sofield45->setAccessType(QString("inputOutput"));
Sofield45->setType(QString("MFVec3f"));
Sofield45->setValue(QString("0 -50 0 0 0 0 0 50 0"));
SoScript44->addChild(*Sofield45);

Sofield* Sofield46 = new Sofield();
Sofield46->setName(QString("endA"));
Sofield46->setAccessType(QString("inputOutput"));
Sofield46->setType(QString("SFVec3f"));
Sofield46->setValue(QString("0 0 0"));
SoScript44->addChild(*Sofield46);

Sofield* Sofield47 = new Sofield();
Sofield47->setName(QString("endB"));
Sofield47->setAccessType(QString("inputOutput"));
Sofield47->setType(QString("SFVec3f"));
Sofield47->setValue(QString("50 50 50"));
SoScript44->addChild(*Sofield47);

SoIS* SoIS48 = new SoIS();
Soconnect* Soconnect49 = new Soconnect();
Soconnect49->setNodeField(QString("endA"));
Soconnect49->setProtoField(QString("positionA"));
SoIS48->addChild(*Soconnect49);

Soconnect* Soconnect50 = new Soconnect();
Soconnect50->setNodeField(QString("endB"));
Soconnect50->setProtoField(QString("positionB"));
SoIS48->addChild(*Soconnect50);

SoScript44->addChild(*SoIS48);


//SoScript44->setSourceCode(QString("ecmascript:")+
//_T("			function set_endA(value) {")+
//_T("				spine = new MFVec3f(value, spine[1]);")+
//_T("			}")+
//_T("			function set_endB(value) {")+
//_T("				spine = new MFVec3f(spine[0], value);")+
//_T("			}"));
SoGroup39->addChild(*SoScript44);

SoROUTE* SoROUTE51 = new SoROUTE();
SoROUTE51->setFromNode(QString("MoveCylinder"));
SoROUTE51->setFromField(QString("spine"));
SoROUTE51->setToNode(QString("extrusion"));
SoROUTE51->setToField(QString("set_spine"));
SoGroup39->addChild(*SoROUTE51);

SoProtoBody38->addChild(*SoGroup39);

SoProtoDeclare34->addChild(*SoProtoBody38);

SoNode10->addChild(*SoProtoDeclare34);

SoTransform* SoTransform52 = new SoTransform();
SoTransform52->setScale(new float[]{0.1,0.1,0.1});
SoProtoInstance* SoProtoInstance53 = new SoProtoInstance();
SoProtoInstance53->setName(QString("node"));
SoProtoInstance53->setDEF(QString("nodeA"));
SoField* SoField54 = new SoField();
SoField54->setName(QString("position"));
SoField54->setValue(QString("-50 -50 -50"));
SoProtoInstance53->addChild(*SoField54);

SoTransform52->addChild(*SoProtoInstance53);

SoProtoInstance* SoProtoInstance55 = new SoProtoInstance();
SoProtoInstance55->setName(QString("node"));
SoProtoInstance55->setDEF(QString("nodeB"));
SoField* SoField56 = new SoField();
SoField56->setName(QString("position"));
SoField56->setValue(QString("50 50 50"));
SoProtoInstance55->addChild(*SoField56);

SoTransform52->addChild(*SoProtoInstance55);

SoProtoInstance* SoProtoInstance57 = new SoProtoInstance();
SoProtoInstance57->setName(QString("cyl"));
SoProtoInstance57->setDEF(QString("linkA"));
SoTransform52->addChild(*SoProtoInstance57);

SoNode10->addChild(*SoTransform52);

SoROUTE* SoROUTE58 = new SoROUTE();
SoROUTE58->setFromNode(QString("nodeA"));
SoROUTE58->setFromField(QString("position"));
SoROUTE58->setToNode(QString("linkA"));
SoROUTE58->setToField(QString("positionA"));
SoNode10->addChild(*SoROUTE58);

SoROUTE* SoROUTE59 = new SoROUTE();
SoROUTE59->setFromNode(QString("nodeB"));
SoROUTE59->setFromField(QString("position"));
SoROUTE59->setToNode(QString("linkA"));
SoROUTE59->setToField(QString("positionB"));
SoNode10->addChild(*SoROUTE59);

SoSceneManager0->setSceneGraph(*SoNode10);

return 0;
}
