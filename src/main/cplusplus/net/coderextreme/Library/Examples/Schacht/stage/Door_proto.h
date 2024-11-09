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
ProtoDeclare8.setName(CString("Door"));
ProtoInterface& ProtoInterface9 =  ProtoInterface();
field& field10 =  field();
field10.setName(CString("offset"));
field10.setAccessType(CString("inputOutput"));
field10.setType(CString("SFBool"));
ProtoInterface9.addChild(&field10);

field& field11 =  field();
field11.setName(CString("enabled"));
field11.setAccessType(CString("inputOutput"));
field11.setType(CString("SFBool"));
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
field15.setName(CString("enterTime"));
field15.setAccessType(CString("outputOnly"));
field15.setType(CString("SFTime"));
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
field20.setName(CString("offset"));
field20.setAccessType(CString("inputOutput"));
field20.setType(CString("SFBool"));
ProtoInterface19.addChild(&field20);

field& field21 =  field();
field21.setName(CString("enabled"));
field21.setAccessType(CString("inputOutput"));
field21.setType(CString("SFBool"));
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

ProtoDeclare18.addChild(&ProtoInterface19);

ProtoBody& ProtoBody24 =  ProtoBody();
Group& Group25 =  Group();
ProtoBody24.addChild(&Group25);

ProtoDeclare18.addChild(&ProtoBody24);

ProtoBody17.addChild(&ProtoDeclare18);

Script& Script26 =  Script();
Script26.setDEF(CString("_door"));
Script26.setDirectOutput(true);
Script26.setMustEvaluate(true);
field& field27 =  field();
field27.setName(CString("isActive"));
field27.setAccessType(CString("outputOnly"));
field27.setType(CString("SFBool"));
Script26.addChild(&field27);

field& field28 =  field();
field28.setName(CString("enterTime"));
field28.setAccessType(CString("outputOnly"));
field28.setType(CString("SFTime"));
Script26.addChild(&field28);

field& field29 =  field();
field29.setName(CString("exitTime"));
field29.setAccessType(CString("outputOnly"));
field29.setType(CString("SFTime"));
Script26.addChild(&field29);

field& field30 =  field();
field30.setName(CString("set_offset"));
field30.setAccessType(CString("inputOnly"));
field30.setType(CString("SFBool"));
Script26.addChild(&field30);

field& field31 =  field();
field31.setName(CString("set_enabled"));
field31.setAccessType(CString("inputOnly"));
field31.setType(CString("SFBool"));
Script26.addChild(&field31);

field& field32 =  field();
field32.setName(CString("set_startTime"));
field32.setAccessType(CString("inputOnly"));
field32.setType(CString("SFTime"));
Script26.addChild(&field32);

field& field33 =  field();
field33.setName(CString("set_stopTime"));
field33.setAccessType(CString("inputOnly"));
field33.setType(CString("SFTime"));
Script26.addChild(&field33);

field& field34 =  field();
field34.setName(CString("offset"));
field34.setAccessType(CString("initializeOnly"));
field34.setType(CString("SFBool"));
Script26.addChild(&field34);

field& field35 =  field();
field35.setName(CString("next"));
field35.setAccessType(CString("initializeOnly"));
field35.setType(CString("SFBool"));
Script26.addChild(&field35);

field& field36 =  field();
field36.setName(CString("data"));
field36.setAccessType(CString("initializeOnly"));
field36.setType(CString("SFNode"));
ProtoInstance& ProtoInstance37 =  ProtoInstance();
ProtoInstance37.setName(CString("Data"));
ProtoInstance37.setDEF(CString("Data"));
IS& IS38 =  IS();
Connect& connect39 =  Connect();
connect39.setNodeField(CString("offset"));
connect39.setProtoField(CString("offset"));
IS38.addChild(&connect39);

Connect& connect40 =  Connect();
connect40.setNodeField(CString("enabled"));
connect40.setProtoField(CString("enabled"));
IS38.addChild(&connect40);

Connect& connect41 =  Connect();
connect41.setNodeField(CString("startTime"));
connect41.setProtoField(CString("startTime"));
IS38.addChild(&connect41);

Connect& connect42 =  Connect();
connect42.setNodeField(CString("stopTime"));
connect42.setProtoField(CString("stopTime"));
IS38.addChild(&connect42);

ProtoInstance37.addChild(&IS38);

field36.addChild(&ProtoInstance37);

Script26.addChild(&field36);

IS& IS43 =  IS();
Connect& connect44 =  Connect();
connect44.setNodeField(CString("isActive"));
connect44.setProtoField(CString("isActive"));
IS43.addChild(&connect44);

Connect& connect45 =  Connect();
connect45.setNodeField(CString("enterTime"));
connect45.setProtoField(CString("enterTime"));
IS43.addChild(&connect45);

Connect& connect46 =  Connect();
connect46.setNodeField(CString("exitTime"));
connect46.setProtoField(CString("exitTime"));
IS43.addChild(&connect46);

Script26.addChild(&IS43);


//Script26.setSourceCode(CString("vrmlscript:")+
//_T("function set_offset(value, time)")+
//_T("{")+
//_T("	if (offset == value) { return; }")+
//_T("	if (data.enabled) {")+
//_T("		next = TRUE;")+
//_T("	} else {")+
//_T("		next = FALSE;")+
//_T("		offset = value;")+
//_T("		if (value) {")+
//_T("			if (!isActive) isActive = value;")+
//_T("			enterTime = time;			")+
//_T("		} else {")+
//_T("			if (isActive) {")+
//_T("				exitTime = time;")+
//_T("			}")+
//_T("		}")+
//_T("	}")+
//_T("}")+
//_T("function set_enabled(value, time)")+
//_T("{")+
//_T("	if (!value && next) {")+
//_T("		if (offset != data.offset) data.offset = !offset;")+
//_T("	} else if (!value && !offset && !next) {")+
//_T("		isActive = FALSE;")+
//_T("	}")+
//_T("}")+
//_T("function set_startTime(value, time) { data.offset = TRUE; }")+
//_T("function set_stopTime(value, time) { data.offset = FALSE; }"));
ProtoBody17.addChild(&Script26);

ROUTE& ROUTE47 =  ROUTE();
ROUTE47.setFromNode(CString("Data"));
ROUTE47.setFromField(CString("offset_changed"));
ROUTE47.setToNode(CString("_door"));
ROUTE47.setToField(CString("set_offset"));
ProtoBody17.addChild(&ROUTE47);

ROUTE& ROUTE48 =  ROUTE();
ROUTE48.setFromNode(CString("Data"));
ROUTE48.setFromField(CString("enabled_changed"));
ROUTE48.setToNode(CString("_door"));
ROUTE48.setToField(CString("set_enabled"));
ProtoBody17.addChild(&ROUTE48);

ROUTE& ROUTE49 =  ROUTE();
ROUTE49.setFromNode(CString("Data"));
ROUTE49.setFromField(CString("startTime_changed"));
ROUTE49.setToNode(CString("_door"));
ROUTE49.setToField(CString("set_startTime"));
ProtoBody17.addChild(&ROUTE49);

ROUTE& ROUTE50 =  ROUTE();
ROUTE50.setFromNode(CString("Data"));
ROUTE50.setFromField(CString("stopTime_changed"));
ROUTE50.setToNode(CString("_door"));
ROUTE50.setToField(CString("set_stopTime"));
ProtoBody17.addChild(&ROUTE50);

ProtoDeclare8.addChild(&ProtoBody17);

Scene7.addChild(&ProtoDeclare8);

X3D0.setScene(&Scene7);

//}
