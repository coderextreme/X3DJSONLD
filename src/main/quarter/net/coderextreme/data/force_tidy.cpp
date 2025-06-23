
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
Someta6->setContent(QString("https://coderextreme.net/X3DJSONLD/src/main/data/force.x3d"));
Sohead1->addMeta(*Someta6);

Someta* Someta7 = new Someta();
Someta7->setName(QString("description"));
Someta7->setContent(QString("beginnings of a force directed graph in 3D"));
Sohead1->addMeta(*Someta7);

Someta* Someta8 = new Someta();
Someta8->setName(QString("generator"));
Someta8->setContent(QString("Vim, X3D-Edit, https://savage.nps.edu/X3D-Edit"));
Sohead1->addMeta(*Someta8);

Someta* Someta9 = new Someta();
Someta9->setName(QString("generator"));
Someta9->setContent(QString("x3d-tidy V1.0.175, https://www.npmjs.com/package/x3d-tidy"));
Sohead1->addMeta(*Someta9);

Someta* Someta10 = new Someta();
Someta10->setName(QString("modified"));
Someta10->setContent(QString("Sat, 9 Nov 2024 19:29:39 GMT"));
Sohead1->addMeta(*Someta10);

SoSceneManager0->setHead(*Sohead1);

SoNode* SoNode11 = new SoNode();
SoProtoDeclare* SoProtoDeclare12 = new SoProtoDeclare();
SoProtoDeclare12->setName(QString("node"));
SoProtoInterface* SoProtoInterface13 = new SoProtoInterface();
Sofield* Sofield14 = new Sofield();
Sofield14->setName(QString("position"));
Sofield14->setAccessType(QString("inputOutput"));
Sofield14->setType(QString("SFVec3f"));
SoProtoInterface13->addChild(*Sofield14);

SoProtoDeclare12->addChild(*SoProtoInterface13);

SoProtoBody* SoProtoBody15 = new SoProtoBody();
SoGroup* SoGroup16 = new SoGroup();
SoTransform* SoTransform17 = new SoTransform();
SoTransform17->setDEF(QString("transform"));
SoIS* SoIS18 = new SoIS();
Soconnect* Soconnect19 = new Soconnect();
Soconnect19->setNodeField(QString("translation"));
Soconnect19->setProtoField(QString("position"));
SoIS18->addChild(*Soconnect19);

SoTransform17->addChild(*SoIS18);

SoShape* SoShape20 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance21 = new SoVRMLAppearance();
SoMaterial* SoMaterial22 = new SoMaterial();
SoMaterial22->setDiffuseColor(new float[]{1.0,0.0,0.0});
SoVRMLAppearance21->addChild(*SoMaterial22);

SoShape20->addChild(*SoVRMLAppearance21);

SoSphere* SoSphere23 = new SoSphere();
SoShape20->setGeometry(*SoSphere23);

SoTransform17->addChild(*SoShape20);

SoTransform* SoTransform24 = new SoTransform();
SoTransform24->setTranslation(new float[]{1.0,0.0,0.0});
SoShape* SoShape25 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance26 = new SoVRMLAppearance();
SoMaterial* SoMaterial27 = new SoMaterial();
SoMaterial27->setDiffuseColor(new float[]{0.0,0.0,1.0});
SoVRMLAppearance26->addChild(*SoMaterial27);

SoShape25->addChild(*SoVRMLAppearance26);

SoText* SoText28 = new SoText();
SoText28->setString(new QString[]{QString("Node")}, 1);
SoFontStyle* SoFontStyle29 = new SoFontStyle();
SoFontStyle29->setSize(5);
SoFontStyle29->setJustify(new QString[]{QString("MIDDLE"), QString("MIDDLE")}, 2);
SoText28->setFontStyle(*SoFontStyle29);

SoShape25->setGeometry(*SoText28);

SoTransform24->addChild(*SoShape25);

SoTransform17->addChild(*SoTransform24);

SoGroup16->addChild(*SoTransform17);

