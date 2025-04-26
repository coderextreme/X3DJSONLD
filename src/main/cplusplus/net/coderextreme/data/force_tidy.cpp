#define False false
#define True true
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/pch.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/framework.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/glut.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/X3DLib.h"
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
meta5.setName(CString("title"));
meta5.setContent(CString("force.x3d"));
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

meta& meta9 =  meta();
meta9.setName(CString("generator"));
meta9.setContent(CString("x3d-tidy V1.0.175, https://www.npmjs.com/package/x3d-tidy"));
head1.addMeta(&meta9);

meta& meta10 =  meta();
meta10.setName(CString("modified"));
meta10.setContent(CString("Sat, 9 Nov 2024 19:29:39 GMT"));
head1.addMeta(&meta10);

X3D0.setHead(&head1);

Scene& Scene11 =  Scene();
ProtoDeclare& ProtoDeclare12 =  ProtoDeclare();
ProtoDeclare12.setName(CString("node"));
ProtoInterface& ProtoInterface13 =  ProtoInterface();
field& field14 =  field();
field14.setName(CString("position"));
field14.setAccessType(CString("inputOutput"));
field14.setType(CString("SFVec3f"));
ProtoInterface13.addChild(&field14);

ProtoDeclare12.addChild(&ProtoInterface13);

ProtoBody& ProtoBody15 =  ProtoBody();
Group& Group16 =  Group();
Transform& Transform17 =  Transform();
Transform17.setDEF(CString("transform"));
IS& IS18 =  IS();
Connect& connect19 =  Connect();
connect19.setNodeField(CString("translation"));
connect19.setProtoField(CString("position"));
IS18.addChild(&connect19);

Transform17.addChild(&IS18);

Shape& Shape20 =  Shape();
Appearance& Appearance21 =  Appearance();
Material& Material22 =  Material();
Material22.setDiffuseColor(new float[]{1,0,0});
Appearance21.addChild(&Material22);

Shape20.addChild(&Appearance21);

Sphere& Sphere23 =  Sphere();
Shape20.setGeometry(&Sphere23);

Transform17.addChild(&Shape20);

Transform& Transform24 =  Transform();
Transform24.setTranslation(new float[]{1,0,0});
Shape& Shape25 =  Shape();
Appearance& Appearance26 =  Appearance();
Material& Material27 =  Material();
Material27.setDiffuseColor(new float[]{0,0,1});
Appearance26.addChild(&Material27);

Shape25.addChild(&Appearance26);

Text& Text28 =  Text();
Text28.setString(new CString[]{CString("Node")}, 1);
CFontStyle& FontStyle29 =  CFontStyle();
FontStyle29.setSize(5);
FontStyle29.setJustify(new CString[]{CString("MIDDLE"), CString("MIDDLE")}, 2);
Text28.setFontStyle(&FontStyle29);

Shape25.setGeometry(&Text28);

Transform24.addChild(&Shape25);

Transform17.addChild(&Transform24);

Group16.addChild(&Transform17);

PositionInterpolator& PositionInterpolator30 =  PositionInterpolator();
PositionInterpolator30.setDEF(CString("NodePosition"));
PositionInterpolator30.setKey(new float[]{0,1}, 2);
PositionInterpolator30.setKeyValue(new float[]{0,0,0,0,5,0}, 6);
Group16.addChild(&PositionInterpolator30);

Script& Script31 =  Script();
Script31.setDEF(CString("MoveBall"));
field& field32 =  field();
field32.setName(CString("translation"));
field32.setAccessType(CString("inputOutput"));
field32.setType(CString("SFVec3f"));
field32.setValue(CString("50 50 0"));
Script31.addChild(&field32);

field& field33 =  field();
field33.setName(CString("old"));
field33.setAccessType(CString("inputOutput"));
field33.setType(CString("SFVec3f"));
Script31.addChild(&field33);

field& field34 =  field();
field34.setName(CString("set_cycle"));
field34.setAccessType(CString("inputOnly"));
field34.setType(CString("SFTime"));
Script31.addChild(&field34);

field& field35 =  field();
field35.setName(CString("keyValue"));
field35.setAccessType(CString("outputOnly"));
field35.setType(CString("MFVec3f"));
Script31.addChild(&field35);


