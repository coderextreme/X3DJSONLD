
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
Someta6->setContent(QString("force.x3d"));
Sohead1->addMeta(*Someta6);

Someta* Someta7 = new Someta();
Someta7->setName(QString("identifier"));
Someta7->setContent(QString("https://coderextreme.net/X3DJSONLD/src/main/data/force.x3d"));
Sohead1->addMeta(*Someta7);

Someta* Someta8 = new Someta();
Someta8->setName(QString("description"));
Someta8->setContent(QString("beginnings of a force directed graph in 3D"));
Sohead1->addMeta(*Someta8);

Someta* Someta9 = new Someta();
Someta9->setName(QString("generator"));
Someta9->setContent(QString("Vim, X3D-Edit, https://savage.nps.edu/X3D-Edit"));
Sohead1->addMeta(*Someta9);

Someta* Someta10 = new Someta();
Someta10->setName(QString("generator"));
Someta10->setContent(QString("x3d-tidy V1.0.175, https://www.npmjs.com/package/x3d-tidy"));
Sohead1->addMeta(*Someta10);

Someta* Someta11 = new Someta();
Someta11->setName(QString("modified"));
Someta11->setContent(QString("Sat, 9 Nov 2024 19:29:39 GMT"));
Sohead1->addMeta(*Someta11);

SoSceneManager0->setHead(*Sohead1);

SoNode* SoNode12 = new SoNode();
SoProtoDeclare* SoProtoDeclare13 = new SoProtoDeclare();
SoProtoDeclare13->setName(QString("node"));
SoProtoInterface* SoProtoInterface14 = new SoProtoInterface();
Sofield* Sofield15 = new Sofield();
Sofield15->setName(QString("position"));
Sofield15->setAccessType(QString("inputOutput"));
Sofield15->setType(QString("SFVec3f"));
SoProtoInterface14->addChild(*Sofield15);

SoProtoDeclare13->addChild(*SoProtoInterface14);

SoProtoBody* SoProtoBody16 = new SoProtoBody();
SoGroup* SoGroup17 = new SoGroup();
SoTransform* SoTransform18 = new SoTransform();
SoTransform18->setDEF(QString("transform"));
SoIS* SoIS19 = new SoIS();
Soconnect* Soconnect20 = new Soconnect();
Soconnect20->setNodeField(QString("translation"));
Soconnect20->setProtoField(QString("position"));
SoIS19->addChild(*Soconnect20);

SoTransform18->addChild(*SoIS19);

SoShape* SoShape21 = new SoShape();
SoSphere* SoSphere22 = new SoSphere();
SoShape21->setGeometry(*SoSphere22);

SoVRMLAppearance* SoVRMLAppearance23 = new SoVRMLAppearance();
SoMaterial* SoMaterial24 = new SoMaterial();
SoMaterial24->setDiffuseColor(new float[]{1.0,0.0,0.0});
SoVRMLAppearance23->addChild(*SoMaterial24);

SoShape21->addChild(*SoVRMLAppearance23);

SoTransform18->addChild(*SoShape21);

SoTransform* SoTransform25 = new SoTransform();
SoTransform25->setTranslation(new float[]{1.0,0.0,0.0});
SoShape* SoShape26 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance27 = new SoVRMLAppearance();
SoMaterial* SoMaterial28 = new SoMaterial();
SoMaterial28->setDiffuseColor(new float[]{0.0,0.0,1.0});
SoVRMLAppearance27->addChild(*SoMaterial28);

SoShape26->addChild(*SoVRMLAppearance27);

SoText* SoText29 = new SoText();
SoText29->setString(new QString[]{QString("Node")}, 1);
SoFontStyle* SoFontStyle30 = new SoFontStyle();
SoFontStyle30->setSize(5);
SoFontStyle30->setJustify(new QString[]{QString("MIDDLE"), QString("MIDDLE")}, 2);
SoText29->setFontStyle(*SoFontStyle30);

SoShape26->setGeometry(*SoText29);

SoTransform25->addChild(*SoShape26);

SoTransform18->addChild(*SoTransform25);

SoGroup17->addChild(*SoTransform18);

SoPositionInterpolator* SoPositionInterpolator31 = new SoPositionInterpolator();
SoPositionInterpolator31->setDEF(QString("NodePosition"));
SoPositionInterpolator31->setKey(new float[]{0.0,1.0}, 2);
SoPositionInterpolator31->setKeyValue(new float[]{0.0,0.0,0.0,0.0,5.0,0.0}, 6);
SoGroup17->addChild(*SoPositionInterpolator31);