SoPositionInterpolator* SoPositionInterpolator30 = new SoPositionInterpolator();
SoPositionInterpolator30->setDEF(QString("NodePosition"));
SoPositionInterpolator30->setKey(new float[]{0.0,1.0}, 2);
SoPositionInterpolator30->setKeyValue(new float[]{0.0,0.0,0.0,0.0,5.0,0.0}, 6);
SoGroup16->addChild(*SoPositionInterpolator30);

SoScript* SoScript31 = new SoScript();
SoScript31->setDEF(QString("MoveBall"));
Sofield* Sofield32 = new Sofield();
Sofield32->setName(QString("translation"));
Sofield32->setAccessType(QString("inputOutput"));
Sofield32->setType(QString("SFVec3f"));
Sofield32->setValue(QString("50 50 0"));
SoScript31->addChild(*Sofield32);

Sofield* Sofield33 = new Sofield();
Sofield33->setName(QString("old"));
Sofield33->setAccessType(QString("inputOutput"));
Sofield33->setType(QString("SFVec3f"));
SoScript31->addChild(*Sofield33);

Sofield* Sofield34 = new Sofield();
Sofield34->setName(QString("set_cycle"));
Sofield34->setAccessType(QString("inputOnly"));
Sofield34->setType(QString("SFTime"));
SoScript31->addChild(*Sofield34);

Sofield* Sofield35 = new Sofield();
Sofield35->setName(QString("keyValue"));
Sofield35->setAccessType(QString("outputOnly"));
Sofield35->setType(QString("MFVec3f"));
SoScript31->addChild(*Sofield35);


//SoScript31->setSourceCode(QString("ecmascript:")+
//_T("					function set_cycle(value) {")+
//_T("                                                old = translation;")+
//_T("						translation = new SFVec3f(Math.random()*100-50, Math.random()*100-50, Math.random()*100-50);")+
//_T("		    				/*")+
//_T("                                                var tmpkeyValue = new MFVec3f();")+
//_T("			    			tmpkeyValue[0] = old;")+
//_T("			    			tmpkeyValue[1] = translation;")+
//_T("                                                keyValue = tmpkeyValue;")+
//_T("		    				*/")+
//_T("                                                keyValue = new MFVec3f([old, translation]);")+
//_T("			    		")+
//_T("						// Browser.println(translation);")+
//_T("					}"));
SoGroup16->addChild(*SoScript31);

SoTimeSensor* SoTimeSensor36 = new SoTimeSensor();
SoTimeSensor36->setDEF(QString("nodeClock"));
SoTimeSensor36->setCycleInterval(3);
SoTimeSensor36->setLoop(true);
SoGroup16->addChild(*SoTimeSensor36);

SoProtoBody15->addChild(*SoGroup16);

SoROUTE* SoROUTE37 = new SoROUTE();
SoROUTE37->setFromNode(QString("nodeClock"));
SoROUTE37->setFromField(QString("cycleTime"));
SoROUTE37->setToNode(QString("MoveBall"));
SoROUTE37->setToField(QString("set_cycle"));
SoProtoBody15->addChild(*SoROUTE37);

SoROUTE* SoROUTE38 = new SoROUTE();
SoROUTE38->setFromNode(QString("nodeClock"));
SoROUTE38->setFromField(QString("fraction_changed"));
SoROUTE38->setToNode(QString("NodePosition"));
SoROUTE38->setToField(QString("set_fraction"));
SoProtoBody15->addChild(*SoROUTE38);

SoROUTE* SoROUTE39 = new SoROUTE();
SoROUTE39->setFromNode(QString("MoveBall"));
SoROUTE39->setFromField(QString("keyValue"));
SoROUTE39->setToNode(QString("NodePosition"));
SoROUTE39->setToField(QString("set_keyValue"));
SoProtoBody15->addChild(*SoROUTE39);

SoROUTE* SoROUTE40 = new SoROUTE();
SoROUTE40->setFromNode(QString("NodePosition"));
SoROUTE40->setFromField(QString("value_changed"));
SoROUTE40->setToNode(QString("transform"));
SoROUTE40->setToField(QString("set_translation"));
SoProtoBody15->addChild(*SoROUTE40);

SoProtoDeclare12->addChild(*SoProtoBody15);

SoNode11->addChild(*SoProtoDeclare12);

