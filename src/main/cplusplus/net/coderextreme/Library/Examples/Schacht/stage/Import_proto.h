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
ProtoDeclare8.setName(CString("Import"));
ProtoInterface& ProtoInterface9 =  ProtoInterface();
field& field10 =  field();
field10.setName(CString("url"));
field10.setAccessType(CString("inputOutput"));
field10.setType(CString("MFString"));
field10.setValue(CString("\"\""));
ProtoInterface9.addChild(&field10);

field& field11 =  field();
field11.setName(CString("startTime"));
field11.setAccessType(CString("inputOutput"));
field11.setType(CString("SFTime"));
ProtoInterface9.addChild(&field11);

field& field12 =  field();
field12.setName(CString("isActive"));
field12.setAccessType(CString("outputOnly"));
field12.setType(CString("SFBool"));
ProtoInterface9.addChild(&field12);

field& field13 =  field();
field13.setName(CString("exitTime"));
field13.setAccessType(CString("outputOnly"));
field13.setType(CString("SFTime"));
ProtoInterface9.addChild(&field13);

field& field14 =  field();
field14.setName(CString("parameter"));
field14.setAccessType(CString("inputOutput"));
field14.setType(CString("MFNode"));
ProtoInterface9.addChild(&field14);

field& field15 =  field();
field15.setName(CString("children"));
field15.setAccessType(CString("inputOutput"));
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
field20.setName(CString("startTime"));
field20.setAccessType(CString("inputOutput"));
field20.setType(CString("SFTime"));
ProtoInterface18.addChild(&field20);

field& field21 =  field();
field21.setName(CString("parameter"));
field21.setAccessType(CString("inputOutput"));
field21.setType(CString("MFNode"));
ProtoInterface18.addChild(&field21);

field& field22 =  field();
field22.setName(CString("children"));
field22.setAccessType(CString("inputOutput"));
field22.setType(CString("MFNode"));
ProtoInterface18.addChild(&field22);

ProtoDeclare17.addChild(&ProtoInterface18);

ProtoBody& ProtoBody23 =  ProtoBody();
Group& Group24 =  Group();
ProtoBody23.addChild(&Group24);

ProtoDeclare17.addChild(&ProtoBody23);

ProtoBody16.addChild(&ProtoDeclare17);

Script& Script25 =  Script();
Script25.setDEF(CString("_import"));
Script25.setDirectOutput(true);
Script25.setMustEvaluate(true);
field& field26 =  field();
field26.setName(CString("isActive"));
field26.setAccessType(CString("outputOnly"));
field26.setType(CString("SFBool"));
Script25.addChild(&field26);

field& field27 =  field();
field27.setName(CString("exitTime"));
field27.setAccessType(CString("outputOnly"));
field27.setType(CString("SFTime"));
Script25.addChild(&field27);

field& field28 =  field();
field28.setName(CString("set_startTime"));
field28.setAccessType(CString("inputOnly"));
field28.setType(CString("SFTime"));
Script25.addChild(&field28);

field& field29 =  field();
field29.setName(CString("set_stopTime"));
field29.setAccessType(CString("inputOnly"));
field29.setType(CString("SFTime"));
Script25.addChild(&field29);

field& field30 =  field();
field30.setName(CString("set_children"));
field30.setAccessType(CString("inputOnly"));
field30.setType(CString("MFNode"));
Script25.addChild(&field30);

field& field31 =  field();
field31.setName(CString("set_url"));
field31.setAccessType(CString("inputOnly"));
field31.setType(CString("MFString"));
Script25.addChild(&field31);

field& field32 =  field();
field32.setName(CString("self"));
field32.setAccessType(CString("initializeOnly"));
field32.setType(CString("SFNode"));
Script& Script33 =  Script();
Script33.setUSE(CString("_import"));
field32.addChild(&Script33);

Script25.addChild(&field32);

field& field34 =  field();
field34.setName(CString("data"));
field34.setAccessType(CString("initializeOnly"));
field34.setType(CString("SFNode"));
ProtoInstance& ProtoInstance35 =  ProtoInstance();
ProtoInstance35.setName(CString("Data"));
ProtoInstance35.setDEF(CString("Data"));
IS& IS36 =  IS();
Connect& connect37 =  Connect();
connect37.setNodeField(CString("url"));
connect37.setProtoField(CString("url"));
IS36.addChild(&connect37);

