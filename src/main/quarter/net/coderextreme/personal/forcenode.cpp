
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
Someta4->setName(QString("title"));
Someta4->setContent(QString("forcenode.x3d"));
Sohead1->addMeta(*Someta4);

Someta* Someta5 = new Someta();
Someta5->setName(QString("identifier"));
Someta5->setContent(QString("https://coderextreme.net/X3DJSONLD/src/main/personal/force.x3d"));
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
SoGroup* SoGroup13 = new SoGroup();
SoTransform* SoTransform14 = new SoTransform();
SoTransform14->setDEF(QString("transform"));
SoIS* SoIS15 = new SoIS();
Soconnect* Soconnect16 = new Soconnect();
Soconnect16->setNodeField(QString("translation"));
Soconnect16->setProtoField(QString("position"));
SoIS15->addChild(*Soconnect16);

SoTransform14->addChild(*SoIS15);

SoShape* SoShape17 = new SoShape();
SoSphere* SoSphere18 = new SoSphere();
SoShape17->setGeometry(*SoSphere18);

SoVRMLAppearance* SoVRMLAppearance19 = new SoVRMLAppearance();
SoMaterial* SoMaterial20 = new SoMaterial();
SoMaterial20->setDiffuseColor(new float[]{1.0,0.0,0.0});
SoVRMLAppearance19->addChild(*SoMaterial20);

SoShape17->addChild(*SoVRMLAppearance19);

SoTransform14->addChild(*SoShape17);

SoTransform* SoTransform21 = new SoTransform();
SoTransform21->setTranslation(new float[]{1.0,0.0,1.0});
SoShape* SoShape22 = new SoShape();
SoText* SoText23 = new SoText();
SoText23->setString(new QString[]{QString("Node")}, 1);
SoFontStyle* SoFontStyle24 = new SoFontStyle();
SoFontStyle24->setJustify(new QString[]{QString("MIDDLE"), QString("MIDDLE")}, 2);
SoFontStyle24->setSize(5);
SoText23->setFontStyle(*SoFontStyle24);

SoShape22->setGeometry(*SoText23);

SoVRMLAppearance* SoVRMLAppearance25 = new SoVRMLAppearance();
SoMaterial* SoMaterial26 = new SoMaterial();
SoMaterial26->setDiffuseColor(new float[]{0.0,0.0,1.0});
SoVRMLAppearance25->addChild(*SoMaterial26);

SoShape22->addChild(*SoVRMLAppearance25);

SoTransform21->addChild(*SoShape22);

SoTransform14->addChild(*SoTransform21);

SoGroup13->addChild(*SoTransform14);

SoPositionInterpolator* SoPositionInterpolator27 = new SoPositionInterpolator();
SoPositionInterpolator27->setDEF(QString("NodePosition"));
SoPositionInterpolator27->setKey(new float[]{0.0,1.0}, 2);
SoPositionInterpolator27->setKeyValue(new float[]{0.0,0.0,0.0,0.0,5.0,0.0}, 6);
SoGroup13->addChild(*SoPositionInterpolator27);

SoScript* SoScript28 = new SoScript();
SoScript28->setDEF(QString("MoveBall"));
Sofield* Sofield29 = new Sofield();
Sofield29->setName(QString("translation"));
Sofield29->setAccessType(QString("inputOutput"));
Sofield29->setType(QString("SFVec3f"));
Sofield29->setValue(QString("50 50 0"));
SoScript28->addChild(*Sofield29);

Sofield* Sofield30 = new Sofield();
Sofield30->setName(QString("old"));
Sofield30->setAccessType(QString("inputOutput"));
Sofield30->setType(QString("SFVec3f"));
Sofield30->setValue(QString("0 0 0"));
SoScript28->addChild(*Sofield30);

Sofield* Sofield31 = new Sofield();
Sofield31->setName(QString("set_cycle"));
Sofield31->setAccessType(QString("inputOnly"));
Sofield31->setType(QString("SFTime"));
SoScript28->addChild(*Sofield31);

