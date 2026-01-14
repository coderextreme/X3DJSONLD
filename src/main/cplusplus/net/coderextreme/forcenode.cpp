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
meta4.setName(CString("title"));
meta4.setContent(CString("forcenode.x3d"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("identifier"));
meta5.setContent(CString("https://coderextreme.net/X3DJSONLD/src/main/data/force.x3d"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("description"));
meta6.setContent(CString("beginnings of a force directed graph in 3D"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(CString("generator"));
meta7.setContent(CString("Vim, X3D-Edit, https://savage.nps.edu/X3D-Edit"));
head1.addMeta(&meta7);

X3D0.setHead(&head1);

Scene& Scene8 =  Scene();
ProtoDeclare& ProtoDeclare9 =  ProtoDeclare();
ProtoDeclare9.setName(CString("node"));
ProtoInterface& ProtoInterface10 =  ProtoInterface();
field& field11 =  field();
field11.setName(CString("position"));
field11.setAccessType(CString("inputOutput"));
field11.setType(CString("SFVec3f"));
field11.setValue(CString("0 0 0"));
ProtoInterface10.addChild(&field11);

ProtoDeclare9.addChild(&ProtoInterface10);

ProtoBody& ProtoBody12 =  ProtoBody();
Group& Group13 =  Group();
Transform& Transform14 =  Transform();
Transform14.setDEF(CString("transform"));
IS& IS15 =  IS();
Connect& connect16 =  Connect();
connect16.setNodeField(CString("translation"));
connect16.setProtoField(CString("position"));
IS15.addChild(&connect16);

Transform14.addChild(&IS15);

Shape& Shape17 =  Shape();
Sphere& Sphere18 =  Sphere();
Shape17.setGeometry(&Sphere18);

Appearance& Appearance19 =  Appearance();
Material& Material20 =  Material();
Material20.setDiffuseColor(new float[]{1,0,0});
Appearance19.addChild(&Material20);

Shape17.addChild(&Appearance19);

Transform14.addChild(&Shape17);

Transform& Transform21 =  Transform();
Transform21.setTranslation(new float[]{1,0,1});
Shape& Shape22 =  Shape();
Text& Text23 =  Text();
Text23.setString(new CString[]{CString("Node")}, 1);
CFontStyle& FontStyle24 =  CFontStyle();
FontStyle24.setJustify(new CString[]{CString("MIDDLE"), CString("MIDDLE")}, 2);
FontStyle24.setSize(5);
Text23.setFontStyle(&FontStyle24);

Shape22.setGeometry(&Text23);

Appearance& Appearance25 =  Appearance();
Material& Material26 =  Material();
Material26.setDiffuseColor(new float[]{0,0,1});
Appearance25.addChild(&Material26);

Shape22.addChild(&Appearance25);

Transform21.addChild(&Shape22);

Transform14.addChild(&Transform21);

Group13.addChild(&Transform14);

PositionInterpolator& PositionInterpolator27 =  PositionInterpolator();
PositionInterpolator27.setDEF(CString("NodePosition"));
PositionInterpolator27.setKey(new float[]{0,1}, 2);
PositionInterpolator27.setKeyValue(new float[]{0,0,0,0,5,0}, 6);
Group13.addChild(&PositionInterpolator27);

Script& Script28 =  Script();
Script28.setDEF(CString("MoveBall"));
field& field29 =  field();
field29.setName(CString("translation"));
field29.setAccessType(CString("inputOutput"));
field29.setType(CString("SFVec3f"));
field29.setValue(CString("50 50 0"));
Script28.addChild(&field29);

field& field30 =  field();
field30.setName(CString("old"));
field30.setAccessType(CString("inputOutput"));
field30.setType(CString("SFVec3f"));
field30.setValue(CString("0 0 0"));
Script28.addChild(&field30);

field& field31 =  field();
field31.setName(CString("set_cycle"));
field31.setAccessType(CString("inputOnly"));
field31.setType(CString("SFTime"));
Script28.addChild(&field31);

field& field32 =  field();
field32.setName(CString("keyValue"));
field32.setAccessType(CString("outputOnly"));
field32.setType(CString("MFVec3f"));
Script28.addChild(&field32);


Script28.setSourceCode(CString("ecmascript:")+
_T("					function set_cycle(value) {")+
_T("                                                old = translation;")+
_T("						translation = new SFVec3f(Math.random()*100-50, Math.random()*100-50, Math.random()*100-50);")+
_T("                                                keyValue = new MFVec3f(...[old, translation]);")+
_T("						// Browser.println(translation);")+
_T("					}"));
Group13.addChild(&Script28);

TimeSensor& TimeSensor33 =  TimeSensor();
TimeSensor33.setDEF(CString("nodeClock"));
TimeSensor33.setCycleInterval(3);
TimeSensor33.setLoop(True);
Group13.addChild(&TimeSensor33);

ROUTE& ROUTE34 =  ROUTE();
ROUTE34.setFromNode(CString("nodeClock"));
ROUTE34.setFromField(CString("cycleTime"));
ROUTE34.setToNode(CString("MoveBall"));
ROUTE34.setToField(CString("set_cycle"));
Group13.addChild(&ROUTE34);

ROUTE& ROUTE35 =  ROUTE();
ROUTE35.setFromNode(CString("nodeClock"));
ROUTE35.setFromField(CString("fraction_changed"));
ROUTE35.setToNode(CString("NodePosition"));
ROUTE35.setToField(CString("set_fraction"));
Group13.addChild(&ROUTE35);

ROUTE& ROUTE36 =  ROUTE();
ROUTE36.setFromNode(CString("MoveBall"));
ROUTE36.setFromField(CString("keyValue"));
ROUTE36.setToNode(CString("NodePosition"));
ROUTE36.setToField(CString("keyValue"));
Group13.addChild(&ROUTE36);

ROUTE& ROUTE37 =  ROUTE();
ROUTE37.setFromNode(CString("NodePosition"));
ROUTE37.setFromField(CString("value_changed"));
ROUTE37.setToNode(CString("transform"));
ROUTE37.setToField(CString("set_translation"));
Group13.addChild(&ROUTE37);

ProtoBody12.addChild(&Group13);

ProtoDeclare9.addChild(&ProtoBody12);

Scene8.addChild(&ProtoDeclare9);

ProtoDeclare& ProtoDeclare38 =  ProtoDeclare();
ProtoDeclare38.setName(CString("cylinder"));
ProtoInterface& ProtoInterface39 =  ProtoInterface();
field& field40 =  field();
field40.setName(CString("set_positionA"));
field40.setAccessType(CString("inputOnly"));
field40.setType(CString("SFVec3f"));
ProtoInterface39.addChild(&field40);

field& field41 =  field();
field41.setName(CString("set_positionB"));
field41.setAccessType(CString("inputOnly"));
field41.setType(CString("SFVec3f"));
ProtoInterface39.addChild(&field41);

ProtoDeclare38.addChild(&ProtoInterface39);

ProtoBody& ProtoBody42 =  ProtoBody();
Group& Group43 =  Group();
Shape& Shape44 =  Shape();
Extrusion& Extrusion45 =  Extrusion();
Extrusion45.setDEF(CString("extrusion"));
Extrusion45.setCreaseAngle(0.785);
Extrusion45.setCrossSection(new float[]{1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0}, 34);
Extrusion45.setSpine(new float[]{0,-50,0,0,50,0}, 6);
Shape44.setGeometry(&Extrusion45);

Appearance& Appearance46 =  Appearance();
Material& Material47 =  Material();
Material47.setDiffuseColor(new float[]{0,1,0});
Appearance46.addChild(&Material47);

Shape44.addChild(&Appearance46);

Group43.addChild(&Shape44);

Script& Script48 =  Script();
Script48.setDEF(CString("MoveCylinder"));
field& field49 =  field();
field49.setName(CString("spine"));
field49.setAccessType(CString("inputOutput"));
field49.setType(CString("MFVec3f"));
field49.setValue(CString("0 -50 0 0 50 0"));
Script48.addChild(&field49);

field& field50 =  field();
field50.setName(CString("set_endA"));
field50.setAccessType(CString("inputOnly"));
field50.setType(CString("SFVec3f"));
Script48.addChild(&field50);

field& field51 =  field();
field51.setName(CString("set_endB"));
field51.setAccessType(CString("inputOnly"));
field51.setType(CString("SFVec3f"));
Script48.addChild(&field51);

IS& IS52 =  IS();
Connect& connect53 =  Connect();
connect53.setNodeField(CString("set_endA"));
connect53.setProtoField(CString("set_positionA"));
IS52.addChild(&connect53);

Connect& connect54 =  Connect();
connect54.setNodeField(CString("set_endB"));
connect54.setProtoField(CString("set_positionB"));
IS52.addChild(&connect54);

Script48.addChild(&IS52);


Script48.setSourceCode(CString("ecmascript:")+
_T("                function set_endA(value) {")+
_T("		    if (typeof spine === 'undefined') {")+
_T("		        spine = new MFVec3f(...[value, value]);")+
_T("		    } else {")+
_T("		        spine = new MFVec3f(...[value, spine[1]]);")+
_T("		    }")+
_T("                }")+
_T("                function set_endB(value) {")+
_T("		    if (typeof spine === 'undefined') {")+
_T("		        spine = new MFVec3f(...[value, value]);")+
_T("		    } else {")+
_T("		        spine = new MFVec3f(...[spine[0], value]);")+
_T("		    }")+
_T("                }")+
_T("                function set_spine(value) {")+
_T("                    spine = value;")+
_T("                }"));
Group43.addChild(&Script48);

ROUTE& ROUTE55 =  ROUTE();
ROUTE55.setFromNode(CString("MoveCylinder"));
ROUTE55.setFromField(CString("spine"));
ROUTE55.setToNode(CString("extrusion"));
ROUTE55.setToField(CString("set_spine"));
Group43.addChild(&ROUTE55);

ProtoBody42.addChild(&Group43);

ProtoDeclare38.addChild(&ProtoBody42);

Scene8.addChild(&ProtoDeclare38);

Transform& Transform56 =  Transform();
Transform56.setDEF(CString("HoldsContent"));
Transform56.setScale(new float[]{0.1,0.1,0.1});
PlaneSensor& PlaneSensor57 =  PlaneSensor();
PlaneSensor57.setDEF(CString("clickGenerator"));
PlaneSensor57.setMinPosition(new float[]{-50,-50});
PlaneSensor57.setMaxPosition(new float[]{50,50});
PlaneSensor57.setDescription(CString("click on background to add nodes, click on nodes to add links"));
Transform56.addChild(&PlaneSensor57);

ProtoInstance& ProtoInstance58 =  ProtoInstance();
ProtoInstance58.setName(CString("node"));
ProtoInstance58.setDEF(CString("nodeA"));
fieldValue& fieldValue59 =  fieldValue();
fieldValue59.setName(CString("position"));
fieldValue59.setValue(CString("0 0 0"));
ProtoInstance58.addChild(&fieldValue59);

Transform56.addChild(&ProtoInstance58);

ProtoInstance& ProtoInstance60 =  ProtoInstance();
ProtoInstance60.setName(CString("node"));
ProtoInstance60.setDEF(CString("nodeB"));
fieldValue& fieldValue61 =  fieldValue();
fieldValue61.setName(CString("position"));
fieldValue61.setValue(CString("50 50 50"));
ProtoInstance60.addChild(&fieldValue61);

Transform56.addChild(&ProtoInstance60);

ProtoInstance& ProtoInstance62 =  ProtoInstance();
ProtoInstance62.setName(CString("node"));
ProtoInstance62.setDEF(CString("nodeC"));
fieldValue& fieldValue63 =  fieldValue();
fieldValue63.setName(CString("position"));
fieldValue63.setValue(CString("-50 -50 -50"));
ProtoInstance62.addChild(&fieldValue63);

Transform56.addChild(&ProtoInstance62);

ProtoInstance& ProtoInstance64 =  ProtoInstance();
ProtoInstance64.setName(CString("node"));
ProtoInstance64.setDEF(CString("nodeD"));
fieldValue& fieldValue65 =  fieldValue();
fieldValue65.setName(CString("position"));
fieldValue65.setValue(CString("50 50 -50"));
ProtoInstance64.addChild(&fieldValue65);

Transform56.addChild(&ProtoInstance64);

ProtoInstance& ProtoInstance66 =  ProtoInstance();
ProtoInstance66.setName(CString("cylinder"));
ProtoInstance66.setDEF(CString("linkA"));
fieldValue& fieldValue67 =  fieldValue();
fieldValue67.setName(CString("set_positionA"));
fieldValue67.setValue(CString("0 0 0"));
ProtoInstance66.addChild(&fieldValue67);

fieldValue& fieldValue68 =  fieldValue();
fieldValue68.setName(CString("set_positionB"));
fieldValue68.setValue(CString("50 50 50"));
ProtoInstance66.addChild(&fieldValue68);

Transform56.addChild(&ProtoInstance66);

ProtoInstance& ProtoInstance69 =  ProtoInstance();
ProtoInstance69.setName(CString("cylinder"));
ProtoInstance69.setDEF(CString("linkB"));
fieldValue& fieldValue70 =  fieldValue();
fieldValue70.setName(CString("set_positionA"));
fieldValue70.setValue(CString("0 0 0"));
ProtoInstance69.addChild(&fieldValue70);

fieldValue& fieldValue71 =  fieldValue();
fieldValue71.setName(CString("set_positionB"));
fieldValue71.setValue(CString("-50 -50 -50"));
ProtoInstance69.addChild(&fieldValue71);

Transform56.addChild(&ProtoInstance69);

ProtoInstance& ProtoInstance72 =  ProtoInstance();
ProtoInstance72.setName(CString("cylinder"));
ProtoInstance72.setDEF(CString("linkC"));
fieldValue& fieldValue73 =  fieldValue();
fieldValue73.setName(CString("set_positionA"));
fieldValue73.setValue(CString("50 50 50"));
ProtoInstance72.addChild(&fieldValue73);

fieldValue& fieldValue74 =  fieldValue();
fieldValue74.setName(CString("set_positionB"));
fieldValue74.setValue(CString("50 50 -50"));
ProtoInstance72.addChild(&fieldValue74);

Transform56.addChild(&ProtoInstance72);

Scene8.addChild(&Transform56);

Script& Script75 =  Script();
Script75.setDEF(CString("clickHandler"));
field& field76 =  field();
field76.setName(CString("counter"));
field76.setAccessType(CString("inputOutput"));
field76.setValue(CString("0"));
field76.setType(CString("SFInt32"));
Script75.addChild(&field76);

field& field77 =  field();
field77.setName(CString("node_changed"));
field77.setAccessType(CString("outputOnly"));
field77.setType(CString("SFNode"));
Script75.addChild(&field77);

field& field78 =  field();
field78.setName(CString("add_node"));
field78.setAccessType(CString("inputOnly"));
field78.setValue(CString("false"));
field78.setType(CString("SFBool"));
Script75.addChild(&field78);

//<field name=\"ModifiableNode\" type=\"SFNode\" accessType=\"inputOutput\"> <Transform USE=\"HoldsContent\"/> </field>

Script75.setSourceCode(CString("ecmascript:")+
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
Scene8.addChild(&Script75);

ROUTE& ROUTE79 =  ROUTE();
ROUTE79.setFromNode(CString("clickGenerator"));
ROUTE79.setFromField(CString("isActive"));
ROUTE79.setToNode(CString("clickHandler"));
ROUTE79.setToField(CString("add_node"));
Scene8.addChild(&ROUTE79);

ROUTE& ROUTE80 =  ROUTE();
ROUTE80.setFromNode(CString("nodeA"));
ROUTE80.setFromField(CString("position"));
ROUTE80.setToNode(CString("linkA"));
ROUTE80.setToField(CString("set_positionA"));
Scene8.addChild(&ROUTE80);

ROUTE& ROUTE81 =  ROUTE();
ROUTE81.setFromNode(CString("nodeB"));
ROUTE81.setFromField(CString("position"));
ROUTE81.setToNode(CString("linkA"));
ROUTE81.setToField(CString("set_positionB"));
Scene8.addChild(&ROUTE81);

ROUTE& ROUTE82 =  ROUTE();
ROUTE82.setFromNode(CString("nodeA"));
ROUTE82.setFromField(CString("position"));
ROUTE82.setToNode(CString("linkB"));
ROUTE82.setToField(CString("set_positionA"));
Scene8.addChild(&ROUTE82);

ROUTE& ROUTE83 =  ROUTE();
ROUTE83.setFromNode(CString("nodeC"));
ROUTE83.setFromField(CString("position"));
ROUTE83.setToNode(CString("linkB"));
ROUTE83.setToField(CString("set_positionB"));
Scene8.addChild(&ROUTE83);

ROUTE& ROUTE84 =  ROUTE();
ROUTE84.setFromNode(CString("nodeA"));
ROUTE84.setFromField(CString("position"));
ROUTE84.setToNode(CString("linkC"));
ROUTE84.setToField(CString("set_positionA"));
Scene8.addChild(&ROUTE84);

ROUTE& ROUTE85 =  ROUTE();
ROUTE85.setFromNode(CString("nodeD"));
ROUTE85.setFromField(CString("position"));
ROUTE85.setToNode(CString("linkC"));
ROUTE85.setToField(CString("set_positionB"));
Scene8.addChild(&ROUTE85);

X3D0.setScene(&Scene8);

}
