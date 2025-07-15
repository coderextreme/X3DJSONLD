
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
SoSphere* SoSphere20 = new SoSphere();
SoShape19->setGeometry(*SoSphere20);

SoVRMLAppearance* SoVRMLAppearance21 = new SoVRMLAppearance();
SoMaterial* SoMaterial22 = new SoMaterial();
SoMaterial22->setDiffuseColor(new float[]{1.0,0.0,0.0});
SoVRMLAppearance21->addChild(*SoMaterial22);

SoShape19->addChild(*SoVRMLAppearance21);

SoTransform16->addChild(*SoShape19);

SoTransform* SoTransform23 = new SoTransform();
SoTransform23->setTranslation(new float[]{1.0,0.0,0.0});
SoShape* SoShape24 = new SoShape();
SoText* SoText25 = new SoText();
SoText25->setString(new QString[]{QString("Node")}, 1);
SoFontStyle* SoFontStyle26 = new SoFontStyle();
SoFontStyle26->setJustify(new QString[]{QString("MIDDLE"), QString("MIDDLE")}, 2);
SoFontStyle26->setSize(5);
SoText25->setFontStyle(*SoFontStyle26);

SoShape24->setGeometry(*SoText25);

SoVRMLAppearance* SoVRMLAppearance27 = new SoVRMLAppearance();
SoMaterial* SoMaterial28 = new SoMaterial();
SoMaterial28->setDiffuseColor(new float[]{0.0,0.0,1.0});
SoVRMLAppearance27->addChild(*SoMaterial28);

SoShape24->addChild(*SoVRMLAppearance27);

SoTransform23->addChild(*SoShape24);

SoTransform16->addChild(*SoTransform23);

SoGroup15->addChild(*SoTransform16);

SoPositionInterpolator* SoPositionInterpolator29 = new SoPositionInterpolator();
SoPositionInterpolator29->setDEF(QString("NodePosition"));
SoPositionInterpolator29->setKey(new float[]{0.0,1.0}, 2);
SoPositionInterpolator29->setKeyValue(new float[]{0.0,0.0,0.0,0.0,5.0,0.0}, 6);
SoGroup15->addChild(*SoPositionInterpolator29);

SoScript* SoScript30 = new SoScript();
SoScript30->setDEF(QString("MoveBall"));
Sofield* Sofield31 = new Sofield();
Sofield31->setName(QString("translation"));
Sofield31->setAccessType(QString("inputOutput"));
Sofield31->setType(QString("SFVec3f"));
Sofield31->setValue(QString("50 50 0"));
SoScript30->addChild(*Sofield31);

Sofield* Sofield32 = new Sofield();
Sofield32->setName(QString("old"));
Sofield32->setAccessType(QString("inputOutput"));
Sofield32->setType(QString("SFVec3f"));
Sofield32->setValue(QString("0 0 0"));
SoScript30->addChild(*Sofield32);

Sofield* Sofield33 = new Sofield();
Sofield33->setName(QString("set_cycle"));
Sofield33->setAccessType(QString("inputOnly"));
Sofield33->setType(QString("SFTime"));
SoScript30->addChild(*Sofield33);

Sofield* Sofield34 = new Sofield();
Sofield34->setName(QString("keyValue"));
Sofield34->setAccessType(QString("outputOnly"));
Sofield34->setType(QString("MFVec3f"));
SoScript30->addChild(*Sofield34);


//SoScript30->setSourceCode(QString("ecmascript:")+
//_T("			function set_cycle(value) {")+
//_T("				old = translation;")+
//_T("				translation = new SFVec3f(Math.random()*100-50, Math.random()*100-50, Math.random()*100-50);")+
//_T("				keyValue = new MFVec3f(old, translation);")+
//_T("			}"));
SoGroup15->addChild(*SoScript30);

SoTimeSensor* SoTimeSensor35 = new SoTimeSensor();
SoTimeSensor35->setDEF(QString("nodeClock"));
SoTimeSensor35->setCycleInterval(3);
SoTimeSensor35->setLoop(true);
SoGroup15->addChild(*SoTimeSensor35);