SoProtoDeclare* SoProtoDeclare41 = new SoProtoDeclare();
SoProtoDeclare41->setName(QString("cyl"));
SoProtoInterface* SoProtoInterface42 = new SoProtoInterface();
Sofield* Sofield43 = new Sofield();
Sofield43->setName(QString("set_positionA"));
Sofield43->setAccessType(QString("inputOnly"));
Sofield43->setType(QString("SFVec3f"));
SoProtoInterface42->addChild(*Sofield43);

Sofield* Sofield44 = new Sofield();
Sofield44->setName(QString("set_positionB"));
Sofield44->setAccessType(QString("inputOnly"));
Sofield44->setType(QString("SFVec3f"));
SoProtoInterface42->addChild(*Sofield44);

SoProtoDeclare41->addChild(*SoProtoInterface42);

SoProtoBody* SoProtoBody45 = new SoProtoBody();
SoGroup* SoGroup46 = new SoGroup();
SoShape* SoShape47 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance48 = new SoVRMLAppearance();
SoMaterial* SoMaterial49 = new SoMaterial();
SoMaterial49->setDiffuseColor(new float[]{0.0,1.0,0.0});
SoVRMLAppearance48->addChild(*SoMaterial49);

SoShape47->addChild(*SoVRMLAppearance48);

SoExtrusion* SoExtrusion50 = new SoExtrusion();
SoExtrusion50->setDEF(QString("extrusion"));
SoExtrusion50->setCreaseAngle(0.785);
SoExtrusion50->setCrossSection(new float[]{1.0,0.0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0.0,-1.0,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1.0,0.0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0.0,1.0,0.38,0.92,0.71,0.71,0.92,0.38,1.0,0.0}, 34);
SoExtrusion50->setSpine(new float[]{0.0,-50.0,0.0,0.0,50.0,0.0}, 6);
SoShape47->setGeometry(*SoExtrusion50);

SoGroup46->addChild(*SoShape47);

SoScript* SoScript51 = new SoScript();
SoScript51->setDEF(QString("MoveCylinder"));
Sofield* Sofield52 = new Sofield();
Sofield52->setName(QString("spine"));
Sofield52->setAccessType(QString("inputOutput"));
Sofield52->setType(QString("MFVec3f"));
Sofield52->setValue(QString("0 -50 0 0 50 0"));
SoScript51->addChild(*Sofield52);

Sofield* Sofield53 = new Sofield();
Sofield53->setName(QString("set_endA"));
Sofield53->setAccessType(QString("inputOnly"));
Sofield53->setType(QString("SFVec3f"));
SoScript51->addChild(*Sofield53);

Sofield* Sofield54 = new Sofield();
Sofield54->setName(QString("set_endB"));
Sofield54->setAccessType(QString("inputOnly"));
Sofield54->setType(QString("SFVec3f"));
SoScript51->addChild(*Sofield54);

SoIS* SoIS55 = new SoIS();
Soconnect* Soconnect56 = new Soconnect();
Soconnect56->setNodeField(QString("set_endA"));
Soconnect56->setProtoField(QString("set_positionA"));
SoIS55->addChild(*Soconnect56);

Soconnect* Soconnect57 = new Soconnect();
Soconnect57->setNodeField(QString("set_endB"));
Soconnect57->setProtoField(QString("set_positionB"));
SoIS55->addChild(*Soconnect57);

SoScript51->addChild(*SoIS55);


