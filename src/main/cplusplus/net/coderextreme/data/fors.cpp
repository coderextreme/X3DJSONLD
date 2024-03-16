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
meta4->setName(CString("title"));
meta4->setContent(CString("fors.x3d"));
head1->addMeta(meta4);

meta* meta5 = new meta();
meta5->setName(CString("identifier"));
meta5->setContent(CString("https://coderextreme.net/X3DJSONLD/src/main/data/force.x3d"));
head1->addMeta(meta5);

meta* meta6 = new meta();
meta6->setName(CString("description"));
meta6->setContent(CString("beginnings of a force directed graph in 3D"));
head1->addMeta(meta6);

meta* meta7 = new meta();
meta7->setName(CString("generator"));
meta7->setContent(CString("Vim, X3D-Edit, https://savage.nps.edu/X3D-Edit"));
head1->addMeta(meta7);

X3D0->setHead(head1);

Scene* Scene8 = new Scene();
ProtoDeclare* ProtoDeclare9 = new ProtoDeclare();
ProtoDeclare9->setName(CString("node"));
ProtoInterface* ProtoInterface10 = new ProtoInterface();
field* field11 = new field();
field11->setName(CString("position"));
field11->setAccessType(CString("inputOutput"));
field11->setType(CString("SFVec3f"));
field11->setValue(CString("0 0 0"));
ProtoInterface10->addChild(field11);

ProtoDeclare9->addChild(ProtoInterface10);

ProtoBody* ProtoBody12 = new ProtoBody();
Transform* Transform13 = new Transform();
Transform13->setDEF(CString("transform"));
IS* IS14 = new IS();
Connect* connect15 = new Connect();
connect15->setNodeField(CString("translation"));
connect15->setProtoField(CString("position"));
IS14->addChild(connect15);

Transform13->addChild(IS14);

Shape* Shape16 = new Shape();
Sphere* Sphere17 = new Sphere();
Shape16->setGeometry(Sphere17);

Appearance* Appearance18 = new Appearance();
Material* Material19 = new Material();
Material19->setDiffuseColor(new float[3]{1,0,0});
Appearance18->addChild(Material19);

Shape16->addChild(Appearance18);

Transform13->addChild(Shape16);

Transform* Transform20 = new Transform();
Transform20->setTranslation(new float[3]{1,0,0});
Shape* Shape21 = new Shape();
Text* Text22 = new Text();
Text22->setString(new CString[1]{CString("Node")}, 1);
CFontStyle* FontStyle23 = new CFontStyle();
FontStyle23->setJustify(new CString[2]{CString("MIDDLE"), CString("MIDDLE")}, 2);
FontStyle23->setSize(5);
Text22->setFontStyle(FontStyle23);

Shape21->setGeometry(Text22);

Appearance* Appearance24 = new Appearance();
Material* Material25 = new Material();
Material25->setDiffuseColor(new float[3]{0,0,1});
Appearance24->addChild(Material25);

Shape21->addChild(Appearance24);

Transform20->addChild(Shape21);

Transform13->addChild(Transform20);

ProtoBody12->addChild(Transform13);

PositionInterpolator* PositionInterpolator26 = new PositionInterpolator();
PositionInterpolator26->setDEF(CString("NodePosition"));
PositionInterpolator26->setKey(new float[2]{0,1}, 2);
PositionInterpolator26->setKeyValue(new float[6]{0,0,0,0,5,0}, 6);
ProtoBody12->addChild(PositionInterpolator26);

Script* Script27 = new Script();
Script27->setDEF(CString("MoveBall"));
field* field28 = new field();
field28->setName(CString("translation"));
field28->setAccessType(CString("inputOutput"));
field28->setType(CString("SFVec3f"));
field28->setValue(CString("50 50 0"));
Script27->addChild(field28);

field* field29 = new field();
field29->setName(CString("old"));
field29->setAccessType(CString("inputOutput"));
field29->setType(CString("SFVec3f"));
field29->setValue(CString("0 0 0"));
Script27->addChild(field29);

field* field30 = new field();
field30->setName(CString("set_cycle"));
field30->setAccessType(CString("inputOnly"));
field30->setType(CString("SFTime"));
Script27->addChild(field30);

field* field31 = new field();
field31->setName(CString("keyValue"));
field31->setAccessType(CString("outputOnly"));
field31->setType(CString("MFVec3f"));
Script27->addChild(field31);