SoROUTE* SoROUTE36 = new SoROUTE();
SoROUTE36->setFromNode(QString("nodeClock"));
SoROUTE36->setFromField(QString("cycleTime"));
SoROUTE36->setToNode(QString("MoveBall"));
SoROUTE36->setToField(QString("set_cycle"));
SoGroup15->addChild(*SoROUTE36);

SoROUTE* SoROUTE37 = new SoROUTE();
SoROUTE37->setFromNode(QString("nodeClock"));
SoROUTE37->setFromField(QString("fraction_changed"));
SoROUTE37->setToNode(QString("NodePosition"));
SoROUTE37->setToField(QString("set_fraction"));
SoGroup15->addChild(*SoROUTE37);

SoROUTE* SoROUTE38 = new SoROUTE();
SoROUTE38->setFromNode(QString("MoveBall"));
SoROUTE38->setFromField(QString("keyValue"));
SoROUTE38->setToNode(QString("NodePosition"));
SoROUTE38->setToField(QString("keyValue"));
SoGroup15->addChild(*SoROUTE38);

SoROUTE* SoROUTE39 = new SoROUTE();
SoROUTE39->setFromNode(QString("NodePosition"));
SoROUTE39->setFromField(QString("value_changed"));
SoROUTE39->setToNode(QString("transform"));
SoROUTE39->setToField(QString("set_translation"));
SoGroup15->addChild(*SoROUTE39);

SoProtoBody14->addChild(*SoGroup15);

SoProtoDeclare11->addChild(*SoProtoBody14);

SoNode10->addChild(*SoProtoDeclare11);

SoProtoDeclare* SoProtoDeclare40 = new SoProtoDeclare();
SoProtoDeclare40->setName(QString("cyl"));
SoProtoInterface* SoProtoInterface41 = new SoProtoInterface();
Sofield* Sofield42 = new Sofield();
Sofield42->setName(QString("set_positionA"));
Sofield42->setAccessType(QString("inputOutput"));
Sofield42->setType(QString("SFVec3f"));
Sofield42->setValue(QString("0 0 0"));
SoProtoInterface41->addChild(*Sofield42);

Sofield* Sofield43 = new Sofield();
Sofield43->setName(QString("set_positionB"));
Sofield43->setAccessType(QString("inputOutput"));
Sofield43->setType(QString("SFVec3f"));
Sofield43->setValue(QString("50 50 50"));
SoProtoInterface41->addChild(*Sofield43);

SoProtoDeclare40->addChild(*SoProtoInterface41);

SoProtoBody* SoProtoBody44 = new SoProtoBody();
SoGroup* SoGroup45 = new SoGroup();
SoShape* SoShape46 = new SoShape();
SoExtrusion* SoExtrusion47 = new SoExtrusion();
SoExtrusion47->setDEF(QString("extrusion"));
SoExtrusion47->setCreaseAngle(0.785);
SoExtrusion47->setCrossSection(new float[]{1.0,0.0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0.0,-1.0,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1.0,0.0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0.0,1.0,0.38,0.92,0.71,0.71,0.92,0.38,1.0,0.0}, 34);
SoExtrusion47->setSpine(new float[]{0.0,-50.0,0.0,0.0,0.0,0.0,0.0,50.0,0.0}, 9);
SoShape46->setGeometry(*SoExtrusion47);

SoVRMLAppearance* SoVRMLAppearance48 = new SoVRMLAppearance();
SoMaterial* SoMaterial49 = new SoMaterial();
SoMaterial49->setDiffuseColor(new float[]{0.0,1.0,0.0});
SoVRMLAppearance48->addChild(*SoMaterial49);

SoShape46->addChild(*SoVRMLAppearance48);

SoGroup45->addChild(*SoShape46);

SoScript* SoScript50 = new SoScript();
SoScript50->setDEF(QString("MoveCylinder"));
Sofield* Sofield51 = new Sofield();
Sofield51->setName(QString("spine"));
Sofield51->setAccessType(QString("inputOutput"));
Sofield51->setType(QString("MFVec3f"));
Sofield51->setValue(QString("0 -50 0 0 0 0 0 50 0"));
SoScript50->addChild(*Sofield51);

Sofield* Sofield52 = new Sofield();
Sofield52->setName(QString("endA"));
Sofield52->setAccessType(QString("inputOutput"));
Sofield52->setType(QString("SFVec3f"));
Sofield52->setValue(QString("0 0 0"));
SoScript50->addChild(*Sofield52);