SoScript* SoScript32 = new SoScript();
SoScript32->setDEF(QString("MoveBall"));
Sofield* Sofield33 = new Sofield();
Sofield33->setName(QString("translation"));
Sofield33->setAccessType(QString("inputOutput"));
Sofield33->setType(QString("SFVec3f"));
Sofield33->setValue(QString("50 50 0"));
SoScript32->addChild(*Sofield33);

Sofield* Sofield34 = new Sofield();
Sofield34->setName(QString("old"));
Sofield34->setAccessType(QString("inputOutput"));
Sofield34->setType(QString("SFVec3f"));
SoScript32->addChild(*Sofield34);

Sofield* Sofield35 = new Sofield();
Sofield35->setName(QString("set_cycle"));
Sofield35->setAccessType(QString("inputOnly"));
Sofield35->setType(QString("SFTime"));
SoScript32->addChild(*Sofield35);

Sofield* Sofield36 = new Sofield();
Sofield36->setName(QString("keyValue"));
Sofield36->setAccessType(QString("outputOnly"));
Sofield36->setType(QString("MFVec3f"));
SoScript32->addChild(*Sofield36);


//SoScript32->setSourceCode(QString("ecmascript:")+
//_T("		function set_cycle(value) {")+
//_T("			old = translation;")+
//_T("			translation = new SFVec3f(Math.random()*100-50, Math.random()*100-50, Math.random()*100-50);")+
//_T("			keyValue = new MFVec3f(old, translation);")+
//_T("		}"));
SoGroup17->addChild(*SoScript32);

SoTimeSensor* SoTimeSensor37 = new SoTimeSensor();
SoTimeSensor37->setDEF(QString("nodeClock"));
SoTimeSensor37->setCycleInterval(3);
SoTimeSensor37->setLoop(true);
SoGroup17->addChild(*SoTimeSensor37);

SoROUTE* SoROUTE38 = new SoROUTE();
SoROUTE38->setFromNode(QString("nodeClock"));
SoROUTE38->setFromField(QString("cycleTime"));
SoROUTE38->setToNode(QString("MoveBall"));
SoROUTE38->setToField(QString("set_cycle"));
SoGroup17->addChild(*SoROUTE38);

SoROUTE* SoROUTE39 = new SoROUTE();
SoROUTE39->setFromNode(QString("nodeClock"));
SoROUTE39->setFromField(QString("fraction_changed"));
SoROUTE39->setToNode(QString("NodePosition"));
SoROUTE39->setToField(QString("set_fraction"));
SoGroup17->addChild(*SoROUTE39);

SoROUTE* SoROUTE40 = new SoROUTE();
SoROUTE40->setFromNode(QString("MoveBall"));
SoROUTE40->setFromField(QString("keyValue"));
SoROUTE40->setToNode(QString("NodePosition"));
SoROUTE40->setToField(QString("set_keyValue"));
SoGroup17->addChild(*SoROUTE40);

SoROUTE* SoROUTE41 = new SoROUTE();
SoROUTE41->setFromNode(QString("NodePosition"));
SoROUTE41->setFromField(QString("value_changed"));
SoROUTE41->setToNode(QString("transform"));
SoROUTE41->setToField(QString("set_translation"));
SoGroup17->addChild(*SoROUTE41);

SoProtoBody16->addChild(*SoGroup17);

SoProtoDeclare13->addChild(*SoProtoBody16);

SoNode12->addChild(*SoProtoDeclare13);

SoProtoDeclare* SoProtoDeclare42 = new SoProtoDeclare();
SoProtoDeclare42->setName(QString("cyl"));
SoProtoInterface* SoProtoInterface43 = new SoProtoInterface();
Sofield* Sofield44 = new Sofield();
Sofield44->setName(QString("set_positionA"));
Sofield44->setAccessType(QString("inputOutput"));
Sofield44->setType(QString("SFVec3f"));
SoProtoInterface43->addChild(*Sofield44);

Sofield* Sofield45 = new Sofield();
Sofield45->setName(QString("set_positionB"));
Sofield45->setAccessType(QString("inputOutput"));
Sofield45->setType(QString("SFVec3f"));
SoProtoInterface43->addChild(*Sofield45);

SoProtoDeclare42->addChild(*SoProtoInterface43);

SoProtoBody* SoProtoBody46 = new SoProtoBody();
SoGroup* SoGroup47 = new SoGroup();
SoShape* SoShape48 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance49 = new SoVRMLAppearance();
SoMaterial* SoMaterial50 = new SoMaterial();
SoMaterial50->setDiffuseColor(new float[]{0.0,1.0,0.0});
SoVRMLAppearance49->addChild(*SoMaterial50);

SoShape48->addChild(*SoVRMLAppearance49);

