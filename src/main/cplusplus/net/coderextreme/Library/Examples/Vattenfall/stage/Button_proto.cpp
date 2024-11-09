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
meta3.setContent(CString("Sat, 25 Apr 2015 12:38:17 GMT"));
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
meta6.setContent(CString("Sat, 25 Apr 2015 12:38:17 GMT"));
head1.addMeta(&meta6);

X3D0.setHead(&head1);

Scene& Scene7 =  Scene();
ProtoDeclare& ProtoDeclare8 =  ProtoDeclare();
ProtoDeclare8.setName(CString("Button"));
ProtoInterface& ProtoInterface9 =  ProtoInterface();
field& field10 =  field();
field10.setName(CString("enabled"));
field10.setAccessType(CString("inputOutput"));
field10.setType(CString("SFBool"));
field10.setValue(CString("true"));
ProtoInterface9.addChild(&field10);

field& field11 =  field();
field11.setName(CString("isActive"));
field11.setAccessType(CString("outputOnly"));
field11.setType(CString("SFBool"));
ProtoInterface9.addChild(&field11);

field& field12 =  field();
field12.setName(CString("isOver"));
field12.setAccessType(CString("outputOnly"));
field12.setType(CString("SFBool"));
ProtoInterface9.addChild(&field12);

field& field13 =  field();
field13.setName(CString("isOut"));
field13.setAccessType(CString("outputOnly"));
field13.setType(CString("SFBool"));
ProtoInterface9.addChild(&field13);

field& field14 =  field();
field14.setName(CString("hitNormal_changed"));
field14.setAccessType(CString("outputOnly"));
field14.setType(CString("SFVec3f"));
ProtoInterface9.addChild(&field14);

field& field15 =  field();
field15.setName(CString("hitPoint_changed"));
field15.setAccessType(CString("outputOnly"));
field15.setType(CString("SFVec3f"));
ProtoInterface9.addChild(&field15);

field& field16 =  field();
field16.setName(CString("hitTexCoord_changed"));
field16.setAccessType(CString("outputOnly"));
field16.setType(CString("SFVec2f"));
ProtoInterface9.addChild(&field16);

field& field17 =  field();
field17.setName(CString("touchTime"));
field17.setAccessType(CString("outputOnly"));
field17.setType(CString("SFTime"));
ProtoInterface9.addChild(&field17);

field& field18 =  field();
field18.setName(CString("downTime"));
field18.setAccessType(CString("outputOnly"));
field18.setType(CString("SFTime"));
ProtoInterface9.addChild(&field18);

field& field19 =  field();
field19.setName(CString("overTime"));
field19.setAccessType(CString("outputOnly"));
field19.setType(CString("SFTime"));
ProtoInterface9.addChild(&field19);

field& field20 =  field();
field20.setName(CString("outTime"));
field20.setAccessType(CString("outputOnly"));
field20.setType(CString("SFTime"));
ProtoInterface9.addChild(&field20);

field& field21 =  field();
field21.setName(CString("whichChoice"));
field21.setAccessType(CString("inputOutput"));
field21.setType(CString("SFInt32"));
ProtoInterface9.addChild(&field21);

field& field22 =  field();
field22.setName(CString("choice"));
field22.setAccessType(CString("inputOutput"));
field22.setType(CString("MFNode"));
Transform& Transform23 =  Transform();
Transform23.setDEF(CString("_1"));
field22.addChild(&Transform23);

Transform& Transform24 =  Transform();
Transform24.setDEF(CString("_2"));
field22.addChild(&Transform24);

Transform& Transform25 =  Transform();
Transform25.setDEF(CString("_3"));
field22.addChild(&Transform25);

Transform& Transform26 =  Transform();
Transform26.setDEF(CString("_4"));
field22.addChild(&Transform26);

ProtoInterface9.addChild(&field22);

ProtoDeclare8.addChild(&ProtoInterface9);

ProtoBody& ProtoBody27 =  ProtoBody();
Group& Group28 =  Group();
TouchSensor& TouchSensor29 =  TouchSensor();
TouchSensor29.setDEF(CString("touch_1"));
IS& IS30 =  IS();
Connect& connect31 =  Connect();
connect31.setNodeField(CString("enabled"));
connect31.setProtoField(CString("enabled"));
IS30.addChild(&connect31);

