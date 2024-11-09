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
field16.setName(CString("scene"));
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
field24.setName(CString("scene"));
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
IS& IS28 =  IS();
Connect& connect29 =  Connect();
connect29.setNodeField(CString("children"));
connect29.setProtoField(CString("children"));
IS28.addChild(&connect29);

Group27.addChild(&IS28);

ProtoBody26.addChild(&Group27);

ProtoDeclare19.addChild(&ProtoBody26);

ProtoBody18.addChild(&ProtoDeclare19);

ProtoInstance& ProtoInstance30 =  ProtoInstance();
ProtoInstance30.setName(CString("Data"));
ProtoInstance30.setDEF(CString("Data"));
IS& IS31 =  IS();
Connect& connect32 =  Connect();
connect32.setNodeField(CString("enabled"));
connect32.setProtoField(CString("enabled"));
IS31.addChild(&connect32);

Connect& connect33 =  Connect();
connect33.setNodeField(CString("startTime"));
connect33.setProtoField(CString("startTime"));
IS31.addChild(&connect33);

Connect& connect34 =  Connect();
connect34.setNodeField(CString("stopTime"));
connect34.setProtoField(CString("stopTime"));
IS31.addChild(&connect34);

Connect& connect35 =  Connect();
connect35.setNodeField(CString("scene"));
connect35.setProtoField(CString("scene"));
IS31.addChild(&connect35);

Connect& connect36 =  Connect();
connect36.setNodeField(CString("children"));
connect36.setProtoField(CString("children"));
IS31.addChild(&connect36);

ProtoInstance30.addChild(&IS31);

ProtoBody18.addChild(&ProtoInstance30);

Script& Script37 =  Script();
Script37.setDEF(CString("_world"));
Script37.setDirectOutput(True);
field& field38 =  field();
field38.setName(CString("isActive"));
field38.setAccessType(CString("outputOnly"));
field38.setType(CString("SFBool"));
Script37.addChild(&field38);

field& field39 =  field();
field39.setName(CString("enterTime"));
field39.setAccessType(CString("outputOnly"));
field39.setType(CString("SFTime"));
Script37.addChild(&field39);

field& field40 =  field();
field40.setName(CString("exitTime"));
field40.setAccessType(CString("outputOnly"));
field40.setType(CString("SFTime"));
Script37.addChild(&field40);

field& field41 =  field();
field41.setName(CString("set_startTime"));
field41.setAccessType(CString("inputOnly"));
field41.setType(CString("SFTime"));
Script37.addChild(&field41);

field& field42 =  field();
field42.setName(CString("set_stopTime"));
field42.setAccessType(CString("inputOnly"));
field42.setType(CString("SFTime"));
Script37.addChild(&field42);

field& field43 =  field();
field43.setName(CString("set_startTimeC"));
field43.setAccessType(CString("inputOnly"));
field43.setType(CString("SFTime"));
Script37.addChild(&field43);

field& field44 =  field();
field44.setName(CString("set_stopTimeC"));
field44.setAccessType(CString("inputOnly"));
field44.setType(CString("SFTime"));
Script37.addChild(&field44);

field& field45 =  field();
field45.setName(CString("set_scene"));
field45.setAccessType(CString("inputOnly"));
field45.setType(CString("MFNode"));
Script37.addChild(&field45);

field& field46 =  field();
field46.setName(CString("self"));
field46.setAccessType(CString("initializeOnly"));
field46.setType(CString("SFNode"));
Script& Script47 =  Script();
Script47.setUSE(CString("_world"));
field46.addChild(&Script47);

Script37.addChild(&field46);

field& field48 =  field();
field48.setName(CString("scene"));
field48.setAccessType(CString("initializeOnly"));
field48.setType(CString("SFNode"));
Script37.addChild(&field48);

field& field49 =  field();
field49.setName(CString("data"));
field49.setAccessType(CString("initializeOnly"));
field49.setType(CString("SFNode"));
ProtoInstance& ProtoInstance50 =  ProtoInstance();
ProtoInstance50.setUSE(CString("Data"));
field49.addChild(&ProtoInstance50);

Script37.addChild(&field49);

IS& IS51 =  IS();
Connect& connect52 =  Connect();
connect52.setNodeField(CString("isActive"));
connect52.setProtoField(CString("isActive"));
IS51.addChild(&connect52);

Connect& connect53 =  Connect();
connect53.setNodeField(CString("enterTime"));
connect53.setProtoField(CString("enterTime"));
IS51.addChild(&connect53);

Connect& connect54 =  Connect();
connect54.setNodeField(CString("exitTime"));
connect54.setProtoField(CString("exitTime"));
IS51.addChild(&connect54);

Script37.addChild(&IS51);


Script37.setSourceCode(CString("vrmlscript:")+
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
_T("function set_scene(value, time)")+
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
_T("	for (i = 0; i < data.children.length; i++) {")+
_T("		Browser.addRoute(data.children[i],  'value_changed', scene.children[i], 'set_value');")+
_T("		Browser.addRoute(scene.children[i], 'value_changed', data.children[i], 'set_value');")+
_T("	}")+
_T("}")+
_T("function initialize()")+
_T("{")+
_T("	if (data.scene.length) {")+
_T("		set_scene(data.scene, 0);")+
_T("		if (data.startTime) data.startTime = 1;")+
_T("	}")+
_T("}"));
ProtoBody18.addChild(&Script37);

ROUTE& ROUTE55 =  ROUTE();
ROUTE55.setFromNode(CString("Data"));
ROUTE55.setFromField(CString("startTime_changed"));
ROUTE55.setToNode(CString("_world"));
ROUTE55.setToField(CString("set_startTime"));
ProtoBody18.addChild(&ROUTE55);

ROUTE& ROUTE56 =  ROUTE();
ROUTE56.setFromNode(CString("Data"));
ROUTE56.setFromField(CString("stopTime_changed"));
ROUTE56.setToNode(CString("_world"));
ROUTE56.setToField(CString("set_stopTime"));
ProtoBody18.addChild(&ROUTE56);

ROUTE& ROUTE57 =  ROUTE();
ROUTE57.setFromNode(CString("Data"));
ROUTE57.setFromField(CString("scene_changed"));
ROUTE57.setToNode(CString("_world"));
ROUTE57.setToField(CString("set_scene"));
ProtoBody18.addChild(&ROUTE57);

ProtoDeclare8.addChild(&ProtoBody18);

Scene7.addChild(&ProtoDeclare8);

X3D0.setScene(&Scene7);

}
