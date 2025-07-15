//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/pch.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/framework.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/glut.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/X3DLib.h"
//int main(int argc, char ** argv) 
//{
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
meta6.setContent(CString("force.x3d"));
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

meta& meta10 =  meta();
meta10.setName(CString("generator"));
meta10.setContent(CString("x3d-tidy V1.0.175, https://www.npmjs.com/package/x3d-tidy"));
head1.addMeta(&meta10);

meta& meta11 =  meta();
meta11.setName(CString("modified"));
meta11.setContent(CString("Sat, 9 Nov 2024 19:29:39 GMT"));
head1.addMeta(&meta11);

X3D0.setHead(&head1);

Scene& Scene12 =  Scene();
ProtoDeclare& ProtoDeclare13 =  ProtoDeclare();
ProtoDeclare13.setName(CString("node"));
ProtoInterface& ProtoInterface14 =  ProtoInterface();
field& field15 =  field();
field15.setName(CString("position"));
field15.setAccessType(CString("inputOutput"));
field15.setType(CString("SFVec3f"));
ProtoInterface14.addChild(&field15);

ProtoDeclare13.addChild(&ProtoInterface14);

ProtoBody& ProtoBody16 =  ProtoBody();
Group& Group17 =  Group();
Transform& Transform18 =  Transform();
Transform18.setDEF(CString("transform"));
IS& IS19 =  IS();
Connect& connect20 =  Connect();
connect20.setNodeField(CString("translation"));
connect20.setProtoField(CString("position"));
IS19.addChild(&connect20);

Transform18.addChild(&IS19);

Shape& Shape21 =  Shape();
Sphere& Sphere22 =  Sphere();
Shape21.setGeometry(&Sphere22);

Appearance& Appearance23 =  Appearance();
Material& Material24 =  Material();
Material24.setDiffuseColor(new float[]{1.0,0.0,0.0});
Appearance23.addChild(&Material24);

Shape21.addChild(&Appearance23);

Transform18.addChild(&Shape21);

Transform& Transform25 =  Transform();
Transform25.setTranslation(new float[]{1.0,0.0,0.0});
Shape& Shape26 =  Shape();
Appearance& Appearance27 =  Appearance();
Material& Material28 =  Material();
Material28.setDiffuseColor(new float[]{0.0,0.0,1.0});
Appearance27.addChild(&Material28);

Shape26.addChild(&Appearance27);

Text& Text29 =  Text();
Text29.setString(new CString[]{CString("Node")}, 1);
CFontStyle& FontStyle30 =  CFontStyle();
FontStyle30.setSize(5);
FontStyle30.setJustify(new CString[]{CString("MIDDLE"), CString("MIDDLE")}, 2);
Text29.setFontStyle(&FontStyle30);

Shape26.setGeometry(&Text29);

Transform25.addChild(&Shape26);

Transform18.addChild(&Transform25);

Group17.addChild(&Transform18);

PositionInterpolator& PositionInterpolator31 =  PositionInterpolator();
PositionInterpolator31.setDEF(CString("NodePosition"));
PositionInterpolator31.setKey(new float[]{0.0,1.0}, 2);
PositionInterpolator31.setKeyValue(new float[]{0.0,0.0,0.0,0.0,5.0,0.0}, 6);
Group17.addChild(&PositionInterpolator31);

Script& Script32 =  Script();
Script32.setDEF(CString("MoveBall"));
field& field33 =  field();
field33.setName(CString("translation"));
field33.setAccessType(CString("inputOutput"));
field33.setType(CString("SFVec3f"));
field33.setValue(CString("50 50 0"));
Script32.addChild(&field33);

field& field34 =  field();
field34.setName(CString("old"));
field34.setAccessType(CString("inputOutput"));
field34.setType(CString("SFVec3f"));
Script32.addChild(&field34);

field& field35 =  field();
field35.setName(CString("set_cycle"));
field35.setAccessType(CString("inputOnly"));
field35.setType(CString("SFTime"));
Script32.addChild(&field35);

field& field36 =  field();
field36.setName(CString("keyValue"));
field36.setAccessType(CString("outputOnly"));
field36.setType(CString("MFVec3f"));
Script32.addChild(&field36);