SoExtrusion* SoExtrusion51 = new SoExtrusion();
SoExtrusion51->setDEF(QString("extrusion"));
SoExtrusion51->setCreaseAngle(0.785);
SoExtrusion51->setCrossSection(new float[]{1.0,0.0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0.0,-1.0,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1.0,0.0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0.0,1.0,0.38,0.92,0.71,0.71,0.92,0.38,1.0,0.0}, 34);
SoExtrusion51->setSpine(new float[]{0.0,-50.0,0.0,0.0,0.0,0.0,0.0,50.0,0.0}, 9);
SoShape48->setGeometry(*SoExtrusion51);

SoGroup47->addChild(*SoShape48);

SoScript* SoScript52 = new SoScript();
SoScript52->setDEF(QString("MoveCylinder"));
Sofield* Sofield53 = new Sofield();
Sofield53->setName(QString("spine"));
Sofield53->setAccessType(QString("inputOutput"));
Sofield53->setType(QString("MFVec3f"));
Sofield53->setValue(QString("0 -50 0 0 0 0 0 50 0"));
SoScript52->addChild(*Sofield53);

Sofield* Sofield54 = new Sofield();
Sofield54->setName(QString("endA"));
Sofield54->setAccessType(QString("inputOutput"));
Sofield54->setType(QString("SFVec3f"));
SoScript52->addChild(*Sofield54);

Sofield* Sofield55 = new Sofield();
Sofield55->setName(QString("endB"));
Sofield55->setAccessType(QString("inputOutput"));
Sofield55->setType(QString("SFVec3f"));
SoScript52->addChild(*Sofield55);

SoIS* SoIS56 = new SoIS();
Soconnect* Soconnect57 = new Soconnect();
Soconnect57->setNodeField(QString("endA"));
Soconnect57->setProtoField(QString("set_positionA"));
SoIS56->addChild(*Soconnect57);

Soconnect* Soconnect58 = new Soconnect();
Soconnect58->setNodeField(QString("endB"));
Soconnect58->setProtoField(QString("set_positionB"));
SoIS56->addChild(*Soconnect58);

SoScript52->addChild(*SoIS56);


//SoScript52->setSourceCode(QString("ecmascript:")+
//_T("                function set_endA(value) {")+
//_T("		    spine = new MFVec3f(value, spine[1]);")+
//_T("                }")+
//_T("                function set_endB(value) {")+
//_T("		    spine = new MFVec3f(spine[0], value);")+
//_T("                }"));
SoGroup47->addChild(*SoScript52);

SoROUTE* SoROUTE59 = new SoROUTE();
SoROUTE59->setFromNode(QString("MoveCylinder"));
SoROUTE59->setFromField(QString("spine_changed"));
SoROUTE59->setToNode(QString("extrusion"));
SoROUTE59->setToField(QString("set_spine"));
SoGroup47->addChild(*SoROUTE59);

SoProtoBody46->addChild(*SoGroup47);

SoProtoDeclare42->addChild(*SoProtoBody46);

SoNode12->addChild(*SoProtoDeclare42);

SoTransform* SoTransform60 = new SoTransform();
SoTransform60->setDEF(QString("HoldsContent"));
SoTransform60->setScale(new float[]{0.1,0.1,0.1});
SoPlaneSensor* SoPlaneSensor61 = new SoPlaneSensor();
SoPlaneSensor61->setDEF(QString("clickGenerator"));
SoPlaneSensor61->setDescription(QString("click on background to add nodes, click on nodes to add links"));
SoPlaneSensor61->setMinPosition(new float[]{-50.0,-50.0});
SoPlaneSensor61->setMaxPosition(new float[]{50.0,50.0});
SoTransform60->addChild(*SoPlaneSensor61);

SoProtoInstance* SoProtoInstance62 = new SoProtoInstance();
SoProtoInstance62->setName(QString("node"));
SoProtoInstance62->setDEF(QString("nodeA"));
SoField* SoField63 = new SoField();
SoField63->setName(QString("position"));
SoField63->setValue(QString("0 1.388333 0"));
SoProtoInstance62->addChild(*SoField63);

SoTransform60->addChild(*SoProtoInstance62);

SoProtoInstance* SoProtoInstance64 = new SoProtoInstance();
SoProtoInstance64->setName(QString("node"));
SoProtoInstance64->setDEF(QString("nodeB"));
SoField* SoField65 = new SoField();
SoField65->setName(QString("position"));
SoField65->setValue(QString("0 1.388333 0"));
SoProtoInstance64->addChild(*SoField65);

SoTransform60->addChild(*SoProtoInstance64);

SoProtoInstance* SoProtoInstance66 = new SoProtoInstance();
SoProtoInstance66->setName(QString("node"));
SoProtoInstance66->setDEF(QString("nodeC"));
SoField* SoField67 = new SoField();
SoField67->setName(QString("position"));
SoField67->setValue(QString("0 1.388333 0"));
SoProtoInstance66->addChild(*SoField67);