Sofield* Sofield53 = new Sofield();
Sofield53->setName(QString("endB"));
Sofield53->setAccessType(QString("inputOutput"));
Sofield53->setType(QString("SFVec3f"));
Sofield53->setValue(QString("50 50 50"));
SoScript50->addChild(*Sofield53);

SoIS* SoIS54 = new SoIS();
Soconnect* Soconnect55 = new Soconnect();
Soconnect55->setNodeField(QString("endA"));
Soconnect55->setProtoField(QString("set_positionA"));
SoIS54->addChild(*Soconnect55);

Soconnect* Soconnect56 = new Soconnect();
Soconnect56->setNodeField(QString("endB"));
Soconnect56->setProtoField(QString("set_positionB"));
SoIS54->addChild(*Soconnect56);

SoScript50->addChild(*SoIS54);


//SoScript50->setSourceCode(QString("ecmascript:")+
//_T("			function set_endA(value) {")+
//_T("				spine = new MFVec3f(value, spine[1]);")+
//_T("			}")+
//_T("			function set_endB(value) {")+
//_T("				spine = new MFVec3f(spine[0], value);")+
//_T("			}"));
SoGroup45->addChild(*SoScript50);

SoROUTE* SoROUTE57 = new SoROUTE();
SoROUTE57->setFromNode(QString("MoveCylinder"));
SoROUTE57->setFromField(QString("spine"));
SoROUTE57->setToNode(QString("extrusion"));
SoROUTE57->setToField(QString("set_spine"));
SoGroup45->addChild(*SoROUTE57);

SoProtoBody44->addChild(*SoGroup45);

SoProtoDeclare40->addChild(*SoProtoBody44);

SoNode10->addChild(*SoProtoDeclare40);

SoTransform* SoTransform58 = new SoTransform();
SoTransform58->setDEF(QString("HoldsContent"));
SoTransform58->setScale(new float[]{0.1,0.1,0.1});
SoPlaneSensor* SoPlaneSensor59 = new SoPlaneSensor();
SoPlaneSensor59->setDEF(QString("clickGenerator"));
SoPlaneSensor59->setMinPosition(new float[]{-50.0,-50.0});
SoPlaneSensor59->setMaxPosition(new float[]{50.0,50.0});
SoPlaneSensor59->setDescription(QString("click on background to add nodes, click on nodes to add links"));
SoTransform58->addChild(*SoPlaneSensor59);

SoProtoInstance* SoProtoInstance60 = new SoProtoInstance();
SoProtoInstance60->setName(QString("node"));
SoProtoInstance60->setDEF(QString("nodeA"));
SoField* SoField61 = new SoField();
SoField61->setName(QString("position"));
SoField61->setValue(QString("0 0 0"));
SoProtoInstance60->addChild(*SoField61);

SoTransform58->addChild(*SoProtoInstance60);

SoProtoInstance* SoProtoInstance62 = new SoProtoInstance();
SoProtoInstance62->setName(QString("node"));
SoProtoInstance62->setDEF(QString("nodeB"));
SoField* SoField63 = new SoField();
SoField63->setName(QString("position"));
SoField63->setValue(QString("50 50 50"));
SoProtoInstance62->addChild(*SoField63);

SoTransform58->addChild(*SoProtoInstance62);

SoProtoInstance* SoProtoInstance64 = new SoProtoInstance();
SoProtoInstance64->setName(QString("node"));
SoProtoInstance64->setDEF(QString("nodeC"));
SoField* SoField65 = new SoField();
SoField65->setName(QString("position"));
SoField65->setValue(QString("-50 -50 -50"));
SoProtoInstance64->addChild(*SoField65);

SoTransform58->addChild(*SoProtoInstance64);

SoProtoInstance* SoProtoInstance66 = new SoProtoInstance();
SoProtoInstance66->setName(QString("node"));
SoProtoInstance66->setDEF(QString("nodeD"));
SoField* SoField67 = new SoField();
SoField67->setName(QString("position"));
SoField67->setValue(QString("50 50 -50"));
SoProtoInstance66->addChild(*SoField67);

SoTransform58->addChild(*SoProtoInstance66);

