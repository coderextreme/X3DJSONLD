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
meta3.setContent(CString("Thu, 23 Apr 2015 06:07:00 GMT"));
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
meta6.setContent(CString("Thu, 23 Apr 2015 06:07:00 GMT"));
head1.addMeta(&meta6);

X3D0.setHead(&head1);

Scene& Scene7 =  Scene();
ProtoDeclare& ProtoDeclare8 =  ProtoDeclare();
ProtoDeclare8.setName(CString("Console"));
ProtoInterface& ProtoInterface9 =  ProtoInterface();
field& field10 =  field();
field10.setName(CString("string"));
field10.setAccessType(CString("inputOutput"));
field10.setType(CString("MFString"));
ProtoInterface9.addChild(&field10);

ProtoDeclare8.addChild(&ProtoInterface9);

ProtoBody& ProtoBody11 =  ProtoBody();
ProtoDeclare& ProtoDeclare12 =  ProtoDeclare();
ProtoDeclare12.setName(CString("Data"));
ProtoInterface& ProtoInterface13 =  ProtoInterface();
field& field14 =  field();
field14.setName(CString("string"));
field14.setAccessType(CString("inputOutput"));
field14.setType(CString("MFString"));
ProtoInterface13.addChild(&field14);

ProtoDeclare12.addChild(&ProtoInterface13);

ProtoBody& ProtoBody15 =  ProtoBody();
Group& Group16 =  Group();
ProtoBody15.addChild(&Group16);

ProtoDeclare12.addChild(&ProtoBody15);

ProtoBody11.addChild(&ProtoDeclare12);

Script& Script17 =  Script();
Script17.setDEF(CString("_1"));
Script17.setDirectOutput(True);
field& field18 =  field();
field18.setName(CString("set_string"));
field18.setAccessType(CString("inputOnly"));
field18.setType(CString("MFString"));
Script17.addChild(&field18);

field& field19 =  field();
field19.setName(CString("data"));
field19.setAccessType(CString("initializeOnly"));
field19.setType(CString("SFNode"));
ProtoInstance& ProtoInstance20 =  ProtoInstance();
ProtoInstance20.setName(CString("Data"));
ProtoInstance20.setDEF(CString("_2"));
IS& IS21 =  IS();
Connect& connect22 =  Connect();
connect22.setNodeField(CString("string"));
connect22.setProtoField(CString("string"));
IS21.addChild(&connect22);

ProtoInstance20.addChild(&IS21);

field19.addChild(&ProtoInstance20);

Script17.addChild(&field19);


Script17.setSourceCode(CString("javascript:")+
_T("function initialize()")+
_T("{")+
_T("	for (i = 0; i < data.string.length; i++) {")+
_T("		print(data.string[i]);")+
_T("	}")+
_T("}")+
_T("function set_string(value, time)")+
_T("{")+
_T("	for (i = 0; i < data.string.length; i++) {")+
_T("		print(data.string[i]);")+
_T("	}")+
_T("}"));
ProtoBody11.addChild(&Script17);

ROUTE& ROUTE23 =  ROUTE();
ROUTE23.setFromNode(CString("_2"));
ROUTE23.setFromField(CString("string_changed"));
ROUTE23.setToNode(CString("_1"));
ROUTE23.setToField(CString("set_string"));
ProtoBody11.addChild(&ROUTE23);

ProtoDeclare8.addChild(&ProtoBody11);

Scene7.addChild(&ProtoDeclare8);

X3D0.setScene(&Scene7);

}
