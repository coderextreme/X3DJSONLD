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
meta3.setContent(CString("Sat, 25 Apr 2015 12:38:24 GMT"));
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
meta6.setContent(CString("Sat, 25 Apr 2015 12:38:24 GMT"));
head1.addMeta(&meta6);

X3D0.setHead(&head1);

Scene& Scene7 =  Scene();
ProtoDeclare& ProtoDeclare8 =  ProtoDeclare();
ProtoDeclare8.setName(CString("World"));
ProtoInterface& ProtoInterface9 =  ProtoInterface();
field& field10 =  field();
field10.setName(CString("enabled"));
field10.setAccessType(CString("inputOutput"));
field10.setType(CString("SFBool"));
field10.setValue(CString("true"));
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
field13.setName(CString("isActive"));
field13.setAccessType(CString("outputOnly"));
field13.setType(CString("SFBool"));
ProtoInterface9.addChild(&field13);

field& field14 =  field();
field14.setName(CString("enterTime"));
field14.setAccessType(CString("outputOnly"));
field14.setType(CString("SFTime"));
ProtoInterface9.addChild(&field14);

field& field15 =  field();
field15.setName(CString("exitTime"));
field15.setAccessType(CString("outputOnly"));
field15.setType(CString("SFTime"));
ProtoInterface9.addChild(&field15);

field& field16 =  field();
field16.setName(CString("interface"));
field16.setAccessType(CString("inputOutput"));
field16.setType(CString("MFNode"));
ProtoInterface9.addChild(&field16);

field& field17 =  field();
field17.setName(CString("children"));
field17.setAccessType(CString("inputOutput"));
field17.setType(CString("MFNode"));
ProtoInterface9.addChild(&field17);

ProtoDeclare8.addChild(&ProtoInterface9);

ProtoBody& ProtoBody18 =  ProtoBody();
ProtoDeclare& ProtoDeclare19 =  ProtoDeclare();
ProtoDeclare19.setName(CString("Data"));
ProtoInterface& ProtoInterface20 =  ProtoInterface();
field& field21 =  field();
field21.setName(CString("enabled"));
field21.setAccessType(CString("inputOutput"));
field21.setType(CString("SFBool"));
field21.setValue(CString("true"));
ProtoInterface20.addChild(&field21);

field& field22 =  field();
field22.setName(CString("startTime"));
field22.setAccessType(CString("inputOutput"));
field22.setType(CString("SFTime"));
ProtoInterface20.addChild(&field22);

field& field23 =  field();
field23.setName(CString("stopTime"));
field23.setAccessType(CString("inputOutput"));
field23.setType(CString("SFTime"));
ProtoInterface20.addChild(&field23);

field& field24 =  field();
field24.setName(CString("iface"));
field24.setAccessType(CString("inputOutput"));
field24.setType(CString("MFNode"));
ProtoInterface20.addChild(&field24);

field& field25 =  field();
field25.setName(CString("children"));
field25.setAccessType(CString("inputOutput"));
field25.setType(CString("MFNode"));
ProtoInterface20.addChild(&field25);

ProtoDeclare19.addChild(&ProtoInterface20);

ProtoBody& ProtoBody26 =  ProtoBody();
Group& Group27 =  Group();
Switch& Switch28 =  Switch();
Switch28.setWhichChoice(-1);
IS& IS29 =  IS();
Connect& connect30 =  Connect();
connect30.setNodeField(CString("children"));
connect30.setProtoField(CString("iface"));
IS29.addChild(&connect30);

Switch28.addChild(&IS29);

Group27.addChild(&Switch28);

Group& Group31 =  Group();
IS& IS32 =  IS();
Connect& connect33 =  Connect();
connect33.setNodeField(CString("children"));
connect33.setProtoField(CString("children"));
IS32.addChild(&connect33);

Group31.addChild(&IS32);

Group27.addChild(&Group31);

ProtoBody26.addChild(&Group27);

ProtoDeclare19.addChild(&ProtoBody26);