Script27->setSourceCode(CString("ecmascript:")+
_T("					function set_cycle(value) {")+
_T("                                                old = translation;")+
_T("						translation = new SFVec3f(Math.random()*100-50, Math.random()*100-50, Math.random()*100-50);")+
_T("                                                keyValue = new MFVec3f([old, translation]);")+
_T("						// Browser.println(translation);")+
_T("					}"));
ProtoBody12->addChild(Script27);

TimeSensor* TimeSensor32 = new TimeSensor();
TimeSensor32->setDEF(CString("nodeClock"));
TimeSensor32->setCycleInterval(3);
TimeSensor32->setLoop(True);
ProtoBody12->addChild(TimeSensor32);

ROUTE* ROUTE33 = new ROUTE();
ROUTE33->setFromNode(CString("nodeClock"));
ROUTE33->setFromField(CString("cycleTime"));
ROUTE33->setToNode(CString("MoveBall"));
ROUTE33->setToField(CString("set_cycle"));
ProtoBody12->addChild(ROUTE33);

ROUTE* ROUTE34 = new ROUTE();
ROUTE34->setFromNode(CString("nodeClock"));
ROUTE34->setFromField(CString("fraction_changed"));
ROUTE34->setToNode(CString("NodePosition"));
ROUTE34->setToField(CString("set_fraction"));
ProtoBody12->addChild(ROUTE34);

ROUTE* ROUTE35 = new ROUTE();
ROUTE35->setFromNode(CString("MoveBall"));
ROUTE35->setFromField(CString("keyValue"));
ROUTE35->setToNode(CString("NodePosition"));
ROUTE35->setToField(CString("keyValue"));
ProtoBody12->addChild(ROUTE35);

ROUTE* ROUTE36 = new ROUTE();
ROUTE36->setFromNode(CString("NodePosition"));
ROUTE36->setFromField(CString("value_changed"));
ROUTE36->setToNode(CString("transform"));
ROUTE36->setToField(CString("set_translation"));
ProtoBody12->addChild(ROUTE36);

ProtoDeclare9->addChild(ProtoBody12);

Scene8->addChild(ProtoDeclare9);

ProtoDeclare* ProtoDeclare37 = new ProtoDeclare();
ProtoDeclare37->setName(CString("cyl"));
ProtoInterface* ProtoInterface38 = new ProtoInterface();
field* field39 = new field();
field39->setName(CString("set_positionA"));
field39->setAccessType(CString("inputOnly"));
field39->setType(CString("SFVec3f"));
ProtoInterface38->addChild(field39);

field* field40 = new field();
field40->setName(CString("set_positionB"));
field40->setAccessType(CString("inputOnly"));
field40->setType(CString("SFVec3f"));
ProtoInterface38->addChild(field40);

ProtoDeclare37->addChild(ProtoInterface38);

ProtoBody* ProtoBody41 = new ProtoBody();
Shape* Shape42 = new Shape();
Extrusion* Extrusion43 = new Extrusion();
Extrusion43->setDEF(CString("extrusion"));
Extrusion43->setCreaseAngle(0.785);
Extrusion43->setCrossSection(new float[34]{1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0}, 34);
Extrusion43->setSpine(new float[6]{0,-50,0,0,50,0}, 6);
Shape42->setGeometry(Extrusion43);

Appearance* Appearance44 = new Appearance();
Material* Material45 = new Material();
Material45->setDiffuseColor(new float[3]{0,1,0});
Appearance44->addChild(Material45);

Shape42->addChild(Appearance44);

ProtoBody41->addChild(Shape42);

Script* Script46 = new Script();
Script46->setDEF(CString("MoveCylinder"));
field* field47 = new field();
field47->setName(CString("spine"));
field47->setAccessType(CString("inputOutput"));
field47->setType(CString("MFVec3f"));
field47->setValue(CString("0 -50 0 0 50 0"));
Script46->addChild(field47);

field* field48 = new field();
field48->setName(CString("set_endA"));
field48->setAccessType(CString("inputOnly"));
field48->setType(CString("SFVec3f"));
Script46->addChild(field48);

field* field49 = new field();
field49->setName(CString("set_endB"));
field49->setAccessType(CString("inputOnly"));
field49->setType(CString("SFVec3f"));
Script46->addChild(field49);

