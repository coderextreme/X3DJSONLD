
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
SoSceneManager0->setVersion(QString("3.3"));
Sohead* Sohead1 = new Sohead();
Someta* Someta2 = new Someta();
Someta2->setName(QString("creator"));
Someta2->setContent(QString("John W Carlson"));
Sohead1->addMeta(*Someta2);

Someta* Someta3 = new Someta();
Someta3->setName(QString("created"));
Someta3->setContent(QString("December 13 2015"));
Sohead1->addMeta(*Someta3);

Someta* Someta4 = new Someta();
Someta4->setName(QString("modified"));
Someta4->setContent(QString("April 18 2017"));
Sohead1->addMeta(*Someta4);

Someta* Someta5 = new Someta();
Someta5->setName(QString("title"));
Someta5->setContent(QString("fors2.x3d"));
Sohead1->addMeta(*Someta5);

Someta* Someta6 = new Someta();
Someta6->setName(QString("identifier"));
Someta6->setContent(QString("https://coderextreme.net/X3DJSONLD/src/main/personal/fors2.x3d"));
Sohead1->addMeta(*Someta6);

Someta* Someta7 = new Someta();
Someta7->setName(QString("description"));
Someta7->setContent(QString("beginnings of a force directed graph in 3D"));
Sohead1->addMeta(*Someta7);

Someta* Someta8 = new Someta();
Someta8->setName(QString("generator"));
Someta8->setContent(QString("Vim, X3D-Edit, https://savage.nps.edu/X3D-Edit"));
Sohead1->addMeta(*Someta8);

SoSceneManager0->setHead(*Sohead1);

SoNode* SoNode9 = new SoNode();
SoProtoDeclare* SoProtoDeclare10 = new SoProtoDeclare();
SoProtoDeclare10->setName(QString("node"));
SoProtoInterface* SoProtoInterface11 = new SoProtoInterface();
Sofield* Sofield12 = new Sofield();
Sofield12->setName(QString("position"));
Sofield12->setAccessType(QString("inputOutput"));
Sofield12->setType(QString("SFVec3f"));
Sofield12->setValue(QString("0 0 0"));
SoProtoInterface11->addChild(*Sofield12);

SoProtoDeclare10->addChild(*SoProtoInterface11);

SoProtoBody* SoProtoBody13 = new SoProtoBody();
SoTransform* SoTransform14 = new SoTransform();
SoTransform14->setDEF(QString("transform"));
SoIS* SoIS15 = new SoIS();
Soconnect* Soconnect16 = new Soconnect();
Soconnect16->setNodeField(QString("translation"));
Soconnect16->setProtoField(QString("position"));
SoIS15->addChild(*Soconnect16);

SoTransform14->addChild(*SoIS15);

SoShape* SoShape17 = new SoShape();
//comment before Sphere
//comment after Sphere
//comment after Appearance
SoSphere* SoSphere18 = new SoSphere();
SoShape17->setGeometry(*SoSphere18);

SoVRMLAppearance* SoVRMLAppearance19 = new SoVRMLAppearance();
//comment before Material
//comment after Material
SoMaterial* SoMaterial20 = new SoMaterial();
SoMaterial20->setDiffuseColor(new float[]{1.0,0.0,0.0});
SoVRMLAppearance19->addChild(*SoMaterial20);

SoShape17->addChild(*SoVRMLAppearance19);

SoTransform14->addChild(*SoShape17);

SoProtoBody13->addChild(*SoTransform14);

SoPositionInterpolator* SoPositionInterpolator21 = new SoPositionInterpolator();
SoPositionInterpolator21->setDEF(QString("NodePosition"));
SoPositionInterpolator21->setKey(new float[]{0.0,1.0}, 2);
SoPositionInterpolator21->setKeyValue(new float[]{0.0,0.0,0.0,0.0,5.0,0.0}, 6);
SoProtoBody13->addChild(*SoPositionInterpolator21);

SoScript* SoScript22 = new SoScript();
SoScript22->setDEF(QString("MoveBall"));
Sofield* Sofield23 = new Sofield();
Sofield23->setName(QString("translation"));
Sofield23->setAccessType(QString("inputOutput"));
Sofield23->setType(QString("SFVec3f"));
Sofield23->setValue(QString("50 50 0"));
SoScript22->addChild(*Sofield23);

Sofield* Sofield24 = new Sofield();
Sofield24->setName(QString("old"));
Sofield24->setAccessType(QString("inputOutput"));
Sofield24->setType(QString("SFVec3f"));
Sofield24->setValue(QString("0 0 0"));
SoScript22->addChild(*Sofield24);

Sofield* Sofield25 = new Sofield();
Sofield25->setName(QString("set_cycle"));
Sofield25->setAccessType(QString("inputOnly"));
Sofield25->setType(QString("SFTime"));
SoScript22->addChild(*Sofield25);

