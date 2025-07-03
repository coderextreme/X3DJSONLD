
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
Someta5->setName(QString("title"));
Someta5->setContent(QString("force.x3d"));
Sohead1->addMeta(*Someta5);

Someta* Someta6 = new Someta();
Someta6->setName(QString("identifier"));
Someta6->setContent(QString("https://coderextreme.net/X3DJSONLD/src/main/personal/force.x3d"));
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
SoGroup* SoGroup14 = new SoGroup();
SoTransform* SoTransform15 = new SoTransform();
SoTransform15->setDEF(QString("transform"));
SoIS* SoIS16 = new SoIS();
Soconnect* Soconnect17 = new Soconnect();
Soconnect17->setNodeField(QString("translation"));
Soconnect17->setProtoField(QString("position"));
SoIS16->addChild(*Soconnect17);

SoTransform15->addChild(*SoIS16);

SoShape* SoShape18 = new SoShape();
SoSphere* SoSphere19 = new SoSphere();
SoShape18->setGeometry(*SoSphere19);

SoVRMLAppearance* SoVRMLAppearance20 = new SoVRMLAppearance();
SoMaterial* SoMaterial21 = new SoMaterial();
SoMaterial21->setDiffuseColor(new float[]{1.0,0.0,0.0});
SoVRMLAppearance20->addChild(*SoMaterial21);

SoShape18->addChild(*SoVRMLAppearance20);

SoTransform15->addChild(*SoShape18);

SoTransform* SoTransform22 = new SoTransform();
SoTransform22->setTranslation(new float[]{1.0,0.0,0.0});
SoShape* SoShape23 = new SoShape();
SoText* SoText24 = new SoText();
SoText24->setString(new QString[]{QString("Node")}, 1);
SoFontStyle* SoFontStyle25 = new SoFontStyle();
SoFontStyle25->setJustify(new QString[]{QString("MIDDLE"), QString("MIDDLE")}, 2);
SoFontStyle25->setSize(5);
SoText24->setFontStyle(*SoFontStyle25);

SoShape23->setGeometry(*SoText24);

SoVRMLAppearance* SoVRMLAppearance26 = new SoVRMLAppearance();
SoMaterial* SoMaterial27 = new SoMaterial();
SoMaterial27->setDiffuseColor(new float[]{0.0,0.0,1.0});
SoVRMLAppearance26->addChild(*SoMaterial27);

SoShape23->addChild(*SoVRMLAppearance26);

SoTransform22->addChild(*SoShape23);

SoTransform15->addChild(*SoTransform22);

SoGroup14->addChild(*SoTransform15);

SoPositionInterpolator* SoPositionInterpolator28 = new SoPositionInterpolator();
SoPositionInterpolator28->setDEF(QString("NodePosition"));
SoPositionInterpolator28->setKey(new float[]{0.0,1.0}, 2);
SoPositionInterpolator28->setKeyValue(new float[]{0.0,0.0,0.0,0.0,5.0,0.0}, 6);
SoGroup14->addChild(*SoPositionInterpolator28);

SoScript* SoScript29 = new SoScript();
SoScript29->setDEF(QString("MoveBall"));
Sofield* Sofield30 = new Sofield();
Sofield30->setName(QString("translation"));
Sofield30->setAccessType(QString("inputOutput"));
Sofield30->setType(QString("SFVec3f"));
Sofield30->setValue(QString("50 50 0"));
SoScript29->addChild(*Sofield30);

Sofield* Sofield31 = new Sofield();
Sofield31->setName(QString("old"));
Sofield31->setAccessType(QString("inputOutput"));
Sofield31->setType(QString("SFVec3f"));
Sofield31->setValue(QString("0 0 0"));
SoScript29->addChild(*Sofield31);

Sofield* Sofield32 = new Sofield();
Sofield32->setName(QString("set_cycle"));
Sofield32->setAccessType(QString("inputOnly"));
Sofield32->setType(QString("SFTime"));
SoScript29->addChild(*Sofield32);