IS* IS50 = new IS();
Connect* connect51 = new Connect();
connect51->setNodeField(CString("set_endA"));
connect51->setProtoField(CString("set_positionA"));
IS50->addChild(connect51);

Connect* connect52 = new Connect();
connect52->setNodeField(CString("set_endB"));
connect52->setProtoField(CString("set_positionB"));
IS50->addChild(connect52);

Script46->addChild(IS50);


Script46->setSourceCode(CString("ecmascript:")+
_T("                function set_endA(value) {")+
_T("		    if (typeof spine === 'undefined') {")+
_T("		        spine = new MFVec3f([value, value]);")+
_T("		    } else {")+
_T("		        spine = new MFVec3f([value, spine[1]]);")+
_T("		    }")+
_T("                }")+
_T("                function set_endB(value) {")+
_T("		    if (typeof spine === 'undefined') {")+
_T("		        spine = new MFVec3f([value, value]);")+
_T("		    } else {")+
_T("		        spine = new MFVec3f([spine[0], value]);")+
_T("		    }")+
_T("                }")+
_T("                function set_spine(value) {")+
_T("                    spine = value;")+
_T("                }"));
ProtoBody41->addChild(Script46);

ROUTE* ROUTE53 = new ROUTE();
ROUTE53->setFromNode(CString("MoveCylinder"));
ROUTE53->setFromField(CString("spine"));
ROUTE53->setToNode(CString("extrusion"));
ROUTE53->setToField(CString("set_spine"));
ProtoBody41->addChild(ROUTE53);

ProtoDeclare37->addChild(ProtoBody41);

Scene8->addChild(ProtoDeclare37);

Transform* Transform54 = new Transform();
Transform54->setDEF(CString("HoldsContent"));
Transform54->setScale(new float[3]{0.1,0.1,0.1});
PlaneSensor* PlaneSensor55 = new PlaneSensor();
PlaneSensor55->setDEF(CString("clickGenerator"));
PlaneSensor55->setMinPosition(new float[2]{-50,-50});
PlaneSensor55->setMaxPosition(new float[2]{50,50});
PlaneSensor55->setDescription(CString("click on background to add nodes, click on nodes to add links"));
Transform54->addChild(PlaneSensor55);

ProtoInstance* ProtoInstance56 = new ProtoInstance();
ProtoInstance56->setName(CString("node"));
ProtoInstance56->setDEF(CString("nodeA"));
fieldValue* fieldValue57 = new fieldValue();
fieldValue57->setName(&CString("position"));
fieldValue57->setValue(CString("0 0 0"));
ProtoInstance56->addChild(fieldValue57);

Transform54->addChild(ProtoInstance56);

ProtoInstance* ProtoInstance58 = new ProtoInstance();
ProtoInstance58->setName(CString("node"));
ProtoInstance58->setDEF(CString("nodeB"));
fieldValue* fieldValue59 = new fieldValue();
fieldValue59->setName(&CString("position"));
fieldValue59->setValue(CString("50 50 50"));
ProtoInstance58->addChild(fieldValue59);

Transform54->addChild(ProtoInstance58);

ProtoInstance* ProtoInstance60 = new ProtoInstance();
ProtoInstance60->setName(CString("cyl"));
ProtoInstance60->setDEF(CString("linkA"));
fieldValue* fieldValue61 = new fieldValue();
fieldValue61->setName(&CString("set_positionA"));
fieldValue61->setValue(CString("0 0 0"));
ProtoInstance60->addChild(fieldValue61);

fieldValue* fieldValue62 = new fieldValue();
fieldValue62->setName(&CString("set_positionB"));
fieldValue62->setValue(CString("50 50 50"));
ProtoInstance60->addChild(fieldValue62);

Transform54->addChild(ProtoInstance60);

Scene8->addChild(Transform54);

ROUTE* ROUTE63 = new ROUTE();
ROUTE63->setFromNode(CString("nodeA"));
ROUTE63->setFromField(CString("position"));
ROUTE63->setToNode(CString("linkA"));
ROUTE63->setToField(CString("set_positionA"));
Scene8->addChild(ROUTE63);

ROUTE* ROUTE64 = new ROUTE();
ROUTE64->setFromNode(CString("nodeB"));
ROUTE64->setFromField(CString("position"));
ROUTE64->setToNode(CString("linkA"));
ROUTE64->setToField(CString("set_positionB"));
Scene8->addChild(ROUTE64);

X3D0->setScene(Scene8);

}
