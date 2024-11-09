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
meta3.setContent(CString("Thu, 23 Apr 2015 06:07:13 GMT"));
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
meta6.setContent(CString("Thu, 23 Apr 2015 06:07:13 GMT"));
head1.addMeta(&meta6);

X3D0.setHead(&head1);

Scene& Scene7 =  Scene();
ProtoDeclare& ProtoDeclare8 =  ProtoDeclare();
ProtoDeclare8.setName(CString("MultInt"));
ProtoInterface& ProtoInterface9 =  ProtoInterface();
field& field10 =  field();
field10.setName(CString("whichChoice"));
field10.setAccessType(CString("inputOutput"));
field10.setType(CString("SFInt32"));
ProtoInterface9.addChild(&field10);

field& field11 =  field();
field11.setName(CString("value_changed"));
field11.setAccessType(CString("outputOnly"));
field11.setType(CString("SFInt32"));
ProtoInterface9.addChild(&field11);

field& field12 =  field();
field12.setName(CString("offset"));
field12.setAccessType(CString("initializeOnly"));
field12.setType(CString("SFNode"));
Transform& Transform13 =  Transform();
Transform13.setDEF(CString("_1"));
field12.addChild(&Transform13);

ProtoInterface9.addChild(&field12);

ProtoDeclare8.addChild(&ProtoInterface9);

ProtoBody& ProtoBody14 =  ProtoBody();
ProtoDeclare& ProtoDeclare15 =  ProtoDeclare();
ProtoDeclare15.setName(CString("Data"));
ProtoInterface& ProtoInterface16 =  ProtoInterface();
field& field17 =  field();
field17.setName(CString("whichChoice"));
field17.setAccessType(CString("inputOutput"));
field17.setType(CString("SFInt32"));
ProtoInterface16.addChild(&field17);

ProtoDeclare15.addChild(&ProtoInterface16);

ProtoBody& ProtoBody18 =  ProtoBody();
Group& Group19 =  Group();
ProtoBody18.addChild(&Group19);

ProtoDeclare15.addChild(&ProtoBody18);

ProtoBody14.addChild(&ProtoDeclare15);

Script& Script20 =  Script();
Script20.setDEF(CString("_whichChoice"));
Script20.setDirectOutput(True);
field& field21 =  field();
field21.setName(CString("set_whichChoice"));
field21.setAccessType(CString("inputOnly"));
field21.setType(CString("SFInt32"));
Script20.addChild(&field21);

field& field22 =  field();
field22.setName(CString("value_changed"));
field22.setAccessType(CString("outputOnly"));
field22.setType(CString("SFInt32"));
Script20.addChild(&field22);

field& field23 =  field();
field23.setName(CString("offset"));
field23.setAccessType(CString("initializeOnly"));
field23.setType(CString("SFNode"));
Script20.addChild(&field23);

field& field24 =  field();
field24.setName(CString("data"));
field24.setAccessType(CString("initializeOnly"));
field24.setType(CString("SFNode"));
ProtoInstance& ProtoInstance25 =  ProtoInstance();
ProtoInstance25.setName(CString("Data"));
ProtoInstance25.setDEF(CString("_2"));
IS& IS26 =  IS();
Connect& connect27 =  Connect();
connect27.setNodeField(CString("whichChoice"));
connect27.setProtoField(CString("whichChoice"));
IS26.addChild(&connect27);

ProtoInstance25.addChild(&IS26);

field24.addChild(&ProtoInstance25);

Script20.addChild(&field24);

IS& IS28 =  IS();
Connect& connect29 =  Connect();
connect29.setNodeField(CString("value_changed"));
connect29.setProtoField(CString("value_changed"));
IS28.addChild(&connect29);

Connect& connect30 =  Connect();
connect30.setNodeField(CString("offset"));
connect30.setProtoField(CString("offset"));
IS28.addChild(&connect30);

Script20.addChild(&IS28);


Script20.setSourceCode(CString("vrmlscript:")+
_T("function set_whichChoice(value)")+
_T("{")+
_T("	value_changed = value * offset.whichChoice;")+
_T("}"));
ProtoBody14.addChild(&Script20);

ROUTE& ROUTE31 =  ROUTE();
ROUTE31.setFromNode(CString("_2"));
ROUTE31.setFromField(CString("whichChoice_changed"));
ROUTE31.setToNode(CString("_whichChoice"));
ROUTE31.setToField(CString("set_whichChoice"));
ProtoBody14.addChild(&ROUTE31);

ProtoDeclare8.addChild(&ProtoBody14);

Scene7.addChild(&ProtoDeclare8);

X3D0.setScene(&Scene7);

}
