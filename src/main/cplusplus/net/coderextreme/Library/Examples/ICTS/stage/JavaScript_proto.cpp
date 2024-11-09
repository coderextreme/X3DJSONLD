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
meta3.setContent(CString("Thu, 23 Apr 2015 06:07:10 GMT"));
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
meta6.setContent(CString("Thu, 23 Apr 2015 06:07:10 GMT"));
head1.addMeta(&meta6);

X3D0.setHead(&head1);

Scene& Scene7 =  Scene();
ProtoDeclare& ProtoDeclare8 =  ProtoDeclare();
ProtoDeclare8.setName(CString("JavaScript"));
ProtoInterface& ProtoInterface9 =  ProtoInterface();
field& field10 =  field();
field10.setName(CString("startTime"));
field10.setAccessType(CString("inputOutput"));
field10.setType(CString("SFTime"));
ProtoInterface9.addChild(&field10);

field& field11 =  field();
field11.setName(CString("javascript"));
field11.setAccessType(CString("inputOutput"));
field11.setType(CString("MFString"));
field11.setValue(CString("\"focus();\""));
ProtoInterface9.addChild(&field11);

ProtoDeclare8.addChild(&ProtoInterface9);

ProtoBody& ProtoBody12 =  ProtoBody();
ProtoDeclare& ProtoDeclare13 =  ProtoDeclare();
ProtoDeclare13.setName(CString("Data"));
ProtoInterface& ProtoInterface14 =  ProtoInterface();
field& field15 =  field();
field15.setName(CString("startTime"));
field15.setAccessType(CString("inputOutput"));
field15.setType(CString("SFTime"));
ProtoInterface14.addChild(&field15);

field& field16 =  field();
field16.setName(CString("javascript"));
field16.setAccessType(CString("inputOutput"));
field16.setType(CString("MFString"));
field16.setValue(CString("\"\""));
ProtoInterface14.addChild(&field16);

ProtoDeclare13.addChild(&ProtoInterface14);

ProtoBody& ProtoBody17 =  ProtoBody();
Group& Group18 =  Group();
ProtoBody17.addChild(&Group18);

ProtoDeclare13.addChild(&ProtoBody17);

ProtoBody12.addChild(&ProtoDeclare13);

Script& Script19 =  Script();
Script19.setDEF(CString("_loadUrl_1"));
Script19.setDirectOutput(True);
Script19.setMustEvaluate(True);
field& field20 =  field();
field20.setName(CString("set_startTime"));
field20.setAccessType(CString("inputOnly"));
field20.setType(CString("SFTime"));
Script19.addChild(&field20);

field& field21 =  field();
field21.setName(CString("data"));
field21.setAccessType(CString("initializeOnly"));
field21.setType(CString("SFNode"));
ProtoInstance& ProtoInstance22 =  ProtoInstance();
ProtoInstance22.setName(CString("Data"));
ProtoInstance22.setDEF(CString("Data_1"));
IS& IS23 =  IS();
Connect& connect24 =  Connect();
connect24.setNodeField(CString("startTime"));
connect24.setProtoField(CString("startTime"));
IS23.addChild(&connect24);

Connect& connect25 =  Connect();
connect25.setNodeField(CString("javascript"));
connect25.setProtoField(CString("javascript"));
IS23.addChild(&connect25);

ProtoInstance22.addChild(&IS23);

field21.addChild(&ProtoInstance22);

Script19.addChild(&field21);

field& field26 =  field();
field26.setName(CString("Url"));
field26.setAccessType(CString("initializeOnly"));
field26.setType(CString("MFString"));
field26.setValue(CString("\"\""));
Script19.addChild(&field26);

field& field27 =  field();
field27.setName(CString("Parameter"));
field27.setAccessType(CString("initializeOnly"));
field27.setType(CString("MFString"));
field27.setValue(CString("\"\""));
Script19.addChild(&field27);


Script19.setSourceCode(CString("vrmlscript:")+
_T("function set_startTime(value, time)")+
_T("{")+
_T("	Url[0] = 'javascript: ';")+
_T("	for (i=0; i<data.javascript.length; i++) Url[0] += data.javascript[i];")+
_T("	Browser.loadURL(Url, Parameter);")+
_T("}"));
ProtoBody12.addChild(&Script19);

ROUTE& ROUTE28 =  ROUTE();
ROUTE28.setFromNode(CString("Data_1"));
ROUTE28.setFromField(CString("startTime_changed"));
ROUTE28.setToNode(CString("_loadUrl_1"));
ROUTE28.setToField(CString("set_startTime"));
ProtoBody12.addChild(&ROUTE28);

ProtoDeclare8.addChild(&ProtoBody12);

Scene7.addChild(&ProtoDeclare8);

X3D0.setScene(&Scene7);

}
