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
X3D0->setVersion(CString("4.0"));
head* head1 = new head();
component* component2 = new component();
component2->setName(CString("Scripting"));
component2->setLevel(1);
head1->addChild(component2);

meta* meta3 = new meta();
meta3->setName(CString("creator"));
meta3->setContent(CString("John W Carlson"));
head1->addMeta(meta3);

meta* meta4 = new meta();
meta4->setName(CString("created"));
meta4->setContent(CString("December 13 2015"));
head1->addMeta(meta4);

meta* meta5 = new meta();
meta5->setName(CString("title"));
meta5->setContent(CString("force.x3d"));
head1->addMeta(meta5);

meta* meta6 = new meta();
meta6->setName(CString("identifier"));
meta6->setContent(CString("https://coderextreme.net/X3DJSONLD/src/main/data/force.x3d"));
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
Group* Group14 = new Group();
Transform* Transform15 = new Transform();
Transform15->setDEF(CString("transform"));
IS* IS16 = new IS();
Connect* connect17 = new Connect();
connect17->setNodeField(CString("translation"));
connect17->setProtoField(CString("position"));
IS16->addChild(connect17);

Transform15->addChild(IS16);

Shape* Shape18 = new Shape();
Sphere* Sphere19 = new Sphere();
Shape18->setGeometry(Sphere19);

Appearance* Appearance20 = new Appearance();
Material* Material21 = new Material();
Material21->setDiffuseColor(new float[3]{1,0,0});
Appearance20->addChild(Material21);

Shape18->addChild(Appearance20);

Transform15->addChild(Shape18);

Transform* Transform22 = new Transform();
Transform22->setTranslation(new float[3]{1,0,0});
Shape* Shape23 = new Shape();
Text* Text24 = new Text();
Text24->setString(new CString[1]{CString("Node")}, 1);
CFontStyle* FontStyle25 = new CFontStyle();
FontStyle25->setJustify(new CString[2]{CString("MIDDLE"), CString("MIDDLE")}, 2);
FontStyle25->setSize(5);
Text24->setFontStyle(FontStyle25);

Shape23->setGeometry(Text24);

Appearance* Appearance26 = new Appearance();
Material* Material27 = new Material();
Material27->setDiffuseColor(new float[3]{0,0,1});
Appearance26->addChild(Material27);

Shape23->addChild(Appearance26);

Transform22->addChild(Shape23);

Transform15->addChild(Transform22);

Group14->addChild(Transform15);

PositionInterpolator* PositionInterpolator28 = new PositionInterpolator();
PositionInterpolator28->setDEF(CString("NodePosition"));
PositionInterpolator28->setKey(new float[2]{0,1}, 2);
PositionInterpolator28->setKeyValue(new float[6]{0,0,0,0,5,0}, 6);
Group14->addChild(PositionInterpolator28);

Script* Script29 = new Script();
Script29->setDEF(CString("MoveBall"));
field* field30 = new field();
field30->setName(CString("translation"));
field30->setAccessType(CString("inputOutput"));
field30->setType(CString("SFVec3f"));
field30->setValue(CString("50 50 0"));
Script29->addChild(field30);

field* field31 = new field();
field31->setName(CString("old"));
field31->setAccessType(CString("inputOutput"));
field31->setType(CString("SFVec3f"));
field31->setValue(CString("0 0 0"));
Script29->addChild(field31);

field* field32 = new field();
field32->setName(CString("set_cycle"));
field32->setAccessType(CString("inputOnly"));
field32->setType(CString("SFTime"));
Script29->addChild(field32);

field* field33 = new field();
field33->setName(CString("keyValue"));
field33->setAccessType(CString("outputOnly"));
field33->setType(CString("MFVec3f"));
Script29->addChild(field33);


Script29->setSourceCode(CString("ecmascript:")+
_T("					function set_cycle(value) {")+
_T("                                                old = translation;")+
_T("						translation = new SFVec3f(Math.random()*100-50, Math.random()*100-50, Math.random()*100-50);")+
_T("                                                keyValue = new MFVec3f([old, translation]);")+
_T("						// Browser.println(translation);")+
_T("					}"));
Group14->addChild(Script29);

TimeSensor* TimeSensor34 = new TimeSensor();
TimeSensor34->setDEF(CString("nodeClock"));
TimeSensor34->setCycleInterval(3);
TimeSensor34->setLoop(True);
Group14->addChild(TimeSensor34);

