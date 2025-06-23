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
meta4.setContent(CString("April 18 2017"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("title"));
meta5.setContent(CString("fors2.x3d"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("identifier"));
meta6.setContent(CString("https://coderextreme.net/X3DJSONLD/src/main/data/fors2.x3d"));
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
Transform& Transform14 =  Transform();
Transform14.setDEF(CString("transform"));
IS& IS15 =  IS();
Connect& connect16 =  Connect();
connect16.setNodeField(CString("translation"));
connect16.setProtoField(CString("position"));
IS15.addChild(&connect16);

Transform14.addChild(&IS15);

Shape& Shape17 =  Shape();
//comment before Sphere
//comment after Sphere
//comment after Appearance
Sphere& Sphere18 =  Sphere();
Shape17.setGeometry(&Sphere18);

Appearance& Appearance19 =  Appearance();
//comment before Material
//comment after Material
Material& Material20 =  Material();
Material20.setDiffuseColor(new float[]{1.0,0.0,0.0});
Appearance19.addChild(&Material20);

Shape17.addChild(&Appearance19);

Transform14.addChild(&Shape17);

ProtoBody13.addChild(&Transform14);

PositionInterpolator& PositionInterpolator21 =  PositionInterpolator();
PositionInterpolator21.setDEF(CString("NodePosition"));
PositionInterpolator21.setKey(new float[]{0.0,1.0}, 2);
PositionInterpolator21.setKeyValue(new float[]{0.0,0.0,0.0,0.0,5.0,0.0}, 6);
ProtoBody13.addChild(&PositionInterpolator21);

Script& Script22 =  Script();
Script22.setDEF(CString("MoveBall"));
field& field23 =  field();
field23.setName(CString("translation"));
field23.setAccessType(CString("inputOutput"));
field23.setType(CString("SFVec3f"));
field23.setValue(CString("50 50 0"));
Script22.addChild(&field23);

field& field24 =  field();
field24.setName(CString("old"));
field24.setAccessType(CString("inputOutput"));
field24.setType(CString("SFVec3f"));
field24.setValue(CString("0 0 0"));
Script22.addChild(&field24);

field& field25 =  field();
field25.setName(CString("set_cycle"));
field25.setAccessType(CString("inputOnly"));
field25.setType(CString("SFTime"));
Script22.addChild(&field25);

field& field26 =  field();
field26.setName(CString("keyValue"));
field26.setAccessType(CString("outputOnly"));
field26.setType(CString("MFVec3f"));
Script22.addChild(&field26);


//Script22.setSourceCode(CString("ecmascript:")+
//_T("					function set_cycle(value) {")+
//_T("                                                old = translation;")+
//_T("						translation = new SFVec3f(Math.random()*100-50, Math.random()*100-50, Math.random()*100-50);")+
//_T("                                                keyValue = new MFVec3f([old, translation]);")+
//_T("						// Browser.println(translation);")+
//_T("					}"));
ProtoBody13.addChild(&Script22);

TimeSensor& TimeSensor27 =  TimeSensor();
TimeSensor27.setDEF(CString("nodeClock"));
TimeSensor27.setCycleInterval(3);
TimeSensor27.setLoop(true);
ProtoBody13.addChild(&TimeSensor27);

ROUTE& ROUTE28 =  ROUTE();
ROUTE28.setFromNode(CString("nodeClock"));
ROUTE28.setFromField(CString("cycleTime"));
ROUTE28.setToNode(CString("MoveBall"));
ROUTE28.setToField(CString("set_cycle"));
ProtoBody13.addChild(&ROUTE28);

ROUTE& ROUTE29 =  ROUTE();
ROUTE29.setFromNode(CString("nodeClock"));
ROUTE29.setFromField(CString("fraction_changed"));
ROUTE29.setToNode(CString("NodePosition"));
ROUTE29.setToField(CString("set_fraction"));
ProtoBody13.addChild(&ROUTE29);

ROUTE& ROUTE30 =  ROUTE();
ROUTE30.setFromNode(CString("MoveBall"));
ROUTE30.setFromField(CString("keyValue"));
ROUTE30.setToNode(CString("NodePosition"));
ROUTE30.setToField(CString("keyValue"));
ProtoBody13.addChild(&ROUTE30);

ROUTE& ROUTE31 =  ROUTE();
ROUTE31.setFromNode(CString("NodePosition"));
ROUTE31.setFromField(CString("value_changed"));
ROUTE31.setToNode(CString("transform"));
ROUTE31.setToField(CString("set_translation"));
ProtoBody13.addChild(&ROUTE31);

ProtoDeclare10.addChild(&ProtoBody13);

Scene9.addChild(&ProtoDeclare10);

ProtoDeclare& ProtoDeclare32 =  ProtoDeclare();
ProtoDeclare32.setName(CString("cyl"));
ProtoInterface& ProtoInterface33 =  ProtoInterface();
field& field34 =  field();
field34.setName(CString("positionA"));
field34.setAccessType(CString("inputOnly"));
field34.setType(CString("SFVec3f"));
ProtoInterface33.addChild(&field34);

field& field35 =  field();
field35.setName(CString("positionB"));
field35.setAccessType(CString("inputOnly"));
field35.setType(CString("SFVec3f"));
ProtoInterface33.addChild(&field35);

ProtoDeclare32.addChild(&ProtoInterface33);

ProtoBody& ProtoBody36 =  ProtoBody();
Shape& Shape37 =  Shape();
Extrusion& Extrusion38 =  Extrusion();
Extrusion38.setDEF(CString("extrusion"));
Extrusion38.setCreaseAngle(0.785);
Extrusion38.setCrossSection(new float[]{1.0,0.0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0.0,-1.0,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1.0,0.0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0.0,1.0,0.38,0.92,0.71,0.71,0.92,0.38,1.0,0.0}, 34);
Extrusion38.setSpine(new float[]{0.0,-50.0,0.0,0.0,0.0,0.0,0.0,50.0,0.0}, 9);
Shape37.setGeometry(&Extrusion38);

Appearance& Appearance39 =  Appearance();
Material& Material40 =  Material();
Material40.setDiffuseColor(new float[]{0.0,1.0,0.0});
Appearance39.addChild(&Material40);

Shape37.addChild(&Appearance39);

ProtoBody36.addChild(&Shape37);

Script& Script41 =  Script();
Script41.setDEF(CString("MoveCylinder"));
field& field42 =  field();
field42.setName(CString("spine"));
field42.setAccessType(CString("inputOutput"));
field42.setType(CString("MFVec3f"));
field42.setValue(CString("0 -50 0 0 0 0 0 50 0"));
Script41.addChild(&field42);

field& field43 =  field();
field43.setName(CString("set_endA"));
field43.setAccessType(CString("inputOnly"));
field43.setType(CString("SFVec3f"));
Script41.addChild(&field43);

field& field44 =  field();
field44.setName(CString("set_endB"));
field44.setAccessType(CString("inputOnly"));
field44.setType(CString("SFVec3f"));
Script41.addChild(&field44);

IS& IS45 =  IS();
Connect& connect46 =  Connect();
connect46.setNodeField(CString("set_endA"));
connect46.setProtoField(CString("positionA"));
IS45.addChild(&connect46);

Connect& connect47 =  Connect();
connect47.setNodeField(CString("set_endB"));
connect47.setProtoField(CString("positionB"));
IS45.addChild(&connect47);

Script41.addChild(&IS45);


//Script41.setSourceCode(CString("ecmascript:")+
//_T("                function set_endA(value) {")+
//_T("		    if (typeof spine === \"undefined\") {")+
//_T("		        spine = new MFVec3f([value, value]);")+
//_T("		    } else {")+
//_T("		        spine = new MFVec3f([value, spine[1]]);")+
//_T("		    }")+
//_T("                }")+
//_T("                function set_endB(value) {")+
//_T("		    if (typeof spine === \"undefined\") {")+
//_T("		        spine = new MFVec3f([value, value]);")+
//_T("		    } else {")+
//_T("		        spine = new MFVec3f([spine[0], value]);")+
//_T("		    }")+
//_T("                }")+
//_T("                function set_spine(value) {")+
//_T("		    Browser.print('\\n'+'\"');")+
//_T("                    spine = value;")+
//_T("                }"));
ProtoBody36.addChild(&Script41);

ROUTE& ROUTE48 =  ROUTE();
ROUTE48.setFromNode(CString("MoveCylinder"));
ROUTE48.setFromField(CString("spine"));
ROUTE48.setToNode(CString("extrusion"));
ROUTE48.setToField(CString("set_spine"));
ProtoBody36.addChild(&ROUTE48);

ProtoDeclare32.addChild(&ProtoBody36);

Scene9.addChild(&ProtoDeclare32);

Transform& Transform49 =  Transform();
Transform49.setScale(new float[]{0.1,0.1,0.1});
ProtoInstance& ProtoInstance50 =  ProtoInstance();
ProtoInstance50.setName(CString("node"));
ProtoInstance50.setDEF(CString("nodeA"));
fieldValue& fieldValue51 =  fieldValue();
fieldValue51.setName(CString("position"));
fieldValue51.setValue(CString("-50 -50 -50"));
ProtoInstance50.addChild(&fieldValue51);

Transform49.addChild(&ProtoInstance50);

ProtoInstance& ProtoInstance52 =  ProtoInstance();
ProtoInstance52.setName(CString("node"));
ProtoInstance52.setDEF(CString("nodeB"));
fieldValue& fieldValue53 =  fieldValue();
fieldValue53.setName(CString("position"));
fieldValue53.setValue(CString("50 50 50"));
ProtoInstance52.addChild(&fieldValue53);

Transform49.addChild(&ProtoInstance52);

ProtoInstance& ProtoInstance54 =  ProtoInstance();
ProtoInstance54.setName(CString("cyl"));
ProtoInstance54.setDEF(CString("linkA"));
fieldValue& fieldValue55 =  fieldValue();
fieldValue55.setName(CString("positionA"));
fieldValue55.setValue(CString("0 0 0"));
ProtoInstance54.addChild(&fieldValue55);

fieldValue& fieldValue56 =  fieldValue();
fieldValue56.setName(CString("positionB"));
fieldValue56.setValue(CString("50 50 50"));
ProtoInstance54.addChild(&fieldValue56);

Transform49.addChild(&ProtoInstance54);

Scene9.addChild(&Transform49);

ROUTE& ROUTE57 =  ROUTE();
ROUTE57.setFromNode(CString("nodeA"));
ROUTE57.setFromField(CString("position"));
ROUTE57.setToNode(CString("linkA"));
ROUTE57.setToField(CString("positionA"));
Scene9.addChild(&ROUTE57);

ROUTE& ROUTE58 =  ROUTE();
ROUTE58.setFromNode(CString("nodeB"));
ROUTE58.setFromField(CString("position"));
ROUTE58.setToNode(CString("linkA"));
ROUTE58.setToField(CString("positionB"));
Scene9.addChild(&ROUTE58);

X3D0.setScene(&Scene9);

//}
