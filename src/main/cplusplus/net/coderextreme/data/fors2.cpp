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
meta4->setName("modified");
meta4->setContent("April 18 2017");
head1->addMeta(meta4);

meta* meta5 = new meta();
meta5->setName("title");
meta5->setContent("fors2.x3d");
head1->addMeta(meta5);

meta* meta6 = new meta();
meta6->setName("identifier");
meta6->setContent("https://coderextreme.net/X3DJSONLD/src/main/data/fors2.x3d");
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
Transform* Transform14 = new Transform();
Transform14->setDEF("transform");
IS* IS15 = new IS();
Connect* connect16 = new Connect();
connect16->setNodeField("translation");
connect16->setProtoField("position");
IS15->addConnect(connect16);

Transform14->setIS(IS15);

Shape* Shape17 = new Shape();
//comment before Sphere
//comment after Sphere
//comment after Appearance
Sphere* Sphere18 = new Sphere();
Shape17->setGeometry(Sphere18);

Appearance* Appearance19 = new Appearance();
//comment before Material
//comment after Material
Material* Material20 = new Material();
Material20->setDiffuseColor(new float[3]{1,0,0});
Appearance19->setMaterial(Material20);

Shape17->setAppearance(Appearance19);

Transform14->addChild(Shape17);

ProtoBody13->addChild(Transform14);

PositionInterpolator* PositionInterpolator21 = new PositionInterpolator();
PositionInterpolator21->setDEF("NodePosition");
PositionInterpolator21->setKey(new float[2]{0,1}, 2);
PositionInterpolator21->setKeyValue(new float[6]{0,0,0,0,5,0});
ProtoBody13->addChild(PositionInterpolator21);

Script* Script22 = new Script();
Script22->setDEF("MoveBall");
field* field23 = new field();
field23->setName("translation");
field23->setAccessType("inputOutput");
field23->setType("SFVec3f");
field23->setValue("50 50 0");
Script22->addField(field23);

field* field24 = new field();
field24->setName("old");
field24->setAccessType("inputOutput");
field24->setType("SFVec3f");
field24->setValue("0 0 0");
Script22->addField(field24);

field* field25 = new field();
field25->setName("set_cycle");
field25->setAccessType("inputOnly");
field25->setType("SFTime");
Script22->addField(field25);

field* field26 = new field();
field26->setName("keyValue");
field26->setAccessType("outputOnly");
field26->setType("MFVec3f");
Script22->addField(field26);


Script22.setSourceCode(`ecmascript:\n"+
"					function set_cycle(value) {\n"+
"                                                old = translation;\n"+
"						translation = new SFVec3f(Math.random()*100-50, Math.random()*100-50, Math.random()*100-50);\n"+
"                                                keyValue = new MFVec3f([old, translation]);\n"+
"						// Browser.println(translation);\n"+
"					}`)
ProtoBody13->addChild(Script22);

TimeSensor* TimeSensor27 = new TimeSensor();
TimeSensor27->setDEF("nodeClock");
TimeSensor27->setCycleInterval(3);
TimeSensor27->setLoop(True);
ProtoBody13->addChild(TimeSensor27);

ROUTE* ROUTE28 = new ROUTE();
ROUTE28->setFromNode("nodeClock");
ROUTE28->setFromField("cycleTime");
ROUTE28->setToNode("MoveBall");
ROUTE28->setToField("set_cycle");
ProtoBody13->addChild(ROUTE28);

ROUTE* ROUTE29 = new ROUTE();
ROUTE29->setFromNode("nodeClock");
ROUTE29->setFromField("fraction_changed");
ROUTE29->setToNode("NodePosition");
ROUTE29->setToField("set_fraction");
ProtoBody13->addChild(ROUTE29);

ROUTE* ROUTE30 = new ROUTE();
ROUTE30->setFromNode("MoveBall");
ROUTE30->setFromField("keyValue");
ROUTE30->setToNode("NodePosition");
ROUTE30->setToField("keyValue");
ProtoBody13->addChild(ROUTE30);

ROUTE* ROUTE31 = new ROUTE();
ROUTE31->setFromNode("NodePosition");
ROUTE31->setFromField("value_changed");
ROUTE31->setToNode("transform");
ROUTE31->setToField("set_translation");
ProtoBody13->addChild(ROUTE31);

ProtoDeclare10->setProtoBody(ProtoBody13);

Scene9->addChild(ProtoDeclare10);

ProtoDeclare* ProtoDeclare32 = new ProtoDeclare();
ProtoDeclare32->setName("cyl");
ProtoInterface* ProtoInterface33 = new ProtoInterface();
field* field34 = new field();
field34->setName("positionA");
field34->setAccessType("inputOnly");
field34->setType("SFVec3f");
ProtoInterface33->addField(field34);

field* field35 = new field();
field35->setName("positionB");
field35->setAccessType("inputOnly");
field35->setType("SFVec3f");
ProtoInterface33->addField(field35);

ProtoDeclare32->setProtoInterface(ProtoInterface33);