Sofield* Sofield32 = new Sofield();
Sofield32->setName(QString("keyValue"));
Sofield32->setAccessType(QString("outputOnly"));
Sofield32->setType(QString("MFVec3f"));
SoScript28->addChild(*Sofield32);


//SoScript28->setSourceCode(QString("ecmascript:")+
//_T("					function set_cycle(value) {")+
//_T("                                                old = translation;")+
//_T("						translation = new SFVec3f(Math.random()*100-50, Math.random()*100-50, Math.random()*100-50);")+
//_T("                                                keyValue = new MFVec3f(...[old, translation]);")+
//_T("						// Browser.println(translation);")+
//_T("					}"));
SoGroup13->addChild(*SoScript28);

SoTimeSensor* SoTimeSensor33 = new SoTimeSensor();
SoTimeSensor33->setDEF(QString("nodeClock"));
SoTimeSensor33->setCycleInterval(3);
SoTimeSensor33->setLoop(true);
SoGroup13->addChild(*SoTimeSensor33);

SoROUTE* SoROUTE34 = new SoROUTE();
SoROUTE34->setFromNode(QString("nodeClock"));
SoROUTE34->setFromField(QString("cycleTime"));
SoROUTE34->setToNode(QString("MoveBall"));
SoROUTE34->setToField(QString("set_cycle"));
SoGroup13->addChild(*SoROUTE34);

SoROUTE* SoROUTE35 = new SoROUTE();
SoROUTE35->setFromNode(QString("nodeClock"));
SoROUTE35->setFromField(QString("fraction_changed"));
SoROUTE35->setToNode(QString("NodePosition"));
SoROUTE35->setToField(QString("set_fraction"));
SoGroup13->addChild(*SoROUTE35);

SoROUTE* SoROUTE36 = new SoROUTE();
SoROUTE36->setFromNode(QString("MoveBall"));
SoROUTE36->setFromField(QString("keyValue"));
SoROUTE36->setToNode(QString("NodePosition"));
SoROUTE36->setToField(QString("keyValue"));
SoGroup13->addChild(*SoROUTE36);

SoROUTE* SoROUTE37 = new SoROUTE();
SoROUTE37->setFromNode(QString("NodePosition"));
SoROUTE37->setFromField(QString("value_changed"));
SoROUTE37->setToNode(QString("transform"));
SoROUTE37->setToField(QString("set_translation"));
SoGroup13->addChild(*SoROUTE37);

SoProtoBody12->addChild(*SoGroup13);

SoProtoDeclare9->addChild(*SoProtoBody12);

SoNode8->addChild(*SoProtoDeclare9);

SoProtoDeclare* SoProtoDeclare38 = new SoProtoDeclare();
SoProtoDeclare38->setName(QString("cylinder"));
SoProtoInterface* SoProtoInterface39 = new SoProtoInterface();
Sofield* Sofield40 = new Sofield();
Sofield40->setName(QString("set_positionA"));
Sofield40->setAccessType(QString("inputOnly"));
Sofield40->setType(QString("SFVec3f"));
SoProtoInterface39->addChild(*Sofield40);

Sofield* Sofield41 = new Sofield();
Sofield41->setName(QString("set_positionB"));
Sofield41->setAccessType(QString("inputOnly"));
Sofield41->setType(QString("SFVec3f"));
SoProtoInterface39->addChild(*Sofield41);

SoProtoDeclare38->addChild(*SoProtoInterface39);

SoProtoBody* SoProtoBody42 = new SoProtoBody();
SoGroup* SoGroup43 = new SoGroup();
SoShape* SoShape44 = new SoShape();
SoExtrusion* SoExtrusion45 = new SoExtrusion();
SoExtrusion45->setDEF(QString("extrusion"));
SoExtrusion45->setCreaseAngle(0.785);
SoExtrusion45->setCrossSection(new float[]{1.0,0.0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0.0,-1.0,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1.0,0.0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0.0,1.0,0.38,0.92,0.71,0.71,0.92,0.38,1.0,0.0}, 34);
SoExtrusion45->setSpine(new float[]{0.0,-50.0,0.0,0.0,50.0,0.0}, 6);
SoShape44->setGeometry(*SoExtrusion45);

