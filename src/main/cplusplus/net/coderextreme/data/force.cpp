/* delete next 5 lines for Visual Studio */
#define FALSE false
#define TRUE true
#define WINAPI
#define AFX_EXT_CLASS
#define EXPORT32
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/CylinderExample/CylinderExample/pch.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/CylinderExample/CylinderExample/framework.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/CylinderExample/include/XML_PARSER.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/CylinderExample/include/X3DLib.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/CylinderExample/include/Abstracts.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/CylinderExample/include/Concretes.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/CylinderExample/include/glMath.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/CylinderExample/include/glut.h"
int main(int argc, char ** argv) {
X3D* X3D0 = new X3D();
X3D0->setProfile("Immersive");
X3D0->setVersion("4.0");
head* head1 = new head();
component* component2 = new component();
component2->setName("Scripting");
component2->setLevel(1);
head1->addComponent(component2);

meta* meta3 = new meta();
meta3->setName("creator");
meta3->setContent("John W Carlson");
head1->addMeta(meta3);

meta* meta4 = new meta();
meta4->setName("created");
meta4->setContent("December 13 2015");
head1->addMeta(meta4);

meta* meta5 = new meta();
meta5->setName("title");
meta5->setContent("force.x3d");
head1->addMeta(meta5);

meta* meta6 = new meta();
meta6->setName("identifier");
meta6->setContent("https://coderextreme.net/X3DJSONLD/src/main/data/force.x3d");
head1->addMeta(meta6);

meta* meta7 = new meta();
meta7->setName("description");
meta7->setContent("beginnings of a force directed graph in 3D");
head1->addMeta(meta7);

meta* meta8 = new meta();
meta8->setName("generator");
meta8->setContent("Vim, X3D-Edit, https://savage.nps.edu/X3D-Edit");
head1->addMeta(meta8);

X3D0->setHead(head1);

Scene* Scene9 = new Scene();
ProtoDeclare* ProtoDeclare10 = new ProtoDeclare();
ProtoDeclare10->setName("node");
ProtoInterface* ProtoInterface11 = new ProtoInterface();
field* field12 = new field();
field12->setName("position");
field12->setAccessType("inputOutput");
field12->setType("SFVec3f");
field12->setValue("0 0 0");
ProtoInterface11->addField(field12);

ProtoDeclare10->setProtoInterface(ProtoInterface11);

ProtoBody* ProtoBody13 = new ProtoBody();
Group* Group14 = new Group();
Transform* Transform15 = new Transform();
Transform15->setDEF("transform");
IS* IS16 = new IS();
Connect* connect17 = new Connect();
connect17->setNodeField("translation");
connect17->setProtoField("position");
IS16->addConnect(connect17);

Transform15->setIS(IS16);

Shape* Shape18 = new Shape();
Sphere* Sphere19 = new Sphere();
Shape18->setGeometry(Sphere19);

Appearance* Appearance20 = new Appearance();
Material* Material21 = new Material();
Material21->setDiffuseColor(new float[3]{1,0,0});
Appearance20->setMaterial(Material21);

Shape18->setAppearance(Appearance20);

Transform15->addChild(Shape18);

Transform* Transform22 = new Transform();
Transform22->setTranslation(new float[3]{1,0,0});
Shape* Shape23 = new Shape();
Text* Text24 = new Text();
Text24->setString(new String[1]{"Node"}, 1);
FontStyle* FontStyle25 = new FontStyle();
FontStyle25->setJustify(new String[2]{"MIDDLE","MIDDLE"}, 2);
FontStyle25->setSize(5);
Text24->setFontStyle(FontStyle25);

Shape23->setGeometry(Text24);

Appearance* Appearance26 = new Appearance();
Material* Material27 = new Material();
Material27->setDiffuseColor(new float[3]{0,0,1});
Appearance26->setMaterial(Material27);

Shape23->setAppearance(Appearance26);

Transform22->addChild(Shape23);

Transform15->addChild(Transform22);

Group14->addChild(Transform15);

PositionInterpolator* PositionInterpolator28 = new PositionInterpolator();
PositionInterpolator28->setDEF("NodePosition");
PositionInterpolator28->setKey(new float[2]{0,1}, 2);
PositionInterpolator28->setKeyValue(new float[6]{0,0,0,0,5,0});
Group14->addChild(PositionInterpolator28);

Script* Script29 = new Script();
Script29->setDEF("MoveBall");
field* field30 = new field();
field30->setName("translation");
field30->setAccessType("inputOutput");
field30->setType("SFVec3f");
field30->setValue("50 50 0");
Script29->addField(field30);

field* field31 = new field();
field31->setName("old");
field31->setAccessType("inputOutput");
field31->setType("SFVec3f");
field31->setValue("0 0 0");
Script29->addField(field31);

field* field32 = new field();
field32->setName("set_cycle");
field32->setAccessType("inputOnly");
field32->setType("SFTime");
Script29->addField(field32);

field* field33 = new field();
field33->setName("keyValue");
field33->setAccessType("outputOnly");
field33->setType("MFVec3f");
Script29->addField(field33);


Script29.setSourceCode(`ecmascript:\n"+
"					function set_cycle(value) {\n"+
"                                                old = translation;\n"+
"						translation = new SFVec3f(Math.random()*100-50, Math.random()*100-50, Math.random()*100-50);\n"+
"                                                keyValue = new MFVec3f([old, translation]);\n"+
"						// Browser.println(translation);\n"+
"					}`)
Group14->addChild(Script29);

TimeSensor* TimeSensor34 = new TimeSensor();
TimeSensor34->setDEF("nodeClock");
TimeSensor34->setCycleInterval(3);
TimeSensor34->setLoop(True);
Group14->addChild(TimeSensor34);

ROUTE* ROUTE35 = new ROUTE();
ROUTE35->setFromNode("nodeClock");
ROUTE35->setFromField("cycleTime");
ROUTE35->setToNode("MoveBall");
ROUTE35->setToField("set_cycle");
Group14->addChild(ROUTE35);

ROUTE* ROUTE36 = new ROUTE();
ROUTE36->setFromNode("nodeClock");
ROUTE36->setFromField("fraction_changed");
ROUTE36->setToNode("NodePosition");
ROUTE36->setToField("set_fraction");
Group14->addChild(ROUTE36);

ROUTE* ROUTE37 = new ROUTE();
ROUTE37->setFromNode("MoveBall");
ROUTE37->setFromField("keyValue");
ROUTE37->setToNode("NodePosition");
ROUTE37->setToField("keyValue");
Group14->addChild(ROUTE37);

ROUTE* ROUTE38 = new ROUTE();
ROUTE38->setFromNode("NodePosition");
ROUTE38->setFromField("value_changed");
ROUTE38->setToNode("transform");
ROUTE38->setToField("set_translation");
Group14->addChild(ROUTE38);

ProtoBody13->addChild(Group14);

ProtoDeclare10->setProtoBody(ProtoBody13);

Scene9->addChild(ProtoDeclare10);

ProtoDeclare* ProtoDeclare39 = new ProtoDeclare();
ProtoDeclare39->setName("cyl");
ProtoInterface* ProtoInterface40 = new ProtoInterface();
field* field41 = new field();
field41->setName("set_positionA");
field41->setAccessType("inputOnly");
field41->setType("SFVec3f");
ProtoInterface40->addField(field41);

field* field42 = new field();
field42->setName("set_positionB");
field42->setAccessType("inputOnly");
field42->setType("SFVec3f");
ProtoInterface40->addField(field42);

ProtoDeclare39->setProtoInterface(ProtoInterface40);

ProtoBody* ProtoBody43 = new ProtoBody();
Group* Group44 = new Group();
Shape* Shape45 = new Shape();
Extrusion* Extrusion46 = new Extrusion();
Extrusion46->setDEF("extrusion");
Extrusion46->setCreaseAngle(0.785);
Extrusion46->setCrossSection(new float[34]{1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0});
Extrusion46->setSpine(new float[6]{0,-50,0,0,50,0});
Shape45->setGeometry(Extrusion46);

Appearance* Appearance47 = new Appearance();
Material* Material48 = new Material();
Material48->setDiffuseColor(new float[3]{0,1,0});
Appearance47->setMaterial(Material48);

Shape45->setAppearance(Appearance47);

Group44->addChild(Shape45);

Script* Script49 = new Script();
Script49->setDEF("MoveCylinder");
field* field50 = new field();
field50->setName("spine");
field50->setAccessType("inputOutput");
field50->setType("MFVec3f");
field50->setValue("0 -50 0 0 50 0");
Script49->addField(field50);

field* field51 = new field();
field51->setName("set_endA");
field51->setAccessType("inputOnly");
field51->setType("SFVec3f");
Script49->addField(field51);

field* field52 = new field();
field52->setName("set_endB");
field52->setAccessType("inputOnly");
field52->setType("SFVec3f");
Script49->addField(field52);

IS* IS53 = new IS();
Connect* connect54 = new Connect();
connect54->setNodeField("set_endA");
connect54->setProtoField("set_positionA");
IS53->addConnect(connect54);

Connect* connect55 = new Connect();
connect55->setNodeField("set_endB");
connect55->setProtoField("set_positionB");
IS53->addConnect(connect55);

Script49->setIS(IS53);


Script49.setSourceCode(`ecmascript:\n"+
"\n"+
"                function set_endA(value) {\n"+
"		    if (typeof spine === 'undefined') {\n"+
"		        spine = new MFVec3f([value, value]);\n"+
"		    } else {\n"+
"		        spine = new MFVec3f([value, spine[1]]);\n"+
"		    }\n"+
"                }\n"+
"\n"+
"                function set_endB(value) {\n"+
"		    if (typeof spine === 'undefined') {\n"+
"		        spine = new MFVec3f([value, value]);\n"+
"		    } else {\n"+
"		        spine = new MFVec3f([spine[0], value]);\n"+
"		    }\n"+
"                }\n"+
"\n"+
"                function set_spine(value) {\n"+
"                    spine = value;\n"+
"                }`)
Group44->addChild(Script49);

ROUTE* ROUTE56 = new ROUTE();
ROUTE56->setFromNode("MoveCylinder");
ROUTE56->setFromField("spine");
ROUTE56->setToNode("extrusion");
ROUTE56->setToField("set_spine");
Group44->addChild(ROUTE56);

ProtoBody43->addChild(Group44);

ProtoDeclare39->setProtoBody(ProtoBody43);

Scene9->addChild(ProtoDeclare39);

Transform* Transform57 = new Transform();
Transform57->setDEF("HoldsContent");
Transform57->setScale(new float[3]{0.1,0.1,0.1});
PlaneSensor* PlaneSensor58 = new PlaneSensor();
PlaneSensor58->setDEF("clickGenerator");
PlaneSensor58->setMinPosition(new float[2]{-50,-50});
PlaneSensor58->setMaxPosition(new float[2]{50,50});
PlaneSensor58->setDescription("click on background to add nodes, click on nodes to add links");
Transform57->addChild(PlaneSensor58);

ProtoInstance* ProtoInstance59 = new ProtoInstance();
ProtoInstance59->setName("node");
ProtoInstance59->setDEF("nodeA");
fieldValue* fieldValue60 = new fieldValue();
fieldValue60->setName("position");
fieldValue60->setValue("0 0 0");
ProtoInstance59->addFieldValue(fieldValue60);

Transform57->addChild(ProtoInstance59);

ProtoInstance* ProtoInstance61 = new ProtoInstance();
ProtoInstance61->setName("node");
ProtoInstance61->setDEF("nodeB");
fieldValue* fieldValue62 = new fieldValue();
fieldValue62->setName("position");
fieldValue62->setValue("50 50 50");
ProtoInstance61->addFieldValue(fieldValue62);

Transform57->addChild(ProtoInstance61);

ProtoInstance* ProtoInstance63 = new ProtoInstance();
ProtoInstance63->setName("node");
ProtoInstance63->setDEF("nodeC");
fieldValue* fieldValue64 = new fieldValue();
fieldValue64->setName("position");
fieldValue64->setValue("-50 -50 -50");
ProtoInstance63->addFieldValue(fieldValue64);

Transform57->addChild(ProtoInstance63);

ProtoInstance* ProtoInstance65 = new ProtoInstance();
ProtoInstance65->setName("node");
ProtoInstance65->setDEF("nodeD");
fieldValue* fieldValue66 = new fieldValue();
fieldValue66->setName("position");
fieldValue66->setValue("50 50 -50");
ProtoInstance65->addFieldValue(fieldValue66);

Transform57->addChild(ProtoInstance65);

ProtoInstance* ProtoInstance67 = new ProtoInstance();
ProtoInstance67->setName("cyl");
ProtoInstance67->setDEF("linkA");
fieldValue* fieldValue68 = new fieldValue();
fieldValue68->setName("set_positionA");
fieldValue68->setValue("0 0 0");
ProtoInstance67->addFieldValue(fieldValue68);

fieldValue* fieldValue69 = new fieldValue();
fieldValue69->setName("set_positionB");
fieldValue69->setValue("50 50 50");
ProtoInstance67->addFieldValue(fieldValue69);

Transform57->addChild(ProtoInstance67);

ProtoInstance* ProtoInstance70 = new ProtoInstance();
ProtoInstance70->setName("cyl");
ProtoInstance70->setDEF("linkB");
fieldValue* fieldValue71 = new fieldValue();
fieldValue71->setName("set_positionA");
fieldValue71->setValue("0 0 0");
ProtoInstance70->addFieldValue(fieldValue71);

fieldValue* fieldValue72 = new fieldValue();
fieldValue72->setName("set_positionB");
fieldValue72->setValue("-50 -50 -50");
ProtoInstance70->addFieldValue(fieldValue72);

Transform57->addChild(ProtoInstance70);

ProtoInstance* ProtoInstance73 = new ProtoInstance();
ProtoInstance73->setName("cyl");
ProtoInstance73->setDEF("linkC");
fieldValue* fieldValue74 = new fieldValue();
fieldValue74->setName("set_positionA");
fieldValue74->setValue("50 50 50");
ProtoInstance73->addFieldValue(fieldValue74);

fieldValue* fieldValue75 = new fieldValue();
fieldValue75->setName("set_positionB");
fieldValue75->setValue("50 50 -50");
ProtoInstance73->addFieldValue(fieldValue75);

Transform57->addChild(ProtoInstance73);

Scene9->addChild(Transform57);

Script* Script76 = new Script();
Script76->setDEF("clickHandler");
field* field77 = new field();
field77->setName("counter");
field77->setAccessType("inputOutput");
field77->setValue("0");
field77->setType("SFInt32");
Script76->addField(field77);

field* field78 = new field();
field78->setName("node_changed");
field78->setAccessType("outputOnly");
field78->setType("SFNode");
Script76->addField(field78);

field* field79 = new field();
field79->setName("add_node");
field79->setAccessType("inputOnly");
field79->setValue("false");
field79->setType("SFBool");
Script76->addField(field79);

//<field name=\"ModifiableNode\" type=\"SFNode\" accessType=\"inputOutput\"> <Transform USE=\"HoldsContent\"/> </field>

Script76.setSourceCode(`ecmascript:\n"+
"	function add_node(value) {\n"+
"                // Browser.print('hey ', counter);\n"+
"                counter = counter++;\n"+
"		Browser.appendTo(Browser.getDocument().querySelector(\"field [name=ModifiableNode]\"),\n"+
"			{ \"ProtoInstance\":\n"+
"				{ \"@name\":\"node\",\n"+
"				  \"@DEF\":\"node'+counter+'\",\n"+
"				  \"fieldValue\": [\n"+
"					{\n"+
"						 \"@name\":\"position\",\n"+
"						 \"@value\":[0.0,0.0,0.0]\n"+
"					}\n"+
"				  ]\n"+
"				}\n"+
"			});\n"+
"\n"+
"        }`)
Scene9->addChild(Script76);

ROUTE* ROUTE80 = new ROUTE();
ROUTE80->setFromNode("clickGenerator");
ROUTE80->setFromField("isActive");
ROUTE80->setToNode("clickHandler");
ROUTE80->setToField("add_node");
Scene9->addChild(ROUTE80);

ROUTE* ROUTE81 = new ROUTE();
ROUTE81->setFromNode("nodeA");
ROUTE81->setFromField("position");
ROUTE81->setToNode("linkA");
ROUTE81->setToField("set_positionA");
Scene9->addChild(ROUTE81);

ROUTE* ROUTE82 = new ROUTE();
ROUTE82->setFromNode("nodeB");
ROUTE82->setFromField("position");
ROUTE82->setToNode("linkA");
ROUTE82->setToField("set_positionB");
Scene9->addChild(ROUTE82);

ROUTE* ROUTE83 = new ROUTE();
ROUTE83->setFromNode("nodeA");
ROUTE83->setFromField("position");
ROUTE83->setToNode("linkB");
ROUTE83->setToField("set_positionA");
Scene9->addChild(ROUTE83);

ROUTE* ROUTE84 = new ROUTE();
ROUTE84->setFromNode("nodeC");
ROUTE84->setFromField("position");
ROUTE84->setToNode("linkB");
ROUTE84->setToField("set_positionB");
Scene9->addChild(ROUTE84);

ROUTE* ROUTE85 = new ROUTE();
ROUTE85->setFromNode("nodeA");
ROUTE85->setFromField("position");
ROUTE85->setToNode("linkC");
ROUTE85->setToField("set_positionA");
Scene9->addChild(ROUTE85);

ROUTE* ROUTE86 = new ROUTE();
ROUTE86->setFromNode("nodeD");
ROUTE86->setFromField("position");
ROUTE86->setToNode("linkC");
ROUTE86->setToField("set_positionB");
Scene9->addChild(ROUTE86);

X3D0->setScene(Scene9);

X3D0->toXMLString();
}