SoTransform60->addChild(*SoProtoInstance66);

SoProtoInstance* SoProtoInstance68 = new SoProtoInstance();
SoProtoInstance68->setName(QString("node"));
SoProtoInstance68->setDEF(QString("nodeD"));
SoField* SoField69 = new SoField();
SoField69->setName(QString("position"));
SoField69->setValue(QString("0 1.388333 0"));
SoProtoInstance68->addChild(*SoField69);

SoTransform60->addChild(*SoProtoInstance68);

SoProtoInstance* SoProtoInstance70 = new SoProtoInstance();
SoProtoInstance70->setName(QString("cyl"));
SoProtoInstance70->setDEF(QString("linkA"));
SoTransform60->addChild(*SoProtoInstance70);

SoProtoInstance* SoProtoInstance71 = new SoProtoInstance();
SoProtoInstance71->setName(QString("cyl"));
SoProtoInstance71->setDEF(QString("linkB"));
SoTransform60->addChild(*SoProtoInstance71);

SoProtoInstance* SoProtoInstance72 = new SoProtoInstance();
SoProtoInstance72->setName(QString("cyl"));
SoProtoInstance72->setDEF(QString("linkC"));
SoTransform60->addChild(*SoProtoInstance72);

SoNode12->addChild(*SoTransform60);

SoScript* SoScript73 = new SoScript();
SoScript73->setDEF(QString("clickHandler"));
Sofield* Sofield74 = new Sofield();
Sofield74->setName(QString("counter"));
Sofield74->setAccessType(QString("inputOutput"));
Sofield74->setType(QString("SFInt32"));
SoScript73->addChild(*Sofield74);

Sofield* Sofield75 = new Sofield();
Sofield75->setName(QString("node_changed"));
Sofield75->setAccessType(QString("outputOnly"));
Sofield75->setType(QString("SFNode"));
SoScript73->addChild(*Sofield75);

Sofield* Sofield76 = new Sofield();
Sofield76->setName(QString("add_node"));
Sofield76->setAccessType(QString("inputOnly"));
Sofield76->setType(QString("SFBool"));
SoScript73->addChild(*Sofield76);


//SoScript73->setSourceCode(QString("ecmascript:")+
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
SoNode12->addChild(*SoScript73);

SoROUTE* SoROUTE77 = new SoROUTE();
SoROUTE77->setFromNode(QString("clickGenerator"));
SoROUTE77->setFromField(QString("isActive"));
SoROUTE77->setToNode(QString("clickHandler"));
SoROUTE77->setToField(QString("add_node"));
SoNode12->addChild(*SoROUTE77);

SoROUTE* SoROUTE78 = new SoROUTE();
SoROUTE78->setFromNode(QString("nodeA"));
SoROUTE78->setFromField(QString("position_changed"));
SoROUTE78->setToNode(QString("linkA"));
SoROUTE78->setToField(QString("set_positionA"));
SoNode12->addChild(*SoROUTE78);

SoROUTE* SoROUTE79 = new SoROUTE();
SoROUTE79->setFromNode(QString("nodeB"));
SoROUTE79->setFromField(QString("position_changed"));
SoROUTE79->setToNode(QString("linkA"));
SoROUTE79->setToField(QString("set_positionB"));
SoNode12->addChild(*SoROUTE79);

SoROUTE* SoROUTE80 = new SoROUTE();
SoROUTE80->setFromNode(QString("nodeA"));
SoROUTE80->setFromField(QString("position_changed"));
SoROUTE80->setToNode(QString("linkB"));
SoROUTE80->setToField(QString("set_positionA"));
SoNode12->addChild(*SoROUTE80);

SoROUTE* SoROUTE81 = new SoROUTE();
SoROUTE81->setFromNode(QString("nodeC"));
SoROUTE81->setFromField(QString("position_changed"));
SoROUTE81->setToNode(QString("linkB"));
SoROUTE81->setToField(QString("set_positionB"));
SoNode12->addChild(*SoROUTE81);

SoROUTE* SoROUTE82 = new SoROUTE();
SoROUTE82->setFromNode(QString("nodeA"));
SoROUTE82->setFromField(QString("position_changed"));
SoROUTE82->setToNode(QString("linkC"));
SoROUTE82->setToField(QString("set_positionA"));
SoNode12->addChild(*SoROUTE82);

SoROUTE* SoROUTE83 = new SoROUTE();
SoROUTE83->setFromNode(QString("nodeD"));
SoROUTE83->setFromField(QString("position_changed"));
SoROUTE83->setToNode(QString("linkC"));
SoROUTE83->setToField(QString("set_positionB"));
SoNode12->addChild(*SoROUTE83);

SoSceneManager0->setSceneGraph(*SoNode12);

return 0;
}
