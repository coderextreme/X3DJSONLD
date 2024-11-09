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
meta3.setContent(CString("Thu, 23 Apr 2015 06:07:16 GMT"));
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
meta6.setContent(CString("Thu, 23 Apr 2015 06:07:16 GMT"));
head1.addMeta(&meta6);

X3D0.setHead(&head1);

Scene& Scene7 =  Scene();
ProtoDeclare& ProtoDeclare8 =  ProtoDeclare();
ProtoDeclare8.setName(CString("Switcher"));
ProtoInterface& ProtoInterface9 =  ProtoInterface();
field& field10 =  field();
field10.setName(CString("minValue"));
field10.setAccessType(CString("inputOutput"));
field10.setType(CString("SFInt32"));
ProtoInterface9.addChild(&field10);

field& field11 =  field();
field11.setName(CString("maxValue"));
field11.setAccessType(CString("inputOutput"));
field11.setType(CString("SFInt32"));
field11.setValue(CString("1"));
ProtoInterface9.addChild(&field11);

field& field12 =  field();
field12.setName(CString("prev"));
field12.setAccessType(CString("inputOutput"));
field12.setType(CString("SFTime"));
ProtoInterface9.addChild(&field12);

field& field13 =  field();
field13.setName(CString("next"));
field13.setAccessType(CString("inputOutput"));
field13.setType(CString("SFTime"));
ProtoInterface9.addChild(&field13);

field& field14 =  field();
field14.setName(CString("offset"));
field14.setAccessType(CString("inputOutput"));
field14.setType(CString("SFInt32"));
ProtoInterface9.addChild(&field14);

field& field15 =  field();
field15.setName(CString("whichChoice_changed"));
field15.setAccessType(CString("outputOnly"));
field15.setType(CString("SFInt32"));
ProtoInterface9.addChild(&field15);

ProtoDeclare8.addChild(&ProtoInterface9);

ProtoBody& ProtoBody16 =  ProtoBody();
ProtoDeclare& ProtoDeclare17 =  ProtoDeclare();
ProtoDeclare17.setName(CString("Data"));
ProtoInterface& ProtoInterface18 =  ProtoInterface();
field& field19 =  field();
field19.setName(CString("minValue"));
field19.setAccessType(CString("inputOutput"));
field19.setType(CString("SFInt32"));
ProtoInterface18.addChild(&field19);

field& field20 =  field();
field20.setName(CString("maxValue"));
field20.setAccessType(CString("inputOutput"));
field20.setType(CString("SFInt32"));
field20.setValue(CString("1"));
ProtoInterface18.addChild(&field20);

field& field21 =  field();
field21.setName(CString("prev"));
field21.setAccessType(CString("inputOutput"));
field21.setType(CString("SFTime"));
ProtoInterface18.addChild(&field21);

field& field22 =  field();
field22.setName(CString("next"));
field22.setAccessType(CString("inputOutput"));
field22.setType(CString("SFTime"));
ProtoInterface18.addChild(&field22);

field& field23 =  field();
field23.setName(CString("offset"));
field23.setAccessType(CString("inputOutput"));
field23.setType(CString("SFInt32"));
ProtoInterface18.addChild(&field23);

ProtoDeclare17.addChild(&ProtoInterface18);

ProtoBody& ProtoBody24 =  ProtoBody();
Group& Group25 =  Group();
ProtoBody24.addChild(&Group25);

ProtoDeclare17.addChild(&ProtoBody24);

ProtoBody16.addChild(&ProtoDeclare17);

Group& Group26 =  Group();
Script& Script27 =  Script();
Script27.setDEF(CString("_switcher"));
Script27.setDirectOutput(true);
field& field28 =  field();
field28.setName(CString("set_minValue"));
field28.setAccessType(CString("inputOnly"));
field28.setType(CString("SFInt32"));
Script27.addChild(&field28);

field& field29 =  field();
field29.setName(CString("set_maxValue"));
field29.setAccessType(CString("inputOnly"));
field29.setType(CString("SFInt32"));
Script27.addChild(&field29);

field& field30 =  field();
field30.setName(CString("set_prev"));
field30.setAccessType(CString("inputOnly"));
field30.setType(CString("SFTime"));
Script27.addChild(&field30);

field& field31 =  field();
field31.setName(CString("set_next"));
field31.setAccessType(CString("inputOnly"));
field31.setType(CString("SFTime"));
Script27.addChild(&field31);