//SoScript51->setSourceCode(QString("ecmascript:")+
//_T("                function set_endA(value) {")+
//_T("		    if (typeof spine === 'undefined') {")+
//_T("		    	/*")+
//_T("		        var tmpspine = new MFVec3f();")+
//_T("			tmpspine[0] = value;")+
//_T("			tmpspine[1] = value;")+
//_T("			spine = tmpspine;")+
//_T("		    	*/")+
//_T("		        spine = new MFVec3f([value, value]);")+
//_T("		    } else {")+
//_T("		    	/*")+
//_T("		        var tmpspine = new MFVec3f();")+
//_T("			tmpspine[0] = value;")+
//_T("			tmpspine[1] = spine[1];")+
//_T("			spine = tmpspine;")+
//_T("		        */")+
//_T("		        spine = new MFVec3f([value, spine[1]]);")+
//_T("		    }")+
//_T("                }")+
//_T("                function set_endB(value) {")+
//_T("		    if (typeof spine === 'undefined') {")+
//_T("		    	/*")+
//_T("		        var tmpspine = new MFVec3f();")+
//_T("			tmpspine[0] = value;")+
//_T("			tmpspine[1] = value;")+
//_T("			spine = tmpspine;")+
//_T("		        */")+
//_T("		        spine = new MFVec3f([value, value]);")+
//_T("		    } else {")+
//_T("		    	/*")+
//_T("		        var tmpspine = new MFVec3f();")+
//_T("			tmpspine[0] = spine[0];")+
//_T("			tmpspine[1] = value;")+
//_T("			spine = tmpspine;")+
//_T("		    	*/")+
//_T("		        spine = new MFVec3f([spine[0], value]);")+
//_T("		    }")+
//_T("                }")+
//_T("                function set_spine(value) {")+
//_T("                    spine = value;")+
//_T("                }"));
SoGroup46->addChild(*SoScript51);

SoProtoBody45->addChild(*SoGroup46);

SoROUTE* SoROUTE58 = new SoROUTE();
SoROUTE58->setFromNode(QString("MoveCylinder"));
SoROUTE58->setFromField(QString("spine_changed"));
SoROUTE58->setToNode(QString("extrusion"));
SoROUTE58->setToField(QString("set_spine"));
SoProtoBody45->addChild(*SoROUTE58);

SoProtoDeclare41->addChild(*SoProtoBody45);

SoNode11->addChild(*SoProtoDeclare41);

SoTransform* SoTransform59 = new SoTransform();
SoTransform59->setDEF(QString("HoldsContent"));
SoTransform59->setScale(new float[]{0.1,0.1,0.1});
SoPlaneSensor* SoPlaneSensor60 = new SoPlaneSensor();
SoPlaneSensor60->setDEF(QString("clickGenerator"));
SoPlaneSensor60->setDescription(QString("click on background to add nodes, click on nodes to add links"));
SoPlaneSensor60->setMinPosition(new float[]{-50.0,-50.0});
SoPlaneSensor60->setMaxPosition(new float[]{50.0,50.0});
SoTransform59->addChild(*SoPlaneSensor60);

SoProtoInstance* SoProtoInstance61 = new SoProtoInstance();
SoProtoInstance61->setName(QString("node"));
SoProtoInstance61->setDEF(QString("nodeA"));
SoField* SoField62 = new SoField();
SoField62->setName(QString("position"));
SoField62->setValue(QString("0 1.388333 0"));
SoProtoInstance61->addChild(*SoField62);

SoTransform59->addChild(*SoProtoInstance61);

SoProtoInstance* SoProtoInstance63 = new SoProtoInstance();
SoProtoInstance63->setName(QString("node"));
SoProtoInstance63->setDEF(QString("nodeB"));
SoField* SoField64 = new SoField();
SoField64->setName(QString("position"));
SoField64->setValue(QString("0 1.388333 0"));
SoProtoInstance63->addChild(*SoField64);

SoTransform59->addChild(*SoProtoInstance63);

SoProtoInstance* SoProtoInstance65 = new SoProtoInstance();
SoProtoInstance65->setName(QString("node"));
SoProtoInstance65->setDEF(QString("nodeC"));
SoField* SoField66 = new SoField();
SoField66->setName(QString("position"));
SoField66->setValue(QString("0 1.388333 0"));
SoProtoInstance65->addChild(*SoField66);

SoTransform59->addChild(*SoProtoInstance65);

SoProtoInstance* SoProtoInstance67 = new SoProtoInstance();
SoProtoInstance67->setName(QString("node"));
SoProtoInstance67->setDEF(QString("nodeD"));
SoField* SoField68 = new SoField();
SoField68->setName(QString("position"));
SoField68->setValue(QString("0 1.388333 0"));
SoProtoInstance67->addChild(*SoField68);

SoTransform59->addChild(*SoProtoInstance67);

