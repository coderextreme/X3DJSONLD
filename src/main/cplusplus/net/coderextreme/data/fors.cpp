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
X3D0->setVersion("3.3");
head* head1 = new head();
meta* meta2 = new meta();
meta2->setName("creator");
meta2->setContent("John W Carlson");
head1->addMeta(meta2);

meta* meta3 = new meta();
meta3->setName("created");
meta3->setContent("December 13 2015");
head1->addMeta(meta3);

meta* meta4 = new meta();
meta4->setName("title");
meta4->setContent("fors.x3d");
head1->addMeta(meta4);

meta* meta5 = new meta();
meta5->setName("identifier");
meta5->setContent("https://coderextreme.net/X3DJSONLD/src/main/data/force.x3d");
head1->addMeta(meta5);

meta* meta6 = new meta();
meta6->setName("description");
meta6->setContent("beginnings of a force directed graph in 3D");
head1->addMeta(meta6);

meta* meta7 = new meta();
meta7->setName("generator");
meta7->setContent("Vim, X3D-Edit, https://savage.nps.edu/X3D-Edit");
head1->addMeta(meta7);

X3D0->setHead(head1);

Scene* Scene8 = new Scene();
ProtoDeclare* ProtoDeclare9 = new ProtoDeclare();
ProtoDeclare9->setName("node");
ProtoInterface* ProtoInterface10 = new ProtoInterface();
field* field11 = new field();
field11->setName("position");
field11->setAccessType("inputOutput");
field11->setType("SFVec3f");
field11->setValue("0 0 0");
ProtoInterface10->addField(field11);

ProtoDeclare9->setProtoInterface(ProtoInterface10);

ProtoBody* ProtoBody12 = new ProtoBody();
Transform* Transform13 = new Transform();
Transform13->setDEF("transform");
IS* IS14 = new IS();
Connect* connect15 = new Connect();
connect15->setNodeField("translation");
connect15->setProtoField("position");
IS14->addConnect(connect15);

Transform13->setIS(IS14);

Shape* Shape16 = new Shape();
Sphere* Sphere17 = new Sphere();
Shape16->setGeometry(Sphere17);

Appearance* Appearance18 = new Appearance();
Material* Material19 = new Material();
Material19->setDiffuseColor(new float[3]{1,0,0});
Appearance18->setMaterial(Material19);

Shape16->setAppearance(Appearance18);

Transform13->addChild(Shape16);

Transform* Transform20 = new Transform();
Transform20->setTranslation(new float[3]{1,0,0});
Shape* Shape21 = new Shape();
Text* Text22 = new Text();
Text22->setString(new String[1]{"Node"}, 1);
FontStyle* FontStyle23 = new FontStyle();
FontStyle23->setJustify(new String[2]{"MIDDLE","MIDDLE"}, 2);
FontStyle23->setSize(5);
Text22->setFontStyle(FontStyle23);

Shape21->setGeometry(Text22);

Appearance* Appearance24 = new Appearance();
Material* Material25 = new Material();
Material25->setDiffuseColor(new float[3]{0,0,1});
Appearance24->setMaterial(Material25);

Shape21->setAppearance(Appearance24);

Transform20->addChild(Shape21);

Transform13->addChild(Transform20);

ProtoBody12->addChild(Transform13);

PositionInterpolator* PositionInterpolator26 = new PositionInterpolator();
PositionInterpolator26->setDEF("NodePosition");
PositionInterpolator26->setKey(new float[2]{0,1}, 2);
PositionInterpolator26->setKeyValue(new float[6]{0,0,0,0,5,0});
ProtoBody12->addChild(PositionInterpolator26);

Script* Script27 = new Script();
Script27->setDEF("MoveBall");
field* field28 = new field();
field28->setName("translation");
field28->setAccessType("inputOutput");
field28->setType("SFVec3f");
field28->setValue("50 50 0");
Script27->addField(field28);

