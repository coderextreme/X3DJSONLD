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
meta& meta2 =  meta();
meta2.setName(CString("creator"));
meta2.setContent(CString("John W Carlson"));
head1.addMeta(&meta2);

meta& meta3 =  meta();
meta3.setName(CString("created"));
meta3.setContent(CString("December 13 2015"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("modified"));
meta4.setContent(CString("July 14 2025"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("title"));
meta5.setContent(CString("forcenode.x3d"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("identifier"));
meta6.setContent(CString("https://coderextreme.net/X3DJSONLD/src/main/data/force.x3d"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(CString("description"));
meta7.setContent(CString("beginnings of a force directed graph in 3D"));
head1.addMeta(&meta7);

meta& meta8 =  meta();
meta8.setName(CString("generator"));
meta8.setContent(CString("Vim, X3D-Edit, https://savage.nps.edu/X3D-Edit"));
head1.addMeta(&meta8);

X3D0.setHead(&head1);

Scene& Scene9 =  Scene();
ProtoDeclare& ProtoDeclare10 =  ProtoDeclare();
ProtoDeclare10.setName(CString("node"));
ProtoInterface& ProtoInterface11 =  ProtoInterface();
field& field12 =  field();
field12.setName(CString("position"));
field12.setAccessType(CString("inputOutput"));
field12.setType(CString("SFVec3f"));
field12.setValue(CString("0 0 0"));
ProtoInterface11.addChild(&field12);

ProtoDeclare10.addChild(&ProtoInterface11);

ProtoBody& ProtoBody13 =  ProtoBody();
Group& Group14 =  Group();
Transform& Transform15 =  Transform();
Transform15.setDEF(CString("transform"));
IS& IS16 =  IS();
Connect& connect17 =  Connect();
connect17.setNodeField(CString("translation"));
connect17.setProtoField(CString("position"));
IS16.addChild(&connect17);

Transform15.addChild(&IS16);

Shape& Shape18 =  Shape();
Sphere& Sphere19 =  Sphere();
Shape18.setGeometry(&Sphere19);

Appearance& Appearance20 =  Appearance();
Material& Material21 =  Material();
Material21.setDiffuseColor(new float[]{1,0,0});
Appearance20.addChild(&Material21);

Shape18.addChild(&Appearance20);

Transform15.addChild(&Shape18);

Transform& Transform22 =  Transform();
Transform22.setTranslation(new float[]{1,0,1});
Shape& Shape23 =  Shape();
Text& Text24 =  Text();
Text24.setString(new CString[]{CString("Node")}, 1);
CFontStyle& FontStyle25 =  CFontStyle();
FontStyle25.setJustify(new CString[]{CString("MIDDLE"), CString("MIDDLE")}, 2);
FontStyle25.setSize(5);
Text24.setFontStyle(&FontStyle25);

Shape23.setGeometry(&Text24);

Appearance& Appearance26 =  Appearance();
Material& Material27 =  Material();
Material27.setDiffuseColor(new float[]{0,0,1});
Appearance26.addChild(&Material27);

Shape23.addChild(&Appearance26);

Transform22.addChild(&Shape23);

Transform15.addChild(&Transform22);

Group14.addChild(&Transform15);

PositionInterpolator& PositionInterpolator28 =  PositionInterpolator();
PositionInterpolator28.setDEF(CString("NodePosition"));
PositionInterpolator28.setKey(new float[]{0,1}, 2);
PositionInterpolator28.setKeyValue(new float[]{0,0,0,0,5,0}, 6);
Group14.addChild(&PositionInterpolator28);

Script& Script29 =  Script();
Script29.setDEF(CString("MoveBall"));
field& field30 =  field();
field30.setName(CString("translation"));
field30.setAccessType(CString("inputOutput"));
field30.setType(CString("SFVec3f"));
field30.setValue(CString("50 50 0"));
Script29.addChild(&field30);

field& field31 =  field();
field31.setName(CString("old"));
field31.setAccessType(CString("inputOutput"));
field31.setType(CString("SFVec3f"));
field31.setValue(CString("0 0 0"));
Script29.addChild(&field31);

field& field32 =  field();
field32.setName(CString("set_cycle"));
field32.setAccessType(CString("inputOnly"));
field32.setType(CString("SFTime"));
Script29.addChild(&field32);

field& field33 =  field();
field33.setName(CString("keyValue"));
field33.setAccessType(CString("outputOnly"));
field33.setType(CString("MFVec3f"));
Script29.addChild(&field33);


Script29.setSourceCode(CString("ecmascript:")+
_T("					function set_cycle(value) {")+
_T("                                                old = translation;")+
_T("						translation = new SFVec3f(Math.random()*100-50, Math.random()*100-50, Math.random()*100-50);")+
_T("			    			keyValue = new MFVec3f(old, translation);")+
_T("						// Browser.println(translation);")+
_T("					}"));
Group14.addChild(&Script29);

TimeSensor& TimeSensor34 =  TimeSensor();
TimeSensor34.setDEF(CString("nodeClock"));
TimeSensor34.setCycleInterval(3);
TimeSensor34.setLoop(True);
Group14.addChild(&TimeSensor34);

ROUTE& ROUTE35 =  ROUTE();
ROUTE35.setFromNode(CString("nodeClock"));
ROUTE35.setFromField(CString("cycleTime"));
ROUTE35.setToNode(CString("MoveBall"));
ROUTE35.setToField(CString("set_cycle"));
Group14.addChild(&ROUTE35);

ROUTE& ROUTE36 =  ROUTE();
ROUTE36.setFromNode(CString("nodeClock"));
ROUTE36.setFromField(CString("fraction_changed"));
ROUTE36.setToNode(CString("NodePosition"));
ROUTE36.setToField(CString("set_fraction"));
Group14.addChild(&ROUTE36);

ROUTE& ROUTE37 =  ROUTE();
ROUTE37.setFromNode(CString("MoveBall"));
ROUTE37.setFromField(CString("keyValue"));
ROUTE37.setToNode(CString("NodePosition"));
ROUTE37.setToField(CString("keyValue"));
Group14.addChild(&ROUTE37);

ROUTE& ROUTE38 =  ROUTE();
ROUTE38.setFromNode(CString("NodePosition"));
ROUTE38.setFromField(CString("value_changed"));
ROUTE38.setToNode(CString("transform"));
ROUTE38.setToField(CString("set_translation"));
Group14.addChild(&ROUTE38);

ProtoBody13.addChild(&Group14);

ProtoDeclare10.addChild(&ProtoBody13);

Scene9.addChild(&ProtoDeclare10);

ProtoDeclare& ProtoDeclare39 =  ProtoDeclare();
ProtoDeclare39.setName(CString("cyl"));
ProtoInterface& ProtoInterface40 =  ProtoInterface();
field& field41 =  field();
field41.setName(CString("set_positionA"));
field41.setAccessType(CString("inputOutput"));
field41.setType(CString("SFVec3f"));
ProtoInterface40.addChild(&field41);

field& field42 =  field();
field42.setName(CString("set_positionB"));
field42.setAccessType(CString("inputOutput"));
field42.setType(CString("SFVec3f"));
ProtoInterface40.addChild(&field42);

ProtoDeclare39.addChild(&ProtoInterface40);

ProtoBody& ProtoBody43 =  ProtoBody();
Group& Group44 =  Group();
Shape& Shape45 =  Shape();
Extrusion& Extrusion46 =  Extrusion();
Extrusion46.setDEF(CString("extrusion"));
Extrusion46.setCreaseAngle(0.785);
Extrusion46.setCrossSection(new float[]{1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0}, 34);
Extrusion46.setSpine(new float[]{0,-50,0,0,0,0,0,50,0}, 9);
Shape45.setGeometry(&Extrusion46);

Appearance& Appearance47 =  Appearance();
Material& Material48 =  Material();
Material48.setDiffuseColor(new float[]{0,1,0});
Appearance47.addChild(&Material48);

Shape45.addChild(&Appearance47);

Group44.addChild(&Shape45);

Script& Script49 =  Script();
Script49.setDEF(CString("MoveCylinder"));
field& field50 =  field();
field50.setName(CString("spine"));
field50.setAccessType(CString("inputOutput"));
field50.setType(CString("MFVec3f"));
field50.setValue(CString("0 -50 0 0 0 0 0 50 0"));
Script49.addChild(&field50);

field& field51 =  field();
field51.setName(CString("endA"));
field51.setAccessType(CString("inputOutput"));
field51.setType(CString("SFVec3f"));
Script49.addChild(&field51);

field& field52 =  field();
field52.setName(CString("endB"));
field52.setAccessType(CString("inputOutput"));
field52.setType(CString("SFVec3f"));
Script49.addChild(&field52);

IS& IS53 =  IS();
Connect& connect54 =  Connect();
connect54.setNodeField(CString("endA"));
connect54.setProtoField(CString("set_positionA"));
IS53.addChild(&connect54);

Connect& connect55 =  Connect();
connect55.setNodeField(CString("endB"));
connect55.setProtoField(CString("set_positionB"));
IS53.addChild(&connect55);

Script49.addChild(&IS53);


Script49.setSourceCode(CString("ecmascript:")+
_T("                function set_endA(value) {")+
_T("		    spine = new MFVec3f(value, spine[1]);")+
_T("                }")+
_T("                function set_endB(value) {")+
_T("		    spine = new MFVec3f(spine[0], value);")+
_T("                }"));
Group44.addChild(&Script49);

ROUTE& ROUTE56 =  ROUTE();
ROUTE56.setFromNode(CString("MoveCylinder"));
ROUTE56.setFromField(CString("spine"));
ROUTE56.setToNode(CString("extrusion"));
ROUTE56.setToField(CString("set_spine"));
Group44.addChild(&ROUTE56);

ProtoBody43.addChild(&Group44);

ProtoDeclare39.addChild(&ProtoBody43);

Scene9.addChild(&ProtoDeclare39);

Transform& Transform57 =  Transform();
Transform57.setDEF(CString("HoldsContent"));
Transform57.setScale(new float[]{0.1,0.1,0.1});
PlaneSensor& PlaneSensor58 =  PlaneSensor();
PlaneSensor58.setDEF(CString("clickGenerator"));
PlaneSensor58.setMinPosition(new float[]{-50,-50});
PlaneSensor58.setMaxPosition(new float[]{50,50});
PlaneSensor58.setDescription(CString("click on background to add nodes, click on nodes to add links"));
Transform57.addChild(&PlaneSensor58);

ProtoInstance& ProtoInstance59 =  ProtoInstance();
ProtoInstance59.setName(CString("node"));
ProtoInstance59.setDEF(CString("nodeA"));
fieldValue& fieldValue60 =  fieldValue();
fieldValue60.setName(CString("position"));
fieldValue60.setValue(CString("0 0 0"));
ProtoInstance59.addChild(&fieldValue60);

Transform57.addChild(&ProtoInstance59);

ProtoInstance& ProtoInstance61 =  ProtoInstance();
ProtoInstance61.setName(CString("node"));
ProtoInstance61.setDEF(CString("nodeB"));
fieldValue& fieldValue62 =  fieldValue();
fieldValue62.setName(CString("position"));
fieldValue62.setValue(CString("50 50 50"));
ProtoInstance61.addChild(&fieldValue62);

Transform57.addChild(&ProtoInstance61);

ProtoInstance& ProtoInstance63 =  ProtoInstance();
ProtoInstance63.setName(CString("node"));
ProtoInstance63.setDEF(CString("nodeC"));
fieldValue& fieldValue64 =  fieldValue();
fieldValue64.setName(CString("position"));
fieldValue64.setValue(CString("-50 -50 -50"));
ProtoInstance63.addChild(&fieldValue64);

Transform57.addChild(&ProtoInstance63);

ProtoInstance& ProtoInstance65 =  ProtoInstance();
ProtoInstance65.setName(CString("node"));
ProtoInstance65.setDEF(CString("nodeD"));
fieldValue& fieldValue66 =  fieldValue();
fieldValue66.setName(CString("position"));
fieldValue66.setValue(CString("50 50 -50"));
ProtoInstance65.addChild(&fieldValue66);

Transform57.addChild(&ProtoInstance65);

ProtoInstance& ProtoInstance67 =  ProtoInstance();
ProtoInstance67.setName(CString("cyl"));
ProtoInstance67.setDEF(CString("linkA"));
Transform57.addChild(&ProtoInstance67);

ProtoInstance& ProtoInstance68 =  ProtoInstance();
ProtoInstance68.setName(CString("cyl"));
ProtoInstance68.setDEF(CString("linkB"));
Transform57.addChild(&ProtoInstance68);

ProtoInstance& ProtoInstance69 =  ProtoInstance();
ProtoInstance69.setName(CString("cyl"));
ProtoInstance69.setDEF(CString("linkC"));
Transform57.addChild(&ProtoInstance69);

Scene9.addChild(&Transform57);

Script& Script70 =  Script();
Script70.setDEF(CString("clickHandler"));
field& field71 =  field();
field71.setName(CString("counter"));
field71.setAccessType(CString("inputOutput"));
field71.setValue(CString("0"));
field71.setType(CString("SFInt32"));
Script70.addChild(&field71);

field& field72 =  field();
field72.setName(CString("node_changed"));
field72.setAccessType(CString("outputOnly"));
field72.setType(CString("SFNode"));
Script70.addChild(&field72);

field& field73 =  field();
field73.setName(CString("add_node"));
field73.setAccessType(CString("inputOnly"));
field73.setValue(CString("false"));
field73.setType(CString("SFBool"));
Script70.addChild(&field73);

//<field name=\"ModifiableNode\" type=\"SFNode\" accessType=\"inputOutput\">
//<Transform USE=\"HoldsContent\"/>
//</field>

Script70.setSourceCode(CString("ecmascript:")+
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
Scene9.addChild(&Script70);

ROUTE& ROUTE74 =  ROUTE();
ROUTE74.setFromNode(CString("clickGenerator"));
ROUTE74.setFromField(CString("isActive"));
ROUTE74.setToNode(CString("clickHandler"));
ROUTE74.setToField(CString("add_node"));
Scene9.addChild(&ROUTE74);

ROUTE& ROUTE75 =  ROUTE();
ROUTE75.setFromNode(CString("nodeA"));
ROUTE75.setFromField(CString("position"));
ROUTE75.setToNode(CString("linkA"));
ROUTE75.setToField(CString("set_positionA"));
Scene9.addChild(&ROUTE75);

ROUTE& ROUTE76 =  ROUTE();
ROUTE76.setFromNode(CString("nodeB"));
ROUTE76.setFromField(CString("position"));
ROUTE76.setToNode(CString("linkA"));
ROUTE76.setToField(CString("set_positionB"));
Scene9.addChild(&ROUTE76);

ROUTE& ROUTE77 =  ROUTE();
ROUTE77.setFromNode(CString("nodeA"));
ROUTE77.setFromField(CString("position"));
ROUTE77.setToNode(CString("linkB"));
ROUTE77.setToField(CString("set_positionA"));
Scene9.addChild(&ROUTE77);

ROUTE& ROUTE78 =  ROUTE();
ROUTE78.setFromNode(CString("nodeC"));
ROUTE78.setFromField(CString("position"));
ROUTE78.setToNode(CString("linkB"));
ROUTE78.setToField(CString("set_positionB"));
Scene9.addChild(&ROUTE78);

ROUTE& ROUTE79 =  ROUTE();
ROUTE79.setFromNode(CString("nodeA"));
ROUTE79.setFromField(CString("position"));
ROUTE79.setToNode(CString("linkC"));
ROUTE79.setToField(CString("set_positionA"));
Scene9.addChild(&ROUTE79);

ROUTE& ROUTE80 =  ROUTE();
ROUTE80.setFromNode(CString("nodeD"));
ROUTE80.setFromField(CString("position"));
ROUTE80.setToNode(CString("linkC"));
ROUTE80.setToField(CString("set_positionB"));
Scene9.addChild(&ROUTE80);

X3D0.setScene(&Scene9);

}
