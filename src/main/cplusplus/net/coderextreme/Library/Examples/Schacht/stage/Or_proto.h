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
ProtoDeclare8.setName(CString("Or"));
ProtoInterface& ProtoInterface9 =  ProtoInterface();
field& field10 =  field();
field10.setName(CString("value_changed"));
field10.setAccessType(CString("outputOnly"));
field10.setType(CString("SFBool"));
ProtoInterface9.addChild(&field10);

field& field11 =  field();
field11.setName(CString("children"));
field11.setAccessType(CString("inputOutput"));
field11.setType(CString("MFNode"));
ProtoInterface9.addChild(&field11);

ProtoDeclare8.addChild(&ProtoInterface9);

ProtoBody& ProtoBody12 =  ProtoBody();
ProtoDeclare& ProtoDeclare13 =  ProtoDeclare();
ProtoDeclare13.setName(CString("Data"));
ProtoInterface& ProtoInterface14 =  ProtoInterface();
field& field15 =  field();
field15.setName(CString("children"));
field15.setAccessType(CString("inputOutput"));
field15.setType(CString("MFNode"));
ProtoInterface14.addChild(&field15);

ProtoDeclare13.addChild(&ProtoInterface14);

ProtoBody& ProtoBody16 =  ProtoBody();
Group& Group17 =  Group();
IS& IS18 =  IS();
Connect& connect19 =  Connect();
connect19.setNodeField(CString("children"));
connect19.setProtoField(CString("children"));
IS18.addChild(&connect19);

Group17.addChild(&IS18);

ProtoBody16.addChild(&Group17);

ProtoDeclare13.addChild(&ProtoBody16);

ProtoBody12.addChild(&ProtoDeclare13);

ProtoInstance& ProtoInstance20 =  ProtoInstance();
ProtoInstance20.setName(CString("Data"));
ProtoInstance20.setDEF(CString("Data"));
IS& IS21 =  IS();
Connect& connect22 =  Connect();
connect22.setNodeField(CString("children"));
connect22.setProtoField(CString("children"));
IS21.addChild(&connect22);

ProtoInstance20.addChild(&IS21);

ProtoBody12.addChild(&ProtoInstance20);

Script& Script23 =  Script();
Script23.setDEF(CString("_or"));
Script23.setDirectOutput(true);
field& field24 =  field();
field24.setName(CString("set_value"));
field24.setAccessType(CString("inputOnly"));
field24.setType(CString("SFBool"));
Script23.addChild(&field24);

field& field25 =  field();
field25.setName(CString("set_children"));
field25.setAccessType(CString("inputOnly"));
field25.setType(CString("MFNode"));
Script23.addChild(&field25);

field& field26 =  field();
field26.setName(CString("value_changed"));
field26.setAccessType(CString("outputOnly"));
field26.setType(CString("SFBool"));
Script23.addChild(&field26);

field& field27 =  field();
field27.setName(CString("self"));
field27.setAccessType(CString("initializeOnly"));
field27.setType(CString("SFNode"));
Script& Script28 =  Script();
Script28.setUSE(CString("_or"));
field27.addChild(&Script28);

Script23.addChild(&field27);

field& field29 =  field();
field29.setName(CString("data"));
field29.setAccessType(CString("initializeOnly"));
field29.setType(CString("SFNode"));
ProtoInstance& ProtoInstance30 =  ProtoInstance();
ProtoInstance30.setUSE(CString("Data"));
field29.addChild(&ProtoInstance30);

Script23.addChild(&field29);

IS& IS31 =  IS();
Connect& connect32 =  Connect();
connect32.setNodeField(CString("value_changed"));
connect32.setProtoField(CString("value_changed"));
IS31.addChild(&connect32);

Script23.addChild(&IS31);


//Script23.setSourceCode(CString("vrmlscript:")+
//_T("function set_value (value, time)")+
//_T("{")+
//_T("	//print (time + ': _or ' + value);")+
//_T("	")+
//_T("	//for (var i = 0; i < data .children .length; ++i)")+
//_T("	//	print (data .children [i] .value_changed);")+
//_T("}")+
//_T("function set_children (value, time)")+
//_T("{")+
//_T("	for (var i = 0; i < value .length; ++i)")+
//_T("	{")+
//_T("		Browser .addRoute (value [i], 'value_changed', self, 'set_value');")+
//_T("	}")+
//_T("}")+
//_T("function initialize ()")+
//_T("{")+
//_T("	if (data .children .length)")+
//_T("		set_children (data .children, 0);")+
//_T("}")+
//_T("function eventsProcessed ()")+
//_T("{")+
//_T("	var v = FALSE;")+
//_T("	")+
//_T("	for (var i = 0; i < data .children .length; ++i)")+
//_T("		v = v || data .children [i] .value_changed;")+
//_T("		")+
//_T("	value_changed = v;")+
//_T("}"));
ProtoBody12.addChild(&Script23);

ROUTE& ROUTE33 =  ROUTE();
ROUTE33.setFromNode(CString("Data"));
ROUTE33.setFromField(CString("children_changed"));
ROUTE33.setToNode(CString("_or"));
ROUTE33.setToField(CString("set_children"));
ProtoBody12.addChild(&ROUTE33);

ProtoDeclare8.addChild(&ProtoBody12);

Scene7.addChild(&ProtoDeclare8);

X3D0.setScene(&Scene7);

//}
