
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
Someta2->setName(QString("creator"));
Someta2->setContent(QString("John W Carlson"));
Sohead1->addMeta(*Someta2);

Someta* Someta3 = new Someta();
Someta3->setName(QString("created"));
Someta3->setContent(QString("December 13 2015"));
Sohead1->addMeta(*Someta3);

Someta* Someta4 = new Someta();
Someta4->setName(QString("title"));
Someta4->setContent(QString("fors.x3d"));
Sohead1->addMeta(*Someta4);

Someta* Someta5 = new Someta();
Someta5->setName(QString("identifier"));
Someta5->setContent(QString("https://coderextreme.net/X3DJSONLD/src/main/data/force.x3d"));
Sohead1->addMeta(*Someta5);

Someta* Someta6 = new Someta();
Someta6->setName(QString("description"));
Someta6->setContent(QString("beginnings of a force directed graph in 3D"));
Sohead1->addMeta(*Someta6);

Someta* Someta7 = new Someta();
Someta7->setName(QString("generator"));
Someta7->setContent(QString("Vim, X3D-Edit, https://savage.nps.edu/X3D-Edit"));
Sohead1->addMeta(*Someta7);

SoSceneManager0->setHead(*Sohead1);

SoNode* SoNode8 = new SoNode();
SoProtoDeclare* SoProtoDeclare9 = new SoProtoDeclare();
SoProtoDeclare9->setName(QString("node"));
SoProtoInterface* SoProtoInterface10 = new SoProtoInterface();
Sofield* Sofield11 = new Sofield();
Sofield11->setName(QString("position"));
Sofield11->setAccessType(QString("inputOutput"));
Sofield11->setType(QString("SFVec3f"));
Sofield11->setValue(QString("0 0 0"));
SoProtoInterface10->addChild(*Sofield11);

SoProtoDeclare9->addChild(*SoProtoInterface10);

SoProtoBody* SoProtoBody12 = new SoProtoBody();
SoTransform* SoTransform13 = new SoTransform();
SoTransform13->setDEF(QString("transform"));
SoIS* SoIS14 = new SoIS();
Soconnect* Soconnect15 = new Soconnect();
Soconnect15->setNodeField(QString("translation"));
Soconnect15->setProtoField(QString("position"));
SoIS14->addChild(*Soconnect15);

SoTransform13->addChild(*SoIS14);

SoShape* SoShape16 = new SoShape();
SoSphere* SoSphere17 = new SoSphere();
SoShape16->setGeometry(*SoSphere17);

SoVRMLAppearance* SoVRMLAppearance18 = new SoVRMLAppearance();
SoMaterial* SoMaterial19 = new SoMaterial();
SoMaterial19->setDiffuseColor(new float[]{1.0,0.0,0.0});
SoVRMLAppearance18->addChild(*SoMaterial19);

SoShape16->addChild(*SoVRMLAppearance18);

SoTransform13->addChild(*SoShape16);

SoTransform* SoTransform20 = new SoTransform();
SoTransform20->setTranslation(new float[]{1.0,0.0,0.0});
SoShape* SoShape21 = new SoShape();
SoText* SoText22 = new SoText();
SoText22->setString(new QString[]{QString("Node")}, 1);
SoFontStyle* SoFontStyle23 = new SoFontStyle();
SoFontStyle23->setJustify(new QString[]{QString("MIDDLE"), QString("MIDDLE")}, 2);
SoFontStyle23->setSize(5);
SoText22->setFontStyle(*SoFontStyle23);

SoShape21->setGeometry(*SoText22);

SoVRMLAppearance* SoVRMLAppearance24 = new SoVRMLAppearance();
SoMaterial* SoMaterial25 = new SoMaterial();
SoMaterial25->setDiffuseColor(new float[]{0.0,0.0,1.0});
SoVRMLAppearance24->addChild(*SoMaterial25);

SoShape21->addChild(*SoVRMLAppearance24);

SoTransform20->addChild(*SoShape21);