field* field29 = new field();
field29->setName("old");
field29->setAccessType("inputOutput");
field29->setType("SFVec3f");
field29->setValue("0 0 0");
Script27->addField(field29);

field* field30 = new field();
field30->setName("set_cycle");
field30->setAccessType("inputOnly");
field30->setType("SFTime");
Script27->addField(field30);

field* field31 = new field();
field31->setName("keyValue");
field31->setAccessType("outputOnly");
field31->setType("MFVec3f");
Script27->addField(field31);


Script27.setSourceCode(`ecmascript:\n"+
"					function set_cycle(value) {\n"+
"                                                old = translation;\n"+
"						translation = new SFVec3f(Math.random()*100-50, Math.random()*100-50, Math.random()*100-50);\n"+
"                                                keyValue = new MFVec3f([old, translation]);\n"+
"						// Browser.println(translation);\n"+
"					}`)
ProtoBody12->addChild(Script27);

TimeSensor* TimeSensor32 = new TimeSensor();
TimeSensor32->setDEF("nodeClock");
TimeSensor32->setCycleInterval(3);
TimeSensor32->setLoop(True);
ProtoBody12->addChild(TimeSensor32);

ROUTE* ROUTE33 = new ROUTE();
ROUTE33->setFromNode("nodeClock");
ROUTE33->setFromField("cycleTime");
ROUTE33->setToNode("MoveBall");
ROUTE33->setToField("set_cycle");
ProtoBody12->addChild(ROUTE33);

ROUTE* ROUTE34 = new ROUTE();
ROUTE34->setFromNode("nodeClock");
ROUTE34->setFromField("fraction_changed");
ROUTE34->setToNode("NodePosition");
ROUTE34->setToField("set_fraction");
ProtoBody12->addChild(ROUTE34);

ROUTE* ROUTE35 = new ROUTE();
ROUTE35->setFromNode("MoveBall");
ROUTE35->setFromField("keyValue");
ROUTE35->setToNode("NodePosition");
ROUTE35->setToField("keyValue");
ProtoBody12->addChild(ROUTE35);

ROUTE* ROUTE36 = new ROUTE();
ROUTE36->setFromNode("NodePosition");
ROUTE36->setFromField("value_changed");
ROUTE36->setToNode("transform");
ROUTE36->setToField("set_translation");
ProtoBody12->addChild(ROUTE36);

ProtoDeclare9->setProtoBody(ProtoBody12);

Scene8->addChild(ProtoDeclare9);

ProtoDeclare* ProtoDeclare37 = new ProtoDeclare();
ProtoDeclare37->setName("cyl");
ProtoInterface* ProtoInterface38 = new ProtoInterface();
field* field39 = new field();
field39->setName("set_positionA");
field39->setAccessType("inputOnly");
field39->setType("SFVec3f");
ProtoInterface38->addField(field39);

field* field40 = new field();
field40->setName("set_positionB");
field40->setAccessType("inputOnly");
field40->setType("SFVec3f");
ProtoInterface38->addField(field40);

ProtoDeclare37->setProtoInterface(ProtoInterface38);

ProtoBody* ProtoBody41 = new ProtoBody();
Shape* Shape42 = new Shape();
Extrusion* Extrusion43 = new Extrusion();
Extrusion43->setDEF("extrusion");
Extrusion43->setCreaseAngle(0.785);
Extrusion43->setCrossSection(new float[34]{1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0});
Extrusion43->setSpine(new float[6]{0,-50,0,0,50,0});
Shape42->setGeometry(Extrusion43);

Appearance* Appearance44 = new Appearance();
Material* Material45 = new Material();
Material45->setDiffuseColor(new float[3]{0,1,0});
Appearance44->setMaterial(Material45);

Shape42->setAppearance(Appearance44);

ProtoBody41->addChild(Shape42);

Script* Script46 = new Script();
Script46->setDEF("MoveCylinder");
field* field47 = new field();
field47->setName("spine");
field47->setAccessType("inputOutput");
field47->setType("MFVec3f");
field47->setValue("0 -50 0 0 50 0");
Script46->addField(field47);