Script31.setSourceCode(CString("ecmascript:")+
_T("					function set_cycle(value) {")+
_T("                                                old = translation;")+
_T("						translation = new SFVec3f(Math.random()*100-50, Math.random()*100-50, Math.random()*100-50);")+
_T("		    				/*")+
_T("                                                var tmpkeyValue = new MFVec3f();")+
_T("			    			tmpkeyValue[0] = old;")+
_T("			    			tmpkeyValue[1] = translation;")+
_T("                                                keyValue = tmpkeyValue;")+
_T("		    				*/")+
_T("                                                keyValue = new MFVec3f([old, translation]);")+
_T("			    		")+
_T("						// Browser.println(translation);")+
_T("					}"));
Group16.addChild(&Script31);

TimeSensor& TimeSensor36 =  TimeSensor();
TimeSensor36.setDEF(CString("nodeClock"));
TimeSensor36.setCycleInterval(3);
TimeSensor36.setLoop(True);
Group16.addChild(&TimeSensor36);

ProtoBody15.addChild(&Group16);

ROUTE& ROUTE37 =  ROUTE();
ROUTE37.setFromNode(CString("nodeClock"));
ROUTE37.setFromField(CString("cycleTime"));
ROUTE37.setToNode(CString("MoveBall"));
ROUTE37.setToField(CString("set_cycle"));
ProtoBody15.addChild(&ROUTE37);

ROUTE& ROUTE38 =  ROUTE();
ROUTE38.setFromNode(CString("nodeClock"));
ROUTE38.setFromField(CString("fraction_changed"));
ROUTE38.setToNode(CString("NodePosition"));
ROUTE38.setToField(CString("set_fraction"));
ProtoBody15.addChild(&ROUTE38);

ROUTE& ROUTE39 =  ROUTE();
ROUTE39.setFromNode(CString("MoveBall"));
ROUTE39.setFromField(CString("keyValue"));
ROUTE39.setToNode(CString("NodePosition"));
ROUTE39.setToField(CString("set_keyValue"));
ProtoBody15.addChild(&ROUTE39);

ROUTE& ROUTE40 =  ROUTE();
ROUTE40.setFromNode(CString("NodePosition"));
ROUTE40.setFromField(CString("value_changed"));
ROUTE40.setToNode(CString("transform"));
ROUTE40.setToField(CString("set_translation"));
ProtoBody15.addChild(&ROUTE40);

ProtoDeclare12.addChild(&ProtoBody15);

Scene11.addChild(&ProtoDeclare12);

ProtoDeclare& ProtoDeclare41 =  ProtoDeclare();
ProtoDeclare41.setName(CString("cyl"));
ProtoInterface& ProtoInterface42 =  ProtoInterface();
field& field43 =  field();
field43.setName(CString("set_positionA"));
field43.setAccessType(CString("inputOnly"));
field43.setType(CString("SFVec3f"));
ProtoInterface42.addChild(&field43);

field& field44 =  field();
field44.setName(CString("set_positionB"));
field44.setAccessType(CString("inputOnly"));
field44.setType(CString("SFVec3f"));
ProtoInterface42.addChild(&field44);

ProtoDeclare41.addChild(&ProtoInterface42);

ProtoBody& ProtoBody45 =  ProtoBody();
Group& Group46 =  Group();
Shape& Shape47 =  Shape();
Appearance& Appearance48 =  Appearance();
Material& Material49 =  Material();
Material49.setDiffuseColor(new float[]{0,1,0});
Appearance48.addChild(&Material49);

Shape47.addChild(&Appearance48);

Extrusion& Extrusion50 =  Extrusion();
Extrusion50.setDEF(CString("extrusion"));
Extrusion50.setCreaseAngle(0.785);
Extrusion50.setCrossSection(new float[]{1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0}, 34);
Extrusion50.setSpine(new float[]{0,-50,0,0,50,0}, 6);
Shape47.setGeometry(&Extrusion50);

Group46.addChild(&Shape47);

Script& Script51 =  Script();
Script51.setDEF(CString("MoveCylinder"));
field& field52 =  field();
field52.setName(CString("spine"));
field52.setAccessType(CString("inputOutput"));
field52.setType(CString("MFVec3f"));
field52.setValue(CString("0 -50 0 0 50 0"));
Script51.addChild(&field52);

field& field53 =  field();
field53.setName(CString("set_endA"));
field53.setAccessType(CString("inputOnly"));
field53.setType(CString("SFVec3f"));
Script51.addChild(&field53);

field& field54 =  field();
field54.setName(CString("set_endB"));
field54.setAccessType(CString("inputOnly"));
field54.setType(CString("SFVec3f"));
Script51.addChild(&field54);

