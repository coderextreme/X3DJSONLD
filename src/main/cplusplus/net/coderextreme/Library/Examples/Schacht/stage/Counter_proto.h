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
ProtoDeclare8.setName(CString("Counter"));
ProtoInterface& ProtoInterface9 =  ProtoInterface();
field& field10 =  field();
field10.setName(CString("value"));
field10.setAccessType(CString("inputOutput"));
field10.setType(CString("SFInt32"));
ProtoInterface9.addChild(&field10);

field& field11 =  field();
field11.setName(CString("offset"));
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

field& field17 =  field();
field17.setName(CString("whichChoice_changed"));
field17.setAccessType(CString("outputOnly"));
field17.setType(CString("SFInt32"));
ProtoInterface9.addChild(&field17);

field& field18 =  field();
field18.setName(CString("fraction_changed"));
field18.setAccessType(CString("outputOnly"));
field18.setType(CString("SFFloat"));
ProtoInterface9.addChild(&field18);

ProtoDeclare8.addChild(&ProtoInterface9);

ProtoBody& ProtoBody19 =  ProtoBody();
ProtoDeclare& ProtoDeclare20 =  ProtoDeclare();
ProtoDeclare20.setName(CString("Data"));
ProtoInterface& ProtoInterface21 =  ProtoInterface();
field& field22 =  field();
field22.setName(CString("value"));
field22.setAccessType(CString("inputOutput"));
field22.setType(CString("SFInt32"));
ProtoInterface21.addChild(&field22);

field& field23 =  field();
field23.setName(CString("offset"));
field23.setAccessType(CString("inputOutput"));
field23.setType(CString("SFInt32"));
ProtoInterface21.addChild(&field23);

field& field24 =  field();
field24.setName(CString("startTime"));
field24.setAccessType(CString("inputOutput"));
field24.setType(CString("SFTime"));
ProtoInterface21.addChild(&field24);

field& field25 =  field();
field25.setName(CString("stopTime"));
field25.setAccessType(CString("inputOutput"));
field25.setType(CString("SFTime"));
ProtoInterface21.addChild(&field25);

ProtoDeclare20.addChild(&ProtoInterface21);

ProtoBody& ProtoBody26 =  ProtoBody();
Group& Group27 =  Group();
ProtoBody26.addChild(&Group27);

ProtoDeclare20.addChild(&ProtoBody26);

ProtoBody19.addChild(&ProtoDeclare20);

Script& Script28 =  Script();
Script28.setDEF(CString("_counter"));
Script28.setDirectOutput(true);
field& field29 =  field();
field29.setName(CString("isActive"));
field29.setAccessType(CString("outputOnly"));
field29.setType(CString("SFBool"));
Script28.addChild(&field29);

field& field30 =  field();
field30.setName(CString("enterTime"));
field30.setAccessType(CString("outputOnly"));
field30.setType(CString("SFTime"));
Script28.addChild(&field30);

field& field31 =  field();
field31.setName(CString("exitTime"));
field31.setAccessType(CString("outputOnly"));
field31.setType(CString("SFTime"));
Script28.addChild(&field31);

field& field32 =  field();
field32.setName(CString("whichChoice_changed"));
field32.setAccessType(CString("outputOnly"));
field32.setType(CString("SFInt32"));
Script28.addChild(&field32);

field& field33 =  field();
field33.setName(CString("fraction_changed"));
field33.setAccessType(CString("outputOnly"));
field33.setType(CString("SFFloat"));
Script28.addChild(&field33);

field& field34 =  field();
field34.setName(CString("set_offset"));
field34.setAccessType(CString("inputOnly"));
field34.setType(CString("SFInt32"));
Script28.addChild(&field34);

field& field35 =  field();
field35.setName(CString("set_startTime"));
field35.setAccessType(CString("inputOnly"));
field35.setType(CString("SFTime"));
Script28.addChild(&field35);

field& field36 =  field();
field36.setName(CString("set_stopTime"));
field36.setAccessType(CString("inputOnly"));
field36.setType(CString("SFTime"));
Script28.addChild(&field36);

field& field37 =  field();
field37.setName(CString("offset"));
field37.setAccessType(CString("initializeOnly"));
field37.setType(CString("SFInt32"));
Script28.addChild(&field37);