field* field48 = new field();
field48->setName("set_endA");
field48->setAccessType("inputOnly");
field48->setType("SFVec3f");
Script46->addField(field48);

field* field49 = new field();
field49->setName("set_endB");
field49->setAccessType("inputOnly");
field49->setType("SFVec3f");
Script46->addField(field49);

IS* IS50 = new IS();
Connect* connect51 = new Connect();
connect51->setNodeField("set_endA");
connect51->setProtoField("set_positionA");
IS50->addConnect(connect51);

Connect* connect52 = new Connect();
connect52->setNodeField("set_endB");
connect52->setProtoField("set_positionB");
IS50->addConnect(connect52);

Script46->setIS(IS50);


Script46.setSourceCode(`ecmascript:\n"+
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
ProtoBody41->addChild(Script46);

ROUTE* ROUTE53 = new ROUTE();
ROUTE53->setFromNode("MoveCylinder");
ROUTE53->setFromField("spine");
ROUTE53->setToNode("extrusion");
ROUTE53->setToField("set_spine");
ProtoBody41->addChild(ROUTE53);

ProtoDeclare37->setProtoBody(ProtoBody41);

Scene8->addChild(ProtoDeclare37);

Transform* Transform54 = new Transform();
Transform54->setDEF("HoldsContent");
Transform54->setScale(new float[3]{0.1,0.1,0.1});
PlaneSensor* PlaneSensor55 = new PlaneSensor();
PlaneSensor55->setDEF("clickGenerator");
PlaneSensor55->setMinPosition(new float[2]{-50,-50});
PlaneSensor55->setMaxPosition(new float[2]{50,50});
PlaneSensor55->setDescription("click on background to add nodes, click on nodes to add links");
Transform54->addChild(PlaneSensor55);

ProtoInstance* ProtoInstance56 = new ProtoInstance();
ProtoInstance56->setName("node");
ProtoInstance56->setDEF("nodeA");
fieldValue* fieldValue57 = new fieldValue();
fieldValue57->setName("position");
fieldValue57->setValue("0 0 0");
ProtoInstance56->addFieldValue(fieldValue57);

Transform54->addChild(ProtoInstance56);

ProtoInstance* ProtoInstance58 = new ProtoInstance();
ProtoInstance58->setName("node");
ProtoInstance58->setDEF("nodeB");
fieldValue* fieldValue59 = new fieldValue();
fieldValue59->setName("position");
fieldValue59->setValue("50 50 50");
ProtoInstance58->addFieldValue(fieldValue59);

Transform54->addChild(ProtoInstance58);

ProtoInstance* ProtoInstance60 = new ProtoInstance();
ProtoInstance60->setName("cyl");
ProtoInstance60->setDEF("linkA");
fieldValue* fieldValue61 = new fieldValue();
fieldValue61->setName("set_positionA");
fieldValue61->setValue("0 0 0");
ProtoInstance60->addFieldValue(fieldValue61);

fieldValue* fieldValue62 = new fieldValue();
fieldValue62->setName("set_positionB");
fieldValue62->setValue("50 50 50");
ProtoInstance60->addFieldValue(fieldValue62);

Transform54->addChild(ProtoInstance60);

Scene8->addChild(Transform54);

ROUTE* ROUTE63 = new ROUTE();
ROUTE63->setFromNode("nodeA");
ROUTE63->setFromField("position");
ROUTE63->setToNode("linkA");
ROUTE63->setToField("set_positionA");
Scene8->addChild(ROUTE63);

ROUTE* ROUTE64 = new ROUTE();
ROUTE64->setFromNode("nodeB");
ROUTE64->setFromField("position");
ROUTE64->setToNode("linkA");
ROUTE64->setToField("set_positionB");
Scene8->addChild(ROUTE64);

X3D0->setScene(Scene8);

X3D0->toXMLString();
}