IS& IS55 =  IS();
Connect& connect56 =  Connect();
connect56.setNodeField(CString("set_endA"));
connect56.setProtoField(CString("set_positionA"));
IS55.addChild(&connect56);

Connect& connect57 =  Connect();
connect57.setNodeField(CString("set_endB"));
connect57.setProtoField(CString("set_positionB"));
IS55.addChild(&connect57);

Script51.addChild(&IS55);


Script51.setSourceCode(CString("ecmascript:")+
_T("                function set_endA(value) {")+
_T("		    if (typeof spine === 'undefined') {")+
_T("		    	/*")+
_T("		        var tmpspine = new MFVec3f();")+
_T("			tmpspine[0] = value;")+
_T("			tmpspine[1] = value;")+
_T("			spine = tmpspine;")+
_T("		    	*/")+
_T("		        spine = new MFVec3f([value, value]);")+
_T("		    } else {")+
_T("		    	/*")+
_T("		        var tmpspine = new MFVec3f();")+
_T("			tmpspine[0] = value;")+
_T("			tmpspine[1] = spine[1];")+
_T("			spine = tmpspine;")+
_T("		        */")+
_T("		        spine = new MFVec3f([value, spine[1]]);")+
_T("		    }")+
_T("                }")+
_T("                function set_endB(value) {")+
_T("		    if (typeof spine === 'undefined') {")+
_T("		    	/*")+
_T("		        var tmpspine = new MFVec3f();")+
_T("			tmpspine[0] = value;")+
_T("			tmpspine[1] = value;")+
_T("			spine = tmpspine;")+
_T("		        */")+
_T("		        spine = new MFVec3f([value, value]);")+
_T("		    } else {")+
_T("		    	/*")+
_T("		        var tmpspine = new MFVec3f();")+
_T("			tmpspine[0] = spine[0];")+
_T("			tmpspine[1] = value;")+
_T("			spine = tmpspine;")+
_T("		    	*/")+
_T("		        spine = new MFVec3f([spine[0], value]);")+
_T("		    }")+
_T("                }")+
_T("                function set_spine(value) {")+
_T("                    spine = value;")+
_T("                }"));
Group46.addChild(&Script51);

ProtoBody45.addChild(&Group46);

ROUTE& ROUTE58 =  ROUTE();
ROUTE58.setFromNode(CString("MoveCylinder"));
ROUTE58.setFromField(CString("spine_changed"));
ROUTE58.setToNode(CString("extrusion"));
ROUTE58.setToField(CString("set_spine"));
ProtoBody45.addChild(&ROUTE58);

ProtoDeclare41.addChild(&ProtoBody45);

Scene11.addChild(&ProtoDeclare41);

Transform& Transform59 =  Transform();
Transform59.setDEF(CString("HoldsContent"));
Transform59.setScale(new float[]{0.1,0.1,0.1});
PlaneSensor& PlaneSensor60 =  PlaneSensor();
PlaneSensor60.setDEF(CString("clickGenerator"));
PlaneSensor60.setDescription(CString("click on background to add nodes, click on nodes to add links"));
PlaneSensor60.setMinPosition(new float[]{-50,-50});
PlaneSensor60.setMaxPosition(new float[]{50,50});
Transform59.addChild(&PlaneSensor60);

ProtoInstance& ProtoInstance61 =  ProtoInstance();
ProtoInstance61.setName(CString("node"));
ProtoInstance61.setDEF(CString("nodeA"));
fieldValue& fieldValue62 =  fieldValue();
fieldValue62.setName(CString("position"));
fieldValue62.setValue(CString("0 1.388333 0"));
ProtoInstance61.addChild(&fieldValue62);

Transform59.addChild(&ProtoInstance61);

ProtoInstance& ProtoInstance63 =  ProtoInstance();
ProtoInstance63.setName(CString("node"));
ProtoInstance63.setDEF(CString("nodeB"));
fieldValue& fieldValue64 =  fieldValue();
fieldValue64.setName(CString("position"));
fieldValue64.setValue(CString("0 1.388333 0"));
ProtoInstance63.addChild(&fieldValue64);

Transform59.addChild(&ProtoInstance63);

ProtoInstance& ProtoInstance65 =  ProtoInstance();
ProtoInstance65.setName(CString("node"));
ProtoInstance65.setDEF(CString("nodeC"));
fieldValue& fieldValue66 =  fieldValue();
fieldValue66.setName(CString("position"));
fieldValue66.setValue(CString("0 1.388333 0"));
ProtoInstance65.addChild(&fieldValue66);