ProtoBody18.addChild(&ProtoDeclare19);

ProtoInstance& ProtoInstance34 =  ProtoInstance();
ProtoInstance34.setName(CString("Data"));
ProtoInstance34.setDEF(CString("Data"));
IS& IS35 =  IS();
Connect& connect36 =  Connect();
connect36.setNodeField(CString("enabled"));
connect36.setProtoField(CString("enabled"));
IS35.addChild(&connect36);

Connect& connect37 =  Connect();
connect37.setNodeField(CString("startTime"));
connect37.setProtoField(CString("startTime"));
IS35.addChild(&connect37);

Connect& connect38 =  Connect();
connect38.setNodeField(CString("stopTime"));
connect38.setProtoField(CString("stopTime"));
IS35.addChild(&connect38);

Connect& connect39 =  Connect();
connect39.setNodeField(CString("iface"));
connect39.setProtoField(CString("interface"));
IS35.addChild(&connect39);

Connect& connect40 =  Connect();
connect40.setNodeField(CString("children"));
connect40.setProtoField(CString("children"));
IS35.addChild(&connect40);

ProtoInstance34.addChild(&IS35);

ProtoBody18.addChild(&ProtoInstance34);

Script& Script41 =  Script();
Script41.setDEF(CString("_world"));
Script41.setDirectOutput(True);
Script41.setMustEvaluate(True);
field& field42 =  field();
field42.setName(CString("isActive"));
field42.setAccessType(CString("outputOnly"));
field42.setType(CString("SFBool"));
Script41.addChild(&field42);

field& field43 =  field();
field43.setName(CString("enterTime"));
field43.setAccessType(CString("outputOnly"));
field43.setType(CString("SFTime"));
Script41.addChild(&field43);

field& field44 =  field();
field44.setName(CString("exitTime"));
field44.setAccessType(CString("outputOnly"));
field44.setType(CString("SFTime"));
Script41.addChild(&field44);

field& field45 =  field();
field45.setName(CString("set_url"));
field45.setAccessType(CString("inputOnly"));
field45.setType(CString("MFString"));
Script41.addChild(&field45);

field& field46 =  field();
field46.setName(CString("set_startTime"));
field46.setAccessType(CString("inputOnly"));
field46.setType(CString("SFTime"));
Script41.addChild(&field46);

field& field47 =  field();
field47.setName(CString("set_stopTime"));
field47.setAccessType(CString("inputOnly"));
field47.setType(CString("SFTime"));
Script41.addChild(&field47);

field& field48 =  field();
field48.setName(CString("set_startTimeC"));
field48.setAccessType(CString("inputOnly"));
field48.setType(CString("SFTime"));
Script41.addChild(&field48);

field& field49 =  field();
field49.setName(CString("set_stopTimeC"));
field49.setAccessType(CString("inputOnly"));
field49.setType(CString("SFTime"));
Script41.addChild(&field49);

field& field50 =  field();
field50.setName(CString("set_children"));
field50.setAccessType(CString("inputOnly"));
field50.setType(CString("MFNode"));
Script41.addChild(&field50);

field& field51 =  field();
field51.setName(CString("self"));
field51.setAccessType(CString("initializeOnly"));
field51.setType(CString("SFNode"));
Script& Script52 =  Script();
Script52.setUSE(CString("_world"));
field51.addChild(&Script52);

Script41.addChild(&field51);

field& field53 =  field();
field53.setName(CString("scene"));
field53.setAccessType(CString("initializeOnly"));
field53.setType(CString("SFNode"));
Script41.addChild(&field53);

field& field54 =  field();
field54.setName(CString("data"));
field54.setAccessType(CString("initializeOnly"));
field54.setType(CString("SFNode"));
ProtoInstance& ProtoInstance55 =  ProtoInstance();
ProtoInstance55.setUSE(CString("Data"));
field54.addChild(&ProtoInstance55);

Script41.addChild(&field54);