Sofield* Sofield26 = new Sofield();
Sofield26->setName(QString("keyValue"));
Sofield26->setAccessType(QString("outputOnly"));
Sofield26->setType(QString("MFVec3f"));
SoScript22->addChild(*Sofield26);


//SoScript22->setSourceCode(QString("ecmascript:")+
//_T("					function set_cycle(value) {")+
//_T("                                                old = translation;")+
//_T("						translation = new SFVec3f(Math.random()*100-50, Math.random()*100-50, Math.random()*100-50);")+
//_T("                                                keyValue = new MFVec3f([old, translation]);")+
//_T("						// Browser.println(translation);")+
//_T("					}"));
SoProtoBody13->addChild(*SoScript22);

SoTimeSensor* SoTimeSensor27 = new SoTimeSensor();
SoTimeSensor27->setDEF(QString("nodeClock"));
SoTimeSensor27->setCycleInterval(3);
SoTimeSensor27->setLoop(true);
SoProtoBody13->addChild(*SoTimeSensor27);

SoROUTE* SoROUTE28 = new SoROUTE();
SoROUTE28->setFromNode(QString("nodeClock"));
SoROUTE28->setFromField(QString("cycleTime"));
SoROUTE28->setToNode(QString("MoveBall"));
SoROUTE28->setToField(QString("set_cycle"));
SoProtoBody13->addChild(*SoROUTE28);

SoROUTE* SoROUTE29 = new SoROUTE();
SoROUTE29->setFromNode(QString("nodeClock"));
SoROUTE29->setFromField(QString("fraction_changed"));
SoROUTE29->setToNode(QString("NodePosition"));
SoROUTE29->setToField(QString("set_fraction"));
SoProtoBody13->addChild(*SoROUTE29);

SoROUTE* SoROUTE30 = new SoROUTE();
SoROUTE30->setFromNode(QString("MoveBall"));
SoROUTE30->setFromField(QString("keyValue"));
SoROUTE30->setToNode(QString("NodePosition"));
SoROUTE30->setToField(QString("keyValue"));
SoProtoBody13->addChild(*SoROUTE30);

SoROUTE* SoROUTE31 = new SoROUTE();
SoROUTE31->setFromNode(QString("NodePosition"));
SoROUTE31->setFromField(QString("value_changed"));
SoROUTE31->setToNode(QString("transform"));
SoROUTE31->setToField(QString("set_translation"));
SoProtoBody13->addChild(*SoROUTE31);

SoProtoDeclare10->addChild(*SoProtoBody13);

SoNode9->addChild(*SoProtoDeclare10);

SoProtoDeclare* SoProtoDeclare32 = new SoProtoDeclare();
SoProtoDeclare32->setName(QString("cyl"));
SoProtoInterface* SoProtoInterface33 = new SoProtoInterface();
Sofield* Sofield34 = new Sofield();
Sofield34->setName(QString("positionA"));
Sofield34->setAccessType(QString("inputOnly"));
Sofield34->setType(QString("SFVec3f"));
SoProtoInterface33->addChild(*Sofield34);

Sofield* Sofield35 = new Sofield();
Sofield35->setName(QString("positionB"));
Sofield35->setAccessType(QString("inputOnly"));
Sofield35->setType(QString("SFVec3f"));
SoProtoInterface33->addChild(*Sofield35);

SoProtoDeclare32->addChild(*SoProtoInterface33);

SoProtoBody* SoProtoBody36 = new SoProtoBody();
SoShape* SoShape37 = new SoShape();
SoExtrusion* SoExtrusion38 = new SoExtrusion();
SoExtrusion38->setDEF(QString("extrusion"));
SoExtrusion38->setCreaseAngle(0.785);
SoExtrusion38->setCrossSection(new float[]{1.0,0.0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0.0,-1.0,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1.0,0.0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0.0,1.0,0.38,0.92,0.71,0.71,0.92,0.38,1.0,0.0}, 34);
SoExtrusion38->setSpine(new float[]{0.0,-50.0,0.0,0.0,0.0,0.0,0.0,50.0,0.0}, 9);
SoShape37->setGeometry(*SoExtrusion38);

SoVRMLAppearance* SoVRMLAppearance39 = new SoVRMLAppearance();
SoMaterial* SoMaterial40 = new SoMaterial();
SoMaterial40->setDiffuseColor(new float[]{0.0,1.0,0.0});
SoVRMLAppearance39->addChild(*SoMaterial40);

SoShape37->addChild(*SoVRMLAppearance39);

SoProtoBody36->addChild(*SoShape37);

SoScript* SoScript41 = new SoScript();
SoScript41->setDEF(QString("MoveCylinder"));
Sofield* Sofield42 = new Sofield();
Sofield42->setName(QString("spine"));
Sofield42->setAccessType(QString("inputOutput"));
Sofield42->setType(QString("MFVec3f"));
Sofield42->setValue(QString("0 -50 0 0 0 0 0 50 0"));
SoScript41->addChild(*Sofield42);