Connect& connect32 =  Connect();
connect32.setNodeField(CString("hitTexCoord_changed"));
connect32.setProtoField(CString("hitTexCoord_changed"));
IS30.addChild(&connect32);

Connect& connect33 =  Connect();
connect33.setNodeField(CString("hitNormal_changed"));
connect33.setProtoField(CString("hitNormal_changed"));
IS30.addChild(&connect33);

Connect& connect34 =  Connect();
connect34.setNodeField(CString("hitPoint_changed"));
connect34.setProtoField(CString("hitPoint_changed"));
IS30.addChild(&connect34);

Connect& connect35 =  Connect();
connect35.setNodeField(CString("isOver"));
connect35.setProtoField(CString("isOver"));
IS30.addChild(&connect35);

Connect& connect36 =  Connect();
connect36.setNodeField(CString("isActive"));
connect36.setProtoField(CString("isActive"));
IS30.addChild(&connect36);

Connect& connect37 =  Connect();
connect37.setNodeField(CString("touchTime"));
connect37.setProtoField(CString("touchTime"));
IS30.addChild(&connect37);

TouchSensor29.addChild(&IS30);

Group28.addChild(&TouchSensor29);

Switch& Switch38 =  Switch();
Switch38.setDEF(CString("Button_1"));
Switch38.setWhichChoice(-1);
IS& IS39 =  IS();
Connect& connect40 =  Connect();
connect40.setNodeField(CString("whichChoice"));
connect40.setProtoField(CString("whichChoice"));
IS39.addChild(&connect40);

Connect& connect41 =  Connect();
connect41.setNodeField(CString("children"));
connect41.setProtoField(CString("choice"));
IS39.addChild(&connect41);

Switch38.addChild(&IS39);

Group28.addChild(&Switch38);

Script& Script42 =  Script();
Script42.setDEF(CString("_button_1"));
Script42.setDirectOutput(True);
field& field43 =  field();
field43.setName(CString("isOut"));
field43.setAccessType(CString("outputOnly"));
field43.setType(CString("SFBool"));
Script42.addChild(&field43);

field& field44 =  field();
field44.setName(CString("overTime"));
field44.setAccessType(CString("outputOnly"));
field44.setType(CString("SFTime"));
Script42.addChild(&field44);

field& field45 =  field();
field45.setName(CString("outTime"));
field45.setAccessType(CString("outputOnly"));
field45.setType(CString("SFTime"));
Script42.addChild(&field45);

field& field46 =  field();
field46.setName(CString("downTime"));
field46.setAccessType(CString("outputOnly"));
field46.setType(CString("SFTime"));
Script42.addChild(&field46);

field& field47 =  field();
field47.setName(CString("set_enabled"));
field47.setAccessType(CString("inputOnly"));
field47.setType(CString("SFBool"));
Script42.addChild(&field47);

field& field48 =  field();
field48.setName(CString("set_isOver"));
field48.setAccessType(CString("inputOnly"));
field48.setType(CString("SFBool"));
Script42.addChild(&field48);

field& field49 =  field();
field49.setName(CString("set_isActive"));
field49.setAccessType(CString("inputOnly"));
field49.setType(CString("SFBool"));
Script42.addChild(&field49);

field& field50 =  field();
field50.setName(CString("set_choice"));
field50.setAccessType(CString("inputOnly"));
field50.setType(CString("MFNode"));
Script42.addChild(&field50);

field& field51 =  field();
field51.setName(CString("isOver"));
field51.setAccessType(CString("initializeOnly"));
field51.setType(CString("SFBool"));
Script42.addChild(&field51);

field& field52 =  field();
field52.setName(CString("isActive"));
field52.setAccessType(CString("initializeOnly"));
field52.setType(CString("SFBool"));
Script42.addChild(&field52);

field& field53 =  field();
field53.setName(CString("button"));
field53.setAccessType(CString("initializeOnly"));
field53.setType(CString("SFNode"));
Switch& Switch54 =  Switch();
Switch54.setUSE(CString("Button_1"));
field53.addChild(Switch54);

Script42.addChild(&field53);

field& field55 =  field();
field55.setName(CString("outChildren"));
field55.setAccessType(CString("initializeOnly"));
field55.setType(CString("SFInt32"));
Script42.addChild(&field55);