SoTransform13->addChild(*SoTransform20);

SoProtoBody12->addChild(*SoTransform13);

SoPositionInterpolator* SoPositionInterpolator26 = new SoPositionInterpolator();
SoPositionInterpolator26->setDEF(QString("NodePosition"));
SoPositionInterpolator26->setKey(new float[]{0.0,1.0}, 2);
SoPositionInterpolator26->setKeyValue(new float[]{0.0,0.0,0.0,0.0,5.0,0.0}, 6);
SoProtoBody12->addChild(*SoPositionInterpolator26);

SoScript* SoScript27 = new SoScript();
SoScript27->setDEF(QString("MoveBall"));
Sofield* Sofield28 = new Sofield();
Sofield28->setName(QString("translation"));
Sofield28->setAccessType(QString("inputOutput"));
Sofield28->setType(QString("SFVec3f"));
Sofield28->setValue(QString("50 50 0"));
SoScript27->addChild(*Sofield28);

Sofield* Sofield29 = new Sofield();
Sofield29->setName(QString("old"));
Sofield29->setAccessType(QString("inputOutput"));
Sofield29->setType(QString("SFVec3f"));
Sofield29->setValue(QString("0 0 0"));
SoScript27->addChild(*Sofield29);

Sofield* Sofield30 = new Sofield();
Sofield30->setName(QString("set_cycle"));
Sofield30->setAccessType(QString("inputOnly"));
Sofield30->setType(QString("SFTime"));
SoScript27->addChild(*Sofield30);

Sofield* Sofield31 = new Sofield();
Sofield31->setName(QString("keyValue"));
Sofield31->setAccessType(QString("outputOnly"));
Sofield31->setType(QString("MFVec3f"));
SoScript27->addChild(*Sofield31);


//SoScript27->setSourceCode(QString("ecmascript:")+
//_T("					function set_cycle(value) {")+
//_T("                                                old = translation;")+
//_T("						translation = new SFVec3f(Math.random()*100-50, Math.random()*100-50, Math.random()*100-50);")+
//_T("                                                keyValue = new MFVec3f([old, translation]);")+
//_T("						// Browser.println(translation);")+
//_T("					}"));
SoProtoBody12->addChild(*SoScript27);

SoTimeSensor* SoTimeSensor32 = new SoTimeSensor();
SoTimeSensor32->setDEF(QString("nodeClock"));
SoTimeSensor32->setCycleInterval(3);
SoTimeSensor32->setLoop(true);
SoProtoBody12->addChild(*SoTimeSensor32);

SoROUTE* SoROUTE33 = new SoROUTE();
SoROUTE33->setFromNode(QString("nodeClock"));
SoROUTE33->setFromField(QString("cycleTime"));
SoROUTE33->setToNode(QString("MoveBall"));
SoROUTE33->setToField(QString("set_cycle"));
SoProtoBody12->addChild(*SoROUTE33);

SoROUTE* SoROUTE34 = new SoROUTE();
SoROUTE34->setFromNode(QString("nodeClock"));
SoROUTE34->setFromField(QString("fraction_changed"));
SoROUTE34->setToNode(QString("NodePosition"));
SoROUTE34->setToField(QString("set_fraction"));
SoProtoBody12->addChild(*SoROUTE34);

SoROUTE* SoROUTE35 = new SoROUTE();
SoROUTE35->setFromNode(QString("MoveBall"));
SoROUTE35->setFromField(QString("keyValue"));
SoROUTE35->setToNode(QString("NodePosition"));
SoROUTE35->setToField(QString("keyValue"));
SoProtoBody12->addChild(*SoROUTE35);

SoROUTE* SoROUTE36 = new SoROUTE();
SoROUTE36->setFromNode(QString("NodePosition"));
SoROUTE36->setFromField(QString("value_changed"));
SoROUTE36->setToNode(QString("transform"));
SoROUTE36->setToField(QString("set_translation"));
SoProtoBody12->addChild(*SoROUTE36);