Sofield* Sofield33 = new Sofield();
Sofield33->setName(QString("keyValue"));
Sofield33->setAccessType(QString("outputOnly"));
Sofield33->setType(QString("MFVec3f"));
SoScript29->addChild(*Sofield33);


//SoScript29->setSourceCode(QString("ecmascript:")+
//_T("					function set_cycle(value) {")+
//_T("                                                old = translation;")+
//_T("						translation = new SFVec3f(Math.random()*100-50, Math.random()*100-50, Math.random()*100-50);")+
//_T("                                                var tmpkeyValue = new MFVec3f();")+
//_T("			    			tmpkeyValue[0] = old;")+
//_T("			    			tmpkeyValue[1] = translation;")+
//_T("                                                keyValue = tmpkeyValue;")+
//_T("			    		")+
//_T("						// Browser.println(translation);")+
//_T("					}"));
SoGroup14->addChild(*SoScript29);

SoTimeSensor* SoTimeSensor34 = new SoTimeSensor();
SoTimeSensor34->setDEF(QString("nodeClock"));
SoTimeSensor34->setCycleInterval(3);
SoTimeSensor34->setLoop(true);
SoGroup14->addChild(*SoTimeSensor34);

SoROUTE* SoROUTE35 = new SoROUTE();
SoROUTE35->setFromNode(QString("nodeClock"));
SoROUTE35->setFromField(QString("cycleTime"));
SoROUTE35->setToNode(QString("MoveBall"));
SoROUTE35->setToField(QString("set_cycle"));
SoGroup14->addChild(*SoROUTE35);

SoROUTE* SoROUTE36 = new SoROUTE();
SoROUTE36->setFromNode(QString("nodeClock"));
SoROUTE36->setFromField(QString("fraction_changed"));
SoROUTE36->setToNode(QString("NodePosition"));
SoROUTE36->setToField(QString("set_fraction"));
SoGroup14->addChild(*SoROUTE36);

SoROUTE* SoROUTE37 = new SoROUTE();
SoROUTE37->setFromNode(QString("MoveBall"));
SoROUTE37->setFromField(QString("keyValue"));
SoROUTE37->setToNode(QString("NodePosition"));
SoROUTE37->setToField(QString("keyValue"));
SoGroup14->addChild(*SoROUTE37);

SoROUTE* SoROUTE38 = new SoROUTE();
SoROUTE38->setFromNode(QString("NodePosition"));
SoROUTE38->setFromField(QString("value_changed"));
SoROUTE38->setToNode(QString("transform"));
SoROUTE38->setToField(QString("set_translation"));
SoGroup14->addChild(*SoROUTE38);

SoProtoBody13->addChild(*SoGroup14);

SoProtoDeclare10->addChild(*SoProtoBody13);

SoNode9->addChild(*SoProtoDeclare10);

SoProtoDeclare* SoProtoDeclare39 = new SoProtoDeclare();
SoProtoDeclare39->setName(QString("cyl"));
SoProtoInterface* SoProtoInterface40 = new SoProtoInterface();
Sofield* Sofield41 = new Sofield();
Sofield41->setName(QString("set_positionA"));
Sofield41->setAccessType(QString("inputOnly"));
Sofield41->setType(QString("SFVec3f"));
SoProtoInterface40->addChild(*Sofield41);

Sofield* Sofield42 = new Sofield();
Sofield42->setName(QString("set_positionB"));
Sofield42->setAccessType(QString("inputOnly"));
Sofield42->setType(QString("SFVec3f"));
SoProtoInterface40->addChild(*Sofield42);

SoProtoDeclare39->addChild(*SoProtoInterface40);

SoProtoBody* SoProtoBody43 = new SoProtoBody();
SoGroup* SoGroup44 = new SoGroup();
SoShape* SoShape45 = new SoShape();
SoExtrusion* SoExtrusion46 = new SoExtrusion();
SoExtrusion46->setDEF(QString("extrusion"));
SoExtrusion46->setCreaseAngle(0.785);
SoExtrusion46->setCrossSection(new float[]{1.0,0.0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0.0,-1.0,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1.0,0.0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0.0,1.0,0.38,0.92,0.71,0.71,0.92,0.38,1.0,0.0}, 34);
SoExtrusion46->setSpine(new float[]{0.0,-50.0,0.0,0.0,50.0,0.0}, 6);
SoShape45->setGeometry(*SoExtrusion46);

