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
ProtoDeclare8.setName(CString("Scene"));
ProtoInterface& ProtoInterface9 =  ProtoInterface();
field& field10 =  field();
field10.setName(CString("enabled"));
field10.setAccessType(CString("inputOutput"));
field10.setType(CString("SFBool"));
field10.setValue(CString("true"));
ProtoInterface9.addChild(&field10);

field& field11 =  field();
field11.setName(CString("startTime"));
field11.setAccessType(CString("inputOutput"));
field11.setType(CString("SFTime"));
ProtoInterface9.addChild(&field11);

field& field12 =  field();
field12.setName(CString("stopTime"));
field12.setAccessType(CString("inputOutput"));
field12.setType(CString("SFTime"));
ProtoInterface9.addChild(&field12);

field& field13 =  field();
field13.setName(CString("isActive"));
field13.setAccessType(CString("outputOnly"));
field13.setType(CString("SFBool"));
ProtoInterface9.addChild(&field13);

field& field14 =  field();
field14.setName(CString("enterTime"));
field14.setAccessType(CString("outputOnly"));
field14.setType(CString("SFTime"));
ProtoInterface9.addChild(&field14);

field& field15 =  field();
field15.setName(CString("exitTime"));
field15.setAccessType(CString("outputOnly"));
field15.setType(CString("SFTime"));
ProtoInterface9.addChild(&field15);

field& field16 =  field();
field16.setName(CString("interface"));
field16.setAccessType(CString("inputOutput"));
field16.setType(CString("MFNode"));
ProtoInterface9.addChild(&field16);

ProtoDeclare8.addChild(&ProtoInterface9);

ProtoBody& ProtoBody17 =  ProtoBody();
ProtoDeclare& ProtoDeclare18 =  ProtoDeclare();
ProtoDeclare18.setName(CString("Data"));
ProtoInterface& ProtoInterface19 =  ProtoInterface();
field& field20 =  field();
field20.setName(CString("enabled"));
field20.setAccessType(CString("inputOutput"));
field20.setType(CString("SFBool"));
field20.setValue(CString("true"));
ProtoInterface19.addChild(&field20);

field& field21 =  field();
field21.setName(CString("startTime"));
field21.setAccessType(CString("inputOutput"));
field21.setType(CString("SFTime"));
ProtoInterface19.addChild(&field21);

field& field22 =  field();
field22.setName(CString("stopTime"));
field22.setAccessType(CString("inputOutput"));
field22.setType(CString("SFTime"));
ProtoInterface19.addChild(&field22);

field& field23 =  field();
field23.setName(CString("children"));
field23.setAccessType(CString("inputOutput"));
field23.setType(CString("MFNode"));
ProtoInterface19.addChild(&field23);

ProtoDeclare18.addChild(&ProtoInterface19);

ProtoBody& ProtoBody24 =  ProtoBody();
Switch& Switch25 =  Switch();
Switch25.setWhichChoice(-1);
IS& IS26 =  IS();
Connect& connect27 =  Connect();
connect27.setNodeField(CString("children"));
connect27.setProtoField(CString("children"));
IS26.addChild(&connect27);

Switch25.addChild(&IS26);

ProtoBody24.addChild(&Switch25);

ProtoDeclare18.addChild(&ProtoBody24);

ProtoBody17.addChild(&ProtoDeclare18);

ProtoInstance& ProtoInstance28 =  ProtoInstance();
ProtoInstance28.setName(CString("Data"));
ProtoInstance28.setDEF(CString("Data"));
IS& IS29 =  IS();
Connect& connect30 =  Connect();
connect30.setNodeField(CString("enabled"));
connect30.setProtoField(CString("enabled"));
IS29.addChild(&connect30);

Connect& connect31 =  Connect();
connect31.setNodeField(CString("startTime"));
connect31.setProtoField(CString("startTime"));
IS29.addChild(&connect31);

Connect& connect32 =  Connect();
connect32.setNodeField(CString("stopTime"));
connect32.setProtoField(CString("stopTime"));
IS29.addChild(&connect32);

