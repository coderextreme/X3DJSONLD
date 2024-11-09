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
ProtoDeclare8.setName(CString("Random"));
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
ProtoInterface9.addChild(&field11);

field& field12 =  field();
field12.setName(CString("numValues"));
field12.setAccessType(CString("inputOutput"));
field12.setType(CString("SFInt32"));
ProtoInterface9.addChild(&field12);

field& field13 =  field();
field13.setName(CString("startTime"));
field13.setAccessType(CString("inputOutput"));
field13.setType(CString("SFTime"));
ProtoInterface9.addChild(&field13);

field& field14 =  field();
field14.setName(CString("stopTime"));
field14.setAccessType(CString("inputOutput"));
field14.setType(CString("SFTime"));
ProtoInterface9.addChild(&field14);

field& field15 =  field();
field15.setName(CString("whichChoice_changed"));
field15.setAccessType(CString("outputOnly"));
field15.setType(CString("SFInt32"));
ProtoInterface9.addChild(&field15);

field& field16 =  field();
field16.setName(CString("fraction_changed"));
field16.setAccessType(CString("outputOnly"));
field16.setType(CString("SFFloat"));
ProtoInterface9.addChild(&field16);

ProtoDeclare8.addChild(&ProtoInterface9);

ProtoBody& ProtoBody17 =  ProtoBody();
ProtoDeclare& ProtoDeclare18 =  ProtoDeclare();
ProtoDeclare18.setName(CString("Data"));
ProtoInterface& ProtoInterface19 =  ProtoInterface();
field& field20 =  field();
field20.setName(CString("minValue"));
field20.setAccessType(CString("inputOutput"));
field20.setType(CString("SFInt32"));
ProtoInterface19.addChild(&field20);

field& field21 =  field();
field21.setName(CString("maxValue"));
field21.setAccessType(CString("inputOutput"));
field21.setType(CString("SFInt32"));
ProtoInterface19.addChild(&field21);

field& field22 =  field();
field22.setName(CString("numValues"));
field22.setAccessType(CString("inputOutput"));
field22.setType(CString("SFInt32"));
ProtoInterface19.addChild(&field22);

field& field23 =  field();
field23.setName(CString("startTime"));
field23.setAccessType(CString("inputOutput"));
field23.setType(CString("SFTime"));
ProtoInterface19.addChild(&field23);

field& field24 =  field();
field24.setName(CString("stopTime"));
field24.setAccessType(CString("inputOutput"));
field24.setType(CString("SFTime"));
ProtoInterface19.addChild(&field24);

ProtoDeclare18.addChild(&ProtoInterface19);

ProtoBody& ProtoBody25 =  ProtoBody();
Group& Group26 =  Group();
ProtoBody25.addChild(&Group26);

ProtoDeclare18.addChild(&ProtoBody25);

ProtoBody17.addChild(&ProtoDeclare18);

Script& Script27 =  Script();
Script27.setDEF(CString("_random"));
Script27.setDirectOutput(True);
field& field28 =  field();
field28.setName(CString("set_maxValue"));
field28.setAccessType(CString("inputOnly"));
field28.setType(CString("SFInt32"));
Script27.addChild(&field28);

field& field29 =  field();
field29.setName(CString("set_numValues"));
field29.setAccessType(CString("inputOnly"));
field29.setType(CString("SFInt32"));
Script27.addChild(&field29);

field& field30 =  field();
field30.setName(CString("set_startTime"));
field30.setAccessType(CString("inputOnly"));
field30.setType(CString("SFTime"));
Script27.addChild(&field30);

field& field31 =  field();
field31.setName(CString("set_stopTime"));
field31.setAccessType(CString("inputOnly"));
field31.setType(CString("SFTime"));
Script27.addChild(&field31);

field& field32 =  field();
field32.setName(CString("whichChoice_changed"));
field32.setAccessType(CString("outputOnly"));
field32.setType(CString("SFInt32"));
Script27.addChild(&field32);

field& field33 =  field();
field33.setName(CString("fraction_changed"));
field33.setAccessType(CString("outputOnly"));
field33.setType(CString("SFFloat"));
Script27.addChild(&field33);

field& field34 =  field();
field34.setName(CString("values"));
field34.setAccessType(CString("initializeOnly"));
field34.setType(CString("MFInt32"));
Script27.addChild(&field34);

field& field35 =  field();
field35.setName(CString("vi"));
field35.setAccessType(CString("initializeOnly"));
field35.setType(CString("SFInt32"));
Script27.addChild(&field35);

field& field36 =  field();
field36.setName(CString("data"));
field36.setAccessType(CString("initializeOnly"));
field36.setType(CString("SFNode"));
ProtoInstance& ProtoInstance37 =  ProtoInstance();
ProtoInstance37.setName(CString("Data"));
ProtoInstance37.setDEF(CString("Data"));
IS& IS38 =  IS();
Connect& connect39 =  Connect();
connect39.setNodeField(CString("minValue"));
connect39.setProtoField(CString("minValue"));
IS38.addChild(&connect39);

