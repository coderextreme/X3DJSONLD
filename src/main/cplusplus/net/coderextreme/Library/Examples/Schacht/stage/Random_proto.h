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
meta3.setContent(CString("Fri, 28 Aug 2015 13:01:10 GMT"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("creator"));
meta4.setContent(CString("Holger Seelig"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("generator"));
meta5.setContent(CString("Titania V1.0.0, http://titania.create3000.de"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("modified"));
meta6.setContent(CString("Fri, 28 Aug 2015 13:01:10 GMT"));
head1.addMeta(&meta6);

X3D0.setHead(&head1);

Scene& Scene7 =  Scene();
ProtoDeclare& ProtoDeclare8 =  ProtoDeclare();
ProtoDeclare8.setName(CString("Random"));
ProtoInterface& ProtoInterface9 =  ProtoInterface();
field& field10 =  field();
field10.setName(CString("value"));
field10.setAccessType(CString("inputOutput"));
field10.setType(CString("SFInt32"));
ProtoInterface9.addChild(&field10);

field& field11 =  field();
field11.setName(CString("numValues"));
field11.setAccessType(CString("inputOutput"));
field11.setType(CString("SFInt32"));
ProtoInterface9.addChild(&field11);

field& field12 =  field();
field12.setName(CString("startTime"));
field12.setAccessType(CString("inputOutput"));
field12.setType(CString("SFTime"));
ProtoInterface9.addChild(&field12);

field& field13 =  field();
field13.setName(CString("stopTime"));
field13.setAccessType(CString("inputOutput"));
field13.setType(CString("SFTime"));
ProtoInterface9.addChild(&field13);

field& field14 =  field();
field14.setName(CString("whichChoice_changed"));
field14.setAccessType(CString("outputOnly"));
field14.setType(CString("SFInt32"));
ProtoInterface9.addChild(&field14);

field& field15 =  field();
field15.setName(CString("fraction_changed"));
field15.setAccessType(CString("outputOnly"));
field15.setType(CString("SFFloat"));
ProtoInterface9.addChild(&field15);

ProtoDeclare8.addChild(&ProtoInterface9);

ProtoBody& ProtoBody16 =  ProtoBody();
ProtoDeclare& ProtoDeclare17 =  ProtoDeclare();
ProtoDeclare17.setName(CString("Data"));
ProtoInterface& ProtoInterface18 =  ProtoInterface();
field& field19 =  field();
field19.setName(CString("value"));
field19.setAccessType(CString("inputOutput"));
field19.setType(CString("SFInt32"));
ProtoInterface18.addChild(&field19);

field& field20 =  field();
field20.setName(CString("numValues"));
field20.setAccessType(CString("inputOutput"));
field20.setType(CString("SFInt32"));
ProtoInterface18.addChild(&field20);

field& field21 =  field();
field21.setName(CString("startTime"));
field21.setAccessType(CString("inputOutput"));
field21.setType(CString("SFTime"));
ProtoInterface18.addChild(&field21);

field& field22 =  field();
field22.setName(CString("stopTime"));
field22.setAccessType(CString("inputOutput"));
field22.setType(CString("SFTime"));
ProtoInterface18.addChild(&field22);

ProtoDeclare17.addChild(&ProtoInterface18);

ProtoBody& ProtoBody23 =  ProtoBody();
Group& Group24 =  Group();
ProtoBody23.addChild(&Group24);

ProtoDeclare17.addChild(&ProtoBody23);

ProtoBody16.addChild(&ProtoDeclare17);

Script& Script25 =  Script();
Script25.setDEF(CString("_random"));
Script25.setDirectOutput(true);
field& field26 =  field();
field26.setName(CString("set_value"));
field26.setAccessType(CString("inputOnly"));
field26.setType(CString("SFInt32"));
Script25.addChild(&field26);

field& field27 =  field();
field27.setName(CString("set_numValues"));
field27.setAccessType(CString("inputOnly"));
field27.setType(CString("SFInt32"));
Script25.addChild(&field27);

field& field28 =  field();
field28.setName(CString("set_startTime"));
field28.setAccessType(CString("inputOnly"));
field28.setType(CString("SFTime"));
Script25.addChild(&field28);

field& field29 =  field();
field29.setName(CString("set_stopTime"));
field29.setAccessType(CString("inputOnly"));
field29.setType(CString("SFTime"));
Script25.addChild(&field29);

field& field30 =  field();
field30.setName(CString("whichChoice_changed"));
field30.setAccessType(CString("outputOnly"));
field30.setType(CString("SFInt32"));
Script25.addChild(&field30);

field& field31 =  field();
field31.setName(CString("fraction_changed"));
field31.setAccessType(CString("outputOnly"));
field31.setType(CString("SFFloat"));
Script25.addChild(&field31);

field& field32 =  field();
field32.setName(CString("values"));
field32.setAccessType(CString("initializeOnly"));
field32.setType(CString("MFInt32"));
Script25.addChild(&field32);

field& field33 =  field();
field33.setName(CString("vi"));
field33.setAccessType(CString("initializeOnly"));
field33.setType(CString("SFInt32"));
Script25.addChild(&field33);

field& field34 =  field();
field34.setName(CString("data"));
field34.setAccessType(CString("initializeOnly"));
field34.setType(CString("SFNode"));
ProtoInstance& ProtoInstance35 =  ProtoInstance();
ProtoInstance35.setName(CString("Data"));
ProtoInstance35.setDEF(CString("Data"));
IS& IS36 =  IS();
Connect& connect37 =  Connect();
connect37.setNodeField(CString("value"));
connect37.setProtoField(CString("value"));
IS36.addChild(&connect37);

Connect& connect38 =  Connect();
connect38.setNodeField(CString("numValues"));
connect38.setProtoField(CString("numValues"));
IS36.addChild(&connect38);

Connect& connect39 =  Connect();
connect39.setNodeField(CString("startTime"));
connect39.setProtoField(CString("startTime"));
IS36.addChild(&connect39);

Connect& connect40 =  Connect();
connect40.setNodeField(CString("stopTime"));
connect40.setProtoField(CString("stopTime"));
IS36.addChild(&connect40);

ProtoInstance35.addChild(&IS36);

field34.addChild(&ProtoInstance35);

Script25.addChild(&field34);

IS& IS41 =  IS();
Connect& connect42 =  Connect();
connect42.setNodeField(CString("whichChoice_changed"));
connect42.setProtoField(CString("whichChoice_changed"));
IS41.addChild(&connect42);

Connect& connect43 =  Connect();
connect43.setNodeField(CString("fraction_changed"));
connect43.setProtoField(CString("fraction_changed"));
IS41.addChild(&connect43);

Script25.addChild(&IS41);


//Script25.setSourceCode(CString("vrmlscript:")+
//_T("function rand(value) { return Math.round(Math.random() * value); }")+
//_T("function isIn(value) {")+
//_T("	for (i = 0; i < values.length; ++i) {")+
//_T("		if (value == values[i]) return TRUE;")+
//_T("	}")+
//_T("	return FALSE;")+
//_T("}")+
//_T("function set_value(value, time) {")+
//_T("	if (value < 0) data.value = 0;")+
//_T("	else if (value < data.numValues) data.numValues = value;")+
//_T("}")+
//_T("function set_numValues(value, time) {")+
//_T("	if (value < 0) data.numValues = 0;")+
//_T("	else if (value > data.value) data.numValues = data.value;")+
//_T("}")+
//_T("function set_startTime(value, time)")+
//_T("{")+
//_T("	whichChoice = rand(data.value);")+
//_T("	while (isIn(whichChoice)) {")+
//_T("		whichChoice = rand(data.value);")+
//_T("	}")+
//_T("	whichChoice_changed = whichChoice;")+
//_T("	fraction_changed = whichChoice / data.value;")+
//_T("	if (values.length < data.numValues) ++values.length;")+
//_T("	values[vi++] = whichChoice;")+
//_T("	if (vi >= data.numValues) vi = 0;")+
//_T("}")+
//_T("function set_stopTime(value, time) { values = new MFInt32(); vi = 0; }")+
//_T("function initialize() {")+
//_T("	set_numValues(data.numValues, 0);")+
//_T("	set_value(data.numValues, 0);")+
//_T("	if (data.startTime) set_startTime(1, 0);")+
//_T("}"));
ProtoBody16.addChild(&Script25);

ROUTE& ROUTE44 =  ROUTE();
ROUTE44.setFromNode(CString("Data"));
ROUTE44.setFromField(CString("value_changed"));
ROUTE44.setToNode(CString("_random"));
ROUTE44.setToField(CString("set_value"));
ProtoBody16.addChild(&ROUTE44);

ROUTE& ROUTE45 =  ROUTE();
ROUTE45.setFromNode(CString("Data"));
ROUTE45.setFromField(CString("numValues_changed"));
ROUTE45.setToNode(CString("_random"));
ROUTE45.setToField(CString("set_numValues"));
ProtoBody16.addChild(&ROUTE45);

ROUTE& ROUTE46 =  ROUTE();
ROUTE46.setFromNode(CString("Data"));
ROUTE46.setFromField(CString("startTime_changed"));
ROUTE46.setToNode(CString("_random"));
ROUTE46.setToField(CString("set_startTime"));
ProtoBody16.addChild(&ROUTE46);

ROUTE& ROUTE47 =  ROUTE();
ROUTE47.setFromNode(CString("Data"));
ROUTE47.setFromField(CString("stopTime_changed"));
ROUTE47.setToNode(CString("_random"));
ROUTE47.setToField(CString("set_stopTime"));
ProtoBody16.addChild(&ROUTE47);

ProtoDeclare8.addChild(&ProtoBody16);

Scene7.addChild(&ProtoDeclare8);

X3D0.setScene(&Scene7);

//}
