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
ProtoDeclare8.setName(CString("LoadURL"));
ProtoInterface& ProtoInterface9 =  ProtoInterface();
field& field10 =  field();
field10.setName(CString("url"));
field10.setAccessType(CString("inputOutput"));
field10.setType(CString("MFString"));
field10.setValue(CString("\"\""));
ProtoInterface9.addChild(&field10);

field& field11 =  field();
field11.setName(CString("parameter"));
field11.setAccessType(CString("inputOutput"));
field11.setType(CString("MFString"));
field11.setValue(CString("\"\""));
ProtoInterface9.addChild(&field11);

field& field12 =  field();
field12.setName(CString("startTime"));
field12.setAccessType(CString("inputOnly"));
field12.setType(CString("SFTime"));
ProtoInterface9.addChild(&field12);

ProtoDeclare8.addChild(&ProtoInterface9);

ProtoBody& ProtoBody13 =  ProtoBody();
ProtoDeclare& ProtoDeclare14 =  ProtoDeclare();
ProtoDeclare14.setName(CString("Data"));
ProtoInterface& ProtoInterface15 =  ProtoInterface();
field& field16 =  field();
field16.setName(CString("url"));
field16.setAccessType(CString("inputOutput"));
field16.setType(CString("MFString"));
field16.setValue(CString("\"\""));
ProtoInterface15.addChild(&field16);

field& field17 =  field();
field17.setName(CString("parameter"));
field17.setAccessType(CString("inputOutput"));
field17.setType(CString("MFString"));
field17.setValue(CString("\"\""));
ProtoInterface15.addChild(&field17);

ProtoDeclare14.addChild(&ProtoInterface15);

ProtoBody& ProtoBody18 =  ProtoBody();
Group& Group19 =  Group();
ProtoBody18.addChild(&Group19);

ProtoDeclare14.addChild(&ProtoBody18);

ProtoBody13.addChild(&ProtoDeclare14);

Script& Script20 =  Script();
Script20.setDEF(CString("_loadUrl_1"));
Script20.setDirectOutput(True);
Script20.setMustEvaluate(True);
field& field21 =  field();
field21.setName(CString("startTime"));
field21.setAccessType(CString("inputOnly"));
field21.setType(CString("SFTime"));
Script20.addChild(&field21);

field& field22 =  field();
field22.setName(CString("set_url"));
field22.setAccessType(CString("inputOnly"));
field22.setType(CString("MFString"));
Script20.addChild(&field22);

field& field23 =  field();
field23.setName(CString("data"));
field23.setAccessType(CString("initializeOnly"));
field23.setType(CString("SFNode"));
ProtoInstance& ProtoInstance24 =  ProtoInstance();
ProtoInstance24.setName(CString("Data"));
ProtoInstance24.setDEF(CString("Data"));
IS& IS25 =  IS();
Connect& connect26 =  Connect();
connect26.setNodeField(CString("url"));
connect26.setProtoField(CString("url"));
IS25.addChild(&connect26);

Connect& connect27 =  Connect();
connect27.setNodeField(CString("parameter"));
connect27.setProtoField(CString("parameter"));
IS25.addChild(&connect27);

ProtoInstance24.addChild(&IS25);

field23.addChild(&ProtoInstance24);

Script20.addChild(&field23);

IS& IS28 =  IS();
Connect& connect29 =  Connect();
connect29.setNodeField(CString("startTime"));
connect29.setProtoField(CString("startTime"));
IS28.addChild(&connect29);

Script20.addChild(&IS28);


Script20.setSourceCode(CString("vrmlscript:")+
_T("function startTime(value, time)")+
_T("{")+
_T("	Browser.loadURL(data.url, data.parameter);")+
_T("}")+
_T("function set_url(value, time)")+
_T("{")+
_T("	startTime( time, time );")+
_T("}"));
ProtoBody13.addChild(&Script20);

ROUTE& ROUTE30 =  ROUTE();
ROUTE30.setFromNode(CString("Data"));
ROUTE30.setFromField(CString("url_changed"));
ROUTE30.setToNode(CString("_loadUrl_1"));
ROUTE30.setToField(CString("set_url"));
ProtoBody13.addChild(&ROUTE30);

ProtoDeclare8.addChild(&ProtoBody13);

Scene7.addChild(&ProtoDeclare8);

X3D0.setScene(&Scene7);

}