Connect& connect38 =  Connect();
connect38.setNodeField(CString("startTime"));
connect38.setProtoField(CString("startTime"));
IS36.addChild(&connect38);

Connect& connect39 =  Connect();
connect39.setNodeField(CString("parameter"));
connect39.setProtoField(CString("parameter"));
IS36.addChild(&connect39);

Connect& connect40 =  Connect();
connect40.setNodeField(CString("children"));
connect40.setProtoField(CString("children"));
IS36.addChild(&connect40);

ProtoInstance35.addChild(&IS36);

field34.addChild(&ProtoInstance35);

Script25.addChild(&field34);

IS& IS41 =  IS();
Connect& connect42 =  Connect();
connect42.setNodeField(CString("isActive"));
connect42.setProtoField(CString("isActive"));
IS41.addChild(&connect42);

Connect& connect43 =  Connect();
connect43.setNodeField(CString("exitTime"));
connect43.setProtoField(CString("exitTime"));
IS41.addChild(&connect43);

Script25.addChild(&IS41);


//Script25.setSourceCode(CString("vrmlscript:")+
//_T("function query() {")+
//_T("	q = '';")+
//_T("	for (i = 0; i < data.parameter.length; i++) {")+
//_T("		q += ';' + data.parameter[i].name;")+
//_T("		if (data.parameter[i].value.length) {")+
//_T("			q += '=' + data.parameter[i].value[0];")+
//_T("		}")+
//_T("	}")+
//_T("	if (q.length > 1) return q.substring(1, q.length);")+
//_T("	return '';")+
//_T("}")+
//_T("function url() {")+
//_T("	q = query();")+
//_T("	u = new MFString();")+
//_T("	u.length = data.url.length;")+
//_T("	if (q == '') return data.url;")+
//_T("	for (i = 0; i < u.length; i++) {")+
//_T("		u[i] = data.url[i] + (data.url[i].indexOf('?') > -1 ? (data.url[i].indexOf('?') == data.url[i].length-1  ? '' : (q.length ? (data.url[i].indexOf(';') == data.url[i].length-1  ? '' : ';') : '') ) : '?') + q;")+
//_T("	}")+
//_T("	return u;")+
//_T("}")+
//_T("function loadUrl() {")+
//_T("	if(data.url.length && !isActive) {")+
//_T("		isActive = TRUE;")+
//_T("		Browser.createVrmlFromURL(url(), self, \"set_children\");")+
//_T("	}")+
//_T("}")+
//_T("function set_url(value, time) { loadUrl(); }")+
//_T("function set_startTime(value, time) { loadUrl(); }")+
//_T("function set_stopTime(value, time) { isActive = FALSE; exitTime = time; }")+
//_T("function set_children(value, time) {")+
//_T("	if(isActive){")+
//_T("		if (value.length == 1 && value.toString() == \"Group { }\") {")+
//_T("			data.children = value[0].children;")+
//_T("		} else {")+
//_T("			data.children = value;")+
//_T("		}")+
//_T("		self.set_stopTime = time;")+
//_T("	}")+
//_T("}")+
//_T("function initialize() { if (data.startTime) loadUrl(); }"));
ProtoBody16.addChild(&Script25);

ROUTE& ROUTE44 =  ROUTE();
ROUTE44.setFromNode(CString("Data"));
ROUTE44.setFromField(CString("url_changed"));
ROUTE44.setToNode(CString("_import"));
ROUTE44.setToField(CString("set_url"));
ProtoBody16.addChild(&ROUTE44);

ROUTE& ROUTE45 =  ROUTE();
ROUTE45.setFromNode(CString("Data"));
ROUTE45.setFromField(CString("startTime_changed"));
ROUTE45.setToNode(CString("_import"));
ROUTE45.setToField(CString("set_startTime"));
ProtoBody16.addChild(&ROUTE45);

ProtoDeclare8.addChild(&ProtoBody16);

Scene7.addChild(&ProtoDeclare8);

X3D0.setScene(&Scene7);

//}