ProtoBody* ProtoBody36 = new ProtoBody();
Shape* Shape37 = new Shape();
Extrusion* Extrusion38 = new Extrusion();
Extrusion38->setDEF("extrusion");
Extrusion38->setCreaseAngle(0.785);
Extrusion38->setCrossSection(new float[34]{1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0});
Extrusion38->setSpine(new float[9]{0,-50,0,0,0,0,0,50,0});
Shape37->setGeometry(Extrusion38);

Appearance* Appearance39 = new Appearance();
Material* Material40 = new Material();
Material40->setDiffuseColor(new float[3]{0,1,0});
Appearance39->setMaterial(Material40);

Shape37->setAppearance(Appearance39);

ProtoBody36->addChild(Shape37);

Script* Script41 = new Script();
Script41->setDEF("MoveCylinder");
field* field42 = new field();
field42->setName("spine");
field42->setAccessType("inputOutput");
field42->setType("MFVec3f");
field42->setValue("0 -50 0 0 0 0 0 50 0");
Script41->addField(field42);

field* field43 = new field();
field43->setName("set_endA");
field43->setAccessType("inputOnly");
field43->setType("SFVec3f");
Script41->addField(field43);

field* field44 = new field();
field44->setName("set_endB");
field44->setAccessType("inputOnly");
field44->setType("SFVec3f");
Script41->addField(field44);

IS* IS45 = new IS();
Connect* connect46 = new Connect();
connect46->setNodeField("set_endA");
connect46->setProtoField("positionA");
IS45->addConnect(connect46);

Connect* connect47 = new Connect();
connect47->setNodeField("set_endB");
connect47->setProtoField("positionB");
IS45->addConnect(connect47);

Script41->setIS(IS45);


Script41.setSourceCode(`ecmascript:\n"+
"\n"+
"                function set_endA(value) {\n"+
"		    if (typeof spine === \"undefined\") {\n"+
"		        spine = new MFVec3f([value, value]);\n"+
"		    } else {\n"+
"		        spine = new MFVec3f([value, spine[1]]);\n"+
"		    }\n"+
"                }\n"+
"\n"+
"                function set_endB(value) {\n"+
"		    if (typeof spine === \"undefined\") {\n"+
"		        spine = new MFVec3f([value, value]);\n"+
"		    } else {\n"+
"		        spine = new MFVec3f([spine[0], value]);\n"+
"		    }\n"+
"                }\n"+
"\n"+
"                function set_spine(value) {\n"+
"		    Browser.print('\\n'+'\"');\n"+
"                    spine = value;\n"+
"                }`)
ProtoBody36->addChild(Script41);

ROUTE* ROUTE48 = new ROUTE();
ROUTE48->setFromNode("MoveCylinder");
ROUTE48->setFromField("spine");
ROUTE48->setToNode("extrusion");
ROUTE48->setToField("set_spine");
ProtoBody36->addChild(ROUTE48);

ProtoDeclare32->setProtoBody(ProtoBody36);

Scene9->addChild(ProtoDeclare32);

Transform* Transform49 = new Transform();
Transform49->setScale(new float[3]{0.1,0.1,0.1});
ProtoInstance* ProtoInstance50 = new ProtoInstance();
ProtoInstance50->setName("node");
ProtoInstance50->setDEF("nodeA");
fieldValue* fieldValue51 = new fieldValue();
fieldValue51->setName("position");
fieldValue51->setValue("-50 -50 -50");
ProtoInstance50->addFieldValue(fieldValue51);

Transform49->addChild(ProtoInstance50);

ProtoInstance* ProtoInstance52 = new ProtoInstance();
ProtoInstance52->setName("node");
ProtoInstance52->setDEF("nodeB");
fieldValue* fieldValue53 = new fieldValue();
fieldValue53->setName("position");
fieldValue53->setValue("50 50 50");
ProtoInstance52->addFieldValue(fieldValue53);

Transform49->addChild(ProtoInstance52);

ProtoInstance* ProtoInstance54 = new ProtoInstance();
ProtoInstance54->setName("cyl");
ProtoInstance54->setDEF("linkA");
fieldValue* fieldValue55 = new fieldValue();
fieldValue55->setName("positionA");
fieldValue55->setValue("0 0 0");
ProtoInstance54->addFieldValue(fieldValue55);

fieldValue* fieldValue56 = new fieldValue();
fieldValue56->setName("positionB");
fieldValue56->setValue("50 50 50");
ProtoInstance54->addFieldValue(fieldValue56);

Transform49->addChild(ProtoInstance54);

Scene9->addChild(Transform49);

ROUTE* ROUTE57 = new ROUTE();
ROUTE57->setFromNode("nodeA");
ROUTE57->setFromField("position");
ROUTE57->setToNode("linkA");
ROUTE57->setToField("positionA");
Scene9->addChild(ROUTE57);

ROUTE* ROUTE58 = new ROUTE();
ROUTE58->setFromNode("nodeB");
ROUTE58->setFromField("position");
ROUTE58->setToNode("linkA");
ROUTE58->setToField("positionB");
Scene9->addChild(ROUTE58);

X3D0->setScene(Scene9);

X3D0->toXMLString();
}
