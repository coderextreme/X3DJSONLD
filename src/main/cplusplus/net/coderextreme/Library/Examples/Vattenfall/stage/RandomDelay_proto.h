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
ProtoDeclare8.setName(CString("RandomDelay"));
ProtoInterface& ProtoInterface9 =  ProtoInterface();
field& field10 =  field();
field10.setName(CString("minInterval"));
field10.setAccessType(CString("inputOutput"));
field10.setType(CString("SFTime"));
ProtoInterface9.addChild(&field10);

field& field11 =  field();
field11.setName(CString("maxInterval"));
field11.setAccessType(CString("inputOutput"));
field11.setType(CString("SFTime"));
field11.setValue(CString("1"));
ProtoInterface9.addChild(&field11);

field& field12 =  field();
field12.setName(CString("enabled"));
field12.setAccessType(CString("inputOutput"));
field12.setType(CString("SFBool"));
field12.setValue(CString("true"));
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
field15.setName(CString("isActive"));
field15.setAccessType(CString("outputOnly"));
field15.setType(CString("SFBool"));
ProtoInterface9.addChild(&field15);

field& field16 =  field();
field16.setName(CString("exitTime"));
field16.setAccessType(CString("outputOnly"));
field16.setType(CString("SFTime"));
ProtoInterface9.addChild(&field16);

ProtoDeclare8.addChild(&ProtoInterface9);

ProtoBody& ProtoBody17 =  ProtoBody();
ProtoDeclare& ProtoDeclare18 =  ProtoDeclare();
ProtoDeclare18.setName(CString("Data"));
ProtoInterface& ProtoInterface19 =  ProtoInterface();
field& field20 =  field();
field20.setName(CString("minInterval"));
field20.setAccessType(CString("inputOutput"));
field20.setType(CString("SFTime"));
ProtoInterface19.addChild(&field20);

field& field21 =  field();
field21.setName(CString("maxInterval"));
field21.setAccessType(CString("inputOutput"));
field21.setType(CString("SFTime"));
field21.setValue(CString("1"));
ProtoInterface19.addChild(&field21);

field& field22 =  field();
field22.setName(CString("startTime"));
field22.setAccessType(CString("inputOutput"));
field22.setType(CString("SFTime"));
ProtoInterface19.addChild(&field22);

field& field23 =  field();
field23.setName(CString("stopTime"));
field23.setAccessType(CString("inputOutput"));
field23.setType(CString("SFTime"));
ProtoInterface19.addChild(&field23);

field& field24 =  field();
field24.setName(CString("exitTime"));
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
Script27.setDEF(CString("_randomDelay"));
Script27.setDirectOutput(true);
Script27.setMustEvaluate(true);
field& field28 =  field();
field28.setName(CString("isActive"));
field28.setAccessType(CString("outputOnly"));
field28.setType(CString("SFBool"));
Script27.addChild(&field28);

field& field29 =  field();
field29.setName(CString("exitTime"));
field29.setAccessType(CString("outputOnly"));
field29.setType(CString("SFTime"));
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
field32.setName(CString("set_isActive"));
field32.setAccessType(CString("inputOnly"));
field32.setType(CString("SFBool"));
Script27.addChild(&field32);

field& field33 =  field();
field33.setName(CString("timeSensor"));
field33.setAccessType(CString("initializeOnly"));
field33.setType(CString("SFNode"));
TimeSensor& TimeSensor34 =  TimeSensor();
TimeSensor34.setDEF(CString("TimeSensor"));
TimeSensor34.setLoop(true);
TimeSensor34.setStopTime(1);
IS& IS35 =  IS();
Connect& connect36 =  Connect();
connect36.setNodeField(CString("enabled"));
connect36.setProtoField(CString("enabled"));
IS35.addChild(&connect36);

TimeSensor34.addChild(&IS35);

field33.addChild(&TimeSensor34);

Script27.addChild(&field33);