Connect& connect40 =  Connect();
connect40.setNodeField(CString("maxValue"));
connect40.setProtoField(CString("maxValue"));
IS38.addChild(&connect40);

Connect& connect41 =  Connect();
connect41.setNodeField(CString("numValues"));
connect41.setProtoField(CString("numValues"));
IS38.addChild(&connect41);

Connect& connect42 =  Connect();
connect42.setNodeField(CString("startTime"));
connect42.setProtoField(CString("startTime"));
IS38.addChild(&connect42);

Connect& connect43 =  Connect();
connect43.setNodeField(CString("stopTime"));
connect43.setProtoField(CString("stopTime"));
IS38.addChild(&connect43);

ProtoInstance37.addChild(&IS38);

field36.addChild(&ProtoInstance37);

Script27.addChild(&field36);

IS& IS44 =  IS();
Connect& connect45 =  Connect();
connect45.setNodeField(CString("whichChoice_changed"));
connect45.setProtoField(CString("whichChoice_changed"));
IS44.addChild(&connect45);

Connect& connect46 =  Connect();
connect46.setNodeField(CString("fraction_changed"));
connect46.setProtoField(CString("fraction_changed"));
IS44.addChild(&connect46);

Script27.addChild(&IS44);


Script27.setSourceCode(CString("vrmlscript:")+
_T("function rand(minValue, maxValue) { return minValue + Math.floor(Math.random() * (maxValue - minValue + 1)); }")+
_T("function isIn(value) {")+
_T("	for (i = 0; i < values.length; ++i) {")+
_T("		if (value == values[i]) return TRUE;")+
_T("	}")+
_T("	return FALSE;")+
_T("}")+
_T("function set_maxValue(value, time) {")+
_T("	if (value < 0) data.maxValue = 0;")+
_T("	else if (value < data.numValues) data.numValues = value;")+
_T("}")+
_T("function set_numValues(value, time) {")+
_T("	if (value < 0) data.numValues = 0;")+
_T("	else if (value > data.maxValue + 1) data.numValues = data.maxValue;")+
_T("}")+
_T("function set_stopTime(value, time) { values = new MFInt32(); vi = 0; }")+
_T("function set_startTime(value, time)")+
_T("{")+
_T("	whichChoice = rand(data.minValue, data.maxValue);")+
_T("	while (isIn(whichChoice)) {")+
_T("		whichChoice = rand(data.minValue, data.maxValue);")+
_T("	}")+
_T("	whichChoice_changed = whichChoice;")+
_T("	fraction_changed = whichChoice / data.maxValue;")+
_T("	if (values.length < data.numValues) ++values.length;")+
_T("	values[vi++] = whichChoice;")+
_T("	if (vi >= data.numValues) set_stopTime(0, 0);")+
_T("}")+
_T("function initialize() {")+
_T("	set_numValues(data.numValues, 0);")+
_T("	set_maxValue(data.numValues, 0);")+
_T("	if (data.startTime) set_startTime(1, 0);")+
_T("}"));
ProtoBody17.addChild(&Script27);

ROUTE& ROUTE47 =  ROUTE();
ROUTE47.setFromNode(CString("Data"));
ROUTE47.setFromField(CString("maxValue_changed"));
ROUTE47.setToNode(CString("_random"));
ROUTE47.setToField(CString("set_maxValue"));
ProtoBody17.addChild(&ROUTE47);

ROUTE& ROUTE48 =  ROUTE();
ROUTE48.setFromNode(CString("Data"));
ROUTE48.setFromField(CString("numValues_changed"));
ROUTE48.setToNode(CString("_random"));
ROUTE48.setToField(CString("set_numValues"));
ProtoBody17.addChild(&ROUTE48);

ROUTE& ROUTE49 =  ROUTE();
ROUTE49.setFromNode(CString("Data"));
ROUTE49.setFromField(CString("startTime_changed"));
ROUTE49.setToNode(CString("_random"));
ROUTE49.setToField(CString("set_startTime"));
ProtoBody17.addChild(&ROUTE49);

ROUTE& ROUTE50 =  ROUTE();
ROUTE50.setFromNode(CString("Data"));
ROUTE50.setFromField(CString("stopTime_changed"));
ROUTE50.setToNode(CString("_random"));
ROUTE50.setToField(CString("set_stopTime"));
ProtoBody17.addChild(&ROUTE50);

ProtoDeclare8.addChild(&ProtoBody17);

Scene7.addChild(&ProtoDeclare8);

X3D0.setScene(&Scene7);

}