field& field32 =  field();
field32.setName(CString("whichChoice_changed"));
field32.setAccessType(CString("outputOnly"));
field32.setType(CString("SFInt32"));
Script27.addChild(&field32);

field& field33 =  field();
field33.setName(CString("data"));
field33.setAccessType(CString("initializeOnly"));
field33.setType(CString("SFNode"));
ProtoInstance& ProtoInstance34 =  ProtoInstance();
ProtoInstance34.setName(CString("Data"));
ProtoInstance34.setDEF(CString("_1"));
IS& IS35 =  IS();
Connect& connect36 =  Connect();
connect36.setNodeField(CString("minValue"));
connect36.setProtoField(CString("minValue"));
IS35.addChild(&connect36);

Connect& connect37 =  Connect();
connect37.setNodeField(CString("maxValue"));
connect37.setProtoField(CString("maxValue"));
IS35.addChild(&connect37);

Connect& connect38 =  Connect();
connect38.setNodeField(CString("prev"));
connect38.setProtoField(CString("prev"));
IS35.addChild(&connect38);

Connect& connect39 =  Connect();
connect39.setNodeField(CString("next"));
connect39.setProtoField(CString("next"));
IS35.addChild(&connect39);

Connect& connect40 =  Connect();
connect40.setNodeField(CString("offset"));
connect40.setProtoField(CString("offset"));
IS35.addChild(&connect40);

ProtoInstance34.addChild(&IS35);

field33.addChild(&ProtoInstance34);

Script27.addChild(&field33);

IS& IS41 =  IS();
Connect& connect42 =  Connect();
connect42.setNodeField(CString("whichChoice_changed"));
connect42.setProtoField(CString("whichChoice_changed"));
IS41.addChild(&connect42);

Script27.addChild(&IS41);


//Script27.setSourceCode(CString("vrmlscript:")+
//_T("function  initialize()")+
//_T("{")+
//_T("	if (data.next == 1 || data.prev == 1) whichChoice_changed = data.offset;")+
//_T("}")+
//_T("function  set_prev(value, time)")+
//_T("{")+
//_T("	if (--data.offset < data.minValue) data.offset = data.maxValue;")+
//_T("	whichChoice_changed = data.offset;")+
//_T("}")+
//_T("function  set_next(value, time)")+
//_T("{")+
//_T("	if (++data.offset > data.maxValue) data.offset = data.minValue;")+
//_T("	whichChoice_changed = data.offset;")+
//_T("}")+
//_T("function set_minValue(value, time)")+
//_T("{")+
//_T("	if (data.offset < value) data.offset = value;")+
//_T("}")+
//_T("function set_maxValue(value, time)")+
//_T("{")+
//_T("	if (data.offset > value) data.offset = value;")+
//_T("}"));
Group26.addChild(&Script27);

ProtoBody16.addChild(&Group26);

ROUTE& ROUTE43 =  ROUTE();
ROUTE43.setFromNode(CString("_1"));
ROUTE43.setFromField(CString("prev_changed"));
ROUTE43.setToNode(CString("_switcher"));
ROUTE43.setToField(CString("set_prev"));
ProtoBody16.addChild(&ROUTE43);

ROUTE& ROUTE44 =  ROUTE();
ROUTE44.setFromNode(CString("_1"));
ROUTE44.setFromField(CString("next_changed"));
ROUTE44.setToNode(CString("_switcher"));
ROUTE44.setToField(CString("set_next"));
ProtoBody16.addChild(&ROUTE44);

ROUTE& ROUTE45 =  ROUTE();
ROUTE45.setFromNode(CString("_1"));
ROUTE45.setFromField(CString("minValue_changed"));
ROUTE45.setToNode(CString("_switcher"));
ROUTE45.setToField(CString("set_minValue"));
ProtoBody16.addChild(&ROUTE45);

ROUTE& ROUTE46 =  ROUTE();
ROUTE46.setFromNode(CString("_1"));
ROUTE46.setFromField(CString("maxValue_changed"));
ROUTE46.setToNode(CString("_switcher"));
ROUTE46.setToField(CString("set_maxValue"));
ProtoBody16.addChild(&ROUTE46);

ProtoDeclare8.addChild(&ProtoBody16);

Scene7.addChild(&ProtoDeclare8);

X3D0.setScene(&Scene7);

//}
