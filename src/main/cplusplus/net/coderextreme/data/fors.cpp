#ifndef WIN32
#define WINAPI
#define AFX_EXT_CLASS
#define EXPORT32
#define WINGDIAPI
#define APIENTRY
#endif
#define FALSE false
#define TRUE true
#define BOOL bool
#define False false
#define True true
#include "C:/Users/jcarl/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/pch.h"
#include "C:/Users/jcarl/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/framework.h"
#include "C:/Users/jcarl/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/glut.h"
#include "C:/Users/jcarl/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/X3DLib.h"
int main(int argc, char ** argv) {
X3D& X3D0 =  X3D();
X3D0.setProfile(CString("Immersive"));
X3D0.setVersion(CString("4.0"));
head& head1 =  head();
component& component2 =  component();
component2.setName(CString("Scripting"));
component2.setLevel(1);
head1.addChild(&component2);

meta& meta3 =  meta();
meta3.setName(CString("creator"));
meta3.setContent(CString("John W Carlson"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("created"));
meta4.setContent(CString("December 13 2015"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("modified"));
meta5.setContent(CString("July 14 2025"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("title"));
meta6.setContent(CString("fors.x3d"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(CString("identifier"));
meta7.setContent(CString("https://coderextreme.net/X3DJSONLD/src/main/data/force.x3d"));
head1.addMeta(&meta7);

meta& meta8 =  meta();
meta8.setName(CString("description"));
meta8.setContent(CString("beginnings of a force directed graph in 3D"));
head1.addMeta(&meta8);

meta& meta9 =  meta();
meta9.setName(CString("generator"));
meta9.setContent(CString("Vim, X3D-Edit, https://savage.nps.edu/X3D-Edit"));
head1.addMeta(&meta9);

X3D0.setHead(&head1);

Scene& Scene10 =  Scene();
ProtoDeclare& ProtoDeclare11 =  ProtoDeclare();
ProtoDeclare11.setName(CString("node"));
ProtoInterface& ProtoInterface12 =  ProtoInterface();
field& field13 =  field();
field13.setName(CString("position"));
field13.setAccessType(CString("inputOutput"));
field13.setType(CString("SFVec3f"));
field13.setValue(CString("0 0 0"));
ProtoInterface12.addChild(&field13);

ProtoDeclare11.addChild(&ProtoInterface12);

ProtoBody& ProtoBody14 =  ProtoBody();
Group& Group15 =  Group();
Transform& Transform16 =  Transform();
Transform16.setDEF(CString("transform"));
IS& IS17 =  IS();
Connect& connect18 =  Connect();
connect18.setNodeField(CString("translation"));
connect18.setProtoField(CString("position"));
IS17.addChild(&connect18);

Transform16.addChild(&IS17);

Shape& Shape19 =  Shape();
Sphere& Sphere20 =  Sphere();
Shape19.setGeometry(&Sphere20);

Appearance& Appearance21 =  Appearance();
Material& Material22 =  Material();
Material22.setDiffuseColor(new float[]{1,0,0});
Appearance21.addChild(&Material22);

Shape19.addChild(&Appearance21);

Transform16.addChild(&Shape19);

Transform& Transform23 =  Transform();
Transform23.setTranslation(new float[]{1,0,0});
Shape& Shape24 =  Shape();
Text& Text25 =  Text();
Text25.setString(new CString[]{CString("Node")}, 1);
CFontStyle& FontStyle26 =  CFontStyle();
FontStyle26.setJustify(new CString[]{CString("MIDDLE"), CString("MIDDLE")}, 2);
FontStyle26.setSize(5);
Text25.setFontStyle(&FontStyle26);

Shape24.setGeometry(&Text25);

Appearance& Appearance27 =  Appearance();
Material& Material28 =  Material();
Material28.setDiffuseColor(new float[]{0,0,1});
Appearance27.addChild(&Material28);

Shape24.addChild(&Appearance27);

Transform23.addChild(&Shape24);

Transform16.addChild(&Transform23);

Group15.addChild(&Transform16);

PositionInterpolator& PositionInterpolator29 =  PositionInterpolator();
PositionInterpolator29.setDEF(CString("NodePosition"));
PositionInterpolator29.setKey(new float[]{0,1}, 2);
PositionInterpolator29.setKeyValue(new float[]{0,0,0,0,5,0}, 6);
Group15.addChild(&PositionInterpolator29);

Script& Script30 =  Script();
Script30.setDEF(CString("MoveBall"));
field& field31 =  field();
field31.setName(CString("translation"));
field31.setAccessType(CString("inputOutput"));
field31.setType(CString("SFVec3f"));
field31.setValue(CString("50 50 0"));
Script30.addChild(&field31);

field& field32 =  field();
field32.setName(CString("old"));
field32.setAccessType(CString("inputOutput"));
field32.setType(CString("SFVec3f"));
field32.setValue(CString("0 0 0"));
Script30.addChild(&field32);

field& field33 =  field();
field33.setName(CString("set_cycle"));
field33.setAccessType(CString("inputOnly"));
field33.setType(CString("SFTime"));
Script30.addChild(&field33);

field& field34 =  field();
field34.setName(CString("keyValue"));
field34.setAccessType(CString("outputOnly"));
field34.setType(CString("MFVec3f"));
Script30.addChild(&field34);


Script30.setSourceCode(CString("ecmascript:")+
_T("			function set_cycle(value) {")+
_T("				old = translation;")+
_T("				translation = new SFVec3f(Math.random()*100-50, Math.random()*100-50, Math.random()*100-50);")+
_T("				keyValue = new MFVec3f(old, translation);")+
_T("			}"));
Group15.addChild(&Script30);

TimeSensor& TimeSensor35 =  TimeSensor();
TimeSensor35.setDEF(CString("nodeClock"));
TimeSensor35.setCycleInterval(3);
TimeSensor35.setLoop(True);
Group15.addChild(&TimeSensor35);

ROUTE& ROUTE36 =  ROUTE();
ROUTE36.setFromNode(CString("nodeClock"));
ROUTE36.setFromField(CString("cycleTime"));
ROUTE36.setToNode(CString("MoveBall"));
ROUTE36.setToField(CString("set_cycle"));
Group15.addChild(&ROUTE36);

ROUTE& ROUTE37 =  ROUTE();
ROUTE37.setFromNode(CString("nodeClock"));
ROUTE37.setFromField(CString("fraction_changed"));
ROUTE37.setToNode(CString("NodePosition"));
ROUTE37.setToField(CString("set_fraction"));
Group15.addChild(&ROUTE37);

ROUTE& ROUTE38 =  ROUTE();
ROUTE38.setFromNode(CString("MoveBall"));
ROUTE38.setFromField(CString("keyValue"));
ROUTE38.setToNode(CString("NodePosition"));
ROUTE38.setToField(CString("keyValue"));
Group15.addChild(&ROUTE38);

ROUTE& ROUTE39 =  ROUTE();
ROUTE39.setFromNode(CString("NodePosition"));
ROUTE39.setFromField(CString("value_changed"));
ROUTE39.setToNode(CString("transform"));
ROUTE39.setToField(CString("set_translation"));
Group15.addChild(&ROUTE39);

ProtoBody14.addChild(&Group15);

ProtoDeclare11.addChild(&ProtoBody14);

Scene10.addChild(&ProtoDeclare11);

ProtoDeclare& ProtoDeclare40 =  ProtoDeclare();
ProtoDeclare40.setName(CString("cyl"));
ProtoInterface& ProtoInterface41 =  ProtoInterface();
field& field42 =  field();
field42.setName(CString("set_positionA"));
field42.setAccessType(CString("inputOutput"));
field42.setType(CString("SFVec3f"));
field42.setValue(CString("0 0 0"));
ProtoInterface41.addChild(&field42);

field& field43 =  field();
field43.setName(CString("set_positionB"));
field43.setAccessType(CString("inputOutput"));
field43.setType(CString("SFVec3f"));
field43.setValue(CString("50 50 50"));
ProtoInterface41.addChild(&field43);

ProtoDeclare40.addChild(&ProtoInterface41);

ProtoBody& ProtoBody44 =  ProtoBody();
Group& Group45 =  Group();
Shape& Shape46 =  Shape();
Extrusion& Extrusion47 =  Extrusion();
Extrusion47.setDEF(CString("extrusion"));
Extrusion47.setCreaseAngle(0.785);
Extrusion47.setCrossSection(new float[]{1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0}, 34);
Extrusion47.setSpine(new float[]{0,-50,0,0,0,0,0,50,0}, 9);
Shape46.setGeometry(&Extrusion47);

Appearance& Appearance48 =  Appearance();
Material& Material49 =  Material();
Material49.setDiffuseColor(new float[]{0,1,0});
Appearance48.addChild(&Material49);

Shape46.addChild(&Appearance48);

Group45.addChild(&Shape46);

Script& Script50 =  Script();
Script50.setDEF(CString("MoveCylinder"));
field& field51 =  field();
field51.setName(CString("spine"));
field51.setAccessType(CString("inputOutput"));
field51.setType(CString("MFVec3f"));
field51.setValue(CString("0 -50 0 0 0 0 0 50 0"));
Script50.addChild(&field51);

field& field52 =  field();
field52.setName(CString("endA"));
field52.setAccessType(CString("inputOutput"));
field52.setType(CString("SFVec3f"));
field52.setValue(CString("0 0 0"));
Script50.addChild(&field52);

field& field53 =  field();
field53.setName(CString("endB"));
field53.setAccessType(CString("inputOutput"));
field53.setType(CString("SFVec3f"));
field53.setValue(CString("50 50 50"));
Script50.addChild(&field53);

IS& IS54 =  IS();
Connect& connect55 =  Connect();
connect55.setNodeField(CString("endA"));
connect55.setProtoField(CString("set_positionA"));
IS54.addChild(&connect55);

Connect& connect56 =  Connect();
connect56.setNodeField(CString("endB"));
connect56.setProtoField(CString("set_positionB"));
IS54.addChild(&connect56);

Script50.addChild(&IS54);


Script50.setSourceCode(CString("ecmascript:")+
_T("			function set_endA(value) {")+
_T("				spine = new MFVec3f(value, spine[1]);")+
_T("			}")+
_T("			function set_endB(value) {")+
_T("				spine = new MFVec3f(spine[0], value);")+
_T("			}"));
Group45.addChild(&Script50);

ROUTE& ROUTE57 =  ROUTE();
ROUTE57.setFromNode(CString("MoveCylinder"));
ROUTE57.setFromField(CString("spine"));
ROUTE57.setToNode(CString("extrusion"));
ROUTE57.setToField(CString("set_spine"));
Group45.addChild(&ROUTE57);

ProtoBody44.addChild(&Group45);

ProtoDeclare40.addChild(&ProtoBody44);

Scene10.addChild(&ProtoDeclare40);

Transform& Transform58 =  Transform();
Transform58.setDEF(CString("HoldsContent"));
Transform58.setScale(new float[]{0.1,0.1,0.1});
PlaneSensor& PlaneSensor59 =  PlaneSensor();
PlaneSensor59.setDEF(CString("clickGenerator"));
PlaneSensor59.setMinPosition(new float[]{-50,-50});
PlaneSensor59.setMaxPosition(new float[]{50,50});
PlaneSensor59.setDescription(CString("click on background to add nodes, click on nodes to add links"));
Transform58.addChild(&PlaneSensor59);

ProtoInstance& ProtoInstance60 =  ProtoInstance();
ProtoInstance60.setName(CString("node"));
ProtoInstance60.setDEF(CString("nodeA"));
fieldValue& fieldValue61 =  fieldValue();
fieldValue61.setName(CString("position"));
fieldValue61.setValue(CString("0 0 0"));
ProtoInstance60.addChild(&fieldValue61);

Transform58.addChild(&ProtoInstance60);

ProtoInstance& ProtoInstance62 =  ProtoInstance();
ProtoInstance62.setName(CString("node"));
ProtoInstance62.setDEF(CString("nodeB"));
fieldValue& fieldValue63 =  fieldValue();
fieldValue63.setName(CString("position"));
fieldValue63.setValue(CString("50 50 50"));
ProtoInstance62.addChild(&fieldValue63);

Transform58.addChild(&ProtoInstance62);

ProtoInstance& ProtoInstance64 =  ProtoInstance();
ProtoInstance64.setName(CString("cyl"));
ProtoInstance64.setDEF(CString("linkA"));
Transform58.addChild(&ProtoInstance64);

Scene10.addChild(&Transform58);

Script& Script65 =  Script();
Script65.setDEF(CString("clickHandler"));
field& field66 =  field();
field66.setName(CString("counter"));
field66.setAccessType(CString("inputOutput"));
field66.setValue(CString("0"));
field66.setType(CString("SFInt32"));
Script65.addChild(&field66);

field& field67 =  field();
field67.setName(CString("add_node"));
field67.setAccessType(CString("inputOnly"));
field67.setValue(CString("false"));
field67.setType(CString("SFBool"));
Script65.addChild(&field67);

//<field accessType=\"outputOnly\" name=\"node_changed\" type=\"SFNode\"/>
//<field name=\"ModifiableNode\" type=\"SFNode\" accessType=\"inputOutput\">
//<Transform USE=\"HoldsContent\"/>
//</field>

Script65.setSourceCode(CString("ecmascript:")+
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
Scene10.addChild(&Script65);

ROUTE& ROUTE68 =  ROUTE();
ROUTE68.setFromNode(CString("clickGenerator"));
ROUTE68.setFromField(CString("isActive"));
ROUTE68.setToNode(CString("clickHandler"));
ROUTE68.setToField(CString("add_node"));
Scene10.addChild(&ROUTE68);

ROUTE& ROUTE69 =  ROUTE();
ROUTE69.setFromNode(CString("nodeA"));
ROUTE69.setFromField(CString("position"));
ROUTE69.setToNode(CString("linkA"));
ROUTE69.setToField(CString("set_positionA"));
Scene10.addChild(&ROUTE69);

ROUTE& ROUTE70 =  ROUTE();
ROUTE70.setFromNode(CString("nodeB"));
ROUTE70.setFromField(CString("position"));
ROUTE70.setToNode(CString("linkA"));
ROUTE70.setToField(CString("set_positionB"));
Scene10.addChild(&ROUTE70);

X3D0.setScene(&Scene10);

}