SoVRMLAppearance* SoVRMLAppearance47 = new SoVRMLAppearance();
SoMaterial* SoMaterial48 = new SoMaterial();
SoMaterial48->setDiffuseColor(new float[]{0.0,1.0,0.0});
SoVRMLAppearance47->addChild(*SoMaterial48);

SoShape45->addChild(*SoVRMLAppearance47);

SoGroup44->addChild(*SoShape45);

SoScript* SoScript49 = new SoScript();
SoScript49->setDEF(QString("MoveCylinder"));
Sofield* Sofield50 = new Sofield();
Sofield50->setName(QString("spine"));
Sofield50->setAccessType(QString("inputOutput"));
Sofield50->setType(QString("MFVec3f"));
Sofield50->setValue(QString("0 -50 0 0 50 0"));
SoScript49->addChild(*Sofield50);

Sofield* Sofield51 = new Sofield();
Sofield51->setName(QString("set_endA"));
Sofield51->setAccessType(QString("inputOnly"));
Sofield51->setType(QString("SFVec3f"));
SoScript49->addChild(*Sofield51);

Sofield* Sofield52 = new Sofield();
Sofield52->setName(QString("set_endB"));
Sofield52->setAccessType(QString("inputOnly"));
Sofield52->setType(QString("SFVec3f"));
SoScript49->addChild(*Sofield52);

SoIS* SoIS53 = new SoIS();
Soconnect* Soconnect54 = new Soconnect();
Soconnect54->setNodeField(QString("set_endA"));
Soconnect54->setProtoField(QString("set_positionA"));
SoIS53->addChild(*Soconnect54);

Soconnect* Soconnect55 = new Soconnect();
Soconnect55->setNodeField(QString("set_endB"));
Soconnect55->setProtoField(QString("set_positionB"));
SoIS53->addChild(*Soconnect55);

SoScript49->addChild(*SoIS53);


//SoScript49->setSourceCode(QString("ecmascript:")+
//_T("                function set_endA(value) {")+
//_T("		    if (typeof spine === 'undefined') {")+
//_T("		        var tmpspine = new MFVec3f();")+
//_T("			tmpspine[0] = value;")+
//_T("			tmpspine[1] = value;")+
//_T("			spine = tmpspine;")+
//_T("		    } else {")+
//_T("		        var tmpspine = new MFVec3f();")+
//_T("			tmpspine[0] = value;")+
//_T("			tmpspine[1] = spine[1];")+
//_T("			spine = tmpspine;")+
//_T("		    }")+
//_T("                }")+
//_T("                function set_endB(value) {")+
//_T("		    if (typeof spine === 'undefined') {")+
//_T("		        var tmpspine = new MFVec3f();")+
//_T("			tmpspine[0] = value;")+
//_T("			tmpspine[1] = value;")+
//_T("			spine = tmpspine;")+
//_T("		    } else {")+
//_T("		        var tmpspine = new MFVec3f();")+
//_T("			tmpspine[0] = spine[0];")+
//_T("			tmpspine[1] = value;")+
//_T("			spine = tmpspine;")+
//_T("		    }")+
//_T("                }")+
//_T("                function set_spine(value) {")+
//_T("                    spine = value;")+
//_T("                }"));
SoGroup44->addChild(*SoScript49);

SoROUTE* SoROUTE56 = new SoROUTE();
SoROUTE56->setFromNode(QString("MoveCylinder"));
SoROUTE56->setFromField(QString("spine"));
SoROUTE56->setToNode(QString("extrusion"));
SoROUTE56->setToField(QString("set_spine"));
SoGroup44->addChild(*SoROUTE56);

SoProtoBody43->addChild(*SoGroup44);

SoProtoDeclare39->addChild(*SoProtoBody43);