SoVRMLAppearance* SoVRMLAppearance46 = new SoVRMLAppearance();
SoMaterial* SoMaterial47 = new SoMaterial();
SoMaterial47->setDiffuseColor(new float[]{0.0,1.0,0.0});
SoVRMLAppearance46->addChild(*SoMaterial47);

SoShape44->addChild(*SoVRMLAppearance46);

SoGroup43->addChild(*SoShape44);

SoScript* SoScript48 = new SoScript();
SoScript48->setDEF(QString("MoveCylinder"));
Sofield* Sofield49 = new Sofield();
Sofield49->setName(QString("spine"));
Sofield49->setAccessType(QString("inputOutput"));
Sofield49->setType(QString("MFVec3f"));
Sofield49->setValue(QString("0 -50 0 0 50 0"));
SoScript48->addChild(*Sofield49);

Sofield* Sofield50 = new Sofield();
Sofield50->setName(QString("set_endA"));
Sofield50->setAccessType(QString("inputOnly"));
Sofield50->setType(QString("SFVec3f"));
SoScript48->addChild(*Sofield50);

Sofield* Sofield51 = new Sofield();
Sofield51->setName(QString("set_endB"));
Sofield51->setAccessType(QString("inputOnly"));
Sofield51->setType(QString("SFVec3f"));
SoScript48->addChild(*Sofield51);

SoIS* SoIS52 = new SoIS();
Soconnect* Soconnect53 = new Soconnect();
Soconnect53->setNodeField(QString("set_endA"));
Soconnect53->setProtoField(QString("set_positionA"));
SoIS52->addChild(*Soconnect53);

Soconnect* Soconnect54 = new Soconnect();
Soconnect54->setNodeField(QString("set_endB"));
Soconnect54->setProtoField(QString("set_positionB"));
SoIS52->addChild(*Soconnect54);

SoScript48->addChild(*SoIS52);


//SoScript48->setSourceCode(QString("ecmascript:")+
//_T("                function set_endA(value) {")+
//_T("		    if (typeof spine === 'undefined') {")+
//_T("		        spine = new MFVec3f(...[value, value]);")+
//_T("		    } else {")+
//_T("		        spine = new MFVec3f(...[value, spine[1]]);")+
//_T("		    }")+
//_T("                }")+
//_T("                function set_endB(value) {")+
//_T("		    if (typeof spine === 'undefined') {")+
//_T("		        spine = new MFVec3f(...[value, value]);")+
//_T("		    } else {")+
//_T("		        spine = new MFVec3f(...[spine[0], value]);")+
//_T("		    }")+
//_T("                }")+
//_T("                function set_spine(value) {")+
//_T("                    spine = value;")+
//_T("                }"));
SoGroup43->addChild(*SoScript48);

SoROUTE* SoROUTE55 = new SoROUTE();
SoROUTE55->setFromNode(QString("MoveCylinder"));
SoROUTE55->setFromField(QString("spine"));
SoROUTE55->setToNode(QString("extrusion"));
SoROUTE55->setToField(QString("set_spine"));
SoGroup43->addChild(*SoROUTE55);

SoProtoBody42->addChild(*SoGroup43);

SoProtoDeclare38->addChild(*SoProtoBody42);

SoNode8->addChild(*SoProtoDeclare38);

SoTransform* SoTransform56 = new SoTransform();
SoTransform56->setDEF(QString("HoldsContent"));
SoTransform56->setScale(new float[]{0.1,0.1,0.1});
SoPlaneSensor* SoPlaneSensor57 = new SoPlaneSensor();
SoPlaneSensor57->setDEF(QString("clickGenerator"));
SoPlaneSensor57->setMinPosition(new float[]{-50.0,-50.0});
SoPlaneSensor57->setMaxPosition(new float[]{50.0,50.0});
SoPlaneSensor57->setDescription(QString("click on background to add nodes, click on nodes to add links"));
SoTransform56->addChild(*SoPlaneSensor57);