IS& IS56 =  IS();
Connect& connect57 =  Connect();
connect57.setNodeField(CString("isActive"));
connect57.setProtoField(CString("isActive"));
IS56.addChild(&connect57);

Connect& connect58 =  Connect();
connect58.setNodeField(CString("enterTime"));
connect58.setProtoField(CString("enterTime"));
IS56.addChild(&connect58);

Connect& connect59 =  Connect();
connect59.setNodeField(CString("exitTime"));
connect59.setProtoField(CString("exitTime"));
IS56.addChild(&connect59);

Script41.addChild(&IS56);


Script41.setSourceCode(CString("vrmlscript:")+
_T("function set_startTime(value, time)")+
_T("{")+
_T("	if (!data.enabled) return;")+
_T("	if (!scene) return;")+
_T("	if (!isActive) {")+
_T("		scene.set_startTime = time;")+
_T("	}")+
_T("}")+
_T("function set_stopTime(value, time)")+
_T("{")+
_T("	if (!data.enabled) return;")+
_T("	if (!scene) return;")+
_T("	if (isActive) {")+
_T("		scene.set_stopTime = time;")+
_T("	}")+
_T("}")+
_T("function set_startTimeC(value, time)")+
_T("{")+
_T("	if (!data.enabled) return;")+
_T("	if (!isActive) {")+
_T("		isActive = TRUE;")+
_T("		enterTime = time;")+
_T("	}")+
_T("}")+
_T("function set_stopTimeC(value, time)")+
_T("{")+
_T("	if (!data.enabled) return;")+
_T("	if (isActive) {")+
_T("		exitTime = time;")+
_T("		isActive = FALSE;")+
_T("	}")+
_T("}")+
_T("function set_children(value, time)")+
_T("{")+
_T("	found = FALSE;")+
_T("	for (i = 0; i < value.length && !found; i++) {")+
_T("		if (value[i].toString() == 'Transform { }' && value[i].children.length && value[i].children[0].toString() == 'Scene { }') {")+
_T("			found = TRUE;")+
_T("			scene = value[i].children[0];")+
_T("		} else if (value[i].toString() == 'Scene { }') {")+
_T("			found = TRUE;")+
_T("			scene = value[i];")+
_T("		} ")+
_T("	}")+
_T("	if (!found) return;")+
_T("	Browser.addRoute(scene, 'enterTime', self, 'set_startTimeC');")+
_T("	Browser.addRoute(scene, 'exitTime', self, 'set_stopTimeC');")+
_T("	iface = scene.interface_changed;")+
_T("	l = Math.min(data.iface.length, iface.length);")+
_T("	for (i = 0; i < l; i++) {")+
_T("		Browser.addRoute(data.iface[i],  'value_changed', iface[i], 'set_value');")+
_T("		Browser.addRoute(iface[i], 'value_changed', data.iface[i], 'set_value');")+
_T("	}")+
_T("}")+
_T("function initialize()")+
_T("{")+
_T("	for (i = 0; i < data.children.length; i++) {")+
_T("		Browser.addRoute(data.children[i],  'children_changed', self, 'set_children');")+
_T("	}")+
_T("	if (data.startTime) data.startTime = 1;")+
_T("}"));
ProtoBody18.addChild(&Script41);

ROUTE& ROUTE60 =  ROUTE();
ROUTE60.setFromNode(CString("Data"));
ROUTE60.setFromField(CString("startTime_changed"));
ROUTE60.setToNode(CString("_world"));
ROUTE60.setToField(CString("set_startTime"));
ProtoBody18.addChild(&ROUTE60);

ROUTE& ROUTE61 =  ROUTE();
ROUTE61.setFromNode(CString("Data"));
ROUTE61.setFromField(CString("stopTime_changed"));
ROUTE61.setToNode(CString("_world"));
ROUTE61.setToField(CString("set_stopTime"));
ProtoBody18.addChild(&ROUTE61);

ProtoDeclare8.addChild(&ProtoBody18);

Scene7.addChild(&ProtoDeclare8);

X3D0.setScene(&Scene7);

}