SoProtoInstance* SoProtoInstance68 = new SoProtoInstance();
SoProtoInstance68->setName(QString("cyl"));
SoProtoInstance68->setDEF(QString("linkA"));
SoTransform58->addChild(*SoProtoInstance68);

SoProtoInstance* SoProtoInstance69 = new SoProtoInstance();
SoProtoInstance69->setName(QString("cyl"));
SoProtoInstance69->setDEF(QString("linkB"));
SoTransform58->addChild(*SoProtoInstance69);

SoProtoInstance* SoProtoInstance70 = new SoProtoInstance();
SoProtoInstance70->setName(QString("cyl"));
SoProtoInstance70->setDEF(QString("linkC"));
SoTransform58->addChild(*SoProtoInstance70);

SoNode10->addChild(*SoTransform58);

SoScript* SoScript71 = new SoScript();
SoScript71->setDEF(QString("clickHandler"));
Sofield* Sofield72 = new Sofield();
Sofield72->setName(QString("counter"));
Sofield72->setAccessType(QString("inputOutput"));
Sofield72->setValue(QString("0"));
Sofield72->setType(QString("SFInt32"));
SoScript71->addChild(*Sofield72);

Sofield* Sofield73 = new Sofield();
Sofield73->setName(QString("add_node"));
Sofield73->setAccessType(QString("inputOnly"));
Sofield73->setValue(QString("false"));
Sofield73->setType(QString("SFBool"));
SoScript71->addChild(*Sofield73);

//<field accessType=\"outputOnly\" name=\"node_changed\" type=\"SFNode\"/> <field name=\"ModifiableNode\" type=\"SFNode\" accessType=\"inputOutput\"> <Transform USE=\"HoldsContent\"/> </field>

//SoScript71->setSourceCode(QString("ecmascript:")+
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
SoNode10->addChild(*SoScript71);

SoROUTE* SoROUTE74 = new SoROUTE();
SoROUTE74->setFromNode(QString("clickGenerator"));
SoROUTE74->setFromField(QString("isActive"));
SoROUTE74->setToNode(QString("clickHandler"));
SoROUTE74->setToField(QString("add_node"));
SoNode10->addChild(*SoROUTE74);

SoROUTE* SoROUTE75 = new SoROUTE();
SoROUTE75->setFromNode(QString("nodeA"));
SoROUTE75->setFromField(QString("position"));
SoROUTE75->setToNode(QString("linkA"));
SoROUTE75->setToField(QString("set_positionA"));
SoNode10->addChild(*SoROUTE75);

SoROUTE* SoROUTE76 = new SoROUTE();
SoROUTE76->setFromNode(QString("nodeB"));
SoROUTE76->setFromField(QString("position"));
SoROUTE76->setToNode(QString("linkA"));
SoROUTE76->setToField(QString("set_positionB"));
SoNode10->addChild(*SoROUTE76);

SoROUTE* SoROUTE77 = new SoROUTE();
SoROUTE77->setFromNode(QString("nodeA"));
SoROUTE77->setFromField(QString("position"));
SoROUTE77->setToNode(QString("linkB"));
SoROUTE77->setToField(QString("set_positionA"));
SoNode10->addChild(*SoROUTE77);

SoROUTE* SoROUTE78 = new SoROUTE();
SoROUTE78->setFromNode(QString("nodeC"));
SoROUTE78->setFromField(QString("position"));
SoROUTE78->setToNode(QString("linkB"));
SoROUTE78->setToField(QString("set_positionB"));
SoNode10->addChild(*SoROUTE78);

SoROUTE* SoROUTE79 = new SoROUTE();
SoROUTE79->setFromNode(QString("nodeA"));
SoROUTE79->setFromField(QString("position"));
SoROUTE79->setToNode(QString("linkC"));
SoROUTE79->setToField(QString("set_positionA"));
SoNode10->addChild(*SoROUTE79);

SoROUTE* SoROUTE80 = new SoROUTE();
SoROUTE80->setFromNode(QString("nodeD"));
SoROUTE80->setFromField(QString("position"));
SoROUTE80->setToNode(QString("linkC"));
SoROUTE80->setToField(QString("set_positionB"));
SoNode10->addChild(*SoROUTE80);

SoSceneManager0->setSceneGraph(*SoNode10);

return 0;
}