SoProtoInstance* SoProtoInstance58 = new SoProtoInstance();
SoProtoInstance58->setName(QString("node"));
SoProtoInstance58->setDEF(QString("nodeA"));
SoField* SoField59 = new SoField();
SoField59->setName(QString("position"));
SoField59->setValue(QString("0 0 0"));
SoProtoInstance58->addChild(*SoField59);

SoTransform56->addChild(*SoProtoInstance58);

SoProtoInstance* SoProtoInstance60 = new SoProtoInstance();
SoProtoInstance60->setName(QString("node"));
SoProtoInstance60->setDEF(QString("nodeB"));
SoField* SoField61 = new SoField();
SoField61->setName(QString("position"));
SoField61->setValue(QString("50 50 50"));
SoProtoInstance60->addChild(*SoField61);

SoTransform56->addChild(*SoProtoInstance60);

SoProtoInstance* SoProtoInstance62 = new SoProtoInstance();
SoProtoInstance62->setName(QString("node"));
SoProtoInstance62->setDEF(QString("nodeC"));
SoField* SoField63 = new SoField();
SoField63->setName(QString("position"));
SoField63->setValue(QString("-50 -50 -50"));
SoProtoInstance62->addChild(*SoField63);

SoTransform56->addChild(*SoProtoInstance62);

SoProtoInstance* SoProtoInstance64 = new SoProtoInstance();
SoProtoInstance64->setName(QString("node"));
SoProtoInstance64->setDEF(QString("nodeD"));
SoField* SoField65 = new SoField();
SoField65->setName(QString("position"));
SoField65->setValue(QString("50 50 -50"));
SoProtoInstance64->addChild(*SoField65);

SoTransform56->addChild(*SoProtoInstance64);

SoProtoInstance* SoProtoInstance66 = new SoProtoInstance();
SoProtoInstance66->setName(QString("cylinder"));
SoProtoInstance66->setDEF(QString("linkA"));
SoField* SoField67 = new SoField();
SoField67->setName(QString("set_positionA"));
SoField67->setValue(QString("0 0 0"));
SoProtoInstance66->addChild(*SoField67);

SoField* SoField68 = new SoField();
SoField68->setName(QString("set_positionB"));
SoField68->setValue(QString("50 50 50"));
SoProtoInstance66->addChild(*SoField68);

SoTransform56->addChild(*SoProtoInstance66);

SoProtoInstance* SoProtoInstance69 = new SoProtoInstance();
SoProtoInstance69->setName(QString("cylinder"));
SoProtoInstance69->setDEF(QString("linkB"));
SoField* SoField70 = new SoField();
SoField70->setName(QString("set_positionA"));
SoField70->setValue(QString("0 0 0"));
SoProtoInstance69->addChild(*SoField70);

SoField* SoField71 = new SoField();
SoField71->setName(QString("set_positionB"));
SoField71->setValue(QString("-50 -50 -50"));
SoProtoInstance69->addChild(*SoField71);

SoTransform56->addChild(*SoProtoInstance69);

SoProtoInstance* SoProtoInstance72 = new SoProtoInstance();
SoProtoInstance72->setName(QString("cylinder"));
SoProtoInstance72->setDEF(QString("linkC"));
SoField* SoField73 = new SoField();
SoField73->setName(QString("set_positionA"));
SoField73->setValue(QString("50 50 50"));
SoProtoInstance72->addChild(*SoField73);

SoField* SoField74 = new SoField();
SoField74->setName(QString("set_positionB"));
SoField74->setValue(QString("50 50 -50"));
SoProtoInstance72->addChild(*SoField74);

SoTransform56->addChild(*SoProtoInstance72);

SoNode8->addChild(*SoTransform56);

SoScript* SoScript75 = new SoScript();
SoScript75->setDEF(QString("clickHandler"));
Sofield* Sofield76 = new Sofield();
Sofield76->setName(QString("counter"));
Sofield76->setAccessType(QString("inputOutput"));
Sofield76->setValue(QString("0"));
Sofield76->setType(QString("SFInt32"));
SoScript75->addChild(*Sofield76);

