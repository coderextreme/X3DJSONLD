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
meta3.setContent(CString("Thu, 23 Apr 2015 06:07:15 GMT"));
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
meta6.setContent(CString("Thu, 23 Apr 2015 06:07:15 GMT"));
head1.addMeta(&meta6);

X3D0.setHead(&head1);

Scene& Scene7 =  Scene();
ProtoDeclare& ProtoDeclare8 =  ProtoDeclare();
ProtoDeclare8.setName(CString("RandomSwitcher"));
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
field12.setName(CString("startTime"));
field12.setAccessType(CString("inputOutput"));
field12.setType(CString("SFTime"));
field12.setValue(CString("1"));
ProtoInterface9.addChild(&field12);

field& field13 =  field();
field13.setName(CString("whichChoice_changed"));
field13.setAccessType(CString("outputOnly"));
field13.setType(CString("SFInt32"));
ProtoInterface9.addChild(&field13);

ProtoDeclare8.addChild(&ProtoInterface9);

ProtoBody& ProtoBody14 =  ProtoBody();
ProtoDeclare& ProtoDeclare15 =  ProtoDeclare();
ProtoDeclare15.setName(CString("Data"));
ProtoInterface& ProtoInterface16 =  ProtoInterface();
field& field17 =  field();
field17.setName(CString("minValue"));
field17.setAccessType(CString("inputOutput"));
field17.setType(CString("SFInt32"));
ProtoInterface16.addChild(&field17);

field& field18 =  field();
field18.setName(CString("maxValue"));
field18.setAccessType(CString("inputOutput"));
field18.setType(CString("SFInt32"));
field18.setValue(CString("1"));
ProtoInterface16.addChild(&field18);

field& field19 =  field();
field19.setName(CString("startTime"));
field19.setAccessType(CString("inputOutput"));
field19.setType(CString("SFTime"));
field19.setValue(CString("1"));
ProtoInterface16.addChild(&field19);

ProtoDeclare15.addChild(&ProtoInterface16);

ProtoBody& ProtoBody20 =  ProtoBody();
Group& Group21 =  Group();
ProtoBody20.addChild(&Group21);

ProtoDeclare15.addChild(&ProtoBody20);

ProtoBody14.addChild(&ProtoDeclare15);

Group& Group22 =  Group();
Script& Script23 =  Script();
Script23.setDEF(CString("_switcher"));
Script23.setDirectOutput(true);
field& field24 =  field();
field24.setName(CString("set_startTime"));
field24.setAccessType(CString("inputOnly"));
field24.setType(CString("SFTime"));
Script23.addChild(&field24);

field& field25 =  field();
field25.setName(CString("whichChoice_changed"));
field25.setAccessType(CString("outputOnly"));
field25.setType(CString("SFInt32"));
Script23.addChild(&field25);

field& field26 =  field();
field26.setName(CString("data"));
field26.setAccessType(CString("initializeOnly"));
field26.setType(CString("SFNode"));
ProtoInstance& ProtoInstance27 =  ProtoInstance();
ProtoInstance27.setName(CString("Data"));
ProtoInstance27.setDEF(CString("Data"));
IS& IS28 =  IS();
Connect& connect29 =  Connect();
connect29.setNodeField(CString("minValue"));
connect29.setProtoField(CString("minValue"));
IS28.addChild(&connect29);

Connect& connect30 =  Connect();
connect30.setNodeField(CString("maxValue"));
connect30.setProtoField(CString("maxValue"));
IS28.addChild(&connect30);

Connect& connect31 =  Connect();
connect31.setNodeField(CString("startTime"));
connect31.setProtoField(CString("startTime"));
IS28.addChild(&connect31);

ProtoInstance27.addChild(&IS28);

field26.addChild(&ProtoInstance27);

Script23.addChild(&field26);

IS& IS32 =  IS();
Connect& connect33 =  Connect();
connect33.setNodeField(CString("whichChoice_changed"));
connect33.setProtoField(CString("whichChoice_changed"));
IS32.addChild(&connect33);

Script23.addChild(&IS32);


//Script23.setSourceCode(CString("vrmlscript:")+
//_T("	function  set_startTime(value, time)")+
//_T("	{")+
//_T("		whichChoice = Math.round(data.minValue + (Math.random() * (data.maxValue - data.minValue)));")+
//_T("		while (whichChoice_changed == whichChoice) {")+
//_T("			whichChoice = Math.round(data.minValue + (Math.random() * (data.maxValue - data.minValue)));")+
//_T("		}")+
//_T("		whichChoice_changed = whichChoice;")+
//_T("	}")+
//_T("	function  initialize()")+
//_T("	{")+
//_T("		if (data.startTime == 1) set_startTime(0, 0);")+
//_T("	}"));
Group22.addChild(&Script23);

ProtoBody14.addChild(&Group22);

ROUTE& ROUTE34 =  ROUTE();
ROUTE34.setFromNode(CString("Data"));
ROUTE34.setFromField(CString("startTime_changed"));
ROUTE34.setToNode(CString("_switcher"));
ROUTE34.setToField(CString("set_startTime"));
ProtoBody14.addChild(&ROUTE34);

ProtoDeclare8.addChild(&ProtoBody14);

Scene7.addChild(&ProtoDeclare8);

X3D0.setScene(&Scene7);

//}