SoProtoInstance* SoProtoInstance69 = new SoProtoInstance();
SoProtoInstance69->setName(QString("cyl"));
SoProtoInstance69->setDEF(QString("linkA"));
SoTransform59->addChild(*SoProtoInstance69);

SoProtoInstance* SoProtoInstance70 = new SoProtoInstance();
SoProtoInstance70->setName(QString("cyl"));
SoProtoInstance70->setDEF(QString("linkB"));
SoTransform59->addChild(*SoProtoInstance70);

SoProtoInstance* SoProtoInstance71 = new SoProtoInstance();
SoProtoInstance71->setName(QString("cyl"));
SoProtoInstance71->setDEF(QString("linkC"));
SoTransform59->addChild(*SoProtoInstance71);

SoNode11->addChild(*SoTransform59);

SoScript* SoScript72 = new SoScript();
SoScript72->setDEF(QString("clickHandler"));
Sofield* Sofield73 = new Sofield();
Sofield73->setName(QString("counter"));
Sofield73->setAccessType(QString("inputOutput"));
Sofield73->setType(QString("SFInt32"));
SoScript72->addChild(*Sofield73);

Sofield* Sofield74 = new Sofield();
Sofield74->setName(QString("node_changed"));
Sofield74->setAccessType(QString("outputOnly"));
Sofield74->setType(QString("SFNode"));
SoScript72->addChild(*Sofield74);

Sofield* Sofield75 = new Sofield();
Sofield75->setName(QString("add_node"));
Sofield75->setAccessType(QString("inputOnly"));
Sofield75->setType(QString("SFBool"));
SoScript72->addChild(*Sofield75);


//SoScript72->setSourceCode(QString("ecmascript:")+
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
SoNode11->addChild(*SoScript72);

SoROUTE* SoROUTE76 = new SoROUTE();
SoROUTE76->setFromNode(QString("clickGenerator"));
SoROUTE76->setFromField(QString("isActive"));
SoROUTE76->setToNode(QString("clickHandler"));
SoROUTE76->setToField(QString("add_node"));
SoNode11->addChild(*SoROUTE76);

SoROUTE* SoROUTE77 = new SoROUTE();
SoROUTE77->setFromNode(QString("nodeA"));
SoROUTE77->setFromField(QString("position_changed"));
SoROUTE77->setToNode(QString("linkA"));
SoROUTE77->setToField(QString("set_positionA"));
SoNode11->addChild(*SoROUTE77);

SoROUTE* SoROUTE78 = new SoROUTE();
SoROUTE78->setFromNode(QString("nodeB"));
SoROUTE78->setFromField(QString("position_changed"));
SoROUTE78->setToNode(QString("linkA"));
SoROUTE78->setToField(QString("set_positionB"));
SoNode11->addChild(*SoROUTE78);

SoROUTE* SoROUTE79 = new SoROUTE();
SoROUTE79->setFromNode(QString("nodeA"));
SoROUTE79->setFromField(QString("position_changed"));
SoROUTE79->setToNode(QString("linkB"));
SoROUTE79->setToField(QString("set_positionA"));
SoNode11->addChild(*SoROUTE79);

SoROUTE* SoROUTE80 = new SoROUTE();
SoROUTE80->setFromNode(QString("nodeC"));
SoROUTE80->setFromField(QString("position_changed"));
SoROUTE80->setToNode(QString("linkB"));
SoROUTE80->setToField(QString("set_positionB"));
SoNode11->addChild(*SoROUTE80);

SoROUTE* SoROUTE81 = new SoROUTE();
SoROUTE81->setFromNode(QString("nodeA"));
SoROUTE81->setFromField(QString("position_changed"));
SoROUTE81->setToNode(QString("linkC"));
SoROUTE81->setToField(QString("set_positionA"));
SoNode11->addChild(*SoROUTE81);

SoROUTE* SoROUTE82 = new SoROUTE();
SoROUTE82->setFromNode(QString("nodeD"));
SoROUTE82->setFromField(QString("position_changed"));
SoROUTE82->setToNode(QString("linkC"));
SoROUTE82->setToField(QString("set_positionB"));
SoNode11->addChild(*SoROUTE82);

SoSceneManager0->setSceneGraph(*SoNode11);

return 0;
}