Sofield* Sofield43 = new Sofield();
Sofield43->setName(QString("set_endA"));
Sofield43->setAccessType(QString("inputOnly"));
Sofield43->setType(QString("SFVec3f"));
SoScript41->addChild(*Sofield43);

Sofield* Sofield44 = new Sofield();
Sofield44->setName(QString("set_endB"));
Sofield44->setAccessType(QString("inputOnly"));
Sofield44->setType(QString("SFVec3f"));
SoScript41->addChild(*Sofield44);

SoIS* SoIS45 = new SoIS();
Soconnect* Soconnect46 = new Soconnect();
Soconnect46->setNodeField(QString("set_endA"));
Soconnect46->setProtoField(QString("positionA"));
SoIS45->addChild(*Soconnect46);

Soconnect* Soconnect47 = new Soconnect();
Soconnect47->setNodeField(QString("set_endB"));
Soconnect47->setProtoField(QString("positionB"));
SoIS45->addChild(*Soconnect47);

SoScript41->addChild(*SoIS45);


//SoScript41->setSourceCode(QString("ecmascript:")+
//_T("                function set_endA(value) {")+
//_T("		    if (typeof spine === \"undefined\") {")+
//_T("		        spine = new MFVec3f([value, value]);")+
//_T("		    } else {")+
//_T("		        spine = new MFVec3f([value, spine[1]]);")+
//_T("		    }")+
//_T("                }")+
//_T("                function set_endB(value) {")+
//_T("		    if (typeof spine === \"undefined\") {")+
//_T("		        spine = new MFVec3f([value, value]);")+
//_T("		    } else {")+
//_T("		        spine = new MFVec3f([spine[0], value]);")+
//_T("		    }")+
//_T("                }")+
//_T("                function set_spine(value) {")+
//_T("		    Browser.print('\\n'+'\"');")+
//_T("                    spine = value;")+
//_T("                }"));
SoProtoBody36->addChild(*SoScript41);

SoROUTE* SoROUTE48 = new SoROUTE();
SoROUTE48->setFromNode(QString("MoveCylinder"));
SoROUTE48->setFromField(QString("spine"));
SoROUTE48->setToNode(QString("extrusion"));
SoROUTE48->setToField(QString("set_spine"));
SoProtoBody36->addChild(*SoROUTE48);

SoProtoDeclare32->addChild(*SoProtoBody36);

SoNode9->addChild(*SoProtoDeclare32);

SoTransform* SoTransform49 = new SoTransform();
SoTransform49->setScale(new float[]{0.1,0.1,0.1});
SoProtoInstance* SoProtoInstance50 = new SoProtoInstance();
SoProtoInstance50->setName(QString("node"));
SoProtoInstance50->setDEF(QString("nodeA"));
SoField* SoField51 = new SoField();
SoField51->setName(QString("position"));
SoField51->setValue(QString("-50 -50 -50"));
SoProtoInstance50->addChild(*SoField51);

SoTransform49->addChild(*SoProtoInstance50);

SoProtoInstance* SoProtoInstance52 = new SoProtoInstance();
SoProtoInstance52->setName(QString("node"));
SoProtoInstance52->setDEF(QString("nodeB"));
SoField* SoField53 = new SoField();
SoField53->setName(QString("position"));
SoField53->setValue(QString("50 50 50"));
SoProtoInstance52->addChild(*SoField53);

SoTransform49->addChild(*SoProtoInstance52);

SoProtoInstance* SoProtoInstance54 = new SoProtoInstance();
SoProtoInstance54->setName(QString("cyl"));
SoProtoInstance54->setDEF(QString("linkA"));
SoField* SoField55 = new SoField();
SoField55->setName(QString("positionA"));
SoField55->setValue(QString("0 0 0"));
SoProtoInstance54->addChild(*SoField55);

SoField* SoField56 = new SoField();
SoField56->setName(QString("positionB"));
SoField56->setValue(QString("50 50 50"));
SoProtoInstance54->addChild(*SoField56);

SoTransform49->addChild(*SoProtoInstance54);

SoNode9->addChild(*SoTransform49);

SoROUTE* SoROUTE57 = new SoROUTE();
SoROUTE57->setFromNode(QString("nodeA"));
SoROUTE57->setFromField(QString("position"));
SoROUTE57->setToNode(QString("linkA"));
SoROUTE57->setToField(QString("positionA"));
SoNode9->addChild(*SoROUTE57);

SoROUTE* SoROUTE58 = new SoROUTE();
SoROUTE58->setFromNode(QString("nodeB"));
SoROUTE58->setFromField(QString("position"));
SoROUTE58->setToNode(QString("linkA"));
SoROUTE58->setToField(QString("positionB"));
SoNode9->addChild(*SoROUTE58);

SoSceneManager0->setSceneGraph(*SoNode9);

return 0;
}