//Script32.setSourceCode(CString("ecmascript:")+
//_T("		function set_cycle(value) {")+
//_T("			old = translation;")+
//_T("			translation = new SFVec3f(Math.random()*100-50, Math.random()*100-50, Math.random()*100-50);")+
//_T("			keyValue = new MFVec3f(old, translation);")+
//_T("		}"));
Group17.addChild(&Script32);

TimeSensor& TimeSensor37 =  TimeSensor();
TimeSensor37.setDEF(CString("nodeClock"));
TimeSensor37.setCycleInterval(3);
TimeSensor37.setLoop(true);
Group17.addChild(&TimeSensor37);

ROUTE& ROUTE38 =  ROUTE();
ROUTE38.setFromNode(CString("nodeClock"));
ROUTE38.setFromField(CString("cycleTime"));
ROUTE38.setToNode(CString("MoveBall"));
ROUTE38.setToField(CString("set_cycle"));
Group17.addChild(&ROUTE38);

ROUTE& ROUTE39 =  ROUTE();
ROUTE39.setFromNode(CString("nodeClock"));
ROUTE39.setFromField(CString("fraction_changed"));
ROUTE39.setToNode(CString("NodePosition"));
ROUTE39.setToField(CString("set_fraction"));
Group17.addChild(&ROUTE39);

ROUTE& ROUTE40 =  ROUTE();
ROUTE40.setFromNode(CString("MoveBall"));
ROUTE40.setFromField(CString("keyValue"));
ROUTE40.setToNode(CString("NodePosition"));
ROUTE40.setToField(CString("set_keyValue"));
Group17.addChild(&ROUTE40);

ROUTE& ROUTE41 =  ROUTE();
ROUTE41.setFromNode(CString("NodePosition"));
ROUTE41.setFromField(CString("value_changed"));
ROUTE41.setToNode(CString("transform"));
ROUTE41.setToField(CString("set_translation"));
Group17.addChild(&ROUTE41);

ProtoBody16.addChild(&Group17);

ProtoDeclare13.addChild(&ProtoBody16);

Scene12.addChild(&ProtoDeclare13);

ProtoDeclare& ProtoDeclare42 =  ProtoDeclare();
ProtoDeclare42.setName(CString("cyl"));
ProtoInterface& ProtoInterface43 =  ProtoInterface();
field& field44 =  field();
field44.setName(CString("set_positionA"));
field44.setAccessType(CString("inputOutput"));
field44.setType(CString("SFVec3f"));
ProtoInterface43.addChild(&field44);

field& field45 =  field();
field45.setName(CString("set_positionB"));
field45.setAccessType(CString("inputOutput"));
field45.setType(CString("SFVec3f"));
ProtoInterface43.addChild(&field45);

ProtoDeclare42.addChild(&ProtoInterface43);

ProtoBody& ProtoBody46 =  ProtoBody();
Group& Group47 =  Group();
Shape& Shape48 =  Shape();
Appearance& Appearance49 =  Appearance();
Material& Material50 =  Material();
Material50.setDiffuseColor(new float[]{0.0,1.0,0.0});
Appearance49.addChild(&Material50);

Shape48.addChild(&Appearance49);

Extrusion& Extrusion51 =  Extrusion();
Extrusion51.setDEF(CString("extrusion"));
Extrusion51.setCreaseAngle(0.785);
Extrusion51.setCrossSection(new float[]{1.0,0.0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0.0,-1.0,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1.0,0.0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0.0,1.0,0.38,0.92,0.71,0.71,0.92,0.38,1.0,0.0}, 34);
Extrusion51.setSpine(new float[]{0.0,-50.0,0.0,0.0,0.0,0.0,0.0,50.0,0.0}, 9);
Shape48.setGeometry(&Extrusion51);

Group47.addChild(&Shape48);

Script& Script52 =  Script();
Script52.setDEF(CString("MoveCylinder"));
field& field53 =  field();
field53.setName(CString("spine"));
field53.setAccessType(CString("inputOutput"));
field53.setType(CString("MFVec3f"));
field53.setValue(CString("0 -50 0 0 0 0 0 50 0"));
Script52.addChild(&field53);

field& field54 =  field();
field54.setName(CString("endA"));
field54.setAccessType(CString("inputOutput"));
field54.setType(CString("SFVec3f"));
Script52.addChild(&field54);