Connect& connect33 =  Connect();
connect33.setNodeField(CString("children"));
connect33.setProtoField(CString("interface"));
IS29.addChild(&connect33);

ProtoInstance28.addChild(&IS29);

ProtoBody17.addChild(&ProtoInstance28);

Script& Script34 =  Script();
Script34.setDEF(CString("_scene"));
Script34.setDirectOutput(true);
field& field35 =  field();
field35.setName(CString("isActive"));
field35.setAccessType(CString("outputOnly"));
field35.setType(CString("SFBool"));
Script34.addChild(&field35);

field& field36 =  field();
field36.setName(CString("enterTime"));
field36.setAccessType(CString("outputOnly"));
field36.setType(CString("SFTime"));
Script34.addChild(&field36);

field& field37 =  field();
field37.setName(CString("exitTime"));
field37.setAccessType(CString("outputOnly"));
field37.setType(CString("SFTime"));
Script34.addChild(&field37);

field& field38 =  field();
field38.setName(CString("set_startTime"));
field38.setAccessType(CString("inputOnly"));
field38.setType(CString("SFTime"));
Script34.addChild(&field38);

field& field39 =  field();
field39.setName(CString("set_stopTime"));
field39.setAccessType(CString("inputOnly"));
field39.setType(CString("SFTime"));
Script34.addChild(&field39);

field& field40 =  field();
field40.setName(CString("data"));
field40.setAccessType(CString("initializeOnly"));
field40.setType(CString("SFNode"));
ProtoInstance& ProtoInstance41 =  ProtoInstance();
ProtoInstance41.setUSE(CString("Data"));
field40.addChild(&ProtoInstance41);

Script34.addChild(&field40);

field& field42 =  field();
field42.setName(CString("self"));
field42.setAccessType(CString("initializeOnly"));
field42.setType(CString("SFNode"));
Script& Script43 =  Script();
Script43.setUSE(CString("_scene"));
field42.addChild(&Script43);

Script34.addChild(&field42);

IS& IS44 =  IS();
Connect& connect45 =  Connect();
connect45.setNodeField(CString("isActive"));
connect45.setProtoField(CString("isActive"));
IS44.addChild(&connect45);

Connect& connect46 =  Connect();
connect46.setNodeField(CString("enterTime"));
connect46.setProtoField(CString("enterTime"));
IS44.addChild(&connect46);

Connect& connect47 =  Connect();
connect47.setNodeField(CString("exitTime"));
connect47.setProtoField(CString("exitTime"));
IS44.addChild(&connect47);

Script34.addChild(&IS44);


//Script34.setSourceCode(CString("vrmlscript:")+
//_T("function  set_startTime(value, time)")+
//_T("{")+
//_T("	if (!data.enabled) return;")+
//_T("	if (!isActive) {")+
//_T("		isActive = TRUE;")+
//_T("		enterTime = time;")+
//_T("	}")+
//_T("}")+
//_T("function  set_stopTime(value, time)")+
//_T("{")+
//_T("	if (!data.enabled) return;")+
//_T("	if (isActive) {")+
//_T("		exitTime = time;")+
//_T("		isActive = FALSE;")+
//_T("	}")+
//_T("}")+
//_T("function  initialize() { if (data.startTime) self.set_startTime = 1; }"));
ProtoBody17.addChild(&Script34);

ROUTE& ROUTE48 =  ROUTE();
ROUTE48.setFromNode(CString("Data"));
ROUTE48.setFromField(CString("startTime_changed"));
ROUTE48.setToNode(CString("_scene"));
ROUTE48.setToField(CString("set_startTime"));
ProtoBody17.addChild(&ROUTE48);

ROUTE& ROUTE49 =  ROUTE();
ROUTE49.setFromNode(CString("Data"));
ROUTE49.setFromField(CString("stopTime_changed"));
ROUTE49.setToNode(CString("_scene"));
ROUTE49.setToField(CString("set_stopTime"));
ProtoBody17.addChild(&ROUTE49);

ProtoDeclare8.addChild(&ProtoBody17);

Scene7.addChild(&ProtoDeclare8);

X3D0.setScene(&Scene7);

//}