field& field38 =  field();
field38.setName(CString("data"));
field38.setAccessType(CString("initializeOnly"));
field38.setType(CString("SFNode"));
ProtoInstance& ProtoInstance39 =  ProtoInstance();
ProtoInstance39.setName(CString("Data"));
ProtoInstance39.setDEF(CString("Data"));
IS& IS40 =  IS();
Connect& connect41 =  Connect();
connect41.setNodeField(CString("value"));
connect41.setProtoField(CString("value"));
IS40.addChild(&connect41);

Connect& connect42 =  Connect();
connect42.setNodeField(CString("offset"));
connect42.setProtoField(CString("offset"));
IS40.addChild(&connect42);

Connect& connect43 =  Connect();
connect43.setNodeField(CString("startTime"));
connect43.setProtoField(CString("startTime"));
IS40.addChild(&connect43);

Connect& connect44 =  Connect();
connect44.setNodeField(CString("stopTime"));
connect44.setProtoField(CString("stopTime"));
IS40.addChild(&connect44);

ProtoInstance39.addChild(&IS40);

field38.addChild(&ProtoInstance39);

Script28.addChild(&field38);

IS& IS45 =  IS();
Connect& connect46 =  Connect();
connect46.setNodeField(CString("isActive"));
connect46.setProtoField(CString("isActive"));
IS45.addChild(&connect46);

Connect& connect47 =  Connect();
connect47.setNodeField(CString("enterTime"));
connect47.setProtoField(CString("enterTime"));
IS45.addChild(&connect47);

Connect& connect48 =  Connect();
connect48.setNodeField(CString("exitTime"));
connect48.setProtoField(CString("exitTime"));
IS45.addChild(&connect48);

Connect& connect49 =  Connect();
connect49.setNodeField(CString("whichChoice_changed"));
connect49.setProtoField(CString("whichChoice_changed"));
IS45.addChild(&connect49);

Connect& connect50 =  Connect();
connect50.setNodeField(CString("fraction_changed"));
connect50.setProtoField(CString("fraction_changed"));
IS45.addChild(&connect50);

Script28.addChild(&IS45);


//Script28.setSourceCode(CString("vrmlscript:")+
//_T("function set_offset(value, time)")+
//_T("{")+
//_T("	if (value < 0) {")+
//_T("		offset = 0;")+
//_T("	} else if (value > data.value) {")+
//_T("		offset = data.value;")+
//_T("	} else {")+
//_T("		offset = value;")+
//_T("	}")+
//_T("}")+
//_T("function set_startTime(value, time)")+
//_T("{")+
//_T("	if (!isActive) {")+
//_T("		isActive = TRUE;")+
//_T("		enterTime = time;")+
//_T("		offset = 0;")+
//_T("	} else {")+
//_T("		++offset;")+
//_T("		if (offset >= data.value) {")+
//_T("			isActive = FALSE;")+
//_T("			exitTime = time;")+
//_T("		}")+
//_T("	}")+
//_T("	whichChoice_changed = offset;")+
//_T("	fraction_changed = offset / data.value;")+
//_T("}")+
//_T("function set_stopTime(value, time) {")+
//_T("	if (isActive) {")+
//_T("		isActive = FALSE;")+
//_T("		exitTime = time;")+
//_T("	}")+
//_T("}")+
//_T("function initialize() { if (data.startTime) data.startTime = 1; }"));
ProtoBody19.addChild(&Script28);

ROUTE& ROUTE51 =  ROUTE();
ROUTE51.setFromNode(CString("Data"));
ROUTE51.setFromField(CString("offset_changed"));
ROUTE51.setToNode(CString("_counter"));
ROUTE51.setToField(CString("set_offset"));
ProtoBody19.addChild(&ROUTE51);

ROUTE& ROUTE52 =  ROUTE();
ROUTE52.setFromNode(CString("Data"));
ROUTE52.setFromField(CString("startTime_changed"));
ROUTE52.setToNode(CString("_counter"));
ROUTE52.setToField(CString("set_startTime"));
ProtoBody19.addChild(&ROUTE52);

ROUTE& ROUTE53 =  ROUTE();
ROUTE53.setFromNode(CString("Data"));
ROUTE53.setFromField(CString("stopTime_changed"));
ROUTE53.setToNode(CString("_counter"));
ROUTE53.setToField(CString("set_stopTime"));
ProtoBody19.addChild(&ROUTE53);

ProtoDeclare8.addChild(&ProtoBody19);

Scene7.addChild(&ProtoDeclare8);

X3D0.setScene(&Scene7);

//}