SoNode9->addChild(*SoProtoDeclare39);

SoTransform* SoTransform57 = new SoTransform();
SoTransform57->setDEF(QString("HoldsContent"));
SoTransform57->setScale(new float[]{0.1,0.1,0.1});
SoPlaneSensor* SoPlaneSensor58 = new SoPlaneSensor();
SoPlaneSensor58->setDEF(QString("clickGenerator"));
SoPlaneSensor58->setMinPosition(new float[]{-50.0,-50.0});
SoPlaneSensor58->setMaxPosition(new float[]{50.0,50.0});
SoPlaneSensor58->setDescription(QString("click on background to add nodes, click on nodes to add links"));
SoTransform57->addChild(*SoPlaneSensor58);

SoProtoInstance* SoProtoInstance59 = new SoProtoInstance();
SoProtoInstance59->setName(QString("node"));
SoProtoInstance59->setDEF(QString("nodeA"));
SoField* SoField60 = new SoField();
SoField60->setName(QString("position"));
SoField60->setValue(QString("0 0 0"));
SoProtoInstance59->addChild(*SoField60);

SoTransform57->addChild(*SoProtoInstance59);

SoProtoInstance* SoProtoInstance61 = new SoProtoInstance();
SoProtoInstance61->setName(QString("node"));
SoProtoInstance61->setDEF(QString("nodeB"));
SoField* SoField62 = new SoField();
SoField62->setName(QString("position"));
SoField62->setValue(QString("50 50 50"));
SoProtoInstance61->addChild(*SoField62);

SoTransform57->addChild(*SoProtoInstance61);

SoProtoInstance* SoProtoInstance63 = new SoProtoInstance();
SoProtoInstance63->setName(QString("node"));
SoProtoInstance63->setDEF(QString("nodeC"));
SoField* SoField64 = new SoField();
SoField64->setName(QString("position"));
SoField64->setValue(QString("-50 -50 -50"));
SoProtoInstance63->addChild(*SoField64);

SoTransform57->addChild(*SoProtoInstance63);

SoProtoInstance* SoProtoInstance65 = new SoProtoInstance();
SoProtoInstance65->setName(QString("node"));
SoProtoInstance65->setDEF(QString("nodeD"));
SoField* SoField66 = new SoField();
SoField66->setName(QString("position"));
SoField66->setValue(QString("50 50 -50"));
SoProtoInstance65->addChild(*SoField66);

SoTransform57->addChild(*SoProtoInstance65);

SoProtoInstance* SoProtoInstance67 = new SoProtoInstance();
SoProtoInstance67->setName(QString("cyl"));
SoProtoInstance67->setDEF(QString("linkA"));
SoField* SoField68 = new SoField();
SoField68->setName(QString("set_positionA"));
SoField68->setValue(QString("0 0 0"));
SoProtoInstance67->addChild(*SoField68);

SoField* SoField69 = new SoField();
SoField69->setName(QString("set_positionB"));
SoField69->setValue(QString("50 50 50"));
SoProtoInstance67->addChild(*SoField69);

SoTransform57->addChild(*SoProtoInstance67);

SoProtoInstance* SoProtoInstance70 = new SoProtoInstance();
SoProtoInstance70->setName(QString("cyl"));
SoProtoInstance70->setDEF(QString("linkB"));
SoField* SoField71 = new SoField();
SoField71->setName(QString("set_positionA"));
SoField71->setValue(QString("0 0 0"));
SoProtoInstance70->addChild(*SoField71);

SoField* SoField72 = new SoField();
SoField72->setName(QString("set_positionB"));
SoField72->setValue(QString("-50 -50 -50"));
SoProtoInstance70->addChild(*SoField72);

SoTransform57->addChild(*SoProtoInstance70);

SoProtoInstance* SoProtoInstance73 = new SoProtoInstance();
SoProtoInstance73->setName(QString("cyl"));
SoProtoInstance73->setDEF(QString("linkC"));
SoField* SoField74 = new SoField();
SoField74->setName(QString("set_positionA"));
SoField74->setValue(QString("50 50 50"));
SoProtoInstance73->addChild(*SoField74);

