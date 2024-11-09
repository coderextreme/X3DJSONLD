#define False false
#define True true
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/pch.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/framework.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/glut.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/X3DLib.h"
int main(int argc, char ** argv) {
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
meta3.setContent(CString("Thu, 23 Apr 2015 06:07:14 GMT"));
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
meta6.setContent(CString("Thu, 23 Apr 2015 06:07:14 GMT"));
head1.addMeta(&meta6);

X3D0.setHead(&head1);

Scene& Scene7 =  Scene();
ProtoDeclare& ProtoDeclare8 =  ProtoDeclare();
ProtoDeclare8.setName(CString("Or"));
ProtoInterface& ProtoInterface9 =  ProtoInterface();
field& field10 =  field();
field10.setName(CString("value1"));
field10.setAccessType(CString("inputOutput"));
field10.setType(CString("SFBool"));
ProtoInterface9.addChild(&field10);

field& field11 =  field();
field11.setName(CString("value2"));
field11.setAccessType(CString("inputOutput"));
field11.setType(CString("SFBool"));
ProtoInterface9.addChild(&field11);

field& field12 =  field();
field12.setName(CString("value_changed"));
field12.setAccessType(CString("outputOnly"));
field12.setType(CString("SFBool"));
ProtoInterface9.addChild(&field12);

ProtoDeclare8.addChild(&ProtoInterface9);

ProtoBody& ProtoBody13 =  ProtoBody();
ProtoDeclare& ProtoDeclare14 =  ProtoDeclare();
ProtoDeclare14.setName(CString("Data"));
ProtoInterface& ProtoInterface15 =  ProtoInterface();
field& field16 =  field();
field16.setName(CString("value1"));
field16.setAccessType(CString("inputOutput"));
field16.setType(CString("SFBool"));
ProtoInterface15.addChild(&field16);

field& field17 =  field();
field17.setName(CString("value2"));
field17.setAccessType(CString("inputOutput"));
field17.setType(CString("SFBool"));
ProtoInterface15.addChild(&field17);

ProtoDeclare14.addChild(&ProtoInterface15);

ProtoBody& ProtoBody18 =  ProtoBody();
Group& Group19 =  Group();
ProtoBody18.addChild(&Group19);

ProtoDeclare14.addChild(&ProtoBody18);

ProtoBody13.addChild(&ProtoDeclare14);

Script& Script20 =  Script();
Script20.setDEF(CString("_boolean"));
Script20.setDirectOutput(True);
field& field21 =  field();
field21.setName(CString("set_value1"));
field21.setAccessType(CString("inputOnly"));
field21.setType(CString("SFBool"));
Script20.addChild(&field21);

field& field22 =  field();
field22.setName(CString("set_value2"));
field22.setAccessType(CString("inputOnly"));
field22.setType(CString("SFBool"));
Script20.addChild(&field22);

field& field23 =  field();
field23.setName(CString("value_changed"));
field23.setAccessType(CString("outputOnly"));
field23.setType(CString("SFBool"));
Script20.addChild(&field23);

field& field24 =  field();
field24.setName(CString("v"));
field24.setAccessType(CString("initializeOnly"));
field24.setType(CString("SFNode"));
ProtoInstance& ProtoInstance25 =  ProtoInstance();
ProtoInstance25.setName(CString("Data"));
ProtoInstance25.setDEF(CString("_1"));
IS& IS26 =  IS();
Connect& connect27 =  Connect();
connect27.setNodeField(CString("value1"));
connect27.setProtoField(CString("value1"));
IS26.addChild(&connect27);

Connect& connect28 =  Connect();
connect28.setNodeField(CString("value2"));
connect28.setProtoField(CString("value2"));
IS26.addChild(&connect28);

ProtoInstance25.addChild(&IS26);

field24.addChild(&ProtoInstance25);

Script20.addChild(&field24);

IS& IS29 =  IS();
Connect& connect30 =  Connect();
connect30.setNodeField(CString("value_changed"));
connect30.setProtoField(CString("value_changed"));
IS29.addChild(&connect30);

Script20.addChild(&IS29);


Script20.setSourceCode(CString("vrmlscript:")+
_T("function set_value1(value) {  }")+
_T("function set_value2(value) {  }")+
_T("function eventsProcessed () {")+
_T("	b = v.value1 || v.value2;")+
_T("	if (b != value_changed) value_changed = b;")+
_T("}"));
ProtoBody13.addChild(&Script20);

ROUTE& ROUTE31 =  ROUTE();
ROUTE31.setFromNode(CString("_1"));
ROUTE31.setFromField(CString("value1_changed"));
ROUTE31.setToNode(CString("_boolean"));
ROUTE31.setToField(CString("set_value1"));
ProtoBody13.addChild(&ROUTE31);

ROUTE& ROUTE32 =  ROUTE();
ROUTE32.setFromNode(CString("_1"));
ROUTE32.setFromField(CString("value2_changed"));
ROUTE32.setToNode(CString("_boolean"));
ROUTE32.setToField(CString("set_value2"));
ProtoBody13.addChild(&ROUTE32);

ProtoDeclare8.addChild(&ProtoBody13);

Scene7.addChild(&ProtoDeclare8);

X3D0.setScene(&Scene7);

}
