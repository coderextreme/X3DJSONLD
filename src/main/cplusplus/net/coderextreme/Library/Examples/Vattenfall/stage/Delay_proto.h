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
ProtoDeclare8.setName(CString("Delay"));
ProtoInterface& ProtoInterface9 =  ProtoInterface();
field& field10 =  field();
field10.setName(CString("cycleInterval"));
field10.setAccessType(CString("inputOutput"));
field10.setType(CString("SFTime"));
field10.setValue(CString("1"));
ProtoInterface9.addChild(&field10);

field& field11 =  field();
field11.setName(CString("enabled"));
field11.setAccessType(CString("inputOutput"));
field11.setType(CString("SFBool"));
field11.setValue(CString("true"));
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
field14.setName(CString("isActive"));
field14.setAccessType(CString("outputOnly"));
field14.setType(CString("SFBool"));
ProtoInterface9.addChild(&field14);

field& field15 =  field();
field15.setName(CString("exitTime"));
field15.setAccessType(CString("outputOnly"));
field15.setType(CString("SFTime"));
ProtoInterface9.addChild(&field15);

ProtoDeclare8.addChild(&ProtoInterface9);

ProtoBody& ProtoBody16 =  ProtoBody();
ProtoDeclare& ProtoDeclare17 =  ProtoDeclare();
ProtoDeclare17.setName(CString("Data"));
ProtoInterface& ProtoInterface18 =  ProtoInterface();
field& field19 =  field();
field19.setName(CString("cycleInterval"));
field19.setAccessType(CString("inputOutput"));
field19.setType(CString("SFTime"));
field19.setValue(CString("1"));
ProtoInterface18.addChild(&field19);

field& field20 =  field();
field20.setName(CString("startTime"));
field20.setAccessType(CString("inputOutput"));
field20.setType(CString("SFTime"));
ProtoInterface18.addChild(&field20);

field& field21 =  field();
field21.setName(CString("stopTime"));
field21.setAccessType(CString("inputOutput"));
field21.setType(CString("SFTime"));
ProtoInterface18.addChild(&field21);

ProtoDeclare17.addChild(&ProtoInterface18);

ProtoBody& ProtoBody22 =  ProtoBody();
Group& Group23 =  Group();
ProtoBody22.addChild(&Group23);

ProtoDeclare17.addChild(&ProtoBody22);

ProtoBody16.addChild(&ProtoDeclare17);

Script& Script24 =  Script();
Script24.setDEF(CString("_delay"));
Script24.setDirectOutput(true);
Script24.setMustEvaluate(true);
field& field25 =  field();
field25.setName(CString("isActive"));
field25.setAccessType(CString("outputOnly"));
field25.setType(CString("SFBool"));
Script24.addChild(&field25);

field& field26 =  field();
field26.setName(CString("exitTime"));
field26.setAccessType(CString("outputOnly"));
field26.setType(CString("SFTime"));
Script24.addChild(&field26);

field& field27 =  field();
field27.setName(CString("set_startTime"));
field27.setAccessType(CString("inputOnly"));
field27.setType(CString("SFTime"));
Script24.addChild(&field27);

field& field28 =  field();
field28.setName(CString("set_stopTime"));
field28.setAccessType(CString("inputOnly"));
field28.setType(CString("SFTime"));
Script24.addChild(&field28);

field& field29 =  field();
field29.setName(CString("set_isActive"));
field29.setAccessType(CString("inputOnly"));
field29.setType(CString("SFBool"));
Script24.addChild(&field29);

field& field30 =  field();
field30.setName(CString("timeSensor"));
field30.setAccessType(CString("initializeOnly"));
field30.setType(CString("SFNode"));
TimeSensor& TimeSensor31 =  TimeSensor();
TimeSensor31.setDEF(CString("TimeSensor"));
TimeSensor31.setLoop(true);
TimeSensor31.setStopTime(1);
IS& IS32 =  IS();
Connect& connect33 =  Connect();
connect33.setNodeField(CString("enabled"));
connect33.setProtoField(CString("enabled"));
IS32.addChild(&connect33);

TimeSensor31.addChild(&IS32);

field30.addChild(&TimeSensor31);

Script24.addChild(&field30);

field& field34 =  field();
field34.setName(CString("data"));
field34.setAccessType(CString("initializeOnly"));
field34.setType(CString("SFNode"));
ProtoInstance& ProtoInstance35 =  ProtoInstance();
ProtoInstance35.setName(CString("Data"));
ProtoInstance35.setDEF(CString("Data"));
IS& IS36 =  IS();
Connect& connect37 =  Connect();
connect37.setNodeField(CString("cycleInterval"));
connect37.setProtoField(CString("cycleInterval"));
IS36.addChild(&connect37);

Connect& connect38 =  Connect();
connect38.setNodeField(CString("startTime"));
connect38.setProtoField(CString("startTime"));
IS36.addChild(&connect38);

Connect& connect39 =  Connect();
connect39.setNodeField(CString("stopTime"));
connect39.setProtoField(CString("stopTime"));
IS36.addChild(&connect39);

ProtoInstance35.addChild(&IS36);

field34.addChild(&ProtoInstance35);

Script24.addChild(&field34);

IS& IS40 =  IS();
Connect& connect41 =  Connect();
connect41.setNodeField(CString("isActive"));
connect41.setProtoField(CString("isActive"));
IS40.addChild(&connect41);

Connect& connect42 =  Connect();
connect42.setNodeField(CString("exitTime"));
connect42.setProtoField(CString("exitTime"));
IS40.addChild(&connect42);

Script24.addChild(&IS40);


//Script24.setSourceCode(CString("vrmlscript:")+
//_T("function set_startTime(value, time) {")+
//_T("	if (!isActive) isActive = TRUE;")+
//_T("	timeSensor.startTime = time;")+
//_T("	timeSensor.stopTime = time + data.cycleInterval;")+
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
ProtoBody16.addChild(&Script24);

ROUTE& ROUTE43 =  ROUTE();
ROUTE43.setFromNode(CString("TimeSensor"));
ROUTE43.setFromField(CString("isActive"));
ROUTE43.setToNode(CString("_delay"));
ROUTE43.setToField(CString("set_isActive"));
ProtoBody16.addChild(&ROUTE43);

ROUTE& ROUTE44 =  ROUTE();
ROUTE44.setFromNode(CString("Data"));
ROUTE44.setFromField(CString("startTime_changed"));
ROUTE44.setToNode(CString("_delay"));
ROUTE44.setToField(CString("set_startTime"));
ProtoBody16.addChild(&ROUTE44);

ROUTE& ROUTE45 =  ROUTE();
ROUTE45.setFromNode(CString("Data"));
ROUTE45.setFromField(CString("stopTime_changed"));
ROUTE45.setToNode(CString("_delay"));
ROUTE45.setToField(CString("set_stopTime"));
ProtoBody16.addChild(&ROUTE45);

ProtoDeclare8.addChild(&ProtoBody16);

Scene7.addChild(&ProtoDeclare8);

X3D0.setScene(&Scene7);

//}