ROUTE* ROUTE35 = new ROUTE();
ROUTE35->setFromNode(CString("nodeClock"));
ROUTE35->setFromField(CString("cycleTime"));
ROUTE35->setToNode(CString("MoveBall"));
ROUTE35->setToField(CString("set_cycle"));
Group14->addChild(ROUTE35);

ROUTE* ROUTE36 = new ROUTE();
ROUTE36->setFromNode(CString("nodeClock"));
ROUTE36->setFromField(CString("fraction_changed"));
ROUTE36->setToNode(CString("NodePosition"));
ROUTE36->setToField(CString("set_fraction"));
Group14->addChild(ROUTE36);

ROUTE* ROUTE37 = new ROUTE();
ROUTE37->setFromNode(CString("MoveBall"));
ROUTE37->setFromField(CString("keyValue"));
ROUTE37->setToNode(CString("NodePosition"));
ROUTE37->setToField(CString("keyValue"));
Group14->addChild(ROUTE37);

ROUTE* ROUTE38 = new ROUTE();
ROUTE38->setFromNode(CString("NodePosition"));
ROUTE38->setFromField(CString("value_changed"));
ROUTE38->setToNode(CString("transform"));
ROUTE38->setToField(CString("set_translation"));
Group14->addChild(ROUTE38);

ProtoBody13->addChild(Group14);

ProtoDeclare10->addChild(ProtoBody13);

Scene9->addChild(ProtoDeclare10);

ProtoDeclare* ProtoDeclare39 = new ProtoDeclare();
ProtoDeclare39->setName(CString("cyl"));
ProtoInterface* ProtoInterface40 = new ProtoInterface();
field* field41 = new field();
field41->setName(CString("set_positionA"));
field41->setAccessType(CString("inputOnly"));
field41->setType(CString("SFVec3f"));
ProtoInterface40->addChild(field41);

field* field42 = new field();
field42->setName(CString("set_positionB"));
field42->setAccessType(CString("inputOnly"));
field42->setType(CString("SFVec3f"));
ProtoInterface40->addChild(field42);

ProtoDeclare39->addChild(ProtoInterface40);

ProtoBody* ProtoBody43 = new ProtoBody();
Group* Group44 = new Group();
Shape* Shape45 = new Shape();
Extrusion* Extrusion46 = new Extrusion();
Extrusion46->setDEF(CString("extrusion"));
Extrusion46->setCreaseAngle(0.785);
Extrusion46->setCrossSection(new float[34]{1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0}, 34);
Extrusion46->setSpine(new float[6]{0,-50,0,0,50,0}, 6);
Shape45->setGeometry(Extrusion46);

Appearance* Appearance47 = new Appearance();
Material* Material48 = new Material();
Material48->setDiffuseColor(new float[3]{0,1,0});
Appearance47->addChild(Material48);

Shape45->addChild(Appearance47);

Group44->addChild(Shape45);

Script* Script49 = new Script();
Script49->setDEF(CString("MoveCylinder"));
field* field50 = new field();
field50->setName(CString("spine"));
field50->setAccessType(CString("inputOutput"));
field50->setType(CString("MFVec3f"));
field50->setValue(CString("0 -50 0 0 50 0"));
Script49->addChild(field50);

field* field51 = new field();
field51->setName(CString("set_endA"));
field51->setAccessType(CString("inputOnly"));
field51->setType(CString("SFVec3f"));
Script49->addChild(field51);

field* field52 = new field();
field52->setName(CString("set_endB"));
field52->setAccessType(CString("inputOnly"));
field52->setType(CString("SFVec3f"));
Script49->addChild(field52);

IS* IS53 = new IS();
Connect* connect54 = new Connect();
connect54->setNodeField(CString("set_endA"));
connect54->setProtoField(CString("set_positionA"));
IS53->addChild(connect54);

Connect* connect55 = new Connect();
connect55->setNodeField(CString("set_endB"));
connect55->setProtoField(CString("set_positionB"));
IS53->addChild(connect55);

Script49->addChild(IS53);