field& field37 =  field();
field37.setName(CString("data"));
field37.setAccessType(CString("initializeOnly"));
field37.setType(CString("SFNode"));
ProtoInstance& ProtoInstance38 =  ProtoInstance();
ProtoInstance38.setName(CString("Data"));
ProtoInstance38.setDEF(CString("Data"));
IS& IS39 =  IS();
Connect& connect40 =  Connect();
connect40.setNodeField(CString("minInterval"));
connect40.setProtoField(CString("minInterval"));
IS39.addChild(&connect40);

Connect& connect41 =  Connect();
connect41.setNodeField(CString("maxInterval"));
connect41.setProtoField(CString("maxInterval"));
IS39.addChild(&connect41);

Connect& connect42 =  Connect();
connect42.setNodeField(CString("startTime"));
connect42.setProtoField(CString("startTime"));
IS39.addChild(&connect42);

Connect& connect43 =  Connect();
connect43.setNodeField(CString("stopTime"));
connect43.setProtoField(CString("stopTime"));
IS39.addChild(&connect43);

ProtoInstance38.addChild(&IS39);

field37.addChild(&ProtoInstance38);

Script27.addChild(&field37);

IS& IS44 =  IS();
Connect& connect45 =  Connect();
connect45.setNodeField(CString("isActive"));
connect45.setProtoField(CString("isActive"));
IS44.addChild(&connect45);

Connect& connect46 =  Connect();
connect46.setNodeField(CString("exitTime"));
connect46.setProtoField(CString("exitTime"));
IS44.addChild(&connect46);

Script27.addChild(&IS44);


//Script27.setSourceCode(CString("vrmlscript:")+
//_T("function rand(minValue, maxValue) { return minValue + Math.floor(Math.random() * (maxValue - minValue + 1)); }")+
//_T("function set_startTime(value, time) {")+
//_T("	if (!isActive) isActive = TRUE;")+
//_T("	timeSensor.startTime = time;")+
//_T("	timeSensor.stopTime = time + rand(data.minInterval, data.maxInterval);")+
//_T("}")+
//_T("function set_stopTime(value, time) {")+
//_T("	if (isActive) isActive = FALSE;")+
//_T("	timeSensor.startTime = 0;")+
//_T("	timeSensor.stopTime  = time;")+
//_T("}")+
//_T("function set_isActive(value, time) {")+
//_T("	if (!value) {")+
//_T("		if (isActive) {")+
//_T("			isActive = FALSE;")+
//_T("			exitTime = time;")+
//_T("		}")+
//_T("	}")+
//_T("}")+
//_T("function initialize() {")+
//_T("	if (data.startTime) data.startTime = 1;")+
//_T("}"));
ProtoBody17.addChild(&Script27);

ROUTE& ROUTE47 =  ROUTE();
ROUTE47.setFromNode(CString("TimeSensor"));
ROUTE47.setFromField(CString("isActive"));
ROUTE47.setToNode(CString("_randomDelay"));
ROUTE47.setToField(CString("set_isActive"));
ProtoBody17.addChild(&ROUTE47);

ROUTE& ROUTE48 =  ROUTE();
ROUTE48.setFromNode(CString("Data"));
ROUTE48.setFromField(CString("startTime_changed"));
ROUTE48.setToNode(CString("_randomDelay"));
ROUTE48.setToField(CString("set_startTime"));
ProtoBody17.addChild(&ROUTE48);

ROUTE& ROUTE49 =  ROUTE();
ROUTE49.setFromNode(CString("Data"));
ROUTE49.setFromField(CString("stopTime_changed"));
ROUTE49.setToNode(CString("_randomDelay"));
ROUTE49.setToField(CString("set_stopTime"));
ProtoBody17.addChild(&ROUTE49);

ProtoDeclare8.addChild(&ProtoBody17);

Scene7.addChild(&ProtoDeclare8);

X3D0.setScene(&Scene7);

//}
