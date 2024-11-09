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
meta3.setContent(CString("Thu, 23 Apr 2015 06:07:11 GMT"));
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
meta6.setContent(CString("Thu, 23 Apr 2015 06:07:11 GMT"));
head1.addMeta(&meta6);

X3D0.setHead(&head1);

Scene& Scene7 =  Scene();
ProtoDeclare& ProtoDeclare8 =  ProtoDeclare();
ProtoDeclare8.setName(CString("LoadVrmlFromURL"));
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

field& field13 =  field();
field13.setName(CString("isActive"));
field13.setAccessType(CString("outputOnly"));
field13.setType(CString("SFBool"));
ProtoInterface9.addChild(&field13);

field& field14 =  field();
field14.setName(CString("exitTime"));
field14.setAccessType(CString("outputOnly"));
field14.setType(CString("SFTime"));
ProtoInterface9.addChild(&field14);

field& field15 =  field();
field15.setName(CString("children_changed"));
field15.setAccessType(CString("outputOnly"));
field15.setType(CString("MFNode"));
ProtoInterface9.addChild(&field15);

ProtoDeclare8.addChild(&ProtoInterface9);

ProtoBody& ProtoBody16 =  ProtoBody();
ProtoDeclare& ProtoDeclare17 =  ProtoDeclare();
ProtoDeclare17.setName(CString("Data"));
ProtoInterface& ProtoInterface18 =  ProtoInterface();
field& field19 =  field();
field19.setName(CString("url"));
field19.setAccessType(CString("inputOutput"));
field19.setType(CString("MFString"));
field19.setValue(CString("\"\""));
ProtoInterface18.addChild(&field19);

field& field20 =  field();
field20.setName(CString("parameter"));
field20.setAccessType(CString("inputOutput"));
field20.setType(CString("MFString"));
field20.setValue(CString("\"\""));
ProtoInterface18.addChild(&field20);

ProtoDeclare17.addChild(&ProtoInterface18);

ProtoBody& ProtoBody21 =  ProtoBody();
Group& Group22 =  Group();
ProtoBody21.addChild(&Group22);

ProtoDeclare17.addChild(&ProtoBody21);

ProtoBody16.addChild(&ProtoDeclare17);

Script& Script23 =  Script();
Script23.setDEF(CString("_loadUrl_1"));
Script23.setDirectOutput(true);
Script23.setMustEvaluate(true);
field& field24 =  field();
field24.setName(CString("children_changed"));
field24.setAccessType(CString("outputOnly"));
field24.setType(CString("MFNode"));
Script23.addChild(&field24);

field& field25 =  field();
field25.setName(CString("isActive"));
field25.setAccessType(CString("outputOnly"));
field25.setType(CString("SFBool"));
Script23.addChild(&field25);

field& field26 =  field();
field26.setName(CString("exitTime"));
field26.setAccessType(CString("outputOnly"));
field26.setType(CString("SFTime"));
Script23.addChild(&field26);

field& field27 =  field();
field27.setName(CString("startTime"));
field27.setAccessType(CString("inputOnly"));
field27.setType(CString("SFTime"));
Script23.addChild(&field27);

field& field28 =  field();
field28.setName(CString("addChildren"));
field28.setAccessType(CString("inputOnly"));
field28.setType(CString("MFNode"));
Script23.addChild(&field28);

field& field29 =  field();
field29.setName(CString("set_url"));
field29.setAccessType(CString("inputOnly"));
field29.setType(CString("MFString"));
Script23.addChild(&field29);

field& field30 =  field();
field30.setName(CString("parameter"));
field30.setAccessType(CString("initializeOnly"));
field30.setType(CString("SFString"));
Script23.addChild(&field30);

field& field31 =  field();
field31.setName(CString("thisNode"));
field31.setAccessType(CString("initializeOnly"));
field31.setType(CString("SFNode"));
Script& Script32 =  Script();
Script32.setUSE(CString("_loadUrl_1"));
field31.addChild(&Script32);

Script23.addChild(&field31);

field& field33 =  field();
field33.setName(CString("data"));
field33.setAccessType(CString("initializeOnly"));
field33.setType(CString("SFNode"));
ProtoInstance& ProtoInstance34 =  ProtoInstance();
ProtoInstance34.setName(CString("Data"));
ProtoInstance34.setDEF(CString("Data"));
IS& IS35 =  IS();
Connect& connect36 =  Connect();
connect36.setNodeField(CString("url"));
connect36.setProtoField(CString("url"));
IS35.addChild(&connect36);

Connect& connect37 =  Connect();
connect37.setNodeField(CString("parameter"));
connect37.setProtoField(CString("parameter"));
IS35.addChild(&connect37);

ProtoInstance34.addChild(&IS35);

field33.addChild(&ProtoInstance34);

Script23.addChild(&field33);

IS& IS38 =  IS();
Connect& connect39 =  Connect();
connect39.setNodeField(CString("children_changed"));
connect39.setProtoField(CString("children_changed"));
IS38.addChild(&connect39);

Connect& connect40 =  Connect();
connect40.setNodeField(CString("isActive"));
connect40.setProtoField(CString("isActive"));
IS38.addChild(&connect40);

Connect& connect41 =  Connect();
connect41.setNodeField(CString("exitTime"));
connect41.setProtoField(CString("exitTime"));
IS38.addChild(&connect41);

Connect& connect42 =  Connect();
connect42.setNodeField(CString("startTime"));
connect42.setProtoField(CString("startTime"));
IS38.addChild(&connect42);

Script23.addChild(&IS38);


//Script23.setSourceCode(CString("vrmlscript:")+
//_T("function initialize()")+
//_T("{")+
//_T("	for (i = 0; i < data.parameter.length; i++) {")+
//_T("		if (data.parameter[i]) parameter += \"&\" + data.parameter[i];")+
//_T("	}")+
//_T("}")+
//_T("function loadUrl()")+
//_T("{")+
//_T("	if(data.url.length > 0 && !isActive) {")+
//_T("		isActive = TRUE;")+
//_T("		Browser.createVrmlFromURL(data.url, thisNode, \"addChildren\");")+
//_T("	}")+
//_T("}")+
//_T("function startTime(value, time)")+
//_T("{")+
//_T("	loadUrl();")+
//_T("}")+
//_T("function set_url(value, time)")+
//_T("{")+
//_T("	loadUrl();")+
//_T("}")+
//_T("function addChildren(value, time)")+
//_T("{")+
//_T("	if(isActive){")+
//_T("		children_changed = value;")+
//_T("		isActive = FALSE;")+
//_T("		exitTime = time;")+
//_T("	}")+
//_T("}"));
ProtoBody16.addChild(&Script23);

ROUTE& ROUTE43 =  ROUTE();
ROUTE43.setFromNode(CString("Data"));
ROUTE43.setFromField(CString("url_changed"));
ROUTE43.setToNode(CString("_loadUrl_1"));
ROUTE43.setToField(CString("set_url"));
ProtoBody16.addChild(&ROUTE43);

ProtoDeclare8.addChild(&ProtoBody16);

Scene7.addChild(&ProtoDeclare8);

X3D0.setScene(&Scene7);

//}
