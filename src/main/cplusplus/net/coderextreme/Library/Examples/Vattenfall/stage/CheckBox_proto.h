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
meta3.setContent(CString("Sat, 25 Apr 2015 12:38:20 GMT"));
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
meta6.setContent(CString("Sat, 25 Apr 2015 12:38:20 GMT"));
head1.addMeta(&meta6);

X3D0.setHead(&head1);

Scene& Scene7 =  Scene();
ProtoDeclare& ProtoDeclare8 =  ProtoDeclare();
ProtoDeclare8.setName(CString("CheckBox"));
ProtoInterface& ProtoInterface9 =  ProtoInterface();
field& field10 =  field();
field10.setName(CString("enabled"));
field10.setAccessType(CString("inputOutput"));
field10.setType(CString("SFBool"));
field10.setValue(CString("true"));
ProtoInterface9.addChild(&field10);

field& field11 =  field();
field11.setName(CString("on"));
field11.setAccessType(CString("inputOutput"));
field11.setType(CString("SFBool"));
ProtoInterface9.addChild(&field11);

field& field12 =  field();
field12.setName(CString("touchTime"));
field12.setAccessType(CString("inputOutput"));
field12.setType(CString("SFTime"));
ProtoInterface9.addChild(&field12);

field& field13 =  field();
field13.setName(CString("isActive"));
field13.setAccessType(CString("outputOnly"));
field13.setType(CString("SFBool"));
ProtoInterface9.addChild(&field13);

field& field14 =  field();
field14.setName(CString("whichChoice"));
field14.setAccessType(CString("inputOutput"));
field14.setType(CString("SFInt32"));
ProtoInterface9.addChild(&field14);

field& field15 =  field();
field15.setName(CString("choice"));
field15.setAccessType(CString("inputOutput"));
field15.setType(CString("MFNode"));
ProtoInterface9.addChild(&field15);

ProtoDeclare8.addChild(&ProtoInterface9);

ProtoBody& ProtoBody16 =  ProtoBody();
ProtoDeclare& ProtoDeclare17 =  ProtoDeclare();
ProtoDeclare17.setName(CString("Data"));
ProtoInterface& ProtoInterface18 =  ProtoInterface();
field& field19 =  field();
field19.setName(CString("enabled"));
field19.setAccessType(CString("inputOutput"));
field19.setType(CString("SFBool"));
field19.setValue(CString("true"));
ProtoInterface18.addChild(&field19);

field& field20 =  field();
field20.setName(CString("on"));
field20.setAccessType(CString("inputOutput"));
field20.setType(CString("SFBool"));
ProtoInterface18.addChild(&field20);

field& field21 =  field();
field21.setName(CString("touchTime"));
field21.setAccessType(CString("inputOutput"));
field21.setType(CString("SFTime"));
ProtoInterface18.addChild(&field21);

ProtoDeclare17.addChild(&ProtoInterface18);

ProtoBody& ProtoBody22 =  ProtoBody();
Group& Group23 =  Group();
ProtoBody22.addChild(&Group23);

ProtoDeclare17.addChild(&ProtoBody22);

ProtoBody16.addChild(&ProtoDeclare17);

Switch& Switch24 =  Switch();
Switch24.setDEF(CString("Switch"));
Switch24.setWhichChoice(-1);
IS& IS25 =  IS();
Connect& connect26 =  Connect();
connect26.setNodeField(CString("whichChoice"));
connect26.setProtoField(CString("whichChoice"));
IS25.addChild(&connect26);

Connect& connect27 =  Connect();
connect27.setNodeField(CString("children"));
connect27.setProtoField(CString("choice"));
IS25.addChild(&connect27);

Switch24.addChild(&IS25);

ProtoBody16.addChild(&Switch24);

Script& Script28 =  Script();
Script28.setDEF(CString("_checkBox"));
Script28.setDirectOutput(true);
field& field29 =  field();
field29.setName(CString("isActive"));
field29.setAccessType(CString("outputOnly"));
field29.setType(CString("SFBool"));
Script28.addChild(&field29);

field& field30 =  field();
field30.setName(CString("set_on"));
field30.setAccessType(CString("inputOnly"));
field30.setType(CString("SFBool"));
Script28.addChild(&field30);

