//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/pch.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/framework.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/glut.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/X3DLib.h"
//int main(int argc, char ** argv) 
//{
X3D& X3D0 =  X3D();
X3D0.setProfile(CString("Full"));
X3D0.setVersion(CString("3.3"));
head& head1 =  head();
meta& meta2 =  meta();
meta2.setName(CString("comment"));
meta2.setContent(CString("World of Titania"));
head1.addMeta(&meta2);

meta& meta3 =  meta();
meta3.setName(CString("created"));
meta3.setContent(CString("Sat, 25 Apr 2015 12:38:24 GMT"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("creator"));
meta4.setContent(CString("Holger Seelig"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("generator"));
meta5.setContent(CString("Titania V0.7.8, http://titania.create3000.de"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("modified"));
meta6.setContent(CString("Sat, 25 Apr 2015 12:38:24 GMT"));
head1.addMeta(&meta6);

X3D0.setHead(&head1);

Scene& Scene7 =  Scene();
ProtoDeclare& ProtoDeclare8 =  ProtoDeclare();
ProtoDeclare8.setName(CString("ReflectiveTextureTransform"));
ProtoInterface& ProtoInterface9 =  ProtoInterface();
field& field10 =  field();
field10.setName(CString("translation"));
field10.setAccessType(CString("inputOutput"));
field10.setType(CString("SFVec3f"));
ProtoInterface9.addChild(&field10);

field& field11 =  field();
field11.setName(CString("position"));
field11.setAccessType(CString("inputOutput"));
field11.setType(CString("SFVec3f"));
ProtoInterface9.addChild(&field11);

field& field12 =  field();
field12.setName(CString("distance"));
field12.setAccessType(CString("inputOutput"));
field12.setType(CString("SFFloat"));
field12.setValue(CString("10"));
ProtoInterface9.addChild(&field12);

field& field13 =  field();
field13.setName(CString("textureTransform"));
field13.setAccessType(CString("inputOutput"));
field13.setType(CString("SFNode"));
ProtoInterface9.addChild(&field13);

ProtoDeclare8.addChild(&ProtoInterface9);

ProtoBody& ProtoBody14 =  ProtoBody();
ProtoDeclare& ProtoDeclare15 =  ProtoDeclare();
ProtoDeclare15.setName(CString("Data"));
ProtoInterface& ProtoInterface16 =  ProtoInterface();
field& field17 =  field();
field17.setName(CString("translation"));
field17.setAccessType(CString("inputOutput"));
field17.setType(CString("SFVec3f"));
ProtoInterface16.addChild(&field17);

field& field18 =  field();
field18.setName(CString("position"));
field18.setAccessType(CString("inputOutput"));
field18.setType(CString("SFVec3f"));
ProtoInterface16.addChild(&field18);

field& field19 =  field();
field19.setName(CString("distance"));
field19.setAccessType(CString("inputOutput"));
field19.setType(CString("SFFloat"));
field19.setValue(CString("10"));
ProtoInterface16.addChild(&field19);

field& field20 =  field();
field20.setName(CString("textureTransform"));
field20.setAccessType(CString("inputOutput"));
field20.setType(CString("SFNode"));
ProtoInterface16.addChild(&field20);

ProtoDeclare15.addChild(&ProtoInterface16);

ProtoBody& ProtoBody21 =  ProtoBody();
Group& Group22 =  Group();
ProtoBody21.addChild(&Group22);

ProtoDeclare15.addChild(&ProtoBody21);

ProtoBody14.addChild(&ProtoDeclare15);

Script& Script23 =  Script();
Script23.setDEF(CString("_ReflectiveTextureTransform_1"));
Script23.setDirectOutput(true);
field& field24 =  field();
field24.setName(CString("set_translation"));
field24.setAccessType(CString("inputOnly"));
field24.setType(CString("SFVec3f"));
Script23.addChild(&field24);

field& field25 =  field();
field25.setName(CString("set_position"));
field25.setAccessType(CString("inputOnly"));
field25.setType(CString("SFVec3f"));
Script23.addChild(&field25);

field& field26 =  field();
field26.setName(CString("set_distance"));
field26.setAccessType(CString("inputOnly"));
field26.setType(CString("SFFloat"));
Script23.addChild(&field26);

field& field27 =  field();
field27.setName(CString("data"));
field27.setAccessType(CString("initializeOnly"));
field27.setType(CString("SFNode"));
ProtoInstance& ProtoInstance28 =  ProtoInstance();
ProtoInstance28.setName(CString("Data"));
ProtoInstance28.setDEF(CString("Data_1"));
IS& IS29 =  IS();
Connect& connect30 =  Connect();
connect30.setNodeField(CString("translation"));
connect30.setProtoField(CString("translation"));
IS29.addChild(&connect30);

Connect& connect31 =  Connect();
connect31.setNodeField(CString("position"));
connect31.setProtoField(CString("position"));
IS29.addChild(&connect31);

Connect& connect32 =  Connect();
connect32.setNodeField(CString("distance"));
connect32.setProtoField(CString("distance"));
IS29.addChild(&connect32);

Connect& connect33 =  Connect();
connect33.setNodeField(CString("textureTransform"));
connect33.setProtoField(CString("textureTransform"));
IS29.addChild(&connect33);

ProtoInstance28.addChild(&IS29);

field27.addChild(&ProtoInstance28);

Script23.addChild(&field27);


//Script23.setSourceCode(CString("vrmlscript:")+
//_T("function set_translation (value, time) {")+
//_T("}")+
//_T("function set_position (value, time) {")+
//_T("}")+
//_T("function set_distance (value, time) {")+
//_T("}")+
//_T("function initialize () {")+
//_T("}")+
//_T("function eventsProcessed () {")+
//_T("	distance = data.translation.subtract(data.position);")+
//_T("	v = data.distance / distance.length();")+
//_T("	")+
//_T("	s = data.distance / (distance.length()/2 + 1/2);")+
//_T("	tx = distance.x * s * s;")+
//_T("	ty = distance.y * s * s;")+
//_T("	data.textureTransform.scale = new SFVec2f(s, s);")+
//_T("	data.textureTransform.translation = new SFVec2f(tx, ty);")+
//_T("}"));
ProtoBody14.addChild(&Script23);

ROUTE& ROUTE34 =  ROUTE();
ROUTE34.setFromNode(CString("Data_1"));
ROUTE34.setFromField(CString("translation_changed"));
ROUTE34.setToNode(CString("_ReflectiveTextureTransform_1"));
ROUTE34.setToField(CString("set_translation"));
ProtoBody14.addChild(&ROUTE34);

ROUTE& ROUTE35 =  ROUTE();
ROUTE35.setFromNode(CString("Data_1"));
ROUTE35.setFromField(CString("position_changed"));
ROUTE35.setToNode(CString("_ReflectiveTextureTransform_1"));
ROUTE35.setToField(CString("set_position"));
ProtoBody14.addChild(&ROUTE35);

ROUTE& ROUTE36 =  ROUTE();
ROUTE36.setFromNode(CString("Data_1"));
ROUTE36.setFromField(CString("distance_changed"));
ROUTE36.setToNode(CString("_ReflectiveTextureTransform_1"));
ROUTE36.setToField(CString("set_distance"));
ProtoBody14.addChild(&ROUTE36);

ProtoDeclare8.addChild(&ProtoBody14);

Scene7.addChild(&ProtoDeclare8);

X3D0.setScene(&Scene7);

//}
