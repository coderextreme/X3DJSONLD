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
meta3.setContent(CString("Thu, 23 Apr 2015 06:07:09 GMT"));
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
meta6.setContent(CString("Thu, 23 Apr 2015 06:07:09 GMT"));
head1.addMeta(&meta6);

X3D0.setHead(&head1);

Scene& Scene7 =  Scene();
ProtoDeclare& ProtoDeclare8 =  ProtoDeclare();
ProtoDeclare8.setName(CString("IntCountDown"));
ProtoInterface& ProtoInterface9 =  ProtoInterface();
field& field10 =  field();
field10.setName(CString("startValue"));
field10.setAccessType(CString("inputOutput"));
field10.setType(CString("SFInt32"));
field10.setValue(CString("99"));
ProtoInterface9.addChild(&field10);

field& field11 =  field();
field11.setName(CString("stopValue"));
field11.setAccessType(CString("inputOutput"));
field11.setType(CString("SFInt32"));
ProtoInterface9.addChild(&field11);

field& field12 =  field();
field12.setName(CString("next"));
field12.setAccessType(CString("inputOutput"));
field12.setType(CString("SFTime"));
ProtoInterface9.addChild(&field12);

field& field13 =  field();
field13.setName(CString("offset"));
field13.setAccessType(CString("inputOutput"));
field13.setType(CString("SFInt32"));
ProtoInterface9.addChild(&field13);

field& field14 =  field();
field14.setName(CString("whichChoice_changed"));
field14.setAccessType(CString("outputOnly"));
field14.setType(CString("SFInt32"));
ProtoInterface9.addChild(&field14);

field& field15 =  field();
field15.setName(CString("stopTime"));
field15.setAccessType(CString("outputOnly"));
field15.setType(CString("SFTime"));
ProtoInterface9.addChild(&field15);

ProtoDeclare8.addChild(&ProtoInterface9);

ProtoBody& ProtoBody16 =  ProtoBody();
ProtoDeclare& ProtoDeclare17 =  ProtoDeclare();
ProtoDeclare17.setName(CString("Data"));
ProtoInterface& ProtoInterface18 =  ProtoInterface();
field& field19 =  field();
field19.setName(CString("startValue"));
field19.setAccessType(CString("inputOutput"));
field19.setType(CString("SFInt32"));
ProtoInterface18.addChild(&field19);

field& field20 =  field();
field20.setName(CString("stopValue"));
field20.setAccessType(CString("inputOutput"));
field20.setType(CString("SFInt32"));
field20.setValue(CString("1"));
ProtoInterface18.addChild(&field20);

field& field21 =  field();
field21.setName(CString("next"));
field21.setAccessType(CString("inputOutput"));
field21.setType(CString("SFTime"));
ProtoInterface18.addChild(&field21);

field& field22 =  field();
field22.setName(CString("offset"));
field22.setAccessType(CString("inputOutput"));
field22.setType(CString("SFInt32"));
ProtoInterface18.addChild(&field22);

ProtoDeclare17.addChild(&ProtoInterface18);

ProtoBody& ProtoBody23 =  ProtoBody();
Group& Group24 =  Group();
ProtoBody23.addChild(&Group24);

ProtoDeclare17.addChild(&ProtoBody23);

ProtoBody16.addChild(&ProtoDeclare17);

Group& Group25 =  Group();
Script& Script26 =  Script();
Script26.setDEF(CString("_switcher"));
Script26.setDirectOutput(true);
field& field27 =  field();
field27.setName(CString("whichChoice_changed"));
field27.setAccessType(CString("outputOnly"));
field27.setType(CString("SFInt32"));
Script26.addChild(&field27);

field& field28 =  field();
field28.setName(CString("stopTime"));
field28.setAccessType(CString("outputOnly"));
field28.setType(CString("SFTime"));
Script26.addChild(&field28);

field& field29 =  field();
field29.setName(CString("set_next"));
field29.setAccessType(CString("inputOnly"));
field29.setType(CString("SFTime"));
Script26.addChild(&field29);

field& field30 =  field();
field30.setName(CString("data"));
field30.setAccessType(CString("initializeOnly"));
field30.setType(CString("SFNode"));
ProtoInstance& ProtoInstance31 =  ProtoInstance();
ProtoInstance31.setName(CString("Data"));
ProtoInstance31.setDEF(CString("_1"));
IS& IS32 =  IS();
Connect& connect33 =  Connect();
connect33.setNodeField(CString("startValue"));
connect33.setProtoField(CString("startValue"));
IS32.addChild(&connect33);

Connect& connect34 =  Connect();
connect34.setNodeField(CString("stopValue"));
connect34.setProtoField(CString("stopValue"));
IS32.addChild(&connect34);

Connect& connect35 =  Connect();
connect35.setNodeField(CString("next"));
connect35.setProtoField(CString("next"));
IS32.addChild(&connect35);

Connect& connect36 =  Connect();
connect36.setNodeField(CString("offset"));
connect36.setProtoField(CString("offset"));
IS32.addChild(&connect36);

ProtoInstance31.addChild(&IS32);

field30.addChild(&ProtoInstance31);

Script26.addChild(&field30);

IS& IS37 =  IS();
Connect& connect38 =  Connect();
connect38.setNodeField(CString("whichChoice_changed"));
connect38.setProtoField(CString("whichChoice_changed"));
IS37.addChild(&connect38);

Connect& connect39 =  Connect();
connect39.setNodeField(CString("stopTime"));
connect39.setProtoField(CString("stopTime"));
IS37.addChild(&connect39);

Script26.addChild(&IS37);


//Script26.setSourceCode(CString("vrmlscript:")+
//_T("	function  initialize()")+
//_T("	{")+
//_T("		data.offset = data.startValue;")+
//_T("		whichChoice_changed = data.startValue;")+
//_T("	}")+
//_T("	function  set_next(value, time)")+
//_T("	{")+
//_T("		--data.offset;")+
//_T("		if (data.offset < data.stopValue) {")+
//_T("			initialize();")+
//_T("		} else {		")+
//_T("			whichChoice_changed = data.offset;")+
//_T("			if (data.offset == data.stopValue) stopTime = time;")+
//_T("		}")+
//_T("	}"));
Group25.addChild(&Script26);

ProtoBody16.addChild(&Group25);

ROUTE& ROUTE40 =  ROUTE();
ROUTE40.setFromNode(CString("_1"));
ROUTE40.setFromField(CString("next_changed"));
ROUTE40.setToNode(CString("_switcher"));
ROUTE40.setToField(CString("set_next"));
ProtoBody16.addChild(&ROUTE40);

ProtoDeclare8.addChild(&ProtoBody16);

Scene7.addChild(&ProtoDeclare8);

X3D0.setScene(&Scene7);

//}