Script49->setSourceCode(CString("ecmascript:")+
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
Group44->addChild(Script49);

ROUTE* ROUTE56 = new ROUTE();
ROUTE56->setFromNode(CString("MoveCylinder"));
ROUTE56->setFromField(CString("spine"));
ROUTE56->setToNode(CString("extrusion"));
ROUTE56->setToField(CString("set_spine"));
Group44->addChild(ROUTE56);

ProtoBody43->addChild(Group44);

ProtoDeclare39->addChild(ProtoBody43);

Scene9->addChild(ProtoDeclare39);

Transform* Transform57 = new Transform();
Transform57->setDEF(CString("HoldsContent"));
Transform57->setScale(new float[3]{0.1,0.1,0.1});
PlaneSensor* PlaneSensor58 = new PlaneSensor();
PlaneSensor58->setDEF(CString("clickGenerator"));
PlaneSensor58->setMinPosition(new float[2]{-50,-50});
PlaneSensor58->setMaxPosition(new float[2]{50,50});
PlaneSensor58->setDescription(CString("click on background to add nodes, click on nodes to add links"));
Transform57->addChild(PlaneSensor58);

ProtoInstance* ProtoInstance59 = new ProtoInstance();
ProtoInstance59->setName(CString("node"));
ProtoInstance59->setDEF(CString("nodeA"));
fieldValue* fieldValue60 = new fieldValue();
fieldValue60->setName(&CString("position"));
fieldValue60->setValue(CString("0 0 0"));
ProtoInstance59->addChild(fieldValue60);

Transform57->addChild(ProtoInstance59);

ProtoInstance* ProtoInstance61 = new ProtoInstance();
ProtoInstance61->setName(CString("node"));
ProtoInstance61->setDEF(CString("nodeB"));
fieldValue* fieldValue62 = new fieldValue();
fieldValue62->setName(&CString("position"));
fieldValue62->setValue(CString("50 50 50"));
ProtoInstance61->addChild(fieldValue62);

Transform57->addChild(ProtoInstance61);

ProtoInstance* ProtoInstance63 = new ProtoInstance();
ProtoInstance63->setName(CString("node"));
ProtoInstance63->setDEF(CString("nodeC"));
fieldValue* fieldValue64 = new fieldValue();
fieldValue64->setName(&CString("position"));
fieldValue64->setValue(CString("-50 -50 -50"));
ProtoInstance63->addChild(fieldValue64);

Transform57->addChild(ProtoInstance63);

ProtoInstance* ProtoInstance65 = new ProtoInstance();
ProtoInstance65->setName(CString("node"));
ProtoInstance65->setDEF(CString("nodeD"));
fieldValue* fieldValue66 = new fieldValue();
fieldValue66->setName(&CString("position"));
fieldValue66->setValue(CString("50 50 -50"));
ProtoInstance65->addChild(fieldValue66);

Transform57->addChild(ProtoInstance65);

ProtoInstance* ProtoInstance67 = new ProtoInstance();
ProtoInstance67->setName(CString("cyl"));
ProtoInstance67->setDEF(CString("linkA"));
fieldValue* fieldValue68 = new fieldValue();
fieldValue68->setName(&CString("set_positionA"));
fieldValue68->setValue(CString("0 0 0"));
ProtoInstance67->addChild(fieldValue68);

fieldValue* fieldValue69 = new fieldValue();
fieldValue69->setName(&CString("set_positionB"));
fieldValue69->setValue(CString("50 50 50"));
ProtoInstance67->addChild(fieldValue69);

Transform57->addChild(ProtoInstance67);

ProtoInstance* ProtoInstance70 = new ProtoInstance();
ProtoInstance70->setName(CString("cyl"));
ProtoInstance70->setDEF(CString("linkB"));
fieldValue* fieldValue71 = new fieldValue();
fieldValue71->setName(&CString("set_positionA"));
fieldValue71->setValue(CString("0 0 0"));
ProtoInstance70->addChild(fieldValue71);

fieldValue* fieldValue72 = new fieldValue();
fieldValue72->setName(&CString("set_positionB"));
fieldValue72->setValue(CString("-50 -50 -50"));
ProtoInstance70->addChild(fieldValue72);

Transform57->addChild(ProtoInstance70);

ProtoInstance* ProtoInstance73 = new ProtoInstance();
ProtoInstance73->setName(CString("cyl"));
ProtoInstance73->setDEF(CString("linkC"));
fieldValue* fieldValue74 = new fieldValue();
fieldValue74->setName(&CString("set_positionA"));
fieldValue74->setValue(CString("50 50 50"));
ProtoInstance73->addChild(fieldValue74);

fieldValue* fieldValue75 = new fieldValue();
fieldValue75->setName(&CString("set_positionB"));
fieldValue75->setValue(CString("50 50 -50"));
ProtoInstance73->addChild(fieldValue75);

Transform57->addChild(ProtoInstance73);

Scene9->addChild(Transform57);

Script* Script76 = new Script();
Script76->setDEF(CString("clickHandler"));
field* field77 = new field();
field77->setName(CString("counter"));
field77->setAccessType(CString("inputOutput"));
field77->setValue(CString("0"));
field77->setType(CString("SFInt32"));
Script76->addChild(field77);

field* field78 = new field();
field78->setName(CString("node_changed"));
field78->setAccessType(CString("outputOnly"));
field78->setType(CString("SFNode"));
Script76->addChild(field78);

field* field79 = new field();
field79->setName(CString("add_node"));
field79->setAccessType(CString("inputOnly"));
field79->setValue(CString("false"));
field79->setType(CString("SFBool"));
Script76->addChild(field79);

//<field name=\"ModifiableNode\" type=\"SFNode\" accessType=\"inputOutput\"> <Transform USE=\"HoldsContent\"/> </field>

Script76->setSourceCode(CString("ecmascript:")+
_T("	function add_node(value) {")+
_T("                // Browser.print('hey ', counter);")+
_T("                counter = counter++;")+
_T("		Browser.appendTo(Browser.getDocument().querySelector(\"field [name=ModifiableNode]\"),")+
_T("			{ \"ProtoInstance\":")+
_T("				{ \"@name\":\"node\",")+
_T("				  \"@DEF\":\"node'+counter+'\",")+
_T("				  \"fieldValue\": [")+
_T("					{")+
_T("						 \"@name\":\"position\",")+
_T("						 \"@value\":[0.0,0.0,0.0]")+
_T("					}")+
_T("				  ]")+
_T("				}")+
_T("			});")+
_T("        }"));
Scene9->addChild(Script76);

ROUTE* ROUTE80 = new ROUTE();
ROUTE80->setFromNode(CString("clickGenerator"));
ROUTE80->setFromField(CString("isActive"));
ROUTE80->setToNode(CString("clickHandler"));
ROUTE80->setToField(CString("add_node"));
Scene9->addChild(ROUTE80);

ROUTE* ROUTE81 = new ROUTE();
ROUTE81->setFromNode(CString("nodeA"));
ROUTE81->setFromField(CString("position"));
ROUTE81->setToNode(CString("linkA"));
ROUTE81->setToField(CString("set_positionA"));
Scene9->addChild(ROUTE81);

ROUTE* ROUTE82 = new ROUTE();
ROUTE82->setFromNode(CString("nodeB"));
ROUTE82->setFromField(CString("position"));
ROUTE82->setToNode(CString("linkA"));
ROUTE82->setToField(CString("set_positionB"));
Scene9->addChild(ROUTE82);

ROUTE* ROUTE83 = new ROUTE();
ROUTE83->setFromNode(CString("nodeA"));
ROUTE83->setFromField(CString("position"));
ROUTE83->setToNode(CString("linkB"));
ROUTE83->setToField(CString("set_positionA"));
Scene9->addChild(ROUTE83);

ROUTE* ROUTE84 = new ROUTE();
ROUTE84->setFromNode(CString("nodeC"));
ROUTE84->setFromField(CString("position"));
ROUTE84->setToNode(CString("linkB"));
ROUTE84->setToField(CString("set_positionB"));
Scene9->addChild(ROUTE84);

ROUTE* ROUTE85 = new ROUTE();
ROUTE85->setFromNode(CString("nodeA"));
ROUTE85->setFromField(CString("position"));
ROUTE85->setToNode(CString("linkC"));
ROUTE85->setToField(CString("set_positionA"));
Scene9->addChild(ROUTE85);

ROUTE* ROUTE86 = new ROUTE();
ROUTE86->setFromNode(CString("nodeD"));
ROUTE86->setFromField(CString("position"));
ROUTE86->setToNode(CString("linkC"));
ROUTE86->setToField(CString("set_positionB"));
Scene9->addChild(ROUTE86);

X3D0->setScene(Scene9);

}