Transform59.addChild(&ProtoInstance65);

ProtoInstance& ProtoInstance67 =  ProtoInstance();
ProtoInstance67.setName(CString("node"));
ProtoInstance67.setDEF(CString("nodeD"));
fieldValue& fieldValue68 =  fieldValue();
fieldValue68.setName(CString("position"));
fieldValue68.setValue(CString("0 1.388333 0"));
ProtoInstance67.addChild(&fieldValue68);

Transform59.addChild(&ProtoInstance67);

ProtoInstance& ProtoInstance69 =  ProtoInstance();
ProtoInstance69.setName(CString("cyl"));
ProtoInstance69.setDEF(CString("linkA"));
Transform59.addChild(&ProtoInstance69);

ProtoInstance& ProtoInstance70 =  ProtoInstance();
ProtoInstance70.setName(CString("cyl"));
ProtoInstance70.setDEF(CString("linkB"));
Transform59.addChild(&ProtoInstance70);

ProtoInstance& ProtoInstance71 =  ProtoInstance();
ProtoInstance71.setName(CString("cyl"));
ProtoInstance71.setDEF(CString("linkC"));
Transform59.addChild(&ProtoInstance71);

Scene11.addChild(&Transform59);

Script& Script72 =  Script();
Script72.setDEF(CString("clickHandler"));
field& field73 =  field();
field73.setName(CString("counter"));
field73.setAccessType(CString("inputOutput"));
field73.setType(CString("SFInt32"));
Script72.addChild(&field73);

field& field74 =  field();
field74.setName(CString("node_changed"));
field74.setAccessType(CString("outputOnly"));
field74.setType(CString("SFNode"));
Script72.addChild(&field74);

field& field75 =  field();
field75.setName(CString("add_node"));
field75.setAccessType(CString("inputOnly"));
field75.setType(CString("SFBool"));
Script72.addChild(&field75);


Script72.setSourceCode(CString("ecmascript:")+
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
Scene11.addChild(&Script72);

ROUTE& ROUTE76 =  ROUTE();
ROUTE76.setFromNode(CString("clickGenerator"));
ROUTE76.setFromField(CString("isActive"));
ROUTE76.setToNode(CString("clickHandler"));
ROUTE76.setToField(CString("add_node"));
Scene11.addChild(&ROUTE76);

ROUTE& ROUTE77 =  ROUTE();
ROUTE77.setFromNode(CString("nodeA"));
ROUTE77.setFromField(CString("position_changed"));
ROUTE77.setToNode(CString("linkA"));
ROUTE77.setToField(CString("set_positionA"));
Scene11.addChild(&ROUTE77);

ROUTE& ROUTE78 =  ROUTE();
ROUTE78.setFromNode(CString("nodeB"));
ROUTE78.setFromField(CString("position_changed"));
ROUTE78.setToNode(CString("linkA"));
ROUTE78.setToField(CString("set_positionB"));
Scene11.addChild(&ROUTE78);

ROUTE& ROUTE79 =  ROUTE();
ROUTE79.setFromNode(CString("nodeA"));
ROUTE79.setFromField(CString("position_changed"));
ROUTE79.setToNode(CString("linkB"));
ROUTE79.setToField(CString("set_positionA"));
Scene11.addChild(&ROUTE79);

ROUTE& ROUTE80 =  ROUTE();
ROUTE80.setFromNode(CString("nodeC"));
ROUTE80.setFromField(CString("position_changed"));
ROUTE80.setToNode(CString("linkB"));
ROUTE80.setToField(CString("set_positionB"));
Scene11.addChild(&ROUTE80);

ROUTE& ROUTE81 =  ROUTE();
ROUTE81.setFromNode(CString("nodeA"));
ROUTE81.setFromField(CString("position_changed"));
ROUTE81.setToNode(CString("linkC"));
ROUTE81.setToField(CString("set_positionA"));
Scene11.addChild(&ROUTE81);

ROUTE& ROUTE82 =  ROUTE();
ROUTE82.setFromNode(CString("nodeD"));
ROUTE82.setFromField(CString("position_changed"));
ROUTE82.setToNode(CString("linkC"));
ROUTE82.setToField(CString("set_positionB"));
Scene11.addChild(&ROUTE82);

X3D0.setScene(&Scene11);

}
