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
meta3.setContent(CString("Sat, 25 Apr 2015 12:38:22 GMT"));
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
meta6.setContent(CString("Sat, 25 Apr 2015 12:38:22 GMT"));
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
IS& IS25 =  IS();
Connect& connect26 =  Connect();
connect26.setNodeField(CString("children"));
connect26.setProtoField(CString("children"));
IS25.addChild(&connect26);

Group24.addChild(&IS25);

ProtoBody23.addChild(&Group24);

ProtoDeclare17.addChild(&ProtoBody23);

ProtoBody16.addChild(&ProtoDeclare17);

ProtoInstance& ProtoInstance27 =  ProtoInstance();
ProtoInstance27.setName(CString("Data"));
ProtoInstance27.setDEF(CString("Data"));
IS& IS28 =  IS();
Connect& connect29 =  Connect();
connect29.setNodeField(CString("url"));
connect29.setProtoField(CString("url"));
IS28.addChild(&connect29);

Connect& connect30 =  Connect();
connect30.setNodeField(CString("startTime"));
connect30.setProtoField(CString("startTime"));
IS28.addChild(&connect30);

Connect& connect31 =  Connect();
connect31.setNodeField(CString("parameter"));
connect31.setProtoField(CString("parameter"));
IS28.addChild(&connect31);

Connect& connect32 =  Connect();
connect32.setNodeField(CString("children"));
connect32.setProtoField(CString("children"));
IS28.addChild(&connect32);

ProtoInstance27.addChild(&IS28);

ProtoBody16.addChild(&ProtoInstance27);

Script& Script33 =  Script();
Script33.setDEF(CString("_import"));
Script33.setDirectOutput(True);
Script33.setMustEvaluate(True);
field& field34 =  field();
field34.setName(CString("isActive"));
field34.setAccessType(CString("outputOnly"));
field34.setType(CString("SFBool"));
Script33.addChild(&field34);

field& field35 =  field();
field35.setName(CString("exitTime"));
field35.setAccessType(CString("outputOnly"));
field35.setType(CString("SFTime"));
Script33.addChild(&field35);

field& field36 =  field();
field36.setName(CString("set_startTime"));
field36.setAccessType(CString("inputOnly"));
field36.setType(CString("SFTime"));
Script33.addChild(&field36);

field& field37 =  field();
field37.setName(CString("set_children"));
field37.setAccessType(CString("inputOnly"));
field37.setType(CString("MFNode"));
Script33.addChild(&field37);

field& field38 =  field();
field38.setName(CString("set_url"));
field38.setAccessType(CString("inputOnly"));
field38.setType(CString("MFString"));
Script33.addChild(&field38);

field& field39 =  field();
field39.setName(CString("self"));
field39.setAccessType(CString("initializeOnly"));
field39.setType(CString("SFNode"));
Script& Script40 =  Script();
Script40.setUSE(CString("_import"));
field39.addChild(&Script40);

Script33.addChild(&field39);

field& field41 =  field();
field41.setName(CString("data"));
field41.setAccessType(CString("initializeOnly"));
field41.setType(CString("SFNode"));
ProtoInstance& ProtoInstance42 =  ProtoInstance();
ProtoInstance42.setUSE(CString("Data"));
field41.addChild(&ProtoInstance42);

Script33.addChild(&field41);

IS& IS43 =  IS();
Connect& connect44 =  Connect();
connect44.setNodeField(CString("isActive"));
connect44.setProtoField(CString("isActive"));
IS43.addChild(&connect44);

Connect& connect45 =  Connect();
connect45.setNodeField(CString("exitTime"));
connect45.setProtoField(CString("exitTime"));
IS43.addChild(&connect45);

Script33.addChild(&IS43);


Script33.setSourceCode(CString("vrmlscript:")+
_T("function query() {")+
_T("	q = '';")+
_T("	for (i = 0; i < data.parameter.length; i++) {")+
_T("		q += ';' + data.parameter[i].name;")+
_T("		if (data.parameter[i].value.length) {")+
_T("			q += '=' + data.parameter[i].value[0];")+
_T("		}")+
_T("	}")+
_T("	if (q.length > 1) return q.substring(1, q.length);")+
_T("	return '';")+
_T("}")+
_T("function url() {")+
_T("	q = query();")+
_T("	u = new MFString();")+
_T("	u.length = data.url.length;")+
_T("	if (q == '') return data.url;")+
_T("	for (i = 0; i < u.length; i++) {")+
_T("		u[i] = data.url[i] + (data.url[i].indexOf('?') > -1 ? (data.url[i].indexOf('?') == data.url[i].length-1  ? '' : (q.length ? (data.url[i].indexOf(';') == data.url[i].length-1  ? '' : ';') : '') ) : '?') + q;")+
_T("	}")+
_T("	return u;")+
_T("}")+
_T("function loadUrl() {")+
_T("	if(data.url.length && !isActive) {")+
_T("		isActive = TRUE;")+
_T("		Browser.createVrmlFromURL(url(), self, \"set_children\");")+
_T("	}")+
_T("}")+
_T("function set_url(value, time) { loadUrl(); }")+
_T("function set_startTime(value, time) { loadUrl(); }")+
_T("function set_children(value, time) {")+
_T("	if(isActive){")+
_T("		if (value.toString() == \"Group { }\") {")+
_T("			data.children = value[0].children;")+
_T("		} else {")+
_T("			data.children = value;")+
_T("		}")+
_T("		isActive = FALSE;")+
_T("		exitTime = time;")+
_T("	}")+
_T("}")+
_T("function initialize() { if (data.startTime) loadUrl(); }"));
ProtoBody16.addChild(&Script33);

ROUTE& ROUTE46 =  ROUTE();
ROUTE46.setFromNode(CString("Data"));
ROUTE46.setFromField(CString("url_changed"));
ROUTE46.setToNode(CString("_import"));
ROUTE46.setToField(CString("set_url"));
ProtoBody16.addChild(&ROUTE46);

ROUTE& ROUTE47 =  ROUTE();
ROUTE47.setFromNode(CString("Data"));
ROUTE47.setFromField(CString("startTime_changed"));
ROUTE47.setToNode(CString("_import"));
ROUTE47.setToField(CString("set_startTime"));
ProtoBody16.addChild(&ROUTE47);

ProtoDeclare8.addChild(&ProtoBody16);

Scene7.addChild(&ProtoDeclare8);

X3D0.setScene(&Scene7);

}