field& field55 =  field();
field55.setName(CString("endB"));
field55.setAccessType(CString("inputOutput"));
field55.setType(CString("SFVec3f"));
Script52.addChild(&field55);

IS& IS56 =  IS();
Connect& connect57 =  Connect();
connect57.setNodeField(CString("endA"));
connect57.setProtoField(CString("set_positionA"));
IS56.addChild(&connect57);

Connect& connect58 =  Connect();
connect58.setNodeField(CString("endB"));
connect58.setProtoField(CString("set_positionB"));
IS56.addChild(&connect58);

Script52.addChild(&IS56);


//Script52.setSourceCode(CString("ecmascript:")+
//_T("                function set_endA(value) {")+
//_T("		    spine = new MFVec3f(value, spine[1]);")+
//_T("                }")+
//_T("                function set_endB(value) {")+
//_T("		    spine = new MFVec3f(spine[0], value);")+
//_T("                }"));
Group47.addChild(&Script52);

ROUTE& ROUTE59 =  ROUTE();
ROUTE59.setFromNode(CString("MoveCylinder"));
ROUTE59.setFromField(CString("spine_changed"));
ROUTE59.setToNode(CString("extrusion"));
ROUTE59.setToField(CString("set_spine"));
Group47.addChild(&ROUTE59);

ProtoBody46.addChild(&Group47);

ProtoDeclare42.addChild(&ProtoBody46);

Scene12.addChild(&ProtoDeclare42);

Transform& Transform60 =  Transform();
Transform60.setDEF(CString("HoldsContent"));
Transform60.setScale(new float[]{0.1,0.1,0.1});
PlaneSensor& PlaneSensor61 =  PlaneSensor();
PlaneSensor61.setDEF(CString("clickGenerator"));
PlaneSensor61.setDescription(CString("click on background to add nodes, click on nodes to add links"));
PlaneSensor61.setMinPosition(new float[]{-50.0,-50.0});
PlaneSensor61.setMaxPosition(new float[]{50.0,50.0});
Transform60.addChild(&PlaneSensor61);

ProtoInstance& ProtoInstance62 =  ProtoInstance();
ProtoInstance62.setName(CString("node"));
ProtoInstance62.setDEF(CString("nodeA"));
fieldValue& fieldValue63 =  fieldValue();
fieldValue63.setName(CString("position"));
fieldValue63.setValue(CString("0 1.388333 0"));
ProtoInstance62.addChild(&fieldValue63);

Transform60.addChild(&ProtoInstance62);

ProtoInstance& ProtoInstance64 =  ProtoInstance();
ProtoInstance64.setName(CString("node"));
ProtoInstance64.setDEF(CString("nodeB"));
fieldValue& fieldValue65 =  fieldValue();
fieldValue65.setName(CString("position"));
fieldValue65.setValue(CString("0 1.388333 0"));
ProtoInstance64.addChild(&fieldValue65);

Transform60.addChild(&ProtoInstance64);

ProtoInstance& ProtoInstance66 =  ProtoInstance();
ProtoInstance66.setName(CString("node"));
ProtoInstance66.setDEF(CString("nodeC"));
fieldValue& fieldValue67 =  fieldValue();
fieldValue67.setName(CString("position"));
fieldValue67.setValue(CString("0 1.388333 0"));
ProtoInstance66.addChild(&fieldValue67);

Transform60.addChild(&ProtoInstance66);

ProtoInstance& ProtoInstance68 =  ProtoInstance();
ProtoInstance68.setName(CString("node"));
ProtoInstance68.setDEF(CString("nodeD"));
fieldValue& fieldValue69 =  fieldValue();
fieldValue69.setName(CString("position"));
fieldValue69.setValue(CString("0 1.388333 0"));
ProtoInstance68.addChild(&fieldValue69);

Transform60.addChild(&ProtoInstance68);

ProtoInstance& ProtoInstance70 =  ProtoInstance();
ProtoInstance70.setName(CString("cyl"));
ProtoInstance70.setDEF(CString("linkA"));
Transform60.addChild(&ProtoInstance70);

