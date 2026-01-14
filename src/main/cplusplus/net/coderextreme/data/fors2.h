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
meta6.setContent(CString("fors2.x3d"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(CString("identifier"));
meta7.setContent(CString("https://coderextreme.net/X3DJSONLD/src/main/data/fors2.x3d"));
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
//comment before Sphere
//comment after Sphere
//comment after Appearance
Sphere& Sphere20 =  Sphere();
Shape19.setGeometry(&Sphere20);

Appearance& Appearance21 =  Appearance();
//comment before Material
//comment after Material
Material& Material22 =  Material();
Material22.setDiffuseColor(new float[]{1.0,0.0,0.0});
Appearance21.addChild(&Material22);

Shape19.addChild(&Appearance21);

Transform16.addChild(&Shape19);

Group15.addChild(&Transform16);

PositionInterpolator& PositionInterpolator23 =  PositionInterpolator();
PositionInterpolator23.setDEF(CString("NodePosition"));
PositionInterpolator23.setKey(new float[]{0.0,1.0}, 2);
PositionInterpolator23.setKeyValue(new float[]{0.0,0.0,0.0,0.0,5.0,0.0}, 6);
Group15.addChild(&PositionInterpolator23);

Script& Script24 =  Script();
Script24.setDEF(CString("MoveBall"));
field& field25 =  field();
field25.setName(CString("translation"));
field25.setAccessType(CString("inputOutput"));
field25.setType(CString("SFVec3f"));
field25.setValue(CString("50 50 0"));
Script24.addChild(&field25);

field& field26 =  field();
field26.setName(CString("old"));
field26.setAccessType(CString("inputOutput"));
field26.setType(CString("SFVec3f"));
field26.setValue(CString("0 0 0"));
Script24.addChild(&field26);

field& field27 =  field();
field27.setName(CString("set_cycle"));
field27.setAccessType(CString("inputOnly"));
field27.setType(CString("SFTime"));
Script24.addChild(&field27);

field& field28 =  field();
field28.setName(CString("keyValue"));
field28.setAccessType(CString("outputOnly"));
field28.setType(CString("MFVec3f"));
Script24.addChild(&field28);


//Script24.setSourceCode(CString("ecmascript:")+
//_T("			function set_cycle(value) {")+
//_T("				old = translation;")+
//_T("				translation = new SFVec3f(Math.random()*100-50, Math.random()*100-50, Math.random()*100-50);")+
//_T("				keyValue = new MFVec3f(old, translation);")+
//_T("			}"));
Group15.addChild(&Script24);

TimeSensor& TimeSensor29 =  TimeSensor();
TimeSensor29.setDEF(CString("nodeClock"));
TimeSensor29.setCycleInterval(3);
TimeSensor29.setLoop(true);
Group15.addChild(&TimeSensor29);

ROUTE& ROUTE30 =  ROUTE();
ROUTE30.setFromNode(CString("nodeClock"));
ROUTE30.setFromField(CString("cycleTime"));
ROUTE30.setToNode(CString("MoveBall"));
ROUTE30.setToField(CString("set_cycle"));
Group15.addChild(&ROUTE30);

ROUTE& ROUTE31 =  ROUTE();
ROUTE31.setFromNode(CString("nodeClock"));
ROUTE31.setFromField(CString("fraction_changed"));
ROUTE31.setToNode(CString("NodePosition"));
ROUTE31.setToField(CString("set_fraction"));
Group15.addChild(&ROUTE31);

ROUTE& ROUTE32 =  ROUTE();
ROUTE32.setFromNode(CString("MoveBall"));
ROUTE32.setFromField(CString("keyValue"));
ROUTE32.setToNode(CString("NodePosition"));
ROUTE32.setToField(CString("keyValue"));
Group15.addChild(&ROUTE32);

ROUTE& ROUTE33 =  ROUTE();
ROUTE33.setFromNode(CString("NodePosition"));
ROUTE33.setFromField(CString("value_changed"));
ROUTE33.setToNode(CString("transform"));
ROUTE33.setToField(CString("set_translation"));
Group15.addChild(&ROUTE33);

ProtoBody14.addChild(&Group15);

ProtoDeclare11.addChild(&ProtoBody14);

Scene10.addChild(&ProtoDeclare11);

ProtoDeclare& ProtoDeclare34 =  ProtoDeclare();
ProtoDeclare34.setName(CString("cyl"));
ProtoInterface& ProtoInterface35 =  ProtoInterface();
field& field36 =  field();
field36.setName(CString("positionA"));
field36.setAccessType(CString("inputOutput"));
field36.setType(CString("SFVec3f"));
ProtoInterface35.addChild(&field36);

field& field37 =  field();
field37.setName(CString("positionB"));
field37.setAccessType(CString("inputOutput"));
field37.setType(CString("SFVec3f"));
ProtoInterface35.addChild(&field37);

ProtoDeclare34.addChild(&ProtoInterface35);

ProtoBody& ProtoBody38 =  ProtoBody();
Group& Group39 =  Group();
Shape& Shape40 =  Shape();
Extrusion& Extrusion41 =  Extrusion();
Extrusion41.setDEF(CString("extrusion"));
Extrusion41.setCreaseAngle(0.785);
Extrusion41.setCrossSection(new float[]{1.0,0.0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0.0,-1.0,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1.0,0.0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0.0,1.0,0.38,0.92,0.71,0.71,0.92,0.38,1.0,0.0}, 34);
Extrusion41.setSpine(new float[]{0.0,-50.0,0.0,0.0,0.0,0.0,0.0,50.0,0.0}, 9);
Shape40.setGeometry(&Extrusion41);

Appearance& Appearance42 =  Appearance();
Material& Material43 =  Material();
Material43.setDiffuseColor(new float[]{0.0,1.0,0.0});
Appearance42.addChild(&Material43);

Shape40.addChild(&Appearance42);

Group39.addChild(&Shape40);

Script& Script44 =  Script();
Script44.setDEF(CString("MoveCylinder"));
field& field45 =  field();
field45.setName(CString("spine"));
field45.setAccessType(CString("inputOutput"));
field45.setType(CString("MFVec3f"));
field45.setValue(CString("0 -50 0 0 0 0 0 50 0"));
Script44.addChild(&field45);

field& field46 =  field();
field46.setName(CString("endA"));
field46.setAccessType(CString("inputOutput"));
field46.setType(CString("SFVec3f"));
field46.setValue(CString("0 0 0"));
Script44.addChild(&field46);

field& field47 =  field();
field47.setName(CString("endB"));
field47.setAccessType(CString("inputOutput"));
field47.setType(CString("SFVec3f"));
field47.setValue(CString("50 50 50"));
Script44.addChild(&field47);

IS& IS48 =  IS();
Connect& connect49 =  Connect();
connect49.setNodeField(CString("endA"));
connect49.setProtoField(CString("positionA"));
IS48.addChild(&connect49);

Connect& connect50 =  Connect();
connect50.setNodeField(CString("endB"));
connect50.setProtoField(CString("positionB"));
IS48.addChild(&connect50);

Script44.addChild(&IS48);


//Script44.setSourceCode(CString("ecmascript:")+
//_T("			function set_endA(value) {")+
//_T("				spine = new MFVec3f(value, spine[1]);")+
//_T("			}")+
//_T("			function set_endB(value) {")+
//_T("				spine = new MFVec3f(spine[0], value);")+
//_T("			}"));
Group39.addChild(&Script44);

ROUTE& ROUTE51 =  ROUTE();
ROUTE51.setFromNode(CString("MoveCylinder"));
ROUTE51.setFromField(CString("spine"));
ROUTE51.setToNode(CString("extrusion"));
ROUTE51.setToField(CString("set_spine"));
Group39.addChild(&ROUTE51);

ProtoBody38.addChild(&Group39);

ProtoDeclare34.addChild(&ProtoBody38);

Scene10.addChild(&ProtoDeclare34);

Transform& Transform52 =  Transform();
Transform52.setScale(new float[]{0.1,0.1,0.1});
ProtoInstance& ProtoInstance53 =  ProtoInstance();
ProtoInstance53.setName(CString("node"));
ProtoInstance53.setDEF(CString("nodeA"));
fieldValue& fieldValue54 =  fieldValue();
fieldValue54.setName(CString("position"));
fieldValue54.setValue(CString("-50 -50 -50"));
ProtoInstance53.addChild(&fieldValue54);

Transform52.addChild(&ProtoInstance53);

ProtoInstance& ProtoInstance55 =  ProtoInstance();
ProtoInstance55.setName(CString("node"));
ProtoInstance55.setDEF(CString("nodeB"));
fieldValue& fieldValue56 =  fieldValue();
fieldValue56.setName(CString("position"));
fieldValue56.setValue(CString("50 50 50"));
ProtoInstance55.addChild(&fieldValue56);

Transform52.addChild(&ProtoInstance55);

ProtoInstance& ProtoInstance57 =  ProtoInstance();
ProtoInstance57.setName(CString("cyl"));
ProtoInstance57.setDEF(CString("linkA"));
Transform52.addChild(&ProtoInstance57);

Scene10.addChild(&Transform52);

ROUTE& ROUTE58 =  ROUTE();
ROUTE58.setFromNode(CString("nodeA"));
ROUTE58.setFromField(CString("position"));
ROUTE58.setToNode(CString("linkA"));
ROUTE58.setToField(CString("positionA"));
Scene10.addChild(&ROUTE58);

ROUTE& ROUTE59 =  ROUTE();
ROUTE59.setFromNode(CString("nodeB"));
ROUTE59.setFromField(CString("position"));
ROUTE59.setToNode(CString("linkA"));
ROUTE59.setToField(CString("positionB"));
Scene10.addChild(&ROUTE59);

X3D0.setScene(&Scene10);

//}