SoField* SoField75 = new SoField();
SoField75->setName(QString("set_positionB"));
SoField75->setValue(QString("50 50 -50"));
SoProtoInstance73->addChild(*SoField75);

SoTransform57->addChild(*SoProtoInstance73);

SoNode9->addChild(*SoTransform57);

SoScript* SoScript76 = new SoScript();
SoScript76->setDEF(QString("clickHandler"));
Sofield* Sofield77 = new Sofield();
Sofield77->setName(QString("counter"));
Sofield77->setAccessType(QString("inputOutput"));
Sofield77->setValue(QString("0"));
Sofield77->setType(QString("SFInt32"));
SoScript76->addChild(*Sofield77);

Sofield* Sofield78 = new Sofield();
Sofield78->setName(QString("node_changed"));
Sofield78->setAccessType(QString("outputOnly"));
Sofield78->setType(QString("SFNode"));
SoScript76->addChild(*Sofield78);

Sofield* Sofield79 = new Sofield();
Sofield79->setName(QString("add_node"));
Sofield79->setAccessType(QString("inputOnly"));
Sofield79->setValue(QString("false"));
Sofield79->setType(QString("SFBool"));
SoScript76->addChild(*Sofield79);

//<field name=\"ModifiableNode\" type=\"SFNode\" accessType=\"inputOutput\"> <Transform USE=\"HoldsContent\"/> </field>

//SoScript76->setSourceCode(QString("ecmascript:")+
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
SoNode9->addChild(*SoScript76);

SoROUTE* SoROUTE80 = new SoROUTE();
SoROUTE80->setFromNode(QString("clickGenerator"));
SoROUTE80->setFromField(QString("isActive"));
SoROUTE80->setToNode(QString("clickHandler"));
SoROUTE80->setToField(QString("add_node"));
SoNode9->addChild(*SoROUTE80);

SoROUTE* SoROUTE81 = new SoROUTE();
SoROUTE81->setFromNode(QString("nodeA"));
SoROUTE81->setFromField(QString("position"));
SoROUTE81->setToNode(QString("linkA"));
SoROUTE81->setToField(QString("set_positionA"));
SoNode9->addChild(*SoROUTE81);

SoROUTE* SoROUTE82 = new SoROUTE();
SoROUTE82->setFromNode(QString("nodeB"));
SoROUTE82->setFromField(QString("position"));
SoROUTE82->setToNode(QString("linkA"));
SoROUTE82->setToField(QString("set_positionB"));
SoNode9->addChild(*SoROUTE82);

SoROUTE* SoROUTE83 = new SoROUTE();
SoROUTE83->setFromNode(QString("nodeA"));
SoROUTE83->setFromField(QString("position"));
SoROUTE83->setToNode(QString("linkB"));
SoROUTE83->setToField(QString("set_positionA"));
SoNode9->addChild(*SoROUTE83);

SoROUTE* SoROUTE84 = new SoROUTE();
SoROUTE84->setFromNode(QString("nodeC"));
SoROUTE84->setFromField(QString("position"));
SoROUTE84->setToNode(QString("linkB"));
SoROUTE84->setToField(QString("set_positionB"));
SoNode9->addChild(*SoROUTE84);

SoROUTE* SoROUTE85 = new SoROUTE();
SoROUTE85->setFromNode(QString("nodeA"));
SoROUTE85->setFromField(QString("position"));
SoROUTE85->setToNode(QString("linkC"));
SoROUTE85->setToField(QString("set_positionA"));
SoNode9->addChild(*SoROUTE85);

SoROUTE* SoROUTE86 = new SoROUTE();
SoROUTE86->setFromNode(QString("nodeD"));
SoROUTE86->setFromField(QString("position"));
SoROUTE86->setToNode(QString("linkC"));
SoROUTE86->setToField(QString("set_positionB"));
SoNode9->addChild(*SoROUTE86);

SoSceneManager0->setSceneGraph(*SoNode9);

return 0;
}