SoProtoDeclare9->addChild(*SoProtoBody12);

SoNode8->addChild(*SoProtoDeclare9);

SoProtoDeclare* SoProtoDeclare37 = new SoProtoDeclare();
SoProtoDeclare37->setName(QString("cyl"));
SoProtoInterface* SoProtoInterface38 = new SoProtoInterface();
Sofield* Sofield39 = new Sofield();
Sofield39->setName(QString("set_positionA"));
Sofield39->setAccessType(QString("inputOnly"));
Sofield39->setType(QString("SFVec3f"));
SoProtoInterface38->addChild(*Sofield39);

Sofield* Sofield40 = new Sofield();
Sofield40->setName(QString("set_positionB"));
Sofield40->setAccessType(QString("inputOnly"));
Sofield40->setType(QString("SFVec3f"));
SoProtoInterface38->addChild(*Sofield40);

SoProtoDeclare37->addChild(*SoProtoInterface38);

SoProtoBody* SoProtoBody41 = new SoProtoBody();
SoShape* SoShape42 = new SoShape();
SoExtrusion* SoExtrusion43 = new SoExtrusion();
SoExtrusion43->setDEF(QString("extrusion"));
SoExtrusion43->setCreaseAngle(0.785);
SoExtrusion43->setCrossSection(new float[]{1.0,0.0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0.0,-1.0,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1.0,0.0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0.0,1.0,0.38,0.92,0.71,0.71,0.92,0.38,1.0,0.0}, 34);
SoExtrusion43->setSpine(new float[]{0.0,-50.0,0.0,0.0,50.0,0.0}, 6);
SoShape42->setGeometry(*SoExtrusion43);

SoVRMLAppearance* SoVRMLAppearance44 = new SoVRMLAppearance();
SoMaterial* SoMaterial45 = new SoMaterial();
SoMaterial45->setDiffuseColor(new float[]{0.0,1.0,0.0});
SoVRMLAppearance44->addChild(*SoMaterial45);

SoShape42->addChild(*SoVRMLAppearance44);

SoProtoBody41->addChild(*SoShape42);

SoScript* SoScript46 = new SoScript();
SoScript46->setDEF(QString("MoveCylinder"));
Sofield* Sofield47 = new Sofield();
Sofield47->setName(QString("spine"));
Sofield47->setAccessType(QString("inputOutput"));
Sofield47->setType(QString("MFVec3f"));
Sofield47->setValue(QString("0 -50 0 0 50 0"));
SoScript46->addChild(*Sofield47);

Sofield* Sofield48 = new Sofield();
Sofield48->setName(QString("set_endA"));
Sofield48->setAccessType(QString("inputOnly"));
Sofield48->setType(QString("SFVec3f"));
SoScript46->addChild(*Sofield48);

Sofield* Sofield49 = new Sofield();
Sofield49->setName(QString("set_endB"));
Sofield49->setAccessType(QString("inputOnly"));
Sofield49->setType(QString("SFVec3f"));
SoScript46->addChild(*Sofield49);

SoIS* SoIS50 = new SoIS();
Soconnect* Soconnect51 = new Soconnect();
Soconnect51->setNodeField(QString("set_endA"));
Soconnect51->setProtoField(QString("set_positionA"));
SoIS50->addChild(*Soconnect51);

Soconnect* Soconnect52 = new Soconnect();
Soconnect52->setNodeField(QString("set_endB"));
Soconnect52->setProtoField(QString("set_positionB"));
SoIS50->addChild(*Soconnect52);

SoScript46->addChild(*SoIS50);