field& field31 =  field();
field31.setName(CString("set_touchTime"));
field31.setAccessType(CString("inputOnly"));
field31.setType(CString("SFTime"));
Script28.addChild(&field31);

field& field32 =  field();
field32.setName(CString("set_whichChoice"));
field32.setAccessType(CString("inputOnly"));
field32.setType(CString("SFInt32"));
Script28.addChild(&field32);

field& field33 =  field();
field33.setName(CString("self"));
field33.setAccessType(CString("initializeOnly"));
field33.setType(CString("SFNode"));
Script& Script34 =  Script();
Script34.setUSE(CString("_checkBox"));
field33.addChild(&Script34);

Script28.addChild(&field33);

field& field35 =  field();
field35.setName(CString("button"));
field35.setAccessType(CString("initializeOnly"));
field35.setType(CString("SFNode"));
Switch& Switch36 =  Switch();
Switch36.setUSE(CString("Switch"));
field35.addChild(Switch36);

Script28.addChild(&field35);

field& field37 =  field();
field37.setName(CString("data"));
field37.setAccessType(CString("initializeOnly"));
field37.setType(CString("SFNode"));
ProtoInstance& ProtoInstance38 =  ProtoInstance();
ProtoInstance38.setName(CString("Data"));
ProtoInstance38.setDEF(CString("Data"));
IS& IS39 =  IS();
Connect& connect40 =  Connect();
connect40.setNodeField(CString("enabled"));
connect40.setProtoField(CString("enabled"));
IS39.addChild(&connect40);

Connect& connect41 =  Connect();
connect41.setNodeField(CString("on"));
connect41.setProtoField(CString("on"));
IS39.addChild(&connect41);

Connect& connect42 =  Connect();
connect42.setNodeField(CString("touchTime"));
connect42.setProtoField(CString("touchTime"));
IS39.addChild(&connect42);

ProtoInstance38.addChild(&IS39);

field37.addChild(&ProtoInstance38);

Script28.addChild(&field37);

IS& IS43 =  IS();
Connect& connect44 =  Connect();
connect44.setNodeField(CString("isActive"));
connect44.setProtoField(CString("isActive"));
IS43.addChild(&connect44);

Script28.addChild(&IS43);


//Script28.setSourceCode(CString("vrmlscript:")+
//_T("function set_touchTime (value, time) {")+
//_T("	if (data.enabled) button.whichChoice = !isActive;")+
//_T("}")+
//_T("function set_on (value, time) {")+
//_T("	if (data.enabled && value != button.whichChoice) button.whichChoice = value;")+
//_T("}")+
//_T("function set_whichChoice (value, time) {")+
//_T("	if (data.enabled) isActive = value;")+
//_T("}")+
//_T("function initialize() {	")+
//_T("	if (data.enabled) set_on(data.on, 0);")+
//_T("}"));
ProtoBody16.addChild(&Script28);

ROUTE& ROUTE45 =  ROUTE();
ROUTE45.setFromNode(CString("Switch"));
ROUTE45.setFromField(CString("whichChoice_changed"));
ROUTE45.setToNode(CString("_checkBox"));
ROUTE45.setToField(CString("set_whichChoice"));
ProtoBody16.addChild(&ROUTE45);

ROUTE& ROUTE46 =  ROUTE();
ROUTE46.setFromNode(CString("Data"));
ROUTE46.setFromField(CString("on_changed"));
ROUTE46.setToNode(CString("_checkBox"));
ROUTE46.setToField(CString("set_on"));
ProtoBody16.addChild(&ROUTE46);

ROUTE& ROUTE47 =  ROUTE();
ROUTE47.setFromNode(CString("Data"));
ROUTE47.setFromField(CString("touchTime_changed"));
ROUTE47.setToNode(CString("_checkBox"));
ROUTE47.setToField(CString("set_touchTime"));
ProtoBody16.addChild(&ROUTE47);

ProtoDeclare8.addChild(&ProtoBody16);

Scene7.addChild(&ProtoDeclare8);

X3D0.setScene(&Scene7);

//}