field& field56 =  field();
field56.setName(CString("isActiveChildren"));
field56.setAccessType(CString("initializeOnly"));
field56.setType(CString("SFInt32"));
field56.setValue(CString("1"));
Script42.addChild(&field56);

field& field57 =  field();
field57.setName(CString("isOverChildren"));
field57.setAccessType(CString("initializeOnly"));
field57.setType(CString("SFInt32"));
field57.setValue(CString("2"));
Script42.addChild(&field57);

IS& IS58 =  IS();
Connect& connect59 =  Connect();
connect59.setNodeField(CString("isOut"));
connect59.setProtoField(CString("isOut"));
IS58.addChild(&connect59);

Connect& connect60 =  Connect();
connect60.setNodeField(CString("overTime"));
connect60.setProtoField(CString("overTime"));
IS58.addChild(&connect60);

Connect& connect61 =  Connect();
connect61.setNodeField(CString("outTime"));
connect61.setProtoField(CString("outTime"));
IS58.addChild(&connect61);

Connect& connect62 =  Connect();
connect62.setNodeField(CString("downTime"));
connect62.setProtoField(CString("downTime"));
IS58.addChild(&connect62);

Script42.addChild(&IS58);


Script42.setSourceCode(CString("vrmlscript:")+
_T("function choose() {")+
_T("	if (isActive) { button.whichChoice = isOver ? isActiveChildren : outChildren; }")+
_T("	else if (isOver) { button.whichChoice = isOverChildren; }")+
_T("	else { button.whichChoice = outChildren; }")+
_T("}")+
_T("function set_enabled(value, time) { if (value) button.whichChoice = outChildren; } ")+
_T("function set_isOver(value, time) {")+
_T("	isOver = value;")+
_T("	if(isOver) overTime = time;")+
_T("	else  outTime = time;")+
_T("	choose();")+
_T("}")+
_T("function set_isActive(value, time) {")+
_T("	isActive = value;")+
_T("	if (isActive) { downTime = time; choose(); }")+
_T("	else choose();")+
_T("}")+
_T("function set_choice(value, time) {")+
_T("	outChildren = value.length > 0 ? 0 : -1;")+
_T("	isOverChildren = value.length > 1 ? 1 : (value.length > 0 ? 0 : -1);")+
_T("	isActiveChildren = value.length > 2 ? 2 : (value.length > 1 ? 1 : (value.length > 0 ? 0 : -1));")+
_T("	choose();")+
_T("}")+
_T("function initialize() {")+
_T("	if (Browser.getName() == \"Cosmo Player\" && Browser.getVersion() == 1.1)")+
_T("	   return;")+
_T("	set_choice(button.choice, 0);")+
_T("}")+
_T("function eventsProcessed() {")+
_T("	out = !(isOver || isActive);")+
_T("	if (isOut != out) isOut = out;")+
_T("}"));
Group28.addChild(&Script42);

ProtoBody27.addChild(&Group28);

ROUTE& ROUTE63 =  ROUTE();
ROUTE63.setFromNode(CString("touch_1"));
ROUTE63.setFromField(CString("enabled_changed"));
ROUTE63.setToNode(CString("_button_1"));
ROUTE63.setToField(CString("set_enabled"));
ProtoBody27.addChild(&ROUTE63);

ROUTE& ROUTE64 =  ROUTE();
ROUTE64.setFromNode(CString("touch_1"));
ROUTE64.setFromField(CString("isOver"));
ROUTE64.setToNode(CString("_button_1"));
ROUTE64.setToField(CString("set_isOver"));
ProtoBody27.addChild(&ROUTE64);

ROUTE& ROUTE65 =  ROUTE();
ROUTE65.setFromNode(CString("touch_1"));
ROUTE65.setFromField(CString("isActive"));
ROUTE65.setToNode(CString("_button_1"));
ROUTE65.setToField(CString("set_isActive"));
ProtoBody27.addChild(&ROUTE65);

ROUTE& ROUTE66 =  ROUTE();
ROUTE66.setFromNode(CString("Button_1"));
ROUTE66.setFromField(CString("children_changed"));
ROUTE66.setToNode(CString("_button_1"));
ROUTE66.setToField(CString("set_choice"));
ProtoBody27.addChild(&ROUTE66);

ProtoDeclare8.addChild(&ProtoBody27);

Scene7.addChild(&ProtoDeclare8);

X3D0.setScene(&Scene7);

}