Sofield* Sofield77 = new Sofield();
Sofield77->setName(QString("node_changed"));
Sofield77->setAccessType(QString("outputOnly"));
Sofield77->setType(QString("SFNode"));
SoScript75->addChild(*Sofield77);

Sofield* Sofield78 = new Sofield();
Sofield78->setName(QString("add_node"));
Sofield78->setAccessType(QString("inputOnly"));
Sofield78->setValue(QString("false"));
Sofield78->setType(QString("SFBool"));
SoScript75->addChild(*Sofield78);

//<field name=\"ModifiableNode\" type=\"SFNode\" accessType=\"inputOutput\"> <Transform USE=\"HoldsContent\"/> </field>

//SoScript75->setSourceCode(QString("ecmascript:")+
//_T("	function add_node(value) {")+
//_T("                // Browser.print('hey ', counter);")+
//_T("                counter = counter++;")+
//_T("		Browser.appendTo(Browser.getDocument().querySelector(\"field [name=ModifiableNode]\"),")+
//_T("			{ \"ProtoInstance\":")+
//_T("				{ \"@name\":\"node\",")+
//_T("				  \"@DEF\":\"node'+counter+'\",")+
//_T("				  \"fieldValue\": [")+
//_T("					{")+
//_T("						 \"@name\":\"position\",")+
//_T("						 \"@value\":[0.0,0.0,0.0]")+
//_T("					}")+
//_T("				  ]")+
//_T("				}")+
//_T("			});")+
//_T("        }"));
SoNode8->addChild(*SoScript75);

SoROUTE* SoROUTE79 = new SoROUTE();
SoROUTE79->setFromNode(QString("clickGenerator"));
SoROUTE79->setFromField(QString("isActive"));
SoROUTE79->setToNode(QString("clickHandler"));
SoROUTE79->setToField(QString("add_node"));
SoNode8->addChild(*SoROUTE79);

SoROUTE* SoROUTE80 = new SoROUTE();
SoROUTE80->setFromNode(QString("nodeA"));
SoROUTE80->setFromField(QString("position"));
SoROUTE80->setToNode(QString("linkA"));
SoROUTE80->setToField(QString("set_positionA"));
SoNode8->addChild(*SoROUTE80);

SoROUTE* SoROUTE81 = new SoROUTE();
SoROUTE81->setFromNode(QString("nodeB"));
SoROUTE81->setFromField(QString("position"));
SoROUTE81->setToNode(QString("linkA"));
SoROUTE81->setToField(QString("set_positionB"));
SoNode8->addChild(*SoROUTE81);

SoROUTE* SoROUTE82 = new SoROUTE();
SoROUTE82->setFromNode(QString("nodeA"));
SoROUTE82->setFromField(QString("position"));
SoROUTE82->setToNode(QString("linkB"));
SoROUTE82->setToField(QString("set_positionA"));
SoNode8->addChild(*SoROUTE82);

SoROUTE* SoROUTE83 = new SoROUTE();
SoROUTE83->setFromNode(QString("nodeC"));
SoROUTE83->setFromField(QString("position"));
SoROUTE83->setToNode(QString("linkB"));
SoROUTE83->setToField(QString("set_positionB"));
SoNode8->addChild(*SoROUTE83);

SoROUTE* SoROUTE84 = new SoROUTE();
SoROUTE84->setFromNode(QString("nodeA"));
SoROUTE84->setFromField(QString("position"));
SoROUTE84->setToNode(QString("linkC"));
SoROUTE84->setToField(QString("set_positionA"));
SoNode8->addChild(*SoROUTE84);

SoROUTE* SoROUTE85 = new SoROUTE();
SoROUTE85->setFromNode(QString("nodeD"));
SoROUTE85->setFromField(QString("position"));
SoROUTE85->setToNode(QString("linkC"));
SoROUTE85->setToField(QString("set_positionB"));
SoNode8->addChild(*SoROUTE85);

SoSceneManager0->setSceneGraph(*SoNode8);

return 0;
}