//SoScript46->setSourceCode(QString("ecmascript:")+
//_T("                function set_endA(value) {")+
//_T("		    if (typeof spine === 'undefined') {")+
//_T("		        spine = new MFVec3f([value, value]);")+
//_T("		    } else {")+
//_T("		        spine = new MFVec3f([value, spine[1]]);")+
//_T("		    }")+
//_T("                }")+
//_T("                function set_endB(value) {")+
//_T("		    if (typeof spine === 'undefined') {")+
//_T("		        spine = new MFVec3f([value, value]);")+
//_T("		    } else {")+
//_T("		        spine = new MFVec3f([spine[0], value]);")+
//_T("		    }")+
//_T("                }")+
//_T("                function set_spine(value) {")+
//_T("                    spine = value;")+
//_T("                }"));
SoProtoBody41->addChild(*SoScript46);

SoROUTE* SoROUTE53 = new SoROUTE();
SoROUTE53->setFromNode(QString("MoveCylinder"));
SoROUTE53->setFromField(QString("spine"));
SoROUTE53->setToNode(QString("extrusion"));
SoROUTE53->setToField(QString("set_spine"));
SoProtoBody41->addChild(*SoROUTE53);

SoProtoDeclare37->addChild(*SoProtoBody41);

SoNode8->addChild(*SoProtoDeclare37);

SoTransform* SoTransform54 = new SoTransform();
SoTransform54->setDEF(QString("HoldsContent"));
SoTransform54->setScale(new float[]{0.1,0.1,0.1});
SoPlaneSensor* SoPlaneSensor55 = new SoPlaneSensor();
SoPlaneSensor55->setDEF(QString("clickGenerator"));
SoPlaneSensor55->setMinPosition(new float[]{-50.0,-50.0});
SoPlaneSensor55->setMaxPosition(new float[]{50.0,50.0});
SoPlaneSensor55->setDescription(QString("click on background to add nodes, click on nodes to add links"));
SoTransform54->addChild(*SoPlaneSensor55);

SoProtoInstance* SoProtoInstance56 = new SoProtoInstance();
SoProtoInstance56->setName(QString("node"));
SoProtoInstance56->setDEF(QString("nodeA"));
SoField* SoField57 = new SoField();
SoField57->setName(QString("position"));
SoField57->setValue(QString("0 0 0"));
SoProtoInstance56->addChild(*SoField57);

SoTransform54->addChild(*SoProtoInstance56);

SoProtoInstance* SoProtoInstance58 = new SoProtoInstance();
SoProtoInstance58->setName(QString("node"));
SoProtoInstance58->setDEF(QString("nodeB"));
SoField* SoField59 = new SoField();
SoField59->setName(QString("position"));
SoField59->setValue(QString("50 50 50"));
SoProtoInstance58->addChild(*SoField59);

SoTransform54->addChild(*SoProtoInstance58);

SoProtoInstance* SoProtoInstance60 = new SoProtoInstance();
SoProtoInstance60->setName(QString("cyl"));
SoProtoInstance60->setDEF(QString("linkA"));
SoField* SoField61 = new SoField();
SoField61->setName(QString("set_positionA"));
SoField61->setValue(QString("0 0 0"));
SoProtoInstance60->addChild(*SoField61);

SoField* SoField62 = new SoField();
SoField62->setName(QString("set_positionB"));
SoField62->setValue(QString("50 50 50"));
SoProtoInstance60->addChild(*SoField62);

SoTransform54->addChild(*SoProtoInstance60);

SoNode8->addChild(*SoTransform54);

SoROUTE* SoROUTE63 = new SoROUTE();
SoROUTE63->setFromNode(QString("nodeA"));
SoROUTE63->setFromField(QString("position"));
SoROUTE63->setToNode(QString("linkA"));
SoROUTE63->setToField(QString("set_positionA"));
SoNode8->addChild(*SoROUTE63);

SoROUTE* SoROUTE64 = new SoROUTE();
SoROUTE64->setFromNode(QString("nodeB"));
SoROUTE64->setFromField(QString("position"));
SoROUTE64->setToNode(QString("linkA"));
SoROUTE64->setToField(QString("set_positionB"));
SoNode8->addChild(*SoROUTE64);

SoSceneManager0->setSceneGraph(*SoNode8);

return 0;
}