ProtoInstance& ProtoInstance71 =  ProtoInstance();
ProtoInstance71.setName(CString("cyl"));
ProtoInstance71.setDEF(CString("linkB"));
Transform60.addChild(&ProtoInstance71);

ProtoInstance& ProtoInstance72 =  ProtoInstance();
ProtoInstance72.setName(CString("cyl"));
ProtoInstance72.setDEF(CString("linkC"));
Transform60.addChild(&ProtoInstance72);

Scene12.addChild(&Transform60);

Script& Script73 =  Script();
Script73.setDEF(CString("clickHandler"));
field& field74 =  field();
field74.setName(CString("counter"));
field74.setAccessType(CString("inputOutput"));
field74.setType(CString("SFInt32"));
Script73.addChild(&field74);

field& field75 =  field();
field75.setName(CString("node_changed"));
field75.setAccessType(CString("outputOnly"));
field75.setType(CString("SFNode"));
Script73.addChild(&field75);

field& field76 =  field();
field76.setName(CString("add_node"));
field76.setAccessType(CString("inputOnly"));
field76.setType(CString("SFBool"));
Script73.addChild(&field76);


//Script73.setSourceCode(CString("ecmascript:")+
//_T("	function add_node(value) {")+
//_T("                // Browser.print('hey ', counter);")+
//_T("                counter = counter++;")+
//_T("		Browser.appendTo(Browser.getDocument().querySelector(\"field [name=ModifiableNode]\"),")+
//_T("			{ \"ProtoInstance\":")+
//_T("				{ \"@name\":\"node\",")+
//_T("				  \"@DEF\":\"node'+counter+'\",")+
//_T("				  \"fieldValue\": [")+
//_T("					{")+
//_T("						 \"@name\":\"position\",")+
//_T("						 \"@value\":[0.0,0.0,0.0]")+
//_T("					}")+
//_T("				  ]")+
//_T("				}")+
//_T("			});")+
//_T("        }"));
Scene12.addChild(&Script73);

ROUTE& ROUTE77 =  ROUTE();
ROUTE77.setFromNode(CString("clickGenerator"));
ROUTE77.setFromField(CString("isActive"));
ROUTE77.setToNode(CString("clickHandler"));
ROUTE77.setToField(CString("add_node"));
Scene12.addChild(&ROUTE77);

ROUTE& ROUTE78 =  ROUTE();
ROUTE78.setFromNode(CString("nodeA"));
ROUTE78.setFromField(CString("position_changed"));
ROUTE78.setToNode(CString("linkA"));
ROUTE78.setToField(CString("set_positionA"));
Scene12.addChild(&ROUTE78);

ROUTE& ROUTE79 =  ROUTE();
ROUTE79.setFromNode(CString("nodeB"));
ROUTE79.setFromField(CString("position_changed"));
ROUTE79.setToNode(CString("linkA"));
ROUTE79.setToField(CString("set_positionB"));
Scene12.addChild(&ROUTE79);

ROUTE& ROUTE80 =  ROUTE();
ROUTE80.setFromNode(CString("nodeA"));
ROUTE80.setFromField(CString("position_changed"));
ROUTE80.setToNode(CString("linkB"));
ROUTE80.setToField(CString("set_positionA"));
Scene12.addChild(&ROUTE80);

ROUTE& ROUTE81 =  ROUTE();
ROUTE81.setFromNode(CString("nodeC"));
ROUTE81.setFromField(CString("position_changed"));
ROUTE81.setToNode(CString("linkB"));
ROUTE81.setToField(CString("set_positionB"));
Scene12.addChild(&ROUTE81);

ROUTE& ROUTE82 =  ROUTE();
ROUTE82.setFromNode(CString("nodeA"));
ROUTE82.setFromField(CString("position_changed"));
ROUTE82.setToNode(CString("linkC"));
ROUTE82.setToField(CString("set_positionA"));
Scene12.addChild(&ROUTE82);

ROUTE& ROUTE83 =  ROUTE();
ROUTE83.setFromNode(CString("nodeD"));
ROUTE83.setFromField(CString("position_changed"));
ROUTE83.setToNode(CString("linkC"));
ROUTE83.setToField(CString("set_positionB"));
Scene12.addChild(&ROUTE83);

X3D0.setScene(&Scene12);

//}
