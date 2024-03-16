#ifdef WIN32
#define FALSE false
#define TRUE true
#define WINAPI
#define AFX_EXT_CLASS
#define EXPORT32
#endif
#define False false
#define True true
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/SphereExample/SphereExample/pch.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/SphereExample/SphereExample/framework.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/SphereExample/include/XML_PARSER.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/SphereExample/include/X3DLib.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/SphereExample/include/glMath.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/SphereExample/include/glut.h"
int main(int argc, char ** argv) {
X3D* X3D0 = new X3D();
X3D0->setProfile(CString("Immersive"));
X3D0->setVersion(CString("3.3"));
head* head1 = new head();
meta* meta2 = new meta();
meta2->setName(CString("creator"));
meta2->setContent(CString("John W Carlson"));
head1->addMeta(meta2);

meta* meta3 = new meta();
meta3->setName(CString("created"));
meta3->setContent(CString("December 13 2015"));
head1->addMeta(meta3);

meta* meta4 = new meta();
meta4->setName(CString("modified"));
meta4->setContent(CString("April 18 2017"));
head1->addMeta(meta4);

meta* meta5 = new meta();
meta5->setName(CString("title"));
meta5->setContent(CString("fors2.x3d"));
head1->addMeta(meta5);

meta* meta6 = new meta();
meta6->setName(CString("identifier"));
meta6->setContent(CString("https://coderextreme.net/X3DJSONLD/src/main/data/fors2.x3d"));
head1->addMeta(meta6);

meta* meta7 = new meta();
meta7->setName(CString("description"));
meta7->setContent(CString("beginnings of a force directed graph in 3D"));
head1->addMeta(meta7);

meta* meta8 = new meta();
meta8->setName(CString("generator"));
meta8->setContent(CString("Vim, X3D-Edit, https://savage.nps.edu/X3D-Edit"));
head1->addMeta(meta8);

X3D0->setHead(head1);

Scene* Scene9 = new Scene();
ProtoDeclare* ProtoDeclare10 = new ProtoDeclare();
ProtoDeclare10->setName(CString("node"));
ProtoInterface* ProtoInterface11 = new ProtoInterface();
field* field12 = new field();
field12->setName(CString("position"));
field12->setAccessType(CString("inputOutput"));
field12->setType(CString("SFVec3f"));
field12->setValue(CString("0 0 0"));
ProtoInterface11->addChild(field12);

ProtoDeclare10->addChild(ProtoInterface11);

ProtoBody* ProtoBody13 = new ProtoBody();
Transform* Transform14 = new Transform();
Transform14->setDEF(CString("transform"));
IS* IS15 = new IS();
Connect* connect16 = new Connect();
connect16->setNodeField(CString("translation"));
connect16->setProtoField(CString("position"));
IS15->addChild(connect16);

Transform14->addChild(IS15);

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
Appearance19->addChild(Material20);

Shape17->addChild(Appearance19);

Transform14->addChild(Shape17);

ProtoBody13->addChild(Transform14);

PositionInterpolator* PositionInterpolator21 = new PositionInterpolator();
PositionInterpolator21->setDEF(CString("NodePosition"));
PositionInterpolator21->setKey(new float[2]{0,1}, 2);
PositionInterpolator21->setKeyValue(new float[6]{0,0,0,0,5,0}, 6);
ProtoBody13->addChild(PositionInterpolator21);

Script* Script22 = new Script();
Script22->setDEF(CString("MoveBall"));
field* field23 = new field();
field23->setName(CString("translation"));
field23->setAccessType(CString("inputOutput"));
field23->setType(CString("SFVec3f"));
field23->setValue(CString("50 50 0"));
Script22->addChild(field23);

field* field24 = new field();
field24->setName(CString("old"));
field24->setAccessType(CString("inputOutput"));
field24->setType(CString("SFVec3f"));
field24->setValue(CString("0 0 0"));
Script22->addChild(field24);

field* field25 = new field();
field25->setName(CString("set_cycle"));
field25->setAccessType(CString("inputOnly"));
field25->setType(CString("SFTime"));
Script22->addChild(field25);

field* field26 = new field();
field26->setName(CString("keyValue"));
field26->setAccessType(CString("outputOnly"));
field26->setType(CString("MFVec3f"));
Script22->addChild(field26);


Script22->setSourceCode(CString("ecmascript:")+
_T("					function set_cycle(value) {")+
_T("                                                old = translation;")+
_T("						translation = new SFVec3f(Math.random()*100-50, Math.random()*100-50, Math.random()*100-50);")+
_T("                                                keyValue = new MFVec3f([old, translation]);")+
_T("						// Browser.println(translation);")+
_T("					}"));
ProtoBody13->addChild(Script22);

TimeSensor* TimeSensor27 = new TimeSensor();
TimeSensor27->setDEF(CString("nodeClock"));
TimeSensor27->setCycleInterval(3);
TimeSensor27->setLoop(True);
ProtoBody13->addChild(TimeSensor27);

ROUTE* ROUTE28 = new ROUTE();
ROUTE28->setFromNode(CString("nodeClock"));
ROUTE28->setFromField(CString("cycleTime"));
ROUTE28->setToNode(CString("MoveBall"));
ROUTE28->setToField(CString("set_cycle"));
ProtoBody13->addChild(ROUTE28);

ROUTE* ROUTE29 = new ROUTE();
ROUTE29->setFromNode(CString("nodeClock"));
ROUTE29->setFromField(CString("fraction_changed"));
ROUTE29->setToNode(CString("NodePosition"));
ROUTE29->setToField(CString("set_fraction"));
ProtoBody13->addChild(ROUTE29);

ROUTE* ROUTE30 = new ROUTE();
ROUTE30->setFromNode(CString("MoveBall"));
ROUTE30->setFromField(CString("keyValue"));
ROUTE30->setToNode(CString("NodePosition"));
ROUTE30->setToField(CString("keyValue"));
ProtoBody13->addChild(ROUTE30);

ROUTE* ROUTE31 = new ROUTE();
ROUTE31->setFromNode(CString("NodePosition"));
ROUTE31->setFromField(CString("value_changed"));
ROUTE31->setToNode(CString("transform"));
ROUTE31->setToField(CString("set_translation"));
ProtoBody13->addChild(ROUTE31);

ProtoDeclare10->addChild(ProtoBody13);

Scene9->addChild(ProtoDeclare10);

ProtoDeclare* ProtoDeclare32 = new ProtoDeclare();
ProtoDeclare32->setName(CString("cyl"));
ProtoInterface* ProtoInterface33 = new ProtoInterface();
field* field34 = new field();
field34->setName(CString("positionA"));
field34->setAccessType(CString("inputOnly"));
field34->setType(CString("SFVec3f"));
ProtoInterface33->addChild(field34);

field* field35 = new field();
field35->setName(CString("positionB"));
field35->setAccessType(CString("inputOnly"));
field35->setType(CString("SFVec3f"));
ProtoInterface33->addChild(field35);

ProtoDeclare32->addChild(ProtoInterface33);

ProtoBody* ProtoBody36 = new ProtoBody();
Shape* Shape37 = new Shape();
Extrusion* Extrusion38 = new Extrusion();
Extrusion38->setDEF(CString("extrusion"));
Extrusion38->setCreaseAngle(0.785);
Extrusion38->setCrossSection(new float[34]{1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0}, 34);
Extrusion38->setSpine(new float[9]{0,-50,0,0,0,0,0,50,0}, 9);
Shape37->setGeometry(Extrusion38);

Appearance* Appearance39 = new Appearance();
Material* Material40 = new Material();
Material40->setDiffuseColor(new float[3]{0,1,0});
Appearance39->addChild(Material40);

Shape37->addChild(Appearance39);

ProtoBody36->addChild(Shape37);

Script* Script41 = new Script();
Script41->setDEF(CString("MoveCylinder"));
field* field42 = new field();
field42->setName(CString("spine"));
field42->setAccessType(CString("inputOutput"));
field42->setType(CString("MFVec3f"));
field42->setValue(CString("0 -50 0 0 0 0 0 50 0"));
Script41->addChild(field42);

field* field43 = new field();
field43->setName(CString("set_endA"));
field43->setAccessType(CString("inputOnly"));
field43->setType(CString("SFVec3f"));
Script41->addChild(field43);

field* field44 = new field();
field44->setName(CString("set_endB"));
field44->setAccessType(CString("inputOnly"));
field44->setType(CString("SFVec3f"));
Script41->addChild(field44);

IS* IS45 = new IS();
Connect* connect46 = new Connect();
connect46->setNodeField(CString("set_endA"));
connect46->setProtoField(CString("positionA"));
IS45->addChild(connect46);

Connect* connect47 = new Connect();
connect47->setNodeField(CString("set_endB"));
connect47->setProtoField(CString("positionB"));
IS45->addChild(connect47);

Script41->addChild(IS45);


Script41->setSourceCode(CString("ecmascript:")+
_T("                function set_endA(value) {")+
_T("		    if (typeof spine === \"undefined\") {")+
_T("		        spine = new MFVec3f([value, value]);")+
_T("		    } else {")+
_T("		        spine = new MFVec3f([value, spine[1]]);")+
_T("		    }")+
_T("                }")+
_T("                function set_endB(value) {")+
_T("		    if (typeof spine === \"undefined\") {")+
_T("		        spine = new MFVec3f([value, value]);")+
_T("		    } else {")+
_T("		        spine = new MFVec3f([spine[0], value]);")+
_T("		    }")+
_T("                }")+
_T("                function set_spine(value) {")+
_T("		    Browser.print('\\n'+'\"');")+
_T("                    spine = value;")+
_T("                }"));
ProtoBody36->addChild(Script41);

ROUTE* ROUTE48 = new ROUTE();
ROUTE48->setFromNode(CString("MoveCylinder"));
ROUTE48->setFromField(CString("spine"));
ROUTE48->setToNode(CString("extrusion"));
ROUTE48->setToField(CString("set_spine"));
ProtoBody36->addChild(ROUTE48);

ProtoDeclare32->addChild(ProtoBody36);

Scene9->addChild(ProtoDeclare32);

Transform* Transform49 = new Transform();
Transform49->setScale(new float[3]{0.1,0.1,0.1});
ProtoInstance* ProtoInstance50 = new ProtoInstance();
ProtoInstance50->setName(CString("node"));
ProtoInstance50->setDEF(CString("nodeA"));
fieldValue* fieldValue51 = new fieldValue();
fieldValue51->setName(&CString("position"));
fieldValue51->setValue(CString("-50 -50 -50"));
ProtoInstance50->addChild(fieldValue51);

Transform49->addChild(ProtoInstance50);

ProtoInstance* ProtoInstance52 = new ProtoInstance();
ProtoInstance52->setName(CString("node"));
ProtoInstance52->setDEF(CString("nodeB"));
fieldValue* fieldValue53 = new fieldValue();
fieldValue53->setName(&CString("position"));
fieldValue53->setValue(CString("50 50 50"));
ProtoInstance52->addChild(fieldValue53);

Transform49->addChild(ProtoInstance52);

ProtoInstance* ProtoInstance54 = new ProtoInstance();
ProtoInstance54->setName(CString("cyl"));
ProtoInstance54->setDEF(CString("linkA"));
fieldValue* fieldValue55 = new fieldValue();
fieldValue55->setName(&CString("positionA"));
fieldValue55->setValue(CString("0 0 0"));
ProtoInstance54->addChild(fieldValue55);

fieldValue* fieldValue56 = new fieldValue();
fieldValue56->setName(&CString("positionB"));
fieldValue56->setValue(CString("50 50 50"));
ProtoInstance54->addChild(fieldValue56);

Transform49->addChild(ProtoInstance54);

Scene9->addChild(Transform49);

ROUTE* ROUTE57 = new ROUTE();
ROUTE57->setFromNode(CString("nodeA"));
ROUTE57->setFromField(CString("position"));
ROUTE57->setToNode(CString("linkA"));
ROUTE57->setToField(CString("positionA"));
Scene9->addChild(ROUTE57);

ROUTE* ROUTE58 = new ROUTE();
ROUTE58->setFromNode(CString("nodeB"));
ROUTE58->setFromField(CString("position"));
ROUTE58->setToNode(CString("linkA"));
ROUTE58->setToField(CString("positionB"));
Scene9->addChild(ROUTE58);

X3D0->setScene(Scene9);

}
