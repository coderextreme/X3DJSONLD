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
meta3.setContent(CString("Thu, 23 Apr 2015 06:07:12 GMT"));
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
meta6.setContent(CString("Thu, 23 Apr 2015 06:07:12 GMT"));
head1.addMeta(&meta6);

X3D0.setHead(&head1);

Scene& Scene7 =  Scene();
ProtoDeclare& ProtoDeclare8 =  ProtoDeclare();
ProtoDeclare8.setName(CString("MediaCtrl"));
ProtoInterface& ProtoInterface9 =  ProtoInterface();
field& field10 =  field();
field10.setName(CString("reset"));
field10.setAccessType(CString("inputOutput"));
field10.setType(CString("SFBool"));
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
field13.setName(CString("set_isActive"));
field13.setAccessType(CString("inputOnly"));
field13.setType(CString("SFBool"));
ProtoInterface9.addChild(&field13);

field& field14 =  field();
field14.setName(CString("source"));
field14.setAccessType(CString("initializeOnly"));
field14.setType(CString("SFNode"));
Transform& Transform15 =  Transform();
Transform15.setDEF(CString("_1"));
field14.addChild(&Transform15);

ProtoInterface9.addChild(&field14);

ProtoDeclare8.addChild(&ProtoInterface9);

ProtoBody& ProtoBody16 =  ProtoBody();
ProtoDeclare& ProtoDeclare17 =  ProtoDeclare();
ProtoDeclare17.setName(CString("Data"));
ProtoInterface& ProtoInterface18 =  ProtoInterface();
field& field19 =  field();
field19.setName(CString("reset"));
field19.setAccessType(CString("inputOutput"));
field19.setType(CString("SFBool"));
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
Script24.setDEF(CString("_mediaCtrl"));
Script24.setDirectOutput(True);
field& field25 =  field();
field25.setName(CString("set_startTime"));
field25.setAccessType(CString("inputOnly"));
field25.setType(CString("SFTime"));
Script24.addChild(&field25);

field& field26 =  field();
field26.setName(CString("set_stopTime"));
field26.setAccessType(CString("inputOnly"));
field26.setType(CString("SFTime"));
Script24.addChild(&field26);

field& field27 =  field();
field27.setName(CString("set_isActive"));
field27.setAccessType(CString("inputOnly"));
field27.setType(CString("SFBool"));
Script24.addChild(&field27);

field& field28 =  field();
field28.setName(CString("source"));
field28.setAccessType(CString("initializeOnly"));
field28.setType(CString("SFNode"));
Script24.addChild(&field28);

field& field29 =  field();
field29.setName(CString("isActive"));
field29.setAccessType(CString("initializeOnly"));
field29.setType(CString("SFBool"));
Script24.addChild(&field29);

field& field30 =  field();
field30.setName(CString("data"));
field30.setAccessType(CString("initializeOnly"));
field30.setType(CString("SFNode"));
ProtoInstance& ProtoInstance31 =  ProtoInstance();
ProtoInstance31.setName(CString("Data"));
ProtoInstance31.setDEF(CString("Data"));
IS& IS32 =  IS();
Connect& connect33 =  Connect();
connect33.setNodeField(CString("reset"));
connect33.setProtoField(CString("reset"));
IS32.addChild(&connect33);

Connect& connect34 =  Connect();
connect34.setNodeField(CString("startTime"));
connect34.setProtoField(CString("startTime"));
IS32.addChild(&connect34);

Connect& connect35 =  Connect();
connect35.setNodeField(CString("stopTime"));
connect35.setProtoField(CString("stopTime"));
IS32.addChild(&connect35);

ProtoInstance31.addChild(&IS32);

field30.addChild(&ProtoInstance31);

Script24.addChild(&field30);

IS& IS36 =  IS();
Connect& connect37 =  Connect();
connect37.setNodeField(CString("set_isActive"));
connect37.setProtoField(CString("set_isActive"));
IS36.addChild(&connect37);

Connect& connect38 =  Connect();
connect38.setNodeField(CString("source"));
connect38.setProtoField(CString("source"));
IS36.addChild(&connect38);

Script24.addChild(&IS36);


Script24.setSourceCode(CString("vrmlscript:")+
_T("function set_startTime(value, time)")+
_T("{")+
_T("	if (isActive) {")+
_T("		if (data.reset) {")+
_T("			source.stopTime = time;")+
_T("		}")+
_T("	} else {")+
_T("		source.startTime = time;")+
_T("	}")+
_T("}")+
_T("function set_stopTime(value, time)")+
_T("{")+
_T("	if (isActive) {")+
_T("		source.stopTime = time;")+
_T("	}")+
_T("}")+
_T("function set_isActive(value, time)")+
_T("{")+
_T("	isActive = value;")+
_T("	if (!isActive && data.reset) {")+
_T("		source.startTime = time;")+
_T("	}")+
_T("}"));
ProtoBody16.addChild(&Script24);

ROUTE& ROUTE39 =  ROUTE();
ROUTE39.setFromNode(CString("Data"));
ROUTE39.setFromField(CString("startTime_changed"));
ROUTE39.setToNode(CString("_mediaCtrl"));
ROUTE39.setToField(CString("set_startTime"));
ProtoBody16.addChild(&ROUTE39);

ROUTE& ROUTE40 =  ROUTE();
ROUTE40.setFromNode(CString("Data"));
ROUTE40.setFromField(CString("stopTime_changed"));
ROUTE40.setToNode(CString("_mediaCtrl"));
ROUTE40.setToField(CString("set_stopTime"));
ProtoBody16.addChild(&ROUTE40);

ProtoDeclare8.addChild(&ProtoBody16);

Scene7.addChild(&ProtoDeclare8);

X3D0.setScene(&Scene7);

}
